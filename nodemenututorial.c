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
	struct<114> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
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
	func_93();
	while (true)
	{
		if (__LIB_6__.func_949())
		{
			func_82();
			return;
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x93
{
	if (!bLocal_46)
	{
		bLocal_46 = func_81(&Local_45);
		return;
	}
	func_2(&Local_45);
}

int func_2(int* iParam0)//Position - 0xB3
{
	if (!func_80(iParam0))
	{
		return 1;
	}
	if (func_15(iParam0))
	{
		return 1;
	}
	func_3(iParam0);
	return 0;
}

int func_3(int* iParam0)//Position - 0xDE
{
	bool bVar0;
	bVar0 = func_12(iParam0);
	if (bVar0)
	{
		if (!func_6(iParam0))
		{
			return 0;
		}
	}
	func_5(iParam0);
	if (!bVar0)
	{
		func_4(iParam0);
	}
	return 1;
}

void func_4(int* iParam0)//Position - 0x114
{
	if (iParam0->f_111 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_111);
}

void func_5(int* iParam0)//Position - 0x12C
{
	if (iParam0->f_112 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_112);
}

int func_6(int* iParam0)//Position - 0x144
{
	if (!func_81(iParam0))
	{
		return 0;
	}
	if (!func_11(iParam0))
	{
		return 0;
	}
	func_9(iParam0, 0);
	func_7(iParam0, 1);
	return 1;
}

void func_7(int* iParam0, int iParam1)//Position - 0x177
{
	__LIB_1__.func_846(iParam0, iParam1);
}

void func_9(int* iParam0, int iParam1)//Position - 0x197
{
	__LIB_1__.func_845(iParam0, iParam1);
}

int func_11(int* iParam0)//Position - 0x1B7
{
	if (iParam0->f_107 == 0)
	{
		return 1;
	}
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_107);
	return StackVal;
}

bool func_12(int* iParam0)//Position - 0x1D2
{
	return (func_13(iParam0, 1) || !func_13(iParam0, 0));
}

bool func_13(int* iParam0, int iParam1)//Position - 0x1EF
{
	return __LIB_0__.func_492(iParam0, iParam1);
}

int func_15(int* iParam0)//Position - 0x20D
{
	func_77(iParam0);
	func_72();
	if (func_53(iParam0))
	{
		return 0;
	}
	if (!func_13(iParam0, 1))
	{
		func_47(iParam0);
	}
	func_43(iParam0);
	if (func_13(iParam0, 2))
	{
		func_16(iParam0, 0);
		return 1;
	}
	return 0;
}

void func_16(int* iParam0, bool bParam1)//Position - 0x259
{
	if (bParam1)
	{
		func_7(iParam0, 2);
	}
	func_39(iParam0);
	func_7(iParam0, 3);
	func_35(iParam0);
	func_18(iParam0, 0);
	func_17(iParam0);
}

void func_17(int* iParam0)//Position - 0x28E
{
	if (iParam0->f_113 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_113);
}

int func_18(int* iParam0, int iParam1)//Position - 0x2A6
{
	struct<33> Var0;
	if (!func_30(iParam0, iParam1))
	{
		return 0;
	}
	iParam0->f_1 = iParam1;
	Var0 = { func_29(iParam0) };
	MISC::COPY_SCRIPT_STRUCT(&(iParam0->f_72), &Var0, 33);
	if (!func_28(&(iParam0->f_6), iParam1, &(iParam0->f_72)))
	{
		return 0;
	}
	if (!func_27(&(iParam0->f_72)) && func_26(&(iParam0->f_72)))
	{
		func_25(iParam0, iParam0->f_1);
		func_24(&(iParam0->f_72));
	}
	else
	{
		func_25(iParam0, -1);
	}
	func_19(iParam0, &(iParam0->f_72));
	return 1;
}

void func_19(int* iParam0, var uParam1)//Position - 0x332
{
	int iVar0;
	char* sVar1;
	if (__LIB_0__.func_492(iParam0, 3))
	{
		func_22(iParam0, __LIB_5__.func_950(uParam1));
		return;
	}
	iVar0 = __LIB_2__.func_340(uParam1);
	if (iVar0 != 0)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam0->f_1);
		Call_Loc(iVar0);
		return;
	}
	sVar1 = __LIB_10__.func_843(uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	func_22(iParam0, sVar1);
}

