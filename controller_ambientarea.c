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
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
	{
		__LIB_0__::func_202();
	}
	func_14();
	iVar0 = 0;
	while (true)
	{
		SYSTEM::WAIT(500);
		iVar1 = 0;
		Var2 = { 0f, 0f, 0f };
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		while (iVar1 != 2)
		{
			if (func_13(&(Global_32299[iVar0 /*7*/])))
			{
				if (func_12(iVar0, Var2))
				{
					__LIB_0__::func_988(&(Global_32299[iVar0 /*7*/]), 2);
					if (Global_32299[iVar0 /*7*/].f_5 != 0)
					{
						if (SCRIPT::IS_THREAD_ACTIVE(Global_32299[iVar0 /*7*/].f_5))
						{
							PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_32299[iVar0 /*7*/].f_5, 1);
						}
						Global_32299[iVar0 /*7*/].f_5 = 0;
					}
				}
			}
			else if (!__LIB_0__::func_703(Global_32299[iVar0 /*7*/], 4))
			{
				if (func_5(&(Global_32299[iVar0 /*7*/]), Var2))
				{
					func_1(iVar0);
				}
			}
			iVar1++;
			iVar0++;
			if (iVar0 == 5)
			{
				iVar0 = 0;
			}
		}
	}
}

void func_1(int iParam0)//Position - 0x14A
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar2 = 1424;
	bVar3 = true;
	switch (iParam0)
	{
		case 0:
			sVar0 = "re_ArmyBase";
			iVar1 = joaat("re_armybase");
			break;
		case 1:
			iVar2 = 5050;
			sVar0 = "golf_ai_foursome";
			iVar1 = joaat("golf_ai_foursome");
			bVar3 = false;
			break;
		case 3:
			sVar0 = "re_Prison";
			iVar1 = joaat("re_prison");
			break;
		case 2:
			iVar2 = 5050;
			sVar0 = "golf_ai_foursome_putting";
			iVar1 = joaat("golf_ai_foursome_putting");
			bVar3 = false;
			break;
		case 4:
			iVar2 = 2050;
			sVar0 = "stripclub";
			iVar1 = joaat("stripclub");
			bVar3 = false;
			break;
	}
	if (!bVar3 && __LIB_16__::func_613())
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sVar0) != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iVar1) == 0)
		{
			SCRIPT::REQUEST_SCRIPT(sVar0);
			while (!SCRIPT::HAS_SCRIPT_LOADED(sVar0))
			{
				SYSTEM::WAIT(0);
			}
			Global_32299[iParam0 /*7*/].f_5 = SYSTEM::START_NEW_SCRIPT(sVar0, iVar2);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			if (Global_32299[iParam0 /*7*/].f_5 != 0)
			{
				__LIB_0__::func_989(&(Global_32299[iParam0 /*7*/]), 2);
			}
		}
	}
}

int func_5(var uParam0, struct<3> Param1)//Position - 0x280
{
	if (!__LIB_0__::func_703(*uParam0, 1))
	{
		if (__LIB_13__::func_94() && !__LIB_0__::func_540(6))
		{
			return 0;
		}
	}
	if (SYSTEM::VDIST2(Param1, uParam0->f_2) > uParam0->f_1)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, true, false, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_12(int iParam0, struct<3> Param1)//Position - 0x553
{
	Param1.f_2 = 0f;
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_32299[iParam0 /*7*/].f_5))
	{
		return 1;
	}
	if (__LIB_0__::func_703(Global_32299[iParam0 /*7*/], 4))
	{
		return 1;
	}
	if (__LIB_13__::func_94() && !__LIB_0__::func_540(6))
	{
		if (!__LIB_0__::func_703(Global_32299[iParam0 /*7*/], 1))
		{
			if (iParam0 == 1 || iParam0 == 2)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("golf")) == 0)
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
	if (SYSTEM::VDIST2(Global_32299[iParam0 /*7*/].f_2, Param1) > (Global_32299[iParam0 /*7*/].f_1 + 400f))
	{
		return 1;
	}
	return 0;
}

bool func_13(var uParam0)//Position - 0x5FE
{
	return __LIB_0__::func_703(*uParam0, 2);
}

void func_14()//Position - 0x60E
{
	int iVar0;
	Global_32299[0 /*7*/].f_2 = { -2189.5447f, 3129.6125f, 0f };
	Global_32299[0 /*7*/].f_1 = (1000f * 1000f);
	Global_32299[0 /*7*/] = 0;
	Global_32299[0 /*7*/].f_5 = 0;
	Global_32299[1 /*7*/].f_2 = { -1172.8221f, 66.5235f, 0f };
	Global_32299[1 /*7*/].f_1 = (300f * 300f);
	Global_32299[1 /*7*/] = 0;
	Global_32299[1 /*7*/].f_5 = 0;
	Global_32299[3 /*7*/].f_2 = { 1692.1469f, 2562.3127f, 0f };
	Global_32299[3 /*7*/].f_1 = (300f * 300f);
	Global_32299[3 /*7*/] = 0;
	Global_32299[3 /*7*/].f_5 = 0;
	Global_32299[2 /*7*/].f_2 = { -1329.6797f, 60.3478f, 0f };
	Global_32299[2 /*7*/].f_1 = (250f * 250f);
	Global_32299[2 /*7*/] = 0;
	Global_32299[2 /*7*/].f_5 = 0;
	Global_32299[4 /*7*/].f_2 = { 114.64f, -1290.34f, 0f };
	Global_32299[4 /*7*/].f_1 = (100f * 100f);
	Global_32299[4 /*7*/] = 1;
	Global_32299[4 /*7*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_32299[iVar0 /*7*/].f_2.f_2 = 0f;
		iVar0++;
	}
}

