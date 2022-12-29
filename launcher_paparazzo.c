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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	struct<2> Local_58 = { 0, 5 } ;
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
	var uLocal_74 = 5;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
	int iVar2[6];
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
	iLocal_35 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_52 = __LIB_17__::func_29(50);
	iLocal_53 = joaat("pcj");
	iLocal_55 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_37__::func_256();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_37__::func_255(&Var0);
	Var1 = { ScriptParam_58.f_1[0 /*3*/] };
	iVar2[0] = 46;
	iVar2[1] = 47;
	iVar2[2] = 48;
	iVar2[3] = 49;
	iVar2[4] = 50;
	iVar2[5] = 51;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_112473[Var0.f_0 /*10*/].f_9 != -1)
			{
				__LIB_0__::func_135("Relinquishing candidate id...");
				__LIB_0__::func_56(&(Global_112473[Var0.f_0 /*10*/].f_9));
			}
		}
		func_272(&Var0, 1);
	}
	if (!__LIB_37__::func_305(&iVar2, &Var0, Var1, 5f))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_260(Var0.f_0))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__::func_268(Var0.f_0))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_242(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("Player out of range [TERMINATING]");
			func_272(&Var0, 1);
		}
	}
	if (Var0.f_0 == 47)
	{
		iLocal_56 = __LIB_38__::func_487();
	}
	if (Var0.f_0 != 49 && Var0.f_0 != 50)
	{
		MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_37__::func_318(&Var0, 1))
		{
			func_272(&Var0, 1);
		}
		if (Var0.f_0 == 47)
		{
			__LIB_37__::func_296(&Var0, Var1, "PAP2AUD", "PAP2_AMB", 3, "BEVERLY", 5000, 1101004800);
		}
		else if (Var0.f_0 == 51)
		{
			__LIB_37__::func_296(&Var0, Var1, "PAP4AUD", "PAP4_AMB", 3, "BEVERLY", 5000, 1101004800);
		}
		__LIB_37__::func_266(Var0.f_0);
		__LIB_37__::func_297(&iLocal_55, &(Var0.f_9), Var1);
		if (__LIB_37__::func_311(&Var0, 0))
		{
			if (__LIB_37__::func_240(Var0.f_0))
			{
				__LIB_37__::func_264(Var0.f_0, &iLocal_57);
			}
			if (!__LIB_37__::func_327(&Var0))
			{
				func_272(&Var0, 1);
			}
			if (__LIB_37__::func_236(&Var0))
			{
				func_272(&Var0, 0);
			}
		}
	}
}

int func_242(int iParam0)//Position - 0xED02
{
	switch (*iParam0)
	{
		case 46:
			if (!func_257(iParam0))
			{
				return 0;
			}
			break;
		case 47:
			if (!func_256(iParam0))
			{
				return 0;
			}
			break;
		case 48:
			if (!func_255(iParam0))
			{
				return 0;
			}
			break;
		case 49:
			if (!func_254(iParam0))
			{
				return 0;
			}
			break;
		case 50:
			if (!__LIB_38__::func_491(iParam0))
			{
				return 0;
			}
			break;
		case 51:
			if (!func_243(iParam0))
			{
				return 0;
			}
			break;
	}
	__LIB_0__::func_135("Created initial scene");
	return 1;
}