void func_22(var uParam0, char* sParam1)//Position - 0x3A1
{
	if (uParam0->f_108 == 0)
	{
		return;
	}
	Stack.Push(sParam1);
	Call_Loc(uParam0->f_108);
}

int func_24(var uParam0)//Position - 0x3C7
{
	if (uParam0->f_17 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_17);
	return StackVal;
}

void func_25(var uParam0, int iParam1)//Position - 0x3E0
{
	if (uParam0->f_109 == 0)
	{
		return;
	}
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_109);
}

int func_26(var uParam0)//Position - 0x3FA
{
	if (uParam0->f_15 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_15);
	return StackVal;
}

int func_27(var uParam0)//Position - 0x413
{
	if (uParam0->f_14 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_14);
	return StackVal;
}

int func_28(var uParam0, int iParam1, var uParam2)//Position - 0x42C
{
	if (uParam0->f_9 == 0)
	{
		return 0;
	}
	Stack.Push(iParam1);
	Stack.Push(uParam2);
	Call_Loc(uParam0->f_9);
	switch (StackVal)
	{
		case 0:
			return 1;
		case 2:
			return 1;
		case 1:
			return 0;
		default:
	}
	return 0;
}

struct<33> func_29(var uParam0)//Position - 0x46D
{
	struct<33> Var0;
	if (uParam0->f_105 != 0)
	{
		Call_Loc(uParam0->f_105);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal;
	}
	Var0.f_8 = -1;
	return Var0;
}

int func_30(int* iParam0, int iParam1)//Position - 0x493
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = func_31(&(iParam0->f_6));
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = -1;
	}
	if (iParam1 < iVar0 || iParam1 > iVar1)
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)//Position - 0x4CB
{
	return __LIB_1__.func_294((func_33(uParam0) - 1), 0);
}

int func_33(var uParam0)//Position - 0x4F6
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	iVar0 = __LIB_0__.func_991(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (uParam0->f_8 == -1)
	{
		uParam0->f_8 = 0;
		Var1.f_8 = -1;
		iVar2 = -1;
		while (iVar2 != 2)
		{
			Stack.Push(uParam0->f_8);
			Stack.Push(&Var1);
			Call_Loc(iVar0);
			iVar2 = StackVal;
			if (iVar2 != 2)
			{
				uParam0->f_8++;
			}
		}
	}
	return uParam0->f_8;
}

void func_35(int* iParam0)//Position - 0x55D
{
	func_36(iParam0, &(iParam0->f_39), 1, 1);
}

void func_36(int* iParam0, var* uParam1, bool bParam2, bool bParam3)//Position - 0x571
{
	int iVar0;
	MISC::COPY_SCRIPT_STRUCT(&(iParam0->f_6), uParam1, 33);
	if (bParam3)
	{
		func_38(&(iParam0->f_6));
	}
	if (bParam2)
	{
		iVar0 = __LIB_0__.func_996(&(iParam0->f_6));
		func_18(iParam0, iVar0);
		func_77(iParam0);
	}
	func_9(iParam0, 1);
}

void func_38(var uParam0)//Position - 0x5C3
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_21);
}

void func_39(int* iParam0)//Position - 0x5DB
{
	if (func_13(iParam0, 5) && func_42(&(iParam0->f_72)))
	{
		func_40(&(iParam0->f_72), 3, "");
	}
	func_7(iParam0, 5);
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_5 = 0;
}

void func_40(var uParam0, int iParam1, char* sParam2)//Position - 0x61B
{
	int iVar0;
	iVar0 = __LIB_30__.func_494(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(iParam1);
	Stack.Push(sParam2);
	Call_Loc(iVar0);
}

bool func_42(var uParam0)//Position - 0x647
{
	return __LIB_30__.func_494(uParam0) != 0;
}

void func_43(int* iParam0)//Position - 0x657
{
	func_45(iParam0);
	if (__LIB_30__.func_495(&(iParam0->f_72)))
	{
		func_19(iParam0, &(iParam0->f_72));
	}
}

void func_45(int* iParam0)//Position - 0x686
{
	if (func_46(&(iParam0->f_72)))
	{
		func_9(iParam0, 1);
	}
}

int func_46(var uParam0)//Position - 0x6A0
{
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_22);
	return StackVal;
}

