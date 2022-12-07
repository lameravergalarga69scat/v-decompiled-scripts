namespace __LIB_4__ {
	
int func_0(bool bParam0)//Position - 0x3B5AF
{
	if (bParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(bParam0, 0, 1))
	{
		return BitTest(Global_1892703[bParam0 /*599*/].f_556, 0);
	}
	return 0;
}

int func_1(bool bParam0)//Position - 0x3C959
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_264(bParam0, 1, 1))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(bParam0);
		if (TASK::GET_IS_TASK_ACTIVE(iVar1, 2))
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return 1;
			}
		}
		if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iVar1))
		{
			return 1;
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_2(bool bParam0)//Position - 0x3CDB8
{
	if (bParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(bParam0, 1, 1))
	{
		return Global_2689235[bParam0 /*453*/].f_318.f_17;
	}
	return -1;
}

int func_3(bool bParam0)//Position - 0x49281
{
	if (__LIB_1__::func_425(bParam0, 0))
	{
		if (__LIB_3__::func_803(bParam0) == 233)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_4(bool bParam0)//Position - 0x492B7
{
	if (__LIB_1__::func_425(bParam0, 0))
	{
		if (__LIB_3__::func_803(bParam0) == 229)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_5(int iParam0)//Position - 0x493F7
{
	int iVar0;
	iVar0 = __LIB_3__::func_803(iParam0);
	switch (iVar0)
	{
		case 167:
		case 168:
		case 190:
		case 178:
		case 263:
		case 264:
		case 295:
		case 294:
		case 293:
			return 1;
			break;
	}
	return 0;
}

int func_6(bool bParam0)//Position - 0x49AB9
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_7(bool bParam0)//Position - 0x4A8CD
{
	if (__LIB_1__::func_264(bParam0, 0, 1))
	{
		return Global_2689235[bParam0 /*453*/].f_1;
	}
	return 0;
}

void func_8(int iParam0)//Position - 0x514BC
{
	__LIB_3__::func_805(iParam0, 0, 0);
	__LIB_3__::func_805(iParam0, 2, 1);
	__LIB_3__::func_805(iParam0, 3, 1);
	__LIB_3__::func_805(iParam0, 4, 1);
}

int func_9()//Position - 0x58B28
{
	if (__LIB_3__::func_820())
	{
		return 1;
	}
	return 2;
}

int func_10()//Position - 0x58B66
{
	if (__LIB_3__::func_820())
	{
		return 1;
	}
	return __LIB_2__::func_564(PLAYER::PLAYER_ID());
}

bool func_11(bool bParam0)//Position - 0xA4923
{
	return __LIB_1__::func_424(bParam0, 10);
}

int func_12(var uParam0, var uParam1)//Position - 0xA4C81
{
	if (!BitTest(Global_1946250.f_2, 20))
	{
		if (__LIB_2__::func_675())
		{
			return 1;
		}
		else if ((__LIB_2__::func_668(PLAYER::PLAYER_ID()) || __LIB_2__::func_667(PLAYER::PLAYER_ID())) || __LIB_2__::func_660(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		else if (__LIB_3__::func_842())
		{
			return 1;
		}
	}
	return 0;
}

int func_13(var uParam0, var uParam1)//Position - 0xA55BF
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	iVar0 = __LIB_2__::func_399();
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
	}
	else
	{
		iVar1 = __LIB_2__::func_696();
	}
	__LIB_2__::func_695(&iVar1);
	if (iVar1 == 0)
	{
		return 1;
	}
	uParam1->f_228 = __LIB_2__::func_688();
	switch (iVar0)
	{
		case 4:
			uParam1->f_3 = "ANIM@SCRIPTED@SUBMARINE@VEHICLE_TRANS@MOONPOOL";
			uParam1->f_219 = 2;
			uParam1->f_31 = { 0f, 0f, 0f };
			uParam1->f_229 = "Moonpool_Enter";
			__LIB_2__::func_687(uParam1);
			switch (iVar1)
			{
				case joaat("avisa"):
					uParam1->f_28 = { 1563.613f, 414.233f, -55.175f };
					uParam1->f_7 = "AVISA_ENTER_AVISA";
					uParam1->f_8 = "AVISA_ENTER_CAM";
					uParam1->f_221[0] = "AVISA_ENTER_HATCH_01L";
					uParam1->f_221[1] = "AVISA_ENTER_HATCH_01R";
					uParam1->f_234 = "scr_ih_sub_water_drips";
					__LIB_3__::func_844(&uVar2, uParam1->f_219, 1);
					break;
				default:
					uParam1->f_28 = { 1563.613f, 419.397f, -55.175f };
					uParam1->f_7 = "TOREADOR_ENTER_TOREADOR";
					uParam1->f_8 = "TOREADOR_ENTER_CAM";
					uParam1->f_221[0] = "TOREADOR_ENTER_HATCH_02L";
					uParam1->f_221[1] = "TOREADOR_ENTER_HATCH_02R";
					__LIB_3__::func_844(&uVar2, uParam1->f_219, 2);
					break;
			}
			break;
		case 3:
			uParam1->f_3 = "ANIM@SCRIPTED@SUBMARINE@VEHICLE_TRANS@HELIPAD";
			uParam1->f_219 = 3;
			uParam1->f_28 = { 1559.509f, 410.52f, -50.666f };
			uParam1->f_31 = { 0f, 0f, 0f };
			uParam1->f_229 = "Helicopter_Enter";
			switch (iVar1)
			{
				case joaat("seasparrow3"):
					uParam1->f_7 = "ENTER_SEASPARROW";
					uParam1->f_8 = "ENTER_CAM";
					uParam1->f_221[0] = "ENTER_PLATFORM";
					uParam1->f_221[1] = "ENTER_L_DOOR";
					uParam1->f_221[2] = "ENTER_R_DOOR";
					__LIB_3__::func_844(&uVar2, uParam1->f_219, 0);
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			return 1;
			break;
	}
	if (STREAMING::IS_MODEL_VALID(iVar1))
	{
		STREAMING::REQUEST_MODEL(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_3))
	{
		if (STREAMING::DOES_ANIM_DICT_EXIST(uParam1->f_3))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_3))
			{
				return 0;
			}
		}
	}
	if (uParam1->f_219 != 0)
	{
		iVar3 = 0;
		while (iVar3 < uParam1->f_219)
		{
			if (iVar3 < 3)
			{
				if (STREAMING::IS_MODEL_VALID(uVar2[iVar3]))
				{
					STREAMING::REQUEST_MODEL(uVar2[iVar3]);
					if (!STREAMING::HAS_MODEL_LOADED(uVar2[iVar3]))
					{
						return 0;
					}
				}
			}
			iVar3++;
		}
	}
	if (!__LIB_2__::func_686(uParam1))
	{
		return 0;
	}
	return 1;
}

int func_14(bool bParam0)//Position - 0xA7B66
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 20;
			}
		}
		else if (((Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_1575058) && bParam0 == PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bParam0, 1, 0))
		{
			return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 20;
		}
	}
	return 0;
}

int func_15(int iParam0)//Position - 0xAAF01
{
	int iVar0;
	if (iParam0 != __LIB_0__::func_160() && (__LIB_1__::func_264(iParam0, 1, 1) || Global_2667225.f_2680))
	{
		iVar0 = BitTest(Global_2689235[iParam0 /*453*/].f_318, 1);
		return iVar0;
	}
	return 0;
}

bool func_16(int iParam0)//Position - 0xAE905
{
	return __LIB_1__::func_563(123, iParam0);
}

int func_17(int iParam0)//Position - 0xAE92B
{
	if (Global_1574612)
	{
		return 1;
	}
	if (__LIB_0__::func_189())
	{
		return 1;
	}
	if (__LIB_0__::func_188())
	{
		return 1;
	}
	return __LIB_1__::func_563(119, iParam0);
}

void func_18(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0xB327C
{
	int iVar0;
	iVar0 = 0;
	__LIB_3__::func_805(iParam3, 0, 1);
	__LIB_3__::func_805(iParam3, 1, 0);
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 == 0)
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
	{
		return;
	}
}

int func_19(bool bParam0)//Position - 0xD74DF
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_20(var uParam0, var uParam1)//Position - 0xD768F
{
	__LIB_3__::func_881(uParam1);
	return 1;
}

int func_21(bool bParam0, bool bParam1)//Position - 0xE599D
{
	int iVar0;
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != __LIB_0__::func_160())
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_22(bool bParam0)//Position - 0xE5C1B
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

void func_23(var uParam0, var uParam1)//Position - 0x10AD58
{
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_1853190 != __LIB_0__::func_160())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_21 = { Global_2689235[Global_1853190 /*453*/].f_318.f_18 };
		}
	}
}

int func_24()//Position - 0x10B19A
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_309) || ENTITY::IS_ENTITY_DEAD(Global_2815059.f_309, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_309))
	{
		if (((!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2815059.f_309, -1, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2815059.f_309, 0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_2815059.f_309, false))
		{
			return 0;
		}
	}
	return 1;
}

void func_25(var uParam0, int iParam1)//Position - 0x10B382
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	var uVar4;
	fVar1 = 3.5f;
	if (__LIB_1__::func_264(Global_1853190, 1, 1))
	{
		Var2 = { Global_2689235[Global_1853190 /*453*/].f_318.f_18 };
		if (iParam1 == 0)
		{
			*uParam0 = { Var2 };
		}
		else
		{
			fVar3 = (SYSTEM::TO_FLOAT(iParam1) * 90f);
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					fVar3 = (fVar3 + 22.5f);
					fVar0 = (fVar1 * 1f);
					break;
				case 5:
				case 6:
				case 7:
				case 8:
					fVar3 = (fVar3 + 67.5f);
					fVar0 = (fVar1 * (1.4142f * 1f));
					break;
				case 9:
				case 10:
				case 11:
				case 12:
					fVar3 = (fVar3 + 22.5f);
					fVar0 = (fVar1 * 2f);
					break;
				case 13:
				case 14:
				case 15:
				case 16:
					fVar3 = (fVar3 + 67.5f);
					fVar0 = (fVar1 * (1.4142f * 2f));
					break;
			}
			*uParam0 = (SYSTEM::SIN(fVar3) * fVar0);
			uParam0->f_1 = (SYSTEM::COS(fVar3) * fVar0);
			uParam0->f_2 = 0f;
			*uParam0 = { *uParam0 + Var2 };
			uParam0->f_2 = (uParam0->f_2 + 1f);
		}
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, &uVar4, false, false))
		{
			uParam0->f_2 = uVar4;
		}
		else
		{
			uParam0->f_2 = Var2.f_2;
		}
	}
}

int func_26()//Position - 0x1116D5
{
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 233)
		{
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x122127
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != __LIB_0__::func_160())
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_28()//Position - 0x123709
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (bVar2 != PLAYER::PLAYER_ID() && bVar2 != __LIB_0__::func_160())
			{
				if (__LIB_1__::func_264(bVar2, 1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar2), iVar0, false))
						{
							if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar2), false) || Global_1574582.f_6) || __LIB_0__::func_104(1)) || TASK::GET_IS_TASK_ACTIVE(PLAYER::GET_PLAYER_PED(bVar2), 2))
							{
								return 0;
							}
						}
						else
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_265(PLAYER::PLAYER_ID()), __LIB_1__::func_265(bVar2), true) <= 125f)
							{
								if (!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(bVar2))
								{
									if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::GET_PLAYER_PED(bVar2)) == iVar0)
									{
										return 0;
									}
								}
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar2), iVar0, true) || ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::GET_PLAYER_PED(bVar2), iVar0))
							{
								return 0;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 1;
}

int func_29(int iParam0, int iParam1)//Position - 0x127196
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bVar4 = false;
	if (iParam1 && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2))
	{
		iVar1 = NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
		bVar4 = true;
	}
	else
	{
		iVar1 = 32;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (bVar4)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			}
		}
		else
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		}
		if (bVar2 != PLAYER::PLAYER_ID())
		{
			if (__LIB_1__::func_264(bVar2, 1, 1))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(bVar2);
				if (PED::IS_PED_IN_VEHICLE(iVar3, iParam0, false))
				{
				}
				else
				{
					if ((((((((PED::IS_PED_IN_VEHICLE(iVar3, iParam0, true) || (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar3, iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 0) || TASK::GET_IS_TASK_ACTIVE(iVar3, 2))
					{
						return 0;
					}
					if ((PED::IS_PED_IN_VEHICLE(iVar3, iParam0, true) && !PED::IS_PED_SITTING_IN_VEHICLE(iVar3, iParam0)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iVar3))
					{
						return 0;
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_30(bool bParam0, var uParam1)//Position - 0x128DAF
{
	if (__LIB_1__::func_909())
	{
		return 0;
	}
	if ((bParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(bParam0, 0, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bParam0)))
	{
		return 1;
	}
	return 0;
}

int func_31()//Position - 0x1299A5
{
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (BitTest(Global_1946250.f_1, 17))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_32()//Position - 0x129A17
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) != 0)
				{
					iVar1 = 0;
					while (iVar1 < 32)
					{
						if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar1), 1, 1))
						{
							if (PLAYER::INT_TO_PLAYERINDEX(iVar1) != PLAYER::PLAYER_ID())
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar1)), iVar0, false))
								{
									if (__LIB_3__::func_186(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
									{
										iVar2++;
									}
								}
							}
						}
						iVar1++;
					}
					if (iVar2 == VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_33(var uParam0, int iParam1)//Position - 0x138CA1
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	fVar1 = 3.5f;
	if (__LIB_1__::func_264(Global_1853185, 1, 1))
	{
		Var2 = { Global_2689235[Global_1853185 /*453*/].f_318.f_11 };
		if (iParam1 == 0)
		{
			*uParam0 = { Var2 };
		}
		else
		{
			fVar3 = (SYSTEM::TO_FLOAT(iParam1) * 90f);
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					fVar3 = (fVar3 + 22.5f);
					fVar0 = (fVar1 * 1f);
					break;
				case 5:
				case 6:
				case 7:
				case 8:
					fVar3 = (fVar3 + 67.5f);
					fVar0 = (fVar1 * (1.4142f * 1f));
					break;
				case 9:
				case 10:
				case 11:
				case 12:
					fVar3 = (fVar3 + 22.5f);
					fVar0 = (fVar1 * 2f);
					break;
				case 13:
				case 14:
				case 15:
				case 16:
					fVar3 = (fVar3 + 67.5f);
					fVar0 = (fVar1 * (1.4142f * 2f));
					break;
			}
			*uParam0 = (SYSTEM::SIN(fVar3) * fVar0);
			uParam0->f_1 = (SYSTEM::COS(fVar3) * fVar0);
			uParam0->f_2 = 0f;
			*uParam0 = { *uParam0 + Var2 };
			uParam0->f_2 = (uParam0->f_2 + 1f);
		}
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, &(uParam0->f_2), false, false))
		{
			uParam0->f_2 = Var2.f_2;
		}
	}
}

int func_34(var uParam0, bool bParam1)//Position - 0x13A400
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		if (__LIB_3__::func_71(PLAYER::PLAYER_ID(), bParam1, 0, 1) || __LIB_3__::func_70())
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

int func_35(bool bParam0, var uParam1)//Position - 0x13A438
{
	if ((bParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(bParam0, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bParam0)))
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x13A71F
{
	uParam1->f_405 = { __LIB_3__::func_423(iParam0) };
	uParam1->f_21 = "AM_MP_CREATOR_TRAILER";
	uParam1->f_22.f_69[0] = "PUSH";
	uParam1->f_22.f_69[1] = "LIMIT";
	uParam1->f_22.f_72[0] = 0.271f;
	uParam1->f_22.f_72[1] = 0.411f;
	uParam1->f_22.f_75 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
	uParam1->f_3 = 0;
	uParam1->f_285[0 /*3*/] = { -2.3f, 9.69f, 0.06f };
	uParam1->f_285.f_28[0 /*3*/] = { 2.3f, 9.69f, 2.305f };
	uParam1->f_285.f_56[0] = 1f;
	uParam1->f_285.f_94[0] = 349.3822f;
	switch (iParam0)
	{
		case 82:
			if (__LIB_2__::func_399() == 0 || __LIB_3__::func_929(PLAYER::PLAYER_ID()))
			{
			}
			break;
	}
}

int func_37()//Position - 0x13D164
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (bVar2 != PLAYER::PLAYER_ID() && bVar2 != __LIB_0__::func_160())
			{
				if (__LIB_1__::func_264(bVar2, 1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar2), iVar0, false))
						{
							if (((!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar2)) || Global_1574582.f_6) || __LIB_0__::func_104(1)) || TASK::GET_IS_TASK_ACTIVE(PLAYER::GET_PLAYER_PED(bVar2), 2))
							{
								return 0;
							}
						}
						else
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_265(PLAYER::PLAYER_ID()), __LIB_1__::func_265(bVar2), true) <= 125f)
							{
								if (!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(bVar2))
								{
									if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::GET_PLAYER_PED(bVar2)) == iVar0)
									{
										return 0;
									}
								}
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar2), iVar0, true) || ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::GET_PLAYER_PED(bVar2), iVar0))
							{
								return 0;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 1;
}

void func_38(var uParam0, int iParam1)//Position - 0x148241
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	var uVar4;
	fVar1 = 3.5f;
	if (__LIB_1__::func_264(Global_1853185, 1, 1))
	{
		if (__LIB_3__::func_55())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_304[1]) && !ENTITY::IS_ENTITY_DEAD(Global_2815059.f_304[1], false))
			{
				Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(Global_2815059.f_304[1], true), ENTITY::GET_ENTITY_HEADING(Global_2815059.f_304[1]), 2f, -17f, 0f) };
			}
		}
		else
		{
			Var2 = { Global_2689235[Global_1853185 /*453*/].f_318.f_11 };
		}
		if (iParam1 == 0)
		{
			*uParam0 = { Var2 };
		}
		else
		{
			fVar3 = (SYSTEM::TO_FLOAT(iParam1) * 90f);
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					fVar3 = (fVar3 + 22.5f);
					fVar0 = (fVar1 * 1f);
					break;
				case 5:
				case 6:
				case 7:
				case 8:
					fVar3 = (fVar3 + 67.5f);
					fVar0 = (fVar1 * (1.4142f * 1f));
					break;
				case 9:
				case 10:
				case 11:
				case 12:
					fVar3 = (fVar3 + 22.5f);
					fVar0 = (fVar1 * 2f);
					break;
				case 13:
				case 14:
				case 15:
				case 16:
					fVar3 = (fVar3 + 67.5f);
					fVar0 = (fVar1 * (1.4142f * 2f));
					break;
			}
			*uParam0 = (SYSTEM::SIN(fVar3) * fVar0);
			uParam0->f_1 = (SYSTEM::COS(fVar3) * fVar0);
			uParam0->f_2 = 0f;
			*uParam0 = { *uParam0 + Var2 };
			uParam0->f_2 = (uParam0->f_2 + 1f);
		}
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, &uVar4, false, false))
		{
			uParam0->f_2 = uVar4;
		}
		else
		{
			uParam0->f_2 = Var2.f_2;
		}
	}
}

int func_39(var uParam0, bool bParam1)//Position - 0x149D00
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		if (__LIB_3__::func_71(PLAYER::PLAYER_ID(), bParam1, 0, 1) || __LIB_3__::func_70())
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

int func_40(bool bParam0, var uParam1)//Position - 0x149D38
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		if (bParam0 != __LIB_0__::func_160())
		{
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7 != Global_2689235[bParam0 /*453*/].f_318.f_7)
			{
				return 0;
			}
		}
	}
	if (__LIB_1__::func_909())
	{
		return 0;
	}
	if ((bParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(bParam0, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bParam0)))
	{
		return 1;
	}
	return 0;
}

int func_41()//Position - 0x14ADCF
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) != 0)
				{
					iVar1 = 0;
					while (iVar1 < 32)
					{
						if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar1), 1, 1))
						{
							if (PLAYER::INT_TO_PLAYERINDEX(iVar1) != PLAYER::PLAYER_ID())
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar1)), iVar0, false))
								{
									if (__LIB_2__::func_731(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
									{
										iVar2++;
									}
								}
							}
						}
						iVar1++;
					}
					if (iVar2 == VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_42()//Position - 0x14C934
{
	if (!__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_1("MATC_DPADRIGH5" /* GXT: ~s~Press ~INPUT_CONTEXT~ to enter. ~n~Press ~INPUT_FRONTEND_LEFT~ to go on call. */) || __LIB_0__::func_1("MATC_DPADRIGHT" /* GXT: Press ~INPUT_CONTEXT~ to enter. */))
		{
			return 1;
		}
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x153B04
{
	if ((__LIB_3__::func_929(PLAYER::PLAYER_ID()) && BitTest(Global_1946250.f_506, 31)) && __LIB_3__::func_499(iParam0) != __LIB_3__::func_349(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 23))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 23);
		}
		return 1;
	}
	return 0;
}

int func_44(bool bParam0, int iParam1)//Position - 0x154EA0
{
	int iVar0;
	if (bParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_425(bParam0, 0))
	{
		iVar0 = __LIB_3__::func_803(bParam0);
		if ((((((iVar0 == 192 || iVar0 == 190) || iVar0 == 167) || iVar0 == 168) || iVar0 == 178) || iVar0 == 188) || (((iParam1 && iVar0 == 225) || iVar0 == 226) || iVar0 == 227))
		{
			return 1;
		}
	}
	return 0;
}

int func_45(bool bParam0, bool bParam1)//Position - 0x155ABB
{
	int iVar0;
	if (__LIB_1__::func_264(bParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, bParam1))
		{
			if (__LIB_0__::func_656(PED::GET_VEHICLE_PED_IS_IN(iVar0, bParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1)//Position - 0x155AF6
{
	int iVar0;
	if (__LIB_1__::func_264(bParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, bParam1))
		{
			if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(iVar0, bParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_47(bool bParam0)//Position - 0x16C684
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_48(int iParam0)//Position - 0x16C7F4
{
	if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
	{
		return __LIB_3__::func_964(PLAYER::PLAYER_ID(), iParam0);
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x16D74F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (__LIB_3__::func_969(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_50(int iParam0)//Position - 0x16D793
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		bVar6 = __LIB_0__::func_160();
		bVar7 = __LIB_0__::func_160();
		bVar8 = __LIB_0__::func_160();
		iVar0 = 0;
		while (iVar0 < __LIB_1__::func_527())
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (__LIB_1__::func_264(bVar1, 1, 1))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2, false) && PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
					{
						if (__LIB_0__::func_306(iVar2, 0) == -1)
						{
							iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
							if (((iVar4 == joaat("cargobob") || iVar4 == joaat("cargobob2")) || iVar4 == joaat("cargobob3")) || iVar4 == joaat("cargobob4"))
							{
								iVar5 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar3);
								if (ENTITY::DOES_ENTITY_EXIST(iVar5) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar5) == iParam0)
								{
									bVar6 = bVar1;
								}
							}
							else if (iVar4 == joaat("towtruck") || iVar4 == joaat("towtruck2"))
							{
								iVar5 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iVar3);
								if (ENTITY::DOES_ENTITY_EXIST(iVar5) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar5) == iParam0)
								{
									bVar7 = bVar1;
								}
							}
							else if (iVar3 == iParam0)
							{
								bVar8 = bVar1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (bVar6 != __LIB_0__::func_160())
		{
			return bVar6;
		}
		if (bVar7 != __LIB_0__::func_160())
		{
			return bVar7;
		}
		if (bVar8 != __LIB_0__::func_160())
		{
			return bVar8;
		}
	}
	return __LIB_0__::func_160();
}

int func_51(bool bParam0, int iParam1)//Position - 0x172B5A
{
	if (__LIB_2__::func_192(bParam0) && __LIB_3__::func_972(bParam0, __LIB_3__::func_599(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_52(bool bParam0)//Position - 0x173067
{
	int iVar0;
	if (__LIB_1__::func_264(bParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iVar0, "Player_Vehicle"))
					{
						if (DECORATOR::DECOR_GET_INT(iVar0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bParam0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_53(int iParam0, var uParam1, int iParam2)//Position - 0x1798BF
{
	switch (__LIB_3__::func_974(__LIB_2__::func_321(iParam0)))
	{
		case 0:
			*uParam1 = { 1086.8363f, -3103.8796f, -41f };
			uParam1->f_3 = { 1105.807f, -3094.803f, -36.0099f };
			break;
		case 1:
			*uParam1 = { 1047.356f, -3112.175f, -41f };
			uParam1->f_3 = { 1074.308f, -3092.8257f, -33.7074f };
			break;
		case 2:
			*uParam1 = { 990.5693f, -3113.382f, -41f };
			uParam1->f_3 = { 1030.2635f, -3088.4788f, -28.7216f };
			break;
	}
}

void func_54(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x17AF65
{
	switch (__LIB_3__::func_974(__LIB_2__::func_321(iParam0)))
	{
		case 0:
			*uParam2 = { 1094.9884f, -3104.7756f, -40f };
			*uParam3 = 0f;
			StringCopy(sParam1, "ex_int_warehouse_s_dlc", 64);
			break;
		case 1:
			*uParam2 = { 1056.4877f, -3105.7239f, -40f };
			*uParam3 = 0f;
			StringCopy(sParam1, "ex_int_warehouse_m_dlc", 64);
			break;
		case 2:
			*uParam2 = { 1007.1347f, -3102.0793f, -40f };
			*uParam3 = 0f;
			StringCopy(sParam1, "ex_int_warehouse_l_dlc", 64);
			break;
	}
}

Vector3 func_55()//Position - 0x17C121
{
	return 0f, 0f, -90f;
}

bool func_56()//Position - 0x17C351
{
	return BitTest(Global_1958736, 3);
}

void func_57(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x17D4D3
{
	int iVar0;
	if (Global_3)
	{
		return;
	}
	if (Global_44203)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
	{
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_44202));
	}
	if (CAM::DOES_CAM_EXIST(iParam4))
	{
		CAM::SHAKE_CAM(iParam4, "DRUNK_SHAKE", fParam3);
		Global_44204 = iParam4;
	}
	else
	{
		Global_44204 = 0;
	}
	Global_44203 = 1;
	iVar0 = MISC::GET_GAME_TIMER();
	Global_44205 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_44205 = -1;
		}
	}
	Global_44206 = iParam1;
	Global_44207 = fParam2;
	Global_44209 = fParam3;
	Global_44208 = fParam3;
}

int func_58(int iParam0)//Position - 0x17D610
{
	int iVar0;
	int iVar1;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_2__::func_140(iParam0);
	iVar1 = __LIB_2__::func_139(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44024[iVar1 /*5*/].f_4;
}

int func_59()//Position - 0x17D70F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_60(int iParam0)//Position - 0x17D7FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), iVar0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("HAZ_HOOD"), 0))
	{
		iVar2 = -1;
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("HOOD_UP"), 0))
		{
			iVar2 = __LIB_2__::func_253(iParam0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar2, iVar0, 0);
			return 1;
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("HOOD_DOWN"), 0))
		{
			iVar2 = __LIB_2__::func_253(iParam0, 1);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar2, iVar0, 0);
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x17FC6B
{
	int iVar0;
	int iVar1;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_2__::func_140(iParam0);
	iVar1 = __LIB_2__::func_139(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44024[iVar1 /*5*/].f_3;
}

void func_62(bool bParam0)//Position - 0x18010E
{
	if (bParam0)
	{
		if (__LIB_0__::func_494())
		{
			Global_2714762.f_41 = 1;
		}
	}
	else
	{
		Global_2714762.f_41 = 0;
	}
}

void func_63(int iParam0)//Position - 0x182FE6
{
	Global_2825435.f_985 = iParam0;
}

float func_64(int iParam0, bool bParam1)//Position - 0x185027
{
	return SYSTEM::VDIST(__LIB_1__::func_265(iParam0), __LIB_1__::func_265(bParam1));
	return 0f;
}

int func_65(int iParam0, int iParam1)//Position - 0x18DCA2
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		case 1:
			return joaat("stinger");
		case 2:
			return joaat("jb700");
		case 3:
			return joaat("cheetah");
		case 4:
			return joaat("entityxf");
		case 5:
			return joaat("adder");
		case 6:
			return joaat("monroe");
		case 7:
			return joaat("cogcabrio");
		case 10:
			return joaat("shamal");
		case 11:
			return joaat("stunt");
		case 12:
			return joaat("cuban800");
		case 13:
			return joaat("duster");
		case 14:
			return joaat("luxor");
		case 15:
			return joaat("frogger");
		case 16:
			return joaat("maverick");
		case 17:
			return joaat("rhino");
		case 18:
			return joaat("titan");
		case 19:
			return joaat("cargobob");
		case 20:
			return joaat("buzzard");
		case 21:
			return joaat("crusader");
		case 22:
			return joaat("barracks");
		case 24:
			return joaat("marquis");
		case 25:
			return joaat("jetmax");
		case 27:
			return joaat("squalo");
		case 29:
			return joaat("tropic");
		case 30:
			return joaat("seashark");
		case 31:
			return joaat("submersible");
		case 32:
			return joaat("suntrap");
		case 258:
			return joaat("tug");
		case 33:
			return joaat("bmx");
		case 34:
			return joaat("scorcher");
		case 35:
			return joaat("tribike");
		case 36:
			return joaat("tribike2");
		case 37:
			return joaat("tribike3");
		case 38:
			return joaat("cruiser");
		case 39:
			return joaat("schwarzer");
		case 40:
			return joaat("zion");
		case 41:
			return joaat("gauntlet");
		case 42:
			return joaat("vigero");
		case 43:
			return joaat("issi2");
		case 44:
			return joaat("infernus");
		case 45:
			return joaat("surano");
		case 46:
			return joaat("vacca");
		case 47:
			return joaat("ninef");
		case 48:
			return joaat("comet2");
		case 49:
			return joaat("banshee");
		case 50:
			return joaat("feltzer2");
		case 51:
			return joaat("bfinjection");
		case 52:
			return joaat("sandking");
		case 53:
			return joaat("fugitive");
		case 54:
			return joaat("dilettante");
		case 55:
			return joaat("superd");
		case 56:
			return joaat("exemplar");
		case 57:
			return joaat("baller2");
		case 58:
			return joaat("cavalcade");
		case 59:
			return joaat("rocoto");
		case 60:
			return joaat("felon");
		case 61:
			return joaat("oracle2");
		case 62:
			return joaat("bati");
		case 63:
			return joaat("akuma");
		case 64:
			return joaat("ruffian");
		case 65:
			return joaat("vader");
		case 66:
			return joaat("blazer");
		case 67:
			return joaat("pcj");
		case 68:
			return joaat("sanchez");
		case 69:
			return joaat("faggio2");
		case 70:
			return joaat("bullet");
		case 71:
			return joaat("carbonizzare");
		case 72:
			return joaat("coquette");
		case 73:
			return joaat("ninef2");
		case 74:
			return joaat("rapidgt");
		case 75:
			return joaat("rapidgt2");
		case 76:
			return joaat("stingergt");
		case 77:
			return joaat("voltic");
		case 78:
			return joaat("annihilator");
		case 79:
			return joaat("mammatus");
		case 80:
			return joaat("velum");
		case 81:
			return joaat("dump");
		case 82:
			return joaat("airbus");
		case 83:
			return joaat("bus");
		case 84:
			return joaat("coach");
		case 85:
			return joaat("journey");
		case 86:
			return joaat("mule");
		case 87:
			return joaat("rentalbus");
		case 88:
			return joaat("stretch");
		case 89:
			return joaat("bison");
		case 90:
			return joaat("double");
		case 91:
			return joaat("felon2");
		case 92:
			return joaat("hexer");
		case 93:
			return joaat("zion2");
		case 94:
			return joaat("bati2");
		case 95:
			return joaat("elegy2");
		case 96:
			return joaat("khamelion");
		case 97:
			return joaat("hotknife");
		case 98:
			return joaat("carbonrs");
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		case 100:
			return joaat("kalahari");
		case 101:
			return joaat("paradise");
		case 102:
			return joaat("speeder");
		case 103:
			return joaat("bodhi2");
		case 104:
			return joaat("dune");
		case 105:
			return joaat("rebel");
		case 106:
			return joaat("sadler");
		case 107:
			return joaat("sanchez2");
		case 108:
			return joaat("sandking2");
		case 109:
			return joaat("btype");
		case 111:
			return joaat("jester");
		case 114:
			return joaat("massacro");
		case 112:
			return joaat("turismor");
		case 115:
			return joaat("zentorno");
		case 116:
			return joaat("huntley");
		case 110:
			return joaat("alpha");
		case 113:
			return joaat("vestra");
		case 117:
			return joaat("coquette");
		case 118:
			return joaat("banshee");
		case 119:
			return joaat("stinger");
		case 120:
			return joaat("voltic");
		case 121:
			return joaat("thrust");
		case 128:
			return joaat("asea");
		case 129:
			return joaat("asterope");
		case 130:
			return joaat("bobcatxl");
		case 131:
			return joaat("cavalcade2");
		case 132:
			return joaat("granger");
		case 133:
			return joaat("ingot");
		case 134:
			return joaat("intruder");
		case 135:
			return joaat("minivan");
		case 136:
			return joaat("premier");
		case 137:
			return joaat("radi");
		case 138:
			return joaat("rancherxl");
		case 139:
			return joaat("ratloader");
		case 140:
			return joaat("stanier");
		case 141:
			return joaat("stratum");
		case 142:
			return joaat("washington");
		case 122:
			return joaat("dominator");
		case 123:
			return joaat("f620");
		case 124:
			return joaat("fusilade");
		case 125:
			return joaat("penumbra");
		case 126:
			return joaat("sentinel");
		case 127:
			return joaat("sentinel2");
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		case 144:
			return joaat("warrener");
		case 145:
			return joaat("glendale");
		case 146:
			return joaat("rhapsody");
		case 147:
			return joaat("panto");
		case 148:
			return joaat("dubsta3");
		case 149:
			return joaat("pigalle");
		case 150:
			return joaat("picador");
		case 151:
			return joaat("regina");
		case 152:
			return joaat("surfer");
		case 153:
			return joaat("youga");
		case 154:
			return joaat("blazer3");
		case 155:
			return joaat("rebel2");
		case 156:
			return joaat("primo");
		case 157:
			return joaat("buffalo");
		case 158:
			return joaat("buffalo2");
		case 159:
			return joaat("tailgater");
		case 160:
			return joaat("monster");
		case 161:
			return joaat("sovereign");
		case 162:
			return joaat("miljet");
		case 163:
			return joaat("besra");
		case 164:
			return joaat("swift");
		case 165:
			return joaat("coquette2");
		case 166:
			return joaat("coquette2");
		case 167:
			return joaat("innovation");
		case 168:
			return joaat("hakuchou");
		case 169:
			return joaat("furoregt");
		case 170:
			return joaat("kalahari");
		case 187:
			return joaat("valkyrie");
		case 177:
			return joaat("hydra");
		case 185:
			return joaat("savage");
		case 174:
			return joaat("enduro");
		case 171:
			return joaat("boxville4");
		case 172:
			return joaat("casco");
		case 173:
			return joaat("dinghy3");
		case 175:
			return joaat("gburrito2");
		case 176:
			return joaat("guardian");
		case 178:
			return joaat("insurgent");
		case 179:
			return joaat("insurgent2");
		case 183:
			return joaat("mule3");
		case 180:
			return joaat("kuruma");
		case 181:
			return joaat("kuruma2");
		case 182:
			return joaat("lectro");
		case 184:
			return joaat("pbus");
		case 186:
			return joaat("technical");
		case 188:
			return joaat("velum2");
		case 189:
			return joaat("gresley");
		case 190:
			return joaat("jackal");
		case 191:
			return joaat("landstalker");
		case 192:
			return joaat("mesa3");
		case 193:
			return joaat("nemesis");
		case 194:
			return joaat("oracle");
		case 195:
			return joaat("rumpo");
		case 196:
			return joaat("schafter2");
		case 197:
			return joaat("seminole");
		case 198:
			return joaat("surge");
		case 199:
			return joaat("dodo");
		case 200:
			return joaat("marshall");
		case 201:
			return joaat("submersible2");
		case 202:
			return joaat("blista2");
		case 203:
			return joaat("stalion");
		case 204:
			return joaat("dukes");
		case 205:
			return joaat("dukes2");
		case 206:
			return joaat("stalion2");
		case 207:
			return joaat("dominator2");
		case 208:
			return joaat("gauntlet2");
		case 209:
			return joaat("buffalo3");
		case 210:
			return joaat("slamvan");
		case 211:
			return joaat("ratloader2");
		case 212:
			return joaat("jester2");
		case 213:
			return joaat("massacro2");
		case 214:
			return joaat("feltzer3");
		case 215:
			return joaat("luxor2");
		case 216:
			return joaat("osiris");
		case 217:
			return joaat("swift2");
		case 218:
			return joaat("virgo");
		case 219:
			return joaat("windsor");
		case 220:
			return joaat("brawler");
		case 221:
			return joaat("chino");
		case 222:
			return joaat("coquette3");
		case 223:
			return joaat("t20");
		case 224:
			return joaat("toro");
		case 225:
			return joaat("vindicator");
		case 229:
			return joaat("primo");
		case 228:
			return joaat("moonbeam");
		case 227:
			return joaat("faction");
		case 226:
			return joaat("buccaneer");
		case 230:
			return joaat("voodoo2");
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		case 264:
			return joaat("seven70");
		case 259:
			return joaat("windsor2");
		case 260:
			return joaat("prototipo");
		case 261:
			return joaat("fmj");
		case 262:
			return joaat("bestiagts");
		case 265:
			return joaat("pfister811");
		case 266:
			return joaat("reaper");
		case 231:
			return joaat("btype2");
		case 232:
			return joaat("lurcher");
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		case 237:
			return joaat("limo2");
		case 238:
			return joaat("mamba");
		case 239:
			return joaat("nightshade");
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		case 242:
			return joaat("verlierer2");
		case 243:
			return joaat("supervolito");
		case 244:
			return joaat("supervolito2");
		case 245:
			return Global_75446;
		case 251:
			return joaat("virgo3");
		case 250:
			return joaat("tornado");
		case 249:
			return joaat("sabregt");
		case 252:
			return joaat("faction");
		case 246:
			return joaat("tampa");
		case 247:
			return joaat("sultan");
		case 49:
			return joaat("banshee");
		case 248:
			return joaat("btype3");
		case 253:
			return joaat("volatus");
		case 254:
			return joaat("cargobob2");
		case 255:
			return joaat("rumpo3");
		case 256:
			return joaat("brickade");
		case 257:
			return joaat("nimbus");
		case 267:
			return joaat("le7b");
		case 268:
			return joaat("omnis");
		case 269:
			return joaat("tropos");
		case 270:
			return joaat("brioso");
		case 271:
			return joaat("trophytruck");
		case 272:
			return joaat("trophytruck2");
		case 273:
			return joaat("contender");
		case 274:
			return joaat("cliffhanger");
		case 275:
			return joaat("bf400");
		case 279:
			return joaat("tyrus");
		case 280:
			return joaat("lynx");
		case 281:
			return joaat("sheava");
		case 276:
			return joaat("rallytruck");
		case 277:
			return joaat("tampa2");
		case 278:
			return joaat("gargoyle");
		case 282:
			return joaat("bagger");
		case 283:
			return joaat("esskey");
		case 284:
			return joaat("nightblade");
		case 285:
			return joaat("defiler");
		case 286:
			return joaat("avarus");
		case 287:
			return joaat("zombiea");
		case 288:
			return joaat("zombieb");
		case 289:
			return joaat("chimera");
		case 290:
			return joaat("daemon2");
		case 291:
			return joaat("ratbike");
		case 292:
			return joaat("shotaro");
		case 293:
			return joaat("raptor");
		case 294:
			return joaat("hakuchou2");
		case 296:
			return joaat("blazer4");
		case 297:
			return joaat("sanctus");
		case 295:
			return joaat("vortex");
		case 298:
			return joaat("manchez");
		case 299:
			return joaat("tornado6");
		case 300:
			return joaat("youga2");
		case 301:
			return joaat("wolfsbane");
		case 302:
			return joaat("faggio3");
		case 303:
			return joaat("faggio");
		case 304:
			return joaat("dune5");
		case 305:
			return joaat("phantom2");
		case 306:
			return joaat("technical2");
		case 307:
			return joaat("blazer5");
		case 308:
			return joaat("boxville5");
		case 309:
			return joaat("wastelander");
		case 310:
			return joaat("ruiner2");
		case 311:
			return joaat("voltic2");
		case 312:
			return joaat("penetrator");
		case 313:
			return joaat("tempesta");
		case 314:
			return joaat("italigtb");
		case 315:
			return joaat("nero");
		case 316:
			return joaat("diablous");
		case 317:
			return joaat("fcr");
		case 318:
			return joaat("specter");
		case 319:
			return joaat("gp1");
		case 320:
			return joaat("infernus2");
		case 321:
			return joaat("ruston");
		case 322:
			return joaat("turismo2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_75447;
		case 324:
			return Global_75448;
		case 325:
			return joaat("cheetah2");
		case 326:
			return joaat("torero");
		case 327:
			return joaat("vagner");
		case 328:
			return joaat("xa21");
		case 329:
			return joaat("apc");
		case 330:
			return joaat("dune3");
		case 331:
			return joaat("halftrack");
		case 332:
			return joaat("oppressor");
		case 333:
			return joaat("tampa3");
		case 334:
			return joaat("trailersmall2");
		case 335:
			return joaat("ardent");
		case 336:
			return joaat("nightshark");
		case 337:
			return joaat("lazer");
		case 338:
			return joaat("microlight");
		case 339:
			return joaat("mogul");
		case 340:
			return joaat("rogue");
		case 341:
			return joaat("starling");
		case 342:
			return joaat("seabreeze");
		case 343:
			return joaat("tula");
		case 344:
			return joaat("pyro");
		case 345:
			return joaat("molotok");
		case 346:
			return joaat("nokota");
		case 347:
			return joaat("bombushka");
		case 348:
			return joaat("hunter");
		case 349:
			return joaat("havok");
		case 350:
			return joaat("howard");
		case 351:
			return joaat("alphaz1");
		case 352:
			return joaat("cyclone");
		case 353:
			return joaat("visione");
		case 354:
			return joaat("retinue");
		case 355:
			return joaat("rapidgt3");
		case 356:
			return joaat("vigilante");
		case 357:
			return Global_75449;
		case 358:
			return joaat("deluxo");
		case 359:
			return joaat("stromberg");
		case 360:
			return joaat("riot2");
		case 361:
			return joaat("chernobog");
		case 362:
			return joaat("khanjali");
		case 363:
			return joaat("akula");
		case 364:
			return joaat("thruster");
		case 365:
			return joaat("barrage");
		case 366:
			return joaat("volatol");
		case 367:
			return joaat("comet4");
		case 368:
			return joaat("neon");
		case 369:
			return joaat("streiter");
		case 370:
			return joaat("sentinel3");
		case 371:
			return joaat("yosemite");
		case 372:
			return joaat("sc1");
		case 373:
			return joaat("autarch");
		case 374:
			return joaat("gt500");
		case 375:
			return joaat("hustler");
		case 376:
			return joaat("revolter");
		case 377:
			return joaat("pariah");
		case 378:
			return joaat("raiden");
		case 379:
			return joaat("savestra");
		case 380:
			return joaat("riata");
		case 381:
			return joaat("hermes");
		case 382:
			return joaat("comet5");
		case 383:
			return joaat("z190");
		case 384:
			return joaat("viseris");
		case 385:
			return joaat("kamacho");
		case 386:
			return joaat("gb200");
		case 387:
			return joaat("fagaloa");
		case 388:
			return joaat("ellie");
		case 389:
			return joaat("issi3");
		case 390:
			return joaat("michelli");
		case 391:
			return joaat("flashgt");
		case 392:
			return joaat("hotring");
		case 393:
			return joaat("tezeract");
		case 394:
			return joaat("tyrant");
		case 395:
			return joaat("dominator3");
		case 396:
			return joaat("taipan");
		case 397:
			return joaat("entity2");
		case 398:
			return joaat("jester3");
		case 399:
			return joaat("cheburek");
		case 400:
			return joaat("caracara");
		case 401:
			return joaat("seasparrow");
		case 402:
			return Global_75450;
		case 403:
			return joaat("mule4");
		case 404:
			return joaat("pounder2");
		case 405:
			return joaat("swinger");
		case 406:
			return joaat("menacer");
		case 407:
			return joaat("scramjet");
		case 408:
			return joaat("strikeforce");
		case 409:
			return joaat("oppressor2");
		case 410:
			return joaat("patriot2");
		case 411:
			return joaat("stafford");
		case 412:
			return joaat("freecrawler");
		case 415:
			return joaat("futo");
		case 416:
			return joaat("ruiner");
		case 417:
			return joaat("romero");
		case 418:
			return joaat("prairie");
		case 419:
			return joaat("baller");
		case 420:
			return joaat("serrano");
		case 421:
			return joaat("bjxl");
		case 422:
			return joaat("habanero");
		case 423:
			return joaat("fq2");
		case 424:
			return joaat("patriot");
		case 413:
			return joaat("blimp3");
		case 414:
			return joaat("pbus2");
		case 425:
			return joaat("cerberus");
		case 426:
			return joaat("cerberus2");
		case 427:
			return joaat("cerberus3");
		case 428:
			return joaat("brutus");
		case 429:
			return joaat("brutus2");
		case 430:
			return joaat("brutus3");
		case 431:
			return joaat("scarab");
		case 432:
			return joaat("scarab2");
		case 433:
			return joaat("scarab3");
		case 434:
			return joaat("imperator");
		case 435:
			return joaat("imperator2");
		case 436:
			return joaat("imperator3");
		case 437:
			return joaat("zr380");
		case 438:
			return joaat("zr3802");
		case 439:
			return joaat("zr3803");
		case 440:
			return joaat("impaler");
		case 450:
			return joaat("taxi");
		case 451:
			return joaat("bulldozer");
		case 452:
			return joaat("speedo2");
		case 453:
			return joaat("trash2");
		case 454:
			return joaat("barracks2");
		case 455:
			return joaat("mixer");
		case 456:
			return joaat("dune2");
		case 457:
			return joaat("tractor");
		case 458:
			return joaat("blista3");
		case 441:
			return joaat("vamos");
		case 442:
			return joaat("tulip");
		case 443:
			return joaat("deveste");
		case 444:
			return joaat("schlagen");
		case 445:
			return joaat("toros");
		case 446:
			return joaat("deviant");
		case 447:
			return joaat("clique");
		case 448:
			return joaat("italigto");
		case 449:
			return joaat("rcbandito");
		case 459:
			return joaat("thrax");
		case 460:
			return joaat("drafter");
		case 461:
			return joaat("locust");
		case 462:
			return joaat("novak");
		case 463:
			return joaat("zorrusso");
		case 464:
			return joaat("gauntlet3");
		case 465:
			return joaat("issi7");
		case 466:
			return joaat("zion3");
		case 467:
			return joaat("nebula");
		case 468:
			return joaat("hellion");
		case 469:
			return joaat("dynasty");
		case 470:
			return joaat("rrocket");
		case 471:
			return joaat("peyote2");
		case 472:
			return joaat("gauntlet4");
		case 473:
			return joaat("caracara2");
		case 474:
			return joaat("jugular");
		case 475:
			return joaat("s80");
		case 476:
			return joaat("krieger");
		case 477:
			return joaat("emerus");
		case 478:
			return joaat("neo");
		case 479:
			return joaat("paragon");
		case 480:
			return joaat("firetruk");
		case 481:
			return joaat("burrito2");
		case 482:
			return joaat("boxville");
		case 483:
			return joaat("stockade");
		case 484:
			return joaat("lguard");
		case 485:
			return joaat("blazer2");
		case 486:
			return joaat("zhaba");
		case 487:
			return joaat("minitank");
		case 488:
			return joaat("jb7002");
		case 489:
			return joaat("stryder");
		case 490:
			return joaat("vstr");
		case 491:
			return joaat("formula");
		case 492:
			return joaat("imorgon");
		case 493:
			return joaat("formula2");
		case 494:
			return joaat("furia");
		case 495:
			return joaat("rebla");
		case 496:
			return joaat("vagrant");
		case 497:
			return joaat("retinue2");
		case 498:
			return joaat("yosemite2");
		case 499:
			return joaat("komoda");
		case 500:
			return joaat("sultan2");
		case 501:
			return joaat("sugoi");
		case 502:
			return joaat("everon");
		case 503:
			return joaat("asbo");
		case 504:
			return joaat("kanjo");
		case 505:
			return joaat("outlaw");
		default:
	}
	switch (iParam0)
	{
		case 506:
			return joaat("club");
		case 507:
			return joaat("dukes3");
		case 508:
			return joaat("yosemite3");
		case 509:
			return joaat("penumbra2");
		case 510:
			return joaat("landstalker2");
		case 511:
			return joaat("seminole2");
		case 512:
			return joaat("tigon");
		case 513:
			return joaat("openwheel1");
		case 514:
			return joaat("openwheel2");
		case 515:
			return joaat("coquette4");
		case 516:
			return joaat("manana");
		case 517:
			return joaat("peyote");
		case 518:
			return __LIB_0__::func_704();
		case 519:
			return joaat("italirsx");
		case 520:
			return joaat("slamtruck");
		case 521:
			return joaat("brioso2");
		case 522:
			return joaat("weevil");
		case 523:
			return joaat("alkonost");
		case 524:
			return joaat("annihilator2");
		case 525:
			return joaat("dinghy5");
		case 526:
			return joaat("manchez2");
		case 527:
			return joaat("patrolboat");
		case 528:
			return joaat("squaddie");
		case 529:
			return joaat("toreador");
		case 530:
			return joaat("verus");
		case 531:
			return joaat("vetir");
		case 532:
			return joaat("winky");
		case 533:
			return joaat("longfin");
		case 534:
			return joaat("veto");
		case 535:
			return joaat("veto2");
		case 543:
			return joaat("zr350");
		case 537:
			return joaat("comet6");
		case 540:
			return joaat("jester4");
		case 542:
			return joaat("vectre");
		case 538:
			return joaat("cypher");
		case 548:
			return joaat("tailgater2");
		case 550:
			return joaat("euros");
		case 551:
			return joaat("growler");
		case 536:
			return joaat("calico");
		case 541:
			return joaat("remus");
		case 539:
			return joaat("dominator7");
		case 546:
			return joaat("futo2");
		case 545:
			return joaat("rt3000");
		case 544:
			return joaat("warrener2");
		case 547:
			return joaat("sultan3");
		case 549:
			return joaat("dominator8");
		case 552:
			return joaat("previon");
		case 554:
			return joaat("comet7");
		case 555:
			return joaat("shinobi");
		case 556:
			return joaat("reever");
		case 557:
			return joaat("baller7");
		case 558:
			return joaat("cinquemila");
		case 559:
			return joaat("jubilee");
		case 560:
			return joaat("astron");
		case 561:
			return joaat("deity");
		case 562:
			return joaat("zeno");
		case 563:
			return joaat("champion");
		case 564:
			return joaat("ignus");
		case 565:
			return joaat("buffalo4");
		case 566:
			return joaat("granger2");
		case 567:
			return joaat("iwagen");
		case 568:
			return joaat("patriot3");
		case 553:
			return joaat("supervolito2");
		case 569:
			return joaat("tenf");
		case 570:
			return joaat("sm722");
		case 571:
			return joaat("torero2");
		case 572:
			return joaat("corsita");
		case 573:
			return joaat("lm87");
		case 574:
			return joaat("omnisegt");
		case 575:
			return joaat("rhinehart");
		case 576:
			return joaat("postlude");
		case 577:
			return joaat("kanjosj");
		case 578:
			return joaat("vigero2");
		case 579:
			return joaat("ruiner4");
		case 580:
			return joaat("draugur");
		case 581:
			return joaat("greenwood");
		case 582:
			return joaat("conada");
		default:
	}
	return 0;
}

bool func_66(char* sParam0, int iParam1)//Position - 0x1906CF
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_67(char* sParam0, int iParam1, int iParam2)//Position - 0x191553
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

bool func_68(int iParam0)//Position - 0x193A5C
{
	return iParam0 != -1;
}

int func_69(int iParam0)//Position - 0x1943EC
{
	if (((((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Weed_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Forgery_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Cocaine_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Counterfeit_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("S_F_Y_SweatShop_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("A_F_Y_BevHills_04")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("A_F_Y_GenHot_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("A_F_Y_SCDressy_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("IG_TracyDiSanto"))
	{
		return 1;
	}
	return 0;
}

void func_70()//Position - 0x1944AA
{
	Global_2703735.f_833.f_9 = 1;
}

void func_71()//Position - 0x1956DA
{
	if (BitTest(Global_2621446, 8))
	{
		if (BitTest(Global_2621446, 9))
		{
			MISC::CLEAR_BIT(&Global_2621446, 9);
		}
		MISC::CLEAR_BIT(&Global_2621446, 8);
	}
}

void func_72(var uParam0)//Position - 0x19BA07
{
	uParam0->f_35 = 0;
}

int func_73(var uParam0)//Position - 0x19BA14
{
	return uParam0->f_35;
}

void func_74(var uParam0)//Position - 0x19CAE5
{
	struct<46> Var0;
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_75(bool bParam0)//Position - 0x19CB17
{
	if (!BitTest(Global_2621446, 8))
	{
		if (bParam0)
		{
			MISC::SET_BIT(&Global_2621446, 9);
		}
		MISC::SET_BIT(&Global_2621446, 8);
	}
}

int func_76(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x19EECB
{
	int iVar0;
	int iVar1;
	iVar1 = NETWORK::GET_NETWORK_TIME();
	if (bParam3)
	{
		iVar1 = MISC::GET_GAME_TIMER();
	}
	iVar0 = MISC::ABSI((iParam2 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, iParam0))));
	return iVar0;
}

char* func_77(int iParam0)//Position - 0x1A2FFB
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM5";
		case 1:
			return "SNK_ITEM2";
		case 2:
			return "SNK_ITEM3";
		case 3:
			return "SNK_ITEM1";
		case 4:
			return "SNK_ITEM4";
		case 5:
			return "SNK_ITEM7";
		default:
	}
	return "";
}

int func_78()//Position - 0x1A3062
{
	if (!Global_262145.f_119 /* Tunable: ENABLE_SPRUNK_GTAO_PURCHASING */)
	{
		return 5;
	}
	return 6;
}

int func_79()//Position - 0x1A3CDD
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_80(bool bParam0)//Position - 0x1A7F2D
{
	var uVar0;
	uVar0 = Global_1659753[__LIB_1__::func_443(-1)];
	if (BitTest(uVar0, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x1A8F05
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 26);
	}
	return 0;
}

void func_82(int iParam0)//Position - 0x1A908B
{
	Global_2725432 = iParam0;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_827 = iParam0;
}

int func_83(int iParam0)//Position - 0x1CF
{
	if (iParam0 == __LIB_1__::func_261())
	{
		return Global_2671449.f_14;
	}
	return 0;
}

void func_84(int iParam0, int iParam1)//Position - 0x15DD6
{
	int iVar0;
	*iParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 363)
		{
			if (iParam0 == (Global_1940666[iVar0] - 1))
			{
				*iParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

int func_85(bool bParam0)//Position - 0x1A441
{
	return MISC::GET_BITS_IN_RANGE(Global_2689235[bParam0 /*453*/].f_318.f_3, 28, 31);
}

void func_86()//Position - 0x1B019
{
	Global_2676154.f_1 = -1;
	StringCopy(&(Global_2676154.f_2), "", 64);
	StringCopy(&(Global_2676154.f_18), "", 64);
	Global_2676154.f_37 = -1;
}

void func_87(int iParam0)//Position - 0x1B78B
{
	if (!Global_2671449 == iParam0)
	{
		Global_2671449.f_1 = 0;
	}
	Global_2671449 = iParam0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2671449.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_88()//Position - 0x1B7BC
{
	Global_2671449.f_14 = 0;
}

int func_89(bool bParam0)//Position - 0x1BB84
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_480;
	}
	return 0;
}

char* func_90(int iParam0)//Position - 0x1BC84
{
	if (iParam0 != -1)
	{
		switch (iParam0)
		{
			case 1:
				return "anim@mp_bedmid@right_var_02";
			case 4:
				return "anim@mp_bedmid@right_var_01";
			case 7:
				return "anim@mp_bedmid@right_var_01";
			case 9:
				return "anim@mp_bedmid@right_var_01";
			case 11:
				return "anim@mp_bedmid@right_var_02";
			case 13:
				return "anim@mp_bedmid@right_var_02";
			case 15:
				return "anim@mp_bedmid@right_var_02";
			case 17:
				return "anim@mp_bedmid@right_var_02";
			case 20:
				return "anim@mp_bedmid@left_var_02";
			case 22:
				return "anim@mp_bedmid@left_var_02";
			case 24:
				return "anim@mp_bedmid@left_var_02";
			}
		default:
	}
	return "anim@mp_bedmid@right_var_01";
}

void func_91(int iParam0)//Position - 0x1BEDE
{
	Global_2676154 = iParam0;
}

bool func_92(int iParam0)//Position - 0x1BEEC
{
	return Global_2676154 == iParam0;
}

void func_93(bool bParam0)//Position - 0x1C7DE
{
	if (bParam0)
	{
		Global_1946250.f_4694 = 1;
	}
	else
	{
		Global_1946250.f_4694 = 0;
	}
}

void func_94(bool bParam0, bool bParam1)//Position - 0x1C7FE
{
	Global_1946250.f_508 = bParam0;
	if (!bParam0)
	{
		if (bParam1)
		{
			Global_1946250.f_517 = 0;
		}
	}
}

void func_95(bool bParam0)//Position - 0x1C822
{
	Global_1946250.f_507 = bParam0;
	if (bParam0)
	{
		OBJECT::SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(false);
	}
}

void func_96()//Position - 0x1CDA1
{
	MISC::CLEAR_BIT(&Global_2714762, 7);
}

void func_97(int iParam0)//Position - 0x1CDD9
{
	if (iParam0 == -1)
	{
		Global_2714762.f_890++;
	}
	else
	{
		Global_2714762.f_890 = iParam0;
	}
}

void func_98(int iParam0)//Position - 0x1CE78
{
	Global_2714762.f_42 = iParam0;
}

var func_99()//Position - 0x1CF3F
{
	return Global_2714762.f_756;
}

void func_100()//Position - 0x1D1D6
{
	MISC::SET_BIT(&(Global_2714762.f_3), 3);
}

void func_101()//Position - 0x1D1E9
{
	MISC::SET_BIT(&(Global_2714762.f_3), 2);
}

int func_102(bool bParam0)//Position - 0x1EEC9
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_3, 4);
	}
	return 0;
}

int func_103(bool bParam0)//Position - 0x1F047
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_295;
	}
	return 0;
}

int func_104(bool bParam0)//Position - 0x1F06B
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_295 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_105(bool bParam0)//Position - 0x1F2C3
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_336;
	}
	return 0;
}

int func_106(bool bParam0)//Position - 0x1F3D0
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_2, 6);
	}
	return 0;
}

int func_107(bool bParam0)//Position - 0x1F55A
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_285 != 0;
	}
	return 0;
}

void func_108(bool bParam0)//Position - 0x7A17B
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 25);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 25);
	}
}

var func_109(bool bParam0, int iParam1)//Position - 0x7B2AC
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_10.f_6, iParam1);
}

bool func_110()//Position - 0x7DDF3
{
	return __LIB_0__::func_137(28258, -1);
}

var func_111(int iParam0)//Position - 0x7FF5D
{
	var uVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_592(iParam0);
	__LIB_2__::func_375(iVar1, &uVar0);
	return uVar0;
}

int func_112(bool bParam0, int iParam1)//Position - 0x819FB
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_480 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_113(bool bParam0)//Position - 0x81E4B
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_480.f_1, 24);
	}
	return 0;
}

void func_114(bool bParam0)//Position - 0x88FFE
{
	Global_1946250.f_3280 = bParam0;
}

int func_115(bool bParam0)//Position - 0x89CD2
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_827;
	}
	return -1;
}

bool func_116(bool bParam0)//Position - 0x89FCB
{
	return __LIB_0__::func_249(bParam0, 1);
}

int func_117(bool bParam0)//Position - 0x8A70D
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_480 != 0;
	}
	return 0;
}

int func_118(bool bParam0)//Position - 0x8B438
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_2689235[bParam0 /*453*/].f_318.f_26;
	}
	return -1;
}

int func_119(bool bParam0)//Position - 0x94032
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return 1;
	}
	return 0;
}

int func_120(bool bParam0)//Position - 0x940FA
{
	if (__LIB_3__::func_803(bParam0) == 225)
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x958B3
{
	if (Global_1574612)
	{
		return 1;
	}
	if (__LIB_0__::func_189())
	{
		return 1;
	}
	if (__LIB_0__::func_188())
	{
		return 1;
	}
	return __LIB_1__::func_563(120, -1);
}

int func_122(bool bParam0)//Position - 0x9BE1D
{
	if (bParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return Global_2680265.f_903.f_168[bParam0];
}

int func_123(var uParam0, bool bParam1)//Position - 0xA36D1
{
	if (bParam1 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 1) && !__LIB_3__::func_999(PLAYER::PLAYER_ID(), bParam1))
	{
		return 0;
	}
	if (__LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		return 0;
	}
	return 1;
}

int func_124(bool bParam0)//Position - 0xA3794
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_465.f_3, 2);
	}
	return 0;
}

int func_125(var uParam0, int iParam1, var uParam2)//Position - 0xA7C64
{
	int iVar0;
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (iParam1 == PLAYER::PLAYER_ID())
		{
			if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				if (Global_1957730)
				{
					if (__LIB_0__::func_657(iVar0, 1))
					{
						if (Global_1957730 || __LIB_2__::func_417(PLAYER::PLAYER_ID()))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							if (__LIB_0__::func_657(iVar0, 1))
							{
								__LIB_3__::func_824();
							}
							Global_1958628 = 1;
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = __LIB_0__::func_160();
							return 1;
						}
					}
				}
			}
		}
		else if (__LIB_2__::func_417(PLAYER::PLAYER_ID()))
		{
			if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				if (Global_1957730)
				{
					if (__LIB_0__::func_657(iVar0, 1))
					{
						if (Global_1957730 || __LIB_2__::func_417(PLAYER::PLAYER_ID()))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							Global_1958628 = 1;
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = __LIB_0__::func_160();
							return 1;
						}
					}
				}
			}
		}
		else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(iParam1) && uParam2)
		{
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = __LIB_0__::func_160();
			return 1;
		}
	}
	return 0;
}

int func_126(bool bParam0, int iParam1)//Position - 0xA884B
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_465 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_127(bool bParam0)//Position - 0xAB9F6
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_465;
	}
	return 0;
}

int func_128(bool bParam0)//Position - 0xABC70
{
	if (bParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_5, 10);
}

int func_129(bool bParam0)//Position - 0xAD3CA
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_465 != 0;
	}
	return 0;
}

int func_130(bool bParam0)//Position - 0xB18A2
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_428, 0);
	}
	return 0;
}

bool func_131()//Position - 0xB4D43
{
	return __LIB_0__::func_228(30487, -1) != 0;
}

int func_132(bool bParam0)//Position - 0xB638C
{
	if (bParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_459, 15);
}

int func_133(int iParam0, bool bParam1)//Position - 0xB6ED5
{
	if (bParam1 != __LIB_0__::func_160())
	{
		if (Global_1892703[iParam0 /*599*/].f_10.f_26 != __LIB_0__::func_160())
		{
			return bParam1 == Global_1892703[iParam0 /*599*/].f_10.f_26;
		}
	}
	return 0;
}

int func_134(int iParam0, bool bParam1)//Position - 0xB6F9D
{
	int iVar0;
	iVar0 = Global_1892703[bParam1 /*599*/].f_10.f_76.f_19;
	switch (iParam0)
	{
		case 1:
			return 598;
		case 2:
			return 599;
		case 3:
			return 600;
		case 4:
			return 601;
		case 0:
			return 0;
		case 5:
			return 602;
		case 6:
			return 603;
		case 7:
			return 604;
		case 8:
			return 605;
		case 9:
			return 606;
		case 10:
			return 607;
		case 11:
			return 608;
		case 12:
			return 609;
		default:
	}
	switch (iParam0)
	{
		case 13:
			return 610;
		case 14:
			return 611;
		case 15:
			return 612;
		case 16:
			return 613;
		case 17:
			return 614;
		case 18:
			return 615;
		case 19:
			return 616;
		case 20:
			return 617;
		case 21:
			return 618;
		case 22:
			return 619;
		case 23:
			return 620;
		case 24:
			return 621;
		default:
	}
	switch (iParam0)
	{
		case 25:
			return 951;
		case 26:
			return 952;
		case 33:
			return 959;
		case 34:
			return 960;
		case 31:
			return 957;
		case 32:
			return 958;
		case 35:
			return 961;
		case 36:
			return 962;
		case 27:
			return 953;
		case 28:
			return 954;
		case 29:
			return 955;
		case 30:
			return 956;
		default:
	}
	switch (iParam0)
	{
		case 37:
			return 1068;
		case 38:
			return 1069;
		case 39:
			return 1070;
		case 40:
			return 1071;
		case 41:
			return 1106;
		case 42:
			return 1107;
		default:
	}
	switch (iParam0)
	{
		case 43:
			return 1163;
		case 44:
			return 1164;
		default:
	}
	switch (iParam0)
	{
		case 45:
			switch (iVar0)
			{
				case 0:
					return 918;
				case 1:
					return 919;
				case 2:
					return 920;
				case 3:
					return 921;
				case 4:
					return 922;
				case 5:
					return 923;
				case 6:
					return 924;
				case 7:
					return 925;
				default:
			}
			break;
		case 46:
			switch (iVar0)
			{
				case 0:
					return 726;
				case 1:
					return 727;
				case 2:
					return 728;
				case 3:
					return 729;
				case 4:
					return 882;
				case 5:
					return 883;
				case 6:
					return 884;
				case 7:
					return 885;
				default:
			}
			break;
		case 47:
			switch (iVar0)
			{
				case 0:
					return 730;
				case 1:
					return 731;
				case 2:
					return 732;
				case 3:
					return 733;
				case 4:
					return 886;
				case 5:
					return 887;
				case 6:
					return 888;
				case 7:
					return 889;
				default:
			}
			break;
		case 48:
			switch (iVar0)
			{
				case 0:
					return 714;
				case 1:
					return 715;
				case 2:
					return 716;
				case 3:
					return 717;
				case 4:
					return 870;
				case 5:
					return 871;
				case 6:
					return 872;
				case 7:
					return 873;
				default:
			}
			break;
		case 49:
			switch (iVar0)
			{
				case 0:
					return 718;
				case 1:
					return 719;
				case 2:
					return 720;
				case 3:
					return 721;
				case 4:
					return 874;
				case 5:
					return 875;
				case 6:
					return 876;
				case 7:
					return 877;
				default:
			}
			break;
		case 50:
			switch (iVar0)
			{
				case 0:
					return 722;
				case 1:
					return 723;
				case 2:
					return 724;
				case 3:
					return 725;
				case 4:
					return 878;
				case 5:
					return 879;
				case 6:
					return 880;
				case 7:
					return 881;
				default:
			}
			break;
		case 51:
			switch (iVar0)
			{
				case 0:
					return 734;
				case 1:
					return 735;
				case 2:
					return 736;
				case 3:
					return 737;
				case 4:
					return 890;
				case 5:
					return 891;
				case 6:
					return 892;
				case 7:
					return 893;
				default:
			}
			break;
		case 52:
			switch (iVar0)
			{
				case 0:
					return 738;
				case 1:
					return 739;
				case 2:
					return 740;
				case 3:
					return 741;
				case 4:
					return 894;
				case 5:
					return 895;
				case 6:
					return 896;
				case 7:
					return 897;
				default:
			}
			break;
		case 53:
			switch (iVar0)
			{
				case 0:
					return 926;
				case 1:
					return 927;
				case 2:
					return 928;
				case 3:
					return 929;
				case 4:
					return 930;
				case 5:
					return 931;
				case 6:
					return 932;
				case 7:
					return 933;
				default:
			}
			break;
		case 54:
			switch (iVar0)
			{
				case 0:
					return 934;
				case 1:
					return 935;
				case 2:
					return 936;
				case 3:
					return 937;
				case 4:
					return 938;
				case 5:
					return 939;
				case 6:
					return 940;
				case 7:
					return 941;
				default:
			}
			break;
		case 55:
			switch (iVar0)
			{
				case 0:
					return 942;
				case 1:
					return 943;
				case 2:
					return 944;
				case 3:
					return 945;
				case 4:
					return 946;
				case 5:
					return 947;
				case 6:
					return 948;
				case 7:
					return 949;
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 56:
			switch (iVar0)
			{
				case 0:
					return 1090;
				case 1:
					return 1091;
				case 2:
					return 1092;
				case 3:
					return 1093;
				case 4:
					return 1094;
				case 5:
					return 1095;
				case 6:
					return 1096;
				case 7:
					return 1097;
				default:
			}
			break;
		case 57:
			switch (iVar0)
			{
				case 0:
					return 1060;
				case 1:
					return 1061;
				case 2:
					return 1062;
				case 3:
					return 1063;
				case 4:
					return 1064;
				case 5:
					return 1065;
				case 6:
					return 1066;
				case 7:
					return 1067;
				default:
			}
			break;
		case 58:
			switch (iVar0)
			{
				case 0:
					return 1114;
				case 1:
					return 1115;
				case 2:
					return 1116;
				case 3:
					return 1117;
				case 4:
					return 1118;
				case 5:
					return 1119;
				case 6:
					return 1120;
				case 7:
					return 1121;
				default:
			}
			break;
		case 59:
			switch (iVar0)
			{
				case 0:
					return 1122;
				case 1:
					return 1123;
				case 2:
					return 1124;
				case 3:
					return 1125;
				case 4:
					return 1126;
				case 5:
					return 1127;
				case 6:
					return 1128;
				case 7:
					return 1129;
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 60:
			switch (iVar0)
			{
				case 0:
					return 1171;
				case 1:
					return 1172;
				case 2:
					return 1173;
				case 3:
					return 1174;
				case 4:
					return 1175;
				case 5:
					return 1176;
				case 6:
					return 1177;
				case 7:
					return 1178;
				default:
			}
			break;
		case 61:
			switch (iVar0)
			{
				case 0:
					return 1185;
				case 1:
					return 1186;
				case 2:
					return 1187;
				case 3:
					return 1188;
				case 4:
					return 1189;
				case 5:
					return 1190;
				case 6:
					return 1191;
				case 7:
					return 1192;
				default:
			}
			break;
	}
	return 0;
}

int func_135(bool bParam0)//Position - 0xB9D61
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_353 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_136(bool bParam0)//Position - 0xBD1F1
{
	if (bParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_458, 0);
}

int func_137(var uParam0, bool bParam1)//Position - 0xBDE5D
{
	struct<13> Var0;
	struct<13> Var1;
	int iVar2;
	if (bParam1 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 1) && !__LIB_3__::func_999(PLAYER::PLAYER_ID(), bParam1))
	{
		return 0;
	}
	if (__LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 0;
	}
	Var0 = { __LIB_1__::func_267(bParam1) };
	Var1 = { __LIB_1__::func_267(PLAYER::PLAYER_ID()) };
	iVar2 = __LIB_2__::func_180(&Var1);
	if (iVar2 == -1 || iVar2 != __LIB_2__::func_180(&Var0))
	{
		if (!NETWORK::NETWORK_IS_FRIEND(&Var0))
		{
			if (!__LIB_3__::func_999(PLAYER::PLAYER_ID(), bParam1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_138(bool bParam0, int iParam1)//Position - 0xBE2A0
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (__LIB_1__::func_424(bParam0, 9))
		{
			return __LIB_3__::func_803(bParam0) == iParam1;
		}
	}
	return 0;
}

int func_139(bool bParam0)//Position - 0xC17A3
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_384 != 0;
	}
	return 0;
}

int func_140(bool bParam0)//Position - 0xC1B77
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_408 != 0;
	}
	return 0;
}

int func_141(bool bParam0)//Position - 0xC4A46
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_384.f_2, 29);
	}
	return 0;
}

int func_142(var uParam0, int iParam1, var uParam2)//Position - 0xCC444
{
	int iVar0;
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (iParam1 == PLAYER::PLAYER_ID())
		{
			if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				if (Global_1957730)
				{
					if (__LIB_0__::func_657(iVar0, 1))
					{
						if (Global_1957730)
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							if (__LIB_0__::func_657(iVar0, 1))
							{
								__LIB_3__::func_824();
							}
							Global_1958628 = 1;
							return 1;
						}
					}
				}
			}
		}
		else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(iParam1) && uParam2)
		{
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
			return 1;
		}
	}
	return 0;
}

int func_143(bool bParam0, int iParam1)//Position - 0xCDA2F
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_408 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_144(bool bParam0)//Position - 0xCDAF3
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_408.f_1, 0);
	}
	return 0;
}

int func_145(bool bParam0)//Position - 0xD58F5
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_408;
	}
	return 0;
}

void func_146(int iParam0, bool bParam1, var uParam2)//Position - 0xD5E43
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	Var2.f_1 = -1;
	Var2.f_0 = __LIB_0__::func_160();
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*2*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if ((Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && Global_2681762.f_199.f_1[iVar0 /*15*/].f_3 == iParam0) && (bParam1 == __LIB_0__::func_160() || bParam1 == Global_2681762.f_199.f_1[iVar0 /*15*/].f_1))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (*uParam2)[iVar1 /*2*/] == __LIB_0__::func_160()
				{
					*(uParam2[iVar1 /*2*/]) = { Global_2681762.f_199.f_1[iVar0 /*15*/].f_1 };
					if (iVar1 + 1 == *uParam2)
					{
						return;
					}
					Jump @229; //curOff = 201
				}
				else if (iVar1 + 1 == *uParam2)
				{
					return;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_147(bool bParam0)//Position - 0xE4152
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_384;
	}
	return 0;
}

int func_148(bool bParam0)//Position - 0xE43C5
{
	if (bParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_384.f_1, 18);
}

int func_149(var uParam0, int iParam1, var uParam2)//Position - 0xEF9AB
{
	int iVar0;
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (iParam1 == PLAYER::PLAYER_ID())
		{
			if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				if (Global_1957730)
				{
					if (__LIB_0__::func_657(iVar0, 1))
					{
						if (Global_1957730 || __LIB_2__::func_417(PLAYER::PLAYER_ID()))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							if (__LIB_0__::func_657(iVar0, 1))
							{
								__LIB_3__::func_824();
							}
							Global_1958628 = 1;
							return 1;
						}
					}
				}
			}
		}
		else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(iParam1) && uParam2)
		{
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
			return 1;
		}
	}
	return 0;
}

bool func_150(bool bParam0, int iParam1)//Position - 0xF0563
{
	if (bParam0 == __LIB_0__::func_160() || iParam1 == 0)
	{
		return 0;
	}
	return Global_1853348[bParam0 /*834*/].f_267.f_353 == iParam1;
}

int func_151(bool bParam0)//Position - 0xF44EC
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_353;
	}
	return 0;
}

int func_152(bool bParam0)//Position - 0x1098F8
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_162510.f_14, 12);
	}
	if (bParam0 != -1)
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_366, 31);
	}
	return 0;
}

int func_153(var uParam0, int iParam1, var uParam2)//Position - 0x10F682
{
	int iVar0;
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (iParam1 == PLAYER::PLAYER_ID())
		{
			if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1 && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
			{
				if (Global_1957730)
				{
					if (__LIB_0__::func_657(iVar0, 1) || __LIB_0__::func_655(iVar0, 1))
					{
						if (Global_1957730 || __LIB_2__::func_743(PLAYER::PLAYER_ID()))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							if (__LIB_0__::func_657(iVar0, 1))
							{
								__LIB_3__::func_824();
							}
							Global_1958628 = 1;
							return 1;
						}
					}
				}
			}
		}
		else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(iParam1) && uParam2)
		{
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
			return 1;
		}
	}
	return 0;
}

int func_154(bool bParam0, int iParam1)//Position - 0x110545
{
	if (bParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_7, 0);
			break;
		case 1:
			return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_7, 1);
			break;
		case 4:
			return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_7, 2);
			break;
		case 2:
			return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_7, 3);
			break;
		case 3:
			return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_7, 4);
			break;
		case 5:
			return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_7, 5);
			break;
	}
	return 0;
}

int func_155(bool bParam0, int iParam1)//Position - 0x11091E
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_295 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_156(bool bParam0)//Position - 0x110EFF
{
	int iVar0;
	char* sVar1;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (Global_1964503[iVar0] == -1)
		{
			return 0;
		}
		sVar1 = PLAYER::GET_PLAYER_NAME(bParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return MISC::GET_HASH_KEY(sVar1) == Global_1964503[iVar0];
		}
	}
	return 0;
}

int func_157(bool bParam0)//Position - 0x11DD86
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_2, 15);
	}
	return 0;
}

int func_158(bool bParam0)//Position - 0x11E69A
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_292, 15);
	}
	return 0;
}

var func_159(bool bParam0)//Position - 0x139B17
{
	var uVar0;
	if (bParam0 != __LIB_0__::func_160())
	{
		uVar0 = Global_1963794[bParam0];
	}
	return uVar0;
}

int func_160(bool bParam0)//Position - 0x13ABAD
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_292, 20);
	}
	return 0;
}

int func_161(bool bParam0)//Position - 0x13CFF1
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_292, 12);
	}
	return 0;
}

int func_162(var uParam0, bool bParam1)//Position - 0x1488AD
{
	struct<13> Var0;
	struct<13> Var1;
	int iVar2;
	if (bParam1 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 1) && !__LIB_3__::func_999(PLAYER::PLAYER_ID(), bParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) != 229)
	{
		if (__LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			return 0;
		}
	}
	Var0 = { __LIB_1__::func_267(bParam1) };
	Var1 = { __LIB_1__::func_267(PLAYER::PLAYER_ID()) };
	iVar2 = __LIB_2__::func_180(&Var1);
	if (iVar2 == -1 || iVar2 != __LIB_2__::func_180(&Var0))
	{
		if (!NETWORK::NETWORK_IS_FRIEND(&Var0))
		{
			if (!__LIB_3__::func_999(PLAYER::PLAYER_ID(), bParam1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_163(var uParam0, bool bParam1)//Position - 0x16606C
{
	struct<13> Var0;
	struct<13> Var1;
	int iVar2;
	if (bParam1 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 1) && !__LIB_3__::func_999(PLAYER::PLAYER_ID(), bParam1))
	{
		return 0;
	}
	if (__LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 0;
	}
	Var0 = { __LIB_1__::func_267(bParam1) };
	Var1 = { __LIB_1__::func_267(PLAYER::PLAYER_ID()) };
	iVar2 = __LIB_2__::func_180(&Var1);
	if (iVar2 == -1 || iVar2 != __LIB_2__::func_180(&Var0))
	{
		if (!NETWORK::NETWORK_IS_FRIEND(&Var0))
		{
			if (!__LIB_3__::func_999(PLAYER::PLAYER_ID(), bParam1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_164(var uParam0, int iParam1, var uParam2)//Position - 0x17DA29
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (iParam1 == PLAYER::PLAYER_ID())
		{
			if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0) && Global_1957730 == 1)
			{
				if ((ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 2f || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
					VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
					{
						__LIB_3__::func_967(iVar0);
					}
					return 1;
				}
			}
		}
		else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(iParam1) && uParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_165(int iParam0, char* sParam1)//Position - 0x18D5DD
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

bool func_166(int iParam0, char* sParam1, int iParam2)//Position - 0x18D5F3
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

bool func_167(int iParam0, char* sParam1, char* sParam2)//Position - 0x18D60F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

bool func_168(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x18D62B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

bool func_169()//Position - 0x18DA60
{
	return BitTest(Global_1946250.f_3, 17);
}

int func_170(int iParam0)//Position - 0x18E269
{
	switch (iParam0)
	{
		case 0:
			return 78;
			break;
		case 1:
			return 94;
			break;
		case 2:
			return 311;
			break;
		case 3:
			return 321;
			break;
		case 4:
			return 339;
			break;
		case 5:
			return 357;
			break;
		case 6:
			return 367;
			break;
		case 7:
			return 411;
			break;
		case 8:
			return 415;
			break;
		case 9:
			return 419;
			break;
	}
	return -1;
}

int func_171(int iParam0)//Position - 0x18E30D
{
	if (iParam0 >= 8 && iParam0 <= 101)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x18F642
{
	if ((iParam0 >= 67 && iParam0 <= 71) || (iParam0 >= 307 && iParam0 <= 310))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0)//Position - 0x18F678
{
	if ((iParam0 >= 63 && iParam0 <= 66) || (iParam0 >= 284 && iParam0 <= 306))
	{
		return 1;
	}
	return 0;
}

int func_174(int iParam0)//Position - 0x18F6AE
{
	if ((iParam0 >= 59 && iParam0 <= 62) || (iParam0 >= 274 && iParam0 <= 283))
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0)//Position - 0x18F6E4
{
	if ((iParam0 >= 55 && iParam0 <= 58) || (iParam0 >= 259 && iParam0 <= 273))
	{
		return 1;
	}
	return 0;
}

int func_176(int iParam0)//Position - 0x18F71A
{
	if ((iParam0 >= 51 && iParam0 <= 54) || (iParam0 >= 248 && iParam0 <= 258))
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0)//Position - 0x18F74F
{
	if ((iParam0 >= 47 && iParam0 <= 50) || (iParam0 >= 234 && iParam0 <= 247))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)//Position - 0x18F783
{
	if ((iParam0 >= 43 && iParam0 <= 46) || (iParam0 >= 206 && iParam0 <= 233))
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0)//Position - 0x18F7B7
{
	if ((iParam0 >= 39 && iParam0 <= 42) || (iParam0 >= 193 && iParam0 <= 205))
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0)//Position - 0x18F7EB
{
	if ((iParam0 >= 35 && iParam0 <= 38) || (iParam0 >= 181 && iParam0 <= 192))
	{
		return 1;
	}
	return 0;
}

int func_181(int iParam0)//Position - 0x18F81F
{
	if ((iParam0 >= 31 && iParam0 <= 34) || (iParam0 >= 160 && iParam0 <= 180))
	{
		return 1;
	}
	return 0;
}

int func_182(int iParam0)//Position - 0x18F853
{
	if ((iParam0 >= 27 && iParam0 <= 30) || (iParam0 >= 139 && iParam0 <= 159))
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x18F887
{
	if ((iParam0 >= 23 && iParam0 <= 26) || (iParam0 >= 127 && iParam0 <= 138))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0)//Position - 0x18F8BB
{
	if ((iParam0 >= 72 && iParam0 <= 77) || (iParam0 >= 109 && iParam0 <= 126))
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0)//Position - 0x18F8EF
{
	if (iParam0 >= 311 && iParam0 <= 317)
	{
		return 2;
	}
	else if (iParam0 >= 318 && iParam0 <= 320)
	{
		return 1;
	}
	return 3;
}

int func_186(int iParam0)//Position - 0x18FB84
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		case 2:
			return 101;
			break;
		case 3:
			return 77;
			break;
		case 1:
			return 22;
			break;
		case 4:
			return -2;
			break;
	}
	return -1;
}

int func_187(int iParam0)//Position - 0x18FBDA
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 2:
			return 78;
			break;
		case 3:
			return 23;
			break;
		case 1:
			return 8;
			break;
		case 4:
			return -3;
			break;
	}
	return -1;
}

int func_188(int iParam0)//Position - 0x18FC70
{
	switch (iParam0)
	{
		case 2:
			return 432;
			break;
		case 3:
			return 310;
			break;
		case 1:
			return 108;
			break;
	}
	return -1;
}

int func_189(int iParam0)//Position - 0x18FCAC
{
	switch (iParam0)
	{
		case 2:
			return 311;
			break;
		case 3:
			return 109;
			break;
		case 1:
			return 102;
			break;
	}
	return -1;
}

int func_190(int iParam0)//Position - 0x1914B8
{
	if (iParam0 >= 0 && iParam0 <= 7)
	{
		return 1;
	}
	return 0;
}

var func_191(int iParam0, int iParam1)//Position - 0x191575
{
	var uVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= (iParam0 - 1))
	{
		MISC::SET_BIT(&uVar0, (iParam1 + iVar1));
		iVar1++;
	}
	return uVar0;
}

void func_192(int iParam0)//Position - 0x198E76
{
	Global_23150.f_6129 = iParam0;
}

bool func_193()//Position - 0x19A5A7
{
	return BitTest(Global_2714762.f_3, 6);
}

char* func_194(int iParam0)//Position - 0x19F7E3
{
	switch (iParam0)
	{
		case 0:
			return "VAULT_MENU_D_8" /* GXT: Choose to hide or show specific purchased Melee Weapons in your weapon wheel. */;
			break;
		case 1:
			return "VAULT_MENU_D_1" /* GXT: Choose to hide or show specific purchased Pistols in your weapon wheel. */;
			break;
		case 2:
			return "VAULT_MENU_D_3" /* GXT: Choose to hide or show specific purchased Machine Guns in your weapon wheel. */;
			break;
		case 3:
			return "VAULT_MENU_D_4" /* GXT: Choose to hide or show specific purchased Rifles in your weapon wheel. */;
			break;
		case 4:
			return "VAULT_MENU_D_2" /* GXT: Choose to hide or show specific purchased Shotguns in your weapon wheel. */;
			break;
		case 5:
			return "VAULT_MENU_D_5" /* GXT: Choose to hide or show specific purchased Sniper Rifles in your weapon wheel. */;
			break;
		case 6:
			return "VAULT_MENU_D_6" /* GXT: Choose to hide or show specific purchased Heavy Weapons in your weapon wheel. */;
			break;
		case 7:
			return "VAULT_MENU_D_7" /* GXT: Choose to hide or show specific purchased Explosives in your weapon wheel. */;
			break;
	}
	return "";
}

int func_195(var uParam0)//Position - 0x19F87D
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 8)
	{
		if (BitTest(uParam0, bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int func_196(int iParam0)//Position - 0x19FD70
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_137(7450, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1:
			if (__LIB_0__::func_137(7451, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 2:
			if (__LIB_0__::func_137(7452, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 3:
			if (__LIB_0__::func_137(7453, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 4:
			if (__LIB_0__::func_137(7454, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 5:
			if (__LIB_0__::func_137(7455, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 6:
			if (__LIB_0__::func_137(7456, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 7:
			if (__LIB_0__::func_137(7457, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_197(int iParam0, int iParam1)//Position - 0x19FF48
{
	if (iParam0 == 0)
	{
		if (iParam1 == joaat("WEAPON_KNUCKLE"))
		{
			return 1;
		}
	}
	else if (iParam0 == 1)
	{
		if (iParam1 == joaat("WEAPON_STUNGUN_MP"))
		{
			return 1;
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam1 == joaat("WEAPON_PETROLCAN"))
		{
			return 1;
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam1 == joaat("WEAPON_MUSKET"))
		{
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0, int iParam1)//Position - 0x19FFAA
{
	if (iParam0 == 2)
	{
		if (iParam1 == joaat("GROUP_SMG") || iParam1 == joaat("GROUP_MG"))
		{
			return 1;
		}
	}
	return 0;
}

int func_199()//Position - 0x1A008B
{
	if (__LIB_0__::func_228(7315, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x1A00A4
{
	if (__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_KNIFE"):
				return 200;
				break;
			case joaat("WEAPON_NIGHTSTICK"):
				return 207;
				break;
			case joaat("WEAPON_PISTOL"):
				return 258;
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				return 268;
				break;
			case joaat("WEAPON_APPISTOL"):
				return 288;
				break;
			case joaat("WEAPON_SNSPISTOL"):
				return 1748;
				break;
			case joaat("WEAPON_MICROSMG"):
				return 298;
				break;
			case joaat("WEAPON_SMG"):
				return 308;
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				return 327;
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				return 336;
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				return 10885;
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				return 345;
				break;
			case joaat("WEAPON_MG"):
				return 354;
				break;
			case joaat("WEAPON_COMBATMG"):
				return 363;
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				return 381;
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return 391;
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				return 409;
				break;
			case joaat("WEAPON_STUNGUN"):
				return 419;
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				return 428;
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				return 437;
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				return 446;
				break;
			case joaat("WEAPON_RPG"):
				return 453;
				break;
			case joaat("WEAPON_MINIGUN"):
				return 462;
				break;
			case joaat("WEAPON_GRENADE"):
				return 470;
				break;
			case joaat("WEAPON_SMOKEGRENADE"):
				return 479;
				break;
			case joaat("WEAPON_STICKYBOMB"):
				return 487;
				break;
			case joaat("WEAPON_MOLOTOV"):
				return 496;
				break;
			case joaat("WEAPON_PETROLCAN"):
				return 587;
				break;
			case joaat("WEAPON_PISTOL50"):
				return 278;
				break;
			case joaat("WEAPON_ASSAULTMG"):
				return 372;
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				return 318;
				break;
			case joaat("WEAPON_ASSAULTSNIPER"):
				return 440;
				break;
			case joaat("WEAPON_HAMMER"):
				return 235;
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				return 400;
				break;
			case joaat("WEAPON_BOTTLE"):
				return 1738;
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				return 10875;
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 10895;
				break;
			case joaat("WEAPON_GUSENBERG"):
				return 10905;
				break;
			case joaat("GADGET_PARACHUTE"):
				return 584;
				break;
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 11172;
				break;
			case joaat("WEAPON_DAGGER"):
				return 11162;
				break;
			case joaat("WEAPON_MUSKET"):
				return 11192;
				break;
			case joaat("WEAPON_FIREWORK"):
				return 11182;
				break;
			case joaat("WEAPON_HEAVYSHOTGUN"):
				return 11270;
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 11280;
				break;
			case joaat("WEAPON_PROXMINE"):
				return 11296;
				break;
			case joaat("WEAPON_HOMINGLAUNCHER"):
				return 11304;
				break;
			case joaat("WEAPON_COMBATPDW"):
				return 11314;
				break;
			case joaat("WEAPON_KNUCKLE"):
				return 11321;
				break;
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 11331;
				break;
			case joaat("WEAPON_HATCHET"):
				return 11288;
				break;
			case joaat("WEAPON_MACHETE"):
				return 11339;
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				return 11349;
				break;
			case joaat("WEAPON_DBSHOTGUN"):
				return 11377;
				break;
			case joaat("WEAPON_COMPACTRIFLE"):
				return 11367;
				break;
			case joaat("WEAPON_FLASHLIGHT"):
				return 11385;
				break;
			case joaat("WEAPON_GOLFCLUB"):
				return 249;
				break;
			case joaat("WEAPON_BAT"):
				return 242;
				break;
			case joaat("WEAPON_CROWBAR"):
				return 214;
				break;
			case joaat("WEAPON_AUTOSHOTGUN"):
				return 11456;
				break;
			case joaat("WEAPON_MINISMG"):
				return 11482;
				break;
			case joaat("WEAPON_COMPACTLAUNCHER"):
				return 11472;
				break;
			case joaat("WEAPON_BATTLEAXE"):
				return 11499;
				break;
			case joaat("WEAPON_PIPEBOMB"):
				return 11490;
				break;
			case joaat("WEAPON_POOLCUE"):
				return 11500;
				break;
			case joaat("WEAPON_WRENCH"):
				return 228;
				break;
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				return 327;
				break;
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				return 336;
				break;
			case joaat("WEAPON_COMBATMG_MK2"):
				return 363;
				break;
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				return 437;
				break;
			case joaat("WEAPON_PISTOL_MK2"):
				return 258;
				break;
			case joaat("WEAPON_SMG_MK2"):
				return 308;
				break;
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				return 11964;
				break;
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				return 11984;
				break;
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				return 11974;
				break;
			case joaat("WEAPON_REVOLVER_MK2"):
				return 11994;
				break;
			case joaat("WEAPON_SNSPISTOL_MK2"):
				return 12014;
				break;
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				return 12024;
				break;
			case joaat("WEAPON_RAYPISTOL"):
				return 12384;
				break;
			case joaat("WEAPON_RAYCARBINE"):
				return 12394;
				break;
			case joaat("WEAPON_RAYMINIGUN"):
				return 12404;
				break;
			case joaat("WEAPON_NAVYREVOLVER"):
				return 12835;
				break;
			case joaat("WEAPON_CERAMICPISTOL"):
				return 12825;
				break;
			case joaat("WEAPON_MILITARYRIFLE"):
				return 12995;
				break;
			case joaat("WEAPON_GADGETPISTOL"):
				return 12985;
				break;
			case joaat("WEAPON_COMBATSHOTGUN"):
				return 12975;
				break;
			case joaat("WEAPON_EMPLAUNCHER"):
				return 13026;
				break;
			case joaat("WEAPON_FERTILIZERCAN"):
				return 13039;
				break;
			case joaat("WEAPON_STUNGUN_MP"):
				return 13048;
				break;
			case joaat("WEAPON_METALDETECTOR"):
				return 13100;
				break;
			case joaat("WEAPON_TACTICALRIFLE"):
				return 13110;
				break;
			case joaat("WEAPON_PRECISIONRIFLE"):
				return 13120;
				break;
			}
	}
	return 487;
}

int func_201(int iParam0)//Position - 0x1A0D18
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 18;
			break;
		case joaat("WEAPON_GRENADE"):
			return 66;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 68;
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return 70;
			break;
		case joaat("WEAPON_MOLOTOV"):
			return 72;
			break;
		case joaat("WEAPON_PISTOL"):
			return 18;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return 40;
			break;
		case joaat("WEAPON_PISTOL50"):
			return 22;
			break;
		case joaat("WEAPON_APPISTOL"):
			return 24;
			break;
		case joaat("WEAPON_MICROSMG"):
			return 26;
			break;
		case joaat("WEAPON_SMG"):
			return 28;
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			return 30;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 32;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return 34;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 36;
			break;
		case joaat("WEAPON_MG"):
			return 38;
			break;
		case joaat("WEAPON_ASSAULTMG"):
			return 42;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 44;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 46;
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 48;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 50;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 54;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 56;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 60;
			break;
		case joaat("WEAPON_RPG"):
			return 62;
			break;
		case joaat("WEAPON_MINIGUN"):
			return 64;
			break;
		case joaat("WEAPON_STUNGUN"):
			return 52;
			break;
		case joaat("WEAPON_PETROLCAN"):
			return 75;
			break;
		case joaat("WEAPON_KNIFE"):
			return 2;
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			return 4;
			break;
		case joaat("WEAPON_HAMMER"):
			return 12;
			break;
		case joaat("WEAPON_BAT"):
			return 14;
			break;
		case joaat("WEAPON_CROWBAR"):
			return 6;
			break;
		case joaat("WEAPON_GOLFCLUB"):
			return 16;
			break;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 58;
			break;
		case joaat("WEAPON_COMBATMG"):
			return 40;
			break;
		case joaat("WEAPON_BOTTLE"):
			return 143;
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 349;
			break;
		case joaat("WEAPON_SNSPISTOL"):
			return 145;
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 347;
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 351;
			break;
		case joaat("WEAPON_GUSENBERG"):
			return 353;
			break;
		case joaat("WEAPON_DAGGER"):
			return 374;
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 376;
			break;
		case joaat("WEAPON_FIREWORK"):
			return 378;
			break;
		case joaat("WEAPON_MUSKET"):
			return 380;
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 392;
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 394;
			break;
		case joaat("WEAPON_PROXMINE"):
			return 398;
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 400;
			break;
		case joaat("WEAPON_COMBATPDW"):
			return 402;
			break;
		case joaat("WEAPON_KNUCKLE"):
			return 404;
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 406;
			break;
		case joaat("WEAPON_HATCHET"):
			return 396;
			break;
		case joaat("WEAPON_MACHETE"):
			return 408;
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 410;
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 413;
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			return 415;
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			return 417;
			break;
		case joaat("WEAPON_REVOLVER"):
			return 420;
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			return 422;
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 427;
			break;
		case joaat("WEAPON_MINISMG"):
			return 433;
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 431;
			break;
		case joaat("WEAPON_BATTLEAXE"):
			return 429;
			break;
		case joaat("WEAPON_PIPEBOMB"):
			return 435;
			break;
		case joaat("WEAPON_POOLCUE"):
			return 437;
			break;
		case joaat("WEAPON_WRENCH"):
			return 10;
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 32;
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 34;
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 40;
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 56;
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			return 18;
			break;
		case joaat("WEAPON_SMG_MK2"):
			return 28;
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 394;
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 44;
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 420;
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 145;
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 349;
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			return 461;
			break;
		case joaat("WEAPON_STONE_HATCHET"):
			return 467;
			break;
		case joaat("WEAPON_RAYPISTOL"):
			return 469;
			break;
		case joaat("WEAPON_RAYCARBINE"):
			return 469;
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			return 469;
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 477;
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 475;
			break;
		case joaat("WEAPON_HAZARDCAN"):
			return 479;
			break;
		case joaat("WEAPON_GADGETPISTOL"):
			return 483;
			break;
		case joaat("WEAPON_MILITARYRIFLE"):
			return 485;
			break;
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 481;
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			return 489;
			break;
		case joaat("WEAPON_EMPLAUNCHER"):
			return 487;
			break;
		case joaat("WEAPON_FERTILIZERCAN"):
			return 491;
			break;
		case joaat("WEAPON_STUNGUN_MP"):
			return 493;
			break;
		case joaat("WEAPON_METALDETECTOR"):
			return 495;
		case joaat("WEAPON_TACTICALRIFLE"):
			return 497;
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 499;
	}
	return 2;
}

int func_202(int iParam0)//Position - 0x1A12B6
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return joaat("WEAPON_PISTOL_MK2");
		case joaat("WEAPON_SMG"):
			return joaat("WEAPON_SMG_MK2");
		case joaat("WEAPON_ASSAULTRIFLE"):
			return joaat("WEAPON_ASSAULTRIFLE_MK2");
		case joaat("WEAPON_CARBINERIFLE"):
			return joaat("WEAPON_CARBINERIFLE_MK2");
		case joaat("WEAPON_COMBATMG"):
			return joaat("WEAPON_COMBATMG_MK2");
		case joaat("WEAPON_HEAVYSNIPER"):
			return joaat("WEAPON_HEAVYSNIPER_MK2");
		case joaat("WEAPON_BULLPUPRIFLE"):
			return joaat("WEAPON_BULLPUPRIFLE_MK2");
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return joaat("WEAPON_MARKSMANRIFLE_MK2");
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return joaat("WEAPON_PUMPSHOTGUN_MK2");
			break;
		case joaat("WEAPON_REVOLVER"):
			return joaat("WEAPON_REVOLVER_MK2");
			break;
		case joaat("WEAPON_SNSPISTOL"):
			return joaat("WEAPON_SNSPISTOL_MK2");
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			return joaat("WEAPON_SPECIALCARBINE_MK2");
			break;
	}
	return 0;
}

int func_203(int iParam0)//Position - 0x1A385B
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 1;
			break;
		case joaat("WEAPON_COMBATMG"):
			return 1;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 1;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return 1;
			break;
		case joaat("WEAPON_SMG"):
			return 1;
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_REVOLVER"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_SPECIALCARBINE"):
			return 1;
			break;
	}
	return 0;
}

int func_204(int iParam0)//Position - 0x1A38E4
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_205(int iParam0)//Position - 0x1A3943
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_FLARE"):
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_ASSAULTSMG"):
		case joaat("WEAPON_HEAVYRIFLE"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_ASSAULTMG"):
		case joaat("WEAPON_ASSAULTSNIPER"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_HEAVYPISTOL"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_VINTAGEPISTOL"):
		case joaat("WEAPON_GUSENBERG"):
		case joaat("WEAPON_FLAREGUN"):
		case joaat("WEAPON_FIREWORK"):
		case joaat("WEAPON_MUSKET"):
		case joaat("WEAPON_AMRIFLE"):
		case joaat("WEAPON_HEAVYSHOTGUN"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_HOMINGLAUNCHER"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_SNOWBALL"):
		case joaat("WEAPON_COMBATPDW"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_MARKSMANPISTOL"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_COMPACTRIFLE"):
		case joaat("WEAPON_DBSHOTGUN"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_MACHINEPISTOL"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_REVOLVER"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_PETROLCAN"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_AUTOSHOTGUN"):
		case joaat("WEAPON_MINISMG"):
		case joaat("WEAPON_COMPACTLAUNCHER"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_DOUBLEACTION"):
		case joaat("WEAPON_STONE_HATCHET"):
		case joaat("WEAPON_RAYPISTOL"):
		case joaat("WEAPON_RAYCARBINE"):
		case joaat("WEAPON_RAYMINIGUN"):
		case joaat("WEAPON_NAVYREVOLVER"):
		case joaat("WEAPON_CERAMICPISTOL"):
		case joaat("WEAPON_GADGETPISTOL"):
		case joaat("WEAPON_MILITARYRIFLE"):
		case joaat("WEAPON_COMBATSHOTGUN"):
		case joaat("WEAPON_EMPLAUNCHER"):
		case joaat("WEAPON_FERTILIZERCAN"):
		case joaat("WEAPON_STUNGUN_MP"):
		case joaat("WEAPON_TACTICALRIFLE"):
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 1;
			break;
	}
	return 0;
}

int func_206(int iParam0, bool bParam1)//Position - 0x1A3BA6
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return joaat("WEAPON_PISTOL_MK2");
			case 5:
				return joaat("WEAPON_SMG_MK2");
			case 8:
				return joaat("WEAPON_ASSAULTRIFLE_MK2");
			case 9:
				return joaat("WEAPON_CARBINERIFLE_MK2");
			case 13:
				return joaat("WEAPON_COMBATMG_MK2");
			case 21:
				return joaat("WEAPON_HEAVYSNIPER_MK2");
			default:
		}
		switch (iParam0)
		{
			case 22:
				return joaat("WEAPON_PUMPSHOTGUN_MK2");
			case 46:
				return joaat("WEAPON_SPECIALCARBINE_MK2");
			case 47:
				return joaat("WEAPON_SNSPISTOL_MK2");
			case 56:
				return joaat("WEAPON_MARKSMANRIFLE_MK2");
			case 70:
				return joaat("WEAPON_REVOLVER_MK2");
			case 48:
				return joaat("WEAPON_BULLPUPRIFLE_MK2");
			}
		default:
	}
	switch (iParam0)
	{
		case 34:
			return joaat("WEAPON_KNIFE");
			break;
		case 1:
			return joaat("WEAPON_PISTOL");
			break;
		case 2:
			return joaat("WEAPON_COMBATPISTOL");
			break;
		case 3:
			return joaat("WEAPON_APPISTOL");
			break;
		case 5:
			return joaat("WEAPON_SMG");
			break;
		case 7:
			return joaat("WEAPON_MICROSMG");
			break;
		case 8:
			return joaat("WEAPON_ASSAULTRIFLE");
			break;
		case 9:
			return joaat("WEAPON_CARBINERIFLE");
			break;
		case 11:
			return joaat("WEAPON_ADVANCEDRIFLE");
			break;
		case 12:
			return joaat("WEAPON_MG");
			break;
		case 13:
			return joaat("WEAPON_COMBATMG");
			break;
		case 15:
			return joaat("WEAPON_STICKYBOMB");
			break;
		case 16:
			return joaat("WEAPON_GRENADE");
			break;
		case 17:
			return joaat("WEAPON_SMOKEGRENADE");
			break;
		case 60:
			return joaat("WEAPON_PROXMINE");
			break;
		case 18:
			return joaat("WEAPON_REMOTESNIPER");
			break;
		case 20:
			return joaat("WEAPON_SNIPERRIFLE");
			break;
		case 21:
			return joaat("WEAPON_HEAVYSNIPER");
			break;
		case 56:
			return joaat("WEAPON_MARKSMANRIFLE");
			break;
		case 22:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 24:
			return joaat("WEAPON_ASSAULTSHOTGUN");
			break;
		case 25:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
			break;
		case 55:
			return joaat("WEAPON_HEAVYSHOTGUN");
			break;
		case 26:
			return joaat("WEAPON_GRENADELAUNCHER");
			break;
		case 27:
			return joaat("WEAPON_RPG");
			break;
		case 28:
			return joaat("WEAPON_MINIGUN");
			break;
		case 61:
			return joaat("WEAPON_HOMINGLAUNCHER");
			break;
		case 31:
			return joaat("WEAPON_STUNGUN");
			break;
		case 33:
			return joaat("GADGET_PARACHUTE");
			break;
		case 35:
			return joaat("WEAPON_NIGHTSTICK");
			break;
		case 43:
			return joaat("WEAPON_PETROLCAN");
			break;
		case 45:
			return joaat("WEAPON_BOTTLE");
			break;
		case 46:
			return joaat("WEAPON_SPECIALCARBINE");
			break;
		case 47:
			return joaat("WEAPON_SNSPISTOL");
			break;
		case 48:
			return joaat("WEAPON_BULLPUPRIFLE");
			break;
		case 49:
			return joaat("WEAPON_HEAVYPISTOL");
			break;
		case 23:
			return joaat("WEAPON_BULLPUPSHOTGUN");
			break;
		case 50:
			return joaat("WEAPON_GUSENBERG");
			break;
		case 51:
			return joaat("WEAPON_DAGGER");
			break;
		case 52:
			return joaat("WEAPON_VINTAGEPISTOL");
			break;
		case 57:
			return joaat("WEAPON_FLAREGUN");
			break;
		case 53:
			return joaat("WEAPON_MUSKET");
			break;
		case 54:
			return joaat("WEAPON_FIREWORK");
			break;
		case 58:
			return joaat("WEAPON_HATCHET");
			break;
		case 59:
			return joaat("WEAPON_RAILGUN");
			break;
		case 64:
			return joaat("WEAPON_COMBATPDW");
			break;
		case 62:
			return joaat("WEAPON_KNUCKLE");
			break;
		case 63:
			return joaat("WEAPON_MARKSMANPISTOL");
			break;
		case 65:
			return joaat("WEAPON_MACHETE");
			break;
		case 68:
			return joaat("WEAPON_MACHINEPISTOL");
			break;
		case 66:
			return joaat("WEAPON_DBSHOTGUN");
			break;
		case 67:
			return joaat("WEAPON_COMPACTRIFLE");
			break;
		case 69:
			return joaat("WEAPON_FLASHLIGHT");
			break;
		case 70:
			return joaat("WEAPON_REVOLVER");
			break;
		case 71:
			return joaat("WEAPON_SWITCHBLADE");
			break;
		case 36:
			return joaat("WEAPON_HAMMER");
			break;
		case 4:
			return joaat("WEAPON_PISTOL50");
			break;
		case 6:
			return joaat("WEAPON_ASSAULTSMG");
			break;
		case 41:
			return joaat("WEAPON_MOLOTOV");
			break;
		case 39:
			return joaat("WEAPON_GOLFCLUB");
			break;
		case 38:
			return joaat("WEAPON_CROWBAR");
			break;
		case 37:
			return joaat("WEAPON_BAT");
			break;
		case 72:
			return joaat("WEAPON_AUTOSHOTGUN");
			break;
		case 73:
			return joaat("WEAPON_MINISMG");
			break;
		case 74:
			return joaat("WEAPON_COMPACTLAUNCHER");
			break;
		case 75:
			return joaat("WEAPON_BATTLEAXE");
			break;
		case 76:
			return joaat("WEAPON_PIPEBOMB");
			break;
		case 77:
			return joaat("WEAPON_POOLCUE");
			break;
		case 78:
			return joaat("WEAPON_WRENCH");
			break;
		case 79:
			return joaat("WEAPON_DOUBLEACTION");
			break;
		case 80:
			return joaat("WEAPON_STONE_HATCHET");
			break;
		case 81:
			return joaat("WEAPON_RAYPISTOL");
			break;
		case 82:
			return joaat("WEAPON_RAYCARBINE");
			break;
		case 83:
			return joaat("WEAPON_RAYMINIGUN");
			break;
		case 84:
			return joaat("WEAPON_NAVYREVOLVER");
			break;
		case 85:
			return joaat("WEAPON_CERAMICPISTOL");
			break;
		case 86:
			return joaat("WEAPON_COMBATSHOTGUN");
			break;
		case 88:
			return joaat("WEAPON_MILITARYRIFLE");
			break;
		case 87:
			return joaat("WEAPON_GADGETPISTOL");
			break;
		case 10:
			return joaat("WEAPON_HEAVYRIFLE");
			break;
		case 89:
			return joaat("WEAPON_EMPLAUNCHER");
			break;
		case 90:
			return joaat("WEAPON_FERTILIZERCAN");
			break;
		case 91:
			return joaat("WEAPON_STUNGUN_MP");
			break;
		case 92:
			return joaat("WEAPON_METALDETECTOR");
			break;
		case 93:
			return joaat("WEAPON_TACTICALRIFLE");
			break;
		case 94:
			return joaat("WEAPON_PRECISIONRIFLE");
			break;
	}
	return joaat("WEAPON_UNARMED");
}

int func_207(int iParam0)//Position - 0x1A422E
{
	switch (iParam0)
	{
		case 0:
			return joaat("GROUP_MELEE");
			break;
		case 1:
			return joaat("GROUP_PISTOL");
			break;
		case 2:
			return joaat("GROUP_SMG");
			break;
		case 3:
			return joaat("GROUP_RIFLE");
			break;
		case 4:
			return joaat("GROUP_SHOTGUN");
			break;
		case 5:
			return joaat("GROUP_SNIPER");
			break;
		case 6:
			return joaat("GROUP_HEAVY");
			break;
		case 7:
			return joaat("GROUP_THROWN");
			break;
	}
	return 0;
}

int func_208(var uParam0)//Position - 0x1A42D4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_10[iVar0] == uParam0->f_19)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_209(int iParam0, int iParam1)//Position - 0x1A4B69
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam1)
			{
				case 1:
					return 626;
					break;
				case 2:
					return 627;
					break;
				case 3:
					return 628;
					break;
				case 4:
					return 629;
					break;
				case 5:
					return 630;
					break;
				case 6:
					return 631;
					break;
				case 7:
					return 632;
					break;
				case 8:
					return 633;
					break;
				case 9:
					return 634;
					break;
				case 10:
					return 635;
					break;
				case 11:
					return 636;
					break;
				case 12:
					return 637;
					break;
				case 13:
					return 638;
					break;
				case 14:
					return 639;
					break;
				case 15:
					return 640;
					break;
				case 16:
					return 641;
					break;
				case 17:
					return 642;
					break;
				case 18:
					return 643;
					break;
				case 19:
					return 644;
					break;
				case 20:
					return 645;
					break;
				case 21:
					return 646;
					break;
				case 22:
					return 647;
					break;
				case 23:
					return 648;
					break;
				case 24:
					return 649;
					break;
				case 25:
					return 650;
					break;
				case 26:
					return 651;
					break;
				case 27:
					return 652;
					break;
				case 28:
					return 653;
					break;
				case 29:
					return 654;
					break;
				case 30:
					return 655;
					break;
				case 31:
					return 656;
					break;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam1)
			{
				case 1:
					return 657;
					break;
				case 2:
					return 658;
					break;
				case 3:
					return 659;
					break;
				case 4:
					return 660;
					break;
				case 5:
					return 661;
					break;
				case 6:
					return 662;
					break;
				case 7:
					return 663;
					break;
				case 8:
					return 664;
					break;
				case 9:
					return 665;
					break;
				case 10:
					return 666;
					break;
				case 11:
					return 667;
					break;
				case 12:
					return 668;
					break;
				case 13:
					return 669;
					break;
				case 14:
					return 670;
					break;
				case 15:
					return 671;
					break;
				case 16:
					return 672;
					break;
				case 17:
					return 673;
					break;
				case 18:
					return 674;
					break;
				case 19:
					return 675;
					break;
				case 20:
					return 676;
					break;
				case 21:
					return 677;
					break;
				case 22:
					return 678;
					break;
				case 23:
					return 679;
					break;
				case 24:
					return 680;
					break;
				case 25:
					return 681;
					break;
				case 26:
					return 682;
					break;
				case 27:
					return 683;
					break;
				case 28:
					return 684;
					break;
				case 29:
					return 685;
					break;
				case 30:
					return 686;
					break;
				case 31:
					return 687;
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam1)
			{
				case 1:
					return 688;
					break;
				case 2:
					return 689;
					break;
				case 3:
					return 690;
					break;
				case 4:
					return 691;
					break;
				case 5:
					return 692;
					break;
				case 6:
					return 693;
					break;
				case 7:
					return 694;
					break;
				case 8:
					return 695;
					break;
				case 9:
					return 696;
					break;
				case 10:
					return 697;
					break;
				case 11:
					return 698;
					break;
				case 12:
					return 699;
					break;
				case 13:
					return 700;
					break;
				case 14:
					return 701;
					break;
				case 15:
					return 702;
					break;
				case 16:
					return 703;
					break;
				case 17:
					return 704;
					break;
				case 18:
					return 705;
					break;
				case 19:
					return 706;
					break;
				case 20:
					return 707;
					break;
				case 21:
					return 708;
					break;
				case 22:
					return 709;
					break;
				case 23:
					return 710;
					break;
				case 24:
					return 711;
					break;
				case 25:
					return 712;
					break;
				case 26:
					return 713;
					break;
				case 27:
					return 714;
					break;
				case 28:
					return 715;
					break;
				case 29:
					return 716;
					break;
				case 30:
					return 717;
					break;
				case 31:
					return 718;
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam1)
			{
				case 1:
					return 719;
					break;
				case 2:
					return 720;
					break;
				case 3:
					return 721;
					break;
				case 4:
					return 722;
					break;
				case 5:
					return 723;
					break;
				case 6:
					return 724;
					break;
				case 7:
					return 725;
					break;
				case 8:
					return 726;
					break;
				case 9:
					return 727;
					break;
				case 10:
					return 728;
					break;
				case 11:
					return 729;
					break;
				case 12:
					return 730;
					break;
				case 13:
					return 731;
					break;
				case 14:
					return 732;
					break;
				case 15:
					return 733;
					break;
				case 16:
					return 734;
					break;
				case 17:
					return 735;
					break;
				case 18:
					return 736;
					break;
				case 19:
					return 737;
					break;
				case 20:
					return 738;
					break;
				case 21:
					return 739;
					break;
				case 22:
					return 740;
					break;
				case 23:
					return 741;
					break;
				case 24:
					return 742;
					break;
				case 25:
					return 743;
					break;
				case 26:
					return 744;
					break;
				case 27:
					return 745;
					break;
				case 28:
					return 746;
					break;
				case 29:
					return 747;
					break;
				case 30:
					return 748;
					break;
				case 31:
					return 749;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam1)
			{
				case 1:
					return 750;
					break;
				case 2:
					return 751;
					break;
				case 3:
					return 752;
					break;
				case 4:
					return 753;
					break;
				case 5:
					return 754;
					break;
				case 6:
					return 755;
					break;
				case 7:
					return 756;
					break;
				case 8:
					return 757;
					break;
				case 9:
					return 758;
					break;
				case 10:
					return 759;
					break;
				case 11:
					return 760;
					break;
				case 12:
					return 761;
					break;
				case 13:
					return 762;
					break;
				case 14:
					return 763;
					break;
				case 15:
					return 764;
					break;
				case 16:
					return 765;
					break;
				case 17:
					return 766;
					break;
				case 18:
					return 767;
					break;
				case 19:
					return 768;
					break;
				case 20:
					return 769;
					break;
				case 21:
					return 770;
					break;
				case 22:
					return 771;
					break;
				case 23:
					return 772;
					break;
				case 24:
					return 773;
					break;
				case 25:
					return 774;
					break;
				case 26:
					return 775;
					break;
				case 27:
					return 776;
					break;
				case 28:
					return 777;
					break;
				case 29:
					return 778;
					break;
				case 30:
					return 779;
					break;
				case 31:
					return 780;
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam1)
			{
				case 1:
					return 781;
					break;
				case 2:
					return 782;
					break;
				case 3:
					return 783;
					break;
				case 4:
					return 784;
					break;
				case 5:
					return 785;
					break;
				case 6:
					return 786;
					break;
				case 7:
					return 787;
					break;
				case 8:
					return 788;
					break;
				case 9:
					return 789;
					break;
				case 10:
					return 790;
					break;
				case 11:
					return 791;
					break;
				case 12:
					return 792;
					break;
				case 13:
					return 793;
					break;
				case 14:
					return 794;
					break;
				case 15:
					return 795;
					break;
				case 16:
					return 796;
					break;
				case 17:
					return 797;
					break;
				case 18:
					return 798;
					break;
				case 19:
					return 799;
					break;
				case 20:
					return 800;
					break;
				case 21:
					return 801;
					break;
				case 22:
					return 802;
					break;
				case 23:
					return 803;
					break;
				case 24:
					return 804;
					break;
				case 25:
					return 805;
					break;
				case 26:
					return 806;
					break;
				case 27:
					return 807;
					break;
				case 28:
					return 808;
					break;
				case 29:
					return 809;
					break;
				case 30:
					return 810;
					break;
				case 31:
					return 811;
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam1)
			{
				case 1:
					return 998;
					break;
				case 2:
					return 999;
					break;
				case 3:
					return 1000;
					break;
				case 4:
					return 1001;
					break;
				case 5:
					return 1002;
					break;
				case 6:
					return 1003;
					break;
				case 7:
					return 1004;
					break;
				case 8:
					return 1005;
					break;
				case 9:
					return 1006;
					break;
				case 10:
					return 1007;
					break;
				case 11:
					return 1008;
					break;
				case 12:
					return 1009;
					break;
				case 13:
					return 1010;
					break;
				case 14:
					return 1011;
					break;
				case 15:
					return 1012;
					break;
				case 16:
					return 1013;
					break;
				case 17:
					return 1014;
					break;
				case 18:
					return 1015;
					break;
				case 19:
					return 1016;
					break;
				case 20:
					return 1017;
					break;
				case 21:
					return 1018;
					break;
				case 22:
					return 1019;
					break;
				case 23:
					return 1020;
					break;
				case 24:
					return 1021;
					break;
				case 25:
					return 1022;
					break;
				case 26:
					return 1023;
					break;
				case 27:
					return 1024;
					break;
				case 28:
					return 1025;
					break;
				case 29:
					return 1026;
					break;
				case 30:
					return 1027;
					break;
				case 31:
					return 1028;
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam1)
			{
				case 1:
					return 1029;
					break;
				case 2:
					return 1030;
					break;
				case 3:
					return 1031;
					break;
				case 4:
					return 1032;
					break;
				case 5:
					return 1033;
					break;
				case 6:
					return 1034;
					break;
				case 7:
					return 1035;
					break;
				case 8:
					return 1036;
					break;
				case 9:
					return 1037;
					break;
				case 10:
					return 1038;
					break;
				case 11:
					return 1039;
					break;
				case 12:
					return 1040;
					break;
				case 13:
					return 1041;
					break;
				case 14:
					return 1042;
					break;
				case 15:
					return 1043;
					break;
				case 16:
					return 1044;
					break;
				case 17:
					return 1045;
					break;
				case 18:
					return 1046;
					break;
				case 19:
					return 1047;
					break;
				case 20:
					return 1048;
					break;
				case 21:
					return 1049;
					break;
				case 22:
					return 1050;
					break;
				case 23:
					return 1051;
					break;
				case 24:
					return 1052;
					break;
				case 25:
					return 1053;
					break;
				case 26:
					return 1054;
					break;
				case 27:
					return 1055;
					break;
				case 28:
					return 1056;
					break;
				case 29:
					return 1057;
					break;
				case 30:
					return 1058;
					break;
				case 31:
					return 1059;
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam1)
			{
				case 1:
					return 1060;
					break;
				case 2:
					return 1061;
					break;
				case 3:
					return 1062;
					break;
				case 4:
					return 1063;
					break;
				case 5:
					return 1064;
					break;
				case 6:
					return 1065;
					break;
				case 7:
					return 1066;
					break;
				case 8:
					return 1067;
					break;
				case 9:
					return 1068;
					break;
				case 10:
					return 1069;
					break;
				case 11:
					return 1070;
					break;
				case 12:
					return 1071;
					break;
				case 13:
					return 1072;
					break;
				case 14:
					return 1073;
					break;
				case 15:
					return 1074;
					break;
				case 16:
					return 1075;
					break;
				case 17:
					return 1076;
					break;
				case 18:
					return 1077;
					break;
				case 19:
					return 1078;
					break;
				case 20:
					return 1079;
					break;
				case 21:
					return 1080;
					break;
				case 22:
					return 1081;
					break;
				case 23:
					return 1082;
					break;
				case 24:
					return 1083;
					break;
				case 25:
					return 1084;
					break;
				case 26:
					return 1085;
					break;
				case 27:
					return 1086;
					break;
				case 28:
					return 1087;
					break;
				case 29:
					return 1088;
					break;
				case 30:
					return 1089;
					break;
				case 31:
					return 1090;
					break;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam1)
			{
				case 1:
					return 1153;
					break;
				case 2:
					return 1154;
					break;
				case 3:
					return 1155;
					break;
				case 4:
					return 1156;
					break;
				case 5:
					return 1157;
					break;
				case 6:
					return 1158;
					break;
				case 7:
					return 1159;
					break;
				case 8:
					return 1160;
					break;
				case 9:
					return 1161;
					break;
				case 10:
					return 1162;
					break;
				case 11:
					return 1163;
					break;
				case 12:
					return 1164;
					break;
				case 13:
					return 1165;
					break;
				case 14:
					return 1166;
					break;
				case 15:
					return 1167;
					break;
				case 16:
					return 1168;
					break;
				case 17:
					return 1169;
					break;
				case 18:
					return 1170;
					break;
				case 19:
					return 1171;
					break;
				case 20:
					return 1172;
					break;
				case 21:
					return 1173;
					break;
				case 22:
					return 1174;
					break;
				case 23:
					return 1175;
					break;
				case 24:
					return 1176;
					break;
				case 25:
					return 1177;
					break;
				case 26:
					return 1178;
					break;
				case 27:
					return 1179;
					break;
				case 28:
					return 1180;
					break;
				case 29:
					return 1181;
					break;
				case 30:
					return 1182;
					break;
				case 31:
					return 1183;
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam1)
			{
				case 1:
					return 1122;
					break;
				case 2:
					return 1123;
					break;
				case 3:
					return 1124;
					break;
				case 4:
					return 1125;
					break;
				case 5:
					return 1126;
					break;
				case 6:
					return 1127;
					break;
				case 7:
					return 1128;
					break;
				case 8:
					return 1129;
					break;
				case 9:
					return 1130;
					break;
				case 10:
					return 1131;
					break;
				case 11:
					return 1132;
					break;
				case 12:
					return 1133;
					break;
				case 13:
					return 1134;
					break;
				case 14:
					return 1135;
					break;
				case 15:
					return 1136;
					break;
				case 16:
					return 1137;
					break;
				case 17:
					return 1138;
					break;
				case 18:
					return 1139;
					break;
				case 19:
					return 1140;
					break;
				case 20:
					return 1141;
					break;
				case 21:
					return 1142;
					break;
				case 22:
					return 1143;
					break;
				case 23:
					return 1144;
					break;
				case 24:
					return 1145;
					break;
				case 25:
					return 1146;
					break;
				case 26:
					return 1147;
					break;
				case 27:
					return 1148;
					break;
				case 28:
					return 1149;
					break;
				case 29:
					return 1150;
					break;
				case 30:
					return 1151;
					break;
				case 31:
					return 1152;
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam1)
			{
				case 1:
					return 1091;
					break;
				case 2:
					return 1092;
					break;
				case 3:
					return 1093;
					break;
				case 4:
					return 1094;
					break;
				case 5:
					return 1095;
					break;
				case 6:
					return 1096;
					break;
				case 7:
					return 1097;
					break;
				case 8:
					return 1098;
					break;
				case 9:
					return 1099;
					break;
				case 10:
					return 1100;
					break;
				case 11:
					return 1101;
					break;
				case 12:
					return 1102;
					break;
				case 13:
					return 1103;
					break;
				case 14:
					return 1104;
					break;
				case 15:
					return 1105;
					break;
				case 16:
					return 1106;
					break;
				case 17:
					return 1107;
					break;
				case 18:
					return 1108;
					break;
				case 19:
					return 1109;
					break;
				case 20:
					return 1110;
					break;
				case 21:
					return 1111;
					break;
				case 22:
					return 1112;
					break;
				case 23:
					return 1113;
					break;
				case 24:
					return 1114;
					break;
				case 25:
					return 1115;
					break;
				case 26:
					return 1116;
					break;
				case 27:
					return 1117;
					break;
				case 28:
					return 1118;
					break;
				case 29:
					return 1119;
					break;
				case 30:
					return 1120;
					break;
				case 31:
					return 1121;
					break;
			}
			break;
	}
	return 0;
}

int func_210(int iParam0)//Position - 0x1A7598
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_211(var uParam0)//Position - 0x1A7715
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 706;
				break;
			case 1:
				return 707;
				break;
			case 2:
				return 708;
				break;
			case 3:
				return 709;
				break;
			case 4:
				return 710;
				break;
			case 5:
				return 711;
				break;
			case 6:
				return 712;
				break;
			case 7:
				return 713;
				break;
			case 8:
				return 714;
				break;
			case 9:
				return 2056;
				break;
			case 10:
				return 2068;
				break;
			case 11:
				return 2095;
				break;
			case 12:
				return 2431;
				break;
			case 13:
				return 2951;
				break;
			case 14:
				return 5514;
				break;
			case 15:
				return 5518;
				break;
			case 16:
				return 5522;
				break;
			case 17:
				return 5526;
				break;
			case 18:
				return 5530;
				break;
			case 19:
				return 5534;
			case 20:
				return 5594;
			case 21:
				return 5598;
			case 22:
				return 5602;
			case 23:
				return 5606;
			case 24:
				return 5610;
			case 25:
				return 5614;
				break;
			case 26:
				return 5618;
				break;
			case 27:
				return 5639;
				break;
			case 28:
				return 5643;
				break;
			case 29:
				return 5647;
				break;
			case 30:
				return 5651;
				break;
			case 31:
				return 5655;
				break;
			case 32:
				return 5659;
				break;
			case 33:
				return 6469;
				break;
			case 34:
				return 6473;
				break;
			case 35:
				return 6477;
				break;
			case 36:
				return 6481;
				break;
			case 37:
				return 6485;
				break;
			case 38:
				return 6489;
				break;
			case 39:
				return 6493;
				break;
			case 40:
				return 10268;
				break;
			}
	}
	return 13122;
}

int func_212(int iParam0, int iParam1)//Position - 0x1A79B8
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 1:
					return 76;
					break;
				case 2:
					return 16;
					break;
				case 3:
					return 136;
					break;
				case 4:
					return 56;
					break;
				case 5:
					return 116;
					break;
				case 6:
					return 96;
					break;
				case 7:
					return 36;
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 1:
					return 77;
					break;
				case 2:
					return 17;
					break;
				case 3:
					return 137;
					break;
				case 4:
					return 57;
					break;
				case 5:
					return 117;
					break;
				case 6:
					return 97;
					break;
				case 7:
					return 37;
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 1:
					return 78;
					break;
				case 2:
					return 18;
					break;
				case 3:
					return 138;
					break;
				case 4:
					return 58;
					break;
				case 5:
					return 118;
					break;
				case 6:
					return 98;
					break;
				case 7:
					return 38;
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 1:
					return 79;
					break;
				case 2:
					return 19;
					break;
				case 3:
					return 139;
					break;
				case 4:
					return 59;
					break;
				case 5:
					return 119;
					break;
				case 6:
					return 99;
					break;
				case 7:
					return 39;
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 1:
					return 80;
					break;
				case 2:
					return 20;
					break;
				case 3:
					return 140;
					break;
				case 4:
					return 60;
					break;
				case 5:
					return 120;
					break;
				case 6:
					return 100;
					break;
				case 7:
					return 40;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 1:
					return 81;
					break;
				case 2:
					return 21;
					break;
				case 3:
					return 141;
					break;
				case 4:
					return 61;
					break;
				case 5:
					return 121;
					break;
				case 6:
					return 101;
					break;
				case 7:
					return 41;
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 1:
					return 82;
					break;
				case 2:
					return 22;
					break;
				case 3:
					return 142;
					break;
				case 4:
					return 62;
					break;
				case 5:
					return 122;
					break;
				case 6:
					return 102;
					break;
				case 7:
					return 42;
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 1:
					return 215;
					break;
				case 2:
					return 209;
					break;
				case 3:
					return 210;
					break;
				case 4:
					return 211;
					break;
				case 5:
					return 212;
					break;
				case 6:
					return 213;
					break;
				case 7:
					return 214;
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 1:
					return 208;
					break;
				case 2:
					return 202;
					break;
				case 3:
					return 203;
					break;
				case 4:
					return 204;
					break;
				case 5:
					return 205;
					break;
				case 6:
					return 206;
					break;
				case 7:
					return 207;
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 1:
					return 83;
					break;
				case 2:
					return 23;
					break;
				case 3:
					return 143;
					break;
				case 4:
					return 63;
					break;
				case 5:
					return 123;
					break;
				case 6:
					return 103;
					break;
				case 7:
					return 43;
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 1:
					return 84;
					break;
				case 2:
					return 24;
					break;
				case 3:
					return 144;
					break;
				case 4:
					return 64;
					break;
				case 5:
					return 124;
					break;
				case 6:
					return 104;
					break;
				case 7:
					return 44;
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 1:
					return 85;
					break;
				case 2:
					return 25;
					break;
				case 3:
					return 145;
					break;
				case 4:
					return 65;
					break;
				case 5:
					return 125;
					break;
				case 6:
					return 105;
					break;
				case 7:
					return 45;
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 1:
					return 87;
					break;
				case 2:
					return 27;
					break;
				case 3:
					return 147;
					break;
				case 4:
					return 67;
					break;
				case 5:
					return 127;
					break;
				case 6:
					return 107;
					break;
				case 7:
					return 47;
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 1:
					return 86;
					break;
				case 2:
					return 26;
					break;
				case 3:
					return 146;
					break;
				case 4:
					return 66;
					break;
				case 5:
					return 126;
					break;
				case 6:
					return 106;
					break;
				case 7:
					return 46;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 1:
					return 88;
					break;
				case 2:
					return 28;
					break;
				case 3:
					return 148;
					break;
				case 4:
					return 68;
					break;
				case 5:
					return 128;
					break;
				case 6:
					return 108;
					break;
				case 7:
					return 48;
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 1:
					return 91;
					break;
				case 2:
					return 31;
					break;
				case 3:
					return 151;
					break;
				case 4:
					return 71;
					break;
				case 5:
					return 131;
					break;
				case 6:
					return 111;
					break;
				case 7:
					return 51;
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 1:
					return 92;
					break;
				case 2:
					return 32;
					break;
				case 3:
					return 152;
					break;
				case 4:
					return 72;
					break;
				case 5:
					return 132;
					break;
				case 6:
					return 112;
					break;
				case 7:
					return 52;
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 1:
					return 93;
					break;
				case 2:
					return 33;
					break;
				case 3:
					return 153;
					break;
				case 4:
					return 73;
					break;
				case 5:
					return 133;
					break;
				case 6:
					return 113;
					break;
				case 7:
					return 53;
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 1:
					return 95;
					break;
				case 2:
					return 35;
					break;
				case 3:
					return 155;
					break;
				case 4:
					return 75;
					break;
				case 5:
					return 135;
					break;
				case 6:
					return 115;
					break;
				case 7:
					return 55;
					break;
			}
			break;
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 1:
					return 94;
					break;
				case 2:
					return 34;
					break;
				case 3:
					return 154;
					break;
				case 4:
					return 74;
					break;
				case 5:
					return 134;
					break;
				case 6:
					return 114;
					break;
				case 7:
					return 54;
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 1:
					return 194;
					break;
				case 2:
					return 173;
					break;
				case 3:
					return 174;
					break;
				case 4:
					return 175;
					break;
				case 5:
					return 176;
					break;
				case 6:
					return 177;
					break;
				case 7:
					return 178;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 1:
					return 192;
					break;
				case 2:
					return 161;
					break;
				case 3:
					return 162;
					break;
				case 4:
					return 163;
					break;
				case 5:
					return 164;
					break;
				case 6:
					return 165;
					break;
				case 7:
					return 166;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam1)
			{
				case 1:
					return 193;
					break;
				case 2:
					return 179;
					break;
				case 3:
					return 180;
					break;
				case 4:
					return 181;
					break;
				case 5:
					return 182;
					break;
				case 6:
					return 183;
					break;
				case 7:
					return 184;
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 1:
					return 201;
					break;
				case 2:
					return 195;
					break;
				case 3:
					return 196;
					break;
				case 4:
					return 197;
					break;
				case 5:
					return 198;
					break;
				case 6:
					return 199;
					break;
				case 7:
					return 200;
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 1:
					return 223;
					break;
				case 2:
					return 217;
					break;
				case 3:
					return 218;
					break;
				case 4:
					return 219;
					break;
				case 5:
					return 220;
					break;
				case 6:
					return 221;
					break;
				case 7:
					return 222;
					break;
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam1)
			{
				case 1:
					return 230;
					break;
				case 2:
					return 224;
					break;
				case 3:
					return 225;
					break;
				case 4:
					return 226;
					break;
				case 5:
					return 227;
					break;
				case 6:
					return 228;
					break;
				case 7:
					return 229;
					break;
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam1)
			{
				case 1:
					return 231;
					break;
				case 2:
					return 232;
					break;
				case 3:
					return 233;
					break;
				case 4:
					return 234;
					break;
				case 5:
					return 235;
					break;
				case 6:
					return 236;
					break;
				case 7:
					return 237;
					break;
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam1)
			{
				case 1:
					return 254;
					break;
				case 2:
					return 248;
					break;
				case 3:
					return 249;
					break;
				case 4:
					return 250;
					break;
				case 5:
					return 251;
					break;
				case 6:
					return 252;
					break;
				case 7:
					return 253;
					break;
			}
			break;
		case joaat("WEAPON_MUSKET"):
			switch (iParam1)
			{
				case 1:
					return 266;
					break;
				case 2:
					return 267;
					break;
				case 3:
					return 268;
					break;
				case 4:
					return 269;
					break;
				case 5:
					return 270;
					break;
				case 6:
					return 271;
					break;
				case 7:
					return 272;
					break;
			}
			break;
		case joaat("WEAPON_FIREWORK"):
			switch (iParam1)
			{
				case 1:
					return 273;
					break;
				case 2:
					return 274;
					break;
				case 3:
					return 275;
					break;
				case 4:
					return 276;
					break;
				case 5:
					return 277;
					break;
				case 6:
					return 278;
					break;
				case 7:
					return 279;
					break;
			}
			break;
		case joaat("WEAPON_FLAREGUN"):
			switch (iParam1)
			{
				case 1:
					return 280;
					break;
				case 2:
					return 281;
					break;
				case 3:
					return 282;
					break;
				case 4:
					return 283;
					break;
				case 5:
					return 284;
					break;
				case 6:
					return 285;
					break;
				case 7:
					return 286;
					break;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam1)
			{
				case 1:
					return 331;
					break;
				case 2:
					return 332;
					break;
				case 3:
					return 333;
					break;
				case 4:
					return 334;
					break;
				case 5:
					return 335;
					break;
				case 6:
					return 336;
					break;
				case 7:
					return 337;
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam1)
			{
				case 1:
					return 324;
					break;
				case 2:
					return 325;
					break;
				case 3:
					return 326;
					break;
				case 4:
					return 327;
					break;
				case 5:
					return 328;
					break;
				case 6:
					return 329;
					break;
				case 7:
					return 330;
					break;
			}
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			switch (iParam1)
			{
				case 1:
					return 365;
					break;
				case 2:
					return 366;
					break;
				case 3:
					return 367;
					break;
				case 4:
					return 368;
					break;
				case 5:
					return 369;
					break;
				case 6:
					return 370;
					break;
				case 7:
					return 371;
					break;
			}
			break;
		case joaat("WEAPON_RAILGUN"):
			switch (iParam1)
			{
				case 1:
					return 338;
					break;
				case 2:
					return 339;
					break;
				case 3:
					return 340;
					break;
				case 4:
					return 341;
					break;
				case 5:
					return 342;
					break;
				case 6:
					return 343;
					break;
				case 7:
					return 344;
					break;
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam1)
			{
				case 1:
					return 390;
					break;
				case 2:
					return 384;
					break;
				case 3:
					return 385;
					break;
				case 4:
					return 386;
					break;
				case 5:
					return 387;
					break;
				case 6:
					return 388;
					break;
				case 7:
					return 389;
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 1:
					return 377;
					break;
				case 2:
					return 378;
					break;
				case 3:
					return 379;
					break;
				case 4:
					return 380;
					break;
				case 5:
					return 381;
					break;
				case 6:
					return 382;
					break;
				case 7:
					return 383;
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 1:
					return 397;
					break;
				case 2:
					return 391;
					break;
				case 3:
					return 392;
					break;
				case 4:
					return 393;
					break;
				case 5:
					return 394;
					break;
				case 6:
					return 395;
					break;
				case 7:
					return 396;
					break;
			}
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			switch (iParam1)
			{
				case 1:
					return 404;
					break;
				case 2:
					return 398;
					break;
				case 3:
					return 399;
					break;
				case 4:
					return 400;
					break;
				case 5:
					return 401;
					break;
				case 6:
					return 402;
					break;
				case 7:
					return 403;
					break;
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam1)
			{
				case 1:
					return 411;
					break;
				case 2:
					return 405;
					break;
				case 3:
					return 406;
					break;
				case 4:
					return 407;
					break;
				case 5:
					return 408;
					break;
				case 6:
					return 409;
					break;
				case 7:
					return 410;
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 1:
					return 412;
					break;
				case 2:
					return 413;
					break;
				case 3:
					return 414;
					break;
				case 4:
					return 415;
					break;
				case 5:
					return 416;
					break;
				case 6:
					return 417;
					break;
				case 7:
					return 418;
					break;
			}
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			switch (iParam1)
			{
				case 1:
					return 419;
					break;
				case 2:
					return 420;
					break;
				case 3:
					return 421;
					break;
				case 4:
					return 422;
					break;
				case 5:
					return 423;
					break;
				case 6:
					return 424;
					break;
				case 7:
					return 425;
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 1:
					return 426;
					break;
				case 2:
					return 427;
					break;
				case 3:
					return 428;
					break;
				case 4:
					return 429;
					break;
				case 5:
					return 430;
					break;
				case 6:
					return 431;
					break;
				case 7:
					return 432;
					break;
			}
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			switch (iParam1)
			{
				case 1:
					return 433;
					break;
				case 2:
					return 434;
					break;
				case 3:
					return 435;
					break;
				case 4:
					return 436;
					break;
				case 5:
					return 437;
					break;
				case 6:
					return 438;
					break;
				case 7:
					return 439;
					break;
			}
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam1)
			{
				case 1:
					return 440;
					break;
				case 2:
					return 441;
					break;
				case 3:
					return 442;
					break;
				case 4:
					return 443;
					break;
				case 5:
					return 444;
					break;
				case 6:
					return 445;
					break;
				case 7:
					return 446;
					break;
				case 8:
					return 447;
					break;
				case 9:
					return 448;
					break;
				case 10:
					return 449;
					break;
				case 11:
					return 450;
					break;
				case 12:
					return 451;
					break;
				case 13:
					return 452;
					break;
				case 14:
					return 453;
					break;
				case 15:
					return 454;
					break;
				case 16:
					return 455;
					break;
				case 17:
					return 456;
					break;
				case 18:
					return 457;
					break;
				case 19:
					return 458;
					break;
				case 20:
					return 459;
					break;
				case 21:
					return 460;
					break;
				case 22:
					return 461;
					break;
				case 23:
					return 462;
					break;
				case 24:
					return 463;
					break;
				case 25:
					return 464;
					break;
				case 26:
					return 465;
					break;
				case 27:
					return 466;
					break;
				case 28:
					return 467;
					break;
				case 29:
					return 468;
					break;
				case 30:
					return 469;
					break;
				case 31:
					return 470;
					break;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam1)
			{
				case 1:
					return 471;
					break;
				case 2:
					return 472;
					break;
				case 3:
					return 473;
					break;
				case 4:
					return 474;
					break;
				case 5:
					return 475;
					break;
				case 6:
					return 476;
					break;
				case 7:
					return 477;
					break;
				case 8:
					return 478;
					break;
				case 9:
					return 479;
					break;
				case 10:
					return 480;
					break;
				case 11:
					return 481;
					break;
				case 12:
					return 482;
					break;
				case 13:
					return 483;
					break;
				case 14:
					return 484;
					break;
				case 15:
					return 485;
					break;
				case 16:
					return 486;
					break;
				case 17:
					return 487;
					break;
				case 18:
					return 488;
					break;
				case 19:
					return 489;
					break;
				case 20:
					return 490;
					break;
				case 21:
					return 491;
					break;
				case 22:
					return 492;
					break;
				case 23:
					return 493;
					break;
				case 24:
					return 494;
					break;
				case 25:
					return 495;
					break;
				case 26:
					return 496;
					break;
				case 27:
					return 497;
					break;
				case 28:
					return 498;
					break;
				case 29:
					return 499;
					break;
				case 30:
					return 500;
					break;
				case 31:
					return 501;
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam1)
			{
				case 1:
					return 502;
					break;
				case 2:
					return 503;
					break;
				case 3:
					return 504;
					break;
				case 4:
					return 505;
					break;
				case 5:
					return 506;
					break;
				case 6:
					return 507;
					break;
				case 7:
					return 508;
					break;
				case 8:
					return 509;
					break;
				case 9:
					return 510;
					break;
				case 10:
					return 511;
					break;
				case 11:
					return 512;
					break;
				case 12:
					return 513;
					break;
				case 13:
					return 514;
					break;
				case 14:
					return 515;
					break;
				case 15:
					return 516;
					break;
				case 16:
					return 517;
					break;
				case 17:
					return 518;
					break;
				case 18:
					return 519;
					break;
				case 19:
					return 520;
					break;
				case 20:
					return 521;
					break;
				case 21:
					return 522;
					break;
				case 22:
					return 523;
					break;
				case 23:
					return 524;
					break;
				case 24:
					return 525;
					break;
				case 25:
					return 526;
					break;
				case 26:
					return 527;
					break;
				case 27:
					return 528;
					break;
				case 28:
					return 529;
					break;
				case 29:
					return 530;
					break;
				case 30:
					return 531;
					break;
				case 31:
					return 532;
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam1)
			{
				case 1:
					return 533;
					break;
				case 2:
					return 534;
					break;
				case 3:
					return 535;
					break;
				case 4:
					return 536;
					break;
				case 5:
					return 537;
					break;
				case 6:
					return 538;
					break;
				case 7:
					return 539;
					break;
				case 8:
					return 540;
					break;
				case 9:
					return 541;
					break;
				case 10:
					return 542;
					break;
				case 11:
					return 543;
					break;
				case 12:
					return 544;
					break;
				case 13:
					return 545;
					break;
				case 14:
					return 546;
					break;
				case 15:
					return 547;
					break;
				case 16:
					return 548;
					break;
				case 17:
					return 549;
					break;
				case 18:
					return 550;
					break;
				case 19:
					return 551;
					break;
				case 20:
					return 552;
					break;
				case 21:
					return 553;
					break;
				case 22:
					return 554;
					break;
				case 23:
					return 555;
					break;
				case 24:
					return 556;
					break;
				case 25:
					return 557;
					break;
				case 26:
					return 558;
					break;
				case 27:
					return 559;
					break;
				case 28:
					return 560;
					break;
				case 29:
					return 561;
					break;
				case 30:
					return 562;
					break;
				case 31:
					return 563;
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam1)
			{
				case 1:
					return 564;
					break;
				case 2:
					return 565;
					break;
				case 3:
					return 566;
					break;
				case 4:
					return 567;
					break;
				case 5:
					return 568;
					break;
				case 6:
					return 569;
					break;
				case 7:
					return 570;
					break;
				case 8:
					return 571;
					break;
				case 9:
					return 572;
					break;
				case 10:
					return 573;
					break;
				case 11:
					return 574;
					break;
				case 12:
					return 575;
					break;
				case 13:
					return 576;
					break;
				case 14:
					return 577;
					break;
				case 15:
					return 578;
					break;
				case 16:
					return 579;
					break;
				case 17:
					return 580;
					break;
				case 18:
					return 581;
					break;
				case 19:
					return 582;
					break;
				case 20:
					return 583;
					break;
				case 21:
					return 584;
					break;
				case 22:
					return 585;
					break;
				case 23:
					return 586;
					break;
				case 24:
					return 587;
					break;
				case 25:
					return 588;
					break;
				case 26:
					return 589;
					break;
				case 27:
					return 590;
					break;
				case 28:
					return 591;
					break;
				case 29:
					return 592;
					break;
				case 30:
					return 593;
					break;
				case 31:
					return 594;
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam1)
			{
				case 1:
					return 595;
					break;
				case 2:
					return 596;
					break;
				case 3:
					return 597;
					break;
				case 4:
					return 598;
					break;
				case 5:
					return 599;
					break;
				case 6:
					return 600;
					break;
				case 7:
					return 601;
					break;
				case 8:
					return 602;
					break;
				case 9:
					return 603;
					break;
				case 10:
					return 604;
					break;
				case 11:
					return 605;
					break;
				case 12:
					return 606;
					break;
				case 13:
					return 607;
					break;
				case 14:
					return 608;
					break;
				case 15:
					return 609;
					break;
				case 16:
					return 610;
					break;
				case 17:
					return 611;
					break;
				case 18:
					return 612;
					break;
				case 19:
					return 613;
					break;
				case 20:
					return 614;
					break;
				case 21:
					return 615;
					break;
				case 22:
					return 616;
					break;
				case 23:
					return 617;
					break;
				case 24:
					return 618;
					break;
				case 25:
					return 619;
					break;
				case 26:
					return 620;
					break;
				case 27:
					return 621;
					break;
				case 28:
					return 622;
					break;
				case 29:
					return 623;
					break;
				case 30:
					return 624;
					break;
				case 31:
					return 625;
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam1)
			{
				case 1:
					return 812;
					break;
				case 2:
					return 813;
					break;
				case 3:
					return 814;
					break;
				case 4:
					return 815;
					break;
				case 5:
					return 816;
					break;
				case 6:
					return 817;
					break;
				case 7:
					return 818;
					break;
				case 8:
					return 819;
					break;
				case 9:
					return 820;
					break;
				case 10:
					return 821;
					break;
				case 11:
					return 822;
					break;
				case 12:
					return 823;
					break;
				case 13:
					return 824;
					break;
				case 14:
					return 825;
					break;
				case 15:
					return 826;
					break;
				case 16:
					return 827;
					break;
				case 17:
					return 828;
					break;
				case 18:
					return 829;
					break;
				case 19:
					return 830;
					break;
				case 20:
					return 831;
					break;
				case 21:
					return 832;
					break;
				case 22:
					return 833;
					break;
				case 23:
					return 834;
					break;
				case 24:
					return 835;
					break;
				case 25:
					return 836;
					break;
				case 26:
					return 837;
					break;
				case 27:
					return 838;
					break;
				case 28:
					return 839;
					break;
				case 29:
					return 840;
					break;
				case 30:
					return 841;
					break;
				case 31:
					return 842;
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam1)
			{
				case 1:
					return 843;
					break;
				case 2:
					return 844;
					break;
				case 3:
					return 845;
					break;
				case 4:
					return 846;
					break;
				case 5:
					return 847;
					break;
				case 6:
					return 848;
					break;
				case 7:
					return 849;
					break;
				case 8:
					return 850;
					break;
				case 9:
					return 851;
					break;
				case 10:
					return 852;
					break;
				case 11:
					return 853;
					break;
				case 12:
					return 854;
					break;
				case 13:
					return 855;
					break;
				case 14:
					return 856;
					break;
				case 15:
					return 857;
					break;
				case 16:
					return 858;
					break;
				case 17:
					return 859;
					break;
				case 18:
					return 860;
					break;
				case 19:
					return 861;
					break;
				case 20:
					return 862;
					break;
				case 21:
					return 863;
					break;
				case 22:
					return 864;
					break;
				case 23:
					return 865;
					break;
				case 24:
					return 866;
					break;
				case 25:
					return 867;
					break;
				case 26:
					return 868;
					break;
				case 27:
					return 869;
					break;
				case 28:
					return 870;
					break;
				case 29:
					return 871;
					break;
				case 30:
					return 872;
					break;
				case 31:
					return 873;
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam1)
			{
				case 1:
					return 874;
					break;
				case 2:
					return 875;
					break;
				case 3:
					return 876;
					break;
				case 4:
					return 877;
					break;
				case 5:
					return 878;
					break;
				case 6:
					return 879;
					break;
				case 7:
					return 880;
					break;
				case 8:
					return 881;
					break;
				case 9:
					return 882;
					break;
				case 10:
					return 883;
					break;
				case 11:
					return 884;
					break;
				case 12:
					return 885;
					break;
				case 13:
					return 886;
					break;
				case 14:
					return 887;
					break;
				case 15:
					return 888;
					break;
				case 16:
					return 889;
					break;
				case 17:
					return 890;
					break;
				case 18:
					return 891;
					break;
				case 19:
					return 892;
					break;
				case 20:
					return 893;
					break;
				case 21:
					return 894;
					break;
				case 22:
					return 895;
					break;
				case 23:
					return 896;
					break;
				case 24:
					return 897;
					break;
				case 25:
					return 898;
					break;
				case 26:
					return 899;
					break;
				case 27:
					return 900;
					break;
				case 28:
					return 901;
					break;
				case 29:
					return 902;
					break;
				case 30:
					return 903;
					break;
				case 31:
					return 904;
					break;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam1)
			{
				case 1:
					return 905;
					break;
				case 2:
					return 906;
					break;
				case 3:
					return 907;
					break;
				case 4:
					return 908;
					break;
				case 5:
					return 909;
					break;
				case 6:
					return 910;
					break;
				case 7:
					return 911;
					break;
				case 8:
					return 912;
					break;
				case 9:
					return 913;
					break;
				case 10:
					return 914;
					break;
				case 11:
					return 915;
					break;
				case 12:
					return 916;
					break;
				case 13:
					return 917;
					break;
				case 14:
					return 918;
					break;
				case 15:
					return 919;
					break;
				case 16:
					return 920;
					break;
				case 17:
					return 921;
					break;
				case 18:
					return 922;
					break;
				case 19:
					return 923;
					break;
				case 20:
					return 924;
					break;
				case 21:
					return 925;
					break;
				case 22:
					return 926;
					break;
				case 23:
					return 927;
					break;
				case 24:
					return 928;
					break;
				case 25:
					return 929;
					break;
				case 26:
					return 930;
					break;
				case 27:
					return 931;
					break;
				case 28:
					return 932;
					break;
				case 29:
					return 933;
					break;
				case 30:
					return 934;
					break;
				case 31:
					return 935;
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam1)
			{
				case 1:
					return 936;
					break;
				case 2:
					return 937;
					break;
				case 3:
					return 938;
					break;
				case 4:
					return 939;
					break;
				case 5:
					return 940;
					break;
				case 6:
					return 941;
					break;
				case 7:
					return 942;
					break;
				case 8:
					return 943;
					break;
				case 9:
					return 944;
					break;
				case 10:
					return 945;
					break;
				case 11:
					return 946;
					break;
				case 12:
					return 947;
					break;
				case 13:
					return 948;
					break;
				case 14:
					return 949;
					break;
				case 15:
					return 950;
					break;
				case 16:
					return 951;
					break;
				case 17:
					return 952;
					break;
				case 18:
					return 953;
					break;
				case 19:
					return 954;
					break;
				case 20:
					return 955;
					break;
				case 21:
					return 956;
					break;
				case 22:
					return 957;
					break;
				case 23:
					return 958;
					break;
				case 24:
					return 959;
					break;
				case 25:
					return 960;
					break;
				case 26:
					return 961;
					break;
				case 27:
					return 962;
					break;
				case 28:
					return 963;
					break;
				case 29:
					return 964;
					break;
				case 30:
					return 965;
					break;
				case 31:
					return 966;
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam1)
			{
				case 1:
					return 967;
					break;
				case 2:
					return 968;
					break;
				case 3:
					return 969;
					break;
				case 4:
					return 970;
					break;
				case 5:
					return 971;
					break;
				case 6:
					return 972;
					break;
				case 7:
					return 973;
					break;
				case 8:
					return 974;
					break;
				case 9:
					return 975;
					break;
				case 10:
					return 976;
					break;
				case 11:
					return 977;
					break;
				case 12:
					return 978;
					break;
				case 13:
					return 979;
					break;
				case 14:
					return 980;
					break;
				case 15:
					return 981;
					break;
				case 16:
					return 982;
					break;
				case 17:
					return 983;
					break;
				case 18:
					return 984;
					break;
				case 19:
					return 985;
					break;
				case 20:
					return 986;
					break;
				case 21:
					return 987;
					break;
				case 22:
					return 988;
					break;
				case 23:
					return 989;
					break;
				case 24:
					return 990;
					break;
				case 25:
					return 991;
					break;
				case 26:
					return 992;
					break;
				case 27:
					return 993;
					break;
				case 28:
					return 994;
					break;
				case 29:
					return 995;
					break;
				case 30:
					return 996;
					break;
				case 31:
					return 997;
					break;
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam1)
			{
				case 1:
					return 1186;
					break;
				case 2:
					return 1187;
					break;
				case 3:
					return 1188;
					break;
				case 4:
					return 1189;
					break;
				case 5:
					return 1190;
					break;
				case 6:
					return 1191;
					break;
				case 7:
					return 1192;
					break;
			}
			break;
		case joaat("WEAPON_RAYCARBINE"):
			switch (iParam1)
			{
				case 1:
					return 1193;
					break;
				case 2:
					return 1194;
					break;
				case 3:
					return 1195;
					break;
				case 4:
					return 1196;
					break;
				case 5:
					return 1197;
					break;
				case 6:
					return 1198;
					break;
				case 7:
					return 1199;
					break;
			}
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			switch (iParam1)
			{
				case 1:
					return 1200;
					break;
				case 2:
					return 1201;
					break;
				case 3:
					return 1202;
					break;
				case 4:
					return 1203;
					break;
				case 5:
					return 1204;
					break;
				case 6:
					return 1205;
					break;
				case 7:
					return 1206;
					break;
			}
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam1)
			{
				case 1:
					return 1207;
					break;
				case 2:
					return 1208;
					break;
				case 3:
					return 1209;
					break;
				case 4:
					return 1210;
					break;
				case 5:
					return 1211;
					break;
				case 6:
					return 1212;
					break;
				case 7:
					return 1213;
					break;
			}
			break;
		case joaat("WEAPON_COMBATSHOTGUN"):
			switch (iParam1)
			{
				case 1:
					return 1221;
					break;
				case 2:
					return 1222;
					break;
				case 3:
					return 1223;
					break;
				case 4:
					return 1224;
					break;
				case 5:
					return 1225;
					break;
				case 6:
					return 1226;
					break;
				case 7:
					return 1227;
					break;
			}
			break;
		case joaat("WEAPON_MILITARYRIFLE"):
			switch (iParam1)
			{
				case 1:
					return 1214;
					break;
				case 2:
					return 1215;
					break;
				case 3:
					return 1216;
					break;
				case 4:
					return 1217;
					break;
				case 5:
					return 1218;
					break;
				case 6:
					return 1219;
					break;
				case 7:
					return 1220;
					break;
			}
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam1)
			{
				case 1:
					return 185;
					break;
				case 2:
					return 186;
					break;
				case 3:
					return 187;
					break;
				case 4:
					return 188;
					break;
				case 5:
					return 189;
					break;
				case 6:
					return 190;
					break;
				case 7:
					return 191;
					break;
			}
			break;
		case joaat("WEAPON_EMPLAUNCHER"):
			switch (iParam1)
			{
				case 1:
					return 1237;
					break;
				case 2:
					return 1238;
					break;
				case 3:
					return 1239;
					break;
				case 4:
					return 1240;
					break;
				case 5:
					return 1241;
					break;
				case 6:
					return 1242;
					break;
				case 7:
					return 1243;
					break;
			}
			break;
		case joaat("WEAPON_STUNGUN_MP"):
			switch (iParam1)
			{
				case 1:
					return 1244;
					break;
				case 2:
					return 1245;
					break;
				case 3:
					return 1246;
					break;
				case 4:
					return 1247;
					break;
				case 5:
					return 1248;
					break;
				case 6:
					return 1249;
					break;
				case 7:
					return 1250;
					break;
			}
			break;
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam1)
			{
				case 1:
					return 1254;
					break;
				case 2:
					return 1255;
					break;
				case 3:
					return 1256;
					break;
				case 4:
					return 1257;
					break;
				case 5:
					return 1258;
					break;
				case 6:
					return 1259;
					break;
				case 7:
					return 1260;
					break;
			}
			break;
		case joaat("WEAPON_PRECISIONRIFLE"):
			switch (iParam1)
			{
				case 1:
					return 1261;
					break;
				case 2:
					return 1262;
					break;
				case 3:
					return 1263;
					break;
				case 4:
					return 1264;
					break;
				case 5:
					return 1265;
					break;
				case 6:
					return 1266;
					break;
				case 7:
					return 1267;
					break;
			}
			break;
	}
	return 0;
}

bool func_213(var uParam0, int iParam1, int iParam2)//Position - 0x1AAABD
{
	int iVar0;
	int iVar1;
	int iVar2;
	var* uVar3;
	struct<4> Var4;
	*uParam0 = 0;
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO");
					break;
				case 1:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_02");
					break;
				case 2:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_03");
					break;
				case 3:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_04");
					break;
				case 4:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_05");
					break;
				case 5:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_06");
					break;
				case 6:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_07");
					break;
				case 7:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_08");
					break;
				case 8:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_09");
					break;
				case 9:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_10");
					break;
				case 10:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO");
					break;
				case 1:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02");
					break;
				case 2:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03");
					break;
				case 3:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04");
					break;
				case 4:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05");
					break;
				case 5:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06");
					break;
				case 6:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07");
					break;
				case 7:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08");
					break;
				case 8:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09");
					break;
				case 9:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10");
					break;
				case 10:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO");
					break;
				case 1:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02");
					break;
				case 2:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03");
					break;
				case 3:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04");
					break;
				case 4:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05");
					break;
				case 5:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06");
					break;
				case 6:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07");
					break;
				case 7:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08");
					break;
				case 8:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09");
					break;
				case 9:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10");
					break;
				case 10:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO");
					break;
				case 1:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_02");
					break;
				case 2:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_03");
					break;
				case 3:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_04");
					break;
				case 4:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_05");
					break;
				case 5:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_06");
					break;
				case 6:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_07");
					break;
				case 7:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_08");
					break;
				case 8:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_09");
					break;
				case 9:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_10");
					break;
				case 10:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO");
					break;
				case 1:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02");
					break;
				case 2:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03");
					break;
				case 3:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04");
					break;
				case 4:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05");
					break;
				case 5:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06");
					break;
				case 6:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07");
					break;
				case 7:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08");
					break;
				case 8:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09");
					break;
				case 9:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10");
					break;
				case 10:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01");
					break;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO");
					break;
				case 1:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_02");
					break;
				case 2:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_03");
					break;
				case 3:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_04");
					break;
				case 4:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_05");
					break;
				case 5:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_06");
					break;
				case 6:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_07");
					break;
				case 7:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_08");
					break;
				case 8:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_09");
					break;
				case 9:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_10");
					break;
				case 10:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_IND_01");
					break;
			}
			break;
		default:
			iVar0 = __LIB_0__::func_260(iParam1, &uVar3);
			if (iVar0 != -1)
			{
				iVar1 = 0;
				while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var4))
					{
						if (!__LIB_0__::func_259(Var4.f_3))
						{
							if (iVar2 == iParam2)
							{
								*uParam0 = Var4.f_3;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
			}
			break;
	}
	return *uParam0 != 0;
}

int func_214(int iParam0)//Position - 0x1AAFEE
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_215(int iParam0)//Position - 0x1AB22B
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 7387;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return 7388;
			break;
		case joaat("WEAPON_APPISTOL"):
			return 7389;
			break;
		case joaat("WEAPON_SMG"):
			return 7390;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 7391;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return 7392;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 7393;
			break;
		case joaat("WEAPON_MG"):
			return 7394;
			break;
		case joaat("WEAPON_COMBATMG"):
			return 7395;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 7396;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 7397;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 7398;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 7399;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 7400;
			break;
		case joaat("WEAPON_RPG"):
			return 7401;
			break;
		case joaat("WEAPON_MINIGUN"):
			return 7402;
			break;
		case joaat("WEAPON_GRENADE"):
			return 7403;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 7404;
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return 7405;
			break;
		case joaat("WEAPON_MOLOTOV"):
			return 7406;
			break;
		case joaat("WEAPON_FLARE"):
			return 7407;
			break;
		case joaat("WEAPON_KNIFE"):
			return 7408;
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			return 7409;
			break;
		case joaat("WEAPON_HAMMER"):
			return 7410;
			break;
		case joaat("WEAPON_PISTOL50"):
			return 7411;
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			return 7412;
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			return 7413;
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 7414;
			break;
		case joaat("WEAPON_ASSAULTMG"):
			return 7415;
			break;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 7416;
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 7417;
			break;
		case joaat("WEAPON_BOTTLE"):
			return 7418;
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 7419;
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 7420;
			break;
		case joaat("WEAPON_SNSPISTOL"):
			return 7421;
			break;
		case joaat("WEAPON_DAGGER"):
			return 7422;
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 7423;
			break;
		case joaat("WEAPON_GUSENBERG"):
			return 7424;
			break;
		case joaat("WEAPON_FLAREGUN"):
			return 7425;
			break;
		case joaat("WEAPON_FIREWORK"):
			return 7426;
			break;
		case joaat("WEAPON_MUSKET"):
			return 7427;
			break;
		case joaat("WEAPON_AMRIFLE"):
			return 7428;
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 7429;
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 7430;
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 7431;
			break;
		case joaat("WEAPON_PROXMINE"):
			return 7432;
			break;
		case joaat("WEAPON_SNOWBALL"):
			return 7433;
			break;
		case joaat("WEAPON_COMBATPDW"):
			return 7434;
			break;
		case joaat("WEAPON_KNUCKLE"):
			return 7435;
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 7436;
			break;
		case joaat("WEAPON_HATCHET"):
			return 7437;
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 7438;
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			return 7439;
			break;
		case joaat("WEAPON_MACHETE"):
			return 7440;
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 7441;
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			return 7442;
			break;
		case joaat("WEAPON_REVOLVER"):
			return 7443;
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			return 7444;
			break;
		case joaat("WEAPON_MICROSMG"):
			return 7445;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 7446;
			break;
		case joaat("WEAPON_PETROLCAN"):
			return 7447;
			break;
		case joaat("WEAPON_GOLFCLUB"):
			return 7448;
			break;
		case joaat("WEAPON_BAT"):
			return 7449;
			break;
		case joaat("WEAPON_CROWBAR"):
			return 7466;
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 7621;
			break;
		case joaat("WEAPON_BATTLEAXE"):
			return 7622;
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 7623;
			break;
		case joaat("WEAPON_MINISMG"):
			return 7624;
			break;
		case joaat("WEAPON_PIPEBOMB"):
			return 7625;
			break;
		case joaat("WEAPON_POOLCUE"):
			return 7626;
			break;
		case joaat("WEAPON_WRENCH"):
			return 7627;
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			return 15441;
			break;
		case joaat("WEAPON_SMG_MK2"):
			return 15442;
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 15443;
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 15444;
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 15445;
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 15446;
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 18100;
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 18101;
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 18102;
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 18103;
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 18104;
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 18105;
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			return 15995;
			break;
		case joaat("WEAPON_STONE_HATCHET"):
			return 15548;
			break;
		case joaat("WEAPON_RAYPISTOL"):
			return 25241;
			break;
		case joaat("WEAPON_RAYCARBINE"):
			return 25242;
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			return 25243;
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 25518;
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 25519;
			break;
		case joaat("WEAPON_MILITARYRIFLE"):
			return 30321;
			break;
		case joaat("WEAPON_GADGETPISTOL"):
			return 30322;
			break;
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 30323;
			break;
		case joaat("WEAPON_EMPLAUNCHER"):
			return 28259;
			break;
		case joaat("WEAPON_FERTILIZERCAN"):
			return 28260;
			break;
		case joaat("WEAPON_STUNGUN_MP"):
			return 28261;
			break;
		case joaat("WEAPON_TACTICALRIFLE"):
			return 34376;
			break;
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 34377;
			break;
	}
	return 7386;
}

void func_216(int iParam0, bool bParam1)//Position - 0x1AC73E
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_0__::func_521(7450, 1, -1);
			}
			else
			{
				__LIB_0__::func_521(7450, 0, -1);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_0__::func_521(7451, 1, -1);
			}
			else
			{
				__LIB_0__::func_521(7451, 0, -1);
			}
			break;
		case 2:
			if (bParam1)
			{
				__LIB_0__::func_521(7452, 1, -1);
			}
			else
			{
				__LIB_0__::func_521(7452, 0, -1);
			}
			break;
		case 3:
			if (bParam1)
			{
				__LIB_0__::func_521(7453, 1, -1);
			}
			else
			{
				__LIB_0__::func_521(7453, 0, -1);
			}
			break;
		case 4:
			if (bParam1)
			{
				__LIB_0__::func_521(7454, 1, -1);
			}
			else
			{
				__LIB_0__::func_521(7454, 0, -1);
			}
			break;
		case 5:
			if (bParam1)
			{
				__LIB_0__::func_521(7455, 1, -1);
			}
			else
			{
				__LIB_0__::func_521(7455, 0, -1);
			}
			break;
		case 6:
			if (bParam1)
			{
				__LIB_0__::func_521(7456, 1, -1);
			}
			else
			{
				__LIB_0__::func_521(7456, 0, -1);
			}
			break;
		case 7:
			if (bParam1)
			{
				__LIB_0__::func_521(7457, 1, -1);
			}
			else
			{
				__LIB_0__::func_521(7457, 0, -1);
			}
			break;
	}
}

char* func_217(int iParam0)//Position - 0x1AC865
{
	switch (iParam0)
	{
		case 0:
			return "VAULT_WMENUFIRST_5" /* GXT: All Melee Weapons */;
			break;
		case 1:
			return "VAULT_WMENUFIRST_1" /* GXT: All Pistols */;
			break;
		case 2:
			return "VAULT_WMENUFIRST_7" /* GXT: All Machine Guns */;
			break;
		case 3:
			return "VAULT_WMENUFIRST_2" /* GXT: All Rifles */;
			break;
		case 4:
			return "VAULT_WMENUFIRST_4" /* GXT: All Shotguns */;
			break;
		case 5:
			return "VAULT_WMENUFIRST_3" /* GXT: All Snipers */;
			break;
		case 6:
			return "VAULT_WMENUFIRST_6" /* GXT: All Heavy Weapons */;
			break;
		case 7:
			return "VAULT_WMENUFIRST_8" /* GXT: All Explosives */;
			break;
	}
	return "";
}

char* func_218(bool bParam0, bool bParam1)//Position - 0x1AC8FF
{
	switch (bParam0)
	{
		case 0:
			if (!bParam1)
			{
				return "VAULT_WMENUI_8" /* GXT: Melee Weapons */;
			}
			else
			{
				return "VAULT_WMENUT_9" /* GXT: MELEE WEAPONS */;
			}
			break;
		case 1:
			if (!bParam1)
			{
				return "VAULT_WMENUI_9" /* GXT: Pistols */;
			}
			else
			{
				return "VAULT_WMENUT_2" /* GXT: PISTOLS */;
			}
			break;
		case 2:
			if (!bParam1)
			{
				return "VAULT_WMENUI_3" /* GXT: Machine Guns */;
			}
			else
			{
				return "VAULT_WMENUT_4" /* GXT: MACHINE GUNS */;
			}
			break;
		case 3:
			if (!bParam1)
			{
				return "VAULT_WMENUI_4" /* GXT: Rifles */;
			}
			else
			{
				return "VAULT_WMENUT_5" /* GXT: RIFLES */;
			}
			break;
		case 4:
			if (!bParam1)
			{
				return "VAULT_WMENUI_2" /* GXT: Shotguns */;
			}
			else
			{
				return "VAULT_WMENUT_3" /* GXT: SHOTGUNS */;
			}
			break;
		case 5:
			if (!bParam1)
			{
				return "VAULT_WMENUI_5" /* GXT: Sniper Rifles */;
			}
			else
			{
				return "VAULT_WMENUT_6" /* GXT: SNIPER RIFLES */;
			}
			break;
		case 6:
			if (!bParam1)
			{
				return "VAULT_WMENUI_6" /* GXT: Heavy Weapons */;
			}
			else
			{
				return "VAULT_WMENUT_7" /* GXT: HEAVY WEAPONS */;
			}
			break;
		case 7:
			if (!bParam1)
			{
				return "VAULT_WMENUI_7" /* GXT: Explosives */;
			}
			else
			{
				return "VAULT_WMENUT_8" /* GXT: EXPLOSIVES */;
			}
			break;
	}
	return "";
}

int func_219()//Position - 0x1AEE52
{
	return Global_262145.f_26543 /* Tunable: -128096778 */;
}

int func_220()//Position - 0x1AF04A
{
	return 225;
}

void func_221(int iParam0, char* sParam1, int iParam2)//Position - 0x1BB5F7
{
	char* sVar0;
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = 363;
	Global_23150.f_5430[Global_23150.f_5160] = iParam0;
	Global_23150.f_5160++;
}

void func_222(int iParam0)//Position - 0x1BB6B1
{
	int iVar0;
	int iVar1;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	Global_23150.f_5443 = 0;
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!__LIB_0__::func_746(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23150.f_6051[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

float func_223(float fParam0, float fParam1, float fParam2)//Position - 0x1BBB3B
{
	float fVar0;
	fVar0 = ((1f - SYSTEM::COS(__LIB_0__::func_407((fParam2 * 3.1415927f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

void func_224()//Position - 0x1BD59A
{
	int iVar0;
	int iVar1;
	iVar1 = 2;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_1643888[iVar0] != -1)
		{
			Global_1643888[iVar0] = -1;
		}
		iVar0++;
	}
}

bool func_225(int iParam0)//Position - 0x1BDB8F
{
	return (iParam0 >= 0 && iParam0 < 2);
}

void func_226(float fParam0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)//Position - 0x1BDBA4
{
	if ((fParam1 >= 1f && iParam2 == 1) && !bParam3)
	{
		*iParam7 = iParam4;
		*uParam8 = iParam4;
	}
	else
	{
		*iParam7 = (iParam6 + SYSTEM::ROUND(fParam0));
		*uParam8 = iParam4;
		if (fParam1 >= 1f)
		{
			uParam9->f_8 = (uParam9->f_8 - 1);
			uParam9->f_9 = iParam5;
		}
	}
}

var func_227()//Position - 0x1BDC66
{
	return Global_1964904[PLAYER::PLAYER_ID() /*15*/].f_1;
}

var func_228()//Position - 0x1BDC7A
{
	return Global_1964904[PLAYER::PLAYER_ID() /*15*/];
}

var func_229()//Position - 0x1BDC8C
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_828;
}

int func_230(float fParam0, float fParam1, float fParam2)//Position - 0x1BFDFA
{
	float fVar0;
	float fVar1;
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_231()//Position - 0x1C0E22
{
	if (Global_1958711.f_5 != -1)
	{
		return Global_1958711.f_5;
	}
	return Global_262145.f_24691 /* Tunable: BB_TERRORBYTE_DRONE_COOLDOWN_TIME */;
}

int func_232(int iParam0)//Position - 0x1C0E44
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_351 != -1)
		{
			return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_1853348[iParam0 /*834*/].f_267.f_351));
		}
	}
	return -1;
}

bool func_233()//Position - 0x1C253E
{
	return BitTest(Global_1958711, 12);
}

bool func_234()//Position - 0x1C28B3
{
	return Global_97750;
}

int func_235(int iParam0)//Position - 0x1E0421
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510 == 1;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 3);
}

void func_236(int iParam0)//Position - 0x1E8350
{
	Global_1946250.f_517 = iParam0;
}

bool func_237()//Position - 0x1E8361
{
	return Global_1946250.f_517;
}

var func_238(int iParam0)//Position - 0x1E845F
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_197, 11);
}

int func_239()//Position - 0x1EA3F1
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
		{
			return 1;
		}
		if (Global_4539961 == -3)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_240()//Position - 0x1EA46B
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
		{
			return 1;
		}
		if (Global_4539961 == -2)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_241(int iParam0)//Position - 0x1EA4B2
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("dominator4"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("cerberus"):
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("brutus"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
			break;
	}
	return 0;
}

void func_242(int iParam0, int iParam1)//Position - 0x1EA898
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_2815059.f_2309[iVar0 /*44*/].f_40 == iParam0)
		{
			Global_2815059.f_2309[iVar0 /*44*/].f_40 = iParam1;
		}
		else if (Global_2815059.f_2309[iVar0 /*44*/].f_40 == iParam1)
		{
			Global_2815059.f_2309[iVar0 /*44*/].f_40 = iParam0;
		}
		iVar0++;
	}
}

void func_243(struct<13> Param0, var uParam1)//Position - 0x1EB4A6
{
	*uParam1 = Param0.f_0;
	uParam1->f_1 = Param0.f_1;
	uParam1->f_2 = Param0.f_2;
	uParam1->f_3 = Param0.f_3;
	uParam1->f_4 = Param0.f_4;
	uParam1->f_5 = Param0.f_5;
	uParam1->f_6 = Param0.f_6;
	uParam1->f_7 = Param0.f_7;
	uParam1->f_8 = Param0.f_8;
	uParam1->f_9 = Param0.f_9;
	uParam1->f_10 = Param0.f_10;
	uParam1->f_11 = Param0.f_11;
	uParam1->f_12 = Param0.f_12;
}

int func_244(int iParam0)//Position - 0x1F075D
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		case joaat("minivan2"):
			return 3;
			break;
		case joaat("sabregt2"):
			return 3;
			break;
		case joaat("slamvan3"):
			return 3;
			break;
		case joaat("tornado5"):
			return 3;
			break;
		case joaat("virgo2"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("diablous2"):
			return 28;
			break;
		case joaat("fcr2"):
			return 28;
			break;
		case joaat("italigtb2"):
			return 27;
			break;
		case joaat("specter2"):
			return 27;
			break;
		case joaat("nero2"):
			return 27;
			break;
		case joaat("comet3"):
			return 26;
			break;
		case joaat("elegy"):
			return 26;
			break;
		case joaat("rcbandito"):
			return 39;
			break;
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (__LIB_1__::func_323(iParam0))
	{
		return 38;
	}
	if (__LIB_0__::func_596(iParam0))
	{
		return 38;
	}
	return 3;
}

void func_245(var uParam0, int iParam1)//Position - 0x1F490E
{
	CAM::DO_SCREEN_FADE_IN(iParam1);
	MISC::CLEAR_BIT(&(uParam0->f_9), 2);
}

void func_246(int iParam0, int iParam1)//Position - 0x1F4936
{
	Global_2689235[iParam0 /*453*/].f_66.f_3 = iParam1;
}

void func_247(var uParam0)//Position - 0x1F498F
{
	if (uParam0->f_14 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_14);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_14);
		uParam0->f_14 = -1;
	}
}

void func_248(var uParam0)//Position - 0x1F49B4
{
	if (uParam0->f_13 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_13);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_13);
		uParam0->f_13 = -1;
	}
}

void func_249(var uParam0)//Position - 0x1F49D9
{
	if (uParam0->f_11 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_11);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_11);
		uParam0->f_11 = -1;
	}
}

bool func_250()//Position - 0x1F49FE
{
	return Global_2787908;
}

int func_251(int iParam0)//Position - 0x1F4FEA
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_1, 5);
	}
	return 0;
}

int func_252(int iParam0)//Position - 0x1F508B
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_292, 13);
	}
	return 0;
}

int func_253(int iParam0)//Position - 0x1F50B2
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 30);
	}
	return 0;
}

int func_254(int iParam0)//Position - 0x1F50D9
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 29);
	}
	return 0;
}

int func_255(int iParam0)//Position - 0x1F5100
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_292, 25);
	}
	return 0;
}

int func_256(int iParam0)//Position - 0x1F5127
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 29);
	}
	return 0;
}

int func_257(int iParam0)//Position - 0x1F514D
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_292, 24);
	}
	return 0;
}

int func_258(int iParam0, bool bParam1)//Position - 0x1F5227
{
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
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

void func_259(var uParam0, int iParam1)//Position - 0x1F52B1
{
	uParam0->f_19 = iParam1;
}

void func_260(var uParam0, float fParam1)//Position - 0x1F5B5D
{
	uParam0->f_699 = fParam1;
}

int func_261(int iParam0)//Position - 0x1F5C00
{
	if (iParam0 == 1)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			return 176;
		}
		return 201;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 177;
	}
	return 202;
}

void func_262(var uParam0)//Position - 0x1F9393
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 50f;
	uParam0->f_8 = 35f;
	uParam0->f_7 = 35f;
}

int func_263(var uParam0)//Position - 0x1F93C6
{
	if (BitTest(uParam0->f_8, 1))
	{
		STREAMING::CLEAR_FOCUS();
		NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
		MISC::CLEAR_BIT(&(uParam0->f_8), 1);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("WATCHING_SAFEHOUSE_TV"))
	{
		AUDIO::STOP_AUDIO_SCENE("WATCHING_SAFEHOUSE_TV");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_CCTV_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_CCTV_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_cctv_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_cctv_scene");
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	MISC::SET_BIT(&(uParam0->f_8), 0);
	return 1;
}

int func_264(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x1F96EB
{
	int iVar0;
	int iVar1;
	iVar1 = 300;
	if (iParam3 != -1)
	{
		iVar1 = iParam3;
	}
	if (bParam2)
	{
		if (PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) > 0.3f || iParam5 == 1)
		{
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				if (bParam4)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*iParam1 = 1;
			}
		}
		if (PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) < -0.3f || iParam5 == -1)
		{
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				if (bParam4)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*iParam1 = -1;
			}
		}
	}
	else
	{
		if (PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < -0.3f)
		{
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				if (bParam4)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
				iVar0 = 1;
				*iParam1 = 1;
			}
		}
		if (PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) > 0.3f)
		{
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				if (bParam4)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
				iVar0 = 1;
				*iParam1 = -1;
			}
		}
	}
	return iVar0;
}

var func_265()//Position - 0x1FA991
{
	return Global_2725431;
}

char* func_266(int iParam0, int iParam1)//Position - 0x1FAD55
{
	char* sVar0;
	sVar0 = "MPTV_CCTV1" /* GXT: 38 : 06 : 35    5N/0BR2 */;
	switch (iParam1)
	{
		case 22:
		case 27:
		case 32:
		case 37:
		case 23:
		case 28:
		case 33:
		case 38:
		case 24:
		case 29:
		case 34:
		case 39:
		case 25:
		case 30:
		case 35:
		case 40:
		case 26:
		case 31:
		case 36:
		case 41:
			switch (iParam0)
			{
				case 0:
					sVar0 = "MPTV_CCTV1" /* GXT: 38 : 06 : 35    5N/0BR2 */;
					break;
				case 1:
					sVar0 = "MPTV_CCTV1" /* GXT: 38 : 06 : 35    5N/0BR2 */;
					break;
				case 2:
					sVar0 = "MPTV_CCTV1" /* GXT: 38 : 06 : 35    5N/0BR2 */;
					break;
			}
			break;
		case 147:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SUB_CCTV_1D" /* GXT: 20:62 MAIN */;
					break;
				case 1:
					sVar0 = "SUB_CCTV_2D" /* GXT: 18:24 MAIN */;
					break;
				case 2:
					sVar0 = "SUB_CCTV_3D" /* GXT: 28:25 SECOND */;
					break;
				case 3:
					sVar0 = "SUB_CCTV_4D" /* GXT: 26:31 SECOND */;
					break;
				case 4:
					sVar0 = "SUB_CCTV_5D" /* GXT: 19:29 SECOND */;
					break;
				case 5:
					sVar0 = "SUB_CCTV_6D" /* GXT: 16:81 THIRD */;
					break;
				case 6:
					sVar0 = "SUB_CCTV_7D" /* GXT: 17:95 THIRD */;
					break;
			}
			break;
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
			switch (iParam0)
			{
				case 0:
					sVar0 = "AS_CCTV_D" /* GXT: 02 : 09 : 93    5N/0BR2 */;
					break;
				case 1:
					sVar0 = "AS_CCTV_D" /* GXT: 02 : 09 : 93    5N/0BR2 */;
					break;
				case 2:
					sVar0 = "AS_CCTV_D" /* GXT: 02 : 09 : 93    5N/0BR2 */;
					break;
				case 3:
					sVar0 = "AS_CCTV_D2" /* GXT: 18 : 03 : 93    5N/0BR2 */;
					break;
				case 4:
					sVar0 = "AS_CCTV_D2" /* GXT: 18 : 03 : 93    5N/0BR2 */;
					break;
			}
			break;
		case 155:
		case 156:
		case 157:
		case 158:
		case 148:
			switch (iParam0)
			{
				case 0:
					sVar0 = "MS_CCTV_D" /* GXT: 02 : 09 : 93    MMG/0BR2 */;
					break;
				case 1:
					sVar0 = "MS_CCTV_D2" /* GXT: 18 : 03 : 93    LMG/0BR3 */;
					break;
				case 2:
					sVar0 = "MS_CCTV_D3" /* GXT: 21 : 01 : 98    KM/1BR0 */;
					break;
				case 3:
					sVar0 = "MS_CCTV_D4" /* GXT: 23 : 03 : 97    TNF/1BR2 */;
					break;
				case 4:
					sVar0 = "MS_CCTV_D5" /* GXT: 01 : 06 : 90    RMC/3BR0 */;
					break;
				case 5:
					sVar0 = "MS_CCTV_D6" /* GXT: 15 : 12 : 86    HMC/2BR1 */;
					break;
				case 6:
					sVar0 = "MS_CCTV_D7" /* GXT: 19 : 07 : 20    LMC/0BR1 */;
					break;
			}
			break;
	}
	return sVar0;
}

void func_267(var uParam0)//Position - 0x1FB766
{
	Global_2789735 = uParam0;
}

int func_268(var uParam0, int iParam1, int iParam2)//Position - 0x1FB774
{
	switch (iParam2)
	{
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			switch (iParam1)
			{
				case 7:
					return 1;
					break;
			}
			break;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			switch (iParam1)
			{
				case 10:
				case 11:
				case 12:
					return 1;
					break;
			}
			break;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			switch (iParam1)
			{
				case 12:
					return 1;
					break;
			}
			break;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			switch (iParam1)
			{
				case 0:
					if (!BitTest(uParam0->f_8, 19))
					{
						return 1;
					}
					break;
			}
			break;
		case 122:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1;
					break;
			}
			break;
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
			switch (iParam1)
			{
				case 4:
					return 1;
					break;
			}
			break;
		case 148:
			switch (iParam1)
			{
				case 4:
				case 5:
				case 6:
					return 1;
					break;
			}
			break;
		case 155:
		case 156:
		case 157:
		case 158:
			switch (iParam1)
			{
				case 4:
				case 5:
				case 6:
					return 1;
					break;
			}
			break;
		case -1:
			return 1;
			break;
	}
	return 0;
}

void func_269(var uParam0, int iParam1)//Position - 0x1FBA27
{
	CAM::DO_SCREEN_FADE_OUT(iParam1);
	MISC::SET_BIT(&(uParam0->f_9), 2);
}

int func_270(int iParam0)//Position - 0x1FBA94
{
	if ((((((((((((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3) || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14)
	{
		return 1;
	}
	return 0;
}

void func_271(int iParam0)//Position - 0x1FBC7D
{
	Global_2714762.f_889 = iParam0;
}

void func_272()//Position - 0x1FBC8E
{
	MISC::SET_BIT(&(Global_2714762.f_3), 6);
}

void func_273()//Position - 0x1FBCA1
{
	MISC::SET_BIT(&(Global_2714762.f_3), 1);
}

void func_274()//Position - 0x1FBCB4
{
	MISC::SET_BIT(&(Global_2714762.f_2), 30);
}

void func_275()//Position - 0x1FBCC8
{
	MISC::SET_BIT(&(Global_2714762.f_2), 29);
}

void func_276()//Position - 0x1FBCDC
{
	MISC::SET_BIT(&(Global_2714762.f_2), 9);
}

void func_277()//Position - 0x1FBCF0
{
	MISC::SET_BIT(&(Global_2714762.f_3), 5);
}

void func_278()//Position - 0x1FBD03
{
	MISC::SET_BIT(&(Global_2714762.f_2), 26);
}

void func_279()//Position - 0x1FBD17
{
	MISC::SET_BIT(&(Global_2714762.f_2), 21);
}

void func_280()//Position - 0x1FBD2B
{
	MISC::SET_BIT(&(Global_2714762.f_2), 12);
}

void func_281()//Position - 0x1FBDD2
{
	Global_2714762.f_9 = -1;
}

void func_282()//Position - 0x1FBDE1
{
	Global_2714762.f_42 = __LIB_1__::func_527();
}

void func_283()//Position - 0x1FBDF3
{
	Global_2714762.f_735 = 0;
}

void func_284()//Position - 0x1FBE03
{
	Global_2714762.f_717 = 0;
}

void func_285()//Position - 0x1FBE13
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 15);
}

void func_286()//Position - 0x1FBE46
{
	MISC::CLEAR_BIT(&Global_2714762, 6);
}

void func_287()//Position - 0x1FBF7D
{
	struct<13> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Global_2712515[iVar1 /*37*/] = { Var0 };
		StringCopy(&(Global_2712515[iVar1 /*37*/].f_13), "", 64);
		StringCopy(&(Global_2712515[iVar1 /*37*/].f_29), "", 16);
		Global_2712515[iVar1 /*37*/].f_33 = 0;
		Global_2712515[iVar1 /*37*/].f_34 = 0;
		Global_2712515[iVar1 /*37*/].f_35 = 0;
		iVar1++;
	}
	Global_2712515.f_1185 = 0;
	Global_2712515.f_1186 = 0;
}

var func_288()//Position - 0x1FBFF7
{
	return BitTest(Global_2714762.f_3, 2);
}

void func_289()//Position - 0x1FC00B
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 5);
}

void func_290()//Position - 0x1FC027
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 11);
}

var func_291()//Position - 0x1FC057
{
	return BitTest(Global_2714762.f_3, 3);
}

var func_292()//Position - 0x1FC067
{
	return BitTest(Global_2714762.f_3, 1);
}

var func_293()//Position - 0x1FC077
{
	return BitTest(Global_2714762.f_2, 30);
}

var func_294()//Position - 0x1FC088
{
	return BitTest(Global_2714762.f_2, 29);
}

var func_295()//Position - 0x1FC099
{
	return BitTest(Global_2714762.f_2, 9);
}

var func_296()//Position - 0x1FC0AA
{
	return BitTest(Global_2714762.f_3, 5);
}

var func_297()//Position - 0x1FC0BA
{
	return BitTest(Global_2714762.f_2, 26);
}

var func_298()//Position - 0x1FC0CB
{
	return BitTest(Global_2714762.f_2, 21);
}

bool func_299()//Position - 0x1FC0DC
{
	return Global_2714762.f_737;
}

int func_300(bool bParam0)//Position - 0x1FC0EB
{
	if ((((NETWORK::NETWORK_IS_IN_TRANSITION() || NETWORK::NETWORK_IS_TRANSITION_STARTED()) || NETWORK::NETWORK_IS_TRANSITION_BUSY()) || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING()) || NETWORK::NETWORK_IS_TRANSITION_LEAVE_POSTPONED())
	{
		if (bParam0)
		{
			NETWORK::NETWORK_BAIL_TRANSITION(43, 0, 0);
			return 1;
		}
		if (NETWORK::NETWORK_IS_TRANSITION_BUSY() || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING())
		{
			return 0;
		}
		else if (NETWORK::NETWORK_IS_TRANSITION_STARTED())
		{
			if (Global_2715699.f_1.f_2802 == 0)
			{
				NETWORK::NETWORK_LEAVE_TRANSITION();
				Global_2715699.f_1.f_2802 = 1;
			}
			return 0;
		}
		else
		{
			return 0;
		}
		return 0;
	}
	return 1;
}

int func_301(var uParam0, char* sParam1)//Position - 0x1FC44D
{
	switch (uParam0->f_770)
	{
		case 88:
			StringCopy(sParam1, "AOC_CCTV_B" /* GXT: You cannot use the Avenger's CCTV while in a Facility. */, 16);
			return 1;
			break;
	}
	return 0;
}

int func_302(var uParam0)//Position - 0x1FC476
{
	float fVar0;
	fVar0 = (((((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - uParam0->f_6) + 180f) + 360f) % 360f) - 180f);
	if (fVar0 <= uParam0->f_7 && fVar0 >= -uParam0->f_7)
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0)//Position - 0x1FC4C1
{
	if (iParam0 != -1)
	{
		switch (__LIB_0__::func_170(iParam0))
		{
			case 11:
				return __LIB_3__::func_114(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9);
				break;
			}
	}
	return 1;
}

void func_304(int* iParam0, int iParam1)//Position - 0x1FC50D
{
	iParam0->f_3 = iParam1;
}

float func_305(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, int iParam4)//Position - 0x1FCC93
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_306(var uParam0)//Position - 0x1FCCF8
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_786) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_786, false))
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(uParam0->f_786, true), ENTITY::GET_ENTITY_VELOCITY(uParam0->f_786));
	}
}

void func_307(var uParam0)//Position - 0x1FCE03
{
	uParam0->f_772 = NETWORK::GET_NETWORK_TIME();
	MISC::SET_BIT(&(uParam0->f_8), 5);
}

int func_308(int* iParam0, int iParam1)//Position - 0x1FCE1D
{
	int iVar0;
	iVar0 = iParam0->f_1;
	if (iParam1 != -1 && __LIB_0__::func_170(iParam1) == 9)
	{
		if (iVar0 == 0 && Global_1963957)
		{
			MISC::SET_BIT(iParam0, 0);
			return 1;
		}
	}
	if ((((((((((((((!iVar0 == 0 || !iVar0 == 1) || !iVar0 == 2) || !iVar0 == 3) || !iVar0 == 4) || !iVar0 == 5) || !iVar0 == 6) || !iVar0 == 7) || !iVar0 == 8) || !iVar0 == 9) || !iVar0 == 10) || !iVar0 == 11) || !iVar0 == 12) || !iVar0 == 13) || !iVar0 == 14)
	{
		return 1;
	}
	return 0;
}

int func_309(int iParam0)//Position - 0x1FD30F
{
	switch (iParam0)
	{
		case 0:
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
			return 2;
			break;
	}
	return -1;
}

void func_310(bool bParam0)//Position - 0x1FD5AD
{
	if (bParam0)
	{
		Global_1852994.f_171 = 1;
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 16);
	}
	else
	{
		Global_1852994.f_171 = 0;
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 16);
	}
}

int func_311()//Position - 0x20030A
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_52())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (__LIB_0__::func_53())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_312(struct<3> Param0, int iParam1, float fParam2)//Position - 0x202E60
{
	if (__LIB_1__::func_330(iParam1))
	{
		if (SYSTEM::VDIST2(Param0, __LIB_1__::func_328(iParam1)) < (fParam2 * fParam2))
		{
			return 1;
		}
	}
	return 0;
}

void func_313(float fParam0)//Position - 0x204206
{
	if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam0);
	}
	__LIB_3__::func_678(0f, 1);
}

void func_314(int iParam0)//Position - 0x2062D6
{
	MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 16);
	Global_1585857[__LIB_1__::func_165() /*142*/].f_105 = 0;
}

int func_315(int iParam0)//Position - 0x212932
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_631(iParam0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_285 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
	if (iVar1 != __LIB_0__::func_160())
	{
		if (Global_1853348[iVar1 /*834*/].f_267.f_285 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_316()//Position - 0x2140C8
{
	if (__LIB_0__::func_693(PLAYER::PLAYER_ID()) || __LIB_0__::func_694(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_742() == 26)
		{
			return 1;
		}
	}
	return 0;
}

bool func_317(int iParam0)//Position - 0x214AD7
{
	return __LIB_0__::func_652(iParam0);
}

void func_318()//Position - 0x2159C7
{
	var uVar0;
	if (__LIB_1__::func_104(Global_2667225.f_45.f_173, 1))
	{
		Global_2667225.f_45.f_173 = -1;
	}
	else
	{
		uVar0 = Global_2667225.f_45.f_173;
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

int func_319()//Position - 0x222B64
{
	return __LIB_1__::func_332(PLAYER::PLAYER_ID());
}

float func_320(float fParam0, var uParam1)//Position - 0x226CDD
{
	float fVar0;
	fVar0 = (fParam0 + uParam1->f_4);
	while (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	while (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

Vector3 func_321(struct<3> Param0, var uParam1)//Position - 0x226D1C
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, uParam1->f_4, Param0);
}

bool func_322()//Position - 0x227730
{
	return Global_1946250.f_499 != -1;
}

void func_323()//Position - 0x227D1C
{
	MISC::SET_BIT(&(Global_1946250.f_3), 18);
}

int func_324(int iParam0)//Position - 0x227D8E
{
	if (!INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		return 0;
	}
	if (INTERIOR::IS_INTERIOR_DISABLED(iParam0))
	{
		INTERIOR::DISABLE_INTERIOR(iParam0, false);
	}
	if (INTERIOR::IS_INTERIOR_CAPPED(iParam0))
	{
		INTERIOR::CAP_INTERIOR(iParam0, false);
	}
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam0);
	return 1;
}

void func_325(int iParam0)//Position - 0x227DCB
{
	Global_1946250.f_509 = iParam0;
}

void func_326()//Position - 0x227DDC
{
	if (!Global_1946250.f_512)
	{
		Global_1946250.f_512 = 1;
		Global_1946250.f_513 = 1;
		Global_1946250.f_514 = 0;
	}
}

void func_327(var* uParam0)//Position - 0x2281ED
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_6, uParam0->f_9, uParam0->f_14, false, true, 0))
	{
		if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("mp_bed_high", uParam0->f_13, true, 0))
		{
			SCRIPT::REQUEST_SCRIPT("mp_bed_high");
			if (SCRIPT::HAS_SCRIPT_LOADED("mp_bed_high"))
			{
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("mp_bed_high", uParam0, 16, 1424);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mp_bed_high");
			}
		}
	}
}

void func_328()//Position - 0x229476
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 363)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
		iVar0++;
	}
}

void func_329(struct<15> Param0, bool bParam1)//Position - 0x22A90A
{
	if (Param0.f_0 != 0)
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(Param0.f_0, Param0.f_2, Param0.f_3, false, bParam1, Param0.f_11);
		if (Param0.f_9)
		{
			OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(Param0.f_0, true);
		}
		if (Param0.f_12 != 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Param0.f_0, Param0.f_12, false, bParam1);
		}
		if (!Param0.f_6)
		{
			if (Param0.f_7)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Param0.f_0, Param0.f_8, bParam1, false);
			}
		}
		if (Param0.f_10)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_OPEN_FOR_RACES(Param0.f_0, true);
		}
		if (Param0.f_14 != 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(Param0.f_0, Param0.f_14, bParam1, false);
		}
		if (Param0.f_13 != 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Param0.f_0, Param0.f_13, bParam1, false);
		}
	}
}

void func_330(bool bParam0)//Position - 0x22B935
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_3), 29);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_3), 29);
	}
}

bool func_331()//Position - 0x22B95D
{
	return BitTest(Global_1946250.f_506, 30);
}

int func_332(int iParam0)//Position - 0x16D5
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_292, 0);
	}
	return 0;
}

bool func_333(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x323E
{
	bool bVar0;
	int iVar1;
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (__LIB_1__::func_264(bVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(bVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bVar0))
				{
					return bVar0;
				}
			}
			iVar1++;
		}
	}
	else if (__LIB_1__::func_264(bParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(bParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bParam3))
		{
			return bParam3;
		}
	}
	return __LIB_0__::func_160();
}

int func_334(bool bParam0)//Position - 0x31C1C
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 24;
			}
		}
	}
	return 0;
}

var func_335(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3A7EA
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_1__::func_264(bVar3, 1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar3), bParam3))
			{
				if (!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(bVar3))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar3), bParam3);
					if (iVar2 == iParam0)
					{
						if (PLAYER::GET_PLAYER_TEAM(bVar3) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
						{
							if (bVar3 != PLAYER::PLAYER_ID() || iParam1)
							{
								MISC::SET_BIT(&uVar0, iVar1);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_336(bool bParam0, int iParam1)//Position - 0x4A4B8
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 24)
			{
				return Global_2689235[bParam0 /*453*/].f_318.f_6 == iParam1;
			}
		}
	}
	return 0;
}

bool func_337(int iParam0)//Position - 0x4D6B5
{
	int iVar0;
	bool bVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (!PED::IS_PED_INJURED(iVar0))
			{
				bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (!bVar1 == __LIB_0__::func_160())
				{
					if (__LIB_1__::func_264(bVar1, 0, 1))
					{
						return bVar1;
					}
				}
			}
		}
	}
	return bVar1;
}

char* func_338(var uParam0, int iParam1)//Position - 0x4D903
{
	switch (iParam1)
	{
		case 0:
			return "PIM_FHQ_INV_D" /* GXT: Invite players to your Agency. */;
			break;
		case 1:
			return "PIM_FHQ_INV_M" /* GXT: Invite to Agency */;
			break;
		case 3:
			return "PIM_FHQ_INV_T" /* GXT: INVITE TO AGENCY */;
			break;
		case 4:
			return "PIM_INV_FHQ" /* GXT: Invite to Agency has been sent to ~a~. */;
			break;
		case 5:
			return "PIM_INV_FHQ_AS" /* GXT: Invite to Agency has been sent to all players. */;
			break;
		case 6:
			return "CELL_FHQ_SHPINV" /* GXT: Hey, come over to the Agency. */;
			break;
		case 10:
			return "FHQ_DOCKA" /* GXT: Press ~INPUT_CONTEXT~ to land and enter the Agency. */;
			break;
		case 11:
			if (__LIB_4__::func_116(__LIB_0__::func_582()))
			{
				return "FHQ_DOCKD" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your President's Agency. */;
			}
			else if (__LIB_2__::func_456(__LIB_0__::func_582()))
			{
				return "FHQ_DOCKB" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your CEO's Agency. */;
			}
			else
			{
				return "FHQ_DOCKC" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your VIP's Agency. */;
			}
			break;
	}
	return "";
}

void func_339(int iParam0)//Position - 0x512D9
{
	if (iParam0 == __LIB_0__::func_160())
	{
		return;
	}
	__LIB_4__::func_114(iParam0);
	MISC::SET_BIT(&(Global_1946250.f_8), 6);
}

int func_340(bool bParam0)//Position - 0x5138E
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 23;
			}
		}
	}
	return 0;
}

char* func_341(int iParam0)//Position - 0x587C0
{
	switch (iParam0)
	{
		case 0:
			return "BWH_ENTRM_ALONE" /* GXT: Enter alone */;
		case 1:
			if (__LIB_4__::func_116(PLAYER::PLAYER_ID()))
			{
				return "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
			}
			else
			{
				return "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
			}
			break;
		case 2:
			return "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	}
	return "UNKNOWN";
}

int func_342()//Position - 0x59DB3
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (bVar1 != PLAYER::PLAYER_ID() && bVar1 != __LIB_0__::func_160())
			{
				if (__LIB_1__::func_264(bVar1, 1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), iVar0, false))
						{
							if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), false) || Global_1574582.f_6) || __LIB_0__::func_104(1)) || TASK::GET_IS_TASK_ACTIVE(PLAYER::GET_PLAYER_PED(bVar1), 2))
							{
								return 0;
							}
						}
						else
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_265(PLAYER::PLAYER_ID()), __LIB_1__::func_265(bVar1), true) <= 125f)
							{
								if (!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(bVar1))
								{
									if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::GET_PLAYER_PED(bVar1)) == iVar0)
									{
										return 0;
									}
								}
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), iVar0, true) || ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::GET_PLAYER_PED(bVar1), iVar0))
							{
								return 0;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return 1;
}

void func_343(var uParam0, var uParam1)//Position - 0x617B4
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_2__::func_591(*uParam0);
	bVar1 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (bVar1 != __LIB_0__::func_160() && __LIB_4__::func_126(bVar1, iVar0))
	{
		__LIB_4__::func_114(bVar1);
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		*uParam1 = 1;
		uParam1->f_9 = 1;
		uParam1->f_1 = 0;
		return;
	}
}

int func_344(bool bParam0, var uParam1)//Position - 0x627C3
{
	if (((bParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(bParam0, 0, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bParam0))) && !__LIB_4__::func_0(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_345(bool bParam0)//Position - 0x66DB0
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_346(int iParam0, bool bParam1)//Position - 0x66DF7
{
	if (bParam1 == __LIB_0__::func_160())
	{
		return 0;
	}
	if ((Global_2689235[bParam1 /*453*/].f_318.f_6 == 148 && Global_2689235[bParam1 /*453*/].f_318.f_9 == iParam0) && !__LIB_4__::func_122(bParam1))
	{
		return 1;
	}
	return 0;
}

void func_347(var uParam0, bool bParam1)//Position - 0x69631
{
	__LIB_4__::func_114(bParam1);
	MISC::SET_BIT(&(Global_1946250.f_10), 0);
}

bool func_348()//Position - 0xA398E
{
	return __LIB_4__::func_116(PLAYER::PLAYER_ID());
}

int func_349(bool bParam0, var uParam1)//Position - 0xAAF21
{
	if (__LIB_1__::func_909())
	{
		return 0;
	}
	if ((bParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(bParam0, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bParam0)))
	{
		return 1;
	}
	return 0;
}

int func_350(bool bParam0)//Position - 0xACE93
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_4__::func_14(bParam0) && Global_2689235[bParam0 /*453*/].f_318.f_9 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_351(bool bParam0, var uParam1, var uParam2)//Position - 0xACF42
{
	if (__LIB_4__::func_136(bParam0))
	{
		return 147;
	}
	return -1;
}

void func_352(var uParam0, var uParam1)//Position - 0xAE2F3
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
	if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, false);
			}
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 353, true);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

void func_353(var uParam0, var uParam1)//Position - 0xB9CF2
{
	struct<3> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
	if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (Var0.f_2 > -52.8f)
		{
			if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, false);
			}
		}
		else if (!PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true);
		}
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 353, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar1, &bVar2, &bVar3, &bVar4, &bVar5, &uVar6, &uVar7, &uVar8))
		{
			if ((((!bVar1 || !bVar2) || !bVar3) || !bVar4) || !bVar5)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

int func_354()//Position - 0xBA45B
{
	if (__LIB_3__::func_998(PLAYER::PLAYER_ID()) || BitTest(Global_1946250.f_6, 30))
	{
		return 0;
	}
	return 1;
}

int func_355(bool bParam0)//Position - 0xC2A90
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 17;
			}
		}
	}
	return 0;
}

void func_356(var uParam0, var uParam1)//Position - 0xC337F
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_2__::func_852(*uParam0);
	bVar1 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (bVar1 != __LIB_0__::func_160() && __LIB_4__::func_143(bVar1, iVar0))
	{
		__LIB_4__::func_114(bVar1);
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		*uParam1 = 1;
		uParam1->f_9 = 1;
		uParam1->f_1 = 1;
		return;
	}
}

void func_357(var uParam0, var uParam1)//Position - 0xC8CA3
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
	if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (!PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true);
		}
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 353, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

bool func_358(int iParam0)//Position - 0xCC186
{
	return __LIB_4__::func_109(iParam0, 3);
}

int func_359(int iParam0, var uParam1)//Position - 0xCC19E
{
	return __LIB_4__::func_139(iParam0);
}

int func_360(bool bParam0)//Position - 0xCDE14
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_361(var uParam0, bool bParam1)//Position - 0xD1F6F
{
	if (bParam1 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 1) && !__LIB_3__::func_999(PLAYER::PLAYER_ID(), bParam1))
	{
		return 0;
	}
	if (__LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 0;
	}
	if (!__LIB_4__::func_141(PLAYER::PLAYER_ID()) && !Global_2725439)
	{
		return 0;
	}
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && !Global_2725439)
	{
		return 0;
	}
	return 1;
}

char* func_362(var uParam0, int iParam1)//Position - 0xD3E0E
{
	switch (iParam1)
	{
		case 0:
			return "PIM_HLSMO1" /* GXT: Invite Players to your Penthouse. */;
			break;
		case 1:
			return "PIM_TLSMO1" /* GXT: Invite to Penthouse */;
			break;
		case 3:
			return "PIM_ULSMO1" /* GXT: INVITE TO PENTHOUSE */;
			break;
		case 4:
			return "PIM_INVCAS_APT" /* GXT: Invite to Penthouse has been sent to ~a~. */;
			break;
		case 5:
			return "PIM_INV_A_T_PH" /* GXT: Invite to Penthouse has been sent to all players. */;
			break;
		case 6:
			return "CELL_CASAPTINV" /* GXT: Hey, come over to the Casino Penthouse. */;
			break;
		case 10:
			return "MP_CASIN_DOCKA" /* GXT: Press ~INPUT_CONTEXT~ to land and enter Penthouse. */;
			break;
		case 11:
			if (__LIB_4__::func_116(PLAYER::PLAYER_ID()))
			{
				return "MP_CASIN_DOCKD" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your President's Penthouse. */;
			}
			else if (__LIB_2__::func_456(PLAYER::PLAYER_ID()))
			{
				return "MP_CASIN_DOCKB" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your CEO's Penthouse. */;
			}
			else
			{
				return "MP_CASIN_DOCKC" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your VIP's Penthouse. */;
			}
			break;
	}
	return "";
}

int func_363(bool bParam0, var uParam1, var uParam2)//Position - 0xD430E
{
	if (__LIB_4__::func_139(bParam0))
	{
		return 124;
	}
	return -1;
}

void func_364(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD615E
{
	switch (iParam0)
	{
		case 123:
			switch (iParam6)
			{
				case 0:
					if ((__LIB_4__::func_141(PLAYER::PLAYER_ID()) || iParam7) || __LIB_2__::func_380())
					{
						*uParam2 = { 927.84503f, 49.779125f, 80.09595f };
						*uParam3 = { 923.3205f, 42.603638f, 82.85502f };
						*fParam4 = 2.625f;
						*uParam1 = { 925.04f, 46.48f, 80.096f };
						*iParam5 = 240f;
					}
					else
					{
						*uParam2 = { 925.4433f, 46.258038f, 79.85639f };
						*uParam3 = { 916.44055f, 51.89934f, 85.14889f };
						*fParam4 = 11.25f;
						*uParam1 = { 0f, 0f, 0f };
						*iParam5 = 0f;
					}
					break;
				case 1:
					*uParam2 = { 965.73413f, 59.016113f, 111.58054f };
					*uParam3 = { 964.8573f, 57.62687f, 113.70488f };
					*fParam4 = 1.5625f;
					*uParam1 = { 0f, 0f, 0f };
					*iParam5 = 240f;
					break;
				case 3:
					*uParam2 = { 977.9172f, 62.63932f, 119.29766f };
					*uParam3 = { 978.89154f, 62.0131f, 121.03822f };
					*fParam4 = 1.5f;
					*uParam1 = { 0f, 0f, 0f };
					*iParam5 = 320f;
					break;
				case 4:
					*uParam2 = { 972.05005f, 51.043343f, 119.23056f };
					*uParam3 = { 971.0307f, 51.615494f, 121.05416f };
					*fParam4 = 1.5f;
					*uParam1 = { 0f, 0f, 0f };
					*iParam5 = 150f;
					break;
			}
			break;
	}
}

int func_365(bool bParam0)//Position - 0xD64D5
{
	if (bParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(bParam0, 1, 1))
	{
		return BitTest(Global_1892703[bParam0 /*599*/].f_533, 0);
	}
	return 0;
}

int func_366(var uParam0)//Position - 0xD650E
{
	if (Global_262145.f_26961 /* Tunable: VC_CASINO_DISABLE_VALET */)
	{
		return 0;
	}
	if (__LIB_4__::func_141(PLAYER::PLAYER_ID()) || __LIB_2__::func_380())
	{
		return 0;
	}
	return 1;
}

void func_367(var uParam0, var uParam1)//Position - 0xD8C7B
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 2)
	{
		CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_3__::func_998(PLAYER::PLAYER_ID()))
		{
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (!PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true))
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true);
				}
			}
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 353, true);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
		}
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
			}
			else
			{
				PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		}
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

int func_368(var uParam0, int iParam1)//Position - 0xDAA74
{
	if (iParam1 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_4__::func_115(PLAYER::PLAYER_ID()) > -1 && !__LIB_1__::func_155(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	return 1;
}

void func_369(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0xDB684
{
	switch (iParam0)
	{
		case 123:
			switch (iParam6)
			{
				case 2:
					if (__LIB_4__::func_141(PLAYER::PLAYER_ID()) || __LIB_2__::func_380())
					{
						*uParam2 = { 924.507f, 60.3318f, 79.89629f };
						*uParam3 = { 916.2699f, 47.189175f, 83.89615f };
						*uParam4 = 8.7f;
						*uParam1 = { 0f, 0f, 0f };
						*uParam5 = 0f;
					}
					else
					{
						*uParam2 = { 927.702f, 65.4957f, 78.18713f };
						*uParam3 = { 908.80853f, 35.85022f, 84.86974f };
						*uParam4 = 15.375f;
						*uParam1 = { 0f, 0f, 0f };
						*uParam5 = 0f;
					}
					break;
			}
			break;
	}
}

int func_370(int iParam0)//Position - 0xDB751
{
	if (iParam0 == 4)
	{
		return 1;
	}
	if ((iParam0 != 0 && iParam0 != 2) && !__LIB_2__::func_380())
	{
		return !__LIB_4__::func_141(PLAYER::PLAYER_ID());
	}
	return 0;
}

int func_371(bool bParam0)//Position - 0xE32A1
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0) && bParam0 != PLAYER::PLAYER_ID())
	{
		if (__LIB_4__::func_6(bParam0) && !__LIB_3__::func_998(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_372(int iParam0)//Position - 0xE3DF5
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
			return !__LIB_4__::func_135(PLAYER::PLAYER_ID());
			break;
	}
	return 0;
}

int func_373(var uParam0)//Position - 0xE3FA3
{
	switch (__LIB_4__::func_85(PLAYER::PLAYER_ID()))
	{
		case 0:
			return 122;
		case 1:
			return 123;
		case 2:
			return 124;
		default:
	}
	return 0;
}

int func_374(bool bParam0)//Position - 0xE5900
{
	if (bParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(bParam0, 1, 1))
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_375()//Position - 0xF715A
{
	if (Global_1853193 != __LIB_0__::func_160())
	{
		if (!__LIB_4__::func_102(Global_1853193))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1640758))
			{
				return Global_1640758;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1963827[Global_1853193]))
			{
				return Global_1963827[Global_1853193];
			}
		}
	}
	return -1;
}

int func_376(bool bParam0)//Position - 0xF71AA
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_3, 5);
	}
	return 0;
}

int func_377(bool bParam0)//Position - 0xF71CF
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_348, 19);
	}
	return 0;
}

int func_378(bool bParam0)//Position - 0xF768C
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_3, 10);
	}
	return 0;
}

int func_379(bool bParam0)//Position - 0xF76B2
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_348, 14);
	}
	return 0;
}

int func_380(bool bParam0)//Position - 0xF9BC3
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_3, 9);
	}
	return 0;
}

int func_381()//Position - 0xF9BE9
{
	if (!__LIB_4__::func_22(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_1("MATC_DPADRIGH5" /* GXT: ~s~Press ~INPUT_CONTEXT~ to enter. ~n~Press ~INPUT_FRONTEND_LEFT~ to go on call. */) || __LIB_0__::func_1("MATC_DPADRIGHT" /* GXT: Press ~INPUT_CONTEXT~ to enter. */))
		{
			return 1;
		}
	}
	return 0;
}

int func_382(bool bParam0)//Position - 0xF9C72
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_198, 10);
	}
	return 0;
}

int func_383(int iParam0, int iParam1, struct<3> Param2)//Position - 0xF9CA4
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (!__LIB_4__::func_135(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		iVar0 = 89;
		while (iVar0 <= 97)
		{
			if (SYSTEM::VDIST2(-376.2393f, -1878.2488f, 19.5278f, Param2) <= 900f)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_384(bool bParam0)//Position - 0xFA682
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_366, 25);
	}
	return 0;
}

int func_385(bool bParam0)//Position - 0xFA72C
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_366, 27);
	}
	return 0;
}

int func_386(bool bParam0)//Position - 0xFA753
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_366, 26);
	}
	return 0;
}

int func_387(bool bParam0, var uParam1, var uParam2)//Position - 0xFAABC
{
	if (__LIB_4__::func_152(bParam0))
	{
		return 117;
	}
	return -1;
}

int func_388(bool bParam0)//Position - 0x101AAC
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_4__::func_22(bParam0) && Global_2689235[bParam0 /*453*/].f_318.f_9 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_389(int iParam0, var uParam1, int iParam2)//Position - 0x10527A
{
	switch (iParam0)
	{
		case 102:
			switch (iParam2)
			{
				case 0:
					uParam1->f_22.f_13 = { 732.9764f, -1290.3488f, 26.9224f };
					uParam1->f_22.f_16 = { -33.9653f, 0f, -125.1292f };
					uParam1->f_22.f_28 = { 733.971f, -1291.201f, 25.2842f };
					uParam1->f_22.f_31 = { 0f, 0f, 0f };
					uParam1->f_22.f_59 = { 711.5486f, -1311.7397f, 26.9087f };
					uParam1->f_22.f_62 = { 9.7556f, 0.0692f, -49.8918f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_3 = "anim@apt_trans@garage";
					uParam1->f_22.f_5 = "gar_open_1_left";
					uParam1->f_22.f_19 = 50f;
					uParam1->f_22.f_34 = 0f;
					uParam1->f_22.f_35 = 0.45f;
					uParam1->f_22.f_65 = 32.312f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 1:
					uParam1->f_22.f_59 = { 711.5486f, -1311.7397f, 26.9087f };
					uParam1->f_22.f_62 = { 9.7556f, 0.0692f, -49.8918f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_65 = 32.312f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 3:
				case 2:
					if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)))
					{
						uParam1->f_22.f_13 = { 766.9297f, -1332.1254f, 26.405f };
						uParam1->f_22.f_16 = { 5.1238f, -0.0324f, 101.1261f };
						uParam1->f_22.f_19 = 20.0722f;
						uParam1->f_22.f_20 = { 766.9297f, -1332.1254f, 26.405f };
						uParam1->f_22.f_23 = { 5.1238f, -0.0324f, 93.4529f };
						uParam1->f_22.f_26 = 20.0722f;
						uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
						uParam1->f_22.f_28 = { 758.029f, -1331.955f, 26.2802f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
						uParam1->f_22.f_59 = { 774.9752f, -1346.5548f, 28.0999f };
						uParam1->f_22.f_62 = { 5.7589f, 0.0026f, 43.047f };
						uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
						uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
						uParam1->f_22.f_72[0] = 0.295f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "ext_player";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 47.2371f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_40 = 0.1f;
					}
					else
					{
						uParam1->f_22.f_13 = { 751.9787f, -1336.3892f, 27.0828f };
						uParam1->f_22.f_16 = { 0.1407f, 0.0213f, -63.7208f };
						uParam1->f_22.f_19 = 29.8289f;
						uParam1->f_22.f_20 = { 752.5981f, -1336.1887f, 27.0843f };
						uParam1->f_22.f_23 = { 2.013f, 0.0213f, -62.3465f };
						uParam1->f_22.f_26 = 29.8289f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 756.998f, -1331.917f, 26.28f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
						uParam1->f_22.f_59 = { 774.9752f, -1346.5548f, 28.0999f };
						uParam1->f_22.f_62 = { 5.7589f, 0.0026f, 43.047f };
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 47.2371f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_40 = 0.1f;
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 103:
			switch (iParam2)
			{
				case 0:
					uParam1->f_22.f_13 = { 332.3591f, -995.3273f, 29.783f };
					uParam1->f_22.f_16 = { -34.2946f, 0f, -30.1727f };
					uParam1->f_22.f_28 = { 333.159f, -994.426f, 28.321f };
					uParam1->f_22.f_31 = { 0f, 0f, 90f };
					uParam1->f_22.f_59 = { 320.3405f, -1002.1382f, 29.9967f };
					uParam1->f_22.f_62 = { 5.1997f, -0.143f, -57.2915f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_3 = "anim@apt_trans@garage";
					uParam1->f_22.f_5 = "gar_open_1_left";
					uParam1->f_22.f_19 = 50f;
					uParam1->f_22.f_34 = 0f;
					uParam1->f_22.f_35 = 0.45f;
					uParam1->f_22.f_65 = 39.1327f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 1:
					uParam1->f_22.f_59 = { 320.3405f, -1002.1382f, 29.9967f };
					uParam1->f_22.f_62 = { 5.1997f, -0.143f, -57.2915f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_65 = 39.1327f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 3:
				case 2:
					if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)))
					{
						uParam1->f_22.f_13 = { 345.7383f, -972.8771f, 29.8109f };
						uParam1->f_22.f_16 = { -0.3374f, -0.0272f, -173.5036f };
						uParam1->f_22.f_19 = 21.8576f;
						uParam1->f_22.f_20 = { 345.7367f, -972.8389f, 29.811f };
						uParam1->f_22.f_23 = { -0.3374f, -0.0272f, 179.5144f };
						uParam1->f_22.f_26 = 21.8576f;
						uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
						uParam1->f_22.f_28 = { 345.009f, -977.811f, 28.354f };
						uParam1->f_22.f_31 = { 0f, 0f, -90f };
						uParam1->f_22.f_59 = { 353.0908f, -944.127f, 36.5719f };
						uParam1->f_22.f_62 = { -9.5129f, 0.055f, 169.6899f };
						uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
						uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
						uParam1->f_22.f_72[0] = 0.295f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "ext_player";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 26.5215f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_40 = 0.1f;
					}
					else
					{
						uParam1->f_22.f_13 = { 350.0937f, -987.0516f, 29.4925f };
						uParam1->f_22.f_16 = { -1.1151f, 0.0344f, 29.3254f };
						uParam1->f_22.f_19 = 24.8976f;
						uParam1->f_22.f_20 = { 349.7521f, -986.7112f, 29.4844f };
						uParam1->f_22.f_23 = { 0.0137f, 0.0344f, 29.3254f };
						uParam1->f_22.f_26 = 24.8976f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 345.211f, -978.907f, 28.391f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_59 = { 353.0908f, -944.127f, 36.5719f };
						uParam1->f_22.f_62 = { -9.5129f, 0.055f, 169.6899f };
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 26.5215f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_40 = 0.1f;
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 104:
			switch (iParam2)
			{
				case 0:
					uParam1->f_22.f_13 = { -164.9168f, -1293.6842f, 32.1573f };
					uParam1->f_22.f_16 = { -40.8131f, 0f, -26.9471f };
					uParam1->f_22.f_28 = { -164.223f, -1292.637f, 30.319f };
					uParam1->f_22.f_31 = { 0f, 0f, 92.52f };
					uParam1->f_22.f_59 = { -152.7097f, -1316.4662f, 32.9863f };
					uParam1->f_22.f_62 = { 4.8618f, -0.0778f, 27.9171f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_3 = "anim@apt_trans@garage";
					uParam1->f_22.f_5 = "gar_open_1_left";
					uParam1->f_22.f_19 = 50f;
					uParam1->f_22.f_34 = 0f;
					uParam1->f_22.f_35 = 0.45f;
					uParam1->f_22.f_65 = 43.7476f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 1:
					uParam1->f_22.f_59 = { -152.7097f, -1316.4662f, 32.9863f };
					uParam1->f_22.f_62 = { 4.8618f, -0.0778f, 27.9171f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_65 = 43.7476f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 3:
				case 2:
					if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)))
					{
						uParam1->f_22.f_13 = { -120.2416f, -1252.5824f, 29.5363f };
						uParam1->f_22.f_16 = { 0.4478f, -0.0047f, 178.3607f };
						uParam1->f_22.f_19 = 23.1452f;
						uParam1->f_22.f_20 = { -120.2414f, -1252.583f, 29.5363f };
						uParam1->f_22.f_23 = { 0.5015f, 0.0127f, 172.6561f };
						uParam1->f_22.f_26 = 23.1452f;
						uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
						uParam1->f_22.f_28 = { -121.897f, -1259.057f, 28.308f };
						uParam1->f_22.f_31 = { 0f, 0f, 92.52f };
						uParam1->f_22.f_59 = { -83.4536f, -1300.0598f, 34.355f };
						uParam1->f_22.f_62 = { 6.6798f, 0.1368f, 52.8183f };
						uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
						uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
						uParam1->f_22.f_72[0] = 0.295f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "ext_player";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 39.7724f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_40 = 0.1f;
					}
					else
					{
						uParam1->f_22.f_13 = { -112.3821f, -1269.386f, 29.3331f };
						uParam1->f_22.f_16 = { 1.0725f, 0.0316f, 48.5627f };
						uParam1->f_22.f_19 = 22.6512f;
						uParam1->f_22.f_20 = { -112.7527f, -1269.0587f, 29.342f };
						uParam1->f_22.f_23 = { 1.0341f, 0.0602f, 48.572f };
						uParam1->f_22.f_26 = 22.6512f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -121.36f, -1260.548f, 28.308f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_59 = { -83.4536f, -1300.0598f, 34.355f };
						uParam1->f_22.f_62 = { 6.6798f, 0.1368f, 52.8183f };
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 39.7724f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_40 = 0.1f;
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 105:
			switch (iParam2)
			{
				case 0:
					uParam1->f_22.f_13 = { -23.0476f, 218.7487f, 107.2282f };
					uParam1->f_22.f_16 = { -31.2697f, 0f, -40.8044f };
					uParam1->f_22.f_28 = { -21.944f, 219.546f, 105.725f };
					uParam1->f_22.f_31 = { 0f, 0f, 81.36f };
					uParam1->f_22.f_59 = { -44.4688f, 204.7237f, 108.9804f };
					uParam1->f_22.f_62 = { -0.4062f, -0.0758f, -58.6869f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_3 = "anim@apt_trans@garage";
					uParam1->f_22.f_5 = "gar_open_1_left";
					uParam1->f_22.f_19 = 50f;
					uParam1->f_22.f_34 = 0f;
					uParam1->f_22.f_35 = 0.45f;
					uParam1->f_22.f_65 = 36.5531f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 1:
					uParam1->f_22.f_59 = { -44.4688f, 204.7237f, 108.9804f };
					uParam1->f_22.f_62 = { -0.4062f, -0.0758f, -58.6869f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_65 = 36.5531f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 3:
				case 2:
					if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)))
					{
						uParam1->f_22.f_13 = { 2.6233f, 214.96f, 108.2002f };
						uParam1->f_22.f_16 = { -3.6361f, -0.021f, -16.8917f };
						uParam1->f_22.f_19 = 22.6597f;
						uParam1->f_22.f_20 = { 2.6233f, 214.96f, 108.2002f };
						uParam1->f_22.f_23 = { -3.6361f, -0.021f, -12.2103f };
						uParam1->f_22.f_26 = 22.6597f;
						uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
						uParam1->f_22.f_28 = { 3.774f, 220.598f, 106.805f };
						uParam1->f_22.f_31 = { 0f, 0f, -111.96f };
						uParam1->f_22.f_59 = { 25.287f, 227.52f, 109.8637f };
						uParam1->f_22.f_62 = { 7.0436f, 0.1001f, 104.4277f };
						uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
						uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
						uParam1->f_22.f_72[0] = 0.295f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "ext_player";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 42.5363f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_40 = 0.1f;
					}
					else
					{
						uParam1->f_22.f_13 = { 14.882f, 224.7149f, 109.222f };
						uParam1->f_22.f_16 = { -7.6156f, -0.0484f, 104.2159f };
						uParam1->f_22.f_19 = 29.4327f;
						uParam1->f_22.f_20 = { 14.1812f, 224.497f, 109.124f };
						uParam1->f_22.f_23 = { -7.6156f, -0.0484f, 104.2159f };
						uParam1->f_22.f_26 = 29.4327f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 5.123f, 221.377f, 106.874f };
						uParam1->f_22.f_31 = { 0f, 0f, 70f };
						uParam1->f_22.f_59 = { 25.287f, 227.52f, 109.8637f };
						uParam1->f_22.f_62 = { 7.0436f, 0.1001f, 104.4277f };
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 42.5363f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_40 = 0.1f;
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 106:
			switch (iParam2)
			{
				case 0:
					uParam1->f_22.f_13 = { 910.1858f, -2096.0752f, 31.2476f };
					uParam1->f_22.f_16 = { -28.9932f, 0f, 153.377f };
					uParam1->f_22.f_28 = { 909.102f, -2097.391f, 29.555f };
					uParam1->f_22.f_31 = { 0f, 0f, -93.24f };
					uParam1->f_22.f_59 = { 903.293f, -2071.3438f, 33.1299f };
					uParam1->f_22.f_62 = { 4.4652f, -0.081f, -162.9494f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_3 = "anim@apt_trans@garage";
					uParam1->f_22.f_5 = "gar_open_1_left";
					uParam1->f_22.f_19 = 50f;
					uParam1->f_22.f_34 = 0f;
					uParam1->f_22.f_35 = 0.45f;
					uParam1->f_22.f_65 = 35.2646f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 1:
					uParam1->f_22.f_59 = { 903.293f, -2071.3438f, 33.1299f };
					uParam1->f_22.f_62 = { 4.4652f, -0.081f, -162.9494f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_65 = 35.2646f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 3:
				case 2:
					if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)))
					{
						uParam1->f_22.f_13 = { 870.874f, -2104.2908f, 31.1287f };
						uParam1->f_22.f_16 = { -4.503f, -0.0326f, 1.4382f };
						uParam1->f_22.f_19 = 30.5624f;
						uParam1->f_22.f_20 = { 870.8743f, -2104.2908f, 31.1287f };
						uParam1->f_22.f_23 = { -4.5357f, -0.0234f, -6.9947f };
						uParam1->f_22.f_26 = 30.5624f;
						uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
						uParam1->f_22.f_28 = { 871.784f, -2100.517f, 29.485f };
						uParam1->f_22.f_31 = { 0f, 0f, -93.24f };
						uParam1->f_22.f_59 = { 859.2952f, -2077.384f, 32f };
						uParam1->f_22.f_62 = { 6.983f, -0.0846f, -141.1513f };
						uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
						uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
						uParam1->f_22.f_72[0] = 0.295f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "ext_player";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 41.6961f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_40 = 0.1f;
					}
					else
					{
						uParam1->f_22.f_13 = { 857.1143f, -2093.461f, 32.0931f };
						uParam1->f_22.f_16 = { -6.0736f, -0.0569f, -113.0412f };
						uParam1->f_22.f_19 = 23.774f;
						uParam1->f_22.f_20 = { 858.1631f, -2093.8984f, 31.9719f };
						uParam1->f_22.f_23 = { -6.0736f, -0.0569f, -113.0412f };
						uParam1->f_22.f_26 = 23.774f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 871.913f, -2099.536f, 29.468f };
						uParam1->f_22.f_31 = { 0f, 0f, -93.24f };
						uParam1->f_22.f_59 = { 859.2952f, -2077.384f, 32f };
						uParam1->f_22.f_62 = { 6.983f, -0.0846f, -141.1513f };
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 41.6961f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_40 = 0.1f;
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 107:
			switch (iParam2)
			{
				case 0:
					uParam1->f_22.f_13 = { -671.2646f, -2391.3389f, 14.3195f };
					uParam1->f_22.f_16 = { -34.398f, 0f, -145.8071f };
					uParam1->f_22.f_28 = { -670.722f, -2392.449f, 12.945f };
					uParam1->f_22.f_31 = { 0f, 0f, -27.36f };
					uParam1->f_22.f_59 = { -690.7659f, -2388.2324f, 15.4628f };
					uParam1->f_22.f_62 = { 6.3247f, -0.1369f, -101.1767f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_3 = "anim@apt_trans@garage";
					uParam1->f_22.f_5 = "gar_open_1_left";
					uParam1->f_22.f_19 = 50f;
					uParam1->f_22.f_34 = 0f;
					uParam1->f_22.f_35 = 0.45f;
					uParam1->f_22.f_65 = 50f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 1:
					uParam1->f_22.f_59 = { -690.7659f, -2388.2324f, 15.4628f };
					uParam1->f_22.f_62 = { 6.3247f, -0.1369f, -101.1767f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_65 = 50f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 3:
				case 2:
					if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)))
					{
						uParam1->f_22.f_13 = { -681.7309f, -2455.3752f, 15.1347f };
						uParam1->f_22.f_16 = { -8.855f, 0.0247f, -119.3388f };
						uParam1->f_22.f_19 = 22.2466f;
						uParam1->f_22.f_20 = { -681.7309f, -2455.3752f, 15.1347f };
						uParam1->f_22.f_23 = { -8.855f, 0.0247f, -114.6191f };
						uParam1->f_22.f_26 = 22.2466f;
						uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
						uParam1->f_22.f_28 = { -675.973f, -2457.823f, 12.944f };
						uParam1->f_22.f_31 = { 0f, 0f, 145f };
						uParam1->f_22.f_59 = { -710.5236f, -2466.343f, 16.6375f };
						uParam1->f_22.f_62 = { 0.8154f, -0.0557f, -73.0783f };
						uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
						uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
						uParam1->f_22.f_72[0] = 0.295f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "ext_player";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 32.7225f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_40 = 0.1f;
					}
					else
					{
						uParam1->f_22.f_13 = { -693.5314f, -2461.268f, 14.3947f };
						uParam1->f_22.f_16 = { -2.1671f, -0.008f, -81.7402f };
						uParam1->f_22.f_19 = 22.9362f;
						uParam1->f_22.f_20 = { -692.3806f, -2461.1409f, 14.3506f };
						uParam1->f_22.f_23 = { -2.1859f, 0.0064f, -81.7588f };
						uParam1->f_22.f_26 = 22.9362f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -675.07f, -2458.729f, 12.944f };
						uParam1->f_22.f_31 = { 0f, 0f, -30f };
						uParam1->f_22.f_59 = { -710.5236f, -2466.343f, 16.6375f };
						uParam1->f_22.f_62 = { 0.8154f, -0.0557f, -73.0783f };
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 32.7225f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_40 = 0.1f;
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 108:
			switch (iParam2)
			{
				case 0:
					uParam1->f_22.f_13 = { 228.9341f, -3136.0327f, 6.1133f };
					uParam1->f_22.f_16 = { -32.699f, 0f, 149.4484f };
					uParam1->f_22.f_28 = { 228.126f, -3137.098f, 4.79f };
					uParam1->f_22.f_31 = { 0f, 0f, -90f };
					uParam1->f_22.f_59 = { 198.7077f, -3086.3662f, 7.1945f };
					uParam1->f_22.f_62 = { 15.5745f, -0.1055f, -148.616f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_3 = "anim@apt_trans@garage";
					uParam1->f_22.f_5 = "gar_open_1_left";
					uParam1->f_22.f_19 = 50f;
					uParam1->f_22.f_34 = 0f;
					uParam1->f_22.f_35 = 0.45f;
					uParam1->f_22.f_65 = 44.4095f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 1:
					uParam1->f_22.f_59 = { 198.7077f, -3086.3662f, 7.1945f };
					uParam1->f_22.f_62 = { 15.5745f, -0.1055f, -148.616f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_65 = 44.4095f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 3:
				case 2:
					if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)))
					{
						uParam1->f_22.f_13 = { 195.7928f, -3162.765f, 6.3781f };
						uParam1->f_22.f_16 = { -3.3617f, -0.0138f, 175.6586f };
						uParam1->f_22.f_19 = 24.903f;
						uParam1->f_22.f_20 = { 195.7931f, -3162.7651f, 6.3781f };
						uParam1->f_22.f_23 = { -3.3019f, -0.0122f, -177.7359f };
						uParam1->f_22.f_26 = 24.903f;
						uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
						uParam1->f_22.f_28 = { 195.893f, -3166.785f, 4.79f };
						uParam1->f_22.f_31 = { 0f, 0f, -90f };
						uParam1->f_22.f_59 = { 165.8182f, -3111.9749f, 9.2922f };
						uParam1->f_22.f_62 = { -1.4158f, 0f, -154.7472f };
						uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
						uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
						uParam1->f_22.f_72[0] = 0.295f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "ext_player";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 23.9466f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_40 = 0.1f;
					}
					else
					{
						uParam1->f_22.f_13 = { 184.4767f, -3183.5251f, 8.2147f };
						uParam1->f_22.f_16 = { -7.0205f, -0.012f, -36.0039f };
						uParam1->f_22.f_19 = 19.7843f;
						uParam1->f_22.f_20 = { 185.0856f, -3182.6868f, 8.0869f };
						uParam1->f_22.f_23 = { -7.0339f, -0.0005f, -36.0202f };
						uParam1->f_22.f_26 = 19.7843f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 195.93f, -3168.76f, 4.79f };
						uParam1->f_22.f_31 = { 0f, 0f, -90f };
						uParam1->f_22.f_59 = { 165.8182f, -3111.9749f, 9.2922f };
						uParam1->f_22.f_62 = { -1.4158f, 0f, -154.7472f };
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 23.9466f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_40 = 0.1f;
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 109:
			switch (iParam2)
			{
				case 0:
					uParam1->f_22.f_13 = { 378.6244f, 227.2742f, 103.59f };
					uParam1->f_22.f_16 = { -28.5122f, 0f, 42.8991f };
					uParam1->f_22.f_28 = { 377.791f, 228.536f, 102.041f };
					uParam1->f_22.f_31 = { 0f, 0f, 160f };
					uParam1->f_22.f_59 = { 417.9737f, 268.4984f, 105.3028f };
					uParam1->f_22.f_62 = { 8.9579f, 0.1211f, 125.3569f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_3 = "anim@apt_trans@garage";
					uParam1->f_22.f_5 = "gar_open_1_left";
					uParam1->f_22.f_19 = 50f;
					uParam1->f_22.f_34 = 0f;
					uParam1->f_22.f_35 = 0.45f;
					uParam1->f_22.f_65 = 40.5806f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 1:
					uParam1->f_22.f_59 = { 417.9737f, 268.4984f, 105.3028f };
					uParam1->f_22.f_62 = { 8.9579f, 0.1211f, 125.3569f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_65 = 40.5806f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 3:
				case 2:
					if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)))
					{
						uParam1->f_22.f_13 = { 365.8969f, 254.6099f, 104.4705f };
						uParam1->f_22.f_16 = { -10.1362f, -0.0298f, -104.906f };
						uParam1->f_22.f_19 = 17.3858f;
						uParam1->f_22.f_20 = { 365.8956f, 254.61f, 104.4707f };
						uParam1->f_22.f_23 = { -10.1524f, -0.0363f, -109.1475f };
						uParam1->f_22.f_26 = 17.3858f;
						uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
						uParam1->f_22.f_28 = { 371.39f, 251.933f, 102.01f };
						uParam1->f_22.f_31 = { 0f, 0f, 160f };
						uParam1->f_22.f_59 = { 405.0143f, 277.6437f, 106.8855f };
						uParam1->f_22.f_62 = { 10.0144f, 0.1097f, 130.9049f };
						uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
						uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
						uParam1->f_22.f_72[0] = 0.295f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "ext_player";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 41.9232f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_40 = 0.1f;
					}
					else
					{
						uParam1->f_22.f_13 = { 368.3786f, 272.6442f, 104.2729f };
						uParam1->f_22.f_16 = { -3.6979f, 0.0161f, -167.2546f };
						uParam1->f_22.f_19 = 15.6749f;
						uParam1->f_22.f_20 = { 368.7488f, 271.627f, 104.2087f };
						uParam1->f_22.f_23 = { -4.3374f, 0.031f, -168.0554f };
						uParam1->f_22.f_26 = 15.6749f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 372.98f, 251.7f, 102.01f };
						uParam1->f_22.f_31 = { 0f, 0f, 160f };
						uParam1->f_22.f_59 = { 405.0143f, 277.6437f, 106.8855f };
						uParam1->f_22.f_62 = { 10.0144f, 0.1097f, 130.9049f };
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 41.9232f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_40 = 0.1f;
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 110:
			switch (iParam2)
			{
				case 0:
					uParam1->f_22.f_13 = { -1236.0948f, -693.8033f, 24.148f };
					uParam1->f_22.f_16 = { -28.7894f, 0f, 103.794f };
					uParam1->f_22.f_28 = { -1237.538f, -693.933f, 22.774f };
					uParam1->f_22.f_31 = { 0f, 0f, -141.12f };
					uParam1->f_22.f_59 = { -1217.1691f, -697.5862f, 23.4599f };
					uParam1->f_22.f_62 = { 10.9504f, 0.0707f, 80.6866f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_3 = "anim@apt_trans@garage";
					uParam1->f_22.f_5 = "gar_open_1_left";
					uParam1->f_22.f_19 = 50f;
					uParam1->f_22.f_34 = 0f;
					uParam1->f_22.f_35 = 0.45f;
					uParam1->f_22.f_65 = 38.7236f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 1:
					uParam1->f_22.f_59 = { -1217.1691f, -697.5862f, 23.4599f };
					uParam1->f_22.f_62 = { 10.9504f, 0.0707f, 80.6866f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_65 = 38.7236f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 3:
				case 2:
					if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)))
					{
						uParam1->f_22.f_13 = { -1281.8516f, -648.2418f, 28.0509f };
						uParam1->f_22.f_16 = { -15.1256f, -0.0016f, 144.3962f };
						uParam1->f_22.f_19 = 31.5705f;
						uParam1->f_22.f_20 = { -1281.8516f, -648.2418f, 28.0509f };
						uParam1->f_22.f_23 = { -15.1256f, -0.0016f, 148.343f };
						uParam1->f_22.f_26 = 31.5705f;
						uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
						uParam1->f_22.f_28 = { -1284.307f, -652.138f, 25.633f };
						uParam1->f_22.f_31 = { 0f, 0f, -141.12f };
						uParam1->f_22.f_59 = { -1283.1177f, -626.3682f, 28.5328f };
						uParam1->f_22.f_62 = { 9.9341f, -0.1005f, -175.6886f };
						uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
						uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
						uParam1->f_22.f_72[0] = 0.295f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "ext_player";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 52.5911f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_40 = 0.1f;
					}
					else
					{
						uParam1->f_22.f_13 = { -1285.8186f, -638.1773f, 27.0734f };
						uParam1->f_22.f_16 = { -0.5751f, 0.0195f, -171.1263f };
						uParam1->f_22.f_19 = 22.7477f;
						uParam1->f_22.f_20 = { -1285.6035f, -639.4156f, 27.0609f };
						uParam1->f_22.f_23 = { -0.5751f, 0.0195f, -171.1263f };
						uParam1->f_22.f_26 = 22.7477f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -1283.03f, -650.28f, 25.618f };
						uParam1->f_22.f_31 = { 0f, 0f, -141.12f };
						uParam1->f_22.f_59 = { -1283.1177f, -626.3682f, 28.5328f };
						uParam1->f_22.f_62 = { 9.9341f, -0.1005f, -175.6886f };
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 52.5911f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_40 = 0.1f;
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 111:
			switch (iParam2)
			{
				case 0:
					uParam1->f_22.f_13 = { -1173.9739f, -1175.0013f, 5.956f };
					uParam1->f_22.f_16 = { -31.1335f, 0f, -9.0984f };
					uParam1->f_22.f_28 = { -1173.642f, -1173.699f, 4.624f };
					uParam1->f_22.f_31 = { 0f, 0f, 107.64f };
					uParam1->f_22.f_59 = { -1158.558f, -1184.7996f, 6.4328f };
					uParam1->f_22.f_62 = { 6.5882f, 0.0642f, 60.206f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_3 = "anim@apt_trans@garage";
					uParam1->f_22.f_5 = "gar_open_1_left";
					uParam1->f_22.f_19 = 50f;
					uParam1->f_22.f_34 = 0f;
					uParam1->f_22.f_35 = 0.45f;
					uParam1->f_22.f_65 = 43.1519f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 1:
					uParam1->f_22.f_59 = { -1158.558f, -1184.7996f, 6.4328f };
					uParam1->f_22.f_62 = { 6.5882f, 0.0642f, 60.206f };
					uParam1->f_22.f_69[0] = "";
					uParam1->f_22.f_69[1] = "";
					uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_79 = "Garage_Door_Close";
					uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
					uParam1->f_22.f_87 = "Garage_Door_Close";
					uParam1->f_22.f_65 = 43.1519f;
					uParam1->f_22.f_66 = 0.2f;
					uParam1->f_22.f_20 = { 0f, 0f, 0f };
					uParam1->f_22.f_23 = { 0f, 0f, 0f };
					uParam1->f_22.f_26 = 0f;
					uParam1->f_22.f_4 = "";
					uParam1->f_22.f_6 = "";
					uParam1->f_22.f_40 = 0.1f;
					break;
				case 3:
				case 2:
					if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), __LIB_3__::func_103(iParam0)))
					{
						uParam1->f_22.f_13 = { -1175.3407f, -1151.5372f, 6.3319f };
						uParam1->f_22.f_16 = { -6.364f, -0.0184f, -147.2254f };
						uParam1->f_22.f_19 = 30.4384f;
						uParam1->f_22.f_20 = { -1175.3407f, -1151.5372f, 6.3319f };
						uParam1->f_22.f_23 = { -6.364f, -0.0184f, -159.4812f };
						uParam1->f_22.f_26 = 30.4384f;
						uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
						uParam1->f_22.f_28 = { -1174.923f, -1153.458f, 4.66f };
						uParam1->f_22.f_31 = { 0f, 0f, 107.64f };
						uParam1->f_22.f_59 = { -1165.6947f, -1132.5479f, 7.01f };
						uParam1->f_22.f_62 = { 2.4561f, -0.1432f, 159.1615f };
						uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
						uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
						uParam1->f_22.f_72[0] = 0.295f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "ext_player";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 44.3756f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_40 = 0.1f;
					}
					else
					{
						uParam1->f_22.f_13 = { -1163.0682f, -1151.5201f, 5.616f };
						uParam1->f_22.f_16 = { 0.5519f, -0.0059f, 88.8311f };
						uParam1->f_22.f_19 = 21.8279f;
						uParam1->f_22.f_20 = { -1163.959f, -1151.5021f, 5.6241f };
						uParam1->f_22.f_23 = { 0.5216f, 0.0051f, 88.8523f };
						uParam1->f_22.f_26 = 21.8279f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -1175.2f, -1152.46f, 4.661f };
						uParam1->f_22.f_31 = { 0f, 0f, 107.64f };
						uParam1->f_22.f_59 = { -1165.6947f, -1132.5479f, 7.01f };
						uParam1->f_22.f_62 = { 2.4561f, -0.1432f, 159.1615f };
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_65 = 44.3756f;
						uParam1->f_22.f_66 = 0.2f;
						uParam1->f_22.f_40 = 0.1f;
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
	}
}

int func_390(int iParam0)//Position - 0x108CDA
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_3__::func_103(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	bVar1 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (bVar1 != __LIB_0__::func_160())
	{
		if (__LIB_4__::func_155(bVar1, iVar0))
		{
			return 0;
		}
	}
	else if (__LIB_4__::func_155(PLAYER::PLAYER_ID(), iVar0))
	{
		return 0;
	}
	return 1;
}

int func_391(var uParam0)//Position - 0x10978F
{
	switch (__LIB_4__::func_85(PLAYER::PLAYER_ID()))
	{
		case 0:
			return 118;
		case 2:
			return 119;
		case 3:
			return 120;
		case 4:
			return 121;
		case 5:
			return 1236;
		default:
	}
	return 0;
}

int func_392(var uParam0, int iParam1, var uParam2)//Position - 0x129307
{
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if ((__LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1) && !__LIB_3__::func_165()) && !__LIB_3__::func_334())
	{
		return 0;
	}
	if (__LIB_1__::func_205(PLAYER::PLAYER_ID()) == 5)
	{
		return 0;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (__LIB_1__::func_909())
	{
		return 0;
	}
	if (__LIB_4__::func_0(PLAYER::PLAYER_ID()) && __LIB_2__::func_436(&(Global_1952191.f_5470.f_3)) != iParam1)
	{
		return 0;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	return 1;
}

int func_393(bool bParam0)//Position - 0x13B1D8
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318, 6);
	}
	return 0;
}

int func_394(bool bParam0, int iParam1)//Position - 0x13C901
{
	if (bParam0 != __LIB_0__::func_160() && BitTest(Global_2689235[bParam0 /*453*/].f_318, 5))
	{
		return __LIB_4__::func_2(bParam0) == iParam1;
	}
	return 0;
}

int func_395(bool bParam0)//Position - 0x14BF86
{
	if (bParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_1, 11);
	}
	return 0;
}

int func_396(int iParam0, int iParam1, struct<3> Param2)//Position - 0x14C5FA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (!__LIB_4__::func_135(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(-376.2393f, -1878.2488f, 19.5278f, Param2) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_397(var uParam0, var uParam1)//Position - 0x14DCBD
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uParam1->f_109, true);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true), 10f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_12, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uParam1->f_109.f_12, true);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
	}
	Var0 = { Var0 };
	Var1 = { Var1 };
	Var0 = { 840.743f, -3238.231f, -98.529f };
	Var1 = { 834.221f, -3234.792f, -98.527f };
	if (Global_1946250.f_4073.f_382 == 0)
	{
		if (!BitTest(uParam1->f_188, 19))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_12, false))
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
				}
				if (!BitTest(uParam1->f_188, 10))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_1[0], false))
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(Global_1946250.f_3638.f_18[0 /*36*/].f_1, 0f, 0f, 0f);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_109.f_1[0], uParam1->f_109, "gr_Bunker_AT_Tunnel", 262144, 0, 0, -1, -1f, false, 2f);
						MISC::SET_BIT(&(uParam1->f_188), 10);
					}
				}
			}
			MISC::SET_BIT(&(uParam1->f_188), 19);
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_109))
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam1->f_109, 15f);
		}
		if (!BitTest(uParam1->f_188, 20))
		{
			if (__LIB_0__::func_529(uParam1->f_109, 903.197f, -3245.255f, -97.743f, 0) <= 2f)
			{
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_109.f_12, false, false);
				MISC::SET_BIT(&(uParam1->f_188), 20);
			}
		}
	}
	else if (__LIB_2__::func_413(&(Global_1946250.f_4073), 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
		{
			if (!BitTest(uParam1->f_188, 21))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 1f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[1], false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
					ENTITY::SET_ENTITY_COLLISION(uParam1->f_109.f_12, true, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_140[1], 835.203f, -3243.384f, -98.716f, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam1->f_140[1], -21f);
				}
				ENTITY::SET_ENTITY_COORDS(uParam1->f_109, Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 62.24f);
				TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(uParam1->f_109);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[1], false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_car_park_attendant@male@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_car_park_attendant@male@base", "base", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE_LOCALLY(uParam1->f_140[1], iVar2);
				}
				MISC::SET_BIT(&(uParam1->f_188), 21);
			}
			if (!BitTest(uParam1->f_188, 22))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_1[0], false)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam1->f_109))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_109.f_1[0], uParam1->f_109, "gr_Bunker_AT_Parking", 262144, 0, 0, -1, -1f, false, 2f);
				}
				MISC::SET_BIT(&(uParam1->f_188), 22);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_109))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam1->f_109, 5f);
			}
			if (__LIB_0__::func_529(uParam1->f_109, 834.228f, -3234.791f, -98.64f, 0) <= 2f)
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(uParam1->f_109, 2f, 10, false);
			}
		}
	}
	if (!Global_1946250.f_4073.f_386)
	{
		if ((BitTest(uParam1->f_188, 23) && CAM::DOES_CAM_EXIST(iLocal_122)) && CAM::IS_CAM_RENDERING(iLocal_122))
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_122, false);
			STREAMING::CLEAR_FOCUS();
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_Bunker_Enter_Interior_Cutscene_Scene");
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_109.f_12, 50f, 50f, 0f, true, false, false, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 50f, 50f, 0f, true, false, false, true);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_122))
		{
			iLocal_122 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			CAM::SET_CAM_PARAMS(iLocal_122, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				switch (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0))
				{
					case -1:
						CAM::SET_CAM_PARAMS(iLocal_122, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
						break;
					case 0:
						CAM::SET_CAM_PARAMS(iLocal_122, 831.9871f, -3228.3909f, -98.0253f, 1.6649f, 0f, -159.9397f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(145.3238f);
						break;
					default:
						CAM::SET_CAM_PARAMS(iLocal_122, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
						break;
				}
			}
			CAM::SET_CAM_ACTIVE(iLocal_122, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		if (!BitTest(uParam1->f_188, 23))
		{
			MISC::SET_BIT(&(uParam1->f_188), 23);
		}
	}
	return 0;
}

void func_398(var uParam0)//Position - 0x1527BD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366, 15))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if ((((bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1)) && !BitTest(Global_2689235[bVar2 /*453*/].f_318, 7)) && !__LIB_3__::func_942(bVar2)) && !__LIB_3__::func_942(PLAYER::PLAYER_ID()))
							{
								if (BitTest(Global_1853348[bVar2 /*834*/].f_267.f_366, 14))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
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

void func_399()//Position - 0x154CBD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366, 15))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = __LIB_3__::func_502(PLAYER::PLAYER_PED_ID(), 0);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if ((bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_4__::func_1(bVar2))
							{
								if (BitTest(Global_1853348[bVar2 /*834*/].f_267.f_366, 14) || __LIB_3__::func_449(bVar2))
								{
									MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366), 15);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_400(var uParam0, var uParam1)//Position - 0x18DE6B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar0]))
		{
			(*uParam1)[iVar0] = NETWORK::NET_TO_PED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_401(var uParam0, var uParam1)//Position - 0x18DEA5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar0]))
		{
			(*uParam1)[iVar0] = NETWORK::NET_TO_OBJ((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_402(var uParam0)//Position - 0x18E0FB
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__::func_86(uParam0->f_46[iVar0 /*3*/]) && !__LIB_0__::func_86(uParam0->f_53[iVar0 /*3*/]))
		{
			fVar1 = 1f;
			if (uParam0->f_60[0] != 0f)
			{
				fVar1 = uParam0->f_60[0];
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_46[iVar0 /*3*/], uParam0->f_53[iVar0 /*3*/], fVar1, false, true, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_403(var uParam0)//Position - 0x18E17C
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_2, true) <= *uParam0 && uParam0->f_8 == 1)
	{
		return 1;
	}
	return 0;
}

char* func_404(int iParam0)//Position - 0x18FD6A
{
	switch (iParam0)
	{
		case 0:
			return "STONED";
		case 1:
			return "FixerShortTrip";
		default:
	}
	return "INVALID_SMOKING_EFFECT";
}

int func_405(var uParam0, var uParam1)//Position - 0x190383
{
	*uParam1 = 0;
	while (*uParam1 < 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), *(uParam0[*uParam1 /*13*/]), (uParam0[*uParam1 /*13*/])->f_3, (uParam0[*uParam1 /*13*/])->f_6, false, true, 0))
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_406(struct<2> Param0, var uParam1, var uParam2)//Position - 0x1903D1
{
	if (PAD::IS_CONTROL_JUST_PRESSED(Param0.f_0, Param0.f_1))
	{
		return 1;
	}
	return 0;
}

int func_407()//Position - 0x190684
{
	return Global_262145.f_30175 /* Tunable: IH_SUBMARINE_MISSILES_COOLDOWN */;
}

int func_408(int iParam0)//Position - 0x1906A2
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_459.f_5 != -1)
		{
			return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_1853348[iParam0 /*834*/].f_267.f_459.f_5));
		}
	}
	return -1;
}

int func_409(int iParam0)//Position - 0x1906E9
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_459.f_4 != -1)
		{
			return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_1853348[iParam0 /*834*/].f_267.f_459.f_4));
		}
	}
	return -1;
}

int func_410()//Position - 0x190841
{
	if ((((!__LIB_0__::func_77(0) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !Global_75485) && !Global_2726967) && !Global_1581351)
	{
		return 1;
	}
	return 0;
}

int func_411(var uParam0)//Position - 0x19087F
{
	Stack.Push(*uParam0);
	Stack.Push(&(uParam0->f_4));
	Call_Loc(uParam0->f_10);
	if (StackVal)
	{
		return 1;
	}
	return 0;
}

void func_412(struct<5> Param0)//Position - 0x190ADA
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param0.f_1))
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Param0.f_1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param0.f_4))
	{
		STREAMING::REMOVE_NAMED_PTFX_ASSET(Param0.f_4);
	}
}

int func_413(var uParam0)//Position - 0x190C38
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_8, "New text widget"))
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET(uParam0->f_8);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(uParam0->f_8))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_414(var uParam0)//Position - 0x190C7E
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_7) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_7, "New text widget"))
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET(uParam0->f_7);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(uParam0->f_7))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

var func_415()//Position - 0x190DAE
{
	return BitTest(Global_1946250.f_3, 25);
}

var func_416(var uParam0, struct<2> Param1)//Position - 0x191E6E
{
	uParam0 = uParam0;
	return Param1.f_1;
}

var func_417(var uParam0, var uParam1, var uParam2)//Position - 0x191E7E
{
	uParam0 = uParam0;
	return uParam1;
}

var func_418()//Position - 0x191EBD
{
	return BitTest(Global_1958711, 13);
}

int func_419(struct<4> Param0)//Position - 0x191EDB
{
	Param0 = { Param0 };
	if (__LIB_4__::func_233() || __LIB_0__::func_93())
	{
		return 1;
	}
	return 0;
}

bool func_420()//Position - 0x191F70
{
	return BitTest(Global_1958691, 2);
}

int func_421(bool bParam0)//Position - 0x192263
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (Global_1892703[iVar0 /*599*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_422()//Position - 0x192288
{
	if (PLAYER::PLAYER_ID() == __LIB_0__::func_160())
	{
		return 0;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160() && PLAYER::PLAYER_ID() != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 /*834*/].f_267.f_459, 2);
	}
	return 0;
}

bool func_423(int iParam0)//Position - 0x19275D
{
	return Global_262145.f_5041[iParam0] == Global_4718592.f_116524;
}

int func_424(bool bParam0)//Position - 0x19277B
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 10;
			}
		}
	}
	return 0;
}

bool func_425(int iParam0)//Position - 0x19280A
{
	return Global_262145.f_5032[4] == iParam0;
}

int func_426()//Position - 0x192843
{
	if (PLAYER::PLAYER_ID() == __LIB_0__::func_160())
	{
		return 0;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160() && PLAYER::PLAYER_ID() != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 /*834*/].f_267.f_459, 1);
	}
	return 0;
}

int func_427()//Position - 0x19297C
{
	switch (Global_1581353)
	{
		case 1:
			return Global_262145.f_21607 /* Tunable: 465374342 */;
			break;
		case 2:
			return Global_262145.f_21608 /* Tunable: -1530856245 */;
		case 3:
			return Global_262145.f_21609 /* Tunable: -423149492 */;
	}
	return 0;
}

var func_428(var uParam0, struct<2> Param1)//Position - 0x1929C1
{
	Param1 = { Param1 };
	return uParam0;
}

int func_429(int iParam0, struct<2> Param1)//Position - 0x1929D3
{
	Param1 = { Param1 };
	iParam0++;
	return iParam0;
}

int func_430(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x193142
{
	if (__LIB_0__::func_661() || Global_75488)
	{
		return 0;
	}
	return 1;
}

void func_431(int iParam0, var uParam1)//Position - 0x1968C5
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "unload_rl_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[0 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_millcage_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[1 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_millcage_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_part_mill_01a";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_4 = { 0f, 0f, 0f };
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "unload_rl_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[0 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_millcage_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[1 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_millcage_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_part_mill_01a";
			break;
	}
}

void func_432(int iParam0, var uParam1)//Position - 0x196B59
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_11 = 18905;
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_01_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_01_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_01_gr_prop_gr_part_mill_01a";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/] = { 0f, -0.38f, 1.13f };
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_3 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_4 = { 0f, 0f, 0f };
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_02_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_02_gr_prop_gr_3s_millcrate_01a";
				}
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_02_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_02_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_02_gr_prop_gr_part_mill_01a";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/] = { 0f, -0.38f, 1.13f };
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_3 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_11 = 18905;
			break;
		case 2:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_03_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_03_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_03_gr_prop_gr_3s_millcrate_01a";
				}
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_03_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_03_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_03_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_03_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_03_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "operate_03_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_03_gr_prop_gr_part_mill_01a";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/] = { 0f, -0.38f, 1.13f };
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_3 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_11 = 18905;
			break;
	}
}

void func_433(int iParam0, var uParam1)//Position - 0x1973F0
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "reachout_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "reachout_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "reachout_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "reachout_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "reachout_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "reachout_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "reachout_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reachout_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reachout_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reachout_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "reachout_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "reachout_gr_prop_gr_part_mill_01a";
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "look_to_right_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_to_right_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_to_right_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "look_to_right_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_to_right_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_to_right_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "look_to_right_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "look_to_right_gr_prop_gr_part_mill_01a";
			break;
		case 2:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "Look_low_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_low_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_low_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "look_low_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_low_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_low_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "look_low_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_low_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_low_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_low_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "Look_low_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "Look_low_gr_prop_gr_part_mill_01a";
			break;
		case 3:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "Look_to_left_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "Look_to_left_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "Look_to_left_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "Look_to_left_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "Look_to_left_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "Look_to_left_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "Look_to_left_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_to_left_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_to_left_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_to_left_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "Look_to_left_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "Look_to_left_gr_prop_gr_part_mill_01a";
			break;
		case 4:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "look_high_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_high_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_high_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_high_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_high_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_high_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "look_high_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "look_high_gr_prop_gr_part_mill_01a";
			break;
		case 5:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "clean_surface_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_11 = 18905;
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_part_mill_01a";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_4 = { 0f, 0f, 0f };
			break;
		case 6:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "clean_surface_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_part_mill_01a";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_4 = { 0f, 0f, 0f };
			break;
		case 7:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "stretch_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "stretch_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "stretch_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "stretch_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "stretch_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "stretch_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "stretch_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "stretch_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "stretch_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "stretch_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "stretch_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "stretch_gr_prop_gr_part_mill_01a";
			break;
		case 9:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "look_around_left_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_part_mill_01a";
			break;
		case 8:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "look_around_Right_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_part_mill_01a";
			break;
	}
}

void func_434(int iParam0, var uParam1)//Position - 0x1985F7
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "load_ll_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "load_ll_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "load_ll_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "load_ll_01_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "load_ll_01_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "load_ll_01_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "load_ll_01_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "load_ll_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "load_ll_01_gr_prop_gr_part_mill_01a";
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "load_ll_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "load_ll_02_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "load_ll_02_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "load_ll_02_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "load_ll_02_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "load_ll_02_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "load_ll_02_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_02_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_02_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_vertmill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_02_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "load_ll_02_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3 /*79*/].f_1 = "load_ll_02_gr_prop_gr_part_mill_01a";
			break;
	}
}

void func_435(int iParam0, var uParam1)//Position - 0x198A16
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "unload_rl_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "unload_rl_01_gr_prop_gr_part_drill_01a";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_11 = 57005;
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "unload_rl_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "unload_rl_02_gr_prop_gr_part_drill_01a";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_41[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0 /*48*/].f_21[0 /*13*/].f_11 = 57005;
			break;
	}
}

void func_436(int iParam0, var uParam1)//Position - 0x198F2B
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "operate_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_01_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_01_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "operate_01_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_01_gr_prop_gr_part_drill_01a";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_drill_smoke_start";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_drill_smoke_stop";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_drill_smoke";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/] = { 0f, -0.12f, 1.15f };
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_3 = { 0f, -90f, 0f };
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_drill_spark_trigger";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_drill_spark";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_1 = { 0f, -0.12f, 1.16f };
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_4 = { 0f, -90f, 0f };
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_02_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_02_gr_prop_gr_part_drill_01a";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_drill_smoke_start";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_drill_smoke_stop";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_drill_smoke";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/] = { 0f, -0.12f, 1.15f };
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_3 = { 0f, -90f, 0f };
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_drill_spark_trigger";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_drill_spark";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_1 = { 0f, -0.12f, 1.16f };
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_4 = { 0f, -90f, 0f };
			break;
		case 2:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_03_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_03_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_03_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "operate_03_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_03_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_03_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "operate_03_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_03_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_03_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_03_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "operate_03_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_03_gr_prop_gr_part_drill_01a";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_drill_smoke_start";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_drill_smoke_stop";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_drill_smoke";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/] = { 0f, -0.12f, 1.15f };
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_3 = { 0f, -90f, 0f };
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_drill_spark_trigger";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_drill_spark";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_1 = { 0f, -0.12f, 1.16f };
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_4 = { 0f, -90f, 0f };
			break;
		case 3:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_04_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "operate_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "operate_02_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_04_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_04_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_04_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "operate_04_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_04_gr_prop_gr_part_drill_01a";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_drill_smoke_start";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_drill_smoke_stop";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_drill_smoke";
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/] = { 0f, -0.12f, 1.15f };
			uParam1->f_24[2 /*79*/].f_12[0 /*14*/].f_3 = { 0f, -90f, 0f };
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_10 = "vfx_bunker_drill_spark_trigger";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_7 = "scr_gr_bunk_drill_spark";
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_1 = { 0f, -0.12f, 1.16f };
			uParam1->f_24[2 /*79*/].f_41[0 /*13*/].f_4 = { 0f, -90f, 0f };
			break;
	}
}

void func_437(int iParam0, var uParam1)//Position - 0x19998A
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "reachout_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "reachout_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "reachout_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "reachout_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "reachout_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "reachout_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "reachout_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reachout_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reachout_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reachout_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "reachout_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "reachout_gr_prop_gr_part_drill_01a";
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "look_to_right_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_to_right_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_to_right_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "look_to_right_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_to_right_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_to_right_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "look_to_right_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "look_to_right_gr_prop_gr_part_drill_01a";
			break;
		case 2:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "Look_low_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "Look_low_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "Look_low_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "Look_low_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "Look_low_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "Look_low_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "Look_low_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_low_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_low_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_low_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "Look_low_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "Look_low_gr_prop_gr_part_drill_01a";
			break;
		case 3:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "Look_to_left_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "Look_to_left_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "Look_to_left_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "Look_to_left_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "Look_to_left_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "Look_to_left_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "Look_to_left_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_to_left_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_to_left_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "Look_to_left_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "Look_to_left_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "Look_to_left_gr_prop_gr_part_drill_01a";
			break;
		case 4:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "stretch_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "stretch_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "stretch_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "stretch_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "stretch_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "stretch_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "stretch_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "stretch_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "stretch_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "stretch_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "stretch_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "stretch_gr_prop_gr_part_drill_01a";
			break;
		case 5:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "scratch_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "scratch_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "scratch_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "scratch_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "scratch_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "scratch_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "scratch_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "scratch_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "scratch_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "scratch_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "scratch_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "scratch_gr_prop_gr_part_drill_01a";
			break;
		case 6:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "look_around_left_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_part_drill_01a";
			break;
		case 7:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "look_around_Right_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_part_drill_01a";
			break;
	}
}

void func_438(int iParam0, var uParam1)//Position - 0x19A701
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "load_ll_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "load_ll_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "load_ll_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "load_ll_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "load_ll_01_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "load_ll_01_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "load_ll_01_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_01_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_01_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_01_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "load_ll_01_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "load_ll_01_gr_prop_gr_part_drill_01a";
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "load_ll_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*79*/].f_1 = "load_ll_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*79*/].f_1 = "load_ll_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*79*/].f_1 = "load_ll_02_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1 /*79*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1 /*79*/].f_1 = "load_ll_02_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1 /*79*/].f_1 = "load_ll_02_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1 /*79*/].f_1 = "load_ll_02_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_02_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_02_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_speeddrill_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_ll_02_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "load_ll_02_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3 /*79*/].f_1 = "load_ll_02_gr_prop_gr_part_drill_01a";
			break;
	}
}

void func_439(int iParam0, var uParam1)//Position - 0x19AB41
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "unload_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "unload_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "unload_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "unload_01_gr_prop_gr_lathe_01c";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "unload_01_gr_prop_gr_part_lathe_01a";
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "unload_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "unload_02_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "unload_02_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_02_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_02_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "unload_02_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "unload_02_gr_prop_gr_lathe_01c";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "unload_02_gr_prop_gr_part_lathe_01a";
			break;
	}
}

void func_440(int iParam0, var uParam1)//Position - 0x19AD76
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_01_hi_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "operate_01_hi_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "operate_01_hi_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[2 /*79*/].f_1 = "operate_01_hi_gr_prop_gr_lathe_01c";
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_01_hi_gr_prop_gr_part_lathe_01a";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/] = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_02_hi_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "operate_02_hi_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "operate_02_hi_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[2 /*79*/].f_1 = "operate_02_hi_gr_prop_gr_lathe_01c";
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_02_hi_gr_prop_gr_part_lathe_01a";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/] = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_3 = { 0f, 0f, 0f };
			break;
	}
}

void func_441(int iParam0, var uParam1)//Position - 0x19AF83
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "look_around_left_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "look_around_left_01_gr_prop_gr_part_lathe_01a";
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "look_around_Right_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "look_around_Right_01_gr_prop_gr_part_lathe_01a";
			break;
		case 2:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "look_to_right_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "look_to_right_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "look_to_right_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "look_to_right_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "look_to_right_gr_prop_gr_part_lathe_01a";
			break;
		case 3:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "scratch_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "scratch_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "scratch_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "scratch_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "scratch_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "scratch_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "scratch_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "scratch_gr_prop_gr_part_lathe_01a";
			break;
		case 4:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "clean_surface_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "clean_surface_02_gr_prop_gr_part_lathe_01a";
			break;
		case 5:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "clean_surface_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "clean_surface_01_gr_prop_gr_part_lathe_01a";
			break;
	}
}

void func_442(int iParam0, var uParam1)//Position - 0x19B604
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "load_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "load_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "load_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "load_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "load_01_gr_prop_gr_part_lathe_01a";
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "load_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "load_02_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "load_02_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_02_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_02_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_02_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "load_02_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "load_02_gr_prop_gr_part_lathe_01a";
			break;
		case 2:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "load_03_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "load_03_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "load_03_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_03_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_03_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_03_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "load_03_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "load_03_gr_prop_gr_part_lathe_01a";
			break;
		case 3:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "load_04_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "load_04_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "load_04_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_04_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_04_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "load_04_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "load_04_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "load_04_gr_prop_gr_part_lathe_01a";
			break;
	}
}

void func_443(int iParam0, var uParam1)//Position - 0x19BA5F
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "adjust_handle_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "adjust_handle_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "adjust_handle_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "adjust_handle_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "adjust_handle_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "adjust_handle_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "adjust_handle_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "adjust_handle_gr_prop_gr_part_lathe_01a";
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "reject_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "reject_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "reject_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reject_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reject_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reject_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "reject_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "reject_01_gr_prop_gr_part_lathe_01a";
			break;
		case 2:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "reject_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "reject_02_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "reject_02_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reject_02_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reject_02_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reject_02_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "reject_02_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "reject_02_gr_prop_gr_part_lathe_01a";
			break;
		case 3:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "reject_03_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "reject_03_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "reject_03_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reject_03_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reject_03_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "reject_03_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "reject_03_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "reject_03_gr_prop_gr_part_lathe_01a";
			break;
		case 4:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "clean_surface_03_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "clean_surface_03_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "clean_surface_03_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_03_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_03_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "clean_surface_03_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "clean_surface_03_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "clean_surface_03_gr_prop_gr_part_lathe_01a";
			break;
	}
}

void func_444(int iParam0, var uParam1)//Position - 0x19C0C3
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_01_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "operate_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "operate_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "operate_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_01_gr_prop_gr_part_lathe_01a";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/] = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			uParam1->f_1605[0 /*48*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0 /*48*/].f_1), "operate_02_amy_skater_01", 64);
			uParam1->f_24[0 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*79*/].f_1 = "operate_02_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1 /*79*/].f_1 = "operate_02_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2 /*79*/] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2 /*79*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01a"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01b"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2 /*79*/].f_8) == joaat("gr_prop_gr_lathe_01c"))
				{
					uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2 /*79*/].f_1 = "operate_02_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3 /*79*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3 /*79*/].f_1 = "operate_02_gr_prop_gr_part_lathe_01a";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_7 = "scr_gr_bunk";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/] = { 0f, 0f, 0f };
			uParam1->f_24[3 /*79*/].f_12[0 /*14*/].f_3 = { 0f, 0f, 0f };
			break;
	}
}

void func_445(int iParam0, int iParam1, var uParam2)//Position - 0x19C477
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "WORLD_HUMAN_VEHICLE_MECHANIC", 64);
					uParam2->f_1726 = 1;
					break;
			}
			break;
	}
}

int func_446(int iParam0)//Position - 0x19CCA0
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 9);
	}
	return 0;
}

int func_447(int iParam0)//Position - 0x19CCC7
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 10);
	}
	return 0;
}

int func_448(int iParam0)//Position - 0x19CD5A
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		default:
	}
	return 0;
}

int func_449()//Position - 0x19CD7A
{
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160() && PLAYER::PLAYER_ID() != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 /*834*/].f_267.f_348, 20);
	}
	return 0;
}

int func_450(struct<4> Param0)//Position - 0x19D6B5
{
	Param0 = { Param0 };
	if (!Global_2787784)
	{
		return 1;
	}
	return 0;
}

int func_451(struct<4> Param0)//Position - 0x19D6D2
{
	Param0 = { Param0 };
	if (Global_2787784)
	{
		return 1;
	}
	return 0;
}

char* func_452()//Position - 0x19D743
{
	char* sVar0;
	if (Global_1836616 == 0)
	{
		sVar0 = "HUNTGUN_T_1_DB" /* GXT: Press ~INPUT_CELLPHONE_SELECT~ to use the IAA Turret.~n~Press ~INPUT_CONTEXT~ to stand up. */;
	}
	else
	{
		sVar0 = "HUNTGUN_T_2_DB" /* GXT: Press ~INPUT_CONTEXT~ to stand up. */;
	}
	return sVar0;
}

void func_453(int iParam0, int iParam1, var uParam2)//Position - 0x19DFCE
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0 /*48*/] = "amb@world_human_aa_coffee@idle_a";
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "idle_a", 64);
					break;
				case 1:
					uParam2->f_1605[0 /*48*/] = "amb@world_human_aa_coffee@idle_a";
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "idle_b", 64);
					break;
				case 2:
					uParam2->f_1605[0 /*48*/] = "amb@world_human_aa_coffee@idle_a";
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "idle_c", 64);
					break;
			}
			break;
	}
}

void func_454(int iParam0, int iParam1, var uParam2)//Position - 0x19E062
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "WORLD_HUMAN_AA_COFFEE", 64);
					break;
			}
			break;
	}
}

void func_455(int iParam0, int iParam1, var uParam2)//Position - 0x19E09B
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "WORLD_HUMAN_TOURIST_MOBILE", 64);
					break;
			}
			break;
	}
}

void func_456(int iParam0, int iParam1, var uParam2)//Position - 0x19E0D4
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "WORLD_HUMAN_TOURIST_MAP", 64);
					break;
			}
			break;
	}
}

void func_457(int iParam0, int iParam1, var uParam2)//Position - 0x19E10D
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "WORLD_HUMAN_CONST_DRILL", 64);
					break;
			}
			break;
	}
}

void func_458(int iParam0, int iParam1, var uParam2)//Position - 0x19E146
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "WORLD_HUMAN_WELDING", 64);
					break;
			}
			break;
	}
}

void func_459(int iParam0, int iParam1, var uParam2)//Position - 0x19E17F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "WORLD_HUMAN_HAMMERING", 64);
					break;
			}
			break;
	}
}

void func_460(int iParam0, int iParam1, var uParam2)//Position - 0x19E1B8
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "WORLD_HUMAN_SMOKING", 64);
					break;
			}
			break;
	}
}

void func_461(int iParam0, int iParam1, var uParam2)//Position - 0x19E1F1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "WORLD_HUMAN_HANG_OUT_STREET", 64);
					break;
			}
			break;
	}
}

void func_462(int iParam0, int iParam1, var uParam2)//Position - 0x19E22A
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0 /*48*/].f_1), "WORLD_HUMAN_JANITOR", 64);
					uParam2->f_1726 = 1;
					break;
			}
			break;
	}
}

int func_463(var uParam0, var uParam1)//Position - 0x1A9CFA
{
	int iVar0;
	int iVar1;
	if (uParam0->f_2222 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2180[iVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
					{
						return 0;
					}
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_464(var uParam0, var uParam1)//Position - 0x1A9F7A
{
	int iVar0;
	if (uParam0->f_2222 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2180[iVar0]))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam1)[iVar0]))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_465(int iParam0, int iParam1)//Position - 0x1AC712
{
	if (__LIB_1__::func_197(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_466(int iParam0)//Position - 0x1ACF34
{
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2, 17);
}

void func_467(var uParam0)//Position - 0x1ACF5D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2) || HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		if (__LIB_0__::func_1(uParam0->f_2))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (__LIB_0__::func_1("FROSTLIGHT_PMT" /* GXT: Press ~INPUT_CONTEXT~ to activate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to brighten the Lights. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("FROSTLIGHT_PMT2" /* GXT: Press ~INPUT_CONTEXT~ to deactivate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to brighten the Lights. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("FROSTLIGHT_PMT3" /* GXT: Press ~INPUT_CONTEXT~ to activate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to dim the lights. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("FROSTLIGHT_PMT4" /* GXT: Press ~INPUT_CONTEXT~ to deactivate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to dim the lights. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_468(var uParam0)//Position - 0x1AD26C
{
	if (BitTest(uParam0->f_1741, 1) && !BitTest(uParam0->f_1741, 2))
	{
		MISC::SET_BIT(&(uParam0->f_1741), 2);
		if (Global_1946250.f_4587)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", -1613.6f, -3011.5f, -75.2f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", -1613.6f, -3011.5f, -75.2f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
	}
}

void func_469(var uParam0)//Position - 0x1AD3BD
{
	if (BitTest(uParam0->f_1741, 1) && !BitTest(uParam0->f_1741, 2))
	{
		MISC::SET_BIT(&(uParam0->f_1741), 2);
		if (Global_1946250.f_4544)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", 372.115f, 4827.504f, -58.47f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", 372.115f, 4827.504f, -58.47f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
	}
}

void func_470(var uParam0)//Position - 0x1AD50E
{
	if (BitTest(uParam0->f_1741, 1) && !BitTest(uParam0->f_1741, 2))
	{
		MISC::SET_BIT(&(uParam0->f_1741), 2);
		if (Global_1946250.f_4543)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", 367.317f, 4846.754f, -58.448f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", 367.317f, 4846.754f, -58.448f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
	}
}

int func_471(int iParam0)//Position - 0x1AE6F1
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510 == 2;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 4);
}

bool func_472(int iParam0)//Position - 0x1AE8E9
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_285.f_1, 26);
}

int func_473(int iParam0, int iParam1)//Position - 0x1B0CE4
{
	int iVar0;
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_346(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_474(int iParam0)//Position - 0x1B0D43
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_18956 /* Tunable: BIKER_WEED_CAPACITY */;
		case 1:
			return Global_262145.f_18964 /* Tunable: BIKER_METH_CAPACITY */;
		case 3:
			return Global_262145.f_18972 /* Tunable: BIKER_COCAINE_CAPACITY */;
		case 5:
			return Global_262145.f_18980 /* Tunable: BIKER_FAKEIDS_CAPACITY */;
		case 4:
			return Global_262145.f_18988 /* Tunable: BIKER_COUNTERCASH_CAPACITY */;
		case 7:
			return Global_262145.f_18956 /* Tunable: BIKER_WEED_CAPACITY */;
		case 6:
			return Global_262145.f_18964 /* Tunable: BIKER_METH_CAPACITY */;
		case 8:
			return Global_262145.f_18972 /* Tunable: BIKER_COCAINE_CAPACITY */;
		case 10:
			return Global_262145.f_18980 /* Tunable: BIKER_FAKEIDS_CAPACITY */;
		case 9:
			return Global_262145.f_18988 /* Tunable: BIKER_COUNTERCASH_CAPACITY */;
		case 12:
			return Global_262145.f_18956 /* Tunable: BIKER_WEED_CAPACITY */;
		case 11:
			return Global_262145.f_18964 /* Tunable: BIKER_METH_CAPACITY */;
		case 13:
			return Global_262145.f_18972 /* Tunable: BIKER_COCAINE_CAPACITY */;
		case 15:
			return Global_262145.f_18980 /* Tunable: BIKER_FAKEIDS_CAPACITY */;
		case 14:
			return Global_262145.f_18988 /* Tunable: BIKER_COUNTERCASH_CAPACITY */;
		case 17:
			return Global_262145.f_18956 /* Tunable: BIKER_WEED_CAPACITY */;
		case 16:
			return Global_262145.f_18964 /* Tunable: BIKER_METH_CAPACITY */;
		case 18:
			return Global_262145.f_18972 /* Tunable: BIKER_COCAINE_CAPACITY */;
		case 20:
			return Global_262145.f_18980 /* Tunable: BIKER_FAKEIDS_CAPACITY */;
		case 19:
			return Global_262145.f_18988 /* Tunable: BIKER_COUNTERCASH_CAPACITY */;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			return Global_262145.f_21575 /* Tunable: GR_MANU_CAPACITY */;
		default:
	}
	return 0;
}

int func_475(var uParam0)//Position - 0x1B1965
{
	int iVar0;
	if (!uParam0->f_1702)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if ((uParam0->f_1605[iVar0 /*48*/].f_17 != 0 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1605[iVar0 /*48*/].f_17, false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1605[iVar0 /*48*/].f_1)))
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_1605[iVar0 /*48*/].f_17, &(uParam0->f_1605[iVar0 /*48*/].f_1), uParam0->f_5, uParam0->f_8.f_2, 0, false, true);
			}
			iVar0++;
		}
		uParam0->f_1702 = 1;
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1605[0 /*48*/].f_17, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION")) != 1)
	{
		uParam0->f_1702 = 0;
		return 0;
	}
	return 1;
}

void func_476(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1B4F0E
{
	int iVar0;
	struct<3> Var1;
	iVar0 = uParam1->f_17.f_6;
	if (iVar0 != -1)
	{
		if (uParam0->f_6 == 0 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= *uParam0 && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) < uParam0->f_1) || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY("Start"))))
		{
			uParam0->f_9 = AUDIO::GET_SOUND_ID();
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam2, true) };
			AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_9, "Money_Counter_Loop", ENTITY::GET_ENTITY_COORDS(iParam2, true), "DLC_Biker_Business_CFM_Sounds", false, 0, false);
			uParam0->f_6 = 1;
		}
		else if (uParam0->f_6 == 1)
		{
			if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_1 || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY("Stop"))) || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY("Jam")))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY("Stop")))
				{
					AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_9, "isMachineJammed", 0f);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY("Jam")))
				{
					AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_9, "isMachineJammed", 1f);
				}
				AUDIO::STOP_SOUND(uParam0->f_9);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_9);
				uParam0->f_6 = 0;
			}
		}
	}
}

int func_477(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1B5C17
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam2[iVar0 /*9*/])->f_8))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((uParam2[iVar0 /*9*/])->f_8))
			{
				uParam0->f_24[iVar0 /*79*/].f_8 = (uParam2[iVar0 /*9*/])->f_8;
				(*uParam1)[iVar0] = (uParam2[iVar0 /*9*/])->f_8;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY((uParam2[iVar0 /*9*/])->f_8);
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0]) && uParam0->f_1605[iVar0 /*48*/].f_17 != (*uParam3)[iVar0])
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((*uParam3)[iVar0]))
			{
				uParam0->f_1605[iVar0 /*48*/].f_17 = (*uParam3)[iVar0];
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY((*uParam3)[iVar0]);
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0]))
		{
		}
		iVar0++;
	}
	return 1;
}

void func_478(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1B5E3F
{
	int iVar0;
	struct<3> Var1;
	iVar0 = uParam1->f_17.f_6;
	if (iVar0 != -1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
		{
			if (uParam0->f_6 == 0 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= *uParam0 && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) < uParam0->f_1) || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY(uParam0->f_7))))
			{
				uParam0->f_9 = AUDIO::GET_SOUND_ID();
				Var1 = { ENTITY::GET_ENTITY_COORDS(iParam2, true) };
				AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_9, uParam0->f_4, ENTITY::GET_ENTITY_COORDS(iParam2, true), uParam0->f_5, false, 0, false);
				uParam0->f_6 = 1;
			}
			else if (uParam0->f_6 == 1)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_1 || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY(uParam0->f_8)))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
					{
						AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_9, uParam0->f_2, uParam0->f_3);
					}
					AUDIO::STOP_SOUND(uParam0->f_9);
					AUDIO::RELEASE_SOUND_ID(uParam0->f_9);
					uParam0->f_6 = 0;
				}
			}
		}
	}
}

void func_479(var uParam0, var uParam1, int iParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, bool bParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1B5F33
{
	if (uParam0->f_20 < 17)
	{
		(uParam1[uParam0->f_20 /*74*/])->f_5 = iParam2;
		(uParam1[uParam0->f_20 /*74*/])->f_2 = { Param5 };
		(uParam1[uParam0->f_20 /*74*/])->f_10 = { Param3 };
		(uParam1[uParam0->f_20 /*74*/])->f_13 = { Param4 };
		(uParam1[uParam0->f_20 /*74*/])->f_8 = bParam6;
		(uParam1[uParam0->f_20 /*74*/])->f_73 = iParam9;
		if (bParam6)
		{
			(*uParam1)[uParam0->f_20 /*74*/] = iParam8;
		}
		if (iParam7 > -1)
		{
			(uParam1[uParam0->f_20 /*74*/])->f_9 = iParam7;
		}
		else
		{
			(uParam1[uParam0->f_20 /*74*/])->f_9 = uParam0->f_20;
		}
		uParam0->f_20++;
	}
}

int func_480(int iParam0)//Position - 0x1B71B0
{
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (!__LIB_1__::func_264(iParam0, 0, 1))
	{
		if (BitTest(Global_2689235[iParam0 /*453*/].f_318, 28) && __LIB_1__::func_264(iParam0, 1, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_481(var uParam0, var uParam1, var uParam2)//Position - 0x1BB378
{
	uParam0->f_12 = 0;
	__LIB_4__::func_259(uParam0, 0);
	uParam0->f_18 = uParam1;
	uParam0->f_17 = uParam2;
	MISC::CLEAR_BIT(&(uParam0->f_9), 3);
	MISC::CLEAR_BIT(&(uParam0->f_9), 4);
	MISC::SET_BIT(&(uParam0->f_8), 0);
}

void func_482(var uParam0)//Position - 0x1BB92E
{
	if (uParam0->f_11 == -1)
	{
		uParam0->f_11 = AUDIO::GET_SOUND_ID();
		if (__LIB_4__::func_250())
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_11, "Pan", "DLC_Arena_CCTV_SOUNDSET", true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_11, "Pan", "MP_CCTV_SOUNDSET", true);
		}
	}
}

void func_483(var uParam0)//Position - 0x1BC85B
{
	if (uParam0->f_14 == -1)
	{
		uParam0->f_14 = AUDIO::GET_SOUND_ID();
		if (__LIB_4__::func_250())
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_14, "Background", "DLC_Arena_CCTV_SOUNDSET", true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_14, "Background", "MP_CCTV_SOUNDSET", true);
		}
	}
}

void func_484(var uParam0)//Position - 0x1BD90F
{
	if (uParam0->f_13 == -1)
	{
		uParam0->f_13 = AUDIO::GET_SOUND_ID();
		if (__LIB_4__::func_250())
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_13, "Change_Cam", "DLC_Arena_CCTV_SOUNDSET", true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_13, "Change_Cam", "MP_CCTV_SOUNDSET", true);
		}
	}
}

int func_485(int iParam0)//Position - 0x1BDAB8
{
	if (__LIB_4__::func_270(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_486(int iParam0)//Position - 0x1BF11C
{
	switch (iParam0)
	{
		case 0:
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
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 && !__LIB_4__::func_250())
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

bool func_487()//Position - 0x1C0BE8
{
	return Global_1946250.f_4590 != -1;
}

int func_488()//Position - 0x1C3098
{
	if (BitTest(Global_1946250.f_506, 31))
	{
		return 1;
	}
	return 0;
}

int func_489(int iParam0, bool bParam1)//Position - 0x2065
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = (MISC::GET_CONTENT_ID_INDEX(iParam0) - 2018);
		if (iVar0 < -1)
		{
			iVar0 = -1;
		}
		return iVar0;
	}
	return MISC::GET_CONTENT_ID_INDEX(iParam0);
}

int func_490()//Position - 0x2DA8
{
	if (__LIB_0__::func_1("MPOF_AC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
	{
		return 1;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (__LIB_0__::func_1("MPOF_AC_PC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
		{
			return 1;
		}
	}
	return 0;
}

int func_491()//Position - 0x2DD7
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (((((((((((((((((((__LIB_0__::func_1("WHOUSEINPUTTRPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this desktop computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("MP_OFF_LAP_PC" /* GXT: Register as SecuroServ CEO to gain access to this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_MIS" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("SECINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_BDY" /* GXT: This computer is unavailable when working as an Associate. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFFLAPTOP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. ~n~Press ~INPUT_FRONTEND_ACCEPT~ to use the laptop. */)) || __LIB_0__::func_1("CLBHINPUTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to securely access the Open Road website. Business gameplay is only available in Public Sessions. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("ORINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to found a Motorcycle Club and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CH_PC" /* GXT: This computer is unavailable when working for an MC President. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CHV_PC" /* GXT: This computer is unavailable when working as a Bodyguard for a VIP. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("IEAPPINPUTTRPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this laptop computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("AHAPRVSESINPTPC" /* GXT: Join a public session to access the Ad-Hawk Autos network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_PC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_PC_BM" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_PC_TOU" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("BSS_CHR_NODJ_PC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPINPUTSET" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_X~ to manage arcade games. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MCTAPTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Master Control Terminal. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("FHQ_PC_TRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to login to the Agency Network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
		{
			return 1;
		}
	}
	else if (((((((((((((((((((__LIB_0__::func_1("WHOUSEINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this desktop computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */) || __LIB_0__::func_1("MP_OFF_LAP_1" /* GXT: Register as SecuroServ CEO to gain access to this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_MIS" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("SECINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_BDY" /* GXT: This computer is unavailable when working as an Associate. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFFLAPTOPPC" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. ~n~Press ~INPUT_FRONTEND_ACCEPT~ to use the laptop. */)) || __LIB_0__::func_1("CLBHINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to securely access the Open Road website. Business gameplay is only available in Public Sessions. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ORINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to found a Motorcycle Club and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CH" /* GXT: This computer is unavailable when working for an MC President. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CHV" /* GXT: This computer is unavailable when working as a Bodyguard for a VIP. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("IEAPPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this laptop computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("AHAPRIVSESINPUT" /* GXT: Join a public session to access the Ad-Hawk Autos network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_BM" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_TOU" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("BSS_CHR_NODJ" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("FHQ_PC_TRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to login to the Agency Network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_X~ to manage arcade games. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MCTAPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Master Control Terminal. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPTRIGNOSET" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
	{
		return 1;
	}
	return 0;
}

int func_492()//Position - 0x301D
{
	if (((__LIB_0__::func_1("MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */) || __LIB_0__::func_1("MPOFSEAT_EXIT_L" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EXIT_C" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EXIT_R" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
	{
		return 1;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (((__LIB_0__::func_1("MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("MPOFSEAT_EXIT_PCL" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EX_PCC" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EXIT_PCR" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
		{
			return 1;
		}
	}
	return 0;
}

char* func_493(int iParam0)//Position - 0x30A9
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a";
			break;
		case 1:
			sVar0 = "idle_b";
			break;
		case 2:
			sVar0 = "idle_c";
			break;
		case 3:
			sVar0 = "idle_d";
			break;
		case 4:
			sVar0 = "idle_e";
			break;
	}
	return sVar0;
}

int func_494()//Position - 0x32FA
{
	if ((__LIB_0__::func_1("MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */) || __LIB_0__::func_1("MPTV_WALKOFF" /* GXT: Press ~INPUT_CONTEXT~ to sit down, watch TV or play "Don't Cross The Line". */)) || __LIB_0__::func_1("BOSS_SIT_PRIV" /* GXT: Press ~INPUT_CONTEXT~ to sit down. Join a public session to access all features on the Nightclub Management app. */))
	{
		return 1;
	}
	return 0;
}

int func_495()//Position - 0x332E
{
	if (__LIB_0__::func_1("GB_REACTIVATE" /* GXT: Your CEO contract has expired, use the SecuroServ option in the Interaction Menu or press ~INPUT_CONTEXT~ to renew it now. */))
	{
		return 1;
	}
	return 0;
}

Vector3 func_496(bool bParam0)//Position - 0x3A4B
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 0f, -0.155076f, -0.493f };
	Var1 = { 0f, 1.28f, -1.819594f };
	if (bParam0)
	{
		return Var0;
	}
	return Var1;
}

void func_497(var uParam0, var uParam1)//Position - 0x7290
{
	int iVar0;
	uParam0->f_19 = 0;
	uParam0->f_18 = 0;
	uParam0->f_20 = 0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		(uParam1[uParam0->f_20 /*74*/])->f_5 = 0;
		(uParam1[uParam0->f_20 /*74*/])->f_2 = { 0f, 0f, 0f };
		(uParam1[uParam0->f_20 /*74*/])->f_10 = { 0f, 0f, 0f };
		(uParam1[uParam0->f_20 /*74*/])->f_13 = { 0f, 0f, 0f };
		(uParam1[uParam0->f_20 /*74*/])->f_8 = 0;
		iVar0++;
	}
}

int func_498(struct<4> Param0)//Position - 0x14B23
{
	Param0 = { Param0 };
	if (!__LIB_4__::func_420() && !__LIB_1__::func_461())
	{
		return 1;
	}
	return 0;
}

void func_499(var uParam0)//Position - 0x14B4A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		if (!__LIB_0__::func_1(uParam0->f_2) && __LIB_4__::func_410())
		{
			__LIB_0__::func_187(uParam0->f_2);
		}
	}
}

void func_500(var uParam0)//Position - 0x273B9
{
	uParam0->f_2 = "MPJAC_SIT2" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */;
	if (((((((((!__LIB_0__::func_1(uParam0->f_2) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "New text widget")) && __LIB_4__::func_410()) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !__LIB_0__::func_93()) && !__LIB_4__::func_233()) && !__LIB_1__::func_461()) && !__LIB_4__::func_420()) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2)) && !Global_262145.f_24707 /* Tunable: -236967184 */)
	{
		__LIB_0__::func_187(uParam0->f_2);
	}
}

void func_501(var uParam0)//Position - 0x2758C
{
	uParam0->f_2 = "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */;
	if (((((((((!__LIB_0__::func_1(uParam0->f_2) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "New text widget")) && __LIB_4__::func_410()) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !__LIB_0__::func_93()) && !__LIB_4__::func_233()) && !__LIB_1__::func_461()) && !__LIB_4__::func_420()) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2)) && !Global_262145.f_24708 /* Tunable: -1148048700 */)
	{
		__LIB_0__::func_151(uParam0->f_2, -1);
	}
}

int func_502()//Position - 0x28531
{
	if (Global_262145.f_21607 /* Tunable: 465374342 */)
	{
		return 0;
	}
	if (__LIB_4__::func_425(Global_4718592.f_116524))
	{
		return 1;
	}
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 22))
	{
		return 1;
	}
	return 0;
}

int func_503()//Position - 0x28578
{
	if (Global_262145.f_21609 /* Tunable: -423149492 */)
	{
		return 0;
	}
	if (__LIB_4__::func_425(Global_4718592.f_116524))
	{
		return 1;
	}
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 24))
	{
		return 1;
	}
	return 0;
}

int func_504()//Position - 0x285BF
{
	if (Global_262145.f_21608 /* Tunable: -1530856245 */)
	{
		return 0;
	}
	if (__LIB_4__::func_425(Global_4718592.f_116524))
	{
		return 1;
	}
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 23))
	{
		return 1;
	}
	return 0;
}

void func_505(var uParam0)//Position - 0x28606
{
	uParam0->f_2 = "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */;
	if ((((!__LIB_0__::func_1(uParam0->f_2) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "New text widget")) && __LIB_4__::func_410()) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		__LIB_0__::func_151(uParam0->f_2, -1);
	}
}

void func_506(var uParam0)//Position - 0x288F7
{
	if (((Global_1581353 == 2 || Global_1581353 == 3) || Global_1581353 == 1) || Global_1581353 == 4)
	{
		if (Global_1836616 == 2)
		{
			uParam0->f_2 = "HUNTGUN_T_1e" /* GXT: The turret is unavailable at this time. */;
		}
		else
		{
			uParam0->f_2 = "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */;
		}
	}
	if ((!__LIB_0__::func_1(uParam0->f_2) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "New text widget")) && __LIB_4__::func_410())
	{
		__LIB_0__::func_151(uParam0->f_2, -1);
	}
}

var func_507(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x66D3A
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_1__::func_264(iVar3, 1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar3), bParam3))
			{
				if (!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iVar3))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar3), bParam3);
					if (iVar2 == iParam0)
					{
						if (PLAYER::GET_PLAYER_TEAM(iVar3) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
						{
							if (iVar3 != PLAYER::PLAYER_ID() || iParam1)
							{
								MISC::SET_BIT(&uVar0, iVar1);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_508(bool bParam0)//Position - 0xD31D2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_0__::func_674())
		{
			if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

void func_509(int iParam0)//Position - 0xE1007
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*iParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_510(int iParam0)//Position - 0x178927
{
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() != iParam0)
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_511(int iParam0)//Position - 0x1A776C
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (__LIB_1__::func_264(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_512(bool bParam0)//Position - 0x1BF04D
{
	if (bParam0)
	{
		return __LIB_0__::func_137(27227, -1);
	}
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_1, 2);
	}
	return 0;
}

void func_513()//Position - 0x24FC8
{
	MISC::SET_BIT(&(Global_1946250.f_6), 2);
}

void func_514(var uParam0, int iParam1)//Position - 0x4E436
{
	if (uParam0->f_492 != iParam1)
	{
		uParam0->f_492 = iParam1;
	}
}

int func_515(int* iParam0)//Position - 0x4E46E
{
	return iParam0->f_492;
}

char* func_516(int iParam0, bool bParam1)//Position - 0x502A6
{
	switch (iParam0)
	{
		case 174:
			if (bParam1)
			{
				return "DELVIRLG" /* GXT: Your new vehicle will be delivered to your Garage shortly. */;
			}
			else
			{
				return "TXT_CAR_STOB" /* GXT: Your new vehicle has now been confirmed in your vehicle storage. */;
			}
			break;
	}
	return "NULL";
}

var func_517(var uParam0)//Position - 0x502FF
{
	return uParam0->f_495;
}

void func_518(int iParam0)//Position - 0x503FB
{
	if (iParam0 != -1 && iParam0 < 30)
	{
		StringCopy(&(Global_2359296[__LIB_0__::func_153() /*5567*/].f_7.f_105[iParam0 /*16*/]), "", 64);
	}
}

int func_519(int iParam0)//Position - 0x50DBA
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_592(iParam0);
	__LIB_2__::func_375(iVar1, &iVar0);
	return iVar0;
}

int func_520(int iParam0)//Position - 0x523F0
{
	if (__LIB_0__::func_630(Global_1853348[iParam0 /*834*/].f_267.f_32, -1))
	{
		return 1;
	}
	return 0;
}

bool func_521()//Position - 0x52413
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_luxury_showroom")) > 0;
}

var func_522()//Position - 0x56D1F
{
	return Global_75486;
}

var func_523()//Position - 0x56D2B
{
	return Global_1931939;
}

var func_524(var uParam0)//Position - 0x5E382
{
	return uParam0->f_10;
}

float func_525(int iParam0, bool bParam1)//Position - 0x5F49D
{
	if ((Global_1585307 == 38 || Global_1585307 == 39) && !bParam1)
	{
		return 1f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1f;
				break;
			case 1:
				return Global_262145.f_12392 /* Tunable: CAR_MODS_SUPERMOD_SLOT_1ST_MOD_MULTIPLIER */;
				break;
			case 2:
				return Global_262145.f_12393 /* Tunable: CAR_MODS_SUPERMOD_SLOT_2ND_MOD_MULTIPLIER */;
				break;
			case 3:
				return Global_262145.f_12394 /* Tunable: CAR_MODS_SUPERMOD_SLOT_3RD_MOD_MULTIPLIER */;
				break;
			case 4:
				return Global_262145.f_12395 /* Tunable: CAR_MODS_SUPERMOD_SLOT_4TH_MOD_MULTIPLIER */;
				break;
			case 5:
				return Global_262145.f_12396 /* Tunable: CAR_MODS_SUPERMOD_SLOT_5THMOD_MULTIPLIER */;
				break;
			case 6:
				return Global_262145.f_12397 /* Tunable: CAR_MODS_SUPERMOD_SLOT_6TH_MOD_MULTIPLIER */;
				break;
			case 7:
				return Global_262145.f_12398 /* Tunable: CAR_MODS_SUPERMOD_SLOT_7TH_MOD_MULTIPLIER */;
				break;
			case 8:
				return Global_262145.f_12399 /* Tunable: CAR_MODS_SUPERMOD_SLOT_8TH_MOD_MULTIPLIER */;
				break;
			case 9:
				return Global_262145.f_12400 /* Tunable: CAR_MODS_SUPERMOD_SLOT_9TH_MOD_MULTIPLIER */;
				break;
			case 10:
				return Global_262145.f_12401 /* Tunable: CAR_MODS_SUPERMOD_SLOT_10TH_MOD_MULTIPLIER */;
				break;
			case 11:
				return Global_262145.f_12402 /* Tunable: CAR_MODS_SUPERMOD_SLOT_11H_MOD_MULTIPLIER */;
				break;
			case 12:
				return Global_262145.f_12403 /* Tunable: CAR_MODS_SUPERMOD_SLOT_12H_MOD_MULTIPLIER */;
				break;
			case 13:
				return Global_262145.f_12404 /* Tunable: CAR_MODS_SUPERMOD_SLOT_13TH_MOD_MULTIPLIER */;
				break;
			case 14:
				return Global_262145.f_12405 /* Tunable: CAR_MODS_SUPERMOD_SLOT_14TH_MOD_MULTIPLIER */;
				break;
			case 15:
				return Global_262145.f_12406 /* Tunable: CAR_MODS_SUPERMOD_SLOT_15TH_MOD_MULTIPLIER */;
				break;
			case 16:
				return Global_262145.f_12407 /* Tunable: CAR_MODS_SUPERMOD_SLOT_16TH_MOD_MULTIPLIER */;
				break;
			case 17:
				return Global_262145.f_12408 /* Tunable: CAR_MODS_SUPERMOD_SLOT_17TH_MOD_MULTIPLIER */;
				break;
			case 18:
				return Global_262145.f_12409 /* Tunable: CAR_MODS_SUPERMOD_SLOT_18TH_MOD_MULTIPLIER */;
				break;
			case 19:
				return Global_262145.f_12410 /* Tunable: CAR_MODS_SUPERMOD_SLOT_19TH_MOD_MULTIPLIER */;
				break;
			case 20:
				return Global_262145.f_12411 /* Tunable: CAR_MODS_SUPERMOD_SLOT_20TH_MOD_MULTIPLIER */;
				break;
			case 21:
				return Global_262145.f_12412 /* Tunable: CAR_MODS_SUPERMOD_SLOT_21ST_MOD_MULTIPLIER */;
				break;
			case 22:
				return Global_262145.f_12413 /* Tunable: CAR_MODS_SUPERMOD_SLOT_22ND_MOD_MULTIPLIER */;
				break;
			case 23:
				return Global_262145.f_12414 /* Tunable: CAR_MODS_SUPERMOD_SLOT_23RD_MOD_MULTIPLIER */;
				break;
			case 24:
				return Global_262145.f_12415 /* Tunable: CAR_MODS_SUPERMOD_SLOT_24TH_MOD_MULTIPLIER */;
				break;
			case 25:
				return Global_262145.f_12416 /* Tunable: CAR_MODS_SUPERMOD_SLOT_25TH_MOD_MULTIPLIER */;
				break;
			case 26:
				return Global_262145.f_12417 /* Tunable: CAR_MODS_SUPERMOD_SLOT_26TH_MOD_MULTIPLIER */;
				break;
			case 27:
				return Global_262145.f_12418 /* Tunable: CAR_MODS_SUPERMOD_SLOT_27TH_MOD_MULTIPLIER */;
				break;
			case 28:
				return Global_262145.f_12419 /* Tunable: CAR_MODS_SUPERMOD_SLOT_28TH_MOD_MULTIPLIER */;
				break;
			case 29:
				return Global_262145.f_12420 /* Tunable: CAR_MODS_SUPERMOD_SLOT_29TH_MOD_MULTIPLIER */;
				break;
			case 30:
				return Global_262145.f_12421 /* Tunable: CAR_MODS_SUPERMOD_SLOT_30TH_MOD_MULTIPLIER */;
				break;
			}
	}
	return 1f;
}

int func_526(int iParam0)//Position - 0x5F71A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_527(int iParam0, int iParam1)//Position - 0x5F73B
{
	int iVar0;
	iVar0 = (575 + (50 * iParam1));
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("bati2"):
			iVar0 = (575 + (50 * iParam1));
			break;
		case joaat("sanchez"):
			iVar0 = (575 + (50 * iParam1));
			break;
		case joaat("paradise"):
			iVar0 = (575 + (50 * iParam1));
			break;
		case joaat("windsor"):
			if (iParam1 == 0)
			{
				iVar0 = 100;
				if (Global_262145.f_11066 /* Tunable: LUXE1_CAR_MODS_NO_LIVERY */ >= 0)
				{
					iVar0 = Global_262145.f_11066 /* Tunable: LUXE1_CAR_MODS_NO_LIVERY */;
				}
			}
			else if (iParam1 == 1)
			{
				iVar0 = 100000;
				if (Global_262145.f_11067 /* Tunable: LUXE1_CAR_MODS_SESSANTA_NOVE_MONOGRAM */ >= 0)
				{
					iVar0 = Global_262145.f_11067 /* Tunable: LUXE1_CAR_MODS_SESSANTA_NOVE_MONOGRAM */;
				}
			}
			else if (iParam1 == 2)
			{
				iVar0 = 90000;
				if (Global_262145.f_11068 /* Tunable: LUXE1_CAR_MODS_SESSANTA_NOVE_MULTI_COLOR */ >= 0)
				{
					iVar0 = Global_262145.f_11068 /* Tunable: LUXE1_CAR_MODS_SESSANTA_NOVE_MULTI_COLOR */;
				}
			}
			else if (iParam1 == 3)
			{
				iVar0 = 80000;
				if (Global_262145.f_11069 /* Tunable: LUXE1_CAR_MODS_SESSANTA_NOVE_GEOMETRIC */ >= 0)
				{
					iVar0 = Global_262145.f_11069 /* Tunable: LUXE1_CAR_MODS_SESSANTA_NOVE_GEOMETRIC */;
				}
			}
			else if (iParam1 == 4)
			{
				iVar0 = 75000;
				if (Global_262145.f_11070 /* Tunable: LUXE1_CAR_MODS_PERSEUS_WINGS_MONOGRAM */ >= 0)
				{
					iVar0 = Global_262145.f_11070 /* Tunable: LUXE1_CAR_MODS_PERSEUS_WINGS_MONOGRAM */;
				}
			}
			else if (iParam1 == 5)
			{
				iVar0 = 70000;
				if (Global_262145.f_11034 /* Tunable: LUXE1_CAR_MODS_PERSEUS_GREEN_WINGS_MONOGRAM */ >= 0)
				{
					iVar0 = Global_262145.f_11034 /* Tunable: LUXE1_CAR_MODS_PERSEUS_GREEN_WINGS_MONOGRAM */;
				}
			}
			else if (iParam1 == 6)
			{
				iVar0 = 60000;
				if (Global_262145.f_11071 /* Tunable: LUXE1_CAR_MODS_SANTO_CAPRA_PYTHON */ >= 0)
				{
					iVar0 = Global_262145.f_11071 /* Tunable: LUXE1_CAR_MODS_SANTO_CAPRA_PYTHON */;
				}
			}
			else if (iParam1 == 7)
			{
				iVar0 = 55000;
				if (Global_262145.f_11072 /* Tunable: LUXE1_CAR_MODS_SANTO_CAPRA_CHEETAH */ >= 0)
				{
					iVar0 = Global_262145.f_11072 /* Tunable: LUXE1_CAR_MODS_SANTO_CAPRA_CHEETAH */;
				}
			}
			else if (iParam1 == 8)
			{
				iVar0 = 50000;
				if (Global_262145.f_11073 /* Tunable: LUXE1_CAR_MODS_YETI_MALL_NINJA */ >= 0)
				{
					iVar0 = Global_262145.f_11073 /* Tunable: LUXE1_CAR_MODS_YETI_MALL_NINJA */;
				}
			}
			break;
	}
	return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_295754.f_50));
}

int func_528(int iParam0)//Position - 0x5F9AE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bati2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sanchez"))
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_529(int iParam0, int iParam1)//Position - 0x5F9F4
{
	if (iParam0 == 45)
	{
		if (iParam1 == 12)
		{
			return 1;
		}
	}
	return 0;
}

int func_530(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5FA60
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	StringCopy(&cVar0, sParam0, 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		if (iParam2 <= 0 || iParam1 == -1)
		{
			if (bParam3)
			{
				StringCopy(&cVar0, "DEFAULT_C", 16);
			}
			else
			{
				StringCopy(&cVar0, "DEFAULT_B", 16);
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					StringCopy(&cVar0, "SPT_", 16);
					break;
				case 1:
					StringCopy(&cVar0, "MUSC_", 16);
					break;
				case 2:
					StringCopy(&cVar0, "LORIDE_", 16);
					break;
				case 3:
					StringCopy(&cVar0, "SUV_", 16);
					break;
				case 4:
					StringCopy(&cVar0, "OFFR_", 16);
					break;
				case 5:
					StringCopy(&cVar0, "DRFT_", 16);
					break;
				case 6:
					StringCopy(&cVar0, "BIKEW_", 16);
					break;
				case 7:
					StringCopy(&cVar0, "HIEND_", 16);
					break;
			}
			if (iParam2 < 10)
			{
				StringConCat(&cVar0, "0", 16);
			}
			StringIntConCat(&cVar0, iParam2, 16);
		}
	}
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	switch (iVar1)
	{
		case joaat("HIEND_01"):
			return 3280;
			break;
		case joaat("HIEND_02"):
			return 2890;
			break;
		case joaat("HIEND_03"):
			return 2850;
			break;
		case joaat("HIEND_04"):
			return 3750;
			break;
		case joaat("HIEND_05"):
			return 3100;
			break;
		case joaat("HIEND_06"):
			return 3490;
			break;
		case joaat("HIEND_07"):
			return 2990;
			break;
		case joaat("HIEND_08"):
			return 3050;
			break;
		case joaat("HIEND_09"):
			return 3480;
			break;
		case joaat("HIEND_10"):
			return 2530;
			break;
		case joaat("HIEND_11"):
			return 2580;
			break;
		case joaat("HIEND_12"):
			return 3350;
			break;
		case joaat("HIEND_13"):
			return 2880;
			break;
		case joaat("HIEND_14"):
			return 2700;
			break;
		case joaat("HIEND_15"):
			return 3650;
			break;
		case joaat("HIEND_16"):
			return 4290;
			break;
		case joaat("HIEND_17"):
			return 4150;
			break;
		case joaat("HIEND_18"):
			return 3900;
			break;
		case joaat("HIEND_19"):
			return 4000;
			break;
		case joaat("HIEND_20"):
			return 4200;
			break;
		case joaat("SPT_01"):
			return 2100;
			break;
		case joaat("SPT_02"):
			return 2280;
			break;
		case joaat("SPT_03"):
			return 2450;
			break;
		case joaat("SPT_04"):
			return 2390;
			break;
		case joaat("SPT_05"):
			return 2300;
			break;
		case joaat("SPT_06"):
			return 2550;
			break;
		case joaat("SPT_07"):
			return 2080;
			break;
		case joaat("SPT_08"):
			return 2150;
			break;
		case joaat("SPT_09"):
			return 3260;
			break;
		case joaat("SPT_10"):
			return 2810;
			break;
		case joaat("SPT_11"):
			return 2200;
			break;
		case joaat("SPT_12"):
			return 3250;
			break;
		case joaat("SPT_13"):
			return 3000;
			break;
		case joaat("SPT_14"):
			return 3280;
			break;
		case joaat("SPT_15"):
			return 2900;
			break;
		case joaat("SPT_16"):
			return 3050;
			break;
		case joaat("SPT_17"):
			return 2490;
			break;
		case joaat("SPT_18"):
			return 2100;
			break;
		case joaat("SPT_19"):
			return 2660;
			break;
		case joaat("SPT_20"):
			return 3250;
			break;
		case joaat("SPT_21"):
			return 3550;
			break;
		case joaat("SPT_22"):
			return 3380;
			break;
		case joaat("SPT_23"):
			return 3280;
			break;
		case joaat("SPT_24"):
			return 3100;
			break;
		case joaat("SPT_25"):
			return 3400;
			break;
		case joaat("MUSC_01"):
			return 1290;
			break;
		case joaat("MUSC_02"):
			return 2450;
			break;
		case joaat("MUSC_03"):
			return 1500;
			break;
		case joaat("MUSC_04"):
			return 1620;
			break;
		case joaat("MUSC_05"):
			return 1555;
			break;
		case joaat("MUSC_06"):
			return 1700;
			break;
		case joaat("MUSC_07"):
			return 1780;
			break;
		case joaat("MUSC_08"):
			return 1800;
			break;
		case joaat("MUSC_09"):
			return 1590;
			break;
		case joaat("MUSC_10"):
			return 2380;
			break;
		case joaat("MUSC_11"):
			return 1540;
			break;
		case joaat("MUSC_12"):
			return 1580;
			break;
		case joaat("MUSC_13"):
			return 1600;
			break;
		case joaat("MUSC_14"):
			return 1590;
			break;
		case joaat("MUSC_15"):
			return 1775;
			break;
		case joaat("MUSC_16"):
			return 1540;
			break;
		case joaat("MUSC_17"):
			return 1510;
			break;
		case joaat("MUSC_18"):
			return 1820;
			break;
		case joaat("MUSC_19"):
			return 1550;
			break;
		case joaat("MUSC_20"):
			return 1875;
			break;
		case joaat("LORIDE_01"):
			return 1980;
			break;
		case joaat("LORIDE_02"):
			return 2150;
			break;
		case joaat("LORIDE_03"):
			return 2200;
			break;
		case joaat("LORIDE_04"):
			return 2050;
			break;
		case joaat("LORIDE_05"):
			return 2190;
			break;
		case joaat("LORIDE_06"):
			return 2220;
			break;
		case joaat("LORIDE_07"):
			return 2290;
			break;
		case joaat("LORIDE_08"):
			return 2600;
			break;
		case joaat("LORIDE_09"):
			return 2550;
			break;
		case joaat("LORIDE_10"):
			return 2330;
			break;
		case joaat("LORIDE_11"):
			return 2380;
			break;
		case joaat("LORIDE_12"):
			return 3000;
			break;
		case joaat("LORIDE_13"):
			return 2450;
			break;
		case joaat("LORIDE_14"):
			return 2500;
			break;
		case joaat("LORIDE_15"):
			return 2850;
			break;
		case joaat("SUV_01"):
			return 3180;
			break;
		case joaat("SUV_02"):
			return 3200;
			break;
		case joaat("SUV_03"):
			return 3050;
			break;
		case joaat("SUV_04"):
			return 3220;
			break;
		case joaat("SUV_05"):
			return 3000;
			break;
		case joaat("SUV_06"):
			return 3450;
			break;
		case joaat("SUV_07"):
			return 3490;
			break;
		case joaat("SUV_08"):
			return 3100;
			break;
		case joaat("SUV_09"):
			return 3150;
			break;
		case joaat("SUV_10"):
			return 3200;
			break;
		case joaat("SUV_11"):
			return 3090;
			break;
		case joaat("SUV_12"):
			return 3300;
			break;
		case joaat("SUV_13"):
			return 3100;
			break;
		case joaat("SUV_14"):
			return 3600;
			break;
		case joaat("SUV_15"):
			return 3250;
			break;
		case joaat("SUV_16"):
			return 3150;
			break;
		case joaat("SUV_17"):
			return 3380;
			break;
		case joaat("SUV_18"):
			return 3190;
			break;
		case joaat("SUV_19"):
			return 3375;
			break;
		case joaat("SUV_20"):
			return 3085;
			break;
		case joaat("OFFR_01"):
			return 1850;
			break;
		case joaat("OFFR_02"):
			return 2050;
			break;
		case joaat("OFFR_03"):
			return 1890;
			break;
		case joaat("OFFR_04"):
			return 2100;
			break;
		case joaat("OFFR_05"):
			return 2590;
			break;
		case joaat("OFFR_06"):
			return 2190;
			break;
		case joaat("OFFR_07"):
			return 2000;
			break;
		case joaat("OFFR_08"):
			return 2200;
			break;
		case joaat("OFFR_09"):
			return 1770;
			break;
		case joaat("OFFR_10"):
			return 1800;
			break;
		case joaat("DRFT_01"):
			return 2450;
			break;
		case joaat("DRFT_02"):
			return 2500;
			break;
		case joaat("DRFT_03"):
			return 2490;
			break;
		case joaat("DRFT_04"):
			return 2600;
			break;
		case joaat("DRFT_05"):
			return 2620;
			break;
		case joaat("DRFT_06"):
			return 2700;
			break;
		case joaat("DRFT_07"):
			return 2550;
			break;
		case joaat("DRFT_08"):
			return 2770;
			break;
		case joaat("DRFT_09"):
			return 2580;
			break;
		case joaat("DRFT_10"):
			return 2820;
			break;
		case joaat("DRFT_11"):
			return 2855;
			break;
		case joaat("DRFT_12"):
			return 2890;
			break;
		case joaat("DRFT_13"):
			return 2400;
			break;
		case joaat("DRFT_14"):
			return 2490;
			break;
		case joaat("DRFT_15"):
			return 2520;
			break;
		case joaat("DRFT_16"):
			return 2550;
			break;
		case joaat("DRFT_17"):
			return 2610;
			break;
		case joaat("DRFT_18"):
			return 2660;
			break;
		case joaat("DRFT_19"):
			return 2720;
			break;
		case joaat("DRFT_20"):
			return 2490;
			break;
		case joaat("DRFT_21"):
			return 2440;
			break;
		case joaat("DRFT_22"):
			return 2500;
			break;
		case joaat("DRFT_23"):
			return 2585;
			break;
		case joaat("DRFT_24"):
			return 2840;
			break;
		case joaat("BIKEW_01"):
			return 1780;
			break;
		case joaat("BIKEW_02"):
			return 1800;
			break;
		case joaat("BIKEW_03"):
			return 1820;
			break;
		case joaat("BIKEW_04"):
			return 1850;
			break;
		case joaat("BIKEW_05"):
			return 1750;
			break;
		case joaat("BIKEW_06"):
			return 1690;
			break;
		case joaat("BIKEW_07"):
			return 1890;
			break;
		case joaat("BIKEW_08"):
			return 2180;
			break;
		case joaat("BIKEW_09"):
			return 1890;
			break;
		case joaat("BIKEW_10"):
			return 1950;
			break;
		case joaat("BIKEW_11"):
			return 2500;
			break;
		case joaat("BIKEW_12"):
			return 2600;
			break;
		case joaat("BIKEW_13"):
			return 2550;
			break;
		case joaat("DEFAULT_C"):
			return 1500;
			break;
		case joaat("DEFAULT_B"):
			return 800;
			break;
		case joaat("SMOD_WHL1"):
			return Global_262145.f_12614 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_OG_HUNNETS_CHROME */;
			break;
		case joaat("SMOD_WHL2"):
			return Global_262145.f_12615 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_OG_HUNNETS_PAINTED */;
			break;
		case joaat("SMOD_WHL3"):
			return Global_262145.f_12616 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_KNOCK-OFFS_CHROME */;
			break;
		case joaat("SMOD_WHL4"):
			return Global_262145.f_12617 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_KNOCK-OFFS_PAINTED */;
			break;
		case joaat("SMOD_WHL5"):
			return Global_262145.f_12618 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_SPOKED_OUT_CHROME */;
			break;
		case joaat("SMOD_WHL6"):
			return Global_262145.f_12619 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_SPOKED_OUT_PAINTED */;
			break;
		case joaat("SMOD_WHL7"):
			return Global_262145.f_12620 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_VINTAGE_WIRE_CHROME */;
			break;
		case joaat("SMOD_WHL8"):
			return Global_262145.f_12621 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_VINTAGE_WIRE_PAINTED */;
			break;
		case joaat("SMOD_WHL9"):
			return Global_262145.f_12622 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_SMOOTHIE_CHROME */;
			break;
		case joaat("SMOD_WHL10"):
			return Global_262145.f_12623 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_SMOOTHIE_CHROME_LIP */;
			break;
		case joaat("SMOD_WHL11"):
			return Global_262145.f_12624 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_SMOOTHIE_PAINTED */;
			break;
		case joaat("SMOD_WHL12"):
			return Global_262145.f_12625 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_ROD_ME_UP_CHROME */;
			break;
		case joaat("SMOD_WHL13"):
			return Global_262145.f_12626 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_ROD_ME_UP_CHROME_LIP */;
			break;
		case joaat("SMOD_WHL14"):
			return Global_262145.f_12627 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_ROD_ME_UP_PAINTED */;
			break;
		case joaat("SMOD_WHL15"):
			return Global_262145.f_12628 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_CLEAN */;
			break;
		case joaat("SMOD_WHL16"):
			return Global_262145.f_12629 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_LOTTA_CHROME */;
			break;
		case joaat("SMOD_WHL17"):
			return Global_262145.f_12630 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_SPINDLES */;
			break;
		case joaat("SMOD_WHL18"):
			return Global_262145.f_12631 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_VIKING_ */;
			break;
		case joaat("SMOD_WHL19"):
			return Global_262145.f_12632 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_TRIPLE_SPOKE */;
			break;
		case joaat("SMOD_WHL20"):
			return Global_262145.f_12633 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_PHAROHE */;
			break;
		case joaat("SMOD_WHL21"):
			return Global_262145.f_12634 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_TIGER_STYLE */;
			break;
		case joaat("SMOD_WHL22"):
			return Global_262145.f_12635 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_THREE_WHEELIN */;
			break;
		case joaat("SMOD_WHL23"):
			return Global_262145.f_12636 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_BIG_BAR */;
			break;
		case joaat("SMOD_WHL24"):
			return Global_262145.f_12637 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_BIOHAZARD */;
			break;
		case joaat("SMOD_WHL25"):
			return Global_262145.f_12638 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_WAVES */;
			break;
		case joaat("SMOD_WHL26"):
			return Global_262145.f_12639 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_LICK_LICK */;
			break;
		case joaat("SMOD_WHL27"):
			return Global_262145.f_12640 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_SPIRALIZER */;
			break;
		case joaat("SMOD_WHL28"):
			return Global_262145.f_12641 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_HYPOTICS */;
			break;
		case joaat("SMOD_WHL29"):
			return Global_262145.f_12642 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_PSYCHO-DELIC */;
			break;
		case joaat("SMOD_WHL30"):
			return Global_262145.f_12643 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_HALF_CUT */;
			break;
		case joaat("SMOD_WHL31"):
			return Global_262145.f_12644 /* Tunable: LOWRIDER1_CAR_MODS_BENNYS_WHEELS_SUPER ELECTRIC */;
			break;
	}
	iVar2 = MISC::GET_HASH_KEY(&cVar0);
	switch (iVar2)
	{
		case joaat("SMOD2_WHL1"):
			return Global_262145.f_15036 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_CHROME_OG_HUNNETS */;
			break;
		case joaat("SMOD2_WHL2"):
			return Global_262145.f_15037 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_GOLD_OG_HUNNETS */;
			break;
		case joaat("SMOD2_WHL3"):
			return Global_262145.f_15038 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_CHROME_WIRES */;
			break;
		case joaat("SMOD2_WHL4"):
			return Global_262145.f_15039 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_GOLD_WIRES */;
			break;
		case joaat("SMOD2_WHL5"):
			return Global_262145.f_15040 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_CHROME_SPOKED_OUT */;
			break;
		case joaat("SMOD2_WHL6"):
			return Global_262145.f_15041 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_GOLD_SPOKED_OUT */;
			break;
		case joaat("SMOD2_WHL7"):
			return Global_262145.f_15042 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_CHROME_KNOCKOFFS */;
			break;
		case joaat("SMOD2_WHL8"):
			return Global_262145.f_15043 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_GOLD_KNOCKOFFS */;
			break;
		case joaat("SMOD2_WHL9"):
			return Global_262145.f_15044 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_CHROME_BIGGER_WORM */;
			break;
		case joaat("SMOD2_WHL10"):
			return Global_262145.f_15045 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_GOLD_BIGGER_WORM */;
			break;
		case joaat("SMOD2_WHL11"):
			return Global_262145.f_15046 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_CHROME_VINTAGE_WIRE */;
			break;
		case joaat("SMOD2_WHL12"):
			return Global_262145.f_15047 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_GOLD_VINTAGE_WIRE */;
			break;
		case joaat("SMOD2_WHL13"):
			return Global_262145.f_15048 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_CHROME_CLASSIC_WIRE */;
			break;
		case joaat("SMOD2_WHL14"):
			return Global_262145.f_15049 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_GOLD_CLASSIC_WIRE */;
			break;
		case joaat("SMOD2_WHL15"):
			return Global_262145.f_15050 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_CHROME_SMOOTHIE */;
			break;
		case joaat("SMOD2_WHL16"):
			return Global_262145.f_15051 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_GOLD_SMOOTHIE */;
			break;
		case joaat("SMOD2_WHL17"):
			return Global_262145.f_15052 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_CHROME_CLASSIC_ROD */;
			break;
		case joaat("SMOD2_WHL18"):
			return Global_262145.f_15053 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_GOLD_CLASSIC_ROD */;
			break;
		case joaat("SMOD2_WHL19"):
			return Global_262145.f_15054 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_CHROME_DOLLAR */;
			break;
		case joaat("SMOD2_WHL20"):
			return Global_262145.f_15055 /* Tunable: CAR_MODS_BENNYS_BESPOKE_WHEELS_GOLD_DOLLAR */;
			break;
		case joaat("SMOD2_WHL21"):
			return 12345;
			break;
		case joaat("SMOD2_WHL22"):
			return 12345;
			break;
		case joaat("SMOD2_WHL23"):
			return 12345;
			break;
		case joaat("SMOD2_WHL24"):
			return 12345;
			break;
		case joaat("SMOD2_WHL25"):
			return 12345;
			break;
		case joaat("SMOD2_WHL26"):
			return 12345;
			break;
		case joaat("SMOD2_WHL27"):
			return 12345;
			break;
		case joaat("SMOD2_WHL28"):
			return 12345;
			break;
		case joaat("SMOD2_WHL29"):
			return 12345;
			break;
		case joaat("SMOD2_WHL30"):
			return 12345;
			break;
		case joaat("SMOD2_WHL31"):
			return 12345;
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		switch (iParam1)
		{
			case 0:
				StringCopy(&cVar0, "RWD_SPT_", 16);
				break;
			case 1:
				StringCopy(&cVar0, "RWD_MUSC_", 16);
				break;
			case 2:
				StringCopy(&cVar0, "RWD_LORIDE_", 16);
				break;
			case 3:
				StringCopy(&cVar0, "RWD_SUV_", 16);
				break;
			case 4:
				StringCopy(&cVar0, "RWD_OFFR_", 16);
				break;
			case 5:
				StringCopy(&cVar0, "RWD_DRFT_", 16);
				break;
			case 6:
				StringCopy(&cVar0, "RWD_BIKEW_", 16);
				break;
			case 7:
				StringCopy(&cVar0, "RWD_HIEND_", 16);
				break;
		}
		if (iParam1 == 0 && iParam2 > 25)
		{
			iParam2 = (iParam2 - 25);
		}
		else if (iParam1 == 1 && iParam2 > 18)
		{
			iParam2 = (iParam2 - 18);
		}
		else if (iParam1 == 2 && iParam2 > 15)
		{
			iParam2 = (iParam2 - 15);
		}
		else if (iParam1 == 3 && iParam2 > 19)
		{
			iParam2 = (iParam2 - 19);
		}
		else if (iParam1 == 4 && iParam2 > 10)
		{
			iParam2 = (iParam2 - 10);
		}
		else if (iParam1 == 5 && iParam2 > 24)
		{
			iParam2 = (iParam2 - 24);
		}
		else if (iParam1 == 6 && iParam2 > 13)
		{
			iParam2 = (iParam2 - 13);
		}
		else if (iParam1 == 7 && iParam2 > 20)
		{
			iParam2 = (iParam2 - 20);
		}
		if (iParam2 < 10)
		{
			StringConCat(&cVar0, "0", 16);
		}
		StringIntConCat(&cVar0, iParam2, 16);
		iVar1 = MISC::GET_HASH_KEY(&cVar0);
	}
	switch (iVar1)
	{
		case joaat("RWD_HIEND_01"):
			return 67860;
			break;
		case joaat("RWD_HIEND_02"):
			return 71150;
			break;
		case joaat("RWD_HIEND_03"):
			return 75850;
			break;
		case joaat("RWD_HIEND_04"):
			return 81725;
			break;
		case joaat("RWD_HIEND_05"):
			return 72325;
			break;
		case joaat("RWD_HIEND_06"):
			return 69975;
			break;
		case joaat("RWD_HIEND_07"):
			return 70210;
			break;
		case joaat("RWD_HIEND_08"):
			return 71855;
			break;
		case joaat("RWD_HIEND_09"):
			return 74205;
			break;
		case joaat("RWD_HIEND_10"):
			return 72090;
			break;
		case joaat("RWD_HIEND_11"):
			return 72560;
			break;
		case joaat("RWD_HIEND_12"):
			return 76320;
			break;
		case joaat("RWD_HIEND_13"):
			return 73500;
			break;
		case joaat("RWD_HIEND_14"):
			return 74910;
			break;
		case joaat("RWD_HIEND_15"):
			return 82665;
			break;
		case joaat("RWD_HIEND_16"):
			return 81020;
			break;
		case joaat("RWD_HIEND_17"):
			return 82900;
			break;
		case joaat("RWD_HIEND_18"):
			return 83135;
			break;
		case joaat("RWD_HIEND_19"):
			return 83370;
			break;
		case joaat("RWD_HIEND_20"):
			return 83605;
			break;
		case joaat("RWD_SPT_01"):
			return 56580;
			break;
		case joaat("RWD_SPT_02"):
			return 67155;
			break;
		case joaat("RWD_SPT_03"):
			return 67625;
			break;
		case joaat("RWD_SPT_04"):
			return 67390;
			break;
		case joaat("RWD_SPT_05"):
			return 57755;
			break;
		case joaat("RWD_SPT_06"):
			return 58460;
			break;
		case joaat("RWD_SPT_07"):
			return 56110;
			break;
		case joaat("RWD_SPT_08"):
			return 56815;
			break;
		case joaat("RWD_SPT_09"):
			return 69270;
			break;
		case joaat("RWD_SPT_10"):
			return 68330;
			break;
		case joaat("RWD_SPT_11"):
			return 57050;
			break;
		case joaat("RWD_SPT_12"):
			return 80315;
			break;
		case joaat("RWD_SPT_13"):
			return 80080;
			break;
		case joaat("RWD_SPT_14"):
			return 69505;
			break;
		case joaat("RWD_SPT_15"):
			return 69035;
			break;
		case joaat("RWD_SPT_16"):
			return 69740;
			break;
		case joaat("RWD_SPT_17"):
			return 78435;
			break;
		case joaat("RWD_SPT_18"):
			return 66215;
			break;
		case joaat("RWD_SPT_19"):
			return 68095;
			break;
		case joaat("RWD_SPT_20"):
			return 70445;
			break;
		case joaat("RWD_SPT_21"):
			return 82430;
			break;
		case joaat("RWD_SPT_22"):
			return 71385;
			break;
		case joaat("RWD_SPT_23"):
			return 80785;
			break;
		case joaat("RWD_SPT_24"):
			return 79610;
			break;
		case joaat("RWD_SPT_25"):
			return 81960;
			break;
		case joaat("RWD_MUSC_01"):
			return 50235;
			break;
		case joaat("RWD_MUSC_02"):
			return 66450;
			break;
		case joaat("RWD_MUSC_03"):
			return 58930;
			break;
		case joaat("RWD_MUSC_04"):
			return 50705;
			break;
		case joaat("RWD_MUSC_05"):
			return 62925;
			break;
		case joaat("RWD_MUSC_06"):
			return 64570;
			break;
		case joaat("RWD_MUSC_07"):
			return 77025;
			break;
		case joaat("RWD_MUSC_08"):
			return 53290;
			break;
		case joaat("RWD_MUSC_09"):
			return 62220;
			break;
		case joaat("RWD_MUSC_10"):
			return 77965;
			break;
		case joaat("RWD_MUSC_11"):
			return 51175;
			break;
		case joaat("RWD_MUSC_12"):
			return 52585;
			break;
		case joaat("RWD_MUSC_13"):
			return 63630;
			break;
		case joaat("RWD_MUSC_14"):
			return 63865;
			break;
		case joaat("RWD_MUSC_15"):
			return 75615;
			break;
		case joaat("RWD_MUSC_16"):
			return 52115;
			break;
		case joaat("RWD_MUSC_17"):
			return 59635;
			break;
		case joaat("RWD_MUSC_18"):
			return 62850;
			break;
		case joaat("RWD_MUSC_19"):
			return 65395;
			break;
		case joaat("RWD_MUSC_20"):
			return 73735;
			break;
		case joaat("RWD_LORIDE_01"):
			return 62455;
			break;
		case joaat("RWD_LORIDE_02"):
			return 51880;
			break;
		case joaat("RWD_LORIDE_03"):
			return 53055;
			break;
		case joaat("RWD_LORIDE_04"):
			return 52350;
			break;
		case joaat("RWD_LORIDE_05"):
			return 61280;
			break;
		case joaat("RWD_LORIDE_06"):
			return 63395;
			break;
		case joaat("RWD_LORIDE_07"):
			return 60105;
			break;
		case joaat("RWD_LORIDE_08"):
			return 77260;
			break;
		case joaat("RWD_LORIDE_09"):
			return 75380;
			break;
		case joaat("RWD_LORIDE_10"):
			return 74675;
			break;
		case joaat("RWD_LORIDE_11"):
			return 78200;
			break;
		case joaat("RWD_LORIDE_12"):
			return 79140;
			break;
		case joaat("RWD_LORIDE_13"):
			return 66685;
			break;
		case joaat("RWD_LORIDE_14"):
			return 73970;
			break;
		case joaat("RWD_LORIDE_15"):
			return 64100;
			break;
		case joaat("RWD_SUV_01"):
			return 79845;
			break;
		case joaat("RWD_SUV_02"):
			return 56345;
			break;
		case joaat("RWD_SUV_03"):
			return 65980;
			break;
		case joaat("RWD_SUV_04"):
			return 68800;
			break;
		case joaat("RWD_SUV_05"):
			return 57520;
			break;
		case joaat("RWD_SUV_06"):
			return 76790;
			break;
		case joaat("RWD_SUV_07"):
			return 65745;
			break;
		case joaat("RWD_SUV_08"):
			return 81490;
			break;
		case joaat("RWD_SUV_09"):
			return 68565;
			break;
		case joaat("RWD_SUV_10"):
			return 70915;
			break;
		case joaat("RWD_SUV_11"):
			return 76555;
			break;
		case joaat("RWD_SUV_12"):
			return 58225;
			break;
		case joaat("RWD_SUV_13"):
			return 77495;
			break;
		case joaat("RWD_SUV_14"):
			return 82195;
			break;
		case joaat("RWD_SUV_15"):
			return 79375;
			break;
		case joaat("RWD_SUV_16"):
			return 80550;
			break;
		case joaat("RWD_SUV_17"):
			return 81255;
			break;
		case joaat("RWD_SUV_18"):
			return 70680;
			break;
		case joaat("RWD_SUV_19"):
			return 66920;
			break;
		case joaat("RWD_SUV_20"):
			return 79375;
			break;
		case joaat("RWD_OFFR_01"):
			return 55640;
			break;
		case joaat("RWD_OFFR_02"):
			return 55405;
			break;
		case joaat("RWD_OFFR_03"):
			return 58695;
			break;
		case joaat("RWD_OFFR_04"):
			return 63160;
			break;
		case joaat("RWD_OFFR_05"):
			return 52820;
			break;
		case joaat("RWD_OFFR_06"):
			return 76085;
			break;
		case joaat("RWD_OFFR_07"):
			return 72795;
			break;
		case joaat("RWD_OFFR_08"):
			return 65040;
			break;
		case joaat("RWD_OFFR_09"):
			return 53525;
			break;
		case joaat("RWD_OFFR_10"):
			return 61750;
			break;
		case joaat("RWD_DRFT_01"):
			return 65510;
			break;
		case joaat("RWD_DRFT_02"):
			return 57990;
			break;
		case joaat("RWD_DRFT_03"):
			return 54700;
			break;
		case joaat("RWD_DRFT_04"):
			return 60340;
			break;
		case joaat("RWD_DRFT_05"):
			return 54230;
			break;
		case joaat("RWD_DRFT_06"):
			return 64335;
			break;
		case joaat("RWD_DRFT_07"):
			return 74440;
			break;
		case joaat("RWD_DRFT_08"):
			return 78905;
			break;
		case joaat("RWD_DRFT_09"):
			return 61515;
			break;
		case joaat("RWD_DRFT_10"):
			return 77730;
			break;
		case joaat("RWD_DRFT_11"):
			return 65275;
			break;
		case joaat("RWD_DRFT_12"):
			return 55170;
			break;
		case joaat("RWD_DRFT_13"):
			return 59165;
			break;
		case joaat("RWD_DRFT_14"):
			return 59870;
			break;
		case joaat("RWD_DRFT_15"):
			return 53760;
			break;
		case joaat("RWD_DRFT_16"):
			return 60810;
			break;
		case joaat("RWD_DRFT_17"):
			return 64805;
			break;
		case joaat("RWD_DRFT_18"):
			return 53995;
			break;
		case joaat("RWD_DRFT_19"):
			return 54935;
			break;
		case joaat("RWD_DRFT_20"):
			return 54465;
			break;
		case joaat("RWD_DRFT_21"):
			return 51645;
			break;
		case joaat("RWD_DRFT_22"):
			return 60575;
			break;
		case joaat("RWD_DRFT_23"):
			return 75145;
			break;
		case joaat("RWD_DRFT_24"):
			return 78670;
			break;
		case joaat("RWD_BIKEW_01"):
			return 16980;
			break;
		case joaat("RWD_BIKEW_02"):
			return 17137;
			break;
		case joaat("RWD_BIKEW_03"):
			return 18625;
			break;
		case joaat("RWD_BIKEW_04"):
			return 19095;
			break;
		case joaat("RWD_BIKEW_05"):
			return 16823;
			break;
		case joaat("RWD_BIKEW_06"):
			return 16667;
			break;
		case joaat("RWD_BIKEW_07"):
			return 19800;
			break;
		case joaat("RWD_BIKEW_08"):
			return 20897;
			break;
		case joaat("RWD_BIKEW_09"):
			return 20348;
			break;
		case joaat("RWD_BIKEW_10"):
			return 20662;
			break;
		case joaat("RWD_BIKEW_11"):
			return 23873;
			break;
		case joaat("RWD_BIKEW_12"):
			return 24422;
			break;
		case joaat("RWD_BIKEW_13"):
			return 24343;
			break;
		case joaat("BIKEW_14"):
			return Global_262145.f_17985 /* Tunable: BIKER_CARMODS_ROMPER_RACING */;
			break;
		case joaat("BIKEW_15"):
			return Global_262145.f_17986 /* Tunable: BIKER_CARMODS_WARP_DRIVE */;
			break;
		case joaat("BIKEW_16"):
			return Global_262145.f_17987 /* Tunable: BIKER_CARMODS_SNOWFLAKE */;
			break;
		case joaat("BIKEW_17"):
			return Global_262145.f_17988 /* Tunable: BIKER_CARMODS_HOLY_SPOKE */;
			break;
		case joaat("BIKEW_18"):
			return Global_262145.f_17989 /* Tunable: BIKER_CARMODS_OLD_SKOOL_TRIPLE */;
			break;
		case joaat("BIKEW_19"):
			return Global_262145.f_17990 /* Tunable: BIKER_CARMODS_FUTURA */;
			break;
		case joaat("BIKEW_20"):
			return Global_262145.f_17991 /* Tunable: BIKER_CARMODS_QUARTER_MILE_KING */;
			break;
		case joaat("BIKEW_21"):
			return Global_262145.f_17992 /* Tunable: BIKER_CARMODS_CARTWHEEL */;
			break;
		case joaat("BIKEW_22"):
			return Global_262145.f_17993 /* Tunable: BIKER_CARMODS_DOUBLE_FIVE */;
			break;
		case joaat("BIKEW_23"):
			return Global_262145.f_17994 /* Tunable: BIKER_CARMODS_SHURIKEN */;
			break;
		case joaat("BIKEW_24"):
			return Global_262145.f_17995 /* Tunable: BIKER_CARMODS_SIMPLE_SIX */;
			break;
		case joaat("BIKEW_25"):
			return Global_262145.f_17996 /* Tunable: BIKER_CARMODS_CELTIC */;
			break;
		case joaat("BIKEW_26"):
			return Global_262145.f_17997 /* Tunable: BIKER_CARMODS_RAZER */;
			break;
		case joaat("BIKEW_27"):
			return Global_262145.f_17998 /* Tunable: BIKER_CARMODS_TWISTED */;
			break;
		case joaat("BIKEW_28"):
			return Global_262145.f_17999 /* Tunable: BIKER_CARMODS_MORNING_STAR */;
			break;
		case joaat("BIKEW_29"):
			return Global_262145.f_18000 /* Tunable: BIKER_CARMODS_JAGGED_SPOKES */;
			break;
		case joaat("BIKEW_30"):
			return Global_262145.f_18001 /* Tunable: BIKER_CARMODS_EIDOLON */;
			break;
		case joaat("BIKEW_31"):
			return Global_262145.f_18002 /* Tunable: BIKER_CARMODS_ENIGMA */;
			break;
		case joaat("BIKEW_32"):
			return Global_262145.f_18003 /* Tunable: BIKER_CARMODS_BIG_SPOKES */;
			break;
		case joaat("BIKEW_33"):
			return Global_262145.f_18004 /* Tunable: BIKER_CARMODS_WEBS */;
			break;
		case joaat("BIKEW_34"):
			return Global_262145.f_18005 /* Tunable: BIKER_CARMODS_HOTPLATE */;
			break;
		case joaat("BIKEW_35"):
			return Global_262145.f_18006 /* Tunable: BIKER_CARMODS_BOBSTA */;
			break;
		case joaat("BIKEW_36"):
			return Global_262145.f_18007 /* Tunable: BIKER_CARMODS_GROUCH */;
			break;
	}
	return 1500;
}

var func_531()//Position - 0x67796
{
	return BitTest(Global_103905, 10);
}

var func_532()//Position - 0x677A5
{
	return BitTest(Global_103905, 7);
}

int func_533(int iParam0)//Position - 0x691BB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (((((((((((((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("avarus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("chimera")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("daemon2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("defiler")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("esskey")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("nightblade")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ratbike")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zombiea")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zombieb")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sanctus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("manchez")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("vortex")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("wolfsbane")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("faggio3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hakuchou2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer4")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("fcr2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("diablous2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_534(int iParam0)//Position - 0x69312
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("slamvan4"):
		case joaat("bruiser"):
		case joaat("brutus"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("issi5"):
		case joaat("slamvan5"):
		case joaat("bruiser2"):
		case joaat("brutus2"):
		case joaat("issi6"):
		case joaat("slamvan6"):
		case joaat("bruiser3"):
		case joaat("brutus3"):
		case joaat("omnisegt"):
			return 1;
			break;
	}
	return 0;
}

int func_535(int iParam0)//Position - 0x6938D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ratbike") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zombiea")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("daemon2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zombieb")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer4")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("faggio3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("wolfsbane"))
		{
			return 1;
		}
	}
	return 0;
}

int func_536(int iParam0)//Position - 0x6941F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("nero2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("elegy"))
		{
			return 1;
		}
	}
	return 0;
}

int func_537(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x699C1
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iParam2)
	{
		case 85:
			switch (iParam1)
			{
				case joaat("XMAS_CAMO01"):
				case joaat("XMAS_CAMO02"):
				case joaat("XMAS_CAMO03"):
				case joaat("XMAS_CAMO04"):
				case joaat("XMAS_CAMO05"):
				case joaat("XMAS_CAMO06"):
				case joaat("XMAS_CAMO07"):
				case joaat("XMAS_CAMO08"):
				case joaat("XMAS_CAMO09"):
				case joaat("XMAS_CAMO10"):
					switch (iVar0)
					{
						case joaat("thruster"):
						case joaat("molotok"):
						case joaat("khanjali"):
						case joaat("streiter"):
						case joaat("riot2"):
						case joaat("comet4"):
						case joaat("chernobog"):
						case joaat("barrage"):
						case joaat("avenger"):
						case joaat("trailersmall2"):
						case joaat("technical3"):
						case joaat("tampa3"):
						case joaat("oppressor"):
						case joaat("nightshark"):
						case joaat("insurgent3"):
						case joaat("halftrack"):
						case joaat("dune3"):
						case joaat("ardent"):
						case joaat("apc"):
						case joaat("akula"):
						case joaat("trailerlarge"):
							return 1;
							break;
					}
					break;
				case joaat("SCCAMO_LIV1"):
				case joaat("SCCAMO_LIV2"):
				case joaat("SCCAMO_LIV3"):
				case joaat("SCCAMO_LIV4"):
				case joaat("SCCAMO_LIV5"):
				case joaat("SCCAMO_LIV6"):
				case joaat("SCCAMO_LIV7"):
				case joaat("SCCAMO_LIV8"):
				case joaat("SCCAMO_LIV9"):
				case joaat("SCCAMO_LIV10"):
					switch (iVar0)
					{
						case joaat("thruster"):
						case joaat("molotok"):
						case joaat("khanjali"):
						case joaat("streiter"):
						case joaat("riot2"):
						case joaat("comet4"):
						case joaat("chernobog"):
						case joaat("barrage"):
						case joaat("avenger"):
						case joaat("trailersmall2"):
						case joaat("technical3"):
						case joaat("tampa3"):
						case joaat("oppressor"):
						case joaat("nightshark"):
						case joaat("insurgent3"):
						case joaat("halftrack"):
						case joaat("dune3"):
						case joaat("ardent"):
						case joaat("apc"):
						case joaat("akula"):
						case joaat("trailerlarge"):
						case joaat("speedo4"):
						case joaat("patriot"):
						case joaat("patriot2"):
						case joaat("mule4"):
						case joaat("pounder2"):
						case joaat("oppressor2"):
						case joaat("menacer"):
						case joaat("revolter"):
							return 1;
							break;
					}
					break;
				case joaat("STAF_LIV8"):
					switch (iVar0)
					{
						case joaat("swinger"):
						case joaat("stafford"):
							return 1;
							break;
					}
					break;
				case joaat("STAF_LIV9"):
					switch (iVar0)
					{
						case joaat("swinger"):
							return 1;
							break;
					}
					break;
				case joaat("CLIQ_LIV11"):
					switch (iVar0)
					{
						case joaat("clique"):
							return 1;
							break;
					}
					break;
				case joaat("THX_LIV_10"):
					switch (iVar0)
					{
						case joaat("thrax"):
							return 1;
							break;
					}
					break;
				case joaat("PARAG_LIV2"):
					switch (iVar0)
					{
						case joaat("paragon2"):
						case joaat("paragon"):
							return 1;
							break;
					}
					break;
				case joaat("S80_LIV_10"):
					switch (iVar0)
					{
						case joaat("s80"):
							return 1;
							break;
					}
					break;
				case joaat("LANDST2_LIV_10"):
					switch (iVar0)
					{
						case joaat("landstalker2"):
							return 1;
							break;
					}
					break;
				case joaat("SEM2_LIVERY9"):
					switch (iVar0)
					{
						case joaat("seminole2"):
							return 1;
							break;
					}
					break;
				case joaat("RSX_LIVERY11"):
					switch (iVar0)
					{
						case joaat("italirsx"):
							return 1;
							break;
					}
					break;
				case joaat("TORD_LIV11"):
					switch (iVar0)
					{
						case joaat("toreador"):
							return 1;
							break;
					}
					break;
				case joaat("WEEVIL_LIV13"):
					switch (iVar0)
					{
						case joaat("weevil"):
							return 1;
							break;
					}
					break;
				case joaat("BANSH_LIV11"):
				case joaat("BANSH_LIV12"):
				case joaat("BANSH_LIV13"):
				case joaat("BANSH_LIV14"):
				case joaat("BANSH_LIV15"):
					switch (iVar0)
					{
						case joaat("banshee"):
							return 1;
							break;
					}
					break;
				case joaat("KURUMA_LIV11"):
				case joaat("KURUMA_LIV12"):
				case joaat("KURUMA_LIV13"):
				case joaat("KURUMA_LIV14"):
				case joaat("KURUMA_LIV15"):
					switch (iVar0)
					{
						case joaat("kuruma"):
							return 1;
							break;
					}
					break;
				case joaat("HOTRING_LIV31"):
					switch (iVar0)
					{
						case joaat("hotring"):
							return 1;
							break;
					}
					break;
				case joaat("KANJO_LIV13"):
					switch (iVar0)
					{
						case joaat("kanjo"):
							return 1;
							break;
					}
					break;
				case joaat("HERMES_LIV11"):
					switch (iVar0)
					{
						case joaat("hermes"):
							return 1;
							break;
					}
					break;
				case joaat("TORD_LIV12"):
					switch (iVar0)
					{
						case joaat("toreador"):
							return 1;
							break;
					}
					break;
				case joaat("COMET6_LIV11"):
				case joaat("COMET6_LIV12"):
				case joaat("COMET6_LIV13"):
				case joaat("COMET6_LIV14"):
				case joaat("COMET6_LIV15"):
					switch (iVar0)
					{
						case joaat("comet6"):
							return 1;
							break;
					}
					break;
				case joaat("CYPH_LIVERY11"):
				case joaat("CYPH_LIVERY12"):
				case joaat("CYPH_LIVERY13"):
				case joaat("CYPH_LIVERY14"):
				case joaat("CYPH_LIVERY15"):
					switch (iVar0)
					{
						case joaat("cypher"):
							return 1;
							break;
					}
					break;
				case joaat("DOM7_LIVERY11"):
				case joaat("DOM7_LIVERY12"):
				case joaat("DOM7_LIVERY13"):
				case joaat("DOM7_LIVERY14"):
				case joaat("DOM7_LIVERY15"):
					switch (iVar0)
					{
						case joaat("dominator7"):
							return 1;
							break;
					}
					break;
				case joaat("VTC_LIV11"):
				case joaat("VTC_LIV12"):
				case joaat("VTC_LIV13"):
				case joaat("VTC_LIV14"):
				case joaat("VTC_LIV15"):
					switch (iVar0)
					{
						case joaat("vectre"):
							return 1;
							break;
					}
					break;
				case joaat("GROWLER_LIV11"):
				case joaat("GROWLER_LIV12"):
				case joaat("GROWLER_LIV13"):
				case joaat("GROWLER_LIV14"):
				case joaat("GROWLER_LIV15"):
					switch (iVar0)
					{
						case joaat("growler"):
							return 1;
							break;
					}
					break;
				case joaat("PREV_LIV11"):
				case joaat("PREV_LIV12"):
				case joaat("PREV_LIV13"):
				case joaat("PREV_LIV14"):
				case joaat("PREV_LIV15"):
					switch (iVar0)
					{
						case joaat("previon"):
							return 1;
							break;
					}
					break;
				case joaat("SULTAN3_LIV11"):
				case joaat("SULTAN3_LIV12"):
				case joaat("SULTAN3_LIV13"):
				case joaat("SULTAN3_LIV14"):
				case joaat("SULTAN3_LIV15"):
					switch (iVar0)
					{
						case joaat("sultan3"):
							return 1;
							break;
					}
					break;
				case joaat("HSW_LIV3"):
				case joaat("HSW_LIV4"):
				case joaat("HSW_LIV3BRIO"):
				case joaat("HSW_LIV4BRIO"):
					if (__LIB_0__::func_114())
					{
						return 1;
					}
					break;
				case joaat("COMET7_LIV11"):
				case joaat("DEITY_LIVERY12"):
				case joaat("BALL7_LIV_13"):
					return 1;
					break;
				case joaat("STNT_LV3"):
				case joaat("FAC3_LIV_6"):
				case joaat("BF_LIV_2"):
				case joaat("BRIO_LIV_2"):
				case joaat("NERO2_LIV_7"):
				case joaat("STAR_LIV8"):
				case joaat("ALPHAZ1_LIVERY6"):
				case joaat("HAVOK_LIVERY3"):
				case joaat("MICLI_LIVERY5"):
				case joaat("HOTRING_LIV28"):
				case joaat("GB_LIV10"):
				case joaat("TEZ_LIV4"):
				case joaat("BRUT3_LIV_4"):
				case joaat("CERB3_LIV_1"):
				case joaat("BRUIS3_LIV4"):
				case joaat("ZR3803_LIV3"):
				case joaat("DOM6_LIV1"):
				case joaat("PARAG_LIV7"):
				case joaat("ISSI7_LIV_7"):
				case joaat("ISSI7_LIV_8"):
				case joaat("THX_LIV_9"):
				case joaat("NOVA_LIV7"):
				case joaat("FORMULA_LIV2"):
				case joaat("ASBO_LIV5"):
				case joaat("IMGN_LIV5"):
				case joaat("VET2_LIV1"):
				case joaat("ZR350_LIV7"):
				case joaat("EUROS_LIV14"):
				case joaat("BUFF4_LIV_7"):
				case joaat("REEVER_LIV10"):
				case joaat("CHAMPION_LIV10"):
				case joaat("JUG_LIV8"):
				case joaat("OPENW1_LIV8"):
					if (Global_262145.f_32555 /* Tunable: FREE_SPRUNK_LIVERY */)
					{
						return 1;
					}
					break;
				case joaat("ALPHAZ1_LIVERY4"):
				case joaat("HAVOK_LIVERY8"):
				case joaat("MICLI_LIVERY4"):
				case joaat("HOTRING_LIV24"):
				case joaat("MICHEL_LIV4"):
				case joaat("BRUIS3_CANS"):
				case joaat("DOM6_LIV3"):
				case joaat("NOVA_LIV9"):
				case joaat("OPENW1_LIV7"):
				case joaat("SLT_LIV14"):
				case joaat("VET2_LIV2"):
					if (Global_262145.f_32556 /* Tunable: FREE_ECOLA_LIVERY */)
					{
						return 1;
					}
					break;
				case joaat("CORSITA_LIV10"):
					if (iVar0 == joaat("corsita"))
					{
						return 1;
					}
					break;
				case joaat("VIGR2_LIV_10"):
					if (iVar0 == joaat("vigero2"))
					{
						return 1;
					}
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case joaat("CMOD_COL6_0"):
					if (iVar0 == joaat("stunt") && iParam3 == 2)
					{
						if (Global_262145.f_32555 /* Tunable: FREE_SPRUNK_LIVERY */)
						{
							return 1;
						}
					}
					break;
				case joaat("BATI_LV4"):
				case joaat("SANC_LV1"):
					if (Global_262145.f_32555 /* Tunable: FREE_SPRUNK_LIVERY */)
					{
						return 1;
					}
					break;
			}
			break;
		case 46:
			switch (iParam1)
			{
				case joaat("BRUIS3_CANS"):
					if (Global_262145.f_32556 /* Tunable: FREE_ECOLA_LIVERY */)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_538(int iParam0, var uParam1, var uParam2)//Position - 0x6A16D
{
	Global_1585308 = iParam0;
	Global_1585309 = uParam1;
	Global_1585310 = uParam2;
}

int func_539(int iParam0, int iParam1, int iParam2)//Position - 0x6A1E0
{
	int iVar0;
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				case 1:
					return 500;
					break;
				case 2:
					return 1250;
					break;
				case 3:
					return 2000;
					break;
				case 4:
					return 3500;
					break;
				case 5:
					return 5000;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				case 1:
					return 2000;
					break;
				case 2:
					return 2700;
					break;
				case 3:
					return 3500;
					break;
				case 4:
					return 5000;
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				case 1:
					return 5000;
					break;
				case 2:
					return 6000;
					break;
				case 3:
					return 7000;
					break;
				case 4:
					return 8000;
					break;
				case 5:
					return 9000;
					break;
				case 6:
					return 1000;
					break;
				case 7:
					return 1100;
					break;
				case 8:
					return 1200;
					break;
				case 9:
					return 1300;
					break;
				case 10:
					return 1400;
					break;
				case 11:
					return 1500;
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 0:
					return 50;
					break;
				case 1:
					return 3500;
					break;
				case 2:
					return 3975;
					break;
				case 3:
					return 4250;
					break;
				case 4:
					return 5000;
					break;
				case 5:
					return 5500;
					break;
				case 6:
					return 5975;
					break;
				case 7:
					return 6750;
					break;
				case 8:
					return 7000;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 500;
					break;
				case 1:
					return 500;
					break;
			}
			break;
		case 26:
			if ((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26)
			{
				switch (iParam1)
				{
					case 0:
						return 800;
						break;
					case 1:
						return 1500;
						break;
					case 2:
						return 2500;
						break;
					case 3:
						return 4000;
						break;
					case 4:
						return 4800;
						break;
					case 5:
						return 5500;
						break;
					case 6:
						return 5800;
						break;
					case 7:
						return 6000;
						break;
					case 8:
						return 6200;
						break;
					case 9:
						return 6200;
						break;
					case 10:
						return 6250;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 450;
						break;
					case 1:
						return 850;
						break;
					case 2:
						return 1200;
						break;
					case 3:
						return 1450;
						break;
					case 4:
						return 2225;
						break;
					case 5:
						return 2500;
						break;
					case 6:
						return 2800;
						break;
					case 7:
						return 3000;
						break;
					case 8:
						return 3250;
						break;
					case 9:
						return 3500;
						break;
					case 10:
						return 3600;
						break;
				}
			}
			else if (Global_1585307 == 0 || Global_1585307 == 28)
			{
				switch (iParam1)
				{
					case 0:
						return 150;
						break;
					case 1:
						return 325;
						break;
					case 2:
						return 750;
						break;
					case 3:
						return 875;
						break;
					case 4:
						return 1000;
						break;
					case 5:
						return 1200;
						break;
					case 6:
						return 1450;
						break;
					case 7:
						return 2225;
						break;
					case 8:
						return 2500;
						break;
					case 9:
						return 2800;
						break;
					case 10:
						return 3000;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					case 1:
						return 200;
						break;
					case 2:
						return 350;
						break;
					case 3:
						return 449;
						break;
					case 4:
						return 625;
						break;
					case 5:
						return 875;
						break;
					case 6:
						return 1000;
						break;
					case 7:
						return 1200;
						break;
					case 8:
						return 1450;
						break;
					case 9:
						return 2225;
						break;
					case 10:
						return 2500;
						break;
					}
			}
			break;
		case 8:
			if ((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26)
			{
				switch (iParam1)
				{
					case 0:
						return 1100;
						break;
					case 1:
						return 2300;
						break;
					case 2:
						return 3700;
						break;
					case 3:
						return 5850;
						break;
					case 4:
						return 7250;
						break;
					case 5:
						return 7350;
						break;
					case 6:
						return 7450;
						break;
					case 7:
						return 7550;
						break;
					case 8:
						return 7650;
						break;
					case 20:
						return 1100;
						break;
					case 21:
						return 2300;
						break;
					case 22:
						return 3700;
						break;
					case 23:
						return 5850;
						break;
					case 24:
						return 7250;
						break;
					case 25:
						return 7350;
						break;
					case 26:
						return 7450;
						break;
					case 27:
						return 7550;
						break;
					case 28:
						return 7650;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 750;
						break;
					case 1:
						return 1250;
						break;
					case 2:
						return 1650;
						break;
					case 3:
						return 1950;
						break;
					case 4:
						return 2350;
						break;
					case 5:
						return 2450;
						break;
					case 6:
						return 2550;
						break;
					case 7:
						return 2650;
						break;
					case 8:
						return 2750;
						break;
					case 20:
						return 750;
						break;
					case 21:
						return 1250;
						break;
					case 22:
						return 1650;
						break;
					case 23:
						return 1950;
						break;
					case 24:
						return 2350;
						break;
					case 25:
						return 2450;
						break;
					case 26:
						return 2550;
						break;
					case 27:
						return 2650;
						break;
					case 28:
						return 2750;
						break;
				}
			}
			else if (Global_1585307 == 0 || Global_1585307 == 28)
			{
				switch (iParam1)
				{
					case 0:
						return 250;
						break;
					case 1:
						return 500;
						break;
					case 2:
						return 750;
						break;
					case 3:
						return 1000;
						break;
					case 4:
						return 1300;
						break;
					case 5:
						return 1400;
						break;
					case 6:
						return 1500;
						break;
					case 7:
						return 1600;
						break;
					case 8:
						return 1700;
						break;
					case 20:
						return 250;
						break;
					case 21:
						return 500;
						break;
					case 22:
						return 750;
						break;
					case 23:
						return 1000;
						break;
					case 24:
						return 1300;
						break;
					case 25:
						return 1400;
						break;
					case 26:
						return 1500;
						break;
					case 27:
						return 1600;
						break;
					case 28:
						return 1700;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 149;
						break;
					case 1:
						return 195;
						break;
					case 2:
						return 250;
						break;
					case 3:
						return 375;
						break;
					case 4:
						return 500;
						break;
					case 5:
						return 600;
						break;
					case 6:
						return 700;
						break;
					case 7:
						return 800;
						break;
					case 8:
						return 900;
						break;
					case 20:
						return 149;
						break;
					case 21:
						return 195;
						break;
					case 22:
						return 250;
						break;
					case 23:
						return 375;
						break;
					case 24:
						return 500;
						break;
					case 25:
						return 600;
						break;
					case 26:
						return 700;
						break;
					case 27:
						return 800;
						break;
					case 28:
						return 900;
						break;
					}
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 350;
					break;
				case 1:
					return 550;
					break;
				case 2:
					return 675;
					break;
				case 3:
					return 750;
					break;
				case 4:
					return 1375;
					break;
				case 5:
					return 2300;
					break;
				case 6:
					return 2450;
					break;
				case 7:
					return 2900;
					break;
				case 8:
					return 3500;
					break;
				case 9:
					return 4000;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 500;
					break;
				case 1:
					return 900;
					break;
				case 2:
					return 1250;
					break;
				case 3:
					return 1800;
					break;
				case 4:
					return 3350;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 130;
					break;
				case 1:
					return 375;
					break;
				case 2:
					return 899;
					break;
				case 3:
					return 1499;
					break;
				case 4:
					return 4770;
					break;
				case 5:
					return 4870;
					break;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				case 1:
					return 2950;
					break;
				case 2:
					return 3250;
					break;
				case 3:
					return 4000;
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				case 1:
					return 375;
					break;
				case 2:
					return 670;
					break;
				case 3:
					return 825;
					break;
				case 4:
					return 1500;
					break;
				case 5:
					return 1600;
					break;
			}
			break;
		case 27:
			iVar0 = iParam1;
			switch (iVar0)
			{
				case 0:
					return 50;
					break;
				case 1:
					return 1500;
					break;
				case 2:
					return 1500;
					break;
				case 3:
					return 1500;
					break;
				case 4:
					return 1500;
					break;
				case 5:
					return 1500;
					break;
				case 6:
					return 1500;
					break;
				case 7:
					return 1500;
					break;
				case 8:
					return 1500;
					break;
				case 9:
					return 1500;
					break;
				case 10:
					return 1500;
					break;
				case 11:
					return 1500;
					break;
				case 12:
					return 1500;
					break;
				case 13:
					return 1500;
					break;
				case 14:
					return 1500;
					break;
				case 15:
					return 1500;
					break;
				case 16:
					return 1500;
					break;
				case 17:
					return 600;
					break;
				case 18:
					return 700;
					break;
				case 19:
					return 800;
					break;
				case 20:
					return 1000;
					break;
				case 21:
					return 1200;
					break;
				case 22:
					return 1300;
					break;
				case 23:
					return 1400;
					break;
				case 24:
					return 1700;
					break;
				case 25:
					return 2000;
					break;
				case 26:
					return 2200;
					break;
				case 44:
					return 60;
					break;
				case 45:
					return 75;
					break;
				case 46:
					return 150;
					break;
				case 47:
					return 255;
					break;
				case 48:
					return 300;
					break;
				case 49:
					return 325;
					break;
				case 50:
					return 375;
					break;
				case 51:
					return 500;
					break;
				case 52:
					return 600;
					break;
			}
			break;
		case 29:
			if ((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26)
			{
				switch (iParam1)
				{
					case 0:
						return 300;
						break;
					case 1:
						return 1450;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 200;
						break;
					case 1:
						return 1000;
						break;
				}
			}
			else if (Global_1585307 == 0 || Global_1585307 == 28)
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					case 1:
						return 300;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					case 1:
						return 100;
						break;
					}
			}
			break;
		case 30:
			if (iParam2 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					case 1:
						return 1000;
						break;
					case 2:
						return 1000;
						break;
					case 3:
						return 1250;
						break;
					case 4:
						return 1800;
						break;
					case 5:
						return 2000;
						break;
					case 6:
						return 2000;
						break;
					case 7:
						return 3000;
						break;
				}
			}
			else if (iParam2 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 650;
						break;
					case 1:
						return 650;
						break;
					case 2:
						return 650;
						break;
					case 3:
						return 650;
						break;
					case 4:
						return 650;
						break;
					case 5:
						return 650;
						break;
					case 6:
						return 650;
						break;
					case 7:
						return 650;
						break;
					case 8:
						return 650;
						break;
					case 9:
						return 650;
						break;
					case 10:
						return 650;
						break;
					case 11:
						return 650;
						break;
					case 12:
						return 650;
						break;
					}
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 0:
					return 50;
					break;
				case 1:
					return 50;
					break;
				case 2:
					return 50;
					break;
				case 3:
					return 75;
					break;
				case 4:
					return 150;
					break;
				case 10:
					return 600;
					break;
				default:
					return 600;
					break;
			}
			break;
		case 40:
			if (ENTITY::GET_ENTITY_MODEL(Global_1585308) == joaat("dukes"))
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					case 1:
						return 350;
						break;
					default:
						return 2500;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					case 1:
						return 350;
						break;
					case 2:
						return 575;
						break;
					case 3:
						return 800;
						break;
					case 4:
						return 975;
						break;
					case 5:
						return 1200;
						break;
					default:
						return 1500;
						break;
					}
			}
			break;
		case 44:
			if ((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26)
			{
				switch (iParam1)
				{
					case 0:
						return 1250;
						break;
					case 1:
						return 2750;
						break;
					case 2:
						return 4000;
						break;
					case 3:
						return 5250;
						break;
					case 4:
						return 7000;
						break;
					case 5:
						return 7350;
						break;
					case 6:
						return 7600;
						break;
					case 7:
						return 7900;
						break;
					case 8:
						return 8300;
						break;
					case 9:
						return 8500;
						break;
					case 10:
						return 9000;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 1250;
						break;
					case 1:
						return 1500;
						break;
					case 2:
						return 2000;
						break;
					case 3:
						return 2750;
						break;
					case 4:
						return 3900;
						break;
				}
			}
			else if (Global_1585307 == 0 || Global_1585307 == 28)
			{
				switch (iParam1)
				{
					case 0:
						return 300;
						break;
					case 1:
						return 415;
						break;
					case 2:
						return 500;
						break;
					case 3:
						return 750;
						break;
					case 4:
						return 1000;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 300;
						break;
					case 1:
						return 415;
						break;
					case 2:
						return 500;
						break;
					case 3:
						return 750;
						break;
					case 4:
						return 1000;
						break;
					case 5:
						return 1250;
						break;
					}
			}
			break;
		case 46:
			if ((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26)
			{
				switch (iParam1)
				{
					case 0:
						return 3000;
						break;
					case 1:
						return 3750;
						break;
					case 2:
						return 5000;
						break;
					case 3:
						return 6500;
						break;
					case 4:
						return 7000;
						break;
					case 5:
						return 8000;
						break;
					case 6:
						return 8500;
						break;
					case 7:
						return 9000;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 500;
						break;
					case 1:
						return 750;
						break;
					case 2:
						return 950;
						break;
					case 3:
						return 1300;
						break;
					case 4:
						return 1750;
						break;
					case 5:
						return 2000;
						break;
					case 6:
						return 2500;
						break;
					case 7:
						return 3000;
						break;
				}
			}
			else if (Global_1585307 == 0 || Global_1585307 == 28)
			{
				switch (iParam1)
				{
					case 0:
						return 150;
						break;
					case 1:
						return 275;
						break;
					case 2:
						return 350;
						break;
					case 3:
						return 525;
						break;
					case 4:
						return 750;
						break;
					case 5:
						return 1000;
						break;
					case 6:
						return 1250;
						break;
					case 7:
						return 1500;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 150;
						break;
					case 1:
						return 275;
						break;
					case 2:
						return 350;
						break;
					case 3:
						return 525;
						break;
					case 4:
						return 750;
						break;
					case 5:
						return 1000;
						break;
					case 6:
						return 1250;
						break;
					case 7:
						return 1500;
						break;
					}
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				case 1:
					return 500;
					break;
				case 2:
					return 1000;
					break;
				case 3:
					return 1700;
					break;
				case 4:
					return 2200;
					break;
				case 5:
					return 2300;
					break;
			}
			break;
		case 53:
			switch (iParam1)
			{
				case 0:
					return 500;
					break;
				case 1:
					return 2500;
					break;
			}
			break;
		case 58:
			switch (iParam1)
			{
				case 2:
					return 4000;
					break;
				case 10:
					return 100;
					break;
				case 11:
					return 2500;
					break;
				case 12:
					return 2500;
					break;
				case 13:
					return 2500;
					break;
				case 14:
					return 2500;
					break;
				case 15:
					return 2500;
					break;
				case 16:
					return 2500;
					break;
				case 17:
					return 2500;
					break;
				case 18:
					return 2500;
					break;
				case 19:
					return 2500;
					break;
				case 29:
					return 1000;
					break;
				case 30:
					return 1250;
					break;
				case 31:
					return 1500;
					break;
				case 32:
					return 1750;
					break;
				case 33:
					return 1900;
					break;
				case 34:
					return 2000;
					break;
				case 35:
					return 2150;
					break;
				case 36:
					return 2250;
					break;
				case 37:
					return 2500;
					break;
				case 38:
					return 2500;
					break;
				case 39:
					return 2500;
					break;
			}
			break;
		case 56:
			switch (iParam1)
			{
				case 0:
					return 1500;
					break;
				case 1:
					return 800;
					break;
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 0:
					return 1500;
					break;
				case 1:
					return 800;
					break;
			}
			break;
		case 60:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				case 1:
					return 200;
					break;
				case 2:
					return 450;
					break;
				case 3:
					return 700;
					break;
				case 4:
					return 900;
					break;
				case 5:
					return 900;
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 150;
					break;
				case 1:
					return 450;
					break;
				case 2:
					return 750;
					break;
				case 3:
					return 850;
					break;
				case 4:
					return 950;
					break;
				case 5:
					return 1000;
					break;
				case 6:
					return 1050;
					break;
				case 7:
					return 1100;
					break;
				case 8:
					return 1150;
					break;
				case 9:
					return 1200;
					break;
				case 10:
					return 150;
					break;
				case 11:
					return 450;
					break;
				case 12:
					return 750;
					break;
				case 13:
					return 850;
					break;
				case 14:
					return 950;
					break;
				case 15:
					return 1000;
					break;
				case 16:
					return 1050;
					break;
				case 17:
					return 1100;
					break;
				case 18:
					return 1150;
					break;
				case 19:
					return 1200;
					break;
			}
			break;
	}
	return 350;
}

int func_540(int iParam0)//Position - 0x7B089
{
	switch (iParam0)
	{
		case joaat("comet6"):
		case joaat("vectre"):
		case joaat("warrener2"):
		case joaat("remus"):
		case joaat("jester4"):
		case joaat("rt3000"):
		case joaat("cypher"):
		case joaat("sultan3"):
		case joaat("tenf2"):
		case joaat("kanjosj"):
		case joaat("postlude"):
		case joaat("sentinel4"):
		case joaat("brioso3"):
		case joaat("weevil2"):
			return 1;
			break;
	}
	return 0;
}

int func_541(int iParam0, bool bParam1)//Position - 0x7B16E
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(Global_1585308);
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = SYSTEM::FLOOR(Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */);
	}
	switch (iVar0)
	{
		case joaat("sultanrs"):
			switch (iParam0)
			{
				case 62:
					return Global_262145.f_12369 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLATEHOLDER */;
					break;
				case 63:
					return Global_262145.f_12370 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_VANITY_PLATE */;
					break;
				case 91:
				case 64:
					return Global_262145.f_13453 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_INTERIOR_TRIM */;
					break;
				case 66:
					return Global_262145.f_13454 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_INTERIOR_DASH */;
					break;
				case 90:
				case 67:
					return Global_262145.f_13455 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_INTERIOR_DIALS */;
					break;
				case 68:
					return Global_262145.f_13456 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_INTERIOR_DOORS */;
					break;
				case 69:
					return Global_262145.f_13457 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_SEATS */;
					break;
				case 70:
					return Global_262145.f_13458 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_STEERING_WHEEL */;
					break;
				case 71:
					return Global_262145.f_12377 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_COLUMN_SHIFT_LEVER */;
					break;
				case 72:
					return Global_262145.f_12378 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLAQUE */;
					break;
				case 73:
					return Global_262145.f_12379 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_ICE */;
					break;
				case 74:
					return Global_262145.f_12380 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_TRUNK */;
					break;
				case 76:
					return Global_262145.f_13459 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_ENGINE_BLOCK */;
					break;
				case 77:
					return Global_262145.f_13460 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_CAM_COVER */;
					break;
				case 78:
					return Global_262145.f_13461 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_STRUT_BRACE */;
					break;
				case 79:
					return Global_262145.f_13464 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_CHASSIS_HEADLIGHT_TRIM */;
					break;
				case 80:
					return Global_262145.f_13462 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_CHASSIS_FOGLIGHTS */;
					break;
				case 81:
					return Global_262145.f_13463 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_CHASSIS_ROOF_SCOOP */;
					break;
				case 82:
					return Global_262145.f_12385 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_TANK */;
					break;
				case 83:
					return Global_262145.f_13465 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_LEFT_DOOR */;
					break;
				case 84:
					return Global_262145.f_12390 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_RIGHT_DOOR */;
					break;
				case 85:
					return Global_262145.f_13466 /* Tunable: CARMODS_SUPERMOD_SLOT_SULTANRS_STOCK_LIVERY */;
					break;
			}
			break;
		case joaat("banshee2"):
			switch (iParam0)
			{
				case 62:
					return Global_262145.f_12369 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLATEHOLDER */;
					break;
				case 63:
					return Global_262145.f_12370 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_VANITY_PLATE */;
					break;
				case 91:
				case 64:
					return Global_262145.f_12371 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_TRIM */;
					break;
				case 66:
					return Global_262145.f_13467 /* Tunable: CARMODS_SUPERMOD_SLOT_BANSHEE2_STOCK_INTERIOR_DASH */;
					break;
				case 90:
				case 67:
					return Global_262145.f_13468 /* Tunable: CARMODS_SUPERMOD_SLOT_BANSHEE2_STOCK_INTERIOR_DIALS */;
					break;
				case 68:
					return Global_262145.f_13469 /* Tunable: CARMODS_SUPERMOD_SLOT_BANSHEE2_STOCK_INTERIOR_DOORS */;
					break;
				case 69:
					return Global_262145.f_13470 /* Tunable: CARMODS_SUPERMOD_SLOT_BANSHEE2_STOCK_SEATS */;
					break;
				case 70:
					return Global_262145.f_13471 /* Tunable: CARMODS_SUPERMOD_SLOT_BANSHEE2_STOCK_STEERING_WHEEL */;
					break;
				case 71:
					return Global_262145.f_12377 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_COLUMN_SHIFT_LEVER */;
					break;
				case 72:
					return Global_262145.f_12378 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLAQUE */;
					break;
				case 73:
					return Global_262145.f_12379 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_ICE */;
					break;
				case 74:
					return Global_262145.f_12380 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_TRUNK */;
					break;
				case 76:
					return Global_262145.f_13472 /* Tunable: CARMODS_SUPERMOD_SLOT_BANSHEE2_STOCK_ENGINE_BLOCK */;
					break;
				case 77:
					return Global_262145.f_12383 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_AIR_FILTER */;
					break;
				case 78:
					return Global_262145.f_13473 /* Tunable: CARMODS_SUPERMOD_SLOT_BANSHEE2_STOCK_STRUT_BRACE */;
					break;
				case 79:
					return Global_262145.f_12388 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_ARCH_COVERS */;
					break;
				case 80:
					return Global_262145.f_12386 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_AERIALS */;
					break;
				case 81:
					return Global_262145.f_12387 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_TRIM */;
					break;
				case 82:
					return Global_262145.f_12385 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_TANK */;
					break;
				case 83:
					return Global_262145.f_12389 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LEFT_DOOR */;
					break;
				case 84:
					return Global_262145.f_12390 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_RIGHT_DOOR */;
					break;
				case 85:
					return Global_262145.f_13474 /* Tunable: CARMODS_SUPERMOD_SLOT_BANSHEE2_STOCK_LIVERY */;
					break;
			}
			break;
		case joaat("btype3"):
			switch (iParam0)
			{
				case 62:
					return Global_262145.f_12369 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLATEHOLDER */;
					break;
				case 63:
					return Global_262145.f_12370 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_VANITY_PLATE */;
					break;
				case 91:
				case 64:
					return Global_262145.f_12371 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_TRIM */;
					break;
				case 66:
					return Global_262145.f_12372 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DASH */;
					break;
				case 90:
				case 67:
					return Global_262145.f_12373 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DIALS */;
					break;
				case 68:
					return Global_262145.f_12374 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DOORS */;
					break;
				case 69:
					return Global_262145.f_12375 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_SEATS */;
					break;
				case 70:
					return Global_262145.f_12376 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_STEERING_WHEEL */;
					break;
				case 71:
					return Global_262145.f_12377 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_COLUMN_SHIFT_LEVER */;
					break;
				case 72:
					return Global_262145.f_12378 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLAQUE */;
					break;
				case 73:
					return Global_262145.f_12379 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_ICE */;
					break;
				case 74:
					return Global_262145.f_12380 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_TRUNK */;
					break;
				case 76:
					return Global_262145.f_12382 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_ENGINE_BAY */;
					break;
				case 77:
					return Global_262145.f_12383 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_AIR_FILTER */;
					break;
				case 78:
					return Global_262145.f_12384 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_FITTINGS */;
					break;
				case 79:
					return Global_262145.f_13475 /* Tunable: CARMODS_SUPERMOD_SLOT_BTYPE3_STOCK_ARCH_COVERS */;
					break;
				case 80:
					return Global_262145.f_13476 /* Tunable: CARMODS_SUPERMOD_SLOT_BTYPE3_STOCK_SIDE_HOOD_GRILL */;
					break;
				case 81:
					return Global_262145.f_13477 /* Tunable: CARMODS_SUPERMOD_SLOT_BTYPE3_STOCK_FRONT_DETAIL */;
					break;
				case 82:
					return Global_262145.f_12385 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_TANK */;
					break;
				case 83:
					return Global_262145.f_13478 /* Tunable: CARMODS_SUPERMOD_SLOT_BTYPE3_STOCK_SPARE_WHEEL */;
					break;
				case 84:
					return Global_262145.f_12390 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_RIGHT_DOOR */;
					break;
				case 85:
					return Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */;
					break;
			}
			break;
		case joaat("virgo2"):
			switch (iParam0)
			{
				case 62:
					return Global_262145.f_12369 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLATEHOLDER */;
					break;
				case 63:
					return Global_262145.f_12370 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_VANITY_PLATE */;
					break;
				case 91:
				case 64:
					return Global_262145.f_12371 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_TRIM */;
					break;
				case 66:
					return Global_262145.f_12372 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DASH */;
					break;
				case 90:
				case 67:
					return Global_262145.f_12373 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DIALS */;
					break;
				case 68:
					return Global_262145.f_12374 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DOORS */;
					break;
				case 69:
					return Global_262145.f_12375 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_SEATS */;
					break;
				case 70:
					return Global_262145.f_12376 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_STEERING_WHEEL */;
					break;
				case 71:
					return Global_262145.f_12377 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_COLUMN_SHIFT_LEVER */;
					break;
				case 72:
					return Global_262145.f_12378 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLAQUE */;
					break;
				case 73:
					return Global_262145.f_12379 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_ICE */;
					break;
				case 74:
					return Global_262145.f_12380 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_TRUNK */;
					break;
				case 76:
					return Global_262145.f_12382 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_ENGINE_BAY */;
					break;
				case 77:
					return Global_262145.f_12383 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_AIR_FILTER */;
					break;
				case 78:
					return Global_262145.f_12384 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_FITTINGS */;
					break;
				case 79:
					return Global_262145.f_12388 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_ARCH_COVERS */;
					break;
				case 80:
					return Global_262145.f_12386 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_AERIALS */;
					break;
				case 81:
					return Global_262145.f_15058 /* Tunable: CAR_MODS_SUPERMOD_SLOT_VIRGO2_STOCK_CHASSIS_WIPERS */;
					break;
				case 82:
					return Global_262145.f_12385 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_TANK */;
					break;
				case 83:
					return Global_262145.f_12389 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LEFT_DOOR */;
					break;
				case 84:
					return Global_262145.f_12390 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_RIGHT_DOOR */;
					break;
				case 85:
					return Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */;
					break;
			}
			break;
		case joaat("slamvan3"):
			switch (iParam0)
			{
				case 62:
					return Global_262145.f_12369 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLATEHOLDER */;
					break;
				case 63:
					return Global_262145.f_12370 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_VANITY_PLATE */;
					break;
				case 91:
				case 64:
					return Global_262145.f_12371 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_TRIM */;
					break;
				case 66:
					return Global_262145.f_12372 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DASH */;
					break;
				case 90:
				case 67:
					return Global_262145.f_12373 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DIALS */;
					break;
				case 68:
					return Global_262145.f_12374 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DOORS */;
					break;
				case 69:
					return Global_262145.f_12375 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_SEATS */;
					break;
				case 70:
					return Global_262145.f_12376 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_STEERING_WHEEL */;
					break;
				case 71:
					return Global_262145.f_12377 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_COLUMN_SHIFT_LEVER */;
					break;
				case 72:
					return Global_262145.f_12378 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLAQUE */;
					break;
				case 73:
					return Global_262145.f_12379 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_ICE */;
					break;
				case 74:
					return Global_262145.f_12380 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_TRUNK */;
					break;
				case 76:
					return Global_262145.f_12382 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_ENGINE_BAY */;
					break;
				case 77:
					return Global_262145.f_12383 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_AIR_FILTER */;
					break;
				case 78:
					return Global_262145.f_12384 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_FITTINGS */;
					break;
				case 79:
					return Global_262145.f_12388 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_ARCH_COVERS */;
					break;
				case 80:
					return Global_262145.f_12386 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_AERIALS */;
					break;
				case 81:
					return Global_262145.f_12387 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_TRIM */;
					break;
				case 82:
					return Global_262145.f_15056 /* Tunable: CAR_MODS_SUPERMOD_SLOT_SLAMVAN3_STOCK_CHASSIS_ROLL_CAGE */;
					break;
				case 83:
					return Global_262145.f_15057 /* Tunable: CAR_MODS_SUPERMOD_SLOT_SLAMVAN3_STOCK_LEFT_DOOR */;
					break;
				case 84:
					return Global_262145.f_12390 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_RIGHT_DOOR */;
					break;
				case 85:
					return Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */;
					break;
			}
			break;
		case joaat("diablous2"):
		case joaat("fcr2"):
		case joaat("fcr"):
		case joaat("diablous"):
			switch (iParam0)
			{
				case 69:
					return Global_262145.f_20141 /* Tunable: 1445507172 */;
					break;
				case 70:
					return Global_262145.f_20142 /* Tunable: -856146197 */;
					break;
				case 71:
					return Global_262145.f_20143 /* Tunable: 1037397158 */;
					break;
				case 72:
					return Global_262145.f_20144 /* Tunable: -1432880770 */;
					break;
				case 73:
					return Global_262145.f_20145 /* Tunable: 1010197085 */;
					break;
				case 74:
					return Global_262145.f_20146 /* Tunable: 816086112 */;
					break;
				case 76:
					return Global_262145.f_20148 /* Tunable: -1154555129 */;
					break;
				case 77:
					return Global_262145.f_20149 /* Tunable: -1410017933 */;
					break;
				case 78:
					return Global_262145.f_20150 /* Tunable: 11244684 */;
					break;
				case 79:
					return Global_262145.f_20154 /* Tunable: -1464553306 */;
					break;
				case 80:
					return Global_262145.f_20152 /* Tunable: 1582483569 */;
					break;
				case 81:
					return Global_262145.f_20153 /* Tunable: -239193808 */;
					break;
				case 82:
					return Global_262145.f_20151 /* Tunable: 1823632455 */;
					break;
				case 83:
					return Global_262145.f_20155 /* Tunable: -1821251827 */;
					break;
				case 84:
					return Global_262145.f_20156 /* Tunable: 370354328 */;
					break;
				case 85:
					return Global_262145.f_20157 /* Tunable: -2108112334 */;
					break;
				case 75:
					return Global_262145.f_20147 /* Tunable: -1027037427 */;
					break;
			}
			break;
		case joaat("italigtb2"):
		case joaat("specter2"):
		case joaat("nero2"):
		case joaat("italigtb"):
		case joaat("specter"):
		case joaat("nero"):
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			switch (iParam0)
			{
				case 62:
					return Global_262145.f_20112 /* Tunable: -684642722 */;
					break;
				case 63:
					return Global_262145.f_20113 /* Tunable: 1925867620 */;
					break;
				case 91:
				case 64:
					return Global_262145.f_20114 /* Tunable: 339608329 */;
					break;
				case 66:
					return Global_262145.f_20115 /* Tunable: -596774436 */;
					break;
				case 90:
				case 67:
					return Global_262145.f_20116 /* Tunable: 1515550924 */;
					break;
				case 68:
					return Global_262145.f_20117 /* Tunable: -1793961142 */;
					break;
				case 69:
					return Global_262145.f_20118 /* Tunable: 1103095492 */;
					break;
				case 70:
					return Global_262145.f_20119 /* Tunable: 1080765076 */;
					break;
				case 71:
					return Global_262145.f_20120 /* Tunable: -1372931791 */;
					break;
				case 72:
					return Global_262145.f_20121 /* Tunable: -1077131506 */;
					break;
				case 73:
					return Global_262145.f_20122 /* Tunable: -1928327745 */;
					break;
				case 74:
					return Global_262145.f_20123 /* Tunable: 484439205 */;
					break;
				case 76:
					return Global_262145.f_20125 /* Tunable: -48548099 */;
					break;
				case 77:
					return Global_262145.f_20126 /* Tunable: 761797683 */;
					break;
				case 78:
					return Global_262145.f_20127 /* Tunable: -1663585280 */;
					break;
				case 79:
					return Global_262145.f_20131 /* Tunable: 1085204362 */;
					break;
				case 80:
					return Global_262145.f_20129 /* Tunable: -229767553 */;
					break;
				case 81:
					return Global_262145.f_20130 /* Tunable: -1543635993 */;
					break;
				case 82:
					return Global_262145.f_20128 /* Tunable: -742153899 */;
					break;
				case 83:
					return Global_262145.f_20132 /* Tunable: -1601135106 */;
					break;
				case 84:
					return Global_262145.f_20133 /* Tunable: -480527199 */;
					break;
				case 85:
					return Global_262145.f_20134 /* Tunable: 402681162 */;
					break;
				case 75:
					return Global_262145.f_20124 /* Tunable: -1958729104 */;
					break;
			}
			break;
		case joaat("comet3"):
		case joaat("elegy"):
		case joaat("comet2"):
		case joaat("elegy2"):
			switch (iParam0)
			{
				case 62:
					return Global_262145.f_20158 /* Tunable: -452660830 */;
					break;
				case 63:
					return Global_262145.f_20159 /* Tunable: -1040254992 */;
					break;
				case 91:
				case 64:
					return Global_262145.f_20160 /* Tunable: 987257936 */;
					break;
				case 66:
					return Global_262145.f_20161 /* Tunable: 1002485689 */;
					break;
				case 90:
				case 67:
					return Global_262145.f_20162 /* Tunable: 805748362 */;
					break;
				case 68:
					return Global_262145.f_20163 /* Tunable: 1847886015 */;
					break;
				case 69:
					return Global_262145.f_20164 /* Tunable: 1494198675 */;
					break;
				case 70:
					return Global_262145.f_20165 /* Tunable: 1782291700 */;
					break;
				case 71:
					return Global_262145.f_20166 /* Tunable: -2106845075 */;
					break;
				case 72:
					return Global_262145.f_20167 /* Tunable: -2110894619 */;
					break;
				case 73:
					return Global_262145.f_20168 /* Tunable: 1336779007 */;
					break;
				case 74:
					return Global_262145.f_20169 /* Tunable: -1613649786 */;
					break;
				case 76:
					return Global_262145.f_20171 /* Tunable: 646141340 */;
					break;
				case 77:
					return Global_262145.f_20172 /* Tunable: 1792860035 */;
					break;
				case 78:
					return Global_262145.f_20173 /* Tunable: 1881595650 */;
					break;
				case 79:
					return Global_262145.f_20177 /* Tunable: 1960776133 */;
					break;
				case 80:
					return Global_262145.f_20175 /* Tunable: 461703080 */;
					break;
				case 81:
					return Global_262145.f_20176 /* Tunable: 660959725 */;
					break;
				case 82:
					return Global_262145.f_20174 /* Tunable: 1925483934 */;
					break;
				case 83:
					return Global_262145.f_20178 /* Tunable: 2078440783 */;
					break;
				case 84:
					return Global_262145.f_20179 /* Tunable: -1773111197 */;
					break;
				case 85:
					return Global_262145.f_20180 /* Tunable: -1107164143 */;
					break;
				case 75:
					return Global_262145.f_20170 /* Tunable: -288665391 */;
					break;
			}
			break;
		default:
			switch (iParam0)
			{
				case 62:
					return (Global_262145.f_12369 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLATEHOLDER */ * iVar1);
					break;
				case 63:
					return (Global_262145.f_12370 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_VANITY_PLATE */ * iVar1);
					break;
				case 91:
				case 64:
					return (Global_262145.f_12371 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_TRIM */ * iVar1);
					break;
				case 66:
					return (Global_262145.f_12372 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DASH */ * iVar1);
					break;
				case 90:
				case 67:
					return (Global_262145.f_12373 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DIALS */ * iVar1);
					break;
				case 68:
					return (Global_262145.f_12374 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_INTERIOR_DOORS */ * iVar1);
					break;
				case 69:
					return (Global_262145.f_12375 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_SEATS */ * iVar1);
					break;
				case 70:
					return (Global_262145.f_12376 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_STEERING_WHEEL */ * iVar1);
					break;
				case 71:
					return (Global_262145.f_12377 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_COLUMN_SHIFT_LEVER */ * iVar1);
					break;
				case 72:
					return (Global_262145.f_12378 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_PLAQUE */ * iVar1);
					break;
				case 73:
					return (Global_262145.f_12379 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_ICE */ * iVar1);
					break;
				case 74:
					return (Global_262145.f_12380 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_TRUNK */ * iVar1);
					break;
				case 76:
					return (Global_262145.f_12382 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_ENGINE_BAY */ * iVar1);
					break;
				case 77:
					return (Global_262145.f_12383 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_AIR_FILTER */ * iVar1);
					break;
				case 78:
					return (Global_262145.f_12384 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_FITTINGS */ * iVar1);
					break;
				case 79:
					return (Global_262145.f_12388 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_ARCH_COVERS */ * iVar1);
					break;
				case 80:
					return (Global_262145.f_12386 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_AERIALS */ * iVar1);
					break;
				case 81:
					return (Global_262145.f_12387 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_TRIM */ * iVar1);
					break;
				case 82:
					return (Global_262145.f_12385 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_CHASSIS_TANK */ * iVar1);
					break;
				case 83:
					return (Global_262145.f_12389 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LEFT_DOOR */ * iVar1);
					break;
				case 84:
					return (Global_262145.f_12390 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_RIGHT_DOOR */ * iVar1);
					break;
				case 85:
					return (Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */ * iVar1);
					break;
			}
			break;
	}
	return 12345;
}

float func_542(int iParam0)//Position - 0x7C1FE
{
	float fVar0;
	fVar0 = 1f;
	if (((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 35) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3416 /* Tunable: CARMOD_UNLOCK_STOCKLEFTFENDER_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3503 /* Tunable: CARMOD_UNLOCK_L_WING_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3504 /* Tunable: CARMOD_UNLOCK_L_WING_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3505 /* Tunable: CARMOD_UNLOCK_L_WING_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3506 /* Tunable: CARMOD_UNLOCK_L_WING_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3279 /* Tunable: CARMOD_UNLOCK_STOCKLEFTFENDER_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3366 /* Tunable: CARMOD_UNLOCK_L_WING_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3367 /* Tunable: CARMOD_UNLOCK_L_WING_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3368 /* Tunable: CARMOD_UNLOCK_L_WING_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3369 /* Tunable: CARMOD_UNLOCK_L_WING_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3142 /* Tunable: CARMOD_UNLOCK_STOCKLEFTFENDER_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3229 /* Tunable: CARMOD_UNLOCK_L_WING_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3230 /* Tunable: CARMOD_UNLOCK_L_WING_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3231 /* Tunable: CARMOD_UNLOCK_L_WING_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3232 /* Tunable: CARMOD_UNLOCK_L_WING_L5_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3553 /* Tunable: CARMOD_UNLOCK_STOCKLEFTFENDER_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3640 /* Tunable: CARMOD_UNLOCK_L_WING_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3641 /* Tunable: CARMOD_UNLOCK_L_WING_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3642 /* Tunable: CARMOD_UNLOCK_L_WING_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3643 /* Tunable: CARMOD_UNLOCK_L_WING_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3005 /* Tunable: CARMOD_UNLOCK_STOCKLEFTFENDER_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3092 /* Tunable: CARMOD_UNLOCK_L_WING_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3093 /* Tunable: CARMOD_UNLOCK_L_WING_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3094 /* Tunable: CARMOD_UNLOCK_L_WING_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3095 /* Tunable: CARMOD_UNLOCK_L_WING_L5_EXPENDITURE_TUNABLE */;
		}
	}
	else if (Global_1585307 == 31)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3579 /* Tunable: CARMOD_UNLOCK_STOCKROOF_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3615 /* Tunable: CARMOD_UNLOCK_ROOF_L1_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	return (fVar0 * Global_295754.f_49);
}

float func_543(int iParam0)//Position - 0x7C4DC
{
	float fVar0;
	fVar0 = 1f;
	if (iParam0 == 0)
	{
		if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3417 /* Tunable: CARMOD_UNLOCK_STOCKRIGHTFENDER_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3280 /* Tunable: CARMOD_UNLOCK_STOCKRIGHTFENDER_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3143 /* Tunable: CARMOD_UNLOCK_STOCKRIGHTFENDER_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3554 /* Tunable: CARMOD_UNLOCK_STOCKRIGHTFENDER_EXPENDITURE_TUNABLE_BIKE */;
		}
		else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
		{
			fVar0 = Global_262145.f_3006 /* Tunable: CARMOD_UNLOCK_STOCKRIGHTFENDER_EXPENDITURE_TUNABLE */;
		}
	}
	else if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		fVar0 = Global_262145.f_3507 /* Tunable: CARMOD_UNLOCK_R_WING_L2_EXPENDITURE_TUNABLE_SPECIAL */;
	}
	else if (Global_1585307 == 1)
	{
		fVar0 = Global_262145.f_3370 /* Tunable: CARMOD_UNLOCK_R_WING_L2_EXPENDITURE_TUNABLE_SPORT */;
	}
	else if (Global_1585307 == 2)
	{
		fVar0 = Global_262145.f_3233 /* Tunable: CARMOD_UNLOCK_R_WING_L2_EXPENDITURE_TUNABLE_SUV */;
	}
	else if (Global_1585307 == 4)
	{
		fVar0 = Global_262145.f_3644 /* Tunable: CARMOD_UNLOCK_R_WING_L2_EXPENDITURE_TUNABLE_BIKE */;
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		fVar0 = Global_262145.f_3096 /* Tunable: CARMOD_UNLOCK_R_WING_L2_EXPENDITURE_TUNABLE */;
	}
	return (fVar0 * Global_295754.f_49);
}

float func_544(int iParam0)//Position - 0x7C7BF
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3451 /* Tunable: CARMOD_UNLOCK_WINDOWSNONE_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3543 /* Tunable: CARMOD_UNLOCK_LIGHT_SMOKE_WINDOWS_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3544 /* Tunable: CARMOD_UNLOCK_DARK_SMOKE_WINDOWS_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3545 /* Tunable: CARMOD_UNLOCK_LIMO_WINDOWS_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3314 /* Tunable: CARMOD_UNLOCK_WINDOWSNONE_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3406 /* Tunable: CARMOD_UNLOCK_LIGHT_SMOKE_WINDOWS_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3407 /* Tunable: CARMOD_UNLOCK_DARK_SMOKE_WINDOWS_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3408 /* Tunable: CARMOD_UNLOCK_LIMO_WINDOWS_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3177 /* Tunable: CARMOD_UNLOCK_WINDOWSNONE_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3269 /* Tunable: CARMOD_UNLOCK_LIGHT_SMOKE_WINDOWS_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3270 /* Tunable: CARMOD_UNLOCK_DARK_SMOKE_WINDOWS_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3271 /* Tunable: CARMOD_UNLOCK_LIMO_WINDOWS_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3588 /* Tunable: CARMOD_UNLOCK_WINDOWSNONE_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3680 /* Tunable: CARMOD_UNLOCK_LIGHT_SMOKE_WINDOWS_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3681 /* Tunable: CARMOD_UNLOCK_DARK_SMOKE_WINDOWS_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3682 /* Tunable: CARMOD_UNLOCK_LIMO_WINDOWS_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3040 /* Tunable: CARMOD_UNLOCK_WINDOWSNONE_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3132 /* Tunable: CARMOD_UNLOCK_LIGHT_SMOKE_WINDOWS_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3133 /* Tunable: CARMOD_UNLOCK_DARK_SMOKE_WINDOWS_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3134 /* Tunable: CARMOD_UNLOCK_LIMO_WINDOWS_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_48);
}

float func_545(int iParam0)//Position - 0x7CA35
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 10)
		{
			fVar0 = Global_262145.f_3410 /* Tunable: CARMOD_UNLOCK_STOCKTIRES_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 11)
		{
			fVar0 = Global_262145.f_3467 /* Tunable: CARMOD_UNLOCK_CUSTOM_TYRES_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if ((iParam0 == 2 || iParam0 == 1) || iParam0 == 0)
		{
			fVar0 = Global_262145.f_3536 /* Tunable: CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 29)
		{
			fVar0 = Global_262145.f_3537 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_WHITE_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 30)
		{
			fVar0 = Global_262145.f_3542 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_BLACK_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 31)
		{
			fVar0 = Global_262145.f_3541 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 32)
		{
			fVar0 = Global_262145.f_3540 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 33)
		{
			fVar0 = Global_262145.f_7089 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_PURPLE_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 34)
		{
			fVar0 = Global_262145.f_3538 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 35)
		{
			fVar0 = Global_262145.f_7090 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_GREEN_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 36)
		{
			fVar0 = Global_262145.f_3539 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 40)
		{
			fVar0 = Global_262145.f_3450 /* Tunable: CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 10)
		{
			fVar0 = Global_262145.f_3273 /* Tunable: CARMOD_UNLOCK_STOCKTIRES_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 11)
		{
			fVar0 = Global_262145.f_3330 /* Tunable: CARMOD_UNLOCK_CUSTOM_TYRES_EXPENDITURE_TUNABLE_SPORT */;
		}
		if ((iParam0 == 2 || iParam0 == 1) || iParam0 == 0)
		{
			fVar0 = Global_262145.f_3399 /* Tunable: CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 29)
		{
			fVar0 = Global_262145.f_3400 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_WHITE_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 30)
		{
			fVar0 = Global_262145.f_3405 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_BLACK_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 31)
		{
			fVar0 = Global_262145.f_3404 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 32)
		{
			fVar0 = Global_262145.f_3403 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 33)
		{
			fVar0 = Global_262145.f_7083 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_PURPLE_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 34)
		{
			fVar0 = Global_262145.f_3401 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 35)
		{
			fVar0 = Global_262145.f_7084 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_GREEN_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 36)
		{
			fVar0 = Global_262145.f_3402 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 40)
		{
			fVar0 = Global_262145.f_3313 /* Tunable: CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 10)
		{
			fVar0 = Global_262145.f_3136 /* Tunable: CARMOD_UNLOCK_STOCKTIRES_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 11)
		{
			fVar0 = Global_262145.f_3193 /* Tunable: CARMOD_UNLOCK_CUSTOM_TYRES_EXPENDITURE_TUNABLE_SUV */;
		}
		if ((iParam0 == 2 || iParam0 == 1) || iParam0 == 0)
		{
			fVar0 = Global_262145.f_3262 /* Tunable: CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 29)
		{
			fVar0 = Global_262145.f_3263 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_WHITE_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 30)
		{
			fVar0 = Global_262145.f_3268 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_BLACK_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 31)
		{
			fVar0 = Global_262145.f_3267 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 32)
		{
			fVar0 = Global_262145.f_3266 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 33)
		{
			fVar0 = Global_262145.f_7087 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_PURPLE_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 34)
		{
			fVar0 = Global_262145.f_3264 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 35)
		{
			fVar0 = Global_262145.f_7088 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_GREEN_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 36)
		{
			fVar0 = Global_262145.f_3265 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 40)
		{
			fVar0 = Global_262145.f_3176 /* Tunable: CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 10)
		{
			fVar0 = Global_262145.f_3547 /* Tunable: CARMOD_UNLOCK_STOCKTIRES_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 11)
		{
			fVar0 = Global_262145.f_3604 /* Tunable: CARMOD_UNLOCK_CUSTOM_TYRES_EXPENDITURE_TUNABLE_BIKE */;
		}
		if ((iParam0 == 2 || iParam0 == 1) || iParam0 == 0)
		{
			fVar0 = Global_262145.f_3673 /* Tunable: CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 29)
		{
			fVar0 = Global_262145.f_3674 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_WHITE_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 30)
		{
			fVar0 = Global_262145.f_3679 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_BLACK_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 31)
		{
			fVar0 = Global_262145.f_3678 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 32)
		{
			fVar0 = Global_262145.f_3677 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 33)
		{
			fVar0 = Global_262145.f_7081 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_PURPLE_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 34)
		{
			fVar0 = Global_262145.f_3675 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 35)
		{
			fVar0 = Global_262145.f_7082 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_GREEN_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 36)
		{
			fVar0 = Global_262145.f_3676 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 40)
		{
			fVar0 = Global_262145.f_3587 /* Tunable: CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 10)
		{
			fVar0 = Global_262145.f_2999 /* Tunable: CARMOD_UNLOCK_STOCKTIRES_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 11)
		{
			fVar0 = Global_262145.f_3056 /* Tunable: CARMOD_UNLOCK_CUSTOM_TYRES_EXPENDITURE_TUNABLE */;
		}
		if ((iParam0 == 2 || iParam0 == 1) || iParam0 == 0)
		{
			fVar0 = Global_262145.f_3125 /* Tunable: CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 29)
		{
			fVar0 = Global_262145.f_3126 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_WHITE_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 30)
		{
			fVar0 = Global_262145.f_3131 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_BLACK_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 31)
		{
			fVar0 = Global_262145.f_3130 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 32)
		{
			fVar0 = Global_262145.f_3129 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 33)
		{
			fVar0 = Global_262145.f_7085 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_PURPLE_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 34)
		{
			fVar0 = Global_262145.f_3127 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 35)
		{
			fVar0 = Global_262145.f_7086 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_GREEN_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 36)
		{
			fVar0 = Global_262145.f_3128 /* Tunable: CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 40)
		{
			fVar0 = Global_262145.f_3039 /* Tunable: CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_47);
}

float func_546(int iParam0)//Position - 0x7CFA3
{
	float fVar0;
	fVar0 = 1f;
	if (iParam0 == 0)
	{
		if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3448 /* Tunable: CARMOD_UNLOCK_NOTURBO_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3311 /* Tunable: CARMOD_UNLOCK_NOTURBO_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3174 /* Tunable: CARMOD_UNLOCK_NOTURBO_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3585 /* Tunable: CARMOD_UNLOCK_NOTURBO_EXPENDITURE_TUNABLE_BIKE */;
		}
		else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
		{
			fVar0 = Global_262145.f_3037 /* Tunable: CARMOD_UNLOCK_NOTURBO_EXPENDITURE_TUNABLE */;
		}
	}
	else if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		fVar0 = Global_262145.f_3535 /* Tunable: CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SPECIAL */;
	}
	else if (Global_1585307 == 1)
	{
		fVar0 = Global_262145.f_3398 /* Tunable: CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SPORT */;
	}
	else if (Global_1585307 == 2)
	{
		fVar0 = Global_262145.f_3261 /* Tunable: CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SUV */;
	}
	else if (Global_1585307 == 4)
	{
		fVar0 = Global_262145.f_3672 /* Tunable: CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_BIKE */;
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		fVar0 = Global_262145.f_3124 /* Tunable: CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE */;
	}
	return fVar0;
}

float func_547(int iParam0)//Position - 0x7D27F
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 35) || Global_1585307 == 34) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3445 /* Tunable: CARMOD_UNLOCK_STOCKSUSPENSION_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3483 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L1_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3484 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3485 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3486 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3308 /* Tunable: CARMOD_UNLOCK_STOCKSUSPENSION_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3346 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L1_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3347 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3348 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3349 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3171 /* Tunable: CARMOD_UNLOCK_STOCKSUSPENSION_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3209 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L1_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3210 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3211 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3212 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L4_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3582 /* Tunable: CARMOD_UNLOCK_STOCKSUSPENSION_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3620 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L1_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3621 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3622 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3623 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3034 /* Tunable: CARMOD_UNLOCK_STOCKSUSPENSION_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3072 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L1_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3073 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3074 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3075 /* Tunable: CARMOD_UNLOCK_SUSPENSION_L4_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_45);
}

float func_548(int iParam0)//Position - 0x7D540
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3443 /* Tunable: CARMOD_UNLOCK_STOCKSKIRT_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3523 /* Tunable: CARMOD_UNLOCK_SKIRTS_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3524 /* Tunable: CARMOD_UNLOCK_SKIRTS_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3525 /* Tunable: CARMOD_UNLOCK_SKIRTS_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3526 /* Tunable: CARMOD_UNLOCK_SKIRTS_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3306 /* Tunable: CARMOD_UNLOCK_STOCKSKIRT_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3386 /* Tunable: CARMOD_UNLOCK_SKIRTS_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3387 /* Tunable: CARMOD_UNLOCK_SKIRTS_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3388 /* Tunable: CARMOD_UNLOCK_SKIRTS_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3389 /* Tunable: CARMOD_UNLOCK_SKIRTS_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3169 /* Tunable: CARMOD_UNLOCK_STOCKSKIRT_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3249 /* Tunable: CARMOD_UNLOCK_SKIRTS_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3250 /* Tunable: CARMOD_UNLOCK_SKIRTS_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3251 /* Tunable: CARMOD_UNLOCK_SKIRTS_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3252 /* Tunable: CARMOD_UNLOCK_SKIRTS_L5_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3580 /* Tunable: CARMOD_UNLOCK_STOCKSKIRT_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3660 /* Tunable: CARMOD_UNLOCK_SKIRTS_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3661 /* Tunable: CARMOD_UNLOCK_SKIRTS_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3662 /* Tunable: CARMOD_UNLOCK_SKIRTS_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3663 /* Tunable: CARMOD_UNLOCK_SKIRTS_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3032 /* Tunable: CARMOD_UNLOCK_STOCKSKIRT_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3112 /* Tunable: CARMOD_UNLOCK_SKIRTS_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3113 /* Tunable: CARMOD_UNLOCK_SKIRTS_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3114 /* Tunable: CARMOD_UNLOCK_SKIRTS_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3115 /* Tunable: CARMOD_UNLOCK_SKIRTS_L5_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_43);
}

float func_549(int iParam0)//Position - 0x7D801
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3444 /* Tunable: CARMOD_UNLOCK_STOCKSPOILER_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3527 /* Tunable: CARMOD_UNLOCK_SPOILER_L1_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3528 /* Tunable: CARMOD_UNLOCK_SPOILER_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3529 /* Tunable: CARMOD_UNLOCK_SPOILER_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3530 /* Tunable: CARMOD_UNLOCK_SPOILER_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3531 /* Tunable: CARMOD_UNLOCK_SPOILER_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3307 /* Tunable: CARMOD_UNLOCK_STOCKSPOILER_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3390 /* Tunable: CARMOD_UNLOCK_SPOILER_L1_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3391 /* Tunable: CARMOD_UNLOCK_SPOILER_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3392 /* Tunable: CARMOD_UNLOCK_SPOILER_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3393 /* Tunable: CARMOD_UNLOCK_SPOILER_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3394 /* Tunable: CARMOD_UNLOCK_SPOILER_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3170 /* Tunable: CARMOD_UNLOCK_STOCKSPOILER_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3253 /* Tunable: CARMOD_UNLOCK_SPOILER_L1_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3254 /* Tunable: CARMOD_UNLOCK_SPOILER_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3255 /* Tunable: CARMOD_UNLOCK_SPOILER_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3256 /* Tunable: CARMOD_UNLOCK_SPOILER_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3257 /* Tunable: CARMOD_UNLOCK_SPOILER_L5_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3581 /* Tunable: CARMOD_UNLOCK_STOCKSPOILER_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3664 /* Tunable: CARMOD_UNLOCK_SPOILER_L1_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3665 /* Tunable: CARMOD_UNLOCK_SPOILER_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3666 /* Tunable: CARMOD_UNLOCK_SPOILER_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3667 /* Tunable: CARMOD_UNLOCK_SPOILER_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3668 /* Tunable: CARMOD_UNLOCK_SPOILER_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3033 /* Tunable: CARMOD_UNLOCK_STOCKSPOILER_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3116 /* Tunable: CARMOD_UNLOCK_SPOILER_L1_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3117 /* Tunable: CARMOD_UNLOCK_SPOILER_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3118 /* Tunable: CARMOD_UNLOCK_SPOILER_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3119 /* Tunable: CARMOD_UNLOCK_SPOILER_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3120 /* Tunable: CARMOD_UNLOCK_SPOILER_L5_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_44);
}

float func_550(int iParam0)//Position - 0x7DB0D
{
	float fVar0;
	fVar0 = 1f;
	if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 31) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3442 /* Tunable: CARMOD_UNLOCK_STOCKROOF_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3478 /* Tunable: CARMOD_UNLOCK_ROOF_L1_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3479 /* Tunable: CARMOD_UNLOCK_ROOF_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3480 /* Tunable: CARMOD_UNLOCK_ROOF_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3481 /* Tunable: CARMOD_UNLOCK_ROOF_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3482 /* Tunable: CARMOD_UNLOCK_ROOF_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3305 /* Tunable: CARMOD_UNLOCK_STOCKROOF_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3341 /* Tunable: CARMOD_UNLOCK_ROOF_L1_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3342 /* Tunable: CARMOD_UNLOCK_ROOF_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3343 /* Tunable: CARMOD_UNLOCK_ROOF_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3344 /* Tunable: CARMOD_UNLOCK_ROOF_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3345 /* Tunable: CARMOD_UNLOCK_ROOF_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3168 /* Tunable: CARMOD_UNLOCK_STOCKROOF_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3204 /* Tunable: CARMOD_UNLOCK_ROOF_L1_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3205 /* Tunable: CARMOD_UNLOCK_ROOF_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3206 /* Tunable: CARMOD_UNLOCK_ROOF_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3207 /* Tunable: CARMOD_UNLOCK_ROOF_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3208 /* Tunable: CARMOD_UNLOCK_ROOF_L5_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3579 /* Tunable: CARMOD_UNLOCK_STOCKROOF_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3615 /* Tunable: CARMOD_UNLOCK_ROOF_L1_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3616 /* Tunable: CARMOD_UNLOCK_ROOF_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3617 /* Tunable: CARMOD_UNLOCK_ROOF_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3618 /* Tunable: CARMOD_UNLOCK_ROOF_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3619 /* Tunable: CARMOD_UNLOCK_ROOF_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3031 /* Tunable: CARMOD_UNLOCK_STOCKROOF_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3067 /* Tunable: CARMOD_UNLOCK_ROOF_L1_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3068 /* Tunable: CARMOD_UNLOCK_ROOF_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3069 /* Tunable: CARMOD_UNLOCK_ROOF_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3070 /* Tunable: CARMOD_UNLOCK_ROOF_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3071 /* Tunable: CARMOD_UNLOCK_ROOF_L5_EXPENDITURE_TUNABLE */;
		}
	}
	else if (Global_1585307 == 29)
	{
	}
	else if (Global_1585307 == 30)
	{
	}
	else if (Global_1585307 == 32)
	{
	}
	return (fVar0 * Global_295754.f_42);
}

float func_551(int iParam0)//Position - 0x7DE16
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3422 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE1_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3423 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3424 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3425 /* Tunable: CARMOD_UNLOCK_PLATESYELLOWONBLUE_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3426 /* Tunable: CARMOD_UNLOCK_PLATESYELLOWONBLACK_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3285 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE1_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3286 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3287 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3288 /* Tunable: CARMOD_UNLOCK_PLATESYELLOWONBLUE_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3289 /* Tunable: CARMOD_UNLOCK_PLATESYELLOWONBLACK_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3148 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE1_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3149 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3150 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3151 /* Tunable: CARMOD_UNLOCK_PLATESYELLOWONBLUE_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3152 /* Tunable: CARMOD_UNLOCK_PLATESYELLOWONBLACK_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3559 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE1_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3560 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3561 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3562 /* Tunable: CARMOD_UNLOCK_PLATESYELLOWONBLUE_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3563 /* Tunable: CARMOD_UNLOCK_PLATESYELLOWONBLACK_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3011 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE1_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3012 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3013 /* Tunable: CARMOD_UNLOCK_PLATESBLUEONWHITE3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3014 /* Tunable: CARMOD_UNLOCK_PLATESYELLOWONBLUE_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3015 /* Tunable: CARMOD_UNLOCK_PLATESYELLOWONBLACK_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_41);
}

float func_552(int iParam0)//Position - 0x7E0D7
{
	float fVar0;
	fVar0 = 1f;
	if (iParam0 == 0)
	{
		if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3421 /* Tunable: CARMOD_UNLOCK_STOCKLIGHTS_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3284 /* Tunable: CARMOD_UNLOCK_STOCKLIGHTS_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3147 /* Tunable: CARMOD_UNLOCK_STOCKLIGHTS_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3558 /* Tunable: CARMOD_UNLOCK_STOCKLIGHTS_EXPENDITURE_TUNABLE_BIKE */;
		}
		else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
		{
			fVar0 = Global_262145.f_3010 /* Tunable: CARMOD_UNLOCK_STOCKLIGHTS_EXPENDITURE_TUNABLE */;
		}
	}
	else if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		fVar0 = Global_262145.f_3522 /* Tunable: CARMOD_UNLOCK_XENON_LIGHTS_EXPENDITURE_TUNABLE_SPECIAL */;
	}
	else if (Global_1585307 == 1)
	{
		fVar0 = Global_262145.f_3385 /* Tunable: CARMOD_UNLOCK_XENON_LIGHTS_EXPENDITURE_TUNABLE_SPORT */;
	}
	else if (Global_1585307 == 2)
	{
		fVar0 = Global_262145.f_3248 /* Tunable: CARMOD_UNLOCK_XENON_LIGHTS_EXPENDITURE_TUNABLE_SUV */;
	}
	else if (Global_1585307 == 4)
	{
		fVar0 = Global_262145.f_3659 /* Tunable: CARMOD_UNLOCK_XENON_LIGHTS_EXPENDITURE_TUNABLE_BIKE */;
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		fVar0 = Global_262145.f_3111 /* Tunable: CARMOD_UNLOCK_XENON_LIGHTS_EXPENDITURE_TUNABLE */;
	}
	return (fVar0 * Global_295754.f_40);
}

float func_553(int iParam0)//Position - 0x7E3BA
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3420 /* Tunable: CARMOD_UNLOCK_STOCKHORN_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 44)
		{
			fVar0 = Global_262145.f_3514 /* Tunable: CARMOD_UNLOCK_HORN_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 45)
		{
			fVar0 = Global_262145.f_3515 /* Tunable: CARMOD_UNLOCK_HORN_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 46)
		{
			fVar0 = Global_262145.f_3516 /* Tunable: CARMOD_UNLOCK_HORN_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 47)
		{
			fVar0 = Global_262145.f_3517 /* Tunable: CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 48)
		{
			fVar0 = Global_262145.f_3518 /* Tunable: CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 49)
		{
			fVar0 = Global_262145.f_3519 /* Tunable: CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 50)
		{
			fVar0 = Global_262145.f_3520 /* Tunable: CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 51)
		{
			fVar0 = Global_262145.f_3521 /* Tunable: CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3283 /* Tunable: CARMOD_UNLOCK_STOCKHORN_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 44)
		{
			fVar0 = Global_262145.f_3377 /* Tunable: CARMOD_UNLOCK_HORN_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 45)
		{
			fVar0 = Global_262145.f_3378 /* Tunable: CARMOD_UNLOCK_HORN_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 46)
		{
			fVar0 = Global_262145.f_3379 /* Tunable: CARMOD_UNLOCK_HORN_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 47)
		{
			fVar0 = Global_262145.f_3380 /* Tunable: CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 48)
		{
			fVar0 = Global_262145.f_3381 /* Tunable: CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 49)
		{
			fVar0 = Global_262145.f_3382 /* Tunable: CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 50)
		{
			fVar0 = Global_262145.f_3383 /* Tunable: CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 51)
		{
			fVar0 = Global_262145.f_3384 /* Tunable: CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3146 /* Tunable: CARMOD_UNLOCK_STOCKHORN_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 44)
		{
			fVar0 = Global_262145.f_3240 /* Tunable: CARMOD_UNLOCK_HORN_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 45)
		{
			fVar0 = Global_262145.f_3241 /* Tunable: CARMOD_UNLOCK_HORN_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 46)
		{
			fVar0 = Global_262145.f_3242 /* Tunable: CARMOD_UNLOCK_HORN_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 47)
		{
			fVar0 = Global_262145.f_3243 /* Tunable: CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 48)
		{
			fVar0 = Global_262145.f_3244 /* Tunable: CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 49)
		{
			fVar0 = Global_262145.f_3245 /* Tunable: CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 50)
		{
			fVar0 = Global_262145.f_3246 /* Tunable: CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 51)
		{
			fVar0 = Global_262145.f_3247 /* Tunable: CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3557 /* Tunable: CARMOD_UNLOCK_STOCKHORN_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 44)
		{
			fVar0 = Global_262145.f_3651 /* Tunable: CARMOD_UNLOCK_HORN_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 45)
		{
			fVar0 = Global_262145.f_3652 /* Tunable: CARMOD_UNLOCK_HORN_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 46)
		{
			fVar0 = Global_262145.f_3653 /* Tunable: CARMOD_UNLOCK_HORN_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 47)
		{
			fVar0 = Global_262145.f_3654 /* Tunable: CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 48)
		{
			fVar0 = Global_262145.f_3655 /* Tunable: CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 49)
		{
			fVar0 = Global_262145.f_3656 /* Tunable: CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 50)
		{
			fVar0 = Global_262145.f_3657 /* Tunable: CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 51)
		{
			fVar0 = Global_262145.f_3658 /* Tunable: CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3009 /* Tunable: CARMOD_UNLOCK_STOCKHORN_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 44)
		{
			fVar0 = Global_262145.f_3103 /* Tunable: CARMOD_UNLOCK_HORN_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 45)
		{
			fVar0 = Global_262145.f_3104 /* Tunable: CARMOD_UNLOCK_HORN_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 46)
		{
			fVar0 = Global_262145.f_3105 /* Tunable: CARMOD_UNLOCK_HORN_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 47)
		{
			fVar0 = Global_262145.f_3106 /* Tunable: CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 48)
		{
			fVar0 = Global_262145.f_3107 /* Tunable: CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 49)
		{
			fVar0 = Global_262145.f_3108 /* Tunable: CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 50)
		{
			fVar0 = Global_262145.f_3109 /* Tunable: CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 51)
		{
			fVar0 = Global_262145.f_3110 /* Tunable: CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_38);
}

float func_554(int iParam0)//Position - 0x7E7CF
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3418 /* Tunable: CARMOD_UNLOCK_STOCKGRILLE_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3473 /* Tunable: CARMOD_UNLOCK_GRILL_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3474 /* Tunable: CARMOD_UNLOCK_GRILL_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3475 /* Tunable: CARMOD_UNLOCK_GRILL_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3476 /* Tunable: CARMOD_UNLOCK_GRILL_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3477 /* Tunable: CARMOD_UNLOCK_GRILL_L6_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3281 /* Tunable: CARMOD_UNLOCK_STOCKGRILLE_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3336 /* Tunable: CARMOD_UNLOCK_GRILL_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3337 /* Tunable: CARMOD_UNLOCK_GRILL_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3338 /* Tunable: CARMOD_UNLOCK_GRILL_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3339 /* Tunable: CARMOD_UNLOCK_GRILL_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3340 /* Tunable: CARMOD_UNLOCK_GRILL_L6_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3144 /* Tunable: CARMOD_UNLOCK_STOCKGRILLE_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3199 /* Tunable: CARMOD_UNLOCK_GRILL_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3200 /* Tunable: CARMOD_UNLOCK_GRILL_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3201 /* Tunable: CARMOD_UNLOCK_GRILL_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3202 /* Tunable: CARMOD_UNLOCK_GRILL_L5_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3203 /* Tunable: CARMOD_UNLOCK_GRILL_L6_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3555 /* Tunable: CARMOD_UNLOCK_STOCKGRILLE_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3610 /* Tunable: CARMOD_UNLOCK_GRILL_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3611 /* Tunable: CARMOD_UNLOCK_GRILL_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3612 /* Tunable: CARMOD_UNLOCK_GRILL_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3613 /* Tunable: CARMOD_UNLOCK_GRILL_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3614 /* Tunable: CARMOD_UNLOCK_GRILL_L6_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3007 /* Tunable: CARMOD_UNLOCK_STOCKGRILLE_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3062 /* Tunable: CARMOD_UNLOCK_GRILL_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3063 /* Tunable: CARMOD_UNLOCK_GRILL_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3064 /* Tunable: CARMOD_UNLOCK_GRILL_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3065 /* Tunable: CARMOD_UNLOCK_GRILL_L5_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3066 /* Tunable: CARMOD_UNLOCK_GRILL_L6_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_36);
}

float func_555(int iParam0)//Position - 0x7EADB
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3447 /* Tunable: CARMOD_UNLOCK_STOCKTRANSMISSION_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3532 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3533 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3534 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3310 /* Tunable: CARMOD_UNLOCK_STOCKTRANSMISSION_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3395 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3396 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3397 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3173 /* Tunable: CARMOD_UNLOCK_STOCKTRANSMISSION_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3258 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3259 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3260 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3584 /* Tunable: CARMOD_UNLOCK_STOCKTRANSMISSION_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3669 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3670 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3671 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3036 /* Tunable: CARMOD_UNLOCK_STOCKTRANSMISSION_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3121 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3122 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3123 /* Tunable: CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_32);
}

float func_556(int iParam0)//Position - 0x7ED51
{
	float fVar0;
	fVar0 = 1f;
	if (iParam0 == 0)
	{
		fVar0 = Global_262145.f_3091 /* Tunable: CARMOD_UNLOCK_IGNITION_BOMB_EXPENDITURE_TUNABLE */;
		if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3502 /* Tunable: CARMOD_UNLOCK_IGNITION_BOMB_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3365 /* Tunable: CARMOD_UNLOCK_IGNITION_BOMB_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3228 /* Tunable: CARMOD_UNLOCK_IGNITION_BOMB_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3639 /* Tunable: CARMOD_UNLOCK_IGNITION_BOMB_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else
	{
		fVar0 = Global_262145.f_3090 /* Tunable: CARMOD_UNLOCK_TIMED_BOMB_EXPENDITURE_TUNABLE */;
		if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3501 /* Tunable: CARMOD_UNLOCK_TIMED_BOMB_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3364 /* Tunable: CARMOD_UNLOCK_TIMED_BOMB_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3227 /* Tunable: CARMOD_UNLOCK_TIMED_BOMB_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3638 /* Tunable: CARMOD_UNLOCK_TIMED_BOMB_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	return (fVar0 * Global_295754.f_34);
}

float func_557(int iParam0)//Position - 0x7EFB8
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3415 /* Tunable: CARMOD_UNLOCK_STOCKEXHAUST_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3468 /* Tunable: CARMOD_UNLOCK_EXHAUST_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3469 /* Tunable: CARMOD_UNLOCK_EXHAUST_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3470 /* Tunable: CARMOD_UNLOCK_EXHAUST_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3471 /* Tunable: CARMOD_UNLOCK_EXHAUST_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3472 /* Tunable: CARMOD_UNLOCK_EXHAUST_L6_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3278 /* Tunable: CARMOD_UNLOCK_STOCKEXHAUST_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3331 /* Tunable: CARMOD_UNLOCK_EXHAUST_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3332 /* Tunable: CARMOD_UNLOCK_EXHAUST_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3333 /* Tunable: CARMOD_UNLOCK_EXHAUST_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3334 /* Tunable: CARMOD_UNLOCK_EXHAUST_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3335 /* Tunable: CARMOD_UNLOCK_EXHAUST_L6_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3141 /* Tunable: CARMOD_UNLOCK_STOCKEXHAUST_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3194 /* Tunable: CARMOD_UNLOCK_EXHAUST_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3195 /* Tunable: CARMOD_UNLOCK_EXHAUST_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3196 /* Tunable: CARMOD_UNLOCK_EXHAUST_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3197 /* Tunable: CARMOD_UNLOCK_EXHAUST_L5_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3198 /* Tunable: CARMOD_UNLOCK_EXHAUST_L6_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3552 /* Tunable: CARMOD_UNLOCK_STOCKEXHAUST_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3605 /* Tunable: CARMOD_UNLOCK_EXHAUST_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3606 /* Tunable: CARMOD_UNLOCK_EXHAUST_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3607 /* Tunable: CARMOD_UNLOCK_EXHAUST_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3608 /* Tunable: CARMOD_UNLOCK_EXHAUST_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3609 /* Tunable: CARMOD_UNLOCK_EXHAUST_L6_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3004 /* Tunable: CARMOD_UNLOCK_STOCKEXHAUST_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3057 /* Tunable: CARMOD_UNLOCK_EXHAUST_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3058 /* Tunable: CARMOD_UNLOCK_EXHAUST_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3059 /* Tunable: CARMOD_UNLOCK_EXHAUST_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3060 /* Tunable: CARMOD_UNLOCK_EXHAUST_L5_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3061 /* Tunable: CARMOD_UNLOCK_EXHAUST_L6_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_33);
}

float func_558(int iParam0)//Position - 0x7F2C4
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3497 /* Tunable: CARMOD_UNLOCK_ENGINE_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3498 /* Tunable: CARMOD_UNLOCK_ENGINE_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3499 /* Tunable: CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3500 /* Tunable: CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3360 /* Tunable: CARMOD_UNLOCK_ENGINE_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3361 /* Tunable: CARMOD_UNLOCK_ENGINE_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3362 /* Tunable: CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3363 /* Tunable: CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3223 /* Tunable: CARMOD_UNLOCK_ENGINE_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3224 /* Tunable: CARMOD_UNLOCK_ENGINE_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3225 /* Tunable: CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3226 /* Tunable: CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3634 /* Tunable: CARMOD_UNLOCK_ENGINE_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3635 /* Tunable: CARMOD_UNLOCK_ENGINE_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3636 /* Tunable: CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3637 /* Tunable: CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3086 /* Tunable: CARMOD_UNLOCK_ENGINE_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3087 /* Tunable: CARMOD_UNLOCK_ENGINE_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3088 /* Tunable: CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3089 /* Tunable: CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_32);
}

float func_559(int iParam0)//Position - 0x7F53A
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3414 /* Tunable: CARMOD_UNLOCK_STOCKCHASSIS_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3493 /* Tunable: CARMOD_UNLOCK_CHASSIS_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3494 /* Tunable: CARMOD_UNLOCK_CHASSIS_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3495 /* Tunable: CARMOD_UNLOCK_CHASSIS_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3496 /* Tunable: CARMOD_UNLOCK_CHASSIS_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3277 /* Tunable: CARMOD_UNLOCK_STOCKCHASSIS_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3356 /* Tunable: CARMOD_UNLOCK_CHASSIS_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3357 /* Tunable: CARMOD_UNLOCK_CHASSIS_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3358 /* Tunable: CARMOD_UNLOCK_CHASSIS_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3359 /* Tunable: CARMOD_UNLOCK_CHASSIS_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3140 /* Tunable: CARMOD_UNLOCK_STOCKCHASSIS_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3219 /* Tunable: CARMOD_UNLOCK_CHASSIS_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3220 /* Tunable: CARMOD_UNLOCK_CHASSIS_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3221 /* Tunable: CARMOD_UNLOCK_CHASSIS_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3222 /* Tunable: CARMOD_UNLOCK_CHASSIS_L5_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3551 /* Tunable: CARMOD_UNLOCK_STOCKCHASSIS_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3630 /* Tunable: CARMOD_UNLOCK_CHASSIS_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3631 /* Tunable: CARMOD_UNLOCK_CHASSIS_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3632 /* Tunable: CARMOD_UNLOCK_CHASSIS_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3633 /* Tunable: CARMOD_UNLOCK_CHASSIS_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3003 /* Tunable: CARMOD_UNLOCK_STOCKCHASSIS_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3082 /* Tunable: CARMOD_UNLOCK_CHASSIS_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3083 /* Tunable: CARMOD_UNLOCK_CHASSIS_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3084 /* Tunable: CARMOD_UNLOCK_CHASSIS_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3085 /* Tunable: CARMOD_UNLOCK_CHASSIS_L5_EXPENDITURE_TUNABLE */;
		}
	}
	return fVar0;
}

float func_560(int iParam0)//Position - 0x7F7F4
{
	float fVar0;
	fVar0 = 1f;
	if (((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3413 /* Tunable: CARMOD_UNLOCK_STOCKREARBUMPER_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3489 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3490 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3491 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3492 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3276 /* Tunable: CARMOD_UNLOCK_STOCKREARBUMPER_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3352 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3353 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3354 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3355 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3139 /* Tunable: CARMOD_UNLOCK_STOCKREARBUMPER_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3215 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3216 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3217 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3218 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L5_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3550 /* Tunable: CARMOD_UNLOCK_STOCKREARBUMPER_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3626 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3627 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3628 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3629 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3002 /* Tunable: CARMOD_UNLOCK_STOCKREARBUMPER_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3078 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3079 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3080 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 4)
		{
			fVar0 = Global_262145.f_3081 /* Tunable: CARMOD_UNLOCK_R_BUMPER_L5_EXPENDITURE_TUNABLE */;
		}
	}
	else if (Global_1585307 == 30)
	{
	}
	return fVar0;
}

float func_561(int iParam0)//Position - 0x7FAAD
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3419 /* Tunable: CARMOD_UNLOCK_STOCKHOOD_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3508 /* Tunable: CARMOD_UNLOCK_BONNET_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3509 /* Tunable: CARMOD_UNLOCK_BONNET_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3510 /* Tunable: CARMOD_UNLOCK_BONNET_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3511 /* Tunable: CARMOD_UNLOCK_BONNET_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 5)
		{
			fVar0 = Global_262145.f_3512 /* Tunable: CARMOD_UNLOCK_BONNET_L6_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 6)
		{
			fVar0 = Global_262145.f_3513 /* Tunable: CARMOD_UNLOCK_BONNET_L7_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3282 /* Tunable: CARMOD_UNLOCK_STOCKHOOD_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3371 /* Tunable: CARMOD_UNLOCK_BONNET_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3372 /* Tunable: CARMOD_UNLOCK_BONNET_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3373 /* Tunable: CARMOD_UNLOCK_BONNET_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3374 /* Tunable: CARMOD_UNLOCK_BONNET_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 5)
		{
			fVar0 = Global_262145.f_3375 /* Tunable: CARMOD_UNLOCK_BONNET_L6_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 6)
		{
			fVar0 = Global_262145.f_3376 /* Tunable: CARMOD_UNLOCK_BONNET_L7_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3145 /* Tunable: CARMOD_UNLOCK_STOCKHOOD_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3234 /* Tunable: CARMOD_UNLOCK_BONNET_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3235 /* Tunable: CARMOD_UNLOCK_BONNET_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3236 /* Tunable: CARMOD_UNLOCK_BONNET_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3237 /* Tunable: CARMOD_UNLOCK_BONNET_L5_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 5)
		{
			fVar0 = Global_262145.f_3238 /* Tunable: CARMOD_UNLOCK_BONNET_L6_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 6)
		{
			fVar0 = Global_262145.f_3239 /* Tunable: CARMOD_UNLOCK_BONNET_L7_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3556 /* Tunable: CARMOD_UNLOCK_STOCKHOOD_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3645 /* Tunable: CARMOD_UNLOCK_BONNET_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3646 /* Tunable: CARMOD_UNLOCK_BONNET_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3647 /* Tunable: CARMOD_UNLOCK_BONNET_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3648 /* Tunable: CARMOD_UNLOCK_BONNET_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 5)
		{
			fVar0 = Global_262145.f_3649 /* Tunable: CARMOD_UNLOCK_BONNET_L6_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 6)
		{
			fVar0 = Global_262145.f_3650 /* Tunable: CARMOD_UNLOCK_BONNET_L7_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3008 /* Tunable: CARMOD_UNLOCK_STOCKHOOD_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3097 /* Tunable: CARMOD_UNLOCK_BONNET_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3098 /* Tunable: CARMOD_UNLOCK_BONNET_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3099 /* Tunable: CARMOD_UNLOCK_BONNET_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3100 /* Tunable: CARMOD_UNLOCK_BONNET_L5_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 5)
		{
			fVar0 = Global_262145.f_3101 /* Tunable: CARMOD_UNLOCK_BONNET_L6_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 6)
		{
			fVar0 = Global_262145.f_3102 /* Tunable: CARMOD_UNLOCK_BONNET_L7_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_37);
}

float func_562()//Position - 0x7FE04
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		fVar0 = Global_262145.f_3446 /* Tunable: CARMOD_UNLOCK_TRACKER_EXPENDITURE_TUNABLE_SPECIAL */;
	}
	else if (Global_1585307 == 1)
	{
		fVar0 = Global_262145.f_3309 /* Tunable: CARMOD_UNLOCK_TRACKER_EXPENDITURE_TUNABLE_SPORT */;
	}
	else if (Global_1585307 == 2)
	{
		fVar0 = Global_262145.f_3172 /* Tunable: CARMOD_UNLOCK_TRACKER_EXPENDITURE_TUNABLE_SUV */;
	}
	else if (Global_1585307 == 4)
	{
		fVar0 = Global_262145.f_3583 /* Tunable: CARMOD_UNLOCK_TRACKER_EXPENDITURE_TUNABLE_BIKE */;
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		fVar0 = Global_262145.f_3035 /* Tunable: CARMOD_UNLOCK_TRACKER_EXPENDITURE_TUNABLE */;
	}
	return (fVar0 * Global_295754.f_39);
}

float func_563(int iParam0)//Position - 0x7FF7B
{
	float fVar0;
	fVar0 = 1f;
	if (((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3412 /* Tunable: CARMOD_UNLOCK_STOCKFRONTBUMPER_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3461 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3462 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3463 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3464 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L5_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 5)
		{
			fVar0 = Global_262145.f_3465 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L6_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 6)
		{
			fVar0 = Global_262145.f_3466 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L7_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3275 /* Tunable: CARMOD_UNLOCK_STOCKFRONTBUMPER_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3324 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3325 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3326 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3327 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L5_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 5)
		{
			fVar0 = Global_262145.f_3328 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L6_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 6)
		{
			fVar0 = Global_262145.f_3329 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L7_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3138 /* Tunable: CARMOD_UNLOCK_STOCKFRONTBUMPER_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3187 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3188 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3189 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L4_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3190 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L5_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 5)
		{
			fVar0 = Global_262145.f_3191 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L6_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 6)
		{
			fVar0 = Global_262145.f_3192 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L7_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3549 /* Tunable: CARMOD_UNLOCK_STOCKFRONTBUMPER_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3598 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3599 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3600 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3601 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L5_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 5)
		{
			fVar0 = Global_262145.f_3602 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L6_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 6)
		{
			fVar0 = Global_262145.f_3603 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L7_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3001 /* Tunable: CARMOD_UNLOCK_STOCKFRONTBUMPER_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3050 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3051 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3052 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L4_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3053 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L5_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 5)
		{
			fVar0 = Global_262145.f_3054 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L6_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 6)
		{
			fVar0 = Global_262145.f_3055 /* Tunable: CARMOD_UNLOCK_F_BUMPER_L7_EXPENDITURE_TUNABLE */;
		}
	}
	else if (Global_1585307 == 30)
	{
	}
	return fVar0;
}

float func_564(int iParam0)//Position - 0x802CC
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3460 /* Tunable: CARMOD_UNLOCK_STOCK_BRAKES_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3452 /* Tunable: CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3453 /* Tunable: CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3454 /* Tunable: CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3323 /* Tunable: CARMOD_UNLOCK_STOCK_BRAKES_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3315 /* Tunable: CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3316 /* Tunable: CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3317 /* Tunable: CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3186 /* Tunable: CARMOD_UNLOCK_STOCK_BRAKES_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3178 /* Tunable: CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3179 /* Tunable: CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3180 /* Tunable: CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3597 /* Tunable: CARMOD_UNLOCK_STOCK_BRAKES_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3589 /* Tunable: CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3590 /* Tunable: CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3591 /* Tunable: CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3049 /* Tunable: CARMOD_UNLOCK_STOCK_BRAKES_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3041 /* Tunable: CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3042 /* Tunable: CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 3)
		{
			fVar0 = Global_262145.f_3043 /* Tunable: CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE */;
		}
	}
	return (fVar0 * Global_295754.f_30);
}

float func_565(int iParam0)//Position - 0x80542
{
	float fVar0;
	fVar0 = 1f;
	if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3411 /* Tunable: CARMOD_UNLOCK_NOARMOUR_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3455 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_20_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3456 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3457 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3458 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3459 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SPECIAL */;
		}
	}
	else if (Global_1585307 == 2)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3137 /* Tunable: CARMOD_UNLOCK_NOARMOUR_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3181 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_20_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3182 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3183 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3184 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SUV */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3185 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SUV */;
		}
	}
	else if (Global_1585307 == 1)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3274 /* Tunable: CARMOD_UNLOCK_NOARMOUR_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3318 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_20_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3319 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3320 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3321 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SPORT */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3322 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SPORT */;
		}
	}
	else if (Global_1585307 == 4)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3548 /* Tunable: CARMOD_UNLOCK_NOARMOUR_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3592 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_20_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3593 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3594 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3595 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_BIKE */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3596 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_BIKE */;
		}
	}
	else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
	{
		if (iParam0 == 0)
		{
			fVar0 = Global_262145.f_3000 /* Tunable: CARMOD_UNLOCK_NOARMOUR_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 1)
		{
			fVar0 = Global_262145.f_3044 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_20_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 2)
		{
			fVar0 = Global_262145.f_3045 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 3)
		{
			fVar0 = Global_262145.f_3046 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 == 4)
		{
			fVar0 = Global_262145.f_3047 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE */;
		}
		if (iParam0 >= 5)
		{
			fVar0 = Global_262145.f_3048 /* Tunable: CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE */;
		}
	}
	return fVar0;
}

int func_566(int iParam0)//Position - 0x8088D
{
	switch (iParam0)
	{
		case joaat("brioso"):
		case joaat("sentinel"):
		case joaat("hakuchou2"):
		case joaat("turismo2"):
		case joaat("deveste"):
		case joaat("banshee"):
		case joaat("vigero2"):
		case joaat("feltzer3"):
			return 1;
		default:
	}
	return 0;
}

int func_567(var uParam0)//Position - 0x8D84B
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 739;
				break;
			case 1:
				return 740;
				break;
		}
	}
	return 13122;
}

int func_568()//Position - 0x8F270
{
	if (!__LIB_0__::func_113(joaat("terbyte")))
	{
		return 0;
	}
	return 1;
}

int func_569(int iParam0)//Position - 0x8F354
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_4019 /* Tunable: ADDER_EXPENDITURE_MODIFIER */;
		case 82:
			return Global_262145.f_4020 /* Tunable: AIRBUS_EXPENDITURE_MODIFIER */;
		case 63:
			return Global_262145.f_4021 /* Tunable: AKUMA_EXPENDITURE_MODIFIER */;
		case 78:
			return Global_262145.f_4022 /* Tunable: ANNIHILATOR_EXPENDITURE_MODIFIER */;
		case 57:
			return Global_262145.f_4023 /* Tunable: BALLER2_EXPENDITURE_MODIFIER */;
		case 22:
			return Global_262145.f_4024 /* Tunable: BARRACKS_EXPENDITURE_MODIFIER */;
		case 62:
			return Global_262145.f_4025 /* Tunable: BATI_EXPENDITURE_MODIFIER */;
		case 94:
			return Global_262145.f_4026 /* Tunable: BATI2_EXPENDITURE_MODIFIER */;
		case 51:
			return Global_262145.f_4027 /* Tunable: BFINJECTION_EXPENDITURE_MODIFIER */;
		case 89:
			return Global_262145.f_4028 /* Tunable: BISON_EXPENDITURE_MODIFIER */;
		case 66:
			return Global_262145.f_4029 /* Tunable: BLAZER_EXPENDITURE_MODIFIER */;
		case 33:
			return Global_262145.f_4030 /* Tunable: BMX_EXPENDITURE_MODIFIER */;
		case 70:
			return Global_262145.f_4031 /* Tunable: BULLET_EXPENDITURE_MODIFIER */;
		case 83:
			return Global_262145.f_4032 /* Tunable: BUS_EXPENDITURE_MODIFIER */;
		case 20:
			return Global_262145.f_4033 /* Tunable: BUZZARD_EXPENDITURE_MODIFIER */;
		case 71:
			return Global_262145.f_4034 /* Tunable: CARBONIZZARE_EXPENDITURE_MODIFIER */;
		case 19:
			return -1;
		case 58:
			return Global_262145.f_4036 /* Tunable: CAVALCADE_EXPENDITURE_MODIFIER */;
		case 3:
			return Global_262145.f_4037 /* Tunable: CHEETAH_EXPENDITURE_MODIFIER */;
		case 84:
			return Global_262145.f_4038 /* Tunable: COACH_EXPENDITURE_MODIFIER */;
		case 7:
			return Global_262145.f_4039 /* Tunable: COGCABRIO_EXPENDITURE_MODIFIER */;
		case 48:
			return Global_262145.f_4040 /* Tunable: COMET2_EXPENDITURE_MODIFIER */;
		case 72:
			return Global_262145.f_4041 /* Tunable: COQUETTE_EXPENDITURE_MODIFIER */;
		case 38:
			return Global_262145.f_4042 /* Tunable: CRUISER_EXPENDITURE_MODIFIER */;
		case 21:
			return Global_262145.f_4043 /* Tunable: CRUSADER_EXPENDITURE_MODIFIER */;
		case 12:
			return Global_262145.f_4044 /* Tunable: CUBAN800_EXPENDITURE_MODIFIER */;
		case 54:
			return Global_262145.f_4045 /* Tunable: DILETTANTE_EXPENDITURE_MODIFIER */;
		case 90:
			return Global_262145.f_4046 /* Tunable: DOUBLE_EXPENDITURE_MODIFIER */;
		case 81:
			return Global_262145.f_4047 /* Tunable: DUMP_EXPENDITURE_MODIFIER */;
		case 13:
			return Global_262145.f_4048 /* Tunable: DUSTER_EXPENDITURE_MODIFIER */;
		case 4:
			return Global_262145.f_4050 /* Tunable: ENTITYXF_EXPENDITURE_MODIFIER */;
		case 56:
			return Global_262145.f_4051 /* Tunable: EXEMPLAR_EXPENDITURE_MODIFIER */;
		case 69:
			return Global_262145.f_4052 /* Tunable: FAGGIO2_EXPENDITURE_MODIFIER */;
		case 60:
			return Global_262145.f_4053 /* Tunable: FELON_EXPENDITURE_MODIFIER */;
		case 91:
			return Global_262145.f_4110 /* Tunable: FELON2_EXPENDITURE_MODIFIER */;
		case 50:
			return Global_262145.f_4054 /* Tunable: FELTZER2_EXPENDITURE_MODIFIER */;
		case 15:
			return Global_262145.f_4055 /* Tunable: FROGGER_EXPENDITURE_MODIFIER */;
		case 53:
			return Global_262145.f_4056 /* Tunable: FUGITIVE_EXPENDITURE_MODIFIER */;
		case 41:
			return Global_262145.f_4057 /* Tunable: GAUNTLET_EXPENDITURE_MODIFIER */;
		case 92:
			return Global_262145.f_4058 /* Tunable: HEXER_EXPENDITURE_MODIFIER */;
		case 44:
			return Global_262145.f_4060 /* Tunable: INFERNUS_EXPENDITURE_MODIFIER */;
		case 43:
			return Global_262145.f_4061 /* Tunable: ISSI2_EXPENDITURE_MODIFIER */;
		case 2:
			return Global_262145.f_4062 /* Tunable: JB700_EXPENDITURE_MODIFIER */;
		case 25:
			return Global_262145.f_4063 /* Tunable: JETMAX_EXPENDITURE_MODIFIER */;
		case 85:
			return Global_262145.f_4064 /* Tunable: JOURNEY_EXPENDITURE_MODIFIER */;
		case 14:
			return Global_262145.f_4066 /* Tunable: LUXOR_EXPENDITURE_MODIFIER */;
		case 79:
			return Global_262145.f_4067 /* Tunable: MAMMATUS_EXPENDITURE_MODIFIER */;
		case 24:
			return Global_262145.f_4068 /* Tunable: MARQUIS_EXPENDITURE_MODIFIER */;
		case 16:
			return Global_262145.f_4069 /* Tunable: MAVERICK_EXPENDITURE_MODIFIER */;
		case 6:
			return Global_262145.f_4070 /* Tunable: MONROE_EXPENDITURE_MODIFIER */;
		case 86:
			return Global_262145.f_4071 /* Tunable: MULE_EXPENDITURE_MODIFIER */;
		case 47:
			return Global_262145.f_4072 /* Tunable: NINEF_EXPENDITURE_MODIFIER */;
		case 73:
			return Global_262145.f_4073 /* Tunable: NINEF2_EXPENDITURE_MODIFIER */;
		case 61:
			return Global_262145.f_4074 /* Tunable: ORACLE2_EXPENDITURE_MODIFIER */;
		case 67:
			return Global_262145.f_4075 /* Tunable: PCJ_EXPENDITURE_MODIFIER */;
		case 74:
			return Global_262145.f_4076 /* Tunable: RAPIDGT_EXPENDITURE_MODIFIER */;
		case 75:
			return Global_262145.f_4077 /* Tunable: RAPIDGT2_EXPENDITURE_MODIFIER */;
		case 87:
			return Global_262145.f_4078 /* Tunable: RENTALBUS_EXPENDITURE_MODIFIER */;
		case 17:
			return Global_262145.f_4079 /* Tunable: RHINO_EXPENDITURE_MODIFIER */;
		case 59:
			return Global_262145.f_4080 /* Tunable: ROCOTO_EXPENDITURE_MODIFIER */;
		case 64:
			return Global_262145.f_4081 /* Tunable: RUFFIAN_EXPENDITURE_MODIFIER */;
		case 68:
			return Global_262145.f_4082 /* Tunable: SANCHEZ_EXPENDITURE_MODIFIER */;
		case 52:
			return Global_262145.f_4083 /* Tunable: SANDKING_EXPENDITURE_MODIFIER */;
		case 39:
			return Global_262145.f_4084 /* Tunable: SCHWARZER_EXPENDITURE_MODIFIER */;
		case 34:
			return Global_262145.f_4085 /* Tunable: SCORCHER_EXPENDITURE_MODIFIER */;
		case 30:
			return Global_262145.f_4086 /* Tunable: SEASHARK_EXPENDITURE_MODIFIER */;
		case 10:
			return Global_262145.f_4087 /* Tunable: SHAMAL_EXPENDITURE_MODIFIER */;
		case 27:
			return Global_262145.f_4088 /* Tunable: SQUALO_EXPENDITURE_MODIFIER */;
		case 1:
			return Global_262145.f_4089 /* Tunable: STINGER_EXPENDITURE_MODIFIER */;
		case 76:
			return Global_262145.f_4090 /* Tunable: STINGERGT_EXPENDITURE_MODIFIER */;
		case 88:
			return Global_262145.f_4091 /* Tunable: STRETCH_EXPENDITURE_MODIFIER */;
		case 11:
			return Global_262145.f_4092 /* Tunable: STUNT_EXPENDITURE_MODIFIER */;
		case 32:
			return Global_262145.f_4093 /* Tunable: SUNTRAP_EXPENDITURE_MODIFIER */;
		case 55:
			return Global_262145.f_4094 /* Tunable: SUPERD_EXPENDITURE_MODIFIER */;
		case 45:
			return Global_262145.f_4095 /* Tunable: SURANO_EXPENDITURE_MODIFIER */;
		case 18:
			return Global_262145.f_4096 /* Tunable: TITAN_EXPENDITURE_MODIFIER */;
		case 35:
			return Global_262145.f_4097 /* Tunable: TRIBIKE_EXPENDITURE_MODIFIER */;
		case 36:
			return Global_262145.f_4098 /* Tunable: TRIBIKE2_EXPENDITURE_MODIFIER */;
		case 37:
			return Global_262145.f_4099 /* Tunable: TRIBIKE3_EXPENDITURE_MODIFIER */;
		case 29:
			return Global_262145.f_4100 /* Tunable: TROPIC_EXPENDITURE_MODIFIER */;
		case 46:
			return Global_262145.f_4101 /* Tunable: VACCA_EXPENDITURE_MODIFIER */;
		case 65:
			return Global_262145.f_4102 /* Tunable: VADER_EXPENDITURE_MODIFIER */;
		case 80:
			return Global_262145.f_4103 /* Tunable: VELUM_EXPENDITURE_MODIFIER */;
		case 42:
			return Global_262145.f_4104 /* Tunable: VIGERO_EXPENDITURE_MODIFIER */;
		case 77:
			return Global_262145.f_7629 /* Tunable: DLC_VEHICLE_COIL_VOLTIC_TOPLESS */;
		case 40:
			return Global_262145.f_4106 /* Tunable: ZION_EXPENDITURE_MODIFIER */;
		case 93:
			return Global_262145.f_4107 /* Tunable: ZION2_EXPENDITURE_MODIFIER */;
		case 0:
			return Global_262145.f_4108 /* Tunable: ZTYPE_EXPENDITURE_MODIFIER */;
		case 103:
			return Global_262145.f_4740 /* Tunable: BODHI2_EXPENDITURE_MODIFIER */;
		case 104:
			return Global_262145.f_4741 /* Tunable: DUNE_EXPENDITURE_MODIFIER */;
		case 105:
			return Global_262145.f_4742 /* Tunable: REBEL_EXPENDITURE_MODIFIER */;
		case 106:
			return Global_262145.f_4743 /* Tunable: SADLER_EXPENDITURE_MODIFIER */;
		case 107:
			return Global_262145.f_4744 /* Tunable: SANCHEZ2_EXPENDITURE_MODIFIER */;
		case 108:
			return Global_262145.f_4745 /* Tunable: SANDKING2_EXPENDITURE_MODIFIER */;
		case 128:
			return Global_262145.f_4109 /* Tunable: ASEA_EXPENDITURE_MODIFIER */;
		case 129:
			return Global_262145.f_7030 /* Tunable: BUSINESS_VEHICLES_ASTEROPE */;
		case 130:
			return Global_262145.f_7031 /* Tunable: BUSINESS_VEHICLES_BOBCATXL */;
		case 131:
			return Global_262145.f_7032 /* Tunable: BUSINESS_VEHICLES_CAVALCADE2 */;
		case 132:
			return Global_262145.f_7033 /* Tunable: BUSINESS_VEHICLES_GRANGER */;
		case 133:
			return Global_262145.f_7034 /* Tunable: BUSINESS_VEHICLES_INGOT */;
		case 134:
			return Global_262145.f_7035 /* Tunable: BUSINESS_VEHICLES_INTRUDER */;
		case 135:
			return Global_262145.f_7036 /* Tunable: BUSINESS_VEHICLES_MINIVAN */;
		case 136:
			return Global_262145.f_7037 /* Tunable: BUSINESS_VEHICLES_PREMIER */;
		case 137:
			return Global_262145.f_7038 /* Tunable: BUSINESS_VEHICLES_RADI */;
		case 138:
			return Global_262145.f_7039 /* Tunable: BUSINESS_VEHICLES_RANCHERXL */;
		case 139:
			return Global_262145.f_7059 /* Tunable: VALENTINE_MODIFIER_VEHICLE_RATLOADER */;
		case 140:
			return Global_262145.f_7040 /* Tunable: BUSINESS_VEHICLES_STANIER */;
		case 141:
			return Global_262145.f_7041 /* Tunable: BUSINESS_VEHICLES_STRATUM */;
		case 142:
			return Global_262145.f_7042 /* Tunable: BUSINESS_VEHICLES_WASHINGTON */;
		case 150:
			return Global_262145.f_8113 /* Tunable: DLC_HIPSTER_CAR_MOD_PICADOR */;
		case 151:
			return Global_262145.f_8116 /* Tunable: DLC_HIPSTER_CAR_MOD_REGINA */;
		case 152:
			return Global_262145.f_8117 /* Tunable: DLC_HIPSTER_CAR_MOD_SURFER */;
		case 153:
			return Global_262145.f_8119 /* Tunable: DLC_HIPSTER_CAR_MOD_YOUGA */;
		case 154:
			return Global_262145.f_8110 /* Tunable: DLC_HIPSTER_CAR_MOD_BLAZER3 */;
		case 155:
			return Global_262145.f_8115 /* Tunable: DLC_HIPSTER_CAR_MOD_REBEL2 */;
		case 156:
			return Global_262145.f_8114 /* Tunable: DLC_HIPSTER_CAR_MOD_PRIMO */;
		case 157:
			return Global_262145.f_8111 /* Tunable: DLC_HIPSTER_CAR_MOD_BUFFALO */;
		case 158:
			return Global_262145.f_8112 /* Tunable: DLC_HIPSTER_CAR_MOD_BUFFALO2 */;
		case 159:
			return Global_262145.f_8118 /* Tunable: DLC_HIPSTER_CAR_MOD_TAILGATER */;
		default:
	}
	return -1;
}

int func_570(int iParam0)//Position - 0x90458
{
	switch (iParam0)
	{
		case joaat("penumbra2"):
			return 0;
			break;
		case joaat("seminole2"):
			return 1;
			break;
		case joaat("landstalker2"):
			return 2;
			break;
		case joaat("wolfsbane"):
			return 3;
			break;
		case joaat("club"):
			return 4;
			break;
		case joaat("dukes3"):
			return 5;
			break;
	}
	return -1;
}

int func_571()//Position - 0x94670
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_112())
	{
		return 1;
	}
	return 0;
}

char* func_572(int iParam0)//Position - 0x9468D
{
	if (iParam0 == 0)
	{
		return "DUMMY" /* GXT: This label is here! */;
	}
	else if (iParam0 == Global_75446)
	{
		return "BIG_YACHT";
	}
	else if (iParam0 == Global_75447)
	{
		return "BIG_TRUCK";
	}
	else if (iParam0 == Global_75449)
	{
		return "BIG_PLANE";
	}
	else if (iParam0 == Global_75448)
	{
		return "BALLISTIC";
	}
	else if (iParam0 == Global_75450)
	{
		return "HACKER_TRUCK";
	}
	if ((!STREAMING::IS_MODEL_VALID(iParam0) || !STREAMING::IS_MODEL_IN_CDIMAGE(iParam0)) || !STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return "INVALID MODEL";
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0);
}

int func_573(int iParam0)//Position - 0x9B814
{
	return (__LIB_1__::func_257(iParam0) - __LIB_1__::func_325(iParam0));
}

int func_574(int iParam0)//Position - 0x9BB1D
{
	if ((iParam0 == 83 || iParam0 == 84) || iParam0 == 85)
	{
		return 1;
	}
	return 0;
}

int func_575()//Position - 0x9BB48
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 9:
		case 12:
			return 1;
		default:
	}
	return 0;
}

int func_576()//Position - 0x9BB6A
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 7:
		case 5:
			return 1;
		default:
	}
	return 0;
}

char* func_577(int iParam0, int iParam1)//Position - 0x9BF66
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return "ShopUI_Title_GunClub";
			break;
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		case 44:
			return "ShopUI_Title_Supermod";
			break;
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "ShopUI_Title_ClubhouseMod";
					break;
				case 10:
					return "ShopUI_Title_GR_GunMod";
					break;
				case 12:
					return "ShopUI_Title_SM_Hangar";
				case 13:
					return "ShopUI_Title_GR_GunMod";
				case 14:
					return "ShopUI_Title_GR_GunMod";
				case 15:
					return "ShopUI_Title_GR_GunMod";
				case 16:
					return "ShopUI_Title_GR_GunMod";
				case 17:
					return "ShopUI_Title_ArenaWar";
				case 18:
					return "ShopUI_Title_Los_Santos_Car_Meet";
					break;
				case 19:
					return "ShopUI_Title_Auto_Shop";
				case 20:
					return "SHOP_BANNER_CLINTON_PARTNER";
			}
			return "ShopUI_Title_IE_ModGarage";
			break;
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
			return "ShopUI_Title_GR_GunMod";
		case 50:
		case 51:
			return "ShopUI_Title_Casino";
		case 54:
			return "ShopUI_Title_Los_Santos_Car_Meet";
		case 55:
			return "ShopUI_Title_Los_Santos_Car_Meet";
		case 56:
			return "SHOP_BANNER_CLINTON_PARTNER";
			break;
		case 57:
			return "SHOP_BANNER_RECORD_A_STUDIOS";
			break;
	}
	return "";
}

int func_578()//Position - 0x9C305
{
	return Global_100493.f_472;
}

void func_579(int iParam0, int iParam1, int iParam2)//Position - 0x9D9E1
{
	*iParam1 = (__LIB_2__::func_352(iParam0, iParam2) - 1);
}

int func_580()//Position - 0x9F3FD
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336;
}

int func_581()//Position - 0x9F424
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_285;
}

int func_582()//Position - 0x9F44B
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_278;
}

void func_583(int iParam0, int* iParam1)//Position - 0x9F693
{
	switch (iParam0)
	{
		case 64:
			MISC::SET_BIT(iParam1, 4);
			break;
		case 67:
			MISC::SET_BIT(iParam1, 4);
			break;
		case 72:
			MISC::SET_BIT(iParam1, 1);
			break;
		case 117:
			MISC::CLEAR_BIT(iParam1, 1);
			break;
		case 49:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		case 118:
			MISC::SET_BIT(iParam1, 0);
			MISC::CLEAR_BIT(iParam1, 1);
			break;
		case 1:
			MISC::SET_BIT(iParam1, 1);
			break;
		case 119:
			MISC::CLEAR_BIT(iParam1, 1);
			break;
		case 77:
			MISC::SET_BIT(iParam1, 0);
			MISC::CLEAR_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		case 120:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		case 130:
			MISC::SET_BIT(iParam1, 0);
			break;
		case 132:
			MISC::SET_BIT(iParam1, 0);
			break;
		case 135:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		case 137:
			MISC::SET_BIT(iParam1, 0);
			break;
		case 141:
			MISC::SET_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 6);
			break;
		case 147:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			MISC::SET_BIT(iParam1, 5);
			MISC::SET_BIT(iParam1, 6);
			MISC::SET_BIT(iParam1, 7);
			MISC::SET_BIT(iParam1, 8);
			break;
		case 203:
			MISC::SET_BIT(iParam1, 0);
			MISC::CLEAR_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		case 100:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			break;
		case 170:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::CLEAR_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		case 160:
			MISC::SET_BIT(iParam1, 15);
			break;
		case 161:
			MISC::SET_BIT(iParam1, 15);
			break;
		case 192:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		case 221:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			break;
		case 222:
			MISC::SET_BIT(iParam1, 1);
			break;
		case 172:
			MISC::SET_BIT(iParam1, 1);
			break;
		case 165:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		case 166:
			MISC::SET_BIT(iParam1, 0);
			MISC::CLEAR_BIT(iParam1, 1);
			break;
		case 139:
			MISC::SET_BIT(iParam1, 0);
			break;
		case 104:
			MISC::SET_BIT(iParam1, 1);
			break;
		case 109:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			break;
		case 227:
		case 252:
			MISC::SET_BIT(iParam1, 1);
			MISC::CLEAR_BIT(iParam1, 2);
			MISC::CLEAR_BIT(iParam1, 4);
			break;
		case 97:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		case 52:
			MISC::SET_BIT(iParam1, 1);
			break;
		case 108:
			MISC::SET_BIT(iParam1, 1);
			break;
		case 237:
			MISC::SET_BIT(iParam1, 9);
			break;
		case 238:
			MISC::CLEAR_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			break;
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_77052)
			{
				MISC::SET_BIT(iParam1, 9);
			}
			break;
		case 271:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			break;
		case 272:
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			break;
		case 273:
			MISC::SET_BIT(iParam1, 0);
			break;
		case 281:
			MISC::SET_BIT(iParam1, 0);
			break;
		case 267:
			MISC::SET_BIT(iParam1, 0);
			break;
		case 268:
			MISC::SET_BIT(iParam1, 0);
			break;
		case 292:
			MISC::SET_BIT(iParam1, 9);
			break;
		case 309:
			MISC::SET_BIT(iParam1, 9);
			break;
		case 329:
			MISC::SET_BIT(iParam1, 9);
			break;
		case 364:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 9);
			break;
		case 360:
			MISC::SET_BIT(iParam1, 9);
			break;
		case 401:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 6);
			MISC::SET_BIT(iParam1, 9);
			break;
		case 406:
			MISC::SET_BIT(iParam1, 9);
			break;
		case 404:
			MISC::SET_BIT(iParam1, 9);
			break;
		case 425:
		case 426:
		case 427:
			MISC::SET_BIT(iParam1, 9);
			break;
		case 431:
		case 432:
		case 433:
			MISC::SET_BIT(iParam1, 9);
			break;
		case 471:
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 7);
			break;
		case 493:
		case 491:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			MISC::SET_BIT(iParam1, 5);
			MISC::SET_BIT(iParam1, 6);
			MISC::SET_BIT(iParam1, 7);
			break;
		case 498:
			MISC::SET_BIT(iParam1, 0);
			break;
		case 525:
			MISC::SET_BIT(iParam1, 3);
			break;
		default:
			return;
			break;
	}
}

char* func_584(int iParam0)//Position - 0x9FDDF
{
	if (iParam0 == 0)
	{
		return "0";
	}
	if (iParam0 == 1)
	{
		return "1";
	}
	if (iParam0 == 2)
	{
		return "2";
	}
	if (iParam0 == 3)
	{
		return "3";
	}
	if (iParam0 == 4)
	{
		return "4";
	}
	if (iParam0 == 5)
	{
		return "5";
	}
	if (iParam0 == 6)
	{
		return "6";
	}
	if (iParam0 == 7)
	{
		return "7";
	}
	if (iParam0 == 8)
	{
		return "8";
	}
	if (iParam0 == 9)
	{
		return "9";
	}
	if (iParam0 == 10)
	{
		return "A";
	}
	if (iParam0 == 11)
	{
		return "B";
	}
	if (iParam0 == 12)
	{
		return "C";
	}
	if (iParam0 == 13)
	{
		return "D";
	}
	if (iParam0 == 14)
	{
		return "E";
	}
	if (iParam0 == 15)
	{
		return "F";
	}
	if (iParam0 == 16)
	{
		return "G";
	}
	if (iParam0 == 17)
	{
		return "H";
	}
	if (iParam0 == 18)
	{
		return "I";
	}
	if (iParam0 == 19)
	{
		return "J";
	}
	if (iParam0 == 20)
	{
		return "K";
	}
	if (iParam0 == 21)
	{
		return "L";
	}
	if (iParam0 == 22)
	{
		return "M";
	}
	if (iParam0 == 23)
	{
		return "N";
	}
	if (iParam0 == 24)
	{
		return "O";
	}
	if (iParam0 == 25)
	{
		return "P";
	}
	if (iParam0 == 26)
	{
		return "Q";
	}
	if (iParam0 == 27)
	{
		return "R";
	}
	if (iParam0 == 28)
	{
		return "S";
	}
	if (iParam0 == 29)
	{
		return "T";
	}
	if (iParam0 == 30)
	{
		return "U";
	}
	if (iParam0 == 31)
	{
		return "V";
	}
	if (iParam0 == 32)
	{
		return "W";
	}
	if (iParam0 == 33)
	{
		return "X";
	}
	if (iParam0 == 34)
	{
		return "Y";
	}
	if (iParam0 == 35)
	{
		return "Z";
	}
	return "A";
}

void func_585(int* iParam0, int iParam1)//Position - 0x9FFDB
{
	if (!__LIB_0__::func_492(iParam0, iParam1))
	{
		MISC::SET_BIT(iParam0, iParam1);
	}
}

var func_586(var uParam0)//Position - 0xA0019
{
	return uParam0->f_7;
}

void func_587(int* iParam0, int iParam1)//Position - 0xA01B2
{
	if (iParam0->f_491 != iParam1)
	{
		iParam0->f_491 = iParam1;
	}
}

void func_588(var uParam0, int iParam1)//Position - 0xA0239
{
	uParam0->f_8 = iParam1;
}

void func_589(var uParam0, int iParam1)//Position - 0xA0247
{
	uParam0->f_11 = iParam1;
}

void func_590(var uParam0, var uParam1)//Position - 0xA0285
{
	uParam0->f_7 = uParam1;
}

int func_591(var uParam0)//Position - 0xA0343
{
	return uParam0->f_491;
}

void func_592()//Position - 0xD7334
{
	MISC::CLEAR_BIT(&Global_2714762, 15);
}

bool func_593()//Position - 0xD7C5C
{
	return Global_2715699.f_6320;
}

int func_594(int iParam0)//Position - 0xD7C6B
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1888862[iParam0 /*120*/].f_29, 31);
	}
	return 0;
}

bool func_595()//Position - 0xD7DE8
{
	return BitTest(Global_2714762.f_3, 17);
}

bool func_596()//Position - 0xD7DF9
{
	return BitTest(Global_2714762.f_3, 14);
}

bool func_597()//Position - 0xD7E0A
{
	return BitTest(Global_2714762.f_3, 12);
}

bool func_598()//Position - 0xD7E1B
{
	return BitTest(Global_2714762.f_3, 9);
}

void func_599(bool bParam0)//Position - 0xD7E3C
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 27);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 27);
	}
}

bool func_600(int iParam0)//Position - 0xD7E72
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_143, 27);
}

int func_601(int iParam0)//Position - 0xD829D
{
	int iVar0;
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_262145.f_6210[18])
		{
			if (iParam0 == Global_262145.f_5065[18 /*51*/][iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_602(int iParam0)//Position - 0xD8462
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29921[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_603(int iParam0)//Position - 0xD8550
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_198, 24);
}

int func_604(int iParam0)//Position - 0xD8566
{
	int iVar0;
	int iVar1;
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (Global_262145.f_6890[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6210[iVar1])
				{
					if (iParam0 == Global_262145.f_5065[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

var func_605()//Position - 0xD85CC
{
	return BitTest(Global_2714762.f_3, 4);
}

float func_606(int iParam0, int iParam1)//Position - 0xD871F
{
	switch (iParam0)
	{
		case 11:
			return 40.5914f;
		case 122:
			return 50f;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50f;
				case 1:
					return 50f;
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 50f;
				case 1:
					return 40.4324f;
				case 2:
					return 42.2709f;
				case 3:
					return 43.6444f;
				case 4:
					return 37.3862f;
				case 5:
					return 38.6952f;
				case 6:
					return 40.9091f;
				default:
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 40.5238f;
				case 1:
					return 47.4321f;
				case 2:
					return 38.6571f;
				case 3:
					return 44.0641f;
				case 4:
					return 39.2991f;
				case 5:
					return 31.7484f;
				case 6:
					return 35.6342f;
				case 7:
					return 36.0072f;
				case 8:
					return 42.5782f;
				case 9:
					return 37.4336f;
				default:
			}
			break;
		case 14:
			return 50f;
	}
	return 50f;
}

Vector3 func_607(int iParam0, int iParam1)//Position - 0xD8897
{
	switch (iParam0)
	{
		case 11:
			return 1.3773f, 0f, -88.827f;
		case 122:
			return -18.1605f, 2.6167f, 113.0513f;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2.3039f, 0f, -19.6903f;
				case 1:
					return -5.9341f, 0f, -151.6385f;
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3.627f, 0f, 34.6935f;
				case 1:
					return -57.9221f, 0f, 58.3042f;
				case 2:
					return -15.4498f, 0f, 161.1361f;
				case 3:
					return -1.8386f, 0f, -135.0223f;
				case 4:
					return 0.5233f, 0f, -85.7377f;
				case 5:
					return -4.2364f, 0f, 173.6634f;
				case 6:
					return -3.74f, 0f, -30.7752f;
				default:
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 4.1441f, 0f, 15.6909f;
				case 1:
					return 5.4815f, 0f, -127.6695f;
				case 2:
					return -4.1889f, 0f, -15.0654f;
				case 3:
					return 16.4433f, 0f, -60.3988f;
				case 4:
					return 7.8225f, 0f, 39.2409f;
				case 5:
					return 2.0405f, 0f, -122.3459f;
				case 6:
					return 7.3382f, 0f, 157.6388f;
				case 7:
					return 6.481f, 0f, 172.9874f;
				case 8:
					return 14.0573f, 0f, 5.0622f;
				case 9:
					return -10.1444f, 0f, -131.4038f;
				default:
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8.8196f, 0f, 57.5677f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_608(int iParam0, int iParam1)//Position - 0xD8AA5
{
	switch (iParam0)
	{
		case 11:
			return -1297.8552f, 84.6478f, 54.6519f;
		case 122:
			return -855.7661f, -2645.376f, 100.8438f;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 13.4678f, -1097.7811f, 30.192f;
				case 1:
					return 816.6221f, -2160.6592f, 30.3139f;
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1172.111f, -1641.5487f, 5.7494f;
				case 1:
					return 498.4758f, -226.4275f, 71.0569f;
				case 2:
					return -1217.632f, 364.4556f, 86.527f;
				case 3:
					return -2884.7537f, 32.9823f, 15.1123f;
				case 4:
					return -948.1036f, -1260.2487f, 8.228f;
				case 5:
					return -1614.2163f, 302.0945f, 66.0158f;
				case 6:
					return -1380.7211f, -107.9713f, 50.6998f;
				default:
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 903.8763f, -192.214f, 74.6401f;
				case 1:
					return 1419.5167f, -2216.0344f, 61.8467f;
				case 2:
					return -83.9713f, -1331.6351f, 29.8383f;
				case 3:
					return 364.6455f, -2441.8967f, 6.2607f;
				case 4:
					return 1237.2067f, 2715.9993f, 37.6424f;
				case 5:
					return 1019.1531f, 2680.4268f, 41.2254f;
				case 6:
					return 269.5203f, 2617.4104f, 44.7054f;
				case 7:
					return -194.2518f, 6295.6875f, 31.0991f;
				case 8:
					return 1682.7593f, 4954.088f, 42.6891f;
				case 9:
					return 2325.4468f, 3145.91f, 58.4284f;
				default:
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1993.6974f, 3049.6675f, 47.7241f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_609()//Position - 0xD8F9B
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139, 0);
}

void func_610()//Position - 0xD8FF7
{
	MISC::SET_BIT(&(Global_2714762.f_3), 4);
}

void func_611()//Position - 0xD901B
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 14);
}

void func_612(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0xE0AA3
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = fParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_613()//Position - 0xE1B5A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (363 - 1))
	{
		if (((iVar0 == 350 || iVar0 == 353) || iVar0 == 351) || iVar0 == 354)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
		}
		iVar0++;
	}
}

void func_614()//Position - 0xE1BAD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (363 - 1))
	{
		if (((((((((((((((((iVar0 == 21 || iVar0 == 22) || iVar0 == 23) || iVar0 == 24) || iVar0 == 30) || iVar0 == 31) || iVar0 == 32) || iVar0 == 33) || iVar0 == 34) || iVar0 == 35) || iVar0 == 44) || iVar0 == 47) || iVar0 == 53) || iVar0 == 54) || iVar0 == 55) || iVar0 == 56) || iVar0 == 57) || iVar0 == 58)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
		}
		iVar0++;
	}
}

void func_615()//Position - 0xE1C96
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (363 - 1))
	{
		if (((((((((((((((((((((((iVar0 == 59 || iVar0 == 60) || iVar0 == 61) || iVar0 == 62) || iVar0 == 63) || iVar0 == 64) || iVar0 == 71) || iVar0 == 351) || iVar0 == 352) || iVar0 == 72) || iVar0 == 76) || iVar0 == 87) || iVar0 == 88) || iVar0 == 89) || iVar0 == 90) || iVar0 == 110) || iVar0 == 106) || iVar0 == 337) || iVar0 == 74) || iVar0 == 8) || iVar0 == 9) || iVar0 == 10) || iVar0 == 11) || iVar0 == 11)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
		}
		iVar0++;
	}
}

int func_616(int iParam0)//Position - 0xE2193
{
	if (iParam0 < 10)
	{
		return Global_1945927[iParam0];
	}
	return 0;
}

void func_617()//Position - 0xF2020
{
	Global_4535620 = 0;
}

int func_618(int iParam0)//Position - 0xF2C18
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0);
	}
	return 0;
}

void func_619(int iParam0, var uParam1, bool bParam2)//Position - 0xF2EA3
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (bParam2)
	{
		MISC::SET_BIT(uParam1[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(uParam1[iVar0], iVar1);
	}
}

void func_620(var uParam0)//Position - 0xF335A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*74*/])->f_16[iVar1]) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((uParam0[iVar0 /*74*/])->f_16[iVar1]))
			{
				PED::DELETE_PED(&((uParam0[iVar0 /*74*/])->f_16[iVar1]));
			}
			if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*74*/])->f_16.f_3[iVar1]) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((uParam0[iVar0 /*74*/])->f_16.f_3[iVar1]))
			{
				OBJECT::DELETE_OBJECT(&((uParam0[iVar0 /*74*/])->f_16.f_3[iVar1]));
			}
			iVar1++;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*74*/])->f_22[iVar1]) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((uParam0[iVar0 /*74*/])->f_22[iVar1]))
			{
				OBJECT::DELETE_OBJECT(&((uParam0[iVar0 /*74*/])->f_22[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_621(var uParam0)//Position - 0xF34E3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			PED::DELETE_PED(uParam0[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

int func_622(var uParam0)//Position - 0xF354F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			OBJECT::DELETE_OBJECT(uParam0[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

int func_623(var uParam0)//Position - 0xF35B2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam0)[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((*uParam0)[iVar0]))
			{
				__LIB_1__::func_96(uParam0[iVar0]);
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS((NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 1) - 1));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID((*uParam0)[iVar0]);
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_624(var uParam0)//Position - 0xF363F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam0)[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((*uParam0)[iVar0]))
			{
				__LIB_1__::func_96(uParam0[iVar0]);
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) - 1));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID((*uParam0)[iVar0]);
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_625(struct<3> Param0)//Position - 0x10FFCF
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 891.9681f, -3202.1057f, -98.40501f, false) < 0.5f)
	{
		return 893.1678f, -3201.6455f, -99.19627f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 889.37683f, -3202.707f, -97.33437f, false) < 0.5f)
	{
		return 890.0617f, -3201.7417f, -99.19627f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 884.0123f, -3207.512f, -99.19627f, false) < 0.5f)
	{
		return 883.68506f, -3207.5784f, -99.19627f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 895.47986f, -3241.6057f, -99.16917f, false) < 0.5f)
	{
		return Param0 - Vector(1f, 0f, 0f);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 916.06946f, -3236.0854f, -99.29433f, false) < 0.5f)
	{
		return Param0 - Vector(1f, 0f, 0f);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 891.9929f, -3212.1604f, -99.20737f, false) < 0.5f)
	{
		return 892.1853f, -3211.9412f, -99.20605f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 888.23413f, -3213.902f, -98.39187f, false) < 0.5f)
	{
		return 888.78f, -3212.8862f, -99.19757f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 892.00604f, -3203.1248f, -98.40501f, false) < 0.5f)
	{
		return 891.671f, -3203.1592f, -99.19627f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 891.9165f, -3201.0942f, -98.40501f, false) < 0.5f)
	{
		return 892.44336f, -3200.8362f, -99.19627f;
	}
	return Param0 + Vector(-1f, 0f, 0f);
}

int func_626(char* sParam0)//Position - 0x1101E3
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(sParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
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

int func_627(var uParam0, var uParam1)//Position - 0x110213
{
	int iVar0;
	if (uParam0->f_2222 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2223[iVar0 /*66*/]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_628(var uParam0)//Position - 0x11041D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_64))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_64);
		if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_64))
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

int func_629(var uParam0, var uParam1)//Position - 0x110666
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_2222 == 0)
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2223[iVar0 /*66*/]))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam1)[iVar0]))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_630(var uParam0, int iParam1, int iParam2)//Position - 0x1108AA
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = joaat("S_M_M_HighSec_01");
			uParam0->f_1[0 /*3*/] = 0;
			uParam0->f_1[0 /*3*/].f_1 = 1;
			uParam0->f_1[3 /*3*/] = 0;
			uParam0->f_1[3 /*3*/].f_1 = 0;
			uParam0->f_1[4 /*3*/] = 0;
			uParam0->f_1[4 /*3*/].f_1 = 0;
			uParam0->f_1[11 /*3*/] = 0;
			uParam0->f_1[11 /*3*/].f_1 = 2;
			uParam0->f_57 = joaat("WEAPON_SPECIALCARBINE");
			break;
	}
}

void func_631(var uParam0, int iParam1, int iParam2)//Position - 0x110929
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = joaat("S_M_M_HighSec_01");
			uParam0->f_1[0 /*3*/] = 1;
			uParam0->f_1[0 /*3*/].f_1 = 1;
			uParam0->f_1[3 /*3*/] = 0;
			uParam0->f_1[3 /*3*/].f_1 = 1;
			uParam0->f_1[4 /*3*/] = 0;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[11 /*3*/] = 0;
			uParam0->f_1[11 /*3*/].f_1 = 0;
			uParam0->f_57 = joaat("WEAPON_UNARMED");
			break;
	}
}

void func_632(var uParam0, int iParam1, int iParam2)//Position - 0x1109A8
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = joaat("S_M_M_HighSec_01");
			uParam0->f_1[0 /*3*/] = 1;
			uParam0->f_1[0 /*3*/].f_1 = 0;
			uParam0->f_1[3 /*3*/] = 0;
			uParam0->f_1[3 /*3*/].f_1 = 2;
			uParam0->f_1[4 /*3*/] = 0;
			uParam0->f_1[4 /*3*/].f_1 = 2;
			uParam0->f_1[11 /*3*/] = 0;
			uParam0->f_1[11 /*3*/].f_1 = 1;
			uParam0->f_57 = joaat("WEAPON_UNARMED");
			break;
	}
}

void func_633(var uParam0, int iParam1, int iParam2)//Position - 0x110A27
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = joaat("S_M_M_HighSec_01");
			uParam0->f_1[0 /*3*/] = 0;
			uParam0->f_1[0 /*3*/].f_1 = 0;
			uParam0->f_1[3 /*3*/] = 0;
			uParam0->f_1[3 /*3*/].f_1 = 1;
			uParam0->f_1[4 /*3*/] = 0;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[11 /*3*/] = 0;
			uParam0->f_1[11 /*3*/].f_1 = 2;
			uParam0->f_57 = joaat("WEAPON_UNARMED");
			break;
	}
}

void func_634(var uParam0, int iParam1, int iParam2)//Position - 0x110AA6
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 8;
			uParam0->f_1[0 /*3*/].f_1 = 0;
			uParam0->f_1[2 /*3*/] = 2;
			uParam0->f_1[2 /*3*/].f_1 = 0;
			uParam0->f_1[3 /*3*/] = 8;
			uParam0->f_1[3 /*3*/].f_1 = 1;
			uParam0->f_1[4 /*3*/] = 6;
			uParam0->f_1[4 /*3*/].f_1 = 0;
			uParam0->f_1[5 /*3*/] = 1;
			uParam0->f_1[8 /*3*/] = 5;
			uParam0->f_57 = joaat("WEAPON_UNARMED");
			break;
	}
}

void func_635(var uParam0, int iParam1, int iParam2)//Position - 0x110B36
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 9;
			uParam0->f_1[2 /*3*/] = 2;
			uParam0->f_1[3 /*3*/] = 8;
			uParam0->f_1[4 /*3*/] = 5;
			uParam0->f_1[5 /*3*/] = 1;
			uParam0->f_1[8 /*3*/] = 5;
			uParam0->f_57 = joaat("WEAPON_PUMPSHOTGUN");
			break;
	}
}

void func_636(var uParam0, int iParam1, int iParam2)//Position - 0x110B92
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 8;
			uParam0->f_1[0 /*3*/].f_1 = 0;
			uParam0->f_1[2 /*3*/] = 2;
			uParam0->f_1[2 /*3*/].f_1 = 0;
			uParam0->f_1[3 /*3*/] = 8;
			uParam0->f_1[3 /*3*/].f_1 = 1;
			uParam0->f_1[4 /*3*/] = 6;
			uParam0->f_1[4 /*3*/].f_1 = 0;
			uParam0->f_1[5 /*3*/] = 1;
			uParam0->f_1[8 /*3*/] = 5;
			uParam0->f_57 = joaat("WEAPON_ASSAULTRIFLE");
			break;
	}
}

void func_637(var uParam0, int iParam1, int iParam2)//Position - 0x110C22
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 1;
			uParam0->f_1[3 /*3*/] = 7;
			uParam0->f_1[4 /*3*/] = 4;
			uParam0->f_1[4 /*3*/].f_1 = 2;
			uParam0->f_1[8 /*3*/] = 4;
			uParam0->f_1[8 /*3*/].f_1 = 2;
			uParam0->f_38[0 /*2*/] = 3;
			uParam0->f_38[1 /*2*/] = 0;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 1;
			uParam0->f_1[3 /*3*/] = 7;
			uParam0->f_1[4 /*3*/] = 4;
			uParam0->f_1[4 /*3*/].f_1 = 2;
			uParam0->f_1[8 /*3*/] = 4;
			uParam0->f_1[8 /*3*/].f_1 = 2;
			uParam0->f_38[0 /*2*/] = 3;
			uParam0->f_38[1 /*2*/] = 0;
			break;
	}
}

void func_638(var uParam0, int iParam1, int iParam2)//Position - 0x110CDF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 1;
			uParam0->f_1[2 /*3*/] = 1;
			uParam0->f_38[0 /*2*/] = 4;
			uParam0->f_38[1 /*2*/] = 0;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 1;
			uParam0->f_1[2 /*3*/] = 1;
			uParam0->f_38[0 /*2*/] = 4;
			uParam0->f_38[1 /*2*/] = 0;
			break;
	}
}

void func_639(var uParam0, int iParam1, int iParam2)//Position - 0x110D50
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 5;
			uParam0->f_1[3 /*3*/] = 6;
			uParam0->f_1[4 /*3*/] = 2;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 3;
			uParam0->f_1[8 /*3*/].f_1 = 1;
			uParam0->f_38[0 /*2*/] = 2;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 5;
			uParam0->f_1[3 /*3*/] = 6;
			uParam0->f_1[4 /*3*/] = 2;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 3;
			uParam0->f_1[8 /*3*/].f_1 = 1;
			uParam0->f_38[0 /*2*/] = 2;
			uParam0->f_38[1 /*2*/] = 2;
			break;
	}
}

void func_640(var uParam0, int iParam1, int iParam2)//Position - 0x110E0D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 5;
			uParam0->f_1[3 /*3*/] = 4;
			uParam0->f_1[4 /*3*/] = 2;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 2;
			uParam0->f_38[0 /*2*/] = 2;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 5;
			uParam0->f_1[3 /*3*/] = 4;
			uParam0->f_1[4 /*3*/] = 2;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 2;
			uParam0->f_38[0 /*2*/] = 2;
			uParam0->f_38[1 /*2*/] = 2;
			break;
	}
}

void func_641(var uParam0, int iParam1, int iParam2)//Position - 0x110EB4
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 2;
			uParam0->f_1[3 /*3*/] = 7;
			uParam0->f_1[4 /*3*/] = 1;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 4;
			uParam0->f_1[8 /*3*/].f_1 = 1;
			uParam0->f_38[0 /*2*/] = -1;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 2;
			uParam0->f_1[3 /*3*/] = 7;
			uParam0->f_1[4 /*3*/] = 1;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 4;
			uParam0->f_1[8 /*3*/].f_1 = 1;
			uParam0->f_38[0 /*2*/] = -1;
			uParam0->f_38[1 /*2*/] = 0;
			break;
	}
}

void func_642(var uParam0, int iParam1, int iParam2)//Position - 0x110F71
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 2;
			uParam0->f_1[3 /*3*/] = 1;
			uParam0->f_1[4 /*3*/] = 1;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_38[0 /*2*/] = 4;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 2;
			uParam0->f_1[3 /*3*/] = 1;
			uParam0->f_1[4 /*3*/] = 1;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_38[0 /*2*/] = 4;
			uParam0->f_38[1 /*2*/] = 0;
			break;
	}
}

void func_643(var uParam0, int iParam1, int iParam2)//Position - 0x111006
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 6;
			uParam0->f_1[3 /*3*/] = 6;
			uParam0->f_1[4 /*3*/] = 3;
			uParam0->f_1[8 /*3*/] = 3;
			uParam0->f_1[8 /*3*/].f_1 = 2;
			uParam0->f_38[0 /*2*/] = 3;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 6;
			uParam0->f_1[3 /*3*/] = 6;
			uParam0->f_1[4 /*3*/] = 3;
			uParam0->f_1[8 /*3*/] = 3;
			uParam0->f_1[8 /*3*/].f_1 = 2;
			uParam0->f_38[0 /*2*/] = 3;
			uParam0->f_38[1 /*2*/] = 3;
			break;
	}
}

void func_644(var uParam0, int iParam1, int iParam2)//Position - 0x1110AF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 6;
			uParam0->f_1[3 /*3*/] = 5;
			uParam0->f_1[3 /*3*/].f_1 = 1;
			uParam0->f_1[4 /*3*/] = 3;
			uParam0->f_1[8 /*3*/] = 1;
			uParam0->f_38[0 /*2*/] = 5;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 6;
			uParam0->f_1[3 /*3*/] = 5;
			uParam0->f_1[3 /*3*/].f_1 = 1;
			uParam0->f_1[4 /*3*/] = 3;
			uParam0->f_1[8 /*3*/] = 1;
			uParam0->f_38[0 /*2*/] = 5;
			uParam0->f_38[1 /*2*/] = 3;
			break;
	}
}

void func_645(var uParam0, int iParam1, int iParam2)//Position - 0x111156
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 3;
			uParam0->f_1[3 /*3*/] = 6;
			uParam0->f_1[4 /*3*/] = 4;
			uParam0->f_1[8 /*3*/] = 3;
			uParam0->f_38[0 /*2*/] = 3;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 3;
			uParam0->f_1[3 /*3*/] = 6;
			uParam0->f_1[4 /*3*/] = 4;
			uParam0->f_1[8 /*3*/] = 3;
			uParam0->f_38[0 /*2*/] = 3;
			uParam0->f_38[1 /*2*/] = 1;
			break;
	}
}

void func_646(var uParam0, int iParam1, int iParam2)//Position - 0x1111E9
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 3;
			uParam0->f_1[3 /*3*/] = 2;
			uParam0->f_1[4 /*3*/] = 1;
			uParam0->f_38[0 /*2*/] = 1;
			uParam0->f_38[1 /*2*/] = 1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 3;
			uParam0->f_1[3 /*3*/] = 2;
			uParam0->f_1[4 /*3*/] = 1;
			uParam0->f_38[0 /*2*/] = 1;
			uParam0->f_38[1 /*2*/] = 1;
			break;
	}
}

void func_647(var uParam0, int iParam1, int iParam2)//Position - 0x11126A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 7;
			uParam0->f_1[3 /*3*/] = 7;
			uParam0->f_1[4 /*3*/] = 3;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 4;
			uParam0->f_1[8 /*3*/].f_1 = 1;
			uParam0->f_38[0 /*2*/] = -1;
			uParam0->f_38[1 /*2*/] = 4;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 7;
			uParam0->f_1[3 /*3*/] = 7;
			uParam0->f_1[4 /*3*/] = 3;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 4;
			uParam0->f_1[8 /*3*/].f_1 = 1;
			uParam0->f_38[0 /*2*/] = -1;
			uParam0->f_38[1 /*2*/] = 3;
			break;
	}
}

void func_648(var uParam0, int iParam1, int iParam2)//Position - 0x111327
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 7;
			uParam0->f_1[3 /*3*/] = 5;
			uParam0->f_1[4 /*3*/] = 3;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 1;
			uParam0->f_38[0 /*2*/] = -1;
			uParam0->f_38[1 /*2*/] = 4;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 7;
			uParam0->f_1[3 /*3*/] = 5;
			uParam0->f_1[4 /*3*/] = 3;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 1;
			uParam0->f_38[0 /*2*/] = -1;
			uParam0->f_38[1 /*2*/] = 3;
			break;
	}
}

void func_649(var uParam0, int iParam1, int iParam2)//Position - 0x1113CE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[3 /*3*/] = 6;
			uParam0->f_1[4 /*3*/] = 2;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 3;
			uParam0->f_1[8 /*3*/].f_1 = 2;
			uParam0->f_38[0 /*2*/] = 0;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[3 /*3*/] = 6;
			uParam0->f_1[4 /*3*/] = 2;
			uParam0->f_1[4 /*3*/].f_1 = 1;
			uParam0->f_1[8 /*3*/] = 3;
			uParam0->f_1[8 /*3*/].f_1 = 2;
			uParam0->f_38[0 /*2*/] = 0;
			uParam0->f_38[1 /*2*/] = 0;
			break;
	}
}

void func_650(var uParam0, int iParam1, int iParam2)//Position - 0x11147B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_38[0 /*2*/] = 0;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_38[0 /*2*/] = 0;
			uParam0->f_38[1 /*2*/] = 0;
			break;
	}
}

void func_651(var uParam0, int iParam1, int iParam2)//Position - 0x1114CC
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 4;
			uParam0->f_1[3 /*3*/] = 7;
			uParam0->f_1[4 /*3*/] = 2;
			uParam0->f_1[8 /*3*/] = 4;
			uParam0->f_38[0 /*2*/] = -1;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 4;
			uParam0->f_1[3 /*3*/] = 7;
			uParam0->f_1[4 /*3*/] = 2;
			uParam0->f_1[8 /*3*/] = 4;
			uParam0->f_38[0 /*2*/] = -1;
			uParam0->f_38[1 /*2*/] = 2;
			break;
	}
}

void func_652(var uParam0, int iParam1, int iParam2)//Position - 0x11155F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 4;
			uParam0->f_1[3 /*3*/] = 3;
			uParam0->f_1[4 /*3*/] = 2;
			uParam0->f_1[8 /*3*/] = 2;
			uParam0->f_38[0 /*2*/] = -1;
			uParam0->f_38[1 /*2*/] = -1;
			break;
		case 1:
			*uParam0 = joaat("MP_M_WeapWork_01");
			uParam0->f_1[0 /*3*/] = 4;
			uParam0->f_1[3 /*3*/] = 3;
			uParam0->f_1[4 /*3*/] = 2;
			uParam0->f_1[8 /*3*/] = 2;
			uParam0->f_38[0 /*2*/] = -1;
			uParam0->f_38[1 /*2*/] = 2;
			break;
	}
}

void func_653(var uParam0)//Position - 0x1115F2
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		uParam0->f_38[iVar1 /*2*/] = -1;
		uParam0->f_38[iVar1 /*2*/].f_1 = 0;
		iVar1++;
	}
}

void func_654(var uParam0, var uParam1)//Position - 0x137424
{
	if (*uParam1 == 1)
	{
		__LIB_4__::func_339(PLAYER::PLAYER_ID());
	}
}

int func_655(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x148281
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!bParam3 || iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_1__::func_527())
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_4__::func_346(iParam0, bVar2) || BitTest(uParam2, iVar0))
		{
			iVar1++;
			if (iVar1 == Global_262145.f_31798 /* Tunable: -354707836 */)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float func_656(float fParam0)//Position - 0x1495EA
{
	return __LIB_0__::func_301((1f - fParam0), 0f, 1f);
}

int func_657(bool bParam0, bool bParam1)//Position - 0x186E84
{
	bool bVar0;
	if (bParam0 != __LIB_0__::func_160() && bParam1 != __LIB_0__::func_160())
	{
		bVar0 = __LIB_2__::func_191(bParam0);
		if (bVar0 != __LIB_0__::func_160())
		{
			return bVar0 == __LIB_2__::func_191(bParam1);
		}
	}
	return 0;
}

int func_658()//Position - 0x1C9F3C
{
	if (__LIB_0__::func_618())
	{
		return Global_1946250.f_520 == 1;
	}
	return 0;
}

int func_659(int iParam0)//Position - 0x227DC7
{
	switch (iParam0)
	{
		case 123:
			return __LIB_2__::func_380();
			break;
		case 125:
			return __LIB_2__::func_379();
			break;
	}
	return 0;
}

int func_660(int iParam0)//Position - 0x228D6C
{
	int iVar0;
	if (__LIB_2__::func_141(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_661(var uParam0)//Position - 0x229AAF
{
	return 0f;
}

void func_662(var uParam0, var uParam1)//Position - 0x22ADDA
{
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*uParam0, false);
	PED::SET_PED_AS_ENEMY(*uParam0, false);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	PED::SET_PED_RESET_FLAG(*uParam0, 249, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 185, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 108, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 106, true);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, false);
	PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(*uParam0, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, false);
	PED::SET_PED_CAN_RAGDOLL(*uParam0, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 208, true);
	TASK::CLEAR_PED_TASKS(*uParam0);
}

int func_663()//Position - 0x22EA32
{
	return Global_262145.f_9074 /* Tunable: ROOT_ID_HASH_THE_PACIFIC_STANDARD_JOB */;
}

bool func_664(int iParam0)//Position - 0x232DB0
{
	return iParam0 != 0;
}

int func_665()//Position - 0x237828
{
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}

int func_666(int iParam0, int iParam1)//Position - 0x24249C
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_3, iParam1);
	}
	return 0;
}

int func_667(int iParam0)//Position - 0x277393
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_1, 0);
	}
	return 0;
}

bool func_668(int iParam0)//Position - 0x27AFE8
{
	return Global_2689235[iParam0 /*453*/].f_436.f_1;
}

void func_669(int* iParam0, int iParam1, int iParam2, struct<6> Param3)//Position - 0x29881E
{
	if (iParam0->f_373 == iParam0->f_307)
	{
		return;
	}
	iParam0->f_307[iParam0->f_373 /*8*/].f_1 = iParam1;
	iParam0->f_307[iParam0->f_373 /*8*/] = iParam2;
	iParam0->f_307[iParam0->f_373 /*8*/].f_2 = { Param3 };
	iParam0->f_373++;
}

void func_670(var uParam0, var uParam1)//Position - 0x2A0265
{
	MISC::SET_BIT(&(uParam0->f_8), 0);
	__LIB_4__::func_481(uParam0, uParam1, uParam1);
	MISC::SET_BIT(&(uParam0->f_9), 3);
	Global_2789733 = 1;
	Global_2789734 = 1;
}

void func_671(var uParam0)//Position - 0x2A203B
{
	*uParam0 = 0;
}

bool func_672()//Position - 0x2A2FB7
{
	return BitTest(Global_1946250.f_6, 0);
}

var func_673()//Position - 0x2A84FC
{
	var uVar0;
	uVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	return uVar0;
}

char* func_674(int iParam0)//Position - 0x2A8DDB
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		case 1:
			return "SNK_ITEM2";
		case 2:
			return "SNK_ITEM3";
		case 4:
			return "SNK_ITEM4";
		case 0:
			return "SNK_ITEM5";
		case 5:
			return "SNK_ITEM6";
		case 6:
			return "SNK_ITEM7";
		default:
	}
	return "";
}

void func_675(bool bParam0)//Position - 0x2AB02A
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 27))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 27);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 27))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 27);
	}
}

int func_676(int iParam0, int iParam1)//Position - 0x2AC72E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 8750;
					break;
				case 1:
					return 9632;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 8751;
					break;
				case 1:
					return 9912;
					break;
			}
			break;
		case 2:
			return 8752;
			break;
		case 3:
			return 8753;
			break;
		case 4:
			return 8754;
			break;
		case 5:
			return 8755;
			break;
		case 6:
			return 8756;
			break;
		case 7:
			return 8757;
			break;
		case 8:
			return 8758;
			break;
		case 9:
			return 8759;
			break;
		case 10:
			return 8760;
			break;
		case 11:
			return 8761;
			break;
		case 12:
			return 8762;
			break;
		case 13:
			return 8763;
			break;
		case 14:
			return 8764;
			break;
		case 15:
			return 8765;
			break;
		case 16:
			return 8766;
			break;
		case 17:
			return 8767;
			break;
		case 18:
			return 8768;
			break;
		case 19:
			return 8769;
			break;
		case 20:
			return 8770;
			break;
		case 21:
			return 8771;
			break;
		case 22:
			return 8772;
			break;
		case 23:
			return 8773;
			break;
		case 24:
			return 8774;
			break;
		case 25:
			return 8775;
			break;
		case 26:
			return 8776;
			break;
		case 27:
			return 8777;
			break;
		case 28:
			return 8778;
			break;
		case 29:
			return 8779;
			break;
		case 30:
			return 8780;
			break;
		case 31:
			return 8781;
			break;
		case 32:
			return 8782;
			break;
		case 33:
			return 8783;
			break;
		case 34:
			return 8784;
			break;
		case 35:
			return 8785;
			break;
		case 36:
			return 8786;
			break;
		case 37:
		case 38:
		case 39:
		case 40:
			return 8787;
			break;
	}
	return 8750;
}

int func_677(int iParam0)//Position - 0x2ACB90
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_465.f_3, 3);
	}
	return 0;
}

int func_678(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0xA702
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam2 == iVar0 || iParam3 == 1)
		{
			bVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (__LIB_1__::func_264(bVar1, 0, 1) && __LIB_1__::func_264(bParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(bParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (__LIB_1__::func_264(bVar1, 0, 1) && __LIB_1__::func_264(bParam2, 0, 1))
				{
					if (Global_2680265.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(__LIB_1__::func_265(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2680265.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (__LIB_1__::func_264(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(__LIB_1__::func_265(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_679(int iParam0)//Position - 0x17B53
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			return Global_262145.f_21591 /* Tunable: GR_RESEARCH_CAPACITY */;
		default:
	}
	return 0;
}

int func_680(int iParam0, int iParam1)//Position - 0x17C29
{
	var uVar0;
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (__LIB_1__::func_346(Global_1853348[iParam0 /*834*/].f_267.f_191[iParam1 /*13*/]))
	{
		uVar0 = Global_1853348[iParam0 /*834*/].f_267.f_191[iParam1 /*13*/];
	}
	return uVar0;
}

int func_681(bool bParam0)//Position - 0x90B85
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && bParam0 == PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bParam0, 1, 0))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

bool func_682(bool bParam0, bool bParam1)//Position - 0x9382D
{
	if (!bParam1)
	{
		if (__LIB_2__::func_192(bParam0))
		{
			return 0;
		}
	}
	return Global_1892703[bParam0 /*599*/].f_10 != __LIB_0__::func_160();
}

int func_683(bool bParam0)//Position - 0x940D5
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 16;
			}
		}
	}
	return 0;
}

void func_684(int iParam0, bool bParam1, var uParam2)//Position - 0xC168D
{
	int iVar0;
	int iVar1;
	Global_23150.f_6130 = iParam0;
	Global_23150.f_6265 = uParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

int func_685(var uParam0, var uParam1, char* sParam2)//Position - 0xC5E03
{
	*uParam1 = 1;
	StringCopy(sParam2, "PIM_CM_M" /* GXT: LS Car Meet */, 16);
	return __LIB_4__::func_340(PLAYER::PLAYER_ID());
}

int func_686(bool bParam0)//Position - 0x105FD9
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_4__::func_355(bParam0) && Global_2689235[bParam0 /*453*/].f_318.f_9 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_687(bool bParam0, var uParam1)//Position - 0x11093F
{
	if ((((bParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(bParam0, 0, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bParam0))) && !__LIB_4__::func_0(bParam0)) && (__LIB_4__::func_141(bParam0) || Global_2725439))
	{
		return 1;
	}
	return 0;
}

int func_688(bool bParam0)//Position - 0x111C7D
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0) && bParam0 != PLAYER::PLAYER_ID())
	{
		if (__LIB_4__::func_360(bParam0) && !__LIB_3__::func_998(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_689(int iParam0, bool bParam1, bool bParam2)//Position - 0x14836B
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Creator_Trailer");
				return __LIB_4__::func_333(iVar0, 0, bParam1, bParam2);
			}
		}
	}
	return __LIB_0__::func_160();
}

int func_690(int iParam0)//Position - 0x148477
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Creator_Trailer");
					return __LIB_4__::func_333(iVar0, 0, 1, 0);
				}
			}
		}
	}
	return __LIB_0__::func_160();
}

bool func_691(int iParam0, bool bParam1, bool bParam2)//Position - 0x160ADA
{
	int iVar0;
	if (!__LIB_1__::func_580(iParam0, 1))
	{
		return __LIB_0__::func_160();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Avenger");
		return __LIB_4__::func_333(iVar0, 0, bParam1, bParam2);
	}
	return __LIB_0__::func_160();
}

void func_692(int iParam0, int iParam1, int iParam2)//Position - 0x1653EF
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_378 = iParam0;
	__LIB_1__::func_245(35);
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 31);
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_379 = iParam1;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_380 = iParam2;
	__LIB_1__::func_245(35);
}

void func_693(int iParam0, int iParam1)//Position - 0x166AA1
{
	struct<4> Var0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0.f_0 = -1481980666;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam0;
		Var0.f_3 = iParam1;
		iVar1 = __LIB_4__::func_335(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, 0, 1);
		if (!iVar1 == 0)
		{
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
		}
	}
}

int func_694(bool bParam0)//Position - 0x18906A
{
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() != bParam0)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_695(var uParam0)//Position - 0x1B6A31
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*74*/])->f_16[iVar1]) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((uParam0[iVar0 /*74*/])->f_16[iVar1]))
			{
				PED::DELETE_PED(&((uParam0[iVar0 /*74*/])->f_16[iVar1]));
			}
			if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*74*/])->f_16.f_3[iVar1]) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((uParam0[iVar0 /*74*/])->f_16.f_3[iVar1]))
			{
				OBJECT::DELETE_OBJECT(&((uParam0[iVar0 /*74*/])->f_16.f_3[iVar1]));
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*74*/])->f_22[iVar1]) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((uParam0[iVar0 /*74*/])->f_22[iVar1]))
			{
				OBJECT::DELETE_OBJECT(&((uParam0[iVar0 /*74*/])->f_22[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

float func_696(var uParam0)//Position - 0x1C025A
{
	return (SYSTEM::VDIST(*uParam0, uParam0->f_3) * 0.5f);
}

bool func_697()//Position - 0x1C0CD9
{
	return Global_1946250.f_514;
}

bool func_698()//Position - 0x1C4D15
{
	return BitTest(Global_1946250.f_6, 12);
}

char* func_699(int iParam0)//Position - 0x1C530B
{
	if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 119:
			case 120:
			case 121:
			case 167:
			case 165:
			case 166:
			case 124:
			case 125:
			case 182:
			case 179:
			case 175:
			case 183:
				return "net_apartment_activity_LIGHT";
				break;
			}
	}
	return "net_apartment_activity";
}

int func_700(bool bParam0)//Position - 0x1C80DF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (bVar2 != PLAYER::PLAYER_ID())
			{
				if (__LIB_1__::func_264(bVar2, 1, 1))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_CONCEALED(bVar2))
					{
						MISC::SET_BIT(&iVar0, bVar2);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iVar0, PLAYER::PLAYER_ID());
			}
			iVar1++;
		}
	}
	else
	{
		MISC::SET_BIT(&iVar0, PLAYER::PLAYER_ID());
	}
	return iVar0;
}

int func_701(var uParam0, bool bParam1)//Position - 0x1C8194
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_0__::func_86(*uParam0) || __LIB_0__::func_86(uParam0->f_3))
	{
		return 1;
	}
	if (bParam1)
	{
		bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), *uParam0, uParam0->f_3, uParam0->f_6, false, true, 0);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (__LIB_1__::func_264(bVar2, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(bVar2))
			{
				if (bVar2 != PLAYER::PLAYER_ID())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(bVar2), *uParam0, uParam0->f_3, uParam0->f_6, false, true, 0))
					{
						return 0;
					}
				}
			}
			iVar1++;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_702()//Position - 0x1C824F
{
	if (((((!Global_1940653 && !(__LIB_4__::func_22(PLAYER::PLAYER_ID()) && __LIB_4__::func_415())) && !__LIB_3__::func_139(PLAYER::PLAYER_ID())) && !BitTest(Global_1946250.f_4, 2)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !Global_2667225.f_2681)
	{
		return 1;
	}
	return 0;
}

int func_703(bool bParam0)//Position - 0x1C9BC5
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != __LIB_0__::func_160())
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 20;
			}
		}
	}
	return 0;
}

int func_704()//Position - 0x1D3E8D
{
	if (__LIB_4__::func_21(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1640758))
		{
			return Global_1640758;
		}
		if (Global_1853193 != -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1963827[Global_1853193]))
			{
				return Global_1963827[Global_1853193];
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	return -1;
}

int func_705()//Position - 0x1D3EF2
{
	if (__LIB_4__::func_21(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_1853193 != __LIB_0__::func_160())
		{
			if (__LIB_4__::func_102(Global_1853193) || __LIB_4__::func_379(Global_1853193))
			{
				return 1;
			}
			if (__LIB_4__::func_374(Global_1853193))
			{
				if (__LIB_0__::func_170(__LIB_1__::func_453(Global_1853193)) == 11)
				{
					if (__LIB_0__::func_170(__LIB_4__::func_2(Global_1853193)) == 11)
					{
						if (__LIB_4__::func_85(Global_1853193) == 5)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_706()//Position - 0x1E54B7
{
	int iVar0;
	bool bVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__::func_264(bVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(bVar1))
		{
			if (bVar1 != PLAYER::PLAYER_ID())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3))
				{
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar1), true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true), true);
					if (fVar2 < 1.8f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_707()//Position - 0x1E55FF
{
	bool bVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (__LIB_1__::func_264(bVar0, 1, 1) && PLAYER::PLAYER_ID() != bVar0)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(bVar0), 1558.6707f, 386.2656f, -50.68544f, 1558.6095f, 387.88693f, -48.685486f, 2f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1558.6707f, 386.2656f, -50.68544f, 1558.6095f, 387.88693f, -48.685486f, 2f, false, true, 0)) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(bVar0), 1558.5709f, 389.84616f, -50.685677f, 1558.6495f, 387.987f, -48.685486f, 2f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1558.5709f, 389.84616f, -50.685677f, 1558.6495f, 387.987f, -48.685486f, 2f, false, true, 0)))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_708(var uParam0)//Position - 0x1E9563
{
	if (__LIB_4__::func_393(Global_1853185) && !__LIB_4__::func_425(Global_4718592.f_116524))
	{
	}
	if (__LIB_4__::func_393(Global_1853185) && !__LIB_4__::func_425(Global_4718592.f_116524))
	{
		uParam0->f_2 = "MPJAC_BSIT" /* GXT: This turret station is unavailable when the Mobile Operations Center is in the Bunker. */;
	}
	else if ((Global_1581353 == 2 && !__LIB_4__::func_504()) || (Global_1581353 == 3 && !__LIB_4__::func_503()))
	{
		if (__LIB_4__::func_427())
		{
			uParam0->f_2 = "HUNTGUN_T_1e" /* GXT: The turret is unavailable at this time. */;
		}
		else
		{
			uParam0->f_2 = "MPJAC_CSIT" /* GXT: You are unable to access this control station until the Rear Turrets have been purchased at the Vehicle Workshop inside the Bunker. */;
		}
	}
	else if (((Global_1581353 == 2 || Global_1581353 == 3) || Global_1581353 == 1) || Global_1581353 == 4)
	{
		if (__LIB_4__::func_427())
		{
			uParam0->f_2 = "HUNTGUN_T_1e" /* GXT: The turret is unavailable at this time. */;
		}
		else
		{
			uParam0->f_2 = "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */;
		}
	}
	if ((!__LIB_0__::func_1(uParam0->f_2) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "New text widget")) && __LIB_4__::func_410())
	{
		__LIB_0__::func_151(uParam0->f_2, -1);
	}
}

int func_709(bool bParam0)//Position - 0x1E9FAF
{
	if (__LIB_3__::func_929(bParam0))
	{
		return __LIB_3__::func_499(Global_2689235[bParam0 /*453*/].f_318.f_6);
	}
	return 0;
}

int func_710(int iParam0)//Position - 0xDFA
{
	switch (iParam0)
	{
		case 86:
			return 1;
			break;
	}
	return 0;
}

int func_711(int iParam0, int iParam1)//Position - 0x29C6
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 73:
			case 77:
			case 74:
			case 75:
			case 76:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
				return 1;
			default:
		}
	}
	else if (iParam1 == 77)
	{
		switch (iParam0)
		{
			case 77:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
				return 1;
			default:
		}
	}
	else if (iParam1 == 73)
	{
		switch (iParam0)
		{
			case 73:
			case 74:
			case 75:
			case 76:
				return 1;
			}
		default:
	}
	return 0;
}

int func_712(int iParam0)//Position - 0x2A82
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
			return 1;
			break;
	}
	return 0;
}

int func_713(int iParam0)//Position - 0x2AAB
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 1;
		default:
	}
	return 0;
}

int func_714(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x38C2
{
	int iVar0;
	int iVar1;
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (__LIB_1__::func_264(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (__LIB_1__::func_264(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return __LIB_0__::func_160();
}

int func_715()//Position - 0x5C38
{
	if (__LIB_0__::func_491() == 0)
	{
		return 1;
	}
	return 0;
}

int func_716(int iParam0)//Position - 0x31846
{
	if (!__LIB_0__::func_114() && func_406(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_717(int iParam0)//Position - 0x4A4A9
{
	if (__LIB_3__::func_803(iParam0) == 225)
	{
		return 1;
	}
	return 0;
}

int func_718(int iParam0, int iParam1)//Position - 0x4B415
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 24)
			{
				return Global_2689235[iParam0 /*453*/].f_318.f_6 == iParam1;
			}
		}
	}
	return 0;
}

int func_719(int iParam0)//Position - 0x4E5D8
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
				if (!iVar1 == __LIB_0__::func_160())
				{
					if (__LIB_1__::func_264(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

char* func_720(var uParam0, int iParam1)//Position - 0x4E826
{
	switch (iParam1)
	{
		case 0:
			return "PIM_FHQ_INV_D" /* GXT: Invite players to your Agency. */;
			break;
		case 1:
			return "PIM_FHQ_INV_M" /* GXT: Invite to Agency */;
			break;
		case 3:
			return "PIM_FHQ_INV_T" /* GXT: INVITE TO AGENCY */;
			break;
		case 4:
			return "PIM_INV_FHQ" /* GXT: Invite to Agency has been sent to ~a~. */;
			break;
		case 5:
			return "PIM_INV_FHQ_AS" /* GXT: Invite to Agency has been sent to all players. */;
			break;
		case 6:
			return "CELL_FHQ_SHPINV" /* GXT: Hey, come over to the Agency. */;
			break;
		case 10:
			return "FHQ_DOCKA" /* GXT: Press ~INPUT_CONTEXT~ to land and enter the Agency. */;
			break;
		case 11:
			if (__LIB_1__::func_359(__LIB_0__::func_582()))
			{
				return "FHQ_DOCKD" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your President's Agency. */;
			}
			else if (__LIB_2__::func_456(__LIB_0__::func_582()))
			{
				return "FHQ_DOCKB" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your CEO's Agency. */;
			}
			else
			{
				return "FHQ_DOCKC" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your VIP's Agency. */;
			}
			break;
	}
	return "";
}

int func_721(int iParam0)//Position - 0x5227B
{
	if (iParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(iParam0, 1, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_722(int iParam0)//Position - 0x522AC
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 23;
			}
		}
	}
	return 0;
}

void func_723(var uParam0, var uParam1)//Position - 0x5764B
{
	if (*uParam1 == 1)
	{
		__LIB_3__::func_816(PLAYER::PLAYER_ID());
	}
}

char* func_724(int iParam0)//Position - 0x596D9
{
	switch (iParam0)
	{
		case 0:
			return "BWH_ENTRM_ALONE" /* GXT: Enter alone */;
		case 1:
			if (__LIB_1__::func_359(PLAYER::PLAYER_ID()))
			{
				return "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
			}
			else
			{
				return "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
			}
			break;
		case 2:
			return "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	}
	return "UNKNOWN";
}

int func_725()//Position - 0x5ACCC
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar1 != PLAYER::PLAYER_ID() && iVar1 != __LIB_0__::func_160())
			{
				if (__LIB_1__::func_264(iVar1, 1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iVar0, false))
						{
							if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false) || Global_1574582.f_6) || __LIB_0__::func_104(1)) || TASK::GET_IS_TASK_ACTIVE(PLAYER::GET_PLAYER_PED(iVar1), 2))
							{
								return 0;
							}
						}
						else
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_265(PLAYER::PLAYER_ID()), __LIB_1__::func_265(iVar1), true) <= 125f)
							{
								if (!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iVar1))
								{
									if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::GET_PLAYER_PED(iVar1)) == iVar0)
									{
										return 0;
									}
								}
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iVar0, true) || ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::GET_PLAYER_PED(iVar1), iVar0))
							{
								return 0;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return 1;
}

int func_726(int iParam0)//Position - 0x67D09
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_727(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x6A53D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!bParam3 || iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_1__::func_527())
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_3__::func_835(iParam0, iVar2) || BitTest(uParam2, iVar0))
		{
			iVar1++;
			if (iVar1 == Global_262145.f_31798 /* Tunable: -354707836 */)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_728()//Position - 0xA4807
{
	return __LIB_1__::func_359(PLAYER::PLAYER_ID());
}

int func_729(int iParam0, var uParam1)//Position - 0xABDE4
{
	if (__LIB_1__::func_909())
	{
		return 0;
	}
	if ((iParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(iParam0, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_730(int iParam0, int iParam1)//Position - 0xAC190
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (__LIB_1__::func_424(iParam0, 9))
		{
			return __LIB_3__::func_803(iParam0) == iParam1;
		}
	}
	return 0;
}

int func_731(int iParam0)//Position - 0xADD56
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_3__::func_849(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_732(var uParam0, int iParam1)//Position - 0xD4C92
{
	switch (iParam1)
	{
		case 0:
			return "PIM_HLSMO1" /* GXT: Invite Players to your Penthouse. */;
			break;
		case 1:
			return "PIM_TLSMO1" /* GXT: Invite to Penthouse */;
			break;
		case 3:
			return "PIM_ULSMO1" /* GXT: INVITE TO PENTHOUSE */;
			break;
		case 4:
			return "PIM_INVCAS_APT" /* GXT: Invite to Penthouse has been sent to ~a~. */;
			break;
		case 5:
			return "PIM_INV_A_T_PH" /* GXT: Invite to Penthouse has been sent to all players. */;
			break;
		case 6:
			return "CELL_CASAPTINV" /* GXT: Hey, come over to the Casino Penthouse. */;
			break;
		case 10:
			return "MP_CASIN_DOCKA" /* GXT: Press ~INPUT_CONTEXT~ to land and enter Penthouse. */;
			break;
		case 11:
			if (__LIB_1__::func_359(PLAYER::PLAYER_ID()))
			{
				return "MP_CASIN_DOCKD" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your President's Penthouse. */;
			}
			else if (__LIB_2__::func_456(PLAYER::PLAYER_ID()))
			{
				return "MP_CASIN_DOCKB" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your CEO's Penthouse. */;
			}
			else
			{
				return "MP_CASIN_DOCKC" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your VIP's Penthouse. */;
			}
			break;
	}
	return "";
}

int func_733(int iParam0)//Position - 0xD6241
{
	if (__LIB_2__::func_193(iParam0))
	{
		return 1;
	}
	if (__LIB_2__::func_858(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_734(int iParam0)//Position - 0xD7358
{
	if (iParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(iParam0, 1, 1))
	{
		return BitTest(Global_1892703[iParam0 /*599*/].f_533, 0);
	}
	return 0;
}

int func_735(int iParam0)//Position - 0xE667D
{
	if (iParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 4);
	}
	return 0;
}

void func_736(int iParam0, int iParam1)//Position - 0x12A31F
{
	struct<4> Var0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0.f_0 = -1481980666;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam0;
		Var0.f_3 = iParam1;
		iVar1 = __LIB_4__::func_507(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, 0, 1);
		if (!iVar1 == 0)
		{
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
		}
	}
}

int func_737(var uParam0, bool bParam1)//Position - 0x136FBA
{
	struct<13> Var0;
	struct<13> Var1;
	int iVar2;
	if (bParam1 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 1) && !__LIB_2__::func_457(PLAYER::PLAYER_ID(), bParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) != 229)
	{
		if (__LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			return 0;
		}
	}
	Var0 = { __LIB_1__::func_267(bParam1) };
	Var1 = { __LIB_1__::func_267(PLAYER::PLAYER_ID()) };
	iVar2 = __LIB_2__::func_180(&Var1);
	if (iVar2 == -1 || iVar2 != __LIB_2__::func_180(&Var0))
	{
		if (!NETWORK::NETWORK_IS_FRIEND(&Var0))
		{
			if (!__LIB_2__::func_457(PLAYER::PLAYER_ID(), bParam1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_738(int iParam0)//Position - 0x17BB01
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 24;
			}
		}
	}
	return 0;
}

int func_739()//Position - 0x17CF4A
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		return 1;
	}
	return 0;
}

char* func_740(int iParam0)//Position - 0x17F55A
{
	char* sVar0;
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

void func_741(var uParam0, int iParam1)//Position - 0x183A5D
{
	uParam0->f_36 = iParam1;
}

void func_742(var uParam0, int iParam1)//Position - 0x183E24
{
	uParam0->f_35 = iParam1;
}

void func_743(var uParam0, int iParam1)//Position - 0x1847E3
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
}

struct<2> func_744(int iParam0)//Position - 0x189E9E
{
	struct<2> Var0;
	Var0.f_0 = (iParam0 % 32);
	Var0.f_1 = (iParam0 / 32);
	if (Var0.f_1 >= 8)
	{
		Var0.f_0 = -1;
		Var0.f_1 = -1;
	}
	return Var0;
}

void func_745(var uParam0, int iParam1)//Position - 0x18C8B0
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
}

bool func_746(var uParam0)//Position - 0x18CD0B
{
	return BitTest(*uParam0, 5);
}

void func_747(int iParam0, int iParam1)//Position - 0x18CE1F
{
	int iVar0;
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

char* func_748(int iParam0)//Position - 0x18E4E3
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		case 69:
			return "TRANSITION_STATE_SPAWN_INTO_PERSONAL_VEHICLE";
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		case 68:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		default:
	}
	return "";
}

void func_749(int iParam0)//Position - 0x18E9BA
{
	Global_23009 = iParam0;
}

bool func_750()//Position - 0x1912F1
{
	return BitTest(Global_1946250.f_2, 5);
}

int func_751(int iParam0, var uParam1, int iParam2)//Position - 0x1913B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 197 /*INPUT_FRONTEND_RIGHT_AXIS_X*/) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_752(int iParam0)//Position - 0x191543
{
	return iParam0 == 44;
}

bool func_753(int iParam0)//Position - 0x191550
{
	return iParam0 == 45;
}

int func_754(int iParam0)//Position - 0x1917ED
{
	int iVar0;
	if (Global_4718592.f_168757 == 30)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9687[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_755(int iParam0)//Position - 0x192B22
{
	int iVar0;
	if (Global_4718592.f_168757 == 25)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_756()//Position - 0x192BD1
{
	char* sVar0;
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
	{
		sVar0 = "HUD_XBXCRD";
	}
	else
	{
		sVar0 = "HUD_PS3CRD" /* GXT: Profile */;
	}
	return sVar0;
}

float func_757(float fParam0)//Position - 0x195928
{
	fParam0 = (fParam0 * (1.7777777f / GRAPHICS::GET_ASPECT_RATIO(false)));
	return fParam0;
}

int func_758(int iParam0)//Position - 0x1971D0
{
	int iVar0;
	if (Global_4718592.f_168757 == 31)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9709[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_759(int iParam0)//Position - 0x19721D
{
	int iVar0;
	if (Global_4718592.f_168757 == 85)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9511[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_760(int iParam0)//Position - 0x197623
{
	switch (__LIB_0__::func_3())
	{
		case 0:
			if (!__LIB_0__::func_743(iParam0))
			{
				if (Global_1853348[iParam0 /*834*/] == 2 || Global_1853348[iParam0 /*834*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_761(int iParam0)//Position - 0x19766C
{
	switch (__LIB_0__::func_3())
	{
		case 0:
			if (Global_1853348[iParam0 /*834*/] == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_762(bool bParam0, var uParam1, bool bParam2)//Position - 0x1977D3
{
	if (bParam0)
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}

void func_763(bool bParam0)//Position - 0x19B643
{
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	Global_1963987 = bParam0;
}

bool func_764(int iParam0)//Position - 0x1B4672
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_1574935[iVar0], iVar1);
}

void func_765(struct<3> Param0, var uParam1, var uParam2, int iParam3)//Position - 0x1B5E48
{
	float fVar0;
	if (Param0.f_1 != 0f)
	{
		*uParam2 = MISC::ATAN2(Param0.f_0, Param0.f_1);
	}
	else if (Param0.f_0 < 0f)
	{
		*uParam2 = -90f;
	}
	else
	{
		*uParam2 = 90f;
	}
	if (iParam3 == 1)
	{
		*uParam2 = (*uParam2 * -1f);
		if (*uParam2 < 0f)
		{
			*uParam2 = (*uParam2 + 360f);
		}
	}
	fVar0 = SYSTEM::SQRT(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam1 = MISC::ATAN2(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam1 = -90f;
	}
	else
	{
		*uParam1 = 90f;
	}
}

int func_766(int iParam0)//Position - 0x1B6580
{
	int iVar0;
	if (Global_4718592.f_168757 == 28)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9652[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_767()//Position - 0x1B745E
{
	return __LIB_0__::func_170(Global_1946250.f_504);
}

Vector3 func_768(int iParam0, var uParam1)//Position - 0xBE67
{
	if (iParam0 > -1 && iParam0 < 1)
	{
		return uParam1->f_6[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

Vector3 func_769(int iParam0, var uParam1)//Position - 0xBE91
{
	if (iParam0 > -1 && iParam0 < 1)
	{
		return uParam1->f_6[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

int func_770(int iParam0)//Position - 0xBFF3
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510 == 0;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 2);
}

Vector3 func_771(int iParam0)//Position - 0xF314
{
	int iVar0;
	struct<3> Var1;
	iVar0 = __LIB_1__::func_347(iParam0);
	switch (iVar0)
	{
		case 1:
			Var1 = { 1049.6f, -3196.6f, -38.5f };
			break;
		case 3:
			Var1 = { 1009.5f, -3196.6f, -38.5f };
			break;
		case 4:
			Var1 = { 1093.6f, -3196.6f, -38.5f };
			break;
		case 2:
			Var1 = { 1124.6f, -3196.6f, -38.5f };
			break;
		case 0:
			Var1 = { 1165f, -3196.6f, -38.2f };
			break;
		case 5:
			Var1 = { 938.3077f, -3196.1116f, -100f };
			break;
	}
	return Var1;
}

int func_772(int iParam0, int iParam1)//Position - 0x1237D
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 2:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 3:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 4:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 5:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 6:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 7:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 8:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 9:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 10:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 11:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 12:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 13:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 17:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 18:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 19:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 20:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 21:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 22:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 23:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 24:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 25:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 26:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 27:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 28:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 29:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 30:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 31:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 32:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 33:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 34:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 35:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 36:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 37:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 38:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 39:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 40:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 41:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 42:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 43:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 44:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 45:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 46:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 47:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 48:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 49:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 50:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 51:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 52:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 53:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 54:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 55:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 56:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 57:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 58:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 59:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 60:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 61:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 62:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 63:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 64:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 65:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 66:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 67:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 68:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 69:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 70:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 71:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 72:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 73:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 74:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 75:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 76:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 77:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 78:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 79:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 80:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 81:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 82:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 83:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 84:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 85:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 86:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 87:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 88:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 89:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 90:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 91:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 92:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 93:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 94:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 95:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 96:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 97:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 98:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 99:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 100:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 2:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 3:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 4:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 5:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 6:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 7:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 8:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 9:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 10:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 11:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 12:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 13:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 17:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 18:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 19:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 20:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 21:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 22:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 23:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 24:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 25:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 26:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 27:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 28:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 29:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 30:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 31:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 32:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 33:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 34:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 35:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 36:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 37:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 38:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 39:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 40:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 41:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 42:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 43:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 44:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 45:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 46:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 47:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 48:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 49:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 50:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 51:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 52:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 53:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 54:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 55:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 56:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 57:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 58:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 59:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 60:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 61:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 62:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 63:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 64:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 65:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 66:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 67:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 68:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 69:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 70:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 71:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 72:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 73:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 74:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 75:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 76:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 77:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 78:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 79:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 80:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 81:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 82:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 83:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 84:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 85:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 86:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 87:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 88:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 89:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 90:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 91:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 92:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 93:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 94:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 95:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 96:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 97:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 98:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 99:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 100:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 2:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 3:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 4:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 5:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 6:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 7:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 8:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 9:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 10:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 11:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 12:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 13:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 17:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 18:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 19:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 20:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 21:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 22:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 23:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 24:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 25:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 26:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 27:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 28:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 29:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 30:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 31:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 32:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 33:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 34:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 35:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 36:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 37:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 38:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 39:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 40:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 41:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 42:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 43:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 44:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 45:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 46:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 47:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 48:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 49:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 50:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 51:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 52:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 53:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 54:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 55:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 56:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 57:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 58:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 59:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 60:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 61:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 62:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 63:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 64:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 65:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 66:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 67:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 68:
					iVar0 = joaat("gr_prop_gr_crates_rifles_03a");
					break;
				case 69:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 70:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 71:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 72:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 73:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 74:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 75:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 76:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 77:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 78:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 79:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 80:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 81:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 82:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 83:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 84:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 85:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 86:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 87:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
				case 88:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 89:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 90:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 91:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 92:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				case 93:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				case 94:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 95:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 96:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				case 97:
					iVar0 = joaat("gr_prop_gr_crates_rifles_02a");
					break;
				case 98:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 99:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				case 100:
					iVar0 = joaat("gr_prop_gr_crates_rifles_04a");
					break;
			}
			break;
	}
	return iVar0;
}

Vector3 func_773(int iParam0, int iParam1)//Position - 0x1367E
{
	struct<3> Var0;
	int iVar1;
	Var0 = { 0f, 0f, 0f };
	iVar1 = __LIB_1__::func_347(iParam0);
	switch (iVar1)
	{
		case 1:
			switch (iParam1)
			{
				case 17:
					Var0 = { 0f, 0f, 90f };
					break;
				case 18:
					Var0 = { 0f, 0f, 90f };
					break;
				case 19:
					Var0 = { 0f, 0f, 90f };
					break;
				case 20:
					Var0 = { 0f, 0f, 90f };
					break;
				case 21:
					Var0 = { 0f, 0f, 90f };
					break;
				case 22:
					Var0 = { 0f, 0f, 90f };
					break;
				case 23:
					Var0 = { 0f, 0f, 90f };
					break;
				case 24:
					Var0 = { 0f, 0f, 90f };
					break;
				case 25:
					Var0 = { 0f, 0f, 55f };
					break;
				case 26:
					Var0 = { 0f, 0f, 55f };
					break;
				case 27:
					Var0 = { 0f, 0f, 55f };
					break;
				case 28:
					Var0 = { 0f, 0f, 55f };
					break;
				case 29:
					Var0 = { 0f, 0f, 55f };
					break;
				case 30:
					Var0 = { 0f, 0f, 55f };
					break;
				case 31:
					Var0 = { 0f, 0f, 55f };
					break;
				case 32:
					Var0 = { 0f, 0f, 55f };
					break;
				case 41:
					Var0 = { 0f, 0f, 90f };
					break;
				case 42:
					Var0 = { 0f, 0f, 90f };
					break;
				case 43:
					Var0 = { 0f, 0f, 90f };
					break;
				case 44:
					Var0 = { 0f, 0f, 90f };
					break;
				case 45:
					Var0 = { 0f, 0f, 90f };
					break;
				case 46:
					Var0 = { 0f, 0f, 90f };
					break;
				case 47:
					Var0 = { 0f, 0f, 90f };
					break;
				case 48:
					Var0 = { 0f, 0f, 90f };
					break;
				case 49:
					Var0 = { 0f, 0f, -60f };
					break;
				case 50:
					Var0 = { 0f, 0f, -60f };
					break;
				case 51:
					Var0 = { 0f, 0f, -60f };
					break;
				case 52:
					Var0 = { 0f, 0f, -60f };
					break;
				case 53:
					Var0 = { 0f, 0f, -60f };
					break;
				case 54:
					Var0 = { 0f, 0f, -60f };
					break;
				case 55:
					Var0 = { 0f, 0f, -60f };
					break;
				case 56:
					Var0 = { 0f, 0f, -60f };
					break;
				case 65:
					Var0 = { 0f, 0f, 90f };
					break;
				case 66:
					Var0 = { 0f, 0f, 90f };
					break;
				case 67:
					Var0 = { 0f, 0f, 90f };
					break;
				case 68:
					Var0 = { 0f, 0f, 90f };
					break;
				case 69:
					Var0 = { 0f, 0f, 90f };
					break;
				case 70:
					Var0 = { 0f, 0f, 90f };
					break;
				case 71:
					Var0 = { 0f, 0f, 90f };
					break;
				case 72:
					Var0 = { 0f, 0f, 90f };
					break;
				case 73:
					Var0 = { 0f, 0f, 110f };
					break;
				case 74:
					Var0 = { 0f, 0f, 110f };
					break;
				case 75:
					Var0 = { 0f, 0f, 110f };
					break;
				case 76:
					Var0 = { 0f, 0f, 110f };
					break;
				case 77:
					Var0 = { 0f, 0f, 110f };
					break;
				case 78:
					Var0 = { 0f, 0f, 110f };
					break;
				case 79:
					Var0 = { 0f, 0f, 110f };
					break;
				case 80:
					Var0 = { 0f, 0f, 110f };
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 1:
					Var0 = { 0f, 0f, 10f };
					break;
				case 2:
					Var0 = { 0f, 0f, -15f };
					break;
				case 3:
					Var0 = { 0f, 0f, 96f };
					break;
				case 4:
					Var0 = { 0f, 0f, -8f };
					break;
				case 5:
					Var0 = { 0f, 0f, 8f };
					break;
				case 6:
					Var0 = { 0f, 0f, -5f };
					break;
				case 7:
					Var0 = { 0f, 0f, 15f };
					break;
				case 8:
					Var0 = { 0f, 0f, 0f };
					break;
				case 9:
					Var0 = { 0f, 0f, -100f };
					break;
				case 10:
					Var0 = { 0f, 0f, -67f };
					break;
				case 11:
					Var0 = { 0f, 0f, 0f };
					break;
				case 12:
					Var0 = { 0f, 0f, -20f };
					break;
				case 13:
					Var0 = { 0f, 0f, 80f };
					break;
				case 14:
					Var0 = { 0f, 0f, 12f };
					break;
				case 15:
					Var0 = { 0f, 0f, -30f };
					break;
				case 16:
					Var0 = { 0f, 0f, 100f };
					break;
				case 17:
					Var0 = { 0f, 0f, 15f };
					break;
				case 18:
					Var0 = { 0f, 0f, -5f };
					break;
				case 19:
					Var0 = { 0f, 0f, 5f };
					break;
				case 20:
					Var0 = { 0f, 0f, 75f };
					break;
				case 21:
					Var0 = { 0f, 0f, 90f };
					break;
				case 22:
					Var0 = { 0f, 0f, 99f };
					break;
				case 23:
					Var0 = { 0f, 0f, -95f };
					break;
				case 24:
					Var0 = { 0f, 0f, 12f };
					break;
				case 25:
					Var0 = { 0f, 0f, 6f };
					break;
				case 26:
					Var0 = { 0f, 0f, 0f };
					break;
				case 27:
					Var0 = { 0f, 0f, 5f };
					break;
				case 28:
					Var0 = { 0f, 0f, -10f };
					break;
				case 29:
					Var0 = { 0f, 0f, 5f };
					break;
				case 30:
					Var0 = { 0f, 0f, 98f };
					break;
				case 31:
					Var0 = { 0f, 0f, 82f };
					break;
				case 32:
					Var0 = { 0f, 0f, -7f };
					break;
				case 33:
					Var0 = { 0f, 0f, 7f };
					break;
				case 34:
					Var0 = { 0f, 0f, -5f };
					break;
				case 35:
					Var0 = { 0f, 0f, 10f };
					break;
				case 36:
					Var0 = { 0f, 0f, 15f };
					break;
				case 37:
					Var0 = { 0f, 0f, -2f };
					break;
				case 38:
					Var0 = { 0f, 0f, -80f };
					break;
				case 39:
					Var0 = { 0f, 0f, -10f };
					break;
				case 40:
					Var0 = { 0f, 0f, -90f };
					break;
				case 41:
					Var0 = { 0f, 0f, 90f };
					break;
				case 42:
					Var0 = { 0f, 0f, 100f };
					break;
				case 43:
					Var0 = { 0f, 0f, -12f };
					break;
				case 44:
					Var0 = { 0f, 0f, 3f };
					break;
				case 45:
					Var0 = { 0f, 0f, 100f };
					break;
				case 46:
					Var0 = { 0f, 0f, 0f };
					break;
				case 47:
					Var0 = { 0f, 0f, 86f };
					break;
				case 48:
					Var0 = { 0f, 0f, -10f };
					break;
				case 49:
					Var0 = { 0f, 0f, 96f };
					break;
				case 50:
					Var0 = { 0f, 0f, -10f };
					break;
				case 51:
					Var0 = { 0f, 0f, 96f };
					break;
				case 52:
					Var0 = { 0f, 0f, 79f };
					break;
				case 53:
					Var0 = { 0f, 0f, 90f };
					break;
				case 54:
					Var0 = { 0f, 0f, 20f };
					break;
				case 55:
					Var0 = { 0f, 0f, 100f };
					break;
				case 56:
					Var0 = { 0f, 0f, 85f };
					break;
				case 57:
					Var0 = { 0f, 0f, -30f };
					break;
				case 58:
					Var0 = { 0f, 0f, -5f };
					break;
				case 59:
					Var0 = { 0f, 0f, -96f };
					break;
				case 60:
					Var0 = { 0f, 0f, 5f };
					break;
			}
			break;
		case 2:
			if (iParam1 < 11)
			{
				Var0 = { 0f, 0f, -30.15f };
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					Var0 = { 0f, 0f, -88.915f };
					break;
				case 2:
					Var0 = { 0f, 0f, -88.765f };
					break;
				case 3:
					Var0 = { 0f, 0f, -89.84f };
					break;
				case 4:
					Var0 = { 0f, 0f, -90.24f };
					break;
				case 6:
					Var0 = { 0f, 0f, -88.915f };
					break;
				case 5:
					Var0 = { 0f, 0f, -88.765f };
					break;
				case 7:
					Var0 = { 0f, 0f, -89.84f };
					break;
				case 8:
					Var0 = { 0f, 0f, -90.24f };
					break;
				case 9:
					Var0 = { 0f, 0f, -88.915f };
					break;
				case 10:
					Var0 = { 0f, 0f, -88.765f };
					break;
				case 11:
					Var0 = { 0f, 0f, -89.84f };
					break;
				case 12:
					Var0 = { 0f, 0f, -90.24f };
					break;
				case 13:
					Var0 = { 0f, 0f, -88.915f };
					break;
				case 14:
					Var0 = { 0f, 0f, -88.765f };
					break;
				case 15:
					Var0 = { 0f, 0f, -89.84f };
					break;
				case 16:
					Var0 = { 0f, 0f, -90.24f };
					break;
				case 17:
					Var0 = { 0f, 0f, -88.915f };
					break;
				case 18:
					Var0 = { 0f, 0f, -88.765f };
					break;
				case 19:
					Var0 = { 0f, 0f, -89.84f };
					break;
				case 20:
					Var0 = { 0f, 0f, -90.24f };
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					Var0 = { 0f, 0f, -165.23f };
					break;
				case 2:
					Var0 = { 0f, 0f, -0.55f };
					break;
				case 3:
					Var0 = { 0f, 0f, -71.98f };
					break;
				case 4:
					Var0 = { 0f, 0f, 33.04f };
					break;
				case 5:
					Var0 = { 0f, 0f, 17.47f };
					break;
				case 6:
					Var0 = { 0f, 0f, -161.84f };
					break;
				case 7:
					Var0 = { 0f, 0f, 29.72f };
					break;
				case 8:
					Var0 = { 0f, 0f, -85.22f };
					break;
				case 9:
					Var0 = { 0f, 0f, -90.65f };
					break;
				case 10:
					Var0 = { 0f, 0f, -90.65f };
					break;
				case 11:
					Var0 = { 0f, 0f, -90.65f };
					break;
				case 12:
					Var0 = { 0f, 0f, 94.79f };
					break;
				case 13:
					Var0 = { 0f, 0f, 94.79f };
					break;
				case 14:
					Var0 = { 0f, 0f, 94.79f };
					break;
				case 15:
					Var0 = { 0f, 0f, -88.18f };
					break;
				case 16:
					Var0 = { 0f, 0f, -1f };
					break;
				case 17:
					Var0 = { 0f, 0f, -88.18f };
					break;
				case 18:
					Var0 = { 0f, 0f, -88.18f };
					break;
				case 19:
					Var0 = { 0f, 0f, 93.98f };
					break;
				case 20:
					Var0 = { 0f, 0f, -176.23f };
					break;
				case 21:
					Var0 = { 0f, 0f, 89.75f };
					break;
				case 22:
					Var0 = { 0f, 0f, -85.64f };
					break;
				case 23:
					Var0 = { 0f, 0f, 95.95f };
					break;
				case 24:
					Var0 = { 0f, 0f, 91.73f };
					break;
				case 25:
					Var0 = { 0f, 0f, 90.42f };
					break;
				case 26:
					Var0 = { 0f, 0f, -88.37f };
					break;
				case 27:
					Var0 = { 0f, 0f, -92.77f };
					break;
				case 28:
					Var0 = { 0f, 0f, -80.9f };
					break;
				case 29:
					Var0 = { 0f, 0f, 180f };
					break;
				case 30:
					Var0 = { 0f, 0f, 180f };
					break;
				case 31:
					Var0 = { 0f, 0f, 180f };
					break;
				case 32:
					Var0 = { 0f, 0f, 92.2f };
					break;
				case 33:
					Var0 = { 0f, 0f, -90.71f };
					break;
				case 34:
					Var0 = { 0f, 0f, -83.17f };
					break;
				case 35:
					Var0 = { 0f, 0f, 106.93f };
					break;
				case 36:
					Var0 = { 0f, 0f, 11.61f };
					break;
				case 37:
					Var0 = { 0f, 0f, -172.53f };
					break;
				case 38:
					Var0 = { 0f, 0f, -4.33f };
					break;
				case 39:
					Var0 = { 0f, 0f, 87.49f };
					break;
				case 40:
					Var0 = { 0f, 0f, 92.2f };
					break;
				case 41:
					Var0 = { 0f, 0f, 97.83f };
					break;
				case 42:
					Var0 = { 0f, 0f, 98.42f };
					break;
				case 43:
					Var0 = { 0f, 0f, -120.86f };
					break;
				case 44:
					Var0 = { 0f, 0f, -96.87f };
					break;
				case 45:
					Var0 = { 0f, 0f, 91.26f };
					break;
				case 46:
					Var0 = { 0f, 0f, 7.01f };
					break;
				case 47:
					Var0 = { 0f, 0f, 97.83f };
					break;
				case 48:
					Var0 = { 0f, 0f, -96.87f };
					break;
				case 49:
					Var0 = { 0f, 0f, 91.26f };
					break;
				case 50:
					Var0 = { 0f, 0f, 94.95f };
					break;
				case 51:
					Var0 = { 0f, 0f, 180f };
					break;
				case 52:
					Var0 = { 0f, 0f, -82.21f };
					break;
				case 53:
					Var0 = { 0f, 0f, -88.69f };
					break;
				case 54:
					Var0 = { 0f, 0f, 5.15f };
					break;
				case 55:
					Var0 = { 0f, 0f, -0.29f };
					break;
				case 56:
					Var0 = { 0f, 0f, -0.29f };
					break;
				case 57:
					Var0 = { 0f, 0f, -0.29f };
					break;
				case 58:
					Var0 = { 0f, 0f, 1.85f };
					break;
				case 59:
					Var0 = { 0f, 0f, 16.09f };
					break;
				case 60:
					Var0 = { 0f, 0f, 89.75f };
					break;
				case 61:
					Var0 = { 0f, 0f, 93.98f };
					break;
				case 62:
					Var0 = { 0f, 0f, -172.53f };
					break;
				case 63:
					Var0 = { 0f, 0f, -172.53f };
					break;
				case 64:
					Var0 = { 0f, 0f, -85.64f };
					break;
				case 65:
					Var0 = { 0f, 0f, -176.23f };
					break;
				case 66:
					Var0 = { 0f, 0f, 90.42f };
					break;
				case 67:
					Var0 = { 0f, 0f, 95.95f };
					break;
				case 68:
					Var0 = { 0f, 0f, 91.73f };
					break;
				case 69:
					Var0 = { 0f, 0f, -88.37f };
					break;
				case 70:
					Var0 = { 0f, 0f, -92.77f };
					break;
				case 71:
					Var0 = { 0f, 0f, -80.9f };
					break;
				case 72:
					Var0 = { 0f, 0f, 180f };
					break;
				case 73:
					Var0 = { 0f, 0f, -174.68f };
					break;
				case 74:
					Var0 = { 0f, 0f, 90f };
					break;
				case 75:
					Var0 = { 0f, 0f, 151.33f };
					break;
				case 76:
					Var0 = { 0f, 0f, 93.19f };
					break;
				case 77:
					Var0 = { 0f, 0f, -167.71f };
					break;
				case 78:
					Var0 = { 0f, 0f, 93.19f };
					break;
				case 79:
					Var0 = { 0f, 0f, -179.58f };
					break;
				case 80:
					Var0 = { 0f, 0f, 93.19f };
					break;
				case 81:
					Var0 = { 0f, 0f, 16.6f };
					break;
				case 82:
					Var0 = { 0f, 0f, 4.35f };
					break;
				case 83:
					Var0 = { 0f, 0f, -174.97f };
					break;
				case 84:
					Var0 = { 0f, 0f, 6.25f };
					break;
				case 85:
					Var0 = { 0f, 0f, 92.58f };
					break;
				case 86:
					Var0 = { 0f, 0f, 84.78f };
					break;
				case 87:
					Var0 = { 0f, 0f, -84.38f };
					break;
				case 88:
					Var0 = { 0f, 0f, 99.81f };
					break;
				case 89:
					Var0 = { 0f, 0f, 90.24f };
					break;
				case 90:
					Var0 = { 0f, 0f, 102.12f };
					break;
				case 91:
					Var0 = { 0f, 0f, -82.81f };
					break;
				case 92:
					Var0 = { 0f, 0f, -163.81f };
					break;
				case 93:
					Var0 = { 0f, 0f, -82.81f };
					break;
				case 94:
					Var0 = { 0f, 0f, -163.89f };
					break;
				case 95:
					Var0 = { 0f, 0f, -176.23f };
					break;
				case 96:
					Var0 = { 0f, 0f, 0f };
					break;
				case 97:
					Var0 = { 0f, 0f, 120f };
					break;
				case 98:
					Var0 = { 0f, 0f, 90f };
					break;
				case 99:
					Var0 = { 0f, 0f, 40f };
					break;
				case 100:
					Var0 = { 0f, 0f, 0f };
					break;
			}
			break;
	}
	if (iVar1 == 0)
	{
		Var0 = { Var0 - Vector(-180f, 0f, 0f) };
	}
	return Var0;
}

bool func_774()//Position - 0x150AE
{
	return Global_1946250.f_511;
}

bool func_775()//Position - 0x15508
{
	return Global_1946250.f_508;
}

void func_776()//Position - 0x1560C
{
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
}

int func_777(bool bParam0)//Position - 0x5C16F
{
	int iVar0;
	iVar0 = __LIB_3__::func_803(bParam0);
	switch (iVar0)
	{
		case 167:
		case 168:
		case 190:
		case 178:
		case 263:
		case 264:
		case 295:
		case 294:
		case 293:
			return 1;
			break;
	}
	return 0;
}

int func_778(bool bParam0, bool bParam1)//Position - 0xB65D7
{
	if (bParam1 != __LIB_0__::func_160())
	{
		if (Global_1892703[bParam0 /*599*/].f_10.f_26 != __LIB_0__::func_160())
		{
			return bParam1 == Global_1892703[bParam0 /*599*/].f_10.f_26;
		}
	}
	return 0;
}

char* func_779(int iParam0, int iParam1)//Position - 0x17AC0B
{
	switch (iParam1)
	{
		case 0:
			return "PIM_HINVPBWH" /* GXT: Invite MC members to your Business. */;
			break;
		case 1:
			return "PIM_INVBWH" /* GXT: Invite to Business */;
			break;
		case 3:
			return "PIM_TITLEBWH" /* GXT: INVITE TO BUSINESS */;
			break;
		case 4:
			return "PIM_INVABWH" /* GXT: Invite to Business has been sent to ~a~. */;
			break;
		case 5:
			return "";
			break;
		case 6:
			switch (__LIB_1__::func_347(__LIB_3__::func_499(iParam0)))
			{
				case 3:
					return "CELL_BWHINV_1" /* GXT: Hey, come over to the Meth Lab. */;
					break;
				case 4:
					return "CELL_BWHINV_3" /* GXT: Hey, come over to the Cocaine Lockup. */;
					break;
				case 1:
					return "CELL_BWHINV_2" /* GXT: Hey, come over to the Weed Farm. */;
					break;
				case 0:
					return "CELL_BWHINV_5" /* GXT: Hey, come over to the Document Forgery Office. */;
					break;
				case 2:
					return "CELL_BWHINV_4" /* GXT: Hey, come over to the Counterfeit Cash Factory. */;
					break;
			}
			break;
	}
	return "";
}

void func_780(var uParam0)//Position - 0x1910FA
{
	switch (uParam0->f_1)
	{
		case 0:
			uParam0->f_1 = 1;
			break;
		case 1:
			uParam0->f_1 = 2;
			break;
	}
}

void func_781(var uParam0)//Position - 0x1912E5
{
	switch (uParam0->f_1)
	{
		case 1:
			uParam0->f_1 = 0;
			break;
		case 2:
			uParam0->f_1 = 1;
			break;
	}
}

char* func_782(int iParam0)//Position - 0x1913D0
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a_weapon";
			break;
		case 1:
			sVar0 = "idle_b_weapon";
			break;
		case 2:
			sVar0 = "idle_c_weapon";
			break;
		case 3:
			sVar0 = "idle_d_weapon";
			break;
		case 4:
			sVar0 = "idle_e_weapon";
			break;
	}
	return sVar0;
}

char* func_783(int iParam0)//Position - 0x191431
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a_glass";
			break;
		case 1:
			sVar0 = "idle_b_glass";
			break;
		case 2:
			sVar0 = "idle_c_glass";
			break;
		case 3:
			sVar0 = "idle_d_glass";
			break;
		case 4:
			sVar0 = "idle_e_glass";
			break;
	}
	return sVar0;
}

char* func_784(int iParam0)//Position - 0x191492
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a_cigar";
			break;
		case 1:
			sVar0 = "idle_b_cigar";
			break;
		case 2:
			sVar0 = "idle_c_cigar";
			break;
		case 3:
			sVar0 = "idle_d_cigar";
			break;
		case 4:
			sVar0 = "idle_e_cigar";
			break;
	}
	return sVar0;
}

char* func_785(int iParam0)//Position - 0x1914F3
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a_CHAIR";
			break;
		case 1:
			sVar0 = "idle_b_CHAIR";
			break;
		case 2:
			sVar0 = "idle_c_CHAIR";
			break;
		case 3:
			sVar0 = "idle_d_CHAIR";
			break;
		case 4:
			sVar0 = "idle_e_CHAIR";
			break;
	}
	return sVar0;
}

char* func_786(int iParam0, bool bParam1)//Position - 0x191995
{
	char* sVar0;
	sVar0 = "";
	if (bParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@";
				break;
			case 1:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@";
				break;
			case 2:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@";
				break;
			case 3:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@";
				break;
			case 1:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@";
				break;
			case 2:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@";
				break;
			case 3:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@";
				break;
			}
	}
	return sVar0;
}

int func_787()//Position - 0x191A3B
{
	if (((((((((((((((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_A", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "BASE", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "BASE", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "BASE", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "BASE", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "BASE", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "BASE", 3))
	{
		return 1;
	}
	return 0;
}

bool func_788(var uParam0)//Position - 0x191C9D
{
	return uParam0->f_329;
}

int func_789(var uParam0, var uParam1, int iParam2)//Position - 0x1936D6
{
	if ((uParam0[iParam2 /*21*/])->f_2 == 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_5))
		{
			if (__LIB_0__::func_682((uParam0[iParam2 /*21*/])->f_5))
			{
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT((uParam0[iParam2 /*21*/])->f_5), false, false);
			}
			else if (!__LIB_0__::func_682((uParam0[iParam2 /*21*/])->f_7))
			{
			}
		}
	}
	if ((uParam0[iParam2 /*21*/])->f_3 == 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_7) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_8))
		{
			if (__LIB_0__::func_682((uParam0[iParam2 /*21*/])->f_7) && __LIB_0__::func_682((uParam0[iParam2 /*21*/])->f_8))
			{
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT((uParam0[iParam2 /*21*/])->f_7), false, false);
			}
			else
			{
				if (!__LIB_0__::func_682((uParam0[iParam2 /*21*/])->f_8))
				{
				}
				if (!__LIB_0__::func_682((uParam0[iParam2 /*21*/])->f_7))
				{
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_8))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT((uParam0[iParam2 /*21*/])->f_8)))
		{
			(uParam0[uParam1->f_277 /*21*/])->f_4 = 1;
		}
	}
	if ((uParam0[iParam2 /*21*/])->f_3 && (uParam0[iParam2 /*21*/])->f_2)
	{
		if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_5) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_7)) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_8))
		{
			return 1;
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_5))
		{
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_7))
		{
		}
		if (!__LIB_0__::func_682((uParam0[iParam2 /*21*/])->f_8))
		{
		}
		return 0;
	}
	if ((uParam0[iParam2 /*21*/])->f_3 && !(uParam0[iParam2 /*21*/])->f_2)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_7) || !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_8))
		{
		}
		else
		{
			return 1;
		}
		return 0;
	}
	if (!(uParam0[iParam2 /*21*/])->f_3 && (uParam0[iParam2 /*21*/])->f_2)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iParam2 /*21*/])->f_5))
		{
		}
		else
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_790(int iParam0)//Position - 0x1938D9
{
	if (__LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
	{
		if (iParam0 > -1 && iParam0 < 6)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_630(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, -1))
	{
		if (iParam0 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_791(int iParam0)//Position - 0x19399A
{
	if (__LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
	{
		if (iParam0 == 7)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_630(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, -1))
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_792()//Position - 0x193A4B
{
	return Global_262145.f_15465 /* Tunable: EXEC_VIP2_KICK_GRIEFER_FROM_ORG_TIME */;
}

int func_793()//Position - 0x193A78
{
	return Global_262145.f_12838 /* Tunable: GB_NUMBER_OF_BOSSES_IN_SESSION */;
}

int func_794()//Position - 0x193A87
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (__LIB_2__::func_192(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_795(var uParam0, int iParam1)//Position - 0x193D88
{
	if (uParam0->f_329 != iParam1)
	{
		uParam0->f_329 = iParam1;
	}
}

int func_796()//Position - 0x1941B2
{
	if (((__LIB_0__::func_661() || Global_77117) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("appArcadeBusinessHub")) > 0) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("appFixerSecurity")) > 0)
	{
		return 1;
	}
	return 0;
}

char* func_797(int iParam0, int iParam1)//Position - 0x1944AB
{
	char* sVar0;
	sVar0 = "";
	if (__LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
	{
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_A@BASE@";
					break;
				case 1:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_B@BASE@";
					break;
				case 2:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_C@BASE@";
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_A@BASE@";
					break;
				case 1:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_B@BASE@";
					break;
				case 2:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_C@BASE@";
					break;
				}
		}
	}
	else if (__LIB_0__::func_630(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, -1))
	{
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_A@BASE@";
					break;
				case 1:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_B@BASE@";
					break;
				case 2:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_C@BASE@";
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_A@BASE@";
					break;
				case 1:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_B@BASE@";
					break;
				case 2:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_C@BASE@";
					break;
				}
			}
	}
	return sVar0;
}

struct<6> func_798(int iParam0, bool bParam1)//Position - 0x194723
{
	struct<6> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 2727.2305f, -377.1239f, -48.4f };
			break;
		case 1:
			Var0 = { 2719.1748f, -363.1642f, -54.5868f };
			break;
		case 2:
			if (bParam1)
			{
				Var0 = { 2702.5571f, -368.7455f, -55.7809f };
			}
			else
			{
				Var0 = { 2702.5532f, -370.4459f, -55.7809f };
			}
			break;
	}
	return Var0;
}

void func_799(var uParam0, var uParam1)//Position - 0x1947B2
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		uParam0->f_3[iVar0 /*21*/] = (*uParam1)[iVar0 /*21*/];
		iVar0++;
	}
}

int func_800(int iParam0)//Position - 0x196E98
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		default:
	}
	return 0;
}

int func_801(bool bParam0)//Position - 0x19724B
{
	if (bParam0 == __LIB_0__::func_160())
	{
		return -1;
	}
	return Global_1892703[bParam0 /*599*/].f_10.f_8[1];
}

int func_802(bool bParam0)//Position - 0x197270
{
	if (bParam0 == __LIB_0__::func_160())
	{
		return -1;
	}
	return Global_1892703[bParam0 /*599*/].f_10.f_8[0];
}

bool func_803(int iParam0)//Position - 0x197EED
{
	return Global_1853348[iParam0 /*834*/].f_267.f_336 != 0;
}

int func_804(int iParam0)//Position - 0x1980AE
{
	switch (iParam0)
	{
		case 294:
			return 1;
		default:
	}
	return 0;
}

int func_805()//Position - 0x1980C8
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (((((((((((((((((((__LIB_0__::func_1("WHOUSEINPUTTRPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this desktop computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("MP_OFF_LAP_PC" /* GXT: Register as SecuroServ CEO to gain access to this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_MIS" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("SECINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_BDY" /* GXT: This computer is unavailable when working as an Associate. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFFLAPTOPPC" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. ~n~Press ~INPUT_FRONTEND_ACCEPT~ to use the laptop. */)) || __LIB_0__::func_1("CLBHINPUTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to securely access the Open Road website. Business gameplay is only available in Public Sessions. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("ORINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to found a Motorcycle Club and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CH_PC" /* GXT: This computer is unavailable when working for an MC President. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CHV_PC" /* GXT: This computer is unavailable when working as a Bodyguard for a VIP. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("IEAPPINPUTTRPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this laptop computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("AHAPRVSESINPTPC" /* GXT: Join a public session to access the Ad-Hawk Autos network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_PC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_PC_BM" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_PC_TOU" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("BSS_CHR_NODJ_PC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPINPUTSET" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_X~ to manage arcade games. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MCTAPTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Master Control Terminal. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("FHQ_PC_TRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to login to the Agency Network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
		{
			return 1;
		}
	}
	else if (((((((((((((((((((__LIB_0__::func_1("WHOUSEINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this desktop computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */) || __LIB_0__::func_1("MP_OFF_LAP_1" /* GXT: Register as SecuroServ CEO to gain access to this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_MIS" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("SECINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_BDY" /* GXT: This computer is unavailable when working as an Associate. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFFLAPTOP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. ~n~Press ~INPUT_FRONTEND_ACCEPT~ to use the laptop. */)) || __LIB_0__::func_1("CLBHINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to securely access the Open Road website. Business gameplay is only available in Public Sessions. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ORINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to found a Motorcycle Club and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CH" /* GXT: This computer is unavailable when working for an MC President. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CHV" /* GXT: This computer is unavailable when working as a Bodyguard for a VIP. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("IEAPPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this laptop computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("AHAPRIVSESINPUT" /* GXT: Join a public session to access the Ad-Hawk Autos network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_BM" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_TOU" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("BSS_CHR_NODJ" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_X~ to manage arcade games. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MCTAPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Master Control Terminal. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPTRIGNOSET" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("FHQ_PC_TRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to login to the Agency Network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
	{
		return 1;
	}
	return 0;
}

int func_806(var uParam0)//Position - 0x198336
{
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "computer_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "computer_enter", 3))
	{
		return 1;
	}
	return 0;
}

int func_807(var uParam0)//Position - 0x198382
{
	int iVar0;
	switch (uParam0->f_1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
		case 2:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_808(var uParam0, bool bParam1)//Position - 0x1983B3
{
	int iVar0;
	if (bParam1)
	{
		switch (uParam0->f_1)
		{
			case 1:
				iVar0 = 10;
				break;
			case 2:
				iVar0 = 9;
				break;
		}
	}
	else
	{
		switch (uParam0->f_1)
		{
			case 0:
				iVar0 = 9;
				break;
			case 1:
				iVar0 = 10;
				break;
			}
	}
	return iVar0;
}

int func_809(var uParam0)//Position - 0x1988AB
{
	int iVar0;
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_810()//Position - 0x199BC7
{
	if (((((((((((((((((((((((((((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "EXIT", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "ENTER", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "BASE", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "EXIT", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "ENTER", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "BASE", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "EXIT", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "ENTER", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "BASE", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "EXIT", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "ENTER", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "BASE", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "EXIT", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "ENTER", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "BASE", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "EXIT", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "ENTER", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_B", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_C", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "BASE", 3))
	{
		return 1;
	}
	return 0;
}

struct<2> func_811(int iParam0)//Position - 0x19A429
{
	return Global_1892703[iParam0 /*599*/].f_10.f_194;
}

bool func_812(int iParam0)//Position - 0x19A440
{
	return __LIB_1__::func_347(iParam0) == 5;
}

int func_813(int iParam0, int iParam1)//Position - 0x19A450
{
	int iVar0;
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_346(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_4;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_814(int iParam0, int iParam1)//Position - 0x19A566
{
	int iVar0;
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_346(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_815(int iParam0)//Position - 0x19A6EE
{
	return (iParam0 >= 0 && iParam0 < 6);
}

int func_816(int iParam0)//Position - 0x19A7E2
{
	int iVar0;
	if (__LIB_1__::func_346(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_191[iVar0 /*13*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_817(int iParam0)//Position - 0x19B392
{
	if (iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_818(bool bParam0)//Position - 0x1C2E96
{
	int iVar0;
	iVar0 = bParam0;
	if ((__LIB_0__::func_175() && Global_1853348[iVar0 /*834*/].f_804) && !__LIB_0__::func_86(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return __LIB_1__::func_265(bParam0);
}

void func_819(var uParam0)//Position - 0x1CB4BE
{
	__LIB_1__::func_140(uParam0);
	uParam0->f_103 = 0;
	uParam0->f_104 = 0;
	uParam0->f_105 = 0;
	StringCopy(&(uParam0->f_106), "", 64);
	StringCopy(&(uParam0->f_122), "", 64);
	uParam0->f_138 = 0;
	uParam0->f_139 = 0;
	uParam0->f_140 = 0;
	uParam0->f_141 = 0;
}

int func_820(int iParam0)//Position - 0x1DA96E
{
	int iVar0;
	if (iParam0 != __LIB_0__::func_160())
	{
		iVar0 = __LIB_4__::func_105(iParam0);
		if (iVar0 != 0)
		{
			return __LIB_1__::func_231(iVar0);
		}
	}
	return -1;
}

int func_821(int iParam0)//Position - 0x1E03B4
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iParam0), "anim@amb@warehouse@laptop@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iParam0), "anim@amb@warehouse@laptop@", "idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iParam0), "anim@amb@warehouse@laptop@", "idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iParam0), "anim@amb@warehouse@laptop@", "idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iParam0), "anim@amb@warehouse@laptop@", "idle_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iParam0), "anim@amb@warehouse@laptop@", "exit", 3))
		{
			return 1;
		}
	}
	return 0;
}

bool func_822(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0x1E08B1
{
	struct<3> Var0;
	float fVar1;
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(0f, 0f, 0f, fParam1, 0f, 1f, 0f) };
	fVar1 = __LIB_0__::func_156(__LIB_0__::func_79(Var0), __LIB_0__::func_79(Param2 - Param0));
	return MISC::ACOS(fVar1) <= fParam3;
}

int func_823()//Position - 0x1E20EA
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_1__::func_104(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_824()//Position - 0x1E21D6
{
	return joaat("xm_prop_x17_xmas_tree_int");
}

void func_825(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x1E21E3
{
	switch (iParam0)
	{
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 899.65f, -3204.45f, -97.93f };
					*uParam2 = -77.76f;
					break;
			}
			break;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -1238.27f, -3005.65f, -43.65f };
					*uParam2 = -129f;
					break;
			}
			break;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 370.18f, 4841.75f, -59.75f };
					*uParam2 = 94.32f;
					break;
			}
			break;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 2734.454f, -387.5833f, -49.1436f };
					*uParam2 = -21.1f;
					break;
			}
			break;
	}
}

void func_826(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1E2EBE
{
	struct<7> Var0;
	Var0.f_0 = 360408846;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iParam1);
	}
}

var func_827()//Position - 0x1E2F08
{
	return Global_2815059.f_5195.f_346;
}

var func_828()//Position - 0x1E2F1A
{
	return Global_2815059.f_5195.f_345;
}

var func_829()//Position - 0x1E2F2C
{
	return Global_2815059.f_5195.f_344;
}

void func_830(int iParam0)//Position - 0x1E2F3E
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_32 = iParam0;
}

void func_831(int iParam0)//Position - 0x1E2F7A
{
	if (Global_2815059.f_5195.f_344 != iParam0)
	{
		Global_2815059.f_5195.f_344 = iParam0;
	}
}

int func_832(float fParam0)//Position - 0x1E3351
{
	return SYSTEM::ROUND((fParam0 * 255f));
}

void func_833(bool bParam0)//Position - 0x1E429E
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 20))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 20);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 20))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 20);
	}
}

int func_834(struct<4> Param0, var uParam1)//Position - 0x1E6EE5
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (uParam1->f_3 == 0)
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Param0, *uParam1, uParam1->f_1, Param0.f_3, uParam1->f_2);
			__LIB_0__::func_579(&(uParam1->f_4));
			uParam1->f_3 = 1;
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1)
		{
			return 1;
		}
		else
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0, true);
			if (fVar0 <= uParam1->f_2 && __LIB_4__::func_230(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Param0.f_3, 1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_835(int* iParam0)//Position - 0x212B31
{
	if (Global_262145.f_9395 /* Tunable: DISABLE_CHRISTMAS_TREE_APARTMENT */)
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

bool func_836(int iParam0, int iParam1, char* sParam2)//Position - 0x212C5B
{
	StringCopy(sParam2, "", 64);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "weed_growtha_stage1", 64);
					break;
				case 1:
					StringCopy(sParam2, "weed_growthb_stage1", 64);
					break;
				case 2:
					StringCopy(sParam2, "weed_growthc_stage1", 64);
					break;
				case 3:
					StringCopy(sParam2, "weed_growthd_stage1", 64);
					break;
				case 4:
					StringCopy(sParam2, "weed_growthe_stage1", 64);
					break;
				case 5:
					StringCopy(sParam2, "weed_growthf_stage1", 64);
					break;
				case 6:
					StringCopy(sParam2, "weed_growthg_stage1", 64);
					break;
				case 7:
					StringCopy(sParam2, "weed_growthh_stage1", 64);
					break;
				case 8:
					StringCopy(sParam2, "weed_growthi_stage1", 64);
					break;
				case 9:
					StringCopy(sParam2, "weed_growtha_stage2", 64);
					break;
				case 10:
					StringCopy(sParam2, "weed_growthb_stage2", 64);
					break;
				case 11:
					StringCopy(sParam2, "weed_growthc_stage2", 64);
					break;
				case 12:
					StringCopy(sParam2, "weed_growthd_stage2", 64);
					break;
				case 13:
					StringCopy(sParam2, "weed_growthe_stage2", 64);
					break;
				case 14:
					StringCopy(sParam2, "weed_growthf_stage2", 64);
					break;
				case 15:
					StringCopy(sParam2, "weed_growthg_stage2", 64);
					break;
				case 16:
					StringCopy(sParam2, "weed_growthh_stage2", 64);
					break;
				case 17:
					StringCopy(sParam2, "weed_growthi_stage2", 64);
					break;
				case 18:
					StringCopy(sParam2, "weed_growtha_stage3", 64);
					break;
				case 19:
					StringCopy(sParam2, "weed_growthb_stage3", 64);
					break;
				case 20:
					StringCopy(sParam2, "weed_growthc_stage3", 64);
					break;
				case 21:
					StringCopy(sParam2, "weed_growthd_stage3", 64);
					break;
				case 22:
					StringCopy(sParam2, "weed_growthe_stage3", 64);
					break;
				case 23:
					StringCopy(sParam2, "weed_growthf_stage3", 64);
					break;
				case 24:
					StringCopy(sParam2, "weed_growthg_stage3", 64);
					break;
				case 25:
					StringCopy(sParam2, "weed_growthh_stage3", 64);
					break;
				case 26:
					StringCopy(sParam2, "weed_growthi_stage3", 64);
					break;
				case 27:
					StringCopy(sParam2, "weed_standard_equip", 64);
					break;
				case 28:
					StringCopy(sParam2, "weed_upgrade_equip", 64);
					break;
				case 29:
					StringCopy(sParam2, "weed_secuirty_upgrade", 64);
					break;
				case 30:
					StringCopy(sParam2, "weed_production", 64);
					break;
				case 31:
					StringCopy(sParam2, "weed_set_up", 64);
					break;
				case 32:
					StringCopy(sParam2, "weed_drying", 64);
					break;
				case 33:
					StringCopy(sParam2, "weed_hosea", 64);
					break;
				case 34:
					StringCopy(sParam2, "weed_hoseb", 64);
					break;
				case 35:
					StringCopy(sParam2, "weed_hosec", 64);
					break;
				case 36:
					StringCopy(sParam2, "weed_hosed", 64);
					break;
				case 37:
					StringCopy(sParam2, "weed_hosee", 64);
					break;
				case 38:
					StringCopy(sParam2, "weed_hosef", 64);
					break;
				case 39:
					StringCopy(sParam2, "weed_hoseg", 64);
					break;
				case 40:
					StringCopy(sParam2, "weed_hoseh", 64);
					break;
				case 41:
					StringCopy(sParam2, "weed_hosei", 64);
					break;
				case 42:
					StringCopy(sParam2, "light_growtha_stage23_standard", 64);
					break;
				case 43:
					StringCopy(sParam2, "light_growthb_stage23_standard", 64);
					break;
				case 44:
					StringCopy(sParam2, "light_growthc_stage23_standard", 64);
					break;
				case 45:
					StringCopy(sParam2, "light_growthd_stage23_standard", 64);
					break;
				case 46:
					StringCopy(sParam2, "light_growthe_stage23_standard", 64);
					break;
				case 47:
					StringCopy(sParam2, "light_growthf_stage23_standard", 64);
					break;
				case 48:
					StringCopy(sParam2, "light_growthg_stage23_standard", 64);
					break;
				case 49:
					StringCopy(sParam2, "light_growthh_stage23_standard", 64);
					break;
				case 50:
					StringCopy(sParam2, "light_growthi_stage23_standard", 64);
					break;
				case 51:
					StringCopy(sParam2, "light_growtha_stage23_upgrade", 64);
					break;
				case 52:
					StringCopy(sParam2, "light_growthb_stage23_upgrade", 64);
					break;
				case 53:
					StringCopy(sParam2, "light_growthc_stage23_upgrade", 64);
					break;
				case 54:
					StringCopy(sParam2, "light_growthd_stage23_upgrade", 64);
					break;
				case 55:
					StringCopy(sParam2, "light_growthe_stage23_upgrade", 64);
					break;
				case 56:
					StringCopy(sParam2, "light_growthf_stage23_upgrade", 64);
					break;
				case 57:
					StringCopy(sParam2, "light_growthg_stage23_upgrade", 64);
					break;
				case 58:
					StringCopy(sParam2, "light_growthh_stage23_upgrade", 64);
					break;
				case 59:
					StringCopy(sParam2, "light_growthi_stage23_upgrade", 64);
					break;
				case 60:
					StringCopy(sParam2, "weed_chairs", 64);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "coke_cut_01", 64);
					break;
				case 1:
					StringCopy(sParam2, "coke_cut_02", 64);
					break;
				case 2:
					StringCopy(sParam2, "coke_cut_03", 64);
					break;
				case 3:
					StringCopy(sParam2, "coke_cut_04", 64);
					break;
				case 4:
					StringCopy(sParam2, "coke_cut_05", 64);
					break;
				case 5:
					StringCopy(sParam2, "security_low", 64);
					break;
				case 6:
					StringCopy(sParam2, "security_high", 64);
					break;
				case 7:
					StringCopy(sParam2, "production_basic", 64);
					break;
				case 8:
					StringCopy(sParam2, "production_upgrade", 64);
					break;
				case 9:
					StringCopy(sParam2, "equipment_basic", 64);
					break;
				case 10:
					StringCopy(sParam2, "equipment_upgrade", 64);
					break;
				case 11:
					StringCopy(sParam2, "set_up", 64);
					break;
				case 12:
					StringCopy(sParam2, "table_equipment", 64);
					break;
				case 13:
					StringCopy(sParam2, "table_equipment_upgrade", 64);
					break;
				case 14:
					StringCopy(sParam2, "coke_press_basic", 64);
					break;
				case 15:
					StringCopy(sParam2, "coke_press_upgrade", 64);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "meth_lab_basic", 64);
					break;
				case 1:
					StringCopy(sParam2, "meth_lab_upgrade", 64);
					break;
				case 2:
					StringCopy(sParam2, "meth_lab_production", 64);
					break;
				case 3:
					StringCopy(sParam2, "meth_lab_security_high", 64);
					break;
				case 4:
					StringCopy(sParam2, "meth_lab_setup", 64);
					break;
				case 5:
					StringCopy(sParam2, "meth_lab_empty", 64);
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "interior_basic", 64);
					break;
				case 1:
					StringCopy(sParam2, "interior_upgrade", 64);
					break;
				case 2:
					StringCopy(sParam2, "security_low", 64);
					break;
				case 3:
					StringCopy(sParam2, "security_high", 64);
					break;
				case 4:
					StringCopy(sParam2, "equipment_basic", 64);
					break;
				case 5:
					StringCopy(sParam2, "equipment_upgrade", 64);
					break;
				case 6:
					StringCopy(sParam2, "set_up", 64);
					break;
				case 7:
					StringCopy(sParam2, "production", 64);
					break;
				case 8:
					StringCopy(sParam2, "clutter", 64);
					break;
				case 9:
					StringCopy(sParam2, "Chair01", 64);
					break;
				case 10:
					StringCopy(sParam2, "Chair02", 64);
					break;
				case 11:
					StringCopy(sParam2, "Chair03", 64);
					break;
				case 12:
					StringCopy(sParam2, "Chair04", 64);
					break;
				case 13:
					StringCopy(sParam2, "Chair05", 64);
					break;
				case 14:
					StringCopy(sParam2, "Chair06", 64);
					break;
				case 15:
					StringCopy(sParam2, "Chair07", 64);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "counterfeit_standard_equip", 64);
					break;
				case 1:
					StringCopy(sParam2, "counterfeit_upgrade_equip", 64);
					break;
				case 2:
					StringCopy(sParam2, "counterfeit_standard_equip_no_prod", 64);
					break;
				case 3:
					StringCopy(sParam2, "counterfeit_upgrade_equip_no_prod", 64);
					break;
				case 4:
					StringCopy(sParam2, "counterfeit_low_security", 64);
					break;
				case 5:
					StringCopy(sParam2, "counterfeit_security", 64);
					break;
				case 6:
					StringCopy(sParam2, "counterfeit_setup", 64);
					break;
				case 7:
					StringCopy(sParam2, "counterfeit_cashpile20a", 64);
					break;
				case 8:
					StringCopy(sParam2, "counterfeit_cashpile20b", 64);
					break;
				case 9:
					StringCopy(sParam2, "counterfeit_cashpile20c", 64);
					break;
				case 10:
					StringCopy(sParam2, "counterfeit_cashpile20d", 64);
					break;
				case 11:
					StringCopy(sParam2, "dryera_off", 64);
					break;
				case 12:
					StringCopy(sParam2, "dryerb_off", 64);
					break;
				case 13:
					StringCopy(sParam2, "dryerc_off", 64);
					break;
				case 14:
					StringCopy(sParam2, "dryerd_off", 64);
					break;
				case 15:
					StringCopy(sParam2, "dryera_on", 64);
					break;
				case 16:
					StringCopy(sParam2, "dryerb_on", 64);
					break;
				case 17:
					StringCopy(sParam2, "dryerc_on", 64);
					break;
				case 18:
					StringCopy(sParam2, "dryerd_on", 64);
					break;
				case 19:
					StringCopy(sParam2, "dryera_open", 64);
					break;
				case 20:
					StringCopy(sParam2, "dryerb_open", 64);
					break;
				case 21:
					StringCopy(sParam2, "dryerc_open", 64);
					break;
				case 22:
					StringCopy(sParam2, "dryerd_open", 64);
					break;
				case 23:
					StringCopy(sParam2, "money_cutter", 64);
					break;
				case 24:
					StringCopy(sParam2, "special_chairs", 64);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "standard_bunker_set", 64);
					break;
				case 1:
					StringCopy(sParam2, "upgrade_bunker_set", 64);
					break;
				case 2:
					StringCopy(sParam2, "office_blocker_set", 64);
					break;
				case 3:
					StringCopy(sParam2, "office_upgrade_set", 64);
					break;
				case 4:
					StringCopy(sParam2, "standard_security_set", 64);
					break;
				case 5:
					StringCopy(sParam2, "security_upgrade", 64);
					break;
				case 6:
					StringCopy(sParam2, "gun_range_blocker_set", 64);
					break;
				case 7:
					StringCopy(sParam2, "gun_range_lights", 64);
					break;
				case 8:
					StringCopy(sParam2, "gun_locker_upgrade", 64);
					break;
				case 9:
					StringCopy(sParam2, "bunker_style_a", 64);
					break;
				case 10:
					StringCopy(sParam2, "bunker_style_b", 64);
					break;
				case 11:
					StringCopy(sParam2, "bunker_style_c", 64);
					break;
				case 12:
					StringCopy(sParam2, "Gun_schematic_set", 64);
					break;
			}
			break;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
}

void func_837(bool bParam0)//Position - 0x213FEE
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 3))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 3);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 3))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 3);
	}
}

int func_838(int iParam0)//Position - 0x16989
{
	return Global_2715699.f_4316.f_388[iParam0];
}

void func_839(bool bParam0)//Position - 0x1AC68
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2703735.f_61.f_3, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_61.f_3), bParam0);
		}
	}
	else if (BitTest(Global_2703735.f_61.f_4, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_61.f_4), (bParam0 - 32));
	}
}

void func_840(bool bParam0)//Position - 0x1ACDB
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_1, 8))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 8);
		}
	}
	else if (BitTest(Global_1946250.f_1, 8))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_1), 8);
	}
}

void func_841(bool bParam0)//Position - 0x1AD85
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2703735.f_61.f_3, bParam0))
		{
			MISC::SET_BIT(&(Global_2703735.f_61.f_3), bParam0);
		}
	}
	else if (!BitTest(Global_2703735.f_61.f_4, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703735.f_61.f_4), (bParam0 - 32));
	}
}

void func_842(bool bParam0)//Position - 0x1ADD7
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 19))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 19);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 19))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 19);
	}
}

void func_843(bool bParam0)//Position - 0x1AE40
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293, 0))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293), 0);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293, 0))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293), 0);
	}
}

bool func_844(bool bParam0)//Position - 0x206B4
{
	return __LIB_1__::func_424(bParam0, 30);
}

int func_845(bool bParam0)//Position - 0x206F8
{
	return Global_1892703[bParam0 /*599*/].f_10.f_23;
}

int func_846(int iParam0)//Position - 0x21C1B
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 8;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2, 0);
}

int func_847(int iParam0)//Position - 0x21C5E
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 7;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 31);
}

int func_848(int iParam0)//Position - 0x21CA1
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 6;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 30);
}

int func_849(int iParam0)//Position - 0x21CE4
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 5;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 29);
}

int func_850(int iParam0)//Position - 0x21D27
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 4;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 28);
}

int func_851(int iParam0)//Position - 0x21D6A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 3;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 27);
}

int func_852(int iParam0)//Position - 0x21DAD
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 2;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 26);
}

int func_853(int iParam0)//Position - 0x21DF0
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 1;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 25);
}

int func_854(int iParam0)//Position - 0x21E33
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_4718592.f_162510.f_2 == 0;
	}
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_1, 24);
}

char* func_855(int iParam0)//Position - 0x222EF
{
	switch (iParam0)
	{
		case 1:
			return "MP_NCLU_1" /* GXT: La Mesa Nightclub */;
			break;
		case 2:
			return "MP_NCLU_2" /* GXT: Mission Row Nightclub */;
			break;
		case 3:
			return "MP_NCLU_3" /* GXT: Strawberry Nightclub */;
			break;
		case 4:
			return "MP_NCLU_4" /* GXT: West Vinewood Nightclub */;
			break;
		case 5:
			return "MP_NCLU_5" /* GXT: Cypress Flats Nightclub */;
			break;
		case 6:
			return "MP_NCLU_6" /* GXT: LSIA Nightclub */;
			break;
		case 7:
			return "MP_NCLU_7" /* GXT: Elysian Island Nightclub */;
			break;
		case 8:
			return "MP_NCLU_8" /* GXT: Downtown Vinewood Nightclub */;
			break;
		case 9:
			return "MP_NCLU_9" /* GXT: Del Perro Nightclub */;
			break;
		case 10:
			return "MP_NCLU_10" /* GXT: Vespucci Canals Nightclub */;
			break;
	}
	return "";
}

int func_856(int iParam0)//Position - 0x2404A
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18680 /* Tunable: BIKER_GUNRUNNING_MIN_PLAYERS */;
		case 183:
			return Global_262145.f_18688 /* Tunable: BIKER_POW_MIN_PLAYERS */;
		case 185:
			return Global_262145.f_18697 /* Tunable: BIKER_GUNS_FOR_HIRE_MIN_PLAYERS */;
		case 182:
			return Global_262145.f_18708 /* Tunable: BIKER_BY_THE_POUND_MIN_PLAYERS */;
		case 186:
			return Global_262145.f_18717 /* Tunable: BIKER_WEAPON_OF_CHOICE_MIN_PLAYERS */;
		case 195:
			return Global_262145.f_18735 /* Tunable: BIKER_NINE_TENTHS_MIN_PLAYERS */;
		case 198:
			return Global_262145.f_18745 /* Tunable: BIKER_CRACKED_MIN_PLAYERS */;
		case 197:
			return Global_262145.f_18757 /* Tunable: BIKER_JAILBREAK_MIN_PLAYERS */;
		case 207:
			return Global_262145.f_18765 /* Tunable: BIKER_FRAGILE_GOODS_MIN_PLAYERS */;
		case 209:
			return Global_262145.f_18778 /* Tunable: BIKER_OUTRIDER_MIN_PLAYERS */;
		case 208:
			return Global_262145.f_18786 /* Tunable: BIKER_TORCHED_MIN_PLAYERS */;
		case 201:
			return Global_262145.f_18819 /* Tunable: BIKER_STAND_YOUR_GROUND_MIN_PLAYERS */;
		case 211:
			return Global_262145.f_18887 /* Tunable: BIKER_ON_THE_RUN_MIN_PLAYERS */;
		case 193:
			return Global_262145.f_18910 /* Tunable: BIKER_HIT_AND_RIDE_MIN_PLAYERS */;
		case 205:
			return Global_262145.f_18928 /* Tunable: BIKER_MISCHIEF_MIN_PLAYERS */;
		case 189:
			return Global_262145.f_18893 /* Tunable: BIKER_RACE_MIN_PLAYERS */;
		case 216:
			return 2;
		case 220:
			return 2;
		default:
	}
	return 1;
}

bool func_857()//Position - 0x241AE
{
	return Global_262145.f_15734 /* Tunable: EXEC_CONTRABAND_DISABLE */;
}

int func_858()//Position - 0x2440E
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_103;
}

bool func_859()//Position - 0x24425
{
	return Global_1920255.f_11.f_144 != -1;
}

bool func_860()//Position - 0x24437
{
	return Global_1920255.f_11.f_143 != -1;
}

int func_861(bool bParam0)//Position - 0x24617
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_862(int iParam0)//Position - 0x24683
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_13038 /* Tunable: GB_POINTTOPOINT_INSTANCES_PERMITTED */;
		case 155:
			return Global_262145.f_13063 /* Tunable: GB_PROTECTIONRACKET_INSTANCES_PERMITTED */;
		case 153:
			return Global_262145.f_13027 /* Tunable: GB_MOSTWANTED_INSTANCES_PERMITTED */;
		case 163:
			return Global_262145.f_13003 /* Tunable: GB_CARJACKING_INSTANCES_PERMITTED */;
		case 160:
			return Global_262145.f_13016 /* Tunable: GB_FINDERS_KEEPERS_INSTANCES_PERMITTED */;
		case 154:
			return Global_262145.f_13073 /* Tunable: GB_SMASHANDGRAB_INSTANCES_PERMITTED */;
		case 169:
			return 1;
		case 171:
			return Global_262145.f_15561 /* Tunable: EXEC_CASHING_INSTANCES_PERMITTED */;
		case 172:
			return Global_262145.f_15580 /* Tunable: EXEC_SALVAGE_INSTANCES_PERMITTED */;
		case 148:
			return Global_262145.f_18794 /* Tunable: BIKER_DEATHMATCH_MAX_INSTANCES */;
		case 179:
			return Global_262145.f_18802 /* Tunable: BIKER_JOUST_MAX_INSTANCES */;
		case 201:
			return Global_262145.f_18816 /* Tunable: BIKER_STAND_YOUR_GROUND_MAX_INSTANCES */;
		case 200:
			return Global_262145.f_18856 /* Tunable: BIKER_CAGED_IN_MAX_INSTANCES */;
		case 211:
			return Global_262145.f_18885 /* Tunable: BIKER_ON_THE_RUN_MAX_INSTANCES */;
		case 194:
			return Global_262145.f_18897 /* Tunable: BIKER_RIPPIN_MAX_INSTANCES */;
		case 193:
			return Global_262145.f_18908 /* Tunable: BIKER_HIT_AND_RIDE_MAX_INSTANCES */;
		case 210:
			return Global_262145.f_18920 /* Tunable: BIKER_WHEELIE_MAX_INSTANCES */;
		case 205:
			return Global_262145.f_18926 /* Tunable: BIKER_MISCHIEF_MAX_INSTANCES */;
		case 199:
			return Global_262145.f_18939 /* Tunable: BIKER_SEARCH_AND_DESTROY_MAX_INSTANCES */;
		case 249:
			return 1;
		case 238:
			return 1;
		default:
	}
	return 2147483647;
}

int func_863(int iParam0)//Position - 0x247ED
{
	switch (iParam0)
	{
		case 148:
			return 0;
		case 152:
			return 1;
		case 151:
			return 2;
		case 142:
			return 3;
		case 157:
			return 4;
		case 159:
			return 5;
		case 164:
			return 6;
		case 160:
			return 7;
		case 162:
			return 8;
		case 163:
			return 9;
		case 154:
			return 10;
		case 155:
			return 11;
		case 153:
			return 12;
		case 166:
			return 13;
		case 167:
			return 14;
		case 168:
			return 15;
		case 169:
			return 16;
		case 170:
			return 17;
		case 171:
			return 18;
		case 172:
			return 19;
		case 173:
			return 20;
		case 178:
			return 21;
		case 179:
			return 22;
		case 180:
			return 23;
		case 182:
			return 24;
		case 183:
			return 25;
		case 185:
			return 26;
		case 186:
			return 27;
		case 189:
			return 28;
		case 190:
			return 29;
		case 191:
			return 30;
		case 192:
			return 31;
		case 193:
			return 32;
		case 194:
			return 33;
		case 195:
			return 34;
		case 197:
			return 35;
		case 198:
			return 36;
		case 199:
			return 37;
		case 200:
			return 38;
		case 201:
			return 39;
		case 205:
			return 40;
		case 207:
			return 41;
		case 208:
			return 42;
		case 209:
			return 43;
		case 210:
			return 44;
		case 214:
			return 45;
		case 215:
			return 46;
		case 216:
			return 47;
		case 217:
			return 48;
		case 218:
			return 49;
		case 219:
			return 50;
		case 220:
			return 51;
		case 221:
			return 52;
		case 188:
			return 53;
		case 225:
			return 54;
		case 226:
			return 55;
		case 227:
			return 56;
		case 229:
			return 57;
		case 230:
			return 58;
		case 233:
			return 59;
		case 237:
			return 60;
		case 238:
			return 61;
		case 239:
			return 62;
		case 240:
			return 63;
		case 241:
			return 64;
		case 242:
			return 65;
		case 244:
			return 66;
		case 248:
			return 67;
		case 249:
			return 68;
		case 250:
			return 69;
		case 243:
			return 70;
		case 158:
			return 71;
		case 256:
			return 72;
		case 258:
			return 73;
		case 271:
			return 74;
		case 276:
			return 75;
		case 277:
			return 76;
		case 262:
			return 79;
		case 263:
			return 78;
		case 264:
			return 77;
		case 267:
			return 80;
		case 291:
			return 81;
		case 292:
			return 82;
		case 293:
			return 83;
		case 294:
			return 84;
		case 295:
			return 85;
		case 296:
			return 86;
		case 297:
			return 87;
		case 298:
			return 88;
		case 299:
			return 89;
		case 300:
			return 90;
		case 301:
			return 91;
		default:
	}
	return -1;
}

int func_864(int iParam0, var uParam1)//Position - 0x24F55
{
	switch (iParam0)
	{
		case 2:
			return 5;
		default:
	}
	return 1;
}

int func_865(int iParam0, int iParam1, var uParam2)//Position - 0x2512B
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 24:
			return 1;
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				case 31:
				case 32:
					return 9;
				default:
			}
			break;
		case 36:
			return 0;
		case 38:
			return 3;
		case 40:
			return 4;
		case 41:
			return 4;
		case 8:
			return 13;
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				case 40:
					return 11;
				default:
			}
			break;
		case 35:
			return 5;
		case 46:
			return 2;
		case 9:
			return 8;
		case 4:
			return 7;
		case 14:
			return 11;
		case 17:
			return 8;
		case 47:
			return 11;
		case 11:
			return 9;
		case 18:
			return 13;
		case 6:
			return 17;
		case 48:
			return 21;
		case 33:
			return 5;
		case 44:
			return 2;
		case 21:
			return 22;
		case 22:
			return 12;
		case 7:
			return 10;
		case 2:
			return 0;
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				case 92:
					return 14;
				default:
			}
			break;
		case 27:
			return 12;
		case 23:
			return 17;
		case 31:
			return 3;
		case 12:
			return 4;
		case 3:
			return 2;
		case 49:
			return 15;
		case 19:
			return 14;
		case 50:
			return 12;
		case 20:
			return 12;
		case 32:
			return 15;
		case 30:
			return 6;
		case 16:
			return 12;
		case 39:
			return 5;
		case 42:
			return 3;
		case 37:
			return 19;
		case 52:
			return 6;
		case 15:
			return 2;
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				case 70:
					return 12;
				default:
			}
			break;
	}
	return 0;
}

int func_866(int iParam0, int iParam1, int iParam2)//Position - 0x25416
{
	switch (iParam0)
	{
		case 13:
			return 3;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				case 16:
					return 12;
				case 17:
					return 12;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				default:
			}
			break;
		case 12:
			return 15;
		case 0:
			return 1;
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						case 1:
							return 0;
						case 2:
							return 3;
						default:
					}
					break;
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						case 1:
							return 2;
						case 2:
							return 0;
						default:
					}
					break;
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 0;
						case 2:
							return 0;
						default:
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				default:
			}
			return 5;
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				case 7:
					return 23;
				case 8:
					return 25;
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				case 26:
					return 8;
				case 27:
					return 4;
				default:
			}
			break;
	}
	return 0;
}

int func_867(int iParam0)//Position - 0x255C5
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 3;
		case 2:
			return 4;
		case 3:
			return 0;
		case 4:
			return 3;
		case 5:
			return 0;
		default:
	}
	return 0;
}

int func_868(int iParam0, int iParam1)//Position - 0x2563E
{
	switch (iParam0)
	{
		case 12:
			return 3;
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				default:
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				default:
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				case 136:
					return 2;
				default:
			}
			break;
		case 1:
			return 10;
		case 18:
			return 3;
		case 3:
			return 4;
		case 21:
			return 2;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				case 1:
					return 9;
				case 2:
					return 8;
				case 3:
					return 6;
				case 4:
					return 8;
				case 5:
					return 8;
				case 6:
					return 8;
				case 7:
					return 8;
				case 8:
					return 8;
				case 9:
					return 6;
				default:
			}
			break;
	}
	return 0;
}

int func_869(int iParam0)//Position - 0x258BA
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18468 /* Tunable: BIKER_RESUPPLY_MEET_CONTACT_MIN_PACKAGES */;
		case 10:
			return Global_262145.f_18493 /* Tunable: BIKER_RESUPPLY_BANK_MIN_PACKAGES */;
		default:
	}
	return 1;
}

int func_870(int iParam0)//Position - 0x25989
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		default:
	}
	return 1;
}

int func_871(int iParam0, int iParam1)//Position - 0x259DF
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				case 196:
					return 3;
				case 197:
					return 3;
				case 198:
					return 3;
				case 199:
					return 3;
				default:
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				case 8:
					return 8;
				case 9:
					return 7;
				case 10:
					return 4;
				case 11:
					return 5;
				case 12:
					return 6;
				default:
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				case 2:
					return 10;
				case 3:
					return 8;
				case 4:
					return 10;
				case 5:
					return 10;
				case 6:
					return 10;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				case 14:
					return 8;
				case 15:
					return 8;
				case 16:
					return 8;
				case 17:
					return 10;
				case 18:
					return 9;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				case 20:
					return 8;
				case 21:
					return 4;
				case 22:
					return 0;
				case 23:
					return 10;
				case 24:
					return 1;
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				case 26:
					return 15;
				case 27:
					return 13;
				case 28:
					return 16;
				case 29:
					return 14;
				case 30:
					return 14;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				case 75:
					return 5;
				case 76:
					return 5;
				case 77:
					return 4;
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				case 67:
					return 1;
				default:
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				case 39:
					return 6;
				case 40:
					return 7;
				case 41:
					return 6;
				default:
			}
			break;
	}
	return 0;
}

int func_872(int iParam0)//Position - 0x25CC4
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		default:
	}
	return 0;
}

int func_873(int iParam0)//Position - 0x25D98
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		default:
	}
	return 0;
}

int func_874(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x25DD6
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 5;
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				case 34:
					return iVar0 + 1;
				default:
			}
			return iVar0;
			break;
		case 4:
			return 1;
		case 5:
			return 1;
		case 8:
			return 7;
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				default:
			}
			return 2;
			break;
		case 9:
			return 0;
		case 13:
			return 1;
		case 10:
			return 12;
	}
	return 0;
}

int func_875(int iParam0)//Position - 0x25EE4
{
	switch (iParam0)
	{
		case 23:
			return 1;
		default:
	}
	return 0;
}

int func_876(int iParam0)//Position - 0x2607C
{
	switch (iParam0)
	{
		case 15:
			return 3;
		default:
	}
	return 1;
}

int func_877(int iParam0)//Position - 0x260F0
{
	switch (iParam0)
	{
		case 12:
			return 1;
		default:
	}
	return 0;
}

int func_878(int iParam0)//Position - 0x2610A
{
	if (iParam0 == __LIB_0__::func_160() || Global_1853348[iParam0 /*834*/].f_267.f_278 == 0)
	{
		return 50;
	}
	return (50 - Global_1853348[iParam0 /*834*/].f_267.f_278.f_3);
}

int func_879(int iParam0)//Position - 0x2614C
{
	switch (iParam0)
	{
		case 26:
			return 1;
		default:
	}
	return 0;
}

int func_880(int iParam0)//Position - 0x26166
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_881(int iParam0)//Position - 0x26188
{
	switch (iParam0)
	{
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
			return 1;
		default:
	}
	return 0;
}

int func_882(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x26200
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 12;
		case 11:
			return 1;
		case 5:
			return 10;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 3;
				case 2:
					return 10;
				default:
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				case 35:
					return 20;
				case 36:
					return 22;
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				case 7:
					return 0;
				case 8:
					return 5;
				default:
			}
			break;
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				case 2:
					return 14;
				case 3:
					return 14;
				case 4:
					return 14;
				default:
			}
			break;
		case 8:
			return 2;
		case 23:
			return (2 * iParam2);
		case 24:
			return (2 * iParam2);
		case 26:
			return 2;
	}
	return 0;
}

int func_883(int iParam0)//Position - 0x26378
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		default:
	}
	return 0;
}

int func_884(int iParam0)//Position - 0x264D1
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		default:
	}
	return 0;
}

int func_885(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x26533
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 6;
				case 2:
					return 8;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				case 10:
					return 0;
				case 11:
					return 0;
				case 12:
					return 0;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				case 15:
					return 12;
				case 13:
					return 2;
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				case 17:
					return 0;
				case 18:
					return 0;
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				case 20:
					return 15;
				case 21:
					return 11;
				default:
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				case 23:
					return 7;
				case 24:
					return 6;
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				case 26:
					return (7 + iParam2 * 2);
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				case 28:
					return 10;
				default:
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				case 30:
					return 6;
				case 31:
					return 6;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				case 33:
					return 8;
				case 34:
					return 8;
				default:
			}
			break;
		case 12:
			return 0;
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				case 36:
					return 9;
				case 37:
					return 0;
				default:
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				case 1:
					return 16;
				case 2:
					return 6;
				case 3:
					return 3;
				case 4:
					return 9;
				case 5:
					return 6;
				case 6:
					return 6;
				case 7:
					return 3;
				case 8:
					return 3;
				case 9:
					return 3;
				case 10:
					return 0;
				case 11:
					return 9;
				case 12:
					return 3;
				default:
			}
			break;
		case 15:
			return iParam2;
		case 16:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 13;
	}
	return 0;
}

int func_886(int iParam0, int iParam1)//Position - 0x268A0
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				case 19:
					return 7;
				case 20:
					return 8;
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				case 28:
					return 1;
				case 29:
					return 1;
				default:
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				case 22:
					return 2;
				case 23:
					return 2;
				default:
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				case 37:
					return 7;
				case 38:
					return 8;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				case 40:
					return 6;
				case 41:
					return 2;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				case 2:
					return 5;
				case 3:
					return 5;
				default:
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				case 43:
					return 1;
				case 44:
					return 1;
				default:
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				case 46:
					return 12;
				case 47:
					return 12;
				default:
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				case 49:
					return 7;
				case 50:
					return 7;
				default:
			}
			break;
		case 12:
			return 3;
	}
	return 0;
}

int func_887(int iParam0)//Position - 0x26A60
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 3;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 0;
		case 16:
			return 1;
		case 17:
			return 3;
		case 19:
			return 0;
		case 18:
			return 0;
		default:
	}
	return 1;
}

int func_888(int iParam0, int iParam1)//Position - 0x26E9D
{
	switch (iParam0)
	{
		case 2:
			return 2;
		default:
	}
	return 0;
}

int func_889(var uParam0, int iParam1, bool bParam2)//Position - 0x26EC9
{
	switch (iParam1)
	{
		case 2:
			return 3;
		default:
	}
	return 1;
}

int func_890(int iParam0, int iParam1)//Position - 0x26EE3
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
			}
			break;
	}
	return -1;
}

int func_891(int iParam0, int iParam1)//Position - 0x26F17
{
	switch (iParam0)
	{
		case 2:
			return 0;
		default:
	}
	return 0;
}

int func_892(int iParam0, int iParam1)//Position - 0x272BC
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		default:
	}
	return 0;
}

int func_893(int iParam0, int iParam1)//Position - 0x273EC
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		case 93:
		case 94:
		case 95:
			return 3;
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		case 116:
		case 117:
			return 2;
		case 20:
			return 9;
		case 21:
			return 5;
		case 27:
		case 28:
		case 29:
			return 7;
		case 114:
		case 115:
			return iParam0;
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				case 2:
					return 4;
				case 3:
					return 5;
				default:
			}
			break;
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				case 1:
					return 4;
				case 2:
					return 5;
				case 3:
					return 6;
				default:
			}
			break;
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
			}
			break;
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				case 1:
					return 8;
				default:
			}
			break;
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				default:
			}
			break;
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				case 1:
					return 2;
				default:
			}
			break;
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				case 1:
					return 2;
				default:
			}
			break;
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				case 1:
					return 21;
				case 2:
					return 22;
				case 3:
					return 23;
				default:
			}
			break;
		case 17:
		case 18:
		case 19:
			return 3;
		case 131:
			return 4;
	}
	return -1;
}

int func_894(int iParam0, int iParam1)//Position - 0x276CB
{
	switch (iParam0)
	{
		case 53:
			return 0;
		default:
	}
	return 0;
}

int func_895(int iParam0, int iParam1)//Position - 0x279C0
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		default:
	}
	return 0;
}

int func_896(int iParam0, int iParam1)//Position - 0x27A09
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_897(int iParam0, int iParam1)//Position - 0x27A33
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				default:
			}
			break;
		case 35:
		case 36:
		case 37:
			return 0;
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		case 28:
		case 29:
		case 30:
			return 0;
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				default:
			}
			break;
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		case 38:
		case 39:
		case 40:
			return 0;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 7;
		case 22:
		case 23:
		case 24:
			return 0;
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_898(int iParam0, int iParam1)//Position - 0x27B65
{
	switch (iParam0)
	{
		case 16:
			return 0;
		default:
	}
	return 0;
}

int func_899(int iParam0)//Position - 0x27B7F
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 4;
		case 2:
			return 6;
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 4;
		default:
	}
	return 0;
}

int func_900(int iParam0, int iParam1, int iParam2)//Position - 0x27BCB
{
	int iVar0;
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				case 81:
					iVar0++;
					break;
				case 82:
					iVar0++;
					break;
			}
			break;
		case 22:
			iVar0 += 4;
			break;
		case 18:
			iVar0 += 4;
			break;
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		case 15:
			iVar0++;
			break;
		case 23:
			iVar0++;
			break;
		case 20:
			iVar0 += 4;
			break;
		case 17:
			iVar0++;
			break;
		case 19:
			iVar0++;
			break;
		case 16:
			iVar0++;
			break;
		case 3:
			iVar0 += 8;
			break;
		case 14:
			iVar0++;
			break;
		case 10:
			iVar0 += 8;
			break;
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		case 1:
			iVar0 += 5;
			break;
		case 5:
			iVar0 += 3;
			break;
		case 0:
			iVar0 += 3;
			break;
	}
	if (__LIB_0__::func_109(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_901(int iParam0)//Position - 0x284D4
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		default:
	}
	return 0;
}

int func_902(int iParam0, int iParam1)//Position - 0x28531
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				case 2:
					return 2;
				case 3:
					return 2;
				default:
			}
			break;
	}
	return -1;
}

int func_903(int iParam0)//Position - 0x2889F
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		case 21:
		case 16:
		case 17:
			return 2;
		default:
	}
	return 0;
}

int func_904(int iParam0, int iParam1)//Position - 0x28A19
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				case 2:
					return 2;
				case 3:
					return 2;
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				case 2:
					return 2;
				case 3:
					return 2;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 1;
				default:
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				case 1:
					return 12;
				case 2:
					return 13;
				case 3:
					return 13;
				default:
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				case 1:
					return 12;
				case 2:
					return 13;
				case 3:
					return 13;
				default:
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				case 1:
					return 12;
				case 2:
					return 13;
				case 3:
					return 13;
				default:
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				case 2:
					return 2;
				case 3:
					return 2;
				default:
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				case 1:
					return 4;
				case 2:
					return 5;
				case 3:
					return 5;
				default:
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 2;
				case 2:
					return 3;
				case 3:
					return 3;
				default:
			}
			break;
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 2;
				case 2:
					return 3;
				case 3:
					return 3;
				default:
			}
			break;
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
			switch (iParam0)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 1;
				default:
			}
			break;
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				case 1:
					return 7;
				case 2:
					return 8;
				case 3:
					return 9;
				default:
			}
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 1;
				default:
			}
			break;
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				default:
			}
			break;
	}
	return -1;
}

int func_905(int iParam0, int iParam1)//Position - 0x28DB9
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		case 9:
			return 1;
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		default:
	}
	return SYSTEM::CEIL((IntToFloat(iParam1) / 2f));
}

int func_906(int iParam0)//Position - 0x29235
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		default:
	}
	return 0;
}

int func_907(int iParam0, int iParam1)//Position - 0x292B9
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 1.5f));
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 2f));
		default:
	}
	return 0;
}

int func_908(int iParam0)//Position - 0x29624
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		default:
	}
	return 0;
}

int func_909(int iParam0, var uParam1, int iParam2)//Position - 0x2966E
{
	int iVar0;
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_910(int iParam0)//Position - 0x29698
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 3;
		case 4:
			return 8;
		case 5:
			return 3;
		case 6:
			return 1;
		case 7:
			return 1;
		case 8:
			return 6;
		case 9:
			return 6;
		case 10:
			return 3;
		case 11:
			return 3;
		case 12:
			return 2;
		case 13:
			return 1;
		case 14:
			return 3;
		case 15:
			return 5;
		case 16:
			return 6;
		case 17:
			return 2;
		case 19:
			return 4;
		case 18:
			return 5;
		default:
	}
	return 2;
}

int func_911(int iParam0, int iParam1)//Position - 0x29E6F
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		case 6:
		case 50:
		case 47:
			return 4;
		case 27:
			return 2;
		default:
	}
	return 0;
}

int func_912(int iParam0, int iParam1)//Position - 0x2A17F
{
	switch (iParam0)
	{
		case 0:
			return 14;
		case 1:
			return 7;
		case 2:
			return 27;
		case 3:
			return 3;
		case 4:
			return 8;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				case 1:
					return 9;
				default:
			}
			break;
	}
	return 0;
}

int func_913(int iParam0, int iParam1, int iParam2)//Position - 0x2A1F0
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					iVar0 += 19;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		case 22:
			iVar0 += 8;
			break;
		case 15:
			iVar0++;
			break;
		case 23:
			iVar0 += 3;
			break;
		case 20:
			iVar0 += 12;
			break;
		case 18:
			iVar0 += 20;
			break;
		case 17:
			iVar0 += 9;
			break;
		case 19:
			iVar0++;
			break;
		case 3:
			iVar0 += 5;
			break;
		case 14:
			iVar0++;
			break;
		case 10:
			iVar0 += 17;
			break;
		case 4:
			iVar0 += 3;
			break;
		case 1:
			iVar0 += 30;
			break;
		case 2:
			iVar0 += 4;
			break;
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_914()//Position - 0x2A3A9
{
	int iVar0;
	iVar0 = 32;
	return iVar0;
}

int func_915()//Position - 0x2A3B7
{
	int iVar0;
	iVar0 = 8;
	return iVar0;
}

int func_916(int iParam0, var uParam1)//Position - 0x2AAC5
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		case 8:
			return 4;
		default:
	}
	return 0;
}

int func_917(int iParam0, int iParam1)//Position - 0x2ACA9
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		case 1:
		case 0:
			return 4;
		case 4:
			return 1;
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				default:
			}
			break;
		case 21:
			return 2;
		case 17:
			return 4;
	}
	return 0;
}

int func_918(int iParam0)//Position - 0x2B07A
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		case 15:
		case 16:
		case 19:
			return 3;
		case 10:
		case 8:
		case 5:
			return 4;
		default:
	}
	return 0;
}

int func_919(int iParam0)//Position - 0x2B42B
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 5;
		case 4:
			return 12;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 2;
		case 8:
			return 12;
		case 9:
			return 12;
		case 10:
			return 9;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 5;
		case 14:
			return 12;
		case 15:
			return 13;
		case 16:
			return 5;
		case 17:
			return 15;
		case 19:
			return 4;
		case 18:
			return 11;
		default:
	}
	return 8;
}

int func_920(bool bParam0)//Position - 0x2BD9B
{
	int iVar0;
	if (bParam0 != __LIB_0__::func_160() && (__LIB_1__::func_264(bParam0, 1, 1) || Global_2667225.f_2680))
	{
		iVar0 = BitTest(Global_2689235[bParam0 /*453*/].f_318, 1);
		return iVar0;
	}
	return 0;
}

int func_921(var uParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0xE20CB
{
	*uParam3 = 1;
	if (bParam2)
	{
		StringCopy(sParam1, "", 64);
	}
	else
	{
		StringCopy(sParam1, "ciPI_TYPE_INVITE_TO_SIMPLE_INTERIOR - ARCADE", 64);
	}
	return __LIB_4__::func_686(PLAYER::PLAYER_ID());
}

int func_922(int iParam0)//Position - 0xEFDC5
{
	if (__LIB_1__::func_181(iParam0))
	{
		return 1;
	}
	if (__LIB_2__::func_308(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_923(int iParam0, bool bParam1, int iParam2)//Position - 0x124A9C
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Creator_Trailer");
				return __LIB_4__::func_714(iVar0, 0, bParam1, iParam2);
			}
		}
	}
	return __LIB_0__::func_160();
}

int func_924(int iParam0)//Position - 0x124BA8
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Creator_Trailer");
					return __LIB_4__::func_714(iVar0, 0, 1, 0);
				}
			}
		}
	}
	return __LIB_0__::func_160();
}

bool func_925(int iParam0, bool bParam1, int iParam2)//Position - 0x13CEAD
{
	int iVar0;
	if (!__LIB_1__::func_580(iParam0, 1))
	{
		return __LIB_0__::func_160();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Avenger");
		return __LIB_4__::func_714(iVar0, 0, bParam1, iParam2);
	}
	return __LIB_0__::func_160();
}

bool func_926(int iParam0)//Position - 0x196552
{
	return (iParam0 != -1 && iParam0 != 7);
}

int func_927(int iParam0)//Position - 0x196A5A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_114[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_928()//Position - 0x19EAF7
{
	if (__LIB_1__::func_357())
	{
		return 1;
	}
	return Global_2714762.f_42;
}

void func_929(bool bParam0)//Position - 0x1A05D0
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 24))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 24);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 24))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 24);
	}
}

void func_930(bool bParam0)//Position - 0x1A1408
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2703735.f_61.f_7, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_61.f_7), bParam0);
		}
	}
	else if (BitTest(Global_2703735.f_61.f_8, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_61.f_8), (bParam0 - 32));
	}
}

void func_931(bool bParam0)//Position - 0x1A1458
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_3, 1))
		{
			MISC::SET_BIT(&(Global_1946250.f_3), 1);
		}
	}
	else if (BitTest(Global_1946250.f_3, 1))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_3), 1);
	}
}

void func_932(bool bParam0)//Position - 0x1A1495
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 5))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 5);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 5);
	}
}

void func_933(bool bParam0)//Position - 0x1A14FA
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 10))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 10);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 10))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 10);
	}
}

void func_934(bool bParam0)//Position - 0x1A1563
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2703735.f_61.f_7, bParam0))
		{
			MISC::SET_BIT(&(Global_2703735.f_61.f_7), bParam0);
		}
	}
	else if (!BitTest(Global_2703735.f_61.f_8, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703735.f_61.f_8), (bParam0 - 32));
	}
}

void func_935(bool bParam0)//Position - 0x1A15B5
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348, 14))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348), 14);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348, 14))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348), 14);
	}
}

void func_936(char* sParam0, char* sParam1, int iParam2)//Position - 0x1A1F74
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

char* func_937(int iParam0, int iParam1)//Position - 0x1BEDB1
{
	switch (iParam0)
	{
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return "xm_x17dlc_int_02";
			break;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			if (iParam1 == 0)
			{
				return "ba_dlc_int_01_ba";
			}
			else
			{
				return "ba_dlc_int_02_ba";
			}
			break;
		case 117:
			return "ba_dlc_int_03_ba";
			break;
		case 151:
		case 149:
		case 153:
		case 150:
		case 152:
			return "tr_tuner_mod_garage";
			break;
	}
	return "";
}

Vector3 func_938(int iParam0, int iParam1)//Position - 0x1BEE95
{
	switch (iParam0)
	{
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			if (iParam1 == 0)
			{
				return -1604.6643f, -3012.5828f, -79.9999f;
			}
			else
			{
				return -1505.783f, -3012.5867f, -79.9999f;
			}
			break;
		case 117:
			return -1421.0149f, -3012.5867f, -80f;
			break;
		case 151:
		case 149:
		case 153:
		case 150:
		case 152:
			return -1350f, 160f, -100f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_939(bool bParam0, bool bParam1)//Position - 0x1BFC36
{
	if (__LIB_1__::func_264(bParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2689235[bParam0 /*453*/].f_269.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2689235[bParam0 /*453*/].f_269.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_940()//Position - 0x1C0821
{
	int iVar0;
	bool bVar1;
	float fVar2;
	struct<3> Var3;
	Var3 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (__LIB_1__::func_264(bVar1, 1, 1))
		{
			if (PED::IS_PED_ON_FOOT(PLAYER::GET_PLAYER_PED(bVar1)))
			{
				if (!bVar1 == PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
					{
						fVar2 = SYSTEM::VMAG(__LIB_1__::func_265(bVar1) - Var3);
						if (fVar2 < 0.2f)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_941(bool bParam0)//Position - 0x1C8380
{
	if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_942(bool bParam0)//Position - 0x1D0C5E
{
	if (__LIB_1__::func_264(bParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam0), false), false))
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
	return 0;
}

int func_943(int iParam0)//Position - 0x1D2194
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (!bVar1 == PLAYER::PLAYER_ID())
		{
			if (__LIB_1__::func_264(bVar1, 1, 1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), true))
				{
					if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(bVar1)) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_944(var uParam0, float fParam1, bool bParam2, int iParam3)//Position - 0x1DCBC2
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam2 == iVar0 || iParam3 == 1)
		{
			bVar1 = iVar0;
			if (__LIB_1__::func_264(bVar1, 0, 1) && __LIB_1__::func_264(bParam2, 0, 1))
			{
				if (Global_2680265.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], *uParam0) < fParam1)
					{
						__LIB_1__::func_120(uParam0, Global_2680265.f_131[iVar0 /*3*/], fParam1, 1036831949, 0, 0);
					}
				}
				else if (SYSTEM::VDIST(__LIB_1__::func_265(bVar1), *uParam0) < fParam1)
				{
					__LIB_1__::func_120(uParam0, __LIB_1__::func_265(bVar1), fParam1, 1036831949, 0, 0);
				}
			}
			else if (Global_2680265.f_261[iVar0])
			{
				if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], *uParam0) < fParam1)
				{
					__LIB_1__::func_120(uParam0, Global_2680265.f_131[iVar0 /*3*/], fParam1, 1036831949, 0, 0);
				}
			}
			else if (__LIB_1__::func_264(bVar1, 0, 1))
			{
				if (SYSTEM::VDIST(__LIB_1__::func_265(bVar1), *uParam0) < fParam1)
				{
					__LIB_1__::func_120(uParam0, __LIB_1__::func_265(bVar1), fParam1, 1036831949, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_945()//Position - 0x1DE811
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		bVar3 = iVar2;
		if (__LIB_1__::func_264(bVar3, 1, 1))
		{
			if (!bVar3 == PLAYER::PLAYER_ID())
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar3))
				{
					Var0 = { Var0 + __LIB_1__::func_265(bVar3) };
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	if (iVar1 > 0)
	{
		Var0 = { Var0 / FtoV(SYSTEM::TO_FLOAT(iVar1)) };
	}
	else
	{
		Var0 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
	}
	return Var0;
}

Vector3 func_946()//Position - 0x1E598B
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		bVar3 = iVar2;
		if (__LIB_1__::func_264(bVar3, 1, 1))
		{
			if (!bVar3 == PLAYER::PLAYER_ID())
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar3))
				{
					if (__LIB_1__::func_423(PLAYER::PLAYER_ID(), bVar3, -2, 0))
					{
						Var0 = { Var0 + __LIB_1__::func_265(bVar3) };
						iVar1++;
					}
				}
			}
		}
		iVar2++;
	}
	if (iVar1 > 0)
	{
		Var0 = { Var0 / FtoV(SYSTEM::TO_FLOAT(iVar1)) };
	}
	else
	{
		Var0 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
	}
	return Var0;
}

int func_947(bool bParam0, bool bParam1)//Position - 0x1E72C4
{
	if (__LIB_1__::func_264(bParam0, 0, 1))
	{
		if (!bParam1)
		{
			return Global_2689235[bParam0 /*453*/].f_269.f_14;
		}
		else
		{
			return Global_2689235[bParam0 /*453*/].f_269.f_16;
		}
	}
	return -1;
}

void func_948()//Position - 0x1E9C3E
{
	if (BitTest(Global_1946250.f_4, 1))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4), 1);
	}
}

var func_949()//Position - 0x1E9C5C
{
	return BitTest(Global_1946250.f_4, 1);
}

int func_950(int iParam0)//Position - 0x1EA597
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_24402 /* Tunable: -2083346468 */;
		case 2:
			return Global_262145.f_24403 /* Tunable: -1151766186 */;
		case 3:
			return Global_262145.f_24404 /* Tunable: 935045591 */;
		case 4:
			return Global_262145.f_24405 /* Tunable: 645833970 */;
		case 5:
			return Global_262145.f_24406 /* Tunable: -1005538713 */;
		case 6:
			return Global_262145.f_24407 /* Tunable: 428555517 */;
		case 0:
			return Global_262145.f_24408 /* Tunable: -750444950 */;
		default:
	}
	return 0;
}

bool func_951()//Position - 0x1ED16D
{
	return __LIB_0__::func_137(22068, -1);
}

bool func_952()//Position - 0x1ED17D
{
	return __LIB_0__::func_137(18161, -1);
}

int func_953(int iParam0)//Position - 0x1ED18D
{
	if (Global_1946250.f_4590 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_954(int iParam0)//Position - 0x245
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 16);
	}
	return 0;
}

int func_955(int iParam0)//Position - 0xBE7
{
	return MISC::GET_BITS_IN_RANGE(iParam0, 24, 30);
}

void func_956(var uParam0, int iParam1, bool bParam2)//Position - 0xBF8
{
	if (bParam2)
	{
		uParam0->f_51 = iParam1;
	}
	else
	{
		uParam0->f_52 = iParam1;
	}
}

int func_957(int iParam0)//Position - 0x127F
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != __LIB_0__::func_160())
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
			}
		}
	}
	return 0;
}

int func_958(int iParam0)//Position - 0x12DF
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 9;
			}
		}
	}
	return 0;
}

void func_959(var uParam0, bool bParam1, int iParam2)//Position - 0x14EA
{
	if (bParam1)
	{
		uParam0->f_2 = iParam2;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
}

int func_960()//Position - 0x1506
{
	return AUDIO::FIND_RADIO_STATION_INDEX(joaat("RADIO_36_AUDIOPLAYER"));
}

int func_961(int iParam0)//Position - 0x15E5
{
	return MISC::GET_BITS_IN_RANGE(iParam0, 17, 23);
}

int func_962(int iParam0, bool bParam1)//Position - 0x648D
{
	if (__LIB_1__::func_264(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			return Global_2689235[iParam0 /*453*/].f_269.f_14;
		}
		else
		{
			return Global_2689235[iParam0 /*453*/].f_269.f_16;
		}
	}
	return -1;
}

var func_963(int iParam0)//Position - 0x6508
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_285.f_1, 2);
}

var func_964(int iParam0)//Position - 0x6523
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_285.f_1, 1);
}

bool func_965(int iParam0)//Position - 0x653E
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_285.f_1, 24);
}

void func_966(var uParam0, int iParam1, bool bParam2)//Position - 0x68EA
{
	if (bParam2)
	{
		uParam0->f_51 = iParam1;
	}
	else
	{
		uParam0->f_50 = iParam1;
	}
}

void func_967(int iParam0, var uParam1)//Position - 0xFA7D
{
	if (((((iParam0 == joaat("formula") || iParam0 == joaat("formula2")) || iParam0 == joaat("openwheel1")) || iParam0 == joaat("openwheel2")) || iParam0 == joaat("mamba")) || iParam0 == joaat("casco"))
	{
		MISC::SET_BIT(&(uParam1->f_77), 0);
		MISC::SET_BIT(&(uParam1->f_77), 1);
		MISC::SET_BIT(&(uParam1->f_77), 2);
		MISC::SET_BIT(&(uParam1->f_77), 3);
		MISC::SET_BIT(&(uParam1->f_77), 4);
		MISC::SET_BIT(&(uParam1->f_77), 5);
		MISC::SET_BIT(&(uParam1->f_77), 6);
		MISC::SET_BIT(&(uParam1->f_77), 7);
	}
	else if (iParam0 == joaat("issi7"))
	{
		MISC::SET_BIT(&(uParam1->f_77), 0);
	}
}

int func_968(int iParam0)//Position - 0x7272A
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_969(int iParam0)//Position - 0x72770
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_970(int iParam0)//Position - 0x8F95F
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_971(int iParam0)//Position - 0x8F9ED
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_972(int iParam0)//Position - 0x90138
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 4;
			}
		}
	}
	return 0;
}

bool func_973(bool bParam0)//Position - 0x94196
{
	return __LIB_4__::func_682(PLAYER::PLAYER_ID(), bParam0);
}

int func_974(var uParam0, var uParam1, char* sParam2)//Position - 0xBF674
{
	*uParam1 = 1;
	StringCopy(sParam2, "PIM_CM_M" /* GXT: LS Car Meet */, 16);
	return __LIB_4__::func_722(PLAYER::PLAYER_ID());
}

int func_975(int iParam0, var uParam1)//Position - 0xC66A1
{
	if (((iParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(iParam0, 0, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iParam0))) && !__LIB_4__::func_0(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_976()//Position - 0xF0010
{
	if (__LIB_0__::func_693(PLAYER::PLAYER_ID()) || __LIB_0__::func_694(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_206() || __LIB_0__::func_747())
		{
			return 1;
		}
	}
	return 0;
}

bool func_977()//Position - 0xF0638
{
	return __LIB_2__::func_4(PLAYER::PLAYER_ID());
}

int func_978(int iParam0, var uParam1)//Position - 0x10A550
{
	if ((((iParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(iParam0, 0, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iParam0))) && !__LIB_4__::func_0(iParam0)) && (__LIB_2__::func_779(iParam0) || Global_2725439))
	{
		return 1;
	}
	return 0;
}

int func_979(int iParam0)//Position - 0x11B196
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 != PLAYER::PLAYER_ID())
	{
		if (__LIB_3__::func_813(iParam0) && !__LIB_3__::func_998(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_980()//Position - 0x1317A8
{
	if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_1("MATC_DPADRIGH5" /* GXT: ~s~Press ~INPUT_CONTEXT~ to enter. ~n~Press ~INPUT_FRONTEND_LEFT~ to go on call. */) || __LIB_0__::func_1("MATC_DPADRIGHT" /* GXT: Press ~INPUT_CONTEXT~ to enter. */))
		{
			return 1;
		}
	}
	return 0;
}

int func_981(bool bParam0, var uParam1)//Position - 0x16013B
{
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__::func_330(bParam0) && !__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 31))
		{
			if (__LIB_1__::func_425(bParam0, 0))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool func_982(int iParam0)//Position - 0x16A4C0
{
	return __LIB_0__::func_626(ENTITY::GET_ENTITY_MODEL(iParam0));
}

bool func_983(int iParam0)//Position - 0x16AE74
{
	return __LIB_0__::func_627(ENTITY::GET_ENTITY_MODEL(iParam0));
}

int func_984(bool bParam0, int iParam1)//Position - 0x16D697
{
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__::func_397(bParam0, __LIB_0__::func_625(iParam1)) && !__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 30))
		{
			if (__LIB_1__::func_425(bParam0, 0))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_985(var uParam0, var uParam1)//Position - 0x184542
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uParam1->f_109, true);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true), 10f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_12, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uParam1->f_109.f_12, true);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
	}
	Var0 = { Var0 };
	Var1 = { Var1 };
	Var0 = { 840.743f, -3238.231f, -98.529f };
	Var1 = { 834.221f, -3234.792f, -98.527f };
	if (Global_1946250.f_4073.f_382 == 0)
	{
		if (!BitTest(uParam1->f_188, 19))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_12, false))
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
				}
				if (!BitTest(uParam1->f_188, 10))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_1[0], false))
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(Global_1946250.f_3638.f_18[0 /*36*/].f_1, 0f, 0f, 0f);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_109.f_1[0], uParam1->f_109, "gr_Bunker_AT_Tunnel", 262144, 0, 0, -1, -1f, false, 2f);
						MISC::SET_BIT(&(uParam1->f_188), 10);
					}
				}
			}
			MISC::SET_BIT(&(uParam1->f_188), 19);
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_109))
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam1->f_109, 15f);
		}
		if (!BitTest(uParam1->f_188, 20))
		{
			if (__LIB_0__::func_529(uParam1->f_109, 903.197f, -3245.255f, -97.743f, 0) <= 2f)
			{
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_109.f_12, false, false);
				MISC::SET_BIT(&(uParam1->f_188), 20);
			}
		}
	}
	else if (__LIB_2__::func_413(&(Global_1946250.f_4073), 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
		{
			if (!BitTest(uParam1->f_188, 21))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 1f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[1], false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
					ENTITY::SET_ENTITY_COLLISION(uParam1->f_109.f_12, true, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_140[1], 835.203f, -3243.384f, -98.716f, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam1->f_140[1], -21f);
				}
				ENTITY::SET_ENTITY_COORDS(uParam1->f_109, Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 62.24f);
				TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(uParam1->f_109);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[1], false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_car_park_attendant@male@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_car_park_attendant@male@base", "base", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE_LOCALLY(uParam1->f_140[1], iVar2);
				}
				MISC::SET_BIT(&(uParam1->f_188), 21);
			}
			if (!BitTest(uParam1->f_188, 22))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_1[0], false)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam1->f_109))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_109.f_1[0], uParam1->f_109, "gr_Bunker_AT_Parking", 262144, 0, 0, -1, -1f, false, 2f);
				}
				MISC::SET_BIT(&(uParam1->f_188), 22);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_109))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam1->f_109, 5f);
			}
			if (__LIB_0__::func_529(uParam1->f_109, 834.228f, -3234.791f, -98.64f, 0) <= 2f)
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(uParam1->f_109, 2f, 10, false);
			}
		}
	}
	if (!Global_1946250.f_4073.f_386)
	{
		if ((BitTest(uParam1->f_188, 23) && CAM::DOES_CAM_EXIST(iLocal_114)) && CAM::IS_CAM_RENDERING(iLocal_114))
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_114, false);
			STREAMING::CLEAR_FOCUS();
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_Bunker_Enter_Interior_Cutscene_Scene");
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_109.f_12, 50f, 50f, 0f, true, false, false, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 50f, 50f, 0f, true, false, false, true);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_114))
		{
			iLocal_114 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			CAM::SET_CAM_PARAMS(iLocal_114, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				switch (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0))
				{
					case -1:
						CAM::SET_CAM_PARAMS(iLocal_114, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
						break;
					case 0:
						CAM::SET_CAM_PARAMS(iLocal_114, 831.9871f, -3228.3909f, -98.0253f, 1.6649f, 0f, -159.9397f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(145.3238f);
						break;
					default:
						CAM::SET_CAM_PARAMS(iLocal_114, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
						break;
				}
			}
			CAM::SET_CAM_ACTIVE(iLocal_114, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		if (!BitTest(uParam1->f_188, 23))
		{
			MISC::SET_BIT(&(uParam1->f_188), 23);
		}
	}
	return 0;
}

int func_986()//Position - 0x18D09F
{
	return __LIB_2__::func_344(PLAYER::PLAYER_ID());
}

bool func_987(bool bParam0)//Position - 0x1A289D
{
	return __LIB_3__::func_592(bParam0) != 0;
}

int func_988()//Position - 0x1A2A88
{
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1))
	{
		return Global_1892703[__LIB_0__::func_582() /*599*/].f_10.f_337;
	}
	return 0;
}

int func_989(bool bParam0, int iParam1)//Position - 0x1A89D5
{
	if ((__LIB_4__::func_682(bParam0, 0) && __LIB_3__::func_972(__LIB_2__::func_191(bParam0), __LIB_3__::func_599(iParam1))) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bParam0)))
	{
		return 1;
	}
	return 0;
}

int func_990(int iParam0)//Position - 0x1A8F87
{
	bool bVar0;
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
		if (__LIB_1__::func_264(bVar0, 0, 1))
		{
			if (__LIB_3__::func_972(bVar0, iParam0))
			{
				return bVar0;
			}
		}
	}
	else if (__LIB_3__::func_972(PLAYER::PLAYER_ID(), iParam0))
	{
		return PLAYER::PLAYER_ID();
	}
	return __LIB_0__::func_160();
}

int func_991(bool bParam0)//Position - 0x1A9619
{
	int iVar0;
	if (bParam0 == __LIB_0__::func_160())
	{
		return -1;
	}
	iVar0 = __LIB_3__::func_592(bParam0);
	if (!iVar0 == 0)
	{
		return __LIB_1__::func_260(iVar0);
	}
	return -1;
}

int func_992(int iParam0, int iParam1)//Position - 0x1BAFFC
{
	if ((((((((((((((((((((((((((((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 4) || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 0) || iParam1 == 23) || iParam1 == 25) || iParam1 == 26) || iParam1 == 27) || iParam1 == 28) || iParam1 == 29) || iParam1 == 30) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || iParam1 == 35) || iParam1 == 36) || iParam1 == 37) || iParam1 == 38) || iParam1 == 39) || iParam1 == 40) || iParam1 == 41) || iParam1 == 42) || iParam1 == 43) || iParam1 == 44) || iParam1 == 45) || iParam1 == 46) || iParam1 == 47)
	{
		return 1;
	}
	else if (iParam1 == 24)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_993(int iParam0)//Position - 0x1BB19A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		switch (iVar0)
		{
			case 17:
			case 18:
			case 19:
			case 20:
			case 21:
			case 22:
				VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, iVar0, false);
				break;
			default:
				if (iVar0 != 48)
				{
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iVar0) > 0)
					{
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, iVar0);
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_994(bool bParam0)//Position - 0x1BB5D7
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_8), 18);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 18);
	}
}

int func_995(int iParam0)//Position - 0x1C17B8
{
	switch (iParam0)
	{
		case 1:
			return 31825;
		case 2:
			return 31826;
		case 3:
			return 31827;
		case 4:
			return 31828;
		case 5:
			return 31829;
		case 6:
			return 31829;
		case 7:
			return 31830;
		case 8:
			return 31831;
		case 9:
			return 31832;
		case 10:
			return 31833;
		case 11:
			return 31834;
		case 12:
			return 31834;
		case 13:
			return 31835;
		case 14:
			return 31836;
		case 15:
			return 31837;
		case 16:
			return 31838;
		case 17:
			return 31839;
		case 18:
			return 31839;
		case 19:
			return 31840;
		case 20:
			return 31841;
		case 21:
			return 31842;
		case 22:
			return 31843;
		case 23:
			return 31844;
		case 24:
			return 31844;
		case 25:
			return 31845;
		case 26:
			return 31846;
		case 27:
			return 31847;
		case 28:
			return 31848;
		case 29:
			return 31849;
		case 30:
			return 31849;
		case 31:
			return 31850;
		case 32:
			return 31851;
		case 33:
			return 31852;
		case 34:
			return 31853;
		case 35:
			return 31854;
		case 36:
			return 31854;
		case 37:
			return 31855;
		case 38:
			return 31856;
		case 39:
			return 31857;
		case 40:
			return 31858;
		case 41:
			return 31859;
		case 42:
			return 31860;
		case 43:
			return 31861;
		case 44:
			return 31862;
		case 45:
			return 31863;
		case 46:
			return 31864;
		case 47:
			return 31865;
		case 48:
			return 31866;
		case 49:
			return 31867;
		case 50:
			return 31868;
		case 51:
			return 31869;
		case 52:
			return 31870;
		case 53:
			return 31871;
		case 54:
			return 31872;
		case 55:
			return 31873;
		case 56:
			return 31874;
		case 57:
			return 31874;
		case 58:
			return 31875;
		case 59:
			return 31876;
		case 60:
			return 31877;
		case 61:
			return 31878;
		case 62:
			return 31879;
		case 63:
			return 31879;
		case 64:
			return 31880;
		case 65:
			return 31881;
		case 66:
			return 31882;
		case 67:
			return 31883;
		case 68:
			return 31884;
		case 69:
			return 31884;
		case 70:
			return 31885;
		case 71:
			return 31886;
		case 72:
			return 31887;
		case 73:
			return 31888;
		case 74:
			return 31889;
		case 75:
			return 31889;
		case 76:
			return 31890;
		case 77:
			return 31891;
		case 78:
			return 31892;
		case 79:
			return 31893;
		case 80:
			return 31894;
		case 81:
			return 31894;
		case 82:
			return 31895;
		case 83:
			return 31896;
		case 84:
			return 31897;
		case 85:
			return 31898;
		case 86:
			return 31899;
		case 87:
			return 31899;
		case 88:
			return 31900;
		case 89:
			return 31901;
		case 90:
			return 31902;
		case 91:
			return 31903;
		case 92:
			return 31904;
		case 93:
			return 31904;
		case 94:
			return 31905;
		case 95:
			return 31906;
		case 96:
			return 31907;
		case 97:
			return 31908;
		case 98:
			return 31909;
		case 99:
			return 31909;
		case 100:
			return 31910;
		case 101:
			return 31911;
		case 102:
			return 31912;
		case 103:
			return 31913;
		case 104:
			return 31914;
		case 105:
			return 31915;
		case 106:
			return 31916;
		case 107:
			return 31917;
		case 108:
			return 31918;
		case 109:
			return 31919;
		case 110:
			return 31920;
		case 111:
			return 31921;
		case 112:
			return 31922;
		case 113:
			return 31923;
		case 114:
			return 31924;
		default:
	}
	switch (iParam0)
	{
		case 115:
			return 31925;
		case 116:
			return 31926;
		case 117:
			return 31927;
		case 118:
			return 31928;
		case 119:
			return 31929;
		case 120:
			return 31930;
		case 121:
			return 31931;
		case 122:
			return 31932;
		case 123:
			return 31933;
		case 124:
			return 31934;
		case 125:
			return 31935;
		case 126:
			return 31936;
		case 127:
			return 31937;
		case 128:
			return 31938;
		case 129:
			return 31939;
		case 130:
			return 31940;
		case 131:
			return 31941;
		case 132:
			return 31942;
		case 133:
			return 31943;
		case 134:
			return 31944;
		case 135:
			return 31945;
		case 136:
			return 31946;
		case 137:
			return 31947;
		case 138:
			return 31948;
		case 139:
			return 31949;
		case 140:
			return 31950;
		case 141:
			return 31951;
		case 142:
			return 31952;
		case 143:
			return 31953;
		case 144:
			return 31954;
		case 145:
			return 31955;
		case 146:
			return 31956;
		case 147:
			return 31957;
		case 148:
			return 31958;
		case 149:
			return 31959;
		case 150:
			return 31960;
		case 151:
			return 31961;
		case 152:
			return 31962;
		case 153:
			return 31963;
		case 154:
			return 31964;
		case 155:
			return 31965;
		case 156:
			return 31966;
		case 157:
			return 31967;
		case 158:
			return 31968;
		case 159:
			return 31969;
		case 160:
			return 31970;
		case 161:
			return 31971;
		case 162:
			return 31972;
		case 163:
			return 31973;
		case 164:
			return 31974;
		case 165:
			return 31975;
		case 166:
			return 31976;
		case 167:
			return 31977;
		case 168:
			return 31978;
		case 169:
			return 31979;
		case 170:
			return 31980;
		case 171:
			return 31981;
		case 172:
			return 31982;
		case 173:
			return 31983;
		case 174:
			return 31984;
		case 175:
			return 31985;
		case 176:
			return 31986;
		case 177:
			return 31987;
		case 178:
			return 31988;
		case 179:
			return 31989;
		case 180:
			return 31990;
		case 181:
			return 31991;
		case 182:
			return 31992;
		case 183:
			return 31993;
		case 184:
			return 31994;
		case 185:
			return 31995;
		case 186:
			return 31996;
		case 187:
			return 31997;
		case 188:
			return 31998;
		case 189:
			return 31999;
		case 190:
			return 32000;
		case 191:
			return 32001;
		case 192:
			return 32002;
		case 193:
			return 32003;
		case 194:
			return 32004;
		case 195:
			return 32005;
		case 196:
			return 32006;
		case 197:
			return 32007;
		case 198:
			return 32008;
		case 199:
			return 32009;
		case 200:
			return 32010;
		case 201:
			return 32011;
		case 202:
			return 32012;
		case 203:
			return 32013;
		case 204:
			return 32014;
		case 205:
			return 32015;
		case 206:
			return 32016;
		case 207:
			return 32017;
		case 208:
			return 32018;
		case 209:
			return 32019;
		case 210:
			return 32020;
		case 211:
			return 32021;
		case 212:
			return 32022;
		case 213:
			return 32023;
		case 214:
			return 32024;
		default:
	}
	switch (iParam0)
	{
		case 215:
			return 32025;
		case 216:
			return 32026;
		case 217:
			return 32027;
		case 218:
			return 32028;
		case 219:
			return 32029;
		case 220:
			return 32030;
		case 221:
			return 32031;
		case 222:
			return 32032;
		case 223:
			return 32033;
		case 224:
			return 32034;
		case 225:
			return 32035;
		case 226:
			return 32036;
		case 227:
			return 32037;
		case 228:
			return 32038;
		case 229:
			return 32039;
		case 230:
			return 32040;
		case 231:
			return 32041;
		case 232:
			return 32042;
		case 233:
			return 32043;
		case 234:
			return 32044;
		case 235:
			return 32045;
		case 236:
			return 32046;
		case 237:
			return 32047;
		case 238:
			return 32048;
		case 239:
			return 32049;
		case 240:
			return 32050;
		case 241:
			return 32051;
		case 242:
			return 32052;
		case 243:
			return 32053;
		case 244:
			return 32054;
		case 245:
			return 32055;
		case 246:
			return 32056;
		case 247:
			return 32057;
		case 248:
			return 32058;
		case 249:
			return 32059;
		case 250:
			return 32060;
		case 251:
			return 32061;
		case 252:
			return 32062;
		case 253:
			return 32063;
		case 254:
			return 32064;
		case 255:
			return 32065;
		case 256:
			return 32066;
		case 257:
			return 32067;
		case 258:
			return 32068;
		case 259:
			return 32069;
		case 260:
			return 32070;
		case 261:
			return 32071;
		case 262:
			return 32072;
		case 263:
			return 32073;
		case 264:
			return 32074;
		case 265:
			return 32075;
		case 266:
			return 32076;
		case 267:
			return 32077;
		case 268:
			return 32078;
		case 269:
			return 32079;
		case 270:
			return 32080;
		case 271:
			return 32081;
		case 272:
			return 32082;
		case 273:
			return 32083;
		case 274:
			return 32084;
		default:
	}
	switch (iParam0)
	{
		case 275:
			return 32085;
		case 276:
			return 32086;
		case 277:
			return 32087;
		case 278:
			return 32088;
		case 279:
			return 32089;
		case 280:
			return 32090;
		case 281:
			return 32091;
		case 282:
			return 32092;
		case 283:
			return 32093;
		case 284:
			return 32094;
		case 285:
			return 32095;
		case 286:
			return 32096;
		case 287:
			return 32097;
		case 288:
			return 32098;
		case 289:
			return 32099;
		case 290:
			return 32100;
		case 291:
			return 32101;
		case 292:
			return 32102;
		case 293:
			return 32103;
		case 294:
			return 32104;
		case 295:
			return 32105;
		case 296:
			return 32106;
		case 297:
			return 32107;
		case 298:
			return 32108;
		case 299:
			return 32109;
		case 300:
			return 32110;
		case 301:
			return 32111;
		case 302:
			return 32112;
		case 303:
			return 32113;
		case 304:
			return 32114;
		case 305:
			return 32115;
		case 306:
			return 32116;
		case 307:
			return 32117;
		case 308:
			return 32118;
		case 309:
			return 32119;
		case 310:
			return 32120;
		case 311:
			return 32121;
		case 312:
			return 32122;
		case 313:
			return 32123;
		case 314:
			return 32124;
		default:
	}
	switch (iParam0)
	{
		case 315:
			return 32125;
		case 316:
			return 32126;
		case 317:
			return 32127;
		case 318:
			return 32128;
		case 319:
			return 32129;
		case 320:
			return 32130;
		case 321:
			return 32131;
		case 322:
			return 32132;
		case 323:
			return 32133;
		case 324:
			return 32134;
		case 325:
			return 32135;
		case 326:
			return 32136;
		case 327:
			return 32137;
		case 328:
			return 32138;
		case 329:
			return 32139;
		case 330:
			return 32140;
		case 331:
			return 32141;
		case 332:
			return 32142;
		case 333:
			return 32143;
		case 334:
			return 32144;
		case 335:
			return 32145;
		case 336:
			return 32146;
		case 337:
			return 32147;
		case 338:
			return 32148;
		case 339:
			return 32149;
		case 340:
			return 32150;
		case 341:
			return 32151;
		case 342:
			return 32152;
		case 343:
			return 32153;
		case 344:
			return 32154;
		case 345:
			return 32155;
		case 346:
			return 32156;
		case 347:
			return 32157;
		case 348:
			return 32158;
		case 349:
			return 32159;
		case 350:
			return 32160;
		case 351:
			return 32161;
		case 352:
			return 32162;
		case 353:
			return 32163;
		case 354:
			return 32164;
		case 355:
			return 32165;
		case 356:
			return 32166;
		case 357:
			return 32167;
		case 358:
			return 32168;
		case 359:
			return 32169;
		case 360:
			return 32170;
		case 361:
			return 32171;
		case 362:
			return 32172;
		case 363:
			return 32173;
		case 364:
			return 32174;
		case 365:
			return 32175;
		case 366:
			return 32176;
		case 367:
			return 32177;
		case 368:
			return 32178;
		case 369:
			return 32179;
		case 370:
			return 32180;
		case 371:
			return 32181;
		case 372:
			return 32182;
		case 373:
			return 32183;
		case 374:
			return 32184;
		case 375:
			return 32185;
		case 376:
			return 32186;
		case 377:
			return 32187;
		case 378:
			return 32188;
		case 379:
			return 32189;
		case 380:
			return 32190;
		case 381:
			return 32191;
		case 382:
			return 32192;
		case 383:
			return 32193;
		case 384:
			return 32194;
		case 385:
			return 32195;
		case 386:
			return 32196;
		case 387:
			return 32197;
		case 388:
			return 32198;
		case 389:
			return 32199;
		case 390:
			return 32200;
		case 391:
			return 32201;
		case 392:
			return 32202;
		case 393:
			return 32203;
		case 394:
			return 32204;
		case 395:
			return 32205;
		case 396:
			return 32206;
		case 397:
			return 32207;
		case 398:
			return 32208;
		case 399:
			return 32209;
		case 400:
			return 32210;
		case 401:
			return 32211;
		case 402:
			return 32212;
		case 403:
			return 32213;
		case 404:
			return 32214;
		case 405:
			return 32215;
		case 406:
			return 32216;
		case 407:
			return 32217;
		case 408:
			return 32218;
		case 409:
			return 32219;
		case 410:
			return 32220;
		case 411:
			return 32221;
		case 412:
			return 32222;
		case 413:
			return 32223;
		case 414:
			return 32224;
		case 415:
			return 32224;
		default:
	}
	return 513;
}

float func_996(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x1C4791
{
	if (bParam3)
	{
		return ((-fParam1 - SYSTEM::SQRT(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + SYSTEM::SQRT(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_997(int iParam0)//Position - 0x1C47D5
{
	float fVar0;
	float fVar1;
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (SYSTEM::TO_FLOAT(Global_262145.f_31076 /* Tunable: -1131555628 */) / 2f);
	return SYSTEM::ROUND((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

int func_998()//Position - 0x1C5C2A
{
	if (__LIB_2__::func_575(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_999(int iParam0)//Position - 0x1CACC9
{
	if (Global_23150.f_5154 >= 3 || Global_23150.f_5153 >= 4)
	{
		return;
	}
	Global_23150.f_5087[Global_23150.f_5153] = 2;
	Global_23150.f_5153++;
	Global_23150.f_5092[Global_23150.f_5154] = iParam0;
	Global_23150.f_5154++;
}

}