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
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_49[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_50[68];
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<114> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_57 = { 0, 0, 0, 0, 0 } ;
	int* iLocal_58 = NULL;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<74> Local_83 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
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
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	bool bLocal_111 = 0;
	int iLocal_112[1] = { 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	struct<13> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<81> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_141 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[3] = { 0, 0, 0 };
	int iLocal_151 = 0;
	float fLocal_152[68] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	char cLocal_162[16] = "";
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	char cLocal_165[16] = "";
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	char* sLocal_176 = NULL;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	float fLocal_179 = 0f;
	int iLocal_180 = 0;
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
	iLocal_114 = -1;
	iLocal_115 = -1;
	iLocal_120 = -1;
	iLocal_125 = -1;
	iLocal_151 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Local_56.f_5 = -1;
	Local_56.f_0 = -1;
	Local_56.f_1 = 99999.99f;
	func_524(&iLocal_58);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97820[iVar0 /*3*/][0] = -1;
		Global_97820[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_113386.f_32749.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_113386.f_32749.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_113386.f_32749.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_113386.f_32749.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_113386.f_32749.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_113386.f_32749.f_4801 = -15;
		Global_113386.f_32749.f_4802 = 1;
	}
	if (((!__LIB_0__.func_115() && !__LIB_0__.func_109()) && !__LIB_0__.func_109()) && !__LIB_0__.func_114())
	{
		__LIB_6__.func_770(60, 0);
		__LIB_6__.func_770(61, 0);
	}
	func_518();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_517(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_55)
		{
			iLocal_55 = 1;
			if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
			{
				if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64)
				{
					if (!Global_78126)
					{
						iLocal_55 = 0;
					}
					else
					{
						func_516();
						func_515();
					}
					Global_78126 = 0;
				}
				else
				{
					func_516();
					func_515();
				}
			}
		}
		SYSTEM::WAIT(0);
		if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 5)
		{
			iLocal_129 = __LIB_18__.func_173();
			func_477();
			func_475();
			func_443(&iLocal_58);
			func_403();
			func_28();
			func_20();
			__LIB_28__.func_38(&uLocal_153);
		}
		func_1(&iLocal_58);
	}
}

void func_1(int* iParam0)//Position - 0x24C
{
	bool bVar0;
	float fVar1;
	if (!BitTest(Global_113386.f_10016.f_25, 7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_14(__LIB_1__.func_558()))
		{
			bVar0 = false;
			if (BitTest(*iParam0, 6) && BitTest(*iParam0, 12))
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (iParam0->f_2 == -1)
					{
						iParam0->f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
					}
					else
					{
						if (__LIB_35__.func_495())
						{
							iParam0->f_2 = __LIB_1__.func_294(iParam0->f_2, (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000)));
						}
						if (!BitTest(*iParam0, 23))
						{
							func_11(iParam0, &(iParam0->f_9));
						}
						else if (!BitTest(*iParam0, 30))
						{
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&(iParam0->f_9), false, -1))
							{
								if (MISC::GET_GAME_TIMER() > iParam0->f_2)
								{
									if (func_9() != 7 && __LIB_31__.func_821(0, 0))
									{
										func_4(iParam0, func_6(iParam0));
										__LIB_31__.func_820(0);
										MISC::SET_BIT(iParam0, 30);
									}
								}
							}
						}
						else if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_1))
						{
							MISC::CLEAR_BIT(iParam0, 30);
							AUDIO::RELEASE_SOUND_ID(iParam0->f_1);
							iParam0->f_1 = -1;
							iParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (BitTest(*iParam0, 23))
				{
					func_2(iParam0);
				}
				MISC::CLEAR_BIT(iParam0, 30);
				iParam0->f_2 = -1;
			}
		}
	}
}

void func_2(int* iParam0)//Position - 0x3B3
{
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	MISC::CLEAR_BIT(iParam0, 23);
}

void func_4(int* iParam0, struct<3> Param1)//Position - 0x3F5
{
	struct<16> Var0;
	struct<16> Var1;
	Var0 = { __LIB_30__.func_693("EAS", "B", "ALLS", "T_C") };
	Var1 = { __LIB_30__.func_693("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	iParam0->f_1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_1, &Var0, Param1, &Var1, false, 0, false);
}

Vector3 func_6(int* iParam0)//Position - 0x466
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var2 = { __LIB_0__.func_79(iParam0->f_6 - Var1) * Vector(52.5f, 52.5f, 52.5f) };
		Var0 = { Var1 + Var2 };
	}
	return Var0;
}

int func_9()//Position - 0x542
{
	var uVar0;
	uVar0 = __LIB_31__.func_822(Global_113386.f_10016.f_25, 14336, 11);
	return uVar0;
}

void func_11(int* iParam0, char* sParam1)//Position - 0x573
{
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, false, -1);
	MISC::SET_BIT(iParam0, 23);
}

bool func_14(int iParam0)//Position - 0x5C6
{
	return iParam0 == __LIB_30__.func_695();
}

void func_20()//Position - 0x865
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (HUD::DOES_BLIP_EXIST(Global_77137.f_583))
	{
		bVar0 = false;
		if (iLocal_129 != Global_77137.f_582)
		{
			bVar0 = true;
		}
		else if (((((__LIB_0__.func_39(0) || __LIB_0__.func_39(3)) || __LIB_0__.func_39(2)) || __LIB_0__.func_39(4)) || __LIB_0__.func_39(13)) || __LIB_0__.func_39(14))
		{
			bVar0 = true;
		}
		else if (Global_77137.f_590)
		{
			if (!__LIB_0__.func_394(Global_77137.f_584, HUD::GET_BLIP_COORDS(Global_77137.f_583), 1056964608, 0) || __LIB_31__.func_118(Global_77137.f_582, __LIB_6__.func_853(Global_77137.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_77137.f_591)
		{
			if (!__LIB_0__.func_394(Global_77137.f_587, HUD::GET_BLIP_COORDS(Global_77137.f_583), 1056964608, 0) || __LIB_31__.func_118(Global_77137.f_582, __LIB_6__.func_853(Global_77137.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!ENTITY::DOES_ENTITY_EXIST(Global_77137.f_581) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_581, false)) || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_581, false)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_581) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_581, false))
			{
				Global_77137.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_581))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_581, false))
			{
				Global_77137.f_587 = { ENTITY::GET_ENTITY_COORDS(Global_77137.f_581, true) };
			}
			else
			{
				Global_77137.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			HUD::REMOVE_BLIP(&(Global_77137.f_583));
			Global_77137.f_590 = 0;
			Global_77137.f_591 = 0;
			Global_77137.f_581 = 0;
		}
	}
	else
	{
		Global_77137.f_590 = 0;
		Global_77137.f_591 = 0;
		Global_77137.f_581 = 0;
	}
	if ((((((!HUD::DOES_BLIP_EXIST(Global_77137.f_583) && !__LIB_0__.func_39(0)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(13)) && !__LIB_0__.func_39(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_97782[iVar2] != 145 && Global_97792[iVar2] != 0) && ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar2])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar2], false)) && !HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(Global_97772[iVar2]))) && Global_97782[iVar2] == iLocal_129) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_97772[iVar2])))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_97772[iVar2], false))
				{
					Global_77137.f_581 = Global_97772[iVar2];
					Global_77137.f_582 = iLocal_129;
					Global_77137.f_590 = 0;
					Global_77137.f_583 = HUD::ADD_BLIP_FOR_ENTITY(Global_77137.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!HUD::DOES_BLIP_EXIST(Global_77137.f_583) && !__LIB_0__.func_78(Global_77137.f_584, 0f, 0f, 0f, 0))
			{
				Global_77137.f_581 = 0;
				Global_77137.f_582 = iLocal_129;
				Global_77137.f_590 = 1;
				Global_77137.f_583 = HUD::ADD_BLIP_FOR_COORD(Global_77137.f_584);
			}
			if (!HUD::DOES_BLIP_EXIST(Global_77137.f_583) && !__LIB_0__.func_78(Global_77137.f_587, 0f, 0f, 0f, 0))
			{
				Global_77137.f_581 = 0;
				Global_77137.f_582 = iLocal_129;
				Global_77137.f_591 = 1;
				Global_77137.f_583 = HUD::ADD_BLIP_FOR_COORD(Global_77137.f_587);
			}
		}
		else
		{
			Global_77137.f_590 = 0;
			Global_77137.f_591 = 0;
		}
		if (HUD::DOES_BLIP_EXIST(Global_77137.f_583))
		{
			HUD::SET_BLIP_SPRITE(Global_77137.f_583, 225);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77137.f_583, "PVEHICLE" /* GXT: Personal Vehicle */);
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_77137.f_583, false);
			HUD::SET_BLIP_PRIORITY(Global_77137.f_583, 3);
			if (iLocal_129 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_129 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_129 == 2)
			{
				iVar3 = 44;
			}
			HUD::SET_BLIP_COLOUR(Global_77137.f_583, iVar3);
		}
	}
}

void func_28()//Position - 0x10D3
{
	func_343();
	func_257();
	func_70();
	func_29();
}

void func_29()//Position - 0x10EB
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((Local_56.f_29.f_80 && !Local_56.f_29.f_69) && Local_56.f_0 != -1) && __LIB_0__.func_61(Local_56.f_0, 0)) && __LIB_0__.func_61(Local_56.f_0, 5)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1")) == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_56.f_113))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
						if (func_66(iVar1))
						{
							Local_56.f_113 = iVar0;
						}
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_56.f_113, false) && func_66(ENTITY::GET_ENTITY_MODEL(Local_56.f_113)))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_56.f_113, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_56.f_113, Local_56.f_29.f_48, Local_56.f_29.f_51, Local_56.f_29.f_54, false, true, 0))
					{
						if ((!__LIB_0__.func_117(Local_56.f_113) && !__LIB_0__.func_108(Local_56.f_113)) && Local_56.f_113 != Global_77137.f_484[Local_56.f_0])
						{
							__LIB_38__.func_162(Local_56.f_0, Local_56.f_113, 1);
						}
						Local_56.f_113 = 0;
					}
				}
			}
			else
			{
				Local_56.f_113 = 0;
			}
		}
		else
		{
			Local_56.f_113 = 0;
		}
	}
}

