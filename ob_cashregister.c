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
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_1661006, 1))
		{
			__LIB_0__::func_202();
		}
		else
		{
			NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
			__LIB_0__::func_895(0, -1, 0);
			MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
			iLocal_20 = 1;
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		__LIB_0__::func_202();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_20 == 1)
		{
			if (__LIB_0__::func_959())
			{
				__LIB_0__::func_202();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_21))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_21))
			{
				switch (iLocal_18)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_21))
						{
							Local_19 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_21, true) };
							iLocal_18 = 1;
						}
						break;
					case 1:
						if ((OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_21, 0) && ENTITY::IS_ENTITY_VISIBLE(iScriptParam_21)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iScriptParam_21))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				__LIB_0__::func_202();
			}
		}
		else
		{
			__LIB_0__::func_202();
		}
	}
}

void func_1()//Position - 0x111
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("PICKUP_MONEY_MED_BAG");
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(70, 121);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(50, 101);
		iVar3 = __LIB_3__::func_103(iVar3, 1);
	}
	MISC::SET_BIT(&iVar2, 3);
	MISC::SET_BIT(&iVar2, 4);
	STREAMING::REQUEST_MODEL(iVar0);
	while (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		SYSTEM::WAIT(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_26__::func_597(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Local_19, 1.2f, 1.5f), iVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		OBJECT::CREATE_PICKUP(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Local_19, 1.2f, 1.5f), iVar2, iVar3, false, iVar0);
	}
}

