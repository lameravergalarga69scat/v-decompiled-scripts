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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_0__::func_202();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_42__::func_976();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20266.f_1 != 9)
		{
			if (!iLocal_18)
			{
				iLocal_18 = 1;
			}
			else if (Global_20248)
			{
				if (!iLocal_19)
				{
					iLocal_19 = 1;
					__LIB_2__::func_829(Global_20247, "SET_DATA_SLOT_EMPTY", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_4(Global_20247, 1);
					__LIB_2__::func_829(Global_20247, "DISPLAY_VIEW", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_3();
				}
			}
			if (__LIB_13__::func_89())
			{
				__LIB_0__::func_202();
			}
		}
		if (__LIB_13__::func_83())
		{
			__LIB_0__::func_202();
		}
	}
}

void func_3()//Position - 0x148
{
	if (!iLocal_20)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/))
		{
			iLocal_20 = 1;
			__LIB_2__::func_829(Global_20247, "SET_INPUT_EVENT", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/))
	{
		iLocal_20 = 0;
	}
	if (!iLocal_21)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/))
		{
			iLocal_21 = 1;
			__LIB_2__::func_829(Global_20247, "SET_INPUT_EVENT", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/))
	{
		iLocal_21 = 0;
	}
	if (!iLocal_22)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
		{
			iLocal_22 = 1;
			__LIB_2__::func_829(Global_20247, "SET_INPUT_EVENT", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
	{
		iLocal_22 = 0;
	}
	if (!iLocal_23)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
		{
			iLocal_23 = 1;
			__LIB_2__::func_829(Global_20247, "SET_INPUT_EVENT", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
	{
		iLocal_23 = 0;
	}
}

void func_4(int iParam0, bool bParam1)//Position - 0x25C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	if (Global_97528 == Global_97529)
	{
		if (!bParam1)
		{
			return;
		}
	}
	if (iParam0 == 0)
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
	{
		return;
	}
	__LIB_42__::func_976();
	iVar0 = Global_97532;
	iVar1 = Global_97531;
	bVar2 = true;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	while (bVar2)
	{
		iVar4 = iVar3;
		iVar3 = Global_97533[iVar0 /*25*/][iVar1];
		if (!iVar3 == iVar4)
		{
			if (!iVar3 == 0)
			{
				switch (iVar0)
				{
					case 0:
						sVar6 = "fSu" /* GXT: SUNDAY */;
						break;
					case 1:
						sVar6 = "fMo" /* GXT: MONDAY */;
						break;
					case 2:
						sVar6 = "fTu" /* GXT: TUESDAY */;
						break;
					case 3:
						sVar6 = "fWe" /* GXT: WEDNESDAY */;
						break;
					case 4:
						sVar6 = "fTh" /* GXT: THURSDAY */;
						break;
					case 5:
						sVar6 = "fFr" /* GXT: FRIDAY */;
						break;
					case 6:
						sVar6 = "fSa" /* GXT: SATURDAY */;
						break;
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(-1f);
				__LIB_0__::func_610(sVar6);
				__LIB_0__::func_610(func_5(iVar3));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar5++;
			}
		}
		iVar1++;
		if (iVar1 > 23)
		{
			iVar1 = 0;
			iVar0++;
		}
		if (iVar0 > 6)
		{
			iVar0 = 0;
		}
		if (iVar0 == Global_97532 && iVar1 == Global_97531)
		{
			bVar2 = false;
		}
	}
	Global_97529 = Global_97528;
}

char* func_5(int iParam0)//Position - 0x3D0
{
	switch (iParam0)
	{
		case 0:
			return "ORG_EV_0" /* GXT: NOT SET! */;
			break;
		case 1:
			return "ORG_EV_1" /* GXT: House Viewing */;
			break;
	}
	return "ORG_EV_0" /* GXT: NOT SET! */;
}