void func_47(int* iParam0)//Position - 0x6B9
{
	if (!__LIB_29__.func_318(&(iParam0->f_72)))
	{
		if (func_50(&(iParam0->f_6), iParam0))
		{
			func_9(iParam0, 1);
		}
	}
	if (func_48(&(iParam0->f_72), iParam0))
	{
		func_9(iParam0, 1);
	}
}

int func_48(var uParam0, int* iParam1)//Position - 0x6F5
{
	int iVar0;
	iVar0 = __LIB_29__.func_201(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Stack.Push(iParam1);
	Stack.Push(uParam0);
	Call_Loc(iVar0);
	return StackVal;
}

int func_50(var uParam0, var uParam1)//Position - 0x722
{
	int iVar0;
	iVar0 = func_51(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Stack.Push(uParam1);
	Stack.Push(uParam0);
	Call_Loc(iVar0);
	return StackVal;
}

var func_51(var uParam0)//Position - 0x743
{
	return uParam0->f_31;
}

int func_53(int* iParam0)//Position - 0x75B
{
	if (func_13(iParam0, 3))
	{
		func_63(iParam0);
		return 1;
	}
	if (func_13(iParam0, 5))
	{
		func_54(iParam0);
		return 1;
	}
	return 0;
}

void func_54(int* iParam0)//Position - 0x78C
{
	if (!func_42(&(iParam0->f_72)))
	{
		func_7(iParam0, 5);
		return;
	}
	if (!__LIB_26__.func_422(&(iParam0->f_3), &(iParam0->f_4), &(iParam0->f_5), 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0))
	{
		return;
	}
	func_40(&(iParam0->f_72), iParam0->f_3, MISC::GET_ONSCREEN_KEYBOARD_RESULT());
	func_39(iParam0);
	func_9(iParam0, 1);
}

void func_63(int* iParam0)//Position - 0x19B3
{
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)))
	{
		func_64(iParam0, 1, 1);
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
	{
		func_7(iParam0, 3);
		func_9(iParam0, 1);
	}
}

int func_64(int* iParam0, bool bParam1, bool bParam2)//Position - 0x1A00
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	if (!func_69(&(iParam0->f_72)))
	{
		return 0;
	}
	func_18(iParam0, iParam0->f_1);
	if (!func_68(iParam0))
	{
		return 1;
	}
	if (!func_67(iParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		func_65(iParam0);
	}
	if (__LIB_0__.func_492(&(iParam0->f_72.f_7), 1))
	{
		func_9(iParam0, 2);
	}
	if (__LIB_0__.func_991(&(iParam0->f_72)) == 0)
	{
		return 0;
	}
	func_36(iParam0, &(iParam0->f_72), 1, bParam2);
	if (__LIB_0__.func_492(&(iParam0->f_72.f_7), 2))
	{
		func_64(iParam0, 1, 1);
	}
	func_9(iParam0, 1);
	return 1;
}

void func_65(int* iParam0)//Position - 0x1AA9
{
	func_66(&(iParam0->f_72));
}

void func_66(var uParam0)//Position - 0x1AB9
{
	if (uParam0->f_19 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_19);
}

int func_67(int* iParam0)//Position - 0x1AD1
{
	if (!func_13(iParam0, 5) && func_42(&(iParam0->f_72)))
	{
		func_9(iParam0, 5);
		return 0;
	}
	func_7(iParam0, 5);
	return 1;
}

int func_68(int* iParam0)//Position - 0x1B04
{
	if (!func_13(iParam0, 3) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_5__.func_950(&(iParam0->f_72))))
	{
		func_9(iParam0, 3);
		func_9(iParam0, 1);
		return 0;
	}
	func_7(iParam0, 3);
	return 1;
}

int func_69(var uParam0)//Position - 0x1B43
{
	if (uParam0->f_13 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_13);
	return StackVal;
}

bool func_70(var uParam0)//Position - 0x1B5C
{
	return func_71(&(uParam0->f_72));
}

int func_71(var uParam0)//Position - 0x1B6C
{
	if (uParam0->f_26 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_26);
	return StackVal;
}

