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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_61 = 0;
	struct<3> Local_62[32];
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
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
	var uLocal_83 = 0;
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
	var uLocal_96 = 0;
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
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
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
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	struct<21> Local_237 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_146(ScriptParam_237))
		{
			func_140();
		}
	}
	while (true)
	{
		__LIB_0__.func_671();
		if (__LIB_6__.func_949())
		{
			func_140();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != bLocal_67)
		{
			func_140();
		}
		if (NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()) != Local_60.f_17)
		{
			func_140();
		}
		NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
		switch (__LIB_1__.func_98(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_128())
				{
					if (__LIB_1__.func_97() == 1)
					{
						func_126();
						Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
					}
					else if (__LIB_1__.func_97() == 4)
					{
						Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
					}
				}
				break;
			case 1:
				if (__LIB_1__.func_97() == 1)
				{
					func_108();
				}
				else if (__LIB_1__.func_97() == 4)
				{
					Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			case 3:
				__LIB_1__.func_54(&(Local_60.f_21));
				if (__LIB_1__.func_53(&(Local_60.f_21)))
				{
					Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			case 2:
				Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			case 4:
				func_140();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_1__.func_97())
			{
				case 0:
					if (func_78())
					{
						Local_60.f_0 = 1;
					}
					break;
				case 1:
					func_38();
					if (func_1())
					{
						Local_60.f_0 = 4;
					}
					break;
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1B7
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1CB
{
	if (BitTest(uLocal_63, 8))
	{
		if (!__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(Local_60.f_1, 9))
			{
				MISC::SET_BIT(&(Local_60.f_1), 9);
			}
			return 0;
		}
		else if (BitTest(Local_60.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_60.f_12 == 0 || Local_60.f_12 == 1)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
		{
			if (!__LIB_2__.func_63(Local_60.f_2))
			{
				return 1;
			}
			if (__LIB_0__.func_680(Local_60.f_3))
			{
				return 1;
			}
			if (Local_60.f_12 > 0)
			{
				return 1;
			}
		}
		if (BitTest(uLocal_63, 8))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_60.f_6, 250f, 250f, 250f, false, true, 0))
			{
				if (Local_60.f_18 == 1)
				{
					func_13();
				}
				return 1;
			}
			if (Local_60.f_18 == 1)
			{
				if ((((__LIB_7__.func_150(PLAYER::PLAYER_ID()) && __LIB_1__.func_321() != 151) || __LIB_2__.func_303(PLAYER::PLAYER_ID(), 146)) || __LIB_9__.func_370()) || __LIB_0__.func_674())
				{
					func_13();
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
					{
						__LIB_1__.func_96(&(Local_60.f_4));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_13()//Position - 0x40B
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
	{
		if (Global_262145.f_20333 /* Tunable: -156036296 */ > 0)
		{
			__LIB_7__.func_67(Global_262145.f_20333 /* Tunable: -156036296 */, 0);
			func_14(Global_262145.f_20333 /* Tunable: -156036296 */, 14, 2, 1);
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x444
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, __LIB_1__.func_52(iParam1), 16);
	StringCopy(&Var1, __LIB_1__.func_51(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS");
			break;
		case 1:
			iVar2 = joaat("SERVICE_EARN_REFUND_BACKUP_LOST");
			break;
		case 2:
			iVar2 = joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES");
			break;
		case 3:
			iVar2 = joaat("SERVICE_EARN_REFUND_HIRE_MUGGER");
			break;
		case 4:
			iVar2 = joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY");
			break;
		case 5:
			iVar2 = joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF");
			break;
		case 6:
			iVar2 = joaat("SERVICE_EARN_REFUND_HELI_PICKUP");
			break;
		case 7:
			iVar2 = joaat("SERVICE_EARN_REFUND_BOAT_PICKUP");
			break;
		case 8:
			iVar2 = joaat("SERVICE_EARN_REFUND_CLEAR_WANTED");
			break;
		case 9:
			iVar2 = joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD");
			break;
		case 10:
			iVar2 = joaat("SERVICE_EARN_REFUND_CHALLENGE");
			break;
		case 11:
			iVar2 = joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB");
			break;
		case 12:
			iVar2 = joaat("SERVICE_EARN_REFUND_LOTTERY");
			break;
		case 13:
			iVar2 = joaat("SERVICE_EARN_REFUNDAPPEARANCE");
			break;
		case 14:
			iVar2 = joaat("SERVICE_EARN_REFUNDAMMODROP");
			break;
		case 15:
			iVar2 = joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL");
			break;
		case 16:
			iVar2 = joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO");
			break;
		case 17:
			iVar2 = joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY");
			break;
	}
	if (__LIB_0__.func_112())
	{
		func_15(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4534105[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4534105[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		MONEY::NETWORK_REFUND_CASH(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x5D2
{
	int iVar0;
	if (!__LIB_0__.func_112())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			if (iParam1 > 0 || Global_262145.f_28363 /* Tunable: 1103207774 */)
			{
				func_16(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_ROCKSTAR"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_16(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
			if (iParam1 > 0 || Global_262145.f_28363 /* Tunable: 1103207774 */)
			{
				func_16(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
			func_16(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xDE3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bVar0 = false;
	if (!__LIB_0__.func_112())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(__LIB_0__.func_5()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			__LIB_0__.func_677(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			__LIB_24__.func_952(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

int func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x11AB
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!__LIB_0__.func_112())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				__LIB_1__.func_46(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_38()//Position - 0x16BD
{
	switch (Local_60.f_12)
	{
		case 0:
			if (Local_60.f_18)
			{
				func_77();
			}
			else
			{
				func_72();
			}
			if (func_42())
			{
				func_41();
				Local_60.f_12 = 1;
			}
			break;
		case 1:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
			{
				func_40(Local_60.f_4, 18);
				if (Local_60.f_15 == 3)
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
					{
						Local_60.f_15 = 2;
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
				{
					__LIB_1__.func_46(&(Local_60.f_2));
				}
				else if (Local_60.f_13 == 1)
				{
					Local_60.f_13 = 0;
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3))
				{
					__LIB_1__.func_46(&(Local_60.f_3));
				}
				else if (Local_60.f_14 == 1)
				{
					Local_60.f_14 = 0;
				}
			}
			break;
		case 2:
			break;
	}
}

void func_40(int iParam0, int iParam1)//Position - 0x17A3
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	HUD::GET_HUD_COLOUR(iParam1, &iVar3, &iVar4, &iVar5, &uVar6);
	fVar2 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(iParam0)), &Var0, &Var1);
	fVar7 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var1.f_2 - fVar7);
	if (fVar2 <= (fVar8 + 0.1f))
	{
		fVar2 = (fVar8 + 0.4f);
	}
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iParam0), true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, true, true, 2, false, 0, 0, false);
}

void func_41()//Position - 0x1849
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		iLocal_64 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4));
		if (Local_60.f_18)
		{
			HUD::SET_BLIP_SPRITE(iLocal_64, 84);
			HUD::SET_BLIP_SCALE(iLocal_64, 1.2f);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_64, "AMD_BLIPBALL" /* GXT: Ballistic Armor and Minigun */);
		}
		else
		{
			HUD::SET_BLIP_SPRITE(iLocal_64, 351);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_64, "AMD_BLIPN" /* GXT: Ammo Crate */);
			HUD::SET_BLIP_SCALE(iLocal_64, 0.7f);
		}
		HUD::SET_BLIP_COLOUR(iLocal_64, 2);
		HUD::SET_BLIP_ALPHA(iLocal_64, 120);
	}
}

int func_42()//Position - 0x18BD
{
	if (!BitTest(Local_60.f_1, 7))
	{
		if (__LIB_2__.func_63(Local_60.f_2))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, false, true, 0))
			{
				MISC::SET_BIT(&(Local_60.f_1), 7);
			}
		}
	}
	else if (func_128())
	{
		if (func_45())
		{
			if (func_43())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_43()//Position - 0x191F
{
	STREAMING::REQUEST_MODEL(Local_60.f_19.f_1);
	if (STREAMING::HAS_MODEL_LOADED(Local_60.f_19.f_1))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_19) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				if (__LIB_1__.func_262(&(Local_60.f_19), Local_60.f_19.f_1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_60.f_4), true) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0))
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_60.f_19, true);
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_19), ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_4)));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4), NETWORK::NET_TO_OBJ(Local_60.f_19), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_60.f_19), true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_60.f_19), false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_60.f_19));
					ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_60.f_19), 0f, 0f, -0.2f);
					PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_60.f_19), true);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_19))
	{
		return 0;
	}
	return 1;
}

