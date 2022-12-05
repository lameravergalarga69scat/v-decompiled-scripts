void func_0(bool bParam0)//Position - 0x22F6CE
{
	if (bParam0 != __LIB_0__.func_160())
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_20), bParam0);
	}
}

int func_1(int iParam0)//Position - 0x230719
{
	switch (iParam0)
	{
		case 9:
			if (__LIB_0__.func_228(386, -1) == 0)
			{
				return Global_152058.f_7;
			}
			else
			{
				return Global_152058.f_8;
			}
			break;
		case 8:
			if (__LIB_0__.func_228(386, -1) == 0)
			{
				return Global_152138.f_7;
			}
			else
			{
				return Global_152138.f_8;
			}
			break;
	}
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

int func_2(int iParam0, int iParam1, int iParam2)//Position - 0x23AFA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!__LIB_14__.func_114(iParam0) && VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar1))
	{
		if (__LIB_0__.func_121(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("terbyte")) || iVar0 == joaat("bus")) || iVar0 == joaat("airbus")) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)))
	{
		if (__LIB_14__.func_113(iParam0))
		{
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 0;
			}
		}
		else if (__LIB_14__.func_112(iParam0))
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) && !VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_2__.func_472(iParam1))
	{
		return 0;
	}
	if ((__LIB_0__.func_657(iParam1, 1) || __LIB_1__.func_178(iParam1)) || __LIB_0__.func_655(iParam1, 1))
	{
		return iParam2;
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "MPBitset"))
		{
			iVar2 = DECORATOR::DECOR_GET_INT(iParam1, "MPBitset");
			if (BitTest(iVar2, 17))
			{
				return iParam2;
			}
		}
	}
	return 1;
}

int func_3(int iParam0, int iParam1, bool bParam2)//Position - 0x23C0E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar1))
	{
		if (__LIB_0__.func_121(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("bus")) || iVar0 == joaat("airbus")) || (iVar0 == joaat("terbyte") && __LIB_14__.func_126(iParam0))) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)))
	{
		return 0;
	}
	if (__LIB_2__.func_472(iParam1))
	{
		return 0;
	}
	if ((__LIB_0__.func_657(iParam1, 1) || __LIB_1__.func_178(iParam1)) || __LIB_0__.func_655(iParam1, 1))
	{
		return bParam2;
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "MPBitset"))
		{
			iVar2 = DECORATOR::DECOR_GET_INT(iParam1, "MPBitset");
			if (BitTest(iVar2, 17))
			{
				return bParam2;
			}
		}
	}
	return 1;
}

int func_4(int iParam0)//Position - 0x242FAE
{
	switch (__LIB_23__.func_280(&iParam0))
	{
		case 24:
			return 1;
		default:
	}
	if (__LIB_6__.func_477(&iParam0))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x2476C9
{
	if ((__LIB_23__.func_281(&iParam0) == 14 || __LIB_23__.func_281(&iParam0) == 15) || __LIB_23__.func_281(&iParam0) == 19)
	{
		return 0;
	}
	return 1;
}

int func_6(struct<2> Param0)//Position - 0x248F32
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_7__.func_371(Param0);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_5[iVar1] == 0)
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	return 0;
}

void func_7(int iParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0x249388
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	Var0 = { __LIB_13__.func_259(iParam0) };
	fVar1 = (1f * Param3.f_0);
	fVar2 = (1f * Param3.f_1);
	fVar3 = (2f * Param3.f_2);
	*uParam1 = { Var0 - Vector(0f, fVar2, fVar1) };
	*uParam2 = { Var0 + Vector(fVar3, fVar2, fVar1) };
}

void func_8(int iParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0x2493ED
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	Var0 = { __LIB_13__.func_347(iParam0) };
	fVar1 = (5f * Param3.f_0);
	fVar2 = (5f * Param3.f_1);
	fVar3 = (2.5f * Param3.f_2);
	fVar4 = 0f;
	if (Param3.f_2 != 1f)
	{
		fVar4 = (fVar3 * 0.5f);
		fVar3 = fVar4;
	}
	*uParam1 = { Var0 - Vector(fVar4, fVar2, fVar1) };
	*uParam2 = { Var0 + Vector(fVar3, fVar2, fVar1) };
}

int func_9()//Position - 0x24A3DE
{
	if (__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0))
	{
		if (((__LIB_0__.func_674() && !__LIB_1__.func_459()) || __LIB_6__.func_105(PLAYER::PLAYER_ID(), 21)) || __LIB_6__.func_105(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			__LIB_1__.func_485(27);
		}
	}
	return 0;
}

void func_10(var uParam0, int iParam1, char* sParam2)//Position - 0x24DB9D
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 = 0;
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_62 = uParam0;
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_70 = iParam1;
	StringCopy(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_71), sParam2, 16);
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_60 != 0)
	{
		__LIB_22__.func_908(0);
	}
}

int func_11(int iParam0)//Position - 0x24E823
{
	if (__LIB_6__.func_530(iParam0))
	{
		return __LIB_3__.func_853(2, iParam0);
	}
	return 0;
}

void func_12(bool bParam0, int iParam1, int iParam2)//Position - 0x251B2B
{
	struct<4> Var0;
	int iVar1;
	Var0.f_3 = 6;
	Var0.f_0 = -320008018;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = { *iParam2 };
	iVar1 = __LIB_1__.func_276(bParam0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 10, iVar1);
	}
}

int func_13(var uParam0)//Position - 0x252749
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	if (!Global_1951261.f_522)
	{
	}
	if (Global_1951261.f_523 < 0 || Global_1951261.f_523 >= Global_1951261.f_264)
	{
		return -1;
	}
	bVar2 = false;
	iVar3 = -1;
	while (!bVar2)
	{
		iVar3 = Global_1951261.f_264[Global_1951261.f_523];
		if (iVar3 > -1)
		{
			__LIB_22__.func_889(iVar3, &iVar0, &bVar1);
			if ((!BitTest(Global_1951261.f_530[iVar0], bVar1) && !BitTest(uParam0->f_10[iVar0], bVar1)) && !BitTest(Global_1951261.f_539[Global_1951261.f_1 /*9*/][iVar0], bVar1))
			{
				bVar2 = true;
			}
		}
	else
	{
		}
		else
		{
			if (Global_1951261.f_523 < (Global_1951261.f_264 - 1))
			{
				Global_1951261.f_523++;
			}
		}
	}
	if (!bVar2)
	{
		return -1;
	}
	return iVar3;
}

int func_14(bool bParam0)//Position - 0x255B8F
{
	if (bParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_292, 24);
	}
	return 0;
}

void func_15(var uParam0, var uParam1, int iParam2)//Position - 0x25706B
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	Var0.f_0 = 1488038476;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam0;
	Var0.f_4 = uParam1;
	if (iParam2 != __LIB_0__.func_160())
	{
		Var0.f_2 = iParam2;
	}
	else
	{
		Var0.f_2 = __LIB_0__.func_160();
	}
	iVar1 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__.func_388(), -1, 0);
	if (iVar1 != __LIB_0__.func_160())
	{
		MISC::SET_BIT(&iVar2, iVar1);
	}
	if (!iVar2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar2);
	}
}

bool func_16(int iParam0)//Position - 0x25A1A3
{
	if (__LIB_17__.func_134())
	{
		return 0;
	}
	if (iParam0 == 17)
	{
		if ((__LIB_15__.func_107(0) || __LIB_15__.func_107(6)) || __LIB_15__.func_107(13))
		{
			if (!__LIB_0__.func_942())
			{
				return 1;
			}
		}
		return 0;
	}
	if (iParam0 == 20)
	{
		if (__LIB_4__.func_602(Global_4718592.f_116524))
		{
			return 1;
		}
	}
	return !__LIB_4__.func_423(15);
}

int func_17(int iParam0, int iParam1)//Position - 0x25AFD3
{
	return OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(__LIB_23__.func_320(iParam0, iParam1));
}

void func_18()//Position - 0x25CB4D
{
	if (Global_1888617.f_199 != __LIB_0__.func_160())
	{
		Global_1888617.f_199 = __LIB_0__.func_160();
	}
}

void func_19()//Position - 0x26181D
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__.func_388(), -1, 0) == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (Global_2681762.f_199.f_962[iVar0 /*75*/] == __LIB_0__.func_160())
			{
				iVar1 = iVar0;
				while (iVar1 <= 9)
				{
					if (Global_2681762.f_199.f_962[iVar1 /*75*/] != __LIB_0__.func_160())
					{
						Var2 = { Global_2681762.f_199.f_962[iVar1 /*75*/] };
						Global_2681762.f_199.f_962[iVar1 /*75*/] = { Global_2681762.f_199.f_962[iVar0 /*75*/] };
						Global_2681762.f_199.f_962[iVar0 /*75*/] = { Var2 };
					}
					else
					{
						iVar1++;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_20(var uParam0)//Position - 0x26AD3C
{
	int iVar0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_7[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_11 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_12[iVar0 /*2*/] = -1;
		uParam0->f_12[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_21[iVar0 /*11*/] = __LIB_0__.func_160();
		StringCopy(&(uParam0->f_21[iVar0 /*11*/].f_1), "", 32);
		uParam0->f_21[iVar0 /*11*/].f_9 = 0;
		uParam0->f_21[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	uParam0->f_66 = -1;
	uParam0->f_67 = -1;
}

void func_21(char* sParam0, int iParam1, int iParam2)//Position - 0x26AE8A
{
	__LIB_11__.func_515(&(Global_2703735.f_2724.f_1), 1, sParam0, iParam1, 0, 5, iParam2, 0);
	Global_2703735.f_2724 = 1;
}

void func_22(char* sParam0, int iParam1, int iParam2)//Position - 0x26AEF6
{
	__LIB_10__.func_584(&(Global_2703735.f_2724.f_1), 3, sParam0, "", iParam1, 0, iParam2, 0);
	Global_2703735.f_2724 = 1;
}

int func_23()//Position - 0x274671
{
	bool bVar0;
	if (__LIB_2__.func_192(PLAYER::PLAYER_ID()))
	{
		return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_331;
	}
	else
	{
		bVar0 = __LIB_0__.func_582();
		if (bVar0 != __LIB_0__.func_160())
		{
			return Global_1892703[bVar0 /*599*/].f_10.f_331;
		}
	}
	return 2000;
}

int func_24()//Position - 0x2755AF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar2))
		{
			if (__LIB_2__.func_192(bVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_25(int iParam0)//Position - 0x2A6322
{
	if (!__LIB_0__.func_109(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_24445 /* Tunable: 1649232734 */;
		case 0:
			return Global_262145.f_24446 /* Tunable: 977314889 */;
		case 4:
			return Global_262145.f_24447 /* Tunable: -2020645410 */;
		case 2:
			return Global_262145.f_24448 /* Tunable: -673930872 */;
		case 3:
			return Global_262145.f_24449 /* Tunable: 963425342 */;
		case 5:
			return Global_262145.f_24450 /* Tunable: 317190636 */;
		default:
	}
	return 0;
}

Vector3 func_26(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2AFF94
{
	switch (iParam1)
	{
		case 3:
			switch (iParam2)
			{
				case 30:
					switch (iParam0)
					{
						case 0:
							return 2607.675f, 263.959f, 97.367f;
						default:
					}
					break;
				case 31:
					switch (iParam0)
					{
						case 0:
							return -1678.9957f, -689.9188f, 10.2883f;
						default:
					}
					break;
				case 32:
					switch (iParam0)
					{
						case 0:
							return 1355.714f, 650.3459f, 79.3869f;
						default:
					}
					break;
				case 33:
					switch (iParam0)
					{
						case 0:
							return 633.4656f, -309.621f, 42.6194f;
						default:
					}
					break;
				case 34:
					switch (iParam0)
					{
						case 0:
							return -2366.3408f, -289.2394f, 13.17f;
						default:
					}
					break;
				case 35:
					switch (iParam0)
					{
						case 0:
							return -1988.9747f, -449.1148f, 10.7775f;
						default:
					}
					break;
				case 36:
					switch (iParam0)
					{
						case 0:
							return 1452.358f, -1063.2943f, 54.0991f;
						default:
					}
					break;
				case 37:
					switch (iParam0)
					{
						case 0:
							return -2442.418f, -220.1357f, 15.6274f;
						default:
					}
					break;
				case 38:
					switch (iParam0)
					{
						case 0:
							return -1730.6062f, -679.282f, 9.8912f;
						default:
					}
					break;
				case 39:
					switch (iParam0)
					{
						case 0:
							return 1478.183f, -1019.8671f, 55.4095f;
						default:
					}
					break;
			}
			break;
		case 1:
			switch (iParam2)
			{
				case 10:
					switch (iParam0)
					{
						case 0:
							return 2467.806f, 3388.868f, 49.124f;
						default:
					}
					break;
				case 11:
					switch (iParam0)
					{
						case 0:
							return 1602.7395f, 3322.3718f, 39.3633f;
						default:
					}
					break;
				case 12:
					switch (iParam0)
					{
						case 0:
							return 1347.903f, 2737.459f, 51.364f;
						default:
					}
					break;
				case 13:
					switch (iParam0)
					{
						case 0:
							return 2262.5571f, 2653.9573f, 46.4153f;
						default:
					}
					break;
				case 14:
					switch (iParam0)
					{
						case 0:
							return 2443.823f, 3092.028f, 46.399f;
						default:
					}
					break;
				case 15:
					switch (iParam0)
					{
						case 0:
							return 2095.976f, 3497.191f, 42.852f;
						default:
					}
					break;
				case 16:
					switch (iParam0)
					{
						case 0:
							return 2612.6892f, 3530.5996f, 49.3514f;
						default:
					}
					break;
				case 17:
					switch (iParam0)
					{
						case 0:
							return 2633.975f, 4840.974f, 32.3673f;
						default:
					}
					break;
				case 18:
					switch (iParam0)
					{
						case 0:
							return 580.8679f, 2461.8484f, 58.6256f;
						default:
					}
					break;
				case 19:
					switch (iParam0)
					{
						case 0:
							return 612.549f, 3021.802f, 41.257f;
						default:
					}
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					switch (iParam3)
					{
						case 1:
							switch (iParam2)
							{
								case 127:
									return 760.2365f, -1320.9137f, 33.5315f;
								case 128:
									return 773.3306f, -1274.0446f, 46.114f;
								case 129:
									return 767.4127f, -1285.9108f, 46.114f;
								default:
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 127:
									return 262.439f, -1024.677f, 60.648f;
								case 128:
									return 269.603f, -1007.041f, 60.613f;
								case 129:
									return 257.931f, -1012.637f, 60.63f;
								default:
							}
							break;
						case 3:
							switch (iParam2)
							{
								case 127:
									return -129.7447f, -1268.7374f, 46.8981f;
								case 128:
									return -129.646f, -1283.7461f, 46.8981f;
								case 129:
									return -142.2908f, -1277.4852f, 46.8981f;
								default:
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 127:
									return 20.1296f, 150.845f, 103.1198f;
								case 128:
									return 15.2749f, 138.5343f, 103.1198f;
								case 129:
									return 34.8161f, 133.0092f, 103.1198f;
								default:
							}
							break;
						case 5:
							switch (iParam2)
							{
								case 127:
									return 850.2836f, -2184.7432f, 29.3963f;
								case 128:
									return 878.8453f, -2180.186f, 29.5193f;
								case 129:
									return 877.6738f, -2191.4685f, 29.5194f;
								default:
							}
							break;
						case 6:
							switch (iParam2)
							{
								case 127:
									return -691.1577f, -2406.4016f, 12.9445f;
								case 128:
									return -683.8168f, -2399.4736f, 12.9445f;
								case 129:
									return -676.1841f, -2494.4338f, 12.9446f;
								default:
							}
							break;
						case 7:
							switch (iParam2)
							{
								case 127:
									return 180.9375f, -3184.472f, 4.6155f;
								case 128:
									return 180.7896f, -3197.285f, 4.6041f;
								case 129:
									return 180.6908f, -3211.3508f, 4.6159f;
								default:
							}
							break;
						case 8:
							switch (iParam2)
							{
								case 127:
									return 435.341f, 252.229f, 102.21f;
								case 128:
									return 439.723f, 265.532f, 102.209f;
								case 129:
									return 427.864f, 237.998f, 102.183f;
								default:
							}
							break;
						case 9:
							switch (iParam2)
							{
								case 127:
									return -1294.2637f, -578.6933f, 43.5679f;
								case 128:
									return -1269.3042f, -599.3062f, 41.0749f;
								case 129:
									return -1276.4938f, -588.6481f, 41.0749f;
								default:
							}
							break;
						case 10:
							switch (iParam2)
							{
								case 127:
									return -1121.2826f, -1204.0474f, 8.8869f;
								case 128:
									return -1111.3374f, -1198.3068f, 8.8868f;
								case 129:
									return -1109.636f, -1209.34f, 8.8869f;
								default:
							}
							break;
					}
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					switch (iParam2)
					{
						case 92:
							return 1203.9414f, 2640.0178f, 36.8318f;
						case 93:
							return -2962.686f, 366.7281f, 13.7699f;
						case 94:
							return 573.2402f, 2682.4497f, 40.9058f;
						case 95:
							return -1896.2094f, 2033.5266f, 139.7414f;
						case 96:
							return 2004.3551f, 3054.7737f, 46.049f;
						case 97:
							return 2555.958f, 406.796f, 107.455f;
						case 98:
							return 2538.797f, 2589.488f, 36.945f;
						case 99:
							return 2682.415f, 3293.786f, 54.241f;
						case 100:
							return -3250.7678f, 992.8958f, 11.4899f;
						case 101:
							return -1823.568f, 779.581f, 136.803f;
						default:
					}
					break;
			}
			break;
		case 23:
			switch (iParam2)
			{
				case 133:
					switch (iParam0)
					{
						case 0:
							return -3013.9514f, 363.9417f, 13.7201f;
						default:
					}
					break;
				case 134:
					switch (iParam0)
					{
						case 0:
							return -1239.69f, 481.2708f, 91.8812f;
						default:
					}
					break;
				case 135:
					switch (iParam0)
					{
						case 0:
							return 357.4594f, -1961.8771f, 23.4855f;
						default:
					}
					break;
				case 136:
					switch (iParam0)
					{
						case 0:
							return 705.233f, -293.402f, 58.183f;
						default:
					}
					break;
			}
			break;
		case 17:
			switch (iParam2)
			{
				case 102:
					switch (iParam0)
					{
						case 0:
							return 38.505f, 3662.247f, 38.719f;
						default:
					}
					break;
				case 103:
					switch (iParam0)
					{
						case 0:
							return -613.412f, -1058.484f, 20.788f;
						default:
					}
					break;
				case 104:
					switch (iParam0)
					{
						case 0:
							return 211.8994f, -2012.1786f, 17.7747f;
						default:
					}
					break;
			}
			break;
		case 18:
			switch (iParam2)
			{
				case 105:
					switch (iParam0)
					{
						case 0:
							return 465.066f, -1679.737f, 28.291f;
						case 1:
							return 815.732f, -752.0051f, 25.7275f;
						case 2:
							return 723.6929f, -2103.13f, 28.2584f;
						case 3:
							return 1163.8033f, -1316.3867f, 33.7427f;
						default:
					}
					break;
				case 106:
					switch (iParam0)
					{
						case 0:
							return 461.1f, -577.798f, 27.5f;
						case 1:
							return 433.1836f, -1516.5228f, 28.2846f;
						case 2:
							return 714.121f, -911.469f, 22.826f;
						case 3:
							return 35.4783f, -900.2907f, 28.9969f;
						default:
					}
					break;
				case 107:
					switch (iParam0)
					{
						case 0:
							return -329.1577f, -1528.9758f, 26.5343f;
						case 1:
							return 158.4248f, -1649.2238f, 28.2917f;
						case 2:
							return -597.74f, -877.449f, 24.574f;
						case 3:
							return 382.0177f, -903.7225f, 28.4332f;
						default:
					}
					break;
				case 108:
					switch (iParam0)
					{
						case 0:
							return -45.672f, -225.922f, 44.445f;
						case 1:
							return -493.365f, 273.606f, 82.227f;
						case 2:
							return 281.414f, 312.447f, 104.472f;
						case 3:
							return 898.8348f, -182.7993f, 72.8249f;
						default:
					}
					break;
				case 109:
					switch (iParam0)
					{
						case 0:
							return 1094.407f, -2403.067f, 29.617f;
						case 1:
							return 196.772f, -2027.93f, 17.281f;
						case 2:
							return 1147.911f, -1411.501f, 33.641f;
						case 3:
							return 328.2885f, -1285.4064f, 30.7531f;
						default:
					}
					break;
				case 110:
					switch (iParam0)
					{
						case 0:
							return -1659.948f, -975.083f, 6.414f;
						case 1:
							return -704.039f, -874.889f, 22.544f;
						case 2:
							return -502.9249f, -51.4672f, 39.2015f;
						case 3:
							return -2968.2876f, 73.365f, 10.4856f;
						default:
					}
					break;
				case 111:
					switch (iParam0)
					{
						case 0:
							return -908.872f, -2047.701f, 8.299f;
						case 1:
							return 225.468f, -1991.1818f, 18.6528f;
						case 2:
							return -1773.698f, -2777.515f, 12.945f;
						case 3:
							return -241.8769f, -2566.3425f, 5.0014f;
						default:
					}
					break;
				case 112:
					switch (iParam0)
					{
						case 0:
							return 1107.7887f, -325.1529f, 66.1123f;
						case 1:
							return -250.494f, 285.346f, 90.804f;
						case 2:
							return 105.765f, -143.251f, 53.749f;
						case 3:
							return 450.9281f, -941.5281f, 27.5329f;
						default:
					}
					break;
				case 113:
					switch (iParam0)
					{
						case 0:
							return -40.231f, -2524.858f, 5.01f;
						case 1:
							return 739.5595f, -1908.4764f, 28.292f;
						case 2:
							return 812.378f, -2403.095f, 22.657f;
						case 3:
							return 1201.474f, -3188.311f, 5.028f;
						default:
					}
					break;
				case 114:
					switch (iParam0)
					{
						case 0:
							return -1459.178f, -684.376f, 25.467f;
						case 1:
							return -331.443f, -1295.3673f, 30.3972f;
						case 2:
							return -1020.1382f, -1522.3632f, 4.5947f;
						case 3:
							return -428.4124f, -460.227f, 31.1608f;
						default:
					}
					break;
			}
			break;
		case 24:
			switch (iParam2)
			{
				case 137:
					switch (iParam0)
					{
						case 0:
							return -1333.278f, -2276.017f, 13.801f;
						default:
					}
					break;
				case 138:
					switch (iParam0)
					{
						case 0:
							return -1573.04f, -2685.768f, 13.79f;
						default:
					}
					break;
				case 139:
					switch (iParam0)
					{
						case 0:
							return -1150.993f, -3020.448f, 13.797f;
						default:
					}
					break;
			}
			break;
	}
	if (__LIB_3__.func_154(iParam1) || __LIB_3__.func_153(iParam1))
	{
		return __LIB_13__.func_904(iParam3, iParam4);
	}
	else if (__LIB_7__.func_520(iParam1))
	{
		switch (iParam3)
		{
			case 1:
				switch (iParam4)
				{
					case 0:
						return 723.171f, -1317.188f, 25.292f;
					case 1:
						return 723.106f, -1309.052f, 25.293f;
					case 2:
						return 723.707f, -1390.275f, 25.377f;
					case 3:
						return 710.724f, -1391.313f, 25.312f;
					case 4:
						return 723.943f, -1374.363f, 25.302f;
					case 5:
						return 724.032f, -1368.049f, 25.27f;
					case 6:
						return 704.288f, -1366.728f, 24.917f;
					case 7:
						return 705.6f, -1372.779f, 25.152f;
					case 8:
						return 706.76f, -1379.464f, 25.259f;
					case 9:
						return 723.705f, -1384.266f, 25.385f;
					default:
				}
				break;
			case 2:
				switch (iParam4)
				{
					case 0:
						return 318.698f, -1037.145f, 28.122f;
					case 1:
						return 303.826f, -1037.087f, 28.106f;
					case 2:
						return 289.451f, -1036.919f, 28.083f;
					case 3:
						return 341.38f, -1037.187f, 28.234f;
					case 4:
						return 357.044f, -1037.155f, 28.237f;
					case 5:
						return 372.075f, -1037.094f, 28.211f;
					case 6:
						return 274.488f, -1037.405f, 28.104f;
					case 7:
						return 351.952f, -1064.669f, 28.422f;
					case 8:
						return 366.53f, -1064.653f, 28.331f;
					case 9:
						return 381.195f, -1064.813f, 28.259f;
					default:
				}
				break;
			case 3:
				switch (iParam4)
				{
					case 0:
						return -178.829f, -1291.164f, 30.296f;
					case 1:
						return -184.16f, -1291.11f, 30.296f;
					case 2:
						return -190.184f, -1290.899f, 30.296f;
					case 3:
						return -184.9f, -1319.693f, 30.296f;
					case 4:
						return -184.763f, -1336.757f, 30.302f;
					case 5:
						return -114.577f, -1310.7f, 28.167f;
					case 6:
						return -195.402f, -1306.736f, 30.284f;
					case 7:
						return -190.178f, -1271.745f, 30.267f;
					case 8:
						return -91.056f, -1289.823f, 28.15f;
					case 9:
						return -91.264f, -1305.906f, 28.157f;
					default:
				}
				break;
			case 4:
				switch (iParam4)
				{
					case 0:
						return -16.406f, 197.79f, 101.154f;
					case 1:
						return -32.184f, 202.537f, 100.976f;
					case 2:
						return -39.229f, 197.423f, 100.976f;
					case 3:
						return -22.749f, 191.751f, 100.976f;
					case 4:
						return -49.444f, 207.641f, 100.976f;
					case 5:
						return 19.482f, 197.549f, 103.827f;
					case 6:
						return 14.146f, 183.266f, 100.572f;
					case 7:
						return -36.001f, 251.214f, 105.42f;
					case 8:
						return -14.972f, 252.213f, 107.352f;
					case 9:
						return 3.733f, 250.918f, 108.201f;
					default:
				}
				break;
			case 5:
				switch (iParam4)
				{
					case 0:
						return 898.352f, -2088.743f, 29.669f;
					case 1:
						return 914.443f, -2071.251f, 29.489f;
					case 2:
						return 928.979f, -2063.674f, 29.391f;
					case 3:
						return 947.194f, -2093.127f, 29.483f;
					case 4:
						return 873.725f, -2058.977f, 29.391f;
					case 5:
						return 836.115f, -2082.966f, 28.796f;
					case 6:
						return 924.132f, -2103.542f, 29.386f;
					case 7:
						return 922.808f, -2118.878f, 29.389f;
					case 8:
						return 820.358f, -2081.311f, 28.489f;
					case 9:
						return 953.557f, -2070.676f, 29.529f;
					default:
				}
				break;
			case 6:
				switch (iParam4)
				{
					case 0:
						return -699.6118f, -2392.324f, 12.8917f;
					case 1:
						return -689.5231f, -2380.498f, 12.8843f;
					case 2:
						return -679.3958f, -2368.7373f, 12.8791f;
					case 3:
						return -668.7612f, -2356.4927f, 12.8782f;
					case 4:
						return -657.5839f, -2343.6895f, 12.8895f;
					case 5:
						return -666.888f, -2366.09f, 12.838f;
					case 6:
						return -656.587f, -2353.92f, 12.849f;
					case 7:
						return -646.126f, -2341.865f, 12.913f;
					case 8:
						return -646.7028f, -2331.1562f, 12.8253f;
					case 9:
						return -710.0117f, -2404.648f, 12.8945f;
					default:
				}
				break;
			case 7:
				switch (iParam4)
				{
					case 0:
						return 232.07f, -3114.384f, 4.79f;
					case 1:
						return 226.824f, -3114.68f, 4.79f;
					case 2:
						return 243.668f, -3101.713f, 4.802f;
					case 3:
						return 248.551f, -3101.664f, 4.806f;
					case 4:
						return 167.696f, -3109.966f, 4.854f;
					case 5:
						return 202.903f, -3101.727f, 4.79f;
					case 6:
						return 167.59f, -3115.115f, 4.856f;
					case 7:
						return 168.446f, -3141.319f, 4.845f;
					case 8:
						return 222.415f, -3114.507f, 4.79f;
					case 9:
						return 228.205f, -3088.183f, 4.79f;
					default:
				}
				break;
			case 8:
				switch (iParam4)
				{
					case 0:
						return 380.801f, 211.548f, 101.95f;
					case 1:
						return 375.579f, 197.746f, 101.954f;
					case 2:
						return 370.203f, 183.515f, 101.95f;
					case 3:
						return 397.116f, 211.215f, 101.813f;
					case 4:
						return 409.459f, 244.971f, 101.883f;
					case 5:
						return 414.781f, 259.639f, 101.85f;
					case 6:
						return 397.3f, 263.912f, 102.026f;
					case 7:
						return 364.737f, 168.455f, 101.964f;
					case 8:
						return 402.62f, 277.76f, 102.02f;
					case 9:
						return 420.141f, 273.706f, 102.023f;
					default:
				}
				break;
			case 9:
				switch (iParam4)
				{
					case 0:
						return -1186.931f, -732.402f, 19.558f;
					case 1:
						return -1183.547f, -736.962f, 19.257f;
					case 2:
						return -1179.931f, -741.912f, 18.939f;
					case 3:
						return -1167.949f, -746.041f, 18.476f;
					case 4:
						return -1163.963f, -742.975f, 18.558f;
					case 5:
						return -1264.435f, -628.404f, 25.867f;
					case 6:
						return -1252.312f, -618.342f, 26.077f;
					case 7:
						return -1265.741f, -615.226f, 25.937f;
					case 8:
						return -1253.489f, -606.229f, 26.169f;
					case 9:
						return -1240.049f, -609.076f, 26.131f;
					default:
				}
				break;
			case 10:
				switch (iParam4)
				{
					case 0:
						return -1158.625f, -1196.764f, 2.456f;
					case 1:
						return -1181.686f, -1200.863f, 5.412f;
					case 2:
						return -1135.542f, -1202.483f, 1.324f;
					case 3:
						return -1151.163f, -1202.93f, 1.98f;
					case 4:
						return -1195.535f, -1203.339f, 6.519f;
					case 5:
						return -1168.662f, -1205.925f, 3.53f;
					case 6:
						return -1131.788f, -1200.295f, 1.288f;
					case 7:
						return -1130.2692f, -1186.4429f, 1.1407f;
					case 8:
						return -1117.5424f, -1187.3271f, 1.289f;
					case 9:
						return -1116.7523f, -1178.638f, 1.1305f;
					default:
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_27()//Position - 0x2F729A
{
	if (__LIB_6__.func_108())
	{
		__LIB_0__.func_168(153, Global_20266, 1);
	}
	return 153;
}

void func_28(struct<2> Param0)//Position - 0x2FB45C
{
	if (Global_2815059.f_6694.f_5.f_1 != Param0.f_1)
	{
		Global_2815059.f_6694.f_5 = { Param0 };
		if (__LIB_1__.func_264(Param0.f_0, 0, 1))
		{
			Global_2815059.f_6694.f_3 = __LIB_2__.func_234(Param0.f_0);
			Global_2815059.f_6694.f_4 = __LIB_3__.func_803(Param0.f_0);
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(Param0.f_0, &(Global_2815059.f_6694.f_7), 13);
		}
	}
}

int func_29()//Position - 0x302DDC
{
	switch (__LIB_3__.func_803(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 210:
		case 189:
			return 1;
		default:
	}
	if (__LIB_9__.func_367())
	{
		return 1;
	}
	return 0;
}

int func_30()//Position - 0x363FF9
{
	if (__LIB_4__.func_234())
	{
		return 1;
	}
	if (__LIB_1__.func_156())
	{
		return 1;
	}
	return 0;
}

int func_31(bool bParam0)//Position - 0x365CB6
{
	if (bParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1888862[bParam0 /*120*/].f_29, 20);
}

int func_32(bool bParam0)//Position - 0x36B9A9
{
	if (__LIB_4__.func_682(bParam0, 1))
	{
		return Global_2815059.f_5195.f_226[__LIB_2__.func_191(bParam0)];
	}
	return 0;
}

void func_33(bool bParam0, int iParam1)//Position - 0x36C480
{
	int iVar0;
	int iVar1;
	iVar0 = iParam1;
	iVar1 = PLAYER::GET_PLAYER_PED(bParam0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
		{
			__LIB_23__.func_255(__LIB_1__.func_276(bParam0), 0, 0f, 0, 0, 0, -1);
		}
	}
}

int func_34(int iParam0)//Position - 0x36F181
{
	if ((((((((((((__LIB_0__.func_75() || CAM::IS_SCREEN_FADED_OUT()) || __LIB_0__.func_190()) || __LIB_1__.func_41()) || HUD::IS_PAUSE_MENU_ACTIVE()) || __LIB_5__.func_694(PLAYER::PLAYER_ID())) || !__LIB_4__.func_715()) || __LIB_1__.func_709()) || __LIB_0__.func_739()) || __LIB_0__.func_706()) || !__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1)) || __LIB_1__.func_159()) || HUD::IS_RADAR_HIDDEN())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

int func_35(bool bParam0)//Position - 0x37E1CE
{
	if (__LIB_4__.func_682(bParam0, 1))
	{
		return Global_1892703[__LIB_0__.func_582() /*599*/].f_10.f_428;
	}
	return -1;
}

int func_36()//Position - 0x38157C
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_0__.func_582();
	if (bVar0 != __LIB_0__.func_160())
	{
		if (__LIB_1__.func_264(bVar0, 0, 1))
		{
			bVar1 = bVar0;
			if (bVar1 != -1)
			{
				return BitTest(Global_1892703[bVar1 /*599*/].f_1, 16);
			}
		}
	}
	return 0;
}

bool func_37()//Position - 0x3818AC
{
	return (__LIB_0__.func_697() && __LIB_24__.func_784(__LIB_1__.func_301()));
}

void func_38(var uParam0)//Position - 0x38483B
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!Global_1585359.f_21)
	{
		iVar1 = __LIB_23__.func_99(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1585359.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = __LIB_23__.func_98(iVar0);
			if (Global_1585359[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_ACCELERATION(iVar0);
			if (Global_1585359[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_AGILITY(iVar0);
			}
			else
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_TRACTION(iVar0);
			}
			if (Global_1585359[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_BRAKING(iVar0);
			if (Global_1585359[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

void func_39(int iParam0)//Position - 0x3857FC
{
	__LIB_12__.func_430(1);
	Global_1937088 = iParam0;
}

void func_40(bool bParam0)//Position - 0x385AEF
{
	int iVar0;
	if (bParam0)
	{
		__LIB_23__.func_448(Global_1937518.f_1);
		__LIB_23__.func_447(Global_1937518.f_1);
		__LIB_23__.func_446(Global_1937518.f_1);
		__LIB_23__.func_445(Global_1937518.f_1);
		__LIB_23__.func_444(Global_1937518.f_1);
		__LIB_23__.func_443(Global_1937518.f_1);
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_1931975.f_3[iVar0] = 0;
		Global_1931975.f_3.f_18[iVar0] = 0;
		Global_1931975.f_3.f_54[iVar0] = 0;
		Global_1931975.f_3.f_72[iVar0] = 0;
		Global_1931975.f_3.f_90[iVar0] = 0;
		iVar0++;
	}
}

void func_41(int iParam0, bool bParam1)//Position - 0x386514
{
	if (bParam1)
	{
		if (Global_1933908.f_197[iParam0 /*9*/].f_2 == 1)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1933908.f_197[iParam0 /*9*/].f_1))
			{
				PED::UNREGISTER_PEDHEADSHOT(Global_1933908.f_197[iParam0 /*9*/].f_1);
			}
		}
		else if (Global_1933908.f_197[iParam0 /*9*/].f_2 == 2)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1933908.f_197[iParam0 /*9*/].f_1))
			{
				PED::UNREGISTER_PEDHEADSHOT(Global_1933908.f_197[iParam0 /*9*/].f_1);
			}
			if (Global_1933908.f_197[iParam0 /*9*/].f_1 != 0)
			{
			}
		}
	}
	Global_1933908.f_197[iParam0 /*9*/] = __LIB_0__.func_160();
	Global_1933908.f_197[iParam0 /*9*/].f_2 = 0;
	Global_1933908.f_197[iParam0 /*9*/].f_1 = 0;
	StringCopy(&(Global_1933908.f_197[iParam0 /*9*/].f_3), "NULL", 24);
}

int func_42(int iParam0)//Position - 0x390A7A
{
	int iVar0;
	iVar0 = __LIB_23__.func_265(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return __LIB_0__.func_689(iVar0, 0);
}

int func_43()//Position - 0x396991
{
	if (__LIB_0__.func_649(&Global_2789823) && !__LIB_2__.func_47(&Global_2789823, Global_262145.f_28396 /* Tunable: 247954694 */, 1))
	{
		return 1;
	}
	return 0;
}

int func_44()//Position - 0x396C4F
{
	if (!Global_1976975)
	{
		if (__LIB_22__.func_519(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_2__.func_64()) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__.func_64(), false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(5017.4224f, -5130.4478f, 2.19928f, ENTITY::GET_ENTITY_COORDS(Global_2815059.f_298, true), true) < 1500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_45()//Position - 0x397BA9
{
	int iVar0;
	struct<13> Var1;
	bool bVar2;
	if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2715699.f_6007.f_113), 13))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = iVar0;
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar2))
			{
				Var1 = { __LIB_1__.func_267(bVar2) };
				if (NETWORK::NETWORK_IS_HANDLE_VALID(&Var1, 13))
				{
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_2715699.f_6007.f_113), &Var1))
					{
						return iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return __LIB_0__.func_160();
}

int func_46()//Position - 0x3ABCC4
{
	if ((__LIB_9__.func_345(2) || __LIB_9__.func_345(1)) || __LIB_9__.func_345(36))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x3B2295
{
	if (__LIB_22__.func_874(iParam0, 91, -1, 0) || __LIB_22__.func_874(iParam0, 97, -1, 0))
	{
		return 1;
	}
	return 0;
}

void func_48(int iParam0)//Position - 0x3B24CF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, true);
		VEHICLE::LOCK_DOORS_WHEN_NO_LONGER_NEEDED(iParam0);
		if (!__LIB_3__.func_232())
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		}
		__LIB_22__.func_876(iParam0);
	}
}

int func_49(struct<3> Param0)//Position - 0x3B4D38
{
	int iVar0;
	iVar0 = 87;
	while (iVar0 <= 90)
	{
		if (__LIB_9__.func_474(Param0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_50(bool bParam0)//Position - 0x3B5D46
{
	if (bParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_5, 5);
	}
	return 0;
}

int func_51()//Position - 0x3B6080
{
	if (__LIB_5__.func_581(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_52()//Position - 0x3B60E7
{
	if (__LIB_1__.func_165() >= 0)
	{
		return __LIB_8__.func_476(__LIB_1__.func_165());
	}
	return 0;
}

void func_53()//Position - 0x3BAD83
{
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 9;
		Global_21618 = 1;
		if (Global_78319)
		{
			if (!MISC::IS_PC_VERSION())
			{
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
				MISC::SET_BIT(&(Global_2815059.f_1795), 15);
			}
		}
	}
}

int func_54()//Position - 0x3BEC4C
{
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && ((__LIB_0__.func_739() || __LIB_3__.func_778()) || (__LIB_0__.func_706() && __LIB_0__.func_742() <= 21))) && __LIB_6__.func_926())
	{
		return 1;
	}
	return 0;
}

int func_55()//Position - 0x3C65E9
{
	if (__LIB_22__.func_840(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	else if (__LIB_22__.func_839(PLAYER::PLAYER_ID()))
	{
		if (!Global_2715699.f_6310)
		{
			return 1;
		}
	}
	else if (__LIB_0__.func_175())
	{
		if (__LIB_2__.func_500())
		{
			return 1;
		}
	}
	return 0;
}

void func_56(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x3CFDC3
{
	if (!__LIB_6__.func_518())
	{
		return;
	}
	STATS::PLAYSTATS_NPC_PHONE(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

int func_57(int iParam0)//Position - 0x3E7EB4
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_131, 16);
	}
	return 0;
}

void func_58()//Position - 0x3EE5C5
{
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	__LIB_9__.func_28();
}

int func_59(int iParam0)//Position - 0x3EF94D
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 6);
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x3F04FA
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 9);
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x3F0A17
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 13);
	}
	return 0;
}

void func_62(int iParam0)//Position - 0x3F7B7B
{
	int iVar0;
	int iVar1;
	Global_2815059.f_325 = NETWORK::NET_TO_VEH(iParam0);
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(iParam0));
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(iParam0), "MPBitset"))
		{
			iVar1 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(iParam0), "MPBitset");
		}
		DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iParam0), "MPBitset", iVar1);
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Submarine_Dinghy", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(Global_2815059.f_325, "Player_Submarine_Dinghy"))
		{
			DECORATOR::DECOR_SET_INT(Global_2815059.f_325, "Player_Submarine_Dinghy", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
		}
	}
	NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(iParam0, PLAYER::PLAYER_ID(), true);
	if (VEHICLE::GET_NUM_MOD_KITS(Global_2815059.f_325) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(Global_2815059.f_325, 0);
	}
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(iParam0), false);
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Global_2815059.f_325, false);
	VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(Global_2815059.f_325, true);
	if (Global_262145.f_29959 /* Tunable: 1695142738 */)
	{
		__LIB_9__.func_441(Global_2815059.f_325, "RADIO_34_DLC_HEI4_KULT" /* GXT: Kult FM */);
	}
	if (VEHICLE::CAN_ANCHOR_BOAT_HERE(Global_2815059.f_325))
	{
		VEHICLE::SET_BOAT_ANCHOR(Global_2815059.f_325, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_351 = Global_2815059.f_6005;
}

int func_63(int iParam0, int iParam1, var uParam2)//Position - 0x3FD6A2
{
	int iVar0;
	int iVar1[6];
	int iVar2;
	iVar0 = __LIB_23__.func_585(iParam0);
	if (iVar0 > 6)
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_2680265.f_1399)
	{
		if (Global_2680265.f_1399[iVar2 /*3*/].f_2 == iParam1 && Global_2680265.f_1399[iVar2 /*3*/].f_1 == iParam0)
		{
			iVar1[Global_2680265.f_1399[iVar2 /*3*/]] = 1;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!iVar1[iVar2])
		{
			*uParam2 = iVar2;
			return 1;
		}
		iVar2++;
	}
	return 0;
}

bool func_64(int iParam0, int iParam1, int iParam2)//Position - 0x3FD738
{
	int iVar0;
	iVar0 = __LIB_15__.func_340(iParam0, iParam1, iParam2);
	return iVar0 == -1;
}

int func_65(var uParam0, int iParam1, int iParam2)//Position - 0x3FE3C4
{
	if (!__LIB_0__.func_516(&(uParam0->f_22[iParam1 /*3*/])))
	{
	}
	return MISC::ABSI(((iParam2 / 1000) - SYSTEM::ROUND(__LIB_5__.func_736(&(uParam0->f_22[iParam1 /*3*/])))));
}

void func_66(int* iParam0, bool bParam1)//Position - 0x407690
{
	switch (iParam0->f_102)
	{
		case 0:
			MISC::SET_BIT(iParam0, 18);
			break;
		case 1:
			MISC::SET_BIT(iParam0, 19);
			break;
		case 2:
			MISC::SET_BIT(iParam0, 20);
			break;
		case 3:
			MISC::SET_BIT(iParam0, 21);
			break;
	}
	if (BitTest(iParam0->f_1, 30))
	{
		STATS::PLAYSTATS_SPIN_WHEEL(__LIB_12__.func_578(), __LIB_23__.func_622(bParam1), 14, 1);
	}
	else
	{
		STATS::PLAYSTATS_SPIN_WHEEL(__LIB_12__.func_578(), __LIB_23__.func_622(bParam1), iParam0->f_102, 1);
	}
	MISC::SET_BIT(iParam0, 0);
}

int func_67(var uParam0)//Position - 0x4080F7
{
	int iVar0;
	iVar0 = __LIB_9__.func_897(*uParam0);
	if (iVar0 == 1)
	{
		*uParam0 = 0;
		return 1;
	}
	*uParam0 = 0;
	__LIB_21__.func_59(0, -1, -1);
	return 0;
}

int func_68(int iParam0, var uParam1)//Position - 0x409C87
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("buzzard"):
			return 1;
			break;
		case joaat("buzzard2"):
			return 1;
			break;
		case joaat("polmav"):
			return 1;
			break;
		case joaat("frogger"):
			return 1;
			break;
		case joaat("maverick"):
			return 1;
			break;
		case joaat("annihilator"):
			return 1;
			break;
		case joaat("valkyrie"):
			*uParam1 = 1;
			return 1;
			break;
		case joaat("savage"):
			return 1;
			break;
		case joaat("hunter"):
			return 1;
			break;
		case joaat("bombushka"):
			return 1;
			break;
		case joaat("volatol"):
			return 1;
			break;
		case joaat("akula"):
			return 1;
			break;
	}
	return __LIB_11__.func_152(iParam0);
	return 0;
}

void func_69(int iParam0)//Position - 0x409F6C
{
	char* sVar0;
	sVar0 = __LIB_15__.func_371(iParam0, 0);
	GRAPHICS::ANIMPOSTFX_STOP(sVar0);
}

int func_70(int iParam0, int iParam1)//Position - 0x40ADD0
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = __LIB_11__.func_665(iParam0, iParam1);
	iVar1 = __LIB_11__.func_663(iParam0, iParam1);
	fVar2 = __LIB_11__.func_664(iParam0, iParam1);
	if (iVar1 > 0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar0 * iVar1)) * fVar2));
	}
	return SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * fVar2));
}

int func_71()//Position - 0x40C2D8
{
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (Global_1836608 == 1)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__.func_233())
			{
				return 0;
			}
			if (HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN())
			{
				return 0;
			}
			if (Global_1931426 == 1)
			{
				return 0;
			}
			if (Global_1836571 == 1)
			{
				return 0;
			}
			if (__LIB_12__.func_834())
			{
				return 0;
			}
			if (Global_1836575 == 1 && (__LIB_0__.func_860() || __LIB_0__.func_859()))
			{
				return 0;
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3 && (__LIB_0__.func_860() || __LIB_0__.func_859()))
			{
				return 0;
			}
			if (Global_1836577 == 1 && (__LIB_0__.func_860() || __LIB_0__.func_859()))
			{
				return 0;
			}
			if (Global_1640732)
			{
				return 0;
			}
			if (Global_1836613 == 1 || BitTest(Global_4718592.f_14, 29))
			{
				return 0;
			}
			if ((!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT())
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if ((!__LIB_0__.func_191(8, -1) && !__LIB_3__.func_778()) && !__LIB_0__.func_497())
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x412676
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_364;
}

void func_73(int iParam0)//Position - 0x4139B1
{
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__.func_137(7559, -1))
			{
				__LIB_0__.func_521(7559, 1, -1);
				__LIB_0__.func_521(7556, 1, -1);
			}
			else if (!__LIB_0__.func_137(7560, -1))
			{
				__LIB_0__.func_521(7559, 1, -1);
				__LIB_0__.func_521(7560, 1, -1);
				__LIB_0__.func_521(7556, 1, -1);
				__LIB_0__.func_521(7557, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7559, 1, -1);
				__LIB_0__.func_521(7560, 1, -1);
				__LIB_0__.func_521(7561, 1, -1);
				__LIB_0__.func_521(7556, 1, -1);
				__LIB_0__.func_521(7557, 1, -1);
				__LIB_0__.func_521(7558, 1, -1);
			}
			break;
		case 1:
			if (!__LIB_0__.func_137(7589, -1))
			{
				__LIB_0__.func_521(7589, 1, -1);
			}
			else if (!__LIB_0__.func_137(7590, -1))
			{
				__LIB_0__.func_521(7589, 1, -1);
				__LIB_0__.func_521(7590, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7589, 1, -1);
				__LIB_0__.func_521(7590, 1, -1);
				__LIB_0__.func_521(7591, 1, -1);
			}
			break;
		case 2:
			if (!__LIB_0__.func_137(7592, -1))
			{
				__LIB_0__.func_521(7592, 1, -1);
			}
			else if (!__LIB_0__.func_137(7593, -1))
			{
				__LIB_0__.func_521(7592, 1, -1);
				__LIB_0__.func_521(7593, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7592, 1, -1);
				__LIB_0__.func_521(7593, 1, -1);
				__LIB_0__.func_521(7594, 1, -1);
			}
			break;
		case 3:
			if (!__LIB_0__.func_137(7577, -1))
			{
				__LIB_0__.func_521(7577, 1, -1);
			}
			else if (!__LIB_0__.func_137(7578, -1))
			{
				__LIB_0__.func_521(7577, 1, -1);
				__LIB_0__.func_521(7578, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7577, 1, -1);
				__LIB_0__.func_521(7578, 1, -1);
				__LIB_0__.func_521(7579, 1, -1);
			}
			break;
		case 4:
			if (!__LIB_0__.func_137(7568, -1))
			{
				__LIB_0__.func_521(7568, 1, -1);
			}
			else if (!__LIB_0__.func_137(7569, -1))
			{
				__LIB_0__.func_521(7568, 1, -1);
				__LIB_0__.func_521(7569, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7568, 1, -1);
				__LIB_0__.func_521(7569, 1, -1);
				__LIB_0__.func_521(7570, 1, -1);
			}
			break;
		case 5:
			if (!__LIB_0__.func_137(7583, -1))
			{
				__LIB_0__.func_521(7583, 1, -1);
				__LIB_0__.func_521(7580, 1, -1);
			}
			else if (!__LIB_0__.func_137(7584, -1))
			{
				__LIB_0__.func_521(7583, 1, -1);
				__LIB_0__.func_521(7584, 1, -1);
				__LIB_0__.func_521(7580, 1, -1);
				__LIB_0__.func_521(7581, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7583, 1, -1);
				__LIB_0__.func_521(7584, 1, -1);
				__LIB_0__.func_521(7585, 1, -1);
				__LIB_0__.func_521(7580, 1, -1);
				__LIB_0__.func_521(7581, 1, -1);
				__LIB_0__.func_521(7582, 1, -1);
			}
			break;
		case 6:
			if (!__LIB_0__.func_137(7571, -1))
			{
				__LIB_0__.func_521(7571, 1, -1);
			}
			else if (!__LIB_0__.func_137(7572, -1))
			{
				__LIB_0__.func_521(7571, 1, -1);
				__LIB_0__.func_521(7572, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7571, 1, -1);
				__LIB_0__.func_521(7572, 1, -1);
				__LIB_0__.func_521(7573, 1, -1);
			}
			break;
		case 7:
			if (!__LIB_0__.func_137(7574, -1))
			{
				__LIB_0__.func_521(7574, 1, -1);
				__LIB_0__.func_521(7565, 1, -1);
			}
			else if (!__LIB_0__.func_137(7575, -1))
			{
				__LIB_0__.func_521(7574, 1, -1);
				__LIB_0__.func_521(7575, 1, -1);
				__LIB_0__.func_521(7565, 1, -1);
				__LIB_0__.func_521(7566, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7574, 1, -1);
				__LIB_0__.func_521(7575, 1, -1);
				__LIB_0__.func_521(7576, 1, -1);
				__LIB_0__.func_521(7565, 1, -1);
				__LIB_0__.func_521(7566, 1, -1);
				__LIB_0__.func_521(7567, 1, -1);
			}
			break;
		case 8:
			if (!__LIB_0__.func_137(7586, -1))
			{
				__LIB_0__.func_521(7586, 1, -1);
			}
			else if (!__LIB_0__.func_137(7587, -1))
			{
				__LIB_0__.func_521(7586, 1, -1);
				__LIB_0__.func_521(7587, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7586, 1, -1);
				__LIB_0__.func_521(7587, 1, -1);
				__LIB_0__.func_521(7588, 1, -1);
			}
			break;
		case 9:
			if (!__LIB_0__.func_137(7562, -1))
			{
				__LIB_0__.func_521(7562, 1, -1);
			}
			else if (!__LIB_0__.func_137(7563, -1))
			{
				__LIB_0__.func_521(7562, 1, -1);
				__LIB_0__.func_521(7563, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7562, 1, -1);
				__LIB_0__.func_521(7563, 1, -1);
				__LIB_0__.func_521(7564, 1, -1);
			}
			break;
		case 10:
			if (!__LIB_0__.func_137(7553, -1))
			{
				__LIB_0__.func_521(7553, 1, -1);
			}
			else if (!__LIB_0__.func_137(7554, -1))
			{
				__LIB_0__.func_521(7553, 1, -1);
				__LIB_0__.func_521(7554, 1, -1);
			}
			else
			{
				__LIB_0__.func_521(7553, 1, -1);
				__LIB_0__.func_521(7554, 1, -1);
				__LIB_0__.func_521(7555, 1, -1);
			}
			break;
	}
}

bool func_74()//Position - 0x415B98
{
	return __LIB_4__.func_331();
}

int func_75()//Position - 0x41E292
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == __LIB_0__.func_160())
	{
		return 0;
	}
	if (!__LIB_7__.func_192(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)//Position - 0x4383F6
{
	if (__LIB_0__.func_116() && __LIB_0__.func_161())
	{
		if (iParam0 == 31)
		{
			return 1;
		}
	}
	if (__LIB_7__.func_972())
	{
		if (__LIB_26__.func_29(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_77()//Position - 0x438747
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (PLAYER::PLAYER_ID() == __LIB_0__.func_160())
	{
		return 0;
	}
	else if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__.func_388(), -1, 0) != PLAYER::PLAYER_ID())
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__.func_388(), -1, 0) != __LIB_0__.func_160())
		{
		}
		return 0;
	}
	else if (Global_1835502.f_527.f_5 == 0)
	{
		Global_1835502.f_527.f_5 = NETWORK::GET_NETWORK_TIME();
		Global_1835502.f_527.f_4 = 0;
		bVar0 = false;
		while (bVar0 < 3)
		{
			Global_1835502.f_527[bVar0] = -1;
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_794[bVar0] = -1;
			bVar0++;
		}
	}
	else
	{
		iVar1 = NETWORK::GET_NETWORK_TIME();
		iVar2 = NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1835502.f_527.f_5);
		bVar3 = true;
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (!BitTest(Global_1835502.f_527.f_4, bVar0))
			{
				bVar3 = false;
			}
			bVar0++;
		}
		if (MISC::ABSI(iVar2) < Global_262145.f_18674 /* Tunable: 2105264941 */ * 1000 && !bVar3)
		{
			sVar4 = NETWORK::GET_TIME_AS_STRING(Global_1835502.f_527.f_5);
			sVar5 = NETWORK::GET_TIME_AS_STRING(iVar1);
			return 0;
		}
	}
	bVar6 = false;
	bVar0 = false;
	while (bVar0 < 3)
	{
		iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
		bVar8 = false;
		while (!bVar8)
		{
			bVar8 = true;
			if (bVar8)
			{
				iVar9 = 0;
				while (iVar9 < 3)
				{
					if (iVar7 == Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_794[iVar9])
					{
						bVar8 = false;
					}
					iVar9++;
				}
			}
			if (bVar8)
			{
				if (__LIB_23__.func_654(iVar7, -1))
				{
					bVar8 = false;
				}
			}
			if (bVar8 && !bVar6)
			{
				if (iVar7 == 11 || iVar7 == 12)
				{
					bVar6 = true;
				}
				if (!bVar6 && IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 100)) <= (IntToFloat(bVar0 + 1) * 33.3f))
				{
					iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(11, 13);
					bVar6 = true;
				}
			}
			if (!bVar8)
			{
				iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
			}
		}
		iVar10 = 0;
		while (iVar10 <= (bVar0 - 1))
		{
			bVar8 = false;
			while (!bVar8)
			{
				bVar8 = true;
				if (iVar7 == Global_1835502.f_527[iVar10])
				{
					bVar8 = false;
				}
				if (bVar8)
				{
					iVar11 = 0;
					while (iVar11 < 3)
					{
						if (iVar7 == Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_794[iVar11])
						{
							bVar8 = false;
						}
						iVar11++;
					}
				}
				if (bVar8)
				{
					if (__LIB_23__.func_654(iVar7, -1))
					{
						bVar8 = false;
					}
				}
				if (!bVar8)
				{
					iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
				}
			}
			iVar10++;
		}
		Global_1835502.f_527[bVar0] = iVar7;
		bVar0++;
	}
	Global_1835502.f_527.f_5 = NETWORK::GET_NETWORK_TIME();
	Global_1835502.f_527.f_4 = 0;
	return 1;
}

struct<10> func_78(int iParam0)//Position - 0x43A3EC
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	__LIB_9__.func_819(&Var0);
	iVar1 = Global_2661084[iParam0 /*10*/].f_4;
	iVar2 = Global_2661084[iParam0 /*10*/].f_5;
	iVar3 = __LIB_11__.func_800(iVar1, iVar2);
	Var0.f_0 = __LIB_9__.func_793(iVar3);
	Var0.f_1 = iVar2;
	Var0.f_2 = iVar1;
	Var0.f_3 = { __LIB_12__.func_533(iVar1, iVar2) };
	return Var0;
}

int func_79(int iParam0)//Position - 0x43B052
{
	return __LIB_11__.func_544(Global_2661084[iParam0 /*10*/]);
}

int func_80(bool bParam0)//Position - 0x43C28F
{
	struct<13> Var0;
	if (bParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (!__LIB_1__.func_264(bParam0, 0, 1))
	{
		return 0;
	}
	Var0 = { __LIB_1__.func_267(bParam0) };
	if (!NETWORK::NETWORK_IS_FRIEND(&Var0))
	{
		return 0;
	}
	if (__LIB_27__.func_792(bParam0))
	{
		return 0;
	}
	return 1;
}

void func_81(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x43C54C
{
	struct<3> Var0;
	struct<13> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!__LIB_1__.func_264(bParam0, 0, 1))
	{
		return;
	}
	Var0.f_0 = -374624960;
	Var0.f_1 = PLAYER::PLAYER_ID();
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var1, 13);
	Var0.f_2 = { Var1 };
	if (bParam1)
	{
		iVar2 = 0;
		MISC::SET_BIT(&iVar2, 6);
		Var0.f_2.f_13 = iVar2;
		Var0.f_2.f_19 = 0;
		Var0.f_2.f_20 = 0;
	}
	if (bParam2)
	{
		iVar3 = 0;
		MISC::SET_BIT(&iVar3, 0);
		Var0.f_2.f_13 = iVar3;
		Var0.f_2.f_19 = 1;
		Var0.f_2.f_20 = 0;
	}
	if (bParam3)
	{
		iVar4 = 0;
		MISC::SET_BIT(&iVar4, 0);
		Var0.f_2.f_13 = iVar4;
		Var0.f_2.f_19 = 1;
		Var0.f_2.f_20 = 1;
	}
	Var0.f_2.f_14 = __LIB_17__.func_135(PLAYER::PLAYER_ID());
	StringCopy(&(Var0.f_2.f_15), "", 16);
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 23, __LIB_1__.func_276(bParam0));
}

void func_82(int iParam0)//Position - 0x43D81B
{
	int iVar0;
	int iVar1;
	if (Global_1573124 && Global_1573125)
	{
		return;
	}
	iVar0 = __LIB_9__.func_268(iParam0);
	iVar1 = __LIB_12__.func_478(iParam0);
	if (!Global_1573124)
	{
		if (iVar1 == 62 && iVar0 == 192)
		{
			Global_1573124 = 1;
		}
	}
	if (!Global_1573125)
	{
		if (iVar1 == 62 && iVar0 == 189)
		{
			Global_1573125 = 1;
		}
	}
}

void func_83(int iParam0)//Position - 0x43D8D6
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	if (!Global_2621797)
	{
		return;
	}
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 0, 1))
	{
		Var1 = { __LIB_1__.func_265(PLAYER::PLAYER_ID()) };
	}
	iVar2 = __LIB_12__.func_485(iParam0);
	if (iVar2 == 0)
	{
		return;
	}
	iVar3 = __LIB_9__.func_268(iParam0);
	if (iVar3 == 0)
	{
		return;
	}
	Var4 = { __LIB_12__.func_470(iParam0) };
	fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var4, true);
	iVar6 = 0;
	fVar7 = 0f;
	iVar8 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2621797.f_2[iVar0 /*3*/].f_2 == 0)
		{
			if (iVar6 < 3)
			{
				Global_2621797.f_2[iVar0 /*3*/] = iVar3;
				Global_2621797.f_2[iVar0 /*3*/].f_1 = fVar5;
				Global_2621797.f_2[iVar0 /*3*/].f_2 = iVar2;
				return;
			}
			if (fVar5 < fVar7)
			{
				Global_2621797.f_2[iVar8 /*3*/] = iVar3;
				Global_2621797.f_2[iVar8 /*3*/].f_1 = fVar5;
				Global_2621797.f_2[iVar8 /*3*/].f_2 = iVar2;
			}
			return;
		}
		if (Global_2621797.f_2[iVar0 /*3*/] == iVar3)
		{
			if (Global_2621797.f_2[iVar0 /*3*/].f_2 == iVar2)
			{
				return;
			}
			if (Global_2621797.f_2[iVar0 /*3*/].f_1 > fVar7)
			{
				fVar7 = Global_2621797.f_2[iVar0 /*3*/].f_1;
				iVar8 = iVar0;
			}
			iVar6++;
		}
		iVar0++;
	}
	if (iVar6 == 0)
	{
		return;
	}
	if (fVar5 < fVar7)
	{
		Global_2621797.f_2[iVar8 /*3*/] = iVar3;
		Global_2621797.f_2[iVar8 /*3*/].f_1 = fVar5;
		Global_2621797.f_2[iVar8 /*3*/].f_2 = iVar2;
	}
}

void func_84(int iParam0)//Position - 0x43EEA8
{
	struct<26> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2621865[iParam0 /*26*/].f_11))
	{
		HUD::REMOVE_BLIP(&(Global_2621865[iParam0 /*26*/].f_11));
	}
	Var0 = -1;
	Var0.f_2 = 10;
	Var0.f_6.f_4 = 16777215;
	Var0.f_14 = 3;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_15.f_9 = -1;
	Global_2621865[iParam0 /*26*/] = { Var0 };
	Global_2621865[iParam0 /*26*/].f_3 = { 0f, 0f, 0f };
	__LIB_12__.func_514(&(Global_2621865[iParam0 /*26*/].f_6));
	__LIB_9__.func_819(&(Global_2621865[iParam0 /*26*/].f_15));
}

bool func_85(var uParam0)//Position - 0x43FE23
{
	if (*uParam0 != 191)
	{
		return 0;
	}
	return __LIB_20__.func_651(uParam0) == 5;
}

int func_86(var uParam0)//Position - 0x43FE3F
{
	int iVar0;
	iVar0 = __LIB_20__.func_651(uParam0);
	switch (iVar0)
	{
		case 0:
			return 5;
		case 1:
			return 18;
		case 2:
			return 17;
		case 3:
			return 41;
		case 4:
			return 42;
		default:
	}
	return 5;
}

void func_87(int iParam0, int iParam1)//Position - 0x4440DB
{
	int iVar0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (Global_2815059.f_4546.f_6[iVar0] == iParam0)
			{
				iParam1 = iVar0;
			}
			iVar0++;
		}
	}
	if (iParam1 >= 0)
	{
		__LIB_0__.func_579(&(Global_2815059.f_4546[iParam1 /*2*/]));
		__LIB_0__.func_579(&(Global_2815059.f_4546.f_3[iParam1 /*2*/]));
		Global_2815059.f_4546.f_6[iParam1] = 0;
		Global_2815059.f_4546.f_8[iParam1] = 0;
		Global_2815059.f_4546.f_10[iParam1] = 0;
		Global_2815059.f_4546.f_12[iParam1] = 0;
		Global_2815059.f_4546.f_18 = (Global_2815059.f_4546.f_18 - 1);
	}
}

int func_88(int iParam0)//Position - 0x44B32D
{
	var uVar0;
	switch (iParam0)
	{
		case joaat("PICKUP_ARMOUR_STANDARD"):
			return __LIB_17__.func_392();
			break;
		case joaat("PICKUP_HEALTH_STANDARD"):
		case joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW"):
			return PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
			break;
		case joaat("PICKUP_VEHICLE_HEALTH_STANDARD"):
			return 1000;
			break;
		case joaat("PICKUP_WEAPON_RPG"):
			return 4;
			break;
		case joaat("PICKUP_MONEY_CASE"):
			return 1;
			break;
		case joaat("PICKUP_WEAPON_MINIGUN"):
			return 200;
			break;
		case joaat("PICKUP_WEAPON_GRENADE"):
		case joaat("PICKUP_WEAPON_SMOKEGRENADE"):
		case joaat("PICKUP_WEAPON_STICKYBOMB"):
			return 5;
			break;
		case joaat("PICKUP_WEAPON_RAYPISTOL"):
			return 1;
			break;
		case joaat("PICKUP_WEAPON_RAYMINIGUN"):
			return Global_262145.f_26761 /* Tunable: -888432705 */;
			break;
		case joaat("PICKUP_WEAPON_RAYCARBINE"):
			return Global_262145.f_26760 /* Tunable: -1290045798 */;
			break;
		case joaat("PICKUP_PARACHUTE"):
			return 1;
			break;
		default:
			uVar0 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(iParam0), true) * 2;
			break;
	}
	return uVar0;
}

bool func_89()//Position - 0x44F09D
{
	return (__LIB_12__.func_364() && BitTest(Global_4718592.f_162497, 12));
}

int func_90(int iParam0)//Position - 0x44F66F
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 15);
	}
	return 0;
}

int func_91()//Position - 0x44F949
{
	if (Global_1574612)
	{
		return 1;
	}
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	return __LIB_1__.func_563(115, -1);
}

void func_92(int iParam0, bool bParam1)//Position - 0x453F3A
{
	var uVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1911872[iParam0 /*6*/].f_5))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1911872[iParam0 /*6*/].f_5, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1911872[iParam0 /*6*/].f_5, false, true);
		}
		OBJECT::DELETE_OBJECT(&(Global_1911872[iParam0 /*6*/].f_5));
	}
	if (bParam1)
	{
		__LIB_5__.func_128(&(Global_1911933[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*260*/].f_94[iParam0 /*2*/]));
		MISC::COPY_SCRIPT_STRUCT(&(Global_1911872[iParam0 /*6*/]), &uVar0, 6);
	}
}

void func_93(int iParam0, var uParam1)//Position - 0x455FDF
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	__LIB_22__.func_854(iParam0, &uVar0, &uVar2, &uVar1, &uVar3);
	__LIB_22__.func_853(uParam1, uVar0, uVar1, uVar3, uVar2);
}

void func_94(var uParam0)//Position - 0x4562CB
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	int iVar3;
	iVar2 = *uParam0;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (__LIB_22__.func_857(iVar3, &Var0, &uVar1))
		{
			*(uParam0[iVar3 /*6*/]) = { Var0 };
			(uParam0[iVar3 /*6*/])->f_3 = { 0f, 0f, uVar1 };
		}
		iVar3++;
	}
}

void func_95(int iParam0, var uParam1)//Position - 0x456B4C
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	__LIB_22__.func_854(iParam0, &uVar0, &uVar2, &uVar1, &uVar3);
	__LIB_22__.func_860(uParam1, uVar0, uVar1, uVar3, uVar2);
}

int func_96(bool bParam0)//Position - 0x45B32E
{
	if (bParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_408.f_2, 17);
	}
	return 0;
}

void func_97()//Position - 0x45B3A2
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	__LIB_7__.func_167(1);
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::SET_PAUSE_MENU_ACTIVE(false);
	}
}

int func_98()//Position - 0x4638C3
{
	int iVar0;
	iVar0 = 100;
	if (__LIB_4__.func_135(PLAYER::PLAYER_ID()))
	{
		iVar0 = 10;
	}
	if ((iVar0 == 0 || BitTest(Global_1946250.f_4, 19)) || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		return 1;
	}
	return 0;
}

int func_99()//Position - 0x463B36
{
	if (((((((((((__LIB_0__.func_77(0) || __LIB_2__.func_368()) || !__LIB_4__.func_715()) || __LIB_3__.func_998(PLAYER::PLAYER_ID())) || __LIB_0__.func_494()) || __LIB_1__.func_654()) || Global_2703735.f_833.f_5 != -1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || __LIB_9__.func_101()) || __LIB_1__.func_288())
	{
		return 1;
	}
	return 0;
}

int func_100(bool bParam0, int iParam1)//Position - 0x46A974
{
	if (__LIB_6__.func_460(bParam0, 1, 0) && __LIB_6__.func_460(iParam1, 1, 0))
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_33 == Global_1853348[iParam1 /*834*/].f_267.f_33)
		{
			if (!BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 3) == BitTest(Global_1853348[iParam1 /*834*/].f_267.f_30, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_101()//Position - 0x46AB1C
{
	if (__LIB_0__.func_851())
	{
		if (!__LIB_2__.func_212(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_102(bool bParam0)//Position - 0x46AB8F
{
	int iVar0;
	if (__LIB_4__.func_21(bParam0, 0))
	{
		iVar0 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (!iVar0 == __LIB_0__.func_160())
		{
			if (__LIB_4__.func_102(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103(bool bParam0)//Position - 0x46AC69
{
	int iVar0;
	if (__LIB_3__.func_925(bParam0))
	{
		iVar0 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (!iVar0 == __LIB_0__.func_160())
		{
			if (__LIB_4__.func_106(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_104(bool bParam0)//Position - 0x46BD05
{
	if (BitTest(Global_2689235[bParam0 /*453*/].f_71.f_2, 23))
	{
		if (!__LIB_2__.func_235(bParam0, Global_2703735))
		{
			return 1;
		}
	}
	return 0;
}

int func_105(bool bParam0)//Position - 0x46BD66
{
	return __LIB_10__.func_886(Global_2678393.f_789[bParam0], &(Global_2678393.f_394), bParam0);
}

int func_106(int iParam0)//Position - 0x470249
{
	return __LIB_23__.func_25(PLAYER::GET_PLAYER_PED(iParam0));
}

int func_107(var uParam0)//Position - 0x48F52D
{
	int iVar0;
	switch (uParam0->f_1)
	{
		case 1:
			__LIB_15__.func_703();
			if (__LIB_0__.func_728())
			{
				return 0;
			}
			return 1;
			break;
		case 13:
		case 53:
		case 56:
			return 1;
		case 15:
		case 16:
		case 17:
		case 14:
		case 20:
		case 21:
		case 18:
		case 19:
		case 22:
		case 39:
		case 43:
		case 44:
		case 47:
			if (!__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				__LIB_15__.func_703();
				return 0;
			}
			break;
		case 24:
		case 33:
		case 36:
		case 37:
		case 38:
		case 55:
			uParam0->f_2 = 5;
			return 0;
			break;
	}
	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uParam0->f_78, NETWORK::GET_NETWORK_TIME()));
	if (iVar0 < 1000)
	{
		return 0;
	}
	uParam0->f_79 = iVar0;
	return 1;
}

int func_108(bool bParam0)//Position - 0x497D83
{
	int iVar0;
	if (__LIB_2__.func_192(bParam0))
	{
		iVar0 = bParam0;
		if (Global_2689235[iVar0 /*453*/].f_71.f_3 != 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_109(int iParam0)//Position - 0x499238
{
	MISC::CLEAR_BIT(&(Global_2678393.f_366), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_367), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_368), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_369), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_370), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_371), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_373), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_374), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_372), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_375), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_376), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_377), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_378), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_380), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_381), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_382), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_384), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_383), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_379), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_408), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_395), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_385), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_386), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_387), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_397), iParam0);
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iParam0]))
	{
		HUD::SET_BLIP_ALPHA(Global_2678393[iParam0], 0);
		__LIB_17__.func_996(&(Global_2678393[iParam0]), 1);
	}
}

int func_110(bool bParam0, int iParam1)//Position - 0x499A27
{
	struct<3> Var0;
	if (__LIB_1__.func_264(bParam0, 0, 1))
	{
		Var0 = { __LIB_1__.func_265(bParam0) };
		return __LIB_9__.func_474(Var0, iParam1);
	}
	return 0;
}

int func_111(bool bParam0)//Position - 0x49B4A4
{
	if (__LIB_4__.func_703(Global_2703735) && __LIB_4__.func_703(bParam0))
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_9 == Global_2689235[Global_2703735 /*453*/].f_318.f_9)
		{
			return 1;
		}
	}
	return 0;
}

int func_112(bool bParam0)//Position - 0x49B53D
{
	if (__LIB_3__.func_925(Global_2703735) && __LIB_3__.func_925(bParam0))
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_9 == Global_2689235[Global_2703735 /*453*/].f_318.f_9)
		{
			return 1;
		}
	}
	return 0;
}

int func_113(bool bParam0)//Position - 0x49B61E
{
	if (__LIB_4__.func_21(Global_2703735, 0) && __LIB_4__.func_21(bParam0, 0))
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_9 == Global_2689235[Global_2703735 /*453*/].f_318.f_9)
		{
			return 1;
		}
	}
	return 0;
}

int func_114(bool bParam0)//Position - 0x49B664
{
	int iVar0;
	if (__LIB_4__.func_21(bParam0, 0))
	{
		iVar0 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (!iVar0 == __LIB_0__.func_160())
		{
			if (!__LIB_4__.func_102(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_115(bool bParam0)//Position - 0x49B6F5
{
	if (__LIB_3__.func_942(Global_2703735) && __LIB_3__.func_942(bParam0))
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_9 == Global_2689235[Global_2703735 /*453*/].f_318.f_9)
		{
			return 1;
		}
	}
	return 0;
}

int func_116()//Position - 0x49B781
{
	if (__LIB_17__.func_757(__LIB_7__.func_728(Global_2703735)))
	{
		return 225;
	}
	return 586;
}

int func_117(bool bParam0)//Position - 0x49BA6E
{
	if (__LIB_23__.func_27(PLAYER::GET_PLAYER_PED(bParam0), 0))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)//Position - 0x49BF0D
{
	if ((__LIB_23__.func_740(HUD::GET_BLIP_SPRITE(iParam0)) && HUD::GET_BLIP_ALPHA(iParam0) > 0) && HUD::GET_BLIP_FADE_DIRECTION(iParam0) == 0)
	{
		return 1;
	}
	return 0;
}

void func_119(bool bParam0, bool bParam1)//Position - 0x49BF41
{
	if (bParam1)
	{
		if (!BitTest(Global_2678393.f_384, bParam0))
		{
			HUD::SHOW_FRIEND_INDICATOR_ON_BLIP(Global_2678393[bParam0], true);
			MISC::SET_BIT(&(Global_2678393.f_382), bParam0);
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
		{
			HUD::SHOW_FRIEND_INDICATOR_ON_BLIP(Global_2678393[bParam0], false);
		}
		MISC::CLEAR_BIT(&(Global_2678393.f_382), bParam0);
		__LIB_23__.func_744(bParam0);
	}
}

void func_120(bool bParam0)//Position - 0x49BFBD
{
	if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
	{
		__LIB_23__.func_28(&(Global_2678393[bParam0]));
		HUD::SHOW_CREW_INDICATOR_ON_BLIP(Global_2678393[bParam0], false);
	}
	MISC::CLEAR_BIT(&(Global_2678393.f_381), bParam0);
	__LIB_23__.func_744(bParam0);
}

void func_121(bool bParam0)//Position - 0x49C0C1
{
	if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
	{
		__LIB_23__.func_28(&(Global_2678393[bParam0]));
	}
	MISC::CLEAR_BIT(&(Global_2678393.f_384), bParam0);
	__LIB_23__.func_744(bParam0);
}

int func_122(int iParam0)//Position - 0x49C33D
{
	if (((!__LIB_23__.func_745(iParam0) && __LIB_3__.func_583(iParam0)) && __LIB_4__.func_681(iParam0)) && __LIB_0__.func_170(__LIB_3__.func_977(iParam0)) == 1)
	{
		return 1;
	}
	return 0;
}

int func_123()//Position - 0x49CC28
{
	if (__LIB_0__.func_734() || __LIB_0__.func_851())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_13, 20);
}

void func_124()//Position - 0x4A8E8E
{
	__LIB_19__.func_813(0);
}

void func_125(int iParam0, bool bParam1, int iParam2)//Position - 0x4AC10F
{
	__LIB_0__.func_521(__LIB_0__.func_239(iParam0), bParam1, iParam2);
}

int func_126(var uParam0)//Position - 0x4CC37A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (__LIB_9__.func_267(uParam0))
	{
		return __LIB_26__.func_730(uParam0);
	}
	if (__LIB_2__.func_12(uParam0->f_1))
	{
		if (__LIB_2__.func_11(uParam0))
		{
			return __LIB_26__.func_730(uParam0);
		}
		return iVar0;
	}
	iVar1 = __LIB_7__.func_206(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
		case 62:
			return __LIB_26__.func_730(uParam0);
		default:
	}
	return 0;
	return iVar0;
}

void func_127(char* sParam0)//Position - 0x4CDBB9
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_2666179[iVar1 /*13*/] != 42)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_2666179[iVar1 /*13*/].f_1.f_3)))
			{
			}
			else
			{
				if (iVar0 != iVar1)
				{
					Global_2666179[iVar0 /*13*/] = Global_2666179[iVar1 /*13*/];
					Global_2666179[iVar0 /*13*/].f_1 = { Global_2666179[iVar1 /*13*/].f_1 };
					Global_2666179[iVar0 /*13*/].f_11 = Global_2666179[iVar1 /*13*/].f_11;
					Global_2666179[iVar0 /*13*/].f_12 = Global_2666179[iVar1 /*13*/].f_12;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	while (iVar0 < 3)
	{
		Global_2666179[iVar0 /*13*/] = 42;
		__LIB_9__.func_819(&(Global_2666179[iVar0 /*13*/].f_1));
		Global_2666179[iVar0 /*13*/].f_11 = 0;
		Global_2666179[iVar0 /*13*/].f_12 = 0;
		iVar0++;
	}
	__LIB_12__.func_529();
}

void func_128(int iParam0, int iParam1, int iParam2)//Position - 0x4D8F7F
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<26> Var3;
	int iVar4;
	struct<4> Var5;
	int iVar6;
	iVar0 = iParam1;
	iVar1 = iVar0;
	iVar2 = iParam0;
	Var3 = { Global_2621865[iParam0 /*26*/] };
	iVar4 = __LIB_9__.func_815(iVar1);
	if (iParam0 != iVar4)
	{
		Global_2621865[iParam0 /*26*/] = { Global_2621865[iVar4 /*26*/] };
		iVar2 = iVar4;
	}
	if (__LIB_23__.func_962(iVar1) == 1)
	{
		Var5.f_1 = -1;
		Var5.f_2 = -1;
		Var5.f_3 = -1;
		Global_1573860[iVar1 /*4*/] = { Var5 };
	}
	else
	{
		Global_1573860[iVar1 /*4*/] = (Global_1573860[iVar1 /*4*/] - 1);
		Global_1573860[iVar1 /*4*/].f_1++;
	}
	iVar6 = 0;
	iVar0 = (iVar0 - 1);
	while (iVar0 != iParam2)
	{
		iVar1 = iVar0;
		if (__LIB_23__.func_962(iVar1) > 0)
		{
			Global_1573860[iVar1 /*4*/].f_2++;
			iVar6 = __LIB_23__.func_866(iVar1);
			iVar4 = __LIB_9__.func_815(iVar1);
			Global_2621865[iVar6 /*26*/] = { Global_2621865[iVar4 /*26*/] };
			iVar2 = iVar4;
			Global_1573860[iVar1 /*4*/].f_1++;
		}
		iVar0 = (iVar0 - 1);
	}
	iVar1 = iVar0;
	Global_2621865[iVar2 /*26*/] = { Var3 };
	if (__LIB_23__.func_962(iVar1) == 0)
	{
		Global_1573860[iVar1 /*4*/] = 1;
		Global_1573860[iVar1 /*4*/].f_1 = iVar2;
		Global_1573860[iVar1 /*4*/].f_2 = iVar2;
		Global_1573860[iVar1 /*4*/].f_3 = iVar2;
	}
	else
	{
		Global_1573860[iVar1 /*4*/]++;
		Global_1573860[iVar1 /*4*/].f_2++;
	}
}

void func_129(int iParam0)//Position - 0x4D949D
{
	if (!__LIB_23__.func_829(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 13);
}

bool func_130(int iParam0)//Position - 0x4DB15D
{
	return __LIB_23__.func_892(iParam0) != 3;
}

int func_131(int iParam0, bool bParam1)//Position - 0x4DCD21
{
	if ((((__LIB_12__.func_507(iParam0) && !__LIB_1__.func_238()) && !__LIB_1__.func_239()) && !__LIB_1__.func_678()) && !__LIB_0__.func_850())
	{
		if (bParam1)
		{
		}
		return 1;
	}
	return 0;
}

int func_132()//Position - 0x4DCD75
{
	if (((__LIB_23__.func_926() || __LIB_23__.func_909()) || __LIB_23__.func_925()) || __LIB_23__.func_903())
	{
		return 1;
	}
	return 0;
}

bool func_133(int iParam0)//Position - 0x4DD088
{
	int iVar0;
	if (!__LIB_23__.func_859())
	{
		return 0;
	}
	iVar0 = Global_2621865[iParam0 /*26*/].f_25;
	return Global_2653167.f_7 == iVar0;
}

void func_134(int iParam0)//Position - 0x4DD8C7
{
	int iVar0;
	if (!__LIB_23__.func_938())
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1573131.f_15[iVar0 /*3*/].f_1 == iParam0)
		{
			if (Global_1573131.f_15[iVar0 /*3*/].f_2 != 0)
			{
				GRAPHICS::DELETE_CHECKPOINT(Global_1573131.f_15[iVar0 /*3*/].f_2);
				Global_1573131.f_15[iVar0 /*3*/].f_2 = 0;
				Global_1573131.f_15[iVar0 /*3*/] = 1;
			}
			Global_1573131.f_15[iVar0 /*3*/].f_1 = -1;
			return;
		}
		iVar0++;
	}
}

void func_135(int iParam0, int iParam1)//Position - 0x4DDAF3
{
	switch (iParam1)
	{
		case -1:
			__LIB_23__.func_831(iParam0);
			return;
		case 0:
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 1);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 2);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 3);
			return;
		case 1:
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 1);
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 2);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 3);
			return;
		case 2:
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 1);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 2);
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 3);
			return;
		default:
	}
	__LIB_23__.func_831(iParam0);
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4DE44A
{
	int iVar0;
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_1659366[iParam0 /*11*/].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iVar0, "SET_MISSION_NAME");
	__LIB_0__.func_478(__LIB_12__.func_707(iParam1, -1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iVar0, "SET_PLAYERS_NEEDED");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_137(var uParam0, var uParam1)//Position - 0x4DE96E
{
	if (*uParam0 != 189)
	{
		return 0;
	}
	if (__LIB_20__.func_651(uParam0) == 4)
	{
		*uParam1 = 1;
		return 1;
	}
	*uParam1 = 0;
	return __LIB_20__.func_651(uParam0) == 3;
}

var func_138(int iParam0)//Position - 0x4DEEC3
{
	return __LIB_1__.func_192(&(Global_1659366[iParam0 /*11*/].f_3));
}

int func_139(int iParam0)//Position - 0x4DEF0F
{
	int iVar0;
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return 0;
	}
	iVar0 = __LIB_23__.func_814(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 1;
		default:
	}
	return 0;
}

void func_140(int iParam0)//Position - 0x4DEF4C
{
	if (!__LIB_23__.func_894(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 23);
}

bool func_141(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x4DF6F0
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	fVar0 = 0f;
	if (bParam1)
	{
		fVar0 = (fVar0 + 80f);
	}
	else
	{
		fVar0 = (fVar0 + __LIB_23__.func_822(iParam0));
	}
	if (bParam3)
	{
		fVar0 = (fVar0 + 80f);
	}
	else
	{
		fVar0 = (fVar0 + __LIB_23__.func_822(iParam2));
	}
	fVar0 = (fVar0 + 2f);
	Var1 = { __LIB_12__.func_470(iParam0) };
	Var2 = { __LIB_12__.func_470(iParam2) };
	return __LIB_0__.func_394(Var1, Var2, fVar0, 0);
}

int func_142(int iParam0)//Position - 0x4DF785
{
	if (__LIB_12__.func_507(iParam0))
	{
		return 1;
	}
	if (__LIB_26__.func_734(iParam0))
	{
		return 1;
	}
	if (!__LIB_23__.func_921(iParam0) && !__LIB_12__.func_472(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_143(int iParam0)//Position - 0x4DF96B
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_12__.func_471(iParam0);
	iVar1 = __LIB_23__.func_858(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	Global_1573169[iVar1 /*8*/] = -1;
	Global_1573169[iVar1 /*8*/].f_1 = { 0f, 0f, 0f };
	Global_1573169[iVar1 /*8*/].f_4 = { 0f, 0f, 0f };
	Global_1573169[iVar1 /*8*/].f_7 = 0f;
	Global_2621541[iVar1 /*3*/] = { 0f, 0f, 0f };
	Global_1573850 = (Global_1573850 - 1);
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 11);
}

int func_144(int iParam0, int iParam1)//Position - 0x4E1A35
{
	if (!__LIB_20__.func_968())
	{
		return 0;
	}
	if (iParam0 != Global_2653202.f_4)
	{
		return 0;
	}
	if (iParam1 != -1)
	{
		if (iParam1 != Global_2653202.f_4.f_1)
		{
			return 0;
		}
	}
	return 1;
}

int func_145(int iParam0)//Position - 0x4E3A53
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1659440)
	{
		if (Global_1659409 >= 12)
		{
			return iVar0;
		}
		if (Global_2656326[iVar2 /*46*/])
		{
			bVar1 = false;
			if (iParam0 == -1)
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
				if (iParam0 == Global_2655137[iVar2 /*99*/].f_92)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				if (((Global_2656326[iVar2 /*46*/].f_8 == 123 || Global_2656326[iVar2 /*46*/].f_8 == 234) || Global_2656326[iVar2 /*46*/].f_8 == 149) || Global_2656326[iVar2 /*46*/].f_8 == 261)
				{
					if (!__LIB_23__.func_970(iVar2))
					{
						bVar1 = false;
					}
				}
			}
			if (bVar1)
			{
				Global_2653243[Global_1659409 /*75*/].f_5 = 0;
				Global_2653243[Global_1659409 /*75*/] = 6;
				if (Global_2656326[iVar2 /*46*/].f_7)
				{
					Global_2653243[Global_1659409 /*75*/].f_1 = Global_2656326[iVar2 /*46*/].f_5;
					MISC::SET_BIT(&(Global_2653243[Global_1659409 /*75*/].f_5), 4);
				}
				else
				{
					Global_2653243[Global_1659409 /*75*/].f_1 = Global_2656326[iVar2 /*46*/].f_6;
				}
				Global_2653243[Global_1659409 /*75*/].f_2 = Global_2656326[iVar2 /*46*/].f_8;
				Global_2653243[Global_1659409 /*75*/].f_3 = Global_2656326[iVar2 /*46*/].f_9;
				Global_2653243[Global_1659409 /*75*/].f_25 = { Global_2656326[iVar2 /*46*/].f_10 };
				Global_2653243[Global_1659409 /*75*/].f_64 = Global_2656326[iVar2 /*46*/].f_45;
				Global_2653243[Global_1659409 /*75*/].f_74 = Global_2656326[iVar2 /*46*/].f_1;
				StringCopy(&(Global_2653243[Global_1659409 /*75*/].f_58), "", 24);
				Global_2653243[Global_1659409 /*75*/].f_68 = -1;
				Global_2653243[Global_1659409 /*75*/].f_69 = 0;
				if (!__LIB_23__.func_970(iVar2))
				{
					MISC::SET_BIT(&(Global_2653243[Global_1659409 /*75*/].f_5), 3);
				}
				if (Global_2656326[iVar2 /*46*/].f_39)
				{
					MISC::SET_BIT(&(Global_2653243[Global_1659409 /*75*/].f_5), 5);
				}
				MemCopy(&(Global_2653243[Global_1659409 /*75*/].f_41), {Global_2656326[iVar2 /*46*/].f_27}, 16);
				Global_2653243[Global_1659409 /*75*/].f_57 = Global_2656326[iVar2 /*46*/].f_35;
				Global_2653243[Global_1659409 /*75*/].f_4 = Global_2656326[iVar2 /*46*/].f_36;
				Global_2653243[Global_1659409 /*75*/].f_70 = Global_2656326[iVar2 /*46*/].f_40;
				Global_2653243[Global_1659409 /*75*/].f_73 = Global_2656326[iVar2 /*46*/].f_44;
				Global_1659409++;
				iVar0 = 1;
			}
		}
		iVar2++;
	}
	return iVar0;
}

bool func_146(int iParam0, int iParam1)//Position - 0x4E4396
{
	var uVar0;
	uVar0 = __LIB_22__.func_960(iParam0);
	return BitTest(uVar0, iParam1);
}

int func_147(int iParam0, int iParam1)//Position - 0x4E4FF0
{
	if (iParam0 != 0 || iParam1 != 0)
	{
		if (__LIB_4__.func_604(iParam0))
		{
			return 0;
		}
		if (__LIB_5__.func_53(iParam0))
		{
			if (Global_262145.f_12645 /* Tunable: DISABLEREDINVITE_COME_OUT_TO_PLAY */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_5__.func_55(iParam0))
		{
			if (Global_262145.f_12646 /* Tunable: DISABLEREDINVITE_SIEGE_MENTALITY */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_5__.func_54(iParam0))
		{
			if (Global_262145.f_12647 /* Tunable: DISABLEREDINVITE_HASTA_LA_VISTA */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_0__.func_719(iParam0, 1))
		{
			if (Global_262145.f_12648 /* Tunable: DISABLEREDINVITE_HUNTING_PACK */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_1__.func_735(iParam0))
		{
			if (Global_262145.f_12649 /* Tunable: DISABLEREDINVITE_CROSS_THE_LINE */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_4__.func_759(iParam0))
		{
			if (Global_262145.f_12650 /* Tunable: DISABLEREDINVITE_SHEPHERD */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_4__.func_755(iParam0))
		{
			if (Global_262145.f_12651 /* Tunable: DISABLEREDINVITE_RELAY */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_5__.func_52(iParam0))
		{
			if (Global_262145.f_12652 /* Tunable: DISABLEREDINVITE_SPEED_RACE */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_5__.func_50(iParam0))
		{
			if (Global_262145.f_12653 /* Tunable: DISABLEREDINVITE_EBC */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_5__.func_51(iParam0))
		{
			if (Global_262145.f_12654 /* Tunable: DISABLEREDINVITE_HUNT_DARK */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_1__.func_740(iParam0))
		{
			if (Global_262145.f_12655 /* Tunable: DISABLEREDINVITE_RUNNING_BACK */)
			{
				return 0;
			}
			return 1;
		}
		if (__LIB_16__.func_355(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_148(bool bParam0)//Position - 0x4E7B06
{
	struct<13> Var0;
	if (!__LIB_0__.func_53())
	{
		return 0;
	}
	Var0 = { __LIB_1__.func_267(bParam0) };
	if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
	{
		return 0;
	}
	return 1;
}

int func_149(bool bParam0)//Position - 0x4E7B33
{
	struct<13> Var0;
	if (!__LIB_0__.func_53())
	{
		return 0;
	}
	Var0 = { __LIB_1__.func_267(bParam0) };
	if (NETWORK::NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(&Var0))
	{
		return 0;
	}
	return 1;
}

int func_150()//Position - 0x4EEF07
{
	if (!__LIB_16__.func_855())
	{
		return 0;
	}
	if (!__LIB_16__.func_854())
	{
		return 0;
	}
	return 1;
}

int func_151(int iParam0)//Position - 0x4F5B43
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_480.f_2;
}

int func_152(int iParam0)//Position - 0x4FF684
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2, 20))
	{
		return 3;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2, 19))
	{
		return 2;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2, 18))
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0)//Position - 0x4FF6F1
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_336.f_9;
}

int func_154(int iParam0)//Position - 0x4FF717
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_336.f_8;
}

void func_155()//Position - 0x511A33
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	switch (__LIB_0__.func_228(18987, -1))
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
		case 1:
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
		case 2:
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
		case 3:
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
		case 4:
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
		case 5:
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
	}
}

int func_156(int iParam0, int iParam1)//Position - 0x51BFA2
{
	int iVar0;
	if ((iParam0 == __LIB_0__.func_160() || !__LIB_4__.func_926(iParam1)) || !__LIB_9__.func_720(iParam1))
	{
		return -1;
	}
	iVar0 = __LIB_19__.func_900(iParam1);
	if (__LIB_9__.func_719(iVar0))
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_295.f_16[iVar0];
	}
	return -1;
}

int func_157()//Position - 0x51D5C3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__.func_206())
	{
		if (!__LIB_15__.func_108(0) && !__LIB_15__.func_108(1))
		{
			if (Global_2725439.f_303)
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_6__.func_926())
	{
		if (__LIB_4__.func_973(1))
		{
			bVar0 = __LIB_0__.func_582();
			if (bVar0 != __LIB_0__.func_160())
			{
				iVar1 = BitTest(Global_1892703[bVar0 /*599*/].f_513, 7);
				return iVar1;
			}
		}
		else
		{
			iVar2 = 0;
			while (iVar2 < __LIB_1__.func_527())
			{
				if (__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(iVar2), 1, 1))
				{
					if (BitTest(Global_1892703[iVar2 /*599*/].f_513, 7))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

char* func_158(int iParam0)//Position - 0x51D931
{
	char* sVar0;
	sVar0 = __LIB_24__.func_38(iParam0);
	switch (iParam0)
	{
		case 4:
			sVar0 = "RADIO_23_DLC_XM19_RADIO" /* GXT: iFruit Radio */;
			break;
		case 7:
			sVar0 = "RADIO_22_DLC_BATTLE_MIX1_RADIO" /* GXT: Los Santos Underground Radio */;
			break;
		case 0:
			sVar0 = "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */;
			break;
		case 1:
			sVar0 = "RADIO_35_DLC_HEI4_MLR" /* GXT: The Music Locker */;
			break;
		case 3:
			sVar0 = "RADIO_34_DLC_HEI4_KULT" /* GXT: Kult FM */;
			break;
		case 25:
			sVar0 = "RADIO_37_MOTOMAMI" /* GXT: MOTOMAMI Los Santos */;
			break;
	}
	return sVar0;
}

void func_159(bool bParam0)//Position - 0x525E82
{
	if (bParam0)
	{
		if (!__LIB_24__.func_47())
		{
			MISC::SET_BIT(&Global_1958736, 9);
		}
	}
	else if (__LIB_24__.func_47())
	{
		MISC::CLEAR_BIT(&Global_1958736, 9);
	}
}

void func_160(int iParam0)//Position - 0x52BE22
{
	if (!__LIB_0__.func_43(iParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_2__.func_108(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

void func_161()//Position - 0x52DF56
{
	if (__LIB_23__.func_926())
	{
	}
	Global_2621837.f_2 = 0;
	Global_2621837.f_3 = 1;
}

int func_162(int iParam0, int iParam1)//Position - 0x530D2E
{
	struct<82> Var0;
	if (!__LIB_0__.func_43(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_10__.func_267(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_163(int iParam0, int iParam1, int iParam2)//Position - 0x537A96
{
	struct<8> Var0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&Var0, "FA_UPGRADE_FAKEID_SETUP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 1:
					StringCopy(&Var0, "FA_UPGRADE_FAKEID_EQUIP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 2:
					StringCopy(&Var0, "FA_UPGRADE_FAKEID_STAFF_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 3:
					StringCopy(&Var0, "FA_UPGRADE_FAKEID_SEC_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					StringCopy(&Var0, "FA_UPGRADE_WEED_SETUP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 1:
					StringCopy(&Var0, "FA_UPGRADE_WEED_EQUIP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 2:
					StringCopy(&Var0, "FA_UPGRADE_WEED_STAFF_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 3:
					StringCopy(&Var0, "FA_UPGRADE_WEED_SEC_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					StringCopy(&Var0, "FA_UPGRADE_CASH_SETUP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 1:
					StringCopy(&Var0, "FA_UPGRADE_CASH_EQUIP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 2:
					StringCopy(&Var0, "FA_UPGRADE_CASH_STAFF_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 3:
					StringCopy(&Var0, "FA_UPGRADE_CASH_SEC_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					StringCopy(&Var0, "FA_UPGRADE_METH_SETUP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 1:
					StringCopy(&Var0, "FA_UPGRADE_METH_EQUIP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 2:
					StringCopy(&Var0, "FA_UPGRADE_METH_STAFF_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 3:
					StringCopy(&Var0, "FA_UPGRADE_METH_SEC_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					StringCopy(&Var0, "FA_UPGRADE_COKE_SETUP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 1:
					StringCopy(&Var0, "FA_UPGRADE_COKE_EQUIP_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 2:
					StringCopy(&Var0, "FA_UPGRADE_COKE_STAFF_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
				case 3:
					StringCopy(&Var0, "FA_UPGRADE_COKE_SEC_", 64);
					StringIntConCat(&Var0, iParam2, 64);
					StringConCat(&Var0, "_t0_v0", 64);
					break;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				StringCopy(&Var0, "FA_UPGRADE_WEAPONS_SETUP_", 64);
				StringIntConCat(&Var0, iParam2, 64);
				StringConCat(&Var0, "_t0_v0", 64);
				break;
			}
			else
			{
				__LIB_9__.func_527(&Var0, iParam0, iParam1, iParam2, 0);
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&Var0);
}

bool func_164(int iParam0)//Position - 0x538EC3
{
	return __LIB_18__.func_983(PLAYER::PLAYER_ID(), iParam0);
}

int func_165(bool bParam0)//Position - 0x54353B
{
	if (__LIB_9__.func_298(__LIB_3__.func_803(bParam0)))
	{
		return 1;
	}
	return 0;
}

int func_166()//Position - 0x550158
{
	int iVar0;
	iVar0 = __LIB_0__.func_228(18981, -1);
	return iVar0;
}

int func_167(int iParam0)//Position - 0x5569CE
{
	if (__LIB_0__.func_228(30509, -1) == iParam0)
	{
		return 0;
	}
	if (__LIB_0__.func_228(30510, -1) == iParam0)
	{
		return 1;
	}
	return -1;
}

int func_168()//Position - 0x5570CD
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (__LIB_1__.func_414())
	{
		return 0;
	}
	if (__LIB_0__.func_75())
	{
		return 0;
	}
	if (__LIB_1__.func_41())
	{
		return 0;
	}
	if (__LIB_2__.func_101())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (__LIB_16__.func_386())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (__LIB_1__.func_709())
	{
		return 0;
	}
	if (__LIB_0__.func_739())
	{
		return 0;
	}
	if (__LIB_0__.func_706())
	{
		return 0;
	}
	return 1;
}

void func_169(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x55C56B
{
	struct<10> Var0;
	Var0.f_0 = 1438167811;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam1;
	Var0.f_3 = iParam3;
	Var0.f_4 = iParam2;
	Var0.f_9 = iParam4;
	__LIB_23__.func_390(bParam0);
	if (bParam0 != __LIB_0__.func_160() && __LIB_1__.func_264(bParam0, 0, 1))
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 10, __LIB_1__.func_276(bParam0));
		MISC::CLEAR_BIT(&Global_1836068, 12);
		if (bParam1)
		{
			if (Global_1836068.f_17 == 0)
			{
				__LIB_16__.func_628(1);
			}
		}
	}
}

int func_170(var uParam0)//Position - 0x566CFC
{
	if (BitTest(uParam0->f_1, 9))
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
		if (__LIB_2__.func_47(&(uParam0->f_67), 4000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1), 9);
			__LIB_0__.func_579(&(uParam0->f_67));
			if (BitTest(uParam0->f_1, 29))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 29);
				HUD::USE_FAKE_MP_CASH(false);
			}
		}
		return 1;
	}
	else if (BitTest(uParam0->f_2, 0))
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		if (__LIB_2__.func_47(&(uParam0->f_67), 1000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_2), 0);
			__LIB_0__.func_579(&(uParam0->f_67));
			if (BitTest(uParam0->f_1, 29))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 29);
				HUD::USE_FAKE_MP_CASH(false);
			}
		}
		return 1;
	}
	return 0;
}

void func_171(var uParam0)//Position - 0x56EF2A
{
	if (uParam0->f_47.f_1464 != 2)
	{
		if (BitTest(Global_2621446, 11))
		{
			MISC::CLEAR_BIT(&Global_2621446, 11);
		}
	}
	switch (uParam0->f_47.f_1464)
	{
		case 0:
			if (__LIB_4__.func_73(&(uParam0->f_1)) != 3)
			{
				if (!BitTest(Global_2621446, 14))
				{
					MISC::SET_BIT(&Global_2621446, 14);
				}
				HUD::SET_FORCE_SHOW_GPS(true);
			}
			else if (BitTest(Global_2621446, 14))
			{
				MISC::CLEAR_BIT(&Global_2621446, 14);
			}
			if (BitTest(Global_2621446, 29))
			{
				if (__LIB_23__.func_275(PLAYER::PLAYER_ID(), 11))
				{
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					MISC::CLEAR_BIT(&Global_2621446, 29);
				}
			}
			break;
		case 1:
			if (BitTest(Global_2621446, 14))
			{
				MISC::CLEAR_BIT(&Global_2621446, 14);
			}
			if (BitTest(Global_2621446, 29))
			{
				if (!__LIB_23__.func_275(PLAYER::PLAYER_ID(), 11))
				{
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					HUD::SET_FORCE_SHOW_GPS(true);
					MISC::CLEAR_BIT(&Global_2621446, 29);
				}
			}
			break;
		case 2:
			if (BitTest(Global_2621446, 14))
			{
				MISC::CLEAR_BIT(&Global_2621446, 14);
			}
			if (__LIB_4__.func_73(&(uParam0->f_1)) != 3)
			{
				if (BitTest(Global_2621446, 11))
				{
					if (!__LIB_23__.func_275(PLAYER::PLAYER_ID(), 11))
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						HUD::SET_FORCE_SHOW_GPS(false);
					}
					else if (!BitTest(Global_2621446, 29))
					{
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(true);
						MISC::SET_BIT(&Global_2621446, 29);
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				else
				{
					if (__LIB_6__.func_215(&(uParam0->f_47)) == 3)
					{
						MISC::SET_BIT(&(uParam0->f_47), 6);
						__LIB_6__.func_212(&(uParam0->f_47), uParam0->f_47.f_1456);
					}
					MISC::SET_BIT(&Global_2621446, 11);
				}
			}
			break;
	}
}

int func_172(bool bParam0)//Position - 0x57A8AF
{
	if (__LIB_9__.func_368(PLAYER::PLAYER_ID()) && !__LIB_9__.func_368(bParam0))
	{
		return 0;
	}
	return 1;
}

bool func_173(bool bParam0)//Position - 0x57BDCE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0) && PLAYER::PLAYER_ID() != bVar0) && __LIB_2__.func_235(PLAYER::PLAYER_ID(), bVar0)) && !__LIB_6__.func_460(bVar0, 1, 0))
			{
				iVar2++;
			}
			iVar1++;
		}
		return iVar2 >= 2;
	}
	return __LIB_3__.func_965(PLAYER::PLAYER_ID()) >= 2;
}

int func_174(struct<2> Param0, var uParam1)//Position - 0x57C442
{
	int iVar0;
	if (Global_4718592.f_655)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_10__.func_722())
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
		if (iVar0 == joaat("taxi"))
		{
			return 0;
		}
	}
	if (__LIB_2__.func_427(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_618())
	{
		return 0;
	}
	if (__LIB_11__.func_8(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_6__.func_460(PLAYER::PLAYER_ID(), 1, 1) && !__LIB_0__.func_93())
	{
		return 0;
	}
	if (Param0.f_0 < -1724f || Param0.f_0 > 1694f)
	{
		return 0;
	}
	if (Param0.f_1 < -3330f || Param0.f_1 > 5468f)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_790(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (__LIB_3__.func_232() || __LIB_3__.func_232())
	{
		return 0;
	}
	if (__LIB_3__.func_427() || __LIB_3__.func_455())
	{
		return 0;
	}
	if (__LIB_2__.func_382())
	{
		return 0;
	}
	if (BitTest(Global_1946250.f_4, 27))
	{
		return 0;
	}
	if (__LIB_1__.func_221())
	{
		return 0;
	}
	if (BitTest(Global_1946250.f_8, 15))
	{
		return 0;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 != 99)
	{
		return 0;
	}
	if (Global_2725439)
	{
		return 0;
	}
	if (Global_1952191.f_5314)
	{
		return 0;
	}
	return 1;
}

bool func_175(int iParam0)//Position - 0x57E28E
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (__LIB_0__.func_93())
	{
		iVar0 = __LIB_1__.func_329();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (__LIB_0__.func_114(iParam0))
	{
		return 0;
	}
	return ENTITY::IS_ENTITY_AT_COORD(iVar0, __LIB_24__.func_99(iParam0, 1), __LIB_24__.func_98(iParam0, 1), false, true, 0);
}

Vector3 func_176(int iParam0)//Position - 0x57E36F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	Var0 = { __LIB_24__.func_99(iParam0, 0) };
	Var1 = { __LIB_24__.func_98(iParam0, 0) };
	fVar2 = ((Var0.f_0 + Var1.f_0) / 2f);
	fVar3 = ((Var0.f_1 + Var1.f_1) / 2f);
	fVar4 = ((Var0.f_2 + Var1.f_2) / 2f);
	return fVar2, fVar3, fVar4;
}

int func_177()//Position - 0x57E425
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	iVar1 = -1;
	fVar2 = 10000f;
	iVar4 = PLAYER::PLAYER_PED_ID();
	if (__LIB_0__.func_93())
	{
		iVar4 = __LIB_1__.func_329();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		Var5 = { ENTITY::GET_ENTITY_COORDS(iVar4, true) };
		iVar0 = 0;
		while (iVar0 < 55)
		{
			if (!__LIB_0__.func_86(__LIB_24__.func_99(iVar0, 1)))
			{
				fVar3 = SYSTEM::VDIST2(Var5, __LIB_24__.func_99(iVar0, 1));
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_178()//Position - 0x57E602
{
	if (Global_2815059.f_6753)
	{
		return 1;
	}
	if (!__LIB_4__.func_715())
	{
		return 1;
	}
	if (__LIB_0__.func_706())
	{
		return 1;
	}
	return 0;
}

int func_179(bool bParam0)//Position - 0x57FDB8
{
	if (__LIB_3__.func_803(bParam0) == 300)
	{
		return __LIB_2__.func_234(bParam0);
	}
	return -1;
}

int func_180()//Position - 0x58EDAE
{
	var uVar0;
	if (__LIB_2__.func_53(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	uVar0 = Global_1659747[__LIB_1__.func_443(-1)];
	if (BitTest(uVar0, 2))
	{
		__LIB_18__.func_464(1);
		return 1;
	}
	return 0;
}

void func_181()//Position - 0x59E3E3
{
	__LIB_6__.func_498(&(Global_1941652.f_47.f_1474));
	Global_1965533 = PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/);
	MISC::CLEAR_BIT(&Global_1965531, 24);
	if ((BitTest(Global_1965531, 2) || BitTest(Global_1965531, 3)) || BitTest(Global_1965531, 5))
	{
		__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, __LIB_4__.func_261(0), true), "HUD_INPUT69" /* GXT: Quit */, &(Global_1941652.f_47.f_1474), 0);
	}
	if (BitTest(Global_1965531, 4))
	{
		__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, __LIB_17__.func_93(), true), "HUD_INPUT69" /* GXT: Quit */, &(Global_1941652.f_47.f_1474), 0);
		__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, __LIB_17__.func_92(), true), "HUD_SPEC_NEXT", &(Global_1941652.f_47.f_1474), 0);
		__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, __LIB_17__.func_91(), true), "HUD_SPEC_PREV", &(Global_1941652.f_47.f_1474), 0);
		__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, __LIB_17__.func_90(), true), "HUD_SPEC_FOCC", &(Global_1941652.f_47.f_1474), 0);
		__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, __LIB_17__.func_89(), true), "HUD_SPEC_GOTO", &(Global_1941652.f_47.f_1474), 0);
		if (Global_1965572 > -1)
		{
			if (!__LIB_15__.func_28(Global_4980736.f_63312[Global_1965572 /*183*/].f_7))
			{
				__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, __LIB_17__.func_88(), true), "HUD_SPEC_ACTI", &(Global_1941652.f_47.f_1474), 0);
			}
			if (__LIB_15__.func_28(Global_4980736.f_63312[Global_1965572 /*183*/].f_7))
			{
				__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, __LIB_17__.func_88(), true), "HUD_SPEC_DECT", &(Global_1941652.f_47.f_1474), 0);
			}
		}
		__LIB_2__.func_33(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "HUD_SPEC_ROTC", &(Global_1941652.f_47.f_1474), 0);
	}
}

void func_182(var uParam0)//Position - 0x59E9E7
{
	int iVar0;
	if (__LIB_0__.func_649(&Global_1965616))
	{
		iVar0 = NETWORK::VEH_TO_NET(*uParam0);
		if (__LIB_2__.func_47(&Global_1965616, 5000, 0))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar0))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iVar0);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iVar0, false);
					if (__LIB_7__.func_225(*uParam0, 0, 0, 0, 1, 0, 1, 0, 1))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(*uParam0))
						{
							ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
							ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
							__LIB_4__.func_509(&iVar0);
							__LIB_0__.func_579(&Global_1965616);
						}
						else
						{
							NETWORK::NETWORK_FADE_OUT_ENTITY(*uParam0, true, true);
						}
					}
				}
			}
			else
			{
				__LIB_0__.func_579(&Global_1965616);
			}
		}
	}
	else
	{
		__LIB_0__.func_580(&Global_1965616, 0, 0);
	}
}

void func_183(bool bParam0)//Position - 0x59F064
{
	struct<2> Var0;
	int iVar1;
	struct<2> Var2;
	if ((!__LIB_5__.func_761() && !Global_1574964) && !Global_1931426)
	{
		if (!__LIB_0__.func_80())
		{
			if (BitTest(Global_4718592.f_32, 23))
			{
				if ((!BitTest(Global_1965532, 12) && !bParam0) && Global_1574965)
				{
					if (BitTest(Global_2787913, 8))
					{
						StringCopy(&Var0, "ARENA_SEAT_GM", 16);
						if (MISC::IS_PC_VERSION())
						{
							StringIntConCat(&Var0, 0, 16);
						}
						else
						{
							StringIntConCat(&Var0, 1, 16);
						}
						HUD::CLEAR_HELP(true);
						__LIB_0__.func_151(&Var0, 10000);
						MISC::SET_BIT(&Global_1965532, 12);
					}
				}
				else if (bParam0)
				{
					if (!BitTest(Global_1965532, 12))
					{
						MISC::SET_BIT(&Global_1965532, 19);
					}
					else
					{
						MISC::CLEAR_BIT(&Global_1965532, 19);
					}
				}
				if (!BitTest(Global_1965532, 13) && BitTest(Global_1965532, 12))
				{
					if (!__LIB_0__.func_1("ARENA_SEAT_GM0") && !__LIB_0__.func_1("ARENA_SEAT_GM1"))
					{
						MISC::SET_BIT(&Global_1965532, 13);
						MISC::CLEAR_BIT(&Global_1965532, 19);
					}
				}
			}
			if (BitTest(Global_4718592.f_30, 25))
			{
				if ((!BitTest(Global_1965532, 14) && !bParam0) && Global_1574965)
				{
					iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
					StringCopy(&Var2, "TAGTM_HELP_2", 16);
					if (iVar1 == 0)
					{
						StringConCat(&Var2, "O", 16);
					}
					else if (iVar1 == 1)
					{
						StringConCat(&Var2, "P", 16);
					}
					else if (iVar1 == 2)
					{
						StringConCat(&Var2, "Pi", 16);
					}
					else if (iVar1 == 3)
					{
						StringConCat(&Var2, "G", 16);
					}
					HUD::CLEAR_HELP(true);
					__LIB_0__.func_151(&Var2, 10000);
					MISC::SET_BIT(&Global_1965532, 14);
				}
				else if (bParam0)
				{
					if (!BitTest(Global_1965532, 12))
					{
						MISC::SET_BIT(&Global_1965532, 19);
					}
					else
					{
						MISC::CLEAR_BIT(&Global_1965532, 19);
					}
				}
				if (!BitTest(Global_1965532, 15) && BitTest(Global_1965532, 14))
				{
					if (((!__LIB_0__.func_1("TAGTM_HELP_2O") && !__LIB_0__.func_1("TAGTM_HELP_2P")) && !__LIB_0__.func_1("TAGTM_HELP_2Pi")) && !__LIB_0__.func_1("TAGTM_HELP_2G"))
					{
						MISC::SET_BIT(&Global_1965532, 15);
						MISC::CLEAR_BIT(&Global_1965532, 19);
					}
				}
			}
		}
		else
		{
			MISC::SET_BIT(&Global_1965532, 13);
			MISC::SET_BIT(&Global_1965532, 15);
		}
	}
	if (__LIB_0__.func_845(Global_4718592.f_168757) || __LIB_0__.func_844(Global_4718592.f_168757))
	{
		if ((((((__LIB_0__.func_1("TAGTM_HELP_2O") || __LIB_0__.func_1("TAGTM_HELP_2P")) || __LIB_0__.func_1("TAGTM_HELP_2Pi")) || __LIB_0__.func_1("TAGTM_HELP_2G")) || __LIB_0__.func_1("ARENA_SEAT_GM0")) || __LIB_0__.func_1("ARENA_SEAT_GM1")) && ((__LIB_0__.func_93() || __LIB_12__.func_796()) || ((__LIB_19__.func_393(PLAYER::PLAYER_ID()) == 2 && __LIB_15__.func_31()) && __LIB_12__.func_878())))
		{
			HUD::CLEAR_HELP(true);
			MISC::SET_BIT(&Global_1965532, 15);
			MISC::SET_BIT(&Global_1965532, 13);
		}
	}
}

void func_184(var uParam0, var uParam1)//Position - 0x59FE76
{
	struct<4> Var0;
	bool bVar1;
	int iVar2;
	Var0.f_0 = 1980827733;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam1;
	bVar1 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__.func_388(), -1, 0);
	if (bVar1 == PLAYER::PLAYER_ID())
	{
		__LIB_17__.func_98(&Var0);
	}
	else
	{
		iVar2 = __LIB_1__.func_276(bVar1);
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar2);
	}
}

int func_185(int iParam0, int iParam1)//Position - 0x5A9C37
{
	int iVar0;
	char* sVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = -1;
	sVar1 = "";
	if (!__LIB_4__.func_69(iParam0))
	{
		iVar0 = 3;
		if (iParam1 == 12)
		{
			sVar1 = "DLC_MP_ARENA_M_OUTFIT_EPSILON_0";
		}
		else
		{
			sVar1 = "DLC_MP_ARENA_M_TEETH_0_0";
		}
	}
	else
	{
		iVar0 = 4;
		if (iParam1 == 12)
		{
			sVar1 = "DLC_MP_ARENA_F_OUTFIT_EPSILON_0";
		}
		else
		{
			sVar1 = "DLC_MP_ARENA_F_TEETH_0_0";
		}
	}
	if (iParam1 == 12)
	{
		iVar4 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, false);
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2.f_0))
			{
				if (Var2.f_1 == MISC::GET_HASH_KEY(sVar1))
				{
					iVar5 = (__LIB_0__.func_28(ENTITY::GET_ENTITY_MODEL(iParam0)) + iVar3);
					return iVar5;
				}
			}
			iVar3++;
		}
	}
	else
	{
		iVar6 = __LIB_6__.func_758(ENTITY::GET_ENTITY_MODEL(iParam0), MISC::GET_HASH_KEY(sVar1), iParam1, iVar0);
		return iVar6;
	}
	return -99;
}

int func_186(int iParam0)//Position - 0x5BC14E
{
	bool bVar0;
	int iVar1;
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_295.f_2, bVar0))
		{
			iVar1++;
		}
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_295.f_3, bVar0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

int func_187(bool bParam0)//Position - 0x5BCD34
{
	if (bParam0 != __LIB_0__.func_160())
	{
		if (__LIB_4__.func_6(bParam0) && Global_2689235[bParam0 /*453*/].f_318.f_9 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_188(bool bParam0, bool bParam1)//Position - 0x5D55E2
{
	int iVar0;
	int iVar1;
	iVar0 = 116;
	if ((!bParam1 && __LIB_2__.func_7(bParam0)) && !__LIB_2__.func_308(bParam0))
	{
		iVar0 = __LIB_0__.func_969();
	}
	iVar1 = __LIB_6__.func_131(bParam0);
	if (!iVar1 == -1)
	{
		return __LIB_6__.func_890(iVar1);
	}
	return iVar0;
}

int func_189(int iParam0)//Position - 0x5DB713
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 10)
	{
		if (__LIB_6__.func_925())
		{
			return Global_262145.f_29944[iVar0];
		}
		else
		{
			return Global_262145.f_29933[iVar0];
		}
	}
	return -1;
}

void func_190(int iParam0, int iParam1)//Position - 0x5DBEA6
{
	if (__LIB_1__.func_101(&(Global_1888617.f_1[iParam0 /*15*/].f_3), iParam1))
	{
	}
}

void func_191(int iParam0)//Position - 0x5DF0E1
{
	struct<2> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_1 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_4__.func_703(PLAYER::PLAYER_ID()))
			{
				__LIB_9__.func_233();
			}
		}
	}
}

void func_192(int iParam0)//Position - 0x5DF12B
{
	int iVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 3))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_4__.func_703(PLAYER::PLAYER_ID()))
			{
				__LIB_9__.func_233();
			}
		}
	}
}

void func_193(int iParam0, char[32] cParam1)//Position - 0x5DF565
{
	int iVar0;
	Global_1922049 = 1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (__LIB_0__.func_786(&(Global_1922049.f_34[iVar0 /*8*/])))
		{
			Global_1922049.f_34[iVar0 /*8*/] = { cParam1 };
			Global_1922049.f_1[iVar0] = iParam0;
			iVar0 = 32;
		}
		iVar0++;
	}
}

int func_194(bool bParam0)//Position - 0x5E0036
{
	if (!__LIB_6__.func_781())
	{
		return 0;
	}
	if ((__LIB_0__.func_689(__LIB_15__.func_699(-1), 0) >= 1 || __LIB_1__.func_563(123, -1)) && __LIB_1__.func_563(133, -1))
	{
		__LIB_12__.func_694();
		return 1;
	}
	else if (bParam0)
	{
		__LIB_12__.func_693();
	}
	return 0;
}

void func_195(int iParam0)//Position - 0x5E0611
{
	struct<2> Var0;
	if (!__LIB_0__.func_795())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 20))
	{
		if (Global_2703735.f_957 == 0)
		{
			Global_2703735.f_957++;
			Global_2703735.f_957.f_1 = { Var0.f_1 };
		}
	}
}

int func_196()//Position - 0x5E3852
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (BitTest(Global_4718592.f_33, 27))
		{
			return 1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = __LIB_10__.func_546(iVar0);
			bVar2 = __LIB_0__.func_657(iVar0, 1);
			if (bVar2 && BitTest(Global_4718592.f_33, 26))
			{
				return 1;
			}
			if (iVar1 > 0)
			{
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (Global_4718592.f_174966.f_9[iVar3] > -1 && iVar1 == Global_4718592.f_174966.f_9[iVar3])
					{
						return 1;
					}
					iVar3++;
				}
			}
		}
	}
	return 0;
}

void func_197(int iParam0, bool bParam1)//Position - 0x5E3C58
{
	int iVar0;
	iVar0 = __LIB_22__.func_837(iParam0);
	if (bParam1)
	{
		if (!__LIB_17__.func_160(iVar0))
		{
			__LIB_22__.func_836(iParam0);
			return;
		}
	}
	else
	{
		__LIB_22__.func_835(iParam0);
	}
}

void func_198()//Position - 0x5E403E
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__.func_714(joaat("MPPLY_KILLS_PLAYERS"));
	iVar1 = ((__LIB_0__.func_714(joaat("MPPLY_DEATHS_PLAYER")) + __LIB_0__.func_714(joaat("MPPLY_DEATHS_PLAYER_SUICIDE"))) + __LIB_0__.func_714(joaat("MPPLY_DEATHS_PLAYER_SUICIDE")));
	__LIB_24__.func_27(joaat("MPPLY_KILL_DEATH_RATIO"), (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1)));
}

int func_199(int iParam0)//Position - 0x5E5B44
{
	Global_1836091 = (Global_1836091 + iParam0);
	switch (Global_1853348[PLAYER::PLAYER_ID() /*834*/])
	{
		case 0:
		case 4:
		case 9:
		case 37:
		case 7:
		case 165:
		case 10:
			if (Global_1836091 >= Global_262145.f_7097 /* Tunable: PLAYER_KILL_RP_MISSION_CAP */)
			{
				return 0;
			}
			break;
		case 2:
		case 32:
			if (Global_1836091 >= Global_262145.f_7096 /* Tunable: PLAYER_KILL_RP_RACE_CAP */)
			{
				return 0;
			}
			break;
		case 1:
			if (Global_1836091 >= Global_262145.f_7095 /* Tunable: PLAYER_KILL_RP_DM_CAP */)
			{
				return 0;
			}
			break;
	}
	if (__LIB_22__.func_840(PLAYER::PLAYER_ID()) || __LIB_22__.func_839(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_200()//Position - 0x5E5C77
{
	Global_1888177++;
	__LIB_1__.func_761();
}

int func_201(int iParam0)//Position - 0x5E5CF9
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1888862[iParam0 /*120*/].f_29, 22);
}

void func_202()//Position - 0x5E5D1B
{
	if (!__LIB_0__.func_137(150, -1))
	{
		__LIB_0__.func_521(150, 1, -1);
	}
}

int func_203()//Position - 0x5E5F46
{
	if (__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 191)
	{
		switch (__LIB_2__.func_234(PLAYER::PLAYER_ID()))
		{
			case 4:
			case 5:
				return 1;
			}
		default:
	}
	return 0;
}

int func_204(int iParam0)//Position - 0x5E6D3E
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
			if (__LIB_1__.func_75(iVar2))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_205(int iParam0, bool bParam1)//Position - 0x5E6DE3
{
	if (bParam1)
	{
		STATS::PLAYSTATS_MC_KILLED_RIVAL_MC_MEMBER(__LIB_4__.func_802(__LIB_0__.func_582()), __LIB_4__.func_801(__LIB_0__.func_582()), __LIB_1__.func_834(), __LIB_1__.func_833(), iParam0);
	}
}

int func_206(int iParam0)//Position - 0x5E6FA7
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != __LIB_0__.func_160() && iParam0 != PLAYER::PLAYER_ID())
		{
			if (Global_1945749[iParam0 /*5*/].f_4 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_207(int iParam0)//Position - 0x5E7000
{
	bool bVar0;
	bVar0 = false;
	if (iParam0 == joaat("WEAPON_EXPLOSION"))
	{
		if (__LIB_19__.func_393(PLAYER::PLAYER_ID()) == 2 && __LIB_12__.func_878())
		{
			bVar0 = true;
		}
	}
	else if (iParam0 == joaat("WEAPON_ARENA_HOMING_MISSILE"))
	{
		bVar0 = true;
	}
	else if (iParam0 == joaat("WEAPON_ARENA_MACHINE_GUN"))
	{
		if (__LIB_19__.func_393(PLAYER::PLAYER_ID()) == 2 && __LIB_12__.func_878())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		__LIB_12__.func_876(71, -1);
		__LIB_22__.func_848();
	}
}

void func_208()//Position - 0x5E72E2
{
	if (!__LIB_0__.func_137(151, -1))
	{
		__LIB_0__.func_521(151, 1, -1);
	}
}

void func_209(struct<11> Param0, var uParam1, var uParam2)//Position - 0x5E734A
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1))
	{
		if (ENTITY::IS_ENTITY_A_PED(Param0.f_1))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Param0.f_0))
				{
					if (ENTITY::IS_ENTITY_A_PED(Param0.f_0))
					{
						iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_0);
						if (Param0.f_6 == joaat("WEAPON_DOUBLEACTION"))
						{
							if (Param0.f_10)
							{
								__LIB_2__.func_8(162);
							}
						}
						if (PED::IS_PED_A_PLAYER(iVar0))
						{
							if (Param0.f_6 == joaat("WEAPON_SNOWBALL"))
							{
								__LIB_2__.func_8(161);
							}
						}
					}
				}
			}
		}
	}
}

int func_210(bool bParam0)//Position - 0x5EA523
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (__LIB_24__.func_114(iVar1) == bParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

void func_211(int iParam0)//Position - 0x5EA9EC
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_0 == 2131601101)
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (!__LIB_0__.func_121(iVar1))
			{
				return;
			}
			iVar2 = PLAYER::PLAYER_PED_ID();
			if (!__LIB_0__.func_121(iVar2))
			{
				return;
			}
			if (__LIB_0__.func_508(iVar1, iVar2, 125f, 1))
			{
				switch (Var0.f_2)
				{
					case 0:
						MISC::SET_BIT(&(Global_1966471.f_22), 10);
						break;
					}
				}
			}
	}
}

void func_212(bool bParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5ECE01
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	Var0.f_3 = 10;
	Var0.f_14 = 10;
	Var0.f_0 = -1168862534;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Var0.f_3[iVar1] = (*iParam2)[iVar1];
		Var0.f_14[iVar1] = (*iParam3)[iVar1];
		iVar1++;
	}
	iVar2 = __LIB_1__.func_276(bParam0);
	if (!iVar2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 25, iVar2);
	}
}

void func_213(int iParam0)//Position - 0x5ED23E
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2)
		{
			if (__LIB_3__.func_930(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__.func_236(PLAYER::PLAYER_ID()) == Var0.f_1)
				{
					if (!BitTest(Global_1888862[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*120*/].f_38.f_27, 6))
					{
						MISC::SET_BIT(&(Global_1888862[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*120*/].f_38.f_27), 6);
					}
				}
			}
		}
	}
}

void func_214(int iParam0)//Position - 0x5ED4A0
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (Var0.f_3 < 0 || Var0.f_3 >= Global_1945972)
		{
			return;
		}
		__LIB_13__.func_756(Var0.f_4, Var0.f_3, Var0.f_2, 1, -1);
		Global_1945972[Var0.f_3] = Var0.f_2;
	}
}

void func_215(int iParam0)//Position - 0x5ED8FC
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (__LIB_3__.func_929(PLAYER::PLAYER_ID()))
		{
			if (Global_1853186 == Var0.f_1)
			{
				if (Var0.f_2)
				{
					__LIB_22__.func_877(1);
					__LIB_6__.func_90(1);
				}
				else
				{
					__LIB_6__.func_90(1);
					__LIB_22__.func_877(0);
				}
			}
		}
		else if (__LIB_3__.func_942(PLAYER::PLAYER_ID()))
		{
			if (Global_1853185 == Var0.f_1)
			{
				if (Var0.f_2)
				{
					__LIB_22__.func_877(1);
					__LIB_6__.func_90(1);
				}
				else
				{
					__LIB_6__.func_90(1);
					__LIB_22__.func_877(0);
				}
			}
		}
		else if (Var0.f_1 == PLAYER::PLAYER_ID())
		{
			if (Var0.f_2)
			{
				__LIB_22__.func_877(1);
				__LIB_6__.func_90(1);
			}
			else
			{
				__LIB_6__.func_90(1);
				__LIB_22__.func_877(0);
			}
		}
	}
}

void func_216(var uParam0)//Position - 0x5EDEC8
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_22__.func_878();
	if (iVar1 > 0 && iVar1 <= 10)
	{
		iVar0 = 0;
		while (iVar0 < (iVar1 - 1))
		{
			Global_1920255.f_11.f_359[iVar0] = Global_1920255.f_11.f_359[iVar0 + 1];
			iVar0++;
		}
		Global_1920255.f_11.f_359[(iVar1 - 1)] = uParam0;
	}
}

void func_217(int iParam0)//Position - 0x5EE16E
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (__LIB_3__.func_165())
		{
			return;
		}
		if (Var0.f_2)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0) == -1 && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("avenger")))
				{
					__LIB_3__.func_261(1);
				}
			}
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0) == -1 && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("avenger")))
			{
				__LIB_3__.func_259(1);
			}
		}
	}
}

void func_218(int iParam0)//Position - 0x5EE2B6
{
	struct<26> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1000;
	Var0.f_6 = 18;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 26))
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
		if (Var0.f_25 <= 0 || Var0.f_25 > 18)
		{
			Var0.f_25 = 18;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar1 /*75*/] == Var0.f_2)
			{
				iVar2 = 0;
				while (iVar2 < Var0.f_25)
				{
					if (Var0.f_6[iVar2] != 0)
					{
						iVar3 = __LIB_13__.func_335(iVar1, Var0.f_6[iVar2]);
						if (iVar3 != -1)
						{
							Global_2681762.f_199.f_962[iVar1 /*75*/].f_20[iVar3 /*3*/] = { Var0.f_3 };
						}
					}
					iVar2++;
				}
				return;
			}
			iVar1++;
		}
	}
}

void func_219(int iParam0)//Position - 0x5EE98C
{
	struct<6> Var0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		if (Var0.f_2 != __LIB_0__.func_160() && Var0.f_3 != __LIB_0__.func_160())
		{
			if (((Global_2680265.f_1236[Var0.f_2 /*5*/] != Var0.f_3 || Global_2680265.f_1236[Var0.f_2 /*5*/].f_1 != Var0.f_4) || Global_2680265.f_1236[Var0.f_2 /*5*/].f_2 != Var0.f_5) || Global_2680265.f_1236[Var0.f_2 /*5*/].f_4)
			{
				Global_2680265.f_1236[Var0.f_2 /*5*/] = Var0.f_3;
				Global_2680265.f_1236[Var0.f_2 /*5*/].f_1 = Var0.f_4;
				Global_2680265.f_1236[Var0.f_2 /*5*/].f_2 = Var0.f_5;
				Global_2680265.f_1236[Var0.f_2 /*5*/].f_3 = NETWORK::GET_NETWORK_TIME();
				Global_2680265.f_1236[Var0.f_2 /*5*/].f_4 = 0;
			}
		}
	}
}

void func_220(int iParam0)//Position - 0x5EEA7E
{
	struct<6> Var0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		if (!Var0.f_5)
		{
			if (Var0.f_1 != __LIB_0__.func_160())
			{
				if (Global_2680265.f_1236[Var0.f_1 /*5*/].f_2 > -1)
				{
					Global_2680265.f_1236[Var0.f_1 /*5*/].f_4 = 1;
				}
			}
		}
	}
}

void func_221(int iParam0)//Position - 0x5EEBCD
{
	struct<3> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (__LIB_1__.func_264(Var0.f_1, 1, 1) && __LIB_2__.func_15(PLAYER::GET_PLAYER_PED(Var0.f_1), iVar1, 0))
				{
					if (Var0.f_2)
					{
						VEHICLE::OPEN_BOMB_BAY_DOORS(iVar1);
						if ((!__LIB_7__.func_831(Var0.f_1) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1)) && VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iVar1, 0f);
						}
					}
					else
					{
						VEHICLE::CLOSE_BOMB_BAY_DOORS(iVar1);
						if ((!__LIB_7__.func_831(Var0.f_1) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1)) && VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iVar1, 1f);
						}
					}
				}
			}
		}
	}
}

void func_222(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5EF41B
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		if ((bParam1 != __LIB_0__.func_160() && __LIB_4__.func_682(bParam0, 1)) && !__LIB_2__.func_235(bParam0, bParam1))
		{
			STATS::PLAYSTATS_RIVAL_BEHAVIOR(__LIB_4__.func_802(__LIB_2__.func_191(bParam0)), __LIB_4__.func_801(__LIB_2__.func_191(bParam0)), Global_1892703[bParam1 /*599*/].f_526, Global_1892703[bParam1 /*599*/].f_527, iParam2, iParam5, iParam6, iParam3, iParam4, __LIB_3__.func_803(bParam1) == 178);
		}
	}
}

void func_223(var uParam0, int iParam1)//Position - 0x5EF83E
{
	*uParam0 = __LIB_22__.func_881(iParam1);
	uParam0->f_6 = __LIB_22__.func_882(iParam1);
	switch (iParam1)
	{
		case 2001:
			uParam0->f_1[0] = 28;
			uParam0->f_1[1] = 23;
			uParam0->f_1[2] = 90;
			uParam0->f_1[3] = 55;
			break;
		case 2002:
			uParam0->f_1[0] = 76;
			uParam0->f_1[1] = 4;
			uParam0->f_1[2] = 19;
			uParam0->f_1[3] = 50;
			break;
		case 2003:
			uParam0->f_1[0] = 82;
			uParam0->f_1[1] = 42;
			uParam0->f_1[2] = 65;
			uParam0->f_1[3] = 87;
			break;
		case 2004:
			uParam0->f_1[0] = 59;
			uParam0->f_1[1] = 48;
			uParam0->f_1[2] = 96;
			uParam0->f_1[3] = 52;
			break;
		case 2005:
			uParam0->f_1[0] = 73;
			uParam0->f_1[1] = 67;
			uParam0->f_1[2] = 15;
			uParam0->f_1[3] = 0;
			break;
		case 2006:
			uParam0->f_1[0] = 93;
			uParam0->f_1[1] = 34;
			uParam0->f_1[2] = 32;
			uParam0->f_1[3] = 0;
			break;
		case 2007:
			uParam0->f_1[0] = 2;
			uParam0->f_1[1] = 12;
			uParam0->f_1[2] = 18;
			uParam0->f_1[3] = 0;
			break;
		case 2008:
			uParam0->f_1[0] = 70;
			uParam0->f_1[1] = 27;
			uParam0->f_1[2] = 7;
			uParam0->f_1[3] = 0;
			break;
		case 2009:
			uParam0->f_1[0] = 61;
			uParam0->f_1[1] = 80;
			uParam0->f_1[2] = 0;
			uParam0->f_1[3] = 0;
			break;
		case 2010:
			uParam0->f_1[0] = 43;
			uParam0->f_1[1] = 38;
			uParam0->f_1[2] = 0;
			uParam0->f_1[3] = 0;
			break;
	}
}

int func_224(int iParam0)//Position - 0x5EFC82
{
	switch (__LIB_9__.func_846(iParam0))
	{
		case 3:
			return Global_262145.f_19706 /* Tunable: IMPEXP_STEAL_REDUCTION_CAP_HARD */;
		case 2:
			return Global_262145.f_19707 /* Tunable: IMPEXP_STEAL_REDUCTION_CAP_MEDIUM */;
		case 1:
			return Global_262145.f_19708 /* Tunable: IMPEXP_STEAL_REDUCTION_CAP_EASY */;
		default:
	}
	return 0;
}

int func_225(int iParam0)//Position - 0x5EFCF4
{
	int iVar0;
	bool bVar1;
	if (!__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	bVar1 = __LIB_0__.func_582();
	if (bVar1 == __LIB_0__.func_160())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1892703[bVar1 /*599*/].f_10.f_187[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x5F0060
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1892703[iParam0 /*599*/].f_587;
	}
	return 0;
}

int func_227()//Position - 0x5F0BD5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (__LIB_0__.func_228(__LIB_22__.func_885(iVar0), -1) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_228(int iParam0)//Position - 0x5F1489
{
	struct<2> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if ((((__LIB_4__.func_345(PLAYER::PLAYER_ID()) && !__LIB_3__.func_998(PLAYER::PLAYER_ID())) && !__LIB_2__.func_626()) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !__LIB_4__.func_130(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
			MISC::SET_BIT(&(Global_1946250.f_10), 20);
			__LIB_2__.func_549(148, Var0.f_1);
		}
	}
}

int func_229()//Position - 0x5F1628
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_0__.func_228((34840 + iVar0 * 4), -1) == 255)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_230()//Position - 0x5F1A07
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((__LIB_0__.func_228((34837 + iVar0 * 4), -1) == 255 && __LIB_0__.func_228((34839 + iVar0 * 4), -1) == 255) && __LIB_0__.func_228((34838 + iVar0 * 4), -1) == 255)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_231(int iParam0)//Position - 0x5F2106
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_3 != -1 && Var0.f_2 != __LIB_0__.func_160())
		{
			if (!BitTest(Global_1951261.f_856[Var0.f_3], Var0.f_2))
			{
				MISC::SET_BIT(&(Global_1951261.f_856[Var0.f_3]), Var0.f_2);
			}
		}
	}
}

void func_232(int iParam0)//Position - 0x5F2274
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_3 != -1 && Var0.f_2 != __LIB_0__.func_160())
		{
			if (!BitTest(Global_1951261.f_829[Var0.f_3], Var0.f_2))
			{
				MISC::SET_BIT(&(Global_1951261.f_829[Var0.f_3]), Var0.f_2);
			}
		}
	}
}

void func_233(int iParam0)//Position - 0x5F36D2
{
	struct<4> Var0;
	if ((SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4) && !Global_2725439.f_13) && !Global_2725439)
	{
		if (Var0.f_2 != __LIB_0__.func_160() && __LIB_1__.func_264(Var0.f_2, 1, 1))
		{
			Global_2725439.f_13 = 1;
			Global_2725439.f_23 = Var0.f_2;
			Global_2725439.f_21 = Var0.f_3;
		}
	}
}

bool func_234(int iParam0)//Position - 0x5F3D3F
{
	return __LIB_1__.func_330(__LIB_23__.func_186(iParam0));
}

void func_235(int iParam0)//Position - 0x5F43BB
{
	struct<3> Var0;
	Var0.f_2.f_3 = 6;
	Var0.f_2.f_10 = 6;
	Var0.f_2.f_17 = -1;
	Var0.f_2.f_20 = -1;
	Var0.f_2.f_22 = 5;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 40))
	{
		__LIB_22__.func_897(&(Var0.f_2), &Global_2788921);
	}
}

int func_236(bool bParam0)//Position - 0x5F4522
{
	if (__LIB_6__.func_460(bParam0, 1, 1))
	{
		return 0;
	}
	if (__LIB_3__.func_998(bParam0))
	{
		return 0;
	}
	if (__LIB_11__.func_8(bParam0))
	{
		return 0;
	}
	return 1;
}

void func_237(bool bParam0, var uParam1, struct<16> Param2, bool bParam3)//Position - 0x5F4634
{
	struct<20> Var0;
	int iVar1;
	Var0.f_0 = -1566383297;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_19 = bParam3;
	if (bParam3)
	{
		Var0.f_3 = { Param2 };
	}
	iVar1 = __LIB_1__.func_276(bParam0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 20, iVar1);
	}
}

void func_238(int iParam0)//Position - 0x5F480D
{
	if (iParam0 != __LIB_0__.func_160())
	{
		Global_1946250.f_4596[iParam0 /*3*/] = 4;
	}
}

void func_239(int iParam0, var uParam1)//Position - 0x5F482D
{
	int iVar0;
	if (iParam0 == __LIB_0__.func_160())
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= Global_1964904)
	{
		return;
	}
	if (*uParam1 < 16)
	{
		return;
	}
	Global_1965385[iVar0] = (*uParam1)[0];
	Global_1964904[iVar0 /*15*/] = (*uParam1)[1];
	Global_1964904[iVar0 /*15*/].f_1 = (*uParam1)[2];
	Global_1964904[iVar0 /*15*/].f_2 = (*uParam1)[3];
	Global_1964904[iVar0 /*15*/].f_3 = (*uParam1)[4];
	Global_1964904[iVar0 /*15*/].f_4 = (*uParam1)[5];
	Global_1964904[iVar0 /*15*/].f_5 = (*uParam1)[6];
	Global_1964904[iVar0 /*15*/].f_6 = (*uParam1)[7];
	Global_1964904[iVar0 /*15*/].f_7 = (*uParam1)[8];
	Global_1964904[iVar0 /*15*/].f_8 = (*uParam1)[9];
	Global_1964904[iVar0 /*15*/].f_10 = (*uParam1)[10];
	Global_1964904[iVar0 /*15*/].f_9 = (*uParam1)[11];
	Global_1964904[iVar0 /*15*/].f_11 = (*uParam1)[12];
	Global_1964904[iVar0 /*15*/].f_12 = (*uParam1)[13];
	Global_1964904[iVar0 /*15*/].f_13 = (*uParam1)[14];
	Global_1964904[iVar0 /*15*/].f_14 = (*uParam1)[15];
}

void func_240(int iParam0)//Position - 0x5F4FDA
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (Var0.f_3 >= 0 && Var0.f_3 < Global_1946250.f_4695)
		{
			if (__LIB_4__.func_22(PLAYER::PLAYER_ID()) || __LIB_3__.func_930(PLAYER::PLAYER_ID()))
			{
				Global_1946250.f_4695[Var0.f_3] = 0;
				if (Var0.f_2)
				{
					MISC::SET_BIT(&(Global_1946250.f_4695[Var0.f_3]), 1);
				}
				else
				{
					MISC::SET_BIT(&(Global_1946250.f_4695[Var0.f_3]), 2);
				}
			}
		}
	}
}

void func_241(struct<4> Param0)//Position - 0x5F51EB
{
	int iVar0;
	if (__LIB_4__.func_19(PLAYER::PLAYER_ID()))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		switch (Param0.f_3)
		{
			case 7:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 23) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 24))
				{
					return;
				}
				if (iVar0 == 0)
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 23);
				}
				else
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 24);
				}
				break;
			case 8:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 25) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 26))
				{
					return;
				}
				if (iVar0 == 0)
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 25);
				}
				else
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 26);
				}
				break;
			case 9:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 27) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 28))
				{
					return;
				}
				if (iVar0 == 0)
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 27);
				}
				else
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 28);
				}
				break;
			}
	}
}

void func_242(int iParam0)//Position - 0x5F5719
{
	struct<21> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
	{
		__LIB_1__.func_845(&(Global_1579075[Var0.f_19]), Var0.f_2);
		Global_1579201[Var0.f_19] = Var0.f_20;
		Global_1579327[Var0.f_19 /*16*/] = { Var0.f_3 };
	}
}

void func_243(int iParam0)//Position - 0x5F5AC1
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2 == 1)
		{
			Global_2815059.f_5195.f_4 = PLAYER::PLAYER_ID();
			__LIB_9__.func_333(1);
		}
		else
		{
			Global_2815059.f_5195.f_4 = __LIB_0__.func_160();
			__LIB_9__.func_309(1);
			__LIB_9__.func_309(4);
		}
	}
}

void func_244(int iParam0)//Position - 0x5F61F5
{
	if (iParam0 != __LIB_0__.func_160())
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_20), iParam0);
	}
}

int func_245(int iParam0, int iParam1)//Position - 0x5F65D3
{
	if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) && __LIB_7__.func_225(iParam0, 1, 1, 0, 0, 0, 1, 0, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "Previous_Boss"))
		{
			if (DECORATOR::DECOR_GET_INT(iParam0, "Previous_Boss") == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_246(int iParam0)//Position - 0x5F66E3
{
	struct<3> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2 != __LIB_0__.func_160())
		{
			if (__LIB_0__.func_121(Global_2815059.f_5195.f_226[Var0.f_2]))
			{
				iVar1 = NETWORK::VEH_TO_NET(Global_2815059.f_5195.f_226[Var0.f_2]);
			}
			else
			{
				return;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar1))
			{
				NETWORK::NETWORK_FADE_IN_ENTITY(Global_2815059.f_5195.f_226[Var0.f_2], true, 1);
			}
		}
	}
}

void func_247(int iParam0)//Position - 0x5F67C9
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		if (__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0))
		{
			if (__LIB_7__.func_712(PLAYER::PLAYER_ID(), 3))
			{
			}
			else
			{
				Global_2815059.f_5195.f_43 = 1;
			}
		}
	}
}

int func_248(int iParam0)//Position - 0x5F6928
{
	switch (iParam0)
	{
		case 19:
			return 1;
		default:
	}
	if (__LIB_0__.func_684(__LIB_22__.func_910(iParam0)) == 1)
	{
		return 1;
	}
	return 0;
}

int func_249()//Position - 0x5F6ECF
{
	struct<13> Var0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return __LIB_22__.func_912();
	}
	else if (NETWORK::NETWORK_IS_IN_TRANSITION())
	{
		Var0 = { __LIB_0__.func_593() };
		return NETWORK::NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(&Var0);
	}
	return 0;
}

void func_250(var* uParam0, bool bParam1)//Position - 0x5F8B7B
{
	int iVar0;
	if (__LIB_1__.func_678() || __LIB_12__.func_734())
	{
		if (__LIB_0__.func_585(*uParam0))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam0);
			if (iVar0 != __LIB_0__.func_160())
			{
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_33), iVar0);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_33), iVar0);
				}
			}
		}
	}
}

void func_251(int iParam0, int iParam1)//Position - 0x5F922C
{
	if (iParam0 != -1)
	{
	}
	Global_1835502.f_254[iParam1 /*4*/] = -1;
	Global_1835502.f_254[iParam1 /*4*/].f_1 = __LIB_0__.func_160();
	Global_1835502.f_254[iParam1 /*4*/].f_2 = 0;
	Global_1835502.f_254[iParam1 /*4*/].f_3 = 0;
}

void func_252(bool bParam0, int iParam1)//Position - 0x5F9B8F
{
	struct<3> Var0;
	Var0.f_0 = 211864106;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_1__.func_276(bParam0));
}

void func_253(int iParam0)//Position - 0x5F9BBA
{
	struct<8> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (!__LIB_24__.func_226(Var0.f_6, Var0.f_7))
	{
		return;
	}
	iVar1 = Var0.f_3;
	if (iVar1 < 0)
	{
		iVar2 = Global_1931940.f_1[Var0.f_2];
		if (iVar2 < MISC::ABSI(iVar1))
		{
			iVar1 = iVar2;
		}
		if (Global_1931940.f_1[Var0.f_5] > Global_262145.f_9083 /* Tunable: MAX_HEIST_CUT_AMOUNT */)
		{
			iVar3 = (Global_1931940.f_1[Var0.f_5] - Global_262145.f_9083 /* Tunable: MAX_HEIST_CUT_AMOUNT */);
			Global_1931940.f_1[Var0.f_2] = (Global_1931940.f_1[Var0.f_2] + iVar3);
		}
		else if (Global_1931940.f_1[Var0.f_5] == Global_262145.f_9083 /* Tunable: MAX_HEIST_CUT_AMOUNT */)
		{
		}
		else if (Global_1931940.f_1[Var0.f_5] <= (100 - MISC::ABSI(iVar1)))
		{
			Global_1931940.f_1[Var0.f_5] = (Global_1931940.f_1[Var0.f_5] + MISC::ABSI(iVar1));
			Global_1931940.f_1[Var0.f_2] = (Global_1931940.f_1[Var0.f_2] - MISC::ABSI(iVar1));
		}
	}
	else
	{
		iVar4 = Global_1931940.f_1[Var0.f_5];
		if (iVar4 < MISC::ABSI(iVar1))
		{
			iVar1 = iVar4;
		}
		if (Global_1931940.f_1[Var0.f_2] > Global_262145.f_9083 /* Tunable: MAX_HEIST_CUT_AMOUNT */)
		{
			iVar5 = (Global_1931940.f_1[Var0.f_2] - Global_262145.f_9083 /* Tunable: MAX_HEIST_CUT_AMOUNT */);
			Global_1931940.f_1[Var0.f_5] = (Global_1931940.f_1[Var0.f_5] + iVar5);
		}
		else if (Global_1931940.f_1[Var0.f_2] == Global_262145.f_9083 /* Tunable: MAX_HEIST_CUT_AMOUNT */)
		{
		}
		else if (Global_1931940.f_1[Var0.f_5] >= MISC::ABSI(iVar1))
		{
			Global_1931940.f_1[Var0.f_5] = (Global_1931940.f_1[Var0.f_5] - MISC::ABSI(iVar1));
			Global_1931940.f_1[Var0.f_2] = (Global_1931940.f_1[Var0.f_2] + MISC::ABSI(iVar1));
		}
	}
}

void func_254(int iParam0)//Position - 0x5F9F73
{
	struct<3> Var0;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		return;
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() == Var0.f_2)
	{
		__LIB_22__.func_946(1);
		MISC::SET_BIT(&(Global_1937518.f_1339), Var0.f_1);
		Global_1937518.f_1334 = 0;
		Global_1937518.f_1335 = 0;
	}
}

void func_255(int iParam0)//Position - 0x5FA056
{
	struct<9> Var0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Var0.f_8 = 4;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		return;
	}
	if (!__LIB_24__.func_226(Var0.f_6, Var0.f_7))
	{
		return;
	}
	if (Var0.f_2 != -1)
	{
		Global_1931940.f_29 = Var0.f_2;
	}
	if (Var0.f_4 != -1)
	{
		Global_1931940.f_27 = Var0.f_4;
	}
	if (Var0.f_5 != -1)
	{
		Global_1931940.f_28 = Var0.f_5;
	}
	if (Var0.f_8[0] != -1)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1931940.f_12[iVar1] = Var0.f_8[iVar1];
			iVar1++;
		}
	}
}

void func_256(int iParam0)//Position - 0x5FA0FC
{
	struct<7> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		return;
	}
	if (!__LIB_24__.func_226(Var0.f_5, Var0.f_6))
	{
		return;
	}
	if (Global_1931940.f_12[Var0.f_2] == Global_1937518.f_57)
	{
		iVar1 = Global_262145.f_9186 /* Tunable: LEADER_MIN_HEIST_FINALE_TAKE_PERCENTAGE */;
	}
	else
	{
		iVar1 = Global_262145.f_9185 /* Tunable: MEMBER_MIN_HEIST_FINALE_TAKE_PERCENTAGE */;
	}
	iVar2 = Var0.f_3;
	if (iVar2 < 0)
	{
		iVar3 = Global_1931940.f_1[Var0.f_2];
		if (iVar3 < MISC::ABSI(iVar2))
		{
			iVar2 = iVar3;
		}
		if (Global_1931940.f_1[Var0.f_2] < iVar1)
		{
			iVar4 = (iVar1 - Global_1931940.f_1[Var0.f_2]);
			Global_1931940.f_1[Var0.f_2] = (Global_1931940.f_1[Var0.f_2] + iVar4);
		}
		else if (Global_1931940.f_1[Var0.f_2] == iVar1)
		{
		}
		else if (Global_1931940.f_1[4] <= (100 - MISC::ABSI(iVar2)))
		{
			Global_1931940.f_1[4] = (Global_1931940.f_1[4] + MISC::ABSI(iVar2));
			Global_1931940.f_1[Var0.f_2] = (Global_1931940.f_1[Var0.f_2] - MISC::ABSI(iVar2));
		}
	}
	else
	{
		iVar5 = Global_1931940.f_1[4];
		if (iVar5 < MISC::ABSI(iVar2))
		{
			iVar2 = iVar5;
		}
		if (Global_1931940.f_1[Var0.f_2] > Global_262145.f_9083 /* Tunable: MAX_HEIST_CUT_AMOUNT */)
		{
			iVar6 = (Global_1931940.f_1[Var0.f_2] - Global_262145.f_9083 /* Tunable: MAX_HEIST_CUT_AMOUNT */);
			Global_1931940.f_1[4] = (Global_1931940.f_1[4] + iVar6);
		}
		else if (Global_1931940.f_1[Var0.f_2] == Global_262145.f_9083 /* Tunable: MAX_HEIST_CUT_AMOUNT */)
		{
		}
		else if (Global_1931940.f_1[4] >= MISC::ABSI(iVar2))
		{
			Global_1931940.f_1[4] = (Global_1931940.f_1[4] - MISC::ABSI(iVar2));
			Global_1931940.f_1[Var0.f_2] = (Global_1931940.f_1[Var0.f_2] + MISC::ABSI(iVar2));
		}
	}
}

void func_257(int iParam0)//Position - 0x5FA403
{
	struct<10> Var0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Var0.f_2 = 5;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		return;
	}
	if (!__LIB_24__.func_226(Var0.f_8, Var0.f_9))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1931940.f_1[iVar1] = Var0.f_2[iVar1];
		iVar1++;
	}
}

void func_258(int iParam0)//Position - 0x5FA50E
{
	struct<9> Var0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Var0.f_8 = 4;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		return;
	}
	if (!__LIB_24__.func_226(Var0.f_6, Var0.f_7))
	{
		return;
	}
	Global_1931940.f_29 = Var0.f_2;
	Global_1931940.f_30 = Var0.f_3;
	Global_1931940.f_27 = Var0.f_4;
	Global_1931940.f_28 = Var0.f_5;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1931940.f_12[iVar1] = Var0.f_8[iVar1];
		if (Var0.f_8[iVar1] != -1)
		{
			Global_1931940.f_7[iVar1] = -1;
		}
		else
		{
			Global_1931940.f_7[iVar1] = -2;
		}
		iVar1++;
	}
	Global_1931940 = PLAYER::INT_TO_PLAYERINDEX(Var0.f_8[0]);
}

int func_259(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x5FA6BF
{
	int iVar0;
	iVar0 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return -1;
	}
	if (iParam6 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_22__.func_948(iVar0))
		{
			if (iParam6 == Global_2657492.f_356[iVar0 /*75*/].f_2 && MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2657492.f_356[iVar0 /*75*/].f_10)))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_260(int iParam0)//Position - 0x5FAAF5
{
	if ((!__LIB_24__.func_294(iParam0) || !__LIB_24__.func_293(iParam0)) || !__LIB_24__.func_292(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_2657492.f_356[iParam0 /*75*/].f_5), 3);
}

void func_261(int iParam0, bool bParam1)//Position - 0x5FB334
{
	bool bVar0;
	if (!__LIB_23__.func_212(iParam0))
	{
		return;
	}
	if (!__LIB_1__.func_264(bParam1, 0, 1))
	{
		return;
	}
	bVar0 = bParam1;
	MISC::SET_BIT(&(Global_2657492.f_2[iParam0 /*18*/].f_17), bVar0);
}

int func_262(char* sParam0, struct<3> Param1)//Position - 0x5FB36E
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (__LIB_23__.func_212(iVar0))
		{
			if (__LIB_0__.func_394(Global_2657492.f_2[iVar0 /*18*/].f_11, Param1, 1056964608, 0) && MISC::ARE_STRINGS_EQUAL(&(Global_2657492.f_2[iVar0 /*18*/].f_1.f_3), sParam0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_263(struct<3> Param0)//Position - 0x5FB3D3
{
	struct<3> Var0;
	int iVar1;
	Var0 = { 0f, 0f, 0f };
	if (__LIB_0__.func_394(Param0, Var0, 1056964608, 0))
	{
		return -1;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		if (__LIB_23__.func_211(iVar1))
		{
			if (__LIB_0__.func_394(__LIB_23__.func_213(iVar1), Param0, 10f, 0))
			{
				return iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_264(var* uParam0, char* sParam1, int iParam2, char* sParam3)//Position - 0x5FBA47
{
	int iVar0;
	bool bVar1;
	struct<14> Var2;
	struct<37> Var3;
	Var3 = { *uParam0 };
	StringCopy(&(Var3.f_13), sParam1, 64);
	StringCopy(&(Var3.f_29), "", 16);
	Var3.f_33 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		StringCopy(&(Var3.f_29), sParam3, 16);
		Var3.f_33 = 2;
	}
	Var3.f_34 = 0;
	Var3.f_35 = iParam2;
	Var3.f_36 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (MISC::IS_PS3_VERSION())
		{
			StringCopy(&(Var3.f_13), NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam0), 64);
		}
		else
		{
			Var3.f_13 = { __LIB_22__.func_952(uParam0) };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_13)))
			{
				Var3.f_34 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam2 == 11)
		{
			bVar1 = true;
		}
		else if (iParam2 == 9)
		{
			if (Global_2712515[iVar0 /*37*/].f_35 != 11)
			{
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			Var2 = { Global_2712515[iVar0 /*37*/] };
			Global_2712515[iVar0 /*37*/] = { Var3 };
			Var3 = { Var2 };
			if (__LIB_0__.func_585(Var2))
			{
				if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var2, uParam0) || MISC::ARE_STRINGS_EQUAL(&(Var2.f_13), sParam1))
				{
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_265(int iParam0, bool bParam1)//Position - 0x5FBF0D
{
	struct<3> Var0;
	Var0.f_0 = -597435859;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Global_2686568[iParam0 /*41*/].f_3.f_17;
	if (Var0.f_2 == 0)
	{
		return;
	}
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_1__.func_276(bParam1));
}

void func_266(int iParam0)//Position - 0x5FC076
{
	if (__LIB_12__.func_678(Global_2686568[iParam0 /*41*/].f_3))
	{
		return;
	}
	MISC::SET_BIT(&(Global_2686568[iParam0 /*41*/].f_40), 2);
}

void func_267(bool bParam0, int iParam1)//Position - 0x5FC3D4
{
	struct<3> Var0;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_2 = -1;
	Var0.f_2.f_9 = -1;
	Var0.f_2.f_16 = -1;
	Var0.f_2.f_19 = -1;
	Var0.f_2.f_20 = -1;
	Var0.f_0 = 3140921;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Global_2686568[iParam1 /*41*/].f_3 };
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 23, __LIB_1__.func_276(bParam0));
}

bool func_268(int iParam0, int iParam1)//Position - 0x5FC812
{
	return __LIB_20__.func_948(4, iParam0, iParam1);
}

void func_269(int iParam0, bool bParam1)//Position - 0x5FCA75
{
	struct<3> Var0;
	Var0.f_0 = 954293313;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Global_2686568[iParam0 /*41*/].f_3.f_17;
	if (Var0.f_2 == 0)
	{
		return;
	}
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_1__.func_276(bParam1));
}

void func_270(int iParam0, var uParam1)//Position - 0x5FCAD1
{
	int iVar0;
	iVar0 = uParam1;
	MISC::SET_BIT(&(Global_2686568[iParam0 /*41*/].f_31), iVar0);
	__LIB_23__.func_216(iVar0, 0, iParam0);
}

int func_271(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)//Position - 0x5FCD56
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (__LIB_0__.func_114(iParam0))
	{
		return 1;
	}
	if (__LIB_24__.func_9())
	{
		return 1;
	}
	if (__LIB_0__.func_527())
	{
		return 1;
	}
	return 0;
}

int func_272(int iParam0, int iParam1)//Position - 0x5FD441
{
	var uVar0;
	if (*iParam1 == 0)
	{
		return 1;
	}
	uVar0 = __LIB_23__.func_222(iParam0);
	if ((uVar0 && *iParam1) == *iParam1)
	{
		return 1;
	}
	*iParam1 = (uVar0 && *iParam1);
	return 0;
}

int func_273(int iParam0, bool bParam1)//Position - 0x5FD7D3
{
	var uVar0;
	if (bParam1 == -1)
	{
		return 0;
	}
	uVar0 = __LIB_23__.func_228(iParam0);
	return BitTest(uVar0, bParam1);
}

void func_274(bool bParam0, var uParam1, int iParam2, var uParam3)//Position - 0x5FD9ED
{
	struct<6> Var0;
	int iVar1;
	bool bVar2;
	if (iParam2 == 0)
	{
		return;
	}
	Var0.f_0 = -1331097982;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam3;
	iVar1 = 0;
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < 32)
	{
		if (BitTest(Var0.f_2, bVar2))
		{
			iVar1++;
		}
		bVar2++;
	}
	Var0.f_3 = iVar1;
	Var0.f_4 = iParam2;
	Var0.f_5 = uParam1;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, __LIB_1__.func_276(bParam0));
}

void func_275(int iParam0, struct<21> Param1)//Position - 0x5FDB85
{
	Global_2686568[iParam0 /*41*/].f_3 = { Param1 };
	__LIB_24__.func_319(iParam0, __LIB_3__.func_694(Param1.f_0));
}

bool func_276(int iParam0)//Position - 0x5FDBEF
{
	return __LIB_22__.func_963(iParam0, 10);
}

void func_277(bool bParam0, var uParam1, var uParam2)//Position - 0x5FE4FE
{
	struct<4> Var0;
	Var0.f_0 = 157347321;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (Var0.f_2 == 0)
	{
		return;
	}
	if (Var0.f_3 == 0)
	{
		return;
	}
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, __LIB_1__.func_276(bParam0));
}

void func_278(int iParam0)//Position - 0x5FE817
{
	struct<5> Var0;
	if ((SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6) && Var0.f_2 != __LIB_0__.func_160()) && __LIB_1__.func_264(Var0.f_1, 1, 1))
	{
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != SYSTEM::SHIFT_RIGHT(Var0.f_4, 1))
		{
			return;
		}
		Global_2703735.f_3580 = Var0.f_2;
		StringCopy(&(Global_2703735.f_3580.f_2), PLAYER::GET_PLAYER_NAME(Var0.f_2), 64);
		StringCopy(&(Global_2703735.f_3580.f_18), PLAYER::GET_PLAYER_NAME(Var0.f_1), 64);
		Global_2703735.f_3580.f_34 = Var0.f_3;
		if (BitTest(Var0.f_4, 0))
		{
			MISC::SET_BIT(&(Global_2703735.f_3580.f_35), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_3580.f_35), 0);
		}
	}
}

void func_279(int iParam0)//Position - 0x5FEAD5
{
	struct<5> Var0;
	if ((SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5) && Var0.f_2 != __LIB_0__.func_160()) && __LIB_1__.func_264(Var0.f_1, 1, 1))
	{
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != SYSTEM::SHIFT_RIGHT(Var0.f_4, 1))
		{
			return;
		}
		StringCopy(&(Global_2703735.f_3620.f_2), PLAYER::GET_PLAYER_NAME(Var0.f_2), 64);
		StringCopy(&(Global_2703735.f_3620.f_18), PLAYER::GET_PLAYER_NAME(Var0.f_1), 64);
		Global_2703735.f_3620.f_35 = Var0.f_3;
		if (BitTest(Var0.f_4, 0))
		{
			MISC::SET_BIT(&(Global_2703735.f_3620.f_36), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_3620.f_36), 0);
		}
	}
}

void func_280(int iParam0)//Position - 0x5FFA07
{
	struct<2> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (Var0.f_1 != __LIB_0__.func_160())
		{
			MISC::SET_BIT(&(Global_2712057[Var0.f_1 /*13*/].f_1), 6);
			Global_2712057[Var0.f_1 /*13*/].f_11 = MISC::GET_FRAME_COUNT() + 30;
			__LIB_12__.func_407(158);
		}
	}
}

void func_281(int iParam0)//Position - 0x6009B9
{
	struct<7> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		__LIB_24__.func_351(Var0.f_5, Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_6);
		if (Var0.f_5 == PLAYER::PLAYER_ID())
		{
			__LIB_17__.func_399(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28, Var0.f_2);
		}
	}
}

void func_282(int iParam0)//Position - 0x600FAA
{
	struct<4> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		iVar1 = __LIB_22__.func_972(Var0.f_2);
		iVar1 = (iVar1 - Var0.f_3);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[Var0.f_2 /*2*/] = iVar1;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124 = __LIB_22__.func_971(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124);
		Global_2703735.f_3425 = 1;
		Global_2703735.f_3426 = 1;
		Global_2703735.f_3426.f_1 = Var0.f_2;
	}
}

void func_283(struct<4> Param0)//Position - 0x6010A1
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 1336398417;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Param0.f_2;
	Var0.f_3 = Param0.f_3;
	iVar1 = __LIB_1__.func_276(Param0.f_1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

void func_284(int iParam0)//Position - 0x601AF1
{
	struct<7> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (__LIB_24__.func_190(Var0.f_6))
		{
			if (Var0.f_4)
			{
				if (BitTest(Global_2815059.f_4630, 1))
				{
					MISC::CLEAR_BIT(&(Global_2815059.f_4630), 1);
				}
				if (BitTest(Global_2815059.f_4630, 0))
				{
					MISC::CLEAR_BIT(&(Global_2815059.f_4630), 0);
				}
				MISC::SET_BIT(&(Global_2815059.f_4630), 2);
				Global_2689235[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*453*/].f_208 = 1;
				if (Var0.f_5)
				{
					MISC::SET_BIT(&(Global_2815059.f_4630), 3);
					Global_2703735.f_58 = Var0.f_3;
				}
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Var0.f_2) < NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2703735.f_56))
				{
					Global_2703735.f_56 = Var0.f_2;
				}
			}
			else if (!BitTest(Global_2815059.f_4630, 1))
			{
				MISC::SET_BIT(&(Global_2815059.f_4630), 0);
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Var0.f_2) < NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2703735.f_56))
				{
					Global_2703735.f_56 = Var0.f_2;
				}
			}
		}
	}
}

void func_285(int iParam0)//Position - 0x601DAB
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (!__LIB_24__.func_226(Var0.f_3, Var0.f_4))
		{
			return;
		}
		__LIB_22__.func_975(Var0.f_1, Var0.f_2);
	}
}

int func_286(struct<22> Param0)//Position - 0x60236B
{
	if (Param0.f_4 < 0 || Param0.f_4 > Global_262145.f_2351 /* Tunable: BOUNTY_AWARD_LEVEL_5_MODIFIER */)
	{
		return 0;
	}
	if (!__LIB_24__.func_226(Param0.f_20, Param0.f_21))
	{
		return 0;
	}
	return 1;
}

int func_287(int iParam0)//Position - 0x60D1E3
{
	switch (iParam0)
	{
		case 17:
			return __LIB_0__.func_228(18989, -1);
		case 22:
			return __LIB_0__.func_228(18990, -1);
		case 23:
			return __LIB_0__.func_228(18991, -1);
		default:
	}
	return 0;
}

void func_288(bool bParam0, int iParam1)//Position - 0x60E33B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__.func_264(bParam0, 0, 0))
	{
		return;
	}
	if ((DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3) && DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Previous_Owner", 3)) && DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
	{
		iVar0 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bParam0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (__LIB_27__.func_856(Global_2703735.f_173[iVar1], iVar0, iParam1))
			{
				__LIB_17__.func_910(Global_2703735.f_173[iVar1]);
				Global_2703735.f_173[iVar1] = 0;
			}
			iVar1++;
		}
		iVar2 = VEHICLE::GET_ALL_VEHICLES(&Global_1578027);
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1578027[iVar1]))
			{
				if (__LIB_27__.func_856(Global_1578027[iVar1], iVar0, -1))
				{
					__LIB_17__.func_910(Global_1578027[iVar1]);
					Global_1578027[iVar1] = 0;
				}
			}
			iVar1++;
		}
	}
}

void func_289(bool bParam0, int iParam1, var uParam2)//Position - 0x60E609
{
	struct<4> Var0;
	if (__LIB_1__.func_264(bParam0, 0, 0))
	{
		Var0.f_0 = 1802636121;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_3 = uParam2;
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, __LIB_1__.func_276(bParam0));
	}
}

void func_290(bool bParam0, int iParam1)//Position - 0x60E70E
{
	struct<3> Var0;
	Var0.f_0 = -637352381;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_1__.func_276(bParam0));
}

void func_291(bool bParam0, int iParam1, int iParam2, var uParam3)//Position - 0x60E9C0
{
	struct<5> Var0;
	Var0.f_0 = 2108559203;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, __LIB_1__.func_276(bParam0));
}

void func_292(int iParam0)//Position - 0x60E9F7
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 18))
	{
		if (Global_2815059.f_197 < 5)
		{
			if (Var0.f_1 != __LIB_0__.func_160())
			{
				Global_2815059.f_111[Global_2815059.f_197 /*17*/] = Var0.f_1;
				Global_2815059.f_111[Global_2815059.f_197 /*17*/].f_1 = { Var0.f_2 };
				Global_2815059.f_197++;
			}
		}
	}
}

void func_293(int iParam0)//Position - 0x60EBF3
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (__LIB_24__.func_226(Var0.f_2, Var0.f_3))
		{
			if (Var0.f_1 == PLAYER::PLAYER_ID())
			{
				MISC::SET_BIT(&(Global_2703735.f_3576), 5);
			}
		}
	}
}

void func_294(int iParam0)//Position - 0x60EC34
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (__LIB_24__.func_226(Var0.f_2, Var0.f_3))
		{
			if (Var0.f_1 == PLAYER::PLAYER_ID())
			{
				MISC::SET_BIT(&(Global_2703735.f_3576), 4);
			}
		}
	}
}

void func_295(bool bParam0)//Position - 0x60FCA6
{
	__LIB_6__.func_371(353529159, __LIB_1__.func_276(bParam0));
}

void func_296(int iParam0)//Position - 0x61283B
{
	var uVar0;
	if (__LIB_12__.func_836())
	{
		if (Global_1836570 == 0)
		{
			if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
			{
				Global_1836570 = 1;
			}
		}
	}
}

char* func_297(int iParam0)//Position - 0x616E90
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "GB_BB_T_DES" /* GXT: <C>~a~</C>~s~ destroyed a vehicle. */;
			switch (__LIB_7__.func_728(PLAYER::PLAYER_ID()))
			{
				case 4:
					sVar0 = "CSH_TCK_DES_R" /* GXT: <C>~a~</C>~s~ destroyed a security shipment. */;
					break;
			}
			break;
		case 1:
			sVar0 = "GB_BB_T_UDES" /* GXT: You destroyed a vehicle. */;
			switch (__LIB_7__.func_728(PLAYER::PLAYER_ID()))
			{
				case 4:
					sVar0 = "CSH_TCK_DES_L" /* GXT: You destroyed a security shipment. */;
					break;
			}
			break;
		case 2:
			sVar0 = "GB_BB_T_MDES" /* GXT: A vehicle was destroyed. */;
			switch (__LIB_7__.func_728(PLAYER::PLAYER_ID()))
			{
				case 4:
					sVar0 = "CSH_TCK_DES_S" /* GXT: Someone destroyed a security shipment. */;
					break;
			}
			break;
	}
	return sVar0;
}

char* func_298(int iParam0, bool bParam1, int iParam2)//Position - 0x617693
{
	switch (__LIB_22__.func_995(iParam0))
	{
		case 0:
			if (bParam1)
			{
				return "IDJ_T_KM_SK_VHa" /* GXT: You collected the skate merchandise. */;
			}
			return "IDJ_T_KM_SK_VHb" /* GXT: ~a~ collected the skate merchandise. */;
		case 1:
			if (bParam1)
			{
				return "IDJ_T_KM_PZ_PZa" /* GXT: You collected the pizza. */;
			}
			return "IDJ_T_KM_PZ_PZb" /* GXT: ~a~ collected the pizza. */;
		case 3:
			if (bParam1)
			{
				return "IDJ_T_MM_RC_VHa" /* GXT: You recovered the Itali RSX. */;
			}
			return "IDJ_T_MM_RC_VHb" /* GXT: ~a~ recovered the Itali RSX. */;
		case 4:
			if (bParam1)
			{
				return "IDJ_T_MM_SP_SPa" /* GXT: You collected Moodymann's slippers. */;
			}
			return "IDJ_T_MM_SP_SPb" /* GXT: ~a~ collected Moodymann's slippers. */;
		case 5:
			if (bParam1)
			{
				return "IDJ_T_PT_EQ_EQa" /* GXT: You collected the equipment. */;
			}
			return "IDJ_T_PT_EQ_EQb" /* GXT: ~a~ collected the equipment. */;
		case 6:
			if (bParam1)
			{
				return "IDJ_T_PT_CP_CPa" /* GXT: You collected the champagne. */;
			}
			return "IDJ_T_PT_CP_CPb" /* GXT: ~a~ collected the champagne. */;
		default:
	}
	return "";
}

int func_299(bool bParam0)//Position - 0x6177A1
{
	if (__LIB_3__.func_803(bParam0) == 258)
	{
		return __LIB_2__.func_234(bParam0);
	}
	return -1;
}

char* func_300(int iParam0, bool bParam1, int iParam2)//Position - 0x617944
{
	switch (__LIB_23__.func_376(iParam0))
	{
		case 0:
			if (bParam1)
			{
				return "CSH_COL_ARCEQ" /* GXT: Arcade equipment collected. */;
			}
			return "CSH_COL_ARCEQR" /* GXT: ~a~ collected the arcade equipment. */;
		case 5:
			if (bParam1)
			{
				return "CSH_COL_POWER" /* GXT: Power drill collected. */;
			}
			return "CSH_COL_POWERR" /* GXT: ~a~ collected a power drill. */;
		case 23:
			if (bParam1)
			{
				return "CSH_COL_BSTAR" /* GXT: Bugstars van collected. */;
			}
			return "CSH_COL_BSTARR" /* GXT: ~a~ collected the Bugstars van. */;
		case 1:
			if (bParam1)
			{
				return "CSH_COL_WEAPON" /* GXT: Unmarked weapons collected. */;
			}
			return "CSH_COL_WEAPONR" /* GXT: ~a~ collected unmarked weapons. */;
		case 29:
			if (bParam1)
			{
				return "CSH_COL_FFGEAR" /* GXT: Firefighter gear collected. */;
			}
			return "CSH_COL_FFGEARR" /* GXT: ~a~ collected the firefighter gear. */;
		case 24:
			if (bParam1)
			{
				return "CSH_COL_MNTNC1" /* GXT: Maintenance outfits collected. */;
			}
			return "CSH_COL_MNTNC1R" /* GXT: ~a~ collected a maintenance outfit. */;
		case 26:
			if (bParam1)
			{
				return "CSH_COL_STOCK" /* GXT: Stockade collected. */;
			}
			return "CSH_COL_STOCKR" /* GXT: ~a~ collected the stockade. */;
		case 27:
			if (bParam1)
			{
				return "CSH_COL_GSOUTF" /* GXT: Gruppe Sechs outfits collected. */;
			}
			return "CSH_COL_GSOUTFR" /* GXT: ~a~ collected Gruppe Sechs outfits. */;
		case 11:
			if (bParam1)
			{
				return "CSH_COL_DRONE" /* GXT: Drone parts collected. */;
			}
			return "CSH_COL_DRONER" /* GXT: ~a~ collected drone parts. */;
		case 2:
			if (bParam1)
			{
				return "CSH_COL_GETAVEH" /* GXT: Getaway vehicle collected. */;
			}
			return "CSH_COL_GETVEHR" /* GXT: ~a~ collected a getaway vehicle. */;
		case 14:
			if (bParam1)
			{
				return "CSH_COL_EMP" /* GXT: EMP device collected. */;
			}
			return "CSH_COL_EMPR" /* GXT: ~a~ collected the EMP device. */;
		case 15:
			if (bParam1)
			{
				return "CSH_COL_TUNBOR" /* GXT: Tunnel boring machine collected. */;
			}
			return "CSH_COL_TUNBORR" /* GXT: ~a~ collected the tunnel boring machine. */;
		case 13:
			switch (iParam0)
			{
				case 47:
				case 48:
					if (!__LIB_23__.func_396(__LIB_0__.func_582()))
					{
						if (bParam1)
						{
							return "CSH_COL_CHARGE" /* GXT: Charge collected. */;
						}
						return "CSH_COL_CHARGER" /* GXT: ~a~ collected a charge. */;
					}
					else
					{
						if (bParam1)
						{
							return "CSH_COL_CHARGE" /* GXT: Charge collected. */;
						}
						return "CSH_COL_CHARGER" /* GXT: ~a~ collected a charge. */;
					}
					break;
				default:
					if (bParam1)
					{
						return "CSH_COL_CHARGE" /* GXT: Charge collected. */;
					}
					return "CSH_COL_CHARGER" /* GXT: ~a~ collected a charge. */;
			}
			break;
		case 4:
			if (bParam1)
			{
				return "CSH_COL_LASER" /* GXT: Vault laser collected. */;
			}
			return "CSH_COL_LASERR" /* GXT: ~a~ collected a vault laser. */;
		case 22:
			if (bParam1)
			{
				return "CSH_COL_INFIL" /* GXT: Infiltration suits collected. */;
			}
			return "CSH_COL_INFILR" /* GXT: ~a~ collected infiltration suits. */;
		case 7:
			if (bParam1)
			{
				return "CSH_COL_VAEXP" /* GXT: Vault explosives collected. */;
			}
			return "CSH_COL_VAEXPR" /* GXT: ~a~ collected vault explosives. */;
		case 6:
			if (bParam1)
			{
				return "CSH_COL_VDRILL" /* GXT: Vault drill collected. */;
			}
			return "CSH_COL_VDRILLR" /* GXT: ~a~ collected a vault drill. */;
		case 9:
		case 10:
			if (bParam1)
			{
				return "CSH_COL_SECPASS" /* GXT: Security pass collected. */;
			}
			return "CSH_COL_SECPASR" /* GXT: ~a~ collected the security pass. */;
		case 30:
			if (bParam1)
			{
				return "CSH_COL_REINARM" /* GXT: Reinforced armor collected. */;
			}
			return "CSH_COL_REINARR" /* GXT: ~a~ collected reinforced armor. */;
		case 3:
			if (bParam1)
			{
				return "CSH_COL_HACK" /* GXT: Hacking device collected. */;
			}
			return "CSH_COL_HACKR" /* GXT: ~a~ collected the hacking device. */;
		case 8:
			if (bParam1)
			{
				return "CSH_COL_VK1" /* GXT: Vault keycard collected. */;
			}
			return "CSH_COL_VK1R" /* GXT: ~a~ collected a vault keycard. */;
		case 28:
			if (bParam1)
			{
				return "CSH_COL_NOOSE" /* GXT: NOOSE outfits collected. */;
			}
			return "CSH_COL_NOOSER" /* GXT: ~a~ collected NOOSE outfits. */;
		case 21:
			switch (iParam2)
			{
				case 0:
					if (bParam1)
					{
						return "CSH_COL_TRSHMAS" /* GXT: Trashmaster collected. */;
					}
					return "CSH_COL_TRSHMAR" /* GXT: ~a~ collected the Trashmaster. */;
				case 1:
					if (bParam1)
					{
						return "CSH_COL_TRASH" /* GXT: Trash planted. */;
					}
					return "CSH_COL_TRASHR" /* GXT: ~a~ planted the trash. */;
				default:
			}
			break;
		case 25:
			switch (iParam2)
			{
				case 0:
					if (bParam1)
					{
						return "CSH_COL_MNTNC2" /* GXT: Maintenance van collected. */;
					}
					return "CSH_COL_MNTNC2R" /* GXT: ~a~ collected the maintenance van. */;
				case 1:
					if (bParam1)
					{
						return "CSH_COL_CHEM" /* GXT: Chemicals planted. */;
					}
					return "CSH_COL_CHEMR" /* GXT: ~a~ planted the chemicals. */;
				default:
			}
			break;
		case 32:
			if (bParam1)
			{
				return "CSH_COL_RENTAL" /* GXT: Rental car collected. */;
			}
			return "CSH_COL_RENTALR" /* GXT: ~a~ collected the rental car. */;
		case 17:
			if (bParam1)
			{
				return "CSH_COL_GAUNT" /* GXT: Stolen Gauntlet collected. */;
			}
			return "CSH_COL_GAUNTR" /* GXT: ~a~ collected the stolen Gauntlet. */;
	}
	return "";
}

int func_301()//Position - 0x61824A
{
	if (__LIB_6__.func_108())
	{
		__LIB_0__.func_168(169, Global_20266, 1);
	}
	return 169;
}

int func_302(bool bParam0)//Position - 0x619837
{
	if (__LIB_3__.func_803(bParam0) == 262)
	{
		return __LIB_2__.func_234(bParam0);
	}
	return -1;
}

int func_303(bool bParam0)//Position - 0x6198B9
{
	if (__LIB_3__.func_803(bParam0) == 263)
	{
		return __LIB_2__.func_234(bParam0);
	}
	return -1;
}

int func_304(bool bParam0)//Position - 0x61A137
{
	if (bParam0 != __LIB_0__.func_160())
	{
		if ((BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 6) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 7)) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 8))
		{
			return 1;
		}
	}
	return 0;
}

int func_305(bool bParam0)//Position - 0x61A921
{
	if (__LIB_3__.func_803(bParam0) == 299)
	{
		return __LIB_2__.func_234(bParam0);
	}
	return -1;
}

void func_306(int iParam0, bool bParam1)//Position - 0x61A9B1
{
	int iVar0;
	if (bParam1 != __LIB_0__.func_160())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam1))
		{
			if (bParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (__LIB_2__.func_235(bParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			Global_2815059.f_5195.f_388 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

void func_307(int iParam0)//Position - 0x61B2E8
{
	if (*iParam0 != 0)
	{
	}
	__LIB_22__.func_999(1);
}

int func_308(int iParam0)//Position - 0x61E62F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (iParam0 == __LIB_15__.func_312(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_309()//Position - 0x61FF6B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_12__.func_695(1);
		__LIB_23__.func_16();
		__LIB_23__.func_14();
		if (__LIB_12__.func_302())
		{
			__LIB_23__.func_13();
		}
	}
	else
	{
		__LIB_12__.func_695(1);
		__LIB_6__.func_249(0);
		if (__LIB_0__.func_214() == 21 && Global_1581340 == 0)
		{
		}
		else
		{
			__LIB_6__.func_145(32);
		}
		__LIB_23__.func_12();
		__LIB_6__.func_257();
	}
}

void func_310(int iParam0)//Position - 0x6216CF
{
	int iVar0;
	struct<57> Var1;
	iVar0 = iParam0;
	while (iVar0 <= (Global_2715699.f_1.f_2805 - 2))
	{
		Global_2715699.f_1.f_845[iVar0 /*57*/] = { Global_2715699.f_1.f_845[iVar0 + 1 /*57*/] };
		if (__LIB_12__.func_806() == iVar0 + 1)
		{
			__LIB_24__.func_265(iVar0);
		}
		iVar0++;
	}
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	if (Global_2715699.f_1.f_2805 > 1)
	{
		Global_2715699.f_1.f_845[(Global_2715699.f_1.f_2805 - 1) /*57*/] = { Var1 };
	}
}

int func_311()//Position - 0x623217
{
	if (__LIB_4__.func_973(1))
	{
		return Global_1853348[__LIB_0__.func_582() /*834*/].f_205.f_6;
	}
	return 0;
}

int func_312()//Position - 0x62323D
{
	if (!__LIB_4__.func_973(1))
	{
		return 0;
	}
	if (__LIB_2__.func_232())
	{
		return 0;
	}
	return Global_1943916;
}

void func_313(var* uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6234F9
{
	int iVar0;
	if (!__LIB_0__.func_585(*uParam0))
	{
		return;
	}
	if (!__LIB_12__.func_810(*uParam0))
	{
		return;
	}
	iVar0 = 2;
	if (bParam4)
	{
		iVar0 = 3;
	}
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(uParam0, sParam1, iVar0, 2, bParam3);
			break;
		case 1:
			NETWORK::NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(uParam0, sParam1, iVar0, 3, bParam3);
			break;
	}
}

int func_314(var* uParam0, var uParam1)//Position - 0x6235D6
{
	int iVar0;
	if (Global_2715699.f_1.f_2806 < 0 || Global_2715699.f_1.f_2806 >= __LIB_12__.func_807())
	{
		return -1;
	}
	iVar0 = Global_2715699.f_1.f_2806;
	Global_2715699.f_1.f_2670[iVar0 /*57*/].f_13 = { *uParam1 };
	Global_2715699.f_1.f_2670[iVar0 /*57*/] = { *uParam0 };
	Global_2715699.f_1.f_2670[iVar0 /*57*/].f_33[0] = 0;
	Global_2715699.f_1.f_2670[iVar0 /*57*/].f_33[1] = 0;
	Global_2715699.f_1.f_2670[iVar0 /*57*/].f_45 = 0;
	Global_2715699.f_1.f_2670[iVar0 /*57*/].f_46 = 0;
	Global_2715699.f_1.f_2670[iVar0 /*57*/].f_47 = 0;
	Global_2715699.f_1.f_2670[iVar0 /*57*/].f_54 = 0;
	Global_2715699.f_1.f_2670[iVar0 /*57*/].f_49 = 0;
	Global_2715699.f_1.f_2670[iVar0 /*57*/].f_48 = 0;
	Global_2715699.f_1.f_2670[iVar0 /*57*/].f_50 = 0;
	Global_2715699.f_1.f_2806++;
	return iVar0;
}

int func_315(int iParam0, int iParam1)//Position - 0x6238E2
{
	struct<13> Var0;
	struct<13> Var1;
	Var0 = { __LIB_1__.func_267(iParam0) };
	Var1 = { __LIB_1__.func_267(iParam1) };
	if (__LIB_12__.func_588(&Var0) == __LIB_12__.func_588(&Var1))
	{
		return 1;
	}
	return 0;
}

int func_316(int iParam0)//Position - 0x62451B
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_292, 28);
	}
	return 0;
}

bool func_317()//Position - 0x62532C
{
	return __LIB_17__.func_462() == PLAYER::PLAYER_ID();
}

int func_318(int iParam0)//Position - 0x6270A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = (iParam0 - 1000);
	iVar2 = iVar0;
	iVar3 = __LIB_9__.func_646(iVar2);
	switch (iVar3)
	{
		case joaat("cheetah"):
		case joaat("entityxf"):
		case joaat("fmj"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("osiris"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("reaper"):
		case joaat("seven70"):
		case joaat("sheava"):
		case joaat("t20"):
		case joaat("turismor"):
		case joaat("tyrus"):
		case joaat("zentorno"):
			iVar1 = joaat("imp_prop_covered_vehicle_01a");
			break;
		case joaat("bestiagts"):
		case joaat("feltzer2"):
		case joaat("omnis"):
		case joaat("sultanrs"):
		case joaat("verlierer2"):
			iVar1 = joaat("imp_prop_covered_vehicle_02a");
			break;
		case joaat("nightshade"):
		case joaat("sabregt2"):
		case joaat("tampa"):
			iVar1 = joaat("imp_prop_covered_vehicle_03a");
			break;
		case joaat("banshee2"):
		case joaat("coquette2"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("mamba"):
		case joaat("tropos"):
			iVar1 = joaat("imp_prop_covered_vehicle_04a");
			break;
		case joaat("btype3"):
			iVar1 = joaat("imp_prop_covered_vehicle_05a");
			break;
		case joaat("alpha"):
		case joaat("ztype"):
			iVar1 = joaat("imp_prop_covered_vehicle_06a");
			break;
		default:
			iVar1 = joaat("imp_prop_covered_vehicle_01a");
			break;
	}
	return iVar1;
}

void func_319(bool bParam0, int iParam1, int iParam2)//Position - 0x62CDA4
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 1361475530;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	iVar1 = __LIB_1__.func_276(bParam0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_320(int iParam0)//Position - 0x62E380
{
	if (__LIB_7__.func_972())
	{
		switch (iParam0)
		{
			case 6:
				return 330;
			case 7:
				return 295;
			case 8:
				return 268;
			case 9:
				return 15;
			case 10:
				return 288;
			case 11:
				return 112;
			case 12:
				return 219;
			case 13:
				return 49;
			case 14:
				return 165;
			case 15:
				return 116;
			}
		default:
	}
	return -1;
}

void func_321(int iParam0, bool bParam1)//Position - 0x6310B7
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (bParam1)
		{
			if (!BitTest(Global_1853348[iParam0 /*834*/].f_267.f_465.f_3, 3))
			{
				MISC::SET_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_465.f_3), 3);
			}
		}
		else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_465.f_3, 3))
		{
			MISC::CLEAR_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_465.f_3), 3);
		}
	}
}

void func_322(int iParam0, bool bParam1)//Position - 0x632BB7
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return;
	}
	if (bParam1)
	{
		if (!BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_1, 11))
		{
			MISC::SET_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_408.f_1), 11);
		}
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_1, 11))
	{
		MISC::CLEAR_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_408.f_1), 11);
	}
}

int func_323(int iParam0)//Position - 0x6330F5
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_3, 1);
	}
	return 0;
}

int func_324(int iParam0)//Position - 0x63311D
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 12);
	}
	return 0;
}

int func_325(int iParam0)//Position - 0x633146
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_3, 0);
	}
	return 0;
}

int func_326(int iParam0)//Position - 0x63316E
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 30);
	}
	return 0;
}

int func_327(int iParam0)//Position - 0x633197
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 29);
	}
	return 0;
}

int func_328(int iParam0)//Position - 0x6331C0
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 28);
	}
	return 0;
}

int func_329(int iParam0)//Position - 0x6331E9
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 31);
	}
	return 0;
}

int func_330(int iParam0)//Position - 0x633212
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_1, 23);
	}
	return 0;
}

int func_331(int iParam0)//Position - 0x633264
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 2);
	}
	return 0;
}

char* func_332(int iParam0, int iParam1)//Position - 0x6390E4
{
	char* sVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	sVar0 = "";
	if (Global_1578997.f_8)
	{
		iVar1 = DATAFILE::DATAFILE_GET_FILE_DICT_FOR_ADDITIONAL_DATA_FILE(0);
		if (!__LIB_4__.func_664(iVar1))
		{
			return "";
		}
		if (!__LIB_6__.func_596(iParam0) || !__LIB_25__.func_756(iParam0, iParam1))
		{
			return sVar0;
		}
		__LIB_5__.func_185(&iVar2, iVar1, __LIB_6__.func_595());
		StringCopy(&Var3, "track", 16);
		StringIntConCat(&Var3, iParam1, 16);
		__LIB_5__.func_185(&iVar4, iVar2, &Var3);
		sVar0 = __LIB_8__.func_346(iVar4, "trackname", "");
	}
	else
	{
		sVar0 = __LIB_6__.func_598(iParam0, iParam1);
	}
	return sVar0;
}

void func_333(bool bParam0)//Position - 0x639D72
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458, 0))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458), 0);
			if (!__LIB_0__.func_137(28231, -1))
			{
				__LIB_0__.func_521(28231, 1, -1);
				__LIB_14__.func_156("IH_OUTFIT_TCK1" /* GXT: Black Scuba Outfit unlocked. */);
			}
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458, 0))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458), 0);
	}
}

int func_334(int iParam0)//Position - 0x63A734
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if ((((((((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 2)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 3)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 5)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 6)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 7)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 8))
	{
		return 1;
	}
	return 0;
}

void func_335()//Position - 0x63BEF0
{
	if (__LIB_0__.func_228(18974, -1) != 0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 0);
	}
	if (__LIB_0__.func_228(18976, -1) != 0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 1);
	}
	if (__LIB_0__.func_228(18975, -1) != 0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 2);
	}
	if (__LIB_0__.func_228(18973, -1) == 0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 3);
	}
	if (__LIB_0__.func_228(18973, -1) == 1)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 4);
	}
	if (__LIB_0__.func_228(18973, -1) == 2)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 5);
	}
	if (__LIB_0__.func_228(18973, -1) == 3)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 6);
	}
	if (__LIB_0__.func_228(18973, -1) == 4)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 7);
	}
	if (__LIB_0__.func_228(18973, -1) == 5)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 8);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 8);
	}
	if (__LIB_0__.func_228(18973, -1) == 6)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 9);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 9);
	}
	if (__LIB_0__.func_228(18973, -1) == 7)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 10);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 10);
	}
	if (__LIB_0__.func_228(18973, -1) == 8)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 11);
	}
}

bool func_336()//Position - 0x63CA5B
{
	return __LIB_9__.func_783(2);
}

int func_337(int iParam0)//Position - 0x63CD70
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	char cVar4[16];
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__.func_112())
	{
		__LIB_24__.func_574(&sVar0, iParam0);
		iVar1 = MISC::GET_HASH_KEY(&sVar0);
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(iVar1))
		{
			iVar2 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(iVar1, joaat("CATEGORY_PROPERTIE"), true);
			StringCopy(&cVar3, __LIB_2__.func_362(iParam0), 16);
			return iVar2;
		}
		else
		{
			StringCopy(&cVar4, __LIB_2__.func_362(iParam0), 16);
		}
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_22631 /* Tunable: SMUG_HANGAR_LSIA_HANGAR_1 */;
		case 2:
			return Global_262145.f_22632 /* Tunable: SMUG_HANGAR_LSIA_HANGAR_A17 */;
		case 3:
			return Global_262145.f_22633 /* Tunable: SMUG_HANGAR_FORT_ZANCUDO_HANGAR_A2 */;
		case 4:
			return Global_262145.f_22634 /* Tunable: SMUG_HANGAR_FORT_ZANCUDO_HANGAR_3497 */;
		case 5:
			return Global_262145.f_22635 /* Tunable: SMUG_HANGAR_FORT_ZANCUDO_HANGAR_3499 */;
		default:
	}
	return 0;
}

bool func_338(int iParam0)//Position - 0x63F487
{
	return __LIB_24__.func_575(iParam0) > __LIB_24__.func_576(iParam0);
}

int func_339(int iParam0)//Position - 0x640F1B
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	char cVar5[16];
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__.func_112())
	{
		bVar0 = false;
		if (__LIB_26__.func_31(iParam0))
		{
			bVar0 = true;
		}
		__LIB_9__.func_665(&sVar1, iParam0, bVar0);
		iVar2 = MISC::GET_HASH_KEY(&sVar1);
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(iVar2))
		{
			iVar3 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(iVar2, joaat("CATEGORY_PROPERTIE"), true);
			StringCopy(&cVar4, __LIB_9__.func_389(iParam0), 16);
			return iVar3;
		}
		else
		{
			StringCopy(&cVar5, __LIB_9__.func_389(iParam0), 16);
		}
	}
	if (__LIB_26__.func_31(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_18093 /* Tunable: BIKER_BUSINESS_PALETO_BAY_WEED_FARM */;
		case 1:
			return Global_262145.f_18089 /* Tunable: BIKER_BUSINESS_PALETO_BAY_METH_LAB */;
		case 3:
			return Global_262145.f_18085 /* Tunable: BIKER_BUSINESS_PALETO_BAY_COCAINE_LOCKUP */;
		case 5:
			return Global_262145.f_18077 /* Tunable: BIKER_BUSINESS_PALETO_BAY_DOCUMENT_FORGERY_OFFICE */;
		case 4:
			return Global_262145.f_18081 /* Tunable: BIKER_BUSINESS_PALETO_BAY_COUNTERFEIT_CASH_FACTOY */;
		case 7:
			return Global_262145.f_18094 /* Tunable: BIKER_BUSINESS_CITY_WEED_FARM */;
		case 6:
			return Global_262145.f_18090 /* Tunable: BIKER_BUSINESS_CITY_METH_LAB */;
		case 8:
			return Global_262145.f_18086 /* Tunable: BIKER_BUSINESS_CITY_COCAINE_LOCKUP */;
		case 10:
			return Global_262145.f_18078 /* Tunable: BIKER_BUSINESS_CITY_DOCUMENT_FORGERY_OFFICE */;
		case 9:
			return Global_262145.f_18082 /* Tunable: BIKER_BUSINESS_CITY_COUNTERFEIT_CASH_FACTOY */;
		case 12:
			return Global_262145.f_18095 /* Tunable: BIKER_BUSINESS_COUNTRYSIDE_WEED_FARM */;
		case 11:
			return Global_262145.f_18091 /* Tunable: BIKER_BUSINESS_COUNTRYSIDE_METH_LAB */;
		case 13:
			return Global_262145.f_18087 /* Tunable: BIKER_BUSINESS_COUNTRYSIDE_COCAINE_LOCKUP */;
		case 15:
			return Global_262145.f_18079 /* Tunable: BIKER_BUSINESS_COUNTRYSIDE_DOCUMENT_FORGERY_OFFICE */;
		case 14:
			return Global_262145.f_18083 /* Tunable: BIKER_BUSINESS_COUNTRYSIDE_COUNTERFEIT_CASH_FACTOY */;
		case 17:
			return Global_262145.f_18096 /* Tunable: BIKER_BUSINESS_ELYSIAN_WEED_FARM */;
		case 16:
			return Global_262145.f_18092 /* Tunable: BIKER_BUSINESS_ELYSIAN_METH_LAB */;
		case 18:
			return Global_262145.f_18088 /* Tunable: BIKER_BUSINESS_ELYSIAN_COCAINE_LOCKUP */;
		case 20:
			return Global_262145.f_18080 /* Tunable: BIKER_BUSINESS_ELYSIAN_DOCUMENT_FORGERY_OFFICE */;
		case 19:
			return Global_262145.f_18084 /* Tunable: BIKER_BUSINESS_ELYSIAN_COUNTERFEIT_CASH_FACTOY */;
		case 21:
			return Global_262145.f_21462 /* Tunable: GR_BUNKER_PROPERTY_GRAND_SENORA_OILFIELDS_BUNKER */;
		case 22:
			return Global_262145.f_21461 /* Tunable: GR_BUNKER_PROPERTY_GRAND_SENORA_DESERT_BUNKER */;
		case 23:
			return Global_262145.f_21463 /* Tunable: GR_BUNKER_PROPERTY_ROUTE_68_BUNKER */;
		case 24:
			return Global_262145.f_21458 /* Tunable: GR_BUNKER_PROPERTY_FARMHOUSE_BUNKER */;
		case 25:
			return Global_262145.f_21460 /* Tunable: GR_BUNKER_PROPERTY_SMOKE_TREE_ROAD_BUNKER */;
		case 26:
			return Global_262145.f_21459 /* Tunable: GR_BUNKER_PROPERTY_THOMSON_SCRAPYARD_BUNKER */;
		case 27:
			return Global_262145.f_21464 /* Tunable: GR_BUNKER_PROPERTY_GRAPESEED_BUNKER */;
		case 28:
			return Global_262145.f_21468 /* Tunable: GR_BUNKER_PROPERTY_PALETO_FOREST_BUNKER */;
		case 29:
			return Global_262145.f_21467 /* Tunable: GR_BUNKER_PROPERTY_RATON_CANYON_BUNKER */;
		case 30:
			return Global_262145.f_21466 /* Tunable: GR_BUNKER_PROPERTY_LAGO_ZANCUDO_BUNKER */;
		case 31:
			return Global_262145.f_21465 /* Tunable: GR_BUNKER_PROPERTY_CHUMASH_BUNKER */;
		default:
	}
	return 0;
}

void func_340()//Position - 0x64428C
{
	switch (Global_1973206.f_39)
	{
		case 2:
			if (!__LIB_1__.func_563(284, -1))
			{
				__LIB_6__.func_905(284, 1, -1, 1);
			}
			break;
		case 6:
			if (!__LIB_1__.func_563(282, -1))
			{
				__LIB_6__.func_905(282, 1, -1, 1);
			}
			break;
		case 4:
			if (!__LIB_1__.func_563(283, -1))
			{
				__LIB_6__.func_905(283, 1, -1, 1);
			}
			break;
		case 5:
			if (!__LIB_1__.func_563(285, -1))
			{
				__LIB_6__.func_905(285, 1, -1, 1);
			}
			break;
	}
}

void func_341()//Position - 0x6445D4
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__.func_5();
	iVar2 = __LIB_17__.func_536(iVar0);
	iVar3 = MISC::GET_PROFILE_SETTING(iVar2);
	if (BitTest(iVar3, 4))
	{
		MISC::CLEAR_BIT(&iVar3, 4);
		bVar1 = true;
	}
	if (BitTest(iVar3, 5))
	{
		MISC::CLEAR_BIT(&iVar3, 5);
		bVar1 = true;
	}
	if (BitTest(iVar3, 6))
	{
		MISC::CLEAR_BIT(&iVar3, 6);
		bVar1 = true;
	}
	if (bVar1)
	{
		STATS::SET_FREEMODE_STRAND_PROGRESSION_STATUS(iVar2, iVar3);
	}
}

void func_342()//Position - 0x6452E4
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__.func_5();
	iVar2 = __LIB_17__.func_536(iVar0);
	iVar3 = MISC::GET_PROFILE_SETTING(iVar2);
	if (BitTest(iVar3, 1))
	{
		MISC::CLEAR_BIT(&iVar3, 1);
		bVar1 = true;
	}
	if (BitTest(iVar3, 2))
	{
		MISC::CLEAR_BIT(&iVar3, 2);
		bVar1 = true;
	}
	if (BitTest(iVar3, 3))
	{
		MISC::CLEAR_BIT(&iVar3, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		STATS::SET_FREEMODE_STRAND_PROGRESSION_STATUS(iVar2, iVar3);
	}
}

int func_343()//Position - 0x6526CB
{
	var uVar0;
	uVar0 = Global_1659747[__LIB_1__.func_443(-1)];
	if (BitTest(uVar0, 11))
	{
		if (!__LIB_9__.func_936(joaat("MPPLY_JOBFLOW_HEIST_TEXT")))
		{
			__LIB_0__.func_645(joaat("MPPLY_JOBFLOW_HEIST_TEXT"), 1);
		}
		return 1;
	}
	return 0;
}

int func_344()//Position - 0x653179
{
	if ((((__LIB_12__.func_728() || __LIB_1__.func_674()) || __LIB_0__.func_739()) || __LIB_0__.func_194()) || __LIB_1__.func_758())
	{
		return 1;
	}
	return 0;
}

void func_345()//Position - 0x655A5D
{
	struct<4> Var0;
	Var0.f_2 = -1;
	Global_1946250.f_4592 = { Var0 };
	Global_1946250.f_4592 = __LIB_0__.func_160();
}

void func_346()//Position - 0x477C
{
	__LIB_24__.func_613();
	__LIB_24__.func_612();
	__LIB_24__.func_611();
	__LIB_24__.func_610();
	__LIB_24__.func_609();
	__LIB_24__.func_608();
	__LIB_24__.func_607();
	__LIB_24__.func_606();
	__LIB_24__.func_605();
	__LIB_24__.func_604();
	__LIB_24__.func_603();
	__LIB_24__.func_602();
	__LIB_24__.func_601();
	__LIB_24__.func_600();
	__LIB_24__.func_599();
	__LIB_24__.func_598();
	__LIB_24__.func_597();
}

void func_347(int iParam0)//Position - 0x91E0
{
	__LIB_24__.func_623(iParam0);
	__LIB_24__.func_622(iParam0);
	__LIB_24__.func_621(iParam0);
	__LIB_24__.func_620(iParam0);
	__LIB_24__.func_619(iParam0);
	__LIB_24__.func_618(iParam0);
	__LIB_24__.func_617(iParam0);
	__LIB_24__.func_616(iParam0);
	__LIB_24__.func_615(iParam0);
	__LIB_24__.func_614(iParam0);
}

void func_348()//Position - 0x57F8
{
	__LIB_1__.func_384(&Global_1660985);
}

void func_349()//Position - 0x5863
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1660951[iVar0] = __LIB_0__.func_160();
		iVar0++;
	}
	Global_1660984 = 0;
}

void func_350()//Position - 0x5892
{
	if (!Global_1660946)
	{
		return;
	}
	__LIB_23__.func_810();
	__LIB_24__.func_701();
}

void func_351(int iParam0)//Position - 0x5B8D
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_1659366[iParam0 /*11*/].f_2));
	Global_1659366[iParam0 /*11*/].f_2 = 0;
	__LIB_23__.func_812(iParam0);
	__LIB_23__.func_811(iParam0);
}

void func_352(int iParam0, bool bParam1, int iParam2)//Position - 0x7D02
{
	if (iParam2 == iParam2)
	{
	}
	switch (iParam0)
	{
		case default:
			break;
		case 0:
			if (bParam1)
			{
				__LIB_1__.func_597(10983, __LIB_1__.func_556(10983, -1, 0) + 1, -1, 1, 0);
			}
			else
			{
				__LIB_1__.func_597(10984, __LIB_1__.func_556(10984, -1, 0) + 1, -1, 1, 0);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_1__.func_597(10986, __LIB_1__.func_556(10986, -1, 0) + 1, -1, 1, 0);
			}
			else
			{
				__LIB_1__.func_597(10987, __LIB_1__.func_556(10987, -1, 0) + 1, -1, 1, 0);
			}
			break;
		case 2:
			if (bParam1)
			{
				__LIB_1__.func_597(10989, __LIB_1__.func_556(10989, -1, 0) + 1, -1, 1, 0);
			}
			else
			{
				__LIB_1__.func_597(10990, __LIB_1__.func_556(10990, -1, 0) + 1, -1, 1, 0);
			}
			break;
		case 3:
			if (bParam1)
			{
				__LIB_1__.func_597(10992, __LIB_1__.func_556(10992, -1, 0) + 1, -1, 1, 0);
			}
			else
			{
				__LIB_1__.func_597(10993, __LIB_1__.func_556(10993, -1, 0) + 1, -1, 1, 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				__LIB_1__.func_597(10995, __LIB_1__.func_556(10995, -1, 0) + 1, -1, 1, 0);
			}
			else
			{
				__LIB_1__.func_597(10996, __LIB_1__.func_556(10996, -1, 0) + 1, -1, 1, 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				__LIB_1__.func_597(10998, __LIB_1__.func_556(10998, -1, 0) + 1, -1, 1, 0);
			}
			else
			{
				__LIB_1__.func_597(10999, __LIB_1__.func_556(10999, -1, 0) + 1, -1, 1, 0);
			}
			break;
		case 6:
			if (bParam1)
			{
				__LIB_1__.func_597(11001, __LIB_1__.func_556(11001, -1, 0) + 1, -1, 1, 0);
			}
			else
			{
				__LIB_1__.func_597(11002, __LIB_1__.func_556(11002, -1, 0) + 1, -1, 1, 0);
			}
			break;
		case 7:
			if (bParam1)
			{
				__LIB_1__.func_597(11004, __LIB_1__.func_556(11004, -1, 0) + 1, -1, 1, 0);
			}
			else
			{
				__LIB_1__.func_597(11005, __LIB_1__.func_556(11005, -1, 0) + 1, -1, 1, 0);
			}
			break;
		case 8:
			if (bParam1)
			{
				__LIB_1__.func_597(11007, __LIB_1__.func_556(11007, -1, 0) + 1, -1, 1, 0);
			}
			else
			{
				__LIB_1__.func_597(11008, __LIB_1__.func_556(11008, -1, 0) + 1, -1, 1, 0);
			}
			break;
		case 9:
			if (bParam1)
			{
				__LIB_1__.func_597(11010, __LIB_1__.func_556(11010, -1, 0) + 1, -1, 1, 0);
			}
			else
			{
				__LIB_1__.func_597(11011, __LIB_1__.func_556(11011, -1, 0) + 1, -1, 1, 0);
			}
			break;
	}
}

void func_353()//Position - 0x811B
{
	if (BitTest(Global_2667185, 14))
	{
		Global_2667205 = 1;
		Global_2667205.f_1 = 1;
		Global_2667205.f_2 = __LIB_12__.func_462();
		Global_2667205.f_3 = (MISC::GET_GAME_TIMER() + 120000);
		return;
	}
	if (BitTest(Global_2667185, 15))
	{
		Global_2667205 = 1;
		Global_2667205.f_1 = 1;
		Global_2667205.f_2 = __LIB_12__.func_461();
		Global_2667205.f_3 = (MISC::GET_GAME_TIMER() + 120000);
		return;
	}
	if (BitTest(Global_2667185, 16))
	{
		Global_2667205 = 1;
		Global_2667205.f_1 = 1;
		Global_2667205.f_2 = __LIB_12__.func_460();
		Global_2667205.f_3 = (MISC::GET_GAME_TIMER() + 120000);
		return;
	}
	if (BitTest(Global_2667185, 17))
	{
		Global_2667205 = 1;
		Global_2667205.f_1 = 1;
		Global_2667205.f_2 = __LIB_12__.func_459();
		Global_2667205.f_3 = (MISC::GET_GAME_TIMER() + 120000);
		return;
	}
	if (BitTest(Global_2667185, 18))
	{
		Global_2667205 = 1;
		Global_2667205.f_1 = 1;
		Global_2667205.f_2 = __LIB_4__.func_663();
		Global_2667205.f_3 = (MISC::GET_GAME_TIMER() + 120000);
		return;
	}
	__LIB_23__.func_818();
}

void func_354(int iParam0)//Position - 0x843A
{
	struct<20> Var0;
	Var0 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_9 = -1;
	Global_2666816.f_2[iParam0 /*20*/] = { Var0 };
	__LIB_9__.func_819(&(Global_2666816.f_2[iParam0 /*20*/].f_1));
	Global_2666816.f_2[iParam0 /*20*/].f_11 = { 0f, 0f, 0f };
	Global_2666816.f_2[iParam0 /*20*/].f_14 = __LIB_0__.func_160();
}

void func_355()//Position - 0x9024
{
	__LIB_24__.func_714();
	__LIB_24__.func_713();
}

void func_356(bool bParam0)//Position - 0x91A4
{
	struct<21> Var0;
	__LIB_16__.func_842(15, 0, -1);
	Global_2656955 = 0;
	Global_2656955.f_1 = NETWORK::GET_NETWORK_TIME();
	Global_2656955.f_2 = 0;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Global_2656955.f_3 = { Var0 };
	if (bParam0)
	{
		return;
	}
}

int func_357(var uParam0)//Position - 0x1F56B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2[4];
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	var uVar6[4];
	int iVar7;
	Var3 = { 99999.9f, 99999.9f, 99999.9f };
	Var4 = { -99999.9f, -99999.9f, -99999.9f };
	Var0 = { uParam0->f_3 - *uParam0 };
	Var0.f_2 = 0f;
	Var1 = { __LIB_0__.func_620(0f, 0f, 1f, Var0) };
	Var1 = { Var1 / FtoV(SYSTEM::VMAG(Var1)) };
	Var1 = { Var1 * FtoV((uParam0->f_6 * 0.5f)) };
	Var2[0 /*3*/] = { *uParam0 + Var1 };
	Var2[1 /*3*/] = { *uParam0 - Var1 };
	Var2[2 /*3*/] = { uParam0->f_3 + Var1 };
	Var2[3 /*3*/] = { uParam0->f_3 - Var1 };
	iVar5 = 0;
	while (iVar5 < 4)
	{
		if (Var2[iVar5 /*3*/] < Var3.f_0)
		{
			Var3.f_0 = Var2[iVar5 /*3*/];
		}
		if (Var2[iVar5 /*3*/] > Var4.f_0)
		{
			Var4.f_0 = Var2[iVar5 /*3*/];
		}
		if (Var2[iVar5 /*3*/].f_1 < Var3.f_1)
		{
			Var3.f_1 = Var2[iVar5 /*3*/].f_1;
		}
		if (Var2[iVar5 /*3*/].f_1 > Var4.f_1)
		{
			Var4.f_1 = Var2[iVar5 /*3*/].f_1;
		}
		iVar5++;
	}
	uVar6[0] = __LIB_0__.func_616(Var3.f_0, Var3.f_1, 0f);
	uVar6[1] = __LIB_0__.func_616(Var3.f_0, Var4.f_1, 0f);
	uVar6[2] = __LIB_0__.func_616(Var4.f_0, Var3.f_1, 0f);
	uVar6[3] = __LIB_0__.func_616(Var4.f_0, Var4.f_1, 0f);
	iVar7 = 0;
	while (iVar7 < 4)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (!uVar6[iVar5] == uVar6[iVar7])
			{
				return 8;
			}
			iVar5++;
		}
		iVar7++;
	}
	return uVar6[0];
}

void func_358(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1F7F5
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	__LIB_3__.func_523(iParam0, &Var1, &Var2, &uVar3, &uVar0, 0);
	Var4 = { Var1 + Var2 };
	Var4 = { Var4 / Vector(2f, 2f, 2f) };
	Var5 = { Var2 - Var1 };
	Var6 = { __LIB_0__.func_620(Var5, 0f, 0f, 1f) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	Var7 = { Var4 - Var6 * Vector(38f, 38f, 38f) };
	Var8 = { Var4 + Var6 * Vector(3f, 3f, 3f) };
	*uParam1 = { Var7 };
	uParam1->f_2 = (uParam1->f_2 + -10f);
	*uParam2 = { Var8 };
	uParam2->f_2 = (uParam2->f_2 + 5f);
	*uParam3 = 12f;
}

int func_359(int iParam0)//Position - 0x329FB
{
	int iVar0;
	int iVar1[92];
	iVar1[0] = joaat("ambulance");
	iVar1[1] = joaat("benson");
	iVar1[2] = joaat("biff");
	iVar1[3] = joaat("bus");
	iVar1[4] = joaat("firetruk");
	iVar1[5] = joaat("forklift");
	iVar1[6] = joaat("mule");
	iVar1[7] = joaat("mule2");
	iVar1[8] = joaat("packer");
	iVar1[9] = joaat("phantom");
	iVar1[10] = joaat("police");
	iVar1[11] = joaat("stockade");
	iVar1[12] = joaat("squalo");
	iVar1[13] = joaat("maverick");
	iVar1[14] = joaat("polmav");
	iVar1[15] = joaat("airtug");
	iVar1[16] = joaat("fbi");
	iVar1[17] = joaat("annihilator");
	iVar1[18] = joaat("dinghy");
	iVar1[19] = joaat("police");
	iVar1[20] = joaat("ripley");
	iVar1[21] = joaat("trash");
	iVar1[22] = joaat("burrito");
	iVar1[23] = joaat("pony");
	iVar1[24] = joaat("speedo");
	iVar1[25] = joaat("marquis");
	iVar1[26] = joaat("sanchez");
	iVar1[27] = joaat("airtug");
	iVar1[28] = joaat("taco");
	iVar1[29] = joaat("barracks");
	iVar1[30] = joaat("romero");
	iVar1[31] = joaat("blazer");
	iVar1[32] = joaat("blazer2");
	iVar1[33] = 0;
	iVar1[34] = joaat("bodhi2");
	iVar1[35] = joaat("boxville2");
	iVar1[36] = joaat("bulldozer");
	iVar1[37] = joaat("caddy");
	iVar1[38] = joaat("caddy2");
	iVar1[39] = 0;
	iVar1[40] = joaat("camper");
	iVar1[41] = 0;
	iVar1[42] = joaat("tiptruck");
	iVar1[43] = joaat("tourbus");
	iVar1[44] = joaat("towtruck");
	iVar1[45] = joaat("towtruck2");
	iVar1[46] = joaat("tractor");
	iVar1[47] = joaat("tractor2");
	iVar1[48] = joaat("utillitruck");
	iVar1[49] = joaat("utillitruck2");
	iVar1[50] = joaat("utillitruck3");
	iVar1[51] = joaat("bfinjection");
	iVar1[52] = 0;
	iVar1[53] = joaat("dloader");
	iVar1[54] = joaat("docktug");
	iVar1[55] = joaat("dump");
	iVar1[56] = joaat("gburrito");
	iVar1[57] = joaat("handler");
	iVar1[58] = joaat("hauler");
	iVar1[59] = joaat("journey");
	iVar1[60] = joaat("lguard");
	iVar1[61] = 0;
	iVar1[62] = 0;
	iVar1[63] = 0;
	iVar1[64] = joaat("mixer");
	iVar1[65] = 0;
	iVar1[66] = joaat("rhino");
	iVar1[67] = joaat("cutter");
	iVar1[68] = joaat("pounder");
	iVar1[69] = joaat("tiptruck2");
	iVar1[70] = joaat("mixer2");
	iVar1[71] = joaat("tiptruck2");
	iVar1[72] = joaat("rubble");
	iVar1[73] = joaat("scrap");
	iVar1[74] = joaat("armytanker");
	iVar1[75] = joaat("barracks2");
	iVar1[76] = 0;
	iVar1[77] = joaat("airbus");
	iVar1[78] = joaat("coach");
	iVar1[79] = joaat("pbus");
	iVar1[80] = joaat("riot");
	iVar1[81] = 0;
	iVar1[82] = joaat("stockade3");
	iVar1[83] = joaat("flatbed");
	iVar1[84] = joaat("boxville");
	iVar1[85] = joaat("burrito2");
	iVar1[86] = joaat("burrito3");
	iVar1[87] = joaat("burrito4");
	iVar1[88] = joaat("rumpo");
	iVar1[89] = joaat("speedo2");
	iVar1[90] = 0;
	iVar1[91] = 0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam0 == iVar1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if ((((__LIB_9__.func_238(iParam0) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_360(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0x3366B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		bVar6 = false;
		__LIB_24__.func_738((*uParam0)[*iParam2], &bVar6);
		if (BitTest(uParam4, bVar6))
		{
			__LIB_24__.func_740((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			__LIB_24__.func_739((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_361()//Position - 0x33753
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 1);
	if (Local_49.f_109 == 0)
	{
		MISC::SET_BIT(&iVar0, 2);
	}
	if (__LIB_0__.func_368(128))
	{
		MISC::SET_BIT(&iVar0, 4);
		if (!__LIB_0__.func_176(24))
		{
			MISC::SET_BIT(&iVar0, 21);
		}
	}
	else
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	if (__LIB_0__.func_368(131))
	{
		MISC::SET_BIT(&iVar0, 6);
	}
	else
	{
		MISC::SET_BIT(&iVar0, 5);
	}
	if (__LIB_0__.func_368(137))
	{
		MISC::SET_BIT(&iVar0, 9);
	}
	else if (__LIB_0__.func_368(126))
	{
		MISC::SET_BIT(&iVar0, 8);
	}
	else
	{
		MISC::SET_BIT(&iVar0, 7);
	}
	if (__LIB_0__.func_368(137))
	{
		if (!__LIB_0__.func_368(135) && !__LIB_0__.func_368(136))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		if (__LIB_0__.func_368(135))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
		else
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		if (__LIB_0__.func_368(136))
		{
			MISC::SET_BIT(&iVar0, 12);
		}
		else
		{
			MISC::SET_BIT(&iVar0, 14);
		}
	}
	if (!__LIB_0__.func_176(20))
	{
		MISC::SET_BIT(&iVar0, 15);
	}
	if (!__LIB_0__.func_176(46))
	{
		MISC::SET_BIT(&iVar0, 16);
	}
	if (__LIB_0__.func_368(129) && !BitTest(iVar0, 9))
	{
		MISC::SET_BIT(&iVar0, 17);
	}
	if (__LIB_0__.func_176(40) && !__LIB_0__.func_176(43))
	{
		MISC::SET_BIT(&iVar0, 18);
	}
	if (__LIB_0__.func_176(43) && !__LIB_0__.func_176(42))
	{
		MISC::SET_BIT(&iVar0, 19);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_13__.func_208(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
		{
			MISC::SET_BIT(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_362(int iParam0)//Position - 0x954D7
{
	if (!__LIB_0__.func_39(6) && !__LIB_0__.func_39(7))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(__LIB_11__.func_91()))
	{
		return 0;
	}
	if (!PED::IS_PED_GROUP_MEMBER(__LIB_11__.func_91(), __LIB_0__.func_399()))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(__LIB_11__.func_90()))
	{
		if (!PED::IS_PED_GROUP_MEMBER(__LIB_11__.func_90(), __LIB_0__.func_399()))
		{
			return 0;
		}
	}
	if (!__LIB_10__.func_861(Global_96177[iParam0 /*2*/]))
	{
		return 0;
	}
	return 1;
}

int func_363(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x28219
{
	struct<4> Var0;
	struct<4> Var1[2];
	int iVar2;
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		StringCopy(&Var0, "FTX_", 16);
		StringConCat(&Var0, __LIB_24__.func_735(iParam0), 16);
		StringConCat(&Var0, "_", 16);
		switch (iParam1)
		{
			case 0:
				StringConCat(&Var0, "LOST", 16);
				break;
			case 1:
				StringConCat(&Var0, "LATE", 16);
				break;
			case 2:
				StringConCat(&Var0, "HOSP", 16);
				break;
			case 3:
				StringConCat(&Var0, "PDIED", 16);
				break;
			case 4:
				StringConCat(&Var0, "PBUST", 16);
				break;
			default:
				StringConCat(&Var0, "X", 16);
				StringIntConCat(&Var0, iParam1, 16);
				*uParam3 = { Var0 };
				return 0;
				break;
		}
		Var1[0 /*4*/] = { Var0 };
		StringConCat(&(Var1[0 /*4*/]), "a", 16);
		Var1[1 /*4*/] = { Var0 };
		StringConCat(&(Var1[1 /*4*/]), "b", 16);
		if (iParam2 == -1)
		{
			iVar2 = __LIB_24__.func_730(iParam0);
			if (__LIB_24__.func_736(&(Var1[0 /*4*/]), iVar2))
			{
				iParam2 = 1;
			}
			else if (__LIB_24__.func_736(&(Var1[1 /*4*/]), iVar2))
			{
				iParam2 = 0;
			}
			else
			{
				iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			}
		}
		*uParam3 = { Var1[iParam2 /*4*/] };
		return 1;
	}
	return 0;
}

void func_364(int* iParam0)//Position - 0x2B2AE
{
	if (__LIB_0__.func_516(iParam0))
	{
		if (__LIB_0__.func_515(iParam0))
		{
			iParam0->f_1 = (__LIB_0__.func_484(BitTest(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			MISC::CLEAR_BIT(iParam0, 2);
		}
	}
}

void func_365(int iParam0, int iParam1, int iParam2)//Position - 0x2B809
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_20__.func_260(iParam0);
	iVar1 = __LIB_20__.func_260(iParam1);
	iVar2 = __LIB_9__.func_604(iVar0, iVar1);
	Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 = iParam2;
	if (Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 < 0)
	{
		Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 = 0;
	}
	if (Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 > 100)
	{
		Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 = 100;
	}
}

int func_366(int iParam0, var uParam1)//Position - 0x2CF8A
{
	int iVar0;
	iVar0 = __LIB_20__.func_260(Global_96175);
	if (Global_113386.f_18103.f_175[iParam0 /*19*/].f_1 == iVar0)
	{
		*uParam1 = Global_113386.f_18103.f_175[iParam0 /*19*/];
		return 1;
	}
	if (Global_113386.f_18103.f_175[iParam0 /*19*/] == iVar0)
	{
		*uParam1 = Global_113386.f_18103.f_175[iParam0 /*19*/].f_1;
		return 1;
	}
	*uParam1 = 7;
	return 0;
}

int func_367(int iParam0, bool bParam1, bool bParam2)//Position - 0x3494A
{
	int iVar0;
	if (bParam2)
	{
		return Global_262145.f_18799 /* Tunable: BIKER_DEATHMATCH_RP_REWARD */;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12979 /* Tunable: GB_SIGHTSEER_DEFAULT_RP_REWARD */) * Global_262145.f_12984 /* Tunable: GB_SIGHTSEER_EVENT_MULTIPLIER_RP */));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12929 /* Tunable: GB_ASSAULT_DEFAULT_RP_REWARD */) * Global_262145.f_12934 /* Tunable: GB_ASSAULT_EVENT_MULTIPLIER_RP */));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12956 /* Tunable: GB_BOSSVSBOSSDM_DEFAULT_RP_REWARD */) * Global_262145.f_12960 /* Tunable: GB_BOSSVSBOSSDM_EVENT_MULTIPLIER_RP */));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12969 /* Tunable: GB_HUNTBOSS_DEFAULT_RP_REWARD */) * Global_262145.f_12973 /* Tunable: GB_HUNTBOSS_EVENT_MULTIPLIER_RP */));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12991 /* Tunable: GB_YACHTATTACK_DEFAULT_RP_REWARD */) * Global_262145.f_12996 /* Tunable: GB_YACHTATTACK_EVENT_MULTIPLIER_RP */));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13028 /* Tunable: GB_MOSTWANTED_RP_REWARD_WINNER */) * Global_262145.f_13031 /* Tunable: GB_MOSTWANTED_EVENT_MULTIPLIER_RP */));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13074 /* Tunable: GB_SMASHANDGRAB_RP_REWARD_WINNER */) * Global_262145.f_13077 /* Tunable: GB_SMASHANDGRAB_EVENT_MULTIPLIER_RP */));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13064 /* Tunable: GB_PROTECTIONRACKET_RP_REWARD_WINNER */) * Global_262145.f_13067 /* Tunable: GB_PROTECTIONRACKET_EVENT_MULTIPLIER_RP */));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13019 /* Tunable: GB_FINDERS_KEEPERS_RP_REWARD_WINNER */) * Global_262145.f_13022 /* Tunable: GB_FINDERS_KEEPERS_EVENT_MULTIPLIER_RP */));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13039 /* Tunable: GB_POINTTOPOINT_RP_REWARD_WINNER */) * Global_262145.f_13044 /* Tunable: GB_POINTTOPOINT_EVENT_MULTIPLIER_RP */));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13004 /* Tunable: GB_CARJACKING_RP_REWARD_WINNER */) * Global_262145.f_13007 /* Tunable: GB_CARJACKING_EVENT_MULTIPLIER_RP */));
		case 170:
			return Global_262145.f_15507 /* Tunable: EXEC_AIRFREIGHT_RP_REWARD */;
		case 171:
			return Global_262145.f_15566 /* Tunable: EXEC_CASHING_RP_REWARD */;
		case 172:
			return Global_262145.f_15582 /* Tunable: EXEC_SALVAGE_RP_REWARD */;
		case 173:
			return Global_262145.f_15525 /* Tunable: EXEC_FGOODS_RP_REWARD */;
		case 166:
			return 0;
		case 167:
			return Global_262145.f_17605 /* Tunable: 1726921260 */;
		case 168:
			iVar0 = Global_262145.f_17604 /* Tunable: -183629958 */;
			if ((__LIB_1__.func_145() && Global_262145.f_32963 /* Tunable: -1292749091 */) && !__LIB_0__.func_137(32350, -1))
			{
				iVar0 = (iVar0 * Global_262145.f_32979 /* Tunable: -631336731 */);
			}
			return iVar0;
		case 179:
			return Global_262145.f_18807 /* Tunable: BIKER_JOUST_RP_REWARD */;
		case 180:
			return Global_262145.f_18682 /* Tunable: BIKER_GUNRUNNING_RP_REWARD */;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18690 /* Tunable: BIKER_POW_RP_REWARD */;
		case 185:
			return Global_262145.f_18699 /* Tunable: BIKER_GUNS_FOR_HIRE_RP_REWARD */;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18895 /* Tunable: BIKER_RACE_RP_REWARD */;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18912 /* Tunable: BIKER_HIT_AND_RIDE_RP_REWARD */;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18759 /* Tunable: BIKER_JAILBREAK_RP_REWARD */;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18943 /* Tunable: BIKER_SEARCH_AND_DESTROY_RP_REWARD */;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18821 /* Tunable: BIKER_STAND_YOUR_GROUND_RP_REWARD */;
		case 205:
			return Global_262145.f_18930 /* Tunable: BIKER_MISCHIEF_RP_REWARD */;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18788 /* Tunable: BIKER_TORCHED_RP_REWARD */;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18925 /* Tunable: BIKER_WHEELIE_RIDER_RP_REWARD */;
		case 211:
			return Global_262145.f_18889 /* Tunable: BIKER_ON_THE_RUN_RP_REWARD */;
		case 214:
			return Global_262145.f_19483 /* Tunable: IMPEXP_PLOWED_RP_REWARD */;
		case 215:
			return Global_262145.f_19493 /* Tunable: IMPEXP_FULLY_LOADED_RP_REWARD */;
		case 216:
			return Global_262145.f_19503 /* Tunable: IMPEXP_AMPHIBIOUS_ASSAULT_RP_REWARD */;
		case 217:
			return Global_262145.f_19512 /* Tunable: IMPEXP_TRANSPORTER_RP_REWARD */;
		case 218:
			return Global_262145.f_19521 /* Tunable: IMPEXP_FORTIFIED_RP_REWARD */;
		case 219:
			return Global_262145.f_19537 /* Tunable: IMPEXP_VELOCITY_RP_REWARD */;
		case 178:
			if (__LIB_1__.func_145())
			{
				return Global_262145.f_19360 /* Tunable: IMPEXP_STEAL_CEO_RP */;
			}
			else if (bParam1)
			{
				return Global_262145.f_19361 /* Tunable: IMPEXP_STEAL_ASSOCIATE_RP */;
			}
			break;
		case 188:
			if (__LIB_1__.func_145())
			{
				return Global_262145.f_19444 /* Tunable: IMPEXP_SELL_CEO_RP */;
			}
			else if (bParam1)
			{
				return Global_262145.f_19445 /* Tunable: IMPEXP_SELL_ASSOCIATE_RP */;
			}
			break;
		case 225:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21569 /* Tunable: GR_RESUPPLY_RP_EARNED_CEO */;
				}
				else
				{
					return Global_262145.f_21570 /* Tunable: GR_RESUPPLY_RP_EARNED_VIP */;
				}
			}
			else if (__LIB_4__.func_728())
			{
				return Global_262145.f_21571 /* Tunable: GR_RESUPPLY_RP_EARNED_MC_LEADER */;
			}
			break;
		case 226:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					iVar0 = Global_262145.f_21547 /* Tunable: GR_SELL_RP_EARNED_CEO */;
				}
				else
				{
					iVar0 = Global_262145.f_21548 /* Tunable: GR_SELL_RP_EARNED_VIP */;
				}
			}
			else if (__LIB_4__.func_728())
			{
				iVar0 = Global_262145.f_21549 /* Tunable: GR_SELL_RP_EARNED_MC_LEADER */;
			}
			if ((__LIB_1__.func_145() && Global_262145.f_32970 /* Tunable: 1598011694 */) && !__LIB_0__.func_137(32357, -1))
			{
				iVar0 = (iVar0 * Global_262145.f_32986 /* Tunable: -1052635986 */);
			}
			return iVar0;
			break;
		case 227:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21561 /* Tunable: GR_DEFEND_RP_EARNED_CEO */;
				}
				else
				{
					return Global_262145.f_21562 /* Tunable: GR_DEFEND_RP_EARNED_VIP */;
				}
			}
			else if (__LIB_4__.func_728())
			{
				return Global_262145.f_21563 /* Tunable: GR_DEFEND_RP_EARNED_MC_LEADER */;
			}
			break;
		case 229:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22734 /* Tunable: 1458037811 */;
				}
				else
				{
					return Global_262145.f_22735 /* Tunable: 603306374 */;
				}
			}
			else if (__LIB_4__.func_728())
			{
				return Global_262145.f_22736 /* Tunable: -1639668705 */;
			}
			break;
		case 230:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22832 /* Tunable: SMUG_SELL_RP_EARNED_CEO */;
				}
				else
				{
					return Global_262145.f_22833 /* Tunable: SMUG_SELL_RP_EARNED_VIP */;
				}
			}
			else if (__LIB_4__.func_728())
			{
				return Global_262145.f_22834 /* Tunable: SMUG_SELL_RP_EARNED_MC_LEADER */;
			}
			break;
		case 233:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23312 /* Tunable: -4626313 */;
				}
				else
				{
					return Global_262145.f_23313 /* Tunable: 942419845 */;
				}
			}
			else if (__LIB_4__.func_728())
			{
				return Global_262145.f_23311 /* Tunable: -1014903589 */;
			}
			break;
		case 241:
			return Global_262145.f_24647 /* Tunable: -203340822 */;
		case 242:
			return Global_262145.f_24643 /* Tunable: 1230342870 */;
		case 244:
			return Global_262145.f_24644 /* Tunable: 968100900 */;
		case 248:
			return Global_262145.f_24646 /* Tunable: -423913502 */;
		case 239:
			return Global_262145.f_24648 /* Tunable: -935764824 */;
		case 240:
			return Global_262145.f_24649 /* Tunable: -54427531 */;
		case 237:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					iVar0 = Global_262145.f_24482 /* Tunable: 1085938514 */;
				}
				else
				{
					iVar0 = Global_262145.f_24483 /* Tunable: 263628155 */;
				}
			}
			else if (__LIB_4__.func_728())
			{
				iVar0 = Global_262145.f_24484 /* Tunable: 1312243956 */;
			}
			if ((__LIB_1__.func_145() && Global_262145.f_32969 /* Tunable: 2010545334 */) && !__LIB_0__.func_137(32356, -1))
			{
				iVar0 = (iVar0 * Global_262145.f_32985 /* Tunable: -1372236592 */);
			}
			return iVar0;
			break;
		case 238:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24600 /* Tunable: 1782673288 */;
				}
				else
				{
					return Global_262145.f_24601 /* Tunable: 1766328749 */;
				}
			}
			else if (__LIB_4__.func_728())
			{
				return Global_262145.f_24602 /* Tunable: 1471086652 */;
			}
			break;
		case 249:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24616 /* Tunable: -1955364748 */;
				}
				else
				{
					return Global_262145.f_24617 /* Tunable: -880863222 */;
				}
			}
			else if (__LIB_4__.func_728())
			{
				return Global_262145.f_24618 /* Tunable: 1576676738 */;
			}
			break;
		case 243:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_27081 /* Tunable: VC_WORK_RP_REWARD_CEO */;
				}
				else
				{
					return Global_262145.f_27082 /* Tunable: VC_WORK_RP_REWARD_VIP */;
				}
			}
			else if (__LIB_4__.func_728())
			{
				return Global_262145.f_27081 /* Tunable: VC_WORK_RP_REWARD_CEO */;
			}
			break;
		case 158:
			if (__LIB_1__.func_145() && !__LIB_4__.func_728())
			{
				if (__LIB_2__.func_144(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (__LIB_4__.func_728())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_368(int iParam0, int iParam1)//Position - 0x35428
{
	int iVar0;
	if (iParam1 != __LIB_0__.func_160())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (__LIB_2__.func_69(iParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			Global_2815059.f_5195.f_388 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

Vector3 func_369(struct<3> Param0, float fParam1, float fParam2)//Position - 0x11B2E
{
	struct<3> Var0;
	Var0 = { 0f, 1f, 0f };
	__LIB_0__.func_298(Var0, fParam1);
	Var0.f_0 = (Var0.f_0 * fParam2);
	Var0.f_1 = (Var0.f_1 * fParam2);
	Var0.f_2 = (Var0.f_2 * fParam2);
	Var0 = { Var0 + Param0 };
	return Var0;
}

int func_370(bool bParam0, bool bParam1)//Position - 0x49041
{
	int iVar0;
	int iVar1;
	iVar0 = 116;
	if ((!bParam1 && __LIB_0__.func_738(bParam0)) && !__LIB_2__.func_858(bParam0))
	{
		iVar0 = __LIB_0__.func_969();
	}
	iVar1 = __LIB_6__.func_409(bParam0);
	if (!iVar1 == -1)
	{
		return __LIB_6__.func_890(iVar1);
	}
	return iVar0;
}

int func_371()//Position - 0x497F0
{
	switch (__LIB_3__.func_803(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		default:
	}
	switch (__LIB_1__.func_182(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (__LIB_2__.func_858(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_3__.func_803(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (__LIB_2__.func_297(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_372()//Position - 0x4C264
{
	if ((((!__LIB_0__.func_190() && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_1__.func_159())
	{
		return 1;
	}
	return 0;
}

int func_373(bool bParam0)//Position - 0x14F441
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0) && bParam0 != PLAYER::PLAYER_ID())
	{
		if (__LIB_3__.func_813(bParam0) && !__LIB_3__.func_998(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x206742
{
	int iVar0;
	int iVar1;
	if (!__LIB_7__.func_225(iParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (__LIB_1__.func_264(iVar1, 0, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iParam0, false))
					{
						__LIB_1__.func_114(__LIB_1__.func_276(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
	else
	{
		if (bParam3)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, true);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		if (bParam2)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_375(struct<14> Param0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x208D3B
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var2;
	struct<19> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<15> Var6;
	struct<17> Var7;
	struct<17> Var8;
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam1;
			STATS::PLAYSTATS_BC_CAR_JACKING(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
		{
			Var2 = { Param0 };
			Var2.f_14 = Global_1943929.f_14;
			Var2.f_15 = iParam1;
			Var2.f_16 = iParam2;
			Var2.f_17 = iParam3;
			Var2.f_18 = iParam4;
			STATS::PLAYSTATS_BC_SMASH_AND_GRAB(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
		{
			Var3 = { Param0 };
			Var3.f_14 = Global_1943929.f_14;
			Var3.f_15 = iParam1;
			Var3.f_16 = iParam2;
			Var3.f_17 = iParam3;
			Var3.f_18 = iParam4;
			STATS::PLAYSTATS_BC_PROTECTION_RACKET(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
		{
			Var4 = { Param0 };
			Var4.f_14 = Global_1943929.f_14;
			Var4.f_15 = iParam1;
			STATS::PLAYSTATS_BC_MOST_WANTED(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var5 = { Param0 };
			Var5.f_14 = Global_1943929.f_14;
			Var5.f_15 = iParam1;
			Var5.f_16 = iParam2;
			STATS::PLAYSTATS_BC_FINDERS_KEEPERS(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
		{
			Var6 = { Param0 };
			Var6.f_14 = Global_1943929.f_14;
			STATS::PLAYSTATS_BC_POINT_TO_POINT(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
		{
			Var7 = { Param0 };
			Var7.f_14 = iParam1;
			Var7.f_15 = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(iParam2));
			Var7.f_16 = iParam3;
			STATS::PLAYSTATS_BC_CASHING(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
		{
			Var8 = { Param0 };
			Var8.f_14 = iParam1;
			Var8.f_15 = iParam2;
			Var8.f_16 = Global_1943929.f_14;
			STATS::PLAYSTATS_BC_SALVAGE(&Var8);
		}
	}
	__LIB_11__.func_74();
}

int func_376()//Position - 0xCDB0
{
	switch (__LIB_24__.func_769(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		default:
	}
	return 0;
}

int func_377(bool bParam0)//Position - 0xD309
{
	if (!bParam0 == __LIB_0__.func_160())
	{
		if (__LIB_4__.func_682(bParam0, 1))
		{
			return Global_2680265.f_818.f_11[__LIB_0__.func_603(bParam0)];
		}
	}
	return -1;
}

char* func_378()//Position - 0xE6E7
{
	switch (__LIB_24__.func_769(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1" /* GXT: Total Value */;
			break;
		case 160:
			return "BD_SORT_4" /* GXT: Packages Collected */;
			break;
		case 154:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
		case 155:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
	}
	return "";
}

void func_379(int iParam0, float fParam1)//Position - 0x119AB
{
	int iVar0;
	iVar0 = __LIB_24__.func_763(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		__LIB_21__.func_123();
	}
}

int func_380(int iParam0)//Position - 0x46477
{
	return __LIB_0__.func_787(__LIB_24__.func_769(iParam0));
}

int func_381(int iParam0, bool bParam1, bool bParam2)//Position - 0x52433
{
	int iVar0;
	int iVar1;
	if (__LIB_2__.func_491(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_18216 /* Tunable: BIKER_MC_POINTS_FAIL_MISSION */;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_18215 /* Tunable: -782187318 */;
		}
		else
		{
			iVar0 = Global_262145.f_18197 /* Tunable: BIKER_MC_POINTS_PASS_MISSION */;
		}
		iVar1 = 19;
	}
	else if (__LIB_2__.func_492(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (__LIB_1__.func_266(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_18196 /* Tunable: BIKER_MC_POINTS_WIN_CHALLENGE */;
			iVar1 = 20;
		}
	}
	else if (__LIB_24__.func_772(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_18216 /* Tunable: BIKER_MC_POINTS_FAIL_MISSION */;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_18215 /* Tunable: -782187318 */;
		}
		else
		{
			iVar0 = Global_262145.f_18197 /* Tunable: BIKER_MC_POINTS_PASS_MISSION */;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::PLAYSTATS_EARNED_MC_POINTS(__LIB_1__.func_835(__LIB_0__.func_582()), __LIB_3__.func_639(__LIB_0__.func_582()), __LIB_1__.func_834(), __LIB_1__.func_833(), iVar1, iVar0);
	}
	__LIB_1__.func_832(iVar0);
	__LIB_16__.func_549(iVar0);
	return iVar0;
}

int func_382(var uParam0)//Position - 0x34431
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!__LIB_6__.func_768(iVar2, 0) && !__LIB_6__.func_941(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (__LIB_6__.func_768(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_383()//Position - 0x380E7
{
	if ((__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__.func_190())
	{
		return 1;
	}
	return 0;
}

int func_384()//Position - 0x813EF
{
	if ((((!__LIB_0__.func_190() && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && __LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_1__.func_159())
	{
		return 1;
	}
	return 0;
}

int func_385(int iParam0)//Position - 0xC470A
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (!PED::IS_PED_INJURED(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (!iVar1 == __LIB_0__.func_160())
				{
					if (__LIB_0__.func_154(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

int func_386(int iParam0, int iParam1, int iParam2)//Position - 0xCD2A4
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && PED::IS_PED_A_PLAYER(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && PED::IS_PED_A_PLAYER(iParam2))
	{
		return 0;
	}
	if (__LIB_11__.func_69(ENTITY::GET_ENTITY_MODEL(iParam0)) && ENTITY::GET_ENTITY_POPULATION_TYPE(iParam0) != 7)
	{
		return 1;
	}
	if (__LIB_10__.func_952(iParam1))
	{
		return 1;
	}
	if (__LIB_10__.func_952(iParam2))
	{
		return 1;
	}
	return 0;
}

int func_387()//Position - 0x15AF
{
	switch (__LIB_0__.func_170(__LIB_1__.func_453(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
		case 24:
			return 1;
		default:
	}
	return 0;
}

float func_388(int iParam0, bool bParam1)//Position - 0x2ED4A
{
	return SYSTEM::VDIST(__LIB_0__.func_85(iParam0), __LIB_0__.func_85(bParam1));
	return 0f;
}

void func_389(int iParam0, var uParam1, var uParam2)//Position - 0x3365B
{
	int iVar0;
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (__LIB_10__.func_942(iParam0))
	{
		if (!__LIB_1__.func_145())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12872 /* Tunable: GB_CHALLENGE_GOON_RP_REWARD_PERCENTAGE */;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
	{
		if (__LIB_10__.func_929(iParam0))
		{
			*uParam1 = (Global_262145.f_18658 /* Tunable: -1082665723 */ / 100f);
			*uParam2 = (Global_262145.f_18658 /* Tunable: -1082665723 */ / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24650 /* Tunable: 1063368282 */;
			*uParam2 = Global_262145.f_24650 /* Tunable: 1063368282 */;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24651 /* Tunable: 1249038613 */;
			*uParam2 = Global_262145.f_24651 /* Tunable: 1249038613 */;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24653 /* Tunable: -488524036 */;
			*uParam2 = Global_262145.f_24653 /* Tunable: -488524036 */;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24654 /* Tunable: 787287514 */;
			*uParam2 = Global_262145.f_24654 /* Tunable: 787287514 */;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24655 /* Tunable: 1624617753 */;
			*uParam2 = Global_262145.f_24655 /* Tunable: 1624617753 */;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24656 /* Tunable: 987927512 */;
			*uParam2 = Global_262145.f_24656 /* Tunable: 987927512 */;
		}
		else
		{
			*uParam1 = Global_262145.f_12869 /* Tunable: GB_RIVAL_ORG_CASH_REWARD_PERCENTAGE */;
			*uParam2 = Global_262145.f_12868 /* Tunable: GB_RIVAL_ORG_RP_REWARD_PERCENTAGE */;
		}
	}
	else if (__LIB_10__.func_929(iParam0))
	{
		*uParam1 = (Global_262145.f_18659 /* Tunable: -1704843668 */ / 100f);
		*uParam2 = (Global_262145.f_18659 /* Tunable: -1704843668 */ / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24657 /* Tunable: -1262379258 */;
		*uParam2 = Global_262145.f_24657 /* Tunable: -1262379258 */;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24658 /* Tunable: 1108489437 */;
		*uParam2 = Global_262145.f_24658 /* Tunable: 1108489437 */;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24660 /* Tunable: -989876675 */;
		*uParam2 = Global_262145.f_24660 /* Tunable: -989876675 */;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24661 /* Tunable: -1361915386 */;
		*uParam2 = Global_262145.f_24661 /* Tunable: -1361915386 */;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24662 /* Tunable: -1419284063 */;
		*uParam2 = Global_262145.f_24662 /* Tunable: -1419284063 */;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24663 /* Tunable: 2112977251 */;
		*uParam2 = Global_262145.f_24663 /* Tunable: 2112977251 */;
	}
	else
	{
		*uParam1 = Global_262145.f_12871 /* Tunable: GB_SOLO_CASH_REWARD_PERCENTAGE */;
		*uParam2 = Global_262145.f_12870 /* Tunable: GB_SOLO_RP_REWARD_PERCENTAGE */;
	}
	iVar0 = __LIB_1__.func_301();
	if (iVar0 != __LIB_0__.func_160())
	{
		if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

bool func_390()//Position - 0x51A26
{
	return __LIB_24__.func_784(PLAYER::PLAYER_ID());
}

void func_391(int iParam0, int iParam1)//Position - 0x59D2F
{
	int iVar0;
	if (iParam1 != __LIB_0__.func_160())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (__LIB_3__.func_898(iParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			Global_2815059.f_5195.f_388 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

int func_392(int iParam0)//Position - 0x627CC
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((__LIB_0__.func_674() && !__LIB_1__.func_459()) || __LIB_6__.func_105(PLAYER::PLAYER_ID(), 21)) || __LIB_6__.func_105(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (__LIB_0__.func_649(&(Global_1836844.f_13)))
		{
			if (!__LIB_2__.func_47(&(Global_1836844.f_13), Global_262145.f_14 /* Tunable: FM_EVENT_PASSIVE_COOL_DOWN */, 0))
			{
				return 1;
			}
			__LIB_0__.func_579(&(Global_1836844.f_13));
		}
	}
	else if (BitTest(Global_1892703[iParam0 /*599*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 9);
}

void func_393(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xE9024
{
	StringCopy(sParam1, "FHQ_PROP_ET" /* GXT: AGENCY */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_24__.func_784(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_394()//Position - 0x1306EF
{
	if ((__LIB_0__.func_137(27245, -1) || __LIB_0__.func_738(PLAYER::PLAYER_ID())) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_4__.func_140(PLAYER::PLAYER_ID()))
	{
		if (__LIB_2__.func_192(PLAYER::PLAYER_ID()))
		{
			if (__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0) && __LIB_16__.func_670(PLAYER::PLAYER_ID()))
			{
				if (__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 158 && __LIB_2__.func_234(PLAYER::PLAYER_ID()) == 1)
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else if (!__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
	}
	else if (__LIB_2__.func_192(PLAYER::PLAYER_ID()) || !__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	return 0;
}

void func_395(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x14F1F4
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (BitTest(Global_1946250.f_4, 26))
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	iVar0 = 0;
	if (bParam2 == PLAYER::PLAYER_ID())
	{
		__LIB_3__.func_805(iParam3, 3, !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		__LIB_7__.func_366(iParam3, 3, __LIB_0__.func_833(bParam2));
		bVar1 = (__LIB_0__.func_833(bParam2) && !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		if (bVar1)
		{
			bVar1 = __LIB_7__.func_702(iParam0, PLAYER::PLAYER_ID(), __LIB_6__.func_367()) != false;
		}
		__LIB_3__.func_805(iParam3, 4, bVar1);
		__LIB_7__.func_366(iParam3, 4, bVar1);
	}
	else
	{
		bVar2 = (__LIB_5__.func_711(bParam2) && !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		if (bVar2)
		{
			bVar2 = __LIB_4__.func_85(bParam2) == true;
		}
		__LIB_3__.func_805(iParam3, 3, bVar2);
		__LIB_7__.func_366(iParam3, 3, bVar2);
		__LIB_3__.func_805(iParam3, 4, 0);
		__LIB_7__.func_366(iParam3, 4, 0);
	}
	__LIB_3__.func_805(iParam3, 2, !Global_262145.f_26911 /* Tunable: VC_PENTHOUSE_DISABLE_CASINO */);
	__LIB_7__.func_366(iParam3, 2, !Global_262145.f_26911 /* Tunable: VC_PENTHOUSE_DISABLE_CASINO */);
	__LIB_3__.func_805(iParam3, 5, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
	__LIB_7__.func_366(iParam3, 5, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
	__LIB_3__.func_805(iParam3, 6, 0);
	__LIB_7__.func_366(iParam3, 6, 0);
	__LIB_3__.func_805(iParam3, 7, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
	__LIB_7__.func_366(iParam3, 7, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
	__LIB_3__.func_805(iParam3, 8, 1);
	__LIB_7__.func_366(iParam3, 8, __LIB_7__.func_736());
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 != 0)
	{
		if (iParam3->f_5 == 3)
		{
			if (bParam2 == PLAYER::PLAYER_ID())
			{
				if (!__LIB_0__.func_833(PLAYER::PLAYER_ID()))
				{
					__LIB_1__.func_342("CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */, 0, 0);
				}
				else
				{
					__LIB_1__.func_342("CSNAPT_EXT_F1_H" /* GXT: Go to your Penthouse Garage. */, 0, 0);
				}
			}
			else
			{
				__LIB_1__.func_342("CSNAPT_EXT_F1HB" /* GXT: Go to the Penthouse Garage. */, 0, 0);
			}
		}
		else if (iParam3->f_5 == 0)
		{
			if (iParam1 == 2)
			{
				__LIB_1__.func_342("CSNAPT_EXT_H2" /* GXT: Exit to the Roof Terrace. */, 0, 0);
			}
			else
			{
				__LIB_1__.func_342("CSNAPT_EXT_H" /* GXT: Exit the Penthouse. */, 0, 0);
			}
		}
		else if (iParam3->f_5 == 1)
		{
			__LIB_1__.func_342("CSNAPT_EXT_A_H" /* GXT: All Exit the Penthouse. */, 0, 0);
		}
		else if (iParam3->f_5 == 2)
		{
			__LIB_1__.func_342("CSNAPT_EXT_C_H" /* GXT: Go to the Casino. */, 0, 0);
		}
		else if (iParam3->f_5 == 5)
		{
			__LIB_1__.func_342("CSNAPT_EXT_C_I" /* GXT: Go to the Parking Garage. */, 0, 0);
		}
		else if (iParam3->f_5 == 6)
		{
			__LIB_1__.func_342("CASINO_ENT_F5_H" /* GXT: Exit to the Roof Terrace. */, 0, 0);
		}
		else if (iParam3->f_5 == 7)
		{
			__LIB_1__.func_342("CASINO_ENT_F9_H" /* GXT: Exit to the Roof. */, 0, 0);
		}
		else if (iParam3->f_5 == 4)
		{
			__LIB_1__.func_342("CAS_APT_EXT_F4" /* GXT: All Exit to the Penthouse Garage */, 0, 0);
		}
		else if (iParam3->f_5 == 8)
		{
			if (__LIB_7__.func_439())
			{
				__LIB_1__.func_342("CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */, 0, 0);
			}
			else if (BitTest(Global_1946250.f_4523.f_1, 7))
			{
				__LIB_1__.func_342("CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */, 0, 0);
			}
			else if (__LIB_4__.func_139(PLAYER::PLAYER_ID()))
			{
				__LIB_1__.func_342("CASINO_ENT_F10H" /* GXT: Go to The Music Locker. */, 0, 0);
			}
			else
			{
				__LIB_1__.func_342("CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */, 0, 0);
			}
		}
	}
	else
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	if (__LIB_2__.func_444(0, iParam3) || __LIB_2__.func_444(1, iParam3))
	{
		return;
	}
	else if (__LIB_2__.func_444(2, iParam3))
	{
		__LIB_2__.func_763(123);
		__LIB_7__.func_394(1);
		__LIB_2__.func_548(1);
		__LIB_2__.func_924();
	}
	else if (__LIB_2__.func_444(3, iParam3))
	{
		__LIB_2__.func_447(1);
		__LIB_2__.func_549(iParam0, -1);
		__LIB_7__.func_394(4);
		__LIB_2__.func_548(1);
		__LIB_2__.func_924();
	}
	else if (__LIB_2__.func_444(5, iParam3))
	{
		__LIB_2__.func_763(125);
		__LIB_7__.func_394(0);
		__LIB_2__.func_548(1);
	}
	else if (__LIB_2__.func_444(6, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_4), 30);
	}
	else if (__LIB_2__.func_444(7, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 14);
	}
	else if (__LIB_2__.func_444(8, iParam3))
	{
		__LIB_2__.func_763(146);
		__LIB_7__.func_394(1);
		__LIB_2__.func_548(1);
	}
	else if (__LIB_2__.func_444(4, iParam3))
	{
		__LIB_2__.func_924();
		iVar3 = __LIB_7__.func_702(iParam0, PLAYER::PLAYER_ID(), 0);
		iVar4 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
		__LIB_2__.func_443(iVar3, iParam0, iVar4, 1, 0, 1, 4);
		__LIB_2__.func_447(1);
		__LIB_2__.func_549(iParam0, -1);
		__LIB_7__.func_394(4);
		__LIB_2__.func_548(1);
	}
}

int func_396(var uParam0, int iParam1)//Position - 0x214F26
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(__LIB_10__.func_984(uParam0, iParam1, iVar0)))
		{
			if (!PED::IS_PED_INJURED(__LIB_26__.func_322(uParam0, iParam1, iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_397(bool bParam0)//Position - 0x21A445
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = __LIB_1__.func_182(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = __LIB_3__.func_803(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = __LIB_7__.func_600(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		case 150:
			iVar2 = __LIB_11__.func_75(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		case 237:
			iVar2 = __LIB_10__.func_919(PLAYER::PLAYER_ID());
			if (__LIB_3__.func_154(__LIB_7__.func_706(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		case 250:
			iVar2 = __LIB_10__.func_919(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		case 238:
			iVar2 = __LIB_10__.func_968(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		case 249:
			iVar2 = __LIB_10__.func_968(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		case 239:
			iVar1 = 600;
			break;
		case 240:
			iVar1 = 700;
			break;
		case 241:
			iVar1 = 800;
			break;
		case 242:
			iVar1 = 900;
			break;
		case 244:
			iVar1 = 1100;
			break;
		case 248:
			iVar1 = 1200;
			break;
		case 298:
			iVar1 = 1250;
			break;
		case 299:
			if (__LIB_20__.func_427(PLAYER::PLAYER_ID()) == 0)
			{
				iVar1 = 1300;
			}
			else if (__LIB_20__.func_427(PLAYER::PLAYER_ID()) == 1)
			{
				iVar1 = 1301;
			}
			break;
		case 300:
			if (__LIB_20__.func_426(PLAYER::PLAYER_ID()) == 0)
			{
				iVar1 = 1400;
			}
			break;
		case 301:
			if (__LIB_10__.func_918(PLAYER::PLAYER_ID(), 301) == 0)
			{
				iVar1 = 1500;
			}
			if (__LIB_10__.func_918(PLAYER::PLAYER_ID(), 301) == 1)
			{
				iVar1 = 1501;
			}
			break;
		case 302:
			iVar1 = 1700;
			break;
		case 303:
			iVar1 = 1800;
			break;
	}
	return iVar1;
}

int func_398(bool bParam0)//Position - 0x3F1B8
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = __LIB_2__.func_191(PLAYER::PLAYER_ID());
		if (__LIB_6__.func_108())
		{
			if (__LIB_9__.func_524(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return __LIB_9__.func_524(PLAYER::PLAYER_ID());
}

int func_399(int iParam0)//Position - 0x4F56F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (__LIB_7__.func_246(iVar1, iParam0, 1) && __LIB_6__.func_133(iVar1) == 1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_400(int iParam0)//Position - 0x53EC0
{
	if (Global_1574963)
	{
		if (!__LIB_0__.func_905(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_6__.func_978(PLAYER::PLAYER_ID(), 0) && !__LIB_0__.func_911(PLAYER::PLAYER_ID()))
			{
				if (!BitTest(Global_2621446, 20) || Global_2621446.f_82)
				{
					if (PLAYER::GET_PLAYER_TEAM(iParam0) != -1)
					{
						if (!BitTest(Global_2621446.f_69.f_5, 14) && !BitTest(Global_4718592.f_658[PLAYER::GET_PLAYER_TEAM(iParam0) /*22957*/].f_12180, 6))
						{
							if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iParam0) && !__LIB_0__.func_610(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	return 1;
}

int func_401(int iParam0)//Position - 0xC15D3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	if (__LIB_7__.func_700(iParam0))
	{
		return 5;
	}
	if (__LIB_2__.func_232() && __LIB_2__.func_432(PLAYER::PLAYER_ID(), __LIB_2__.func_433(iParam0)))
	{
		return __LIB_1__.func_48(__LIB_18__.func_516(PLAYER::PLAYER_ID()));
	}
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__.func_432(__LIB_0__.func_582(), __LIB_2__.func_433(iParam0)))
	{
		return __LIB_1__.func_48(__LIB_18__.func_516(__LIB_0__.func_582()));
	}
	if (!__LIB_2__.func_432(PLAYER::PLAYER_ID(), __LIB_2__.func_433(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__.func_264(bVar0, 1, 1) && bVar0 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__.func_432(bVar0, __LIB_2__.func_433(iParam0)))
				{
					Var3 = { __LIB_1__.func_267(bVar0) };
					if (__LIB_0__.func_585(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							return 3;
						}
						else
						{
							iVar1 = 55;
						}
					}
					else
					{
						iVar1 = 55;
					}
				}
			}
			iVar2++;
		}
		if (iVar1 == 55)
		{
			return 55;
		}
	}
	return 4;
}

int func_402(int iParam0, var uParam1)//Position - 0xC8641
{
	int iVar0;
	iVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9;
	if (__LIB_2__.func_459())
	{
		return 0;
	}
	if (Global_1946250.f_506 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_506, 31))
	{
		if (__LIB_4__.func_973(0))
		{
			return 1;
		}
	}
	else
	{
		if (!__LIB_1__.func_264(iVar0, 0, 1))
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 1);
			return 1;
		}
		if (iParam0 != __LIB_7__.func_800(iVar0))
		{
			MISC::SET_BIT(&Global_1946250, 18);
			return 1;
		}
	}
	return 0;
}

void func_403(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12F328
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (BitTest(Global_1946250.f_4, 26))
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	iVar0 = 0;
	if (iParam2 == PLAYER::PLAYER_ID())
	{
		__LIB_3__.func_805(iParam3, 3, !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		__LIB_7__.func_366(iParam3, 3, __LIB_0__.func_833(iParam2));
		bVar1 = (__LIB_0__.func_833(iParam2) && !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		if (bVar1)
		{
			bVar1 = __LIB_22__.func_150(iParam0, PLAYER::PLAYER_ID(), __LIB_6__.func_367()) != false;
		}
		__LIB_3__.func_805(iParam3, 4, bVar1);
		__LIB_7__.func_366(iParam3, 4, bVar1);
	}
	else
	{
		bVar2 = (__LIB_5__.func_711(iParam2) && !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		if (bVar2)
		{
			bVar2 = __LIB_4__.func_85(iParam2) == true;
		}
		__LIB_3__.func_805(iParam3, 3, bVar2);
		__LIB_7__.func_366(iParam3, 3, bVar2);
		__LIB_3__.func_805(iParam3, 4, 0);
		__LIB_7__.func_366(iParam3, 4, 0);
	}
	__LIB_3__.func_805(iParam3, 2, !Global_262145.f_26911 /* Tunable: VC_PENTHOUSE_DISABLE_CASINO */);
	__LIB_7__.func_366(iParam3, 2, !Global_262145.f_26911 /* Tunable: VC_PENTHOUSE_DISABLE_CASINO */);
	__LIB_3__.func_805(iParam3, 5, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
	__LIB_7__.func_366(iParam3, 5, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
	__LIB_3__.func_805(iParam3, 6, 0);
	__LIB_7__.func_366(iParam3, 6, 0);
	__LIB_3__.func_805(iParam3, 7, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
	__LIB_7__.func_366(iParam3, 7, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
	__LIB_3__.func_805(iParam3, 8, 1);
	__LIB_7__.func_366(iParam3, 8, __LIB_7__.func_736());
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 != 0)
	{
		if (iParam3->f_5 == 3)
		{
			if (iParam2 == PLAYER::PLAYER_ID())
			{
				if (!__LIB_0__.func_833(PLAYER::PLAYER_ID()))
				{
					__LIB_1__.func_342("CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */, 0, 0);
				}
				else
				{
					__LIB_1__.func_342("CSNAPT_EXT_F1_H" /* GXT: Go to your Penthouse Garage. */, 0, 0);
				}
			}
			else
			{
				__LIB_1__.func_342("CSNAPT_EXT_F1HB" /* GXT: Go to the Penthouse Garage. */, 0, 0);
			}
		}
		else if (iParam3->f_5 == 0)
		{
			if (iParam1 == 2)
			{
				__LIB_1__.func_342("CSNAPT_EXT_H2" /* GXT: Exit to the Roof Terrace. */, 0, 0);
			}
			else
			{
				__LIB_1__.func_342("CSNAPT_EXT_H" /* GXT: Exit the Penthouse. */, 0, 0);
			}
		}
		else if (iParam3->f_5 == 1)
		{
			__LIB_1__.func_342("CSNAPT_EXT_A_H" /* GXT: All Exit the Penthouse. */, 0, 0);
		}
		else if (iParam3->f_5 == 2)
		{
			__LIB_1__.func_342("CSNAPT_EXT_C_H" /* GXT: Go to the Casino. */, 0, 0);
		}
		else if (iParam3->f_5 == 5)
		{
			__LIB_1__.func_342("CSNAPT_EXT_C_I" /* GXT: Go to the Parking Garage. */, 0, 0);
		}
		else if (iParam3->f_5 == 6)
		{
			__LIB_1__.func_342("CASINO_ENT_F5_H" /* GXT: Exit to the Roof Terrace. */, 0, 0);
		}
		else if (iParam3->f_5 == 7)
		{
			__LIB_1__.func_342("CASINO_ENT_F9_H" /* GXT: Exit to the Roof. */, 0, 0);
		}
		else if (iParam3->f_5 == 4)
		{
			__LIB_1__.func_342("CAS_APT_EXT_F4" /* GXT: All Exit to the Penthouse Garage */, 0, 0);
		}
		else if (iParam3->f_5 == 8)
		{
			if (__LIB_7__.func_439())
			{
				__LIB_1__.func_342("CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */, 0, 0);
			}
			else if (BitTest(Global_1946250.f_4523.f_1, 7))
			{
				__LIB_1__.func_342("CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */, 0, 0);
			}
			else if (__LIB_4__.func_139(PLAYER::PLAYER_ID()))
			{
				__LIB_1__.func_342("CASINO_ENT_F10H" /* GXT: Go to The Music Locker. */, 0, 0);
			}
			else
			{
				__LIB_1__.func_342("CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */, 0, 0);
			}
		}
	}
	else
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	if (__LIB_2__.func_444(0, iParam3) || __LIB_2__.func_444(1, iParam3))
	{
		return;
	}
	else if (__LIB_2__.func_444(2, iParam3))
	{
		__LIB_2__.func_763(123);
		__LIB_7__.func_394(1);
		__LIB_2__.func_548(1);
		__LIB_2__.func_924();
	}
	else if (__LIB_2__.func_444(3, iParam3))
	{
		__LIB_2__.func_447(1);
		__LIB_2__.func_549(iParam0, -1);
		__LIB_7__.func_394(4);
		__LIB_2__.func_548(1);
		__LIB_2__.func_924();
	}
	else if (__LIB_2__.func_444(5, iParam3))
	{
		__LIB_2__.func_763(125);
		__LIB_7__.func_394(0);
		__LIB_2__.func_548(1);
	}
	else if (__LIB_2__.func_444(6, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_4), 30);
	}
	else if (__LIB_2__.func_444(7, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 14);
	}
	else if (__LIB_2__.func_444(8, iParam3))
	{
		__LIB_2__.func_763(146);
		__LIB_7__.func_394(1);
		__LIB_2__.func_548(1);
	}
	else if (__LIB_2__.func_444(4, iParam3))
	{
		__LIB_2__.func_924();
		iVar3 = __LIB_22__.func_150(iParam0, PLAYER::PLAYER_ID(), 0);
		iVar4 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
		__LIB_2__.func_443(iVar3, iParam0, iVar4, 1, 0, 1, 4);
		__LIB_2__.func_447(1);
		__LIB_2__.func_549(iParam0, -1);
		__LIB_7__.func_394(4);
		__LIB_2__.func_548(1);
	}
}

void func_404(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x139FB3
{
	int iVar0;
	if (BitTest(Global_1946250.f_4, 26))
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	iVar0 = 0;
	if (iParam1 == 2)
	{
		__LIB_3__.func_805(iParam3, 0, 0);
		__LIB_3__.func_805(iParam3, 1, 0);
		__LIB_3__.func_805(iParam3, 5, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_3__.func_805(iParam3, 6, !Global_262145.f_26913 /* Tunable: VC_PENTHOUSE_DISABLE_TERRACE */);
		__LIB_3__.func_805(iParam3, 7, 1);
		__LIB_7__.func_366(iParam3, 7, __LIB_7__.func_736());
		iVar0 = 2;
		if (__LIB_2__.func_380())
		{
			if (__LIB_2__.func_379())
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = 5;
			}
			__LIB_3__.func_805(iParam3, 2, 0);
			__LIB_3__.func_805(iParam3, 3, 0);
			__LIB_3__.func_805(iParam3, 4, __LIB_2__.func_379());
			__LIB_7__.func_366(iParam3, 4, __LIB_2__.func_379());
		}
		else
		{
			__LIB_3__.func_805(iParam3, 2, 1);
			__LIB_7__.func_366(iParam3, 2, __LIB_7__.func_730(1));
			__LIB_3__.func_805(iParam3, 3, !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
			__LIB_7__.func_366(iParam3, 3, __LIB_7__.func_730(2));
			__LIB_3__.func_805(iParam3, 4, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
			__LIB_7__.func_366(iParam3, 4, !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */);
		}
	}
	else
	{
		__LIB_3__.func_805(iParam3, 2, 0);
		__LIB_3__.func_805(iParam3, 3, 0);
		__LIB_3__.func_805(iParam3, 4, 0);
		__LIB_3__.func_805(iParam3, 6, 0);
		__LIB_3__.func_805(iParam3, 5, 0);
		__LIB_3__.func_805(iParam3, 7, 0);
		__LIB_7__.func_366(iParam3, 7, 0);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 != 0)
	{
		if (iParam1 == 2)
		{
			if (iParam3->f_5 == 2)
			{
				if (__LIB_4__.func_139(PLAYER::PLAYER_ID()))
				{
					__LIB_1__.func_342("CASINO_ENT_F6_H" /* GXT: Go to your Penthouse. */, 0, 0);
				}
				else
				{
					__LIB_1__.func_342("CASINO_BUY_PROP" /* GXT: Purchase the Penthouse from www.thediamondcasinoandresort.com. */, 0, 0);
				}
			}
			else if (iParam3->f_5 == 3)
			{
				if (__LIB_7__.func_730(2))
				{
					__LIB_1__.func_342("CASINO_ENT_F7_H" /* GXT: Go to your Penthouse Garage. */, 0, 0);
				}
				else
				{
					__LIB_1__.func_342("CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */, 0, 0);
				}
			}
			else if (iParam3->f_5 == 5)
			{
				__LIB_1__.func_342("CASINO_ENT_F5_H" /* GXT: Exit to the Roof Terrace. */, 0, 0);
			}
			else if (iParam3->f_5 == 6)
			{
				__LIB_1__.func_342("CASINO_ENT_F9_H" /* GXT: Exit to the Roof. */, 0, 0);
			}
			else if (iParam3->f_5 == 7)
			{
				if (__LIB_7__.func_439())
				{
					__LIB_1__.func_342("CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */, 0, 0);
				}
				else if (BitTest(Global_1946250.f_4523.f_1, 7))
				{
					__LIB_1__.func_342("CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */, 0, 0);
				}
				else if (__LIB_4__.func_139(PLAYER::PLAYER_ID()))
				{
					__LIB_1__.func_342("CASINO_ENT_F10H" /* GXT: Go to The Music Locker. */, 0, 0);
				}
				else
				{
					__LIB_1__.func_342("CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */, 0, 0);
				}
			}
			else
			{
				__LIB_1__.func_342("CASINO_ENT_F8_H" /* GXT: Go to the Parking Garage. */, 0, 0);
			}
		}
	}
	else
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	if (__LIB_2__.func_444(0, iParam3) || __LIB_2__.func_444(1, iParam3))
	{
		return;
	}
	else if (__LIB_2__.func_444(2, iParam3))
	{
		__LIB_2__.func_447(0);
		__LIB_2__.func_763(124);
		__LIB_7__.func_394(3);
		__LIB_2__.func_548(1);
	}
	else if (__LIB_2__.func_444(3, iParam3))
	{
		__LIB_2__.func_447(1);
		__LIB_2__.func_763(124);
		__LIB_7__.func_394(4);
		__LIB_2__.func_548(1);
	}
	else if (__LIB_2__.func_444(4, iParam3))
	{
		__LIB_2__.func_763(125);
		__LIB_7__.func_394(0);
		__LIB_2__.func_548(1);
	}
	else if (__LIB_2__.func_444(5, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 8);
		MISC::SET_BIT(&(Global_1946250.f_5), 26);
		if (__LIB_28__.func_394())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 20);
		}
	}
	else if (__LIB_2__.func_444(6, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 14);
	}
	else if (__LIB_2__.func_444(7, iParam3))
	{
		__LIB_2__.func_763(146);
		__LIB_7__.func_394(1);
		__LIB_2__.func_548(1);
	}
}

int func_405(var uParam0)//Position - 0x1D356D
{
	bool bVar0;
	if (__LIB_8__.func_646(0))
	{
		return __LIB_1__.func_48(__LIB_18__.func_516(PLAYER::PLAYER_ID()));
	}
	else if (__LIB_6__.func_787(PLAYER::PLAYER_ID(), 0, 0))
	{
		bVar0 = __LIB_0__.func_582();
		return __LIB_1__.func_48(__LIB_18__.func_516(bVar0));
	}
	return 4;
}

void func_406()//Position - 0x20455E
{
	__LIB_24__.func_788(Global_2703735.f_924, -1, 0);
}

bool func_407(var uParam0)//Position - 0x23301
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	iVar0 = uParam0->f_44;
	if (iVar0 == 0)
	{
		return 0;
	}
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		if (__LIB_24__.func_801(uParam0, bVar1, &uVar2))
		{
			iVar3++;
		}
		bVar1++;
	}
	return iVar3 == iVar0;
}

int func_408()//Position - 0x1AE23A
{
	if (Global_1958740 && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || __LIB_0__.func_155(0)))
	{
		return 0;
	}
	if (__LIB_4__.func_735(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_4__.func_721(PLAYER::PLAYER_ID()) == 124 || __LIB_3__.func_900(__LIB_4__.func_721(PLAYER::PLAYER_ID()), 17)) || __LIB_3__.func_900(__LIB_4__.func_721(PLAYER::PLAYER_ID()), 23))
		{
			return 0;
		}
	}
	if ((__LIB_3__.func_870(PLAYER::PLAYER_ID()) || __LIB_5__.func_610(PLAYER::PLAYER_ID())) || __LIB_4__.func_340(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_4__.func_15(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__.func_259(PLAYER::PLAYER_ID()) == 124 || __LIB_3__.func_900(__LIB_1__.func_259(PLAYER::PLAYER_ID()), 23))
		{
			return 0;
		}
	}
	return 1;
}

void func_409(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, var uParam48, var uParam49, var uParam50, var uParam51, int iParam52, int iParam53, int iParam54, int iParam55, bool bParam56)//Position - 0x1FD95C
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__.func_667(2, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__.func_666(2, iVar0);
		Global_1649593.f_2120[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_2120.f_99[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2120.f_260[iVar0] = iParam2;
		Global_1649593.f_2120.f_11[iVar0] = iParam3;
		Global_1649593.f_2120.f_22[iVar0] = iParam4;
		Global_1649593.f_2120.f_33[iVar0] = iParam5;
		Global_1649593.f_2120.f_44[iVar0] = iParam6;
		Global_1649593.f_2120.f_55[iVar0] = iParam7;
		Global_1649593.f_2120.f_66[iVar0] = iParam8;
		Global_1649593.f_2120.f_77[iVar0] = iParam9;
		Global_1649593.f_2120.f_88[iVar0] = iParam10;
		Global_1649593.f_2120.f_282[iVar0] = iParam11;
		Global_1649593.f_2120.f_293[iVar0] = iParam12;
		Global_1649593.f_2120.f_271[iVar0] = iParam13;
		Global_1649593.f_2120.f_315[iVar0] = iParam14;
		Global_1649593.f_2120.f_326[iVar0 /*3*/] = iParam15;
		Global_1649593.f_2120.f_326[iVar0 /*3*/].f_1 = iParam16;
		Global_1649593.f_2120.f_357[iVar0] = iParam17;
		Global_1649593.f_2120.f_368[iVar0] = uParam18;
		Global_1649593.f_2120.f_379[iVar0] = uParam19;
		Global_1649593.f_2120.f_390[iVar0] = uParam20;
		Global_1649593.f_2120.f_401[iVar0] = uParam21;
		Global_1649593.f_2120.f_412[iVar0] = iParam22;
		Global_1649593.f_2120.f_423[iVar0] = iParam23;
		Global_1649593.f_2120.f_434[iVar0] = iParam24;
		Global_1649593.f_2120.f_445[iVar0] = iParam25;
		Global_1649593.f_2120.f_456[iVar0] = iParam26;
		Global_1649593.f_2120.f_467[iVar0] = iParam27;
		Global_1649593.f_2120.f_478[iVar0] = iParam28;
		Global_1649593.f_2120.f_489[iVar0] = iParam29;
		Global_1649593.f_2120.f_500[iVar0] = iParam30;
		Global_1649593.f_2120.f_511[iVar0] = iParam31;
		Global_1649593.f_2120.f_522[iVar0] = iParam32;
		Global_1649593.f_2120.f_533[iVar0] = iParam33;
		Global_1649593.f_2120.f_544[iVar0] = iParam37;
		Global_2825033[iVar0] = iParam38;
		Global_2825044[iVar0] = iParam39;
		Global_2825055[iVar0] = iParam40;
		Global_2825066[iVar0] = iParam41;
		Global_2825077[iVar0] = iParam42;
		Global_2825088[iVar0] = iParam43;
		Global_2825099[iVar0] = iParam44;
		Global_2825110[iVar0] = iParam45;
		Global_1649593.f_2120.f_631[iVar0] = uParam48;
		Global_1649593.f_2120.f_642[iVar0] = uParam49;
		Global_1649593.f_2120.f_653[iVar0] = uParam50;
		Global_1649593.f_2120.f_664[iVar0] = uParam51;
		Global_1649593.f_2120.f_675[iVar0] = iParam52;
		Global_1649593.f_2120.f_686[iVar0] = iParam53;
		Global_1649593.f_2120.f_697[iVar0] = iParam54;
		Global_1649593.f_2120.f_708[iVar0] = iParam55;
		if (bParam56)
		{
			Global_1649593.f_1172 = 0;
		}
		else
		{
			Global_1649593.f_1172 = 1;
		}
		Global_1649593.f_2120.f_576[iVar0] = iParam34;
		if (iParam34 > -1)
		{
			__LIB_10__.func_123(2, iVar0);
		}
		else
		{
			__LIB_10__.func_122(2, iVar0);
		}
		Global_1649593.f_2120.f_587[iVar0] = iParam35;
		Global_1649593.f_2120.f_598[iVar0] = iParam36;
		Global_1649593.f_2120.f_609[iVar0] = iParam46;
		Global_1649593.f_2120.f_620[iVar0] = iParam47;
	}
}

int func_410(var uParam0)//Position - 0x1FDDA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	iVar0 = uParam0->f_44;
	if (iVar0 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar0)
		{
			if (!__LIB_24__.func_801(uParam0, iVar2, &uVar3))
			{
				iVar1++;
			}
			iVar2++;
		}
	}
	return iVar1;
}

void func_411(bool bParam0)//Position - 0x1FE19B
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 > -1)
	{
		if (!BitTest(Global_1892703[iVar0 /*599*/].f_10.f_456, bParam0))
		{
			MISC::SET_BIT(&(Global_1892703[iVar0 /*599*/].f_10.f_456), bParam0);
			__LIB_20__.func_420(1);
		}
	}
}

void func_412(int iParam0)//Position - 0x210C6E
{
	int iVar0;
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_191[iParam0 /*13*/] != 0 && Global_1640656[iParam0] != 0)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1640656[iParam0]);
		if (iVar0 > 1000000)
		{
		}
		else
		{
			__LIB_1__.func_597(__LIB_9__.func_729(iParam0), iVar0, -1, 1, 0);
		}
	}
}

int func_413(int iParam0, int iParam1, int iParam2)//Position - 0x1E9A9
{
	struct<3> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		case 17:
		case 18:
		case 15:
			return 2;
		case 12:
		case 13:
			if (iParam2 != __LIB_0__.func_160())
			{
				if (__LIB_13__.func_258(iParam2, 1))
				{
					Var0 = { __LIB_9__.func_30(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

bool func_414(int iParam0)//Position - 0x7D7EB
{
	return __LIB_1__.func_266(__LIB_0__.func_396(iParam0), 0);
}

int func_415()//Position - 0x7DFD5
{
	if (((((((__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 170 || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 219) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 221) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 220) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 216) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 215) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 214) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (__LIB_6__.func_984(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_416()//Position - 0x7F9AB
{
	if ((__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__.func_190())
	{
		return 1;
	}
	return 0;
}

int func_417(int iParam0, int iParam1)//Position - 0xBCB59
{
	int iVar0;
	int iVar1;
	if (__LIB_9__.func_5(iParam1, iParam0))
	{
		iVar0 = __LIB_14__.func_50(iParam0, iParam1);
		iVar1 = __LIB_3__.func_974(iParam0);
		if (iVar1 == 2)
		{
			return (111 - iVar0);
		}
		else if (iVar1 == 1)
		{
			return (42 - iVar0);
		}
		else
		{
			return (16 - iVar0);
		}
	}
	return 0;
}

int func_418(var uParam0)//Position - 0x7F2E
{
	if ((((!__LIB_0__.func_190() && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1)) && (!__LIB_1__.func_159() || uParam0))
	{
		return 1;
	}
	return 0;
}

int func_419(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x2073E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_1__.func_301() == __LIB_0__.func_582())
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Param0.f_0))
	{
		if (ENTITY::IS_ENTITY_A_PED(Param0.f_0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_0);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (__LIB_1__.func_264(iVar1, 0, 1))
				{
					if (__LIB_4__.func_682(iVar1, 1) && __LIB_2__.func_191(iVar1) == __LIB_1__.func_301())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Param0.f_1))
							{
								iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar2))
								{
									iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
									if (__LIB_1__.func_264(iVar3, 0, 1) && iVar3 == PLAYER::PLAYER_ID())
									{
										if (!__LIB_3__.func_898(iVar1, iVar3))
										{
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_420(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x41D36
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__.func_667(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__.func_666(7, iVar0);
		Global_1649593.f_4659[iVar0] = uParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = uParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = uParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

int func_421()//Position - 0x426C8
{
	if (((((!__LIB_0__.func_190() && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_1__.func_159()) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 1;
	}
	return 0;
}

int func_422()//Position - 0x16E7B5
{
	return __LIB_4__.func_924(func_4469());
}

int func_423()//Position - 0x16EC0E
{
	return __LIB_4__.func_923(func_4505(), 1, 0);
}

int func_424()//Position - 0x177BA2
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 1;
	}
	if (!__LIB_4__.func_715())
	{
		return 1;
	}
	if (__LIB_1__.func_241() || func_4678())
	{
		return 1;
	}
	return 0;
}

int func_425()//Position - 0x18963C
{
	return __LIB_7__.func_297(func_4813(), 1, 0);
}

int func_426(struct<12> Param0, var uParam1)//Position - 0x1FD994
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)) && !ENTITY::IS_ENTITY_DEAD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1), false))
	{
		if (__LIB_24__.func_175(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
		{
			iVar0 = WEAPON::GET_WEAPON_DAMAGE_TYPE(Param0.f_6);
			iVar1 = Param0.f_6;
			iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
			if (((Param0.f_11 || iVar1 == joaat("WEAPON_UNARMED")) || iVar2 == joaat("GROUP_MELEE")) || iVar0 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_427(int iParam0, float fParam1)//Position - 0x1FE257
{
	int iVar0;
	iVar0 = __LIB_24__.func_763(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		__LIB_20__.func_415();
	}
}

int func_428()//Position - 0x4AC8B
{
	if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_429(var uParam0, var uParam1, int iParam2)//Position - 0x6C0
{
	int iVar0;
	var uVar1;
	int iVar2;
	uVar1 = __LIB_24__.func_847(iParam2);
	iVar2 = *uParam0;
	iVar0 = uParam1;
	while (iVar0 <= (iVar2 - 2))
	{
		*(uParam0[iVar0 /*2*/]) = { *(uParam0[iVar0 + 1 /*2*/]) };
		iVar0++;
	}
	(*uParam0)[(iVar2 - 1) /*2*/] = __LIB_0__.func_160();
	(uParam0[(iVar2 - 1) /*2*/])->f_1 = uVar1;
}

int func_430(bool bParam0, bool bParam1)//Position - 0x504BB
{
	if (__LIB_4__.func_682(bParam0, 1) && __LIB_4__.func_682(bParam1, 1))
	{
		return (__LIB_24__.func_848(bParam0) == __LIB_2__.func_191(bParam1) || __LIB_24__.func_848(bParam1) == __LIB_2__.func_191(bParam0));
	}
	return 0;
}

void func_431(int iParam0, int iParam1)//Position - 0x33937
{
	int iVar0;
	if (iParam1 != __LIB_0__.func_160())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (__LIB_2__.func_69(iParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			Global_2815059.f_5195.f_388 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

void func_432(int* iParam0)//Position - 0x380DE
{
	int iVar0;
	iVar0 = __LIB_0__.func_396(PLAYER::PLAYER_ID());
	if (BitTest(*iParam0, 1))
	{
		if (!BitTest(*iParam0, 5))
		{
			if (BitTest(*iParam0, 2))
			{
				if (!BitTest(*iParam0, 4))
				{
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
				}
			}
			if (!BitTest(*iParam0, 6))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(__LIB_10__.func_944(iVar0)))
				{
					MISC::SET_BIT(iParam0, 6);
				}
			}
			if (BitTest(*iParam0, 6))
			{
				if (!BitTest(*iParam0, 7))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT(__LIB_11__.func_56(iVar0)))
					{
						MISC::SET_BIT(iParam0, 7);
					}
				}
				if (BitTest(*iParam0, 7))
				{
					MISC::SET_BIT(iParam0, 5);
				}
			}
		}
	}
}

void func_433(struct<3> Param0, float fParam1, int iParam2)//Position - 0x397C1
{
	__LIB_2__.func_307(Param0, fParam1, iParam2);
}

char* func_434()//Position - 0x467EB
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_0__.func_603(PLAYER::PLAYER_ID());
	if (iVar0 != __LIB_0__.func_160())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((__LIB_0__.func_163(iVar0, 28) || __LIB_0__.func_163(PLAYER::PLAYER_ID(), 28)) || __LIB_24__.func_771(iVar0)) && !__LIB_24__.func_770(iVar0))
			{
				return __LIB_25__.func_971(iVar0, 0);
			}
			if (!__LIB_0__.func_53() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return __LIB_25__.func_971(iVar0, 0);
			}
		}
		sVar1 = __LIB_1__.func_192(&(Global_1892703[iVar0 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return __LIB_25__.func_971(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_435(var uParam0)//Position - 0x282F
{
	int iVar0;
	iVar0 = uParam0->f_266;
	if (__LIB_24__.func_803(uParam0, iVar0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_436(var uParam0, int iParam1)//Position - 0x2850
{
	int iVar0;
	if (__LIB_24__.func_803(uParam0, iParam1, 1, 0))
	{
		iVar0 = 0;
	}
	else if (__LIB_24__.func_803(uParam0, iParam1, 0, 1))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_437(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, var uParam12, int iParam13, bool bParam14, int iParam15, char* sParam16, int iParam17, int iParam18, int iParam19, int iParam20)//Position - 0x4B3CB
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_6__.func_987(0) == 0)
	{
		return;
	}
	__LIB_1__.func_451();
	iVar1 = 0;
	if ((((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || Global_2726607[4] != iParam3) || *uParam12)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = iParam3;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { __LIB_1__.func_450(1, sVar0) };
		}
		if (fParam4 > 0f)
		{
			__LIB_18__.func_254(-1, &(Global_2726613[0 /*16*/]), -1, 109, 9, 1, sParam11, 1, fParam4, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[1] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { __LIB_1__.func_450(2, sVar0) };
		}
		if (fParam5 > 0f)
		{
			__LIB_18__.func_254(-1, &(Global_2726613[1 /*16*/]), -1, 108, 8, 1, sParam11, 1, fParam5, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam19, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[2] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { __LIB_1__.func_450(3, sVar0) };
		}
		if (fParam6 > 0f)
		{
			__LIB_18__.func_254(-1, &(Global_2726613[2 /*16*/]), -1, 107, 7, 1, sParam11, 1, fParam6, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam20, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[3] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[3]);
			Global_2726613[3 /*16*/] = { __LIB_1__.func_450(4, sVar0) };
		}
		if (fParam7 > 0f)
		{
			__LIB_18__.func_254(-1, &(Global_2726613[3 /*16*/]), -1, 4, 6, 1, sParam11, 1, fParam7, 0, 0, 4, 0, 0, 0, 0, 0, 0, iParam20, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam14)
	{
		__LIB_18__.func_254(-1, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, -1, 1, 5, 0, sParam11, 1, fParam8, 1, iParam15, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam17)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != __LIB_0__.func_160())
			{
				if (__LIB_6__.func_991(PLAYER::PLAYER_ID()) == 0)
				{
					__LIB_18__.func_254(-1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 5, 1, sParam11, 1, fParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		case 1:
			if (__LIB_6__.func_991(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_18__.func_254(-1, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 5, 0, sParam11, 1, fParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 2:
			if (__LIB_6__.func_991(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_18__.func_254(-1, "HUD_UBEST" /* GXT: YOUR BEST */, -1, 1, 5, 0, sParam11, 1, fParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_0__.func_786(sParam16))
	{
		sVar2 = sParam16;
	}
	__LIB_6__.func_929(iParam10, sVar2, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
	*uParam12 = 0;
	__LIB_1__.func_428();
}

void func_438(var uParam0, bool bParam1)//Position - 0x52943
{
	var uVar0;
	int iVar1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(__LIB_10__.func_983(uParam0, bParam1)))
	{
		uVar0 = __LIB_10__.func_983(uParam0, bParam1);
		__LIB_1__.func_46(&uVar0);
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(__LIB_10__.func_984(uParam0, bParam1, iVar1)))
		{
			uVar0 = __LIB_10__.func_984(uParam0, bParam1, iVar1);
			__LIB_1__.func_46(&uVar0);
		}
		iVar1++;
	}
}

int func_439(bool bParam0)//Position - 0xDA7FB
{
	if (__LIB_4__.func_340(bParam0) || __LIB_4__.func_721(PLAYER::PLAYER_ID()) == 154)
	{
		return !__LIB_4__.func_122(bParam0);
	}
	return 0;
}

void func_440(var uParam0)//Position - 0x11545D
{
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		if (Global_2726605 == 0)
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				STREAMING::STOP_PLAYER_SWITCH();
				__LIB_0__.func_708(0);
				*uParam0 = 2;
				return;
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1577840))
				{
					if (STREAMING::IS_ENTITY_FOCUS(Global_1577840))
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (STREAMING::IS_ENTITY_FOCUS(PLAYER::PLAYER_PED_ID()))
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 100f, 0))
				{
					Global_2726605 = 1;
					__LIB_17__.func_455(&Global_2727072);
					*uParam0 = 2;
					return;
				}
				else
				{
					*uParam0 = 2;
					return;
				}
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				*uParam0 = 2;
				return;
			}
		}
		else
		{
			if ((!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED()) || __LIB_24__.func_881(&Global_2727072, 30000, 1))
			{
				Global_2726605 = 0;
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				__LIB_0__.func_708(0);
				*uParam0 = 1;
				return;
			}
			*uParam0 = 2;
			return;
		}
	}
}

int func_441()//Position - 0x12620E
{
	if ((__LIB_27__.func_822() || !__LIB_4__.func_139(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_4523.f_1, 7))
	{
		return 0;
	}
	return 1;
}

char* func_442(bool bParam0, int iParam1)//Position - 0x13753A
{
	if (bParam0)
	{
		switch (iParam1)
		{
			case 0:
				return "CASINO_ENT_F0_H" /* GXT: Enter the Casino. */;
			case 1:
				return "CASINO_ENT_F1_H" /* GXT: Enter your Penthouse. */;
			case 2:
				return "CASINO_ENT_F2_H" /* GXT: Enter your Penthouse Garage. */;
			case 3:
				return "CASINO_ENT_F3_H" /* GXT: Enter the Parking Garage. */;
			case 4:
				return "CASINO_ENT_F10E" /* GXT: Enter The Music Locker. */;
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				return "CASINO_BUY_PROP" /* GXT: Purchase the Penthouse from www.thediamondcasinoandresort.com. */;
			case 2:
				return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
			case 4:
				if (__LIB_27__.func_822())
				{
					return "CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */;
				}
				else if (BitTest(Global_1946250.f_4523.f_1, 7))
				{
					return "CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */;
				}
				return "CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */;
				break;
			}
	}
	return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
}

void func_443(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x15AF54
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		if (!__LIB_4__.func_155(PLAYER::PLAYER_ID(), __LIB_3__.func_103(iParam0)) && !__LIB_4__.func_155(__LIB_0__.func_582(), __LIB_3__.func_103(iParam0)))
		{
			bVar1 = false;
			iVar2 = 0;
			while (iVar2 < 32)
			{
				bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__.func_264(bVar0, 1, 1) && bVar0 != PLAYER::PLAYER_ID())
				{
					if ((((__LIB_4__.func_155(bVar0, __LIB_3__.func_103(iParam0)) && __LIB_4__.func_154(bVar0, 0)) && __LIB_4__.func_154(bVar0, 1)) && __LIB_4__.func_154(bVar0, 4)) && func_4294(bVar0, 11, 1))
					{
						Var3 = { __LIB_1__.func_267(bVar0) };
						if (__LIB_0__.func_585(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "NIGHTCLUB_F_BLIP" /* GXT: Friend's Nightclub */);
							}
							else
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
				iVar2++;
			}
			if (bVar1)
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "NIGHTCLUB_R_BLIP" /* GXT: Rival's Nightclub */);
			}
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_614" /* GXT: Nightclub Property */);
		}
	}
}

int func_444(bool bParam0)//Position - 0x15FBC0
{
	if (!BitTest(Global_1578980, bParam0))
	{
		return 0;
	}
	if (__LIB_1__.func_7(&Global_1578981))
	{
		if (__LIB_24__.func_878(&Global_1578981, 300000, 0))
		{
			MISC::CLEAR_BIT(&Global_1578980, bParam0);
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_445(var uParam0, var uParam1)//Position - 0x197B05
{
	uParam0->f_22.f_89[0] = 0;
	uParam0->f_22.f_89[1] = 0;
	uParam0->f_22.f_89[2] = 0;
	uParam0->f_22.f_89[3] = 0;
	Global_1946250.f_3621[0] = -1;
	Global_1946250.f_3621[1] = -1;
	Global_1946250.f_3621[2] = -1;
	Global_1946250.f_3621[3] = -1;
	__LIB_6__.func_404(&(uParam0->f_22.f_94));
	__LIB_17__.func_455(&(uParam0->f_22.f_101));
	__LIB_3__.func_343(0);
	MISC::CLEAR_BIT(&Global_1946250, 10);
	__LIB_3__.func_429(0);
	if (!__LIB_3__.func_317(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
		}
	}
	if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
	}
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	MISC::CLEAR_BIT(&(Global_1946250.f_506), 1);
	MISC::CLEAR_BIT(&Global_1946250, 25);
	MISC::CLEAR_BIT(&Global_1946250, 23);
	MISC::CLEAR_BIT(&Global_1946250, 24);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_105))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_22.f_105));
	}
	__LIB_3__.func_442(0);
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_290))
	{
		Global_2815059.f_290 = 0;
	}
	uParam0->f_22.f_217 = 0;
	__LIB_3__.func_441(0);
	MISC::CLEAR_BIT(&(Global_1946250.f_1), 2);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		NETWORK::NETWORK_SET_ENTITY_CAN_BLEND(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("oppressor2")))
		{
			if (__LIB_3__.func_997(PLAYER::PLAYER_ID(), -1))
			{
				VEHICLE::SET_DISABLE_HOVER_MODE_FLIGHT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
	{
		NETWORK::NETWORK_SET_ENTITY_CAN_BLEND(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true);
	}
	__LIB_3__.func_440(0);
	__LIB_3__.func_316(0);
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 23))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 23);
	}
	Global_2787785 = 0;
	if (__LIB_2__.func_715())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		__LIB_2__.func_714(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(false);
		}
	}
}

void func_446(var uParam0, var uParam1)//Position - 0x1AD3A9
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_171[0]))
	{
		ENTITY::DELETE_ENTITY(&(uParam0->f_22.f_171[0]));
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_171[1]))
	{
		ENTITY::DELETE_ENTITY(&(uParam0->f_22.f_171[1]));
	}
	if (__LIB_3__.func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == __LIB_3__.func_433(PLAYER::PLAYER_ID()))
			{
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Global_2815059.f_304[0], 0f);
			}
		}
	}
	__LIB_3__.func_312(0);
	__LIB_3__.func_429(0);
	__LIB_3__.func_510(0);
	__LIB_3__.func_509(0);
	__LIB_3__.func_508(0);
	__LIB_3__.func_507(0);
	__LIB_3__.func_506(0);
	__LIB_3__.func_505(0);
	__LIB_3__.func_504(0);
	__LIB_17__.func_455(&(uParam0->f_22.f_103));
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 23))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 23);
	}
	if (uParam0->f_399)
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523), 3);
		uParam0->f_399 = 0;
		__LIB_17__.func_455(&(uParam0->f_397));
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(false);
		}
	}
}

int func_447(int iParam0)//Position - 0x1E3389
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__.func_625(iParam0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_278 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
	if (iVar1 != __LIB_0__.func_160())
	{
		if (Global_1853348[iVar1 /*834*/].f_267.f_278 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6 == iParam0)
	{
		return 1;
	}
	if (__LIB_4__.func_21(PLAYER::PLAYER_ID(), 0) || (__LIB_6__.func_445(PLAYER::PLAYER_ID()) && __LIB_0__.func_170(__LIB_4__.func_721(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (__LIB_4__.func_27(PLAYER::PLAYER_ID()) || (__LIB_6__.func_445(PLAYER::PLAYER_ID()) && __LIB_0__.func_170(__LIB_4__.func_721(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (__LIB_3__.func_942(PLAYER::PLAYER_ID()) || (__LIB_6__.func_445(PLAYER::PLAYER_ID()) && __LIB_0__.func_170(__LIB_4__.func_721(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (__LIB_4__.func_969(PLAYER::PLAYER_ID()) || (__LIB_6__.func_445(PLAYER::PLAYER_ID()) && __LIB_0__.func_170(__LIB_4__.func_721(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (__LIB_4__.func_968(PLAYER::PLAYER_ID()) || (__LIB_6__.func_445(PLAYER::PLAYER_ID()) && __LIB_0__.func_170(__LIB_4__.func_721(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

void func_448(var uParam0, struct<6> Param1, var uParam2, var uParam3)//Position - 0x17AE0
{
	__LIB_24__.func_808(uParam0);
	if (uParam0->f_44 != Param1.f_0)
	{
		uParam0->f_44 = Param1.f_0;
	}
	if (uParam0->f_44.f_1 != Param1.f_1)
	{
		uParam0->f_44.f_1 = Param1.f_1;
	}
	if (uParam0->f_44.f_2 != Param1.f_2)
	{
		uParam0->f_44.f_2 = Param1.f_2;
	}
	if (uParam0->f_44.f_4 != Param1.f_4)
	{
		uParam0->f_44.f_4 = Param1.f_4;
	}
	if (!__LIB_0__.func_78(uParam0->f_44.f_5, Param1.f_5, 0))
	{
		if (!__LIB_0__.func_78(Param1.f_5, 0f, 0f, 0f, 0))
		{
			uParam0->f_44.f_5 = { Param1.f_5 };
		}
	}
	if (Param1.f_3 == 1)
	{
		if (!BitTest(uParam0->f_20, 3))
		{
			MISC::SET_BIT(&(uParam0->f_20), 3);
		}
	}
}

int func_449(var uParam0, bool bParam1)//Position - 0x4F685
{
	var uVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(__LIB_24__.func_811(uParam0, bParam1)))
	{
		return NETWORK::NET_TO_OBJ(__LIB_24__.func_811(uParam0, bParam1));
	}
	return uVar0;
}

void func_450(bool bParam0)//Position - 0x4FB43
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 > -1)
	{
		if (BitTest(Global_1892703[iVar0 /*599*/].f_10.f_456, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_1892703[iVar0 /*599*/].f_10.f_456), bParam0);
			__LIB_20__.func_420(0);
		}
	}
}

void func_451(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, var uParam12, int iParam13, bool bParam14, int iParam15, char* sParam16, int iParam17, int iParam18, int iParam19, int iParam20)//Position - 0x6815D
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_6__.func_987(0) == 0)
	{
		return;
	}
	__LIB_1__.func_451();
	iVar1 = 0;
	if ((((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || Global_2726607[4] != iParam3) || *uParam12)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = iParam3;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { __LIB_1__.func_450(1, sVar0) };
		}
		if (fParam4 > 0f)
		{
			__LIB_18__.func_254(-1, &(Global_2726613[0 /*16*/]), -1, 109, 9, 1, sParam11, 1, fParam4, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[1] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { __LIB_1__.func_450(2, sVar0) };
		}
		if (fParam5 > 0f)
		{
			__LIB_18__.func_254(-1, &(Global_2726613[1 /*16*/]), -1, 108, 8, 1, sParam11, 1, fParam5, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam19, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[2] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { __LIB_1__.func_450(3, sVar0) };
		}
		if (fParam6 > 0f)
		{
			__LIB_18__.func_254(-1, &(Global_2726613[2 /*16*/]), -1, 107, 7, 1, sParam11, 1, fParam6, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam20, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[3] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[3]);
			Global_2726613[3 /*16*/] = { __LIB_1__.func_450(4, sVar0) };
		}
		if (fParam7 > 0f)
		{
			__LIB_18__.func_254(-1, &(Global_2726613[3 /*16*/]), -1, 4, 6, 1, sParam11, 1, fParam7, 0, 0, 4, 0, 0, 0, 0, 0, 0, iParam20, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam14)
	{
		__LIB_18__.func_254(-1, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, -1, 1, 5, 0, sParam11, 1, fParam8, 1, iParam15, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam17)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != __LIB_0__.func_160())
			{
				if (__LIB_28__.func_392(PLAYER::PLAYER_ID()) == 0)
				{
					__LIB_18__.func_254(-1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 5, 1, sParam11, 1, fParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		case 1:
			if (__LIB_28__.func_392(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_18__.func_254(-1, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 5, 0, sParam11, 1, fParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 2:
			if (__LIB_28__.func_392(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_18__.func_254(-1, "HUD_UBEST" /* GXT: YOUR BEST */, -1, 1, 5, 0, sParam11, 1, fParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_0__.func_786(sParam16))
	{
		sVar2 = sParam16;
	}
	__LIB_6__.func_929(iParam10, sVar2, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
	*uParam12 = 0;
	__LIB_1__.func_428();
}

void func_452(int* iParam0, int iParam1)//Position - 0x6E0A3
{
	if (iParam0->f_66.f_1 == 0)
	{
		if (iParam0->f_26 != 0.5f || iParam0->f_26.f_1 != 0.5f)
		{
			iParam0->f_26 = 0.5f;
			iParam0->f_26.f_1 = 0.5f;
			iParam0->f_35 = 0.499f;
			iParam0->f_35.f_1 = 0.499f;
		}
		else
		{
			iParam0->f_26 = (0.5f + MISC::GET_RANDOM_FLOAT_IN_RANGE((-0.0007f * IntToFloat(iParam1)), (0.0007f * IntToFloat(iParam1))));
			iParam0->f_26.f_1 = (0.5f + MISC::GET_RANDOM_FLOAT_IN_RANGE((-0.0007f * IntToFloat(iParam1)), (0.0007f * IntToFloat(iParam1))));
			iParam0->f_35 = (iParam0->f_26 - 0.001f);
			iParam0->f_35.f_1 = (iParam0->f_26.f_1 - 0.001f);
		}
		__LIB_0__.func_580(&(iParam0->f_66), 0, 0);
	}
	else if (__LIB_2__.func_47(&(iParam0->f_66), (100 - (20 * iParam1)), 0))
	{
		__LIB_0__.func_579(&(iParam0->f_66));
	}
}

void func_453(var uParam0)//Position - 0x6EC9D
{
	uParam0->f_1[0] = MISC::GET_RANDOM_INT_IN_RANGE(60, 300);
	if (__LIB_0__.func_502())
	{
		uParam0->f_1[1] = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_1[0] + 45, uParam0->f_1[0] + 155 + 1);
		uParam0->f_1[2] = MISC::GET_RANDOM_INT_IN_RANGE((uParam0->f_1[0] - 155), (uParam0->f_1[0] - 45) + 1);
	}
	else
	{
		uParam0->f_1[2] = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_1[0] + 45, uParam0->f_1[0] + 155 + 1);
		uParam0->f_1[1] = MISC::GET_RANDOM_INT_IN_RANGE((uParam0->f_1[0] - 155), (uParam0->f_1[0] - 45) + 1);
	}
	if (uParam0->f_1[1] < 0)
	{
		uParam0->f_1[1] = (360 + uParam0->f_1[1]);
	}
	else if (uParam0->f_1[1] >= 360)
	{
		uParam0->f_1[1] = (uParam0->f_1[1] - 360);
	}
	if (uParam0->f_1[2] < 0)
	{
		uParam0->f_1[2] = (360 + uParam0->f_1[2]);
	}
	else if (uParam0->f_1[2] >= 360)
	{
		uParam0->f_1[2] = (uParam0->f_1[2] - 360);
	}
}

void func_454(int iParam0, char[4] cParam1)//Position - 0x764BC
{
	struct<13> Var0;
	struct<35> Var1;
	StringCopy(cParam1, "", 16);
	Var0 = { __LIB_1__.func_267(iParam0) };
	if (__LIB_0__.func_53())
	{
		if (__LIB_0__.func_585(Var0))
		{
			if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return;
			}
		}
	}
	else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
	{
		return;
	}
	if (__LIB_0__.func_797(&Var0))
	{
		Var1 = { __LIB_6__.func_962(iParam0) };
		__LIB_1__.func_380(&Var1, cParam1);
	}
}

int func_455(int iParam0)//Position - 0x104182
{
	if ((__LIB_3__.func_996(PLAYER::PLAYER_ID()) && BitTest(Global_1946250.f_506, 31)) && iParam0 != func_2988(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_456(var uParam0, bool bParam1)//Position - 0x19E9F9
{
	struct<13> Var0;
	struct<13> Var1;
	int iVar2;
	if (bParam1 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (__LIB_1__.func_425(PLAYER::PLAYER_ID(), 1) && !__LIB_3__.func_999(PLAYER::PLAYER_ID(), bParam1))
	{
		return 0;
	}
	if (__LIB_2__.func_465(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 0;
	}
	Var0 = { __LIB_1__.func_267(bParam1) };
	Var1 = { __LIB_1__.func_267(PLAYER::PLAYER_ID()) };
	iVar2 = __LIB_2__.func_180(&Var1);
	if (iVar2 == -1 || iVar2 != __LIB_2__.func_180(&Var0))
	{
		if (!NETWORK::NETWORK_IS_FRIEND(&Var0))
		{
			if (!__LIB_3__.func_999(PLAYER::PLAYER_ID(), bParam1))
			{
				return 0;
			}
		}
	}
	if (__LIB_4__.func_958(PLAYER::PLAYER_ID()))
	{
		if (__LIB_19__.func_488(PLAYER::PLAYER_ID(), bParam1, 0, 1) || __LIB_3__.func_340())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_457(var uParam0, bool bParam1)//Position - 0x1AF8D2
{
	if (__LIB_4__.func_972(PLAYER::PLAYER_ID()))
	{
		if (__LIB_19__.func_488(PLAYER::PLAYER_ID(), bParam1, 0, 1) || __LIB_3__.func_70())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_458(var uParam0, bool bParam1)//Position - 0x1BEFAD
{
	if (__LIB_4__.func_972(PLAYER::PLAYER_ID()))
	{
		if (__LIB_19__.func_488(PLAYER::PLAYER_ID(), bParam1, 0, 1) || __LIB_3__.func_70())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_459(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x1DE31D
{
	*uParam3 = 1;
	if (bParam2)
	{
		StringCopy(sParam1, __LIB_4__.func_779(iParam0, 1), 64);
	}
	else
	{
		StringCopy(sParam1, "ciPI_TYPE_INVITE_TO_SIMPLE_INTERIOR - FACTORY", 64);
	}
	if (((__LIB_7__.func_501(2) && (BitTest(Global_1946250.f_506, 0) || BitTest(Global_1946250.f_506, 2))) && func_443()) && !__LIB_7__.func_379(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

float func_460(struct<3> Param0, bool bParam1, int iParam2)//Position - 0x20283D
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 999999.9f;
	if (__LIB_1__.func_264(bParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!bParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (__LIB_1__.func_264(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(bParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1))
					{
						if (!__LIB_3__.func_898(iVar3, bParam1))
						{
							if (Global_2680265.f_261[iVar2])
							{
								fVar1 = SYSTEM::VDIST(Global_2680265.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

int func_461(int iParam0, bool bParam1)//Position - 0x205E40
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	fVar2 = 999999.9f;
	iVar3 = -1;
	Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar4 = iVar0;
		if (!iParam0 == bVar4)
		{
			if (__LIB_1__.func_264(bVar4, bParam1, 1))
			{
				if (__LIB_3__.func_898(iParam0, bVar4))
				{
					Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar4), false) };
					fVar1 = SYSTEM::VDIST(Var5, Var6);
					if (fVar1 < fVar2)
					{
						iVar3 = iVar0;
						fVar2 = fVar1;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_462(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x458F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (iParam1 == __LIB_0__.func_160())
	{
		return;
	}
	iVar2 = *uParam0;
	if (iParam3 == 3 || iParam3 == 4)
	{
		iVar3 = 0;
		while (iVar3 <= (iVar2 - 1))
		{
			if ((*uParam0)[iVar3 /*2*/] == iParam1)
			{
				bVar4 = true;
				if (iParam2 > (uParam0[iVar3 /*2*/])->f_1)
				{
					if (iParam3 == 4)
					{
						iParam3 = 5;
					}
					else
					{
						iParam3 = 0;
					}
				}
				else if (iParam2 < (uParam0[iVar3 /*2*/])->f_1)
				{
					if (iParam3 == 4)
					{
						iParam3 = 1;
					}
					else
					{
						iParam3 = 2;
					}
				}
				else
				{
					return;
				}
				iVar3 = iVar2;
			}
			iVar3++;
		}
		if (!bVar4)
		{
			iParam3 = 0;
		}
	}
	if (iParam3 == 2 || iParam3 == 5)
	{
		iVar0 = 0;
		while (iVar0 <= (iVar2 - 1))
		{
			if (!bVar1)
			{
				if ((*uParam0)[iVar0 /*2*/] == iParam1)
				{
					(uParam0[iVar0 /*2*/])->f_1 = iParam2;
					bVar1 = true;
				}
			}
			else if (iParam3 == 2)
			{
				if (iParam2 < (uParam0[iVar0 /*2*/])->f_1)
				{
					*(uParam0[(iVar0 - 1) /*2*/]) = { *(uParam0[iVar0 /*2*/]) };
					(*uParam0)[iVar0 /*2*/] = iParam1;
					(uParam0[iVar0 /*2*/])->f_1 = iParam2;
				}
			}
			else if (iParam2 > (uParam0[iVar0 /*2*/])->f_1)
			{
				*(uParam0[(iVar0 - 1) /*2*/]) = { *(uParam0[iVar0 /*2*/]) };
				(*uParam0)[iVar0 /*2*/] = iParam1;
				(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = (iVar2 - 1);
		while (iVar0 >= 0)
		{
			if (!bVar1)
			{
				if ((*uParam0)[iVar0 /*2*/] == iParam1)
				{
					(uParam0[iVar0 /*2*/])->f_1 = iParam2;
					bVar1 = true;
				}
			}
			else if (iParam3 == 0)
			{
				if (iParam2 > (uParam0[iVar0 /*2*/])->f_1)
				{
					*(uParam0[iVar0 + 1 /*2*/]) = { *(uParam0[iVar0 /*2*/]) };
					(*uParam0)[iVar0 /*2*/] = iParam1;
					(uParam0[iVar0 /*2*/])->f_1 = iParam2;
				}
			}
			else if (iParam3 == 1)
			{
				if (iParam2 < (uParam0[iVar0 /*2*/])->f_1)
				{
					*(uParam0[iVar0 + 1 /*2*/]) = { *(uParam0[iVar0 /*2*/]) };
					(*uParam0)[iVar0 /*2*/] = iParam1;
					(uParam0[iVar0 /*2*/])->f_1 = iParam2;
				}
			}
			iVar0 = (iVar0 + -1);
		}
	}
	if (!bVar1)
	{
		__LIB_24__.func_888(uParam0, iParam1, iParam2);
	}
}

void func_463()//Position - 0xBBA28
{
	if (__LIB_0__.func_494() || __LIB_1__.func_175())
	{
		__LIB_0__.func_748();
		__LIB_24__.func_898();
	}
}

int func_464(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8C48B
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__.func_709(iVar0, 14, func_1427(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_465(var uParam0)//Position - 0x203C9F
{
	if (__LIB_24__.func_94())
	{
		return 1;
	}
	if ((__LIB_18__.func_631(PLAYER::PLAYER_ID(), 0) && __LIB_3__.func_803(PLAYER::PLAYER_ID()) != 153) && __LIB_3__.func_803(PLAYER::PLAYER_ID()) != 191)
	{
		if (!__LIB_24__.func_766(0))
		{
			return 1;
		}
	}
	if (!__LIB_6__.func_184())
	{
		return 0;
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (!HUD::IS_PAUSE_MENU_ACTIVE() && PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				uParam0->f_1 = 1;
			}
			break;
		case 1:
			if (!PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				uParam0->f_1 = 2;
			}
			break;
		case 2:
			HUD::SET_WARNING_MESSAGE("GB_SPEC_WAR" /* GXT: Are you sure you want to quit spectating? */, 18, 0, false, -1, 0, 0, true, 0);
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					uParam0->f_1 = 0;
				}
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					uParam0->f_1 = 3;
					return 1;
				}
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

bool func_466()//Position - 0xAE44
{
	return (__LIB_0__.func_697() && func_229(__LIB_1__.func_301()));
}

int func_467()//Position - 0x3D026
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_190())
	{
		return 1;
	}
	return 0;
}

int func_468(int iParam0)//Position - 0x31E1E
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && __LIB_3__.func_154(func_325(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0)//Position - 0x3ACE7
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (__LIB_4__.func_973(1) && !func_220(1))
			{
				if (__LIB_2__.func_456(__LIB_0__.func_582()))
				{
					return 1;
				}
			}
			break;
	}
	if (__LIB_0__.func_684(iParam0) == 0)
	{
		if (__LIB_4__.func_973(1) && !func_220(1))
		{
			if (__LIB_2__.func_456(__LIB_0__.func_582()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_470(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, var uParam12, int iParam13, bool bParam14, int iParam15, char* sParam16, int iParam17, int iParam18, int iParam19, int iParam20)//Position - 0x3DFC0
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_6__.func_987(0) == 0)
	{
		return;
	}
	__LIB_1__.func_451();
	iVar1 = 0;
	if ((((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || Global_2726607[4] != iParam3) || *uParam12)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = iParam3;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { __LIB_1__.func_450(1, sVar0) };
		}
		if (iParam4 > 0f)
		{
			__LIB_6__.func_986(-1, &(Global_2726613[0 /*16*/]), -1, 109, 9, 1, sParam11, 1, iParam4, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[1] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { __LIB_1__.func_450(2, sVar0) };
		}
		if (iParam5 > 0f)
		{
			__LIB_6__.func_986(-1, &(Global_2726613[1 /*16*/]), -1, 108, 8, 1, sParam11, 1, iParam5, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam19, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[2] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { __LIB_1__.func_450(3, sVar0) };
		}
		if (iParam6 > 0f)
		{
			__LIB_6__.func_986(-1, &(Global_2726613[2 /*16*/]), -1, 107, 7, 1, sParam11, 1, iParam6, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam20, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[3] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[3]);
			Global_2726613[3 /*16*/] = { __LIB_1__.func_450(4, sVar0) };
		}
		if (iParam7 > 0f)
		{
			__LIB_6__.func_986(-1, &(Global_2726613[3 /*16*/]), -1, 4, 6, 1, sParam11, 1, iParam7, 0, 0, 4, 0, 0, 0, 0, 0, 0, iParam20, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam14)
	{
		__LIB_6__.func_986(-1, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, -1, 1, 5, 0, sParam11, 1, iParam8, 1, iParam15, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam17)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != __LIB_0__.func_160())
			{
				if (__LIB_6__.func_991(PLAYER::PLAYER_ID()) == 0)
				{
					__LIB_6__.func_986(-1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 5, 1, sParam11, 1, iParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		case 1:
			if (__LIB_6__.func_991(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_6__.func_986(-1, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 5, 0, sParam11, 1, iParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 2:
			if (__LIB_6__.func_991(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_6__.func_986(-1, "HUD_UBEST" /* GXT: YOUR BEST */, -1, 1, 5, 0, sParam11, 1, iParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_0__.func_786(sParam16))
	{
		sVar2 = sParam16;
	}
	__LIB_6__.func_929(iParam10, sVar2, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
	*uParam12 = 0;
	__LIB_1__.func_428();
}

int func_471()//Position - 0x49C
{
	return Global_262145.f_13000 /* Tunable: GB_CARJACKING_DELIVERY_AREAS_ACTIVE */;
}

void func_472(int iParam0)//Position - 0x4727F
{
	MISC::CLEAR_BIT(&uLocal_176, iParam0);
}

void func_473()//Position - 0x37CB6
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
}

int func_474()//Position - 0x4B56E
{
	return Local_508.f_0;
}

int func_475()//Position - 0x2323
{
	return (__LIB_14__.func_813() - 10000);
}

int func_476()//Position - 0x2983
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
	switch (iVar0)
	{
		case 0:
			return 28;
		case 1:
			return 23;
		case 2:
			return 90;
		case 3:
			return 55;
		case 4:
			return 76;
		case 5:
			return 4;
		case 6:
			return 19;
		case 7:
			return 50;
		case 8:
			return 82;
		case 9:
			return 42;
		case 10:
			return 65;
		case 11:
			return 87;
		case 12:
			return 59;
		case 13:
			return 48;
		case 14:
			return 96;
		case 15:
			return 52;
		case 16:
			return 73;
		case 17:
			return 67;
		case 18:
			return 15;
		case 19:
			return 93;
		case 20:
			return 34;
		case 21:
			return 32;
		case 22:
			return 2;
		case 23:
			return 12;
		case 24:
			return 18;
		case 25:
			return 70;
		case 26:
			return 27;
		case 27:
			return 7;
		case 28:
			return 61;
		case 29:
			return 80;
		case 30:
			return 43;
		case 31:
			return 38;
		default:
	}
	return 38;
}

Vector3 func_477(var uParam0)//Position - 0x718B9
{
	int iVar0;
	iVar0 = uParam0;
	return Global_32338[iVar0 /*23*/][0 /*3*/];
}

int func_478(int iParam0)//Position - 0x718D1
{
	switch (iParam0)
	{
		case 0:
			return 59;
		case 1:
			return 60;
		case 2:
			return 61;
		case 3:
			return 62;
		case 4:
			return 63;
		default:
	}
	return 59;
}

int func_479(int iParam0)//Position - 0x72B36
{
	if (iParam0 == joaat("xm_prop_auto_salvage_stromberg") || iParam0 == joaat("xm_prop_x17_bag_med_01a"))
	{
		return 1200;
	}
	return 100;
}

Vector3 func_480(bool bParam0, int iParam1)//Position - 0x72CE8
{
	switch (iParam1)
	{
		case joaat("insurgent3"):
		case joaat("limo2"):
			switch (bParam0)
			{
				case 0:
					return 1f, -2f, -0.1f;
				case 1:
					return -1f, -2f, -0.1f;
				case 2:
					return 1f, -2f, -0.1f;
				case 3:
					return -1f, -2f, -0.1f;
				default:
			}
			break;
		case joaat("issi3"):
		case joaat("panto"):
		case joaat("raptor"):
			switch (bParam0)
			{
				case 0:
					return 0.5f, 0f, -0.1f;
				case 1:
					return -0.5f, 0f, -0.1f;
				case 2:
					return 0.5f, 0f, -0.1f;
				case 3:
					return -0.5f, 0f, -0.1f;
				default:
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			return 1f, 0f, -0.1f;
		case 1:
			return -1f, 0f, -0.1f;
		case 2:
			return 1f, 0f, -0.1f;
		case 3:
			return -1f, 0f, -0.1f;
		default:
	}
	return 0f, -1f, -0.1f;
}

int func_481(int iParam0, int iParam1)//Position - 0x73007
{
	if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("insurgent2") || ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("burrito"))
	{
		return 1;
	}
	return 0;
}

void func_482(int iParam0)//Position - 0x7CA1A
{
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
	PHYSICS::ACTIVATE_PHYSICS(iParam0);
	ENTITY::SET_ENTITY_DYNAMIC(iParam0, true);
}

float func_483(int iParam0)//Position - 0x7DF35
{
	switch (iParam0)
	{
		case joaat("mogul"):
			return 0.5f;
		default:
	}
	return 0.3f;
}

int func_484(int iParam0)//Position - 0x92D2B
{
	switch (iParam0)
	{
		case 6:
		case 1:
			return 1;
		default:
	}
	return 0;
}

int func_485()//Position - 0x93451
{
	return 200;
}

int func_486(int iParam0)//Position - 0x990B8
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 6, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 7, false))
				{
					return 1;
				}
			}
			else if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
			{
				return 1;
			}
			else if (VEHICLE::IS_BIG_VEHICLE(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 2, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 3, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_487()//Position - 0x99A3D
{
	return 10f, 10f, 10f;
}

int func_488()//Position - 0xA7C15
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			return joaat("WEAPON_CARBINERIFLE");
		case 1:
			return joaat("WEAPON_PUMPSHOTGUN");
		case 2:
			return joaat("WEAPON_PISTOL");
		default:
	}
	return joaat("WEAPON_PISTOL");
}

int func_489(bool bParam0)//Position - 0xA8820
{
	return 26;
}

bool func_490(int iParam0, int iParam1)//Position - 0xA882A
{
	return ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam0), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iParam0), iParam1, false));
}

float func_491(int iParam0)//Position - 0xA900A
{
	if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return 0.19f;
	}
	return 1f;
}

Vector3 func_492(int iParam0)//Position - 0xA9025
{
	if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_493(int iParam0)//Position - 0xA9040
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a"))
	{
		return 0f, 0f, 25f;
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return 0f, 0f, 4.5f;
	}
	return 0f, 0f, 0f;
}

char* func_494(int iParam0)//Position - 0xA9076
{
	if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return "scr_ie_export_fire_ring";
	}
	return "";
}

char* func_495(int iParam0)//Position - 0xA9092
{
	if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return "scr_ie_export";
	}
	return "";
}

int func_496(int iParam0)//Position - 0xA90DB
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a"))
	{
		return 1;
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return 1;
	}
	return 0;
}

int func_497(int iParam0)//Position - 0xAAD5A
{
	switch (iParam0)
	{
		case joaat("prop_ind_barge_01_cr"):
		case joaat("hei_prop_hei_securitypanel"):
		case joaat("prop_ld_keypad_01b"):
		case joaat("prop_sec_gate_01c"):
			return 1;
		default:
	}
	if (((iParam0 == joaat("gr_prop_gr_cratespile_01a") || iParam0 == joaat("xm_prop_x17_barge_01")) || iParam0 == joaat("xm_prop_auto_salvage_elegy")) || iParam0 == joaat("prop_mb_hesco_06"))
	{
		return 1;
	}
	return 0;
}

int func_498(int iParam0)//Position - 0xAADBF
{
	switch (iParam0)
	{
		case joaat("bkr_prop_weed_bigbag_open_01a"):
		case joaat("hei_p_attache_case_shut_s"):
		case joaat("prop_cs_duffel_01"):
		case joaat("prop_security_case_01"):
			return 1;
		default:
	}
	if (iParam0 == WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PUMPSHOTGUN")) || iParam0 == WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_ASSAULTRIFLE")))
	{
		return 1;
	}
	return 0;
}

int func_499(int iParam0)//Position - 0xAAE10
{
	switch (iParam0)
	{
		case joaat("bkr_prop_weed_bigbag_open_01a"):
		case joaat("hei_p_attache_case_shut_s"):
		case joaat("prop_cs_duffel_01"):
		case joaat("prop_security_case_01"):
		case joaat("prop_boombox_01"):
		case joaat("prop_ghettoblast_02"):
		case joaat("hei_prop_hei_cash_trolly_03"):
			return 1;
		default:
	}
	if ((iParam0 == WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PUMPSHOTGUN")) || iParam0 == WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_ASSAULTRIFLE"))) || iParam0 == joaat("gr_prop_gr_cratespile_01a"))
	{
		return 1;
	}
	return 0;
}

bool func_500(int iParam0)//Position - 0xACB7B
{
	if (iParam0 == joaat("hei_prop_heist_transponder"))
	{
		return 0;
	}
	return STREAMING::IS_MODEL_VALID(iParam0);
}

bool func_501(float fParam0, float fParam1)//Position - 0xADE3E
{
	return (fParam0 - fParam1) > 10f;
}

Vector3 func_502(int iParam0, int iParam1)//Position - 0xAE033
{
	switch (iParam1)
	{
		case joaat("insurgent2"):
			switch (iParam0)
			{
				case joaat("hei_prop_heist_transponder"):
					return 0f, 0f, 0f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_503(int iParam0, int iParam1)//Position - 0xAE061
{
	switch (iParam1)
	{
		case joaat("insurgent2"):
			switch (iParam0)
			{
				case joaat("hei_prop_heist_transponder"):
					return 0.45f, -2.7f, 1.62f;
				default:
			}
			break;
		case joaat("ambulance"):
			if (iParam0 == joaat("xm_prop_smug_crate_s_medical"))
			{
				return 0.18f, -2.6f, -0.02f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_504(int iParam0)//Position - 0xAE0C0
{
	switch (iParam0)
	{
		case joaat("insurgent2"):
			return joaat("hei_prop_heist_transponder");
		case joaat("ambulance"):
			return joaat("xm_prop_smug_crate_s_medical");
		default:
	}
	return 0;
}

int func_505(int iParam0)//Position - 0xAE0EC
{
	switch (iParam0)
	{
		case joaat("ambulance"):
			return 1;
		default:
	}
	return 0;
}

int func_506(int iParam0)//Position - 0xAE28C
{
	switch (iParam0)
	{
		case joaat("flatbed"):
		case joaat("ambulance"):
		case joaat("wastelander"):
		case joaat("riot"):
			return 1;
		default:
	}
	return 0;
}

int func_507()//Position - 0xAE911
{
	return joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INAIRVEHICLE_WITH_PASSENGERS");
}

float func_508(int iParam0)//Position - 0xAEE83
{
	switch (iParam0)
	{
		case joaat("bombushka"):
			return 5000f;
		default:
	}
	return -1f;
}

int func_509(int iParam0)//Position - 0xAEEA1
{
	switch (iParam0)
	{
		case joaat("bombushka"):
			return 1;
		default:
	}
	return 0;
}

Vector3 func_510(struct<3> Param0)//Position - 0xAF0B8
{
	return Param0;
}

int func_511()//Position - 0xAF16D
{
	if (Global_2815059.f_5028)
	{
		Global_2815059.f_5028 = 0;
		return 1;
	}
	return 0;
}

struct<2> func_512(bool bParam0)//Position - 0xC3D10
{
	return Global_1892703[bParam0 /*599*/].f_10.f_194;
}

void func_513(int iParam0)//Position - 0xEBF18
{
	Global_22636 = iParam0;
	MISC::SET_BIT(&Global_8136, 16);
}

void func_514(int iParam0)//Position - 0xED912
{
	Global_2725439.f_327 = iParam0;
}

void func_515(int* iParam0, int iParam1)//Position - 0x166FC2
{
	if (iParam0->f_372 > 0)
	{
		if (!iParam0->f_386 && !BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533, 0))
		{
			__LIB_1__.func_128(iParam0);
			iParam0->f_1 = iParam1;
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533), 0);
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533.f_1 = MISC::GET_HASH_KEY(&(iParam0->f_2));
			iParam0->f_386 = 1;
		}
	}
	else
	{
		__LIB_1__.func_128(iParam0);
	}
}

float func_516()//Position - 0x20BC75
{
	return 0.05f;
}

char* func_517()//Position - 0x20BC82
{
	return "small_explosion_shake";
}

char* func_518()//Position - 0x20BF8C
{
	return "ext_player";
}

char* func_519()//Position - 0x20BF99
{
	return "anim@apt_trans@hinge_r";
}

void func_520()//Position - 0x20C2D9
{
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 362, true);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.85f);
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) > 1f)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.3f);
	}
}

void func_521(int iParam0, bool bParam1)//Position - 0x214633
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_2__.func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535.f_3), iParam0))
		{
			__LIB_4__.func_745(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535.f_3), iParam0);
		}
	}
	else if (__LIB_2__.func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535.f_3), iParam0))
	{
		__LIB_4__.func_743(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535.f_3), iParam0);
	}
}

int func_522()//Position - 0x214DFC
{
	return 85;
}

int func_523(int iParam0)//Position - 0x214ECA
{
	if (Global_1952191.f_5318)
	{
		return 0;
	}
	return 1;
}

Vector3 func_524()//Position - 0x21512A
{
	return -1019.0276f, -2406.8586f, 12.9445f;
}

Vector3 func_525()//Position - 0x215141
{
	return -1160.1947f, -2753.1277f, 12.9486f;
}

bool func_526(var uParam0)//Position - 0x21EB5B
{
	return (*uParam0 >= 377 && *uParam0 <= 381);
}

int func_527(var uParam0)//Position - 0x21EC2F
{
	if (__LIB_14__.func_106(uParam0))
	{
		if (*uParam0 >= 382 && *uParam0 <= 401)
		{
			return 23;
		}
		if (*uParam0 >= 402 && *uParam0 <= 431)
		{
			return 20;
		}
		if (*uParam0 >= 432 && *uParam0 <= 491)
		{
			return 15;
		}
		if (*uParam0 >= 492 && *uParam0 <= 521)
		{
			return 24;
		}
		if (*uParam0 >= 522 && *uParam0 <= 551)
		{
			return 21;
		}
		if (*uParam0 >= 552 && *uParam0 <= 584)
		{
			return 22;
		}
		if (*uParam0 >= 585 && *uParam0 <= 614)
		{
			return 16;
		}
		if (*uParam0 >= 615 && *uParam0 <= 644)
		{
			return 17;
		}
		if (*uParam0 >= 645 && *uParam0 <= 674)
		{
			return 25;
		}
	}
	return -1;
}

int func_528(var uParam0)//Position - 0x223355
{
	if (__LIB_14__.func_108(uParam0))
	{
		if (*uParam0 >= 12 && *uParam0 <= 71)
		{
			return 17;
		}
		if (*uParam0 >= 72 && *uParam0 <= 91)
		{
			return 15;
		}
		if (*uParam0 >= 92 && *uParam0 <= 156)
		{
			return 14;
		}
		if (*uParam0 >= 157 && *uParam0 <= 256)
		{
			return 16;
		}
		if (*uParam0 >= 257 && *uParam0 <= 356)
		{
			return 19;
		}
		if (*uParam0 >= 357 && *uParam0 <= 376)
		{
			return 18;
		}
	}
	return -1;
}

int func_529(int iParam0, int iParam1)//Position - 0x2248CF
{
	switch (iParam0)
	{
		case 2:
			return 706;
		case 3:
			return 707;
		case 4:
			return 708;
		case 5:
			return 709;
		case 38:
		case 39:
		case 40:
			return 710;
		case 22:
		case 23:
		case 24:
			return 711;
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam1)
			{
				case 0:
					return 704;
				case 1:
					return 705;
				default:
			}
			break;
		case 28:
		case 29:
		case 30:
		case 13:
		case 14:
		case 12:
		case 31:
		case 33:
		case 34:
		case 32:
			return 712;
		case 35:
		case 36:
		case 37:
		case 41:
		case 42:
		case 43:
		case 48:
		case 46:
		case 47:
			return 713;
	}
	return 704;
}

int func_530()//Position - 0x2249F9
{
	return 20;
}

bool func_531()//Position - 0x224E56
{
	return BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556, 5);
}

void func_532(int iParam0)//Position - 0x225072
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_385[iVar0]), iVar1);
}

bool func_533(int iParam0)//Position - 0x22514E
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_385[iVar0], iVar1);
}

void func_534(int iParam0)//Position - 0x225C02
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(uLocal_385[iVar0]), iVar1);
}

int func_535()//Position - 0x22643A
{
	return joaat("prop_tv_flat_01_screen");
}

Vector3 func_536()//Position - 0x226450
{
	return 0f, 0f, 90f;
}

Vector3 func_537()//Position - 0x22645F
{
	return 569.469f, 4750.763f, -59.028f;
}

struct<4> func_538(int iParam0)//Position - 0x22D2F4
{
	struct<4> Var0;
	StringCopy(&Var0, "SMT_BONUS_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

int func_539(int iParam0)//Position - 0x22D30F
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return 0;
		default:
	}
	return 1;
}

int func_540(int iParam0)//Position - 0x22D347
{
	switch (iParam0)
	{
		case 9:
			return Global_262145.f_25753 /* Tunable: 1712505008 */;
		default:
	}
	return 0;
}

int func_541(int iParam0)//Position - 0x22D367
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_22754 /* Tunable: 1563114472 */;
		case 1:
			return Global_262145.f_22755 /* Tunable: SMUG_STEAL_COLLECTION_BONUS */;
		case 2:
			return Global_262145.f_22756 /* Tunable: SMUG_STEAL_NO_RESPAWN_BONUS */;
		case 3:
			return Global_262145.f_22757 /* Tunable: SMUG_STEAL_RECOVERY_BONUS */;
		case 4:
			return Global_262145.f_22758 /* Tunable: SMUG_STEAL_CARRIER_DELIVERY_BONUS */;
		case 5:
			return Global_262145.f_22759 /* Tunable: SMUG_STEAL_SUPPORTER_BONUS */;
		case 6:
			return Global_262145.f_22760 /* Tunable: -1252391406 */;
		case 7:
			return 1000;
		case 8:
			return 250;
		case 9:
			return Global_262145.f_25754 /* Tunable: -1137497878 */;
		case 10:
			return 250;
		case 11:
			return 250;
		case 12:
			return 250;
		default:
	}
	return 0;
}

void func_542()//Position - 0x22D9AC
{
	int iVar0;
	if (BitTest(uLocal_139, 0))
	{
		if (iLocal_138[0] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[0]))
			{
				AUDIO::STOP_SOUND(iLocal_138[0]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[0]);
			}
		}
	}
	if (BitTest(uLocal_139, 1))
	{
		if (iLocal_138[1] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[1]))
			{
				AUDIO::STOP_SOUND(iLocal_138[1]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[1]);
			}
		}
	}
	if (BitTest(uLocal_139, 2))
	{
		if (iLocal_138[2] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[2]))
			{
				AUDIO::STOP_SOUND(iLocal_138[2]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[2]);
			}
		}
	}
	if (BitTest(uLocal_139, 3))
	{
		if (iLocal_138[3] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[3]))
			{
				AUDIO::STOP_SOUND(iLocal_138[3]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[3]);
			}
		}
	}
	if (BitTest(uLocal_139, 4))
	{
		if (iLocal_138[4] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[4]))
			{
				AUDIO::STOP_SOUND(iLocal_138[4]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[4]);
			}
		}
	}
	if (BitTest(uLocal_139, 5))
	{
		if (iLocal_138[5] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[5]))
			{
				AUDIO::STOP_SOUND(iLocal_138[5]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[5]);
			}
		}
	}
	if (BitTest(uLocal_139, 6))
	{
		if (iLocal_138[6] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[6]))
			{
				AUDIO::STOP_SOUND(iLocal_138[6]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[6]);
			}
		}
	}
	if (BitTest(uLocal_139, 7))
	{
		if (iLocal_138[7] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[7]))
			{
				AUDIO::STOP_SOUND(iLocal_138[7]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[7]);
			}
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iLocal_117[iVar0] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_117[iVar0]))
			{
				AUDIO::STOP_SOUND(iLocal_117[iVar0]);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_117[iVar0]);
			iLocal_117[iVar0] = -1;
		}
		iVar0++;
	}
	MISC::CLEAR_BIT(&uLocal_139, 0);
	MISC::CLEAR_BIT(&uLocal_139, 1);
	MISC::CLEAR_BIT(&uLocal_139, 2);
	MISC::CLEAR_BIT(&uLocal_139, 3);
	MISC::CLEAR_BIT(&uLocal_139, 4);
	MISC::CLEAR_BIT(&uLocal_139, 5);
	MISC::CLEAR_BIT(&uLocal_139, 6);
	MISC::CLEAR_BIT(&uLocal_139, 7);
}

int func_543(int iParam0)//Position - 0x2309A4
{
	if (Local_129[iParam0 /*2*/].f_1 >= fLocal_134 && Local_129[iParam0 /*2*/].f_1 <= fLocal_133)
	{
		return 1;
	}
	return 0;
}

int func_544(int iParam0)//Position - 0x2309CF
{
	if (Local_129[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

void func_545()//Position - 0x230A1C
{
	fLocal_133 = 0.6f;
	fLocal_134 = 0.53f;
	Local_131[0 /*4*/].f_1 = (0.02f * fLocal_135);
	Local_131[1 /*4*/].f_1 = (0.025f * fLocal_135);
	Local_131[2 /*4*/].f_1 = (0.03f * fLocal_135);
	Local_131[3 /*4*/].f_1 = (0.035f * fLocal_135);
	Local_131[4 /*4*/].f_1 = (0.04f * fLocal_135);
	Local_131[5 /*4*/].f_1 = (0.045f * fLocal_135);
	Local_131[6 /*4*/].f_1 = (0.048f * fLocal_135);
	Local_131[7 /*4*/].f_1 = (0.05f * fLocal_135);
	Local_131[0 /*4*/] = 0;
	Local_131[1 /*4*/] = 0;
	Local_131[2 /*4*/] = 0;
	Local_131[3 /*4*/] = 0;
	Local_131[4 /*4*/] = 0;
	Local_131[5 /*4*/] = 0;
	Local_131[6 /*4*/] = 0;
	Local_131[7 /*4*/] = 0;
	Local_128.f_0 = 0.5f;
	Local_128.f_1 = 0.5f;
	Local_129[0 /*2*/] = 0.35f;
	Local_129[0 /*2*/].f_1 = 0.4f;
	Local_129[1 /*2*/] = 0.39f;
	Local_129[1 /*2*/].f_1 = 0.4f;
	Local_129[2 /*2*/] = 0.43f;
	Local_129[2 /*2*/].f_1 = 0.4f;
	Local_129[3 /*2*/] = 0.47f;
	Local_129[3 /*2*/].f_1 = 0.4f;
	Local_129[4 /*2*/] = 0.51f;
	Local_129[4 /*2*/].f_1 = 0.74f;
	Local_129[5 /*2*/] = 0.55f;
	Local_129[5 /*2*/].f_1 = 0.74f;
	Local_129[6 /*2*/] = 0.59f;
	Local_129[6 /*2*/].f_1 = 0.74f;
	Local_129[7 /*2*/] = 0.63f;
	Local_129[7 /*2*/].f_1 = 0.74f;
}

void func_546(bool bParam0, char* sParam1)//Position - 0x230E41
{
	if (bParam0)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_123, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_126 = MISC::GET_GAME_TIMER();
		iLocal_127 = 1;
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_123, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_127 = 0;
	}
}

void func_547()//Position - 0x230FE8
{
	if (iLocal_124 < 5)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, true);
		}
	}
}

int func_548(bool bParam0)//Position - 0x23137B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_123) && (!bParam0 || ((((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_0") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_1")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_5")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_6"))))
	{
		return 1;
	}
	return 0;
}

void func_549(bool bParam0)//Position - 0x2313FC
{
	if (bParam0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_0", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_1", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_2", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_3", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_4", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_5", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_6", false);
	}
	iLocal_123 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED("Hacking_PC");
}

char* func_550()//Position - 0x23147A
{
	return "BBH_HACK" /* GXT: Press ~INPUT_CONTEXT~ to hack the security panel. */;
}

Vector3 func_551()//Position - 0x235513
{
	return 0f, 0f, 500f;
}

int func_552(bool bParam0)//Position - 0x235823
{
	if (bParam0)
	{
		return 0;
	}
	return 0;
}

bool func_553()//Position - 0x237B62
{
	return !__LIB_0__.func_86(__LIB_2__.func_364());
}

Vector3 func_554(int iParam0)//Position - 0x238FBA
{
	return Global_1946250.f_533[__LIB_1__.func_246(iParam0) /*3*/];
}

char* func_555()//Position - 0x239FC5
{
	return "BBOT_LOSECOPS" /* GXT: Lose the Cops. */;
}

char* func_556()//Position - 0x23A922
{
	return "BBOT_COLLECTa" /* GXT: Collect the ~a~. */;
}

void func_557()//Position - 0x23A9EA
{
	if (HUD::DOES_BLIP_EXIST(iLocal_544))
	{
		HUD::REMOVE_BLIP(&iLocal_544);
	}
}

char* func_558()//Position - 0x23ACF7
{
	return "INVALID";
}

char* func_559()//Position - 0x23BA8A
{
	return "SMBLIP_CARGO" /* GXT: Cargo */;
}

char* func_560(bool bParam0)//Position - 0x23BA97
{
	if (bParam0)
	{
		return "SMOT_SEARCHa" /* GXT: Search the ~a~~s~ for the ~a~. */;
	}
	return "SMOT_SEARCHb" /* GXT: Search ~a~~s~ for the ~a~. */;
}

char* func_561(int iParam0)//Position - 0x23BAB1
{
	*iParam0 = 1;
	return "SMOT_DROPZONE" /* GXT: landing zone */;
}

void func_562(struct<3> Param0)//Position - 0x23C0EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::DRAW_MARKER(6, Param0, 0f, 0f, 0f, 0f, 0f, 0f, 20f, 20f, 20f, iVar0, iVar1, iVar2, 100, false, true, 2, false, 0, 0, false);
	GRAPHICS::DRAW_MARKER(7, Param0, 0f, 0f, 0f, 270f, 0f, 0f, 10f, 10f, 10f, iVar0, iVar1, iVar2, 100, false, true, 2, false, 0, 0, false);
}

float func_563(int iParam0)//Position - 0x23D74E
{
	switch (iParam0)
	{
		case joaat("insurgent2"):
			return 0.75f;
		default:
	}
	return 0.3f;
}

char* func_564()//Position - 0x2419D2
{
	return "SMHUD_CARGO" /* GXT: CARGO */;
}

char* func_565()//Position - 0x241DB3
{
	return "TIMER_TIME" /* GXT: TIME */;
}

char* func_566()//Position - 0x2432CC
{
	return "VEX_SEARCH" /* GXT: Search Area */;
}

char* func_567()//Position - 0x243568
{
	return "SMBLIP_PLANEb" /* GXT: ~BLIP_PLANE_DROP~ */;
}

char* func_568(int iParam0)//Position - 0x243575
{
	return "SMBLIP_TULAa" /* GXT: Tula */;
}

void func_569(int iParam0)//Position - 0x245ADC
{
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0, true);
	AUDIO::SET_VEH_FORCED_RADIO_THIS_FRAME(iParam0);
	AUDIO::SET_VEH_RADIO_STATION(iParam0, "RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
}

int func_570(int iParam0)//Position - 0x246072
{
	switch (iParam0)
	{
		case joaat("tula"):
			return 1;
		default:
	}
	return 0;
}

int func_571(int iParam0)//Position - 0x246902
{
	struct<3> Var0;
	float fVar1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, true, false))
	{
		if (Var0.f_2 < (fVar1 + 30f))
		{
			return 1;
		}
	}
	return 0;
}

int func_572(bool bParam0)//Position - 0x24A22D
{
	return PLAYER::PLAYER_PED_ID();
}

char* func_573()//Position - 0x24DA49
{
	return "SMBLIP_ENEMY" /* GXT: Enemy */;
}

int func_574(int iParam0)//Position - 0x255B64
{
	if (iParam0 == joaat("cargobob"))
	{
		return 1;
	}
	if (iParam0 == joaat("cargobob2"))
	{
		return 1;
	}
	if (iParam0 == joaat("cargobob3"))
	{
		return 1;
	}
	if (iParam0 == joaat("cargobob4"))
	{
		return 1;
	}
	return 0;
}

bool func_575(float fParam0, float fParam1)//Position - 0x258ED1
{
	return (fParam0 - fParam1) <= 1f;
}

int func_576()//Position - 0x25BDF0
{
	return Global_262145.f_27077 /* Tunable: VC_WORK_HISTORY_LIST */;
}

void func_577(bool bParam0)//Position - 0x25BF72
{
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
}

void func_578(int iParam0)//Position - 0x25EBA9
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "dial_turn_anti_fast", 3))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Local_142) };
		Var1 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam0) };
		TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "dial_turn_anti_fast", Var0, Var1, 4f, 0.1f, -1, 1835009, 0f, 2, 0);
	}
}

void func_579(int iParam0)//Position - 0x25EC0A
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "dial_turn_clock_fast", 3))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Local_142) };
		Var1 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam0) };
		TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "dial_turn_clock_fast", Var0, Var1, 4f, 0.1f, -1, 1835009, 0f, 2, 0);
	}
}

void func_580(var uParam0, int iParam1)//Position - 0x25F370
{
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_18);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam0->f_15, true, false, false, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, Local_142, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
	if (uParam0->f_62 != 0)
	{
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uParam0->f_62);
	}
}

Vector3 func_581(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x26DE82
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	fVar1 = SYSTEM::VDIST2(Var0, Param1);
	fVar2 = SYSTEM::VDIST2(Var0, Param2);
	if (fVar1 <= fVar2)
	{
		return Param1;
	}
	return Param2;
}

int func_582(int iParam0)//Position - 0x270592
{
	switch (iParam0)
	{
		case 13:
			return joaat("vw_prop_vw_backpack_01a");
		case 9:
			return joaat("prop_cs_duffel_01");
		default:
	}
	return joaat("prop_drug_package_02");
}

void func_583(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, var uParam5)//Position - 0x3D18
{
	switch (iParam0)
	{
		case 56:
		case 57:
		case 58:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 125.087f, -731.87f, 242.017f };
					*fParam4 = 0f;
					*uParam5 = { 89.98f, 0f, 0f };
					break;
				case 1:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 119.213f, -726.522f, 242.718f };
					*fParam4 = 42.2f;
					*uParam5 = { 90f, 42.2f, 0f };
					break;
				case 2:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 112.973f, -733.455f, 242.404f };
					*fParam4 = 200.8f;
					*uParam5 = { 0f, 0f, -159.2f };
					break;
				case 3:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 106.405f, -746.003f, 242.107f };
					*fParam4 = 107.8f;
					*uParam5 = { 89.944f, 107.8f, 0f };
					break;
				case 4:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 107.271f, -753.097f, 242.016f };
					*fParam4 = 0f;
					*uParam5 = { 90f, 176.883f, 0f };
					break;
				case 5:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 156.987f, -737.605f, 242.321f };
					*fParam4 = 108.2f;
					*uParam5 = { 0f, 0f, 108.2f };
					break;
				case 6:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 153.325f, -744.496f, 242.018f };
					*fParam4 = 146.399f;
					*uParam5 = { 90f, 146.399f, 0f };
					break;
				case 7:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 130.323f, -756.725f, 242.141f };
					*fParam4 = 302.2f;
					*uParam5 = { 90f, -57.8f, 0f };
					break;
				case 8:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 151.0082f, -750.5919f, 241.6321f };
					*fParam4 = 114.274f;
					*uParam5 = { 90f, 114.274f, 0f };
					break;
				case 9:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 121.4861f, -743.7041f, 242.1051f };
					*fParam4 = 0f;
					*uParam5 = { 89.9374f, -140.013f, 0f };
					break;
			}
			break;
	}
}

void func_584(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, var uParam5)//Position - 0x3F79
{
	switch (iParam0)
	{
		case 53:
		case 54:
		case 55:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 2185.5295f, 2911.9768f, -84.943f };
					*fParam4 = 270.9997f;
					*uParam5 = { 90f, -89.0003f, 0f };
					break;
				case 1:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 2150.4197f, 2911.7295f, -84.6299f };
					*fParam4 = 210.9999f;
					*uParam5 = { 0f, 0f, -149.0001f };
					break;
				case 2:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 1984.5964f, 2911.9778f, -85.3478f };
					*fParam4 = 345.3999f;
					*uParam5 = { 0f, 0f, -14.6001f };
					break;
				case 3:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 2030.5782f, 2938.0154f, -85.3478f };
					*fParam4 = 78.3999f;
					*uParam5 = { 0f, 0f, 78.3999f };
					break;
				case 4:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 2089.5078f, 2896.1516f, -85.3478f };
					*fParam4 = 180.5995f;
					*uParam5 = { 0f, 0f, -179.4004f };
					break;
				case 5:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 2122.5537f, 2936.0947f, -84.6297f };
					*fParam4 = 121.199f;
					*uParam5 = { 0f, 0f, 121.199f };
					break;
				case 6:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 2349.4146f, 2937.3745f, -85.3478f };
					*fParam4 = 292.9989f;
					*uParam5 = { 0f, 0f, -67.0011f };
					break;
				case 7:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 2310.171f, 2909.5703f, -84.6287f };
					*fParam4 = 305.9988f;
					*uParam5 = { 0f, 0f, -54.0012f };
					break;
				case 8:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 2238.6514f, 2928.9297f, -85.3478f };
					*fParam4 = 49.5987f;
					*uParam5 = { 0f, 0f, 49.5987f };
					break;
				case 9:
					*iParam2 = joaat("ch_prop_ch_security_case_02a");
					*uParam3 = { 2278.9648f, 2890.4932f, -84.6325f };
					*fParam4 = 43.599f;
					*uParam5 = { 0f, 0f, 43.599f };
					break;
			}
			break;
	}
}

void func_585(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, var uParam5)//Position - 0x41D1
{
	switch (iParam0)
	{
		case 128:
		case 129:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("ch_prop_adv_case_sm_flash");
					*uParam3 = { 934.0767f, -3215.7764f, -98.6817f };
					*fParam4 = 178.5981f;
					*uParam5 = { 0f, 0f, 178.598f };
					break;
				case 1:
					*iParam2 = joaat("ch_prop_adv_case_sm_flash");
					*uParam3 = { 894.4465f, -3209.293f, -98.6157f };
					*fParam4 = 190.9982f;
					*uParam5 = { 0f, 0f, -169.0018f };
					break;
				case 2:
					*iParam2 = joaat("ch_prop_adv_case_sm_flash");
					*uParam3 = { 946.1714f, -3199.2393f, -98.6858f };
					*fParam4 = 182.198f;
					*uParam5 = { 0f, 0f, -177.802f };
					break;
				case 3:
					*iParam2 = joaat("ch_prop_adv_case_sm_flash");
					*uParam3 = { 915.643f, -3219.4998f, -98.6808f };
					*fParam4 = 185.998f;
					*uParam5 = { 0f, 0f, -174.0019f };
					break;
				case 4:
					*iParam2 = joaat("ch_prop_adv_case_sm_flash");
					*uParam3 = { 899.2014f, -3204.3066f, -97.6074f };
					*fParam4 = 204.1983f;
					*uParam5 = { 0f, 0f, -155.8017f };
					break;
				case 5:
					*iParam2 = joaat("ch_prop_adv_case_sm_flash");
					*uParam3 = { 908.4725f, -3227.2925f, -98.7118f };
					*fParam4 = 214.3984f;
					*uParam5 = { 0f, 0f, -145.6015f };
					break;
				case 6:
					*iParam2 = joaat("ch_prop_adv_case_sm_flash");
					*uParam3 = { 891.0106f, -3227.3552f, -98.6485f };
					*fParam4 = 291.7979f;
					*uParam5 = { 0f, 0f, -68.2021f };
					break;
			}
			break;
	}
}

void func_586(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, var uParam5)//Position - 0x4377
{
	*iParam2 = joaat("ch_prop_vault_drill_01a");
	switch (iParam0)
	{
		case 63:
			switch (iParam1)
			{
				case 1:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { -172.3737f, -1070.9142f, 41.1612f };
					*fParam4 = 285.9998f;
					*uParam5 = { -90f, 90f, -74.0003f };
					break;
				case 2:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { -161.466f, -1076.9758f, 41.1442f };
					*fParam4 = 3.5994f;
					*uParam5 = { -90f, 90f, 3.5994f };
					break;
				case 3:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { -167.7487f, -1084.0592f, 41.1412f };
					*fParam4 = 70.7994f;
					*uParam5 = { -90f, 90f, 70.7994f };
					break;
				case 4:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { -157.831f, -1088.3921f, 41.141f };
					*fParam4 = 35.1989f;
					*uParam5 = { -90f, 90f, 35.1989f };
					break;
				case 5:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { -162.0758f, -1066.5585f, 41.1412f };
					*fParam4 = 249.9989f;
					*uParam5 = { -90f, 90f, -110.0011f };
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 1:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { -1125.2562f, -957.9663f, 1.1521f };
					*fParam4 = 325.6f;
					*uParam5 = { -90f, 90f, -34.4f };
					break;
				case 2:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { -1132.4006f, -951.6277f, 1.152f };
					*fParam4 = 33.7998f;
					*uParam5 = { -90f, 90f, 33.7998f };
					break;
				case 3:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { -1125.1764f, -969.5287f, 1.152f };
					*fParam4 = 93.5998f;
					*uParam5 = { -90f, 90f, 93.5998f };
					break;
				case 4:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { -1130.4806f, -953.7077f, 5.6341f };
					*fParam4 = 209.9994f;
					*uParam5 = { -90f, 90f, -150.0006f };
					break;
				case 5:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { -1123.7086f, -971.9485f, 5.6341f };
					*fParam4 = 11.5993f;
					*uParam5 = { -90f, 90f, 11.5993f };
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 1:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { 1294.604f, -741.8377f, 64.585f };
					*fParam4 = 185.2002f;
					*uParam5 = { -90f, 90f, -185.2002f };
					break;
				case 2:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { 1292.095f, -752.6929f, 64.5854f };
					*fParam4 = 334.5996f;
					*uParam5 = { -90f, 90f, -25.4004f };
					break;
				case 3:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { 1322.7997f, -755.9841f, 65.4268f };
					*fParam4 = 94.3994f;
					*uParam5 = { -90f, 90f, 94.3994f };
					break;
				case 4:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { 1315.2631f, -762.5413f, 65.417f };
					*fParam4 = 334.999f;
					*uParam5 = { -90f, 90f, 334.999f };
					break;
				case 5:
					*iParam2 = joaat("ch_prop_vault_drill_01a");
					*uParam3 = { 1297.9009f, -751.7552f, 64.5854f };
					*fParam4 = 34.5993f;
					*uParam5 = { -90f, 90f, 34.5993f };
					break;
			}
			break;
	}
}

void func_587(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, var uParam5)//Position - 0x476F
{
	switch (iParam0)
	{
		case 126:
		case 127:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { 1017.305f, -3106.108f, -38.843f };
					*fParam4 = 348.193f;
					*uParam5 = { 0f, 0f, -11.807f };
					break;
				case 1:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { 1018.009f, -3095.921f, -38.49f };
					*fParam4 = 251.393f;
					*uParam5 = { 0f, 0f, -108.607f };
					break;
				case 2:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { 1026.7052f, -3096.373f, -37.791f };
					*fParam4 = 235.1929f;
					*uParam5 = { 0f, 0f, -124.807f };
					break;
				case 3:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { 1026.1426f, -3108.9038f, -37.791f };
					*fParam4 = 279.1929f;
					*uParam5 = { 0f, 0f, -80.8071f };
					break;
			}
			break;
	}
}

void func_588(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, var uParam5)//Position - 0x4870
{
	switch (iParam0)
	{
		case 124:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { 1747.7081f, 3874.1702f, 33.5753f };
					*fParam4 = 331.398f;
					*uParam5 = { 0f, 0f, -28.602f };
					break;
				case 1:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { 1738.6536f, 3866.4636f, 33.6493f };
					*fParam4 = 64.3966f;
					*uParam5 = { 0f, 0f, 64.3966f };
					break;
				case 2:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { 1742.5686f, 3860.1018f, 33.5884f };
					*fParam4 = 13.9966f;
					*uParam5 = { 0f, 0f, 13.9966f };
					break;
				case 3:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { 1752.23f, 3867.238f, 33.519f };
					*fParam4 = 284.197f;
					*uParam5 = { 0f, 0f, -75.803f };
					break;
			}
			break;
		case 125:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { -29.2197f, 3023.1792f, 39.875f };
					*fParam4 = 51.9998f;
					*uParam5 = { 0f, 0f, 51.9998f };
					break;
				case 1:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { -47.3488f, 3031.6733f, 39.626f };
					*fParam4 = 251.0001f;
					*uParam5 = { 2f, 2f, -108.9999f };
					break;
				case 2:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { -35.8691f, 3031.8647f, 40.021f };
					*fParam4 = 237.6001f;
					*uParam5 = { 0f, 0f, -122.3999f };
					break;
				case 3:
					*iParam2 = joaat("ch_prop_box_ammo01b");
					*uParam3 = { -43.2261f, 3022.1003f, 39.641f };
					*fParam4 = 137.9987f;
					*uParam5 = { 0f, -1.1001f, 137.9987f };
					break;
			}
			break;
	}
}

void func_589(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, var uParam5)//Position - 0x4A5B
{
	switch (iParam0)
	{
		case 24:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 480.819f, -2912.894f, 6.292f };
					*fParam4 = 91.794f;
					*uParam5 = { -89.956f, -91.794f, 0f };
					break;
				case 1:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 427.325f, -2916.414f, 6.942f };
					*fParam4 = 353.596f;
					*uParam5 = { -89.39f, 0f, -6.404f };
					break;
				case 2:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 478.762f, -2924.159f, 6.756f };
					*fParam4 = 0f;
					*uParam5 = { -90f, 6.404f, 0f };
					break;
				case 3:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 517.352f, -2913.066f, 6.941f };
					*fParam4 = 89f;
					*uParam5 = { -89.98f, -73.288f, 0f };
					break;
				case 4:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 534.9936f, -2908.8936f, 6.294f };
					*fParam4 = 360f;
					*uParam5 = { 15.365f, 90.012f, 0f };
					break;
				case 5:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 481.544f, -2904.942f, 6.281f };
					*fParam4 = 180.277f;
					*uParam5 = { 54.607f, 90.069f, -179.723f };
					break;
				case 6:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 547.762f, -2918.921f, 6.352f };
					*fParam4 = 311.42f;
					*uParam5 = { 40.47f, -77.414f, -48.58f };
					break;
				case 7:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 434.167f, -2904.635f, 9.301f };
					*fParam4 = 30.739f;
					*uParam5 = { 89.972f, 30.739f, 0f };
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 2293.267f, 4868.356f, 41.881f };
					*fParam4 = 332.596f;
					*uParam5 = { -90f, 27.404f, 0f };
					break;
				case 1:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 2333.89f, 4857.354f, 41.646f };
					*fParam4 = 120.7f;
					*uParam5 = { 90f, 120.7f, 0f };
					break;
				case 2:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 2339.506f, 4893.009f, 41.399f };
					*fParam4 = 261.5f;
					*uParam5 = { -18f, -90f, -98.5f };
					break;
				case 3:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 2315.446f, 4858.195f, 42.143f };
					*fParam4 = 133.8f;
					*uParam5 = { -90f, -133.8f, 0f };
					break;
				case 4:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 2356.86f, 4876.579f, 42.008f };
					*fParam4 = 75.6f;
					*uParam5 = { -90f, -75.6f, 0f };
					break;
				case 5:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 2325.947f, 4901.571f, 41.834f };
					*fParam4 = 329.4f;
					*uParam5 = { 90f, -30.6f, 0f };
					break;
				case 6:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 2291.633f, 4876.236f, 41.383f };
					*fParam4 = 300.7f;
					*uParam5 = { -41.9f, 69f, 120.7f };
					break;
				case 7:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 2320.807f, 4839.931f, 41.376f };
					*fParam4 = 261.5f;
					*uParam5 = { -42.1f, -90f, -98.5f };
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 287.62f, 2823.27f, 44.025f };
					*fParam4 = 280.3f;
					*uParam5 = { 90f, 280.3f, 0f };
					break;
				case 1:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 289.256f, 2854.811f, 43.847f };
					*fParam4 = 81.2f;
					*uParam5 = { -90f, -81.2f, 0f };
					break;
				case 2:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 334.56f, 2862.462f, 43.64f };
					*fParam4 = 332.8f;
					*uParam5 = { 90f, -27.2f, 0f };
					break;
				case 3:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 296.347f, 2882.508f, 43.173f };
					*fParam4 = 13.6f;
					*uParam5 = { 18.5f, 89.7f, 13.6f };
					break;
				case 4:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 256.611f, 2874.037f, 43.279f };
					*fParam4 = 18f;
					*uParam5 = { 26.1f, -89f, 18f };
					break;
				case 5:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 315.371f, 2892.243f, 46.306f };
					*fParam4 = 291f;
					*uParam5 = { 90f, -69f, 0f };
					break;
				case 6:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 318.03f, 2886.085f, 46.006f };
					*fParam4 = 33.101f;
					*uParam5 = { 33.35f, -89.92f, 33.101f };
					break;
				case 7:
					*iParam2 = joaat("prop_box_guncase_03a");
					*uParam3 = { 321.461f, 2869.409f, 44.11f };
					*fParam4 = 332.301f;
					*uParam5 = { 90f, -27.699f, 0f };
					break;
			}
			break;
	}
}

int func_590()//Position - 0x503E
{
	return joaat("ch_prop_casino_drone_broken01a");
}

void func_591(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0xBAD6
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("fugitive");
			*uParam2 = { 908.4427f, -13.6658f, 77.764f };
			*fParam3 = 148.7994f;
			break;
		case 1:
			*iParam1 = joaat("fugitive");
			*uParam2 = { 940.5804f, -45.8104f, 77.7641f };
			*fParam3 = 237.1115f;
			break;
		case 2:
			*iParam1 = joaat("fugitive");
			*uParam2 = { 908.4918f, -72.4654f, 77.7641f };
			*fParam3 = 238.9397f;
			break;
		case 3:
			*iParam1 = joaat("fugitive");
			*uParam2 = { 851.72f, -40.9769f, 77.7641f };
			*fParam3 = 59.653f;
			break;
		case 4:
			*iParam1 = joaat("fugitive");
			*uParam2 = { 868.3211f, -74.1356f, 77.7641f };
			*fParam3 = 147.6158f;
			break;
	}
}

void func_592(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, float fParam5)//Position - 0xBBC1
{
	*iParam3 = joaat("benson");
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 46:
					switch (iParam0)
					{
						case 6:
							*uParam4 = { 202.7318f, 6384.416f, 30.4101f };
							*fParam5 = 205.999f;
							break;
						case 7:
							*uParam4 = { 207.6212f, 6386.592f, 30.4065f };
							*fParam5 = 205.999f;
							break;
						case 8:
							*uParam4 = { 190.183f, 6417.137f, 30.127f };
							*fParam5 = 316.199f;
							break;
						case 9:
							*uParam4 = { 183.5951f, 6394.55f, 30.3814f };
							*fParam5 = 116.5986f;
							break;
						case 10:
							*uParam4 = { 197.7832f, 6415.3315f, 30.1706f };
							*fParam5 = 307.1982f;
							break;
						case 11:
							*uParam4 = { 188.76f, 6429.854f, 30.165f };
							*fParam5 = 240.599f;
							break;
					}
					break;
				case 47:
					switch (iParam0)
					{
						case 6:
							*uParam4 = { 1944.4064f, 4621.246f, 39.4022f };
							*fParam5 = 187.7986f;
							break;
						case 7:
							*uParam4 = { 1939.429f, 4638.596f, 39.55f };
							*fParam5 = 96.799f;
							break;
						case 8:
							*uParam4 = { 1963.0544f, 4660.1655f, 39.7662f };
							*fParam5 = 63.1981f;
							break;
						case 9:
							*uParam4 = { 1944.9197f, 4669.0605f, 39.6679f };
							*fParam5 = 61.7975f;
							break;
						case 10:
							*uParam4 = { 1948.646f, 4633.928f, 39.651f };
							*fParam5 = 126.999f;
							break;
						case 11:
							*uParam4 = { 1953.7971f, 4651.093f, 39.7072f };
							*fParam5 = 63.3988f;
							break;
					}
					break;
				case 48:
					switch (iParam0)
					{
						case 6:
							*uParam4 = { 22.4061f, 3685.776f, 38.7108f };
							*fParam5 = 129.1989f;
							break;
						case 7:
							*uParam4 = { 42.385f, 3727.14f, 38.675f };
							*fParam5 = 313.199f;
							break;
						case 8:
							*uParam4 = { 33.1437f, 3699.5095f, 38.2418f };
							*fParam5 = 20.1993f;
							break;
						case 9:
							*uParam4 = { 54.0197f, 3705.282f, 38.755f };
							*fParam5 = 241.3987f;
							break;
						case 10:
							*uParam4 = { 32.532f, 3725.372f, 38.681f };
							*fParam5 = 333.8f;
							break;
						case 11:
							*uParam4 = { 16.2135f, 3706.3079f, 38.6681f };
							*fParam5 = 94.9999f;
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 46:
					switch (iParam0)
					{
						case 6:
							*uParam4 = { 183.5951f, 6394.55f, 30.3814f };
							*fParam5 = 116.5986f;
							break;
						case 7:
							*uParam4 = { 207.6212f, 6386.592f, 30.4065f };
							*fParam5 = 205.999f;
							break;
						case 8:
							*uParam4 = { 190.183f, 6417.137f, 30.127f };
							*fParam5 = 316.199f;
							break;
						case 9:
							*uParam4 = { 197.7832f, 6415.3315f, 30.1706f };
							*fParam5 = 307.1982f;
							break;
						case 10:
							*uParam4 = { 188.76f, 6429.854f, 30.165f };
							*fParam5 = 240.599f;
							break;
						case 11:
							*uParam4 = { 202.7318f, 6384.416f, 30.4101f };
							*fParam5 = 205.999f;
							break;
					}
					break;
				case 47:
					switch (iParam0)
					{
						case 6:
							*uParam4 = { 1939.429f, 4638.596f, 39.55f };
							*fParam5 = 96.799f;
							break;
						case 7:
							*uParam4 = { 1944.4064f, 4621.246f, 39.4022f };
							*fParam5 = 187.7986f;
							break;
						case 8:
							*uParam4 = { 1944.9197f, 4669.0605f, 39.6679f };
							*fParam5 = 61.7975f;
							break;
						case 9:
							*uParam4 = { 1953.7971f, 4651.093f, 39.7072f };
							*fParam5 = 63.3988f;
							break;
						case 10:
							*uParam4 = { 1963.0544f, 4660.1655f, 39.7662f };
							*fParam5 = 63.1981f;
							break;
						case 11:
							*uParam4 = { 1948.646f, 4633.928f, 39.651f };
							*fParam5 = 126.999f;
							break;
					}
					break;
				case 48:
					switch (iParam0)
					{
						case 6:
							*uParam4 = { 16.2135f, 3706.3079f, 38.6681f };
							*fParam5 = 94.9999f;
							break;
						case 7:
							*uParam4 = { 33.1437f, 3699.5095f, 38.2418f };
							*fParam5 = 20.1993f;
							break;
						case 8:
							*uParam4 = { 54.0197f, 3705.282f, 38.755f };
							*fParam5 = 241.3987f;
							break;
						case 9:
							*uParam4 = { 22.4061f, 3685.776f, 38.7108f };
							*fParam5 = 129.1989f;
							break;
						case 10:
							*uParam4 = { 32.532f, 3725.372f, 38.681f };
							*fParam5 = 333.8f;
							break;
						case 11:
							*uParam4 = { 42.385f, 3727.14f, 38.675f };
							*fParam5 = 313.199f;
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 46:
					switch (iParam0)
					{
						case 6:
							*uParam4 = { 188.76f, 6429.854f, 30.165f };
							*fParam5 = 240.599f;
							break;
						case 7:
							*uParam4 = { 207.6212f, 6386.592f, 30.4065f };
							*fParam5 = 205.999f;
							break;
						case 8:
							*uParam4 = { 197.7832f, 6415.3315f, 30.1706f };
							*fParam5 = 307.1982f;
							break;
						case 9:
							*uParam4 = { 190.183f, 6417.137f, 30.127f };
							*fParam5 = 316.199f;
							break;
						case 10:
							*uParam4 = { 202.7318f, 6384.416f, 30.4101f };
							*fParam5 = 205.999f;
							break;
						case 11:
							*uParam4 = { 183.5951f, 6394.55f, 30.3814f };
							*fParam5 = 116.5986f;
							break;
					}
					break;
				case 47:
					switch (iParam0)
					{
						case 6:
							*uParam4 = { 1963.0544f, 4660.1655f, 39.7662f };
							*fParam5 = 63.1981f;
							break;
						case 7:
							*uParam4 = { 1953.7971f, 4651.093f, 39.7072f };
							*fParam5 = 63.3988f;
							break;
						case 8:
							*uParam4 = { 1944.4064f, 4621.246f, 39.4022f };
							*fParam5 = 187.7986f;
							break;
						case 9:
							*uParam4 = { 1948.646f, 4633.928f, 39.651f };
							*fParam5 = 126.999f;
							break;
						case 10:
							*uParam4 = { 1939.429f, 4638.596f, 39.55f };
							*fParam5 = 96.799f;
							break;
						case 11:
							*uParam4 = { 1944.9197f, 4669.0605f, 39.6679f };
							*fParam5 = 61.7975f;
							break;
					}
					break;
				case 48:
					switch (iParam0)
					{
						case 6:
							*uParam4 = { 42.385f, 3727.14f, 38.675f };
							*fParam5 = 313.199f;
							break;
						case 7:
							*uParam4 = { 33.1437f, 3699.5095f, 38.2418f };
							*fParam5 = 20.1993f;
							break;
						case 8:
							*uParam4 = { 32.532f, 3725.372f, 38.681f };
							*fParam5 = 333.8f;
							break;
						case 9:
							*uParam4 = { 22.4061f, 3685.776f, 38.7108f };
							*fParam5 = 129.1989f;
							break;
						case 10:
							*uParam4 = { 16.2135f, 3706.3079f, 38.6681f };
							*fParam5 = 94.9999f;
							break;
						case 11:
							*uParam4 = { 54.0197f, 3705.282f, 38.755f };
							*fParam5 = 241.3987f;
							break;
					}
					break;
			}
			break;
	}
}

int func_593(int iParam0)//Position - 0xC431
{
	switch (iParam0)
	{
		case 1:
			return joaat("dubsta");
		case 2:
			return joaat("vamos");
		case 3:
			return joaat("rebel2");
		case 4:
			return joaat("kamacho");
		case 5:
			return joaat("comet5");
		default:
	}
	return joaat("dubsta");
}

Vector3 func_594(int iParam0)//Position - 0x25086
{
	switch (iParam0)
	{
		case 0:
			return -2364.395f, 3351.1047f, 31.8329f;
		case 1:
			return -2316.0933f, 3353.1084f, 31.8368f;
		case 2:
			return -2334.4307f, 3363.3738f, 31.8321f;
		case 3:
			return -2353.2769f, 3374.9424f, 31.8329f;
		case 4:
			return -2372.004f, 3385.2944f, 31.8329f;
		case 5:
			return -2224.3394f, 3248.9f, 31.8102f;
		case 6:
			return -2238.1506f, 3223.9824f, 31.8102f;
		case 7:
			return -2251.9897f, 3200.8274f, 31.81f;
		case 8:
			return -2262.2456f, 3183.0215f, 31.81f;
		case 9:
			return -2383.7446f, 3361.9934f, 31.8329f;
		default:
	}
	return 0f, 0f, 0f;
}

float func_595(int iParam0)//Position - 0x327A3
{
	switch (iParam0)
	{
		case 0:
			return 329.9994f;
		case 1:
			return 150.7997f;
		case 2:
			return 150.7997f;
		case 3:
			return 150.3997f;
		case 4:
			return 150.3997f;
		case 5:
			return 239.3995f;
		case 6:
			return 238.5995f;
		case 7:
			return 238.5995f;
		case 8:
			return 238.5995f;
		case 9:
			return 331.7995f;
		default:
	}
	return 0f;
}

int func_596(int iParam0)//Position - 0x329A4
{
	switch (iParam0)
	{
		case 53:
			return 1;
		default:
	}
	return 0;
}

int func_597(int iParam0, int iParam1, int iParam2)//Position - 0x32A2E
{
	int iVar0;
	iVar0 = 0;
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					iVar0 = joaat("issi3");
					break;
				case 1:
					iVar0 = joaat("asbo");
					break;
				case 2:
					iVar0 = joaat("kanjo");
					break;
				case 3:
					iVar0 = joaat("sentinel3");
					break;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 0:
					iVar0 = joaat("retinue2");
					break;
				case 1:
					iVar0 = joaat("yosemite2");
					break;
				case 2:
					iVar0 = joaat("sugoi");
					break;
				case 3:
					iVar0 = joaat("jugular");
					break;
			}
			break;
		case 3:
			switch (iParam2)
			{
				case 0:
					iVar0 = joaat("sultan2");
					break;
				case 1:
					iVar0 = joaat("gauntlet3");
					break;
				case 2:
					iVar0 = joaat("ellie");
					break;
				case 3:
					iVar0 = joaat("komoda");
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 0:
					iVar0 = joaat("manchez");
					break;
				case 1:
					iVar0 = joaat("stryder");
					break;
				case 2:
					iVar0 = joaat("defiler");
					break;
				case 3:
					iVar0 = joaat("lectro");
					break;
			}
			break;
		case 5:
			switch (iParam2)
			{
				case 0:
					iVar0 = joaat("zhaba");
					break;
				case 1:
					iVar0 = joaat("vagrant");
					break;
				case 2:
					iVar0 = joaat("outlaw");
					break;
				case 3:
					iVar0 = joaat("everon");
					break;
			}
			break;
		default:
			iVar0 = joaat("sandking");
			switch (iParam0)
			{
				case 16:
					iVar0 = joaat("daemon");
					break;
			}
			break;
	}
	return iVar0;
}

bool func_598()//Position - 0x3720A
{
	int iVar0;
	return (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, false) && WEAPON::GET_WEAPONTYPE_GROUP(iVar0) != joaat("GROUP_MELEE"));
}

void func_599(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4)//Position - 0x4F4D9
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 53:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 222.5657f, -441.4509f, 44.2469f };
							*fParam4 = 161.3983f;
							break;
						case 1:
							*uParam3 = { 216.33f, -446.5793f, 43.3472f };
							*fParam4 = 265.9967f;
							break;
						case 2:
							*uParam3 = { 228.6967f, -453.4553f, 43.3472f };
							*fParam4 = 173.7965f;
							break;
					}
					break;
				case 54:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 117.4721f, -697.4313f, 41.0289f };
							*fParam4 = 355.1993f;
							break;
						case 1:
							*uParam3 = { 118.8851f, -680.8931f, 41.0292f };
							*fParam4 = 249.3983f;
							break;
						case 2:
							*uParam3 = { 133.2497f, -683.815f, 41.0292f };
							*fParam4 = 185.5983f;
							break;
					}
					break;
				case 55:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 328.4309f, -1584.592f, 31.7925f };
							*fParam4 = 106.7999f;
							break;
						case 1:
							*uParam3 = { 325.5886f, -1591.0076f, 31.5946f };
							*fParam4 = 143.3998f;
							break;
						case 2:
							*uParam3 = { 308.2289f, -1588.979f, 30.5322f };
							*fParam4 = 305.3993f;
							break;
					}
					break;
			}
			break;
	}
}

struct<7> func_600(int iParam0, int iParam1, int iParam2)//Position - 0x4F66C
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	char* sVar4;
	struct<7> Var5;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 6:
					switch (iParam2)
					{
						case 0:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { 181.1719f, -943.9254f, 29.0919f };
							fVar2 = 322.3969f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 1:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { 180.0119f, -875.674f, 30.1166f };
							fVar2 = 262.9963f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 2:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { 236.6564f, -896.9291f, 29.692f };
							fVar2 = 136.3978f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 3:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { 179.4794f, -917.4413f, 29.6918f };
							fVar2 = 315.3944f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 4:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { 221.2252f, -946.4835f, 29.0919f };
							fVar2 = 343.5976f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -816.8832f, -1107.7781f, 10.1742f };
							fVar2 = 169.7975f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 1:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -824.7117f, -1059.9265f, 10.8547f };
							fVar2 = 124.7943f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 2:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -839.9531f, -1130.027f, 6.0287f };
							fVar2 = 98.3956f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 3:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -843.9219f, -1098.0995f, 8.1164f };
							fVar2 = 299.4457f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 4:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -824.1573f, -1083.4838f, 10.1374f };
							fVar2 = 114.4442f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 0:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -1656.7551f, -1110.5813f, 12.0417f };
							fVar2 = 305.8456f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 1:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -1674.5972f, -1144.2139f, 12.0174f };
							fVar2 = 197.4455f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 2:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -1705.1829f, -1147.2384f, 12.0316f };
							fVar2 = 235.6447f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 3:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -1696.5848f, -1092.8013f, 12.1526f };
							fVar2 = 181.8436f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 4:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -1686.6598f, -1122.8789f, 12.1522f };
							fVar2 = 246.8429f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 0:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -838.0202f, -125.3753f, 36.5439f };
							fVar2 = 60.8407f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 1:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -846.4454f, -64.8119f, 36.8384f };
							fVar2 = 134.2398f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 2:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -804.5388f, -146.0753f, 36.9139f };
							fVar2 = 242.8396f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 3:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -769.3478f, -82.6857f, 36.7029f };
							fVar2 = 342.639f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 4:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -814.4337f, -103.3956f, 36.5915f };
							fVar2 = 251.0383f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
					}
					break;
				case 10:
					switch (iParam2)
					{
						case 0:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -409.6533f, 1073.154f, 326.6821f };
							fVar2 = 175.039f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 1:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -423.1417f, 1113.9352f, 325.768f };
							fVar2 = 180.2386f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 2:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -405.0932f, 1055.7506f, 322.8424f };
							fVar2 = 165.0388f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 3:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -430.4341f, 1061.5698f, 326.6907f };
							fVar2 = 112.4379f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 4:
							iVar0 = joaat("S_M_Y_WestSec_02");
							Var1 = { -385.588f, 1082.1653f, 323.6203f };
							fVar2 = 164.237f;
							iVar3 = joaat("WEAPON_PISTOL");
							sVar4 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 6:
					switch (iParam2)
					{
						case 0:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { 181.7017f, -942.7737f, 29.0919f };
							fVar2 = 173.3973f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 1:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { 181.1374f, -875.9651f, 30.1167f };
							fVar2 = 78.1965f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 2:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { 236.0358f, -897.9385f, 29.692f };
							fVar2 = 344.5967f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 3:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { 180.2584f, -916.6758f, 29.6918f };
							fVar2 = 139.7966f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 4:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { 221.5317f, -945.3689f, 29.0919f };
							fVar2 = 162.7965f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -817.181f, -1108.9716f, 10.1768f };
							fVar2 = 318.1971f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 1:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -825.8268f, -1060.4736f, 10.7469f };
							fVar2 = 292.7971f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 2:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -841.2771f, -1130.4155f, 6.0955f };
							fVar2 = 268.7969f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 3:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -843.0751f, -1097.3662f, 8.0877f };
							fVar2 = 146.7972f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 4:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -825.3754f, -1083.9438f, 10.1374f };
							fVar2 = 267.7971f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 0:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -1655.757f, -1109.8446f, 12.0386f };
							fVar2 = 130.9964f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 1:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -1674.3641f, -1145.2273f, 12.0173f };
							fVar2 = 8.1966f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 2:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -1704.212f, -1148.1951f, 12.03f };
							fVar2 = 30.7965f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 3:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -1696.4054f, -1093.9073f, 12.1526f };
							fVar2 = 11.1964f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 4:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -1685.3025f, -1123.4005f, 12.1521f };
							fVar2 = 75.7966f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 0:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -839.2482f, -124.5717f, 36.5654f };
							fVar2 = 243.442f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 1:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -847.426f, -65.6505f, 36.8384f };
							fVar2 = 308.2423f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 2:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -803.5362f, -146.517f, 36.896f };
							fVar2 = 74.6424f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 3:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -768.8218f, -81.8011f, 36.7803f };
							fVar2 = 144.842f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 4:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -813.2503f, -103.7418f, 36.5992f };
							fVar2 = 86.8423f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
					}
					break;
				case 10:
					switch (iParam2)
					{
						case 0:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -409.5945f, 1071.8882f, 326.6821f };
							fVar2 = 347.6418f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 1:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -423.0339f, 1112.7365f, 325.768f };
							fVar2 = 3.2416f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 2:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -405.1944f, 1054.8146f, 322.8425f };
							fVar2 = 0.2417f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 3:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -431.375f, 1060.806f, 326.6899f };
							fVar2 = 310.0415f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
						case 4:
							iVar0 = joaat("A_M_M_Farmer_01");
							Var1 = { -385.8932f, 1081.1248f, 323.5682f };
							fVar2 = 338.4417f;
							iVar3 = joaat("WEAPON_SAWNOFFSHOTGUN");
							sVar4 = "WORLD_HUMAN_SMOKING";
							break;
					}
					break;
			}
			break;
	}
	Var5.f_0 = iVar0;
	Var5.f_1 = { Var1 };
	Var5.f_4 = fVar2;
	Var5.f_5 = iVar3;
	Var5.f_6 = sVar4;
	return Var5;
}

int func_601(int iParam0, int iParam1, int iParam2)//Position - 0x5021E
{
	switch (iParam0)
	{
		case 1:
			return joaat("HC_Driver");
		case 2:
			return joaat("HC_Driver");
		case 3:
			return joaat("U_M_M_EdToh");
		case 4:
			return joaat("S_M_Y_XMech_02");
		case 5:
			return joaat("MP_M_WeapExp_01");
		default:
	}
	switch (iParam1)
	{
		case 1:
			return joaat("HC_Hacker");
		case 2:
			return joaat("HC_Hacker");
		case 3:
			return joaat("S_M_Y_WareTech_01");
		case 4:
			return joaat("IG_Money");
		case 5:
			return joaat("IG_Paige");
		default:
	}
	switch (iParam2)
	{
		case 1:
			return joaat("HC_Gunman");
		case 2:
			return joaat("HC_Gunman");
		case 3:
			return joaat("U_M_Y_SmugMech_01");
		case 4:
			return joaat("MP_M_WeapExp_01");
		case 5:
			return joaat("HC_Gunman");
		default:
	}
	return joaat("G_M_Y_Lost_01");
}

float func_602(bool bParam0)//Position - 0x50D7E
{
	if (bParam0)
	{
		return 8f;
	}
	return 6f;
}

void func_603(int iParam0, bool bParam1, int iParam2)//Position - 0x5BA9E
{
	if (bParam1)
	{
		switch (iParam2)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
				break;
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
				break;
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, 0);
				break;
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 3, 3, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 3, 3, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 3, 0, 0);
				break;
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 4, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 4, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 4, 0, 0);
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
				PED::SET_PED_PROP_INDEX(iParam0, 0, 0, 0, false);
				break;
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 0, 0);
				PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, false);
				break;
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 2, 0, 0);
				break;
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 3, 0, 0);
				break;
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 4, 0, 0);
				PED::SET_PED_PROP_INDEX(iParam0, 0, 1, 0, false);
				break;
			}
	}
}

void func_604(int iParam0)//Position - 0x5D262
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	ENTITY::SET_ENTITY_COORDS(iParam0, Var0.f_0, Var0.f_1, (Var0.f_2 - 10f), true, false, false, true);
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
}

int func_605(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDFEC1
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if ((iVar0 == iParam2 || iVar0 == iParam3) || iVar0 == iParam4)
	{
		return -1;
	}
	return iVar0;
}

void func_606(int iParam0)//Position - 0xF904C
{
	__LIB_1__.func_597(8525, iParam0, -1, 1, 0);
	Global_1970897[PLAYER::PLAYER_ID() /*68*/].f_18.f_15 = iParam0;
}

void func_607()//Position - 0xFA387
{
	__LIB_0__.func_495(&Global_1966143, 0, 0);
}

void func_608()//Position - 0xFB1D6
{
	if (HUD::DOES_BLIP_EXIST(iLocal_1380))
	{
		HUD::REMOVE_BLIP(&iLocal_1380);
	}
}

char* func_609()//Position - 0x20FDB3
{
	return "MUTES_RADIO_SCENE";
}

char* func_610(int iParam0)//Position - 0x20FEA4
{
	switch (iParam0)
	{
		case 0:
			return "MP_1";
		case 1:
			return "MP_2";
		case 2:
			return "MP_3";
		case 3:
			return "MP_4";
		default:
	}
	return "MP_1";
}

void func_611()//Position - 0x2115C6
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_2__.func_641()))
	{
		AUDIO::START_AUDIO_SCENE(__LIB_2__.func_641());
	}
}

void func_612(int iParam0)//Position - 0x211CA1
{
	if (Global_2815059.f_6757 != iParam0)
	{
		Global_2815059.f_6757 = iParam0;
	}
}

void func_613()//Position - 0x215A0F
{
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(800);
	}
}

int func_614(int iParam0)//Position - 0x231B81
{
	switch (iParam0)
	{
		case 128:
			return 714;
		case 129:
			return 715;
		case 130:
			return 716;
		case 131:
			return 717;
		case 132:
			return 718;
		case 133:
			return 719;
		default:
	}
	return 0;
}

int func_615(int iParam0)//Position - 0x231BD9
{
	switch (iParam0)
	{
		case 128:
			return 726;
		case 129:
			return 727;
		case 130:
			return 728;
		case 131:
			return 729;
		case 132:
			return 730;
		case 133:
			return 731;
		default:
	}
	return 0;
}

int func_616(int iParam0)//Position - 0x231C31
{
	switch (iParam0)
	{
		case 128:
			return 720;
		case 129:
			return 721;
		case 130:
			return 722;
		case 131:
			return 723;
		case 132:
			return 724;
		case 133:
			return 725;
		default:
	}
	return 0;
}

void func_617()//Position - 0x233FEF
{
	if (!__LIB_28__.func_533(0))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
		__LIB_28__.func_532(0);
	}
}

bool func_618()//Position - 0x235946
{
	int iVar0;
	return (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, false) && iVar0 != joaat("WEAPON_UNARMED"));
}

int func_619(bool bParam0)//Position - 0x23706F
{
	if (bParam0 != -1)
	{
		return Global_1970897[bParam0 /*68*/].f_18.f_7;
	}
	return 0;
}

int func_620(int iParam0)//Position - 0x23A972
{
	switch (iParam0)
	{
		case 38:
		case 34:
		case 42:
		case 26:
		case 25:
		case 41:
			return 1;
		default:
	}
	return 0;
}

int func_621()//Position - 0x25F3D4
{
	bool bVar0;
	int iVar1;
	bVar0 = __LIB_0__.func_582();
	iVar1 = PLAYER::GET_PLAYER_PED(bVar0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)) && (((PED::IS_PED_IN_FLYING_VEHICLE(iVar1) || Global_2689235[bVar0 /*453*/].f_71.f_3 == 2) || Global_2689235[bVar0 /*453*/].f_71.f_3 == 3) || Global_2689235[bVar0 /*453*/].f_71.f_3 == 4))
	{
		return 1;
	}
	return 0;
}

void func_622(int* iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x267746
{
	int iVar0;
	iVar0 = 0;
	if (!bParam3)
	{
		iVar0 = 4;
		while (iVar0 <= 0)
		{
			if (iLocal_117[iVar0] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_117[iVar0]))
				{
					AUDIO::STOP_SOUND(iLocal_117[iVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_117[iVar0]);
					iLocal_117[iVar0] = -1;
				}
			}
			iVar0++;
		}
		if (iParam0->f_20 > -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_20))
			{
				AUDIO::STOP_SOUND(iParam0->f_20);
				AUDIO::RELEASE_SOUND_ID(iParam0->f_20);
				iParam0->f_20 = -1;
			}
		}
	}
	MISC::CLEAR_BIT(iParam0, 25);
	MISC::CLEAR_BIT(iParam0, 5);
	if (iParam2 == 1)
	{
		MISC::CLEAR_BIT(iParam0, 12);
		MISC::CLEAR_BIT(iParam0, 9);
		MISC::CLEAR_BIT(iParam0, 18);
		MISC::CLEAR_BIT(&(iParam0->f_1), 2);
		MISC::CLEAR_BIT(iParam0, 27);
		MISC::CLEAR_BIT(iParam0, 28);
	}
	iParam0->f_1 = 0;
	iParam0->f_7 = iParam0->f_6;
	iLocal_124 = 0;
	if (bParam1)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_123);
	}
	MISC::CLEAR_BIT(iParam0, 29);
	__LIB_0__.func_686(0, 1, 1, 0);
}

void func_623(int* iParam0, int iParam1, bool bParam2)//Position - 0x26ABBD
{
	if (!BitTest(*iParam0, 29))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_123, "SET_BACKGROUND", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
		if (!bParam2)
		{
			if (GRAPHICS::GET_IS_WIDESCREEN())
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_123, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
			}
			else
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_123, "ADD_PROGRAM", SYSTEM::TO_FLOAT(8), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_123, "SET_LABELS");
		__LIB_0__.func_478("H_ICON_1");
		if (iParam1 == 0)
		{
			__LIB_0__.func_478("H_ICON_2a");
		}
		else
		{
			__LIB_0__.func_478("H_ICON_2");
		}
		__LIB_0__.func_478("H_ICON_3");
		__LIB_0__.func_478("H_ICON_4");
		__LIB_0__.func_478("H_ICON_5");
		__LIB_0__.func_478("H_ICON_6");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(iParam0, 29);
	}
}

int func_624()//Position - 0x26D103
{
	switch (Global_7451)
	{
		case 84:
			return 0;
		case 86:
			return 1;
		case 19:
			return 2;
		case 76:
			return 3;
		case 20:
			return 4;
		case 18:
			return 5;
		case 131:
			return 6;
		case 151:
			return 7;
		case 153:
			return 8;
		case 152:
			return 9;
		case 156:
			return 10;
		default:
	}
	return -1;
}

int func_625()//Position - 0x26D185
{
	switch (Global_7451)
	{
		case 84:
		case 86:
		case 19:
		case 76:
		case 20:
		case 18:
		case 131:
		case 151:
		case 153:
		case 152:
		case 156:
			return 1;
		default:
	}
	return 0;
}

int func_626(int iParam0)//Position - 0x2778A0
{
	if (iParam0 == -100)
	{
	}
	return 0;
}

bool func_627()//Position - 0x27DABE
{
	return __LIB_0__.func_109() == 1;
}

int func_628(bool bParam0)//Position - 0x28478E
{
	if (bParam0)
	{
		return 3;
	}
	return 2;
}

char* func_629()//Position - 0x285E3D
{
	return "NVC_HUD_SPK" /* GXT: SUSPICION */;
}

int func_630()//Position - 0x285FFB
{
	return 25;
}

char* func_631()//Position - 0x2870BB
{
	return "SMHUD_ENEMIES" /* GXT: ENEMIES */;
}

int func_632()//Position - 0x287D5F
{
	return 158;
}

float func_633()//Position - 0x288836
{
	return 1.4f;
}

int func_634()//Position - 0x28887F
{
	return 456;
}

float func_635()//Position - 0x28A2C6
{
	return 0.95f;
}

int func_636()//Position - 0x28CF47
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_637(int iParam0)//Position - 0x290D0E
{
	PED::SET_PED_CAN_ARM_IK(iParam0, true);
	PED::SET_PED_CAN_HEAD_IK(iParam0, true);
	PED::SET_PED_CAN_LEG_IK(iParam0, true);
	PED::SET_PED_CAN_TORSO_IK(iParam0, true);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, true);
}

int func_638(int iParam0, float fParam1, bool bParam2)//Position - 0x292FBF
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 287);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_639()//Position - 0x29536B
{
	return 2900480;
}

void func_640(int iParam0)//Position - 0x2962C3
{
	struct<3> Var0;
	ENTITY::SET_ENTITY_VISIBLE(iParam0, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam0, true);
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	ENTITY::SET_ENTITY_COORDS(iParam0, Var0.f_0, Var0.f_1, (Var0.f_2 + 10f), true, false, false, true);
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
}

void func_641(bool bParam0)//Position - 0x2987F5
{
	if (Global_4521801.f_8)
	{
		if (bParam0)
		{
			Global_4521801.f_7 = 1;
		}
		else
		{
			Global_4521801.f_6 = 1;
		}
	}
}

void func_642(int iParam0)//Position - 0x29AF44
{
	if (iLocal_1372[iParam0] != __LIB_0__.func_160())
	{
		if (uLocal_1373[iParam0] != iLocal_1372[iParam0])
		{
			uLocal_1373[iParam0] = iLocal_1372[iParam0];
		}
	}
}

void func_643(int iParam0)//Position - 0x2BB251
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = Global_262145.f_27105 /* Tunable: VC_WORK_COOLDOWN */;
	if (iParam0 != -1)
	{
		iVar1 = iParam0;
	}
	iVar2 = (iVar0 + iVar1);
	__LIB_1__.func_597(8284, iVar2, -1, 1, 0);
}

int func_644(int iParam0)//Position - 0x7497
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_28815 /* Tunable: 2027377935 */;
		case 2:
			return Global_262145.f_28816 /* Tunable: -634674073 */;
		case 3:
			return Global_262145.f_28817 /* Tunable: -1507129807 */;
		case 4:
			return Global_262145.f_28818 /* Tunable: -490900621 */;
		case 5:
			return Global_262145.f_28819 /* Tunable: -1454763111 */;
		default:
	}
	return 0;
}

int func_645(int iParam0)//Position - 0x74F7
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_28810 /* Tunable: 88090906 */;
		case 2:
			return Global_262145.f_28811 /* Tunable: -891458514 */;
		case 3:
			return Global_262145.f_28812 /* Tunable: 1321285827 */;
		case 4:
			return Global_262145.f_28813 /* Tunable: -856366310 */;
		case 5:
			return Global_262145.f_28814 /* Tunable: -1218087984 */;
		default:
	}
	return 0;
}

int func_646(int iParam0)//Position - 0x7557
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_28805 /* Tunable: 74718927 */;
		case 2:
			return Global_262145.f_28806 /* Tunable: 2084651107 */;
		case 3:
			return Global_262145.f_28807 /* Tunable: 2092632403 */;
		case 4:
			return Global_262145.f_28808 /* Tunable: -289926524 */;
		case 5:
			return Global_262145.f_28809 /* Tunable: -409770275 */;
		default:
	}
	return 0;
}

int func_647(int iParam0, int iParam1)//Position - 0x872A
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_2, iParam1);
	}
	return 0;
}

int func_648(int iParam0)//Position - 0x95E8
{
	if (iParam0 != -1)
	{
		return Global_1970897[iParam0 /*68*/].f_18.f_5;
	}
	return 0;
}

void func_649(var uParam0, var uParam1, var uParam2)//Position - 0x134C1
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_305 = uParam0;
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_305.f_1 = uParam1;
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_305.f_2 = uParam2;
}

int func_650(int iParam0)//Position - 0x1FE1C
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 7);
	}
	return 0;
}

int func_651(int iParam0)//Position - 0x1FE5D
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 6);
	}
	return 0;
}

float func_652(int iParam0)//Position - 0x2027F
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_28774 /* Tunable: 675917102 */;
		case 2:
			return Global_262145.f_28775 /* Tunable: 1912536171 */;
		default:
	}
	return 1f;
}

int func_653(int iParam0)//Position - 0x202AF
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_28793 /* Tunable: -1638885821 */;
		case 1:
			return Global_262145.f_28795 /* Tunable: -582734553 */;
		case 2:
			return Global_262145.f_28794 /* Tunable: 1934398910 */;
		case 3:
			return Global_262145.f_28796 /* Tunable: 1277889925 */;
		default:
	}
	return 0;
}

char* func_654()//Position - 0x2198F
{
	return "DLC_XM17_Planning_Board_Soundset";
}

Vector3 func_655()//Position - 0x2199B
{
	return 353.79303f, 4877.0044f, -58.4718f;
}

int func_656(int iParam0)//Position - 0x25BB2
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 0);
	}
	return 0;
}

int func_657(int iParam0)//Position - 0x2BED9
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_40, 5);
	}
	return 0;
}

struct<2> func_658(bool bParam0, int iParam1, bool bParam2)//Position - 0xC5DA2
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	Var0.f_1 = -1;
	if (!__LIB_4__.func_0(bParam0))
	{
		return Var0;
	}
	if ((__LIB_1__.func_264(bParam0, 0, 1) && iParam1 > -2) && iParam1 < 5)
	{
		if (iParam1 == -1)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if ((__LIB_2__.func_467(Global_1892703[bParam0 /*599*/].f_556.f_1[iVar1 /*2*/]) && __LIB_3__.func_809(Global_1892703[bParam0 /*599*/].f_556.f_1[iVar1 /*2*/])) && (!bParam2 || !func_2039(Global_1892703[bParam0 /*599*/].f_556.f_1[iVar1 /*2*/])))
				{
					return Global_1892703[bParam0 /*599*/].f_556.f_1[iVar1 /*2*/];
				}
				iVar1++;
			}
		}
		else
		{
			iVar2 = iParam1;
			if (__LIB_2__.func_467(Global_1892703[bParam0 /*599*/].f_556.f_1[iVar2 /*2*/]) && __LIB_3__.func_809(Global_1892703[bParam0 /*599*/].f_556.f_1[iVar2 /*2*/]))
			{
				return Global_1892703[bParam0 /*599*/].f_556.f_1[iVar2 /*2*/];
			}
		}
	}
	return Var0;
}

bool func_659(int iParam0, int iParam1)//Position - 0x765
{
	return BitTest(Global_2815059.f_5195.f_481[iParam0], iParam1);
}

bool func_660(int iParam0, int iParam1)//Position - 0x12F7
{
	return BitTest(Global_2815059.f_5195.f_458[iParam0], iParam1);
}

int func_661(int iParam0)//Position - 0x29C6
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 1;
		case 24:
			return 1;
		case 45:
			return 1;
		case 46:
			return 1;
		case 47:
			return 1;
		case 48:
			return 1;
		case 49:
			return 1;
		default:
	}
	return 0;
}

Vector3 func_662(int iParam0, int iParam1)//Position - 0x2AC5
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1256.8954f, -1401.264f, 3.2038f;
				case 1:
					return -1219.4602f, -1422.4031f, 3.3108f;
				case 2:
					return -1240.9489f, -1429.7717f, 3.3237f;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1041.4606f, -545.3951f, 34.1047f;
				case 1:
					return -1051.7765f, -513.1072f, 35.0386f;
				case 2:
					return -1001.189f, -534.113f, 35.6678f;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -19.7349f, -1271.8304f, 28.2653f;
				case 1:
					return -40.504f, -1302.9094f, 28.0199f;
				case 2:
					return -17.0678f, -1299.9534f, 28.2507f;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1288.2052f, -2536.4204f, 42.6742f;
				case 1:
					return 1306.9856f, -2568.4392f, 44.0014f;
				case 2:
					return 1313.3694f, -2530.5227f, 44.7044f;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 430.6789f, -1242.7229f, 30.6437f;
				case 1:
					return 477.4944f, -1277.3446f, 28.5466f;
				case 2:
					return 514.2444f, -1259.9031f, 29.4124f;
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 67.0038f, 51.4473f, 72.5151f;
				case 1:
					return 44.0364f, 93.7276f, 77.5862f;
				case 2:
					return 132.1119f, 50.6618f, 73.5083f;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1134.0925f, 271.932f, 79.9903f;
				case 1:
					return 1109.3748f, 216.3957f, 79.9906f;
				case 2:
					return 1153.9059f, 251.8428f, 80.8457f;
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3073.0715f, 595.7681f, 0.2499f;
				case 1:
					return -3039.7754f, 602.9285f, 6.5674f;
				case 2:
					return -3072.1392f, 557.0007f, 1.3571f;
				default:
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -500.0567f, -51.7028f, 38.9927f;
				case 1:
					return -522.8772f, -91.4064f, 38.6031f;
				case 2:
					return -533.3924f, -42.155f, 41.5272f;
				default:
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 1157.6764f, -1321.0662f, 33.7427f;
				case 1:
					return 1141.9562f, -1288.349f, 33.6199f;
				case 2:
					return 1141.4674f, -1332.8531f, 33.6567f;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return -1556.9938f, -265.8279f, 47.2667f;
				case 1:
					return -1575.5088f, -267.0629f, 47.2757f;
				case 2:
					return -1526.6245f, -224.5333f, 51.7633f;
				default:
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return -999.7197f, -2231.4753f, 8.0025f;
				case 1:
					return -1051.127f, -2236.0945f, 10.6505f;
				case 2:
					return -1009.9255f, -2213.719f, 7.9803f;
				default:
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 481.8191f, -2160.3894f, 4.9183f;
				case 1:
					return 522.6403f, -2116.97f, 4.9863f;
				case 2:
					return 515.8954f, -2185.1514f, 4.9867f;
				default:
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 2545.011f, 342.3033f, 107.4631f;
				case 1:
					return 2573.6716f, 340.7719f, 107.4573f;
				case 2:
					return 2551.8755f, 321.9144f, 107.4558f;
				default:
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return -506.8551f, -451.5504f, 33.2013f;
				case 1:
					return -520.6168f, -425.5922f, 33.5149f;
				case 2:
					return -542.0139f, -452.4395f, 33.2769f;
				default:
			}
			break;
		case 45:
			switch (iParam1)
			{
				case 0:
					return 189.0431f, 1163.1935f, 224.5952f;
				case 1:
					return 234.9972f, 1175.1166f, 224.4599f;
				case 2:
					return 182.205f, 1222.7882f, 230.3316f;
				default:
			}
			break;
		case 46:
			switch (iParam1)
			{
				case 0:
					return 1859.0474f, -1073.0427f, 80.9805f;
				case 1:
					return 1930.9203f, -1002.131f, 79.1197f;
				case 2:
					return 1932.3824f, -1073.1066f, 94.7213f;
				default:
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 0:
					return -819.274f, 864.5092f, 201.9619f;
				case 1:
					return -857.0323f, 848.2087f, 201.8778f;
				case 2:
					return -896.3553f, 812.055f, 186.5013f;
				default:
			}
			break;
		case 48:
			switch (iParam1)
			{
				case 0:
					return -2335.4192f, 247.1339f, 168.6021f;
				case 1:
					return -2346.368f, 320.6201f, 168.3408f;
				case 2:
					return -2252.1724f, 262.6512f, 173.6154f;
				default:
			}
			break;
		case 49:
			switch (iParam1)
			{
				case 0:
					return 788.3173f, -2993.3103f, 5.025f;
				case 1:
					return 846.7418f, -2942.5044f, 4.9008f;
				case 2:
					return 812.6157f, -2912.6277f, 4.9009f;
				default:
			}
			break;
		case 35:
			switch (iParam1)
			{
				case 0:
					return 1624.9182f, 1863.3125f, 101.1631f;
				case 1:
					return 1617.8038f, 1855.8367f, 101.9317f;
				case 2:
					return 1625.7621f, 1858.705f, 101.4484f;
				default:
			}
			break;
		case 36:
			switch (iParam1)
			{
				case 0:
					return 1881.2292f, 261.8945f, 162.4245f;
				case 1:
					return 1877.4436f, 270.607f, 162.44f;
				case 2:
					return 1888.0444f, 263.175f, 162.6105f;
				default:
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 0:
					return -180.4747f, 787.4429f, 195.0948f;
				case 1:
					return -172.8306f, 784.4172f, 194.8954f;
				case 2:
					return -187.724f, 790.6658f, 195.0194f;
				default:
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return -477.9237f, -1138.0027f, 24.5716f;
				case 1:
					return -469.9054f, -1141.2981f, 24.7503f;
				case 2:
					return -481.2089f, -1130.2814f, 24.9773f;
				default:
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 0:
					return -3087.5251f, 504.0114f, 2.2315f;
				case 1:
					return -3102.2432f, 503.1497f, -0.4763f;
				case 2:
					return -3102.2078f, 518.6061f, -0.1891f;
				default:
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 0:
					return 435.0352f, 782.0305f, 191.7786f;
				case 1:
					return 377.7029f, 791.6837f, 189.4136f;
				case 2:
					return 373.5618f, 800.5087f, 186.4587f;
				default:
			}
			break;
		case 51:
			switch (iParam1)
			{
				case 0:
					return 329.6051f, -1105.1423f, 38.3562f;
				case 1:
					return 355.2695f, -1109.0596f, 28.4064f;
				case 2:
					return 335.8394f, -1099.4719f, 28.4064f;
				default:
			}
			break;
		case 52:
			switch (iParam1)
			{
				case 0:
					return -38.649f, 934.988f, 227.4654f;
				case 1:
					return -84.6997f, 935.5812f, 232.0286f;
				case 2:
					return -135.8327f, 988.8337f, 235.1435f;
				default:
			}
			break;
		case 53:
			switch (iParam1)
			{
				case 0:
					return -3182.1733f, 1245.3042f, 5.6321f;
				case 1:
					return -3219.602f, 1199.8552f, 2.5499f;
				case 2:
					return -3204.1213f, 1201.8141f, 11.8282f;
				default:
			}
			break;
		case 54:
			switch (iParam1)
			{
				case 0:
					return 1241.9667f, -3052.0278f, 13.2977f;
				case 1:
					return 1227.9376f, -2995.829f, 8.3193f;
				case 2:
					return 1238.2551f, -3008.7305f, 8.3193f;
				default:
			}
			break;
	}
	return -1256.8954f, -1401.264f, 3.2038f;
}

Vector3 func_663(int iParam0)//Position - 0x3533
{
	switch (iParam0)
	{
		case 0:
			return -1238.8511f, -1400.535f, 3.2165f;
		case 1:
			return -1014.2174f, -533.1254f, 35.2295f;
		case 2:
			return -20.5298f, -1271.142f, 28.273f;
		case 3:
			return 1284.595f, -2562.1226f, 43.0983f;
		case 4:
			return 450.3504f, -1230.4711f, 29.034f;
		case 5:
			return 96.6945f, 63.2934f, 72.4168f;
		case 11:
			return 1121.2118f, 239.838f, 79.8556f;
		case 12:
			return -3054.2773f, 608.0347f, 6.2058f;
		case 13:
			return -2955.04f, 402.565f, 14.059f;
		case 14:
			return 1220.405f, 1870.591f, 77.908f;
		case 15:
			return 1110.4274f, -1262.8817f, 19.3388f;
		case 16:
			return -1307.914f, -1258.692f, 3.536f;
		case 17:
			return -172.4439f, -41.4259f, 51.3666f;
		case 18:
			return -500.5161f, -64.1044f, 38.8799f;
		case 19:
			return 1141.1024f, -1319.1995f, 33.6567f;
		case 20:
			return -1567.8386f, -239.2559f, 48.4769f;
		case 21:
			return -1033.6527f, -2216.249f, 7.9812f;
		case 22:
			return 491.1942f, -2136.7896f, 4.9175f;
		case 23:
			return 2548.7385f, 341.2728f, 107.4612f;
		case 24:
			return -480.7506f, -450.5746f, 33.2013f;
		case 45:
			return 187.2586f, 1246.9894f, 224.4599f;
		case 46:
			return 1881.0984f, -1032.1796f, 77.8668f;
		case 47:
			return -803.2568f, 884.084f, 202.1938f;
		case 48:
			return -2334.7673f, 263.5585f, 168.6021f;
		case 49:
			return 822.6735f, -2979.9612f, 5.0207f;
		case 6:
			return 1511.7168f, -2098.7117f, 75.777f;
		case 7:
			return 777.491f, 1287.714f, 359.297f;
		case 8:
			return -1715.441f, -1134.02f, 12.075f;
		case 9:
			return -1832.078f, -2805.618f, 12.944f;
		case 10:
			return 848.653f, -3209.231f, 4.901f;
		case 30:
			return 979.195f, -127.704f, 72.938f;
		case 31:
			return 977.524f, -1824.118f, 30.159f;
		case 32:
			return -680.7855f, -879.4637f, 23.4991f;
		case 33:
			return -1578.277f, -85.852f, 53.134f;
		case 34:
			return -145.437f, -956.396f, 20.277f;
		case 40:
			return -53.0294f, -1418.961f, 28.328f;
		case 41:
			return 85.7264f, -824.765f, 30.0518f;
		case 42:
			return -892.1681f, 132.276f, 58.3107f;
		case 43:
			return 192.946f, 61.563f, 82.601f;
		case 44:
			return -703.855f, -1137.8f, 9.613f;
		case 50:
			return 370.895f, 793.555f, 186.567f;
		case 51:
			return 348.939f, -1098.917f, 28.413f;
		case 52:
			return -138.215f, 984.602f, 235.012f;
		case 53:
			return -3188.038f, 1209.957f, 8.607f;
		case 54:
			return 1220.717f, -3000.777f, 4.865f;
		case 25:
			return -575.8843f, -133.6788f, 34.8194f;
		case 26:
			return 385.3026f, -1633.9333f, 28.2919f;
		case 27:
			return -1079.7545f, -883.9249f, 3.6029f;
		case 28:
			return 851.1126f, -1403.54f, 25.1226f;
		case 29:
			return -1307.5834f, -1527.4987f, 3.3451f;
		case 55:
			return -690.8977f, -611.4503f, 31.1423f;
		case 56:
			return -1776.953f, -252.487f, 48.395f;
		case 57:
			return -1327.994f, 350.675f, 62.719f;
		case 58:
			return -523.9545f, -249.077f, 34.7553f;
		case 59:
			return 291.944f, 195.6205f, 103.3726f;
		case 60:
			return 717.497f, -3858.922f, 0f;
		case 61:
			return 1983.776f, -3537.736f, -0.187f;
		case 62:
			return -2529.737f, -3526.052f, 0.375f;
		case 63:
			return 58.069f, -4048.858f, 0f;
		case 64:
			return -2531.218f, -1086.706f, 0.937f;
		default:
	}
	return -1238.8511f, -1400.535f, 3.2165f;
}

int func_664(int iParam0)//Position - 0x3AE9
{
	switch (iParam0)
	{
		case 2:
		case 12:
			return 0;
		default:
	}
	return 1;
}

struct<4> func_665()//Position - 0x3B4C
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_183;
}

bool func_666(int iParam0, int iParam1)//Position - 0x3C6D
{
	return BitTest(Global_2815059.f_5195.f_699[iParam0], iParam1);
}

bool func_667(int iParam0, int iParam1)//Position - 0x414F
{
	return BitTest(Global_2815059.f_5195.f_412[iParam0], iParam1);
}

bool func_668(int iParam0, int iParam1)//Position - 0x4168
{
	return BitTest(Global_2815059.f_5195.f_389[iParam0], iParam1);
}

int func_669(int iParam0)//Position - 0x4383
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
	}
	return 1;
}

bool func_670(int iParam0, int iParam1)//Position - 0x5D65
{
	return BitTest(Global_2815059.f_5195.f_688[iParam0], iParam1);
}

int func_671(int iParam0)//Position - 0x694F
{
	switch (iParam0)
	{
		case 6:
			return joaat("police3");
		case 7:
			return joaat("police3");
		case 8:
			return joaat("police3");
		case 9:
			return joaat("hexer");
		case 10:
			return joaat("frogger");
		case 13:
			return joaat("mule");
		case 14:
			return joaat("benson");
		case 11:
			return joaat("valkyrie");
		case 18:
			return joaat("marquis");
		default:
	}
	return joaat("huntley");
}

Vector3 func_672(int iParam0, struct<3> Param1, float fParam2)//Position - 0x86CD
{
	switch (Global_2815059.f_5195.f_746[iParam0])
	{
		case 0:
			return Param1 + Vector(0f, fParam2, 0f);
		case 1:
			return Param1 + Vector(0f, 0f, fParam2);
		case 2:
			return Param1 + Vector(0f, -fParam2, 0f);
		case 3:
			return Param1 + Vector(0f, 0f, -fParam2);
		default:
	}
	return Param1;
}

float func_673(int iParam0, int iParam1)//Position - 0x8736
{
	switch (iParam1)
	{
		case 16:
			switch (iParam0)
			{
				case 1:
					return 800f;
				case 2:
					return 600f;
				case 3:
					return 400f;
				default:
			}
			break;
	}
	return 800f;
}

Vector3 func_674(int iParam0)//Position - 0x87C2
{
	return Global_2815059.f_5195.f_721[iParam0 /*3*/];
}

bool func_675(int iParam0, int iParam1)//Position - 0x212E7
{
	return BitTest(Global_2815059.f_5195.f_435[iParam0], iParam1);
}

var func_676()//Position - 0x3B2A1
{
	return Global_4535595;
}

void func_677()//Position - 0x6CE8C
{
	if (__LIB_0__.func_649(&(Global_2789228.f_142)))
	{
		__LIB_0__.func_579(&(Global_2789228.f_142));
	}
	__LIB_0__.func_580(&(Global_2789228.f_142), 1, 0);
}

struct<6> func_678(int iParam0)//Position - 0x70ECF
{
	struct<6> Var0;
	StringCopy(&Var0, "WH_CONTRATP_", 24);
	StringIntConCat(&Var0, iParam0, 24);
	return Var0;
}

struct<6> func_679(int iParam0)//Position - 0x70EE9
{
	struct<6> Var0;
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BYCB_EGG" /* GXT: Ornamental Egg */, 24);
			break;
		case 2:
			StringCopy(&Var0, "BYCB_MGUN" /* GXT: Golden Minigun */, 24);
			break;
		case 3:
			StringCopy(&Var0, "BYCB_DMND" /* GXT: Large Diamond */, 24);
			break;
		case 4:
			StringCopy(&Var0, "BYCB_SASHDE" /* GXT: Rare Hide */, 24);
			break;
		case 5:
			StringCopy(&Var0, "BYCB_FREEL" /* GXT: Film Reel */, 24);
			break;
		case 6:
			StringCopy(&Var0, "BYCB_WATCH" /* GXT: Rare Pocket Watch */, 24);
			break;
		default:
			StringCopy(&Var0, "CONTRASPECIAL" /* GXT: Special Item */, 24);
			break;
	}
	return Var0;
}

bool func_680(int iParam0)//Position - 0x761A6
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_318, 2);
}

int func_681()//Position - 0x11E9A7
{
	if ((__LIB_24__.func_923() || !__LIB_4__.func_139(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_4523.f_1, 7))
	{
		return 0;
	}
	return 1;
}

char* func_682(bool bParam0, int iParam1)//Position - 0x12FC19
{
	if (bParam0)
	{
		switch (iParam1)
		{
			case 0:
				return "CASINO_ENT_F0_H" /* GXT: Enter the Casino. */;
			case 1:
				return "CASINO_ENT_F1_H" /* GXT: Enter your Penthouse. */;
			case 2:
				return "CASINO_ENT_F2_H" /* GXT: Enter your Penthouse Garage. */;
			case 3:
				return "CASINO_ENT_F3_H" /* GXT: Enter the Parking Garage. */;
			case 4:
				return "CASINO_ENT_F10E" /* GXT: Enter The Music Locker. */;
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				return "CASINO_BUY_PROP" /* GXT: Purchase the Penthouse from www.thediamondcasinoandresort.com. */;
			case 2:
				return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
			case 4:
				if (__LIB_24__.func_923())
				{
					return "CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */;
				}
				else if (BitTest(Global_1946250.f_4523.f_1, 7))
				{
					return "CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */;
				}
				return "CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */;
				break;
			}
	}
	return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
}

int func_683(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1CF628
{
	switch (__LIB_3__.func_974(iParam0))
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -4.3114f, 5.8923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				case 1:
					*uParam2 = { -4.3114f, 4.3923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				case 2:
					*uParam2 = { -2.8114f, 5.8923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				case 3:
					*uParam2 = { -2.8114f, 4.3923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -6.1997f, 8.7449f, 0.0001f };
					*uParam3 = 260f;
					return 1;
					break;
				case 1:
					*uParam2 = { -6.6f, 7.345f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				case 2:
					*uParam2 = { -6.6f, 5.7449f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				case 3:
					*uParam2 = { -6.1997f, 4.2449f, 0.0001f };
					*uParam3 = 280f;
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -7.6002f, 5.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				case 1:
					*uParam2 = { -7.6002f, 3.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				case 2:
					*uParam2 = { -7.6002f, 1.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				case 3:
					*uParam2 = { -7.6002f, -0.2439f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_684(int iParam0)//Position - 0x1CFAAA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29)
		{
			return 1;
		}
	}
	return 0;
}

int func_685(int iParam0)//Position - 0x1D02FE
{
	int iVar0;
	iVar0 = __LIB_2__.func_191(iParam0);
	if (iVar0 != __LIB_0__.func_160())
	{
		return Global_2689235[iVar0 /*453*/].f_210;
	}
	return 0;
}

void func_686(bool bParam0, int iParam1)//Position - 0x1D3087
{
	int iVar0;
	bool bVar1;
	if (__LIB_2__.func_748(iParam1))
	{
		__LIB_2__.func_747(iParam1, &iVar0, &bVar1);
		if (bParam0 && BitTest(Global_1946250.f_3554[iVar0], bVar1))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_3554[iVar0]), bVar1);
		}
		else if (!bParam0 && !BitTest(Global_1946250.f_3554[iVar0], bVar1))
		{
			MISC::SET_BIT(&(Global_1946250.f_3554[iVar0]), bVar1);
		}
	}
}

int func_687(int iParam0)//Position - 0x1DD486
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
		case 3:
			return 7;
		default:
	}
	return 4;
}

void func_688(int iParam0, struct<3> Param1, bool bParam2, bool bParam3)//Position - 0x1F0A4C
{
	Global_4541418[iParam0 /*3*/] = { Param1 };
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&Global_4541229, 5);
			break;
		case 1:
			MISC::CLEAR_BIT(&Global_4541229, 6);
			break;
		case 2:
			MISC::CLEAR_BIT(&Global_4541229, 7);
			break;
		case 3:
			MISC::CLEAR_BIT(&Global_4541229, 8);
			break;
		default:
			break;
	}
	Global_4541418[iParam0 /*3*/] = { Param1 };
	if (bParam2)
	{
		MISC::SET_BIT(&Global_8137, 29);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8137, 29);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&Global_8138, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8138, 1);
	}
}

bool func_689()//Position - 0x1F1469
{
	return Global_1952153;
}

int func_690(int iParam0)//Position - 0x19A05
{
	switch (iParam0)
	{
		case joaat("S_M_Y_Cop_01"):
		case joaat("S_F_Y_Cop_01"):
		case joaat("S_M_Y_Swat_01"):
		case joaat("S_M_M_FIBOffice_01"):
		case joaat("S_M_Y_Sheriff_01"):
		case joaat("S_F_Y_Sheriff_01"):
		case joaat("S_M_Y_Ranger_01"):
		case joaat("S_F_Y_Ranger_01"):
		case joaat("S_M_Y_BlackOps_01"):
		case joaat("S_M_M_Armoured_01"):
		case joaat("S_M_Y_Pilot_01"):
		case joaat("S_M_M_FIBSec_01"):
			return 1;
			break;
	}
	return 0;
}

int func_691(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDB320
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__.func_709(iVar0, 14, func_1352(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_692()//Position - 0x1C14E0
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar2 = __LIB_2__.func_191(PLAYER::PLAYER_ID());
	if (iVar2 != __LIB_0__.func_160())
	{
		iVar1 = 1;
		while (iVar1 <= 22)
		{
			if (__LIB_7__.func_619(iVar2, iVar1))
			{
				MISC::SET_BIT(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	return uVar0;
}

var func_693()//Position - 0x17F88
{
	return Global_2870003[__LIB_0__.func_5()];
}

int func_694(int iParam0)//Position - 0x2190C
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_15764 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL0 */;
		case 1:
			return Global_262145.f_15765 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL1 */;
		case 2:
			return Global_262145.f_15766 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL2 */;
		case 3:
			return Global_262145.f_15767 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL3 */;
		case 4:
			return Global_262145.f_15768 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL4 */;
		case 5:
			return Global_262145.f_15769 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL5 */;
		case 6:
			return Global_262145.f_15770 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL6 */;
		case 7:
			return Global_262145.f_15771 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL7 */;
		case 8:
			return Global_262145.f_15772 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL8 */;
		case 9:
			return Global_262145.f_15773 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL9 */;
		case 10:
			return Global_262145.f_15774 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL10 */;
		case 11:
			return Global_262145.f_15775 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL11 */;
		case 12:
			return Global_262145.f_15776 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL12 */;
		case 13:
			return Global_262145.f_15777 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL13 */;
		case 14:
			return Global_262145.f_15778 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL14 */;
		case 15:
			return Global_262145.f_15779 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL15 */;
		case 16:
			return Global_262145.f_15780 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL16 */;
		case 17:
			return Global_262145.f_15781 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL17 */;
		case 18:
			return Global_262145.f_15782 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL18 */;
		case 19:
			return Global_262145.f_15783 /* Tunable: EXEC_DISABLE_SELL_COORD_GLOBAL19 */;
		default:
	}
	return 0;
}

void func_695(int iParam0)//Position - 0x227F4
{
	Local_157.f_0 = iParam0;
}

void func_696()//Position - 0x25B2B
{
	if (__LIB_0__.func_649(&(Global_2789228.f_140)))
	{
		__LIB_0__.func_579(&(Global_2789228.f_140));
	}
	__LIB_0__.func_580(&(Global_2789228.f_140), 1, 0);
}

int func_697(bool bParam0, int iParam1)//Position - 0x52B47
{
	int iVar0;
	if (bParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (__LIB_1__.func_346(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[bParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return Global_1853348[bParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_698(int iParam0)//Position - 0xC1266
{
	return __LIB_1__.func_144(PLAYER::PLAYER_ID(), iParam0);
}

int func_699()//Position - 0xC2AC6
{
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_lowrider");
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_lowrider"))
	{
		return 1;
	}
	return 0;
}

float func_700(int iParam0, float* fParam1)//Position - 0xC5969
{
	float fVar0;
	struct<3> Var1;
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, fParam1, false, false);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	fVar0 = (Var1.f_2 - *fParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

int func_701(int iParam0)//Position - 0xC6095
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 9;
		case 2:
			return 10;
		default:
	}
	return 8;
}

int func_702(int iParam0)//Position - 0xCD646
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 1:
			return 8;
		case 2:
			return 9;
		default:
	}
	return 7;
}

void func_703(int* iParam0, int iParam1)//Position - 0x4E7
{
	int iVar0;
	iVar0 = (iParam1 % 32);
	MISC::SET_BIT(iParam0, iVar0);
}

bool func_704(var uParam0, int iParam1)//Position - 0x4FE
{
	int iVar0;
	iVar0 = (iParam1 % 32);
	return BitTest(uParam0, iVar0);
}

Vector3 func_705(int iParam0, int iParam1)//Position - 0x58A4
{
	switch (iParam0)
	{
		case 239:
			break;
		case 241:
			switch (iParam1)
			{
				case 0:
					return -631.8972f, -237.8486f, 37.0734f;
				default:
			}
			break;
		case 242:
			switch (iParam1)
			{
				case 0:
					return 229.197f, 213.7629f, 104.5252f;
				case 1:
					return -1215.3552f, -325.6002f, 36.6804f;
				case 2:
					return 1175.5978f, 2698.3982f, 36.9947f;
				default:
			}
			break;
		case 244:
			switch (iParam1)
			{
				case 0:
					return -1100.531f, -1498.779f, 3.81f;
				case 1:
					return 1405.5f, 3668.518f, 33.021f;
				case 2:
					return -16.296f, 6646.3f, 30.125f;
				default:
			}
			break;
		case 248:
			switch (iParam1)
			{
				case 0:
					return -1065.4856f, -242.9739f, 53.01f;
				default:
			}
			break;
		case 240:
			switch (iParam1)
			{
				case 0:
					return 1067.501f, -3261.654f, 4.898f;
				case 1:
					return 68.5188f, -2482.4172f, 5.0055f;
				case 2:
					return -184.2188f, 6296.3267f, 30.4886f;
				case 3:
					return 2421.013f, 4780.2f, 33.5041f;
				case 4:
					return 1566.5809f, 3525.019f, 34.7375f;
				case 5:
					return 1033.7214f, 2510.7542f, 46.1121f;
				case 6:
					return 2823.5044f, 1502.5914f, 23.5715f;
				case 7:
					return 1285.3218f, 289.7219f, 80.9909f;
				case 8:
					return -1024.404f, -538.3408f, 34.7084f;
				case 9:
					return -769.6266f, -2630.041f, 12.8285f;
				default:
			}
			break;
			break;
	}
	return 0f, 0f, 0f;
}

int func_706(int iParam0)//Position - 0x2D456
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && __LIB_3__.func_154(func_274(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

void func_707()//Position - 0x370C5
{
	int iVar0;
	iVar0 = __LIB_0__.func_228(22050, -1);
	__LIB_1__.func_39(22050, iVar0 + 1, -1);
}

void func_708(int iParam0)//Position - 0x448F9
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_167[iVar0]), iVar1);
}

bool func_709(int iParam0)//Position - 0x44E9B
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_167[iVar0], iVar1);
}

int func_710(var uParam0)//Position - 0x4581A
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	iVar1 = -1;
	while (iVar1 <= 8)
	{
		iVar2 = (*uParam0)[iVar1 + 1];
		if (__LIB_0__.func_121(iVar2))
		{
			if (PED::IS_PED_A_PLAYER(iVar2))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(iVar2))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
					{
						NETWORK::NETWORK_FADE_IN_ENTITY(iVar2, true, 1);
					}
					iVar0 = 0;
				}
				if (NETWORK::NETWORK_IS_ENTITY_FADING(iVar2))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_711(int iParam0)//Position - 0x45880
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	}
}

int func_712(int iParam0, int iParam1)//Position - 0x458A0
{
	int iVar0;
	iVar0 = 1;
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam0, true, 1);
		}
		iVar0 = 0;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
		}
		iVar0 = 0;
	}
	if (NETWORK::NETWORK_IS_ENTITY_FADING(iParam0) || NETWORK::NETWORK_IS_ENTITY_FADING(iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

float func_713(int iParam0, int iParam1)//Position - 0x45A5A
{
	switch (iParam1)
	{
		case 0:
			return 0f;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 288.134f;
				case 1:
					return 255.5312f;
				case 2:
					return 277.2839f;
				case 3:
					return 284.6337f;
				case 4:
					return 323.9374f;
				case 5:
					return 215.4332f;
				case 6:
					return 277.5454f;
				case 7:
					return 326.9837f;
				case 8:
					return 283.8934f;
				case 9:
					return 196.637f;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 160.175f;
				case 1:
					return 238.902f;
				case 2:
					return 187.063f;
				case 3:
					return 273.224f;
				case 4:
					return 241.901f;
				case 5:
					return 227.182f;
				case 6:
					return 209.041f;
				case 7:
					return 285.435f;
				case 8:
					return 275.198f;
				case 9:
					return 264.525f;
				default:
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 64.4647f;
				case 1:
					return 114.86f;
				case 2:
					return 25.5756f;
				case 3:
					return 80.6706f;
				case 4:
					return 123.73f;
				case 5:
					return 34.0951f;
				case 6:
					return 84.3493f;
				case 7:
					return 99.2735f;
				case 8:
					return -1.64939f;
				case 9:
					return 53.4927f;
				default:
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 104.109f;
				case 1:
					return 28.112f;
				case 2:
					return 342.387f;
				case 3:
					return 326.369f;
				case 4:
					return 326.963f;
				case 5:
					return 18.6183f;
				case 6:
					return 40.1479f;
				case 7:
					return 45.6809f;
				case 8:
					return 49.962f;
				case 9:
					return 50.7183f;
				default:
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 190.175f;
				case 1:
					return 268.902f;
				case 2:
					return 217.063f;
				case 3:
					return 303.224f;
				case 4:
					return 271.901f;
				case 5:
					return 257.182f;
				case 6:
					return 239.041f;
				case 7:
					return 315.435f;
				case 8:
					return 305.198f;
				case 9:
					return 294.525f;
				default:
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 196.458f;
				case 1:
					return 120.461f;
				case 2:
					return 74.736f;
				case 3:
					return 58.718f;
				case 4:
					return 59.3119f;
				case 5:
					return 110.968f;
				case 6:
					return 132.497f;
				case 7:
					return 138.03f;
				case 8:
					return 142.311f;
				case 9:
					return 143.068f;
				default:
			}
			break;
		case 7:
			return 196.458f;
		case 8:
			return 120.461f;
		case 9:
			return 74.736f;
		case 10:
			return 58.718f;
		case 11:
			return 59.3119f;
		case 12:
			return 110.968f;
		case 13:
			return 132.497f;
		case 14:
			return 138.03f;
		case 15:
			return 142.311f;
		case 16:
			return 143.068f;
		case 17:
			return 196.458f;
		case 18:
			return 120.461f;
		case 19:
			return 74.736f;
		case 20:
			return 58.718f;
		case 21:
			return 59.3119f;
		case 22:
			return 110.968f;
		case 23:
			return 132.497f;
		case 24:
			return 138.03f;
		case 25:
			return 142.311f;
		case 26:
			return 143.068f;
	}
	return 0f;
}

Vector3 func_714(int iParam0, int iParam1)//Position - 0x45F34
{
	switch (iParam1)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -164.515f, -2706.8882f, 5.0083f;
				case 1:
					return -164.5403f, -2708.8103f, 5.0105f;
				case 2:
					return -166.5388f, -2709.0017f, 5.0102f;
				case 3:
					return -166.7702f, -2706.8743f, 5.0076f;
				case 4:
					return -166.8823f, -2704.9087f, 5.0052f;
				case 5:
					return -166.8767f, -2710.8245f, 5.0109f;
				case 6:
					return -169.0969f, -2709.0366f, 5.008f;
				case 7:
					return -168.8584f, -2708.1545f, 5.0072f;
				case 8:
					return -168.5773f, -2705.1433f, 5.004f;
				case 9:
					return -168.9141f, -2709.9822f, 5.0091f;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 582.967f, -2808.54f, 5.0588f;
				case 1:
					return 584.12f, -2807.07f, 5.0588f;
				case 2:
					return 586.47f, -2809.04f, 5.0588f;
				case 3:
					return 585.061f, -2806.55f, 5.0588f;
				case 4:
					return 587.897f, -2807.44f, 5.0588f;
				case 5:
					return 584.004f, -2806.77f, 5.0588f;
				case 6:
					return 587.223f, -2808.84f, 5.0588f;
				case 7:
					return 584.784f, -2811.83f, 5.0588f;
				case 8:
					return 583.508f, -2809.73f, 5.0588f;
				case 9:
					return 583.844f, -2810.93f, 5.0588f;
				default:
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 820.446f, 2195.58f, 51.2347f;
				case 1:
					return 818.786f, 2193.73f, 51.3591f;
				case 2:
					return 823.75f, 2192.38f, 51.4025f;
				case 3:
					return 820.709f, 2195.33f, 51.1361f;
				case 4:
					return 818.542f, 2193.15f, 51.1361f;
				case 5:
					return 822.73f, 2197.42f, 51.2347f;
				case 6:
					return 819.821f, 2194.44f, 51.2347f;
				case 7:
					return 823.186f, 2192.05f, 51.2347f;
				case 8:
					return 820.312f, 2194.89f, 51.2347f;
				case 9:
					return 823.097f, 2197.81f, 51.2347f;
				default:
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1875.54f, 3755.09f, 31.9418f;
				case 1:
					return 1876.69f, 3756.56f, 31.9418f;
				case 2:
					return 1879.04f, 3754.58f, 31.9418f;
				case 3:
					return 1877.63f, 3757.08f, 31.9418f;
				case 4:
					return 1880.47f, 3756.18f, 31.9418f;
				case 5:
					return 1876.58f, 3756.86f, 31.9418f;
				case 6:
					return 1879.79f, 3754.78f, 31.9418f;
				case 7:
					return 1877.35f, 3751.79f, 31.9418f;
				case 8:
					return 1876.08f, 3753.89f, 31.9418f;
				case 9:
					return 1876.41f, 3752.7f, 31.9418f;
				default:
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -167.14f, -30.8277f, 52.441f;
				case 1:
					return -165.988f, -29.3568f, 52.441f;
				case 2:
					return -163.638f, -31.33f, 52.441f;
				case 3:
					return -165.046f, -28.8334f, 52.441f;
				case 4:
					return -162.211f, -29.7296f, 52.441f;
				case 5:
					return -166.103f, -29.0555f, 52.441f;
				case 6:
					return -162.885f, -31.128f, 52.441f;
				case 7:
					return -165.324f, -34.1193f, 52.441f;
				case 8:
					return -166.599f, -32.0225f, 52.441f;
				case 9:
					return -166.264f, -33.2138f, 52.441f;
				default:
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1636.2f, 3804.6f, 33.876f;
				case 1:
					return 1637.35f, 3806.07f, 33.876f;
				case 2:
					return 1639.7f, 3804.09f, 33.876f;
				case 3:
					return 1638.29f, 3806.59f, 33.876f;
				case 4:
					return 1641.13f, 3805.7f, 33.876f;
				case 5:
					return 1637.24f, 3806.37f, 33.876f;
				case 6:
					return 1640.45f, 3804.3f, 33.876f;
				case 7:
					return 1638.01f, 3801.31f, 33.876f;
				case 8:
					return 1636.74f, 3803.4f, 33.876f;
				case 9:
					return 1637.07f, 3802.21f, 33.876f;
				default:
			}
			break;
		case 7:
			return 722.8109f, -1291.5782f, 25.2842f;
		case 8:
			return 333.484f, -1004.49f, 28.3236f;
		case 9:
			return -164.1667f, -1303.1881f, 30.2879f;
		case 10:
			return -22.4585f, 211.9322f, 105.5534f;
		case 11:
			return 909.7536f, -2084.7537f, 29.6224f;
		case 12:
			return -682.1552f, -2386.5608f, 12.7969f;
		case 13:
			return 227.6304f, -3131.2869f, 4.7903f;
		case 14:
			return 386.6041f, 225.2798f, 101.9858f;
		case 15:
			return -1230.1609f, -687.3255f, 22.8126f;
		case 16:
			return -1170.84f, -1184.944f, 4.6234f;
		case 17:
			return 771.9007f, -1336.0919f, 25.2463f;
		case 18:
			return 349.9977f, -961.1862f, 28.4317f;
		case 19:
			return -114.1347f, -1255.065f, 28.2187f;
		case 20:
			return 8.2443f, 209.4327f, 105.1775f;
		case 21:
			return 868.5779f, -2088.183f, 29.207f;
		case 22:
			return -688.749f, -2460.16f, 12.8563f;
		case 23:
			return 188.7281f, -3161.0688f, 4.7871f;
		case 24:
			return 386.072f, 253.1823f, 101.9968f;
		case 25:
			return -1279.2856f, -638.4092f, 25.6319f;
		case 26:
			return -1164.5024f, -1157.5807f, 4.6447f;
	}
	return 0f, 0f, 0f;
}

void func_715(var uParam0, var uParam1)//Position - 0x4679A
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		iVar1 = (*uParam1)[iVar0 + 1];
		iVar2 = uParam0->f_1[iVar0 + 1];
		if (__LIB_0__.func_121(iVar1) && __LIB_0__.func_121(uParam0->f_1[iVar0 + 1]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, ENTITY::GET_ENTITY_COORDS(iVar2, true), false, false, true);
				ENTITY::SET_ENTITY_HEADING(iVar1, ENTITY::GET_ENTITY_HEADING(iVar2));
				ENTITY::SET_ENTITY_VISIBLE(iVar1, false, false);
				TASK::CLEAR_PED_TASKS(iVar1);
			}
		}
		iVar0++;
	}
}

int func_716(var uParam0, var uParam1)//Position - 0x4681A
{
	if (__LIB_0__.func_121(*uParam1) && __LIB_0__.func_121(*uParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*uParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*uParam0, 2), 2, true);
		}
		return 1;
	}
	return 0;
}

void func_717(var uParam0, int iParam1)//Position - 0x4807B
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[0]) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1[0], false))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && AUDIO::IS_VEHICLE_RADIO_ON(iParam1)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
		{
			if (__LIB_0__.func_121(iParam1))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam1, false);
			}
			if (__LIB_0__.func_121(*uParam0))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(*uParam0, false);
			}
		}
	}
}

char* func_718(int iParam0, int iParam1)//Position - 0x48181
{
	switch (iParam1)
	{
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam0)
			{
				case 0:
					return "apt_exit_ped_a";
				case 1:
					return "apt_exit_ped_b";
				case 2:
					return "apt_exit_ped_c";
				case 3:
					return "apt_exit_ped_d";
				default:
			}
			break;
	}
	return "";
}

char* func_719(int iParam0)//Position - 0x4820D
{
	switch (iParam0)
	{
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return "anim@mp_apt_ext@exit_all";
		default:
	}
	return "";
}

Vector3 func_720(int iParam0)//Position - 0x48262
{
	switch (iParam0)
	{
		case 17:
			return 0f, 0f, 175.32f;
		case 18:
			return 0f, 0f, -81.72f;
		case 19:
			return 0f, 0f, -81.72f;
		case 20:
			return 0f, 0f, -105.12f;
		case 21:
			return 0f, 0f, 74.52f;
		case 22:
			return 0f, 0f, 127.08f;
		case 23:
			return 0f, 0f, 70.92f;
		case 24:
			return 0f, 0f, -42.84f;
		case 25:
			return 0f, 0f, 19.44f;
		case 26:
			return 0f, 0f, -72.36f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_721(int iParam0)//Position - 0x48314
{
	switch (iParam0)
	{
		case 17:
			return 758.904f, -1331.744f, 27.48f;
		case 18:
			return 345f, -977.25f, 29.55f;
		case 19:
			return -122.1f, -1257.8f, 29.55f;
		case 20:
			return 3.96f, 221.25f, 107.95f;
		case 21:
			return 871.765f, -2101.265f, 30.712f;
		case 22:
			return -675.2943f, -2458.35f, 14.18771f;
		case 23:
			return 195.818f, -3168.064f, 5.973f;
		case 24:
			return 370.75f, 252.4f, 103.25f;
		case 25:
			return -1285.033f, -652.63f, 26.879f;
		case 26:
			return -1175.28f, -1152.877f, 5.957f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_722(int iParam0)//Position - 0x486DD
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 0f, 0f, 90f;
		case 2:
			return 0f, 0f, 56.4638f;
		case 5:
			return 0f, 0f, 246.2758f;
		case 6:
			return 0f, 0f, 28.5241f;
		case 3:
			return 0f, 0f, 72.141f;
		case 4:
			return 0f, 0f, 308.0643f;
		case 7:
			return 0f, 0f, 270f;
		case 8:
			return 0f, 0f, 0f;
		case 9:
			return 0f, 0f, 0f;
		case 10:
			return 0f, 0f, 352.1653f;
		case 11:
			return 0f, 0f, 175f;
		case 12:
			return 0f, 0f, 240.7998f;
		case 13:
			return 0f, 0f, 181.3001f;
		case 14:
			return 0f, 0f, 70f;
		case 15:
			return 0f, 0f, 130f;
		case 16:
			return 0f, 0f, 13.0244f;
		case 17:
			return 0f, 0f, 219.967f;
		case 18:
			return 0f, 0f, 358.7548f;
		case 19:
			return 0f, 0f, 187.5369f;
		case 20:
			return 10.056f, -0.746f, -23.527f;
		case 21:
			return 0f, 0f, 38.8414f;
		case 22:
			return 0f, 0f, 196.0835f;
		case 23:
			return 0f, 0f, 133.0944f;
		case 24:
			return 0f, 0f, 297.137f;
		case 25:
			return 0f, 0f, 128.9496f;
		case 26:
			return 0f, 0f, 103.8582f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_723(int iParam0, bool bParam1)//Position - 0x48B92
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0, bParam1, false);
	}
}

void func_724(int iParam0)//Position - 0x48C40
{
	MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(iParam0, false), 20f, 2);
	MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(iParam0, false), 3f, false, false, false, false, false, false, 0);
}

float func_725(int iParam0, int iParam1)//Position - 0x4A2DC
{
	switch (iParam0)
	{
		case 22:
			switch (iParam1)
			{
				case 0:
					return 31.0851f;
				case 1:
					return 31.0851f;
				case 2:
					return 34.7734f;
				case 3:
					return 34.7734f;
				default:
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 32.6443f;
				case 1:
					return 32.6443f;
				case 2:
					return 26.0644f;
				case 3:
					return 26.0644f;
				default:
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 22.5776f;
				case 1:
					return 22.5776f;
				case 2:
					return 24.4083f;
				case 3:
					return 24.4083f;
				default:
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 24.7101f;
				case 1:
					return 24.7101f;
				case 2:
					return 17.3642f;
				case 3:
					return 17.3642f;
				default:
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 34.8625f;
				case 1:
					return 34.8625f;
				case 2:
					return 43.0692f;
				case 3:
					return 43.0692f;
				default:
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 34.871f;
				case 1:
					return 34.871f;
				case 2:
					return 20.6745f;
				case 3:
					return 20.6745f;
				default:
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return 35.9291f;
				case 1:
					return 31.5182f;
				case 2:
					return 27.6432f;
				case 3:
					return 27.6432f;
				default:
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return 29.4471f;
				case 1:
					return 29.4471f;
				case 2:
					return 40.9154f;
				case 3:
					return 40.9154f;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 27.4194f;
				case 1:
					return 27.4194f;
				case 2:
					return 21.9711f;
				case 3:
					return 21.9711f;
				default:
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 23.986f;
				case 1:
					return 23.986f;
				case 2:
					return 18.5261f;
				case 3:
					return 18.5261f;
				default:
			}
			break;
	}
	return 0f;
}

Vector3 func_726(int iParam0, int iParam1)//Position - 0x4A5BC
{
	switch (iParam0)
	{
		case 22:
			switch (iParam1)
			{
				case 0:
					return 1.1796f, -0.0086f, -44.401f;
				case 1:
					return 0.4249f, -0.0086f, -61.8214f;
				case 2:
					return -13.2114f, 0.0185f, 73.8465f;
				case 3:
					return -13.2114f, 0.0185f, 63.1913f;
				default:
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return -0.814f, -0.0002f, -95.7412f;
				case 1:
					return -0.814f, -0.0002f, -111.7632f;
				case 2:
					return -7.4066f, -0.0984f, 11.1731f;
				case 3:
					return -6.7378f, -0.0984f, 4.7099f;
				default:
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return -0.1515f, 0.0318f, -136.1091f;
				case 1:
					return -0.3709f, 0.0318f, -142.104f;
				case 2:
					return -7.477f, 0.1931f, 163.794f;
				case 3:
					return -6.3062f, 0.1931f, 172.5729f;
				default:
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -2.2372f, 0.0023f, 72.9026f;
				case 1:
					return -0.0724f, 0.0023f, 74.9187f;
				case 2:
					return -2.204f, 0.2693f, 90.172f;
				case 3:
					return -1.8644f, 0.2693f, 90.2904f;
				default:
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -2.2037f, 0.0599f, -154.135f;
				case 1:
					return -2.2037f, 0.0599f, -171.0973f;
				case 2:
					return -50.1789f, -18.3148f, -173.1851f;
				case 3:
					return -50.1789f, -7.9732f, -179.8381f;
				default:
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return -5.1985f, 0.1848f, 147.2249f;
				case 1:
					return -3.5388f, 0.1848f, 138.8755f;
				case 2:
					return -11.5006f, 0.1735f, -178.9172f;
				case 3:
					return -13.4538f, 0.1735f, 175.0325f;
				default:
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return -5.4161f, 0.0056f, 61.631f;
				case 1:
					return -3.8795f, 0.0056f, 61.1926f;
				case 2:
					return -10.6165f, 0.2257f, -152.586f;
				case 3:
					return -11.308f, 0.2257f, -160.8821f;
				default:
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return -4.3926f, -0.0031f, -100.9883f;
				case 1:
					return -1.4457f, -0.0031f, -113.6116f;
				case 2:
					return -59.8955f, -12.1113f, -25.1276f;
				case 3:
					return -62.8305f, -4.5946f, -28.533f;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 5.1635f, -0.1398f, 1.8622f;
				case 1:
					return 1.211f, -0.1398f, 11.2626f;
				case 2:
					return -15.0551f, -0.1398f, 124.9708f;
				case 3:
					return -13.5428f, -0.1398f, 130.0383f;
				default:
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return -0.1819f, 0.0105f, 108.1395f;
				case 1:
					return -0.1819f, 0.0105f, 103.4735f;
				case 2:
					return -11.5818f, 0.054f, 71.2927f;
				case 3:
					return -9.2169f, 0.054f, 74.4632f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_727(int iParam0, int iParam1)//Position - 0x4AA2E
{
	switch (iParam0)
	{
		case 22:
			switch (iParam1)
			{
				case 0:
					return -690.8092f, -2463.3936f, 14.0856f;
				case 1:
					return -690.7004f, -2463.3057f, 14.383f;
				case 2:
					return -672.141f, -2460.776f, 15.6879f;
				case 3:
					return -672.5074f, -2460.5415f, 15.3872f;
				default:
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 184.578f, -3160.3735f, 6.0925f;
				case 1:
					return 184.7126f, -3160.5667f, 6.3051f;
				case 2:
					return 195.7427f, -3178.807f, 7.2018f;
				case 3:
					return 195.5187f, -3177.2336f, 7.1221f;
				default:
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 863.1351f, -2086.6135f, 30.3363f;
				case 1:
					return 863.1377f, -2086.9944f, 30.6467f;
				case 2:
					return 872.2018f, -2089.9788f, 31.7412f;
				case 3:
					return 871.6845f, -2092.6213f, 31.4876f;
				default:
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 774.0483f, -1336.9021f, 26.6894f;
				case 1:
					return 774.3975f, -1336.4373f, 27.0994f;
				case 2:
					return 760.7469f, -1332.0867f, 27.9325f;
				case 3:
					return 760.4225f, -1332.062f, 27.9199f;
				default:
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 347.0331f, -959.4451f, 29.6653f;
				case 1:
					return 346.9019f, -959.1912f, 30.0143f;
				case 2:
					return 345.5976f, -974.6533f, 33.7544f;
				case 3:
					return 345.5998f, -974.8963f, 33.4685f;
				default:
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return -113.6269f, -1252.0984f, 29.6055f;
				case 1:
					return -113.2396f, -1251.9248f, 30.1744f;
				case 2:
					return -120.2289f, -1252.0308f, 31.2627f;
				case 3:
					return -120.3676f, -1252.8362f, 31.0968f;
				default:
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return -1155.9435f, -1162.0526f, 6.8823f;
				case 1:
					return -1156.4175f, -1161.543f, 7.1344f;
				case 2:
					return -1176.795f, -1145.32f, 7.2341f;
				case 3:
					return -1175.923f, -1147.51f, 7.0872f;
				default:
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return -1294.1284f, -645.4267f, 26.811f;
				case 1:
					return -1293.9004f, -645.507f, 27.2902f;
				case 2:
					return -1287.338f, -652.6676f, 33.5083f;
				case 3:
					return -1287.1222f, -652.4532f, 33.0411f;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 7.4426f, 203.7315f, 105.8977f;
				case 1:
					return 7.2745f, 203.9698f, 106.7401f;
				case 2:
					return 12.9745f, 227.3453f, 110.4877f;
				case 3:
					return 11.4823f, 226.1858f, 109.9884f;
				default:
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 392.4552f, 255.0243f, 103.1266f;
				case 1:
					return 392.0057f, 254.9288f, 103.5374f;
				case 2:
					return 387.2981f, 248.4177f, 105.437f;
				case 3:
					return 385.8937f, 248.7719f, 105.201f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_728(int iParam0, int iParam1)//Position - 0x4AEA0
{
	switch (iParam0)
	{
		case 17:
			switch (iParam1)
			{
				case 0:
					return 4000;
				case 1:
					return 4000;
				default:
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 5000;
				case 1:
					return 4000;
				default:
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 3500;
				case 1:
					return 4000;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 5000;
				case 1:
					return 4000;
				default:
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 5000;
				case 1:
					return 4000;
				default:
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 5000;
				case 1:
					return 4000;
				default:
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 5000;
				case 1:
					return 4000;
				default:
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 5000;
				case 1:
					return 4000;
				default:
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return 5000;
				case 1:
					return 4000;
				default:
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return 5000;
				case 1:
					return 4000;
				default:
			}
			break;
	}
	return 0;
}

float func_729(int iParam0, int iParam1)//Position - 0x4B2DC
{
	switch (iParam0)
	{
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("mule4"):
			switch (iParam1)
			{
				case 0:
					return 28.8378f;
				case 1:
					return 28.8378f;
				case 2:
					return 37.7742f;
				case 3:
					return 37.7742f;
				default:
			}
			break;
		case joaat("pounder"):
		case joaat("pounder2"):
			switch (iParam1)
			{
				case 0:
					return 42.8582f;
				case 1:
					return 42.8582f;
				case 2:
					return 45.8839f;
				case 3:
					return 48.1185f;
				default:
			}
			break;
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("speedo4"):
			switch (iParam1)
			{
				case 0:
					return 30.0847f;
				case 1:
					return 30.0847f;
				case 2:
					return 50f;
				case 3:
					return 50f;
				default:
			}
			break;
	}
	return 50f;
}

Vector3 func_730(int iParam0, int iParam1)//Position - 0x4B47E
{
	switch (iParam0)
	{
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("mule4"):
			switch (iParam1)
			{
				case 0:
					return -0.4413f, 2.2596f, 0.8491f;
				case 1:
					return -0.9896f, 2.2462f, 0.5381f;
				case 2:
					return -0.138f, -3.9027f, 0.5142f;
				case 3:
					return -0.2289f, -5.0626f, 0.8931f;
				default:
			}
			break;
		case joaat("pounder"):
		case joaat("pounder2"):
			switch (iParam1)
			{
				case 0:
					return -0.1417f, 0.6072f, 1.099f;
				case 1:
					return -1.1367f, 0.6117f, 0.3529f;
				case 2:
					return -0.0406f, -7.1173f, 0.3928f;
				case 3:
					return -0.1282f, -7.7941f, 1.4002f;
				default:
			}
			break;
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("speedo4"):
			switch (iParam1)
			{
				case 0:
					return -0.3374f, -0.2954f, 0.6068f;
				case 1:
					return -0.6983f, -0.2964f, 0.6183f;
				case 2:
					return -0.0261f, -0.903f, -0.1439f;
				case 3:
					return -0.0302f, -1.428f, 0.39f;
				default:
			}
			break;
	}
	switch (iParam1)
	{
		case 0:
			return -0.5f, 2f, 1f;
		case 1:
			return -0.5f, 2f, 1f;
		case 2:
			return 0f, -4f, 0.7f;
		case 3:
			return 0f, -5f, 0.8f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_731(int iParam0, int iParam1)//Position - 0x4B653
{
	switch (iParam0)
	{
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("mule4"):
			switch (iParam1)
			{
				case 0:
					return -0.8786f, 5.2235f, 0.6928f;
				case 1:
					return -0.8766f, 5.243f, 0.4542f;
				case 2:
					return -0.1833f, -6.8396f, 1.1243f;
				case 3:
					return -0.1912f, -8.0554f, 0.6892f;
				default:
			}
			break;
		case joaat("pounder"):
		case joaat("pounder2"):
			switch (iParam1)
			{
				case 0:
					return -1.2287f, 3.3562f, 1.61f;
				case 1:
					return -1.2733f, 3.4583f, 1.2904f;
				case 2:
					return -0.0596f, -9.849f, 1.6326f;
				case 3:
					return -0.1219f, -10.7851f, 1.6312f;
				default:
			}
			break;
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("speedo4"):
			switch (iParam1)
			{
				case 0:
					return -0.5172f, 2.6841f, 0.9088f;
				case 1:
					return -0.517f, 2.684f, 0.9091f;
				case 2:
					return -0.0491f, -3.8347f, 0.4918f;
				case 3:
					return -0.0535f, -4.4276f, 0.4243f;
				default:
			}
			break;
	}
	switch (iParam1)
	{
		case 0:
			return -0.5f, 2f, 1f;
		case 1:
			return -0.5f, 2f, 1f;
		case 2:
			return 0f, -4f, 0.7f;
		case 3:
			return 0f, -5f, 0.8f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_732(int iParam0)//Position - 0x4B970
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return -163.0976f, -2707.5872f, 5.0093f;
		case 2:
			return 585.9597f, -2808.9214f, 5.0588f;
		case 3:
			return -163.1224f, -31.2928f, 51.7423f;
		case 4:
			return 1639.191f, 3804.2156f, 33.876f;
		case 5:
			return 822.3605f, 2194.3826f, 51.1736f;
		case 6:
			return 1878.5581f, 3754.7312f, 31.9416f;
		case 7:
			return 724.3304f, -1291.6473f, 25.2842f;
		case 8:
			return 333.484f, -1004.49f, 28.3236f;
		case 9:
			return -164.1667f, -1303.1881f, 30.2879f;
		case 10:
			return -22.6732f, 210.5598f, 105.5534f;
		case 11:
			return 909.7364f, -2087.6926f, 29.552f;
		case 12:
			return -679.1699f, -2388.3108f, 12.8145f;
		case 13:
			return 227.6304f, -3131.2869f, 4.7903f;
		case 14:
			return 388.341f, 224.551f, 102.038f;
		case 15:
			return -1230.1609f, -687.3255f, 22.8126f;
		case 16:
			return -1171.2731f, -1182.3243f, 4.6235f;
		case 17:
			return 771.0223f, -1336.2598f, 25.2435f;
		case 18:
			return 348.1162f, -961.1251f, 28.4317f;
		case 19:
			return -115.6183f, -1254.4292f, 28.142f;
		case 20:
			return 7.6454f, 207.75f, 104.8606f;
		case 21:
			return 865.885f, -2089.6614f, 29.2735f;
		case 22:
			return -688.602f, -2461.3835f, 12.8316f;
		case 23:
			return 187.1679f, -3160.681f, 4.7897f;
		case 24:
			return 388.7666f, 253.3901f, 102.026f;
		case 25:
			return -1290.471f, -646.4467f, 25.4523f;
		case 26:
			return -1163.4117f, -1157.9064f, 4.6435f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_733(var uParam0, struct<3> Param1, struct<3> Param2)//Position - 0x4BC42
{
	if (__LIB_0__.func_121(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, Param1, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, Param2, 2, true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
		return 1;
	}
	return 0;
}

int func_734(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3)//Position - 0x4BEA7
{
	char* sVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	sVar0 = "chassis";
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam1, sVar0), Param2, Param3, bVar1, bVar2, bVar3, false, 2, true, 0);
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_735(int iParam0, int iParam1)//Position - 0x4BEF4
{
	switch (iParam0)
	{
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("speedo4"):
			switch (iParam1)
			{
				case joaat("prop_box_wood04a"):
					return 0f, 0f, 90f;
				case joaat("gr_prop_gr_rsply_crate04b"):
					return 0f, 0f, 90f;
				case joaat("hei_prop_carrier_crate_01b"):
					return 0f, 0f, 0f;
				default:
			}
			break;
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("mule4"):
			switch (iParam1)
			{
				case joaat("gr_prop_gr_rsply_crate04b"):
					return 0f, 0f, 90f;
				default:
			}
			return 0f, 0f, 90f;
			break;
		case joaat("cognoscenti2"):
			switch (iParam1)
			{
				case joaat("ex_prop_adv_case_sm_02"):
					return 0f, 0f, 0f;
				default:
			}
			break;
		case joaat("schafter6"):
			switch (iParam1)
			{
				case joaat("ex_prop_adv_case_sm_02"):
					return 0f, 0f, 0f;
				default:
			}
			break;
		case joaat("baller6"):
			switch (iParam1)
			{
				case joaat("ex_prop_adv_case_sm_02"):
					return 0f, 0f, 0f;
				default:
			}
			break;
		case joaat("pounder2"):
			switch (iParam1)
			{
				case joaat("gr_prop_gr_rsply_crate04b"):
					return 0f, 0f, 90f;
				default:
			}
			if (iParam1 == joaat("ba_prop_batle_crates_pounder"))
			{
				return 0f, 0f, 90f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_736(int iParam0, int iParam1)//Position - 0x4C013
{
	switch (iParam0)
	{
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("speedo4"):
			switch (iParam1)
			{
				case joaat("prop_box_wood04a"):
					return 0f, -1.25f, -0.1f;
				case joaat("hei_prop_carrier_crate_01b"):
					return 0f, -1.25f, -0.1f;
				case joaat("gr_prop_gr_rsply_crate04b"):
					return 0f, -1.25f, -0.1f;
				default:
			}
			break;
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("mule4"):
			switch (iParam1)
			{
				case joaat("gr_prop_gr_rsply_crate04b"):
					return 0f, -1.25f, -0.1f;
				default:
			}
			return 0f, -1.25f, -0.1f;
			break;
		case joaat("baller6"):
			switch (iParam1)
			{
				case joaat("ex_prop_adv_case_sm_02"):
					return 0f, -2.3f, 0.1f;
				default:
			}
			break;
		case joaat("cognoscenti2"):
			switch (iParam1)
			{
				case joaat("ex_prop_adv_case_sm_02"):
					return 0f, -2.5f, 0.1f;
				default:
			}
			break;
		case joaat("schafter6"):
			switch (iParam1)
			{
				case joaat("ex_prop_adv_case_sm_02"):
					return 0f, -2.4f, 0.15f;
				default:
			}
			break;
		case joaat("pounder2"):
			switch (iParam1)
			{
				case joaat("gr_prop_gr_rsply_crate04b"):
					return 0f, -3f, 0.35f;
				default:
			}
			if (iParam1 == joaat("ba_prop_batle_crates_pounder"))
			{
				return 0f, -3f, 0.35f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_737(int iParam0, var uParam1)//Position - 0x5A5C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = -1;
		while (iVar0 <= 8)
		{
			iVar1 = iVar0;
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar1, false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1, false);
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					(*uParam1)[iVar0 + 1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1, false);
				}
			}
			iVar0++;
		}
	}
}

int func_738(int iParam0, struct<3> Param1)//Position - 0x5A660
{
	if (__LIB_0__.func_121(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, Param1 - Vector(10f, 0f, 0f), false, false, false, true);
		}
		return 1;
	}
	return 0;
}

int func_739(int iParam0)//Position - 0x5A698
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
		ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
	}
	return 1;
}

int func_740(int iParam0, int iParam1, var uParam2)//Position - 0x5A6B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(iParam0, true, true);
		}
		iVar0 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(iParam1, true, true);
		}
		iVar0 = 0;
	}
	iVar1 = -1;
	while (iVar1 <= 8)
	{
		iVar2 = (*uParam2)[iVar1 + 1];
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(iVar2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar2, false, false);
				}
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_741(int iParam0)//Position - 0x5A75F
{
	switch (iParam0)
	{
		case 0:
			return 1600;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return 800;
		default:
	}
	return 800;
}

void func_742(int iParam0)//Position - 0x5AC03
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(uLocal_167[iVar0]), iVar1);
}

void func_743(int iParam0)//Position - 0x5DBB2
{
	MISC::SET_BIT(&uLocal_169, iParam0);
}

bool func_744(var uParam0)//Position - 0x5DE39
{
	return BitTest(uLocal_169, uParam0);
}

void func_745(int* iParam0, int iParam1)//Position - 0x204FEB
{
	int iVar0;
	iVar0 = (iParam1 % 32);
	MISC::CLEAR_BIT(iParam0, iVar0);
}

int func_746(int iParam0)//Position - 0x2054B2
{
	switch (iParam0)
	{
		case 242:
			return Global_262145.f_24665 /* Tunable: 1733390598 */;
			break;
		case 244:
			return Global_262145.f_24666 /* Tunable: 724724668 */;
			break;
		case 248:
			return Global_262145.f_24667 /* Tunable: 846317886 */;
			break;
		case 241:
			return Global_262145.f_24668 /* Tunable: 443623246 */;
			break;
	}
	return 0;
}

int func_747(int iParam0, int iParam1)//Position - 0x207226
{
	int iVar0;
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (__LIB_1__.func_346(iParam1) && func_6542(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_12;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_748(int iParam0, bool bParam1)//Position - 0x207988
{
	if (bParam1)
	{
		return __LIB_0__.func_137(15384, -1);
	}
	return __LIB_0__.func_137(func_6552(iParam0), -1);
}

int func_749(var uParam0)//Position - 0x28BF
{
	if (__LIB_16__.func_486(uParam0))
	{
		if (uParam0->f_1390[0] != 0 && uParam0->f_1390[1] != 0)
		{
			if (uParam0->f_1390[0] == uParam0->f_1390[1])
			{
				return 1;
			}
			else if (uParam0->f_1390[0] > uParam0->f_1390[1])
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					uParam0->f_1389 = 0;
				}
				return 0;
			}
			else if (uParam0->f_1390[0] < uParam0->f_1390[1])
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					uParam0->f_1389 = 1;
				}
				return 0;
			}
		}
	}
	return 0;
}

void func_750(var uParam0)//Position - 0x2D77
{
	*uParam0 = 0;
	uParam0->f_1 = 9999;
	uParam0->f_2 = -1f;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
}

void func_751()//Position - 0xDCF03
{
	__LIB_6__.func_981(7867, 1, -1);
	Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_6++;
}

void func_752()//Position - 0xDCF2E
{
	__LIB_6__.func_981(7868, 1, -1);
	Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_7++;
}

void func_753()//Position - 0xDCFC6
{
	__LIB_6__.func_981(7864, 1, -1);
	Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_4++;
}

void func_754()//Position - 0xDD01B
{
	__LIB_6__.func_981(7865, 1, -1);
	Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_5++;
}

void func_755(int iParam0)//Position - 0xDD1A3
{
	if (!Global_262145.f_25921 /* Tunable: -148899823 */)
	{
		__LIB_6__.func_981(7851, __LIB_15__.func_191(iParam0), -1);
		Global_1964904[PLAYER::PLAYER_ID() /*15*/] = (Global_1964904[PLAYER::PLAYER_ID() /*15*/] + __LIB_15__.func_191(iParam0));
	}
}

void func_756(int iParam0)//Position - 0xE7999
{
	if (!Global_262145.f_25921 /* Tunable: -148899823 */)
	{
		__LIB_6__.func_981(7853, __LIB_15__.func_191(iParam0), -1);
		Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_1 = (Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_1 + __LIB_15__.func_191(iParam0));
	}
}

int func_757(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xE7E0C
{
	var uVar0;
	if (!__LIB_4__.func_135(PLAYER::PLAYER_ID()) || Global_262145.f_25922 /* Tunable: 1068308345 */)
	{
		return 0;
	}
	if (bParam3)
	{
		if (bParam1)
		{
			if (iParam0 < 11)
			{
				uVar0 = Global_262145.f_26610 /* Tunable: -1639073645 */;
			}
			else if (iParam0 < 20)
			{
				uVar0 = Global_262145.f_26611 /* Tunable: -1600235871 */;
			}
			else
			{
				uVar0 = Global_262145.f_26612 /* Tunable: -1722088755 */;
			}
		}
		else if (bParam2)
		{
			if (iParam0 < 11)
			{
				uVar0 = Global_262145.f_26613 /* Tunable: 1759297304 */;
			}
			else if (iParam0 >= 11 && iParam0 < 20)
			{
				uVar0 = Global_262145.f_26614 /* Tunable: 1961252947 */;
			}
			else
			{
				uVar0 = Global_262145.f_26615 /* Tunable: 2115922451 */;
			}
		}
		else if (iParam0 < 11)
		{
			uVar0 = Global_262145.f_26607 /* Tunable: -437496823 */;
		}
		else if (iParam0 >= 11 && iParam0 < 20)
		{
			uVar0 = Global_262145.f_26608 /* Tunable: 1929703188 */;
		}
		else
		{
			uVar0 = Global_262145.f_26609 /* Tunable: -35920742 */;
		}
	}
	else if (bParam1)
	{
		if (iParam0 < 11)
		{
			uVar0 = Global_262145.f_26601 /* Tunable: 1686109621 */;
		}
		else if (iParam0 < 20)
		{
			uVar0 = Global_262145.f_26602 /* Tunable: 1773044870 */;
		}
		else
		{
			uVar0 = Global_262145.f_26603 /* Tunable: 929198240 */;
		}
	}
	else if (bParam2)
	{
		if (iParam0 < 11)
		{
			uVar0 = Global_262145.f_26604 /* Tunable: -947133412 */;
		}
		else if (iParam0 >= 11 && iParam0 < 20)
		{
			uVar0 = Global_262145.f_26605 /* Tunable: -365712093 */;
		}
		else
		{
			uVar0 = Global_262145.f_26606 /* Tunable: -1183497877 */;
		}
	}
	else if (iParam0 < 11)
	{
		uVar0 = Global_262145.f_26598 /* Tunable: 1202560047 */;
	}
	else if (iParam0 >= 11 && iParam0 < 20)
	{
		uVar0 = Global_262145.f_26599 /* Tunable: 1480447191 */;
	}
	else
	{
		uVar0 = Global_262145.f_26600 /* Tunable: -1774733417 */;
	}
	return uVar0;
}

void func_758(int iParam0)//Position - 0xE8055
{
	if (!Global_262145.f_25922 /* Tunable: 1068308345 */)
	{
		__LIB_6__.func_981(7848, iParam0, -1);
		Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_2 = (Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_2 + iParam0);
	}
}

void func_759(int iParam0)//Position - 0xE849D
{
	if (!Global_262145.f_25922 /* Tunable: 1068308345 */)
	{
		__LIB_6__.func_981(7850, iParam0, -1);
		Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_3 = (Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_3 + iParam0);
	}
}

int func_760()//Position - 0xE84D5
{
	if (!__LIB_4__.func_135(PLAYER::PLAYER_ID()) || Global_262145.f_25922 /* Tunable: 1068308345 */)
	{
		return 0;
	}
	return Global_262145.f_26597 /* Tunable: 1676995406 */;
}

int func_761(var uParam0, var uParam1)//Position - 0xEEFAC
{
	if (__LIB_16__.func_470(uParam0) && !__LIB_16__.func_481())
	{
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == uParam0->f_799)
		{
			return 1;
		}
	}
	else if (__LIB_16__.func_482(uParam1, 0) == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_762(int iParam0, var uParam1, var uParam2)//Position - 0x15FF2C
{
	if (__LIB_16__.func_470(uParam1) && !__LIB_16__.func_481())
	{
		if (PLAYER::GET_PLAYER_TEAM(iParam0) == uParam1->f_799)
		{
			return 1;
		}
	}
	else if (__LIB_16__.func_482(uParam2, 0) == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_763(var uParam0)//Position - 0x16013E
{
	if (__LIB_16__.func_470(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_764(var uParam0)//Position - 0x163324
{
	uParam0->f_3533 = __LIB_1__.func_556(1208, -1, 0) + 1;
}

int func_765(var uParam0, var uParam1)//Position - 0x1821D9
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { uParam0->f_633[(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_19 /*3*/] };
	if ((__LIB_0__.func_698() || func_70(uParam0)) || __LIB_0__.func_697())
	{
		return 0;
	}
	if (uParam0->f_652 == 0)
	{
		return 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true) < 5f)
	{
		return 1;
	}
	else
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	}
	return 0;
}

void func_766(var uParam0)//Position - 0x184B56
{
	uParam0->f_3987 = __LIB_2__.func_370(PLAYER::PLAYER_ID(), 1);
}

void func_767(var uParam0)//Position - 0x18969F
{
	if (__LIB_16__.func_540(uParam0))
	{
		__LIB_1__.func_744(0);
	}
}

int func_768()//Position - 0x18E59D
{
	__LIB_16__.func_451();
	if ((PED::HAS_ACTION_MODE_ASSET_LOADED("TREVOR_ACTION") && PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION")) && PED::HAS_ACTION_MODE_ASSET_LOADED("FRANKLIN_ACTION"))
	{
		return 1;
	}
	return 0;
}

void func_769()//Position - 0x1A1C73
{
	int iVar0;
	if (BitTest(Global_4718592.f_32, 15) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iVar0))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar0, false);
				}
			}
		}
	}
}

void func_770()//Position - 0x2D15FA
{
	if (__LIB_1__.func_390(PLAYER::PLAYER_ID(), 1))
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_876.f_4), 4);
	}
}

void func_771(var uParam0, var uParam1, var uParam2)//Position - 0x2D5C43
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_172946.f_1 - 1))
	{
		if (__LIB_0__.func_121(uParam0->f_2[iVar0 /*17*/]))
		{
		}
		else
		{
			iVar1 = Global_4718592.f_172946.f_2[iVar0 /*20*/].f_1;
			switch (Global_4718592.f_172946.f_2[iVar0 /*20*/])
			{
				case 2:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam1)[iVar1]))
					{
						uParam0->f_2[iVar0 /*17*/] = NETWORK::NET_TO_ENT((*uParam1)[iVar1]);
					}
					break;
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam2)[iVar1]))
					{
						uParam0->f_2[iVar0 /*17*/] = NETWORK::NET_TO_ENT((*uParam2)[iVar1]);
					}
					break;
				}
		}
		iVar0++;
	}
	MISC::SET_BIT(&(uParam0->f_1), 0);
}

void func_772(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2D6B6E
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CrossLine"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("CrossLine");
	}
	if (!bParam4)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Bomb_Passed", "DLC_AW_PTB_Sounds", false);
		}
	}
	if ((__LIB_0__.func_121(iParam3) && __LIB_0__.func_121(iParam2)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam3))
	{
		VEHICLE::SET_VEHICLE_HANDLING_OVERRIDE(iParam3, joaat("average"));
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), Global_4718592.f_170081);
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam3, 0);
		if (BitTest(Global_4718592.f_31, 19))
		{
			VEHICLE::SET_VEHICLE_MOD(iParam3, 40, uParam0->f_6779, false);
			HUD::SET_ABILITY_BAR_VISIBILITY(false);
			VEHICLE::SET_OVERRIDE_NITROUS_LEVEL(iParam3, false, 0f, 0f, 0f, false);
		}
	}
	(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_26 = uParam0->f_6777;
	MISC::CLEAR_BIT(&(uParam0->f_19), 15);
}

void func_773(int iParam0)//Position - 0x2E4E3B
{
	struct<3> Var0;
	int iVar1;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 18) || Var0.f_0 != -178066393)
	{
		return;
	}
	if (Var0.f_1 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_2)))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
	if (!__LIB_0__.func_121(iVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FROM_ENTITY(-1, &(Var0.f_2), iVar1, "Go_Kart_Death_Match_Soundset", false, 0);
}

void func_774()//Position - 0x30961B
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_5732.f_213 = Global_1659814.f_5;
		Local_5732.f_214 = Global_1659814.f_6;
		Local_5732.f_215 = Global_1659814.f_16;
		Local_5732.f_217 = Global_1659814.f_11;
		Local_5732.f_218 = Global_1659814.f_12;
		Local_5732.f_219 = Global_1659814.f_14;
		Local_5732.f_220 = Global_1659814.f_19;
		Local_5732.f_221 = Global_1659814.f_20;
		Local_5732.f_222 = Global_1659814.f_1;
	}
}

void func_775()//Position - 0x30978D
{
	struct<2236> Var0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Var0 = -1;
		Var0.f_1 = 32;
		Var0.f_34 = 3;
		Var0.f_40 = -1;
		Var0.f_42 = 32;
		Var0.f_75 = -1;
		Var0.f_77 = 32;
		Var0.f_590 = -1;
		Var0.f_596 = -1;
		Var0.f_606 = -1;
		Var0.f_607 = 4;
		Var0.f_612 = 4;
		Var0.f_619.f_4 = 1;
		Var0.f_633 = 4;
		Var0.f_652 = -1;
		Var0.f_653 = -1;
		Var0.f_654 = -1;
		Var0.f_655 = -1;
		Var0.f_656 = -1;
		Var0.f_657 = -1;
		Var0.f_658 = -1;
		Var0.f_659 = 4;
		Var0.f_664 = -1;
		Var0.f_665 = -1;
		Var0.f_666 = -1;
		Var0.f_667 = -1;
		Var0.f_668 = -1;
		Var0.f_670 = 4;
		Var0.f_675 = 4;
		Var0.f_680 = 4;
		Var0.f_685 = 32;
		Var0.f_718 = 4;
		Var0.f_723 = 4;
		Var0.f_728 = 4;
		Var0.f_734 = 4;
		Var0.f_746 = 32;
		Var0.f_796 = -1;
		Var0.f_799 = -1;
		Var0.f_800 = -1;
		Var0.f_801 = -1;
		Var0.f_802 = -1;
		Var0.f_803 = -1;
		Var0.f_810 = 4;
		Var0.f_815 = 4;
		Var0.f_815.f_1 = 32;
		Var0.f_815.f_1.f_33 = 32;
		Var0.f_815.f_1.f_33.f_33 = 32;
		Var0.f_815.f_1.f_33.f_33.f_33 = 32;
		Var0.f_948 = 4;
		Var0.f_953 = 4;
		Var0.f_953.f_1 = 32;
		Var0.f_953.f_1.f_33 = 32;
		Var0.f_953.f_1.f_33.f_33 = 32;
		Var0.f_953.f_1.f_33.f_33.f_33 = 32;
		Var0.f_1086 = 4;
		Var0.f_1091 = 4;
		Var0.f_1091.f_1 = 32;
		Var0.f_1091.f_1.f_33 = 32;
		Var0.f_1091.f_1.f_33.f_33 = 32;
		Var0.f_1091.f_1.f_33.f_33.f_33 = 32;
		Var0.f_1224 = 4;
		Var0.f_1229 = 4;
		Var0.f_1229.f_1 = 32;
		Var0.f_1229.f_1.f_33 = 32;
		Var0.f_1229.f_1.f_33.f_33 = 32;
		Var0.f_1229.f_1.f_33.f_33.f_33 = 32;
		Var0.f_1362 = 4;
		Var0.f_1367 = 4;
		Var0.f_1372 = 4;
		Var0.f_1377 = 4;
		Var0.f_1382 = 4;
		Var0.f_1387 = -1;
		Var0.f_1388 = -1;
		Var0.f_1389 = -1;
		Var0.f_1390 = 2;
		Var0.f_1393 = 2;
		Var0.f_1396 = 2;
		Var0.f_1399 = 2;
		Var0.f_1402.f_5 = 32;
		Var0.f_1402.f_38 = 32;
		Var0.f_1505 = -1;
		Var0.f_1506 = -1;
		Var0.f_1510 = -1;
		Var0.f_1514 = 32;
		Var0.f_1551 = 8;
		Var0.f_1560 = 1;
		Var0.f_1561 = -1;
		Var0.f_1562 = -1;
		Var0.f_1566 = 32;
		Var0.f_1631 = -1;
		Var0.f_1632 = -1;
		Var0.f_1633 = 5;
		Var0.f_1633.f_1 = -1;
		Var0.f_1633.f_1.f_1 = -1;
		Var0.f_1633.f_1.f_5 = 32;
		Var0.f_1633.f_1.f_42 = -1;
		Var0.f_1633.f_1.f_42.f_1 = -1;
		Var0.f_1633.f_1.f_42.f_5 = 32;
		Var0.f_1633.f_1.f_42.f_42 = -1;
		Var0.f_1633.f_1.f_42.f_42.f_1 = -1;
		Var0.f_1633.f_1.f_42.f_42.f_5 = 32;
		Var0.f_1633.f_1.f_42.f_42.f_42 = -1;
		Var0.f_1633.f_1.f_42.f_42.f_42.f_1 = -1;
		Var0.f_1633.f_1.f_42.f_42.f_42.f_5 = 32;
		Var0.f_1633.f_1.f_42.f_42.f_42.f_42 = -1;
		Var0.f_1633.f_1.f_42.f_42.f_42.f_42.f_1 = -1;
		Var0.f_1633.f_1.f_42.f_42.f_42.f_42.f_5 = 32;
		Var0.f_1633.f_213 = -1;
		Var0.f_1848 = 4;
		Var0.f_1853 = 4;
		Var0.f_1858 = 32;
		Var0.f_2211 = 6;
		Local_5735 = { Var0 };
	}
}

void func_776()//Position - 0x309AB4
{
	struct<74> Var0;
	Var0.f_45.f_1 = -1;
	Var0.f_45.f_2 = -1;
	Var0.f_45.f_3 = -1;
	Var0.f_45.f_4 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_67 = 6;
	Local_7081[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/] = { Var0 };
}

int func_777(int iParam0, struct<2> Param1)//Position - 0x3418
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_2__.func_466(Param1, Global_1892703[iParam0 /*599*/].f_556.f_12) || BitTest(Global_1892703[iParam0 /*599*/].f_556, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_778(bool bParam0)//Position - 0x345D
{
	if (bParam0)
	{
		__LIB_0__.func_579(&(Global_1952191.f_5363));
		__LIB_0__.func_580(&(Global_1952191.f_5363), 0, 0);
	}
	else
	{
		__LIB_0__.func_579(&(Global_1952191.f_5363));
	}
}

int func_779(int iParam0)//Position - 0x967FF
{
	if (iParam0 != __LIB_0__.func_160() && __LIB_0__.func_154(iParam0, 0, 1))
	{
		return BitTest(Global_1892703[iParam0 /*599*/].f_556, 0);
	}
	return 0;
}

void func_780(bool bParam0)//Position - 0xC1C8B
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_9), 4);
	}
}

void func_781(bool bParam0)//Position - 0xC1CB1
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_9), 3);
	}
}

char* func_782()//Position - 0xDDC17
{
	return "ANIM@CASINO@ANIMATED_CAMS@";
}

void func_783(bool bParam0)//Position - 0xF6519
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), 5);
	}
}

void func_784(bool bParam0)//Position - 0xF654F
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), 2);
	}
}

void func_785(bool bParam0)//Position - 0xF671D
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_1952191, 2);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1952191, 2);
	}
}

void func_786(bool bParam0)//Position - 0xF6863
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_1952191, 3);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1952191, 3);
	}
}

bool func_787(int iParam0)//Position - 0xF6885
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
	}
	return ENTITY::DOES_ENTITY_EXIST(iParam0);
}

int func_788(int iParam0, int iParam1, var uParam2)//Position - 0x103AD9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar1))
	{
		if (__LIB_0__.func_121(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("terbyte")) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)))
	{
		return 0;
	}
	if (__LIB_2__.func_472(iParam1))
	{
		return 0;
	}
	if ((__LIB_0__.func_657(iParam1, 1) || __LIB_1__.func_178(iParam1)) || __LIB_0__.func_655(iParam1, 1))
	{
		return uParam2;
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "MPBitset"))
		{
			iVar2 = DECORATOR::DECOR_GET_INT(iParam1, "MPBitset");
			if (BitTest(iVar2, 17))
			{
				return uParam2;
			}
		}
	}
	return 1;
}

bool func_789()//Position - 0x103D55
{
	return __LIB_0__.func_649(&(Global_1952191.f_5384));
}

int func_790(int iParam0, int iParam1)//Position - 0x104898
{
	if (iParam0 < 0 || iParam0 >= 64)
	{
		return 0;
	}
	if (Global_2681762.f_199.f_1[iParam0 /*15*/].f_4 == iParam1 || Global_2681762.f_199.f_1[iParam0 /*15*/].f_4 == 0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_791(int iParam0, int iParam1, bool bParam2)//Position - 0x1069D7
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	switch (iParam1)
	{
		case 36:
			Var0 = { 3100f, -3200f, 1000f };
			Var1 = { -3000f, 7000f, 1200f };
			break;
		case 37:
			Var0 = { 3600f, 7000f, 1000f };
			Var1 = { -3000f, -3800f, 1200f };
			break;
		case 38:
			Var0 = { 4000f, 681.8651f, 1000f };
			Var1 = { -4000f, 681.8651f, 1200f };
			break;
	}
	fVar2 = __LIB_0__.func_670(Var0, Var1);
	if (bParam2)
	{
		switch (iParam0)
		{
			case 0:
				return Var1;
			case 1:
				return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, fVar2, -400f, -300f, 0f);
			case 2:
				return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, fVar2, 400f, -600f, 0f);
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return Var0;
			case 1:
				return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, -400f, -300f, 0f);
			case 2:
				return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 400f, -600f, 0f);
			}
		default:
	}
	return 0f, 0f, 0f;
}

bool func_792()//Position - 0x10D703
{
	return BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556, 2);
}

void func_793(int iParam0)//Position - 0x10E0B2
{
	if (iLocal_114 != iParam0)
	{
		iLocal_114 = iParam0;
	}
}

void func_794(var uParam0)//Position - 0x10F1CD
{
	int iVar0;
	uParam0->f_114 = 0;
	uParam0->f_113 = 0;
	uParam0->f_115 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_10__.func_693(uParam0[iVar0 /*7*/]);
		iVar0++;
	}
}

float func_795()//Position - 0x9F11
{
	return Global_262145.f_12828 /* Tunable: GB_BOSS_RADIUS */;
}

int func_796(var uParam0, int iParam1)//Position - 0x279A5
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(func_200(uParam0), iParam1, 0);
	return iVar0;
}

int func_797(int iParam0)//Position - 0x3A26E
{
	int iVar0;
	if (__LIB_1__.func_264(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!Global_2689235[iParam0 /*453*/].f_269.f_17[iVar0] == 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_798()//Position - 0x10AA01
{
	if (__LIB_0__.func_649(&Global_1578987) && !func_6(&Global_1578987, 300000, 0))
	{
		return 1;
	}
	return 0;
}

int func_799(bool bParam0)//Position - 0x18EC88
{
	if (__LIB_1__.func_264(bParam0, 1, 1))
	{
		if (__LIB_7__.func_701(bParam0) && !func_2054(bParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_800(var uParam0, bool bParam1)//Position - 0x574D3
{
	if (!BitTest(uParam0->f_52, bParam1))
	{
		MISC::SET_BIT(&(uParam0->f_52), bParam1);
	}
}

void func_801(int iParam0)//Position - 0xC1A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0);
	iVar1 = VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iParam0);
	if (iVar0 > 0)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		VEHICLE::SET_VEHICLE_LIVERY(iParam0, iVar3);
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0, iVar2);
}

void func_802(int iParam0)//Position - 0xB81EA
{
	MISC::SET_BIT(&uLocal_173, iParam0);
}

bool func_803(int iParam0)//Position - 0xB88C7
{
	return BitTest(uLocal_173, iParam0);
}

void func_804(var uParam0, struct<3> Param1, bool bParam2, float fParam3)//Position - 0x74F60
{
	if (*uParam0 == -1 || !MISC::DOES_POP_MULTIPLIER_AREA_EXIST(*uParam0))
	{
		*uParam0 = MISC::ADD_POP_MULTIPLIER_AREA(Param1 - Vector(fParam3, fParam3, fParam3), Param1 + Vector(fParam3, fParam3, fParam3), 1f, 0.25f, bParam2, true);
	}
}

int func_805(int iParam0)//Position - 0x7723F
{
	switch (iParam0)
	{
		case 89:
			return 675;
		case 90:
			return 676;
		case 91:
			return 677;
		case 92:
			return 678;
		case 93:
			return 679;
		case 94:
			return 680;
		case 95:
			return 681;
		case 96:
			return 682;
		case 97:
			return 683;
		default:
	}
	return 0;
}

int func_806(var uParam0, int iParam1)//Position - 0x77D72
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (BitTest(Global_2689235[iVar0 /*453*/].f_197, 1))
		{
			return 1;
		}
		if (iParam1 && BitTest(Global_2689235[iVar0 /*453*/].f_197, 0))
		{
			return 1;
		}
	}
	return 0;
}

float func_807(bool bParam0)//Position - 0x9D889
{
	if (bParam0)
	{
		return 1500f;
	}
	return 400f;
}

Vector3 func_808()//Position - 0xA7276
{
	return 606.178f, 4739.945f, -62.0086f;
}

Vector3 func_809()//Position - 0xA728D
{
	return 602.105f, 4750.833f, -60.0086f;
}

void func_810(int iParam0, int iParam1)//Position - 0xB6B81
{
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			break;
		case 1:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 0, 0);
			break;
		case 2:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 2, 0, 0);
			break;
		case 3:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 3, 0, 0);
			break;
		case 4:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 4, 0, 0);
			break;
	}
}

Vector3 func_811(int iParam0)//Position - 0xC0225
{
	switch (iParam0)
	{
		case joaat("youga2"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("marshall"):
		case joaat("insurgent3"):
		case joaat("skylift"):
		case joaat("flatbed"):
		case joaat("ambulance"):
		case joaat("wastelander"):
			return 0f, 0f, 0f;
		case joaat("hydra"):
			return 0f, 90f, 90f;
		default:
	}
	return 0f, 0f, 90f;
}

bool func_812(bool bParam0)//Position - 0xC04A2
{
	return __LIB_0__.func_160(bParam0) != -1;
}

int func_813(int iParam0)//Position - 0xC4DBC
{
	switch (iParam0)
	{
		case joaat("flatbed"):
			return joaat("xm_prop_auto_salvage_stromberg");
		case joaat("wastelander"):
			return joaat("xm_prop_auto_salvage_stromberg");
		case joaat("ambulance"):
			return joaat("xm_prop_x17_bag_med_01a");
		case joaat("riot"):
			return joaat("hei_prop_carrier_crate_01a");
		default:
	}
	return joaat("prop_box_wood04a");
}

int func_814(int iParam0)//Position - 0xC8CD7
{
	switch (iParam0)
	{
		case 5:
		case 9:
		case 10:
			return 1;
		default:
	}
	return 0;
}

int func_815(int iParam0)//Position - 0xC8CFD
{
	switch (iParam0)
	{
		case 4:
		case 7:
		case 8:
			return 1;
		default:
	}
	return 0;
}

int func_816(int iParam0)//Position - 0xC8F38
{
	switch (iParam0)
	{
		case 3:
			return Global_262145.f_23415 /* Tunable: -2022222925 */;
		case 4:
			return Global_262145.f_23416 /* Tunable: 140318716 */;
		case 7:
			return Global_262145.f_23416 /* Tunable: 140318716 */;
		case 8:
			return Global_262145.f_23416 /* Tunable: 140318716 */;
		case 5:
			return Global_262145.f_23417 /* Tunable: -1417287657 */;
		case 9:
			return Global_262145.f_23417 /* Tunable: -1417287657 */;
		case 10:
			return Global_262145.f_23417 /* Tunable: -1417287657 */;
		case 11:
			return Global_262145.f_23418 /* Tunable: -776959330 */;
		default:
	}
	return 1;
}

int func_817(int iParam0)//Position - 0xC8FC8
{
	switch (iParam0)
	{
		case 0:
			return 17;
		case 1:
			return 8;
		case 2:
			return 10;
		case 3:
			return 1;
		case 4:
			return 9;
		case 5:
			return 0;
		case 6:
			return 2;
		case 7:
			return 7;
		case 8:
			return 11;
		case 9:
			return 18;
		case 10:
			return 19;
		case 11:
			return 20;
		case 12:
			return 21;
		case 13:
			return 26;
		default:
	}
	return -1;
}

int func_818(int iParam0, bool bParam1)//Position - 0xDEE42
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			if (bParam1)
			{
				return 11;
			}
			return 6;
		case 3:
			return 7;
		case 4:
			return 8;
		case 5:
			return 9;
		case 8:
			return 2;
		case 6:
			return 10;
		case 12:
			return 3;
		case 7:
			return 12;
		case 11:
			return 4;
		case 13:
			return 5;
		case 10:
			return 13;
		default:
	}
	return -1;
}

int func_819(int iParam0)//Position - 0xF79A8
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("akula"):
			return 1;
		default:
	}
	return 0;
}

int func_820(int iParam0)//Position - 0xF79C8
{
	switch (iParam0)
	{
		case 0:
			return joaat("xm_prop_x17_bag_01a");
		case 1:
			return joaat("xm_prop_x17_bag_01b");
		case 2:
			return joaat("xm_prop_x17_bag_01c");
		case 3:
			return joaat("xm_prop_x17_lap_top_01");
		case 6:
			return joaat("flatbed");
		case 7:
			return joaat("deluxo");
		case 8:
			return joaat("riot2");
		case 12:
			return joaat("riot");
		case 9:
			return joaat("ambulance");
		case 10:
			return joaat("akula");
		case 4:
			return joaat("xm_prop_x17_ld_case_01");
		case 11:
			return joaat("wastelander");
		case 5:
			return joaat("xm_prop_x17_flight_rec_01a");
		case 13:
			return joaat("chernobog");
		default:
	}
	return 0;
}

int func_821(int iParam0)//Position - 0xF8E85
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
			return 1;
		default:
	}
	return 0;
}

void func_822(int* iParam0)//Position - 0x10F100
{
	MISC::SET_BIT(iParam0, 0);
	MISC::SET_BIT(iParam0, 5);
	MISC::SET_BIT(iParam0, 8);
	MISC::SET_BIT(iParam0, 1);
	MISC::SET_BIT(iParam0, 9);
}

int func_823()//Position - 0x127CDC
{
	return joaat("prop_amb_phone");
}

char* func_824()//Position - 0x12BCD3
{
	return "H2AVON";
}

int func_825(bool bParam0)//Position - 0x12D713
{
	if (bParam0)
	{
		return 3;
	}
	return 1;
}

void func_826()//Position - 0x162454
{
	bool bVar0;
	bVar0 = true;
	if (bVar0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		MISC::SET_BIT(&(Global_1943920.f_3), 0);
	}
}

int func_827(int iParam0)//Position - 0x16BE3B
{
	switch (iParam0)
	{
		case joaat("VEHICLE_WEAPON_BOMB"):
		case joaat("VEHICLE_WEAPON_BOMB_CLUSTER"):
		case joaat("VEHICLE_WEAPON_BOMB_GAS"):
		case joaat("VEHICLE_WEAPON_BOMB_INCENDIARY"):
			return 0;
		default:
	}
	return 1;
}

int func_828(int iParam0, int iParam1)//Position - 0x54F6
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 8;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 14;
				case 1:
					return 15;
				default:
			}
			break;
	}
	return -1;
}

var func_829()//Position - 0x60F9
{
	return Global_1958745;
}

var func_830()//Position - 0x6105
{
	return Global_1958746;
}

void func_831(var uParam0)//Position - 0x62E0
{
	int iVar0;
	uParam0->f_1 = *uParam0;
	MISC::SET_BIT(&(uParam0->f_4), uParam0->f_1);
	MISC::CLEAR_BIT(&(uParam0->f_3), uParam0->f_1);
	iVar0 = *uParam0;
	iVar0++;
	*uParam0 = iVar0;
	if (*uParam0 == 7)
	{
		*uParam0 = 5;
	}
}

void func_832(var uParam0)//Position - 0x657B
{
	int iVar0;
	uParam0->f_1 = *uParam0;
	MISC::SET_BIT(&(uParam0->f_4), uParam0->f_1);
	MISC::CLEAR_BIT(&(uParam0->f_3), uParam0->f_1);
	iVar0 = *uParam0;
	iVar0 = (iVar0 - 1);
	*uParam0 = iVar0;
	if (*uParam0 == 0)
	{
		*uParam0 = 1;
	}
}

void func_833(var uParam0, int iParam1)//Position - 0x78A1
{
	if (uParam0->f_706 != iParam1)
	{
		uParam0->f_706 = iParam1;
	}
}

void func_834(int iParam0, int iParam1)//Position - 0xB858
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iParam0, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
}

struct<16> func_835(int iParam0, bool bParam1)//Position - 0xBE30
{
	struct<16> Var0;
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				StringCopy(&Var0, "HPSTRAND_IAA" /* GXT: THE DATA BREACHES */, 64);
			}
			else
			{
				StringCopy(&Var0, "HPSTRAND_IAAb" /* GXT: The Data Breaches */, 64);
			}
			break;
		case 1:
			if (bParam1)
			{
				StringCopy(&Var0, "HPSTRAND_SUB" /* GXT: THE BOGDAN PROBLEM */, 64);
			}
			else
			{
				StringCopy(&Var0, "HPSTRAND_SUBb" /* GXT: The Bogdan Problem */, 64);
			}
			break;
		case 2:
			if (bParam1)
			{
				StringCopy(&Var0, "HPSTRAND_MSIL" /* GXT: THE DOOMSDAY SCENARIO */, 64);
			}
			else
			{
				StringCopy(&Var0, "HPSTRAND_MSILb" /* GXT: The Doomsday Scenario */, 64);
			}
			break;
	}
	return Var0;
}

void func_836(char* sParam0, char* sParam1, var uParam2, var uParam3, char* sParam4)//Position - 0xD191
{
	int iVar0;
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_16), sParam4, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam3->f_1[iVar0 /*57*/].f_36 = uParam2;
	MISC::SET_BIT(&(uParam3->f_686), iVar0);
	uParam3->f_694 = iVar0;
	uParam3->f_693++;
}

void func_837()//Position - 0xE7A5
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	}
}

bool func_838()//Position - 0xF298
{
	return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_PLANNING_BOARD", false, -1);
}

void func_839(var uParam0)//Position - 0xF35C
{
	MISC::CLEAR_BIT(&(uParam0->f_4), uParam0->f_1);
}

bool func_840(var uParam0)//Position - 0xF37F
{
	return !BitTest(uParam0->f_4, uParam0->f_1);
}

void func_841(var uParam0)//Position - 0xF391
{
	MISC::SET_BIT(&(uParam0->f_3), *uParam0);
}

bool func_842(var uParam0)//Position - 0xF3AC
{
	return BitTest(uParam0->f_3, *uParam0);
}

int func_843(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xF773
{
	if (__LIB_1__.func_155(iParam0, 1, 0) && __LIB_1__.func_155(iParam1, 1, 0))
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_33 == Global_1853348[iParam1 /*834*/].f_267.f_33 && Global_1853348[iParam0 /*834*/].f_267.f_32 == Global_1853348[iParam1 /*834*/].f_267.f_32)
		{
			if (!bParam2)
			{
				return 1;
			}
			else
			{
				if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 3) && BitTest(Global_1853348[iParam1 /*834*/].f_267.f_30, 3))
				{
					return 1;
				}
				if (!BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 3) && !BitTest(Global_1853348[iParam1 /*834*/].f_267.f_30, 3))
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if ((((Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_7 > -1) && Global_2689235[iParam0 /*453*/].f_318.f_6 == Global_2689235[iParam1 /*453*/].f_318.f_6) && Global_2689235[iParam0 /*453*/].f_318.f_7 == Global_2689235[iParam1 /*453*/].f_318.f_7) && Global_2680265.f_903.f_168[iParam0] == Global_2680265.f_903.f_168[iParam1])
		{
			return 1;
		}
	}
	return 0;
}

void func_844(var uParam0, int iParam1)//Position - 0x195B6
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

void func_845(var uParam0, int iParam1)//Position - 0x1C10C
{
	uParam0->f_1 = *uParam0;
	MISC::SET_BIT(&(uParam0->f_4), uParam0->f_1);
	MISC::CLEAR_BIT(&(uParam0->f_3), uParam0->f_1);
	*uParam0 = iParam1;
	if (*uParam0 == 7)
	{
		*uParam0 = 5;
	}
}

int func_846(int iParam0)//Position - 0x1F850
{
	if (iParam0 > -1 && iParam0 < 30)
	{
		return 1;
	}
	return 0;
}

int func_847(int iParam0)//Position - 0x1F9EE
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_23374 /* Tunable: H2_COST_IAA_JOB */;
		case 1:
			return Global_262145.f_23375 /* Tunable: H2_COST_SUB_JOB */;
		case 2:
			return Global_262145.f_23376 /* Tunable: H2_COST_SILO_OPERATION */;
		default:
	}
	return -1;
}

var func_848()//Position - 0x20696
{
	return BitTest(Global_2714762.f_2, 20);
}

int func_849()//Position - 0x20719
{
	if (BitTest(Global_1962546.f_1247, 17) || BitTest(Global_1959720.f_2825, 17))
	{
		return 1;
	}
	return 0;
}

void func_850()//Position - 0x20ACC
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar1 != __LIB_0__.func_160())
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			}
		}
		iVar0++;
	}
}

void func_851(var uParam0)//Position - 0x20E2E
{
	struct<6> Var0;
	*uParam0 = { Var0 };
}

Vector3 func_852()//Position - 0x28C4B
{
	return 654.731f, 7773.9673f, 0f;
}

Vector3 func_853(int iParam0, int iParam1)//Position - 0x2D0A6
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -113.8774f, 42.5136f, 70.3692f;
				case 1:
					return 272.718f, -181.582f, 60.571f;
				case 2:
					return 1179.365f, -301.8677f, 68.0504f;
				case 3:
					return 843.0017f, -54.7296f, 77.7644f;
				case 4:
					return 209.004f, 389.128f, 106.009f;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -284.4389f, -918.2646f, 30.0806f;
				case 1:
					return 1176.8672f, -1535.917f, 38.401f;
				case 2:
					return 835.3019f, -795.0507f, 25.2796f;
				case 3:
					return 336.8105f, -1153.6902f, 28.2919f;
				case 4:
					return 353.6927f, -1970.2693f, 23.4168f;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -99.1145f, -2025.0354f, 17.017f;
				case 1:
					return -967.575f, -2105.8657f, 8.2993f;
				case 2:
					return -910.0123f, -2263.5754f, 5.7091f;
				case 3:
					return -192.015f, -1950.5034f, 26.6204f;
				case 4:
					return -554.0223f, -2111.2422f, 4.9921f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_854(int iParam0)//Position - 0x2D67E
{
	switch (iParam0)
	{
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
			return 1;
		default:
	}
	return 0;
}

int func_855()//Position - 0x2D816
{
	return joaat("PICKUP_PORTABLE_CRATE_FIXED_INCAR");
}

int func_856(int iParam0)//Position - 0x3F3CF
{
	switch (iParam0)
	{
		case joaat("ex_prop_exec_crashedp"):
			return 1264126889;
		case joaat("prop_box_wood04a"):
			return -579043646;
		case joaat("ex_prop_adv_case_sm_03"):
			return 2068232770;
		case joaat("S_F_Y_Cop_01"):
			return 1315480201;
		case joaat("S_M_M_FIBSec_01"):
			return -980643760;
		case joaat("S_M_Y_Cop_01"):
			return 344139310;
		default:
	}
	return 0;
}

int func_857(int iParam0)//Position - 0x3FB47
{
	switch (iParam0)
	{
		case 2:
			return MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000);
		case 3:
			return MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
		case 4:
			return MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000);
		default:
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(1000, 4000);
}

int func_858(int iParam0, int iParam1)//Position - 0x4178C
{
	switch (iParam0)
	{
		case 84:
		case 72:
		case 73:
		case 75:
		case 77:
		case 78:
		case 79:
		case 80:
			switch (iParam1)
			{
				case 0:
					return joaat("mule3");
				case 1:
					return joaat("prop_portacabin01");
				case 2:
					return joaat("prop_worklight_03b");
				default:
			}
			break;
	}
	return 0;
}

int func_859()//Position - 0x4459E
{
	return Local_327.f_0;
}

int func_860(int iParam0)//Position - 0x4935C
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3000;
		case 2:
			return 5000;
		default:
	}
	return 0;
}

char* func_861()//Position - 0x7DCDA
{
	return "GR_DRIVER" /* GXT: driver */;
}

char* func_862()//Position - 0x7E4C1
{
	return "GR_CARGOL" /* GXT: Cargobob */;
}

int func_863(bool bParam0)//Position - 0x7E694
{
	if (Global_2689235[bParam0 /*453*/].f_269.f_4 != 0 || Global_2689235[bParam0 /*453*/].f_269.f_5)
	{
		return 1;
	}
	return 0;
}

void func_864()//Position - 0x80EC9
{
	if (HUD::DOES_BLIP_EXIST(iLocal_211))
	{
		HUD::REMOVE_BLIP(&iLocal_211);
	}
}

char* func_865()//Position - 0x85584
{
	return "FIB_05_BIOTECH_LAB_ALARMS";
}

void func_866()//Position - 0x8D72C
{
	int iVar0;
	if (BitTest(uLocal_139, 0))
	{
		if (iLocal_138[0] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[0]))
			{
				AUDIO::STOP_SOUND(iLocal_138[0]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[0]);
			}
		}
	}
	if (BitTest(uLocal_139, 1))
	{
		if (iLocal_138[1] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[1]))
			{
				AUDIO::STOP_SOUND(iLocal_138[1]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[1]);
			}
		}
	}
	if (BitTest(uLocal_139, 2))
	{
		if (iLocal_138[2] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[2]))
			{
				AUDIO::STOP_SOUND(iLocal_138[2]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[2]);
			}
		}
	}
	if (BitTest(uLocal_139, 3))
	{
		if (iLocal_138[3] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[3]))
			{
				AUDIO::STOP_SOUND(iLocal_138[3]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[3]);
			}
		}
	}
	if (BitTest(uLocal_139, 4))
	{
		if (iLocal_138[4] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[4]))
			{
				AUDIO::STOP_SOUND(iLocal_138[4]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[4]);
			}
		}
	}
	if (BitTest(uLocal_139, 5))
	{
		if (iLocal_138[5] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[5]))
			{
				AUDIO::STOP_SOUND(iLocal_138[5]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[5]);
			}
		}
	}
	if (BitTest(uLocal_139, 6))
	{
		if (iLocal_138[6] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[6]))
			{
				AUDIO::STOP_SOUND(iLocal_138[6]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[6]);
			}
		}
	}
	if (BitTest(uLocal_139, 7))
	{
		if (iLocal_138[7] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_138[7]))
			{
				AUDIO::STOP_SOUND(iLocal_138[7]);
				AUDIO::RELEASE_SOUND_ID(iLocal_138[7]);
			}
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iLocal_117[iVar0] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_117[iVar0]))
			{
				AUDIO::STOP_SOUND(iLocal_117[iVar0]);
				AUDIO::RELEASE_SOUND_ID(iLocal_117[iVar0]);
				iLocal_117[iVar0] = -1;
			}
		}
		iVar0++;
	}
	MISC::CLEAR_BIT(&uLocal_139, 0);
	MISC::CLEAR_BIT(&uLocal_139, 1);
	MISC::CLEAR_BIT(&uLocal_139, 2);
	MISC::CLEAR_BIT(&uLocal_139, 3);
	MISC::CLEAR_BIT(&uLocal_139, 4);
	MISC::CLEAR_BIT(&uLocal_139, 5);
	MISC::CLEAR_BIT(&uLocal_139, 6);
	MISC::CLEAR_BIT(&uLocal_139, 7);
}

void func_867(int iParam0, int iParam1, bool bParam2, var uParam3)//Position - 0xAD16B
{
	int iVar0;
	float fVar1;
	if (bParam2)
	{
		uParam3->f_2 = PED::GET_PED_MAX_HEALTH(iParam0);
		iVar0 = Global_262145.f_21723 /* Tunable: GR_STEAL_MINIGUNS_WEARING_BALLISTIC_HEALTH */;
		PED::SET_PED_MAX_HEALTH(iParam0, iVar0);
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 410, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 108, true);
		fVar1 = SYSTEM::TO_FLOAT((iVar0 / 5));
		if (fVar1 >= 1000f)
		{
			fVar1 = 999f;
		}
		PLAYER::SET_PLAYER_MAX_EXPLOSIVE_DAMAGE(iParam1, fVar1);
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, false, 0);
		PLAYER::SET_PLAYER_CAN_USE_COVER(iParam1, false);
		PED::SET_PED_RESET_FLAG(iParam0, 446, true);
		PED::SET_PED_RESET_FLAG(iParam0, 417, true);
		PED::SET_PED_RESET_FLAG(iParam0, 46, true);
	}
	else
	{
		if (uParam3->f_2 == 0)
		{
			uParam3->f_2 = 100;
		}
		PED::SET_PED_MAX_HEALTH(iParam0, uParam3->f_2);
		ENTITY::SET_ENTITY_HEALTH(iParam0, uParam3->f_2, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 410, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 108, false);
		PLAYER::SET_PLAYER_MAX_EXPLOSIVE_DAMAGE(iParam1, -1f);
		PLAYER::SET_PLAYER_CAN_USE_COVER(iParam1, true);
		PED::SET_PED_RESET_FLAG(iParam0, 446, false);
		PED::SET_PED_RESET_FLAG(iParam0, 417, false);
		PED::SET_PED_RESET_FLAG(iParam0, 46, false);
	}
}

void func_868(int iParam0)//Position - 0xAD5B1
{
	if (iParam0 != 1)
	{
		STREAMING::REMOVE_CLIP_SET(__LIB_1__.func_6(__LIB_0__.func_228(386, -1) == 0, "MOVE_M@FEMME@", "MOVE_F@FEMME@"));
	}
	if (iParam0 != 2)
	{
		STREAMING::REMOVE_CLIP_SET(__LIB_1__.func_6(__LIB_0__.func_228(386, -1) == 0, "MOVE_M@GANGSTER@NG", "MOVE_F@GANGSTER@NG"));
	}
	if (iParam0 != 3)
	{
		STREAMING::REMOVE_CLIP_SET(__LIB_1__.func_6(__LIB_0__.func_228(386, -1) == 0, "MOVE_M@POSH@", "MOVE_F@POSH@"));
	}
	if (iParam0 != 4)
	{
		STREAMING::REMOVE_CLIP_SET(__LIB_1__.func_6(__LIB_0__.func_228(386, -1) == 0, "MOVE_M@TOUGH_GUY@", "MOVE_F@TOUGH_GUY@"));
	}
	if (iParam0 != 5)
	{
		STREAMING::REMOVE_CLIP_SET(__LIB_1__.func_6(__LIB_0__.func_228(386, -1) == 0, "ANIM@MOVE_M@GROOVING@", "ANIM@MOVE_F@GROOVING@"));
	}
}

int func_869(int iParam0)//Position - 0x10159A
{
	switch (iParam0)
	{
		case joaat("WEAPON_MINIGUN"):
			return 1;
		default:
	}
	return 0;
}

int func_870()//Position - 0x1015C8
{
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_233)
	{
		return 0;
	}
	if (Global_1957750)
	{
		return 0;
	}
	return 1;
}

int func_871()//Position - 0x1015F0
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_M_Freemode_01"))
	{
		return 3;
	}
	return 4;
}

int func_872()//Position - 0x101610
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_M_Freemode_01"))
	{
		return joaat("DLC_MP_GR_M_BERD_1_25");
	}
	return joaat("DLC_MP_GR_F_BERD_1_25");
}

int func_873()//Position - 0x101638
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_M_Freemode_01"))
	{
		return 39;
	}
	return 38;
}

float func_874()//Position - 0x11564E
{
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		return 200f;
	}
	return 80f;
}

int func_875(int iParam0)//Position - 0x122A59
{
	if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, PLAYER::PLAYER_PED_ID(), -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 287))
		{
			return 1;
		}
	}
	return 0;
}

bool func_876(int iParam0, float fParam1)//Position - 0x12354A
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) <= fParam1;
}

int func_877(int iParam0)//Position - 0x1540D4
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return 1;
		default:
	}
	return 0;
}

int func_878()//Position - 0x1567D5
{
	return Local_327.f_1;
}

int func_879(int iParam0)//Position - 0x21D13
{
	switch (iParam0)
	{
		case joaat("S_M_Y_Cop_01"):
		case joaat("S_F_Y_Cop_01"):
		case joaat("S_M_Y_Swat_01"):
		case joaat("S_M_M_FIBOffice_01"):
		case joaat("S_M_Y_Sheriff_01"):
		case joaat("S_F_Y_Sheriff_01"):
		case joaat("S_M_Y_Ranger_01"):
		case joaat("S_F_Y_Ranger_01"):
		case joaat("S_M_M_Armoured_01"):
		case joaat("S_M_Y_Pilot_01"):
		case joaat("S_M_M_FIBSec_01"):
			return 1;
			break;
	}
	return 0;
}

int func_880(int iParam0)//Position - 0x5D741
{
	if (((((((iParam0 == Global_262145.f_21656 /* Tunable: -1397592988 */ || iParam0 == Global_262145.f_21657 /* Tunable: 1417889837 */) || iParam0 == Global_262145.f_21658 /* Tunable: -648585009 */) || iParam0 == Global_262145.f_21659 /* Tunable: -769260324 */) || iParam0 == Global_262145.f_21660 /* Tunable: -787597788 */) || iParam0 == Global_262145.f_21661 /* Tunable: 710100141 */) || iParam0 == Global_262145.f_21662 /* Tunable: -2117485517 */) || iParam0 == Global_262145.f_21663 /* Tunable: 1737983951 */)
	{
		return 1;
	}
	return 0;
}

int func_881(int iParam0)//Position - 0xC2F8B
{
	if (Local_150[iParam0 /*2*/].f_1 >= fLocal_155 && Local_150[iParam0 /*2*/].f_1 <= fLocal_154)
	{
		return 1;
	}
	return 0;
}

int func_882(int iParam0)//Position - 0xC2FB6
{
	if (Local_150[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

void func_883()//Position - 0xC3013
{
	fLocal_154 = 0.6f;
	fLocal_155 = 0.53f;
	Local_152[0 /*4*/].f_1 = (0.02f * fLocal_156);
	Local_152[1 /*4*/].f_1 = (0.025f * fLocal_156);
	Local_152[2 /*4*/].f_1 = (0.03f * fLocal_156);
	Local_152[3 /*4*/].f_1 = (0.035f * fLocal_156);
	Local_152[4 /*4*/].f_1 = (0.04f * fLocal_156);
	Local_152[5 /*4*/].f_1 = (0.045f * fLocal_156);
	Local_152[6 /*4*/].f_1 = (0.048f * fLocal_156);
	Local_152[7 /*4*/].f_1 = (0.05f * fLocal_156);
	Local_152[0 /*4*/] = 0;
	Local_152[1 /*4*/] = 0;
	Local_152[2 /*4*/] = 0;
	Local_152[3 /*4*/] = 0;
	Local_152[4 /*4*/] = 0;
	Local_152[5 /*4*/] = 0;
	Local_152[6 /*4*/] = 0;
	Local_152[7 /*4*/] = 0;
	Local_149.f_0 = 0.5f;
	Local_149.f_1 = 0.5f;
	Local_150[0 /*2*/] = 0.35f;
	Local_150[0 /*2*/].f_1 = 0.4f;
	Local_150[1 /*2*/] = 0.39f;
	Local_150[1 /*2*/].f_1 = 0.4f;
	Local_150[2 /*2*/] = 0.43f;
	Local_150[2 /*2*/].f_1 = 0.4f;
	Local_150[3 /*2*/] = 0.47f;
	Local_150[3 /*2*/].f_1 = 0.4f;
	Local_150[4 /*2*/] = 0.51f;
	Local_150[4 /*2*/].f_1 = 0.74f;
	Local_150[5 /*2*/] = 0.55f;
	Local_150[5 /*2*/].f_1 = 0.74f;
	Local_150[6 /*2*/] = 0.59f;
	Local_150[6 /*2*/].f_1 = 0.74f;
	Local_150[7 /*2*/] = 0.63f;
	Local_150[7 /*2*/].f_1 = 0.74f;
}

void func_884(bool bParam0, char* sParam1)//Position - 0xC344F
{
	if (bParam0)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_144, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_147 = MISC::GET_GAME_TIMER();
		iLocal_148 = 1;
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_144, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_148 = 0;
	}
}

void func_885()//Position - 0xC35FA
{
	if (iLocal_145 < 5)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, true);
		}
	}
}

int func_886(bool bParam0)//Position - 0xC3F33
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_144) && (!bParam0 || ((((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_0") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_1")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_5")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_6"))))
	{
		return 1;
	}
	return 0;
}

void func_887(bool bParam0)//Position - 0xC3FB4
{
	if (bParam0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_0", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_1", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_2", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_3", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_4", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_5", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_6", false);
	}
	iLocal_144 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED("Hacking_PC");
}

void func_888(var uParam0, struct<4> Param1)//Position - 0xC65A6
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		uParam0->f_42 = { Param1 };
	}
}

void func_889(var uParam0, struct<4> Param1)//Position - 0xC65E7
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		uParam0->f_38 = { Param1 };
	}
}

int func_890(int iParam0)//Position - 0xC6973
{
	switch (iParam0)
	{
		case 21:
			return 1;
		case 22:
			return 2;
		case 23:
			return 3;
		case 24:
			return 4;
		case 25:
			return 5;
		case 26:
			return 6;
		case 27:
			return 7;
		case 28:
			return 8;
		case 29:
			return 9;
		case 30:
			return 10;
		case 31:
			return 11;
		default:
	}
	return 0;
}

int func_891(int iParam0)//Position - 0xCF02B
{
	switch (iParam0)
	{
		case 70:
			return 1;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 4;
		case 74:
			return 5;
		case 75:
			return 6;
		case 76:
			return 7;
		case 77:
			return 8;
		case 78:
			return 9;
		case 79:
			return 10;
		case 80:
			return 11;
		default:
	}
	return 0;
}

int func_892()//Position - 0xD3CFE
{
	return Local_222.f_0;
}

void func_893(int iParam0, int iParam1, int iParam2)//Position - 0x1147
{
	struct<15> Var0;
	Var0.f_5 = 1;
	Var0.f_14 = -1;
	Var0.f_0 = -654484870;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_5 = 0;
	Var0.f_13 = 0;
	if (!iParam2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 15, iParam2);
	}
}

void func_894(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)//Position - 0x986E9
{
	struct<10> Var0;
	Var0.f_3 = -1;
	Var0.f_0 = -1390976345;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (iParam6 < 0)
	{
		Var0.f_2 = PLAYER::PLAYER_ID();
	}
	else
	{
		Var0.f_2 = PLAYER::INT_TO_PLAYERINDEX(iParam6);
	}
	Var0.f_5 = uParam1;
	Var0.f_7 = iParam4;
	Var0.f_8 = iParam5;
	Var0.f_3 = iParam3;
	Var0.f_4 = iParam2;
	Var0.f_6 = iParam8;
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_9), 0);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_9), 1);
	}
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 10, iParam0);
	}
}

Vector3 func_895(int iParam0)//Position - 0x9BB8E
{
	switch (iParam0)
	{
		case joaat("youga2"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("marshall"):
		case joaat("insurgent3"):
			return 0f, 0f, 0f;
		default:
	}
	return 0f, 0f, 90f;
}

int func_896(int iParam0)//Position - 0x9BBD2
{
	switch (iParam0)
	{
		case joaat("policet"):
		case joaat("speedo"):
		case joaat("paradise"):
			return joaat("prop_box_wood04a");
		case joaat("boxville"):
		case joaat("surfer"):
			return joaat("prop_box_wood03a");
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("insurgent3"):
			return joaat("gr_prop_gr_rsply_crate04a");
		case joaat("rumpo3"):
		case joaat("journey"):
			return joaat("prop_box_wood01a");
		case joaat("youga2"):
		case joaat("burrito"):
			return joaat("gr_prop_gr_rsply_crate04a");
		case joaat("dloader"):
			return joaat("gr_prop_gr_rsply_crate04b");
		case joaat("marshall"):
			return joaat("hei_prop_carrier_crate_01a");
		case joaat("riot"):
			return joaat("prop_box_ammo03a_set");
		default:
	}
	return joaat("prop_box_wood04a");
}

Vector3 func_897(int iParam0)//Position - 0x9BC80
{
	switch (iParam0)
	{
		case joaat("paradise"):
			return 0f, -1.25f, -0.2f;
		case joaat("rumpo3"):
			return 0f, -1.8f, -0.4f;
		case joaat("journey"):
			return 0.55f, -2.73f, 0.4f;
		case joaat("surfer"):
			return 0f, 0f, -0.3f;
		case joaat("stockade"):
			return 0f, -2f, 0.45f;
		case joaat("dloader"):
			return 0f, -1.4f, 0.375f;
		case joaat("youga2"):
			return 0f, -1.4f, -0.2f;
		case joaat("marshall"):
			return 0f, -2.44f, 1.19f;
		case joaat("burrito"):
			return 0f, -0.85f, -0.3f;
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("insurgent3"):
			return 0f, -2.2f, 0.25f;
		default:
	}
	return 0f, -1.25f, -0.1f;
}

int func_898(int iParam0)//Position - 0x9CF72
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("cargobob") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("cargobob2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("cargobob3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("cargobob4"))
	{
		return 1;
	}
	return 0;
}

int func_899(int iParam0, int* iParam1)//Position - 0x9DC7B
{
	*iParam1 = 0;
	if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam0))
	{
		VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam0, iParam1);
		if (__LIB_0__.func_657(*iParam1, 1) && ENTITY::GET_ENTITY_MODEL(*iParam1) == joaat("trailersmall2"))
		{
			return 1;
		}
	}
	return 0;
}

float func_900(struct<3> Param0, struct<3> Param1)//Position - 0x9EE4C
{
	return MISC::ACOS((__LIB_0__.func_156(Param0, Param1) / (SYSTEM::VMAG(Param0) * SYSTEM::VMAG(Param1))));
}

int func_901(int iParam0, bool bParam1)//Position - 0x195B0E
{
	int iVar0;
	if (__LIB_1__.func_264(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, bParam1))
		{
			if (__LIB_0__.func_657(PED::GET_VEHICLE_PED_IS_IN(iVar0, bParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_902()//Position - 0x942A
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

int func_903(int iParam0)//Position - 0x34A63
{
	if ((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249)
	{
		return 1;
	}
	if (iParam0 == 237 && __LIB_3__.func_154(func_167(PLAYER::PLAYER_ID())))
	{
		return 1;
	}
	if ((iParam0 == 299 || iParam0 == 300) || iParam0 == 301)
	{
		return 1;
	}
	return 0;
}

bool func_904(char* sParam0, char* sParam1, int iParam2)//Position - 0x48026
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_905(bool bParam0)//Position - 0x4848B
{
	if ((((!__LIB_0__.func_190() && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_1__.func_159())
	{
		if (bParam0)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_906(bool bParam0, bool bParam1)//Position - 0x4B3AA
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1598) || Global_2678393.f_1598 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam1)
	{
		if (bParam0)
		{
			Global_2678393.f_1598 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 23);
		}
		else
		{
			Global_2678393.f_1598 = -1;
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

char* func_907(bool bParam0, int iParam1)//Position - 0x10F4A4
{
	if (bParam0)
	{
		switch (iParam1)
		{
			case 0:
				return "CASINO_ENT_F0_H" /* GXT: Enter the Casino. */;
			case 1:
				return "CASINO_ENT_F1_H" /* GXT: Enter your Penthouse. */;
			case 2:
				return "CASINO_ENT_F2_H" /* GXT: Enter your Penthouse Garage. */;
			case 3:
				return "CASINO_ENT_F3_H" /* GXT: Enter the Parking Garage. */;
			case 4:
				return "CASINO_ENT_F10E" /* GXT: Enter The Music Locker. */;
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				return "CASINO_BUY_PROP" /* GXT: Purchase the Penthouse from www.thediamondcasinoandresort.com. */;
			case 2:
				return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
			case 4:
				if (__LIB_28__.func_798())
				{
					return "CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */;
				}
				else if (BitTest(Global_1946250.f_4523.f_1, 7))
				{
					return "CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */;
				}
				return "CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */;
				break;
			}
	}
	return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
}

int func_908(int iParam0)//Position - 0x1AF0F3
{
	if (Global_2667225.f_45.f_320 == 0 && Global_2667225.f_45.f_322 == 1)
	{
		return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2667225.f_45.f_321, NETWORK::GET_NETWORK_TIME_ACCURATE())) > iParam0;
	}
	return 0;
}

void func_909(char* sParam0)//Position - 0x1B0098
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (AUDIO::IS_STREAM_PLAYING() && AUDIO::LOAD_STREAM(sParam0, 0))
		{
			AUDIO::STOP_STREAM();
		}
	}
}

void func_910(char* sParam0)//Position - 0x1B9BB8
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!AUDIO::IS_STREAM_PLAYING() && AUDIO::LOAD_STREAM(sParam0, 0))
		{
			AUDIO::PLAY_STREAM_FRONTEND();
		}
	}
}

int func_911(int iParam0, bool bParam1)//Position - 0x1BFA87
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = -2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_912(int iParam0)//Position - 0x1C65AD
{
	switch (iParam0)
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			return 1;
		default:
	}
	return 0;
}

int func_913(bool bParam0, int iParam1, var uParam2)//Position - 0x6D26
{
	switch (iParam1)
	{
		case 0:
			return joaat("bkr_prop_weed_bucket_01a");
		case 1:
			return joaat("speedo");
		case 11:
			return joaat("burrito2");
		case 2:
			return joaat("bkr_prop_meth_pseudoephedrine");
		case 4:
			return joaat("prop_cs_duffel_01");
		case 6:
			return joaat("prop_idol_case_02");
		case 5:
			return joaat("prop_ld_case_01");
		case 10:
			return joaat("prop_security_case_01");
		case 9:
			return joaat("policeb");
		case 8:
			return joaat("burrito");
		case 7:
			return joaat("stockade");
		case 15:
			return joaat("pony2");
		case 16:
			return joaat("pounder");
		case 17:
			return joaat("tampa");
		case 18:
			return joaat("prop_cs_duffel_01");
		case 19:
			return joaat("stockade");
		case 3:
			return joaat("boxville3");
		case 12:
			return joaat("prop_cs_duffel_01");
		case 13:
			return joaat("prop_cs_duffel_01");
		case 14:
			return joaat("ex_prop_adv_case_sm");
		case 20:
			return joaat("bagger");
		default:
	}
	return joaat("speedo");
}

int func_914(int iParam0)//Position - 0xB5B2
{
	switch (iParam0)
	{
		case 26:
			return joaat("police3");
		case 27:
			return joaat("police3");
		case 28:
			return joaat("police3");
		case 29:
			return joaat("hexer");
		case 30:
			return joaat("frogger");
		case 33:
			return joaat("mule");
		case 34:
			return joaat("benson");
		case 31:
			return joaat("valkyrie");
		case 38:
			return joaat("marquis");
		case 1:
			return joaat("fugitive");
		case 4:
			return joaat("benson");
		case 3:
			return joaat("fugitive");
		case 7:
			return joaat("stockade");
		case 8:
			return joaat("burrito");
		case 11:
			return joaat("cruiser");
		case 12:
			return joaat("daemon");
		case 13:
			return joaat("gburrito");
		case 14:
			return joaat("pcj");
		case 20:
			return joaat("daemon");
		default:
	}
	return joaat("huntley");
}

float func_915(int iParam0)//Position - 0xBF83
{
	if (iParam0 == joaat("stockade"))
	{
		return 0.35f;
	}
	return 0.2f;
}

Vector3 func_916(int iParam0, int iParam1)//Position - 0xCEFB
{
	switch (iParam0)
	{
		case 77:
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					return 2310.425f, 2576.674f, 45.668f;
				case 1:
					return 2316.2107f, 2569.3252f, 45.6676f;
				default:
			}
			break;
		case 79:
			switch (iParam1)
			{
				case 0:
					return 1356.5867f, 3277.9285f, 36.718f;
				case 1:
					return 1358.944f, 3262.885f, 37.693f;
				case 2:
					return 1349.387f, 3269.412f, 37.041f;
				case 3:
					return 1363.4817f, 3270.4082f, 37.381f;
				default:
			}
			break;
		case 80:
			switch (iParam1)
			{
				case 0:
					return 605.2227f, -411.4341f, 23.7449f;
				default:
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return -445.808f, -2166.288f, 9.315f;
				default:
			}
			break;
		case 82:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_917(int iParam0, int iParam1)//Position - 0xD01F
{
	switch (iParam0)
	{
		case 171:
			switch (iParam1)
			{
				case 0:
					return -1163.5476f, -2055.8462f, 13.1351f;
				case 1:
					return -1169.451f, -2041.3191f, 12.8438f;
				case 2:
					return -1171.3701f, -2039.6241f, 12.7696f;
				case 3:
					return -1175.97f, -2057.4763f, 13.2069f;
				default:
			}
			break;
		case 172:
			switch (iParam1)
			{
				case 0:
					return 1433.809f, -2275.971f, 65.388f;
				case 1:
					return 1443.335f, -2290.114f, 65.91f;
				case 2:
					return 1441.933f, -2292.376f, 65.914f;
				case 3:
					return 1444.888f, -2283.464f, 65.823f;
				default:
			}
			break;
		case 173:
			switch (iParam1)
			{
				case 0:
					return 2940.298f, 2779.291f, 38.361f;
				case 1:
					return 2956.752f, 2780.818f, 39.706f;
				case 2:
					return 2946.773f, 2785.261f, 39.067f;
				case 3:
					return 2950.609f, 2783.721f, 39.473f;
				default:
			}
			break;
		case 174:
			switch (iParam1)
			{
				case 0:
					return 3695.73f, 4556.726f, 24.469f;
				case 1:
					return 3689.444f, 4557.407f, 24.097f;
				case 2:
					return 3695.104f, 4570.355f, 24.131f;
				case 3:
					return 3697.431f, 4551.241f, 24.367f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_918(int iParam0, int iParam1)//Position - 0xD1F1
{
	switch (iParam0)
	{
		case 170:
			switch (iParam1)
			{
				case 0:
					return -570.8359f, 270.0006f, 81.9375f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_919(int iParam0, int iParam1)//Position - 0xD22B
{
	switch (iParam0)
	{
		case 119:
			switch (iParam1)
			{
				case 0:
					return 505.9079f, -1503.9623f, 28.2896f;
				case 1:
					return 498.3448f, -1499.5265f, 28.2837f;
				case 2:
					return 500.0175f, -1502.4059f, 28.289f;
				case 3:
					return 508.5004f, -1501.7805f, 28.288f;
				default:
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return -305.1115f, -1188.1129f, 23.0365f;
				case 1:
					return -306.7497f, -1179.784f, 22.6717f;
				case 2:
					return -307.8149f, -1175.4253f, 22.4597f;
				case 3:
					return -308.8598f, -1190.6284f, 23.2157f;
				default:
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 1512.6592f, 771.6665f, 76.4418f;
				case 1:
					return 1515.8707f, 770.1014f, 76.4299f;
				case 2:
					return 1525.1587f, 786.407f, 76.4403f;
				case 3:
					return 1527.5164f, 786.0479f, 76.4403f;
				default:
			}
			break;
		case 122:
			switch (iParam1)
			{
				case 0:
					return 1549.1874f, 3720.5503f, 33.4943f;
				case 1:
					return 1548.7905f, 3717.9475f, 33.5295f;
				case 2:
					return 1553.9342f, 3721.2524f, 33.5035f;
				case 3:
					return 1546.8827f, 3728.011f, 33.5095f;
				default:
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 0:
					return 1248.4796f, 1832.5824f, 79.7751f;
				case 1:
					return 1248.8912f, 1835.258f, 79.7037f;
				case 2:
					return 1248.4084f, 1818.9213f, 80.0257f;
				case 3:
					return 1249.8248f, 1822.4258f, 80.1329f;
				default:
			}
			break;
		case 124:
			switch (iParam1)
			{
				case 0:
					return 1445.1296f, 6500.7993f, 19.1339f;
				case 1:
					return 1456.2206f, 6499.19f, 19.4999f;
				case 2:
					return 1445.7876f, 6498.671f, 19.1849f;
				case 3:
					return 1453.8104f, 6497.915f, 19.4341f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_920(int iParam0, int iParam1)//Position - 0xD4DD
{
	switch (iParam0)
	{
		case 101:
			switch (iParam1)
			{
				case 0:
					return -521.7769f, 5207.142f, 82.5625f;
				default:
			}
			break;
		case 102:
			switch (iParam1)
			{
				case 0:
					return 2178.58f, -650.239f, 90.9213f;
				default:
			}
			break;
		case 103:
			switch (iParam1)
			{
				case 0:
					return 654.8974f, -1368.3191f, 8.7287f;
				default:
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 1554.5569f, 3360.8228f, 36.1612f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_921(int iParam0, int iParam1)//Position - 0xD58F
{
	switch (iParam0)
	{
		case 95:
			switch (iParam1)
			{
				case 0:
					return -1086.8496f, -2403.147f, 12.9452f;
				case 1:
					return -1101.9097f, -2394.0046f, 12.9452f;
				case 2:
					return -1083.1782f, -2427.9722f, 12.9452f;
				default:
			}
			break;
		case 97:
			switch (iParam1)
			{
				case 0:
					return 1337.4034f, -1549.4932f, 52.0003f;
				default:
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 378.2609f, 3405.0894f, 35.4042f;
				case 1:
					return 363.709f, 3409.6392f, 35.4035f;
				case 2:
					return 360.7429f, 3424.7458f, 34.9333f;
				default:
			}
			break;
		case 99:
			switch (iParam1)
			{
				case 0:
					return 875.5771f, 2379.905f, 53.0068f;
				case 1:
					return 847.553f, 2374.0935f, 53.0725f;
				case 2:
					return 865.3605f, 2370.9482f, 53.3108f;
				default:
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 0:
					return -1933.6193f, 2062.0652f, 139.8399f;
				case 1:
					return -1921.2142f, 2048.7998f, 139.7353f;
				case 2:
					return -1920.4727f, 2086.2727f, 135.8039f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_922(int iParam0, int iParam1)//Position - 0xD729
{
	switch (iParam0)
	{
		case 83:
			switch (iParam1)
			{
				case 0:
					return 154.591f, -3196.471f, 4.955f;
				case 1:
					return 123.804f, -3203.889f, 4.941f;
				case 2:
					return 138.352f, -3192.5f, 4.858f;
				default:
			}
			break;
		case 84:
			switch (iParam1)
			{
				case 0:
					return -947.097f, 591.678f, 100.005f;
				case 1:
					return -942.417f, 590.367f, 100.005f;
				default:
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 0:
					return 348.9772f, -1243.3313f, 31.509f;
				case 1:
					return 341.1945f, -1252.7107f, 31.509f;
				case 2:
					return 343.6731f, -1245.8274f, 31.509f;
				case 5:
					return 347.9085f, -1245.289f, 31.509f;
				default:
			}
			break;
		case 86:
			break;
		case 87:
			switch (iParam1)
			{
				case 0:
					return -1870.021f, 2093.39f, 138.659f;
				case 1:
					return -1877.535f, 2094.948f, 139.357f;
				default:
			}
			break;
		case 88:
			switch (iParam1)
			{
				case 0:
					return 1809.3519f, 3923.5066f, 32.6609f;
				case 1:
					return 1809.5929f, 3893.8296f, 32.7868f;
				case 2:
					return 1810.8752f, 3898.5176f, 32.7994f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_923(int iParam0, int iParam1)//Position - 0xD8E4
{
	switch (iParam0)
	{
		case 71:
			switch (iParam1)
			{
				case 0:
					return 132.747f, 316.5055f, 111.1377f;
				case 1:
					return 140.2464f, 308.1164f, 111.1379f;
				default:
			}
			break;
		case 72:
			switch (iParam1)
			{
				case 0:
					return 161.659f, -1237.582f, 28.317f;
				case 1:
					return 177.517f, -1244.61f, 28.198f;
				default:
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 718.551f, 4181.505f, 39.709f;
				case 1:
					return 725.318f, 4176.248f, 39.709f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_924(int iParam0, int iParam1)//Position - 0xD9B6
{
	switch (iParam0)
	{
		case 65:
			switch (iParam1)
			{
				case 0:
					return 2213.984f, 5609.228f, 53.214f;
				case 1:
					return 2214.707f, 5605.734f, 53.191f;
				case 2:
					return 2215.606f, 5635.041f, 54.991f;
				case 3:
					return 2197.249f, 5611.383f, 52.583f;
				case 4:
					return 2211.3f, 5598.106f, 52.88f;
				default:
			}
			break;
		case 66:
			switch (iParam1)
			{
				case 0:
					return 1530.994f, 6339.446f, 23.162f;
				case 1:
					return 1514.96f, 6332.875f, 23.075f;
				case 2:
					return 1501.002f, 6340.393f, 22.931f;
				case 3:
					return 1506.711f, 6328.714f, 22.971f;
				default:
			}
			break;
		case 67:
			switch (iParam1)
			{
				case 0:
					return 1521.399f, 1702.741f, 109.002f;
				case 1:
					return 1532.12f, 1716.856f, 109.128f;
				default:
			}
			break;
		case 68:
			break;
		case 69:
			switch (iParam1)
			{
				case 0:
					return 1320.872f, -528.087f, 71.121f;
				default:
			}
			break;
		case 70:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_925(int iParam0, int iParam1, bool bParam2)//Position - 0xDC22
{
	switch (iParam0)
	{
		case 0:
			return -1238.8511f, -1400.535f, 3.2165f;
		case 1:
			return -1014.2174f, -533.1254f, 35.2295f;
		case 2:
			return -20.5298f, -1271.142f, 28.273f;
		case 3:
			return 1284.595f, -2562.1226f, 43.0983f;
		case 4:
			return 450.3504f, -1230.4711f, 29.034f;
		case 5:
			return 145.7378f, 322.3651f, 111.1386f;
		case 11:
			return 1121.2118f, 239.838f, 79.8556f;
		case 12:
			return -3054.2773f, 608.0347f, 6.2058f;
		case 13:
			return -2955.04f, 402.565f, 14.059f;
		case 14:
			return 1220.405f, 1870.591f, 77.908f;
		case 15:
			return 1110.4274f, -1262.8817f, 19.3388f;
		case 16:
			return -1307.914f, -1258.692f, 3.536f;
		case 17:
			return -172.4439f, -41.4259f, 51.3666f;
		case 18:
			return -500.5161f, -64.1044f, 38.8799f;
		case 19:
			return 1141.1024f, -1319.1995f, 33.6567f;
		case 20:
			return -1567.8386f, -239.2559f, 48.4769f;
		case 21:
			return -1033.6527f, -2216.249f, 7.9812f;
		case 22:
			return 491.1942f, -2136.7896f, 4.9175f;
		case 23:
			return 2548.7385f, 341.2728f, 107.4612f;
		case 24:
			return -480.7506f, -450.5746f, 33.2013f;
		case 45:
			return 187.2586f, 1246.9894f, 224.4599f;
		case 46:
			return 1881.0984f, -1032.1796f, 77.8668f;
		case 47:
			return -803.2568f, 884.084f, 202.1938f;
		case 48:
			return -2334.7673f, 263.5585f, 168.6021f;
		case 49:
			return 822.6735f, -2979.9612f, 5.0207f;
		case 6:
			return 1511.7168f, -2098.7117f, 75.777f;
		case 7:
			return 777.491f, 1287.714f, 359.297f;
		case 8:
			return -1715.441f, -1134.02f, 12.075f;
		case 9:
			return -1832.078f, -2805.618f, 12.944f;
		case 10:
			return 848.653f, -3209.231f, 4.901f;
		case 30:
			return 979.195f, -127.704f, 72.938f;
		case 31:
			return 977.524f, -1824.118f, 30.159f;
		case 32:
			return -680.7855f, -879.4637f, 23.4991f;
		case 33:
			return -1578.277f, -85.852f, 53.134f;
		case 34:
			return -145.437f, -956.396f, 20.277f;
		case 40:
			return -53.0294f, -1418.961f, 28.328f;
		case 41:
			return 85.7264f, -824.765f, 30.0518f;
		case 42:
			return -892.1681f, 132.276f, 58.3107f;
		case 43:
			return 192.946f, 61.563f, 82.601f;
		case 44:
			return -703.855f, -1137.8f, 9.613f;
		case 50:
			return 370.895f, 793.555f, 186.567f;
		case 51:
			return 348.939f, -1098.917f, 28.413f;
		case 52:
			return -138.215f, 984.602f, 235.012f;
		case 53:
			return -3188.038f, 1209.957f, 8.607f;
		case 54:
			return 1220.717f, -3000.777f, 4.865f;
		case 25:
			return -575.8843f, -133.6788f, 34.8194f;
		case 26:
			return 385.3026f, -1633.9333f, 28.2919f;
		case 27:
			return -1079.7545f, -883.9249f, 3.6029f;
		case 28:
			return 851.1126f, -1403.54f, 25.1226f;
		case 29:
			return -1307.5834f, -1527.4987f, 3.3451f;
		case 55:
			return -690.8977f, -611.4503f, 31.1423f;
		case 56:
			return -1776.953f, -252.487f, 48.395f;
		case 57:
			return -1327.994f, 350.675f, 62.719f;
		case 58:
			return -523.9545f, -249.077f, 34.7553f;
		case 59:
			return 291.944f, 195.6205f, 103.3726f;
		case 60:
			return 717.497f, -3858.922f, 0f;
		case 61:
			return 1983.776f, -3537.736f, -0.187f;
		case 62:
			return -2529.737f, -3526.052f, 0.375f;
		case 63:
			return 58.069f, -4048.858f, 0f;
		case 64:
			return -2531.218f, -1086.706f, 0.937f;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 145.7378f, 322.3651f, 111.1386f;
				case 1:
					return 140.3634f, 315.898f, 111.1386f;
				default:
			}
			break;
		case 72:
			switch (iParam1)
			{
				case 0:
					return 159.484f, -1256.225f, 28.185f;
				case 1:
					return 150.465f, -1245.846f, 28.198f;
				default:
			}
			break;
		case 73:
			switch (iParam1)
			{
				case 0:
					return -1362.2162f, 493.5369f, 102.9044f;
				case 1:
					return -1353.8085f, 483.3299f, 102.8865f;
				default:
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 0:
					return 2607.515f, 2794.158f, 32.709f;
				case 1:
					return 2612.903f, 2807.067f, 32.719f;
				default:
			}
			break;
		case 75:
			switch (iParam1)
			{
				case 0:
					return -2784.369f, 1432.2349f, 99.9284f;
				case 1:
					return -2781.2942f, 1424.8588f, 99.9284f;
				default:
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 707.0178f, 4181.916f, 39.7092f;
				case 1:
					return 714.0385f, 4172.131f, 39.7091f;
				default:
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 0:
					return -502.7667f, 5167.5654f, 88.5884f;
				case 1:
					return -505.3714f, 5163.8706f, 88.9852f;
				default:
			}
			break;
		case 102:
			switch (iParam1)
			{
				case 0:
					return 2182.595f, -625.5231f, 95.8305f;
				case 1:
					return 2158.371f, -620.7534f, 95.3615f;
				default:
			}
			break;
		case 103:
			switch (iParam1)
			{
				case 0:
					return 665.8118f, -1302.871f, 22.2289f;
				case 1:
					return 670.1454f, -1335.5634f, 22.9101f;
				default:
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 1585.022f, 3367.705f, 36.389f;
				case 1:
					return 1590.2422f, 3373.5786f, 36.0557f;
				default:
			}
			break;
		case 145:
			switch (iParam1)
			{
				case 0:
					return 1249.812f, -334.981f, 68.082f;
				case 1:
					return 1257.59f, -335.9944f, 68.0822f;
				default:
			}
			break;
		case 146:
			switch (iParam1)
			{
				case 0:
					return -646.743f, -1749.078f, 23.432f;
				case 1:
					return -634.7629f, -1730.286f, 23.1686f;
				default:
			}
			break;
		case 147:
			switch (iParam1)
			{
				case 0:
					return 1982.629f, 3786.232f, 31.181f;
				case 1:
					return 1978.4983f, 3784.034f, 31.1808f;
				default:
			}
			break;
		case 148:
			switch (iParam1)
			{
				case 0:
					return 2588.2048f, 443.4924f, 107.4557f;
				case 1:
					return 2583.297f, 438.5674f, 107.4557f;
				default:
			}
			break;
		case 149:
			switch (iParam1)
			{
				case 0:
					return 970.9243f, 3616.4763f, 31.6212f;
				case 1:
					return 951.5305f, 3615.4104f, 31.6283f;
				default:
			}
			break;
		case 150:
			switch (iParam1)
			{
				case 0:
					return 1362.8193f, -554.5222f, 73.3379f;
				case 1:
					return 1353.164f, -554.6558f, 73.1354f;
				default:
			}
			break;
		case 151:
			switch (iParam1)
			{
				case 0:
					return -1151.8676f, 948.8068f, 198.0139f;
				case 1:
					return -1163.2881f, 928.6395f, 196.5032f;
				default:
			}
			break;
		case 152:
			switch (iParam1)
			{
				case 0:
					return 140.45f, -246.704f, 50.504f;
				case 1:
					return 145.775f, -248.609f, 50.468f;
				default:
			}
			break;
		case 153:
			switch (iParam1)
			{
				case 0:
					return 874.578f, -2174.948f, 29.519f;
				case 1:
					return 886.236f, -2178.334f, 29.519f;
				default:
			}
			break;
		case 154:
			switch (iParam1)
			{
				case 0:
					return 45.724f, -1450.489f, 28.312f;
				case 1:
					return 52.295f, -1437.391f, 28.312f;
				default:
			}
			break;
		case 155:
			switch (iParam1)
			{
				case 0:
					return -493.817f, -2224.67f, 5.788f;
				case 1:
					return -511.959f, -2231.29f, 5.489f;
				default:
			}
			break;
		case 156:
			switch (iParam1)
			{
				case 0:
					return 674.72f, 672.161f, 127.911f;
				case 1:
					return 666.681f, 674.893f, 127.911f;
				default:
			}
			break;
		case 157:
			switch (iParam1)
			{
				case 0:
					return -3169.228f, 1105.144f, 19.706f;
				case 1:
					return -3172.253f, 1099.131f, 19.784f;
				default:
			}
			break;
		case 158:
			switch (iParam1)
			{
				case 0:
					return 2863.803f, 1513.051f, 23.567f;
				case 1:
					return 2865.857f, 1518.958f, 23.567f;
				default:
			}
			break;
		case 159:
			switch (iParam1)
			{
				case 0:
					return -1183.289f, -363.908f, 35.547f;
				case 1:
					return -1182.461f, -368.997f, 35.47f;
				default:
			}
			break;
		case 160:
			switch (iParam1)
			{
				case 0:
					return 2352.1423f, 4872.04f, 40.8114f;
				case 1:
					return 2353.8286f, 4879.8228f, 40.836f;
				default:
			}
			break;
		case 161:
			switch (iParam1)
			{
				case 0:
					return 2593.027f, 3171.4802f, 50.0521f;
				case 1:
					return 2585.175f, 3178.916f, 50.2472f;
				default:
			}
			break;
		case 162:
			switch (iParam1)
			{
				case 0:
					return 854.003f, 2357.536f, 52.059f;
				case 1:
					return 861.425f, 2370.523f, 53.583f;
				default:
			}
			break;
		case 163:
			switch (iParam1)
			{
				case 0:
					return 1438.18f, 3615.838f, 33.93f;
				case 1:
					return 1433.082f, 3613.894f, 33.944f;
				default:
			}
			break;
		case 164:
			switch (iParam1)
			{
				case 0:
					return 736.687f, 4191.176f, 39.728f;
				case 1:
					return 736.269f, 4177.403f, 39.722f;
				default:
			}
			break;
		case 165:
			switch (iParam1)
			{
				case 0:
					return 1458.731f, 6542.056f, 13.836f;
				case 1:
					return 1459.857f, 6548.396f, 13.55f;
				default:
			}
			break;
		case 166:
			switch (iParam1)
			{
				case 0:
					return -2271.835f, 4280.214f, 44.651f;
				case 1:
					return -2268.572f, 4285.391f, 45.135f;
				default:
			}
			break;
		case 167:
			switch (iParam1)
			{
				case 0:
					return -1132.408f, 2694.927f, 17.8f;
				case 1:
					return -1137.807f, 2687.475f, 17.694f;
				default:
			}
			break;
		case 168:
			switch (iParam1)
			{
				case 0:
					return -744.342f, 5538.266f, 32.486f;
				case 1:
					return -773.501f, 5532.21f, 32.479f;
				default:
			}
			break;
		case 169:
			switch (iParam1)
			{
				case 0:
					return -100.727f, 6580.415f, 28.402f;
				case 1:
					return -96.114f, 6584.069f, 28.436f;
				default:
			}
			break;
		case 175:
			return -1159.8091f, -1563.5125f, 3.4034f;
		case 176:
			return -1843.7483f, -609.2866f, 10.3629f;
		case 177:
			return -2212.1345f, 4241.07f, 46.5893f;
		case 178:
			return 243.1526f, 3153.8992f, 41.4894f;
		case 179:
			return -582.7752f, 5332.2554f, 69.2145f;
		case 180:
			return 50.8194f, -862.91f, 29.5896f;
		case 181:
			return 1187.6011f, -1336.9447f, 33.9648f;
		case 182:
			return -1135.3779f, 550.3592f, 100.9672f;
		case 183:
			return 1406.436f, 2161.1355f, 97.5442f;
		case 184:
			return 1775.9266f, 4597.86f, 36.7104f;
		case 185:
			return -1149.59f, -1562.984f, 3.38f;
		case 186:
			return -1854.571f, -599.049f, 10.539f;
		case 187:
			return 42.807f, -883.648f, 29.265f;
		case 188:
			return 1194.16f, -1309.266f, 34.093f;
		case 189:
			return -1166.469f, 543.194f, 100.298f;
		case 190:
			return 1418.145f, 2164.872f, 96.573f;
		case 191:
			return 256.753f, 3155.149f, 41.554f;
		case 192:
			return -2172.257f, 4267.015f, 47.949f;
		case 193:
			return -584.472f, 5321.835f, 69.214f;
		case 194:
			return 1816.3344f, 4601.093f, 36.368f;
		case 195:
			return 2946.5208f, 4649.378f, 47.5449f;
		case 196:
			return 2594.9563f, 2413.781f, 22.4907f;
		case 197:
			return 2636.9924f, 579.6707f, 94.2817f;
		case 198:
			return -225.6168f, -2484.7734f, 5.0014f;
		case 199:
			return -1128.9027f, -1752.7428f, 3.0021f;
		case 200:
			return -3110.9705f, 779.9443f, 17.9071f;
		case 201:
			return -1478.1593f, 1509.5502f, 114.1521f;
		case 202:
			return -2285.361f, 4251.587f, 42.1319f;
		case 203:
			return 660.4508f, 771.1481f, 204.403f;
		case 204:
			return 112.201f, -433.5972f, 40.1284f;
		case 205:
			return -2267.608f, 4279.202f, 44.716f;
		case 206:
			return 2924.765f, 4643.386f, 47.545f;
		case 207:
			return 2590.391f, 2386.328f, 21.566f;
		case 208:
			return -1487.848f, 1533.011f, 112.763f;
		case 209:
			return -1146.516f, -1769.043f, 3.077f;
		case 210:
			return -258.795f, -2508.146f, 5.001f;
		case 211:
			return 2626.9458f, 614.5991f, 93.7752f;
		case 212:
			return -3093.3674f, 803.7929f, 17.5624f;
		case 213:
			return 690.1229f, 769.2505f, 204.4732f;
		case 214:
			return 131.4018f, -400.5652f, 40.1941f;
		case 215:
			return 485.3851f, -1102.124f, 28.2009f;
		case 216:
			return 1707.998f, 4822.2847f, 41.0202f;
		case 217:
			return 2661.9731f, 3278.0933f, 54.2405f;
		case 218:
			return 448.609f, -559.5212f, 27.5003f;
		case 219:
			return -632.399f, -1751.8796f, 23.0026f;
		case 220:
			return 878.5939f, -1663.9945f, 29.4561f;
		case 221:
			return -3166.658f, 1136.2399f, 20.0759f;
		case 222:
			return -798.1126f, 5390.6426f, 33.3131f;
		case 223:
			return -1048.3518f, -1557.8976f, 3.9761f;
		case 224:
			return -495.7263f, 43.5551f, 51.5799f;
		case 225:
			return 2645.0295f, 3289.7905f, 54.251f;
		case 226:
			return -780.5065f, 5401.407f, 33.2569f;
		case 227:
			return 2045.9235f, 3164.532f, 44.2689f;
		case 228:
			return -134.167f, 1931.6509f, 195.4121f;
		case 229:
			return 968.2727f, 2715.7769f, 38.4835f;
		case 230:
			return 2760.283f, 3437.3237f, 55.0227f;
		case 231:
			return -1050.6611f, -1574.378f, 3.9315f;
		case 232:
			return -512.3326f, 45.0425f, 51.5799f;
		case 233:
			return 459.0626f, -1099.0466f, 28.2015f;
		case 234:
			return 866.4947f, -1635.4011f, 29.1943f;
		case 255:
			return 35.6848f, -581.3895f, 30.6286f;
		case 256:
			return 939.8113f, -90.7924f, 77.7643f;
		case 257:
			return 237.2429f, 1141.5052f, 224.4801f;
		case 258:
			return 387.0771f, -1295.1085f, 37.5539f;
		case 259:
			return -1256.11f, -385.716f, 41.792f;
		case 260:
			return -3141.2036f, 1117.2358f, 19.7013f;
		case 261:
			return 2799.8184f, 3497.44f, 53.8581f;
		case 262:
			return -2270.4414f, 4282.0835f, 44.9072f;
		case 263:
			return -1677.1305f, 41.8815f, 62.4449f;
		case 264:
			return 1688.9672f, 4774.191f, 40.9215f;
		case 265:
			return 8.335f, -596.793f, 30.629f;
		case 266:
			return 424.868f, -1309.468f, 35.34f;
		case 267:
			return -1699.592f, 44.893f, 64.281f;
		case 268:
			return 907.222f, -59.256f, 77.764f;
		case 269:
			return 1686.309f, 4798.634f, 40.897f;
		case 270:
			return 2793.665f, 3482.302f, 54.092f;
		case 271:
			return -2278.17f, 4272.0645f, 43.6124f;
		case 272:
			return -3137.196f, 1098.879f, 19.645f;
		case 273:
			return 2930.288f, 4323.032f, 49.555f;
		case 274:
			return 2454.865f, 4076.7f, 37.068f;
		case 119:
			switch (iParam1)
			{
				case 0:
					return 500.9953f, -1495.6056f, 28.2887f;
				case 1:
					return 507.7525f, -1495.943f, 28.2882f;
				default:
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return -306.078f, -1194.3041f, 23.3644f;
				case 1:
					return -307.3654f, -1201.9623f, 23.8176f;
				default:
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 1514.2993f, 766.6217f, 76.5565f;
				case 1:
					return 1531.3553f, 786.8307f, 76.4458f;
				default:
			}
			break;
		case 122:
			switch (iParam1)
			{
				case 0:
					return 1551.1461f, 3723.742f, 33.5063f;
				case 1:
					return 1543.3055f, 3724.0034f, 33.7059f;
				default:
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 0:
					return 1253.8975f, 1829.7255f, 80.3815f;
				case 1:
					return 1237.7484f, 1861.0372f, 78.1461f;
				default:
			}
			break;
		case 124:
			switch (iParam1)
			{
				case 0:
					return 1443.3959f, 6493.772f, 19.2088f;
				case 1:
					return 1439.9648f, 6493.9854f, 19.1188f;
				default:
			}
			break;
	}
	if (!bParam2)
	{
	}
	return 0f, 0f, 0f;
}

Vector3 func_926(int iParam0, int iParam1, bool bParam2)//Position - 0x24B74
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1256.8954f, -1401.264f, 3.2038f;
				case 1:
					return -1219.4602f, -1422.4031f, 3.3108f;
				case 2:
					return -1240.9489f, -1429.7717f, 3.3237f;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1041.4606f, -545.3951f, 34.1047f;
				case 1:
					return -1051.7765f, -513.1072f, 35.0386f;
				case 2:
					return -1001.189f, -534.113f, 35.6678f;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -19.7349f, -1271.8304f, 28.2653f;
				case 1:
					return -40.504f, -1302.9094f, 28.0199f;
				case 2:
					return -17.0678f, -1299.9534f, 28.2507f;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1288.2052f, -2536.4204f, 42.6742f;
				case 1:
					return 1306.9856f, -2568.4392f, 44.0014f;
				case 2:
					return 1313.3694f, -2530.5227f, 44.7044f;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 430.6789f, -1242.7229f, 30.6437f;
				case 1:
					return 477.4944f, -1277.3446f, 28.5466f;
				case 2:
					return 514.2444f, -1259.9031f, 29.4124f;
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 67.0038f, 51.4473f, 72.5151f;
				case 1:
					return 44.0364f, 93.7276f, 77.5862f;
				case 2:
					return 132.1119f, 50.6618f, 73.5083f;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1134.0925f, 271.932f, 79.9903f;
				case 1:
					return 1109.3748f, 216.3957f, 79.9906f;
				case 2:
					return 1153.9059f, 251.8428f, 80.8457f;
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3073.0715f, 595.7681f, 0.2499f;
				case 1:
					return -3039.7754f, 602.9285f, 6.5674f;
				case 2:
					return -3072.1392f, 557.0007f, 1.3571f;
				default:
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -500.0567f, -51.7028f, 38.9927f;
				case 1:
					return -522.8772f, -91.4064f, 38.6031f;
				case 2:
					return -533.3924f, -42.155f, 41.5272f;
				default:
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 1157.6764f, -1321.0662f, 33.7427f;
				case 1:
					return 1141.9562f, -1288.349f, 33.6199f;
				case 2:
					return 1141.4674f, -1332.8531f, 33.6567f;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return -1556.9938f, -265.8279f, 47.2667f;
				case 1:
					return -1575.5088f, -267.0629f, 47.2757f;
				case 2:
					return -1526.6245f, -224.5333f, 51.7633f;
				default:
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return -999.7197f, -2231.4753f, 8.0025f;
				case 1:
					return -1051.127f, -2236.0945f, 10.6505f;
				case 2:
					return -1009.9255f, -2213.719f, 7.9803f;
				default:
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 481.8191f, -2160.3894f, 4.9183f;
				case 1:
					return 522.6403f, -2116.97f, 4.9863f;
				case 2:
					return 515.8954f, -2185.1514f, 4.9867f;
				default:
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 2545.011f, 342.3033f, 107.4631f;
				case 1:
					return 2573.6716f, 340.7719f, 107.4573f;
				case 2:
					return 2551.8755f, 321.9144f, 107.4558f;
				default:
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return -506.8551f, -451.5504f, 33.2013f;
				case 1:
					return -520.6168f, -425.5922f, 33.5149f;
				case 2:
					return -542.0139f, -452.4395f, 33.2769f;
				default:
			}
			break;
		case 45:
			switch (iParam1)
			{
				case 0:
					return 189.0431f, 1163.1935f, 224.5952f;
				case 1:
					return 234.9972f, 1175.1166f, 224.4599f;
				case 2:
					return 182.205f, 1222.7882f, 230.3316f;
				default:
			}
			break;
		case 46:
			switch (iParam1)
			{
				case 0:
					return 1859.0474f, -1073.0427f, 80.9805f;
				case 1:
					return 1930.9203f, -1002.131f, 79.1197f;
				case 2:
					return 1932.3824f, -1073.1066f, 94.7213f;
				default:
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 0:
					return -819.274f, 864.5092f, 201.9619f;
				case 1:
					return -857.0323f, 848.2087f, 201.8778f;
				case 2:
					return -896.3553f, 812.055f, 186.5013f;
				default:
			}
			break;
		case 48:
			switch (iParam1)
			{
				case 0:
					return -2335.4192f, 247.1339f, 168.6021f;
				case 1:
					return -2346.368f, 320.6201f, 168.3408f;
				case 2:
					return -2252.1724f, 262.6512f, 173.6154f;
				default:
			}
			break;
		case 49:
			switch (iParam1)
			{
				case 0:
					return 788.3173f, -2993.3103f, 5.025f;
				case 1:
					return 846.7418f, -2942.5044f, 4.9008f;
				case 2:
					return 812.6157f, -2912.6277f, 4.9009f;
				default:
			}
			break;
		case 35:
			switch (iParam1)
			{
				case 0:
					return 1624.9182f, 1863.3125f, 101.1631f;
				case 1:
					return 1617.8038f, 1855.8367f, 101.9317f;
				case 2:
					return 1625.7621f, 1858.705f, 101.4484f;
				default:
			}
			break;
		case 36:
			switch (iParam1)
			{
				case 0:
					return 1881.2292f, 261.8945f, 162.4245f;
				case 1:
					return 1877.4436f, 270.607f, 162.44f;
				case 2:
					return 1888.0444f, 263.175f, 162.6105f;
				default:
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 0:
					return -180.4747f, 787.4429f, 195.0948f;
				case 1:
					return -172.8306f, 784.4172f, 194.8954f;
				case 2:
					return -187.724f, 790.6658f, 195.0194f;
				default:
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return -477.9237f, -1138.0027f, 24.5716f;
				case 1:
					return -469.9054f, -1141.2981f, 24.7503f;
				case 2:
					return -481.2089f, -1130.2814f, 24.9773f;
				default:
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 0:
					return -3087.5251f, 504.0114f, 2.2315f;
				case 1:
					return -3102.2432f, 503.1497f, -0.4763f;
				case 2:
					return -3102.2078f, 518.6061f, -0.1891f;
				default:
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 0:
					return 435.0352f, 782.0305f, 191.7786f;
				case 1:
					return 377.7029f, 791.6837f, 189.4136f;
				case 2:
					return 373.5618f, 800.5087f, 186.4587f;
				default:
			}
			break;
		case 51:
			switch (iParam1)
			{
				case 0:
					return 329.6051f, -1105.1423f, 38.3562f;
				case 1:
					return 355.2695f, -1109.0596f, 28.4064f;
				case 2:
					return 335.8394f, -1099.4719f, 28.4064f;
				default:
			}
			break;
		case 52:
			switch (iParam1)
			{
				case 0:
					return -38.649f, 934.988f, 227.4654f;
				case 1:
					return -84.6997f, 935.5812f, 232.0286f;
				case 2:
					return -135.8327f, 988.8337f, 235.1435f;
				default:
			}
			break;
		case 53:
			switch (iParam1)
			{
				case 0:
					return -3182.1733f, 1245.3042f, 5.6321f;
				case 1:
					return -3219.602f, 1199.8552f, 2.5499f;
				case 2:
					return -3204.1213f, 1201.8141f, 11.8282f;
				default:
			}
			break;
		case 54:
			switch (iParam1)
			{
				case 0:
					return 1241.9667f, -3052.0278f, 13.2977f;
				case 1:
					return 1227.9376f, -2995.829f, 8.3193f;
				case 2:
					return 1238.2551f, -3008.7305f, 8.3193f;
				default:
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 0:
					return 2190.927f, 5597.746f, 53.888f;
				case 1:
					return 2191.333f, 5599.56f, 53.888f;
				case 2:
					return 2193.567f, 5593.311f, 54.816f;
				case 3:
					return 2194.4158f, 5592.7437f, 54.8155f;
				case 4:
					return 2196.0283f, 5593.105f, 52.7751f;
				case 5:
					return 2197.294f, 5597.863f, 52.795f;
				case 6:
					return 2193.6157f, 5607.5166f, 52.6446f;
				case 7:
					return 2199.2102f, 5605.1265f, 52.3881f;
				default:
			}
			break;
		case 66:
			switch (iParam1)
			{
				case 0:
					return 1546.0403f, 6335.923f, 23.0798f;
				case 1:
					return 1545.3193f, 6331.356f, 23.0772f;
				case 2:
					return 1539.019f, 6340.6167f, 23.0839f;
				case 3:
					return 1535.8932f, 6335.1084f, 23.0793f;
				case 4:
					return 1540.8215f, 6339.3804f, 23.0841f;
				case 5:
					return 1546.3153f, 6333.0146f, 23.0785f;
				case 6:
					return 1532.2606f, 6335.159f, 23.1988f;
				case 7:
					return 1524.2565f, 6347.302f, 23.0527f;
				default:
			}
			break;
		case 67:
			switch (iParam1)
			{
				case 0:
					return 1538.335f, 1699.095f, 108.76f;
				case 1:
					return 1530.2623f, 1705.9089f, 108.7935f;
				case 2:
					return 1524.131f, 1709.41f, 109.018f;
				case 3:
					return 1541.8795f, 1708.617f, 108.9052f;
				case 4:
					return 1539.8124f, 1705.3134f, 108.6894f;
				case 5:
					return 1532.8252f, 1699.7269f, 108.8229f;
				case 6:
					return 1526.5433f, 1706.8558f, 108.8677f;
				case 7:
					return 1543.8716f, 1707.3318f, 108.9219f;
				default:
			}
			break;
		case 68:
			switch (iParam1)
			{
				case 0:
					return 115.1577f, -1973.6782f, 19.9256f;
				case 1:
					return 94.0767f, -1983.0431f, 19.4422f;
				case 2:
					return 108.8288f, -1974.4695f, 19.9499f;
				case 3:
					return 115.9279f, -1980.2423f, 19.9547f;
				case 4:
					return 102.984f, -1976.9573f, 19.9425f;
				case 5:
					return 96.9154f, -1986.1556f, 19.4501f;
				case 6:
					return 111.5553f, -1977.185f, 19.9311f;
				case 7:
					return 95.2271f, -1988.8143f, 19.5397f;
				default:
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 0:
					return 1337.891f, -523.091f, 71.252f;
				case 1:
					return 1343.539f, -518.574f, 71.064f;
				case 2:
					return 1332.99f, -514.29f, 71.064f;
				case 3:
					return 1332.458f, -520.082f, 71.064f;
				case 4:
					return 1339.3309f, -527.5964f, 71.2974f;
				case 5:
					return 1340.5326f, -516.3754f, 71.1645f;
				case 6:
					return 1328.9515f, -518.884f, 71.0643f;
				case 7:
					return 1338.4606f, -519.61f, 71.0643f;
				default:
			}
			break;
		case 70:
			switch (iParam1)
			{
				case 0:
					return -1886.451f, 266.735f, 85.453f;
				case 1:
					return -1884.307f, 254.934f, 85.06f;
				case 2:
					return -1895.644f, 256.713f, 85.252f;
				case 3:
					return -1894.9f, 255.12f, 85.252f;
				case 4:
					return -1880.6863f, 269.3765f, 85.4533f;
				case 5:
					return -1891.3057f, 267.4326f, 85.4529f;
				case 6:
					return -1887.2902f, 253.37f, 85.2516f;
				case 7:
					return -1890.7429f, 259.6429f, 85.2516f;
				default:
			}
			break;
		case 77:
			switch (iParam1)
			{
				case 0:
					return 1579.244f, 3618.102f, 37.917f;
				case 1:
					return 1601.256f, 3588.378f, 37.908f;
				case 2:
					return 1602.889f, 3566.926f, 37.917f;
				case 3:
					return 1593.125f, 3583.698f, 37.908f;
				case 4:
					return 1602.7539f, 3585.8254f, 37.908f;
				case 5:
					return 1608.9446f, 3574.8826f, 37.9167f;
				case 6:
					return 1582.7412f, 3619.545f, 37.9167f;
				case 7:
					return 1596.9514f, 3588.4832f, 37.908f;
				default:
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					return 2320.201f, 2575.099f, 45.668f;
				case 1:
					return 2313.0117f, 2578.312f, 45.6663f;
				case 2:
					return 2317.5015f, 2571.3762f, 45.6677f;
				case 3:
					return 2326.3894f, 2574.56f, 45.6677f;
				case 4:
					return 2321.3738f, 2573.906f, 45.6677f;
				case 5:
					return 2325.5315f, 2570.9583f, 45.6677f;
				case 6:
					return 2318.3506f, 2584.3193f, 45.6476f;
				case 7:
					return 2311.584f, 2573.776f, 45.6677f;
				default:
			}
			break;
		case 79:
			switch (iParam1)
			{
				case 0:
					return 1354.259f, 3271.617f, 37.049f;
				case 1:
					return 1355.543f, 3266.002f, 37.465f;
				case 2:
					return 1361.6234f, 3271.0337f, 37.2991f;
				case 3:
					return 1355.4587f, 3276.2441f, 36.7898f;
				case 4:
					return 1356.8058f, 3270.7568f, 37.1961f;
				case 5:
					return 1358.8293f, 3275.2861f, 36.9648f;
				case 6:
					return 1349.8191f, 3275.3499f, 36.6586f;
				case 7:
					return 1359.4822f, 3266.528f, 37.5162f;
				default:
			}
			break;
		case 80:
			switch (iParam1)
			{
				case 0:
					return 602.296f, -441.343f, 23.745f;
				case 1:
					return 601.444f, -443.897f, 23.745f;
				case 2:
					return 605.446f, -453.7786f, 23.7449f;
				case 3:
					return 598.2006f, -435.8751f, 23.7449f;
				case 4:
					return 606.8058f, -445.4673f, 23.7449f;
				case 5:
					return 596.5114f, -448.6344f, 23.7449f;
				case 6:
					return 606.7935f, -435.4074f, 23.7449f;
				case 7:
					return 598.0101f, -456.0507f, 23.7449f;
				default:
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return -441.5815f, -2177.9526f, 9.3216f;
				case 1:
					return -442.4689f, -2182.698f, 9.3188f;
				case 2:
					return -446.9228f, -2178.1086f, 9.3182f;
				case 3:
					return -436.6671f, -2177.43f, 9.3279f;
				case 4:
					return -448.1396f, -2183.373f, 9.3182f;
				case 5:
					return -437.8727f, -2183.6018f, 9.3282f;
				case 6:
					return -448.1035f, -2173.0605f, 9.327f;
				case 7:
					return -448.5648f, -2175.626f, 10.446f;
				default:
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 0:
					return -1097.839f, -1657.69f, 6.348f;
				case 1:
					return -1091.055f, -1657.613f, 6.357f;
				case 2:
					return -1095.6093f, -1660.7786f, 9.1832f;
				case 3:
					return -1107.645f, -1662.9894f, 6.3571f;
				case 4:
					return -1102.9534f, -1661.7375f, 9.1626f;
				case 5:
					return -1096.9062f, -1656.5336f, 6.3553f;
				case 6:
					return -1090.8196f, -1654.5219f, 6.3569f;
				case 7:
					return -1098.0662f, -1661.5366f, 9.1832f;
				default:
			}
			break;
		case 235:
			return -1248.458f, -1542.468f, 3.43f;
		case 236:
			return 179.729f, 704.633f, 206.158f;
		case 237:
			return 1112.473f, -642.005f, 56.473f;
		case 238:
			return -270.123f, -2098.021f, 27.045f;
		case 239:
			return -3334.143f, 967.425f, 7.431f;
		case 240:
			return 3819.4617f, 4469.2563f, 3.1526f;
		case 241:
			return -1599.8381f, 5189.9336f, 3.4559f;
		case 242:
			return 1456.4458f, 3753.3667f, 32.1787f;
		case 243:
			return -430.9754f, 1594.7449f, 355.9766f;
		case 244:
			return 1604.9777f, 6610.4863f, 15.1458f;
		case 245:
			return -274.372f, -2047.993f, 29.08f;
		case 246:
			return -1245.778f, -1531.359f, 3.43f;
		case 247:
			return 1113.154f, -645.61f, 56.578f;
		case 248:
			return 163.083f, 679.009f, 205.927f;
		case 249:
			return -3370.647f, 968.319f, 7.431f;
		case 250:
			return -429.974f, 1590.215f, 355.956f;
		case 251:
			return 1442.7148f, 3748.756f, 30.9342f;
		case 252:
			return 3850.747f, 4461.128f, 0.989f;
		case 253:
			return -1590.209f, 5200.783f, 3.456f;
		case 254:
			return 1601.191f, 6633.852f, 14.576f;
		case 95:
			switch (iParam1)
			{
				case 0:
					return -1087.6715f, -2404.69f, 13.2966f;
				case 1:
					return -1086.0386f, -2402.6257f, 13.2966f;
				default:
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 0:
					return -2240.3472f, 259.9966f, 173.9552f;
				case 1:
					return -2238.614f, 259.0553f, 173.9532f;
				default:
			}
			break;
		case 97:
			switch (iParam1)
			{
				case 0:
					return 1333.7731f, -1562.1708f, 53.403f;
				case 1:
					return 1333.0813f, -1561.0911f, 53.403f;
				default:
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 375.1288f, 3408.736f, 35.7556f;
				case 1:
					return 377.9695f, 3407.3345f, 35.7563f;
				default:
			}
			break;
		case 99:
			switch (iParam1)
			{
				case 0:
					return 870.6751f, 2381.2332f, 53.4304f;
				case 1:
					return 872.383f, 2381.122f, 53.411f;
				default:
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 0:
					return -1929.8789f, 2061.409f, 140.1897f;
				case 1:
					return -1931.1086f, 2062.988f, 140.1909f;
				default:
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					return -1211.8408f, -334.6595f, 37.1451f;
				case 1:
					return -1210.8939f, -336.6016f, 37.1451f;
				case 2:
					return -1214.2899f, -335.7108f, 37.145f;
				case 3:
					return -1212.1533f, -335.9989f, 37.1599f;
				default:
			}
			break;
		case 106:
			switch (iParam1)
			{
				case 0:
					return 146.7809f, -1046.0264f, 28.7322f;
				case 1:
					return 147.5188f, -1044.1335f, 28.7321f;
				case 2:
					return 146.4878f, -1044.6952f, 28.7469f;
				case 3:
					return 144.9762f, -1042.9424f, 28.732f;
				default:
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 0:
					return 311.1413f, -284.7076f, 53.5364f;
				case 1:
					return 311.9048f, -282.4539f, 53.5364f;
				case 2:
					return 310.5685f, -283.3445f, 53.5437f;
				case 3:
					return 309.2298f, -281.5316f, 53.5364f;
				default:
			}
			break;
		case 108:
			switch (iParam1)
			{
				case 0:
					return -353.2305f, -53.4055f, 48.4006f;
				case 1:
					return -353.6685f, -55.2274f, 48.4007f;
				case 2:
					return -354.6395f, -54.1951f, 48.4155f;
				case 3:
					return -355.7474f, -52.3414f, 48.4005f;
				default:
			}
			break;
		case 109:
			switch (iParam1)
			{
				case 0:
					return -102.3358f, 6476.5894f, 30.9908f;
				case 1:
					return -105.703f, 6478.6465f, 30.9908f;
				case 2:
					return -114.1662f, 6474.007f, 30.9908f;
				case 3:
					return -113.3049f, 6472.2173f, 30.9908f;
				default:
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 0:
					return 1175.9829f, 2712.9014f, 37.4521f;
				case 1:
					return 1176.0624f, 2710.5703f, 37.4521f;
				case 2:
					return 1176.4252f, 2711.8071f, 37.4521f;
				case 3:
					return 1178.8755f, 2710.653f, 37.452f;
				default:
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 0:
					return -2958.7642f, 481.6773f, 15.0611f;
				case 1:
					return -2956.5571f, 481.8295f, 15.0612f;
				case 2:
					return -2957.4265f, 480.7684f, 15.076f;
				case 3:
					return -2959.045f, 478.9727f, 15.0611f;
				default:
			}
			break;
		case 171:
			switch (iParam1)
			{
				case 0:
					return -1174.899f, -2061.462f, 13.322f;
				case 1:
					return -1166.679f, -2061.563f, 13.142f;
				case 2:
					return -1177.037f, -2047.963f, 12.962f;
				case 3:
					return -1175.386f, -2034.878f, 12.739f;
				case 4:
					return -1170.302f, -2026.042f, 12.164f;
				case 5:
					return -1158.823f, -2042.788f, 12.464f;
				case 6:
					return -1188.571f, -2042.045f, 13.2f;
				case 7:
					return -1192.589f, -2056.433f, 13.371f;
				default:
			}
			break;
		case 172:
			switch (iParam1)
			{
				case 0:
					return 1439.8173f, -2276.8982f, 65.5886f;
				case 1:
					return 1426.7753f, -2279.9578f, 65.3883f;
				case 2:
					return 1429.7594f, -2294.8516f, 65.8534f;
				case 3:
					return 1448.7533f, -2284.7034f, 66.1776f;
				case 4:
					return 1441.4807f, -2300.3572f, 66.0341f;
				case 5:
					return 1418.96f, -2284.074f, 65.2903f;
				case 6:
					return 1452.4312f, -2274.0513f, 65.9382f;
				case 7:
					return 1422.9213f, -2270.9883f, 65.1793f;
				default:
			}
			break;
		case 173:
			switch (iParam1)
			{
				case 0:
					return 2951.53f, 2791.529f, 40.0484f;
				case 1:
					return 2948.1108f, 2778.0696f, 38.3401f;
				case 2:
					return 2932.7676f, 2795.1804f, 39.6753f;
				case 3:
					return 2967.6558f, 2781.2896f, 37.9867f;
				case 4:
					return 2970.9639f, 2791.5925f, 39.2295f;
				case 5:
					return 2950.7253f, 2806.4744f, 40.5958f;
				case 6:
					return 2934.8528f, 2807.5376f, 41.1871f;
				case 7:
					return 2962.4028f, 2801.9238f, 40.4953f;
				default:
			}
			break;
		case 174:
			switch (iParam1)
			{
				case 0:
					return 3666.816f, 4561.401f, 24.669f;
				case 1:
					return 3704.943f, 4553.061f, 23.237f;
				case 2:
					return 3680.383f, 4583.401f, 23.12f;
				case 3:
					return 3689.937f, 4577.661f, 23.995f;
				case 4:
					return 3710.729f, 4571.15f, 22.646f;
				case 5:
					return 3676.667f, 4554.031f, 24.151f;
				case 6:
					return 3697.51f, 4581.133f, 23.176f;
				case 7:
					return 3710.66f, 4562.066f, 22.991f;
				default:
			}
			break;
	}
	if (!bParam2)
	{
	}
	return 0f, 0f, 0f;
}

int func_927(int iParam0)//Position - 0x27D38
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 98;
		case 3:
			return 45;
		case 4:
			return 49;
		case 5:
			return 62;
		default:
	}
	return 62;
}

int func_928(struct<3> Param0, int iParam1)//Position - 0x2F238
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1))
	{
		iVar0 = NETWORK::NET_TO_VEH(iParam1);
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 2f, 0, 67711);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iVar0)
	{
		return 1;
	}
	return 0;
}

int func_929(int iParam0)//Position - 0x2F279
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		iVar0 = NETWORK::NET_TO_VEH(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar0, 3, 10000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar0, 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar0, 1, 10000)))
		{
			return 1;
		}
	}
	return 0;
}

void func_930(bool bParam0, int iParam1)//Position - 0x33036
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Global_1837197);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("WEAPON_PISTOL"), 9999999, false, true);
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, 3);
	PED::SET_PED_CONFIG_FLAG(iParam1, 42, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
	PED::SET_PED_ACCURACY(iParam1, 75);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	PED::SET_PED_AS_COP(iParam1, true);
}

void func_931(bool bParam0, int iParam1)//Position - 0x3E86E
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Global_1837197);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("WEAPON_PISTOL"), 9999999, false, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_ACCURACY(iParam1, 75);
	PED::SET_PED_KEEP_TASK(iParam1, true);
}

void func_932(bool bParam0, int iParam1)//Position - 0x3E8CE
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Global_1837197);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("WEAPON_SAWNOFFSHOTGUN"), 9999999, false, true);
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, 3);
	PED::SET_PED_CONFIG_FLAG(iParam1, 42, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_ACCURACY(iParam1, 100);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, true, 1);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam1, true);
}

void func_933(bool bParam0, int iParam1, bool bParam2)//Position - 0x3EC15
{
	if (bParam2)
	{
		PED::SET_PED_AS_COP(iParam1, true);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, 2);
	PED::SET_PED_COMBAT_ABILITY(iParam1, 1);
	PED::SET_PED_COMBAT_RANGE(iParam1, 2);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, true);
	PED::SET_PED_CAN_BE_TARGETTED(iParam1, true);
	PED::SET_PED_SEEING_RANGE(iParam1, 200f);
	if (bParam2)
	{
	}
}

void func_934(bool bParam0, int iParam1)//Position - 0x3EC73
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Global_1837197);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("WEAPON_CARBINERIFLE"), 9999999, false, true);
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, 3);
	PED::SET_PED_CONFIG_FLAG(iParam1, 42, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
	PED::SET_PED_ACCURACY(iParam1, 75);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	PED::SET_PED_AS_COP(iParam1, true);
}

int func_935()//Position - 0x42D64
{
	return joaat("S_M_Y_Swat_01");
}

int func_936()//Position - 0x42D7E
{
	return joaat("G_M_Y_Azteca_01");
}

int func_937(int iParam0)//Position - 0x4E9C5
{
	switch (__LIB_1__.func_347(iParam0))
	{
		case 4:
			return 135;
			break;
		case 1:
			return 136;
			break;
		case 2:
			return 137;
			break;
		case 3:
			return 138;
			break;
		case 0:
			return 139;
			break;
		case 5:
			return 140;
			break;
	}
	return -1;
}

void func_938(int iParam0)//Position - 0x7FB71
{
	MISC::SET_BIT(&uLocal_166, iParam0);
}

int func_939(int iParam0)//Position - 0x80BA8
{
	if (iParam0 == 3)
	{
		return 9;
	}
	else if (iParam0 == 2)
	{
		return 18;
	}
	else if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 4)
	{
		return 1;
	}
	return 12;
}

void func_940(int iParam0)//Position - 0x8499D
{
	MISC::CLEAR_BIT(&uLocal_166, iParam0);
}

void func_941(int iParam0)//Position - 0x852C9
{
	MISC::SET_BIT(&uLocal_165, iParam0);
}

void func_942(int iParam0)//Position - 0x8D0E0
{
	MISC::SET_BIT(&uLocal_167, iParam0);
}

bool func_943(int iParam0)//Position - 0x8E881
{
	return BitTest(uLocal_167, iParam0);
}

void func_944(int iParam0)//Position - 0x8EEC2
{
	MISC::CLEAR_BIT(&uLocal_167, iParam0);
}

int func_945(int iParam0, int iParam1)//Position - 0x99D24
{
	int iVar0;
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (__LIB_1__.func_346(iParam1) && __LIB_4__.func_812(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return Global_1853348[iParam0 /*834*/].f_267.f_272;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_946(int iParam0)//Position - 0x9A015
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		iVar0 = NETWORK::NET_TO_OBJ(iParam0);
		if (ENTITY::IS_ENTITY_VISIBLE(iVar0))
		{
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iVar0, 0))
			{
				return 1;
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_947(int iParam0)//Position - 0x1537F1
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return __LIB_4__.func_139(PLAYER::PLAYER_ID());
		case 2:
			return __LIB_0__.func_833(PLAYER::PLAYER_ID());
		case 3:
			return 1;
		case 4:
			return __LIB_28__.func_681();
		default:
	}
	return 0;
}

Vector3 func_948(int iParam0)//Position - 0x1F642C
{
	switch (iParam0)
	{
		case 25:
			return -561.9381f, -131.0818f, 42f;
		case 26:
			return 369.4596f, -1607.4806f, 28.2919f;
		case 27:
			return -1079.2455f, -856.0058f, 4.0262f;
		case 28:
			return 838.2254f, -1395.9039f, 25.3124f;
		case 29:
			return -1314.099f, -1526.9121f, 3.4168f;
		default:
	}
	return -561.9381f, -131.0818f, 42f;
}

void func_949(bool bParam0, int iParam1)//Position - 0x1F660C
{
	int iVar0;
	bool bVar1;
	if (__LIB_2__.func_748(iParam1))
	{
		__LIB_2__.func_747(iParam1, &iVar0, &bVar1);
		if (bParam0 && BitTest(Global_1946250.f_3560[iVar0], bVar1))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_3560[iVar0]), bVar1);
		}
		else if (!bParam0 && !BitTest(Global_1946250.f_3560[iVar0], bVar1))
		{
			MISC::SET_BIT(&(Global_1946250.f_3560[iVar0]), bVar1);
		}
	}
}

void func_950(struct<3> Param0)//Position - 0x1F8C0D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	Param0.f_2 = (Param0.f_2 - 0.7f);
	GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 1f, 1f, iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
}

Vector3 func_951(int iParam0, int iParam1)//Position - 0x1F8C52
{
	switch (iParam0)
	{
		case 55:
			switch (iParam1)
			{
				case 0:
					return -715.3919f, -716.02f, 28.6f;
				case 1:
					return -722.9892f, -704.6078f, 44.5f;
				case 2:
					return -692.6386f, -677.6177f, 44.5f;
				default:
			}
			break;
		case 56:
			switch (iParam1)
			{
				case 0:
					return -1885.677f, -332.255f, 49.8f;
				case 1:
					return -1873.088f, -335.728f, 56.6f;
				case 2:
					return -1836.279f, -330.318f, 56.6f;
				default:
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 0:
					return -1388.6661f, 461.0699f, 105.2166f;
				case 1:
					return -1383.975f, 428.913f, 103.7f;
				case 2:
					return -1344.932f, 422.928f, 100.1f;
				default:
			}
			break;
		case 58:
			switch (iParam1)
			{
				case 0:
					return -516.3341f, -325.5636f, 34.6f;
				case 1:
					return -522.7402f, -308.7207f, 41.7f;
				case 2:
					return -510.2679f, -297.4841f, 41.7f;
				default:
			}
			break;
		case 59:
			switch (iParam1)
			{
				case 0:
					return 280.794f, 77.5446f, 99.3f;
				case 1:
					return 277.5901f, 89.5123f, 104.8f;
				case 2:
					return 278.5884f, 142.4526f, 110.8f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_952(int iParam0)//Position - 0x201D30
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	if (Var0.f_2 < (PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1) + 40f))
	{
		return 1;
	}
	return 0;
}

int func_953(int iParam0)//Position - 0x201D60
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::IS_HELI_PART_BROKEN(iParam0, true, true, true))
	{
		return 1;
	}
	if (VEHICLE::GET_HELI_TAIL_ROTOR_HEALTH(iParam0) <= 30f)
	{
		return 1;
	}
	if (VEHICLE::GET_HELI_MAIN_ROTOR_HEALTH(iParam0) <= 30f)
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 30f)
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 30f)
	{
		return 1;
	}
	return 0;
}

int func_954(int iParam0)//Position - 0x201E45
{
	if (__LIB_28__.func_666(iParam0, 0))
	{
		return 0;
	}
	if (__LIB_28__.func_666(iParam0, 1))
	{
		return 1;
	}
	if (__LIB_28__.func_666(iParam0, 2))
	{
		return 2;
	}
	if (__LIB_28__.func_666(iParam0, 3))
	{
		return 3;
	}
	return 30;
}

int func_955(int iParam0)//Position - 0x201E87
{
	if (__LIB_28__.func_666(iParam0, 0))
	{
		return 1;
	}
	if (__LIB_28__.func_666(iParam0, 1))
	{
		return 1;
	}
	if (__LIB_28__.func_666(iParam0, 2))
	{
		return 1;
	}
	if (__LIB_28__.func_666(iParam0, 3))
	{
		return 1;
	}
	return 0;
}

void func_956(int iParam0)//Position - 0x205BA9
{
	MISC::CLEAR_BIT(&uLocal_170, iParam0);
}

bool func_957()//Position - 0x21A91C
{
	return Global_2815059.f_4622;
}

void func_958(int iParam0)//Position - 0x21BBD4
{
	if (iParam0 != Global_1952153)
	{
		Global_1952153 = iParam0;
	}
}

int func_959(int iParam0)//Position - 0x21CD5F
{
	switch (iParam0)
	{
		case 0:
			return 12;
		case 1:
			return 13;
		case 2:
			return 14;
		default:
	}
	return 12;
}

int func_960(int iParam0)//Position - 0x21EA6B
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 31);
	}
	return 0;
}

int func_961(int iParam0, bool bParam1, bool bParam2)//Position - 0x223E6B
{
	if (bParam2)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		case 3:
			return 6;
		case 1:
			return 7;
		case 7:
			return 9;
		case 5:
		case 4:
		case 6:
			if (bParam1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

void func_962(int iParam0)//Position - 0x3E1D1
{
	MISC::SET_BIT(&uLocal_202, iParam0);
}

bool func_963()//Position - 0x3E321
{
	return BitTest(Global_1958711, 4);
}

int func_964()//Position - 0x4BFDE
{
	return 154;
}

bool func_965()//Position - 0x4C2B7
{
	return BitTest(Global_1958711, 11);
}

bool func_966()//Position - 0x4FC82
{
	return BitTest(Global_1958711, 7);
}

bool func_967()//Position - 0x4FC90
{
	return BitTest(Global_1958711, 8);
}

int func_968()//Position - 0x54462
{
	return joaat("hei_prop_hst_usb_drive");
}

char* func_969()//Position - 0x5447C
{
	return "anim@GangOps@Morgue@Office@Laptop@";
}

bool func_970()//Position - 0x54D47
{
	return BitTest(Global_1958711, 10);
}

void func_971(float fParam0)//Position - 0x55E2F
{
	if (Global_1958711.f_9 != fParam0)
	{
		Global_1958711.f_9 = fParam0;
	}
}

int func_972()//Position - 0x564FD
{
	return Local_414.f_0;
}

void func_973(int iParam0)//Position - 0x748D
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_168[iVar0]), iVar1);
}

bool func_974(var uParam0)//Position - 0x39344
{
	return BitTest(uLocal_170, uParam0);
}

bool func_975(int iParam0)//Position - 0x39545
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_168[iVar0], iVar1);
}

bool func_976()//Position - 0x3CDA4
{
	return BitTest(Global_1958711, 1);
}

void func_977(struct<3> Param0, float fParam1)//Position - 0x3CE06
{
	if (!__LIB_0__.func_78(Global_1958711.f_10, Param0, 0))
	{
		Global_1958711.f_10 = { Param0 };
		Global_1958711.f_7 = fParam1;
	}
}

bool func_978()//Position - 0x3CFBB
{
	return BitTest(Global_1958711, 14);
}

bool func_979(int iParam0, float fParam1)//Position - 0x3F379
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) <= (fParam1 * fParam1);
}

char* func_980(int iParam0)//Position - 0x4113C
{
	switch (iParam0)
	{
		case 1:
			return "BTL_IDLE_START";
		case 2:
			return "BTL_MED_INTENSITY_START";
		case 3:
			return "BTL_GUNFIGHT_START";
		case 4:
			return "BTL_SUSPENSE";
		case 5:
			return "BTL_MED_INTENSITY";
		case 6:
			return "BTL_DELIVERING";
		case 7:
			return "BTL_GUNFIGHT";
		case 8:
			return "BTL_VEHICLE_ACTION";
		case 9:
			return "BTL_DELIVERING_START";
		case 10:
			return "BTL_MUSIC_STOP";
		case 11:
			return "BTL_FAIL";
		default:
	}
	return "";
}

void func_981()//Position - 0x41E1C
{
	if (HUD::DOES_BLIP_EXIST(iLocal_349))
	{
		HUD::REMOVE_BLIP(&iLocal_349);
	}
}

void func_982()//Position - 0x41F8A
{
	if (HUD::DOES_BLIP_EXIST(iLocal_347))
	{
		HUD::REMOVE_BLIP(&iLocal_347);
	}
}

int func_983()//Position - 0x10D71D
{
	if (__LIB_0__.func_649(&Global_1578987) && !func_8(&Global_1578987, 300000, 0))
	{
		return 1;
	}
	return 0;
}

void func_984(int iParam0, int iParam1, int iParam2)//Position - 0x1DC19A
{
	if (iParam1 <= 255)
	{
		__LIB_1__.func_39(func_6041(iParam0), iParam1, iParam2);
		__LIB_1__.func_39(func_6040(iParam0), 0, iParam2);
	}
	else
	{
		__LIB_1__.func_39(func_6041(iParam0), 255, iParam2);
		__LIB_1__.func_39(func_6040(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_985(int iParam0)//Position - 0xB2684
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__.func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_1497(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_986(int iParam0)//Position - 0xBAE02
{
	if (!__LIB_0__.func_114() && func_1879(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_987()//Position - 0xBCA80
{
	if ((!__LIB_0__.func_706() && !func_1924()) && Global_2715698)
	{
		Global_4718592.f_116524 = 0;
	}
}

void func_988(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xC4E00
{
	StringCopy(sParam1, "FHQ_PROP_ET" /* GXT: AGENCY */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_989(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xE1F31
{
	StringCopy(sParam1, "CAR_MET_EXT_T" /* GXT: LS Car Meet */, 64);
	switch (__LIB_2__.func_399())
	{
		case 12:
		case 13:
		case 14:
		case 15:
			(*uParam2)[0] = "CAR_MET_E_O_1" /* GXT: Spectate Test Track */;
			break;
		default:
			(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
			break;
	}
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_990(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xEBB59
{
	StringCopy(sParam1, "AUTOS_PROP_ET" /* GXT: AUTO SHOP */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_991(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4)//Position - 0xF0377
{
	iParam4 = (iParam4 - 1);
	if (*uParam2 != 9)
	{
		return;
	}
	if (iParam4 == 2 || iParam4 == 3)
	{
		StringCopy(sParam1, "MUS_STIO_EXT_T2" /* GXT: SMOKING ROOM */, 64);
	}
	else
	{
		StringCopy(sParam1, "MUS_STIO_EXT_T" /* GXT: RECORD A STUDIOS */, 64);
	}
	(*uParam2)[0] = "MUS_STIO__E_O_0" /* GXT: Exit */;
	(*uParam2)[2] = "MUS_STIO__E_O_1" /* GXT: Exit */;
	(*uParam2)[3] = "MUS_STIO__E_O_2" /* GXT: Exit to Roof */;
	(*uParam2)[4] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[5] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[5] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	*uParam3 = 6;
	if (iParam4 == 2)
	{
		(*uParam2)[0] = "MUS_STIO__E_O_3" /* GXT: Enter */;
	}
}

void func_992(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xF21CE
{
	StringCopy(sParam1, "MUS_STIO_EXT_T" /* GXT: RECORD A STUDIOS */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[1] = 4;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_993(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x10F352
{
	StringCopy(sParam1, "CAS_NCLB_EXT_T" /* GXT: THE MUSIC LOCKER */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[1] = 4;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_994(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x120CE7
{
	StringCopy(sParam1, "ARC_PROP_ET" /* GXT: ARCADE */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_995()//Position - 0x1265BB
{
	if ((__LIB_24__.func_897() || !__LIB_4__.func_139(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_4523.f_1, 7))
	{
		return 0;
	}
	return 1;
}

void func_996(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x12F207
{
	StringCopy(sParam1, "CASINO_APT_ENT_T", 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_997(var uParam0, int iParam1)//Position - 0x133F63
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__.func_308(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__.func_709(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_1497(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_0__.func_812(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_998(bool bParam0, int iParam1)//Position - 0x13752F
{
	if (bParam0)
	{
		switch (iParam1)
		{
			case 0:
				return "CASINO_ENT_F0_H" /* GXT: Enter the Casino. */;
			case 1:
				return "CASINO_ENT_F1_H" /* GXT: Enter your Penthouse. */;
			case 2:
				return "CASINO_ENT_F2_H" /* GXT: Enter your Penthouse Garage. */;
			case 3:
				return "CASINO_ENT_F3_H" /* GXT: Enter the Parking Garage. */;
			case 4:
				return "CASINO_ENT_F10E" /* GXT: Enter The Music Locker. */;
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				return "CASINO_BUY_PROP" /* GXT: Purchase the Penthouse from www.thediamondcasinoandresort.com. */;
			case 2:
				return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
			case 4:
				if (__LIB_24__.func_897())
				{
					return "CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */;
				}
				else if (BitTest(Global_1946250.f_4523.f_1, 7))
				{
					return "CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */;
				}
				return "CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */;
				break;
			}
	}
	return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
}

void func_999(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x13EEAF
{
	StringCopy(sParam1, "ARENA_ENT_T" /* GXT: ARENA WORKSHOP */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}
