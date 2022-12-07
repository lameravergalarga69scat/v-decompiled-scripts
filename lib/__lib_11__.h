namespace __LIB_11__ {
	
void func_0(var uParam0, bool bParam1)//Position - 0x19D1F
{
	if (!BitTest(uParam0->f_269, bParam1))
	{
		MISC::SET_BIT(&(uParam0->f_269), bParam1);
	}
}

bool func_1(var uParam0, int iParam1)//Position - 0x19D3E
{
	return BitTest(uParam0->f_269, iParam1);
}

float func_2()//Position - 0x21B36
{
	return 1f;
}

int func_3(int iParam0, float fParam1, int iParam2)//Position - 0x21F74
{
	struct<3> Var0;
	struct<3> Var1;
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && iParam2))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (SYSTEM::VDIST2(Var0, Var1) < (fParam1 * fParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_4(int iParam0, int iParam1)//Position - 0x262DE
{
	switch (iParam0)
	{
		case 0:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0.727f, 0.625f, "ShotgunLargeMonolithic");
			break;
		case 1:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0.727f, 0.518f, "ShotgunLargeMonolithic");
			break;
		case 2:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0.727f, 0.399f, "ShotgunLargeMonolithic");
			break;
		case 3:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0.806f, 0.399f, "ShotgunLargeMonolithic");
			break;
		case 4:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 1, 0.379f, 0.324f, "ShotgunLargeMonolithic");
			break;
		case 5:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 1, 0.379f, 0.534f, "ShotgunLargeMonolithic");
			break;
		case 6:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 2, 0.628f, 0.277f, "ShotgunLargeMonolithic");
			break;
		case 7:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 2, 0.609f, 0.344f, "ShotgunLargeMonolithic");
			break;
		case 8:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0.719f, 0.802f, "ShotgunLargeMonolithic");
			break;
		case 9:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0.775f, 0.68f, "ShotgunLargeMonolithic");
			break;
		case 10:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0.775f, 0.561f, "ShotgunLargeMonolithic");
			break;
		case 11:
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0.49f, 0.5f, 0f, 0.025f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0.48f, 0.55f, 0f, 0.025f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0.5f, 0.56f, 0f, 0.025f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0.726f, 0.789f, 0f, 0.019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0.724f, 0.799f, 0f, 0.019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0.737f, 0.723f, 0f, 0.019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0.726f, 0.753f, 0f, 0.019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0.726f, 0.76f, 0f, 0.019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0.736f, 0.802f, 0f, 0.019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0.715f, 0.806f, 0f, 0.019f, 0, 140f, "BulletSmall");
			break;
		case 12:
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0.401f, 0.1f, 0f, 1f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0.514f, 0.13f, 0f, 1f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0.62f, 0.13f, 0f, 1f, 0, 0f, "BulletLarge");
			break;
		case 13:
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 2, 0.41f, 0.229f, 0f, 1f, 13, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 4, 0.21f, 0.305f, 0f, 1f, 14, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0.495f, 0.124f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0.37f, 1f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0.667f, 0.571f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0.343f, 0.79f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
			break;
	}
}

void func_5(struct<3> Param0, var uParam1, var uParam2)//Position - 0x26683
{
	float fVar0;
	int iVar1;
	fVar0 = 0.1f;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	switch (iVar1)
	{
		case 0:
			*uParam1 = { (Param0.f_0 + fVar0), (Param0.f_1 + 0.1f), (Param0.f_2 + 0.4f) };
			*uParam2 = { (Param0.f_0 - 0.5f), (Param0.f_1 - 0.1f), (Param0.f_2 + 0.4f) };
			break;
		case 1:
			*uParam1 = { (Param0.f_0 + fVar0), (Param0.f_1 + 0.1f), (Param0.f_2 + 0.4f) };
			*uParam2 = { (Param0.f_0 - 0.5f), (Param0.f_1 - 0.1f), (Param0.f_2 + 0.4f) };
			break;
		case 2:
			*uParam1 = { (Param0.f_0 - fVar0), (Param0.f_1 + 0.1f), (Param0.f_2 + 0.4f) };
			*uParam2 = { (Param0.f_0 + 0.5f), (Param0.f_1 - 0.1f), (Param0.f_2 + 0.4f) };
			break;
		case 3:
			*uParam1 = { (Param0.f_0 - fVar0), (Param0.f_1 - 0.1f), (Param0.f_2 + 0.4f) };
			*uParam2 = { (Param0.f_0 + 0.5f), (Param0.f_1 + 0.1f), (Param0.f_2 + 0.4f) };
			break;
		case 4:
			*uParam1 = { (Param0.f_0 - fVar0), (Param0.f_1 - 0.1f), (Param0.f_2 + 0.4f) };
			*uParam2 = { (Param0.f_0 + 0.5f), (Param0.f_1 + 0.1f), (Param0.f_2 + 0.4f) };
			break;
		case 5:
			*uParam1 = { (Param0.f_0 + fVar0), (Param0.f_1 + 0.1f), (Param0.f_2 + 0.4f) };
			*uParam2 = { (Param0.f_0 - 0.5f), (Param0.f_1 - 0.1f), (Param0.f_2 + 0.4f) };
			break;
	}
}

void func_6(int iParam0, int* iParam1)//Position - 0x4BE18
{
	int iVar0;
	if (iParam0 >= 0 && iParam0 < 8)
	{
		iVar0 = (24 + iParam0);
		MISC::SET_BIT(iParam1, iVar0);
	}
}

char* func_7(bool bParam0, int iParam1)//Position - 0xAC85F
{
	bool bVar0;
	if (bParam0 == __LIB_0__::func_160())
	{
		return "";
	}
	if (iParam1 == 1)
	{
		return "MPClubPreset1";
	}
	bVar0 = __LIB_2__::func_191(bParam0);
	if (bVar0 != __LIB_0__::func_160())
	{
		bParam0 = bVar0;
	}
	if (BitTest(Global_103224, bParam0) || iParam1 == 2)
	{
		return __LIB_0__::func_688(&(Global_102967[bParam0 /*8*/]));
	}
	return "";
}

int func_8(bool bParam0)//Position - 0xED18E
{
	if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)//Position - 0xFBD86
{
	if (iParam0 == __LIB_0__::func_160() || !func_2668(iParam0))
	{
		return 6;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_408.f_4;
}

void func_10(int iParam0)//Position - 0x1BB40B
{
	switch (iParam0)
	{
		case 2:
			__LIB_0__::func_521(22166, 1, -1);
			break;
		case 1:
			__LIB_0__::func_521(22159, 1, -1);
			break;
		case 3:
			__LIB_0__::func_521(22152, 1, -1);
			break;
	}
}

void func_11(bool bParam0, int iParam1)//Position - 0x1BB541
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336.f_2), 16);
		if (iParam1 == 1 || iParam1 == 3)
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336.f_2), 21);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336.f_2), 21);
		}
		if (iParam1 == 2 || iParam1 == 3)
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336.f_2), 22);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336.f_2), 22);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336.f_2), 16);
	}
}

void func_12(bool bParam0)//Position - 0x1BB65C
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 16);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 16);
	}
}

void func_13(bool bParam0)//Position - 0x1BB6C2
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 15);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 15);
	}
}

int func_14(int iParam0)//Position - 0x1BC17B
{
	switch (iParam0)
	{
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 3;
		case 8:
			return 4;
		case 9:
			return 5;
		case 10:
			return 6;
		default:
	}
	return -1;
}

int func_15(int iParam0)//Position - 0x1BC1D1
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x1BC37B
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 22051;
			break;
		case 1:
			iVar0 = 22052;
			break;
		case 2:
			iVar0 = 22057;
			break;
		case 3:
			iVar0 = 22053;
			break;
		case 4:
			iVar0 = 22054;
			break;
		case 5:
			iVar0 = 22055;
			break;
		case 6:
			iVar0 = 22056;
			break;
	}
	return iVar0;
}

bool func_17(int iParam0, int iParam1)//Position - 0x1BDAA6
{
	return __LIB_4__::func_950(iParam1) > __LIB_4__::func_950(iParam0);
}

int func_18(int iParam0)//Position - 0x1BDABB
{
	if (iParam0 == 1)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 1;
	}
	else if (iParam0 == 3)
	{
		return 2;
	}
	return -1;
}

int func_19(int iParam0)//Position - 0x1BDB70
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = (iVar1 + __LIB_10__::func_926(iParam0, iVar0));
		iVar0++;
	}
	return iVar1;
}

int func_20(int iParam0)//Position - 0x1CC5AF
{
	if (__LIB_1__::func_266(iParam0, 0) || __LIB_10__::func_930(iParam0))
	{
		return Global_262145.f_19004 /* Tunable: BIKER_PARTICIPATION_CASH_CAP */;
	}
	if (__LIB_2__::func_491(iParam0))
	{
		return Global_262145.f_19003 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_CAP */;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_19000 /* Tunable: BIKER_RESUPPLY_PARTICIPATION_CAP */;
		case 191:
			return Global_262145.f_19002 /* Tunable: BIKER_DEFEND_PARTICIPATION_CAP */;
		case 190:
			return Global_262145.f_19001 /* Tunable: BIKER_SELL_PARTICIPATION_CAP */;
		case 227:
			return Global_262145.f_21564 /* Tunable: 137837952 */;
		case 226:
			return Global_262145.f_21550 /* Tunable: -1323254147 */;
		case 225:
			return Global_262145.f_21572 /* Tunable: 470326241 */;
		case 230:
			return Global_262145.f_22835 /* Tunable: -276596795 */;
		case 229:
			return Global_262145.f_22737 /* Tunable: 673226777 */;
		case 233:
			return Global_262145.f_23315 /* Tunable: -1702410515 */;
		case 237:
			return Global_262145.f_24485 /* Tunable: 451918514 */;
		case 238:
			return Global_262145.f_24603 /* Tunable: 83188597 */;
		case 249:
			return Global_262145.f_24619 /* Tunable: -2115907141 */;
		case 243:
			return Global_262145.f_27080 /* Tunable: VC_WORK_REWARD_PARTICIPATION_CAP */;
		default:
	}
	return -1;
}

int func_21(int iParam0)//Position - 0x1CC6C2
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12958 /* Tunable: GB_BOSSVSBOSSDM_MINIMUM_PARTICIPATION_RP */;
		case 152:
			return Global_262145.f_12993 /* Tunable: GB_YACHTATTACK_MINIMUM_PARTICIPATION_RP */;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12981 /* Tunable: GB_SIGHTSEER_MINIMUM_PARTICIPATION_RP */;
		case 157:
			return Global_262145.f_12948 /* Tunable: GB_BELLY_MINIMUM_PARTICIPATION_RP */;
		case 159:
			return Global_262145.f_12931 /* Tunable: GB_ASSAULT_MINIMUM_PARTICIPATION_RP */;
		case 164:
			return Global_262145.f_12971 /* Tunable: GB_HUNTBOSS_MINIMUM_PARTICIPATION_RP */;
		case 160:
			return Global_262145.f_13021 /* Tunable: GB_FINDERS_KEEPERS_MINIMUM_PARTICIPATION_RP */;
		case 162:
			return Global_262145.f_13041 /* Tunable: GB_POINTTOPOINT_MINIMUM_PARTICIPATION_RP */;
		case 163:
			return Global_262145.f_13006 /* Tunable: GB_CARJACKING_MINIMUM_PARTICIPATION_RP */;
		case 154:
			return Global_262145.f_13076 /* Tunable: GB_SMASHANDGRAB_MINIMUM_PARTICIPATION_RP */;
		case 155:
			return Global_262145.f_13066 /* Tunable: GB_PROTECTIONRACKET_MINIMUM_PARTICIPATION_RP */;
		case 153:
			return Global_262145.f_13030 /* Tunable: GB_MOSTWANTED_MINIMUM_PARTICIPATION_RP */;
		case 170:
			return Global_262145.f_15509 /* Tunable: EXEC_AIRFREIGHT_MINIMUM_PARTICIPATION_RP */;
		case 171:
			return Global_262145.f_15568 /* Tunable: EXEC_CASHING_MINIMUM_PARTICIPATION_RP */;
		case 172:
			return Global_262145.f_15586 /* Tunable: EXEC_SALVAGE_MINIMUM_PARTICIPATION_RP */;
		case 173:
			return Global_262145.f_15527 /* Tunable: EXEC_FGOODS_MINIMUM_PARTICIPATION_RP */;
		case 166:
			return Global_262145.f_15542 /* Tunable: EXEC_HEADHUNTER_MINIMUM_PARTICIPATION_RP */;
		case 167:
			return Global_262145.f_15633 /* Tunable: EXEC_CONTRABAND_PARTICIPATION_RP_BUY */;
		case 169:
			return Global_262145.f_15605 /* Tunable: EXEC_CONTRABAND_PARTICIPATION_RP_DEFEND */;
		case 168:
			return Global_262145.f_15598 /* Tunable: EXEC_CONTRABAND_PARTICIPATION_RP_SELL */;
		case 179:
			return Global_262145.f_18883 /* Tunable: BIKER_PARTICIPATION_RP */;
		case 180:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 182:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 183:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 185:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 186:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 189:
			return Global_262145.f_18883 /* Tunable: BIKER_PARTICIPATION_RP */;
		case 190:
			return Global_262145.f_18537 /* Tunable: BIKER_SELL_PARTICIPATION_RP */;
		case 191:
			return Global_262145.f_18628 /* Tunable: BIKER_DEFEND_PARTICIPATION_RP */;
		case 192:
			return Global_262145.f_18422 /* Tunable: BIKER_RESUPPLY_PARTICIPATION_RP */;
		case 193:
			return Global_262145.f_18883 /* Tunable: BIKER_PARTICIPATION_RP */;
		case 194:
			return Global_262145.f_18883 /* Tunable: BIKER_PARTICIPATION_RP */;
		case 195:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 197:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 198:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 199:
			return Global_262145.f_18883 /* Tunable: BIKER_PARTICIPATION_RP */;
		case 200:
			return Global_262145.f_18883 /* Tunable: BIKER_PARTICIPATION_RP */;
		case 201:
			return Global_262145.f_18883 /* Tunable: BIKER_PARTICIPATION_RP */;
		case 205:
			return Global_262145.f_18883 /* Tunable: BIKER_PARTICIPATION_RP */;
		case 207:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 208:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 209:
			return Global_262145.f_18661 /* Tunable: BIKER_CLUBHOUSE_PARTICIPATION_RP */;
		case 210:
			return Global_262145.f_18883 /* Tunable: BIKER_PARTICIPATION_RP */;
		case 211:
			return Global_262145.f_18883 /* Tunable: BIKER_PARTICIPATION_RP */;
		case 214:
			return Global_262145.f_19733 /* Tunable: IMPEXP_PLOWED_MINIMUM_PARTICIPATION_RP */;
		case 215:
			return Global_262145.f_19735 /* Tunable: IMPEXP_FULLY_LOADED_MINIMUM_PARTICIPATION_RP */;
		case 216:
			return Global_262145.f_19737 /* Tunable: IMPEXP_AMPHIBIOUS_ASSAULT_MINIMUM_PARTICIPATION_RP */;
		case 217:
			return Global_262145.f_19739 /* Tunable: IMPEXP_TRANSPORTER_MINIMUM_PARTICIPATION_RP */;
		case 218:
			return Global_262145.f_19741 /* Tunable: IMPEXP_FORTIFIED_MINIMUM_PARTICIPATION_RP */;
		case 219:
			return Global_262145.f_19743 /* Tunable: IMPEXP_VELOCITY_MINIMUM_PARTICIPATION_RP */;
		case 220:
			return Global_262145.f_19745 /* Tunable: IMPEXP_RAMPED_UP_MINIMUM_PARTICIPATION_RP */;
		case 221:
			return Global_262145.f_19747 /* Tunable: IMPEXP_STOCKPILING_MINIMUM_PARTICIPATION_RP */;
		case 225:
			if (!__LIB_2__::func_232())
			{
				return Global_262145.f_21574 /* Tunable: -1857577769 */;
			}
			break;
		case 226:
			if (!__LIB_2__::func_232())
			{
				return Global_262145.f_21552 /* Tunable: 585478669 */;
			}
			break;
		case 227:
			if (!__LIB_2__::func_232())
			{
				return Global_262145.f_21566 /* Tunable: 1494368250 */;
			}
			break;
		case 229:
			if (!__LIB_2__::func_232())
			{
				return Global_262145.f_22739 /* Tunable: 307309693 */;
			}
			break;
		case 230:
			if (!__LIB_2__::func_232())
			{
				return Global_262145.f_22837 /* Tunable: -1760151225 */;
			}
			break;
		case 233:
			if (!__LIB_2__::func_232())
			{
				return Global_262145.f_23314 /* Tunable: -1734540895 */;
			}
			break;
		case 241:
			return 100;
		case 242:
			return 100;
		case 244:
			return 100;
		case 248:
			return 100;
		case 239:
			return 100;
		case 240:
			return 100;
		case 250:
			return 100;
		case 237:
			if (!__LIB_2__::func_232())
			{
				return Global_262145.f_24487 /* Tunable: 390565516 */;
			}
			break;
		case 238:
			if (!__LIB_2__::func_232())
			{
				return Global_262145.f_24605 /* Tunable: -1154535762 */;
			}
			break;
		case 249:
			if (!__LIB_2__::func_232())
			{
				return Global_262145.f_24621 /* Tunable: -1955439320 */;
			}
			break;
		case 243:
			if (!__LIB_2__::func_232())
			{
				return Global_262145.f_27083 /* Tunable: VC_WORK_RP_REWARD_PARTICIPATION */;
			}
			break;
		case 158:
			if (!__LIB_2__::func_232())
			{
				return 100;
			}
			break;
	}
	return 0;
}

void func_22()//Position - 0x1D0294
{
	int iVar0;
	iVar0 = Global_2869991[__LIB_0__::func_5()];
	iVar0++;
	__LIB_1__::func_603(3670, iVar0, -1, 1);
}

void func_23()//Position - 0x1D02B9
{
	int iVar0;
	iVar0 = Global_2869997[__LIB_0__::func_5()];
	iVar0++;
	__LIB_1__::func_603(3669, iVar0, -1, 1);
}

void func_24()//Position - 0x1D094E
{
	int iVar0;
	iVar0 = Global_2869988[__LIB_0__::func_5()];
	iVar0++;
	Global_2869988[__LIB_0__::func_5()] = iVar0;
	__LIB_1__::func_603(3668, iVar0, -1, 1);
}

void func_25()//Position - 0x1D097F
{
	int iVar0;
	int iVar1;
	iVar0 = Global_2869985[__LIB_0__::func_5()];
	iVar1 = Global_2869994[__LIB_0__::func_5()];
	iVar0++;
	iVar1++;
	Global_2869985[__LIB_0__::func_5()] = iVar0;
	Global_2869994[__LIB_0__::func_5()] = iVar1;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_136 = iVar1;
	__LIB_1__::func_603(3666, iVar0, -1, 1);
	__LIB_1__::func_603(3667, iVar1, -1, 1);
}

void func_26()//Position - 0x1D0A1D
{
	if (__LIB_2__::func_232())
	{
		if (Global_2715699.f_3076.f_134 > 0)
		{
			Global_2715699.f_3076.f_134 = (Global_2715699.f_3076.f_134 - 1);
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_427 = Global_2715699.f_3076.f_134;
		}
	}
}

void func_27()//Position - 0x1D0A66
{
	if (__LIB_2__::func_232())
	{
		if (Global_2715699.f_3076.f_134 < 10)
		{
			Global_2715699.f_3076.f_134++;
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_427 = Global_2715699.f_3076.f_134;
		}
	}
}

float func_28(int iParam0)//Position - 0x1D2EDA
{
	switch (iParam0)
	{
		case 1:
			return (100f * Global_262145.f_24070 /* Tunable: NIGHTCLUBPOPDECAY */);
		case 2:
			return (100f * Global_262145.f_24071 /* Tunable: INIGHTCLUBPOPDECAYSTAFFUPGRADE */);
		case 3:
			if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 299)
			{
				return (100f * Global_262145.f_32580 /* Tunable: 181893059 */);
			}
			return (100f * Global_262145.f_24072 /* Tunable: NIGHTCLUBPOPGAINPERMISSION */);
		case 4:
			return (100f * Global_262145.f_24366 /* Tunable: -666817709 */);
		case 8:
			return (100f * Global_262145.f_32548 /* Tunable: NC_TROUBLEMAKER_POPULARITY_REWARD */);
		case 9:
			return (100f * Global_262145.f_32755 /* Tunable: 396823465 */);
		case 5:
			return (100f * Global_262145.f_24358 /* Tunable: 1403959568 */);
		case 6:
			return (100f * Global_262145.f_24357 /* Tunable: -22448548 */);
		case 7:
			return (100f * Global_262145.f_24367 /* Tunable: 1957287017 */);
		default:
	}
	return 0f;
}

int func_29()//Position - 0x1D333B
{
	if ((((__LIB_10__::func_924(19) || __LIB_10__::func_924(22)) || __LIB_10__::func_924(20)) || __LIB_10__::func_924(21)) || __LIB_10__::func_924(35))
	{
		return 1;
	}
	return 0;
}

int func_30()//Position - 0x1D3865
{
	if (((__LIB_10__::func_924(23) || __LIB_10__::func_924(24)) || __LIB_10__::func_924(25)) || __LIB_10__::func_924(26))
	{
		if (Global_2815059.f_6738 == 1)
		{
			return 1;
		}
	}
	else if (__LIB_10__::func_924(13) || __LIB_10__::func_924(14))
	{
		if (Global_2815059.f_6738 == 20)
		{
			switch (Global_2815059.f_6739)
			{
				case 121:
				case 122:
				case 123:
				case 124:
				case 125:
				case 126:
					return 1;
				default:
			}
		}
		else if (Global_2815059.f_6738 == 23 || Global_2815059.f_6738 == 19)
		{
			return 1;
		}
	}
	return 0;
}

void func_31(int iParam0)//Position - 0x1D3949
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_26[iVar0]), iVar1);
}

void func_32(int* iParam0)//Position - 0x1D9556
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		if (__LIB_1__::func_183(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(iParam0);
			}
		}
		else
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
	}
}

int func_33(int iParam0)//Position - 0x1DD5F1
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (((ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("cargobob") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("cargobob2")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("cargobob3")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("cargobob4"))
	{
		return 1;
	}
	return 0;
}

void func_34(int iParam0, bool bParam1)//Position - 0x1E140E
{
	HUD::SET_BLIP_FLASHES(*iParam0, true);
	HUD::SET_BLIP_FLASH_INTERVAL(*iParam0, 250);
	HUD::SET_BLIP_FLASH_TIMER(*iParam0, 7000);
	if (bParam1)
	{
		HUD::FLASH_MINIMAP_DISPLAY();
	}
}

void func_35(int iParam0)//Position - 0x1EF14D
{
	if (Global_1946239 != iParam0)
	{
		Global_1946239 = iParam0;
	}
}

void func_36(int iParam0)//Position - 0x1EF32D
{
	if (Global_2815059.f_4622 != iParam0)
	{
		Global_2815059.f_4622 = iParam0;
	}
}

bool func_37(int iParam0)//Position - 0x1F2F00
{
	return __LIB_2__::func_431() == iParam0;
}

int func_38(int iParam0)//Position - 0x1F4830
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
			iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
			iVar2 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar1, iVar0);
			if (iVar2 != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_39(var uParam0, int iParam1)//Position - 0x1F4AE8
{
	return (uParam0[iParam1 /*52*/])->f_13;
}

int func_40(struct<3> Param0)//Position - 0x1F4AF8
{
	float fVar0;
	struct<3> Var1;
	Var1 = { Param0 + Vector(100f, 0f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar0, false, false))
	{
		if (Param0.f_2 > fVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_41(var* uParam0)//Position - 0x1F4C30
{
	uParam0->f_9++;
	if (uParam0->f_9 < 5)
	{
		switch (uParam0->f_9)
		{
			case 1:
			case 2:
				uParam0->f_6 = { uParam0->f_6 + Vector(10f, 0f, 0f) };
				break;
			case 3:
				uParam0->f_6 = { uParam0->f_6 - Vector(30f, 0f, 0f) };
				break;
			case 4:
				uParam0->f_6 = { uParam0->f_6 - Vector(10f, 0f, 0f) };
				break;
		}
		if (uParam0->f_6.f_2 > 360f)
		{
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 - 360f);
		}
	}
	else
	{
		uParam0->f_9 = 0;
		uParam0->f_6 = { uParam0->f_6 + Vector(20f, 0f, 0f) };
	}
	uParam0->f_10++;
}

int func_42(int iParam0)//Position - 0x1F4CF7
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0))
	{
		return 2;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_43(int iParam0)//Position - 0x1F4D29
{
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_445.f_1), iParam0);
}

int func_44(int iParam0, int iParam1)//Position - 0x1F4D49
{
	int iVar0;
	if (iParam0 >= 0)
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
		return BitTest(Global_1892703[iVar0 /*599*/].f_10.f_445.f_1, iParam1);
	}
	return 0;
}

void func_45()//Position - 0x1F4DD0
{
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_445.f_1, 1))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_445.f_1), 1);
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_445.f_1, 2))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_445.f_1), 2);
	}
}

void func_46(bool bParam0, bool bParam1)//Position - 0x1F4E34
{
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_445.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_445.f_1), 1);
		}
	}
	if (bParam1)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_445.f_1, 2))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_445.f_1), 2);
		}
	}
}

int func_47(int iParam0)//Position - 0x1F5DF6
{
	if (((((((iParam0 == joaat("hauler") || iParam0 == joaat("hauler2")) || iParam0 == joaat("phantom")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("phantom3")) || iParam0 == joaat("packer")) || iParam0 == joaat("docktug")) || iParam0 == joaat("barracks2"))
	{
		return 1;
	}
	return 0;
}

int func_48()//Position - 0x1F82EB
{
	return 30;
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x1FC3D9
{
	if (iParam0 >= iParam1 && iParam0 < iParam2)
	{
		return 1;
	}
	return 0;
}

float func_50(int iParam0)//Position - 0x1FC4BE
{
	return 299.9f;
}

var func_51(int iParam0)//Position - 0x1FC6DB
{
	return Global_1837197;
}

float func_52()//Position - 0x1FC943
{
	return 30f;
}

void func_53()//Position - 0x202AED
{
	MISC::SET_BIT(&Global_4541229, 28);
	MISC::SET_BIT(&Global_8137, 11);
}

void func_54()//Position - 0x202B08
{
	MISC::CLEAR_BIT(&Global_4541229, 28);
	MISC::SET_BIT(&Global_8137, 11);
}

void func_55(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x2031DC
{
	if (!__LIB_6__::func_518())
	{
		return;
	}
	STATS::PLAYSTATS_NPC_PHONE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

char* func_56(int iParam0)//Position - 0x20A015
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 236:
		case 243:
		case 150:
		case 158:
		case 256:
		case 258:
			return "IE_FADE_IN_RADIO";
		default:
	}
	if (__LIB_0__::func_684(iParam0) != -1)
	{
		return "IE_FADE_IN_RADIO";
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

char* func_57(int iParam0)//Position - 0x20A147
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_COUNTDOWN_30S";
		default:
	}
	if (__LIB_0__::func_684(iParam0) != -1)
	{
		return "IE_COUNTDOWN_30S";
	}
	return "FM_COUNTDOWN_30S";
}

char* func_58(int iParam0)//Position - 0x20A317
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_PRE_COUNTDOWN_STOP";
		default:
	}
	if (__LIB_0__::func_684(iParam0) != -1)
	{
		return "IE_PRE_COUNTDOWN_STOP";
	}
	return "FM_PRE_COUNTDOWN_30S";
}

char* func_59()//Position - 0x20ABF4
{
	return "RADIO_07_DANCE_01" /* GXT: Soulwax FM */;
}

void func_60(int iParam0, int iParam1, var uParam2)//Position - 0x20BB91
{
	struct<6> Var0;
	Var0.f_0 = -1925643489;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam2;
	__LIB_1__::func_277(&(Var0.f_4), &(Var0.f_5));
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_61(int iParam0, int iParam1, var uParam2)//Position - 0x20EDBD
{
	int iVar0;
	if (iParam0 != __LIB_0__::func_160())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == __LIB_3__::func_417(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x21A3D9
{
	int iVar0;
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (__LIB_1__::func_362(iParam0))
	{
		if (iParam2 <= Global_262145.f_21727 /* Tunable: -1542918426 */)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21728 /* Tunable: -2015624215 */)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (__LIB_4__::func_884(iParam0))
	{
		if (iParam1 < Global_262145.f_21687 /* Tunable: 642214211 */)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_63(int iParam0, int iParam1, int iParam2)//Position - 0x21CE45
{
	int iVar0;
	iVar0 = __LIB_4__::func_868(iParam0, iParam1);
	if (__LIB_0__::func_109(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

void func_64()//Position - 0x21E18F
{
	MISC::SET_BIT(&(Global_2815059.f_5194), 1);
}

void func_65(int iParam0)//Position - 0x21E3E4
{
	if (!iParam0 == Global_2667225.f_45.f_317)
	{
		Global_2667225.f_45.f_317 = iParam0;
	}
}

bool func_66(int iParam0)//Position - 0x21E57E
{
	return __LIB_1__::func_424(iParam0, 25);
}

int func_67()//Position - 0x220E32
{
	switch (__LIB_3__::func_803(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		default:
	}
	return 0;
}

char* func_68()//Position - 0x2222D4
{
	switch (__LIB_3__::func_803(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1" /* GXT: Total Value */;
			break;
		case 160:
			return "BD_SORT_4" /* GXT: Packages Collected */;
			break;
		case 154:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
		case 155:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
	}
	return "";
}

int func_69(int iParam0)//Position - 0x225178
{
	if (((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("riot")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("sheriff2")) || iParam0 == joaat("barracks")) || iParam0 == joaat("barracks2")) || iParam0 == joaat("barracks3")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tank"))
	{
		return 1;
	}
	return 0;
}

void func_70()//Position - 0x22776B
{
	MISC::CLEAR_BIT(&(Global_2815059.f_5194), 0);
}

void func_71()//Position - 0x22777F
{
	MISC::SET_BIT(&(Global_2815059.f_4660), 3);
}

void func_72(int iParam0)//Position - 0x23238F
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandOwner", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "ContrabandOwner"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "ContrabandOwner");
		}
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "ContrabandDeliveryType"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "ContrabandDeliveryType");
		}
	}
}

void func_73(int iParam0)//Position - 0x233F3D
{
	if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_462 != iParam0)
			{
				Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_462 = iParam0;
				if (iParam0 != __LIB_0__::func_160())
				{
				}
			}
		}
	}
}

void func_74()//Position - 0x234FE5
{
	struct<18> Var0;
	Global_1943929 = { Var0 };
}

int func_75(int iParam0)//Position - 0x237DA5
{
	return __LIB_1__::func_407(iParam0, 150);
}

int func_76()//Position - 0x238688
{
	if (((((((((((((((((((((__LIB_10__::func_924(8) || __LIB_10__::func_924(9)) || __LIB_10__::func_924(10)) || __LIB_10__::func_924(12)) || __LIB_10__::func_924(11)) || __LIB_10__::func_924(13)) || __LIB_10__::func_924(14)) || __LIB_10__::func_924(19)) || __LIB_10__::func_924(20)) || __LIB_10__::func_924(21)) || __LIB_10__::func_924(22)) || __LIB_10__::func_924(23)) || __LIB_10__::func_924(24)) || __LIB_10__::func_924(25)) || __LIB_10__::func_924(26)) || __LIB_10__::func_924(15)) || __LIB_10__::func_924(16)) || __LIB_10__::func_924(17)) || __LIB_10__::func_924(18)) || __LIB_10__::func_924(35)) || __LIB_10__::func_924(45)) || __LIB_10__::func_924(46))
	{
		return 1;
	}
	return 0;
}

int func_77()//Position - 0x2387EE
{
	if (__LIB_6__::func_108())
	{
		__LIB_0__::func_168(12, Global_20266, 1);
	}
	return 12;
}

int func_78()//Position - 0x238858
{
	if ((((__LIB_9__::func_723(1) || __LIB_9__::func_723(0)) || __LIB_9__::func_723(2)) || __LIB_9__::func_723(4)) || __LIB_9__::func_723(5))
	{
		return 1;
	}
	return 0;
}

int func_79()//Position - 0x238906
{
	if (__LIB_6__::func_108())
	{
		__LIB_0__::func_168(20, Global_20266, 1);
	}
	return 20;
}

int func_80()//Position - 0x238970
{
	if ((((((((__LIB_9__::func_725(0) || __LIB_9__::func_725(1)) || __LIB_9__::func_725(2)) || __LIB_9__::func_725(3)) || __LIB_9__::func_725(4)) || __LIB_9__::func_725(5)) || __LIB_9__::func_725(6)) || __LIB_9__::func_725(7)) || __LIB_9__::func_725(8))
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x238A5A
{
	if (__LIB_6__::func_108())
	{
		__LIB_0__::func_168(76, Global_20266, 1);
	}
	return 76;
}

int func_82()//Position - 0x238AC4
{
	if ((((((((((((__LIB_9__::func_731(0) || __LIB_9__::func_731(1)) || __LIB_9__::func_731(2)) || __LIB_9__::func_731(3)) || __LIB_9__::func_731(4)) || __LIB_9__::func_731(5)) || __LIB_9__::func_731(6)) || __LIB_9__::func_731(7)) || __LIB_9__::func_731(8)) || __LIB_9__::func_731(9)) || __LIB_9__::func_731(10)) || __LIB_9__::func_731(11)) || __LIB_9__::func_731(12))
	{
		return 1;
	}
	return 0;
}

int func_83(int iParam0, int iParam1, int iParam2)//Position - 0x134B76
{
	int iVar0;
	if (__LIB_10__::func_735(iParam0, iParam1, iParam2))
	{
		iVar0 = __LIB_10__::func_25(iParam0, iParam1, iParam2);
		switch (iVar0)
		{
			case 0:
			case 7:
			case 5:
			case 4:
			case 15:
			case 22:
				return 1;
			}
		default:
	}
	return 0;
}

int func_84()//Position - 0x13BB22
{
	int iVar0;
	if (!__LIB_10__::func_744())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_10__::func_746(iVar0))
		{
			return 0;
		}
		if (!__LIB_10__::func_745(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	if (!__LIB_10__::func_747())
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)//Position - 0x1172
{
	if (Global_262145.f_24382 /* Tunable: 352406794 */)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		default:
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x1CA9
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 2;
		default:
	}
	return 0;
}

int func_87(int iParam0, struct<3> Param1, int iParam2)//Position - 0x2024
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam2 == 3)
		{
			if (__LIB_2__::func_336(ENTITY::GET_ENTITY_HEADING(iParam0), (Param1.f_2 - 180f), 45f))
			{
				return 1;
			}
		}
		else if (__LIB_2__::func_336(ENTITY::GET_ENTITY_HEADING(iParam0), Param1.f_2, 45f))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()//Position - 0x238A
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1502.824f, -3006.31f, -80.557f, -1513.824f, -3006.31f, -84.557f, 9.5f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1)//Position - 0x2513
{
	if (Global_96267 == iParam0)
	{
		Global_96268 = Global_96267;
		Global_96269 = iParam1;
		Global_96267 = 23;
	}
}

int func_90()//Position - 0x2BE6
{
	return Global_96274;
}

int func_91()//Position - 0x4020
{
	return Global_96273;
}

var func_92(int iParam0)//Position - 0x24FC7
{
	return Global_60328[iParam0];
}

void func_93(bool bParam0)//Position - 0x252A5
{
	if (bParam0)
	{
	}
}

void func_94(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x61EB4
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
}

int func_95(int iParam0, int iParam1, float fParam2)//Position - 0x63D05
{
	return SYSTEM::ROUND((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

char* func_96(int iParam0)//Position - 0x642F8
{
	switch (iParam0)
	{
		case 0:
			return "A";
		case 1:
			return "B";
		case 2:
			return "C";
		case 3:
			return "D";
		case 4:
			return "E";
		case 5:
			return "F";
		case 6:
			return "G";
		case 7:
			return "H";
		case 8:
			return "I";
		case 9:
			return "J";
		case 10:
			return "K";
		case 11:
			return "L";
		case 12:
			return "M";
		case 13:
			return "N";
		case 14:
			return "O";
		case 15:
			return "P";
		case 16:
			return "Q";
		case 17:
			return "R";
		case 18:
			return "S";
		case 19:
			return "T";
		case 20:
			return "U";
		case 21:
			return "V";
		case 22:
			return "W";
		case 23:
			return "X";
		case 24:
			return "Y";
		case 25:
			return "Z";
		case 26:
			return "0";
		case 27:
			return "1";
		case 28:
			return "2";
		case 29:
			return "3";
		case 30:
			return "4";
		case 31:
			return "5";
		case 32:
			return "6";
		case 33:
			return "7";
		case 34:
			return "8";
		case 35:
			return "9";
		default:
	}
	return "";
}

void func_97(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x657D4
{
	var uVar0;
	uVar0 = __LIB_4__::func_191(iParam2, (iParam1 * iParam2));
	*uParam0 = (*uParam0 - (*uParam0 && uVar0));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam3, (iParam1 * iParam2)));
}

bool func_98(float fParam0, float fParam1, float fParam2)//Position - 0x777A7
{
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

void func_99(bool bParam0)//Position - 0x58C
{
	if (!bParam0)
	{
		Global_112028 = MISC::GET_GAME_TIMER() + 250;
	}
	Global_112025 = bParam0;
}

void func_100(int* iParam0)//Position - 0x4112
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_101(var uParam0, int iParam1, int iParam2)//Position - 0x6658C
{
	if (iParam1 != 4)
	{
		uParam0->f_18[iParam1] = iParam2;
	}
}

void func_102(int iParam0, struct<3> Param1, float fParam2)//Position - 0x67506
{
	ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
}

void func_103()//Position - 0x6B94B
{
	if (Global_2715699.f_6597)
	{
		Global_2715699.f_6597 = 0;
	}
}

char* func_104(bool bParam0)//Position - 0x6CD36
{
	bParam0 = bParam0;
	return "";
}

void func_105(int iParam0, bool bParam1)//Position - 0x6CE1F
{
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(iParam0, bParam1);
	}
	else
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
		VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(iParam0, bParam1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

int func_106(var uParam0, int iParam1)//Position - 0x6CEFB
{
	if (uParam0->f_39)
	{
		if (iParam1 == uParam0->f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_107(var uParam0, int iParam1, var uParam2)//Position - 0x6E559
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = 0;
			break;
		case 1:
			*uParam2 = 2;
			break;
		case 2:
			*uParam2 = 1;
			break;
		case 3:
			*uParam2 = 3;
			break;
	}
	if (iParam1 != 4)
	{
		if (uParam0->f_24[iParam1] == 0)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("prologue1")) > 0)
			{
				if (iParam1 == 0)
				{
					if (__LIB_0__::func_368(124))
					{
						*uParam2 = 8;
					}
					else
					{
						*uParam2 = 7;
					}
				}
				else if (iParam1 == 2)
				{
					if (__LIB_0__::func_368(125))
					{
						*uParam2 = 10;
					}
					else
					{
						*uParam2 = 9;
					}
				}
			}
		}
		else if (uParam0->f_24[iParam1] == 1)
		{
			if (iParam1 == 0)
			{
				*uParam2 = 6;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = 4;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = 5;
			}
		}
		else if (uParam0->f_24[iParam1] == 2)
		{
			*uParam2 = 7;
		}
		else if (uParam0->f_24[iParam1] == 3)
		{
			*uParam2 = 8;
		}
		else if (uParam0->f_24[iParam1] == 4)
		{
			*uParam2 = 9;
		}
		else if (uParam0->f_24[iParam1] == 5)
		{
			*uParam2 = 10;
		}
	}
}

void func_108(int* iParam0)//Position - 0x6F178
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_109(int iParam0)//Position - 0x79F79
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

int func_110(int iParam0)//Position - 0x79F90
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

int func_111(var uParam0, int iParam1)//Position - 0x7B81D
{
	if (iParam1 == 0)
	{
		if ((uParam0->f_10[iParam1 /*57*/].f_2 == 2 || uParam0->f_10[iParam1 /*57*/].f_4) && (uParam0->f_10[iParam1 + 1 /*57*/].f_2 != 2 && uParam0->f_10[iParam1 + 1 /*57*/].f_4 == 0))
		{
			return 1;
		}
	}
	if (iParam1 == 1)
	{
		if ((uParam0->f_10[iParam1 /*57*/].f_2 == 2 || uParam0->f_10[iParam1 /*57*/].f_4) && (uParam0->f_10[(iParam1 - 1) /*57*/].f_2 != 2 && uParam0->f_10[(iParam1 - 1) /*57*/].f_4 == 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_112(var uParam0, int iParam1)//Position - 0x7BF54
{
	CAM::SET_CAM_NEAR_DOF(uParam0->f_10[iParam1 /*57*/].f_1, uParam0->f_10[iParam1 /*57*/].f_47);
	CAM::SET_CAM_FAR_DOF(uParam0->f_10[iParam1 /*57*/].f_1, uParam0->f_10[iParam1 /*57*/].f_47.f_1);
	CAM::SET_CAM_DOF_STRENGTH(uParam0->f_10[iParam1 /*57*/].f_1, uParam0->f_10[iParam1 /*57*/].f_47.f_2);
}

void func_113(var uParam0, int iParam1)//Position - 0x7BFA8
{
	int iVar0;
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = uParam0->f_10[iParam1 /*57*/].f_27;
	if (uParam0->f_10[iVar0 /*57*/].f_4 || uParam0->f_10[iVar0 /*57*/].f_2 == 2)
	{
		uParam0->f_10[iParam1 /*57*/].f_6 = { CAM::GET_GAMEPLAY_CAM_COORD() + uParam0->f_10[iParam1 /*57*/].f_24 };
		uParam0->f_10[iParam1 /*57*/].f_9 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		uParam0->f_10[iParam1 /*57*/].f_6 = { uParam0->f_10[iVar0 /*57*/].f_6 + uParam0->f_10[iParam1 /*57*/].f_24 };
		uParam0->f_10[iParam1 /*57*/].f_9 = { uParam0->f_10[iVar0 /*57*/].f_9 };
	}
	uParam0->f_10[iParam1 /*57*/].f_21 = uParam0->f_10[iVar0 /*57*/].f_21;
	if (uParam0->f_10[iParam1 /*57*/].f_21 == 0f)
	{
		uParam0->f_10[iParam1 /*57*/].f_21 = CAM::GET_GAMEPLAY_CAM_FOV();
	}
	uParam0->f_10[iParam1 /*57*/].f_18 = uParam0->f_10[iVar0 /*57*/].f_18;
	uParam0->f_10[iParam1 /*57*/].f_12 = uParam0->f_10[iVar0 /*57*/].f_12;
	uParam0->f_10[iParam1 /*57*/].f_13 = { uParam0->f_10[iVar0 /*57*/].f_13 };
	uParam0->f_10[iParam1 /*57*/].f_19 = uParam0->f_10[iVar0 /*57*/].f_19;
	uParam0->f_10[iParam1 /*57*/].f_20 = uParam0->f_10[iVar0 /*57*/].f_20;
}

int func_114(var uParam0, int iParam1)//Position - 0x7C12F
{
	int iVar0;
	iVar0 = 0;
	if (uParam0->f_10[iParam1 /*57*/].f_2 == 0)
	{
		iVar0 = 1;
	}
	if (uParam0->f_10[iParam1 /*57*/].f_2 == 1)
	{
		iVar0 = 1;
	}
	if (uParam0->f_10[iParam1 /*57*/].f_4 || uParam0->f_10[iParam1 /*57*/].f_2 == 2)
	{
		iVar0 = 0;
	}
	if (iParam1 > 0)
	{
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 8)
		{
			if (uParam0->f_10[uParam0->f_10[iParam1 /*57*/].f_27 /*57*/].f_2 == 0)
			{
				iVar0 = 1;
			}
			if (uParam0->f_10[uParam0->f_10[iParam1 /*57*/].f_27 /*57*/].f_2 == 1)
			{
				iVar0 = 1;
			}
			if (uParam0->f_10[uParam0->f_10[iParam1 /*57*/].f_27 /*57*/].f_4 || uParam0->f_10[uParam0->f_10[iParam1 /*57*/].f_27 /*57*/].f_2 == 2)
			{
				iVar0 = 0;
			}
		}
	}
	if (iParam1 < (uParam0->f_1217 - 1))
	{
		if (uParam0->f_10[iParam1 /*57*/].f_54)
		{
			if (((((uParam0->f_10[iParam1 + 1 /*57*/].f_2 == 2 || uParam0->f_10[iParam1 + 1 /*57*/].f_4) || uParam0->f_10[iParam1 + 1 /*57*/].f_2 == 3) || uParam0->f_10[iParam1 + 1 /*57*/].f_2 == 4) || uParam0->f_10[iParam1 + 1 /*57*/].f_2 == 5) || uParam0->f_10[iParam1 + 1 /*57*/].f_2 == 6)
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

Vector3 func_115(var uParam0, int iParam1)//Position - 0x7C288
{
	if (iParam1 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[iParam1]))
		{
			return ENTITY::GET_ENTITY_COORDS(uParam0->f_4[iParam1], true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7[iParam1]))
		{
			return ENTITY::GET_ENTITY_COORDS(uParam0->f_7[iParam1], true);
		}
	}
	return 0f, 0f, 0f;
}

void func_116(var uParam0, int iParam1)//Position - 0x7C2D7
{
	if (iParam1 < (uParam0->f_1217 - 1))
	{
		uParam0->f_10[iParam1 /*57*/].f_5 = 0;
		uParam0->f_10[iParam1 /*57*/].f_6 = { uParam0->f_10[iParam1 + 1 /*57*/].f_6 };
		uParam0->f_10[iParam1 /*57*/].f_9 = { uParam0->f_10[iParam1 + 1 /*57*/].f_9 };
		uParam0->f_10[iParam1 /*57*/].f_18 = uParam0->f_10[iParam1 + 1 /*57*/].f_18;
		uParam0->f_10[iParam1 /*57*/].f_21 = uParam0->f_10[iParam1 + 1 /*57*/].f_21;
		uParam0->f_10[iParam1 /*57*/].f_22 = uParam0->f_10[iParam1 + 1 /*57*/].f_22;
		uParam0->f_10[iParam1 /*57*/].f_23 = uParam0->f_10[iParam1 + 1 /*57*/].f_23;
		uParam0->f_10[iParam1 /*57*/].f_28 = uParam0->f_10[iParam1 + 1 /*57*/].f_28;
		uParam0->f_10[iParam1 /*57*/].f_29 = uParam0->f_10[iParam1 + 1 /*57*/].f_29;
		uParam0->f_10[iParam1 /*57*/].f_30 = uParam0->f_10[iParam1 + 1 /*57*/].f_30;
		uParam0->f_10[iParam1 /*57*/].f_31 = uParam0->f_10[iParam1 + 1 /*57*/].f_31;
		uParam0->f_10[iParam1 /*57*/].f_33 = uParam0->f_10[iParam1 + 1 /*57*/].f_33;
		uParam0->f_10[iParam1 /*57*/].f_34 = uParam0->f_10[iParam1 + 1 /*57*/].f_34;
		uParam0->f_10[iParam1 /*57*/].f_35 = uParam0->f_10[iParam1 + 1 /*57*/].f_35;
		uParam0->f_10[iParam1 /*57*/].f_36 = 0;
		uParam0->f_10[iParam1 /*57*/].f_39 = 0f;
		uParam0->f_10[iParam1 /*57*/].f_40 = 0f;
		uParam0->f_10[iParam1 /*57*/].f_41 = 0;
		uParam0->f_10[iParam1 /*57*/].f_42 = 0;
		uParam0->f_10[iParam1 /*57*/].f_43 = 0;
		uParam0->f_10[iParam1 /*57*/].f_46 = uParam0->f_10[iParam1 + 1 /*57*/].f_46;
		uParam0->f_10[iParam1 /*57*/].f_4 = uParam0->f_10[iParam1 + 1 /*57*/].f_4;
		uParam0->f_10[iParam1 /*57*/].f_12 = uParam0->f_10[iParam1 + 1 /*57*/].f_12;
		uParam0->f_10[iParam1 /*57*/].f_13 = { uParam0->f_10[iParam1 + 1 /*57*/].f_13 };
		uParam0->f_10[iParam1 /*57*/].f_19 = uParam0->f_10[iParam1 + 1 /*57*/].f_19;
		uParam0->f_10[iParam1 /*57*/].f_20 = uParam0->f_10[iParam1 + 1 /*57*/].f_20;
		uParam0->f_10[iParam1 /*57*/].f_50 = uParam0->f_10[iParam1 + 1 /*57*/].f_50;
		uParam0->f_10[iParam1 /*57*/].f_45 = uParam0->f_10[iParam1 + 1 /*57*/].f_45;
	}
}

int func_117(var uParam0, int iParam1)//Position - 0x7C512
{
	if (iParam1 > 0 && iParam1 < (uParam0->f_1217 - 1))
	{
		if (uParam0->f_10[iParam1 /*57*/].f_54)
		{
			return 1;
		}
	}
	return 0;
}

void func_118(var uParam0, int iParam1)//Position - 0x7C542
{
	uParam0->f_10[iParam1 /*57*/].f_6 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	uParam0->f_10[iParam1 /*57*/].f_9 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	uParam0->f_10[iParam1 /*57*/].f_21 = CAM::GET_GAMEPLAY_CAM_FOV();
}

void func_119(var uParam0)//Position - 0x7C579
{
	AUDIO::STOP_SOUND(uParam0->f_1240);
	AUDIO::STOP_SOUND(uParam0->f_1238);
	AUDIO::STOP_SOUND(uParam0->f_1239);
	uParam0->f_1240 = -1;
	uParam0->f_1238 = -1;
	uParam0->f_1239 = -1;
}

int func_120(var uParam0)//Position - 0x7C5E2
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_1217)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

void func_121()//Position - 0x8356E
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, true);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
	VEHICLE::SET_GARBAGE_TRUCKS(false);
	VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(false);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
}

void func_122(int iParam0)//Position - 0x839CA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

int func_123()//Position - 0x83BEF
{
	return joaat("S_M_Y_Cop_01");
}

int func_124()//Position - 0x83BFC
{
	return joaat("police");
}

int func_125()//Position - 0x83C09
{
	return joaat("sultan");
}

void func_126()//Position - 0x83C33
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
	VEHICLE::SET_GARBAGE_TRUCKS(true);
	VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(true);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
}

void func_127(var uParam0)//Position - 0x84BC5
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		CAM::DESTROY_CAM(uParam0->f_2, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
	{
		CAM::DESTROY_CAM(uParam0->f_3, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::DESTROY_CAM(uParam0->f_4, false);
	}
}

float func_128(struct<3> Param0)//Position - 0x896F5
{
	return Param0.f_2;
}

int func_129()//Position - 0x89863
{
	return 2086;
}

void func_130()//Position - 0x90D95
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20265 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22616 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
		Global_20266.f_1 = Global_20268;
		return;
	}
}

void func_131(var uParam0)//Position - 0xA56BB
{
	if (uParam0->f_1233 >= 0f)
	{
		if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= uParam0->f_1233 && CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) < uParam0->f_1234)
		{
			if (uParam0->f_1238 == -1)
			{
				if (uParam0->f_1235)
				{
					uParam0->f_1238 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_1238, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				}
			}
			if (uParam0->f_1239 == -1)
			{
				if (uParam0->f_1236)
				{
					uParam0->f_1239 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_1239, "Camera_Move_Loop", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				}
			}
		}
	}
	if (uParam0->f_1234 >= 0f)
	{
		if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= uParam0->f_1234 || CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) == 1f)
		{
			if (uParam0->f_1239 != -1)
			{
				if (uParam0->f_1236)
				{
					AUDIO::STOP_SOUND(uParam0->f_1239);
					uParam0->f_1239 = -1;
				}
			}
			if (uParam0->f_1240 == -1)
			{
				if (uParam0->f_1237)
				{
					uParam0->f_1240 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_1240, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				}
			}
		}
	}
}

void func_132(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xA57C6
{
	STREAMING::SET_PED_POPULATION_BUDGET(iParam0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(iParam1);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(bParam2);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(bParam3);
}

void func_133(var uParam0, int iParam1)//Position - 0xA5806
{
	char* sVar0;
	switch (uParam0->f_10[iParam1 /*57*/].f_37)
	{
		case 0:
			GRAPHICS::SET_FLASH(uParam0->f_10[iParam1 /*57*/].f_39, uParam0->f_10[iParam1 /*57*/].f_40, uParam0->f_10[iParam1 /*57*/].f_41, uParam0->f_10[iParam1 /*57*/].f_42, uParam0->f_10[iParam1 /*57*/].f_43);
			break;
		case 1:
			sVar0 = "DefaultFlash";
			break;
		case 2:
			sVar0 = "FocusOut";
			break;
		case 3:
			sVar0 = "MinigameEndNeutral";
			break;
		case 4:
			sVar0 = "MinigameTransitionOut";
			break;
		case 5:
			sVar0 = "PauseMenuOut";
			break;
		case 6:
			sVar0 = "SwitchShortNeutralIn";
			break;
		case 7:
			sVar0 = "SwitchShortNeutralMid";
			break;
		case 8:
			sVar0 = "SwitchShortMichaelMid";
			break;
		case 9:
			sVar0 = "SwitchShortMichaelIn";
			break;
		case 10:
			sVar0 = "SwitchSceneMichael";
			break;
		case 11:
			sVar0 = "SwitchShortTrevorMid";
			break;
		case 12:
			sVar0 = "SwitchShortFranklinIn";
			break;
		case 13:
			sVar0 = "SwitchShortFranklinMid";
			break;
		case 14:
			sVar0 = "SwitchShortTrevorIn";
			break;
		case 15:
			sVar0 = "SwitchOpenFranklinOut";
			break;
		case 16:
			sVar0 = "SwitchOpenMichaelIn";
			break;
		case 17:
			sVar0 = "SwitchOpenMichaelOut";
			break;
		case 18:
			sVar0 = "SwitchOpenTrevorIn";
			break;
		case 19:
			sVar0 = "SwitchOpenTrevorOut";
			break;
		case 20:
			sVar0 = "SwitchSceneFranklin";
			break;
		case 21:
			sVar0 = "SwitchSceneTrevor";
			break;
	}
	if (uParam0->f_10[iParam1 /*57*/].f_37 > 0)
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, false);
	}
}

char* func_134()//Position - 0xA59C2
{
	char* sVar0;
	sVar0 = "";
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchSceneMichael"))
	{
		sVar0 = "SwitchSceneMichael";
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchSceneFranklin"))
	{
		sVar0 = "SwitchSceneFranklin";
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchSceneTrevor"))
	{
		sVar0 = "SwitchSceneTrevor";
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchSceneNeutral"))
	{
		sVar0 = "SwitchSceneNeutral";
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchHUDIn"))
	{
		sVar0 = "SwitchHUDIn";
	}
	return sVar0;
}

void func_135(var uParam0, int iParam1, int iParam2)//Position - 0xA5A94
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		if ((iParam1 >= uParam0->f_1218 && iVar0 >= uParam0->f_1218) || iParam2)
		{
			if (uParam0->f_10[uParam0->f_10[iVar0 /*57*/].f_27 /*57*/].f_4 || uParam0->f_10[uParam0->f_10[iVar0 /*57*/].f_27 /*57*/].f_2 == 2)
			{
				CAM::SET_CAM_COORD(uParam0->f_10[iVar0 /*57*/].f_1, CAM::GET_GAMEPLAY_CAM_COORD() + uParam0->f_10[iVar0 /*57*/].f_24);
				CAM::SET_CAM_ROT(uParam0->f_10[iVar0 /*57*/].f_1, CAM::GET_GAMEPLAY_CAM_ROT(2), 2);
			}
		}
		iVar0++;
	}
}

float func_136(float fParam0, float fParam1, float fParam2)//Position - 0xA5B72
{
	float fVar0;
	fVar0 = SYSTEM::SIN(__LIB_0__::func_407(((fParam2 * 3.1415927f) * 0.5f)));
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_137(float fParam0, float fParam1, float fParam2)//Position - 0xA5B9F
{
	float fVar0;
	fVar0 = (1f - SYSTEM::COS(__LIB_0__::func_407(((fParam2 * 3.1415927f) * 0.5f))));
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

int func_138(int iParam0, int iParam1, float fParam2)//Position - 0xAA779
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, false) };
	}
	else
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		Var1 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, false) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	fVar2 = __LIB_0__::func_156(Var0, Var1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
	if (!fVar2 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_139(int iParam0, int iParam1)//Position - 0xAB9F4
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, false) };
	}
	else
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		Var1 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, false) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	fVar2 = __LIB_0__::func_156(Var0, Var1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0, int iParam1)//Position - 0xABF20
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				return 0;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
		Var4 = { Var2 - Var1 };
	}
	Var3 = { Var1 - Var0 };
	Var3.f_2 = 0f;
	Var4.f_2 = 0f;
	fVar5 = __LIB_0__::func_156(Var3, Var4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_141(float fParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)//Position - 0xAC389
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam1, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam2, true) };
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam2, Var0) };
	fVar3 = SYSTEM::VDIST(Var0, Var1);
	fVar4 = 0f;
	fVar5 = (fParam11 - 1f);
	fVar6 = (1f - fParam9);
	if (Var2.f_1 < 1f)
	{
		if (fVar3 > fParam5)
		{
			iVar7 = 0;
			if (fVar3 > fParam6)
			{
				if (fVar3 > (fParam6 * 2f))
				{
					iVar7 = 1;
				}
				fVar3 = fParam6;
			}
			fVar4 = ((fVar3 - fParam5) / (fParam6 - fParam5));
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2) || iVar7)
			{
				*fParam0 = (fParam9 - ((fParam9 - fParam10) * fVar4));
			}
			else
			{
				*fParam0 = fParam9;
			}
		}
		else if (fVar3 > fParam4)
		{
			fVar4 = ((fVar3 - fParam4) / (fParam5 - fParam4));
			*fParam0 = (1f - (fVar6 * fVar4));
		}
		else
		{
			if (fVar3 < fParam3)
			{
				fVar3 = fParam3;
			}
			fVar4 = ((fParam4 - fVar3) / (fParam4 - fParam3));
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
			{
				*fParam0 = (1f + ((fVar4 * fVar5) * 2f));
			}
			else
			{
				*fParam0 = (1f + (fVar4 * fVar5));
			}
		}
	}
	else
	{
		if (fVar3 > fParam7)
		{
			fVar3 = fParam7;
		}
		fVar4 = (fVar3 / fParam7);
		fVar8 = (ENTITY::GET_ENTITY_SPEED(iParam2) - ENTITY::GET_ENTITY_SPEED(*iParam1));
		if (fVar8 > 0f)
		{
			fVar4 = (fVar4 * 0.5f);
		}
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
		{
			*fParam0 = (2f + fVar4);
		}
		else if (ENTITY::GET_ENTITY_SPEED(*iParam1) < 5f && fVar8 > 0f)
		{
			*fParam0 = (0.6f + fVar4);
		}
		else
		{
			*fParam0 = (1f + fVar4);
		}
	}
	*fParam0 = (*fParam0 * fParam8);
	if (bParam12)
	{
		fVar9 = fParam13;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*fParam0 > 1f)
		{
			fVar9 = (fParam13 + ((fParam14 - fParam13) * (*fParam0 - 1f)));
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*iParam1, -fVar9);
	}
}

int func_142(int* iParam0)//Position - 0xACFE3
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

int func_143(int* iParam0)//Position - 0xAD07A
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || PED::IS_PED_INJURED(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_144()//Position - 0xB0243
{
	if (Global_32184)
	{
		Global_32184 = 0;
		StringCopy(&Global_32185, "NULL", 32);
	}
}

int func_145(int iParam0, struct<3> Param1, bool bParam2, float fParam3)//Position - 0x17A4
{
	var uVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Param1, 5f, iParam0, false))
	{
		if (fParam3 != -2f)
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, bParam2, fParam3, false);
			OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, &iVar3, &fVar2);
			if (iVar3 == bParam2 && fVar2 == fParam3)
			{
				return 1;
			}
		}
		else
		{
			OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, &uVar0, &fVar1);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, bParam2, fVar1, false);
			return 1;
		}
	}
	return 0;
}

int func_146(char* sParam0)//Position - 0x262F
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 0)
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "NULL"))
	{
		return 1;
	}
	return 0;
}

void func_147(int iParam0, int iParam1)//Position - 0x12AEC
{
	MISC::SET_BIT(&Global_32118, iParam0);
	StringCopy(&(Global_32119[iParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_32174[iParam0] = iParam1;
}

void func_148(var uParam0, int iParam1)//Position - 0x12C85
{
	Global_63165 = uParam0;
	Global_63166 = iParam1;
}

int func_149(bool bParam0)//Position - 0x17FEA
{
	if (!__LIB_0__::func_317(bParam0))
	{
		return __LIB_0__::func_42(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_150(var uParam0, int iParam1)//Position - 0x191E2
{
	if (MISC::ARE_STRINGS_EQUAL(__LIB_11__::func_134(), "SwitchHUDIn") && uParam0->f_10[iParam1 /*57*/].f_51 > 0f)
	{
		GRAPHICS::ANIMPOSTFX_STOP(__LIB_11__::func_134());
		GRAPHICS::ANIMPOSTFX_PLAY("SwitchHUDOut", SYSTEM::FLOOR(uParam0->f_10[iParam1 /*57*/].f_51) * 1000, false);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_STOP(__LIB_11__::func_134());
	}
}

int func_151(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4)//Position - 0x4576C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	Var0 = { Param2 - Param1 };
	Var1 = { Param1 - Param4 };
	fVar2 = __LIB_0__::func_156(Param3, Var0);
	fVar3 = -__LIB_0__::func_156(Param3, Var1);
	if (MISC::ABSF(fVar2) < 1E-08f)
	{
		return 0;
	}
	fVar4 = (fVar3 / fVar2);
	*uParam0 = { Param1 + Vector(fVar4, fVar4, fVar4) * Var0 };
	if (fVar4 < 0f || fVar4 > 1f)
	{
		return 0;
	}
	return 1;
}

int func_152(int iParam0)//Position - 0x45C74
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("akula"):
			return 1;
		default:
	}
	return 0;
}

void func_153(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x57594
{
	uParam0->f_43 = 1;
	uParam0->f_40 = iParam1;
	uParam0->f_41 = iParam2;
	uParam0->f_42 = iParam3;
}

void func_154(int iParam0)//Position - 0x9E9F7
{
	SYSTEM::WAIT(iParam0);
}

int func_155(int iParam0)//Position - 0xA70DC
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return -1;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/].f_1;
}

Vector3 func_156(int iParam0, int iParam1)//Position - 0xA9857
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_32338[iVar0 /*23*/][iParam1 /*3*/];
}

void func_157(var uParam0)//Position - 0x4CA45
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_100166[iVar0 /*65*/][iVar1] = uParam0->f_616[iVar0 /*65*/][iVar1];
			Global_100166[iVar0 /*65*/].f_13[iVar1] = uParam0->f_616[iVar0 /*65*/].f_13[iVar1];
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			Global_100166[iVar0 /*65*/].f_39[iVar1] = uParam0->f_616[iVar0 /*65*/].f_39[iVar1];
			Global_100166[iVar0 /*65*/].f_49[iVar1] = uParam0->f_616[iVar0 /*65*/].f_49[iVar1];
			iVar1++;
		}
		Global_100166[iVar0 /*65*/].f_59 = uParam0->f_616[iVar0 /*65*/].f_59;
		Global_100166[iVar0 /*65*/].f_60 = uParam0->f_616[iVar0 /*65*/].f_60;
		Global_100166[iVar0 /*65*/].f_61 = uParam0->f_616[iVar0 /*65*/].f_61;
		Global_100166[iVar0 /*65*/].f_62 = uParam0->f_616[iVar0 /*65*/].f_62;
		Global_100166[iVar0 /*65*/].f_63 = uParam0->f_616[iVar0 /*65*/].f_63;
		Global_100166[iVar0 /*65*/].f_64 = uParam0->f_616[iVar0 /*65*/].f_64;
		iVar0++;
	}
}

void func_158(int iParam0)//Position - 0x4CB9B
{
	if (!__LIB_0__::func_317(iParam0))
	{
		return;
	}
	Global_113386.f_2363.f_539.f_2332[iParam0] = 1;
}

void func_159()//Position - 0x68274
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
}

void func_160(int iParam0, int* iParam1)//Position - 0x684C0
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(iParam1->f_13), 17);
			break;
		case 1:
			MISC::CLEAR_BIT(&(iParam1->f_13), 18);
			break;
		case 2:
			MISC::CLEAR_BIT(&(iParam1->f_13), 19);
			break;
	}
}

int func_161(int iParam0, int* iParam1, int iParam2)//Position - 0x699AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_162(int iParam0, int* iParam1)//Position - 0x6AAA4
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(iParam1->f_13), 14);
			break;
		case 1:
			MISC::SET_BIT(&(iParam1->f_13), 15);
			break;
		case 2:
			MISC::SET_BIT(&(iParam1->f_13), 16);
			break;
	}
}

int func_163(int iParam0, int* iParam1)//Position - 0x6AB45
{
	switch (iParam0)
	{
		case 0:
			return BitTest(iParam1->f_13, 14);
		case 1:
			return BitTest(iParam1->f_13, 15);
		case 2:
			return BitTest(iParam1->f_13, 16);
		default:
	}
	return 0;
}

void func_164(int iParam0, int* iParam1)//Position - 0x6AC58
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(iParam1->f_13), 17);
			break;
		case 1:
			MISC::SET_BIT(&(iParam1->f_13), 18);
			break;
		case 2:
			MISC::SET_BIT(&(iParam1->f_13), 19);
			break;
	}
}

int func_165(int iParam0, int* iParam1)//Position - 0x6ACA0
{
	switch (iParam0)
	{
		case 0:
			return BitTest(iParam1->f_13, 17);
		case 1:
			return BitTest(iParam1->f_13, 18);
		case 2:
			return BitTest(iParam1->f_13, 19);
		default:
	}
	return 0;
}

int func_166(int iParam0, int* iParam1)//Position - 0x6AD6D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(iParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, false);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == iParam1->f_17[0] || iVar3 == iParam1->f_17[1]) || iVar3 == iParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, false);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == iParam1->f_17[0] || iVar4 == iParam1->f_17[1]) || iVar4 == iParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, false);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == iParam1->f_17[0] || iVar5 == iParam1->f_17[1]) || iVar5 == iParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_167()//Position - 0x6B1FB
{
	return 0f, 0f, 2f;
}

void func_168(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6E458
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

void func_169(var uParam0)//Position - 0x75026
{
	Global_21602 = uParam0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
}

void func_170()//Position - 0x7504C
{
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_21619 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
}

int func_171(int iParam0, struct<3> Param1, float fParam2)//Position - 0x808C6
{
	int iVar0;
	if (iParam0 == joaat("monroe"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam2, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 89, 89);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 88, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " FA5T66 ");
	}
	else if (iParam0 == joaat("cheetah"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam2, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 62, 62);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 68, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " SDTM1YP");
	}
	else if (iParam0 == joaat("stinger"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam2, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 27, 27);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 36, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "ALPHADOG");
		VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
	}
	else if (iParam0 == joaat("jb700"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam2, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "  4G3NT");
	}
	else if (iParam0 == joaat("entityxf"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam2, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 38, 38);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 37, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " MKB652 ");
	}
	else if (iParam0 == joaat("ztype"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam2, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 10, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " V1NTAG3");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
	}
	return iVar0;
}

void func_172()//Position - 0x8BB52
{
	Global_32184 = 1;
	StringCopy(&Global_32185, SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
}

void func_173()//Position - 0x1470
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

char* func_174(int iParam0)//Position - 0x69619
{
	iParam0 = iParam0;
	return "";
}

void func_175(int* iParam0, bool bParam1)//Position - 0x741EB
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

int func_176(var uParam0, int iParam1, int iParam2)//Position - 0x7D9BA
{
	if (iParam2 != -1)
	{
		iParam1 = iParam2;
	}
	if (iParam1 < uParam0->f_1218 || (uParam0->f_1218 == 0 && iParam2 == -1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7[0]))
		{
			return __LIB_0__::func_346(uParam0->f_7[0]);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[0]))
		{
			return __LIB_0__::func_346(uParam0->f_4[0]);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7[1]))
	{
		return __LIB_0__::func_346(uParam0->f_7[1]);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[1]))
	{
		return __LIB_0__::func_346(uParam0->f_4[1]);
	}
	return 0;
}

void func_177(var uParam0)//Position - 0x7F6A2
{
	__LIB_11__::func_127(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

int func_178(var uParam0, int iParam1)//Position - 0x80430
{
	bool bVar0;
	if (!uParam0->f_39)
	{
		uParam0->f_7 = 4;
		uParam0->f_39 = 1;
	}
	bVar0 = false;
	if (iParam1 == 3 || iParam1 == __LIB_0__::func_504(Global_113386.f_2363.f_539.f_4323))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		uParam0->f_7 = iParam1;
		return 1;
	}
	uParam0->f_39 = 0;
	return 0;
}

void func_179(var uParam0, int iParam1, int iParam2)//Position - 0x80C57
{
	if (iParam1 != 4)
	{
		uParam0->f_8[iParam1] = iParam2;
	}
}

int func_180(int iParam0)//Position - 0x83E22
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return -1;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/].f_2;
}

void func_181(var uParam0, struct<3> Param1, float fParam2)//Position - 0x8A4DB
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		Global_112422 = *uParam0;
		Global_112427 = { Param1 };
		Global_112431 = fParam2;
	}
}

void func_182(int iParam0)//Position - 0x90C5E
{
	Global_77137.f_138 = iParam0;
}

int func_183(int iParam0, int iParam1)//Position - 0x90FB2
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_184(var uParam0)//Position - 0x668A
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
		}
		else
		{
			GRAPHICS::REMOVE_PARTICLE_FX(*uParam0, false);
		}
		*uParam0 = 0;
	}
}

void func_185(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7704
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	fVar1 = (360f / SYSTEM::TO_FLOAT(iParam6));
	Var2 = { Param0 };
	Var3 = { Param0 };
	fVar4 = 0f;
	Var2 = { Param0 };
	Var2.f_0 = (Var2.f_0 + (SYSTEM::SIN((fVar4 - fVar1)) * fParam1));
	Var2.f_1 = (Var2.f_1 + (SYSTEM::COS((fVar4 - fVar1)) * fParam1));
	iVar0 = 0;
	while (iVar0 <= iParam6)
	{
		Var3 = { Param0 };
		Var3.f_0 = (Var3.f_0 + (SYSTEM::SIN(fVar4) * fParam1));
		Var3.f_1 = (Var3.f_1 + (SYSTEM::COS(fVar4) * fParam1));
		GRAPHICS::DRAW_DEBUG_LINE(Var2, Var3, iParam2, iParam3, iParam4, iParam5);
		Var2 = { Var3 };
		fVar4 = (fVar4 + fVar1);
		iVar0++;
	}
}

Vector3 func_186(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xB5FD
{
	if (bParam3)
	{
		fParam2 = __LIB_0__::func_301(fParam2, 0f, 1f);
	}
	return Param0 + Vector(fParam2, fParam2, fParam2) * Param1 - Param0;
}

void func_187(var uParam0, float fParam1, float fParam2)//Position - 0xC7F0
{
	uParam0->f_15[0] = fParam1;
	if (fParam2 == 0f)
	{
		uParam0->f_15[1] = fParam1;
	}
	else
	{
		uParam0->f_15[1] = fParam2;
	}
}

struct<8> func_188(struct<8> Param0, float fParam1)//Position - 0x2BF28
{
	struct<8> Var0;
	struct<3> Var1;
	Var0 = 2;
	Var1 = { __LIB_0__::func_79(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var1 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

void func_189(int iParam0, bool bParam1)//Position - 0x1604
{
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, bParam1, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(*iParam0, false);
		CAM::DESTROY_CAM(*iParam0, false);
		*iParam0 = 0;
	}
}

void func_190(int iParam0)//Position - 0x1637
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, true);
		}
		return;
	}
	VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, true);
}

int func_191(var uParam0, float fParam1)//Position - 0x1660
{
	bool bVar0;
	bVar0 = (fParam1 != -99f && uParam0->f_22 != -99f);
	if (!*uParam0 == 1)
	{
		return 0;
	}
	if (bVar0 && fParam1 >= uParam0->f_22)
	{
		return 1;
	}
	if (MISC::GET_GAME_TIMER() > (uParam0->f_19 + uParam0->f_20))
	{
		return fParam1 >= uParam0->f_22;
	}
	return 0;
}

void func_192(int iParam0, int iParam1)//Position - 0x16BE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, iParam1);
		return;
	}
	if (!__LIB_0__::func_657(iParam0, 1))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, iParam1);
	}
}

int func_193(int iParam0)//Position - 0x5C33
{
	if (iParam0 != 198)
	{
		if (Global_78319)
		{
			return Global_42586.f_227[iParam0];
		}
		else
		{
			return Global_113386.f_7261.f_227[iParam0];
		}
	}
	return 0;
}

bool func_194(int iParam0)//Position - 0x5F85
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	Var2.f_0 = MISC::ABSF((Var1.f_0 - Var0.f_0));
	Var2.f_1 = MISC::ABSF((Var1.f_1 - Var0.f_1));
	Var2.f_2 = MISC::ABSF((Var1.f_2 - Var0.f_2));
	return ((Var2.f_0 >= 1.4f && Var2.f_1 >= 1.4f) && Var2.f_2 >= 1.4f);
}

int func_195(int iParam0)//Position - 0x5FEE
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_01a"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_02a"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_02b"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_3a"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_4a"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_4b"))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)//Position - 0x6063
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_carwash_roller_horz"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_carwash_roller_vert"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_ld_test_01"))
	{
		return 1;
	}
	return 0;
}

void func_197(int iParam0, float fParam1, float fParam2)//Position - 0x60A2
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		GRAPHICS::WASH_DECALS_FROM_VEHICLE(iParam0, fParam1);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, fParam2);
	}
}

int func_198(var uParam0)//Position - 0x6108
{
	if (Global_78319)
	{
		return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_362);
	}
	return (MISC::GET_GAME_TIMER() - uParam0->f_361);
}

int func_199(int iParam0)//Position - 0x614B
{
	if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iParam0))
	{
		return 0;
	}
	if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 5000))
	{
		return 1;
	}
	return 0;
}

int func_200()//Position - 0x61A3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_2689235[iVar0 /*453*/].f_242)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_201(int iParam0)//Position - 0x6455
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_A_PLAYER(iParam0))
		{
			return 0;
		}
	}
	return !PED::IS_PED_DEAD_OR_DYING(iParam0, true);
}

void func_202(var uParam0)//Position - 0x6496
{
	uParam0->f_341 = 1;
	if (Global_78319)
	{
		uParam0->f_362 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		uParam0->f_361 = MISC::GET_GAME_TIMER();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			return;
		}
	}
}

bool func_203(int iParam0)//Position - 0x66C9
{
	return !(iParam0 == 0 || iParam0 == 5);
}

void func_204(var uParam0)//Position - 0x6766
{
	__LIB_6__::func_352(&(uParam0->f_93.f_16));
	__LIB_6__::func_352(&(uParam0->f_93.f_17));
	__LIB_6__::func_352(&(uParam0->f_93.f_18));
	__LIB_6__::func_352(&(uParam0->f_120.f_27));
	__LIB_6__::func_352(&(uParam0->f_120.f_28));
	__LIB_6__::func_352(&(uParam0->f_120.f_29));
	__LIB_6__::func_352(&(uParam0->f_30.f_5));
	__LIB_6__::func_352(&(uParam0->f_30.f_6));
	__LIB_6__::func_352(&(uParam0->f_51.f_5));
	__LIB_6__::func_352(&(uParam0->f_51.f_6));
	__LIB_6__::func_352(&(uParam0->f_72.f_5));
	__LIB_6__::func_352(&(uParam0->f_72.f_6));
}

float func_205(var uParam0, int iParam1)//Position - 0x680D
{
	if (!__LIB_0__::func_121(iParam1))
	{
		return 0f;
	}
	return MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(iParam1, true), uParam0->f_14[0 /*3*/], uParam0->f_14[1 /*3*/], false);
}

void func_206(var uParam0, int iParam1)//Position - 0x693B
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_93.f_19))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam1, uParam0->f_93.f_19, true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_93.f_19, iParam1, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_120.f_3[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam1, uParam0->f_120.f_3[0], true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_120.f_3[0], iParam1, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_120.f_3[1]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam1, uParam0->f_120.f_3[1], true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_120.f_3[1], iParam1, true);
	}
}

bool func_207(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x8D61
{
	return MISC::ACOS(__LIB_0__::func_156(Param1, Param0)) <= fParam2;
}

void func_208(int iParam0)//Position - 0xB29F
{
	if (!__LIB_0__::func_121(iParam0))
	{
		return;
	}
	if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iParam0))
	{
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iParam0);
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Carwash_Vehicle_Decorator"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "Carwash_Vehicle_Decorator");
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, false);
		}
	}
}

void func_209()//Position - 0xB443
{
	var uVar0;
	var uVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), &uVar0, &uVar1);
		if (__LIB_0__::func_121(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
		}
	}
}

void func_210(var uParam0, struct<3> Param1, float fParam2, float fParam3, float fParam4)//Position - 0xBCAD
{
	var uVar0;
	struct<3> Var1;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1 + Vector(0.3f, 0f, 0f), &uVar0, false, false))
	{
	}
	uParam0->f_24 = { Param1 };
	uParam0->f_30 = fParam3;
	Param1.f_2 = (Param1.f_2 + fParam4);
	uParam0->f_24 = { Param1 };
	uParam0->f_1 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Param1, false, true, false);
	if (__LIB_0__::func_121(uParam0->f_1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_1, Param1, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_1, fParam2);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_1, false, false);
	}
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, (-fParam3 / 2f), 0f, 1.5f) };
	uParam0->f_3[0] = OBJECT::CREATE_OBJECT(joaat("prop_carwash_roller_vert"), Var1, false, true, false);
	uParam0->f_12[0] = (-fParam3 / 2f);
	uParam0->f_9[0] = (-fParam3 / 2f);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3[0], true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_3[0], true, false);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_3[0], true);
	ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_3[0], false);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_3[0], Var1, true, false, false, true);
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, (fParam3 / 2f), 0f, 1.5f) };
	uParam0->f_3[1] = OBJECT::CREATE_OBJECT(joaat("prop_carwash_roller_vert"), Var1, false, true, false);
	uParam0->f_12[1] = (fParam3 / 2f);
	uParam0->f_9[1] = (fParam3 / 2f);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3[1], true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_3[1], true, false);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_3[1], true);
	ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_3[1], false);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_3[1], Var1, true, false, false, true);
	uParam0->f_15 = 0f;
	uParam0->f_2 = 0;
	*uParam0 = 1;
	uParam0->f_18[0] = -1.275f;
	uParam0->f_21[0] = 1.25f;
	uParam0->f_18[1] = 0f;
	uParam0->f_21[1] = 0.62f;
	uParam0->f_12[0] = -1.75f;
	uParam0->f_12[1] = 1.75f;
	uParam0->f_44 = 0;
}

void func_211(int iParam0)//Position - 0xBEA4
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = NETWORK::GET_NETWORK_TIME();
	while (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iVar0)) < iParam0)
	{
		SYSTEM::WAIT(0);
	}
}

void func_212(var uParam0, char* sParam1)//Position - 0xBED8
{
	uParam0->f_13 = sParam1;
}

int func_213(var uParam0, int iParam1)//Position - 0xC40B
{
	if (BitTest(uParam0->f_113, iParam1) || BitTest(uParam0->f_114, iParam1))
	{
		return 1;
	}
	__LIB_10__::func_693(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = 7;
	(uParam0[iParam1 /*7*/])->f_3 = "script";
	return 1;
}

void func_214(var uParam0, float fParam1)//Position - 0xC72A
{
	uParam0->f_22 = fParam1;
}

void func_215(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3)//Position - 0xC78E
{
	uParam0->f_1[1 /*3*/] = { Param1 };
	uParam0->f_8[1 /*3*/] = { Param2 };
	*uParam0 = 1;
	uParam0->f_20 = uParam3;
}

void func_216(var uParam0, char* sParam1)//Position - 0xC851
{
	uParam0->f_335 = sParam1;
}

void func_217(var uParam0, struct<3> Param1, struct<3> Param2)//Position - 0xC88C
{
	uParam0->f_7[0 /*3*/] = { Param1 };
	uParam0->f_7[1 /*3*/] = { Param2 };
	if (MISC::ABSF((Param2.f_0 - Param1.f_0)) > MISC::ABSF((Param2.f_1 - Param1.f_1)))
	{
		uParam0->f_29 = 0;
	}
	else
	{
		uParam0->f_29 = 0;
	}
}

void func_218(var uParam0, struct<3> Param1, struct<3> Param2)//Position - 0xC8D5
{
	uParam0->f_14[0 /*3*/] = { Param1 };
	uParam0->f_14[1 /*3*/] = { Param2 };
}

void func_219(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xC95E
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param1, true);
	Var2 = { Param0 };
	Var3 = { __LIB_0__::func_79(Param1 - Param0) };
	while (fVar1 < fVar0)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA_OF_PEDS(Var2, fParam2, 0);
		}
		if (bParam5)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Var2, fParam2, 0);
		}
		if (bParam4)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var2, fParam2, false, false, false, false, false, false, 0);
		}
		if (bParam6)
		{
			FIRE::STOP_FIRE_IN_RANGE(Var2, fParam2);
		}
		if (bParam7)
		{
			MISC::CLEAR_AREA_OF_PROJECTILES(Var2, fParam2, 0);
		}
		Var2 = { Var2 + Var3 * FtoV((fParam2 / 2f)) };
		fVar1 = (fVar1 + (fParam2 / 2f));
	}
}

bool func_220(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2B698
{
	return MISC::ACOS(MISC::ABSF(__LIB_0__::func_156(Param1, Param0))) <= fParam2;
}

bool func_221()//Position - 0x2C148
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		return ENTITY::IS_ENTITY_UPRIGHT(iVar0, 90f);
	}
	return ENTITY::IS_ENTITY_UPRIGHT(PLAYER::PLAYER_PED_ID(), 90f);
}

int func_222(var uParam0, var uParam1)//Position - 0x2C402
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5[32];
	iVar2 = -1;
	fVar4 = 1f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar5);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_0__::func_524(uVar5[iVar1]))
		{
			fVar3 = __LIB_0__::func_529(uVar5[iVar1], uParam0->f_1, 1);
			if (fVar3 < fVar4 || fVar4 == -1f)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar5[iVar2], -1, false) != PLAYER::PLAYER_PED_ID())
	{
		return 0;
	}
	*uParam1 = uVar5[iVar2];
	return 1;
}

int func_223(var uParam0)//Position - 0x2C9BD
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	float fVar3;
	int iVar4;
	iVar0 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_0__::func_524(uVar2[iVar1]))
		{
			fVar3 = __LIB_0__::func_529(uVar2[iVar1], uParam0->f_1, 1);
			if (fVar3 <= (uParam0->f_10 * 2.5f))
			{
				iVar4++;
			}
		}
		iVar1++;
	}
	return iVar4;
}

int func_224(int iParam0)//Position - 0x2CADB
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, true))
	{
		if (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_225(int iParam0)//Position - 0x2CE96
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("caddy3"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune3"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("vigilante"):
		case joaat("deluxo"):
		case joaat("caracara"):
		case joaat("scramjet"):
		case joaat("menacer"):
		case joaat("caracara2"):
		case joaat("locust"):
		case joaat("jugular"):
		case joaat("zorrusso"):
		case joaat("formula"):
		case joaat("everon"):
		case joaat("zhaba"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("peyote3"):
		case joaat("youga3"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("winky"):
		case joaat("slamtruck"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("squaddie"):
		case joaat("comet7"):
		case joaat("sm722"):
		case joaat("draugur"):
			return 1;
			break;
	}
	return 0;
}

void func_226(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2D2EF
{
	uParam0->f_12 = { __LIB_0__::func_79(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = __LIB_0__::func_301(fParam2, 0f, 360f);
}

void func_227(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, char* sParam5, int iParam6, float fParam7)//Position - 0x2D318
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam5;
	uParam0->f_9 = iParam4;
	uParam0->f_7 = iParam6;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam7 > 0f)
	{
		uParam0->f_10 = fParam7;
	}
}

float func_228(int iParam0, float fParam1)//Position - 0x2146
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return fParam1;
		case 3:
			return (fParam1 - 180f);
		default:
	}
	return fParam1;
}

float func_229(int iParam0)//Position - 0x5D4
{
	switch (iParam0)
	{
		case 0:
			return -135f;
		case 1:
			return 45f;
		case 2:
			return 135f;
		case 3:
			return -45f;
		case 4:
			return -45f;
		case 5:
			return 135f;
		default:
	}
	return 0f;
}

char* func_230(int iParam0)//Position - 0x6DA
{
	switch (iParam0)
	{
		case 0:
			return "anim_casino_b@amb@casino@games@roulette@player";
		case 1:
			return "anim_casino_b@amb@casino@games@shared@player@";
		case 2:
			return "anim_casino_b@amb@casino@games@roulette@dealer";
		case 3:
			return "anim_casino_b@amb@casino@games@roulette@dealer_female";
		case 4:
			return "anim_casino_b@amb@casino@games@roulette@table";
		default:
	}
	return "";
}

int func_231(int iParam0)//Position - 0x2854
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
			return 1;
		default:
	}
	return 0;
}

int func_232(var uParam0)//Position - 0x17CF2B
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(*uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

char* func_233(int iParam0)//Position - 0x17D325
{
	switch (iParam0)
	{
		case 0:
			return "dlc_vw_table_games_sounds";
		case 1:
			return "dlc_vw_table_games_frontend_sounds";
		case 2:
			return "dlc_vw_table_games_roulette_exit_sounds";
		default:
	}
	return "";
}

int func_234(int iParam0)//Position - 0x17D361
{
	if (iParam0 >= 11)
	{
		return 26;
	}
	if (iParam0 >= 3)
	{
		return 25;
	}
	return 24;
}

void func_235(var uParam0)//Position - 0x17DD1E
{
	uParam0->f_1 = 0;
	*uParam0 = 0f;
}

void func_236(var uParam0)//Position - 0x17DD2F
{
	AUDIO::RELEASE_SOUND_ID(uParam0->f_6);
	uParam0->f_6 = -1;
}

int func_237(int iParam0, char* sParam1)//Position - 0x17DF84
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, sParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

char* func_238(int iParam0)//Position - 0x17E2F4
{
	switch (iParam0)
	{
		case 1:
			return "exit_1_wheel";
		case 2:
			return "exit_2_wheel";
		case 3:
			return "exit_3_wheel";
		case 4:
			return "exit_4_wheel";
		case 5:
			return "exit_5_wheel";
		case 6:
			return "exit_6_wheel";
		case 7:
			return "exit_7_wheel";
		case 8:
			return "exit_8_wheel";
		case 9:
			return "exit_9_wheel";
		case 10:
			return "exit_10_wheel";
		case 11:
			return "exit_11_wheel";
		case 12:
			return "exit_12_wheel";
		case 13:
			return "exit_13_wheel";
		case 14:
			return "exit_14_wheel";
		case 15:
			return "exit_15_wheel";
		case 16:
			return "exit_16_wheel";
		case 17:
			return "exit_17_wheel";
		case 18:
			return "exit_18_wheel";
		case 19:
			return "exit_19_wheel";
		case 20:
			return "exit_20_wheel";
		case 21:
			return "exit_21_wheel";
		case 22:
			return "exit_22_wheel";
		case 23:
			return "exit_23_wheel";
		case 24:
			return "exit_24_wheel";
		case 25:
			return "exit_25_wheel";
		case 26:
			return "exit_26_wheel";
		case 27:
			return "exit_27_wheel";
		case 28:
			return "exit_28_wheel";
		case 29:
			return "exit_29_wheel";
		case 30:
			return "exit_30_wheel";
		case 31:
			return "exit_31_wheel";
		case 32:
			return "exit_32_wheel";
		case 33:
			return "exit_33_wheel";
		case 34:
			return "exit_34_wheel";
		case 35:
			return "exit_35_wheel";
		case 36:
			return "exit_36_wheel";
		case 37:
			return "exit_37_wheel";
		case 38:
			return "exit_38_wheel";
		default:
	}
	return "Error";
}

int func_239(int iParam0)//Position - 0x17E688
{
	switch (iParam0)
	{
		case 0:
			return 20;
		case 28:
			return 21;
		case 9:
			return 22;
		case 26:
			return 23;
		case 30:
			return 24;
		case 11:
			return 25;
		case 7:
			return 26;
		case 20:
			return 27;
		case 32:
			return 28;
		case 17:
			return 29;
		case 5:
			return 30;
		case 22:
			return 31;
		case 34:
			return 32;
		case 15:
			return 33;
		case 3:
			return 34;
		case 24:
			return 35;
		case 36:
			return 36;
		case 13:
			return 37;
		case 1:
			return 38;
		case 37:
			return 1;
		case 27:
			return 2;
		case 10:
			return 3;
		case 25:
			return 4;
		case 29:
			return 5;
		case 12:
			return 6;
		case 8:
			return 7;
		case 19:
			return 8;
		case 31:
			return 9;
		case 18:
			return 10;
		case 6:
			return 11;
		case 21:
			return 12;
		case 33:
			return 13;
		case 16:
			return 14;
		case 4:
			return 15;
		case 23:
			return 16;
		case 35:
			return 17;
		case 14:
			return 18;
		case 2:
			return 19;
		default:
	}
	return -1;
}

bool func_240(var uParam0, float fParam1)//Position - 0x17EAF5
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = uParam0->f_10.f_8 > (90f + 5f);
	bVar1 = fParam1 < (90f - 5f);
	bVar2 = fParam1 > 0f;
	return ((bVar0 && bVar1) && bVar2);
}

bool func_241(int iParam0, int iParam1)//Position - 0x17EB2F
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0))
	{
		return 0;
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam1);
}

int func_242(int iParam0, bool bParam1)//Position - 0x17F4C1
{
	if (bParam1)
	{
		return 3;
	}
	return 0;
}

int func_243()//Position - 0x17F4EF
{
	return joaat("vw_prop_casino_roulette_01");
}

int func_244()//Position - 0x17F4FC
{
	return joaat("vw_prop_casino_roulette_01b");
}

void func_245(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x185B2D
{
	int iVar0;
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	MISC::SET_BIT(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

int func_246()//Position - 0x18B286
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_828();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (MONEY::NETWORK_CASINO_CAN_BUY_CHIPS_PVC())
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = MONEY::NETWORK_GET_EVC_BALANCE();
	}
	return iVar1;
}

bool func_247(int* iParam0)//Position - 0x18C7EF
{
	return BitTest(*iParam0, 16);
}

bool func_248(var uParam0)//Position - 0x18F03D
{
	return BitTest(*uParam0, 10);
}

bool func_249()//Position - 0x18FA26
{
	int iVar0;
	iVar0 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	return ((iVar0 == joaat("rm_Elevator_01") || iVar0 == joaat("rm_Stairs_01")) || iVar0 == joaat("rm_Toilet_02"));
}

int func_250(var uParam0)//Position - 0x1D75
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_10__::func_613(PLAYER::PLAYER_PED_ID(), &(uParam0->f_16[uParam0->f_9 /*14*/])) && __LIB_10__::func_612(PLAYER::PLAYER_PED_ID(), uParam0->f_16[uParam0->f_9 /*14*/].f_3, uParam0->f_16[uParam0->f_9 /*14*/].f_13))
		{
			return 1;
		}
		else
		{
			uParam0->f_9 = (uParam0->f_9 + 1 % 31);
		}
		iVar0++;
	}
	return 0;
}

int func_251(int iParam0, struct<3> Param1, int iParam2)//Position - 0x1EB8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam2 == 3 || iParam2 == 4)
		{
			if (__LIB_2__::func_336(ENTITY::GET_ENTITY_HEADING(iParam0), (Param1.f_2 - 180f), 55f))
			{
				return 1;
			}
		}
		else if (__LIB_2__::func_336(ENTITY::GET_ENTITY_HEADING(iParam0), Param1.f_2, 55f))
		{
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0)//Position - 0x4E34A
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
	iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
	iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar0, iVar1);
	if ((((((((((((((((iVar0 != 10 && iVar0 != 15) && iVar0 != 17) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("DRAW_10"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("DRAW_15"), 0)) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR100")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR101")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR102")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR103")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR104")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR105")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR106")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR107")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR108")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR109")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR110")) && iVar2 != joaat("DLC_MP_BEACH_F_LOWR111"))
	{
		return 0;
	}
	return 1;
}

int func_253(int iParam0)//Position - 0x4E452
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
	iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
	iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar0, iVar1);
	if (((((((((((((((((((((((((((((((((((((((iVar0 != 14 && iVar0 != 16) && iVar0 != 18) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("DRAW_14"), 0)) && iVar2 != joaat("DLC_MP_VAL_M_LEGS1_0")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_0")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_1")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_2")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_3")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_4")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_5")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_6")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_7")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_8")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_9")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_10")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR0_11")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_0")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_1")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_2")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_3")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_4")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_5")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_6")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_7")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_8")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_9")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR1_10")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_0")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_1")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_2")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_3")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_4")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_5")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_6")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_7")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_8")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_9")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_10")) && iVar2 != joaat("DLC_MP_BEACH_M_LOWR2_11"))
	{
		return 0;
	}
	return 1;
}

void func_254(int iParam0, var uParam1, var uParam2)//Position - 0x4EC4F
{
	switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		case joaat("MP_F_Freemode_01"):
			if (iParam0 < 3)
			{
				*uParam1 = 15;
				*uParam2 = 15;
			}
			else
			{
				*uParam1 = 17;
				*uParam2 = 18;
			}
			break;
		case joaat("MP_M_Freemode_01"):
			if (iParam0 < 2)
			{
				*uParam1 = 14;
			}
			else if (iParam0 < 4)
			{
				*uParam1 = 16;
			}
			else if (iParam0 < 6)
			{
				*uParam1 = 18;
			}
			break;
	}
}

int func_255(int iParam0)//Position - 0x2B37
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 4);
	}
	return 0;
}

int func_256(int iParam0)//Position - 0x35841
{
	if (__LIB_1__::func_563(205, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_257(int iParam0, var uParam1, int iParam2)//Position - 0x10114C
{
	uParam1->f_22.f_69[0] = "";
	uParam1->f_22.f_69[1] = "";
	uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam1->f_22.f_79 = "Garage_Door_Close";
	uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam1->f_22.f_87 = "Garage_Door_Close";
	uParam1->f_22.f_3 = "anim@apt_trans@garage";
	uParam1->f_22.f_5 = "gar_open_1_left";
	uParam1->f_22.f_34 = 0f;
	uParam1->f_22.f_35 = 0.45f;
	uParam1->f_22.f_4 = "";
	uParam1->f_22.f_6 = "";
	uParam1->f_22.f_40 = 0.1f;
	uParam1->f_22.f_59 = { -305.6156f, -1811.623f, 43.7338f };
	uParam1->f_22.f_62 = { -3.1585f, 0f, 167.2231f };
	uParam1->f_22.f_65 = 52.1727f;
	uParam1->f_22.f_66 = 0.2f;
	switch (iParam2)
	{
		case 0:
			uParam1->f_22.f_13 = { -360.5857f, -1866.0913f, 21.5786f };
			uParam1->f_22.f_16 = { -2.5741f, -0.0486f, 156.2227f };
			uParam1->f_22.f_19 = 44.2101f;
			uParam1->f_22.f_20 = { 0f, 0f, 0f };
			uParam1->f_22.f_23 = { 0f, 0f, 0f };
			uParam1->f_22.f_26 = 0f;
			uParam1->f_22.f_28 = { -364.237f, -1874.903f, 19.51f };
			uParam1->f_22.f_31 = { 0f, 0f, -56.25f };
			break;
		case 1:
			uParam1->f_22.f_13 = { -372.5756f, -1867.3385f, 23.6148f };
			uParam1->f_22.f_16 = { -11.1339f, -0.0009f, 164.4299f };
			uParam1->f_22.f_19 = 41.4256f;
			uParam1->f_22.f_20 = { 0f, 0f, 0f };
			uParam1->f_22.f_23 = { 0f, 0f, 0f };
			uParam1->f_22.f_26 = 0f;
			uParam1->f_22.f_28 = { -375.853f, -1878.3f, 19.528f };
			uParam1->f_22.f_31 = { 0f, 0f, -47f };
			break;
		case 2:
			uParam1->f_22.f_13 = { -385.7779f, -1868.6774f, 23.7628f };
			uParam1->f_22.f_16 = { -11.0499f, -0.0187f, 173.4695f };
			uParam1->f_22.f_19 = 36.5515f;
			uParam1->f_22.f_20 = { 0f, 0f, 0f };
			uParam1->f_22.f_23 = { 0f, 0f, 0f };
			uParam1->f_22.f_26 = 0f;
			uParam1->f_22.f_28 = { -387.012f, -1883.659f, 19.525f };
			uParam1->f_22.f_31 = { 0f, 0f, -40f };
			break;
		case 6:
		case 7:
			if (__LIB_3__::func_16(PLAYER::PLAYER_ID(), __LIB_3__::func_17(iParam0)) && (!func_3046() || iParam2 == 7))
			{
				uParam1->f_22.f_13 = { -397.58f, -1887.553f, 22.2998f };
				uParam1->f_22.f_16 = { -1.429f, -0.0057f, 5.8277f };
				uParam1->f_22.f_19 = 45.8457f;
				uParam1->f_22.f_40 = 0.1f;
				uParam1->f_22.f_20 = { -397.6456f, -1887.5483f, 22.2994f };
				uParam1->f_22.f_23 = { -1.429f, -0.0057f, 13.3423f };
				uParam1->f_22.f_26 = 45.8457f;
				uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
				uParam1->f_22.f_28 = { -399.731f, -1885.762f, 20.721f };
				uParam1->f_22.f_31 = { 0f, 0f, -56.5f };
				uParam1->f_22.f_5 = "ext_player";
				uParam1->f_22.f_34 = 0.1f;
				uParam1->f_22.f_35 = 0.4f;
				uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
				uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
				uParam1->f_22.f_72[0] = 0.251f;
				uParam1->f_22.f_72[1] = 0.35f;
				uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
				uParam1->f_22.f_80 = "";
				uParam1->f_22.f_79 = "";
				uParam1->f_22.f_88 = "";
				uParam1->f_22.f_87 = "";
				uParam1->f_22.f_4 = "";
				uParam1->f_22.f_6 = "";
			}
			else
			{
				uParam1->f_22.f_13 = { -394.8493f, -1886.1761f, 21.789f };
				uParam1->f_22.f_16 = { -0.9744f, 0f, 74.5255f };
				uParam1->f_22.f_19 = 50f;
				uParam1->f_22.f_40 = 0.1f;
				uParam1->f_22.f_20 = { -395.4853f, -1886.0001f, 21.7778f };
				uParam1->f_22.f_23 = { -0.9744f, 0f, 76.6543f };
				uParam1->f_22.f_26 = 50f;
				uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
				uParam1->f_22.f_28 = { -400.079f, -1884.535f, 20.532f };
				uParam1->f_22.f_31 = { 0f, 0f, 109.75f };
				uParam1->f_22.f_5 = "buzz_short";
				uParam1->f_22.f_34 = 0.2f;
				uParam1->f_22.f_35 = 0.8f;
				uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
				uParam1->f_22.f_72[0] = 0.353f;
				uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
				uParam1->f_22.f_80 = "";
				uParam1->f_22.f_79 = "";
				uParam1->f_22.f_88 = "";
				uParam1->f_22.f_87 = "";
				if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
				{
					uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
					uParam1->f_22.f_6 = "enter";
				}
				else
				{
					uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
					uParam1->f_22.f_6 = "enter";
				}
			}
			break;
	}
}

void func_258(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x11BF4D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		if (!__LIB_3__::func_118(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)) && !__LIB_3__::func_118(__LIB_0__::func_582(), __LIB_3__::func_103(iParam0)))
		{
			bVar1 = false;
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_264(iVar0, 1, 1) && iVar0 != PLAYER::PLAYER_ID())
				{
					if ((((__LIB_3__::func_118(iVar0, __LIB_3__::func_103(iParam0)) && __LIB_2__::func_378(iVar0, 0)) && __LIB_2__::func_378(iVar0, 1)) && __LIB_2__::func_378(iVar0, 4)) && func_3281(iVar0, 11, 1))
					{
						Var3 = { __LIB_1__::func_267(iVar0) };
						if (__LIB_0__::func_585(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "NIGHTCLUB_F_BLIP" /* GXT: Friend's Nightclub */);
							}
							else
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
				iVar2++;
			}
			if (bVar1)
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "NIGHTCLUB_R_BLIP" /* GXT: Rival's Nightclub */);
			}
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_614" /* GXT: Nightclub Property */);
		}
	}
}

int func_259(int iParam0)//Position - 0x126BFE
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_103(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (__LIB_3__::func_804(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar1 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (iVar1 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_425(iVar1, 0))
		{
			if (((__LIB_3__::func_803(iVar1) == 250 || __LIB_3__::func_803(iVar1) == 249) || __LIB_3__::func_803(iVar1) == 237) || __LIB_3__::func_803(iVar1) == 238)
			{
				return 1;
			}
		}
	}
	if (__LIB_3__::func_118(PLAYER::PLAYER_ID(), iVar0) || func_3384(iParam0))
	{
		return 0;
	}
	else if ((iVar1 != __LIB_0__::func_160() && __LIB_3__::func_118(iVar1, iVar0)) && func_3281(iVar1, 11, 1))
	{
		return 0;
	}
	return 1;
}

int func_260()//Position - 0x129052
{
	return __LIB_4__::func_924(func_3466());
}

int func_261()//Position - 0x1294AC
{
	return __LIB_4__::func_923(func_3502(), 1, 0);
}

void func_262(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x157EF8
{
	uParam1->f_405 = { __LIB_3__::func_423(iParam0) };
	uParam1->f_21 = "AM_MP_CREATOR_TRAILER";
	uParam1->f_22.f_69[0] = "PUSH";
	uParam1->f_22.f_69[1] = "LIMIT";
	uParam1->f_22.f_72[0] = 0.271f;
	uParam1->f_22.f_72[1] = 0.411f;
	uParam1->f_22.f_75 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
	uParam1->f_3 = 0;
	uParam1->f_285[0 /*3*/] = { -2.3f, 9.69f, 0.06f };
	uParam1->f_285.f_28[0 /*3*/] = { 2.3f, 9.69f, 2.305f };
	uParam1->f_285.f_56[0] = 1f;
	uParam1->f_285.f_94[0] = 349.3822f;
	switch (iParam0)
	{
		case 82:
			if (__LIB_2__::func_399() == 0 || func_50(PLAYER::PLAYER_ID()))
			{
			}
			break;
	}
}

void func_263(var uParam0)//Position - 0x170938
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366, 15))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if ((((bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1)) && !BitTest(Global_2689235[bVar2 /*453*/].f_318, 7)) && !func_45(bVar2)) && !func_45(PLAYER::PLAYER_ID()))
							{
								if (BitTest(Global_1853348[bVar2 /*834*/].f_267.f_366, 14))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_264(int iParam0, int iParam1)//Position - 0x1B95C8
{
	int iVar0;
	iVar0 = __LIB_3__::func_977(iParam1);
	if (iParam0 == 5 && iVar0 != -1)
	{
		return __LIB_3__::func_806(iVar0, 1);
	}
	return 0;
}

float func_265(int* iParam0, var uParam1, int iParam2)//Position - 0x1BA3C8
{
	if ((((((((!__LIB_4__::func_710(uParam1->f_31) && !__LIB_1__::func_188(uParam1->f_31)) && !__LIB_0__::func_630(uParam1->f_31, -1)) && !func_68(uParam1->f_31, 0, 0)) && !func_12(PLAYER::PLAYER_ID())) && !func_9(PLAYER::PLAYER_ID())) && !iParam0->f_2481) && !iParam0->f_2482) && !iParam0->f_2483)
	{
		switch (uParam1->f_33)
		{
			case 2:
				switch (iParam2)
				{
					case 0:
						return 1.5f;
						break;
					case 1:
						return 1.5f;
						break;
					case 2:
						return 1.5f;
						break;
					case 3:
						return 1.5f;
						break;
				}
				break;
			case 6:
				switch (iParam2)
				{
					case 0:
						return 1.5f;
						break;
					case 1:
						return 1.5f;
						break;
					case 2:
						return 1.5f;
						break;
					case 3:
						return 1.5f;
						break;
				}
				break;
			case 10:
				switch (iParam2)
				{
					case 0:
						return 1f;
						break;
					case 1:
						return 1f;
						break;
					case 2:
						return 1f;
						break;
					case 3:
						return 1f;
						break;
					case 4:
						return 1f;
						break;
					case 5:
						return 1f;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				return 1f;
				break;
			case 1:
				return 1f;
				break;
			case 2:
				return 1f;
				break;
			case 3:
				return 1f;
				break;
			case 4:
				return 1f;
				break;
			case 5:
				return 1f;
				break;
			case 6:
				return 1f;
				break;
			}
	}
	return 0f;
}

void func_266(var uParam0)//Position - 0x1BFA90
{
	__LIB_1__::func_845(&(uParam0->f_7), 10);
}

void func_267(var uParam0)//Position - 0x1C126A
{
	if (uParam0->f_6 != -1)
	{
		__LIB_6__::func_404(&(uParam0->f_6));
		uParam0->f_6 = -1;
		HUD::CLEAR_HELP(true);
	}
}

char* func_268(char* sParam0)//Position - 0x48EF
{
	return sParam0;
}

int func_269(int iParam0)//Position - 0x2C201
{
	int iVar0;
	if (iParam0 != __LIB_0__::func_160())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] != 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_270()//Position - 0x2C355
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = SYSTEM::ROUND((50f * Global_262145.f_111 /* Tunable: MAX_ARMOR_MULTIPLIER */));
		__LIB_1__::func_597(817, iVar0, -1, 1, 0);
		iVar1 = PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID());
		iVar2 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
		iVar3 = (iVar1 - iVar2);
		PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), (iVar2 + iVar3));
	}
}

void func_271()//Position - 0x3404A
{
	__LIB_1__::func_597(1725, Global_2359296[__LIB_0__::func_153() /*5567*/], -1, 1, 0);
	__LIB_1__::func_597(1726, Global_2359296[__LIB_0__::func_153() /*5567*/].f_1[0], -1, 1, 0);
	__LIB_1__::func_597(1727, Global_2359296[__LIB_0__::func_153() /*5567*/].f_1[1], -1, 1, 0);
	__LIB_1__::func_597(1728, Global_2359296[__LIB_0__::func_153() /*5567*/].f_1[2], -1, 1, 0);
	__LIB_1__::func_597(1729, Global_2359296[__LIB_0__::func_153() /*5567*/].f_1[3], -1, 1, 0);
	__LIB_1__::func_597(1730, Global_2359296[__LIB_0__::func_153() /*5567*/].f_1[4], -1, 1, 0);
}

int func_272()//Position - 0x3FAF0
{
	if (((SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 128f)) != 0 || SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 128f)) != 0) || SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 128f)) != 0) || SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 128f)) != 0)
	{
		return 1;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/))
		{
			return 1;
		}
	}
	return 0;
}

int func_273(int iParam0)//Position - 0x34835
{
	if (!__LIB_0__::func_114() && func_446(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0, int iParam1, int iParam2)//Position - 0x377F9
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar2 = iVar1;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			if ((((iVar3 != iParam1 && __LIB_1__::func_264(iVar3, 1, 1)) && func_5503(iVar3) == iParam0) && !__LIB_3__::func_998(iVar3)) && (iParam2 == -1 || __LIB_0__::func_338(iVar3) == iParam2))
			{
				MISC::SET_BIT(&uVar0, iVar3);
			}
		}
		iVar1++;
	}
	return uVar0;
}

struct<2> func_275(int iParam0, int iParam1, bool bParam2)//Position - 0x3F74F
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	Var0.f_1 = -1;
	if (!__LIB_4__::func_0(iParam0))
	{
		return Var0;
	}
	if ((__LIB_1__::func_264(iParam0, 0, 1) && iParam1 > -2) && iParam1 < 5)
	{
		if (iParam1 == -1)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if ((__LIB_2__::func_467(Global_1892703[iParam0 /*599*/].f_556.f_1[iVar1 /*2*/]) && __LIB_3__::func_809(Global_1892703[iParam0 /*599*/].f_556.f_1[iVar1 /*2*/])) && (!bParam2 || !func_621(Global_1892703[iParam0 /*599*/].f_556.f_1[iVar1 /*2*/])))
				{
					return Global_1892703[iParam0 /*599*/].f_556.f_1[iVar1 /*2*/];
				}
				iVar1++;
			}
		}
		else
		{
			iVar2 = iParam1;
			if (__LIB_2__::func_467(Global_1892703[iParam0 /*599*/].f_556.f_1[iVar2 /*2*/]) && __LIB_3__::func_809(Global_1892703[iParam0 /*599*/].f_556.f_1[iVar2 /*2*/]))
			{
				return Global_1892703[iParam0 /*599*/].f_556.f_1[iVar2 /*2*/];
			}
		}
	}
	return Var0;
}

int func_276(int iParam0)//Position - 0x648BC
{
	if ((__LIB_3__::func_996(PLAYER::PLAYER_ID()) && BitTest(Global_1946250.f_506, 31)) && iParam0 != func_1143(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_277(int iParam0)//Position - 0x689D1
{
	if (__LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0)) || (func_511(0) && __LIB_2__::func_590(__LIB_0__::func_582(), __LIB_2__::func_591(iParam0))))
	{
		return 1;
	}
	return 0;
}

int func_278()//Position - 0xB5778
{
	if (__LIB_0__::func_649(&Global_1578987) && !func_5488(&Global_1578987, 300000, 0))
	{
		return 1;
	}
	return 0;
}

void func_279(var uParam0)//Position - 0x1BB7B3
{
	__LIB_0__::func_492(&(uParam0->f_7), 12);
}

int func_280(var uParam0, var uParam1, var uParam2)//Position - 0x1BB924
{
	if ((uParam0->f_13 > 2 && (uParam1 || __LIB_0__::func_492(&(uParam0->f_7), 11))) && (uParam2 || uParam0->f_13 < 8))
	{
		return 1;
	}
	return 0;
}

bool func_281(var uParam0)//Position - 0x1BC50D
{
	return __LIB_0__::func_492(&(uParam0->f_7), 9);
}

int func_282(int iParam0)//Position - 0x5F7
{
	return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
}

void func_283(char* sParam0, int iParam1)//Position - 0x8131
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

void func_284(char* sParam0, int iParam1, int iParam2)//Position - 0x814D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

int func_285()//Position - 0x8270
{
	return __LIB_1__::func_556(8251, -1, 0);
}

int func_286()//Position - 0x82D2
{
	return (Global_262145.f_27177 /* Tunable: VC_CASINO_CHIP_MAX_LOSS_DAILY */ + __LIB_5__::func_873());
}

int func_287()//Position - 0x82E6
{
	return (Global_262145.f_27178 /* Tunable: VC_CASINO_CHIP_MAX_WIN_DAILY */ - __LIB_5__::func_873());
}

void func_288(int iParam0, int iParam1, int iParam2)//Position - 0xE2B7
{
	Global_23150.f_6126 = iParam0;
	Global_23150.f_6127 = iParam1;
	Global_23150.f_6128 = iParam2;
}

int func_289(int iParam0)//Position - 0xF113
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 79:
			iVar0 = 1;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 6:
			iVar0 = 4;
			break;
		case 77:
			iVar0 = 5;
			break;
		case 78:
			iVar0 = 6;
			break;
		case 80:
			iVar0 = 7;
			break;
		case 7:
			iVar0 = 8;
			break;
		case 36:
			iVar0 = 9;
			break;
		case 35:
			iVar0 = 10;
			break;
	}
	return iVar0;
}

int func_290(int iParam0)//Position - 0xF7FB
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 33:
		case 34:
		case 35:
		case 36:
		case 38:
			return 1;
		default:
	}
	return 0;
}

int func_291(int iParam0)//Position - 0xF880
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 33:
		case 34:
		case 35:
		case 36:
		case 38:
			return 1;
		default:
	}
	return 0;
}

void func_292(int iParam0)//Position - 0xD2B
{
	if (Global_2715699.f_3823 != iParam0)
	{
		Global_2715699.f_3823 = iParam0;
	}
}

void func_293(int iParam0)//Position - 0x55CB5
{
	if (Global_2715699.f_2846.f_158 != iParam0)
	{
		Global_2715699.f_2846.f_158 = iParam0;
	}
}

void func_294()//Position - 0x574A4
{
	if (!BitTest(Global_2715699.f_3823.f_2, 9))
	{
		MISC::SET_BIT(&(Global_2715699.f_3823.f_2), 9);
	}
}

int func_295(var uParam0, var uParam1)//Position - 0x155B18
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uParam1->f_109, true);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true), 10f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_12, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uParam1->f_109.f_12, true);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
	}
	Var0 = { Var0 };
	Var1 = { Var1 };
	Var0 = { 840.743f, -3238.231f, -98.529f };
	Var1 = { 834.221f, -3234.792f, -98.527f };
	if (Global_1946250.f_4073.f_382 == 0)
	{
		if (!BitTest(uParam1->f_188, 19))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_12, false))
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
				}
				if (!BitTest(uParam1->f_188, 10))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_1[0], false))
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(Global_1946250.f_3638.f_18[0 /*36*/].f_1, 0f, 0f, 0f);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_109.f_1[0], uParam1->f_109, "gr_Bunker_AT_Tunnel", 262144, 0, 0, -1, -1f, false, 2f);
						MISC::SET_BIT(&(uParam1->f_188), 10);
					}
				}
			}
			MISC::SET_BIT(&(uParam1->f_188), 19);
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_109))
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam1->f_109, 15f);
		}
		if (!BitTest(uParam1->f_188, 20))
		{
			if (__LIB_0__::func_529(uParam1->f_109, 903.197f, -3245.255f, -97.743f, 0) <= 2f)
			{
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_109.f_12, false, false);
				MISC::SET_BIT(&(uParam1->f_188), 20);
			}
		}
	}
	else if (__LIB_2__::func_413(&(Global_1946250.f_4073), 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
		{
			if (!BitTest(uParam1->f_188, 21))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 1f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[1], false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
					ENTITY::SET_ENTITY_COLLISION(uParam1->f_109.f_12, true, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_140[1], 835.203f, -3243.384f, -98.716f, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam1->f_140[1], -21f);
				}
				ENTITY::SET_ENTITY_COORDS(uParam1->f_109, Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 62.24f);
				TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(uParam1->f_109);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[1], false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_car_park_attendant@male@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_car_park_attendant@male@base", "base", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE_LOCALLY(uParam1->f_140[1], iVar2);
				}
				MISC::SET_BIT(&(uParam1->f_188), 21);
			}
			if (!BitTest(uParam1->f_188, 22))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_1[0], false)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam1->f_109))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_109.f_1[0], uParam1->f_109, "gr_Bunker_AT_Parking", 262144, 0, 0, -1, -1f, false, 2f);
				}
				MISC::SET_BIT(&(uParam1->f_188), 22);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_109))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam1->f_109, 5f);
			}
			if (__LIB_0__::func_529(uParam1->f_109, 834.228f, -3234.791f, -98.64f, 0) <= 2f)
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(uParam1->f_109, 2f, 10, false);
			}
		}
	}
	if (!Global_1946250.f_4073.f_386)
	{
		if ((BitTest(uParam1->f_188, 23) && CAM::DOES_CAM_EXIST(iLocal_139)) && CAM::IS_CAM_RENDERING(iLocal_139))
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_139, false);
			STREAMING::CLEAR_FOCUS();
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_Bunker_Enter_Interior_Cutscene_Scene");
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_109.f_12, 50f, 50f, 0f, true, false, false, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 50f, 50f, 0f, true, false, false, true);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_139))
		{
			iLocal_139 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			CAM::SET_CAM_PARAMS(iLocal_139, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				switch (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0))
				{
					case -1:
						CAM::SET_CAM_PARAMS(iLocal_139, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
						break;
					case 0:
						CAM::SET_CAM_PARAMS(iLocal_139, 831.9871f, -3228.3909f, -98.0253f, 1.6649f, 0f, -159.9397f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(145.3238f);
						break;
					default:
						CAM::SET_CAM_PARAMS(iLocal_139, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
						break;
				}
			}
			CAM::SET_CAM_ACTIVE(iLocal_139, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		if (!BitTest(uParam1->f_188, 23))
		{
			MISC::SET_BIT(&(uParam1->f_188), 23);
		}
	}
	return 0;
}

void func_296(bool bParam0)//Position - 0x182FD9
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 20);
	}
}

int func_297()//Position - 0x1D329E
{
	return Global_2714762.f_26;
}

int func_298(int iParam0, int iParam1)//Position - 0x38EB
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	else if (iParam1 < iParam0)
	{
		return iParam1;
	}
	return iParam0;
}

void func_299(int iParam0, char* sParam1)//Position - 0x4A08
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_300()//Position - 0x4FC4
{
	float fVar0;
	MISC::SET_GAME_PAUSED(true);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	fVar0 = 0f;
	while ((!PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || fVar0 < 1f)
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("VEUI_HDR_ALERT" /* GXT: ALERT */, "VE_DIR_MODE_SURE" /* GXT: Are you sure you want to launch Director Mode? */, 18, 0, false, -1, 0, 0, true, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + MISC::GET_FRAME_TIME());
	}
	MISC::SET_GAME_PAUSED(false);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		Global_112331 = 1;
	}
}

void func_301()//Position - 0x3487
{
	if (__LIB_9__::func_593())
	{
		if (Global_20469 == 0)
		{
			MOBILE::CELL_SET_INPUT(3);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(4);
		}
	}
}

void func_302()//Position - 0x3547
{
	if (__LIB_9__::func_593())
	{
		if (Global_20469 == 0)
		{
			MOBILE::CELL_SET_INPUT(4);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(3);
		}
	}
}

void func_303()//Position - 0x5741
{
	struct<2> Var0;
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_20219[Global_20211 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_20206 = 1;
	}
}

void func_304()//Position - 0x5ACC
{
	if (!Global_78319)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(Global_8136, 11))
			{
				if (!Global_20209)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
				}
				if (Global_78319)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_8136, 11);
			}
		}
	}
}

void func_305()//Position - 0x6218
{
	if (Global_78319 == 0)
	{
		Global_8143[14 /*15*/].f_4 = -99;
		Global_8143[4 /*15*/].f_4 = -99;
		if (Global_2725398)
		{
			if (__LIB_0__::func_39(14))
			{
				__LIB_6__::func_361(2, "CELL_2" /* GXT: Internet */, 2, "appInternet", 6, 1, 1, 0, 0);
				__LIB_6__::func_361(14, "CELL_29" /* GXT: Job List */, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				__LIB_6__::func_361(14, "CELL_29" /* GXT: Job List */, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			__LIB_6__::func_361(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_306(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x167C
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

int func_307(int iParam0, int iParam1)//Position - 0xFDE
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_308()//Position - 0x6BB95
{
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
}

int func_309(int iParam0)//Position - 0x77D38
{
	if (!__LIB_0__::func_114() && func_510(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_310()//Position - 0x78CEF
{
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(1, false);
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
}

int func_311(int iParam0, int iParam1)//Position - 0x78D0F
{
	struct<82> Var0;
	if (__LIB_0__::func_317(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_0__::func_120(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_312(int iParam0)//Position - 0x7A60D
{
	if (Global_100478 > 0)
	{
		return Global_106934.f_21[iParam0];
	}
	return Global_103950.f_21[iParam0];
}

int func_313(int iParam0)//Position - 0x7BBBD
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		*iParam0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_314(int* iParam0, int iParam1)//Position - 0x80F7C
{
	iParam0->f_21 = iParam1;
	if (!BitTest(iParam0->f_13, 26))
	{
		MISC::SET_BIT(&(iParam0->f_13), 26);
	}
}

void func_315(bool bParam0, bool bParam1)//Position - 0x866B0
{
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (bParam1)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

int func_316(int iParam0, struct<3> Param1, char* sParam2)//Position - 0x867D0
{
	int iVar0;
	int iVar1;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param1, sParam2);
	iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
	if (!iVar1 == 0)
	{
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_317(int* iParam0)//Position - 0x9370C
{
	int iVar0;
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_11__::func_161(iVar0, iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_318(int iParam0, int iParam1)//Position - 0x93C6F
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iParam1, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			PED::SET_PED_AS_ENEMY(iParam0, false);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
			PED::SET_PED_CAN_RAGDOLL(iParam0, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
			PED::SET_PED_DIES_WHEN_INJURED(iParam0, false);
			PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 174, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 169, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
		}
	}
}

int func_319(int iParam0)//Position - 0x95F5C
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_320(int iParam0)//Position - 0x95F7F
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return PED::IS_PED_INJURED(*iParam0);
	}
	return 0;
}

int func_321(int iParam0)//Position - 0x966FA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_322(int iParam0, int iParam1)//Position - 0x96E43
{
	int iVar0;
	iVar0 = 0;
	if (Global_100478 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_106934.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_106934.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_106934.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_106934.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_103950.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_103950.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_103950.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_103950.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

float func_323(int iParam0, struct<3> Param1)//Position - 0xF34D
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			fVar0 = __LIB_4__::func_305(ENTITY::GET_ENTITY_COORDS(iParam0, false), Param1, 1);
			return (fVar0 - ENTITY::GET_ENTITY_HEADING(iParam0));
		}
	}
	return 0f;
}

int func_324(int iParam0)//Position - 0x166CB
{
	int iVar0;
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, __LIB_0__::func_316(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

bool func_325(var uParam0, struct<2> Param1, Vector3 vParam2)//Position - 0x93BE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_326(int iParam0, struct<3> Param1, float fParam2)//Position - 0x947A
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var1 = { Param1 - Var0 };
	return ((Var1.f_0 * Var1.f_0) + (Var1.f_1 * Var1.f_1)) <= (fParam2 * fParam2);
}

void func_327(var uParam0)//Position - 0xB3F9
{
	int iVar0;
	float fVar1;
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_328(var uParam0, struct<3> Param1)//Position - 0xB499
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_329(var uParam0)//Position - 0xB4CA
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_330()//Position - 0xBAA1
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return Global_98551;
	}
	if (__LIB_0__::func_200())
	{
		return Global_98551;
	}
	return 318;
}

int func_331(int iParam0)//Position - 0xDE644
{
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_F_OUTFIT_SCUBA_16"):
			return 26970;
		case joaat("DLC_MP_AR_F_OUTFIT_12"):
			return 26971;
		case joaat("DLC_MP_IE_F_OUTFIT_2"):
			return 26972;
		case joaat("DLC_MP_X17_F_SPECIAL_6_0"):
			return 26973;
		case joaat("DLC_MP_BIKER_F_OUTFIT_11"):
			return 26974;
		case joaat("DLC_MP_STUNT_F_OUTFIT_5"):
			return 26975;
		case joaat("DLC_MP_SMUG_F_OUTFIT_1"):
			return 26976;
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_JBIB_2_1"):
			return 26977;
		case joaat("DLC_MP_STUNT_F_OUTFIT_8"):
			return 26978;
		case joaat("DLC_MP_HEIST_M_OUTFIT_20"):
			return 26979;
		case joaat("DLC_MP_HEIST_F_OUTFIT_20"):
			return 26979;
		case joaat("DLC_MP_X17_F_SPECIAL_4_0"):
			return 26980;
		case joaat("DLC_MP_X17_F_OUTFIT_GORKA_21"):
			return 26981;
		case joaat("CLO_GRF_O_1"):
			return 26982;
		case joaat("DLC_MP_LUXE_F_JBIB_1_8"):
			return 26983;
		case joaat("DLC_MP_X17_F_SPECIAL_9_0"):
			return 26984;
		case joaat("DLC_MP_X17_F_SPECIAL_9_5"):
			return 26985;
		case joaat("DLC_MP_HEIST_F_SPECIAL_1_1"):
			return 26986;
		case joaat("DLC_MP_IE_F_OUTFIT_11"):
			return 26987;
		case joaat("DLC_MP_BIKER_F_JBIB_23_1"):
			return 26988;
		case joaat("DLC_MP_BH_F_JBIB_11_17"):
		case joaat("DLC_MP_BH_F_JBIB_10_17"):
			return 26989;
		case joaat("DLC_MP_EXEC_F_OUTFIT_14"):
			return 26990;
		case joaat("DLC_MP_X17_F_JBIB_3_25"):
			return 26991;
		case joaat("DLC_MP_BH_F_JBIB_6_1"):
		case joaat("DLC_MP_BH_F_JBIB_1_1"):
			return 26992;
		case joaat("DLC_MP_LUXE2_F_JBIB_2_15"):
			return 26993;
		case joaat("DLC_MP_BH_F_JBIB_14_1"):
			return 26994;
		case joaat("DLC_MP_LUXE2_F_JBIB_2_12"):
			return 26995;
		case joaat("DLC_MP_LUXE2_F_JBIB_2_11"):
			return 26996;
		case joaat("DLC_MP_STUNT_F_JBIB_7_4"):
			return 26997;
		case joaat("DLC_MP_IE_F_JBIB_3_7"):
			return 26998;
		case joaat("DLC_MP_LUXE2_F_JBIB_2_1"):
			return 26999;
		case joaat("DLC_MP_JAN_F_OUTFIT_0"):
			return 27000;
		case joaat("DLC_MP_HEIST_F_OUTFIT_G_3"):
			return 27001;
		case joaat("DLC_MP_HEIST_M_OUTFIT_G_3"):
			return 27001;
		case joaat("DLC_MP_BH_F_JBIB_5_18"):
			return 27002;
		case joaat("DLC_MP_BH_F_JBIB_5_20"):
			return 27003;
		case joaat("DLC_MP_BH_F_JBIB_2_14"):
			return 27004;
		case joaat("DLC_MP_STUNT_F_JBIB_5_9"):
			return 27005;
		case joaat("DLC_MP_BH_F_JBIB_5_3"):
			return 27006;
		case joaat("DLC_MP_BH_F_JBIB_12_0"):
		case joaat("DLC_MP_BH_F_JBIB_13_0"):
			return 27007;
		case joaat("DLC_MP_STUNT_F_JBIB_5_1"):
			return 27008;
		case joaat("DLC_MP_BH_F_JBIB_4_2"):
			return 27009;
		case joaat("DLC_MP_HEIST_F_OUTFIT_J_2"):
			return 27010;
		case joaat("DLC_MP_HEIST_M_OUTFIT_J_2"):
			return 27010;
		case joaat("DLC_MP_STUNT_F_JBIB_5_6"):
			return 27011;
		case joaat("DLC_MP_GR_F_JBIB_21_12"):
			return 27012;
		case joaat("DLC_MP_BH_F_JBIB_4_5"):
			return 27013;
		case joaat("DLC_MP_GR_F_JBIB_21_20"):
			return 27014;
		case joaat("DLC_MP_BH_F_JBIB_7_1"):
			return 27015;
		case joaat("DLC_MP_BH_F_JBIB_8_1"):
			return 27015;
		case joaat("DLC_MP_SMUG_F_JBIB_2_15"):
			return 27016;
		case joaat("DLC_MP_IE_F_JBIB_17_4"):
		case joaat("DLC_MP_IE_F_JBIB_14_4"):
			return 27017;
		case joaat("DLC_MP_IE_F_JBIB_14_21"):
			return 27018;
		case joaat("DLC_MP_IE_F_JBIB_17_9"):
		case joaat("DLC_MP_IE_F_JBIB_14_9"):
			return 27019;
		case joaat("DLC_MP_BH_F_JBIB_7_14"):
			return 27020;
		case joaat("DLC_MP_BH_F_JBIB_8_14"):
			return 27020;
		case joaat("DLC_MP_BIKER_F_JBIB_31_1"):
			return 27021;
		case joaat("DLC_MP_SMUG_F_JBIB_2_7"):
			return 27022;
		case joaat("DLC_MP_BH_F_JBIB_7_7"):
			return 27023;
		case joaat("DLC_MP_BH_F_JBIB_8_7"):
			return 27023;
		case joaat("DLC_MP_SMUG_F_JBIB_2_23"):
			return 27024;
		case joaat("DLC_MP_STUNT_F_JBIB_5_12"):
			return 27025;
		case joaat("DLC_MP_SMUG_F_JBIB_2_19"):
			return 27026;
		case joaat("DLC_MP_STUNT_F_JBIB_6_18"):
			return 27027;
		case joaat("DLC_MP_IE_F_JBIB_17_0"):
			return 27028;
		case joaat("DLC_MP_EXEC_F_JBIB_5_0"):
			return 27029;
		case joaat("DLC_MP_IE_F_JBIB_17_7"):
			return 27030;
		case joaat("DLC_MP_BH_F_JBIB_4_18"):
			return 27031;
		case joaat("DLC_MP_BH_F_JBIB_0_17"):
			return 27032;
		case joaat("DLC_MP_LUXE_F_JBIB_3_0"):
			return 27033;
		case joaat("DLC_MP_IE_F_JBIB_4_8"):
			return 27034;
		case joaat("DLC_MP_HEIST_F_OUTFIT_L_0"):
			return 27035;
		case joaat("DLC_MP_HEIST_M_OUTFIT_L_0"):
			return 27035;
		case joaat("DLC_MP_HEIST_F_SPECIAL_0_0"):
			return 27036;
		case joaat("DLC_MP_GR_F_JBIB_20_15"):
			return 27037;
		case joaat("DLC_MP_BH_F_JBIB_0_2"):
			return 27038;
		case joaat("DLC_MP_IE_F_JBIB_1_9"):
		case joaat("DLC_MP_IE_F_JBIB_18_9"):
			return 27039;
		case joaat("DLC_MP_LTS_F_JBIB_0_0"):
			return 27040;
		case joaat("DLC_MP_LOW2_F_JBIB_3_12"):
			return 27041;
		case joaat("DLC_MP_IE_F_JBIB_4_5"):
			return 27042;
		case joaat("DLC_MP_GR_F_JBIB_20_24"):
			return 27043;
		case joaat("DLC_MP_SMUG_F_JBIB_3_8"):
			return 27044;
		case joaat("DLC_MP_IE_F_JBIB_4_22"):
			return 27045;
		case joaat("DLC_MP_GR_F_JBIB_19_16"):
			return 27046;
		case joaat("DLC_MP_HEIST_F_JBIB_0_3"):
			return 27047;
		case joaat("DLC_MP_HEIST_F_JBIB_16_5"):
			return 27048;
		case joaat("DLC_MP_HEIST_F_JBIB_17_5"):
			return 27048;
		case joaat("DLC_MP_SMUG_F_JBIB_3_5"):
			return 27049;
		case joaat("DLC_MP_SMUG_F_JBIB_3_6"):
		case joaat("DLC_MP_SMUG_F_SPECIAL_0_6"):
			return 27050;
		case joaat("DLC_MP_LUXE_F_JBIB_4_3"):
			return 27051;
		case joaat("CLO_S2F_D_7"):
			return 27052;
		case joaat("DLC_MP_GR_F_JBIB_19_23"):
			return 27053;
		case joaat("DLC_MP_GR_F_JBIB_0_13"):
			return 27054;
		case joaat("DLC_MP_GR_F_JBIB_1_13"):
			return 27054;
		case joaat("CLO_S2F_D_18"):
			return 27055;
		case joaat("DLC_MP_EXEC_F_JBIB_4_2"):
			return 27056;
		case joaat("CLO_HP_F_D_10"):
			return 27057;
		case joaat("DLC_MP_LUXE_F_JBIB_4_18"):
			return 27058;
		case joaat("DLC_MP_IE_F_JBIB_7_5"):
			return 27059;
		case joaat("CLO_BIF_DECL_67"):
			return 27060;
		case joaat("DLC_MP_BH_F_JBIB_16_1"):
			return 27061;
		case joaat("DLC_MP_LOW_F_JBIB_3_1"):
			return 27062;
		case joaat("DLC_MP_IE_F_JBIB_7_14"):
			return 27063;
		case joaat("DLC_MP_GR_F_JBIB_15_10"):
			return 27064;
		case joaat("DLC_MP_GR_F_JBIB_16_10"):
			return 27064;
		case joaat("DLC_MP_GR_F_JBIB_14_6"):
			return 27065;
		case joaat("DLC_MP_HEIST_F_SPECIAL2_1_0"):
		case joaat("DLC_MP_IE_F_JBIB_7_12"):
		case joaat("DLC_MP_IE_F_TORSO_0_0"):
			return 27066;
		case joaat("CLO_SMF_DECL_16"):
			return 27067;
		case joaat("CLO_S1F_DEC_23"):
			return 27068;
		case joaat("CLO_SMF_DECL_15"):
			return 27069;
		case joaat("CLO_BIF_DECL_2"):
			return 27070;
		case joaat("CLO_SMF_DECL_7"):
			return 27071;
		case joaat("CLO_HP_F_D_9"):
			return 27072;
		case joaat("DLC_MP_EXEC_F_JBIB_9_5"):
			return 27073;
		case joaat("CLO_S2F_D_23"):
			return 27074;
		case joaat("CLO_SMF_DECL_5"):
			return 27075;
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_JBIB_18_1"):
			return 27076;
		case joaat("CLO_AWF_DECL_23"):
			return 27077;
		case joaat("CLO_BIF_DECL_49"):
			return 27078;
		case joaat("CLO_HALF_D_10"):
			return 27079;
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return 27080;
		case joaat("CLO_LXF_DEC_35"):
			return 27081;
		case joaat("CLO_HST_F_A_0"):
			return 27082;
		case joaat("CLO_HST_F_A_9"):
			return 27083;
		case joaat("CLO_BHF_DECL_19"):
			return 27084;
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
			return 27085;
		case joaat("CLO_EXF_DECL_3"):
			return 27086;
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 27087;
		case joaat("DLC_MP_XMAS2_F_BERD_2_0"):
			return 27088;
		case joaat("DLC_MP_VWD_F_JBIB_14_0"):
		case joaat("DLC_MP_VWD_F_JBIB_13_0"):
			return 27120;
		case joaat("DLC_MP_VWD_F_JBIB_13_1"):
		case joaat("DLC_MP_VWD_F_JBIB_14_1"):
			return 27121;
		case joaat("DLC_MP_VWD_F_JBIB_13_2"):
		case joaat("DLC_MP_VWD_F_JBIB_14_2"):
			return 27122;
		case joaat("DLC_MP_VWD_F_JBIB_13_3"):
		case joaat("DLC_MP_VWD_F_JBIB_14_3"):
			return 27123;
		case joaat("DLC_MP_VWD_F_JBIB_13_4"):
		case joaat("DLC_MP_VWD_F_JBIB_14_4"):
			return 27124;
		case joaat("DLC_MP_VWD_F_JBIB_13_5"):
		case joaat("DLC_MP_VWD_F_JBIB_14_5"):
			return 27125;
		case joaat("DLC_MP_VWD_F_JBIB_13_6"):
		case joaat("DLC_MP_VWD_F_JBIB_14_6"):
			return 27126;
		case joaat("DLC_MP_VWD_F_JBIB_18_5"):
			return 27127;
		case joaat("DLC_MP_VWD_F_PHEAD_0_0"):
			return 27128;
		case joaat("DLC_MP_VWD_F_PHEAD_0_1"):
			return 27129;
		case joaat("DLC_MP_VWD_F_PHEAD_0_2"):
			return 27130;
		case joaat("DLC_MP_VWD_F_PHEAD_0_3"):
			return 27131;
		case joaat("DLC_MP_VWD_F_PHEAD_0_4"):
			return 27132;
		case joaat("DLC_MP_VWD_F_PHEAD_0_5"):
			return 27133;
		case joaat("DLC_MP_VWD_F_PHEAD_0_6"):
			return 27134;
		case joaat("DLC_MP_VWD_F_PHEAD_0_7"):
			return 27135;
		case joaat("DLC_MP_VWD_F_PHEAD_0_8"):
			return 27136;
		case joaat("DLC_MP_VWD_F_PHEAD_0_9"):
			return 27137;
		case joaat("DLC_MP_VWD_F_PHEAD_0_10"):
			return 27138;
		case joaat("CLO_VWF_DECL_1"):
			return 27140;
		case joaat("CLO_VWF_DECL_3"):
			return 27141;
		case joaat("CLO_VWF_DECL_5"):
			return 27142;
		case joaat("CLO_VWF_DECL_7"):
			return 27143;
		case joaat("CLO_VWF_DECL_8"):
			return 27144;
		case joaat("CLO_VWF_DECL_9"):
			return 27145;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_SCUBA_16"):
			return 26970;
		case joaat("DLC_MP_AR_M_OUTFIT_12"):
			return 26971;
		case joaat("DLC_MP_IE_M_OUTFIT_1"):
			return 26972;
		case joaat("DLC_MP_X17_M_SPECIAL_6_0"):
			return 26973;
		case joaat("DLC_MP_BIKER_M_OUTFIT_11"):
			return 26974;
		case joaat("DLC_MP_STUNT_M_OUTFIT_5"):
			return 26975;
		case joaat("DLC_MP_SMUG_M_OUTFIT_1"):
			return 26976;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
			return 26977;
		case joaat("DLC_MP_STUNT_M_OUTFIT_8"):
			return 26978;
		case joaat("DLC_MP_X17_M_SPECIAL_4_0"):
			return 26980;
		case joaat("DLC_MP_X17_M_OUTFIT_GORKA_21"):
			return 26981;
		case joaat("DLC_MP_GR_M_OUTFIT_1"):
			return 26982;
		case joaat("DLC_MP_X17_M_SPECIAL_9_0"):
			return 26983;
		case joaat("DLC_MP_LUXE_M_JBIB_0_7"):
			return 26984;
		case joaat("DLC_MP_X17_M_SPECIAL_9_5"):
			return 26985;
		case joaat("DLC_MP_HEIST_M_SPECIAL_1_1"):
			return 26986;
		case joaat("DLC_MP_IE_M_OUTFIT_11"):
			return 26987;
		case joaat("DLC_MP_BIKER_M_JBIB_18_1"):
			return 26988;
		case joaat("DLC_MP_BH_M_JBIB_11_17"):
		case joaat("DLC_MP_BH_M_JBIB_10_17"):
			return 26989;
		case joaat("DLC_MP_X17_M_JBIB_3_25"):
			return 26990;
		case joaat("DLC_MP_BH_M_JBIB_6_1"):
			return 26991;
		case joaat("DLC_MP_LUXE2_M_JBIB_2_15"):
			return 26992;
		case joaat("DLC_MP_BH_M_JBIB_14_1"):
			return 26993;
		case joaat("DLC_MP_LUXE2_M_JBIB_2_12"):
			return 26994;
		case joaat("DLC_MP_LUXE2_M_JBIB_2_11"):
			return 26995;
		case joaat("DLC_MP_EXEC_M_OUTFIT_14"):
			return 26997;
		case joaat("DLC_MP_STUNT_M_JBIB_7_4"):
			return 26998;
		case joaat("DLC_MP_IE_M_JBIB_3_7"):
		case joaat("DLC_MP_IE_M_JBIB_2_7"):
			return 26999;
		case joaat("DLC_MP_LUXE2_M_JBIB_2_1"):
			return 27000;
		case joaat("DLC_MP_JAN_M_OUTFIT_0"):
			return 27014;
		case joaat("DLC_MP_BH_M_JBIB_5_18"):
			return 27002;
		case joaat("DLC_MP_BH_M_JBIB_5_20"):
			return 27003;
		case joaat("DLC_MP_BH_M_JBIB_2_14"):
			return 27004;
		case joaat("DLC_MP_STUNT_M_JBIB_5_9"):
			return 27005;
		case joaat("DLC_MP_BH_M_JBIB_5_3"):
			return 27006;
		case joaat("DLC_MP_BH_M_JBIB_13_0"):
		case joaat("DLC_MP_BH_M_JBIB_12_0"):
			return 27007;
		case joaat("DLC_MP_STUNT_M_JBIB_5_1"):
			return 27008;
		case joaat("DLC_MP_BH_M_JBIB_4_2"):
			return 27009;
		case joaat("DLC_MP_STUNT_M_JBIB_5_6"):
			return 26996;
		case joaat("DLC_MP_GR_M_JBIB_15_12"):
			return 27011;
		case joaat("DLC_MP_BH_M_JBIB_4_5"):
			return 27012;
		case joaat("DLC_MP_GR_M_JBIB_15_20"):
			return 27013;
		case joaat("DLC_MP_BH_M_JBIB_7_1"):
			return 27015;
		case joaat("DLC_MP_BH_M_JBIB_8_1"):
			return 27015;
		case joaat("DLC_MP_SMUG_M_JBIB_2_15"):
			return 27017;
		case joaat("DLC_MP_IE_M_JBIB_14_4"):
			return 27018;
		case joaat("DLC_MP_IE_M_JBIB_17_4"):
			return 27018;
		case joaat("DLC_MP_IE_M_JBIB_17_21"):
			return 27019;
		case joaat("DLC_MP_IE_M_JBIB_14_21"):
			return 27019;
		case joaat("DLC_MP_IE_M_JBIB_14_9"):
			return 27020;
		case joaat("DLC_MP_IE_M_JBIB_17_9"):
			return 27020;
		case joaat("DLC_MP_BH_M_JBIB_7_14"):
			return 27021;
		case joaat("DLC_MP_BH_M_JBIB_8_14"):
			return 27021;
		case joaat("DLC_MP_BIKER_M_JBIB_26_1"):
			return 27022;
		case joaat("DLC_MP_SMUG_M_JBIB_2_7"):
			return 27023;
		case joaat("DLC_MP_BH_M_JBIB_7_7"):
			return 27024;
		case joaat("DLC_MP_BH_M_JBIB_8_7"):
			return 27024;
		case joaat("DLC_MP_SMUG_M_JBIB_2_23"):
			return 27025;
		case joaat("DLC_MP_STUNT_M_JBIB_5_12"):
			return 27026;
		case joaat("DLC_MP_SMUG_M_JBIB_2_19"):
			return 27027;
		case joaat("DLC_MP_STUNT_M_JBIB_6_18"):
			return 27028;
		case joaat("DLC_MP_IE_M_JBIB_14_0"):
			return 27029;
		case joaat("DLC_MP_IE_M_JBIB_17_0"):
			return 27029;
		case joaat("DLC_MP_EXEC_M_JBIB_6_0"):
			return 27030;
		case joaat("DLC_MP_IE_M_JBIB_14_7"):
			return 27031;
		case joaat("DLC_MP_IE_M_JBIB_17_7"):
			return 27031;
		case joaat("DLC_MP_HEIST_M_SPECIAL_0_0"):
			return 27032;
		case joaat("DLC_MP_BH_M_JBIB_4_18"):
			return 27033;
		case joaat("DLC_MP_BH_M_JBIB_0_17"):
			return 27034;
		case joaat("DLC_MP_LUXE_M_JBIB_1_0"):
			return 27016;
		case joaat("DLC_MP_IE_M_JBIB_4_8"):
			return 27036;
		case joaat("DLC_MP_HEIST_M_JBIB_15_5"):
			return 27037;
		case joaat("DLC_MP_HEIST_M_JBIB_16_5"):
			return 27037;
		case joaat("DLC_MP_GR_M_JBIB_14_15"):
			return 27038;
		case joaat("DLC_MP_BH_M_JBIB_0_2"):
			return 27039;
		case joaat("DLC_MP_LTS_M_JBIB_0_0"):
			return 27040;
		case joaat("DLC_MP_IE_M_JBIB_1_9"):
			return 27041;
		case joaat("DLC_MP_IE_M_JBIB_18_9"):
			return 27041;
		case joaat("DLC_MP_LOW2_M_JBIB_5_10"):
			return 27042;
		case joaat("DLC_MP_IE_M_JBIB_4_5"):
			return 27043;
		case joaat("DLC_MP_GR_M_JBIB_14_24"):
			return 27044;
		case joaat("DLC_MP_SMUG_M_JBIB_3_8"):
			return 27045;
		case joaat("DLC_MP_IE_M_JBIB_4_22"):
			return 27046;
		case joaat("DLC_MP_GR_M_JBIB_13_16"):
			return 27047;
		case joaat("DLC_MP_HEIST_M_JBIB_0_3"):
			return 27048;
		case joaat("DLC_MP_SMUG_M_JBIB_3_5"):
			return 27049;
		case joaat("DLC_MP_SMUG_M_SPECIAL_0_6"):
		case joaat("DLC_MP_SMUG_M_JBIB_3_6"):
			return 27050;
		case joaat("DLC_MP_LUXE_M_JBIB_3_3"):
			return 27051;
		case joaat("CLO_S2M_D_16"):
			return 27052;
		case joaat("DLC_MP_GR_M_JBIB_13_23"):
			return 27053;
		case joaat("DLC_MP_BIKER_M_TORSO_2_0"):
		case joaat("DLC_MP_GR_M_JBIB_0_13"):
		case joaat("DLC_MP_GR_M_JBIB_1_13"):
			return 27054;
		case joaat("CLO_S2M_D_27"):
			return 27055;
		case joaat("DLC_MP_EXEC_M_JBIB_5_2"):
			return 27056;
		case joaat("CLO_HP_D_10"):
			return 27057;
		case joaat("DLC_MP_LUXE_M_JBIB_3_17"):
			return 27058;
		case joaat("DLC_MP_IE_M_JBIB_7_5"):
			return 27059;
		case joaat("DLC_MP_IE_M_JBIB_7_23"):
			return 27060;
		case joaat("CLO_BIM_DECL_67"):
			return 27061;
		case joaat("DLC_MP_BH_M_JBIB_16_1"):
			return 27062;
		case joaat("DLC_MP_LOW_M_JBIB_3_1"):
			return 27063;
		case joaat("DLC_MP_SMUG_M_JBIB_7_10"):
			return 27064;
		case joaat("DLC_MP_GR_M_JBIB_2_6"):
			return 27065;
		case joaat("DLC_MP_IE_M_JBIB_7_19"):
			return 27066;
		case joaat("CLO_SMM_DECL_16"):
			return 27067;
		case joaat("CLO_S1M_DEC_25"):
			return 27068;
		case joaat("CLO_SMM_DECL_15"):
			return 27069;
		case joaat("CLO_BIM_DECL_2"):
			return 27070;
		case joaat("CLO_SMM_DECL_7"):
			return 27071;
		case joaat("CLO_HP_D_9"):
			return 27072;
		case joaat("DLC_MP_EXEC_M_JBIB_10_5"):
			return 27073;
		case joaat("CLO_S2M_D_4"):
			return 27074;
		case joaat("CLO_SMM_DECL_5"):
			return 27075;
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_M_JBIB_14_1"):
			return 27076;
		case joaat("CLO_AWM_DECL_23"):
			return 27077;
		case joaat("CLO_BIM_DECL_49"):
			return 27078;
		case joaat("CLO_HALM_D_10"):
			return 27079;
		case joaat("DLC_MP_GR_M_DECL_5_8"):
			return 27080;
		case joaat("CLO_LXM_DEC_35"):
			return 27081;
		case joaat("CLO_HST_A_0"):
			return 27082;
		case joaat("CLO_EXM_DECL_3"):
			return 27083;
		case joaat("CLO_HST_A_9"):
			return 27084;
		case joaat("CLO_BHM_DECL_19"):
			return 27085;
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return 27086;
		case joaat("DLC_MP_IE_M_BERD_7_0"):
			return 27087;
		case joaat("DLC_MP_XMAS2_M_BERD_2_0"):
			return 27088;
		case joaat("DLC_MP_VWD_M_JBIB_15_0"):
		case joaat("DLC_MP_VWD_M_JBIB_16_0"):
			return 27120;
		case joaat("DLC_MP_VWD_M_JBIB_15_1"):
		case joaat("DLC_MP_VWD_M_JBIB_16_1"):
			return 27121;
		case joaat("DLC_MP_VWD_M_JBIB_15_2"):
		case joaat("DLC_MP_VWD_M_JBIB_16_2"):
			return 27122;
		case joaat("DLC_MP_VWD_M_JBIB_15_3"):
		case joaat("DLC_MP_VWD_M_JBIB_16_3"):
			return 27123;
		case joaat("DLC_MP_VWD_M_JBIB_16_4"):
		case joaat("DLC_MP_VWD_M_JBIB_15_4"):
			return 27124;
		case joaat("DLC_MP_VWD_M_JBIB_16_5"):
		case joaat("DLC_MP_VWD_M_JBIB_15_5"):
			return 27125;
		case joaat("DLC_MP_VWD_M_JBIB_16_6"):
		case joaat("DLC_MP_VWD_M_JBIB_15_6"):
			return 27126;
		case joaat("DLC_MP_VWD_M_JBIB_20_5"):
			return 27127;
		case joaat("DLC_MP_VWD_M_PHEAD_0_0"):
			return 27128;
		case joaat("DLC_MP_VWD_M_PHEAD_0_1"):
			return 27129;
		case joaat("DLC_MP_VWD_M_PHEAD_0_2"):
			return 27130;
		case joaat("DLC_MP_VWD_M_PHEAD_0_3"):
			return 27131;
		case joaat("DLC_MP_VWD_M_PHEAD_0_4"):
			return 27132;
		case joaat("DLC_MP_VWD_M_PHEAD_0_5"):
			return 27133;
		case joaat("DLC_MP_VWD_M_PHEAD_0_6"):
			return 27134;
		case joaat("DLC_MP_VWD_M_PHEAD_0_7"):
			return 27135;
		case joaat("DLC_MP_VWD_M_PHEAD_0_8"):
			return 27136;
		case joaat("DLC_MP_VWD_M_PHEAD_0_9"):
			return 27137;
		case joaat("DLC_MP_VWD_M_PHEAD_0_10"):
			return 27138;
		case joaat("CLO_VWM_DECL_1"):
			return 27140;
		case joaat("CLO_VWM_DECL_3"):
			return 27141;
		case joaat("CLO_VWM_DECL_5"):
			return 27142;
		case joaat("CLO_VWM_DECL_7"):
			return 27143;
		case joaat("CLO_VWM_DECL_8"):
			return 27144;
		case joaat("CLO_VWM_DECL_9"):
			return 27145;
		default:
	}
	return 0;
}

int func_332(int iParam0, int iParam1, int iParam2)//Position - 0xDF561
{
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_F_OUTFIT_SCUBA_16"):
		case joaat("DLC_MP_AR_F_OUTFIT_12"):
		case joaat("DLC_MP_IE_F_OUTFIT_2"):
		case joaat("DLC_MP_X17_F_SPECIAL_6_0"):
		case joaat("DLC_MP_BIKER_F_OUTFIT_11"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_5"):
		case joaat("DLC_MP_SMUG_F_OUTFIT_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_JBIB_2_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_8"):
		case joaat("DLC_MP_HEIST_M_OUTFIT_20"):
		case joaat("DLC_MP_HEIST_F_OUTFIT_20"):
		case joaat("DLC_MP_X17_F_SPECIAL_4_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_GORKA_21"):
		case joaat("CLO_GRF_O_1"):
		case joaat("DLC_MP_LUXE_F_JBIB_1_8"):
		case joaat("DLC_MP_X17_F_SPECIAL_9_0"):
		case joaat("DLC_MP_X17_F_SPECIAL_9_5"):
		case joaat("DLC_MP_HEIST_F_SPECIAL_1_1"):
		case joaat("DLC_MP_IE_F_OUTFIT_11"):
		case joaat("DLC_MP_BIKER_F_JBIB_23_1"):
		case joaat("DLC_MP_BH_F_JBIB_11_17"):
		case joaat("DLC_MP_BH_F_JBIB_10_17"):
		case joaat("DLC_MP_EXEC_F_OUTFIT_14"):
		case joaat("DLC_MP_X17_F_JBIB_3_25"):
		case joaat("DLC_MP_BH_F_JBIB_6_1"):
		case joaat("DLC_MP_BH_F_JBIB_1_1"):
		case joaat("DLC_MP_LUXE2_F_JBIB_2_15"):
		case joaat("DLC_MP_BH_F_JBIB_14_1"):
		case joaat("DLC_MP_LUXE2_F_JBIB_2_12"):
		case joaat("DLC_MP_LUXE2_F_JBIB_2_11"):
		case joaat("DLC_MP_STUNT_F_JBIB_7_4"):
		case joaat("DLC_MP_IE_F_JBIB_3_7"):
		case joaat("DLC_MP_LUXE2_F_JBIB_2_1"):
		case joaat("DLC_MP_JAN_F_OUTFIT_0"):
		case joaat("DLC_MP_HEIST_F_OUTFIT_G_3"):
		case joaat("DLC_MP_HEIST_M_OUTFIT_G_3"):
		case joaat("DLC_MP_BH_F_JBIB_5_18"):
		case joaat("DLC_MP_BH_F_JBIB_5_20"):
		case joaat("DLC_MP_BH_F_JBIB_2_14"):
		case joaat("DLC_MP_STUNT_F_JBIB_5_9"):
		case joaat("DLC_MP_BH_F_JBIB_5_3"):
		case joaat("DLC_MP_BH_F_JBIB_12_0"):
		case joaat("DLC_MP_BH_F_JBIB_13_0"):
		case joaat("DLC_MP_STUNT_F_JBIB_5_1"):
		case joaat("DLC_MP_BH_F_JBIB_4_2"):
		case joaat("DLC_MP_HEIST_F_OUTFIT_J_2"):
		case joaat("DLC_MP_HEIST_M_OUTFIT_J_2"):
		case joaat("DLC_MP_STUNT_F_JBIB_5_6"):
		case joaat("DLC_MP_GR_F_JBIB_21_12"):
		case joaat("DLC_MP_BH_F_JBIB_4_5"):
		case joaat("DLC_MP_GR_F_JBIB_21_20"):
		case joaat("DLC_MP_BH_F_JBIB_7_1"):
		case joaat("DLC_MP_BH_F_JBIB_8_1"):
		case joaat("DLC_MP_SMUG_F_JBIB_2_15"):
		case joaat("DLC_MP_IE_F_JBIB_17_4"):
		case joaat("DLC_MP_IE_F_JBIB_14_4"):
		case joaat("DLC_MP_IE_F_JBIB_14_21"):
		case joaat("DLC_MP_IE_F_JBIB_17_9"):
		case joaat("DLC_MP_IE_F_JBIB_14_9"):
		case joaat("DLC_MP_BH_F_JBIB_7_14"):
		case joaat("DLC_MP_BH_F_JBIB_8_14"):
		case joaat("DLC_MP_BIKER_F_JBIB_31_1"):
		case joaat("DLC_MP_SMUG_F_JBIB_2_7"):
		case joaat("DLC_MP_BH_F_JBIB_7_7"):
		case joaat("DLC_MP_BH_F_JBIB_8_7"):
		case joaat("DLC_MP_SMUG_F_JBIB_2_23"):
		case joaat("DLC_MP_STUNT_F_JBIB_5_12"):
		case joaat("DLC_MP_SMUG_F_JBIB_2_19"):
		case joaat("DLC_MP_STUNT_F_JBIB_6_18"):
		case joaat("DLC_MP_IE_F_JBIB_17_0"):
		case joaat("DLC_MP_EXEC_F_JBIB_5_0"):
		case joaat("DLC_MP_IE_F_JBIB_17_7"):
		case joaat("DLC_MP_BH_F_JBIB_4_18"):
		case joaat("DLC_MP_BH_F_JBIB_0_17"):
		case joaat("DLC_MP_LUXE_F_JBIB_3_0"):
		case joaat("DLC_MP_IE_F_JBIB_4_8"):
		case joaat("DLC_MP_HEIST_F_OUTFIT_L_0"):
		case joaat("DLC_MP_HEIST_M_OUTFIT_L_0"):
		case joaat("DLC_MP_HEIST_F_SPECIAL_0_0"):
		case joaat("DLC_MP_GR_F_JBIB_20_15"):
		case joaat("DLC_MP_BH_F_JBIB_0_2"):
		case joaat("DLC_MP_IE_F_JBIB_1_9"):
		case joaat("DLC_MP_IE_F_JBIB_18_9"):
		case joaat("DLC_MP_LTS_F_JBIB_0_0"):
		case joaat("DLC_MP_LOW2_F_JBIB_3_12"):
		case joaat("DLC_MP_IE_F_JBIB_4_5"):
		case joaat("DLC_MP_GR_F_JBIB_20_24"):
		case joaat("DLC_MP_SMUG_F_JBIB_3_8"):
		case joaat("DLC_MP_IE_F_JBIB_4_22"):
		case joaat("DLC_MP_GR_F_JBIB_19_16"):
		case joaat("DLC_MP_HEIST_F_JBIB_0_3"):
		case joaat("DLC_MP_HEIST_F_JBIB_16_5"):
		case joaat("DLC_MP_HEIST_F_JBIB_17_5"):
		case joaat("DLC_MP_SMUG_F_JBIB_3_5"):
		case joaat("DLC_MP_SMUG_F_JBIB_3_6"):
		case joaat("DLC_MP_SMUG_F_SPECIAL_0_6"):
		case joaat("DLC_MP_LUXE_F_JBIB_4_3"):
		case joaat("CLO_S2F_D_7"):
		case joaat("DLC_MP_GR_F_JBIB_19_23"):
		case joaat("DLC_MP_GR_F_JBIB_0_13"):
		case joaat("DLC_MP_GR_F_JBIB_1_13"):
		case joaat("CLO_S2F_D_18"):
		case joaat("DLC_MP_EXEC_F_JBIB_4_2"):
		case joaat("CLO_HP_F_D_10"):
		case joaat("DLC_MP_LUXE_F_JBIB_4_18"):
		case joaat("DLC_MP_IE_F_JBIB_7_5"):
		case joaat("CLO_BIF_DECL_67"):
		case joaat("DLC_MP_BH_F_JBIB_16_1"):
		case joaat("DLC_MP_LOW_F_JBIB_3_1"):
		case joaat("DLC_MP_IE_F_JBIB_7_14"):
		case joaat("DLC_MP_GR_F_JBIB_15_10"):
		case joaat("DLC_MP_GR_F_JBIB_16_10"):
		case joaat("DLC_MP_GR_F_JBIB_14_6"):
		case joaat("DLC_MP_HEIST_F_SPECIAL2_1_0"):
		case joaat("DLC_MP_IE_F_JBIB_7_12"):
		case joaat("DLC_MP_IE_F_TORSO_0_0"):
		case joaat("CLO_SMF_DECL_16"):
		case joaat("CLO_S1F_DEC_23"):
		case joaat("CLO_SMF_DECL_15"):
		case joaat("CLO_BIF_DECL_2"):
		case joaat("CLO_SMF_DECL_7"):
		case joaat("CLO_HP_F_D_9"):
		case joaat("DLC_MP_EXEC_F_JBIB_9_5"):
		case joaat("CLO_S2F_D_23"):
		case joaat("CLO_SMF_DECL_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_JBIB_18_1"):
		case joaat("CLO_AWF_DECL_23"):
		case joaat("CLO_BIF_DECL_49"):
		case joaat("CLO_HALF_D_10"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_LXF_DEC_35"):
		case joaat("CLO_HST_F_A_0"):
		case joaat("CLO_HST_F_A_9"):
		case joaat("CLO_BHF_DECL_19"):
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("CLO_EXF_DECL_3"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
		case joaat("DLC_MP_XMAS2_F_BERD_2_0"):
		case joaat("DLC_MP_VWD_F_JBIB_14_0"):
		case joaat("DLC_MP_VWD_F_JBIB_13_0"):
		case joaat("DLC_MP_VWD_F_JBIB_13_1"):
		case joaat("DLC_MP_VWD_F_JBIB_14_1"):
		case joaat("DLC_MP_VWD_F_JBIB_13_2"):
		case joaat("DLC_MP_VWD_F_JBIB_14_2"):
		case joaat("DLC_MP_VWD_F_JBIB_13_3"):
		case joaat("DLC_MP_VWD_F_JBIB_14_3"):
		case joaat("DLC_MP_VWD_F_JBIB_13_4"):
		case joaat("DLC_MP_VWD_F_JBIB_14_4"):
		case joaat("DLC_MP_VWD_F_JBIB_13_5"):
		case joaat("DLC_MP_VWD_F_JBIB_14_5"):
		case joaat("DLC_MP_VWD_F_JBIB_13_6"):
		case joaat("DLC_MP_VWD_F_JBIB_14_6"):
		case joaat("DLC_MP_VWD_F_JBIB_18_5"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_0"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_1"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_2"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_3"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_4"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_5"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_6"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_7"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_8"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_9"):
		case joaat("DLC_MP_VWD_F_PHEAD_0_10"):
		case joaat("CLO_VWF_DECL_1"):
		case joaat("CLO_VWF_DECL_3"):
		case joaat("CLO_VWF_DECL_5"):
		case joaat("CLO_VWF_DECL_7"):
		case joaat("CLO_VWF_DECL_8"):
		case joaat("CLO_VWF_DECL_9"):
			return 1;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_SCUBA_16"):
		case joaat("DLC_MP_AR_M_OUTFIT_12"):
		case joaat("DLC_MP_IE_M_OUTFIT_1"):
		case joaat("DLC_MP_X17_M_SPECIAL_6_0"):
		case joaat("DLC_MP_BIKER_M_OUTFIT_11"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_5"):
		case joaat("DLC_MP_SMUG_M_OUTFIT_1"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_OUTFIT_8"):
		case joaat("DLC_MP_X17_M_SPECIAL_4_0"):
		case joaat("DLC_MP_X17_M_OUTFIT_GORKA_21"):
		case joaat("DLC_MP_GR_M_OUTFIT_1"):
		case joaat("DLC_MP_X17_M_SPECIAL_9_0"):
		case joaat("DLC_MP_LUXE_M_JBIB_0_7"):
		case joaat("DLC_MP_X17_M_SPECIAL_9_5"):
		case joaat("DLC_MP_HEIST_M_SPECIAL_1_1"):
		case joaat("DLC_MP_IE_M_OUTFIT_11"):
		case joaat("DLC_MP_BIKER_M_JBIB_18_1"):
		case joaat("DLC_MP_BH_M_JBIB_11_17"):
		case joaat("DLC_MP_BH_M_JBIB_10_17"):
		case joaat("DLC_MP_X17_M_JBIB_3_25"):
		case joaat("DLC_MP_BH_M_JBIB_6_1"):
		case joaat("DLC_MP_LUXE2_M_JBIB_2_15"):
		case joaat("DLC_MP_BH_M_JBIB_14_1"):
		case joaat("DLC_MP_LUXE2_M_JBIB_2_12"):
		case joaat("DLC_MP_LUXE2_M_JBIB_2_11"):
		case joaat("DLC_MP_EXEC_M_OUTFIT_14"):
		case joaat("DLC_MP_STUNT_M_JBIB_7_4"):
		case joaat("DLC_MP_IE_M_JBIB_3_7"):
		case joaat("DLC_MP_IE_M_JBIB_2_7"):
		case joaat("DLC_MP_LUXE2_M_JBIB_2_1"):
		case joaat("DLC_MP_JAN_M_OUTFIT_0"):
		case joaat("DLC_MP_BH_M_JBIB_5_18"):
		case joaat("DLC_MP_BH_M_JBIB_5_20"):
		case joaat("DLC_MP_BH_M_JBIB_2_14"):
		case joaat("DLC_MP_STUNT_M_JBIB_5_9"):
		case joaat("DLC_MP_BH_M_JBIB_5_3"):
		case joaat("DLC_MP_BH_M_JBIB_13_0"):
		case joaat("DLC_MP_BH_M_JBIB_12_0"):
		case joaat("DLC_MP_STUNT_M_JBIB_5_1"):
		case joaat("DLC_MP_BH_M_JBIB_4_2"):
		case joaat("DLC_MP_STUNT_M_JBIB_5_6"):
		case joaat("DLC_MP_GR_M_JBIB_15_12"):
		case joaat("DLC_MP_BH_M_JBIB_4_5"):
		case joaat("DLC_MP_GR_M_JBIB_15_20"):
		case joaat("DLC_MP_BH_M_JBIB_7_1"):
		case joaat("DLC_MP_BH_M_JBIB_8_1"):
		case joaat("DLC_MP_SMUG_M_JBIB_2_15"):
		case joaat("DLC_MP_IE_M_JBIB_14_4"):
		case joaat("DLC_MP_IE_M_JBIB_17_4"):
		case joaat("DLC_MP_IE_M_JBIB_17_21"):
		case joaat("DLC_MP_IE_M_JBIB_14_21"):
		case joaat("DLC_MP_IE_M_JBIB_14_9"):
		case joaat("DLC_MP_IE_M_JBIB_17_9"):
		case joaat("DLC_MP_BH_M_JBIB_7_14"):
		case joaat("DLC_MP_BH_M_JBIB_8_14"):
		case joaat("DLC_MP_BIKER_M_JBIB_26_1"):
		case joaat("DLC_MP_SMUG_M_JBIB_2_7"):
		case joaat("DLC_MP_BH_M_JBIB_7_7"):
		case joaat("DLC_MP_BH_M_JBIB_8_7"):
		case joaat("DLC_MP_SMUG_M_JBIB_2_23"):
		case joaat("DLC_MP_STUNT_M_JBIB_5_12"):
		case joaat("DLC_MP_SMUG_M_JBIB_2_19"):
		case joaat("DLC_MP_STUNT_M_JBIB_6_18"):
		case joaat("DLC_MP_IE_M_JBIB_14_0"):
		case joaat("DLC_MP_IE_M_JBIB_17_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_6_0"):
		case joaat("DLC_MP_IE_M_JBIB_14_7"):
		case joaat("DLC_MP_IE_M_JBIB_17_7"):
		case joaat("DLC_MP_HEIST_M_SPECIAL_0_0"):
		case joaat("DLC_MP_BH_M_JBIB_4_18"):
		case joaat("DLC_MP_BH_M_JBIB_0_17"):
		case joaat("DLC_MP_LUXE_M_JBIB_1_0"):
		case joaat("DLC_MP_IE_M_JBIB_4_8"):
		case joaat("DLC_MP_HEIST_M_JBIB_15_5"):
		case joaat("DLC_MP_HEIST_M_JBIB_16_5"):
		case joaat("DLC_MP_GR_M_JBIB_14_15"):
		case joaat("DLC_MP_BH_M_JBIB_0_2"):
		case joaat("DLC_MP_LTS_M_JBIB_0_0"):
		case joaat("DLC_MP_IE_M_JBIB_1_9"):
		case joaat("DLC_MP_IE_M_JBIB_18_9"):
		case joaat("DLC_MP_LOW2_M_JBIB_5_10"):
		case joaat("DLC_MP_IE_M_JBIB_4_5"):
		case joaat("DLC_MP_GR_M_JBIB_14_24"):
		case joaat("DLC_MP_SMUG_M_JBIB_3_8"):
		case joaat("DLC_MP_IE_M_JBIB_4_22"):
		case joaat("DLC_MP_GR_M_JBIB_13_16"):
		case joaat("DLC_MP_HEIST_M_JBIB_0_3"):
		case joaat("DLC_MP_SMUG_M_JBIB_3_5"):
		case joaat("DLC_MP_SMUG_M_SPECIAL_0_6"):
		case joaat("DLC_MP_SMUG_M_JBIB_3_6"):
		case joaat("DLC_MP_LUXE_M_JBIB_3_3"):
		case joaat("CLO_S2M_D_16"):
		case joaat("DLC_MP_GR_M_JBIB_13_23"):
		case joaat("DLC_MP_GR_M_JBIB_0_13"):
		case joaat("DLC_MP_GR_M_JBIB_1_13"):
		case joaat("DLC_MP_BIKER_M_TORSO_2_0"):
		case joaat("CLO_S2M_D_27"):
		case joaat("DLC_MP_EXEC_M_JBIB_5_2"):
		case joaat("CLO_HP_D_10"):
		case joaat("DLC_MP_LUXE_M_JBIB_3_17"):
		case joaat("DLC_MP_IE_M_JBIB_7_5"):
		case joaat("DLC_MP_IE_M_JBIB_7_23"):
		case joaat("CLO_BIM_DECL_67"):
		case joaat("DLC_MP_BH_M_JBIB_16_1"):
		case joaat("DLC_MP_LOW_M_JBIB_3_1"):
		case joaat("DLC_MP_SMUG_M_JBIB_7_10"):
		case joaat("DLC_MP_GR_M_JBIB_2_6"):
		case joaat("DLC_MP_IE_M_JBIB_7_19"):
		case joaat("CLO_SMM_DECL_16"):
		case joaat("CLO_S1M_DEC_25"):
		case joaat("CLO_SMM_DECL_15"):
		case joaat("CLO_BIM_DECL_2"):
		case joaat("CLO_SMM_DECL_7"):
		case joaat("CLO_HP_D_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_10_5"):
		case joaat("CLO_S2M_D_4"):
		case joaat("CLO_SMM_DECL_5"):
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_M_JBIB_14_1"):
		case joaat("CLO_AWM_DECL_23"):
		case joaat("CLO_BIM_DECL_49"):
		case joaat("CLO_HALM_D_10"):
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("CLO_LXM_DEC_35"):
		case joaat("CLO_HST_A_0"):
		case joaat("CLO_EXM_DECL_3"):
		case joaat("CLO_HST_A_9"):
		case joaat("CLO_BHM_DECL_19"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_XMAS2_M_BERD_2_0"):
		case joaat("DLC_MP_VWD_M_JBIB_15_0"):
		case joaat("DLC_MP_VWD_M_JBIB_16_0"):
		case joaat("DLC_MP_VWD_M_JBIB_15_1"):
		case joaat("DLC_MP_VWD_M_JBIB_16_1"):
		case joaat("DLC_MP_VWD_M_JBIB_15_2"):
		case joaat("DLC_MP_VWD_M_JBIB_16_2"):
		case joaat("DLC_MP_VWD_M_JBIB_15_3"):
		case joaat("DLC_MP_VWD_M_JBIB_16_3"):
		case joaat("DLC_MP_VWD_M_JBIB_16_4"):
		case joaat("DLC_MP_VWD_M_JBIB_15_4"):
		case joaat("DLC_MP_VWD_M_JBIB_16_5"):
		case joaat("DLC_MP_VWD_M_JBIB_15_5"):
		case joaat("DLC_MP_VWD_M_JBIB_16_6"):
		case joaat("DLC_MP_VWD_M_JBIB_15_6"):
		case joaat("DLC_MP_VWD_M_JBIB_20_5"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_0"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_1"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_2"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_3"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_4"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_5"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_6"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_7"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_8"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_9"):
		case joaat("DLC_MP_VWD_M_PHEAD_0_10"):
		case joaat("CLO_VWM_DECL_1"):
		case joaat("CLO_VWM_DECL_3"):
		case joaat("CLO_VWM_DECL_5"):
		case joaat("CLO_VWM_DECL_7"):
		case joaat("CLO_VWM_DECL_8"):
		case joaat("CLO_VWM_DECL_9"):
			return 1;
		default:
	}
	switch (iParam1)
	{
		case joaat("mpChristmas2018_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Christmas2018_Tee_023_F"):
				case joaat("MP_Christmas2018_Tee_023_M"):
					return 1;
					break;
			}
			break;
		case joaat("mpLowrider_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Bennys_001_F"):
				case joaat("MP_Bennys_001_M"):
					return 1;
					break;
			}
			break;
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_013"):
					return 1;
					break;
			}
			break;
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_1"):
				case joaat("CasinoTop_M_3"):
				case joaat("CasinoTop_M_5"):
				case joaat("CasinoTop_M_7"):
				case joaat("CasinoTop_M_8"):
				case joaat("CasinoTop_M_9"):
				case joaat("CasinoTop_F_1"):
				case joaat("CasinoTop_F_3"):
				case joaat("CasinoTop_F_5"):
				case joaat("CasinoTop_F_7"):
				case joaat("CasinoTop_F_8"):
				case joaat("CasinoTop_F_9"):
					return 1;
					break;
			}
			break;
		case joaat("mpBattle_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_020_F"):
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_333(int iParam0, int iParam1, int iParam2)//Position - 0xE7294
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_334()//Position - 0xE9853
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
}

int func_335(int iParam0, int iParam1, int iParam2)//Position - 0xF3D95
{
	int iVar0[5];
	if (((iParam1 >= 0 && iParam1 < 21) && Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2305[iParam1]) && iParam2 == iParam1 == 20)
	{
		iVar0[0] = PED::GET_PED_PROP_INDEX(iParam0, 0);
		iVar0[1] = PED::GET_PED_PROP_INDEX(iParam0, 1);
		iVar0[2] = PED::GET_PED_PROP_INDEX(iParam0, 6);
		iVar0[3] = PED::GET_PED_PROP_INDEX(iParam0, 7);
		iVar0[4] = PED::GET_PED_PROP_INDEX(iParam0, 2);
		if (((((((((((((((((((((((PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1335[iParam1 /*13*/][11] && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1335[iParam1 /*13*/][4]) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1335[iParam1 /*13*/][6]) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1335[iParam1 /*13*/][8]) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1335[iParam1 /*13*/][9]) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1335[iParam1 /*13*/][3]) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1335[iParam1 /*13*/][1]) && PED::GET_PED_TEXTURE_VARIATION(iParam0, 11) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1609[iParam1 /*13*/][11]) && PED::GET_PED_TEXTURE_VARIATION(iParam0, 4) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1609[iParam1 /*13*/][4]) && PED::GET_PED_TEXTURE_VARIATION(iParam0, 6) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1609[iParam1 /*13*/][6]) && PED::GET_PED_TEXTURE_VARIATION(iParam0, 8) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1609[iParam1 /*13*/][8]) && PED::GET_PED_TEXTURE_VARIATION(iParam0, 9) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1609[iParam1 /*13*/][9]) && PED::GET_PED_TEXTURE_VARIATION(iParam0, 3) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1609[iParam1 /*13*/][3]) && PED::GET_PED_TEXTURE_VARIATION(iParam0, 1) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1609[iParam1 /*13*/][1]) && iVar0[0] == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1883[iParam1 /*10*/][0]) && iVar0[1] == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1883[iParam1 /*10*/][1]) && iVar0[2] == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1883[iParam1 /*10*/][6]) && iVar0[3] == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1883[iParam1 /*10*/][7]) && iVar0[4] == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1883[iParam1 /*10*/][2]) && (iVar0[0] == -1 || PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2094[iParam1 /*10*/][0])) && (iVar0[1] == -1 || PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2094[iParam1 /*10*/][1])) && (iVar0[2] == -1 || PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 6) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2094[iParam1 /*10*/][6])) && (iVar0[3] == -1 || PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 7) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2094[iParam1 /*10*/][7])) && (iVar0[4] == -1 || PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 2) == Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2094[iParam1 /*10*/][2]))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(char* sParam0)//Position - 0x11A814
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 31;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CLO_LXM_E_0_0"):
		case joaat("CLO_LXM_E_0_1"):
		case joaat("CLO_LXM_E_0_2"):
		case joaat("CLO_LXM_E_3_0"):
		case joaat("CLO_LXM_E_3_1"):
		case joaat("CLO_LXM_E_6_0"):
		case joaat("CLO_LXM_E_6_1"):
		case joaat("CLO_LXM_E_6_2"):
		case joaat("CLO_LXM_E_9_0"):
		case joaat("CLO_LXM_E_9_1"):
		case joaat("CLO_LXM_E_9_2"):
		case joaat("CLO_LXM_E_12_0"):
		case joaat("CLO_LXM_E_12_1"):
		case joaat("CLO_LXM_E_12_2"):
		case joaat("CLO_LXM_E_15_0"):
		case joaat("CLO_LXM_E_15_1"):
		case joaat("CLO_LXM_E_18_0"):
		case joaat("CLO_LXM_E_18_1"):
		case joaat("CLO_LXM_E_18_2"):
		case joaat("CLO_LXM_E_18_3"):
		case joaat("CLO_LXM_E_21_0"):
		case joaat("CLO_LXM_E_21_1"):
		case joaat("CLO_LXM_E_24_0"):
		case joaat("CLO_LXM_E_24_1"):
		case joaat("CLO_LXM_E_24_2"):
		case joaat("CLO_LXM_E_24_3"):
		case joaat("CLO_LXM_E_24_4"):
		case joaat("CLO_LXM_E_27_0"):
		case joaat("CLO_LXM_E_27_1"):
		case joaat("CLO_LXM_E_27_2"):
		case joaat("CLO_LXM_E_30_0"):
		case joaat("CLO_LXM_E_30_1"):
		case joaat("CLO_L2M_E_15_0"):
		case joaat("CLO_L2M_E_15_1"):
		case joaat("CLO_L2M_E_18_0"):
		case joaat("CLO_L2M_E_18_1"):
		case joaat("CLO_L2M_E_18_2"):
		case joaat("CLO_L2M_E_18_3"):
		case joaat("CLO_L2M_E_21_0"):
		case joaat("CLO_L2M_E_21_1"):
		case joaat("CLO_L2M_E_27_0"):
		case joaat("CLO_L2M_E_27_1"):
		case joaat("CLO_L2M_E_27_2"):
		case joaat("CLO_L2M_E_30_0"):
		case joaat("CLO_L2M_E_30_1"):
			return 1;
			break;
		case joaat("CLO_LXM_E_1_0"):
		case joaat("CLO_LXM_E_1_1"):
		case joaat("CLO_LXM_E_1_2"):
		case joaat("CLO_LXM_E_4_0"):
		case joaat("CLO_LXM_E_4_1"):
		case joaat("CLO_LXM_E_7_0"):
		case joaat("CLO_LXM_E_7_1"):
		case joaat("CLO_LXM_E_7_2"):
		case joaat("CLO_LXM_E_10_0"):
		case joaat("CLO_LXM_E_10_1"):
		case joaat("CLO_LXM_E_10_2"):
		case joaat("CLO_LXM_E_13_0"):
		case joaat("CLO_LXM_E_13_1"):
		case joaat("CLO_LXM_E_13_2"):
		case joaat("CLO_LXM_E_16_0"):
		case joaat("CLO_LXM_E_16_1"):
		case joaat("CLO_LXM_E_19_0"):
		case joaat("CLO_LXM_E_19_1"):
		case joaat("CLO_LXM_E_19_2"):
		case joaat("CLO_LXM_E_19_3"):
		case joaat("CLO_LXM_E_22_0"):
		case joaat("CLO_LXM_E_22_1"):
		case joaat("CLO_LXM_E_25_0"):
		case joaat("CLO_LXM_E_25_1"):
		case joaat("CLO_LXM_E_25_2"):
		case joaat("CLO_LXM_E_25_3"):
		case joaat("CLO_LXM_E_25_4"):
		case joaat("CLO_LXM_E_28_0"):
		case joaat("CLO_LXM_E_28_1"):
		case joaat("CLO_LXM_E_28_2"):
		case joaat("CLO_LXM_E_31_0"):
		case joaat("CLO_LXM_E_31_1"):
		case joaat("CLO_L2M_E_16_0"):
		case joaat("CLO_L2M_E_16_1"):
		case joaat("CLO_L2M_E_19_0"):
		case joaat("CLO_L2M_E_19_1"):
		case joaat("CLO_L2M_E_19_2"):
		case joaat("CLO_L2M_E_19_3"):
		case joaat("CLO_L2M_E_22_0"):
		case joaat("CLO_L2M_E_22_1"):
		case joaat("CLO_L2M_E_28_0"):
		case joaat("CLO_L2M_E_28_1"):
		case joaat("CLO_L2M_E_28_2"):
		case joaat("CLO_L2M_E_31_0"):
		case joaat("CLO_L2M_E_31_1"):
			return 2;
			break;
	}
	return 0;
}

int func_337(int iParam0, int iParam1)//Position - 0x132E83
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_18"), iParam1))
	{
		iVar0 = 18;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_19"), iParam1))
	{
		iVar0 = 19;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_20"), iParam1))
	{
		iVar0 = 20;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_21"), iParam1))
	{
		iVar0 = 21;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_22"), iParam1))
	{
		iVar0 = 22;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_23"), iParam1))
	{
		iVar0 = 23;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_24"), iParam1))
	{
		iVar0 = 24;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_25"), iParam1))
	{
		iVar0 = 25;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_26"), iParam1))
	{
		iVar0 = 26;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_27"), iParam1))
	{
		iVar0 = 27;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_28"), iParam1))
	{
		iVar0 = 28;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_29"), iParam1))
	{
		iVar0 = 29;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_30"), iParam1))
	{
		iVar0 = 30;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_31"), iParam1))
	{
		iVar0 = 31;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_32"), iParam1))
	{
		iVar0 = 32;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_33"), iParam1))
	{
		iVar0 = 33;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_34"), iParam1))
	{
		iVar0 = 34;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("BIKER_DRAW_35"), iParam1))
	{
		iVar0 = 35;
	}
	return iVar0;
}

int func_338(int iParam0, int iParam1)//Position - 0x1331C1
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_18"), iParam1))
	{
		iVar0 = 18;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_19"), iParam1))
	{
		iVar0 = 19;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_20"), iParam1))
	{
		iVar0 = 20;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_21"), iParam1))
	{
		iVar0 = 21;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_22"), iParam1))
	{
		iVar0 = 22;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_23"), iParam1))
	{
		iVar0 = 23;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_24"), iParam1))
	{
		iVar0 = 24;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("IE_DRAW_25"), iParam1))
	{
		iVar0 = 25;
	}
	return iVar0;
}

int func_339(int iParam0, int iParam1)//Position - 0x133452
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("X17_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_340(int iParam0, int iParam1)//Position - 0x133596
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_18"), iParam1))
	{
		iVar0 = 18;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_19"), iParam1))
	{
		iVar0 = 19;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_20"), iParam1))
	{
		iVar0 = 20;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_21"), iParam1))
	{
		iVar0 = 21;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_22"), iParam1))
	{
		iVar0 = 22;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("GUN_DRAW_23"), iParam1))
	{
		iVar0 = 23;
	}
	return iVar0;
}

int func_341(int iParam0, int iParam1)//Position - 0x1337BF
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("SMUG_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("SMUG_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("SMUG_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("SMUG_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("SMUG_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("SMUG_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("SMUG_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	return iVar0;
}

int func_342(int iParam0, int iParam1)//Position - 0x133863
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("AIR_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("AIR_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("AIR_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("AIR_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_343(int iParam0)//Position - 0x1429CF
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2, 13);
	}
	return 0;
}

int func_344(int iParam0, int iParam1, int iParam2)//Position - 0x153A1A
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_345(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x153B96
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam1 == 12 || iParam1 == 13)
	{
		return 0;
	}
	else if (iParam1 == 14)
	{
		iVar0 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iParam0);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			FILES::GET_FORCED_PROP(iParam0, iVar1, &iVar2, &iVar3, &iVar4);
			if (iVar2 != 0 && iVar2 != joaat("0"))
			{
				if (iVar2 == iParam3)
				{
					return 1;
				}
			}
			else if (iVar3 == iParam2)
			{
				return 1;
			}
			iVar1++;
		}
	}
	else
	{
		iVar0 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iParam0);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			FILES::GET_FORCED_COMPONENT(iParam0, iVar1, &iVar2, &iVar3, &iVar4);
			if (iVar4 == iParam1)
			{
				if (iVar2 != 0 && iVar2 != joaat("0"))
				{
					if (iVar2 == iParam3)
					{
						return 1;
					}
				}
				else if (iVar3 == iParam2)
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_346(int iParam0, int iParam1)//Position - 0x15EB44
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_18"), iParam1))
	{
		iVar0 = 18;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_19"), iParam1))
	{
		iVar0 = 19;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_20"), iParam1))
	{
		iVar0 = 20;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_21"), iParam1))
	{
		iVar0 = 21;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_22"), iParam1))
	{
		iVar0 = 22;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_23"), iParam1))
	{
		iVar0 = 23;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_24"), iParam1))
	{
		iVar0 = 24;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("APART_DRAW_25"), iParam1))
	{
		iVar0 = 25;
	}
	return iVar0;
}

int func_347(int iParam0, int iParam1)//Position - 0x15ED9C
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_18"), iParam1))
	{
		iVar0 = 18;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_19"), iParam1))
	{
		iVar0 = 19;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_20"), iParam1))
	{
		iVar0 = 20;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_21"), iParam1))
	{
		iVar0 = 21;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_22"), iParam1))
	{
		iVar0 = 22;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_23"), iParam1))
	{
		iVar0 = 23;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_24"), iParam1))
	{
		iVar0 = 24;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("STUNT_DRAW_25"), iParam1))
	{
		iVar0 = 25;
	}
	return iVar0;
}

int func_348(int iParam0, int iParam1)//Position - 0x15EFF4
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ASSAULT_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_349(int iParam0, int iParam1)//Position - 0x15F014
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("ARENA_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_350(int iParam0, int iParam1)//Position - 0x15F1B4
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("VWD_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_351(int iParam0, int iParam1)//Position - 0x15F354
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H3_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H3_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H3_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H3_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H3_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H3_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H3_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H3_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H3_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H3_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	return iVar0;
}

int func_352(int iParam0, int iParam1)//Position - 0x15F43C
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H4_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H4_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H4_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H4_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H4_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H4_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H4_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H4_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H4_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("H4_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	return iVar0;
}

int func_353(int iParam0, int iParam1)//Position - 0x15F524
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("TR_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("TR_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("TR_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("TR_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("TR_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("TR_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("TR_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("TR_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("TR_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("TR_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	return iVar0;
}

int func_354(int iParam0, int iParam1)//Position - 0x15F60C
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("FX_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("FX_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("FX_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("FX_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("FX_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("FX_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("FX_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("FX_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("FX_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	return iVar0;
}

void func_355(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x163617
{
	if (*uParam2 == -1)
	{
		*uParam2 = iParam0;
		*uParam4 = iParam5;
		if (iParam0 == 14)
		{
			*uParam3 = iParam1;
		}
	}
}

int func_356(int iParam0)//Position - 0x46EC
{
	switch (iParam0)
	{
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 119:
		case 118:
		case 120:
		case 121:
		case 125:
		case 127:
		case 132:
		case 133:
		case 134:
		case 135:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 5:
		case 157:
		case 160:
		case 161:
		case 174:
		case 176:
		case 177:
		case 178:
		case 188:
		case 191:
		case 197:
		case 198:
		case 199:
		case 200:
		case 209:
		case 208:
		case 211:
		case 212:
		case 216:
		case 219:
		case 221:
		case 223:
		case 225:
		case 227:
		case 228:
		case 234:
		case 238:
		case 247:
		case 242:
		case 243:
		case 258:
		case 261:
		case 269:
			return 1;
			break;
	}
	return 0;
}

int func_357(int iParam0)//Position - 0x2B10A
{
	switch (iParam0)
	{
		case 78:
			return 1;
			break;
		case 89:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_M_Freemode_01"))
			{
				return 1;
			}
			break;
		case 122:
		case 153:
		case 235:
		case 238:
		case 247:
		case 242:
		case 243:
		case 258:
			return 1;
			break;
	}
	return 0;
}

void func_358(int iParam0, char* sParam1)//Position - 0x2E069
{
	Global_4539561 = iParam0;
}

void func_359(var uParam0, bool bParam1)//Position - 0x2F3C3
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!uParam0->f_18)
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar2 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				(*uParam0)[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				if (iVar0 < *uParam0)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uVar1[iVar3]) && !PED::IS_PED_INJURED(uVar1[iVar3])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar3], false))
					{
						if (PED::IS_PED_GROUP_MEMBER(uVar1[iVar3], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
						{
							(*uParam0)[iVar0] = uVar1[iVar3];
							uParam0->f_5[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true) };
							iVar0++;
						}
					}
				}
				iVar3++;
			}
			uParam0->f_18 = 1;
		}
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0], false))
			{
				if (uParam0->f_19)
				{
					ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], false, false);
					if (bParam1)
					{
						ENTITY::SET_ENTITY_COLLISION((*uParam0)[iVar0], false, false);
						ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[iVar0], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET((*uParam0)[iVar0], uParam0->f_5[iVar0 /*3*/], true, true, true);
					}
				}
				else if (!ENTITY::IS_ENTITY_VISIBLE((*uParam0)[iVar0]))
				{
					ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], true, false);
					if (bParam1)
					{
						ENTITY::SET_ENTITY_COLLISION((*uParam0)[iVar0], true, false);
						ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[iVar0], false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET((*uParam0)[iVar0], uParam0->f_5[iVar0 /*3*/], true, true, true);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_360(var uParam0)//Position - 0x54E56
{
	if (uParam0->f_617)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_617.f_1);
		uParam0->f_617 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_617.f_2))
	{
		PED::DELETE_PED(&(uParam0->f_617.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_4538723))
	{
		PED::DELETE_PED(&Global_4538723);
	}
}

bool func_361(int iParam0)//Position - 0x565CF
{
	return Global_4538992.f_218 == iParam0;
}

bool func_362()//Position - 0x5FF80
{
	return Global_4538836 == 1;
}

void func_363(int iParam0)//Position - 0x5FF8E
{
	if (Global_4539885.f_62 >= 3 || Global_4539885.f_61 >= 4)
	{
		return;
	}
	Global_4539885.f_25[Global_4539885.f_61] = 2;
	Global_4539885.f_61++;
	Global_4539885.f_30[Global_4539885.f_62] = iParam0;
	Global_4539885.f_62++;
}

void func_364(var uParam0)//Position - 0x60055
{
	*uParam0 = { Global_4539885.f_21 };
}

int func_365(int iParam0, int iParam1)//Position - 0x6580F
{
	int iVar0;
	if (iParam1 == 0)
	{
	}
	iVar0 = 0;
	while (iVar0 <= 999)
	{
		if (iVar0 == 999)
		{
			return iVar0;
		}
		else if (Global_295824[iVar0] > iParam0)
		{
			return (iVar0 - 1);
		}
		iVar0++;
	}
	return 999;
}

var func_366(int iParam0)//Position - 0x65903
{
	switch (iParam0)
	{
		case 0:
			return Global_1659614;
		case 1:
			return Global_1659615;
		case 2:
			return Global_1659616;
		case 3:
			return Global_1659617;
		case 4:
			return Global_1659618;
		default:
	}
	return Global_1659618;
}

int func_367(int iParam0, int iParam1, int iParam2)//Position - 0x65A5E
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam1 == 11)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
			}
			else if (iParam1 == 8)
			{
				if (iParam2 == 0 || iParam2 == 32)
				{
					return 1;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam1 == 11)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
			}
			else if (iParam1 == 8)
			{
				if (iParam2 == 0 || iParam2 == 16)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_368(char* sParam0)//Position - 0x65F92
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
	switch (iVar0)
	{
		case joaat("CLO_VE"):
			return 1;
			break;
	}
	return 0;
}

int func_369(char* sParam0)//Position - 0x6880E
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("TAT_AW_000"):
			return 1;
			break;
		case joaat("CLO_AWM_O_J_0"):
		case joaat("CLO_AWF_O_J_0"):
		case joaat("CLO_AWM_T_0"):
		case joaat("CLO_AWF_T_0"):
			return 1;
			break;
	}
	return 0;
}

bool func_370(char* sParam0, char* sParam1)//Position - 0x6885F
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	StringCopy(sParam1, "", 16);
	switch (iVar0)
	{
		case -254743660:
		case -504148519:
		case -1729856159:
		case 531303152:
		case joaat("CLO_HP_D_26"):
		case joaat("CLO_HP_F_D_26"):
		case joaat("CLO_HP_D_33"):
		case joaat("CLO_HP_F_D_33"):
			StringCopy(sParam1, "CLO_BRAND_TOUR" /* GXT: Limited Edition. Unlocked with Tournament participation. */, 16);
			break;
		case joaat("CLO_HP_D_23"):
		case joaat("CLO_HP_D_24"):
		case joaat("CLO_HP_D_25"):
		case joaat("CLO_HP_D_27"):
		case joaat("CLO_HP_D_28"):
		case joaat("CLO_HP_D_29"):
		case joaat("CLO_HP_D_30"):
		case joaat("CLO_HP_D_31"):
		case joaat("CLO_HP_D_32"):
		case joaat("CLO_HP_D_34"):
		case joaat("CLO_HP_D_35"):
		case joaat("CLO_HP_D_36"):
		case joaat("CLO_HP_F_D_23"):
		case joaat("CLO_HP_F_D_24"):
		case joaat("CLO_HP_F_D_25"):
		case joaat("CLO_HP_F_D_27"):
		case joaat("CLO_HP_F_D_28"):
		case joaat("CLO_HP_F_D_29"):
		case joaat("CLO_HP_F_D_30"):
		case joaat("CLO_HP_F_D_31"):
		case joaat("CLO_HP_F_D_32"):
		case joaat("CLO_HP_F_D_34"):
		case joaat("CLO_HP_F_D_35"):
		case joaat("CLO_HP_F_D_36"):
			StringCopy(sParam1, "CLO_BRAND_EVENT" /* GXT: Limited Edition. Unlocked as part of an Event. */, 16);
			break;
		case joaat("CLO_EXM_EU_16_0"):
		case joaat("CLO_EXM_EU_16_1"):
		case joaat("CLO_EXM_EU_16_2"):
		case joaat("CLO_EXM_EU_16_3"):
		case joaat("CLO_EXM_EU_16_4"):
		case joaat("CLO_EXM_EU_16_5"):
		case joaat("CLO_EXM_EU_16_6"):
		case joaat("CLO_EXM_EU_16_7"):
		case joaat("CLO_EXM_EU_16_8"):
		case joaat("CLO_EXM_EU_16_9"):
		case joaat("CLO_EXM_EU_1610"):
		case joaat("CLO_EXM_EU_1611"):
		case joaat("CLO_EXM_EU_1612"):
		case joaat("CLO_EXM_EU_1613"):
		case joaat("CLO_EXF_EU_16_0"):
		case joaat("CLO_EXF_EU_16_1"):
		case joaat("CLO_EXF_EU_16_2"):
		case joaat("CLO_EXF_EU_16_3"):
		case joaat("CLO_EXF_EU_16_4"):
		case joaat("CLO_EXF_EU_16_5"):
		case joaat("CLO_EXF_EU_16_6"):
		case joaat("CLO_EXF_EU_16_7"):
		case joaat("CLO_EXF_EU_16_8"):
		case joaat("CLO_EXF_EU_16_9"):
		case joaat("CLO_EXF_EU_1610"):
		case joaat("CLO_EXF_EU_1611"):
		case joaat("CLO_EXF_EU_1612"):
		case joaat("CLO_EXF_EU_1613"):
		case joaat("CLO_EXF_EU_15_0"):
		case joaat("CLO_EXF_EU_15_1"):
		case joaat("CLO_EXF_EU_15_2"):
		case joaat("CLO_EXF_EU_15_3"):
		case joaat("CLO_EXF_EU_15_4"):
		case joaat("CLO_EXF_EU_15_5"):
		case joaat("CLO_EXF_EU_15_6"):
		case joaat("CLO_EXF_EU_15_7"):
		case joaat("CLO_EXF_EU_15_8"):
		case joaat("CLO_EXF_EU_15_9"):
		case joaat("CLO_EXF_EU_1510"):
		case joaat("CLO_EXF_EU_1511"):
		case joaat("CLO_EXF_EU_1512"):
		case joaat("CLO_EXF_EU_1513"):
		case joaat("CLO_EXM_EU_15_0"):
		case joaat("CLO_EXM_EU_15_1"):
		case joaat("CLO_EXM_EU_15_2"):
		case joaat("CLO_EXM_EU_15_3"):
		case joaat("CLO_EXM_EU_15_4"):
		case joaat("CLO_EXM_EU_15_5"):
		case joaat("CLO_EXM_EU_15_6"):
		case joaat("CLO_EXM_EU_15_7"):
		case joaat("CLO_EXM_EU_15_8"):
		case joaat("CLO_EXM_EU_15_9"):
		case joaat("CLO_EXM_EU_1510"):
		case joaat("CLO_EXM_EU_1511"):
		case joaat("CLO_EXM_EU_1512"):
		case joaat("CLO_EXM_EU_1513"):
			StringCopy(sParam1, "CLO_BRAND_EVENT" /* GXT: Limited Edition. Unlocked as part of an Event. */, 16);
			break;
		case joaat("CLO_EXM_DECL_2"):
		case joaat("CLO_EXM_DECL_3"):
		case joaat("CLO_EXM_DECL_4"):
		case joaat("CLO_EXM_DECL_5"):
		case joaat("CLO_EXM_DECL_6"):
		case joaat("CLO_EXM_DECL_7"):
		case joaat("CLO_EXM_DECL_8"):
		case joaat("CLO_EXM_DECL_9"):
		case joaat("CLO_EXM_DECL_10"):
		case joaat("CLO_EXM_DECL_11"):
		case joaat("CLO_EXM_DECL_12"):
		case joaat("CLO_EXM_DECL_13"):
		case joaat("CLO_EXM_DECL_14"):
		case joaat("CLO_EXM_DECL_15"):
		case joaat("CLO_EXM_DECL_16"):
		case joaat("CLO_EXF_DECL_2"):
		case joaat("CLO_EXF_DECL_3"):
		case joaat("CLO_EXF_DECL_4"):
		case joaat("CLO_EXF_DECL_5"):
		case joaat("CLO_EXF_DECL_6"):
		case joaat("CLO_EXF_DECL_7"):
		case joaat("CLO_EXF_DECL_8"):
		case joaat("CLO_EXF_DECL_9"):
		case joaat("CLO_EXF_DECL_10"):
		case joaat("CLO_EXF_DECL_11"):
		case joaat("CLO_EXF_DECL_12"):
		case joaat("CLO_EXF_DECL_13"):
		case joaat("CLO_EXF_DECL_14"):
		case joaat("CLO_EXF_DECL_15"):
		case joaat("CLO_EXF_DECL_16"):
			StringCopy(sParam1, "CLO_BRAND_EVENT" /* GXT: Limited Edition. Unlocked as part of an Event. */, 16);
			break;
		case joaat("REW_REDSK"):
		case joaat("REW_RS"):
		case joaat("CLO_HST_A_0"):
		case joaat("CLO_HST_A_1"):
		case joaat("CLO_HST_A_2"):
		case joaat("CLO_HST_A_3"):
		case joaat("CLO_HST_A_4"):
		case joaat("CLO_HST_A_5"):
		case joaat("CLO_HST_A_6"):
		case joaat("CLO_HST_A_7"):
		case joaat("CLO_HST_A_8"):
		case joaat("CLO_HST_A_9"):
		case joaat("CLO_HST_F_A_0"):
		case joaat("CLO_HST_F_A_1"):
		case joaat("CLO_HST_F_A_2"):
		case joaat("CLO_HST_F_A_3"):
		case joaat("CLO_HST_F_A_4"):
		case joaat("CLO_HST_F_A_5"):
		case joaat("CLO_HST_F_A_6"):
		case joaat("CLO_HST_F_A_7"):
		case joaat("CLO_HST_F_A_8"):
		case joaat("CLO_HST_F_A_9"):
			StringCopy(sParam1, "CLO_BRAND_AWARD" /* GXT: Unlocked with an Award. */, 16);
			break;
		case joaat("CLO_X3M_DEC_00"):
		case joaat("CLO_X3F_DEC_00"):
			StringCopy(sParam1, "CLO_BRAND_EXCL" /* GXT: Exclusive Item. */, 16);
			break;
		case joaat("CLO_EXM_DECL_17"):
		case joaat("CLO_EXF_DECL_17"):
			StringCopy(sParam1, "CLO_BRAND_DCTL" /* GXT: Unlocked via "Don't Cross The Line" wins. */, 16);
			break;
	}
	switch (iVar0)
	{
		case joaat("TAT_AW_000"):
			StringCopy(sParam1, "SHOP_CONTENT_36" /* GXT: Inspiration From Beyond The Stars */, 16);
			break;
		case joaat("CLO_AWM_O_J_0"):
		case joaat("CLO_AWF_O_J_0"):
		case joaat("CLO_AWM_T_0"):
		case joaat("CLO_AWF_T_0"):
			StringCopy(sParam1, "SHOP_CONTENT_37" /* GXT: Happiness is yours. Kifflom */, 16);
			break;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam1);
}

char* func_371(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x68CD8
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(&uParam0);
	switch (iVar0)
	{
		case joaat("WT_FLAREGUN"):
			return "CSHOP_LCKHUM" /* GXT: Heist item unlocks after Humane Lab Raid Finale. */;
			break;
		case joaat("CLO_HST_E_2_0"):
			return "CSHOP_LCKFLE" /* GXT: Heist item unlocks after Fleeca Job Finale. */;
			break;
		case -993451163:
		case joaat("CLO_HST_B_0_0"):
			return "CSHOP_LCKHUM" /* GXT: Heist item unlocks after Humane Lab Raid Finale. */;
			break;
		case joaat("CLO_HST_B_1_0"):
			return "CSHOP_LCKHUM" /* GXT: Heist item unlocks after Humane Lab Raid Finale. */;
			break;
		case joaat("CLO_HST_B_2_0"):
			return "CSHOP_LCKFLE" /* GXT: Heist item unlocks after Fleeca Job Finale. */;
			break;
		case joaat("CLO_HST_B_3_0"):
			return "CSHOP_LCKFLE" /* GXT: Heist item unlocks after Fleeca Job Finale. */;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_H3M_PH_5_0"):
		case joaat("CLO_H3M_PH_6_0"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_DL_11"):
		case joaat("CLO_H3M_O_DL_12"):
		case joaat("CLO_H3M_U_7_0"):
		case joaat("CLO_H3M_O_DL_13"):
		case joaat("CLO_H3M_O_DL_14"):
		case joaat("CLO_H3M_O_DL_15"):
		case joaat("CLO_H3M_O_DL_16"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_DL_21"):
		case joaat("CLO_H3M_O_DL_22"):
		case joaat("CLO_H3M_O_DL_23"):
		case joaat("CLO_H3M_O_DL_24"):
		case joaat("CLO_H3M_O_DL_25"):
		case joaat("CLO_H3M_O_DL_26"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_DL_31"):
		case joaat("CLO_H3M_O_DL_32"):
		case joaat("CLO_H3M_O_DL_33"):
		case joaat("CLO_H3M_O_DL_34"):
		case joaat("CLO_H3M_O_DL_35"):
		case joaat("CLO_H3M_O_DL_36"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_DH_11"):
		case joaat("CLO_H3M_L_4_11"):
		case joaat("CLO_H3M_U_10_11"):
		case joaat("CLO_H3M_O_DH_12"):
		case joaat("CLO_H3M_L_4_12"):
		case joaat("CLO_H3M_U_10_12"):
		case joaat("CLO_H3M_O_DH_13"):
		case joaat("CLO_H3M_L_4_17"):
		case joaat("CLO_H3M_U_10_17"):
		case joaat("CLO_H3M_O_DH_14"):
		case joaat("CLO_H3M_L_4_13"):
		case joaat("CLO_H3M_U_10_13"):
		case joaat("CLO_H3M_O_DH_15"):
		case joaat("CLO_H3M_L_4_10"):
		case joaat("CLO_H3M_U_10_10"):
		case joaat("CLO_H3M_O_DH_16"):
		case joaat("CLO_H3M_L_4_18"):
		case joaat("CLO_H3M_U_10_18"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_DH_21"):
		case joaat("CLO_H3M_L_5_5"):
		case joaat("CLO_H3M_O_DH_22"):
		case joaat("CLO_H3M_L_5_3"):
		case joaat("CLO_H3M_O_DH_23"):
		case joaat("CLO_H3M_L_5_1"):
		case joaat("CLO_H3M_O_DH_24"):
		case joaat("CLO_H3M_O_DH_25"):
		case joaat("CLO_H3M_L_5_0"):
		case joaat("CLO_H3M_O_DH_26"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_DH_31"):
		case joaat("CLO_H3M_O_DH_32"):
		case joaat("CLO_H3M_O_DH_33"):
		case joaat("CLO_H3M_O_DH_34"):
		case joaat("CLO_H3M_O_DH_35"):
		case joaat("CLO_H3M_O_DH_36"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_SH_11"):
		case joaat("CLO_H3M_S_1_0"):
		case joaat("CLO_H3M_PH_10_0"):
		case joaat("CLO_H3M_PH_11_0"):
		case joaat("CLO_H3M_O_SH_12"):
		case joaat("CLO_H3M_O_SH_13"):
		case joaat("CLO_H3M_O_SH_14"):
		case joaat("CLO_H3M_O_SH_15"):
		case joaat("CLO_H3M_O_SH_16"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_SH_21"):
		case joaat("CLO_H3M_B_14_14"):
		case joaat("CLO_H3M_S_12_0"):
		case joaat("CLO_H3M_O_SH_22"):
		case joaat("CLO_H3M_B_14_22"):
		case joaat("CLO_H3M_O_SH_23"):
		case joaat("CLO_H3M_B_14_21"):
		case joaat("CLO_H3M_O_SH_24"):
		case joaat("CLO_H3M_B_14_10"):
		case joaat("CLO_H3M_O_SH_25"):
		case joaat("CLO_H3M_B_14_0"):
		case joaat("CLO_H3M_O_SH_26"):
		case joaat("CLO_H3M_B_14_2"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_SH_31"):
		case joaat("CLO_H3M_S_13_0"):
		case joaat("CLO_H3M_O_SH_32"):
		case joaat("CLO_H3M_O_SH_33"):
		case joaat("CLO_H3M_O_SH_34"):
		case joaat("CLO_H3M_O_SH_35"):
		case joaat("CLO_H3M_O_SH_36"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_FIB_1"):
		case joaat("CLO_H3M_O_FIB_2"):
		case joaat("CLO_H3M_O_FIB_3"):
		case joaat("CLO_H3M_O_FIB_4"):
			return "CSHOP_LCKPRP";
			break;
			break;
		case joaat("CLO_H3M_O_UND_1"):
		case joaat("CLO_H3M_PH_9_0"):
			return "CSHOP_LCKPRP";
			break;
			break;
		case joaat("CLO_H3M_O_PRP_1"):
		case joaat("CLO_H3M_O_PRP_2"):
			return "CSHOP_LCKPRP";
			break;
			break;
		case joaat("CLO_H3M_O_JAN_1"):
		case joaat("CLO_H3M_O_JAN_2"):
		case joaat("CLO_H3M_PH_5_1"):
		case joaat("CLO_H3M_PH_6_1"):
		case joaat("CLO_H3M_O_JAN_3"):
		case joaat("CLO_H3M_O_JAN_4"):
		case joaat("CLO_H3M_O_JAN_5"):
		case joaat("CLO_H3M_O_JAN_6"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_CLB_1"):
		case joaat("CLO_H3M_U_16_0"):
		case joaat("CLO_H3M_PH_2_2"):
		case joaat("CLO_H3M_O_CLB_2"):
		case joaat("CLO_H3M_O_CLB_3"):
		case joaat("CLO_H3M_PH_3_2"):
		case joaat("CLO_H3M_O_CLB_4"):
		case joaat("CLO_H3M_U_15_0"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_GRP_1"):
		case joaat("CLO_H3M_U_2_1"):
		case joaat("CLO_H3M_U_3_1"):
		case joaat("CLO_H3M_PH_7_0"):
		case joaat("CLO_H3M_O_GRP_2"):
		case joaat("CLO_H3M_O_GRP_3"):
		case joaat("CLO_H3M_U_4_1"):
		case joaat("CLO_H3M_U_5_1"):
		case joaat("CLO_H3M_O_GRP_4"):
		case joaat("CLO_H3M_O_GRP_5"):
		case joaat("CLO_H3M_U_5_2"):
		case joaat("CLO_H3M_O_GRP_6"):
		case joaat("CLO_H3M_U_2_2"):
		case joaat("CLO_H3M_U_3_2"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_BS_1"):
		case joaat("CLO_H3M_B_6_1"):
		case joaat("CLO_H3M_PH_2_0"):
		case joaat("CLO_H3M_O_BS_2"):
		case joaat("CLO_H3M_B_15_1"):
		case joaat("CLO_H3M_O_BS_3"):
		case joaat("CLO_H3M_PH_3_0"):
		case joaat("CLO_H3M_O_BS_4"):
		case joaat("CLO_H3M_O_BS_5"):
		case joaat("CLO_H3M_B_6_0"):
		case joaat("CLO_H3M_O_BS_6"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_FF_1"):
		case joaat("CLO_H3M_PH_0_0"):
		case joaat("CLO_H3M_O_FF_2"):
		case joaat("CLO_H3M_O_FF_7"):
		case joaat("CLO_H3M_PH_1_0"):
		case joaat("CLO_H3M_O_FF_8"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_SL_11"):
		case joaat("CLO_H3M_O_SL_12"):
		case joaat("CLO_H3M_O_SL_13"):
		case joaat("CLO_H3M_O_SL_14"):
		case joaat("CLO_H3M_O_SL_15"):
		case joaat("CLO_H3M_O_SL_16"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_SL_21"):
		case joaat("CLO_H3M_O_SL_22"):
		case joaat("CLO_H3M_O_SL_23"):
		case joaat("CLO_H3M_O_SL_24"):
		case joaat("CLO_H3M_O_SL_25"):
		case joaat("CLO_H3M_O_SL_26"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_SL_31"):
		case joaat("CLO_H3M_B_9_0"):
		case joaat("CLO_H3M_O_SL_32"):
		case joaat("CLO_H3M_O_SL_33"):
		case joaat("CLO_H3M_O_SL_34"):
		case joaat("CLO_H3M_O_SL_35"):
		case joaat("CLO_H3M_O_SL_36"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3M_O_VAL_1"):
			return "CSHOP_LCKPRP";
			break;
			break;
		case joaat("CLO_H3M_O_PR_1"):
		case joaat("CLO_H3M_L_2_0"):
		case joaat("CLO_H3M_U_3_3"):
		case joaat("CLO_H3M_PH_2_1"):
		case joaat("CLO_H3M_PH_3_1"):
		case joaat("CLO_H3M_O_PR_4"):
		case joaat("CLO_H3M_U_5_4"):
		case joaat("CLO_H3M_O_PR_2"):
		case joaat("CLO_H3M_U_4_3"):
		case joaat("CLO_H3M_U_5_3"):
		case joaat("CLO_H3M_O_PR_3"):
		case joaat("CLO_H3M_U_2_4"):
		case joaat("CLO_H3M_U_3_4"):
			return "CSHOP_LCKPRP";
			break;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_H3F_PH_5_0"):
		case joaat("CLO_H3F_PH_6_0"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_DL_11"):
		case joaat("CLO_H3F_U_4_5"):
		case joaat("CLO_H3F_O_DL_12"):
		case joaat("CLO_H3F_U_7_0"):
		case joaat("CLO_H3F_O_DL_13"):
		case joaat("CLO_H3F_U_4_7"):
		case joaat("CLO_H3F_O_DL_14"):
		case joaat("CLO_H3F_U_8_0"):
		case joaat("CLO_H3F_O_DL_15"):
		case joaat("CLO_H3F_O_DL_16"):
		case joaat("CLO_H3F_U_5_3"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_DL_21"):
		case joaat("CLO_H3F_O_DL_22"):
		case joaat("CLO_H3F_O_DL_23"):
		case joaat("CLO_H3F_O_DL_24"):
		case joaat("CLO_H3F_O_DL_25"):
		case joaat("CLO_H3F_O_DL_26"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_DL_31"):
		case joaat("CLO_H3F_U_14_0"):
		case joaat("CLO_H3F_O_DL_32"):
		case joaat("CLO_H3F_O_DL_33"):
		case joaat("CLO_H3F_U_14_5"):
		case joaat("CLO_H3F_O_DL_34"):
		case joaat("CLO_H3F_U_14_6"):
		case joaat("CLO_H3F_O_DL_35"):
		case joaat("CLO_H3F_U_14_2"):
		case joaat("CLO_H3F_O_DL_36"):
		case joaat("CLO_H3F_U_14_4"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_DH_11"):
		case joaat("CLO_H3F_L_4_11"):
		case joaat("CLO_H3F_U_11_11"):
		case joaat("CLO_H3F_O_DH_12"):
		case joaat("CLO_H3F_L_4_12"):
		case joaat("CLO_H3F_U_11_12"):
		case joaat("CLO_H3F_O_DH_13"):
		case joaat("CLO_H3F_L_4_17"):
		case joaat("CLO_H3F_U_11_17"):
		case joaat("CLO_H3F_O_DH_14"):
		case joaat("CLO_H3F_L_4_13"):
		case joaat("CLO_H3F_U_11_13"):
		case joaat("CLO_H3F_O_DH_15"):
		case joaat("CLO_H3F_L_4_10"):
		case joaat("CLO_H3F_U_11_10"):
		case joaat("CLO_H3F_O_DH_16"):
		case joaat("CLO_H3F_L_4_18"):
		case joaat("CLO_H3F_U_11_18"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_DH_21"):
		case joaat("CLO_H3F_L_5_5"):
		case joaat("CLO_H3F_O_DH_22"):
		case joaat("CLO_H3F_L_5_3"):
		case joaat("CLO_H3F_O_DH_23"):
		case joaat("CLO_H3F_L_5_1"):
		case joaat("CLO_H3F_O_DH_24"):
		case joaat("CLO_H3F_O_DH_25"):
		case joaat("CLO_H3F_L_5_0"):
		case joaat("CLO_H3F_O_DH_26"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_DH_31"):
		case joaat("CLO_H3F_O_DH_32"):
		case joaat("CLO_H3F_O_DH_33"):
		case joaat("CLO_H3F_O_DH_34"):
		case joaat("CLO_H3F_O_DH_35"):
		case joaat("CLO_H3F_O_DH_36"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_SH_11"):
		case joaat("CLO_H3F_PH_10_0"):
		case joaat("CLO_H3F_PH_11_0"):
		case joaat("CLO_H3F_O_SH_12"):
		case joaat("CLO_H3F_O_SH_13"):
		case joaat("CLO_H3F_O_SH_14"):
		case joaat("CLO_H3F_S_1_0"):
		case joaat("CLO_H3F_O_SH_15"):
		case joaat("CLO_H3F_O_SH_16"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_SH_21"):
		case joaat("CLO_H3F_B_14_24"):
		case joaat("CLO_H3F_S_12_0"):
		case joaat("CLO_H3F_O_SH_22"):
		case joaat("CLO_H3F_B_14_22"):
		case joaat("CLO_H3F_O_SH_23"):
		case joaat("CLO_H3F_B_14_21"):
		case joaat("CLO_H3F_O_SH_24"):
		case joaat("CLO_H3F_B_14_10"):
		case joaat("CLO_H3F_O_SH_25"):
		case joaat("CLO_H3F_O_SH_26"):
		case joaat("CLO_H3F_B_14_2"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_SH_31"):
		case joaat("CLO_H3F_S_13_0"):
		case joaat("CLO_H3F_O_SH_32"):
		case joaat("CLO_H3F_O_SH_33"):
		case joaat("CLO_H3F_O_SH_34"):
		case joaat("CLO_H3F_O_SH_35"):
		case joaat("CLO_H3F_O_SH_36"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_FIB_1"):
		case joaat("CLO_H3F_O_FIB_2"):
		case joaat("CLO_H3F_O_FIB_3"):
		case joaat("CLO_H3F_O_FIB_4"):
			return "CSHOP_LCKPRP";
			break;
			break;
		case joaat("CLO_H3F_O_UND_1"):
		case joaat("CLO_H3F_PH_9_0"):
			return "CSHOP_LCKPRP";
			break;
			break;
		case joaat("CLO_H3F_O_PRP_1"):
		case joaat("CLO_H3F_O_PRP_2"):
			return "CSHOP_LCKPRP";
			break;
			break;
		case joaat("CLO_H3F_O_JAN_1"):
		case joaat("CLO_H3F_O_JAN_2"):
		case joaat("CLO_H3F_PH_5_1"):
		case joaat("CLO_H3F_PH_6_1"):
		case joaat("CLO_H3F_O_JAN_3"):
		case joaat("CLO_H3F_O_JAN_4"):
		case joaat("CLO_H3F_O_JAN_5"):
		case joaat("CLO_H3F_O_JAN_6"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_CLB_1"):
		case joaat("CLO_H3F_U_20_0"):
		case joaat("CLO_H3F_PH_2_2"):
		case joaat("CLO_H3F_O_CLB_2"):
		case joaat("CLO_H3F_O_CLB_3"):
		case joaat("CLO_H3F_PH_3_2"):
		case joaat("CLO_H3F_O_CLB_4"):
		case joaat("CLO_H3F_U_19_0"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_GRP_4"):
		case joaat("CLO_H3F_U_5_1"):
		case joaat("CLO_H3F_O_GRP_2"):
		case joaat("CLO_H3F_U_3_1"):
		case joaat("CLO_H3F_O_GRP_1"):
		case joaat("CLO_H3F_U_2_1"):
		case joaat("CLO_H3F_PH_7_0"):
		case joaat("CLO_H3F_O_GRP_3"):
		case joaat("CLO_H3F_U_4_1"):
		case joaat("CLO_H3F_O_GRP_5"):
		case joaat("CLO_H3F_U_5_2"):
		case joaat("CLO_H3F_O_GRP_6"):
		case joaat("CLO_H3F_U_2_2"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_BS_1"):
		case joaat("CLO_H3F_B_6_1"):
		case joaat("CLO_H3F_PH_2_0"):
		case joaat("CLO_H3F_O_BS_2"):
		case joaat("CLO_H3F_B_15_0"):
		case joaat("CLO_H3F_O_BS_3"):
		case joaat("CLO_H3F_PH_3_0"):
		case joaat("CLO_H3F_O_BS_4"):
		case joaat("CLO_H3F_O_BS_5"):
		case joaat("CLO_H3F_B_6_0"):
		case joaat("CLO_H3F_O_BS_6"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_FF_1"):
		case joaat("CLO_H3F_PH_0_0"):
		case joaat("CLO_H3F_O_FF_2"):
		case joaat("CLO_H3F_O_FF_7"):
		case joaat("CLO_H3F_PH_1_0"):
		case joaat("CLO_H3F_O_FF_8"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_SL_11"):
		case joaat("CLO_H3F_O_SL_12"):
		case joaat("CLO_H3F_O_SL_13"):
		case joaat("CLO_H3F_O_SL_14"):
		case joaat("CLO_H3F_O_SL_15"):
		case joaat("CLO_H3F_O_SL_16"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_SL_21"):
		case joaat("CLO_H3F_O_SL_22"):
		case joaat("CLO_H3F_O_SL_23"):
		case joaat("CLO_H3F_O_SL_24"):
		case joaat("CLO_H3F_O_SL_25"):
		case joaat("CLO_H3F_O_SL_26"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_SL_31"):
		case joaat("CLO_H3F_B_9_0"):
		case joaat("CLO_H3F_O_SL_32"):
		case joaat("CLO_H3F_O_SL_33"):
		case joaat("CLO_H3F_O_SL_34"):
		case joaat("CLO_H3F_O_SL_35"):
		case joaat("CLO_H3F_O_SL_36"):
			return "CSHOP_LCKFIN";
			break;
			break;
		case joaat("CLO_H3F_O_VAL_1"):
			return "CSHOP_LCKPRP";
			break;
			break;
		case joaat("CLO_H3F_O_PR_1"):
		case joaat("CLO_H3F_L_2_0"):
		case joaat("CLO_H3F_U_3_3"):
		case joaat("CLO_H3F_PH_2_1"):
		case joaat("CLO_H3F_PH_3_1"):
		case joaat("CLO_H3F_O_PR_4"):
		case joaat("CLO_H3F_U_5_4"):
		case joaat("CLO_H3F_O_PR_2"):
		case joaat("CLO_H3F_U_4_3"):
		case joaat("CLO_H3F_O_PR_3"):
		case joaat("CLO_H3F_U_2_4"):
			return "CSHOP_LCKPRP";
			break;
			break;
	}
	return "";
}

bool func_372(var uParam0, int iParam1)//Position - 0x697EA
{
	return BitTest(uParam0->f_390[(iParam1 / 32)], (iParam1 % 32));
}

void func_373(var uParam0)//Position - 0x69804
{
	MemCopy(uParam0, {Global_23150.f_5081}, 4);
}

void func_374(var uParam0)//Position - 0x69819
{
	MISC::CLEAR_BIT(&(uParam0->f_558), 1);
	MISC::CLEAR_BIT(&(uParam0->f_558), 0);
}

int func_375(var uParam0)//Position - 0x6AA10
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1044;
				break;
			case 1:
				return 1045;
				break;
			case 2:
				return 1046;
				break;
			case 3:
				return 1047;
				break;
			case 4:
				return 1048;
				break;
			case 5:
				return 1492;
				break;
			case 6:
				return 1493;
				break;
			case 7:
				return 1494;
				break;
			case 8:
				return 1495;
				break;
			case 9:
				return 1945;
				break;
			case 10:
				return 1946;
				break;
			case 11:
				return 1947;
				break;
			case 12:
				return 1948;
				break;
			case 13:
				return 2426;
				break;
			case 14:
				return 2446;
				break;
			case 15:
				return 2449;
				break;
			case 16:
				return 2452;
				break;
			case 17:
				return 2616;
				break;
			case 18:
				return 2619;
				break;
			case 19:
				return 2622;
				break;
			case 20:
				return 3788;
				break;
			case 21:
				return 3791;
				break;
			case 22:
				return 3866;
				break;
			case 23:
				return 3869;
				break;
			case 24:
				return 3872;
				break;
			case 25:
				return 3875;
				break;
			case 26:
				return 5366;
				break;
			case 27:
				return 5369;
				break;
			case 28:
				return 5471;
				break;
			case 29:
				return 5474;
				break;
			case 30:
				return 6433;
				break;
			case 31:
				return 6436;
				break;
			case 32:
				return 7257;
				break;
			case 33:
				return 7260;
				break;
			case 34:
				return 7263;
				break;
			case 35:
				return 7972;
				break;
			case 36:
				return 7975;
				break;
			case 37:
				return 7978;
				break;
			case 38:
				return 7981;
				break;
			case 39:
				return 8503;
				break;
			case 40:
				return 8506;
				break;
			case 41:
				return 8509;
				break;
			case 42:
				return 8512;
				break;
			case 43:
				return 8908;
				break;
			case 44:
				return 8911;
				break;
			case 45:
				return 8914;
				break;
			case 46:
				return 10289;
				break;
			case 47:
				return 10292;
				break;
			case 48:
				return 10415;
				break;
			case 49:
				return 10418;
				break;
		}
	}
	return 13122;
}

void func_376(int iParam0, bool bParam1)//Position - 0x6AD84
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2825435.f_1032[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2825435.f_1032[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
	}
}

char* func_377(int iParam0, int iParam1)//Position - 0x6AE9E
{
	char* sVar0;
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		case 57:
			return "MPTattoos2";
			break;
		case 58:
			return "MPTattoos2";
			break;
		case 59:
			return "MPTattoos2";
			break;
		case 60:
			return "MPTattoos2";
			break;
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_378(int iParam0, int iParam1)//Position - 0x6AF83
{
	char* sVar0;
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		case 0:
			return "HeadBanger";
			break;
		case 1:
			return "theslayer";
			break;
		case 2:
			return "clearout";
			break;
		case 4:
			return "thehustler";
			break;
		case 3:
			return "armoredvantakedowns";
			break;
		case 54:
			return "wineverymodeonce";
			break;
		case 5:
			return "killplayerbountyhead";
			break;
		case 6:
			return "holdworldrecord";
			break;
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		case 7:
			return "getrevengekills";
			break;
		case 8:
			return "kill3otherracers";
			break;
		case 9:
			return "reachrank1";
			break;
		case 10:
			return "reachrank2";
			break;
		case 11:
			return "reachrank3";
			break;
		case 13:
			return "HeadBanger";
			break;
		case 14:
			return "HeadBanger";
			break;
		case 15:
			return "HeadBanger";
			break;
		case 16:
			return "HeadBanger";
			break;
		case 89:
			return "RockstarVerifiied";
			break;
		case 87:
			return "ReachHordeModeWave";
			break;
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		case 18:
			return "Headbanger";
			break;
		case 19:
			return "Headbanger";
			break;
		case 20:
			return "Headbanger";
			break;
		case 21:
			return "Headbanger";
			break;
		case 22:
			return "Headbanger";
			break;
		case 23:
			return "Headbanger";
			break;
		case 24:
			return "Headbanger";
			break;
		case 25:
			return "MP_FM_Tat_002";
			break;
		case 26:
			return "Headbanger";
			break;
		case 27:
			return "Headbanger";
			break;
		case 28:
			return "Headbanger";
			break;
		case 61:
			return "Headbanger";
			break;
		case 62:
			return "Headbanger";
			break;
		case 63:
			return "Headbanger";
			break;
		case 64:
			return "Headbanger";
			break;
		case 65:
			return "MP_FM_Tat_019";
			break;
		case 29:
			return "Headbanger";
			break;
		case 30:
			return "Headbanger";
			break;
		case 31:
			return "Headbanger";
			break;
		case 66:
			return "Headbanger";
			break;
		case 32:
			return "Headbanger";
			break;
		case 33:
			return "Headbanger";
			break;
		case 34:
			return "MP_FM_Tat_023";
			break;
		case 35:
			return "Headbanger";
			break;
		case 36:
			return "Headbanger";
			break;
		case 37:
			return "Headbanger";
			break;
		case 38:
			return "Headbanger";
			break;
		case 39:
			return "Headbanger";
			break;
		case 40:
			return "Headbanger";
			break;
		case 67:
			return "Headbanger";
			break;
		case 41:
			return "Headbanger";
			break;
		case 68:
			return "Headbanger";
			break;
		case 42:
			return "Headbanger";
			break;
		case 43:
			return "Headbanger";
			break;
		case 44:
			return "Headbanger";
			break;
		case 45:
			return "MP_FM_Tat_036";
			break;
		case 46:
			return "MP_FM_Tat_037";
			break;
		case 47:
			return "Headbanger";
			break;
		case 48:
			return "MP_FM_Tat_039";
			break;
		case 49:
			return "MP_FM_Tat_040";
			break;
		case 50:
			return "Headbanger";
			break;
		case 51:
			return "Headbanger";
			break;
		case 52:
			return "Headbanger";
			break;
		case 53:
			return "Headbanger";
			break;
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_379(int iParam0, int iParam1)//Position - 0x6B42E
{
	char* sVar0;
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D" /* GXT: Complete The Equalizer platinum Award. ~n~Get 50 Revenge kills in Deathmatch. */;
			break;
		case 6:
			return "TAT_FM_RECHOLD_d" /* GXT: Complete The Record Holder platinum Award. ~n~Hold a World Record in a Rockstar Race. */;
			break;
		case 8:
			return "TAT_FM_KIL3RACE_D" /* GXT: Complete the Road Rage platinum Award. ~n~Kill at least 3 other racers in a GTA Race and win. */;
			break;
		case 5:
			return "TAT_FM_KILb_D" /* GXT: Complete The Bounty Hunter platinum Award. ~n~Kill 25 Bounty Targets. */;
			break;
		case 0:
			return "TAT_FM_HEADBANG_D" /* GXT: Complete the Head Banger platinum Award. ~n~Get 500 player headshots. */;
			break;
		case 12:
			return "TAT_RACE50_D" /* GXT: Complete The Champion platinum Award. ~n~Win 50 Races. */;
			break;
		case 2:
			return "TAT_CLEAROUT_D" /* GXT: Complete the Clear Out platinum Award. ~n~Clear 5 Gang Attacks in one day, in a single session. */;
			break;
		case 9:
			return "TAT_FM_RANK1_D" /* GXT: Complete The Widow Maker silver Award. ~n~Get 250 player kills. */;
			break;
		case 10:
			return "TAT_FM_RANK2_D" /* GXT: Complete The Widow Maker gold Award. ~n~Get 500 player kills. */;
			break;
		case 11:
			return "TAT_FM_RANK3_D" /* GXT: Complete The Widow Maker platinum Award. ~n~Get 1000 player kills. */;
			break;
		case 4:
			return "TAT_FM_HUST_D" /* GXT: Complete The Hustler platinum Award. ~n~Earn $50,000 winnings from betting. */;
			break;
		case 1:
			return "TAT_FM_SLAY_D" /* GXT: Complete The Slayer platinum Award. ~n~Win 50 Deathmatches. */;
			break;
		case 54:
			return "TAT_FM_EVERMODE1_D" /* GXT: Complete the All Rounder platinum Award. ~n~Win every game mode. */;
			break;
		case 3:
			return "TAT_FM_ARVANTAKE_D" /* GXT: Complete the Full Metal Jacket platinum Award. ~n~Rob 25 Armored Trucks. */;
			break;
		case 56:
			return "TAT_CHEATER_D" /* GXT: Complete The Car Bomber platinum Award. ~n~Kill 25 players using vehicle explosives. */;
			break;
		case 13:
			return "TAT_CRANKA_D" /* GXT: Reached Crew Rank 26. */;
			break;
		case 14:
			return "TAT_CRANKB_D" /* GXT: Reached Crew Rank 45. */;
			break;
		case 15:
			return "TAT_CRANKC_D" /* GXT: Reached Crew Rank 18. */;
			break;
		case 16:
			return "TAT_CRANKD_D" /* GXT: Reached Crew Rank 52. */;
			break;
		case 89:
			return "TAT_FM_ROCKSTAR_D" /* GXT: Create a Race, Deathmatch, Capture, or Last Team Standing and get it verified by Rockstar Games. */;
			break;
		case 87:
			return "TAT_FM_REDSKULL_D" /* GXT: Complete The Survivor platinum Award. ~n~Complete a Survival. */;
			break;
		case 55:
			return "TAT_FM_MODDED_D" /* GXT: Complete the Suped Up platinum Award. ~n~Apply each type of mod to a single vehicle. */;
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 18:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 19:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 20:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 21:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 22:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 23:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 24:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 25:
			return "TAT_TAT9U" /* GXT: Get 500 kills in Deathmatch to unlock this item. */;
			break;
		case 26:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 27:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 28:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 61:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 62:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 63:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 64:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 65:
			return "TAT_TAT17U" /* GXT: Get the most kills in a 4 player Survival to unlock this item. */;
			break;
		case 29:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 30:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 31:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		case 66:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 32:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 33:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 34:
			return "TAT_TAT24U" /* GXT: Get 25 Private Dances to unlock this item. */;
			break;
		case 35:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 36:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 37:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 38:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 39:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 40:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 67:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 41:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 68:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 42:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 43:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 44:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 45:
			return "TAT_TAT37U" /* GXT: Get 500 Pistol kills to unlock this item. */;
			break;
		case 46:
			return "TAT_TAT38U" /* GXT: Earn 50 MVPs in Team Deathmatch to unlock this item. */;
			break;
		case 47:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 48:
			return "TAT_TAT40U" /* GXT: Get 100 Sniper kills to unlock this item. */;
			break;
		case 49:
			return "TAT_TAT41U" /* GXT: Earn a 10 plus killstreak in Deathmatch to unlock this item. */;
			break;
		case 50:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 51:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 52:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 53:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 69:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		case 57:
			return "TAT_HOLDUP1V_D" /* GXT: Complete the Armed Robber bronze Award. ~n~Hold up 5 stores. */;
			break;
		case 58:
			return "TAT_HOLDUP5V_D" /* GXT: Complete the Armed Robber silver Award. ~n~Hold up 10 stores. */;
			break;
		case 59:
			return "TAT_HOLDUP10V_D" /* GXT: Complete the Armed Robber gold Award. ~n~Hold up 15 stores. */;
			break;
		case 60:
			return "TAT_HOLDUP20V_D" /* GXT: Complete the Armed Robber platinum Award. ~n~Hold up 20 stores. */;
			break;
	}
	return sVar0;
}

char* func_380(int iParam0, int iParam1)//Position - 0x6B8D9
{
	char* sVar0;
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG" /* GXT: Skull */;
			break;
		case 2:
			return "TAT_CLEAROUT" /* GXT: Grim Reaper Smoking Gun */;
			break;
		case 9:
			return "TAT_FM_RANK1" /* GXT: Blank Scroll */;
			break;
		case 10:
			return "TAT_FM_RANK2" /* GXT: Embellished Scroll */;
			break;
		case 11:
			return "TAT_FM_RANK3" /* GXT: Seven Deadly Sins */;
			break;
		case 4:
			return "TAT_FM_HUST" /* GXT: Hustler */;
			break;
		case 1:
			return "TAT_FM_SLAY" /* GXT: Burning Heart */;
			break;
		case 54:
			return "TAT_FM_EVERMODE1" /* GXT: Angel */;
			break;
		case 3:
			return "TAT_FM_ARVANTAKE" /* GXT: Blackjack */;
			break;
		case 7:
			return "TAT_FM_REVENKIL" /* GXT: Dragon and Dagger */;
			break;
		case 5:
			return "TAT_FM_KILb" /* GXT: Skull and Sword */;
			break;
		case 8:
			return "TAT_FM_KIL3RACE" /* GXT: Ride or Die */;
			break;
		case 6:
			return "TAT_FM_RECHOLD" /* GXT: Racing Blonde */;
			break;
		case 12:
			return "TAT_RACE50" /* GXT: Racing Brunette */;
			break;
		case 13:
			return "TAT_CRANKA" /* GXT: Crew Rank 1 */;
			break;
		case 14:
			return "TAT_CRANKB" /* GXT: Crew Rank 2 */;
			break;
		case 15:
			return "TAT_CRANKC" /* GXT: Crew Rank 3 */;
			break;
		case 16:
			return "TAT_CRANKD" /* GXT: Crew Rank 4 */;
			break;
		case 87:
			return "TAT_FM_REDSKULL" /* GXT: Red Skull T-Shirt */;
			break;
		case 88:
			return "TAT_FM_BELLE" /* GXT: Los Santos Belle T-Shirt */;
			break;
		case 89:
			return "TAT_FM_ROCKSTAR" /* GXT: Rockstar T-Shirt */;
			break;
		case 55:
			return "TAT_FM_MODDED" /* GXT: Los Santos Customs */;
			break;
		case 17:
			return "TAT_FM_TAT1" /* GXT: Tattoo 1 */;
			break;
		case 18:
			return "TAT_FM_TAT2" /* GXT: Tattoo 2 */;
			break;
		case 19:
			return "TAT_FM_TAT3" /* GXT: Tattoo 3 */;
			break;
		case 20:
			return "TAT_FM_TAT4" /* GXT: Tattoo 4 */;
			break;
		case 21:
			return "TAT_FM_TAT5" /* GXT: Tattoo 5 */;
			break;
		case 22:
			return "TAT_FM_TAT6" /* GXT: Tattoo 6 */;
			break;
		case 56:
			return "TAT_CHEATER" /* GXT: Trust No One */;
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7" /* GXT: Tattoo 7 */;
			break;
		case 24:
			return "TAT_FM_TAT8" /* GXT: Tattoo 8 */;
			break;
		case 25:
			return "TAT_FM_TAT9" /* GXT: Melting Skull */;
			break;
		case 26:
			return "TAT_FM_TAT10" /* GXT: Tattoo 10 */;
			break;
		case 27:
			return "TAT_FM_TAT11" /* GXT: Tattoo 11 */;
			break;
		case 28:
			return "TAT_FM_TAT12" /* GXT: Tattoo 12 */;
			break;
		case 61:
			return "TAT_FM_TAT13" /* GXT: Tattoo 13 */;
			break;
		case 62:
			return "TAT_FM_TAT14" /* GXT: Tattoo 14 */;
			break;
		case 63:
			return "TAT_FM_TAT15" /* GXT: Tattoo 1 */;
			break;
		case 64:
			return "TAT_FM_TAT16" /* GXT: Tattoo 16 */;
			break;
		case 65:
			return "TAT_FM_TAT38" /* GXT: The Wages of Sin */;
			break;
		case 29:
			return "TAT_FM_TAT18" /* GXT: Tattoo 19 */;
			break;
		case 30:
			return "TAT_FM_TAT19";
			break;
		case 31:
			return "TAT_FM_TAT20" /* GXT: Tattoo 20 */;
			break;
		case 66:
			return "TAT_FM_TAT21" /* GXT: Tattoo 21 */;
			break;
		case 32:
			return "TAT_FM_TAT22" /* GXT: Tattoo 22 */;
			break;
		case 33:
			return "TAT_FM_TAT23" /* GXT: Tattoo 23 */;
			break;
		case 34:
			return "TAT_FM_TAT24" /* GXT: Hottie */;
			break;
		case 35:
			return "TAT_FM_TAT25" /* GXT: Tattoo 25 */;
			break;
		case 36:
			return "TAT_FM_TAT26" /* GXT: Tattoo 26 */;
			break;
		case 37:
			return "TAT_FM_TAT27" /* GXT: Tattoo 27 */;
			break;
		case 38:
			return "TAT_FM_TAT28" /* GXT: Tattoo 28 */;
			break;
		case 39:
			return "TAT_FM_TAT29" /* GXT: Tattoo 29 */;
			break;
		case 40:
			return "TAT_FM_TAT30" /* GXT: Tattoo 30 */;
			break;
		case 67:
			return "TAT_FM_TAT31" /* GXT: Tattoo 31 */;
			break;
		case 41:
			return "TAT_FM_TAT32" /* GXT: Tattoo 32 */;
			break;
		case 68:
			return "TAT_FM_TAT33" /* GXT: Tattoo 33 */;
			break;
		case 42:
			return "TAT_FM_TAT34" /* GXT: Tattoo 34 */;
			break;
		case 43:
			return "TAT_FM_TAT35" /* GXT: Tattoo 35 */;
			break;
		case 44:
			return "TAT_FM_TAT36" /* GXT: Tattoo 36 */;
			break;
		case 45:
			return "TAT_FM_TAT37" /* GXT: Way Of The Gun */;
			break;
		case 46:
			return "TAT_FM_TAT41" /* GXT: Grim Reaper */;
			break;
		case 47:
			return "TAT_FM_TAT39" /* GXT: Tattoo 39 */;
			break;
		case 48:
			return "TAT_FM_TAT40" /* GXT: Broken Skull */;
			break;
		case 49:
			return "TAT_FM_TAT17" /* GXT: Flaming Skull */;
			break;
		case 50:
			return "TAT_FM_TAT42" /* GXT: Tattoo 42 */;
			break;
		case 51:
			return "TAT_FM_TAT43" /* GXT: Tattoo 43 */;
			break;
		case 52:
			return "TAT_FM_TAT44" /* GXT: Tattoo 44 */;
			break;
		case 53:
			return "TAT_FM_TAT45" /* GXT: Tattoo 45 */;
			break;
		case 69:
			return "TAT_FM_TAT46" /* GXT: Tattoo 46 */;
			break;
		case 57:
			return "TAT_HOLDUP1V" /* GXT: Clown */;
			break;
		case 58:
			return "TAT_HOLDUP5V" /* GXT: Clown and Gun */;
			break;
		case 59:
			return "TAT_HOLDUP10V" /* GXT: Clown Dual Wield */;
			break;
		case 60:
			return "TAT_HOLDUP20V" /* GXT: Clown Dual Wield Dollars */;
			break;
	}
	return sVar0;
}

var func_381(int iParam0)//Position - 0x6BDB1
{
	var uVar0;
	uVar0 = Global_2825435.f_1032[__LIB_0__::func_159(iParam0)];
	return uVar0;
}

int func_382(int iParam0)//Position - 0x6BE6A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_4538992.f_217)
	{
		if (Global_4538992.f_31[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_383(var uParam0, int iParam1)//Position - 0x6CB58
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam1))
	{
		case joaat("MP_M_Freemode_01"):
			Stack.Push(iParam1);
			Stack.Push(14);
			Stack.Push(0);
			Call_Loc(uParam0->f_508);
			iVar0 = StackVal;
			if (iVar0 >= 131 && iVar0 <= 154)
			{
				Stack.Push(iParam1);
				Stack.Push(14);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_509);
			}
			break;
		case joaat("MP_F_Freemode_01"):
			Stack.Push(iParam1);
			Stack.Push(14);
			Stack.Push(0);
			Call_Loc(uParam0->f_508);
			iVar0 = StackVal;
			if (iVar0 >= 131 && iVar0 <= 154)
			{
				Stack.Push(iParam1);
				Stack.Push(14);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_509);
			}
			break;
	}
}

void func_384(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x74D4A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			switch (iParam1)
			{
				case 0:
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 1);
					break;
				case 3:
				case 10:
				case 11:
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
					break;
				case 4:
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 4);
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
					break;
				case 6:
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 4);
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
					break;
				case 5:
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
					break;
				case 12:
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 1);
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 4);
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
					PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
					break;
				case 14:
					switch (__LIB_0__::func_40(iParam2))
					{
						case 0:
						case 1:
						case 2:
						case 3:
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 1);
							break;
						case 4:
						case 6:
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
							break;
						case 5:
						case 7:
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
							break;
						case 8:
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
							break;
					}
					break;
			}
			if (iParam3 == 1)
			{
				if (((iParam1 == 12 || iParam1 == 3) || iParam1 == 10) || iParam1 == 11)
				{
					PED::SET_PED_SWEAT(iParam0, 0f);
				}
			}
		}
	}
}

bool func_385(int iParam0)//Position - 0x74EC5
{
	return FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 11, joaat("FITTED_HOOD"));
}

int func_386(int iParam0, int iParam1, int iParam2)//Position - 0x7506D
{
	int iVar0;
	int iVar1;
	int iVar2;
	*iParam1 = 0;
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, iVar1);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HOODED_JACKET"), 0))
	{
		*iParam1 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HOOD_UP"), 0);
		*iParam2 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HOOD_TUCKED"), 0);
		return 1;
	}
	return 0;
}

int func_387(int iParam0)//Position - 0x76E0E
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_8__::func_712(iParam0);
	iVar1 = __LIB_0__::func_228(398, iParam0);
	if (iVar0 == 0 && iVar1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0)//Position - 0x77699
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
	{
		return 1;
	}
	return 0;
}

int func_389(bool bParam0)//Position - 0x7B70D
{
	var uVar0;
	switch (bParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		default:
	}
	return 0;
}

int func_390(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7BF7D
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("CLO_IEM_O_3"):
		case joaat("CLO_IEF_O_3"):
			return 50;
			break;
		case joaat("CLO_IEM_O_4"):
		case joaat("CLO_IEF_O_4"):
			return 52;
			break;
		case joaat("CLO_IEM_O_5"):
		case joaat("CLO_IEF_O_5"):
			return 45;
			break;
		case joaat("CLO_IEM_O_6"):
		case joaat("CLO_IEF_O_6"):
			return 44;
			break;
		case joaat("CLO_IEM_O_7"):
		case joaat("CLO_IEF_O_7"):
			return 48;
			break;
		case joaat("CLO_IEM_O_8"):
		case joaat("CLO_IEF_O_8"):
			return 47;
			break;
		case joaat("CLO_IEM_O_9"):
		case joaat("CLO_IEF_O_9"):
			return 46;
			break;
		case joaat("CLO_IEM_O_10"):
		case joaat("CLO_IEF_O_10"):
			return 49;
			break;
		case joaat("CLO_IEM_O_11"):
		case joaat("CLO_IEF_O_11"):
			return 51;
			break;
		case joaat("CLO_IEM_O_12"):
		case joaat("CLO_IEF_O_12"):
			return 43;
			break;
		case joaat("CLO_STM_O_0"):
		case joaat("CLO_STF_O_0"):
			return 22;
			break;
		case joaat("CLO_STM_O_1"):
		case joaat("CLO_STF_O_1"):
			return 23;
			break;
		case joaat("CLO_STM_O_2"):
		case joaat("CLO_STF_O_2"):
			return 24;
			break;
		case joaat("CLO_STM_O_3"):
		case joaat("CLO_STF_O_3"):
			return 25;
			break;
		case joaat("CLO_STM_O_4"):
		case joaat("CLO_STF_O_4"):
			return 26;
			break;
		case joaat("CLO_STM_O_5"):
		case joaat("CLO_STF_O_5"):
			return 27;
			break;
		case joaat("CLO_STM_O_6"):
		case joaat("CLO_STF_O_6"):
			return 28;
			break;
		case joaat("CLO_STM_O_7"):
		case joaat("CLO_STF_O_7"):
			return 29;
			break;
		case joaat("CLO_STM_O_8"):
		case joaat("CLO_STF_O_8"):
			return 30;
			break;
		case joaat("CLO_STM_O_9"):
		case joaat("CLO_STF_O_9"):
			return 31;
			break;
		case joaat("CLO_STM_O_10"):
		case joaat("CLO_STF_O_10"):
			return 32;
			break;
		case joaat("CLO_STM_O_11"):
		case joaat("CLO_STF_O_11"):
			return 33;
			break;
		case joaat("CLO_STM_O_12"):
		case joaat("CLO_STF_O_12"):
			return 34;
			break;
		case joaat("CLO_STM_O_13"):
		case joaat("CLO_STF_O_13"):
			return 35;
			break;
		case joaat("CLO_STM_O_14"):
		case joaat("CLO_STF_O_14"):
			return 36;
			break;
		case joaat("CLO_STM_O_15"):
		case joaat("CLO_STF_O_15"):
			return 37;
			break;
		case joaat("CLO_STM_O_16"):
		case joaat("CLO_STF_O_16"):
			return 38;
			break;
		case joaat("CLO_STM_O_17"):
		case joaat("CLO_STF_O_17"):
			return 39;
			break;
		case joaat("CLO_STM_O_18"):
		case joaat("CLO_STF_O_18"):
			return 40;
			break;
		case joaat("CLO_STM_O_19"):
		case joaat("CLO_STF_O_19"):
			return 41;
			break;
		case joaat("CLO_STM_O_20"):
		case joaat("CLO_STF_O_20"):
			return 42;
			break;
	}
	return 114;
}

void func_391(var uParam0)//Position - 0x8A1A4
{
	MISC::CLEAR_BIT(&(uParam0->f_556), 10);
	MISC::CLEAR_BIT(&(uParam0->f_556), 12);
	uParam0->f_700 = 0;
}

void func_392(int iParam0)//Position - 0x8A208
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_4539332 == -1)
	{
		Global_4539332 = MONEY::NETWORK_GET_VC_BANK_BALANCE();
	}
	if (Global_4539333 == -1)
	{
		Global_4539333 = MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = iParam0;
	if (Global_4539332 > 0)
	{
		if (Global_4539332 >= iVar2)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = (iVar2 - (iVar2 - Global_4539332));
		}
		iVar2 = (iVar2 - iVar1);
	}
	if (iVar2 > 0)
	{
		if (Global_4539333 > 0)
		{
			if (Global_4539333 >= iVar2)
			{
				iVar0 = iVar2;
			}
			else
			{
				iVar0 = (iVar2 - (iVar2 - Global_4539333));
			}
			iVar2 = (iVar2 - iVar0);
		}
	}
	if (Global_4538992.f_217 == 1)
	{
		HUD::USE_FAKE_MP_CASH(true);
	}
	HUD::CHANGE_FAKE_MP_CASH(-iVar0, -iVar1);
	Global_4539332 = (Global_4539332 - iVar0);
	Global_4539333 = (Global_4539333 - iVar1);
}

void func_393(int iParam0)//Position - 0x8A434
{
	if (iParam0 < 0 || iParam0 >= 30)
	{
		return;
	}
	Global_4538992[iParam0] = 0;
	Global_4538992.f_31[iParam0] = -1;
	Global_4538992.f_62[iParam0] = -1;
	Global_4538992.f_93[iParam0] = -1;
	Global_4538992.f_124[iParam0] = -99;
	Global_4538992.f_155[iParam0] = 0;
	Global_4538992.f_186[iParam0] = -1;
}

void func_394(int iParam0)//Position - 0x8BD3D
{
	*iParam0 *= 2;
}

void func_395(char[16] cParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5)//Position - 0xECD0A
{
	Global_100493.f_1384 = { cParam0 };
	Global_100493.f_1388 = iParam1;
	Global_100493.f_1389 = iParam2;
	Global_100493.f_1390 = iParam3;
	Global_100493.f_1391 = uParam4;
	Global_100493.f_1392 = iParam5;
}

var func_396(var uParam0)//Position - 0xECDEC
{
	return uParam0->f_694 * 2;
}

bool func_397(var uParam0)//Position - 0xECDFB
{
	return (BitTest(uParam0->f_556, 1) && BitTest(uParam0->f_558, 1));
}

int func_398(bool bParam0)//Position - 0xECE86
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_66.f_0))
			{
				return 1;
			}
			else if (bParam0)
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_66.f_0);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_399(int iParam0)//Position - 0xF6D9F
{
	switch (iParam0)
	{
		case joaat("CLO_TRM_PH_1_9"):
		case joaat("CLO_TRM_PH_2_9"):
			return 2;
		case joaat("CLO_TRM_F_1_12"):
			return 3;
		case joaat("CLO_TRM_U_11_6"):
		case joaat("CLO_TRM_U_12_6"):
			return 4;
		case joaat("CLO_TRM_U_7_3"):
			return 7;
		case joaat("CLO_TRM_U_16_8"):
			return 9;
		case joaat("CLO_TRM_U_15_20"):
			return 10;
		case joaat("CLO_TRM_U_8_3"):
			return 13;
		case joaat("CLO_TRM_D_16_0"):
		case joaat("CLO_TRM_D_25_0"):
			return 15;
		case joaat("CLO_TRM_U_9_10"):
			return 16;
		case joaat("CLO_TRM_U_17_11"):
		case joaat("CLO_TRM_U_19_11"):
			return 19;
		case joaat("CLO_TRM_PH_1_10"):
		case joaat("CLO_TRM_PH_2_10"):
			return 21;
		case joaat("CLO_TRM_F_1_4"):
			return 22;
		case joaat("CLO_TRM_U_11_16"):
		case joaat("CLO_TRM_U_12_16"):
			return 25;
		case joaat("CLO_TRM_U_7_2"):
			return 27;
		case joaat("CLO_TRM_U_16_9"):
			return 28;
		case joaat("CLO_TRM_U_15_19"):
			return 31;
		case joaat("CLO_TRM_U_8_2"):
			return 33;
		case joaat("CLO_TRM_D_11_0"):
		case joaat("CLO_TRM_D_20_0"):
			return 34;
		case joaat("CLO_TRM_U_9_12"):
			return 37;
		case joaat("CLO_TRM_O_R3"):
			return 39;
		case joaat("CLO_TRM_U_17_8"):
		case joaat("CLO_TRM_U_19_8"):
			return 40;
		case joaat("CLO_TRM_PH_1_12"):
		case joaat("CLO_TRM_PH_2_12"):
			return 42;
		case joaat("CLO_TRM_F_1_3"):
			return 44;
		case joaat("CLO_TRM_U_11_5"):
		case joaat("CLO_TRM_U_12_5"):
			return 45;
		case joaat("CLO_TRM_U_7_15"):
			return 47;
		case joaat("CLO_TRM_U_16_1"):
			return 49;
		case joaat("CLO_TRM_U_15_0"):
			return 50;
		case joaat("CLO_TRM_U_8_15"):
			return 52;
		case joaat("CLO_TRM_D_13_0"):
		case joaat("CLO_TRM_D_22_0"):
			return 54;
		case joaat("CLO_TRM_U_9_7"):
			return 55;
		case joaat("CLO_TRM_O_R2"):
			return 57;
		case joaat("CLO_TRM_U_17_5"):
		case joaat("CLO_TRM_U_19_5"):
			return 58;
		case joaat("CLO_TRM_PH_1_7"):
		case joaat("CLO_TRM_PH_2_7"):
			return 60;
		case joaat("CLO_TRM_F_1_18"):
			return 61;
		case joaat("CLO_TRM_O_R4"):
			return 63;
		case joaat("CLO_TRM_U_11_15"):
		case joaat("CLO_TRM_U_12_15"):
			return 64;
		case joaat("CLO_TRM_U_7_14"):
			return 66;
		case joaat("CLO_TRM_U_16_3"):
			return 67;
		case joaat("CLO_TRM_O_R5"):
			return 69;
		case joaat("CLO_TRM_U_15_3"):
			return 70;
		case joaat("CLO_TRM_U_8_14"):
			return 72;
		case joaat("CLO_TRM_D_12_0"):
		case joaat("CLO_TRM_D_21_0"):
			return 73;
		case joaat("CLO_TRM_O_R1"):
			return 75;
		case joaat("CLO_TRM_U_9_6"):
			return 76;
		case joaat("CLO_TRM_U_17_9"):
		case joaat("CLO_TRM_U_19_9"):
			return 78;
		case joaat("CLO_TRM_PH_1_13"):
		case joaat("CLO_TRM_PH_2_13"):
			return 79;
		case joaat("CLO_TRM_O_R6"):
			return 81;
		case joaat("CLO_TRM_F_1_19"):
			return 82;
		case joaat("CLO_TRM_U_11_19"):
		case joaat("CLO_TRM_U_12_19"):
			return 84;
		case joaat("CLO_TRM_U_7_8"):
			return 85;
		case joaat("CLO_TRM_O_R7"):
			return 87;
		case joaat("CLO_TRM_U_16_0"):
			return 88;
		case joaat("CLO_TRM_U_15_4"):
			return 90;
		case joaat("CLO_TRM_U_8_8"):
			return 91;
		case joaat("CLO_TRM_D_10_0"):
		case joaat("CLO_TRM_D_19_0"):
			return 94;
		case joaat("CLO_TRM_U_9_3"):
			return 96;
		case joaat("CLO_TRM_U_17_2"):
		case joaat("CLO_TRM_U_19_2"):
			return 97;
		case joaat("CLO_TRM_PH_1_3"):
		case joaat("CLO_TRM_PH_2_3"):
			return 100;
		case joaat("CLO_TRM_F_1_15"):
			return 102;
		case joaat("CLO_TRM_U_11_9"):
		case joaat("CLO_TRM_U_12_9"):
			return 103;
		case joaat("CLO_TRM_U_7_9"):
			return 105;
		case joaat("CLO_TRM_U_16_2"):
			return 107;
		case joaat("CLO_TRM_U_15_2"):
			return 108;
		case joaat("CLO_TRM_U_8_9"):
			return 110;
		case joaat("CLO_TRM_D_15_0"):
		case joaat("CLO_TRM_D_24_0"):
			return 112;
		case joaat("CLO_TRM_U_9_13"):
			return 113;
		case joaat("CLO_TRM_U_17_1"):
		case joaat("CLO_TRM_U_19_1"):
			return 115;
		case joaat("CLO_TRM_PH_1_4"):
		case joaat("CLO_TRM_PH_2_4"):
			return 117;
		case joaat("CLO_TRM_F_1_23"):
			return 118;
		case joaat("CLO_TRM_U_11_20"):
		case joaat("CLO_TRM_U_12_20"):
			return 120;
		case joaat("CLO_TRM_U_7_13"):
			return 122;
		case joaat("CLO_TRM_U_16_5"):
			return 125;
		case joaat("CLO_TRM_U_15_5"):
			return 127;
		case joaat("CLO_TRM_U_8_13"):
			return 130;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_TRM_D_14_0"):
		case joaat("CLO_TRM_D_23_0"):
			return 132;
		case joaat("CLO_TRM_U_9_8"):
			return 135;
		case joaat("CLO_TRM_U_17_4"):
		case joaat("CLO_TRM_U_19_4"):
			return 137;
		case joaat("CLO_TRM_PH_1_5"):
		case joaat("CLO_TRM_PH_2_5"):
			return 140;
		case joaat("CLO_TRM_F_1_20"):
			return 142;
		case joaat("CLO_TRM_U_11_10"):
		case joaat("CLO_TRM_U_12_10"):
			return 145;
		case joaat("CLO_TRM_U_7_12"):
			return 147;
		case joaat("CLO_TRM_U_16_4"):
			return 150;
		case joaat("CLO_TRM_U_15_8"):
			return 152;
		case joaat("CLO_TRM_U_8_12"):
			return 155;
		case joaat("CLO_TRM_D_9_0"):
		case joaat("CLO_TRM_D_18_0"):
			return 157;
		case joaat("CLO_TRM_U_9_9"):
			return 160;
		case joaat("CLO_TRM_U_17_6"):
		case joaat("CLO_TRM_U_19_6"):
			return 162;
		case joaat("CLO_TRM_PH_1_6"):
		case joaat("CLO_TRM_PH_2_6"):
			return 165;
		case joaat("CLO_TRM_F_1_13"):
			return 167;
		case joaat("CLO_TRM_U_11_14"):
		case joaat("CLO_TRM_U_12_14"):
			return 170;
		case joaat("CLO_TRM_U_7_4"):
			return 172;
		case joaat("CLO_TRM_U_16_6"):
			return 175;
		case joaat("CLO_TRM_U_15_7"):
			return 177;
		case joaat("CLO_TRM_U_8_4"):
			return 180;
		case joaat("CLO_TRM_U_9_5"):
			return 182;
		case joaat("CLO_TRM_U_17_3"):
		case joaat("CLO_TRM_U_19_3"):
			return 185;
		case joaat("CLO_TRM_PH_1_8"):
		case joaat("CLO_TRM_PH_2_8"):
			return 187;
		case joaat("CLO_TRM_F_1_14"):
			return 190;
		case joaat("CLO_TRM_U_11_17"):
		case joaat("CLO_TRM_U_12_17"):
			return 192;
		case joaat("CLO_TRM_U_7_5"):
			return 195;
		case joaat("CLO_TRM_U_15_15"):
			return 197;
		case joaat("CLO_TRM_U_8_5"):
			return 200;
		case joaat("CLO_TRM_U_9_4"):
			return 202;
		case joaat("CLO_TRM_U_17_10"):
		case joaat("CLO_TRM_U_19_10"):
			return 205;
		case joaat("CLO_TRM_PH_1_11"):
		case joaat("CLO_TRM_PH_2_11"):
			return 207;
		case joaat("CLO_TRM_F_1_8"):
			return 208;
		case joaat("CLO_TRM_U_11_13"):
		case joaat("CLO_TRM_U_12_13"):
			return 210;
		case joaat("CLO_TRM_U_7_10"):
			return 211;
		case joaat("CLO_TRM_U_15_9"):
			return 212;
		case joaat("CLO_TRM_U_8_10"):
			return 213;
		case joaat("CLO_TRM_U_9_1"):
			return 215;
		case joaat("CLO_TRM_U_17_7"):
		case joaat("CLO_TRM_U_19_7"):
			return 216;
		case joaat("CLO_TRM_F_1_1"):
			return 217;
		case joaat("CLO_TRM_U_11_18"):
		case joaat("CLO_TRM_U_12_18"):
			return 218;
		case joaat("CLO_TRM_U_7_11"):
			return 220;
		case joaat("CLO_TRM_U_15_12"):
			return 221;
		case joaat("CLO_TRM_U_8_11"):
			return 222;
		case joaat("CLO_TRM_U_9_0"):
			return 223;
		case joaat("CLO_TRM_F_1_0"):
			return 225;
		case joaat("CLO_TRM_U_11_1"):
		case joaat("CLO_TRM_U_12_1"):
			return 226;
		case joaat("CLO_TRM_U_7_1"):
			return 227;
		case joaat("CLO_TRM_U_15_10"):
			return 228;
		case joaat("CLO_TRM_U_8_1"):
			return 230;
		case joaat("CLO_TRM_U_9_11"):
			return 231;
		case joaat("CLO_TRM_F_1_2"):
			return 232;
		case joaat("CLO_TRM_U_11_7"):
		case joaat("CLO_TRM_U_12_7"):
			return 233;
		case joaat("CLO_TRM_U_7_0"):
			return 235;
		case joaat("CLO_TRM_U_15_6"):
			return 236;
		case joaat("CLO_TRM_U_8_0"):
			return 237;
		case joaat("CLO_TRM_U_9_14"):
			return 238;
		case joaat("CLO_TRM_F_1_5"):
			return 240;
		case joaat("CLO_TRM_U_11_2"):
		case joaat("CLO_TRM_U_12_2"):
			return 241;
		case joaat("CLO_TRM_U_7_6"):
			return 242;
		case joaat("CLO_TRM_U_15_13"):
			return 243;
		case joaat("CLO_TRM_U_8_6"):
			return 245;
		case joaat("CLO_TRM_F_1_22"):
			return 246;
		case joaat("CLO_TRM_U_11_8"):
		case joaat("CLO_TRM_U_12_8"):
			return 247;
		case joaat("CLO_TRM_U_15_16"):
			return 248;
		case joaat("CLO_TRM_F_1_21"):
			return 250;
		case joaat("CLO_TRM_U_11_3"):
		case joaat("CLO_TRM_U_12_3"):
			return 251;
		case joaat("CLO_TRM_U_15_17"):
			return 252;
		case joaat("CLO_TRM_F_1_7"):
			return 253;
		case joaat("CLO_TRM_U_11_11"):
		case joaat("CLO_TRM_U_12_11"):
			return 255;
		case joaat("CLO_TRM_U_15_18"):
			return 256;
		case joaat("CLO_TRM_F_1_6"):
			return 257;
		case joaat("CLO_TRM_U_11_4"):
		case joaat("CLO_TRM_U_12_4"):
			return 258;
		case joaat("CLO_TRM_U_15_14"):
			return 259;
		case joaat("CLO_TRM_F_1_11"):
			return 260;
		case joaat("CLO_TRM_U_15_11"):
			return 261;
		case joaat("CLO_TRM_F_1_17"):
			return 262;
		case joaat("CLO_TRM_F_1_16"):
			return 263;
		case joaat("CLO_TRM_F_1_10"):
			return 264;
		case joaat("CLO_TRM_F_1_9"):
			return 274;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_TRM_PH_1_2"):
		case joaat("CLO_TRM_PH_2_2"):
			return 284;
		case joaat("CLO_TRM_U_15_1"):
			return 294;
		case joaat("CLO_TRM_U_7_7"):
			return 304;
		case joaat("CLO_TRM_U_9_2"):
			return 314;
		case joaat("CLO_TRM_U_11_12"):
		case joaat("CLO_TRM_U_12_12"):
			return 324;
		case joaat("CLO_TRM_U_17_0"):
		case joaat("CLO_TRM_U_19_0"):
			return 334;
		case joaat("CLO_TRM_U_8_7"):
			return 344;
		case joaat("CLO_TRM_U_16_7"):
			return 354;
		case joaat("CLO_TRM_D_8_0"):
		case joaat("CLO_TRM_D_17_0"):
			return 364;
		case joaat("CLO_TRM_O_R8"):
			return 415;
		default:
	}
	return 0;
}

int func_400(int iParam0)//Position - 0xF760C
{
	switch (iParam0)
	{
		case joaat("CLO_TRF_PH_1_9"):
		case joaat("CLO_TRF_PH_2_9"):
			return 2;
		case joaat("CLO_TRF_F_1_12"):
			return 3;
		case joaat("CLO_TRF_U_11_6"):
		case joaat("CLO_TRF_U_12_6"):
			return 4;
		case joaat("CLO_TRF_U_7_3"):
			return 7;
		case joaat("CLO_TRF_U_15_8"):
			return 9;
		case joaat("CLO_TRF_U_14_20"):
			return 10;
		case joaat("CLO_TRF_U_8_3"):
			return 13;
		case joaat("CLO_TRF_D_16_0"):
		case joaat("CLO_TRF_D_25_0"):
			return 15;
		case joaat("CLO_TRF_U_9_10"):
			return 16;
		case joaat("CLO_TRF_U_16_11"):
		case joaat("CLO_TRF_U_18_11"):
			return 19;
		case joaat("CLO_TRF_PH_1_10"):
		case joaat("CLO_TRF_PH_2_10"):
			return 21;
		case joaat("CLO_TRF_F_1_4"):
			return 22;
		case joaat("CLO_TRF_U_11_16"):
		case joaat("CLO_TRF_U_12_16"):
			return 25;
		case joaat("CLO_TRF_U_7_2"):
			return 27;
		case joaat("CLO_TRF_U_15_9"):
			return 28;
		case joaat("CLO_TRF_U_14_19"):
			return 31;
		case joaat("CLO_TRF_U_8_2"):
			return 33;
		case joaat("CLO_TRF_D_11_0"):
		case joaat("CLO_TRF_D_20_0"):
			return 34;
		case joaat("CLO_TRF_U_9_12"):
			return 37;
		case joaat("CLO_TRF_O_R3"):
			return 39;
		case joaat("CLO_TRF_U_16_8"):
		case joaat("CLO_TRF_U_18_8"):
			return 40;
		case joaat("CLO_TRF_PH_1_12"):
		case joaat("CLO_TRF_PH_2_12"):
			return 42;
		case joaat("CLO_TRF_F_1_3"):
			return 44;
		case joaat("CLO_TRF_U_11_5"):
		case joaat("CLO_TRF_U_12_5"):
			return 45;
		case joaat("CLO_TRF_U_7_15"):
			return 47;
		case joaat("CLO_TRF_U_15_1"):
			return 49;
		case joaat("CLO_TRF_U_14_0"):
			return 50;
		case joaat("CLO_TRF_U_8_15"):
			return 52;
		case joaat("CLO_TRF_D_13_0"):
		case joaat("CLO_TRF_D_22_0"):
			return 54;
		case joaat("CLO_TRF_U_9_7"):
			return 55;
		case joaat("CLO_TRF_O_R2"):
			return 57;
		case joaat("CLO_TRF_U_16_5"):
		case joaat("CLO_TRF_U_18_5"):
			return 58;
		case joaat("CLO_TRF_PH_1_7"):
		case joaat("CLO_TRF_PH_2_7"):
			return 60;
		case joaat("CLO_TRF_F_1_18"):
			return 61;
		case joaat("CLO_TRF_O_R4"):
			return 63;
		case joaat("CLO_TRF_U_11_15"):
		case joaat("CLO_TRF_U_12_15"):
			return 64;
		case joaat("CLO_TRF_U_7_14"):
			return 66;
		case joaat("CLO_TRF_U_15_3"):
			return 67;
		case joaat("CLO_TRF_O_R5"):
			return 69;
		case joaat("CLO_TRF_U_14_3"):
			return 70;
		case joaat("CLO_TRF_U_8_14"):
			return 72;
		case joaat("CLO_TRF_D_12_0"):
		case joaat("CLO_TRF_D_21_0"):
			return 73;
		case joaat("CLO_TRF_O_R1"):
			return 75;
		case joaat("CLO_TRF_U_9_6"):
			return 76;
		case joaat("CLO_TRF_U_16_9"):
		case joaat("CLO_TRF_U_18_9"):
			return 78;
		case joaat("CLO_TRF_PH_1_13"):
		case joaat("CLO_TRF_PH_2_13"):
			return 79;
		case joaat("CLO_TRF_O_R6"):
			return 81;
		case joaat("CLO_TRF_F_1_19"):
			return 82;
		case joaat("CLO_TRF_U_11_19"):
		case joaat("CLO_TRF_U_12_19"):
			return 84;
		case joaat("CLO_TRF_U_7_8"):
			return 85;
		case joaat("CLO_TRF_O_R7"):
			return 87;
		case joaat("CLO_TRF_U_15_0"):
			return 88;
		case joaat("CLO_TRF_U_14_4"):
			return 90;
		case joaat("CLO_TRF_U_8_8"):
			return 91;
		case joaat("CLO_TRF_D_10_0"):
		case joaat("CLO_TRF_D_19_0"):
			return 94;
		case joaat("CLO_TRF_U_9_3"):
			return 96;
		case joaat("CLO_TRF_U_16_2"):
		case joaat("CLO_TRF_U_18_2"):
			return 97;
		case joaat("CLO_TRF_PH_1_3"):
		case joaat("CLO_TRF_PH_2_3"):
			return 100;
		case joaat("CLO_TRF_F_1_15"):
			return 102;
		case joaat("CLO_TRF_U_11_9"):
		case joaat("CLO_TRF_U_12_9"):
			return 103;
		case joaat("CLO_TRF_U_7_9"):
			return 105;
		case joaat("CLO_TRF_U_15_2"):
			return 107;
		case joaat("CLO_TRF_U_14_2"):
			return 108;
		case joaat("CLO_TRF_U_8_9"):
			return 110;
		case joaat("CLO_TRF_D_15_0"):
		case joaat("CLO_TRF_D_24_0"):
			return 112;
		case joaat("CLO_TRF_U_9_13"):
			return 113;
		case joaat("CLO_TRF_U_16_1"):
		case joaat("CLO_TRF_U_18_1"):
			return 115;
		case joaat("CLO_TRF_PH_1_4"):
		case joaat("CLO_TRF_PH_2_4"):
			return 117;
		case joaat("CLO_TRF_F_1_23"):
			return 118;
		case joaat("CLO_TRF_U_11_20"):
		case joaat("CLO_TRF_U_12_20"):
			return 120;
		case joaat("CLO_TRF_U_7_13"):
			return 122;
		case joaat("CLO_TRF_U_15_5"):
			return 125;
		case joaat("CLO_TRF_U_14_5"):
			return 127;
		case joaat("CLO_TRF_U_8_13"):
			return 130;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_TRF_D_14_0"):
		case joaat("CLO_TRF_D_23_0"):
			return 132;
		case joaat("CLO_TRF_U_9_8"):
			return 135;
		case joaat("CLO_TRF_U_16_4"):
		case joaat("CLO_TRF_U_18_4"):
			return 137;
		case joaat("CLO_TRF_PH_1_5"):
		case joaat("CLO_TRF_PH_2_5"):
			return 140;
		case joaat("CLO_TRF_F_1_20"):
			return 142;
		case joaat("CLO_TRF_U_11_10"):
		case joaat("CLO_TRF_U_12_10"):
			return 145;
		case joaat("CLO_TRF_U_7_12"):
			return 147;
		case joaat("CLO_TRF_U_15_4"):
			return 150;
		case joaat("CLO_TRF_U_14_8"):
			return 152;
		case joaat("CLO_TRF_U_8_12"):
			return 155;
		case joaat("CLO_TRF_D_9_0"):
		case joaat("CLO_TRF_D_18_0"):
			return 157;
		case joaat("CLO_TRF_U_9_9"):
			return 160;
		case joaat("CLO_TRF_U_16_6"):
		case joaat("CLO_TRF_U_18_6"):
			return 162;
		case joaat("CLO_TRF_PH_1_6"):
		case joaat("CLO_TRF_PH_2_6"):
			return 165;
		case joaat("CLO_TRF_F_1_13"):
			return 167;
		case joaat("CLO_TRF_U_11_14"):
		case joaat("CLO_TRF_U_12_14"):
			return 170;
		case joaat("CLO_TRF_U_7_4"):
			return 172;
		case joaat("CLO_TRF_U_15_6"):
			return 175;
		case joaat("CLO_TRF_U_14_7"):
			return 177;
		case joaat("CLO_TRF_U_8_4"):
			return 180;
		case joaat("CLO_TRF_U_9_5"):
			return 182;
		case joaat("CLO_TRF_U_16_3"):
		case joaat("CLO_TRF_U_18_3"):
			return 185;
		case joaat("CLO_TRF_PH_1_8"):
		case joaat("CLO_TRF_PH_2_8"):
			return 187;
		case joaat("CLO_TRF_F_1_14"):
			return 190;
		case joaat("CLO_TRF_U_11_17"):
		case joaat("CLO_TRF_U_12_17"):
			return 192;
		case joaat("CLO_TRF_U_7_5"):
			return 195;
		case joaat("CLO_TRF_U_14_15"):
			return 197;
		case joaat("CLO_TRF_U_8_5"):
			return 200;
		case joaat("CLO_TRF_U_9_4"):
			return 202;
		case joaat("CLO_TRF_U_16_10"):
		case joaat("CLO_TRF_U_18_10"):
			return 205;
		case joaat("CLO_TRF_PH_1_11"):
		case joaat("CLO_TRF_PH_2_11"):
			return 207;
		case joaat("CLO_TRF_F_1_8"):
			return 208;
		case joaat("CLO_TRF_U_11_13"):
		case joaat("CLO_TRF_U_12_13"):
			return 210;
		case joaat("CLO_TRF_U_7_10"):
			return 211;
		case joaat("CLO_TRF_U_14_9"):
			return 212;
		case joaat("CLO_TRF_U_8_10"):
			return 213;
		case joaat("CLO_TRF_U_9_1"):
			return 215;
		case joaat("CLO_TRF_U_16_7"):
		case joaat("CLO_TRF_U_18_7"):
			return 216;
		case joaat("CLO_TRF_F_1_1"):
			return 217;
		case joaat("CLO_TRF_U_11_18"):
		case joaat("CLO_TRF_U_12_18"):
			return 218;
		case joaat("CLO_TRF_U_7_11"):
			return 220;
		case joaat("CLO_TRF_U_14_12"):
			return 221;
		case joaat("CLO_TRF_U_8_11"):
			return 222;
		case joaat("CLO_TRF_U_9_0"):
			return 223;
		case joaat("CLO_TRF_F_1_0"):
			return 225;
		case joaat("CLO_TRF_U_11_1"):
		case joaat("CLO_TRF_U_12_1"):
			return 226;
		case joaat("CLO_TRF_U_7_1"):
			return 227;
		case joaat("CLO_TRF_U_14_10"):
			return 228;
		case joaat("CLO_TRF_U_8_1"):
			return 230;
		case joaat("CLO_TRF_U_9_11"):
			return 231;
		case joaat("CLO_TRF_F_1_2"):
			return 232;
		case joaat("CLO_TRF_U_11_7"):
		case joaat("CLO_TRF_U_12_7"):
			return 233;
		case joaat("CLO_TRF_U_7_0"):
			return 235;
		case joaat("CLO_TRF_U_14_6"):
			return 236;
		case joaat("CLO_TRF_U_8_0"):
			return 237;
		case joaat("CLO_TRF_U_9_14"):
			return 238;
		case joaat("CLO_TRF_F_1_5"):
			return 240;
		case joaat("CLO_TRF_U_11_2"):
		case joaat("CLO_TRF_U_12_2"):
			return 241;
		case joaat("CLO_TRF_U_7_6"):
			return 242;
		case joaat("CLO_TRF_U_14_13"):
			return 243;
		case joaat("CLO_TRF_U_8_6"):
			return 245;
		case joaat("CLO_TRF_F_1_22"):
			return 246;
		case joaat("CLO_TRF_U_11_8"):
		case joaat("CLO_TRF_U_12_8"):
			return 247;
		case joaat("CLO_TRF_U_14_16"):
			return 248;
		case joaat("CLO_TRF_F_1_21"):
			return 250;
		case joaat("CLO_TRF_U_11_3"):
		case joaat("CLO_TRF_U_12_3"):
			return 251;
		case joaat("CLO_TRF_U_14_17"):
			return 252;
		case joaat("CLO_TRF_F_1_7"):
			return 253;
		case joaat("CLO_TRF_U_11_11"):
		case joaat("CLO_TRF_U_12_11"):
			return 255;
		case joaat("CLO_TRF_U_14_18"):
			return 256;
		case joaat("CLO_TRF_F_1_6"):
			return 257;
		case joaat("CLO_TRF_U_11_4"):
		case joaat("CLO_TRF_U_12_4"):
			return 258;
		case joaat("CLO_TRF_U_14_14"):
			return 259;
		case joaat("CLO_TRF_F_1_11"):
			return 260;
		case joaat("CLO_TRF_U_14_11"):
			return 261;
		case joaat("CLO_TRF_F_1_17"):
			return 262;
		case joaat("CLO_TRF_F_1_16"):
			return 263;
		case joaat("CLO_TRF_F_1_10"):
			return 264;
		case joaat("CLO_TRF_F_1_9"):
			return 274;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_TRF_PH_1_2"):
		case joaat("CLO_TRF_PH_2_2"):
			return 284;
		case joaat("CLO_TRF_U_14_1"):
			return 294;
		case joaat("CLO_TRF_U_7_7"):
			return 304;
		case joaat("CLO_TRF_U_9_2"):
			return 314;
		case joaat("CLO_TRF_U_11_12"):
		case joaat("CLO_TRF_U_12_12"):
			return 324;
		case joaat("CLO_TRF_U_16_0"):
		case joaat("CLO_TRF_U_18_0"):
			return 334;
		case joaat("CLO_TRF_U_8_7"):
			return 344;
		case joaat("CLO_TRF_U_15_7"):
			return 354;
		case joaat("CLO_TRF_D_8_0"):
		case joaat("CLO_TRF_D_17_0"):
			return 364;
		case joaat("CLO_TRF_O_R8"):
			return 415;
		default:
	}
	return 0;
}

int func_401(int iParam0)//Position - 0xF99A0
{
	switch (iParam0)
	{
		case joaat("CLO_AWM_U_17_0"):
		case joaat("CLO_AWM_U_17_1"):
		case joaat("CLO_AWM_U_17_2"):
		case joaat("CLO_AWM_U_17_3"):
		case joaat("CLO_AWM_U_17_4"):
		case joaat("CLO_AWM_U_17_5"):
		case joaat("CLO_AWM_U_17_6"):
		case joaat("CLO_AWM_U_17_7"):
		case joaat("CLO_AWM_U_17_8"):
		case joaat("CLO_AWM_U_17_9"):
		case joaat("CLO_AWM_U_17_10"):
		case joaat("CLO_AWM_U_17_11"):
			return 320;
		case joaat("CLO_AWM_U_4_0"):
		case joaat("CLO_AWM_U_4_1"):
		case joaat("CLO_AWM_U_4_2"):
		case joaat("CLO_AWM_U_4_3"):
		case joaat("CLO_AWM_U_4_4"):
		case joaat("CLO_AWM_U_4_5"):
		case joaat("CLO_AWM_U_4_6"):
		case joaat("CLO_AWM_U_4_7"):
			return 319;
		case joaat("CLO_AWM_U_3_0"):
		case joaat("CLO_AWM_U_3_1"):
		case joaat("CLO_AWM_U_3_2"):
		case joaat("CLO_AWM_U_3_3"):
		case joaat("CLO_AWM_U_3_4"):
		case joaat("CLO_AWM_U_3_5"):
		case joaat("CLO_AWM_U_3_6"):
		case joaat("CLO_AWM_U_3_7"):
		case joaat("CLO_AWM_U_3_12"):
		case joaat("CLO_AWM_U_3_13"):
		case joaat("CLO_AWM_U_3_14"):
		case joaat("CLO_AWM_U_3_15"):
			return 318;
		case joaat("CLO_AWM_U_1_17"):
		case joaat("CLO_AWM_U_1_18"):
		case joaat("CLO_AWM_U_1_19"):
			return 317;
		case joaat("CLO_AWM_U_1_14"):
		case joaat("CLO_AWM_U_1_15"):
		case joaat("CLO_AWM_U_1_16"):
			return 316;
		case joaat("CLO_AWM_U_1_13"):
		case joaat("CLO_AWM_U_1_12"):
			return 315;
		case joaat("CLO_AWM_U_1_10"):
		case joaat("CLO_AWM_U_1_11"):
			return 314;
		case joaat("CLO_AWM_U_1_8"):
		case joaat("CLO_AWM_U_1_9"):
			return 313;
		case joaat("CLO_AWM_U_1_6"):
		case joaat("CLO_AWM_U_1_7"):
			return 312;
		case joaat("CLO_AWM_U_1_2"):
		case joaat("CLO_AWM_U_1_3"):
		case joaat("CLO_AWM_U_1_4"):
		case joaat("CLO_AWM_U_1_5"):
			return 311;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWM_DECL_117"):
		case joaat("CLO_AWM_DECL_118"):
			return 401;
		case joaat("CLO_AWM_DECL_121"):
		case joaat("CLO_AWM_DECL_120"):
		case joaat("CLO_AWM_DECL_119"):
		case joaat("CLO_AWM_DECL_116"):
		case joaat("CLO_AWM_DECL_115"):
		case joaat("CLO_AWM_DECL_114"):
		case joaat("CLO_AWM_DECL_113"):
			return 400;
		case joaat("CLO_AWM_DECL_102"):
		case joaat("CLO_AWM_DECL_103"):
		case joaat("CLO_AWM_DECL_104"):
			return 399;
		case joaat("CLO_AWM_DECL_101"):
			return 396;
		case joaat("CLO_AWM_DECL_93"):
			return 394;
		case joaat("CLO_AWM_DECL_94"):
			return 395;
		case joaat("CLO_AWM_DECL_91"):
			return 393;
		case joaat("CLO_AWM_DECL_90"):
			return 392;
		case joaat("CLO_AWM_DECL_87"):
			return 385;
		case joaat("CLO_AWM_DECL_86"):
			return 391;
		case joaat("CLO_AWM_DECL_85"):
			return 390;
		case joaat("CLO_AWM_DECL_108"):
		case joaat("CLO_AWM_DECL_109"):
		case joaat("CLO_AWM_DECL_110"):
			return 397;
		case joaat("CLO_AWM_DECL_107"):
		case joaat("CLO_AWM_DECL_106"):
		case joaat("CLO_AWM_DECL_105"):
			return 398;
		case joaat("CLO_AWM_DECL_95"):
			return 388;
		case joaat("CLO_AWM_DECL_89"):
			return 387;
		case joaat("CLO_AWM_DECL_88"):
			return 386;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWM_DECL_123"):
			return 384;
		case joaat("CLO_AWM_DECL_122"):
			return 383;
		case joaat("CLO_AWM_DECL_111"):
			return 382;
		case joaat("CLO_AWM_DECL_98"):
			return 381;
		case joaat("CLO_AWM_DECL_84"):
			return 380;
		case joaat("CLO_AWM_DECL_83"):
			return 379;
		case joaat("CLO_AWM_DECL_82"):
			return 378;
		case joaat("CLO_AWM_DECL_80"):
			return 377;
		case joaat("CLO_AWM_DECL_79"):
			return 376;
		case joaat("CLO_AWM_DECL_78"):
			return 375;
		case joaat("CLO_AWM_DECL_77"):
			return 374;
		case joaat("CLO_AWM_DECL_76"):
			return 373;
		case joaat("CLO_AWM_DECL_74"):
			return 372;
		case joaat("CLO_AWM_DECL_73"):
			return 371;
		case joaat("CLO_AWM_DECL_72"):
			return 370;
		case joaat("CLO_AWM_DECL_71"):
			return 369;
		case joaat("CLO_AWM_DECL_69"):
			return 368;
		case joaat("CLO_AWM_DECL_68"):
			return 367;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWM_DECL_124"):
			return 410;
		case joaat("CLO_AWM_DECL_112"):
			return 389;
		case joaat("CLO_AWM_DECL_100"):
			return 409;
		case joaat("CLO_AWM_DECL_99"):
			return 408;
		case joaat("CLO_AWM_DECL_97"):
			return 407;
		case joaat("CLO_AWM_DECL_96"):
			return 406;
		case joaat("CLO_AWM_DECL_92"):
			return 405;
		case joaat("CLO_AWM_DECL_81"):
			return 404;
		case joaat("CLO_AWM_DECL_75"):
			return 403;
		case joaat("CLO_AWM_DECL_70"):
			return 402;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWM_U_10_15"):
			return 366;
		case joaat("CLO_AWM_U_10_14"):
		case joaat("CLO_AWM_U_10_13"):
			return 365;
		case joaat("CLO_AWM_U_10_12"):
		case joaat("CLO_AWM_U_10_11"):
			return 364;
		case joaat("CLO_AWM_U_10_10"):
			return 363;
		case joaat("CLO_AWM_U_10_9"):
			return 362;
		case joaat("CLO_AWM_U_10_8"):
			return 361;
		case joaat("CLO_AWM_U_10_7"):
			return 360;
		case joaat("CLO_AWM_U_10_6"):
			return 359;
		case joaat("CLO_AWM_U_10_5"):
		case joaat("CLO_AWM_U_10_4"):
			return 358;
		case joaat("CLO_AWM_U_10_3"):
		case joaat("CLO_AWM_U_10_2"):
		case joaat("CLO_AWM_U_10_1"):
		case joaat("CLO_AWM_U_10_0"):
			return 357;
		case joaat("CLO_AWM_U_9_23"):
			return 355;
		case joaat("CLO_AWM_U_9_22"):
			return 356;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWM_U_9_21"):
			return 354;
		case joaat("CLO_AWM_U_9_20"):
		case joaat("CLO_AWM_U_9_19"):
			return 353;
		case joaat("CLO_AWM_U_9_18"):
			return 352;
		case joaat("CLO_AWM_U_9_17"):
		case joaat("CLO_AWM_U_9_16"):
			return 351;
		case joaat("CLO_AWM_U_9_15"):
		case joaat("CLO_AWM_U_9_14"):
			return 350;
		case joaat("CLO_AWM_U_9_13"):
		case joaat("CLO_AWM_U_9_12"):
			return 349;
		case joaat("CLO_AWM_U_9_11"):
			return 348;
		case joaat("CLO_AWM_U_9_10"):
			return 347;
		case joaat("CLO_AWM_U_9_9"):
			return 346;
		case joaat("CLO_AWM_U_9_8"):
		case joaat("CLO_AWM_U_9_7"):
			return 345;
		case joaat("CLO_AWM_U_9_6"):
			return 344;
		case joaat("CLO_AWM_U_9_5"):
			return 343;
		case joaat("CLO_AWM_U_9_4"):
		case joaat("CLO_AWM_U_9_3"):
			return 342;
		case joaat("CLO_AWM_U_9_0"):
			return 339;
		case joaat("CLO_AWM_U_9_1"):
			return 340;
		case joaat("CLO_AWM_U_9_2"):
			return 341;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWM_U_7_17"):
			return 338;
		case joaat("CLO_AWM_U_7_16"):
			return 337;
		case joaat("CLO_AWM_U_7_15"):
			return 336;
		case joaat("CLO_AWM_U_7_14"):
			return 335;
		case joaat("CLO_AWM_U_7_13"):
			return 334;
		case joaat("CLO_AWM_U_7_12"):
			return 333;
		case joaat("CLO_AWM_U_7_11"):
			return 332;
		case joaat("CLO_AWM_U_7_10"):
			return 331;
		case joaat("CLO_AWM_U_7_9"):
			return 330;
		case joaat("CLO_AWM_U_7_8"):
			return 329;
		case joaat("CLO_AWM_U_7_7"):
			return 328;
		case joaat("CLO_AWM_U_7_6"):
			return 327;
		case joaat("CLO_AWM_U_7_5"):
			return 326;
		case joaat("CLO_AWM_U_7_4"):
			return 325;
		case joaat("CLO_AWM_U_7_3"):
			return 324;
		case joaat("CLO_AWM_U_7_2"):
			return 323;
		case joaat("CLO_AWM_U_7_1"):
			return 322;
		case joaat("CLO_AWM_U_7_0"):
			return 321;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWM_PH_3_3"):
			return 432;
		case joaat("CLO_AWM_PH_3_2"):
			return 431;
		case joaat("CLO_AWM_PH_3_1"):
			return 430;
		case joaat("CLO_AWM_PH_3_0"):
			return 429;
		case joaat("CLO_AWM_PH_2_18"):
		case joaat("CLO_AWM_PH_2_17"):
		case joaat("CLO_AWM_PH_2_8"):
		case joaat("CLO_AWM_PH_1_18"):
		case joaat("CLO_AWM_PH_1_17"):
		case joaat("CLO_AWM_PH_1_8"):
			return 425;
		case joaat("CLO_AWM_PH_2_16"):
		case joaat("CLO_AWM_PH_2_15"):
		case joaat("CLO_AWM_PH_1_16"):
		case joaat("CLO_AWM_PH_1_15"):
			return 428;
		case joaat("CLO_AWM_PH_2_14"):
		case joaat("CLO_AWM_PH_2_13"):
		case joaat("CLO_AWM_PH_1_14"):
		case joaat("CLO_AWM_PH_1_13"):
			return 427;
		case joaat("CLO_AWM_PH_2_12"):
		case joaat("CLO_AWM_PH_2_11"):
		case joaat("CLO_AWM_PH_1_12"):
		case joaat("CLO_AWM_PH_1_11"):
			return 426;
		case joaat("CLO_AWM_PH_2_10"):
		case joaat("CLO_AWM_PH_2_9"):
		case joaat("CLO_AWM_PH_2_7"):
		case joaat("CLO_AWM_PH_1_10"):
		case joaat("CLO_AWM_PH_1_9"):
		case joaat("CLO_AWM_PH_1_7"):
			return 424;
		case joaat("CLO_AWM_PH_2_6"):
		case joaat("CLO_AWM_PH_1_6"):
			return 423;
		case joaat("CLO_AWM_PH_2_5"):
		case joaat("CLO_AWM_PH_2_4"):
		case joaat("CLO_AWM_PH_1_5"):
		case joaat("CLO_AWM_PH_1_4"):
			return 422;
		case joaat("CLO_AWM_PH_2_3"):
		case joaat("CLO_AWM_PH_1_3"):
			return 421;
		case joaat("CLO_AWM_PH_2_2"):
		case joaat("CLO_AWM_PH_1_2"):
			return 420;
		case joaat("CLO_AWM_PH_2_1"):
		case joaat("CLO_AWM_PH_2_0"):
		case joaat("CLO_AWM_PH_1_1"):
		case joaat("CLO_AWM_PH_1_0"):
			return 419;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWM_L_5_11"):
		case joaat("CLO_AWM_L_5_10"):
		case joaat("CLO_AWM_L_5_9"):
		case joaat("CLO_AWM_L_5_8"):
		case joaat("CLO_AWM_L_5_7"):
		case joaat("CLO_AWM_L_5_6"):
		case joaat("CLO_AWM_L_5_5"):
		case joaat("CLO_AWM_L_5_4"):
		case joaat("CLO_AWM_L_5_3"):
		case joaat("CLO_AWM_L_5_2"):
		case joaat("CLO_AWM_L_5_1"):
		case joaat("CLO_AWM_L_5_0"):
		case joaat("CLO_AWM_F_7_7"):
		case joaat("CLO_AWM_F_7_6"):
		case joaat("CLO_AWM_F_7_5"):
		case joaat("CLO_AWM_F_7_4"):
		case joaat("CLO_AWM_F_7_3"):
		case joaat("CLO_AWM_F_7_2"):
		case joaat("CLO_AWM_F_7_1"):
		case joaat("CLO_AWM_F_7_0"):
			return 414;
		case joaat("CLO_AWM_L_3_11"):
		case joaat("CLO_AWM_L_3_10"):
		case joaat("CLO_AWM_L_3_9"):
		case joaat("CLO_AWM_L_3_8"):
		case joaat("CLO_AWM_L_3_7"):
		case joaat("CLO_AWM_L_3_6"):
		case joaat("CLO_AWM_L_3_5"):
		case joaat("CLO_AWM_L_3_4"):
		case joaat("CLO_AWM_L_3_3"):
		case joaat("CLO_AWM_L_3_2"):
		case joaat("CLO_AWM_L_3_1"):
		case joaat("CLO_AWM_L_3_0"):
			return 413;
		case joaat("CLO_AWM_L_1_13"):
		case joaat("CLO_AWM_L_1_12"):
		case joaat("CLO_AWM_L_1_11"):
		case joaat("CLO_AWM_L_1_10"):
		case joaat("CLO_AWM_L_1_9"):
		case joaat("CLO_AWM_L_1_8"):
		case joaat("CLO_AWM_L_1_7"):
		case joaat("CLO_AWM_L_1_6"):
		case joaat("CLO_AWM_L_1_5"):
		case joaat("CLO_AWM_L_1_4"):
		case joaat("CLO_AWM_L_1_3"):
		case joaat("CLO_AWM_L_1_2"):
		case joaat("CLO_AWM_L_1_1"):
		case joaat("CLO_AWM_L_1_0"):
			return 412;
		case joaat("CLO_AWM_L_0_13"):
		case joaat("CLO_AWM_L_0_12"):
		case joaat("CLO_AWM_L_0_11"):
		case joaat("CLO_AWM_L_0_10"):
		case joaat("CLO_AWM_L_0_9"):
		case joaat("CLO_AWM_L_0_8"):
		case joaat("CLO_AWM_L_0_7"):
		case joaat("CLO_AWM_L_0_6"):
		case joaat("CLO_AWM_L_0_5"):
		case joaat("CLO_AWM_L_0_4"):
		case joaat("CLO_AWM_L_0_3"):
		case joaat("CLO_AWM_L_0_2"):
		case joaat("CLO_AWM_L_0_1"):
		case joaat("CLO_AWM_L_0_0"):
			return 411;
		default:
	}
	switch (iParam0)
	{
		case -167897979:
		case 273107223:
		case 1894779503:
		case -1165156956:
		case joaat("CLO_AWM_F_8_11"):
		case joaat("CLO_AWM_F_8_10"):
		case joaat("CLO_AWM_F_8_9"):
		case joaat("CLO_AWM_F_8_8"):
		case joaat("CLO_AWM_F_8_7"):
		case joaat("CLO_AWM_F_8_6"):
		case joaat("CLO_AWM_F_8_5"):
		case joaat("CLO_AWM_F_8_4"):
		case joaat("CLO_AWM_F_8_3"):
		case joaat("CLO_AWM_F_8_2"):
		case joaat("CLO_AWM_F_8_1"):
		case joaat("CLO_AWM_F_8_0"):
			return 418;
		case joaat("CLO_AWM_F_4_2"):
		case joaat("CLO_AWM_F_4_1"):
		case joaat("CLO_AWM_F_4_0"):
			return 417;
		case joaat("CLO_AWM_F_2_1"):
		case joaat("CLO_AWM_F_2_0"):
			return 416;
		case -557765520:
		case -874510674:
		case -959152965:
		case 1458937051:
		case joaat("CLO_AWM_F_0_21"):
		case joaat("CLO_AWM_F_0_20"):
		case joaat("CLO_AWM_F_0_19"):
		case joaat("CLO_AWM_F_0_18"):
		case joaat("CLO_AWM_F_0_17"):
		case joaat("CLO_AWM_F_0_16"):
		case joaat("CLO_AWM_F_0_15"):
		case joaat("CLO_AWM_F_0_14"):
		case joaat("CLO_AWM_F_0_13"):
		case joaat("CLO_AWM_F_0_12"):
		case joaat("CLO_AWM_F_0_11"):
		case joaat("CLO_AWM_F_0_10"):
		case joaat("CLO_AWM_F_0_9"):
		case joaat("CLO_AWM_F_0_8"):
		case joaat("CLO_AWM_F_0_7"):
		case joaat("CLO_AWM_F_0_6"):
		case joaat("CLO_AWM_F_0_5"):
		case joaat("CLO_AWM_F_0_4"):
		case joaat("CLO_AWM_F_0_3"):
		case joaat("CLO_AWM_F_0_2"):
		case joaat("CLO_AWM_F_0_1"):
		case joaat("CLO_AWM_F_0_0"):
			return 415;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWM_O_B_1"):
		case joaat("CLO_AWM_O_B_0"):
			return 78;
		case joaat("CLO_AWM_O_B_2"):
		case joaat("CLO_AWM_O_B_3"):
			return 79;
		case joaat("CLO_AWM_O_B_4"):
		case joaat("CLO_AWM_O_B_5"):
			return 80;
		case joaat("CLO_AWM_O_B_6"):
		case joaat("CLO_AWM_O_B_7"):
			return 81;
		case joaat("CLO_AWM_O_B_8"):
		case joaat("CLO_AWM_O_B_9"):
			return 82;
		case joaat("CLO_AWM_O_B_10"):
		case joaat("CLO_AWM_O_B_11"):
			return 83;
		case joaat("CLO_AWM_O_B_12"):
		case joaat("CLO_AWM_O_B_13"):
			return 84;
		case joaat("CLO_AWM_O_B_14"):
		case joaat("CLO_AWM_O_B_15"):
			return 85;
		case joaat("CLO_AWM_O_C_11"):
		case joaat("CLO_AWM_O_C_10"):
		case joaat("CLO_AWM_O_C_9"):
		case joaat("CLO_AWM_O_C_8"):
		case joaat("CLO_AWM_O_C_7"):
		case joaat("CLO_AWM_O_C_6"):
		case joaat("CLO_AWM_O_C_5"):
		case joaat("CLO_AWM_O_C_4"):
		case joaat("CLO_AWM_O_C_3"):
		case joaat("CLO_AWM_O_C_2"):
		case joaat("CLO_AWM_O_C_1"):
		case joaat("CLO_AWM_O_C_0"):
			return 86;
		case joaat("CLO_AWM_O_D_11"):
		case joaat("CLO_AWM_O_D_10"):
		case joaat("CLO_AWM_O_D_9"):
		case joaat("CLO_AWM_O_D_8"):
		case joaat("CLO_AWM_O_D_7"):
		case joaat("CLO_AWM_O_D_6"):
		case joaat("CLO_AWM_O_D_5"):
		case joaat("CLO_AWM_O_D_4"):
		case joaat("CLO_AWM_O_D_3"):
		case joaat("CLO_AWM_O_D_2"):
		case joaat("CLO_AWM_O_D_1"):
		case joaat("CLO_AWM_O_D_0"):
			return 87;
		case joaat("CLO_AWM_O_E_11"):
		case joaat("CLO_AWM_O_E_10"):
		case joaat("CLO_AWM_O_E_9"):
		case joaat("CLO_AWM_O_E_8"):
		case joaat("CLO_AWM_O_E_7"):
		case joaat("CLO_AWM_O_E_6"):
		case joaat("CLO_AWM_O_E_5"):
		case joaat("CLO_AWM_O_E_4"):
		case joaat("CLO_AWM_O_E_3"):
		case joaat("CLO_AWM_O_E_2"):
		case joaat("CLO_AWM_O_E_1"):
		case joaat("CLO_AWM_O_E_0"):
			return 88;
		case joaat("CLO_AWM_O_F_17"):
		case joaat("CLO_AWM_O_F_16"):
		case joaat("CLO_AWM_O_F_15"):
		case joaat("CLO_AWM_O_F_14"):
		case 269470651:
		case -1043222724:
		case -1416920400:
		case -618307101:
		case joaat("CLO_AWM_O_F_9"):
		case joaat("CLO_AWM_O_F_8"):
		case joaat("CLO_AWM_O_F_7"):
		case joaat("CLO_AWM_O_F_6"):
		case joaat("CLO_AWM_O_F_5"):
		case joaat("CLO_AWM_O_F_4"):
		case joaat("CLO_AWM_O_F_3"):
		case joaat("CLO_AWM_O_F_2"):
		case joaat("CLO_AWM_O_F_1"):
		case joaat("CLO_AWM_O_F_0"):
			return 89;
		case joaat("CLO_AWM_O_G_7"):
		case joaat("CLO_AWM_O_G_6"):
		case joaat("CLO_AWM_O_G_5"):
		case joaat("CLO_AWM_O_G_4"):
		case joaat("CLO_AWM_O_G_3"):
		case joaat("CLO_AWM_O_G_2"):
		case joaat("CLO_AWM_O_G_1"):
		case joaat("CLO_AWM_O_G_0"):
			return 90;
		case -1103661761:
		case joaat("CLO_AWM_O_H_9"):
		case joaat("CLO_AWM_O_H_8"):
		case joaat("CLO_AWM_O_H_7"):
		case joaat("CLO_AWM_O_H_6"):
		case joaat("CLO_AWM_O_H_5"):
		case joaat("CLO_AWM_O_H_4"):
		case joaat("CLO_AWM_O_H_3"):
		case joaat("CLO_AWM_O_H_2"):
		case joaat("CLO_AWM_O_H_1"):
		case joaat("CLO_AWM_O_H_0"):
			return 91;
		case joaat("CLO_AWM_O_I_1"):
			return 92;
		case joaat("CLO_AWM_O_I_2"):
			return 93;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWM_B_12_16"):
		case joaat("CLO_AWM_B_12_15"):
		case joaat("CLO_AWM_B_12_14"):
		case joaat("CLO_AWM_B_12_13"):
		case joaat("CLO_AWM_B_12_12"):
		case joaat("CLO_AWM_B_12_11"):
		case joaat("CLO_AWM_B_12_10"):
		case joaat("CLO_AWM_B_12_9"):
		case joaat("CLO_AWM_B_12_8"):
		case joaat("CLO_AWM_B_12_7"):
		case joaat("CLO_AWM_B_12_6"):
		case joaat("CLO_AWM_B_12_5"):
		case joaat("CLO_AWM_B_12_4"):
		case joaat("CLO_AWM_B_12_3"):
		case joaat("CLO_AWM_B_12_2"):
		case joaat("CLO_AWM_B_12_1"):
		case joaat("CLO_AWM_B_12_0"):
			return 101;
		case joaat("CLO_AWM_B_11_0"):
			return 100;
		case joaat("CLO_AWM_B_10_0"):
			return 99;
		case joaat("CLO_AWM_B_9_0"):
			return 98;
		case joaat("CLO_AWM_B_8_11"):
		case joaat("CLO_AWM_B_8_10"):
		case joaat("CLO_AWM_B_8_9"):
		case joaat("CLO_AWM_B_8_8"):
		case joaat("CLO_AWM_B_8_7"):
		case joaat("CLO_AWM_B_8_6"):
		case joaat("CLO_AWM_B_8_5"):
		case joaat("CLO_AWM_B_8_4"):
		case joaat("CLO_AWM_B_8_3"):
		case joaat("CLO_AWM_B_8_2"):
		case joaat("CLO_AWM_B_8_1"):
		case joaat("CLO_AWM_B_8_0"):
			return 97;
		case joaat("CLO_AWM_B_4_11"):
		case joaat("CLO_AWM_B_4_10"):
		case joaat("CLO_AWM_B_4_9"):
		case joaat("CLO_AWM_B_4_8"):
		case joaat("CLO_AWM_B_4_7"):
		case joaat("CLO_AWM_B_4_6"):
		case joaat("CLO_AWM_B_4_5"):
		case joaat("CLO_AWM_B_4_4"):
		case joaat("CLO_AWM_B_4_3"):
		case joaat("CLO_AWM_B_4_2"):
		case joaat("CLO_AWM_B_4_1"):
		case joaat("CLO_AWM_B_4_0"):
			return 96;
		case joaat("CLO_AWM_B_3_7"):
		case joaat("CLO_AWM_B_3_6"):
		case joaat("CLO_AWM_B_3_5"):
		case joaat("CLO_AWM_B_3_4"):
		case joaat("CLO_AWM_B_3_3"):
		case joaat("CLO_AWM_B_3_2"):
		case joaat("CLO_AWM_B_3_1"):
		case joaat("CLO_AWM_B_3_0"):
			return 95;
		case joaat("CLO_AWM_B_2_15"):
		case joaat("CLO_AWM_B_2_14"):
		case joaat("CLO_AWM_B_2_13"):
		case joaat("CLO_AWM_B_2_12"):
		case joaat("CLO_AWM_B_2_11"):
		case joaat("CLO_AWM_B_2_10"):
		case joaat("CLO_AWM_B_2_9"):
		case joaat("CLO_AWM_B_2_8"):
		case joaat("CLO_AWM_B_2_7"):
		case joaat("CLO_AWM_B_2_6"):
		case joaat("CLO_AWM_B_2_5"):
		case joaat("CLO_AWM_B_2_4"):
		case joaat("CLO_AWM_B_2_3"):
		case joaat("CLO_AWM_B_2_2"):
		case joaat("CLO_AWM_B_2_1"):
		case joaat("CLO_AWM_B_2_0"):
			return 94;
		default:
	}
	return -1;
}

int func_402(int iParam0)//Position - 0xFA867
{
	switch (iParam0)
	{
		case joaat("CLO_AWF_U_17_0"):
		case joaat("CLO_AWF_U_17_1"):
		case joaat("CLO_AWF_U_17_2"):
		case joaat("CLO_AWF_U_17_3"):
		case joaat("CLO_AWF_U_17_4"):
		case joaat("CLO_AWF_U_17_5"):
		case joaat("CLO_AWF_U_17_6"):
		case joaat("CLO_AWF_U_17_7"):
		case joaat("CLO_AWF_U_17_8"):
		case joaat("CLO_AWF_U_17_9"):
		case joaat("CLO_AWF_U_17_10"):
		case joaat("CLO_AWF_U_17_11"):
			return 320;
		case joaat("CLO_AWF_U_4_0"):
		case joaat("CLO_AWF_U_4_1"):
		case joaat("CLO_AWF_U_4_2"):
		case joaat("CLO_AWF_U_4_3"):
		case joaat("CLO_AWF_U_4_4"):
		case joaat("CLO_AWF_U_4_5"):
		case joaat("CLO_AWF_U_4_6"):
		case joaat("CLO_AWF_U_4_7"):
			return 319;
		case joaat("CLO_AWF_U_3_0"):
		case joaat("CLO_AWF_U_3_1"):
		case joaat("CLO_AWF_U_3_2"):
		case joaat("CLO_AWF_U_3_3"):
		case joaat("CLO_AWF_U_3_4"):
		case joaat("CLO_AWF_U_3_5"):
		case joaat("CLO_AWF_U_3_6"):
		case joaat("CLO_AWF_U_3_7"):
		case joaat("CLO_AWF_U_3_12"):
		case joaat("CLO_AWF_U_3_13"):
		case joaat("CLO_AWF_U_3_14"):
		case joaat("CLO_AWF_U_3_15"):
			return 318;
		case joaat("CLO_AWF_U_1_17"):
		case joaat("CLO_AWF_U_1_18"):
		case joaat("CLO_AWF_U_1_19"):
			return 317;
		case joaat("CLO_AWF_U_1_14"):
		case joaat("CLO_AWF_U_1_15"):
		case joaat("CLO_AWF_U_1_16"):
			return 316;
		case joaat("CLO_AWF_U_1_13"):
		case joaat("CLO_AWF_U_1_12"):
			return 315;
		case joaat("CLO_AWF_U_1_10"):
		case joaat("CLO_AWF_U_1_11"):
			return 314;
		case joaat("CLO_AWF_U_1_8"):
		case joaat("CLO_AWF_U_1_9"):
			return 313;
		case joaat("CLO_AWF_U_1_6"):
		case joaat("CLO_AWF_U_1_7"):
			return 312;
		case joaat("CLO_AWF_U_1_2"):
		case joaat("CLO_AWF_U_1_3"):
		case joaat("CLO_AWF_U_1_4"):
		case joaat("CLO_AWF_U_1_5"):
			return 311;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWF_DECL_117"):
		case joaat("CLO_AWF_DECL_118"):
			return 401;
		case joaat("CLO_AWF_DECL_121"):
		case joaat("CLO_AWF_DECL_120"):
		case joaat("CLO_AWF_DECL_119"):
		case joaat("CLO_AWF_DECL_116"):
		case joaat("CLO_AWF_DECL_115"):
		case joaat("CLO_AWF_DECL_114"):
		case joaat("CLO_AWF_DECL_113"):
			return 400;
		case joaat("CLO_AWF_DECL_102"):
		case joaat("CLO_AWF_DECL_103"):
		case joaat("CLO_AWF_DECL_104"):
			return 399;
		case joaat("CLO_AWF_DECL_101"):
			return 396;
		case joaat("CLO_AWF_DECL_93"):
			return 394;
		case joaat("CLO_AWF_DECL_94"):
			return 395;
		case joaat("CLO_AWF_DECL_91"):
			return 393;
		case joaat("CLO_AWF_DECL_90"):
			return 392;
		case joaat("CLO_AWF_DECL_87"):
			return 385;
		case joaat("CLO_AWF_DECL_86"):
			return 391;
		case joaat("CLO_AWF_DECL_85"):
			return 390;
		case joaat("CLO_AWF_DECL_108"):
		case joaat("CLO_AWF_DECL_109"):
		case joaat("CLO_AWF_DECL_110"):
			return 397;
		case joaat("CLO_AWF_DECL_107"):
		case joaat("CLO_AWF_DECL_106"):
		case joaat("CLO_AWF_DECL_105"):
			return 398;
		case joaat("CLO_AWF_DECL_95"):
			return 388;
		case joaat("CLO_AWF_DECL_89"):
			return 387;
		case joaat("CLO_AWF_DECL_88"):
			return 386;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWF_DECL_123"):
			return 384;
		case joaat("CLO_AWF_DECL_122"):
			return 383;
		case joaat("CLO_AWF_DECL_111"):
			return 382;
		case joaat("CLO_AWF_DECL_98"):
			return 381;
		case joaat("CLO_AWF_DECL_84"):
			return 380;
		case joaat("CLO_AWF_DECL_83"):
			return 379;
		case joaat("CLO_AWF_DECL_82"):
			return 378;
		case joaat("CLO_AWF_DECL_80"):
			return 377;
		case joaat("CLO_AWF_DECL_79"):
			return 376;
		case joaat("CLO_AWF_DECL_78"):
			return 375;
		case joaat("CLO_AWF_DECL_77"):
			return 374;
		case joaat("CLO_AWF_DECL_76"):
			return 373;
		case joaat("CLO_AWF_DECL_74"):
			return 372;
		case joaat("CLO_AWF_DECL_73"):
			return 371;
		case joaat("CLO_AWF_DECL_72"):
			return 370;
		case joaat("CLO_AWF_DECL_71"):
			return 369;
		case joaat("CLO_AWF_DECL_69"):
			return 368;
		case joaat("CLO_AWF_DECL_68"):
			return 367;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWF_DECL_124"):
			return 410;
		case joaat("CLO_AWF_DECL_112"):
			return 389;
		case joaat("CLO_AWF_DECL_100"):
			return 409;
		case joaat("CLO_AWF_DECL_99"):
			return 408;
		case joaat("CLO_AWF_DECL_97"):
			return 407;
		case joaat("CLO_AWF_DECL_96"):
			return 406;
		case joaat("CLO_AWF_DECL_92"):
			return 405;
		case joaat("CLO_AWF_DECL_81"):
			return 404;
		case joaat("CLO_AWF_DECL_75"):
			return 403;
		case joaat("CLO_AWF_DECL_70"):
			return 402;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWF_U_10_15"):
			return 366;
		case joaat("CLO_AWF_U_10_14"):
		case joaat("CLO_AWF_U_10_13"):
			return 365;
		case joaat("CLO_AWF_U_10_12"):
		case joaat("CLO_AWF_U_10_11"):
			return 364;
		case joaat("CLO_AWF_U_10_10"):
			return 363;
		case joaat("CLO_AWF_U_10_9"):
			return 362;
		case joaat("CLO_AWF_U_10_8"):
			return 361;
		case joaat("CLO_AWF_U_10_7"):
			return 360;
		case joaat("CLO_AWF_U_10_6"):
			return 359;
		case joaat("CLO_AWF_U_10_5"):
		case joaat("CLO_AWF_U_10_4"):
			return 358;
		case joaat("CLO_AWF_U_10_3"):
		case joaat("CLO_AWF_U_10_2"):
		case joaat("CLO_AWF_U_10_1"):
		case joaat("CLO_AWF_U_10_0"):
			return 357;
		case joaat("CLO_AWF_U_9_23"):
			return 355;
		case joaat("CLO_AWF_U_9_22"):
			return 356;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWF_U_9_21"):
			return 354;
		case joaat("CLO_AWF_U_9_20"):
		case joaat("CLO_AWF_U_9_19"):
			return 353;
		case joaat("CLO_AWF_U_9_18"):
			return 352;
		case joaat("CLO_AWF_U_9_17"):
		case joaat("CLO_AWF_U_9_16"):
			return 351;
		case joaat("CLO_AWF_U_9_15"):
		case joaat("CLO_AWF_U_9_14"):
			return 350;
		case joaat("CLO_AWF_U_9_13"):
		case joaat("CLO_AWF_U_9_12"):
			return 349;
		case joaat("CLO_AWF_U_9_11"):
			return 348;
		case joaat("CLO_AWF_U_9_10"):
			return 347;
		case joaat("CLO_AWF_U_9_9"):
			return 346;
		case joaat("CLO_AWF_U_9_8"):
		case joaat("CLO_AWF_U_9_7"):
			return 345;
		case joaat("CLO_AWF_U_9_6"):
			return 344;
		case joaat("CLO_AWF_U_9_5"):
			return 343;
		case joaat("CLO_AWF_U_9_4"):
		case joaat("CLO_AWF_U_9_3"):
			return 342;
		case joaat("CLO_AWF_U_9_0"):
			return 339;
		case joaat("CLO_AWF_U_9_1"):
			return 340;
		case joaat("CLO_AWF_U_9_2"):
			return 341;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWF_U_7_17"):
			return 338;
		case joaat("CLO_AWF_U_7_16"):
			return 337;
		case joaat("CLO_AWF_U_7_15"):
			return 336;
		case joaat("CLO_AWF_U_7_14"):
			return 335;
		case joaat("CLO_AWF_U_7_13"):
			return 334;
		case joaat("CLO_AWF_U_7_12"):
			return 333;
		case joaat("CLO_AWF_U_7_11"):
			return 332;
		case joaat("CLO_AWF_U_7_10"):
			return 331;
		case joaat("CLO_AWF_U_7_9"):
			return 330;
		case joaat("CLO_AWF_U_7_8"):
			return 329;
		case joaat("CLO_AWF_U_7_7"):
			return 328;
		case joaat("CLO_AWF_U_7_6"):
			return 327;
		case joaat("CLO_AWF_U_7_5"):
			return 326;
		case joaat("CLO_AWF_U_7_4"):
			return 325;
		case joaat("CLO_AWF_U_7_3"):
			return 324;
		case joaat("CLO_AWF_U_7_2"):
			return 323;
		case joaat("CLO_AWF_U_7_1"):
			return 322;
		case joaat("CLO_AWF_U_7_0"):
			return 321;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWF_PH_3_3"):
			return 432;
		case joaat("CLO_AWF_PH_3_2"):
			return 431;
		case joaat("CLO_AWF_PH_3_1"):
			return 430;
		case joaat("CLO_AWF_PH_3_0"):
			return 429;
		case joaat("CLO_AWF_PH_2_18"):
		case joaat("CLO_AWF_PH_2_17"):
		case joaat("CLO_AWF_PH_2_8"):
		case joaat("CLO_AWF_PH_1_18"):
		case joaat("CLO_AWF_PH_1_17"):
		case joaat("CLO_AWF_PH_1_8"):
			return 425;
		case joaat("CLO_AWF_PH_2_16"):
		case joaat("CLO_AWF_PH_2_15"):
		case joaat("CLO_AWF_PH_1_16"):
		case joaat("CLO_AWF_PH_1_15"):
			return 428;
		case joaat("CLO_AWF_PH_2_14"):
		case joaat("CLO_AWF_PH_2_13"):
		case joaat("CLO_AWF_PH_1_14"):
		case joaat("CLO_AWF_PH_1_13"):
			return 427;
		case joaat("CLO_AWF_PH_2_12"):
		case joaat("CLO_AWF_PH_2_11"):
		case joaat("CLO_AWF_PH_1_12"):
		case joaat("CLO_AWF_PH_1_11"):
			return 426;
		case joaat("CLO_AWF_PH_2_10"):
		case joaat("CLO_AWF_PH_2_9"):
		case joaat("CLO_AWF_PH_2_7"):
		case joaat("CLO_AWF_PH_1_10"):
		case joaat("CLO_AWF_PH_1_9"):
		case joaat("CLO_AWF_PH_1_7"):
			return 424;
		case joaat("CLO_AWF_PH_2_6"):
		case joaat("CLO_AWF_PH_1_6"):
			return 423;
		case joaat("CLO_AWF_PH_2_5"):
		case joaat("CLO_AWF_PH_2_4"):
		case joaat("CLO_AWF_PH_1_5"):
		case joaat("CLO_AWF_PH_1_4"):
			return 422;
		case joaat("CLO_AWF_PH_2_3"):
		case joaat("CLO_AWF_PH_1_3"):
			return 421;
		case joaat("CLO_AWF_PH_2_2"):
		case joaat("CLO_AWF_PH_1_2"):
			return 420;
		case joaat("CLO_AWF_PH_2_1"):
		case joaat("CLO_AWF_PH_2_0"):
		case joaat("CLO_AWF_PH_1_1"):
		case joaat("CLO_AWF_PH_1_0"):
			return 419;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWF_L_5_11"):
		case joaat("CLO_AWF_L_5_10"):
		case joaat("CLO_AWF_L_5_9"):
		case joaat("CLO_AWF_L_5_8"):
		case joaat("CLO_AWF_L_5_7"):
		case joaat("CLO_AWF_L_5_6"):
		case joaat("CLO_AWF_L_5_5"):
		case joaat("CLO_AWF_L_5_4"):
		case joaat("CLO_AWF_L_5_3"):
		case joaat("CLO_AWF_L_5_2"):
		case joaat("CLO_AWF_L_5_1"):
		case joaat("CLO_AWF_L_5_0"):
		case joaat("CLO_AWF_F_7_7"):
		case joaat("CLO_AWF_F_7_6"):
		case joaat("CLO_AWF_F_7_5"):
		case joaat("CLO_AWF_F_7_4"):
		case joaat("CLO_AWF_F_7_3"):
		case joaat("CLO_AWF_F_7_2"):
		case joaat("CLO_AWF_F_7_1"):
		case joaat("CLO_AWF_F_7_0"):
			return 414;
		case joaat("CLO_AWF_L_3_11"):
		case joaat("CLO_AWF_L_3_10"):
		case joaat("CLO_AWF_L_3_9"):
		case joaat("CLO_AWF_L_3_8"):
		case joaat("CLO_AWF_L_3_7"):
		case joaat("CLO_AWF_L_3_6"):
		case joaat("CLO_AWF_L_3_5"):
		case joaat("CLO_AWF_L_3_4"):
		case joaat("CLO_AWF_L_3_3"):
		case joaat("CLO_AWF_L_3_2"):
		case joaat("CLO_AWF_L_3_1"):
		case joaat("CLO_AWF_L_3_0"):
			return 413;
		case joaat("CLO_AWF_L_1_13"):
		case joaat("CLO_AWF_L_1_12"):
		case joaat("CLO_AWF_L_1_11"):
		case joaat("CLO_AWF_L_1_10"):
		case joaat("CLO_AWF_L_1_9"):
		case joaat("CLO_AWF_L_1_8"):
		case joaat("CLO_AWF_L_1_7"):
		case joaat("CLO_AWF_L_1_6"):
		case joaat("CLO_AWF_L_1_5"):
		case joaat("CLO_AWF_L_1_4"):
		case joaat("CLO_AWF_L_1_3"):
		case joaat("CLO_AWF_L_1_2"):
		case joaat("CLO_AWF_L_1_1"):
		case joaat("CLO_AWF_L_1_0"):
			return 412;
		case joaat("CLO_AWF_L_0_13"):
		case joaat("CLO_AWF_L_0_12"):
		case joaat("CLO_AWF_L_0_11"):
		case joaat("CLO_AWF_L_0_10"):
		case joaat("CLO_AWF_L_0_9"):
		case joaat("CLO_AWF_L_0_8"):
		case joaat("CLO_AWF_L_0_7"):
		case joaat("CLO_AWF_L_0_6"):
		case joaat("CLO_AWF_L_0_5"):
		case joaat("CLO_AWF_L_0_4"):
		case joaat("CLO_AWF_L_0_3"):
		case joaat("CLO_AWF_L_0_2"):
		case joaat("CLO_AWF_L_0_1"):
		case joaat("CLO_AWF_L_0_0"):
			return 411;
		default:
	}
	switch (iParam0)
	{
		case 1099274429:
		case 1418673872:
		case -1629301898:
		case -1372229093:
		case joaat("CLO_AWF_F_8_11"):
		case joaat("CLO_AWF_F_8_10"):
		case joaat("CLO_AWF_F_8_9"):
		case joaat("CLO_AWF_F_8_8"):
		case joaat("CLO_AWF_F_8_7"):
		case joaat("CLO_AWF_F_8_6"):
		case joaat("CLO_AWF_F_8_5"):
		case joaat("CLO_AWF_F_8_4"):
		case joaat("CLO_AWF_F_8_3"):
		case joaat("CLO_AWF_F_8_2"):
		case joaat("CLO_AWF_F_8_1"):
		case joaat("CLO_AWF_F_8_0"):
			return 418;
		case joaat("CLO_AWF_F_4_2"):
		case joaat("CLO_AWF_F_4_1"):
		case joaat("CLO_AWF_F_4_0"):
			return 417;
		case joaat("CLO_AWF_F_2_1"):
		case joaat("CLO_AWF_F_2_0"):
			return 416;
		case -1325081608:
		case -1105529308:
		case 1280545431:
		case 1576875498:
		case joaat("CLO_AWF_F_0_21"):
		case joaat("CLO_AWF_F_0_20"):
		case joaat("CLO_AWF_F_0_19"):
		case joaat("CLO_AWF_F_0_18"):
		case joaat("CLO_AWF_F_0_17"):
		case joaat("CLO_AWF_F_0_16"):
		case joaat("CLO_AWF_F_0_15"):
		case joaat("CLO_AWF_F_0_14"):
		case joaat("CLO_AWF_F_0_13"):
		case joaat("CLO_AWF_F_0_12"):
		case joaat("CLO_AWF_F_0_11"):
		case joaat("CLO_AWF_F_0_10"):
		case joaat("CLO_AWF_F_0_9"):
		case joaat("CLO_AWF_F_0_8"):
		case joaat("CLO_AWF_F_0_7"):
		case joaat("CLO_AWF_F_0_6"):
		case joaat("CLO_AWF_F_0_5"):
		case joaat("CLO_AWF_F_0_4"):
		case joaat("CLO_AWF_F_0_3"):
		case joaat("CLO_AWF_F_0_2"):
		case joaat("CLO_AWF_F_0_1"):
		case joaat("CLO_AWF_F_0_0"):
			return 415;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWF_O_B_1"):
		case joaat("CLO_AWF_O_B_0"):
			return 78;
		case joaat("CLO_AWF_O_B_2"):
		case joaat("CLO_AWF_O_B_3"):
			return 79;
		case joaat("CLO_AWF_O_B_4"):
		case joaat("CLO_AWF_O_B_5"):
			return 80;
		case joaat("CLO_AWF_O_B_6"):
		case joaat("CLO_AWF_O_B_7"):
			return 81;
		case joaat("CLO_AWF_O_B_8"):
		case joaat("CLO_AWF_O_B_9"):
			return 82;
		case joaat("CLO_AWF_O_B_10"):
		case joaat("CLO_AWF_O_B_11"):
			return 83;
		case joaat("CLO_AWF_O_B_12"):
		case joaat("CLO_AWF_O_B_13"):
			return 84;
		case joaat("CLO_AWF_O_B_14"):
		case joaat("CLO_AWF_O_B_15"):
			return 85;
		case joaat("CLO_AWF_O_C_11"):
		case joaat("CLO_AWF_O_C_10"):
		case joaat("CLO_AWF_O_C_9"):
		case joaat("CLO_AWF_O_C_8"):
		case joaat("CLO_AWF_O_C_7"):
		case joaat("CLO_AWF_O_C_6"):
		case joaat("CLO_AWF_O_C_5"):
		case joaat("CLO_AWF_O_C_4"):
		case joaat("CLO_AWF_O_C_3"):
		case joaat("CLO_AWF_O_C_2"):
		case joaat("CLO_AWF_O_C_1"):
		case joaat("CLO_AWF_O_C_0"):
			return 86;
		case joaat("CLO_AWF_O_D_11"):
		case joaat("CLO_AWF_O_D_10"):
		case joaat("CLO_AWF_O_D_9"):
		case joaat("CLO_AWF_O_D_8"):
		case joaat("CLO_AWF_O_D_7"):
		case joaat("CLO_AWF_O_D_6"):
		case joaat("CLO_AWF_O_D_5"):
		case joaat("CLO_AWF_O_D_4"):
		case joaat("CLO_AWF_O_D_3"):
		case joaat("CLO_AWF_O_D_2"):
		case joaat("CLO_AWF_O_D_1"):
		case joaat("CLO_AWF_O_D_0"):
			return 87;
		case joaat("CLO_AWF_O_E_11"):
		case joaat("CLO_AWF_O_E_10"):
		case joaat("CLO_AWF_O_E_9"):
		case joaat("CLO_AWF_O_E_8"):
		case joaat("CLO_AWF_O_E_7"):
		case joaat("CLO_AWF_O_E_6"):
		case joaat("CLO_AWF_O_E_5"):
		case joaat("CLO_AWF_O_E_4"):
		case joaat("CLO_AWF_O_E_3"):
		case joaat("CLO_AWF_O_E_2"):
		case joaat("CLO_AWF_O_E_1"):
		case joaat("CLO_AWF_O_E_0"):
			return 88;
		case joaat("CLO_AWF_O_F_17"):
		case joaat("CLO_AWF_O_F_16"):
		case joaat("CLO_AWF_O_F_15"):
		case joaat("CLO_AWF_O_F_14"):
		case -286195156:
		case 564586391:
		case -2087081097:
		case 1960971784:
		case joaat("CLO_AWF_O_F_9"):
		case joaat("CLO_AWF_O_F_8"):
		case joaat("CLO_AWF_O_F_7"):
		case joaat("CLO_AWF_O_F_6"):
		case joaat("CLO_AWF_O_F_5"):
		case joaat("CLO_AWF_O_F_4"):
		case joaat("CLO_AWF_O_F_3"):
		case joaat("CLO_AWF_O_F_2"):
		case joaat("CLO_AWF_O_F_1"):
		case joaat("CLO_AWF_O_F_0"):
			return 89;
		case joaat("CLO_AWF_O_G_7"):
		case joaat("CLO_AWF_O_G_6"):
		case joaat("CLO_AWF_O_G_5"):
		case joaat("CLO_AWF_O_G_4"):
		case joaat("CLO_AWF_O_G_3"):
		case joaat("CLO_AWF_O_G_2"):
		case joaat("CLO_AWF_O_G_1"):
		case joaat("CLO_AWF_O_G_0"):
			return 90;
		case 467030408:
		case joaat("CLO_AWF_O_H_9"):
		case joaat("CLO_AWF_O_H_8"):
		case joaat("CLO_AWF_O_H_7"):
		case joaat("CLO_AWF_O_H_6"):
		case joaat("CLO_AWF_O_H_5"):
		case joaat("CLO_AWF_O_H_4"):
		case joaat("CLO_AWF_O_H_3"):
		case joaat("CLO_AWF_O_H_2"):
		case joaat("CLO_AWF_O_H_1"):
		case joaat("CLO_AWF_O_H_0"):
			return 91;
		case joaat("CLO_AWF_O_I_1"):
			return 92;
		case joaat("CLO_AWF_O_I_2"):
			return 93;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_AWF_B_12_16"):
		case joaat("CLO_AWF_B_12_15"):
		case joaat("CLO_AWF_B_12_14"):
		case joaat("CLO_AWF_B_12_13"):
		case joaat("CLO_AWF_B_12_12"):
		case joaat("CLO_AWF_B_12_11"):
		case joaat("CLO_AWF_B_12_10"):
		case joaat("CLO_AWF_B_12_9"):
		case joaat("CLO_AWF_B_12_8"):
		case joaat("CLO_AWF_B_12_7"):
		case joaat("CLO_AWF_B_12_6"):
		case joaat("CLO_AWF_B_12_5"):
		case joaat("CLO_AWF_B_12_4"):
		case joaat("CLO_AWF_B_12_3"):
		case joaat("CLO_AWF_B_12_2"):
		case joaat("CLO_AWF_B_12_1"):
		case joaat("CLO_AWF_B_12_0"):
			return 101;
		case joaat("CLO_AWF_B_11_0"):
			return 100;
		case joaat("CLO_AWF_B_10_0"):
			return 99;
		case joaat("CLO_AWF_B_9_0"):
			return 98;
		case joaat("CLO_AWF_B_8_11"):
		case joaat("CLO_AWF_B_8_10"):
		case joaat("CLO_AWF_B_8_9"):
		case joaat("CLO_AWF_B_8_8"):
		case joaat("CLO_AWF_B_8_7"):
		case joaat("CLO_AWF_B_8_6"):
		case joaat("CLO_AWF_B_8_5"):
		case joaat("CLO_AWF_B_8_4"):
		case joaat("CLO_AWF_B_8_3"):
		case joaat("CLO_AWF_B_8_2"):
		case joaat("CLO_AWF_B_8_1"):
		case joaat("CLO_AWF_B_8_0"):
			return 97;
		case joaat("CLO_AWF_B_4_11"):
		case joaat("CLO_AWF_B_4_10"):
		case joaat("CLO_AWF_B_4_9"):
		case joaat("CLO_AWF_B_4_8"):
		case joaat("CLO_AWF_B_4_7"):
		case joaat("CLO_AWF_B_4_6"):
		case joaat("CLO_AWF_B_4_5"):
		case joaat("CLO_AWF_B_4_4"):
		case joaat("CLO_AWF_B_4_3"):
		case joaat("CLO_AWF_B_4_2"):
		case joaat("CLO_AWF_B_4_1"):
		case joaat("CLO_AWF_B_4_0"):
			return 96;
		case joaat("CLO_AWF_B_3_7"):
		case joaat("CLO_AWF_B_3_6"):
		case joaat("CLO_AWF_B_3_5"):
		case joaat("CLO_AWF_B_3_4"):
		case joaat("CLO_AWF_B_3_3"):
		case joaat("CLO_AWF_B_3_2"):
		case joaat("CLO_AWF_B_3_1"):
		case joaat("CLO_AWF_B_3_0"):
			return 95;
		case joaat("CLO_AWF_B_2_15"):
		case joaat("CLO_AWF_B_2_14"):
		case joaat("CLO_AWF_B_2_13"):
		case joaat("CLO_AWF_B_2_12"):
		case joaat("CLO_AWF_B_2_11"):
		case joaat("CLO_AWF_B_2_10"):
		case joaat("CLO_AWF_B_2_9"):
		case joaat("CLO_AWF_B_2_8"):
		case joaat("CLO_AWF_B_2_7"):
		case joaat("CLO_AWF_B_2_6"):
		case joaat("CLO_AWF_B_2_5"):
		case joaat("CLO_AWF_B_2_4"):
		case joaat("CLO_AWF_B_2_3"):
		case joaat("CLO_AWF_B_2_2"):
		case joaat("CLO_AWF_B_2_1"):
		case joaat("CLO_AWF_B_2_0"):
			return 94;
		default:
	}
	return -1;
}

int func_403(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xFB72E
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(&uParam0);
	switch (iVar0)
	{
		case joaat("WT_FLAREGUN"):
			return !__LIB_0__::func_137(3755, -1);
			break;
		case joaat("CLO_HST_E_2_0"):
			return (!__LIB_0__::func_137(3760, -1) && !Global_262145.f_20188 /* Tunable: DISABLE_HEIST_UNLOCK_EARPIECE */);
			break;
		case -993451163:
		case joaat("CLO_HST_B_0_0"):
			return (!__LIB_0__::func_137(3757, -1) && !Global_262145.f_20186 /* Tunable: DISABLE_HEIST_UNLOCK_NVISION */);
			break;
		case joaat("CLO_HST_B_1_0"):
			return (!__LIB_0__::func_137(3756, -1) && !Global_262145.f_20187 /* Tunable: DISABLE_HEIST_UNLOCK_REBREATHER */);
			break;
		case joaat("CLO_HST_B_2_0"):
			return !__LIB_0__::func_137(3758, -1);
			break;
		case joaat("CLO_HST_B_3_0"):
			return !__LIB_0__::func_137(3759, -1);
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_H3M_PH_5_0"):
		case joaat("CLO_H3M_PH_6_0"):
			return !((__LIB_0__::func_137(28245, -1) || __LIB_0__::func_137(28232, -1)) || __LIB_0__::func_137(28234, -1));
			break;
		case joaat("CLO_H3M_O_DL_11"):
		case joaat("CLO_H3M_O_DL_12"):
		case joaat("CLO_H3M_U_7_0"):
		case joaat("CLO_H3M_O_DL_13"):
		case joaat("CLO_H3M_O_DL_14"):
		case joaat("CLO_H3M_O_DL_15"):
		case joaat("CLO_H3M_O_DL_16"):
			return !__LIB_0__::func_137(28237, -1);
			break;
		case joaat("CLO_H3M_O_DL_21"):
		case joaat("CLO_H3M_O_DL_22"):
		case joaat("CLO_H3M_O_DL_23"):
		case joaat("CLO_H3M_O_DL_24"):
		case joaat("CLO_H3M_O_DL_25"):
		case joaat("CLO_H3M_O_DL_26"):
			return !__LIB_0__::func_137(28238, -1);
			break;
		case joaat("CLO_H3M_O_DL_31"):
		case joaat("CLO_H3M_O_DL_32"):
		case joaat("CLO_H3M_O_DL_33"):
		case joaat("CLO_H3M_O_DL_34"):
		case joaat("CLO_H3M_O_DL_35"):
		case joaat("CLO_H3M_O_DL_36"):
			return !__LIB_0__::func_137(28239, -1);
			break;
		case joaat("CLO_H3M_O_DH_11"):
		case joaat("CLO_H3M_L_4_11"):
		case joaat("CLO_H3M_U_10_11"):
		case joaat("CLO_H3M_O_DH_12"):
		case joaat("CLO_H3M_L_4_12"):
		case joaat("CLO_H3M_U_10_12"):
		case joaat("CLO_H3M_O_DH_13"):
		case joaat("CLO_H3M_L_4_17"):
		case joaat("CLO_H3M_U_10_17"):
		case joaat("CLO_H3M_O_DH_14"):
		case joaat("CLO_H3M_L_4_13"):
		case joaat("CLO_H3M_U_10_13"):
		case joaat("CLO_H3M_O_DH_15"):
		case joaat("CLO_H3M_L_4_10"):
		case joaat("CLO_H3M_U_10_10"):
		case joaat("CLO_H3M_O_DH_16"):
		case joaat("CLO_H3M_L_4_18"):
		case joaat("CLO_H3M_U_10_18"):
			return !__LIB_0__::func_137(28240, -1);
			break;
		case joaat("CLO_H3M_O_DH_21"):
		case joaat("CLO_H3M_L_5_5"):
		case joaat("CLO_H3M_O_DH_22"):
		case joaat("CLO_H3M_L_5_3"):
		case joaat("CLO_H3M_O_DH_23"):
		case joaat("CLO_H3M_L_5_1"):
		case joaat("CLO_H3M_O_DH_24"):
		case joaat("CLO_H3M_O_DH_25"):
		case joaat("CLO_H3M_L_5_0"):
		case joaat("CLO_H3M_O_DH_26"):
			return !__LIB_0__::func_137(28241, -1);
			break;
		case joaat("CLO_H3M_O_DH_31"):
		case joaat("CLO_H3M_O_DH_32"):
		case joaat("CLO_H3M_O_DH_33"):
		case joaat("CLO_H3M_O_DH_34"):
		case joaat("CLO_H3M_O_DH_35"):
		case joaat("CLO_H3M_O_DH_36"):
			return !__LIB_0__::func_137(28242, -1);
			break;
		case joaat("CLO_H3M_O_SH_11"):
		case joaat("CLO_H3M_S_1_0"):
		case joaat("CLO_H3M_PH_10_0"):
		case joaat("CLO_H3M_PH_11_0"):
		case joaat("CLO_H3M_O_SH_12"):
		case joaat("CLO_H3M_O_SH_13"):
		case joaat("CLO_H3M_O_SH_14"):
		case joaat("CLO_H3M_O_SH_15"):
		case joaat("CLO_H3M_O_SH_16"):
			return !__LIB_0__::func_137(28246, -1);
			break;
		case joaat("CLO_H3M_O_SH_21"):
		case joaat("CLO_H3M_B_14_14"):
		case joaat("CLO_H3M_S_12_0"):
		case joaat("CLO_H3M_O_SH_22"):
		case joaat("CLO_H3M_B_14_22"):
		case joaat("CLO_H3M_O_SH_23"):
		case joaat("CLO_H3M_B_14_21"):
		case joaat("CLO_H3M_O_SH_24"):
		case joaat("CLO_H3M_B_14_10"):
		case joaat("CLO_H3M_O_SH_25"):
		case joaat("CLO_H3M_B_14_0"):
		case joaat("CLO_H3M_O_SH_26"):
		case joaat("CLO_H3M_B_14_2"):
			return !__LIB_0__::func_137(28247, -1);
			break;
		case joaat("CLO_H3M_O_SH_31"):
		case joaat("CLO_H3M_S_13_0"):
		case joaat("CLO_H3M_O_SH_32"):
		case joaat("CLO_H3M_O_SH_33"):
		case joaat("CLO_H3M_O_SH_34"):
		case joaat("CLO_H3M_O_SH_35"):
		case joaat("CLO_H3M_O_SH_36"):
			return !__LIB_0__::func_137(28248, -1);
			break;
		case joaat("CLO_H3M_O_FIB_1"):
		case joaat("CLO_H3M_O_FIB_2"):
		case joaat("CLO_H3M_O_FIB_3"):
		case joaat("CLO_H3M_O_FIB_4"):
			return !__LIB_0__::func_137(28230, -1);
			break;
		case joaat("CLO_H3M_O_UND_1"):
		case joaat("CLO_H3M_PH_9_0"):
			return !__LIB_0__::func_137(28226, -1);
			break;
		case joaat("CLO_H3M_O_PRP_1"):
		case joaat("CLO_H3M_O_PRP_2"):
			return !__LIB_0__::func_137(28225, -1);
			break;
		case joaat("CLO_H3M_O_JAN_1"):
		case joaat("CLO_H3M_O_JAN_2"):
		case joaat("CLO_H3M_PH_5_1"):
		case joaat("CLO_H3M_PH_6_1"):
		case joaat("CLO_H3M_O_JAN_3"):
		case joaat("CLO_H3M_O_JAN_4"):
		case joaat("CLO_H3M_O_JAN_5"):
		case joaat("CLO_H3M_O_JAN_6"):
			return !__LIB_0__::func_137(28234, -1);
			break;
		case joaat("CLO_H3M_O_CLB_1"):
		case joaat("CLO_H3M_U_16_0"):
		case joaat("CLO_H3M_PH_2_2"):
		case joaat("CLO_H3M_O_CLB_2"):
		case joaat("CLO_H3M_O_CLB_3"):
		case joaat("CLO_H3M_PH_3_2"):
		case joaat("CLO_H3M_O_CLB_4"):
		case joaat("CLO_H3M_U_15_0"):
			return !__LIB_0__::func_137(28235, -1);
			break;
		case joaat("CLO_H3M_O_GRP_1"):
		case joaat("CLO_H3M_U_2_1"):
		case joaat("CLO_H3M_U_3_1"):
		case joaat("CLO_H3M_PH_7_0"):
		case joaat("CLO_H3M_O_GRP_2"):
		case joaat("CLO_H3M_O_GRP_3"):
		case joaat("CLO_H3M_U_4_1"):
		case joaat("CLO_H3M_U_5_1"):
		case joaat("CLO_H3M_O_GRP_4"):
		case joaat("CLO_H3M_O_GRP_5"):
		case joaat("CLO_H3M_U_5_2"):
		case joaat("CLO_H3M_O_GRP_6"):
		case joaat("CLO_H3M_U_2_2"):
		case joaat("CLO_H3M_U_3_2"):
			return !__LIB_0__::func_137(28232, -1);
			break;
		case joaat("CLO_H3M_O_BS_1"):
		case joaat("CLO_H3M_B_6_1"):
		case joaat("CLO_H3M_PH_2_0"):
		case joaat("CLO_H3M_O_BS_2"):
		case joaat("CLO_H3M_B_15_1"):
		case joaat("CLO_H3M_O_BS_3"):
		case joaat("CLO_H3M_PH_3_0"):
		case joaat("CLO_H3M_O_BS_4"):
		case joaat("CLO_H3M_O_BS_5"):
		case joaat("CLO_H3M_B_6_0"):
		case joaat("CLO_H3M_O_BS_6"):
			return !__LIB_0__::func_137(28233, -1);
			break;
		case joaat("CLO_H3M_O_FF_1"):
		case joaat("CLO_H3M_PH_0_0"):
		case joaat("CLO_H3M_O_FF_2"):
		case joaat("CLO_H3M_O_FF_7"):
		case joaat("CLO_H3M_PH_1_0"):
		case joaat("CLO_H3M_O_FF_8"):
			return !__LIB_0__::func_137(28236, -1);
			break;
		case joaat("CLO_H3M_O_SL_11"):
		case joaat("CLO_H3M_O_SL_12"):
		case joaat("CLO_H3M_O_SL_13"):
		case joaat("CLO_H3M_O_SL_14"):
		case joaat("CLO_H3M_O_SL_15"):
		case joaat("CLO_H3M_O_SL_16"):
			return !__LIB_0__::func_137(28243, -1);
			break;
		case joaat("CLO_H3M_O_SL_21"):
		case joaat("CLO_H3M_O_SL_22"):
		case joaat("CLO_H3M_O_SL_23"):
		case joaat("CLO_H3M_O_SL_24"):
		case joaat("CLO_H3M_O_SL_25"):
		case joaat("CLO_H3M_O_SL_26"):
			return !__LIB_0__::func_137(28244, -1);
			break;
		case joaat("CLO_H3M_O_SL_31"):
		case joaat("CLO_H3M_B_9_0"):
		case joaat("CLO_H3M_O_SL_32"):
		case joaat("CLO_H3M_O_SL_33"):
		case joaat("CLO_H3M_O_SL_34"):
		case joaat("CLO_H3M_O_SL_35"):
		case joaat("CLO_H3M_O_SL_36"):
			return !__LIB_0__::func_137(28245, -1);
			break;
		case joaat("CLO_H3M_O_VAL_1"):
			return !__LIB_0__::func_137(28227, -1);
			break;
		case joaat("CLO_H3M_O_PR_1"):
		case joaat("CLO_H3M_L_2_0"):
		case joaat("CLO_H3M_U_3_3"):
		case joaat("CLO_H3M_PH_2_1"):
		case joaat("CLO_H3M_PH_3_1"):
		case joaat("CLO_H3M_O_PR_4"):
		case joaat("CLO_H3M_U_5_4"):
		case joaat("CLO_H3M_O_PR_2"):
		case joaat("CLO_H3M_U_4_3"):
		case joaat("CLO_H3M_U_5_3"):
		case joaat("CLO_H3M_O_PR_3"):
		case joaat("CLO_H3M_U_2_4"):
		case joaat("CLO_H3M_U_3_4"):
			return !__LIB_0__::func_137(28229, -1);
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_H3F_PH_5_0"):
		case joaat("CLO_H3F_PH_6_0"):
			return !((__LIB_0__::func_137(28234, -1) || __LIB_0__::func_137(28232, -1)) || __LIB_0__::func_137(28245, -1));
			break;
		case joaat("CLO_H3F_O_DL_11"):
		case joaat("CLO_H3F_U_4_5"):
		case joaat("CLO_H3F_O_DL_12"):
		case joaat("CLO_H3F_U_7_0"):
		case joaat("CLO_H3F_O_DL_13"):
		case joaat("CLO_H3F_U_4_7"):
		case joaat("CLO_H3F_O_DL_14"):
		case joaat("CLO_H3F_U_8_0"):
		case joaat("CLO_H3F_O_DL_15"):
		case joaat("CLO_H3F_O_DL_16"):
		case joaat("CLO_H3F_U_5_3"):
			return !__LIB_0__::func_137(28237, -1);
			break;
		case joaat("CLO_H3F_O_DL_21"):
		case joaat("CLO_H3F_O_DL_22"):
		case joaat("CLO_H3F_O_DL_23"):
		case joaat("CLO_H3F_O_DL_24"):
		case joaat("CLO_H3F_O_DL_25"):
		case joaat("CLO_H3F_O_DL_26"):
			return !__LIB_0__::func_137(28238, -1);
			break;
		case joaat("CLO_H3F_O_DL_31"):
		case joaat("CLO_H3F_U_14_0"):
		case joaat("CLO_H3F_O_DL_32"):
		case joaat("CLO_H3F_O_DL_33"):
		case joaat("CLO_H3F_U_14_5"):
		case joaat("CLO_H3F_O_DL_34"):
		case joaat("CLO_H3F_U_14_6"):
		case joaat("CLO_H3F_O_DL_35"):
		case joaat("CLO_H3F_U_14_2"):
		case joaat("CLO_H3F_O_DL_36"):
		case joaat("CLO_H3F_U_14_4"):
			return !__LIB_0__::func_137(28239, -1);
			break;
		case joaat("CLO_H3F_O_DH_11"):
		case joaat("CLO_H3F_L_4_11"):
		case joaat("CLO_H3F_U_11_11"):
		case joaat("CLO_H3F_O_DH_12"):
		case joaat("CLO_H3F_L_4_12"):
		case joaat("CLO_H3F_U_11_12"):
		case joaat("CLO_H3F_O_DH_13"):
		case joaat("CLO_H3F_L_4_17"):
		case joaat("CLO_H3F_U_11_17"):
		case joaat("CLO_H3F_O_DH_14"):
		case joaat("CLO_H3F_L_4_13"):
		case joaat("CLO_H3F_U_11_13"):
		case joaat("CLO_H3F_O_DH_15"):
		case joaat("CLO_H3F_L_4_10"):
		case joaat("CLO_H3F_U_11_10"):
		case joaat("CLO_H3F_O_DH_16"):
		case joaat("CLO_H3F_L_4_18"):
		case joaat("CLO_H3F_U_11_18"):
			return !__LIB_0__::func_137(28240, -1);
			break;
		case joaat("CLO_H3F_O_DH_21"):
		case joaat("CLO_H3F_L_5_5"):
		case joaat("CLO_H3F_O_DH_22"):
		case joaat("CLO_H3F_L_5_3"):
		case joaat("CLO_H3F_O_DH_23"):
		case joaat("CLO_H3F_L_5_1"):
		case joaat("CLO_H3F_O_DH_24"):
		case joaat("CLO_H3F_O_DH_25"):
		case joaat("CLO_H3F_L_5_0"):
		case joaat("CLO_H3F_O_DH_26"):
			return !__LIB_0__::func_137(28241, -1);
			break;
		case joaat("CLO_H3F_O_DH_31"):
		case joaat("CLO_H3F_O_DH_32"):
		case joaat("CLO_H3F_O_DH_33"):
		case joaat("CLO_H3F_O_DH_34"):
		case joaat("CLO_H3F_O_DH_35"):
		case joaat("CLO_H3F_O_DH_36"):
			return !__LIB_0__::func_137(28242, -1);
			break;
		case joaat("CLO_H3F_O_SH_11"):
		case joaat("CLO_H3F_PH_10_0"):
		case joaat("CLO_H3F_PH_11_0"):
		case joaat("CLO_H3F_O_SH_12"):
		case joaat("CLO_H3F_O_SH_13"):
		case joaat("CLO_H3F_O_SH_14"):
		case joaat("CLO_H3F_S_1_0"):
		case joaat("CLO_H3F_O_SH_15"):
		case joaat("CLO_H3F_O_SH_16"):
			return !__LIB_0__::func_137(28246, -1);
			break;
		case joaat("CLO_H3F_O_SH_21"):
		case joaat("CLO_H3F_B_14_24"):
		case joaat("CLO_H3F_S_12_0"):
		case joaat("CLO_H3F_O_SH_22"):
		case joaat("CLO_H3F_B_14_22"):
		case joaat("CLO_H3F_O_SH_23"):
		case joaat("CLO_H3F_B_14_21"):
		case joaat("CLO_H3F_O_SH_24"):
		case joaat("CLO_H3F_B_14_10"):
		case joaat("CLO_H3F_O_SH_25"):
		case joaat("CLO_H3F_O_SH_26"):
		case joaat("CLO_H3F_B_14_2"):
			return !__LIB_0__::func_137(28247, -1);
			break;
		case joaat("CLO_H3F_O_SH_31"):
		case joaat("CLO_H3F_S_13_0"):
		case joaat("CLO_H3F_O_SH_32"):
		case joaat("CLO_H3F_O_SH_33"):
		case joaat("CLO_H3F_O_SH_34"):
		case joaat("CLO_H3F_O_SH_35"):
		case joaat("CLO_H3F_O_SH_36"):
			return !__LIB_0__::func_137(28248, -1);
			break;
		case joaat("CLO_H3F_O_FIB_1"):
		case joaat("CLO_H3F_O_FIB_2"):
		case joaat("CLO_H3F_O_FIB_3"):
		case joaat("CLO_H3F_O_FIB_4"):
			return !__LIB_0__::func_137(28230, -1);
			break;
		case joaat("CLO_H3F_O_UND_1"):
		case joaat("CLO_H3F_PH_9_0"):
			return !__LIB_0__::func_137(28226, -1);
			break;
		case joaat("CLO_H3F_O_PRP_1"):
		case joaat("CLO_H3F_O_PRP_2"):
			return !__LIB_0__::func_137(28225, -1);
			break;
		case joaat("CLO_H3F_O_JAN_1"):
		case joaat("CLO_H3F_O_JAN_2"):
		case joaat("CLO_H3F_PH_5_1"):
		case joaat("CLO_H3F_PH_6_1"):
		case joaat("CLO_H3F_O_JAN_3"):
		case joaat("CLO_H3F_O_JAN_4"):
		case joaat("CLO_H3F_O_JAN_5"):
		case joaat("CLO_H3F_O_JAN_6"):
			return !__LIB_0__::func_137(28234, -1);
			break;
		case joaat("CLO_H3F_O_CLB_1"):
		case joaat("CLO_H3F_U_20_0"):
		case joaat("CLO_H3F_PH_2_2"):
		case joaat("CLO_H3F_O_CLB_2"):
		case joaat("CLO_H3F_O_CLB_3"):
		case joaat("CLO_H3F_PH_3_2"):
		case joaat("CLO_H3F_O_CLB_4"):
		case joaat("CLO_H3F_U_19_0"):
			return !__LIB_0__::func_137(28235, -1);
			break;
		case joaat("CLO_H3F_O_GRP_4"):
		case joaat("CLO_H3F_U_5_1"):
		case joaat("CLO_H3F_O_GRP_2"):
		case joaat("CLO_H3F_U_3_1"):
		case joaat("CLO_H3F_O_GRP_1"):
		case joaat("CLO_H3F_U_2_1"):
		case joaat("CLO_H3F_PH_7_0"):
		case joaat("CLO_H3F_O_GRP_3"):
		case joaat("CLO_H3F_U_4_1"):
		case joaat("CLO_H3F_O_GRP_5"):
		case joaat("CLO_H3F_U_5_2"):
		case joaat("CLO_H3F_O_GRP_6"):
		case joaat("CLO_H3F_U_2_2"):
			return !__LIB_0__::func_137(28232, -1);
			break;
		case joaat("CLO_H3F_O_BS_1"):
		case joaat("CLO_H3F_B_6_1"):
		case joaat("CLO_H3F_PH_2_0"):
		case joaat("CLO_H3F_O_BS_2"):
		case joaat("CLO_H3F_B_15_0"):
		case joaat("CLO_H3F_O_BS_3"):
		case joaat("CLO_H3F_PH_3_0"):
		case joaat("CLO_H3F_O_BS_4"):
		case joaat("CLO_H3F_O_BS_5"):
		case joaat("CLO_H3F_B_6_0"):
		case joaat("CLO_H3F_O_BS_6"):
			return !__LIB_0__::func_137(28233, -1);
			break;
		case joaat("CLO_H3F_O_FF_1"):
		case joaat("CLO_H3F_PH_0_0"):
		case joaat("CLO_H3F_O_FF_2"):
		case joaat("CLO_H3F_O_FF_7"):
		case joaat("CLO_H3F_PH_1_0"):
		case joaat("CLO_H3F_O_FF_8"):
			return !__LIB_0__::func_137(28236, -1);
			break;
		case joaat("CLO_H3F_O_SL_11"):
		case joaat("CLO_H3F_O_SL_12"):
		case joaat("CLO_H3F_O_SL_13"):
		case joaat("CLO_H3F_O_SL_14"):
		case joaat("CLO_H3F_O_SL_15"):
		case joaat("CLO_H3F_O_SL_16"):
			return !__LIB_0__::func_137(28243, -1);
			break;
		case joaat("CLO_H3F_O_SL_21"):
		case joaat("CLO_H3F_O_SL_22"):
		case joaat("CLO_H3F_O_SL_23"):
		case joaat("CLO_H3F_O_SL_24"):
		case joaat("CLO_H3F_O_SL_25"):
		case joaat("CLO_H3F_O_SL_26"):
			return !__LIB_0__::func_137(28244, -1);
			break;
		case joaat("CLO_H3F_O_SL_31"):
		case joaat("CLO_H3F_B_9_0"):
		case joaat("CLO_H3F_O_SL_32"):
		case joaat("CLO_H3F_O_SL_33"):
		case joaat("CLO_H3F_O_SL_34"):
		case joaat("CLO_H3F_O_SL_35"):
		case joaat("CLO_H3F_O_SL_36"):
			return !__LIB_0__::func_137(28245, -1);
			break;
		case joaat("CLO_H3F_O_VAL_1"):
			return !__LIB_0__::func_137(28227, -1);
			break;
		case joaat("CLO_H3F_O_PR_1"):
		case joaat("CLO_H3F_L_2_0"):
		case joaat("CLO_H3F_U_3_3"):
		case joaat("CLO_H3F_PH_2_1"):
		case joaat("CLO_H3F_PH_3_1"):
		case joaat("CLO_H3F_O_PR_4"):
		case joaat("CLO_H3F_U_5_4"):
		case joaat("CLO_H3F_O_PR_2"):
		case joaat("CLO_H3F_U_4_3"):
		case joaat("CLO_H3F_O_PR_3"):
		case joaat("CLO_H3F_U_2_4"):
			return !__LIB_0__::func_137(28229, -1);
			break;
	}
	return 0;
}

void func_404(var uParam0, var uParam1)//Position - 0xFD21A
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == joaat("wardrobe_sp") || MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == joaat("wardrobe_mp"))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*uParam0 = 0;
			*uParam1 = (Global_4538470 - 1);
		}
		else
		{
			*uParam0 = 0;
			*uParam1 = (Global_4538470 - 1);
		}
	}
	else
	{
		*uParam0 = 0;
		*uParam1 = (Global_4538470 - 1);
	}
}

int func_405(int iParam0)//Position - 0xFD410
{
	switch (iParam0)
	{
		case 78:
			return 25;
			break;
		case 89:
			return 3;
			break;
		case 122:
			return 12;
			break;
		case 153:
			return 4;
			break;
		case 235:
			return 3;
			break;
		case 238:
			return 8;
			break;
		case 247:
			return 2;
			break;
		case 242:
			return 22;
			break;
		case 243:
			return 7;
			break;
		case 258:
			return 2;
			break;
	}
	return 0;
}

void func_406(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xFD723
{
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		STATS::PLAYSTATS_CLOTH_CHANGE(iParam0, iParam1, iParam2, iParam3, iParam4);
	}
}

void func_407(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xFD83F
{
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (iParam2 > -1)
		{
			STATS::PLAYSTATS_PROP_CHANGE(iParam0, iParam1, iParam2, iParam3);
		}
	}
}

int func_408(var uParam0)//Position - 0xFF208
{
	if ((uParam0->f_521 == 3 || uParam0->f_521 == 4) || uParam0->f_521 == 8)
	{
		return 1;
	}
	return 0;
}

void func_409(var uParam0)//Position - 0xFF2ED
{
	MISC::CLEAR_BIT(&(uParam0->f_560), 1);
	MISC::CLEAR_BIT(&(uParam0->f_560), 0);
	MISC::SET_BIT(&(uParam0->f_555), 25);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
}

int func_410(int iParam0)//Position - 0xFF3C5
{
	return (iParam0 - 25);
}

int func_411(int iParam0)//Position - 0xFF44C
{
	if (iParam0 != -1)
	{
		return Global_1970897[iParam0 /*68*/].f_18.f_16;
	}
	return 0;
}

void func_412(var uParam0, int iParam1)//Position - 0xFFE9D
{
	float fVar0;
	__LIB_0__::func_471(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 1);
	fVar0 = 1f;
	if (fVar0 == 1f)
	{
		if ((!uParam0->f_4 || !uParam0->f_9) || !uParam0->f_8)
		{
			if (uParam0->f_28 <= 0)
			{
				uParam0->f_28 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_32 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_28 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_32, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_28) > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_28 = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if ((!uParam0->f_5 || !uParam0->f_10) || !uParam0->f_11)
		{
			if (uParam0->f_29 <= 0)
			{
				uParam0->f_29 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_33 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_29 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_33, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_29) > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_29 = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if (!uParam0->f_6)
		{
			if (uParam0->f_30 <= 0)
			{
				uParam0->f_30 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_34 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_30 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_34, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_30) > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_30 = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if (!uParam0->f_7)
		{
			if (uParam0->f_31 <= 0)
			{
				uParam0->f_31 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_35 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_31 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_35, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_31) > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_31 = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if (((!uParam0->f_12 || !uParam0->f_13) || !uParam0->f_14) || !uParam0->f_15)
		{
			if (uParam0->f_18 <= 0)
			{
				uParam0->f_18 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_19 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_18 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_19, iParam1 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_18) > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_18 = 0;
		}
	}
	iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) * fVar0));
	if (!uParam0->f_4)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_24, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_20) > iParam1)) || (uParam0->f_1 < 75 && uParam0->f_1 > -75))
		{
			uParam0->f_4 = 1;
		}
	}
	if (!uParam0->f_5)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_25, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_21) > iParam1)) || (*uParam0 < 75 && *uParam0 > -75))
		{
			uParam0->f_5 = 1;
		}
	}
	if (!uParam0->f_6)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_26, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_22) > iParam1)) || (uParam0->f_3 < 75 && uParam0->f_3 > -75))
		{
			uParam0->f_6 = 1;
		}
	}
	if (!uParam0->f_7)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_27, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_23) > iParam1)) || (uParam0->f_2 < 75 && uParam0->f_2 > -75))
		{
			uParam0->f_7 = 1;
		}
	}
	if (!uParam0->f_8)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_24, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_20) > iParam1))
		{
			uParam0->f_8 = 1;
		}
	}
	if (!uParam0->f_9)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_24, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_20) > iParam1))
		{
			uParam0->f_9 = 1;
		}
	}
	if (!uParam0->f_10)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_25, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_21) > iParam1))
		{
			uParam0->f_10 = 1;
		}
	}
	if (!uParam0->f_11)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_25, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_21) > iParam1))
		{
			uParam0->f_11 = 1;
		}
	}
	if (!uParam0->f_12)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_17, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_16) > iParam1))
		{
			uParam0->f_12 = 1;
		}
	}
	if (!uParam0->f_13)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_17, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_16) > iParam1))
		{
			uParam0->f_13 = 1;
		}
	}
	if (!uParam0->f_14)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_17, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_16) > iParam1))
		{
			uParam0->f_14 = 1;
		}
	}
	if (!uParam0->f_15)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_17, iParam1))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_16) > iParam1))
		{
			uParam0->f_15 = 1;
		}
	}
}

void func_413(var uParam0)//Position - 0x1005E1
{
	MISC::CLEAR_BIT(&(uParam0->f_558), 1);
	MISC::CLEAR_BIT(&(uParam0->f_558), 0);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
}

void func_414(var uParam0)//Position - 0x10060C
{
	MISC::SET_BIT(&(uParam0->f_558), 1);
	MISC::CLEAR_BIT(&(uParam0->f_558), 0);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
}

int func_415(var uParam0)//Position - 0x1013C5
{
	int iVar0;
	iVar0 = uParam0->f_521;
	switch (iVar0)
	{
		case 0:
			return joaat("v_lirg_shop_low");
			break;
		case 1:
			return joaat("v_lirg_shop_mid");
			break;
		case 2:
			return joaat("v_lirg_shop_high");
			break;
		default:
			return joaat("v_lirg_shop_low");
			break;
	}
	return joaat("v_lirg_shop_low");
}

int func_416(var uParam0)//Position - 0x1023C2
{
	if (uParam0->f_116.f_1 == -1)
	{
		return 0;
	}
	if (Global_4537616.f_253[uParam0->f_116.f_1] == 4)
	{
		return 0;
	}
	else if (uParam0->f_522 == 65 || uParam0->f_522 == 267)
	{
		return 1;
	}
	return 0;
}

int func_417(int iParam0, float fParam1, float fParam2)//Position - 0x102528
{
	float fVar0;
	float fVar1;
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 && ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 || ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_418(var uParam0)//Position - 0x1025C9
{
	if ((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_positive_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_positive_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_positive_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_positive_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_negative_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_negative_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_negative_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_negative_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_neutral_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_neutral_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_617.f_2, "clothingshirt", "try_shirt_neutral_c", 3))
	{
		return 0;
	}
	return 1;
}

int func_419(var uParam0)//Position - 0x102707
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if ((uParam0->f_116.f_1 == -1 || uParam0->f_184 != 1) || uParam0->f_522 == 1)
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_617.f_2) && !PED::IS_PED_INJURED(uParam0->f_617.f_2))
	{
		iVar0 = uParam0->f_617.f_2;
	}
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iVar0, 11);
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iVar0, 11, iVar1, iVar2);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BACK_CREW_LOGO"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BACK_LOGO"), 0))
	{
		return 1;
	}
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 10);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iVar0, 10);
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iVar0, 10, iVar1, iVar2);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BACK_LOGO"), 0))
	{
		return 1;
	}
	return 0;
}

int func_420(bool bParam0, var uParam1, bool bParam2)//Position - 0x102821
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (Global_4539961 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
		if (bParam0 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			return 1;
		}
		else
		{
			Global_4539961 = -1;
			return 0;
		}
	}
	if (((Global_4539961 > -1 || Global_4539961 == -3) || Global_4539961 == -2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}
	if (Global_4539961 == -1 && bParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4539961 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}
	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

int func_421(int iParam0)//Position - 0x102B23
{
	switch (iParam0)
	{
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 163:
		case 164:
		case 246:
		case 268:
			return 1;
			break;
	}
	return 0;
}

int func_422(int iParam0)//Position - 0x102B88
{
	switch (iParam0)
	{
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 155:
		case 179:
		case 185:
		case 226:
		case 236:
		case 254:
		case 271:
			return 1;
			break;
	}
	return 0;
}

void func_423(var uParam0, float fParam1, bool bParam2)//Position - 0x102C2F
{
	char* sVar0;
	if (MISC::ARE_STRINGS_EQUAL(uParam0->f_184.f_11, "clothingshirt"))
	{
		sVar0 = "Try_Shirt_Base";
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0->f_184.f_11, "clothingtrousers"))
	{
		sVar0 = "Try_Trousers_Base";
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0->f_184.f_11, "clothingtie"))
	{
		sVar0 = "Try_Tie_Base";
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0->f_184.f_11, "clothingshoes"))
	{
		sVar0 = "Try_Shoes_Base";
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0->f_184.f_11, "clothingspecs"))
	{
		sVar0 = "Try_Glasses_Base";
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0->f_184.f_11, "mp_clothing@female@shirt"))
	{
		sVar0 = "Try_Shirt_Base";
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0->f_184.f_11, "mp_clothing@female@trousers"))
	{
		sVar0 = "Try_Trousers_Base";
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0->f_184.f_11, "mp_clothing@female@clothingshoes"))
	{
		sVar0 = "Try_Shoes_Base";
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0->f_184.f_11, "mp_clothing@female@glasses"))
	{
		sVar0 = "Try_Glasses_Base";
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0->f_184.f_11, "anim@random@shop_clothes@watches"))
	{
		sVar0 = "BASE";
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_617.f_2))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_617.f_2))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_184.f_11))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_184.f_11))
					{
						PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_617.f_2, 0, uParam0->f_184.f_11, sVar0, fParam1, true);
						if (bParam2)
						{
							TASK::TASK_PLAY_ANIM(uParam0->f_617.f_2, uParam0->f_184.f_11, sVar0, fParam1, -4f, -1, 0, 0f, false, false, false);
						}
					}
				}
			}
		}
	}
}

void func_424(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x1030BA
{
	if (Global_78319)
	{
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(bParam0, bParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam2, true, bParam6);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam3, true, bParam7);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam4))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam4, true, bParam8);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam5, true, bParam9);
		}
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false);
	}
}

int func_425(int iParam0, int iParam1, int* iParam2)//Position - 0x104366
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	if (iParam0 != -1)
	{
		iVar0 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iParam0);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			FILES::GET_FORCED_COMPONENT(iParam0, iVar1, iParam2, &uVar2, &iVar3);
			if (iVar3 == iParam1)
			{
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

int func_426(int iParam0)//Position - 0x1043A9
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 123:
		case 126:
		case 128:
		case 156:
		case 190:
		case 207:
		case 217:
		case 218:
		case 224:
		case 239:
		case 255:
		case 240:
		case 257:
		case 266:
		case 267:
			return 1;
			break;
	}
	return 0;
}

bool func_427(var uParam0, int iParam1)//Position - 0x104480
{
	return BitTest(uParam0->f_379[(iParam1 / 32)], (iParam1 % 32));
}

bool func_428(int iParam0, int iParam1, char* sParam2)//Position - 0x106489
{
	StringCopy(sParam2, "", 16);
	switch (iParam0)
	{
		case 78:
			StringCopy(sParam2, "CSHOP_MASKT_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 89:
			StringCopy(sParam2, "CSHOP_EART_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 122:
			StringCopy(sParam2, "CSHOP_AWDT_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 153:
			StringCopy(sParam2, "CSHOP_FSTT_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 235:
			StringCopy(sParam2, "CSHOP_AWTT_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 238:
			StringCopy(sParam2, "CSHOP_AWOT_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 247:
			StringCopy(sParam2, "CSHOP_VWOT_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 242:
			StringCopy(sParam2, "CSHOP_H3OT_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 243:
			StringCopy(sParam2, "CSHOP_H4OT_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 258:
			StringCopy(sParam2, "CSHOP_TROT_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
}

int func_429(int iParam0)//Position - 0x1080C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (iVar1 < 3)
	{
		return BitTest(Global_262145.f_23076[iVar1], iVar2);
	}
	return 0;
}

int func_430(char* sParam0)//Position - 0x1080FA
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar1 = MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
	switch (iVar1)
	{
		case joaat("CLO_BB"):
		case joaat("TAT_BB"):
			return 0;
		case joaat("CLO_BU"):
		case joaat("TAT_BU"):
			return 1;
		case joaat("CLO_XM"):
		case joaat("CLO_X2"):
		case joaat("TAT_X2"):
			return 2;
		case joaat("CLO_VA"):
			return 3;
		case joaat("CLO_HI"):
			return 4;
		case joaat("CLO_HP"):
		case joaat("TAT_HP"):
		case joaat("BRD_HP"):
			return 5;
		case joaat("CLO_HS"):
			return 6;
		case joaat("CLO_IN"):
			return 7;
		case joaat("CLO_PI"):
			return 8;
		case joaat("CLO_LT"):
			return 9;
		case joaat("CLO_LX"):
		case joaat("TAT_LX"):
			if (((((iVar0 == joaat("CLO_LXM_DEC_30") || iVar0 == joaat("CLO_LXM_DEC_33")) || iVar0 == joaat("CLO_LXM_DEC_38")) || iVar0 == joaat("CLO_LXF_DEC_30")) || iVar0 == joaat("CLO_LXF_DEC_33")) || iVar0 == joaat("CLO_LXF_DEC_38"))
			{
				return 11;
			}
			return 10;
		case joaat("CLO_VE"):
			switch (iVar0)
			{
				case joaat("CLO_VEM_DEC_44"):
				case joaat("CLO_VEM_DEC_45"):
				case joaat("CLO_VEM_DEC_46"):
				case joaat("CLO_VEM_DEC_48"):
				case joaat("CLO_VEF_DEC_44"):
				case joaat("CLO_VEF_DEC_45"):
				case joaat("CLO_VEF_DEC_46"):
				case joaat("CLO_VEF_DEC_48"):
					return -1;
				default:
			}
			return 12;
		case joaat("CLO_L2"):
		case joaat("TAT_L2"):
			return 11;
		case joaat("CLO_S1"):
		case joaat("TAT_S1"):
			return 13;
		case joaat("CLO_HA"):
		case joaat("TAT_HA"):
			return 14;
		case joaat("CLO_S2"):
		case joaat("TAT_S2"):
			return 15;
		case joaat("CLO_AP"):
		case joaat("TAT_AP"):
			return 16;
		case joaat("CLO_X3"):
		case joaat("TAT_X3"):
			if (iVar0 == joaat("CLO_X3F_DEC_00") || iVar0 == joaat("CLO_X3M_DEC_00"))
			{
				return -1;
			}
			return 17;
		case joaat("CLO_X4"):
			return 18;
		case joaat("CLO_V2"):
			return 19;
		case joaat("CLO_EX"):
			return 20;
		case joaat("CLO_ST"):
		case joaat("TAT_ST"):
			return 21;
		case joaat("CLO_BI"):
		case joaat("TAT_BI"):
			return 22;
		case joaat("CLO_IE"):
		case joaat("TAT_IE"):
			return 23;
		case joaat("CLO_GR"):
		case joaat("TAT_GR"):
			return 25;
		case joaat("CLO_SM"):
		case joaat("TAT_SM"):
			return 26;
		case joaat("CLO_AR"):
		case joaat("TAT_AR"):
			return 26;
		case joaat("CLO_H2"):
		case joaat("TAT_H2"):
			return 27;
		case joaat("CLO_X1"):
		case joaat("TAT_X1"):
			return 28;
		case joaat("CLO_AW"):
		case joaat("TAT_AW"):
			return 30;
		case joaat("CLO_X5"):
		case joaat("TAT_X5"):
			return 31;
		case joaat("CLO_VW"):
		case joaat("TAT_VW"):
			return 32;
		case joaat("CLO_H3"):
		case joaat("TAT_H3"):
			return 33;
		default:
	}
	return -1;
}

int func_431(int iParam0, int iParam1, int iParam2, var uParam3, char* sParam4, var uParam5)//Position - 0x1083D1
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_262145.f_15130 /* Tunable: ALL_HEIST_GEAR_FOR_SALE */)
	{
		return 1;
	}
	if (BitTest(Global_262145.f_13986[(iParam2 / 32)], (iParam2 % 32)))
	{
		return 1;
	}
	iVar1 = MISC::GET_HASH_KEY(sParam4);
	if (iVar1 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_262145.f_13996)
		{
			if (iVar1 == Global_262145.f_13996[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_432(int iParam0)//Position - 0x108449
{
	var uVar0;
	var uVar1;
	if (__LIB_0__::func_30(iParam0, 1, &uVar1, &uVar0, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_433(int iParam0)//Position - 0x108B83
{
	if (iParam0 == 24)
	{
		return 10;
	}
	else if (iParam0 == 25)
	{
		return 28;
	}
	else if (iParam0 == 26)
	{
		return 27;
	}
	else if (iParam0 == 29)
	{
		return 29;
	}
	else if (iParam0 == 27)
	{
		return 30;
	}
	else if (iParam0 == 28)
	{
		return 35;
	}
	else if (iParam0 == 30)
	{
		return 6;
	}
	else if (iParam0 == 31)
	{
		return 5;
	}
	else if (iParam0 == 32)
	{
		return 31;
	}
	else if (iParam0 == 34)
	{
		return 33;
	}
	else if (iParam0 == 33)
	{
		return 23;
	}
	else if (iParam0 == 35)
	{
		return 8;
	}
	else if (iParam0 == 36)
	{
		return 9;
	}
	else if (iParam0 == 37)
	{
		return 12;
	}
	else if (iParam0 == 38)
	{
		return 13;
	}
	else if (iParam0 == 39)
	{
		return 14;
	}
	return 0;
}

int func_434(int iParam0)//Position - 0x109A28
{
	switch (iParam0)
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 101:
		case 103:
		case 122:
		case 129:
		case 136:
		case 138:
		case 158:
		case 153:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 175:
		case 181:
		case 182:
		case 183:
		case 184:
		case 187:
		case 189:
		case 192:
		case 193:
		case 194:
		case 195:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 210:
		case 213:
		case 215:
		case 220:
		case 222:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 235:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 241:
		case 162:
		case 256:
		case 259:
		case 260:
		case 262:
		case 272:
			return 1;
			break;
	}
	return 0;
}

bool func_435(int iParam0, int iParam1, char* sParam2)//Position - 0x10A375
{
	StringCopy(sParam2, "", 16);
	switch (iParam0)
	{
		case 78:
			StringCopy(sParam2, "CSHOP_MASK_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 89:
			StringCopy(sParam2, "CSHOP_EAR_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 122:
			StringCopy(sParam2, "CSHOP_AWD_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 153:
			StringCopy(sParam2, "CSHOP_FST_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 235:
			StringCopy(sParam2, "CSHOP_AWT_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 238:
			StringCopy(sParam2, "CSHOP_AWO_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 247:
			StringCopy(sParam2, "CSHOP_VWO_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 242:
			StringCopy(sParam2, "CSHOP_H3O_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 243:
			StringCopy(sParam2, "CSHOP_H4O_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
		case 258:
			StringCopy(sParam2, "CSHOP_TRO_", 16);
			StringIntConCat(sParam2, iParam1, 16);
			break;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
}

int func_436(int iParam0, char* sParam1, int iParam2)//Position - 0x10CC89
{
	if (((iParam0 >= 0 && iParam0 < 21) && Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2305[iParam0]) && iParam2 == iParam0 == 20)
	{
		*sParam1 = { Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2459[iParam0 /*8*/] };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_437(var uParam0, int iParam1, int iParam2)//Position - 0x11A368
{
	var uVar0;
	var uVar1;
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
	uVar0 = uParam0->f_126[iParam1];
	uVar1 = (*uParam0)[iParam1];
	uVar2 = uParam0->f_253[iParam1];
	uVar3 = Global_4536856[iParam1];
	uVar4 = Global_4537108[iParam1];
	uVar5 = Global_4537360[iParam1];
	uVar6 = Global_4537486[iParam1];
	uVar7 = Global_4536478[iParam1];
	uVar8 = Global_4536604[iParam1];
	uVar9 = Global_4536730[iParam1];
	uVar10 = Global_4537234[iParam1];
	uVar11 = Global_4536982[iParam1];
	uParam0->f_126[iParam1] = uParam0->f_126[iParam2];
	(*uParam0)[iParam1] = (*uParam0)[iParam2];
	uParam0->f_253[iParam1] = uParam0->f_253[iParam2];
	Global_4536856[iParam1] = Global_4536856[iParam2];
	Global_4537108[iParam1] = Global_4537108[iParam2];
	Global_4537360[iParam1] = Global_4537360[iParam2];
	Global_4537486[iParam1] = Global_4537486[iParam2];
	Global_4536478[iParam1] = Global_4536478[iParam2];
	Global_4536604[iParam1] = Global_4536604[iParam2];
	Global_4536730[iParam1] = Global_4536730[iParam2];
	Global_4537234[iParam1] = Global_4537234[iParam2];
	Global_4536982[iParam1] = Global_4536982[iParam2];
	uParam0->f_126[iParam2] = uVar0;
	(*uParam0)[iParam2] = uVar1;
	uParam0->f_253[iParam2] = uVar2;
	Global_4536856[iParam2] = uVar3;
	Global_4537108[iParam2] = uVar4;
	Global_4537360[iParam2] = uVar5;
	Global_4537486[iParam2] = uVar6;
	Global_4536478[iParam2] = uVar7;
	Global_4536604[iParam2] = uVar8;
	Global_4536730[iParam2] = uVar9;
	Global_4537234[iParam2] = uVar10;
	Global_4536982[iParam2] = uVar11;
}

char* func_438(char* sParam0)//Position - 0x11A634
{
	char* sVar0;
	sVar0 = sParam0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "clothingshirt") || MISC::ARE_STRINGS_EQUAL(sParam0, "mp_clothing@female@shirt"))
		{
			sVar0 = "mp_clothing@female@shirt";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "clothingtrousers") || MISC::ARE_STRINGS_EQUAL(sParam0, "mp_clothing@female@trousers"))
		{
			sVar0 = "mp_clothing@female@trousers";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "clothingshoes") || MISC::ARE_STRINGS_EQUAL(sParam0, "mp_clothing@female@shoes"))
		{
			sVar0 = "mp_clothing@female@shoes";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "clothingspecs") || MISC::ARE_STRINGS_EQUAL(sParam0, "mp_clothing@female@glasses"))
		{
			sVar0 = "mp_clothing@female@glasses";
		}
	}
	return sVar0;
}

int func_439(int iParam0)//Position - 0x11D6C3
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		case 1:
			return 14;
			break;
		case 2:
			return 18;
			break;
		case 3:
			return 28;
			break;
		case 4:
			return 29;
			break;
		case 5:
			return 21;
			break;
		case 6:
			return 51;
			break;
		case 7:
			return 55;
			break;
		case 8:
			return 56;
			break;
		case 9:
			return 57;
			break;
		default:
			break;
	}
	return -1;
}

bool func_440(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x121491
{
	*uParam3 = 0;
	switch (iParam2)
	{
		case joaat("MP_Award_M_Tshirt_000"):
		case joaat("MP_Award_M_Tshirt_001"):
		case joaat("MP_Award_M_Tshirt_002"):
		case joaat("MP_Award_M_Tshirt_003"):
		case joaat("MP_Award_F_Tshirt_000"):
		case joaat("MP_Award_F_Tshirt_001"):
		case joaat("MP_Award_F_Tshirt_002"):
		case joaat("MP_Award_F_Tshirt_003"):
		case joaat("MP_Award_M_Tshirt_004"):
		case joaat("MP_Award_M_Tshirt_005"):
		case joaat("MP_Award_M_Tshirt_006"):
		case joaat("MP_Award_M_Tshirt_007"):
		case joaat("MP_Award_M_Tshirt_008"):
		case joaat("MP_Award_M_Tshirt_009"):
		case joaat("MP_Award_M_Tshirt_010"):
		case joaat("MP_Award_M_Tshirt_011"):
		case joaat("MP_Award_M_Tshirt_012"):
		case joaat("MP_Award_M_Tshirt_013"):
		case joaat("MP_Award_F_Tshirt_004"):
		case joaat("MP_Award_F_Tshirt_005"):
		case joaat("MP_Award_F_Tshirt_006"):
		case joaat("MP_Award_F_Tshirt_007"):
		case joaat("MP_Award_F_Tshirt_008"):
		case joaat("MP_Award_F_Tshirt_009"):
		case joaat("MP_Award_F_Tshirt_010"):
		case joaat("MP_Award_F_Tshirt_011"):
		case joaat("MP_Award_F_Tshirt_012"):
		case joaat("MP_Award_F_Tshirt_013"):
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_000"):
		case joaat("FM_Hip_F_Retro_001"):
		case joaat("FM_Hip_F_Retro_002"):
		case joaat("FM_Hip_F_Retro_003"):
		case joaat("FM_Hip_F_Retro_004"):
		case joaat("FM_Hip_F_Retro_005"):
		case joaat("FM_Hip_F_Retro_006"):
		case joaat("FM_Hip_F_Retro_007"):
		case joaat("FM_Hip_F_Retro_008"):
		case joaat("FM_Hip_F_Retro_009"):
		case joaat("FM_Hip_F_Retro_010"):
		case joaat("FM_Hip_F_Retro_011"):
		case joaat("FM_Hip_F_Retro_012"):
		case joaat("FM_Hip_F_Retro_013"):
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
		case joaat("MP_Fli_M_Tshirt_000"):
		case joaat("MP_Fli_F_Tshirt_000"):
		case joaat("FM_Rstar_M_Tshirt_000"):
		case joaat("FM_Rstar_M_Tshirt_001"):
		case joaat("FM_Rstar_M_Tshirt_002"):
		case joaat("FM_Rstar_F_Tshirt_000"):
		case joaat("FM_Rstar_F_Tshirt_001"):
		case joaat("FM_Rstar_F_Tshirt_002"):
		case joaat("FM_LTS_M_Tshirt_000"):
		case joaat("FM_LTS_F_Tshirt_000"):
		case joaat("MP_FM_OGA_000_m"):
		case joaat("MP_FM_OGA_001_m"):
		case joaat("MP_FM_OGA_002_m"):
		case joaat("MP_FM_OGA_003_m"):
		case joaat("MP_FM_OGA_000_f"):
		case joaat("MP_FM_OGA_001_f"):
		case joaat("MP_FM_OGA_002_f"):
		case joaat("MP_FM_OGA_003_f"):
		case joaat("MP_Elite_M_Tshirt"):
		case joaat("MP_Elite_M_Tshirt_1"):
		case joaat("MP_Elite_F_Tshirt"):
		case joaat("MP_Elite_F_Tshirt_1"):
		case joaat("MP_FAKE_DIS_000_M"):
		case joaat("MP_FAKE_DIS_001_M"):
		case joaat("MP_FAKE_DS_000_M"):
		case joaat("MP_FAKE_ENEMA_000_M"):
		case joaat("MP_FAKE_LB_000_M"):
		case joaat("MP_FAKE_LC_000_M"):
		case joaat("MP_FAKE_SC_000_M"):
		case joaat("MP_FAKE_Vap_000_M"):
		case joaat("MP_FAKE_Per_000_M"):
		case joaat("MP_FAKE_SN_000_M"):
		case joaat("MP_FAKE_DIS_000_F"):
		case joaat("MP_FAKE_DIS_001_F"):
		case joaat("MP_FAKE_DS_000_F"):
		case joaat("MP_FAKE_ENEMA_000_F"):
		case joaat("MP_FAKE_LB_000_F"):
		case joaat("MP_FAKE_LC_000_F"):
		case joaat("MP_FAKE_SC_000_F"):
		case joaat("MP_FAKE_Vap_000_F"):
		case joaat("MP_FAKE_Per_000_F"):
		case joaat("MP_FAKE_SN_000_F"):
		case joaat("MP_FILM_000_M"):
		case joaat("MP_FILM_001_M"):
		case joaat("MP_FILM_002_M"):
		case joaat("MP_FILM_003_M"):
		case joaat("MP_FILM_004_M"):
		case joaat("MP_FILM_005_M"):
		case joaat("MP_FILM_006_M"):
		case joaat("MP_FILM_007_M"):
		case joaat("MP_FILM_008_M"):
		case joaat("MP_FILM_009_M"):
		case joaat("MP_FILM_000_F"):
		case joaat("MP_FILM_001_F"):
		case joaat("MP_FILM_002_F"):
		case joaat("MP_FILM_003_F"):
		case joaat("MP_FILM_004_F"):
		case joaat("MP_FILM_005_F"):
		case joaat("MP_FILM_006_F"):
		case joaat("MP_FILM_007_F"):
		case joaat("MP_FILM_008_F"):
		case joaat("MP_FILM_009_F"):
		case joaat("MP_Bennys_000_M"):
		case joaat("MP_Bennys_001_M"):
		case joaat("MP_Bennys_000_F"):
		case joaat("MP_Bennys_001_F"):
		case joaat("HW_Tee_000_M"):
		case joaat("HW_Tee_001_M"):
		case joaat("HW_Tee_002_M"):
		case joaat("HW_Tee_003_M"):
		case joaat("HW_Tee_004_M"):
		case joaat("HW_Tee_005_M"):
		case joaat("HW_Tee_006_M"):
		case joaat("HW_Tee_007_M"):
		case joaat("HW_Tee_008_M"):
		case joaat("HW_Tee_009_M"):
		case joaat("HW_Tee_010_M"):
		case joaat("HW_Tee_011_M"):
		case joaat("HW_Tee_012_M"):
		case joaat("HW_Tee_000_F"):
		case joaat("HW_Tee_001_F"):
		case joaat("HW_Tee_002_F"):
		case joaat("HW_Tee_003_F"):
		case joaat("HW_Tee_004_F"):
		case joaat("HW_Tee_005_F"):
		case joaat("HW_Tee_006_F"):
		case joaat("HW_Tee_007_F"):
		case joaat("HW_Tee_008_F"):
		case joaat("HW_Tee_009_F"):
		case joaat("HW_Tee_010_F"):
		case joaat("HW_Tee_011_F"):
		case joaat("HW_Tee_012_F"):
		case joaat("MP_IHeartLC_000_M"):
		case joaat("MP_IHeartLC_001_F"):
			*uParam3 = 122;
			break;
	}
	switch (iParam2)
	{
		case joaat("MP_LUXE_Per_001_M"):
		case joaat("MP_LUXE_SN_000_M"):
		case joaat("MP_LUXE_SN_004_M"):
		case joaat("MP_LUXE_SN_001_M"):
		case joaat("MP_LUXE_SN_002_M"):
		case joaat("MP_LUXE_DIX_000_M"):
		case joaat("MP_LUXE_DIX_001_M"):
		case joaat("MP_LUXE_DIX_002_M"):
		case joaat("MP_LUXE_VDG_000_M"):
		case joaat("MP_LUXE_VDG_001_M"):
		case joaat("MP_LUXE_VDG_002_M"):
		case joaat("MP_LUXE_VDG_004_M"):
		case joaat("MP_LUXE_VDG_005_M"):
		case joaat("MP_LUXE_VDG_006_M"):
		case joaat("MP_LUXE_ENEMA_000_M"):
		case joaat("MP_LUXE_SC_000_M"):
		case joaat("MP_LUXE_LC_000_M"):
		case joaat("MP_LUXE_LC_001_M"):
		case joaat("MP_LUXE_LC_002_M"):
		case joaat("MP_LUXE_LC_003_M"):
		case joaat("MP_LUXE_LC_006_M"):
		case joaat("MP_LUXE_LC_007_M"):
		case joaat("MP_LUXE_LC_008_M"):
		case joaat("MP_LUXE_LC_009_M"):
		case joaat("MP_LUXE_LC_010_M"):
		case joaat("MP_LUXE_LC_011_M"):
		case joaat("MP_LUXE_LC_012_M"):
		case joaat("MP_LUXE_LC_013_M"):
		case joaat("MP_LUXE_LC_014_M"):
		case joaat("MP_LUXE_LC_015_M"):
		case joaat("MP_LUXE_Per_001_F"):
		case joaat("MP_LUXE_SN_000_F"):
		case joaat("MP_LUXE_SN_002_F"):
		case joaat("MP_LUXE_SN_003_F"):
		case joaat("MP_LUXE_SN_007_F"):
		case joaat("MP_LUXE_SN_004_F"):
		case joaat("MP_LUXE_SN_001_F"):
		case joaat("MP_LUXE_DIX_000_F"):
		case joaat("MP_LUXE_DIX_001_F"):
		case joaat("MP_LUXE_DIX_002_F"):
		case joaat("MP_LUXE_VDG_000_F"):
		case joaat("MP_LUXE_VDG_001_F"):
		case joaat("MP_LUXE_VDG_002_F"):
		case joaat("MP_LUXE_VDG_004_F"):
		case joaat("MP_LUXE_VDG_005_F"):
		case joaat("MP_LUXE_VDG_006_F"):
		case joaat("MP_LUXE_ENEMA_000_F"):
		case joaat("MP_LUXE_SC_000_F"):
		case joaat("MP_LUXE_LC_000_F"):
		case joaat("MP_LUXE_LC_001_F"):
		case joaat("MP_LUXE_LC_002_F"):
		case joaat("MP_LUXE_LC_003_F"):
		case joaat("MP_LUXE_LC_006_F"):
		case joaat("MP_LUXE_LC_007_F"):
		case joaat("MP_LUXE_LC_008_F"):
		case joaat("MP_LUXE_LC_009_F"):
		case joaat("MP_LUXE_LC_010_F"):
		case joaat("MP_LUXE_LC_011_F"):
		case joaat("MP_LUXE_LC_012_F"):
		case joaat("MP_LUXE_LC_013_F"):
		case joaat("MP_LUXE_LC_014_F"):
		case joaat("MP_LUXE_LC_015_F"):
			*uParam3 = 169;
			break;
	}
	switch (iParam2)
	{
		case joaat("Blank_TuckedTShirt_0"):
		case joaat("Blank_TuckedTShirt_1"):
		case joaat("Blank_TuckedTShirt_2"):
		case joaat("MP_Trickster_000_F"):
		case joaat("MP_Trickster_001_F"):
		case joaat("MP_Trickster_002_F"):
		case joaat("MP_Trickster_003_F"):
		case joaat("MP_Trickster_004_F"):
		case joaat("MP_Trickster_005_F"):
		case joaat("MP_Trickster_006_F"):
		case joaat("MP_Trickster_007_F"):
		case joaat("MP_Trickster_010_F"):
			switch (iParam0)
			{
				case joaat("DLC_MP_LUXE_F_JBIB_4_16"):
				case joaat("DLC_MP_HEIST_F_JBIB_3_0"):
				case joaat("DLC_MP_HEIST_F_JBIB_3_1"):
					*uParam3 = 171;
					break;
				case joaat("DLC_MP_LOW_F_JBIB_0_0"):
				case joaat("DLC_MP_LOW_F_JBIB_0_1"):
				case joaat("DLC_MP_LOW_F_JBIB_0_2"):
					*uParam3 = 173;
					break;
			}
			break;
		case joaat("Blank_FSportsSweater_0"):
		case joaat("Blank_FSportsSweater_1"):
		case joaat("Blank_FSportsSweater_2"):
		case joaat("Blank_FSportsSweater_3"):
			*uParam3 = 170;
			break;
		case joaat("MP_Broker_000_F"):
		case joaat("MP_Broker_001_F"):
		case joaat("MP_Broker_002_F"):
		case joaat("MP_Broker_003_F"):
		case joaat("MP_Broker_004_F"):
		case joaat("MP_Broker_005_F"):
		case joaat("MP_Magnetics_000_F"):
		case joaat("MP_Magnetics_001_F"):
		case joaat("MP_Magnetics_002_F"):
		case joaat("MP_Magnetics_003_F"):
		case joaat("MP_Magnetics_004_F"):
		case joaat("MP_Magnetics_005_F"):
			*uParam3 = 172;
			break;
	}
	switch (iParam2)
	{
		case joaat("Blank_SportsTShirt_0"):
		case joaat("Blank_SportsTShirt_1"):
		case joaat("Blank_SportsTShirt_2"):
			*uParam3 = 11;
			break;
		case joaat("MP_Trickster_000_M"):
		case joaat("MP_Trickster_001_M"):
		case joaat("MP_Trickster_002_M"):
		case joaat("MP_Trickster_003_M"):
		case joaat("MP_Trickster_004_M"):
		case joaat("MP_Trickster_005_M"):
		case joaat("MP_Trickster_006_M"):
		case joaat("MP_Trickster_007_M"):
		case joaat("MP_Trickster_010_M"):
			*uParam3 = 171;
			break;
		case joaat("Blank_Sports_0"):
		case joaat("Blank_Sports_1"):
		case joaat("Blank_Sports_2"):
		case joaat("MP_Trickster_008_M"):
		case joaat("MP_Trickster_009_M"):
			*uParam3 = 17;
			break;
		case joaat("Blank_SportsSweater_0"):
		case joaat("Blank_SportsSweater_1"):
		case joaat("Blank_SportsSweater_2"):
		case joaat("Blank_SportsSweater_3"):
			*uParam3 = 170;
			break;
		case joaat("MP_Broker_000_M"):
		case joaat("MP_Broker_001_M"):
		case joaat("MP_Broker_002_M"):
		case joaat("MP_Broker_003_M"):
		case joaat("MP_Broker_004_M"):
		case joaat("MP_Broker_005_M"):
		case joaat("MP_Magnetics_000_M"):
		case joaat("MP_Magnetics_001_M"):
		case joaat("MP_Magnetics_002_M"):
		case joaat("MP_Magnetics_003_M"):
		case joaat("MP_Magnetics_004_M"):
		case joaat("MP_Magnetics_005_M"):
			*uParam3 = 172;
			break;
	}
	switch (iParam2)
	{
		case joaat("MP_Chianski_000_M"):
		case joaat("MP_Chianski_001_M"):
		case joaat("MP_Chianski_002_M"):
		case joaat("MP_Chianski_003_M"):
		case joaat("MP_Chianski_004_M"):
		case joaat("MP_Chianski_005_M"):
		case joaat("MP_Hntr_001_M"):
		case joaat("MP_Hntr_010_M"):
		case joaat("MP_Chianski_006_M"):
		case joaat("MP_Hntr_005_M"):
		case joaat("MP_Hntr_011_M"):
		case joaat("MP_Dense_006_M"):
		case joaat("MP_Dense_000_M"):
		case joaat("MP_Dense_001_M"):
		case joaat("MP_Dense_002_M"):
		case joaat("MP_Dense_003_M"):
		case joaat("MP_Dense_004_M"):
		case joaat("MP_Dense_005_M"):
		case joaat("MP_Dense_007_M"):
			*uParam3 = 181;
			break;
		case joaat("MP_Hntr_000_M"):
		case joaat("MP_Hntr_002_M"):
		case joaat("MP_Hntr_003_M"):
		case joaat("MP_Hntr_004_M"):
		case joaat("MP_Hntr_006_M"):
		case joaat("MP_Hntr_007_M"):
		case joaat("MP_Hntr_008_M"):
		case joaat("MP_Hntr_009_M"):
		case joaat("MP_Hntr_012_M"):
			*uParam3 = 184;
			break;
		case joaat("Blank_Black_ValentinesTee"):
		case joaat("Blank_White_ValentinesTee"):
		case joaat("Blank_Red_ValentinesTee"):
			*uParam3 = 11;
			break;
	}
	switch (iParam2)
	{
		case joaat("Blank_RolledTShirt_0"):
		case joaat("Blank_RolledTShirt_1"):
		case joaat("Blank_RolledTShirt_2"):
			switch (iParam0)
			{
				case joaat("DLC_MP_LOW2_F_JBIB_1_0"):
				case joaat("DLC_MP_LOW2_F_JBIB_1_1"):
				case joaat("DLC_MP_LOW2_F_JBIB_1_2"):
					*uParam3 = 11;
					break;
				case joaat("DLC_MP_LOW2_F_JBIB_0_0"):
				case joaat("DLC_MP_LOW2_F_JBIB_0_1"):
				case joaat("DLC_MP_LOW2_F_JBIB_0_2"):
					*uParam3 = 173;
					break;
			}
			break;
		case joaat("Blank_Sports_F_0"):
		case joaat("Blank_Sports_F_1"):
		case joaat("Blank_Sports_F_2"):
			*uParam3 = 17;
			break;
		case joaat("MP_Dense_007_F"):
		case joaat("MP_Chianski_000_F"):
		case joaat("MP_Chianski_001_F"):
		case joaat("MP_Chianski_002_F"):
		case joaat("MP_Chianski_003_F"):
		case joaat("MP_Chianski_004_F"):
		case joaat("MP_Chianski_005_F"):
		case joaat("MP_Hntr_001_F"):
		case joaat("MP_Hntr_010_F"):
		case joaat("MP_Dense_000_F"):
		case joaat("MP_Dense_001_F"):
		case joaat("MP_Dense_002_F"):
		case joaat("MP_Dense_003_F"):
		case joaat("MP_Dense_004_F"):
		case joaat("MP_Dense_005_F"):
		case joaat("MP_Hntr_005_F"):
		case joaat("MP_Hntr_011_F"):
		case joaat("MP_Dense_006_F"):
		case joaat("MP_Chianski_006_F"):
			*uParam3 = 181;
			break;
		case joaat("MP_Hntr_000_F"):
		case joaat("MP_Hntr_002_F"):
		case joaat("MP_Hntr_003_F"):
		case joaat("MP_Hntr_004_F"):
		case joaat("MP_Hntr_008_F"):
		case joaat("MP_Hntr_009_F"):
		case joaat("MP_Hntr_012_F"):
		case joaat("MP_Hntr_006_F"):
		case joaat("MP_Hntr_007_F"):
			*uParam3 = 184;
			break;
	}
	switch (iParam2)
	{
		case joaat("MP_Securoserv_000_F"):
		case joaat("MP_Securoserv_000_Fb"):
			*uParam3 = 189;
			break;
		case joaat("MP_exec_prizes_000_F"):
		case joaat("MP_exec_prizes_001_F"):
		case joaat("MP_exec_prizes_002_F"):
		case joaat("MP_exec_prizes_003_F"):
		case joaat("MP_exec_prizes_004_F"):
		case joaat("MP_exec_prizes_005_F"):
		case joaat("MP_exec_prizes_006_F"):
		case joaat("MP_exec_prizes_007_F"):
		case joaat("MP_exec_prizes_008_F"):
		case joaat("MP_exec_prizes_009_F"):
		case joaat("MP_exec_prizes_010_F"):
		case joaat("MP_exec_prizes_011_F"):
		case joaat("MP_exec_prizes_012_F"):
		case joaat("MP_exec_prizes_013_F"):
		case joaat("MP_exec_prizes_014_F"):
		case joaat("MP_exec_prizes_015_F"):
			*uParam3 = 122;
			break;
	}
	switch (iParam2)
	{
		case joaat("MP_Securoserv_000_M"):
		case joaat("MP_Securoserv_000_Mb"):
			*uParam3 = 189;
			break;
		case joaat("MP_exec_prizes_000_M"):
		case joaat("MP_exec_prizes_001_M"):
		case joaat("MP_exec_prizes_002_M"):
		case joaat("MP_exec_prizes_003_M"):
		case joaat("MP_exec_prizes_004_M"):
		case joaat("MP_exec_prizes_005_M"):
		case joaat("MP_exec_prizes_006_M"):
		case joaat("MP_exec_prizes_007_M"):
		case joaat("MP_exec_prizes_008_M"):
		case joaat("MP_exec_prizes_009_M"):
		case joaat("MP_exec_prizes_010_M"):
		case joaat("MP_exec_prizes_011_M"):
		case joaat("MP_exec_prizes_012_M"):
		case joaat("MP_exec_prizes_013_M"):
		case joaat("MP_exec_prizes_014_M"):
		case joaat("MP_exec_prizes_015_M"):
			*uParam3 = 122;
			break;
	}
	switch (iParam1)
	{
		case joaat("mpBiker_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_001_M"):
					*uParam3 = 122;
					break;
				case joaat("MP_Biker_Tee_000_M"):
				case joaat("MP_Biker_Tee_001_M"):
				case joaat("MP_Biker_Tee_002_M"):
				case joaat("MP_Biker_Tee_003_M"):
				case joaat("MP_Biker_Tee_004_M"):
				case joaat("MP_Biker_Tee_005_M"):
				case joaat("MP_Biker_Tee_006_M"):
				case joaat("MP_Biker_Tee_007_M"):
				case joaat("MP_Biker_Tee_008_M"):
				case joaat("MP_Biker_Tee_009_M"):
				case joaat("MP_Biker_Tee_010_M"):
				case joaat("MP_Biker_Tee_011_M"):
				case joaat("MP_Biker_Tee_012_M"):
				case joaat("MP_Biker_Tee_013_M"):
				case joaat("MP_Biker_Tee_014_M"):
				case joaat("MP_Biker_Tee_015_M"):
				case joaat("MP_Biker_Tee_016_M"):
				case joaat("MP_Biker_Tee_017_M"):
				case joaat("MP_Biker_Tee_018_M"):
				case joaat("MP_Biker_Tee_019_M"):
				case joaat("MP_Biker_Tee_020_M"):
				case joaat("MP_Biker_Tee_021_M"):
				case joaat("MP_Biker_Tee_026_M"):
				case joaat("MP_Biker_Tee_027_M"):
				case joaat("MP_Biker_Tee_028_M"):
				case joaat("MP_Biker_Tee_029_M"):
				case joaat("MP_Biker_Tee_030_M"):
				case joaat("MP_Biker_Tee_031_M"):
				case joaat("MP_Biker_Tee_032_M"):
				case joaat("MP_Biker_Tee_033_M"):
				case joaat("MP_Biker_Tee_034_M"):
				case joaat("MP_Biker_Tee_035_M"):
				case joaat("MP_Biker_Tee_036_M"):
				case joaat("MP_Biker_Tee_037_M"):
				case joaat("MP_Biker_Tee_038_M"):
				case joaat("MP_Biker_Tee_039_M"):
				case joaat("MP_Biker_Tee_040_M"):
				case joaat("MP_Biker_Tee_041_M"):
				case joaat("MP_Biker_Tee_042_M"):
				case joaat("MP_Biker_Tee_043_M"):
				case joaat("MP_Biker_Tee_044_M"):
				case joaat("MP_Biker_Tee_045_M"):
				case joaat("MP_Biker_Tee_046_M"):
					*uParam3 = 205;
					break;
			}
			switch (iParam2)
			{
				case joaat("MP_Biker_Tee_022_F"):
				case joaat("MP_Biker_Tee_023_F"):
				case joaat("MP_Biker_Tee_024_F"):
				case joaat("MP_Biker_Tee_025_F"):
				case joaat("MP_Biker_Tee_047_F"):
				case joaat("MP_Biker_Tee_048_F"):
				case joaat("MP_Biker_Tee_049_F"):
				case joaat("MP_Biker_Tee_050_F"):
				case joaat("MP_Biker_Tee_051_F"):
				case joaat("MP_Biker_Tee_052_F"):
				case joaat("MP_Biker_Tee_053_F"):
				case joaat("MP_Biker_Tee_054_F"):
				case joaat("MP_Biker_Tee_055_F"):
				case joaat("MP_Biker_Award_000_F"):
				case joaat("MP_Biker_Award_001_F"):
					*uParam3 = 122;
					break;
				case joaat("MP_Biker_Tee_000_F"):
				case joaat("MP_Biker_Tee_001_F"):
				case joaat("MP_Biker_Tee_002_F"):
				case joaat("MP_Biker_Tee_003_F"):
				case joaat("MP_Biker_Tee_004_F"):
				case joaat("MP_Biker_Tee_005_F"):
				case joaat("MP_Biker_Tee_006_F"):
				case joaat("MP_Biker_Tee_007_F"):
				case joaat("MP_Biker_Tee_008_F"):
				case joaat("MP_Biker_Tee_009_F"):
				case joaat("MP_Biker_Tee_010_F"):
				case joaat("MP_Biker_Tee_011_F"):
				case joaat("MP_Biker_Tee_012_F"):
				case joaat("MP_Biker_Tee_013_F"):
				case joaat("MP_Biker_Tee_014_F"):
				case joaat("MP_Biker_Tee_015_F"):
				case joaat("MP_Biker_Tee_016_F"):
				case joaat("MP_Biker_Tee_017_F"):
				case joaat("MP_Biker_Tee_018_F"):
				case joaat("MP_Biker_Tee_019_F"):
				case joaat("MP_Biker_Tee_020_F"):
				case joaat("MP_Biker_Tee_021_F"):
				case joaat("MP_Biker_Tee_026_F"):
				case joaat("MP_Biker_Tee_027_F"):
				case joaat("MP_Biker_Tee_028_F"):
				case joaat("MP_Biker_Tee_029_F"):
				case joaat("MP_Biker_Tee_030_F"):
				case joaat("MP_Biker_Tee_031_F"):
				case joaat("MP_Biker_Tee_032_F"):
				case joaat("MP_Biker_Tee_033_F"):
				case joaat("MP_Biker_Tee_034_F"):
				case joaat("MP_Biker_Tee_035_F"):
				case joaat("MP_Biker_Tee_036_F"):
				case joaat("MP_Biker_Tee_037_F"):
				case joaat("MP_Biker_Tee_038_F"):
				case joaat("MP_Biker_Tee_039_F"):
				case joaat("MP_Biker_Tee_040_F"):
				case joaat("MP_Biker_Tee_041_F"):
				case joaat("MP_Biker_Tee_042_F"):
				case joaat("MP_Biker_Tee_043_F"):
				case joaat("MP_Biker_Tee_044_F"):
				case joaat("MP_Biker_Tee_045_F"):
				case joaat("MP_Biker_Tee_046_F"):
					*uParam3 = 205;
					break;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("Blank_Hoody_M_0"):
		case joaat("Blank_Hoody_M_1"):
		case joaat("Blank_Hoody_F_0"):
		case joaat("Blank_Hoody_F_1"):
			*uParam3 = 13;
			break;
	}
	switch (iParam1)
	{
		case joaat("mpGunrunning_overlays"):
			switch (iParam2)
			{
				case joaat("Blank_GunrunTShirt_1_M"):
				case joaat("Blank_GunrunTShirt_2_M"):
					*uParam3 = 213;
					break;
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_024_M"):
					*uParam3 = 122;
					break;
			}
			switch (iParam2)
			{
				case joaat("Blank_GunrunTShirt_1"):
				case joaat("Blank_GunrunTShirt_2"):
					switch (iParam0)
					{
						case joaat("DLC_MP_GR_F_JBIB_14_18"):
						case joaat("DLC_MP_GR_F_JBIB_14_19"):
							*uParam3 = 173;
							break;
						default:
							*uParam3 = 213;
							break;
					}
					break;
				case joaat("Blank_GunrunRolledTShirt_1"):
				case joaat("Blank_GunrunRolledTShirt_2"):
					switch (iParam0)
					{
						case joaat("DLC_MP_GR_F_JBIB_16_18"):
						case joaat("DLC_MP_GR_F_JBIB_16_19"):
							*uParam3 = 173;
							break;
						default:
							*uParam3 = 11;
							break;
					}
					break;
				case joaat("MP_Gunrunning_Award_000_F"):
				case joaat("MP_Gunrunning_Award_001_F"):
				case joaat("MP_Gunrunning_Award_002_F"):
				case joaat("MP_Gunrunning_Award_003_F"):
				case joaat("MP_Gunrunning_Award_004_F"):
				case joaat("MP_Gunrunning_Award_005_F"):
				case joaat("MP_Gunrunning_Award_006_F"):
				case joaat("MP_Gunrunning_Award_007_F"):
				case joaat("MP_Gunrunning_Award_008_F"):
				case joaat("MP_Gunrunning_Award_009_F"):
				case joaat("MP_Gunrunning_Award_010_F"):
				case joaat("MP_Gunrunning_Award_011_F"):
				case joaat("MP_Gunrunning_Award_012_F"):
				case joaat("MP_Gunrunning_Award_013_F"):
				case joaat("MP_Gunrunning_Award_014_F"):
				case joaat("MP_Gunrunning_Award_015_F"):
				case joaat("MP_Gunrunning_Award_016_F"):
				case joaat("MP_Gunrunning_Award_017_F"):
				case joaat("MP_Gunrunning_Award_018_F"):
				case joaat("MP_Gunrunning_Award_025_F"):
				case joaat("MP_Gunrunning_Award_020_F"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
				case joaat("MP_Gunrunning_Award_021_F"):
				case joaat("MP_Gunrunning_Award_026_F"):
				case joaat("MP_Gunrunning_Award_023_F"):
				case joaat("MP_Gunrunning_Award_024_F"):
					*uParam3 = 122;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpSmuggler_overlays"):
			switch (iParam2)
			{
				case joaat("M_TankTop_Smug_5_3_a"):
				case joaat("M_TankTop_Smug_5_17_a"):
				case joaat("M_TankTop_Smug_5_10_a"):
				case joaat("M_TankTop_Smug_5_11_a"):
				case joaat("M_TankTop_Smug_5_12_a"):
				case joaat("M_TankTop_Smug_5_13_a"):
				case joaat("M_TankTop_Smug_5_20_a"):
				case joaat("M_TankTop_Smug_5_21_a"):
				case joaat("M_TankTop_Smug_5_23_a"):
				case joaat("M_TankTop_Smug_5_22_a"):
				case joaat("M_TankTop_Smug_5_5_a"):
				case joaat("M_TankTop_Smug_5_18_a"):
				case joaat("M_TankTop_Smug_5_0_a"):
				case joaat("M_TankTop_Smug_5_3_b"):
				case joaat("M_TankTop_Smug_5_25_a"):
				case joaat("M_TankTop_Smug_5_7_a"):
				case joaat("M_TankTop_Smug_5_4_a"):
				case joaat("M_TankTop_Smug_5_1_a"):
				case joaat("M_TankTop_Smug_5_9_a"):
					*uParam3 = 14;
					break;
				case joaat("Blank_Black_SmugglerRolled"):
				case joaat("Blank_White_SmugglerRolled"):
				case joaat("Blank_Red_SmugglerRolled"):
				case joaat("Blank_Moss_SmugglerRolled"):
				case joaat("Blank_Sand_SmugglerRolled"):
					*uParam3 = 220;
					break;
			}
			switch (iParam2)
			{
				case joaat("F_TankTop_Smug_5_3_a"):
				case joaat("F_TankTop_Smug_5_17_a"):
				case joaat("F_TankTop_Smug_5_10_a"):
				case joaat("F_TankTop_Smug_5_11_a"):
				case joaat("F_TankTop_Smug_5_12_a"):
				case joaat("F_TankTop_Smug_5_13_a"):
				case joaat("F_TankTop_Smug_5_20_a"):
				case joaat("F_TankTop_Smug_5_21_a"):
				case joaat("F_TankTop_Smug_5_23_a"):
				case joaat("F_TankTop_Smug_5_22_a"):
				case joaat("F_TankTop_Smug_5_5_a"):
				case joaat("F_TankTop_Smug_5_18_a"):
				case joaat("F_TankTop_Smug_5_0_a"):
				case joaat("F_TankTop_Smug_5_3_b"):
				case joaat("F_TankTop_Smug_5_25_a"):
				case joaat("F_TankTop_Smug_5_7_a"):
				case joaat("F_TankTop_Smug_5_4_a"):
				case joaat("F_TankTop_Smug_5_1_a"):
				case joaat("F_TankTop_Smug_5_9_a"):
					*uParam3 = 14;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpSmuggler_overlays"):
			switch (iParam2)
			{
				case joaat("M_TankTop_Smug_5_3_a"):
				case joaat("M_TankTop_Smug_5_17_a"):
				case joaat("M_TankTop_Smug_5_10_a"):
				case joaat("M_TankTop_Smug_5_11_a"):
				case joaat("M_TankTop_Smug_5_12_a"):
				case joaat("M_TankTop_Smug_5_13_a"):
				case joaat("M_TankTop_Smug_5_20_a"):
				case joaat("M_TankTop_Smug_5_21_a"):
				case joaat("M_TankTop_Smug_5_23_a"):
				case joaat("M_TankTop_Smug_5_22_a"):
				case joaat("M_TankTop_Smug_5_5_a"):
				case joaat("M_TankTop_Smug_5_18_a"):
				case joaat("M_TankTop_Smug_5_0_a"):
				case joaat("M_TankTop_Smug_5_3_b"):
				case joaat("M_TankTop_Smug_5_25_a"):
				case joaat("M_TankTop_Smug_5_7_a"):
				case joaat("M_TankTop_Smug_5_4_a"):
				case joaat("M_TankTop_Smug_5_1_a"):
				case joaat("M_TankTop_Smug_5_9_a"):
					*uParam3 = 14;
					break;
				case joaat("Blank_Black_SmugglerRolled"):
				case joaat("Blank_White_SmugglerRolled"):
				case joaat("Blank_Red_SmugglerRolled"):
				case joaat("Blank_Moss_SmugglerRolled"):
				case joaat("Blank_Sand_SmugglerRolled"):
					*uParam3 = 220;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpBattle_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_062_M"):
					*uParam3 = 122;
					break;
			}
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_F"):
				case joaat("MP_Battle_Clothing_002_F"):
				case joaat("MP_Battle_Clothing_003_F"):
				case joaat("MP_Battle_Clothing_004_F"):
				case joaat("MP_Battle_Clothing_005_F"):
				case joaat("MP_Battle_Clothing_006_F"):
				case joaat("MP_Battle_Clothing_007_F"):
				case joaat("MP_Battle_Clothing_008_F"):
				case joaat("MP_Battle_Clothing_009_F"):
				case joaat("MP_Battle_Clothing_010_F"):
				case joaat("MP_Battle_Clothing_011_F"):
				case joaat("MP_Battle_Clothing_012_F"):
				case joaat("MP_Battle_Clothing_013_F"):
				case joaat("MP_Battle_Clothing_014_F"):
				case joaat("MP_Battle_Clothing_015_F"):
				case joaat("MP_Battle_Clothing_016_F"):
				case joaat("MP_Battle_Clothing_017_F"):
				case joaat("MP_Battle_Clothing_018_F"):
				case joaat("MP_Battle_Clothing_019_F"):
				case joaat("MP_Battle_Clothing_020_F"):
				case joaat("MP_Battle_Clothing_021_F"):
				case joaat("MP_Battle_Clothing_022_F"):
				case joaat("MP_Battle_Clothing_023_F"):
				case joaat("MP_Battle_Clothing_024_F"):
				case joaat("MP_Battle_Clothing_025_F"):
				case joaat("MP_Battle_Clothing_026_F"):
				case joaat("MP_Battle_Clothing_027_F"):
				case joaat("MP_Battle_Clothing_028_F"):
				case joaat("MP_Battle_Clothing_029_F"):
				case joaat("MP_Battle_Clothing_030_F"):
				case joaat("MP_Battle_Clothing_031_F"):
				case joaat("MP_Battle_Clothing_032_F"):
				case joaat("MP_Battle_Clothing_033_F"):
				case joaat("MP_Battle_Clothing_034_F"):
				case joaat("MP_Battle_Clothing_035_F"):
				case joaat("MP_Battle_Clothing_036_F"):
				case joaat("MP_Battle_Clothing_037_F"):
				case joaat("MP_Battle_Clothing_038_F"):
				case joaat("MP_Battle_Clothing_039_F"):
				case joaat("MP_Battle_Clothing_040_F"):
				case joaat("MP_Battle_Clothing_041_F"):
				case joaat("MP_Battle_Clothing_042_F"):
				case joaat("MP_Battle_Clothing_043_F"):
				case joaat("MP_Battle_Clothing_044_F"):
				case joaat("MP_Battle_Clothing_045_F"):
				case joaat("MP_Battle_Clothing_046_F"):
				case joaat("MP_Battle_Clothing_047_F"):
				case joaat("MP_Battle_Clothing_048_F"):
				case joaat("MP_Battle_Clothing_049_F"):
				case joaat("MP_Battle_Clothing_050_F"):
				case joaat("MP_Battle_Clothing_051_F"):
				case joaat("MP_Battle_Clothing_052_F"):
				case joaat("MP_Battle_Clothing_053_F"):
				case joaat("MP_Battle_Clothing_054_F"):
				case joaat("MP_Battle_Clothing_055_F"):
				case joaat("MP_Battle_Clothing_056_F"):
				case joaat("MP_Battle_Clothing_057_F"):
				case joaat("MP_Battle_Clothing_058_F"):
				case joaat("MP_Battle_Clothing_059_F"):
				case joaat("MP_Battle_Clothing_060_F"):
				case joaat("MP_Battle_Clothing_061_F"):
				case joaat("MP_Battle_Clothing_062_F"):
					*uParam3 = 122;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpChristmas2018_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_067_M"):
					*uParam3 = 122;
					break;
			}
			switch (iParam2)
			{
				case joaat("MP_Christmas2018_Tee_000_F"):
				case joaat("MP_Christmas2018_Tee_001_F"):
				case joaat("MP_Christmas2018_Tee_002_F"):
				case joaat("MP_Christmas2018_Tee_003_F"):
				case joaat("MP_Christmas2018_Tee_004_F"):
				case joaat("MP_Christmas2018_Tee_005_F"):
				case joaat("MP_Christmas2018_Tee_006_F"):
				case joaat("MP_Christmas2018_Tee_007_F"):
				case joaat("MP_Christmas2018_Tee_008_F"):
				case joaat("MP_Christmas2018_Tee_009_F"):
				case joaat("MP_Christmas2018_Tee_010_F"):
				case joaat("MP_Christmas2018_Tee_011_F"):
				case joaat("MP_Christmas2018_Tee_012_F"):
				case joaat("MP_Christmas2018_Tee_013_F"):
				case joaat("MP_Christmas2018_Tee_014_F"):
				case joaat("MP_Christmas2018_Tee_015_F"):
				case joaat("MP_Christmas2018_Tee_016_F"):
				case joaat("MP_Christmas2018_Tee_017_F"):
				case joaat("MP_Christmas2018_Tee_018_F"):
				case joaat("MP_Christmas2018_Tee_019_F"):
				case joaat("MP_Christmas2018_Tee_020_F"):
				case joaat("MP_Christmas2018_Tee_021_F"):
				case joaat("MP_Christmas2018_Tee_022_F"):
				case joaat("MP_Christmas2018_Tee_023_F"):
				case joaat("MP_Christmas2018_Tee_024_F"):
				case joaat("MP_Christmas2018_Tee_025_F"):
				case joaat("MP_Christmas2018_Tee_026_F"):
				case joaat("MP_Christmas2018_Tee_027_F"):
				case joaat("MP_Christmas2018_Tee_028_F"):
				case joaat("MP_Christmas2018_Tee_029_F"):
				case joaat("MP_Christmas2018_Tee_030_F"):
				case joaat("MP_Christmas2018_Tee_031_F"):
				case joaat("MP_Christmas2018_Tee_032_F"):
				case joaat("MP_Christmas2018_Tee_033_F"):
				case joaat("MP_Christmas2018_Tee_034_F"):
				case joaat("MP_Christmas2018_Tee_035_F"):
				case joaat("MP_Christmas2018_Tee_036_F"):
				case joaat("MP_Christmas2018_Tee_037_F"):
				case joaat("MP_Christmas2018_Tee_038_F"):
				case joaat("MP_Christmas2018_Tee_039_F"):
				case joaat("MP_Christmas2018_Tee_040_F"):
				case joaat("MP_Christmas2018_Tee_041_F"):
				case joaat("MP_Christmas2018_Tee_042_F"):
				case joaat("MP_Christmas2018_Tee_043_F"):
				case joaat("MP_Christmas2018_Tee_044_F"):
				case joaat("MP_Christmas2018_Tee_045_F"):
				case joaat("MP_Christmas2018_Tee_046_F"):
				case joaat("MP_Christmas2018_Tee_047_F"):
				case joaat("MP_Christmas2018_Tee_048_F"):
				case joaat("MP_Christmas2018_Tee_049_F"):
				case joaat("MP_Christmas2018_Tee_050_F"):
				case joaat("MP_Christmas2018_Tee_051_F"):
				case joaat("MP_Christmas2018_Tee_052_F"):
				case joaat("MP_Christmas2018_Tee_053_F"):
				case joaat("MP_Christmas2018_Tee_054_F"):
				case joaat("MP_Christmas2018_Tee_055_F"):
				case joaat("MP_Christmas2018_Tee_056_F"):
				case joaat("MP_Christmas2018_Tee_057_F"):
				case joaat("MP_Christmas2018_Tee_058_F"):
				case joaat("MP_Christmas2018_Tee_059_F"):
				case joaat("MP_Christmas2018_Tee_060_F"):
				case joaat("MP_Christmas2018_Tee_061_F"):
				case joaat("MP_Christmas2018_Tee_062_F"):
				case joaat("MP_Christmas2018_Tee_063_F"):
				case joaat("MP_Christmas2018_Tee_064_F"):
				case joaat("MP_Christmas2018_Tee_065_F"):
				case joaat("MP_Christmas2018_Tee_066_F"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					*uParam3 = 122;
					break;
			}
			switch (iParam2)
			{
				case joaat("MP_Christmas2018_Tee_068_M"):
				case joaat("MP_Christmas2018_Tee_069_M"):
				case joaat("MP_Christmas2018_Tee_070_M"):
				case joaat("MP_Christmas2018_Tee_071_M"):
				case joaat("MP_Christmas2018_Tee_072_M"):
				case joaat("MP_Christmas2018_Tee_073_M"):
				case joaat("MP_Christmas2018_Tee_074_M"):
				case joaat("MP_Christmas2018_Tee_075_M"):
				case joaat("MP_Christmas2018_Tee_076_M"):
				case joaat("MP_Christmas2018_Tee_077_M"):
				case joaat("MP_Christmas2018_Tee_078_M"):
				case joaat("MP_Christmas2018_Tee_079_M"):
				case joaat("MP_Christmas2018_Tee_080_M"):
				case joaat("MP_Christmas2018_Tee_081_M"):
				case joaat("MP_Christmas2018_Tee_082_M"):
				case joaat("MP_Christmas2018_Tee_083_M"):
				case joaat("MP_Christmas2018_Tee_084_M"):
				case joaat("MP_Christmas2018_Tee_085_M"):
				case joaat("MP_Christmas2018_Tee_086_M"):
				case joaat("MP_Christmas2018_Tee_087_M"):
				case joaat("MP_Christmas2018_Tee_088_M"):
				case joaat("MP_Christmas2018_Tee_089_M"):
				case joaat("MP_Christmas2018_Tee_090_M"):
				case joaat("MP_Christmas2018_Tee_091_M"):
				case joaat("MP_Christmas2018_Tee_092_M"):
				case joaat("MP_Christmas2018_Tee_093_M"):
				case joaat("MP_Christmas2018_Tee_094_M"):
				case joaat("MP_Christmas2018_Tee_095_M"):
				case joaat("MP_Christmas2018_Tee_096_M"):
				case joaat("MP_Christmas2018_Tee_097_M"):
				case joaat("MP_Christmas2018_Tee_098_M"):
				case joaat("MP_Christmas2018_Tee_099_M"):
				case joaat("MP_Christmas2018_Tee_100_M"):
				case joaat("MP_Christmas2018_Tee_101_M"):
				case joaat("MP_Christmas2018_Tee_102_M"):
				case joaat("MP_Christmas2018_Tee_103_M"):
				case joaat("MP_Christmas2018_Tee_104_M"):
				case joaat("MP_Christmas2018_Tee_105_M"):
				case joaat("MP_Christmas2018_Tee_106_M"):
				case joaat("MP_Christmas2018_Tee_107_M"):
				case joaat("MP_Christmas2018_Tee_108_M"):
				case joaat("MP_Christmas2018_Tee_109_M"):
				case joaat("MP_Christmas2018_Tee_110_M"):
				case joaat("MP_Christmas2018_Tee_111_M"):
				case joaat("MP_Christmas2018_Tee_112_M"):
				case joaat("MP_Christmas2018_Tee_113_M"):
				case joaat("MP_Christmas2018_Tee_114_M"):
				case joaat("MP_Christmas2018_Tee_115_M"):
				case joaat("MP_Christmas2018_Tee_116_M"):
				case joaat("MP_Christmas2018_Tee_117_M"):
				case joaat("MP_Christmas2018_Tee_118_M"):
				case joaat("MP_Christmas2018_Tee_119_M"):
				case joaat("MP_Christmas2018_Tee_120_M"):
				case joaat("MP_Christmas2018_Tee_121_M"):
				case joaat("MP_Christmas2018_Tee_122_M"):
				case joaat("MP_Christmas2018_Tee_123_M"):
				case joaat("MP_Christmas2018_Tee_124_M"):
					*uParam3 = 235;
					break;
			}
			switch (iParam2)
			{
				case joaat("MP_Christmas2018_Tee_068_F"):
				case joaat("MP_Christmas2018_Tee_069_F"):
				case joaat("MP_Christmas2018_Tee_070_F"):
				case joaat("MP_Christmas2018_Tee_071_F"):
				case joaat("MP_Christmas2018_Tee_072_F"):
				case joaat("MP_Christmas2018_Tee_073_F"):
				case joaat("MP_Christmas2018_Tee_074_F"):
				case joaat("MP_Christmas2018_Tee_075_F"):
				case joaat("MP_Christmas2018_Tee_076_F"):
				case joaat("MP_Christmas2018_Tee_077_F"):
				case joaat("MP_Christmas2018_Tee_078_F"):
				case joaat("MP_Christmas2018_Tee_079_F"):
				case joaat("MP_Christmas2018_Tee_080_F"):
				case joaat("MP_Christmas2018_Tee_081_F"):
				case joaat("MP_Christmas2018_Tee_082_F"):
				case joaat("MP_Christmas2018_Tee_083_F"):
				case joaat("MP_Christmas2018_Tee_084_F"):
				case joaat("MP_Christmas2018_Tee_085_F"):
				case joaat("MP_Christmas2018_Tee_086_F"):
				case joaat("MP_Christmas2018_Tee_087_F"):
				case joaat("MP_Christmas2018_Tee_088_F"):
				case joaat("MP_Christmas2018_Tee_089_F"):
				case joaat("MP_Christmas2018_Tee_090_F"):
				case joaat("MP_Christmas2018_Tee_091_F"):
				case joaat("MP_Christmas2018_Tee_092_F"):
				case joaat("MP_Christmas2018_Tee_093_F"):
				case joaat("MP_Christmas2018_Tee_094_F"):
				case joaat("MP_Christmas2018_Tee_095_F"):
				case joaat("MP_Christmas2018_Tee_096_F"):
				case joaat("MP_Christmas2018_Tee_097_F"):
				case joaat("MP_Christmas2018_Tee_098_F"):
				case joaat("MP_Christmas2018_Tee_099_F"):
				case joaat("MP_Christmas2018_Tee_100_F"):
				case joaat("MP_Christmas2018_Tee_101_F"):
				case joaat("MP_Christmas2018_Tee_102_F"):
				case joaat("MP_Christmas2018_Tee_103_F"):
				case joaat("MP_Christmas2018_Tee_104_F"):
				case joaat("MP_Christmas2018_Tee_105_F"):
				case joaat("MP_Christmas2018_Tee_106_F"):
				case joaat("MP_Christmas2018_Tee_107_F"):
				case joaat("MP_Christmas2018_Tee_108_F"):
				case joaat("MP_Christmas2018_Tee_109_F"):
				case joaat("MP_Christmas2018_Tee_110_F"):
				case joaat("MP_Christmas2018_Tee_111_F"):
				case joaat("MP_Christmas2018_Tee_112_F"):
				case joaat("MP_Christmas2018_Tee_113_F"):
				case joaat("MP_Christmas2018_Tee_114_F"):
				case joaat("MP_Christmas2018_Tee_115_F"):
				case joaat("MP_Christmas2018_Tee_116_F"):
				case joaat("MP_Christmas2018_Tee_117_F"):
				case joaat("MP_Christmas2018_Tee_118_F"):
				case joaat("MP_Christmas2018_Tee_119_F"):
				case joaat("MP_Christmas2018_Tee_120_F"):
				case joaat("MP_Christmas2018_Tee_121_F"):
				case joaat("MP_Christmas2018_Tee_122_F"):
				case joaat("MP_Christmas2018_Tee_123_F"):
				case joaat("MP_Christmas2018_Tee_124_F"):
					*uParam3 = 235;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_0"):
				case joaat("CasinoTop_M_1"):
				case joaat("CasinoTop_M_3"):
				case joaat("CasinoTop_M_5"):
				case joaat("CasinoTop_M_7"):
				case joaat("CasinoTop_M_8"):
				case joaat("CasinoTop_M_9"):
				case joaat("CasinoTop_M_11"):
				case joaat("CasinoTop_M_12"):
				case joaat("CasinoTop_M_13"):
				case joaat("CasinoTop_M_14"):
				case joaat("CasinoTop_M_15"):
				case joaat("CasinoTop_M_16"):
				case joaat("CasinoTop_M_17"):
				case joaat("CasinoTop_M_18"):
				case joaat("CasinoTop_M_19"):
				case joaat("CasinoTop_M_20"):
					*uParam3 = 248;
					break;
			}
			switch (iParam2)
			{
				case joaat("CasinoTop_F_0"):
				case joaat("CasinoTop_F_1"):
				case joaat("CasinoTop_F_3"):
				case joaat("CasinoTop_F_5"):
				case joaat("CasinoTop_F_7"):
				case joaat("CasinoTop_F_8"):
				case joaat("CasinoTop_F_9"):
				case joaat("CasinoTop_F_11"):
				case joaat("CasinoTop_F_12"):
				case joaat("CasinoTop_F_13"):
				case joaat("CasinoTop_F_14"):
				case joaat("CasinoTop_F_15"):
				case joaat("CasinoTop_F_16"):
				case joaat("CasinoTop_F_17"):
				case joaat("CasinoTop_F_18"):
				case joaat("CasinoTop_F_19"):
				case joaat("CasinoTop_F_20"):
					*uParam3 = 248;
					break;
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_2"):
				case joaat("CasinoTop_F_4"):
				case joaat("CasinoTop_F_6"):
				case joaat("CasinoTop_F_10"):
				case joaat("CasinoTop_F_21"):
				case joaat("CasinoTop_F_22"):
				case joaat("CasinoTop_F_23"):
					*uParam3 = 122;
					break;
				case joaat("CasinoTop_M_24"):
				case joaat("CasinoTop_M_25"):
				case joaat("CasinoTop_M_26"):
				case joaat("CasinoTop_M_27"):
				case joaat("CasinoTop_M_28"):
				case joaat("CasinoTop_M_29"):
				case joaat("CasinoTop_M_30"):
				case joaat("CasinoTop_M_31"):
				case joaat("CasinoTop_M_32"):
				case joaat("CasinoTop_M_33"):
				case joaat("CasinoTop_M_34"):
				case joaat("CasinoTop_M_35"):
				case joaat("CasinoTop_M_36"):
				case joaat("CasinoTop_M_37"):
				case joaat("CasinoTop_M_38"):
				case joaat("CasinoTop_M_39"):
				case joaat("CasinoTop_M_40"):
				case joaat("CasinoTop_M_41"):
				case joaat("CasinoTop_M_42"):
				case joaat("CasinoTop_M_43"):
				case joaat("CasinoTop_M_44"):
				case joaat("CasinoTop_F_24"):
				case joaat("CasinoTop_F_25"):
				case joaat("CasinoTop_F_26"):
				case joaat("CasinoTop_F_27"):
				case joaat("CasinoTop_F_28"):
				case joaat("CasinoTop_F_29"):
				case joaat("CasinoTop_F_30"):
				case joaat("CasinoTop_F_31"):
				case joaat("CasinoTop_F_32"):
				case joaat("CasinoTop_F_33"):
				case joaat("CasinoTop_F_34"):
				case joaat("CasinoTop_F_35"):
				case joaat("CasinoTop_F_36"):
				case joaat("CasinoTop_F_37"):
				case joaat("CasinoTop_F_38"):
				case joaat("CasinoTop_F_39"):
				case joaat("CasinoTop_F_40"):
				case joaat("CasinoTop_F_41"):
				case joaat("CasinoTop_F_42"):
				case joaat("CasinoTop_F_43"):
				case joaat("CasinoTop_F_44"):
					*uParam3 = 122;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam2)
			{
				case joaat("mpHeist3_Tee_000_M"):
				case joaat("mpHeist3_Tee_001_M"):
				case joaat("mpHeist3_Tee_002_M"):
				case joaat("mpHeist3_Tee_003_M"):
				case joaat("mpHeist3_Tee_004_M"):
				case joaat("mpHeist3_Tee_005_M"):
				case joaat("mpHeist3_Tee_006_M"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
				case joaat("mpHeist3_Tee_010_M"):
				case joaat("mpHeist3_Tee_011_M"):
				case joaat("mpHeist3_Tee_012_M"):
				case joaat("mpHeist3_Tee_013_M"):
				case joaat("mpHeist3_Tee_014_M"):
				case joaat("mpHeist3_Tee_015_M"):
				case joaat("mpHeist3_Tee_016_M"):
				case joaat("mpHeist3_Tee_017_M"):
				case joaat("mpHeist3_Tee_018_M"):
				case joaat("mpHeist3_Tee_019_M"):
				case joaat("mpHeist3_Tee_020_M"):
				case joaat("mpHeist3_Tee_021_M"):
				case joaat("mpHeist3_Tee_022_M"):
				case joaat("mpHeist3_Tee_023_M"):
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_023_F"):
					*uParam3 = 122;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpSum_overlays"):
			switch (iParam2)
			{
				case joaat("mpSum_Tee_000_M"):
				case joaat("mpSum_Tee_001_M"):
				case joaat("mpSum_Tee_002_M"):
				case joaat("mpSum_Tee_003_M"):
				case joaat("mpSum_Tee_004_M"):
				case joaat("mpSum_Tee_005_M"):
				case joaat("mpSum_Tee_006_M"):
				case joaat("mpSum_Tee_007_M"):
				case joaat("mpSum_Tee_008_M"):
				case joaat("mpSum_Tee_009_M"):
				case joaat("mpSum_Tee_010_M"):
				case joaat("mpSum_Tee_011_M"):
				case joaat("mpSum_Tee_012_M"):
				case joaat("mpSum_Tee_013_M"):
				case joaat("mpSum_Tee_014_M"):
				case joaat("mpSum_Tee_015_M"):
				case joaat("mpSum_Tee_016_M"):
				case joaat("mpSum_Tee_017_M"):
				case joaat("mpSum_Tee_018_M"):
				case joaat("mpSum_Tee_019_M"):
				case joaat("mpSum_Tee_020_M"):
				case joaat("mpSum_Tee_021_M"):
				case joaat("mpSum_Tee_022_M"):
				case joaat("mpSum_Tee_023_M"):
				case joaat("mpSum_Tee_024_M"):
				case joaat("mpSum_Tee_025_M"):
				case joaat("mpSum_Tee_026_M"):
				case joaat("mpSum_Tee_027_M"):
				case joaat("mpSum_Tee_028_M"):
				case joaat("mpSum_Tee_029_M"):
				case joaat("mpSum_Tee_030_M"):
				case joaat("mpSum_Tee_031_M"):
				case joaat("mpSum_Tee_032_M"):
				case joaat("mpSum_Tee_033_M"):
				case joaat("mpSum_Tee_034_M"):
				case joaat("mpSum_Tee_000_F"):
				case joaat("mpSum_Tee_001_F"):
				case joaat("mpSum_Tee_002_F"):
				case joaat("mpSum_Tee_003_F"):
				case joaat("mpSum_Tee_004_F"):
				case joaat("mpSum_Tee_005_F"):
				case joaat("mpSum_Tee_006_F"):
				case joaat("mpSum_Tee_007_F"):
				case joaat("mpSum_Tee_008_F"):
				case joaat("mpSum_Tee_009_F"):
				case joaat("mpSum_Tee_010_F"):
				case joaat("mpSum_Tee_011_F"):
				case joaat("mpSum_Tee_012_F"):
				case joaat("mpSum_Tee_013_F"):
				case joaat("mpSum_Tee_014_F"):
				case joaat("mpSum_Tee_015_F"):
				case joaat("mpSum_Tee_016_F"):
				case joaat("mpSum_Tee_017_F"):
				case joaat("mpSum_Tee_018_F"):
				case joaat("mpSum_Tee_019_F"):
				case joaat("mpSum_Tee_020_F"):
				case joaat("mpSum_Tee_021_F"):
				case joaat("mpSum_Tee_022_F"):
				case joaat("mpSum_Tee_023_F"):
				case joaat("mpSum_Tee_024_F"):
				case joaat("mpSum_Tee_025_F"):
				case joaat("mpSum_Tee_026_F"):
				case joaat("mpSum_Tee_027_F"):
				case joaat("mpSum_Tee_028_F"):
				case joaat("mpSum_Tee_029_F"):
				case joaat("mpSum_Tee_030_F"):
				case joaat("mpSum_Tee_031_F"):
				case joaat("mpSum_Tee_032_F"):
				case joaat("mpSum_Tee_033_F"):
				case joaat("mpSum_Tee_034_F"):
					*uParam3 = 122;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpHeist4_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_008_M"):
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_030_M"):
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_000_F"):
				case joaat("MP_Heist4_Tee_001_F"):
				case joaat("MP_Heist4_Tee_002_F"):
				case joaat("MP_Heist4_Tee_003_F"):
				case joaat("MP_Heist4_Tee_004_F"):
				case joaat("MP_Heist4_Tee_005_F"):
				case joaat("MP_Heist4_Tee_006_F"):
				case joaat("MP_Heist4_Tee_007_F"):
				case joaat("MP_Heist4_Tee_008_F"):
				case joaat("MP_Heist4_Tee_009_F"):
				case joaat("MP_Heist4_Tee_010_F"):
				case joaat("MP_Heist4_Tee_011_F"):
				case joaat("MP_Heist4_Tee_012_F"):
				case joaat("MP_Heist4_Tee_013_F"):
				case joaat("MP_Heist4_Tee_014_F"):
				case joaat("MP_Heist4_Tee_015_F"):
				case joaat("MP_Heist4_Tee_016_F"):
				case joaat("MP_Heist4_Tee_017_F"):
				case joaat("MP_Heist4_Tee_018_F"):
				case joaat("MP_Heist4_Tee_019_F"):
				case joaat("MP_Heist4_Tee_020_F"):
				case joaat("MP_Heist4_Tee_021_F"):
				case joaat("MP_Heist4_Tee_022_F"):
				case joaat("MP_Heist4_Tee_023_F"):
				case joaat("MP_Heist4_Tee_024_F"):
				case joaat("MP_Heist4_Tee_025_F"):
				case joaat("MP_Heist4_Tee_026_F"):
				case joaat("MP_Heist4_Tee_027_F"):
				case joaat("MP_Heist4_Tee_028_F"):
				case joaat("MP_Heist4_Tee_029_F"):
				case joaat("MP_Heist4_Tee_030_F"):
				case joaat("MP_Heist4_Tee_031_F"):
				case joaat("MP_Heist4_Tee_032_F"):
				case joaat("MP_Heist4_Tee_033_F"):
				case joaat("MP_Heist4_Tee_045_F"):
				case joaat("MP_Heist4_Tee_046_F"):
				case joaat("MP_Heist4_Tee_047_F"):
				case joaat("MP_Heist4_Tee_048_F"):
				case joaat("MP_Heist4_Tee_049_F"):
				case joaat("MP_Heist4_Tee_051_F"):
				case joaat("MP_Heist4_Tee_053_F"):
				case joaat("MP_Heist4_Tee_054_F"):
				case joaat("MP_Heist4_Tee_055_F"):
				case joaat("MP_Heist4_Tee_057_F"):
				case joaat("MP_Heist4_Tee_059_F"):
				case joaat("MP_Heist4_Tee_061_F"):
				case joaat("MP_Heist4_Tee_063_F"):
				case joaat("MP_Heist4_Tee_065_F"):
					*uParam3 = 122;
					break;
				case joaat("MP_Heist4_Tee_034_M"):
				case joaat("MP_Heist4_Tee_035_M"):
				case joaat("MP_Heist4_Tee_036_M"):
				case joaat("MP_Heist4_Tee_037_M"):
				case joaat("MP_Heist4_Tee_038_M"):
				case joaat("MP_Heist4_Tee_039_M"):
				case joaat("MP_Heist4_Tee_041_M"):
				case joaat("MP_Heist4_Tee_043_M"):
				case joaat("MP_Heist4_Tee_034_F"):
				case joaat("MP_Heist4_Tee_035_F"):
				case joaat("MP_Heist4_Tee_036_F"):
				case joaat("MP_Heist4_Tee_037_F"):
				case joaat("MP_Heist4_Tee_038_F"):
				case joaat("MP_Heist4_Tee_039_F"):
				case joaat("MP_Heist4_Tee_041_F"):
				case joaat("MP_Heist4_Tee_043_F"):
					*uParam3 = 256;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpTuner_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Tuner_Tee_000_M"):
				case joaat("MP_Tuner_Tee_002_M"):
				case joaat("MP_Tuner_Tee_003_M"):
				case joaat("MP_Tuner_Tee_005_M"):
				case joaat("MP_Tuner_Tee_006_M"):
				case joaat("MP_Tuner_Tee_008_M"):
				case joaat("MP_Tuner_Tee_010_M"):
				case joaat("MP_Tuner_Tee_011_M"):
				case joaat("MP_Tuner_Tee_012_M"):
				case joaat("MP_Tuner_Tee_013_M"):
				case joaat("MP_Tuner_Tee_014_M"):
				case joaat("MP_Tuner_Tee_015_M"):
				case joaat("MP_Tuner_Tee_016_M"):
				case joaat("MP_Tuner_Tee_000_F"):
				case joaat("MP_Tuner_Tee_002_F"):
				case joaat("MP_Tuner_Tee_003_F"):
				case joaat("MP_Tuner_Tee_005_F"):
				case joaat("MP_Tuner_Tee_006_F"):
				case joaat("MP_Tuner_Tee_008_F"):
				case joaat("MP_Tuner_Tee_010_F"):
				case joaat("MP_Tuner_Tee_011_F"):
				case joaat("MP_Tuner_Tee_012_F"):
				case joaat("MP_Tuner_Tee_013_F"):
				case joaat("MP_Tuner_Tee_014_F"):
				case joaat("MP_Tuner_Tee_015_F"):
				case joaat("MP_Tuner_Tee_016_F"):
					*uParam3 = 122;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpSecurity_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Security_Tee_000_M"):
				case joaat("MP_Security_Tee_000_F"):
					*uParam3 = 11;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpSum2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Sum2_Tee_000_M"):
				case joaat("MP_Sum2_Tee_001_M"):
				case joaat("MP_Sum2_Tee_000_F"):
				case joaat("MP_Sum2_Tee_001_F"):
					*uParam3 = 122;
					break;
			}
			break;
	}
	return *uParam3 != 0;
}

int func_441(char* sParam0)//Position - 0x123846
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 31;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CLO_AWM_U_3_0"):
		case joaat("CLO_AWM_U_3_1"):
		case joaat("CLO_AWM_U_3_2"):
		case joaat("CLO_AWM_U_3_3"):
		case joaat("CLO_AWM_U_3_4"):
		case joaat("CLO_AWM_U_3_5"):
		case joaat("CLO_AWM_U_3_6"):
		case joaat("CLO_AWM_U_3_7"):
		case joaat("CLO_AWM_U_3_8"):
		case joaat("CLO_AWM_U_3_9"):
		case joaat("CLO_AWM_U_3_10"):
		case joaat("CLO_AWM_U_3_11"):
		case joaat("CLO_AWM_U_3_12"):
		case joaat("CLO_AWM_U_3_13"):
		case joaat("CLO_AWM_U_3_14"):
		case joaat("CLO_AWM_U_3_15"):
		case joaat("CLO_AWF_U_3_0"):
		case joaat("CLO_AWF_U_3_1"):
		case joaat("CLO_AWF_U_3_2"):
		case joaat("CLO_AWF_U_3_3"):
		case joaat("CLO_AWF_U_3_4"):
		case joaat("CLO_AWF_U_3_5"):
		case joaat("CLO_AWF_U_3_6"):
		case joaat("CLO_AWF_U_3_7"):
		case joaat("CLO_AWF_U_3_8"):
		case joaat("CLO_AWF_U_3_9"):
		case joaat("CLO_AWF_U_3_10"):
		case joaat("CLO_AWF_U_3_11"):
		case joaat("CLO_AWF_U_3_12"):
		case joaat("CLO_AWF_U_3_13"):
		case joaat("CLO_AWF_U_3_14"):
		case joaat("CLO_AWF_U_3_15"):
			return 0;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_AWM_U_4_0"):
		case joaat("CLO_AWM_U_4_1"):
		case joaat("CLO_AWM_U_4_2"):
		case joaat("CLO_AWM_U_4_3"):
		case joaat("CLO_AWM_U_4_4"):
		case joaat("CLO_AWM_U_4_5"):
		case joaat("CLO_AWM_U_4_6"):
		case joaat("CLO_AWM_U_4_7"):
		case joaat("CLO_AWM_U_4_8"):
		case joaat("CLO_AWM_U_4_9"):
		case joaat("CLO_AWM_U_4_10"):
		case joaat("CLO_AWM_U_4_11"):
		case joaat("CLO_AWF_U_4_0"):
		case joaat("CLO_AWF_U_4_1"):
		case joaat("CLO_AWF_U_4_2"):
		case joaat("CLO_AWF_U_4_3"):
		case joaat("CLO_AWF_U_4_4"):
		case joaat("CLO_AWF_U_4_5"):
		case joaat("CLO_AWF_U_4_6"):
		case joaat("CLO_AWF_U_4_7"):
		case joaat("CLO_AWF_U_4_8"):
		case joaat("CLO_AWF_U_4_9"):
		case joaat("CLO_AWF_U_4_10"):
		case joaat("CLO_AWF_U_4_11"):
			return 0;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_AWM_U_17_0"):
		case joaat("CLO_AWM_U_17_1"):
		case joaat("CLO_AWM_U_17_2"):
		case joaat("CLO_AWM_U_17_3"):
		case joaat("CLO_AWM_U_17_4"):
		case joaat("CLO_AWM_U_17_5"):
		case joaat("CLO_AWM_U_17_6"):
		case joaat("CLO_AWM_U_17_7"):
		case joaat("CLO_AWM_U_17_8"):
		case joaat("CLO_AWM_U_17_9"):
		case joaat("CLO_AWM_U_17_10"):
		case joaat("CLO_AWM_U_17_11"):
		case joaat("CLO_AWM_U_17_12"):
		case joaat("CLO_AWM_U_17_13"):
		case joaat("CLO_AWM_U_17_14"):
		case joaat("CLO_AWM_U_17_15"):
		case joaat("CLO_AWF_U_17_0"):
		case joaat("CLO_AWF_U_17_1"):
		case joaat("CLO_AWF_U_17_2"):
		case joaat("CLO_AWF_U_17_3"):
		case joaat("CLO_AWF_U_17_4"):
		case joaat("CLO_AWF_U_17_5"):
		case joaat("CLO_AWF_U_17_6"):
		case joaat("CLO_AWF_U_17_7"):
		case joaat("CLO_AWF_U_17_8"):
		case joaat("CLO_AWF_U_17_9"):
		case joaat("CLO_AWF_U_17_10"):
		case joaat("CLO_AWF_U_17_11"):
		case joaat("CLO_AWF_U_17_12"):
		case joaat("CLO_AWF_U_17_13"):
		case joaat("CLO_AWF_U_17_14"):
		case joaat("CLO_AWF_U_17_15"):
			return 0;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_AWM_U_1_2"):
		case joaat("CLO_AWM_U_1_3"):
		case joaat("CLO_AWM_U_1_4"):
		case joaat("CLO_AWM_U_1_5"):
		case joaat("CLO_AWM_U_1_6"):
		case joaat("CLO_AWM_U_1_7"):
		case joaat("CLO_AWM_U_1_8"):
		case joaat("CLO_AWM_U_1_9"):
		case joaat("CLO_AWM_U_1_10"):
		case joaat("CLO_AWM_U_1_11"):
		case joaat("CLO_AWM_U_1_12"):
		case joaat("CLO_AWM_U_1_13"):
		case joaat("CLO_AWM_U_1_14"):
		case joaat("CLO_AWM_U_1_15"):
		case joaat("CLO_AWM_U_1_16"):
		case joaat("CLO_AWM_U_1_17"):
		case joaat("CLO_AWM_U_1_18"):
		case joaat("CLO_AWM_U_1_19"):
		case joaat("CLO_AWF_U_1_2"):
		case joaat("CLO_AWF_U_1_3"):
		case joaat("CLO_AWF_U_1_4"):
		case joaat("CLO_AWF_U_1_5"):
		case joaat("CLO_AWF_U_1_6"):
		case joaat("CLO_AWF_U_1_7"):
		case joaat("CLO_AWF_U_1_8"):
		case joaat("CLO_AWF_U_1_9"):
		case joaat("CLO_AWF_U_1_10"):
		case joaat("CLO_AWF_U_1_11"):
		case joaat("CLO_AWF_U_1_12"):
		case joaat("CLO_AWF_U_1_13"):
		case joaat("CLO_AWF_U_1_14"):
		case joaat("CLO_AWF_U_1_15"):
		case joaat("CLO_AWF_U_1_16"):
		case joaat("CLO_AWF_U_1_17"):
		case joaat("CLO_AWF_U_1_18"):
		case joaat("CLO_AWF_U_1_19"):
			return 1;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_AWM_U_7_0"):
		case joaat("CLO_AWM_U_7_1"):
		case joaat("CLO_AWM_U_7_2"):
		case joaat("CLO_AWM_U_7_3"):
		case joaat("CLO_AWM_U_7_4"):
		case joaat("CLO_AWM_U_7_5"):
		case joaat("CLO_AWM_U_7_6"):
		case joaat("CLO_AWM_U_7_7"):
		case joaat("CLO_AWM_U_7_8"):
		case joaat("CLO_AWM_U_7_9"):
		case joaat("CLO_AWM_U_7_10"):
		case joaat("CLO_AWM_U_7_11"):
		case joaat("CLO_AWM_U_7_12"):
		case joaat("CLO_AWM_U_7_13"):
		case joaat("CLO_AWM_U_7_14"):
		case joaat("CLO_AWM_U_7_15"):
		case joaat("CLO_AWM_U_7_16"):
		case joaat("CLO_AWM_U_7_17"):
		case joaat("CLO_AWF_U_7_0"):
		case joaat("CLO_AWF_U_7_1"):
		case joaat("CLO_AWF_U_7_2"):
		case joaat("CLO_AWF_U_7_3"):
		case joaat("CLO_AWF_U_7_4"):
		case joaat("CLO_AWF_U_7_5"):
		case joaat("CLO_AWF_U_7_6"):
		case joaat("CLO_AWF_U_7_7"):
		case joaat("CLO_AWF_U_7_8"):
		case joaat("CLO_AWF_U_7_9"):
		case joaat("CLO_AWF_U_7_10"):
		case joaat("CLO_AWF_U_7_11"):
		case joaat("CLO_AWF_U_7_12"):
		case joaat("CLO_AWF_U_7_13"):
		case joaat("CLO_AWF_U_7_14"):
		case joaat("CLO_AWF_U_7_15"):
		case joaat("CLO_AWF_U_7_16"):
		case joaat("CLO_AWF_U_7_17"):
			return 2;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_AWM_U_9_0"):
		case joaat("CLO_AWM_U_9_1"):
		case joaat("CLO_AWM_U_9_2"):
		case joaat("CLO_AWM_U_9_3"):
		case joaat("CLO_AWM_U_9_4"):
		case joaat("CLO_AWM_U_9_5"):
		case joaat("CLO_AWM_U_9_6"):
		case joaat("CLO_AWM_U_9_7"):
		case joaat("CLO_AWM_U_9_8"):
		case joaat("CLO_AWM_U_9_9"):
		case joaat("CLO_AWM_U_9_10"):
		case joaat("CLO_AWM_U_9_11"):
		case joaat("CLO_AWM_U_9_12"):
		case joaat("CLO_AWM_U_9_13"):
		case joaat("CLO_AWM_U_9_14"):
		case joaat("CLO_AWM_U_9_15"):
		case joaat("CLO_AWM_U_9_16"):
		case joaat("CLO_AWM_U_9_17"):
		case joaat("CLO_AWM_U_9_18"):
		case joaat("CLO_AWM_U_9_19"):
		case joaat("CLO_AWM_U_9_20"):
		case joaat("CLO_AWM_U_9_21"):
		case joaat("CLO_AWM_U_9_22"):
		case joaat("CLO_AWM_U_9_23"):
		case joaat("CLO_AWF_U_9_0"):
		case joaat("CLO_AWF_U_9_1"):
		case joaat("CLO_AWF_U_9_2"):
		case joaat("CLO_AWF_U_9_3"):
		case joaat("CLO_AWF_U_9_4"):
		case joaat("CLO_AWF_U_9_5"):
		case joaat("CLO_AWF_U_9_6"):
		case joaat("CLO_AWF_U_9_7"):
		case joaat("CLO_AWF_U_9_8"):
		case joaat("CLO_AWF_U_9_9"):
		case joaat("CLO_AWF_U_9_10"):
		case joaat("CLO_AWF_U_9_11"):
		case joaat("CLO_AWF_U_9_12"):
		case joaat("CLO_AWF_U_9_13"):
		case joaat("CLO_AWF_U_9_14"):
		case joaat("CLO_AWF_U_9_15"):
		case joaat("CLO_AWF_U_9_16"):
		case joaat("CLO_AWF_U_9_17"):
		case joaat("CLO_AWF_U_9_18"):
		case joaat("CLO_AWF_U_9_19"):
		case joaat("CLO_AWF_U_9_20"):
		case joaat("CLO_AWF_U_9_21"):
		case joaat("CLO_AWF_U_9_22"):
		case joaat("CLO_AWF_U_9_23"):
			return 2;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_AWM_U_10_0"):
		case joaat("CLO_AWM_U_10_1"):
		case joaat("CLO_AWM_U_10_2"):
		case joaat("CLO_AWM_U_10_3"):
		case joaat("CLO_AWM_U_10_4"):
		case joaat("CLO_AWM_U_10_5"):
		case joaat("CLO_AWM_U_10_6"):
		case joaat("CLO_AWM_U_10_7"):
		case joaat("CLO_AWM_U_10_8"):
		case joaat("CLO_AWM_U_10_9"):
		case joaat("CLO_AWM_U_10_10"):
		case joaat("CLO_AWM_U_10_11"):
		case joaat("CLO_AWM_U_10_12"):
		case joaat("CLO_AWM_U_10_13"):
		case joaat("CLO_AWM_U_10_14"):
		case joaat("CLO_AWM_U_10_15"):
		case joaat("CLO_AWF_U_10_0"):
		case joaat("CLO_AWF_U_10_1"):
		case joaat("CLO_AWF_U_10_2"):
		case joaat("CLO_AWF_U_10_3"):
		case joaat("CLO_AWF_U_10_4"):
		case joaat("CLO_AWF_U_10_5"):
		case joaat("CLO_AWF_U_10_6"):
		case joaat("CLO_AWF_U_10_7"):
		case joaat("CLO_AWF_U_10_8"):
		case joaat("CLO_AWF_U_10_9"):
		case joaat("CLO_AWF_U_10_10"):
		case joaat("CLO_AWF_U_10_11"):
		case joaat("CLO_AWF_U_10_12"):
		case joaat("CLO_AWF_U_10_13"):
		case joaat("CLO_AWF_U_10_14"):
		case joaat("CLO_AWF_U_10_15"):
			return 2;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_AWF_DECL_68"):
		case joaat("CLO_AWF_DECL_69"):
		case joaat("CLO_AWF_DECL_70"):
		case joaat("CLO_AWF_DECL_71"):
		case joaat("CLO_AWF_DECL_72"):
		case joaat("CLO_AWF_DECL_73"):
		case joaat("CLO_AWF_DECL_74"):
		case joaat("CLO_AWF_DECL_75"):
		case joaat("CLO_AWF_DECL_76"):
		case joaat("CLO_AWF_DECL_77"):
		case joaat("CLO_AWF_DECL_78"):
		case joaat("CLO_AWF_DECL_79"):
		case joaat("CLO_AWF_DECL_80"):
		case joaat("CLO_AWF_DECL_81"):
		case joaat("CLO_AWF_DECL_82"):
		case joaat("CLO_AWF_DECL_83"):
		case joaat("CLO_AWF_DECL_84"):
		case joaat("CLO_AWF_DECL_85"):
		case joaat("CLO_AWF_DECL_86"):
		case joaat("CLO_AWF_DECL_87"):
		case joaat("CLO_AWF_DECL_88"):
		case joaat("CLO_AWF_DECL_89"):
		case joaat("CLO_AWF_DECL_90"):
		case joaat("CLO_AWF_DECL_91"):
		case joaat("CLO_AWF_DECL_92"):
		case joaat("CLO_AWF_DECL_93"):
		case joaat("CLO_AWF_DECL_94"):
		case joaat("CLO_AWF_DECL_95"):
		case joaat("CLO_AWF_DECL_96"):
		case joaat("CLO_AWF_DECL_97"):
		case joaat("CLO_AWF_DECL_98"):
		case joaat("CLO_AWF_DECL_99"):
		case joaat("CLO_AWF_DECL_100"):
		case joaat("CLO_AWF_DECL_101"):
		case joaat("CLO_AWF_DECL_102"):
		case joaat("CLO_AWF_DECL_103"):
		case joaat("CLO_AWF_DECL_104"):
		case joaat("CLO_AWF_DECL_105"):
		case joaat("CLO_AWF_DECL_106"):
		case joaat("CLO_AWF_DECL_107"):
		case joaat("CLO_AWF_DECL_108"):
		case joaat("CLO_AWF_DECL_109"):
		case joaat("CLO_AWF_DECL_110"):
		case joaat("CLO_AWF_DECL_111"):
		case joaat("CLO_AWF_DECL_112"):
		case joaat("CLO_AWF_DECL_113"):
		case joaat("CLO_AWF_DECL_114"):
		case joaat("CLO_AWF_DECL_115"):
		case joaat("CLO_AWF_DECL_116"):
		case joaat("CLO_AWF_DECL_117"):
		case joaat("CLO_AWF_DECL_118"):
		case joaat("CLO_AWF_DECL_119"):
		case joaat("CLO_AWF_DECL_120"):
		case joaat("CLO_AWF_DECL_121"):
		case joaat("CLO_AWF_DECL_122"):
		case joaat("CLO_AWF_DECL_123"):
		case joaat("CLO_AWF_DECL_124"):
			return 2;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_AWM_DECL_68"):
		case joaat("CLO_AWM_DECL_69"):
		case joaat("CLO_AWM_DECL_70"):
		case joaat("CLO_AWM_DECL_71"):
		case joaat("CLO_AWM_DECL_72"):
		case joaat("CLO_AWM_DECL_73"):
		case joaat("CLO_AWM_DECL_74"):
		case joaat("CLO_AWM_DECL_75"):
		case joaat("CLO_AWM_DECL_76"):
		case joaat("CLO_AWM_DECL_77"):
		case joaat("CLO_AWM_DECL_78"):
		case joaat("CLO_AWM_DECL_79"):
		case joaat("CLO_AWM_DECL_80"):
		case joaat("CLO_AWM_DECL_81"):
		case joaat("CLO_AWM_DECL_82"):
		case joaat("CLO_AWM_DECL_83"):
		case joaat("CLO_AWM_DECL_84"):
		case joaat("CLO_AWM_DECL_85"):
		case joaat("CLO_AWM_DECL_86"):
		case joaat("CLO_AWM_DECL_87"):
		case joaat("CLO_AWM_DECL_88"):
		case joaat("CLO_AWM_DECL_89"):
		case joaat("CLO_AWM_DECL_90"):
		case joaat("CLO_AWM_DECL_91"):
		case joaat("CLO_AWM_DECL_92"):
		case joaat("CLO_AWM_DECL_93"):
		case joaat("CLO_AWM_DECL_94"):
		case joaat("CLO_AWM_DECL_95"):
		case joaat("CLO_AWM_DECL_96"):
		case joaat("CLO_AWM_DECL_97"):
		case joaat("CLO_AWM_DECL_98"):
		case joaat("CLO_AWM_DECL_99"):
		case joaat("CLO_AWM_DECL_100"):
		case joaat("CLO_AWM_DECL_101"):
		case joaat("CLO_AWM_DECL_102"):
		case joaat("CLO_AWM_DECL_103"):
		case joaat("CLO_AWM_DECL_104"):
		case joaat("CLO_AWM_DECL_105"):
		case joaat("CLO_AWM_DECL_106"):
		case joaat("CLO_AWM_DECL_107"):
		case joaat("CLO_AWM_DECL_108"):
		case joaat("CLO_AWM_DECL_109"):
		case joaat("CLO_AWM_DECL_110"):
		case joaat("CLO_AWM_DECL_111"):
		case joaat("CLO_AWM_DECL_112"):
		case joaat("CLO_AWM_DECL_113"):
		case joaat("CLO_AWM_DECL_114"):
		case joaat("CLO_AWM_DECL_115"):
		case joaat("CLO_AWM_DECL_116"):
		case joaat("CLO_AWM_DECL_117"):
		case joaat("CLO_AWM_DECL_118"):
		case joaat("CLO_AWM_DECL_119"):
		case joaat("CLO_AWM_DECL_120"):
		case joaat("CLO_AWM_DECL_121"):
		case joaat("CLO_AWM_DECL_122"):
		case joaat("CLO_AWM_DECL_123"):
		case joaat("CLO_AWM_DECL_124"):
			return 2;
			break;
	}
	return 0;
}

int func_442(char* sParam0)//Position - 0x124185
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 31;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CLO_X17M_U_4_9"):
		case joaat("CLO_X17M_U_4_8"):
		case joaat("CLO_X17M_U_4_7"):
		case joaat("CLO_X17M_U_4_6"):
		case joaat("CLO_X17M_U_4_5"):
		case joaat("CLO_X17M_U_4_4"):
		case joaat("CLO_X17M_U_4_3"):
		case joaat("CLO_X17M_U_4_2"):
		case joaat("CLO_X17M_U_4_1"):
		case joaat("CLO_X17M_U_4_0"):
		case joaat("CLO_X4M_U_13_7"):
		case joaat("CLO_X4M_U_13_6"):
		case joaat("CLO_X4M_U_13_5"):
		case joaat("CLO_X4M_U_13_4"):
		case joaat("CLO_X4M_U_13_3"):
		case joaat("CLO_X4M_U_13_2"):
		case joaat("CLO_X4M_U_13_1"):
		case joaat("CLO_X4M_U_13_0"):
		case joaat("CLO_X4M_U_12_7"):
		case joaat("CLO_X4M_U_12_6"):
		case joaat("CLO_X4M_U_12_5"):
		case joaat("CLO_X4M_U_12_4"):
		case joaat("CLO_X4M_U_12_3"):
		case joaat("CLO_X4M_U_12_2"):
		case joaat("CLO_X4M_U_12_1"):
		case joaat("CLO_X4M_U_12_0"):
		case joaat("CLO_X4M_U_11_15"):
		case joaat("CLO_X4M_U_11_14"):
		case joaat("CLO_X4M_U_11_13"):
		case joaat("CLO_X4M_U_11_12"):
		case joaat("CLO_X4M_U_11_11"):
		case joaat("CLO_X4M_U_11_10"):
		case joaat("CLO_X4M_U_11_9"):
		case joaat("CLO_X4M_U_11_8"):
		case joaat("CLO_X4M_U_11_7"):
		case joaat("CLO_X4M_U_11_6"):
		case joaat("CLO_X4M_U_11_5"):
		case joaat("CLO_X4M_U_11_4"):
		case joaat("CLO_X4M_U_11_3"):
		case joaat("CLO_X4M_U_11_2"):
		case joaat("CLO_X4M_U_11_1"):
		case joaat("CLO_X4M_U_11_0"):
		case joaat("CLO_X4M_U_10_15"):
		case joaat("CLO_X4M_U_10_14"):
		case joaat("CLO_X4M_U_10_13"):
		case joaat("CLO_X4M_U_10_12"):
		case joaat("CLO_X4M_U_10_11"):
		case joaat("CLO_X4M_U_10_10"):
		case joaat("CLO_X4M_U_10_9"):
		case joaat("CLO_X4M_U_10_8"):
		case joaat("CLO_X4M_U_10_7"):
		case joaat("CLO_X4M_U_10_6"):
		case joaat("CLO_X4M_U_10_5"):
		case joaat("CLO_X4M_U_10_4"):
		case joaat("CLO_X4M_U_10_3"):
		case joaat("CLO_X4M_U_10_2"):
		case joaat("CLO_X4M_U_10_1"):
		case joaat("CLO_X4M_U_10_0"):
		case joaat("CLO_X4M_U_9_2"):
		case joaat("CLO_X4M_U_9_1"):
		case joaat("CLO_X4M_U_9_0"):
		case joaat("CLO_X4M_U_8_2"):
		case joaat("CLO_X4M_U_8_1"):
		case joaat("CLO_X4M_U_8_0"):
		case joaat("CLO_X2M_U_0_2"):
		case joaat("CLO_X2M_U_0_1"):
		case joaat("CLO_X2M_U_0_0"):
		case joaat("CLO_X5M_U_16_0"):
		case joaat("CLO_X5M_U_16_1"):
		case joaat("CLO_X5M_U_16_2"):
		case joaat("CLO_X5M_U_16_3"):
		case joaat("CLO_X5M_U_16_4"):
		case joaat("CLO_X5M_U_16_5"):
		case joaat("CLO_X5M_U_16_6"):
		case joaat("CLO_X5M_U_16_7"):
		case joaat("CLO_X5M_U_16_8"):
		case joaat("CLO_X5M_U_16_9"):
		case joaat("CLO_X5M_U_16_10"):
		case joaat("CLO_X5M_U_16_11"):
		case joaat("CLO_X5M_U_16_12"):
		case joaat("CLO_X5M_U_16_13"):
		case joaat("CLO_X17F_U_4_9"):
		case joaat("CLO_X17F_U_4_8"):
		case joaat("CLO_X17F_U_4_7"):
		case joaat("CLO_X17F_U_4_6"):
		case joaat("CLO_X17F_U_4_5"):
		case joaat("CLO_X17F_U_4_4"):
		case joaat("CLO_X17F_U_4_3"):
		case joaat("CLO_X17F_U_4_2"):
		case joaat("CLO_X17F_U_4_1"):
		case joaat("CLO_X17F_U_4_0"):
		case joaat("CLO_X4F_U_13_7"):
		case joaat("CLO_X4F_U_13_6"):
		case joaat("CLO_X4F_U_13_5"):
		case joaat("CLO_X4F_U_13_4"):
		case joaat("CLO_X4F_U_13_3"):
		case joaat("CLO_X4F_U_13_2"):
		case joaat("CLO_X4F_U_13_1"):
		case joaat("CLO_X4F_U_13_0"):
		case joaat("CLO_X4F_U_12_7"):
		case joaat("CLO_X4F_U_12_6"):
		case joaat("CLO_X4F_U_12_5"):
		case joaat("CLO_X4F_U_12_4"):
		case joaat("CLO_X4F_U_12_3"):
		case joaat("CLO_X4F_U_12_2"):
		case joaat("CLO_X4F_U_12_1"):
		case joaat("CLO_X4F_U_12_0"):
		case joaat("CLO_X4F_U_11_15"):
		case joaat("CLO_X4F_U_11_14"):
		case joaat("CLO_X4F_U_11_13"):
		case joaat("CLO_X4F_U_11_12"):
		case joaat("CLO_X4F_U_11_11"):
		case joaat("CLO_X4F_U_11_10"):
		case joaat("CLO_X4F_U_11_9"):
		case joaat("CLO_X4F_U_11_8"):
		case joaat("CLO_X4F_U_11_7"):
		case joaat("CLO_X4F_U_11_6"):
		case joaat("CLO_X4F_U_11_5"):
		case joaat("CLO_X4F_U_11_4"):
		case joaat("CLO_X4F_U_11_3"):
		case joaat("CLO_X4F_U_11_2"):
		case joaat("CLO_X4F_U_11_1"):
		case joaat("CLO_X4F_U_11_0"):
		case joaat("CLO_X4F_U_10_15"):
		case joaat("CLO_X4F_U_10_14"):
		case joaat("CLO_X4F_U_10_13"):
		case joaat("CLO_X4F_U_10_12"):
		case joaat("CLO_X4F_U_10_11"):
		case joaat("CLO_X4F_U_10_10"):
		case joaat("CLO_X4F_U_10_9"):
		case joaat("CLO_X4F_U_10_8"):
		case joaat("CLO_X4F_U_10_7"):
		case joaat("CLO_X4F_U_10_6"):
		case joaat("CLO_X4F_U_10_5"):
		case joaat("CLO_X4F_U_10_4"):
		case joaat("CLO_X4F_U_10_3"):
		case joaat("CLO_X4F_U_10_2"):
		case joaat("CLO_X4F_U_10_1"):
		case joaat("CLO_X4F_U_10_0"):
		case joaat("CLO_X4F_U_9_2"):
		case joaat("CLO_X4F_U_9_1"):
		case joaat("CLO_X4F_U_9_0"):
		case joaat("CLO_X4F_U_8_2"):
		case joaat("CLO_X4F_U_8_1"):
		case joaat("CLO_X4F_U_8_0"):
		case joaat("CLO_X2F_U_0_2"):
		case joaat("CLO_X2F_U_0_1"):
		case joaat("CLO_X2F_U_0_0"):
		case joaat("CLO_X5F_U_16_0"):
		case joaat("CLO_X5F_U_16_1"):
		case joaat("CLO_X5F_U_16_2"):
		case joaat("CLO_X5F_U_16_3"):
		case joaat("CLO_X5F_U_16_4"):
		case joaat("CLO_X5F_U_16_5"):
		case joaat("CLO_X5F_U_16_6"):
		case joaat("CLO_X5F_U_16_7"):
		case joaat("CLO_X5F_U_16_8"):
		case joaat("CLO_X5F_U_16_9"):
		case joaat("CLO_X5F_U_16_10"):
		case joaat("CLO_X5F_U_16_11"):
		case joaat("CLO_X5F_U_16_12"):
		case joaat("CLO_X5F_U_16_13"):
			return 1;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_X3M_U_1_15"):
		case joaat("CLO_X3M_U_1_14"):
		case joaat("CLO_X3M_U_1_13"):
		case joaat("CLO_X3M_U_1_12"):
		case joaat("CLO_X3M_U_1_11"):
		case joaat("CLO_X3M_U_1_10"):
		case joaat("CLO_X3M_U_1_9"):
		case joaat("CLO_X3M_U_1_8"):
		case joaat("CLO_X3M_U_1_7"):
		case joaat("CLO_X3M_U_1_6"):
		case joaat("CLO_X3M_U_1_5"):
		case joaat("CLO_X3M_U_1_4"):
		case joaat("CLO_X3M_U_1_3"):
		case joaat("CLO_X3M_U_1_2"):
		case joaat("CLO_X3M_U_1_1"):
		case joaat("CLO_X3M_U_1_0"):
		case joaat("CLO_X2M_U_1_3"):
		case joaat("CLO_X2M_U_1_2"):
		case joaat("CLO_X2M_U_1_1"):
		case joaat("CLO_X2M_U_1_0"):
		case joaat("CLO_X3F_U_1_15"):
		case joaat("CLO_X3F_U_1_14"):
		case joaat("CLO_X3F_U_1_13"):
		case joaat("CLO_X3F_U_1_12"):
		case joaat("CLO_X3F_U_1_11"):
		case joaat("CLO_X3F_U_1_10"):
		case joaat("CLO_X3F_U_1_9"):
		case joaat("CLO_X3F_U_1_8"):
		case joaat("CLO_X3F_U_1_7"):
		case joaat("CLO_X3F_U_1_6"):
		case joaat("CLO_X3F_U_1_5"):
		case joaat("CLO_X3F_U_1_4"):
		case joaat("CLO_X3F_U_1_3"):
		case joaat("CLO_X3F_U_1_2"):
		case joaat("CLO_X3F_U_1_1"):
		case joaat("CLO_X3F_U_1_0"):
		case joaat("CLO_X2F_U_1_3"):
		case joaat("CLO_X2F_U_1_2"):
		case joaat("CLO_X2F_U_1_1"):
		case joaat("CLO_X2F_U_1_0"):
			return 3;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_XMASM_U_1_1"):
		case joaat("CLO_XMASM_U_1_0"):
		case joaat("CLO_XMASF_U_1_1"):
		case joaat("CLO_XMASF_U_1_0"):
			return 2;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_XMASM_U_0_3"):
		case joaat("CLO_XMASM_U_0_2"):
		case joaat("CLO_XMASM_U_0_1"):
		case joaat("CLO_XMASM_U_0_0"):
		case joaat("CLO_XMASF_U_0_3"):
		case joaat("CLO_XMASF_U_0_2"):
		case joaat("CLO_XMASF_U_0_1"):
		case joaat("CLO_XMASF_U_0_0"):
		case joaat("CLO_FXM_U_10_0"):
		case joaat("CLO_FXM_U_10_1"):
		case joaat("CLO_FXF_U_13_0"):
		case joaat("CLO_FXF_U_13_1"):
		case joaat("CLO_FXF_U_14_0"):
		case joaat("CLO_FXF_U_14_1"):
			return 0;
			break;
	}
	return 0;
}

int func_443(char* sParam0)//Position - 0x124723
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 31;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CLO_HP_D_35"):
		case joaat("CLO_HP_D_34"):
		case joaat("CLO_HP_D_32"):
		case joaat("CLO_HP_D_29"):
		case joaat("CLO_HP_D_27"):
		case joaat("CLO_HP_D_36"):
		case joaat("CLO_HP_D_28"):
		case joaat("CLO_HP_F_D_35"):
		case joaat("CLO_HP_F_D_34"):
		case joaat("CLO_HP_F_D_32"):
		case joaat("CLO_HP_F_D_29"):
		case joaat("CLO_HP_F_D_27"):
		case joaat("CLO_HP_F_D_28"):
		case joaat("CLO_HP_F_D_36"):
			return 9;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_BIM_DECL_66"):
		case joaat("CLO_BIM_DECL_65"):
		case joaat("CLO_BIM_DECL_64"):
		case joaat("CLO_BIM_DECL_63"):
		case joaat("CLO_BIM_DECL_62"):
		case joaat("CLO_BIM_DECL_61"):
		case joaat("CLO_BIM_DECL_60"):
		case joaat("CLO_BIM_DECL_59"):
		case joaat("CLO_BIM_DECL_58"):
		case joaat("CLO_BIM_DECL_55"):
		case joaat("CLO_BIM_DECL_54"):
		case joaat("CLO_BIM_DECL_53"):
		case joaat("CLO_BIM_DECL_49"):
		case joaat("CLO_BIM_DECL_47"):
		case joaat("CLO_BIM_DECL_24"):
		case joaat("CLO_BIM_DECL_52"):
		case joaat("CLO_BIM_DECL_51"):
		case joaat("CLO_BIM_DECL_50"):
		case joaat("CLO_BIM_DECL_48"):
		case joaat("CLO_BIM_DECL_25"):
		case joaat("CLO_BIM_DECL_23"):
		case joaat("CLO_BIM_DECL_22"):
		case joaat("CLO_BIF_DECL_66"):
		case joaat("CLO_BIF_DECL_65"):
		case joaat("CLO_BIF_DECL_64"):
		case joaat("CLO_BIF_DECL_63"):
		case joaat("CLO_BIF_DECL_62"):
		case joaat("CLO_BIF_DECL_61"):
		case joaat("CLO_BIF_DECL_60"):
		case joaat("CLO_BIF_DECL_59"):
		case joaat("CLO_BIF_DECL_58"):
		case joaat("CLO_BIF_DECL_52"):
		case joaat("CLO_BIF_DECL_51"):
		case joaat("CLO_BIF_DECL_50"):
		case joaat("CLO_BIF_DECL_48"):
		case joaat("CLO_BIF_DECL_25"):
		case joaat("CLO_BIF_DECL_23"):
		case joaat("CLO_BIF_DECL_22"):
		case joaat("CLO_BIF_DECL_55"):
		case joaat("CLO_BIF_DECL_54"):
		case joaat("CLO_BIF_DECL_53"):
		case joaat("CLO_BIF_DECL_49"):
		case joaat("CLO_BIF_DECL_47"):
		case joaat("CLO_BIF_DECL_24"):
		case joaat("CLO_EXF_DECL_5"):
		case joaat("CLO_EXM_DECL_5"):
			return 7;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_INDF_D_26"):
		case joaat("CLO_INDM_D_26"):
		case joaat("CLO_LTSM_D_1"):
		case joaat("CLO_LTSF_D_1"):
		case joaat("CLO_EXF_DECL_8"):
		case joaat("CLO_EXF_DECL_6"):
		case joaat("CLO_EXF_DECL_9"):
		case joaat("CLO_EXF_DECL_14"):
		case joaat("CLO_EXF_DECL_11"):
		case joaat("CLO_EXF_DECL_15"):
		case joaat("CLO_EXF_DECL_13"):
		case joaat("CLO_EXF_DECL_12"):
		case joaat("CLO_EXF_DECL_4"):
		case joaat("CLO_EXF_DECL_3"):
		case joaat("CLO_EXF_DECL_2"):
		case joaat("CLO_EXF_DECL_16"):
		case joaat("CLO_EXF_DECL_7"):
		case joaat("CLO_HP_D_24"):
		case joaat("CLO_EXM_DECL_15"):
		case joaat("CLO_EXM_DECL_14"):
		case joaat("CLO_EXM_DECL_11"):
		case joaat("CLO_EXM_DECL_9"):
		case joaat("CLO_EXM_DECL_8"):
		case joaat("CLO_EXM_DECL_6"):
		case joaat("CLO_HP_D_31"):
		case joaat("CLO_HP_D_30"):
		case joaat("CLO_HP_F_D_24"):
		case joaat("CLO_HP_F_D_26"):
		case joaat("CLO_HP_F_D_25"):
		case joaat("CLO_HP_D_26"):
		case joaat("CLO_HP_D_25"):
		case joaat("CLO_EXM_DECL_13"):
		case joaat("CLO_EXM_DECL_12"):
		case joaat("CLO_EXM_DECL_4"):
		case joaat("CLO_EXM_DECL_3"):
		case joaat("CLO_EXM_DECL_2"):
		case joaat("CLO_HP_D_33"):
		case joaat("CLO_HP_D_23"):
		case joaat("CLO_EXM_DECL_16"):
		case joaat("CLO_EXM_DECL_7"):
		case joaat("CLO_HP_F_D_33"):
		case joaat("CLO_HP_F_D_23"):
		case joaat("CLO_HP_F_D_31"):
		case joaat("CLO_HP_F_D_30"):
			return 1;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_LXM_DEC_36"):
		case joaat("CLO_LXM_DEC_35"):
		case joaat("CLO_LXM_DEC_34"):
		case joaat("CLO_LXM_DEC_33"):
		case joaat("CLO_LXM_DEC_32"):
		case joaat("CLO_LXM_DEC_31"):
		case joaat("CLO_LXM_DEC_30"):
		case joaat("CLO_LXM_DEC_29"):
		case joaat("CLO_LXF_DEC_38"):
		case joaat("CLO_LXF_DEC_37"):
		case joaat("CLO_LXF_DEC_36"):
		case joaat("CLO_LXF_DEC_35"):
		case joaat("CLO_LXF_DEC_34"):
		case joaat("CLO_LXF_DEC_33"):
		case joaat("CLO_LXF_DEC_32"):
		case joaat("CLO_LXF_DEC_31"):
		case joaat("CLO_LXF_DEC_30"):
		case joaat("CLO_LXF_DEC_29"):
		case joaat("CLO_LXM_DEC_38"):
		case joaat("CLO_LXM_DEC_37"):
			return 6;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_HALM_D_10"):
		case joaat("CLO_HALM_D_9"):
		case joaat("CLO_HALM_D_8"):
		case joaat("CLO_HALM_D_7"):
		case joaat("CLO_HALM_D_6"):
		case joaat("CLO_HALM_D_5"):
		case joaat("CLO_HALM_D_3"):
		case joaat("CLO_HALM_D_0"):
		case joaat("CLO_VEM_DEC_47"):
		case joaat("CLO_VEM_DEC_46"):
		case joaat("CLO_VEM_DEC_44"):
		case joaat("CLO_VEM_DEC_43"):
		case joaat("CLO_VEM_DEC_42"):
		case joaat("CLO_VEM_DEC_40"):
		case joaat("CLO_VEM_DEC_39"):
		case joaat("CLO_EXM_DECL_10"):
		case joaat("CLO_HALM_D_12"):
		case joaat("CLO_HALM_D_11"):
		case joaat("CLO_HALM_D_4"):
		case joaat("CLO_HALM_D_2"):
		case joaat("CLO_HALM_D_1"):
		case joaat("CLO_VEM_DEC_45"):
		case joaat("CLO_VEM_DEC_41"):
		case joaat("CLO_HALF_D_12"):
		case joaat("CLO_HALF_D_11"):
		case joaat("CLO_HALF_D_4"):
		case joaat("CLO_HALF_D_2"):
		case joaat("CLO_HALF_D_1"):
		case joaat("CLO_VEF_DEC_48"):
		case joaat("CLO_VEF_DEC_45"):
		case joaat("CLO_VEF_DEC_41"):
		case joaat("CLO_EXF_DECL_10"):
		case joaat("CLO_HALF_D_10"):
		case joaat("CLO_HALF_D_9"):
		case joaat("CLO_HALF_D_8"):
		case joaat("CLO_HALF_D_7"):
		case joaat("CLO_HALF_D_6"):
		case joaat("CLO_HALF_D_5"):
		case joaat("CLO_HALF_D_3"):
		case joaat("CLO_HALF_D_0"):
		case joaat("CLO_VEF_DEC_47"):
		case joaat("CLO_VEF_DEC_46"):
		case joaat("CLO_VEF_DEC_44"):
		case joaat("CLO_VEF_DEC_43"):
		case joaat("CLO_VEF_DEC_42"):
		case joaat("CLO_VEF_DEC_40"):
		case joaat("CLO_VEF_DEC_39"):
		case joaat("CLO_VEM_DEC_48"):
			return 8;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_BHM_DECL_0"):
		case joaat("CLO_BHF_DECL_0"):
			return 11;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_BHM_DECL_1"):
		case joaat("CLO_BHM_DECL_2"):
		case joaat("CLO_BHM_DECL_3"):
		case joaat("CLO_BHM_DECL_4"):
		case joaat("CLO_BHM_DECL_5"):
		case joaat("CLO_BHM_DECL_6"):
		case joaat("CLO_BHM_DECL_7"):
		case joaat("CLO_BHM_DECL_8"):
		case joaat("CLO_BHM_DECL_9"):
		case joaat("CLO_BHM_DECL_10"):
		case joaat("CLO_BHM_DECL_11"):
		case joaat("CLO_BHM_DECL_12"):
		case joaat("CLO_BHM_DECL_13"):
		case joaat("CLO_BHM_DECL_14"):
		case joaat("CLO_BHM_DECL_15"):
		case joaat("CLO_BHM_DECL_16"):
		case joaat("CLO_BHM_DECL_17"):
		case joaat("CLO_BHM_DECL_18"):
		case joaat("CLO_BHM_DECL_19"):
		case joaat("CLO_BHM_DECL_20"):
		case joaat("CLO_BHF_DECL_1"):
		case joaat("CLO_BHF_DECL_2"):
		case joaat("CLO_BHF_DECL_3"):
		case joaat("CLO_BHF_DECL_4"):
		case joaat("CLO_BHF_DECL_5"):
		case joaat("CLO_BHF_DECL_6"):
		case joaat("CLO_BHF_DECL_7"):
		case joaat("CLO_BHF_DECL_8"):
		case joaat("CLO_BHF_DECL_9"):
		case joaat("CLO_BHF_DECL_10"):
		case joaat("CLO_BHF_DECL_11"):
		case joaat("CLO_BHF_DECL_12"):
		case joaat("CLO_BHF_DECL_13"):
		case joaat("CLO_BHF_DECL_14"):
		case joaat("CLO_BHF_DECL_15"):
		case joaat("CLO_BHF_DECL_16"):
		case joaat("CLO_BHF_DECL_17"):
		case joaat("CLO_BHF_DECL_18"):
		case joaat("CLO_BHF_DECL_19"):
		case joaat("CLO_BHF_DECL_20"):
			return 9;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_BHM_DECL_21"):
		case joaat("CLO_BHM_DECL_22"):
		case joaat("CLO_BHM_DECL_23"):
		case joaat("CLO_BHM_DECL_24"):
		case joaat("CLO_BHM_DECL_25"):
		case joaat("CLO_BHM_DECL_26"):
		case joaat("CLO_BHM_DECL_27"):
		case joaat("CLO_BHM_DECL_28"):
		case joaat("CLO_BHM_DECL_29"):
		case joaat("CLO_BHF_DECL_21"):
		case joaat("CLO_BHF_DECL_22"):
		case joaat("CLO_BHF_DECL_23"):
		case joaat("CLO_BHF_DECL_24"):
		case joaat("CLO_BHF_DECL_25"):
		case joaat("CLO_BHF_DECL_26"):
		case joaat("CLO_BHF_DECL_27"):
		case joaat("CLO_BHF_DECL_28"):
		case joaat("CLO_BHF_DECL_29"):
			return 3;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_BHF_DECL_30"):
		case joaat("CLO_BHF_DECL_31"):
		case joaat("CLO_BHF_DECL_32"):
		case joaat("CLO_BHF_DECL_33"):
		case joaat("CLO_BHF_DECL_34"):
		case joaat("CLO_BHF_DECL_35"):
		case joaat("CLO_BHF_DECL_36"):
		case joaat("CLO_BHF_DECL_37"):
		case joaat("CLO_BHF_DECL_38"):
		case joaat("CLO_BHF_DECL_39"):
		case joaat("CLO_BHF_DECL_40"):
		case joaat("CLO_BHF_DECL_41"):
		case joaat("CLO_BHF_DECL_42"):
		case joaat("CLO_BHF_DECL_43"):
		case joaat("CLO_BHF_DECL_44"):
		case joaat("CLO_BHF_DECL_45"):
		case joaat("CLO_BHF_DECL_46"):
		case joaat("CLO_BHF_DECL_47"):
		case joaat("CLO_BHF_DECL_48"):
		case joaat("CLO_BHF_DECL_49"):
		case joaat("CLO_BHF_DECL_50"):
		case joaat("CLO_BHF_DECL_51"):
		case joaat("CLO_BHF_DECL_52"):
		case joaat("CLO_BHF_DECL_53"):
		case joaat("CLO_BHF_DECL_54"):
		case joaat("CLO_BHF_DECL_55"):
		case joaat("CLO_BHF_DECL_56"):
		case joaat("CLO_BHF_DECL_57"):
		case joaat("CLO_BHF_DECL_58"):
		case joaat("CLO_BHF_DECL_59"):
		case joaat("CLO_BHF_DECL_60"):
		case joaat("CLO_BHF_DECL_61"):
		case joaat("CLO_BHM_DECL_30"):
		case joaat("CLO_BHM_DECL_31"):
		case joaat("CLO_BHM_DECL_32"):
		case joaat("CLO_BHM_DECL_33"):
		case joaat("CLO_BHM_DECL_34"):
		case joaat("CLO_BHM_DECL_35"):
		case joaat("CLO_BHM_DECL_36"):
		case joaat("CLO_BHM_DECL_37"):
		case joaat("CLO_BHM_DECL_38"):
		case joaat("CLO_BHM_DECL_39"):
		case joaat("CLO_BHM_DECL_40"):
		case joaat("CLO_BHM_DECL_41"):
		case joaat("CLO_BHM_DECL_42"):
		case joaat("CLO_BHM_DECL_43"):
		case joaat("CLO_BHM_DECL_44"):
		case joaat("CLO_BHM_DECL_45"):
		case joaat("CLO_BHM_DECL_46"):
		case joaat("CLO_BHM_DECL_47"):
		case joaat("CLO_BHM_DECL_48"):
		case joaat("CLO_BHM_DECL_49"):
		case joaat("CLO_BHM_DECL_50"):
		case joaat("CLO_BHM_DECL_51"):
		case joaat("CLO_BHM_DECL_52"):
		case joaat("CLO_BHM_DECL_53"):
		case joaat("CLO_BHM_DECL_54"):
		case joaat("CLO_BHM_DECL_55"):
		case joaat("CLO_BHM_DECL_56"):
		case joaat("CLO_BHM_DECL_57"):
		case joaat("CLO_BHM_DECL_58"):
		case joaat("CLO_BHM_DECL_59"):
		case joaat("CLO_BHM_DECL_60"):
		case joaat("CLO_BHM_DECL_61"):
			return 4;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_AWM_DECL_0"):
		case joaat("CLO_AWM_DECL_1"):
		case joaat("CLO_AWM_DECL_2"):
		case joaat("CLO_AWM_DECL_3"):
		case joaat("CLO_AWM_DECL_4"):
		case joaat("CLO_AWM_DECL_5"):
		case joaat("CLO_AWM_DECL_6"):
		case joaat("CLO_AWM_DECL_7"):
		case joaat("CLO_AWM_DECL_8"):
		case joaat("CLO_AWM_DECL_9"):
		case joaat("CLO_AWM_DECL_10"):
		case joaat("CLO_AWM_DECL_11"):
		case joaat("CLO_AWM_DECL_12"):
		case joaat("CLO_AWM_DECL_13"):
		case joaat("CLO_AWM_DECL_14"):
		case joaat("CLO_AWM_DECL_15"):
		case joaat("CLO_AWM_DECL_16"):
		case joaat("CLO_AWM_DECL_17"):
		case joaat("CLO_AWM_DECL_18"):
		case joaat("CLO_AWM_DECL_19"):
		case joaat("CLO_AWM_DECL_20"):
		case joaat("CLO_AWM_DECL_21"):
		case joaat("CLO_AWM_DECL_22"):
		case joaat("CLO_AWM_DECL_23"):
		case joaat("CLO_AWM_DECL_24"):
		case joaat("CLO_AWM_DECL_25"):
		case joaat("CLO_AWM_DECL_26"):
		case joaat("CLO_AWM_DECL_27"):
		case joaat("CLO_AWM_DECL_28"):
		case joaat("CLO_AWM_DECL_29"):
		case joaat("CLO_AWM_DECL_30"):
		case joaat("CLO_AWM_DECL_31"):
		case joaat("CLO_AWM_DECL_32"):
		case joaat("CLO_AWM_DECL_33"):
		case joaat("CLO_AWM_DECL_34"):
		case joaat("CLO_AWM_DECL_35"):
		case joaat("CLO_AWM_DECL_36"):
		case joaat("CLO_AWM_DECL_37"):
		case joaat("CLO_AWM_DECL_38"):
		case joaat("CLO_AWM_DECL_39"):
		case joaat("CLO_AWM_DECL_40"):
		case joaat("CLO_AWM_DECL_41"):
		case joaat("CLO_AWM_DECL_42"):
		case joaat("CLO_AWM_DECL_43"):
		case joaat("CLO_AWM_DECL_44"):
		case joaat("CLO_AWM_DECL_45"):
		case joaat("CLO_AWM_DECL_46"):
		case joaat("CLO_AWM_DECL_47"):
		case joaat("CLO_AWM_DECL_48"):
		case joaat("CLO_AWM_DECL_49"):
		case joaat("CLO_AWM_DECL_50"):
		case joaat("CLO_AWM_DECL_51"):
		case joaat("CLO_AWM_DECL_52"):
		case joaat("CLO_AWM_DECL_53"):
		case joaat("CLO_AWM_DECL_54"):
		case joaat("CLO_AWM_DECL_55"):
		case joaat("CLO_AWM_DECL_56"):
		case joaat("CLO_AWM_DECL_57"):
		case joaat("CLO_AWM_DECL_58"):
		case joaat("CLO_AWM_DECL_59"):
		case joaat("CLO_AWM_DECL_60"):
		case joaat("CLO_AWM_DECL_61"):
		case joaat("CLO_AWM_DECL_62"):
		case joaat("CLO_AWM_DECL_63"):
		case joaat("CLO_AWM_DECL_64"):
		case joaat("CLO_AWM_DECL_65"):
		case joaat("CLO_AWM_DECL_66"):
		case joaat("CLO_AWM_DECL_67"):
		case joaat("CLO_AWF_DECL_0"):
		case joaat("CLO_AWF_DECL_1"):
		case joaat("CLO_AWF_DECL_2"):
		case joaat("CLO_AWF_DECL_3"):
		case joaat("CLO_AWF_DECL_4"):
		case joaat("CLO_AWF_DECL_5"):
		case joaat("CLO_AWF_DECL_6"):
		case joaat("CLO_AWF_DECL_7"):
		case joaat("CLO_AWF_DECL_8"):
		case joaat("CLO_AWF_DECL_9"):
		case joaat("CLO_AWF_DECL_10"):
		case joaat("CLO_AWF_DECL_11"):
		case joaat("CLO_AWF_DECL_12"):
		case joaat("CLO_AWF_DECL_13"):
		case joaat("CLO_AWF_DECL_14"):
		case joaat("CLO_AWF_DECL_15"):
		case joaat("CLO_AWF_DECL_16"):
		case joaat("CLO_AWF_DECL_17"):
		case joaat("CLO_AWF_DECL_18"):
		case joaat("CLO_AWF_DECL_19"):
		case joaat("CLO_AWF_DECL_20"):
		case joaat("CLO_AWF_DECL_21"):
		case joaat("CLO_AWF_DECL_22"):
		case joaat("CLO_AWF_DECL_23"):
		case joaat("CLO_AWF_DECL_24"):
		case joaat("CLO_AWF_DECL_25"):
		case joaat("CLO_AWF_DECL_26"):
		case joaat("CLO_AWF_DECL_27"):
		case joaat("CLO_AWF_DECL_28"):
		case joaat("CLO_AWF_DECL_29"):
		case joaat("CLO_AWF_DECL_30"):
		case joaat("CLO_AWF_DECL_31"):
		case joaat("CLO_AWF_DECL_32"):
		case joaat("CLO_AWF_DECL_33"):
		case joaat("CLO_AWF_DECL_34"):
		case joaat("CLO_AWF_DECL_35"):
		case joaat("CLO_AWF_DECL_36"):
		case joaat("CLO_AWF_DECL_37"):
		case joaat("CLO_AWF_DECL_38"):
		case joaat("CLO_AWF_DECL_39"):
		case joaat("CLO_AWF_DECL_40"):
		case joaat("CLO_AWF_DECL_41"):
		case joaat("CLO_AWF_DECL_42"):
		case joaat("CLO_AWF_DECL_43"):
		case joaat("CLO_AWF_DECL_44"):
		case joaat("CLO_AWF_DECL_45"):
		case joaat("CLO_AWF_DECL_46"):
		case joaat("CLO_AWF_DECL_47"):
		case joaat("CLO_AWF_DECL_48"):
		case joaat("CLO_AWF_DECL_49"):
		case joaat("CLO_AWF_DECL_50"):
		case joaat("CLO_AWF_DECL_51"):
		case joaat("CLO_AWF_DECL_52"):
		case joaat("CLO_AWF_DECL_53"):
		case joaat("CLO_AWF_DECL_54"):
		case joaat("CLO_AWF_DECL_55"):
		case joaat("CLO_AWF_DECL_56"):
		case joaat("CLO_AWF_DECL_57"):
		case joaat("CLO_AWF_DECL_58"):
		case joaat("CLO_AWF_DECL_59"):
		case joaat("CLO_AWF_DECL_60"):
		case joaat("CLO_AWF_DECL_61"):
		case joaat("CLO_AWF_DECL_62"):
		case joaat("CLO_AWF_DECL_63"):
		case joaat("CLO_AWF_DECL_64"):
		case joaat("CLO_AWF_DECL_65"):
		case joaat("CLO_AWF_DECL_66"):
		case joaat("CLO_AWF_DECL_67"):
			return 7;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_VWM_DECL_2"):
		case joaat("CLO_VWM_DECL_4"):
		case joaat("CLO_VWM_DECL_6"):
		case joaat("CLO_VWM_DECL_10"):
		case joaat("CLO_VWM_DECL_21"):
		case joaat("CLO_VWM_DECL_22"):
		case joaat("CLO_VWM_DECL_23"):
		case joaat("CLO_VWF_DECL_2"):
		case joaat("CLO_VWF_DECL_4"):
		case joaat("CLO_VWF_DECL_6"):
		case joaat("CLO_VWF_DECL_10"):
		case joaat("CLO_VWF_DECL_21"):
		case joaat("CLO_VWF_DECL_22"):
		case joaat("CLO_VWF_DECL_23"):
			return 2;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_VWM_DECL_24"):
		case joaat("CLO_VWM_DECL_25"):
		case joaat("CLO_VWM_DECL_26"):
		case joaat("CLO_VWM_DECL_27"):
		case joaat("CLO_VWM_DECL_28"):
		case joaat("CLO_VWM_DECL_29"):
		case joaat("CLO_VWM_DECL_30"):
		case joaat("CLO_VWM_DECL_31"):
		case joaat("CLO_VWM_DECL_32"):
		case joaat("CLO_VWM_DECL_33"):
		case joaat("CLO_VWM_DECL_34"):
		case joaat("CLO_VWM_DECL_35"):
		case joaat("CLO_VWM_DECL_36"):
		case joaat("CLO_VWM_DECL_37"):
		case joaat("CLO_VWM_DECL_38"):
		case joaat("CLO_VWM_DECL_39"):
		case joaat("CLO_VWM_DECL_40"):
		case joaat("CLO_VWM_DECL_41"):
		case joaat("CLO_VWM_DECL_42"):
		case joaat("CLO_VWM_DECL_43"):
		case joaat("CLO_VWM_DECL_44"):
		case joaat("CLO_VWF_DECL_24"):
		case joaat("CLO_VWF_DECL_25"):
		case joaat("CLO_VWF_DECL_26"):
		case joaat("CLO_VWF_DECL_27"):
		case joaat("CLO_VWF_DECL_28"):
		case joaat("CLO_VWF_DECL_29"):
		case joaat("CLO_VWF_DECL_30"):
		case joaat("CLO_VWF_DECL_31"):
		case joaat("CLO_VWF_DECL_32"):
		case joaat("CLO_VWF_DECL_33"):
		case joaat("CLO_VWF_DECL_34"):
		case joaat("CLO_VWF_DECL_35"):
		case joaat("CLO_VWF_DECL_36"):
		case joaat("CLO_VWF_DECL_37"):
		case joaat("CLO_VWF_DECL_38"):
		case joaat("CLO_VWF_DECL_39"):
		case joaat("CLO_VWF_DECL_40"):
		case joaat("CLO_VWF_DECL_41"):
		case joaat("CLO_VWF_DECL_42"):
		case joaat("CLO_VWF_DECL_43"):
		case joaat("CLO_VWF_DECL_44"):
			return 5;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_VWM_D_1_0"):
		case joaat("CLO_VWM_D_1_1"):
		case joaat("CLO_VWM_D_1_2"):
		case joaat("CLO_VWM_D_1_3"):
		case joaat("CLO_VWM_D_1_4"):
		case joaat("CLO_VWM_D_1_5"):
		case joaat("CLO_VWM_D_1_6"):
		case joaat("CLO_VWM_D_1_7"):
		case joaat("CLO_VWM_D_1_8"):
		case joaat("CLO_VWM_D_1_9"):
		case joaat("CLO_VWM_D_1_10"):
		case joaat("CLO_VWM_D_1_11"):
		case joaat("CLO_VWM_D_1_12"):
		case joaat("CLO_VWM_D_1_13"):
		case joaat("CLO_VWM_D_1_14"):
		case joaat("CLO_VWM_D_1_15"):
		case joaat("CLO_VWM_D_1_16"):
		case joaat("CLO_VWM_D_1_17"):
		case joaat("CLO_VWM_D_1_18"):
		case joaat("CLO_VWM_U_23_0"):
		case joaat("CLO_VWM_U_23_1"):
		case joaat("CLO_VWM_U_23_2"):
		case joaat("CLO_VWM_U_23_3"):
		case joaat("CLO_VWM_U_23_4"):
		case joaat("CLO_VWM_U_23_5"):
		case joaat("CLO_VWM_U_23_6"):
		case joaat("CLO_VWM_U_23_7"):
		case joaat("CLO_VWM_U_23_8"):
		case joaat("CLO_VWM_U_23_9"):
		case joaat("CLO_VWM_U_23_10"):
		case joaat("CLO_VWF_D_1_0"):
		case joaat("CLO_VWF_D_1_1"):
		case joaat("CLO_VWF_D_1_2"):
		case joaat("CLO_VWF_D_1_3"):
		case joaat("CLO_VWF_D_1_4"):
		case joaat("CLO_VWF_D_1_5"):
		case joaat("CLO_VWF_D_1_6"):
		case joaat("CLO_VWF_D_1_7"):
		case joaat("CLO_VWF_D_1_8"):
		case joaat("CLO_VWF_D_1_9"):
		case joaat("CLO_VWF_D_1_10"):
		case joaat("CLO_VWF_D_1_11"):
		case joaat("CLO_VWF_D_1_12"):
		case joaat("CLO_VWF_D_1_13"):
		case joaat("CLO_VWF_D_1_14"):
		case joaat("CLO_VWF_D_1_15"):
		case joaat("CLO_VWF_D_1_16"):
		case joaat("CLO_VWF_D_1_17"):
		case joaat("CLO_VWF_D_1_18"):
		case joaat("CLO_VWF_U_21_0"):
		case joaat("CLO_VWF_U_21_1"):
		case joaat("CLO_VWF_U_21_2"):
		case joaat("CLO_VWF_U_21_3"):
		case joaat("CLO_VWF_U_21_4"):
		case joaat("CLO_VWF_U_21_5"):
		case joaat("CLO_VWF_U_21_6"):
		case joaat("CLO_VWF_U_21_7"):
		case joaat("CLO_VWF_U_21_8"):
		case joaat("CLO_VWF_U_21_9"):
		case joaat("CLO_VWF_U_21_10"):
			return 0;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_H3F_U_10_2"):
		case joaat("CLO_H3F_U_10_3"):
		case joaat("CLO_H3F_U_10_4"):
		case joaat("CLO_H3F_U_10_5"):
		case joaat("CLO_H3F_U_10_6"):
		case joaat("CLO_H3F_U_10_7"):
		case joaat("CLO_H3F_U_10_8"):
		case joaat("CLO_H3F_U_10_9"):
		case joaat("CLO_H3F_U_10_10"):
		case joaat("CLO_H3F_U_10_11"):
		case joaat("CLO_H3F_U_10_12"):
		case joaat("CLO_H3F_U_10_13"):
		case joaat("CLO_H3F_U_10_14"):
		case joaat("CLO_H3F_U_10_15"):
		case joaat("CLO_H3F_U_10_16"):
		case joaat("CLO_H3F_U_10_17"):
		case joaat("CLO_H3F_U_10_18"):
		case joaat("CLO_H3F_U_10_19"):
		case joaat("CLO_H3F_U_10_20"):
		case joaat("CLO_H3F_U_10_21"):
		case joaat("CLO_H3F_U_10_22"):
		case joaat("CLO_H3F_U_10_23"):
		case joaat("CLO_H3F_U_10_24"):
		case joaat("CLO_H3F_U_12_0"):
		case joaat("CLO_H3F_U_12_1"):
		case joaat("CLO_H3F_U_12_2"):
		case joaat("CLO_H3F_U_12_3"):
		case joaat("CLO_H3F_U_12_4"):
		case joaat("CLO_H3F_U_12_5"):
		case joaat("CLO_H3F_U_13_11"):
		case joaat("CLO_H3F_U_13_12"):
		case joaat("CLO_H3F_U_13_13"):
		case joaat("CLO_H3F_U_13_14"):
		case joaat("CLO_H3F_U_13_15"):
		case joaat("CLO_H3M_U_9_2"):
		case joaat("CLO_H3M_U_9_3"):
		case joaat("CLO_H3M_U_9_4"):
		case joaat("CLO_H3M_U_9_5"):
		case joaat("CLO_H3M_U_9_6"):
		case joaat("CLO_H3M_U_9_7"):
		case joaat("CLO_H3M_U_9_8"):
		case joaat("CLO_H3M_U_9_9"):
		case joaat("CLO_H3M_U_9_10"):
		case joaat("CLO_H3M_U_9_11"):
		case joaat("CLO_H3M_U_9_12"):
		case joaat("CLO_H3M_U_9_13"):
		case joaat("CLO_H3M_U_9_14"):
		case joaat("CLO_H3M_U_9_15"):
		case joaat("CLO_H3M_U_9_16"):
		case joaat("CLO_H3M_U_9_17"):
		case joaat("CLO_H3M_U_9_18"):
		case joaat("CLO_H3M_U_9_19"):
		case joaat("CLO_H3M_U_9_20"):
		case joaat("CLO_H3M_U_9_21"):
		case joaat("CLO_H3M_U_9_22"):
		case joaat("CLO_H3M_U_9_23"):
		case joaat("CLO_H3M_U_9_24"):
		case joaat("CLO_H3M_U_11_0"):
		case joaat("CLO_H3M_U_11_1"):
		case joaat("CLO_H3M_U_11_2"):
		case joaat("CLO_H3M_U_11_3"):
		case joaat("CLO_H3M_U_11_4"):
		case joaat("CLO_H3M_U_11_5"):
		case joaat("CLO_H3M_U_11_19"):
		case joaat("CLO_H3M_U_11_20"):
		case joaat("CLO_H3M_U_11_21"):
		case joaat("CLO_H3M_U_11_22"):
		case joaat("CLO_H3M_U_11_23"):
		case joaat("CLO_H3F_DECL_0"):
		case joaat("CLO_H3F_DECL_1"):
		case joaat("CLO_H3F_DECL_2"):
		case joaat("CLO_H3F_DECL_3"):
		case joaat("CLO_H3F_DECL_4"):
		case joaat("CLO_H3F_DECL_5"):
		case joaat("CLO_H3F_DECL_6"):
		case joaat("CLO_H3F_DECL_7"):
		case joaat("CLO_H3F_DECL_8"):
		case joaat("CLO_H3F_DECL_9"):
		case joaat("CLO_H3F_DECL_10"):
		case joaat("CLO_H3F_DECL_11"):
		case joaat("CLO_H3F_DECL_12"):
		case joaat("CLO_H3F_DECL_13"):
		case joaat("CLO_H3F_DECL_14"):
		case joaat("CLO_H3F_DECL_15"):
		case joaat("CLO_H3F_DECL_16"):
		case joaat("CLO_H3F_DECL_17"):
		case joaat("CLO_H3F_DECL_18"):
		case joaat("CLO_H3F_DECL_19"):
		case joaat("CLO_H3F_DECL_20"):
		case joaat("CLO_H3F_DECL_21"):
		case joaat("CLO_H3F_DECL_22"):
		case joaat("CLO_H3F_DECL_23"):
		case joaat("CLO_H3M_DECL_0"):
		case joaat("CLO_H3M_DECL_1"):
		case joaat("CLO_H3M_DECL_2"):
		case joaat("CLO_H3M_DECL_3"):
		case joaat("CLO_H3M_DECL_4"):
		case joaat("CLO_H3M_DECL_5"):
		case joaat("CLO_H3M_DECL_6"):
		case joaat("CLO_H3M_DECL_7"):
		case joaat("CLO_H3M_DECL_8"):
		case joaat("CLO_H3M_DECL_9"):
		case joaat("CLO_H3M_DECL_10"):
		case joaat("CLO_H3M_DECL_11"):
		case joaat("CLO_H3M_DECL_12"):
		case joaat("CLO_H3M_DECL_13"):
		case joaat("CLO_H3M_DECL_14"):
		case joaat("CLO_H3M_DECL_15"):
		case joaat("CLO_H3M_DECL_16"):
		case joaat("CLO_H3M_DECL_17"):
		case joaat("CLO_H3M_DECL_18"):
		case joaat("CLO_H3M_DECL_19"):
		case joaat("CLO_H3M_DECL_20"):
		case joaat("CLO_H3M_DECL_21"):
		case joaat("CLO_H3M_DECL_22"):
		case joaat("CLO_H3M_DECL_23"):
			return 0;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_H3F_U_16_0"):
			return 11;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_SUM_U_13_8"):
		case joaat("CLO_SUM_U_13_9"):
		case joaat("CLO_SUM_U_13_10"):
		case joaat("CLO_SUM_DECL_30"):
		case joaat("CLO_SUM_DECL_31"):
		case joaat("CLO_SUM_DECL_32"):
		case joaat("CLO_SUM_DECL_33"):
		case joaat("CLO_SUM_DECL_34"):
		case joaat("CLO_SUF_U_22_0"):
		case joaat("CLO_SUF_U_22_1"):
		case joaat("CLO_SUF_U_22_2"):
		case joaat("CLO_SUF_DECL_30"):
		case joaat("CLO_SUF_DECL_31"):
		case joaat("CLO_SUF_DECL_32"):
		case joaat("CLO_SUF_DECL_33"):
		case joaat("CLO_SUF_DECL_34"):
			return 0;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_H4M_DECL_0"):
		case joaat("CLO_H4M_DECL_1"):
		case joaat("CLO_H4M_DECL_2"):
			return 9;
			break;
		case joaat("CLO_H4M_DECL_3"):
		case joaat("CLO_H4M_DECL_4"):
		case joaat("CLO_H4M_DECL_5"):
		case joaat("CLO_H4M_DECL_6"):
		case joaat("CLO_H4M_DECL_7"):
		case joaat("CLO_H4M_DECL_8"):
		case joaat("CLO_H4M_DECL_9"):
		case joaat("CLO_H4M_DECL_10"):
		case joaat("CLO_H4M_DECL_11"):
		case joaat("CLO_H4M_DECL_12"):
		case joaat("CLO_H4M_DECL_13"):
		case joaat("CLO_H4M_DECL_14"):
		case joaat("CLO_H4M_DECL_15"):
		case joaat("CLO_H4M_DECL_16"):
		case joaat("CLO_H4M_DECL_17"):
		case joaat("CLO_H4M_DECL_18"):
		case joaat("CLO_H4M_DECL_19"):
			return 7;
			break;
		case joaat("CLO_H4M_DECL_20"):
		case joaat("CLO_H4M_DECL_21"):
			return 1;
			break;
		case joaat("CLO_H4M_DECL_22"):
			return 6;
			break;
		case joaat("CLO_H4M_DECL_23"):
			return 8;
			break;
		case joaat("CLO_H4M_DECL_24"):
		case joaat("CLO_H4M_DECL_25"):
		case joaat("CLO_H4M_DECL_26"):
		case joaat("CLO_H4M_DECL_27"):
			return 11;
			break;
		case joaat("CLO_H4M_DECL_28"):
		case joaat("CLO_H4M_DECL_29"):
		case joaat("CLO_H4M_DECL_30"):
		case joaat("CLO_H4M_DECL_31"):
		case joaat("CLO_H4M_DECL_32"):
			return 9;
			break;
		case joaat("CLO_H4M_DECL_33"):
			return 2;
			break;
		case joaat("CLO_H4F_DECL_0"):
		case joaat("CLO_H4F_DECL_1"):
		case joaat("CLO_H4F_DECL_2"):
			return 9;
			break;
		case joaat("CLO_H4F_DECL_3"):
		case joaat("CLO_H4F_DECL_4"):
		case joaat("CLO_H4F_DECL_5"):
		case joaat("CLO_H4F_DECL_6"):
		case joaat("CLO_H4F_DECL_7"):
		case joaat("CLO_H4F_DECL_8"):
		case joaat("CLO_H4F_DECL_9"):
		case joaat("CLO_H4F_DECL_10"):
		case joaat("CLO_H4F_DECL_11"):
		case joaat("CLO_H4F_DECL_12"):
		case joaat("CLO_H4F_DECL_13"):
		case joaat("CLO_H4F_DECL_14"):
		case joaat("CLO_H4F_DECL_15"):
		case joaat("CLO_H4F_DECL_16"):
		case joaat("CLO_H4F_DECL_17"):
		case joaat("CLO_H4F_DECL_18"):
		case joaat("CLO_H4F_DECL_19"):
			return 7;
			break;
		case joaat("CLO_H4F_DECL_20"):
		case joaat("CLO_H4F_DECL_21"):
			return 1;
			break;
		case joaat("CLO_H4F_DECL_22"):
			return 6;
			break;
		case joaat("CLO_H4F_DECL_23"):
			return 8;
			break;
		case joaat("CLO_H4F_DECL_24"):
		case joaat("CLO_H4F_DECL_25"):
		case joaat("CLO_H4F_DECL_26"):
		case joaat("CLO_H4F_DECL_27"):
			return 11;
			break;
		case joaat("CLO_H4F_DECL_28"):
		case joaat("CLO_H4F_DECL_29"):
		case joaat("CLO_H4F_DECL_30"):
		case joaat("CLO_H4F_DECL_31"):
		case joaat("CLO_H4F_DECL_32"):
			return 9;
			break;
		case joaat("CLO_H4F_DECL_33"):
			return 2;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_H4M_DECL_49"):
		case joaat("CLO_H4M_DECL_51"):
		case joaat("CLO_H4M_DECL_53"):
		case joaat("CLO_H4M_DECL_54"):
		case joaat("CLO_H4M_DECL_55"):
		case joaat("CLO_H4M_DECL_57"):
		case joaat("CLO_H4M_DECL_59"):
		case joaat("CLO_H4M_DECL_61"):
		case joaat("CLO_H4M_DECL_63"):
		case joaat("CLO_H4M_DECL_65"):
		case joaat("CLO_H4F_DECL_49"):
		case joaat("CLO_H4F_DECL_51"):
		case joaat("CLO_H4F_DECL_53"):
		case joaat("CLO_H4F_DECL_54"):
		case joaat("CLO_H4F_DECL_55"):
		case joaat("CLO_H4F_DECL_57"):
		case joaat("CLO_H4F_DECL_59"):
		case joaat("CLO_H4F_DECL_61"):
		case joaat("CLO_H4F_DECL_63"):
		case joaat("CLO_H4F_DECL_65"):
			return 4;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_TRM_DECL_0"):
		case joaat("CLO_TRM_DECL_2"):
		case joaat("CLO_TRM_DECL_3"):
		case joaat("CLO_TRM_DECL_5"):
		case joaat("CLO_TRM_DECL_6"):
		case joaat("CLO_TRF_DECL_0"):
		case joaat("CLO_TRF_DECL_2"):
		case joaat("CLO_TRF_DECL_3"):
		case joaat("CLO_TRF_DECL_5"):
		case joaat("CLO_TRF_DECL_6"):
			return 0;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_TRM_DECL_8"):
		case joaat("CLO_TRM_DECL_10"):
		case joaat("CLO_TRM_DECL_11"):
		case joaat("CLO_TRM_DECL_12"):
		case joaat("CLO_TRM_DECL_13"):
		case joaat("CLO_TRM_DECL_14"):
		case joaat("CLO_TRM_DECL_15"):
		case joaat("CLO_TRM_DECL_16"):
		case joaat("CLO_TRF_DECL_8"):
		case joaat("CLO_TRF_DECL_10"):
		case joaat("CLO_TRF_DECL_11"):
		case joaat("CLO_TRF_DECL_12"):
		case joaat("CLO_TRF_DECL_13"):
		case joaat("CLO_TRF_DECL_14"):
		case joaat("CLO_TRF_DECL_15"):
		case joaat("CLO_TRF_DECL_16"):
			return 11;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_FXM_U_10_2"):
		case joaat("CLO_FXM_U_10_3"):
		case joaat("CLO_FXM_U_10_4"):
		case joaat("CLO_FXF_U_13_2"):
		case joaat("CLO_FXF_U_13_3"):
		case joaat("CLO_FXF_U_13_4"):
		case joaat("CLO_FXF_U_14_2"):
		case joaat("CLO_FXF_U_14_3"):
		case joaat("CLO_FXF_U_14_4"):
			return 4;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_SBM_DECL_0"):
		case joaat("CLO_SBM_DECL_1"):
		case joaat("CLO_SBF_DECL_0"):
		case joaat("CLO_SBF_DECL_1"):
			return 1;
			break;
		case joaat("CLO_SBM_U_13_0"):
		case joaat("CLO_SBF_U_15_0"):
		case joaat("CLO_SBF_U_16_0"):
			return 10;
			break;
	}
	return 11;
}

int func_444(int iParam0, int iParam1)//Position - 0x125BF8
{
	if (iParam1 == Global_2883587)
	{
		return 1;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("MULTI_DECAL"), 0))
	{
		switch (Global_2883587)
		{
			case 11:
			case 20:
			case 122:
			case 169:
			case 171:
			case 172:
			case 173:
			case 181:
			case 184:
			case 189:
			case 205:
			case 13:
			case 170:
			case 213:
			case 14:
			case 220:
			case 235:
			case 248:
			case 256:
				return 1;
				break;
			}
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x129C0D
{
	switch (iParam0)
	{
		case -341578659:
		case 587287490:
		case 272639552:
		case -24214819:
		case 1912656759:
		case 468042619:
		case -856119906:
		case -162334638:
		case 1858431289:
			return 25;
		case -746651588:
		case -1068969071:
		case 741245103:
		case 1268828120:
		case -2009831140:
		case 2106817204:
		case 981784964:
		case -146606227:
		case 1522185944:
		case -109493671:
			return 26;
		case -1820629774:
		case -2100345958:
		case -1264441537:
		case 913058517:
		case 673549896:
		case 1541797320:
			return 27;
		case -1458603197:
		case 995631062:
		case -659236187:
		case -361333208:
		case 1851229672:
		case -2146064028:
		case 30551263:
		case 596734045:
			return 28;
		case 228077208:
		case -70350075:
		case -416456257:
		case -682180078:
		case -722420410:
		case -1021109845:
			return 29;
		case joaat("CLO_HST_B_2_0"):
		case joaat("CLO_HSTMB_22_16"):
		case -1633589597:
		case joaat("CLO_HSTMB_17_2"):
		case joaat("CLO_HSTMB_21_1"):
		case joaat("CLO_HSTMB_19_1"):
		case joaat("CLO_HSTMB_23_8"):
		case joaat("CLO_SMM_B_9_1"):
		case joaat("CLO_HSTMB_19_0"):
			return 31;
		case joaat("CLO_SMM_B_7_3"):
		case joaat("CLO_SMM_B_9_11"):
		case joaat("CLO_SMM_B_9_17"):
		case joaat("CLO_SMM_B_3_6"):
		case joaat("CLO_SMM_B_3_7"):
		case joaat("CLO_SMM_B_7_19"):
		case joaat("CLO_SMM_B_7_0"):
			return 34;
		case joaat("CLO_IEM_B_3_0"):
		case joaat("CLO_IEM_B_3_1"):
		case joaat("CLO_IEM_B_3_2"):
		case joaat("CLO_IEM_B_3_3"):
		case joaat("CLO_IEM_B_3_4"):
		case joaat("CLO_IEM_B_3_5"):
			return 35;
		case joaat("CLO_BHM_B_0_9"):
		case joaat("CLO_BHM_B_0_8"):
		case joaat("CLO_BHM_B_0_13"):
		case joaat("CLO_BHM_B_0_14"):
		case joaat("CLO_BHM_B_0_16"):
		case joaat("CLO_BUS_M_0_7"):
		case joaat("CLO_BUS_M_0_8"):
		case joaat("M_FMM_4_3"):
		case joaat("CLO_BUS_M_1_3"):
		case joaat("M_FMM_4_1"):
			return 36;
		case joaat("CLO_VWM_B_1_0"):
		case joaat("CLO_VWM_B_2_0"):
		case joaat("CLO_VWM_B_3_0"):
		case joaat("CLO_VWM_B_4_0"):
		case joaat("CLO_VWM_B_5_0"):
		case joaat("CLO_VWM_B_6_0"):
			return 30;
		case joaat("CLO_INDM_B_5_0"):
		case joaat("CLO_IEM_B_5_0"):
		case joaat("CLO_INDM_B_2_0"):
		case joaat("CLO_IEM_B_6_4"):
		case joaat("CLO_INDM_B_0_0"):
		case joaat("CLO_INDM_B_1_1"):
		case joaat("CLO_HP_B_1_0"):
		case joaat("CLO_HP_B_0_0"):
			return 33;
		case joaat("CLO_IEM_B_4_7"):
		case joaat("CLO_IEM_B_4_6"):
		case joaat("CLO_IEM_B_4_5"):
		case joaat("CLO_IEM_B_4_4"):
		case joaat("CLO_IEM_B_4_3"):
		case joaat("CLO_IEM_B_4_2"):
		case joaat("CLO_IEM_B_4_1"):
		case joaat("CLO_IEM_B_4_0"):
			return 32;
		default:
	}
	switch (iParam0)
	{
		case 85412703:
		case 730317945:
		case -2103971176:
		case 1473879324:
		case 1881306944:
		case -29497913:
		case -1946386110:
		case 1097657376:
		case -810645339:
			return 25;
		case 77927527:
		case -15297503:
		case 1324711013:
		case 915708019:
		case 2015444046:
		case -2019463579:
		case -1461092161:
		case -834308828:
		case 449656886:
		case 1093830178:
			return 26;
		case -1607639723:
		case 541187452:
		case 754939639:
		case -88829342:
		case -646164494:
		case 896731106:
			return 27;
		case -855340468:
		case 1465589495:
		case 1696316024:
		case 1959156173:
		case -1971419839:
		case 162726824:
		case 503983190:
		case 757648019:
			return 28;
		case -1668364285:
		case 1994652846:
		case 1689147459:
		case -1937201157:
		case 2042495590:
		case 529419780:
			return 29;
		case joaat("CLO_HST_B_2_0"):
		case joaat("CLO_HSTFB_22_16"):
		case -1859072678:
		case joaat("CLO_HSTFB_17_2"):
		case joaat("CLO_HSTFB_21_1"):
		case joaat("CLO_HSTFB_19_1"):
		case joaat("CLO_HSTFB_23_8"):
		case joaat("CLO_SMF_B_9_1"):
		case joaat("CLO_HSTFB_19_0"):
			return 31;
		case joaat("CLO_SMF_B_7_3"):
		case joaat("CLO_SMF_B_9_11"):
		case joaat("CLO_SMF_B_9_17"):
		case joaat("CLO_SMF_B_3_6"):
		case joaat("CLO_SMF_B_3_7"):
		case joaat("CLO_SMF_B_7_19"):
		case joaat("CLO_SMF_B_7_0"):
			return 34;
		case joaat("CLO_IEF_B_3_0"):
		case joaat("CLO_IEF_B_3_1"):
		case joaat("CLO_IEF_B_3_2"):
		case joaat("CLO_IEF_B_3_3"):
		case joaat("CLO_IEF_B_3_4"):
		case joaat("CLO_IEF_B_3_5"):
			return 35;
		case joaat("CLO_BHF_B_0_9"):
		case joaat("CLO_BHF_B_0_8"):
		case joaat("CLO_BHF_B_0_13"):
		case joaat("CLO_BHF_B_0_14"):
		case joaat("CLO_BHF_B_0_16"):
		case 412321455:
		case 1600525395:
		case joaat("M_FMF_4_3"):
		case 1781686716:
		case joaat("M_FMF_4_1"):
			return 36;
		case joaat("CLO_VWF_B_1_0"):
		case joaat("CLO_VWF_B_2_0"):
		case joaat("CLO_VWF_B_3_0"):
		case joaat("CLO_VWF_B_4_0"):
		case joaat("CLO_VWF_B_5_0"):
		case joaat("CLO_VWF_B_6_0"):
			return 30;
		case joaat("CLO_INDF_B_5_0"):
		case joaat("CLO_IEF_B_5_0"):
		case joaat("CLO_INDF_B_2_0"):
		case joaat("CLO_IEF_B_6_4"):
		case joaat("CLO_INDF_B_0_0"):
		case joaat("CLO_INDF_B_1_1"):
		case joaat("CLO_HP_B_1_0"):
		case joaat("CLO_HP_B_0_0"):
			return 33;
		case joaat("CLO_IEF_B_4_7"):
		case joaat("CLO_IEF_B_4_6"):
		case joaat("CLO_IEF_B_4_5"):
		case joaat("CLO_IEF_B_4_4"):
		case joaat("CLO_IEF_B_4_3"):
		case joaat("CLO_IEF_B_4_2"):
		case joaat("CLO_IEF_B_4_1"):
		case joaat("CLO_IEF_B_4_0"):
			return 32;
		default:
	}
	return 37;
}

int func_446(char* sParam0)//Position - 0x12A1C4
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 31;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CLO_TRM_O_L1"):
		case joaat("CLO_TRM_O_L2"):
		case joaat("CLO_TRM_O_L3"):
		case joaat("CLO_TRM_O_L4"):
			return 0;
			break;
		case joaat("CLO_TRM_O_D1"):
		case joaat("CLO_TRM_O_D2"):
		case joaat("CLO_TRM_O_D3"):
		case joaat("CLO_TRM_O_D4"):
			return 1;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_TRF_O_L1"):
		case joaat("CLO_TRF_O_L2"):
		case joaat("CLO_TRF_O_L3"):
		case joaat("CLO_TRF_O_L4"):
			return 0;
			break;
		case joaat("CLO_TRF_O_D1"):
		case joaat("CLO_TRF_O_D2"):
		case joaat("CLO_TRF_O_D3"):
		case joaat("CLO_TRF_O_D4"):
			return 1;
			break;
	}
	return 0;
}

int func_447(char* sParam0)//Position - 0x12A28C
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 31;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CLO_H4M_O_SM_M1"):
		case joaat("CLO_H4M_O_SM_M2"):
		case joaat("CLO_H4M_O_SM_M3"):
		case joaat("CLO_H4M_O_SM_M4"):
			return 0;
			break;
		case joaat("CLO_H4M_O_H1_M1"):
		case joaat("CLO_H4M_O_H1_M2"):
		case joaat("CLO_H4M_O_H1_M3"):
		case joaat("CLO_H4M_O_H1_M4"):
			return 1;
			break;
		case joaat("CLO_H4M_O_H2_M1"):
		case joaat("CLO_H4M_O_H2_M2"):
		case joaat("CLO_H4M_O_H2_M3"):
		case joaat("CLO_H4M_O_H2_M4"):
			return 2;
			break;
		case joaat("CLO_H4M_O_L1_M1"):
		case joaat("CLO_H4M_O_L1_M2"):
		case joaat("CLO_H4M_O_L1_M3"):
		case joaat("CLO_H4M_O_L1_M4"):
			return 3;
			break;
		case joaat("CLO_H4M_O_L2_M1"):
		case joaat("CLO_H4M_O_L2_M2"):
		case joaat("CLO_H4M_O_L2_M3"):
		case joaat("CLO_H4M_O_L2_M4"):
			return 4;
			break;
		case joaat("CLO_H4M_O_S1_M1"):
		case joaat("CLO_H4M_O_S1_M2"):
		case joaat("CLO_H4M_O_S1_M3"):
		case joaat("CLO_H4M_O_S1_M4"):
			return 5;
			break;
		case joaat("CLO_H4M_O_S2_M1"):
		case joaat("CLO_H4M_O_S2_M2"):
		case joaat("CLO_H4M_O_S2_M3"):
		case joaat("CLO_H4M_O_S2_M4"):
			return 6;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_H4F_O_SM_F1"):
		case joaat("CLO_H4F_O_SM_F2"):
		case joaat("CLO_H4F_O_SM_F3"):
		case joaat("CLO_H4F_O_SM_F4"):
			return 0;
			break;
		case joaat("CLO_H4F_O_H1_F1"):
		case joaat("CLO_H4F_O_H1_F2"):
		case joaat("CLO_H4F_O_H1_F3"):
		case joaat("CLO_H4F_O_H1_F4"):
			return 1;
			break;
		case joaat("CLO_H4F_O_H2_F1"):
		case joaat("CLO_H4F_O_H2_F2"):
		case joaat("CLO_H4F_O_H2_F3"):
		case joaat("CLO_H4F_O_H2_F4"):
			return 2;
			break;
		case joaat("CLO_H4F_O_L1_F1"):
		case joaat("CLO_H4F_O_L1_F2"):
		case joaat("CLO_H4F_O_L1_F3"):
		case joaat("CLO_H4F_O_L1_F4"):
			return 3;
			break;
		case joaat("CLO_H4F_O_L2_F1"):
		case joaat("CLO_H4F_O_L2_F2"):
		case joaat("CLO_H4F_O_L2_F3"):
		case joaat("CLO_H4F_O_L2_F4"):
			return 4;
			break;
		case joaat("CLO_H4F_O_S1_F1"):
		case joaat("CLO_H4F_O_S1_F2"):
		case joaat("CLO_H4F_O_S1_F3"):
		case joaat("CLO_H4F_O_S1_F4"):
			return 5;
			break;
		case joaat("CLO_H4F_O_S2_F1"):
		case joaat("CLO_H4F_O_S2_F2"):
		case joaat("CLO_H4F_O_S2_F3"):
		case joaat("CLO_H4F_O_S2_F4"):
			return 6;
			break;
	}
	return 1;
}

int func_448(char* sParam0)//Position - 0x12A48A
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 31;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CLO_H3M_O_DL_11"):
		case joaat("CLO_H3M_O_DL_12"):
		case joaat("CLO_H3M_O_DL_13"):
		case joaat("CLO_H3M_O_DL_14"):
		case joaat("CLO_H3M_O_DL_15"):
		case joaat("CLO_H3M_O_DL_16"):
			return 0;
			break;
		case joaat("CLO_H3M_O_DL_21"):
		case joaat("CLO_H3M_O_DL_22"):
		case joaat("CLO_H3M_O_DL_23"):
		case joaat("CLO_H3M_O_DL_24"):
		case joaat("CLO_H3M_O_DL_25"):
		case joaat("CLO_H3M_O_DL_26"):
			return 1;
			break;
		case joaat("CLO_H3M_O_DL_31"):
		case joaat("CLO_H3M_O_DL_32"):
		case joaat("CLO_H3M_O_DL_33"):
		case joaat("CLO_H3M_O_DL_34"):
		case joaat("CLO_H3M_O_DL_35"):
		case joaat("CLO_H3M_O_DL_36"):
			return 2;
			break;
		case joaat("CLO_H3M_O_DH_11"):
		case joaat("CLO_H3M_O_DH_12"):
		case joaat("CLO_H3M_O_DH_13"):
		case joaat("CLO_H3M_O_DH_14"):
		case joaat("CLO_H3M_O_DH_15"):
		case joaat("CLO_H3M_O_DH_16"):
			return 3;
			break;
		case joaat("CLO_H3M_O_DH_21"):
		case joaat("CLO_H3M_O_DH_22"):
		case joaat("CLO_H3M_O_DH_23"):
		case joaat("CLO_H3M_O_DH_24"):
		case joaat("CLO_H3M_O_DH_25"):
		case joaat("CLO_H3M_O_DH_26"):
			return 4;
			break;
		case joaat("CLO_H3M_O_DH_31"):
		case joaat("CLO_H3M_O_DH_32"):
		case joaat("CLO_H3M_O_DH_33"):
		case joaat("CLO_H3M_O_DH_34"):
		case joaat("CLO_H3M_O_DH_35"):
		case joaat("CLO_H3M_O_DH_36"):
			return 5;
			break;
		case joaat("CLO_H3M_O_SH_11"):
		case joaat("CLO_H3M_O_SH_12"):
		case joaat("CLO_H3M_O_SH_13"):
		case joaat("CLO_H3M_O_SH_14"):
		case joaat("CLO_H3M_O_SH_15"):
		case joaat("CLO_H3M_O_SH_16"):
			return 9;
			break;
		case joaat("CLO_H3M_O_SH_21"):
		case joaat("CLO_H3M_O_SH_22"):
		case joaat("CLO_H3M_O_SH_23"):
		case joaat("CLO_H3M_O_SH_24"):
		case joaat("CLO_H3M_O_SH_25"):
		case joaat("CLO_H3M_O_SH_26"):
			return 10;
			break;
		case joaat("CLO_H3M_O_SH_31"):
		case joaat("CLO_H3M_O_SH_32"):
		case joaat("CLO_H3M_O_SH_33"):
		case joaat("CLO_H3M_O_SH_34"):
		case joaat("CLO_H3M_O_SH_35"):
		case joaat("CLO_H3M_O_SH_36"):
			return 11;
			break;
		case joaat("CLO_H3M_O_FIB_1"):
		case joaat("CLO_H3M_O_FIB_2"):
		case joaat("CLO_H3M_O_FIB_3"):
		case joaat("CLO_H3M_O_FIB_4"):
			return 13;
			break;
		case joaat("CLO_H3M_O_UND_1"):
			return 15;
			break;
		case joaat("CLO_H3M_O_PRP_1"):
		case joaat("CLO_H3M_O_PRP_2"):
			return 16;
			break;
		case joaat("CLO_H3M_O_JAN_1"):
		case joaat("CLO_H3M_O_JAN_2"):
		case joaat("CLO_H3M_O_JAN_3"):
		case joaat("CLO_H3M_O_JAN_4"):
		case joaat("CLO_H3M_O_JAN_5"):
		case joaat("CLO_H3M_O_JAN_6"):
			return 17;
			break;
		case joaat("CLO_H3M_O_CLB_1"):
		case joaat("CLO_H3M_O_CLB_2"):
		case joaat("CLO_H3M_O_CLB_3"):
		case joaat("CLO_H3M_O_CLB_4"):
			return 18;
			break;
		case joaat("CLO_H3M_O_GRP_1"):
		case joaat("CLO_H3M_O_GRP_2"):
		case joaat("CLO_H3M_O_GRP_3"):
		case joaat("CLO_H3M_O_GRP_4"):
		case joaat("CLO_H3M_O_GRP_5"):
		case joaat("CLO_H3M_O_GRP_6"):
			return 19;
			break;
		case joaat("CLO_H3M_O_BS_1"):
		case joaat("CLO_H3M_O_BS_2"):
		case joaat("CLO_H3M_O_BS_3"):
		case joaat("CLO_H3M_O_BS_4"):
		case joaat("CLO_H3M_O_BS_5"):
		case joaat("CLO_H3M_O_BS_6"):
			return 20;
			break;
		case joaat("CLO_H3M_O_FF_1"):
		case joaat("CLO_H3M_O_FF_2"):
		case joaat("CLO_H3M_O_FF_7"):
		case joaat("CLO_H3M_O_FF_8"):
			return 21;
			break;
		case joaat("CLO_H3M_O_SL_11"):
		case joaat("CLO_H3M_O_SL_12"):
		case joaat("CLO_H3M_O_SL_13"):
		case joaat("CLO_H3M_O_SL_14"):
		case joaat("CLO_H3M_O_SL_15"):
		case joaat("CLO_H3M_O_SL_16"):
			return 6;
			break;
		case joaat("CLO_H3M_O_SL_21"):
		case joaat("CLO_H3M_O_SL_22"):
		case joaat("CLO_H3M_O_SL_23"):
		case joaat("CLO_H3M_O_SL_24"):
		case joaat("CLO_H3M_O_SL_25"):
		case joaat("CLO_H3M_O_SL_26"):
			return 7;
			break;
		case joaat("CLO_H3M_O_SL_31"):
		case joaat("CLO_H3M_O_SL_32"):
		case joaat("CLO_H3M_O_SL_33"):
		case joaat("CLO_H3M_O_SL_34"):
		case joaat("CLO_H3M_O_SL_35"):
		case joaat("CLO_H3M_O_SL_36"):
			return 8;
			break;
		case joaat("CLO_H3M_O_VAL_1"):
			return 12;
			break;
		case joaat("CLO_H3M_O_PR_1"):
		case joaat("CLO_H3M_O_PR_2"):
		case joaat("CLO_H3M_O_PR_3"):
		case joaat("CLO_H3M_O_PR_4"):
			return 14;
			break;
	}
	switch (iVar0)
	{
		case joaat("CLO_H3F_O_DL_11"):
		case joaat("CLO_H3F_O_DL_12"):
		case joaat("CLO_H3F_O_DL_13"):
		case joaat("CLO_H3F_O_DL_14"):
		case joaat("CLO_H3F_O_DL_15"):
		case joaat("CLO_H3F_O_DL_16"):
			return 0;
			break;
		case joaat("CLO_H3F_O_DL_21"):
		case joaat("CLO_H3F_O_DL_22"):
		case joaat("CLO_H3F_O_DL_23"):
		case joaat("CLO_H3F_O_DL_24"):
		case joaat("CLO_H3F_O_DL_25"):
		case joaat("CLO_H3F_O_DL_26"):
			return 1;
			break;
		case joaat("CLO_H3F_O_DL_31"):
		case joaat("CLO_H3F_O_DL_32"):
		case joaat("CLO_H3F_O_DL_33"):
		case joaat("CLO_H3F_O_DL_34"):
		case joaat("CLO_H3F_O_DL_35"):
		case joaat("CLO_H3F_O_DL_36"):
			return 2;
			break;
		case joaat("CLO_H3F_O_DH_11"):
		case joaat("CLO_H3F_O_DH_12"):
		case joaat("CLO_H3F_O_DH_13"):
		case joaat("CLO_H3F_O_DH_14"):
		case joaat("CLO_H3F_O_DH_15"):
		case joaat("CLO_H3F_O_DH_16"):
			return 3;
			break;
		case joaat("CLO_H3F_O_DH_21"):
		case joaat("CLO_H3F_O_DH_22"):
		case joaat("CLO_H3F_O_DH_23"):
		case joaat("CLO_H3F_O_DH_24"):
		case joaat("CLO_H3F_O_DH_25"):
		case joaat("CLO_H3F_O_DH_26"):
			return 4;
			break;
		case joaat("CLO_H3F_O_DH_31"):
		case joaat("CLO_H3F_O_DH_32"):
		case joaat("CLO_H3F_O_DH_33"):
		case joaat("CLO_H3F_O_DH_34"):
		case joaat("CLO_H3F_O_DH_35"):
		case joaat("CLO_H3F_O_DH_36"):
			return 5;
			break;
		case joaat("CLO_H3F_O_SH_11"):
		case joaat("CLO_H3F_O_SH_12"):
		case joaat("CLO_H3F_O_SH_13"):
		case joaat("CLO_H3F_O_SH_14"):
		case joaat("CLO_H3F_O_SH_15"):
		case joaat("CLO_H3F_O_SH_16"):
			return 9;
			break;
		case joaat("CLO_H3F_O_SH_21"):
		case joaat("CLO_H3F_O_SH_22"):
		case joaat("CLO_H3F_O_SH_23"):
		case joaat("CLO_H3F_O_SH_24"):
		case joaat("CLO_H3F_O_SH_25"):
		case joaat("CLO_H3F_O_SH_26"):
			return 10;
			break;
		case joaat("CLO_H3F_O_SH_31"):
		case joaat("CLO_H3F_O_SH_32"):
		case joaat("CLO_H3F_O_SH_33"):
		case joaat("CLO_H3F_O_SH_34"):
		case joaat("CLO_H3F_O_SH_35"):
		case joaat("CLO_H3F_O_SH_36"):
			return 11;
			break;
		case joaat("CLO_H3F_O_FIB_1"):
		case joaat("CLO_H3F_O_FIB_2"):
		case joaat("CLO_H3F_O_FIB_3"):
		case joaat("CLO_H3F_O_FIB_4"):
			return 13;
			break;
		case joaat("CLO_H3F_O_UND_1"):
			return 15;
			break;
		case joaat("CLO_H3F_O_PRP_1"):
		case joaat("CLO_H3F_O_PRP_2"):
			return 16;
			break;
		case joaat("CLO_H3F_O_JAN_1"):
		case joaat("CLO_H3F_O_JAN_2"):
		case joaat("CLO_H3F_O_JAN_3"):
		case joaat("CLO_H3F_O_JAN_4"):
		case joaat("CLO_H3F_O_JAN_5"):
		case joaat("CLO_H3F_O_JAN_6"):
			return 17;
			break;
		case joaat("CLO_H3F_O_CLB_1"):
		case joaat("CLO_H3F_O_CLB_2"):
		case joaat("CLO_H3F_O_CLB_3"):
		case joaat("CLO_H3F_O_CLB_4"):
			return 18;
			break;
		case joaat("CLO_H3F_O_GRP_1"):
		case joaat("CLO_H3F_O_GRP_2"):
		case joaat("CLO_H3F_O_GRP_3"):
		case joaat("CLO_H3F_O_GRP_4"):
		case joaat("CLO_H3F_O_GRP_5"):
		case joaat("CLO_H3F_O_GRP_6"):
			return 19;
			break;
		case joaat("CLO_H3F_O_BS_1"):
		case joaat("CLO_H3F_O_BS_2"):
		case joaat("CLO_H3F_O_BS_3"):
		case joaat("CLO_H3F_O_BS_4"):
		case joaat("CLO_H3F_O_BS_5"):
		case joaat("CLO_H3F_O_BS_6"):
			return 20;
			break;
		case joaat("CLO_H3F_O_FF_1"):
		case joaat("CLO_H3F_O_FF_2"):
		case joaat("CLO_H3F_O_FF_7"):
		case joaat("CLO_H3F_O_FF_8"):
			return 21;
			break;
		case joaat("CLO_H3F_O_SL_11"):
		case joaat("CLO_H3F_O_SL_12"):
		case joaat("CLO_H3F_O_SL_13"):
		case joaat("CLO_H3F_O_SL_14"):
		case joaat("CLO_H3F_O_SL_15"):
		case joaat("CLO_H3F_O_SL_16"):
			return 6;
			break;
		case joaat("CLO_H3F_O_SL_21"):
		case joaat("CLO_H3F_O_SL_22"):
		case joaat("CLO_H3F_O_SL_23"):
		case joaat("CLO_H3F_O_SL_24"):
		case joaat("CLO_H3F_O_SL_25"):
		case joaat("CLO_H3F_O_SL_26"):
			return 7;
			break;
		case joaat("CLO_H3F_O_SL_31"):
		case joaat("CLO_H3F_O_SL_32"):
		case joaat("CLO_H3F_O_SL_33"):
		case joaat("CLO_H3F_O_SL_34"):
		case joaat("CLO_H3F_O_SL_35"):
		case joaat("CLO_H3F_O_SL_36"):
			return 8;
			break;
		case joaat("CLO_H3F_O_VAL_1"):
			return 12;
			break;
		case joaat("CLO_H3F_O_PR_1"):
		case joaat("CLO_H3F_O_PR_2"):
		case joaat("CLO_H3F_O_PR_3"):
		case joaat("CLO_H3F_O_PR_4"):
			return 14;
			break;
	}
	return 0;
}

int func_449(char* sParam0)//Position - 0x12AB4E
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 31;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case -511208015:
		case -1475844739:
			return 0;
			break;
	}
	return 1;
}

int func_450(char* sParam0)//Position - 0x12ABA6
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 31;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CLO_AWM_O_B_0"):
		case joaat("CLO_AWM_O_B_1"):
		case joaat("CLO_AWM_O_B_2"):
		case joaat("CLO_AWM_O_B_3"):
		case joaat("CLO_AWM_O_B_4"):
		case joaat("CLO_AWM_O_B_5"):
		case joaat("CLO_AWM_O_B_6"):
		case joaat("CLO_AWM_O_B_7"):
		case joaat("CLO_AWM_O_B_8"):
		case joaat("CLO_AWM_O_B_9"):
		case joaat("CLO_AWM_O_B_10"):
		case joaat("CLO_AWM_O_B_11"):
		case joaat("CLO_AWM_O_B_12"):
		case joaat("CLO_AWM_O_B_13"):
		case joaat("CLO_AWM_O_B_14"):
		case joaat("CLO_AWM_O_B_15"):
		case joaat("CLO_AWF_O_B_0"):
		case joaat("CLO_AWF_O_B_1"):
		case joaat("CLO_AWF_O_B_2"):
		case joaat("CLO_AWF_O_B_3"):
		case joaat("CLO_AWF_O_B_4"):
		case joaat("CLO_AWF_O_B_5"):
		case joaat("CLO_AWF_O_B_6"):
		case joaat("CLO_AWF_O_B_7"):
		case joaat("CLO_AWF_O_B_8"):
		case joaat("CLO_AWF_O_B_9"):
		case joaat("CLO_AWF_O_B_10"):
		case joaat("CLO_AWF_O_B_11"):
		case joaat("CLO_AWF_O_B_12"):
		case joaat("CLO_AWF_O_B_13"):
		case joaat("CLO_AWF_O_B_14"):
		case joaat("CLO_AWF_O_B_15"):
			return 0;
			break;
		case joaat("CLO_AWM_O_C_0"):
		case joaat("CLO_AWM_O_C_1"):
		case joaat("CLO_AWM_O_C_2"):
		case joaat("CLO_AWM_O_C_3"):
		case joaat("CLO_AWM_O_C_4"):
		case joaat("CLO_AWM_O_C_5"):
		case joaat("CLO_AWM_O_C_6"):
		case joaat("CLO_AWM_O_C_7"):
		case joaat("CLO_AWM_O_C_8"):
		case joaat("CLO_AWM_O_C_9"):
		case joaat("CLO_AWM_O_C_10"):
		case joaat("CLO_AWM_O_C_11"):
		case joaat("CLO_AWF_O_C_0"):
		case joaat("CLO_AWF_O_C_1"):
		case joaat("CLO_AWF_O_C_2"):
		case joaat("CLO_AWF_O_C_3"):
		case joaat("CLO_AWF_O_C_4"):
		case joaat("CLO_AWF_O_C_5"):
		case joaat("CLO_AWF_O_C_6"):
		case joaat("CLO_AWF_O_C_7"):
		case joaat("CLO_AWF_O_C_8"):
		case joaat("CLO_AWF_O_C_9"):
		case joaat("CLO_AWF_O_C_10"):
		case joaat("CLO_AWF_O_C_11"):
			return 1;
			break;
		case joaat("CLO_AWM_O_D_0"):
		case joaat("CLO_AWM_O_D_1"):
		case joaat("CLO_AWM_O_D_2"):
		case joaat("CLO_AWM_O_D_3"):
		case joaat("CLO_AWM_O_D_4"):
		case joaat("CLO_AWM_O_D_5"):
		case joaat("CLO_AWM_O_D_6"):
		case joaat("CLO_AWM_O_D_7"):
		case joaat("CLO_AWM_O_D_8"):
		case joaat("CLO_AWM_O_D_9"):
		case joaat("CLO_AWM_O_D_10"):
		case joaat("CLO_AWM_O_D_11"):
		case joaat("CLO_AWF_O_D_0"):
		case joaat("CLO_AWF_O_D_1"):
		case joaat("CLO_AWF_O_D_2"):
		case joaat("CLO_AWF_O_D_3"):
		case joaat("CLO_AWF_O_D_4"):
		case joaat("CLO_AWF_O_D_5"):
		case joaat("CLO_AWF_O_D_6"):
		case joaat("CLO_AWF_O_D_7"):
		case joaat("CLO_AWF_O_D_8"):
		case joaat("CLO_AWF_O_D_9"):
		case joaat("CLO_AWF_O_D_10"):
		case joaat("CLO_AWF_O_D_11"):
			return 2;
			break;
		case joaat("CLO_AWM_O_E_0"):
		case joaat("CLO_AWM_O_E_1"):
		case joaat("CLO_AWM_O_E_2"):
		case joaat("CLO_AWM_O_E_3"):
		case joaat("CLO_AWM_O_E_4"):
		case joaat("CLO_AWM_O_E_5"):
		case joaat("CLO_AWM_O_E_6"):
		case joaat("CLO_AWM_O_E_7"):
		case joaat("CLO_AWM_O_E_8"):
		case joaat("CLO_AWM_O_E_9"):
		case joaat("CLO_AWM_O_E_10"):
		case joaat("CLO_AWM_O_E_11"):
		case joaat("CLO_AWF_O_E_0"):
		case joaat("CLO_AWF_O_E_1"):
		case joaat("CLO_AWF_O_E_2"):
		case joaat("CLO_AWF_O_E_3"):
		case joaat("CLO_AWF_O_E_4"):
		case joaat("CLO_AWF_O_E_5"):
		case joaat("CLO_AWF_O_E_6"):
		case joaat("CLO_AWF_O_E_7"):
		case joaat("CLO_AWF_O_E_8"):
		case joaat("CLO_AWF_O_E_9"):
		case joaat("CLO_AWF_O_E_10"):
		case joaat("CLO_AWF_O_E_11"):
			return 3;
			break;
		case joaat("CLO_AWM_O_F_0"):
		case joaat("CLO_AWM_O_F_1"):
		case joaat("CLO_AWM_O_F_2"):
		case joaat("CLO_AWM_O_F_3"):
		case joaat("CLO_AWM_O_F_4"):
		case joaat("CLO_AWM_O_F_5"):
		case joaat("CLO_AWM_O_F_6"):
		case joaat("CLO_AWM_O_F_7"):
		case joaat("CLO_AWM_O_F_8"):
		case joaat("CLO_AWM_O_F_9"):
		case joaat("CLO_AWM_O_F_14"):
		case joaat("CLO_AWM_O_F_15"):
		case joaat("CLO_AWM_O_F_16"):
		case joaat("CLO_AWM_O_F_17"):
		case joaat("CLO_AWF_O_F_0"):
		case joaat("CLO_AWF_O_F_1"):
		case joaat("CLO_AWF_O_F_2"):
		case joaat("CLO_AWF_O_F_3"):
		case joaat("CLO_AWF_O_F_4"):
		case joaat("CLO_AWF_O_F_5"):
		case joaat("CLO_AWF_O_F_6"):
		case joaat("CLO_AWF_O_F_7"):
		case joaat("CLO_AWF_O_F_8"):
		case joaat("CLO_AWF_O_F_9"):
		case joaat("CLO_AWF_O_F_14"):
		case joaat("CLO_AWF_O_F_15"):
		case joaat("CLO_AWF_O_F_16"):
		case joaat("CLO_AWF_O_F_17"):
			return 4;
			break;
		case joaat("CLO_AWM_O_G_0"):
		case joaat("CLO_AWM_O_G_1"):
		case joaat("CLO_AWM_O_G_2"):
		case joaat("CLO_AWM_O_G_3"):
		case joaat("CLO_AWM_O_G_4"):
		case joaat("CLO_AWM_O_G_5"):
		case joaat("CLO_AWM_O_G_6"):
		case joaat("CLO_AWM_O_G_7"):
		case joaat("CLO_AWF_O_G_0"):
		case joaat("CLO_AWF_O_G_1"):
		case joaat("CLO_AWF_O_G_2"):
		case joaat("CLO_AWF_O_G_3"):
		case joaat("CLO_AWF_O_G_4"):
		case joaat("CLO_AWF_O_G_5"):
		case joaat("CLO_AWF_O_G_6"):
		case joaat("CLO_AWF_O_G_7"):
			return 5;
			break;
		case joaat("CLO_AWM_O_H_0"):
		case joaat("CLO_AWM_O_H_1"):
		case joaat("CLO_AWM_O_H_2"):
		case joaat("CLO_AWM_O_H_3"):
		case joaat("CLO_AWM_O_H_4"):
		case joaat("CLO_AWM_O_H_5"):
		case joaat("CLO_AWM_O_H_6"):
		case joaat("CLO_AWM_O_H_7"):
		case joaat("CLO_AWM_O_H_8"):
		case joaat("CLO_AWM_O_H_9"):
		case joaat("CLO_AWF_O_H_0"):
		case joaat("CLO_AWF_O_H_1"):
		case joaat("CLO_AWF_O_H_2"):
		case joaat("CLO_AWF_O_H_3"):
		case joaat("CLO_AWF_O_H_4"):
		case joaat("CLO_AWF_O_H_5"):
		case joaat("CLO_AWF_O_H_6"):
		case joaat("CLO_AWF_O_H_7"):
		case joaat("CLO_AWF_O_H_8"):
		case joaat("CLO_AWF_O_H_9"):
			return 6;
			break;
		case joaat("CLO_AWM_O_I_0"):
		case joaat("CLO_AWM_O_I_1"):
		case joaat("CLO_AWM_O_I_2"):
		case joaat("CLO_AWF_O_I_0"):
		case joaat("CLO_AWF_O_I_1"):
		case joaat("CLO_AWF_O_I_2"):
			return 7;
			break;
	}
	return 7;
}

void func_451(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x12BAAB
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER() || NETWORK::NETWORK_PLAYER_IS_BADSPORT())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_4538837)
	{
		Global_4538837[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_4538840)
	{
		Global_4538840[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_4538843)
	{
		Global_4538843[iVar0] = 0;
		iVar0++;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	iVar2 = 78;
	if (iVar1 == joaat("MP_M_Freemode_01"))
	{
		if (!Global_4538835 || Global_4538836 == 36)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1021);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1020);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1025);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1026);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1028);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(13);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(46);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(45);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(57);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(11);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 35)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(372);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(373);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(374);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(375);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(376);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(377);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 34)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(222);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(826);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(771);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(832);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(674);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(675);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(787);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(768);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 33)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(85);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(386);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(79);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(394);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(75);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(78);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(69);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(68);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 32)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(385);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(384);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(383);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(382);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(381);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(380);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(379);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(378);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 31)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(107);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(233);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(206);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(177);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(209);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(196);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(217);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(816);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(195);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 30)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1169);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1170);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1171);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1172);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1173);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1174);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 29)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(397);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(398);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(399);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(400);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(401);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(402);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 28)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1298);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1299);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1300);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1301);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1302);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1303);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1304);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1305);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 27)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1242);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1243);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1244);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1245);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1246);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1247);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 26)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1195);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1196);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1197);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1198);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1199);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1200);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1205);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1206);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1233);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1272);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 25)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1234);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1235);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1236);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1237);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1238);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1268);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1269);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1270);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_M_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1271);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
	}
	else if (iVar1 == joaat("MP_F_Freemode_01"))
	{
		if (!Global_4538835 || Global_4538836 == 36)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1021);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1020);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1025);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1026);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1028);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(13);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(46);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(45);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(57);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(11);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 35)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(372);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(373);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(374);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(375);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(376);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(377);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 34)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(222);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(826);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(771);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(832);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(674);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(675);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(787);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(768);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 33)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(85);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(386);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(79);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(394);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(75);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(78);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(69);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(68);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 32)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(385);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(384);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(383);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(382);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(381);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(380);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(379);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(378);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 31)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(107);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(233);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(206);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(177);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(209);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(196);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(217);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(816);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(195);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 30)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1169);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1170);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1171);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1172);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1173);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1174);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 29)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(397);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(398);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(399);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(400);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(401);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(402);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 28)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1298);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1299);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1300);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1301);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1302);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1303);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1304);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1305);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 27)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1242);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1243);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1244);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1245);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1246);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1247);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 26)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1195);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1196);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1197);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1198);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1199);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1200);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1205);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1206);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1233);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1272);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
		if (!Global_4538835 || Global_4538836 == 25)
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1234);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1235);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1236);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1237);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1238);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1268);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1269);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1270);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(joaat("MP_F_Freemode_01"));
			Stack.Push(uParam3);
			Stack.Push(iVar2);
			Stack.Push(1271);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*uParam0);
		}
	}
}

int func_452(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12F7BE
{
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return 0;
								break;
							case 3:
								return 1;
								break;
							case 2:
								return 2;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return 3;
								break;
							case 3:
								return 4;
								break;
							case 2:
								return 5;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return 6;
								break;
							case 3:
								return 7;
								break;
							case 2:
								return 8;
								break;
						}
						break;
				}
				break;
			case 1:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return 9;
								break;
							case 2:
								return 10;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return 11;
								break;
							case 2:
								return 12;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return 13;
								break;
							case 2:
								return 14;
								break;
						}
						break;
				}
				break;
			case 2:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return 15;
								break;
							case 3:
								return 16;
								break;
							case 2:
								return 17;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return 18;
								break;
							case 3:
								return 19;
								break;
							case 2:
								return 20;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return 21;
								break;
							case 3:
								return 22;
								break;
							case 2:
								return 23;
								break;
						}
						break;
				}
				break;
			case 3:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return 24;
								break;
							case 3:
								return 25;
								break;
							case 2:
								return 26;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return 27;
								break;
							case 3:
								return 28;
								break;
							case 2:
								return 29;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return 30;
								break;
							case 3:
								return 31;
								break;
							case 2:
								return 32;
								break;
						}
						break;
				}
				break;
			case 4:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return 33;
								break;
							case 3:
								return 34;
								break;
							case 2:
								return 35;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return 36;
								break;
							case 3:
								return 37;
								break;
							case 2:
								return 38;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return 39;
								break;
							case 3:
								return 40;
								break;
							case 2:
								return 41;
								break;
						}
						break;
				}
				break;
			case 5:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return 42;
								break;
							case 4:
								return 43;
								break;
							case 5:
								return 44;
								break;
							case 6:
								return 45;
								break;
							case 7:
								return 46;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return 47;
								break;
							case 4:
								return 48;
								break;
							case 5:
								return 49;
								break;
							case 6:
								return 50;
								break;
							case 7:
								return 51;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return 52;
								break;
							case 4:
								return 53;
								break;
							case 5:
								return 54;
								break;
							case 6:
								return 55;
								break;
							case 7:
								return 56;
								break;
						}
						break;
				}
				break;
			case 6:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return 0;
								break;
							case 2:
								return 1;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return 2;
								break;
							case 2:
								return 3;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return 4;
								break;
							case 2:
								return 5;
								break;
						}
						break;
				}
				break;
			case 7:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 1:
								return 6;
								break;
							case 0:
								return 7;
								break;
							case 3:
								return 8;
								break;
							case 2:
								return 9;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 1:
								return 10;
								break;
							case 0:
								return 11;
								break;
							case 3:
								return 12;
								break;
							case 2:
								return 13;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 1:
								return 14;
								break;
							case 0:
								return 15;
								break;
							case 3:
								return 16;
								break;
							case 2:
								return 17;
								break;
						}
						break;
				}
				break;
			case 8:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 2:
								return 18;
								break;
							case 0:
								return 19;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 2:
								return 20;
								break;
							case 0:
								return 21;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 2:
								return 22;
								break;
							case 0:
								return 23;
								break;
						}
						break;
				}
				break;
			case 9:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return 24;
								break;
							case 3:
								return 25;
								break;
							case 2:
								return 26;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return 27;
								break;
							case 3:
								return 28;
								break;
							case 2:
								return 29;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return 30;
								break;
							case 3:
								return 31;
								break;
							case 2:
								return 32;
								break;
						}
						break;
				}
				break;
			case 10:
				switch (iParam3)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return 34;
								break;
							case 2:
								return 35;
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return 36;
								break;
							case 2:
								return 37;
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return 38;
								break;
							case 2:
								return 39;
								break;
						}
						break;
				}
				break;
			}
	}
	return -1;
}

int func_453(int iParam0)//Position - 0x140926
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 11, joaat("CREW_JACKET")))
	{
		return 1;
	}
	return 0;
}

int func_454(int iParam0)//Position - 0x140943
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 11, joaat("COMBAT_TOP")))
	{
		return 1;
	}
	return 0;
}

int func_455(int iParam0)//Position - 0x14D1A2
{
	switch (iParam0)
	{
		case 0:
			return 20;
			break;
		case 1:
			return 17;
			break;
		case 2:
			return 10;
			break;
		case 3:
			return 4;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return -1;
			break;
		case 7:
			return 3;
			break;
		case 8:
			return -1;
			break;
		case 9:
			return -1;
			break;
	}
	return -1;
}

int func_456(int iParam0)//Position - 0x14D87C
{
	switch (iParam0)
	{
		case 78:
			return 1;
			break;
	}
	return 0;
}

int func_457(int iParam0)//Position - 0x14D899
{
	switch (iParam0)
	{
		case 124:
			return 1;
			break;
	}
	return 0;
}

int func_458(int iParam0)//Position - 0x14D8B6
{
	switch (iParam0)
	{
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 131:
		case 166:
		case 186:
		case 244:
		case 245:
		case 270:
			return 1;
			break;
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x14D933
{
	switch (iParam0)
	{
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 111:
		case 112:
		case 130:
		case 137:
		case 159:
		case 154:
		case 165:
		case 180:
		case 196:
		case 214:
		case 237:
		case 253:
		case 265:
			return 1;
			break;
	}
	return 0;
}

int func_460(int iParam0)//Position - 0x14D9F8
{
	if (iParam0 == joaat("Player_Zero"))
	{
		return 0;
	}
	if (iParam0 == joaat("Player_One"))
	{
		return 1;
	}
	if (iParam0 == joaat("Player_Two"))
	{
		return 2;
	}
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		return 3;
	}
	if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		return 4;
	}
	return 5;
}

int func_461(int iParam0)//Position - 0x14E1B0
{
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 9);
}

void func_462()//Position - 0x14F5C7
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(22);
	Global_2676732[iVar0 /*83*/] = 22;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_463(int iParam0)//Position - 0x150096
{
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_1, 11);
}

void func_464(int iParam0)//Position - 0x1517F8
{
	if (Global_4538992.f_217 > 0 && Global_4538992.f_218 != iParam0)
	{
	}
	Global_4538992.f_218 = iParam0;
}

int func_465(int iParam0, int iParam1)//Position - 0x151AB1
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 14:
					case 15:
						return 0;
						break;
				}
				break;
			}
	}
	return 1;
}

bool func_466()//Position - 0x151F92
{
	return Global_97747;
}

void func_467(int iParam0, char* sParam1, int iParam2)//Position - 0x152842
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	StringCopy(&cVar2, __LIB_4__::func_577(iParam0, iParam2), 64);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
	GRAPHICS::GET_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar3 = (288f / SYSTEM::TO_FLOAT(iVar0));
	fVar4 = (64f / SYSTEM::TO_FLOAT(iVar1));
	fVar5 = (9f / SYSTEM::TO_FLOAT(iVar0));
	fVar6 = (9f / SYSTEM::TO_FLOAT(iVar1));
	GRAPHICS::DRAW_SPRITE(&cVar2, &cVar2, (fVar3 * 0.5f), (fVar4 * 0.5f), fVar3, fVar4, 0f, 255, 255, 255, 255, false, 0);
	HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
	if (MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY("SHOP_INTRO" /* GXT: Welcome to ~a~. */))
	{
		__LIB_9__::func_565(sParam1, __LIB_9__::func_422(iParam0, 0, 0));
	}
	else
	{
		__LIB_0__::func_187(sParam1);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	HUD::SET_TEXT_WRAP(fVar5, ((0.003f + fVar3) - fVar5));
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam1);
	if (MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY("SHOP_INTRO" /* GXT: Welcome to ~a~. */))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_9__::func_422(iParam0, 0, 0));
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, (((fVar4 + 0.00277776f) + fVar6) - 0.005f), 0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	HUD::SET_TEXT_WRAP(fVar5, (fVar3 - fVar5));
	HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(sParam1);
	if (MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY("SHOP_INTRO" /* GXT: Welcome to ~a~. */))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_9__::func_422(iParam0, 0, 0));
	}
	iVar7 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar5, (((fVar4 + 0.00277776f) + fVar6) - 0.005f));
	__LIB_2__::func_154(0f, (fVar4 + 0.00277776f), fVar3, (((IntToFloat(iVar7) * HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0)) + (fVar6 * 2f)) + 0.005f), 0, 0, 0, 255);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_468(var uParam0)//Position - 0x152A66
{
	if (BitTest(uParam0->f_555, 10))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam0->f_570);
		MISC::CLEAR_BIT(&(uParam0->f_555), 10);
	}
}

void func_469()//Position - 0x152A99
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_100493.f_1453 == 1)
		{
			PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, Global_100493.f_1454, Global_100493.f_1455, false);
			Global_100493.f_1453 = 0;
		}
	}
}

void func_470()//Position - 0x1552FC
{
	iLocal_100[0] = 31;
	iLocal_100[1] = 32;
	iLocal_100[2] = 33;
	iLocal_100[3] = 34;
}

void func_471(var uParam0)//Position - 0x155320
{
	if (*uParam0 == 21)
	{
		if (!BitTest(uParam0->f_555, 11))
		{
			MISC::SET_BIT(&(uParam0->f_555), 11);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!BitTest(uParam0->f_555, 11))
		{
			MISC::SET_BIT(&(uParam0->f_555), 11);
		}
	}
	if (!BitTest(uParam0->f_555, 11) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_569))
	{
		TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_591));
		TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262145, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(uParam0->f_591);
		TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_592));
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_12.f_6, 1f, 20000, 0.25f, 0, uParam0->f_12.f_15);
		TASK::CLOSE_SEQUENCE_TASK(uParam0->f_592);
		if (uParam0->f_521 == 2 || uParam0->f_521 == 6)
		{
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_593));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_576, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_593);
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_594));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_577, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_594);
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_595));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_578, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_595);
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_596));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_579, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_596);
		}
		else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_593));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_576, 2f, -4f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_573, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_575, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_593);
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_594));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_577, 2f, -4f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_575, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_573, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_594);
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_595));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_578, 2f, -4f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_575, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_573, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_595);
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_596));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_579, 2f, -4f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_575, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_573, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_575, 8f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_596);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_593));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_576, 2f, -4f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_573, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_575, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_593);
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_594));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_577, 2f, -4f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_575, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_573, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_594);
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_595));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_578, 2f, -4f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_575, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_573, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_595);
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_596));
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_579, 2f, -4f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_575, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_573, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_574, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_575, 4f, -8f, -1, 262144, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_569, uParam0->f_572, 4f, -8f, -1, 262145, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_596);
		}
		MISC::SET_BIT(&(uParam0->f_555), 11);
	}
}

int func_472(var uParam0)//Position - 0x155ECB
{
	STREAMING::REQUEST_ANIM_DICT(uParam0->f_569);
	if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_569))
	{
		MISC::SET_BIT(&(uParam0->f_555), 9);
	}
	if (uParam0->f_105)
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_570);
		if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_570))
		{
			MISC::SET_BIT(&(uParam0->f_555), 10);
		}
	}
	if (BitTest(uParam0->f_555, 9) && (BitTest(uParam0->f_555, 10) || !uParam0->f_105))
	{
		return 1;
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x15621C
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		case 51:
		case 55:
		case 57:
			return 1;
			break;
	}
	return 0;
}

void func_474(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, float fParam6, struct<3> Param7, float fParam8, int iParam9, struct<3> Param10, float fParam11, int iParam12)//Position - 0x156635
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_12.f_3 = iParam4;
	uParam0->f_12.f_6 = { Param5 };
	uParam0->f_12.f_15 = fParam6;
	uParam0->f_12.f_18 = { Param7 };
	uParam0->f_12.f_21 = fParam8;
	uParam0->f_43.f_1 = iParam9;
	uParam0->f_43.f_2 = { Param10 };
	uParam0->f_43.f_5 = fParam11;
	uParam0->f_9 = iParam12;
}

void func_475(var uParam0)//Position - 0x15672F
{
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_9__::func_611() == 44) && !PED::IS_PED_INJURED(uParam0->f_12)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_12))
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) == 0)
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "BUMP", "SPEECH_PARAMS_FORCE", 1);
			}
		}
	}
}

void func_476(var uParam0)//Position - 0x1576B8
{
	int iVar0;
	if (BitTest(uParam0->f_556, 11))
	{
		iVar0 = 2;
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CAS_STORE_LCHIP" /* GXT: You don't have enough Chips to buy an item. Speak to the Cashier to acquire more. */, iVar0, 0, false, -1, 0, 0, true, 0);
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			uParam0->f_701 = 1;
		}
		if (HUD::IS_WARNING_MESSAGE_ACTIVE() && uParam0->f_701 == 1)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_701 = 0;
				MISC::CLEAR_BIT(&(uParam0->f_556), 11);
			}
		}
	}
}

int func_477(int iParam0)//Position - 0x158E49
{
	int iVar0;
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_603(iParam0);
	if (iVar0 != __LIB_0__::func_160())
	{
		return __LIB_0__::func_834(iVar0);
	}
	return 0;
}

float func_478(int iParam0)//Position - 0x158E79
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 5.5f;
			break;
	}
	return 8f;
}

int func_479(int iParam0)//Position - 0x158EC2
{
	var uVar0;
	uVar0 = iLocal_100[iParam0];
	return uVar0;
}

bool func_480(var uParam0, int iParam1)//Position - 0x158ED4
{
	return uParam0->f_1 == iParam1;
}

bool func_481(var uParam0, int iParam1)//Position - 0x158EE3
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_3, iParam1));
	}
	return (MISC::GET_GAME_TIMER() - uParam0->f_2) > iParam1;
}

void func_482(var uParam0)//Position - 0x158FFC
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(uParam0->f_555, 27))
			{
				if (uParam0->f_11 != 4 || uParam0->f_116.f_31 > 2)
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
						MISC::CLEAR_BIT(&(uParam0->f_555), 27);
					}
				}
			}
			else if (uParam0->f_11 == 4 && uParam0->f_116.f_31 <= 2)
			{
				MISC::SET_BIT(&(uParam0->f_555), 27);
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_555), 27);
	}
}

int func_483(var uParam0)//Position - 0x15A56F
{
	if (((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uParam0->f_12, 20f)) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true)) < 40f)
	{
		return 1;
	}
	return 0;
}

int func_484()//Position - 0x15ACBF
{
	struct<3> Var0;
	NETWORK::CONVERT_POSIX_TIME(NETWORK::GET_CLOUD_TIME_AS_INT(), &Var0);
	switch (Var0.f_2)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return joaat("vw_prop_vw_wallart_139a");
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			return joaat("vw_prop_vw_wallart_60a");
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return joaat("vw_prop_vw_wallart_140a");
		default:
	}
	return joaat("vw_prop_vw_wallart_58a");
	return joaat("vw_prop_vw_wallart_139a");
}

int func_485(var uParam0)//Position - 0x15AD7D
{
	if (!Global_100493.f_16)
	{
		return 0;
	}
	if (!Global_100493.f_17)
	{
		return 0;
	}
	if (Global_78319)
	{
		if (!__LIB_0__::func_640(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (uParam0->f_9 && uParam0->f_11 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 82.34222f, -1310.2776f, 25.770123f, 142.89174f, -1274.1537f, 46.512486f, 62f, false, true, 0))
			{
				return 0;
			}
		}
	}
	if (__LIB_0__::func_134())
	{
		return 0;
	}
	return 1;
}

void func_486(var uParam0)//Position - 0x15BBD1
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_0))
		{
			*uParam0 = NETWORK::NET_TO_PED(Local_66.f_0);
			uParam0->f_26 = 1;
		}
		else
		{
			*uParam0 = 0;
		}
		uParam0->f_27 = Local_66.f_2;
	}
}

void func_487(var uParam0, var uParam1, int iParam2)//Position - 0x15BCA4
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = uParam1;
	uParam0->f_7 = iParam2;
}

void func_488(var uParam0)//Position - 0x15C198
{
	if (BitTest(uParam0->f_555, 9))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam0->f_569);
		MISC::CLEAR_BIT(&(uParam0->f_555), 9);
	}
}

int func_489(int iParam0)//Position - 0x160B21
{
	if (((((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 26) || iParam0 == 29) || iParam0 == 27) || iParam0 == 28) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32) || iParam0 == 34) || iParam0 == 33) || iParam0 == 35) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 39)
	{
		return 1;
	}
	return 0;
}

int func_490(struct<9> Param0, var uParam1)//Position - 0xE7C
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_491(var uParam0)//Position - 0xE94
{
	struct<10> Var0;
	*uParam0 = { Var0 };
}

int func_492(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xF00
{
	int iVar0;
	int iVar1;
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_493(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2F33
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_113386.f_20564[iParam1];
			break;
		case 1:
			iVar0 = Global_113386.f_20564.f_33[iParam1];
			break;
		case 2:
			iVar0 = Global_113386.f_20564.f_66[iParam1];
			break;
	}
	if (Global_55453[iVar0 /*36*/].f_9 <= 0f)
	{
		return;
	}
	iVar1 = 0;
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				Global_113386.f_20564.f_22[iParam1] = (Global_113386.f_20564.f_22[iParam1] + iParam2);
				iVar1 = Global_113386.f_20564.f_22[iParam1];
				break;
			case 1:
				Global_113386.f_20564.f_55[iParam1] = (Global_113386.f_20564.f_55[iParam1] + iParam2);
				iVar1 = Global_113386.f_20564.f_55[iParam1];
				break;
			case 2:
				Global_113386.f_20564.f_88[iParam1] = (Global_113386.f_20564.f_88[iParam1] + iParam2);
				iVar1 = Global_113386.f_20564.f_88[iParam1];
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Global_113386.f_20564.f_22[iParam1] = iParam2;
				iVar1 = Global_113386.f_20564.f_22[iParam1];
				break;
			case 1:
				Global_113386.f_20564.f_55[iParam1] = iParam2;
				iVar1 = Global_113386.f_20564.f_55[iParam1];
				break;
			case 2:
				Global_113386.f_20564.f_88[iParam1] = iParam2;
				iVar1 = Global_113386.f_20564.f_88[iParam1];
				break;
			}
	}
	if (Global_55453[iVar0 /*36*/].f_8)
	{
		iVar2 = Global_55453[iVar0 /*36*/].f_35;
		if (iVar2 > -1)
		{
			STATS::STAT_SET_INT(Global_58334[iVar2 /*7*/].f_3[iParam0], iVar1, true);
		}
	}
	return;
}

void func_494(int iParam0, int iParam1, int iParam2)//Position - 0x3110
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			Global_113386.f_20564[iParam1] = iParam2;
			break;
		case 1:
			Global_113386.f_20564.f_33[iParam1] = iParam2;
			break;
		case 2:
			Global_113386.f_20564.f_66[iParam1] = iParam2;
			break;
	}
	return;
}

int func_495(int iParam0, int iParam1)//Position - 0x352A
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return Global_113386.f_20564.f_22[iParam1];
			break;
		case 1:
			return Global_113386.f_20564.f_55[iParam1];
			break;
		case 2:
			return Global_113386.f_20564.f_88[iParam1];
			break;
	}
	return 0;
}

int func_496(int iParam0, int iParam1)//Position - 0x37F1
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 31;
	}
	switch (iParam0)
	{
		case 0:
			return Global_113386.f_20564[iParam1];
		case 1:
			return Global_113386.f_20564.f_33[iParam1];
		case 2:
			return Global_113386.f_20564.f_66[iParam1];
		default:
	}
	return 31;
}

void func_497(int iParam0)//Position - 0x23B19
{
	Global_91193[iParam0 /*5*/] = -1;
	Global_91193[iParam0 /*5*/].f_1 = 0;
	Global_91193[iParam0 /*5*/].f_2 = -1;
	Global_91193[iParam0 /*5*/].f_3 = -1;
	Global_91193[iParam0 /*5*/].f_4 = 0;
}

void func_498(int iParam0, bool bParam1)//Position - 0x24BA9
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 4);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_499(int iParam0, bool bParam1)//Position - 0x24C2C
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 5);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_500(int iParam0, bool bParam1, bool bParam2)//Position - 0x24CAF
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 11);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_501(bool bParam0)//Position - 0x256C8
{
	int iVar0;
	int iVar1;
	if (!bParam0 == Global_38389)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 263)
		{
			MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
			iVar0++;
		}
		if (Global_32335 == 1)
		{
			Global_32336 = 1;
		}
		Global_32335 = 1;
	}
	Global_38389 = bParam0;
	HUD::SET_MINIMAP_IN_PROLOGUE(bParam0);
	iVar1 = ZONE::GET_ZONE_FROM_NAME_ID("PrLog");
	ZONE::SET_ZONE_ENABLED(iVar1, bParam0);
}

void func_502()//Position - 0x25977
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), true);
			PED::SET_PED_GRAVITY(PLAYER::PLAYER_PED_ID(), true);
		}
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), true);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
}

void func_503(int iParam0)//Position - 0x278E9
{
	Global_47582[iParam0 /*46*/] = 0;
	Global_47582[iParam0 /*46*/].f_31 = 0;
	Global_47582[iParam0 /*46*/].f_42 = 0;
	Global_47582[iParam0 /*46*/].f_45 = 0;
	Global_47582[iParam0 /*46*/].f_43 = 0;
	Global_47582[iParam0 /*46*/].f_1 = 0;
}

void func_504(int iParam0, bool bParam1)//Position - 0x4ED55
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 20);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 20);
}

void func_505(char* sParam0, char* sParam1)//Position - 0x3AA9
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_21662 = 1;
		StringCopy(&Global_21669, sParam0, 24);
		StringCopy(&Global_21663, sParam1, 24);
	}
}

int func_506()//Position - 0x649F
{
	if (Global_20251)
	{
		return 1;
	}
	return 0;
}

int func_507(int iParam0, var uParam1)//Position - 0x8C13
{
	if (Global_47582[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_47582[iParam0 /*46*/].f_32[Global_47582[iParam0 /*46*/].f_42] = uParam1;
	Global_47582[iParam0 /*46*/].f_42++;
	return 1;
}

bool func_508(int iParam0)//Position - 0x8C58
{
	return Global_47582[iParam0 /*46*/].f_1;
}

bool func_509(int iParam0)//Position - 0x8C69
{
	return Global_47582[iParam0 /*46*/];
}

int func_510(var uParam0, int iParam1)//Position - 0xE0E1
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return BitTest(uParam0, iParam1);
		default:
	}
	return 0;
}

int func_511(int iParam0)//Position - 0xE75E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (Global_113386.f_7688[iVar0 /*15*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_512(char* sParam0)//Position - 0x28AC
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_112029))
	{
		return 1;
	}
	if (__LIB_9__::func_610(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_513(var uParam0)//Position - 0x28A3
{
	__LIB_0__::func_14(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

bool func_514(var uParam0)//Position - 0x5847
{
	return (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false, -1));
}

void func_515(var uParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE0A3
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = uParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_516(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE0E8
{
	int iVar0;
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

int func_517(struct<3> Param0, float fParam1)//Position - 0x1D286
{
	struct<3> Var0;
	Var0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0, Param0 + Var0, false, true, true, true);
}

void func_518()//Position - 0x214
{
	Global_113383 = 0;
}

void func_519(int* iParam0, bool bParam1)//Position - 0x537
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
		}
		if (bParam1)
		{
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_520(int iParam0)//Position - 0x182A
{
	switch (Global_113386.f_25073)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
			break;
		case 1:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 7, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 1, 0);
			break;
		case 2:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 2, 0);
			break;
		case 3:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
			break;
		case 4:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
			break;
	}
}

float func_521()//Position - 0x198E
{
	return 194.8257f;
}

Vector3 func_522()//Position - 0x199B
{
	return 1964.0383f, 3114.6345f, 46.1319f;
}

int func_523()//Position - 0x19B2
{
	switch (Global_113386.f_25073)
	{
		case 0:
			return joaat("stalion2");
			break;
		case 1:
			return joaat("gauntlet2");
			break;
		case 2:
			return joaat("dominator2");
			break;
		case 3:
			return joaat("buffalo3");
			break;
		case 4:
			return joaat("marshall");
			break;
	}
	return joaat("buffalo3");
}

Vector3 func_524()//Position - 0x1E73
{
	return 1967.042f, 3116.0051f, 45.8901f;
}

void func_525()//Position - 0x66559
{
	Global_23150.f_8807 = 0;
}

void func_526()//Position - 0x667DD
{
	Global_23150.f_8807 = 1;
}

struct<13> func_527(char* sParam0)//Position - 0x675A3
{
	struct<13> Var0;
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam0, &Var0, 13);
	return Var0;
}

bool func_528(int iParam0)//Position - 0x684CC
{
	return iParam0 == 11;
}

bool func_529(int iParam0)//Position - 0x684D9
{
	return iParam0 == 9;
}

bool func_530(int iParam0)//Position - 0x684E6
{
	return (iParam0 == 1 || iParam0 == 67);
}

bool func_531(int iParam0)//Position - 0x684FD
{
	return iParam0 == 6;
}

bool func_532(int iParam0)//Position - 0x68509
{
	return iParam0 == 4;
}

bool func_533(int iParam0)//Position - 0x6857B
{
	return iParam0 == 3;
}

void func_534(int iParam0, var uParam1, var uParam2)//Position - 0x68B74
{
	if (iParam0 == 1)
	{
		if (*uParam2 < 2)
		{
			*uParam2 = 2;
		}
	}
	else if (*uParam2 < 1)
	{
		*uParam2 = 1;
	}
	if (*uParam1 < *uParam2)
	{
		*uParam1 = *uParam2;
	}
}

int func_535(int iParam0)//Position - 0x68BAA
{
	if (NETWORK::UGC_GET_CONTENT_HAS_HI_RES_PHOTO(iParam0))
	{
		return 2;
	}
	else if (NETWORK::UGC_GET_CONTENT_HAS_LO_RES_PHOTO(iParam0))
	{
		return 1;
	}
	return 1;
}

int func_536(float fParam0, int iParam1)//Position - 0x68BD0
{
	int iVar0;
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = SYSTEM::ROUND((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

Vector3 func_537(int iParam0)//Position - 0x68C16
{
	struct<3> Var0;
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camp") == 3)
	{
		Var0.f_0 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "camp");
	}
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camp") == 2)
	{
		Var0.f_0 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iParam0, "camp"));
	}
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camh") == 3)
	{
		Var0.f_2 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "camh");
	}
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camh") == 2)
	{
		Var0.f_2 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_538(int iParam0, char* sParam1)//Position - 0x68CA4
{
	struct<3> Var0;
	var* uVar1;
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 5)
	{
		Var0 = { DATAFILE::DATADICT_GET_VECTOR(iParam0, sParam1) };
	}
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 6)
	{
		uVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, sParam1);
		if (DATAFILE::DATADICT_GET_TYPE(uVar1, "x") == 2)
		{
			Var0.f_0 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(uVar1, "x"));
		}
		else
		{
			Var0.f_0 = DATAFILE::DATADICT_GET_FLOAT(uVar1, "x");
		}
		if (DATAFILE::DATADICT_GET_TYPE(uVar1, "y") == 2)
		{
			Var0.f_1 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(uVar1, "y"));
		}
		else
		{
			Var0.f_1 = DATAFILE::DATADICT_GET_FLOAT(uVar1, "y");
		}
		if (DATAFILE::DATADICT_GET_TYPE(uVar1, "z") == 2)
		{
			Var0.f_2 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(uVar1, "z"));
		}
		else
		{
			Var0.f_2 = DATAFILE::DATADICT_GET_FLOAT(uVar1, "z");
		}
	}
	return Var0;
}

int func_539(int iParam0)//Position - 0x68F48
{
	return Global_262145.f_29252[iParam0];
}

int func_540(int iParam0)//Position - 0x68F8A
{
	if ((Global_262145.f_6086[0] == iParam0 || Global_262145.f_6086[6] == iParam0) || Global_262145.f_6086[13] == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_541(struct<3> Param0)//Position - 0x6C27E
{
	int iVar0;
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 986.86176f, 74.74512f, 115.03913f, 975.716f, 57.44831f, 118.0387f, 14.5625f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 1093.3151f, 219.74074f, -50.989967f, 1084.5271f, 219.22704f, -45.92859f, 8.75f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 380.203f, -70.9054f, 102.181f, 382.593f, -62.2445f, 104.988f, 21.56f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1016f, -437.619f, 62.6791f, -1020.69f, -429.961f, 65.4861f, 21.56f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -588.595f, -705.387f, 111.823f, -587.902f, -714.344f, 114.63f, 21.56f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -992.769f, -760.456f, 60.7122f, -1001.73f, -761.172f, 63.5192f, 21.56f, false, true))
	{
		return 1;
	}
	if (Global_2789203)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_2789203.f_1[iVar0 /*3*/], Global_2789203.f_11[iVar0 /*3*/], Global_2789203.f_21[iVar0], false, true))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_542()//Position - 0x6D3B2
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREATOR_RSC" /* GXT: Rockstar */);
}

int func_543(int iParam0)//Position - 0x6E250
{
	switch (iParam0)
	{
		case 86:
			return joaat("gerald");
		case 19:
			return joaat("LAMAR");
		case 12:
			return joaat("lester");
		case 31:
			return joaat("martin");
		case 20:
			return joaat("ron");
		case 18:
			return joaat("simeon");
		case 2:
			return joaat("TREVOR");
		case 76:
			return joaat("AGENT14");
		case 22:
			return joaat("pa");
		case 53:
			return joaat("hao");
		case 34:
			return joaat("oscar");
		case 152:
			return joaat("lazlow");
		case 85:
			return joaat("merryweather");
		case 84:
			return joaat("brucie");
		case 0:
			return joaat("MICHAEL");
		case 1:
			return joaat("FRANKLIN");
		case 153:
			return joaat("englishdave");
		case 151:
			return joaat("tony");
		case 14:
			return joaat("JIMMY");
		case 15:
			return joaat("tracey");
		case 24:
			return joaat("wade");
		case 30:
			return joaat("dave");
		case 46:
			return joaat("rickie");
		case 47:
			return joaat("chef");
		case 54:
			return joaat("hunter");
		case 51:
			return joaat("cris");
		case 60:
			return joaat("marnie");
		case 62:
			return joaat("maude");
		case 66:
			return joaat("ashley");
		case 69:
			return joaat("omega");
		case 154:
			return joaat("paige");
		case 82:
			return joaat("ray");
		case 157:
			return joaat("agatha");
		case 79:
			return joaat("yachtcaptain");
		case 167:
			return joaat("miguelmadrazo");
		case 169:
			return joaat("pavel");
		case 171:
			return joaat("moodymann");
		case 172:
			return joaat("sessanta");
		case 173:
			return joaat("kdj");
		case 177:
			return -763093917;
		case 182:
			return joaat("ulp");
		case 145:
			return 0;
		default:
	}
	return 0;
}

int func_544(int iParam0)//Position - 0x6E4BE
{
	switch (iParam0)
	{
		case 0:
			return 86;
		case 1:
			return 19;
		case 2:
			return 12;
		case 3:
			return 31;
		case 4:
			return 20;
		case 5:
			return 18;
		case 6:
			return 2;
		case 7:
			return 76;
		case 8:
			return 22;
		case 9:
			return 53;
		case 10:
			return 34;
		case 11:
			return 152;
		case 12:
			return 85;
		case 13:
			return 84;
		case 14:
			return 0;
		case 15:
			return 1;
		case 16:
			return 153;
		case 17:
			return 151;
		case 18:
			return 14;
		case 19:
			return 15;
		case 20:
			return 24;
		case 21:
			return 30;
		case 22:
			return 46;
		case 23:
			return 47;
		case 24:
			return 54;
		case 25:
			return 51;
		case 26:
			return 60;
		case 27:
			return 62;
		case 28:
			return 66;
		case 29:
			return 69;
		case 30:
			return 154;
		case 31:
			return 82;
		case 32:
			return 157;
		case 33:
			return 79;
		case 34:
			return 167;
		case 35:
			return 169;
		case 36:
			return 171;
		case 37:
			return 172;
		case 38:
			return 173;
		case 39:
			return 177;
		case 40:
			return 182;
		default:
	}
	return 19;
}

Vector3 func_545(int iParam0, int iParam1)//Position - 0x6E9C2
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -15.6168f, 0.1008f, -149.8604f;
				case 1:
					return 3.5927f, 0.1008f, 156.3615f;
				case 2:
					return 3.4157f, 0.112f, 16.4938f;
				case 3:
					return 5.3856f, 0f, 112.9827f;
				case 4:
					return 4.2705f, 0f, 19.1749f;
				case 5:
					return -5.2724f, 0f, 42.8827f;
				case 6:
					return 12.4243f, 0f, 57.4707f;
				case 7:
					return -15.6168f, 0.1008f, -149.8604f;
				default:
			}
			return 2.8273f, 0f, 0.0625f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_546(int iParam0, int iParam1)//Position - 0x6EA9F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -209.1766f, -1305.476f, 34.7404f;
				case 1:
					return -1601.5316f, -1039.5056f, 17.2286f;
				case 2:
					return -8.6889f, -1727.8302f, 30.3896f;
				case 3:
					return 1997.4958f, 3054.6897f, 54.605f;
				case 4:
					return 967.5151f, -1735.4604f, 32.0426f;
				case 5:
					return 779.6009f, -1424.6042f, 32.9774f;
				case 6:
					return -331.129f, -1492.0455f, 30.3228f;
				case 7:
					return -209.1766f, -1305.476f, 34.7404f;
				default:
			}
			return -61.784f, -1538.7018f, 43.8935f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_547(int iParam0, int iParam1)//Position - 0x6EDBF
{
	int iVar0;
	int iVar1;
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (((Global_262145.f_6890[iVar1] == 202 || Global_262145.f_6890[iVar1] == 203) || Global_262145.f_6890[iVar1] == 204) || (iParam1 && ((((((((((((Global_262145.f_6890[iVar1] == 224 || Global_262145.f_6890[iVar1] == 223) || Global_262145.f_6890[iVar1] == 232) || Global_262145.f_6890[iVar1] == 245) || Global_262145.f_6890[iVar1] == 246) || Global_262145.f_6890[iVar1] == 251) || Global_262145.f_6890[iVar1] == 252) || Global_262145.f_6890[iVar1] == 253) || Global_262145.f_6890[iVar1] == 161) || Global_262145.f_6890[iVar1] == 278) || Global_262145.f_6890[iVar1] == 279) || Global_262145.f_6890[iVar1] == 302) || Global_262145.f_6890[iVar1] == 303)))
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6210[iVar1])
				{
					if (iParam0 == Global_262145.f_5065[iVar1 /*51*/][iVar0])
					{
						return iVar1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_548(var uParam0, int iParam1)//Position - 0x6F6EC
{
	uParam0->f_4 = iParam1;
}

int func_549()//Position - 0x6FAB1
{
	if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if ((__LIB_0__::func_52() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0) && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (__LIB_0__::func_53() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

var func_550()//Position - 0x6FC0A
{
	return Global_2723612.f_4;
}

void func_551(var uParam0)//Position - 0x7779F
{
	*uParam0 = Global_1920756;
	uParam0->f_1 = Global_1920757;
	uParam0->f_2 = Global_1920758;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 1;
	uParam0->f_7 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = -1;
	uParam0->f_10 = -1;
	uParam0->f_11 = -1;
	uParam0->f_12 = -1;
	uParam0->f_13 = 0;
}

void func_552(var uParam0)//Position - 0x77863
{
	uParam0->f_1 = -1;
	*uParam0 = -1;
	uParam0->f_2 = -1;
}

void func_553(var uParam0)//Position - 0x77894
{
	*uParam0 = 5;
	uParam0->f_1 = 120;
	uParam0->f_2 = 3;
	uParam0->f_3 = 50;
}

void func_554(var uParam0)//Position - 0x778B1
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 1;
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

void func_555(char* sParam0)//Position - 0x778D1
{
	StringCopy(sParam0, "", 64);
	sParam0->f_16 = -1;
	sParam0->f_17 = 0;
	sParam0->f_18 = 0;
	sParam0->f_19 = 0;
	sParam0->f_20 = 0;
	sParam0->f_21 = 0;
	sParam0->f_22 = 0;
	sParam0->f_23 = 0;
}

void func_556(var uParam0)//Position - 0x77909
{
	int iVar0;
	int iVar1;
	uParam0->f_1 = 0;
	*uParam0 = -1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		uParam0->f_2[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		uParam0->f_6[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		uParam0->f_13[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			uParam0->f_30[iVar1 /*6*/][iVar0] = -1;
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_73[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_78[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_83[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_88[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			uParam0->f_93[iVar1 /*6*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_118[iVar1 /*3*/] = 0;
		uParam0->f_118[iVar1 /*3*/].f_1 = -1;
		uParam0->f_118[iVar1 /*3*/].f_2 = -1;
		iVar1++;
	}
	uParam0->f_131 = 0;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_132[iVar1 /*5*/][iVar0] = 0;
			uParam0->f_148[iVar1 /*5*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		uParam0->f_164[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		StringCopy(&(uParam0->f_170[iVar1 /*16*/]), "", 64);
		iVar1++;
	}
}

void func_557(var uParam0)//Position - 0x77AF0
{
	struct<14> Var0;
	int iVar1;
	Var0 = 1077936128;
	Var0.f_1 = 1116471296;
	Var0.f_2 = 1086324736;
	Var0.f_3 = 1077936128;
	Var0.f_4 = 1114636288;
	Var0.f_5 = 1084227584;
	Var0.f_6 = 1084227584;
	Var0.f_7 = 1089470464;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 4;
	*uParam0 = { Var0 };
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_4718592.f_174966.f_9[iVar1] = -1;
		iVar1++;
	}
}

void func_558()//Position - 0x77B85
{
	Global_4718592.f_168710 = { 0f, 0f, 0f };
	Global_4718592.f_168713 = 30f;
	Global_4718592.f_168714 = 5f;
	Global_4718592.f_168715 = 30000;
	Global_4718592.f_168716 = 15000;
}

int func_559(int iParam0, int iParam1, int iParam2)//Position - 0x77D7E
{
	switch (iParam0)
	{
		case 5:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 9:
							return joaat("sandking");
						default:
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 3:
						case 6:
							return joaat("sandking");
						case 5:
						case 8:
						case 9:
							return joaat("cavalcade");
						default:
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 6:
						case 8:
						case 9:
							return joaat("speedo");
						default:
					}
					break;
			}
			return joaat("sandking");
			break;
		case 7:
			return joaat("G_M_Y_Lost_01");
			break;
		case 15:
			return joaat("buzzard2");
			break;
		case 27:
			return joaat("U_M_Y_Juggernaut_01");
			break;
	}
	return 0;
}

int func_560(int iParam0, int iParam1)//Position - 0x783A6
{
	if (iParam1 > 6)
	{
		iParam1 = (iParam1 - 5);
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_MICROSMG");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_COMBATPISTOL");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_MICROSMG");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_COMBATPISTOL");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_MICROSMG");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_COMBATPISTOL");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_MICROSMG");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_MICROSMG");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_MICROSMG");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_MICROSMG");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_MICROSMG");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_COMBATMG");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_COMBATMG");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_COMBATMG");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_COMBATMG");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_COMBATMG");
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_CARBINERIFLE");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_RPG");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_CARBINERIFLE");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_CARBINERIFLE");
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN");
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_HEAVYSNIPER");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_GRENADE");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_GRENADE");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_HEAVYSNIPER");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_ASSAULTSHOTGUN");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_RPG");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_CARBINERIFLE");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_GRENADE");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_GRENADELAUNCHER");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_ASSAULTSHOTGUN");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_GRENADE");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_CARBINERIFLE");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_STICKYBOMB");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_GRENADELAUNCHER");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_ASSAULTSHOTGUN");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_GRENADE");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_MINIGUN");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_STICKYBOMB");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_GRENADELAUNCHER");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_MINIGUN");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_RPG");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_MINIGUN");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_STICKYBOMB");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
			}
			break;
		default:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
				case 1:
					return joaat("PICKUP_WEAPON_GRENADELAUNCHER");
					break;
				case 2:
					return joaat("PICKUP_WEAPON_MINIGUN");
					break;
				case 3:
					return joaat("PICKUP_WEAPON_RPG");
					break;
				case 4:
					return joaat("PICKUP_WEAPON_MINIGUN");
					break;
				case 5:
					return joaat("PICKUP_WEAPON_STICKYBOMB");
					break;
				case 6:
					return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
					break;
			}
			break;
	}
	return joaat("PICKUP_WEAPON_RPG");
}

int func_561(int iParam0, int iParam1)//Position - 0x7898D
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					return joaat("WEAPON_COMBATMG");
				default:
			}
			return joaat("WEAPON_PISTOL");
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("WEAPON_PISTOL");
				case 2:
					return joaat("WEAPON_SMG");
				case 3:
					return joaat("WEAPON_COMBATMG");
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("WEAPON_ASSAULTSHOTGUN");
				case 1:
				case 2:
					return joaat("WEAPON_SMG");
				case 3:
					return joaat("WEAPON_COMBATMG");
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("WEAPON_ASSAULTSHOTGUN");
				case 1:
					return joaat("WEAPON_ASSAULTRIFLE");
				case 2:
					return joaat("WEAPON_SMG");
				case 3:
					return joaat("WEAPON_COMBATMG");
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("WEAPON_CARBINERIFLE");
				case 1:
					return joaat("WEAPON_ASSAULTRIFLE");
				case 2:
					return joaat("WEAPON_ASSAULTSHOTGUN");
				case 3:
					return joaat("WEAPON_COMBATMG");
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("WEAPON_MG");
				case 1:
					return joaat("WEAPON_ASSAULTRIFLE");
				case 2:
					return joaat("WEAPON_ASSAULTSHOTGUN");
				case 3:
					return joaat("WEAPON_MINIGUN");
				default:
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("WEAPON_ASSAULTRIFLE");
				case 2:
					return joaat("WEAPON_ASSAULTSHOTGUN");
				case 3:
					return joaat("WEAPON_MINIGUN");
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("WEAPON_COMBATMG");
				case 1:
				case 2:
					return joaat("WEAPON_ASSAULTRIFLE");
				case 3:
					return joaat("WEAPON_MINIGUN");
				default:
			}
			break;
		case 9:
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("WEAPON_COMBATMG");
				case 2:
					return joaat("WEAPON_MINIGUN");
				case 3:
					return joaat("WEAPON_MINIGUN");
				default:
			}
			break;
		default:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("WEAPON_COMBATMG");
				case 2:
					return joaat("WEAPON_MINIGUN");
				case 3:
					return joaat("WEAPON_MINIGUN");
				default:
			}
			break;
	}
	return joaat("WEAPON_PISTOL");
}

int func_562(int iParam0, int iParam1, int iParam2)//Position - 0x78C1F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 1:
						case 2:
							return 1;
						case 3:
						case 4:
						case 5:
							return 2;
						case 6:
						case 7:
						case 8:
							return 3;
						case 9:
						case 10:
							return 4;
						default:
					}
					return 4;
					break;
				case 1:
					switch (iParam1)
					{
						case 1:
						case 2:
							return 1;
						case 3:
						case 4:
						case 5:
							return 2;
						case 6:
						case 7:
						case 8:
							return 3;
						case 9:
						case 10:
							return 4;
						default:
					}
					return 4;
					break;
				case 2:
					switch (iParam1)
					{
						case 1:
							return 0;
						case 2:
							return 1;
						case 3:
							return 0;
						case 4:
						case 5:
							return 2;
						case 6:
							return 0;
						case 7:
						case 8:
							return 3;
						case 9:
						case 10:
							return 4;
						default:
					}
					return 4;
					break;
			}
			break;
		case 1:
			return 5;
			break;
		case 3:
			switch (iParam1)
			{
				case 3:
				case 5:
				case 6:
				case 8:
					return 2;
				default:
			}
			return 0;
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 6:
				case 8:
				case 9:
					return 0;
				default:
			}
			return 1;
			break;
		case 4:
			return 2;
			break;
		case 8:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 125;
				case 4:
				case 5:
				case 6:
					return 150;
				case 7:
				case 8:
				case 9:
				case 10:
					return 200;
				default:
			}
			return 200;
			break;
		case 9:
			switch (iParam1)
			{
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
					return 30;
				default:
			}
			return 20;
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 15;
				case 4:
				case 5:
				case 6:
					return 20;
				case 7:
				case 8:
				case 9:
					return 25;
				case 10:
					return 30;
				default:
			}
			return 30;
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					return 0;
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
				case 7:
				case 8:
				case 9:
				case 10:
					return 2;
				default:
			}
			return 2;
			break;
		case 13:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					return 3;
				default:
			}
			return 4;
			break;
		case 14:
			return 1000;
			break;
		case 16:
			return 350;
			break;
		case 17:
			switch (iParam1)
			{
				case 1:
				case 2:
					return 0;
				case 3:
				case 4:
				case 5:
					return 1;
				case 6:
				case 7:
				case 8:
					return 2;
				case 9:
				case 10:
					return 3;
				default:
			}
			return 3;
			break;
		case 18:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 2;
				case 3:
					return 1;
				case 4:
				case 5:
					return 2;
				case 6:
					return 1;
				case 7:
				case 8:
				case 9:
				case 10:
					return 2;
				default:
			}
			return 2;
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 0;
				case 4:
				case 5:
				case 6:
					return 1;
				case 7:
				case 8:
				case 9:
					return 2;
				case 10:
					return 3;
				default:
			}
			return 3;
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 3:
							return 2;
						default:
					}
					return 0;
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 0;
						case 2:
							return 2;
						case 3:
							return 2;
						default:
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 1;
						case 1:
						case 2:
							return 2;
						case 3:
							return 2;
						default:
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							return 1;
						case 1:
							return 3;
						case 2:
							return 2;
						case 3:
							return 2;
						default:
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 3;
						case 2:
							return 1;
						case 3:
							return 2;
						default:
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return 2;
						case 1:
							return 3;
						case 2:
							return 1;
						case 3:
							return 5;
						default:
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 3;
						case 2:
							return 1;
						case 3:
							return 5;
						default:
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 0:
							return 2;
						case 1:
						case 2:
							return 3;
						case 3:
							return 5;
						default:
					}
					break;
				case 9:
				case 10:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 2;
						case 2:
							return 5;
						case 3:
							return 5;
						default:
					}
					break;
				default:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 2;
						case 2:
							return 5;
						case 3:
							return 5;
						default:
					}
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 3:
							return 25;
						default:
					}
					return 0;
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 0;
						case 2:
							return 23;
						case 3:
							return 25;
						default:
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 16;
						case 1:
						case 2:
							return 23;
						case 3:
							return 25;
						default:
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							return 16;
						case 1:
							return 33;
						case 2:
							return 23;
						case 3:
							return 25;
						default:
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							return 34;
						case 1:
							return 33;
						case 2:
							return 16;
						case 3:
							return 25;
						default:
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return 24;
						case 1:
							return 33;
						case 2:
							return 16;
						case 3:
							return 51;
						default:
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 33;
						case 2:
							return 16;
						case 3:
							return 51;
						default:
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 0:
							return 25;
						case 1:
						case 2:
							return 33;
						case 3:
							return 51;
						default:
					}
					break;
				case 9:
				case 10:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 25;
						case 2:
							return 51;
						case 3:
							return 51;
						default:
					}
					break;
				default:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 25;
						case 2:
							return 51;
						case 3:
							return 51;
						default:
					}
					break;
			}
			break;
		case 24:
			return 0;
			break;
		case 25:
			return 4;
			break;
		case 26:
			return 4;
			break;
		case 28:
			return -1;
			break;
	}
	return 0;
}

void func_563()//Position - 0x7954E
{
	int iVar0;
	int iVar1;
	Global_4718592.f_162525 = 0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_4718592.f_162525.f_9[iVar0 /*3*/][iVar1] = -1;
			Global_4718592.f_162525.f_5[iVar0 /*3*/][iVar1] = -1;
			Global_4718592.f_162525.f_1[iVar0 /*3*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_564(var uParam0)//Position - 0x79DC8
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 10f;
	uParam0->f_5 = 50f;
	uParam0->f_6 = 0f;
}

void func_565(var uParam0)//Position - 0x79DFA
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_566(var uParam0, int iParam1)//Position - 0x79E53
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		uParam0->f_7[iParam1 /*27*/][iVar0] = 0;
		iVar0++;
	}
	uParam0->f_7[iParam1 /*27*/].f_2 = { 0f, 0f, 0f };
	uParam0->f_7[iParam1 /*27*/].f_5 = 0f;
	uParam0->f_7[iParam1 /*27*/].f_6 = 0;
	uParam0->f_7[iParam1 /*27*/].f_7 = -1;
	uParam0->f_7[iParam1 /*27*/].f_8 = { 0f, 0f, 0f };
	uParam0->f_7[iParam1 /*27*/].f_11 = 3;
	uParam0->f_7[iParam1 /*27*/].f_12 = 0f;
	uParam0->f_7[iParam1 /*27*/].f_13 = 0f;
	uParam0->f_7[iParam1 /*27*/].f_14 = -1;
	uParam0->f_7[iParam1 /*27*/].f_15 = 0f;
	uParam0->f_7[iParam1 /*27*/].f_16 = -1;
	uParam0->f_7[iParam1 /*27*/].f_17 = 0;
	uParam0->f_7[iParam1 /*27*/].f_18 = 0;
	uParam0->f_7[iParam1 /*27*/].f_19 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_7[iParam1 /*27*/].f_20[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_7[iParam1 /*27*/].f_25 = 0;
	uParam0->f_7[iParam1 /*27*/].f_26 = 0;
}

void func_567(int iParam0)//Position - 0x79F56
{
	Global_4980736.f_93429[iParam0 /*45*/] = 0;
	Global_4980736.f_93429[iParam0 /*45*/].f_1 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_2 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_3 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_4 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_5 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_6 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_7 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_8 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_9 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_10 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_11 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_12 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_13 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_14 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_15 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_16 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_17 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_21 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_22 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_26 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_27 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_28 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_29 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_30 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_31 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_32 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_33 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_34 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_35 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_36 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_37 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_38 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_39 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_40 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_41 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_42 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_43 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_44 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_23 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_24 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_18 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_19 = 0;
	Global_4980736.f_93429[iParam0 /*45*/].f_20 = -1;
	Global_4980736.f_93429[iParam0 /*45*/].f_25 = -1;
}

void func_568(var uParam0)//Position - 0x7A7D0
{
	uParam0->f_1 = 0;
	uParam0->f_3 = -1;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_569(var uParam0)//Position - 0x7A7EB
{
	(*uParam0)[0] = 2f;
	(*uParam0)[1] = 3f;
	(*uParam0)[2] = 4f;
}

void func_570(var uParam0)//Position - 0x7A805
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_3 = 0;
	uParam0->f_2 = -1;
}

void func_571()//Position - 0x7A820
{
	int iVar0;
	Global_4718592.f_169028 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_4718592.f_169029[iVar0 /*11*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4718592.f_169029[iVar0 /*11*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4718592.f_169029[iVar0 /*11*/].f_7 = 0;
		Global_4718592.f_169029[iVar0 /*11*/].f_8 = 0;
		Global_4718592.f_169029[iVar0 /*11*/].f_10 = 0f;
		Global_4718592.f_169029[iVar0 /*11*/].f_9 = 0;
		iVar0++;
	}
}

void func_572()//Position - 0x7AB2E
{
	Global_4718592.f_180134[0 /*256*/].f_1.f_7 = 0;
	Global_4718592.f_180134[0 /*256*/].f_1.f_3 = 0;
	Global_4718592.f_180134[0 /*256*/].f_1 = 1;
	Global_4718592.f_180134[0 /*256*/].f_1.f_1 = 0;
}

int func_573()//Position - 0x7AC9F
{
	if (Global_4718592 == 0 && Global_4718592.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_574(bool bParam0)//Position - 0x7ACC2
{
	if (!bParam0)
	{
		return Global_4718592 == 0;
	}
	if ((((((Global_4718592 == 0 || Global_4718592 == 4) || Global_4718592 == 6) || Global_4718592 == 3) || Global_4718592 == 31) || Global_4718592.f_2 == 6) || Global_4718592.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

void func_575(var uParam0)//Position - 0x7AD34
{
	uParam0->f_1 = -1;
	*uParam0 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
}

void func_576(var uParam0)//Position - 0x7AD63
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_4 = 0;
}

void func_577(var uParam0)//Position - 0x7AD88
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
}

void func_578(var uParam0)//Position - 0x7ADAD
{
	int iVar0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 1f;
	uParam0->f_3 = 4f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 5f;
	uParam0->f_9 = 0f;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		uParam0->f_10[iVar0 /*5*/] = 0;
		uParam0->f_10[iVar0 /*5*/].f_1 = 70;
		uParam0->f_10[iVar0 /*5*/].f_2 = 3000;
		uParam0->f_10[iVar0 /*5*/].f_3 = 250;
		uParam0->f_10[iVar0 /*5*/].f_4 = 1;
		iVar0++;
	}
}

void func_579(var uParam0)//Position - 0x7AE34
{
	int iVar0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_4 = 999999f;
	uParam0->f_5 = 999999f;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_6[iVar0 /*11*/] = 0;
		uParam0->f_6[iVar0 /*11*/].f_1 = 0;
		uParam0->f_6[iVar0 /*11*/].f_2 = 0f;
		uParam0->f_6[iVar0 /*11*/].f_3 = 0f;
		uParam0->f_6[iVar0 /*11*/].f_4 = 0f;
		uParam0->f_6[iVar0 /*11*/].f_5 = 0;
		uParam0->f_6[iVar0 /*11*/].f_6 = { 0f, 0f, 0f };
		uParam0->f_6[iVar0 /*11*/].f_9 = -1;
		uParam0->f_6[iVar0 /*11*/].f_10 = -1;
		iVar0++;
	}
	uParam0->f_29 = 0;
	uParam0->f_29.f_1 = 0;
	uParam0->f_29.f_3 = 0;
	uParam0->f_29.f_2 = -1;
	uParam0->f_33 = 0;
	uParam0->f_34 = 0f;
	uParam0->f_35 = -1;
	uParam0->f_36 = -1;
	uParam0->f_46 = -1;
	uParam0->f_37 = -1;
	uParam0->f_38 = -1;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_41 = 0;
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0f;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		uParam0->f_48[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_47 = 0;
}

void func_580(var uParam0)//Position - 0x7B18C
{
	int iVar0;
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_9 = -1;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = -1;
	uParam0->f_15 = -1;
	uParam0->f_16 = 0;
}

void func_581(var uParam0)//Position - 0x7B1F7
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
}

void func_582(var uParam0)//Position - 0x7B217
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_583(var uParam0)//Position - 0x7B22D
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_584(var uParam0)//Position - 0x7B24D
{
	int iVar0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 255;
	uParam0->f_6 = 1f;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_11 = 0;
	uParam0->f_12 = -1;
	uParam0->f_30 = -1;
	uParam0->f_31 = -1;
	uParam0->f_32 = 0;
	uParam0->f_33 = 0;
	uParam0->f_10 = 0f;
	uParam0->f_34 = 75;
	uParam0->f_34.f_1 = 100f;
	uParam0->f_34.f_2 = 1000f;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_13[iVar0 /*4*/].f_1 = -1;
		uParam0->f_13[iVar0 /*4*/].f_2 = -1;
		uParam0->f_13[iVar0 /*4*/].f_3 = 0;
		uParam0->f_13[iVar0 /*4*/] = 0;
		iVar0++;
	}
}

void func_585(var uParam0)//Position - 0x7B302
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

void func_586(var uParam0)//Position - 0x7B32A
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_2.f_1 = 0f;
	uParam0->f_2.f_2 = 1f;
	uParam0->f_2.f_3 = 3f;
	uParam0->f_2.f_4 = 4f;
	uParam0->f_2.f_5 = 3f;
	uParam0->f_2.f_6 = -1;
	uParam0->f_2.f_7 = -1;
	uParam0->f_2.f_8 = -1;
}

void func_587(var uParam0, int iParam1)//Position - 0x7B39B
{
	*(uParam0[iParam1 /*3*/]) = { 0f, 0f, 0f };
	uParam0->f_91[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_182[iParam1] = 0;
}

void func_588(int iParam0)//Position - 0x7B3F0
{
	Global_4718592.f_169889[iParam0] = 0;
}

int func_589()//Position - 0x7B80A
{
	if ((((((((((((Global_4718592.f_107227 == 7 || Global_4718592.f_107227 == 8) || Global_4718592.f_107227 == 9) || Global_4718592.f_107227 == 19) || Global_4718592.f_107227 == 5) || Global_4718592.f_107227 == 1) || Global_4718592.f_107227 == 3) || Global_4718592.f_107227 == 11) || Global_4718592.f_107227 == 13) || Global_4718592.f_107227 == 23) || Global_4718592.f_107227 == 21) || Global_4718592.f_107227 == 25) || Global_4718592.f_107227 == 26)
	{
		return 1;
	}
	return 0;
}

int func_590()//Position - 0x7B907
{
	return 102;
}

void func_591(var uParam0)//Position - 0x7B911
{
	struct<30> Var0;
	Var0.f_1.f_2 = 10;
	Var0.f_14.f_2 = 10;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	*uParam0 = { Var0 };
}

void func_592(var uParam0)//Position - 0x7B94E
{
	*uParam0 = 0;
	*uParam0 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_3 = 0;
}

void func_593(var uParam0)//Position - 0x7B96D
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_594(var uParam0)//Position - 0x7B9B9
{
	int iVar0;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_4 = 10000;
	uParam0->f_5 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_14 = 0;
}

void func_595(int iParam0)//Position - 0x7BA88
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_4718592.f_176572[iParam0 /*8*/].f_4[iVar0] = -1;
		iVar0++;
	}
}

void func_596()//Position - 0x7BAB6
{
	int iVar0;
	Global_4718592.f_176701 = 0;
	Global_4718592.f_176701.f_1 = 1;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Global_4718592.f_176701.f_2[iVar0] = 0;
		iVar0++;
	}
}

void func_597(var uParam0)//Position - 0x7BAF8
{
	int iVar0;
	int iVar1;
	uParam0->f_181 = -1;
	uParam0->f_182 = 0;
	uParam0->f_183 = 0;
	uParam0->f_187 = -1;
	uParam0->f_188 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		(*uParam0)[iVar0 /*12*/] = 0;
		(uParam0[iVar0 /*12*/])->f_1 = 0;
		(uParam0[iVar0 /*12*/])->f_2 = -1;
		(uParam0[iVar0 /*12*/])->f_3 = -1;
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			(uParam0[iVar0 /*12*/])->f_5[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_184 = 0;
	uParam0->f_184.f_1 = -1;
	uParam0->f_184.f_2 = -1;
}

void func_598(var uParam0)//Position - 0x7BB80
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		*(uParam0[iVar0 /*3*/]) = { 0f, 0f, 0f };
		uParam0->f_37[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_50 = 0;
	uParam0->f_51 = -1;
}

void func_599(var uParam0)//Position - 0x7BFD3
{
	uParam0->f_3 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = 3;
}

int func_600()//Position - 0x7BFF6
{
	return 40;
}

void func_601(var uParam0)//Position - 0x7C0DD
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 10f;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
}

void func_602(var uParam0)//Position - 0x7C256
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "", 32);
}

void func_603(var uParam0)//Position - 0x7C285
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(uParam0[iVar0 /*6*/], "", 24);
		iVar0++;
	}
}

void func_604(var uParam0)//Position - 0x7C2AB
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_605(char* sParam0, int iParam1)//Position - 0x7C45A
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_113[iParam1] = 0;
		sParam0->f_68[iParam1] = 0f;
		sParam0->f_89[iParam1] = 0f;
		sParam0->f_134[iParam1] = 0;
		sParam0->f_155[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_216[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_277[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_338[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_399[iParam1] = 0f;
		sParam0->f_420[iParam1] = 0f;
		sParam0->f_441[iParam1] = 0;
		sParam0->f_462[iParam1] = -1;
		sParam0->f_546[iParam1] = 0f;
		sParam0->f_525[iParam1] = 500;
		sParam0->f_483[iParam1] = -1;
		sParam0->f_504[iParam1] = 0f;
		sParam0->f_594[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1387[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1448[iParam1] = 0f;
		sParam0->f_1469[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1530[iParam1] = 0f;
		sParam0->f_655[iParam1] = 0f;
		StringCopy(&(sParam0->f_1225[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1306[iParam1 /*4*/]), "", 16);
		sParam0->f_567[iParam1] = 0;
	}
}

void func_606(var uParam0, int iParam1)//Position - 0x7C5B7
{
	(*uParam0)[iParam1] = 0;
	uParam0->f_9[iParam1] = 0;
	uParam0->f_18[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_43[iParam1] = 0f;
}

void func_607(var uParam0)//Position - 0x7C5E5
{
	*uParam0 = 0;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0;
}

void func_608(var uParam0)//Position - 0x7C604
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_609(var uParam0)//Position - 0x7C640
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = 20f;
	uParam0->f_6 = 45f;
	uParam0->f_7 = 60f;
	uParam0->f_8 = 75f;
	uParam0->f_9 = 5f;
	uParam0->f_10 = 20f;
	uParam0->f_11 = 60f;
	uParam0->f_12 = 75f;
	uParam0->f_13 = 5;
	uParam0->f_14 = 20f;
}

void func_610()//Position - 0x7C6AD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		Global_4718592.f_107926[iVar0] = 0;
		iVar0++;
	}
}

void func_611()//Position - 0x7C6D6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_4718592.f_116682[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

void func_612()//Position - 0x7C703
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_4718592.f_172946.f_2[iVar0 /*20*/] = 0;
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_1 = -1;
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_2 = 0;
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_3 = 0;
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_4 = { 0f, 0f, 0f };
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_7 = { 0f, 0f, 0f };
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_10 = { 0f, 0f, 0f };
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_13 = 10f;
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_14 = 10f;
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_15 = 20f;
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_16 = 3f;
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_17 = 90f;
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_18 = 3f;
		Global_4718592.f_172946.f_2[iVar0 /*20*/].f_19 = 1f;
		iVar0++;
	}
	Global_4718592.f_172946.f_1 = 0;
}

void func_613()//Position - 0x7C83F
{
	int iVar0;
	int iVar1;
	Global_4980736.f_202534 = 0;
	Global_4980736.f_202535 = 0;
	Global_4980736.f_202536 = 0;
	Global_4980736.f_202537 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4980736.f_201972[iVar0 /*17*/].f_3 = 0f;
		Global_4980736.f_201972[iVar0 /*17*/].f_15 = 0;
		Global_4980736.f_201972[iVar0 /*17*/].f_16 = -1;
		Global_4980736.f_201972[iVar0 /*17*/].f_14 = joaat("S_M_Y_Cop_01");
		Global_4980736.f_201972[iVar0 /*17*/] = { 0f, 0f, 0f };
		Global_4980736.f_201972[iVar0 /*17*/].f_4 = { 0f, 0f, 0f };
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_4980736.f_201972[iVar0 /*17*/].f_7[iVar1 /*3*/] = joaat("police3");
			Global_4980736.f_201972[iVar0 /*17*/].f_7[iVar1 /*3*/].f_1 = -1;
			Global_4980736.f_201972[iVar0 /*17*/].f_7[iVar1 /*3*/].f_2 = 0;
			iVar1++;
		}
		iVar0++;
	}
}

void func_614(int iParam0)//Position - 0x7C946
{
	int iVar0;
	Global_4718592.f_174140[iParam0 /*42*/] = -1;
	Global_4718592.f_174140[iParam0 /*42*/].f_1[0 /*3*/] = { 0f, 0f, 0f };
	Global_4718592.f_174140[iParam0 /*42*/].f_1[1 /*3*/] = { 0f, 0f, 0f };
	Global_4718592.f_174140[iParam0 /*42*/].f_8 = 0f;
	Global_4718592.f_174140[iParam0 /*42*/].f_9 = { 0f, 0f, 0f };
	Global_4718592.f_174140[iParam0 /*42*/].f_30 = { 0f, 0f, 0f };
	Global_4718592.f_174140[iParam0 /*42*/].f_30.f_3 = { 0f, 0f, 0f };
	Global_4718592.f_174140[iParam0 /*42*/].f_30.f_6 = 0f;
	Global_4718592.f_174140[iParam0 /*42*/].f_30.f_7 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4718592.f_174140[iParam0 /*42*/].f_12[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4718592.f_174140[iParam0 /*42*/].f_25[iVar0] = 0f;
		iVar0++;
	}
	Global_4718592.f_174140[iParam0 /*42*/].f_38 = -1;
	Global_4718592.f_174140[iParam0 /*42*/].f_39 = -1;
	Global_4718592.f_174140[iParam0 /*42*/].f_40 = -1;
	Global_4718592.f_174140[iParam0 /*42*/].f_41 = 0;
}

void func_615(int iParam0)//Position - 0x7CDB1
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_4718592.f_561[iParam0 /*6*/][iVar0] = 0;
		iVar0++;
	}
}

void func_616(var uParam0, int iParam1)//Position - 0x7CDDE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_617(var uParam0)//Position - 0x82F6B
{
	if (Global_23150.f_75 >= 3 || Global_23150.f_74 >= 4)
	{
		return;
	}
	Global_23150.f_5[Global_23150.f_74] = 2;
	Global_23150.f_74++;
	Global_23150.f_10[Global_23150.f_75] = uParam0;
	Global_23150.f_75++;
}

bool func_618()//Position - 0x8AF27
{
	return Global_2723612.f_3;
}

void func_619(int iParam0, int iParam1, bool bParam2)//Position - 0x8FF4A
{
	Global_2703735.f_925 = iParam0;
	Global_2703735.f_926 = iParam1;
	if (bParam2)
	{
		Global_2703735.f_924 = iParam0;
	}
	if ((Global_2703735.f_925 == 1 || Global_2703735.f_925 == 5) || Global_2703735.f_925 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 115, true);
		}
	}
}

void func_620(var uParam0)//Position - 0x7164
{
	int iVar0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

int func_621(var uParam0)//Position - 0x7786
{
	if ((BitTest(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_622(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0xABC2
{
	int iVar0;
	if (*uParam2 == 0)
	{
		if (Global_2097536[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680[iParam3 /*16*/] = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680.f_49[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_67[Global_2097536.f_2779];
			Global_2101680.f_53[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_60[Global_2097536.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_2097536.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_2097536.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { __LIB_0__::func_604(PLAYER::PLAYER_ID()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_2097536.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_2097536.f_2775[iParam3] + iVar0) < 12 && (Global_2097536.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

bool func_623()//Position - 0xFB3F
{
	return BitTest(Global_1048576.f_10, 1);
}

int func_624(int iParam0)//Position - 0xFB5D
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_625()//Position - 0xFC2E
{
	Global_2097157.f_73 = Global_2097157.f_142;
	Global_2097157.f_73.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_73.f_2 = Global_2097157.f_142.f_2;
	Global_2097157.f_211 = Global_2097157.f_142;
	Global_2097157.f_211.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_211.f_2 = Global_2097157.f_142.f_2;
}

int func_626(int iParam0, int iParam1, int iParam2)//Position - 0xFC8E
{
	int iVar0;
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_627(int iParam0, int iParam1)//Position - 0xFD90
{
	if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_628(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16C1C
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

void func_629()//Position - 0x21965
{
	int iVar0;
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_2100721.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_630(var uParam0)//Position - 0x22A73
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

int func_631(var uParam0, var uParam1)//Position - 0x488
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::CLEAR_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

char* func_632(int iParam0)//Position - 0x5C6
{
	switch (iParam0)
	{
		case 0:
			return "MPArcadeGamesFX05";
			break;
		case 1:
			return "MPArcadeGamesFX05";
			break;
		case 2:
			return "";
			break;
		case 3:
			return "MPArcadeGamesFX03";
			break;
		case 4:
			return "MPArcadeGamesFX04";
			break;
		case 5:
			return "MPArcadeGamesFX00";
			break;
		case 6:
			return "MPArcadeGamesFX02";
			break;
		case 7:
			return "MPArcadeGamesFX01";
			break;
	}
	return "";
}

void func_633(int iParam0)//Position - 0x678
{
	if (iParam0 != 0)
	{
		GRAPHICS::STOP_BINK_MOVIE(iParam0);
		GRAPHICS::RELEASE_BINK_MOVIE(iParam0);
	}
}

bool func_634()//Position - 0x600C4
{
	return PED::IS_SYNCHRONIZED_SCENE_RUNNING(__LIB_3__::func_703());
}

float func_635(float fParam0)//Position - 0x634E4
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_130));
	return fParam0;
}

char* func_636(int iParam0)//Position - 0x638FF
{
	switch (iParam0)
	{
		case 0:
			return "TV_LINE_OVERLAY_DEGENATRON";
			break;
		case 1:
			return "SCREEN_GRAD_100_50";
			break;
		case 2:
			return "";
			break;
		case 3:
			return "Screen_Overlay_2";
			break;
		case 4:
			return "Screen_Overlay_4";
			break;
		case 5:
			return "Screen_Overlay_8";
			break;
		case 6:
			return "Grid_1";
			break;
		case 7:
			return "FlatScreen1";
			break;
	}
	return "";
}

char* func_637(int iParam0)//Position - 0x64A87
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
			return "MPArcadeDegenatronCharacters";
		case 5:
			return "MPGoGoSpaceResident";
		case 6:
			return "MPLastGunslingersHud";
		case 12:
			return "MPCamhedzVHSFont";
		case 8:
		case 9:
		case 10:
			return "MPRoadArcade_HUD_Gen";
		case 7:
			return "MPWizardsSleeveCharacters";
		case 11:
			return "MPQub3d_HUD";
		default:
	}
	return "";
}

float func_638()//Position - 0x66FB5
{
	return 150f;
}

struct<2> func_639(struct<2> Param0, float fParam1)//Position - 0x69983
{
	struct<2> Var0;
	Var0.f_0 = (Param0.f_0 * fParam1);
	Var0.f_1 = (Param0.f_1 * fParam1);
	return Var0;
}

void func_640(var uParam0, char* sParam1)//Position - 0x6AD46
{
	*uParam0 = GRAPHICS::SET_BINK_MOVIE(sParam1);
	GRAPHICS::PLAY_BINK_MOVIE(*uParam0);
	GRAPHICS::SET_BINK_SHOULD_SKIP(*uParam0, true);
	GRAPHICS::SET_BINK_MOVIE_AUDIO_FRONTEND(*uParam0, true);
}

float func_641()//Position - 0x6B91A
{
	return (1.778f / fLocal_130);
}

float func_642()//Position - 0x6B92A
{
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&uLocal_132, &iLocal_133);
	fLocal_130 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (MISC::IS_PC_VERSION())
	{
		if (fLocal_130 >= 4f)
		{
			fLocal_130 = (fLocal_130 / 3f);
		}
	}
	return fLocal_130;
}

int func_643(bool bParam0)//Position - 0x4B00
{
	if (BitTest(Global_32208, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_644(int iParam0)//Position - 0x4E44
{
	switch (iParam0)
	{
		case joaat("A_C_Chickenhawk"):
		case joaat("A_C_Cormorant"):
		case joaat("A_C_Crow"):
		case joaat("A_C_Hen"):
		case joaat("A_C_Pigeon"):
		case joaat("A_C_Seagull"):
			return 1;
			break;
	}
	return 0;
}

int func_645(bool bParam0)//Position - 0x4E7F
{
	if (BitTest(Global_32207, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_646(int iParam0)//Position - 0x4EC5
{
	MISC::SET_BIT(&Global_1836145, iParam0);
}

void func_647(bool bParam0, bool bParam1)//Position - 0x4F18
{
	if (BitTest(Global_32118, bParam0))
	{
		if (!bParam1)
		{
			MISC::CLEAR_BIT(&Global_32118, bParam0);
			StringCopy(&(Global_32119[bParam0 /*6*/]), "NULL", 24);
			Global_32174[bParam0] = bParam1;
		}
	}
}

void func_648(int iParam0)//Position - 0x4FA3
{
	MISC::CLEAR_BIT(&Global_1836145, iParam0);
}

int func_649(int iParam0)//Position - 0x678D
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_UNARMED");
			break;
		case 1:
			return joaat("WEAPON_ANIMAL");
			break;
		case 2:
			return joaat("WEAPON_COUGAR");
			break;
		case 3:
			return joaat("WEAPON_PISTOL");
			break;
		case 4:
			return joaat("WEAPON_COMBATPISTOL");
			break;
		case 5:
			return joaat("WEAPON_APPISTOL");
			break;
		case 6:
			return joaat("WEAPON_MICROSMG");
			break;
		case 7:
			return joaat("WEAPON_SMG");
			break;
		case 8:
			return joaat("WEAPON_ASSAULTRIFLE");
			break;
		case 9:
			return joaat("WEAPON_CARBINERIFLE");
			break;
		case 10:
			return joaat("WEAPON_ADVANCEDRIFLE");
			break;
		case 11:
			return joaat("WEAPON_MG");
			break;
		case 12:
			return joaat("WEAPON_COMBATMG");
			break;
		case 13:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 14:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
			break;
		case 15:
			return joaat("WEAPON_ASSAULTSHOTGUN");
			break;
		case 16:
			return joaat("WEAPON_SNIPERRIFLE");
			break;
		case 17:
			return joaat("WEAPON_HEAVYSNIPER");
			break;
		case 18:
			return joaat("WEAPON_REMOTESNIPER");
			break;
		case 19:
			return joaat("WEAPON_GRENADELAUNCHER");
			break;
		case 20:
			return joaat("WEAPON_GRENADELAUNCHER_SMOKE");
			break;
		case 21:
			return joaat("WEAPON_RPG");
			break;
		case 22:
			return joaat("WEAPON_MINIGUN");
			break;
		case 23:
			return joaat("WEAPON_STINGER");
			break;
		case 24:
			return joaat("WEAPON_GRENADE");
			break;
		case 25:
			return joaat("WEAPON_SMOKEGRENADE");
			break;
		case 26:
			return joaat("WEAPON_BZGAS");
			break;
		case 27:
			return joaat("WEAPON_STICKYBOMB");
			break;
		case 28:
			return joaat("WEAPON_MOLOTOV");
			break;
		case 29:
			return joaat("WEAPON_BALL");
			break;
		case 30:
			return joaat("WEAPON_FLARE");
			break;
		case 31:
			return joaat("WEAPON_STUNGUN");
			break;
		case 32:
			return joaat("WEAPON_FIREEXTINGUISHER");
			break;
		case 33:
			return joaat("WEAPON_PETROLCAN");
			break;
		case 34:
			return joaat("WEAPON_DIGISCANNER");
			break;
		case 35:
			return joaat("WEAPON_AIRSTRIKE_ROCKET");
			break;
		case 36:
			return joaat("WEAPON_HIT_BY_WATER_CANNON");
			break;
		case 37:
			return joaat("WEAPON_ELECTRIC_FENCE");
			break;
		case 38:
			return joaat("WEAPON_KNIFE");
			break;
		case 39:
			return joaat("WEAPON_NIGHTSTICK");
			break;
		case 40:
			return joaat("WEAPON_HAMMER");
			break;
		case 41:
			return joaat("WEAPON_BAT");
			break;
		case 42:
			return joaat("WEAPON_CROWBAR");
			break;
		case 43:
			return joaat("WEAPON_GOLFCLUB");
			break;
		case 44:
			return joaat("VEHICLE_WEAPON_TANK");
			break;
		case 45:
			return joaat("VEHICLE_WEAPON_SPACE_ROCKET");
			break;
		case 46:
			return joaat("VEHICLE_WEAPON_PLAYER_LASER");
			break;
		case 47:
			return joaat("VEHICLE_WEAPON_PLAYER_BULLET");
			break;
		case 48:
			return joaat("VEHICLE_WEAPON_ROTORS");
			break;
		case 49:
			return joaat("VEHICLE_WEAPON_PLAYER_BUZZARD");
			break;
		case 50:
			return joaat("WEAPON_PASSENGER_ROCKET");
			break;
		case 51:
			return joaat("WEAPON_VEHICLE_ROCKET");
			break;
		case 52:
			return joaat("VEHICLE_WEAPON_PLANE_ROCKET");
			break;
		case 53:
			return joaat("OBJECT");
			break;
		case 54:
			return joaat("WEAPON_BRIEFCASE");
			break;
		case 55:
			return joaat("WEAPON_BRIEFCASE_02");
			break;
		case 56:
			return joaat("GADGET_PARACHUTE");
			break;
		case 57:
			return joaat("GADGET_JETPACK");
			break;
		case 58:
			return joaat("AMMO_RPG");
			break;
		case 59:
			return joaat("AMMO_TANK");
			break;
		case 60:
			return joaat("AMMO_SPACE_ROCKET");
			break;
		case 61:
			return joaat("AMMO_PLAYER_LASER");
			break;
		case 62:
			return joaat("AMMO_ENEMY_LASER");
			break;
		case 63:
			return joaat("AMMO_GRENADELAUNCHER");
			break;
		case 64:
			return joaat("AMMO_GRENADELAUNCHER_SMOKE");
			break;
		case 65:
			return joaat("WEAPON_RAMMED_BY_CAR");
			break;
		case 66:
			return joaat("WEAPON_RUN_OVER_BY_CAR");
			break;
		case 67:
			return joaat("WEAPON_EXPLOSION");
			break;
		case 68:
			return joaat("WEAPON_FALL");
			break;
		case 69:
			return joaat("WEAPON_PISTOL50");
			break;
		case 70:
			return joaat("WEAPON_ASSAULTSMG");
			break;
		case 71:
			return joaat("WEAPON_HEAVYRIFLE");
			break;
		case 72:
			return joaat("WEAPON_BULLPUPSHOTGUN");
			break;
		case 73:
			return joaat("WEAPON_ASSAULTMG");
			break;
		case 74:
			return joaat("WEAPON_ASSAULTSNIPER");
			break;
		case 75:
			return joaat("WEAPON_PROGRAMMABLEAR");
			break;
		case 76:
			return joaat("WEAPON_RUBBERGUN");
			break;
		case 77:
			return joaat("WEAPON_LOUDHAILER");
			break;
		case 78:
			return joaat("WEAPON_SPECIALCARBINE");
			break;
		case 79:
			return joaat("WEAPON_BOTTLE");
			break;
		case 80:
			return joaat("WEAPON_BULLPUPRIFLE");
			break;
		case 81:
			return joaat("WEAPON_HEAVYPISTOL");
			break;
		case 82:
			return joaat("WEAPON_SNSPISTOL");
			break;
		case 83:
			return joaat("WEAPON_DAGGER");
			break;
		case 84:
			return joaat("WEAPON_VINTAGEPISTOL");
			break;
		case 85:
			return joaat("WEAPON_GUSENBERG");
			break;
		case 86:
			return joaat("WEAPON_HARPOON");
			break;
		case 87:
			return joaat("WEAPON_FLAREGUN");
			break;
		case 88:
			return joaat("WEAPON_FIREWORK");
			break;
		case 89:
			return joaat("WEAPON_MUSKET");
			break;
		case 90:
			return joaat("WEAPON_AMRIFLE");
			break;
		case 91:
			return joaat("WEAPON_CROSSBOW");
			break;
		case 92:
			return joaat("WEAPON_HEAVYSHOTGUN");
			break;
		case 93:
			return joaat("WEAPON_MARKSMANRIFLE");
			break;
		case 94:
			return joaat("WEAPON_GARBAGEBAG");
			break;
		case 95:
			return joaat("WEAPON_HANDCUFFS");
			break;
		case 96:
			return joaat("WEAPON_HOMINGLAUNCHER");
			break;
		case 97:
			return joaat("WEAPON_PROXMINE");
			break;
		case 98:
			return joaat("WEAPON_SNOWBALL");
			break;
		case 99:
			return joaat("WEAPON_HATCHET");
			break;
		case 100:
			return joaat("WEAPON_RAILGUN");
			break;
		case 101:
			return joaat("VEHICLE_WEAPON_TORPEDO");
			break;
		case 102:
			return -1443982089;
			break;
		case 103:
			return -1578596338;
			break;
		case 104:
			return joaat("WEAPON_KNUCKLE");
			break;
		case 105:
			return joaat("WEAPON_COMBATPDW");
			break;
		case 106:
			return joaat("WEAPON_MARKSMANPISTOL");
			break;
		case 107:
			return joaat("WEAPON_MACHETE");
			break;
		case 108:
			return joaat("WEAPON_MACHINEPISTOL");
			break;
		case 109:
			return joaat("WEAPON_FLASHLIGHT");
			break;
		case 110:
			return joaat("WEAPON_REVOLVER");
			break;
		case 111:
			return joaat("WEAPON_SWITCHBLADE");
			break;
		case 112:
			return joaat("WEAPON_DBSHOTGUN");
			break;
		case 113:
			return joaat("WEAPON_COMPACTRIFLE");
			break;
		case 114:
			return joaat("WEAPON_AUTOSHOTGUN");
			break;
		case 115:
			return joaat("WEAPON_BATTLEAXE");
			break;
		case 116:
			return joaat("WEAPON_COMPACTLAUNCHER");
			break;
		case 117:
			return joaat("WEAPON_MINISMG");
			break;
		case 118:
			return joaat("WEAPON_PIPEBOMB");
			break;
		case 119:
			return joaat("WEAPON_POOLCUE");
			break;
		case 120:
			return joaat("WEAPON_WRENCH");
			break;
		case 121:
			return joaat("WEAPON_ASSAULTRIFLE_MK2");
			break;
		case 122:
			return joaat("WEAPON_CARBINERIFLE_MK2");
			break;
		case 123:
			return joaat("WEAPON_COMBATMG_MK2");
			break;
		case 124:
			return joaat("WEAPON_HEAVYSNIPER_MK2");
			break;
		case 125:
			return joaat("WEAPON_PISTOL_MK2");
			break;
		case 126:
			return joaat("WEAPON_SMG_MK2");
			break;
		case 127:
			return joaat("WEAPON_DOUBLEACTION");
			break;
		case 128:
			return joaat("WEAPON_PUMPSHOTGUN_MK2");
			break;
		case 129:
			return joaat("WEAPON_SPECIALCARBINE_MK2");
			break;
		case 130:
			return joaat("WEAPON_SNSPISTOL_MK2");
			break;
		case 131:
			return joaat("WEAPON_MARKSMANRIFLE_MK2");
			break;
		case 132:
			return joaat("WEAPON_REVOLVER_MK2");
			break;
		case 133:
			return joaat("WEAPON_BULLPUPRIFLE_MK2");
			break;
		case 134:
			return joaat("WEAPON_RAYPISTOL");
			break;
		case 135:
			return joaat("WEAPON_RAYCARBINE");
			break;
		case 136:
			return joaat("WEAPON_RAYMINIGUN");
			break;
		case 137:
			return joaat("WEAPON_NAVYREVOLVER");
			break;
		case 138:
			return joaat("WEAPON_CERAMICPISTOL");
			break;
		case 139:
			return joaat("WEAPON_MILITARYRIFLE");
			break;
		case 140:
			return joaat("WEAPON_GADGETPISTOL");
			break;
		case 141:
			return joaat("WEAPON_COMBATSHOTGUN");
			break;
		case 142:
			return joaat("WEAPON_EMPLAUNCHER");
			break;
		case 143:
			return joaat("WEAPON_FERTILIZERCAN");
			break;
		case 144:
			return joaat("WEAPON_STUNGUN_MP");
			break;
		case 145:
			return joaat("WEAPON_METALDETECTOR");
			break;
		case 146:
			return joaat("WEAPON_TACTICALRIFLE");
			break;
		case 147:
			return joaat("WEAPON_PRECISIONRIFLE");
			break;
	}
	return 0;
}

int func_650(int iParam0)//Position - 0x71DC
{
	switch (iParam0)
	{
		case joaat("A_C_Boar"):
		case joaat("A_C_Cat_01"):
		case joaat("A_C_Cow"):
		case joaat("A_C_Coyote"):
		case joaat("A_C_Deer"):
		case joaat("A_C_Husky"):
		case joaat("A_C_MtLion"):
		case joaat("A_C_Pig"):
		case joaat("A_C_Poodle"):
		case joaat("A_C_Pug"):
		case joaat("A_C_Rabbit_01"):
		case joaat("A_C_Retriever"):
		case joaat("A_C_Rottweiler"):
		case joaat("A_C_shepherd"):
		case joaat("A_C_Westy"):
		case joaat("A_C_Chickenhawk"):
		case joaat("A_C_Cormorant"):
		case joaat("A_C_Crow"):
		case joaat("A_C_Hen"):
		case joaat("A_C_Pigeon"):
		case joaat("A_C_Seagull"):
		case joaat("A_C_Dolphin"):
		case joaat("A_C_Fish"):
		case joaat("A_C_KillerWhale"):
		case joaat("A_C_SharkHammer"):
		case joaat("A_C_SharkTiger"):
		case joaat("A_C_Stingray"):
		case joaat("IG_Orleans"):
			return 1;
			break;
	}
	return 0;
}

void func_651(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x8FA4
{
	if (Global_23150.f_5160 >= 12)
	{
		return;
	}
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam0, 16);
	Global_23150.f_5160++;
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sParam2, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), "PREV", 16);
	Global_23150.f_5160++;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sParam3, 64);
		StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), "PREV", 16);
		Global_23150.f_5160++;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sParam4, 64);
		StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), "PREV", 16);
		Global_23150.f_5160++;
	}
}

void func_652(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB93B
{
	Global_23150.f_8804 = iParam3;
	Global_23150.f_8801[0] = iParam1;
	Global_23150.f_8801[1] = iParam2;
	Global_23150.f_8805 = iParam0;
}

int func_653(int iParam0, int iParam1)//Position - 0xEC54
{
	int iVar0;
	if (iParam0 >= 312)
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return BitTest(Global_113386.f_25182[iParam0], iVar0);
}

void func_654(int iParam0)//Position - 0x11A6A
{
	Global_23150.f_5616 = iParam0;
}

int func_655()//Position - 0x127AB
{
	if (BitTest(Global_8138, 3))
	{
		return 1;
	}
	return 0;
}

int func_656()//Position - 0x14BE5
{
	if ((MISC::GET_GAME_TIMER() - PED::GET_TIME_PED_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BZGAS"))) < 500 || (MISC::GET_GAME_TIMER() - PED::GET_TIME_PED_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMOKEGRENADE"))) < 500)
	{
		return 1;
	}
	return 0;
}

int func_657()//Position - 0x14E82
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0 || Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_658()//Position - 0x14EAA
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"));
		if (!iVar0 == 7)
		{
			return 1;
		}
	}
	return 0;
}

int func_659()//Position - 0x14EDB
{
	switch (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192)
	{
		case 26:
		case 25:
		case 24:
		case 27:
		case 28:
		case 29:
		case 30:
		case 35:
			return 1;
		default:
	}
	return 0;
}

int func_660()//Position - 0x14F2A
{
	struct<3> Var0;
	if (Global_1931426)
	{
		Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
		if (Var0.f_2 > 1000f)
		{
			return 1;
		}
	}
	return 0;
}

int func_661()//Position - 0x15903
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						if (ENTITY::GET_ENTITY_SPEED(iVar0) < 0.5f)
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

int func_662()//Position - 0x1596A
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
				{
					return 1;
				}
				else if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_663(int iParam0, int iParam1)//Position - 0x16566
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 5;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 59:
					return 5;
					break;
				case 60:
					return 4;
					break;
				case 61:
					return 4;
					break;
				case 62:
					return 4;
					break;
				case 63:
					return 4;
					break;
				case 64:
					return 3;
					break;
				case 65:
					return 3;
					break;
				case 66:
					return 3;
					break;
			}
			break;
	}
	return -1;
}

float func_664(int iParam0, int iParam1)//Position - 0x16D1F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return Global_262145.f_115 /* Tunable: REDWOOD_HEALTH_DEPLETE_MULTIPLIER */;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 59:
					return Global_262145.f_115 /* Tunable: REDWOOD_HEALTH_DEPLETE_MULTIPLIER */;
					break;
				case 60:
					return Global_262145.f_116 /* Tunable: ORANGOTANG_HEALTH_REPLENISH_MULTIPLIER */;
					break;
				case 61:
					return Global_262145.f_117 /* Tunable: BOURGEOIX_HEALTH_REPLENISH_MULTIPLIER */;
					break;
				case 62:
					return Global_262145.f_117 /* Tunable: BOURGEOIX_HEALTH_REPLENISH_MULTIPLIER */;
					break;
				case 63:
					return Global_262145.f_118 /* Tunable: SPRUNK_HEALTH_REPLENISH_MULTIPLIER */;
					break;
				case 64:
					return Global_262145.f_112 /* Tunable: PSANDQS_HEALTH_REPLENISH_MULTIPLIER */;
					break;
				case 65:
					return Global_262145.f_113 /* Tunable: EGOCHASER_HEALTH_REPLENISH_MULTIPLIER */;
					break;
				case 66:
					return Global_262145.f_114 /* Tunable: METEORITE_HEALTH_REPLENISH_MULTIPLIER */;
					break;
			}
			break;
	}
	return 1f;
}

int func_665(int iParam0, int iParam1)//Position - 0x16DF1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return -5;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 59:
					return -5;
					break;
				case 60:
					return 9;
					break;
				case 61:
					return 0;
					break;
				case 62:
					return 0;
					break;
				case 63:
					return 9;
					break;
				case 64:
					return 5;
					break;
				case 65:
					return 15;
					break;
				case 66:
					return 10;
					break;
			}
			break;
	}
	return 0;
}

int func_666()//Position - 0x18E5F
{
	return Global_1933908.f_2768;
}

int func_667()//Position - 0x18EC7
{
	return Global_1931975;
}

int func_668(int iParam0, int iParam1)//Position - 0x1ACA7
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_669(int iParam0, int iParam1)//Position - 0x22EE8
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
				case 3:
					return 0;
					break;
			}
			return 1;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 60:
				case 61:
				case 63:
				case 64:
				case 65:
				case 66:
					return 0;
					break;
			}
			return 1;
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 0;
					break;
				default:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_670()//Position - 0x28104
{
	return 43;
}

void func_671(char* sParam0, char* sParam1, int iParam2)//Position - 0x98D3A
{
	switch (iParam2)
	{
		case joaat("A_C_Boar"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Cat_01"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Cow"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Coyote"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Deer"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Husky"):
			StringCopy(sParam0, "facials@creatures@retriever@bark", 64);
			break;
		case joaat("A_C_MtLion"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Pig"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Poodle"):
			StringCopy(sParam0, "facials@creatures@pug@bark", 64);
			break;
		case joaat("A_C_Pug"):
			StringCopy(sParam0, "facials@creatures@pug@bark", 64);
			break;
		case joaat("A_C_Rabbit_01"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Retriever"):
			StringCopy(sParam0, "facials@creatures@retriever@bark", 64);
			break;
		case joaat("A_C_Rottweiler"):
			StringCopy(sParam0, "facials@creatures@rottweile@bark", 64);
			break;
		case joaat("A_C_shepherd"):
			StringCopy(sParam0, "facials@creatures@retriever@bark", 64);
			break;
		case joaat("A_C_Westy"):
			StringCopy(sParam0, "facials@creatures@pug@bark", 64);
			break;
		case joaat("A_C_Chickenhawk"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Cormorant"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Crow"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Hen"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Pigeon"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Seagull"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Dolphin"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Fish"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_KillerWhale"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_SharkHammer"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_SharkTiger"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("A_C_Stingray"):
			StringCopy(sParam0, "", 64);
			break;
		case joaat("IG_Orleans"):
			StringCopy(sParam0, "", 64);
			break;
		default:
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(sParam1, "bark_facial", 16);
	}
}

void func_672(char* sParam0, int iParam1)//Position - 0x98F42
{
	switch (iParam1)
	{
		case joaat("A_C_Boar"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_BOAR", 64);
			StringCopy(&(sParam0->f_16), "BOAR", 32);
			StringCopy(&(sParam0->f_28), "EXCITED", 64);
			break;
		case joaat("A_C_Cat_01"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_CAT", 64);
			StringCopy(&(sParam0->f_16), "CAT", 32);
			StringCopy(&(sParam0->f_28), "CAT_MEOW", 64);
			break;
		case joaat("A_C_Cow"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_COW", 64);
			StringCopy(&(sParam0->f_16), "COW", 32);
			StringCopy(&(sParam0->f_28), "", 64);
			break;
		case joaat("A_C_Coyote"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_COYOTE", 64);
			StringCopy(&(sParam0->f_16), "COYOTE", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		case joaat("A_C_Deer"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_DEER", 64);
			StringCopy(&(sParam0->f_16), "DEER", 32);
			StringCopy(&(sParam0->f_28), "CALL", 64);
			break;
		case joaat("A_C_Husky"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_HUSKY", 64);
			StringCopy(&(sParam0->f_16), "HUSKY", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		case joaat("A_C_MtLion"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_MTLION", 64);
			StringCopy(&(sParam0->f_16), "MTLION", 32);
			StringCopy(&(sParam0->f_28), "ROAR", 64);
			break;
		case joaat("A_C_Pig"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_PIG", 64);
			StringCopy(&(sParam0->f_16), "PIG", 32);
			StringCopy(&(sParam0->f_28), "EXCITED", 64);
			break;
		case joaat("A_C_Poodle"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SMALL_DOG", 64);
			StringCopy(&(sParam0->f_16), "SMALL_DOG", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		case joaat("A_C_Pug"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SMALL_DOG", 64);
			StringCopy(&(sParam0->f_16), "SMALL_DOG", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		case joaat("A_C_Rabbit_01"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_RABBIT", 64);
			StringCopy(&(sParam0->f_16), "RABBIT", 32);
			StringCopy(&(sParam0->f_28), "RABBIT_SCREAM", 64);
			break;
		case joaat("A_C_Retriever"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_RETRIEVER", 64);
			StringCopy(&(sParam0->f_16), "RETRIEVER", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		case joaat("A_C_Rottweiler"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_ROTTWEILER", 64);
			StringCopy(&(sParam0->f_16), "ROTTWEILER", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		case joaat("A_C_shepherd"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SHEPHERD", 64);
			StringCopy(&(sParam0->f_16), "SHEPHERD", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		case joaat("A_C_Westy"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SMALL_DOG", 64);
			StringCopy(&(sParam0->f_16), "SMALL_DOG", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		case joaat("A_C_Chickenhawk"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_CHICKENHAWK", 64);
			StringCopy(&(sParam0->f_16), "CHICKENHAWK", 32);
			StringCopy(&(sParam0->f_28), "SCREECH", 64);
			break;
		case joaat("A_C_Cormorant"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_CORMORANT", 64);
			StringCopy(&(sParam0->f_16), "CORMORANT", 32);
			StringCopy(&(sParam0->f_28), "CALL", 64);
			break;
		case joaat("A_C_Crow"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_CROW", 64);
			StringCopy(&(sParam0->f_16), "CROW", 32);
			StringCopy(&(sParam0->f_28), "FLIGHT", 64);
			break;
		case joaat("A_C_Hen"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_HEN", 64);
			StringCopy(&(sParam0->f_16), "HEN", 32);
			StringCopy(&(sParam0->f_28), "SQUAWK", 64);
			break;
		case joaat("A_C_Pigeon"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_PIGEON", 64);
			StringCopy(&(sParam0->f_16), "PIGEON", 32);
			StringCopy(&(sParam0->f_28), "COO", 64);
			break;
		case joaat("A_C_Seagull"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEAGULL", 64);
			StringCopy(&(sParam0->f_16), "SEAGULL", 32);
			StringCopy(&(sParam0->f_28), "CALL", 64);
			break;
		case joaat("A_C_Dolphin"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_DOLPHIN", 64);
			StringCopy(&(sParam0->f_16), "DOLPHIN", 32);
			StringCopy(&(sParam0->f_28), "DOLPHIN_CALL", 64);
			break;
		case joaat("A_C_Fish"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEA_CREATURE", 64);
			StringCopy(&(sParam0->f_16), "SEA_CREATURE", 32);
			break;
		case joaat("A_C_KillerWhale"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEA_CREATURE", 64);
			StringCopy(&(sParam0->f_16), "SEA_CREATURE", 32);
			StringCopy(&(sParam0->f_28), "WHALE_CALL", 64);
			break;
		case joaat("A_C_SharkHammer"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEA_CREATURE", 64);
			StringCopy(&(sParam0->f_16), "SEA_CREATURE", 32);
			break;
		case joaat("A_C_SharkTiger"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEA_CREATURE", 64);
			StringCopy(&(sParam0->f_16), "SEA_CREATURE", 32);
			break;
		case joaat("A_C_Stingray"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEA_CREATURE", 64);
			StringCopy(&(sParam0->f_16), "SEA_CREATURE", 32);
			break;
		case joaat("IG_Orleans"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SASQUATCH", 64);
			StringCopy(&(sParam0->f_16), "SASQUATCH", 32);
			StringCopy(&(sParam0->f_24), "SAS_BANK_01", 16);
			StringCopy(&(sParam0->f_28), "PEYOTE_PLAYER_SECRET_VOCAL_MASTER", 64);
			break;
		default:
			break;
	}
}

int func_673(bool bParam0)//Position - 0x99666
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("A_M_M_EastSA_01");
			case 1:
				return joaat("A_M_M_BevHills_01");
			case 2:
				return joaat("A_M_M_BevHills_02");
			case 3:
				return joaat("A_M_M_Business_01");
			case 4:
				return joaat("A_M_M_Malibu_01");
			case 5:
				return joaat("A_M_M_EastSA_02");
			case 6:
				return joaat("A_M_M_Hillbilly_01");
			case 7:
				return joaat("A_M_M_Hillbilly_02");
			case 8:
				return joaat("A_M_M_OG_Boss_01");
			case 9:
				return joaat("A_M_M_StLat_02");
			case 10:
				return joaat("A_M_Y_BeachVesp_01");
			case 11:
				return joaat("A_M_Y_Epsilon_01");
			case 12:
				return joaat("A_M_M_ProlHost_01");
			case 13:
				return joaat("A_M_M_Salton_01");
			case 14:
				return joaat("A_M_M_Skater_01");
			case 15:
				return joaat("A_M_Y_Skater_02");
			case 16:
				return joaat("A_M_Y_MethHead_01");
			case 17:
				return joaat("A_M_M_Skidrow_01");
			case 18:
				return joaat("A_M_M_SouCent_01");
			case 19:
				return joaat("A_M_M_SouCent_02");
			case 20:
				return joaat("A_M_M_SouCent_03");
			case 21:
				return joaat("A_M_Y_GenStreet_02");
			case 22:
				return joaat("A_M_Y_RoadCyc_01");
			case 23:
				return joaat("A_M_M_AfriAmer_01");
			case 24:
				return joaat("A_M_M_Beach_01");
			case 25:
				return joaat("A_M_M_Farmer_01");
			case 26:
				return joaat("A_M_M_FatLatin_01");
			case 27:
				return joaat("A_M_M_GenFat_01");
			case 28:
				return joaat("A_M_M_Indian_01");
			case 29:
				return joaat("A_M_M_KTown_01");
			case 30:
				return joaat("A_M_M_SoCenLat_01");
			case 31:
				return joaat("A_M_M_MexLabor_01");
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("A_F_M_BevHills_01");
			case 1:
				return joaat("A_F_M_BevHills_02");
			case 2:
				return joaat("A_F_M_Beach_01");
			case 3:
				return joaat("A_F_M_KTown_02");
			case 4:
				return joaat("A_F_M_ProlHost_01");
			case 5:
				return joaat("A_F_M_BodyBuild_01");
			case 6:
				return joaat("A_F_M_Business_02");
			case 7:
				return joaat("A_F_M_Downtown_01");
			case 8:
				return joaat("A_F_M_EastSA_01");
			case 9:
				return joaat("A_F_M_EastSA_02");
			case 10:
				return joaat("A_F_M_FatWhite_01");
			case 11:
				return joaat("A_F_M_KTown_01");
			case 12:
				return joaat("A_F_M_KTown_02");
			case 13:
				return joaat("A_F_M_Salton_01");
			case 14:
				return joaat("A_F_M_SkidRow_01");
			case 15:
				return joaat("A_F_M_SouCent_01");
			case 16:
				return joaat("A_F_M_SouCent_02");
			case 17:
				return joaat("A_F_M_SouCentMC_01");
			case 18:
				return joaat("A_F_M_Tramp_01");
			case 19:
				return joaat("A_F_M_TrampBeac_01");
			case 20:
				return joaat("A_F_Y_Yoga_01");
			case 21:
				return joaat("A_F_Y_Vinewood_02");
			case 22:
				return joaat("A_F_Y_Vinewood_03");
			case 23:
				return joaat("A_F_Y_Vinewood_04");
			case 24:
				return joaat("A_F_Y_Tennis_01");
			case 25:
				return joaat("A_F_Y_Tourist_01");
			case 26:
				return joaat("A_F_Y_Hipster_01");
			case 27:
				return joaat("A_F_Y_Golfer_01");
			case 28:
				return joaat("A_F_Y_Fitness_01");
			case 29:
				return joaat("A_F_Y_SCDressy_01");
			case 30:
				return joaat("A_F_Y_Epsilon_01");
			case 31:
				return joaat("A_F_Y_Hiker_01");
			default:
		}
	}
	return joaat("A_F_M_BevHills_01");
}

Vector3 func_674(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0xA0B10
{
	float fVar0;
	fVar0 = ((1f - SYSTEM::COS(__LIB_0__::func_407((fParam2 * 3.1415927f)))) * 0.5f);
	return Param0 * FtoV((1f - fVar0)) + Param1 * Vector(fVar0, fVar0, fVar0);
}

void func_675(var uParam0)//Position - 0xA1E91
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
	{
		if (*uParam0 == -1)
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() > *uParam0 + 20000)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			*uParam0 = -1;
		}
	}
	else
	{
		*uParam0 = -1;
	}
}

void func_676(var uParam0)//Position - 0xBA2A2
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_677(var uParam0)//Position - 0xBA2C2
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_678(var uParam0)//Position - 0xBA30B
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

int func_679(int iParam0, int iParam1)//Position - 0xBD25F
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_680(int iParam0)//Position - 0xBD294
{
	if (iParam0 == joaat("submersible") || iParam0 == joaat("submersible2"))
	{
		return 1;
	}
	return 0;
}

bool func_681()//Position - 0xCADFE
{
	return Global_1577842;
}

void func_682(int iParam0)//Position - 0xD62CF
{
	int iVar0;
	int iVar1;
	Global_113386.f_20564.f_233[iParam0 /*69*/].f_1 = (Global_113386.f_20564.f_233[iParam0 /*69*/].f_1 - 1);
	if (Global_113386.f_20564.f_233[iParam0 /*69*/].f_1 < 0)
	{
		Global_113386.f_20564.f_233[iParam0 /*69*/].f_1 = 10;
	}
	iVar0 = Global_113386.f_20564.f_233[iParam0 /*69*/].f_2[Global_113386.f_20564.f_233[iParam0 /*69*/].f_1 /*6*/];
	iVar1 = Global_113386.f_20564.f_233[iParam0 /*69*/].f_2[Global_113386.f_20564.f_233[iParam0 /*69*/].f_1 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			Global_60328[iParam0] = (Global_60328[iParam0] - iVar1);
			break;
		case 0:
			Global_60328[iParam0] = (Global_60328[iParam0] + iVar1);
			break;
	}
	Global_113386.f_20564.f_233[iParam0 /*69*/].f_2[Global_113386.f_20564.f_233[iParam0 /*69*/].f_1 /*6*/].f_2 = 0;
	Global_113386.f_20564.f_233[iParam0 /*69*/].f_2[Global_113386.f_20564.f_233[iParam0 /*69*/].f_1 /*6*/].f_1 = 0;
	Global_113386.f_20564.f_233[iParam0 /*69*/] = (Global_113386.f_20564.f_233[iParam0 /*69*/] - 1);
	__LIB_0__::func_178(iParam0);
}

void func_683()//Position - 0xD9B31
{
	char cVar0[24];
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || __LIB_0__::func_52())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR" /* GXT: Playing story */, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

void func_684(int iParam0, int iParam1)//Position - 0xEF0
{
	if (iParam1 < 0)
	{
	}
	Global_113386.f_1.f_126[iParam0 /*23*/] = iParam1;
}

int func_685(int iParam0, int iParam1)//Position - 0x105B
{
	int iVar0;
	iVar0 = __LIB_0__::func_434(__LIB_0__::func_435(iParam0));
	if (iVar0 < 0)
	{
		return 15;
	}
	if (iVar0 >= 10)
	{
		return 15;
	}
	return Global_113386.f_1.f_12[iVar0 /*6*/][iParam1];
}

void func_686(bool bParam0, int iParam1)//Position - 0x2C6B2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (bParam0 == 145 || Global_97782[iVar0] == bParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == __LIB_6__::func_793(bParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_97772[iVar0], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97772[iVar0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_97772[iVar0]));
						Global_97782[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

var func_687()//Position - 0x2D35A
{
	return Global_103950.f_2890.f_12.f_66;
}

int func_688(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x32444
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						if (__LIB_6__::func_835(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, false, true, 0))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (__LIB_0__::func_443(iVar0, uParam0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (__LIB_0__::func_455(iVar0))
							{
								return 1;
							}
						}
					}
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
		}
	}
	return 0;
}

int func_689(var uParam0, int iParam1)//Position - 0x3279D
{
	int iVar0;
	int iVar1;
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		STREAMING::REQUEST_MODEL(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = MISC::GET_GAME_TIMER();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_690(int iParam0)//Position - 0x39561
{
	if ((Global_113386.f_9085 || Global_3) || __LIB_0__::func_2(0))
	{
		if (!Global_78319 || (Global_78319 && iParam0 != __LIB_0__::func_504(__LIB_0__::func_430())))
		{
			if (((iParam0 == 0 && !__LIB_0__::func_368(115)) || (iParam0 == 1 && !__LIB_0__::func_368(116))) || (iParam0 == 2 && !__LIB_0__::func_368(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_691(var uParam0, int iParam1, char* sParam2)//Position - 0x3BD46
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || iParam1 < 1)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_475)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			if (uParam0->f_475[iVar0 /*6*/].f_5 == iParam1 && MISC::ARE_STRINGS_EQUAL(uParam0->f_475[iVar0 /*6*/].f_4, sParam2))
			{
				uParam0->f_475[iVar0 /*6*/].f_2 = 0;
				if (!uParam0->f_475[iVar0 /*6*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, sParam2);
		uParam0->f_475[iVar1 /*6*/] = 1;
		uParam0->f_475[iVar1 /*6*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_475[iVar1 /*6*/].f_4 = sParam2;
		uParam0->f_475[iVar1 /*6*/].f_5 = iParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_692()//Position - 0x3BF90
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (__LIB_0__::func_75() && !__LIB_0__::func_436())
		{
			return 0;
		}
	}
	return 1;
}

int func_693()//Position - 0x3BFC0
{
	if (__LIB_0__::func_75())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

void func_694(var uParam0)//Position - 0x3C04C
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

int func_695(var uParam0, char* sParam1)//Position - 0x8159B
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		STREAMING::REQUEST_ANIM_DICT(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_696(int iParam0)//Position - 0x816CE
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave"))
	{
		if (DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_697(var uParam0, char* sParam1)//Position - 0x8FE34
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_698(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x959FB
{
	int iVar0;
	int iVar1;
	if (iParam1 == joaat("WEAPON_UNARMED"))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_202)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			if (uParam0->f_202[iVar0 /*7*/].f_4 == iParam1)
			{
				uParam0->f_202[iVar0 /*7*/].f_2 = 0;
				if (uParam0->f_202[iVar0 /*7*/].f_5 != iParam2 || uParam0->f_202[iVar0 /*7*/].f_6 != iParam3)
				{
					uParam0->f_202[iVar0 /*7*/].f_1 = 0;
					WEAPON::REQUEST_WEAPON_ASSET(iParam1, iParam2, iParam3);
					uParam0->f_202[iVar0 /*7*/].f_5 = iParam2;
					uParam0->f_202[iVar0 /*7*/].f_6 = iParam3;
				}
				else if (!uParam0->f_202[iVar0 /*7*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		WEAPON::REQUEST_WEAPON_ASSET(iParam1, iParam2, iParam3);
		uParam0->f_202[iVar1 /*7*/] = 1;
		uParam0->f_202[iVar1 /*7*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_202[iVar1 /*7*/].f_4 = iParam1;
		uParam0->f_202[iVar1 /*7*/].f_5 = iParam2;
		uParam0->f_202[iVar1 /*7*/].f_6 = iParam3;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_699(float fParam0)//Position - 0x98E36
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((fParam0 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
}

float func_700(int iParam0)//Position - 0x9B596
{
	struct<3> Var0;
	if (CAM::DOES_CAM_EXIST(iParam0))
	{
		Var0 = { CAM::GET_CAM_COORD(iParam0) };
		return Var0.f_2;
	}
	return 0f;
}

void func_701(var uParam0)//Position - 0xA09AD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_904[iVar0 /*5*/])
		{
			uParam0->f_904[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_955[iVar0 /*5*/])
		{
			uParam0->f_955[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_893)
	{
		uParam0->f_893.f_2 = 1;
	}
	if (uParam0->f_885)
	{
		uParam0->f_885.f_2 = 1;
	}
	if (uParam0->f_889)
	{
		uParam0->f_889.f_2 = 1;
	}
}

void func_702(var uParam0)//Position - 0xA1460
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*82*/]))
		{
			StringCopy(uParam0[iVar0 /*82*/], "", 64);
			(uParam0[iVar0 /*82*/])->f_16 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
				(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_703(int iParam0, bool bParam1, int iParam2)//Position - 0xA3496
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				if (bParam1 == 145 || bParam1 == Global_97782[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == __LIB_6__::func_793(bParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

struct<7> func_704(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0xA8B17
{
	struct<7> Var0;
	Var0 = { Param0 };
	Var0.f_3 = { Param1 };
	Var0.f_6 = fParam2;
	return Var0;
}

void func_705(int iParam0, int iParam1)//Position - 0x22F6
{
	if (iParam1 < 0)
	{
		Global_113386.f_1.f_126[iParam0 /*23*/].f_1 = Global_113386.f_1.f_126[iParam0 /*23*/];
	}
	else
	{
		Global_113386.f_1.f_126[iParam0 /*23*/].f_1 = iParam1;
	}
}

int func_706(int iParam0)//Position - 0x2494
{
	int iVar0;
	iVar0 = __LIB_0__::func_434(__LIB_0__::func_435(iParam0));
	return Global_96470[iVar0 /*19*/];
}

char* func_707(int iParam0)//Position - 0x2C9D
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

void func_708(int iParam0, int iParam1, int iParam2)//Position - 0x163FE
{
	if (iParam1 != 4)
	{
		iParam0->f_18[iParam1] = iParam2;
	}
}

void func_709(var uParam0, int iParam1)//Position - 0x8D6A5
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_75402[iVar0 /*2*/] == 0)
		{
			Global_75402[iVar0 /*2*/] = uParam0;
			Global_75402[iVar0 /*2*/].f_1 = iParam1;
			if (iVar0 == Global_75435)
			{
				Global_75435++;
			}
			return;
		}
		iVar0++;
	}
}

void func_710(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x970C3
{
	iParam0->f_43 = 1;
	iParam0->f_40 = iParam1;
	iParam0->f_41 = iParam2;
	iParam0->f_42 = iParam3;
}

int func_711(int iParam0, int iParam1)//Position - 0x971DB
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_113386.f_1988[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

void func_712(int iParam0)//Position - 0x977C3
{
	iParam0->f_43 = 0;
}

int func_713(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x9797B
{
	struct<3> Var0;
	struct<2> Var1;
	struct<2> Var2;
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param1, Param2, fParam3, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var2);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var2.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param2, fParam3, false, true))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, Var2.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param2, fParam3, false, true))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2.f_0, Var2.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param2, fParam3, false, true))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var1.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param2, fParam3, false, true))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, Var1.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param2, fParam3, false, true))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2.f_0, Var1.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param2, fParam3, false, true))
	{
		return 1;
	}
	return 0;
}

void func_714(struct<3> Param0, bool bParam1, bool bParam2)//Position - 0x99178
{
	Global_22711 = { Param0 };
	MISC::CLEAR_BIT(&Global_8137, 30);
	if (bParam1)
	{
		MISC::SET_BIT(&Global_8137, 29);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8137, 29);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&Global_8138, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8138, 1);
	}
}

void func_715()//Position - 0x9D98A
{
	Global_63160 = 0;
}

void func_716(bool bParam0)//Position - 0x9DC65
{
	if (!__LIB_0__::func_317(bParam0))
	{
		return;
	}
	Global_113386.f_2363.f_539.f_2332[bParam0] = 1;
}

void func_717(int iParam0, int iParam1, bool bParam2)//Position - 0xA3548
{
	if (__LIB_0__::func_317(iParam0))
	{
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_95468[iParam1]), iParam0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_95468[iParam1]), iParam0);
		}
	}
}

void func_718(int* iParam0)//Position - 0x1541
{
	if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_5));
	}
}

int func_719()//Position - 0x4484
{
	if (Global_100441 == 7)
	{
		return 1;
	}
	return 0;
}

int func_720(int iParam0)//Position - 0x52DB
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_721(var uParam0)//Position - 0xF16E
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		__LIB_11__::func_694(&(uParam0->f_893));
	}
}

void func_722(var uParam0, char* sParam1)//Position - 0xF6EF
{
	int iVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_273)
		{
			if (uParam0->f_273[iVar0 /*5*/])
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
				{
					if (uParam0->f_273[iVar0 /*5*/].f_1)
					{
						STREAMING::REMOVE_ANIM_DICT(sParam1);
						__LIB_11__::func_694(&(uParam0->f_273[iVar0 /*5*/]));
						return;
					}
					else
					{
						uParam0->f_273[iVar0 /*5*/].f_2 = 1;
						uParam0->f_1007 = 1;
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_723(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x16BA7
{
	Global_21602 = iParam0;
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_724(int iParam0)//Position - 0x16C2F
{
	MISC::SET_BIT(&Global_96296, iParam0);
}

void func_725(var uParam0)//Position - 0x17046
{
	uParam0->f_885.f_2 = 0;
	if (!uParam0->f_885.f_1)
	{
		if (!uParam0->f_885)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			uParam0->f_885 = 1;
		}
		uParam0->f_1007 = 1;
	}
}

int func_726(var uParam0, char* sParam1)//Position - 0x17175
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, false, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_727(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x1A7E2
{
	if (__LIB_0__::func_86(Param1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_893)
	{
		if (__LIB_0__::func_78(uParam0->f_893.f_4, Param1, 0) && uParam0->f_893.f_10 == fParam2)
		{
			uParam0->f_893.f_2 = 0;
			if (!uParam0->f_893.f_1)
			{
				uParam0->f_1007 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param1, fParam2, iParam3);
	uParam0->f_893 = 1;
	uParam0->f_893.f_3 = MISC::GET_GAME_TIMER();
	uParam0->f_893.f_4 = { Param1 };
	uParam0->f_893.f_7 = { 0f, 0f, 0f };
	uParam0->f_893.f_10 = fParam2;
	uParam0->f_1007 = 1;
	return 1;
}

void func_728(struct<3> Param0, var uParam1, int iParam2, int iParam3)//Position - 0x1B730
{
	if (__LIB_0__::func_294())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = uParam1;
		Global_100436 = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_100441.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100441.f_20), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_100441.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100441.f_20), 24);
		}
		__LIB_0__::func_6(1);
	}
}

void func_729()//Position - 0x1BA2E
{
	Global_96296 = 0;
}

bool func_730(int iParam0)//Position - 0x16B0E
{
	return BitTest(Global_96296, iParam0);
}

void func_731(int iParam0)//Position - 0x18396
{
	Global_96296 = 0;
	switch (iParam0)
	{
		case 72:
			__LIB_11__::func_724(2);
			__LIB_11__::func_724(4);
			break;
		case 73:
			__LIB_11__::func_724(0);
			__LIB_11__::func_724(1);
			__LIB_11__::func_724(7);
			break;
		case 92:
			__LIB_11__::func_724(10);
			__LIB_11__::func_724(9);
			__LIB_11__::func_724(13);
			__LIB_11__::func_724(6);
			break;
		case 68:
			__LIB_11__::func_724(11);
			break;
		case 78:
			__LIB_11__::func_724(14);
			break;
		case 79:
			__LIB_11__::func_724(3);
			break;
		default:
			break;
	}
}

void func_732(int iParam0, int iParam1, bool bParam2)//Position - 0x679FB
{
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113386.f_1.f_120[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[iParam0]), iParam1);
	}
	MISC::SET_BIT(&Global_96449, iParam0);
}

void func_733(int iParam0)//Position - 0x76A67
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
		while (CAM::IS_SCREEN_FADING_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_734(char* sParam0)//Position - 0x81E68
{
	__LIB_0__::func_210(sParam0, 7500, 1);
}

void func_735(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x821CA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (iParam3 == 0)
			{
				if (bParam2)
				{
					PED::DELETE_PED(&iParam0);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			}
			else if (iParam4 == 0)
			{
				if (bParam2)
				{
					PED::DELETE_PED(&iParam0);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			}
		}
	}
}

void func_736(int iParam0)//Position - 0x84B4A
{
	Global_20461 = iParam0;
}

void func_737(int iParam0)//Position - 0x84B96
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 15);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 15);
	}
}

int func_738()//Position - 0x84BB9
{
	if (BitTest(Global_8136, 15))
	{
		return 1;
	}
	return 0;
}

void func_739(int iParam0, int iParam1)//Position - 0x85134
{
	Global_1998[iParam0 /*29*/].f_18 = iParam1;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_18 = iParam1;
	}
}

int func_740()//Position - 0x85543
{
	if (Global_20266.f_1 == 6)
	{
		return 1;
	}
	return 0;
}

int func_741()//Position - 0x85633
{
	if (Global_22641)
	{
		return 1;
	}
	return 0;
}

int func_742(int iParam0, float fParam1, float fParam2)//Position - 0x8E9EA
{
	float fVar0;
	float fVar1;
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (fVar0 > fVar1)
		{
			if (ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 && ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 || ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_743(int iParam0)//Position - 0x90E3B
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_744(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x9D6C8
{
	if (bParam2)
	{
		PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Param0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
	}
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		STREAMING::LOAD_SCENE(Param0);
	}
}

void func_745(bool bParam0)//Position - 0x11A9
{
	Global_1931419.f_1 = 0;
	Global_1931419 = 0;
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3 = 0;
	}
	if (bParam0)
	{
		__LIB_0__::func_580(&(Global_1931419.f_2), 0, 0);
	}
	else
	{
		__LIB_0__::func_579(&(Global_1931419.f_2));
	}
}

void func_746(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x70D5
{
	*uParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
	*uParam2 = MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
	*uParam3 = MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
}

int func_747(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x29A02
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var1 = { __LIB_0__::func_79(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = __LIB_0__::func_156(Var1, Var0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_748(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4663
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 1;
	iVar2 = 0;
	while (iVar0 && iVar2 < 50)
	{
		iVar0 = 0;
		iVar3 = ((MISC::GET_RANDOM_INT_IN_RANGE(0, 50000) % (iParam3 - iParam2)) + iParam2);
		iVar1 = 0;
		while (iVar1 <= (iParam1 - 1))
		{
			if ((*iParam0)[iVar1] == iVar3)
			{
				iVar0 = 1;
				iVar1 = 999999;
			}
			iVar1++;
		}
		iVar2++;
	}
	if (iVar2 == 50)
	{
		return -1;
	}
	return iVar3;
}

int func_749(int iParam0)//Position - 0x2482
{
	switch (iParam0)
	{
		case 0:
			return 500;
			break;
		case 1:
			return 1000;
			break;
		case 2:
			return 1500;
			break;
		case 3:
			return 1500;
			break;
		case 4:
			return 2000;
			break;
	}
	return 0;
}

float func_750(int iParam0)//Position - 0x33D2
{
	switch (iParam0)
	{
		case 0:
			return 103.3f;
		case 1:
			return 55.7f;
		case 4:
			return 62.2f;
		default:
	}
	return 0f;
}

Vector3 func_751(int iParam0)//Position - 0x3458
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<2> Var5;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0f, 0f, 0f;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &uVar4, &Var5);
	return Vector(10.7548f, -555.7014f, -1900.2925f) - Vector(Var5.f_0, Var5.f_0, Var5.f_0) * Vector(0f, -0.7771f, -0.6293f) - Vector(Var5.f_1, Var5.f_1, Var5.f_1) * Vector(0f, -0.6293f, 0.7771f);
}

bool func_752()//Position - 0x3D4A
{
	return (STREAMING::HAS_ANIM_DICT_LOADED("missdrfriedlanderdrf_idles") && STREAMING::HAS_ANIM_DICT_LOADED("facials@drf"));
}

struct<8> func_753(int iParam0)//Position - 0x3D67
{
	struct<8> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "hand2chin_michael", 32);
			break;
		case 1:
			StringCopy(&Var0, "hand2chin_michael", 32);
			break;
		case 4:
			StringCopy(&Var0, "leanback_michael", 32);
			break;
		default:
			StringCopy(&Var0, "uneasy_michael", 32);
			break;
	}
	return Var0;
}

void func_754(var uParam0, int iParam1, bool bParam2)//Position - 0x4426
{
	if (iParam1 < 0 || iParam1 > 12)
	{
		return;
	}
	iParam1 += 11;
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_1), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), iParam1);
	}
}

int func_755()//Position - 0x4473
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_96906[iVar0] > 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_756(var uParam0, int iParam1)//Position - 0x46D6
{
	if (iParam1 < 0 || iParam1 > 12)
	{
		return 0;
	}
	iParam1 += 11;
	return BitTest(uParam0->f_1, iParam1);
}

bool func_757()//Position - 0x4701
{
	return Global_96908 > 0;
}

int func_758()//Position - 0x470F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_96903[iVar0] > 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_759(int iParam0)//Position - 0x473D
{
	if (iParam0 == 0)
	{
		return 1;
	}
	else if (iParam0 == 1)
	{
		return 2;
	}
	else if (iParam0 == 2)
	{
		return 4;
	}
	return 4;
}

void func_760(int iParam0, var uParam1, int* iParam2, int iParam3, var uParam4, struct<3> Param5, float fParam6, int iParam7)//Position - 0x4B0C
{
	int iVar0;
	int iVar1;
	*iParam2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			*iParam2 = 0;
		}
		else
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(*iParam2);
			if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
			{
				*iParam2 = 0;
			}
			else
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam2, -1, false);
				if (iVar1 != 0 && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					*iParam2 = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		*uParam1 = Global_96938[0];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam1, true, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (*uParam1 == *iParam2)
		{
			*uParam1 = 0;
		}
		else
		{
			VEHICLE::SET_VEHICLE_FIXED(*uParam1);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = VEHICLE::CREATE_VEHICLE(iParam7, Param5, fParam6, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam1, 6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam2))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam2, true, false);
		}
	}
	__LIB_0__::func_203(uParam4, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	__LIB_0__::func_203(uParam4, 1, iParam0, "FRIEDLANDER", 0, 1);
	if (CAM::DOES_CAM_EXIST(*iParam3))
	{
		CAM::DESTROY_CAM(*iParam3, false);
	}
	if (!CAM::DOES_CAM_EXIST(*iParam3))
	{
		*iParam3 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	}
	CAM::SET_CAM_COORD(*iParam3, -1906.8422f, -572.3835f, 19.1046f);
	CAM::SET_CAM_ROT(*iParam3, -1.5254f, 0.0003f, 171.4657f, 2);
	CAM::SET_CAM_FOV(*iParam3, 17f);
	CAM::SET_CAM_ACTIVE(*iParam3, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	STREAMING::NEW_LOAD_SCENE_STOP();
}

void func_761(int iParam0, int iParam1, int iParam2)//Position - 0x4CA6
{
	int iVar0;
	char cVar1[32];
	char cVar2[16];
	char cVar3[16];
	char cVar4[16];
	char cVar5[16];
	char cVar6[24];
	iVar0 = 521;
	StringCopy(&cVar1, "missdrfriedlanderdrf_idles", 32);
	StringCopy(&cVar2, "facials@drf", 16);
	StringCopy(&cVar3, "idle_michael", 16);
	StringCopy(&cVar4, "drf_idle_drf", 16);
	StringCopy(&cVar5, "michael_idle_01", 16);
	StringCopy(&cVar6, "drfriedlander_idle_01", 24);
	if (iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1907.39f, -577.33f, 17.64f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 318.6574f);
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cVar1, &cVar3, 1000f, -2f, -1, iVar0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cVar2, &cVar5, 1000f, -2f, -1, 32 | iVar0, 0f, false, 4, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	}
	if (iParam2 && !PED::IS_PED_INJURED(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, -1907.69f, -574.77f, 17.67f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, 177f);
		TASK::TASK_PLAY_ANIM(iParam0, &cVar1, &cVar4, 1000f, -2f, -1, iVar0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(iParam0, &cVar2, &cVar6, 1000f, -2f, -1, 32 | iVar0, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
	}
}

int func_762(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x1CD90
{
	int iVar0;
	*uParam3 = -99;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*uParam3 = 1;
					}
					break;
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*uParam3 = 1;
					}
					break;
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*uParam3 = 1;
					}
					break;
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*uParam3 = 1;
					}
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*uParam3 = 20;
					}
					break;
				case 8:
					if (iParam2 == 4)
					{
						*uParam3 = 19;
					}
					break;
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*uParam3 = 19;
					}
					break;
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*uParam3 = 19;
					}
					break;
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*uParam3 = 19;
					}
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*uParam3 = 2;
					}
					break;
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*uParam3 = 2;
					}
					break;
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*uParam3 = 2;
					}
					break;
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*uParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*uParam3 != -99)
	{
		iVar0 = __LIB_0__::func_19(iParam0);
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

void func_763(var uParam0, bool bParam1, bool bParam2)//Position - 0x1DFB3
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_1), bParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), bParam1);
	}
}

int func_764(var uParam0, int iParam1)//Position - 0x1E299
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if ((*uParam0)[iVar0] > 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_765(var uParam0, int iParam1)//Position - 0x1E2C6
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return 0;
	}
	return BitTest(uParam0->f_1, iParam1);
}

void func_766()//Position - 0x21B49
{
	STREAMING::REQUEST_ANIM_DICT("missdrfriedlanderdrf_idles");
	STREAMING::REQUEST_ANIM_DICT("facials@drf");
}

int func_767()//Position - 0x21C1A
{
	int iVar0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if ((((iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED")) || iVar0 == joaat("WEAPON_ELECTRIC_FENCE")) || iVar0 == joaat("GADGET_PARACHUTE")) || iVar0 == joaat("OBJECT"))
	{
		return 0;
	}
	return 1;
}

void func_768(char* sParam0, int iParam1)//Position - 0x21C81
{
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam0, "DRF_MIC_1_CS_1", 24);
			StringCopy(&(sParam0->f_6), "OBTNR1", 24);
			StringCopy(&(sParam0->f_12), "DRF_MIC_1_CS_2", 24);
			sParam0->f_18 = 293200;
			break;
		case 1:
			StringCopy(sParam0, "DRF_MIC_2_CS_1", 24);
			StringCopy(&(sParam0->f_6), "OBTNR2", 24);
			StringCopy(&(sParam0->f_12), "DRF_MIC_2_CS_2", 24);
			sParam0->f_18 = 243600;
			break;
		case 2:
			StringCopy(sParam0, "PBTINT1", 24);
			StringCopy(&(sParam0->f_6), "PBTNR2", 24);
			StringCopy(&(sParam0->f_12), "PBTOUT1", 24);
			break;
		case 3:
			StringCopy(sParam0, "PBTINT2", 24);
			StringCopy(&(sParam0->f_6), "PBTNR3", 24);
			StringCopy(&(sParam0->f_12), "PBTOUT2", 24);
			break;
		case 4:
			StringCopy(sParam0, "DRF_MIC_3_CS_1", 24);
			StringCopy(&(sParam0->f_6), "OBTNR1", 24);
			StringCopy(&(sParam0->f_12), "DRF_MIC_3_CS_2", 24);
			sParam0->f_18 = 252700;
			break;
		default:
			break;
	}
}

void func_769()//Position - 0x21E47
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_96906[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_96903[iVar0] = 0;
		iVar0++;
	}
}

void func_770(var uParam0, int iParam1)//Position - 0x21F5F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_771(bool bParam0, int iParam1)//Position - 0x22E18
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((__LIB_0__::func_2(0) && Global_78565.f_1 == 1) && func_269(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_323();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_78567, 1);
		Global_78583 = uVar2;
		Global_78584 = MISC::GET_GAME_TIMER();
	}
}

int func_772()//Position - 0x2A63
{
	if (BitTest(Global_8137, 23))
	{
		if (Global_21658 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_773(int iParam0)//Position - 0x4812
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (Global_113386.f_7688[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_650)
	{
		if (Global_113386.f_7688.f_199[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_198)
	{
		if (Global_113386.f_7688.f_137[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (Global_113386.f_7688.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if (Global_113386.f_7688.f_765[iVar0 /*10*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_774(bool bParam0, int iParam1)//Position - 0x1140
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((__LIB_0__::func_2(0) && Global_78565.f_1 == 1) && func_12(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_323();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_78567, 1);
		Global_78583 = uVar2;
		Global_78584 = MISC::GET_GAME_TIMER();
	}
}

void func_775(int iParam0)//Position - 0x28EA
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 24);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 24);
	}
}

int func_776(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x2AA1
{
	int iVar0;
	int iVar1;
	if (BitTest(Global_8137, 9))
	{
		return 0;
	}
	MISC::SET_BIT(&Global_8137, 9);
	Global_22589 = iParam0;
	iVar0 = 0;
	while (iVar0 < iParam0 + 1)
	{
		StringCopy(&(Global_21864[iVar0 /*6*/]), (*uParam2)[iVar0], 24);
		StringCopy(&(Global_22226[iVar0 /*6*/]), (*uParam3)[iVar0], 24);
		iVar0++;
	}
	Global_22588 = iParam1;
	iVar1 = 0;
	while (iVar1 < iParam1 + 1)
	{
		StringCopy(&(Global_22045[iVar1 /*6*/]), (*uParam4)[iVar1], 24);
		StringCopy(&(Global_22407[iVar1 /*6*/]), (*uParam5)[iVar1], 24);
		iVar1++;
	}
	return 1;
}

void func_777(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3483
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = iParam4;
	while (iVar1 <= ((iParam4 + iParam5) - 1))
	{
		StringCopy(&Var0, sParam3, 16);
		StringConCat(&Var0, "_", 16);
		if (iVar1 < 9 && iParam6)
		{
			StringConCat(&Var0, "0", 16);
		}
		StringIntConCat(&Var0, iVar1 + 1, 16);
		if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
		{
			iVar2 = (*uParam2 + iVar3);
			StringCopy(uParam0[iVar2 /*4*/], sParam3, 16);
			*(uParam1[iVar2 /*4*/]) = { Var0 };
			iVar3++;
		}
		iVar1++;
	}
	*uParam2 = (*uParam2 + iVar3);
}

void func_778(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4)//Position - 0x45D8
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, iParam4 + 1);
	StringCopy(uParam0[*uParam2 /*4*/], sParam3, 16);
	StringCopy(uParam1[*uParam2 /*4*/], sParam3, 16);
	StringConCat(uParam1[*uParam2 /*4*/], "_", 16);
	if (iVar0 < 10)
	{
		StringConCat(uParam1[*uParam2 /*4*/], "0", 16);
	}
	StringIntConCat(uParam1[*uParam2 /*4*/], iVar0, 16);
	*uParam2++;
}

int func_779(char* sParam0)//Position - 0x466A
{
	int iVar0;
	iVar0 = 2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return iVar0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_SOL1"))
	{
		iVar0 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_EXILE"))
	{
		iVar0 = 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_SOL2"))
	{
		iVar0 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_MIC2"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_780(var uParam0, int iParam1)//Position - 0x490E
{
	if (iParam1 < 0 || iParam1 > 12)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 31);
	*uParam0 = (*uParam0 || iParam1);
}

void func_781(var uParam0, int iParam1)//Position - 0x4BFB
{
	if (iParam1 < 0 || iParam1 > 3)
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && SYSTEM::SHIFT_LEFT(3, 5)));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 5));
}

int func_782(var uParam0)//Position - 0x4C36
{
	return SYSTEM::SHIFT_RIGHT(*uParam0, 5) & 3;
}

bool func_783()//Position - 0x1AB
{
	return BitTest(Global_2715699.f_1.f_2810, 3);
}

void func_784(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1632
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

bool func_785()//Position - 0x25B4
{
	return !Global_77137.f_553;
}

void func_786()//Position - 0x25C4
{
	Global_77137.f_553 = 1;
	Global_77137.f_554 = 0;
}

void func_787(int iParam0)//Position - 0x931
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44105[iParam0 /*6*/] = -1;
	Global_44105[iParam0 /*6*/].f_1 = -1;
	Global_44105[iParam0 /*6*/].f_2 = 6;
	Global_44105[iParam0 /*6*/].f_3 = 0;
	Global_44105[iParam0 /*6*/].f_4 = 0;
}

void func_788(int iParam0, char* sParam1)//Position - 0x1318
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_10__::func_663(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53557[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_789(int iParam0, bool bParam1)//Position - 0x1AC3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar0 = __LIB_10__::func_663(iParam0);
	if (iVar0 > -1)
	{
		if (Global_53557[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53557[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53557[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_53557[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_53557[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_53557[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_53557[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_53557[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_53195[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_53195[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_53195[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_53195[iVar6 /*120*/].f_18[iVar8] == Global_53557[iVar4 /*203*/].f_1)
							{
								if (Global_53195[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_44249 = (Global_44249 - 1);
											break;
										case 1:
											Global_44250 = (Global_44250 - 1);
											break;
										case 2:
											Global_44251 = (Global_44251 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_53557[iVar4 /*203*/].f_2 = iParam0;
	Global_53557[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_53557[iVar4 /*203*/] = 1;
	}
	Global_113386.f_21037.f_310++;
	if (Global_113386.f_21037.f_310 == 0)
	{
		Global_113386.f_21037.f_310 = 1;
	}
	Global_53557[iVar4 /*203*/].f_1 = Global_113386.f_21037.f_310;
	Global_53557[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

int func_790()//Position - 0x8E2
{
	return Global_22622;
}

void func_791(int iParam0)//Position - 0x22F2
{
	int iVar0;
	if (iParam0 == 26)
	{
		if (!BitTest(Global_113386.f_24986, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = __LIB_10__::func_663(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_53557[iVar0 /*203*/] = 0;
}

void func_792(int iParam0)//Position - 0x698
{
	int iVar0;
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if (__LIB_11__::func_492(Global_113386.f_7688.f_765[iVar0 /*10*/], Global_113386.f_7688.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

int func_793(int iParam0)//Position - 0x31BEE
{
	if (!__LIB_0__::func_317(iParam0))
	{
		return __LIB_0__::func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_794(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x2BC8C
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = iParam3;
	STREAMING::REQUEST_ANIM_DICT(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_795()//Position - 0x30D7E
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(1789.2f, 4658f, 30.73f, 1871.87f, 4745.51f, 40.17f, false, true, true, true);
}

void func_796(char* sParam0, int iParam1)//Position - 0x33C97
{
	sParam0 = sParam0;
	iParam1 = iParam1;
}

void func_797(char* sParam0)//Position - 0x37D1F
{
	sParam0 = sParam0;
}

void func_798(int* iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x3CEA8
{
	__LIB_0__::func_0(iParam0);
	*iParam0 = PED::CREATE_PED(iParam4, iParam1, Param2, fParam3, false, false);
}

int func_799(int iParam0)//Position - 0xACD
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		default:
	}
	return 0;
}

int func_800(int iParam0, int iParam1)//Position - 0x158E
{
	if (__LIB_2__::func_12(iParam1))
	{
		if (Global_2660249)
		{
			return Global_2660249.f_1.f_53;
		}
		return 304;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		case 62:
			return Global_998606.f_604[iParam1 /*88*/].f_65;
		default:
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_1020252.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 304;
	}
	return 304;
}

void func_801(int iParam0)//Position - 0x1F45
{
	Global_2655137[iParam0 /*99*/] = 0;
	Global_2655137[iParam0 /*99*/].f_1 = 0;
	Global_2655137[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_31), "", 64);
	Global_2655137[iParam0 /*99*/].f_47 = -1;
	Global_2655137[iParam0 /*99*/].f_48 = MISC::GET_GAME_TIMER();
	Global_2655137[iParam0 /*99*/].f_49 = -1;
	Global_2655137[iParam0 /*99*/].f_50 = -1;
	Global_2655137[iParam0 /*99*/].f_51 = -1;
	Global_2655137[iParam0 /*99*/].f_52 = 0;
	Global_2655137[iParam0 /*99*/].f_53 = 0;
	Global_2655137[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2655137[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2655137[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2655137[iParam0 /*99*/].f_73), "", 64);
	Global_2655137[iParam0 /*99*/].f_89 = 0;
	Global_2655137[iParam0 /*99*/].f_90 = 0;
	Global_2655137[iParam0 /*99*/].f_91 = -1;
	Global_2655137[iParam0 /*99*/].f_92 = -1;
	Global_2655137[iParam0 /*99*/].f_93 = 0;
	Global_2655137[iParam0 /*99*/].f_94 = -1;
	Global_2655137[iParam0 /*99*/].f_95 = 0;
	Global_2655137[iParam0 /*99*/].f_96 = 0;
	Global_2655137[iParam0 /*99*/].f_97 = 0;
	Global_2655137[iParam0 /*99*/].f_98 = 0;
}

int func_802(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0x2087
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1659438)
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2655137[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_803(int iParam0)//Position - 0x2132
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(iParam0);
	if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
	{
		return;
	}
	if (NETWORK::NETWORK_REMOVE_PRESENCE_INVITE(iVar0))
	{
		return;
	}
}

void func_804()//Position - 0x245B
{
	char* sVar0;
	StringCopy(&(Global_2714762.f_860), sVar0, 24);
}

void func_805()//Position - 0x25A4
{
	struct<3> Var0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, (Var0.f_2 + 1f), true, false, false, true);
		}
	}
}

float func_806(float fParam0)//Position - 0x9EDF
{
	float fVar0;
	fVar0 = fParam0;
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

void func_807()//Position - 0x1722A
{
	Global_63161 = 0;
}

int func_808(int iParam0)//Position - 0x487E8
{
	if (__LIB_0__::func_317(iParam0))
	{
		if ((Global_113386.f_9085 || Global_3) || __LIB_0__::func_2(0))
		{
			return Global_113386.f_2363.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_809()//Position - 0x9128C
{
	Global_63161 = 1;
}

void func_810()//Position - 0x99913
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("npcphone"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("npcphone");
	}
}

void func_811(int iParam0, int iParam1)//Position - 0x9D953
{
	if (__LIB_0__::func_317(iParam0))
	{
		Global_113386.f_2363.f_539.f_2348[iParam0] = iParam1;
	}
}

void func_812(int iParam0, int iParam1, int iParam2)//Position - 0xEC0
{
	if (iParam1 != 4)
	{
		iParam0->f_34[iParam1] = iParam2;
		Global_23011.f_2 = 1;
	}
}

int func_813()//Position - 0x14DE
{
	return joaat("A_C_Chop");
}

void func_814(int iParam0, bool bParam1)//Position - 0x74617
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(iParam0, false);
		if (iVar0 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, bParam1);
		}
	}
}

int func_815(int iParam0, bool bParam1)//Position - 0x74646
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (((((((((((((((((((((((((((((((((((((((((((((WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL"), false) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_COMBATPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_APPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SNSPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_HEAVYPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_VINTAGEPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_MARKSMANPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_MACHINEPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_MICROSMG"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SMG"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_COMBATPDW"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_ASSAULTRIFLE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_CARBINERIFLE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SPECIALCARBINE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_ADVANCEDRIFLE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_BULLPUPRIFLE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_GUSENBERG"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_COMPACTRIFLE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_MG"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_COMBATMG"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PUMPSHOTGUN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SAWNOFFSHOTGUN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_ASSAULTSHOTGUN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_HEAVYSHOTGUN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_DBSHOTGUN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SNIPERRIFLE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REMOTESNIPER"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_MARKSMANRIFLE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_GRENADELAUNCHER"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_GRENADELAUNCHER_SMOKE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_RPG"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_MINIGUN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_HOMINGLAUNCHER"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_STUNGUN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PETROLCAN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_DIGISCANNER"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_COMPACTLAUNCHER"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_AUTOSHOTGUN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_MINISMG"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_ASSAULTRIFLE_MK2"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_CARBINERIFLE_MK2"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_COMBATMG_MK2"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER_MK2"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_MK2"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SMG_MK2"), false))
	{
		return 1;
	}
	if (bParam1)
	{
		if (((((WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_GRENADE"), false) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SMOKEGRENADE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_STICKYBOMB"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_MOLOTOV"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PROXMINE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PIPEBOMB"), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_816(int iParam0, int iParam1)//Position - 0x7B083
{
	int iVar0;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 7 || iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_817(int iParam0, int iParam1, int iParam2)//Position - 0x7C260
{
	if (iParam1 != 4)
	{
		iParam0->f_8[iParam1] = iParam2;
	}
}

void func_818(int* iParam0, bool bParam1)//Position - 0x8C7F7
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
					{
						ENTITY::DETACH_ENTITY(*iParam0, true, true);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, true, false);
			}
		}
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

int func_819()//Position - 0x8CA3F
{
	return Global_103950;
}

void func_820(struct<3> Param0, float fParam1, float fParam2, char* sParam3)//Position - 0x8FA16
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < fParam1)
	{
		CUTSCENE::REQUEST_CUTSCENE(sParam3, 8);
	}
	else if (CUTSCENE::IS_CUTSCENE_ACTIVE() || CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > fParam2)
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
}

int func_821(int iParam0, int iParam1)//Position - 0x934E9
{
	if (iParam0->f_39)
	{
		if (iParam1 == iParam0->f_7)
		{
			return 1;
		}
	}
	return 0;
}

float func_822(float fParam0)//Position - 0x95408
{
	float fVar0;
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fParam0 = (fParam0 + IntToFloat(SYSTEM::FLOOR((fVar0 / -360f)) + 1 * 360));
	}
	else if (fParam0 >= 360f)
	{
		fParam0 = (fVar0 % 360f);
	}
	return fParam0;
}

void func_823(int iParam0, float fParam1)//Position - 0xA4FE0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam1 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0)));
		}
	}
}

void func_824(var uParam0, float fParam1, float fParam2)//Position - 0xA663A
{
	*uParam0 = (*uParam0 + ((((fParam1 - *uParam0) * fParam2) * 30f) * SYSTEM::TIMESTEP()));
}

void func_825(int iParam0)//Position - 0xA9732
{
	Global_100164 = iParam0;
}

int func_826()//Position - 0xAEA91
{
	if (Global_113386.f_20118.f_254.f_5)
	{
		if (Global_113386.f_20118.f_254 > 66f)
		{
			return 1;
		}
		else if (Global_113386.f_20118.f_254 > 33f)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

void func_827(int iParam0)//Position - 0x1056
{
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		CAM::DESTROY_CAM(*iParam0, false);
	}
}

bool func_828(char* sParam0)//Position - 0x29C9F
{
	return AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
}

void func_829(int iParam0, int iParam1)//Position - 0x3B9A6
{
	Global_23011.f_9 = iParam0;
	Global_23011.f_10 = iParam1;
}

void func_830(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x3DC3F
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = iParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

int func_831(int iParam0, int iParam1, int iParam2)//Position - 0x3F2B2
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_97782[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == __LIB_6__::func_830(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_832()//Position - 0x8FE2D
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		STREAMING::LOAD_ALL_OBJECTS_NOW();
	}
}

void func_833(var uParam0, bool bParam1)//Position - 0x9BE07
{
	if (bParam1)
	{
		uParam0->f_2 = MISC::GET_GAME_TIMER();
	}
	else
	{
		uParam0->f_2 = -1;
	}
}

void func_834(float fParam0, float fParam1, var uParam2, float fParam3)//Position - 0x9E081
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar1 = (fParam1 - fParam0);
	fVar2 = (fVar1 / fParam3);
	*uParam2 = (*uParam2 + (fVar2 * fVar0));
}

void func_835(int iParam0, int iParam1)//Position - 0xA23C9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (iParam0 == 145 || Global_97782[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == __LIB_6__::func_830(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_97772[iVar0], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97772[iVar0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_97772[iVar0]));
						Global_97782[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_836(int iParam0)//Position - 0xA5A0F
{
	Global_78577 = iParam0;
}

void func_837(int iParam0)//Position - 0x607DD
{
	if (!__LIB_0__::func_43(iParam0))
	{
		return;
	}
	Global_113386.f_2363.f_539.f_2332[iParam0] = 1;
}

void func_838(var uParam0)//Position - 0x6D73A
{
	if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

void func_839(char* sParam0, int iParam1)//Position - 0x6FAF4
{
	if (iParam1 == 1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		{
			AUDIO::START_AUDIO_SCENE(sParam0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

void func_840(int iParam0)//Position - 0x6FBDD
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		while (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_841(int iParam0, bool bParam1)//Position - 0x783DC
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_41748[iParam0 /*31*/].f_1), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_41748[iParam0 /*31*/].f_1), 6);
	}
}

int func_842(int iParam0)//Position - 0x8714D
{
	if (!__LIB_0__::func_114() && func_802(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_843(int iParam0)//Position - 0x87F52
{
	if (!__LIB_0__::func_43(iParam0))
	{
		return 0;
	}
	return Global_113386.f_2363.f_539.f_2332[iParam0];
}

int func_844(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x24B7
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	HUD::REQUEST_ADDITIONAL_TEXT(sParam0, iParam1);
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam1) && !bParam3)
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam1))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

void func_845(int iParam0)//Position - 0x2B58
{
	if (iParam0 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_846(int iParam0, int iParam1, int iParam2)//Position - 0x9DC
{
	Local_22[iParam0] = iParam1;
	Local_22.f_17[iParam0] = iParam2;
}

void func_847(var uParam0, int iParam1)//Position - 0x9F6
{
	uParam0->f_22 = 0;
	MISC::CLEAR_BIT(&uLocal_47, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_848(var uParam0, int iParam1)//Position - 0xA1E
{
	uParam0->f_22 = 0;
	MISC::CLEAR_BIT(&uLocal_45, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_849(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, float fParam4, float fParam5)//Position - 0x23EB
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = iParam3;
	*uParam0 = 1;
	uParam0->f_8 = fParam4;
	uParam0->f_9 = fParam5;
}

void func_850(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, var uParam4, var uParam5, var uParam6)//Position - 0x2458
{
	*uParam0 = { Param2 };
	uParam0->f_3 = { Param3 };
	uParam0->f_6 = uParam4;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam5;
	uParam0->f_9 = uParam6;
}

void func_851(var uParam0)//Position - 0x249A
{
	uParam0->f_154 = 0;
	uParam0->f_155[0 /*11*/] = 0;
	uParam0->f_155[1 /*11*/] = 0;
}

int func_852(char* sParam0, var uParam1, int iParam2)//Position - 0x251C
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	if (*uParam1 == 0)
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sParam0);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
		{
			return 0;
		}
	}
	return 1;
}

char* func_853(int iParam0)//Position - 0x25DF
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "misslester1b_crowd@a_";
			break;
		case 1:
			sVar0 = "misslester1b_crowd@b_";
			break;
		case 2:
			sVar0 = "misslester1b_crowd@c_";
			break;
		case 3:
			sVar0 = "misslester1b_crowd@d_";
			break;
		case 4:
			sVar0 = "misslester1b_crowd@e_";
			break;
		case 5:
			sVar0 = "misslester1b_crowd@f_";
			break;
		case 6:
			sVar0 = "misslester1b_crowd@g_";
			break;
		case 7:
			sVar0 = "misslester1b_crowd@h_";
			break;
		case 8:
			sVar0 = "misslester1b_crowd@i_";
			break;
		case 9:
			sVar0 = "misslester1b_crowd@j_";
			break;
		case 10:
			sVar0 = "misslester1b_crowd@k_";
			break;
		case 11:
			sVar0 = "misslester1b_crowd@l_";
			break;
		case 12:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}

void func_854(char* sParam0)//Position - 0x2B4A
{
	STREAMING::REMOVE_ANIM_DICT(sParam0);
}

char* func_855(int iParam0)//Position - 0x2BE1
{
	char* sVar0;
	if (iParam0 == 0)
	{
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

char* func_856(int iParam0)//Position - 0x2BF7
{
	char* sVar0;
	if (iParam0 == 0)
	{
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

void func_857(var uParam0)//Position - 0x2C99
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		__LIB_0__::func_0(&(uParam0->f_10[iVar0]));
		iVar0++;
	}
}

void func_858(int iParam0, int iParam1)//Position - 0x16033
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__::func_387(4, *iParam1, 0);
			__LIB_0__::func_387(7, *iParam1, 0);
			__LIB_0__::func_387(8, *iParam1, 0);
			__LIB_0__::func_387(11, *iParam1, 0);
			break;
		case 1:
			__LIB_0__::func_387(4, *iParam1, 0);
			__LIB_0__::func_387(7, *iParam1, 0);
			__LIB_0__::func_387(8, *iParam1, 0);
			__LIB_0__::func_387(11, *iParam1, 0);
			if (Global_113386.f_9085.f_99.f_58[126])
			{
				__LIB_0__::func_387(12, *iParam1, 0);
			}
			break;
		case 2:
			__LIB_0__::func_387(4, *iParam1, 0);
			__LIB_0__::func_387(7, *iParam1, 0);
			__LIB_0__::func_387(8, *iParam1, 0);
			__LIB_0__::func_387(11, *iParam1, 0);
			break;
	}
}

void func_859(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x237AA
{
	float fVar0;
	if (*uParam0 != fParam1)
	{
		fVar0 = fParam2;
		if (bParam3)
		{
			fVar0 = (0f + (fParam2 * SYSTEM::TIMESTEP()));
		}
		if ((*uParam0 - fParam1) > fVar0)
		{
			*uParam0 = (*uParam0 - fVar0);
		}
		else if ((*uParam0 - fParam1) < -fVar0)
		{
			*uParam0 = (*uParam0 + fVar0);
		}
		else
		{
			*uParam0 = fParam1;
		}
	}
}

void func_860(bool bParam0, var uParam1, int iParam2)//Position - 0x2C043
{
	int iVar0;
	struct<98> Var1;
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (bParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				case joaat("tribike"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				case joaat("sanchez"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1.f_0 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				case joaat("faggio2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1.f_0 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				case joaat("emperor"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		case 29:
			Var1.f_0 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		case 30:
			Var1.f_0 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				case joaat("sanchez"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		default:
			break;
	}
	*uParam1 = { Var1 };
}

void func_861(var uParam0)//Position - 0x90B71
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_97802[iVar0]))
		{
			Global_97802[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

void func_862()//Position - 0x21FC4
{
	Global_63160 = 1;
}

void func_863(int iParam0)//Position - 0x3BD49
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_864(int iParam0)//Position - 0x49380
{
	if (iParam0 != -1)
	{
		if (Global_100479 == -1)
		{
			Global_100479 = iParam0;
		}
	}
}

int func_865(int iParam0)//Position - 0x92D3
{
	if (iParam0 == 0)
	{
		switch (Global_113386.f_14051[0 /*20*/].f_6)
		{
			case 1:
				return 0;
				break;
			case 2:
				return 1;
				break;
			case 3:
				return 2;
				break;
			case 4:
				return 3;
				break;
			case 5:
				return 4;
				break;
			case 6:
				return 5;
				break;
			case 7:
				return 6;
				break;
			default:
				return -1;
				break;
			}
	}
	if (iParam0 == 1)
	{
		switch (Global_113386.f_14051[1 /*20*/].f_6)
		{
			case 1:
				return 0;
				break;
			case 2:
				return 1;
				break;
			case 3:
				return 2;
				break;
			case 4:
				return 3;
				break;
			case 5:
				return 4;
				break;
			case 6:
				return 5;
				break;
			case 7:
				return 6;
				break;
			default:
				return -1;
				break;
			}
	}
	if (iParam0 == 2)
	{
		switch (Global_113386.f_14051[2 /*20*/].f_6)
		{
			case 1:
				return 0;
				break;
			case 2:
				return 1;
				break;
			case 3:
				return 2;
				break;
			case 4:
				return 3;
				break;
			case 5:
				return 4;
				break;
			case 6:
				return 5;
				break;
			case 7:
				return 6;
				break;
			default:
				return -1;
				break;
			}
	}
	return -2;
}

int func_866(int iParam0)//Position - 0x159F1
{
	return __LIB_0__::func_61(iParam0, 0);
}

void func_867(int iParam0)//Position - 0x15A00
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				FIRE::STOP_ENTITY_FIRE(iParam0);
				ENTITY::SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_HEALTH(iParam0) + 200, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) + 200f));
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) + 200f));
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 5f);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2.5f, true, false, false, false);
			}
		}
	}
}

int func_868(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1A974
{
	int iVar0[16];
	int iVar1;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar1]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar1 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar1 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_869(char* sParam0)//Position - 0x1C369
{
	var uVar0;
	if (__LIB_0__::func_75())
	{
		MemCopy(&uVar0, {__LIB_0__::func_390()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_870(int iParam0, var uParam1, var uParam2)//Position - 0x1EA1F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			*uParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
	}
}

float func_871(struct<3> Param0, int iParam1, char* sParam2, int iParam3)//Position - 0x2DB3A
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	iVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, sParam2);
	fVar1 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0);
	fVar2 = (fVar1 / 2f);
	fVar3 = (fVar1 / 2f);
	iVar4 = 0;
	while (iVar4 <= iParam3)
	{
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, __LIB_0__::func_301((fVar2 - fVar3), 0f, fVar1))) < SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, __LIB_0__::func_301((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 - fVar3);
		}
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, __LIB_0__::func_301((fVar2 - fVar3), 0f, fVar1))) > SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, __LIB_0__::func_301((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 + fVar3);
		}
		iVar4++;
	}
	return fVar2;
}

void func_872(int iParam0, bool bParam1, bool bParam2)//Position - 0x90869
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_41748[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (BitTest(Global_41748[iParam0 /*31*/].f_1, 1))
			{
				Global_41748[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_41748[iParam0 /*31*/].f_22 = 1f;
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[iParam0 /*31*/], Global_41748[iParam0 /*31*/].f_22, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[iParam0 /*31*/], 1, false, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_41748[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_41748[iParam0 /*31*/].f_22 = 0f;
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[iParam0 /*31*/], Global_41748[iParam0 /*31*/].f_22, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[iParam0 /*31*/], 1, false, true);
		}
	}
}

int func_873(var uParam0, var uParam1)//Position - 0x96CF1
{
	int iVar0;
	iVar0 = 0;
	if (*uParam1 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam1 - 1))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar0]))
			{
				STREAMING::REQUEST_ANIM_DICT((*uParam0)[iVar0]);
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_874(var uParam0, var uParam1)//Position - 0x96D36
{
	int iVar0;
	iVar0 = 0;
	if (*uParam1 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam1 - 1))
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

void func_875(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x97165
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	if (*uParam3 >= 0)
	{
		if (*uParam3 <= (iParam2 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= *uParam3)
			{
				if ((*uParam1)[iVar0] == iParam0)
				{
					iVar1 = 1;
				}
				iVar0++;
			}
			if (iVar1 == 0)
			{
				STREAMING::REQUEST_MODEL(iParam0);
				(*uParam1)[*uParam3] = iParam0;
				*uParam3++;
			}
		}
	}
}

void func_876(var uParam0, var uParam1)//Position - 0x972DB
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	if (*uParam1 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam1 - 1))
		{
			STREAMING::REMOVE_ANIM_DICT((*uParam0)[iVar0]);
			(*uParam0)[iVar0] = iVar1;
			iVar0++;
		}
	}
	*uParam1 = 0;
}

void func_877(var uParam0, var uParam1)//Position - 0x9731C
{
	int iVar0;
	iVar0 = 0;
	if (*uParam1 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam1 - 1))
		{
			if ((*uParam0)[iVar0] != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
				(*uParam0)[iVar0] = 0;
			}
			iVar0++;
		}
	}
	*uParam1 = 0;
}

int func_878(int iParam0)//Position - 0xA0861
{
	var uVar0;
	var uVar1;
	if (iParam0 == 5)
	{
		return 5;
	}
	uVar1 = iParam0 + 1;
	uVar0 = uVar1;
	return uVar0;
}

void func_879(int* iParam0, bool bParam1)//Position - 0x4DF
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0))
					{
						if (bParam1)
						{
							VEHICLE::DELETE_VEHICLE(iParam0);
						}
						else
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						}
					}
					else
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					}
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_880(var uParam0)//Position - 0x8D549
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		{
			if (ENTITY::GET_ENTITY_HEALTH(*uParam0) < 500)
			{
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 500, 0);
			}
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(*uParam0) < 500f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(*uParam0) < 500f)
			{
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 500f);
			}
		}
	}
}

void func_881(int iParam0)//Position - 0x8DFA3
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (ENTITY::GET_ENTITY_HEALTH(*iParam0) < 500)
			{
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 500, 0);
			}
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(*iParam0) < 500f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(*iParam0) < 500f)
			{
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 500f);
			}
			ENTITY::SET_ENTITY_PROOFS(*iParam0, true, true, true, true, true, false, false, false);
		}
	}
}

int func_882(int iParam0, struct<3> Param1, char* sParam2)//Position - 0x94F01
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param1);
		iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
		if (!iVar0 == 0)
		{
			if (iVar0 == iVar1)
			{
				iVar2 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
				iVar3 = MISC::GET_HASH_KEY(sParam2);
				if (iVar2 != 0)
				{
					if (iVar2 == iVar3)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_883(int iParam0, float fParam1, float fParam2)//Position - 0x96D84
{
	float fVar0;
	fVar0 = (fParam1 - ENTITY::GET_ENTITY_HEADING(iParam0));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (MISC::ABSF(fVar0) <= fParam2)
	{
		return 1;
	}
	return 0;
}

void func_884()//Position - 0x97879
{
	__LIB_11__::func_825(0);
}

int func_885(int iParam0)//Position - 0x9DBB0
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_886(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x655B4
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam3 == 1)
		{
			PED::SET_PED_COORDS_KEEP_VEHICLE(iParam0, Param1);
		}
		else if (iParam3 == 0)
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
		}
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
			}
			if (iParam4 == 1)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (iParam5 == 1)
			{
				STREAMING::LOAD_SCENE(Param1);
			}
		}
	}
}

void func_887(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x736DA
{
	int iVar0;
	if (Global_3)
	{
		return;
	}
	if (Global_44203)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
	{
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_44202));
	}
	if (CAM::DOES_CAM_EXIST(iParam4))
	{
		CAM::SHAKE_CAM(iParam4, "DRUNK_SHAKE", fParam3);
		Global_44204 = iParam4;
	}
	else
	{
		Global_44204 = 0;
	}
	Global_44203 = 1;
	iVar0 = MISC::GET_GAME_TIMER();
	Global_44205 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_44205 = -1;
		}
	}
	Global_44206 = uParam1;
	Global_44207 = fParam2;
	Global_44209 = fParam3;
	Global_44208 = fParam3;
}

void func_888(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x76DC2
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 4, true);
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam1, fParam2, iParam3, false, false);
				PED::SET_PED_KEEP_TASK(iParam0, true);
			}
		}
	}
}

void func_889(int iParam0, int iParam1)//Position - 0x76E0A
{
	iParam0->f_14 = 0;
	iParam0->f_15 = iParam1;
}

void func_890(int iParam0)//Position - 0x77ADD
{
	if (iParam0 != -1)
	{
		Global_32020[iParam0 /*11*/].f_4 = 1;
	}
}

void func_891(int iParam0, int iParam1)//Position - 0x77AF5
{
	if (iParam0 != -1)
	{
		Global_32020[iParam0 /*11*/].f_8 = iParam1;
	}
}

void func_892(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x78CC7
{
	float fVar0;
	if (*uParam0 != fParam1)
	{
		fVar0 = fParam2;
		if (bParam3)
		{
			fVar0 = (0f + ((fParam2 * 30f) * SYSTEM::TIMESTEP()));
		}
		if ((*uParam0 - fParam1) > fVar0)
		{
			*uParam0 = (*uParam0 - fVar0);
		}
		else if ((*uParam0 - fParam1) < -fVar0)
		{
			*uParam0 = (*uParam0 + fVar0);
		}
		else
		{
			*uParam0 = fParam1;
		}
	}
}

int func_893(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x82C80
{
	int iVar0;
	if (!__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_2__::func_108(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("IG_LamarDavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			__LIB_2__::func_328(*iParam0, iParam1);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

void func_894(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x82D0E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 32, bParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, bParam3);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, bParam4);
			PED::SET_PED_AS_ENEMY(iParam0, bParam5);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
		}
	}
}

int func_895(char* sParam0, char* sParam1)//Position - 0x8CFDD
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return MISC::ARE_STRINGS_EQUAL(sParam0, sParam1);
	}
	return 0;
}

int func_896(struct<3> Param0, struct<3> Param1)//Position - 0x8DBAA
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((Param0.f_0 - Param1.f_0), (Param0.f_1 - Param1.f_1), (Param0.f_2 - Param1.f_2), (Param0.f_0 + Param1.f_0), (Param0.f_1 + Param1.f_1), (Param0.f_2 + Param1.f_2), false, true, true, true);
}

int func_897(int iParam0, int iParam1, float fParam2)//Position - 0x8E1F1
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true))
				{
					if (iVar0 == joaat("WEAPON_PETROLCAN"))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar2, false, false))
						{
							Var1.f_2 = uVar2;
						}
						if (PED::IS_PED_SHOOTING(iParam0) && GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(Var1, fParam2))
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

int func_898(int iParam0)//Position - 0xE6C4
{
	if (iParam0 < 9)
	{
		return Global_96297[iParam0 /*2*/];
	}
	return -1;
}

int func_899(int iParam0)//Position - 0x959B4
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, true) };
			if (Var0.f_1 < -1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_900(struct<3> Param0, float fParam1)//Position - 0x98613
{
	if (!__LIB_0__::func_78(Param0, 0f, 0f, 0f, 0))
	{
		if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > fParam1)
			{
				INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0));
			}
		}
	}
}

void func_901(int* iParam0, bool bParam1)//Position - 0x9E46A
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		if (bParam1 == 1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

int func_902(var uParam0, int iParam1)//Position - 0xAC2B2
{
	int iVar0;
	int iVar1;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = __LIB_6__::func_830(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = __LIB_6__::func_830(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = __LIB_6__::func_830(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = __LIB_6__::func_830(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = __LIB_6__::func_830(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = __LIB_6__::func_830(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = __LIB_6__::func_830(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = __LIB_6__::func_830(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = __LIB_6__::func_830(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (__LIB_0__::func_116())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (__LIB_0__::func_116())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!__LIB_0__::func_78(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!__LIB_0__::func_78(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!__LIB_0__::func_78(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_903(var uParam0, var uParam1)//Position - 0x3282
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_113386.f_20118.f_261)
	{
		*uParam0 = { Global_113386.f_20118.f_267 };
		*uParam1 = Global_113386.f_20118.f_271;
		return 1;
	}
	return 0;
}

int func_904(struct<3> Param0, bool bParam1)//Position - 0x230E7
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar2 = 10000000f;
	iVar3 = 5;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (Global_95644[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam1 || BitTest(Global_113386.f_7229.f_11[iVar0], 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95644[iVar0 /*9*/].f_3, true);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

char* func_905(int iParam0)//Position - 0x24D63
{
	switch (iParam0)
	{
		case 0:
			return "JIMMY";
			break;
		case 1:
			return "TRACEY";
			break;
		case 2:
			return "AMANDA";
			break;
		case 3:
			return "MAID";
			break;
		case 4:
			return "GARDENER";
			break;
		case 5:
			return "DENISE";
			break;
		case 6:
			return "LAMAR";
			break;
		case 7:
			return "STRETCH" /* GXT: Stretch */;
			break;
		case 10:
			return "NERVOUSRON";
			break;
		case 8:
			return "MICHAEL";
			break;
		case 9:
			return "TREVOR";
			break;
		case 11:
			return "PATRICIA";
			break;
		case 12:
			return "TREVORMOM";
			break;
		case 13:
			return "FLOYD";
			break;
		case 14:
			return "WADE";
			break;
	}
	return "NULL";
}

void func_906(int iParam0, int iParam1)//Position - 0x6E6A2
{
	Global_95447[iParam0] = iParam1;
}

int func_907(int iParam0)//Position - 0x7E318
{
	if (iParam0 != -1)
	{
		if (Global_32020[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_908(int iParam0)//Position - 0x7E337
{
	if (iParam0 != -1)
	{
		if (Global_32020[iParam0 /*11*/].f_6 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_909(struct<3> Param0, struct<3> Param1, var uParam2)//Position - 0x9E9
{
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::HAS_BULLET_IMPACTED_IN_BOX(Param0, Param1, true, true))
		{
			*uParam2++;
			if (*uParam2 > 6)
			{
				Global_95464 = 3;
			}
		}
		else if ((FIRE::IS_EXPLOSION_IN_AREA(0, Param0, Param1) || FIRE::IS_EXPLOSION_IN_AREA(2, Param0, Param1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Param0, Param1, joaat("WEAPON_GRENADELAUNCHER"), true))
		{
			Global_95464 = 5;
		}
	}
}

void func_910(struct<3> Param0, struct<3> Param1)//Position - 0xA64
{
	int iVar0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
	{
		if (iVar0 == joaat("WEAPON_MOLOTOV") || iVar0 == joaat("WEAPON_PETROLCAN"))
		{
			if (FIRE::IS_EXPLOSION_IN_AREA(3, Param0, Param1))
			{
				Global_95464 = 2;
			}
		}
	}
}

void func_911(struct<3> Param0, struct<3> Param1, var uParam2)//Position - 0xBC2
{
	if ((PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Param0, Param1, false, true, 0))
		{
			if (*uParam2 < 0)
			{
				*uParam2 = MISC::GET_GAME_TIMER();
			}
			else if (MISC::GET_GAME_TIMER() > *uParam2 + 10000)
			{
				Global_95464 = 1;
			}
		}
		else
		{
			*uParam2 = -1;
		}
	}
	else
	{
		*uParam2 = -1;
	}
}

void func_912(struct<3> Param0, struct<3> Param1)//Position - 0xC39
{
	int iVar0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
	{
		if (iVar0 == joaat("WEAPON_RPG"))
		{
			if (MISC::IS_PROJECTILE_TYPE_IN_AREA(Param0, Param1, iVar0, true))
			{
				Global_95464 = 0;
			}
		}
	}
}

int func_913(int iParam0)//Position - 0x1173
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_914()//Position - 0x16F6
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

void func_915(int iParam0)//Position - 0x1BE0
{
	switch (Global_95447[iParam0])
	{
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
			break;
		default:
			Global_113386.f_18514[iParam0] = Global_95447[iParam0];
			break;
	}
}

void func_916(int iParam0, int iParam1)//Position - 0x25F1
{
	Global_32020[iParam0 /*11*/].f_10 = iParam1;
}

void func_917(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x273E
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("v_ilev_mm_doorson");
			*uParam2 = { -806.8f, 174f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_Son", 64);
			*iParam3 = 226;
			*iParam4 = 1850241841;
			*iParam6 = 0;
			break;
		case 1:
			*iParam1 = joaat("v_ilev_mm_doordaughter");
			*uParam2 = { -802.7f, 176.2f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_Daught", 64);
			*iParam3 = 226;
			*iParam4 = -378388578;
			*iParam6 = 0;
			break;
		case 2:
			*iParam1 = joaat("v_ilev_mm_doorw");
			*uParam2 = { -805f, 171.9f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_WC", 64);
			*iParam3 = 226;
			*iParam4 = -1223666875;
			*iParam6 = 0;
			break;
		case 3:
			*iParam1 = joaat("v_ilev_mm_doorw");
			*uParam2 = { -809.281f, 177.855f, 76.89f };
			StringCopy(sParam5, "V_Michael_1_WC", 64);
			*iParam3 = 226;
			*iParam4 = 1893421006;
			*iParam6 = 0;
			break;
		case 4:
			*iParam1 = joaat("v_ilev_mm_fridge_l");
			*uParam2 = { -804.1f, 185.8f, 72.7f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 1;
			break;
		case 5:
			*iParam1 = joaat("v_ilev_mm_fridge_r");
			*uParam2 = { -802.8f, 186.3f, 72.7f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 1;
			break;
		case 6:
			*iParam1 = joaat("prop_bh1_48_backdoor_l");
			*uParam2 = { -796.5657f, 177.2214f, 73.0405f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 41;
			*iParam4 = 776026812;
			*iParam6 = 1;
			break;
		case 7:
			*iParam1 = joaat("prop_bh1_48_backdoor_r");
			*uParam2 = { -794.5051f, 178.0124f, 73.0405f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 42;
			*iParam4 = 698422331;
			*iParam6 = 1;
			break;
		case 8:
			*iParam1 = joaat("v_ilev_mm_doorm_l");
			*uParam2 = { -817f, 179f, 73f };
			StringCopy(sParam5, "V_Michael_G_Front", 64);
			*iParam3 = 38;
			*iParam4 = -2097039789;
			*iParam6 = 1;
			break;
		case 9:
			*iParam1 = joaat("v_ilev_mm_doorm_r");
			*uParam2 = { -816f, 178f, 73f };
			StringCopy(sParam5, "V_Michael_G_Front", 64);
			*iParam3 = 39;
			*iParam4 = -2127416656;
			*iParam6 = 1;
			break;
		case 10:
			*iParam1 = joaat("v_ilev_trev_doorbath");
			*uParam2 = { -1150.158f, -1518.768f, 10.781f };
			StringCopy(sParam5, "rm_bathroom", 64);
			*iParam3 = 226;
			*iParam4 = 2007032394;
			*iParam6 = 0;
			break;
		default:
			*iParam1 = 0;
			*uParam2 = { 0f, 0f, 0f };
			StringCopy(sParam5, "NULL", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 0;
			break;
	}
}

int func_918(int iParam0, char* sParam1)//Position - 0x2A06
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_12", 64);
			return 1;
			break;
		case 2:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_9", 64);
			return 1;
			break;
		case 3:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_9", 64);
			return 1;
			break;
		case 4:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_10", 64);
			return 1;
			break;
		case 18:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_3@BASE", 64);
			return 1;
			break;
		case 5:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
			return 1;
			break;
		case 21:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
			return 1;
			break;
		case 9:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
			return 1;
			break;
		case 11:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_5@BASE", 64);
			return 1;
			break;
		case 12:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_2@", 64);
			return 1;
			break;
		case 13:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_7@", 64);
			return 1;
			break;
		case 14:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_8@", 64);
			return 1;
			break;
		case 15:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_11@", 64);
			return 1;
			break;
		case 16:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_1@BASE", 64);
			return 1;
			break;
		case 17:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_4@BASE", 64);
			return 1;
			break;
		case 20:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_2", 64);
			return 1;
			break;
		case 24:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			return 1;
			break;
		case 19:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			return 1;
			break;
		case 25:
			StringCopy(sParam1, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
			return 1;
			break;
		case 26:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_3@BASE", 64);
			return 1;
			break;
		case 32:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_5@BASE", 64);
			return 1;
			break;
		case 33:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_8@BASE", 64);
			return 1;
			break;
		case 38:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_7@BASE", 64);
			return 1;
			break;
		case 34:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_2@IDLE_A", 64);
			return 1;
			break;
		case 35:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_15@BASE", 64);
			return 1;
			break;
		case 37:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_4@", 64);
			return 1;
			break;
		case 36:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_1@BASE", 64);
			return 1;
			break;
		case 28:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_14@", 64);
			return 1;
			break;
		case 43:
			StringCopy(sParam1, "TIMETABLE@TRACY@SLEEP@", 64);
			return 1;
			break;
		case 44:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return 1;
			break;
		case 29:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return 1;
			break;
		case 30:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return 1;
			break;
		case 45:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_5", 64);
			return 1;
			break;
		case 47:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_9", 64);
			return 1;
			break;
		case 48:
			StringCopy(sParam1, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
			return 1;
			break;
		case 68:
			StringCopy(sParam1, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
			return 1;
			break;
		case 50:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_4", 64);
			return 1;
			break;
		case 69:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_4", 64);
			return 1;
			break;
		case 51:
			StringCopy(sParam1, "TIMETABLE@AMANDA@MAGDEMO_IG_2_SYNCED", 64);
			return 1;
			break;
		case 52:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_7", 64);
			return 1;
			break;
		case 67:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_7", 64);
			return 1;
			break;
		case 53:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@", 64);
			return 1;
			break;
		case 54:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_5", 64);
			return 1;
			break;
		case 70:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_5", 64);
			return 1;
			break;
		case 64:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		case 55:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		case 71:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		case 56:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_2_P2", 64);
			return 1;
			break;
		case 57:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		case 58:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_3", 64);
			return 1;
			break;
		case 59:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return 1;
			break;
		case 72:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return 1;
			break;
		case 60:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return 1;
			break;
		case 61:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return 1;
			break;
		case 63:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return 1;
			break;
		case 62:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return 1;
			break;
		case 65:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			return 1;
			break;
		case 66:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			return 1;
			break;
		case 73:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_6", 64);
			return 1;
			break;
		case 74:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_7", 64);
			return 1;
			break;
		case 76:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return 1;
		case 78:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return 1;
		case 85:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return 1;
		case 77:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
			return 1;
		case 79:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return 1;
			break;
		case 86:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return 1;
			break;
		case 80:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return 1;
			break;
		case 81:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_2@", 64);
			return 1;
			break;
		case 82:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_8@", 64);
			return 1;
			break;
		case 83:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_8@", 64);
			return 1;
			break;
		case 89:
			StringCopy(sParam1, "TIMETABLE@GARDENER@CLEAN_POOL@", 64);
			return 1;
			break;
		case 90:
			StringCopy(sParam1, "TIMETABLE@GARDENER@LAWNMOW@", 64);
			return 1;
			break;
		case 91:
			StringCopy(sParam1, "TIMETABLE@GARDENER@FILLING_CAN", 64);
			return 1;
			break;
		case 94:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_1", 64);
			return 1;
			break;
		case 95:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_2", 64);
			return 1;
			break;
		case 96:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_3", 64);
			return 1;
			break;
		case 98:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_3", 64);
			return 1;
			break;
		case 97:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_4", 64);
			break;
		case 100:
			StringCopy(sParam1, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
			return 1;
			break;
		case 101:
			StringCopy(sParam1, "TIMETABLE@RON@IG_2", 64);
			return 1;
			break;
		case 119:
			StringCopy(sParam1, "TIMETABLE@RON@IG_2", 64);
			return 1;
			break;
		case 102:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3_COUCH", 64);
			return 1;
			break;
		case 103:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3_COUCH", 64);
			return 1;
			break;
		case 104:
			StringCopy(sParam1, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
			return 1;
			break;
		case 105:
			StringCopy(sParam1, "TIMETABLE@RON@MOONSHINE_IG_5", 64);
			return 1;
			break;
		case 106:
			StringCopy(sParam1, "TIMETABLE@RON@IG_6", 64);
			return 1;
			break;
		case 107:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_CHAIRIDLE_A", 64);
			return 1;
			break;
		case 108:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_CLUBCHAIRBASE", 64);
			return 1;
			break;
		case 109:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_SOFABASE", 64);
			return 1;
			break;
		case 110:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@TALK_PHONEbase", 64);
			return 1;
			break;
		case 111:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_A", 64);
			return 1;
			break;
		case 116:
			StringCopy(sParam1, "TIMETABLE@TREVOR@IG_1", 64);
			return 1;
			break;
		case 117:
			StringCopy(sParam1, "TIMETABLE@TREVOR@TRV_IG_2", 64);
			return 1;
			break;
		case 112:
			StringCopy(sParam1, "TIMETABLE@TREVOR@SMOKING_METH@BASE", 64);
			return 1;
			break;
		case 113:
			StringCopy(sParam1, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
			return 1;
			break;
		case 114:
			StringCopy(sParam1, "TIMETABLE@TREVOR@GRENADE_THROWING", 64);
			return 1;
			break;
		case 115:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			return 1;
			break;
		case 118:
			StringCopy(sParam1, "TIMETABLE@RON@IG_1", 64);
			return 1;
			break;
		case 120:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3", 64);
			return 1;
			break;
		case 121:
			StringCopy(sParam1, "TIMETABLE@RON@IG_4", 64);
			return 1;
			break;
		case 122:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_1", 64);
			return 1;
			break;
		case 123:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_2@BASE", 64);
			return 1;
			break;
		case 124:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
			return 1;
			break;
		case 126:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CLEAN_KITCHEN@BASE", 64);
			return 1;
			break;
		case 127:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CRYINGONBED@BASE", 64);
			return 1;
			break;
		case 130:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CALLING", 64);
			return 1;
			break;
		case 131:
			StringCopy(sParam1, "TIMETABLE@FLOYD@ENDING_CALL", 64);
			return 1;
			break;
		case 132:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return 1;
			break;
		case 133:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return 1;
			break;
		case 134:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return 1;
			break;
		case 135:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CRYINGONBED_IG_5@", 64);
			return 1;
			break;
	}
	StringCopy(sParam1, "", 64);
	return 0;
}

int func_919(var uParam0, var uParam1, char* sParam2)//Position - 0x3324
{
	AUDIO::STOP_STREAM();
	if ((*uParam0 == 0 && *uParam1 == -1) && MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (*uParam0 != 0)
	{
		AUDIO::STOP_STREAM();
		*uParam0 = 0;
	}
	if (*uParam1 != -1)
	{
		AUDIO::STOP_SOUND(*uParam1);
		*uParam1 = -1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sParam2);
		if (MISC::ARE_STRINGS_EQUAL(sParam2, "AFT_SON_PORN"))
		{
			AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", false);
		}
	}
	StringCopy(sParam2, "", 64);
	return 1;
}

void func_920(int* iParam0)//Position - 0x33A0
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 0)
		{
			PED::SET_PED_KEEP_TASK(*iParam0, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
	else
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_921(int* iParam0, int iParam1)//Position - 0xC3B
{
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 20, true);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 16);
	if (iParam1 != joaat("NO_RELATIONSHIP"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iParam1);
	}
}

int func_922(int iParam0, var uParam1)//Position - 0x15A6
{
	switch (Global_95447[iParam0])
	{
		case 11:
			*uParam1 = 0.4f;
			return 1;
			break;
		case 12:
			*uParam1 = 0.75f;
			return 1;
			break;
		case 13:
			*uParam1 = 0.75f;
			return 1;
			break;
		case 14:
			*uParam1 = 0.75f;
			return 1;
			break;
		case 15:
			*uParam1 = 0.75f;
			return 1;
			break;
		case 20:
			*uParam1 = 0.5f;
			return 1;
			break;
		case 37:
			*uParam1 = 1.25f;
			return 1;
			break;
		case 33:
			*uParam1 = 0.75f;
			return 1;
			break;
		case 79:
		case 86:
		case 80:
			*uParam1 = 0.5f;
			return 1;
			break;
		case 81:
			*uParam1 = 0.5f;
			return 1;
			break;
		case 50:
		case 69:
			*uParam1 = 0.75f;
			return 1;
			break;
		case 90:
			*uParam1 = 1f;
			return 1;
			break;
		case 107:
			*uParam1 = 0.5f;
			return 1;
			break;
		case 108:
			*uParam1 = 0.8f;
			return 1;
			break;
		case 121:
			*uParam1 = 0.75f;
			return 1;
			break;
		case 112:
			*uParam1 = 1.5f;
			return 1;
			break;
		case 113:
			*uParam1 = 1.25f;
			return 1;
			break;
		case 123:
			*uParam1 = 0.8f;
			return 1;
			break;
		case 126:
			*uParam1 = 0.5f;
			return 1;
			break;
		case 137:
		case 138:
			if (iParam0 == 13 || iParam0 == 13)
			{
				*uParam1 = 0.3f;
				return 1;
			}
			break;
	}
	*uParam1 = 0f;
	return 0;
}

void func_923(int iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x1FA9F
{
	if (iParam0 == iParam3)
	{
		return;
	}
	if (iParam0 == 76)
	{
		return;
	}
	if (iParam3 == 76)
	{
		return;
	}
	Global_43053[iParam0 /*5*/] = { Param1 };
	Global_43053[iParam0 /*5*/].f_3 = fParam2;
	Global_43053[iParam0 /*5*/].f_4 = iParam3;
}

int func_924(int iParam0)//Position - 0x1FAE8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (Global_113386.f_7688.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_925(int iParam0)//Position - 0x21ABA
{
	switch (iParam0)
	{
		case 18:
		case 42:
		case 43:
		case 65:
		case 66:
		case 135:
			return 1;
			break;
	}
	return 0;
}

int func_926(int iParam0, int iParam1, int iParam2)//Position - 0x21C8C
{
	if (INTERIOR::IS_VALID_INTERIOR(iParam1))
	{
		if (INTERIOR::IS_INTERIOR_READY(iParam1))
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0, iParam1, iParam2);
			return 1;
		}
		else
		{
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iParam0, iParam1);
			return 1;
		}
	}
	return 0;
}

int func_927(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x224DD
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 1:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 2:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 3:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 4:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 5:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		case 6:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 7:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		case 8:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 9:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		case 10:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 11:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 12:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		case 13:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		case 14:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 15:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 16:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 17:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 18:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		case 19:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		case 20:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		case 21:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 22:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 23:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 25:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 26:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 27:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 28:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 24:
			*uParam1 = 1;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 29:
			*uParam1 = 1;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 31:
			*uParam1 = 1;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 30:
			*uParam1 = 1;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 32:
			*uParam1 = 1;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 33:
			*uParam1 = 1;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			*uParam1 = 1;
			*iParam2 = 12;
			return 0;
			break;
		case 44:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 45:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		case 46:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 2;
			return 1;
			break;
		case 47:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 48:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		case 49:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 50:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 51:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 52:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		case 53:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		case 54:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 55:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		case 56:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 57:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 58:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 59:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		case 60:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		case 61:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		case 62:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 7;
			*iParam4 = 0;
			return 1;
			break;
		case 63:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 64:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		case 65:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 66:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 67:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 68:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		case 69:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		case 70:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		case 73:
			*uParam1 = 2;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 71:
			*uParam1 = 2;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 72:
			*uParam1 = 2;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 74:
			*uParam1 = 2;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 75:
			*uParam1 = 2;
			*iParam2 = 10;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 76:
			*uParam1 = 2;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 77:
			*uParam1 = 2;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 78:
			*uParam1 = 2;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
			*uParam1 = 2;
			*iParam2 = 12;
			return 0;
			break;
		case 89:
			*uParam1 = 0;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 90:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 91:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 92:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		case 93:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 94:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 1;
			return 1;
			break;
		case 95:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 2;
			return 1;
			break;
		case 96:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 97:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 98:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 99:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 100:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		case 101:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 1;
			return 1;
			break;
		case 102:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		case 103:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		case 104:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 105:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		case 106:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 2;
			return 1;
			break;
		case 107:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 108:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		case 109:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 110:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 111:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 112:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 113:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 114:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 115:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		case 116:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 1;
			return 1;
			break;
		case 117:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 2;
			return 1;
			break;
		case 118:
			*uParam1 = 0;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 119:
			*uParam1 = 0;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 120:
			*uParam1 = 0;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 121:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 122:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 123:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 124:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 125:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		case 126:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		case 127:
			*uParam1 = 0;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 128:
			*uParam1 = 0;
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 129:
			*uParam1 = 0;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 130:
			*uParam1 = 0;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
			*uParam1 = 0;
			*iParam2 = 12;
			return 0;
			break;
		case 136:
			*uParam1 = 13;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 137:
			*uParam1 = 13;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 138:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 139:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 140:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 141:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 142:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 143:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 144:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 145:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		case 146:
			*uParam1 = 13;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 147:
			*uParam1 = 13;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 148:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 149:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 150:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		case 151:
			*uParam1 = 13;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 152:
			*uParam1 = 13;
			*iParam2 = 8;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		case 153:
			*uParam1 = 13;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 154:
			*uParam1 = 13;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 155:
			*uParam1 = 13;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 156:
			*uParam1 = 13;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 157:
			*uParam1 = 13;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		case 158:
		case 159:
		case 160:
		case 161:
			*uParam1 = 13;
			*iParam2 = 12;
			return 0;
			break;
	}
	*uParam1 = 16;
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	return 0;
}

int func_928(struct<3> Param0, float fParam1)//Position - 0x6B1B8
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0))
		{
			return 1;
		}
		Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
		fVar2 = SYSTEM::VDIST2(Param0, Var1);
		if (fVar2 < (fParam1 * fParam1))
		{
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
			Var4 = { 0f, 0f, 0f };
			fVar5 = 0f;
			iVar6 = 0;
			iVar7 = 1;
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, iVar3, &Var4, &fVar5, &iVar6, iVar7, 3f, 0f))
			{
				Var8 = { 2f, 2f, 2f };
				if (CAM::IS_SPHERE_VISIBLE(Var4, SYSTEM::VMAG(Var8)))
				{
					return 1;
				}
				if (MISC::IS_AREA_OCCUPIED(Var4 - Var8, Var4 + Var8, false, true, true, false, false, 0, false))
				{
					return 1;
				}
				ENTITY::SET_ENTITY_COORDS(iVar0, Var4, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iVar0, fVar5);
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_929(bool bParam0)//Position - 0x6B598
{
	int iVar0;
	if (!__LIB_0__::func_317(bParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (BitTest(Global_113386.f_7688.f_651[iVar0 /*14*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if (BitTest(Global_113386.f_7688.f_765[iVar0 /*10*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_930(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98)//Position - 0x6F5B9
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_931(bool bParam0, int iParam1)//Position - 0x706E9
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[bParam0 /*29*/].f_12[iParam1];
}

int func_932()//Position - 0x71730
{
	int iVar0;
	int iVar1;
	iVar0 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
	if (iVar1 == joaat("GROUP_THROWN"))
	{
		return 1;
	}
	return 0;
}

void func_933(int* iParam0)//Position - 0x725FB
{
	if (__LIB_0__::func_736(iParam0))
	{
		if (__LIB_1__::func_637(iParam0))
		{
			iParam0->f_1 = (__LIB_0__::func_484(BitTest(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			MISC::CLEAR_BIT(iParam0, 2);
		}
	}
}

int func_934(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, int iParam33, int* iParam34)//Position - 0x73EE3
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam1) && !MISC::IS_STRING_NULL_OR_EMPTY(&uParam17))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			return 0;
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &uParam1, &uParam17, 3))
		{
			return 0;
		}
		if (ENTITY::FIND_ANIM_EVENT_PHASE(&uParam1, &uParam17, "drinking", &fVar0, &fVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(&uParam1, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@"))
			{
				fVar0 = 0.05f;
				fVar1 = 0.75f;
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(&uParam1, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@"))
		{
			fVar0 = 0.05f;
			fVar1 = 0.75f;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&uParam1, "TIMETABLE@RON@MOONSHINE_IG_5") || ((MISC::ARE_STRINGS_EQUAL(&uParam1, "TIMETABLE@MICHAEL@ON_SOFAIDLE_A") || MISC::ARE_STRINGS_EQUAL(&uParam1, "TIMETABLE@MICHAEL@ON_SOFAIDLE_B")) || MISC::ARE_STRINGS_EQUAL(&uParam1, "TIMETABLE@MICHAEL@ON_SOFAIDLE_C")))
		{
			fVar0 = 0.25f;
			fVar1 = 0.75f;
		}
		else
		{
			fVar0 = -1f;
			fVar1 = -1f;
			return 0;
		}
		fVar2 = -1f;
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &uParam1, &uParam17, 1))
		{
			fVar2 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &uParam1, &uParam17);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &uParam1, &uParam17, 2))
		{
			fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam33);
		}
		if (fVar2 > fVar0 && fVar2 < fVar1)
		{
			if (__LIB_0__::func_736(iParam34))
			{
				if (!__LIB_1__::func_637(iParam34))
				{
					__LIB_10__::func_565(iParam34);
				}
			}
			return 1;
		}
	}
	return 0;
}

Vector3 func_935(int iParam0, int iParam1, bool bParam2)//Position - 0x78A11
{
	struct<3> Var0[10];
	struct<3> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f), 0f) };
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Var0[0 /*3*/] = { -821.1343f, 155.6063f, 69.2348f };
			Var0[1 /*3*/] = { -793.1925f, 165.5698f, 70.3529f };
			Var0[2 /*3*/] = { -802.1196f, 191.1686f, 71.835f };
			Var0[3 /*3*/] = { -779.3063f, 184.1423f, 71.8354f };
			Var0[4 /*3*/] = { -781.6624f, 155.8212f, 66.4745f };
			Var0[5 /*3*/] = { -815.5585f, 179.7955f, 71.1531f };
			Var0[6 /*3*/] = { -806.1222f, 169.9548f, 71.8347f };
			Var0[7 /*3*/] = { -794.8763f, 179.0604f, 71.8347f };
			Var0[8 /*3*/] = { -798.2634f, 185.71f, 71.6055f };
			if (iParam1 == 0)
			{
				Var0[9 /*3*/] = { -808.704f, 169.7271f, 75.7504f };
			}
			else if (iParam1 == 1)
			{
				Var0[9 /*3*/] = { -800.1566f, 172.8743f, 75.7504f };
			}
			else if (iParam1 == 2)
			{
				Var0[9 /*3*/] = { -815.927f, 179.6694f, 75.7407f };
			}
			else
			{
				Var0[9 /*3*/] = { -802.9651f, 178.5574f, 75.7483f };
			}
			break;
		case 5:
		case 6:
		case 7:
			Var0[0 /*3*/] = { -38.2037f, -1459.5112f, 30.3994f };
			Var0[1 /*3*/] = { -86.7261f, -1471.7407f, 31.5351f };
			break;
		case 10:
		case 11:
		case 8:
		case 9:
			Var0[0 /*3*/] = { 1980.7178f, 3819.2358f, 31.4324f };
			Var0[1 /*3*/] = { 1974.146f, 3825.4822f, 31.3671f };
			Var0[2 /*3*/] = { 1989.2611f, 3820.5364f, 31.3665f };
			Var0[3 /*3*/] = { 1971.3353f, 3837.562f, 30.9977f };
			Var0[4 /*3*/] = { 1975.6251f, 3820.1807f, 32.4501f };
			Var0[5 /*3*/] = { 1969.5767f, 3815.7659f, 32.4287f };
			break;
		case 13:
			Var0[0 /*3*/] = { -1148.7909f, -1522.9229f, 9.633f };
			Var0[1 /*3*/] = { -1151.6345f, -1521.5306f, 3.3567f };
			Var0[2 /*3*/] = { -1145.8826f, -1542.1782f, 3.3772f };
			Var0[3 /*3*/] = { -1167.1464f, -1505.143f, 3.3794f };
			Var0[4 /*3*/] = { -1187.0579f, -1532.1716f, 3.3795f };
			Var0[5 /*3*/] = { -1156.8148f, -1517.5059f, 9.6327f };
			Var0[6 /*3*/] = { -1157.3087f, -1525.3698f, 9.6321f };
			Var0[7 /*3*/] = { -1148.6206f, -1519.6217f, 9.6327f };
			Var0[8 /*3*/] = { -1149.4954f, -1513.1079f, 9.6327f };
			if (Global_32005 == 4 || Global_32005 == 6)
			{
				Var0[8 /*3*/] = { 0f, 0f, 0f };
			}
			else
			{
				Var0[8 /*3*/] = { -1153.3973f, -1522.3252f, 9.6475f };
			}
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f), 0f) };
			break;
	}
	fVar3 = 10000000f;
	iVar4 = 99;
	iVar5 = 0;
	iVar2 = 0;
	while (iVar2 < Var0.f_0)
	{
		if (!__LIB_0__::func_78(Var0[iVar2 /*3*/], 0f, 0f, 0f, 0))
		{
			fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var0[iVar2 /*3*/], true);
			if (fVar6 < fVar3)
			{
				fVar3 = fVar6;
				iVar4 = iVar2;
			}
			iVar5++;
		}
		iVar2++;
	}
	iVar7 = iVar4;
	if (bParam2)
	{
		fVar3 = 10000000f;
		iVar2 = 0;
		while (iVar2 < Var0.f_0)
		{
			if (!__LIB_0__::func_78(Var0[iVar2 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var0[iVar2 /*3*/], true);
				if (fVar8 < fVar3 && iVar2 != iVar4)
				{
					fVar3 = fVar8;
					iVar7 = iVar2;
				}
			}
			iVar2++;
		}
	}
	else
	{
		if (iVar5 == 0)
		{
			Var9 = { IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-40, 40)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-40, 40)), 0f };
			if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var9, false, &Var10, 0))
			{
				Var9 = { Var10 };
			}
			return Var9;
		}
		iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iVar5 - 1));
	}
	Var11 = { Var0[iVar7 /*3*/] };
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[iVar7 /*3*/], false, &Var12, 0))
	{
		Var11 = { Var12 };
	}
	if (__LIB_0__::func_78(Var11, 0f, 0f, 0f, 0))
	{
		return Var1;
	}
	return Var11;
}

int func_936(int iParam0)//Position - 0x79B2F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case 26:
		case 46:
		case 54:
		case 70:
		case 108:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
			iVar0 = MISC::GET_PREV_WEATHER_TYPE_HASH_NAME();
			iVar1 = MISC::GET_NEXT_WEATHER_TYPE_HASH_NAME();
			iVar2 = 0;
			iVar3 = 0;
			if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar0 == joaat("snow"))
			{
				iVar2 = 1;
			}
			if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == joaat("snow"))
			{
				iVar2 = 1;
			}
			if (iVar2 || iVar3)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_937(int iParam0)//Position - 0x79D15
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
			if (Global_95447[1] != 141 || Global_95447[2] != 141)
			{
				return 1;
			}
			break;
		case 19:
			if (Global_95447[1] != 141)
			{
				return 1;
			}
			break;
		case 56:
		case 57:
			if (Global_95447[0] != 141)
			{
				return 1;
			}
			break;
		case 58:
		case 74:
			if (Global_95447[1] != 141)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_938(int iParam0, int iParam1)//Position - 0x79DB8
{
	switch (Global_78583)
	{
		case 19:
			if ((iParam1 == 7 || iParam1 == 27) || iParam1 == 51)
			{
				return 1;
			}
			if (iParam0 == 4)
			{
				return 1;
			}
			break;
		case 49:
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				return 1;
			}
			break;
		case 52:
			if (((iParam1 == 7 || iParam1 == 23) || iParam1 == 27) || iParam1 == 51)
			{
				return 1;
			}
			break;
	}
	if (iParam1 == 5)
	{
		if (__LIB_0__::func_176(18) && !__LIB_0__::func_176(20))
		{
			return 1;
		}
	}
	return 0;
}

int func_939(int iParam0)//Position - 0x7A0B2
{
	if (iParam0 != 10)
	{
		if (Global_95447[10] == 118 || Global_95447[10] == 121)
		{
			return 1;
		}
	}
	if (iParam0 != 8)
	{
		if (Global_95447[8] == 108)
		{
			return 1;
		}
	}
	if (iParam0 != 9)
	{
		if (Global_95447[9] == 114 || Global_95447[9] == 116)
		{
			return 1;
		}
	}
	if (iParam0 != 11)
	{
		if (Global_95447[11] == 123 || Global_95447[11] == 116)
		{
			return 1;
		}
	}
	return 0;
}

int func_940(int iParam0)//Position - 0x7A151
{
	if (iParam0 != 10)
	{
		if (Global_95447[10] == 119)
		{
			return 1;
		}
	}
	if (iParam0 != 8)
	{
		if (Global_95447[8] == 107 || Global_95447[8] == 110)
		{
			return 1;
		}
	}
	return 0;
}

int func_941(int iParam0)//Position - 0x7A19C
{
	if (iParam0 != 1)
	{
		if (Global_95447[1] == 26 || Global_95447[1] == 46)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if (Global_95447[2] == 54 || Global_95447[2] == 70)
		{
			return 1;
		}
	}
	return 0;
}

int func_942(int iParam0)//Position - 0x7A1F3
{
	if (iParam0 != 0)
	{
		if (((((Global_95447[0] == 12 || Global_95447[0] == 13) || Global_95447[0] == 14) || Global_95447[0] == 15) || Global_95447[0] == 56) || Global_95447[0] == 57)
		{
			return 1;
		}
	}
	if (iParam0 != 1)
	{
		if (((((Global_95447[1] == 37 || Global_95447[1] == 12) || Global_95447[1] == 13) || Global_95447[1] == 14) || Global_95447[1] == 15) || Global_95447[1] == 58)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if ((Global_95447[2] == 58 || Global_95447[2] == 56) || Global_95447[2] == 57)
		{
			return 1;
		}
	}
	return 0;
}

int func_943(int iParam0)//Position - 0x7A301
{
	if (iParam0 != 0)
	{
		if ((((Global_95447[0] == 5 || Global_95447[0] == 21) || Global_95447[0] == 19) || Global_95447[0] == 25) || Global_95447[0] == 4)
		{
			return 1;
		}
	}
	if (iParam0 != 1)
	{
		if ((((Global_95447[1] == 4 || Global_95447[1] == 35) || Global_95447[1] == 34) || Global_95447[1] == 33) || Global_95447[1] == 32)
		{
			return 1;
		}
	}
	if (iParam0 != 2)
	{
		if (Global_95447[2] == 4)
		{
			return 1;
		}
	}
	return 0;
}

int func_944(int iParam0)//Position - 0x7A601
{
	if (iParam0 != 1)
	{
		if (Global_95447[1] == 31)
		{
			return 1;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_95447[0] == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_945(float fParam0)//Position - 0x7A6D3
{
	int iVar0;
	if (Global_78584 < 0)
	{
		return 0;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 < (Global_78584 + SYSTEM::ROUND((fParam0 * 1000f))))
	{
		return 0;
	}
	return 1;
}

int func_946(var uParam0)//Position - 0x7A708
{
	if (BitTest(Global_113386.f_18574[35 /*6*/], 3) && !BitTest(Global_113386.f_18574[36 /*6*/], 3))
	{
		*uParam0 = 125;
		return 1;
	}
	*uParam0 = 141;
	return 0;
}

int func_947()//Position - 0x7C046
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -773.72314f, 168.8327f, 65f, -772.2901f, 136.81564f, 68f, 22f, false, true, 0))
	{
		return 0;
	}
	return 1;
}

int func_948(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5)//Position - 0x7F179
{
	if (iParam0 != 141)
	{
	}
	StringCopy(sParam1, sParam2, 64);
	StringCopy(sParam3, sParam4, 64);
	*uParam5 = 1;
	return 1;
}

void func_949(int iParam0, int iParam1)//Position - 0x7F796
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_950(int iParam0, int iParam1, int iParam2)//Position - 0x8398D
{
	switch (iParam1)
	{
		case 18:
		case 16:
			switch (iParam0)
			{
				case 0:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					*iParam2 = 1;
					return 1;
					break;
			}
			break;
		case 38:
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		case 56:
		case 57:
			switch (iParam0)
			{
				case 0:
				case 2:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		case 59:
		case 72:
		case 60:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		case 96:
		case 98:
		case 95:
			switch (iParam0)
			{
				case 5:
					*iParam2 = 1;
					return 1;
					break;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*iParam2 = 256;
					return 1;
					break;
			}
			break;
		case 122:
		case 123:
			switch (iParam0)
			{
				case 11:
					*iParam2 = 1;
					return 1;
					break;
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 9:
					*iParam2 = 4;
					return 1;
					break;
				case 11:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		case 110:
			switch (iParam0)
			{
				case 8:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
		case 128:
		case 130:
			switch (iParam0)
			{
				case 13:
					*iParam2 = 4;
					return 1;
					break;
			}
			break;
	}
	*iParam2 = 0;
	return 0;
}

int func_951(int iParam0)//Position - 0x86025
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_USE_MOBILE_PHONE")) != 1)
	{
		TASK::TASK_USE_MOBILE_PHONE(iParam0, true, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
		PED::SET_PED_CONFIG_FLAG(iParam0, 185, true);
		PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		return 1;
	}
	return 1;
}

void func_952(int iParam0, int iParam1)//Position - 0x8812E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (__LIB_0__::func_382(iParam0, iParam1))
	{
		return;
	}
	if (Global_41748[iParam0 /*31*/].f_24 < 5)
	{
		Global_41748[iParam0 /*31*/].f_25[Global_41748[iParam0 /*31*/].f_24] = iParam1;
		Global_41748[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_41748[iParam0 /*31*/].f_25[iVar0];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_INJURED(iVar1))
			{
				Global_41748[iParam0 /*31*/].f_25[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_953(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, char* sParam4)//Position - 0x88DF5
{
	float fVar0;
	float fVar1;
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) == 1)
	{
		return 1;
	}
	switch (iParam1)
	{
		case 2:
			fVar0 = SYSTEM::VMAG(Param3 - Param2);
			fVar1 = (fVar0 - 2f);
			if (SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(iParam0, true)) > (fVar1 * fVar1))
			{
				return 1;
			}
			StringCopy(sParam4, "family_m_wife_drive", 32);
			return 0;
			break;
		case 1:
			fVar0 = SYSTEM::VMAG(Param3 - Param2);
			fVar1 = (fVar0 - 2f);
			if (SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(iParam0, true)) > (fVar1 * fVar1))
			{
				return 1;
			}
			StringCopy(sParam4, "family_m_daughter_drive", 32);
			return 0;
			break;
	}
	return 1;
}

int func_954(int iParam0, char* sParam1, float fParam2, var uParam3, var uParam4, var uParam5)//Position - 0x89BCB
{
	*uParam4 = 0;
	*uParam5 = 1;
	switch (iParam0)
	{
		case 79:
			StringCopy(sParam1, "v_michael_g_lounge", 32);
			*fParam2 = 1f;
			*uParam3 = 4;
			return 1;
			break;
		case 86:
			StringCopy(sParam1, "v_michael_g_lounge", 32);
			*fParam2 = 1f;
			*uParam3 = 4;
			return 1;
			break;
		case 85:
			StringCopy(sParam1, "v_michael_g_lounge", 32);
			*fParam2 = 0.35f;
			*uParam3 = 4;
			return 1;
			break;
		case 128:
			StringCopy(sParam1, "v_TrailerRm", 32);
			*fParam2 = -1f;
			*uParam3 = 2;
			return 1;
			break;
		case 168:
			StringCopy(sParam1, "v_michael_g_lounge", 32);
			*fParam2 = -1f;
			*uParam3 = 4;
			return 1;
			break;
		case 169:
			StringCopy(sParam1, "v_michael_g_lounge", 32);
			*fParam2 = -1f;
			*uParam3 = 5;
			*uParam4 = 2;
			*uParam5 = 5;
			return 1;
			break;
		case 191:
			StringCopy(sParam1, "loungeB", 32);
			*fParam2 = 0.2f;
			*uParam3 = 1;
			return 1;
			break;
		case 291:
			StringCopy(sParam1, "rm_Lounge", 32);
			*fParam2 = 0.35f;
			*uParam3 = 3;
			return 1;
			break;
	}
	*uParam3 = -1;
	StringCopy(sParam1, "", 32);
	*fParam2 = -1f;
	*uParam4 = -1;
	*uParam5 = 0;
	return 0;
}

void func_955(int iParam0, int iParam1, int iParam2)//Position - 0x89CFF
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	fVar0 = 0f;
	fVar1 = 0f;
	Var2 = { 0f, 0f, 0f };
	fVar3 = 0.938f;
	fVar4 = -0.24f;
	Var5 = { -0.09f, -0.45f, -0.069f };
	fVar6 = 0.998f;
	fVar7 = -1f;
	Var8 = { -0.33f, -0.54f, -0.09f };
	fVar9 = 0.818f;
	fVar10 = -0.03f;
	Var11 = { -0.18f, -0.42f, -0.229f };
	switch (iParam2)
	{
		case 4:
			switch (iParam1)
			{
				case 0:
					fVar0 = fVar3;
					fVar1 = fVar4;
					Var2 = { Var5 };
					break;
				case 1:
					fVar0 = fVar6;
					fVar1 = fVar7;
					Var2 = { Var8 };
					break;
				case 2:
					fVar0 = fVar9;
					fVar1 = fVar10;
					Var2 = { Var11 };
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					fVar0 = 1.118f;
					fVar1 = 0.39f;
					Var2 = { 0.425f, -0.28f, 0.2f };
					break;
				case 1:
					fVar0 = (3.1415927f * 0.3464f);
					fVar1 = -0.15f;
					Var2 = { -0.06f, -0.6f, 0.2f };
					break;
			}
			break;
		case 18:
			fVar0 = (3.1415927f * 0.5f);
			fVar1 = 0f;
			Var2 = { 0f, 0f, 0.25f };
			break;
		case 20:
			fVar0 = 0f;
			fVar1 = 0.1f;
			Var2 = { 0.1f, 0.1f, 0f };
			break;
		case 26:
		case 46:
			fVar0 = (3.1415927f * -0.4163f);
			fVar1 = 0f;
			Var2 = { 0f, -0.6f, 0.7f };
			break;
		case 42:
		case 43:
			fVar0 = (3.1415927f * 0.5f);
			fVar1 = (3.1415927f * -0.5f);
			Var2 = { 0.39f, 0f, -0.75f };
			break;
		case 29:
		case 30:
		case 44:
			fVar0 = (3.1415927f * 0.5f);
			fVar1 = 0f;
			Var2 = { 0f, 0.15f, 0f };
			break;
		case 54:
		case 70:
			fVar0 = (3.1415927f * 0.4332f);
			fVar1 = 0f;
			Var2 = { 0f, -1f, -0.3f };
			break;
		case 64:
		case 55:
		case 71:
			fVar0 = (3.1415927f * 0.4132f);
			fVar1 = 0f;
			Var2 = { 0f, 0f, 0f };
			break;
		case 94:
			fVar0 = (3.1415927f * 0.5f);
			fVar1 = 0f;
			Var2 = { 0f, 0f, -0.6f };
			break;
		case 95:
			fVar0 = 0f;
			fVar1 = 0f;
			Var2 = { 0f, 0f, 0f };
			break;
		case 112:
			fVar0 = 0f;
			fVar1 = 0f;
			Var2 = { 0f, -0.4f, 0f };
			break;
		case 113:
			fVar0 = 0f;
			fVar1 = 0f;
			Var2 = { -0.25f, -0.5f, 0f };
			break;
		default:
			fVar0 = 0f;
			fVar1 = 0f;
			Var2 = { 0f, 0f, 0f };
			break;
	}
	PED::SET_PED_BOUNDS_ORIENTATION(iParam0, fVar0, fVar1, Var2);
}

int func_956(int* iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)//Position - 0x8E4E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	char cVar4[64];
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			iVar0 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
			}
			iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam3);
			iVar2 = (iVar0 - iVar1);
			StringCopy(&Var3, "", 64);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				StringCopy(&Var3, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam2, 0, iVar2), 64);
			}
			cVar4 = { Var3 };
			StringConCat(&cVar4, sParam4, 64);
			if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(*iParam0))
			{
				if (!STREAMING::HAS_ANIM_DICT_LOADED(sParam1))
				{
					STREAMING::REQUEST_ANIM_DICT(sParam1);
					return 0;
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, sParam1, &cVar4, 3))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam5))
					{
						return 0;
					}
					if (iParam6 < 11)
					{
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
					{
						ENTITY::DETACH_ENTITY(*iParam0, true, true);
					}
					fVar5 = 8f;
					fVar6 = -8f;
					iVar7 = 5;
					fVar8 = 1000f;
					if (((ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("s_prop_hdphones") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("v_res_fa_chair02")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("p_novel_01_s")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("p_whiskey_bottle_s"))
					{
						fVar5 = 1000f;
						fVar6 = -1000f;
					}
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*iParam0, *uParam5, &cVar4, sParam1, fVar5, fVar6, iVar7, fVar8);
					if (fVar5 == 1000f)
					{
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(*iParam0);
					}
					return 1;
				}
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		return 0;
	}
	return 0;
}

int func_957(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, char* sParam5, char* sParam6, float fParam7, float fParam8, int iParam9, int iParam10, float fParam11, int iParam12)//Position - 0x8E867
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4;
	struct<16> Var5;
	iVar0 = iParam4;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iVar0 <= 0)
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < iParam4 + 1)
			{
				if (MISC::ARE_STRINGS_EQUAL(sParam5, uParam2[iVar1 /*16*/]) && MISC::ARE_STRINGS_EQUAL(sParam6, uParam3[iVar1 /*16*/]))
				{
					iVar2 = iVar1;
					while (iVar2 <= (*uParam2 - 1))
					{
						if (iVar2 + 1 < *uParam2)
						{
							*(uParam2[iVar2 /*16*/]) = { *(uParam2[iVar2 + 1 /*16*/]) };
							*(uParam3[iVar2 /*16*/]) = { *(uParam3[iVar2 + 1 /*16*/]) };
						}
						else
						{
							StringCopy(uParam2[iVar2 /*16*/], "", 64);
							StringCopy(uParam3[iVar2 /*16*/], "", 64);
						}
						iVar2++;
					}
					iVar0 = (iVar0 - 1);
				}
				iVar1++;
			}
		}
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
	Var4 = { *(uParam2[iVar3 /*16*/]) };
	Var5 = { *(uParam3[iVar3 /*16*/]) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
	{
		STREAMING::REQUEST_ANIM_DICT(&Var4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var4))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var4);
		}
		else
		{
			if (__LIB_1__::func_133(iParam9, 1))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
				PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			}
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam1, 0f);
			TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iParam1, &Var4, &Var5, fParam7, fParam8, iParam9, iParam10, fParam11, iParam12);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iParam1, false);
			*sParam5 = { Var4 };
			*sParam6 = { Var5 };
			return 1;
		}
	}
	return 0;
}

void func_958(int* iParam0, bool bParam1, int iParam2)//Position - 0x8E9E8
{
	int iVar0;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		if (bParam1)
		{
			MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iVar0);
		}
		else
		{
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("npcphone"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("npcphone", false);
				HUD::LINK_NAMED_RENDERTARGET(joaat("prop_npc_phone"));
			}
			iVar0 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("npcphone");
		}
		HUD::SET_TEXT_RENDER_ID(iVar0);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam0, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
	}
}

char* func_959()//Position - 0x8EA7E
{
	return "CELLPHONE_CUTSCENE";
}

int func_960(int* iParam0)//Position - 0x8EA8B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		return 1;
	}
	return 0;
}

int func_961()//Position - 0xC12A
{
	if (Global_39990[11] == 1)
	{
		return 4;
	}
	if (!__LIB_0__::func_176(21))
	{
		return 0;
	}
	if (!__LIB_0__::func_368(130))
	{
		return 1;
	}
	if (!__LIB_0__::func_368(131))
	{
		return 2;
	}
	if (!__LIB_0__::func_176(22))
	{
		return 1;
	}
	if (!__LIB_0__::func_176(49))
	{
		return 3;
	}
	if (!__LIB_0__::func_176(28))
	{
		return 1;
	}
	return 3;
}

int func_962(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4)//Position - 0x121CE
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	switch (iParam1)
	{
		case 16:
			if (*uParam3 == 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					STREAMING::REQUEST_PTFX_ASSET();
				}
				else if (!MISC::ARE_STRINGS_EQUAL(sParam2, "scr_fam_door_smoke"))
				{
					if (ENTITY::IS_ENTITY_A_PED(iParam0))
					{
					}
					else
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
						{
							return 0;
						}
						Var0 = { 0f, 0f, 0.05f };
						Var1 = { 0f, 0f, 0f };
						*uParam3 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sParam2, iParam0, Var0, Var1, 1f, false, false, false);
					}
				}
				else
				{
					Var0 = { -806.8f, 174f, 76.9f };
					Var1 = { 0f, 0f, 0f };
					*uParam3 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sParam2, Var0, Var1, 1f, false, false, false, false);
				}
				return 0;
			}
			else
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam3))
				{
				}
				return 1;
			}
			break;
			return 0;
			break;
		case 91:
			if (*uParam3 == 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					STREAMING::REQUEST_PTFX_ASSET();
				}
				else
				{
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, 0f };
					*uParam3 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), Var2, Var3, 60309, 1f, false, false, false);
					return 1;
				}
			}
			return 0;
			break;
		case 120:
			if (*uParam3 == 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					STREAMING::REQUEST_PTFX_ASSET();
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
					{
						return 0;
					}
					Var4 = { 0f, 0f, 0f };
					Var5 = { 0f, 0f, 0f };
					*uParam3 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sParam2, iParam0, Var4, Var5, 1f, false, false, false);
					return 1;
				}
			}
			return 0;
			break;
	}
	fParam4 = fParam4;
	*uParam3 = 0;
	return 0;
}

int func_963(int iParam0)//Position - 0x12CA6
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("v_ilev_m_sofa") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("v_ilev_m_dinechair"))
	{
		return 0;
	}
	return 1;
}

int func_964(int iParam0, char* sParam1, char* sParam2, var uParam3)//Position - 0x16FD1
{
	return __LIB_11__::func_948(iParam0, sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@BASE", sParam2, "BASE", uParam3);
}

void func_965(int iParam0, var uParam1, var uParam2, int iParam3, struct<3> Param4, struct<3> Param5, char* sParam6, char* sParam7, float fParam8, float fParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14)//Position - 0x17564
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4;
	struct<16> Var5;
	iVar0 = iParam3;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar1 = 0;
		while (iVar1 < iParam3 + 1)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam6, uParam1[iVar1 /*16*/]) && MISC::ARE_STRINGS_EQUAL(sParam7, uParam2[iVar1 /*16*/]))
			{
				if (iVar1 != 0)
				{
					iVar2 = iVar1;
					while (iVar2 <= (*uParam1 - 1))
					{
						if (iVar2 + 1 < *uParam1)
						{
							*(uParam1[iVar2 /*16*/]) = { *(uParam1[iVar2 + 1 /*16*/]) };
							*(uParam2[iVar2 /*16*/]) = { *(uParam2[iVar2 + 1 /*16*/]) };
						}
						else
						{
							StringCopy(uParam1[iVar2 /*16*/], "", 64);
							StringCopy(uParam2[iVar2 /*16*/], "", 64);
						}
						iVar2++;
					}
					iVar0 = (iVar0 - 1);
				}
			}
			iVar1++;
		}
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
	Var4 = { *(uParam1[iVar3 /*16*/]) };
	Var5 = { *(uParam2[iVar3 /*16*/]) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
	{
		STREAMING::REQUEST_ANIM_DICT(&Var4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var4))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var4);
		}
		else
		{
			if (__LIB_1__::func_133(iParam11, 1))
			{
				__LIB_11__::func_949(&iParam11, 1);
			}
			if (__LIB_1__::func_133(iParam11, 2))
			{
			}
			else
			{
				__LIB_1__::func_132(&iParam11, 2);
			}
			if (__LIB_1__::func_133(iParam11, 262144))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
				PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			}
			TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, &Var4, &Var5, Param4, Param5, fParam8, fParam9, iParam10, iParam11, fParam12, iParam13, iParam14);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			*sParam6 = { Var4 };
			*sParam7 = { Var5 };
		}
	}
}

int func_966(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x1780B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	switch (iParam1)
	{
		case 16:
			if (!*uParam3)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					STREAMING::REQUEST_PTFX_ASSET();
				}
				else if (!MISC::ARE_STRINGS_EQUAL(sParam2, "scr_fam_door_smoke"))
				{
					if (ENTITY::IS_ENTITY_A_PED(iParam0))
					{
						Var0 = { 0f, 0f, 0f };
						Var1 = { 0f, 0f, 0f };
						if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), Var0, Var1, 31086, 1f, false, false, false))
						{
							*uParam3 = 1;
						}
					}
				}
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 38:
			if (!*uParam3)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					STREAMING::REQUEST_PTFX_ASSET();
				}
				else
				{
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, 0f };
					fVar4 = 1f;
					if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), Var2, Var3, 31086, fVar4, false, false, false))
					{
						*uParam3 = 1;
						return 1;
					}
				}
			}
			return 0;
			break;
	}
	uParam4 = uParam4;
	return 0;
}

int func_967(char* sParam0, char* sParam1, char* sParam2, var* uParam3, var* uParam4)//Position - 0x178F3
{
	if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam0, sParam1, sParam2, uParam3, uParam4))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam2, "exhale"))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "TIMETABLE@TRACY@IG_7@BASE") && MISC::ARE_STRINGS_EQUAL(sParam1, "BASE"))
		{
			*uParam3 = -1f;
			*uParam4 = -1f;
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && MISC::ARE_STRINGS_EQUAL(sParam1, "IDLE_A"))
		{
			*uParam3 = 0.058f;
			*uParam4 = 0.195f;
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && MISC::ARE_STRINGS_EQUAL(sParam1, "IDLE_B"))
		{
			*uParam3 = 0.298f;
			*uParam4 = 0.357f;
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && MISC::ARE_STRINGS_EQUAL(sParam1, "IDLE_C"))
		{
			*uParam3 = 0.298f;
			*uParam4 = 0.357f;
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_B") && MISC::ARE_STRINGS_EQUAL(sParam1, "IDLE_D"))
		{
			*uParam3 = 0.298f;
			*uParam4 = 0.357f;
			return 1;
		}
	}
	return 0;
}

int func_968(int iParam0, int iParam1, float fParam2)//Position - 0x1A560
{
	if (!AUDIO::HAS_SOUND_FINISHED(iParam1))
	{
		switch (iParam0)
		{
			case 61:
			case 63:
				AUDIO::SET_VARIABLE_ON_SOUND(iParam1, "MichaelInRoom", fParam2);
				return 1;
				break;
			case 87:
				AUDIO::SET_VARIABLE_ON_SOUND(iParam1, "Blow", fParam2);
				return 1;
				break;
			}
	}
	return 1;
}

int func_969(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, char* sParam6)//Position - 0x1A5B2
{
	int iVar0;
	int iVar1;
	switch (*uParam0)
	{
		case 0:
			if (*uParam1 != -1)
			{
				AUDIO::STOP_SOUND(*uParam1);
				AUDIO::RELEASE_SOUND_ID(*uParam1);
				*uParam1 = -1;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK(sParam2, false, -1))
				{
					StringCopy(sParam6, sParam2, 64);
					*uParam0 = 1;
				}
			}
			else
			{
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iParam4))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					*uParam0 = 4;
					return 0;
				}
				return 0;
			}
			switch (iParam5)
			{
				case 0:
					*uParam1 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam1, sParam3, iParam4, 0, false, 0);
					break;
				case 1:
					*uParam1 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_COORD(*uParam1, sParam3, ENTITY::GET_ENTITY_COORDS(iParam4, true), 0, false, 0, false);
					break;
				default:
					return 0;
					break;
			}
			*uParam0 = 2;
			break;
		case 2:
			if (*uParam1 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(*uParam1))
				{
				}
				else
				{
					*uParam0 = 0;
					return 1;
				}
			}
			else
			{
				*uParam0 = 0;
				return 1;
			}
			if (iParam5 != 1)
			{
				if (ENTITY::IS_ENTITY_A_PED(iParam4))
				{
					iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam4);
					if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
					{
						*uParam0 = 3;
					}
				}
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_A_PED(iParam4))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam4);
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
				{
					*uParam0 = 0;
				}
			}
			break;
		case 4:
			break;
		default:
			return 0;
			break;
	}
	return 1;
}

int func_970(int iParam0, int iParam1)//Position - 0x388FA
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 0:
			return 14;
			break;
		case 1:
			return 15;
			break;
		case 2:
			return 17;
			break;
		case 5:
			return 44;
			break;
		case 6:
			return 19;
			break;
		case 7:
			return 37;
			break;
		case 10:
			return 20;
			break;
		case 8:
			return 0;
			break;
		case 9:
			return 2;
			break;
		case 11:
			return 40;
			break;
		case 12:
			*iParam1 = joaat("S_F_M_Maid_01");
			return 145;
			break;
		case 13:
			return 32;
			break;
		case 14:
			return 24;
			break;
		case 3:
			*iParam1 = joaat("S_F_M_Maid_01");
			return 145;
			break;
		case 4:
			*iParam1 = joaat("S_M_M_Gardener_01");
			return 145;
			break;
		case 15:
			return __LIB_0__::func_505();
			break;
	}
	return 145;
}

int func_971(bool bParam0)//Position - 0x84736
{
	if (!__LIB_0__::func_317(bParam0))
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_149(bParam0));
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_972(bool bParam0)//Position - 0x84760
{
	if (!__LIB_0__::func_317(bParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_11__::func_149(bParam0));
	}
	else if (bParam0 != 145)
	{
	}
}

char* func_973(int iParam0, int iParam1, int iParam2)//Position - 0x14F8F
{
	int iVar0;
	switch (iParam2)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return "JIM_IG_2_P2_Lagging";
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return "IG_2_Exit";
					break;
			}
			break;
		case 12:
		case 13:
		case 14:
		case 15:
			switch (iParam1)
			{
				case 0:
					return "EXIT_JIMMY";
					break;
				case 1:
					return "EXIT_TRACY";
					break;
			}
			break;
		case 56:
			switch (iParam1)
			{
				case 2:
					return "IG_2_P2_ItsNotWastingTime_AMANDA";
					break;
				case 0:
					return "IG_2_P2_ItsNotWastingTime_JIMMY";
					break;
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 2:
					return "IG2_P3_ItsNotABigDeal_AMANDA";
					break;
				case 0:
					return "IG2_P3_ItsNotABigDeal_JIMMY";
					break;
			}
			break;
		case 58:
			switch (iParam1)
			{
				case 2:
					return "IG_3_WhenURPregnant_AMANDA";
					break;
				case 1:
					return "IG_3_WhenURPregnant_TRACY";
					break;
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 2:
					return "IG_9_IAmOnToYou_AMANDA";
					break;
				case 3:
					return "IG_9_IAmOnToYou_MAID";
					break;
			}
			break;
		case 52:
		case 67:
			switch (iParam1)
			{
				case 2:
					return "IG_7_EXIT";
					break;
			}
			break;
		case 73:
			switch (iParam1)
			{
				case 2:
					return "Ugh_kale_Amanda";
					break;
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 13:
					return "Pineapple_EXIT_LOOP_FLOYD";
					break;
			}
			break;
		case 61:
		case 63:
			switch (iParam1)
			{
				case 2:
					return "IG_6_EXIT";
					break;
			}
			break;
		case 37:
			if (iParam2 == 37)
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
				if (iVar0 == __LIB_11__::func_149(15))
				{
					return "EXIT_TRACY";
				}
				else if (iVar0 == joaat("A_M_Y_Hipster_01"))
				{
					return "EXIT_BOY";
				}
			}
			break;
		case 102:
			switch (iParam1)
			{
				case 10:
					return "ENTER";
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 10:
					return "IG_3_IDLE_A";
					break;
			}
			break;
		case 132:
		case 133:
		case 134:
			switch (iParam1)
			{
				case 13:
					return "base";
					break;
			}
			break;
		default:
			break;
	}
	iParam1 = iParam1;
	iParam2 = iParam2;
	return "null";
}

void func_974(int iParam0, int iParam1)//Position - 0x3B25A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = 0;
	if (__LIB_11__::func_927(iParam1, &uVar4, &iVar0, &iVar1, &iVar2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar0, iVar1, iVar2, iVar3);
	}
}

int func_975(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0x3B28D
{
	switch (iParam0)
	{
		case 34:
			*uParam1 = 0;
			*uParam2 = 4;
			*uParam3 = 12;
			*uParam4 = 18;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 35:
			*uParam1 = 0;
			*uParam2 = 2;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 36:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 37:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 20;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 38:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 14;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 39:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 7;
			*uParam4 = 16;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_1__::func_132(uParam13, 4);
			return 1;
			break;
		case 40:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 41:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 19;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 42:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 17;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 43:
			*uParam1 = 0;
			*uParam2 = 3;
			*uParam3 = 10;
			*uParam4 = 16;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 79:
			*uParam1 = 44;
			*uParam2 = 53;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 80:
			*uParam1 = 44;
			*uParam2 = 47;
			*uParam3 = 54;
			*uParam4 = 63;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 81:
			*uParam1 = 44;
			*uParam2 = 48;
			*uParam3 = 55;
			*uParam4 = 64;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 82:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_1__::func_132(uParam13, 2);
			return 1;
			break;
		case 83:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 84:
			*uParam1 = 46;
			*uParam2 = 51;
			*uParam3 = 62;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_1__::func_132(uParam13, 4);
			return 1;
			break;
		case 85:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 58;
			*uParam4 = 67;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 86:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 87:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 61;
			*uParam4 = 70;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_1__::func_132(uParam13, 2);
			return 1;
			break;
		case 88:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 57;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 131:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 111;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 132:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 102;
			*uParam4 = 110;
			*uParam5 = 115;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 123;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 133:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 97;
			*uParam4 = 105;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 122;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 134:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 135:
			*uParam1 = 89;
			*uParam2 = 95;
			*uParam3 = 101;
			*uParam4 = 108;
			*uParam5 = 116;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 126;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 158:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 151;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 159:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 160:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 141;
			*uParam4 = 145;
			*uParam5 = 147;
			*uParam6 = 150;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
		case 161:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 140;
			*uParam4 = 144;
			*uParam5 = 147;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_1__::func_132(uParam13, 1);
			return 1;
			break;
	}
	return 0;
}

void func_976(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x2A199
{
	Global_21602 = iParam0;
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = uParam7;
	(*uParam2)[2] = uParam8;
	(*uParam1)[3] = uParam9;
	(*uParam2)[3] = uParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

int func_977(int iParam0)//Position - 0x3247D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, iVar0) != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_978(char* sParam0, float fParam1)//Position - 0x29087
{
	sParam0 = sParam0;
	fParam1 = fParam1;
}

int func_979(var uParam0)//Position - 0x2D14C
{
	uParam0 = uParam0;
	return 14;
}

int func_980(int iParam0, var uParam1)//Position - 0x2D15A
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	fVar6 = 180f;
	fVar7 = 140f;
	fVar8 = 80f;
	Var0 = { uParam1->f_4[iParam0 /*3*/] };
	if (iParam0 + 1 == (uParam1->f_126 - 1))
	{
		Var1 = { uParam1->f_4[0 /*3*/] };
	}
	else
	{
		Var1 = { uParam1->f_4[iParam0 + 1 /*3*/] };
	}
	if ((iParam0 - 1) >= 0)
	{
		Var2 = { uParam1->f_4[(iParam0 - 1) /*3*/] };
	}
	Var3 = { Var2 - Var0 };
	Var4 = { Var1 - Var0 };
	fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var4.f_0, Var4.f_1);
	if (fVar5 > 180f)
	{
		fVar5 = (360f - fVar5);
	}
	if (fVar5 < fVar8)
	{
		return 8;
	}
	else if (fVar5 < fVar7)
	{
		return 7;
	}
	else if (fVar5 < fVar6)
	{
		return 6;
	}
	else
	{
		return 6;
	}
	return 6;
}

int func_981(var uParam0, int iParam1)//Position - 0x2D94F
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1, false))
	{
		if (PED::IS_PED_IN_VEHICLE(*uParam0, uParam0->f_1, false))
		{
			if (iParam1 == 4)
			{
				if (!PED::IS_PED_ON_ANY_BIKE(*uParam0))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if ((VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1, joaat("fbi")) || VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1, joaat("firetruk"))) || VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1, joaat("police")))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_982(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0x2DCD5
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_667(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_666(4, iVar0);
		Global_1649593.f_3347[iVar0] = iParam0;
		Global_1649593.f_3347.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_3347.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3347.f_183[iVar0] = uParam3;
		Global_1649593.f_3347.f_216[iVar0] = iParam5;
		Global_1649593.f_3347.f_194[iVar0] = iParam4;
		Global_1649593.f_3347.f_227[iVar0] = iParam6;
		Global_1649593.f_3347.f_270[iVar0] = iParam7;
		Global_1649593.f_3347.f_281[iVar0] = iParam8;
		Global_1649593.f_3347.f_292[iVar0] = iParam9;
		Global_1649593.f_3347.f_303[iVar0] = iParam10;
		Global_1649593.f_3347.f_314[iVar0] = iParam11;
		Global_1649593.f_3347.f_325[iVar0] = iParam13;
		Global_1649593.f_3347.f_336[iVar0] = iParam14;
		Global_1649593.f_3347.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1649593.f_1172 = 1;
		}
	}
}

void func_983(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x2DE2F
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_667(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_666(5, iVar0);
		Global_1649593.f_3705[iVar0] = iParam0;
		Global_1649593.f_3705.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1649593.f_3705.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3705.f_194[iVar0] = uParam3;
		Global_1649593.f_3705.f_183[iVar0] = uParam4;
		Global_1649593.f_3705.f_216[iVar0] = iParam5;
		Global_1649593.f_3705.f_227[iVar0] = iParam6;
		Global_1649593.f_3705.f_270[iVar0] = iParam7;
		Global_1649593.f_3705.f_281[iVar0] = iParam8;
		Global_1649593.f_3705.f_292[iVar0] = iParam9;
		Global_1649593.f_3705.f_303[iVar0] = iParam10;
		Global_1649593.f_3705.f_314[iVar0] = iParam11;
		Global_1649593.f_3705.f_325[iVar0] = iParam12;
	}
}

void func_984(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)//Position - 0x2DF3F
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_667(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_666(0, iVar0);
		Global_1649593.f_1177[iVar0] = iParam0;
		Global_1649593.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[iVar0] = uParam3;
		Global_1649593.f_1177.f_183[iVar0] = uParam4;
		Global_1649593.f_1177.f_216[iVar0] = iParam5;
		Global_1649593.f_1177.f_227[iVar0 /*3*/] = fParam6;
		Global_1649593.f_1177.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1649593.f_1177.f_258[iVar0] = iParam8;
		Global_1649593.f_1177.f_269[iVar0] = iParam9;
		Global_1649593.f_1177.f_312[iVar0] = iParam10;
		Global_1649593.f_1177.f_323[iVar0] = iParam11;
		Global_1649593.f_1177.f_334[iVar0] = iParam12;
		Global_1649593.f_1177.f_345[iVar0] = iParam13;
		Global_1649593.f_1172 = 1;
		Global_1649593.f_1177.f_356[iVar0] = iParam14;
		Global_1649593.f_1177.f_367[iVar0] = iParam15;
		Global_1649593.f_1177.f_378[iVar0] = iParam16;
		Global_1649593.f_1177.f_389[iVar0] = iParam17;
		Global_1649593.f_1177.f_400[iVar0] = iParam18;
		Global_1649593.f_1177.f_411[iVar0] = iParam19;
		Global_1649593.f_1177.f_422[iVar0] = iParam20;
		Global_1649593.f_1177.f_433[iVar0] = iParam21;
		Global_1649593.f_1177.f_444[iVar0] = iParam22;
		Global_1649593.f_1177.f_455[iVar0] = iParam23;
		Global_1649593.f_1177.f_466[iVar0] = iParam24;
		Global_1649593.f_1177.f_205[iVar0] = iParam25;
		Global_1649593.f_1177.f_477[iVar0] = iParam26;
		Global_1649593.f_1177.f_488[iVar0] = iParam27;
		Global_1649593.f_1177.f_499[iVar0] = iParam28;
		Global_1649593.f_1177.f_510[iVar0] = iParam29;
		Global_1649593.f_1177.f_521[iVar0] = iParam30;
		Global_1649593.f_1177.f_532[iVar0] = iParam31;
		Global_1649593.f_1177.f_543[iVar0] = iParam32;
		Global_1649593.f_1177.f_554[iVar0] = iParam33;
		Global_1649593.f_1177.f_565[iVar0] = iParam34;
		Global_1649593.f_1177.f_576[iVar0] = iParam35;
		Global_1649593.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_985(var uParam0, struct<3> Param1)//Position - 0x2F65C
{
	uParam0->f_4[uParam0->f_126 /*3*/] = { Param1 };
	uParam0->f_126++;
}

void func_986()//Position - 0x3235B
{
	if (!Global_113386.f_18574.f_385)
	{
		if (PLAYER::GET_PLAYER_SPRINT_TIME_REMAINING(PLAYER::PLAYER_ID()) <= 5f)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_0__::func_151("AM_H_NOSTAM" /* GXT: You have run out of stamina. Pushing your body any harder will cause you to lose health. */, -1);
				Global_113386.f_18574.f_385 = 1;
			}
		}
	}
}

int func_987()//Position - 0x23AAF
{
	if ((__LIB_0__::func_3() == -1 || __LIB_0__::func_3() == 999) && !func_209() == 0)
	{
		return 1;
	}
	return 0;
}

int func_988(char* sParam0)//Position - 0x36E69
{
	struct<6> Var0;
	Var0 = { __LIB_0__::func_390() };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

int func_989(int iParam0, var uParam1)//Position - 0x3B593
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(*iParam0);
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true) || iVar0 < *uParam1) || PED::IS_PED_RESPONDING_TO_EVENT(*iParam0, 17))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_990(var uParam0)//Position - 0x3E4B3
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		*uParam0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_991(int iParam0, struct<3> Param1, char* sParam2, char* sParam3)//Position - 0x87661
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param1, sParam3);
		iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
		if (!iVar0 == 0)
		{
			if (iVar0 == iVar1)
			{
				iVar2 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
				iVar3 = MISC::GET_HASH_KEY(sParam2);
				if (iVar2 != 0)
				{
					if (iVar2 == iVar3)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_992(var uParam0, float fParam1, bool bParam2)//Position - 0x8B154
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(*uParam0, true), true) < fParam1)
		{
			if (PED::CAN_PED_SEE_HATED_PED(*uParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *uParam0))
					{
						return 1;
					}
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *uParam0))
					{
						return 1;
					}
				}
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, true), 4f, true))
		{
			return 1;
		}
		if (bParam2)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(*uParam0, true), true) < 1.5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_993(int iParam0, int iParam1, float fParam2)//Position - 0x8F0FF
{
	struct<3> Var0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		fVar1 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1) - ENTITY::GET_ENTITY_HEADING(iParam0));
		if (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (MISC::ABSF(fVar1) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_994(int iParam0)//Position - 0x9883B
{
	if (__LIB_0__::func_317(iParam0))
	{
		Global_113386.f_2363.f_539.f_298[iParam0 /*477*/] = { Global_113386.f_2363.f_539.f_1764 };
	}
}

Vector3 func_995(int iParam0)//Position - 0x7B64D
{
	struct<3> Var0;
	Var0 = { 0.247654f, -2.8853f, 0.528659f };
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			switch (CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL())
			{
				case 0:
					Var0 = { -0.414898f, -6.52417f, 1.48257f };
					break;
				case 1:
					Var0 = { -0.409924f, -7.87737f, 1.5684f };
					break;
				case 2:
					Var0 = { -0.403982f, -9.22678f, 1.65399f };
					break;
				case 4:
					Var0 = { -0.353964f, 1.23187f, 0.561746f };
					break;
			}
		}
		else
		{
			switch (CAM::GET_FOLLOW_PED_CAM_ZOOM_LEVEL())
			{
				case 0:
					Var0 = { 0.231316f, -1.91668f, 0.535791f };
					break;
				case 1:
					Var0 = { 0.247654f, -2.8853f, 0.528659f };
					break;
				case 2:
					Var0 = { 0.263986f, -3.85184f, 0.521533f };
					break;
				}
			}
	}
	if (Global_2667225.f_604 == 180f)
	{
		Var0.f_1 = -Var0.f_1;
	}
	return Var0;
}

void func_996(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3)//Position - 0x93096
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_6));
	}
	uParam0->f_6 = OBJECT::CREATE_OBJECT(__LIB_0__::func_415(), Param2, true, true, false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_6, iParam1, 0, Param2, Param3, false, false, false, false, 2, true, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_6, Param3, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_6, true);
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6, false, false);
}

void func_997(var uParam0, float fParam1, bool bParam2, bool bParam3, float fParam4, float fParam5)//Position - 0x9466F
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	__LIB_0__::func_412(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		if (bParam2)
		{
			iVar1 = 4;
		}
		else
		{
			iVar1 = 1;
		}
		if (fParam5 < 0f)
		{
			fVar2 = fParam1;
		}
		else
		{
			fVar2 = fParam5;
		}
		uParam0->f_5 = PHYSICS::ADD_ROPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_6, true), 0f, 90f, 0f, fVar2, iVar1, fVar2, 0.5f, 0.5f, true, false, true, fParam4, false, 0);
		__LIB_0__::func_474(uParam0, fParam1);
		if (bParam3)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_91)
			{
				PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_6, 0f, 0f, -(uParam0->f_31 * IntToFloat(iVar0))));
				iVar0++;
			}
			uParam0->f_59 = 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_91)
			{
				if (iVar0 == 0)
				{
					Var3 = { 0f, 0f, 0f };
				}
				else
				{
					if ((iVar0 % 2) == 0)
					{
						Var3.f_0 = 1f;
					}
					else
					{
						Var3.f_0 = -1f;
					}
					Var3.f_1 = 0f;
					Var3.f_2 = (IntToFloat(iVar0) * -0.02f);
				}
				PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_6, Var3));
				iVar0++;
			}
			uParam0->f_59 = 1;
		}
		uParam0->f_60 = 0;
		uParam0->f_58 = 0;
		uParam0->f_57 = 1;
	}
}

void func_998(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x9493F
{
	uParam0->f_93 = fParam1;
	uParam0->f_94 = fParam2;
	uParam0->f_95 = fParam3;
	uParam0->f_96 = fParam4;
}

void func_999(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x9574D
{
	if (uParam0->f_55)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
			{
				if (uParam0->f_75)
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 118, true);
				}
				if (uParam0->f_76)
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 208, false);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_3))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_3, true, true);
					if (bParam4)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_3);
					}
				}
			}
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			uParam0->f_62 = 0;
		}
		if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
		{
			if (!bParam1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
			}
		}
		if (bParam5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_8));
			}
		}
		if (iParam2 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, iParam2, false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, iParam2, true);
			}
		}
		if (bParam3)
		{
			__LIB_0__::func_413(uParam0);
		}
		uParam0->f_55 = 0;
	}
}

}