int func_45()//Position - 0x1ACB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = joaat("ex_prop_adv_case_sm");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(joaat("p_cargo_chute_s"));
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(joaat("p_cargo_chute_s")))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
		{
			if (__LIB_2__.func_63(Local_60.f_2) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 2, 0))
			{
				iVar1 = 200;
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
				{
					iVar2 = 0;
					iVar3 = joaat("PICKUP_AMMO_BULLET_MP");
					if (Local_60.f_18 == 1)
					{
						iVar3 = joaat("PICKUP_WEAPON_MINIGUN");
					}
					if (Local_60.f_18 == 0)
					{
						MISC::SET_BIT(&iVar2, 12);
					}
					else
					{
						MISC::SET_BIT(&iVar2, 12);
					}
					Local_60.f_4 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_AMBIENT_PICKUP(iVar3, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_60.f_2), true) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, true, true));
					if (Local_60.f_18 == 1)
					{
						__LIB_1__.func_54(NETWORK::NET_TO_OBJ(Local_60.f_4));
						OBJECT::SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(false);
					}
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_60.f_4), true);
					OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_60.f_4), true);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_60.f_4), true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_60.f_4), false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_60.f_4));
					__LIB_1__.func_53();
					iVar4 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iVar4, "Crate_Beeps", NETWORK::NET_TO_OBJ(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", true, 0);
					Local_60.f_16 = AUDIO::GET_NETWORK_ID_FROM_SOUND_ID(iVar4);
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
				{
					if (__LIB_1__.func_262(&(Local_60.f_5), joaat("p_cargo_chute_s"), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_60.f_2), true) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_60.f_5, true);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_5), NETWORK::NET_TO_OBJ(Local_60.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_60.f_5), true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_60.f_5), false);
						ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_60.f_5));
					}
				}
				func_68();
				if (!BitTest(uLocal_63, 15))
				{
					if (!Local_60.f_18)
					{
						__LIB_0__.func_203(&uLocal_72, 3, NETWORK::NET_TO_PED(Local_60.f_3), "FM_Pilot_Ammo", 0, 1);
						__LIB_37__.func_801(&uLocal_72, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					}
					MISC::SET_BIT(&uLocal_63, 15);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
	{
		return 1;
	}
	return 0;
}

int func_68()//Position - 0x26A7
{
	if (__LIB_1__.func_553())
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_66))
		{
			iLocal_66 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_crate_drop_beacon", NETWORK::NET_TO_OBJ(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_66, 0.8f, 0.18f, 0.19f, false);
		}
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_66))
	{
		return 0;
	}
	return 1;
}

