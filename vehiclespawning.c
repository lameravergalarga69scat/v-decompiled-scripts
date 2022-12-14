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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_43 = 277.7314f;
	Local_45 = { -196.045f, -580.13f, 135.0004f };
	CAM::DO_SCREEN_FADE_OUT(800);
	func_16();
	while (true)
	{
		GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
		__LIB_0__::func_933();
		if (__LIB_0__::func_959() || uLocal_42)
		{
			func_3();
		}
		if (!iLocal_38)
		{
			if (!iLocal_37 && CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_45, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_43);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_45, 2500f, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_37 = 1;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (!bLocal_41)
				{
					bLocal_41 = func_2();
				}
				else if (!bLocal_39)
				{
					bLocal_39 = func_1();
				}
				else
				{
					CAM::DO_SCREEN_FADE_IN(800);
					iLocal_38 = 1;
				}
			}
		}
	}
}

int func_1()//Position - 0x121
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_44, "garage_decor_01"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_44, "garage_decor_01");
	}
	else
	{
		INTERIOR::REFRESH_INTERIOR(iLocal_44);
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x14B
{
	iLocal_44 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_44))
	{
		if (!iLocal_40)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_44);
			iLocal_40 = 1;
		}
		else if (INTERIOR::IS_INTERIOR_READY(iLocal_44))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_44);
			return 1;
		}
	}
	return 0;
}

void func_3()//Position - 0x18C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_36)
	{
		func_5(iVar0);
		iVar0++;
	}
	__LIB_0__::func_202();
}

void func_5(int iParam0)//Position - 0x1BD
{
	__LIB_1__::func_445(&(uLocal_35[iParam0]));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
}

void func_16()//Position - 0x348
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_35, 21, 0);
	if (!__LIB_0__::func_934())
	{
		func_3();
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!STREAMING::IS_IPL_ACTIVE("imp_dt1_02_cargarage_a"))
	{
		STREAMING::REQUEST_IPL("imp_dt1_02_cargarage_a");
	}
}