int func_66(int iParam0)//Position - 0x71A3
{
	switch (Local_56.f_6)
	{
		case 0:
			return func_68(iParam0);
			break;
		case 1:
			if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		case 3:
			return func_67(iParam0);
			break;
		case 2:
			return (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x7237
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_68(int iParam0)//Position - 0x72AB
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

void func_70()//Position - 0x7324
{
	struct<101> Var0;
	struct<78> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	var uVar29;
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var1.f_9 = 49;
	Var1.f_59 = 2;
	bVar2 = false;
	iVar3 = 0;
	if (iLocal_113 > 0 && iLocal_113 != 99)
	{
		if (((((((((((((((Local_56.f_0 == -1 || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_7, Local_56.f_29.f_10, Local_56.f_29.f_13, false, true, 0)) || ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[Local_56.f_0], false)) && (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0]) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0], true)))) || ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ((ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) - 1f) > 0.15f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0])))) || ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0], true))) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))) || __LIB_0__.func_39(0)) || __LIB_0__.func_39(3)) || __LIB_0__.func_39(2)) || __LIB_0__.func_39(4)) || __LIB_0__.func_39(14)) || __LIB_0__.func_2(0) != bLocal_161) || bLocal_142) || __LIB_5__.func_722(-1082130432))
		{
			iLocal_113 = 99;
		}
	}
	switch (iLocal_113)
	{
		case 0:
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !Global_75485) && !bLocal_142) && !CAM::IS_SCREEN_FADED_OUT())
			{
				if ((((((((((Local_56.f_29.f_80 && Local_56.f_2 == 0) && (Global_77137.f_592[0] != -1 || func_254() != 0)) && Local_56.f_0 != -1) && !iLocal_159) && !__LIB_0__.func_39(0)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(14)) && !__LIB_5__.func_722(-1082130432))
				{
					if (iLocal_115 != -1)
					{
					}
					else if (__LIB_0__.func_61(Local_56.f_0, 0) && __LIB_0__.func_61(Local_56.f_0, 5))
					{
						if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_7, Local_56.f_29.f_10, Local_56.f_29.f_13, false, true, 0) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
						{
							if ((!ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[Local_56.f_0], false)) || (!PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0]) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_484[Local_56.f_0], true)))
							{
								iVar6 = func_254();
								iVar7 = 0;
								while (iVar7 < iVar6)
								{
									if (func_66(func_250(iVar7)))
									{
										iVar5++;
									}
									iVar7++;
								}
								iVar4 = 0;
								while (iVar4 < Global_77137.f_592)
								{
									if (Global_77137.f_592[iVar4] != -1)
									{
										if ((__LIB_11__.func_653(Global_77137.f_592[iVar4], iLocal_129) && Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[Global_77137.f_592[iVar4]] == -15) && (Global_77137.f_592[iVar4] != 200 || !Global_113386.f_25073.f_7))
										{
											iVar5++;
										}
									}
									iVar4++;
								}
								if (iVar5 > 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										iLocal_144 = 1;
										if (Local_56.f_6 == 3)
										{
											__LIB_7__.func_316(&iLocal_114, 3, "WEB_VEH_TRIG2" /* GXT: Press ~a~ to select a special vehicle. */, 0, 0, 0, 0);
										}
										else
										{
											__LIB_7__.func_316(&iLocal_114, 3, "WEB_VEH_TRIG" /* GXT: Press ~a~ to change stored vehicle. */, 0, 0, 0, 0);
										}
										bLocal_161 = __LIB_0__.func_2(0);
										iLocal_113++;
									}
								}
								else if (!iLocal_144)
								{
									if (Local_56.f_6 == 0)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_0__.func_1("HANGAR_NO" /* GXT: Planes purchased from websites or that you land here will be stored here, along with ground vehicles too large for a garage. */))
										{
											__LIB_0__.func_151("HANGAR_NO" /* GXT: Planes purchased from websites or that you land here will be stored here, along with ground vehicles too large for a garage. */, -1);
											StringCopy(&cLocal_162, "HANGAR_NO" /* GXT: Planes purchased from websites or that you land here will be stored here, along with ground vehicles too large for a garage. */, 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 1)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_0__.func_1("MARINA_NO" /* GXT: Boats purchased from websites or that you dock in this slip will be stored here. */))
										{
											__LIB_0__.func_151("MARINA_NO" /* GXT: Boats purchased from websites or that you dock in this slip will be stored here. */, -1);
											StringCopy(&cLocal_162, "MARINA_NO" /* GXT: Boats purchased from websites or that you dock in this slip will be stored here. */, 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 2)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_0__.func_1("HELIPAD_NO" /* GXT: Helicopters purchased from websites or that you land on this helipad will be stored here. */))
										{
											__LIB_0__.func_151("HELIPAD_NO" /* GXT: Helicopters purchased from websites or that you land on this helipad will be stored here. */, -1);
											StringCopy(&cLocal_162, "HELIPAD_NO" /* GXT: Helicopters purchased from websites or that you land on this helipad will be stored here. */, 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 3)
									{
										StringCopy(&Var8, "CAR_GAR_NO" /* GXT: Special vehicles can be collected here. Visit the Store to find new downloadable content. */, 16);
										if (MISC::IS_PS3_VERSION() || __LIB_0__.func_52())
										{
											StringConCat(&Var8, "_1", 16);
										}
										else if (MISC::IS_XBOX360_VERSION() || __LIB_0__.func_53())
										{
											StringConCat(&Var8, "_2", 16);
										}
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_0__.func_1(&Var8))
										{
											__LIB_0__.func_151(&Var8, -1);
											cLocal_162 = { Var8 };
										}
										bVar2 = true;
									}
								}
							}
						}
						else
						{
							iLocal_144 = 0;
						}
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_7__.func_161(0, -1, 0))
			{
				if (iLocal_115 != -1)
				{
					iLocal_113 = 0;
					return;
				}
				if (__LIB_2__.func_187(iLocal_114, 1))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					}
					else
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						}
					}
					__LIB_2__.func_185();
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
					bLocal_109 = -1;
					iLocal_113++;
					return;
				}
			}
			break;
		case 2:
			if (!iLocal_116 || iLocal_117)
			{
				__LIB_1__.func_193(0, 0);
				__LIB_1__.func_318(1, 4, 0, 0, 0);
				__LIB_1__.func_317(1, 2, 1, 1, 1);
				__LIB_1__.func_319("WEB_VEH_TITLE" /* GXT: SELECT VEHICLE */);
				iVar9 = 0;
				while (iVar9 < iLocal_110)
				{
					iLocal_110[iVar9] = 0;
					iVar9++;
				}
				iVar10 = -1;
				iVar11 = 0;
				__LIB_12__.func_98(&(Local_56.f_8), Local_56.f_0);
				iVar13 = 0;
				iVar14 = func_254();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_66(func_250(iVar12)))
					{
						if (iVar10 == -1)
						{
							iVar10 = iVar13;
						}
						if (Local_56.f_8.f_4 == func_250(iVar12))
						{
							bLocal_109 = iVar13;
							iVar11 = 1;
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_77137.f_592)
				{
					if (Global_77137.f_592[iVar12] != -1)
					{
						if ((__LIB_11__.func_653(Global_77137.f_592[iVar12], iLocal_129) && Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[Global_77137.f_592[iVar12]] == -15) && (Global_77137.f_592[iVar12] != 200 || !Global_113386.f_25073.f_7))
						{
							func_142(Global_77137.f_592[iVar12], &Var0, 0, iLocal_129, -1, -1);
							if (iVar10 == -1)
							{
								iVar10 = iVar13;
							}
							if (Local_56.f_8.f_4 == Var0.f_66)
							{
								bLocal_109 = iVar13;
								iVar11 = 1;
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				if (bLocal_109 == -1)
				{
					bLocal_109 = iVar10;
				}
				iVar13 = 0;
				iVar14 = func_254();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_66(func_250(iVar12)))
					{
						MISC::SET_BIT(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
						__LIB_18__.func_477(iVar13, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_250(iVar12)), 0, 1, 0, 0, 0);
						if ((bLocal_109 == iVar13 && iVar11) && Local_56.f_6 != 3)
						{
							__LIB_35__.func_496(iVar13, 4, 0);
						}
						else
						{
							__LIB_35__.func_496(iVar13, 0, 0);
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_77137.f_592)
				{
					if (Global_77137.f_592[iVar12] != -1)
					{
						if ((__LIB_11__.func_653(Global_77137.f_592[iVar12], iLocal_129) && Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[Global_77137.f_592[iVar12]] == -15) && (Global_77137.f_592[iVar12] != 200 || !Global_113386.f_25073.f_7))
						{
							MISC::SET_BIT(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
							func_142(Global_77137.f_592[iVar12], &Var0, 0, iLocal_129, -1, -1);
							if (Global_77137.f_592[iVar12] != 164)
							{
								__LIB_18__.func_477(iVar13, __LIB_5__.func_849(Global_77137.f_592[iVar12]), 0, 1, 0, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								__LIB_18__.func_477(iVar13, "TWOSTRINGS" /* GXT: ~a~ ~a~ */, 2, 1, 0, 0, 0);
								__LIB_26__.func_155(__LIB_5__.func_849(Global_77137.f_592[iVar12]), 0);
								__LIB_26__.func_155("VNX_SWFTC" /* GXT: Classic */, 0);
							}
							else if (Var0.f_67 == 1)
							{
								__LIB_18__.func_477(iVar13, "TWOSTRINGS" /* GXT: ~a~ ~a~ */, 2, 1, 0, 0, 0);
								__LIB_26__.func_155(__LIB_5__.func_849(Global_77137.f_592[iVar12]), 0);
								__LIB_26__.func_155("VNX_SWFTB" /* GXT: Flying Bravo */, 0);
							}
							else
							{
								__LIB_18__.func_477(iVar13, __LIB_5__.func_849(Global_77137.f_592[iVar12]), 0, 1, 0, 0, 0);
							}
							if (bLocal_109 == iVar13 && iVar11)
							{
								__LIB_35__.func_496(iVar13, 4, 0);
							}
							else
							{
								__LIB_35__.func_496(iVar13, 0, 0);
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				__LIB_16__.func_241(bLocal_109, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
						PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
						__LIB_7__.func_287(0, 0, 0, 1);
						__LIB_2__.func_158(0, -1, 1);
						if (func_125())
						{
							if (Global_4539961 != bLocal_109)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								bLocal_109 = Global_4539961;
								__LIB_16__.func_241(bLocal_109, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
				{
					iLocal_119 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar15 = (bLocal_109 - 1);
					while (iVar15 >= 0)
					{
						if (BitTest(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
						{
							bLocal_109 = iVar15;
							bVar16 = true;
							iVar15 = 0;
						}
						iVar15 = (iVar15 + -1);
					}
					if (!bVar16)
					{
						iVar15 = (iLocal_110 * 32 - 1);
						while (iVar15 >= bLocal_109 + 1)
						{
							if (BitTest(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
							{
								bLocal_109 = iVar15;
								bVar16 = true;
								iVar15 = 0;
							}
							iVar15 = (iVar15 + -1);
						}
					}
					if (bVar16)
					{
						__LIB_16__.func_241(bLocal_109, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
				{
					iLocal_119 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar17 = bLocal_109 + 1;
					while (iVar17 <= (iLocal_110 * 32 - 1))
					{
						if (BitTest(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
						{
							bLocal_109 = iVar17;
							bVar18 = true;
							iVar17 = iLocal_110 * 32 + 1;
						}
						iVar17++;
					}
					if (!bVar18)
					{
						iVar17 = 0;
						while (iVar17 <= (bLocal_109 - 1))
						{
							if (BitTest(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
							{
								bLocal_109 = iVar17;
								bVar18 = true;
								iVar17 = iLocal_110 * 32 + 1;
							}
							iVar17++;
						}
					}
					if (bVar18)
					{
						__LIB_16__.func_241(bLocal_109, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar3 == 1)
				{
					bVar19 = false;
					iVar3 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar21 = 0;
					iVar22 = func_254();
					iVar20 = 0;
					while (iVar20 < iVar22)
					{
						if (func_66(func_250(iVar20)))
						{
							if (bLocal_109 == iVar21 && (((((Local_56.f_8.f_4 != func_250(iVar20) || !ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[Local_56.f_0], false)) || Local_56.f_0 == 21) || Local_56.f_0 == 22) || Local_56.f_0 == 23))
							{
								bVar19 = true;
								if ((((!iLocal_118 && Local_56.f_8.f_4 != func_250(iVar20)) || (!iLocal_118 && Local_56.f_0 == 21)) || (!iLocal_118 && Local_56.f_0 == 22)) || (!iLocal_118 && Local_56.f_0 == 23))
								{
									__LIB_1__.func_342("VEH_SELECT_CNFA" /* GXT: Are you sure you wish to use this vehicle? */, 0, 0);
									__LIB_4__.func_222(-1);
									__LIB_1__.func_344(201, "ITEM_YES" /* GXT: Confirm */, -1);
									__LIB_1__.func_344(202, "ITEM_NO" /* GXT: Back */, -1);
									iLocal_118 = 1;
									iVar20 = func_254() + 1;
								}
								else if (Local_56.f_6 == 3)
								{
									if (func_121(func_250(iVar20)))
									{
										iLocal_160 = func_250(iVar20);
										iLocal_116 = 0;
										iLocal_117 = 0;
										bLocal_111 = false;
										iLocal_113++;
									}
									else
									{
										iLocal_159 = 1;
										iLocal_160 = func_250(iVar20);
										iLocal_113 = 99;
									}
								}
								else if (Local_56.f_6 == 0 && func_121(func_250(iVar20)))
								{
									iLocal_160 = func_250(iVar20);
									iLocal_116 = 0;
									iLocal_117 = 0;
									bLocal_111 = false;
									iLocal_113++;
								}
								else
								{
									if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_484[Local_56.f_0], false, true);
										VEHICLE::DELETE_VEHICLE(&(Global_77137.f_484[Local_56.f_0]));
									}
									Var1.f_66 = func_250(iVar20);
									MISC::SET_BIT(&(Var1.f_77), 14);
									__LIB_26__.func_263(Local_56.f_0, &Var1, 0f, 0f, 0f, -1f, 145);
									__LIB_0__.func_313(Local_56.f_0);
									__LIB_12__.func_98(&(Local_56.f_8), Local_56.f_0);
									iVar20 = func_254() + 1;
									iLocal_117 = 1;
								}
							}
							iVar21++;
						}
						iVar20++;
					}
					if (!bVar19)
					{
						iVar20 = 0;
						while (iVar20 < Global_77137.f_592)
						{
							if (Global_77137.f_592[iVar20] != -1)
							{
								if ((__LIB_11__.func_653(Global_77137.f_592[iVar20], iLocal_129) && Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[Global_77137.f_592[iVar20]] == -15) && (Global_77137.f_592[iVar20] != 200 || !Global_113386.f_25073.f_7))
								{
									func_142(Global_77137.f_592[iVar20], &Var0, 0, iLocal_129, -1, -1);
									if (bLocal_109 == iVar21 && ((Local_56.f_8.f_4 != Var0.f_66 || !ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[Local_56.f_0], false)))
									{
										bVar19 = true;
										if (!iLocal_118)
										{
											if (Local_56.f_6 == 3)
											{
												__LIB_1__.func_342("VEH_SELECT_CNF" /* GXT: This will remove any modifications from your currently selected vehicle. Are you sure? */, 0, 0);
											}
											else
											{
												__LIB_1__.func_342("VEH_SELECT_CNFA" /* GXT: Are you sure you wish to use this vehicle? */, 0, 0);
											}
											__LIB_4__.func_222(-1);
											__LIB_1__.func_344(201, "ITEM_YES" /* GXT: Confirm */, -1);
											__LIB_1__.func_344(202, "ITEM_NO" /* GXT: Back */, -1);
											iLocal_118 = 1;
											iVar20 = Global_77137.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_113 = 3;
											iLocal_117 = 1;
											iVar20 = Global_77137.f_592 + 1;
										}
										else
										{
											if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_484[Local_56.f_0], false, true);
												VEHICLE::DELETE_VEHICLE(&(Global_77137.f_484[Local_56.f_0]));
											}
											func_142(Global_77137.f_592[iVar20], &Var0, 0, iLocal_129, -1, -1);
											MISC::SET_BIT(&(Var0.f_77), 14);
											if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_66))
											{
												MISC::SET_BIT(&(Var0.f_77), 22);
											}
											__LIB_26__.func_263(Local_56.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											__LIB_0__.func_313(Local_56.f_0);
											__LIB_12__.func_98(&(Local_56.f_8), Local_56.f_0);
											iVar20 = Global_77137.f_592 + 1;
											iLocal_117 = 1;
										}
									}
									iVar21++;
								}
							}
							iVar20++;
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_113 = 99;
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_119)
			{
				__LIB_1__.func_342("", 0, 0);
				__LIB_4__.func_222(-1);
				__LIB_1__.func_344(201, "ITEM_SELECT" /* GXT: Select */, -1);
				__LIB_1__.func_344(202, "ITEM_EXIT" /* GXT: Exit */, -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			__LIB_25__.func_745(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			break;
		case 3:
			if (!iLocal_116 || iLocal_117)
			{
				__LIB_1__.func_193(0, 0);
				__LIB_1__.func_318(1, 0, 0, 0, 0);
				__LIB_1__.func_317(1, 1, 1, 1, 1);
				iVar23 = 0;
				while (iVar23 < iLocal_112)
				{
					iLocal_112[iVar23] = 0;
					iVar23++;
				}
				__LIB_1__.func_319("WEB_VEH_TITLE2" /* GXT: SELECT FLAG */);
				iVar23 = 0;
				while (iVar23 < 25)
				{
					StringCopy(&Var24, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var24, iVar23, 16);
					__LIB_18__.func_477(iVar23, &Var24, 0, 1, 0, 0, 0);
					MISC::SET_BIT(&(iLocal_112[(iVar23 / 32)]), (iVar23 % 32));
					iVar23++;
				}
				if (Local_131.f_12 == 0)
				{
					bLocal_111 = Global_113386.f_25182.f_313[200];
				}
				else if (Local_131.f_12 == 1)
				{
					bLocal_111 = Global_113386.f_25182.f_626[200];
				}
				else
				{
					bLocal_111 = Global_113386.f_25182.f_939[200];
				}
				__LIB_16__.func_241(bLocal_111, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
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
						if (func_125())
						{
							if (Global_4539961 != bLocal_111)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								bLocal_111 = Global_4539961;
								__LIB_16__.func_241(bLocal_111, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
				{
					iLocal_119 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar25 = (bLocal_111 - 1);
					while (iVar25 >= 0)
					{
						if (BitTest(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
						{
							bLocal_111 = iVar25;
							bVar26 = true;
							iVar25 = 0;
						}
						iVar25 = (iVar25 + -1);
					}
					if (!bVar26)
					{
						iVar25 = 31;
						while (iVar25 >= bLocal_111 + 1)
						{
							if (BitTest(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
							{
								bLocal_111 = iVar25;
								bVar26 = true;
								iVar25 = bLocal_111;
							}
							iVar25 = (iVar25 + -1);
						}
					}
					if (bVar26)
					{
						__LIB_16__.func_241(bLocal_111, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
				{
					iLocal_119 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar27 = bLocal_111 + 1;
					while (iVar27 <= 31)
					{
						if (BitTest(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
						{
							bLocal_111 = iVar27;
							bVar28 = true;
							iVar27 = 31;
						}
						iVar27++;
					}
					if (!bVar28)
					{
						iVar27 = 0;
						while (iVar27 <= (bLocal_111 - 1))
						{
							if (BitTest(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
							{
								bLocal_111 = iVar27;
								bVar28 = true;
								iVar27 = bLocal_111;
							}
							iVar27++;
						}
					}
					if (bVar28)
					{
						__LIB_16__.func_241(bLocal_111, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar3 == 1)
				{
					iVar3 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[Local_56.f_0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_484[Local_56.f_0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_77137.f_484[Local_56.f_0]));
					}
					uVar29 = bLocal_111 + 1;
					if (iLocal_129 == 0)
					{
						Global_113386.f_25182.f_313[200] = uVar29;
					}
					else if (iLocal_129 == 1)
					{
						Global_113386.f_25182.f_626[200] = uVar29;
					}
					else if (iLocal_129 == 2)
					{
						Global_113386.f_25182.f_939[200] = uVar29;
					}
					func_142(200, &Var0, 0, iLocal_129, -1, -1);
					MISC::SET_BIT(&(Var0.f_77), 14);
					if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_66))
					{
						MISC::SET_BIT(&(Var0.f_77), 22);
					}
					__LIB_26__.func_263(Local_56.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					__LIB_0__.func_313(Local_56.f_0);
					__LIB_12__.func_98(&(Local_56.f_8), Local_56.f_0);
					iLocal_117 = 1;
					iLocal_113 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_113 = (iLocal_113 - 1);
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_119)
			{
				__LIB_1__.func_342("", 0, 0);
				__LIB_4__.func_222(-1);
				__LIB_1__.func_344(201, "ITEM_SELECT" /* GXT: Select */, -1);
				__LIB_1__.func_344(202, "ITEM_EXIT" /* GXT: Exit */, -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			__LIB_25__.func_745(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			break;
		case 70:
			break;
		case 99:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (!AUDIO::IS_PLAYER_VEH_RADIO_ENABLE())
					{
						AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
					}
				}
			}
			__LIB_7__.func_49(1, -1);
			iLocal_113 = 0;
			__LIB_7__.func_249(&iLocal_114);
			iLocal_114 = -1;
			break;
	}
	if (!bVar2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_162))
		{
			if ((((__LIB_0__.func_1("HANGAR_NO" /* GXT: Planes purchased from websites or that you land here will be stored here, along with ground vehicles too large for a garage. */) || __LIB_0__.func_1("MARINA_NO" /* GXT: Boats purchased from websites or that you dock in this slip will be stored here. */)) || __LIB_0__.func_1("HELIPAD_NO" /* GXT: Helicopters purchased from websites or that you land on this helipad will be stored here. */)) || __LIB_0__.func_1("CAR_GAR_NO_1" /* GXT: Special vehicles can be collected here. Visit PlayStation®Store to find new downloadable content. */)) || __LIB_0__.func_1("CAR_GAR_NO_2" /* GXT: Special vehicles can be collected here. Visit the Xbox Store to find new downloadable content. */))
			{
				HUD::CLEAR_HELP(true);
			}
			StringCopy(&cLocal_162, "", 16);
		}
	}
}

int func_121(int iParam0)//Position - 0xD4AA
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

int func_125()//Position - 0xD694
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4539961 > -1)
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_142(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)//Position - 0x10974
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	char* sVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	char* sVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	uParam1->f_66 = __LIB_4__.func_65(iParam0, iParam4);
	if (uParam1->f_66 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_66 == joaat("frogger"))
	{
		uParam1->f_66 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	__LIB_4__.func_583(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (__LIB_0__.func_895(iParam0))
	{
		if (Global_77052)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	*uParam1 = 0;
	if (iParam0 == 360)
	{
		*uParam1 = 4;
	}
	uParam1->f_9[48] = 0;
	if (iParam0 == 447)
	{
		if (iParam4 == -1)
		{
			uParam1->f_9[48] = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_9[48] = 11;
		}
	}
	else if (__LIB_1__.func_323(uParam1->f_66))
	{
		uParam1->f_9[48] = 1;
	}
	uParam1->f_99 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_99 = 4;
	}
	uParam1->f_9[42] = 0;
	switch (uParam1->f_66)
	{
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			uParam1->f_9[42] = 4;
			break;
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
			uParam1->f_9[42] = 4;
			break;
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
			uParam1->f_9[42] = 1;
			break;
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
			uParam1->f_9[42] = 1;
			break;
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			uParam1->f_9[42] = 4;
			break;
		default:
			if (__LIB_1__.func_932(uParam1->f_66))
			{
				uParam1->f_97 = 3;
				uParam1->f_99 = 111;
			}
			break;
	}
	uParam1->f_9[41] = 0;
	if (iParam0 == 449)
	{
		uParam1->f_9[41] = 1;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_77052)
		{
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382) || iParam0 == 391)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (__LIB_0__.func_595(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
	{
		uParam1->f_80 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_77051;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_113386.f_25182.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_113386.f_25182.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_113386.f_25182.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar1)
		{
			case 1:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 2:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 3:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 4:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 5:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 6:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 7:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 8:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 9:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 10:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 11:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 12:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 13:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 14:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 15:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 16:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 17:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 18:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 19:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 20:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 21:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 22:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 23:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 24:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			case 25:
				__LIB_5__.func_110(__LIB_41__.func_37(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
				break;
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar1)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 1;
				break;
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 2;
				break;
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 3;
				break;
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 8;
				break;
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 4;
				break;
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 5;
				break;
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 7;
				break;
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 6;
				break;
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 1:
				if (__LIB_5__.func_108(iParam0))
				{
					if (iParam0 != 164)
					{
						if (__LIB_5__.func_667(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (__LIB_35__.func_497(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
					}
				}
				else if (__LIB_0__.func_895(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_97 = 93;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_5__.func_666(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 89;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else if (__LIB_5__.func_665(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			case 2:
				if (__LIB_5__.func_108(iParam0))
				{
					if (iParam0 != 164)
					{
						if (__LIB_5__.func_667(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (__LIB_35__.func_497(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar5;
						}
						else
						{
							uParam1->f_67 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_67 = __LIB_19__.func_209(__LIB_41__.func_37(iParam0, iVar1));
					}
				}
				else if (__LIB_0__.func_895(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_97 = 106;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_97 = 108;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_5__.func_666(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 67;
					uParam1->f_67 = -1;
				}
				else if (__LIB_5__.func_665(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			case 3:
				if (__LIB_5__.func_108(iParam0))
				{
					if (__LIB_5__.func_667(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (__LIB_35__.func_497(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (__LIB_0__.func_895(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_5__.func_666(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 28;
					uParam1->f_67 = -1;
				}
				else if (__LIB_5__.func_665(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			case 4:
				if (__LIB_5__.func_108(iParam0))
				{
					if (__LIB_5__.func_667(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (__LIB_35__.func_497(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (__LIB_0__.func_895(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_97 = 101;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_97 = 48;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_5__.func_666(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (__LIB_5__.func_665(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (__LIB_0__.func_264(iVar14, &sVar15, &iVar16, &uVar17, &uVar18))
					{
						if (MISC::ARE_STRINGS_EQUAL(&sVar15, "ORANGE" /* GXT: Orange */) && iVar16 == 1)
						{
							uParam1->f_5 = uVar17;
							uParam1->f_6 = uVar18;
							iVar14 = -99;
						}
						iVar14++;
					}
					uParam1->f_67 = -1;
				}
				break;
			case 5:
				if (__LIB_0__.func_895(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_97 = 98;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else if (__LIB_5__.func_666(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 41;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (__LIB_5__.func_665(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (__LIB_0__.func_264(iVar19, &sVar20, &iVar21, &uVar22, &uVar23))
					{
						if (MISC::ARE_STRINGS_EQUAL(&sVar20, "LIME_GREEN" /* GXT: Lime Green */) && iVar21 == 1)
						{
							uParam1->f_5 = uVar22;
							uParam1->f_6 = uVar23;
							iVar19 = -99;
						}
						iVar19++;
					}
					uParam1->f_67 = -1;
				}
				break;
			case 6:
				if (__LIB_0__.func_895(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_97 = 5;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_97 = 24;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_5__.func_666(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else if (__LIB_5__.func_665(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_67 = -1;
				}
				break;
			case 7:
				if (uParam1->f_66 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else if (__LIB_0__.func_895(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_97 = 1;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_97 = 0;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_5__.func_666(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_97 = 0;
					uParam1->f_67 = -1;
				}
				else if (__LIB_5__.func_665(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			case 8:
				if (__LIB_0__.func_895(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_97 = 7;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_97 = 78;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_5__.func_666(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 27;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (__LIB_5__.func_665(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				break;
			default:
				break;
			}
	}
	if (iVar1 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_67 = -1;
				break;
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_67 = -1;
				break;
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_67 = -1;
				break;
			case 210:
				if (iParam5 != 29)
				{
					uParam1->f_5 = 28;
					uParam1->f_6 = 0;
					uParam1->f_7 = 14;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 66;
					uParam1->f_7 = 63;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
				}
				break;
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_67 = -1;
				break;
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_67 = -1;
				break;
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_97 = 0;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
				break;
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			case 363:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 425:
				uParam1->f_5 = 153;
				uParam1->f_6 = 159;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 428:
				uParam1->f_5 = 12;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 431:
				uParam1->f_5 = 153;
				uParam1->f_6 = 154;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 434:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 437:
				uParam1->f_5 = 13;
				uParam1->f_6 = 131;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 426:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 429:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 432:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 435:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 438:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 427:
				uParam1->f_5 = 131;
				uParam1->f_6 = 135;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 430:
				uParam1->f_5 = 131;
				uParam1->f_6 = 39;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 433:
				uParam1->f_5 = 87;
				uParam1->f_6 = 138;
				uParam1->f_7 = 7;
				uParam1->f_8 = 135;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 436:
				uParam1->f_5 = 12;
				uParam1->f_6 = 55;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 439:
				uParam1->f_5 = 131;
				uParam1->f_6 = 55;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 211:
				uParam1->f_5 = 30;
				uParam1->f_6 = 30;
				uParam1->f_7 = 30;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 145:
				uParam1->f_5 = 68;
				uParam1->f_6 = 2;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 122:
				uParam1->f_5 = 111;
				uParam1->f_6 = 64;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 440:
				uParam1->f_5 = 6;
				uParam1->f_6 = 120;
				uParam1->f_7 = 7;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 389:
				uParam1->f_5 = 29;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 5;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_66 = joaat("phantom3");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_66 = joaat("hauler2");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
	}
	if (__LIB_1__.func_177(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_66 = __LIB_3__.func_328();
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 364)
	{
		uParam1->f_5 = 32;
		uParam1->f_6 = 112;
		uParam1->f_7 = 25;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 387)
	{
		uParam1->f_6 = 120;
	}
	if (iParam0 == 400)
	{
		uParam1->f_5 = 64;
		uParam1->f_6 = 2;
		uParam1->f_7 = 68;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 401)
	{
		uParam1->f_5 = 5;
		uParam1->f_6 = 106;
		uParam1->f_7 = 5;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 402)
	{
		uParam1->f_66 = __LIB_1__.func_391();
		uParam1->f_5 = 9;
		uParam1->f_7 = 7;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 409)
	{
		uParam1->f_5 = 141;
		uParam1->f_7 = 73;
		uParam1->f_8 = 112;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_69 = 6;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 408)
	{
		uParam1->f_5 = 119;
		uParam1->f_6 = 119;
		uParam1->f_7 = 1;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 407)
	{
		uParam1->f_5 = 111;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 406)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 12;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 404)
	{
		uParam1->f_5 = 112;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 403)
	{
		uParam1->f_5 = 8;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 487)
	{
		uParam1->f_5 = 102;
		uParam1->f_6 = 144;
		uParam1->f_7 = 105;
		uParam1->f_8 = 144;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (iParam0 == 485)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (iParam0 == 486)
	{
		uParam1->f_5 = 102;
		uParam1->f_6 = 102;
		uParam1->f_7 = 105;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	switch (iParam0)
	{
		case 518:
			uParam1->f_66 = __LIB_0__.func_704();
			uParam1->f_5 = 0;
			uParam1->f_6 = 15;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			break;
		case 529:
			uParam1->f_5 = 27;
			uParam1->f_6 = 27;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 532:
			uParam1->f_5 = 155;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 155;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 531:
			uParam1->f_5 = 155;
			uParam1->f_6 = 13;
			uParam1->f_7 = 6;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 528:
			uParam1->f_5 = 154;
			uParam1->f_6 = 154;
			uParam1->f_7 = 0;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 526:
			uParam1->f_5 = 151;
			uParam1->f_6 = 154;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 530:
			uParam1->f_5 = 154;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 527:
			uParam1->f_5 = 152;
			uParam1->f_6 = 46;
			uParam1->f_7 = 52;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 525:
			uParam1->f_5 = 152;
			uParam1->f_6 = 46;
			uParam1->f_7 = 52;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			MISC::SET_BIT(&(uParam1->f_77), 3);
			break;
		case 523:
			uParam1->f_5 = 131;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_9[9] = 4;
			break;
		case 524:
			uParam1->f_5 = 12;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 520:
			uParam1->f_9[24] = 3;
			break;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_250(int iParam0)//Position - 0x1B040
{
	int iVar0;
	int iVar1[128];
	if (__LIB_6__.func_790(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (BitTest(Global_113386.f_18574[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (__LIB_0__.func_116() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_30__.func_866(33, 0) && !__LIB_11__.func_924(joaat("TEXT_MONKEY_CAR_UNLOCK")))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_113386.f_25073.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_113386.f_25073.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_113386.f_25073.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_113386.f_25073.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_113386.f_25073.f_7)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

int func_254()//Position - 0x1B246
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_6__.func_790(1, 1))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (BitTest(Global_113386.f_18574[45 /*6*/], 3))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (__LIB_0__.func_116() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_30__.func_866(33, 0) && !__LIB_11__.func_924(joaat("TEXT_MONKEY_CAR_UNLOCK")))
		{
			iVar0++;
		}
		if (Global_113386.f_25073.f_3)
		{
			iVar0++;
		}
		if (Global_113386.f_25073.f_4)
		{
			iVar0++;
		}
		if (Global_113386.f_25073.f_5)
		{
			iVar0++;
		}
		if (Global_113386.f_25073.f_6)
		{
			iVar0++;
		}
		if (Global_113386.f_25073.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

void func_257()//Position - 0x1B38C
{
	var uVar0[10];
	bool bVar1;
	int iVar2;
	float fVar3;
	char* sVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<3> Var14;
	bool bVar15;
	float fVar16;
	int iVar17;
	struct<3> Var18;
	struct<3> Var19;
	int iVar20;
	struct<3> Var21;
	bool bVar22;
	float fVar23;
	int iVar24;
	bool bVar25;
	struct<4> Var26;
	bool bVar27;
	int iVar28;
	struct<4> Var29;
	struct<60> Var30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	float fVar35;
	int iVar36;
	struct<60> Var37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	bVar1 = false;
	if ((((((((((((((((Local_56.f_29.f_80 && Local_56.f_29.f_69) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && Local_56.f_2 == 0) && Local_56.f_0 != -1) && __LIB_0__.func_61(Local_56.f_0, 0)) && __LIB_0__.func_61(Local_56.f_0, 5)) && !__LIB_0__.func_39(0)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(5)) && !__LIB_0__.func_39(14)) && !Global_75485) && !__LIB_0__.func_2(1)) && !__LIB_0__.func_198()) || (((Local_56.f_3 > 1 && !__LIB_0__.func_2(0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !__LIB_0__.func_198()))
	{
		func_341(Local_56.f_0, &Local_83);
		fVar3 = 0f;
		sVar4 = "ANIM@APT_TRANS@GARAGE";
		Var5 = { 198.3659f, -1020.2732f, -100f };
		Var6 = { Var5 };
		Var7 = { 198.9538f, -1026.1301f, -100f };
		iVar8 = func_340(Local_56.f_0);
		switch (Local_56.f_3)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					Local_56.f_3 = 10;
					return;
				}
				if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0) && (__LIB_4__.func_230(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_56.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)) && (iVar8 == iLocal_129 || iVar8 == 145))
				{
					if (func_338())
					{
						bVar9 = true;
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
								{
									iVar10 = ENTITY::GET_ENTITY_MODEL(iVar2);
									if (((((((((!func_66(iVar10) || __LIB_0__.func_117(iVar2)) || __LIB_0__.func_108(iVar2)) || !__LIB_7__.func_193(iVar10, 0)) || VEHICLE::IS_BIG_VEHICLE(iVar2)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar10))) || iVar10 == joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar2)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("taxi_procedural")) > 0))
									{
										bVar9 = false;
									}
								}
								else
								{
									bVar9 = false;
								}
							}
						}
						else if (STREAMING::DOES_ANIM_DICT_EXIST(sVar4))
						{
							STREAMING::REQUEST_ANIM_DICT(sVar4);
							if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
							{
								bVar9 = false;
							}
						}
						if (bVar9)
						{
							__LIB_7__.func_316(&iLocal_115, 3, "WEB_VEH_ENTER" /* GXT: Press ~a~ to enter garage. */, 0, 0, 0, 0);
							iLocal_175 = 0;
							Local_56.f_3 = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_0__.func_1("WEB_VEH_INV" /* GXT: This vehicle cannot be stored in this garage. */))
							{
								__LIB_0__.func_151("WEB_VEH_INV" /* GXT: This vehicle cannot be stored in this garage. */, -1);
								StringCopy(&cLocal_165, "WEB_VEH_INV" /* GXT: This vehicle cannot be stored in this garage. */, 16);
								bVar1 = true;
							}
						}
					}
					else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_0__.func_1("WEB_VEH_FULL" /* GXT: Your garage is full. Enter on foot to remove a vehicle. */))
					{
						__LIB_0__.func_151("WEB_VEH_FULL" /* GXT: Your garage is full. Enter on foot to remove a vehicle. */, -1);
						StringCopy(&cLocal_165, "WEB_VEH_FULL" /* GXT: Your garage is full. Enter on foot to remove a vehicle. */, 16);
						bVar1 = true;
					}
				}
				break;
			case 1:
				if (!iLocal_173)
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_173 = 0;
						STREAMING::REQUEST_ANIM_DICT(sVar4);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
						{
							iLocal_173 = 1;
						}
					}
					else
					{
						STREAMING::REMOVE_ANIM_DICT(sVar4);
						iLocal_173 = 1;
					}
				}
				iVar11 = 1;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
						{
							iVar12 = ENTITY::GET_ENTITY_MODEL(iVar2);
							if ((((((((!func_66(iVar12) || __LIB_0__.func_117(iVar2)) || __LIB_0__.func_108(iVar2)) || VEHICLE::IS_BIG_VEHICLE(iVar2)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar12) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar12)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar12))) || iVar12 == joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar2)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("taxi_procedural")) > 0))
							{
								iVar11 = 0;
							}
						}
						else
						{
							iVar11 = 0;
						}
					}
				}
				if (((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0) && (__LIB_4__.func_230(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_56.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_338()) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)) && !__LIB_0__.func_198()) && (iVar8 == iLocal_129 || iVar8 == 145)) && iVar11)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || (STREAMING::HAS_ANIM_DICT_LOADED(sVar4) || !STREAMING::DOES_ANIM_DICT_EXIST(sVar4)))
					{
						if (__LIB_2__.func_187(iLocal_115, 1))
						{
							__LIB_7__.func_249(&iLocal_115);
							iLocal_173 = 0;
							Local_56.f_3 = 2;
						}
						__LIB_25__.func_609(47, 0);
						__LIB_21__.func_894(47, 0);
						Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
						if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
						{
							if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_112))
							{
								if ((MISC::GET_FRAME_COUNT() % 10) == 0)
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_56.f_112);
								}
							}
							StringCopy(&Global_39347, "v_garagem_sp", 32);
						}
						if (!iLocal_172 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar13 = __LIB_35__.func_498(Local_56.f_0);
								__LIB_12__.func_98(&Var14, iVar13);
								Var6 = { Var14 };
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var6, 20f, 0);
							}
							else
							{
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var7 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_172 = 1;
						}
					}
				}
				else
				{
					if (iLocal_172 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_172 = 0;
					}
					iLocal_173 = 0;
					__LIB_7__.func_249(&iLocal_115);
					STREAMING::REMOVE_ANIM_DICT(sVar4);
					Local_56.f_3 = 0;
				}
				break;
			case 2:
				__LIB_25__.func_609(47, 0);
				__LIB_21__.func_894(47, 0);
				PLAYER::FORCE_CLEANUP(8);
				Global_77137.f_577 = 1;
				Global_77137.f_578 = { Local_56.f_29.f_55 };
				iLocal_155 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
					{
						if (__LIB_4__.func_230(ENTITY::GET_ENTITY_HEADING(iVar2), Local_56.f_29.f_68, 90f))
						{
							iLocal_175 = 0;
						}
						else
						{
							iLocal_175 = 1;
						}
						ENTITY::SET_ENTITY_PROOFS(iVar2, true, true, true, true, true, true, false, false);
						MISC::CLEAR_AREA_OF_OBJECTS(Local_83.f_86[0 /*6*/], 20f, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_83.f_86[0 /*6*/], 20f, 0);
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_83.f_86[0 /*6*/], 7f);
						ENTITY::SET_ENTITY_COORDS(iVar2, Local_83.f_86[0 /*6*/], true, false, false, true);
						if (iLocal_175 && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_HEADING(iVar2, (Local_83.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							ENTITY::SET_ENTITY_HEADING(iVar2, Local_83.f_86[0 /*6*/].f_3.f_2);
						}
						if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 0, -1);
							PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
					__LIB_17__.func_404(&(Local_83[1 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
					Local_56.f_3 = 3;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && !ENTITY::IS_ENTITY_DEAD(iLocal_168, false))
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_168, true))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_168);
						}
					}
					iLocal_168 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_168)))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_168, false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false))
						{
							if (!bVar15)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_168, Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0))
								{
									bVar15 = true;
								}
							}
							if (!bVar15)
							{
								fVar16 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_168, true), Local_83[0 /*15*/]);
								if (fVar16 < (5f * 5f))
								{
									bVar15 = true;
								}
							}
							if (bVar15)
							{
								iVar17 = __LIB_0__.func_314(24);
								if (__LIB_26__.func_572(&Local_141, 24))
								{
									func_316(&Local_141, __LIB_18__.func_173());
									if (ENTITY::DOES_ENTITY_EXIST(iVar17))
									{
										VEHICLE::DELETE_VEHICLE(&iVar17);
									}
								}
								if (Local_56.f_0 == 21)
								{
									MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, true, false, false, false);
									__LIB_39__.func_924(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_56.f_0 == 22)
								{
									MISC::CLEAR_AREA(-62.0307f, -1839.8585f, 25.6787f, 5f, true, false, false, false);
									__LIB_39__.func_924(iLocal_168, -62.0307f, -1839.8585f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_56.f_0 == 23)
								{
									MISC::CLEAR_AREA(-234.7648f, -1150.3105f, 21.9224f, 5f, true, false, false, false);
									__LIB_39__.func_924(iLocal_168, -234.7648f, -1150.3105f, 21.9224f, 270.8741f, 24, 0);
								}
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168, 5f);
							}
						}
					}
					else
					{
						iLocal_168 = 0;
					}
					Var18 = { Local_56.f_29 * Vector(2f, 2f, 2f) + Local_56.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var19 = { Local_56.f_29 * Vector(1f, 1f, 1f) + Local_56.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29, Var18.f_0, Var18.f_1, Local_56.f_29.f_3.f_2, Local_56.f_29.f_6, false, true, 0))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							case 1:
								sLocal_176 = "gar_open_2_left";
								break;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var18.f_0, Var18.f_1, Local_56.f_29.f_2, Var19.f_0, Var19.f_1, Local_56.f_29.f_3.f_2, Local_56.f_29.f_6, false, true, 0))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var19.f_0, Var19.f_1, Local_56.f_29.f_2, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_right";
								break;
							case 1:
								sLocal_176 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
							}
					}
					MISC::CLEAR_AREA_OF_OBJECTS(Local_83.f_73[0 /*4*/], 20f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_83.f_86[0 /*6*/], 20f, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_83.f_73[0 /*4*/], true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_83.f_73[0 /*4*/].f_3);
					iLocal_120 = PED::CREATE_SYNCHRONIZED_SCENE(Local_83.f_73[0 /*4*/], 0f, 0f, Local_83.f_73[0 /*4*/].f_3, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1000f, 0);
					__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
					__LIB_17__.func_404(&(Local_83[0 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
					Local_56.f_3 = 4;
				}
				Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_56.f_112);
					}
					StringCopy(&Global_39347, "v_garagem_sp", 32);
				}
				if (!iLocal_172)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar20 = __LIB_35__.func_498(Local_56.f_0);
						__LIB_12__.func_98(&Var21, iVar20);
						Var6 = { Var21 };
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var6, 20f, 0);
					}
					else
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var7, 20f, 0);
					}
				}
				MISC::SET_BIT(&(Local_131.f_9), 25);
				__LIB_36__.func_236(198.0043f, -999.7775f, -100f, 50f, 0);
				__LIB_0__.func_313(Local_56.f_0);
				__LIB_0__.func_313(26);
				__LIB_0__.func_313(29);
				__LIB_0__.func_313(32);
				__LIB_0__.func_313(28);
				__LIB_0__.func_313(31);
				__LIB_0__.func_313(34);
				__LIB_0__.func_313(27);
				__LIB_0__.func_313(30);
				__LIB_0__.func_313(33);
				SYSTEM::SETTIMERA(0);
				iLocal_174 = 0;
				break;
			case 4:
				bVar22 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_56.f_112);
					}
					StringCopy(&Global_39347, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
				}
				if (__LIB_11__.func_785())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_110) && CAM::IS_CAM_RENDERING(Local_56.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_110))
					{
						bVar22 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0 /*15*/].f_14 * 1000f))
					{
						bVar22 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_111) && CAM::IS_CAM_RENDERING(Local_56.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_111))
					{
						bVar22 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0 /*15*/].f_14 * 1000f))
					{
						bVar22 = false;
					}
				}
				else
				{
					bVar22 = false;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
				{
					fVar23 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_120);
					if (fVar23 < 0.4f)
					{
						bVar22 = false;
					}
				}
				if (bVar22)
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_56.f_3 = 5;
				}
				break;
			case 5:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar24 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iVar24, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iVar24, "hold", (2250f / 1000f));
					__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
						CAM::DESTROY_CAM(Local_56.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
						CAM::DESTROY_CAM(Local_56.f_111, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
						iLocal_178 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PLAYER::FORCE_CLEANUP(8);
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
					}
					iLocal_120 = -1;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 194.53943f, -1026.32f, -100f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 334.1665f);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 6;
				}
				break;
			case 6:
				func_308(Local_56.f_0);
				if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::TIMERA() > 2250)
				{
					STREAMING::REMOVE_ANIM_DICT(sVar4);
					__LIB_11__.func_786();
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					CAM::DO_SCREEN_FADE_IN(800);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					SYSTEM::SETTIMERA(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					Local_56.f_3 = 10;
				}
				break;
			case 3:
				func_308(Local_56.f_0);
				bVar25 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_56.f_112);
					}
					StringCopy(&Global_39347, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, "v_garagem_sp");
				}
				if (__LIB_11__.func_785())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_110) && CAM::IS_CAM_RENDERING(Local_56.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_110))
					{
						bVar25 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[1 /*15*/].f_14 * 1000f))
					{
						bVar25 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_111) && CAM::IS_CAM_RENDERING(Local_56.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_111))
					{
						bVar25 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[1 /*15*/].f_14 * 1000f))
					{
						bVar25 = false;
					}
				}
				else
				{
					bVar25 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Var26 = { 0f, 0f, 0f };
					Var26.f_3 = 0f;
					func_299(PLAYER::PLAYER_PED_ID(), Local_83.f_86[0 /*6*/], Local_83.f_66[0 /*3*/], ((Local_83[1 /*15*/].f_14 * 1000f) - 500f), Var26, 2, &fVar3);
				}
				if (bVar25)
				{
					__LIB_11__.func_786();
					SYSTEM::SETTIMERA(0);
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_56.f_3 = 35;
				}
				break;
			case 35:
				bVar27 = true;
				func_308(Local_56.f_0);
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83.f_61[1] * 1000f))
				{
					bVar27 = false;
				}
				if (bVar27)
				{
					__LIB_11__.func_786();
					__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
						CAM::DESTROY_CAM(Local_56.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
						CAM::DESTROY_CAM(Local_56.f_111, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
						iLocal_178 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PLAYER::FORCE_CLEANUP(8);
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
						{
							iVar28 = __LIB_35__.func_498(Local_56.f_0);
							__LIB_12__.func_98(&Var29, iVar28);
							ENTITY::SET_ENTITY_COORDS(iVar2, Var29, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar2, Var29.f_3);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar2, true);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, false, true, false);
							VEHICLE::SET_VEHICLE_LIGHTS(iVar2, 4);
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar2, 1, false);
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar2, 0, false);
							AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
							ENTITY::SET_ENTITY_PROOFS(iVar2, false, false, false, false, false, false, false, false);
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar2, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
							Var30.f_9 = 49;
							Var30.f_59 = 2;
							__LIB_6__.func_760(iVar2, &Var30);
							__LIB_26__.func_263(iVar28, &Var30, 0f, 0f, 0f, -1f, 145);
							__LIB_38__.func_162(iVar28, iVar2, 1);
							__LIB_10__.func_334(iVar2);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
					iVar31 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
					iVar32 = 0;
					while (iVar32 < iVar31)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar32]) && !PED::IS_PED_INJURED(uVar0[iVar32])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar32], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar32], 206.802f, -1018.0115f, -100f, false, false, true);
						}
						iVar32++;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					CAM::DO_SCREEN_FADE_IN(800);
					Local_56.f_3 = 10;
				}
				break;
			case 10:
				if (SYSTEM::TIMERA() < 7000 || !Global_113386.f_32749.f_4800)
				{
					if (!Global_113386.f_32749.f_4800)
					{
						if (iLocal_156 == 0)
						{
							__LIB_0__.func_151("CAR_GAR_05" /* GXT: Vehicles purchased from websites or driven into the garage will be stored here. */, -1);
							StringCopy(&cLocal_165, "CAR_GAR_05" /* GXT: Vehicles purchased from websites or driven into the garage will be stored here. */, 16);
							bVar1 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								iLocal_156++;
							}
						}
						else if (iLocal_156 == 1)
						{
							__LIB_0__.func_151("CAR_GAR_06" /* GXT: Special vehicles can also be collected here. */, -1);
							StringCopy(&cLocal_165, "CAR_GAR_06" /* GXT: Special vehicles can also be collected here. */, 16);
							bVar1 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								Global_113386.f_32749.f_4800 = 1;
							}
						}
					}
					else
					{
						__LIB_0__.func_151("CAR_GAR_EXIT" /* GXT: To leave the Garage, walk to the exit or get in a vehicle. */, -1);
						StringCopy(&cLocal_165, "CAR_GAR_EXIT" /* GXT: To leave the Garage, walk to the exit or get in a vehicle. */, 16);
						bVar1 = true;
					}
				}
				else
				{
					Global_113386.f_32749.f_4800 = 1;
				}
				iVar33 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (iLocal_115 != -1)
					{
						__LIB_7__.func_249(&iLocal_115);
					}
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
					{
						if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar2) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							if (!(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())))
							{
								if ((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) != 0f || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/))
								{
									iVar33 = 1;
								}
								if ((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) != 0f || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
								{
									iVar33 = 1;
								}
							}
						}
					}
				}
				else
				{
					STREAMING::REQUEST_ANIM_DICT(sVar4);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 191.04915f, -1026.3182f, -104.99996f, 198.0297f, -1026.3217f, -96.81246f, 2.0625f, false, true, 0) && __LIB_4__.func_230(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 180f, 90f))
					{
						if (iLocal_114 != -1)
						{
							__LIB_7__.func_249(&iLocal_114);
						}
						if (iLocal_115 == -1)
						{
							__LIB_7__.func_316(&iLocal_115, 3, "WEB_VEH_EXIT" /* GXT: Press ~a~ to exit garage. */, 0, 0, 0, 0);
						}
						if (!iLocal_114 != -1 && !iLocal_115 == -1)
						{
							if (__LIB_2__.func_187(iLocal_115, 1))
							{
								__LIB_7__.func_249(&iLocal_115);
								iVar33 = 1;
							}
						}
					}
					else if (iLocal_115 != -1)
					{
						__LIB_7__.func_249(&iLocal_115);
					}
				}
				if (iLocal_159)
				{
					iVar33 = 1;
				}
				if (iVar33 && !__LIB_0__.func_190())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || iLocal_159)
					{
						SYSTEM::SETTIMERA(0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_83.f_73[2 /*4*/], 20f, 0);
						if (iLocal_115 != -1)
						{
							__LIB_7__.func_249(&iLocal_115);
						}
						Local_56.f_3 = 12;
					}
					else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
						}
						iLocal_120 = PED::CREATE_SYNCHRONIZED_SCENE(Local_83.f_73[1 /*4*/], 0f, 0f, Local_83.f_73[1 /*4*/].f_3, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1000f, 0);
						__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
						__LIB_17__.func_404(&(Local_83[2 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_83.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_115 != -1)
						{
							__LIB_7__.func_249(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
					else if (!STREAMING::DOES_ANIM_DICT_EXIST(sVar4))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_83.f_73[1 /*4*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_83.f_73[1 /*4*/].f_3);
						__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
						__LIB_17__.func_404(&(Local_83[2 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_83.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_115 != -1)
						{
							__LIB_7__.func_249(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
				}
				break;
			case 11:
				bVar34 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (__LIB_11__.func_785())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_110) && CAM::IS_CAM_RENDERING(Local_56.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_110))
					{
						bVar34 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[2 /*15*/].f_14 * 1000f))
					{
						bVar34 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_111) && CAM::IS_CAM_RENDERING(Local_56.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_111))
					{
						bVar34 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[2 /*15*/].f_14 * 1000f))
					{
						bVar34 = false;
					}
				}
				else
				{
					bVar34 = false;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
				{
					fVar35 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_120);
					if (fVar35 < 0.4f)
					{
						bVar34 = false;
					}
				}
				if (bVar34)
				{
					iLocal_156 = 0;
					iLocal_172 = 0;
					CAM::DO_SCREEN_FADE_OUT(800);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 13;
				}
				break;
			case 12:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				if (SYSTEM::TIMERA() > 500)
				{
					iVar36 = func_296();
					if ((iVar36 == 21 || iVar36 == 22) || iVar36 == 23)
					{
						Var37.f_9 = 49;
						Var37.f_59 = 2;
						__LIB_26__.func_263(iVar36, &Var37, 0f, 0f, 0f, -1f, 145);
						__LIB_20__.func_275(iVar36);
					}
					else if (iVar36 != -1)
					{
						if (!iLocal_159)
						{
							__LIB_6__.func_770(iVar36, 0);
							__LIB_20__.func_275(iVar36);
						}
					}
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					STREAMING::REMOVE_ANIM_DICT(sVar4);
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_56.f_3 = 13;
				}
				break;
			case 13:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar38 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iVar38, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iVar38, "hold", (2250f / 1000f));
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
						CAM::DESTROY_CAM(Local_56.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
						CAM::DESTROY_CAM(Local_56.f_111, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
						iLocal_178 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::FORCE_CLEANUP(8);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!iLocal_159)
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								ENTITY::SET_ENTITY_COORDS(iVar2, Local_56.f_29.f_70[1 /*3*/], true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar2, Local_56.f_29.f_77[1]);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
						}
					}
					else
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
						}
						iLocal_120 = -1;
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_70[1 /*3*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_77[1]);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 14;
				}
				break;
			case 14:
				if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::TIMERA() > 2250)
				{
					bVar39 = true;
					if (iLocal_159)
					{
						STREAMING::REQUEST_MODEL(iLocal_160);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_160))
						{
							iVar40 = VEHICLE::CREATE_VEHICLE(iLocal_160, Local_56.f_29.f_70[0 /*3*/], Local_56.f_29.f_77[0], true, true, false);
							if (iLocal_160 == joaat("windsor"))
							{
								VEHICLE::SET_VEHICLE_LIVERY(iVar40, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar40) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar40, false))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar40, -1);
								VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar40, 0f);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_160);
								if (func_121(iLocal_160))
								{
									switch (iLocal_160)
									{
										case joaat("marshall"):
											VEHICLE::SET_VEHICLE_LIVERY(iVar40, bLocal_111);
											break;
										}
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar40);
							}
							iLocal_159 = 0;
						}
						else
						{
							bVar39 = false;
						}
					}
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
					}
					else
					{
						bVar39 = false;
					}
					if (bVar39)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false))
						{
							iVar41 = __LIB_0__.func_314(24);
							if (__LIB_26__.func_572(&Local_141, 24))
							{
								func_316(&Local_141, __LIB_18__.func_173());
								if (ENTITY::DOES_ENTITY_EXIST(iVar41))
								{
									VEHICLE::DELETE_VEHICLE(&iVar41);
								}
							}
							if (Local_56.f_0 == 21)
							{
								MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, true, false, false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_168, -89.377f, 92.6583f, 71.2349f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_168, 154.4846f);
								__LIB_39__.func_924(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_56.f_0 == 22)
							{
								MISC::CLEAR_AREA(-62.0307f, -1839.8585f, 25.6787f, 5f, true, false, false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_168, -62.0307f, -1839.8585f, 25.6787f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_168, 319.6985f);
								__LIB_39__.func_924(iLocal_168, -62.0307f, -1839.8585f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_56.f_0 == 23)
							{
								MISC::CLEAR_AREA(-234.7648f, -1150.3105f, 21.9224f, 5f, true, false, false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_168, -234.7648f, -1150.3105f, 21.9224f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_168, 270.8741f);
								__LIB_39__.func_924(iLocal_168, -234.7648f, -1150.3105f, 21.9224f, 270.8741f, 24, 0);
							}
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168, 5f);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Local_83.f_66[1 /*3*/], true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar2, Local_56.f_29.f_77[0]);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
								if ((iLocal_160 == joaat("monster") || iLocal_160 == joaat("marshall")) || iLocal_160 == joaat("rhino"))
								{
									VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar2, false);
								}
								else
								{
									VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar2, true);
								}
								if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
								{
									PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 0, -1);
									PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
								}
								AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, true);
								__LIB_39__.func_856(__LIB_18__.func_173(), &iVar2, 3, 1);
							}
							CAM::DO_SCREEN_FADE_IN(800);
							__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
							__LIB_17__.func_404(&(Local_83[3 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
							iLocal_175 = 0;
							iLocal_177 = -1;
							Local_56.f_3 = 15;
						}
						else
						{
							STREAMING::REMOVE_ANIM_DICT(sVar4);
							__LIB_11__.func_786();
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							if (CAM::DOES_CAM_EXIST(Local_56.f_110))
							{
								CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
								CAM::DESTROY_CAM(Local_56.f_110, false);
							}
							if (CAM::DOES_CAM_EXIST(Local_56.f_111))
							{
								CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
								CAM::DESTROY_CAM(Local_56.f_111, false);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
							{
								ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
								iLocal_178 = 0;
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							PLAYER::FORCE_CLEANUP(8);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_70[1 /*3*/], true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_77[1]);
							CAM::DO_SCREEN_FADE_IN(800);
							SYSTEM::SETTIMERA(0);
							__LIB_36__.func_236(198.0043f, -999.7775f, -100f, 50f, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							Local_56.f_3 = 16;
						}
						if (Local_56.f_3 != 16)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						}
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						SYSTEM::SETTIMERA(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						iVar42 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
						iVar43 = 0;
						while (iVar43 < iVar42)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar43]) && !PED::IS_PED_INJURED(uVar0[iVar43])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar43], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar2) > iVar43)
									{
										PED::SET_PED_INTO_VEHICLE(uVar0[iVar43], iVar2, iVar43);
									}
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar43], Local_56.f_29.f_70[1 /*3*/], false, false, true);
								}
							}
							iVar43++;
						}
						PLAYER::FORCE_CLEANUP(8);
						iLocal_174 = 0;
					}
				}
				break;
			case 15:
				bVar44 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (__LIB_11__.func_785())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_110) && CAM::IS_CAM_RENDERING(Local_56.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_110))
					{
						bVar44 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[3 /*15*/].f_14 * 1000f))
					{
						bVar44 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_111) && CAM::IS_CAM_RENDERING(Local_56.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_111))
					{
						bVar44 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[3 /*15*/].f_14 * 1000f))
					{
						bVar44 = false;
					}
				}
				else
				{
					bVar44 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_299(PLAYER::PLAYER_PED_ID(), Local_83.f_86[1 /*6*/], Local_83.f_66[1 /*3*/], ((Local_83[3 /*15*/].f_14 * 1000f) - 500f), Local_83.f_73[2 /*4*/], 3, &fVar3);
				}
				if (iLocal_177 < 1 && __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_177 == 0)
					{
						__LIB_36__.func_236(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_177++;
				}
				if (bVar44)
				{
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 16;
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				break;
			case 16:
				bVar45 = true;
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83.f_61[3] * 1000f))
				{
					bVar45 = false;
				}
				if (bVar45)
				{
					Local_56.f_3 = 17;
				}
				break;
			case 17:
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
				{
					INTERIOR::UNPIN_INTERIOR(Local_56.f_112);
				}
				StringCopy(&Global_39347, "", 32);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				__LIB_6__.func_295(47, 1);
				__LIB_9__.func_81(47, 1);
				Global_77137.f_577 = 0;
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				SYSTEM::SETTIMERA(0);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(Local_56.f_110))
				{
					CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
					CAM::DESTROY_CAM(Local_56.f_110, false);
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_111))
				{
					CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
					CAM::DESTROY_CAM(Local_56.f_111, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
					iLocal_178 = 0;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
					{
						ENTITY::SET_ENTITY_COORDS(iVar2, Local_83.f_73[2 /*4*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar2, Local_83.f_73[2 /*4*/].f_3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
				}
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (iLocal_155 > 0)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_155, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_168, false)) && iLocal_168 != __LIB_0__.func_314(24))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_168);
				}
				MISC::CLEAR_BIT(&(Local_131.f_9), 25);
				iLocal_172 = 0;
				Local_56.f_3 = 18;
				break;
			case 18:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					Local_56.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_77137.f_577)
		{
			__LIB_6__.func_295(47, 1);
			__LIB_9__.func_81(47, 1);
			Global_77137.f_577 = 0;
		}
		Local_56.f_3 = 0;
		if (iLocal_115 != -1)
		{
			__LIB_7__.func_249(&iLocal_115);
		}
	}
	if (Global_77137.f_577)
	{
		HUD::HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME();
		__LIB_0__.func_186();
		__LIB_8__.func_611(0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 38 /*INPUT_PICKUP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 46 /*INPUT_TALK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	}
	if (!bVar1 && Local_56.f_2 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_165))
			{
				if ((((__LIB_0__.func_1("WEB_VEH_INV" /* GXT: This vehicle cannot be stored in this garage. */) || __LIB_0__.func_1("WEB_VEH_FULL" /* GXT: Your garage is full. Enter on foot to remove a vehicle. */)) || __LIB_0__.func_1("CAR_GAR_05" /* GXT: Vehicles purchased from websites or driven into the garage will be stored here. */)) || __LIB_0__.func_1("CAR_GAR_06" /* GXT: Special vehicles can also be collected here. */)) || __LIB_0__.func_1("CAR_GAR_EXIT" /* GXT: To leave the Garage, walk to the exit or get in a vehicle. */))
				{
					HUD::CLEAR_HELP(true);
				}
				StringCopy(&cLocal_165, "", 16);
			}
		}
	}
}