void func_72()//Position - 0x27BD
{
	int iVar0;
	if (!BitTest(uLocal_63, 11))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = __LIB_0__.func_534(1191, -1, 0);
			if (!BitTest(iVar0, 10))
			{
				__LIB_0__.func_151("AMD_HELP1" /* GXT: ~s~An ammo crate ~HUD_COLOUR_GREEN~~BLIP_GANG_ATTACK_PACKAGE~ ~s~will be dropped at your GPS location.~n~Be sure to make it a secluded location to stop other players stealing it. */, -1);
				MISC::SET_BIT(&iVar0, 10);
				__LIB_0__.func_427(1191, iVar0, -1, 1, 0);
				MISC::SET_BIT(&uLocal_63, 11);
			}
			else if (!BitTest(iVar0, 11))
			{
				__LIB_0__.func_151("AMD_HELP2" /* GXT: ~s~Ammo crates ~HUD_COLOUR_GREEN~~BLIP_GANG_ATTACK_PACKAGE~ ~s~will add ammo to your equipped weapon only.~n~You will not pick up the ammo crate if you do not need ammo for your current or last equipped weapon. */, -1);
				MISC::SET_BIT(&iVar0, 11);
				__LIB_0__.func_427(1191, iVar0, -1, 1, 0);
				MISC::SET_BIT(&uLocal_63, 11);
			}
			else
			{
				MISC::SET_BIT(&uLocal_63, 11);
			}
		}
	}
}