void func_72()//Position - 0x1B85
{
	func_76();
	func_75();
	func_74();
	func_73();
}

void func_73()//Position - 0x1B9D
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
}

void func_74()//Position - 0x1BCD
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 137 /*INPUT_VEH_PUSHBIKE_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
}

void func_75()//Position - 0x1C04
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 45 /*INPUT_RELOAD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 55 /*INPUT_DIVE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
}

void func_76()//Position - 0x1C5B
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
}

void func_77(var uParam0)//Position - 0x1CD3
{
	if (func_27(&(uParam0->f_72)) || !func_26(&(uParam0->f_72)))
	{
		func_78(uParam0, 1);
	}
}

void func_78(int* iParam0, int iParam1)//Position - 0x1CFC
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	iVar1 = iParam0->f_1;
	iVar2 = func_33(&(iParam0->f_6));
	Var3.f_8 = -1;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var3 = { func_29(iParam0) };
		iVar1 = (iVar1 + iParam1);
		iVar1 = __LIB_3__.func_681(iVar1, iVar2);
		if (!func_28(&(iParam0->f_6), iVar1, &Var3))
		{
			return;
		}
		if (!func_27(&Var3) && func_26(&Var3))
		{
		}
		else
		{
			iVar0++;
		}
	}
	func_18(iParam0, iVar1);
}

bool func_80(var uParam0)//Position - 0x1D93
{
	return !func_13(uParam0, 2);
}

int func_81(int* iParam0)//Position - 0x1DA3
{
	if (iParam0->f_106 == 0)
	{
		return 1;
	}
	Call_Loc(iParam0->f_106);
	return StackVal;
}

void func_82()//Position - 0x1DBC
{
	func_83(&Local_45);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_83(int* iParam0)//Position - 0x1DCE
{
	func_84(iParam0);
	func_7(iParam0, 0);
	func_7(iParam0, 1);
}

void func_84(var uParam0)//Position - 0x1DEA
{
	if (uParam0->f_110 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_110);
}

void func_93()//Position - 0x1F29
{
	struct<9> Var0;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Var0.f_8 = -1;
	func_245(&Var0);
	Local_45 = { func_104(&Var0, 0) };
	iLocal_47 = 34543/*func_245*/;
	iLocal_48 = 8028/*func_94*/;
}

void func_94(var uParam0)//Position - 0x1F5C
{
	func_103(uParam0, "TUT_ROOT_M1T", 0);
	func_102(uParam0, "TUT_ROOT_M1", 0);
	func_100(uParam0, "TUT_ROOT_M1_D", 0);
	func_95(uParam0, 0, 8106/*func_96*/, 2);
}

void func_95(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1F91
{
	*uParam0 = iParam1;
	uParam0->f_9 = iParam2;
	uParam0->f_8 = iParam3;
}

int func_96(int iParam0, var uParam1)//Position - 0x1FAA
{
	__LIB_3__.func_683(uParam1, iLocal_48);
	switch (iParam0)
	{
		case 0:
			func_98(uParam1);
			return 0;
		case 1:
			func_97(uParam1);
			return 0;
		default:
	}
	return 2;
}

void func_97(var uParam0)//Position - 0x1FE2
{
	func_102(uParam0, "TUT_SUB_M2", 0);
	func_100(uParam0, "TUT_SUB_M2_D", 0);
}

void func_98(var uParam0)//Position - 0x2000
{
	func_102(uParam0, "TUT_SUB_M2", 0);
	func_100(uParam0, "TUT_SUB_M2_D", 0);
}

void func_100(var uParam0, char* sParam1, bool bParam2)//Position - 0x202C
{
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_4 = sParam1;
	func_101(uParam0, 6, bParam2);
}

void func_101(var uParam0, int iParam1, bool bParam2)//Position - 0x204D
{
	if (bParam2)
	{
		__LIB_1__.func_845(&(uParam0->f_7), iParam1);
	}
	else
	{
		__LIB_1__.func_846(&(uParam0->f_7), iParam1);
	}
}

void func_102(var uParam0, char* sParam1, bool bParam2)//Position - 0x2071
{
	uParam0->f_3 = sParam1;
	func_101(uParam0, 5, bParam2);
}

void func_103(var uParam0, char* sParam1, bool bParam2)//Position - 0x2088
{
	uParam0->f_1 = sParam1;
	func_101(uParam0, 3, bParam2);
}

struct<114> func_104(var* uParam0, int iParam1)//Position - 0x209F
{
	struct<114> Var0;
	Var0.f_6.f_8 = -1;
	Var0.f_39.f_8 = -1;
	Var0.f_72.f_8 = -1;
	func_223(&Var0, 33364/*func_224*/);
	func_192(&Var0, 18535/*func_193*/);
	func_189(&Var0, 18171/*func_190*/);
	func_186(&Var0, 18040/*func_187*/);
	func_117(&Var0, 10695/*func_118*/);
	func_113(&Var0, 10258/*func_114*/);
	func_107(&Var0, 8584/*func_108*/);
	func_106(&Var0, uParam0);
	func_105(&Var0, uParam0, iParam1, 0);
	return Var0;
}

void func_105(int* iParam0, var* uParam1, int iParam2, bool bParam3)//Position - 0x2126
{
	func_36(iParam0, uParam1, 0, bParam3);
	func_18(iParam0, iParam2);
	if (__LIB_0__.func_991(uParam1) == 0)
	{
		return;
	}
	if (__LIB_0__.func_492(&(iParam0->f_72.f_7), 2))
	{
		func_64(iParam0, 0, 1);
	}
}

void func_106(var uParam0, var* uParam1)//Position - 0x2166
{
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_39), uParam1, 33);
}