int func_296()//Position - 0x20139
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (iVar0 == Global_77137.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_77137.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_77137.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_77137.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_77137.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_77137.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_77137.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_77137.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_77137.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_77137.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_77137.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_77137.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

int func_299(int iParam0, struct<4> Param1, var uParam2, var uParam3, struct<3> Param4, float fParam5, struct<4> Param6, int iParam7, float fParam8)//Position - 0x202B8
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	float fVar8;
	Var0 = { Param1 };
	Var1 = { Param1.f_3 };
	Var2 = { Param4 };
	Var3 = { Param1.f_3 };
	if (iLocal_174 == 0)
	{
		iVar4 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		iLocal_178 = iVar4;
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_178, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_178, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_178, 5f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_178, true, true, false);
		if (PED::IS_PED_ON_ANY_BIKE(iParam0))
		{
			PED::GIVE_PED_HELMET(iParam0, false, 0, -1);
			PED::SET_PED_HELMET(iParam0, true);
		}
		Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_178, true) };
		fLocal_179 = (Var5.f_2 - Var0.f_2);
		ENTITY::SET_ENTITY_COORDS(iLocal_178, Var0 + Vector(-10f, 0f, 0f), true, false, false, true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178, false))
		{
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_178, 3);
		}
		iLocal_180 = MISC::GET_GAME_TIMER();
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178, false))
		{
			fVar6 = SYSTEM::TO_FLOAT(iLocal_180);
			fVar7 = (fVar6 + fParam5);
			fVar8 = __LIB_0__.func_301(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()), fVar6, fVar7);
			fVar8 = (fVar8 - fVar6);
			fVar8 = (fVar8 / fParam5);
			if (iParam7 == 1)
			{
				fVar8 = __LIB_19__.func_653(fVar8);
			}
			else if (iParam7 == 2)
			{
				fVar8 = __LIB_2__.func_407(fVar8);
			}
			else if (iParam7 == 3)
			{
				fVar8 = __LIB_7__.func_294(fVar8);
			}
			fVar8 = (fVar8 * fParam5);
			fVar8 = (fVar8 + fVar6);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_178, __LIB_7__.func_302(Var0 + Vector(fLocal_179, 0f, 0f), Var2 + Vector(fLocal_179, 0f, 0f), fVar6, fVar7, fVar8), false, false, true);
			if (iLocal_175 && !PED::IS_PED_ON_ANY_BIKE(iParam0))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_178, __LIB_7__.func_302((0f - Var1.f_0), (0f - Var1.f_1), (Var1.f_2 + 180f), (0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), fVar6, fVar7, fVar8), 2, true);
			}
			else
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (PED::IS_PED_ON_ANY_BIKE(iParam0))
					{
						PED::SET_PED_RESET_FLAG(iParam0, 236, true);
						PED::SET_PED_RESET_FLAG(iParam0, 309, true);
					}
				}
				ENTITY::SET_ENTITY_ROTATION(iLocal_178, __LIB_7__.func_302(Var1, Var3, fVar6, fVar7, fVar8), 2, true);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_178, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, true);
		}
		else
		{
			iLocal_174 = 2;
			return 0;
		}
		if (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) > (SYSTEM::TO_FLOAT(iLocal_180) + fParam5) && SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) > ((SYSTEM::TO_FLOAT(iLocal_180) + fParam5) + 2600f))
		{
			iLocal_174 = 2;
			return 0;
		}
	}
	if (iLocal_174 == 2)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 236, false);
		PED::SET_PED_RESET_FLAG(iParam0, 309, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
		{
			if (!__LIB_0__.func_78(Param6, 0f, 0f, 0f, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_178, Param6, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_178, Param6.f_3);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_178, 5f);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_178, false);
			iLocal_178 = 0;
		}
		if (PED::IS_PED_ON_ANY_BIKE(iParam0))
		{
			PED::REMOVE_PED_HELMET(iParam0, false);
		}
		return 1;
	}
	return 0;
}