int func_243(var uParam0)//Position - 0xEDA5
{
	int iVar0[7];
	char* sVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	sVar1 = "rcmpaparazzo_4";
	iVar0[0] = uLocal_52;
	iVar0[1] = joaat("issi2");
	iVar0[2] = joaat("rumpo");
	iVar0[3] = joaat("S_M_Y_Grip_01");
	iVar0[4] = joaat("A_F_Y_BevHills_02");
	iVar0[5] = joaat("prop_pap_camera_01");
	iVar0[6] = joaat("prop_v_cam_01");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -476.36862f, 229.57437f, 82.07077f };
			uParam0->f_17[1 /*3*/] = { -513.6883f, 234.2165f, 87.28937f };
			uParam0->f_24 = 25f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_4_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar1);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_267(&(uParam0->f_28[0]), 50, -490.809f, 232.39f, 82.018f, 33.84f, "PAPARAZZO LAUNCHER RC", 0))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
					iVar3 = PED::CREATE_SYNCHRONIZED_SCENE(-490.809f, 232.39f, 82.018f, 0f, 0f, 33.84f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar3, true);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar3, false);
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iVar3, "rcmpaparazzo_4", "pap_4_rcm_leadin", 8f, -8f, 1, 16, 1000f, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				__LIB_17__::func_42(&(uParam0->f_28[1]), iVar0[3], -498.16565f, 228.62839f, 82.09948f, 292.9763f, 26);
				if (__LIB_0__::func_692(uParam0->f_28[1]))
				{
					PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "Camera Man");
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcmpaparazzo_4", "Idle_Camman", 8f, -8f, -1, 57, 0f, false, false, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], true);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 0, 1);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[2]))
			{
				__LIB_17__::func_42(&(uParam0->f_28[2]), iVar0[4], -498.30902f, 227.91116f, 82.105995f, 296.4216f, 26);
				if (__LIB_0__::func_692(uParam0->f_28[2]))
				{
					PED::SET_PED_NAME_DEBUG(uParam0->f_28[2], "Makeup Woman");
					TASK::TASK_PLAY_ANIM(uParam0->f_28[2], "rcmpaparazzo_4", "Idle_Prod", 8f, -8f, -1, 57, 0f, false, false, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[2], true);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 9, 0, 0, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[1], -497.99f, 224.97f, 82.67f, 266.5f);
				if (__LIB_0__::func_695(uParam0->f_35[0]))
				{
					VEHICLE::LOWER_CONVERTIBLE_ROOF(uParam0->f_35[0], true);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[1]), iVar0[2], -501.55f, 230.7f, 83.1f, 233.93f);
				if (__LIB_0__::func_695(uParam0->f_35[1]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 2);
					VEHICLE::SET_VEHICLE_LIVERY(uParam0->f_35[1], 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[5], -490.11f, 233.15f, 82.1f, 0f);
				if (__LIB_0__::func_121(uParam0->f_28[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 57005), 0.1561f, -0.003f, -0.0344f, 202.8703f, -124.43f, -121.5398f, false, false, false, false, 2, true, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[1]), iVar0[6], -490.11f, 233.15f, 82.1f, 0f);
				if (__LIB_0__::func_121(uParam0->f_28[1]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], 57005), 0.1181f, 0.2229f, -0.1535f, 259.2501f, 24.08f, -51.2899f, false, false, false, false, 2, true, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_254(var uParam0)//Position - 0xF666
{
	int iVar0[1];
	int iVar1;
	iVar0[0] = joaat("jackal");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 3;
			uParam0->f_17[0 /*3*/] = { 301.85f, 138.16f, 102.84f };
			uParam0->f_15 = 90f;
			uParam0->f_27 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[0], 307.02f, 143.17f, 103.3f, 250.08f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 2);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_255(var uParam0)//Position - 0xF751
{
	int iVar0[5];
	int iVar1[3];
	struct<3> Var2[3];
	struct<3> Var3[3];
	char* sVar4;
	int iVar5;
	bool bVar6;
	sVar4 = "rcmpaparazzo_3leadinoutpap_3_rcm";
	iVar0[0] = uLocal_52;
	iVar0[1] = joaat("prop_pap_camera_01");
	iVar0[2] = joaat("prop_cs_dumpster_01a");
	iVar0[3] = joaat("prop_cs_dumpster_lidl");
	iVar0[4] = joaat("prop_cs_dumpster_lidr");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -258.5052f, 287.5976f, 90.178276f };
			uParam0->f_17[1 /*3*/] = { -258.5263f, 298.09048f, 93.69456f };
			uParam0->f_24 = 7f;
			uParam0->f_27 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_3_RCM", 24);
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar5]);
				iVar5++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar4);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar6 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_267(&(uParam0->f_28[0]), 50, -261f, 292.22f, 90.89f, 10.53f, "PAPARAZZO LAUNCHER RC", 1))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
				}
				else
				{
					bVar6 = false;
				}
			}
			if (__LIB_0__::func_692(uParam0->f_28[0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
				{
					__LIB_14__::func_807(&(uParam0->f_41[3]), iVar0[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
					if (__LIB_0__::func_121(uParam0->f_41[3]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[3], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[1]);
					}
					else
					{
						bVar6 = false;
					}
				}
				else
				{
					bVar6 = false;
				}
			}
			if (bVar6)
			{
				iVar1[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-260.62f, 292.1391f, 90.604f, 10f, joaat("prop_cs_dumpster_01a"), true, false, true);
				Var2[0 /*3*/] = { -260.614f, 292.106f, 91.127f };
				Var3[0 /*3*/] = { 7.2E-05f, -2.500116f, 89.63998f };
				iVar1[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261.58f, 291.66f, 92.06f, 10f, joaat("prop_cs_dumpster_lidl"), true, false, true);
				Var2[1 /*3*/] = { -261.10797f, 292.50616f, 92.03645f };
				Var3[1 /*3*/] = { -0.656039f, -2.50018f, 89.611404f };
				iVar1[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261.5835f, 291.6671f, 92.066f, 10f, joaat("prop_cs_dumpster_lidr"), true, false, true);
				Var2[2 /*3*/] = { -261.11353f, 291.62494f, 91.99765f };
				Var3[2 /*3*/] = { -0.281056f, -2.500049f, 89.627686f };
				iVar5 = 0;
				while (iVar5 <= 2)
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iVar1[iVar5]));
					iVar5++;
				}
				ENTITY::CREATE_MODEL_HIDE(-260.62f, 292.13f, 90.6f, 10f, joaat("prop_cs_dumpster_01a"), true);
				ENTITY::CREATE_MODEL_HIDE(-261.58f, 291.66f, 92.06f, 10f, joaat("prop_cs_dumpster_lidr"), true);
				ENTITY::CREATE_MODEL_HIDE(-261.54f, 292.54f, 92.1f, 10f, joaat("prop_cs_dumpster_lidl"), true);
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_01a"), Var2[0 /*3*/], true, true, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], Var3[0 /*3*/], 2, true);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[0], false);
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_lidl"), Var2[1 /*3*/], true, true, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[1], Var3[1 /*3*/], 2, true);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[1], false);
				uParam0->f_41[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_lidr"), Var2[2 /*3*/], true, true, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], Var3[2 /*3*/], 2, true);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[2], false);
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_41[0]))
			{
				iLocal_54 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_41[0], true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_41[0], 2), 2);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[0], iLocal_54, "idle_closed_pap_3_rcm_dumpster", sVar4, 8f, -8f, 0, 1000f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_54, true);
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_54, sVar4, "idle_closed_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1000f, 0);
				}
				if (__LIB_0__::func_121(uParam0->f_41[1]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[1], iLocal_54, "idle_closed_pap_3_rcm_lid_l", sVar4, 8f, -8f, 0, 1000f);
				}
				if (__LIB_0__::func_121(uParam0->f_41[2]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[2], iLocal_54, "idle_closed_pap_3_rcm_lid_r", sVar4, 8f, -8f, 0, 1000f);
				}
			}
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar5]);
				iVar5++;
			}
			STREAMING::REMOVE_ANIM_DICT(sVar4);
			return 1;
			break;
	}
	return 0;
}

