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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	float fVar1;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_81 = joaat("rumpo2");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_174();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_mrsphilips")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_0__.func_513(10);
	while (true)
	{
		PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
		iVar0 = __LIB_18__.func_173();
		fVar1 = (CAM::REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() + 5f);
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1973.3237f, 3815.594f, 31.42936f) < (fVar1 * fVar1))
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		if (iVar0 != 2)
		{
			switch (iLocal_79)
			{
				case 0:
				case 1:
				case 2:
					SYSTEM::WAIT(5000);
					break;
				case 3:
					func_170();
					SYSTEM::WAIT(0);
					break;
				case 4:
					func_174();
					SYSTEM::WAIT(0);
					break;
			}
		}
		else
		{
			switch (iLocal_79)
			{
				case 0:
					func_165();
					break;
				case 1:
					func_159();
					break;
				case 2:
					func_1();
					break;
				case 3:
					func_170();
					break;
				case 4:
					func_174();
					break;
			}
			if (!bLocal_82)
			{
				SYSTEM::WAIT(1000);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_1()//Position - 0x182
{
	if (__LIB_32__.func_573(2))
	{
		if (func_3())
		{
			bLocal_82 = false;
			func_2(3);
		}
		else
		{
			func_2(1);
		}
	}
}

void func_2(int iParam0)//Position - 0x1A9
{
	iLocal_79 = iParam0;
	iLocal_80 = 0;
}

int func_3()//Position - 0x1B8
{
	struct<4> Var0;
	char* sVar1;
	while (!__LIB_0__.func_570(36))
	{
		if (__LIB_0__.func_567(36))
		{
			__LIB_0__.func_135("LAUNCH_RC_MISSION - Script denied by RC Controller");
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	func_116();
	__LIB_6__.func_773(36, &Var0);
	MemCopy(&sVar1, {__LIB_0__.func_45(36)}, 4);
	__LIB_6__.func_862(&sVar1, Var0.f_3, 0);
	__LIB_6__.func_861(36);
	if (!__LIB_0__.func_294())
	{
		__LIB_42__.func_612("MrsPhilips2", 1);
	}
	__LIB_35__.func_527(36, Var0.f_0);
	return 1;
}

void func_116()//Position - 0xA176
{
	char* sVar0;
	sVar0 = "MrsPhilips2";
	SCRIPT::REQUEST_SCRIPT(sVar0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sVar0))
	{
		SCRIPT::REQUEST_SCRIPT(sVar0);
		SYSTEM::WAIT(0);
	}
	__LIB_6__.func_863(36);
	SYSTEM::START_NEW_SCRIPT(sVar0, 51000);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
}

void func_123(int iParam0, int iParam1, int iParam2)//Position - 0xA3BE
{
	__LIB_0__.func_562(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_159()//Position - 0xB475
{
	int iVar0;
	switch (iLocal_80)
	{
		case 0:
			bLocal_82 = false;
			iLocal_80 = 1;
			break;
		case 1:
			if (!__LIB_0__.func_67(25) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				__LIB_18__.func_203("MRSP_01_HELP" /* GXT: Find a van with the Deludamol pharmaceuticals logo. */, 1, 0, -1, 10000, 4, 0, 0, 0);
				__LIB_0__.func_460(25);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				if (iVar0 == iLocal_81)
				{
					bLocal_82 = true;
					func_2(2);
				}
			}
			break;
	}
}

void func_165()//Position - 0xB87F
{
	func_166(1);
	func_2(1);
}

void func_166(bool bParam0)//Position - 0xB891
{
	__LIB_6__.func_770(51, bParam0);
	__LIB_6__.func_770(52, bParam0);
	__LIB_6__.func_770(53, bParam0);
	__LIB_6__.func_770(54, bParam0);
	__LIB_6__.func_770(55, bParam0);
	__LIB_6__.func_770(56, bParam0);
}

void func_170()//Position - 0xB981
{
	if (!__LIB_0__.func_39(4))
	{
		if (__LIB_0__.func_528(36))
		{
			func_2(4);
		}
		else
		{
			func_2(1);
		}
	}
}

void func_174()//Position - 0xBA43
{
	func_166(0);
	if (__LIB_0__.func_528(36))
	{
		__LIB_0__.func_512(10);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

