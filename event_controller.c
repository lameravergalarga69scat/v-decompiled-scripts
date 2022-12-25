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
	float fLocal_47 = 0f;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_143();
		func_1();
	}
}

void func_1()//Position - 0xA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			iVar7 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar2);
			switch (iVar7)
			{
				case 193:
					__LIB_27__::func_623();
					break;
				case 194:
					__LIB_27__::func_326();
					break;
				case 195:
					func_133(iVar2);
					break;
				case 196:
					__LIB_27__::func_325(iVar2);
					break;
				case 197:
					__LIB_27__::func_802(iVar2);
					break;
				case 215:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		iLocal_64 = 1;
		switch (iVar0)
		{
			case 141:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_55405.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_55405.f_25[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			case 142:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_55405.f_13[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_55405.f_37[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_55405 = iVar3;
	Global_55405.f_12 = iVar4;
	Global_55405.f_24 = iVar5;
	Global_55405.f_36 = iVar6;
}

bool func_2(int iParam0)//Position - 0x24E
{
	return iParam0 < 10;
}

void func_3(int iParam0)//Position - 0x25B
{
	struct<39> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
	{
		iVar1 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(Var0.f_38);
		if (iVar1 >= 0 && iVar1 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		{
			if (NETWORK::NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(iVar1) || NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar1))
			{
				if (NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar1))
				{
					func_58(iVar1);
				}
				else
				{
					NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iVar1);
				}
				func_57(Var0.f_37, -1);
			}
			else if (func_49())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, int iParam2, struct<13> Param3, var uParam4, int iParam5)//Position - 0x2F8
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int* iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_1__::func_800())
		{
			__LIB_17__::func_49(iParam2);
			return 0;
		}
		if (__LIB_1__::func_202())
		{
			__LIB_17__::func_49(iParam2);
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bVar0)
		{
		}
		else if (!NETWORK::NETWORK_IS_FRIEND(&Param3))
		{
			__LIB_17__::func_49(iParam2);
			return 0;
		}
		if (Global_20209)
		{
			__LIB_17__::func_49(iParam2);
			return 0;
		}
		bVar1 = true;
		if (!__LIB_27__::func_316())
		{
			if (!__LIB_0__::func_2(0))
			{
				if (bVar1)
				{
					__LIB_17__::func_49(iParam2);
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_1__::func_796(PLAYER::PLAYER_ID()))
		{
			__LIB_17__::func_49(iParam2);
			return 0;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		__LIB_17__::func_49(iParam2);
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		__LIB_17__::func_49(iParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = __LIB_17__::func_48(Var2);
	if (iVar3 != -1)
	{
		__LIB_27__::func_619(iVar3);
	}
	iVar4 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(iParam2);
	iVar5 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(iVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_2657438[iVar6 /*4*/].f_3 && MISC::GET_GAME_TIMER() < Global_2657438[iVar6 /*4*/].f_2)
		{
			Global_2657438[iVar6 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
			iVar6 = 12;
			__LIB_17__::func_49(iParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	__LIB_13__::func_454(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (__LIB_27__::func_315(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (__LIB_19__::func_47(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = __LIB_17__::func_46(iVar10, Var7.f_1);
		iVar9 = __LIB_17__::func_53(&Var7);
		Var12 = { __LIB_13__::func_473(&Var7, 0) };
		Var13 = { __LIB_18__::func_428(&Var7) };
		iVar15 = 1;
		iVar14 = __LIB_18__::func_426(&Var7, 0);
		iVar19 = __LIB_18__::func_470(&Var7);
		uVar20 = __LIB_3__::func_397(&Var7);
		uVar21 = __LIB_17__::func_52(&Var7);
		bVar22 = __LIB_18__::func_434(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (__LIB_27__::func_618(PLAYER::PLAYER_ID(), Param3))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar23 = true;
			}
			else
			{
				__LIB_17__::func_49(iParam2);
				__LIB_27__::func_617(0);
				return 0;
			}
		}
		if (!__LIB_0__::func_53())
		{
			if (!bVar23)
			{
				if (__LIB_27__::func_616(PLAYER::PLAYER_ID(), Param3))
				{
					__LIB_17__::func_49(iParam2);
					__LIB_27__::func_617(0);
					return 0;
				}
			}
		}
		if (!__LIB_27__::func_314())
		{
			__LIB_17__::func_49(iParam2);
			bVar24 = true;
			__LIB_27__::func_617(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (__LIB_30__::func_359(Param3, &bVar25, 1))
			{
				__LIB_17__::func_49(iParam2);
				__LIB_27__::func_617(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_1659438;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_2655137[iVar26 /*99*/] = { Global_2655137[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_1659438++;
	if (Global_1659438 > 12)
	{
		Global_1659438 = 12;
	}
	iVar28 = 0;
	Global_2655137[iVar28 /*99*/] = 0;
	Global_2655137[iVar28 /*99*/].f_1 = 0;
	Global_2655137[iVar28 /*99*/].f_5 = 0;
	Global_2655137[iVar28 /*99*/].f_2 = iVar16;
	Global_2655137[iVar28 /*99*/].f_3 = 0;
	Global_2655137[iVar28 /*99*/].f_4 = iVar17;
	Global_2655137[iVar28 /*99*/].f_6 = { Param0 };
	Global_2655137[iVar28 /*99*/].f_12 = uVar20;
	Global_2655137[iVar28 /*99*/].f_13 = uVar21;
	Global_2655137[iVar28 /*99*/].f_15 = { Param1 };
	StringCopy(&(Global_2655137[iVar28 /*99*/].f_31), "", 64);
	Global_2655137[iVar28 /*99*/].f_49 = iVar10;
	Global_2655137[iVar28 /*99*/].f_50 = iVar8;
	Global_2655137[iVar28 /*99*/].f_51 = iVar9;
	Global_2655137[iVar28 /*99*/].f_91 = iParam2;
	Global_2655137[iVar28 /*99*/].f_57 = { Var12 };
	Global_2655137[iVar28 /*99*/].f_73 = { Var13 };
	Global_2655137[iVar28 /*99*/].f_52 = iVar14;
	Global_2655137[iVar28 /*99*/].f_53 = 0;
	Global_2655137[iVar28 /*99*/].f_53.f_1 = 0;
	Global_2655137[iVar28 /*99*/].f_53.f_2 = 0;
	Global_2655137[iVar28 /*99*/].f_56 = iVar15;
	Global_2655137[iVar28 /*99*/].f_90 = uParam4;
	Global_2655137[iVar28 /*99*/].f_92 = -1;
	Global_2655137[iVar28 /*99*/].f_93 = iVar18;
	Global_2655137[iVar28 /*99*/].f_94 = Global_2657490;
	Global_2655137[iVar28 /*99*/].f_95 = iVar19;
	Global_2655137[iVar28 /*99*/].f_98 = NETWORK::NETWORK_IS_FRIEND(&Param3);
	if (Global_2655137[iVar28 /*99*/].f_50 == 0)
	{
		if (Global_2655137[iVar28 /*99*/].f_51 == 1)
		{
			Global_2655137[iVar28 /*99*/].f_56 = 0;
		}
	}
	Global_2655137[iVar28 /*99*/].f_96 = __LIB_27__::func_313(Param3, iVar28);
	Global_2655137[iVar28 /*99*/].f_97 = 0;
	Global_2655137[iVar28 /*99*/].f_89 = iParam5;
	Global_2657490++;
	Global_2655137[iVar28 /*99*/].f_47 = __LIB_27__::func_615(Param3);
	if (Global_2655137[iVar28 /*99*/].f_47 != -1)
	{
		Global_2655137[iVar28 /*99*/].f_48 = MISC::GET_GAME_TIMER() + 15000;
	}
	return 1;
}

int func_49()//Position - 0x2174
{
	if (!Global_78319)
	{
		return 1;
	}
	else if (__LIB_17__::func_56())
	{
		return 1;
	}
	return 0;
}

void func_57(var uParam0, int iParam1)//Position - 0x2260
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = __LIB_0__::func_5();
	}
	Global_1575038[iVar0] = uParam0;
}

void func_58(int iParam0)//Position - 0x2282
{
	__LIB_29__::func_991();
	if (__LIB_27__::func_323(1))
	{
		if (!func_102())
		{
			if (!func_91(1))
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					__LIB_27__::func_319();
				}
				__LIB_37__::func_859(1, 0);
				NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
				__LIB_27__::func_318();
				__LIB_27__::func_317();
			}
		}
	}
}

int func_91(int iParam0)//Position - 0x2C1C
{
	if (iParam0 || __LIB_18__::func_176())
	{
		if (!func_93(1))
		{
			return 1;
		}
		if (!__LIB_18__::func_328())
		{
			return 1;
		}
		if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
		{
			return 1;
		}
	}
	return 0;
}

int func_93(bool bParam0)//Position - 0x2C66
{
	if (!__LIB_0__::func_438())
	{
		return 0;
	}
	if ((__LIB_0__::func_966(__LIB_17__::func_54(-1), 0) >= 1 || __LIB_0__::func_351(123, -1)) && __LIB_0__::func_351(133, -1))
	{
		__LIB_18__::func_330();
		return 1;
	}
	else if (bParam0)
	{
		__LIB_18__::func_329();
	}
	return 0;
}

int func_102()//Position - 0x2DF6
{
	if (((((__LIB_2__::func_324() || !__LIB_27__::func_622(-1)) || !func_108()) || !__LIB_27__::func_621()) || !__LIB_27__::func_321()) || __LIB_27__::func_320())
	{
		return 1;
	}
	return 0;
}

int func_108()//Position - 0x2EAE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_109(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x2EDA
{
	if (__LIB_0__::func_351(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0)//Position - 0x3571
{
	struct<9> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
	{
		if (Global_2821909.f_3 == 0)
		{
			if (!func_134(&(Var0.f_8)))
			{
				NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
			}
			else
			{
				Global_2821909.f_3 = 1;
				MemCopy(&(Global_2821909.f_4), {Var0}, 16);
				Global_2821909.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
				Global_2821909.f_58 = -2;
				Global_2821909.f_56 = 0;
				Global_2821909.f_57 = 0;
			}
		}
		else if (!func_134(&(Var0.f_8)))
		{
			NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
		}
		else
		{
			Global_2821909.f_3 = 1;
			MemCopy(&(Global_2821909.f_4), {Var0}, 16);
			Global_2821909.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
			Global_2821909.f_58 = -2;
			Global_2821909.f_56 = 0;
			Global_2821909.f_57 = 0;
		}
	}
}

int func_134(var* uParam0)//Position - 0x3655
{
	if (Global_78319)
	{
		if (__LIB_17__::func_56() == 0)
		{
			return 0;
		}
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	if (Global_2821909.f_1)
	{
	}
	if (Global_20472 == 1)
	{
		return 0;
	}
	if (Global_1836606)
	{
		return 0;
	}
	if (Global_2821909.f_36)
	{
		return 0;
	}
	if (__LIB_0__::func_73())
	{
		return 0;
	}
	if (((Global_43052 != 6 && Global_43052 != 8) && Global_43052 != 12) && Global_43052 != 15)
	{
		return 0;
	}
	if (__LIB_13__::func_94() && !__LIB_0__::func_39(12))
	{
		return 0;
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		return 0;
	}
	if (!__LIB_1__::func_84(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (Global_78579)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(uParam0) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(uParam0) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
	{
		if (__LIB_0__::func_53())
		{
			if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT())
			{
				return 0;
			}
		}
		else if (__LIB_0__::func_52())
		{
			return 0;
		}
	}
	return 1;
}

void func_143()//Position - 0x3A7F
{
	int iVar0;
	if (iLocal_64)
	{
		Global_55405 = 0;
		Global_55405.f_12 = 0;
		Global_55405.f_24 = 0;
		Global_55405.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_55405.f_1[iVar0] = 0;
			Global_55405.f_13[iVar0] = 0;
			Global_55405.f_25[iVar0] = 0;
			Global_55405.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_64 = 0;
	}
}

