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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
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
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_10();
	}
	while (!__LIB_0__.func_176(18))
	{
		func_1();
		SYSTEM::WAIT(0);
	}
	func_10();
}

void func_1()//Position - 0xA4
{
	switch (iLocal_48)
	{
		case 0:
			if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !MISC::IS_AUTO_SAVE_IN_PROGRESS()) && !__LIB_0__.func_526()) && !__LIB_0__.func_511())
			{
				SCRIPT::REQUEST_SCRIPT("taxiService");
				iLocal_48 = 1;
			}
			break;
		case 1:
			if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
			{
				SYSTEM::START_NEW_SCRIPT("taxiService", 1828);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
				iLocal_48 = 2;
			}
			break;
		case 2:
			switch (__LIB_11__.func_512("AM_H_TAXI1" /* GXT: Use ~INPUT_CONTEXT~ to flag down passing taxis. */))
			{
				case 2:
					__LIB_18__.func_203("AM_H_TAXI1" /* GXT: Use ~INPUT_CONTEXT~ to flag down passing taxis. */, 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
				case 1:
					iLocal_48 = 3;
					break;
			}
			break;
		case 3:
			switch (__LIB_11__.func_512("AM_H_TAXI2" /* GXT: Taxi pick ups can be requested through the phone. */))
			{
				case 2:
					__LIB_18__.func_203("AM_H_TAXI2" /* GXT: Taxi pick ups can be requested through the phone. */, 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
				case 1:
					iLocal_48 = 4;
					break;
			}
			break;
		case 4:
			func_10();
			break;
	}
}

void func_10()//Position - 0x56D
{
	if (__LIB_9__.func_610("AM_H_TAXI1" /* GXT: Use ~INPUT_CONTEXT~ to flag down passing taxis. */))
	{
		__LIB_19__.func_856("AM_H_TAXI1" /* GXT: Use ~INPUT_CONTEXT~ to flag down passing taxis. */, 1);
	}
	if (__LIB_9__.func_610("AM_H_TAXI2" /* GXT: Taxi pick ups can be requested through the phone. */))
	{
		__LIB_19__.func_856("AM_H_TAXI2" /* GXT: Taxi pick ups can be requested through the phone. */, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