int func_256(var uParam0)//Position - 0xFC91
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_52;
	iVar0[1] = joaat("fq2");
	iVar0[2] = joaat("prop_pap_camera_01");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -82.641426f, 302.73065f, 104.63494f };
			uParam0->f_17[1 /*3*/] = { -68.78405f, 296.6317f, 107.89578f };
			uParam0->f_24 = 11f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_2_RCM_P2", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_267(&(uParam0->f_28[0]), 50, -71.283f, 301.557f, 106.711f, 4.659f, "PAPARAZZO LAUNCHER RC", 1))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (__LIB_0__::func_692(uParam0->f_28[0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
				{
					__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
					if (__LIB_0__::func_121(uParam0->f_41[0]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[2]);
					}
					else
					{
						bVar2 = false;
					}
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[1], -78.0873f, 299.0679f, 105.3972f, 249.8696f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 7);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], false);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "P4P4R4Z0");
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_28[0]) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				iLocal_54 = PED::CREATE_SYNCHRONIZED_SCENE(-71.283f, 301.557f, 106.711f, 0f, 0f, 4.659f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_54, true);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_54, "rcmpaparazzo_2", "pap_2_rcm_base", 2f, -4f, 1, 0, 1000f, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, true);
			}
			STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo_2");
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", false);
			MISC::CLEAR_AREA_OF_PEDS(-70.12f, 298.33f, 105.25f, 30f, 0);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_257(var uParam0)//Position - 0xFFD3
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	sVar4 = "rcmpaparazzo1beckon";
	iVar0[0] = uLocal_52;
	iVar0[1] = iLocal_53;
	iVar0[2] = joaat("prop_pap_camera_01");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -154.98163f, 287.04315f, 96.63823f };
			uParam0->f_17[1 /*3*/] = { -155.49458f, 274.40674f, 90.82359f };
			uParam0->f_24 = 15f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 0;
			StringCopy(&(uParam0->f_9), "PAP_1_RCM", 24);
			uParam0->f_48 = sVar4;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar4);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
			{
				return 0;
			}
			func_258(46, 1);
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_267(&(uParam0->f_28[0]), 50, -149.75f, 285.81f, 93.67f, 135f, "PAPARAZZO LAUNCHER RC", 1))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
					if (__LIB_0__::func_121(uParam0->f_41[0]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[2]);
					}
					else
					{
						bVar2 = false;
					}
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[1], -159.56f, 275.41f, 93.14f, 102.75f);
				if (__LIB_0__::func_695(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 62, 62);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo1beckon"))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_PLAY_ANIM(0, sVar4, "pap_idle_01", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sVar4, "pap_idle_action_01", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sVar4, "pap_idle_02", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sVar4, "pap_idle_action_02", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iVar3, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				}
			}
			STREAMING::REMOVE_ANIM_DICT(sVar4);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				if (iVar1 != 1)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				}
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_258(int iParam0, bool bParam1)//Position - 0x102FA
{
	switch (iParam0)
	{
		case 46:
			if (bParam1)
			{
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-190.01993f, 260.10822f, 85f, -131.57199f, 285.8091f, 102f, false, true);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-190.01993f, 260.10822f, 85f, -131.57199f, 285.8091f, 102f, 0);
			}
			else
			{
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-190.01993f, 260.10822f, 85f, -131.57199f, 285.8091f, 102f, true, true);
			}
			break;
	}
}

