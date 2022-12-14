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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	bool bVar1;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_20();
	}
	MISC::SET_MISSION_FLAG(true);
	__LIB_16__::func_16(0);
	func_18();
	SCRIPT::SCRIPT_THREAD_ITERATOR_RESET();
	while (!bVar1)
	{
		iVar0 = SCRIPT::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		if (MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_NAME_OF_SCRIPT_WITH_THIS_ID(iVar0), "heist_ctrl_finale"))
		{
			bVar1 = true;
		}
	}
	CUTSCENE::SET_SCRIPT_CAN_START_CUTSCENE(iVar0);
	__LIB_17__::func_714();
	__LIB_14__::func_592(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, 1, 1, 1, 0, 0);
	func_20();
}

void func_18()//Position - 0xC6C
{
	int iVar0;
	iVar0 = __LIB_0__::func_683();
	switch (iVar0)
	{
		case 0:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("BS_2A_2B_INT", 12, 8);
			break;
		case 1:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("BS_2A_2B_INT", 14, 8);
			break;
		case 2:
			CUTSCENE::REQUEST_CUTSCENE("BS_2A_2B_INT", 8);
			break;
	}
	while (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_20()//Position - 0xCDC
{
	__LIB_0__::func_681(24, 1);
	__LIB_0__::func_526(1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