void func_77()//Position - 0x2903
{
	int iVar0;
	if (!BitTest(uLocal_63, 17))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = __LIB_0__.func_534(1191, -1, 0);
			if (!BitTest(iVar0, 24))
			{
				__LIB_0__.func_151("BALD_HELP1" /* GXT: ~s~A crate ~HUD_COLOUR_GREEN~~BLIP_RAMPAGE~ ~s~containing the Ballistic Armor and Minigun has been dispatched. */, -1);
				MISC::SET_BIT(&iVar0, 24);
				__LIB_0__.func_427(1191, iVar0, -1, 1, 0);
				MISC::SET_BIT(&uLocal_63, 17);
			}
			else if (!BitTest(iVar0, 25))
			{
				__LIB_0__.func_151("BALD_HELP2" /* GXT: ~s~The crate ~HUD_COLOUR_GREEN~~BLIP_RAMPAGE~ ~s~will equip the Ballistic Armor and Minigun. */, -1);
				MISC::SET_BIT(&iVar0, 25);
				__LIB_0__.func_427(1191, iVar0, -1, 1, 0);
				MISC::SET_BIT(&uLocal_63, 17);
			}
			else
			{
				MISC::SET_BIT(&uLocal_63, 17);
			}
		}
	}
}

int func_78()//Position - 0x2991
{
	if (__LIB_0__.func_584(joaat("cuban800")) && __LIB_0__.func_584(joaat("S_M_M_Pilot_02")))
	{
		if (__LIB_2__.func_47(&uLocal_70, 4000, 0))
		{
			if (func_81() && func_79())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_79()//Position - 0x29D5
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3) && __LIB_0__.func_584(joaat("S_M_M_Pilot_02"))) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (__LIB_2__.func_63(Local_60.f_2))
		{
			if (__LIB_0__.func_668(&(Local_60.f_3), Local_60.f_2, 22, joaat("S_M_M_Pilot_02"), -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_60.f_3), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_60.f_3), Global_1837194);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_60.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_60.f_3), true);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_60.f_3), SYSTEM::ROUND((200f * Global_262145.f_164 /* Tunable: AI_HEALTH */)), 0);
				func_126();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_60.f_3), iLocal_65);
				VEHICLE::SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_60.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_02"));
	return 1;
}

int func_81()//Position - 0x2B46
{
	struct<3> Var0;
	float fVar1;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (__LIB_0__.func_584(joaat("cuban800")))
		{
			func_100(&Var0, &fVar1);
			if (__LIB_24__.func_960(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (__LIB_18__.func_220(&(Local_60.f_2), joaat("cuban800"), Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_60.f_2), 2);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_60.f_2), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_60.f_2), true);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_60.f_2));
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_60.f_2), 60f);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_60.f_2));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_60.f_2), true, true, false);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(NETWORK::NET_TO_VEH(Local_60.f_2), false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_60.f_2), false);
					VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_60.f_2), 3);
					VEHICLE::OPEN_BOMB_BAY_DOORS(NETWORK::NET_TO_VEH(Local_60.f_2));
					if (Local_60.f_18 == 1)
					{
						ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_VEH(Local_60.f_2), true, false, true, false, false, false, false, false);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
	return 1;
}