int func_260(int iParam0)//Position - 0x103D6
{
	char* sVar0;
	if (Global_78319)
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085_FLOW_STRUCT_isGameflowActive && !__LIB_0__::func_2(1))
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_261(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_0__::func_432(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), sVar0))
			{
				__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_261(int iParam0)//Position - 0x1048F
{
	var uVar0;
	__LIB_0__::func_432(iParam0, &uVar0);
	if (!__LIB_0__::func_215(4))
	{
		if (__LIB_0__::func_781(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_767() && !__LIB_0__::func_766())
	{
		return 0;
	}
	if (__LIB_37__::func_254(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::func_775();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_774(iParam0))
	{
		if (!__LIB_37__::func_253(iParam0))
		{
			return 0;
		}
		if (!__LIB_37__::func_252(iParam0))
		{
			return 0;
		}
		if (__LIB_0__::func_720(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_262(5))
		{
			Global_112473[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112473[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_262(int iParam0)//Position - 0x10550
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_262(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_623(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_272(int iParam0, bool bParam1)//Position - 0x108DF
{
	if (bParam1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		switch (*iParam0)
		{
			case 46:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_53);
				__LIB_14__::func_871(iParam0, 0, 0, 0);
				break;
			case 47:
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", true);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_56, false);
				__LIB_14__::func_871(iParam0, 0, 0, 0);
				break;
			case 48:
				ENTITY::REMOVE_MODEL_HIDE(-260.62f, 292.13f, 90.6f, 10f, joaat("prop_cs_dumpster_01a"), true);
				ENTITY::REMOVE_MODEL_HIDE(-261.58f, 291.66f, 92.06f, 10f, joaat("prop_cs_dumpster_lidr"), true);
				ENTITY::REMOVE_MODEL_HIDE(-261.54f, 292.54f, 92.1f, 10f, joaat("prop_cs_dumpster_lidl"), true);
				__LIB_0__::func_123(&(iParam0->f_41[3]));
				__LIB_14__::func_871(iParam0, 1, 0, 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", true);
				break;
			case 51:
				STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo_4");
				__LIB_14__::func_871(iParam0, 0, 0, 0);
				break;
			default:
				break;
			}
	}
	func_258(*iParam0, 0);
	if (HUD::DOES_BLIP_EXIST(iLocal_57))
	{
		HUD::REMOVE_BLIP(&iLocal_57);
	}
	if (iLocal_55 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_37__::func_5(&iLocal_55);
	}
	__LIB_37__::func_293(&(iParam0->f_48));
	if (!bParam1)
	{
		if (*iParam0 == 48)
		{
			__LIB_0__::func_135("SCRIPT TERMINATING: Holding on to launcher until Paparazzo 3 cleans up...");
			while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3")) > 0)
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	if (bParam1)
	{
		__LIB_37__::func_266(*iParam0);
	}
	__LIB_37__::func_262();
	__LIB_0__::func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