void func_107(var uParam0, int iParam1)//Position - 0x217A
{
	uParam0->f_110 = iParam1;
}

void func_108()//Position - 0x2188
{
	__LIB_1__.func_193(1, 0);
	__LIB_7__.func_49(1, -1);
}

void func_113(var uParam0, int iParam1)//Position - 0x2804
{
	uParam0->f_106 = iParam1;
}

bool func_114()//Position - 0x2812
{
	return __LIB_7__.func_161(0, -1, 1);
}

void func_117(var uParam0, int iParam1)//Position - 0x29B9
{
	uParam0->f_105 = iParam1;
}

struct<33> func_118()//Position - 0x29C7
{
	struct<33> Var0;
	Var0.f_8 = -1;
	__LIB_31__.func_621(&Var0, 14060/*func_170*/);
	func_122(&Var0, 11013/*func_124*/, 0);
	__LIB_30__.func_496(&Var0, 10762/*func_120*/);
	return Var0;
}

int func_120(var uParam0)//Position - 0x2A0A
{
	__LIB_1__.func_344(202, "PIM_CEXI" /* GXT: Back */, -1);
	if (func_69(uParam0))
	{
		__LIB_1__.func_344(201, "PIM_CSEL" /* GXT: Select */, -1);
	}
	return 1;
}

void func_122(var uParam0, int iParam1, int iParam2)//Position - 0x2AE1
{
	uParam0->f_28 = iParam1;
	func_123(uParam0, iParam2);
}

void func_123(var uParam0, var uParam1)//Position - 0x2AF7
{
	uParam0->f_29 = uParam1;
}

bool func_124(int* iParam0, var uParam1)//Position - 0x2B05
{
	func_149(iParam0);
	return func_125(iParam0) != 0;
}

int func_125(int* iParam0)//Position - 0x2B1B
{
	int iVar0;
	iVar0 = func_144(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_140(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_133(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_127(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_126(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

int func_126(int* iParam0)//Position - 0x2B83
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/);
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) && func_69(&(iParam0->f_72)))
	{
		func_64(iParam0, 1, 1);
		return 2;
	}
	return 0;
}

int func_127(int* iParam0)//Position - 0x2BB7
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
	{
		func_131(iParam0);
		return 9;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
	{
		func_128(iParam0);
		return 10;
	}
	return 0;
}

void func_128(int* iParam0)//Position - 0x2BF8
{
	if (!func_70(iParam0))
	{
		return;
	}
	if (!func_69(&(iParam0->f_72)))
	{
		return;
	}
	func_130(&(iParam0->f_72));
	func_129(&(iParam0->f_72));
	func_9(iParam0, 1);
}

void func_129(var uParam0)//Position - 0x2C33
{
	if (uParam0->f_24 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_24);
}

void func_130(var uParam0)//Position - 0x2C4B
{
	if (uParam0->f_23 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_23);
}

void func_131(int* iParam0)//Position - 0x2C63
{
	if (!func_70(iParam0))
	{
		return;
	}
	if (!func_69(&(iParam0->f_72)))
	{
		return;
	}
	func_130(&(iParam0->f_72));
	func_132(&(iParam0->f_72));
	func_9(iParam0, 1);
}

void func_132(var uParam0)//Position - 0x2C9E
{
	if (uParam0->f_25 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_25);
}

int func_133(int* iParam0)//Position - 0x2CB6
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/);
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
	{
		func_134(iParam0, 0, 1);
		return 1;
	}
	return 0;
}