void func_100(var uParam0, var uParam1)//Position - 0x352B
{
	float fVar0;
	*uParam0 = { __LIB_6__.func_899(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_AREA((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

void func_108()//Position - 0x373B
{
	func_117();
	switch (Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (Local_60.f_12 > 0)
			{
				Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			func_113();
			func_109();
			break;
		case 2:
			func_140();
			break;
	}
}

void func_109()//Position - 0x3790
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
	{
		if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar1 = __LIB_1__.func_562(PLAYER::PLAYER_PED_ID());
			if (((((((((((((((((iVar1 == joaat("WEAPON_UNARMED") || iVar1 == joaat("WEAPON_FLARE")) || iVar1 == joaat("WEAPON_KNIFE")) || iVar1 == joaat("WEAPON_NIGHTSTICK")) || iVar1 == joaat("WEAPON_BAT")) || iVar1 == joaat("WEAPON_HAMMER")) || iVar1 == joaat("WEAPON_GOLFCLUB")) || iVar1 == joaat("WEAPON_CROWBAR")) || iVar1 == joaat("WEAPON_MOLOTOV")) || iVar1 == joaat("WEAPON_GRENADE")) || iVar1 == joaat("WEAPON_GRENADELAUNCHER")) || iVar1 == joaat("WEAPON_GRENADELAUNCHER_SMOKE")) || iVar1 == joaat("WEAPON_PETROLCAN")) || iVar1 == joaat("WEAPON_RPG")) || iVar1 == joaat("WEAPON_SMOKEGRENADE")) || iVar1 == joaat("WEAPON_STICKYBOMB")) || iVar1 == joaat("WEAPON_BZGAS")) || iVar1 == joaat("WEAPON_BOTTLE"))
			{
				iVar1 = Global_1574580;
			}
			WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), iVar1, &iVar0);
			if ((func_111(iVar1) && __LIB_3__.func_631(iVar1)) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar1) < iVar0)
			{
			}
			else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!BitTest(uLocal_63, 12))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (Local_60.f_18)
						{
							__LIB_0__.func_151("BALD_HELP3" /* GXT: ~s~Collect the nearby crate ~HUD_COLOUR_GREEN~~BLIP_RAMPAGE~ ~s~to equip the Ballistic Armor and Minigun. */, -1);
						}
						else
						{
							__LIB_0__.func_151("AMD_HELP3" /* GXT: ~s~To pick up the ammo crate ~HUD_COLOUR_GREEN~~BLIP_GANG_ATTACK_PACKAGE~ ~s~you need to equip a weapon that requires ammo.~n~If you are unarmed ammo will be added to your last weapon if possible. */, -1);
						}
						MISC::SET_BIT(&uLocal_63, 12);
					}
				}
				else if (!BitTest(uLocal_63, 13))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(Local_60.f_4), 10f, 10f, 10f, false, true, 0))
							{
								if (__LIB_2__.func_47(&uLocal_68, 20000, 0))
								{
									if (!Local_60.f_18)
									{
										__LIB_0__.func_151("AMD_HELP3" /* GXT: ~s~To pick up the ammo crate ~HUD_COLOUR_GREEN~~BLIP_GANG_ATTACK_PACKAGE~ ~s~you need to equip a weapon that requires ammo.~n~If you are unarmed ammo will be added to your last weapon if possible. */, -1);
									}
									MISC::SET_BIT(&uLocal_63, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_111(int iParam0)//Position - 0x3A39
{
	if (iParam0 == joaat("WEAPON_FLARE"))
	{
		return 0;
	}
	return 1;
}

void func_113()//Position - 0x3A64
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_4) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_60.f_4) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_5))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_5) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_60.f_5) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (__LIB_0__.func_682(Local_60.f_4) && __LIB_0__.func_682(Local_60.f_5))
					{
						if (!BitTest(uLocal_63, 8))
						{
							if (BitTest(uLocal_63, 7))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									MISC::SET_BIT(&uLocal_63, 8);
									__LIB_1__.func_96(&(Local_60.f_5));
									if (Local_60.f_18 == 1)
									{
										__LIB_1__.func_54(NETWORK::NET_TO_OBJ(Local_60.f_4));
									}
								}
							}
						}
						if (!BitTest(uLocal_63, 7))
						{
							if (BitTest(uLocal_63, 6))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									MISC::SET_BIT(&uLocal_63, 7);
								}
							}
						}
						if (!BitTest(uLocal_63, 6))
						{
							PHYSICS::SET_DAMPING(NETWORK::NET_TO_OBJ(Local_60.f_4), 2, 0.0245f);
							if (func_114())
							{
								ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
								MISC::SET_BIT(&uLocal_63, 6);
								if (HUD::DOES_BLIP_EXIST(iLocal_64))
								{
									HUD::SET_BLIP_ALPHA(iLocal_64, 255);
								}
							}
						}
					}
				}
			}
			if (!BitTest(uLocal_63, 14))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_19) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_60.f_19) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (__LIB_0__.func_682(Local_60.f_19))
						{
							PHYSICS::SET_DAMPING(NETWORK::NET_TO_OBJ(Local_60.f_19), 2, 0.1f);
							if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_60.f_19), 0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
								{
									ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4), true, true);
									if (Local_60.f_18 == 1)
									{
										__LIB_1__.func_54(NETWORK::NET_TO_OBJ(Local_60.f_4));
									}
								}
								MISC::SET_BIT(&uLocal_63, 14);
							}
						}
						if (!BitTest(Local_60.f_1, 8) && BitTest(uLocal_63, 8))
						{
							if (__LIB_0__.func_682(Local_60.f_19))
							{
								if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(NETWORK::NET_TO_OBJ(Local_60.f_19)) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_19)))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(NETWORK::NET_TO_OBJ(Local_60.f_19)))
									{
										bVar0 = true;
									}
									else if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_60.f_19)) && ENTITY::IS_ENTITY_STATIC(NETWORK::NET_TO_OBJ(Local_60.f_19)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_60.f_19), false);
										MISC::SET_BIT(&(Local_60.f_1), 8);
									}
									if (Local_60.f_18 == 1)
									{
										__LIB_1__.func_54(NETWORK::NET_TO_OBJ(Local_60.f_4));
									}
								}
							}
						}
					}
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_60.f_4), true) };
			if (Var1.f_2 < -50f && !ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_60.f_4)))
			{
				if (__LIB_0__.func_682(Local_60.f_4))
				{
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_60.f_4), Local_60.f_6, true, false, false, true);
					if (Local_60.f_18 == 1)
					{
						__LIB_1__.func_54(NETWORK::NET_TO_OBJ(Local_60.f_4));
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19) && ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_60.f_4)))
				{
					iVar2 = NETWORK::NET_TO_OBJ(Local_60.f_19);
				}
				else
				{
					iVar2 = NETWORK::NET_TO_OBJ(Local_60.f_4);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (!BitTest(uLocal_63, 16))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iVar2) >= 0.9f)
					{
						if (AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16) != -1)
						{
							AUDIO::SET_VARIABLE_ON_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16), "Crate_Underwater", 1f);
						}
						MISC::SET_BIT(&uLocal_63, 16);
					}
				}
				else if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iVar2) < 0.9f)
				{
					if (AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16) != -1)
					{
						AUDIO::SET_VARIABLE_ON_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16), "Crate_Underwater", 0f);
					}
					MISC::CLEAR_BIT(&uLocal_63, 16);
				}
			}
		}
	}
}

