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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[50];
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int* iLocal_52 = NULL;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_49 = 15;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_53();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("spaceshipparts")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_0__::func_694(14);
	func_50();
	__LIB_0__::func_740(&Local_42, 0, joaat("prop_power_cell"), "SSHIP_COLLECT" /* GXT: ~1~/50 spaceship parts collected. */);
	__LIB_37__::func_367(&Local_42, joaat("NUM_HIDDEN_PACKAGES_1"), 755, 50);
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
		if (func_16(&Local_42, &Local_48) || __LIB_0__::func_425(107) == 1)
		{
			if (!bLocal_51)
			{
				bLocal_51 = __LIB_28__::func_213(joaat("TEXT_UFOPARTS_DONE"), 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
			if (bLocal_51)
			{
				if (!__LIB_0__::func_683() == 1)
				{
					__LIB_0__::func_697("SSHIP_SWITCH" /* GXT: Switch to Franklin to deliver the spaceship parts to Omega. */, 1, 0, 20000, 10000, 3, 0, 0, 0);
				}
				func_53();
			}
		}
	}
}

int func_16(var uParam0, int iParam1)//Position - 0x86E
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	if (!__LIB_0__::func_39(14) && !CAM::IS_SCREEN_FADED_OUT())
	{
		PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iVar0 = 0;
		while (iVar0 < 1)
		{
			bVar1 = __LIB_0__::func_727(&(uParam0->f_1), uParam0->f_10);
			if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
			{
				if (!bVar1)
				{
					if (uParam0->f_10 == iLocal_49)
					{
						__LIB_17__::func_44(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 1, 0, 2);
						if (OBJECT::DOES_PICKUP_EXIST((iParam1[uParam0->f_10 /*11*/])->f_1))
						{
							INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME((iParam1[uParam0->f_10 /*11*/])->f_1, "GtaMloRoomTun5");
						}
					}
					else if ((((uParam0->f_10 == 6 || uParam0->f_10 == 14) || uParam0->f_10 == 21) || uParam0->f_10 == 34) || uParam0->f_10 == 39)
					{
						__LIB_17__::func_44(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 1, 2);
					}
					else
					{
						__LIB_17__::func_44(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 0, 2);
					}
				}
			}
			else if (!bVar1)
			{
				__LIB_39__::func_404(uParam0, iParam1, Var2);
			}
			uParam0->f_10++;
			if (uParam0->f_10 >= *iParam1)
			{
				uParam0->f_10 = 0;
			}
			iVar0++;
		}
		if (!Global_78579)
		{
			__LIB_30__::func_870(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 0, &iLocal_50, &iLocal_52, "SSHIP_TITLE" /* GXT: Part Collected~s~ */, "SSHIP_COLLECT" /* GXT: ~1~/50 spaceship parts collected. */);
		}
		if (!bLocal_51)
		{
			if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
			{
				bLocal_51 = __LIB_28__::func_213(joaat("TEXT_UFOPARTS_DONE"), 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
		}
		if (!uParam0->f_12 && !uParam0->f_11)
		{
			return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
		}
	}
	return 0;
}

void func_50()//Position - 0x167B
{
	int iVar0;
	iLocal_50 = 0;
	Global_113386.f_10049.f_125.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_48[iVar0 /*11*/].f_3 = { __LIB_39__::func_403(iVar0, 0) };
		Local_48[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_48[0 /*11*/].f_9 = 179.4746f;
	Local_48[1 /*11*/].f_9 = 198f;
	Local_48[2 /*11*/].f_9 = 104f;
	Local_48[3 /*11*/].f_9 = 321.5f;
	Local_48[4 /*11*/].f_9 = 256.25f;
	Local_48[5 /*11*/].f_9 = 286.5f;
	Local_48[6 /*11*/].f_9 = 0f;
	Local_48[6 /*11*/].f_6 = { 0f, 0f, 1f };
	Local_48[7 /*11*/].f_9 = -165.6051f;
	Local_48[8 /*11*/].f_9 = 91.5f;
	Local_48[9 /*11*/].f_9 = 116f;
	Local_48[10 /*11*/].f_9 = 15f;
	Local_48[11 /*11*/].f_9 = 305.5f;
	Local_48[12 /*11*/].f_9 = 0f;
	Local_48[13 /*11*/].f_9 = 95f;
	Local_48[14 /*11*/].f_9 = 40f;
	Local_48[15 /*11*/].f_9 = 40f;
	Local_48[16 /*11*/].f_9 = 40f;
	Local_48[17 /*11*/].f_9 = 40f;
	Local_48[18 /*11*/].f_9 = 40f;
	Local_48[19 /*11*/].f_9 = 40f;
	Local_48[20 /*11*/].f_9 = 40f;
	Local_48[21 /*11*/].f_6 = { 90f, 0f, 57f };
	Local_48[22 /*11*/].f_9 = 40f;
	Local_48[23 /*11*/].f_9 = 40f;
	Local_48[24 /*11*/].f_9 = 40f;
	Local_48[25 /*11*/].f_9 = 40f;
	Local_48[26 /*11*/].f_9 = 40f;
	Local_48[27 /*11*/].f_9 = 40f;
	Local_48[28 /*11*/].f_9 = 40f;
	Local_48[29 /*11*/].f_9 = 40f;
	Local_48[29 /*11*/].f_6 = { -24.35f, 15.74f, 14.31f };
	Local_48[30 /*11*/].f_9 = 40f;
	Local_48[31 /*11*/].f_9 = 40f;
	Local_48[32 /*11*/].f_9 = 40f;
	Local_48[33 /*11*/].f_9 = 40f;
	Local_48[34 /*11*/].f_6 = { 0f, 0f, -15f };
	Local_48[35 /*11*/].f_9 = 40f;
	Local_48[36 /*11*/].f_9 = 40f;
	Local_48[37 /*11*/].f_9 = 40f;
	Local_48[38 /*11*/].f_9 = 40f;
	Local_48[38 /*11*/].f_6 = { 20.18f, -0.87f, 20.46f };
	Local_48[39 /*11*/].f_6 = { 0f, 0f, -4.39f };
	Local_48[40 /*11*/].f_9 = 40f;
	Local_48[41 /*11*/].f_9 = 80f;
	Local_48[42 /*11*/].f_9 = 198f;
	Local_48[43 /*11*/].f_9 = 198f;
	Local_48[44 /*11*/].f_9 = 198f;
	Local_48[45 /*11*/].f_9 = 198f;
	Local_48[46 /*11*/].f_9 = 198f;
	Local_48[47 /*11*/].f_9 = 198f;
	Local_48[48 /*11*/].f_9 = 198f;
	Local_48[49 /*11*/].f_9 = 198f;
}

void func_53()//Position - 0x222B
{
	int iVar0;
	Global_113386.f_10049.f_125.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_48.f_0)
	{
		__LIB_0__::func_714(&(Local_48[iVar0 /*11*/].f_2));
		__LIB_0__::func_733(&(Local_48[iVar0 /*11*/].f_1));
		iVar0++;
	}
	if (__LIB_0__::func_742(&(Local_42.f_1)) || __LIB_0__::func_425(107) == 1)
	{
		__LIB_0__::func_681(107, 1);
		func_55();
		__LIB_0__::func_693(14);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_42.f_7);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_55()//Position - 0x22F8
{
	int iVar0;
	iVar0 = __LIB_0__::func_993(63);
	Global_2676732[iVar0 /*83*/] = 63;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