void func_134(int* iParam0, bool bParam1, bool bParam2)//Position - 0x2CDC
{
	struct<33> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (bParam2)
	{
		func_139(&(iParam0->f_72));
	}
	Var0 = { func_29(iParam0) };
	if (!func_137(iParam0, &Var0))
	{
		func_9(iParam0, 2);
		return;
	}
	iVar1 = __LIB_0__.func_348(&(iParam0->f_6));
	bVar2 = __LIB_0__.func_492(&(iParam0->f_6.f_7), 2);
	if (func_13(iParam0, 4))
	{
		iVar1 = 0;
	}
	iVar3 = __LIB_15__.func_763(&(iParam0->f_6));
	func_36(iParam0, &Var0, 0, 1);
	if (func_30(iParam0, iVar1))
	{
		if (iVar3 != 0)
		{
			Call_Loc(iVar3);
		}
		func_18(iParam0, iVar1);
	}
	else
	{
		func_18(iParam0, 0);
		func_24(&(iParam0->f_72));
	}
	if (bVar2 && !bParam1)
	{
		func_134(iParam0, 0, 1);
	}
	else if (__LIB_0__.func_492(&(iParam0->f_72.f_7), 2) && !bParam1)
	{
		func_64(iParam0, 1, 1);
		func_18(iParam0, iVar1);
	}
	func_9(iParam0, 1);
}

bool func_137(var uParam0, var uParam1)//Position - 0x2DDA
{
	return func_138(&(uParam0->f_6), uParam1);
}

int func_138(var uParam0, var uParam1)//Position - 0x2DEC
{
	if (uParam0->f_10 == 0)
	{
		return 0;
	}
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_10);
	return 1;
}

void func_139(var uParam0)//Position - 0x2E08
{
	if (uParam0->f_20 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_20);
}

int func_140(int* iParam0)//Position - 0x2E20
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/))
	{
		func_141(iParam0, -1);
		return 5;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/))
	{
		func_141(iParam0, 1);
		return 6;
	}
	return 0;
}

int func_141(int* iParam0, int iParam1)//Position - 0x2E63
{
	int iVar0;
	iVar0 = func_143(iParam0);
	if (iVar0 <= 1)
	{
		return 0;
	}
	if (func_142(&(iParam0->f_72)))
	{
		func_9(iParam0, 1);
	}
	func_78(iParam0, iParam1);
	if (func_24(&(iParam0->f_72)))
	{
		func_9(iParam0, 1);
	}
	return 1;
}

int func_142(var uParam0)//Position - 0x2EAA
{
	if (uParam0->f_18 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_18);
	return StackVal;
}

int func_143(var uParam0)//Position - 0x2EC3
{
	return func_33(&(uParam0->f_6));
}

int func_144(int* iParam0)//Position - 0x2ED3
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
	{
		if (func_145(iParam0, -1))
		{
			return 3;
		}
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
	{
		if (func_145(iParam0, 1))
		{
			return 4;
		}
		return 0;
	}
	return 0;
}

int func_145(int* iParam0, int iParam1)//Position - 0x2F22
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__.func_492(&(iParam0->f_6.f_7), 2))
	{
		return 0;
	}
	bVar0 = __LIB_0__.func_492(&(iParam0->f_6.f_7), 7);
	if (bVar0)
	{
		iVar1 = func_147(iParam0);
		iVar2 = func_146(iParam0);
		if ((iParam1 < 0 && iVar1 <= 0) || (iParam1 > 0 && iVar1 >= iVar2))
		{
			return 0;
		}
	}
	func_134(iParam0, 1, 1);
	func_141(iParam0, iParam1);
	func_64(iParam0, 1, 1);
	return 1;
}