void func_308(var uParam0)//Position - 0x2070D
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_49[iVar2] = Global_113386.f_32749.f_69[iVar1 /*78*/].f_66;
		if (iLocal_49[iVar2] != 0)
		{
			if (!BitTest(uLocal_48[iVar2], 2))
			{
				STREAMING::REQUEST_MODEL(iLocal_49[iVar2]);
				MISC::SET_BIT(&(uLocal_48[iVar2]), 2);
				func_517(iVar2);
			}
		}
		iVar0++;
	}
}

int func_316(var uParam0, int iParam1)//Position - 0x20B34
{
	int iVar0;
	if (!__LIB_19__.func_956(uParam0->f_66))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_78043))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		default:
			return 0;
			break;
	}
	if (!__LIB_26__.func_90(0, iParam1))
	{
		Global_113386.f_32749.f_5592[iVar0] = 0;
	}
	else if (!__LIB_26__.func_90(1, iParam1))
	{
		Global_113386.f_32749.f_5592[iVar0] = 1;
	}
	func_317(iParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam0->f_66));
	__LIB_0__.func_284(uParam0, &(Global_113386.f_32749.f_5038[iVar0 /*157*/][Global_113386.f_32749.f_5592[iVar0] /*78*/]));
	Global_113386.f_32749.f_5592[iVar0]++;
	if (Global_113386.f_32749.f_5592[iVar0] >= __LIB_0__.func_348(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		Global_113386.f_32749.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_99845[iVar0 /*98*/] == uParam0->f_66 && MISC::ARE_STRINGS_EQUAL(&(Global_99845[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_99845[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_317(int iParam0, char* sParam1)//Position - 0x20C8C
{
	if (!__LIB_0__.func_43(iParam0))
	{
		return;
	}
	if (!Global_113386.f_32749.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				__LIB_34__.func_972("IMPOUND_HELPM" /* GXT: Michael's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			case 1:
				__LIB_34__.func_972("IMPOUND_HELPF" /* GXT: Franklin's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			case 2:
				__LIB_34__.func_972("IMPOUND_HELPT" /* GXT: Trevor's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_113386.f_32749.f_5596[iParam0] = 1;
	}
}

int func_338()//Position - 0x24C86
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_35__.func_498(Local_56.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_340(int iParam0)//Position - 0x24D24
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
			break;
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
			break;
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
			break;
	}
	return 145;
}

int func_341(int iParam0, var uParam1)//Position - 0x24D92
{
	uParam1->f_73[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.9564f, -98.8981f };
	(uParam1[2 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_12 = 25.2218f;
	(uParam1[2 /*15*/])->f_13 = 0.2f;
	(uParam1[2 /*15*/])->f_14 = 3.5f;
	uParam1->f_61[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0 /*15*/])->f_12 = 25.1687f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_73[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[1 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[1 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[1 /*15*/])->f_12 = 29.9579f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_86[0 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[3 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[3 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[3 /*15*/])->f_12 = 30.0324f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_66[1 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_73[2 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_73[2 /*4*/].f_3 = 150f;
			return 1;
			break;
		case 22:
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.1222f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.6156f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_12 = 25.1856f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_73[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.2828f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.9979f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_12 = 29.9864f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_86[0 /*6*/] = { -69.2183f, -1823.2582f, 25.9421f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.9363f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.0228f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_12 = 28.4803f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 4f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -75.3386f, -1818.2485f, 26.0241f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_66[1 /*3*/] = { -63.988f, -1829.3903f, 26.423f };
			uParam1->f_73[2 /*4*/] = { -49.738f, -1830.1475f, 25.5591f };
			uParam1->f_73[2 /*4*/].f_3 = 317.3589f;
			return 1;
			break;
		case 23:
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.3906f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.6716f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_12 = 40.0015f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_73[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.9506f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_12 = 30.0319f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 4f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -211.6438f, -1162.4067f, 22.0234f };
			uParam1->f_86[0 /*6*/] = { -221.6438f, -1162.4067f, 22.0234f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.0609f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.0671f, 31.4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[3 /*15*/])->f_12 = 30f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_66[1 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_73[2 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_73[2 /*4*/].f_3 = 0f;
			return 1;
			break;
	}
	return 0;
}

void func_343()//Position - 0x2559F
{
	int iVar0;
	struct<5> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
	float fVar7;
	int iVar8;
	struct<3> Var9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	if ((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || __LIB_0__.func_39(0)) || __LIB_0__.func_39(3)) || __LIB_0__.func_39(2)) || __LIB_0__.func_39(4)) || __LIB_0__.func_39(14)) || !__LIB_0__.func_43(iLocal_129))
	{
		return;
	}
	if (!Global_75485)
	{
		if (Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[iLocal_143] != -15)
		{
			if (!Global_77137[Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_313[iLocal_143]])
			{
				if (__LIB_20__.func_682(__LIB_13__.func_95(), Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[iLocal_143]))
				{
					iVar0 = Global_113386.f_32749.f_1982[iLocal_129 /*939*/][iLocal_143];
					func_395(iVar0, iLocal_143, iLocal_129);
					__LIB_12__.func_98(&Var1, Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_313[iLocal_143]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						__LIB_6__.func_770(Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_313[iLocal_143], 1);
					}
					Global_113386.f_32749.f_1982[iLocal_129 /*939*/].f_626[iLocal_143] = -15;
				}
			}
		}
		iLocal_143++;
		if (iLocal_143 >= 312)
		{
			iLocal_143 = 0;
		}
	}
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Local_56.f_7 || Local_56.f_2 == 99)
	{
		if (Local_56.f_5 != -1)
		{
			__LIB_7__.func_249(&(Local_56.f_5));
		}
		if (Local_56.f_2 > 0)
		{
			HUD::CLEAR_HELP(true);
		}
		Local_56.f_7 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		Local_56.f_5 = -1;
		Local_56.f_2 = 0;
		Local_56.f_4 = 0;
		if (bLocal_142)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(Local_56.f_110))
			{
				CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
				CAM::DESTROY_CAM(Local_56.f_110, false);
			}
			if (CAM::DOES_CAM_EXIST(Local_56.f_111))
			{
				CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
				CAM::DESTROY_CAM(Local_56.f_111, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			}
			iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
				}
			}
			iVar3 = 5000;
			iVar4 = MISC::GET_GAME_TIMER();
			while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar4) < iVar3)
			{
				SYSTEM::WAIT(0);
			}
			if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
			{
				INTERIOR::UNPIN_INTERIOR(Local_56.f_112);
			}
			StringCopy(&Global_39347, "", 32);
			if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
			{
				__LIB_25__.func_609(47, 1);
				__LIB_21__.func_894(47, 1);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			STREAMING::CLEAR_FOCUS();
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
			bLocal_142 = false;
			Global_32216 = 0;
		}
	}
	bVar5 = false;
	if ((((((((((((!bLocal_142 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !Local_56.f_29.f_69)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))) || (!bLocal_142 && __LIB_0__.func_61(Local_56.f_0, 5))) || (!bLocal_142 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/))) || (!bLocal_142 && HUD::IS_PAUSE_MENU_ACTIVE())) || !__LIB_6__.func_763(0)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID())) || Global_32110) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())))
	{
		if (Local_56.f_2 > 0 && Local_56.f_2 != 90)
		{
			iLocal_157 = 1;
			Local_56.f_2 = 99;
		}
		bVar5 = true;
	}
	fVar7 = 20f;
	iVar8 = 3;
	switch (Local_56.f_2)
	{
		case 0:
			if ((((Local_56.f_0 != -1 && __LIB_0__.func_61(Local_56.f_0, 0)) && !__LIB_0__.func_61(Local_56.f_0, 5)) && !bLocal_158) && !bVar5)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, false, true, 0) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					Var6 = { Local_56.f_29.f_63 };
					StringConCat(&Var6, "_01", 16);
					__LIB_7__.func_316(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
					Local_56.f_2 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_2__.func_187(Local_56.f_5, 1))
			{
				if (__LIB_9__.func_231(iLocal_129) < Local_56.f_29.f_67)
				{
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					__LIB_7__.func_249(&(Local_56.f_5));
					iLocal_126 = 0;
					Local_56.f_2 = 90;
				}
				else
				{
					iLocal_126 = 0;
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					__LIB_7__.func_249(&(Local_56.f_5));
					Local_56.f_2 = 2;
				}
			}
			break;
		case 2:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_02", 16);
				__LIB_7__.func_316(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
				Local_56.f_2 = 3;
			}
			break;
		case 3:
			if (__LIB_2__.func_187(Local_56.f_5, 1))
			{
				if (__LIB_9__.func_231(iLocal_129) < Local_56.f_29.f_67)
				{
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					Local_56.f_2 = 90;
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", true);
					bLocal_142 = false;
					if ((Local_56.f_0 == 15 || Local_56.f_0 == 17) || Local_56.f_0 == 16)
					{
						Local_57.f_4 = 114;
						bLocal_142 = true;
					}
					else if (Local_56.f_0 == 18 || Local_56.f_0 == 19)
					{
						Local_57.f_4 = 116;
						bLocal_142 = true;
					}
					else if (Local_56.f_0 == 12 || Local_56.f_0 == 13)
					{
						Local_57.f_4 = 115;
						bLocal_142 = true;
					}
					else if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
					{
						Local_57.f_4 = 117;
						bLocal_142 = true;
					}
					Local_57.f_0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
					Local_57.f_1 = 0;
					Local_57.f_3 = 0;
					Local_57.f_2 = 0;
					iLocal_144 = 1;
					Global_32216 = 1;
					if (bLocal_142)
					{
						if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
						{
							__LIB_25__.func_609(47, 0);
							__LIB_21__.func_894(47, 0);
							Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.2732f, -100f, "v_garagem_sp");
							if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
							{
								if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_112))
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_56.f_112);
								}
								StringCopy(&Global_39347, "v_garagem_sp", 32);
							}
						}
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_56.f_4 = MISC::GET_GAME_TIMER();
						Local_56.f_2 = 4;
					}
					else
					{
						Local_56.f_2 = 8;
					}
					__LIB_7__.func_249(&(Local_56.f_5));
				}
			}
			break;
		case 4:
			bVar10 = true;
			if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
			{
				Local_56.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.2732f, -100f, "v_garagem_sp");
				if ((!INTERIOR::IS_VALID_INTERIOR(Local_56.f_112) || INTERIOR::IS_INTERIOR_CAPPED(Local_56.f_112)) || INTERIOR::IS_INTERIOR_DISABLED(Local_56.f_112))
				{
					__LIB_25__.func_609(47, 0);
					__LIB_21__.func_894(47, 0);
					bVar10 = false;
				}
			}
			if (bVar10)
			{
				if (Local_56.f_0 == 12)
				{
					fVar7 = 95f;
					iVar8 = 2;
				}
				else if (Local_56.f_0 == 13)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				else if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				Var9 = { SYSTEM::COS((Local_56.f_29.f_14.f_3.f_2 + 90f)), SYSTEM::SIN((Local_56.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
				{
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(200.4651f, -1020.631f, -100f, 50f, 0) || (MISC::GET_GAME_TIMER() - Local_56.f_4) > 3500)
					{
						Local_56.f_4 = MISC::GET_GAME_TIMER();
						Local_56.f_2 = 5;
					}
				}
				else if (STREAMING::NEW_LOAD_SCENE_START(Local_56.f_29.f_14, Var9, fVar7, iVar8) || (MISC::GET_GAME_TIMER() - Local_56.f_4) > 3500)
				{
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					Local_56.f_2 = 5;
				}
			}
			break;
		case 5:
			if (((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && (!INTERIOR::IS_VALID_INTERIOR(Local_56.f_112) || INTERIOR::IS_INTERIOR_READY(Local_56.f_112))) || (MISC::GET_GAME_TIMER() - Local_56.f_4) > 10000)
			{
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				Local_56.f_2 = 6;
			}
			break;
		case 6:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) > 1000)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_168, true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_168);
				}
				iLocal_168 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_168)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_168, false, false);
					}
				}
				else
				{
					iLocal_168 = 0;
				}
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 16);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 32);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
					PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
				}
				__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				Var9 = { SYSTEM::COS((Local_56.f_29.f_14.f_3.f_2 + 90f)), SYSTEM::SIN((Local_56.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_56.f_29.f_69)
				{
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_56.f_29.f_14, Var9);
				}
				if (!CAM::DOES_CAM_EXIST(Local_56.f_110))
				{
					Local_56.f_110 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_110))
				{
					if (Local_56.f_29.f_69)
					{
						INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("GtaMloRoom001");
					}
					__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
					__LIB_17__.func_404(&(Local_56.f_29.f_14), &(Local_56.f_110), &(Local_56.f_111));
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				STREAMING::NEW_LOAD_SCENE_STOP();
				Local_56.f_2 = 7;
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				__LIB_7__.func_249(&(Local_56.f_5));
			}
			break;
		case 7:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 7000 && !__LIB_6__.func_841(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_05", 16);
				__LIB_0__.func_151(&Var6, -1);
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (Local_56.f_0 == 12 || Local_56.f_0 == 13)
					{
						fVar7 = 85f;
						iVar8 = 2;
					}
					Var9 = { SYSTEM::COS((Local_56.f_29.f_29.f_2 + 90f)), SYSTEM::SIN((Local_56.f_29.f_29.f_2 + 90f)), 0f };
					STREAMING::NEW_LOAD_SCENE_START(Local_56.f_29.f_29, Var9, fVar7, iVar8);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_56.f_110))
				{
					if (Local_56.f_29.f_69)
					{
						INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("GtaMloRoom001");
					}
					__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
					__LIB_17__.func_404(&(Local_56.f_29.f_29), &(Local_56.f_110), &(Local_56.f_111));
				}
				STREAMING::CLEAR_FOCUS();
				HUD::CLEAR_HELP(true);
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				Local_56.f_2 = 8;
			}
			break;
		case 8:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 7000 && !__LIB_6__.func_841(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_06", 16);
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__.func_151(&Var6, 7000);
				}
			}
			else
			{
				HUD::CLEAR_HELP(true);
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				Local_56.f_2 = 9;
			}
			break;
		case 9:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 3500 && !__LIB_6__.func_841(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_03", 16);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_57.f_0))
				{
					if (Local_57.f_1)
					{
						if (!Local_57.f_3)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
							Local_57.f_3 = 1;
						}
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_57.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_57.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						__LIB_0__.func_478(&Var6);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						Local_57.f_1 = 1;
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 4000 && !__LIB_6__.func_841(1000))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_57.f_0))
				{
					if (Local_57.f_2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_57.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_57.f_0, "SHARD_ANIM_OUT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						Local_57.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_142)
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
						CAM::DESTROY_CAM(Local_56.f_110, false);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
						CAM::DESTROY_CAM(Local_56.f_111, false);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iVar11 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
						if ((ENTITY::DOES_ENTITY_EXIST(iVar11) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar11, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar11, false))
						{
							ENTITY::SET_ENTITY_COORDS(iVar11, Local_56.f_29.f_44, true, true, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar11, Local_56.f_29.f_47);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar11, 5f);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_44, true, true, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_56.f_29.f_47);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false))
					{
						iVar12 = __LIB_0__.func_314(24);
						if (__LIB_26__.func_572(&Local_141, 24))
						{
							func_316(&Local_141, __LIB_18__.func_173());
							if (ENTITY::DOES_ENTITY_EXIST(iVar12))
							{
								VEHICLE::DELETE_VEHICLE(&iVar12);
							}
						}
						if (Local_56.f_0 == 21)
						{
							MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, true, false, false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_168, -89.377f, 92.6583f, 71.2349f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_168, 154.4846f);
							__LIB_39__.func_924(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_56.f_0 == 22)
						{
							MISC::CLEAR_AREA(-62.0307f, -1839.8585f, 25.6787f, 5f, true, false, false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_168, -62.0307f, -1839.8585f, 25.6787f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_168, 319.6985f);
							__LIB_39__.func_924(iLocal_168, -62.0307f, -1839.8585f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_56.f_0 == 23)
						{
							MISC::CLEAR_AREA(-234.7648f, -1150.3105f, 21.9224f, 5f, true, false, false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_168, -234.7648f, -1150.3105f, 21.9224f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_168, 270.8741f);
							__LIB_39__.func_924(iLocal_168, -234.7648f, -1150.3105f, 21.9224f, 270.8741f, 24, 0);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168, 5f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar11) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar11, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iVar11, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iVar11, false);
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar11, true))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar11);
						}
					}
					iVar13 = 5000;
					iVar14 = MISC::GET_GAME_TIMER();
					while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar14) < iVar13)
					{
						SYSTEM::WAIT(0);
					}
					if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_112))
					{
						INTERIOR::UNPIN_INTERIOR(Local_56.f_112);
					}
					StringCopy(&Global_39347, "", 32);
					if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
					{
						__LIB_25__.func_609(47, 1);
						__LIB_21__.func_894(47, 1);
						Global_113386.f_32749.f_4800 = 1;
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::CLEAR_FOCUS();
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
					bLocal_142 = false;
					Global_32216 = 0;
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_57.f_0))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_57);
				}
				__LIB_40__.func_947(iLocal_129, Local_57.f_4, Local_56.f_29.f_67);
				__LIB_0__.func_60(Local_56.f_0, 5, 1);
				func_346(Local_56.f_0);
				if (HUD::DOES_BLIP_EXIST(Global_77137.f_208[Local_56.f_0]))
				{
					HUD::REMOVE_BLIP(&(Global_77137.f_208[Local_56.f_0]));
				}
				iLocal_151 = Local_56.f_0;
				__LIB_0__.func_533();
				Local_56.f_2 = 99;
			}
			break;
		case 90:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 4000)
				{
					Var6 = { Local_56.f_29.f_63 };
					StringConCat(&Var6, "_04", 16);
					__LIB_0__.func_187(&Var6);
				}
				else
				{
					Local_56.f_2 = 99;
				}
			}
			break;
	}
}