int func_114()//Position - 0x3E16
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19))
	{
		if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_60.f_19), 0))
		{
			iVar0 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (func_115())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (__LIB_0__.func_682(Local_60.f_19))
			{
				PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_60.f_19), false);
				return 1;
			}
		}
	}
	return 0;
}

int func_115()//Position - 0x3E8E
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

void func_117()//Position - 0x3F0F
{
	int iVar0;
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0);
	if (Local_60.f_13 != iVar0)
	{
		if (Local_60.f_13 > 0 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
		{
			if (Local_60.f_13 < iVar0 || __LIB_6__.func_977(Local_60.f_13, 0, 1))
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_60.f_13);
			}
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0);
	if (Local_60.f_14 != iVar0)
	{
		if (Local_60.f_14 > 0 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3))
		{
			if (Local_60.f_14 < iVar0 || __LIB_7__.func_122(Local_60.f_14, 0, 1))
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_60.f_14);
			}
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_60.f_15 != iVar0)
	{
		if (Local_60.f_15 < iVar0 || __LIB_7__.func_692(Local_60.f_15, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_60.f_15);
		}
	}
}

void func_126()//Position - 0x4240
{
	if (!BitTest(uLocal_63, 10))
	{
		if (__LIB_2__.func_63(Local_60.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
			MISC::SET_BIT(&uLocal_63, 10);
		}
	}
}

int func_128()//Position - 0x42CE
{
	int iVar0;
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = joaat("ex_prop_adv_case_sm");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(joaat("p_cargo_chute_s"));
	if ((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(joaat("p_cargo_chute_s"))) && func_129())
	{
		return 1;
	}
	return 0;
}

int func_129()//Position - 0x4320
{
	STREAMING::REQUEST_ANIM_DICT("P_cargo_chute_S");
	if (STREAMING::HAS_ANIM_DICT_LOADED("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

void func_140()//Position - 0x4482
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		HUD::REMOVE_BLIP(&iLocal_64);
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19))
				{
					if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_60.f_19), 0))
					{
						if (__LIB_0__.func_682(Local_60.f_19))
						{
							PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_60.f_19), false);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_60.f_4)))
					{
						if (__LIB_0__.func_682(Local_60.f_4))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4), true, true);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_5))
				{
					if (__LIB_0__.func_682(Local_60.f_5))
					{
						__LIB_1__.func_96(&(Local_60.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				SYSTEM::WAIT(0);
			}
			iVar0++;
		}
		Local_60.f_0 = 4;
		__LIB_0__.func_683(__LIB_6__.func_900(1, 1), 8, __LIB_0__.func_160());
	}
	func_143();
	__LIB_1__.func_53();
	func_142();
	__LIB_0__.func_199();
}

void func_142()//Position - 0x45C5
{
	if (BitTest(uLocal_63, 10))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
	}
}

void func_143()//Position - 0x45DB
{
	if (iLocal_66 != 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_66))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_66, false);
			iLocal_66 = 0;
		}
	}
}

int func_146(struct<21> Param0)//Position - 0x469F
{
	int iVar0;
	__LIB_0__.func_673(__LIB_6__.func_875(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(2);
	__LIB_1__.func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 23, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_62, 97, 0);
	if (!__LIB_0__.func_672())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_60.f_17 = PLAYER::PLAYER_ID();
		Local_60.f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, (5f * 1.5f), 0f) };
		Local_60.f_13 = 1;
		Local_60.f_14 = 1;
		Local_60.f_15 = 3;
		Local_60.f_9 = { 0f, 0f, 500f };
		if (Param0.f_20 == 3)
		{
			Local_60.f_18 = 1;
		}
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9 = -9000f;
		}
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9.f_1 = -9000f;
		}
		if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
		{
			Local_60.f_9 = { -9000f, 5000f, 500f };
		}
	}
	bLocal_67 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	return 1;
}