int func_146(var uParam0)//Position - 0x2FA2
{
	struct<33> Var0;
	if (!__LIB_0__.func_492(&(uParam0->f_6.f_7), 2))
	{
		return 0;
	}
	Var0 = { func_29(uParam0) };
	if (!func_138(&(uParam0->f_6), &Var0))
	{
		return 0;
	}
	return func_31(&Var0);
}

int func_147(var uParam0)//Position - 0x2FE0
{
	if (!__LIB_0__.func_492(&(uParam0->f_6.f_7), 2))
	{
		return 0;
	}
	return func_148(uParam0);
}

var func_148(var uParam0)//Position - 0x3001
{
	return __LIB_0__.func_348(&(uParam0->f_6));
}

void func_149(int* iParam0)//Position - 0x3011
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return;
	}
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	__LIB_7__.func_287(0, 0, 0, 1);
	func_164();
	func_161(iParam0);
	func_157(iParam0);
	func_151(iParam0);
	func_150(iParam0);
}

void func_150(int* iParam0)//Position - 0x3057
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
	{
		func_134(iParam0, 0, 1);
	}
}

void func_151(int* iParam0)//Position - 0x3078
{
	bool bVar0;
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/);
	bVar0 = func_156();
	if (func_154() || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) && bVar0))
	{
		func_141(iParam0, -1);
		return;
	}
	if (func_152() || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/) && bVar0))
	{
		func_141(iParam0, 1);
		return;
	}
}

bool func_152()//Position - 0x30E0
{
	return (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && func_153());
}

bool func_153()//Position - 0x30F8
{
	return Global_4539961 == -3;
}

bool func_154()//Position - 0x3108
{
	return (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && func_155());
}

bool func_155()//Position - 0x3120
{
	return Global_4539961 == -2;
}

bool func_156()//Position - 0x3130
{
	return Global_4539961 > -1;
}

void func_157(int* iParam0)//Position - 0x313E
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true);
	if (!PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
	{
		return;
	}
	if (!func_160())
	{
		func_9(iParam0, 2);
		return;
	}
	if (func_159(iParam0))
	{
		func_64(iParam0, 1, 1);
	}
	else
	{
		func_158(iParam0);
	}
}

void func_158(int* iParam0)//Position - 0x3190
{
	func_18(iParam0, Global_4539961);
}

bool func_159(int* iParam0)//Position - 0x31A3
{
	return Global_4539961 == iParam0->f_1;
}

bool func_160()//Position - 0x31B4
{
	return ((func_156() || func_153()) || func_155());
}

void func_161(int* iParam0)//Position - 0x31D4
{
	int iVar0;
	if (!func_156())
	{
		return;
	}
	if (!__LIB_30__.func_497())
	{
		return;
	}
	if (!func_159(iParam0))
	{
		return;
	}
	iVar0 = __LIB_3__.func_632(0.045f);
	if (iVar0 > 0)
	{
		func_128(iParam0);
	}
	else if (iVar0 < 0)
	{
		func_131(iParam0);
	}
	else if (iVar0 == -999)
	{
		func_64(iParam0, 1, 1);
	}
}

void func_164()//Position - 0x3321
{
	HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	HUD::SET_MOUSE_CURSOR_STYLE(1);
}

void func_170(var uParam0, int iParam1)//Position - 0x36EC
{
	__LIB_18__.func_477(iParam1, __LIB_0__.func_997(uParam0), 0, 1, 0, 0, 0);
}

void func_186(var uParam0, int iParam1)//Position - 0x466A
{
	uParam0->f_108 = iParam1;
}

void func_187(char* sParam0)//Position - 0x4678
{
	__LIB_1__.func_342(sParam0, 0, 0);
}

void func_189(var uParam0, int iParam1)//Position - 0x46ED
{
	uParam0->f_109 = iParam1;
}

void func_190(var uParam0)//Position - 0x46FB
{
	__LIB_2__.func_183(uParam0, 1, 1);
}

void func_192(var uParam0, int iParam1)//Position - 0x4859
{
	uParam0->f_112 = iParam1;
}