void func_346(int iParam0)//Position - 0x267ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	__LIB_11__.func_789(iVar0, 0);
	iVar2 = __LIB_31__.func_823(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		__LIB_11__.func_791(iVar0);
		if (__LIB_38__.func_127(iVar0, iVar1, 1))
		{
			__LIB_38__.func_126(iVar0);
			__LIB_11__.func_791(iVar0);
		}
	}
}

void func_395(int iParam0, int iParam1, int iParam2)//Position - 0x29544
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	iVar2 = __LIB_18__.func_173();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = __LIB_5__.func_849(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				case 2:
					iVar1 = 33;
					break;
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					case 2:
						iVar1 = 193;
						break;
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					case 2:
						iVar1 = 42;
						break;
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				case 2:
					iVar1 = 36;
					break;
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				case 2:
					iVar1 = 39;
					break;
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				case 2:
					iVar1 = 188;
					break;
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				case 2:
					iVar1 = 190;
					break;
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		default:
			return;
			break;
	}
	if (__LIB_38__.func_127(iVar0, iVar1, 1))
	{
		__LIB_11__.func_788(iVar0, sVar3);
		__LIB_38__.func_126(iVar0);
		__LIB_11__.func_791(iVar0);
	}
}

void func_403()//Position - 0x29A36
{
	int iVar0;
	var uVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	struct<3> Var20;
	int iVar21;
	iVar0 = 0;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (Global_113386.f_32749.f_5588)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_78042))
			{
				func_316(&(Global_113386.f_32749.f_5510), Global_113386.f_32749.f_5590);
				Global_113386.f_32749.f_5588 = 0;
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78042, false) || __LIB_6__.func_769(Global_78042, Global_113386.f_32749.f_5590, 1))
			{
				Global_113386.f_32749.f_5588 = 0;
			}
			else
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == Global_78042) && __LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) != Global_113386.f_32749.f_5590)
				{
					Global_113386.f_32749.f_5590 = __LIB_18__.func_168(PLAYER::PLAYER_PED_ID());
				}
				if (Global_78042 != iLocal_128)
				{
					sVar2 = ENTITY::GET_ENTITY_SCRIPT(Global_78042, &uVar1);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
					{
						if (MISC::GET_HASH_KEY(sVar2) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
						{
							Global_113386.f_32749.f_5588 = 0;
							iLocal_169 = Global_78042;
							if (Global_77137.f_139[24] == Global_78042 || (Global_78043 == Global_78042 && Global_78044 == 24))
							{
								__LIB_1__.func_39(458, 24, -1);
							}
							else
							{
								__LIB_1__.func_39(458, 0, -1);
							}
							Global_78042 = 0;
						}
					}
				}
				if (((Global_113386.f_32749.f_5590 != __LIB_18__.func_173() && Global_99845[Global_113386.f_32749.f_5590 /*98*/] == Global_113386.f_32749.f_5510.f_66) && MISC::ARE_STRINGS_EQUAL(&(Global_99845[Global_113386.f_32749.f_5590 /*98*/].f_27), &(Global_113386.f_32749.f_5510.f_1))) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					__LIB_0__.func_284(&(Global_113386.f_32749.f_5510), &(Global_113386.f_32749.f_5600[Global_113386.f_32749.f_5590 /*78*/]));
					Global_113386.f_32749.f_5588 = 0;
					iLocal_169 = 0;
					__LIB_1__.func_39(458, 0, -1);
					Global_78042 = 0;
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_78042) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78042, false)) && !__LIB_6__.func_769(Global_78042, Global_113386.f_32749.f_5590, 1))
		{
			Global_113386.f_32749.f_5588 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_169) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_169, false))
		{
			if (((!Global_113386.f_32749.f_5588 && iLocal_169 != Global_78042) && iLocal_169 != iLocal_170) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_169, true))
			{
				__LIB_35__.func_888(iLocal_169, 145);
				iLocal_169 = 0;
				__LIB_1__.func_39(458, 0, -1);
			}
		}
		else if (iLocal_169 != 0)
		{
			iLocal_169 = 0;
			__LIB_1__.func_39(458, 0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170, false))
		{
		}
		else if (iLocal_170 != 0)
		{
			iLocal_170 = 0;
		}
	}
	if (Global_78046.f_66 != 0 && Global_78043 == 0)
	{
		func_316(&Global_78046, Global_78124);
		Global_78046.f_66 = 0;
	}
	Var3 = { 433.67212f, -1006.53754f, 25.963509f };
	Var4 = { 433.6578f, -1017.5f, 32.098953f };
	fVar5 = 11.25f;
	if (iLocal_124 > 0 && iLocal_124 < 99)
	{
		if (iLocal_124 != 3)
		{
			if (((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var4, fVar5, false, true, 0)) || __LIB_0__.func_39(0)) || __LIB_0__.func_39(3)) || __LIB_0__.func_39(2)) || __LIB_0__.func_39(14))
			{
				iLocal_124 = 99;
			}
		}
	}
	if (func_438(iLocal_129))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_145))
		{
			if (((__LIB_0__.func_39(15) || __LIB_0__.func_39(12)) && iLocal_124 != 3) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_145 = __LIB_0__.func_392(428.37f, -1013.5f, 27.93f, 0);
				HUD::SET_BLIP_SPRITE(iLocal_145, 225);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_145, "IMPOUND_BLIPNAME" /* GXT: Vehicle Impound */);
				HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_145, true);
			}
		}
		else if ((!(__LIB_0__.func_39(15) || __LIB_0__.func_39(12)) || iLocal_124 == 3) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			HUD::REMOVE_BLIP(&iLocal_145);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_145))
	{
		HUD::REMOVE_BLIP(&iLocal_145);
	}
	switch (iLocal_124)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((Local_56.f_2 == 0 && (__LIB_0__.func_39(15) || __LIB_0__.func_39(12))) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (func_438(iLocal_129))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var4, fVar5, false, true, 0))
						{
							if (__LIB_9__.func_231(iLocal_129) >= 250)
							{
								iVar6 = 0;
								iVar7 = 0;
								while (iVar7 < 2)
								{
									if (__LIB_26__.func_90(iVar7, iLocal_129))
									{
										iVar6++;
									}
									iVar7++;
								}
								if (iVar6 > 1)
								{
									__LIB_7__.func_316(&iLocal_125, 3, "IMPOUND_TRIG2" /* GXT: Press ~a~ to retrieve an impounded vehicle. */, 0, 0, 0, 0);
								}
								else
								{
									__LIB_7__.func_316(&iLocal_125, 3, "IMPOUND_TRIG1" /* GXT: Press ~a~ to retrieve an impounded vehicle for $250. */, 0, 0, 0, 0);
								}
								iLocal_124 = 1;
							}
							else
							{
								__LIB_0__.func_151("SCLUB_NO_MONEY" /* GXT: Not enough cash. */, -1);
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_7__.func_161(0, -1, 0))
			{
				if (__LIB_2__.func_187(iLocal_125, 1))
				{
					__LIB_7__.func_249(&iLocal_125);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_435();
					iVar8 = 0;
					iVar9 = 0;
					while (iVar9 < 2)
					{
						if (__LIB_26__.func_90(iVar9, iLocal_129))
						{
							iVar8++;
						}
						iVar9++;
					}
					if (iVar8 > 1)
					{
						iLocal_116 = 0;
						iLocal_117 = 0;
						iLocal_118 = 0;
						bLocal_121 = -1;
						iLocal_124++;
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 2)
						{
							if (__LIB_26__.func_90(iVar10, iLocal_129))
							{
								if (iVar10 == 0)
								{
									Var11 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var11 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_409(&iLocal_128, iVar10, Var11, 179.24f, 1))
								{
									SYSTEM::WAIT(0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
								{
									if (iVar10 == 0)
									{
										__LIB_11__.func_872(18, 1, 0);
									}
									else
									{
										__LIB_11__.func_872(19, 1, 0);
									}
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									}
									__LIB_40__.func_947(iLocal_129, 119, 250);
									func_407(iVar10);
									__LIB_35__.func_888(iLocal_128, __LIB_18__.func_173());
									__LIB_7__.func_49(1, -1);
									iLocal_124 = 3;
									__LIB_7__.func_249(&iLocal_125);
									iLocal_125 = -1;
									iLocal_118 = 0;
								}
							}
							iVar10++;
						}
					}
				}
			}
			break;
		case 2:
			switch (__LIB_18__.func_173())
			{
				case 0:
					iVar12 = 0;
					break;
				case 1:
					iVar12 = 1;
					break;
				case 2:
					iVar12 = 2;
					break;
			}
			func_435();
			if (!iLocal_116 || iLocal_117)
			{
				__LIB_1__.func_193(0, 0);
				__LIB_1__.func_318(1, 1, 0, 0, 0);
				__LIB_1__.func_317(1, 2, 1, 1, 1);
				__LIB_1__.func_319("IMPOUND_TITLE" /* GXT: SELECT VEHICLE */);
				iLocal_122 = 0;
				iVar13 = -1;
				iVar15 = 0;
				iVar14 = 0;
				while (iVar14 < 2)
				{
					if (__LIB_26__.func_90(iVar14, iLocal_129))
					{
						__LIB_18__.func_477(iVar15, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_113386.f_32749.f_5038[iVar12 /*157*/][iVar14 /*78*/].f_66), 0, 1, 0, 0, 0);
						if (iVar13 == -1)
						{
							iVar13 = iVar15;
							bLocal_121 = iVar15;
						}
						MISC::SET_BIT(&iLocal_122, iVar15);
						iLocal_123[iVar15] = iVar14;
						__LIB_18__.func_477(iVar15, "IMPOUND_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
						__LIB_32__.func_488(250, 0);
						iVar15++;
					}
					iVar14++;
				}
				iVar15 = 0;
				__LIB_16__.func_241(bLocal_121, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar0 = 0;
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
						if (func_125())
						{
							if (Global_4539961 != bLocal_121)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								bLocal_121 = Global_4539961;
								__LIB_16__.func_241(bLocal_121, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						bVar16 = (bLocal_121 - 1);
						while (bVar16 >= 0)
						{
							if (BitTest(iLocal_122, bVar16))
							{
								bLocal_121 = bVar16;
								bVar17 = true;
								bVar16 = false;
							}
							bVar16 = (bVar16 + -1);
						}
						if (!bVar17)
						{
							bVar16 = 31;
							while (bVar16 >= bLocal_121 + 1)
							{
								if (BitTest(iLocal_122, bVar16))
								{
									bLocal_121 = bVar16;
									bVar17 = true;
									bVar16 = bLocal_121;
								}
								bVar16 = (bVar16 + -1);
							}
						}
						if (bVar17)
						{
							__LIB_16__.func_241(bLocal_121, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						bVar18 = bLocal_121 + 1;
						while (bVar18 <= 31)
						{
							if (BitTest(iLocal_122, bVar18))
							{
								bLocal_121 = bVar18;
								bVar19 = true;
								bVar18 = 31;
							}
							bVar18++;
						}
						if (!bVar19)
						{
							bVar18 = false;
							while (bVar18 <= (bLocal_121 - 1))
							{
								if (BitTest(iLocal_122, bVar18))
								{
									bLocal_121 = bVar18;
									bVar19 = true;
									bVar18 = bLocal_121;
								}
								bVar18++;
							}
						}
						if (bVar19)
						{
							__LIB_16__.func_241(bLocal_121, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
				{
					iVar0 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!iLocal_118)
					{
						__LIB_1__.func_342("IMPOUND_CNF" /* GXT: Are you sure you want to retrieve this vehicle? */, 0, 0);
						__LIB_4__.func_222(-1);
						__LIB_1__.func_344(201, "ITEM_YES" /* GXT: Confirm */, -1);
						__LIB_1__.func_344(202, "ITEM_NO" /* GXT: Back */, -1);
						iLocal_118 = 1;
					}
					else
					{
						if (bLocal_121 == 0)
						{
							Var20 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							Var20 = { 436.39f, -997.25f, 24.76f };
						}
						if (__LIB_26__.func_90(iLocal_123[bLocal_121], iLocal_129))
						{
							while (!func_409(&iLocal_128, iLocal_123[bLocal_121], Var20, 179.24f, 1))
							{
								SYSTEM::WAIT(0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
							{
								if (bLocal_121 == 0)
								{
									__LIB_11__.func_872(18, 1, 0);
								}
								else
								{
									__LIB_11__.func_872(19, 1, 0);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								}
								__LIB_40__.func_947(iLocal_129, 119, 250);
								func_407(iLocal_123[bLocal_121]);
								__LIB_35__.func_888(iLocal_128, __LIB_18__.func_173());
								__LIB_7__.func_49(1, -1);
								iLocal_124++;
								__LIB_7__.func_249(&iLocal_125);
								iLocal_125 = -1;
								iLocal_118 = 0;
							}
						}
						iLocal_117 = 1;
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_124 = 99;
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_119)
			{
				__LIB_1__.func_342("", 0, 0);
				__LIB_4__.func_222(-1);
				__LIB_1__.func_344(201, "ITEM_SELECT" /* GXT: Select */, -1);
				__LIB_1__.func_344(202, "ITEM_EXIT" /* GXT: Exit */, -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			if (__LIB_7__.func_161(0, -1, 0))
			{
				__LIB_25__.func_745(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			break;
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 431.4f, -997.33f, 24.76f, true) > 20f && !func_405())
			{
				__LIB_35__.func_888(iLocal_128, __LIB_18__.func_173());
				iLocal_124 = 99;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 431.4f, -997.33f, 24.76f, true) > 100f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_128, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_128, false) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_128, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_128))
							{
								__LIB_39__.func_912(iLocal_128, 1, 145);
								VEHICLE::DELETE_VEHICLE(&iLocal_128);
								MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
								iLocal_124 = 99;
							}
						}
						else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_128, false))
						{
							MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
							__LIB_35__.func_888(iLocal_128, __LIB_18__.func_173());
							iLocal_124 = 99;
						}
					}
					else
					{
						MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
						iLocal_124 = 99;
					}
				}
				else
				{
					MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, false, false, true, true, false, false, 0);
					iLocal_124 = 99;
				}
			}
			break;
		case 99:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			__LIB_7__.func_249(&iLocal_125);
			iVar21 = 0;
			while (iVar21 < 2)
			{
				iLocal_123[iVar21] = -1;
				iVar21++;
			}
			__LIB_11__.func_872(18, 0, 0);
			__LIB_11__.func_872(19, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_128);
			}
			iLocal_124 = 0;
			break;
	}
	if (iLocal_124 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 428.29285f, -996.6834f, 24.488642f, 439.54382f, -996.71136f, 28.103334f, 8.6875f, false, true, 0))
		{
			if (!iLocal_127)
			{
				__LIB_11__.func_872(18, 1, 0);
				iLocal_127 = 1;
			}
		}
		else if (iLocal_127 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 431.27148f, -1004.05896f, 23.981976f, 431.03943f, -993.621f, 27.618681f, 6.8125f, false, true, 0))
		{
			__LIB_11__.func_872(18, 0, 0);
			iLocal_127 = 0;
		}
	}
}

