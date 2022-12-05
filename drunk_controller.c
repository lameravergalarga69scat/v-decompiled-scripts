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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_18 = 0f;
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
	fLocal_16 = -99f;
	fLocal_18 = -1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		func_32();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_20__.func_644(0);
		func_30();
		func_23();
		func_20();
		func_15();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!__LIB_30__.func_101())
		{
			func_32();
		}
	}
}

void func_2()//Position - 0xE3
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	if (!Global_44203)
	{
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (Global_44205 > iVar1 || Global_44205 == -1)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			return;
		}
		iVar2 = __LIB_12__.func_425();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = __LIB_7__.func_907();
		if (Global_44208 != Global_44209)
		{
			fVar6 = (Global_44209 - Global_44208);
			Global_44208 = (Global_44208 + (fVar6 * 0.1f));
			if (MISC::ABSF((Global_44208 - Global_44209)) < 0.01f)
			{
				Global_44208 = Global_44209;
			}
		}
		if (!CAM::IS_GAMEPLAY_CAM_SHAKING() && !__LIB_3__.func_139(PLAYER::PLAYER_ID()))
		{
			CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", ((Global_44208 * fVar3) * fVar5));
		}
		if ((MISC::GET_GAME_TIMER() % 100) == 0)
		{
			if (Global_44205 == -1)
			{
			}
			else
			{
				if (fLocal_18 == -1f)
				{
					fLocal_18 = fVar3;
				}
				CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(((Global_44208 * fVar3) * fVar5));
				CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(((Global_44207 * fVar3) * fVar5));
				fLocal_18 = fVar3;
			}
		}
		if (((Global_44207 * fVar3) * fVar5) < 1f)
		{
			CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(((Global_44207 * fVar3) * fVar5));
		}
		else
		{
			CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(1f);
		}
		if (!CAM::IS_CINEMATIC_CAM_SHAKING())
		{
			CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (((Global_44208 * Global_44202) * fVar3) * fVar5));
		}
		CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE((((Global_44208 * Global_44202) * fVar3) * fVar5));
		if (CAM::DOES_CAM_EXIST(Global_44204))
		{
			if (CAM::IS_CAM_SHAKING(Global_44204))
			{
				CAM::SET_CAM_SHAKE_AMPLITUDE(Global_44204, ((Global_44208 * fVar3) * fVar5));
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_44232) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_44216))
		{
			AUDIO::START_AUDIO_SCENE(&Global_44216);
			StringCopy(&Global_44232, "", 16);
		}
		CAM::INVALIDATE_IDLE_CAM();
		if (Global_44211 > 0f)
		{
			if (fLocal_16 != Global_44211)
			{
				if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
				{
				}
				else if (!GRAPHICS::GET_IS_TIMECYCLE_TRANSITIONING_OUT())
				{
					GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(&Global_44212, 15f);
					fLocal_16 = Global_44211;
					if (Global_44210 != 1f)
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(Global_44210);
					}
				}
			}
			else
			{
				if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					fLocal_16 = -99f;
				}
				AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(2);
				iVar7 = (Global_44205 - iVar1);
				if (iVar7 <= (Global_44206 / 2) && Global_44205 != -1)
				{
					bVar8 = false;
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							bVar8 = true;
						}
					}
					if (__LIB_7__.func_320(PLAYER::PLAYER_PED_ID()))
					{
						Global_44205 += 1000;
					}
					else if (bVar8)
					{
						Global_44205 += 1000;
					}
					else if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
					{
						Global_44205 += 1000;
					}
					else if (__LIB_6__.func_350())
					{
						Global_44205 += 1000;
					}
					else
					{
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
						{
							GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER((SYSTEM::TO_FLOAT((Global_44206 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_44211 = 0f;
						StringCopy(&Global_44212, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_18 = -1f;
	fLocal_16 = -99f;
	__LIB_19__.func_813(1);
	iLocal_12 = 1;
}

void func_15()//Position - 0x757
{
	if (Global_43998[iLocal_15 /*5*/] == 0)
	{
		func_16(iLocal_15);
	}
}

void func_16(int iParam0)//Position - 0x770
{
	int iVar0;
	struct<5> Var1;
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_43998[iParam0 /*5*/].f_1, false))
	{
		__LIB_0__.func_560(iParam0);
		return;
	}
	if (__LIB_7__.func_320(Global_43998[iParam0 /*5*/].f_1))
	{
		__LIB_0__.func_560(iParam0);
		return;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("drunk"))
	{
		SCRIPT::REQUEST_SCRIPT("drunk");
		return;
	}
	iVar0 = func_18();
	if (iVar0 == -1)
	{
		__LIB_0__.func_560(iParam0);
		return;
	}
	Global_44024[iVar0 /*5*/] = func_17();
	Global_44024[iVar0 /*5*/].f_1 = Global_43998[iParam0 /*5*/].f_1;
	Global_44024[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_43998[iParam0 /*5*/] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &Var1, 5, 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("drunk");
	__LIB_0__.func_560(iParam0);
}

var func_17()//Position - 0x838
{
	var uVar0;
	uVar0 = Global_43995;
	Global_43995++;
	return uVar0;
}

int func_18()//Position - 0x84F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_20()//Position - 0x901
{
	if (!Global_44105[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_44105[iLocal_13 /*6*/].f_1 == 0)
		{
			func_22(iLocal_13);
			__LIB_11__.func_787(iLocal_13);
		}
	}
}

void func_22(int iParam0)//Position - 0x97E
{
	int iVar0;
	iVar0 = Global_44105[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		default:
			break;
	}
}

void func_23()//Position - 0x9C8
{
	int iVar0;
	iVar0 = -1;
	if (!Global_44024[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_29(Global_44024[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_24(Global_44024[iLocal_14 /*5*/]);
		}
		else
		{
			__LIB_11__.func_787(iVar0);
		}
	}
}

void func_24(int iParam0)//Position - 0xA08
{
	int iVar0;
	func_27(iParam0);
	iVar0 = __LIB_2__.func_139(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	__LIB_31__.func_131(iVar0);
}

void func_27(int iParam0)//Position - 0xAAA
{
	__LIB_20__.func_644(iParam0);
	func_28(iParam0);
}

void func_28(int iParam0)//Position - 0xABE
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44105[iVar0 /*6*/].f_1)
		{
			__LIB_11__.func_787(iVar0);
		}
		iVar0++;
	}
}

int func_29(int iParam0, int iParam1)//Position - 0xAF0
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_30()//Position - 0xB2E
{
	if (Global_44105[iLocal_13 /*6*/] == 1)
	{
		Global_44105[iLocal_13 /*6*/] = 0;
	}
}

void func_32()//Position - 0xB79
{
	__LIB_39__.func_590();
	if (!iLocal_12)
	{
		__LIB_19__.func_813(1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