void func_223(var uParam0, int iParam1)//Position - 0x8246
{
	uParam0->f_107 = iParam1;
}

int func_224(int* iParam0)//Position - 0x8254
{
	__LIB_4__.func_222(-1);
	__LIB_1__.func_193(1, 0);
	func_241(iParam0);
	func_237(iParam0);
	__LIB_3__.func_630(0, 0, 0, 0, 0);
	func_232(iParam0);
	func_225(iParam0);
	func_18(iParam0, iParam0->f_1);
	return 1;
}

void func_225(int* iParam0)//Position - 0x8294
{
	if (func_13(iParam0, 3))
	{
		__LIB_1__.func_344(202, "PIMK2_CANCEL", -1);
		__LIB_1__.func_344(201, "PIMK2_ACCEPT", -1);
		return;
	}
	if (func_13(iParam0, 5))
	{
		return;
	}
	if (!__LIB_29__.func_318(&(iParam0->f_72)))
	{
		func_229(iParam0);
	}
	func_226(iParam0);
}

void func_226(int* iParam0)//Position - 0x82E4
{
	func_227(&(iParam0->f_72), &(iParam0->f_72));
}

void func_227(var uParam0, var uParam1)//Position - 0x82F8
{
	int iVar0;
	iVar0 = __LIB_30__.func_498(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(uParam1);
	Call_Loc(iVar0);
}

void func_229(int* iParam0)//Position - 0x8323
{
	func_230(&(iParam0->f_6), &(iParam0->f_72));
}

void func_230(var uParam0, var uParam1)//Position - 0x8337
{
	int iVar0;
	iVar0 = __LIB_31__.func_461(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(uParam1);
	Call_Loc(iVar0);
}

void func_232(int* iParam0)//Position - 0x8362
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	int iVar4;
	int iVar5;
	__LIB_3__.func_685(iParam0, 0);
	iVar0 = __LIB_0__.func_991(&(iParam0->f_6));
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	Var3.f_8 = -1;
	iVar4 = -1;
	while (iVar4 != 2)
	{
		Var3 = { func_29(iParam0) };
		Stack.Push(iVar1);
		Stack.Push(&Var3);
		Call_Loc(iVar0);
		iVar4 = StackVal;
		if (iVar4 != 0)
		{
			iVar1++;
		}
		else
		{
			if (func_233(iParam0, iVar1, &Var3))
			{
				iVar2++;
			}
			iVar1++;
		}
	}
	iVar5 = __LIB_1__.func_294(0, (iVar2 - 1));
	__LIB_3__.func_685(iParam0, iVar5);
	func_25(iParam0, iParam0->f_1);
	func_24(&(iParam0->f_72));
}

int func_233(var uParam0, int iParam1, var uParam2)//Position - 0x8401
{
	if (func_27(uParam2))
	{
		return 0;
	}
	func_234(uParam2, iParam1);
	Global_23150.f_1616[iParam1] = func_69(uParam2);
	return 1;
}

void func_234(var uParam0, var uParam1)//Position - 0x842F
{
	if (uParam0->f_16 == 0)
	{
		return;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_16);
}

void func_237(int* iParam0)//Position - 0x8498
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_1__.func_192(__LIB_0__.func_649(&(iParam0->f_6)))))
	{
		__LIB_1__.func_319(__LIB_0__.func_997(&(iParam0->f_6)));
		return;
	}
	__LIB_1__.func_319(__LIB_0__.func_649(&(iParam0->f_6)));
}

void func_241(int* iParam0)//Position - 0x852F
{
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	func_4(iParam0);
}

void func_245(var uParam0)//Position - 0x86EF
{
	func_103(uParam0, "TUT_ROOT_TITLE", 0);
	func_95(uParam0, 0, 34574/*func_246*/, 2);
}

int func_246(int iParam0, var uParam1)//Position - 0x870E
{
	__LIB_3__.func_683(uParam1, iLocal_47);
	switch (iParam0)
	{
		case 0:
			func_94(uParam1);
			return 0;
		case 1:
			func_247(uParam1);
			return 0;
		default:
	}
	return 2;
}

void func_247(var uParam0)//Position - 0x8746
{
	func_102(uParam0, "TUT_ROOT_M2", 0);
	func_100(uParam0, "TUT_ROOT_M2_D", 0);
}