int func_405()//Position - 0x2A858
{
	if (MISC::IS_POSITION_OCCUPIED(431.44235f, -997.73083f, 24.761612f, 4.75f, false, true, true, false, false, 0, false))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(436.6913f, -997.5869f, 24.755816f, 4.75f, false, true, true, false, false, 0, false))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(431.07f, -1005.57f, 26.2f, 4.75f, false, true, true, false, false, 0, false))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(436.52f, -1005.47f, 26.17f, 4.75f, false, true, true, false, false, 0, false))
	{
		return 1;
	}
	return 0;
}

void func_407(int iParam0)//Position - 0x2AA3D
{
	int iVar0;
	switch (__LIB_18__.func_173())
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= __LIB_0__.func_348(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

int func_409(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x2AB59
{
	int iVar0;
	if (!__LIB_26__.func_90(iParam1, __LIB_18__.func_173()) || ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	switch (__LIB_18__.func_173())
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	STREAMING::REQUEST_MODEL(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam3, false, false, false);
		__LIB_24__.func_999(*iParam0, &(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
		VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
		if (bParam4)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_435()//Position - 0x2BB27
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 239 /*INPUT_CURSOR_X*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 240 /*INPUT_CURSOR_Y*/, true);
}

int func_438(int iParam0)//Position - 0x2BBB5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_26__.func_90(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_443(int* iParam0)//Position - 0x2BC78
{
	int iVar0;
	struct<8> Var1;
	if (!BitTest(Global_113386.f_10016.f_25, 7))
	{
		if (!BitTest(*iParam0, 6))
		{
			if (__LIB_0__.func_39(13) && func_14(__LIB_1__.func_558()))
			{
				MISC::SET_BIT(iParam0, 6);
				iVar0 = func_9();
				iParam0->f_6 = { func_474(iVar0) };
				if (Global_32235 == iVar0 || Global_32235 == 0)
				{
					__LIB_31__.func_820(1);
					Var1 = { __LIB_30__.func_180("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					AUDIO::START_AUDIO_SCENE(&Var1);
					iVar0 = (Global_32235 + 1 % 8);
					func_471(iParam0, iVar0);
					iParam0->f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
					MISC::SET_BIT(iParam0, 12);
					if (iVar0 == 7)
					{
						MISC::SET_BIT(&(Global_113386.f_10016.f_25), 7);
						__LIB_31__.func_828(255, 0);
					}
				}
				else
				{
					func_471(iParam0, 0);
					MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 12);
				}
			}
		}
		else
		{
			__LIB_31__.func_827();
			if (!BitTest(*iParam0, 31))
			{
				if (!BitTest(*iParam0, 25))
				{
					func_468(iParam0);
				}
				else if (func_467())
				{
					func_451(iParam0);
					iParam0->f_3 = MISC::GET_GAME_TIMER() + 2000;
				}
				if (!__LIB_31__.func_825(0))
				{
					__LIB_31__.func_828(255, 0);
				}
			}
			else if (__LIB_31__.func_825(0))
			{
				if (MISC::GET_GAME_TIMER() > iParam0->f_3)
				{
					__LIB_31__.func_828(0, 800);
				}
			}
			if (!__LIB_0__.func_39(13) || !func_14(__LIB_1__.func_558()))
			{
				func_444(iParam0);
			}
		}
	}
}

void func_444(int* iParam0)//Position - 0x2BDEA
{
	struct<8> Var0;
	if (BitTest(*iParam0, 31))
	{
		func_449(iParam0);
	}
	if (BitTest(*iParam0, 25))
	{
		func_445(iParam0);
	}
	Var0 = { __LIB_30__.func_180("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Var0))
	{
		AUDIO::STOP_AUDIO_SCENE(&Var0);
	}
	MISC::CLEAR_BIT(iParam0, 6);
	MISC::CLEAR_BIT(iParam0, 30);
	MISC::CLEAR_BIT(iParam0, 8);
}

void func_445(int* iParam0)//Position - 0x2BE4F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_9();
	iVar1 = func_448(iVar0);
	iVar2 = __LIB_30__.func_694(iVar1);
	iVar3 = __LIB_31__.func_824(iVar1);
	if (iVar2 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
	}
	if (iVar3 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
	}
	MISC::CLEAR_BIT(iParam0, 25);
}

int func_448(int iParam0)//Position - 0x2BF5D
{
	switch (iParam0)
	{
		case 1:
			return 12;
		case 2:
			return 43;
		case 3:
			return 35;
		case 4:
			return 109;
		case 5:
			return 28;
		case 6:
			return 17;
		default:
	}
	return -1;
}

void func_449(int* iParam0)//Position - 0x2BFAF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, false), 10f);
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_4));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_5))
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0->f_5, false), 10f);
		PED::DELETE_PED(&(iParam0->f_5));
	}
	MISC::CLEAR_BIT(iParam0, 31);
}

void func_451(int* iParam0)//Position - 0x2C036
{
	int iVar0;
	int iVar1;
	iVar0 = func_9();
	iVar1 = func_448(iVar0);
	__LIB_40__.func_828(iVar1, &(iParam0->f_5), &(iParam0->f_4), func_466(iVar0), func_465(iVar0), 1);
	MISC::SET_BIT(iParam0, 31);
}

float func_465(int iParam0)//Position - 0x2DA31
{
	switch (iParam0)
	{
		case 1:
			return 190.1056f;
		case 2:
			return 132.9326f;
		case 3:
			return 355.7119f;
		case 4:
			return 209.0264f;
		case 5:
			return 122.6722f;
		case 6:
			return 174.841f;
		default:
	}
	return 0f;
}

Vector3 func_466(int iParam0)//Position - 0x2DA95
{
	switch (iParam0)
	{
		case 1:
			return Global_110111[0 /*3*/];
		case 2:
			return Global_110111[1 /*3*/];
		case 3:
			return Global_110111[2 /*3*/];
		case 4:
			return Global_110111[3 /*3*/];
		case 5:
			return Global_110111[4 /*3*/];
		case 6:
			return Global_110111[5 /*3*/];
		default:
	}
	return 0f, 0f, 0f;
}

int func_467()//Position - 0x2DB13
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_9();
	iVar1 = func_448(iVar0);
	iVar2 = __LIB_30__.func_694(iVar1);
	iVar3 = __LIB_31__.func_824(iVar1);
	if (iVar2 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_468(int* iParam0)//Position - 0x2DB62
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_9();
	iVar1 = func_448(iVar0);
	iVar2 = __LIB_30__.func_694(iVar1);
	iVar3 = __LIB_31__.func_824(iVar1);
	if (iVar2 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar2);
	}
	if (iVar3 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar3);
	}
	MISC::SET_BIT(iParam0, 25);
}

void func_471(int* iParam0, int iParam1)//Position - 0x2DCC6
{
	__LIB_31__.func_829(&(Global_113386.f_10016.f_25), iParam1, 14336, 11);
}

Vector3 func_474(int iParam0)//Position - 0x2DD2B
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_110089[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_475()//Position - 0x2DD53
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = -1308.545f;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 475.192f, -1313.4802f, 28.2074f) < 1000f)
		{
			if (!iLocal_52)
			{
				STREAMING::REQUEST_MODEL(joaat("v_ilev_uvline"));
				iLocal_51 = 1;
				if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_uvline")))
				{
					if (__LIB_0__.func_176(8))
					{
						iLocal_53[4] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[4], 471.48f, fVar0, 30.33f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[4], 0f, 0f, 116.9f, 2, true);
						iLocal_53[1] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[1], 471.48f, fVar0, 30.15f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[1], 0f, 0f, 116.9f, 2, true);
					}
					if (__LIB_0__.func_176(9))
					{
						iLocal_53[5] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[5], 471.48f, fVar0, 29.98f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[5], 0f, 0f, 116.9f, 2, true);
					}
					if (__LIB_0__.func_176(10))
					{
						iLocal_53[3] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[3], 471.48f, fVar0, 29.82f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[3], 0f, 0f, 116.9f, 2, true);
					}
					iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(475.192f, -1313.4802f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar2]))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_53[iVar2], true, false);
							ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iLocal_53[iVar2], true);
							INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_53[iVar2], iVar1);
						}
						iVar2++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
					iLocal_52 = 1;
				}
			}
		}
		else
		{
			if (iLocal_51)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
				iLocal_51 = 0;
			}
			if (iLocal_52)
			{
				func_516();
				iLocal_52 = 0;
			}
		}
	}
}

