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
	var uLocal_46 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	struct<222> Var6;
	var* uVar7;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	__LIB_42__::func_458();
	func_701();
	__LIB_42__::func_629();
	func_688();
	func_687();
	func_685();
	func_669();
	func_655();
	MISC::START_SAVE_DATA(&Global_113386, 38584, true);
	MISC::REGISTER_FLOAT_TO_SAVE(&Global_113386, "fSaveVersion");
	registerFLOW_STRUCT();
	func_638();
	func_624();
	func_617();
	func_613();
	func_609();
	func_605();
	func_600();
	func_590();
	func_574();
	func_569();
	func_566();
	func_553();
	func_550();
	func_543();
	func_541();
	func_529();
	func_526();
	func_522();
	func_517();
	func_512();
	func_508();
	func_498();
	func_495();
	func_494();
	func_493();
	func_492();
	func_491();
	func_489();
	func_485();
	func_484();
	func_481();
	func_477();
	func_475();
	func_473();
	func_470();
	func_464();
	func_459();
	func_458();
	func_448();
	func_447();
	func_444();
	func_441();
	func_440();
	func_436();
	func_433();
	func_432();
	func_431();
	func_430();
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_4542087, 2);
	iVar0 = 38584;
	iVar1 = MISC::GET_SIZE_OF_SAVE_DATA(true);
	if (iVar0 != iVar1)
	{
	}
	func_429();
	STATS::STAT_SET_INT(joaat("SP_KNIFE_FLIGHTS_COUNT"), __LIB_42__::func_628(), true);
	STATS::STAT_SET_INT(joaat("SP_UNDER_THE_BRIDGE_COUNT"), __LIB_39__::func_425(), true);
	if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 1))
	{
		Global_1 = 1;
	}
	else
	{
		Global_1 = 0;
	}
	__LIB_42__::func_627(0);
	if ((!__LIB_0__::func_109() && !__LIB_0__::func_109()) && !__LIB_0__::func_114())
	{
		if (BitTest(Global_113386.f_668.f_1317, 0) || BitTest(Global_113386.f_668.f_1317, 1))
		{
			__LIB_13__::func_802(0);
			__LIB_13__::func_802(1);
			__LIB_13__::func_802(2);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_122(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	if ((((!__LIB_0__::func_115() && !__LIB_0__::func_109()) && !__LIB_0__::func_109()) && !__LIB_0__::func_114()) && !__LIB_0__::func_116())
	{
		if (BitTest(Global_113386.f_668.f_1317, 3))
		{
			__LIB_15__::func_932(48);
			TASK::SET_SCENARIO_GROUP_ENABLED("BLIMP" /* GXT: Atomic Blimp */, false);
			__LIB_39__::func_422(57);
			MISC::CLEAR_BIT(&(Global_113386.f_668.f_1317), 3);
		}
	}
	if ((!__LIB_0__::func_109() && !__LIB_0__::func_109()) && !__LIB_0__::func_114())
	{
		if (__LIB_0__::func_786(0, 10))
		{
			__LIB_13__::func_782(0, 10, 0);
			__LIB_14__::func_622(95, 0, 0);
		}
	}
	if (!BitTest(Global_113386.f_2363.f_4865, 0))
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			iVar3 = 0;
			while (iVar3 < 44)
			{
				iVar5 = 0;
				bVar4 = 20;
				while (bVar4 <= 31)
				{
					if (BitTest(Global_113386.f_2363.f_539.f_298[iVar2 /*477*/][iVar3 /*5*/].f_2, bVar4))
					{
						Global_113386.f_2363.f_539.f_298[iVar2 /*477*/][iVar3 /*5*/].f_3 = iVar5;
						MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_298[iVar2 /*477*/][iVar3 /*5*/].f_2), bVar4);
					}
					iVar5++;
					bVar4++;
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < 51)
			{
				iVar5 = 0;
				bVar4 = 20;
				while (bVar4 <= 31)
				{
					if (BitTest(Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar3 /*5*/].f_2, bVar4))
					{
						Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar3 /*5*/].f_3 = iVar5;
						MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar3 /*5*/].f_2), bVar4);
					}
					iVar5++;
					bVar4++;
				}
				iVar3++;
			}
			iVar2++;
		}
		MISC::SET_BIT(&(Global_113386.f_2363.f_4865), 0);
	}
	Var6 = 44;
	Var6.f_221 = 51;
	func_112(&Var6, &uVar7);
	if (Global_1 || !__LIB_0__::func_78(Global_113386.f_25084, 0f, 0f, 0f, 0))
	{
		if (Global_2)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_374(__LIB_14__::func_466()))
			{
				__LIB_15__::func_980(PLAYER::PLAYER_PED_ID(), 1, 0);
				__LIB_15__::func_977(PLAYER::PLAYER_PED_ID());
				__LIB_15__::func_976(PLAYER::PLAYER_PED_ID());
				func_122(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(PLAYER::PLAYER_PED_ID(), false, 0);
			}
			Global_32337 = 0;
		}
		else
		{
			__LIB_39__::func_434("startup_positioning", 2324);
		}
	}
	Global_113386.f_9085_FLOW_STRUCT_isGameflowActive = 1;
	if (!Global_1)
	{
		__LIB_42__::func_632();
		if (Global_2 || Global_3)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/]), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/]), 1);
		}
	}
	Global_113386.f_7229.f_31 = 1;
	func_78();
	func_75();
	func_34();
	__LIB_38__::func_28();
	__LIB_38__::func_977();
	__LIB_38__::func_47(0);
	__LIB_0__::func_405(PLAYER::PLAYER_PED_ID());
	if (BitTest(Global_113386.f_668.f_1317, 3))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("BLIMP" /* GXT: Atomic Blimp */))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("BLIMP" /* GXT: Atomic Blimp */, true);
		}
	}
	else if (TASK::IS_SCENARIO_GROUP_ENABLED("BLIMP" /* GXT: Atomic Blimp */))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BLIMP" /* GXT: Atomic Blimp */, false);
	}
	__LIB_0__::func_696();
	SYSTEM::WAIT(0);
	if (!(MISC::IS_COMMANDLINE_END_USER_BENCHMARK() || MISC::LANDING_SCREEN_STARTED_END_USER_BENCHMARK()))
	{
		__LIB_39__::func_434("main_persistent", 1424);
		BRAIN::ENABLE_SCRIPT_BRAIN_SET(1);
	}
}

void func_34()//Position - 0x8D65
{
	int iVar0;
	int iVar1;
	if (!Global_113386.f_7229.f_25)
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			Global_113386.f_7229[iVar0] = 0;
			if (!Global_113386.f_9085_FLOW_STRUCT_isGameflowActive && !__LIB_0__::func_2(0))
			{
				MISC::SET_BIT(&(Global_113386.f_7229[iVar0]), 0);
			}
			MISC::SET_BIT(&(Global_113386.f_7229[iVar0]), 1);
			iVar0++;
		}
		Global_113386.f_7229.f_25 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= (10 - 1))
	{
		func_35(iVar1, BitTest(Global_113386.f_7229[iVar1], 0));
		iVar1++;
	}
}

void func_35(int iParam0, bool bParam1)//Position - 0x8E06
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	MISC::SET_SAVE_HOUSE(Global_95479[iParam0 /*10*/].f_8, bParam1, true);
	func_64(iParam0);
	__LIB_15__::func_220(iParam0, 0);
	__LIB_14__::func_624(iParam0);
	__LIB_16__::func_899(iParam0);
}

void func_64(int iParam0)//Position - 0xD53A
{
	bool bVar0;
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_95479[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (BitTest(Global_113386.f_7229[iParam0], 0))
	{
		if (Global_95479[iParam0 /*10*/].f_9 != __LIB_14__::func_466())
		{
			bVar0 = true;
		}
		else if (!func_68(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (__LIB_0__::func_426(6))
		{
			bVar0 = false;
		}
	}
	if (__LIB_0__::func_540(14))
	{
		bVar0 = false;
	}
	__LIB_14__::func_622(Global_95479[iParam0 /*10*/].f_7, bVar0, 0);
}

int func_68(int iParam0)//Position - 0xD7D8
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
			if (func_68(iVar0))
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

void func_75()//Position - 0xDAC5
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	MISC::ADD_STUNT_JUMP_ANGLED(2.143237f, 1720.5264f, 224.36223f, 14.62072f, 1712.3737f, 230.3794f, 6f, 98.661514f, 1846.0696f, 173.6653f, 41.456577f, 1758.3989f, 213.03613f, 30f, 58.2f, 1729.6f, 228.1f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-437.43567f, -1196.3062f, 52.99947f, -442.85046f, -1190.4874f, 57.125355f, 6f, -435.02042f, -1242.0337f, 48.43407f, -448.8804f, -1342.7756f, 30.265724f, 24f, -462.6627f, -1212.3562f, 58.3663f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(466.72003f, 4319.375f, 59.95854f, 474.21158f, 4328.239f, 64.00435f, 8f, 401.46814f, 4394.32f, 61.782753f, 450.53293f, 4342.308f, 66.88426f, 25.75f, 454.12354f, 4323.501f, 68.73932f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-166.34563f, 6578.911f, 12.059387f, -162.1356f, 6575.2026f, 16.190191f, 6f, -151.75652f, 6588.687f, 8.772982f, -55.48508f, 6689.3867f, 14.518071f, 21f, -166.0263f, 6588.806f, 11.696039f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-977.3154f, 4180.1816f, 133.4073f, -969.15594f, 4188.9883f, 138.60732f, 7f, -1068.2544f, 4267.542f, 101.99857f, -1008.68286f, 4219.6455f, 117.8451f, 24f, -977f, 4247f, 144f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-7.579316f, -1037.7183f, 37.534637f, -6.544167f, -1033.3213f, 41.57407f, 8f, -32.064377f, -1018.61975f, 26.909771f, -100.72847f, -1024.3561f, 29.274048f, 38.75f, -36f, -1037f, 47f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-268.0506f, -770.5955f, 55.124f, -270.5158f, -775.40967f, 60.102818f, 6f, -213.37762f, -799.55383f, 28.454012f, -176.94937f, -812.3639f, 34.23903f, 25.75f, -163.4269f, -787.8375f, 53.7828f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-86.19047f, -537.1067f, 38.11981f, -81.48403f, -537.1505f, 43.904827f, 3f, -102.13432f, -526.78503f, 26.510422f, -177.54826f, -526.9933f, 32.527603f, 24f, -113f, -545f, 45f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-1594.7732f, -762.3895f, 20.853231f, -1603.4246f, -727.02893f, 25.636606f, 8f, -1634.0385f, -735.4114f, 9.369503f, -1718.6711f, -678.6514f, 14.066201f, 78.5f, -1610f, -714f, 22f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-248.65648f, -215.40202f, 47.082996f, -234.42912f, -206.4805f, 50.082996f, 6f, -288.78427f, -199.22147f, 36.635315f, -348.30902f, -192.37932f, 41.15861f, 33.5f, -268f, -223f, 50f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-1442.9155f, 403.0396f, 109.28736f, -1447.8031f, 402.92548f, 114.29721f, 6f, -1431.1521f, 327.97552f, 60.381454f, -1443.3359f, 247.94896f, 63.55577f, 55.5f, -1474f, 352.8f, 104.1f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(3351.9866f, 5156.3345f, 18.207516f, 3352.7502f, 5148.515f, 24.133018f, 10f, 3418.5293f, 5166.2812f, 3.857807f, 3445.4395f, 5168.2646f, 9.606205f, 32.25f, 3391f, 5177f, 18f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1687.4855f, 2340.2605f, 73.36435f, 1674.0062f, 2340.698f, 78.25781f, 6f, 1685.3633f, 2411.0728f, 43.42663f, 1684.3015f, 2434.852f, 48.56516f, 40f, 1648f, 2359f, 80f, 150, 0, 0);
	Var2 = { 319f, -612f, 45f };
	MISC::ADD_STUNT_JUMP(307.3563f, -621.0101f, 42.3353f, 309.8869f, -619.0259f, 45.4455f, 334.0952f, -649.0976f, 27.6553f, 390.8702f, -627.327f, 30.9727f, Var2, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-882.79474f, -854.2749f, 17.6236f, -884.027f, -849.2998f, 28.123604f, 9f, -963.61f, -859.19727f, 11.989673f, -902.29205f, -857.79565f, 20.240978f, 38.25f, -910f, -876f, 25f, 150, 0, 0);
	Var2 = { 366f, -1150f, 43f };
	MISC::ADD_STUNT_JUMP(364.7186f, -1162.9991f, 28.2918f, 374.8433f, -1153.4512f, 34.7019f, 289.772f, -1195.9619f, 37.1024f, 344.4012f, -1168.4542f, 40.4272f, Var2, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(396.10138f, -1656.2368f, 48.000576f, 400.5907f, -1659.7153f, 53.08016f, 8f, 423.40088f, -1627.2831f, 27.291819f, 448.9984f, -1594.9144f, 32.305393f, 55.25f, 424f, -1656f, 51f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(52.473076f, -779.20447f, 42.219185f, 50.38058f, -784.9816f, 47.189617f, 6f, 74.71162f, -792.1132f, 29.642887f, 119.47993f, -808.37103f, 34.348747f, 24.5f, 73f, -769f, 46f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(32.60692f, 6526.0977f, 29.624762f, 44.76025f, 6513.1963f, 41.560658f, 13.5f, 28.092398f, 6507.57f, 29.43886f, -21.483648f, 6456.2866f, 33.366425f, 32.25f, 1.0814f, 6495.7554f, 39.2608f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1789.045f, 2049.2378f, 65.45301f, 1783.4915f, 2044.9768f, 68.84211f, 6f, 1839.6664f, 1912.0605f, 56.960133f, 1806.0438f, 1994.968f, 63.338337f, 20f, 1774f, 2030f, 71f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-1070.7548f, 10.703864f, 50.348785f, -1071.086f, 8.394933f, 55.376255f, 6f, -1059.8037f, 7.505019f, 59.629753f, -1042.7594f, 4.53342f, 45.65608f, 3f, -1062f, 24f, 63f, 150, 0, 0);
	Var0 = { 89.6931f, -2191.2747f, 5.747f };
	Var1 = { 30.7866f, -2192.5728f, 5.1184f };
	Var2 = { 80.9447f, -2199.3025f, 4.9105f };
	MISC::ADD_STUNT_JUMP(__LIB_39__::func_421(Var0, 0), __LIB_39__::func_421(Var0, 1), func_76(Var1, 0), func_76(Var1, 1), Var2, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1637.9042f, 3608.2751f, 33.474846f, 1629.7421f, 3603.816f, 42.636044f, 9.875f, 1590.5509f, 3584.659f, 30.728943f, 1495.2557f, 3532.6199f, 40.861553f, 41.625f, 1557f, 3589f, 42f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(566.68f, -594.16003f, 43.86801f, 564.135f, -594.5361f, 48.96004f, 6f, 584.3754f, -656.73627f, 10.542001f, 607.39124f, -744.896f, 15.907088f, 80f, 550f, -632f, 45f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(452.99863f, -1374.922f, 43.02972f, 449.32126f, -1379.4425f, 48.076088f, 6f, 491.9446f, -1413.1997f, 27.305395f, 557.421f, -1461.4285f, 32.192543f, 46.5f, 495f, -1397f, 48f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-425.5986f, -1555.6082f, 22.706762f, -418.99017f, -1557.3239f, 31.416306f, 9.5f, -425.47293f, -1443.8934f, 19.719975f, -430.4611f, -1535.3114f, 28.212673f, 25.5f, -444.5202f, -1511.7565f, 27.8632f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-963.1714f, -2778.5056f, 14.478279f, -965.73615f, -2777.1213f, 19.463955f, 8f, -988.8297f, -2830.7893f, 11.964784f, -1027.9891f, -2895.4358f, 16.95805f, 18f, -967.196f, -2811.7156f, 14.5521f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-2009.6931f, -319.28024f, 47.545036f, -2000.673f, -306.36725f, 51.545036f, 8f, -2102.1323f, -241.92262f, 7.677715f, -2040.3416f, -281.88773f, 26.539358f, 71.75f, -2060.9036f, -251.8438f, 35.9419f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1671.9133f, 3151.226f, 45.29734f, 1680.9493f, 3154.494f, 50.302197f, 6f, 1658.6874f, 3255.261f, 38.572178f, 1665.7797f, 3198.1858f, 46.24008f, 60.5f, 1651f, 3166f, 57f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-524.65186f, -1489.8649f, 12.315341f, -521.7512f, -1477.9479f, 17.322552f, 6f, -499.42178f, -1491.9802f, 8.405223f, -443.70697f, -1514.6996f, 15.502266f, 33.5f, -522f, -1516f, 17f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(787.837f, -2912.4077f, 5.628719f, 787.8829f, -2910.0022f, 10.592762f, 8f, 734.11743f, -2910.2605f, 3.919759f, 671.3137f, -2910.305f, 9.191636f, 14f, 757f, -2923f, 20f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1978.6943f, 1925.877f, 87.246f, 1980.8882f, 1942.7355f, 96.48006f, 8.3125f, 1918.1731f, 1913.6854f, 55.10921f, 1900.4034f, 2006.5867f, 61.17362f, 31f, 1928.2118f, 1911.1404f, 73.7466f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(672.2588f, -3003.4043f, 6.047905f, 672.00385f, -3007.0752f, 10.866047f, 6f, 782.1926f, -2994.9321f, 4.036896f, 732.1247f, -3005.6904f, 11.83312f, 37.25f, 715f, -3024f, 20f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(108.17593f, -2815.1226f, 9.17942f, 110.25454f, -2814.7568f, 14.236788f, 6f, 93.96964f, -2739.8582f, 4.505202f, 82.31894f, -2706.242f, 7.005202f, 23.25f, 92f, -2786f, 15f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(109.05937f, -3209.3123f, 7.463991f, 111.059616f, -3208.9277f, 12.912594f, 6f, 127.454666f, -3257.3904f, 14.779922f, 128.44643f, -3311.1704f, 19.44173f, 18f, 108f, -3292f, 26f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(124.214874f, -2954.8147f, 9.250035f, 122.11164f, -2955.0295f, 14.266128f, 6f, 128.92989f, -3006.8005f, 15.476112f, 134.75255f, -3068.489f, 20.46475f, 22f, 113f, -2980f, 19f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(174.63142f, -2782.5117f, 7.013673f, 183.19745f, -2774.7048f, 13.750202f, 3.25f, 260.69302f, -2675.1648f, 16.322165f, 231.21439f, -2747.909f, 18.904116f, 16f, 188f, -2749f, 24f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(163.6802f, -2961.3328f, 7.712487f, 165.73824f, -2960.9795f, 12.76933f, 6f, 142.2329f, -2895.0386f, 12.959893f, 142.2177f, -2849.85f, 18.459892f, 28.25f, 173f, -2918f, 20f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(285.75012f, -3014.0552f, 8.774601f, 288.31985f, -3013.423f, 13.831964f, 6f, 274.98248f, -2988.7988f, 3.447593f, 272.0995f, -2860.9592f, 9.019781f, 60.75f, 284f, -2968f, 16f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(371.4717f, -2635.26f, 9.349143f, 371.62857f, -2637.3137f, 14.396375f, 6f, 506.06033f, -2627.2344f, 4.586116f, 442.4721f, -2630.0056f, 7.15538f, 18f, 412f, -2621f, 21f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-854.31323f, -2551.8374f, 20.418636f, -850.60986f, -2553.9692f, 27.433271f, 6f, -798.0812f, -2469.6638f, 11.884529f, -885.4293f, -2483.408f, 23.946112f, 95.25f, -891.8524f, -2466.8152f, 60.0357f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-986.5257f, -2507.1882f, 20.45239f, -990.4862f, -2504.8801f, 27.38469f, 6f, -987.5785f, -2554.4663f, 32.705853f, -1014.47766f, -2600.2502f, 40.10584f, 50.25f, -1023f, -2516f, 43f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-589.2717f, -1532.1613f, 3.122784f, -587.61676f, -1526.1705f, 6.213938f, 6f, -704.96295f, -1488.5146f, 3.172576f, -763.7324f, -1463.6753f, 6.000514f, 42.5f, -669f, -1537f, 33f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-626.5751f, -1075.8972f, 21.066702f, -625.03845f, -1070.0188f, 26.058414f, 7f, -704.2628f, -1075.6385f, 11.31195f, -668.6943f, -1051.6837f, 17.631138f, 28.25f, -641f, -1061f, 25f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-453.6471f, -1397.4199f, 30.327072f, -449.6354f, -1397.1127f, 35.30394f, 6f, -456.18817f, -1440.832f, 27.297173f, -454.37933f, -1482.4261f, 34.734535f, 16.75f, -436f, -1417f, 39f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-445.23865f, -542.0142f, 24.500528f, -442.5161f, -542.0551f, 29.523548f, 6f, -445.70044f, -442.11624f, 40.409298f, -445.18115f, -499.79892f, 20.823542f, 24.25f, -464f, -526f, 30f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-594.9152f, -109.85971f, 40.96681f, -600.70935f, -107.16799f, 45.9851f, 3.375f, -625.0757f, -166.66788f, 35.669353f, -603.11176f, -120.366f, 40.4407f, 3.75f, -601f, -124f, 44f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-726.34106f, -58.790874f, 39.675186f, -728.8365f, -54.570683f, 42.723984f, 3f, -771.4631f, -75.396164f, 35.85175f, -855.1539f, -118.44125f, 40.327747f, 30f, -737f, -78f, 46f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1480.1853f, -2218.5376f, 77.756454f, 1478.2123f, -2215.5498f, 80.62068f, 3f, 1429.0216f, -2249.86f, 59.383785f, 1361.2682f, -2295.8794f, 68.70474f, 34.75f, 1457f, -2255f, 79f, 150, 0, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(367.16415f, -2522.2588f, 6.246408f, 367.94803f, -2525.4702f, 10.879891f, 6f, 401.67624f, -2508.9697f, 10.139722f, 433.92432f, -2495.2686f, 17.23942f, 25.75f, 376f, -2490f, 18f, 150, 0, 0);
	MISC::ENABLE_STUNT_JUMP_SET(0);
}

Vector3 func_76(struct<3> Param0, bool bParam1)//Position - 0xECB2
{
	struct<3> Var0;
	Var0 = { -15f, -15f, -2f };
	if (bParam1)
	{
		Var0 = { 15f, 15f, 5f };
	}
	Var0 = { Param0 + Var0 };
	return Var0;
}

void func_78()//Position - 0xED26
{
	__LIB_10__::func_404(-1680125890);
	__LIB_10__::func_404(-1355829283);
	__LIB_10__::func_404(359660636);
	__LIB_10__::func_404(joaat("fbi_1_door_0"));
	__LIB_10__::func_404(joaat("fbi_1_door_1"));
	__LIB_10__::func_404(joaat("fbi_1_door_2"));
	__LIB_10__::func_404(joaat("fbi_1_door_3"));
	__LIB_10__::func_404(joaat("fbi_1_door_4"));
	__LIB_10__::func_404(joaat("fbi_1_door_5"));
	__LIB_10__::func_404(joaat("fbi_1_door_6"));
	__LIB_10__::func_404(joaat("fbi_1_door_7"));
	__LIB_10__::func_404(joaat("fbi_1_door_8"));
	__LIB_10__::func_404(joaat("fbi_1_door_9"));
	__LIB_10__::func_404(joaat("fbi_1_door_10"));
	__LIB_10__::func_404(joaat("fbi_1_door_11"));
	__LIB_10__::func_404(joaat("fbi_1_door_12"));
	__LIB_10__::func_404(joaat("fbi_1_door_13"));
	__LIB_10__::func_404(joaat("fbi_1_door_14"));
	__LIB_10__::func_404(joaat("fbi_5_door_0"));
	__LIB_10__::func_404(joaat("fbi_5_door_1"));
	__LIB_10__::func_404(joaat("fbi_5_door_2"));
	__LIB_10__::func_404(joaat("fbi_5_door_3"));
	__LIB_10__::func_404(joaat("fbi_5_door_4"));
	__LIB_10__::func_404(joaat("fbi_5_door_7"));
	__LIB_10__::func_404(joaat("fbi_5_door_8"));
	__LIB_10__::func_404(joaat("fbi_5_door_9"));
	__LIB_10__::func_404(joaat("fbi_5_door_10"));
	__LIB_10__::func_404(joaat("fbi_5_door_11"));
	__LIB_10__::func_404(joaat("fbi_5_door_12"));
	__LIB_10__::func_404(joaat("fbi_5_door_13"));
	__LIB_10__::func_404(joaat("fbi_5_door_14"));
	__LIB_10__::func_404(joaat("fbi_5_door_15"));
	__LIB_10__::func_404(joaat("fbi_5_door_16"));
	__LIB_10__::func_404(joaat("fbi_5_door_17"));
	__LIB_10__::func_404(joaat("fbi_5_door_18"));
	__LIB_10__::func_404(joaat("fbi_5_door_19"));
	__LIB_10__::func_404(joaat("fbi_5_door_20"));
	__LIB_10__::func_404(joaat("fbi_5_door_21"));
	__LIB_10__::func_404(joaat("fbi_5_door_22"));
	__LIB_10__::func_404(joaat("fbi_5_door_23"));
	__LIB_10__::func_404(joaat("fbi_5_door_24"));
	__LIB_10__::func_404(joaat("fbi_5_door_25"));
	__LIB_10__::func_404(joaat("fbi_5_door_26"));
	__LIB_10__::func_404(1739830342);
	__LIB_10__::func_404(1008345977);
	__LIB_10__::func_404(-1838261400);
	__LIB_10__::func_404(-88189184);
	__LIB_10__::func_404(joaat("Josh2_door_0"));
	__LIB_10__::func_404(joaat("Josh2_door_1"));
	__LIB_10__::func_404(joaat("Josh2_door_2"));
	__LIB_10__::func_404(joaat("Josh2_door_3"));
	__LIB_10__::func_404(joaat("Josh2_door_4"));
	__LIB_10__::func_404(joaat("Josh2_door_5"));
	__LIB_10__::func_404(380898258);
	__LIB_10__::func_404(-1889206990);
	__LIB_10__::func_404(-1834311451);
	__LIB_10__::func_404(1669415571);
	__LIB_10__::func_404(22407341);
	__LIB_10__::func_404(-1132110067);
	__LIB_10__::func_404(1999080436);
	__LIB_10__::func_404(-2122735464);
	__LIB_10__::func_404(-1689889743);
	__LIB_10__::func_404(-1508546097);
	__LIB_10__::func_404(-1614750430);
	__LIB_10__::func_404(-1433472322);
	__LIB_10__::func_404(-453122141);
	__LIB_10__::func_404(-827016431);
	__LIB_10__::func_404(27336937);
	__LIB_10__::func_404(670861759);
	__LIB_10__::func_404(84471659);
	__LIB_10__::func_404(-2106541084);
	__LIB_10__::func_404(613961892);
	__LIB_10__::func_404(830974511);
	__LIB_10__::func_404(-1089784078);
	__LIB_10__::func_404(-862072297);
	__LIB_10__::func_404(1774128219);
	__LIB_10__::func_404(2020911558);
	__LIB_10__::func_404(1322145394);
	__LIB_10__::func_404(1560081103);
	__LIB_10__::func_404(1028478351);
	__LIB_10__::func_404(-1117366713);
	__LIB_10__::func_404(-1741878315);
	__LIB_10__::func_404(-1444827330);
	__LIB_10__::func_404(-224378694);
	__LIB_10__::func_404(2122012786);
	__LIB_10__::func_404(1616809629);
	__LIB_10__::func_404(-1380475172);
	__LIB_10__::func_404(-279150617);
	__LIB_10__::func_404(-1189014671);
	__LIB_10__::func_404(-942231332);
	__LIB_10__::func_404(-2120178575);
	__LIB_10__::func_404(1631749045);
	__LIB_10__::func_404(-40354734);
	__LIB_10__::func_404(-104186273);
	__LIB_10__::func_404(1246814063);
	__LIB_10__::func_404(1063217957);
	__LIB_10__::func_404(-106864726);
	__LIB_10__::func_404(joaat("eCRIM_HUP_GAS_2B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_GAS_3A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_GAS_3B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_GAS_4A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_GAS_4B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_GAS_1A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_GAS_1B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_GAS_5A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_GAS_5B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_LIQUOR_1A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_LIQUOR_2A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_LIQUOR_3A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_LIQUOR_4A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_LIQUOR_5A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_3A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_3B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_2A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_2B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_4A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_4B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_5A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_5B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_6A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_6B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_7A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_7B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_8A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_8B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_9A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_9B"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_10A"));
	__LIB_10__::func_404(joaat("eCRIM_HUP_SHOP247_10B"));
}

void func_112(var uParam0, var* uParam1)//Position - 0x149C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = FILES::GET_NUM_DLC_WEAPONS();
	iVar2 = 0;
	while (iVar2 < 3)
	{
		*uParam0 = { Global_113386.f_2363.f_539.f_298[iVar2 /*477*/] };
		iVar4 = 0;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (((iVar4 < iVar0 && FILES::GET_DLC_WEAPON_DATA(iVar1, uParam1)) && !FILES::IS_CONTENT_ITEM_LOCKED(*uParam1)) && !__LIB_0__::func_290(uParam1->f_1))
			{
				iVar5 = 1;
				iVar3 = 0;
				while (iVar5 && iVar3 < uParam0->f_221)
				{
					if (uParam0->f_221[iVar3 /*5*/] == uParam1->f_1)
					{
						Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/] = { uParam0->f_221[iVar3 /*5*/] };
						iVar4++;
						iVar5 = 0;
					}
					iVar3++;
				}
				if (iVar5 && (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION()))
				{
					Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_1 = uParam1->f_6 * 2;
					Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/] = uParam1->f_1;
					Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_2 = 0;
					Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_3 = 0;
					Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_4 = 0;
					iVar4++;
				}
			}
			iVar1++;
		}
		iVar1 = iVar4;
		while (iVar1 <= 50)
		{
			Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/] = 0;
			Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/].f_2 = 0;
			Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/].f_3 = 0;
			Global_113386.f_2363.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/].f_4 = 0;
			iVar1++;
		}
		if (__LIB_14__::func_466() == iVar2)
		{
			__LIB_15__::func_980(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
		iVar2++;
	}
}

void func_122(int iParam0)//Position - 0x14F9D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_13__::func_802(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_224(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_209(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_123(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_209(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_209(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_123(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_123(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_123(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_123(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_123(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_123(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_123(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_123(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_123(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_123(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_123(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_209(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_224(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_123(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x151FA
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_196(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_196(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2C2F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_196(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_196(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_950(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_196(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_196(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_209(int iParam0, int iParam1, int iParam2)//Position - 0x2F881
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_216(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_216(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_0__::func_453(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_0__::func_350(iParam0, iParam1);
		}
	}
	return -99;
}

int func_216(int iParam0, int iParam1, int iParam2)//Position - 0x2FCDF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_216(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_216(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_216(iParam0, 14, iVar4))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = __LIB_0__::func_350(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_216(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_224(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x3109A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_410(iParam0, iVar1, &iVar2, 0))
			{
				func_396(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_394(iParam0, iVar1, &iVar2))
			{
				func_396(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_391(iParam0);
			__LIB_0__::func_413(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_413(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_463(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_462(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_227(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_227(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_227(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_463(iVar9);
			}
			else
			{
				iVar9 = __LIB_0__::func_462(iVar9);
			}
			__LIB_0__::func_413(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_413(2053, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_513(161, 1, -1, 1);
		}
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

int func_227(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x31576
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_349(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { __LIB_0__::func_459(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_349(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78190 };
							}
							else
							{
								uVar15 = { __LIB_0__::func_466(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_349(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_227(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_349(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_347(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_227(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_0__::func_662();
			if (iVar17 != -1)
			{
				__LIB_0__::func_661(iVar17, 0, iParam10);
			}
			func_341(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_349(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_12__::func_901(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_227(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_349(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_227(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_332(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_227(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_227(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__::func_33(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_4)
		{
			iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar21 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar23 = __LIB_0__::func_350(iParam0, 11);
				iVar24 = __LIB_0__::func_350(iParam0, 8);
				iVar25 = __LIB_0__::func_350(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_0__::func_350(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_331(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar27 = 11;
							iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("DRESS"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (__LIB_0__::func_282(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_0__::func_350(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_227(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_0__::func_280(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_0__::func_280(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_3__::func_523(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_227(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_227(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_0__::func_452(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_227(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_523(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_0__::func_357(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_278(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_227(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_227(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_227(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_520(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_341(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_331(iVar5, func_347(iParam0, 8, -1), iParam2, func_347(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_369(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_369(2160, iParam10, 0);
				}
				PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_463(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_462(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_274(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_331(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar46 = 11;
						iVar47 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("DRESS"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (__LIB_0__::func_282(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_341(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_331(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_0__::func_350(iParam0, 7);
				if (!__LIB_0__::func_547(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__::func_369(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_369(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_369(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_412(135, iParam10);
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				__LIB_3__::func_345(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_0__::func_350(iParam0, 11);
			iVar58 = __LIB_0__::func_350(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_227(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_227(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_331(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_331(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar60 = 11;
						iVar61 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("DRESS"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (__LIB_0__::func_282(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_227(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_331(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_227(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_248(iParam0))
				{
					iVar63 = __LIB_0__::func_442(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_251(iParam0, 9, iVar63))
						{
							func_227(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_227(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_227(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_369(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_0__::func_533(iParam0, iVar64), __LIB_0__::func_242(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_227(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_347(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_347(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_227(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_227(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
				iVar71 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar72 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar73 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
				iVar74 = __LIB_0__::func_350(iParam0, 4);
				iVar75 = __LIB_0__::func_350(iParam0, 6);
				if (__LIB_0__::func_238(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_227(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_227(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_227(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_227(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_238(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_227(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_227(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_227(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_227(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_332(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_227(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_227(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_228(iParam0, &uVar4))
		{
			func_227(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_227(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_227(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_227(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_347(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_227(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_228(int iParam0, var uParam1)//Position - 0x33420
{
	int iVar0;
	int iVar1;
	*uParam1 = func_347(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_369(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_369(754, Global_78127, 0) == 0 && __LIB_0__::func_369(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				if (__LIB_0__::func_369(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_369(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_369(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_369(755, Global_78127, 0);
		if (!func_251(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_369(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_369(753, Global_78127, 0);
			}
			__LIB_0__::func_413(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_413(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_251(int iParam0, int iParam1, int iParam2)//Position - 0x37748
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				case 1:
					iVar4 = 4;
					break;
				case 2:
					iVar4 = 6;
					break;
				case 3:
					iVar4 = 7;
					break;
				case 4:
					iVar4 = 8;
					break;
				case 5:
					iVar4 = 11;
					break;
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_251(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_0__::func_466(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_251(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_251(iParam0, 14, iVar6))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = __LIB_0__::func_350(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (__LIB_0__::func_369(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_251(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_0__::func_240(iVar0, 11, __LIB_0__::func_350(iParam0, 11), -1))
				{
					if (__LIB_0__::func_353(iVar0, 4, iParam2, &uVar18))
					{
						return func_251(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_251(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_274(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3E473
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_346(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_0__::func_661(iVar1, 1, iParam2);
	}
	func_275(iParam0, bParam3, 0, -1);
}

void func_275(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3E4C0
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_78127;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = __LIB_0__::func_276(iParam0);
		bVar3 = func_311(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_302(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (__LIB_0__::func_549(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_0__::func_674(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_0__::func_549(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (__LIB_0__::func_549(iVar10, iVar0))
					{
						if (__LIB_0__::func_674(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_348(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_260(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_302(int iParam0, int iParam1)//Position - 0x4A06B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_347(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_347(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_311(int iParam0, bool bParam1)//Position - 0x4A4C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						case 1:
						case 7:
						case 12:
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_347(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				case 5:
					if (!bParam1)
					{
						if (__LIB_0__::func_549(13, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(14, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(15, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(16, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(71, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(72, -1))
						{
						}
						else if (__LIB_0__::func_536(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_347(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_347(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_347(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_347(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HEIST_DRAW_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_347(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_347(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_347(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_331(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x53356
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_278(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_331(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = __LIB_0__::func_204(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_278(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					case joaat("DLC_MP_VAL_F_ACCS2_0"):
					case joaat("DLC_MP_VAL_F_ACCS2_1"):
					case joaat("DLC_MP_VAL_F_ACCS2_2"):
					case joaat("DLC_MP_VAL_F_ACCS2_3"):
					case joaat("DLC_MP_VAL_F_ACCS2_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_0"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_1"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_2"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_3"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_5"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_6"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_7"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_8"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_9"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_10"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_11"):
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_0")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_1")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_2")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_3")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_4")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_5")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_6")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_331(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_0__::func_280(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_0"), 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = __LIB_0__::func_204(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

void func_332(int iParam0)//Position - 0x54693
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<5> Var15;
	int* iVar16;
	int iVar17;
	struct<5> Var18;
	int* iVar19;
	int iVar20;
	struct<5> Var21;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0))
	{
		if (!func_337(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_286(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_285(iVar17, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar17, &Var18);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var18.f_3, Var18.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("FAKE_HAT"), 1))
		{
			if (__LIB_0__::func_286(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_285(iVar20, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar20, &Var21);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var21.f_3, Var21.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_283(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_337(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_337(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5505D
{
	int iVar0;
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("FITTED_HOOD"), 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SKI_MASK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("NIGHT_VISION"), 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("MP_M_Freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_14"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_15"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SCRUFFY_BALACLAVA"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_SMUG_F_BERD_8_0"):
			case joaat("DLC_MP_SMUG_F_BERD_8_1"):
			case joaat("DLC_MP_SMUG_F_BERD_8_2"):
			case joaat("DLC_MP_SMUG_F_BERD_8_3"):
			case joaat("DLC_MP_SMUG_F_BERD_8_4"):
			case joaat("DLC_MP_SMUG_F_BERD_8_5"):
			case joaat("DLC_MP_SMUG_F_BERD_8_6"):
			case joaat("DLC_MP_SMUG_F_BERD_8_7"):
			case joaat("DLC_MP_SMUG_F_BERD_8_8"):
			case joaat("DLC_MP_SMUG_F_BERD_8_9"):
			case joaat("DLC_MP_SMUG_F_BERD_8_10"):
			case joaat("DLC_MP_SMUG_F_BERD_8_11"):
			case joaat("DLC_MP_SMUG_F_BERD_8_12"):
			case joaat("DLC_MP_SMUG_F_BERD_8_13"):
			case joaat("DLC_MP_SMUG_F_BERD_8_14"):
			case joaat("DLC_MP_SMUG_F_BERD_8_15"):
			case joaat("DLC_MP_SMUG_F_BERD_8_16"):
			case joaat("DLC_MP_SMUG_F_BERD_8_17"):
			case joaat("DLC_MP_SMUG_F_BERD_8_18"):
			case joaat("DLC_MP_SMUG_F_BERD_8_19"):
			case joaat("DLC_MP_SMUG_F_BERD_8_20"):
			case joaat("DLC_MP_SMUG_F_BERD_8_21"):
			case joaat("DLC_MP_SMUG_F_BERD_8_22"):
			case joaat("DLC_MP_SMUG_F_BERD_8_23"):
			case joaat("DLC_MP_SMUG_F_BERD_8_24"):
			case joaat("DLC_MP_SMUG_F_BERD_8_25"):
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_347(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x57A45
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_391(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_0__::func_280(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_0__::func_350(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_0__::func_350(iParam0, 11);
				if (!__LIB_0__::func_280(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_3__::func_346(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_347(iVar0, iParam2, 13) && !__LIB_3__::func_347(iVar0, iParam2, 14)) && !__LIB_3__::func_347(iVar0, iParam2, 15)) && !__LIB_3__::func_347(iVar0, iParam2, 16)) && !__LIB_3__::func_347(iVar0, iParam2, 71)) && !__LIB_3__::func_347(iVar0, iParam2, 72))
				{
					__LIB_3__::func_346(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_0__::func_676(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_0__::func_660(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_0__::func_661(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_347(int iParam0, int iParam1, int iParam2)//Position - 0x57CF4
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_251(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_251(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_0__::func_453(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_0__::func_350(iParam0, iParam1);
		}
	}
	return -99;
}

void func_349(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x57E2D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4538446)
					{
						Global_4538446[iVar5] = -1;
						Global_4538457[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							__LIB_0__::func_538(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_349(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4538445++;
				if (Global_4538445 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4538446)
						{
							if (Global_4538446[iVar1] != -1)
							{
								if (iParam0 == joaat("MP_M_Freemode_01"))
								{
									func_349(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_349(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4538445 = (Global_4538445 - 1);
			}
			return;
		}
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && !BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__::func_369(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_413(iVar6, iVar7, Global_78127, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_349(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_349(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_349(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_349(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_349(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_391(int iParam0)//Position - 0x70BB0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_347(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_27"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_347(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_394(int iParam0, int iParam1, int iParam2)//Position - 0x70F22
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_216(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x70FE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_78128++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_0__::func_633(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_0__::func_350(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_0__::func_350(iParam0, 9);
			if (iVar10 == joaat("Player_Zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("Player_One"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("Player_Two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = __LIB_0__::func_453(iParam0, 1);
			if (!__LIB_0__::func_234(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_0__::func_453(iParam0, 0);
			if (!__LIB_0__::func_233(iVar10, 14, iVar8, -1) && !__LIB_0__::func_232(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_0__::func_453(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_78173 };
		}
		else
		{
			uVar11 = { __LIB_0__::func_459(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, uVar11[iVar0], -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_78190 };
						}
						else
						{
							uVar12 = { __LIB_0__::func_466(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_0__::func_633(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_396(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("Player_One") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							__LIB_0__::func_230(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_0__::func_633(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_14__::func_752(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_396(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_209(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_410(iParam0, iVar10, &iVar4, 1))
							{
								func_396(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_396(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_13__::func_798(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_396(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_396(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_396(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_396(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_396(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_0__::func_466(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_0__::func_633(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_396(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_0__::func_633(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_396(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_396(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_14__::func_635(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_410(iParam0, iVar10, &iVar4, 0))
		{
			func_396(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_394(iParam0, iVar10, &iVar4))
		{
			func_396(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_410(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x735A5
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_216(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_429()//Position - 0x748E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 162;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = iVar0;
		MISC::COPY_SCRIPT_STRUCT(&(Global_1998[iVar1 /*29*/]), &(Global_113386.f_28050[iVar1 /*29*/]), 29);
		iVar0++;
	}
}

void func_430()//Position - 0x74922
{
	int iVar0;
	char cVar1[32];
	struct<8> Var2;
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_26434), 1616, "DIRECTOR_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434), "BitsetCharacterStoryUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_1), "BitsetCharacterHeistUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_2), "BitsetCharacterSpecialUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_3), "BitsetCharacterAnimalUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_4), "BitsetTravelLocationRevealed");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_5), "ExitHelpShownCount");
	StringCopy(&Var2, "DirMode_bookmark", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_6), 101, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_6)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_6[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "DirMode_bookmarkcat", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_107), 21, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_107)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_107[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "DirMode_bookmarkmodel", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_128), 21, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_128)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_128[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_149), "BitsetshortlistSex");
	StringCopy(&Var2, "DirMode_bookmarkvoice", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_150), 21, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_150)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_150[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_171), "Player_headingX");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_171.f_1), "Player_headingY");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_171.f_2), "Player_headingZ");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_174), "Player_heading");
	StringCopy(&Var2, "DirMode_userloc", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_175), 7, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_175)
	{
		cVar1 = { Var2 };
		StringConCat(&cVar1, "X", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_175[iVar0 /*3*/]), &cVar1);
		cVar1 = { Var2 };
		StringConCat(&cVar1, "Y", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_175[iVar0 /*3*/].f_1), &cVar1);
		cVar1 = { Var2 };
		StringConCat(&cVar1, "Z", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_175[iVar0 /*3*/].f_2), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "DirMode_userhead", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_182), 3, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_182)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_182[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "DirMode_userInterior", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_185), 3, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_185)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_26434.f_185[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "DirMode_PropEditScenePos", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_188), 601, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_188)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_188[iVar0 /*3*/]), &cVar1);
		StringConCat(&cVar1, "y", 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_188[iVar0 /*3*/].f_1), &cVar1);
		StringConCat(&cVar1, "z", 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_188[iVar0 /*3*/].f_2), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "DirMode_PropEditSceneRot", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_789), 601, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_789)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_789[iVar0 /*3*/]), &cVar1);
		StringConCat(&cVar1, "y", 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_789[iVar0 /*3*/].f_1), &cVar1);
		StringConCat(&cVar1, "z", 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_26434.f_789[iVar0 /*3*/].f_2), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "DirMode_PropEditSceneModel", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_1390), 201, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_1390)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_26434.f_1390[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "DirMode_PropEditSceneNames", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_26434.f_1591), 25, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_26434.f_1591)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_TEXT_LABEL_23_TO_SAVE(&(Global_113386.f_26434.f_1591[iVar0 /*6*/]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_431()//Position - 0x74ED9
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_25073), 11, "COUNTRY_RACE_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25073), "COUNTRY_RACE_iCurrentRace");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25073.f_1), "COUNTRY_RACE_iBestTime");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25073.f_2), "COUNTRY_RACE_iSlipStreamHelpCount");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25073.f_3), "COUNTRY_RACE_bStallionUnlocked");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25073.f_4), "COUNTRY_RACE_bGauntletUnlocked");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25073.f_5), "COUNTRY_RACE_bDominatorUnlocked");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25073.f_6), "COUNTRY_RACE_bBuffaloUnlocked");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25073.f_7), "COUNTRY_RACE_bMarshallUnlocked");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25073.f_8), "COUNTRY_RACE_bRaceJustCompleted");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25073.f_9), "COUNTRY_RACE_bDisrupted");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25073.f_10), "COUNTRY_RACE_bTextRegistered");
	MISC::STOP_SAVE_STRUCT();
}

void func_432()//Position - 0x74FBB
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_24976), 3, "SEA_RACE_SAVED_STRUCT");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_24976), "bSeaRaceFirstBlip");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24976.f_1), "iSeaRaceWon");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24976.f_2), "iSeaRaceLeaveArea");
	MISC::STOP_SAVE_STRUCT();
}

void func_433()//Position - 0x7500C
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_24995), 78, "RANDOM_EVENTS_SAVED");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24995), "RE_FLAGS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24995.f_1), "RE_TIME_REQ_SET");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24995.f_2), "RE_HELP_COUNT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24995.f_3), "RE_BLIP_HELP_COUNT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24995.f_4), "RE_ITEM_HELP_COUNT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24995.f_5), "RE_NUMBER_OF_PEDS_DELIVERED");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24995.f_6), "RE_SECVANHELP");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_24995.f_7), "RE_DRUGFARMATTACKED");
	func_435(&(Global_113386.f_24995.f_8), "RE_VAR_COMPLETE");
	func_434(&(Global_113386.f_24995.f_43), "RE_BLOCK_TIME");
	MISC::STOP_SAVE_STRUCT();
}

void func_434(var* uParam0, char* sParam1)//Position - 0x750DC
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 35, sParam1);
	iVar0 = 0;
	while (iVar0 < 34)
	{
		StringCopy(&cVar1, "RAND_EVENT_Time", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_435(var* uParam0, char* sParam1)//Position - 0x75123
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 35, sParam1);
	iVar0 = 0;
	while (iVar0 < 34)
	{
		StringCopy(&cVar1, "RAND_EVENT_Var", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_436()//Position - 0x7516A
{
	func_437(&(Global_113386.f_24904), "PROPERTIES_SAVED_DATA");
}

void func_437(var* uParam0, char* sParam1)//Position - 0x75182
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 72, sParam1);
	func_438(uParam0, "OwnershipData");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_65), "bit");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_66), "subvarbit");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_67), "propertyNextTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68), "cardest");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_69), "soncash");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_70), "trafcash");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_71), "towcash");
	MISC::STOP_SAVE_STRUCT();
}

void func_438(var* uParam0, char* sParam1)//Position - 0x751FE
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 65, sParam1);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&Var1, "PROPERTY_TOWING_IMPOUND", 32);
				break;
			case 1:
				StringCopy(&Var1, "PROPERTY_TAXI_LOT", 32);
				break;
			case 2:
				StringCopy(&Var1, "PROPERTY_ARMS_TRAFFICKING", 32);
				break;
			case 3:
				StringCopy(&Var1, "PROPERTY_SONAR_COLLECTIONS", 32);
				break;
			case 4:
				StringCopy(&Var1, "PROPERTY_CAR_MOD_SHOP", 32);
				break;
			case 5:
				StringCopy(&Var1, "PROPERTY_CINEMA_VINEWOOD", 32);
				break;
			case 6:
				StringCopy(&Var1, "PROPERTY_CINEMA_DOWNTOWN", 32);
				break;
			case 7:
				StringCopy(&Var1, "PROPERTY_CINEMA_MORNINGWOOD", 32);
				break;
			case 8:
				StringCopy(&Var1, "PROPERTY_GOLF_CLUB", 32);
				break;
			case 9:
				StringCopy(&Var1, "PROPERTY_CAR_SCRAP_YARD", 32);
				break;
			case 10:
				StringCopy(&Var1, "PROPERTY_WEED_SHOP", 32);
				break;
			case 11:
				StringCopy(&Var1, "PROPERTY_BAR_TEQUILALA", 32);
				break;
			case 12:
				StringCopy(&Var1, "PROPERTY_BAR_PITCHERS", 32);
				break;
			case 13:
				StringCopy(&Var1, "PROPERTY_BAR_HEN_HOUSE", 32);
				break;
			case 14:
				StringCopy(&Var1, "PROPERTY_BAR_HOOKIES", 32);
				break;
			case 15:
				StringCopy(&Var1, "PROPERTY_BAR_STRIP_CLUB", 32);
				break;
			default:
				StringCopy(&Var1, "Property", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_439(uParam0[iVar0 /*4*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_439(var* uParam0, char* sParam1)//Position - 0x75373
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 4, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "propertyOwner");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1), "propertyNextTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "bit");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "lastincome");
	MISC::STOP_SAVE_STRUCT();
}

void func_440()//Position - 0x753BA
{
	int iVar0;
	char cVar1[32];
	struct<8> Var2;
	StringCopy(&Var2, "BB_FailsNP", 32);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_24986), 9, "BAIL_BOND_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24986), "Launcher_Bit_Flags");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24986.f_1), "Current_Mission");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24986.f_2), "Launcher_State");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_24986.f_3), "Stored_Time_Stamp");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_24986.f_4), 5, &Var2);
	iVar0 = 0;
	while (iVar0 < Global_113386.f_24986.f_4)
	{
		cVar1 = { Var2 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24986.f_4[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_441()//Position - 0x75478
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_25182), 1252, "BUY_VEC_SAVED");
	func_443(&(Global_113386.f_25182), "OWVEC_IND");
	func_442(&(Global_113386.f_25182.f_313), "OWVEC_COL_M");
	func_442(&(Global_113386.f_25182.f_626), "OWVEC_COL_F");
	func_442(&(Global_113386.f_25182.f_939), "OWVEC_COL_T");
	MISC::STOP_SAVE_STRUCT();
}

void func_442(var* uParam0, char* sParam1)//Position - 0x754E0
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 313, sParam1);
	iVar0 = 0;
	while (iVar0 < 312)
	{
		StringCopy(&cVar1, "BUYVEC_C_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_443(var* uParam0, char* sParam1)//Position - 0x75529
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 313, sParam1);
	iVar0 = 0;
	while (iVar0 < 312)
	{
		StringCopy(&cVar1, "BUYVEC_I_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_444()//Position - 0x75572
{
	struct<8> Var0;
	struct<8> Var1;
	struct<8> Var2;
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_25084), 6, "RP_PLAYER");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084), "RP_PLAYER_x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084.f_1), "RP_PLAYER_y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084.f_2), "RP_PLAYER_z");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084.f_3), "RP_PLAYER_heading");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_4), "RP_PLAYER_Wanted");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_25084.f_5), "RP_PLAYER_Parachute");
	MISC::STOP_SAVE_STRUCT();
	StringCopy(&Var1, "RP_Vehicle", 32);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_25084.f_6), 90, &Var1);
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084.f_6), "RP_Vehicle_x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084.f_6.f_1), "RP_Vehicle_y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084.f_6.f_2), "RP_Vehicle_z");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084.f_6.f_3), "RP_Velocity_x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084.f_6.f_3.f_1), "RP_Velocity_y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084.f_6.f_3.f_2), "RP_Velocity_z");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_25084.f_6.f_6), "RP_Vehicle_heading");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25084.f_6.f_7), "RP_Vehicle_personal");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25084.f_6.f_10), "RP_Vehicle_bVehGen");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25084.f_6.f_8), "RP_Vehicle_bInVehicle");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_25084.f_6.f_9), "RP_Vehicle_bTrackedForImpound");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_25084.f_6.f_11), "RP_Vehicle_character");
	Var2 = { Var1 };
	StringConCat(&Var2, "_Data_", 32);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_25084.f_6.f_12), 78, &Var2);
	Var0 = { Var2 };
	StringConCat(&Var0, "PlateI", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "PlateT", 32);
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_1), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "Colour1", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_5), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "Colour2", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_6), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "ColourEx1", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_7), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "ColourEx2", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_8), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "TyreR", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_62), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "TyreG", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_63), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "TyreB", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_64), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "WindowTint", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_65), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "Flags", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_77), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "CustomR", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_71), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "CustomG", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_72), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "CustomB", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_73), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "NeonR", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_74), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "NeonG", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_75), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "NeonB", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_76), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "LockState", 32);
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_70), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "Model", 32);
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_66), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "Livery", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_67), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "WheelType", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_69), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "Roof", 32);
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_25084.f_6.f_12.f_68), &Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "ModIndex", 32);
	func_446(&(Global_113386.f_25084.f_6.f_12.f_9), Var0);
	Var0 = { Var2 };
	StringConCat(&Var0, "ModVariations", 32);
	func_445(&(Global_113386.f_25084.f_6.f_12.f_59), Var0);
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_STRUCT();
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_25084.f_96), "Mission");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_25084.f_97), "eRCMissionToBlock");
}

void func_445(var* uParam0, char[32] cParam1)//Position - 0x75AEB
{
	char cVar0[32];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 3, &cParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		cVar0 = { cParam1 };
		StringIntConCat(&cVar0, iVar1, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_446(var* uParam0, char[32] cParam1)//Position - 0x75B30
{
	char cVar0[32];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 50, &cParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		cVar0 = { cParam1 };
		StringIntConCat(&cVar0, iVar1, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_447()//Position - 0x75B76
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_24979), 7, "STREET_RACE_SAVED_STRUCT");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_24979), "eStreetRaceToUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24979.f_1), "iStreetRaceUnlocked");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24979.f_2), "iStreetRaceWon");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24979.f_3), "iStreetRaceLeaveArea");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_24979.f_4), "bPhonecallDone");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_24979.f_5), "iSlipstreamHelpCount");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_24979.f_6), "bSpecialAbilityHelp");
	MISC::STOP_SAVE_STRUCT();
}

void func_448()//Position - 0x75C0F
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_21037), 3867, "EMAIL_DATA");
	func_449(&(Global_113386.f_21037));
	MISC::STOP_SAVE_STRUCT();
}

void func_449(var* uParam0)//Position - 0x75C39
{
	int iVar0;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 310, "EMI_AR");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_455(uParam0[iVar0 /*103*/], iVar0, "EMI_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_310), "EMIDGENRT");
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_311), 1422, "EMDT_AR");
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_452(&(uParam0->f_311[iVar0 /*203*/]), iVar0, "EMD_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1733), 1709, "EMS_AR");
	iVar0 = 0;
	while (iVar0 < 122)
	{
		func_451(&(uParam0->f_1733[iVar0 /*14*/]), iVar0, "EMS_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3442), 425, "EMB_AR");
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_450(&(uParam0->f_3442[iVar0 /*53*/]), iVar0, "EMB_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_450(var* uParam0, int iParam1, char* sParam2)//Position - 0x75D43
{
	struct<4> Var0;
	char cVar1[16];
	int iVar2;
	char cVar3[16];
	StringCopy(&Var0, sParam2, 16);
	StringIntConCat(&Var0, iParam1, 16);
	StringConCat(&Var0, "_", 16);
	cVar1 = { Var0 };
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 53, &Var0);
	cVar1 = { Var0 };
	StringConCat(&cVar1, "A", 16);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, &cVar1);
	cVar1 = { Var0 };
	StringConCat(&cVar1, "B", 16);
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1), &cVar1);
	cVar1 = { Var0 };
	StringConCat(&cVar1, "C", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), &cVar1);
	cVar1 = { Var0 };
	StringConCat(&cVar1, "D", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), &cVar1);
	cVar1 = { Var0 };
	StringConCat(&cVar1, "E", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4), &cVar1);
	cVar1 = { Var0 };
	StringConCat(&cVar1, "F", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5), &cVar1);
	cVar1 = { Var0 };
	StringConCat(&cVar1, "G", 16);
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_6), &cVar1);
	cVar1 = { Var0 };
	StringConCat(&cVar1, "H", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), &cVar1);
	cVar1 = { Var0 };
	StringConCat(&cVar1, "J", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_11), 41, &cVar1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		cVar3 = { cVar1 };
		StringConCat(&cVar3, "_", 16);
		StringIntConCat(&cVar3, iVar2, 16);
		MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_11[iVar2 /*4*/]), &cVar3);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	cVar1 = { Var0 };
	StringConCat(&cVar1, "RI", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52), &cVar1);
	MISC::STOP_SAVE_STRUCT();
}

void func_451(var* uParam0, int iParam1, char* sParam2)//Position - 0x75EC3
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	char cVar3[16];
	StringCopy(&Var0, sParam2, 16);
	StringIntConCat(&Var0, iParam1, 16);
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 14, &Var0);
	StringConCat(&Var0, "_", 16);
	Var1 = { Var0 };
	StringConCat(&Var1, "A", 16);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "E", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1), &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "B", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "C", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "Z", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4), 10, &Var1);
	iParam1 = 0;
	iVar2 = 0;
	while (iVar2 < 9)
	{
		cVar3 = { Var1 };
		StringIntConCat(&cVar3, iVar2, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[iVar2]), &cVar3);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_452(var* uParam0, int iParam1, char* sParam2)//Position - 0x75FAB
{
	struct<4> Var0;
	struct<2> Var1;
	int iVar2;
	StringCopy(&Var0, sParam2, 16);
	StringIntConCat(&Var0, iParam1, 16);
	StringConCat(&Var0, "_", 16);
	Var1 = { Var0 };
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 203, &Var0);
	Var1 = { Var0 };
	StringConCat(&Var1, "A", 16);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "B", 16);
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1), &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "C", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "D", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "E", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4), 5, &Var1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		func_454(&(uParam0->f_4[iVar2]), iVar2, &Var1);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	Var1 = { Var0 };
	StringConCat(&Var1, "F", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "G", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_10), 193, &Var1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		func_453(&(uParam0->f_10[iVar2 /*48*/]), iVar2, &Var1);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_453(var* uParam0, int iParam1, char* sParam2)//Position - 0x760EE
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	char cVar3[16];
	StringCopy(&Var0, sParam2, 16);
	StringIntConCat(&Var0, iParam1, 16);
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 48, &Var0);
	StringConCat(&Var0, "_", 16);
	Var1 = { Var0 };
	StringConCat(&Var1, "A", 16);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "B", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1), &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "C", 16);
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_2), &Var1);
	Var1 = { Var0 };
	StringConCat(&Var1, "D", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), &Var1);
	iVar2 = 0;
	Var1 = { Var0 };
	StringConCat(&Var1, "E", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_7), 41, &Var1);
	iVar2 = 0;
	while (iVar2 < 10)
	{
		cVar3 = { Var1 };
		StringIntConCat(&cVar3, iVar2, 16);
		MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_7[iVar2 /*4*/]), &cVar3);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_454(var* uParam0, int iParam1, char* sParam2)//Position - 0x761D6
{
	char cVar0[16];
	StringCopy(&cVar0, sParam2, 16);
	StringIntConCat(&cVar0, iParam1, 16);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, &cVar0);
}

void func_455(var* uParam0, int iParam1, char* sParam2)//Position - 0x761F2
{
	struct<4> Var0;
	int iVar1;
	struct<2> Var2;
	struct<4> Var3;
	StringCopy(&Var0, sParam2, 16);
	StringIntConCat(&Var0, iParam1, 16);
	StringConCat(&Var0, "_", 16);
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 103, &Var0);
	iVar1 = 0;
	Var3 = { Var0 };
	StringConCat(&Var3, "A", 16);
	MISC::REGISTER_INT_TO_SAVE(uParam0, &Var3);
	Var3 = { Var0 };
	StringConCat(&Var3, "B", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1), 17, &Var3);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		Var2 = { Var3 };
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "_", 16);
		func_457(&(uParam0->f_1[iVar1]), iVar1, &Var2);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar1 = 0;
	Var3 = { Var0 };
	StringConCat(&Var3, "C", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_18), 17, &Var3);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		Var2 = { Var3 };
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "_", 16);
		func_457(&(uParam0->f_18[iVar1]), iVar1, &Var2);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar1 = 0;
	Var3 = { Var0 };
	StringConCat(&Var3, "D", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_35), 17, &Var3);
	StringConCat(&Var3, "_", 16);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		Var2 = { Var3 };
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "_", 16);
		func_456(&(uParam0->f_35[iVar1]), iVar1, &Var2);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar1 = 0;
	Var3 = { Var0 };
	StringConCat(&Var3, "E", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_52), 17, &Var3);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		Var2 = { Var3 };
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "_", 16);
		func_457(&(uParam0->f_52[iVar1]), iVar1, &Var2);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar1 = 0;
	Var3 = { Var0 };
	StringConCat(&Var3, "F", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_69), 17, &Var3);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		Var2 = { Var3 };
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "_", 16);
		func_456(&(uParam0->f_69[iVar1]), iVar1, &Var2);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar1 = 0;
	Var3 = { Var0 };
	StringConCat(&Var3, "G", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_86), 17, &Var3);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		Var2 = { Var3 };
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "_", 16);
		func_456(&(uParam0->f_86[iVar1]), iVar1, &Var2);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_456(var* uParam0, int iParam1, char* sParam2)//Position - 0x76473
{
	char cVar0[16];
	StringCopy(&cVar0, sParam2, 16);
	StringIntConCat(&cVar0, iParam1, 16);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, &cVar0);
}

void func_457(var* uParam0, int iParam1, char* sParam2)//Position - 0x7648F
{
	char cVar0[16];
	StringCopy(&cVar0, sParam2, 16);
	StringIntConCat(&cVar0, iParam1, 16);
	MISC::REGISTER_INT_TO_SAVE(uParam0, &cVar0);
}

void func_458()//Position - 0x764AB
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_20117), 1, "SPECIALPED_SAVED_STRUCT");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_20117), "SPEC_PedsKilled");
	MISC::STOP_SAVE_STRUCT();
}

void func_459()//Position - 0x764D8
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_20035), 82, "SHOPROBBERIES_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_20035.f_41), "ShopRob_NumOfRobsSinceCopAmbush");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_20035.f_20), "ShopRob_GenericShopData");
	func_463(&(Global_113386.f_20035), "ShopRob_NumTimesRobbed_Array");
	func_462(&(Global_113386.f_20035.f_21), "ShopRob_TimeLastRobbed_Array");
	func_461(&(Global_113386.f_20035.f_42), "ShopRob_TimeLastPlayerRobbed_Array");
	func_460(&(Global_113386.f_20035.f_62), "ShopRob_LastPlayerToRobShop_Array");
	MISC::STOP_SAVE_STRUCT();
}

void func_460(var* uParam0, char* sParam1)//Position - 0x76560
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 20, sParam1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		StringCopy(&cVar1, "ShopRob_LastPlayerToRobShop", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_461(var* uParam0, char* sParam1)//Position - 0x765A4
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 20, sParam1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		StringCopy(&cVar1, "ShopRob_TimeLastPlayerRobbed", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_462(var* uParam0, char* sParam1)//Position - 0x765E8
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 20, sParam1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		StringCopy(&cVar1, "ShopRob_TimeLastRobbed", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_463(var* uParam0, char* sParam1)//Position - 0x7662C
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 20, sParam1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		StringCopy(&cVar1, "ShopRob_NumTimesRobbed", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_464()//Position - 0x76670
{
	func_465(&(Global_113386.f_19043), "SPTT_DATA_SAVED_STRUCT");
}

void func_465(var* uParam0, char* sParam1)//Position - 0x76688
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 54, sParam1);
	func_469(&(uParam0->f_6), "SPTT_TIMES");
	func_468(uParam0, "SPTT_RANKS");
	func_466(&(uParam0->f_12), "SPTT_COURSE_DATA");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_53), "SPTT_iGeneralFlags");
	MISC::STOP_SAVE_STRUCT();
}

void func_466(var* uParam0, char* sParam1)//Position - 0x766D0
{
	struct<8> Var0;
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 41, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&Var0, sParam1, 64);
		StringConCat(&Var0, "_SPTTSTRUCT_", 64);
		StringIntConCat(&Var0, iVar1, 64);
		func_467(uParam0[iVar1 /*8*/], &Var0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_467(var* uParam0, char* sParam1)//Position - 0x7671B
{
	char cVar0[64];
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 8, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_Name", 64);
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_Status", 64);
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_Goals", 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_PreReq", 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_MedalScore", 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), &cVar0);
	MISC::STOP_SAVE_STRUCT();
}

void func_468(var* uParam0, char* sParam1)//Position - 0x767AC
{
	char cVar0[64];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestRank_", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_469(var* uParam0, char* sParam1)//Position - 0x767F6
{
	char cVar0[64];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestTime_", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_470()//Position - 0x76840
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_20011), 10, "TRIATHLON_SAVED_STRUCT");
	func_472(&(Global_113386.f_20011.f_4), "TRI_TIMES");
	func_471(&(Global_113386.f_20011), "TRI_RANKS");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_20011.f_8), "TRIATHLON_eCurrentUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_20011.f_9), "TRIATHLON_iBitFlags");
	MISC::STOP_SAVE_STRUCT();
}

void func_471(var* uParam0, char* sParam1)//Position - 0x768A4
{
	char cVar0[64];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestRank_", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_472(var* uParam0, char* sParam1)//Position - 0x768EE
{
	char cVar0[64];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestTime_", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_473()//Position - 0x76938
{
	func_474(&(Global_113386.f_20021), "TENNIS_SAVE_DATA");
}

void func_474(var* uParam0, char* sParam1)//Position - 0x76950
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 14, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "TENNIS_iTotalAces");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "TENNIS_iTotalAced");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "TENNIS_iTotalPoints");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "TENNIS_iHighestDeuce");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "TENNIS_iGamesWon");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "TENNIS_iGamesLost");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "TENNIS_iSetsWon");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "TENNIS_iSetsLost");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "TENNIS_iMatchesWon");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "TENNIS_iMatchesLost");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "TENNIS_iTotalOOB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "TENNIS_iTotalFaults");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "TENNIS_iSwingsForStrength");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_13), "TENNIS_iSavedFlags");
	MISC::STOP_SAVE_STRUCT();
}

void func_475()//Position - 0x76A1A
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_19147), 814, "SHOOTING_RANGE_SAVED_ARRAY");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == 0)
		{
			StringCopy(&cVar1, "RANGE_SAVED_MICHAEL", 32);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&cVar1, "RANGE_SAVED_FRANKLIN", 32);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&cVar1, "RANGE_SAVED_TREVOR", 32);
		}
		MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_19147[iVar0 /*271*/]), 271, &cVar1);
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19147[iVar0 /*271*/]), "SRANGE_iCategoryChallengeLockStatus");
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19147[iVar0 /*271*/].f_1), "SRANGE_iWeaponsLockStatus");
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19147[iVar0 /*271*/].f_2), "SRANGE_iWeaponUsedStatus");
		func_476(&(Global_113386.f_19147[iVar0 /*271*/].f_3), "SRANGE_ROUND_ARRAY");
		MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_19147[iVar0 /*271*/].f_268), "SRANGE_bHasSeenTutorial");
		MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_19147[iVar0 /*271*/].f_269), "SRANGE_bClearedAll");
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19147[iVar0 /*271*/].f_270), "SRANGE_iBoolBits");
		MISC::STOP_SAVE_STRUCT();
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_476(var* uParam0, char* sParam1)//Position - 0x76B3C
{
	int iVar0;
	struct<8> Var1;
	char cVar2[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 265, sParam1);
	iVar0 = 0;
	while (iVar0 < 22)
	{
		StringCopy(&Var1, "SRANGE_ROUND", 32);
		StringIntConCat(&Var1, iVar0, 32);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_Z1HITS", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_8), &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_Z2HITS", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_9), &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_Z3HITS", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_10), &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_Z4HITS", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_11), &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_LASTSCORE", 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0 /*12*/], &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_UNLOCKED", 32);
		MISC::REGISTER_BOOL_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_1), &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_PASSED", 32);
		MISC::REGISTER_BOOL_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_2), &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_MEDAL", 32);
		MISC::REGISTER_ENUM_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_3), &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_WEAPTYPE", 32);
		MISC::REGISTER_ENUM_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_4), &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_FIRED", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_5), &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_HITS", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_6), &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "_ACCURACY", 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_7), &cVar2);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_477()//Position - 0x76D02
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_18979), 37, "GOLF_SAVED_STRUCT");
	func_479(&(Global_113386.f_18979), "GOLF_COURSE_");
	func_478(&(Global_113386.f_18979.f_29), "GOLF_iNumRoundsWithCharacter_");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18979.f_22), "GOLF_iNumHolesPlayed");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18979.f_20), "GOLF_iNumPuttsTotal");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18979.f_21), "GOLF_iNumFairwayDrivesTotal");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_18979.f_23), "GOLF_eUnlockedBuddies");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_18979.f_24), "GOLF_eGolfSavedFlags");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18979.f_28), "GOLF_iBestRound");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18979.f_25), "GOLF_iNumRoundsPlayedSP");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18979.f_26), "GOLF_iNumRoundsPlayedMP");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18979.f_27), "GOLF_iNumGolfWins");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_18979.f_33), "GOLF_fLongestDrive");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_18979.f_34), "GOLF_fLongestPutt");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_18979.f_35), "GOLF_fAveragePutts");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_18979.f_36), "GOLF_fAverageFairwayDrives");
	MISC::STOP_SAVE_STRUCT();
}

void func_478(var* uParam0, char* sParam1)//Position - 0x76E2C
{
	int iVar0;
	char cVar1[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&cVar1, sParam1, 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_479(var* uParam0, char* sParam1)//Position - 0x76E6D
{
	int iVar0;
	struct<8> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 20, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&Var1, sParam1, 64);
		StringIntConCat(&Var1, iVar0, 64);
		StringConCat(&Var1, "_", 64);
		func_480(uParam0[iVar0 /*19*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_480(var* uParam0, char* sParam1)//Position - 0x76EB8
{
	int iVar0;
	struct<16> Var1;
	char cVar2[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 19, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&Var1, sParam1, 64);
		StringIntConCat(&Var1, iVar0, 64);
		StringConCat(&Var1, "_", 64);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "fLongestDriveHole", 64);
		MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar0 /*2*/], &cVar2);
		cVar2 = { Var1 };
		StringConCat(&cVar2, "fLongestPuttHole", 64);
		MISC::REGISTER_FLOAT_TO_SAVE(&((uParam0[iVar0 /*2*/])->f_1), &cVar2);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_481()//Position - 0x76F37
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_19016), 27, "OFFROAD_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19016), "OFFROAD_iBitflags");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_19016.f_1), "OFFROAD_eCurrentRace");
	func_483(&(Global_113386.f_19016.f_10), "OFFROAD_TIMES");
	func_482(&(Global_113386.f_19016.f_2), "OFFROAD_RANKS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19016.f_18), "OFFROAD_iRacePlaceEarned");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_19016.f_19), 8, "OFFROAD_iBestPlaces");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19016.f_19[0]), "OFFROAD_Race5Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19016.f_19[1]), "OFFROAD_Race8Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19016.f_19[3]), "OFFROAD_Race9Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19016.f_19[4]), "OFFROAD_Race10Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19016.f_19[5]), "OFFROAD_Race11Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19016.f_19[2]), "OFFROAD_Race12Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19016.f_19[6]), "OFFROAD_Race13Best");
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_482(var* uParam0, char* sParam1)//Position - 0x77058
{
	char cVar0[64];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 8, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestRank_", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_483(var* uParam0, char* sParam1)//Position - 0x770A3
{
	char cVar0[64];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 8, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestTime_", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_484()//Position - 0x770EE
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_19961), 2, "SHRINK_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19961), "SHRINK_iByte0");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19961.f_1), "SHRINK_iByte1");
	MISC::STOP_SAVE_STRUCT();
}

void func_485()//Position - 0x7712D
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_19097), 50, "TAXI_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19097), "TAXI_iGenData");
	func_488(&(Global_113386.f_19097.f_1), "TAXI_MISSION_ARRAY");
	func_487(&(Global_113386.f_19097.f_22), "TAXI_STAT_ARRAY");
	func_486(&(Global_113386.f_19097.f_39), "TAXI_RUNS_ARRAY");
	MISC::STOP_SAVE_STRUCT();
}

void func_486(var* uParam0, char* sParam1)//Position - 0x77191
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 11, sParam1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar1, "TAXI_RUNS", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_487(var* uParam0, char* sParam1)//Position - 0x771D8
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 17, sParam1);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		StringCopy(&cVar1, "TAXI_STAT", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_488(var* uParam0, char* sParam1)//Position - 0x7721F
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 21, sParam1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar1, "TAXI_MISSION_PASSED", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0 /*2*/], &cVar1);
		StringCopy(&cVar1, "TAXI_MISSION_FAILED", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_BOOL_TO_SAVE(&((uParam0[iVar0 /*2*/])->f_1), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_489()//Position - 0x77283
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_19983), 28, "TRAFFICKING_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19983), "TRAFFICKING_iBools");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19983.f_1), "TRAFFICKING_iGndRank");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19983.f_2), "TRAFFICKING_SAVED_iAirRank");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19983.f_3), "TRAFFICKING_iLastPairing");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19983.f_4), "TRAFFICKING_iNumRepeatComplete");
	func_490(&(Global_113386.f_19983.f_5), "TRAFFICKING_TIME_COLLECTED_ARRAY");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_19983.f_11), "TRAFFICKING_todNextAir");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_19983.f_12), "TRAFFICKING_todNextGnd");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_19983.f_13), "TRAFFICKING_GndBlipOn");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_19983.f_14), "TRAFFICKING_AirBlipOn");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_19983.f_15), "TRAFFICKING_RanIntro");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_19983.f_16), "TRAFFICKING_bBomb");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_19983.f_17), "TRAFFICKING_bTrain");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_19983.f_18), "TRAFFICKING_bConvoy");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_19983.f_19), "TRAFFICKING_bTimed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_19983.f_20), "TRAFFICKING_bLowAlt");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_19983.f_21), 5, "TRAFFICKING_iDropLocations");
	iVar0 = 0;
	while (iVar0 < Global_113386.f_19983.f_21)
	{
		StringCopy(&cVar1, "TRAFFICKING_iDropLocations", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19983.f_21[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19983.f_26), "TRAFFICKING_iNumDropLocations");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_19983.f_27), "TRAFFICKING_gangTypes");
	MISC::STOP_SAVE_STRUCT();
}

void func_490(var* uParam0, char* sParam1)//Position - 0x77436
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "TRAFFICKING_iTimePkgCollected_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_491()//Position - 0x7747B
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_18970), 9, "DARTS_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18970), "DARTS_iNumBullseyes");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18970.f_1), "DARTS_iNumOneEighties");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18970.f_2), "DARTS_iDartGamesWon");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18970.f_3), "DARTS_iDartGamesLoss");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18970.f_4), "DARTS_iDartsThrown");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18970.f_5), "DARTS_iTotalDartGames");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18970.f_6), "DARTS_iDartTimePlayed");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_18970.f_7), "DARTS_fWinPct");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_18970.f_8), "DARTS_fAvgDartsPerMatch");
	MISC::STOP_SAVE_STRUCT();
}

void func_492()//Position - 0x77539
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_18967), 3, "BASEJUMP_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18967), "BJ_iLaunchRank");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18967.f_1), "BJ_iCompletedFlags");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_18967.f_2), "BJ_fLongestSkydive");
	MISC::STOP_SAVE_STRUCT();
}

void func_493()//Position - 0x7758A
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_19963), 10, "ASSASSIN_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19963), "ASSASSIN_iCurRank");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19963.f_1), "ASSASSIN_iGenData");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19963.f_2), "ASSASSIN_iBools");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19963.f_3), "ASSASSIN_iAttemptsOnCur");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_19963.f_4), "ASSASSIN_TOD_iTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_19963.f_5), "ASSASSIN_HotelMissionTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_19963.f_6), "ASSASSIN_MultiMissionTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_19963.f_7), "ASSASSIN_ViceMissionTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_19963.f_8), "ASSASSIN_BusMissionTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_19963.f_9), "ASSASSIN_ConstructionMissionTime");
	MISC::STOP_SAVE_STRUCT();
}

void func_494()//Position - 0x7765A
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_19973), 10, "TOWING_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19973), "TOWING_iRank");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19973.f_1), "TOWING_iBools");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_19973.f_2), "TOWING_eLastNode");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19973.f_3), "TOWING_iJobsCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19973.f_4), "TOWING_iAbandonCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19973.f_5), "TOWING_iTrainCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19973.f_6), "TOWING_iHandiCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19973.f_7), "TOWING_iBreakDownCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19973.f_9), "TOWING_iLastNodeIndex");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_19973.f_8), "TOWING_iAccidentCompleted");
	MISC::STOP_SAVE_STRUCT();
}

void func_495()//Position - 0x7772A
{
	func_496(&(Global_113386.f_20564), "FINANCE_SAVED_ARRAY");
}

void func_496(var* uParam0, char* sParam1)//Position - 0x77742
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var2;
	int iVar3;
	char cVar4[16];
	struct<4> Var5;
	struct<4> Var6;
	char cVar7[16];
	char cVar8[16];
	char cVar9[16];
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 473, sParam1);
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 11, "M_S_CI_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_457(uParam0[iVar0], iVar0, "M_CI_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_11), 11, "M_S_I_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_497(&(uParam0->f_11[iVar0]), iVar0, "M_I_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_22), 11, "M_S_OOT_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_457(&(uParam0->f_22[iVar0]), iVar0, "M_OOT_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_33), 11, "F_S_CI_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_457(&(uParam0->f_33[iVar0]), iVar0, "F_CI_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_44), 11, "F_S_I_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_497(&(uParam0->f_44[iVar0]), iVar0, "F_I_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_55), 11, "F_S_OOT_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_457(&(uParam0->f_55[iVar0]), iVar0, "F_OOT_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_66), 11, "T_S_CI_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_457(&(uParam0->f_66[iVar0]), iVar0, "T_CI_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_77), 11, "T_S_I_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_497(&(uParam0->f_77[iVar0]), iVar0, "T_I_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_88), 11, "T_S_OOT_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_457(&(uParam0->f_88[iVar0]), iVar0, "T_OOT_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_99), "STOCK_TUT");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_100), "ATM_TUT");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_101), "STK_PRC_GEN");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_102), "STK_PRC_SSK");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_103), 43, "SPSPD_AR");
	iVar0 = 0;
	while (iVar0 < 42)
	{
		func_497(&(uParam0->f_103[iVar0]), iVar0, "SPSPD_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_146), 43, "SPSMAD_AR");
	iVar0 = 0;
	while (iVar0 < 42)
	{
		func_497(&(uParam0->f_146[iVar0]), iVar0, "SPSMAD_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_189), 43, "SPSMID_AR");
	iVar0 = 0;
	while (iVar0 < 42)
	{
		func_497(&(uParam0->f_189[iVar0]), iVar0, "SPSMID_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_232), "SCBNK_INI");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_233), 208, "PLR_ACNT_LGS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&Var1, "BNKST_", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_233[iVar0 /*69*/]), 69, &Var1);
		Var2 = { Var1 };
		StringConCat(&Var2, "ac", 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/]), &Var2);
		Var2 = { Var1 };
		StringConCat(&Var2, "lp", 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_1), &Var2);
		Var2 = { Var1 };
		StringConCat(&Var2, "l", 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_233[iVar0 /*69*/].f_2), 67, &Var2);
		StringConCat(&Var2, "_", 16);
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < 11)
		{
			cVar4 = { Var2 };
			StringIntConCat(&cVar4, iVar3, 16);
			MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/]), 6, &cVar4);
			cVar4 = { Var2 };
			StringConCat(&cVar4, "a", 16);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/]), &cVar4);
			cVar4 = { Var2 };
			StringConCat(&cVar4, "b", 16);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/].f_1), &cVar4);
			cVar4 = { Var2 };
			StringConCat(&cVar4, "c", 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/].f_2), &cVar4);
			cVar4 = { Var2 };
			StringConCat(&cVar4, "d", 16);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/].f_3), &cVar4);
			cVar4 = { Var2 };
			StringConCat(&cVar4, "e", 16);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/].f_4), &cVar4);
			cVar4 = { Var2 };
			StringConCat(&cVar4, "f", 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/].f_5), &cVar4);
			MISC::STOP_SAVE_STRUCT();
			iVar3++;
		}
		MISC::STOP_SAVE_ARRAY();
		MISC::STOP_SAVE_STRUCT();
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_441), "Profloss");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_442), "FILTR_TOT");
	StringCopy(&Var5, "FILTR_", 16);
	Var6 = { Var5 };
	StringConCat(&Var6, "ff", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_443), 9, &Var6);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		cVar7 = { Var6 };
		StringIntConCat(&cVar7, iVar0, 16);
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_443[iVar0]), &cVar7);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	Var6 = { Var5 };
	StringConCat(&Var6, "fdr", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_452), 9, &Var6);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		cVar8 = { Var6 };
		StringIntConCat(&cVar8, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_452[iVar0]), &cVar8);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	Var6 = { Var5 };
	StringConCat(&Var6, "ffl", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_461), 9, &Var6);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		cVar9 = { Var6 };
		StringIntConCat(&cVar9, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_461[iVar0]), &cVar9);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_470), "SCBNK_WEBTU");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_471), "FIN_COUPONS");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_472), "FIN_NEWSENM");
	MISC::STOP_SAVE_STRUCT();
}

void func_497(var* uParam0, int iParam1, char* sParam2)//Position - 0x77D7F
{
	char cVar0[16];
	StringCopy(&cVar0, sParam2, 16);
	StringIntConCat(&cVar0, iParam1, 16);
	MISC::REGISTER_FLOAT_TO_SAVE(uParam0, &cVar0);
}

void func_498()//Position - 0x77D9B
{
	func_505(&(Global_113386.f_14051), "CELLPHONE_SETTINGS_SAVED_ARRAY");
	func_502(&(Global_113386.f_14141), "TEXT_MESSAGES_SAVED_ARRAY");
	func_499(&(Global_113386.f_17782), "GALLERY_IMAGES_SAVED_ARRAY");
}

void func_499(var* uParam0, char* sParam1)//Position - 0x77DD3
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 321, sParam1);
	func_500(uParam0, "struct_g_GalleryImage");
	MISC::STOP_SAVE_STRUCT();
}

void func_500(var* uParam0, char* sParam1)//Position - 0x77DF5
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 321, sParam1);
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "GalleryImgIndex", 24);
		StringConCat(&Var1, "_", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_501(uParam0[iVar0 /*32*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_501(var* uParam0, char* sParam1)//Position - 0x77E43
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 32, sParam1);
	MISC::REGISTER_TEXT_LABEL_63_TO_SAVE(uParam0, "Thumb_label");
	MISC::REGISTER_TEXT_LABEL_63_TO_SAVE(&(uParam0->f_16), "Photo_label");
	MISC::STOP_SAVE_STRUCT();
}

void func_502(var* uParam0, char* sParam1)//Position - 0x77E71
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3641, sParam1);
	func_503(uParam0, "struct_g_TextMessage");
	MISC::STOP_SAVE_STRUCT();
}

void func_503(var* uParam0, char* sParam1)//Position - 0x77E93
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 3641, sParam1);
	while (iVar0 < 35)
	{
		StringCopy(&Var1, "TextMsgIndex", 24);
		StringConCat(&Var1, "_", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_504(uParam0[iVar0 /*104*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_504(var* uParam0, char* sParam1)//Position - 0x77EE1
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 104, sParam1);
	MISC::REGISTER_TEXT_LABEL_63_TO_SAVE(uParam0, "GXTlabel");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "FeedId_Int");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_17), "Sender");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "SentSecs");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18.f_1), "SentMins");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18.f_2), "SentHours");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18.f_3), "SentDay");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18.f_4), "SentMonth");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18.f_5), "SentYear");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_24), "LockStatus");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_25), "IsCritical");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_26), "AutoUnlock");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_27), "DelMode");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_28), "ReadStatus");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_29), "ReplyStatus");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_30), "CallSenderStatus");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_31), "BarterStatus");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_32), "SpecialComps");
	MISC::REGISTER_TEXT_LABEL_63_TO_SAVE(&(uParam0->f_33), "StringComp");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_49), "NumberComp");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_66), "NumberofAdditionalStrings");
	MISC::REGISTER_TEXT_LABEL_63_TO_SAVE(&(uParam0->f_67), "SecondStringComp");
	MISC::REGISTER_TEXT_LABEL_63_TO_SAVE(&(uParam0->f_83), "ThirdStringComp");
	MISC::REGISTER_TEXT_LABEL_63_TO_SAVE(&(uParam0->f_50), "SenderStringComp");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_99), 5, "PhonePresenceArray");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_99[0]), "MichaelPres");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_99[1]), "FrankPres");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_99[2]), "TrevPres");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_99[3]), "MP_Pres");
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_505(var* uParam0, char* sParam1)//Position - 0x7808B
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 90, sParam1);
	func_506(uParam0, "struct_g_CellphoneSettings");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_14051.f_81), "Focus_Lock_Help_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_14051.f_82), "Sleep_Warning_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_14051.f_83), "SleepIcon_Help_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_14051.f_84), "Sleep_Reminder_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_14051.f_85), "QuickSave_Help_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_14051.f_86), "TranslucentIcon_Help_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_14051.f_87), "MPTranslucentIcon_Help_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_14051.f_88), "Is_Sniper_App_Available");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_14051.f_89), "Is_Trackify_App_Available");
	MISC::STOP_SAVE_STRUCT();
}

void func_506(var* uParam0, char* sParam1)//Position - 0x7814E
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 81, sParam1);
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "Michael_Char_0_CS", 24);
				break;
			case 1:
				StringCopy(&Var1, "Franklin_Char_1_CS", 24);
				break;
			case 2:
				StringCopy(&Var1, "Trevor_Char_2_CS", 24);
				break;
			case 3:
				StringCopy(&Var1, "MP_Char_3_CS", 24);
				break;
		}
		func_507(uParam0[iVar0 /*20*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_507(var* uParam0, char* sParam1)//Position - 0x781D1
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 20, sParam1);
	MISC::REGISTER_TEXT_LABEL_23_TO_SAVE(uParam0, "Movie_Name_For_This_Player");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "OS_For_This_Player");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "Theme_For_This_Player");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "Vibrate_For_This_Player");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "Provider_For_This_Player");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "Wallpaper_For_This_Player");
	MISC::REGISTER_TEXT_LABEL_23_TO_SAVE(&(uParam0->f_11), "Ringtone_For_This_Player");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_17), "LastMessageNeedsRead");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "LaunchToTextMessageScreen");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_19), "ThisPlayerOnScheduledActivity");
	MISC::STOP_SAVE_STRUCT();
}

void func_508()//Position - 0x78267
{
	func_509(&(Global_113386.f_10194), "COMP_PERCENT_SAVED_ARRAY");
}

void func_509(var* uParam0, char* sParam1)//Position - 0x7827F
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3857, sParam1);
	func_510(uParam0, "struct_g_CompletionPercentage");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_3853), "Game_Complete_Percentage");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3854), "Has_100_Percent_Been_Reached");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3855), "SP_Event_F_EntryTrackerBitset");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3856), "SP_Event_F_EntryTrackerBS_2");
	MISC::STOP_SAVE_STRUCT();
}

void func_510(var* uParam0, char* sParam1)//Position - 0x782D9
{
	int iVar0;
	struct<4> Var1;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 3853, sParam1);
	while (iVar0 < 321)
	{
		MemCopy(&Var1, {Global_113386.f_10194[iVar0 /*12*/]}, 8);
		StringConCat(&Var1, "_Saved", 32);
		func_511(uParam0[iVar0 /*12*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_511(var* uParam0, char* sParam1)//Position - 0x7832C
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 12, sParam1);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5), "Marked_as_Completed");
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(uParam0, "CompPercentage_Label");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_4), "CompPercentage_Weighting");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_6), "CompPercentage_Grouping");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_7), "CompPercentage_ChoiceMission");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "CompPercentage_EnumAndVarData");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_9), "CompPercentage_SC_Cluster");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_10), "Runtime_defined_location_X");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_11), "Runtime_defined_location_Y");
	MISC::STOP_SAVE_STRUCT();
}

void func_512()//Position - 0x783B5
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_20410), 154, "FLOW_HELP_STRUCT");
	func_515(&(Global_113386.f_20410), "FLOW_HELP_STRUCT_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_20410.f_145), "iFlowHelpCount");
	func_514(&(Global_113386.f_20410.f_146), "FLOW_HELP_PRIORITY_ARRAY");
	func_513(&(Global_113386.f_20410.f_150), "HELP_DISPLAYED_BITSET_ARRAY");
	MISC::STOP_SAVE_STRUCT();
}

void func_513(var* uParam0, char* sParam1)//Position - 0x78419
{
	char cVar0[32];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&cVar0, "HELP_DISPLAYED_BITSET_", 32);
		StringIntConCat(&cVar0, iVar1, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_514(var* uParam0, char* sParam1)//Position - 0x7845D
{
	char cVar0[32];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&cVar0, "FLOW_HELP_PRIORITY_", 32);
		StringIntConCat(&cVar0, iVar1, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_515(var* uParam0, char* sParam1)//Position - 0x784A1
{
	struct<4> Var0;
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 145, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&Var0, "FLOW_HELP_STRUCT_", 32);
		StringIntConCat(&Var0, iVar1, 32);
		func_516(uParam0[iVar1 /*16*/], &Var0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_516(var* uParam0, char* sParam1)//Position - 0x784E6
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 16, sParam1);
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(uParam0, "tHelpText");
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(&(uParam0->f_4), "tAddText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iStartTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iDuration");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iExpirationTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iCharBitset");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12), "ePriority");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_13), "eCodeIDStart");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_14), "eCodeIDDisplayed");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iSettingsFlags");
	MISC::STOP_SAVE_STRUCT();
}

void func_517()//Position - 0x7857C
{
	func_518(&(Global_113386.f_32749), "VEHICLE_GEN_SAVED_DATA_STRUCT");
}

void func_518(var* uParam0, char* sParam1)//Position - 0x78594
{
	int iVar0;
	char cVar1[24];
	int iVar2;
	int iVar3;
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 5835, sParam1);
	func_521(uParam0, "VEHICLE_GEN_PROPERTIES");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_69), 1795, "DYANMIC_DATA");
	iVar0 = 0;
	while (iVar0 < 23)
	{
		StringCopy(&cVar1, "DYANMIC_DATA", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		func_520(&(uParam0->f_69[iVar0 /*78*/]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4803), 235, "HEIST_VEHS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4803)
	{
		StringCopy(&cVar1, "HEIST_VEHS", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		func_520(&(uParam0->f_4803[iVar0 /*78*/]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5038), 472, "IMPOUND_VEHS");
	iVar2 = 0;
	while (iVar2 < 3)
	{
		StringCopy(&cVar1, "IMPOUND_VEHS", 24);
		StringConCat(&cVar1, "_", 24);
		StringIntConCat(&cVar1, iVar2, 24);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5038[iVar2 /*157*/]), 157, &cVar1);
		iVar0 = 0;
		while (iVar0 < __LIB_0__::func_404(&(uParam0->f_5038[iVar2 /*157*/])))
		{
			StringCopy(&cVar1, "IMPOUND_VEHS", 24);
			StringConCat(&cVar1, "_", 24);
			StringIntConCat(&cVar1, iVar2, 24);
			StringConCat(&cVar1, "_", 24);
			StringIntConCat(&cVar1, iVar0, 24);
			func_520(&(uParam0->f_5038[iVar2 /*157*/][iVar0 /*78*/]), &cVar1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	func_520(&(uParam0->f_5510), "NEXT_IMPOUND");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5588), "IMPOUND_TRACK");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5589), "IMPOUND_SWITCH");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_5590), "IMPOUND_CHAR");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_5591), "VEHGEN_CHAR");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5592), 4, "IMPOUND_SLOTS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_5592)
	{
		StringCopy(&cVar1, "IMPOUND_SLOTS", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5592[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5596), 4, "IMPOUND_HELP");
	iVar0 = 0;
	while (iVar0 < uParam0->f_5596)
	{
		StringCopy(&cVar1, "IMPOUND_HELP", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5596[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1864), 70, "DYNAMIC_COORDS");
	iVar0 = 0;
	while (iVar0 < 23)
	{
		StringCopy(&cVar1, "DYNAMIC_COORDS", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		StringConCat(&cVar1, "_X", 24);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1864[iVar0 /*3*/]), &cVar1);
		StringCopy(&cVar1, "DYNAMIC_COORDS", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		StringConCat(&cVar1, "_Y", 24);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1864[iVar0 /*3*/].f_1), &cVar1);
		StringCopy(&cVar1, "DYNAMIC_COORDS", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		StringConCat(&cVar1, "_Z", 24);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1864[iVar0 /*3*/].f_2), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1934), 24, "DYANMIC_HEAD");
	iVar0 = 0;
	while (iVar0 < 23)
	{
		StringCopy(&cVar1, "DYNAMIC_HEAD", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1934[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1958), 24, "PLAYER_VEH");
	iVar0 = 0;
	while (iVar0 < 23)
	{
		StringCopy(&cVar1, "PLAYER_VEH", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1958[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1982), 2818, "WEB_VEHICLES");
	iVar3 = 0;
	while (iVar3 < uParam0->f_1982)
	{
		StringCopy(&cVar1, "WEB_VEH_", 24);
		StringIntConCat(&cVar1, iVar3, 24);
		MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_1982[iVar3 /*939*/]), 939, &cVar1);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1982[iVar3 /*939*/]), 313, "SITE_ID");
		iVar0 = 0;
		while (iVar0 < 312)
		{
			StringCopy(&cVar1, "SITE_ID_", 24);
			StringIntConCat(&cVar1, iVar0, 24);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1982[iVar3 /*939*/][iVar0]), &cVar1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1982[iVar3 /*939*/].f_313), 313, "VEH_GEN");
		iVar0 = 0;
		while (iVar0 < 312)
		{
			StringCopy(&cVar1, "VEH_GEN_", 24);
			StringIntConCat(&cVar1, iVar0, 24);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1982[iVar3 /*939*/].f_313[iVar0]), &cVar1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1982[iVar3 /*939*/].f_626), 313, "EMAIL_DATE");
		iVar0 = 0;
		while (iVar0 < 312)
		{
			StringCopy(&cVar1, "EMAIL_DATE_", 24);
			StringIntConCat(&cVar1, iVar0, 24);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1982[iVar3 /*939*/].f_626[iVar0]), &cVar1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		MISC::STOP_SAVE_STRUCT();
		iVar3++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5600), 235, "SWITCH_IMP");
	iVar0 = 0;
	while (iVar0 < uParam0->f_5600)
	{
		StringCopy(&cVar1, "SWITCH_IMP", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		func_520(&(uParam0->f_5600[iVar0 /*78*/]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4802), "VEHDATA_SETUP");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4801), "MISSVEH_TIME");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4800), "GARAGE_INTRO");
	MISC::STOP_SAVE_STRUCT();
}

void func_520(var* uParam0, char* sParam1)//Position - 0x78AB9
{
	int iVar0;
	char cVar1[16];
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 78, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "iPlateIndex");
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_1), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iColour1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iColour2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iColourExtra1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iColourExtra2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_62), "iTyreR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_63), "iTyreG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_64), "iTyreB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_65), "iWindowTintColour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_67), "iLivery");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_69), "iWheelType");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_68), "eRoofState");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_77), "iFlags");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_70), "eLockState");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_71), "iCustomR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72), "iCustomG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_73), "iCustomB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_74), "iNeonR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_75), "iNeonG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_76), "iNeonB");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_66), "eModel");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_9), 50, "VEH_MOD_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_59), 3, "VEH_MOD_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_59[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_521(var* uParam0, char* sParam1)//Position - 0x78C6F
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 69, sParam1);
	iVar0 = 0;
	while (iVar0 < 68)
	{
		StringCopy(&cVar1, "VEHGEN_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_522()//Position - 0x78CB6
{
	func_523(&(Global_113386.f_7261), "BUILDING_SAVED_DATA_STRUCT");
}

void func_523(var* uParam0, char* sParam1)//Position - 0x78CCE
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 427, sParam1);
	func_525(uParam0, "DOOR_STATES");
	func_524(&(uParam0->f_227), "BUILDING_STATES");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_426), "BUILDING_DEFAULT_DATA_SET");
	MISC::STOP_SAVE_STRUCT();
}

void func_524(var* uParam0, char* sParam1)//Position - 0x78D0B
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 199, sParam1);
	iVar0 = 0;
	while (iVar0 < 198)
	{
		StringCopy(&cVar1, "BUILDING_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_525(var* uParam0, char* sParam1)//Position - 0x78D52
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 227, sParam1);
	iVar0 = 0;
	while (iVar0 < 226)
	{
		StringCopy(&cVar1, "DOOR_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_526()//Position - 0x78D99
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_8613), 472, "CODE_CONTROL_DATA_STRUCT");
	func_528(&(Global_113386.f_8613), "CODE_CONTROL_RUNFLAG_ARRAY");
	func_527(&(Global_113386.f_8613.f_236), "CODE_CONTROL_EXECUTE_TIMER_ARRAY");
	MISC::STOP_SAVE_STRUCT();
}

void func_527(var* uParam0, char* sParam1)//Position - 0x78DDA
{
	int iVar0;
	char cVar1[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 236, sParam1);
	iVar0 = 0;
	while (iVar0 < 235)
	{
		StringCopy(&cVar1, "CODE_ID_EXECUTE_TIMER_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_528(var* uParam0, char* sParam1)//Position - 0x78E1E
{
	int iVar0;
	char cVar1[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 236, sParam1);
	iVar0 = 0;
	while (iVar0 < 235)
	{
		StringCopy(&cVar1, "CODE_ID_RUNFLAG_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_529()//Position - 0x78E62
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_7688), 925, "COMM_CONTROL_DATA_STRUCT");
	func_540(&(Global_113386.f_7688), "COMM_CONTROL_QUEUED_CALLS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_7688.f_136), "No_Queued_Calls");
	func_539(&(Global_113386.f_7688.f_137), "COMM_CONTROL_MISSED_CALLS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_7688.f_198), "No_Missed_Calls");
	func_537(&(Global_113386.f_7688.f_199), "COMM_CONTROL_CHAT_CALLS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_7688.f_650), "No_Chat_Calls");
	func_536(&(Global_113386.f_7688.f_651), "COMM_CONTROL_QUEUED_TEXTS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_7688.f_764), "No_Queued_Texts");
	func_534(&(Global_113386.f_7688.f_867), "COMM_CONTROL_SENT_TEXTS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_7688.f_910), "No_Sent_Texts");
	func_531(&(Global_113386.f_7688.f_765), "COMM_CONTROL_QUEUED_EMAILS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_7688.f_866), "No_Queued_Emails");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_7688.f_911), "Last_Completed_Call");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_7688.f_912), "Last_Call_Answered");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_7688.f_913), "Last_Call_Had_Response");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_7688.f_914), "Last_Call_Response");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_7688.f_915), "Last_Completed_Text");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_7688.f_916), "Last_Text_Had_Response");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_7688.f_917), "Last_Text_Response");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_7688.f_918), "Last_Completed_Email");
	func_530(&(Global_113386.f_7688.f_919), "COMM_CONTROL_CHAR_PRIORITY_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_7688.f_923), "Exile_Warning_Bitset");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_7688.f_924), "Comms_Game_time");
	MISC::STOP_SAVE_STRUCT();
}

void func_530(var* uParam0, char* sParam1)//Position - 0x7902F
{
	int iVar0;
	char cVar1[64];
	int iVar2;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = iVar0;
		StringCopy(&cVar1, "Character_Priority_", 64);
		switch (iVar2)
		{
			case 0:
				StringConCat(&cVar1, "Michael", 64);
				break;
			case 1:
				StringConCat(&cVar1, "Franklin", 64);
				break;
			case 2:
				StringConCat(&cVar1, "Trevor", 64);
				break;
		}
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_531(var* uParam0, char* sParam1)//Position - 0x790AC
{
	int iVar0;
	struct<8> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 101, sParam1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "EMAIL_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_532(uParam0[iVar0 /*10*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_532(var* uParam0, char* sParam1)//Position - 0x790F0
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 10, sParam1);
	func_533(uParam0, "COMMUNICATION_DATA_STRUCT");
	MISC::STOP_SAVE_STRUCT();
}

void func_533(var* uParam0, char* sParam1)//Position - 0x79111
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 10, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "ID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "Settings");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "Player_Char_Bitset");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_3), "Priority");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "Queue_Time");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "Requeue_Time");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_6), "NPC_Character");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_7), "Restricted_Area_ID");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_8), "Execute_On_Complete_ID");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_9), "Send_Check");
	MISC::STOP_SAVE_STRUCT();
}

void func_534(var* uParam0, char* sParam1)//Position - 0x791A7
{
	int iVar0;
	struct<8> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 43, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&Var1, "SENT_TEXT_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_535(uParam0[iVar0 /*14*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_535(var* uParam0, char* sParam1)//Position - 0x791EA
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 14, sParam1);
	func_533(uParam0, "COMMUNICATION_DATA_STRUCT");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_10), "ePart1");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_11), "ePart2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "Fail_Count");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_13), "WhichCanCallSenderStatus");
	MISC::STOP_SAVE_STRUCT();
}

void func_536(var* uParam0, char* sParam1)//Position - 0x7923F
{
	int iVar0;
	struct<8> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 113, sParam1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		StringCopy(&Var1, "TEXT_MESSAGE_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_535(uParam0[iVar0 /*14*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_537(var* uParam0, char* sParam1)//Position - 0x79283
{
	int iVar0;
	struct<8> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 451, sParam1);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		StringCopy(&Var1, "CHAT_CALL_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_538(uParam0[iVar0 /*15*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_538(var* uParam0, char* sParam1)//Position - 0x792C8
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 15, sParam1);
	func_533(uParam0, "COMMUNICATION_DATA_STRUCT");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_10), "eCommExtra");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_11), "eCommExtra2");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12), "eYesResponse");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_13), "eNoResponse");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "Speaker_ID");
	MISC::STOP_SAVE_STRUCT();
}

void func_539(var* uParam0, char* sParam1)//Position - 0x7932A
{
	int iVar0;
	struct<8> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 61, sParam1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&Var1, "MISSED_CALL_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_538(uParam0[iVar0 /*15*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_540(var* uParam0, char* sParam1)//Position - 0x7936D
{
	int iVar0;
	struct<8> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 136, sParam1);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		StringCopy(&Var1, "CALL_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_538(uParam0[iVar0 /*15*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_541()//Position - 0x793B1
{
	int iVar0;
	char[] cVar1[8];
	int iVar2;
	char cVar3[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_18574), 379, "SAVED_RANDOM_CHARACTERS");
	iVar0 = 0;
	while (iVar0 < 63)
	{
		switch (iVar0)
		{
			case 0:
				cVar1 = "RC_ABIGAIL_1";
				break;
			case 1:
				cVar1 = "RC_ABIGAIL_2";
				break;
			case 2:
				cVar1 = "RC_BARRY_1";
				break;
			case 3:
				cVar1 = "RC_BARRY_2";
				break;
			case 4:
				cVar1 = "RC_BARRY_3";
				break;
			case 5:
				cVar1 = "RC_BARRY_3A";
				break;
			case 6:
				cVar1 = "RC_BARRY_3C";
				break;
			case 7:
				cVar1 = "RC_BARRY_4";
				break;
			case 8:
				cVar1 = "RC_DREYFUSS_1";
				break;
			case 9:
				cVar1 = "RC_EPSILON_1";
				break;
			case 10:
				cVar1 = "RC_EPSILON_2";
				break;
			case 11:
				cVar1 = "RC_EPSILON_3";
				break;
			case 12:
				cVar1 = "RC_EPSILON_4";
				break;
			case 13:
				cVar1 = "RC_EPSILON_5";
				break;
			case 14:
				cVar1 = "RC_EPSILON_6";
				break;
			case 15:
				cVar1 = "RC_EPSILON_7";
				break;
			case 16:
				cVar1 = "RC_EPSILON_8";
				break;
			case 17:
				cVar1 = "RC_EXTREME_1";
				break;
			case 18:
				cVar1 = "RC_EXTREME_2";
				break;
			case 19:
				cVar1 = "RC_EXTREME_3";
				break;
			case 20:
				cVar1 = "RC_EXTREME_4";
				break;
			case 21:
				cVar1 = "RC_FANATIC_1";
				break;
			case 22:
				cVar1 = "RC_FANATIC_2";
				break;
			case 23:
				cVar1 = "RC_FANATIC_3";
				break;
			case 24:
				cVar1 = "RC_HAO_1";
				break;
			case 25:
				cVar1 = "RC_HUNTING_1";
				break;
			case 26:
				cVar1 = "RC_HUNTING_2";
				break;
			case 27:
				cVar1 = "RC_JOSH_1";
				break;
			case 28:
				cVar1 = "RC_JOSH_2";
				break;
			case 29:
				cVar1 = "RC_JOSH_3";
				break;
			case 30:
				cVar1 = "RC_JOSH_4";
				break;
			case 31:
				cVar1 = "RC_MAUDE_1";
				break;
			case 32:
				cVar1 = "RC_MINUTE_1";
				break;
			case 33:
				cVar1 = "RC_MINUTE_2";
				break;
			case 34:
				cVar1 = "RC_MINUTE_3";
				break;
			case 35:
				cVar1 = "RC_MRS_PHILIPS_1";
				break;
			case 36:
				cVar1 = "RC_MRS_PHILIPS_2";
				break;
			case 37:
				cVar1 = "RC_NIGEL_1";
				break;
			case 38:
				cVar1 = "RC_NIGEL_1A";
				break;
			case 39:
				cVar1 = "RC_NIGEL_1B";
				break;
			case 40:
				cVar1 = "RC_NIGEL_1C";
				break;
			case 41:
				cVar1 = "RC_NIGEL_1D";
				break;
			case 42:
				cVar1 = "RC_NIGEL_2";
				break;
			case 43:
				cVar1 = "RC_NIGEL_3";
				break;
			case 44:
				cVar1 = "RC_OMEGA_1";
				break;
			case 45:
				cVar1 = "RC_OMEGA_2";
				break;
			case 46:
				cVar1 = "RC_PAPARAZZO_1";
				break;
			case 47:
				cVar1 = "RC_PAPARAZZO_2";
				break;
			case 48:
				cVar1 = "RC_PAPARAZZO_3";
				break;
			case 49:
				cVar1 = "RC_PAPARAZZO_3A";
				break;
			case 50:
				cVar1 = "RC_PAPARAZZO_3B";
				break;
			case 51:
				cVar1 = "RC_PAPARAZZO_4";
				break;
			case 52:
				cVar1 = "RC_RAMPAGE_1";
				break;
			case 53:
				cVar1 = "RC_RAMPAGE_2";
				break;
			case 54:
				cVar1 = "RC_RAMPAGE_3";
				break;
			case 55:
				cVar1 = "RC_RAMPAGE_4";
				break;
			case 56:
				cVar1 = "RC_RAMPAGE_5";
				break;
			case 57:
				cVar1 = "RC_THELASTONE";
				break;
			case 58:
				cVar1 = "RC_TONYA_1";
				break;
			case 59:
				cVar1 = "RC_TONYA_2";
				break;
			case 60:
				cVar1 = "RC_TONYA_3";
				break;
			case 61:
				cVar1 = "RC_TONYA_4";
				break;
			case 62:
				cVar1 = "RC_TONYA_5";
				break;
			default:
				cVar1 = "UNKNOWN";
				break;
		}
		func_542(&(Global_113386.f_18574[iVar0 /*6*/]), cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18574.f_379), "RC_EVENTS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18574.f_380), "iRCMissionsCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18574.f_381), "g_iCurrentEpsilonPayment");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18574.f_382), "g_iWebsiteQueryBit");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18574.f_383), "g_iREDomesticCompOrder");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_18574.f_384), "g_bFanaticHelp");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_18574.f_385), "g_bFanaticStamina");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_18574.f_386), "g_bFanaticCheated");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_18574.f_387), "g_bFinalEpsilonPayment");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_18574.f_388), "g_bStoleEpsilonCash");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_18574.f_389), "g_bTriggeredHao1");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_18574.f_390), 3, "VISIBLE_IN_FOW");
	iVar2 = 0;
	while (iVar2 < 2)
	{
		StringCopy(&cVar3, "VISIBLE_IN_FOW_BITSET_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_18574.f_390[iVar2]), &cVar3);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_542(var* uParam0, char* sParam1)//Position - 0x79913
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 6, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "RC_FLAGS");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1), "RC_TIME_REQ_SET");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_2), "RC_STORED_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "RC_iCompletionOrder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "RC_iFailsNoProgress");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5), "fStatCompletion");
	MISC::STOP_SAVE_STRUCT();
}

void func_543()//Position - 0x79974
{
	func_544(&(Global_113386.f_18533), "PLAYER_SCENE_SAVED_DATA");
}

void func_544(var* uParam0, char* sParam1)//Position - 0x7998C
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 41, sParam1);
	func_549(uParam0, "g_ePlayerLastScene");
	func_547(&(uParam0->f_4), "g_eLastSceneQueue");
	func_545(&(uParam0->f_24), "g_bPlayerTriggeredPrioritySwitch");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "g_iSeenOneOffSceneBit");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "g_bSeenTrevorsPrettyDress");
	MISC::STOP_SAVE_STRUCT();
}

void func_545(var* uParam0, char* sParam1)//Position - 0x799E1
{
	int iVar0;
	struct<4> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 16, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "CHAR_MICHAEL", 32);
				break;
			case 1:
				StringCopy(&Var1, "CHAR_FRANKLIN", 32);
				break;
			case 2:
				StringCopy(&Var1, "CHAR_TREVOR", 32);
				break;
			default:
				StringCopy(&Var1, "char_", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_546(uParam0[iVar0 /*5*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_546(var* uParam0, char* sParam1)//Position - 0x79A64
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 5, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&cVar1, "_0", 32);
				break;
			case 1:
				StringCopy(&cVar1, "_1", 32);
				break;
			case 2:
				StringCopy(&cVar1, "_2", 32);
				break;
			case 3:
				StringCopy(&cVar1, "_3", 32);
				break;
			default:
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_547(var* uParam0, char* sParam1)//Position - 0x79AF1
{
	int iVar0;
	struct<4> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 19, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "CHAR_MICHAEL", 32);
				break;
			case 1:
				StringCopy(&Var1, "CHAR_FRANKLIN", 32);
				break;
			case 2:
				StringCopy(&Var1, "CHAR_TREVOR", 32);
				break;
			default:
				StringCopy(&Var1, "char_", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_548(uParam0[iVar0 /*6*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_548(var* uParam0, char* sParam1)//Position - 0x79B74
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&cVar1, "_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_549(var* uParam0, char* sParam1)//Position - 0x79BB8
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&cVar1, "CHAR_MICHAEL", 32);
				break;
			case 1:
				StringCopy(&cVar1, "CHAR_FRANKLIN", 32);
				break;
			case 2:
				StringCopy(&cVar1, "CHAR_TREVOR", 32);
				break;
			default:
				StringCopy(&cVar1, "Player_Scene_Sheet_", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_550()//Position - 0x79C3A
{
	func_551(&(Global_113386.f_18514), "FAMILY_SAVED_DATA");
}

void func_551(var* uParam0, char* sParam1)//Position - 0x79C52
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 19, sParam1);
	func_552(uParam0, "ePreviousFamilyEvent");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_16), "bInitialisedPreviousEvents");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_17), "bSeenFamWeaponDisplay");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "bHeardTrevorCountry");
	MISC::STOP_SAVE_STRUCT();
}

void func_552(var* uParam0, char* sParam1)//Position - 0x79C9A
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 16, sParam1);
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&cVar1, "FM_MICHAEL_SON", 32);
				break;
			case 1:
				StringCopy(&cVar1, "FM_MICHAEL_DAUGHTER", 32);
				break;
			case 2:
				StringCopy(&cVar1, "FM_MICHAEL_WIFE", 32);
				break;
			case 3:
				StringCopy(&cVar1, "FM_MICHAEL_MEXMAID", 32);
				break;
			case 4:
				StringCopy(&cVar1, "FM_MICHAEL_GARDENER", 32);
				break;
			case 5:
				StringCopy(&cVar1, "FM_FRANKLIN_AUNT", 32);
				break;
			case 6:
				StringCopy(&cVar1, "FM_FRANKLIN_LAMAR", 32);
				break;
			case 7:
				StringCopy(&cVar1, "FM_FRANKLIN_STRETCH", 32);
				break;
			case 10:
				StringCopy(&cVar1, "FM_TREVOR_0_RON", 32);
				break;
			case 8:
				StringCopy(&cVar1, "FM_TREVOR_0_MICHAEL", 32);
				break;
			case 9:
				StringCopy(&cVar1, "FM_TREVOR_0_TREVOR", 32);
				break;
			case 11:
				StringCopy(&cVar1, "FM_TREVOR_0_WIFE", 32);
				break;
			case 12:
				StringCopy(&cVar1, "FM_TREVOR_0_MOTHER", 32);
				break;
			case 13:
				StringCopy(&cVar1, "FM_TREVOR_1_FLOYD", 32);
				break;
			case 14:
				StringCopy(&cVar1, "FM_TREVOR_1_WADE", 32);
				break;
			default:
				StringCopy(&cVar1, "Family_Sheet_", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_553()//Position - 0x79DF6
{
	func_554(&(Global_113386.f_18103), "FRIENDS_SAVED_ARRAY");
}

void func_554(var* uParam0, char* sParam1)//Position - 0x79E0E
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 411, sParam1);
	func_563(uParam0, "g_FriendData");
	func_561(&(uParam0->f_175), "g_FriendConnectData");
	func_559(&(uParam0->f_347), "g_FriendGroupData");
	func_557(&(uParam0->f_362), "g_FriendFailTimers");
	func_556(&(uParam0->f_381), "g_FriendFailMessages");
	func_555(&(uParam0->f_388), "g_FranklinLamarEndChat");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_395), "g_FriendScriptThread");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_396), "g_bHelpDoneCanPhoneFriend");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_397), "g_bHelpDoneCanPhoneBBuddy");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_398), "g_bHelpDoneCanPhoneDecline");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_399), "g_bHelpDonePickupDest");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_400), "g_bHelpDonePickupWait");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_401), "g_bHelpDoneActivityBlips");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_402), "g_bHelpDoneOpenMap");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_403), "g_bHelpDoneDropoff");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_404), "g_bHelpDoneCanCancel");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_405), "g_bCalledToCancelOnce");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_406), "g_bHasPlayerBeenTurnedDown");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_407), "g_bExplainedDeadFriend");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_408), "g_bHelpDoneBBuddyArrival");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_409), "g_bHelpDoneBBuddySwitch");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_410), "g_iAmbChatBitfield");
	MISC::STOP_SAVE_STRUCT();
}

void func_555(var* uParam0, char* sParam1)//Position - 0x79F55
{
	char cVar0[32];
	int iVar1;
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 7, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 7, "banks");
	iVar1 = 0;
	while (iVar1 < 6)
	{
		StringCopy(&cVar0, "bank", 32);
		StringIntConCat(&cVar0, iVar1, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_556(var* uParam0, char* sParam1)//Position - 0x79FA7
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 7, sParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&cVar1, "tMICHAEL", 32);
				break;
			case 1:
				StringCopy(&cVar1, "tFRANKLIN", 32);
				break;
			case 2:
				StringCopy(&cVar1, "tTREVOR", 32);
				break;
			case 3:
				StringCopy(&cVar1, "tLAMAR", 32);
				break;
			case 4:
				StringCopy(&cVar1, "tJIMMY", 32);
				break;
			case 5:
				StringCopy(&cVar1, "tAMANDA", 32);
				break;
			default:
				StringCopy(&cVar1, "Friend", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_557(var* uParam0, char* sParam1)//Position - 0x7A05F
{
	int iVar0;
	struct<4> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 19, sParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "tMICHAEL", 32);
				break;
			case 1:
				StringCopy(&Var1, "tFRANKLIN", 32);
				break;
			case 2:
				StringCopy(&Var1, "tTREVOR", 32);
				break;
			case 3:
				StringCopy(&Var1, "tLAMAR", 32);
				break;
			case 4:
				StringCopy(&Var1, "tJIMMY", 32);
				break;
			case 5:
				StringCopy(&Var1, "tAMANDA", 32);
				break;
			default:
				StringCopy(&Var1, "Friend", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_558(uParam0[iVar0 /*3*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_558(var* uParam0, char* sParam1)//Position - 0x7A118
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "TimerBits");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1), "StartTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2), "PauseTime");
	MISC::STOP_SAVE_STRUCT();
}

void func_559(var* uParam0, char* sParam1)//Position - 0x7A152
{
	int iVar0;
	struct<4> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 15, sParam1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "FG_MICHAEL_FRANKLIN_TREVOR", 32);
				break;
			case 1:
				StringCopy(&Var1, "FG_FRANKLIN_TREVOR_LAMAR", 32);
				break;
			default:
				StringCopy(&Var1, "Friend group", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_560(uParam0[iVar0 /*7*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_560(var* uParam0, char* sParam1)//Position - 0x7A1C3
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 7, sParam1);
	func_555(uParam0, "chatData");
	MISC::STOP_SAVE_STRUCT();
}

void func_561(var* uParam0, char* sParam1)//Position - 0x7A1E3
{
	int iVar0;
	struct<4> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 172, sParam1);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "FC_MICHAEL_FRANKLIN", 32);
				break;
			case 1:
				StringCopy(&Var1, "FC_FRANKLIN_TREVOR", 32);
				break;
			case 2:
				StringCopy(&Var1, "FC_TREVOR_MICHAEL", 32);
				break;
			case 3:
				StringCopy(&Var1, "FC_FRANKLIN_LAMAR", 32);
				break;
			case 4:
				StringCopy(&Var1, "FC_TREVOR_LAMAR", 32);
				break;
			case 5:
				StringCopy(&Var1, "FC_MICHAEL_JIMMY", 32);
				break;
			case 6:
				StringCopy(&Var1, "FC_FRANKLIN_JIMMY", 32);
				break;
			case 7:
				StringCopy(&Var1, "FC_TREVOR_JIMMY", 32);
				break;
			case 8:
				StringCopy(&Var1, "FC_MICHAEL_AMANDA", 32);
				break;
			default:
				StringCopy(&Var1, "Friend Sheet", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_562(uParam0[iVar0 /*19*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_562(var* uParam0, char* sParam1)//Position - 0x7A2D3
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 19, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "friendA");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1), "friendB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "blockBits");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_3), "blockMissionID");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4), "commID");
	func_558(&(uParam0->f_5), "lastContactTimer");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_8), "lastContactType");
	func_555(&(uParam0->f_9), "chatData");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_16), "wanted");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "likes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "flags");
	MISC::STOP_SAVE_STRUCT();
}

void func_563(var* uParam0, char* sParam1)//Position - 0x7A376
{
	int iVar0;
	struct<4> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 175, sParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "FR_MICHAEL", 32);
				break;
			case 1:
				StringCopy(&Var1, "FR_FRANKLIN", 32);
				break;
			case 2:
				StringCopy(&Var1, "FR_TREVOR", 32);
				break;
			case 3:
				StringCopy(&Var1, "FR_LAMAR", 32);
				break;
			case 4:
				StringCopy(&Var1, "FR_JIMMY", 32);
				break;
			case 5:
				StringCopy(&Var1, "FR_AMANDA", 32);
				break;
			default:
				StringCopy(&Var1, "Friend Sheet", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_564(uParam0[iVar0 /*29*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_564(var* uParam0, char* sParam1)//Position - 0x7A42F
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 29, sParam1);
	func_565(uParam0, "charSheet");
	MISC::STOP_SAVE_STRUCT();
}

void func_565(var* uParam0, char* sParam1)//Position - 0x7A450
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 29, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "game_model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "alpha_int");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "orig_alpha_int");
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(&(uParam0->f_3), "char_label");
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(&(uParam0->f_7), "char_picture");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_11), "is_friend");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_12), 5, "PhoneBookStateArray");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12[0]), "PhoneBook_State_ToMichael");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12[1]), "PhoneBook_State_ToFranklin");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12[2]), "PhoneBook_State_ToTrevor");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12[3]), "PhoneBook_State_ToMP");
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_17), "bank_acc");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_18), "Picmsg_Status");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_19), 5, "MissedCallStatusArray");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_19[0]), "MissedCallStatus_ToMichael");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_19[1]), "MissedCallStatus_ToFranklin");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_19[2]), "MissedCallStatus_ToTrevor");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_19[3]), "MissedCallStatus_ToMP");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_24), 5, "StatusAsCallerArray");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_24[0]), "StatusAsCaller_ToMichael");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_24[1]), "StatusAsCaller_ToFranklin");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_24[2]), "StatusAsCaller_ToTrevor");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_24[3]), "StatusAsCaller_ToMP");
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_566()//Position - 0x7A5C2
{
	func_567(&(Global_113386.f_28050), "CHARSHEET_SAVED_ARRAY");
}

void func_567(var* uParam0, char* sParam1)//Position - 0x7A5DA
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 4699, sParam1);
	func_568(uParam0, "struct_g_CharacterSheet");
	MISC::STOP_SAVE_STRUCT();
}

void func_568(var* uParam0, char* sParam1)//Position - 0x7A5FC
{
	int iVar0;
	struct<4> Var1;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4699, sParam1);
	while (iVar0 < 162)
	{
		MemCopy(&Var1, {Global_113386.f_28050[iVar0 /*29*/].f_3}, 8);
		StringConCat(&Var1, "_Saved", 32);
		func_565(uParam0[iVar0 /*29*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_569()//Position - 0x7A650
{
	func_570(&(Global_113386.f_7229), "RESPAWN_LOCATION_DATA");
}

void func_570(var* uParam0, char* sParam1)//Position - 0x7A668
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 32, sParam1);
	func_573(uParam0, "SAVEHOUSE");
	func_572(&(uParam0->f_17), "POLICE_STATION");
	func_571(&(uParam0->f_11), "HOSPITAL");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_25), "SAVEHOUSE_DATA_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_26), "HOSPITAL_DATA_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_27), "POLICE_DATA_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_28), "bSeenFirstTimeWasted");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_29), "bSeenFirstTimeDrowned");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_30), "bSeenFirstTimeBusted");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_31), "bNewGameStarted");
	MISC::STOP_SAVE_STRUCT();
}

void func_571(var* uParam0, char* sParam1)//Position - 0x7A6FE
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&cVar1, sParam1, 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_572(var* uParam0, char* sParam1)//Position - 0x7A742
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 8, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&cVar1, sParam1, 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_573(var* uParam0, char* sParam1)//Position - 0x7A787
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 11, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&cVar1, sParam1, 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_574()//Position - 0x7A7CC
{
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_2363), 493, "COMPONENTS_ARRAY");
	func_589(&(Global_113386.f_2363[0 /*164*/]), "SP0");
	func_589(&(Global_113386.f_2363[1 /*164*/]), "SP1");
	func_589(&(Global_113386.f_2363[2 /*164*/]), "SP2");
	MISC::STOP_SAVE_ARRAY();
	func_576(&(Global_113386.f_2363.f_539), "PP_INFO_STRUCT");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_113386.f_2363.f_493), 46, "TATTOOS_ARRAY");
	func_575(&(Global_113386.f_2363.f_493[0 /*15*/]), "SP0");
	func_575(&(Global_113386.f_2363.f_493[1 /*15*/]), "SP1");
	func_575(&(Global_113386.f_2363.f_493[2 /*15*/]), "SP2");
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_2363.f_4863), "FRANKLIN_ORIGINAL_OUTFIT_ID");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_2363.f_4864), "OVERRIDE_PED");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_2363.f_4865), "PLAYER_PED_DATA_PATCH_BITSET");
}

void func_575(var* uParam0, char* sParam1)//Position - 0x7A8CB
{
	int iVar0;
	char cVar1[32];
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 15, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 5, "UNLOCKED");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "unlockedBitset", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5), 5, "VIEWED");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "viewedBitset", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_10), 5, "CURRENT");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "currentBitset", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_576(var* uParam0, char* sParam1)//Position - 0x7A9A0
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 4324, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 196, "VARIATIONS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "VARIATIONS") };
		func_583(uParam0[iVar0 /*65*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_196), 4, "GOLF_TOPS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "GOLF_TOPS") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_196[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_200), 4, "GOLF_PANTS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "GOLF_PANTS") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_200[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_298), 1432, "WEAPONS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "WEAPONS") };
		func_580(&(uParam0->f_298[iVar0 /*477*/]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1730), 33, "WEAPON_TO_SHOW");
	iVar2 = 0;
	while (iVar2 < 8)
	{
		StringCopy(&Var1, "WHEEL_SLOT_", 64);
		StringIntConCat(&Var1, iVar2, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1730[iVar2 /*4*/]), 4, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_588(iVar0, "WEAPON") };
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1730[iVar2 /*4*/][iVar0]), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1763), "EQUIPPED_WEAPON_SLOT");
	func_580(&(uParam0->f_1764), "SNAP_WEAP");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_290), 4, "HEALTH_PERCENTAGE");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "HEALTH_PERCENTAGE") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_290[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_294), 4, "ARMOUR");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "ARMOUR") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_294[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2348), 4, "AVAILABLE");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "AVAILABLE") };
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2348[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2241), 6, "CARMODS");
	iVar3 = 0;
	while (iVar3 < 5)
	{
		Var1 = { func_588(iVar3, "_CARMODS") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2241[iVar3]), &Var1);
		iVar3++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2247), 33, "STAT_UPDATES");
	iVar4 = 0;
	while (iVar4 < 8)
	{
		StringCopy(&Var1, "STATS", 64);
		StringIntConCat(&Var1, iVar4, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2247[iVar4 /*4*/]), 4, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_588(iVar0, "_STATS") };
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2247[iVar4 /*4*/][iVar0]), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_204), 49, "TRACKED_COMPS");
	iVar5 = 0;
	while (iVar5 < 12)
	{
		StringCopy(&Var1, "COMP", 64);
		StringIntConCat(&Var1, iVar5, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_204[iVar5 /*4*/]), 4, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_588(iVar0, "_COMP") };
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_204[iVar5 /*4*/][iVar0]), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar5++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_253), 37, "TRACKED_PROPS");
	iVar6 = 0;
	while (iVar6 < 9)
	{
		StringCopy(&Var1, "PROP", 64);
		StringIntConCat(&Var1, iVar6, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_253[iVar6 /*4*/]), 4, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_588(iVar0, "_PROPS") };
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_253[iVar6 /*4*/][iVar0]), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar6++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2280), 4, "WH_TIMER");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "_WHTIMER") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2280[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2284), 4, "WH_UPDATE");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "_WHUPDATE") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2284[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2288), 4, "WH_TIME");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "_WHTIME") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2288[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2292), 4, "GRAB_TIME");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "_GRABTIME") };
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2292[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3588), 21, "VEH_POS");
	iVar7 = 0;
	while (iVar7 < 2)
	{
		StringCopy(&Var1, "VEH_POS_", 64);
		StringIntConCat(&Var1, iVar7, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3588[iVar7 /*10*/]), 10, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_588(iVar0, "VEH_POS_X") };
			MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_3588[iVar7 /*10*/][iVar0 /*3*/]), &Var1);
			Var1 = { func_588(iVar0, "VEH_POS_Y") };
			MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_3588[iVar7 /*10*/][iVar0 /*3*/].f_1), &Var1);
			Var1 = { func_588(iVar0, "VEH_POS_Z") };
			MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_3588[iVar7 /*10*/][iVar0 /*3*/].f_2), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar7++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3609), 9, "VEH_HEAD");
	iVar7 = 0;
	while (iVar7 < 2)
	{
		StringCopy(&Var1, "VEH_HEAD_", 64);
		StringIntConCat(&Var1, iVar7, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3609[iVar7 /*4*/]), 4, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_588(iVar0, "VEH_HEAD") };
			MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_3609[iVar7 /*4*/][iVar0]), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar7++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2310), 4, "LAST_KNOWN_HEADING");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "LAST_KNOWN_HEADING") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2310[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2314), 4, "LAST_KNOWN_ROOM_KEY");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "LAST_KNOWN_ROOM_KEY") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2314[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2318), 10, "LAST_KNOWN_VELOCITY");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "LAST_KNOWN_VELOCITY_X") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2318[iVar0 /*3*/]), &Var1);
		Var1 = { func_588(iVar0, "LAST_KNOWN_VELOCITY_Y") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2318[iVar0 /*3*/].f_1), &Var1);
		Var1 = { func_588(iVar0, "LAST_KNOWN_VELOCITY_Z") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2318[iVar0 /*3*/].f_2), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2328), 4, "LAST_KNOWN_WANTED");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "LAST_KNOWN_WANTED") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2328[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2332), 4, "CHANGE_ON_MISS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "CHANGE_ON_MISS") };
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2332[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2336), 4, "CHANGED_CLOTHES");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "CHANGED_CLOTHES") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_2336[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2340), 4, "CHANGED_HAIR");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "CHANGED_HAIR") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2340[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2344), 4, "CHANGED_TATTS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "CHANGED_TATTS") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2344[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2300), 10, "LAST_KNOWN_XCOORD");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "LAST_KNOWN_XCOORD") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2300[iVar0 /*3*/]), &Var1);
		Var1 = { func_588(iVar0, "LAST_KNOWN_YCOORD") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2300[iVar0 /*3*/].f_1), &Var1);
		Var1 = { func_588(iVar0, "LAST_KNOWN_ZCOORD") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2300[iVar0 /*3*/].f_2), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2296), 4, "LAST_TIME_ACTIVE");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "LAST_TIME_ACTIVE") };
		func_579(&(uParam0->f_2296[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2407), 1181, "STORED_VEH_DATA");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2407[0 /*295*/]), 295, "STORED_CAR_DATA");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STORED_CAR_DATA") };
		func_578(&(uParam0->f_2407[0 /*295*/][iVar0 /*98*/]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2407[1 /*295*/]), 295, "STORED_BIK_DATA");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STORED_BIK_DATA") };
		func_578(&(uParam0->f_2407[1 /*295*/][iVar0 /*98*/]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2407[2 /*295*/]), 295, "STORED_GAR_DATA");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STORED_GAR_DATA") };
		func_578(&(uParam0->f_2407[2 /*295*/][iVar0 /*98*/]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2407[3 /*295*/]), 295, "STORED_MOD_DATA");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STORED_MOD_DATA") };
		func_578(&(uParam0->f_2407[3 /*295*/][iVar0 /*98*/]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3618), 198, "NPC_VEH_DATA");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3618[0 /*197*/]), 197, "NPC_CAR_DATA");
	func_578(&(uParam0->f_3618[0 /*197*/][0 /*98*/]), "AMANDAS_CAR");
	func_578(&(uParam0->f_3618[0 /*197*/][1 /*98*/]), "TRACEYS_CAR");
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2383), 4, "SPECIAL_ABILITY");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "SPECIAL_ABILITY") };
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2383[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2355), 4, "STAT_OFFSET_1");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STAT_OFFSET_1") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2355[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2359), 4, "STAT_OFFSET_2");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STAT_OFFSET_2") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2359[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2363), 4, "STAT_OFFSET_3");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STAT_OFFSET_3") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2363[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2367), 4, "STAT_OFFSET_4");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STAT_OFFSET_4") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2367[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2371), 4, "STAT_OFFSET_5");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STAT_OFFSET_5") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2371[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2375), 4, "STAT_OFFSET_6");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STAT_OFFSET_6") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2375[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2379), 4, "STAT_OFFSET_7");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "STAT_OFFSET_7") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2379[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2387), 4, "SPEC_AB_UNLOCK");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "SPEC_AB_UNLOCK") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2387[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2391), 4, "PED_COMPS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "PED_COMPS") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2391[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2395), 4, "FBI4MASKSNAME");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "FBI4MASKNAME") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_2395[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2399), 4, "FBI4MASKSTYPE");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "FBI4MASKTYPE") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_2399[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2403), 4, "FBI4SUITS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "FBI4SUIT") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_2403[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3816), 499, "WARDROBE");
	iVar8 = 0;
	while (iVar8 < 3)
	{
		StringCopy(&Var1, "WARDROBE", 64);
		StringIntConCat(&Var1, iVar8, 64);
		func_577(&(uParam0->f_3816[iVar8 /*166*/]), &Var1);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4317), 4, "CLOUD_VEH");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_588(iVar0, "CLOUD_VEH") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4317[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2352), "PP_DEFAULT_INFO_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2353), "PP_DEFAULT_CLOTHES_INFO_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2354), "PP_DEFAULT_STATS_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4315), "PP_VARS_IN_STATS");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4316), "PP_JIMMYMODS");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4321), "PP_CURRENT_PED");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4322), "PP_PREVIOUS_PED");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4323), "PP_LAST_KNOWN_PED");
	MISC::STOP_SAVE_STRUCT();
}

void func_577(var* uParam0, char* sParam1)//Position - 0x7B975
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 166, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 166, "ITEM_BITSET");
	iVar0 = 0;
	while (iVar0 < 15)
	{
		StringCopy(&cVar2, "COMP", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0[iVar0 /*11*/], 11, &cVar2);
		iVar1 = 0;
		while (iVar1 < 10)
		{
			StringCopy(&cVar2, "BITSET", 16);
			StringIntConCat(&cVar2, iVar1, 16);
			MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0 /*11*/][iVar1], &cVar2);
			iVar1++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_578(var* uParam0, char* sParam1)//Position - 0x7BA02
{
	int iVar0;
	char cVar1[16];
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 98, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "model");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1), "modelTrailer");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2), "fDirtLevel");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "fHealth");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iColourCombo");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iColour1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iColour2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iColourExtra1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iColourExtra2");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_9), "bColourCombo");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_10), "bColourExtra");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_11), 13, "EXTRAS");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[0]), "Extra0");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[1]), "Extra1");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[2]), "Extra2");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[3]), "Extra3");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[4]), "Extra4");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[5]), "Extra5");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[6]), "Extra6");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[7]), "Extra7");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[8]), "Extra8");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[9]), "Extra9");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[10]), "Extra10");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[11]), "Extra11");
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_24), "bConvertible");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iRadioIndex");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "iPlateBack");
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_27), "tlNumberPlate");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_31), 50, "VEH_MOD_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_81), 3, "VEH_MOD_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_81[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_84), "iTyreR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_85), "iTyreG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_86), "iTyreB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_87), "iWindowTintColour");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_88), "bTyresCanBurst");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_89), "iLivery");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_90), "iWheelType");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_96), "fEnvEff");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_97), "bIsPlayerVehicle");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_91), "eType");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_93), "iNeonR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_94), "iNeonG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_95), "iNeonB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_92), "iFlags");
	MISC::STOP_SAVE_STRUCT();
}

void func_579(var* uParam0, char* sParam1)//Position - 0x7BCEA
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 1, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "iStoredTime");
	MISC::STOP_SAVE_STRUCT();
}

void func_580(var* uParam0, char* sParam1)//Position - 0x7BD0A
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 477, sParam1);
	func_582(uParam0, "WEAPON_INFO");
	func_581(&(uParam0->f_221), "DLC_INFO");
	MISC::STOP_SAVE_STRUCT();
}

void func_581(var* uParam0, char* sParam1)//Position - 0x7BD39
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 256, sParam1);
	iVar0 = 0;
	while (iVar0 < 51)
	{
		StringCopy(&cVar1, "WEAPON_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0 /*5*/], &cVar1);
		StringCopy(&cVar1, "AMMO_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*5*/])->f_1), &cVar1);
		StringCopy(&cVar1, "MOD_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*5*/])->f_2), &cVar1);
		StringCopy(&cVar1, "TINT_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*5*/])->f_3), &cVar1);
		StringCopy(&cVar1, "CAMO_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*5*/])->f_4), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_582(var* uParam0, char* sParam1)//Position - 0x7BDF5
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 221, sParam1);
	iVar0 = 0;
	while (iVar0 < 44)
	{
		StringCopy(&cVar1, "WEAPON_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0 /*5*/], &cVar1);
		StringCopy(&cVar1, "AMMO_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*5*/])->f_1), &cVar1);
		StringCopy(&cVar1, "MOD_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*5*/])->f_2), &cVar1);
		StringCopy(&cVar1, "TINT_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*5*/])->f_3), &cVar1);
		StringCopy(&cVar1, "CAMO_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*5*/])->f_4), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_583(var* uParam0, char* sParam1)//Position - 0x7BEB0
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 65, sParam1);
	func_587(&(uParam0->f_13), "DRAWABLE_VARIATION");
	func_586(uParam0, "TEXTURE_VARIATION");
	func_585(&(uParam0->f_26), "PALETTE_VARIATION");
	func_584(&(uParam0->f_39), "PROP_INDEX");
	func_584(&(uParam0->f_49), "PROP_TEXTURE");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_59), "STORED_HAIR");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_60), "HAIR_CHANGE_ITEM");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_61), "HAIR_CHANGE_TYPE");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_62), "STORED_BEARD");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_63), "BEARD_CHANGE_ITEM");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_64), "BEARD_CHANGE_TYPE");
	MISC::STOP_SAVE_STRUCT();
}

void func_584(var* uParam0, char* sParam1)//Position - 0x7BF53
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 10, sParam1);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&cVar1, "ANCHOR_HEAD", 32);
				break;
			case 1:
				StringCopy(&cVar1, "ANCHOR_EYES", 32);
				break;
			case 2:
				StringCopy(&cVar1, "ANCHOR_EARS", 32);
				break;
			case 3:
				StringCopy(&cVar1, "ANCHOR_MOUTH", 32);
				break;
			case 4:
				StringCopy(&cVar1, "ANCHOR_LEFT_HAND", 32);
				break;
			case 5:
				StringCopy(&cVar1, "ANCHOR_RIGHT_HAND", 32);
				break;
			case 6:
				StringCopy(&cVar1, "ANCHOR_LEFT_WRIST", 32);
				break;
			case 7:
				StringCopy(&cVar1, "ANCHOR_RIGHT_WRIST", 32);
				break;
			case 8:
				StringCopy(&cVar1, "ANCHOR_HIP", 32);
				break;
			default:
				StringCopy(&cVar1, "PropDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_585(var* uParam0, char* sParam1)//Position - 0x7C04B
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 13, sParam1);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&cVar1, "PED_COMP_HEAD", 32);
				break;
			case 1:
				StringCopy(&cVar1, "PED_COMP_BERD", 32);
				break;
			case 2:
				StringCopy(&cVar1, "PED_COMP_HAIR", 32);
				break;
			case 3:
				StringCopy(&cVar1, "PED_COMP_TORSO", 32);
				break;
			case 4:
				StringCopy(&cVar1, "PED_COMP_LEG", 32);
				break;
			case 5:
				StringCopy(&cVar1, "PED_COMP_HAND", 32);
				break;
			case 6:
				StringCopy(&cVar1, "PED_COMP_FEET", 32);
				break;
			case 7:
				StringCopy(&cVar1, "PED_COMP_TEETH", 32);
				break;
			case 8:
				StringCopy(&cVar1, "PED_COMP_SPECIAL", 32);
				break;
			case 9:
				StringCopy(&cVar1, "PED_COMP_SPECIAL2", 32);
				break;
			case 10:
				StringCopy(&cVar1, "PED_COMP_DECL", 32);
				break;
			case 11:
				StringCopy(&cVar1, "PED_COMP_JBIB", 32);
				break;
			default:
				StringCopy(&cVar1, "PaletteIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_586(var* uParam0, char* sParam1)//Position - 0x7C178
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 13, sParam1);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&cVar1, "PED_COMP_HEAD", 32);
				break;
			case 1:
				StringCopy(&cVar1, "PED_COMP_BERD", 32);
				break;
			case 2:
				StringCopy(&cVar1, "PED_COMP_HAIR", 32);
				break;
			case 3:
				StringCopy(&cVar1, "PED_COMP_TORSO", 32);
				break;
			case 4:
				StringCopy(&cVar1, "PED_COMP_LEG", 32);
				break;
			case 5:
				StringCopy(&cVar1, "PED_COMP_HAND", 32);
				break;
			case 6:
				StringCopy(&cVar1, "PED_COMP_FEET", 32);
				break;
			case 7:
				StringCopy(&cVar1, "PED_COMP_TEETH", 32);
				break;
			case 8:
				StringCopy(&cVar1, "PED_COMP_SPECIAL", 32);
				break;
			case 9:
				StringCopy(&cVar1, "PED_COMP_SPECIAL2", 32);
				break;
			case 10:
				StringCopy(&cVar1, "PED_COMP_DECL", 32);
				break;
			case 11:
				StringCopy(&cVar1, "PED_COMP_JBIB", 32);
				break;
			default:
				StringCopy(&cVar1, "DrawableIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_587(var* uParam0, char* sParam1)//Position - 0x7C2A5
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 13, sParam1);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&cVar1, "PED_COMP_HEAD", 32);
				break;
			case 1:
				StringCopy(&cVar1, "PED_COMP_BERD", 32);
				break;
			case 2:
				StringCopy(&cVar1, "PED_COMP_HAIR", 32);
				break;
			case 3:
				StringCopy(&cVar1, "PED_COMP_TORSO", 32);
				break;
			case 4:
				StringCopy(&cVar1, "PED_COMP_LEG", 32);
				break;
			case 5:
				StringCopy(&cVar1, "PED_COMP_HAND", 32);
				break;
			case 6:
				StringCopy(&cVar1, "PED_COMP_FEET", 32);
				break;
			case 7:
				StringCopy(&cVar1, "PED_COMP_TEETH", 32);
				break;
			case 8:
				StringCopy(&cVar1, "PED_COMP_SPECIAL", 32);
				break;
			case 9:
				StringCopy(&cVar1, "PED_COMP_SPECIAL2", 32);
				break;
			case 10:
				StringCopy(&cVar1, "PED_COMP_DECL", 32);
				break;
			case 11:
				StringCopy(&cVar1, "PED_COMP_JBIB", 32);
				break;
			default:
				StringCopy(&cVar1, "TextureIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

struct<16> func_588(int iParam0, char* sParam1)//Position - 0x7C3D2
{
	struct<16> Var0;
	StringCopy(&Var0, "SP", 64);
	StringIntConCat(&Var0, iParam0, 64);
	StringConCat(&Var0, "_", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_589(var* uParam0, char* sParam1)//Position - 0x7C3FD
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 164, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, "HEAD0");
	MISC::REGISTER_INT_TO_SAVE(uParam0[0], "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(uParam0[1], "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(uParam0[2], "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4), 4, "BEARD0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_8), 4, "HAIR0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_12), 4, "TORSO0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_16), 4, "TORSO1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_20), 4, "TORSO2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_24), 4, "TORSO3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_28), 4, "TORSO4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_32), 4, "TORSO5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_36), 4, "TORSO6");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_40), 4, "TORSO7");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_40[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_40[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_40[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_44), 4, "TORSO8");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_44[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_44[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_44[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_48), 4, "TORSO9");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_48[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_48[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_48[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_52), 4, "LEGS0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_56), 4, "LEGS1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_56[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_56[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_56[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_60), 4, "LEGS2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_64), 4, "LEGS3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_64[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_64[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_64[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_68), 4, "HAND0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_72), 4, "FEET0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_76), 4, "FEET1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_76[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_76[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_76[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_80), 4, "FEET2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_80[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_80[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_80[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_84), 4, "FEET3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_84[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_84[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_84[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_88), 4, "FEET4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_88[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_88[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_88[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_92), 4, "TEETH0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_92[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_92[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_92[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_96), 4, "SPEC0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_96[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_96[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_96[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_100), 4, "SPEC1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_100[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_100[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_100[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_104), 4, "SPEC2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_104[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_104[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_104[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_108), 4, "SPEC2_0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_108[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_108[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_108[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_112), 4, "DECL0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_112[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_112[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_112[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_116), 4, "DECL1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_116[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_116[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_116[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_120), 4, "JBIB0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_120[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_120[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_120[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_124), 4, "JBIB1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_124[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_124[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_124[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_128), 4, "OUTF0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_128[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_128[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_128[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_132), 4, "OUTF1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_132[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_132[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_132[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_136), 4, "PROPG0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_136[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_136[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_136[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_140), 4, "PROP0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_140[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_140[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_140[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_144), 4, "PROP1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_144[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_144[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_144[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_148), 4, "PROP2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_148[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_148[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_148[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_152), 4, "PROP3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_152[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_152[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_152[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_156), 4, "PROP4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_156[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_156[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_156[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_160), 4, "PROP5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_160[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_160[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_160[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_590()//Position - 0x7CE9D
{
	func_599(&(Global_113386.f_10049), "STUNT_JUMPS_SAVED_STRUCT");
	func_597(&(Global_113386.f_10049.f_1), "PROSTITUTE_SAVED_DATA");
	func_596(&(Global_113386.f_10049.f_90), "PROSTITUTE_SERVICES_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_94), "CHOP_HINTS_DISPLAYED");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_95), "WARDROBE_HINTS_DISPLAYED");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_96), "BRIDGES_FLOWN_UNDER_FLAGS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_97), "BRIDGES_FLOWN_UNDER_FLAGS_2");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_98), "BRIDGES_FLOWN_UNDER_FLAGS_3");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_99), "WILDLIFE_PHOTOGRAPHY_FLAGS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_100), "CHASE_HELP_TEXT_DISPLAYED_MI");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_101), "CHASE_HELP_TEXT_DISPLAYED_RC");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_102), "CHASE_HELP_TEXT_DISPLAYED_RE");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_103), "EPSCAR_STAGE");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_104), "EPSCAR_LAST_EMAIL");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_105), "EPSROBES_ROBES_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_106), "EPSROBES_ROBES_DELIVERY_TIME");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_113386.f_10049.f_107), "EPSDESERT_DISTANCE_RUN");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_108), "FOR_SALE_SIGN_DESTROYED_FLAGS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_109), "HUNTING_HISCORE_FREE_MODE");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_110), "HUNTING_LOWEST_TIME_GOLD");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_10049.f_115), "HUNTING_CHALLENGE_DISPLAYED");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_10049.f_116), "HUNTING_WEEK_TIMER");
	func_595(&(Global_113386.f_10049.f_111), "CHALLENGE_FREE_MODE");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_117), "VEHICLE_REPAIR_FRANKLIN");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_118), "VEHICLE_REPAIR_MICHAEL");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_119), "VEHICLE_REPAIR_TREVOR");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_10049.f_120), "TAXI_HAIL_HELP_PROMPT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_121), "TAXI_ENTER_HELP_PROMPT");
	func_594(&(Global_113386.f_10049.f_122), "LETTER_SCRAPS_SAVED_STRUCT");
	func_594(&(Global_113386.f_10049.f_125), "SPACESHIP_PARTS_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_128), "FIB4_GETAWAY_STATE");
	func_593(&(Global_113386.f_10049.f_129), "WEBSITE_SUBSCRIPTION_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_133), "MURDER_MYSTERY_PROGRESS");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_113386.f_10049.f_134), "NOIR_EFFECTS_STATUS");
	func_592(&(Global_113386.f_10049.f_135), "PHOTOGRAPHY_MONKEY_FLAGS");
	func_591(&(Global_113386.f_10049.f_138), "PEYOTE_PICKUP_OF_TYPE_FOUND");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10049.f_143), "PEYOTE_ANIMAL_SEEN");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_10049.f_144), "PEYOTE_PROGRESSION_COMPLETE");
}

void func_591(var* uParam0, char* sParam1)//Position - 0x7D14F
{
	int iVar0;
	char cVar1[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 5, sParam1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_592(var* uParam0, char* sParam1)//Position - 0x7D197
{
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 3, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0[0], "PHOTOGRAPHY_MONKEY_FLAGS_1");
	MISC::REGISTER_INT_TO_SAVE(uParam0[1], "PHOTOGRAPHY_MONKEY_FLAGS_2");
	MISC::STOP_SAVE_ARRAY();
}

void func_593(var* uParam0, char* sParam1)//Position - 0x7D1C8
{
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0[0], "REALITY_MILL_MICHAEL");
	MISC::REGISTER_BOOL_TO_SAVE(uParam0[1], "REALITY_MILL_FRANKLIN");
	MISC::REGISTER_BOOL_TO_SAVE(uParam0[2], "REALITY_MILL_TREVOR");
	MISC::STOP_SAVE_ARRAY();
}

void func_594(var* uParam0, char* sParam1)//Position - 0x7D207
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "GLOBAL_SCRAP_DATA_iScrap0to31");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "GLOBAL_SCRAP_DATA_iScrap32to63");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), "GLOBAL_SCRAP_DATA_bMissionActive");
	MISC::STOP_SAVE_STRUCT();
}

void func_595(var* uParam0, char* sParam1)//Position - 0x7D241
{
	char cVar0[32];
	int iVar1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 32);
		StringIntConCat(&cVar0, iVar1, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar1], &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_596(var* uParam0, char* sParam1)//Position - 0x7D282
{
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0[0], "PROSTITUTE_SERVICES_MICHAEL");
	MISC::REGISTER_INT_TO_SAVE(uParam0[1], "PROSTITUTE_SERVICES_FRANKLIN");
	MISC::REGISTER_INT_TO_SAVE(uParam0[2], "PROSTITUTE_SERVICES_TREVOR");
	MISC::STOP_SAVE_ARRAY();
}

void func_597(var* uParam0, char* sParam1)//Position - 0x7D2C1
{
	int iVar0;
	struct<4> Var1;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 89, sParam1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "U_PRO_BABS", 32);
				break;
			case 1:
				StringCopy(&Var1, "U_PRO_DANA", 32);
				break;
			case 2:
				StringCopy(&Var1, "U_PRO_LIZZIE", 32);
				break;
			case 3:
				StringCopy(&Var1, "U_PRO_AMANDA", 32);
				break;
			case 4:
				StringCopy(&Var1, "U_PRO_ASHLEY", 32);
				break;
			case 5:
				StringCopy(&Var1, "U_PRO_KRISTEN", 32);
				break;
			case 6:
				StringCopy(&Var1, "U_PRO_SASHA", 32);
				break;
			case 7:
				StringCopy(&Var1, "U_PRO_JACQUELINE", 32);
				break;
			default:
				StringCopy(&Var1, "Prostitute_UDF", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_598(uParam0[iVar0 /*11*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_598(var* uParam0, char* sParam1)//Position - 0x7D3A2
{
	char cVar0[64];
	char cVar1[64];
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_iNumFdAry", 64);
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 11, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(uParam0[0], "iMetMichael");
	MISC::REGISTER_INT_TO_SAVE(uParam0[1], "iMetFranklin");
	MISC::REGISTER_INT_TO_SAVE(uParam0[2], "iMetTrevor");
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&cVar1, sParam1, 64);
	StringConCat(&cVar1, "_CmpDrawAry", 64);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4), 3, &cVar1);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[0]), "iUPCmpDrawHEAD");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[1]), "iUPCmpDrawHAIR");
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&cVar1, sParam1, 64);
	StringConCat(&cVar1, "_CmpTextAry", 64);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_7), 3, &cVar1);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7[0]), "iUPCmpTextHEAD");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7[1]), "iUPCmpTextHAIR");
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&cVar1, sParam1, 64);
	StringConCat(&cVar1, "_ModelType", 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), &cVar1);
	MISC::STOP_SAVE_STRUCT();
}

void func_599(var* uParam0, char* sParam1)//Position - 0x7D493
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 1, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "STUNT_JUMPS_iStuntJumpsCompleted");
	MISC::STOP_SAVE_STRUCT();
}

void func_600()//Position - 0x7D4B3
{
	func_601(&(Global_113386.f_20118), "SOCIAL_SAVED_DATA_STRUCT");
}

void func_601(var* uParam0, char* sParam1)//Position - 0x7D4CB
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 292, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 130, "CAR_APP_DATA");
	func_604(uParam0[0 /*43*/], "CAR_APP_DATA_M");
	func_604(uParam0[1 /*43*/], "CAR_APP_DATA_F");
	func_604(uParam0[2 /*43*/], "CAR_APP_DATA_T");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_130), 124, "CAR_APP_ORDER");
	__LIB_39__::func_432(&(uParam0->f_130[0 /*41*/]), "CAR_APP_ORDER_M");
	__LIB_39__::func_432(&(uParam0->f_130[1 /*41*/]), "CAR_APP_ORDER_F");
	__LIB_39__::func_432(&(uParam0->f_130[2 /*41*/]), "CAR_APP_ORDER_T");
	MISC::STOP_SAVE_ARRAY();
	func_602(&(uParam0->f_254), "DOG_APP_DATA");
	MISC::STOP_SAVE_STRUCT();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_260), "bSingleplayeDataWiped");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_261), "bCarAppPlateSet");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_262), "bCarAppUsed");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_263), "bDogAppUsed");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_264), "bUpdateDogLocation");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_265), "bDeleteCarData");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_266), "iOrderToDelete");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_271), "iCarAppPlateBack");
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_267), "tlCarAppPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_272), "iGameUID");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_273), 4, "PED_UNLOCK");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_273[0]), "0");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_273[1]), "1");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_273[2]), "2");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_277), 4, "VEH_SENT");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_277[0]), "0");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_277[1]), "1");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_277[2]), "2");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_281), 4, "FIRST_ORDER");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_281[0]), "0");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_281[1]), "1");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_281[2]), "2");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_285), 4, "ORDER_COUNT");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_285[0]), "0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_285[1]), "1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_285[2]), "2");
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_289), "HelpTextTriggered");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_290), "FacebookPostsMadeBitset");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_291), "ActivityFeedPostsMadeBitset");
}

void func_602(var* uParam0, char* sParam1)//Position - 0x7D73B
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 6, sParam1);
	MISC::REGISTER_FLOAT_TO_SAVE(uParam0, "fHappiness");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1), "fCleanliness");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2), "fHunger");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iTrainingLevel");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iCollar");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5), "bAppDataReceived");
	MISC::STOP_SAVE_STRUCT();
}

void func_604(var* uParam0, char* sParam1)//Position - 0x7D977
{
	int iVar0;
	char cVar1[16];
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 43, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iWindowTint");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iTyreSmokeR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iTyreSmokeG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iTyreSmokeB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iEngine");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iBrakes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iWheels");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iWheelType");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iExhaust");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iSuspension");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iArmour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iLights");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_16), "bBulletProofTyres");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iTurbo");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "iTyreSmoke");
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_19), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "iPlateBack");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "iModCountEngine");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iModCountBrakes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "iModCountExhaust");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "iModCountWheels");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "iModCountHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "iModCountArmour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_30), "iModCountSuspension");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_31), "fModPriceModifier");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iModColoursThatCanBeSet");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_33), 6, "iHornHash");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "iHornHash", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_33[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_39), "eModKitType");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "bSendDataToCloud");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_41), "bDeleteData");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_42), "bUpdateMods");
	MISC::STOP_SAVE_STRUCT();
}

void func_605()//Position - 0x7DB86
{
	func_606(&(Global_113386.f_668), "SHOP_SAVED_DATA_STRUCT");
}

void func_606(var* uParam0, char* sParam1)//Position - 0x7DB9E
{
	int iVar0;
	char cVar1[16];
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 1320, sParam1);
	func_608(uParam0, "SHOP_PROPERTIES");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_59), "SHOP_DEFAULT_DATA_SET");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60), "SHOP_TYPES_VISITED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_61), "iHairdoShopVisits");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_62), "iClothesShopVisits");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_63), "iTattooShopVisits");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_64), "iCarmodShopVisits");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_65), "iGunShopVisits");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_69), "iGunShopHelpCount");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_66), "iGunShopPostTrev2Dialogue");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_67), "iGunShopPostLamar1Dialogue");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68), "iClothesShopPostLester1Dialogue");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_71), 16, "CARMOD_DATA");
	func_607(&(uParam0->f_71[0 /*5*/]), "P0_CARMOD_DATA");
	func_607(&(uParam0->f_71[1 /*5*/]), "P1_CARMOD_DATA");
	func_607(&(uParam0->f_71[2 /*5*/]), "P2_CARMOD_DATA");
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_70), "FIRST_MODSHOP_REPAIR");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1318), "SHOP_BARBER_BLIP_HELP_SHOWN");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1319), "SHOP_ARMOUR_HELP_SHOWN");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1312), "CONTENT_VEHICLES");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1313), "CONTENT_WEAPONS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1314), "CONTENT_CLOTHES");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1315), "CONTENT_HAIRDOS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1316), "CONTENT_TATTOOS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1317), "CONTENT_GAME");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_87), 1225, "VIEWED_MODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_87)
	{
		StringCopy(&cVar1, "VIEWED_MODS", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_87[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_607(var* uParam0, char* sParam1)//Position - 0x7DD55
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 5, sParam1);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, "PROCESSING");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1), "READY");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), "MESSAGE_SENT");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "HOURS_TO_COMPLETE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "TYPE");
	MISC::STOP_SAVE_STRUCT();
}

void func_608(var* uParam0, char* sParam1)//Position - 0x7DDA9
{
	int iVar0;
	char cVar1[32];
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 59, sParam1);
	iVar0 = 0;
	while (iVar0 < 58)
	{
		StringCopy(&cVar1, "SHOP_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_609()//Position - 0x7DDF0
{
	func_610(&(Global_113386.f_2352), "RAMPAGE_SAVED_ARRAY");
}

void func_610(var* uParam0, char* sParam1)//Position - 0x7DE08
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 11, sParam1);
	func_611(uParam0, "structRampagePlayerData");
	MISC::STOP_SAVE_STRUCT();
}

void func_611(var* uParam0, char* sParam1)//Position - 0x7DE29
{
	int iVar0;
	struct<4> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 11, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&Var1, "Rampage", 32);
		StringIntConCat(&Var1, iVar0 + 1, 32);
		func_612(uParam0[iVar0 /*2*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_612(var* uParam0, char* sParam1)//Position - 0x7DE70
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 2, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "MedalIndex");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "HighScore");
	MISC::STOP_SAVE_STRUCT();
}

void func_613()//Position - 0x7DE9D
{
	func_614(&(Global_113386.f_1988), "PILOT_SCHOOL_SAVED_ARRAY");
}

void func_614(var* uParam0, char* sParam1)//Position - 0x7DEB5
{
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 364, sParam1);
	func_615(uParam0[0 /*121*/], "structPilotSchool_p0");
	func_615(uParam0[1 /*121*/], "structPilotSchool_p1");
	func_615(uParam0[2 /*121*/], "structPilotSchool_p2");
	MISC::STOP_SAVE_ARRAY();
}

void func_615(var* uParam0, char* sParam1)//Position - 0x7DEF6
{
	int iVar0;
	struct<4> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 121, sParam1);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "PSC_Takeoff", 32);
				break;
			case 1:
				StringCopy(&Var1, "PSC_Landing", 32);
				break;
			case 2:
				StringCopy(&Var1, "PSC_Inverted", 32);
				break;
			case 3:
				StringCopy(&Var1, "PSC_Knifing", 32);
				break;
			case 6:
				StringCopy(&Var1, "PSC_loopTheLoop", 32);
				break;
			case 4:
				StringCopy(&Var1, "PSC_FlyLow", 32);
				break;
			case 5:
				StringCopy(&Var1, "PSC_DaringLanding", 32);
				break;
			case 11:
				StringCopy(&Var1, "PSC_planeCourse", 32);
				break;
			case 7:
				StringCopy(&Var1, "PSC_heliCourse", 32);
				break;
			case 8:
				StringCopy(&Var1, "PSC_heliSpeedRun", 32);
				break;
			case 9:
				StringCopy(&Var1, "PSC_parachuteOntoTarget", 32);
				break;
			case 10:
				StringCopy(&Var1, "PSC_chuteOntoMovingTarg", 32);
				break;
			default:
				StringCopy(&Var1, "Pilot School", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_616(uParam0[iVar0 /*10*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_616(var* uParam0, char* sParam1)//Position - 0x7E01C
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 10, sParam1);
	MISC::REGISTER_FLOAT_TO_SAVE(uParam0, "ElapsedTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1), "LastElapsedTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_3), "LandingDistance");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2), "LastLandingDistance");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_4), "Multiplier" /* GXT: MULTIPLIER */);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "CheckpointCount");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_6), "FormationTimer");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_7), "HasPassedLesson");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_8), "eMedal");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_9), "eLastMedal");
	MISC::STOP_SAVE_STRUCT();
}

void func_617()//Position - 0x7E0B2
{
	func_618(&(Global_113386.f_243), "STRIP_CLUB_SAVED_ARRAY");
}

void func_618(var* uParam0, char* sParam1)//Position - 0x7E0C9
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 425, sParam1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&Var1, "SAVED_STRIP_CLUB_MICHAEL", 64);
				break;
			case 1:
				StringCopy(&Var1, "SAVED_STRIP_CLUB_FRANKLIN", 64);
				break;
			case 2:
				StringCopy(&Var1, "SAVED_STRIP_CLUB_TREVOR", 64);
				break;
			case 3:
				StringCopy(&Var1, "STRIP_CLUB_PLAYER_CHAR_MULTI_0", 64);
				break;
			case 4:
				StringCopy(&Var1, "STRIP_CLUB_PLAYER_CHAR_MULTI_1", 64);
				break;
			case 5:
				StringCopy(&Var1, "STRIP_CLUB_PLAYER_CHAR_MULTI_2", 64);
				break;
			case 6:
				StringCopy(&Var1, "STRIP_CLUB_PLAYER_CHAR_MULTI_3", 64);
				break;
			case 7:
				StringCopy(&Var1, "STRIP_CLUB_PLAYER_CHAR_MULTI_4", 64);
				break;
			default:
				StringCopy(&Var1, "Strip Club Saved", 64);
				StringIntConCat(&Var1, iVar0, 64);
				break;
		}
		func_619(uParam0[iVar0 /*53*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_619(var* uParam0, char* sParam1)//Position - 0x7E1AF
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 53, sParam1);
	func_622(uParam0, "STRIP_CLUBS");
	func_620(&(uParam0->f_2), "BOOTY_CALLS");
	MISC::STOP_SAVE_STRUCT();
}

void func_620(var* uParam0, char* sParam1)//Position - 0x7E1DD
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 51, sParam1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&Var1, "BC_STRIPPER_JULIET", 32);
				break;
			case 1:
				StringCopy(&Var1, "BC_STRIPPER_NIKKI", 32);
				break;
			case 2:
				StringCopy(&Var1, "BC_STRIPPER_CHASTITY", 32);
				break;
			case 3:
				StringCopy(&Var1, "BC_STRIPPER_CHEETAH", 32);
				break;
			case 4:
				StringCopy(&Var1, "BC_STRIPPER_SAPPHIRE", 32);
				break;
			case 5:
				StringCopy(&Var1, "BC_STRIPPER_INFERNUS", 32);
				break;
			case 6:
				StringCopy(&Var1, "BC_STRIPPER_FUFU", 32);
				break;
			case 7:
				StringCopy(&Var1, "BC_STRIPPER_PEACH", 32);
				break;
			case 8:
				StringCopy(&Var1, "BC_TAXI_LIZ", 32);
				break;
			case 9:
				StringCopy(&Var1, "BC_HITCHER_GIRL", 32);
				break;
			default:
				StringCopy(&Var1, "BootyCall", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_621(uParam0[iVar0 /*5*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_621(var* uParam0, char* sParam1)//Position - 0x7E2E6
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 5, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "bootyCallLike");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "bootyCallPlayerDenials");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "bootyCallSextsSent");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "bootyCallBCCBits");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4), "bootyCallActivated");
	MISC::STOP_SAVE_STRUCT();
}

void func_622(var* uParam0, char* sParam1)//Position - 0x7E33A
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 2, sParam1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&Var1, "STRIP_CLUB_LOW", 32);
				break;
			default:
				StringCopy(&Var1, "Strip Club", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_623(uParam0[iVar0], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_623(var* uParam0, char* sParam1)//Position - 0x7E39F
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 1, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "stripClubReputation");
	MISC::STOP_SAVE_STRUCT();
}

void func_624()//Position - 0x7E3BF
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_1), 242, "HEIST_DATA_STRUCT");
	func_637(&(Global_113386.f_1), "HEIST_CHOICE_HELP_DISPLAYED_ARRAY");
	func_636(&(Global_113386.f_1.f_6), "HEIST_CREW_HELP_DISPLAYED_ARRAY");
	func_634(&(Global_113386.f_1.f_12), "HEIST_SELECTED_CREW_ARRAY");
	func_632(&(Global_113386.f_1.f_73), "HEIST_CREW_ACTIVE_DATA_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_1.f_116), "Crew_Unlocked_Bitset");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_1.f_117), "Crew_Used_Bitset");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_1.f_118), "Crew_Dead_Bitset");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_1.f_119), "Crew_Dialogue_Bitset");
	func_631(&(Global_113386.f_1.f_120), "HEIST_DISPLAY_GROUP_VISIBLE_ARRAY");
	func_625(&(Global_113386.f_1.f_126), "HEIST_END_SCREEN_DATA_STRUCT");
	MISC::STOP_SAVE_STRUCT();
}

void func_625(var* uParam0, char* sParam1)//Position - 0x7E484
{
	int iVar0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 116, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iVar0)
		{
			case 0:
				func_626(uParam0[iVar0 /*23*/], "HEIST_END_SCREEN_JEWEL");
				break;
			case 1:
				func_626(uParam0[iVar0 /*23*/], "HEIST_END_SCREEN_DOCKS");
				break;
			case 2:
				func_626(uParam0[iVar0 /*23*/], "HEIST_END_SCREEN_RURAL_BANK");
				break;
			case 3:
				func_626(uParam0[iVar0 /*23*/], "HEIST_END_SCREEN_AGENCY");
				break;
			case 4:
				func_626(uParam0[iVar0 /*23*/], "HEIST_END_SCREEN_FINALE");
				break;
		}
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_626(var* uParam0, char* sParam1)//Position - 0x7E52B
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 23, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "Potential_Take");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "Actual_Take");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "Time_Taken");
	func_630(&(uParam0->f_2), "HEIST_END_SCREEN_PLAYER_TAKE");
	func_629(&(uParam0->f_6), "HEIST_END_SCREEN_PLAYER_PERC");
	func_628(&(uParam0->f_11), "HEIST_END_SCREEN_CREW_STATUS");
	func_627(&(uParam0->f_17), "HEIST_END_SCREEN_CREW_TAKE");
	MISC::STOP_SAVE_STRUCT();
}

void func_627(var* uParam0, char* sParam1)//Position - 0x7E59A
{
	int iVar0;
	char cVar1[16];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "Crew_Take_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_628(var* uParam0, char* sParam1)//Position - 0x7E5DC
{
	int iVar0;
	char cVar1[16];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "Crew_Status_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_629(var* uParam0, char* sParam1)//Position - 0x7E61E
{
	int iVar0;
	char cVar1[16];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "Plyr_Perc_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_630(var* uParam0, char* sParam1)//Position - 0x7E660
{
	int iVar0;
	char cVar1[16];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "Plyr_Take_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_631(var* uParam0, char* sParam1)//Position - 0x7E6A2
{
	int iVar0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iVar0)
		{
			case 0:
				MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], "Jewel_Display_Group_Bitset");
				break;
			case 1:
				MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], "Docks_Display_Group_Bitset");
				break;
			case 2:
				MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], "Rural_Display_Group_Bitset");
				break;
			case 3:
				MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], "Agency_Display_Group_Bitset");
				break;
			case 4:
				MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], "Finale_Display_Group_Bitset");
				break;
		}
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_632(var* uParam0, char* sParam1)//Position - 0x7E748
{
	int iVar0;
	struct<4> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 43, sParam1);
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&Var1, "CREW_ACTIVE_DATA_STRUCT_", 32);
		StringIntConCat(&Var1, iVar0, 32);
		func_633(uParam0[iVar0 /*3*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_633(var* uParam0, char* sParam1)//Position - 0x7E78C
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Skill");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "StatsA");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "StatsB");
	MISC::STOP_SAVE_STRUCT();
}

void func_634(var* uParam0, char* sParam1)//Position - 0x7E7C6
{
	int iVar0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 61, sParam1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iVar0)
		{
			case 0:
				func_635(uParam0[iVar0 /*6*/], "CREW_ARRAY_EMPTY");
				break;
			case 1:
				func_635(uParam0[iVar0 /*6*/], "CREW_ARRAY_JEWEL_STEALTH");
				break;
			case 2:
				func_635(uParam0[iVar0 /*6*/], "CREW_ARRAY_JEWEL_HIGH_IMPACT");
				break;
			case 4:
				func_635(uParam0[iVar0 /*6*/], "CREW_ARRAY_DOCKS_DEEP_SEA");
				break;
			case 3:
				func_635(uParam0[iVar0 /*6*/], "CREW_ARRAY_DOCKS_BLOW_UP_BOAT");
				break;
			case 5:
				func_635(uParam0[iVar0 /*6*/], "CREW_ARRAY_RURAL_NO_TANK");
				break;
			case 6:
				func_635(uParam0[iVar0 /*6*/], "CREW_ARRAY_AGENCY_FIRETRUCK");
				break;
			case 7:
				func_635(uParam0[iVar0 /*6*/], "CREW_ARRAY_AGENCY_HELICOPTER");
				break;
			case 8:
				func_635(uParam0[iVar0 /*6*/], "CREW_ARRAY_FINALE_TRAFFCONT");
				break;
			case 9:
				func_635(uParam0[iVar0 /*6*/], "CREW_ARRAY_FINALE_HELI");
				break;
			default:
				break;
		}
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_635(var* uParam0, char* sParam1)//Position - 0x7E8E9
{
	int iVar0;
	char cVar1[16];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "Crew_Slot_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_636(var* uParam0, char* sParam1)//Position - 0x7E92B
{
	int iVar0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iVar0)
		{
			case 0:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Jewel_Crew_Help_Displayed");
				break;
			case 1:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Docks_Crew_Help_Displayed");
				break;
			case 2:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Rural_Crew_Help_Displayed");
				break;
			case 3:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Agency_Crew_Help_Displayed");
				break;
			case 4:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Finale_Crew_Help_Displayed");
				break;
		}
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_637(var* uParam0, char* sParam1)//Position - 0x7E9D1
{
	int iVar0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iVar0)
		{
			case 0:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Jewel_Choice_Help_Displayed");
				break;
			case 1:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Docks_Choice_Help_Displayed");
				break;
			case 2:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Rural_Choice_Help_Displayed");
				break;
			case 3:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Agency_Choice_Help_Displayed");
				break;
			case 4:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Finale_Choice_Help_Displayed");
				break;
		}
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_638()//Position - 0x7EA77
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_10016), 33, "FLOW_CUSTOM_STRUCT");
	func_644(&(Global_113386.f_10016), "MF_STRANDS_TO_OVERRIDE_ARRAY");
	func_643(&(Global_113386.f_10016.f_4), "MF_COMMAND_POINTER_OVERRIDE_ARRAY");
	func_642(&(Global_113386.f_10016.f_8), "MF_COMMAND_POINTER_HASH_ID_ARRAY");
	func_641(&(Global_113386.f_10016.f_12), "MF_MISSION_TO_UNCOMPLETE");
	func_640(&(Global_113386.f_10016.f_16), "MF_APPLY_ON_MP_SWITCH_ONLY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10016.f_20), "numberStoredOverrides");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10016.f_21), "iMissionsCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10016.f_22), "iMissionGolds");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_10016.f_23), "wasFadedOut");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_10016.f_24), "wasFadedOut_switch");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10016.f_25), "spInitBitset");
	func_639(&(Global_113386.f_10016.f_26), "MF_MISS_FIRST_ACTIVATE_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10016.f_30), "iFirstPersonCoverHelpCountMission");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10016.f_31), "iFirstPersonCoverHelpCountFlow");
	MISC::REGISTER_INT_TO_SAVE(&(Global_113386.f_10016.f_32), "iVehDuckHelpCount");
	MISC::STOP_SAVE_STRUCT();
}

void func_639(var* uParam0, char* sParam1)//Position - 0x7EBA1
{
	int iVar0;
	char cVar1[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "FIRST_ACTIVATION_BITSET_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_640(var* uParam0, char* sParam1)//Position - 0x7EBE3
{
	int iVar0;
	char cVar1[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "APPLY_ON_MP_SWITCH_ONLY_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_641(var* uParam0, char* sParam1)//Position - 0x7EC25
{
	int iVar0;
	char cVar1[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "MISSION_TO_UNCOMPLETE_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_642(var* uParam0, char* sParam1)//Position - 0x7EC67
{
	int iVar0;
	char cVar1[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "COMMAND_POINTER_HASH_ID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_643(var* uParam0, char* sParam1)//Position - 0x7ECA9
{
	int iVar0;
	char cVar1[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "COMMAND_POINTER_OVERRIDE_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_644(var* uParam0, char* sParam1)//Position - 0x7ECEB
{
	int iVar0;
	char cVar1[64];
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "STRAND_TO_OVERRIDE_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void registerFLOW_STRUCT()//Position - 0x7ED2D
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive), 931, "FLOW_STRUCT");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive), "isGameflowActive");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_1_flowCompleted), "flowCompleted");
	func_653(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY), "MF_STRANDS_ARRAY");
	func_648(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT), "MF_CONTROLS_STRUCT");
	func_646(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY), "MF_MISSION_ARRAY");
	MISC::STOP_SAVE_STRUCT();
}

void func_646(var* uParam0, char* sParam1)//Position - 0x7EDA5
{
	int iVar0;
	struct<8> Var1;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 601, sParam1);
	iVar0 = 0;
	while (iVar0 < 100)
	{
		StringCopy(&Var1, "MF_MISSION_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_647(uParam0[iVar0 /*6*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_647(var* uParam0, char* sParam1)//Position - 0x7EDEA
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 6, sParam1);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, "completed");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "missionFailsNoProgress");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "missionFailsTotal");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iCompletionOrder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iScore");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5), "fStatCompletion");
	MISC::STOP_SAVE_STRUCT();
}

void func_648(var* uParam0, char* sParam1)//Position - 0x7EE4B
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 231, sParam1);
	func_652(uParam0, "MF_CONTROL_SYNCIDS");
	func_651(&(uParam0->f_58), "MF_CONTROL_FLAGIDS");
	func_650(&(uParam0->f_205), "MF_CONTROL_INTIDS");
	func_649(&(uParam0->f_219), "MF_CONTROL_BITSETIDS");
	MISC::STOP_SAVE_STRUCT();
}

void func_649(var* uParam0, char* sParam1)//Position - 0x7EE93
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 12, sParam1);
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&cVar1, "BITS_MINIGAME_ACTIVE", 32);
				break;
			case 1:
				StringCopy(&cVar1, "BITS_H_DISABLE_BOARD_EXIT", 32);
				break;
			case 2:
				StringCopy(&cVar1, "BITS_H_TOGGLE_BOARD", 32);
				break;
			case 3:
				StringCopy(&cVar1, "BITS_H_POI_OVERVIEW_DONE", 32);
				break;
			case 4:
				StringCopy(&cVar1, "BITS_H_CREW_SELECTED", 32);
				break;
			case 5:
				StringCopy(&cVar1, "BITS_H_CHOICE_SELECTED", 32);
				break;
			case 6:
				StringCopy(&cVar1, "BITS_FR_CHANGED_HAIRCUT", 32);
				break;
			case 7:
				StringCopy(&cVar1, "BITS_FR_CHANGED_OUTFIT", 32);
				break;
			case 8:
				StringCopy(&cVar1, "BITS_MI_VISITED_GYM", 32);
				break;
			case 9:
				StringCopy(&cVar1, "BITS_RST_FLOWLAUNCH_SCS1", 32);
				break;
			case 10:
				StringCopy(&cVar1, "BITS_RST_FLOWLAUNCH_SCS2", 32);
				break;
			default:
				StringCopy(&cVar1, "BitsetIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_650(var* uParam0, char* sParam1)//Position - 0x7EFAE
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 14, sParam1);
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&cVar1, "INT_H_TRIGGER_HEIST", 32);
				break;
			case 1:
				StringCopy(&cVar1, "INT_H_TRIGGER_MISSION", 32);
				break;
			case 2:
				StringCopy(&cVar1, "INT_H_BOARD_M_JEWEL", 32);
				break;
			case 3:
				StringCopy(&cVar1, "INT_H_BOARD_M_DOCKS", 32);
				break;
			case 4:
				StringCopy(&cVar1, "INT_H_BOARD_M_RURAL", 32);
				break;
			case 5:
				StringCopy(&cVar1, "INT_H_BOARD_M_AGENCY", 32);
				break;
			case 6:
				StringCopy(&cVar1, "INT_H_BOARD_M_FINALE", 32);
				break;
			case 7:
				StringCopy(&cVar1, "INT_HEIST_CHOICE_JEWEL", 32);
				break;
			case 8:
				StringCopy(&cVar1, "INT_HEIST_CHOICE_DOCKS", 32);
				break;
			case 9:
				StringCopy(&cVar1, "INT_HEIST_CHOICE_RURAL", 32);
				break;
			case 10:
				StringCopy(&cVar1, "INT_HEIST_CHOICE_AGENCY", 32);
				break;
			case 11:
				StringCopy(&cVar1, "INT_HEIST_CHOICE_FINALE", 32);
				break;
			case 12:
				StringCopy(&cVar1, "INT_MISS_CHOICE_FINALE", 32);
				break;
			default:
				StringCopy(&cVar1, "IntIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_651(var* uParam0, char* sParam1)//Position - 0x7F0ED
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 147, sParam1);
	iVar0 = 0;
	while (iVar0 < 146)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&cVar1, "FLAG_H_BOARD_UNDO", 32);
				break;
			case 1:
				StringCopy(&cVar1, "FLAG_H_FIN_DOCKS", 32);
				break;
			case 2:
				StringCopy(&cVar1, "FLAG_H_FIN_AGENCY", 32);
				break;
			case 4:
				StringCopy(&cVar1, "FLAG_H_FIN_JEWEL", 32);
				break;
			case 5:
				StringCopy(&cVar1, "FLAG_H_FIN_RURALBANK", 32);
				break;
			case 3:
				StringCopy(&cVar1, "FLAG_H_FIN_FINALE", 32);
				break;
			case 6:
				StringCopy(&cVar1, "FLAG_H_AGENCY_PRIME_BOARD", 32);
				break;
			case 8:
				StringCopy(&cVar1, "FLAG_H_AGENCY_DO_B_EXIT", 32);
				break;
			case 7:
				StringCopy(&cVar1, "FLAG_H_AGENCY_LOAD_B_EXIT", 32);
				break;
			case 9:
				StringCopy(&cVar1, "FLAG_H_AGENCY_CALLS_COMPLETE", 32);
				break;
			case 10:
				StringCopy(&cVar1, "FLAG_H_AGENCY_2_UNLOCKED", 32);
				break;
			case 11:
				StringCopy(&cVar1, "FLAG_H_AGENCY_2_AUTOTRIG", 32);
				break;
			case 13:
				StringCopy(&cVar1, "FLAG_H_AGENCY_FT_GOT_WANTED", 32);
				break;
			case 12:
				StringCopy(&cVar1, "FLAG_H_AGENCY_P_2_DONE", 32);
				break;
			case 14:
				StringCopy(&cVar1, "FLAG_H_AGENCY_P_CALLS_DONE", 32);
				break;
			case 20:
				StringCopy(&cVar1, "FLAG_H_DOCKS_PRIME_BOARD", 32);
				break;
			case 22:
				StringCopy(&cVar1, "FLAG_H_DOCKS_DO_B_EXIT", 32);
				break;
			case 21:
				StringCopy(&cVar1, "FLAG_H_DOCKS_LOAD_B_EXIT", 32);
				break;
			case 23:
				StringCopy(&cVar1, "FLAG_DOCKS_PRE_H_TEXTS_DONE", 32);
				break;
			case 24:
				StringCopy(&cVar1, "FLAG_H_FINALE_PRIME_BOARD", 32);
				break;
			case 25:
				StringCopy(&cVar1, "FLAG_H_FINALE_LOAD_B_EXIT", 32);
				break;
			case 26:
				StringCopy(&cVar1, "FLAG_H_FINALE_DO_B_EXIT", 32);
				break;
			case 27:
				StringCopy(&cVar1, "FLAG_H_FINALE_P_GOT_WANTED", 32);
				break;
			case 28:
				StringCopy(&cVar1, "FLAG_H_FINALE_PA_CALLS_DONE", 32);
				break;
			case 29:
				StringCopy(&cVar1, "FLAG_H_FINALE_PB_CALLS_DONE", 32);
				break;
			case 30:
				StringCopy(&cVar1, "FLAG_H_FINALE_PC_EMAIL_DONE", 32);
				break;
			case 31:
				StringCopy(&cVar1, "FLAG_H_FINALE_PC_1_STOLEN", 32);
				break;
			case 32:
				StringCopy(&cVar1, "FLAG_H_FINALE_PC_2_STOLEN", 32);
				break;
			case 33:
				StringCopy(&cVar1, "FLAG_H_FINALE_PC_3_STOLEN", 32);
				break;
			case 34:
				StringCopy(&cVar1, "FLAG_H_FINALE_P_E_DONE", 32);
				break;
			case 35:
				StringCopy(&cVar1, "FLAG_H_FINALE_P_E_PLACE", 32);
				break;
			case 36:
				StringCopy(&cVar1, "FLAG_H_FINALE_2_READY", 32);
				break;
			case 15:
				StringCopy(&cVar1, "FLAG_H_JEWEL_P2A_R", 32);
				break;
			case 16:
				StringCopy(&cVar1, "FLAG_H_JEWEL_PRIME_BOARD", 32);
				break;
			case 18:
				StringCopy(&cVar1, "FLAG_H_JEWEL_DO_B_EXIT", 32);
				break;
			case 17:
				StringCopy(&cVar1, "FLAG_H_JEWEL_LOAD_B_EXIT", 32);
				break;
			case 19:
				StringCopy(&cVar1, "FLAG_H_JEWEL_RUN", 32);
				break;
			case 37:
				StringCopy(&cVar1, "FLAG_H_RURAL_LOAD_MIKE_WIN", 32);
				break;
			case 38:
				StringCopy(&cVar1, "FLAG_H_RURAL_LOAD_TREV_WIN", 32);
				break;
			case 39:
				StringCopy(&cVar1, "FLAG_H_RURAL_LOAD_B_EXIT", 32);
				break;
			case 40:
				StringCopy(&cVar1, "FLAG_H_RURAL_DO_B_EXIT", 32);
				break;
			case 41:
				StringCopy(&cVar1, "FLAG_H_RURAL_PREP_CALL_DONE", 32);
				break;
			case 52:
				StringCopy(&cVar1, "FLAG_ALLOW_RANDOM_EVENTS", 32);
				break;
			case 53:
				StringCopy(&cVar1, "FLAG_ALLOW_CINEMA", 32);
				break;
			case 54:
				StringCopy(&cVar1, "FLAG_ALLOW_COMEDYCLUB", 32);
				break;
			case 55:
				StringCopy(&cVar1, "FLAG_ALLOW_LIVEMUSIC", 32);
				break;
			case 56:
				StringCopy(&cVar1, "FLAG_ALLOW_SHOP_ROBBERIES", 32);
				break;
			case 57:
				StringCopy(&cVar1, "FLOW_BLOCK_SH_FOR_SAVE", 32);
				break;
			case 58:
				StringCopy(&cVar1, "FLAG_T_RESTRICT_COUNTRY", 32);
				break;
			case 59:
				StringCopy(&cVar1, "FLAG_T_RESTRICT_CITY", 32);
				break;
			case 60:
				StringCopy(&cVar1, "FLOWFLAG_F_FROZEN_POST_PRO", 32);
				break;
			case 63:
				StringCopy(&cVar1, "FLAG_CHOP_DOG_UNLOCKED", 32);
				break;
			case 64:
				StringCopy(&cVar1, "FLAG_CAR3_INITIALISED", 32);
				break;
			case 65:
				StringCopy(&cVar1, "FLAG_MOVIE_STUDIO_OPEN", 32);
				break;
			case 66:
				StringCopy(&cVar1, "FLAG_MOVIE_STUDIO_OPEN_FRAN", 32);
				break;
			case 67:
				StringCopy(&cVar1, "FLAG_AIR_VEH_PARA_UNLOCKED", 32);
				break;
			case 68:
				StringCopy(&cVar1, "FLAG_WATER_VEH_SCUBA_UNLOCKED", 32);
				break;
			case 69:
				StringCopy(&cVar1, "FLAG_OFFR_RACE_UNLOCK_ALL", 32);
				break;
			case 70:
				StringCopy(&cVar1, "FLAG_RUN_BUILDSITE_AMB_AUD", 32);
				break;
			case 71:
				StringCopy(&cVar1, "FLAG_MICHAEL_D_FLYING_LES", 32);
				break;
			case 61:
				StringCopy(&cVar1, "FLOWFLAG_ARM1_CAR_DAMAGED", 32);
				break;
			case 62:
				StringCopy(&cVar1, "FLAG_STRETCH_TEXT_SENT", 32);
				break;
			case 72:
				StringCopy(&cVar1, "FLAG_ARM3_STRIPSWITCH_AVAIL", 32);
				break;
			case 73:
				StringCopy(&cVar1, "FLAG_DARTS_YELLOW_JACK_AV", 32);
				break;
			case 74:
				StringCopy(&cVar1, "FLAG_RES_AND_RCS_UNLOCKED", 32);
				break;
			case 75:
				StringCopy(&cVar1, "FLAG_EXILE1_PICKUPS_UNLOCKED", 32);
				break;
			case 76:
				StringCopy(&cVar1, "FLAG_CAR2_KILLED_MULLIGAN", 32);
				break;
			case 77:
				StringCopy(&cVar1, "FLAG_FRAN_DONE_ACT_WITH_LAM", 32);
				break;
			case 78:
				StringCopy(&cVar1, "FLAG_TREV_DONE_ACT_WITH_LAM", 32);
				break;
			case 79:
				StringCopy(&cVar1, "FLOWFLAG_AMANDA_M_EV_SKIPPED", 32);
				break;
			case 80:
				StringCopy(&cVar1, "FLOWFLAG_SHRINK_KILLED", 32);
				break;
			case 81:
				StringCopy(&cVar1, "FLOWFLAG_BLOCK_F_MISSIONS_FOR_T", 32);
				break;
			case 82:
				StringCopy(&cVar1, "FLAG_GUNRANGE_TUTORIAL_DONE", 32);
				break;
			case 83:
				StringCopy(&cVar1, "FLAG_WILD_PHOTO_UNLOCKED", 32);
				break;
			case 84:
				StringCopy(&cVar1, "FLAG_BARRY3_TEXT_RECEIVED", 32);
				break;
			case 85:
				StringCopy(&cVar1, "FLAG_BARRY4_TEXT_RECEIVED", 32);
				break;
			case 86:
				StringCopy(&cVar1, "FLAG_EPSILON_QUESTIONNAIRE_DONE", 32);
				break;
			case 87:
				StringCopy(&cVar1, "FLAG_EPSILON_DONATED_500", 32);
				break;
			case 88:
				StringCopy(&cVar1, "FLAG_EPSILON_DONATED_5000", 32);
				break;
			case 89:
				StringCopy(&cVar1, "FLAG_EPSILON_DONATED_10000", 32);
				break;
			case 90:
				StringCopy(&cVar1, "FLAG_EPSILON_CARS_DONE", 32);
				break;
			case 91:
				StringCopy(&cVar1, "FLAG_EPSILON_ROBES_BOUGHT", 32);
				break;
			case 92:
				StringCopy(&cVar1, "FLAG_EPSILON_ROBES_DONE", 32);
				break;
			case 93:
				StringCopy(&cVar1, "FLAG_EPSILON_6_TEXT_RECEIVED", 32);
				break;
			case 94:
				StringCopy(&cVar1, "FLAG_EPSILON_DESERT_DONE", 32);
				break;
			case 95:
				StringCopy(&cVar1, "FLAG_EPSILON_UNLOCKED_TRACT", 32);
				break;
			case 96:
				StringCopy(&cVar1, "FLAG_EXTREME2_TEXT_RECEIVED", 32);
				break;
			case 97:
				StringCopy(&cVar1, "FLAG_EXTREME3_TEXT_RECEIVED", 32);
				break;
			case 98:
				StringCopy(&cVar1, "FLAG_EXTREME4_BJUMPS_FINISHED", 32);
				break;
			case 99:
				StringCopy(&cVar1, "FLAG_HUNTINTG1_TEXT_RECEIVED", 32);
				break;
			case 100:
				StringCopy(&cVar1, "FLAG_NIGEL1_EMAIL_RECEIVED", 32);
				break;
			case 101:
				StringCopy(&cVar1, "FLAG_NIGEL3_NAPOLI_KILLED", 32);
				break;
			case 102:
				StringCopy(&cVar1, "FLAG_PAPARAZZO3_TEXT_RECEIVED", 32);
				break;
			case 103:
				StringCopy(&cVar1, "FLAG_TONYA3_TEXT_RECEIVED", 32);
				break;
			case 104:
				StringCopy(&cVar1, "FLAG_TONYA4_TEXT_RECEIVED", 32);
				break;
			case 105:
				StringCopy(&cVar1, "FLAG_FOR_SALE_SIGNS_DESTROYED", 32);
				break;
			case 106:
				StringCopy(&cVar1, "FLAG_LETTER_SCRAPS_DONE", 32);
				break;
			case 107:
				StringCopy(&cVar1, "FLAG_SPACESHIP_PARTS_DONE", 32);
				break;
			case 108:
				StringCopy(&cVar1, "FLAG_ALL_RAMPAGES_UNLOCKED", 32);
				break;
			case 109:
				StringCopy(&cVar1, "FLAG_PURCHASED_MARINA_PROPERTY", 32);
				break;
			case 118:
				StringCopy(&cVar1, "FLAG_PLAYER_VEH_F_UNLOCK_BIKE", 32);
				break;
			case 119:
				StringCopy(&cVar1, "FLAG_PLAYER_VEH_T_UNLOCK_RJAM", 32);
				break;
			case 115:
				StringCopy(&cVar1, "FLAG_PLAYER_PED_INTRODUCED_M", 32);
				break;
			case 116:
				StringCopy(&cVar1, "FLAG_PLAYER_PED_INTRODUCED_F", 32);
				break;
			case 117:
				StringCopy(&cVar1, "FLAG_PLAYER_PED_INTRODUCED_T", 32);
				break;
			case 120:
				StringCopy(&cVar1, "FLAG_MIC_HAS_HAGGARD_SUIT", 32);
				break;
			case 121:
				StringCopy(&cVar1, "FLAG_MIC_SET_HAGGARD_SUIT", 32);
				break;
			case 122:
				StringCopy(&cVar1, "FLAG_MIC_REM_HAGGARD_SUIT", 32);
				break;
			case 123:
				StringCopy(&cVar1, "FLOW_MIC_HIDE_BARE_CHEST", 32);
				break;
			case 124:
				StringCopy(&cVar1, "FLOW_MIC_PRO_MASK_REMOVED", 32);
				break;
			case 125:
				StringCopy(&cVar1, "FLOW_TRV_PRO_MASK_REMOVED", 32);
				break;
			case 42:
				StringCopy(&cVar1, "FLAG_UNLOCK_LAMAR_1", 32);
				break;
			case 43:
				StringCopy(&cVar1, "FLAG_FRANK1_MC_CLIPPED", 32);
				break;
			case 44:
				StringCopy(&cVar1, "FLAG_FBI_3_CALLS_DONE", 32);
				break;
			case 45:
				StringCopy(&cVar1, "FLAG_FBI_4_PREP_3_COMPLETED", 32);
				break;
			case 46:
				StringCopy(&cVar1, "FLAG_FBI_4_UNLOCKED_FROM_P", 32);
				break;
			case 47:
				StringCopy(&cVar1, "FLAG_FBI_4_CALLS_DONE", 32);
				break;
			case 48:
				StringCopy(&cVar1, "FLAG_ASS_1_UNLOCKED", 32);
				break;
			case 49:
				StringCopy(&cVar1, "FLAG_ASS_COMPLETED", 32);
				break;
			case 50:
				StringCopy(&cVar1, "FLAG_MICHAEL_4_TEXTS_DONE", 32);
				break;
			case 51:
				StringCopy(&cVar1, "FLAG_MARTIN_1_CALLS_DONE", 32);
				break;
			case 126:
				StringCopy(&cVar1, "FLAG_F_MOVED_TO_HILLS_APART", 32);
				break;
			case 127:
				StringCopy(&cVar1, "FLAG_M_F_ARE_FRIENDS", 32);
				break;
			case 128:
				StringCopy(&cVar1, "FLAG_M_A_HAVE_SPLIT", 32);
				break;
			case 129:
				StringCopy(&cVar1, "FLAG_M_A_HAVE_FALLEN_OUT", 32);
				break;
			case 130:
				StringCopy(&cVar1, "FLAG_M_T_EXILE_STARTED", 32);
				break;
			case 131:
				StringCopy(&cVar1, "FLAG_M_T_EXILE_FINISHED", 32);
				break;
			case 132:
				StringCopy(&cVar1, "FLAG_ORTEGA_KILLED", 32);
				break;
			case 133:
				StringCopy(&cVar1, "FLAG_GAME_100_PERC_COMP", 32);
				break;
			case 134:
				StringCopy(&cVar1, "FLAG_FINAL_CHOICE_MADE", 32);
				break;
			case 135:
				StringCopy(&cVar1, "FLAG_MICHAEL_KILLED", 32);
				break;
			case 136:
				StringCopy(&cVar1, "FLAG_TREVOR_KILLED", 32);
				break;
			case 137:
				StringCopy(&cVar1, "FLAG_RESPAWNED_AFTER_FIN", 32);
				break;
			case 110:
				StringCopy(&cVar1, "FLAG_DIVING_SCRAPS_DONE", 32);
				break;
			case 138:
				StringCopy(&cVar1, "FLAG_PLAYER_HAS_USED_FP_VIEW", 32);
				break;
			case 111:
				StringCopy(&cVar1, "FLAG_MIKE_CON_BOUGHT", 32);
				break;
			case 112:
				StringCopy(&cVar1, "FLAG_FRANK_CON_BOUGHT", 32);
				break;
			case 113:
				StringCopy(&cVar1, "FLAG_TREV_CON_BOUGHT", 32);
				break;
			case 114:
				StringCopy(&cVar1, "FLAG_BEV_SENT_WILD_TXT", 32);
				break;
			case 139:
				StringCopy(&cVar1, "FLAG_SENT_PROX_MINE_EMAIL", 32);
				break;
			case 140:
				StringCopy(&cVar1, "FLAG_SENT_MISSILE_EMAIL", 32);
				break;
			case 141:
				StringCopy(&cVar1, "FLAG_SENT_DLC_WEAPON_EMAIL_1", 32);
				break;
			case 143:
				StringCopy(&cVar1, "FLAG_SENT_DLC_WEAPON_EMAIL_2", 32);
				break;
			case 142:
				StringCopy(&cVar1, "FLAG_SENT_DLC_WEAPON_EMAIL_3", 32);
				break;
			case 144:
				StringCopy(&cVar1, "FLAG_SENT_DLC_WEAPON_EMAIL_4", 32);
				break;
			case 145:
				StringCopy(&cVar1, "FLAG_SENT_DLC_WEAPON_EMAIL_5", 32);
				break;
			default:
				StringCopy(&cVar1, "FlagIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_652(var* uParam0, char* sParam1)//Position - 0x7FB86
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 58, sParam1);
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&cVar1, "SYNC_ASSA3_TO_CARSTEAL1", 32);
				break;
			case 1:
				StringCopy(&cVar1, "SYNC_ASSA5_TO_EXILE1", 32);
				break;
			case 2:
				StringCopy(&cVar1, "SYNC_CAR_STEAL_TO_MICHAEL", 32);
				break;
			case 3:
				StringCopy(&cVar1, "SYNC_CAR_STEAL3_TO_MARTIN1", 32);
				break;
			case 4:
				StringCopy(&cVar1, "SYNC_CHINESE_TO_TREVOR", 32);
				break;
			case 5:
				StringCopy(&cVar1, "SYNC_DOCKS_HEISTP_TO_FBIO3", 32);
				break;
			case 6:
				StringCopy(&cVar1, "SYNC_DOCKSH_TO_DOCKSH_2", 32);
				break;
			case 7:
				StringCopy(&cVar1, "SYNC_EXILE2_TO_RURAL_H1", 32);
				break;
			case 8:
				StringCopy(&cVar1, "SYNC_EXILE3_TO_RURAL_H2", 32);
				break;
			case 9:
				StringCopy(&cVar1, "SYNC_FAMILY3_TO_TONYA1", 32);
				break;
			case 10:
				StringCopy(&cVar1, "SYNC_FAMILY2_TO_FRANKLIN0", 32);
				break;
			case 11:
				StringCopy(&cVar1, "SYNC_FAMILY_TO_FBI_OFF", 32);
				break;
			case 12:
				StringCopy(&cVar1, "SYNC_FAMILY_TO_TREVOR", 32);
				break;
			case 13:
				StringCopy(&cVar1, "SYNC_FAMILY6_TO_AGENCY1", 32);
				break;
			case 14:
				StringCopy(&cVar1, "SYNC_FBI_OFF4_TO_ASS1", 32);
				break;
			case 15:
				StringCopy(&cVar1, "SYNC_FBI_OFF4_TO_DOCKSH2", 32);
				break;
			case 16:
				StringCopy(&cVar1, "SYNC_FBI_OFF4_TO_FRANKLIN1", 32);
				break;
			case 17:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_FBI_OFF2", 32);
				break;
			case 18:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_FBI_OFF3", 32);
				break;
			case 19:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_FBI_OFF4", 32);
				break;
			case 20:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_FBI_OFF5", 32);
				break;
			case 21:
				StringCopy(&cVar1, "SYNC_FBI_OFF4_TO_DOCKS_H_P", 32);
				break;
			case 22:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_EXILE", 32);
				break;
			case 23:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_FAMILY", 32);
				break;
			case 24:
				StringCopy(&cVar1, "SYNC_FINALEH1_TO_SOL1B", 32);
				break;
			case 25:
				StringCopy(&cVar1, "SYNC_FINALEH_TO_MICHAEL4", 32);
				break;
			case 26:
				StringCopy(&cVar1, "SYNC_FINALEH_TO_FINALEH2", 32);
				break;
			case 27:
				StringCopy(&cVar1, "SYNC_FINALEH_TO_FINALEH3", 32);
				break;
			case 28:
				StringCopy(&cVar1, "SYNC_FINALEH_TO_FINALEH4", 32);
				break;
			case 29:
				StringCopy(&cVar1, "SYNC_FRANKLIN1_TO_LAMAR", 32);
				break;
			case 30:
				StringCopy(&cVar1, "SYNC_FRANKLIN1_TO_FBI_OFF2", 32);
				break;
			case 31:
				StringCopy(&cVar1, "SYNC_FRANKLIN2_TO_FAMILY6", 32);
				break;
			case 32:
				StringCopy(&cVar1, "SYNC_FRANKLIN2_TO_MICHAEL3", 32);
				break;
			case 33:
				StringCopy(&cVar1, "SYNC_JEWELHP_TO_FAMILY3", 32);
				break;
			case 34:
				StringCopy(&cVar1, "SYNC_JEWELH_TO_JEWELH2", 32);
				break;
			case 35:
				StringCopy(&cVar1, "SYNC_LAMAR1_TO_FRANKLIN0", 32);
				break;
			case 36:
				StringCopy(&cVar1, "SYNC_MARTIN1_TO_CAR_STEAL2", 32);
				break;
			case 37:
				StringCopy(&cVar1, "SYNC_MICHAEL1_TO_CARS3", 32);
				break;
			case 40:
				StringCopy(&cVar1, "SYNC_MICHAEL2_TO_CAR_STEAL4", 32);
				break;
			case 41:
				StringCopy(&cVar1, "SYNC_MICHAEL3_TO_AGENCYH", 32);
				break;
			case 38:
				StringCopy(&cVar1, "SYNC_MICHAEL4_TO_FRANKLIN2", 32);
				break;
			case 39:
				StringCopy(&cVar1, "SYNC_MICH4_TO_SOLOMON3", 32);
				break;
			case 42:
				StringCopy(&cVar1, "SYNC_MIKE_EV_J_TO_FAM6", 32);
				break;
			case 43:
				StringCopy(&cVar1, "SYNC_MIKE_EV_J_TO_MIC4", 32);
				break;
			case 44:
				StringCopy(&cVar1, "SYNC_RURALH2_TO_EXILE2", 32);
				break;
			case 47:
				StringCopy(&cVar1, "SYNC_SHRINK4_TO_EXILE1", 32);
				break;
			case 45:
				StringCopy(&cVar1, "SYNC_SHRINK2_TO_FAMILY4", 32);
				break;
			case 48:
				StringCopy(&cVar1, "SYNC_SHRINK5_TO_FAMILY6", 32);
				break;
			case 46:
				StringCopy(&cVar1, "SYNC_SHRINK3_TO_SOLOMON1", 32);
				break;
			case 49:
				StringCopy(&cVar1, "SYNC_SHRINK5_TO_SOLOMON3", 32);
				break;
			case 50:
				StringCopy(&cVar1, "SYNC_SHRINK5_TO_MICHAEL3", 32);
				break;
			case 51:
				StringCopy(&cVar1, "SYNC_SOLOMON2_TO_MICHAEL2", 32);
				break;
			case 52:
				StringCopy(&cVar1, "SYNC_SOLOMON3_TO_AGENCYH2", 32);
				break;
			case 53:
				StringCopy(&cVar1, "SYNC_SOLOMON3_TO_FAMILY6", 32);
				break;
			case 54:
				StringCopy(&cVar1, "SYNC_TREVOR2_TO_CHINESE1C", 32);
				break;
			case 55:
				StringCopy(&cVar1, "SYNC_TREVOR3_TO_CHINESE2", 32);
				break;
			case 56:
				StringCopy(&cVar1, "SYNC_TREVOR4_TO_FBIO5", 32);
				break;
			default:
				StringCopy(&cVar1, "SyncIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_653(var* uParam0, char* sParam1)//Position - 0x7FFDD
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 97, sParam1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = iVar0;
		switch (iVar2)
		{
			case 0:
				StringCopy(&Var1, "STRAND_AGENCY_HEIST", 32);
				break;
			case 2:
				StringCopy(&Var1, "STRAND_ASSASSINATIONS", 32);
				break;
			case 1:
				StringCopy(&Var1, "STRAND_ARMENIAN", 32);
				break;
			case 3:
				StringCopy(&Var1, "STRAND_CAR_STEAL", 32);
				break;
			case 4:
				StringCopy(&Var1, "STRAND_CHINESE", 32);
				break;
			case 5:
				StringCopy(&Var1, "STRAND_DOCKS_HEIST", 32);
				break;
			case 6:
				StringCopy(&Var1, "STRAND_DOCKS_HEIST_2", 32);
				break;
			case 7:
				StringCopy(&Var1, "STRAND_EXILE", 32);
				break;
			case 8:
				StringCopy(&Var1, "STRAND_FAMILY", 32);
				break;
			case 9:
				StringCopy(&Var1, "STRAND_FBI_OFFICERS", 32);
				break;
			case 10:
				StringCopy(&Var1, "STRAND_FBI_OFFICERS_2", 32);
				break;
			case 11:
				StringCopy(&Var1, "STRAND_FBI_OFFICERS_3", 32);
				break;
			case 12:
				StringCopy(&Var1, "STRAND_FBI_OFFICERS_4", 32);
				break;
			case 13:
				StringCopy(&Var1, "STRAND_FBI_OFFICERS_5", 32);
				break;
			case 14:
				StringCopy(&Var1, "STRAND_FINALE", 32);
				break;
			case 15:
				StringCopy(&Var1, "STRAND_FINALE_HEIST", 32);
				break;
			case 16:
				StringCopy(&Var1, "STRAND_FINALE_HEIST_2", 32);
				break;
			case 17:
				StringCopy(&Var1, "STRAND_FINALE_HEIST_3", 32);
				break;
			case 18:
				StringCopy(&Var1, "STRAND_FINALE_HEIST_4", 32);
				break;
			case 19:
				StringCopy(&Var1, "STRAND_FRANKLIN", 32);
				break;
			case 20:
				StringCopy(&Var1, "STRAND_JEWEL_HEIST", 32);
				break;
			case 21:
				StringCopy(&Var1, "STRAND_JEWEL_HEIST_2", 32);
				break;
			case 22:
				StringCopy(&Var1, "STRAND_LAMAR", 32);
				break;
			case 23:
				StringCopy(&Var1, "STRAND_LESTER", 32);
				break;
			case 24:
				StringCopy(&Var1, "STRAND_MARTIN", 32);
				break;
			case 25:
				StringCopy(&Var1, "STRAND_MICHAEL", 32);
				break;
			case 26:
				StringCopy(&Var1, "STRAND_MICHAEL_EVENTS", 32);
				break;
			case 27:
				StringCopy(&Var1, "STRAND_PROLOGUE", 32);
				break;
			case 28:
				StringCopy(&Var1, "STRAND_RURAL_BANK_HEIST", 32);
				break;
			case 29:
				StringCopy(&Var1, "STRAND_SHRINK", 32);
				break;
			case 30:
				StringCopy(&Var1, "STRAND_SOLOMON", 32);
				break;
			case 31:
				StringCopy(&Var1, "STRAND_TREVOR", 32);
				break;
			default:
				StringCopy(&Var1, "StrandDetails", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_654(uParam0[iVar0 /*3*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_654(var* uParam0, char* sParam1)//Position - 0x80273
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "flowStrandBitFlags");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "flowStrandCommandPos");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "flowStrandCommandHashID");
	MISC::STOP_SAVE_STRUCT();
}

void func_655()//Position - 0x802AD
{
	__LIB_39__::func_423();
	func_657(-1909.5134f, -573.3823f, 18.097f, -1909.5134f, -573.3823f, 18.097f, 144.3309f, 7, 263, "V_65_Main", 0);
	func_657(-1909.5134f, -573.3823f, 18.097f, -1909.5134f, -573.3823f, 18.097f, 144.3309f, 8, 263, "V_65_Main", 1);
	func_657(-1909.5134f, -573.3823f, 18.097f, -1909.5134f, -573.3823f, 18.097f, 144.3309f, 9, 263, "V_65_Main", 2);
	func_657(-813.603f, 179.4738f, 71.1531f, -813.603f, 179.4738f, 71.1531f, 111.1168f, 0, 0, "V_Michael_G_Hall", 0);
	func_657(1972.6061f, 3817.0444f, 32.4297f, 1972.6061f, 3817.0444f, 32.4297f, 210.6042f, 1, 1, "V_TrailerRm", 0);
	func_657(1972.6061f, 3817.0444f, 32.4297f, 1972.6061f, 3817.0444f, 32.4297f, 210.6042f, 2, 2, "V_TrailerRm", 2);
	func_657(-1151.7458f, -1518.1357f, 9.6346f, -1151.7458f, -1518.1357f, 9.6346f, 187.2844f, 3, 3, "rm_Lounge", 2);
	func_657(94.5723f, -1290.0817f, 28.7355f, 96.1503f, -1290.7251f, 28.2688f, 301.5321f, 4, 4, "strp3off", 2);
	func_657(-14.3803f, -1438.5143f, 31.2f, -14.3803f, -1438.5143f, 31.2f, 182.1964f, 5, 5, "V_57_HallRM", 1);
	func_657(7.119f, 536.6152f, 175.028f, 7.119f, 536.6152f, 175.028f, 336.5715f, 6, 6, "Lounge", 1);
	func_656();
}

void func_656()//Position - 0x8049B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if ((Global_95479[iVar0 /*10*/].f_3 == 0f && Global_95479[iVar0 /*10*/].f_3.f_1 == 0f) && Global_95479[iVar0 /*10*/].f_3.f_2 == 0f)
		{
		}
		iVar0++;
	}
}

void func_657(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x804ED
{
	int iVar0;
	if (iParam3 == 10)
	{
		return;
	}
	iVar0 = __LIB_12__::func_894(iParam6);
	Global_95479[iParam3 /*10*/].f_8 = MISC::REGISTER_SAVE_HOUSE(Param1, fParam2, sParam5, 0, iVar0);
	MISC::SET_SAVE_HOUSE(Global_95479[iParam3 /*10*/].f_8, true, true);
	Global_95479[iParam3 /*10*/] = { Param0 };
	Global_95479[iParam3 /*10*/].f_3 = { Param1 };
	Global_95479[iParam3 /*10*/].f_6 = fParam2;
	Global_95479[iParam3 /*10*/].f_7 = iParam4;
	Global_95479[iParam3 /*10*/].f_9 = iParam6;
	if (iParam4 != 263)
	{
		__LIB_14__::func_622(iParam4, 0, 0);
		__LIB_16__::func_615(iParam4);
		__LIB_30__::func_373(iParam4, 0);
		__LIB_38__::func_936(iParam4, 1, iParam6, 0);
		__LIB_37__::func_410(iParam4, Global_95479[iParam3 /*10*/]);
		__LIB_38__::func_932(iParam4, 1);
		__LIB_38__::func_933(iParam4, 40);
	}
}

void func_669()//Position - 0x80B56
{
	func_676(0, joaat("Player_Zero"), 1360, "CELL_101" /* GXT: Michael */, "CELL_301" /* GXT: CHAR_MICHAEL */, "CELL_401" /* GXT: Friend */, 0, 0, "NO_ANSMSG", 0, 8, 0, 0, 0, "CELL_1001" /* GXT: 3285550108 */, 0);
	func_676(2, joaat("Player_Two"), 2070, "CELL_102" /* GXT: Trevor */, "CELL_302" /* GXT: CHAR_TREVOR */, "CELL_402" /* GXT: Friend */, 2, 2, "NO_ANSMSG", 2, 9, 0, 0, 0, "CELL_1002" /* GXT: 2735550136 */, 2);
	func_676(1, joaat("Player_One"), 670, "CELL_103" /* GXT: Franklin */, "CELL_303" /* GXT: CHAR_FRANKLIN */, "CELL_403" /* GXT: Friend */, 1, 1, "NO_ANSMSG", 1, 16, 0, 0, 0, "CELL_1003" /* GXT: 3285550156 */, 1);
	func_676(3, joaat("A_M_Y_BeachVesp_01"), 240, "CELL_197" /* GXT: Multiplayer */, "CELL_195" /* GXT: Unknown */, "CELL_195" /* GXT: Unknown */, 166, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_676(10, 0, 340, "CELL_189" /* GXT: Conference */, "CELL_389" /* GXT: CHAR_STEVE_MIKE_CONF */, "CELL_489" /* GXT: ... */, 8, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091" /* GXT: Unknown */, 4);
	__LIB_0__::func_170(10, 0, 1);
	__LIB_0__::func_170(10, 1, 1);
	__LIB_0__::func_170(10, 2, 1);
	func_676(11, 0, 350, "CELL_190" /* GXT: Conference */, "CELL_390" /* GXT: CHAR_STEVE_TREV_CONF */, "CELL_489" /* GXT: ... */, 8, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091" /* GXT: Unknown */, 4);
	__LIB_0__::func_170(11, 0, 1);
	__LIB_0__::func_170(11, 1, 1);
	__LIB_0__::func_170(11, 2, 1);
	func_676(5, 0, 370, "CELL_191" /* GXT: Conference */, "CELL_391" /* GXT: CHAR_FRANK_TREV_CONF */, "CELL_489" /* GXT: ... */, 4, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091" /* GXT: Unknown */, 4);
	__LIB_0__::func_170(5, 0, 1);
	__LIB_0__::func_170(5, 1, 1);
	__LIB_0__::func_170(5, 2, 1);
	func_676(6, 0, 373, "CELL_E_277" /* GXT: Conference */, "CELL_E_382" /* GXT: CHAR_LEST_FRANK_CONF */, "CELL_489" /* GXT: ... */, 5, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091" /* GXT: Unknown */, 4);
	__LIB_0__::func_170(7, 0, 1);
	__LIB_0__::func_170(7, 1, 1);
	__LIB_0__::func_170(7, 2, 1);
	func_676(7, 0, 375, "CELL_E_278" /* GXT: Conference */, "CELL_E_383" /* GXT: CHAR_LEST_MIKE_CONF */, "CELL_489" /* GXT: ... */, 6, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091" /* GXT: Unknown */, 4);
	__LIB_0__::func_170(7, 0, 1);
	__LIB_0__::func_170(7, 1, 1);
	__LIB_0__::func_170(7, 2, 1);
	func_676(8, 0, 380, "CELL_192" /* GXT: Conference */, "CELL_392" /* GXT: CHAR_MIKE_FRANK_CONF */, "CELL_489" /* GXT: ... */, 7, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091" /* GXT: Unknown */, 4);
	__LIB_0__::func_170(8, 0, 1);
	__LIB_0__::func_170(8, 1, 1);
	__LIB_0__::func_170(8, 2, 1);
	func_676(9, 0, 390, "CELL_193" /* GXT: Conference */, "CELL_393" /* GXT: CHAR_MIKE_TREV_CONF */, "CELL_489" /* GXT: ... */, 8, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091" /* GXT: Unknown */, 4);
	__LIB_0__::func_170(9, 0, 1);
	__LIB_0__::func_170(9, 1, 1);
	__LIB_0__::func_170(9, 2, 1);
	func_676(4, 0, 360, "CELL_199" /* GXT: Conference */, "CELL_396" /* GXT: CHAR_ALL_PLAYERS_CONF */, "CELL_489" /* GXT: ... */, 3, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091" /* GXT: Unknown */, 4);
	__LIB_0__::func_170(4, 0, 1);
	__LIB_0__::func_170(4, 1, 1);
	__LIB_0__::func_170(4, 2, 1);
	func_676(12, joaat("IG_LesterCrest"), 1240, "CELL_111" /* GXT: Lester */, "CELL_311" /* GXT: CHAR_LESTER */, "CELL_411" /* GXT: Contact */, 11, 4, "LES_APH2", 7, 16, 0, 0, 0, "CELL_1011" /* GXT: 3465550102 */, 4);
	func_676(13, joaat("IG_LesterCrest"), 1240, "CELL_E_211" /* GXT: Lester Deathwish */, "CELL_E_311" /* GXT: CHAR_LESTER_DEATHWISH */, "CELL_411" /* GXT: Contact */, 11, 4, "LES_APH1", 7, 16, 0, 0, 0, "CELL_1048" /* GXT: 3465550160 */, 4);
	func_676(101, 0, 1950, "CELL_E_212" /* GXT: Sonar Collections */, "CELL_E_312" /* GXT: CHAR_DIAL_A_SUB */, "CELL_411" /* GXT: Contact */, 97, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1054" /* GXT: 2735550195 */, 4);
	func_676(146, 0, 120, "CELL_E_284" /* GXT: Acting Up */, "CELL_E_323" /* GXT: CHAR_ACTING_UP */, "CELL_E_385" /* GXT: CHAR_NOIR */, 136, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELLC_DIRECTOR" /* GXT: 199957825368 */, 4);
	func_676(102, joaat("A_C_Chop"), 361, "CELL_E_225" /* GXT: Chop */, "CELL_386" /* GXT: CHAR_CHOP */, "CELL_411" /* GXT: Contact */, 98, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_32" /* GXT: 5413183135 */, 4);
	func_676(134, 0, 980, "CELL_E_283" /* GXT: Isaac */, "CELL_E_322" /* GXT: CHAR_FILMNOIR */, "CELL_E_385" /* GXT: CHAR_NOIR */, 135, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_1006" /* GXT: 3285550119 */, 4);
	func_676(14, joaat("IG_JimmyDiSanto"), 1030, "CELL_124" /* GXT: Jimmy */, "CELL_324" /* GXT: CHAR_JIMMY */, "CELL_424" /* GXT: Jimmy */, 12, 4, "JIM_APH1", 4, 0, 0, 0, 0, "CELL_1024" /* GXT: 2735550143 */, 4);
	func_676(15, joaat("IG_TracyDiSanto"), 2050, "CELL_125" /* GXT: Tracey */, "CELL_325" /* GXT: CHAR_TRACEY */, "CELL_425" /* GXT: Tracey */, 13, 4, "TRA_APH1", 7, 1, 0, 0, 0, "CELL_1025" /* GXT: 2735550168 */, 4);
	func_676(16, joaat("IG_Abigail"), 110, "CELL_E_240" /* GXT: Abigail */, "CELL_E_377" /* GXT: CHAR_ABIGAIL */, "CELL_400" /* GXT: Contact */, 14, 4, "ABI_APH1", 7, 16, 0, 0, 0, "CELL_MN_27" /* GXT: 3465550126 */, 4);
	func_676(17, joaat("IG_AmandaTownley"), 150, "CELL_126" /* GXT: Amanda */, "CELL_326" /* GXT: CHAR_AMANDA */, "CELL_426" /* GXT: Amanda */, 15, 4, "AMA_APH1", 5, 2, 0, 0, 0, "CELL_1026" /* GXT: 3465550118 */, 4);
	func_676(18, joaat("IG_SiemonYetarian"), 1930, "CELL_127" /* GXT: Simeon */, "CELL_327" /* GXT: CHAR_SIMEON */, "CELL_427" /* GXT: Simeon */, 16, 4, "ANS_Sbusy", 7, 16, 0, 0, 0, "CELL_1027" /* GXT: 6115550120 */, 4);
	func_676(19, joaat("IG_LamarDavis"), 1210, "CELL_128" /* GXT: Lamar */, "CELL_328" /* GXT: CHAR_LAMAR */, "CELL_428" /* GXT: Lamar */, 17, 4, "LAM_APH1", 3, 6, 0, 0, 0, "CELL_1028" /* GXT: 3465550141 */, 4);
	func_676(20, joaat("IG_NervousRon"), 1880, "CELL_129" /* GXT: Ron */, "CELL_329" /* GXT: CHAR_RON */, "CELL_429" /* GXT: Ron */, 18, 4, "RON_APH1", 7, 10, 0, 0, 0, "CELL_1029" /* GXT: 3285550198 */, 4);
	func_676(21, joaat("IG_TaoCheng"), 340, "CELL_133" /* GXT: Cheng Jr. */, "CELL_332" /* GXT: CHAR_CHENG */, "CELL_432" /* GXT: Cheng */, 19, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1033" /* GXT: 6115550173 */, 4);
	func_676(22, joaat("IG_TaoCheng"), 320, "CELL_CEOA" /* GXT: CEO Assistant */, "CELL_AGBOSSPIC" /* GXT: CHAR_GANGAPP */, "CELL_432" /* GXT: Cheng */, 20, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_12" /* GXT: 3465550144 */, 4);
	func_676(23, joaat("IG_SteveHains"), 1970, "CELL_134" /* GXT: Steve */, "CELL_333" /* GXT: CHAR_STEVE */, "CELL_433" /* GXT: Steve */, 21, 4, "STE_APH1", 7, 16, 0, 0, 0, "CELL_1034" /* GXT: 3285550150 */, 4);
	func_676(24, joaat("IG_Wade"), 2300, "CELL_135" /* GXT: Wade */, "CELL_334" /* GXT: CHAR_WADE */, "CELL_434" /* GXT: Wade */, 22, 4, "WAD_APH1", 7, 16, 0, 0, 0, "CELL_1035" /* GXT: 3465550166 */, 4);
	func_676(25, joaat("ig_TennisCoach"), 2020, "CELL_136" /* GXT: Tennis Coach */, "CELL_335" /* GXT: CHAR_TENNIS_COACH */, "CELL_435" /* GXT: Tennis Coach */, 23, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1036" /* GXT: 6115550191 */, 4);
	func_676(26, joaat("IG_Solomon"), 1950, "CELL_137" /* GXT: Solomon */, "CELL_336" /* GXT: CHAR_SOLOMON */, "CELL_436" /* GXT: Solomon */, 24, 4, "SOL_APH1", 7, 16, 0, 0, 0, "CELL_1037" /* GXT: 3285550123 */, 4);
	func_676(27, joaat("IG_Lazlow"), 1220, "CELL_138" /* GXT: Lazlow */, "CELL_337" /* GXT: CHAR_LAZLOW */, "CELL_437" /* GXT: Lazlow */, 25, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1038" /* GXT: 6115550100 */, 4);
	func_676(28, joaat("A_M_Y_Business_01"), 560, "CELL_139" /* GXT: Estate Agent */, "CELL_338" /* GXT: CHAR_ESTATE_AGENT */, "CELL_438" /* GXT: Estate Agent */, 26, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1039" /* GXT: 3465550170 */, 4);
	func_676(29, joaat("IG_Devin"), 450, "CELL_142" /* GXT: Devin */, "CELL_342" /* GXT: CHAR_DEVIN */, "CELL_442" /* GXT: Devin */, 27, 4, "DEV_APH1", 7, 16, 0, 0, 0, "CELL_1042" /* GXT: 3285550182 */, 4);
	func_676(30, joaat("IG_DaveNorton"), 420, "CELL_143" /* GXT: Dave */, "CELL_343" /* GXT: CHAR_DAVE */, "CELL_443" /* GXT: Dave */, 28, 4, "DAV_APH1", 7, 16, 0, 0, 0, "CELL_1043" /* GXT: 2735550132 */, 4);
	func_676(31, joaat("A_M_Y_Business_01"), 1330, "CELL_144" /* GXT: Martin */, "CELL_344" /* GXT: CHAR_MARTIN */, "CELL_444" /* GXT: Martin */, 29, 4, "ANS_MMbusy", 7, 16, 0, 0, 0, "CELL_1044" /* GXT: 3465550188 */, 4);
	func_676(32, joaat("IG_Floyd"), 650, "CELL_145" /* GXT: Floyd */, "CELL_345" /* GXT: CHAR_FLOYD */, "CELL_445" /* GXT: Floyd */, 30, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1074" /* GXT: 2735550164 */, 4);
	func_676(33, joaat("A_M_Y_Business_01"), 1380, "CELL_146" /* GXT: Military Hitcher */, "CELL_346" /* GXT: CHAR_GAYMILITARY */, "CELL_401" /* GXT: Friend */, 31, 4, "MIL_APH1", 7, 16, 0, 0, 0, "CELL_1045" /* GXT: 3285550145 */, 4);
	func_676(34, joaat("G_M_Y_MexGoon_02"), 1590, "CELL_164" /* GXT: Oscar */, "CELL_363" /* GXT: CHAR_OSCAR */, "CELL_400" /* GXT: Contact */, 32, 4, "OSC_APH1", 7, 16, 0, 0, 0, "CELL_1063" /* GXT: 2735550125 */, 4);
	func_676(35, joaat("IG_ChengSr"), 355, "CELL_200" /* GXT: Cheng Sr. */, "CELL_395" /* GXT: CHAR_CHENGSR */, "CELL_494" /* GXT: Contact */, 33, 4, "CHE_APH1", 7, 16, 0, 0, 0, "CELL_1066" /* GXT: 3285550190 */, 4);
	func_676(36, joaat("IG_DrFriedlander"), 492, "CELL_121" /* GXT: Dr. Friedlander */, "CELL_397" /* GXT: CHAR_DR_FRIEDLANDER */, "CELL_496" /* GXT: Dr. Friedlander */, 34, 4, "SHR_APH1", 7, 16, 0, 0, 0, "CELL_1067" /* GXT: 3465550134 */, 4);
	func_676(37, joaat("IG_Stretch"), 1977, "CELL_122" /* GXT: Stretch */, "CELL_322" /* GXT: CHAR_STRETCH */, "CELL_422" /* GXT: Stretch */, 35, 4, "STR_APH1", 7, 16, 0, 0, 0, "CELL_1068" /* GXT: 3465550122 */, 4);
	func_676(38, joaat("IG_Ortega"), 1580, "CELL_123" /* GXT: Ortega */, "CELL_323" /* GXT: CHAR_ORTEGA */, "CELL_423" /* GXT: Ortega */, 36, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1069" /* GXT: 3285550164 */, 4);
	func_676(39, joaat("A_M_M_Farmer_01"), 1570, "CELL_E_208" /* GXT: O'Neil */, "CELL_381" /* GXT: CHAR_ONEIL */, "CELL_400" /* GXT: Contact */, 37, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1059" /* GXT: 3285550126 */, 4);
	func_676(40, joaat("IG_Patricia"), 1620, "CELL_E_210" /* GXT: Patricia */, "CELL_382" /* GXT: CHAR_PATRICIA */, "CELL_400" /* GXT: Contact */, 38, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1071" /* GXT: 3285550110 */, 4);
	func_676(43, joaat("IG_Tanisha"), 2010, "CELL_E_218" /* GXT: Tanisha */, "CELL_384" /* GXT: CHAR_TANISHA */, "CELL_400" /* GXT: Contact */, 41, 4, "TAN_APH1", 7, 16, 0, 0, 0, "CELL_1073" /* GXT: 3285550180 */, 4);
	func_676(44, joaat("IG_Denise"), 440, "CELL_E_226" /* GXT: Denise */, "CELL_387" /* GXT: CHAR_DENISE */, "CELL_400" /* GXT: Contact */, 42, 4, "DEN_APH1", 7, 16, 0, 0, 0, "CELL_1074" /* GXT: 2735550164 */, 4);
	func_676(45, joaat("IG_Molly"), 1360, "CELL_E_227" /* GXT: Molly */, "CELL_388" /* GXT: CHAR_MOLLY */, "CELL_400" /* GXT: Contact */, 43, 4, "MOL_APH1", 7, 16, 0, 0, 0, "CELL_1076" /* GXT: 3465550174 */, 4);
	func_676(46, joaat("IG_LifeInvad_01"), 1860, "CELL_E_217" /* GXT: Rickie */, "CELL_383" /* GXT: CHAR_RICKIE */, "CELL_400" /* GXT: Contact */, 44, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1072" /* GXT: 6115550140 */, 4);
	func_676(47, joaat("IG_Chef"), 330, "CELL_E_224" /* GXT: Chef */, "CELL_385" /* GXT: CHAR_CHEF */, "CELL_400" /* GXT: Contact */, 45, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_28" /* GXT: 6115550111 */, 4);
	func_676(49, joaat("IG_Barry"), 200, "CELL_147" /* GXT: Barry */, "CELL_347" /* GXT: CHAR_BARRY */, "CELL_400" /* GXT: Contact */, 47, 4, "BAR_APH1", 7, 16, 0, 0, 0, "CELL_1046" /* GXT: 3465550105 */, 4);
	func_676(50, joaat("IG_Beverly"), 220, "CELL_148" /* GXT: Beverly */, "CELL_348" /* GXT: CHAR_BEVERLY */, "CELL_400" /* GXT: Contact */, 48, 4, "BEV_APH1", 7, 16, 0, 0, 0, "CELL_1047" /* GXT: 3285550139 */, 4);
	if (__LIB_0__::func_116())
	{
		func_676(48, joaat("IG_Beverly"), 250, "CELL_E_279" /* GXT: Blimp */, "CELL_E_379" /* GXT: CHAR_BLIMP */, "CELL_400" /* GXT: Contact */, 46, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_40" /* GXT: 3465550176 */, 4);
	}
	else
	{
		func_676(48, joaat("IG_Beverly"), 250, "CELL_E_279" /* GXT: Blimp */, "CELL_E_386" /* GXT: CHAR_BLIMP2 */, "CELL_400" /* GXT: Contact */, 46, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_40" /* GXT: 3465550176 */, 4);
	}
	func_676(51, joaat("S_M_M_HighSec_01"), 380, "CELL_166" /* GXT: Cris */, "CELL_365" /* GXT: CHAR_CRIS */, "CELL_448" /* GXT: Cris */, 49, 4, "CRI_APH1", 7, 16, 0, 0, 0, "CELL_1075" /* GXT: 3285550160 */, 4);
	func_676(52, joaat("IG_Dom"), 450, "CELL_150" /* GXT: Dom */, "CELL_350" /* GXT: CHAR_DOM */, "CELL_400" /* GXT: Contact */, 50, 4, "ANS_Dbusy", 7, 16, 0, 0, 0, "CELL_1049" /* GXT: 6115550107 */, 4);
	func_676(53, joaat("IG_Hao"), 800, "CELL_E_246" /* GXT: Hao */, "CELL_E_346" /* GXT: CHAR_HAO */, "CELL_400" /* GXT: Contact */, 51, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1049" /* GXT: 6115550107 */, 4);
	func_676(54, joaat("IG_Cletus"), 370, "CELL_167" /* GXT: Cletus */, "CELL_366" /* GXT: CHAR_HUNTER */, "CELL_449" /* GXT: Hunter */, 52, 4, "CLE_APH1", 7, 16, 0, 0, 0, "CELL_1076" /* GXT: 3465550174 */, 4);
	func_676(55, joaat("IG_JimmyBoston"), 1040, "CELL_151" /* GXT: Jimmy Boston */, "CELL_357" /* GXT: CHAR_JIMMY_BOSTON */, "CELL_400" /* GXT: Contact */, 53, 4, "JIB_APH1", 7, 16, 0, 0, 0, "CELL_1050" /* GXT: 3465550148 */, 4);
	func_676(56, joaat("IG_JoeMinuteMan"), 1060, "CELL_152" /* GXT: Joe */, "CELL_352" /* GXT: CHAR_JOE */, "CELL_400" /* GXT: Contact */, 54, 4, "JOE_APH1", 7, 16, 0, 0, 0, "CELL_1051" /* GXT: 6115550128 */, 4);
	func_676(57, joaat("IG_Josef"), 1070, "CELL_153" /* GXT: Josef */, "CELL_353" /* GXT: CHAR_JOSEF */, "CELL_400" /* GXT: Contact */, 55, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1052" /* GXT: 3285550117 */, 4);
	func_676(58, joaat("IG_Josh"), 1080, "CELL_154" /* GXT: Josh */, "CELL_354" /* GXT: CHAR_JOSH */, "CELL_400" /* GXT: Contact */, 56, 4, "JOS_APH1", 7, 16, 0, 0, 0, "CELL_1053" /* GXT: 6115550169 */, 4);
	func_676(59, joaat("IG_Manuel"), 1310, "CELL_156" /* GXT: Manuel */, "CELL_356" /* GXT: CHAR_MANUEL */, "CELL_400" /* GXT: Contact */, 57, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1055" /* GXT: 3465550130 */, 4);
	func_676(60, joaat("IG_Marnie"), 1320, "CELL_157" /* GXT: Marnie */, "CELL_E_310" /* GXT: CHAR_MARNIE */, "CELL_400" /* GXT: Contact */, 58, 4, "MAR_APH1", 7, 16, 0, 0, 0, "CELL_1056" /* GXT: 6115550181 */, 4);
	func_676(61, joaat("IG_MaryAnn"), 1340, "CELL_158" /* GXT: Mary Ann */, "CELL_358" /* GXT: CHAR_MARY_ANN */, "CELL_400" /* GXT: Contact */, 59, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1057" /* GXT: 3285550185 */, 4);
	func_676(62, joaat("IG_Maude"), 1340, "CELL_E_244" /* GXT: Maude */, "CELL_E_344" /* GXT: CHAR_MAUDE */, "CELL_400" /* GXT: Contact */, 60, 4, "MAU_APH1", 7, 16, 0, 0, 0, "CELL_1057" /* GXT: 3285550185 */, 4);
	func_676(133, 0, 1360, "CELL_E_282" /* GXT: Space Monkey */, "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_E_384" /* GXT: CHAR_MONKEY_MAN */, 166, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_1005" /* GXT: 3465550192 */, 4);
	func_676(63, joaat("IG_MRS_Thornhill"), 1390, "CELL_161" /* GXT: Mrs Thornhill */, "CELL_361" /* GXT: CHAR_MRS_THORNHILL */, "CELL_400" /* GXT: Contact */, 61, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1060" /* GXT: 3285550135 */, 4);
	func_676(64, joaat("IG_Nigel"), 1430, "CELL_162" /* GXT: Nigel */, "CELL_362" /* GXT: CHAR_NIGEL */, "CELL_400" /* GXT: Contact */, 62, 4, "NIG_APH1", 7, 16, 0, 0, 0, "CELL_1061" /* GXT: 3465550111 */, 4);
	func_676(65, joaat("IG_Orleans"), 1910, "CELL_168" /* GXT: Beast */, "CELL_367" /* GXT: CHAR_SASQUATCH */, "CELL_450" /* GXT: Beast */, 63, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1077" /* GXT: 2735550182 */, 4);
	func_676(66, joaat("IG_Ashley"), 178, "CELL_E_202" /* GXT: Ashley */, "CELL_368" /* GXT: CHAR_ASHLEY */, "CELL_400" /* GXT: Contact */, 64, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1070" /* GXT: 3465550179 */, 4);
	func_676(67, joaat("IG_Andreas"), 180, "CELL_E_205" /* GXT: Andreas */, "CELL_369" /* GXT: CHAR_ANDREAS */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(68, joaat("IG_Dreyfuss"), 490, "CELL_E_206" /* GXT: Dreyfuss */, "CELL_398" /* GXT: CHAR_DREYFUSS */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1078" /* GXT: 6115550186 */, 4);
	func_676(69, joaat("IG_Omega"), 1540, "CELL_E_207" /* GXT: Omega */, "CELL_399" /* GXT: CHAR_OMEGA */, "CELL_400" /* GXT: Contact */, 65, 4, "OME_APH1", 7, 16, 0, 0, 0, "CELL_1079" /* GXT: 3465550162 */, 4);
	func_676(92, joaat("A_M_Y_BeachVesp_01"), 480, "CELL_140" /* GXT: Domestic Girl */, "CELL_340" /* GXT: CHAR_DOMESTIC_GIRL */, "CELL_401" /* GXT: Friend */, 91, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1040" /* GXT: 3285550171 */, 4);
	func_676(93, joaat("A_F_Y_Hiker_01"), 2170, "CELL_141" /* GXT: Ursula */, "CELL_341" /* GXT: CHAR_HITCHER_GIRL */, "CELL_401" /* GXT: Friend */, 92, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1041" /* GXT: 3285550103 */, 4);
	func_676(98, 0, 1960, "CELL_179" /* GXT: Social Club */, "CELL_379" /* GXT: CHAR_SOCIAL_CLUB */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1064" /* GXT: 2735550101 */, 4);
	func_676(99, 0, 1290, "CELL_E_245" /* GXT: LS Tourist Board */, "CELL_378" /* GXT: CHAR_LS_TOURIST_BOARD */, "CELL_400" /* GXT: Contact */, 133, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1075" /* GXT: 3285550160 */, 4);
	func_676(100, joaat("S_M_Y_XMech_02"), 1360, "CELL_180" /* GXT: Mechanic */, "CELL_380" /* GXT: CHAR_MECHANIC */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1065" /* GXT: 3285550131 */, 4);
	func_676(104, joaat("S_F_Y_Stripper_01"), 1090, "CELL_112" /* GXT: Juliet */, "CELL_312" /* GXT: CHAR_STRIPPER_JULIET */, "CELL_400" /* GXT: Contact */, 99, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(105, joaat("S_F_Y_Stripper_02"), 1460, "CELL_113" /* GXT: Nikki */, "CELL_313" /* GXT: CHAR_STRIPPER_NIKKI */, "CELL_413" /* GXT: Nikki */, 100, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1081" /* GXT: 3465550183 */, 4);
	func_676(106, joaat("S_F_Y_Stripper_01"), 340, "CELL_114" /* GXT: Chastity */, "CELL_314" /* GXT: CHAR_STRIPPER_CHASTITY */, "CELL_414" /* GXT: Chastity */, 101, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1082" /* GXT: 6115550163 */, 4);
	func_676(107, joaat("S_F_Y_Stripper_02"), 350, "CELL_115" /* GXT: Cheetah */, "CELL_315" /* GXT: CHAR_STRIPPER_CHEETAH */, "CELL_415" /* GXT: Cheetah */, 102, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1083" /* GXT: 3285550167 */, 4);
	func_676(108, joaat("S_F_Y_Stripper_01"), 1910, "CELL_116" /* GXT: Sapphire */, "CELL_316" /* GXT: CHAR_STRIPPER_SAPPHIRE */, "CELL_416" /* GXT: Sapphire */, 103, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1084" /* GXT: 3285550177 */, 4);
	func_676(109, joaat("S_F_Y_Stripper_02"), 940, "CELL_117" /* GXT: Infernus */, "CELL_317" /* GXT: CHAR_STRIPPER_INFERNUS */, "CELL_417" /* GXT: Infernus */, 104, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1085" /* GXT: 6115550184 */, 4);
	func_676(110, joaat("S_F_Y_Stripper_01"), 680, "CELL_118" /* GXT: Fufu */, "CELL_318" /* GXT: CHAR_STRIPPER_FUFU */, "CELL_418" /* GXT: Fufu */, 105, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1086" /* GXT: 3465550186 */, 4);
	func_676(111, joaat("S_F_Y_Stripper_02"), 1630, "CELL_119" /* GXT: Peach */, "CELL_319" /* GXT: CHAR_STRIPPER_PEACH */, "CELL_419" /* GXT: Peach */, 106, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1087" /* GXT: 2735550189 */, 4);
	func_676(94, joaat("A_F_Y_Fitness_02"), 280, "CELL_120" /* GXT: Fixed Car */, "CELL_320" /* GXT: CHAR_BROKEN_DOWN_GIRL */, "CELL_420" /* GXT: Fixed Car */, 93, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1088" /* GXT: 6115550115 */, 4);
	func_676(95, joaat("A_F_Y_Hipster_01"), 190, "CELL_E_280" /* GXT: Antonia */, "CELL_E_321" /* GXT: CHAR_ANTONIA */, "CELL_400" /* GXT: Contact */, 94, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_41" /* GXT: 6115550182 */, 4);
	func_676(112, joaat("A_F_Y_EastSA_03"), 1260, "CELL_E_201" /* GXT: Liz */, "CELL_321" /* GXT: CHAR_TAXI_LIZ */, "CELL_421" /* GXT: Liz */, 107, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1089" /* GXT: 6115550126 */, 4);
	func_676(113, 0, 1, "CELL_E_248" /* GXT: Downtown Cab Co. */, "CELL_E_350" /* GXT: CHAR_PROPERTY_TAXI_LOT */, "CELL_400" /* GXT: Contact */, 108, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(114, 0, 1, "CELL_E_249" /* GXT: Cinema Doppler */, "CELL_E_351" /* GXT: CHAR_PROPERTY_CINEMA_VINEWOOD */, "CELL_400" /* GXT: Contact */, 109, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(115, 0, 1, "CELL_E_250" /* GXT: Ten Cent Theater */, "CELL_E_352" /* GXT: CHAR_PROPERTY_CINEMA_DOWNTOWN */, "CELL_400" /* GXT: Contact */, 110, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(116, 0, 1, "CELL_E_251" /* GXT: Tivoli Cinema */, "CELL_E_353" /* GXT: CHAR_PROPERTY_CINEMA_MORNINGWOOD */, "CELL_400" /* GXT: Contact */, 111, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(117, 0, 1, "CELL_E_252" /* GXT: Car Scrapyard */, "CELL_E_354" /* GXT: CHAR_PROPERTY_CAR_SCRAP_YARD */, "CELL_400" /* GXT: Contact */, 112, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(118, 0, 1, "CELL_E_254" /* GXT: Smoke on the Water */, "CELL_E_356" /* GXT: CHAR_PROPERTY_WEED_SHOP */, "CELL_400" /* GXT: Contact */, 114, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(119, 0, 1, "CELL_E_255" /* GXT: Tequi-la-la */, "CELL_E_357" /* GXT: CHAR_PROPERTY_BAR_TEQUILALA */, "CELL_400" /* GXT: Contact */, 115, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(120, 0, 1, "CELL_E_256" /* GXT: Pitchers */, "CELL_E_358" /* GXT: CHAR_PROPERTY_BAR_PITCHERS */, "CELL_400" /* GXT: Contact */, 116, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(121, 0, 1, "CELL_E_260" /* GXT: The Hen House */, "CELL_E_362" /* GXT: CHAR_PROPERTY_BAR_HEN_HOUSE */, "CELL_400" /* GXT: Contact */, 117, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(122, 0, 1, "CELL_E_262" /* GXT: Hookies */, "CELL_E_364" /* GXT: CHAR_PROPERTY_BAR_HOOKIES */, "CELL_400" /* GXT: Contact */, 118, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(123, 0, 1, "CELL_E_263" /* GXT: Los Santos Golf Club */, "CELL_E_366" /* GXT: CHAR_PROPERTY_GOLF_CLUB */, "CELL_400" /* GXT: Contact */, 119, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(124, 0, 1, "CELL_E_264" /* GXT: Los Santos Customs */, "CELL_E_367" /* GXT: CHAR_PROPERTY_CAR_MOD_SHOP */, "CELL_400" /* GXT: Contact */, 120, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(125, 0, 1, "CELL_E_265" /* GXT: Towing Impound */, "CELL_E_368" /* GXT: CHAR_PROPERTY_TOWING_IMPOUND */, "CELL_400" /* GXT: Contact */, 121, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(126, 0, 1, "CELL_E_266" /* GXT: McKenzie Field Hangar */, "CELL_E_369" /* GXT: CHAR_PROPERTY_ARMS_TRAFFICKING */, "CELL_400" /* GXT: Contact */, 122, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(127, 0, 1, "CELL_E_267" /* GXT: Sonar Collections Dock */, "CELL_E_370" /* GXT: CHAR_PROPERTY_SONAR_COLLECTIONS */, "CELL_400" /* GXT: Contact */, 123, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080" /* GXT: 3285550174 */, 4);
	func_676(103, joaat("IG_Tonya"), 2040, "CELL_E_223" /* GXT: Tonya */, "CELL_370" /* GXT: CHAR_TOW_TONYA */, "CELL_470" /* GXT: Tonya */, 124, 4, "TON_APH1", 7, 16, 0, 0, 0, "CELL_1090" /* GXT: 6115550199 */, 4);
	func_676(96, 0, 1270, "CELL_E_209" /* GXT: Los Santos Customs */, "CELL_E_309" /* GXT: CHAR_LS_CUSTOMS */, "CELL_400" /* GXT: Contact */, 95, 4, "NO_ANSMG", 7, 16, 2, 2, 2, "CELL_1091" /* GXT: Unknown */, 4);
	__LIB_0__::func_170(96, 0, 1);
	__LIB_0__::func_170(96, 1, 1);
	__LIB_0__::func_170(96, 2, 1);
	__LIB_0__::func_170(96, 3, 1);
	func_676(97, 0, 113, "CELL_E_220" /* GXT: Ammu-Nation */, "CELL_E_320" /* GXT: CHAR_AMMUNATION */, "CELL_400" /* GXT: Contact */, 96, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_01" /* GXT: 2735550108 */, 4);
	func_676(70, joaat("A_M_Y_BeachVesp_01"), 150, "CELL_174" /* GXT: Al Carter */, "CELL_MP_320" /* GXT: CHAR_MP_BIKER_BOSS */, "CELL_400" /* GXT: Contact */, 66, 4, "ANS_Lbusy", 7, 16, 0, 0, 0, "CELL_MN_02" /* GXT: 3465550109 */, 4);
	func_676(71, joaat("A_M_Y_BeachVesp_01"), 610, "CELL_176" /* GXT: The Boss */, "CELL_MP_322" /* GXT: CHAR_MP_FAM_BOSS */, "CELL_400" /* GXT: Contact */, 68, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_04" /* GXT: 6115550123 */, 4);
	func_676(72, joaat("A_M_Y_BeachVesp_01"), 520, "CELL_177" /* GXT: Edgar Claros */, "CELL_MP_323" /* GXT: CHAR_MP_MEX_BOSS */, "CELL_400" /* GXT: Contact */, 69, 4, "ANS_Vbusy", 7, 16, 0, 0, 0, "CELL_MN_05" /* GXT: 6115550146 */, 4);
	func_676(73, joaat("A_M_Y_BeachVesp_01"), 1670, "CELL_178" /* GXT: The Boss */, "CELL_MP_324" /* GXT: CHAR_MP_PROF_BOSS */, "CELL_400" /* GXT: Contact */, 70, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_06" /* GXT: 2735550151 */, 4);
	func_676(74, joaat("A_M_Y_BeachVesp_01"), 180, "CELL_P_ASSISTF" /* GXT: Assistant */, "CELL_P_AF_PIC" /* GXT: CHAR_PA_FEMALE */, "CELL_400" /* GXT: Contact */, 71, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_08" /* GXT: 3465550137 */, 4);
	func_676(75, joaat("A_M_Y_BeachVesp_01"), 190, "CELL_P_ASSIST" /* GXT: Assistant */, "CELL_P_A_PIC" /* GXT: CHAR_PA_MALE */, "CELL_400" /* GXT: Contact */, 73, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_09" /* GXT: 6115550156 */, 4);
	func_676(76, -1718834823, 150, "CELL_165" /* GXT: Agent 14 */, "CELL_MP_A14PIC" /* GXT: CHAR_AGENT14 */, "CELL_400" /* GXT: Contact */, 74, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_11" /* GXT: 0207550152 */, 4);
	func_676(77, joaat("A_M_Y_BeachVesp_01"), 1970, "CELL_172" /* GXT: Stretch */, "CELL_MP_331" /* GXT: CHAR_MP_STRETCH */, "CELL_400" /* GXT: Contact */, 72, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_13" /* GXT: 6115550135 */, 4);
	func_676(83, joaat("A_M_Y_BeachVesp_01"), 1220, "CELL_E_215" /* GXT: GTA Online Contact */, "CELL_MP_342" /* GXT: CHAR_MP_FM_CONTACT */, "CELL_400" /* GXT: Contact */, 80, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_14" /* GXT: 2735550139 */, 4);
	func_676(84, joaat("A_M_Y_BeachVesp_01"), 280, "CELL_E_216" /* GXT: Brucie */, "CELL_MP_343" /* GXT: CHAR_MP_BRUCIE */, "CELL_400" /* GXT: Contact */, 80, 4, "ANS_Bbusy", 7, 16, 0, 0, 0, "CELL_MN_25" /* GXT: 2735550185 */, 4);
	func_676(85, joaat("A_M_Y_BeachVesp_01"), 1349, "CELL_E_221" /* GXT: Merryweather */, "CELL_MP_344" /* GXT: CHAR_MP_MERRYWEATHER */, "CELL_400" /* GXT: Contact */, 80, 4, "ANS_MWbusy", 7, 16, 0, 0, 0, "CELL_MN_26" /* GXT: 2735550120 */, 4);
	func_676(86, joaat("A_M_Y_BeachVesp_01"), 823, "CELL_E_228" /* GXT: Gerald */, "CELL_MP_349" /* GXT: CHAR_MP_GERALD */, "CELL_400" /* GXT: Contact */, 80, 4, "ANS_GBusy", 7, 16, 0, 0, 0, "CELL_1004" /* GXT: 6115550152 */, 4);
	func_676(89, joaat("A_M_Y_BeachVesp_01"), 1343, "CELL_E_MP0" /* GXT: Mechanic */, "CELL_MP_345" /* GXT: CHAR_LS_CUSTOMS */, "CELL_400" /* GXT: Contact */, 80, 4, "ANS_MECbusy", 7, 16, 0, 0, 0, "CELL_MN_29" /* GXT: 3285550153 */, 4);
	func_676(90, joaat("A_M_Y_BeachVesp_01"), 1060, "CELL_E_242" /* GXT: Julio Fabrizio */, "CELL_MP_346" /* GXT: CHAR_DEFAULT */, "CELL_400" /* GXT: Contact */, 80, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_30" /* GXT: 6115550166 */, 4);
	func_676(87, joaat("A_M_Y_BeachVesp_01"), 1670, "CELL_E_243" /* GXT: Vanilla Unicorn */, "CELL_MP_347" /* GXT: CHAR_MP_STRIPCLUB_PR */, "CELL_400" /* GXT: Contact */, 84, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_31" /* GXT: 6115550104 */, 4);
	func_676(78, joaat("A_M_Y_BeachVesp_01"), 380, "CELL_169" /* GXT: Corey Parker */, "CELL_MP_332", "CELL_400" /* GXT: Contact */, 75, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_16" /* GXT: 3465550198 */, 4);
	func_676(79, joaat("A_M_Y_BeachVesp_01"), 310, "CELL_YACHT" /* GXT: Captain */, "CELL_YACHTPIC" /* GXT: CHAR_BOATSITE2 */, "CELL_400" /* GXT: Contact */, 76, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_20" /* GXT: 2735550172 */, 4);
	func_676(80, joaat("A_M_Y_BeachVesp_01"), 170, "CELL_185", "CELL_MP_337", "CELL_400" /* GXT: Contact */, 77, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_21" /* GXT: 3285550169 */, 4);
	func_676(41, 0, 1640, "CELL_E_247" /* GXT: Pegasus */, "CELL_E_347" /* GXT: CHAR_PEGASUS_DELIVERY */, "CELL_400" /* GXT: Contact */, 39, 4, "ANS_PGbusy", 7, 16, 0, 0, 0, "CELL_MN_33" /* GXT: 3285550122 */, 4);
	func_676(42, 0, 1240, "CELL_E_276" /* GXT: Lifeinvader */, "CELL_E_376" /* GXT: CHAR_LIFEINVADER */, "CELL_400" /* GXT: Contact */, 40, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_39" /* GXT: 3465550195 */, 4);
	func_676(81, joaat("A_M_Y_BeachVesp_01"), 240, "CELL_BENNY" /* GXT: Benny's Original Motor Works */, "CELL_BENNYPIC" /* GXT: CHAR_CARSITE3 */, "CELL_400" /* GXT: Contact */, 78, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_23" /* GXT: 2735550193 */, 4);
	func_676(82, joaat("A_M_Y_BeachVesp_01"), 250, "CELL_AGBOSS" /* GXT: SecuroServ */, "CELL_AGBOSSPIC" /* GXT: CHAR_GANGAPP */, "CELL_400" /* GXT: Contact */, 79, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_24" /* GXT: 2735550199 */, 4);
	func_676(88, joaat("A_M_Y_BeachVesp_01"), 450, "CELL_E_222" /* GXT: Detonate Bomb */, "CELL_330" /* GXT: CHAR_DETONATEBOMB */, "CELL_430" /* GXT: Action */, 126, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_676(91, joaat("A_M_Y_BeachVesp_01"), 1370, "CELL_E_275" /* GXT: Mors Mutual Insurance */, "CELL_MP_348" /* GXT: CHAR_MP_MORS_MUTUAL */, "CELL_400" /* GXT: Contact */, 85, 4, "ANS_INSbusy", 7, 16, 0, 0, 0, "CELL_MN_38" /* GXT: 6115550149 */, 4);
	func_676(138, 0, 1810, "CELL_E_271" /* GXT: Legendary Motorsport */, "CELL_MP_352" /* GXT: CHAR_CARSITE */, "CELL_400" /* GXT: Contact */, 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_34" /* GXT: 3465550132 */, 4);
	func_676(141, 0, 1810, "CELL_E_272" /* GXT: Elitas Travel */, "CELL_MP_355" /* GXT: CHAR_PLANESITE */, "CELL_400" /* GXT: Contact */, 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_35" /* GXT: 2735550146 */, 4);
	func_676(140, 0, 1810, "CELL_E_273" /* GXT: Warstock */, "CELL_MP_353" /* GXT: CHAR_MILSITE */, "CELL_400" /* GXT: Contact */, 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_36" /* GXT: 6115550143 */, 4);
	func_676(139, 0, 1810, "CELL_E_274" /* GXT: DockTease */, "CELL_MP_351" /* GXT: CHAR_BOATSITE */, "CELL_400" /* GXT: Contact */, 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_37" /* GXT: 2735550128 */, 4);
	func_676(142, 0, 1810, "CELL_E_269" /* GXT: P&M Cycles */, "CELL_MP_354" /* GXT: CHAR_BIKESITE */, "CELL_400" /* GXT: Contact */, 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_42" /* GXT: 2735550113 */, 4);
	func_676(143, 0, 1810, "CELL_E_270" /* GXT: Southern SA Super Autos */, "CELL_MP_350" /* GXT: CHAR_CARSITE2 */, "CELL_400" /* GXT: Contact */, 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_43" /* GXT: 2735550177 */, 4);
	func_676(147, 0, 1320, "CELL_CH_BIK1" /* GXT: Malc */, "CELL_BIK1_PIC" /* GXT: CHAR_MALC */, "CELL_400" /* GXT: Contact */, 137, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_1" /* GXT: 6115550192 */, 4);
	func_676(148, 0, 1260, "CELL_CH_BIK2" /* GXT: LJT */, "CELL_BIK2_PIC" /* GXT: CHAR_LJT */, "CELL_400" /* GXT: Contact */, 138, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_2" /* GXT: 6115550193 */, 4);
	func_676(149, 0, 1310, "CELL_MAZENAME" /* GXT: Maze Bank */, "CELL_MAZEPIC" /* GXT: CHAR_BANK_MAZE */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_2" /* GXT: 6115550193 */, 4);
	func_676(150, 0, 1390, "CELL_TREASNAME" /* GXT: vanderlinde@eyefind.com */, "CELL_MAPPIC" /* GXT: CHAR_DEFAULT */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_2" /* GXT: 6115550193 */, 4);
	func_676(151, 0, 2050, "CELL_NCLUBT_N" /* GXT: Tony */, "CELL_NCLUBT_PIC" /* GXT: CHAR_TONY_PRINCE */, "CELL_400" /* GXT: Contact */, 139, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_1" /* GXT: 6115550192 */, 4);
	func_676(152, 0, 1210, "CELL_NCLUBL_N" /* GXT: Lazlow */, "CELL_NCLUBL_PIC" /* GXT: CHAR_LAZLOW2 */, "CELL_400" /* GXT: Contact */, 140, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_1" /* GXT: 6115550192 */, 4);
	func_676(153, 0, 560, "CELL_NCLUBE_N" /* GXT: English Dave */, "CELL_NCLUBE_PIC" /* GXT: CHAR_ENGLISH_DAVE */, "CELL_400" /* GXT: Contact */, 141, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_1" /* GXT: 6115550192 */, 4);
	func_676(154, 0, 1610, "CELL_BBPAIGE_N" /* GXT: Paige */, "CELL_BBPAIGE_P" /* GXT: CHAR_PAIGE */, "CELL_400" /* GXT: Contact */, 142, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_1" /* GXT: 6115550192 */, 4);
	func_676(155, 0, 1710, "CELL_ARENA_N" /* GXT: Arena War */, "CELL_ARENA_PIC" /* GXT: CHAR_CARSITE4 */, "CELL_400" /* GXT: Contact */, 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_3" /* GXT: 2735550178 */, 4);
	func_676(156, 0, 280, "CELL_BRYONY_N" /* GXT: Bryony */, "CELL_BRYONY_P" /* GXT: CHAR_BRYONY */, "CELL_400" /* GXT: Contact */, 143, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_4" /* GXT: 2735550180 */, 4);
	func_676(157, 0, 1390, "CELL_CAS_MAN_N" /* GXT: Ms. Baker */, "CELL_CAS_MAN_P" /* GXT: CHAR_CASINO_MANAGER */, "CELL_400" /* GXT: Contact */, 144, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_5" /* GXT: 3465550164 */, 4);
	func_676(158, 0, 2090, "CELL_CAS_TOM_N" /* GXT: Tom Connors */, "CELL_CAS_TOM_P" /* GXT: CHAR_TOM */, "CELL_400" /* GXT: Contact */, 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_5" /* GXT: 3465550164 */, 4);
	func_676(159, 0, 1260, "CELL_COMIC_N" /* GXT: Hardcore Comic Store */, "CELL_COMIC_P" /* GXT: CHAR_COMIC_STORE */, "CELL_400" /* GXT: Contact */, 145, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN17" /* GXT: 2735550226 */, 4);
	func_676(160, 0, 1400, "CELL_CASINONAME" /* GXT: The Diamond Casino & Resort */, "CELL_CASINOPIC" /* GXT: CHAR_CASINO */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN17_1", 4);
	func_676(163, 0, 2060, "CELL_CAS_TTR_N" /* GXT: Tao's Translator */, "CELL_CAS_TTR_P" /* GXT: CHAR_DEFAULT */, "CELL_400" /* GXT: Contact */, 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_5" /* GXT: 3465550164 */, 4);
	func_676(164, 0, 2350, "CELL_WENDY_N" /* GXT: Wendy */, "CELL_WENDY_P" /* GXT: CHAR_WENDY */, "CELL_400" /* GXT: Contact */, 146, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_6" /* GXT: 3465550196 */, 4);
	func_676(165, 0, 2580, "CELL_CELEB_N" /* GXT: Yung Ancestor */, "CELL_CELEB_P" /* GXT: CHAR_TW */, "CELL_400" /* GXT: Contact */, 147, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_7" /* GXT: 3465550158 */, 4);
	func_676(166, 0, 1480, "CELL_MN_N", "", "CELL_400" /* GXT: Contact */, 148, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN16_8" /* GXT: 1237645112 */, 4);
	func_676(168, 0, 1165, "CELL_KM_N" /* GXT: Keinemusik */, "CELL_KM_P" /* GXT: CHAR_KEINEMUSIK */, "CELL_400" /* GXT: Contact */, 150, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN19" /* GXT: 6115550164 */, 4);
	func_676(171, 0, 1481, "CELL_MM_N" /* GXT: Moodymann */, "CELL_MM_P" /* GXT: CHAR_ISLDJ4 */, "CELL_400" /* GXT: Contact */, 152, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN22" /* GXT: 6115550161 */, 4);
	func_676(167, 0, 1365, "CELL_MIGEL_N" /* GXT: Miguel Madrazo */, "CELL_MIGEL_P" /* GXT: CHAR_MIGUEL_MADROZA */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN18" /* GXT: 3465550100 */, 4);
	func_676(169, 0, 1613, "CELL_PAVEL_N" /* GXT: Pavel */, "CELL_PAVEL_P" /* GXT: CHAR_PAVEL */, "CELL_400" /* GXT: Contact */, 149, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN20" /* GXT: 6115550196 */, 4);
	func_676(170, 0, 1812, "CELL_SLIP_N" /* GXT: Still Slipping Los Santos */, "CELL_SLIP_P" /* GXT: CHAR_STILL_SLIPPING */, "CELL_400" /* GXT: Contact */, 151, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN21", 4);
	func_676(172, 0, 1919, "CELL_SES_N" /* GXT: Sessanta */, "CELL_SES_P" /* GXT: CHAR_SESSANTA */, "CELL_400" /* GXT: Contact */, 153, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN23" /* GXT: 6115550117 */, 4);
	func_676(173, 0, 1925, "CELL_KDJ_N" /* GXT: KDJ */, "CELL_KDJ_P" /* GXT: CHAR_KDJ */, "CELL_400" /* GXT: Contact */, 154, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN22" /* GXT: 6115550161 */, 4);
	func_676(174, 0, 1400, "CELL_LSCMNAME" /* GXT: LS Car Meet */, "CELL_LSCMPIC" /* GXT: CHAR_LS_CAR_MEET */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN29" /* GXT: 6115550105 */, 4);
	func_676(175, 0, 650, "CELL_FRANKLIN_N" /* GXT: Franklin */, "CELL_FRANKLIN_P" /* GXT: CHAR_FIXFRANKLIN */, "CELL_400" /* GXT: Contact */, 155, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN23" /* GXT: 6115550117 */, 4);
	func_676(176, 0, 940, "CELL_IMANI_N" /* GXT: Imani */, "CELL_IMANI_P" /* GXT: CHAR_IMANI */, "CELL_400" /* GXT: Contact */, 156, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN24" /* GXT: 6115550167 */, 4);
	func_676(178, 0, 479, "CELL_DRE_N" /* GXT: Dr. Dre */, "CELL_DRE_P" /* GXT: CHAR_ARY */, "CELL_400" /* GXT: Contact */, 157, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN25" /* GXT: 6115550189 */, 4);
	func_676(177, 0, 2120, "CELL_FRA_IMA_N" /* GXT: Agency Conference */, "CELL_FRA_IMA_P" /* GXT: CHAR_FRANK_IMANI_CONF */, "CELL_489" /* GXT: ... */, 158, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_676(179, 0, 785, "CELL_JUNK_EN_N" /* GXT: Junk Energy */, "CELL_JUNK_EN_P" /* GXT: CHAR_JUNK_JUMP */, "CELL_400" /* GXT: Contact */, 159, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN26" /* GXT: 6115550777 */, 4);
	func_676(180, 0, 1315, "CELL_MARCEL_N" /* GXT: Marcel */, "CELL_MARCEL_P" /* GXT: CHAR_MARCEL */, "CELL_400" /* GXT: Contact */, 160, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN26" /* GXT: 6115550777 */, 4);
	func_676(181, 0, 2370, "CELL_YOHAN_N" /* GXT: Yohan */, "CELL_YOHAN_P" /* GXT: CHAR_YOHAN */, "CELL_400" /* GXT: Contact */, 161, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN26" /* GXT: 6115550777 */, 4);
	func_676(182, 0, 160, "CELL_ULP_N" /* GXT: Agent ULP */, "CELL_ULP_P" /* GXT: CHAR_ULP */, "CELL_400" /* GXT: Contact */, 162, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN26" /* GXT: 6115550777 */, 4);
	func_676(183, 0, 1920, "CELL_SINDY_N" /* GXT: Sindy */, "CELL_SINDY_P" /* GXT: CHAR_SINDY */, "CELL_400" /* GXT: Contact */, 163, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN26" /* GXT: 6115550777 */, 4);
	func_676(184, 0, 1280, "CELL_LUPE_N" /* GXT: Lupe */, "CELL_LUPE_P" /* GXT: CHAR_WBOSS1 */, "CELL_400" /* GXT: Contact */, 164, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN26" /* GXT: 6115550777 */, 4);
	func_676(185, 0, 1216, "CELL_LXAUNAME" /* GXT: Luxury Autos */, "CELL_LXAU_P" /* GXT: CHAR_SUM2_FEED_LUXURY_AUTOS */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN27" /* GXT: 6115550102 */, 4);
	func_676(186, 0, 1618, "CELL_PMDXNAME" /* GXT: Premium Deluxe Motorsport */, "CELL_PMDX_P" /* GXT: CHAR_SUM2_FEED_PREMIUM_DELUXE */, "CELL_400" /* GXT: Contact */, 166, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN28" /* GXT: 6115550103 */, 4);
	func_676(128, 0, 430, "CELL_130" /* GXT: Detonate */, "CELL_330" /* GXT: CHAR_DETONATEBOMB */, "CELL_430" /* GXT: Action */, 125, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_676(129, 0, 1020, "CELL_132" /* GXT: Jay Norris */, "CELL_330" /* GXT: CHAR_DETONATEBOMB */, "CELL_430" /* GXT: Action */, 126, 4, "DET_APH1", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_676(130, 0, 560, "CELL_131" /* GXT: Emergency Services */, "CELL_331" /* GXT: CHAR_CALL911 */, "CELL_431" /* GXT: Services */, 127, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_9011" /* GXT: 911 */, 4);
	__LIB_0__::func_170(130, 0, 1);
	__LIB_0__::func_170(130, 1, 1);
	__LIB_0__::func_170(130, 2, 1);
	func_676(131, 0, 480, "CELL_163" /* GXT: Downtown Cab Co. */, "CELL_394" /* GXT: CHAR_TAXI */, "CELL_446" /* GXT: Taxi Dispatch */, 128, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1062" /* GXT: 3235555555 */, 4);
	func_676(137, 0, 240, "CELL_195" /* GXT: Unknown */, "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_195" /* GXT: Unknown */, 166, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_676(132, 0, 90, "CELL_E_219" /* GXT: Chat Call */, "CELL_E_319" /* GXT: CHAR_CHAT_CALL */, "CELL_431" /* GXT: Services */, 132, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_676(135, 0, 320, "CELL_109" /* GXT: Castro */, "CELL_309" /* GXT: CHAR_CASTRO */, "CELL_409" /* GXT: Castro */, 129, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_676(136, 0, 120, "CELL_ARTU" /* GXT: Unknown */, "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_410" /* GXT: Arthur */, 130, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_676(144, 0, 320, "CELL_196" /* GXT: Virtual MP */, "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_196" /* GXT: Virtual MP */, 134, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_676(161, 0, 100, "CELL_181" /* GXT: Dummy_1 */, "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_196" /* GXT: Virtual MP */, 134, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091" /* GXT: Unknown */, 4);
	func_674();
	func_673(0, "CELLGW_1" /* GXT: 2735550155 */, "RON_APH2", "NervousRon");
	func_673(1, "CELLC_MONOC" /* GXT: 19993673767 */, "CELLPHONE_CHEAT", "CHEAT_MONOC");
	func_673(2, "CELLC_SUPJUM" /* GXT: 19994678648 */, "CELLPHONE_CHEAT", "CHEAT_SUPJUM");
	func_673(3, "CELLC_HEALA" /* GXT: 1999887853 */, "CELLPHONE_CHEAT", "CHEAT_HEALA");
	func_673(4, "CELLC_SLIDEYC" /* GXT: 19997669329 */, "CELLPHONE_CHEAT", "CHEAT_SLIDEYC");
	func_673(5, "CELLC_FASTR" /* GXT: 19992282463 */, "CELLPHONE_CHEAT", "CHEAT_FASTR");
	func_673(6, "CELLC_WANTDN" /* GXT: 199952993787 */, "CELLPHONE_CHEAT", "CHEAT_WANTDN");
	func_673(7, "CELLC_WANTUP" /* GXT: 199938448483 */, "CELLPHONE_CHEAT", "CHEAT_WANTUP");
	func_673(8, "CELLC_WEATHER" /* GXT: 19996253487246 */, "CELLPHONE_CHEAT", "CHEAT_WEATHER");
	func_673(9, "CELLC_FASTS" /* GXT: 199946844557 */, "CELLPHONE_CHEAT", "CHEAT_FASTS");
	func_673(10, "CELLC_POWER" /* GXT: 19997693787 */, "CELLPHONE_CHEAT", "CHEAT_POWER");
	func_673(11, "CELLC_CHUTE" /* GXT: 19997593483 */, "CELLPHONE_CHEAT", "CHEAT_CHUTE");
	func_673(12, "CELLC_BANG" /* GXT: 1999444439 */, "CELLPHONE_CHEAT", "CHEAT_BANG");
	func_673(13, "CELLC_FLAMB" /* GXT: 19994623634279 */, "CELLPHONE_CHEAT", "CHEAT_FLAMB");
	func_673(14, "CELLC_EXPMEL" /* GXT: 199946842637 */, "CELLPHONE_CHEAT", "CHEAT_EXPMEL");
	func_673(15, "CELLC_ZEROG" /* GXT: 19993562837 */, "CELLPHONE_CHEAT", "CHEAT_ZEROG");
	func_673(16, "CELLC_INVINC" /* GXT: 19997246545537 */, "CELLPHONE_CHEAT", "CHEAT_INVINC");
	func_673(17, "CELLC_SLOWMO" /* GXT: 1999756966 */, "CELLPHONE_CHEAT", "CHEAT_SLOWMO");
	func_673(18, "CELLC_SKYFA" /* GXT: 19997593255 */, "CELLPHONE_CHEAT", "CHEAT_SKYFA");
	func_673(19, "CELLC_DRUNK" /* GXT: 1999547867 */, "CELLPHONE_CHEAT", "CHEAT_DRUNK" /* GXT: Drunk mode. */);
	func_673(20, "CELLC_DEADEYE" /* GXT: 19993323393 */, "CELLPHONE_CHEAT", "CHEAT_DEADEYE");
	func_673(21, "CELLC_BUZZARD" /* GXT: 19992899633 */, "CELLPHONE_CHEAT", "CHEAT_BUZZARD");
	func_673(22, "CELLC_COMET2" /* GXT: 199926638 */, "CELLPHONE_CHEAT", "CHEAT_COMET2");
	func_673(23, "CELLC_BMX" /* GXT: 1999226348 */, "CELLPHONE_CHEAT", "CHEAT_BMX");
	func_673(24, "CELLC_CADDY" /* GXT: 19994653461 */, "CELLPHONE_CHEAT", "CHEAT_CADDY");
	func_673(25, "CELLC_DUSTER" /* GXT: 199935977729 */, "CELLPHONE_CHEAT", "CHEAT_DUSTER");
	func_673(26, "CELLC_PCJ" /* GXT: 1999762538 */, "CELLPHONE_CHEAT", "CHEAT_PCJ");
	func_673(27, "CELLC_RAPIDGT" /* GXT: 19997274348 */, "CELLPHONE_CHEAT", "CHEAT_RAPIDGT");
	func_673(28, "CELLC_STRETCH" /* GXT: 199984639663 */, "CELLPHONE_CHEAT", "CHEAT_STRETCH");
	func_673(29, "CELLC_STUNT" /* GXT: 1999227678676 */, "CELLPHONE_CHEAT", "CHEAT_STUNT");
	func_673(30, "CELLC_TRASH" /* GXT: 19998727433 */, "CELLPHONE_CHEAT", "CHEAT_TRASH");
	func_673(31, "CELLC_SANCHEZ" /* GXT: 19996337623 */, "CELLPHONE_CHEAT", "CHEAT_SANCHEZ");
	func_673(32, "CELLC_SEAPLANE" /* GXT: 19993984628 */, "CELLPHONE_CHEAT", "CHEAT_SEAPLANE");
	func_673(33, "CELLC_DUELC" /* GXT: 199933284227 */, "CELLPHONE_CHEAT", "CHEAT_DUELC");
	func_673(34, "CELLC_BUBBLE" /* GXT: 19992822537 */, "CELLPHONE_CHEAT", "CHEAT_BUBBLE");
	func_673(35, "CELLC_WEAPONS" /* GXT: 1999866587 */, "CELLPHONE_CHEAT", "CHEAT_WEAPONS");
	func_673(36, "CELLC_DIRECTOR" /* GXT: 199957825368 */, "CELLPHONE_CHEAT", "CHEAT_DIRECTOR");
	func_672(0, 36, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */);
	func_672(1, 17, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */);
	func_672(2, 1, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */);
	func_672(3, 14, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */);
	func_670(0, 0, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */);
	func_670(1, 1, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */);
	func_670(2, 2, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */);
	func_670(3, 12, "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */);
}

void func_670(int iParam0, int iParam1, char* sParam2)//Position - 0x831BC
{
	MemCopy(&(Global_7974[iParam0 /*16*/]), {__LIB_0__::func_167(iParam1)}, 8);
	StringCopy(&(Global_7974[iParam0 /*16*/].f_8), sParam2, 32);
}

void func_672(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x831F5
{
	MemCopy(&(Global_8039[iParam0 /*24*/]), {__LIB_0__::func_167(iParam1)}, 8);
	StringCopy(&(Global_8039[iParam0 /*24*/].f_8), sParam2, 32);
	StringCopy(&(Global_8039[iParam0 /*24*/].f_16), sParam3, 32);
}

void func_673(int iParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x83228
{
	StringCopy(&(Global_7455[iParam0 /*14*/]), sParam1, 16);
	StringCopy(&(Global_7455[iParam0 /*14*/].f_4), sParam2, 16);
	StringCopy(&(Global_7455[iParam0 /*14*/].f_8), sParam3, 24);
}

void func_674()//Position - 0x83255
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_675(iVar0, 0, 160, "CELL_700" /* GXT: Profile */, 25, 1);
		func_675(iVar0, 1, 180, "CELL_710" /* GXT: Ringtone */, 18, 1);
		func_675(iVar0, 2, 200, "CELL_720" /* GXT: Theme */, 23, 1);
		func_675(iVar0, 3, 220, "CELL_730" /* GXT: Vibrate */, 20, 1);
		func_675(iVar0, 4, 20, "CELL_740" /* GXT: Background */, 23, 1);
		func_675(iVar0, 5, 150, "CELL_705" /* GXT: Invite Sound */, 18, 1);
		StringCopy(&(Global_8941[iVar0 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_800" /* GXT: Normal Mode */, 16);
		Global_8941[iVar0 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_8941[iVar0 /*2811*/][0 /*281*/].f_84[0] = 140;
		Global_8941[iVar0 /*2811*/][0 /*281*/].f_104[0] = 25;
		StringCopy(&(Global_8941[iVar0 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_802" /* GXT: Quiet Mode */, 16);
		Global_8941[iVar0 /*2811*/][0 /*281*/].f_124[1] = 0;
		Global_8941[iVar0 /*2811*/][0 /*281*/].f_84[1] = 170;
		Global_8941[iVar0 /*2811*/][0 /*281*/].f_104[1] = 25;
		StringCopy(&(Global_8941[iVar0 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801" /* GXT: Sleep Mode */, 16);
		Global_8941[iVar0 /*2811*/][0 /*281*/].f_124[2] = 1;
		Global_8941[iVar0 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_8941[iVar0 /*2811*/][0 /*281*/].f_104[2] = 26;
		Global_8941[iVar0 /*2811*/][0 /*281*/].f_259 = 0;
		StringCopy(&(Global_8941[iVar0 /*2811*/][1 /*281*/].f_7[0 /*4*/]), "CELL_810" /* GXT: Ringtone 1 */, 16);
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_124[0] = 1;
		StringCopy(&(Global_8941[iVar0 /*2811*/][1 /*281*/].f_144[0 /*6*/]), "PHONE_GENERIC_RING_01", 24);
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_84[0] = 160;
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_104[0] = 18;
		StringCopy(&(Global_8941[iVar0 /*2811*/][1 /*281*/].f_7[1 /*4*/]), "CELL_811" /* GXT: Ringtone 2 */, 16);
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_124[1] = 1;
		StringCopy(&(Global_8941[iVar0 /*2811*/][1 /*281*/].f_144[1 /*6*/]), "PHONE_GENERIC_RING_02", 24);
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_84[1] = 163;
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_104[1] = 18;
		StringCopy(&(Global_8941[iVar0 /*2811*/][1 /*281*/].f_7[2 /*4*/]), "CELL_812" /* GXT: Ringtone 3 */, 16);
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_124[2] = 1;
		StringCopy(&(Global_8941[iVar0 /*2811*/][1 /*281*/].f_144[2 /*6*/]), "PHONE_GENERIC_RING_03", 24);
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_84[2] = 167;
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_104[2] = 18;
		StringCopy(&(Global_8941[iVar0 /*2811*/][1 /*281*/].f_7[3 /*4*/]), "CELL_813" /* GXT: Silent */, 16);
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_124[3] = 1;
		StringCopy(&(Global_8941[iVar0 /*2811*/][1 /*281*/].f_144[3 /*6*/]), "Silent Ringtone Dummy", 24);
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_84[3] = 168;
		Global_8941[iVar0 /*2811*/][1 /*281*/].f_104[3] = 51;
		StringCopy(&(Global_8941[iVar0 /*2811*/][2 /*281*/].f_7[0 /*4*/]), "CELL_820" /* GXT: Blue */, 16);
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_124[0] = 0;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_84[0] = 100;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_104[0] = 2;
		StringCopy(&(Global_8941[iVar0 /*2811*/][2 /*281*/].f_7[1 /*4*/]), "CELL_820" /* GXT: Blue */, 16);
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_124[1] = 1;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_84[1] = 25;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_104[1] = 23;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_260[1] = 1;
		StringCopy(&(Global_8941[iVar0 /*2811*/][2 /*281*/].f_7[2 /*4*/]), "CELL_821" /* GXT: Green */, 16);
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_124[2] = 1;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_84[2] = 75;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_104[2] = 23;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_260[2] = 2;
		StringCopy(&(Global_8941[iVar0 /*2811*/][2 /*281*/].f_7[3 /*4*/]), "CELL_822" /* GXT: Red */, 16);
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_124[3] = 1;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_84[3] = 187;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_104[3] = 23;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_260[3] = 3;
		StringCopy(&(Global_8941[iVar0 /*2811*/][2 /*281*/].f_7[4 /*4*/]), "CELL_823" /* GXT: Orange */, 16);
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_124[4] = 1;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_84[4] = 157;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_104[4] = 23;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_260[4] = 4;
		StringCopy(&(Global_8941[iVar0 /*2811*/][2 /*281*/].f_7[5 /*4*/]), "CELL_824" /* GXT: Grey */, 16);
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_124[5] = 1;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_84[5] = 77;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_104[5] = 23;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_260[5] = 5;
		StringCopy(&(Global_8941[iVar0 /*2811*/][2 /*281*/].f_7[6 /*4*/]), "CELL_825" /* GXT: Purple */, 16);
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_124[6] = 1;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_84[6] = 168;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_104[6] = 23;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_260[6] = 6;
		StringCopy(&(Global_8941[iVar0 /*2811*/][2 /*281*/].f_7[7 /*4*/]), "CELL_826" /* GXT: Pink */, 16);
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_124[7] = 1;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_84[7] = 164;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_104[7] = 23;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_260[7] = 7;
		StringCopy(&(Global_8941[iVar0 /*2811*/][2 /*281*/].f_7[8 /*4*/]), "CELL_846" /* GXT: Orange Herringbone */, 16);
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_124[8] = 0;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_84[8] = 196;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_104[8] = 23;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_260[8] = 2;
		if (iVar0 == 3)
		{
			StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB" /* GXT: Crew Emblem */, 16);
			Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[0] = 1;
			Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[0] = 300;
			Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[0] = 23;
		}
		else
		{
			StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840" /* GXT: Default */, 16);
			Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[0] = 1;
			Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[0] = 300;
			Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[0] = 23;
		}
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[1 /*4*/]), "CELL_841" /* GXT: Badger */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[1] = 0;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[1] = 3021;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[1] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[2 /*4*/]), "CELL_842" /* GXT: Whiz */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[2] = 0;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[2] = 3233;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[2] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[3 /*4*/]), "CELL_843" /* GXT: Tinkle */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[3] = 0;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[3] = 3205;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[3] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[4 /*4*/]), "CELL_844" /* GXT: Purple Glow */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[4] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[4] = 3197;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[4] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[5 /*4*/]), "CELL_845" /* GXT: Green Squares */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[5] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[5] = 3163;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[5] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[6 /*4*/]), "CELL_846" /* GXT: Orange Herringbone */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[6] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[6] = 3194;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[6] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[7 /*4*/]), "CELL_847" /* GXT: Orange Halftone */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[7] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[7] = 3192;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[7] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[8 /*4*/]), "CELL_848" /* GXT: Green Triangles */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[8] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[8] = 3167;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[8] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[9 /*4*/]), "CELL_849" /* GXT: Green Shards */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[9] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[9] = 3161;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[9] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[10 /*4*/]), "CELL_850" /* GXT: Blue Angles */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[10] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[10] = 3023;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[10] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[11 /*4*/]), "CELL_851" /* GXT: Blue Shards */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[11] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[11] = 3038;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[11] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[12 /*4*/]), "CELL_852" /* GXT: Blue Circles */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[12] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[12] = 3045;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[12] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[13 /*4*/]), "CELL_853" /* GXT: Diamonds */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[13] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[13] = 3065;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[13] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[14 /*4*/]), "CELL_854" /* GXT: Green Glow */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[14] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[14] = 3102;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[14] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[15 /*4*/]), "CELL_855" /* GXT: Orange 8-Bit */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[15] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[15] = 3190;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[15] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[16 /*4*/]), "CELL_856" /* GXT: Orange Triangles */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[16] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[16] = 3195;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[16] = 23;
		StringCopy(&(Global_8941[iVar0 /*2811*/][4 /*281*/].f_7[17 /*4*/]), "CELL_857" /* GXT: Purple Tartan */, 16);
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_124[17] = 1;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_84[17] = 3198;
		Global_8941[iVar0 /*2811*/][4 /*281*/].f_104[17] = 23;
		Global_8941[iVar0 /*2811*/][2 /*281*/].f_259 = 1;
		StringCopy(&(Global_8941[iVar0 /*2811*/][3 /*281*/].f_7[0 /*4*/]), "CELL_831" /* GXT: Off */, 16);
		Global_8941[iVar0 /*2811*/][3 /*281*/].f_124[0] = 1;
		Global_8941[iVar0 /*2811*/][3 /*281*/].f_84[0] = 153;
		Global_8941[iVar0 /*2811*/][3 /*281*/].f_104[0] = 21;
		StringCopy(&(Global_8941[iVar0 /*2811*/][3 /*281*/].f_7[1 /*4*/]), "CELL_830" /* GXT: On */, 16);
		Global_8941[iVar0 /*2811*/][3 /*281*/].f_124[1] = 1;
		Global_8941[iVar0 /*2811*/][3 /*281*/].f_84[1] = 157;
		Global_8941[iVar0 /*2811*/][3 /*281*/].f_104[1] = 20;
		Global_8941[iVar0 /*2811*/][3 /*281*/].f_259 = 1;
		StringCopy(&(Global_8941[iVar0 /*2811*/][5 /*281*/].f_7[0 /*4*/]), "CELL_831" /* GXT: Off */, 16);
		Global_8941[iVar0 /*2811*/][5 /*281*/].f_124[0] = 1;
		Global_8941[iVar0 /*2811*/][5 /*281*/].f_84[0] = 153;
		Global_8941[iVar0 /*2811*/][5 /*281*/].f_104[0] = 51;
		StringCopy(&(Global_8941[iVar0 /*2811*/][5 /*281*/].f_7[1 /*4*/]), "CELL_830" /* GXT: On */, 16);
		Global_8941[iVar0 /*2811*/][5 /*281*/].f_124[1] = 1;
		Global_8941[iVar0 /*2811*/][5 /*281*/].f_84[1] = 157;
		Global_8941[iVar0 /*2811*/][5 /*281*/].f_104[1] = 18;
		Global_8941[iVar0 /*2811*/][5 /*281*/].f_259 = 1;
		iVar0++;
	}
	StringCopy(&(Global_113386.f_14051[0 /*20*/]), "cellphone_iFruit", 24);
	Global_113386.f_14051[0 /*20*/].f_6 = 1;
	StringCopy(&(Global_113386.f_14051[0 /*20*/].f_11), "PHONE_GENERIC_RING_01", 24);
	Global_113386.f_14051[0 /*20*/].f_7 = 0;
	Global_113386.f_14051[0 /*20*/].f_10 = 1;
	Global_113386.f_14051[0 /*20*/].f_8 = 1;
	Global_113386.f_14051[0 /*20*/].f_9 = 0;
	Global_113386.f_14051[0 /*20*/].f_17 = 0;
	StringCopy(&(Global_113386.f_14051[1 /*20*/]), "cellphone_badger", 24);
	Global_113386.f_14051[1 /*20*/].f_6 = 2;
	StringCopy(&(Global_113386.f_14051[1 /*20*/].f_11), "PHONE_GENERIC_RING_02", 24);
	Global_113386.f_14051[1 /*20*/].f_7 = 3;
	Global_113386.f_14051[1 /*20*/].f_10 = 1;
	Global_113386.f_14051[1 /*20*/].f_8 = 3;
	Global_113386.f_14051[1 /*20*/].f_9 = 0;
	Global_113386.f_14051[1 /*20*/].f_17 = 0;
	StringCopy(&(Global_113386.f_14051[2 /*20*/]), "cellphone_facade", 24);
	Global_113386.f_14051[2 /*20*/].f_6 = 3;
	StringCopy(&(Global_113386.f_14051[2 /*20*/].f_11), "PHONE_GENERIC_RING_03", 24);
	Global_113386.f_14051[2 /*20*/].f_7 = 2;
	Global_113386.f_14051[2 /*20*/].f_10 = 1;
	Global_113386.f_14051[2 /*20*/].f_8 = 2;
	Global_113386.f_14051[2 /*20*/].f_9 = 0;
	Global_113386.f_14051[2 /*20*/].f_17 = 0;
	StringCopy(&(Global_113386.f_14051[3 /*20*/]), "cellphone_ifruit", 24);
	Global_113386.f_14051[3 /*20*/].f_6 = 1;
	StringCopy(&(Global_113386.f_14051[3 /*20*/].f_11), "PHONE_GENERIC_RING_01", 24);
	Global_113386.f_14051[3 /*20*/].f_7 = 1;
	Global_113386.f_14051[3 /*20*/].f_10 = 1;
	Global_113386.f_14051[3 /*20*/].f_8 = 1;
	Global_113386.f_14051[3 /*20*/].f_9 = 0;
	Global_113386.f_14051[3 /*20*/].f_17 = 0;
}

void func_675(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x84243
{
	Global_8941[iParam0 /*2811*/][iParam1 /*281*/] = iParam2;
	Global_8941[iParam0 /*2811*/][iParam1 /*281*/].f_1 = iParam2;
	StringCopy(&(Global_8941[iParam0 /*2811*/][iParam1 /*281*/].f_2), sParam3, 16);
	Global_8941[iParam0 /*2811*/][iParam1 /*281*/].f_6 = iParam4;
	Global_8941[iParam0 /*2811*/][iParam1 /*281*/].f_280 = iParam5;
	if (Global_8941[iParam0 /*2811*/][iParam1 /*281*/].f_1 == 0)
	{
		Global_8941[iParam0 /*2811*/][iParam1 /*281*/].f_1 = 0;
	}
}

void func_676(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)//Position - 0x842C4
{
	func_684(iParam0, iParam1);
	func_683(iParam0, iParam2);
	func_681(iParam0, __LIB_39__::func_424(iParam0));
	func_680(iParam0, sParam3);
	func_679(iParam0, sParam4);
	sParam5 = sParam5;
	Global_117[iParam0 /*10*/].f_8 = iParam6;
	Global_117[iParam0 /*10*/].f_9 = iParam7;
	StringCopy(&(Global_117[iParam0 /*10*/]), sParam8, 16);
	func_678(iParam0, iParam9);
	iParam10 = iParam10;
	__LIB_0__::func_171(iParam0, 0, iParam11);
	__LIB_0__::func_171(iParam0, 1, iParam12);
	__LIB_0__::func_171(iParam0, 2, iParam13);
	StringCopy(&(Global_117[iParam0 /*10*/].f_4), sParam14, 16);
	func_677(iParam0, iParam15);
}

void func_677(int iParam0, var uParam1)//Position - 0x84359
{
	Global_1998[iParam0 /*29*/].f_17 = uParam1;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_17 = uParam1;
	}
}

void func_678(int iParam0, var uParam1)//Position - 0x84382
{
	Global_1998[iParam0 /*29*/].f_11 = uParam1;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_11 = uParam1;
	}
}

void func_679(int iParam0, char* sParam1)//Position - 0x843AB
{
	StringCopy(&(Global_1998[iParam0 /*29*/].f_7), sParam1, 16);
	if (iParam0 < 162)
	{
		StringCopy(&(Global_113386.f_28050[iParam0 /*29*/].f_7), sParam1, 16);
	}
}

void func_680(int iParam0, char* sParam1)//Position - 0x843D8
{
	StringCopy(&(Global_1998[iParam0 /*29*/].f_3), sParam1, 16);
	if (iParam0 < 162)
	{
		StringCopy(&(Global_113386.f_28050[iParam0 /*29*/].f_3), sParam1, 16);
	}
}

void func_681(int iParam0, var uParam1)//Position - 0x84405
{
	Global_1998[iParam0 /*29*/].f_2 = uParam1;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_2 = uParam1;
	}
}

void func_683(int iParam0, var uParam1)//Position - 0x8443F
{
	Global_1998[iParam0 /*29*/].f_1 = uParam1;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_1 = uParam1;
	}
}

void func_684(int iParam0, var uParam1)//Position - 0x84468
{
	Global_1998[iParam0 /*29*/] = uParam1;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/] = uParam1;
	}
}

void func_685()//Position - 0x8448D
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	Global_113386.f_10194.f_3853 = 0f;
	Global_113113 = 69f;
	fVar0 = (55f / Global_113113);
	func_686(0, 1, fVar0, 0, 0, "M_ARM1" /* GXT: Franklin and Lamar */, 0, 127, 0, 0);
	func_686(1, 1, fVar0, 0, 0, "M_ARM2" /* GXT: Repossession */, 1, 127, 0, 0);
	func_686(2, 1, fVar0, 0, 0, "M_ARM3" /* GXT: Complications */, 2, 127, 0, 0);
	func_686(3, 1, fVar0, 0, 0, "M_CAR1" /* GXT: I Fought the Law... */, 8, 127, 0, 0);
	func_686(4, 1, fVar0, 0, 0, "M_CAR2" /* GXT: Eye in the Sky */, 9, 127, 0, 0);
	func_686(5, 1, fVar0, 0, 0, "M_CAR3" /* GXT: Deep Inside */, 10, 127, 0, 0);
	func_686(6, 1, fVar0, 0, 0, "M_CAR4" /* GXT: Pack Man */, 11, 127, 0, 0);
	func_686(7, 1, fVar0, 0, 0, "M_CHN1" /* GXT: Trevor Philips Industries */, 12, 127, 0, 0);
	func_686(8, 1, fVar0, 0, 0, "M_CHN2" /* GXT: Crystal Maze */, 13, 127, 0, 0);
	func_686(9, 1, fVar0, 0, 0, "M_EXL1" /* GXT: Minor Turbulence */, 14, 127, 0, 0);
	func_686(10, 1, fVar0, 0, 0, "M_EXL2" /* GXT: Predator */, 15, 127, 0, 0);
	func_686(11, 1, fVar0, 0, 0, "M_EXL3" /* GXT: Derailed */, 16, 127, 0, 0);
	func_686(12, 1, fVar0, 0, 0, "M_FAM1" /* GXT: Father/Son */, 17, 127, 0, 0);
	func_686(13, 1, fVar0, 0, 0, "M_FAM2" /* GXT: Daddy's Little Girl */, 18, 127, 0, 0);
	func_686(14, 1, fVar0, 0, 0, "M_FAM3" /* GXT: Marriage Counseling */, 19, 127, 0, 0);
	func_686(15, 1, fVar0, 0, 0, "M_FAM4" /* GXT: Fame or Shame */, 20, 127, 0, 0);
	func_686(16, 1, fVar0, 0, 0, "M_FAM5" /* GXT: Did Somebody Say Yoga? */, 21, 127, 0, 0);
	func_686(17, 1, fVar0, 0, 0, "M_FAM6" /* GXT: Reuniting the Family */, 22, 127, 0, 0);
	func_686(18, 1, fVar0, 0, 0, "M_FIB1" /* GXT: Dead Man Walking */, 29, 127, 0, 0);
	func_686(19, 1, fVar0, 0, 0, "M_FIB2" /* GXT: Three's Company */, 30, 127, 0, 0);
	func_686(20, 1, fVar0, 0, 0, "M_FIB3" /* GXT: By the Book */, 31, 127, 0, 0);
	func_686(21, 1, fVar0, 0, 0, "M_FB4P1" /* GXT: Trash Truck */, 33, 127, 0, 0);
	func_686(22, 1, fVar0, 0, 0, "M_FB4P2" /* GXT: Tow Truck */, 34, 127, 0, 0);
	func_686(23, 1, fVar0, 0, 0, "M_FB4P3" /* GXT: Getaway Vehicle */, 35, 127, 0, 0);
	func_686(24, 1, fVar0, 0, 0, "M_FB4P4" /* GXT: Masks */, 36, 127, 0, 0);
	func_686(25, 1, fVar0, 0, 0, "M_FB4P5" /* GXT: Boiler Suits */, 37, 127, 0, 0);
	func_686(26, 1, fVar0, 0, 0, "M_FIB4" /* GXT: Blitz Play */, 38, 127, 0, 0);
	func_686(27, 1, fVar0, 0, 0, "M_FIB5" /* GXT: Monkey Business */, 39, 127, 0, 0);
	func_686(28, 1, fVar0, 0, 0, "M_FRA0" /* GXT: Chop */, 40, 127, 0, 0);
	func_686(29, 1, fVar0, 0, 0, "M_FRA1" /* GXT: Hood Safari */, 41, 127, 0, 0);
	func_686(30, 1, fVar0, 0, 0, "M_FRA2" /* GXT: Lamar Down */, 42, 127, 0, 0);
	func_686(31, 1, fVar0, 0, 0, "M_LM1" /* GXT: The Long Stretch */, 43, 127, 0, 0);
	func_686(32, 1, fVar0, 0, 0, "M_LS1" /* GXT: Friend Request */, 44, 127, 0, 0);
	func_686(34, 1, fVar0, 0, 0, "M_MIC1" /* GXT: Bury the Hatchet */, 46, 127, 0, 0);
	func_686(35, 1, fVar0, 0, 0, "M_MIC2" /* GXT: Fresh Meat */, 47, 127, 0, 0);
	func_686(36, 1, fVar0, 0, 0, "M_MIC3" /* GXT: The Wrap Up */, 48, 127, 0, 0);
	func_686(37, 1, fVar0, 0, 0, "M_MIC4" /* GXT: Meltdown */, 49, 127, 0, 0);
	func_686(38, 1, fVar0, 0, 0, "M_PRO1" /* GXT: Prologue */, 53, 127, 0, 0);
	func_686(39, 1, fVar0, 0, 0, "M_MAR1" /* GXT: Caida Libre */, 45, 127, 0, 0);
	func_686(40, 1, fVar0, 0, 0, "M_SOL1" /* GXT: Mr. Richards */, 59, 127, 0, 0);
	func_686(41, 1, fVar0, 0, 0, "M_SOL2" /* GXT: The Ballad of Rocco */, 60, 127, 0, 0);
	func_686(42, 1, fVar0, 0, 0, "M_SOL3" /* GXT: Legal Trouble */, 61, 127, 0, 0);
	func_686(43, 1, fVar0, 0, 0, "M_TRV1" /* GXT: Mr. Philips */, 62, 127, 0, 0);
	func_686(44, 1, fVar0, 0, 0, "M_TRV2" /* GXT: Nervous Ron */, 63, 127, 0, 0);
	func_686(45, 1, fVar0, 0, 0, "M_TRV3" /* GXT: Friends Reunited */, 64, 127, 0, 0);
	func_686(46, 1, fVar0, 0, 0, "M_TRV4" /* GXT: Hang Ten */, 65, 127, 0, 0);
	func_686(47, 1, fVar0, 0, 0, "M_AH1" /* GXT: Cleaning out the Bureau */, 66, 127, 0, 0);
	func_686(48, 1, fVar0, 0, 0, "M_AH2" /* GXT: Architect's Plans */, 67, 127, 0, 0);
	func_686(49, 1, fVar0, 0, 0, "M_AH3a" /* GXT: The Bureau Raid */, 69, 127, 1, 0);
	func_686(50, 1, fVar0, 0, 0, "FHPB", 77, 127, 0, 0);
	func_686(51, 1, fVar0, 0, 0, "M_FH1" /* GXT: Surveying the Score */, 76, 127, 0, 0);
	func_686(52, 1, fVar0, 0, 0, "M_FH2a" /* GXT: The Big Score */, 84, 127, 1, 0);
	func_686(53, 1, fVar0, 0, 0, "M_JH1" /* GXT: Casing the Jewel Store */, 86, 127, 0, 0);
	func_686(54, 1, fVar0, 0, 0, "SC_JWL_P_CHOICE" /* GXT: Jewel Store Job Prep */, 87, 127, 1, 0);
	func_686(55, 1, fVar0, 0, 0, "M_JH2A" /* GXT: The Jewel Store Job */, 90, 127, 0, 0);
	func_686(57, 1, fVar0, 0, 0, "M_RH1" /* GXT: Paleto Score Setup */, 91, 127, 0, 0);
	func_686(56, 1, fVar0, 0, 0, "M_RHP1" /* GXT: Military Hardware */, 92, 127, 0, 0);
	func_686(58, 1, fVar0, 0, 0, "M_RH2" /* GXT: The Paleto Score */, 93, 127, 0, 0);
	func_686(59, 1, fVar0, 0, 0, "DHP1", 72, 127, 0, 0);
	func_686(60, 1, fVar0, 0, 0, "M_DH1" /* GXT: Scouting the Port */, 71, 127, 0, 0);
	func_686(61, 1, fVar0, 0, 0, "M_DH2A" /* GXT: The Merryweather Heist */, 74, 127, 1, 0);
	func_686(62, 1, fVar0, 0, 0, "SC_FINP1_CHOICE" /* GXT: The Big Score Stage 1 */, 78, 127, 1, 0);
	func_686(63, 1, fVar0, 0, 0, "SC_FINP2_CHOICE" /* GXT: The Big Score Stage 2 */, 80, 127, 1, 0);
	func_686(64, 0, fVar0, 0, 0, "M_FINC1" /* GXT: The Third Way */, 26, 127, 0, 0);
	func_686(65, 1, fVar0, 0, 0, "SC_FIN_K_CHOICE" /* GXT: The Big Decision */, 24, 127, 1, 0);
	func_686(144, 1, fVar0, 0, 0, "ASS1", 3, 127, 0, 0);
	func_686(145, 1, fVar0, 0, 0, "ASS2", 4, 127, 0, 0);
	func_686(146, 1, fVar0, 0, 0, "ASS3", 5, 127, 0, 0);
	func_686(147, 1, fVar0, 0, 0, "ASS4", 6, 127, 0, 0);
	func_686(148, 1, fVar0, 0, 0, "ASS5", 7, 127, 0, 0);
	Global_113116 = 20f;
	fVar1 = (10f / Global_113116);
	func_686(66, 7, fVar1, 0, 0, "SC_RC_OME1" /* GXT: Far Out */, 44, 127, 0, 0);
	func_686(67, 7, fVar1, 0, 0, "SC_RC_OME2" /* GXT: The Final Frontier */, 45, 127, 0, 0);
	func_686(68, 7, fVar1, 0, 0, "SC_RC_DRE1" /* GXT: A Starlet in Vinewood */, 8, 127, 0, 0);
	func_686(69, 8, fVar1, 0, 0, "SC_RC_BA1" /* GXT: Grass Roots - Michael */, 2, 127, 0, 0);
	func_686(70, 8, fVar1, 0, 0, "SC_RC_BA2" /* GXT: Grass Roots -  Trevor */, 3, 127, 0, 0);
	func_686(71, 7, fVar1, 0, 0, "SC_RC_BA3" /* GXT: Grass Roots - Franklin */, 4, 127, 0, 0);
	func_686(72, 7, fVar1, 0, 0, "SC_RC_BA4" /* GXT: Grass Roots - The Smoke-in */, 7, 127, 0, 0);
	func_686(73, 8, fVar1, 0, 0, "SC_RC_EPS1" /* GXT: Seeking The Truth */, 9, 127, 0, 0);
	func_686(74, 8, fVar1, 0, 0, "SC_RC_EPS2" /* GXT: Accepting The Truth */, 10, 127, 0, 0);
	func_686(75, 8, fVar1, 0, 0, "SC_RC_EPS3" /* GXT: Assuming The Truth */, 11, 127, 0, 0);
	func_686(76, 8, fVar1, 0, 0, "SC_RC_EPS4" /* GXT: Chasing The Truth */, 12, 127, 0, 0);
	func_686(77, 8, fVar1, 0, 0, "SC_RC_EPS5" /* GXT: Bearing The Truth */, 13, 127, 0, 0);
	func_686(78, 8, fVar1, 0, 0, "SC_RC_EPS6" /* GXT: Delivering The Truth */, 14, 127, 0, 0);
	func_686(79, 8, fVar1, 0, 0, "SC_RC_EPS7" /* GXT: Exercising The Truth */, 15, 127, 0, 0);
	func_686(80, 8, fVar1, 0, 0, "SC_RC_EPS8" /* GXT: Unknowing The Truth */, 16, 127, 0, 0);
	func_686(81, 7, fVar1, 0, 0, "SC_RC_EXT1" /* GXT: Risk Assessment */, 17, 127, 0, 0);
	func_686(82, 7, fVar1, 0, 0, "SC_RC_EXT2" /* GXT: Liquidity Risk */, 18, 127, 0, 0);
	func_686(83, 7, fVar1, 0, 0, "SC_RC_EXT3" /* GXT: Targeted Risk */, 19, 127, 0, 0);
	func_686(84, 7, fVar1, 0, 0, "SC_RC_EXT4" /* GXT: Uncalculated Risk */, 20, 127, 0, 0);
	func_686(85, 8, fVar1, 0, 0, "SC_RC_FAN1" /* GXT: Exercising Demons - Michael */, 21, 127, 0, 0);
	func_686(86, 8, fVar1, 0, 0, "SC_RC_FAN2" /* GXT: Exercising Demons - Trevor */, 22, 127, 0, 0);
	func_686(87, 7, fVar1, 0, 0, "SC_RC_FAN3" /* GXT: Exercising Demons - Franklin */, 23, 127, 0, 0);
	func_686(178, 8, fVar1, 0, 0, "SC_RC_HUN1" /* GXT: Target Practice */, 25, 127, 0, 0);
	func_686(179, 8, fVar1, 0, 0, "SC_RC_HUN2" /* GXT: Fair Game */, 26, 127, 0, 0);
	func_686(88, 8, fVar1, 0, 0, "SC_RC_JOS1" /* GXT: Extra Commission */, 27, 127, 0, 0);
	func_686(89, 8, fVar1, 0, 0, "SC_RC_JOS2" /* GXT: Closing the Deal */, 28, 127, 0, 0);
	func_686(90, 8, fVar1, 0, 0, "SC_RC_JOS3" /* GXT: Surreal Estate */, 29, 127, 0, 0);
	func_686(91, 8, fVar1, 0, 0, "SC_RC_JOS4" /* GXT: Breach of Contract */, 30, 127, 0, 0);
	func_686(92, 8, fVar1, 0, 0, "SC_RC_MIN1" /* GXT: The Civil Border Patrol */, 32, 127, 0, 0);
	func_686(93, 8, fVar1, 0, 0, "SC_RC_MIN2" /* GXT: An American Welcome */, 33, 127, 0, 0);
	func_686(94, 8, fVar1, 0, 0, "SC_RC_MIN3" /* GXT: Minute Man Blues */, 34, 127, 0, 0);
	func_686(95, 8, fVar1, 0, 0, "SC_RC_NI1" /* GXT: Nigel and Mrs. Thornhill */, 37, 127, 0, 0);
	func_686(96, 8, fVar1, 0, 0, "SC_RC_NI1A" /* GXT: Vinewood Souvenirs - Willie */, 38, 127, 0, 0);
	func_686(97, 8, fVar1, 0, 0, "SC_RC_NI1B" /* GXT: Vinewood Souvenirs - Tyler */, 39, 127, 0, 0);
	func_686(98, 8, fVar1, 0, 0, "SC_RC_NI1C" /* GXT: Vinewood Souvenirs - Kerry */, 40, 127, 0, 0);
	func_686(99, 8, fVar1, 0, 0, "SC_RC_NI1D" /* GXT: Vinewood Souvenirs - Mark */, 41, 127, 0, 0);
	func_686(100, 8, fVar1, 0, 0, "SC_RC_NI2" /* GXT: Vinewood Souvenirs - Al Di Napoli */, 42, 127, 0, 0);
	func_686(101, 8, fVar1, 0, 0, "SC_RC_NI3" /* GXT: Vinewood Souvenirs - The Last Act */, 43, 127, 0, 0);
	func_686(102, 7, fVar1, 0, 0, "SC_RC_PA1" /* GXT: Paparazzo */, 46, 127, 0, 0);
	func_686(103, 7, fVar1, 0, 0, "SC_RC_PA2" /* GXT: Paparazzo - The Sex Tape */, 47, 127, 0, 0);
	func_686(104, 7, fVar1, 0, 0, "SC_RC_PA3" /* GXT: Paparazzo - The Partnership */, 48, 127, 0, 0);
	func_686(105, 7, fVar1, 0, 0, "SC_RC_PA4" /* GXT: Paparazzo - Reality Check */, 51, 127, 0, 0);
	func_686(208, 7, fVar1, 0, 0, "SC_RC_TON1" /* GXT: Pulling Favors */, 58, 127, 0, 0);
	func_686(209, 7, fVar1, 0, 0, "SC_RC_TON2" /* GXT: Pulling Another Favor */, 59, 127, 0, 0);
	func_686(210, 7, fVar1, 0, 0, "SC_RC_TON3" /* GXT: Pulling Favors Again */, 60, 127, 0, 0);
	func_686(211, 7, fVar1, 0, 0, "SC_RC_TON4" /* GXT: Still Pulling Favors */, 61, 127, 0, 0);
	func_686(212, 7, fVar1, 0, 0, "SC_RC_TON5" /* GXT: Pulling One Last Favor */, 62, 127, 0, 0);
	func_686(106, 7, fVar1, 0, 0, "SC_RC_HAO1" /* GXT: Shift Work */, 24, 127, 0, 0);
	func_686(107, 8, fVar1, 0, 0, "SC_RC_MAU1" /* GXT: Special Bonds */, 31, 127, 0, 0);
	func_686(108, 8, fVar1, 0, 0, "SC_RC_SAS1" /* GXT: The Last One */, 57, 127, 0, 0);
	func_686(109, 8, fVar1, 0, 0, "SC_RC_ABI1" /* GXT: Death At Sea */, 0, 127, 0, 0);
	func_686(110, 8, fVar1, 0, 0, "SC_RC_MRS1" /* GXT: Mrs Philips */, 35, 127, 0, 0);
	func_686(111, 8, fVar1, 0, 0, "SC_RC_MRS2" /* GXT: Damaged Goods */, 36, 127, 0, 0);
	Global_113114 = 42f;
	fVar2 = (10f / Global_113114);
	func_686(112, 3, fVar2, 0, 0, "SC_MG_OFF1" /* GXT: Off-road Race 1 */, 4, 0, 0, 0);
	func_686(113, 3, fVar2, 0, 0, "SC_MG_OFF2" /* GXT: Off-road Race 2 */, 4, 1, 0, 0);
	func_686(114, 3, fVar2, 0, 0, "SC_MG_OFF3" /* GXT: Off-road Race 3 */, 4, 2, 0, 0);
	func_686(115, 3, fVar2, 0, 0, "SC_MG_OFF4" /* GXT: Off-road Race 4 */, 4, 3, 0, 0);
	func_686(116, 3, fVar2, 0, 0, "SC_MG_OFF5" /* GXT: Off-road Race 5 */, 4, 4, 0, 0);
	func_686(117, 3, fVar2, 0, 0, "SC_MG_OFF6" /* GXT: Off-road Race 6 */, 4, 5, 0, 0);
	func_686(118, 0, fVar2, 0, 0, "MGSRm", 11, 0, 0, 0);
	func_686(119, 3, fVar2, 0, 0, "SC_MG_SHHAN" /* GXT: Shooting Range: Hand Guns */, 11, 0, 0, 0);
	func_686(120, 3, fVar2, 0, 0, "SC_MG_SHSUB" /* GXT: Shooting Range: Submachine Guns */, 11, 1, 0, 0);
	func_686(121, 3, fVar2, 0, 0, "SC_MG_SHRIF" /* GXT: Shooting Range: Assault Rifles */, 11, 2, 0, 0);
	func_686(122, 3, fVar2, 0, 0, "SC_MG_SHLMG" /* GXT: Shooting Range: Light Machine Guns */, 11, 3, 0, 0);
	func_686(123, 3, fVar2, 0, 0, "SC_MG_SHHVY" /* GXT: Shooting Range: Heavy Gun */, 11, 4, 0, 0);
	func_686(124, 3, fVar2, 0, 0, "SC_MG_SHSHO" /* GXT: Shooting Range: Shotguns */, 11, 5, 0, 0);
	func_686(125, 4, fVar2, 0, 0, "MGSP", 10, 0, 0, 0);
	func_686(126, 3, fVar2, 0, 0, "SC_MG_TENN" /* GXT: Tennis */, 13, 0, 0, 0);
	func_686(127, 3, fVar2, 0, 0, "SC_MG_GOLF" /* GXT: Golf */, 2, 0, 0, 0);
	func_686(128, 3, fVar2, 0, 0, "SC_MG_BJUM" /* GXT: Parachuting - Base Jumps */, 0, 0, 0, 0);
	func_686(129, 3, fVar2, 0, 0, "SC_MG_SKYD" /* GXT: Parachuting - Heli Jumps */, 0, 1, 0, 0);
	func_686(141, 3, fVar2, 0, 0, "SC_MG_TRI1" /* GXT: Triathlon 1: Trailer Park */, 17, 0, 0, 0);
	func_686(142, 3, fVar2, 0, 0, "SC_MG_TRI2" /* GXT: Triathlon 2: Muscle Beach */, 17, 1, 0, 0);
	func_686(143, 3, fVar2, 0, 0, "SC_MG_TRI3" /* GXT: Triathlon 3: Mountain Road */, 17, 2, 0, 0);
	func_686(131, 3, fVar2, 0, 0, "SC_MG_STRP" /* GXT: Stripclub */, 9, 0, 0, 0);
	func_686(130, 3, fVar2, 0, 0, "SC_MG_DART" /* GXT: Darts */, 1, 0, 0, 0);
	func_686(132, 3, fVar2, 0, 0, "SC_MG_SNCA" /* GXT: Sea Race: North Coast */, 7, 0, 0, 0);
	func_686(133, 3, fVar2, 0, 0, "SC_MG_SSC" /* GXT: Sea Race: South Coast */, 7, 1, 0, 0);
	func_686(134, 3, fVar2, 0, 0, "SC_MG_SCAA" /* GXT: Sea Race: Canyon */, 7, 2, 0, 0);
	func_686(135, 3, fVar2, 0, 0, "SC_MG_SCAB" /* GXT: Sea Race: Los Santos */, 7, 3, 0, 0);
	func_686(136, 3, fVar2, 0, 0, "SC_MG_SRCC" /* GXT: Street Race: City Circuit */, 8, 0, 0, 0);
	func_686(137, 3, fVar2, 0, 0, "SC_MG_SRAP" /* GXT: Street Race: Airport */, 8, 1, 0, 0);
	func_686(138, 3, fVar2, 0, 0, "SC_MG_SRFW" /* GXT: Street Race: Freeway */, 8, 2, 0, 0);
	func_686(139, 3, fVar2, 0, 0, "SC_MG_SRVC" /* GXT: Street Race: Vespucci Canals */, 8, 3, 0, 0);
	func_686(140, 3, fVar2, 0, 0, "SC_MG_SRLS" /* GXT: Street Race: South Los Santos */, 8, 4, 0, 0);
	func_686(181, 3, fVar2, 0, 0, "SC_MGPS1" /* GXT: Flight School - Training Take Off */, 5, 0, 0, 0);
	func_686(182, 3, fVar2, 0, 0, "SC_MGPS2" /* GXT: Flight School - Runway Landing */, 5, 1, 0, 0);
	func_686(183, 3, fVar2, 0, 0, "SC_MGPS3" /* GXT: Flight School - Inverted Flight */, 5, 2, 0, 0);
	func_686(184, 3, fVar2, 0, 0, "SC_MGPS4" /* GXT: Flight School - Knife Flight */, 5, 3, 0, 0);
	func_686(185, 3, fVar2, 0, 0, "SC_MGPS5" /* GXT: Flight School - Loop the loop */, 5, 4, 0, 0);
	func_686(186, 3, fVar2, 0, 0, "SC_MGPS6" /* GXT: Flight School - Flat Hatting */, 5, 5, 0, 0);
	func_686(187, 3, fVar2, 0, 0, "SC_MGPS7" /* GXT: Flight School - Touch Down */, 5, 6, 0, 0);
	func_686(188, 3, fVar2, 0, 0, "SC_MGPS8" /* GXT: Flight School - Earn Your Wings */, 5, 7, 0, 0);
	func_686(189, 3, fVar2, 0, 0, "SC_MGPS9" /* GXT: Flight School - Helicopter Course */, 5, 8, 0, 0);
	func_686(190, 3, fVar2, 0, 0, "SC_MGPS10" /* GXT: Flight School - Helicopter Speed Run */, 5, 9, 0, 0);
	func_686(191, 3, fVar2, 0, 0, "SC_MGPS11" /* GXT: Flight School - Skydiving */, 5, 10, 0, 0);
	func_686(192, 3, fVar2, 0, 0, "SC_MGPS12" /* GXT: Flight School - Drop Zone */, 5, 11, 0, 0);
	func_686(193, 0, fVar2, 0, 0, "SC_MGPS13" /* GXT: Flight School 13 - Formation Display */, 5, 12, 0, 0);
	Global_113115 = 0f;
	fVar3 = (0f / Global_113115);
	func_686(149, 6, fVar3, 0, 0, "SC_OJBB3" /* GXT: Bail Bonds - Quarry */, 15, 0, 0, 0);
	func_686(150, 6, fVar3, 0, 0, "SC_OJBB5" /* GXT: Bail Bonds - Farm */, 15, 1, 0, 0);
	func_686(151, 6, fVar3, 0, 0, "SC_OJBB6" /* GXT: Bail Bonds - Hobo */, 15, 2, 0, 0);
	func_686(152, 6, fVar3, 0, 0, "SC_OJBB7" /* GXT: Bail Bonds - Mountain */, 15, 3, 0, 0);
	func_686(153, 6, fVar3, 0, 0, "OJDA1", 15, 0, 0, 0);
	func_686(154, 6, fVar3, 0, 0, "OJDA2", 15, 1, 0, 0);
	func_686(155, 6, fVar3, 0, 0, "OJDA3", 15, 2, 0, 0);
	func_686(156, 6, fVar3, 0, 0, "OJDA4", 15, 3, 0, 0);
	func_686(157, 6, fVar3, 0, 0, "OJDA5", 15, 4, 0, 0);
	func_686(158, 6, fVar3, 0, 0, "OJDG1", 16, 0, 0, 0);
	func_686(159, 6, fVar3, 0, 0, "OJDG2", 16, 1, 0, 0);
	func_686(160, 6, fVar3, 0, 0, "OJDG3", 16, 2, 0, 0);
	func_686(161, 6, fVar3, 0, 0, "OJDG4", 16, 3, 0, 0);
	func_686(162, 6, fVar3, 0, 0, "OJDG5", 16, 4, 0, 0);
	func_686(163, 0, fVar3, 0, 0, "OJDG6", 16, 5, 0, 0);
	func_686(164, 0, fVar3, 0, 0, "OJDG7", 16, 6, 0, 0);
	func_686(165, 0, fVar3, 0, 0, "OJDG8", 16, 7, 0, 0);
	func_686(166, 0, fVar3, 0, 0, "OJDG9", 16, 8, 0, 0);
	func_686(167, 0, fVar3, 0, 0, "OJDG10", 16, 9, 0, 0);
	func_686(168, 0, fVar3, 0, 0, "OJGD11", 16, 10, 0, 0);
	func_686(169, 0, fVar3, 0, 0, "OJDG12", 16, 11, 0, 0);
	func_686(170, 0, fVar3, 0, 0, "OJDG13", 16, 12, 0, 0);
	func_686(171, 0, fVar3, 0, 0, "OJDG14", 16, 13, 0, 0);
	func_686(172, 0, fVar3, 0, 0, "OJDG15", 16, 14, 0, 0);
	func_686(173, 0, fVar3, 0, 0, "OJDG16", 16, 15, 0, 0);
	func_686(174, 0, fVar3, 0, 0, "OJDG17", 16, 16, 0, 0);
	func_686(175, 0, fVar3, 0, 0, "OJDG18", 16, 17, 0, 0);
	func_686(176, 0, fVar3, 0, 0, "OJDG19", 16, 18, 0, 0);
	func_686(177, 0, fVar3, 0, 0, "OJDG20", 16, 19, 0, 0);
	func_686(194, 6, fVar3, 0, 0, "SC_RC_RAM1" /* GXT: Rampage 1 */, 6, 0, 0, 0);
	func_686(196, 6, fVar3, 0, 0, "SC_RC_RAM2" /* GXT: Rampage 2 */, 6, 1, 0, 0);
	func_686(197, 6, fVar3, 0, 0, "SC_RC_RAM3" /* GXT: Rampage 3 */, 6, 2, 0, 0);
	func_686(198, 6, fVar3, 0, 0, "SC_RC_RAM4" /* GXT: Rampage 4 */, 6, 3, 0, 0);
	func_686(195, 6, fVar3, 0, 0, "SC_RC_RAM5" /* GXT: Rampage 5 */, 6, 4, 0, 0);
	func_686(180, 6, fVar3, 0, 0, "OJHU", 3, 0, 0, 0);
	func_686(199, 0, fVar3, 0, 0, "OJTX1", 12, 0, 0, 0);
	func_686(200, 0, fVar3, 0, 0, "OJTX2", 12, 1, 0, 0);
	func_686(201, 0, fVar3, 0, 0, "OJTX3", 12, 2, 0, 0);
	func_686(202, 0, fVar3, 0, 0, "OJTX4", 12, 3, 0, 0);
	func_686(203, 0, fVar3, 0, 0, "OJTX5", 12, 4, 0, 0);
	func_686(204, 0, fVar3, 0, 0, "OJTX7", 12, 6, 0, 0);
	func_686(205, 0, fVar3, 0, 0, "OJTX8", 12, 7, 0, 0);
	func_686(206, 0, fVar3, 0, 0, "OJTX9", 12, 8, 0, 0);
	func_686(207, 0, fVar3, 0, 0, "OJTX10", 12, 9, 0, 0);
	Global_113117 = 59f;
	Global_113112 = 14;
	fVar4 = (5f / Global_113117);
	func_686(213, 9, fVar4, 0, 0, "RE8A", 127, 127, 0, 0);
	func_686(214, 9, fVar4, 0, 0, "RE8B", 127, 127, 0, 0);
	func_686(215, 9, fVar4, 0, 0, "RE66", 127, 127, 0, 0);
	func_686(219, 9, fVar4, 0, 0, "RE25", 127, 127, 0, 0);
	func_686(216, 9, fVar4, 0, 0, "RE28", 127, 127, 0, 0);
	func_686(217, 9, fVar4, 0, 0, "RE32A", 127, 127, 0, 0);
	func_686(218, 9, fVar4, 0, 0, "RE35", 127, 127, 0, 0);
	func_686(221, 9, fVar4, 0, 0, "RE44A", 127, 127, 0, 0);
	func_686(222, 9, fVar4, 0, 0, "RE44B", 127, 127, 0, 0);
	func_686(223, 0, fVar4, 0, 0, "RE58", 127, 127, 0, 0);
	func_686(220, 0, fVar4, 0, 0, "RE41", 127, 127, 0, 0);
	func_686(224, 9, fVar4, 0, 0, "RE1A", 127, 127, 0, 0);
	func_686(225, 9, fVar4, 0, 0, "RE1B", 127, 127, 0, 0);
	func_686(226, 9, fVar4, 0, 0, "RE2A", 127, 127, 0, 0);
	func_686(227, 9, fVar4, 0, 0, "RE3A", 127, 127, 0, 0);
	func_686(228, 9, fVar4, 0, 0, "RE3B", 127, 127, 0, 0);
	func_686(232, 0, fVar4, 0, 0, "RE5A", 127, 127, 0, 0);
	func_686(233, 0, fVar4, 0, 0, "RE5B", 127, 127, 0, 0);
	func_686(234, 0, fVar4, 0, 0, "RE5C", 127, 127, 0, 0);
	func_686(235, 0, fVar4, 0, 0, "RE5D", 127, 127, 0, 0);
	func_686(236, 0, fVar4, 0, 0, "RE5E", 127, 127, 0, 0);
	func_686(237, 0, fVar4, 0, 0, "RE5F", 127, 127, 0, 0);
	func_686(238, 0, fVar4, 0, 0, "RE5G", 127, 127, 0, 0);
	func_686(239, 0, fVar4, 0, 0, "RE5H", 127, 127, 0, 0);
	func_686(240, 0, fVar4, 0, 0, "RE5I", 127, 127, 0, 0);
	func_686(241, 0, fVar4, 0, 0, "RE5J", 127, 127, 0, 0);
	func_686(242, 9, fVar4, 0, 0, "RE6", 127, 127, 0, 0);
	func_686(243, 9, fVar4, 0, 0, "RE7", 127, 127, 0, 0);
	func_686(244, 9, fVar4, 0, 0, "RE11A", 127, 127, 0, 0);
	func_686(245, 9, fVar4, 0, 0, "RE11B", 127, 127, 0, 0);
	func_686(246, 9, fVar4, 0, 0, "RE12A", 127, 127, 0, 0);
	func_686(247, 9, fVar4, 0, 0, "RE12B", 127, 127, 0, 0);
	func_686(248, 9, fVar4, 0, 0, "RE13A", 127, 127, 0, 0);
	func_686(249, 9, fVar4, 0, 0, "RE13B", 127, 127, 0, 0);
	func_686(250, 9, fVar4, 0, 0, "RE14A", 127, 127, 0, 0);
	func_686(251, 9, fVar4, 0, 0, "RE16", 127, 127, 0, 0);
	func_686(252, 9, fVar4, 0, 0, "RE18", 127, 127, 0, 0);
	func_686(253, 9, fVar4, 0, 0, "RE20", 127, 127, 0, 0);
	func_686(254, 9, fVar4, 0, 0, "RE21", 127, 127, 0, 0);
	func_686(255, 9, fVar4, 0, 0, "RE4A", 127, 127, 0, 0);
	func_686(256, 9, fVar4, 0, 0, "RE22", 127, 127, 0, 0);
	func_686(257, 9, fVar4, 0, 0, "RE24A", 127, 127, 0, 0);
	func_686(258, 9, fVar4, 0, 0, "RE24B", 127, 127, 0, 0);
	func_686(259, 9, fVar4, 0, 0, "RE29", 127, 127, 0, 0);
	func_686(260, 9, fVar4, 0, 0, "RE31A", 127, 127, 0, 0);
	func_686(261, 9, fVar4, 0, 0, "RE31B", 127, 127, 0, 0);
	func_686(262, 9, fVar4, 0, 0, "RE31C", 127, 127, 0, 0);
	func_686(263, 0, fVar4, 0, 0, "RE31D", 127, 127, 0, 0);
	func_686(264, 9, fVar4, 0, 0, "RE31E", 127, 127, 0, 0);
	func_686(265, 9, fVar4, 0, 0, "RE62", 127, 127, 0, 0);
	func_686(266, 0, fVar4, 0, 0, "RE36", 127, 127, 0, 0);
	func_686(267, 9, fVar4, 0, 0, "RE37A", 127, 127, 0, 0);
	func_686(268, 9, fVar4, 0, 0, "RE37B", 127, 127, 0, 0);
	func_686(269, 9, fVar4, 0, 0, "RE37C", 127, 127, 0, 0);
	func_686(270, 0, fVar4, 0, 0, "RE37D", 127, 127, 0, 0);
	func_686(229, 9, fVar4, 0, 0, "RE15A", 127, 127, 0, 0);
	func_686(230, 9, fVar4, 0, 0, "RE15B", 127, 127, 0, 0);
	func_686(231, 9, fVar4, 0, 0, "RE15C", 127, 127, 0, 0);
	func_686(271, 9, fVar4, 0, 0, "RE49A", 127, 127, 0, 0);
	func_686(272, 9, fVar4, 0, 0, "RE49B", 127, 127, 0, 0);
	func_686(273, 9, fVar4, 0, 0, "RE49D", 127, 127, 0, 0);
	func_686(274, 9, fVar4, 0, 0, "RE49E", 127, 127, 0, 0);
	func_686(275, 9, fVar4, 0, 0, "RE49F", 127, 127, 0, 0);
	func_686(276, 9, fVar4, 0, 0, "RE49G", 127, 127, 0, 0);
	func_686(277, 9, fVar4, 0, 0, "RE49H", 127, 127, 0, 0);
	func_686(278, 9, fVar4, 0, 0, "RE49I", 127, 127, 0, 0);
	func_686(279, 9, fVar4, 0, 0, "RE49J", 127, 127, 0, 0);
	func_686(280, 9, fVar4, 0, 0, "RE49K", 127, 127, 0, 0);
	func_686(281, 9, fVar4, 0, 0, "RE51A", 127, 127, 0, 0);
	func_686(282, 9, fVar4, 0, 0, "RE51B", 127, 127, 0, 0);
	func_686(283, 9, fVar4, 0, 0, "RE52", 127, 127, 0, 0);
	func_686(284, 0, fVar4, 0, 0, "RE59", 127, 127, 0, 0);
	func_686(285, 9, fVar4, 0, 0, "RE9", 127, 127, 0, 0);
	func_686(318, 9, fVar4, 0, 0, "RE67", 127, 127, 0, 0);
	func_686(319, 9, fVar4, 0, 0, "RE68", 127, 127, 0, 0);
	func_686(320, 9, fVar4, 0, 0, "RE69", 127, 127, 0, 0);
	Global_113118 = 12f;
	fVar5 = (15f / Global_113118);
	func_686(286, 11, fVar5, 0, 0, "SC_CO_UFOP1" /* GXT: Collect Omega Spaceship Parts */, 127, 127, 0, 0);
	func_686(287, 11, fVar5, 0, 0, "SC_CO_DLS1" /* GXT: Collect Dreyfuss Letter Scraps */, 127, 127, 0, 0);
	func_686(288, 11, fVar5, 0, 0, "SC_MSC_CIN" /* GXT: Cinema Visit */, 127, 127, 0, 0);
	func_686(289, 11, fVar5, 0, 0, "SC_MSC_STJ" /* GXT: Stunt Jumps */, 127, 127, 0, 0);
	func_686(290, 11, fVar5, 0, 0, "SC_MSC_BRG" /* GXT: Under The Bridge */, 127, 127, 0, 0);
	func_686(291, 11, fVar5, 0, 0, "SC_MSC_KFT" /* GXT: Knife Flights */, 127, 127, 0, 0);
	func_686(292, 11, fVar5, 0, 0, "SC_MSC_PPY" /* GXT: Property Purchase */, 127, 127, 0, 0);
	func_686(293, 11, fVar5, 0, 0, "SC_MSC_VEH" /* GXT: Online Vehicle Purchase */, 127, 127, 0, 0);
	func_686(294, 11, fVar5, 0, 0, "SC_MSC_CHP" /* GXT: Walk and Play with Chop */, 127, 127, 0, 0);
	func_686(295, 11, fVar5, 0, 0, "SC_MSC_BOO" /* GXT: Booty Call */, 127, 127, 0, 0);
	func_686(296, 11, fVar5, 0, 0, "SC_MSC_HKR" /* GXT: Hooker Hire */, 127, 127, 0, 0);
	func_686(297, 11, fVar5, 0, 0, "SC_MSC_HLD" /* GXT: Shop Hold Up */, 127, 127, 0, 0);
	func_686(298, 12, fVar5, 0, 0, "SC_MSC_DIV" /* GXT: Diving Pickups */, 127, 127, 0, 0);
	func_686(299, 12, fVar5, 0, 0, "SC_MSC_SON" /* GXT: Sonar Collections */, 127, 127, 0, 0);
	func_686(300, 12, fVar5, 0, 0, "SC_MSC_YOG" /* GXT: Yoga */, 127, 127, 0, 0);
	func_686(301, 12, fVar5, 0, 0, "SC_MSC_CAB" /* GXT: Cable Car Ride */, 127, 127, 0, 0);
	func_686(302, 12, fVar5, 0, 0, "SC_MSC_WSH" /* GXT: Car Wash */, 127, 127, 0, 0);
	func_686(303, 12, fVar5, 0, 0, "SC_MSC_FRG" /* GXT: Fairground Visit */, 127, 127, 0, 0);
	func_686(304, 12, fVar5, 0, 0, "SC_MSC_CLT" /* GXT: Clothes Purchase */, 127, 127, 0, 0);
	func_686(305, 12, fVar5, 0, 0, "SC_MSC_MOD" /* GXT: Car Mod Purchase */, 127, 127, 0, 0);
	func_686(306, 12, fVar5, 0, 0, "SC_MSC_BRB" /* GXT: Get a Haircut */, 127, 127, 0, 0);
	func_686(307, 12, fVar5, 0, 0, "SC_MSC_TAT" /* GXT: Get a Tattoo */, 127, 127, 0, 0);
	func_686(308, 12, fVar5, 0, 0, "SC_MSC_GUN" /* GXT: Weapon Purchase */, 127, 127, 0, 0);
	func_686(309, 12, fVar5, 0, 0, "SC_MSC_WTV" /* GXT: Watch TV */, 127, 127, 0, 0);
	func_686(310, 12, fVar5, 0, 0, "SC_MSC_STK" /* GXT: Deal in Stocks */, 127, 127, 0, 0);
	Global_113119 = 4f;
	fVar6 = (5f / Global_113119);
	func_686(311, 0, fVar6, 0, 0, "SC_FR_ARRACT", 127, 127, 0, 0);
	func_686(312, 13, fVar6, 0, 0, "SC_FR_BAR" /* GXT: Friends: Bar Visit */, 127, 127, 0, 0);
	func_686(313, 13, fVar6, 0, 0, "SC_FR_CIN" /* GXT: Friends: Cinema Visit */, 127, 127, 0, 0);
	func_686(314, 13, fVar6, 0, 0, "SC_FR_DAR" /* GXT: Friends: Play Darts */, 127, 127, 0, 0);
	func_686(316, 13, fVar6, 0, 0, "SC_FR_STR" /* GXT: Friends: Strip Club Visit */, 127, 127, 0, 0);
	func_686(315, 14, fVar6, 0, 0, "SC_FR_GOL" /* GXT: Friends: Play Golf */, 127, 127, 0, 0);
	func_686(317, 14, fVar6, 0, 0, "SC_FR_TEN" /* GXT: Friends: Play Tennis */, 127, 127, 0, 0);
	iVar7 = 0;
	fVar8 = 0f;
	while (iVar7 < 321)
	{
		if (!Global_113386.f_10194[iVar7 /*12*/].f_6 == 0)
		{
			fVar8 = (fVar8 + Global_113386.f_10194[iVar7 /*12*/].f_4);
		}
		switch (Global_113386.f_10194[iVar7 /*12*/].f_6)
		{
			case 1:
				Global_113105++;
				break;
			case 3:
				Global_113106++;
				break;
			case 5:
				Global_113107++;
				break;
			case 7:
				Global_113108++;
				break;
			case 9:
				Global_113109++;
				break;
			case 11:
				Global_113110++;
				break;
			case 13:
				Global_113111++;
				break;
			default:
				break;
		}
		iVar7++;
	}
}

void func_686(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x86094
{
	Global_113386.f_10194[iParam0 /*12*/].f_6 = iParam1;
	Global_113386.f_10194[iParam0 /*12*/].f_4 = fParam2;
	Global_113386.f_10194[iParam0 /*12*/].f_5 = iParam3;
	if (iParam4 == 1)
	{
	}
	StringCopy(&(Global_113386.f_10194[iParam0 /*12*/]), sParam5, 16);
	Global_113386.f_10194[iParam0 /*12*/].f_7 = iParam8;
	Global_113386.f_10194[iParam0 /*12*/].f_9 = iParam9;
	if (iParam6 <= 127)
	{
		Global_113386.f_10194[iParam0 /*12*/].f_8 = iParam6;
	}
	if (iParam7 <= 127)
	{
		Global_113386.f_10194[iParam0 /*12*/].f_8 = (Global_113386.f_10194[iParam0 /*12*/].f_8 || SYSTEM::SHIFT_LEFT(iParam7, 7));
	}
}

void func_687()//Position - 0x86141
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_18533[iVar0] = 318;
		iVar1 = 0;
		while (iVar1 < 5)
		{
			Global_113386.f_18533.f_4[iVar0 /*6*/][iVar1] = 318;
			iVar1++;
		}
		iVar0++;
	}
	Global_113386.f_18533.f_23 = 0;
}

void func_688()//Position - 0x86199
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_113386.f_24904[iVar0 /*4*/] = 145;
		iVar0++;
	}
	Global_112096.f_19 = 0;
	Global_112096.f_21 = 0;
	Global_112096 = 0;
	Global_113386.f_24904.f_67 = __LIB_0__::func_464();
}

void func_701()//Position - 0x86A24
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			Global_113386.f_243[iVar1 /*53*/][iVar0] = 50;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_113386.f_243[iVar1 /*53*/].f_2[iVar0 /*5*/] = func_702(iVar1, iVar0);
			Global_113386.f_243[iVar1 /*53*/].f_2[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_702(int iParam0, int iParam1)//Position - 0x86A9F
{
	float fVar0;
	fVar0 = 0f;
	if (iParam0 >= 3)
	{
		return SYSTEM::FLOOR((0.1f * 7500f));
	}
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.01f;
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.01f;
			}
			break;
		case 2:
			if (iParam0 == 0)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.15f;
			}
			break;
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = 0.1f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.1f;
			}
			break;
		case 4:
			if (iParam0 == 0)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.01f;
			}
			break;
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.01f;
			}
			break;
		case 6:
			if (iParam0 == 0)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.01f;
			}
			break;
		case 7:
			if (iParam0 == 0)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.3f;
			}
			break;
	}
	return SYSTEM::FLOOR((fVar0 * 7500f));
}