void func_477()//Position - 0x2DFB7
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_77137.f_553)
	{
		if (!iLocal_54)
		{
			Global_77137.f_554 = 0;
			iLocal_54 = 1;
		}
		else if (Global_77137.f_554 >= 68)
		{
			Global_77137.f_553 = 0;
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_148)
	{
		iVar1 = iLocal_149[iVar0];
		if (__LIB_12__.func_98(&Local_131, iVar1))
		{
			func_512(&Local_140, iVar1);
			if ((Local_140.f_69 && Local_56.f_3 == 0) || iVar1 == 14)
			{
				fLocal_152[iVar1] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_140.f_55, false);
			}
			else
			{
				fLocal_152[iVar1] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_131, false);
			}
			if (__LIB_0__.func_109())
			{
				func_510(iVar1);
				func_508(iVar1);
				func_507(iVar1);
				func_506(iVar1);
				func_504(iVar1);
				func_503(iVar1);
				func_502(iVar1);
				func_479(iVar1);
				if (BitTest(uLocal_48[iVar1], 2))
				{
					if (Global_77137.f_553)
					{
						iLocal_54 = 0;
					}
					func_517(iVar1);
				}
			}
			else
			{
				func_478(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_148;
	iLocal_148 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_150)
	{
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (BitTest(uLocal_48[iLocal_149[iVar0]], 2))
		{
			func_517(iLocal_149[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_151 != -1)
	{
		func_517(iLocal_151);
		iLocal_151 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_517(iLocal_47);
	if (iLocal_157)
	{
		func_517(21);
		func_517(22);
		func_517(23);
		iLocal_157 = 0;
		bLocal_158 = true;
	}
	else if (bLocal_158)
	{
		bLocal_158 = false;
	}
	if (Global_77137.f_553)
	{
		Global_77137.f_554++;
	}
}

void func_478(int iParam0)//Position - 0x2E1AA
{
	if (iLocal_49[iParam0] != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49[iParam0]);
		iLocal_49[iParam0] = 0;
	}
}

void func_479(int iParam0)//Position - 0x2E1CD
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	struct<60> Var9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	int iVar17;
	fVar0 = 210f;
	fVar1 = 200f;
	if (!BitTest(uLocal_48[iParam0], 2))
	{
		func_478(iParam0);
	}
	MISC::CLEAR_BIT(&(uLocal_48[iParam0]), 2);
	if (BitTest(uLocal_48[iParam0], 1))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_50[iParam0 /*3*/], true);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (BitTest(Local_131.f_9, 23))
	{
		if (Local_131.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (BitTest(Local_131.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((BitTest(Local_131.f_9, 19) || BitTest(Local_131.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (BitTest(Local_131.f_9, 25) && (((iLocal_129 == 0 && Local_56.f_0 == 21) || (iLocal_129 == 0 && Local_56.f_0 == 22)) || (iLocal_129 == 0 && Local_56.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iParam0 == 24)
				{
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_77137.f_139[iParam0], -1, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						iVar3 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(Global_77137.f_139[iParam0], -1);
					}
					iVar4 = __LIB_18__.func_168(iVar3);
					if (iVar4 != Global_113386.f_32749.f_5591)
					{
						if (__LIB_0__.func_43(iVar4))
						{
							func_501("Updating last character to use vehicle gen", iVar4);
							Global_113386.f_32749.f_5591 = iVar4;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_77137.f_139[iParam0], true))
				{
					__LIB_0__.func_135("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !__LIB_0__.func_117(Global_77137.f_139[iParam0])) && !__LIB_0__.func_108(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
					}
					Global_77137.f_139[iParam0] = 0;
					Global_77137[iParam0] = 1;
					func_499(iParam0);
					return;
				}
				if (((BitTest(uLocal_48[iParam0], 0) && !BitTest(Local_131.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					__LIB_0__.func_135("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !__LIB_0__.func_117(Global_77137.f_139[iParam0])) && !__LIB_0__.func_108(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
					Global_77137.f_139[iParam0] = 0;
					Global_77137[iParam0] = 1;
					func_499(iParam0);
					return;
				}
				if ((!BitTest(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_77137.f_139[iParam0], PLAYER::PLAYER_PED_ID(), true))
					{
						__LIB_0__.func_135("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !__LIB_0__.func_117(Global_77137.f_139[iParam0])) && !__LIB_0__.func_108(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
						{
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
						Global_77137.f_139[iParam0] = 0;
						Global_77137[iParam0] = 1;
						func_499(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((BitTest(uLocal_48[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_77137.f_139[iParam0], true), Local_50[iParam0 /*3*/], true) > fVar5) || (!BitTest(uLocal_48[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_77137.f_139[iParam0], true), Local_131, true) > fVar5))
				{
					__LIB_0__.func_135("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !__LIB_0__.func_117(Global_77137.f_139[iParam0])) && !__LIB_0__.func_108(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
					Global_77137.f_139[iParam0] = 0;
					Global_77137[iParam0] = 1;
					func_499(iParam0);
					return;
				}
				if (!__LIB_0__.func_61(iParam0, 0))
				{
					__LIB_0__.func_135("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !__LIB_0__.func_117(Global_77137.f_139[iParam0])) && !__LIB_0__.func_108(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
					Global_77137.f_139[iParam0] = 0;
					Global_77137[iParam0] = 1;
					func_499(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((__LIB_6__.func_769(Global_77137.f_139[iParam0], iLocal_129, 1) && !__LIB_0__.func_117(Global_77137.f_139[iParam0])) && !__LIB_0__.func_108(Global_77137.f_139[iParam0]))
					{
						__LIB_0__.func_135("No longer needed: Mission vehicle gen moved to players garage");
						if (ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
						{
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
						}
						Global_77137.f_139[iParam0] = 0;
						Global_77137[iParam0] = 1;
						func_499(iParam0);
						return;
					}
				}
				if (fLocal_152[iParam0] > fVar0 && (!BitTest(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = __LIB_13__.func_95();
						iVar7 = Global_113386.f_32749.f_4801;
						__LIB_27__.func_73(&iVar7, 0, 0, 17, 0, 0, 0);
						if (__LIB_20__.func_682(iVar6, iVar7))
						{
							if ((!__LIB_0__.func_117(Global_77137.f_139[iParam0]) && !__LIB_0__.func_108(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
							{
								VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
							}
							__LIB_35__.func_888(Global_77137.f_139[iParam0], Global_113386.f_32749.f_5591);
							Global_77137[iParam0] = 1;
							func_499(iParam0);
						}
						else if (__LIB_31__.func_871(Global_77137.f_139[iParam0]))
						{
							__LIB_6__.func_760(Global_77137.f_139[iParam0], &Global_2726988);
							Global_2726987 = Global_113386.f_32749.f_5591;
							iLocal_170 = Global_77137.f_139[iParam0];
						}
					}
					__LIB_0__.func_135("No longer needed: Player out for range");
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
					MISC::CLEAR_AREA(Local_131, 3f, false, false, false, false);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_131, 3f, false, false, false, false, false, false, 0);
					Global_77137.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
					{
						Global_77137.f_584 = { Local_131 };
						Global_77137.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (BitTest(Local_131.f_9, 30))
				{
					if (!BitTest(Local_131.f_9, 31))
					{
						if (!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_77137.f_139[iParam0]) && !ENTITY::IS_ENTITY_ATTACHED(Global_77137.f_139[iParam0]))
						{
							Var8 = { ENTITY::GET_ENTITY_COORDS(Global_77137.f_139[iParam0], true) };
							if (Var8.f_2 >= func_496(iParam0))
							{
								VEHICLE::SET_BOAT_ANCHOR(Global_77137.f_139[iParam0], true);
								MISC::SET_BIT(&(Local_131.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_77137.f_139[iParam0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
	{
		__LIB_0__.func_135("No longer needed: Vehicle not driveable");
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
		Global_77137.f_139[iParam0] = 0;
		Global_77137[iParam0] = 1;
		func_499(iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (Global_78044 == iParam0)
	{
		__LIB_0__.func_135("Processing a vehgen vehicle handover request.");
		if (ENTITY::DOES_ENTITY_EXIST(Global_78043) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78043, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false))
			{
				if (Global_77137.f_139[iParam0] == Global_78043)
				{
					__LIB_0__.func_135("Vehicle to be handed over is the same vehicle.");
					Global_78044 = -1;
					Global_78043 = 0;
					return;
				}
				else
				{
					__LIB_0__.func_135("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !__LIB_0__.func_117(Global_77137.f_139[iParam0])) && !__LIB_0__.func_108(Global_77137.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
					Global_77137.f_139[iParam0] = 0;
				}
			}
			Global_77137.f_139[iParam0] = Global_78043;
			Global_77137[iParam0] = 1;
			MISC::CLEAR_BIT(&(uLocal_48[iParam0]), 0);
			MISC::SET_BIT(&(uLocal_48[iParam0]), 1);
			MISC::CLEAR_BIT(&(uLocal_48[iParam0]), 3);
			Local_50[iParam0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_78043, true) };
			Global_78044 = -1;
			if (BitTest(Local_131.f_9, 10))
			{
				Var9.f_9 = 49;
				Var9.f_59 = 2;
				__LIB_6__.func_760(Global_78043, &Var9);
				if (Global_78045)
				{
					__LIB_26__.func_263(iParam0, &Var9, ENTITY::GET_ENTITY_COORDS(Global_78043, true), ENTITY::GET_ENTITY_HEADING(Global_78043), __LIB_0__.func_119(Global_78043));
				}
				else
				{
					__LIB_26__.func_263(iParam0, &Var9, Global_113386.f_32749.f_1864[Local_131.f_14 /*3*/], Global_113386.f_32749.f_1934[Local_131.f_14], __LIB_0__.func_119(Global_78043));
				}
				Global_77137.f_139[iParam0] = Global_78043;
				Global_77137.f_484[iParam0] = Global_77137.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar10 = __LIB_18__.func_173();
				if (__LIB_0__.func_43(iVar10))
				{
					__LIB_0__.func_135("Players stored switch vehicle cleared for prep getaway.");
					Global_100144[iVar10] = 0;
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
			if (iParam0 == 24)
			{
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], false);
			}
			Global_78043 = 0;
			if (Global_2726988.f_66 != 0)
			{
				func_316(&Global_2726988, Global_2726987);
				Global_2726988.f_66 = 0;
			}
			return;
		}
		if (Global_2726988.f_66 != 0)
		{
			func_316(&Global_2726988, Global_2726987);
			Global_2726988.f_66 = 0;
		}
		__LIB_0__.func_135("Vehicle to be handed over doesn't exist.");
		Global_78044 = -1;
		Global_78043 = 0;
	}
	if (Global_77137[iParam0])
	{
		if (fLocal_152[iParam0] >= fVar0)
		{
			Global_77137[iParam0] = 0;
			__LIB_0__.func_135("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_77137.f_584 = { 0f, 0f, 0f };
			Global_77137.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar11 = false;
	if (fLocal_152[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_113386.f_32749.f_1958[Local_131.f_14] != 0) && Global_113386.f_32749.f_1958[Local_131.f_14] > 3) && Local_131.f_4 != 0) && __LIB_0__.func_61(iParam0, 0)) && __LIB_7__.func_193(Local_131.f_4, 0))
		{
			iVar12 = __LIB_13__.func_95();
			iVar13 = Global_113386.f_32749.f_4801;
			__LIB_27__.func_73(&iVar13, 0, 0, 17, 0, 0, 0);
			if (__LIB_20__.func_682(iVar12, iVar13))
			{
				func_316(&(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/]), Global_113386.f_32749.f_5591);
				func_499(iParam0);
				Global_77137[iParam0] = 1;
				__LIB_0__.func_135("Cannot be created: Vehicle ready for impound");
				Global_2726988.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			bVar11 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_77137.f_584 = { 0f, 0f, 0f };
		Global_77137.f_587 = { 0f, 0f, 0f };
	}
	if (Local_131.f_4 == 0)
	{
		Global_77137[iParam0] = 1;
		__LIB_0__.func_135("Cannot be created: Dummy model");
		return;
	}
	if (!__LIB_7__.func_193(Local_131.f_4, 0))
	{
		Global_77137[iParam0] = 1;
		__LIB_0__.func_135("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!__LIB_0__.func_61(iParam0, 0))
	{
		Global_77137[iParam0] = 1;
		__LIB_0__.func_135("Cannot be created: Vehicle gen not available");
		return;
	}
	if (BitTest(Local_131.f_9, 14) && !__LIB_0__.func_61(iParam0, 5))
	{
		Global_77137[iParam0] = 1;
		__LIB_0__.func_135("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((__LIB_31__.func_830() && __LIB_6__.func_854(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_77137[iParam0] = 1;
		__LIB_0__.func_135("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_130)
	{
		Global_77137[iParam0] = 1;
		__LIB_0__.func_135("Cannot be created: Player character not valid");
		return;
	}
	if (BitTest(Local_131.f_9, 10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iParam0]))
		{
			Global_77137[iParam0] = 1;
			__LIB_0__.func_135("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_77137.f_484[iParam0] = 0;
		}
	}
	if (BitTest(Local_131.f_9, 6))
	{
		if (func_493(Local_131.f_4, -1))
		{
			Global_77137[iParam0] = 1;
			__LIB_0__.func_135("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_492(Local_131.f_4, -1))
		{
			Global_77137[iParam0] = 1;
			__LIB_0__.func_135("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (BitTest(Local_131.f_9, 29))
	{
		if (Local_56.f_3 == 0)
		{
			return;
		}
	}
	if (func_491(iParam0))
	{
		Global_77137[iParam0] = 1;
		__LIB_0__.func_135("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_77137[iParam0] = 1;
			__LIB_0__.func_135("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar14 = 0;
	if (BitTest(Local_131.f_9, 19))
	{
		iVar14 = 2;
	}
	else if (BitTest(Local_131.f_9, 20))
	{
		iVar14 = 1;
	}
	if ((iParam0 == 24 && Global_113386.f_32749.f_1958[Local_131.f_14] > 0) && Global_113386.f_32749.f_1958[Local_131.f_14] <= 3)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_131.f_4))
		{
			iVar14 = 2;
			Local_131.f_12 = (Global_113386.f_32749.f_1958[Local_131.f_14] - 1);
		}
		else if (VEHICLE::IS_THIS_MODEL_A_CAR(Local_131.f_4))
		{
			iVar14 = 1;
			Local_131.f_12 = (Global_113386.f_32749.f_1958[Local_131.f_14] - 1);
		}
	}
	if (iVar14 != 0)
	{
		if (__LIB_12__.func_180(Local_131.f_12, iVar14, Local_131, -1f))
		{
			Global_77137[iParam0] = 1;
			__LIB_0__.func_135("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				__LIB_6__.func_770(iParam0, 0);
			}
			return;
		}
		if (BitTest(Local_131.f_9, 19) || BitTest(Local_131.f_9, 20))
		{
			if (iVar14 == 2)
			{
				if (Global_97820[Local_131.f_12 /*3*/][1] != -1 && (MISC::GET_GAME_TIMER() - Global_97820[Local_131.f_12 /*3*/][1]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_77137[iParam0] = 1;
					__LIB_0__.func_135("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var15, "...", 24);
					StringIntConCat(&Var15, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_97820[Local_131.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var15, " seconds", 24);
					__LIB_0__.func_135(&Var15);
					return;
				}
			}
			else if (iVar14 == 1)
			{
				if (Global_97820[Local_131.f_12 /*3*/][0] != -1 && (MISC::GET_GAME_TIMER() - Global_97820[Local_131.f_12 /*3*/][0]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_77137[iParam0] = 1;
					__LIB_0__.func_135("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var16, "...", 24);
					StringIntConCat(&Var16, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_97820[Local_131.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var16, " seconds", 24);
					__LIB_0__.func_135(&Var16);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_77137.f_584 = { Local_131 };
	}
	if (bVar11)
	{
		return;
	}
	if (iVar14 != 0)
	{
		iLocal_49[iParam0] = __LIB_6__.func_853(Local_131.f_12, iVar14);
		STREAMING::REQUEST_MODEL(iLocal_49[iParam0]);
		MISC::SET_BIT(&(uLocal_48[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_49[iParam0]))
		{
			__LIB_0__.func_135("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_489(iLocal_49[iParam0], Local_131, 1))
		{
			__LIB_0__.func_135("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		MISC::CLEAR_AREA(Local_131, 3f, false, false, false, false);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_131, 3f, false, false, false, false, false, false, 0);
		if (iVar14 == 2)
		{
			__LIB_40__.func_994(&(Global_77137.f_139[iParam0]), Local_131.f_12, Local_131, Local_131.f_3, 0, 2);
		}
		else if (iVar14 == 1)
		{
			__LIB_40__.func_994(&(Global_77137.f_139[iParam0]), Local_131.f_12, Local_131, Local_131.f_3, 0, 1);
		}
		else
		{
			Global_77137[iParam0] = 1;
			__LIB_0__.func_135("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(Local_131.f_4);
		iLocal_49[iParam0] = Local_131.f_4;
		MISC::SET_BIT(&(uLocal_48[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(Local_131.f_4))
		{
			__LIB_0__.func_135("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_489(Local_131.f_4, Local_131, 1))
		{
			__LIB_0__.func_135("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		MISC::CLEAR_AREA(Local_131, 3f, false, false, false, false);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_131, 3f, false, false, false, false, false, false, 0);
		if (BitTest(Local_131.f_9, 23))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(Local_131);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_131.f_4 == joaat("submersible2"))
			{
				Local_131.f_2 = -3f;
			}
		}
		Global_77137.f_139[iParam0] = VEHICLE::CREATE_VEHICLE(Local_131.f_4, Local_131, Local_131.f_3, true, true, false);
		if (BitTest(Local_131.f_9, 10))
		{
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_131.f_4))
			{
				MISC::SET_BIT(&(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/].f_77), 22);
			}
			if (BitTest(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/].f_77, 14))
			{
				__LIB_6__.func_760(Global_77137.f_139[iParam0], &Local_141);
				func_483(Local_141.f_77, &(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/].f_77), Local_131.f_4);
				MISC::CLEAR_BIT(&(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/].f_77), 14);
			}
			__LIB_24__.func_999(Global_77137.f_139[iParam0], &(Global_113386.f_32749.f_69[Local_131.f_14 /*78*/]), 0, 1);
			Global_77137.f_484[iParam0] = Global_77137.f_139[iParam0];
		}
		else
		{
			if (BitTest(Local_131.f_9, 9))
			{
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], Local_131.f_10, Local_131.f_11);
			}
			if (BitTest(Local_131.f_9, 8))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_77137.f_139[iParam0], 2);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Global_77137.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Global_77137.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_BREAK(Global_77137.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_77137.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_77137.f_139[iParam0], false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Global_77137.f_139[iParam0], false);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_77137.f_139[iParam0], true);
				ENTITY::FREEZE_ENTITY_POSITION(Global_77137.f_139[iParam0], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
	{
		func_481("Created - Coords: ", Local_131);
		func_481("Created - Dist From Player:", fLocal_152[iParam0]);
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_77137.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_131.f_4)
		{
			case joaat("miljet"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], 121, 21);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77137.f_139[iParam0], 8, 156);
				break;
			case joaat("besra"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], 122, 89);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77137.f_139[iParam0], 25, 121);
				break;
			case joaat("buzzard"):
			case joaat("buzzard2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77137.f_139[iParam0], 5, 156);
				break;
			case joaat("dukes2"):
				break;
			case joaat("rhino"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], 131, 132);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77137.f_139[iParam0], 132, 156);
				break;
			case joaat("luxor2"):
			case joaat("swift2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_77137.f_139[iParam0], 159, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_77137.f_139[iParam0], 160, 156);
				break;
		}
		if (BitTest(Local_131.f_9, 22))
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_77137.f_139[iParam0], true);
		}
		if (BitTest(Local_131.f_9, 30))
		{
			MISC::CLEAR_BIT(&(Local_131.f_9), 31);
		}
		if (BitTest(Local_131.f_9, 26))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_77137.f_139[iParam0], 7);
			VEHICLE::SET_VEHICLE_ALARM(Global_77137.f_139[iParam0], true);
		}
		func_480(Global_77137.f_139[iParam0], iParam0);
		if (!BitTest(Local_131.f_9, 29) && !BitTest(Local_131.f_9, 30))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_77137.f_139[iParam0], 5f);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_77137.f_139[iParam0], 0f);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_77137.f_139[iParam0], true);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_77137.f_139[iParam0], BitTest(Local_131.f_9, 5));
	}
	MISC::CLEAR_BIT(&(uLocal_48[iParam0]), 0);
	MISC::CLEAR_BIT(&(uLocal_48[iParam0]), 1);
	Global_77137[iParam0] = 1;
	if (iVar14 != 0)
	{
		Global_77137.f_69[iParam0] = 1;
	}
	iVar17 = __LIB_0__.func_228(458, -1);
	if (iVar17 != 0 && iVar17 == iParam0)
	{
		iLocal_169 = Global_77137.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2726988.f_66 = 0;
	}
}

void func_480(int iParam0, int iParam1)//Position - 0x2F983
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (iParam1)
		{
			case 36:
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, true);
				break;
			case 35:
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				break;
			}
	}
}

void func_481(char* sParam0, float fParam1)//Position - 0x2FA29
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_483(var uParam0, var uParam1, int iParam2)//Position - 0x2FA5B
{
	int iVar0;
	int iVar1;
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			break;
		case joaat("kalahari"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
		case joaat("voltic"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
		case joaat("banshee"):
			MISC::CLEAR_BIT(&iVar0, 0);
			break;
		case joaat("stalion"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
		case joaat("chino"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_489(int iParam0, struct<3> Param1, int iParam2)//Position - 0x30A4F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if ((iParam2 && CAM::IS_SCREEN_FADED_OUT()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) > 0)
	{
		__LIB_0__.func_135("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var0, true);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param1, true) < (fVar2 * 0.5f))
	{
		func_481("player is in vehicle bounds - fLength: ", fVar2);
		func_481("player is in vehicle bounds - fDistance: ", MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param1, true));
		return 1;
	}
	return 0;
}

int func_491(int iParam0)//Position - 0x30BA6
{
	int iVar0;
	int iVar1;
	if (iParam0 == 20)
	{
		if (Local_131.f_4 == joaat("frogger2"))
		{
			if (((func_493(Local_131.f_4, -1) || func_492(Local_131.f_4, -1)) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("exile2")) > 0) || !__LIB_0__.func_176(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[20]) && !ENTITY::IS_ENTITY_DEAD(Global_77137.f_484[20], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[20], false))
		{
			if (Local_131.f_4 == ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[20]))
			{
				VEHICLE::GET_VEHICLE_COLOURS(Global_77137.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_131.f_10 && iVar1 == Local_131.f_11)
				{
					__LIB_32__.func_987(20);
				}
			}
		}
	}
	return 0;
}

int func_492(int iParam0, int iParam1)//Position - 0x30C8E
{
	int iVar0;
	int iVar1;
	iVar0 = 2174;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Local_131, 200f, iParam0, iVar0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false)) && ENTITY::GET_ENTITY_MODEL(iVar1) == iParam0)
	{
		if (iParam1 == -1 || VEHICLE::GET_VEHICLE_LIVERY(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_493(int iParam0, int iParam1)//Position - 0x30CED
{
	var uVar0[50];
	int iVar1;
	int iVar2;
	iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar0);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[iVar1], false)) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar1]) == iParam0)
		{
			if (iParam1 == -1 || VEHICLE::GET_VEHICLE_LIVERY(uVar0[iVar1]) == iParam1)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

float func_496(int iParam0)//Position - 0x30D98
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
			break;
		case 63:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_499(int iParam0)//Position - 0x30F84
{
	if (BitTest(Local_131.f_9, 13))
	{
		__LIB_6__.func_770(iParam0, 0);
	}
}

void func_501(char* sParam0, int iParam1)//Position - 0x30FB0
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_502(int iParam0)//Position - 0x30FC8
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	bVar0 = false;
	iVar3 = -1;
	iVar4 = joaat("prop_forsale_dyn_01");
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !__LIB_0__.func_61(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar2 = -209.22f;
			iVar3 = 0;
			iVar4 = joaat("prop_airport_sale_sign");
			break;
		case 15:
		case 16:
		case 17:
			bVar0 = !__LIB_0__.func_61(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar2 = -68.75f;
			iVar3 = 1;
			break;
		case 18:
		case 19:
			bVar0 = !__LIB_0__.func_61(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar2 = -41.25f;
			iVar3 = 2;
			break;
		case 21:
			bVar0 = !__LIB_0__.func_61(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar2 = -27f;
			iVar3 = 3;
			break;
		case 22:
			bVar0 = !__LIB_0__.func_61(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar2 = -129.67f;
			iVar3 = 4;
			break;
		case 23:
			bVar0 = !__LIB_0__.func_61(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar2 = 89.95f;
			iVar3 = 5;
			break;
	}
	if (bVar0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1, true) < 250f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_146[iVar3]))
		{
			STREAMING::REQUEST_MODEL(iVar4);
			iLocal_147 = 1;
			if (STREAMING::HAS_MODEL_LOADED(iVar4))
			{
				if (iLocal_147)
				{
					iLocal_146[iVar3] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar4, Var1, false, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_146[iVar3], 0f, 0f, fVar2, 2, true);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_146[iVar3], false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_146[iVar3], true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
					iLocal_147 = 0;
				}
			}
		}
	}
	else if (iVar3 != -1)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_146[iVar3]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_146[iVar3])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1, true) > 255f)
		{
			OBJECT::DELETE_OBJECT(&(iLocal_146[iVar3]));
			if (iLocal_147)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
				iLocal_147 = 0;
			}
		}
	}
}

void func_503(int iParam0)//Position - 0x31221
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_0__.func_61(iParam0, 0) && (!BitTest(Local_131.f_9, 14) || __LIB_0__.func_61(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_77137.f_346[iParam0] != bVar0)
	{
		if (!__LIB_0__.func_78(Local_131.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_77137.f_346[iParam0])
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_77137.f_415[iParam0], false);
				}
			}
			else if (!Global_77137.f_346[iParam0])
			{
				Global_77137.f_415[iParam0] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_131.f_15, Local_131.f_18, false, true, true, true);
			}
		}
		Global_77137.f_346[iParam0] = bVar0;
	}
}

void func_504(int iParam0)//Position - 0x312DB
{
	int iVar0;
	if (BitTest(Local_131.f_9, 15))
	{
		if (__LIB_0__.func_61(iParam0, 0) && !__LIB_0__.func_61(iParam0, 5))
		{
			iVar0 = 145;
			if (BitTest(Local_131.f_9, 16))
			{
				iVar0 = __LIB_10__.func_242(9);
			}
			else if (BitTest(Local_131.f_9, 18))
			{
				iVar0 = __LIB_10__.func_242(4);
			}
			if (iVar0 == Local_131.f_12)
			{
				__LIB_0__.func_60(iParam0, 5, 1);
			}
		}
	}
}

void func_506(int iParam0)//Position - 0x31356
{
	if (__LIB_0__.func_61(iParam0, 0) && !__LIB_0__.func_61(iParam0, 3))
	{
		if (BitTest(Local_131.f_9, 4))
		{
			__LIB_0__.func_60(iParam0, 3, 1);
		}
		else
		{
			__LIB_0__.func_60(iParam0, 3, 1);
		}
	}
}

void func_507(int iParam0)//Position - 0x31392
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = true;
	if (__LIB_0__.func_61(iParam0, 0) && bLocal_130)
	{
		if (BitTest(Local_131.f_9, 0) || (BitTest(Local_131.f_9, 2) && !__LIB_0__.func_61(iParam0, 2)))
		{
			if ((!BitTest(Local_131.f_9, 21) || (((((((!__LIB_0__.func_39(0) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(9)) && !__LIB_0__.func_39(10)) && !__LIB_0__.func_39(13)) && !__LIB_0__.func_39(14))) && ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || __LIB_0__.func_61(iParam0, 5)) || !BitTest(Local_131.f_9, 28)))
			{
				bVar0 = false;
				if (!HUD::DOES_BLIP_EXIST(Global_77137.f_208[iParam0]))
				{
					if (__LIB_0__.func_176(0))
					{
						if (BitTest(Local_131.f_9, 14) && !__LIB_0__.func_61(iParam0, 5))
						{
							Global_77137.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_140.f_55);
							if (Local_140.f_58 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_77137.f_208[iParam0], Local_140.f_58);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77137.f_208[iParam0], &(Local_140.f_59));
								}
							}
						}
						else if (__LIB_0__.func_61(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_77137.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_140.f_55);
							if (Local_131.f_13 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_77137.f_208[iParam0], Local_131.f_13);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77137.f_208[iParam0], &(Local_140.f_59));
								}
								if (Local_131.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_131.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_131.f_12 == 2)
								{
									iVar1 = 44;
								}
								HUD::SET_BLIP_COLOUR(Global_77137.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_77137.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_131);
							if (Local_131.f_13 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_77137.f_208[iParam0], Local_131.f_13);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_77137.f_208[iParam0], &(Local_140.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_131.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_131.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_131.f_12 == 2)
									{
										iVar2 = 44;
									}
									HUD::SET_BLIP_COLOUR(Global_77137.f_208[iParam0], iVar2);
								}
							}
						}
						HUD::SET_BLIP_AS_SHORT_RANGE(Global_77137.f_208[iParam0], !BitTest(Local_131.f_9, 1));
						HUD::SET_BLIP_FLASHES(Global_77137.f_208[iParam0], false);
						HUD::SET_BLIP_PRIORITY(Global_77137.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (HUD::DOES_BLIP_EXIST(Global_77137.f_208[iParam0]))
		{
			HUD::REMOVE_BLIP(&(Global_77137.f_208[iParam0]));
		}
	}
}

void func_508(int iParam0)//Position - 0x316FA
{
	if (__LIB_0__.func_61(iParam0, 0) && !__LIB_0__.func_61(iParam0, 1))
	{
		if (__LIB_0__.func_61(iParam0, 4))
		{
			if (BitTest(Local_131.f_9, 3))
			{
				__LIB_18__.func_203(&(Local_131.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				__LIB_0__.func_60(iParam0, 1, 1);
			}
			else
			{
				__LIB_0__.func_60(iParam0, 1, 1);
			}
		}
	}
}

void func_510(int iParam0)//Position - 0x31774
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!BitTest(Local_131.f_9, 7) || Local_131.f_12 == iLocal_129)
	{
		bLocal_130 = true;
	}
	else
	{
		bLocal_130 = false;
	}
	if (__LIB_0__.func_39(14))
	{
		bLocal_130 = false;
	}
	if ((bLocal_130 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && BitTest(Local_131.f_9, 14))
	{
		if (Local_56.f_2 == 0 && Local_56.f_3 == 0)
		{
			if (fLocal_152[iParam0] < Local_56.f_1 || Local_56.f_0 == iParam0)
			{
				if (Local_56.f_0 != iParam0)
				{
					Local_56.f_8 = { Local_131 };
					Local_56.f_29 = { Local_140 };
					Local_56.f_0 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_77137.f_592)
					{
						Global_77137.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_56.f_6 = -1;
					if ((Local_56.f_0 == 12 || Local_56.f_0 == 13) || Local_56.f_0 == 14)
					{
						Local_56.f_6 = 0;
					}
					else if ((Local_56.f_0 == 15 || Local_56.f_0 == 16) || Local_56.f_0 == 17)
					{
						Local_56.f_6 = 1;
					}
					else if ((Local_56.f_0 == 18 || Local_56.f_0 == 19) || Local_56.f_0 == 20)
					{
						Local_56.f_6 = 2;
					}
					else if ((Local_56.f_0 == 21 || Local_56.f_0 == 22) || Local_56.f_0 == 23)
					{
						Local_56.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = __LIB_4__.func_65(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_77137.f_592)
							{
								switch (Local_56.f_6)
								{
									case 3:
										if (func_67(iVar2))
										{
											Global_77137.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									case 2:
										if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar2))
										{
											Global_77137.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									case 1:
										if ((VEHICLE::IS_THIS_MODEL_A_BOAT(iVar2) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_77137.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									case 0:
										if (func_68(iVar2))
										{
											Global_77137.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_56.f_1 = fLocal_152[iParam0];
			}
		}
	}
	else if (Local_56.f_0 == iParam0)
	{
		Local_56.f_0 = -1;
		Local_56.f_1 = 99999.99f;
	}
	if (!BitTest(uLocal_48[iParam0], 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_139[iParam0], false))
					{
						if (!BitTest(uLocal_48[iParam0], 1) || BitTest(uLocal_48[iParam0], 3))
						{
							MISC::SET_BIT(&(uLocal_48[iParam0]), 0);
							__LIB_0__.func_60(iParam0, 4, 1);
							__LIB_0__.func_60(iParam0, 2, 1);
						}
					}
					else
					{
						MISC::SET_BIT(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[iParam0], false)) && ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_171)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_77137.f_484[iParam0], 1738.6864f, 3283.4226f, 45.242832f, 1724.5111f, 3328.8079f, 39.597805f, 21f, false, true, 0))
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Global_77137.f_484[iParam0], 0f);
					iLocal_171 = 1;
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_77137.f_484[iParam0], 1738.6864f, 3283.4226f, 45.242832f, 1724.5111f, 3328.8079f, 39.597805f, 21f, false, true, 0))
			{
				VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Global_77137.f_484[iParam0], 1f);
				iLocal_171 = 0;
			}
		}
		else
		{
			iLocal_171 = 0;
		}
	}
}

var func_512(var uParam0, int iParam1)//Position - 0x31B94
{
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&(uParam0->f_59), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.8965f, 12.132326f };
			uParam0->f_3 = { -966.73083f, -2787.9749f, 16.132324f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1652.4537f, -3059.1494f, 24.932f };
			uParam0->f_14.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_12 = 38.2303f;
			uParam0->f_14.f_6 = { -1651.5469f, -3060.4783f, 23.8077f };
			uParam0->f_14.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1650.4305f, -3177.2292f, 16.9898f };
			uParam0->f_29.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_12 = 38.2303f;
			uParam0->f_29.f_6 = { -1647.495f, -3173.7278f, 16.6439f };
			uParam0->f_29.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1625.9105f, -3167.5557f, 11.114552f };
			uParam0->f_10 = { -1688.5801f, -3130.7407f, 20.135382f };
			uParam0->f_13 = 60.1875f;
			uParam0->f_48 = { -1625.9105f, -3167.5557f, 11.114552f };
			uParam0->f_51 = { -1688.5801f, -3130.7407f, 20.135382f };
			uParam0->f_54 = 60.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME" /* GXT: Los Santos International Hangar */, 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		case 13:
			*uParam0 = { -952.8823f, -2795.8965f, 12.132326f };
			uParam0->f_3 = { -966.73083f, -2787.9749f, 16.132324f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1184.2f, -3345f, 17.5f };
			uParam0->f_14.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_12 = 30.3f;
			uParam0->f_14.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_14.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_29.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_12 = 37.8f;
			uParam0->f_29.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_29.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1247.6877f, -3408.5464f, 20.504175f };
			uParam0->f_10 = { -1309.774f, -3372.2944f, 11.368781f };
			uParam0->f_13 = 66.1875f;
			uParam0->f_48 = { -1247.6877f, -3408.5464f, 20.504175f };
			uParam0->f_51 = { -1309.774f, -3372.2944f, 11.368781f };
			uParam0->f_54 = 66.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME" /* GXT: Los Santos International Hangar */, 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		case 14:
			*uParam0 = { 1727.3018f, 3291.4531f, 39.619114f };
			uParam0->f_3 = { 1744.1077f, 3296.2146f, 44.171993f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_44 = { 1737.5295f, 3289.2388f, 40.1448f };
			uParam0->f_47 = 14.8763f;
			uParam0->f_14 = { 1739.7485f, 3280.4453f, 45.8124f };
			uParam0->f_14.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_12 = 50f;
			uParam0->f_14.f_6 = { 1739.7485f, 3280.4453f, 45.8124f };
			uParam0->f_14.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1739.7485f, 3280.4453f, 45.8124f };
			uParam0->f_29.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_12 = 50f;
			uParam0->f_29.f_6 = { 1739.7485f, 3280.4453f, 45.8124f };
			uParam0->f_29.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { 1718.0555f, 3305.0188f, 45.70922f };
			uParam0->f_10 = { 1745.7059f, 3313.101f, 39.757996f };
			uParam0->f_13 = 28.125f;
			uParam0->f_48 = { 1718.0555f, 3305.0188f, 45.70922f };
			uParam0->f_51 = { 1745.7059f, 3313.101f, 39.757996f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME2" /* GXT: Sandy Shores Hangar */, 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		case 18:
			*uParam0 = { -709.095f, -1414.2295f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.6545f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.5093f, 3.188024f };
			uParam0->f_10 = { -753.7792f, -1426.7556f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.1694f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -738f, -1440f, 6.3f };
			uParam0->f_14.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -738f, -1440f, 6f };
			uParam0->f_14.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_29.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_29.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -738.77905f, -1439.3772f, 9.125515f };
			uParam0->f_51 = { -755.9111f, -1425.0059f, 1.688014f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME" /* GXT: Vespucci Helipad */, 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		case 19:
			*uParam0 = { -709.095f, -1414.2295f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.6545f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.68115f, -1459.2335f, 3.188023f };
			uParam0->f_10 = { -770.7671f, -1446.8666f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.1694f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_14.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_14.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_29.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_29.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -755.57153f, -1459.453f, 9.125514f };
			uParam0->f_51 = { -771.4204f, -1446.2347f, 1.688017f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME" /* GXT: Vespucci Helipad */, 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		case 20:
			*uParam0 = { 1763.4244f, 3238.2822f, 40.32022f };
			uParam0->f_3 = { 1786.5887f, 3239.0159f, 47.185337f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.4244f, 3238.2822f, 40.32022f };
			uParam0->f_10 = { 1786.5887f, 3239.0159f, 47.185337f };
			uParam0->f_13 = 17.75f;
			uParam0->f_44 = { 1761.1222f, 3250.125f, 40.733f };
			uParam0->f_47 = 236.5858f;
			uParam0->f_14 = { 1779.2452f, 3222.4773f, 48.5795f };
			uParam0->f_14.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_12 = 40f;
			uParam0->f_14.f_6 = { 1779.2452f, 3222.4773f, 48.5795f };
			uParam0->f_14.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1779.2452f, 3222.4773f, 48.5795f };
			uParam0->f_29.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { 1779.2452f, 3222.4773f, 48.5795f };
			uParam0->f_29.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { 1802.3268f, 3245.1646f, 46.955437f };
			uParam0->f_51 = { 1755.0397f, 3237.1704f, 38.693703f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME2" /* GXT: Sandy Shores Helipad */, 16);
			uParam0->f_67 = 0;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		case 15:
			*uParam0 = { -826.57587f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.22156f, -1356.0399f, -0.212093f };
			uParam0->f_10 = { -841.64514f, -1365.7767f, 3.787907f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_47 = 112.3787f;
			uParam0->f_14 = { -859.6f, -1374f, 4.3f };
			uParam0->f_14.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_12 = 32.9f;
			uParam0->f_14.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_14.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_29.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_29.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.8871f, -3.331177f };
			uParam0->f_51 = { -826.64606f, -1410.4468f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.7362f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME" /* GXT: Puerto Del Sol Marina */, 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		case 16:
			*uParam0 = { -826.57587f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.81775f, -1347.7858f, -0.212093f };
			uParam0->f_10 = { -845.2482f, -1357.9358f, 3.787908f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -839.2461f, -1349.5249f, 0.6102f };
			uParam0->f_47 = 110.6762f;
			uParam0->f_14 = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_14.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_12 = 30f;
			uParam0->f_14.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_14.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_29.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_29.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.8871f, -3.331177f };
			uParam0->f_51 = { -826.64606f, -1410.4468f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.7362f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME" /* GXT: Puerto Del Sol Marina */, 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		case 17:
			*uParam0 = { -826.57587f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.69867f, -1339.1278f, -0.212129f };
			uParam0->f_10 = { -848.128f, -1349.1681f, 3.787905f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -842.0763f, -1341.4015f, 0.6102f };
			uParam0->f_47 = 109.8916f;
			uParam0->f_14 = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_14.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_12 = 31.2f;
			uParam0->f_14.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_14.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_29.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_29.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.8871f, -3.331177f };
			uParam0->f_51 = { -826.64606f, -1410.4468f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.7362f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME" /* GXT: Puerto Del Sol Marina */, 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		case 21:
			*uParam0 = { -63.381466f, 84.0594f, 70.521385f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_47 = 243.8699f;
			uParam0->f_7 = { 189.70735f, -1017.56903f, -104.99996f };
			uParam0->f_10 = { 207.8325f, -1017.7743f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.99786f, -981.66345f, -100.18742f };
			uParam0->f_51 = { 234.20102f, -981.75824f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME1" /* GXT: Vinewood Garage */, 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 243.8699f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_77[0] = 66.202f;
			uParam0->f_70[1 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_77[1] = 71.6237f;
			uParam0->f_80 = 1;
			break;
		case 22:
			*uParam0 = { -72.41166f, -1824.1421f, 25.817038f };
			uParam0->f_3 = { -68.70254f, -1819.6421f, 29.379538f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -70.1992f, -1823.2252f, 25.942f };
			uParam0->f_47 = 46.1535f;
			uParam0->f_7 = { 189.70735f, -1017.56903f, -104.99996f };
			uParam0->f_10 = { 207.8325f, -1017.7743f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.99786f, -981.66345f, -100.18742f };
			uParam0->f_51 = { 234.20102f, -981.75824f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME2" /* GXT: Grove Street Garage */, 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 53.0985f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -64.2268f, -1832.5975f, 25.8666f };
			uParam0->f_77[0] = 274.6339f;
			uParam0->f_70[1 /*3*/] = { -68.5531f, -1824.3774f, 25.9424f };
			uParam0->f_77[1] = 215.8295f;
			uParam0->f_80 = 1;
			break;
		case 23:
			*uParam0 = { -220.77936f, -1159.2798f, 21.903023f };
			uParam0->f_3 = { -220.7273f, -1165.2653f, 25.450535f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -220.7592f, -1162.2775f, 22.0242f };
			uParam0->f_47 = 271.2097f;
			uParam0->f_7 = { 189.70735f, -1017.56903f, -104.99996f };
			uParam0->f_10 = { 207.8325f, -1017.7743f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.99786f, -981.66345f, -100.18742f };
			uParam0->f_51 = { 234.20102f, -981.75824f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME3" /* GXT: Pillbox Hill Garage */, 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 271.2097f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -222.1935f, -1162.1134f, 22.0204f };
			uParam0->f_77[0] = 358.5703f;
			uParam0->f_70[1 /*3*/] = { -220.8189f, -1162.3016f, 22.0242f };
			uParam0->f_77[1] = 70.2711f;
			uParam0->f_80 = 1;
			break;
	}
	return uParam0->f_80;
}

void func_515()//Position - 0x33454
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (HUD::DOES_BLIP_EXIST(Global_77137.f_208[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Global_77137.f_208[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iVar0], false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_77137.f_139[iVar0], true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iVar0]));
					Global_77137.f_139[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(Local_56.f_110))
	{
		CAM::SET_CAM_ACTIVE(Local_56.f_110, false);
		CAM::DESTROY_CAM(Local_56.f_110, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_56.f_111))
	{
		CAM::SET_CAM_ACTIVE(Local_56.f_111, false);
		CAM::DESTROY_CAM(Local_56.f_111, false);
	}
	if (Local_56.f_3 != 0)
	{
		__LIB_11__.func_786();
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	if (HUD::DOES_BLIP_EXIST(Global_77137.f_583))
	{
		HUD::REMOVE_BLIP(&(Global_77137.f_583));
	}
	if (iLocal_115 != -1)
	{
		__LIB_7__.func_249(&iLocal_115);
	}
	if (iLocal_114 != -1)
	{
		__LIB_7__.func_249(&iLocal_114);
	}
	if (Local_56.f_5 != -1)
	{
		__LIB_7__.func_249(&(Local_56.f_5));
	}
	if (iLocal_125 != -1)
	{
		__LIB_7__.func_249(&iLocal_125);
	}
	if (Local_56.f_3 > 0)
	{
		if (Global_77137.f_577)
		{
			__LIB_6__.func_295(47, 1);
			__LIB_9__.func_81(47, 1);
			Global_77137.f_577 = 0;
			Local_56.f_3 = 0;
		}
	}
	Global_77137.f_553 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_516()//Position - 0x335C2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_53[iVar0]));
		}
		iVar0++;
	}
}

void func_517(int iParam0)//Position - 0x335F5
{
	int iVar0;
	bool bVar1;
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	if (!BitTest(iLocal_150[iVar0], bVar1))
	{
		MISC::SET_BIT(&(iLocal_150[iVar0]), bVar1);
		iLocal_149[iLocal_148] = iParam0;
		iLocal_148++;
	}
}

void func_518()//Position - 0x33638
{
	int iVar0;
	if (__LIB_11__.func_866(25))
	{
		if (Global_113386.f_32749.f_69[22 /*78*/].f_66 != 0 && !__LIB_7__.func_193(Global_113386.f_32749.f_69[22 /*78*/].f_66, 0))
		{
			Global_113386.f_32749.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_113386.f_32749.f_69[22 /*78*/].f_77 = 0;
			Global_113386.f_32749.f_69[22 /*78*/].f_65 = 0;
			Global_113386.f_32749.f_69[22 /*78*/].f_62 = 255;
			Global_113386.f_32749.f_69[22 /*78*/].f_63 = 255;
			Global_113386.f_32749.f_69[22 /*78*/].f_64 = 255;
			Global_113386.f_32749.f_69[22 /*78*/].f_5 = 0;
			Global_113386.f_32749.f_69[22 /*78*/].f_6 = 0;
			Global_113386.f_32749.f_69[22 /*78*/].f_7 = 0;
			Global_113386.f_32749.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_113386.f_32749.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_113386.f_32749.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((__LIB_11__.func_866(21) && Global_113386.f_32749.f_69[9 /*78*/].f_66 != 0) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[9 /*78*/].f_66, 0))
	{
		Global_113386.f_32749.f_69[9 /*78*/].f_66 = 0;
	}
	if ((__LIB_11__.func_866(22) && Global_113386.f_32749.f_69[10 /*78*/].f_66 != 0) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[10 /*78*/].f_66, 0))
	{
		Global_113386.f_32749.f_69[10 /*78*/].f_66 = 0;
	}
	if ((__LIB_11__.func_866(23) && Global_113386.f_32749.f_69[11 /*78*/].f_66 != 0) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[11 /*78*/].f_66, 0))
	{
		Global_113386.f_32749.f_69[11 /*78*/].f_66 = 0;
	}
	if (__LIB_11__.func_866(26) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[12 /*78*/].f_66, 0))
	{
		__LIB_6__.func_770(26, 0);
	}
	if (__LIB_11__.func_866(27) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[13 /*78*/].f_66, 0))
	{
		__LIB_6__.func_770(27, 0);
	}
	if (__LIB_11__.func_866(28) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[14 /*78*/].f_66, 0))
	{
		__LIB_6__.func_770(28, 0);
	}
	if (__LIB_11__.func_866(29) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[15 /*78*/].f_66, 0))
	{
		__LIB_6__.func_770(29, 0);
	}
	if (__LIB_11__.func_866(30) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[16 /*78*/].f_66, 0))
	{
		__LIB_6__.func_770(30, 0);
	}
	if (__LIB_11__.func_866(31) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[17 /*78*/].f_66, 0))
	{
		__LIB_6__.func_770(31, 0);
	}
	if (__LIB_11__.func_866(32) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[18 /*78*/].f_66, 0))
	{
		__LIB_6__.func_770(32, 0);
	}
	if (__LIB_11__.func_866(33) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[19 /*78*/].f_66, 0))
	{
		__LIB_6__.func_770(33, 0);
	}
	if (__LIB_11__.func_866(34) && !__LIB_7__.func_193(Global_113386.f_32749.f_69[20 /*78*/].f_66, 0))
	{
		__LIB_6__.func_770(34, 0);
	}
}

void func_524(var uParam0)//Position - 0x33A4E
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { __LIB_30__.func_693("C_SF", "DL", "AST", "X1/BE") };
	func_528();
	func_527();
	func_525();
}

void func_525()//Position - 0x33A8B
{
	Global_111764 = 2405.8494f;
	Global_111767 = 2408.22f;
	Global_111770 = 2386.0962f;
	Global_111773 = 69.1875f;
	Global_111776[0 /*3*/] = 2417.105f;
	Global_111776[1 /*3*/] = 2407.058f;
	Global_111776[2 /*3*/] = 2371.9197f;
	Global_111776[3 /*3*/] = 2399.5835f;
	Global_111776[4 /*3*/] = 2416.519f;
	Global_111776[5 /*3*/] = 2430.345f;
	Global_111776[6 /*3*/] = 2385.8186f;
	Global_111798[0] = 157.8636f;
	Global_111798[1] = 174.7226f;
	Global_111798[2] = 270.7562f;
	Global_111798[3] = 190.7495f;
	Global_111798[4] = 27.6506f;
	Global_111798[5] = 358.1218f;
	Global_111798[6] = 339.4363f;
	Global_111806 = 2399.82f;
	Global_111809 = 2414.7f;
	__LIB_0__.func_712(&Global_110133, 64);
}

void func_527()//Position - 0x33B8C
{
	Global_110138[0 /*3*/].f_1 = 5141.01f;
	Global_110138[1 /*3*/].f_1 = 6048.71f;
	Global_110138[2 /*3*/].f_1 = 6185.32f;
	Global_110138[3 /*3*/].f_1 = 5180.99f;
	Global_110138[4 /*3*/].f_1 = 4582.72f;
	Global_110138[5 /*3*/].f_1 = 4831.82f;
	Global_110138[6 /*3*/].f_1 = 4322.66f;
	Global_110138[7 /*3*/].f_1 = 3503.92f;
	Global_110138[8 /*3*/].f_1 = 3777.54f;
	Global_110138[9 /*3*/].f_1 = 3810.8f;
	Global_110138[10 /*3*/].f_1 = 3095.88f;
	Global_110172[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_110172[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_110172[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_110172[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_110172[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_110172[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_110172[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_110172[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_110172[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_110172[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_110172[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_110172[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_110172[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_110172[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_110172[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_110172[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_110172[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_110172[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_110172[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_110172[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_110172[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_110172[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_110172[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_110172[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_110172[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_110172[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_110172[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_110172[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_110172[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_110172[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_110172[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_110172[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_110172[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_110172[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_110172[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_110172[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_110172[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_110172[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_110172[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_110172[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_110172[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_110172[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_110172[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_110172[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_110172[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_110172[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_110172[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_110172[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_110172[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_110172[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_110172[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_110172[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_110172[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_110172[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_110172[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_110172[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_110172[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_110172[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_110172[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_110172[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_110172[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_110172[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_110172[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	__LIB_0__.func_712(&Global_110133, 16);
}

void func_528()//Position - 0x34091
{
	Global_110089[0 /*3*/] = -1567.3816f;
	Global_110089[1 /*3*/] = -1436.3053f;
	Global_110089[2 /*3*/] = 31.2408f;
	Global_110089[3 /*3*/] = 278.1924f;
	Global_110089[4 /*3*/] = 1116.002f;
	Global_110089[5 /*3*/] = 1676.1929f;
	Global_110111[0 /*3*/] = -1592.642f;
	Global_110111[1 /*3*/] = -1573.5006f;
	Global_110111[2 /*3*/] = -1459.3585f;
	Global_110111[3 /*3*/] = 21.1005f;
	Global_110111[4 /*3*/] = 262.9409f;
	Global_110111[5 /*3*/] = 1091.0703f;
	__LIB_0__.func_712(&Global_110133, 1);
}

