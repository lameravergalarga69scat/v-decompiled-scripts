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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<136> Local_109 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_110[32];
	struct<230> Local_111 = { 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 6, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 2, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_112 = 2;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 3;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 10;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	struct<479> Local_133 = { 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2071877360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	int* iLocal_137 = NULL;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	int* iLocal_140 = NULL;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	int* iLocal_143 = NULL;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	int* iLocal_146 = NULL;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	bool bLocal_149 = 0;
	struct<6> Local_150 = { 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_151 = { -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1262(ScriptParam_151);
	}
	else
	{
		func_1257();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_3__::func_82())
		{
			func_1257();
		}
		func_5();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xC1
{
	func_2();
}

void func_2()//Position - 0xCD
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (Local_109.f_3)
	{
		return;
	}
	if (Local_109.f_134 < Local_109.f_4 && Local_109.f_135 < Local_109.f_4 * 2)
	{
		if (Local_133.f_463 == 0)
		{
			func_3(Local_109.f_135, Local_133.f_452, 2f, 4f, &(Local_133.f_470), &(Local_133.f_464));
			Local_133.f_464.f_2 = (Local_133.f_464.f_2 + 5f);
			if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_133.f_464, &(Local_133.f_464.f_2), false, false))
			{
				Local_109.f_135++;
				return;
			}
			if (MISC::ABSF((Local_133.f_464.f_2 - Local_133.f_452.f_2)) > 3f)
			{
				Local_109.f_135++;
				return;
			}
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_133.f_464 + Vector(10f, 0f, 0f), &fVar0, false, false))
			{
				if (MISC::ABSF((Local_133.f_464.f_2 - fVar0)) > 1f)
				{
					Local_109.f_135++;
					return;
				}
			}
			if (PATHFIND::IS_POINT_ON_ROAD(Local_133.f_464, Local_133.f_461))
			{
				Local_109.f_135++;
				return;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Local_133.f_464, Global_1958543, Global_1958546, Global_1958542, false, true))
			{
				Local_109.f_135++;
				return;
			}
			Local_133.f_463 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Local_133.f_464 + Vector(1f, 0f, 0f), Local_133.f_464 + Vector(1.5f, 0f, 0f), 0.25f, 1, 0, 4);
			Local_133.f_471 = 0;
		}
		else
		{
			iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_133.f_463, &iVar1, &uVar2, &uVar3, &uVar4);
			if (iVar5 == 2)
			{
				if (iVar1 == 0)
				{
					Local_109.f_4[Local_109.f_134 /*3*/] = { Local_133.f_464 };
					Local_109.f_101[Local_109.f_134] = Local_133.f_470;
					Local_109.f_134++;
					Local_133.f_463 = 0;
					Local_109.f_135++;
				}
				else
				{
					Local_133.f_463 = 0;
					Local_109.f_135++;
				}
			}
			else if (iVar5 == 0)
			{
				Local_133.f_463 = 0;
			}
		}
	}
	else
	{
		Local_109.f_3 = 1;
	}
}

void func_3(int iParam0, struct<3> Param1, float fParam2, float fParam3, var uParam4, var uParam5)//Position - 0x2DD
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	iParam0++;
	iVar0 = 8;
	fVar1 = (360f / SYSTEM::TO_FLOAT(iVar0));
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iVar0)));
	fVar3 = (((IntToFloat(iVar2) * fParam2) + fParam3) + (IntToFloat((iParam0 % 2)) * (fParam2 * 0.5f)));
	iVar4 = (iParam0 % iVar0);
	fVar5 = ((fVar1 * 0.5f) * IntToFloat((iVar2 % 2)));
	*uParam4 = ((fVar1 * IntToFloat(iVar4)) + fVar5);
	*uParam5 = { Param1 + __LIB_3__::func_623(*uParam4) * Vector(fVar3, fVar3, fVar3) };
}

void func_5()//Position - 0x377
{
	bool bVar0;
	func_1248();
	func_1247();
	func_1244();
	func_1223();
	if (func_1222() == 0)
	{
		func_1221();
		func_1220(1);
	}
	if (func_1222() == 1)
	{
		Stack.Push(func_1218());
		Stack.Push(&(Local_133.f_12));
		Stack.Push(&Local_111);
		Call_Loc(Local_133.f_447.f_1);
		if (StackVal && StackVal)
		{
			func_1220(2);
		}
	}
	if (func_1222() == 2)
	{
		func_1214();
		if (func_1201())
		{
			bVar0 = false;
			if (!ENTITY::IS_ENTITY_DEAD(Local_133.f_461, false))
			{
				Local_111.f_5 = ENTITY::GET_ENTITY_HEADING(Local_133.f_461);
			}
			if (__LIB_10__::func_802(&(Global_1952191.f_5309)))
			{
				MISC::SET_BIT(&Local_133, 4);
			}
			if (Local_133.f_1.f_2 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_461))
				{
					if (func_1193(Local_133.f_461))
					{
						func_1220(4);
						return;
					}
				}
			}
			switch (Local_133.f_1.f_2)
			{
				case 2:
					if (Local_133.f_476)
					{
						bVar0 = func_1187(&Local_111, 1);
					}
					break;
				case 8:
				case 6:
					bVar0 = func_1187(&Local_111, 0);
					break;
				default:
					bVar0 = func_1187(&Local_111, 1);
					break;
			}
			if (bVar0)
			{
				func_1181(&Local_133, &Local_111);
				Stack.Push(&(Local_133.f_12));
				Stack.Push(&Local_111);
				Call_Loc(Local_133.f_447.f_2);
				func_1180(0);
				if (!__LIB_1__::func_13(&iLocal_137))
				{
					__LIB_1__::func_362(&iLocal_137);
				}
				Global_1952191.f_5315 = 1;
				func_1220(3);
			}
			else if (Local_133.f_1.f_6 && !Local_133.f_476)
			{
				Stack.Push(&(Local_133.f_12));
				Stack.Push(&Local_111);
				Call_Loc(Local_133.f_447.f_2);
				func_1180(0);
				if (!__LIB_1__::func_13(&iLocal_137))
				{
					__LIB_1__::func_362(&iLocal_137);
				}
				Global_1952191.f_5315 = 1;
				func_1220(3);
			}
		}
	}
	if (func_1222() == 3)
	{
		func_1214();
		if (!__LIB_1__::func_13(&iLocal_140))
		{
			__LIB_1__::func_362(&iLocal_140);
		}
		if ((func_1173() || __LIB_2__::func_559(&iLocal_140) >= 7f) && func_1169())
		{
			if (__LIB_1__::func_13(&iLocal_137))
			{
				__LIB_1__::func_12(&iLocal_137);
			}
			func_1220(5);
			func_1167(&Local_133, 1);
			func_1156();
			if (Local_133.f_1.f_2 == 1 || Local_133.f_1.f_2 == 2)
			{
				__LIB_5__::func_917(1, 1);
			}
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
			}
			Global_1952191.f_5315 = 0;
		}
	}
	if (func_1222() == 5)
	{
		if (Local_133.f_12.f_386)
		{
			if (!BitTest(Local_133.f_0, 3))
			{
				func_1180(1);
				MISC::SET_BIT(&Local_133, 3);
			}
		}
		__LIB_9__::func_3(&(Local_133.f_12), 0, 1);
		__LIB_4__::func_606(&(Local_111.f_33));
		Stack.Push(&(Local_133.f_12));
		Stack.Push(&Local_111);
		Call_Loc(Local_133.f_447.f_3);
		func_1103();
		if (func_1102() || !Local_133.f_12.f_386)
		{
			if (!Local_133.f_475)
			{
				if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556, 3))
				{
					if (func_1101())
					{
						if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_133.f_461, ENTITY::GET_ENTITY_COORDS(Local_133.f_461, true) - Vector(15f, 0f, 0f), false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(Local_133.f_461, true);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(15f, 0f, 0f), false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					}
				}
				else
				{
					bLocal_149 = true;
				}
				Local_133.f_475 = 1;
			}
			if (!Local_133.f_473)
			{
				func_1065(Global_1952191.f_5309, __LIB_0__::func_797(), 0, 0, 0, 0);
				if (__LIB_3__::func_487(__LIB_7__::func_774(PLAYER::PLAYER_ID(), -1, 0)))
				{
					if (func_1055())
					{
						func_1054(__LIB_7__::func_774(PLAYER::PLAYER_ID(), -1, 0));
					}
					else
					{
						func_1053(__LIB_7__::func_774(PLAYER::PLAYER_ID(), -1, 0));
					}
				}
				Local_133.f_473 = 1;
			}
		}
		if (!BitTest(Local_133.f_0, 1))
		{
			if (func_1102())
			{
				MISC::SET_BIT(&Local_133, 1);
			}
		}
		if (!Local_133.f_12.f_386)
		{
			func_1220(8);
		}
	}
	if (func_1222() == 4)
	{
		if (!__LIB_1__::func_13(&iLocal_146))
		{
			__LIB_1__::func_362(&iLocal_146);
		}
		if (!Local_133.f_473)
		{
			func_1065(Global_1952191.f_5309, __LIB_0__::func_797(), 0, 0, 0, 0);
			Local_133.f_473 = 1;
		}
		if (__LIB_2__::func_559(&iLocal_146) >= 2f)
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(250);
			}
			if (!CAM::IS_SCREEN_FADING_OUT() && CAM::IS_SCREEN_FADED_OUT())
			{
				if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 1))
				{
					MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 1);
				}
			}
			if (func_1052())
			{
				if (!BitTest(Local_133.f_0, 1))
				{
					if (__LIB_3__::func_487(__LIB_7__::func_774(PLAYER::PLAYER_ID(), -1, 0)))
					{
						if (func_1055())
						{
							func_1054(__LIB_7__::func_774(PLAYER::PLAYER_ID(), -1, 0));
						}
						else
						{
							func_1053(__LIB_7__::func_774(PLAYER::PLAYER_ID(), -1, 0));
						}
					}
					MISC::SET_BIT(&Local_133, 1);
				}
				if (!__LIB_3__::func_599())
				{
					__LIB_3__::func_889(1);
				}
				func_1220(6);
			}
		}
	}
	if (func_1222() == 6)
	{
		if (!__LIB_1__::func_13(&iLocal_143))
		{
			__LIB_1__::func_362(&iLocal_143);
		}
		if (iLocal_136 == 9 || __LIB_2__::func_559(&iLocal_143) >= 7f)
		{
			func_1220(10);
		}
	}
	if (func_1222() == 9)
	{
		if (!func_1102())
		{
			return;
		}
		if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 1)
			{
				func_1065(Global_1952191.f_5309, __LIB_0__::func_797(), 0, 0, 0, 0);
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			MISC::SET_BIT(&Local_133, 2);
			return;
		}
		else if (BitTest(Local_133.f_0, 2))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 0)
			{
				return;
			}
		}
		if (!BitTest(Local_133.f_0, 2))
		{
			if (func_1055())
			{
				func_1054(__LIB_7__::func_774(PLAYER::PLAYER_ID(), -1, 0));
			}
			else
			{
				func_1053(__LIB_7__::func_774(PLAYER::PLAYER_ID(), -1, 0));
			}
		}
		else if (__LIB_3__::func_487(Local_133.f_1.f_3) && !__LIB_10__::func_802(&(Global_1952191.f_5309)))
		{
			func_1053(Local_133.f_1.f_3);
		}
		func_1220(10);
	}
	if (func_1222() == 8)
	{
		if (__LIB_10__::func_802(&(Global_1952191.f_5309)) || bLocal_149)
		{
			func_1220(10);
			return;
		}
		func_63();
		if (!BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 0))
		{
			if (!Local_133.f_12.f_386)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
			}
		}
		else
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(250);
			}
			func_1220(10);
		}
	}
	if (func_1222() == 10)
	{
		Stack.Push(&(Local_133.f_12));
		Stack.Push(&Local_111);
		Call_Loc(Local_133.f_447.f_4);
		if (__LIB_10__::func_802(&(Global_1952191.f_5309)))
		{
			func_26(Global_1952191.f_5309, Local_133.f_1.f_10);
			MISC::SET_BIT(&(Global_1946250.f_1), 9);
			MISC::SET_BIT(&(Global_1946250.f_1), 16);
			__LIB_35__::func_692(1);
			if (func_15())
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 20);
			}
		}
		if (bLocal_149)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		func_1257();
	}
	func_6();
}

void func_6()//Position - 0xA71
{
	if (Local_133.f_12.f_386)
	{
		func_14(&Local_133);
	}
	if (func_1222() > 5)
	{
		func_7(&Local_133);
	}
}

void func_7(int* iParam0)//Position - 0xA9B
{
	if (!GRAPHICS::GET_REQUESTINGNIGHTVISION() && BitTest(*iParam0, 2))
	{
		__LIB_2__::func_467(2, 2);
	}
}

int func_14(int* iParam0)//Position - 0xD38
{
	if (GRAPHICS::GET_REQUESTINGNIGHTVISION())
	{
		__LIB_2__::func_467(1, 2);
		MISC::SET_BIT(iParam0, 2);
		return 1;
	}
	return 0;
}

int func_15()//Position - 0xD59
{
	int iVar0;
	if ((__LIB_10__::func_802(&(Global_1952191.f_5309)) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_0__::func_871(iVar0, 1) && __LIB_7__::func_766(iVar0) == Local_133.f_1.f_10)
		{
			return 1;
		}
	}
	return 0;
}

void func_26(int iParam0, int iParam1)//Position - 0xFFC
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	if (iParam0 > 0)
	{
		if (iVar0 == -1)
		{
			if (((((((__LIB_10__::func_801(iParam0) || __LIB_10__::func_802(&iParam0)) || __LIB_10__::func_791(&iParam0)) || __LIB_10__::func_789(&iParam0)) || __LIB_4__::func_379(iParam0)) || __LIB_3__::func_651(iParam0)) || __LIB_10__::func_800(iParam0)) || __LIB_10__::func_790(iParam0))
			{
				if (__LIB_10__::func_791(&iParam0))
				{
					func_49(iParam1, iVar0);
				}
				else if (__LIB_10__::func_800(iParam0))
				{
					__LIB_5__::func_457(2);
				}
				else if (__LIB_4__::func_379(iParam0))
				{
					__LIB_5__::func_457(0);
				}
				iVar0 = __LIB_12__::func_308(iParam0);
			}
			else
			{
				switch (iParam0)
				{
					case 704:
					case 705:
					case 711:
					case 756:
					case 882:
					case 757:
						iVar0 = __LIB_12__::func_308(iParam0);
						break;
					default:
						break;
					}
				}
		}
	}
	else if (iParam0 == 0)
	{
	}
	if (iVar0 != -1)
	{
		Global_1946250.f_504 = -1;
		__LIB_5__::func_947(1, iVar0);
		Global_1946250.f_3607 = 0;
		Global_1946250.f_3612 = 1;
		__LIB_3__::func_669(iParam1);
		if (__LIB_2__::func_159(1))
		{
			iVar1 = __LIB_12__::func_836(1, 0);
			if (__LIB_10__::func_790(iParam0))
			{
				if (iVar1 > 0)
				{
					__LIB_35__::func_907(iParam1, iVar0, iVar1);
				}
			}
		}
	}
}

void func_49(int iParam0, int iParam1)//Position - 0x1AA1
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if ((((__LIB_0__::func_872(iVar0, 1) && __LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(iVar0))) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(iParam0)) && __LIB_6__::func_854(iVar0) == iParam0) && __LIB_1__::func_693(iParam0, 1, 1))
		{
			if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1)
			{
				if (!BitTest(Global_1892703[iParam0 /*599*/].f_556, 6))
				{
					__LIB_3__::func_754(iParam1);
					__LIB_3__::func_923();
				}
				__LIB_3__::func_753(iParam1);
			}
		}
	}
}

void func_63()//Position - 0x1DFE
{
	struct<3> Var0;
	var uVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	bool bVar6;
	int iVar7;
	if ((BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) || PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_1049(Local_133.f_1.f_1))
	{
		__LIB_7__::func_541(1, 0, 1, 0.02f, 2f, 1065353216, 1088421888, 0.02f, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		iVar3 = 0;
		while (iVar3 < __LIB_4__::func_261(Local_133.f_1.f_1))
		{
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
			func_1036(Local_133.f_1.f_1, iVar3, &Var0, &uVar1);
			__LIB_8__::func_273(Var0, uVar1, fVar2);
			iVar3++;
		}
	}
	else if (!Global_2667225.f_1753)
	{
		if (Local_109.f_3)
		{
			__LIB_7__::func_541(1, 0, 1, 0.02f, 2f, 1065353216, 1088421888, 0.02f, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			iVar4 = 0;
			while (iVar4 < Local_109.f_134)
			{
				fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				__LIB_8__::func_273(Local_109.f_4[iVar4 /*3*/], Local_109.f_101[iVar4], fVar5);
				iVar4++;
			}
		}
	}
	bVar6 = func_1034(Local_133.f_1.f_1);
	if (Global_2667225.f_1753)
	{
		if (bVar6)
		{
			iVar7 = joaat("sanchez");
			STREAMING::REQUEST_MODEL(iVar7);
			if (STREAMING::HAS_MODEL_LOADED(iVar7) && !Local_133.f_474)
			{
				__LIB_15__::func_448(1, iVar7, 0, 0, 0, 0, -1, 0, 1, 1, 0, 0);
				Local_133.f_474 = 1;
			}
			if (Local_133.f_474)
			{
				if (func_69(Global_1958540, 0, 1, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
				{
					MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 0);
					__LIB_15__::func_448(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
					__LIB_2__::func_91();
					__LIB_7__::func_541(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
					Local_133.f_474 = 0;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			if (func_69(Global_1958540, 0, 0, 0, 1, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
			{
				MISC::SET_BIT(&(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 0);
				__LIB_2__::func_91();
				__LIB_7__::func_541(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			}
		}
	}
}

int func_69(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x21C1
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	__LIB_0__::func_189();
	if (__LIB_0__::func_972(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__::func_628() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
		if (!Global_2667225.f_702 == iParam0)
		{
			if (bParam15 && Global_2667225.f_702 == 37)
			{
			}
			else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__::func_853(0))
				{
					return 0;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
		{
			Global_2667225.f_702 = iParam0;
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			if (bParam2)
			{
				if (!__LIB_8__::func_918())
				{
					bParam2 = false;
				}
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2878 = 0;
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2667225.f_702 == 11)
			{
				Global_2667225.f_706 = { Global_2676213 };
				Global_2667225.f_709 = Global_2676213.f_5;
				Global_2667225.f_2898 = Global_2676213.f_26;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
			else if (func_752(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						__LIB_9__::func_741(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_640();
						__LIB_9__::func_956(&iVar2);
					}
					if (__LIB_8__::func_918())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_2__::func_930();
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_724(iVar2);
							__LIB_3__::func_308(1);
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					__LIB_3__::func_308(1);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 4)
		{
			if (func_720())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_363(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_3__::func_207(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 5)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				if (Global_2667225.f_45.f_176)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 1;
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_704) > 5000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2667225.f_45.f_173, false))
				{
					func_144(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 6)
		{
			Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
			if (Global_2667225.f_712)
			{
				Global_2667225.f_705 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_712 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_705)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1836584)
			{
				__LIB_12__::func_53(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__::func_793(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_5__::func_758(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_6__::func_444();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_6__::func_444();
			}
			else if (__LIB_9__::func_515(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_8__::func_265())
			{
				if (Global_2667225.f_702 == 8 && !Global_2667225.f_2878)
				{
					Global_2667225.f_2878 = 1;
				}
				else
				{
					Global_2667225.f_702 = 37;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
				Global_2667225.f_2478 = 0;
				Global_2667225.f_2479 = 0;
				Global_2667225.f_2477 = 0;
			}
			else
			{
				__LIB_6__::func_444();
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 10)
		{
			if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 0.1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2667225.f_706, Global_2667225.f_706.f_1, Global_2667225.f_706.f_2, &fVar0, false, false);
						if (fVar0 == 0f || (Global_2667225.f_706.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 15f)
							{
								Global_2667225.f_706 = { Global_2676213 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
								}
								Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
							}
							else
							{
								Global_2667225.f_706.f_2 = (Global_2667225.f_706.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
						}
					}
					else
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
					}
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
				}
			}
			else
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 11)
		{
			if (!bParam14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2667225.f_45.f_173))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2667225.f_45.f_173, true, false);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					__LIB_3__::func_274(iParam9, 0, 0);
				}
			}
			__LIB_3__::func_221(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_2__::func_930();
			}
			if (!(__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_92(0, 0);
			}
			__LIB_3__::func_138(0, 0);
			if (bParam10)
			{
				__LIB_2__::func_610();
			}
			__LIB_1__::func_21();
			__LIB_9__::func_810();
			if (bParam13)
			{
				__LIB_0__::func_854();
			}
			__LIB_0__::func_858();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_9__::func_956(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_858();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_92(int iParam0, bool bParam1)//Position - 0x3394
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var0.f_2 = (Var0.f_2 + (0.3f * IntToFloat(Global_2667225.f_710)));
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
		{
			fVar2 = (Var0.f_2 - (fVar1 + 1f));
			if ((MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar1, false, true, false, true);
				Global_2667225.f_710 = 0;
			}
		}
		else if (Global_2667225.f_710 < 3)
		{
			Global_2667225.f_710++;
			func_92(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_144(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x521B
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!__LIB_2__::func_623(iParam0, iParam1, bVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
		if (!SYSTEM::VDIST(Var1, Var2) < 5f || !iParam2 == -1)
		{
			Var2.f_2 = (Var2.f_2 + -4f);
			Var2.f_0 = (Var2.f_0 + -4f);
			Var2.f_1 = (Var2.f_1 + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, Var2, false, false, false, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		PED::SET_PED_RESET_FLAG(iParam0, 151, true);
		if (bParam3)
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		if (Global_1836584)
		{
			if (__LIB_2__::func_918(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_145(0);
			}
		}
	}
}

void func_145(bool bParam0)//Position - 0x5325
{
	struct<14> Var0;
	int iVar1;
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4718592.f_168793 == 0)
		{
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__::func_360(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { __LIB_6__::func_38(__LIB_2__::func_82(), 14, iVar1, -1) };
			__LIB_2__::func_620(PLAYER::PLAYER_PED_ID(), 14, iVar1);
			func_146(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_146(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_146(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x53FC
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
		Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
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
			func_306(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 10, 0, -1) };
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
						func_306(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_306(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_146(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_306(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_293(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_146(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_285(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_306(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_9__::func_528(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_146(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_306(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_146(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_277(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_146(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_146(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_273(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_146(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_7__::func_884(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_146(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_146(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar32, -1) };
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
								func_146(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_7__::func_884(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
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
								func_146(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_146(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_146(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_6__::func_37(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_285(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_273(iVar5, func_293(iParam0, 8, -1), iParam2, func_293(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_360(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_360(2160, iParam10, 0);
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
				func_203(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_273(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_285(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_273(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
				iVar52 = __LIB_1__::func_360(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_360(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_360(2102, iParam10, 0);
				fVar55 = __LIB_1__::func_680(135, iParam10);
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
				__LIB_2__::func_996(iParam0, iParam10);
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
						func_146(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_146(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_273(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_273(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_146(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_273(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_146(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_175(iParam0, 9, iVar63))
						{
							func_146(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_146(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_146(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_360(2042, -1, 0);
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
						func_146(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_293(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_293(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_146(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_146(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_146(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_146(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_146(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_146(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_146(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_146(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_146(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_146(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_277(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_146(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_146(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_147(iParam0, &uVar4))
		{
			func_146(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_146(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_146(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_146(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_293(iParam0, 3, -1), iVar10);
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
				func_146(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_147(int iParam0, var uParam1)//Position - 0x72A6
{
	int iVar0;
	int iVar1;
	*uParam1 = func_293(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_360(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_360(754, Global_78127, 0) == 0 && __LIB_1__::func_360(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				if (__LIB_1__::func_360(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_360(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_360(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_360(755, Global_78127, 0);
		if (!func_175(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_360(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_360(753, Global_78127, 0);
			}
			__LIB_1__::func_354(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_354(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0, int iParam1, int iParam2)//Position - 0xBB21
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
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar0, iParam1, iParam2, -1) };
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
				if (!func_175(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_175(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_175(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_360(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_175(iParam0, 14, uVar11[iVar10]))
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
						return func_175(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_175(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_203(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x13861
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_222(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_2__::func_978(iVar1, 1, iParam2);
	}
	func_204(iParam0, bParam3, 0, -1);
}

void func_204(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x138AE
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
		bVar3 = func_248(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_239(iParam0, iParam3);
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
			if (__LIB_2__::func_761(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_2__::func_761(123, iVar0))
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
					if (__LIB_2__::func_761(iVar10, iVar0))
					{
						if (__LIB_2__::func_998(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_5__::func_179(Var9.f_2, Var9.f_3, iVar10))
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

int func_239(int iParam0, int iParam1)//Position - 0x22A88
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_293(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
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
				iVar5 = func_293(iParam0, 11, -1);
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

int func_248(int iParam0, bool bParam1)//Position - 0x22EE6
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
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_293(iParam0, 11, -1), 0);
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
						if (__LIB_2__::func_761(13, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(14, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(15, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(16, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(71, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(72, -1))
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
						iVar3 = func_293(iParam0, 11, -1);
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
						iVar5 = func_293(iParam0, 8, -1);
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
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_293(iParam0, 11, -1), 0);
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
						iVar8 = func_293(iParam0, 11, -1);
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
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_293(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_293(iParam0, 11, -1), 0);
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
						iVar12 = func_293(iParam0, 8, -1);
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

int func_273(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2CD3C
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
					iVar0 = func_273(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_273(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_277(int iParam0)//Position - 0x2E248
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
		if (!func_282(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_282(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2EC12
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_293(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_285(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3152D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_287(iParam0))
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
			__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_5__::func_175(iVar0, iParam2, 13) && !__LIB_5__::func_175(iVar0, iParam2, 14)) && !__LIB_5__::func_175(iVar0, iParam2, 15)) && !__LIB_5__::func_175(iVar0, iParam2, 16)) && !__LIB_5__::func_175(iVar0, iParam2, 71)) && !__LIB_5__::func_175(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_5__::func_29(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_2__::func_977(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_2__::func_978(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_287(int iParam0)//Position - 0x316BC
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_293(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_293(iParam0, 11, -1);
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

int func_293(int iParam0, int iParam1, int iParam2)//Position - 0x31B3D
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
				if (func_175(iParam0, iParam1, iVar0))
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
				if (func_175(iParam0, iParam1, iVar1))
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

void func_306(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x34B9C
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
		if (Global_78127 != __LIB_0__::getGlobal_1574918() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
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
							__LIB_2__::func_411(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_306(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_306(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_306(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_360(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_354(iVar6, iVar7, Global_78127, 1, 0);
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
							func_306(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_306(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_306(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_306(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_306(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_306(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_306(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_363(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x51159
{
	int* iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__::func_640();
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
	Global_2667225.f_45.f_176 = 0;
	bVar3 = false;
	bVar4 = false;
	if (Global_4718592 == 0 && !Global_1574964)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1)
		{
			if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8))
			{
				bVar4 = true;
				if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
				{
					bVar3 = true;
				}
			}
		}
	}
	if (func_712() && !bVar3)
	{
		if (func_711())
		{
			if (func_705(&iVar2))
			{
				if (__LIB_8__::func_267(iVar2))
				{
					if (!bVar4)
					{
						func_144(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_2__::func_641() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_2__::func_640(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false));
						iVar5 = __LIB_2__::func_639(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_2__::func_641(), false))
						{
							iVar5 = __LIB_2__::func_641();
						}
						func_144(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), iVar5, 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), false))
						{
							return 1;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_45.f_68)
	{
		if (__LIB_8__::func_913(iVar0))
		{
			if ((__LIB_8__::func_918() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_8__::func_918())
			{
				if (!__LIB_9__::func_418(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_724(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_1__::func_141())
	{
		__LIB_9__::func_956(&iVar0);
	}
	if (func_720())
	{
		__LIB_9__::func_956(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_870())
		{
			if (__LIB_1__::func_599(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_638(), __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_638(), fParam1);
				func_678(__LIB_2__::func_638());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_878())
			{
				if (__LIB_2__::func_924(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_463(), 1))
				{
					func_678(__LIB_2__::func_638());
					return 1;
				}
			}
			else if (func_369(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_463(), 0, 1, 0))
			{
				func_678(__LIB_2__::func_638());
				return 1;
			}
		}
		else if (__LIB_0__::func_957(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			if (Global_2667225.f_45.f_177)
			{
				VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(iVar1), true);
			}
			if (Global_2667225.f_45.f_178)
			{
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(iVar1), false);
			}
			if (Global_2667225.f_45.f_179)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
				{
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "Not_Allow_As_Saved_Veh", 1);
				}
			}
			if (Global_2667225.f_45.f_180)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(iVar1), "MPBitset"))
					{
						iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset");
					}
					MISC::SET_BIT(&iVar6, 11);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset", iVar6);
				}
			}
			if (Global_2667225.f_45.f_183 > -1)
			{
				VEHICLE::SET_VEHICLE_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
			}
			if (Global_2667225.f_45.f_181)
			{
				__LIB_2__::func_626(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_2__::func_625(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
			func_678(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_369(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x51A6F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<31> Var7;
	struct<31> Var8;
	struct<31> Var9;
	bool bVar10;
	int iVar11;
	if (!__LIB_1__::func_599(8))
	{
		__LIB_1__::func_891(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_653(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__::func_599(16))
		{
			__LIB_1__::func_653(16);
		}
	}
	__LIB_1__::func_653(31);
	if (!__LIB_2__::func_734())
	{
		if (!__LIB_1__::func_599(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_2__::func_733(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__::func_863())
					{
						if (!__LIB_2__::func_923())
						{
							__LIB_7__::func_73(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_814(iVar1) || !__LIB_0__::func_371(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									__LIB_9__::func_527(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__::func_799(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_1__::func_24())
								{
									iVar3 = 1;
								}
								if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_2667225.f_26.f_3) < 15000)
								{
									Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
									iVar3 = 1;
								}
								if (bParam6)
								{
									iVar3 = 1;
								}
								if (Global_2715699.f_2846.f_148)
								{
									iVar4 = 0;
									iVar3 = 1;
								}
								else
								{
									iVar4 = 1;
								}
								bVar5 = true;
								if (__LIB_3__::func_462(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
								{
									bVar5 = false;
								}
								if (Global_2715699.f_2846.f_148)
								{
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										MISC::CLEAR_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 11);
									}
								}
								bVar6 = false;
								if (bParam5)
								{
									bVar6 = true;
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
								{
									Var7.f_4 = 1125515264;
									Var7.f_5 = 1;
									Var7.f_6 = 1;
									Var7.f_8 = 1082130432;
									Var7.f_9 = 1176255488;
									Var7.f_10 = 1;
									Var7.f_13 = 1;
									Var7.f_15 = 2;
									Var7.f_22 = 2;
									Var7.f_25 = 1;
									Var7.f_26 = 1;
									Var7.f_29 = 1123024896;
									Var7.f_30 = 1;
									Var7.f_4 = 50f;
									Var7.f_5 = 0;
									Var7.f_6 = 0;
									Var7.f_10 = iVar4;
									Var7.f_11 = iVar3;
									Var7.f_12 = 1;
									Var7.f_13 = bVar5;
									Var7.f_14 = 1;
									Var7.f_25 = 0;
									iVar2 = 0;
									while (iVar2 < 2)
									{
										Var7.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
										Var7.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
										iVar2++;
									}
									if (func_529(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_529(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
								{
									if (__LIB_3__::func_225(&Param0, &fParam1))
									{
										bVar6 = true;
									}
								}
								else
								{
									if (bParam4)
									{
										if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
										{
											bParam4 = false;
										}
									}
									if (!bParam4)
									{
										Var8.f_4 = 1125515264;
										Var8.f_5 = 1;
										Var8.f_6 = 1;
										Var8.f_8 = 1082130432;
										Var8.f_9 = 1176255488;
										Var8.f_10 = 1;
										Var8.f_13 = 1;
										Var8.f_15 = 2;
										Var8.f_22 = 2;
										Var8.f_25 = 1;
										Var8.f_26 = 1;
										Var8.f_29 = 1123024896;
										Var8.f_30 = 1;
										Var8.f_0 = 10f;
										Var8.f_10 = iVar4;
										Var8.f_11 = iVar3;
										Var8.f_12 = 1;
										Var8.f_13 = bVar5;
										Var8.f_14 = 1;
										Var8.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var8.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var8.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_529(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
										{
											bVar6 = true;
										}
									}
									else
									{
										Var9.f_4 = 1125515264;
										Var9.f_5 = 1;
										Var9.f_6 = 1;
										Var9.f_8 = 1082130432;
										Var9.f_9 = 1176255488;
										Var9.f_10 = 1;
										Var9.f_13 = 1;
										Var9.f_15 = 2;
										Var9.f_22 = 2;
										Var9.f_25 = 1;
										Var9.f_26 = 1;
										Var9.f_29 = 1123024896;
										Var9.f_30 = 1;
										Var9.f_3 = bParam4;
										Var9.f_10 = iVar4;
										Var9.f_11 = iVar3;
										Var9.f_12 = 1;
										Var9.f_13 = bVar5;
										Var9.f_14 = 1;
										Var9.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var9.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var9.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_529(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									MISC::CLEAR_AREA(Param0, 2f, true, false, false, false);
									__LIB_0__::func_957(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									__LIB_35__::func_955(&iVar0, iParam3);
									if ((__LIB_1__::func_629() || __LIB_2__::func_632()) || __LIB_2__::func_631())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_9__::func_491(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__::func_653(34);
									}
									else
									{
										__LIB_1__::func_600(34);
									}
									if (iParam3 >= 0 && iParam3 < 363)
									{
										MISC::SET_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 0);
										iVar11 = 0;
										while (iVar11 < 363)
										{
											bVar10 = false;
											if (iVar11 != iParam3)
											{
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 11))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 11);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 0))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 0);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 6))
												{
													__LIB_10__::func_6(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_3__::func_578(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
												}
											}
											iVar11++;
										}
									}
									if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, false))
									{
										if (BitTest(Global_2715699.f_5986, 2))
										{
											VEHICLE::LOWER_CONVERTIBLE_ROOF(iVar0, true);
										}
									}
									__LIB_3__::func_578(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_3__::func_224(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__::func_653(0);
									__LIB_1__::func_653(44);
									__LIB_1__::func_600(10);
									__LIB_1__::func_600(1);
									__LIB_1__::func_600(2);
									__LIB_1__::func_600(9);
									__LIB_1__::func_600(12);
									__LIB_1__::func_600(31);
									__LIB_1__::func_600(32);
									__LIB_1__::func_600(33);
									__LIB_1__::func_600(35);
									__LIB_1__::func_600(37);
									__LIB_1__::func_600(38);
									__LIB_2__::func_627();
									Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_120 = 0;
									return 1;
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

int func_529(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6891F
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_1__::func_533())
	{
		return 0;
	}
	if (__LIB_1__::func_479() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_854();
			__LIB_0__::func_814();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_853(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_635(Param0))
		{
			if (__LIB_1__::func_558(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__::func_851();
		__LIB_0__::func_854();
		if (!uParam6->f_27 || (((((((__LIB_9__::func_740(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_9__::func_972(Param0, iParam2);
		}
		if (func_600(Param0))
		{
			__LIB_9__::func_972(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_9__::func_771(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_4__::func_986(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_543(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_9__::func_417(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_2__::func_765(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_538(Global_2667225.f_683, 0);
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__::func_821(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_4__::func_985(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_9__::func_492(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_538(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_538(Global_2667225.f_683, 0);
								__LIB_0__::func_821(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					__LIB_0__::func_821(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_543(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*uParam5 = Global_2667225.f_686;
		__LIB_1__::func_527(1);
		return 1;
	}
	return 0;
}

void func_538(struct<3> Param0, int iParam1)//Position - 0x69601
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_822(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_538(Var0, iParam1 + 1);
	}
}

void func_543(var uParam0, var uParam1, var uParam2)//Position - 0x69815
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_588(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_544(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_544(var uParam0, var uParam1, var uParam2)//Position - 0x69884
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_584(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_1__::func_572(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_1__::func_452(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_2__::func_784(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_1__::func_434(Var1))
									{
										Var1 = { __LIB_2__::func_783(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_2__::func_990(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_1__::func_546(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_1__::func_572(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !__LIB_8__::func_982(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_584(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_2__::func_989(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_9__::func_771(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_9__::func_771(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_9__::func_492(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = __LIB_9__::func_770(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_552(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_1__::func_546(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_550(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_2__::func_856(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_584(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_9__::func_811(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_550(int iParam0, var uParam1)//Position - 0x6A5E3
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_550(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_550(iParam0 + 1, uParam1);
	}
}

void func_552(struct<3> Param0, float fParam1, int iParam2)//Position - 0x6A689
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_552(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_584(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x6BFA7
{
	int iVar0;
	bool bVar1;
	if (func_635(Param0))
	{
		if (func_587(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_2__::func_766(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_822(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__::func_450(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_587(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6C1F2
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_587(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_588(var uParam0, var uParam1, var uParam2)//Position - 0x6C2CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_584(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_1__::func_572(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_1__::func_454(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_838();
		}
		else
		{
			__LIB_0__::func_837();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !__LIB_8__::func_982(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_584(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_2__::func_989(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_9__::func_771(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_9__::func_771(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_9__::func_492(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = __LIB_9__::func_770(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_552(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_550(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_600(struct<3> Param0)//Position - 0x6CF36
{
	var uVar0;
	if (Global_2815059.f_924 && __LIB_9__::func_772(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_635(struct<3> Param0)//Position - 0x7563A
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_1__::func_560(Param0, 1008981770))
			{
				if (!func_587(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_587(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_1__::func_559(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_852(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_587(&Var1, 0, 0, 0, 1))
					{
						if (!func_587(&Param0, 0, 0, 0, 1))
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

void func_678(int iParam0)//Position - 0x79B17
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
		}
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	func_724(iParam0);
	__LIB_2__::func_640(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_35__::func_954(iParam0, 1);
	}
	else
	{
		__LIB_9__::func_973(iParam0, __LIB_1__::func_696(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2667225.f_45.f_176 = 1;
}

int func_705(var uParam0)//Position - 0x7A9F3
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964)
	{
		if (__LIB_2__::func_644())
		{
			iVar2 = __LIB_2__::func_642(__LIB_2__::func_643());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
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
			if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iVar5 = __LIB_2__::func_642(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_0__::func_972(iVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar7)))
						{
							*uParam0 = iVar7;
							bVar4 = true;
						}
						else
						{
							iVar0++;
						}
						if (bVar4)
						{
							return 1;
						}
						else
						{
							return 0;
						}
						Jump @555; //curOff = 335
						if (!__LIB_1__::func_837())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_693(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_693(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (func_706(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						return 0;
					}
int func_706(bool bParam0)//Position - 0x7AC22
{
	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
	}
	if (!Global_2667225.f_2664 == -1)
	{
		if (BitTest(Global_2667225.f_2665, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_711()//Position - 0x7AC9B
{
	bool bVar0;
	if (__LIB_1__::func_837())
	{
		if (func_705(&bVar0))
		{
			if (func_706(bVar0))
			{
				if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_234)
				{
					return 1;
				}
			}
		}
	}
	else if (__LIB_2__::func_644())
	{
		return 1;
	}
	return 0;
}

int func_712()//Position - 0x7ACE0
{
	var uVar0;
	if (__LIB_2__::func_645() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_705(&uVar0))
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

int func_720()//Position - 0x7AEA2
{
	bool bVar0;
	var uVar1;
	if (__LIB_8__::func_918())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_712())
		{
			if (func_711())
			{
				return 1;
			}
		}
		bVar0 = false;
		if (__LIB_2__::func_870())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__::func_463() /*142*/].f_66;
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (Global_2667225.f_45.f_68)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_2669))
				{
					if (Global_2667225.f_45.f_67 == ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669) || Global_2667225.f_45.f_67 == 0)
					{
						if (__LIB_4__::func_972(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_9__::func_973(Global_2667225.f_2669, __LIB_1__::func_696(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_2__::func_648();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_2__::func_647();
			}
		}
		else if (!__LIB_2__::func_870())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__::func_663())
				{
					__LIB_2__::func_648();
				}
			}
			else
			{
				Global_2667225.f_45.f_69.f_66 = Global_2667225.f_45.f_67;
			}
		}
		if (!Global_2667225.f_45.f_69.f_66 == 0)
		{
			STREAMING::REQUEST_MODEL(Global_2667225.f_45.f_69.f_66);
			if (STREAMING::HAS_MODEL_LOADED(Global_2667225.f_45.f_69.f_66))
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
		return 1;
	}
	return 0;
}

void func_724(int iParam0)//Position - 0x7B17C
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	bVar0 = false;
	if (__LIB_2__::func_917(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_2__::func_659(iParam0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
		{
			if (iVar1 == joaat("trophytruck") || iVar1 == joaat("trophytruck2"))
			{
				fVar2 = 2f;
				fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
				if (fVar3 > fVar2)
				{
					fVar3 = fVar2;
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, fVar3);
				}
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
			if (__LIB_6__::func_302(PLAYER::PLAYER_ID()))
			{
				__LIB_9__::func_457(iParam0);
			}
		}
		__LIB_3__::func_208(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), false);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			func_144(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
		}
		if (Global_1836584)
		{
			__LIB_2__::func_654(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_1__::func_141());
			if (iVar1 == joaat("ruiner2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(iParam0, true);
			}
			if (iVar1 == joaat("blazer5"))
			{
				if (VEHICLE::GET_HAS_RETRACTABLE_WHEELS(iParam0))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iParam0) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
					{
						VEHICLE::SET_WHEELS_RETRACTED_INSTANTLY(iParam0);
						Global_2667225.f_2890 = 1;
					}
					else
					{
						VEHICLE::SET_WHEELS_EXTENDED_INSTANTLY(iParam0);
						Global_2667225.f_2891 = 1;
					}
				}
			}
			if (Global_2667225.f_2892)
			{
				if (iVar1 == joaat("deluxo"))
				{
					__LIB_2__::func_653(iParam0, 1);
					__LIB_2__::func_652(iParam0, 1);
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_RATIO(iParam0, (0.75f - MISC::GET_FRAME_TIME()));
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam0, 1f);
					Global_2667225.f_2892 = 0;
				}
				else if (iVar1 == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iParam0))
				{
					VEHICLE::TRANSFORM_TO_SUBMARINE(iParam0, true);
					Global_2667225.f_2892 = 0;
				}
			}
			if (__LIB_2__::func_651(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (Global_2667225.f_2894)
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 0f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					Global_2667225.f_2895 = 1;
					Global_2667225.f_2896 = MISC::GET_FRAME_COUNT();
					VEHICLE::SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(iParam0, true);
				}
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
			}
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (BitTest(Global_4718592.f_26, 25))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0))
					{
						__LIB_2__::func_650(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_5__::func_185(PLAYER::PLAYER_ID()) == 189)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar4 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar4, 11);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar4);
			}
		}
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_2__::func_649() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
		{
			VEHICLE::SET_BIKE_EASY_TO_LAND(iParam0, true);
		}
	}
	if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
	Global_2667225.f_2692 = { Var5 };
}

int func_752(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x7C0B1
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	bVar0 = false;
	bVar1 = false;
	if (!__LIB_0__::func_114())
	{
		if (!__LIB_0__::func_855(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
	{
		Global_2667225.f_680 = MISC::GET_FRAME_COUNT();
		return 0;
	}
	if (bParam10)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bParam10 = false;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_612)
	{
		if (!Global_2667225.f_606 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_606 = 0;
			}
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_609) > 30000)
	{
		Global_2667225.f_606 = 0;
	}
	if (Global_2667225.f_606 == 0)
	{
		Global_2667225.f_607 = 0;
		Global_2667225.f_608 = 0;
		Global_2667225.f_659 = 0;
		Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_612 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_606 = 1;
		Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_2697 = uParam5;
		Global_2667225.f_2735 = 0;
		__LIB_0__::func_851();
		if (bParam10)
		{
			__LIB_0__::func_854();
		}
	}
	switch (Global_2667225.f_606)
	{
		case 1:
			if (func_761(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_9__::func_420(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_610 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_606 = 2;
				}
			}
			break;
		case 2:
			if (Global_2667225.f_657)
			{
				if (Global_2667225.f_661 == Global_2667225.f_660)
				{
					if (Global_2667225.f_658 && !Global_2667225.f_659 == -1)
					{
						if (((Global_2667225.f_518 && !__LIB_9__::func_331()) && __LIB_9__::func_419(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							func_538(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_2__::func_662(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_2__::func_765(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							else
							{
								if (bParam3)
								{
									fVar3 = 2f;
								}
								else
								{
									fVar3 = 0.3f;
								}
								bVar1 = __LIB_2__::func_873(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							if (bVar1)
							{
								Global_2667225.f_606 = 3;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_753(&(Global_2667225.f_623));
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_659 = -1;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) > 3000 || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) < 0)
			{
				if (Global_2667225.f_608 < 3)
				{
					Global_2667225.f_608++;
					Global_2667225.f_606 = 1;
				}
				else
				{
					Global_2667225.f_606 = 4;
				}
			}
			break;
		case 3:
			if (bParam10)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								bVar0 = true;
							}
							else
							{
								func_538(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
								__LIB_2__::func_662(-1);
							}
						}
					}
					else
					{
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					__LIB_2__::func_662(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 4:
			if (func_761(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				Global_2667225.f_606 = 5;
				Global_2667225.f_659 = 0;
			}
			break;
		case 5:
			bVar0 = true;
			break;
	}
	Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
	if (bVar0)
	{
		if (Global_2667225.f_489 == 8)
		{
			Global_2667225.f_714.f_503 = Global_2667225.f_714.f_502;
		}
		if (Global_2667225.f_659 == -1)
		{
			Global_2667225.f_659 = 0;
		}
		*uParam0 = { Global_2667225.f_623[Global_2667225.f_659 /*3*/] };
		*uParam1 = Global_2667225.f_623.f_16[Global_2667225.f_659];
		if (Global_2667225.f_45.f_52)
		{
			if (Global_2667225.f_489 == 3 && SYSTEM::VMAG(Global_2667225.f_45.f_49) > 0f)
			{
				if (bParam3)
				{
				}
				else
				{
					Var2 = { Global_2667225.f_45.f_49 - *uParam0 };
					*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
					if (Global_2667225.f_45.f_53)
					{
						*uParam1 = (*uParam1 + 180f);
					}
					Global_2667225.f_2673 = 1;
				}
			}
		}
		Global_2667225.f_2735 = 0;
		Global_2667225.f_606 = 0;
		__LIB_0__::func_851();
		if (bParam10)
		{
			if (!__LIB_1__::func_603(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_854();
			}
		}
		return 1;
	}
	return 0;
}

void func_753(var uParam0)//Position - 0x7C639
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_538(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_761(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x7CA65
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var14;
	int iVar15;
	int iVar16;
	struct<3> Var17;
	struct<34> Var18;
	struct<13> Var19;
	int iVar20;
	struct<3> Var21;
	struct<3> Var22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25[4];
	var uVar26[4];
	int iVar27[4];
	var uVar28[4];
	float fVar29;
	int iVar30;
	bool bVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	int iVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	float fVar43;
	struct<4> Var44;
	struct<4> Var45;
	int iVar46;
	int iVar47;
	struct<61> Var48;
	int iVar49;
	bVar2 = false;
	Var18 = 5;
	Var18.f_16 = 5;
	Var18.f_22 = 5;
	Var18.f_28 = 5;
	Var19 = 5;
	Var19.f_6 = 5;
	Var19.f_12 = 5;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
	{
		return 0;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_592) > 60000 || !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_591)
	{
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
	}
	if (iParam1 == 13 || Global_2667225.f_489 == 13)
	{
		if (!Global_2667225.f_2478)
		{
			if (Global_2667225.f_2477 == 0)
			{
				if (__LIB_9__::func_418(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_9__::func_421(Global_2676213);
					Global_2667225.f_2479 = 0;
					Global_2667225.f_2476 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2477 = 1;
				}
				else
				{
					Global_2667225.f_2479 = 1;
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
			}
			if (Global_2667225.f_2477 == 1)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2476) > 4000 || Global_2667225.f_2479 == 0)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_587 == 0)
	{
		__LIB_2__::func_941();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_9__::func_462();
		Global_2667225.f_555.f_16 = Global_2667225.f_45.f_312;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_555.f_25 = 0;
		Global_2667225.f_588 = 0;
		Global_2667225.f_520.f_13[1 /*3*/] = { Global_2667225.f_45.f_313 };
		Global_2667225.f_520.f_20[1] = Global_2667225.f_45.f_316;
		Global_2667225.f_555.f_4 = 125f;
		Global_2667225.f_2673 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_590 = 0;
		if (!Global_2667225.f_45.f_52)
		{
			Global_2667225.f_45.f_49 = { 0f, 0f, 0f };
		}
		Global_2667225.f_489 = iParam1;
		if (Global_2667225.f_489 == 0 || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_1002();
		}
		if ((Global_2667225.f_45.f_65 && Global_2667225.f_45.f_304) && Global_2667225.f_489 == 16)
		{
			Global_2667225.f_489 = 5;
		}
		Global_2667225.f_2676 = 0;
		Global_2667225.f_596 = 0f;
		Global_2667225.f_45.f_304 = 0;
		if (__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
		{
			Global_2667225.f_555.f_17 = 1;
		}
		else
		{
			Global_2667225.f_555.f_17 = 0;
		}
		Global_2667225.f_518 = 0;
		Global_2667225.f_2674 = 0;
		Global_2667225.f_555.f_27 = 0f;
		Global_2667225.f_2898 = 0f;
		if (Global_2667225.f_489 == 10)
		{
			iVar20 = __LIB_3__::func_380(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__::func_867(iVar20))
				{
					Global_2667225.f_2855 = iVar20;
					Global_2667225.f_489 = 29;
				}
			}
		}
		if (Global_2667225.f_489 == 10)
		{
		}
		if (Global_2667225.f_489 == 10)
		{
			if (__LIB_2__::func_698())
			{
				__LIB_1__::func_633();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__::func_697(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__::func_697(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__::func_697(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__::func_697(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__::func_697(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__::func_697(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__::func_697(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__::func_697(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__::func_697(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__::func_697(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__::func_697(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__::func_697(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__::func_697(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__::func_697(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__::func_697(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__::func_697(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__::func_697(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__::func_697(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__::func_697(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__::func_697(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__::func_697(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__::func_697(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__::func_697(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__::func_697(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__::func_697(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__::func_697(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__::func_697(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__::func_697(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__::func_697(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__::func_697(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__::func_697(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__::func_697(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__::func_697(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__::func_697(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__::func_697(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__::func_697(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__::func_697(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__::func_697(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__::func_697(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__::func_697(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__::func_697(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__::func_697(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__::func_697(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__::func_697(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__::func_697(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__::func_697(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__::func_697(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__::func_697(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__::func_697(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__::func_697(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				__LIB_12__::func_50(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_12__::func_49(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_10__::func_757(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_992(bParam2) };
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (iVar0 == 0)
					{
						if (Var19[iVar0] > -1)
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
							Global_2667225.f_714.f_502 = Var19[0];
							bVar2 = true;
							iParam4 = 1;
							Var18.f_28[iVar0] = Var19.f_12[iVar0];
						}
						else
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[0 /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[0 /*5*/].f_3;
							Global_2667225.f_520.f_6 = 1;
							Global_2667225.f_555.f_4 = 150f;
						}
					}
					else if (Var19[iVar0] > -1)
					{
						Var18[iVar0 /*3*/] = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
						Var18.f_16[iVar0] = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
						Var18.f_28[iVar0] = Var19.f_12[iVar0];
					}
					iVar0++;
				}
				if (bVar39)
				{
					__LIB_2__::func_892();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				__LIB_10__::func_757(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_2__::func_938();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__::func_891(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
				Global_2667225.f_512.f_2 = Var17.f_2;
				if (Global_2667225.f_512.f_2 > 70f)
				{
					Global_2667225.f_512.f_2 = 70f;
				}
				if (Global_2667225.f_512.f_2 < 0f)
				{
					Global_2667225.f_512.f_2 = 0f;
				}
				Var17 = { Global_2667225.f_512 };
				if (Var17.f_2 < 0f)
				{
					Var17.f_2 = 0f;
				}
				Var17.f_2 = (Var17.f_2 + 5f);
				Global_2667225.f_520.f_23 = { 0f, 10000000f, Var17.f_2 };
				Global_2667225.f_520.f_26 = { 0f, -10000000f, 99999.9f };
				Global_2667225.f_520.f_29 = 1E+09f;
				if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 30f;
				}
				Global_2667225.f_555 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 0f;
				Global_2667225.f_555.f_7 = 2;
				Global_2667225.f_555.f_8 = { Global_1574465 };
				Global_2667225.f_555.f_11 = { Global_1574468 };
				Global_2667225.f_555.f_14 = Global_1574471;
				Global_2667225.f_555.f_28 = 0;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				break;
			case 1:
				Var17 = { Global_2667225.f_512 };
				iVar38 = __LIB_1__::func_557(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_2__::func_693(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
					}
				}
				if (Global_2715699.f_6597)
				{
					Var17 = { Global_2715699.f_6598 };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				if (Global_1888188 > -1)
				{
					if (__LIB_1__::func_693(Global_1888188, 0, 1))
					{
						if (__LIB_9__::func_493(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1888188) };
							if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
								{
									Global_2667225.f_520.f_20[0] = 250f;
								}
								else
								{
									Global_2667225.f_520.f_20[0] = 125f;
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 75f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_828(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				fVar12 = (Global_2667225.f_520.f_5 - 65f);
				if (fVar12 < 0f)
				{
					fVar12 = 0f;
				}
				if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_4 = (120f + fVar12);
				}
				else
				{
					Global_2667225.f_555.f_4 = (135f + fVar12);
				}
				Global_2667225.f_555.f_4 = ((95f + Global_2667225.f_596) + fVar12);
				if (Global_2667225.f_555.f_4 > 250f)
				{
					Global_2667225.f_555.f_4 = 250f;
				}
				Global_2667225.f_593 = { Global_2667225.f_512 };
				fVar12 = (Global_2667225.f_555.f_4 * 0.5f);
				if (fVar12 < Global_2667225.f_520.f_5)
				{
					fVar12 = Global_2667225.f_520.f_5;
				}
				Var13 = { __LIB_9__::func_746(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_981(&(Global_2667225.f_555), 1))
				{
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					iVar42 = __LIB_2__::func_691(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_8__::func_918() || iVar40)
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 20:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				else
				{
					Var14 = { Global_2667225.f_512 };
				}
				Global_2667225.f_593 = { Var14 };
				Global_2667225.f_596 = 125f;
				if (func_981(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::getMinusOneOrNull())
					{
						if (__LIB_1__::func_693(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1836068.f_14) };
							if (__LIB_8__::func_918())
							{
								Global_2667225.f_520.f_20[0] = 250f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_828(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var14 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_555.f_4 = 250f;
				if (Global_2667225.f_520.f_3)
				{
					if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Global_2667225.f_512)))
					{
						Global_2667225.f_520.f_3 = 0;
					}
				}
				if (__LIB_8__::func_918())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_8__::func_272() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__::func_890(__LIB_1__::func_694(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__::func_890(Global_2667225.f_512);
				}
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				Global_2667225.f_593 = { Global_2667225.f_555.f_18 };
				Var21 = { Global_2667225.f_555.f_18 };
				switch (Global_2667225.f_45[iVar9 /*12*/].f_10)
				{
					case 0:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						break;
					case 1:
						fVar29 = SYSTEM::VMAG(Global_2667225.f_45[iVar9 /*12*/] - Global_2667225.f_45[iVar9 /*12*/].f_3);
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
					case 2:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
				}
				if (!__LIB_1__::func_528(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_3__::func_182(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
				}
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				fVar12 = 1f;
				if (Global_2667225.f_520.f_5 < 200f)
				{
					fVar12 = 1.5f;
				}
				else if (Global_2667225.f_520.f_5 < 300f)
				{
					fVar12 = (1f + (((300f - Global_2667225.f_520.f_5) / 100f) * 0.5f));
				}
				fVar35 = (Global_2667225.f_520.f_5 * fVar12);
				iVar30 = __LIB_9__::func_770(Var21, fVar35, &fVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_9__::func_975(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_9__::func_975(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_9__::func_745(Var21, fVar35) };
						Var23 = { __LIB_9__::func_744(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__::func_817(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_1__::func_528(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_3__::func_182(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = __LIB_9__::func_770(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__::func_158(Var14, Var23) < 0f)
							{
								iVar27[iVar0] = 1;
							}
							else
							{
								iVar27[iVar0] = 0;
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if ((uVar26[iVar0] == 0 && iVar27[iVar0] == 0) && !bVar31)
							{
								Var21 = { Var25[iVar0 /*3*/] };
								bVar31 = true;
							}
							iVar0++;
						}
						if (!bVar31)
						{
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] == 0 && !bVar31)
								{
									Var21 = { Var25[iVar0 /*3*/] };
									bVar31 = true;
								}
								iVar0++;
							}
						}
						if (!bVar31)
						{
							iVar32 = 999;
							iVar33 = -1;
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] < iVar32)
								{
									iVar33 = iVar0;
									fVar34 = uVar28[iVar0];
									iVar32 = uVar26[iVar0];
								}
								else if (uVar26[iVar0] == iVar32)
								{
									if (uVar28[iVar0] > fVar34)
									{
										fVar34 = uVar28[iVar0];
										iVar33 = iVar0;
									}
								}
								iVar0++;
							}
							if (!iVar33 == -1 && iVar32 < iVar30)
							{
								Var21 = { Var25[iVar33 /*3*/] };
								bVar31 = true;
							}
						}
						if (!bVar31)
						{
						}
						else
						{
							Global_2667225.f_596 = 0f;
						}
					}
				}
				Global_2667225.f_555.f_18 = { Var21 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 3:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_2__::func_687());
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar0 /*12*/]));
				if (func_587(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
			case 15:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 23:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_915(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_2__::func_686(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_2__::func_690(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672120[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 24:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_915(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 17:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_3__::func_232();
				}
				Global_2674954 = 0;
				if (!iVar16 > 0)
				{
				}
				iVar15 = iVar16;
				Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
				Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2678 = 1;
				}
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 18:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_3__::func_232();
				}
				Global_2674954 = 0;
				if (iVar16 <= 0)
				{
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						__LIB_3__::func_394(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 34:
				if (__LIB_9__::func_782())
				{
					iVar20 = __LIB_1__::func_780(__LIB_0__::func_797());
					if (iVar20 <= 0)
					{
					}
					__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_915(__LIB_0__::func_797()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_2__::func_745();
				if (iVar20 <= 0)
				{
				}
				__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_259(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_179(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
				Global_2667225.f_555.f_4 = 150f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 12f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_520.f_5 = 5f;
				Global_2667225.f_555.f_22 = 0;
				Global_2667225.f_515 = 0;
				break;
			case 28:
				iVar20 = __LIB_2__::func_745();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__::func_670())
						{
							case 4:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_3__::func_283(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2679 = 1;
				Global_2667225.f_2676 = 1;
				break;
			case 19:
				iVar16 = __LIB_3__::func_232();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1303;
				}
				if (iVar16 > 128)
				{
					iVar16 = 0;
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						switch (__LIB_1__::func_670())
						{
							case 4:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 35:
				iVar16 = __LIB_2__::func_771(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var44, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 36:
				iVar16 = __LIB_2__::func_771(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_3__::func_210(iVar15, 912, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 48:
			case 49:
			case 50:
			case 54:
			case 55:
			case 56:
			case 59:
				switch (__LIB_1__::func_670())
				{
					case 5:
						if (Global_2667225.f_489 == 39)
						{
							Global_2667225.f_555 = { 959.4153f, -3005.433f, -40.6349f };
							Global_2667225.f_555.f_3 = 288.1089f;
						}
						else if (Global_2667225.f_489 == 40)
						{
							Global_2667225.f_555 = { 905.5001f, -3200.1077f, -98.1879f };
							Global_2667225.f_555.f_3 = 190.2091f;
						}
						else if (Global_2667225.f_489 == 41)
						{
							Global_2667225.f_555 = { -1235.6235f, -2984.2317f, -42.2601f };
							Global_2667225.f_555.f_3 = 189.5472f;
						}
						else if (Global_2667225.f_489 == 42)
						{
							Global_2667225.f_555 = { 368.9986f, 4822.7114f, -59.9797f };
							Global_2667225.f_555.f_3 = 313.7473f;
						}
						else if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1614.179f, -3019.259f, -75.18f };
							Global_2667225.f_555.f_3 = 135f;
						}
						else if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 208.8848f, 5164.2656f, -89.1985f };
							Global_2667225.f_555.f_3 = 97.78f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 970.7293f, 78.29094f, 115.1642f };
							Global_2667225.f_555.f_3 = 236.0848f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.0068f, -368.7443f, -56.3809f };
							Global_2667225.f_555.f_3 = 267.6547f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.369f, 384.953f, -53.8531f };
							Global_2667225.f_555.f_3 = 0f;
							Global_2815059.f_933 = 1;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1360.148f, 144.8f, -95.7f };
							Global_2667225.f_555.f_3 = 90f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							switch (__LIB_0__::func_813(PLAYER::PLAYER_ID()))
							{
								case 1:
									Global_2667225.f_555 = { 387.949f, -69.676f, 112f };
									Global_2667225.f_555.f_3 = 26.279999f;
									break;
								case 2:
									Global_2667225.f_555 = { -1011.61f, -431.12f, 72.4981f };
									Global_2667225.f_555.f_3 = 73.229996f;
									break;
								case 3:
									Global_2667225.f_555 = { -595.463f, -709.173f, 121.642f };
									Global_2667225.f_555.f_3 = 226.13f;
									break;
								case 4:
									Global_2667225.f_555 = { -996.574f, -753.597f, 70.5312f };
									Global_2667225.f_555.f_3 = 136.28f;
									break;
								}
						}
						break;
					case 6:
						if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1609.1658f, -3016.9788f, -80.0061f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 45)
						{
							Global_2667225.f_555 = { 1105.1066f, 213.3884f, -50.4406f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 978.4244f, 57.9174f, 115.164f };
							Global_2667225.f_555.f_3 = 55f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.8425f, -377.4552f, -48.4f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 49)
						{
							Global_2667225.f_555 = { 1542.7819f, 246.4772f, -50.006f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.4023f, 382.5171f, -54.2844f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1356.4492f, 160.3916f, -100.1943f };
							Global_2667225.f_555.f_3 = 184.3954f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							Global_2667225.f_555 = { 386.225f, -68.459f, 111.39f };
							Global_2667225.f_555.f_3 = -115.2f;
						}
						break;
					case 7:
						if (Global_2667225.f_489 == 43)
						{
						}
						else if (Global_2667225.f_489 == 45)
						{
						}
						else if (Global_2667225.f_489 == 48)
						{
						}
						else if (Global_2667225.f_489 == 49)
						{
						}
						else if (Global_2667225.f_489 == 50)
						{
						}
						else if (Global_2667225.f_489 == 55)
						{
						}
						else if (Global_2667225.f_489 == 56)
						{
						}
						else if (Global_2667225.f_489 == 59)
						{
						}
						break;
					case 4:
						if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 202.819f, 5162.1733f, -88.8851f };
							Global_2667225.f_555.f_3 = 90f;
						}
						break;
					default:
						if (Global_2667225.f_489 == 39)
						{
							iVar46 = __LIB_1__::func_669(__LIB_4__::func_808(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__::func_656(__LIB_4__::func_566(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__::func_654(__LIB_4__::func_621(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__::func_651(__LIB_4__::func_501(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__::func_639(__LIB_1__::func_642(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::getMinusOneOrNull())
								{
									iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_630(__LIB_1__::func_631(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_626(__LIB_1__::func_627(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 49)
						{
							iVar46 = 146;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2815059.f_933 = 1;
							iVar46 = 147;
						}
						else if (Global_2667225.f_489 == 54)
						{
							iVar46 = 154;
						}
						else if (Global_2667225.f_489 == 55)
						{
							iVar46 = __LIB_1__::func_604(__LIB_1__::func_605(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_578(__LIB_0__::func_813(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_9__::func_743(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
						}
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2680 = 1;
					MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 28);
				}
				Global_2667225.f_2676 = 1;
				break;
			case 4:
				if (!NETWORK::NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(0, &(Global_2667225.f_555)))
				{
					Global_2667225.f_555 = { __LIB_8__::func_270() };
					Global_2667225.f_555 = { __LIB_2__::func_878(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_9__::func_333(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::getMinusOneOrNull())
					{
						Global_2667225.f_555 = { func_915(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_915(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_915(__LIB_0__::func_797()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 33:
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_9__::func_333(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::getMinusOneOrNull())
					{
						Global_2667225.f_555 = { func_915(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_915(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_915(__LIB_0__::func_797()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 5:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 38:
				Global_2667225.f_555 = { func_915(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_915(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555 = { __LIB_3__::func_176(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__::func_876(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 14:
				if (!Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = 0f;
					Global_2667225.f_555.f_4 = 0f;
					Global_2667225.f_555.f_7 = 2;
					Global_2667225.f_555.f_8 = { Global_2676213.f_11 };
					Global_2667225.f_555.f_11 = { Global_2676213.f_14 };
					Global_2667225.f_555.f_14 = Global_2676213.f_17;
					Global_2667225.f_593 = { 0f, 0f, 0f };
					Global_2667225.f_596 = 0f;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213.f_11 + Global_2676213.f_14 / Vector(2f, 2f, 2f) };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 10:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213 };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 32:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					Global_2667225.f_520 = { Global_2676213.f_18 };
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
					if (__LIB_9__::func_419(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
					{
						if (Global_2667225.f_555.f_4 > 50f)
						{
							Global_2667225.f_555.f_4 = 50f;
						}
						Global_2667225.f_593 = { Global_2667225.f_555 };
						Global_2667225.f_596 = 1.5f;
						Global_2667225.f_520.f_5 = 1.5f;
						Global_2667225.f_520.f_6 = 1;
						Global_2667225.f_555.f_16 = 0;
						Global_2667225.f_555.f_17 = 1;
						Global_2667225.f_520 = { Global_2667225.f_555 };
					}
					else
					{
						Global_2667225.f_518 = 1;
					}
				}
				break;
			case 16:
				if (Global_2667225.f_490.f_3 && !__LIB_9__::func_958(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_10__::func_756() };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					Global_2667225.f_2697 = 1;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					if (!Global_2667225.f_490.f_3)
					{
						Global_2667225.f_2697 = 1;
					}
				}
				break;
			case 11:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_2697 = 1;
					bVar2 = true;
					bParam2 = false;
				}
				break;
			case 13:
				if (Global_2676213.f_10)
				{
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					bVar2 = true;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					if (Global_2676213.f_3 < (Global_2676213.f_4 / 2f))
					{
						Global_2667225.f_596 = (Global_2676213.f_4 / 2f);
					}
					else
					{
						Global_2667225.f_596 = Global_2676213.f_3;
					}
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_6 = 1;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				if (func_587(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_9__::func_772(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_9__::func_462())
			{
				Global_2667225.f_587 = 4;
			}
			else
			{
				if (Global_2667225.f_45.f_309)
				{
					Var17 = { Global_2667225.f_520 };
					if (SYSTEM::VMAG(Var17) == 0f)
					{
						Var17 = { Global_2667225.f_555 };
					}
					if (!__LIB_2__::func_674(Var17))
					{
						Global_2667225.f_555.f_23 = 0;
					}
				}
				Global_2667225.f_555.f_24 = Global_2667225.f_45.f_310;
				Global_2667225.f_587 = 3;
			}
		}
		else if (bVar2)
		{
			Var18[0 /*3*/] = { Global_2667225.f_555 };
			Var18.f_16[0] = Global_2667225.f_555.f_3;
			Global_2667225.f_587 = 0;
			Global_2667225.f_589 = 0;
			Global_2667225.f_667 = 0;
			Global_2667225.f_668 = 0;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2898 = Global_2667225.f_555.f_27;
			*uParam0 = { Var18 };
			return 1;
		}
		else
		{
			func_845();
		}
	}
	if (Global_2667225.f_587 == 3)
	{
		if (bParam2)
		{
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					fVar3 = (Global_2667225.f_555 - Global_2667225.f_555.f_4);
					fVar5 = (Global_2667225.f_555.f_1 - Global_2667225.f_555.f_4);
					fVar4 = (Global_2667225.f_555 + Global_2667225.f_555.f_4);
					fVar6 = (Global_2667225.f_555.f_1 + Global_2667225.f_555.f_4);
					break;
				case 1:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = Global_2667225.f_555.f_8;
						fVar4 = Global_2667225.f_555.f_11;
					}
					else
					{
						fVar3 = Global_2667225.f_555.f_11;
						fVar4 = Global_2667225.f_555.f_8;
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = Global_2667225.f_555.f_8.f_1;
						fVar6 = Global_2667225.f_555.f_11.f_1;
					}
					else
					{
						fVar5 = Global_2667225.f_555.f_11.f_1;
						fVar6 = Global_2667225.f_555.f_8.f_1;
					}
					break;
				case 2:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = (Global_2667225.f_555.f_8 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_11 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar3 = (Global_2667225.f_555.f_11 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_8 + (0.5f * Global_2667225.f_555.f_14));
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = (Global_2667225.f_555.f_8.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_11.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar5 = (Global_2667225.f_555.f_11.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_8.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					break;
				}
		}
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar3, fVar5, fVar4, fVar6);
		if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar3, fVar5, fVar4, fVar6))
		{
			if (Global_2667225.f_555.f_21)
			{
				Var18[0 /*3*/] = { Global_2667225.f_555.f_18 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			else
			{
				Var18[0 /*3*/] = { Global_2667225.f_555 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			Var48.f_6 = 1082130432;
			Var48.f_7 = 1176255488;
			Var48.f_8 = 1;
			Var48.f_10 = 1;
			Var48.f_13 = 1;
			Var48.f_15 = 1;
			Var48.f_16 = 1;
			Var48.f_31 = 1;
			Var48.f_34 = joaat("tailgater");
			Var48.f_38 = 2;
			Var48.f_45 = 2;
			Var48.f_49 = 1123024896;
			Var48.f_53 = 999;
			Var48.f_54 = 1176256410;
			Var48.f_55 = 1;
			Var48.f_56 = 1;
			Var48.f_57 = 1;
			Var48 = { Global_2667225.f_520 };
			Var48.f_4 = Global_2667225.f_596;
			Var48.f_12 = bParam2;
			Var48.f_3 = Global_2667225.f_520.f_5;
			Var48.f_5 = fVar36;
			Var48.f_16 = Global_2667225.f_555.f_23;
			if (Global_2667225.f_555.f_26)
			{
				Var48.f_10 = 0;
			}
			if (Global_2667225.f_520.f_32 > 0f)
			{
				Var48.f_6 = Global_2667225.f_520.f_32;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar49 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar49))
				{
					Var48.f_34 = ENTITY::GET_ENTITY_MODEL(iVar49);
				}
			}
			if (iParam7 != 0)
			{
				Var48.f_34 = iParam7;
			}
			Var48.f_18 = 1;
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					Var48.f_19 = { Global_2667225.f_555 };
					Var48.f_25 = Global_2667225.f_555.f_4;
					Var48.f_4 = 0f;
					break;
				case 1:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = 0f;
					break;
				case 2:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = Global_2667225.f_555.f_14;
					break;
			}
			Var48.f_26 = Global_2667225.f_555.f_7;
			if ((__LIB_0__::func_975() && __LIB_8__::func_918()) && func_587(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_9__::func_460();
			if (Global_2667225.f_520.f_6)
			{
				Var48.f_30 = 1;
				Var48.f_29 = 0;
			}
			else
			{
				Var48.f_30 = 0;
				Var48.f_29 = 1;
			}
			if (Global_2667225.f_489 == 3)
			{
				Var48.f_28 = 1;
				Var48.f_29 = 1;
				Var48.f_30 = 0;
			}
			else if (Global_2667225.f_489 == 26)
			{
				Var48.f_28 = 1;
				Var48.f_30 = 1;
				Var48.f_29 = 0;
				Var48.f_32 = 1;
			}
			if (Global_2667225.f_489 == 1)
			{
				Var48.f_7 = 15f;
			}
			if (Global_2667225.f_45.f_311 > 0f)
			{
				Var48.f_7 = Global_2667225.f_45.f_311;
			}
			Var48.f_17 = uParam6;
			Var48.f_55 = Global_2667225.f_555.f_16;
			Var48.f_60 = Global_2667225.f_555.f_30;
			if (__LIB_1__::func_603(PLAYER::PLAYER_ID()))
			{
				Var48.f_58 = 1;
			}
			func_543(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (iVar0 < Global_2674786.f_162 && iVar0 > 0)
				{
					Var18[iVar0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
					Var18.f_16[iVar0] = Global_2674786.f_121[iVar0];
				}
				iVar0++;
			}
			if (Var48.f_11 && Var48.f_27)
			{
				Global_2667225.f_45.f_304 = 1;
			}
			else
			{
				Global_2667225.f_45.f_304 = 0;
			}
			Global_2667225.f_590++;
			Global_2667225.f_588 = 3;
			Global_2667225.f_587 = 5;
		}
	}
	if (Global_2667225.f_587 == 4)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Var18[iVar0 /*3*/] = { Global_2667225.f_555.f_18 };
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_837(&(Var18[iVar0 /*3*/]), __LIB_1__::func_560(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_834(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_834(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_834(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
						break;
					}
			}
			if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
			{
				Var17 = { Global_2667225.f_520 - Var18[iVar0 /*3*/] };
				Var18.f_16[iVar0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var17.f_0, Var17.f_1);
			}
			iVar0++;
		}
		Global_2667225.f_45.f_304 = 0;
		Global_2667225.f_590++;
		Global_2667225.f_588 = 4;
		Global_2667225.f_587 = 5;
	}
	if (Global_2667225.f_587 == 5)
	{
		if (Global_2667225.f_489 == 11 && Global_2667225.f_45.f_59 > 0f)
		{
			if (SYSTEM::VDIST(Var18[0 /*3*/], Global_2667225.f_45.f_60) > SYSTEM::VDIST(Global_2676213, Global_2667225.f_45.f_60))
			{
				Var18[0 /*3*/] = { Global_2676213 };
				Var18.f_16[0] = Global_2676213.f_5;
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_1__::func_410(Global_2667225.f_489) && !__LIB_1__::func_560(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_9__::func_462())
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_845();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_9__::func_418(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_9__::func_516(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_845();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_2__::func_670(&Var18, &iVar0);
			}
			iVar0++;
		}
	}
	if (Global_2667225.f_587 == 6)
	{
		if (Global_2667225.f_589 == 2 || Global_2667225.f_555.f_16 == 0)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = iParam3;
		}
		if (Global_2667225.f_555.f_7 == 0)
		{
			if (Global_2667225.f_520.f_5 > (Global_2667225.f_555.f_4 * 2f))
			{
				Global_2667225.f_520.f_5 = (Global_2667225.f_555.f_4 * 2f);
			}
		}
		Global_2667225.f_555.f_5 = 1;
		Global_2667225.f_555.f_6 = iVar1;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_520.f_8 = 0;
		Global_2667225.f_520.f_9 = __LIB_9__::func_460();
		Global_2667225.f_520.f_10 = 0;
		if (func_762(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
		{
			Global_2667225.f_511 = 0;
			Global_2667225.f_587 = 2;
		}
	}
	if (Global_2667225.f_587 == 2)
	{
		*uParam0 = { Var18 };
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
		return 1;
	}
	return 0;
}

int func_762(var uParam0, var uParam1, var uParam2)//Position - 0x81D5E
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2667225.f_2466 == *uParam0 || !Global_2667225.f_2466.f_1 == uParam0->f_1) || !Global_2667225.f_2466.f_2 == uParam0->f_2) || !Global_2667225.f_2469 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		case 1:
			if (((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		case 2:
			if ((((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2667225.f_2486 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2667225.f_2487 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473) && !Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2667225.f_2464 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473))
			{
				if (Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__::func_853(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_2__::func_740();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2667225.f_2464)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		__LIB_1__::func_442();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_9__::func_771(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			Global_2667225.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2667225.f_2466 = { *uParam0 };
					Global_2667225.f_2469 = uParam0->f_4;
					break;
				case 1:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = 0f;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = uParam0->f_14;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				__LIB_1__::func_436(Var6.f_0, Var6.f_1);
			}
			Global_2667225.f_2465 = 1;
			Global_2667225.f_2464 = 1;
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2473 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2667225.f_2464)
	{
		if (Global_2667225.f_2465 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 5000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (__LIB_1__::func_435(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_543(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__::func_828(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2667225.f_2465 = 9;
				}
				else
				{
					Global_2667225.f_2465 = 2;
				}
			}
		}
		if (Global_2667225.f_2465 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var7, Var8) == 0)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_2465 = 3;
				}
				else
				{
					Global_2667225.f_2465 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2475) > 7000)
			{
				__LIB_2__::func_739(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__::func_432() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 4;
			}
		}
		if (Global_2667225.f_2465 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				__LIB_2__::func_740();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 1:
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var10, Var11, fVar12, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
							break;
						case 2:
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2667225.f_2465 == 5)
		{
			if (func_772(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2667225.f_2491.f_5)
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 6;
				}
				else
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2667225.f_2465 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2667225.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!__LIB_1__::func_413(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__::func_412(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
					break;
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
		{
			if (func_772(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2667225.f_2625[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (__LIB_0__::func_828(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_1__::func_453(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_764(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						iVar9++;
					}
				}
				Global_2667225.f_2465 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (__LIB_1__::func_410(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam2, &(Global_2667225.f_2491.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2667225.f_2466 };
				func_764(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
			return 1;
		}
		Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_764(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x82DA6
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (__LIB_1__::func_413(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_766(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_543(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_766(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_587(uParam0, 1, 1, 1, 1))
			{
				func_764(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2667225.f_667 = 1;
}

int func_766(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x83286
{
	if (__LIB_1__::func_411(Param0, uParam1))
	{
		if (func_767(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_767(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_767(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x832E2
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_584(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!__LIB_2__::func_990(*uParam1, 1056964608))
			{
				if (!__LIB_2__::func_664(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_772(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x835B1
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	if (Global_2667225.f_2491.f_1 == 0 && Global_2667225.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2667225.f_2491.f_1)))
			{
				case 0:
					func_819(uParam1, uParam2);
					if (!Global_2667225.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2667225.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
							}
							if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_764(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_764(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_819(uParam1, uParam2);
					break;
				case 2:
					return 0;
					break;
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					func_819(uParam1, uParam2);
					Global_2667225.f_2491.f_1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				func_819(uParam1, uParam2);
				if (!Global_2667225.f_2491.f_2)
				{
					Global_2667225.f_2491.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_816(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_780(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2667225.f_2491.f_1 > 0 || Global_2667225.f_2491 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar2 = 0;
			while (iVar2 < Global_2667225.f_2491.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2667225.f_2491.f_3)
					{
						iVar2 = Global_2667225.f_2491.f_3 + 1;
					}
					if (iVar2 > (Global_2667225.f_2491.f_1 - 1))
					{
						iVar2 = (Global_2667225.f_2491.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
					}
					func_780(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2667225.f_2491.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2667225.f_2491.f_1;
		}
		if (Global_2667225.f_2491.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2667225.f_2889)
			{
				__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_764(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__::func_664(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_764(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_764(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_764(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_764(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_414(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_780(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x83E75
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2667225.f_489 == 1)
		{
			if (MISC::ABSF((Global_2667225.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!__LIB_8__::func_916(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_9__::func_418(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_23) > 0f && SYSTEM::VMAG(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, false, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (__LIB_9__::func_974(Param0, fParam1, uParam2->f_15, __LIB_1__::func_430(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_9__::func_516(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_9__::func_257(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_9__::func_257(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			Var12 = { Global_2667225.f_512 };
			if (Global_2667225.f_489 == 26)
			{
				Var12 = { Global_2667225.f_555.f_18 };
			}
			if (!__LIB_0__::func_822(Param0, 0.5f))
			{
				if (func_635(Var12))
				{
					if (!func_587(&Param0, 0, 0, 0, 1) && !__LIB_2__::func_784(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_2__::func_784(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!__LIB_1__::func_428(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_1__::func_456(PLAYER::PLAYER_ID()) && __LIB_1__::func_872(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__::func_668(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_1__::func_872(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_427(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (__LIB_2__::func_738(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__::func_410(Global_2667225.f_489))
			{
				if (__LIB_1__::func_560(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (__LIB_1__::func_426(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2667225.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			if (!__LIB_2__::func_766(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!__LIB_2__::func_664(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_1__::func_559(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_2__::func_667(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_2__::func_975(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_2__::func_990(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (__LIB_1__::func_423(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2667225.f_2889 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = __LIB_9__::func_957(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_9__::func_957(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_410(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_3__::func_256(Param0);
			}
			fVar7 = __LIB_9__::func_742(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_2__::func_665(Var19);
			Global_2667225.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2667225.f_2491.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = __LIB_9__::func_957(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_9__::func_957(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__::func_410(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_3__::func_256(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_783(Var19, iVar18);
							Global_2667225.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar0 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_1 = fVar0;
						func_783(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = __LIB_8__::func_914(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_9__::func_742(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__::func_420(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__::func_420(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_783(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_783(struct<10> Param0, int iParam1)//Position - 0x84A6A
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_783(Var0, iParam1 + 1);
	}
}

void func_816(struct<3> Param0, var uParam1, var uParam2)//Position - 0x85FF2
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2621865[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2621865[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2621865[iVar1 /*26*/].f_6.f_2;
					func_818(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6292[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6292[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_818(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_818(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var5, Param0) < SYSTEM::VDIST(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2621541[iVar1 /*3*/] };
				func_817(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_817(var uParam0, var uParam1, int iParam2)//Position - 0x86312
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_817(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_818(var uParam0, var uParam1, int iParam2)//Position - 0x86350
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_818(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_819(var uParam0, var uParam1)//Position - 0x8638A
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (__LIB_2__::func_851(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_780(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

Vector3 func_834(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x8676B
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam3)
		{
			case 0:
				Var1 = { __LIB_2__::func_878(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_2__::func_671(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__::func_875(Param0, Param1, fParam2) };
				break;
		}
		if (func_837(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_837(var uParam0, bool bParam1)//Position - 0x868AC
{
	func_838(uParam0, bParam1);
	if (__LIB_9__::func_771(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_838(var uParam0, bool bParam1)//Position - 0x868E3
{
	float fVar0;
	if (!bParam1)
	{
		func_840(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_840(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_2__::func_672(uParam0);
}

void func_840(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x869B9
{
	if (bParam1)
	{
		if (func_635(Global_2667225.f_512))
		{
			if (func_587(uParam0, 1, 0, 0, bParam5))
			{
			}
		}
	}
	if (bParam2)
	{
		if (__LIB_2__::func_766(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_2__::func_784(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_8__::func_269(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_2__::func_673(uParam0, 1120403456);
}

void func_845()//Position - 0x86C03
{
	if (!Global_2667225.f_701)
	{
		if (func_635(Global_2667225.f_555))
		{
			if (func_587(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_981(&(Global_2667225.f_555), 1))
				{
					Global_2667225.f_520.f_7 = 0;
				}
			}
		}
		if (__LIB_2__::func_766(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_2__::func_784(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_9__::func_462())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_915(int iParam0)//Position - 0x8BEF4
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iParam0]))
	{
		Var0 = { __LIB_1__::func_722(Global_2678393[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[iParam0]) && !iParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_722(Global_2678393.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_916(iParam0);
}

Vector3 func_916(int iParam0)//Position - 0x8BF68
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_2__::func_889(iParam0))
		{
			Var1 = { __LIB_2__::func_888(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_955(__LIB_1__::func_694(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_4__::func_902(iParam0))
	{
		Var1 = { __LIB_9__::func_461(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_5__::func_241(iParam0))
	{
		iVar2 = __LIB_1__::func_668(iParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1946250.f_533[iVar2 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2676198)
	{
		if (__LIB_2__::func_889(iParam0))
		{
			Var1 = { __LIB_2__::func_888(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_1__::func_694(iParam0);
}

void func_955(struct<3> Param0, var uParam1)//Position - 0x8CF21
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_956(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_956(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_956(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_956(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_956(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_956(struct<3> Param0, int iParam1, float fParam2)//Position - 0x8D065
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_956(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_956(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_956(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_956(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_956(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_956(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_956(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_956(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_956(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_956(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_956(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_981(var uParam0, bool bParam1)//Position - 0x90512
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					if (Global_2672169[iVar0 /*17*/].f_12)
					{
						*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
					}
					else
					{
						Var1 = { *uParam0 };
						Var1.f_2 = __LIB_2__::func_692(&(Global_2672169[iVar0 /*17*/]));
						__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_587(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
						}
						*uParam0 = { Var1 };
					}
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<18> func_992(bool bParam0)//Position - 0x90F4E
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	Var0 = 5;
	Var0.f_6 = 5;
	Var0.f_12 = 5;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Var0[iVar1] = -1;
		Var0.f_6[iVar1] = -1f;
		iVar1++;
	}
	if (Global_2667225.f_714 == 1)
	{
		Var0[0] = 0;
		Var0.f_6[0] = 1f;
		return Var0;
	}
	iVar2 = 0;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar2 = 1;
	}
	fVar8 = 0f;
	if (Global_2667225.f_714.f_507)
	{
		fVar8 = 0.001f;
	}
	iVar1 = 0;
	while (iVar1 < Global_2667225.f_714)
	{
		fVar4 = 1f;
		fVar6 = 0f;
		if (Global_2667225.f_2878 && Global_2667225.f_714.f_503 == iVar1)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else if (Global_2667225.f_714.f_503 == iVar1 && Global_2667225.f_714.f_504)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else
		{
			if (!Global_2667225.f_714.f_505)
			{
				if (__LIB_1__::func_423(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__::func_822(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_9__::func_257(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_9__::func_257(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_9__::func_257(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_9__::func_332(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = __LIB_9__::func_742(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_9__::func_459(), __LIB_9__::func_458(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_9__::func_742(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_2__::func_737(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_9__::func_459(), __LIB_9__::func_458(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_2__::func_695(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, 65f, 0.8f, 1f);
					fVar4 = (fVar4 * (fVar3 * 1f));
				}
			}
			fVar4 = (fVar4 * Global_2667225.f_714.f_1[iVar1 /*5*/].f_4);
		}
		iVar7 = 0;
		while (iVar7 < 5)
		{
			if (fVar4 > 0f || Global_2667225.f_714.f_507)
			{
				if (fVar4 > Var0.f_6[iVar7])
				{
					func_993(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_993(&Var0, iVar1, fVar4, iVar7, fVar6);
						iVar7 = 5;
					}
				}
			}
			iVar7++;
		}
		iVar1++;
	}
	return Var0;
}

void func_993(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0x913B1
{
	var uVar0;
	var uVar1;
	var uVar2;
	uVar0 = (*uParam0)[iParam3];
	uVar1 = uParam0->f_6[iParam3];
	uVar2 = uParam0->f_12[iParam3];
	(*uParam0)[iParam3] = iParam1;
	uParam0->f_6[iParam3] = fParam2;
	uParam0->f_12[iParam3] = fParam4;
	if (iParam3 < 4)
	{
		func_993(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_1002()//Position - 0x919BF
{
	int iVar0;
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() == 5)
	{
		return 7;
	}
	else
	{
		if (!Global_2667225.f_490 == 0)
		{
			if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_490.f_1))
			{
				if (Global_2667225.f_490 == 8)
				{
					__LIB_2__::func_892();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__::func_897())
			{
				Global_2667225.f_45.f_54 = 1;
			}
			else
			{
				Global_2667225.f_45.f_54 = 0;
			}
			if (Global_2667225.f_45.f_54)
			{
				return 26;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			if (!Global_2667225.f_24 == 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_24.f_1))
				{
					Global_2667225.f_24 = 0;
				}
			}
			if (!Global_2667225.f_24 == 0)
			{
				return Global_2667225.f_24;
			}
			else
			{
				if (__LIB_0__::func_938(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__::func_896() && (__LIB_2__::func_940(PLAYER::PLAYER_ID()) || __LIB_2__::func_700(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__::func_974())
				{
					if (func_1014(PLAYER::PLAYER_ID()))
					{
						return 33;
					}
					else
					{
						return 20;
					}
				}
				else if (__LIB_0__::func_975())
				{
					return 20;
				}
				else if ((((((__LIB_2__::func_159(1) && func_1014(PLAYER::PLAYER_ID())) && (__LIB_5__::func_185(PLAYER::PLAYER_ID()) != 157 || (__LIB_5__::func_185(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_797() != __LIB_1__::func_730()))) && !__LIB_2__::func_895()) && !__LIB_7__::func_570(PLAYER::PLAYER_ID())) && !__LIB_1__::func_375(1)) && !(__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0) == 0 && func_1009(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_9__::func_782())
					{
						return 34;
					}
					else if (__LIB_9__::func_773(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_7__::func_693(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__::func_867(iVar0) && __LIB_8__::func_848(iVar0)) && (__LIB_9__::func_497(iVar0) || __LIB_1__::func_744(PLAYER::PLAYER_ID())))
						{
							Global_2667225.f_2855 = iVar0;
							return 29;
						}
						else
						{
							return 31;
						}
					}
				}
				else if (__LIB_9__::func_773(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_7__::func_693(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__::func_867(iVar0) && __LIB_8__::func_848(iVar0))
					{
						Global_2667225.f_2855 = iVar0;
						return 29;
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 1;
}

int func_1009(int iParam0)//Position - 0x91E7F
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_2__::func_72(iParam0, 0))
	{
		iVar0 = __LIB_2__::func_39(iParam0);
		Var1 = { func_915(iVar0) };
		return func_587(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_1014(int iParam0)//Position - 0x91F7A
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	Var0 = { func_915(iParam0) };
	if (__LIB_2__::func_72(iParam0, 0))
	{
		iVar1 = __LIB_2__::func_39(iParam0);
		Var2 = { func_915(iVar1) };
		Var0.f_2 = 0f;
		Var2.f_2 = 0f;
		if (SYSTEM::VDIST2(Var0, Var2) < 250000f)
		{
			return 1;
		}
	}
	else
	{
		iVar3 = __LIB_9__::func_333(iParam0, 1);
		if (!iVar3 == __LIB_0__::getMinusOneOrNull())
		{
			Var4 = { func_915(iVar3) };
			Var0.f_2 = 0f;
			Var4.f_2 = 0f;
			if (SYSTEM::VDIST2(Var0, Var4) < 250000f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1034(int iParam0)//Position - 0x92536
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 >= 157 && iParam0 <= 256)
	{
		return 1;
	}
	return 0;
}

void func_1036(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x92574
{
	switch (iParam0)
	{
		case 42:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 17.5349f, 6573.1323f, 31.7158f };
					*uParam3 = 240.1994f;
					break;
				case 1:
					*uParam2 = { 14.8945f, 6575.8086f, 31.7158f };
					*uParam3 = 238.9994f;
					break;
				case 2:
					*uParam2 = { 20.6651f, 6570.355f, 30.6121f };
					*uParam3 = 240.1994f;
					break;
				case 3:
					*uParam2 = { 26.0199f, 6574.6753f, 30.5131f };
					*uParam3 = 240.1994f;
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 412.8073f, 6622.1787f, 27.0666f };
					*uParam3 = 237.9986f;
					break;
				case 1:
					*uParam2 = { 414.6512f, 6624.5527f, 27.0842f };
					*uParam3 = 222.3986f;
					break;
				case 2:
					*uParam2 = { 418.1367f, 6622.284f, 26.7583f };
					*uParam3 = 211.1986f;
					break;
				case 3:
					*uParam2 = { 417.6506f, 6616.399f, 26.4138f };
					*uParam3 = 206.9986f;
					break;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 8.8103f, 6525.5127f, 30.4204f };
					*uParam3 = 55.5983f;
					break;
				case 1:
					*uParam2 = { 7.4254f, 6527.8735f, 30.4543f };
					*uParam3 = 66.5983f;
					break;
				case 2:
					*uParam2 = { 11.1684f, 6527.241f, 30.3547f };
					*uParam3 = 66.5983f;
					break;
				case 3:
					*uParam2 = { 5.99f, 6525.471f, 30.468f };
					*uParam3 = 59.7982f;
					break;
			}
			break;
		case 45:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -195.3279f, 6463.132f, 29.8997f };
					*uParam3 = 251.7979f;
					break;
				case 1:
					*uParam2 = { -198.0305f, 6457.6387f, 29.9715f };
					*uParam3 = 247.5979f;
					break;
				case 2:
					*uParam2 = { -193.2977f, 6464.5513f, 29.6835f };
					*uParam3 = 251.7979f;
					break;
				case 3:
					*uParam2 = { -199.5536f, 6455.8496f, 30.0525f };
					*uParam3 = 238.9979f;
					break;
			}
			break;
		case 46:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -222.3729f, 6431.64f, 30.2021f };
					*uParam3 = 244.9979f;
					break;
				case 1:
					*uParam2 = { -220.468f, 6433.834f, 30.1975f };
					*uParam3 = 244.9979f;
					break;
				case 2:
					*uParam2 = { -220.5028f, 6429.0884f, 30.2131f };
					*uParam3 = 244.9979f;
					break;
				case 3:
					*uParam2 = { -217.914f, 6432.0356f, 30.1977f };
					*uParam3 = 239.3978f;
					break;
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -132.9801f, 6334.5225f, 30.4461f };
					*uParam3 = 157.1977f;
					break;
				case 1:
					*uParam2 = { -139.9169f, 6336.3477f, 30.5915f };
					*uParam3 = 138.9975f;
					break;
				case 2:
					*uParam2 = { -135.032f, 6333.22f, 30.4676f };
					*uParam3 = 157.1977f;
					break;
				case 3:
					*uParam2 = { -134.7707f, 6330.518f, 30.5974f };
					*uParam3 = 157.1977f;
					break;
			}
			break;
		case 48:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -346.9642f, 6333.376f, 28.9891f };
					*uParam3 = 240.7971f;
					break;
				case 1:
					*uParam2 = { -349.7834f, 6330.6763f, 28.9422f };
					*uParam3 = 236.597f;
					break;
				case 2:
					*uParam2 = { -352.439f, 6328.495f, 28.8999f };
					*uParam3 = 232.397f;
					break;
				case 3:
					*uParam2 = { -355.0284f, 6326.3994f, 28.8577f };
					*uParam3 = 216.197f;
					break;
			}
			break;
		case 49:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -318.6661f, 6324.6636f, 30.0188f };
					*uParam3 = 52.5967f;
					break;
				case 1:
					*uParam2 = { -323.9018f, 6319.0083f, 30.069f };
					*uParam3 = 63.7967f;
					break;
				case 2:
					*uParam2 = { -321.7896f, 6326.247f, 29.639f };
					*uParam3 = 45.5966f;
					break;
				case 3:
					*uParam2 = { -325.875f, 6321.8823f, 29.5869f };
					*uParam3 = 79.7966f;
					break;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -424.5072f, 6257.601f, 29.5337f };
					*uParam3 = 269.5963f;
					break;
				case 1:
					*uParam2 = { -420.7737f, 6256.868f, 29.584f };
					*uParam3 = 269.5963f;
					break;
				case 2:
					*uParam2 = { -423.211f, 6263.844f, 29.4838f };
					*uParam3 = 245.7961f;
					break;
				case 3:
					*uParam2 = { -419.1255f, 6261.539f, 29.4641f };
					*uParam3 = 245.7961f;
					break;
			}
			break;
		case 51:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -252.8151f, 6218.264f, 30.4892f };
					*uParam3 = 153.596f;
					break;
				case 1:
					*uParam2 = { -256.2903f, 6214.351f, 30.4892f };
					*uParam3 = 150.5959f;
					break;
				case 2:
					*uParam2 = { -264.4771f, 6217.4136f, 30.5053f };
					*uParam3 = 150.5959f;
					break;
				case 3:
					*uParam2 = { -266.9532f, 6214.986f, 30.5313f };
					*uParam3 = 152.5959f;
					break;
			}
			break;
		case 52:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -265.1024f, 6176.507f, 30.3858f };
					*uParam3 = 336.5955f;
					break;
				case 1:
					*uParam2 = { -270.5427f, 6178.765f, 30.4002f };
					*uParam3 = 332.3954f;
					break;
				case 2:
					*uParam2 = { -268.2294f, 6182.5654f, 30.3956f };
					*uParam3 = 339.5952f;
					break;
				case 3:
					*uParam2 = { -263.3365f, 6178.275f, 30.3859f };
					*uParam3 = 315.5951f;
					break;
			}
			break;
		case 53:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -425.9655f, 6128.2617f, 30.4779f };
					*uParam3 = 240.9948f;
					break;
				case 1:
					*uParam2 = { -423.1857f, 6131.017f, 30.4763f };
					*uParam3 = 243.7947f;
					break;
				case 2:
					*uParam2 = { -419.5018f, 6129.023f, 30.2606f };
					*uParam3 = 243.7947f;
					break;
				case 3:
					*uParam2 = { -422.8078f, 6125.8784f, 30.4005f };
					*uParam3 = 228.1947f;
					break;
			}
			break;
		case 54:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2234.6362f, 5165.2373f, 57.6865f };
					*uParam3 = 101.9944f;
					break;
				case 1:
					*uParam2 = { 2235.6367f, 5161.154f, 57.0695f };
					*uParam3 = 132.5943f;
					break;
				case 2:
					*uParam2 = { 2232.033f, 5163.042f, 57.1329f };
					*uParam3 = 119.3942f;
					break;
				case 3:
					*uParam2 = { 2232.3408f, 5159.1475f, 56.6485f };
					*uParam3 = 119.3942f;
					break;
			}
			break;
		case 55:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2025.6923f, 4974.1875f, 40.1593f };
					*uParam3 = 239.5937f;
					break;
				case 1:
					*uParam2 = { 2022.1621f, 4970.049f, 40.2599f };
					*uParam3 = 239.5937f;
					break;
				case 2:
					*uParam2 = { 2030.2384f, 4976.554f, 40.0578f };
					*uParam3 = 267.9936f;
					break;
				case 3:
					*uParam2 = { 2028.3578f, 4973.9263f, 40.1077f };
					*uParam3 = 254.1935f;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 56:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2314.8618f, 4746.6094f, 35.6502f };
					*uParam3 = 200.3996f;
					break;
				case 1:
					*uParam2 = { 2318.904f, 4745.3813f, 35.4422f };
					*uParam3 = 200.3996f;
					break;
				case 2:
					*uParam2 = { 2320.0222f, 4749.623f, 35.3766f };
					*uParam3 = 200.3996f;
					break;
				case 3:
					*uParam2 = { 2316.3103f, 4749.342f, 35.6638f };
					*uParam3 = 200.3996f;
					break;
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1355.2542f, 4830.643f, 135.3954f };
					*uParam3 = 154.1996f;
					break;
				case 1:
					*uParam2 = { -1358.756f, 4831.7363f, 134.8787f };
					*uParam3 = 154.1996f;
					break;
				case 2:
					*uParam2 = { -1352.2186f, 4832.2393f, 136.0066f };
					*uParam3 = 154.1996f;
					break;
				case 3:
					*uParam2 = { -1355.4888f, 4834.45f, 135.9585f };
					*uParam3 = 154.1996f;
					break;
			}
			break;
		case 58:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1684.5769f, 4645.496f, 42.7361f };
					*uParam3 = 268.1993f;
					break;
				case 1:
					*uParam2 = { 1687.5667f, 4645.3115f, 42.5452f };
					*uParam3 = 268.1993f;
					break;
				case 2:
					*uParam2 = { 1686.159f, 4649.398f, 42.4877f };
					*uParam3 = 268.1993f;
					break;
				case 3:
					*uParam2 = { 1688.7515f, 4648.2363f, 42.473f };
					*uParam3 = 268.1993f;
					break;
			}
			break;
		case 59:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1700.1821f, 4745.1973f, 40.9769f };
					*uParam3 = 98.599f;
					break;
				case 1:
					*uParam2 = { 1698.2633f, 4748.4062f, 40.9859f };
					*uParam3 = 98.599f;
					break;
				case 2:
					*uParam2 = { 1694.459f, 4746.661f, 40.9979f };
					*uParam3 = 98.599f;
					break;
				case 3:
					*uParam2 = { 1696.3158f, 4743.886f, 41.0162f };
					*uParam3 = 98.599f;
					break;
			}
			break;
		case 60:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2935.3838f, 4476.074f, 46.6891f };
					*uParam3 = 218.9987f;
					break;
				case 1:
					*uParam2 = { 2937.841f, 4477.749f, 46.6067f };
					*uParam3 = 218.9987f;
					break;
				case 2:
					*uParam2 = { 2939.1301f, 4475.5474f, 46.3159f };
					*uParam3 = 218.9987f;
					break;
				case 3:
					*uParam2 = { 2936.401f, 4473.4536f, 46.3906f };
					*uParam3 = 218.9987f;
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1876.144f, 3752.3984f, 31.964f };
					*uParam3 = 218.1987f;
					break;
				case 1:
					*uParam2 = { 1879.0182f, 3752.5776f, 31.9339f };
					*uParam3 = 218.1987f;
					break;
				case 2:
					*uParam2 = { 1876.8099f, 3749.3838f, 31.8909f };
					*uParam3 = 218.1987f;
					break;
				case 3:
					*uParam2 = { 1879.5748f, 3749.9265f, 31.7246f };
					*uParam3 = 218.1987f;
					break;
			}
			break;
		case 62:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1899.7926f, 3705.097f, 31.7522f };
					*uParam3 = 218.1987f;
					break;
				case 1:
					*uParam2 = { 1895.0872f, 3702.256f, 31.8466f };
					*uParam3 = 218.1987f;
					break;
				case 2:
					*uParam2 = { 1898.1145f, 3700.9785f, 31.7997f };
					*uParam3 = 218.1987f;
					break;
				case 3:
					*uParam2 = { 1901.6954f, 3702.2905f, 31.7391f };
					*uParam3 = 218.1987f;
					break;
			}
			break;
		case 63:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 916.1896f, 3642.5642f, 31.6467f };
					*uParam3 = 183.1988f;
					break;
				case 1:
					*uParam2 = { 918.968f, 3642.2605f, 31.6279f };
					*uParam3 = 183.1988f;
					break;
				case 2:
					*uParam2 = { 919.8309f, 3640.4534f, 31.3778f };
					*uParam3 = 183.1988f;
					break;
				case 3:
					*uParam2 = { 917.0494f, 3640.352f, 31.365f };
					*uParam3 = 183.1988f;
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1365.5244f, 3587.1074f, 33.9438f };
					*uParam3 = 217.3988f;
					break;
				case 1:
					*uParam2 = { 1369.2686f, 3590.1165f, 33.8985f };
					*uParam3 = 217.3988f;
					break;
				case 2:
					*uParam2 = { 1370.728f, 3587.269f, 33.9985f };
					*uParam3 = 217.3988f;
					break;
				case 3:
					*uParam2 = { 1368.3104f, 3585.357f, 34.0098f };
					*uParam3 = 217.3988f;
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 422.7554f, 3553.9094f, 32.2386f };
					*uParam3 = 91.9986f;
					break;
				case 1:
					*uParam2 = { 423.19f, 3558.2954f, 32.2386f };
					*uParam3 = 91.9986f;
					break;
				case 2:
					*uParam2 = { 426.0304f, 3556.7034f, 32.2386f };
					*uParam3 = 91.9986f;
					break;
				case 3:
					*uParam2 = { 425.6619f, 3553.3105f, 32.2386f };
					*uParam3 = 91.9986f;
					break;
			}
			break;
		case 66:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2243.9653f, 3477.1235f, 29.3219f };
					*uParam3 = 115.9984f;
					break;
				case 1:
					*uParam2 = { -2245.1677f, 3474.2588f, 29.373f };
					*uParam3 = 115.9984f;
					break;
				case 2:
					*uParam2 = { -2242.9785f, 3472.5774f, 29.358f };
					*uParam3 = 115.9984f;
					break;
				case 3:
					*uParam2 = { -2241.5627f, 3475.5352f, 29.3601f };
					*uParam3 = 115.9984f;
					break;
			}
			break;
		case 67:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1205.3422f, 2701.2014f, 36.9853f };
					*uParam3 = 176.3981f;
					break;
				case 1:
					*uParam2 = { 1208.7668f, 2700.7422f, 36.9993f };
					*uParam3 = 176.3981f;
					break;
				case 2:
					*uParam2 = { 1208.2073f, 2697.6377f, 36.9403f };
					*uParam3 = 176.3981f;
					break;
				case 3:
					*uParam2 = { 1205.3074f, 2697.8628f, 36.9607f };
					*uParam3 = 176.3981f;
					break;
			}
			break;
		case 68:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 989.6898f, 2673.8418f, 38.882f };
					*uParam3 = 5.3977f;
					break;
				case 1:
					*uParam2 = { 986.5496f, 2673.7385f, 38.8256f };
					*uParam3 = 5.3977f;
					break;
				case 2:
					*uParam2 = { 989.5935f, 2676.6897f, 38.7354f };
					*uParam3 = 5.3977f;
					break;
				case 3:
					*uParam2 = { 986.3177f, 2676.584f, 38.7799f };
					*uParam3 = 5.3977f;
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2847.79f, 1478.3876f, 23.5599f };
					*uParam3 = 79.1975f;
					break;
				case 1:
					*uParam2 = { 2850.991f, 1477.3756f, 23.5596f };
					*uParam3 = 79.1975f;
					break;
				case 2:
					*uParam2 = { 2849.3857f, 1474.4191f, 23.5554f };
					*uParam3 = 79.1975f;
					break;
				case 3:
					*uParam2 = { 2846.3313f, 1475.4043f, 23.5554f };
					*uParam3 = 79.1975f;
					break;
			}
			break;
		case 70:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1772.5625f, 3661.9585f, 33.3027f };
					*uParam3 = 28.2f;
					break;
				case 1:
					*uParam2 = { 1769.929f, 3661.9863f, 33.3072f };
					*uParam3 = 28.2f;
					break;
				case 2:
					*uParam2 = { 1773.2869f, 3664.2185f, 33.2887f };
					*uParam3 = 28.2f;
					break;
				case 3:
					*uParam2 = { 1770.4105f, 3664.7598f, 33.2771f };
					*uParam3 = 28.2f;
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -260.2494f, 6259.365f, 30.4328f };
					*uParam3 = 28.2f;
					break;
				case 1:
					*uParam2 = { -260.1661f, 6262.1753f, 30.4094f };
					*uParam3 = 28.2f;
					break;
				case 2:
					*uParam2 = { -257.4483f, 6260.771f, 30.4437f };
					*uParam3 = 28.2f;
					break;
				case 3:
					*uParam2 = { -257.9496f, 6263.7437f, 30.4144f };
					*uParam3 = 28.2f;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1995.2019f, 454.5807f, 101.1281f };
					*uParam3 = 295.9997f;
					break;
				case 1:
					*uParam2 = { -1996.0759f, 459.7257f, 101.5876f };
					*uParam3 = 295.9997f;
					break;
				case 2:
					*uParam2 = { -1992.2562f, 453.1313f, 100.9065f };
					*uParam3 = 295.9997f;
					break;
				case 3:
					*uParam2 = { -1994.0605f, 461.8541f, 101.6874f };
					*uParam3 = 295.9997f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -181.2569f, 300.2538f, 95.7347f };
					*uParam3 = 183.1993f;
					break;
				case 1:
					*uParam2 = { -185.0248f, 300.0963f, 95.7095f };
					*uParam3 = 183.1993f;
					break;
				case 2:
					*uParam2 = { -185.1412f, 296.0942f, 95.0675f };
					*uParam3 = 183.1993f;
					break;
				case 3:
					*uParam2 = { -181.4765f, 296.0129f, 95.0546f };
					*uParam3 = 183.1993f;
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -131.9714f, 201.2229f, 90.2297f };
					*uParam3 = 278.1991f;
					break;
				case 1:
					*uParam2 = { -131.1041f, 205.3411f, 91.1239f };
					*uParam3 = 278.1991f;
					break;
				case 2:
					*uParam2 = { -126.0736f, 205.8745f, 91.2943f };
					*uParam3 = 278.1991f;
					break;
				case 3:
					*uParam2 = { -127.0113f, 201.5501f, 90.3986f };
					*uParam3 = 278.1991f;
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1924.7725f, 189.2633f, 83.2921f };
					*uParam3 = 316.1989f;
					break;
				case 1:
					*uParam2 = { -1926.637f, 192.3639f, 83.439f };
					*uParam3 = 316.1989f;
					break;
				case 2:
					*uParam2 = { -1921.8235f, 188.7411f, 83.1094f };
					*uParam3 = 316.1989f;
					break;
				case 3:
					*uParam2 = { -1925.9991f, 195.6414f, 83.4114f };
					*uParam3 = 316.1989f;
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 337.927f, 37.1557f, 88.5231f };
					*uParam3 = 66.3987f;
					break;
				case 1:
					*uParam2 = { 336.1073f, 40.1279f, 88.9758f };
					*uParam3 = 66.3987f;
					break;
				case 2:
					*uParam2 = { 340.281f, 40.3901f, 89.3334f };
					*uParam3 = 66.3987f;
					break;
				case 3:
					*uParam2 = { 338.4041f, 43.504f, 89.7926f };
					*uParam3 = 66.3987f;
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 177.2463f, -152.6417f, 55.33f };
					*uParam3 = 73.5986f;
					break;
				case 1:
					*uParam2 = { 179.4564f, -148.1428f, 56.0887f };
					*uParam3 = 73.5986f;
					break;
				case 2:
					*uParam2 = { 176.2766f, -146.976f, 56.0387f };
					*uParam3 = 73.5986f;
					break;
				case 3:
					*uParam2 = { 173.7142f, -150.4158f, 55.4614f };
					*uParam3 = 73.5986f;
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1511.9407f, -202.7063f, 51.8724f };
					*uParam3 = 129.7984f;
					break;
				case 1:
					*uParam2 = { -1515.358f, -200.2663f, 52.4878f };
					*uParam3 = 129.7984f;
					break;
				case 2:
					*uParam2 = { -1515.4022f, -204.5276f, 52.3675f };
					*uParam3 = 129.7984f;
					break;
				case 3:
					*uParam2 = { -1519.0421f, -201.9936f, 52.7673f };
					*uParam3 = 129.7984f;
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 935.5638f, -254.403f, 66.8777f };
					*uParam3 = 149.7981f;
					break;
				case 1:
					*uParam2 = { 938.3046f, -256.5606f, 66.664f };
					*uParam3 = 149.7981f;
					break;
				case 2:
					*uParam2 = { 933.1868f, -257.1711f, 66.8951f };
					*uParam3 = 149.7981f;
					break;
				case 3:
					*uParam2 = { 936.9108f, -259.2471f, 66.6384f };
					*uParam3 = 149.7981f;
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -543.1403f, -36.2037f, 42.2845f };
					*uParam3 = 71.9978f;
					break;
				case 1:
					*uParam2 = { -543.9888f, -40.2859f, 41.9586f };
					*uParam3 = 71.9978f;
					break;
				case 2:
					*uParam2 = { -546.8793f, -35.5579f, 42.1723f };
					*uParam3 = 71.9978f;
					break;
				case 3:
					*uParam2 = { -547.8883f, -39.473f, 41.8568f };
					*uParam3 = 71.9978f;
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1293.3419f, -403.8072f, 35.0446f };
					*uParam3 = 308.3975f;
					break;
				case 1:
					*uParam2 = { -1294.1025f, -400.1062f, 35.1418f };
					*uParam3 = 308.3975f;
					break;
				case 2:
					*uParam2 = { -1290.1134f, -402.1434f, 34.9497f };
					*uParam3 = 308.3975f;
					break;
				case 3:
					*uParam2 = { -1290.778f, -398.376f, 35.141f };
					*uParam3 = 308.3975f;
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 909.5392f, -491.257f, 58.0202f };
					*uParam3 = 205.3971f;
					break;
				case 1:
					*uParam2 = { 908.9469f, -494.6134f, 57.549f };
					*uParam3 = 205.3971f;
					break;
				case 2:
					*uParam2 = { 911.397f, -496.5866f, 57.6449f };
					*uParam3 = 205.3971f;
					break;
				case 3:
					*uParam2 = { 914.688f, -494.9266f, 57.8814f };
					*uParam3 = 205.3971f;
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1250.4475f, -579.7961f, 68.1448f };
					*uParam3 = 287.7967f;
					break;
				case 1:
					*uParam2 = { 1250.1046f, -576.4091f, 68.1629f };
					*uParam3 = 287.7967f;
					break;
				case 2:
					*uParam2 = { 1253.3912f, -581.5173f, 68.0956f };
					*uParam3 = 287.7967f;
					break;
				case 3:
					*uParam2 = { 1252.6133f, -574.8839f, 68.042f };
					*uParam3 = 287.7967f;
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1267.522f, -611.5441f, 26.0968f };
					*uParam3 = 267.7996f;
					break;
				case 1:
					*uParam2 = { -1264.9601f, -609.5386f, 26.1319f };
					*uParam3 = 267.7996f;
					break;
				case 2:
					*uParam2 = { -1264.8472f, -612.9615f, 26.1041f };
					*uParam3 = 267.7996f;
					break;
				case 3:
					*uParam2 = { -1262.2869f, -610.7207f, 26.143f };
					*uParam3 = 267.7996f;
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 324.1917f, -692.1303f, 28.3166f };
					*uParam3 = 244.7994f;
					break;
				case 1:
					*uParam2 = { 326.5067f, -689.1725f, 28.3205f };
					*uParam3 = 244.7994f;
					break;
				case 2:
					*uParam2 = { 328.4621f, -691.6176f, 28.3159f };
					*uParam3 = 244.7994f;
					break;
				case 3:
					*uParam2 = { 326.8571f, -694.4362f, 28.3135f };
					*uParam3 = 244.7994f;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 925.1204f, -628.9852f, 56.8682f };
					*uParam3 = 329.9988f;
					break;
				case 1:
					*uParam2 = { 928.2182f, -631.186f, 56.8647f };
					*uParam3 = 329.9988f;
					break;
				case 2:
					*uParam2 = { 927.7733f, -626.02f, 56.762f };
					*uParam3 = 329.9988f;
					break;
				case 3:
					*uParam2 = { 931.4572f, -625.9988f, 56.6196f };
					*uParam3 = 329.9988f;
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1368.1387f, -787.0344f, 18.3512f };
					*uParam3 = 149.7982f;
					break;
				case 1:
					*uParam2 = { -1366.6638f, -790.6207f, 18.3394f };
					*uParam3 = 149.7982f;
					break;
				case 2:
					*uParam2 = { -1370.6704f, -789.7843f, 18.328f };
					*uParam3 = 149.7982f;
					break;
				case 3:
					*uParam2 = { -1368.2505f, -792.6863f, 18.325f };
					*uParam3 = 149.7982f;
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -617.7515f, -774.4829f, 24.3407f };
					*uParam3 = 6.9977f;
					break;
				case 1:
					*uParam2 = { -614.6607f, -774.0724f, 24.3209f };
					*uParam3 = 6.9977f;
					break;
				case 2:
					*uParam2 = { -618.2723f, -771.166f, 24.4534f };
					*uParam3 = 6.9977f;
					break;
				case 3:
					*uParam2 = { -615.1741f, -770.1447f, 24.4229f };
					*uParam3 = 6.9977f;
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1376.0793f, -894.8463f, 12.3229f };
					*uParam3 = 48.9976f;
					break;
				case 1:
					*uParam2 = { -1377.366f, -898.5443f, 12.0424f };
					*uParam3 = 48.9976f;
					break;
				case 2:
					*uParam2 = { -1378.6206f, -894.2716f, 12.2401f };
					*uParam3 = 48.9976f;
					break;
				case 3:
					*uParam2 = { -1379.5294f, -897.3811f, 11.9825f };
					*uParam3 = 48.9976f;
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1447.0873f, -878.5676f, 9.7464f };
					*uParam3 = 159.9973f;
					break;
				case 1:
					*uParam2 = { -1444.066f, -880.5381f, 9.7828f };
					*uParam3 = 159.9973f;
					break;
				case 2:
					*uParam2 = { -1448.5057f, -881.1882f, 9.7595f };
					*uParam3 = 159.9973f;
					break;
				case 3:
					*uParam2 = { -1445.4635f, -883.2283f, 9.8216f };
					*uParam3 = 159.9973f;
					break;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 447.8857f, -943.3335f, 27.6278f };
					*uParam3 = 170.9972f;
					break;
				case 1:
					*uParam2 = { 450.8445f, -944.4548f, 27.5244f };
					*uParam3 = 170.9972f;
					break;
				case 2:
					*uParam2 = { 450.3604f, -946.5624f, 27.5522f };
					*uParam3 = 170.9972f;
					break;
				case 3:
					*uParam2 = { 446.3271f, -946.031f, 27.7024f };
					*uParam3 = 170.9972f;
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1142.0441f, -975.2816f, 45.5088f };
					*uParam3 = 269.597f;
					break;
				case 1:
					*uParam2 = { 1142.0645f, -971.8673f, 45.7278f };
					*uParam3 = 269.597f;
					break;
				case 2:
					*uParam2 = { 1145.68f, -972.4183f, 45.6699f };
					*uParam3 = 269.597f;
					break;
				case 3:
					*uParam2 = { 1145.584f, -975.7992f, 45.4613f };
					*uParam3 = 269.597f;
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1335.3749f, -1023.2935f, 6.7139f };
					*uParam3 = 54.3967f;
					break;
				case 1:
					*uParam2 = { -1335.2377f, -1019.6651f, 6.7484f };
					*uParam3 = 54.3967f;
					break;
				case 2:
					*uParam2 = { -1337.5175f, -1020.8102f, 6.7944f };
					*uParam3 = 54.3967f;
					break;
				case 3:
					*uParam2 = { -1337.4792f, -1018.49f, 6.8198f };
					*uParam3 = 54.3967f;
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -593.9991f, -1083.1636f, 21.3297f };
					*uParam3 = 266.1964f;
					break;
				case 1:
					*uParam2 = { -590.8708f, -1086.1857f, 21.3297f };
					*uParam3 = 266.1964f;
					break;
				case 2:
					*uParam2 = { -589.8027f, -1082.1525f, 21.3297f };
					*uParam3 = 266.1964f;
					break;
				case 3:
					*uParam2 = { -586.3967f, -1086.4921f, 21.3297f };
					*uParam3 = 266.1964f;
					break;
			}
			break;
		case 35:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1248.7383f, -1221.0515f, 5.8872f };
					*uParam3 = 131.9997f;
					break;
				case 1:
					*uParam2 = { -1252.4053f, -1221.7817f, 5.7938f };
					*uParam3 = 131.9997f;
					break;
				case 2:
					*uParam2 = { -1250.2954f, -1224.0452f, 5.7095f };
					*uParam3 = 131.9997f;
					break;
				case 3:
					*uParam2 = { -1254.0385f, -1224.2892f, 5.2533f };
					*uParam3 = 131.9997f;
					break;
			}
			break;
		case 36:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1109.8026f, -1516.1025f, 3.4447f };
					*uParam3 = 123.9995f;
					break;
				case 1:
					*uParam2 = { -1111.5428f, -1513.0828f, 3.4509f };
					*uParam3 = 123.9995f;
					break;
				case 2:
					*uParam2 = { -1114.6108f, -1515.096f, 3.4018f };
					*uParam3 = 123.9995f;
					break;
				case 3:
					*uParam2 = { -1112.779f, -1518.409f, 3.3962f };
					*uParam3 = 123.9995f;
					break;
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1309.1708f, -1648.9971f, 50.7958f };
					*uParam3 = 33.7993f;
					break;
				case 1:
					*uParam2 = { 1311.2843f, -1646.2f, 50.9453f };
					*uParam3 = 33.7993f;
					break;
				case 2:
					*uParam2 = { 1307.3323f, -1647.0403f, 50.7247f };
					*uParam3 = 33.7993f;
					break;
				case 3:
					*uParam2 = { 1309.3942f, -1644.3422f, 50.9163f };
					*uParam3 = 33.7993f;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 254.452f, -1715.0374f, 28.2051f };
					*uParam3 = 75.7992f;
					break;
				case 1:
					*uParam2 = { 256.655f, -1712.4402f, 28.2124f };
					*uParam3 = 75.7992f;
					break;
				case 2:
					*uParam2 = { 254.1898f, -1711.3239f, 28.0655f };
					*uParam3 = 75.7992f;
					break;
				case 3:
					*uParam2 = { 251.4979f, -1714.2472f, 28.1155f };
					*uParam3 = 75.7992f;
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 949.2336f, -2009.6714f, 29.1833f };
					*uParam3 = 83.9991f;
					break;
				case 1:
					*uParam2 = { 948.9877f, -2003.7523f, 29.1404f };
					*uParam3 = 83.9991f;
					break;
				case 2:
					*uParam2 = { 949.9338f, -1997.6852f, 29.1538f };
					*uParam3 = 83.9991f;
					break;
				case 3:
					*uParam2 = { 951.1229f, -1991.9243f, 29.1799f };
					*uParam3 = 83.9991f;
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1009.0292f, -2368.5796f, 29.5195f };
					*uParam3 = 261.3984f;
					break;
				case 1:
					*uParam2 = { 1009.2556f, -2365.2183f, 29.5096f };
					*uParam3 = 261.3984f;
					break;
				case 2:
					*uParam2 = { 1012.6377f, -2365.4888f, 29.5096f };
					*uParam3 = 261.3984f;
					break;
				case 3:
					*uParam2 = { 1012.5215f, -2368.474f, 29.5177f };
					*uParam3 = 261.3984f;
					break;
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -703.853f, -2461.9846f, 12.8285f };
					*uParam3 = 70.5981f;
					break;
				case 1:
					*uParam2 = { -706.1159f, -2463.7012f, 12.8285f };
					*uParam3 = 70.5981f;
					break;
				case 2:
					*uParam2 = { -706.3795f, -2460.6003f, 12.8271f };
					*uParam3 = 70.5981f;
					break;
				case 3:
					*uParam2 = { -709.3088f, -2461.967f, 12.8285f };
					*uParam3 = 70.5981f;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 72:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -239.8092f, 2059.9397f, 138.3452f };
					*uParam3 = 24.3911f;
					break;
				case 1:
					*uParam2 = { -242.0186f, 2059.1018f, 138.3981f };
					*uParam3 = 22.3911f;
					break;
				case 2:
					*uParam2 = { -244.5391f, 2058.739f, 138.3553f };
					*uParam3 = 22.3911f;
					break;
				case 3:
					*uParam2 = { -246.788f, 2058.1184f, 138.3157f };
					*uParam3 = 17.391f;
					break;
				case 4:
					*uParam2 = { -248.0152f, 2069.2358f, 138.5611f };
					*uParam3 = 213.3909f;
					break;
				case 5:
					*uParam2 = { -250.2329f, 2068.559f, 138.5097f };
					*uParam3 = 209.1909f;
					break;
				case 6:
					*uParam2 = { -252.9919f, 2067.777f, 138.5097f };
					*uParam3 = 209.1909f;
					break;
				case 7:
					*uParam2 = { -255.484f, 2067.4187f, 138.51f };
					*uParam3 = 209.1909f;
					break;
			}
			break;
		case 73:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2765.7502f, 2831.3706f, 35.2633f };
					*uParam3 = 34.3907f;
					break;
				case 1:
					*uParam2 = { 2763.8525f, 2830.5208f, 35.2886f };
					*uParam3 = 34.3907f;
					break;
				case 2:
					*uParam2 = { 2762.1494f, 2829.33f, 35.2987f };
					*uParam3 = 33.1907f;
					break;
				case 3:
					*uParam2 = { 2760.4075f, 2828.3096f, 35.3181f };
					*uParam3 = 33.1907f;
					break;
				case 4:
					*uParam2 = { 2765.0308f, 2834.0103f, 35.289f };
					*uParam3 = 41.7906f;
					break;
				case 5:
					*uParam2 = { 2762.9463f, 2833.1233f, 35.3258f };
					*uParam3 = 25.5906f;
					break;
				case 6:
					*uParam2 = { 2761.2f, 2831.8035f, 35.3523f };
					*uParam3 = 25.5906f;
					break;
				case 7:
					*uParam2 = { 2759.3525f, 2830.7092f, 35.3803f };
					*uParam3 = 25.5906f;
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2994.6135f, 3480.1956f, 70.3818f };
					*uParam3 = 268.7986f;
					break;
				case 1:
					*uParam2 = { 2994.047f, 3484.897f, 70.3817f };
					*uParam3 = 261.9996f;
					break;
				case 2:
					*uParam2 = { 2992.857f, 3482.592f, 70.3817f };
					*uParam3 = 268.1986f;
					break;
				case 3:
					*uParam2 = { 2993.275f, 3477.7866f, 70.3818f };
					*uParam3 = 268.1986f;
					break;
				case 4:
					*uParam2 = { 2987.5771f, 3488.0452f, 70.3819f };
					*uParam3 = 344.7994f;
					break;
				case 5:
					*uParam2 = { 2985.956f, 3490.201f, 70.3819f };
					*uParam3 = 344.7994f;
					break;
				case 6:
					*uParam2 = { 2983.583f, 3488.4573f, 70.3819f };
					*uParam3 = 344.7994f;
					break;
				case 7:
					*uParam2 = { 2981.73f, 3491.1f, 70.3819f };
					*uParam3 = 344.7994f;
					break;
			}
			break;
		case 75:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2655.624f, 3463.4727f, 13.5531f };
					*uParam3 = 365.3982f;
					break;
				case 1:
					*uParam2 = { -2658.777f, 3464.2903f, 13.4602f };
					*uParam3 = 365.3982f;
					break;
				case 2:
					*uParam2 = { -2652.9893f, 3466.0242f, 13.5323f };
					*uParam3 = 358.198f;
					break;
				case 3:
					*uParam2 = { -2657.1042f, 3467.169f, 13.3498f };
					*uParam3 = 353.1978f;
					break;
				case 4:
					*uParam2 = { -2673.9207f, 3463.2053f, 13.2321f };
					*uParam3 = 353.1978f;
					break;
				case 5:
					*uParam2 = { -2678.099f, 3463.3445f, 13.1388f };
					*uParam3 = 360.3977f;
					break;
				case 6:
					*uParam2 = { -2676.095f, 3466.0803f, 13.0674f };
					*uParam3 = 360.3977f;
					break;
				case 7:
					*uParam2 = { -2680.7227f, 3465.9805f, 12.8825f };
					*uParam3 = 360.3977f;
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1490.3108f, 3567.185f, 34.1604f };
					*uParam3 = 112.1975f;
					break;
				case 1:
					*uParam2 = { 1490.6128f, 3564.6824f, 34.2336f };
					*uParam3 = 112.1975f;
					break;
				case 2:
					*uParam2 = { 1492.5616f, 3563.046f, 34.2289f };
					*uParam3 = 112.1975f;
					break;
				case 3:
					*uParam2 = { 1493.1681f, 3560.3757f, 34.2993f };
					*uParam3 = 112.1975f;
					break;
				case 4:
					*uParam2 = { 1485.1941f, 3591.4915f, 34.3504f };
					*uParam3 = 104.9974f;
					break;
				case 5:
					*uParam2 = { 1483.3914f, 3593.5486f, 34.3593f };
					*uParam3 = 104.9974f;
					break;
				case 6:
					*uParam2 = { 1482.6871f, 3595.9612f, 34.2956f };
					*uParam3 = 104.9974f;
					break;
				case 7:
					*uParam2 = { 1480.6106f, 3597.6843f, 34.264f };
					*uParam3 = 1123.1973f;
					break;
			}
			break;
		case 77:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2369.599f, 4292.985f, 8.659f };
					*uParam3 = 47.5971f;
					break;
				case 1:
					*uParam2 = { -2368.342f, 4295.4033f, 8.4331f };
					*uParam3 = 47.5971f;
					break;
				case 2:
					*uParam2 = { -2366.9187f, 4297.2656f, 8.4466f };
					*uParam3 = 47.5971f;
					break;
				case 3:
					*uParam2 = { -2365.946f, 4299.854f, 8.2329f };
					*uParam3 = 47.5971f;
					break;
				case 4:
					*uParam2 = { -2368.5034f, 4301.854f, 7.7919f };
					*uParam3 = 47.5971f;
					break;
				case 5:
					*uParam2 = { -2370.2493f, 4299.339f, 7.9781f };
					*uParam3 = 47.5971f;
					break;
				case 6:
					*uParam2 = { -2371.429f, 4297.0684f, 8.1561f };
					*uParam3 = 60.5971f;
					break;
				case 7:
					*uParam2 = { -2372.746f, 4294.683f, 8.3161f };
					*uParam3 = 60.5971f;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2494.2007f, 4299.6646f, 38.1688f };
					*uParam3 = 352.5968f;
					break;
				case 1:
					*uParam2 = { 2491.9946f, 4300.403f, 38.0832f };
					*uParam3 = 346.9966f;
					break;
				case 2:
					*uParam2 = { 2489.8699f, 4300.904f, 38.0059f };
					*uParam3 = 340.9963f;
					break;
				case 3:
					*uParam2 = { 2487.4395f, 4301.527f, 37.9177f };
					*uParam3 = 343.9958f;
					break;
				case 4:
					*uParam2 = { 2506.8625f, 4286.6187f, 38.1724f };
					*uParam3 = 343.9958f;
					break;
				case 5:
					*uParam2 = { 2509.075f, 4286.29f, 38.1921f };
					*uParam3 = 343.9958f;
					break;
				case 6:
					*uParam2 = { 2511.092f, 4286.273f, 38.2012f };
					*uParam3 = 343.9958f;
					break;
				case 7:
					*uParam2 = { 2513.5771f, 4285.507f, 38.2107f };
					*uParam3 = 343.9958f;
					break;
			}
			break;
		case 79:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1841.1995f, 4414.8f, 48.4769f };
					*uParam3 = 155.5953f;
					break;
				case 1:
					*uParam2 = { -1839.0634f, 4412.809f, 48.7605f };
					*uParam3 = 143.7951f;
					break;
				case 2:
					*uParam2 = { -1841.497f, 4411.3394f, 49.0692f };
					*uParam3 = 143.7951f;
					break;
				case 3:
					*uParam2 = { -1838.9121f, 4408.994f, 49.1208f };
					*uParam3 = 134.595f;
					break;
				case 4:
					*uParam2 = { -1849.3041f, 4402.768f, 49.1779f };
					*uParam3 = 334.5943f;
					break;
				case 5:
					*uParam2 = { -1851.4114f, 4404.1157f, 49.0271f };
					*uParam3 = 334.5943f;
					break;
				case 6:
					*uParam2 = { -1853.5602f, 4405.4375f, 48.9189f };
					*uParam3 = 334.5943f;
					break;
				case 7:
					*uParam2 = { -1855.9065f, 4406.731f, 48.7319f };
					*uParam3 = 336.5942f;
					break;
			}
			break;
		case 80:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1568.3062f, 4509.5566f, 19.4424f };
					*uParam3 = 272.9926f;
					break;
				case 1:
					*uParam2 = { -1568.3857f, 4507.06f, 19.8718f };
					*uParam3 = 272.9926f;
					break;
				case 2:
					*uParam2 = { -1567.4714f, 4504.581f, 20.0082f };
					*uParam3 = 272.9926f;
					break;
				case 3:
					*uParam2 = { -1566.8716f, 4501.9487f, 20.1819f };
					*uParam3 = 272.9926f;
					break;
				case 4:
					*uParam2 = { -1571.8341f, 4508.3633f, 19.6603f };
					*uParam3 = 271.3924f;
					break;
				case 5:
					*uParam2 = { -1568.5364f, 4513.24f, 18.973f };
					*uParam3 = 271.3924f;
					break;
				case 6:
					*uParam2 = { -1572.39f, 4494.738f, 20.8722f };
					*uParam3 = 277.5921f;
					break;
				case 7:
					*uParam2 = { -1572.3982f, 4489.554f, 21.313f };
					*uParam3 = 297.792f;
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -397.5512f, 6383.4624f, 13.192f };
					*uParam3 = 20.3916f;
					break;
				case 1:
					*uParam2 = { -399.9127f, 6382.1235f, 13.115f };
					*uParam3 = 20.3916f;
					break;
				case 2:
					*uParam2 = { -402.4652f, 6381.025f, 12.9592f };
					*uParam3 = 20.3916f;
					break;
				case 3:
					*uParam2 = { -405.1915f, 6379.708f, 12.947f };
					*uParam3 = 20.3916f;
					break;
				case 4:
					*uParam2 = { -376.302f, 6388.5366f, 13.1121f };
					*uParam3 = 20.3916f;
					break;
				case 5:
					*uParam2 = { -375.8965f, 6391.956f, 13.0446f };
					*uParam3 = 20.3916f;
					break;
				case 6:
					*uParam2 = { -379.3679f, 6390.1455f, 13.0727f };
					*uParam3 = 20.3916f;
					break;
				case 7:
					*uParam2 = { -379.9874f, 6387.0864f, 13.1564f };
					*uParam3 = 20.3916f;
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1197.3662f, -3243.5964f, 4.8361f };
					*uParam3 = 3.7994f;
					break;
				case 1:
					*uParam2 = { 1201.1088f, -3243.1396f, 4.8596f };
					*uParam3 = 3.7994f;
					break;
				case 2:
					*uParam2 = { 1201.0468f, -3238.5645f, 5.0288f };
					*uParam3 = 3.7994f;
					break;
				case 3:
					*uParam2 = { 1197.5703f, -3238.7986f, 5.0288f };
					*uParam3 = 358.3994f;
					break;
				case 4:
					*uParam2 = { 1186.348f, -3250.2014f, 5.0288f };
					*uParam3 = 69.7996f;
					break;
				case 5:
					*uParam2 = { 1186.3184f, -3252.8633f, 5.0288f };
					*uParam3 = 72.7996f;
					break;
				case 6:
					*uParam2 = { 1185.8265f, -3255.9255f, 5.0288f };
					*uParam3 = 74.7995f;
					break;
				case 7:
					*uParam2 = { 1204.3333f, -3242.7854f, 4.8778f };
					*uParam3 = 358.3994f;
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 233.1918f, -3120.1926f, 4.7902f };
					*uParam3 = 357.1993f;
					break;
				case 1:
					*uParam2 = { 230.3353f, -3120.0562f, 4.7902f };
					*uParam3 = 357.1993f;
					break;
				case 2:
					*uParam2 = { 227.4524f, -3120.1345f, 4.7902f };
					*uParam3 = 357.1993f;
					break;
				case 3:
					*uParam2 = { 224.2509f, -3120.07f, 4.7902f };
					*uParam3 = 357.1993f;
					break;
				case 4:
					*uParam2 = { 233.1299f, -3116.751f, 4.7903f };
					*uParam3 = 357.1993f;
					break;
				case 5:
					*uParam2 = { 230.1146f, -3116.7417f, 4.7903f };
					*uParam3 = 357.1993f;
					break;
				case 6:
					*uParam2 = { 227.3014f, -3117.0527f, 4.7903f };
					*uParam3 = 357.1993f;
					break;
				case 7:
					*uParam2 = { 223.9951f, -3117.2344f, 4.7903f };
					*uParam3 = 357.1993f;
					break;
			}
			break;
		case 84:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 308.859f, -2873.0002f, 5.0083f };
					*uParam3 = 83.7991f;
					break;
				case 1:
					*uParam2 = { 308.8752f, -2876.1394f, 5.0056f };
					*uParam3 = 84.9991f;
					break;
				case 2:
					*uParam2 = { 294.475f, -2882.2217f, 5.002f };
					*uParam3 = 271.7987f;
					break;
				case 3:
					*uParam2 = { 294.6525f, -2880.04f, 5.0043f };
					*uParam3 = 263.3985f;
					break;
				case 4:
					*uParam2 = { 309.7551f, -2889.195f, 4.9982f };
					*uParam3 = 91.598f;
					break;
				case 5:
					*uParam2 = { 309.556f, -2891.8486f, 4.9981f };
					*uParam3 = 91.598f;
					break;
				case 6:
					*uParam2 = { 309.5738f, -2894.1792f, 4.999f };
					*uParam3 = 87.598f;
					break;
				case 7:
					*uParam2 = { 295.781f, -2875.5862f, 5.0084f };
					*uParam3 = 269.7974f;
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1636.8746f, -2354.2878f, 93.7334f };
					*uParam3 = 296.7984f;
					break;
				case 1:
					*uParam2 = { 1636.1016f, -2352.3372f, 93.6793f };
					*uParam3 = 288.9982f;
					break;
				case 2:
					*uParam2 = { 1635.5677f, -2350.3184f, 93.6766f };
					*uParam3 = 290.1982f;
					break;
				case 3:
					*uParam2 = { 1637.6235f, -2356.4426f, 93.7008f };
					*uParam3 = 285.198f;
					break;
				case 4:
					*uParam2 = { 1641.514f, -2362.4448f, 93.5406f };
					*uParam3 = 24.3979f;
					break;
				case 5:
					*uParam2 = { 1643.3954f, -2361.406f, 93.688f };
					*uParam3 = 24.3979f;
					break;
				case 6:
					*uParam2 = { 1645.4235f, -2360.4038f, 93.8702f };
					*uParam3 = 24.3979f;
					break;
				case 7:
					*uParam2 = { 1647.3636f, -2359.2268f, 94.0564f };
					*uParam3 = 24.3979f;
					break;
			}
			break;
		case 86:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 862.734f, -2433.214f, 27.151f };
					*uParam3 = 171.1971f;
					break;
				case 1:
					*uParam2 = { 865.0858f, -2433.563f, 27.1738f };
					*uParam3 = 171.1971f;
					break;
				case 2:
					*uParam2 = { 867.4045f, -2433.8057f, 27.1962f };
					*uParam3 = 171.1971f;
					break;
				case 3:
					*uParam2 = { 869.924f, -2434.1653f, 27.2064f };
					*uParam3 = 164.197f;
					break;
				case 4:
					*uParam2 = { 841.7037f, -2431.1838f, 26.792f };
					*uParam3 = 170.9968f;
					break;
				case 5:
					*uParam2 = { 844.381f, -2431.4016f, 26.9363f };
					*uParam3 = 168.9968f;
					break;
				case 6:
					*uParam2 = { 832.0388f, -2441.9163f, 25.1012f };
					*uParam3 = 173.1967f;
					break;
				case 7:
					*uParam2 = { 834.7183f, -2442.5454f, 25.3971f };
					*uParam3 = 173.1967f;
					break;
			}
			break;
		case 87:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1217.9016f, -2381.5642f, 12.9451f };
					*uParam3 = 236.5964f;
					break;
				case 1:
					*uParam2 = { -1218.8424f, -2383.4778f, 12.9452f };
					*uParam3 = 236.7963f;
					break;
				case 2:
					*uParam2 = { -1216.5819f, -2379.5093f, 12.9451f };
					*uParam3 = 238.7964f;
					break;
				case 3:
					*uParam2 = { -1215.3207f, -2377.5054f, 12.9451f };
					*uParam3 = 236.7963f;
					break;
				case 4:
					*uParam2 = { -1224.3518f, -2390.1724f, 12.9452f };
					*uParam3 = 239.7963f;
					break;
				case 5:
					*uParam2 = { -1222.8337f, -2388.1614f, 12.9451f };
					*uParam3 = 236.5963f;
					break;
				case 6:
					*uParam2 = { -1235.8232f, -2407.5283f, 12.9452f };
					*uParam3 = 244.1963f;
					break;
				case 7:
					*uParam2 = { -1234.4468f, -2405.34f, 12.9452f };
					*uParam3 = 244.1963f;
					break;
			}
			break;
		case 88:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 915.7257f, -1741.721f, 29.6908f };
					*uParam3 = 158.3962f;
					break;
				case 1:
					*uParam2 = { 919.4307f, -1743.1262f, 29.7956f };
					*uParam3 = 162.5961f;
					break;
				case 2:
					*uParam2 = { 920.572f, -1746.4564f, 29.8444f };
					*uParam3 = 158.596f;
					break;
				case 3:
					*uParam2 = { 916.5859f, -1745.0791f, 29.7417f };
					*uParam3 = 158.596f;
					break;
				case 4:
					*uParam2 = { 894.6024f, -1735.2214f, 29.3399f };
					*uParam3 = 181.5958f;
					break;
				case 5:
					*uParam2 = { 897.0215f, -1735.4695f, 29.3698f };
					*uParam3 = 175.3958f;
					break;
				case 6:
					*uParam2 = { 915.4925f, -1738.0023f, 29.6544f };
					*uParam3 = 152.3955f;
					break;
				case 7:
					*uParam2 = { 918.0347f, -1739.436f, 29.6996f };
					*uParam3 = 163.3954f;
					break;
			}
			break;
		case 89:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1710.7242f, -1560.2673f, 111.6274f };
					*uParam3 = 161.9952f;
					break;
				case 1:
					*uParam2 = { 1712.8064f, -1560.2811f, 111.6311f };
					*uParam3 = 159.1948f;
					break;
				case 2:
					*uParam2 = { 1714.4633f, -1561.6298f, 111.6321f };
					*uParam3 = 159.1948f;
					break;
				case 3:
					*uParam2 = { 1716.4321f, -1561.4622f, 111.6359f };
					*uParam3 = 159.1948f;
					break;
				case 4:
					*uParam2 = { 1725.3038f, -1556.6415f, 111.6554f };
					*uParam3 = 249.7944f;
					break;
				case 5:
					*uParam2 = { 1726.9696f, -1555.272f, 111.6582f };
					*uParam3 = 249.7944f;
					break;
				case 6:
					*uParam2 = { 1726.7292f, -1553.2471f, 111.6608f };
					*uParam3 = 245.7943f;
					break;
				case 7:
					*uParam2 = { 1725.9482f, -1558.7065f, 111.6529f };
					*uParam3 = 245.7943f;
					break;
			}
			break;
		case 90:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 500.2138f, -1406.6166f, 28.2998f };
					*uParam3 = 91.5941f;
					break;
				case 1:
					*uParam2 = { 500.0005f, -1409.024f, 28.2968f };
					*uParam3 = 85.994f;
					break;
				case 2:
					*uParam2 = { 482.4195f, -1404.0125f, 28.2756f };
					*uParam3 = 258.1935f;
					break;
				case 3:
					*uParam2 = { 482.9327f, -1401.5416f, 28.289f };
					*uParam3 = 258.1935f;
					break;
				case 4:
					*uParam2 = { 489.1647f, -1385.711f, 28.311f };
					*uParam3 = 176.9934f;
					break;
				case 5:
					*uParam2 = { 491.3342f, -1388.2578f, 28.372f };
					*uParam3 = 173.9933f;
					break;
				case 6:
					*uParam2 = { 489.0717f, -1390.1459f, 28.3097f };
					*uParam3 = 173.9933f;
					break;
				case 7:
					*uParam2 = { 491.2379f, -1392.7699f, 28.3589f };
					*uParam3 = 173.9933f;
					break;
			}
			break;
		case 91:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -149.942f, -1360.1604f, 28.6196f };
					*uParam3 = 297.1925f;
					break;
				case 1:
					*uParam2 = { -150.7215f, -1358.2743f, 28.7026f };
					*uParam3 = 283.9924f;
					break;
				case 2:
					*uParam2 = { -150.8821f, -1356.1034f, 28.7524f };
					*uParam3 = 268.3923f;
					break;
				case 3:
					*uParam2 = { -150.8625f, -1353.7942f, 28.7727f };
					*uParam3 = 268.3923f;
					break;
				case 4:
					*uParam2 = { -133.3586f, -1345.4371f, 28.6417f };
					*uParam3 = 142.792f;
					break;
				case 5:
					*uParam2 = { -131.709f, -1347.0692f, 28.5189f };
					*uParam3 = 135.592f;
					break;
				case 6:
					*uParam2 = { -154.7681f, -1363.0498f, 28.6425f };
					*uParam3 = 299.5917f;
					break;
				case 7:
					*uParam2 = { -155.5251f, -1361.0588f, 28.721f };
					*uParam3 = 281.3916f;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 357:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2863.734f, 3501.029f, 8.3341f };
					*uParam3 = 288.3989f;
					break;
				case 1:
					*uParam2 = { -2863.4944f, 3503.484f, 8f };
					*uParam3 = 289.5989f;
					break;
				case 2:
					*uParam2 = { -2865.7524f, 3504.8853f, 7.917f };
					*uParam3 = 290.7989f;
					break;
				case 3:
					*uParam2 = { -2867.1985f, 3507.7234f, 7.6155f };
					*uParam3 = 306.3987f;
					break;
				case 4:
					*uParam2 = { -2877.568f, 3511.452f, 7.3036f };
					*uParam3 = 341.5979f;
					break;
				case 5:
					*uParam2 = { -2879.7366f, 3513.192f, 7.277f };
					*uParam3 = 348.3977f;
					break;
				case 6:
					*uParam2 = { -2882.475f, 3513.8784f, 7.2993f };
					*uParam3 = 353.9977f;
					break;
				case 7:
					*uParam2 = { -2885.0586f, 3513.4653f, 7.3914f };
					*uParam3 = 344.9973f;
					break;
			}
			break;
		case 358:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1857.4663f, 1824.9127f, 63.804f };
					*uParam3 = 313.9965f;
					break;
				case 1:
					*uParam2 = { 1857.1476f, 1828.3701f, 63.7479f };
					*uParam3 = 313.9965f;
					break;
				case 2:
					*uParam2 = { 1855.1067f, 1830.7969f, 63.9052f };
					*uParam3 = 309.1963f;
					break;
				case 3:
					*uParam2 = { 1852.62f, 1832.1237f, 64.1362f };
					*uParam3 = 307.1963f;
					break;
				case 4:
					*uParam2 = { 1859.6808f, 1804.1836f, 65.1696f };
					*uParam3 = 261.3957f;
					break;
				case 5:
					*uParam2 = { 1861.4379f, 1805.8765f, 64.6999f };
					*uParam3 = 255.7955f;
					break;
				case 6:
					*uParam2 = { 1860.5437f, 1808.5172f, 64.633f };
					*uParam3 = 255.7955f;
					break;
				case 7:
					*uParam2 = { 1861.5178f, 1811.0271f, 64.3307f };
					*uParam3 = 258.7954f;
					break;
			}
			break;
		case 359:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2064.3628f, 4659.6953f, 40.1043f };
					*uParam3 = 43.3951f;
					break;
				case 1:
					*uParam2 = { 2060.9192f, 4658.8003f, 40.0484f };
					*uParam3 = 43.3951f;
					break;
				case 2:
					*uParam2 = { 2060.5352f, 4656.386f, 40.014f };
					*uParam3 = 43.3951f;
					break;
				case 3:
					*uParam2 = { 2064.8647f, 4662.8555f, 40.0804f };
					*uParam3 = 49.795f;
					break;
				case 4:
					*uParam2 = { 2060.2383f, 4641.8413f, 39.8278f };
					*uParam3 = 49.795f;
					break;
				case 5:
					*uParam2 = { 2057.4946f, 4641.1963f, 39.7606f };
					*uParam3 = 49.795f;
					break;
				case 6:
					*uParam2 = { 2056.981f, 4638.5054f, 39.8439f };
					*uParam3 = 49.795f;
					break;
				case 7:
					*uParam2 = { 2054.3494f, 4637.089f, 39.7052f };
					*uParam3 = 47.795f;
					break;
			}
			break;
		case 360:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2783.2063f, 4728.0767f, 44.9791f };
					*uParam3 = 139.5946f;
					break;
				case 1:
					*uParam2 = { 2784.3892f, 4725.3784f, 44.99f };
					*uParam3 = 139.5946f;
					break;
				case 2:
					*uParam2 = { 2786.7334f, 4724.485f, 45.0271f };
					*uParam3 = 139.5946f;
					break;
				case 3:
					*uParam2 = { 2789.2988f, 4723.453f, 45.0699f };
					*uParam3 = 139.5946f;
					break;
				case 4:
					*uParam2 = { 2811.1174f, 4724.4893f, 45.4228f };
					*uParam3 = 154.5944f;
					break;
				case 5:
					*uParam2 = { 2809.513f, 4727.4155f, 45.4013f };
					*uParam3 = 154.5944f;
					break;
				case 6:
					*uParam2 = { 2806.595f, 4727.609f, 45.3709f };
					*uParam3 = 158.5943f;
					break;
				case 7:
					*uParam2 = { 2804.6167f, 4729.6245f, 45.3589f };
					*uParam3 = 158.5943f;
					break;
			}
			break;
		case 361:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2733.0037f, 1708.489f, 23.5816f };
					*uParam3 = 166.9941f;
					break;
				case 1:
					*uParam2 = { 2735.4321f, 1707.5354f, 23.5535f };
					*uParam3 = 169.594f;
					break;
				case 2:
					*uParam2 = { 2737.4937f, 1708.1571f, 23.5722f };
					*uParam3 = 177.5939f;
					break;
				case 3:
					*uParam2 = { 2739.7554f, 1707.4045f, 23.5616f };
					*uParam3 = 177.5939f;
					break;
				case 4:
					*uParam2 = { 2784.5955f, 1708.5583f, 23.5872f };
					*uParam3 = 185.3932f;
					break;
				case 5:
					*uParam2 = { 2786.9836f, 1708.4647f, 23.5816f };
					*uParam3 = 185.3932f;
					break;
				case 6:
					*uParam2 = { 2789.2078f, 1707.7313f, 23.5526f };
					*uParam3 = 184.1932f;
					break;
				case 7:
					*uParam2 = { 2791.3137f, 1708.4169f, 23.5778f };
					*uParam3 = 177.9932f;
					break;
			}
			break;
		case 362:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1530.2471f, 2868.9348f, 30.1862f };
					*uParam3 = 306.7927f;
					break;
				case 1:
					*uParam2 = { -1527.569f, 2867.9792f, 30.2224f };
					*uParam3 = 306.7927f;
					break;
				case 2:
					*uParam2 = { -1526.4832f, 2865.627f, 30.2213f };
					*uParam3 = 306.7927f;
					break;
				case 3:
					*uParam2 = { -1526.3011f, 2863.0066f, 30.2057f };
					*uParam3 = 306.7927f;
					break;
				case 4:
					*uParam2 = { -1538.9948f, 2874.4128f, 30.0755f };
					*uParam3 = 349.7921f;
					break;
				case 5:
					*uParam2 = { -1541.1294f, 2875.6921f, 30.0697f };
					*uParam3 = 353.792f;
					break;
				case 6:
					*uParam2 = { -1543.7698f, 2875.4783f, 30.0821f };
					*uParam3 = 353.792f;
					break;
				case 7:
					*uParam2 = { -1546.2577f, 2875.6296f, 30.0918f };
					*uParam3 = 352.5919f;
					break;
			}
			break;
		case 363:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -3115.3618f, 1293.6069f, 19.5672f };
					*uParam3 = 303.9917f;
					break;
				case 1:
					*uParam2 = { -3115.1877f, 1295.9266f, 19.5531f };
					*uParam3 = 304.5916f;
					break;
				case 2:
					*uParam2 = { -3117.044f, 1297.2444f, 19.6683f };
					*uParam3 = 306.3916f;
					break;
				case 3:
					*uParam2 = { -3114.0115f, 1292.2383f, 19.4718f };
					*uParam3 = 303.1911f;
					break;
				case 4:
					*uParam2 = { -3122.3306f, 1262.824f, 19.6253f };
					*uParam3 = 233.9905f;
					break;
				case 5:
					*uParam2 = { -3120.1545f, 1263.6908f, 19.5731f };
					*uParam3 = 233.9905f;
					break;
				case 6:
					*uParam2 = { -3119.8208f, 1265.7959f, 19.6634f };
					*uParam3 = 236.9905f;
					break;
				case 7:
					*uParam2 = { -3121.7168f, 1258.978f, 19.3942f };
					*uParam3 = 236.9905f;
					break;
			}
			break;
		case 364:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -510.1558f, 6325.3354f, 10.1306f };
					*uParam3 = 236.9905f;
					break;
				case 1:
					*uParam2 = { -507.9496f, 6326.5737f, 10.0822f };
					*uParam3 = 236.9905f;
					break;
				case 2:
					*uParam2 = { -507.4629f, 6328.6562f, 10.0553f };
					*uParam3 = 229.3904f;
					break;
				case 3:
					*uParam2 = { -504.862f, 6329.6655f, 10.0119f };
					*uParam3 = 231.1904f;
					break;
				case 4:
					*uParam2 = { -521.1659f, 6309.395f, 9.8781f };
					*uParam3 = 255.3903f;
					break;
				case 5:
					*uParam2 = { -522.5894f, 6305.4326f, 9.8454f };
					*uParam3 = 260.1901f;
					break;
				case 6:
					*uParam2 = { -523.9474f, 6301.9976f, 9.7077f };
					*uParam3 = 260.1901f;
					break;
				case 7:
					*uParam2 = { -523.6025f, 6298.8145f, 9.4764f };
					*uParam3 = 260.1901f;
					break;
			}
			break;
		case 365:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 811.7854f, 6514.568f, 22.4369f };
					*uParam3 = 179.7994f;
					break;
				case 1:
					*uParam2 = { 813.7658f, 6513.4585f, 22.3588f };
					*uParam3 = 175.5993f;
					break;
				case 2:
					*uParam2 = { 816.1437f, 6514.37f, 22.1967f };
					*uParam3 = 175.5993f;
					break;
				case 3:
					*uParam2 = { 818.6289f, 6513.7656f, 22.1592f };
					*uParam3 = 175.5993f;
					break;
				case 4:
					*uParam2 = { 825.0697f, 6513.9287f, 21.9763f };
					*uParam3 = 176.7993f;
					break;
				case 5:
					*uParam2 = { 827.015f, 6512.7715f, 21.9052f };
					*uParam3 = 176.7993f;
					break;
				case 6:
					*uParam2 = { 829.5932f, 6512.0186f, 21.8051f };
					*uParam3 = 176.7993f;
					break;
				case 7:
					*uParam2 = { 831.7493f, 6512.792f, 21.75f };
					*uParam3 = 176.7993f;
					break;
			}
			break;
		case 366:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 970.1619f, 4414.313f, 46.0788f };
					*uParam3 = 7.1986f;
					break;
				case 1:
					*uParam2 = { 967.8749f, 4416.644f, 46.2423f };
					*uParam3 = 7.1986f;
					break;
				case 2:
					*uParam2 = { 965.9127f, 4415.1006f, 46.3406f };
					*uParam3 = 2.9986f;
					break;
				case 3:
					*uParam2 = { 963.4276f, 4416.736f, 46.466f };
					*uParam3 = 2.9986f;
					break;
				case 4:
					*uParam2 = { 954.2126f, 4420.66f, 46.9861f };
					*uParam3 = 345.1982f;
					break;
				case 5:
					*uParam2 = { 952.0507f, 4420.972f, 47.1055f };
					*uParam3 = 345.1982f;
					break;
				case 6:
					*uParam2 = { 950.0118f, 4422.053f, 47.2178f };
					*uParam3 = 345.1982f;
					break;
				case 7:
					*uParam2 = { 956.4673f, 4418.737f, 46.8541f };
					*uParam3 = 345.1982f;
					break;
			}
			break;
		case 367:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -749.9396f, -2224.8936f, 4.7978f };
					*uParam3 = 0f;
					break;
				case 1:
					*uParam2 = { -751.9151f, -2225.4553f, 4.792f };
					*uParam3 = 353.9999f;
					break;
				case 2:
					*uParam2 = { -754.1807f, -2224.8328f, 4.786f };
					*uParam3 = 360.5998f;
					break;
				case 3:
					*uParam2 = { -756.0544f, -2225.2703f, 4.786f };
					*uParam3 = 359.3997f;
					break;
				case 4:
					*uParam2 = { -758.2713f, -2224.449f, 4.7866f };
					*uParam3 = 1.7997f;
					break;
				case 5:
					*uParam2 = { -760.1992f, -2225.0894f, 4.786f };
					*uParam3 = -0.2003f;
					break;
				case 6:
					*uParam2 = { -762.1611f, -2224.3828f, 4.7871f };
					*uParam3 = -0.2003f;
					break;
				case 7:
					*uParam2 = { -764.049f, -2225.2249f, 4.786f };
					*uParam3 = 2.3995f;
					break;
			}
			break;
		case 368:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -336.9368f, -2572.089f, 5.0202f };
					*uParam3 = 314.5988f;
					break;
				case 1:
					*uParam2 = { -338.4848f, -2570.71f, 5.0082f };
					*uParam3 = 314.5988f;
					break;
				case 2:
					*uParam2 = { -335.4114f, -2573.8262f, 5.0082f };
					*uParam3 = 314.5988f;
					break;
				case 3:
					*uParam2 = { -333.1522f, -2575.2808f, 5.0085f };
					*uParam3 = 314.5988f;
					break;
				case 4:
					*uParam2 = { -333.5012f, -2569.0134f, 5.0066f };
					*uParam3 = 314.5988f;
					break;
				case 5:
					*uParam2 = { -335.4506f, -2567.7212f, 5.006f };
					*uParam3 = 314.5988f;
					break;
				case 6:
					*uParam2 = { -332.6393f, -2571.0269f, 5.006f };
					*uParam3 = 314.5988f;
					break;
				case 7:
					*uParam2 = { -330.3058f, -2572.186f, 5.0069f };
					*uParam3 = 314.5988f;
					break;
			}
			break;
		case 369:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 121.0204f, -2819.9907f, 5.0002f };
					*uParam3 = 256.7982f;
					break;
				case 1:
					*uParam2 = { 121.3664f, -2822.4758f, 5.0423f };
					*uParam3 = 256.7982f;
					break;
				case 2:
					*uParam2 = { 120.3422f, -2824.9692f, 5.0002f };
					*uParam3 = 256.7982f;
					break;
				case 3:
					*uParam2 = { 120.8707f, -2827.747f, 5.0002f };
					*uParam3 = 260.998f;
					break;
				case 4:
					*uParam2 = { 115.2697f, -2831.5994f, 5f };
					*uParam3 = 268.198f;
					break;
				case 5:
					*uParam2 = { 115.8834f, -2834.0308f, 5f };
					*uParam3 = 267.1979f;
					break;
				case 6:
					*uParam2 = { 114.747f, -2836.3184f, 5f };
					*uParam3 = 267.1979f;
					break;
				case 7:
					*uParam2 = { 115.7083f, -2838.4868f, 5f };
					*uParam3 = 274.3979f;
					break;
			}
			break;
		case 370:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1139.81f, -3259.124f, 4.9007f };
					*uParam3 = 4.3975f;
					break;
				case 1:
					*uParam2 = { 1137.6697f, -3257.912f, 4.9007f };
					*uParam3 = 3.1975f;
					break;
				case 2:
					*uParam2 = { 1135.8846f, -3259.2715f, 4.9006f };
					*uParam3 = 358.9976f;
					break;
				case 3:
					*uParam2 = { 1134.0117f, -3257.9355f, 4.9006f };
					*uParam3 = 358.9976f;
					break;
				case 4:
					*uParam2 = { 1151.0505f, -3259.5747f, 4.9008f };
					*uParam3 = 356.5974f;
					break;
				case 5:
					*uParam2 = { 1149.0919f, -3258.1167f, 4.9008f };
					*uParam3 = 356.5974f;
					break;
				case 6:
					*uParam2 = { 1146.9697f, -3259.333f, 4.9008f };
					*uParam3 = 356.5974f;
					break;
				case 7:
					*uParam2 = { 1144.7407f, -3258.227f, 4.9008f };
					*uParam3 = 360.7973f;
					break;
			}
			break;
		case 371:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 791.598f, -2498.9595f, 20.1933f };
					*uParam3 = 88.7968f;
					break;
				case 1:
					*uParam2 = { 792.7791f, -2501.0833f, 20.3249f };
					*uParam3 = 85.7968f;
					break;
				case 2:
					*uParam2 = { 790.732f, -2503.1616f, 20.1484f };
					*uParam3 = 85.7968f;
					break;
				case 3:
					*uParam2 = { 791.963f, -2505.221f, 20.2916f };
					*uParam3 = 80.3968f;
					break;
				case 4:
					*uParam2 = { 817.6115f, -2488.8337f, 22.301f };
					*uParam3 = 4.7967f;
					break;
				case 5:
					*uParam2 = { 815.3525f, -2487.2705f, 22.0523f };
					*uParam3 = 4.7967f;
					break;
				case 6:
					*uParam2 = { 813.1287f, -2488.582f, 21.9835f };
					*uParam3 = 359.3967f;
					break;
				case 7:
					*uParam2 = { 810.8846f, -2487.3738f, 21.7046f };
					*uParam3 = 350.3965f;
					break;
			}
			break;
		case 372:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -49.5821f, -2435.1758f, 5.001f };
					*uParam3 = 332.1958f;
					break;
				case 1:
					*uParam2 = { -51.8241f, -2434.5093f, 5.0009f };
					*uParam3 = 332.1958f;
					break;
				case 2:
					*uParam2 = { -52.9491f, -2432.465f, 5.0006f };
					*uParam3 = 326.5957f;
					break;
				case 3:
					*uParam2 = { -55.2325f, -2431.7637f, 5.0006f };
					*uParam3 = 326.5957f;
					break;
				case 4:
					*uParam2 = { -40.6483f, -2439.1577f, 5.0013f };
					*uParam3 = 300.9953f;
					break;
				case 5:
					*uParam2 = { -41.6158f, -2437.0156f, 5.0011f };
					*uParam3 = 300.9953f;
					break;
				case 6:
					*uParam2 = { -42.6932f, -2434.7224f, 5.0009f };
					*uParam3 = 300.9953f;
					break;
				case 7:
					*uParam2 = { -43.675f, -2432.781f, 5.0008f };
					*uParam3 = 300.9953f;
					break;
			}
			break;
		case 373:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -966.8149f, -3516.1165f, 13.1465f };
					*uParam3 = 322.1951f;
					break;
				case 1:
					*uParam2 = { -968.8292f, -3514.2917f, 13.1465f };
					*uParam3 = 322.1951f;
					break;
				case 2:
					*uParam2 = { -971.1616f, -3512.9656f, 13.1465f };
					*uParam3 = 322.1951f;
					break;
				case 3:
					*uParam2 = { -973.0881f, -3511.655f, 13.1465f };
					*uParam3 = 322.1951f;
					break;
				case 4:
					*uParam2 = { -944.8167f, -3509.5095f, 13.1466f };
					*uParam3 = 330.9948f;
					break;
				case 5:
					*uParam2 = { -946.629f, -3508.0825f, 13.1466f };
					*uParam3 = 325.7946f;
					break;
				case 6:
					*uParam2 = { -948.7563f, -3507.1094f, 13.1466f };
					*uParam3 = 325.7946f;
					break;
				case 7:
					*uParam2 = { -950.7985f, -3505.7195f, 13.1465f };
					*uParam3 = 336.5943f;
					break;
			}
			break;
		case 374:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1463.6593f, -2424.9846f, 65.4594f };
					*uParam3 = 73.1939f;
					break;
				case 1:
					*uParam2 = { 1464.4661f, -2422.6924f, 65.5676f };
					*uParam3 = 73.1939f;
					break;
				case 2:
					*uParam2 = { 1463.177f, -2427.034f, 65.2831f };
					*uParam3 = 73.1939f;
					break;
				case 3:
					*uParam2 = { 1461.9559f, -2429.0205f, 65.1292f };
					*uParam3 = 73.1939f;
					break;
				case 4:
					*uParam2 = { 1461.403f, -2431.5435f, 64.9206f };
					*uParam3 = 73.1939f;
					break;
				case 5:
					*uParam2 = { 1460.799f, -2433.9277f, 64.7493f };
					*uParam3 = 73.1939f;
					break;
				case 6:
					*uParam2 = { 1459.3258f, -2435.9966f, 64.4889f };
					*uParam3 = 73.1939f;
					break;
				case 7:
					*uParam2 = { 1459.2849f, -2438.5547f, 64.2416f };
					*uParam3 = 73.1939f;
					break;
			}
			break;
		case 375:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 803.4257f, -2945.9907f, 5.0207f };
					*uParam3 = 1.3937f;
					break;
				case 1:
					*uParam2 = { 800.5339f, -2946.5286f, 5.0207f };
					*uParam3 = 0.1937f;
					break;
				case 2:
					*uParam2 = { 798.1046f, -2946.1182f, 5.0207f };
					*uParam3 = 0.1937f;
					break;
				case 3:
					*uParam2 = { 795.6312f, -2946.4983f, 5.0207f };
					*uParam3 = 359.5937f;
					break;
				case 4:
					*uParam2 = { 795.5524f, -2932.046f, 4.8538f };
					*uParam3 = 150.7933f;
					break;
				case 5:
					*uParam2 = { 793.9752f, -2928.9956f, 4.8364f };
					*uParam3 = 153.7932f;
					break;
				case 6:
					*uParam2 = { 790.912f, -2927.6042f, 4.8253f };
					*uParam3 = 153.7932f;
					break;
				case 7:
					*uParam2 = { 787.7563f, -2927.4885f, 4.8185f };
					*uParam3 = 153.7932f;
					break;
			}
			break;
		case 376:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1170.9305f, -2903.8428f, 12.9452f };
					*uParam3 = 308.3925f;
					break;
				case 1:
					*uParam2 = { -1171.083f, -2901.0146f, 12.9453f };
					*uParam3 = 308.3925f;
					break;
				case 2:
					*uParam2 = { -1173.0746f, -2899.1501f, 12.9453f };
					*uParam3 = 308.3925f;
					break;
				case 3:
					*uParam2 = { -1174.7642f, -2897.1572f, 12.9453f };
					*uParam3 = 308.3925f;
					break;
				case 4:
					*uParam2 = { -1179.3281f, -2888.291f, 12.9454f };
					*uParam3 = 328.5916f;
					break;
				case 5:
					*uParam2 = { -1180.9073f, -2886.3528f, 12.9454f };
					*uParam3 = 328.5916f;
					break;
				case 6:
					*uParam2 = { -1182.9829f, -2885.3523f, 12.9454f };
					*uParam3 = 328.5916f;
					break;
				case 7:
					*uParam2 = { -1185.3142f, -2884.4329f, 12.9454f };
					*uParam3 = 331.5915f;
					break;
			}
			break;
	}
}

int func_1049(int iParam0)//Position - 0x97DA6
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (((iParam0 == 52 || iParam0 == 54) || (iParam0 >= 79 && iParam0 <= 79)) || (iParam0 >= 82 && iParam0 <= 91))
	{
		return 1;
	}
	return 0;
}

int func_1052()//Position - 0x97E2D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	else
	{
		return 1;
	}
	iVar5 = 0;
	while (iVar5 < 32)
	{
		iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
			iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar4, false) && PED::GET_VEHICLE_PED_IS_IN(iVar4, false) == iVar0)
			{
				iVar1++;
				if (BitTest(Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 1))
				{
					iVar2++;
				}
			}
		}
		iVar5++;
	}
	if (iVar2 == iVar1)
	{
		return 1;
	}
	return 0;
}

void func_1053(struct<2> Param0)//Position - 0x97EC5
{
	struct<3> Var0;
	int iVar1;
	Var0.f_2.f_1 = -1;
	Var0.f_0 = -757614128;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	iVar1 = __LIB_5__::func_410(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

void func_1054(struct<2> Param0)//Position - 0x97F10
{
	struct<3> Var0;
	int iVar1;
	Var0.f_2.f_1 = -1;
	Var0.f_0 = 1805823898;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	iVar1 = __LIB_5__::func_410(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_1055()//Position - 0x97F5B
{
	switch (__LIB_35__::func_17(&(Global_1952191.f_5309)))
	{
		case 15:
		case 19:
		case 14:
			return 1;
			break;
	}
	return 0;
}

int func_1065(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x982EE
{
	struct<3> Var0;
	int iVar1;
	int iVar2[5];
	struct<2> Var3;
	int iVar4[5];
	bool bVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	bool bVar10;
	struct<3> Var11;
	if (__LIB_12__::func_311())
	{
		return 1;
	}
	else if ((Global_1952191.f_5312 && Global_1952191.f_5313) && !__LIB_5__::func_192(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	else
	{
		Var0 = { __LIB_10__::func_810(iParam0, iParam1) };
		Var3 = { func_1095(PLAYER::PLAYER_ID(), Var0) };
		bVar5 = __LIB_3__::func_487(Var3);
		uVar6 = func_1093(iParam0);
		bVar7 = __LIB_10__::func_809(iParam0);
		bVar8 = __LIB_10__::func_808(Var3, iParam0);
		uVar9 = __LIB_31__::func_324(iParam0, bParam2);
		if (((bVar5 && uVar6) && !bVar7) && !bVar8)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (__LIB_3__::func_487(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar1 /*2*/]))
				{
					iVar2[iVar1] = (__LIB_10__::func_805(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar1 /*2*/]) - 1);
					iVar4[iVar1] = __LIB_5__::func_193(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar1 /*2*/]);
				}
				iVar1++;
			}
			bVar10 = __LIB_10__::func_804(Global_1952191.f_5470.f_3);
			if (__LIB_31__::func_317(PLAYER::PLAYER_ID(), Var0) && iParam5)
			{
				MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), 4);
				func_1080(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1), &iVar2, iParam0, &iVar4, Var0, uVar9, bVar10);
			}
			else
			{
				Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_12 = { Var3 };
				func_1076(Var3, (__LIB_10__::func_805(Var3) - 1), iParam0, __LIB_5__::func_193(Var3), uVar9, __LIB_10__::func_895(), bVar10);
			}
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (__LIB_3__::func_487(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar1 /*2*/]))
				{
					Var11 = { __LIB_5__::func_948(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar1 /*2*/]) };
					if (__LIB_12__::func_309(Var11, Var0))
					{
						func_1067(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar1 /*2*/], iParam0, iVar2[iVar1], bParam2, bParam3, bParam4);
					}
				}
				iVar1++;
			}
			__LIB_10__::func_786();
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_15 = iParam0;
			Global_1952191.f_5474 = { Var0 };
			return 1;
		}
	}
	return 0;
}

void func_1067(struct<2> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x98578
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_797();
	if (!__LIB_3__::func_360(PLAYER::PLAYER_ID(), Param0.f_0))
	{
		if (__LIB_0__::func_797() == __LIB_0__::getMinusOneOrNull())
		{
			iVar0 = PLAYER::PLAYER_ID();
		}
	}
	if (iParam1 > 0)
	{
		if (__LIB_10__::func_802(&iParam1))
		{
			if (bParam3)
			{
				if (__LIB_5__::func_193(Param0) == 1 || __LIB_5__::func_193(Param0) == 3)
				{
					func_26(iParam1, iVar0);
				}
			}
		}
		else if (((__LIB_10__::func_791(&iParam1) || __LIB_4__::func_379(iParam1)) || __LIB_3__::func_651(iParam1)) || __LIB_10__::func_790(iParam1))
		{
			if (bParam3)
			{
				func_26(iParam1, iVar0);
			}
		}
		else if (__LIB_10__::func_789(&iParam1))
		{
			if (bParam3)
			{
				func_26(iParam1, iVar0);
				if (iParam2 <= 0)
				{
					if (bParam4)
					{
						func_1053(Param0);
					}
					else if (bParam5)
					{
						func_1054(Param0);
					}
				}
			}
		}
		else if (__LIB_10__::func_788(iParam1))
		{
			if (bParam3)
			{
				uVar1 = __LIB_10__::func_597(iParam1);
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (__LIB_0__::func_121(iVar3))
					{
						iVar2 = __LIB_5__::func_190(iVar3, 1, 0, 0);
					}
				}
				MISC::SET_BIT(&iVar2, PLAYER::PLAYER_ID());
				__LIB_35__::func_908(iVar2, uVar1, -1, -1, 0, 0, iVar0, 0, 1, 1);
			}
		}
		else if (iParam2 <= 0)
		{
			if (bParam4)
			{
				func_1053(Param0);
			}
			else if (bParam5)
			{
				func_1054(Param0);
			}
		}
	}
}

void func_1076(struct<2> Param0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)//Position - 0x9899B
{
	struct<11> Var0;
	int iVar1;
	Var0.f_2.f_1 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_0 = 145637109;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_7 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	Var0.f_8 = bParam5;
	Var0.f_6 = uParam4;
	if (bParam5)
	{
		Var0.f_9 = Global_2815059.f_6694.f_3;
		Var0.f_10 = Global_2815059.f_6694.f_4;
	}
	iVar1 = 0;
	if (bParam6)
	{
		iVar1 = __LIB_5__::func_410(1, 1);
	}
	if (iVar1 == 0)
	{
		if (__LIB_3__::func_360(PLAYER::PLAYER_ID(), Var0.f_2))
		{
			iVar1 = __LIB_12__::func_836(0, 1);
		}
		else
		{
			if (bParam5)
			{
				if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
				{
					iVar1 = __LIB_12__::func_836(0, 1);
				}
				if (__LIB_1__::func_693(Var0.f_2, 0, 1))
				{
					MISC::SET_BIT(&iVar1, Var0.f_2);
				}
			}
			else
			{
				if (__LIB_1__::func_693(Var0.f_2, 0, 1))
				{
					iVar1 = __LIB_1__::func_705(Var0.f_2);
				}
				if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
				{
					MISC::SET_BIT(&iVar1, __LIB_0__::func_797());
				}
			}
			MISC::SET_BIT(&iVar1, PLAYER::PLAYER_ID());
		}
	}
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 11, iVar1);
	}
}

void func_1080(var uParam0, int iParam1, int iParam2, int iParam3, struct<3> Param4, var uParam5, bool bParam6)//Position - 0x98B08
{
	struct<22> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_15 = 5;
	Var0.f_21 = 5;
	Var0.f_0 = -1544474774;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_14 = uParam5;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (__LIB_3__::func_487(*(uParam0[iVar1 /*2*/])))
		{
			Var2 = { __LIB_5__::func_948(*(uParam0[iVar1 /*2*/])) };
			if (__LIB_12__::func_309(Var2, Param4))
			{
				Var0.f_2[iVar1 /*2*/] = { *(uParam0[iVar1 /*2*/]) };
				Var0.f_21[iVar1] = (*iParam1)[iVar1];
				Var0.f_15[iVar1] = (*iParam3)[iVar1];
			}
		}
		iVar1++;
	}
	Var0.f_13 = iParam2;
	iVar3 = __LIB_12__::func_836(1, 1);
	if (!__LIB_2__::func_159(1))
	{
		iVar3 = 0;
		MISC::SET_BIT(&iVar3, PLAYER::PLAYER_ID());
	}
	if (bParam6)
	{
		iVar3 = __LIB_5__::func_410(1, 1);
	}
	if (!iVar3 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 27, iVar3);
	}
}

int func_1093(int iParam0)//Position - 0x98FD4
{
	return func_1094(iParam0, PLAYER::PLAYER_ID());
}

int func_1094(int iParam0, int iParam1)//Position - 0x98FE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693(iParam1, 0, 1))
	{
		if (Global_1952191.f_5470.f_3 != 0)
		{
			return 1;
		}
		if (iParam0 != 0)
		{
			iVar0 = iParam1;
			if (__LIB_2__::func_72(iParam1, 1))
			{
				iVar0 = __LIB_2__::func_39(iParam1);
			}
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2681762.f_199.f_962[iVar1 /*75*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2] == iParam0)
						{
							return 1;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

struct<2> func_1095(int iParam0, struct<3> Param1)//Position - 0x9908A
{
	struct<2> Var0;
	int iVar1;
	struct<2> Var2;
	struct<3> Var3;
	Var0.f_1 = -1;
	if (!__LIB_5__::func_192(iParam0) || !__LIB_10__::func_803(Param1))
	{
		return Var0;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Var2 = { __LIB_7__::func_774(iParam0, iVar1, 0) };
		if (__LIB_3__::func_487(Var2) && __LIB_5__::func_191(Var2))
		{
			Var3 = { __LIB_5__::func_948(Var2) };
			if (__LIB_12__::func_309(Var3, Param1))
			{
				return Var2;
			}
		}
		iVar1++;
	}
	return Var0;
}

int func_1101()//Position - 0x992AC
{
	if (Local_133.f_476)
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_872(Local_133.f_461, 1) && __LIB_6__::func_854(Local_150.f_5) == Local_133.f_1.f_10)
		{
			if (__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(Local_150.f_5)))
			{
				return 0;
			}
			return 1;
		}
		if (func_15())
		{
			if ((__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1 && PLAYER::PLAYER_ID() == Local_133.f_1.f_10) || __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1102()//Position - 0x99345
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			if (Local_110[iVar0 /*3*/].f_1 < 5)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_1103()//Position - 0x99382
{
	int iVar0;
	if (Local_133.f_12.f_386)
	{
		if (Local_133.f_12.f_372 > 0)
		{
			if (Local_133.f_12.f_382 == (Local_133.f_12.f_372 - 1))
			{
				iVar0 = (Local_133.f_12.f_18[Local_133.f_12.f_382 /*36*/] - Local_133.f_12.f_375);
				if (iVar0 <= 1700)
				{
					if (!Global_1952191.f_5316)
					{
						Global_1952191.f_5316 = 1;
					}
				}
				if (iVar0 <= 300)
				{
					if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						if (!bLocal_149)
						{
							CAM::DO_SCREEN_FADE_OUT(250);
						}
					}
				}
			}
		}
	}
}

void func_1156()//Position - 0x9AF5D
{
	struct<3> Var0;
	__LIB_4__::func_562(Local_133.f_452, 15f, 0);
	if (__LIB_10__::func_802(&(Global_1952191.f_5309)))
	{
		Var0 = { __LIB_6__::func_395(__LIB_10__::func_798(&(Global_1952191.f_5309)), 3, 0) };
		STREAMING::SET_FOCUS_POS_AND_VEL(Var0, 0f, 0f, 0f);
	}
	if (Local_111.f_6)
	{
		func_1220(9);
		return;
	}
	if (__LIB_10__::func_802(&(Local_133.f_1.f_1)))
	{
		__LIB_3__::func_889(1);
	}
	Global_1952191.f_5314 = 1;
	__LIB_12__::func_584(13);
	if (__LIB_10__::func_802(&(Global_1952191.f_5309)))
	{
		__LIB_4__::func_178(&(Local_133.f_12), 2);
	}
	else
	{
		__LIB_4__::func_178(&(Local_133.f_12), 1);
	}
}

void func_1167(int* iParam0, bool bParam1)//Position - 0x9B4BB
{
	if (bParam1)
	{
		if (!BitTest(*iParam0, 7))
		{
			MISC::SET_BIT(iParam0, 7);
			SCRIPT::SET_NO_LOADING_SCREEN(true);
		}
	}
	else
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
	}
}

int func_1169()//Position - 0x9B4FB
{
	if (Local_133.f_1.f_8)
	{
		if (__LIB_2__::func_559(&iLocal_137) >= 3f)
		{
			return 1;
		}
	}
	else if (Local_133.f_1.f_5 || Local_133.f_1.f_7)
	{
		if (Local_133.f_472 && __LIB_2__::func_559(&iLocal_137) >= 2f)
		{
			return 1;
		}
	}
	else if (Local_133.f_1.f_6)
	{
		if (__LIB_2__::func_559(&iLocal_137) >= 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_1173()//Position - 0x9B60E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_111.f_33)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_33[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_111.f_33[iVar0], false))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_111.f_33[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_28[0]))
	{
		if (!func_1175(&Local_111))
		{
			return 0;
		}
	}
	switch (Local_133.f_1.f_2)
	{
		case 4:
		case 2:
		case 3:
		case 1:
			if (__LIB_4__::func_707(&Local_133, 8))
			{
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_1175(var uParam0)//Position - 0x9B6F1
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_28[0], false))
	{
		if (!VEHICLE::HAVE_VEHICLE_MODS_STREAMED_IN(uParam0->f_28[0]))
		{
			return 0;
		}
	}
	return 1;
}

void func_1180(bool bParam0)//Position - 0x9B78E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_111.f_55)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_55[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_111.f_55[iVar0], bParam0, false);
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_55[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_111.f_55[iVar0], bParam0, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_111.f_55[iVar0], !bParam0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_28[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_111.f_28[iVar0], bParam0, false);
			ENTITY::SET_ENTITY_COLLISION(Local_111.f_28[iVar0], bParam0, false);
			if (bParam0)
			{
				switch (Local_133.f_1.f_2)
				{
					case 1:
					case 2:
					case 8:
					case 6:
						ENTITY::FREEZE_ENTITY_POSITION(Local_111.f_28[iVar0], !bParam0);
						break;
				}
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED(Local_111.f_28[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_111.f_28[iVar0], !bParam0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_33)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_33[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_111.f_33[iVar0], bParam0, false);
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_33[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_111.f_33[iVar0], bParam0, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_111.f_33[iVar0], !bParam0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_58)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_58[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_111.f_58[iVar0], bParam0, false);
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_111.f_58[iVar0]) && !ENTITY::IS_ENTITY_STATIC(Local_111.f_58[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_111.f_58[iVar0], bParam0, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_111.f_58[iVar0], !bParam0);
			}
		}
		iVar0++;
	}
}

void func_1181(var uParam0, var uParam1)//Position - 0x9B986
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	switch (uParam0->f_1.f_2)
	{
		case 1:
		case 5:
		case 7:
		case 8:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_461))
			{
				if (ENTITY::GET_ENTITY_BONE_COUNT(uParam0->f_461) > ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_461, "chassis_dummy"))
				{
					Var1 = { ENTITY::GET_ENTITY_BONE_POSTION(uParam0->f_461, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_461, "chassis_dummy")) };
					Var2 = { __LIB_35__::func_911(ENTITY::GET_ENTITY_MODEL(uParam0->f_461)) };
					__LIB_0__::func_817(&Var2, ENTITY::GET_ENTITY_ROTATION(uParam0->f_461, 2));
					Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(uParam0->f_461), Var2) };
				}
				if (__LIB_0__::func_86(Var1))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_1, true) };
				}
				iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 5f, __LIB_35__::func_910(ENTITY::GET_ENTITY_MODEL(uParam0->f_461)), false, false, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iVar0))
					{
						iVar3 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar3))
						{
							if (iVar3 == __LIB_1__::func_601(uParam0->f_461))
							{
								uParam1->f_58[0] = OBJECT::CREATE_OBJECT(__LIB_35__::func_910(ENTITY::GET_ENTITY_MODEL(uParam0->f_461)), 10f, 10f, 10f, false, false, false);
								if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_58[0]))
								{
									iVar4 = OBJECT::GET_OBJECT_TINT_INDEX(iVar0);
									if (iVar4 != -1)
									{
										OBJECT::SET_OBJECT_TINT_INDEX(uParam1->f_58[0], iVar4);
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_58[0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_58[0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_58[0], false, false);
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_58[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0]))
	{
		__LIB_42__::func_43(uParam1->f_58[0], uParam1->f_28[0], 0);
	}
}

int func_1187(var uParam0, bool bParam1)//Position - 0x9BD6E
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true), false, false, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_28[0], ENTITY::GET_ENTITY_ROTATION(uParam0->f_1, 2), 2, true);
		return 1;
	}
	else
	{
		if (__LIB_17__::func_833(&(uParam0->f_28[0]), uParam0->f_1, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(uParam0->f_1), 0, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				Var0.f_9 = 49;
				Var0.f_59 = 2;
				Var0.f_78 = -1;
				Var0.f_79 = -1;
				Var0.f_96 = -1;
				Var0.f_97 = 1;
				Var0.f_99 = 132;
				Var0.f_100 = -1;
				__LIB_9__::func_494(uParam0->f_1, &Var0);
				__LIB_16__::func_190(uParam0->f_28[0], &Var0, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_28[0], ENTITY::GET_ENTITY_ROTATION(uParam0->f_1, 2), 2, true);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[0], false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_28[0], false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_28[0], 5f);
				if (bParam1)
				{
					iVar1 = -1;
					while (iVar1 <= 8)
					{
						iVar2 = iVar1 + 1;
						iVar3 = iVar1;
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_1, iVar3, false))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, iVar3, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar4))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_33[iVar2]))
								{
									func_1188(&(uParam0->f_33[iVar2]), iVar4, 1, 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33[iVar2]))
								{
									iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_28[0], iVar3, false);
									if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
									{
										PED::SET_PED_INTO_VEHICLE(uParam0->f_33[iVar2], uParam0->f_28[0], iVar3);
									}
									if (iVar1 == 7)
									{
										VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_28[0], 5, 5, 1f);
									}
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556, 3))
		{
			iVar6 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(uParam0->f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar6))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar6, false))
				{
					iVar7 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						__LIB_17__::func_833(&(uParam0->f_28[1]), iVar7, ENTITY::GET_ENTITY_COORDS(iVar7, true), ENTITY::GET_ENTITY_HEADING(iVar7), 0, 0);
					}
				}
			}
		}
	}
	return 0;
}

int func_1188(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x9BFCE
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	*uParam0 = PED::CLONE_PED(iParam1, false, false, bParam2);
	if (__LIB_0__::func_121(iParam1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		__LIB_1__::func_494(*uParam0);
		if (func_1190(iParam1) || __LIB_1__::func_554(iParam1))
		{
			PED::SET_PED_HELMET(*uParam0, true);
		}
		else
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::CLEAR_PED_PROP(*uParam0, 0);
		}
		if (bParam3)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
			Var0.f_2 = (Var0.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
		return 1;
	}
	return 0;
}

int func_1190(int iParam0)//Position - 0x9C12F
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_293(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_1193(int iParam0)//Position - 0x9C377
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if ((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_1194(iParam0)) && !__LIB_3__::func_690(iParam0))
	{
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("dump"):
			return 1;
		default:
	}
	return 0;
}

int func_1194(int iParam0)//Position - 0x9C3C8
{
	int iVar0;
	int iVar1;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (func_1195(iVar0) == iVar1 || (iVar1 == joaat("pounder") && __LIB_5__::func_185(PLAYER::PLAYER_ID()) == 227))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1195(int iParam0)//Position - 0x9C41A
{
	switch (iParam0)
	{
		case 0:
			return joaat("dloader");
		case 7:
			if (func_1199() && Global_262145.f_21692 /* Tunable: 525549441 */)
			{
				return joaat("apc");
			}
			else
			{
				return joaat("insurgent2");
			}
			break;
		case 10:
			return joaat("rhino");
		case 11:
			return joaat("technical3");
		case 6:
			return joaat("burrito");
		case 12:
			return joaat("youga2");
		case 17:
			return joaat("insurgent3");
		case 15:
			return joaat("insurgent2");
		case 14:
			return joaat("insurgent3");
		case 16:
			return joaat("marshall");
		case 19:
			return joaat("dune3");
		case 18:
			return __LIB_28__::func_461();
		case 2:
			return joaat("ex_prop_adv_case_sm");
		case 3:
			return joaat("riot");
		case 4:
			return joaat("gr_prop_gr_rsply_crate01a");
		case 1:
			return joaat("gr_prop_gr_rsply_crate03a");
		case 13:
			return joaat("gr_prop_gr_rsply_crate02a");
		case 5:
			return joaat("ex_prop_adv_case_sm_03");
		case 20:
			return __LIB_35__::func_915(joaat("ex_prop_adv_case_sm_03"), 0);
		case 8:
			return WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_MINIGUN"));
		case 9:
			return WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_RAILGUN"));
	}
	return 0;
}

var func_1199()//Position - 0x9C622
{
	var uVar0;
	uVar0 = __LIB_1__::func_360(5466, -1, 0);
	return BitTest(uVar0, 3);
}

bool func_1201()//Position - 0x9C651
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !Local_109.f_1)
	{
		bVar0 = false;
		if (Local_133.f_1.f_5 || Local_133.f_1.f_7)
		{
			bVar2 = __LIB_3__::func_686(__LIB_5__::func_193(Local_133.f_1.f_3));
			if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_461))
			{
				if ((((!ENTITY::IS_ENTITY_DEAD(Local_133.f_461, false) && !func_1211(1)) && !func_1210()) && !__LIB_12__::func_120(PLAYER::PLAYER_ID())) && !__LIB_12__::func_119(PLAYER::PLAYER_ID()))
				{
					if (((bVar2 && !func_1207(Local_133.f_461)) && func_1206(Local_133.f_461)) || !bVar2)
					{
						iVar1 = Local_133.f_461;
						if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556, 3))
						{
							iVar3 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(Local_133.f_461);
							if (ENTITY::DOES_ENTITY_EXIST(iVar3))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
								{
									iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3);
								}
							}
						}
						bVar0 = true;
					}
				}
			}
		}
		else if (Local_133.f_1.f_6)
		{
			iVar1 = PLAYER::PLAYER_PED_ID();
			if ((((ENTITY::DOES_ENTITY_EXIST(iVar1) && !func_1211(0)) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_LANDING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (__LIB_35__::func_704(__LIB_5__::func_433(Local_133.f_1.f_3), Local_133.f_1.f_1))
			{
				if (ENTITY::IS_ENTITY_IN_AREA(iVar1, Local_133.f_455, Local_133.f_458, false, true, 0))
				{
					if (Local_133.f_1.f_6 || func_1203(Local_133.f_461))
					{
						Local_109.f_1 = 1;
					}
					else if (!__LIB_0__::func_1("GR_NO_PA_DEL" /* GXT: This vehicle is not suitable for delivery. */))
					{
						__LIB_0__::func_151("GR_NO_PA_DEL" /* GXT: This vehicle is not suitable for delivery. */, -1);
					}
				}
			}
		}
	}
	if (Local_109.f_1)
	{
		Local_109.f_2 = 1;
	}
	return Local_109.f_2;
}

int func_1203(int iParam0)//Position - 0x9C847
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol"))
	{
		return 0;
	}
	if (__LIB_3__::func_532(iVar0))
	{
		return 0;
	}
	if (__LIB_0__::func_872(iParam0, 1))
	{
		if (__LIB_2__::func_721(iVar0, 0) && iVar0 != joaat("trailersmall2"))
		{
			return 0;
		}
		if (__LIB_6__::func_854(iParam0) == Local_133.f_1.f_10)
		{
			return !__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(Local_150.f_5));
		}
	}
	return 1;
}

int func_1206(int iParam0)//Position - 0x9C99A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	iVar3 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam0));
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = (iVar4 - 1);
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar0, false))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar0, false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2, false) && PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
				if (iVar1 != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693(iVar1, 1, 1))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						return 0;
					}
					else if (Local_110[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1) /*3*/].f_1 != 2)
					{
						return 0;
					}
				}
			}
		}
		iVar4++;
	}
	return 1;
}

int func_1207(int iParam0)//Position - 0x9CA48
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	fVar3 = 15f;
	Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (__LIB_1__::func_693(iVar0, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			Var5 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
			if (SYSTEM::VDIST(Var5, Var4) <= fVar3)
			{
				if (PED::IS_PED_IN_VEHICLE(iVar1, iParam0, true) && !PED::IS_PED_SITTING_IN_VEHICLE(iVar1, iParam0))
				{
					return 1;
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_1210()//Position - 0x9CB2A
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		if (!__LIB_0__::func_121(iVar0))
		{
			return 1;
		}
		Var1 = { ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
		if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_CARGOBOB(iVar0)))
		{
			if (SYSTEM::VMAG(Var1) >= 8f)
			{
				return 1;
			}
		}
		else if (((Var1.f_0 > 3f || Var1.f_0 < -3f) || (Var1.f_1 > 3f || Var1.f_1 < -3f)) || (Var1.f_2 > 0.5f || Var1.f_2 < -0.5f))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1211(bool bParam0)//Position - 0x9CBFA
{
	if (((__LIB_3__::func_233(PLAYER::PLAYER_ID()) == 18 || __LIB_3__::func_233(PLAYER::PLAYER_ID()) == 8) || __LIB_3__::func_233(PLAYER::PLAYER_ID()) == 10) || __LIB_3__::func_233(PLAYER::PLAYER_ID()) == 8)
	{
		return 0;
	}
	if (bParam0)
	{
		return func_1212();
	}
	return PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0;
}

bool func_1212()//Position - 0x9CC5D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			iVar2 = __LIB_5__::func_190(iVar0, 0, 0, 0);
			if (iVar2 > 0)
			{
				iVar3 = 0;
				while (iVar3 < 32)
				{
					iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
					if (BitTest(iVar2, iVar3) && __LIB_1__::func_693(iVar1, 1, 1))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar1) > 0)
						{
							return 1;
						}
					}
					iVar3++;
				}
			}
		}
	}
	return PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0;
}

void func_1214()//Position - 0x9CDCF
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_1257();
	}
	if (Local_133.f_477)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_133.f_478) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_133.f_478, false))
		{
			func_1257();
		}
	}
	if (!Local_109.f_1)
	{
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_14 != Global_1952191.f_5309)
		{
			func_1257();
		}
		if (SYSTEM::VDIST(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Local_133.f_452) > 1000f)
		{
			func_1257();
		}
		if (!Local_133.f_476)
		{
			if (Local_133.f_1.f_5 != Global_1952191.f_5312)
			{
				func_1257();
			}
			if (Local_133.f_1.f_6 != Global_1952191.f_5301)
			{
				func_1257();
			}
			if (Local_133.f_1.f_7 != Global_1952191.f_5300)
			{
				func_1257();
			}
			if (__LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_1257();
			}
			if (Local_133.f_1.f_7)
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_133.f_461, -1, true))
				{
					func_1257();
				}
				if (func_1216(Local_133.f_461, PLAYER::PLAYER_ID()))
				{
					func_1257();
				}
			}
			if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556, 3))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_461))
				{
					if (__LIB_35__::func_912(Local_133.f_461))
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_133.f_461, -1, false))
						{
							iVar0 = VEHICLE::GET_ENTITY_ATTACHED_TO_CARGOBOB(Local_133.f_461);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
							{
								MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), 3);
								func_1257();
							}
						}
						else
						{
							func_1257();
						}
					}
				}
			}
		}
		if (!__LIB_3__::func_487(Local_133.f_1.f_3))
		{
			func_1257();
		}
	}
}

int func_1216(int iParam0, int iParam1)//Position - 0x9CFD2
{
	int iVar0;
	var uVar1;
	bool bVar2;
	iVar0 = PLAYER::PLAYER_ID();
	if (!__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
	{
		if (iParam1 != __LIB_0__::getMinusOneOrNull())
		{
			iVar0 = iParam1;
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_121(iParam0))
	{
		uVar1 = __LIB_5__::func_190(iParam0, 1, 0, 1);
		bVar2 = false;
		while (bVar2 < 32)
		{
			if (BitTest(uVar1, bVar2))
			{
				if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(bVar2), 0, 1))
				{
					if (__LIB_2__::func_72(PLAYER::INT_TO_PLAYERINDEX(bVar2), 1) && !__LIB_3__::func_360(iVar0, PLAYER::INT_TO_PLAYERINDEX(bVar2)))
					{
						return 1;
					}
				}
			}
			bVar2++;
		}
	}
	return 0;
}

int func_1218()//Position - 0x9D0BA
{
	int iVar0;
	if ((!STREAMING::HAS_MODEL_LOADED(joaat("MP_M_Freemode_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("MP_F_Freemode_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_ball")))
	{
		return 0;
	}
	if (!func_1219(&Local_133))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_7)
	{
		if (Local_111.f_7[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_111.f_7[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1219(var uParam0)//Position - 0x9D13B
{
	switch (uParam0->f_1.f_2)
	{
		case 1:
		case 5:
		case 7:
		case 8:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_461))
			{
				__LIB_0__::func_799(__LIB_35__::func_910(ENTITY::GET_ENTITY_MODEL(uParam0->f_461)));
				if (STREAMING::HAS_MODEL_LOADED(__LIB_35__::func_910(ENTITY::GET_ENTITY_MODEL(uParam0->f_461))))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			break;
		default:
			return 1;
	}
	return 1;
}

void func_1220(int iParam0)//Position - 0x9D1AB
{
	if (Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 != iParam0)
	{
		Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = iParam0;
	}
}

void func_1221()//Position - 0x9D1CE
{
	int iVar0;
	STREAMING::REQUEST_MODEL(joaat("MP_M_Freemode_01"));
	STREAMING::REQUEST_MODEL(joaat("MP_F_Freemode_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_golf_ball"));
	iVar0 = 0;
	while (iVar0 < Local_111.f_7)
	{
		if (Local_111.f_7[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(Local_111.f_7[iVar0]);
		}
		iVar0++;
	}
}

int func_1222()//Position - 0x9D221
{
	return Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1;
}

void func_1223()//Position - 0x9D233
{
	struct<3> Var0;
	bool bVar1;
	int* iVar2;
	struct<3> Var3;
	float fVar4;
	struct<31> Var5;
	bool bVar6;
	struct<3> Var7;
	float fVar8;
	struct<31> Var9;
	bVar1 = false;
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_1__::func_589(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		MISC::SET_BIT(&(Global_1946250.f_1), 0);
		func_1242(9);
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_150.f_5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::RESET_ENTITY_ALPHA(Local_150.f_5);
		ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
	}
	if ((!BitTest(Local_133.f_0, 4) || BitTest(Local_133.f_0, 5)) || (Local_133.f_476 && (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_901(Local_150.f_5, 0, 1, 1, 0, 0, 1, 0, 1))))
	{
		return;
	}
	if (func_1222() < 5 && iLocal_136 != 0)
	{
		return;
	}
	switch (iLocal_136)
	{
		case 0:
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_3__::func_514(0);
				NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__::func_121(Local_150.f_5))
				{
					if (Local_150.f_1 == 0)
					{
						Local_150.f_1 = ENTITY::GET_ENTITY_MODEL(Local_150.f_5);
					}
					if (__LIB_35__::func_913(Local_150.f_5, &iVar2))
					{
						Var5.f_4 = 1125515264;
						Var5.f_5 = 1;
						Var5.f_6 = 1;
						Var5.f_8 = 1082130432;
						Var5.f_9 = 1176255488;
						Var5.f_10 = 1;
						Var5.f_13 = 1;
						Var5.f_15 = 2;
						Var5.f_22 = 2;
						Var5.f_25 = 1;
						Var5.f_26 = 1;
						Var5.f_29 = 1123024896;
						Var5.f_30 = 1;
						Var5.f_0 = 20f;
						Var5.f_4 = 150f;
						Var5.f_1 = 1;
						Var5.f_12 = 1;
						Var5.f_13 = 0;
						Var5.f_5 = 1;
						if (!func_529(ENTITY::GET_ENTITY_COORDS(iVar2, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iVar2), 1, &Var3, &fVar4, &Var5))
						{
							return;
						}
						else
						{
							VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_150.f_5);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar2, Var3, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar2, fVar4);
						}
					}
					if (__LIB_3__::func_690(Local_150.f_5))
					{
						func_1242(9);
						return;
					}
					else if (!__LIB_1__::func_606(PLAYER::PLAYER_PED_ID(), Local_150.f_5, -1))
					{
						if (!__LIB_0__::func_872(Local_150.f_5, 1) || __LIB_6__::func_854(Local_150.f_5) != Local_133.f_1.f_10)
						{
							MISC::SET_BIT(&(Global_1946250.f_1), 0);
						}
						func_1242(9);
						return;
					}
					else if (func_1236(PLAYER::PLAYER_ID()))
					{
						__LIB_12__::func_584(11);
						MISC::SET_BIT(&(Global_1946250.f_1), 0);
						func_1242(7);
						Local_150.f_0 = __LIB_0__::func_797();
						return;
					}
					else if (__LIB_1__::func_588(Local_150.f_5))
					{
						Local_150.f_4 = __LIB_0__::func_298(Local_150.f_5);
						MISC::SET_BIT(&(Global_1946250.f_1), 0);
						func_1242(3);
						return;
					}
					else if (!__LIB_0__::func_872(Local_150.f_5, 1))
					{
						if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(Local_150.f_5))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(NETWORK::VEH_TO_NET(Local_150.f_5)))
							{
								NETWORK::NETWORK_FADE_OUT_ENTITY(Local_150.f_5, true, true);
								ENTITY::RESET_ENTITY_ALPHA(Local_150.f_5);
								bVar1 = true;
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(NETWORK::VEH_TO_NET(Local_150.f_5));
							}
						}
						else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_150.f_5) && !BitTest(Local_133.f_0, 6))
						{
							MISC::SET_BIT(&Local_133, 5);
							MISC::SET_BIT(&(Global_1946250.f_1), 0);
						}
						else
						{
							MISC::SET_BIT(&Local_133, 6);
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								bVar6 = true;
							}
							else
							{
								bVar6 = false;
							}
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_150.f_5, bVar6, true);
						}
						MISC::SET_BIT(&(Global_1946250.f_1), 0);
					}
					else if (__LIB_6__::func_854(Local_150.f_5) != Local_133.f_1.f_10)
					{
						bVar1 = true;
					}
					else if (__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(Local_150.f_5)))
					{
						MISC::SET_BIT(&(Global_1946250.f_1), 0);
						func_1242(2);
					}
					else
					{
						func_1242(9);
					}
				}
				if (bVar1)
				{
					if (__LIB_1__::func_588(Local_150.f_5))
					{
						func_1242(3);
					}
					else if (__LIB_0__::func_872(Local_150.f_5, 1))
					{
						func_1242(2);
					}
					else
					{
						func_1242(1);
					}
				}
			}
			else
			{
				func_1242(4);
			}
			break;
		case 1:
			if (__LIB_0__::func_121(Local_150.f_5))
			{
				if (!NETWORK::NETWORK_IS_ENTITY_FADING(Local_150.f_5))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(NETWORK::VEH_TO_NET(Local_150.f_5)))
					{
						Var9.f_4 = 1125515264;
						Var9.f_5 = 1;
						Var9.f_6 = 1;
						Var9.f_8 = 1082130432;
						Var9.f_9 = 1176255488;
						Var9.f_10 = 1;
						Var9.f_13 = 1;
						Var9.f_15 = 2;
						Var9.f_22 = 2;
						Var9.f_25 = 1;
						Var9.f_26 = 1;
						Var9.f_29 = 1123024896;
						Var9.f_30 = 1;
						Var9.f_0 = 20f;
						Var9.f_4 = 150f;
						Var9.f_1 = 1;
						Var9.f_12 = 1;
						Var9.f_13 = 0;
						Var9.f_5 = 1;
						if (func_529(ENTITY::GET_ENTITY_COORDS(Local_150.f_5, true), 0f, 0f, 0f, Local_150.f_1, 1, &Var7, &fVar8, &Var9))
						{
							NETWORK::NETWORK_FADE_IN_ENTITY(Local_150.f_5, true, 1);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_150.f_5, Var7, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_150.f_5, fVar8);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_150.f_5, 5f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_150.f_5, false, true, false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_150.f_1))
							{
								VEHICLE::SET_HELI_BLADES_SPEED(Local_150.f_5, 0f);
							}
							func_1242(9);
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(NETWORK::VEH_TO_NET(Local_150.f_5));
					}
				}
			}
			break;
		case 7:
			if (!__LIB_3__::func_728(PLAYER::PLAYER_ID(), 11))
			{
				if (Local_150.f_0 != __LIB_0__::getMinusOneOrNull() && !NETWORK::NETWORK_IS_ENTITY_FADING(Global_2815059.f_5195.f_226[Local_150.f_0]))
				{
					if (__LIB_1__::func_693(__LIB_0__::func_797(), 0, 1))
					{
						func_1226(Local_150.f_1, 0, 1);
					}
					func_1242(8);
				}
			}
			break;
		case 8:
			if (!__LIB_0__::func_864(&(Local_150.f_2)))
			{
				func_1225(Local_150.f_0);
				__LIB_0__::func_795(&(Local_150.f_2), 0, 0);
			}
			else if (__LIB_0__::func_937(&(Local_150.f_2), 3000, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_150.f_2));
			}
			if (NETWORK::NETWORK_IS_ENTITY_FADING(Global_2815059.f_5195.f_226[Local_150.f_0]))
			{
				__LIB_0__::clearF_1Prop(&(Local_150.f_2));
				func_1242(9);
			}
			break;
		case 4:
			if (!NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				Var0.f_2 = (Var0.f_2 - 10f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				func_1242(9);
			}
			break;
		case 3:
			Global_2815059.f_291 = Local_150.f_4;
			func_1242(9);
			break;
		case 2:
			func_1224(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), __LIB_6__::func_854(Local_150.f_5), 0, 0);
			func_1242(9);
			break;
		case 9:
			break;
	}
}

void func_1224(struct<3> Param0, int iParam1, int iParam2, int iParam3)//Position - 0x9D8CF
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = 1865881582;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = iParam2;
	Var0.f_6 = iParam3;
	if (iParam1 == __LIB_0__::getMinusOneOrNull())
	{
		return;
	}
	if (__LIB_0__::func_86(Var0.f_2))
	{
		return;
	}
	iVar1 = __LIB_1__::func_705(iParam1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

void func_1225(var uParam0)//Position - 0x9D935
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 1434390292;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar1 = __LIB_5__::func_410(1, 0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_1226(var uParam0, bool bParam1, int iParam2)//Position - 0x9D96F
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_797();
	if (bParam1)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	if (Global_1892703[iVar0 /*599*/].f_10.f_59 != 0)
	{
		if ((bParam1 || iParam2) || !__LIB_35__::func_918(1, -1))
		{
			if (bParam1 || __LIB_2__::func_50())
			{
				__LIB_29__::func_834(uParam0, -1, 0);
			}
			else if (__LIB_2__::func_159(0))
			{
				iVar1 = __LIB_0__::func_797();
				if (__LIB_1__::func_693(iVar1, 0, 1))
				{
					__LIB_28__::func_365(__LIB_1__::func_705(iVar1), uParam0, iParam2);
				}
			}
		}
	}
}

int func_1236(int iParam0)//Position - 0x9DBE1
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_693(iParam0, 1, 1))
	{
		if (__LIB_2__::func_72(iParam0, 1))
		{
			iVar0 = Global_2815059.f_5195.f_226[__LIB_2__::func_39(iParam0)];
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
					if (__LIB_1__::func_606(iVar1, iVar0, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_1242(int iParam0)//Position - 0x9DDEC
{
	if (iLocal_136 != iParam0)
	{
		iLocal_136 = iParam0;
	}
}

void func_1244()//Position - 0x9DE52
{
	if (func_1222() >= 2)
	{
		if (Local_109.f_1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_461))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_133.f_461))
				{
					Local_133.f_472 = __LIB_0__::func_213(Local_133.f_461, 10.5f, 8, 0.5f, 0, 1, 0);
				}
				else if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_133.f_461);
				}
				else if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(Local_133.f_461)) <= 0.5f)
				{
					Local_133.f_472 = 1;
				}
			}
			else
			{
				Local_133.f_472 = 1;
			}
		}
	}
}

void func_1247()//Position - 0x9E0AC
{
	if (func_1222() > 2 && func_1222() < 10)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
	}
}

void func_1248()//Position - 0x9E0D3
{
	int iVar0;
	if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_133.f_461, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_133.f_461, false))
	{
		iVar0 = __LIB_35__::func_948(PLAYER::PLAYER_PED_ID(), 0);
		if (iVar0 != -2)
		{
			if (iVar0 != Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
			{
				Local_110[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = iVar0;
			}
			Local_111.f_229 = iVar0 + 1;
		}
	}
}

void func_1257()//Position - 0x9E2B1
{
	int iVar0;
	VEHICLE::VEHICLE_SET_JET_WASH_FORCE_ENABLED(1);
	if (!__LIB_10__::func_802(&(Global_1952191.f_5309)))
	{
		if (__LIB_39__::func_607(&Local_133))
		{
			func_1167(&Local_133, 0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_55)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_55[iVar0]))
		{
			PED::DELETE_PED(&(Local_111.f_55[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_28[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_111.f_28[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_33)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_33[iVar0]))
		{
			PED::DELETE_PED(&(Local_111.f_33[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_58)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_58[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_111.f_58[iVar0]));
		}
		iVar0++;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 1);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 2);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 4);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 8);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 32);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 64);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 128);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 256);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 512);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 2048);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 4096);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 8192);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16384);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 32768);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 65536);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	STREAMING::CLEAR_FOCUS();
	Global_1952191.f_5316 = 0;
	__LIB_7__::func_541(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	__LIB_15__::func_448(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
	Global_1958541 = 0;
	__LIB_35__::func_916();
}

void func_1262(struct<11> Param0)//Position - 0x9E55F
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	Local_133.f_1 = { Param0 };
	func_5408(Param0.f_3, "SCRIPT_INITIALISE");
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Param0.f_0);
	if (!__LIB_0__::func_895(0, -1, 1))
	{
		func_1257();
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_109, 136, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_110, 97, 0);
	if (!__LIB_0__::func_934())
	{
		func_1257();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1257();
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) || PED::IS_PED_IN_ANY_HELI(iVar0)) || PED::IS_PED_IN_ANY_BOAT(iVar0)) || PED::IS_PED_IN_ANY_PLANE(iVar0))
		{
			Local_133.f_477 = 1;
			Local_133.f_478 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
		}
		else
		{
			Local_133.f_478 = 0;
			Local_133.f_477 = 0;
		}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iVar0, false) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, false)) && func_5405(PLAYER::PLAYER_ID(), PED::GET_VEHICLE_PED_IS_IN(iVar0, false)))
	{
		Local_133.f_461 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
	}
	else
	{
		Local_133.f_461 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && !func_5405(PLAYER::PLAYER_ID(), PED::GET_VEHICLE_PED_IS_IN(iVar0, false)))
		{
			Local_133.f_476 = 1;
			Local_133.f_1.f_5 = 0;
			Local_133.f_1.f_7 = 0;
			Local_133.f_1.f_6 = 1;
			Local_133.f_461 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
		}
	}
	if (!func_1270(Local_133.f_1.f_2))
	{
		func_1257();
	}
	Local_133.f_452 = { __LIB_19__::func_397(Local_133.f_1.f_1) };
	Local_111.f_2 = { Local_133.f_452 };
	Local_111.f_0 = Local_133.f_1.f_1;
	Local_111.f_1 = Local_133.f_461;
	Global_1958541 = Local_133.f_1.f_1;
	func_1267();
	Var1 = { 1f, 1f, 1f };
	iVar2 = 0;
	while (iVar2 < Local_111.f_179)
	{
		Local_111.f_179[iVar2] = -1;
		iVar2++;
	}
	Var1 = { __LIB_28__::func_359(__LIB_3__::func_233(PLAYER::PLAYER_ID())) };
	if (__LIB_29__::func_828(&iVar0) || BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556, 3))
	{
		Local_133.f_1.f_8 = 1;
		Var1 = { Var1.f_0, Var1.f_1, 12f };
	}
	__LIB_29__::func_832(Local_133.f_1.f_1, &(Local_133.f_455), &(Local_133.f_458), Var1);
	Stack.Push(&(Local_133.f_12));
	Stack.Push(&Local_111);
	Stack.Push(Local_133.f_461);
	Call_Loc(Local_133.f_447);
	if (!StackVal)
	{
		func_1257();
	}
}

void func_1267()//Position - 0x9E97A
{
	if (!func_1268())
	{
		Global_1958540 = 5;
	}
	else
	{
		Global_1958540 = 8;
	}
}

int func_1268()//Position - 0x9E998
{
	if (Global_1958541 >= 42 && Global_1958541 <= 71)
	{
		return 0;
	}
	return 1;
}

int func_1270(int iParam0)//Position - 0x9E9DD
{
	switch (iParam0)
	{
		case 8:
			Local_133.f_447 = 1825422/*func_5404*/;
			Local_133.f_447.f_1 = 1825413/*__LIB_0__::func_109*/;
			Local_133.f_447.f_2 = 1824391/*func_5402*/;
			Local_133.f_447.f_3 = 1823466/*func_5401*/;
			Local_133.f_447.f_4 = 1823458/*__LIB_0__::func_467*/;
			return 1;
			break;
		case 5:
			Local_133.f_447 = 1823409/*func_5399*/;
			Local_133.f_447.f_1 = 1822906/*func_5397*/;
			Local_133.f_447.f_2 = 1819104/*func_5393*/;
			Local_133.f_447.f_3 = 1818887/*func_5392*/;
			Local_133.f_447.f_4 = 1818879/*__LIB_0__::func_467*/;
			return 1;
			break;
		case 6:
			Local_133.f_447 = 1818646/*func_5390*/;
			Local_133.f_447.f_1 = 1818637/*__LIB_0__::func_109*/;
			Local_133.f_447.f_2 = 1816891/*func_5386*/;
			Local_133.f_447.f_3 = 1815989/*func_5385*/;
			Local_133.f_447.f_4 = 1815981/*__LIB_0__::func_467*/;
			return 1;
			break;
		case 7:
			Local_133.f_447 = 1815924/*func_1286*/;
			Local_133.f_447.f_1 = 1815421/*func_5381*/;
			Local_133.f_447.f_2 = 715254/*func_1417*/;
			Local_133.f_447.f_3 = 714749/*func_1416*/;
			Local_133.f_447.f_4 = 714741/*__LIB_0__::func_467*/;
			return 1;
			break;
		case 1:
			Local_133.f_447 = 714732/*__LIB_0__::func_109*/;
			Local_133.f_447.f_1 = 714599/*func_1412*/;
			Local_133.f_447.f_2 = 713646/*func_1405*/;
			Local_133.f_447.f_3 = 712413/*func_1399*/;
			Local_133.f_447.f_4 = 712405/*__LIB_0__::func_467*/;
			return 1;
			break;
		case 2:
			Local_133.f_447 = 712396/*__LIB_0__::func_109*/;
			Local_133.f_447.f_1 = 712376/*func_1312*/;
			Local_133.f_447.f_2 = 658272/*func_1333*/;
			Local_133.f_447.f_3 = 657627/*func_1328*/;
			Local_133.f_447.f_4 = 657614/*func_1327*/;
			return 1;
			break;
		case 3:
			Local_133.f_447 = 657605/*__LIB_0__::func_109*/;
			Local_133.f_447.f_1 = 657585/*func_1312*/;
			Local_133.f_447.f_2 = 656170/*func_1317*/;
			Local_133.f_447.f_3 = 655812/*func_1316*/;
			Local_133.f_447.f_4 = 655804/*__LIB_0__::func_467*/;
			return 1;
			break;
		case 4:
			Local_133.f_447 = 655795/*__LIB_0__::func_109*/;
			Local_133.f_447.f_1 = 655636/*func_1312*/;
			Local_133.f_447.f_2 = 653594/*func_1304*/;
			Local_133.f_447.f_3 = 652551/*func_1295*/;
			Local_133.f_447.f_4 = 652543/*__LIB_0__::func_467*/;
			return 1;
			break;
		case 9:
			Local_133.f_447 = 652486/*func_1286*/;
			Local_133.f_447.f_1 = 652472/*func_1292*/;
			Local_133.f_447.f_2 = 652013/*func_1289*/;
			Local_133.f_447.f_3 = 651874/*func_1272*/;
			Local_133.f_447.f_4 = 651866/*__LIB_0__::func_467*/;
			return 1;
			break;
		case 10:
			Local_133.f_447 = 651809/*func_1286*/;
			Local_133.f_447.f_1 = 651795/*func_1285*/;
			Local_133.f_447.f_2 = 650592/*func_1274*/;
			Local_133.f_447.f_3 = 650424/*func_1272*/;
			Local_133.f_447.f_4 = 650416/*__LIB_0__::func_467*/;
			return 1;
	}
	return 0;
}

void func_1272(var uParam0, var uParam1)//Position - 0x9ECB8
{
	if (((!ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0]) || ENTITY::IS_ENTITY_DEAD(uParam1->f_28[0], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_33[0])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_33[0], false))
	{
		return;
	}
	if (!BitTest(uParam1->f_176[1], 0))
	{
		if (uParam0->f_377 > 500)
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam1->f_33[0], 0, 0);
			MISC::SET_BIT(&(uParam1->f_176[1]), 0);
		}
	}
	if (__LIB_3__::func_630(uParam0, 1))
	{
	}
}

void func_1274(int* iParam0, var uParam1)//Position - 0x9ED60
{
	struct<3> Var0;
	func_1279(iParam0, uParam1);
	if (uParam1->f_6)
	{
		return;
	}
	__LIB_0__::func_467(iParam0, uParam1);
	iParam0->f_18[0 /*36*/].f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], -1f, 5f, 3f) };
	iParam0->f_18[0 /*36*/].f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], -1f, 5.5f, 3.5f) };
	Var0 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(uParam1->f_28[0], true) - iParam0->f_18[0 /*36*/].f_1) };
	iParam0->f_18[0 /*36*/].f_7 = { __LIB_35__::func_917(Var0) };
	iParam0->f_18[0 /*36*/].f_10 = { iParam0->f_18[0 /*36*/].f_7 };
}

void func_1279(int* iParam0, var uParam1)//Position - 0x9EEBD
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	fVar0 = (uParam1->f_5 + 90f);
	fVar1 = (360f / 18f);
	fVar2 = 60f;
	iVar3 = SYSTEM::FLOOR((fVar0 / fVar1));
	iVar5 = -1;
	while (iVar4 < 18)
	{
		if ((iVar3 + iVar4) < 18)
		{
			if (BitTest(uParam1->f_176[0], (iVar3 + iVar4)))
			{
				iVar5 = (iVar3 + iVar4);
			}
			else if (iVar4 > 0 && (iVar3 - iVar4) >= 0)
			{
				if (BitTest(uParam1->f_176[0], (iVar3 - iVar4)))
				{
					iVar5 = (iVar3 - iVar4);
				}
				else
				{
					iVar4++;
				}
				if (iVar5 == -1)
				{
					iVar5 = 0;
				}
				Var6 = { uParam1->f_2 };
				Var7 = { uParam1->f_65[iVar5 /*3*/] };
				Var8 = { Var6 + Vector(1.5f, 0f, 0f) - Var7 };
				Var8 = { __LIB_0__::func_79(Var8) };
				Var9 = { __LIB_35__::func_917(Var8) };
				if (uParam1->f_6)
				{
				}
				func_1280(iParam0, 4500, "scene1", Var7, Var9, fVar2, Var7 + Vector(0f, 0f, 0f), Var9, fVar2, 0.2f, 0, 0, 0, 0, 0);
			}
void func_1280(int* iParam0, int iParam1, char* sParam2, struct<3> Param3, struct<3> Param4, float fParam5, struct<3> Param6, struct<3> Param7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x9EFDB
{
	if (iParam0->f_372 == iParam0->f_18)
	{
		return;
	}
	iParam0->f_18[iParam0->f_372 /*36*/] = iParam1;
	StringCopy(&(iParam0->f_18[iParam0->f_372 /*36*/].f_16), sParam2, 32);
	iParam0->f_18[iParam0->f_372 /*36*/].f_1 = { Param3 };
	iParam0->f_18[iParam0->f_372 /*36*/].f_7 = { Param4 };
	iParam0->f_18[iParam0->f_372 /*36*/].f_13 = fParam5;
	iParam0->f_18[iParam0->f_372 /*36*/].f_4 = { Param6 };
	iParam0->f_18[iParam0->f_372 /*36*/].f_10 = { Param7 };
	iParam0->f_18[iParam0->f_372 /*36*/].f_14 = fParam8;
	iParam0->f_18[iParam0->f_372 /*36*/].f_15 = fParam9;
	iParam0->f_18[iParam0->f_372 /*36*/].f_24 = iParam10;
	iParam0->f_18[iParam0->f_372 /*36*/].f_25 = iParam11;
	iParam0->f_18[iParam0->f_372 /*36*/].f_27 = iParam12;
	iParam0->f_18[iParam0->f_372 /*36*/].f_28 = iParam13;
	iParam0->f_18[iParam0->f_372 /*36*/].f_26 = iParam14;
	iParam0->f_394 = -1;
	iParam0->f_372++;
	iParam0->f_378 = (iParam0->f_378 + iParam1);
	MISC::CLEAR_BIT(iParam0, 0);
	MISC::CLEAR_BIT(iParam0, 1);
	__LIB_5__::func_704(iParam0, (iParam0->f_372 - 1));
}

int func_1285(var uParam0, var uParam1)//Position - 0x9F213
{
	uParam1->f_6 = 0;
	return 1;
}

int func_1286(var uParam0, var uParam1, var uParam2)//Position - 0x9F221
{
	uParam1->f_169[1] = 2f;
	uParam1->f_169[0] = 6f;
	uParam1->f_169[3] = 0f;
	uParam1->f_7[0] = joaat("insurgent2");
	uParam1->f_7[1] = joaat("prop_mil_crate_02");
	return 1;
}

void func_1289(int* iParam0, var uParam1)//Position - 0x9F2ED
{
	struct<3> Var0;
	func_1291(iParam0, uParam1);
	if (uParam1->f_6)
	{
		return;
	}
	__LIB_0__::func_467(iParam0, uParam1);
	iParam0->f_18[0 /*36*/].f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], -1f, 5f, 3f) };
	iParam0->f_18[0 /*36*/].f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], -1f, 5.5f, 3.5f) };
	Var0 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(uParam1->f_28[0], true) - iParam0->f_18[0 /*36*/].f_1) };
	iParam0->f_18[0 /*36*/].f_7 = { __LIB_35__::func_917(Var0) };
	iParam0->f_18[0 /*36*/].f_10 = { iParam0->f_18[0 /*36*/].f_7 };
}

void func_1291(int* iParam0, var uParam1)//Position - 0x9F39A
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	fVar0 = (uParam1->f_5 + 90f);
	fVar1 = (360f / 18f);
	fVar2 = 60f;
	iVar3 = SYSTEM::FLOOR((fVar0 / fVar1));
	iVar5 = -1;
	while (iVar4 < 18)
	{
		if ((iVar3 + iVar4) < 18)
		{
			if (BitTest(uParam1->f_176[0], (iVar3 + iVar4)))
			{
				iVar5 = (iVar3 + iVar4);
			}
			else if (iVar4 > 0 && (iVar3 - iVar4) >= 0)
			{
				if (BitTest(uParam1->f_176[0], (iVar3 - iVar4)))
				{
					iVar5 = (iVar3 - iVar4);
				}
				else
				{
					iVar4++;
				}
				if (iVar5 == -1)
				{
					iVar5 = 0;
				}
				Var6 = { uParam1->f_2 };
				Var7 = { uParam1->f_65[iVar5 /*3*/] };
				Var8 = { Var6 + Vector(1.5f, 0f, 0f) - Var7 };
				Var8 = { __LIB_0__::func_79(Var8) };
				Var9 = { __LIB_35__::func_917(Var8) };
				if (uParam1->f_6)
				{
				}
				func_1280(iParam0, 4500, "scene1", Var7, Var9, fVar2, Var7 + Vector(0f, 0f, 0f), Var9, fVar2, 0.2f, 0, 0, 0, 0, 0);
			}
int func_1292(var uParam0, var uParam1)//Position - 0x9F4B8
{
	uParam1->f_6 = 0;
	return 1;
}

void func_1295(var uParam0, int iParam1)//Position - 0x9F507
{
	struct<3> Var0;
	if (((!ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[0]) || ENTITY::IS_ENTITY_DEAD(iParam1->f_28[0], false)) || !ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[1])) || ENTITY::IS_ENTITY_DEAD(iParam1->f_28[1], false))
	{
		return;
	}
	if (!BitTest(iParam1->f_176[0], 1))
	{
		func_1303(iParam1);
		MISC::SET_BIT(&(iParam1->f_176[0]), 1);
	}
	if (__LIB_3__::func_630(uParam0, 0))
	{
		__LIB_7__::func_66(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), &(iParam1->f_169[1]), &(iParam1->f_176[0]), 3, 4);
	}
	if (uParam0->f_382 == 0)
	{
		if (!BitTest(iParam1->f_176[0], 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_28[0], __LIB_1__::func_576(iParam1->f_65[0 /*3*/], iParam1->f_65[2 /*3*/], iParam1->f_169[0]), false, false, true);
			iParam1->f_169[0] = (iParam1->f_169[0] + (MISC::GET_FRAME_TIME() * 0.2f));
			iParam1->f_169[0] = __LIB_0__::func_331(iParam1->f_169[0], 0f, 1f);
		}
		if (iParam1->f_169[0] >= 1f)
		{
			if (!BitTest(iParam1->f_176[0], 0))
			{
				func_1296(&(iParam1->f_28[1]));
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_28[0], true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_28[0], false);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam1->f_28[1], iParam1->f_28[0], false);
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_33[0]))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_28[0], true) + Vector(100f, 0f, 0f) };
					TASK::TASK_HELI_MISSION(iParam1->f_33[0], iParam1->f_28[0], 0, 0, Var0, 4, 5f, 0f, ENTITY::GET_ENTITY_HEADING(iParam1->f_28[0]), 40, 40, -1f, 0);
				}
				MISC::SET_BIT(&(iParam1->f_176[0]), 0);
			}
		}
	}
}

void func_1296(var uParam0)//Position - 0x9F6C0
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	ENTITY::DETACH_ENTITY(*uParam0, true, true);
	VEHICLE::DETACH_VEHICLE_FROM_ANY_CARGOBOB(*uParam0);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, ENTITY::GET_ENTITY_COORDS(*uParam0, true), false, false, true);
}

void func_1303(var uParam0)//Position - 0x9F86A
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], uParam0->f_65[0 /*3*/], false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], uParam0->f_65[1 /*3*/].f_2);
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 1.8f, -3.5f) };
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[1], Var0, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_28[1], ENTITY::GET_ENTITY_HEADING(uParam0->f_28[0]));
		VEHICLE::ATTACH_VEHICLE_TO_CARGOBOB(uParam0->f_28[0], uParam0->f_28[1], -1, 0f, 0f, -6f);
	}
}

void func_1304(int* iParam0, int iParam1)//Position - 0x9F91A
{
	func_1309(iParam0, iParam1);
	func_1308(iParam0, iParam1);
	func_1305(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), &(iParam1->f_58[2]), 0f);
	__LIB_6__::func_812(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), 0f);
}

int func_1305(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x9F95E
{
	struct<4> Var0;
	struct<4> Var1;
	struct<2> Var2;
	struct<3> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 1;
	}
	Var0 = { __LIB_6__::func_395(iParam0, 0, 0) };
	Var1 = { __LIB_6__::func_395(iParam0, 1, 0) };
	Var2 = { __LIB_4__::func_711(iParam0) };
	if (__LIB_4__::func_710(uParam1, Var2.f_0, Var0, Var0.f_3) && __LIB_4__::func_710(uParam2, Var2.f_1, Var1, Var1.f_3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var3 = { ENTITY::GET_ENTITY_ROTATION(*uParam1, 2) };
			fParam3 = fParam3;
			ENTITY::SET_ENTITY_ROTATION(*uParam1, Var3, 2, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam2, true);
			ENTITY::SET_ENTITY_DYNAMIC(*uParam2, false);
		}
		return 1;
	}
	return 0;
}

void func_1308(int* iParam0, int iParam1)//Position - 0x9FACF
{
	struct<6> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<6> Var3;
	Var0 = { __LIB_4__::func_696(70) };
	Var0 = { 494.004f, 3015.45f, 40.0526f };
	Var1 = { 501.6803f, 3020.382f, 41.8505f };
	Var1.f_3 = { 3.5562f, 1.9116f, 131.7382f };
	Var2 = { 502.5309f, 3020.28f, 41.2853f };
	Var2.f_3 = { 2.498f, 1.9116f, 127.4071f };
	Var3 = { __LIB_4__::func_696(__LIB_10__::func_798(iParam1)) };
	Var3 = { __LIB_19__::func_397(*iParam1) };
	Var1 = { __LIB_5__::func_990(Var0, Var1, Var3, 0) };
	Var2 = { __LIB_5__::func_990(Var0, Var2, Var3, 0) };
	func_1280(iParam0, 8000, "HeliDropOff", Var1, Var1.f_3, 39.7354f, Var2, Var2.f_3, 39.7354f, 0.2f, 0, 0, 0, 0, 0);
}

void func_1309(var uParam0, int iParam1)//Position - 0x9FBBC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iParam1->f_28[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iParam1->f_28[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
	{
		if (__LIB_35__::func_912(iParam1->f_1))
		{
			iVar1 = iParam1->f_1;
			if (__LIB_17__::func_833(&(iParam1->f_28[0]), iParam1->f_1, 0f, 10f, 0f, 0f, 0, 0))
			{
			}
			iVar2 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iParam1->f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					iVar0 = iVar3;
					if (__LIB_17__::func_833(&(iParam1->f_28[1]), iVar3, 0f, 10f, 0f, 0f, 0, 0))
					{
					}
				}
			}
		}
		else
		{
			iVar0 = iParam1->f_1;
			if (__LIB_17__::func_833(&(iParam1->f_28[1]), iParam1->f_1, 0f, 10f, 0f, 0f, 0, 0))
			{
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iParam1->f_1))
			{
				iVar4 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam1->f_1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					iVar5 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar4);
					if (ENTITY::DOES_ENTITY_EXIST(iVar5))
					{
						iVar1 = iVar5;
						if (__LIB_17__::func_833(&(iParam1->f_28[0]), iVar5, 0f, 10f, 0f, 0f, 0, 0))
						{
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[1]) && ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[0]))
	{
		func_1311(&iVar1, &(iParam1->f_28[0]), &(iParam1->f_33), 0, 0, 0, 0, 0, 1);
		func_1311(&iVar0, &(iParam1->f_28[1]), &(iParam1->f_44), 0, 0, 0, 0, 0, 1);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1->f_28[0]);
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(iParam1->f_28[0], 0f);
		VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(iParam1->f_28[0], 0);
		VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(iParam1->f_28[0], 0.5f, 0.5f, true);
		ENTITY::SET_ENTITY_COLLISION(iParam1->f_28[1], false, false);
		ENTITY::SET_ENTITY_COLLISION(iParam1->f_28[0], false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_28[0], true);
	}
	func_1310(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, -1, false))
		{
			iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar6))
			{
				if (iVar6 == PLAYER::PLAYER_PED_ID())
				{
					TASK::TASK_HELI_MISSION(PLAYER::PLAYER_PED_ID(), iVar1, 0, 0, iParam1->f_65[4 /*3*/], 4, 30f, 0f, ENTITY::GET_ENTITY_HEADING(iVar1), 10, 10, -1f, 0);
				}
			}
		}
	}
}

void func_1310(int iParam0)//Position - 0x9FE0C
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	struct<4> Var4;
	struct<4> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	Var0 = { __LIB_19__::func_397(*iParam0) };
	fVar1 = 0f;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_28[1]))
	{
		fVar1 = __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iParam0->f_28[1]));
	}
	fVar2 = 1.338212f;
	Var3 = { 494.004f, 3015.45f, 40.0526f };
	Var4 = { Var3.f_0, Var3.f_1, 44.8f };
	Var4.f_3 = { 0f, 0f, 148.2f };
	Var5 = { Var3.f_0, Var3.f_1, 43.9f };
	Var5.f_3 = { 0f, 0f, 148.2f };
	Var6 = { Var3.f_0, Var3.f_1, 48f };
	fVar7 = (MISC::ABSF(((Var4.f_2 - Var3.f_2) - fVar2)) + fVar1);
	fVar8 = (MISC::ABSF(((Var5.f_2 - Var3.f_2) - fVar2)) + fVar1);
	fVar9 = (MISC::ABSF(((Var6.f_2 - Var3.f_2) - fVar2)) + fVar1);
	Var4 = { Var3.f_0, Var3.f_1, (Var0.f_2 + fVar7) };
	Var5 = { Var3.f_0, Var3.f_1, (Var0.f_2 + fVar8) };
	Var6 = { Var3.f_0, Var3.f_1, (Var0.f_2 + fVar9) };
	Var6 = { __LIB_5__::func_990(__LIB_4__::func_696(70), Var6, __LIB_4__::func_696(__LIB_10__::func_798(iParam0)), 0) };
	iParam0->f_65[4 /*3*/] = { Var6 };
	Var4 = { __LIB_5__::func_990(__LIB_4__::func_696(70), Var4, __LIB_4__::func_696(__LIB_10__::func_798(iParam0)), 0) };
	iParam0->f_65[0 /*3*/] = { Var4 };
	iParam0->f_65[1 /*3*/] = { Var4.f_3 };
	Var5 = { __LIB_5__::func_990(__LIB_4__::func_696(70), Var5, __LIB_4__::func_696(__LIB_10__::func_798(iParam0)), 0) };
	iParam0->f_65[2 /*3*/] = { Var5 };
	iParam0->f_65[3 /*3*/] = { Var5.f_3 };
}

int func_1311(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x9FFB0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar2 = 8;
	if (bParam7)
	{
		iVar2 = -1;
	}
	iVar0 = -1;
	while (iVar0 <= iVar2)
	{
		iVar1 = iVar0 + 1;
		iVar3 = iVar0;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar3, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && (__LIB_0__::func_121(iVar4) || bParam5))
			{
				if (bParam3 && !PED::IS_PED_A_PLAYER(iVar4))
				{
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
					{
						func_1188(uParam2[iVar1], iVar4, bParam8, bParam6);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (__LIB_0__::func_121((*uParam2)[iVar1]) || bParam5))
					{
						if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
						{
							if (bParam4)
							{
								return 0;
							}
						}
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (__LIB_0__::func_121(*uParam1))
							{
								ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
								PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
							}
						}
						if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
						{
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1312(var uParam0, var uParam1)//Position - 0xA0114
{
	if (__LIB_4__::func_712())
	{
		return 1;
	}
	return 0;
}

void func_1316(var uParam0, int iParam1)//Position - 0xA01C4
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	if (((!ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[0]) || ENTITY::IS_ENTITY_DEAD(iParam1->f_28[0], false)) || !ENTITY::DOES_ENTITY_EXIST(iParam1->f_33[0])) || ENTITY::IS_ENTITY_DEAD(iParam1->f_33[0], false))
	{
		return;
	}
	if (__LIB_3__::func_630(uParam0, 0))
	{
		__LIB_7__::func_66(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), &(iParam1->f_169[1]), &(iParam1->f_176[0]), 6, 4);
		if (uParam0->f_375 >= 250)
		{
			if (!BitTest(iParam1->f_176[0], 1))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1->f_28[0], false, false, false);
				MISC::SET_BIT(&(iParam1->f_176[0]), 1);
			}
		}
		if (uParam0->f_375 >= 600)
		{
			if (!BitTest(iParam1->f_176[0], 2))
			{
				iVar0 = 0;
				while (iVar0 < iParam1->f_33)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_33[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iParam1->f_33[iVar0], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_19__::func_397(*iParam1), 2f, -1, 1f, 0, 40000f);
						Var2 = { __LIB_4__::func_696(__LIB_10__::func_798(iParam1)) };
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var2, 2f, -1, 40000f, 0.5f);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(iParam1->f_33[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					iVar0++;
				}
				MISC::SET_BIT(&(iParam1->f_176[0]), 2);
			}
		}
	}
}

void func_1317(int* iParam0, int iParam1)//Position - 0xA032A
{
	func_1320(iParam0, iParam1);
	func_1318(iParam0, iParam1);
	func_1305(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), &(iParam1->f_58[2]), 0f);
	iParam1->f_169[1] = 0f;
	__LIB_6__::func_812(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), iParam1->f_169[1]);
}

void func_1318(int* iParam0, int iParam1)//Position - 0xA037C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[0]))
	{
		ENTITY::SET_ENTITY_COORDS(iParam1->f_28[0], __LIB_6__::func_768(__LIB_10__::func_798(iParam1), 3, 0), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iParam1->f_28[0], iParam1->f_5);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1->f_28[0]);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1->f_28[0], true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam1->f_28[0], false);
	}
}

void func_1320(int* iParam0, int iParam1)//Position - 0xA046D
{
	switch (__LIB_10__::func_798(iParam1))
	{
		case 77:
			func_1280(iParam0, 7500, "FootWalk", -785.5231f, 5941.774f, 26.745f, -12.7697f, 3.2326f, -86.9655f, 33.8837f, -787.0583f, 5941.6494f, 27.0939f, -12.7811f, 3.2346f, -86.9642f, 33.8837f, 0.2f, 0, 0, 0, 0, 0);
			break;
		default:
			func_1280(iParam0, 7500, "HeliLanding", 484.89f, 2994.4016f, 42.7021f, -5.2348f, -0.1971f, -23.9934f, 33.8837f, 485.5644f, 2995.6897f, 42.5849f, -4.4149f, -0.1971f, -21.6442f, 33.8837f, 0.2f, 0, 0, 0, 0, 0);
			func_1321(__LIB_10__::func_798(iParam1), iParam0, __LIB_4__::func_696(70), 0);
			break;
	}
}

void func_1321(int iParam0, int* iParam1, struct<6> Param2, int iParam3)//Position - 0xA0559
{
	__LIB_5__::func_912(iParam0, iParam1->f_372, &(iParam1->f_18), Param2, iParam3);
}

void func_1327(var uParam0, var uParam1)//Position - 0xA08CE
{
	VEHICLE::VEHICLE_SET_JET_WASH_FORCE_ENABLED(1);
}

void func_1328(var uParam0, int iParam1)//Position - 0xA08DB
{
	struct<3> Var0;
	if (iParam1->f_229 < 0)
	{
		iParam1->f_229 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_33[iParam1->f_229]) || ENTITY::IS_ENTITY_DEAD(iParam1->f_33[iParam1->f_229], false))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_33[0]))
	{
		__LIB_5__::func_911(__LIB_10__::func_798(iParam1), &(iParam1->f_33[iParam1->f_229]));
	}
	if (!BitTest(iParam1->f_176[0], 3))
	{
		VEHICLE::VEHICLE_SET_JET_WASH_FORCE_ENABLED(0);
		Var0 = { __LIB_6__::func_395(__LIB_10__::func_798(iParam1), 3, 0) };
		Var0 = { __LIB_19__::func_397(*iParam1) };
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1->f_33[iParam1->f_229]);
		ENTITY::SET_ENTITY_HEADING(iParam1->f_33[iParam1->f_229], Var0.f_3.f_2);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam1->f_33[iParam1->f_229], false, false);
		Var0 = { __LIB_4__::func_696(__LIB_10__::func_798(iParam1)) };
		if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
		{
			Global_1946250.f_3633 = 1;
			WEAPON::GIVE_WEAPON_TO_PED(iParam1->f_33[iParam1->f_229], joaat("WEAPON_MINIGUN"), 1, true, true);
			TASK::TASK_GO_STRAIGHT_TO_COORD(iParam1->f_33[iParam1->f_229], Var0, 2f, -1, 40000f, 0.5f);
		}
		else
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(iParam1->f_33[iParam1->f_229], Var0, 2f, -1, 40000f, 0.5f);
		}
		MISC::SET_BIT(&(iParam1->f_176[0]), 3);
	}
	if (__LIB_3__::func_630(uParam0, 0))
	{
		__LIB_7__::func_66(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), &(iParam1->f_169[1]), &(iParam1->f_176[0]), 6, 7);
	}
}

void func_1333(int* iParam0, int iParam1)//Position - 0xA0B60
{
	func_1395(iParam0, iParam1);
	func_1334(iParam0, iParam1);
	func_1305(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), &(iParam1->f_58[2]), 0f);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_58[1]))
	{
		__LIB_6__::func_812(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), iParam1->f_169[1]);
	}
}

void func_1334(int* iParam0, int iParam1)//Position - 0xA0BB8
{
	struct<3> Var0;
	Var0 = { __LIB_6__::func_395(__LIB_10__::func_798(iParam1), 3, 0) };
	Var0 = { __LIB_19__::func_397(*iParam1) };
	if (iParam1->f_229 < 0)
	{
		iParam1->f_229 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_33[iParam1->f_229]))
	{
		func_1336(&(iParam1->f_33[iParam1->f_229]), PLAYER::PLAYER_ID(), 0, 0);
	}
	if (__LIB_0__::func_121(iParam1->f_33[iParam1->f_229]))
	{
		ENTITY::SET_ENTITY_HEADING(iParam1->f_33[iParam1->f_229], Var0.f_3.f_2);
	}
	if (!__LIB_3__::func_525(iParam1->f_33[iParam1->f_229], Var0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam1->f_33[iParam1->f_229], Var0, true, false, false, true);
	}
	iParam1->f_169[1] = 0.15f;
}

int func_1336(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA0CC6
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_1188(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1337(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1337(var uParam0, int iParam1)//Position - 0xA0D24
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_3__::func_140(iParam1))
	{
		iVar0 = __LIB_7__::func_53(iParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_1341(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_5__::func_490(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1341(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xA0E43
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<14> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<7> Var35;
	struct<9> Var36;
	int iVar37;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_78200[iVar0] = -1;
		Global_78200.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar0] = -1;
		Global_78200.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 1711)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 334)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (__LIB_7__::func_886(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_3__::func_344(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!__LIB_3__::func_337(uParam0, &Global_78200))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						case 1:
							if (!bParam6)
							{
								PED::CLEAR_ALL_PED_PROPS(*uParam0);
								PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
								PED::REMOVE_PED_HELMET(*uParam0, true);
								if (bParam3)
								{
									PED::CLEAR_PED_WETNESS(*uParam0);
									PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
								}
								iVar6 = 0;
								iVar7 = PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 5);
								iVar8 = -1;
								iVar7 = iVar7;
								iVar8 = iVar8;
								if (__LIB_1__::func_608(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && bParam5)
								{
									Global_78200[5] = 0;
									if (Global_78200.f_13[5] == -1)
									{
										Global_78200.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (__LIB_3__::func_336(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_3__::func_336(uParam0->f_2) == 8 || __LIB_3__::func_336(uParam0->f_2) == 50) || __LIB_3__::func_336(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
										if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
										{
											if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
											{
												Global_78200[7] = 0;
												Global_78200.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 1, Global_78200[1], Global_78200.f_13[1]);
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("FORCE_PROP"), 0) && PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1) == Global_78200[1])
										{
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
											{
												if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
												{
													Global_78200[7] = 0;
													Global_78200.f_13[7] = 0;
												}
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_78200.f_26[1] = -1;
										Global_78200.f_26[2] = -1;
										Global_78200.f_26[0] = -1;
										if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
										{
											PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
										}
									}
								}
								__LIB_4__::func_984(*uParam0, &Global_78200, uParam0->f_8);
								if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 != -1 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && PLAYER::PLAYER_ID() != -1)
								{
									if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12179, 4))
									{
										if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 7 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
										{
											PED::SET_PED_HEAD_OVERLAY(*uParam0, 4, 0, 0f);
										}
									}
								}
								GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, "", "");
								bVar11 = false;
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_78200[iVar0] != -1)
									{
										if (iVar0 == 10 && iParam7 != -1)
										{
											iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_1__::func_526())
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
													}
													else
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
														PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
													}
												}
												else if (iParam7 == 2)
												{
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												}
												else
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
										}
										else
										{
											if (iVar0 == 1)
											{
											}
											else if (iVar0 == 2)
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
												bVar11 = true;
											}
											else if (Global_78200[iVar0] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(*uParam0, iVar0) || Global_78200.f_13[iVar0] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(*uParam0, iVar0, Global_78200[iVar0]))
											{
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
											if (iVar0 == 10)
											{
												iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
												{
													PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
												}
											}
										}
									}
									iVar0++;
								}
								if (!bVar11 && Global_78200[1] != -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
								}
								iVar0 = 0;
								while (iVar0 < Global_78200.f_26)
								{
									if (Global_78200.f_26[iVar0] != -1 && Global_78200.f_26[iVar0] != 255)
									{
										__LIB_0__::func_454(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
									}
									iVar0++;
								}
								if (*uParam0 == PLAYER::PLAYER_PED_ID())
								{
									if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(*uParam0, 8, joaat("SCUBA_GEAR")))
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 15, 0, 0, 0);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 3, 0, 0, 0);
										}
									}
								}
								if ((iVar6 && !bParam5) && *uParam0 == PLAYER::PLAYER_PED_ID())
								{
									__LIB_5__::func_722(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_1190(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_6__::func_38(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_348(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_3__::func_335(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_157(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_1350(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1350(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_354(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_1__::func_102(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_3__::func_334(*uParam0))
									{
										iVar13 = __LIB_3__::func_333(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_3__::func_334(*uParam0) && __LIB_3__::func_332(*uParam0))
									{
										iVar15 = __LIB_3__::func_333(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										func_277(*uParam0);
									}
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var17);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var17);
										}
										if (Global_78200[2] == Var17.f_3)
										{
											Global_78200[2] = -1;
										}
									}
									if (__LIB_3__::func_331(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_0__::func_454(*uParam0, 0, -1, 0);
											__LIB_0__::func_454(*uParam0, 1, -1, 0);
											__LIB_0__::func_454(*uParam0, 2, -1, 0);
											func_146(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
											PED::SET_PED_CONFIG_FLAG(*uParam0, 380, true);
										}
									}
									if (Global_78200[2] == -1)
									{
										if ((uParam0->f_8 != -1 && PLAYER::INT_TO_PLAYERINDEX(uParam0->f_8) != PLAYER::PLAYER_ID()) && !*uParam0 == PLAYER::PLAYER_PED_ID())
										{
											iVar18 = Global_2689235[uParam0->f_8 /*453*/].f_249;
											iVar19 = Global_2689235[uParam0->f_8 /*453*/].f_250;
											iVar20 = 1;
											func_146(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_360(2153, -1, 0);
											iVar19 = __LIB_1__::func_360(2160, -1, 0);
											if (__LIB_1__::func_342(161, -1))
											{
												iVar21 = __LIB_1__::func_360(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_463(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_462(iVar21);
													}
													if (iVar22 != -99 && iVar21 != iVar22)
													{
														iVar21 = iVar22;
													}
												}
												if (MISC::IS_PC_VERSION())
												{
													if (iVar1 == joaat("MP_M_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_463(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_462(iVar21);
														if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_146(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_146(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_157(0))
							{
								iVar25 = -1;
								if (uParam0->f_1 == 0)
								{
									bVar24 = false;
								}
								else
								{
									bVar24 = true;
									if (uParam0->f_1 == 1642)
									{
										iVar25 = Global_78200.f_46[0];
									}
								}
								if (uParam0->f_8 != -1)
								{
									func_1344(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_204(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_3__::func_330(iVar28, iParam8, &uVar26, &uVar27))
									{
										Global_78200.f_46[0] = uVar27;
									}
								}
								iVar29 = 0;
								while (iVar29 < Global_78200.f_46)
								{
									if (Global_78200.f_46[iVar29] != -1)
									{
										bVar30 = true;
									}
									iVar29++;
								}
								if (bVar30)
								{
									iVar37 = __LIB_0__::func_276(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_0__::func_445(&Var36, iVar31, iVar37, *uParam0, -1))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var36.f_5 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var36.f_8 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_260(*uParam0, Var36.f_4, Var36.f_5);
													}
												}
												iVar29++;
											}
										}
										iVar31++;
									}
									iVar32 = 0;
									while (iVar32 < iVar33)
									{
										if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar37, iVar32, &Var35))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var35.f_3 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var35.f_6 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_260(*uParam0, Var35.f_2, Var35.f_3);
													}
												}
												iVar29++;
											}
										}
										iVar32++;
									}
								}
							}
							PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
							__LIB_3__::func_329(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_157(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_3__::func_329(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_3__::func_329(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
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

void func_1344(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0xA2432
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar1 = __LIB_0__::func_276(iParam0);
		bVar2 = func_248(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_239(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_0__::func_445(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar5++;
		}
		if (BitTest((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
				{
					iVar9 = (129 + iVar6);
					if ((iVar9 / 32) >= *uParam1)
					{
					}
					else if (BitTest((*uParam1)[(iVar9 / 32)], (iVar9 % 32)))
					{
						if (__LIB_2__::func_998(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_260(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

void func_1350(int iParam0, int iParam1, int iParam2)//Position - 0xA29D8
{
	struct<37> Var0;
	int iVar1;
	int iVar2;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar1 = -1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		Var0[iVar2] = -1;
		Var0.f_13[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_26)
	{
		Var0.f_26[iVar2] = -1;
		Var0.f_36[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_46)
	{
		Var0.f_46[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_3__::func_376(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1351(iParam0);
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_3__::func_336(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_3__::func_336(iVar1) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
				{
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_293(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0), 100f);
		}
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (Var0[iVar2] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Var0[iVar2], Var0.f_13[iVar2], 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Var0.f_26)
		{
			if (Var0.f_26[iVar2] != -1 && Var0.f_26[iVar2] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar2, Var0.f_26[iVar2], Var0.f_36[iVar2], true);
			}
			iVar2++;
		}
	}
}

void func_1351(int iParam0)//Position - 0xA2BE4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1352(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1352(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA2C79
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78200[iVar1] = -1;
		Global_78200.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar1] = -1;
		Global_78200.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (__LIB_3__::func_376(iParam0, &Global_78200, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78200[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_78200[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_78200.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78200.f_26)
		{
			if (Global_78200.f_26[iVar1] != -1 && Global_78200.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_78200.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_78200.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_157(0))
			{
				if (__LIB_1__::func_342(161, -1))
				{
					func_146(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_146(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					__LIB_2__::func_996(iParam0, -1);
				}
			}
			__LIB_1__::func_207(0);
			__LIB_2__::func_467(1, 2);
		}
	}
}

void func_1395(int* iParam0, int iParam1)//Position - 0xADDCC
{
	switch (__LIB_10__::func_798(iParam1))
	{
		case 77:
			func_1280(iParam0, 6000, "FootWalk", -786.3041f, 5942.508f, 25.7017f, -10.7832f, 3.9191f, -96.4628f, 26.3121f, -788.3798f, 5941.6733f, 26.0063f, -10.8632f, 3.9051f, -96.4165f, 26.3121f, 0.2f, 0, 0, 0, 0, 0);
			break;
		default:
			func_1280(iParam0, 6000, "FootWalk", 490.5495f, 2987.0044f, 47.8364f, -14.572f, 1.5f, 8.4403f, 26.3121f, 488.4669f, 2986.598f, 47.9218f, -16.12f, 1.5f, 8.4403f, 26.3121f, 0.2f, 0, 0, 0, 0, 0);
			func_1321(__LIB_10__::func_798(iParam1), iParam0, __LIB_4__::func_696(70), 0);
			break;
	}
}

void func_1399(var uParam0, int iParam1)//Position - 0xADEDD
{
	int iVar0;
	bool bVar1;
	if (((!ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[0]) || ENTITY::IS_ENTITY_DEAD(iParam1->f_28[0], false)) || !ENTITY::DOES_ENTITY_EXIST(iParam1->f_33[0])) || ENTITY::IS_ENTITY_DEAD(iParam1->f_33[0], false))
	{
		return;
	}
	if (!BitTest(iParam1->f_176[0], 2))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_28[0], false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam1->f_28[0], 5f);
		MISC::SET_BIT(&(iParam1->f_176[0]), 2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[0]))
	{
		__LIB_5__::func_911(__LIB_10__::func_798(iParam1), &(iParam1->f_28[0]));
	}
	iVar0 = 0;
	while (iVar0 < iParam1->f_33)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_33[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_33[iVar0], false))
			{
				__LIB_5__::func_911(__LIB_10__::func_798(iParam1), &(iParam1->f_33[iVar0]));
			}
		}
		iVar0++;
	}
	if (__LIB_3__::func_630(uParam0, 0))
	{
		__LIB_7__::func_66(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), &(iParam1->f_169[1]), &(iParam1->f_176[0]), 6, 7);
		if (uParam0->f_375 >= 500)
		{
			if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1->f_28[0]))
			{
				if (!BitTest(iParam1->f_176[0], 3))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_4__::func_702(__LIB_10__::func_798(iParam1))))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam1->f_33[0], iParam1->f_28[0], __LIB_4__::func_702(__LIB_10__::func_798(iParam1)), 262144, 0, 0, -1, -1f, false, 2f);
					}
					MISC::SET_BIT(&(iParam1->f_176[0]), 3);
				}
				if (__LIB_3__::func_690(iParam1->f_28[0]))
				{
					__LIB_7__::func_33(__LIB_10__::func_798(iParam1), &(iParam1->f_28[0]));
				}
				else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1->f_28[0]))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1->f_28[0], 5f);
				}
			}
		}
	}
	bVar1 = BitTest(iParam1->f_176[0], 4);
	__LIB_4__::func_700(&(iParam1->f_28[0]), ENTITY::GET_ENTITY_COORDS(iParam1->f_58[1], true), &(iParam1->f_169[0]), &bVar1);
	if (bVar1)
	{
		MISC::SET_BIT(&(iParam1->f_176[0]), 4);
	}
}

void func_1405(int* iParam0, int iParam1)//Position - 0xAE3AE
{
	func_1411(iParam0, iParam1);
	func_1406(iParam0, iParam1);
	func_1305(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), &(iParam1->f_58[2]), 0f);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_58[1]))
	{
		iParam1->f_169[1] = 0.4f;
		__LIB_6__::func_812(__LIB_10__::func_798(iParam1), &(iParam1->f_58[1]), iParam1->f_169[1]);
	}
}

void func_1406(int* iParam0, int iParam1)//Position - 0xAE412
{
	struct<6> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[0]))
	{
		if (__LIB_3__::func_690(iParam1->f_28[0]))
		{
			Var0 = { __LIB_6__::func_990(__LIB_10__::func_798(iParam1), 2, 0) };
		}
		else
		{
			Var0 = { __LIB_6__::func_395(__LIB_10__::func_798(iParam1), 2, 0) };
		}
		VEHICLE::SET_VEHICLE_STEER_FOR_BUILDINGS(iParam1->f_28[0], 0);
		__LIB_4__::func_703(&(iParam1->f_28[0]), Var0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
	{
		if (__LIB_3__::func_690(iParam1->f_1))
		{
			func_1407(&(iParam1->f_1), &(iParam1->f_28[1]));
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_28[1]))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iParam1->f_28[0], iParam1->f_28[1], 1f);
			}
		}
	}
}

int func_1407(int iParam0, var uParam1)//Position - 0xAE4C8
{
	int iVar0;
	struct<101> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam0, &iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (__LIB_17__::func_833(uParam1, iVar0, 10f, 10f, 15f, ENTITY::GET_ENTITY_HEADING(iVar0), 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					Var1.f_9 = 49;
					Var1.f_59 = 2;
					Var1.f_78 = -1;
					Var1.f_79 = -1;
					Var1.f_96 = -1;
					Var1.f_97 = 1;
					Var1.f_99 = 132;
					Var1.f_100 = -1;
					__LIB_9__::func_494(iVar0, &Var1);
					__LIB_16__::func_190(*uParam1, &Var1, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_1411(int* iParam0, int iParam1)//Position - 0xAE665
{
	struct<6> Var0;
	Var0 = { 494.615f, 3015.84f, 41.3727f };
	Var0.f_3 = { 0f, 0f, 54.899063f };
	switch (__LIB_10__::func_798(iParam1))
	{
		case 79:
			func_1280(iParam0, 7500, "BunkerDoorEntryTopDriver", -3028.11f, 3327.181f, 11.7936f, -2.3031f, -2.8682f, 78.1728f, 28.571f, -3026.424f, 3327.377f, 11.8872f, -2.4494f, -2.887f, 79.9032f, 28.571f, 0.2f, 0, 0, 0, 0, 0);
			break;
		default:
			func_1280(iParam0, 7500, "BunkerDoorEntryTopDriver", 522.3356f, 3029.9004f, 40.6795f, 4.5222f, 0f, 98.7932f, 28.571f, 521.2911f, 3028.657f, 40.7756f, 4.5222f, 0f, 106.3725f, 28.571f, 0.2f, 0, 0, 0, 0, 0);
			func_1321(__LIB_10__::func_798(iParam1), iParam0, Var0, 0);
			break;
	}
}

int func_1412(var uParam0, int iParam1)//Position - 0xAE767
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam1->f_1) == joaat("dloader"))
		{
			__LIB_0__::func_799(joaat("gr_prop_gr_rsply_crate04b"));
			if (!STREAMING::HAS_MODEL_LOADED(joaat("gr_prop_gr_rsply_crate04b")))
			{
				return 0;
			}
		}
	}
	if (!__LIB_5__::func_364(__LIB_10__::func_798(iParam1)))
	{
		return 0;
	}
	if (__LIB_4__::func_712())
	{
		return 1;
	}
	return 0;
}

void func_1416(var uParam0, var uParam1)//Position - 0xAE7FD
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (((!ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0]) || ENTITY::IS_ENTITY_DEAD(uParam1->f_28[0], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_33[0])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_33[0], false))
	{
		return;
	}
	if (!BitTest(uParam1->f_176[1], 0))
	{
		if (uParam0->f_377 > 500)
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam1->f_33[0], 0, 0);
			MISC::SET_BIT(&(uParam1->f_176[1]), 0);
		}
	}
	if (__LIB_3__::func_630(uParam0, 1))
	{
		if (!BitTest(uParam1->f_176[1], 3))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], -2f, -3.75f, 0f) };
			Var1 = { __LIB_0__::func_79(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0f, -3.75f, 0f) - Var0) };
			fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_33[0], Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_33[0], fVar2);
			MISC::SET_BIT(&(uParam1->f_176[1]), 3);
		}
		if (!BitTest(uParam1->f_176[1], 1) && uParam0->f_375 > 2000)
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(uParam1->f_33[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0.6f, -3.75f, 0f), 1f, 20000, ENTITY::GET_ENTITY_HEADING(uParam1->f_28[0]), 0.5f);
			TASK::TASK_LOOK_AT_COORD(uParam1->f_33[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0f, 0f, 1f), 3000, 0, 2);
			MISC::SET_BIT(&(uParam1->f_176[1]), 1);
		}
		if (!BitTest(uParam1->f_176[1], 2) && uParam0->f_375 > 3000)
		{
			uParam1->f_169[3] = (uParam1->f_169[3] + (1.4f * MISC::GET_FRAME_TIME()));
			uParam1->f_169[3] = __LIB_0__::func_331(uParam1->f_169[3], 0f, 1f);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam1->f_28[0], 5, 5, (1f - uParam1->f_169[3]));
			if (uParam1->f_169[3] >= 1f)
			{
				MISC::SET_BIT(&(uParam1->f_176[1]), 2);
			}
		}
	}
}

void func_1417(int* iParam0, var uParam1)//Position - 0xAE9F6
{
	struct<3> Var0;
	func_1419(iParam0, uParam1);
	if (uParam1->f_6)
	{
		return;
	}
	__LIB_0__::func_467(iParam0, uParam1);
	iParam0->f_18[1 /*36*/].f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0f, -3.5f, 0.8f) };
	iParam0->f_18[1 /*36*/].f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0f, -4.5f, 0.8f) };
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0f, 0f, 1f) };
	iParam0->f_18[1 /*36*/].f_7 = { __LIB_35__::func_917(__LIB_0__::func_79(Var0 - iParam0->f_18[1 /*36*/].f_1)) };
	iParam0->f_18[1 /*36*/].f_7.f_1 = -ENTITY::GET_ENTITY_ROLL(uParam1->f_28[0]);
	iParam0->f_18[1 /*36*/].f_10 = { iParam0->f_18[1 /*36*/].f_7 };
	VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam1->f_28[0], 5, false, true);
	iParam0->f_18[2 /*36*/].f_1 = { iParam0->f_18[1 /*36*/].f_4 };
	iParam0->f_18[2 /*36*/].f_4 = { iParam0->f_18[1 /*36*/].f_4 };
	iParam0->f_18[2 /*36*/].f_7 = { iParam0->f_18[1 /*36*/].f_7 };
	iParam0->f_18[2 /*36*/].f_10 = { iParam0->f_18[1 /*36*/].f_7 };
}

void func_1419(int* iParam0, var uParam1)//Position - 0xAEB2A
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	fVar0 = (uParam1->f_5 + 90f);
	fVar1 = (360f / 18f);
	fVar2 = 50f;
	iVar3 = SYSTEM::FLOOR((fVar0 / fVar1));
	iVar5 = -1;
	while (iVar4 < 18)
	{
		if ((iVar3 + iVar4) < 18)
		{
			if (BitTest(uParam1->f_176[0], (iVar3 + iVar4)))
			{
				iVar5 = (iVar3 + iVar4);
			}
			else if (iVar4 > 0 && (iVar3 - iVar4) >= 0)
			{
				if (BitTest(uParam1->f_176[0], (iVar3 - iVar4)))
				{
					iVar5 = (iVar3 - iVar4);
				}
				else
				{
					iVar4++;
				}
				if (iVar5 == -1)
				{
					uParam1->f_6 = 1;
					iVar5 = 0;
				}
				Var6 = { uParam1->f_2 };
				Var7 = { uParam1->f_65[iVar5 /*3*/] };
				func_1421(iParam0, "FOLLOW_THE_LEADER", -1);
				Var8 = { Var6 + Vector(1.5f, 0f, 0f) - Var7 };
				Var8 = { __LIB_0__::func_79(Var8) };
				Var9 = { __LIB_35__::func_917(Var8) };
				if (uParam1->f_6)
				{
					func_1420(*uParam1, &Var7, &Var9, &fVar2);
					uParam1->f_6 = 0;
				}
				func_1280(iParam0, 3500, "scene1", Var7, Var9, fVar2, Var7 + Vector(0f, 0f, 0f), Var9, 35f, 0.2f, 0, 0, 0, 0, 0);
				func_1280(iParam0, 5000, "scene2", 0f, 0f, 0f, 0f, 0f, 0f, 60f, 0f, 0f, 0f, 0f, 0f, 0f, 60f, 0.2f, 0, 0, 3, 3, 0);
				func_1280(iParam0, 400, "scene2", 0f, 0f, 0f, 0f, 0f, 0f, 60f, 0f, 0f, 0f, 0f, 0f, 0f, 60f, 0.2f, 0, 0, 0, 0, 0);
			}
void func_1420(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0xAECC7
{
	switch (iParam0)
	{
		case 72:
			*uParam1 = { -240.6769f, 2091.1418f, 149.0416f };
			*uParam2 = { -16.8195f, 0f, -148.7795f };
			*fParam3 = 50f;
			break;
		case 73:
			*uParam1 = { 2744.2717f, 2848.4612f, 48.6057f };
			*uParam2 = { -20.6121f, 0f, -94.4168f };
			*fParam3 = 50f;
			break;
		case 74:
			*uParam1 = { 3010.8225f, 3487.0269f, 82.9643f };
			*uParam2 = { -13.8797f, 0f, 121.4941f };
			*fParam3 = 50f;
			break;
		case 75:
			*uParam1 = { -2689.4912f, 3469.666f, 28.9f };
			*uParam2 = { -18.3763f, 0f, -113.0179f };
			*fParam3 = 50f;
			break;
		case 76:
			*uParam1 = { 1474.6542f, 3575.448f, 43.0862f };
			*uParam2 = { -11.6285f, 0f, -72.3609f };
			*fParam3 = 50f;
			break;
		case 77:
			*uParam1 = { -2407.2778f, 4267.554f, 18.1345f };
			*uParam2 = { -3.5704f, 0f, -59.8728f };
			*fParam3 = 50f;
			break;
		case 78:
			*uParam1 = { 2486.184f, 4319.179f, 50.5665f };
			*uParam2 = { -11.5855f, 0f, -141.3174f };
			*fParam3 = 50f;
			break;
		case 79:
			*uParam1 = { -1840.3151f, 4395.286f, 60.4985f };
			*uParam2 = { -12.9521f, 0f, 4.2585f };
			*fParam3 = 50f;
			break;
		case 80:
			*uParam1 = { -1553.7913f, 4511.643f, 30.384f };
			*uParam2 = { -9.6026f, 0f, 161.3975f };
			*fParam3 = 50f;
			break;
		case 81:
			*uParam1 = { -422.6879f, 6384.798f, 24.498f };
			*uParam2 = { -18.8113f, 0f, -113.7943f };
			*fParam3 = 50f;
			break;
		case 82:
			*uParam1 = { 1174.9204f, -3225.952f, 14.6373f };
			*uParam2 = { -18.8228f, 0f, -139.8902f };
			*fParam3 = 50f;
			break;
		case 83:
			*uParam1 = { 199.9098f, -3106.5261f, 17.8524f };
			*uParam2 = { -25.3981f, 0f, -150.1158f };
			*fParam3 = 50f;
			break;
		case 84:
			*uParam1 = { 290.8995f, -2870.5347f, 17.6846f };
			*uParam2 = { -33.5881f, 0f, -57.4045f };
			*fParam3 = 50f;
			break;
		case 85:
			*uParam1 = { 1654.142f, -2368.0044f, 104.5084f };
			*uParam2 = { -24.8413f, 0f, 96.3044f };
			*fParam3 = 50f;
			break;
		case 86:
			*uParam1 = { 868.8862f, -2458.9985f, 38.383f };
			*uParam2 = { -13.7167f, 0f, 43.0259f };
			*fParam3 = 50f;
			break;
		case 87:
			*uParam1 = { -1205.8557f, -2389.3716f, 24.8211f };
			*uParam2 = { -21.0412f, 0f, 103.3599f };
			*fParam3 = 50f;
			break;
		case 88:
			*uParam1 = { 920.9332f, -1751.7904f, 37.9878f };
			*uParam2 = { -13.5384f, 0f, 39.2778f };
			*fParam3 = 50f;
			break;
		case 89:
			*uParam1 = { 1751.1338f, -1553.691f, 124.7459f };
			*uParam2 = { -17.472f, 0f, 40.2432f };
			*fParam3 = 50f;
			break;
		case 90:
			*uParam1 = { 502.0954f, -1412.3597f, 37.8341f };
			*uParam2 = { -20.9308f, 0f, 40.9399f };
			*fParam3 = 50f;
			break;
		case 91:
			*uParam1 = { -133.8458f, -1363.0621f, 38.3665f };
			*uParam2 = { -17.6259f, 0f, 50.5273f };
			*fParam3 = 50f;
			break;
	}
}

void func_1421(var uParam0, char* sParam1, int iParam2)//Position - 0xAF0D2
{
	var uVar0;
	int iVar1;
	StringCopy(&(uParam0->f_2), sParam1, 64);
	if (iParam2 != -1)
	{
		uParam0->f_389 = 1;
		iVar1 = 0;
		if (__LIB_4__::func_947(PLAYER::PLAYER_ID()) && __LIB_0__::func_509() == 0)
		{
			iVar1 = 1;
		}
		func_1422(iParam2, &uVar0, &(uParam0->f_390), &(uParam0->f_393), iVar1);
	}
}

void func_1422(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0xAF11E
{
	struct<31> Var0;
	func_1423(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_1423(int iParam0, var uParam1, int iParam2)//Position - 0xAF13E
{
	func_5375(uParam1, iParam2);
	func_5369(uParam1, iParam2);
	func_5361(uParam1, iParam2);
	func_1424(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_1424(int iParam0, var uParam1, int iParam2)//Position - 0xAF16C
{
	switch (iParam0)
	{
		case 0:
			func_5290(uParam1, iParam2);
			break;
		case 1:
			func_5159(uParam1, iParam2);
			break;
		case 2:
			func_5082(uParam1, iParam2);
			break;
		case 3:
			func_5004(uParam1, iParam2);
			break;
		case 4:
			func_4862(uParam1, iParam2);
			break;
		case 5:
			func_4714(uParam1, iParam2);
			break;
		case 6:
			func_4650(uParam1, iParam2);
			break;
		case 7:
			func_4493(uParam1, iParam2);
			break;
		case 8:
			func_4330(uParam1, iParam2);
			break;
		case 9:
			func_4105(uParam1, iParam2);
			break;
		case 10:
			func_4027(uParam1, iParam2);
			break;
		case 11:
			func_3803(uParam1, iParam2);
			break;
		case 12:
			func_3666(uParam1, iParam2);
			break;
		case 13:
			func_3501(uParam1, iParam2);
			break;
		case 14:
			func_3351(uParam1, iParam2);
			break;
		case 15:
			func_3176(uParam1, iParam2);
			break;
		case 16:
			func_3066(uParam1, iParam2);
			break;
		case 17:
			func_2819(uParam1, iParam2);
			break;
		case 18:
			func_2725(uParam1, iParam2);
			break;
		case 19:
			func_2602(uParam1, iParam2);
			break;
		case 20:
			func_2348(uParam1, iParam2);
			break;
		case 21:
			func_2226(uParam1, iParam2);
			break;
		case 22:
			func_2057(uParam1, iParam2);
			break;
		case 23:
			func_1840(uParam1, iParam2);
			break;
		case 24:
			func_1425(uParam1, iParam2);
			break;
	}
}

void func_1425(var uParam0, int iParam1)//Position - 0xAF324
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 831702/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 831688/*__LIB_5__::func_448*/;
			break;
		case 1:
			uParam0->f_30 = 831592/*__LIB_5__::func_447*/;
			break;
		case 2:
			uParam0->f_31 = 830241/*__LIB_5__::func_446*/;
			break;
		case 3:
			uParam0->f_34 = 830012/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 830000/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 829990/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 829801/*__LIB_5__::func_200*/;
			break;
		case 38:
			uParam0->f_9 = 829754/*__LIB_7__::func_731*/;
			break;
		case 42:
			uParam0->f_10 = 829726/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 829417/*__LIB_4__::func_915*/;
			break;
		case 11:
			uParam0->f_11 = 829408/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 826764/*__LIB_9__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 826755/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 820068/*__LIB_9__::func_299*/;
			break;
		case 8:
			uParam0->f_37 = 819175/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 819058/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 819002/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 818849/*__LIB_5__::func_445*/;
			break;
		case 10:
			uParam0->f_27 = 818704/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 818622/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 816976/*__LIB_9__::func_814*/;
			break;
		case 16:
			uParam0->f_5 = 815779/*__LIB_9__::func_774*/;
			break;
		case 108:
			uParam0->f_55 = 775839/*__LIB_10__::func_76*/;
			break;
		case 17:
			uParam0->f_17 = 774351/*__LIB_9__::func_260*/;
			break;
		case 19:
			uParam0->f_17 = 774200/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 774175/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 773955/*__LIB_6__::func_934*/;
			break;
		case 21:
			uParam0->f_3 = 773640/*__LIB_9__::func_313*/;
			break;
		case 74:
			uParam0->f_53 = 773536/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 772527/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 772425/*__LIB_5__::func_432*/;
			break;
		case 23:
			uParam0->f_26 = 772382/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 772348/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 772340/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 769820/*func_1625*/;
			break;
		case 27:
			uParam0->f_25 = 769812/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 769804/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 769654/*__LIB_5__::func_710*/;
			break;
		case 31:
			uParam0->f_39 = 769431/*__LIB_5__::func_709*/;
			break;
		case 33:
			uParam0->f_40 = 768513/*__LIB_7__::func_49*/;
			break;
		case 32:
			*uParam0 = 768458/*__LIB_6__::func_932*/;
			break;
		case 76:
			uParam0->f_13 = 768447/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 764695/*__LIB_6__::func_931*/;
			break;
		case 36:
			uParam0->f_58 = 764650/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 743645/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 743636/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 743627/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 743619/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 743596/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 743550/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 743418/*__LIB_4__::func_910*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 742247/*__LIB_6__::func_930*/;
			break;
		case 49:
			uParam0->f_8 = 742229/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 741880/*func_1580*/;
			break;
		case 51:
			*uParam0 = 741778/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 741767/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 741641/*func_1577*/;
			break;
		case 54:
			uParam0->f_45 = 741254/*func_1576*/;
			break;
		case 56:
			uParam0->f_46 = 741235/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 740065/*func_1569*/;
			break;
		case 58:
			uParam0->f_13 = 739939/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 739342/*func_1560*/;
			break;
		case 60:
			*uParam0 = 739333/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 739322/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 739196/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 739188/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 739174/*func_1555*/;
			break;
		case 64:
			uParam0->f_47 = 739166/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 737623/*__LIB_7__::func_47*/;
			break;
		case 66:
			uParam0->f_21 = 736932/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 736792/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 735587/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 735578/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 735566/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 735557/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 735545/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 735098/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 735089/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 732863/*func_1513*/;
			break;
		case 87:
			uParam0->f_1 = 730034/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 730025/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 730017/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 729168/*__LIB_7__::func_0*/;
			break;
		case 91:
			uParam0->f_1 = 729134/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 727443/*__LIB_7__::func_864*/;
			break;
		case 94:
			uParam0->f_1 = 725477/*__LIB_7__::func_875*/;
			break;
		case 95:
			uParam0->f_22 = 725390/*__LIB_7__::func_883*/;
			break;
		case 96:
			uParam0->f_1 = 725381/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 725372/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 725363/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 725355/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 725347/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 725233/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 725175/*__LIB_5__::func_701*/;
			break;
		case 114:
			uParam0->f_16 = 724507/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 724498/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 724489/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 720073/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 720064/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 719937/*__LIB_7__::func_44*/;
			break;
		case 120:
			uParam0->f_19 = 719882/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 719416/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 719407/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 719399/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1513(int iParam0, var uParam1)//Position - 0xB2EBF
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
		{
			iVar0 = uParam1->f_262;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1518(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1311(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_632(iParam0, &Var1, &Var3, &fVar9, 1);
		__LIB_3__::func_632(iParam0, &Var2, &Var4, &fVar10, 0);
		__LIB_3__::func_631(iParam0, &Var5, &Var7, &fVar11, 1);
		__LIB_3__::func_631(iParam0, &Var6, &Var8, &fVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		func_1514(&(Global_1946250.f_3638), Var1, Var3, fVar9, Var2, Var4, fVar10, bVar13, Var5, Var7, fVar11, Var6, Var8, fVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_1514(int* iParam0, struct<3> Param1, struct<3> Param2, float fParam3, struct<3> Param4, struct<3> Param5, float fParam6, bool bParam7, struct<3> Param8, struct<3> Param9, float fParam10, struct<3> Param11, struct<3> Param12, float fParam13, bool bParam14, float fParam15, float fParam16)//Position - 0xB3031
{
	int iVar0;
	int iVar1;
	iVar0 = 5000;
	iVar1 = 3500;
	if (bParam14)
	{
		iVar1 = 2350;
	}
	if (bParam7)
	{
		iVar0 = 3750;
	}
	func_1280(iParam0, iVar0, "zoom_sustain", Param1, Param2, fParam3, Param4, Param5, fParam6, fParam15, 0, 0, 0, 0, 0);
	if (!bParam7)
	{
		func_1280(iParam0, iVar1, "above", Param8, Param9, fParam10, Param11, Param12, fParam13, fParam16, 0, 1000, 0, 0, 0);
	}
	return 1;
}

int func_1518(int iParam0, var uParam1, int iParam2)//Position - 0xB343B
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_703(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_703(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_703(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_17__::func_833(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_9__::func_494(*iParam0, &Var0);
			__LIB_16__::func_190(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_495(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_867(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			}
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, true, true, false);
			if (!__LIB_0__::func_703(iParam2, 32))
			{
				func_1311(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				func_1407(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_703(iParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (__LIB_0__::func_703(iParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

int func_1555(int iParam0)//Position - 0xB4766
{
	return func_1569(iParam0);
}

int func_1560(int iParam0)//Position - 0xB480E
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (__LIB_2__::func_159(0) && __LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
	{
		iVar0 = __LIB_0__::func_797();
	}
	if (!__LIB_3__::func_654(iVar0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(__LIB_1__::func_694(PLAYER::PLAYER_ID()), __LIB_3__::func_646(iParam0)) <= 200f || (__LIB_35__::func_914(iParam0) && __LIB_5__::func_776(iParam0)))
	{
		if (__LIB_4__::func_976(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
		if (__LIB_3__::func_648() == iParam0)
		{
			return 0;
		}
		if (__LIB_35__::func_914(iParam0))
		{
			return 1;
		}
		return func_1580(iParam0);
	}
	return 0;
}

int func_1569(int iParam0)//Position - 0xB4AE1
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	if (__LIB_35__::func_914(iParam0))
	{
		return 5;
	}
	if (__LIB_2__::func_50() && __LIB_3__::func_649(PLAYER::PLAYER_ID(), __LIB_3__::func_650(iParam0)))
	{
		return __LIB_1__::func_389(__LIB_5__::func_706(PLAYER::PLAYER_ID()));
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_649(__LIB_0__::func_797(), __LIB_3__::func_650(iParam0)))
	{
		return __LIB_1__::func_389(__LIB_5__::func_706(__LIB_0__::func_797()));
	}
	if (!__LIB_3__::func_649(PLAYER::PLAYER_ID(), __LIB_3__::func_650(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar0, 1, 1) && iVar0 != PLAYER::PLAYER_ID())
			{
				if (__LIB_3__::func_649(iVar0, __LIB_3__::func_650(iParam0)))
				{
					Var3 = { __LIB_1__::func_696(iVar0) };
					if (__LIB_0__::func_800(Var3))
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

void func_1576(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xB4F86
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_35__::func_914(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.4f);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else
	{
		if (*uParam3 == 1)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, false);
			HUD::SET_BLIP_SCALE(*uParam1, 1f);
			*uParam3 = 0;
		}
		bVar0 = false;
		if (!__LIB_3__::func_649(PLAYER::PLAYER_ID(), __LIB_3__::func_650(iParam0)) && __LIB_3__::func_649(__LIB_0__::func_797(), __LIB_3__::func_650(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_3__::func_649(iVar1, __LIB_3__::func_650(iParam0)))
					{
						Var3 = { __LIB_1__::func_696(iVar1) };
						if (__LIB_0__::func_800(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								iVar4 = joaat("FHQ_FRIEND");
								if (iVar4 != *uParam4)
								{
									*uParam4 = iVar4;
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "FHQ_FRIEND" /* GXT: Friend's Agency */);
								}
								bVar0 = true;
							}
							else
							{
								iVar2++;
							}
							if (!bVar0 && *uParam4 == joaat("FHQ_FRIEND"))
							{
								*uParam4 = joaat("BLIP_826");
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
							}
						}
Vector3 func_1577(int iParam0)//Position - 0xB5109
{
	switch (iParam0)
	{
		case 155:
			return 388.3036f, -74.6683f, 67.1805f;
			break;
		case 156:
			return -1016.5347f, -413.186f, 38.6161f;
			break;
		case 157:
			return -589.4908f, -707.4646f, 35.2844f;
			break;
		case 158:
			return -1039.0834f, -756.4792f, 18.8395f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_1580(int iParam0)//Position - 0xB51F8
{
	int iVar0;
	if (__LIB_4__::func_976(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if (__LIB_3__::func_648() == iParam0)
	{
		return 0;
	}
	if ((__LIB_4__::func_976(PLAYER::PLAYER_ID(), 1) || (__LIB_5__::func_424(PLAYER::PLAYER_ID()) && !__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))) || __LIB_2__::func_606())
	{
		if (!__LIB_35__::func_914(iParam0))
		{
			return 0;
		}
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		switch (iVar0)
		{
			case 192:
			case 190:
			case 167:
			case 168:
			case 178:
			case 188:
			case 225:
			case 226:
			case 229:
			case 230:
			case 233:
			case 237:
			case 271:
				return 0;
			}
		default:
	}
	if (__LIB_2__::func_159(0))
	{
		if (__LIB_3__::func_649(__LIB_0__::func_797(), __LIB_3__::func_650(iParam0)))
		{
			return 1;
		}
	}
	else if (__LIB_3__::func_649(PLAYER::PLAYER_ID(), __LIB_3__::func_650(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_1625(int iParam0, int iParam1)//Position - 0xBBF1C
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_3__::func_616();
	Var3 = { __LIB_3__::func_681(iParam0, iVar2) };
	if (__LIB_6__::func_934(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1632(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_3__::func_664(0);
			}
			else
			{
				__LIB_3__::func_664(1);
			}
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_49(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_0__::func_509());
			}
			__LIB_7__::func_830(iParam0, __LIB_0__::func_509());
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_0__::func_509());
			}
			__LIB_7__::func_830(iParam0, __LIB_0__::func_509());
		}
	}
	else
	{
		if (__LIB_2__::func_159(0))
		{
			if (iVar2 == 3 && __LIB_3__::func_494(__LIB_0__::func_797()) == iParam0)
			{
				__LIB_3__::func_664(1);
			}
		}
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1632(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xBC3DF
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<13> Var7;
	bool bVar8;
	iVar0 = -1;
	if (__LIB_1__::func_526())
	{
		iVar0 = __LIB_3__::func_680();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_679(iParam0)), 2f);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = iVar4;
		if (iVar2 == iVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[iVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_696(iVar5) };
						bVar8 = false;
						if (__LIB_3__::func_678(iVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_3__::func_106(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_1633(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_1633(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
						{
							*iParam3 = 1;
						}
					}
					if (*iParam3 && *iParam2)
					{
					}
					else
					{
						iVar4++;
					}
				}
int func_1633(bool bParam0)//Position - 0xBC61A
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

void func_1840(var uParam0, int iParam1)//Position - 0xCB0DF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 887887/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 887878/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 887799/*__LIB_5__::func_466*/;
			break;
		case 2:
			uParam0->f_31 = 887161/*__LIB_5__::func_715*/;
			break;
		case 3:
			uParam0->f_34 = 886895/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 886883/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 886784/*__LIB_4__::func_918*/;
			break;
		case 37:
			uParam0->f_18 = 886653/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 886606/*__LIB_6__::func_866*/;
			break;
		case 39:
			uParam0->f_11 = 886571/*__LIB_7__::func_734*/;
			break;
		case 41:
			uParam0->f_20 = 886452/*__LIB_9__::func_300*/;
			break;
		case 42:
			uParam0->f_10 = 886424/*__LIB_6__::func_865*/;
			break;
		case 11:
			uParam0->f_11 = 886414/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 884262/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 884253/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 881670/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 881662/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 881653/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 881644/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 881582/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 881501/*__LIB_9__::func_784*/;
			break;
		case 16:
			uParam0->f_5 = 881148/*__LIB_6__::func_940*/;
			break;
		case 108:
			uParam0->f_55 = 876715/*__LIB_10__::func_67*/;
			break;
		case 17:
			uParam0->f_17 = 875573/*__LIB_9__::func_261*/;
			break;
		case 19:
			uParam0->f_17 = 875547/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 875538/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 875407/*__LIB_6__::func_939*/;
			break;
		case 74:
			uParam0->f_53 = 875303/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 875287/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 875137/*__LIB_5__::func_463*/;
			break;
		case 23:
			uParam0->f_26 = 875129/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 867275/*func_1960*/;
			break;
		case 25:
			uParam0->f_23 = 866226/*func_1956*/;
			break;
		case 27:
			uParam0->f_25 = 866012/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 865974/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 865951/*__LIB_6__::func_864*/;
			break;
		case 30:
			uParam0->f_8 = 865192/*__LIB_5__::func_714*/;
			break;
		case 31:
			uParam0->f_39 = 865162/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 865048/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 864930/*__LIB_6__::func_863*/;
			break;
		case 76:
			uParam0->f_13 = 864881/*__LIB_4__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 856043/*__LIB_5__::func_459*/;
			break;
		case 36:
			uParam0->f_58 = 855995/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 844904/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 844895/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 844886/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 844878/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 844867/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 844750/*__LIB_4__::func_916*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 843920/*__LIB_8__::func_920*/;
			break;
		case 49:
			uParam0->f_8 = 843911/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 843742/*__LIB_6__::func_937*/;
			break;
		case 51:
			*uParam0 = 843733/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 843722/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 843699/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 843651/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 843633/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 843591/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 843549/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 843420/*__LIB_7__::func_779*/;
			break;
		case 60:
			*uParam0 = 843411/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 843400/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 843377/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 843368/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 843327/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 843319/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 843311/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 843040/*__LIB_5__::func_455*/;
			break;
		case 67:
			uParam0->f_21 = 842970/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 842298/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 842289/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 842277/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 842057/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 842045/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 841509/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 841466/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 840563/*func_1882*/;
			break;
		case 87:
			uParam0->f_1 = 837934/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 837925/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 837917/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 837908/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 837899/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 837890/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 837882/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 837874/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 837839/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 837830/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 835892/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 835883/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 835874/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 834653/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 834571/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 834554/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 834522/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 833386/*__LIB_9__::func_323*/;
			break;
		case 124:
			uParam0->f_1 = 833377/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 833369/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1882(int iParam0, var uParam1)//Position - 0xCD373
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_3__::func_616();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1518(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1311(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_752(iParam0, &Var2, &Var4, &fVar6, 1, iVar0);
		__LIB_3__::func_752(iParam0, &Var3, &Var5, &fVar7, 0, iVar0);
		func_1280(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, fVar6, Var3, Var5, fVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1956(int iParam0, int iParam1)//Position - 0xD37B2
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_3__::func_616();
	iVar4 = 0;
	Var5 = { __LIB_3__::func_780(iVar3) };
	func_1632(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_5__::func_189(iParam1, 0, 1);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				if (__LIB_3__::func_661(0, iParam1))
				{
					__LIB_3__::func_664(1);
				}
				break;
			default:
				__LIB_5__::func_189(iParam1, 0, !bVar2);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				__LIB_3__::func_664(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_5__::func_189(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_863(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_863(iParam0, -1);
			__LIB_3__::func_664(iVar4);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_781(iVar4, 1);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_781(iVar4, 1);
		}
	}
	else
	{
		__LIB_3__::func_664(iVar4);
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1960(var uParam0, var uParam1)//Position - 0xD3BCB
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (!__LIB_5__::func_797() && iVar0 != 1)
	{
		__LIB_3__::func_784(1);
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_49(uParam0, uParam1);
			break;
		case 1:
			func_1961(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1961(var uParam0, var uParam1)//Position - 0xD3C21
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4[3];
	var uVar5[3];
	char* sVar6;
	int iVar7;
	int iVar8;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar2 = __LIB_5__::func_208();
	func_1632(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_5__::func_207(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_3__::func_785() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_5__::func_462();
				if (bVar2)
				{
					__LIB_3__::func_664(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_5__::func_202(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_3__::func_770();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_5__::func_207(iVar8);
		if (__LIB_3__::func_782(iVar8, bVar0, bVar1))
		{
			iVar4[iVar7] = iVar8;
			if (!bVar3 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
			iVar7++;
		}
		else if (!bVar3)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
		}
		iVar8++;
	}
	if (uParam0->f_5 || bVar3)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_3__::func_566(1, sVar6, sVar6);
		__LIB_5__::func_270();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_10__::func_18(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_5__::func_462();
			if (bVar2)
			{
				__LIB_3__::func_664(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_5__::func_202(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_8__::func_958(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_5__::func_797();
		__LIB_5__::func_462();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

void func_2057(var uParam0, int iParam1)//Position - 0xD8C58
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 928210/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 928196/*__LIB_5__::func_475*/;
			break;
		case 1:
			uParam0->f_30 = 928105/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 927884/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 927727/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 927715/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 927705/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 927590/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 927543/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 927515/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 927427/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 927418/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 925673/*__LIB_9__::func_499*/;
			break;
		case 14:
			uParam0->f_11 = 925664/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 921591/*func_2202*/;
			break;
		case 8:
			uParam0->f_37 = 921114/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 921020/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 921011/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 920949/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 920868/*__LIB_9__::func_785*/;
			break;
		case 16:
			uParam0->f_5 = 919970/*__LIB_9__::func_264*/;
			break;
		case 108:
			uParam0->f_55 = 916690/*__LIB_10__::func_68*/;
			break;
		case 17:
			uParam0->f_17 = 915445/*__LIB_9__::func_263*/;
			break;
		case 19:
			uParam0->f_17 = 915419/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 915205/*__LIB_6__::func_944*/;
			break;
		case 21:
			uParam0->f_3 = 915141/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 915037/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 915021/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 914919/*__LIB_5__::func_471*/;
			break;
		case 23:
			uParam0->f_26 = 914911/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 910916/*func_2153*/;
			break;
		case 25:
			uParam0->f_23 = 910466/*func_2150*/;
			break;
		case 27:
			uParam0->f_25 = 910458/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 910450/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 909813/*__LIB_6__::func_942*/;
			break;
		case 31:
			uParam0->f_39 = 909679/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 908805/*__LIB_7__::func_8*/;
			break;
		case 32:
			*uParam0 = 908709/*__LIB_7__::func_7*/;
			break;
		case 76:
			uParam0->f_13 = 908556/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 906944/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 906899/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 897860/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 897851/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 897842/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 897834/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 897811/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 897762/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 897625/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 897607/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 896775/*__LIB_7__::func_835*/;
			break;
		case 51:
			*uParam0 = 896673/*__LIB_5__::func_716*/;
			break;
		case 52:
			uParam0->f_15 = 896662/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 896509/*func_2107*/;
			break;
		case 54:
			uParam0->f_45 = 896276/*func_2106*/;
			break;
		case 56:
			uParam0->f_46 = 896267/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 895854/*__LIB_7__::func_6*/;
			break;
		case 58:
			uParam0->f_13 = 895701/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 895692/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 895683/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 895672/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 895661/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 895652/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 895644/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 894616/*__LIB_7__::func_51*/;
			break;
		case 66:
			uParam0->f_21 = 894396/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 894321/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 893632/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 893623/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 893611/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 893519/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 893507/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 893140/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 893131/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 892339/*func_2081*/;
			break;
		case 87:
			uParam0->f_1 = 890961/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 890952/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 890944/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 890935/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 890926/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 890917/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 890909/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 890901/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 890889/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 890880/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 835892/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 890871/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 890862/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 889642/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 889470/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 889461/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 889453/*__LIB_0__::func_467*/;
			break;
	}
}

int func_2081(int iParam0, var uParam1)//Position - 0xD9DB3
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1518(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1311(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_805(iParam0, &Var1, &Var3, &fVar5, 1);
		__LIB_3__::func_805(iParam0, &Var2, &Var4, &fVar6, 0);
		func_1280(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, fVar5, Var2, Var4, fVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_2106(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xDAD14
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_3__::func_809(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0)) && !__LIB_3__::func_809(__LIB_0__::func_797(), __LIB_3__::func_810(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_3__::func_809(iVar1, __LIB_3__::func_810(iParam0)) && __LIB_1__::func_688(iVar1))
				{
					Var3 = { __LIB_1__::func_696(iVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("AUT_SHP_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_FRIEND" /* GXT: Friend's Auto Shop */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("AUT_SHP_FRIEND"))
						{
							*uParam4 = joaat("AUT_SHP_EXT_T");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_EXT_T" /* GXT: Auto Shop */);
						}
					}
Vector3 func_2107(int iParam0)//Position - 0xDADFD
{
	switch (iParam0)
	{
		case 149:
			return 759.8774f, -677.6455f, 27.8356f;
			break;
		case 150:
			return -147.1386f, -1341.7018f, 28.9145f;
			break;
		case 151:
			return -171.7504f, -33.8705f, 51.256f;
			break;
		case 152:
			return 233.9541f, -1873.8497f, 25.5283f;
			break;
		case 153:
			return 489.2497f, -894.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_2150(int iParam0, int iParam1)//Position - 0xDE482
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_830(iParam0) };
	if (__LIB_6__::func_944(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1632(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_8(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_784(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_784(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2153(var uParam0, var uParam1)//Position - 0xDE644
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_2156(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_809(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_3__::func_810(*uParam0)))
	{
		__LIB_5__::func_218(uParam0, uParam1);
	}
	else
	{
		__LIB_3__::func_831(uParam1);
	}
}

void func_2156(var uParam0, var uParam1)//Position - 0xDE723
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_51(uParam0, uParam1);
			break;
		case 1:
			func_2169(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_758(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2169(var uParam0, var uParam1)//Position - 0xDF310
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1632(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
	bVar2 = (uVar0 || uVar1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = PLAYER::PLAYER_ID();
		bVar2 = false;
	}
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 0;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_922(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_8(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_2202(int iParam0, var uParam1, int iParam2)//Position - 0xE0FF7
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_3__::func_836(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 759.2274f, -676.1144f, 28.4832f };
						uParam1->f_22.f_16 = { 1.6526f, -0.0281f, 163.8247f };
						uParam1->f_22.f_20 = { 759.1586f, -676.3341f, 28.4767f };
						uParam1->f_22.f_23 = { -1.2492f, -0.0281f, 162.718f };
						uParam1->f_22.f_28 = { 758.865f, -677.805f, 27.851f };
						uParam1->f_22.f_31 = { 0f, 0f, -169.56f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.9236f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.9236f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 762.6814f, -670.9703f, 29.2607f };
						uParam1->f_22.f_16 = { -2.2932f, 0f, 155.9849f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 761.751f, -671.6803f, 29.2137f };
						uParam1->f_22.f_23 = { -2.2932f, 0f, 142.145f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 758.817f, -675.19f, 27.859f };
						uParam1->f_22.f_31 = { 0f, 0f, 86.76f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
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
		case 150:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { -148.8068f, -1342.0701f, 30.7246f };
						uParam1->f_22.f_16 = { -34.2644f, -0.0028f, -60.8442f };
						uParam1->f_22.f_20 = { -148.5539f, -1341.93f, 30.5286f };
						uParam1->f_22.f_23 = { -29.8713f, -0.0028f, -66.758f };
						uParam1->f_22.f_28 = { -147.294f, -1341.401f, 29.079f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 32.2852f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 32.2852f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -141.0062f, -1343.925f, 30.1565f };
						uParam1->f_22.f_16 = { -1.2453f, 0f, 70.4482f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -141.8038f, -1342.8387f, 30.1565f };
						uParam1->f_22.f_23 = { -1.4974f, 0f, 68.1876f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -144.657f, -1340.95f, 29.104f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
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
		case 151:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { -171.5194f, -36.1929f, 51.856f };
						uParam1->f_22.f_16 = { -3.0092f, -0.0019f, 21.9527f };
						uParam1->f_22.f_20 = { -171.757f, -35.6036f, 51.825f };
						uParam1->f_22.f_23 = { 0.3106f, -0.0019f, 21.9527f };
						uParam1->f_22.f_28 = { -172.462f, -33.763f, 51.213f };
						uParam1->f_22.f_31 = { 0f, 0f, 166.32f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 27.0608f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 27.0608f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -168.9393f, -35.3119f, 53.2555f };
						uParam1->f_22.f_16 = { -6.5936f, 0f, 28.147f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -169.9362f, -34.4523f, 53.1079f };
						uParam1->f_22.f_23 = { -5.7999f, 0f, 21.853f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -171.681f, -31.278f, 51.263f };
						uParam1->f_22.f_31 = { 0f, 0f, 66.96f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
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
		case 152:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 232.6328f, -1874.2069f, 26.443f };
						uParam1->f_22.f_16 = { -21.7924f, 0.0013f, -18.5176f };
						uParam1->f_22.f_20 = { 232.7041f, -1873.9943f, 26.4045f };
						uParam1->f_22.f_23 = { -8.5978f, 0.0013f, -18.5176f };
						uParam1->f_22.f_28 = { 233.075f, -1873.188f, 25.563f };
						uParam1->f_22.f_31 = { -4.32f, 0f, 167.76f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.3225f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.3225f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 235.8221f, -1874.9221f, 26.8194f };
						uParam1->f_22.f_16 = { -3.3056f, 0f, 105.796f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 234.5172f, -1874.7244f, 26.7432f };
						uParam1->f_22.f_23 = { -3.3056f, 0f, 115.5265f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 231.176f, -1875.411f, 25.388f };
						uParam1->f_22.f_31 = { 0f, 0f, 44.28f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
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
		case 153:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 488.4486f, -893.36f, 25.3835f };
						uParam1->f_22.f_16 = { -0.6473f, 0.0003f, 172.6925f };
						uParam1->f_22.f_20 = { 488.4122f, -893.6423f, 25.3794f };
						uParam1->f_22.f_23 = { 0.1603f, 0.0201f, 172.7169f };
						uParam1->f_22.f_28 = { 488.413f, -895.15f, 24.75f };
						uParam1->f_22.f_31 = { 0f, 0f, -180f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 33.1011f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 33.1011f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 491.9715f, -894.7998f, 26.1521f };
						uParam1->f_22.f_16 = { -3.0471f, 0f, 145.4612f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 490.8015f, -895.3118f, 26.0841f };
						uParam1->f_22.f_23 = { -1.2604f, 0f, 144.274f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 488.463f, -897.537f, 24.813f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_22.f_5) && MISC::GET_HASH_KEY(uParam1->f_22.f_5) != joaat("buzz_short"))
	{
		if (iParam2 == 0)
		{
			uParam1->f_22.f_42 = 1;
		}
		else
		{
			if (!__LIB_2__::func_159(1) || (__LIB_2__::func_50() && __LIB_3__::func_809(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0))))
			{
				func_1632(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_8__::func_922(iParam0))
			{
				uParam1->f_22.f_42 = 1;
			}
			else
			{
				uParam1->f_22.f_42 = 0;
			}
		}
	}
	else
	{
		uParam1->f_22.f_42 = 0;
	}
}

void func_2226(var uParam0, int iParam1)//Position - 0xE29DB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 944620/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 944611/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 944544/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 944104/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 943956/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 943944/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 943729/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 943640/*__LIB_6__::func_870*/;
			break;
		case 39:
			uParam0->f_11 = 943620/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 943515/*__LIB_6__::func_869*/;
			break;
		case 41:
			uParam0->f_20 = 943490/*__LIB_5__::func_228*/;
			break;
		case 42:
			uParam0->f_10 = 943477/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 943413/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 943404/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 942867/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 942858/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 941909/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 941901/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 941892/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 941883/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 941821/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 941740/*__LIB_9__::func_786*/;
			break;
		case 16:
			uParam0->f_5 = 941413/*__LIB_9__::func_302*/;
			break;
		case 108:
			uParam0->f_55 = 941404/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 941392/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 941380/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 941338/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 941329/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 941281/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 941126/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 941117/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 941015/*__LIB_5__::func_481*/;
			break;
		case 23:
			uParam0->f_26 = 941007/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 940580/*func_2303*/;
			break;
		case 27:
			uParam0->f_25 = 940572/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 940564/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 940529/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 940499/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 940332/*__LIB_6__::func_868*/;
			break;
		case 76:
			uParam0->f_13 = 940309/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 936695/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 936650/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 933453/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 933444/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 933435/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 933427/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 933416/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 933254/*__LIB_5__::func_478*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 931982/*func_2276*/;
			break;
		case 49:
			uParam0->f_8 = 931973/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 931548/*__LIB_7__::func_869*/;
			break;
		case 51:
			*uParam0 = 931539/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 931528/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 931505/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 931497/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 931488/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 931475/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 931433/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 931424/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 931415/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 931404/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 931393/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 931384/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 931376/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 931368/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 930755/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 930685/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 929996/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 929987/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 929975/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 929966/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 929954/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 929945/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 929936/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 929927/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 929918/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 929909/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 929901/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 929892/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 929883/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 929874/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 929866/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 929858/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 929846/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 929837/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 835892/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 929828/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 929819/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 889642/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 929811/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 929802/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 929794/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2276(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xE388E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_3__::func_854();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 1:
			__LIB_5__::func_189(iParam3, 0, 0);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 1);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 3:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 2:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_6__::func_869(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_1632(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_5__::func_189(iParam3, 4, bVar1);
		__LIB_5__::func_189(iParam3, 5, bVar2);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 == 0)
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	bVar4 = false;
	if (__LIB_3__::func_661(0, iParam3) || __LIB_3__::func_661(1, iParam3))
	{
		if (iParam1 == 2 || iParam1 == 3)
		{
			bVar4 = true;
			MISC::CLEAR_BIT(&(iParam3->f_2), 1);
		}
		else
		{
			return;
		}
	}
	else if (__LIB_3__::func_661(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(4, iParam3) || __LIB_3__::func_661(5, iParam3))
	{
		iVar5 = __LIB_6__::func_945(__LIB_3__::func_661(4, iParam3));
		__LIB_3__::func_852(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_3__::func_845())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_5__::func_223())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_3__::func_768(iParam0, -1);
		}
	}
}

void func_2303(int iParam0, int iParam1)//Position - 0xE5A24
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_1632(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && Global_1946250.f_3606 != 148)
		{
			__LIB_6__::func_868(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_868(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_787();
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_787();
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2348(var uParam0, int iParam1)//Position - 0xE69F5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 988400/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 988345/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 987685/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 987558/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 987526/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 987515/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 987451/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 987428/*__LIB_5__::func_245*/;
			break;
		case 79:
			*uParam0 = 987419/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 987304/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 987208/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 987199/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 986809/*__LIB_8__::func_851*/;
			break;
		case 109:
			uParam0->f_56 = 986506/*__LIB_7__::func_741*/;
			break;
		case 15:
			uParam0->f_2 = 984539/*__LIB_7__::func_876*/;
			break;
		case 13:
			uParam0->f_2 = 984530/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 984521/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 984138/*__LIB_9__::func_2*/;
			break;
		case 108:
			uParam0->f_55 = 980223/*__LIB_9__::func_529*/;
			break;
		case 17:
			uParam0->f_17 = 979497/*__LIB_9__::func_267*/;
			break;
		case 19:
			uParam0->f_17 = 979471/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 979302/*__LIB_8__::func_925*/;
			break;
		case 21:
			uParam0->f_3 = 979239/*__LIB_5__::func_243*/;
			break;
		case 74:
			uParam0->f_53 = 979087/*__LIB_5__::func_242*/;
			break;
		case 22:
			uParam0->f_24 = 979006/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 978135/*func_2538*/;
			break;
		case 30:
			uParam0->f_8 = 976807/*__LIB_7__::func_837*/;
			break;
		case 31:
			uParam0->f_39 = 976229/*__LIB_8__::func_924*/;
			break;
		case 33:
			uParam0->f_40 = 974994/*__LIB_8__::func_963*/;
			break;
		case 14:
			uParam0->f_11 = 974985/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 972218/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 972165/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 966713/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 966704/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 966695/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 966687/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 966664/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 966614/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 966589/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 966551/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 966527/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 966516/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 966437/*__LIB_6__::func_874*/;
			break;
		case 54:
			uParam0->f_45 = 966429/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 966420/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 966410/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 966163/*__LIB_7__::func_737*/;
			break;
		case 64:
			uParam0->f_47 = 965170/*__LIB_9__::func_756*/;
			break;
		case 65:
			uParam0->f_21 = 963978/*__LIB_7__::func_870*/;
			break;
		case 66:
			uParam0->f_21 = 962908/*__LIB_7__::func_54*/;
			break;
		case 67:
			uParam0->f_21 = 962732/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 961072/*__LIB_7__::func_836*/;
			break;
		case 69:
			*uParam0 = 961063/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 961051/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 961042/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 961030/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 960674/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 960665/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 960013/*__LIB_9__::func_517*/;
			break;
		case 85:
			uParam0->f_1 = 959141/*func_2449*/;
			break;
		case 87:
			uParam0->f_1 = 957930/*__LIB_9__::func_525*/;
			break;
		case 88:
			uParam0->f_1 = 957910/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 957816/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 957685/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 957057/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 956290/*func_2431*/;
			break;
		case 94:
			uParam0->f_1 = 955738/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 955142/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 954784/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 954691/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 953845/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 951095/*func_2399*/;
			break;
		case 100:
			uParam0->f_22 = 947950/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 946790/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 946582/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 946142/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 946133/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 946023/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 945980/*__LIB_3__::func_870*/;
			break;
	}
}

int func_2399(var uParam0, var uParam1)//Position - 0xE8337
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_3__::func_894())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_5__::func_232())
	{
		func_1336(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_365(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_3__::func_903(Global_1946250.f_3377) };
			Var2 = { __LIB_3__::func_902(Global_1946250.f_3377) };
			sVar3 = __LIB_3__::func_888(0, 1);
			sVar4 = __LIB_3__::func_901(0, 1);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_3__::func_888(bVar0, 0);
			sVar4 = __LIB_3__::func_901(bVar0, 0);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], Global_1946250.f_4073.f_394, sVar3, sVar4, 1000f, -1000f, 0, 0, 1000f, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			MISC::SET_BIT(&(Global_1946250.f_5), 27);
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			return 1;
		}
	}
	else
	{
		Var6 = { uParam1->f_28 };
		Var7 = { uParam1->f_31 };
		iVar8 = -1;
		if (__LIB_3__::func_887(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_886(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			Var6 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
			Var7 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2) };
			func_1518(&iVar9, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_5__::func_489(uParam1->f_109);
			return 0;
		}
		__LIB_3__::func_882(1);
		if (__LIB_5__::func_488())
		{
			__LIB_5__::func_862(iVar8);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_28, uParam1->f_31, 2);
			iVar10 = 0;
			while (iVar10 < uParam1->f_219)
			{
				if (iVar10 < 3)
				{
					if (__LIB_0__::func_121(uParam1->f_176[iVar10]))
					{
						if (iVar10 == 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_228))
							{
								uParam1->f_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam1->f_218, uParam1->f_230, uParam1->f_176[iVar10], uParam1->f_228, false, 0);
							}
							__LIB_3__::func_896(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_3__::func_895(&Var6, &Var7, uParam1, iVar10);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_176[iVar10], Var6, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam1->f_176[iVar10], Var7, 2, true);
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar10]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar10], true, false);
						}
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_176[iVar10], Global_1946250.f_4073.f_394, uParam1->f_221[iVar10], uParam1->f_3, 1000f, -1000f, 0, 1000f);
					}
				}
				iVar10++;
			}
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_109, Global_1946250.f_4073.f_394, uParam1->f_7, uParam1->f_3, 1000f, -1000f, 0, 1000f);
			}
			MISC::SET_BIT(&(Global_1946250.f_7), 29);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return 1;
		}
	}
	return 0;
}

int func_2431(var uParam0, var uParam1)//Position - 0xE9782
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_3__::func_616();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_3__::func_915();
	}
	__LIB_3__::func_914(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case joaat("seasparrow3"):
					iVar3 = 0;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
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
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && iVar2 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1518(&iVar2, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_5__::func_489(uParam1->f_109);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
			}
			if (iVar1 == joaat("stromberg") || iVar1 == joaat("toreador"))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(iVar1, uParam1->f_28, 0f, false, false, true);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_5__::func_489(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_1336(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_899())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_3__::func_890());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_5__::func_862(iVar3);
	__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_2449(int iParam0, var uParam1)//Position - 0xEA2A5
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_5__::func_236())
	{
		return 1;
	}
	if (__LIB_9__::func_315())
	{
		return 1;
	}
	iVar0 = __LIB_3__::func_616();
	iVar1 = __LIB_5__::func_493();
	Var2 = { __LIB_7__::func_791(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_1336(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_3__::func_921(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_736(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_1518(&iVar1, &(uParam1->f_109), 32);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_7__::func_790(iParam0, iVar0));
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && __LIB_0__::func_121(uParam1->f_109))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true) };
		Var4 = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_109, 2) };
		iVar5 = __LIB_3__::func_920(iParam0, iVar0);
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_2538(int iParam0, int iParam1)//Position - 0xEECD7
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_8__::func_925(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_3__::func_360(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_8__::func_963(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_8__::func_963(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2539(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2539(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_2539(int iParam0, bool bParam1)//Position - 0xEEF66
{
	__LIB_8__::func_963(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_5__::func_457(2);
	}
}

void func_2602(var uParam0, int iParam1)//Position - 0xF14F9
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1009456/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1009447/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1009380/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 1009054/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 1008893/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 1008881/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 1008817/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 1008808/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1008472/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 1008463/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1007727/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 1007719/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1007710/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1007701/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 1007689/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 1007680/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1007601/*__LIB_9__::func_787*/;
			break;
		case 16:
			uParam0->f_5 = 1007257/*__LIB_6__::func_950*/;
			break;
		case 108:
			uParam0->f_55 = 1007248/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1006738/*__LIB_6__::func_949*/;
			break;
		case 19:
			uParam0->f_17 = 1006684/*__LIB_6__::func_948*/;
			break;
		case 18:
			uParam0->f_8 = 1006596/*__LIB_5__::func_502*/;
			break;
		case 20:
			uParam0->f_3 = 1006576/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 1006549/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 1006527/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 1006518/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1006416/*__LIB_5__::func_501*/;
			break;
		case 23:
			uParam0->f_26 = 1006408/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1006400/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1005639/*func_2683*/;
			break;
		case 27:
			uParam0->f_25 = 1005631/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1005623/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1005512/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 1005463/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 1005394/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 1005371/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 1001298/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 1001241/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 995022/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 995013/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 995004/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 994996/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 994985/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 994881/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 993847/*__LIB_7__::func_839*/;
			break;
		case 49:
			uParam0->f_8 = 993838/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 993441/*__LIB_7__::func_742*/;
			break;
		case 51:
			*uParam0 = 993432/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 993422/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 993399/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 992905/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 992896/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 992887/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 992845/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 992836/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 992827/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 992816/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 992805/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 992796/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 992788/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 992780/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 992470/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 992400/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 991711/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 991702/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 991690/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 991681/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 991669/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 991660/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 991651/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 991642/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 991633/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 991624/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 991616/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 991591/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 991482/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 990771/*func_2613*/;
			break;
		case 100:
			uParam0->f_22 = 990107/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 989980/*__LIB_7__::func_877*/;
			break;
		case 112:
			uParam0->f_13 = 989968/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 989959/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 835892/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 989950/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 989941/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 889642/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 989933/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 989924/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 989916/*__LIB_0__::func_467*/;
			break;
	}
}

int func_2613(var uParam0, var uParam1)//Position - 0xF1E33
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { 1569.249f, 248.978f, -46.378f };
	Var1 = { 0f, 0f, 146.98f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1336(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

void func_2683(int iParam0, int iParam1)//Position - 0xF5847
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_251(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_3__::func_995(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_1633(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_1633(iVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_6__::func_880(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_7__::func_792(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_7__::func_792(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_2684())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_2684()//Position - 0xF5AD5
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_2725(var uParam0, int iParam1)//Position - 0xF6739
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1017769/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1017760/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1017689/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 1017451/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 1017400/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 1017388/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 1017324/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 1017315/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1016875/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 1016866/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1016192/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 1016184/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1016175/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1016166/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 1016104/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 1016024/*__LIB_9__::func_788*/;
			break;
		case 16:
			uParam0->f_5 = 1015655/*__LIB_6__::func_952*/;
			break;
		case 108:
			uParam0->f_55 = 1015646/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1015634/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 1015622/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1015613/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1015604/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1015582/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 1015573/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1015561/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 1015553/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1015545/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1015537/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 1015529/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1015521/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1015486/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 1015456/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 1015386/*__LIB_6__::func_881*/;
			break;
		case 76:
			uParam0->f_13 = 1015363/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 1015267/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 1015222/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1012709/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 1012700/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1012691/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1012683/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1012672/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1012632/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1012524/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 1012515/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1012312/*__LIB_6__::func_951*/;
			break;
		case 51:
			*uParam0 = 1012303/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1012292/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 1012269/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 1012261/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1012252/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1012239/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 1012197/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 1012188/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1012179/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1012168/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1012157/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1012148/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1012140/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1012132/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1011899/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 1011829/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1011140/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1011131/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1011119/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1011110/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1011098/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1011089/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1011080/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1011071/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 1011062/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 1011053/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1011045/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1011036/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1011027/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1011018/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 1011010/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1011002/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 1010990/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1010981/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 835892/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 1010972/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 1010963/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 889642/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 1010955/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 1010946/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 1010938/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2819(var uParam0, int iParam1)//Position - 0xF87B2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1096868/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1096854/*__LIB_5__::func_530*/;
			break;
		case 1:
			uParam0->f_30 = 1096698/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 1096216/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 1096017/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 1095895/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 1095885/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 1095747/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 1095702/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 1095618/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 1095524/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 1095515/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1094337/*__LIB_9__::func_526*/;
			break;
		case 14:
			uParam0->f_11 = 1094328/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 1087782/*__LIB_5__::func_731*/;
			break;
		case 8:
			uParam0->f_37 = 1087482/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 1087425/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 1087181/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 1087119/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 1087039/*__LIB_9__::func_789*/;
			break;
		case 16:
			uParam0->f_5 = 1086319/*__LIB_9__::func_270*/;
			break;
		case 108:
			uParam0->f_55 = 1083128/*__LIB_10__::func_69*/;
			break;
		case 17:
			uParam0->f_17 = 1080816/*__LIB_9__::func_269*/;
			break;
		case 19:
			uParam0->f_17 = 1080789/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 1080613/*__LIB_6__::func_885*/;
			break;
		case 21:
			uParam0->f_3 = 1080549/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1080445/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 1080429/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 1080326/*__LIB_5__::func_525*/;
			break;
		case 23:
			uParam0->f_26 = 1080279/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 1080242/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 1078199/*func_2998*/;
			break;
		case 25:
			uParam0->f_23 = 1077877/*func_2996*/;
			break;
		case 30:
			uParam0->f_8 = 1077020/*__LIB_6__::func_957*/;
			break;
		case 31:
			uParam0->f_39 = 1076882/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 1076310/*__LIB_6__::func_884*/;
			break;
		case 32:
			*uParam0 = 1076143/*__LIB_7__::func_15*/;
			break;
		case 34:
			uParam0->f_41 = 1073657/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 1073600/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 1046374/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 1046365/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1046356/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1046348/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1046325/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 1046253/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1046125/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 1046099/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 1045412/*__LIB_7__::func_841*/;
			break;
		case 51:
			*uParam0 = 1045158/*__LIB_6__::func_955*/;
			break;
		case 52:
			uParam0->f_15 = 1045147/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 1044985/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 1044461/*func_2960*/;
			break;
		case 56:
			uParam0->f_46 = 1044443/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 1044191/*__LIB_7__::func_14*/;
			break;
		case 58:
			uParam0->f_13 = 1044029/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 1043533/*func_2950*/;
			break;
		case 60:
			*uParam0 = 1043518/*func_2949*/;
			break;
		case 61:
			uParam0->f_15 = 1043507/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1043345/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 1043166/*func_2946*/;
			break;
		case 63:
			uParam0->f_11 = 1043139/*func_2945*/;
			break;
		case 64:
			uParam0->f_47 = 1041706/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 1040319/*__LIB_7__::func_55*/;
			break;
		case 66:
			uParam0->f_21 = 1039960/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 1039846/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 1038886/*__LIB_6__::func_954*/;
			break;
		case 69:
			*uParam0 = 1038877/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1038865/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1038321/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 1038309/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1038121/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 1038112/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1036526/*func_2921*/;
			break;
		case 87:
			uParam0->f_1 = 1035010/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 1035001/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1034993/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1034963/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 1034518/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 1028850/*__LIB_8__::func_985*/;
			break;
		case 100:
			uParam0->f_22 = 1020423/*__LIB_7__::func_871*/;
			break;
		case 101:
			uParam0->f_22 = 1019501/*__LIB_8__::func_984*/;
			break;
		case 112:
			uParam0->f_13 = 1019490/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 1019481/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 1019472/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 1019463/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1019291/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 1019268/*__LIB_4__::func_29*/;
			break;
	}
}

int func_2921(int iParam0, var uParam1)//Position - 0xFD0EE
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1518(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1311(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_4__::func_61(iParam0, &Var1, &Var3, &fVar9, 1);
		__LIB_4__::func_61(iParam0, &Var2, &Var4, &fVar10, 0);
		__LIB_4__::func_60(iParam0, &Var5, &Var7, &fVar11, 1);
		__LIB_4__::func_60(iParam0, &Var6, &Var8, &fVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		func_1514(&(Global_1946250.f_3638), Var1, Var3, fVar9, Var2, Var4, fVar10, bVar13, Var5, Var7, fVar11, Var6, Var8, fVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_2945(int iParam0)//Position - 0xFEAC3
{
	if (__LIB_35__::func_914(iParam0))
	{
		return 5;
	}
	return __LIB_7__::func_14(iParam0);
}

void func_2946(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xFEADE
{
	if (__LIB_35__::func_914(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
}

bool func_2949(int iParam0)//Position - 0xFEC3E
{
	return !__LIB_35__::func_914(iParam0);
}

int func_2950(int iParam0)//Position - 0xFEC4D
{
	if (SYSTEM::VDIST(__LIB_1__::func_694(PLAYER::PLAYER_ID()), __LIB_4__::func_69(iParam0)) <= 200f || (__LIB_35__::func_914(iParam0) && __LIB_5__::func_730(iParam0)))
	{
		if (__LIB_4__::func_976(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
		if (__LIB_3__::func_648() == iParam0)
		{
			return 0;
		}
		if (__LIB_35__::func_914(iParam0))
		{
			return 1;
		}
		if (__LIB_4__::func_72(PLAYER::PLAYER_ID()) && __LIB_5__::func_773(PLAYER::PLAYER_ID()))
		{
			if (__LIB_4__::func_70(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)))
			{
				return 1;
			}
		}
		if (__LIB_2__::func_159(0))
		{
			if (__LIB_4__::func_72(__LIB_0__::func_797()) && __LIB_5__::func_773(__LIB_0__::func_797()))
			{
				if (__LIB_4__::func_70(__LIB_0__::func_797(), __LIB_4__::func_71(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_2960(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xFEFED
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_4__::func_70(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)) && !__LIB_4__::func_70(__LIB_0__::func_797(), __LIB_4__::func_71(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_4__::func_70(iVar1, __LIB_4__::func_71(iParam0)) && __LIB_5__::func_773(iVar1))
				{
					Var3 = { __LIB_1__::func_696(iVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("ARC_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "ARC_FRIEND" /* GXT: Friend's Arcade */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("ARC_FRIEND"))
						{
							*uParam4 = joaat("BLIP_740");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_740" /* GXT: Arcade */);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_5__::func_781(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_4__::func_75(iParam0) };
								iVar6 = __LIB_4__::func_74(iParam0);
								*iParam2 = __LIB_0__::func_488(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								func_2961(iParam2, 18);
								HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
								HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(*iParam2))
						{
							HUD::REMOVE_BLIP(iParam2);
						}
					}
void func_2961(var uParam0, int iParam1)//Position - 0xFF166
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2996(int iParam0, int iParam1)//Position - 0x107275
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_67(iParam0, 0) };
	if (__LIB_6__::func_885(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1632(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_884(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_884(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_793(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_793(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2998(var uParam0, var uParam1)//Position - 0x1073B7
{
	if (__LIB_3__::func_616() == 3)
	{
		func_3002(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_3000(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_3000(var uParam0, var uParam1)//Position - 0x107440
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1632(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_1 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_5__::func_462();
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
		}
		else if (uParam0->f_2)
		{
			uParam1->f_1 = 1;
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_6__::func_884(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_3002(var uParam0, var uParam1)//Position - 0x10755E
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_53(uParam0, uParam1);
			break;
		case 1:
			func_3007(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_751(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3007(var uParam0, var uParam1)//Position - 0x1078DF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1632(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_926(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 3)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_6__::func_884(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_3066(var uParam0, int iParam1)//Position - 0x10BCAD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1113084/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1113075/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1113007/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 1112559/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 1112454/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 1112441/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 1112377/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 1112368/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1111907/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 1111898/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1111507/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 1111499/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1111490/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1111466/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1111404/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 1111325/*__LIB_9__::func_790*/;
			break;
		case 16:
			uParam0->f_5 = 1111028/*__LIB_6__::func_958*/;
			break;
		case 108:
			uParam0->f_55 = 1111019/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1111007/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 1110980/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 1110971/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1110962/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1110940/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 1110931/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1110923/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 1110915/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1110907/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1110575/*func_3138*/;
			break;
		case 27:
			uParam0->f_25 = 1110567/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1110559/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1110238/*__LIB_7__::func_745*/;
			break;
		case 31:
			uParam0->f_39 = 1110208/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 1110139/*__LIB_6__::func_880*/;
			break;
		case 34:
			uParam0->f_41 = 1106407/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 1106362/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1103195/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 1103186/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1103177/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1103169/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1103158/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1103050/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1101935/*__LIB_7__::func_799*/;
			break;
		case 49:
			uParam0->f_8 = 1101926/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1101917/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1101908/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 1101897/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 1101886/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1101878/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1101869/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1101860/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1101818/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 1101809/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1101800/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1101789/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1101778/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1101769/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1101761/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1101753/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1101450/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 1101380/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1100731/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 1100722/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1100714/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 1100705/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1100693/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1100259/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 1100234/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 1100217/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 1099675/*func_3088*/;
			break;
		case 87:
			uParam0->f_1 = 1098634/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 1098625/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1098617/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1098608/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1098599/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1098590/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 1098582/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1098574/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 1098562/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1098553/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1098250/*__LIB_7__::func_798*/;
			break;
	}
}

int func_3088(var uParam0, var uParam1)//Position - 0x10C79B
{
	return func_3089(uParam1);
}

int func_3089(var uParam0)//Position - 0x10C7A9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_109))
		{
			func_1518(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_1311(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_4__::func_109(&Var1, &Var3, &fVar9, 1);
		__LIB_4__::func_109(&Var2, &Var4, &fVar10, 0);
		__LIB_4__::func_108(&Var5, &Var7, &fVar11, 1);
		__LIB_4__::func_108(&Var6, &Var8, &fVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam0->f_189[0 /*3*/].f_1 - uParam0->f_189[1 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam0->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_188), 1);
		}
		func_1514(&(Global_1946250.f_3638), Var1, Var3, fVar9, Var2, Var4, fVar10, bVar13, Var5, Var7, fVar11, Var6, Var8, fVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3138(int iParam0, int iParam1)//Position - 0x10F22F
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_554(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1632(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_880(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_880(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_792(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_792(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3176(var uParam0, int iParam1)//Position - 0x10FC05
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1148062/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1148039/*__LIB_4__::func_174*/;
			break;
		case 1:
			uParam0->f_30 = 1147909/*__LIB_5__::func_547*/;
			break;
		case 2:
			uParam0->f_31 = 1147242/*__LIB_6__::func_894*/;
			break;
		case 3:
			uParam0->f_34 = 1146979/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 1146966/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 1146956/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 1146755/*__LIB_5__::func_274*/;
			break;
		case 38:
			uParam0->f_9 = 1146707/*__LIB_6__::func_964*/;
			break;
		case 42:
			uParam0->f_10 = 1146671/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 1146556/*__LIB_4__::func_941*/;
			break;
		case 11:
			uParam0->f_11 = 1146547/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 1145617/*__LIB_8__::func_928*/;
			break;
		case 14:
			uParam0->f_11 = 1145608/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 1144451/*__LIB_7__::func_805*/;
			break;
		case 8:
			uParam0->f_37 = 1144407/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 1144384/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 1144360/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1144298/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 1144219/*__LIB_9__::func_791*/;
			break;
		case 16:
			uParam0->f_5 = 1143545/*__LIB_8__::func_927*/;
			break;
		case 108:
			uParam0->f_55 = 1140263/*__LIB_10__::func_70*/;
			break;
		case 17:
			uParam0->f_17 = 1139342/*__LIB_9__::func_272*/;
			break;
		case 19:
			uParam0->f_17 = 1139296/*__LIB_6__::func_962*/;
			break;
		case 20:
			uParam0->f_3 = 1139123/*__LIB_6__::func_892*/;
			break;
		case 21:
			uParam0->f_3 = 1139038/*__LIB_6__::func_891*/;
			break;
		case 74:
			uParam0->f_53 = 1138898/*__LIB_5__::func_271*/;
			break;
		case 75:
			uParam0->f_4 = 1138882/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 1138779/*__LIB_5__::func_546*/;
			break;
		case 23:
			uParam0->f_26 = 1138732/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 1138695/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 1137290/*func_3281*/;
			break;
		case 25:
			uParam0->f_23 = 1136924/*func_3278*/;
			break;
		case 27:
			uParam0->f_25 = 1136111/*__LIB_6__::func_961*/;
			break;
		case 28:
			uParam0->f_24 = 1136072/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 1135837/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 1135568/*__LIB_7__::func_802*/;
			break;
		case 31:
			uParam0->f_39 = 1135368/*__LIB_5__::func_545*/;
			break;
		case 43:
			uParam0->f_8 = 1135262/*__LIB_7__::func_801*/;
			break;
		case 33:
			uParam0->f_40 = 1134946/*__LIB_6__::func_890*/;
			break;
		case 34:
			uParam0->f_41 = 1129950/*__LIB_6__::func_889*/;
			break;
		case 36:
			uParam0->f_58 = 1129893/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 1123689/*__LIB_6__::func_960*/;
			break;
		case 45:
			uParam0->f_14 = 1123680/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1123671/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1123663/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1123640/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 1123627/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 1123335/*__LIB_5__::func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1121183/*__LIB_8__::func_964*/;
			break;
		case 49:
			uParam0->f_8 = 1121135/*__LIB_4__::func_938*/;
			break;
		case 50:
			*uParam0 = 1120943/*__LIB_5__::func_733*/;
			break;
		case 51:
			*uParam0 = 1120934/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1120923/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 1120881/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 1120873/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1120864/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1120855/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1120813/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 1120804/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1120795/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1120784/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1120754/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 1120745/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1120737/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1119651/*__LIB_7__::func_56*/;
			break;
		case 66:
			uParam0->f_21 = 1119310/*__LIB_5__::func_541*/;
			break;
		case 67:
			uParam0->f_21 = 1119196/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 1118368/*__LIB_6__::func_959*/;
			break;
		case 69:
			*uParam0 = 1118359/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1118347/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1118255/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 1118243/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1118055/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 1118046/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1118032/*func_3214*/;
			break;
		case 87:
			uParam0->f_1 = 1118016/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 1118007/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1117999/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1117990/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1117547/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 1116085/*func_3196*/;
			break;
		case 100:
			uParam0->f_22 = 1115223/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 1115046/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 1115034/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1115020/*__LIB_4__::func_126*/;
			break;
		case 114:
			uParam0->f_16 = 835892/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 889642/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 1115011/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 1114910/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 1114885/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 1114713/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 1114686/*__LIB_4__::func_124*/;
			break;
	}
}

int func_3196(int iParam0, var uParam1)//Position - 0x1107B5
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_3197(iParam0, uParam1);
	}
	return 1;
}

int func_3197(int iParam0, var uParam1)//Position - 0x1107D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	char* sVar6;
	int iVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1946250.f_4716.f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_1946250.f_4716.f_7, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
		if (func_1188(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
		{
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			}
			if (PED::IS_PED_MALE(uParam1->f_109.f_1[0]))
			{
				MISC::SET_BIT(&(uParam1->f_188), 4);
			}
		}
		else
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_4__::func_133(-395939522);
		iVar3 = __LIB_4__::func_133(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-395939522), iVar2);
			__LIB_4__::func_131(__LIB_4__::func_132(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(uParam1->f_50), __LIB_4__::func_132(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_4__::func_130(&(uParam1->f_58), __LIB_4__::func_132(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_5__::func_266(uParam1, 6);
		iVar7 = 3500;
		__LIB_3__::func_900(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_3214(var uParam0, var uParam1)//Position - 0x110F50
{
	return func_3089(uParam1);
}

void func_3278(int iParam0, int iParam1)//Position - 0x11591C
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_154(iParam0) };
	if (__LIB_6__::func_892(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1632(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_890(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_890(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_803(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_803(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3281(var uParam0, var uParam1)//Position - 0x115A8A
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_3282(uParam0, uParam1);
	}
}

void func_3282(var uParam0, var uParam1)//Position - 0x115AB6
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_3293(*uParam0, 0, 0))
		{
			__LIB_3__::func_664(0);
			__LIB_3__::func_784(1);
		}
		else
		{
			__LIB_5__::func_878(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			func_3288(uParam0, uParam1);
			break;
		case 1:
			func_3284(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3284(var uParam0, var uParam1)//Position - 0x115B75
{
	bool bVar0;
	int iVar1[3];
	var uVar2[3];
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	sVar3 = __LIB_4__::func_155();
	func_1632(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_5__::func_207(iVar5);
		if (__LIB_3__::func_782(iVar5, bVar6, bVar7))
		{
			iVar1[iVar4] = iVar5;
			if (!bVar0 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
			iVar4++;
		}
		else if (!bVar0)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
		}
		iVar5++;
	}
	if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar3, sVar3);
		__LIB_5__::func_270();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_10__::func_18(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_457(5);
		__LIB_5__::func_462();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_8__::func_965(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
		if (__LIB_3__::func_616() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_3288(var uParam0, var uParam1)//Position - 0x115D74
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_4__::func_158(iVar6);
		uVar1[iVar6] = __LIB_4__::func_157(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_1__::func_124(PLAYER::PLAYER_ID()) && __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		__LIB_5__::func_877(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_10__::func_18(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_789(__LIB_4__::func_156(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_3__::func_784(2);
			}
			else if (func_3293(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_3__::func_664(1);
				__LIB_3__::func_784(1);
			}
			else
			{
				__LIB_5__::func_878(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_3293(int iParam0, bool bParam1, bool bParam2)//Position - 0x115FD5
{
	int iVar0;
	int iVar1;
	func_1632(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_3351(var uParam0, int iParam1)//Position - 0x1184A7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1175184/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1175175/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1175107/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 1174754/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 1174521/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 1174508/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 1174444/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 1174435/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 1173710/*__LIB_6__::func_967*/;
			break;
		case 14:
			uParam0->f_11 = 1173701/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1172559/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 1172551/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1172542/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1172518/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1172446/*__LIB_9__::func_793*/;
			break;
		case 15:
			uParam0->f_2 = 1172357/*__LIB_9__::func_792*/;
			break;
		case 16:
			uParam0->f_5 = 1171997/*__LIB_6__::func_966*/;
			break;
		case 108:
			uParam0->f_55 = 1171858/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 1171200/*__LIB_8__::func_852*/;
			break;
		case 19:
			uParam0->f_17 = 1171173/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 1171164/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1171116/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 1171061/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 1170948/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 1170940/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 1170932/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1168389/*func_3452*/;
			break;
		case 25:
			uParam0->f_23 = 1168381/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 1168373/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1168365/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1168084/*__LIB_7__::func_749*/;
			break;
		case 31:
			uParam0->f_39 = 1168054/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 1167985/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 1167962/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 1165408/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 1165363/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1165267/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 1165258/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1165249/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1165241/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1165230/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1165123/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1164285/*__LIB_7__::func_808*/;
			break;
		case 49:
			uParam0->f_8 = 1164276/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1164063/*__LIB_7__::func_748*/;
			break;
		case 51:
			*uParam0 = 1164054/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1164043/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 1164001/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 1163962/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 1163953/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 1163911/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 1163869/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 1163860/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1163851/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1163840/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1163829/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1163820/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1163734/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 1163726/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1163385/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 1163315/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1162614/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 1162605/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1162532/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 1162523/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1162511/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1162502/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1161977/*__LIB_6__::func_965*/;
			break;
		case 85:
			uParam0->f_1 = 1160421/*func_3402*/;
			break;
		case 87:
			uParam0->f_1 = 1157577/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 1157562/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 1157201/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 1156910/*__LIB_7__::func_20*/;
			break;
		case 97:
			uParam0->f_1 = 1156404/*func_3383*/;
			break;
		case 98:
			uParam0->f_1 = 1154775/*func_3381*/;
			break;
		case 100:
			uParam0->f_22 = 1154497/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 1153948/*__LIB_7__::func_880*/;
			break;
		case 112:
			uParam0->f_13 = 1153936/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1153927/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 835892/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 1153790/*__LIB_7__::func_807*/;
			break;
		case 116:
			*uParam0 = 1153742/*__LIB_5__::func_278*/;
			break;
		case 117:
			uParam0->f_16 = 889642/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 1115011/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 1114910/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 1114885/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 1153734/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 1149651/*func_3353*/;
			break;
		case 125:
			uParam0->f_19 = 1149595/*__LIB_4__::func_175*/;
			break;
	}
}

int func_3353(int iParam0, int* iParam1)//Position - 0x118AD3
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	if (!Global_2814119 || Global_2815059.f_6757)
	{
		if (iParam1->f_258 > 0)
		{
			__LIB_10__::func_26(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_5__::func_457(0);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(3);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(4);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(1);
					__LIB_4__::func_181(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_616() == 0)
			{
				if (__LIB_6__::func_965(iParam0, iParam1))
				{
					__LIB_4__::func_180();
					__LIB_4__::func_181(iParam1, 2);
				}
			}
			else
			{
				__LIB_5__::func_548(iParam0, iParam1, __LIB_3__::func_616());
				__LIB_4__::func_181(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_3__::func_616() == 0)
			{
				if (func_3402(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_3358(iParam1))
			{
				__LIB_4__::func_181(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_3__::func_616() == 0)
			{
				__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
				__LIB_7__::func_843(iParam0, iParam1);
				if (__LIB_3__::func_630(&(Global_1946250.f_3638), 0))
				{
					__LIB_35__::func_920(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_4__::func_181(iParam1, 4);
				}
			}
			else
			{
				__LIB_7__::func_842(iParam1);
				__LIB_35__::func_920(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_4__::func_181(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_3__::func_616() == 0)
			{
				if (!BitTest(*iParam1, 16))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam1->f_27) && __LIB_0__::func_121(iParam1->f_50))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam1->f_27);
						if (fVar0 > 0.55f)
						{
							CAM::DO_SCREEN_FADE_OUT(500);
							MISC::SET_BIT(iParam1, 16);
						}
					}
				}
				__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_7__::func_843(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_10__::func_26(iParam1);
				}
			}
			else if (__LIB_7__::func_842(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_10__::func_26(iParam1);
			}
			break;
	}
	return 1;
}

int func_3358(int* iParam0)//Position - 0x1191D2
{
	STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		func_1336(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
		return 0;
	}
	if ((__LIB_0__::func_121(iParam0->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_2, true, false);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_3381(int iParam0, var uParam1)//Position - 0x119ED7
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_3197(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::getMinusOneOrNull())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
			}
		}
		else if (!PED::IS_PED_INJURED(uParam1->f_2))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_2, "MP_1", 0, 0, 64);
		}
		__LIB_5__::func_412(1, 1, 1, 0, 0, 0, 0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true);
		CUTSCENE::START_CUTSCENE(0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		MISC::SET_BIT(&(Global_1946250.f_6), 19);
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		return 1;
	}
	else
	{
		Var0 = { 1082.001f, 187.749f, -49.349f };
		Var1 = { 0f, 0f, -110.19f };
		sVar2 = "mini@strip_club@throwout_d@";
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
		{
			uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
			PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[0], 6, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
		{
			uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			__LIB_4__::func_185(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_1336(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
			{
				if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		Var0 = { Var0 + Vector(0f, 0.5f, 3f) };
		__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
		uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 4, 0, 1000f, 0);
		}
	}
	return 1;
}

int func_3383(int iParam0, var uParam1)//Position - 0x11A534
{
	char* sVar0;
	bool bVar1;
	if (__LIB_4__::func_128(iParam0))
	{
		return __LIB_5__::func_974(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 21);
		STREAMING::REQUEST_IPL("ch_cutscene_casino");
		if (Global_1946250.f_4539 != __LIB_0__::getMinusOneOrNull())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_3384(&(uParam1->f_2), Global_1946250.f_4539))
				{
					return 0;
				}
			}
		}
		if (!BitTest(uParam1->f_188, 1))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
				MISC::SET_BIT(&(uParam1->f_188), 1);
			}
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			ENTITY::CREATE_MODEL_HIDE(959.0179f, 40.0682f, 116.2767f, 1f, joaat("hei_ch3_12_casinonew_penthouse"), false);
			return 1;
		}
		return 0;
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
		sVar0 = "mini@strip_club@throwout_d@";
		bVar1 = true;
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Casino_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Casino_01")))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			return 0;
		}
	}
	return 1;
}

int func_3384(var uParam0, int iParam1)//Position - 0x11A642
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
				if (__LIB_0__::func_338(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_293(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_1__::func_102(*uParam0, 7))
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

int func_3402(int iParam0, int* iParam1)//Position - 0x11B4E5
{
	var uVar0[25];
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	char* sVar11;
	int iVar12;
	if (BitTest(iParam1->f_188, 12))
	{
		if (!func_1188(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-1805228339), __LIB_4__::func_133(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(iParam1->f_50), __LIB_4__::func_132(-1805228339), __LIB_4__::func_193(-1805228339), __LIB_4__::func_133(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_4__::func_136())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
		Var3 = { __LIB_4__::func_132(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_4__::func_191(6);
		__LIB_3__::func_900(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_872(iVar6, 0)) && __LIB_6__::func_854(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				MISC::SET_BIT(&(iParam1->f_188), 13);
				iParam1->f_135[0] = iVar6;
			}
			MISC::SET_BIT(&(iParam1->f_188), 14);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			func_1518(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_1188(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
			{
				if (__LIB_0__::func_121(iParam1->f_109))
				{
					VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
				}
				if (PED::IS_PED_MALE(iParam1->f_109.f_1[0]))
				{
					MISC::SET_BIT(&(iParam1->f_188), 4);
				}
				if (iVar8 == PLAYER::PLAYER_PED_ID())
				{
					MISC::SET_BIT(&(iParam1->f_188), 11);
				}
			}
			else
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(iParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1->f_109), &(iParam1->f_189[0 /*3*/]), &(iParam1->f_189[1 /*3*/]));
		Var9 = { 925.9088f, 51.242f, 80.095f };
		Var10 = { 0f, 0f, 58f };
		sVar11 = __LIB_5__::func_550(iParam1, 6);
		iVar12 = __LIB_4__::func_192(__LIB_4__::func_189(iParam1));
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_1336(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_4__::func_132(-1805228339), 0.1f, __LIB_4__::func_133(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_4__::func_133(-1805228339), __LIB_4__::func_132(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_4__::func_132(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
			func_1280(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_3452(var uParam0, var uParam1)//Position - 0x11D405
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (__LIB_3__::func_616() == 0 || __LIB_3__::func_616() == 2)
	{
		if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) || __LIB_3__::func_597())
		{
			if (!__LIB_3__::func_597())
			{
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					__LIB_8__::func_967(1, *uParam0);
				}
			}
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				__LIB_8__::func_967(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			if (__LIB_3__::func_597())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_3__::func_597())
	{
		if ((__LIB_3__::func_616() == 3 || __LIB_3__::func_616() == 4) || __LIB_3__::func_616() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_3456(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_3453(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3453(var uParam0, var uParam1)//Position - 0x11D543
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5[3];
	var uVar6[3];
	char* sVar7;
	int iVar8;
	int iVar9;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar0 = true;
	iVar1 = __LIB_3__::func_785();
	bVar0 = iVar1 != 5;
	func_1632(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_4__::func_155();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_5__::func_207(iVar9);
		if (__LIB_3__::func_782(iVar9, bVar2, bVar3))
		{
			iVar5[iVar8] = iVar9;
			if (!bVar4 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
			iVar8++;
		}
		else if (!bVar4)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
		}
		iVar9++;
	}
	if (uParam0->f_5 || bVar4)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar7, sVar7);
		__LIB_5__::func_270();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_10__::func_18(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			if ((__LIB_3__::func_616() == 1 || __LIB_3__::func_616() == 3) || __LIB_3__::func_616() == 4)
			{
				__LIB_4__::func_143();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_3__::func_785() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			if (__LIB_3__::func_785() == 3)
			{
				__LIB_4__::func_143();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
	}
}

void func_3456(var uParam0, var uParam1)//Position - 0x11D7CD
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	if (__LIB_3__::func_616() == 0)
	{
		uVar0 = __LIB_5__::func_554(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_8__::func_966(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_10__::func_18(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_3__::func_616() == 0)
		{
			__LIB_1__::func_789(__LIB_4__::func_205(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_789(__LIB_5__::func_883(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_3__::func_616() == 0)
			{
				func_3458(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_3457(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_3457(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x11D8EA
{
	if (iParam1 == 0)
	{
		if (func_3293(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_4__::func_143();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_3293(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_3293(iParam0, 1, 0))
		{
			__LIB_3__::func_784(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_3__::func_784(4);
		__LIB_4__::func_143();
	}
	else
	{
		__LIB_3__::func_664(1);
		if (func_3293(iParam0, 0, 0))
		{
			__LIB_3__::func_784(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			__LIB_4__::func_143();
		}
	}
	*uParam2 = 1;
}

void func_3458(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x11D9F2
{
	if (iParam1 == 0)
	{
		if (func_3293(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_10 = 1;
			uParam3->f_1 = 1;
			uParam3->f_11 = 10;
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_3293(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
}

void func_3501(var uParam0, int iParam1)//Position - 0x11EE99
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1210684/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1210670/*__LIB_5__::func_565*/;
			break;
		case 1:
			uParam0->f_30 = 1210571/*__LIB_4__::func_945*/;
			break;
		case 2:
			uParam0->f_31 = 1209507/*__LIB_6__::func_898*/;
			break;
		case 3:
			uParam0->f_34 = 1209353/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 1209299/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 1209244/*__LIB_4__::func_263*/;
			break;
		case 37:
			uParam0->f_18 = 1209124/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 1208992/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 1208877/*__LIB_4__::func_944*/;
			break;
		case 11:
			uParam0->f_11 = 1208867/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 1207698/*__LIB_6__::func_973*/;
			break;
		case 14:
			uParam0->f_11 = 1207689/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1206363/*__LIB_7__::func_753*/;
			break;
		case 8:
			uParam0->f_37 = 1206319/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 1206296/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 1206272/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1206209/*__LIB_9__::func_795*/;
			break;
		case 15:
			uParam0->f_2 = 1206129/*__LIB_9__::func_794*/;
			break;
		case 16:
			uParam0->f_5 = 1205486/*__LIB_8__::func_929*/;
			break;
		case 108:
			uParam0->f_55 = 1202346/*__LIB_10__::func_71*/;
			break;
		case 17:
			uParam0->f_17 = 1201644/*__LIB_9__::func_274*/;
			break;
		case 19:
			uParam0->f_17 = 1201617/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 1201438/*__LIB_6__::func_897*/;
			break;
		case 21:
			uParam0->f_3 = 1201374/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1201160/*__LIB_6__::func_971*/;
			break;
		case 75:
			uParam0->f_4 = 1201144/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 1201041/*__LIB_5__::func_561*/;
			break;
		case 23:
			uParam0->f_26 = 1200994/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 1200957/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 1200130/*func_3603*/;
			break;
		case 25:
			uParam0->f_23 = 1199764/*func_3600*/;
			break;
		case 27:
			uParam0->f_25 = 1199382/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 1199331/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 1199323/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1199142/*__LIB_5__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 1199018/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 1198598/*__LIB_6__::func_896*/;
			break;
		case 34:
			uParam0->f_41 = 1187304/*__LIB_7__::func_844*/;
			break;
		case 36:
			uParam0->f_58 = 1187259/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1184172/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 1184163/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1184154/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1184146/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1184097/*__LIB_4__::func_942*/;
			break;
		case 47:
			uParam0->f_43 = 1184015/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1183251/*__LIB_6__::func_970*/;
			break;
		case 49:
			uParam0->f_8 = 1183204/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 1183145/*__LIB_5__::func_736*/;
			break;
		case 51:
			*uParam0 = 1182913/*__LIB_6__::func_969*/;
			break;
		case 52:
			uParam0->f_15 = 1182902/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 1182860/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 1182852/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1182843/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1182834/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1182792/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 1182783/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1182774/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1182763/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1182721/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 1182712/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1182704/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1181642/*__LIB_7__::func_57*/;
			break;
		case 66:
			uParam0->f_21 = 1181339/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 1181225/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 1180382/*__LIB_6__::func_968*/;
			break;
		case 69:
			*uParam0 = 1180373/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1180300/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 1180291/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1180279/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1180077/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 1180068/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1178334/*func_3520*/;
			break;
		case 87:
			uParam0->f_1 = 1176881/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 1176872/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1176864/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1176855/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1176846/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1176837/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 1176829/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1176821/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 1176649/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 1176616/*__LIB_4__::func_215*/;
			break;
	}
}

int func_3520(int iParam0, var uParam1)//Position - 0x11FADE
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	if (__LIB_4__::func_977())
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1518(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1311(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_4__::func_229(iParam0, __LIB_3__::func_616()) };
		Var2 = { __LIB_4__::func_228(iParam0, __LIB_3__::func_616()) };
		fVar3 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var4 = { __LIB_4__::func_227(iParam0, __LIB_3__::func_616()) };
		Var5 = { __LIB_4__::func_226(iParam0, __LIB_3__::func_616()) };
		fVar6 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var7 = { __LIB_4__::func_224(iParam0, __LIB_3__::func_616()) };
		Var8 = { __LIB_4__::func_223(iParam0, __LIB_3__::func_616()) };
		fVar9 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		Var10 = { __LIB_4__::func_222(iParam0, __LIB_3__::func_616()) };
		Var11 = { __LIB_4__::func_221(iParam0, __LIB_3__::func_616()) };
		fVar12 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[2 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 5);
		}
		return func_1514(&(Global_1946250.f_3638), Var1, Var2, fVar3, Var4, Var5, fVar6, bVar13, Var7, Var8, fVar9, Var10, Var11, fVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3600(int iParam0, int iParam1)//Position - 0x124E94
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_252(iParam0) };
	if (__LIB_6__::func_897(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1632(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_896(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_896(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_809(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_809(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3603(var uParam0, var uParam1)//Position - 0x125002
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_3604(uParam0, uParam1);
	}
}

void func_3604(var uParam0, var uParam1)//Position - 0x125020
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_54(uParam0, uParam1);
			break;
		case 1:
			func_3605(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3605(var uParam0, var uParam1)//Position - 0x12505A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1632(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

void func_3666(var uParam0, int iParam1)//Position - 0x127945
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1301872/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1301816/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1301472/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1301433/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1301400/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1301389/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1301325/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1301302/*__LIB_5__::func_306*/;
			break;
		case 79:
			*uParam0 = 1301278/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1301158/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1301079/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1301070/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1300474/*__LIB_9__::func_316*/;
			break;
		case 109:
			uParam0->f_56 = 1300466/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1295323/*__LIB_9__::func_796*/;
			break;
		case 13:
			uParam0->f_2 = 1295314/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1295299/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1294824/*__LIB_9__::func_277*/;
			break;
		case 108:
			uParam0->f_55 = 1290853/*__LIB_10__::func_72*/;
			break;
		case 17:
			uParam0->f_17 = 1290075/*__LIB_9__::func_276*/;
			break;
		case 19:
			uParam0->f_17 = 1290048/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1289837/*__LIB_9__::func_306*/;
			break;
		case 21:
			uParam0->f_3 = 1289674/*__LIB_7__::func_847*/;
			break;
		case 74:
			uParam0->f_53 = 1289065/*__LIB_7__::func_846*/;
			break;
		case 22:
			uParam0->f_24 = 1288983/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1288067/*func_3731*/;
			break;
		case 30:
			uParam0->f_8 = 1286816/*__LIB_7__::func_873*/;
			break;
		case 31:
			uParam0->f_39 = 1286139/*__LIB_9__::func_275*/;
			break;
		case 33:
			uParam0->f_40 = 1285236/*__LIB_9__::func_305*/;
			break;
		case 14:
			uParam0->f_11 = 1285227/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 34:
			uParam0->f_41 = 1284452/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1284399/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1216181/*__LIB_7__::func_845*/;
			break;
		case 45:
			uParam0->f_14 = 1216172/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1216163/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1216155/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1216132/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 1215992/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 1215957/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 1215919/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1215895/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1215884/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1215805/*__LIB_8__::func_854*/;
			break;
		case 54:
			uParam0->f_45 = 1215797/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1215788/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1215778/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1215489/*__LIB_8__::func_853*/;
			break;
		case 64:
			uParam0->f_47 = 1214161/*__LIB_42__::func_54*/;
			break;
		case 65:
			uParam0->f_21 = 1213198/*__LIB_7__::func_58*/;
			break;
		case 66:
			uParam0->f_21 = 1213003/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 1212900/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 1212210/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1212201/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1212189/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1212180/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1212168/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1211831/*__LIB_6__::func_974*/;
			break;
		case 73:
			uParam0->f_51 = 1211822/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1211705/*__LIB_7__::func_810*/;
			break;
	}
}

void func_3731(int iParam0, int iParam1)//Position - 0x13A783
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_9__::func_306(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_7__::func_22(PLAYER::PLAYER_ID())) && __LIB_3__::func_360(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_305(iParam0, -1);
					}
					bVar9 = __LIB_1__::func_637(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_305(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_855(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_947(PLAYER::PLAYER_ID()))
						{
							func_3732(iParam0);
						}
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_855(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_947(PLAYER::PLAYER_ID()))
						{
							func_3732(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3732(int iParam0)//Position - 0x13AA3B
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3803(var uParam0, int iParam1)//Position - 0x13DD79
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1364742/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1364502/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1362199/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1361990/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1361783/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1361705/*__LIB_4__::func_391*/;
			break;
		case 37:
			uParam0->f_18 = 1361565/*__LIB_4__::func_951*/;
			break;
		case 38:
			uParam0->f_9 = 1361509/*__LIB_6__::func_904*/;
			break;
		case 42:
			uParam0->f_10 = 1361472/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1361236/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1361222/*__LIB_5__::func_589*/;
			break;
		case 11:
			uParam0->f_11 = 1361213/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1357842/*__LIB_9__::func_500*/;
			break;
		case 14:
			uParam0->f_11 = 1357833/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1343965/*__LIB_5__::func_316*/;
			break;
		case 79:
			*uParam0 = 1343709/*__LIB_5__::func_588*/;
			break;
		case 13:
			uParam0->f_2 = 1343660/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1343448/*__LIB_9__::func_797*/;
			break;
		case 44:
			*uParam0 = 1343439/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1343410/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1342724/*__LIB_9__::func_280*/;
			break;
		case 108:
			uParam0->f_55 = 1338870/*__LIB_10__::func_73*/;
			break;
		case 17:
			uParam0->f_17 = 1337581/*__LIB_9__::func_279*/;
			break;
		case 19:
			uParam0->f_17 = 1337535/*__LIB_6__::func_983*/;
			break;
		case 20:
			uParam0->f_3 = 1337370/*__LIB_6__::func_903*/;
			break;
		case 21:
			uParam0->f_3 = 1337306/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1337079/*__LIB_6__::func_982*/;
			break;
		case 22:
			uParam0->f_24 = 1336956/*__LIB_5__::func_585*/;
			break;
		case 26:
			uParam0->f_38 = 1333740/*func_3940*/;
			break;
		case 25:
			uParam0->f_23 = 1333419/*func_3938*/;
			break;
		case 27:
			uParam0->f_25 = 1332271/*__LIB_8__::func_970*/;
			break;
		case 28:
			uParam0->f_24 = 1332159/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1332078/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1331188/*__LIB_8__::func_969*/;
			break;
		case 31:
			uParam0->f_39 = 1330638/*__LIB_5__::func_740*/;
			break;
		case 33:
			uParam0->f_40 = 1329956/*__LIB_7__::func_59*/;
			break;
		case 32:
			*uParam0 = 1329916/*__LIB_6__::func_980*/;
			break;
		case 34:
			uParam0->f_41 = 1320648/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1320590/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 1217050/*__LIB_6__::func_975*/;
			break;
		case 45:
			uParam0->f_14 = 1320581/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1320572/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1320564/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1320515/*__LIB_4__::func_950*/;
			break;
		case 47:
			uParam0->f_43 = 1320223/*__LIB_4__::func_949*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1317198/*__LIB_8__::func_986*/;
			break;
		case 49:
			uParam0->f_8 = 1317094/*__LIB_4__::func_948*/;
			break;
		case 50:
			*uParam0 = 1316811/*__LIB_7__::func_814*/;
			break;
		case 51:
			*uParam0 = 1316649/*__LIB_6__::func_978*/;
			break;
		case 52:
			uParam0->f_15 = 1316638/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1316380/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1316118/*__LIB_7__::func_813*/;
			break;
		case 56:
			uParam0->f_46 = 1316109/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1314952/*__LIB_7__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 1314694/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1314415/*__LIB_5__::func_738*/;
			break;
		case 60:
			*uParam0 = 1314406/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1314395/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1314137/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1314129/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1314071/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1313921/*__LIB_7__::func_812*/;
			break;
		case 65:
			uParam0->f_21 = 1312214/*__LIB_7__::func_874*/;
			break;
		case 66:
			uParam0->f_21 = 1311903/*__LIB_5__::func_575*/;
			break;
		case 67:
			uParam0->f_21 = 1311751/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1310751/*__LIB_6__::func_976*/;
			break;
		case 69:
			*uParam0 = 1310742/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1310292/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1310013/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1310001/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1309768/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1309759/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1307664/*func_3824*/;
			break;
		case 87:
			uParam0->f_1 = 1304769/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1304760/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1304752/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1304726/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1304617/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1303906/*func_3810*/;
			break;
		case 100:
			uParam0->f_22 = 1303743/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1303616/*__LIB_7__::func_877*/;
			break;
		case 78:
			uParam0->f_59 = 1303326/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1303302/*__LIB_4__::func_313*/;
			break;
	}
}

int func_3810(var uParam0, var uParam1)//Position - 0x13E562
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { -1560.336f, -3019.0583f, -74.8061f };
	Var1 = { 0f, 0f, -30f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1336(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

int func_3824(int iParam0, var uParam1)//Position - 0x13F410
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	iVar0 = __LIB_4__::func_322(iParam0);
	if (__LIB_4__::func_980(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1518(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1311(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_4__::func_329(iVar0) };
		Var3 = { __LIB_4__::func_328(iVar0) };
		fVar4 = __LIB_4__::func_327(iVar0);
		fVar5 = __LIB_4__::func_326(iVar0);
		bVar6 = false;
		Var7 = { __LIB_4__::func_325(iVar0) };
		Var8 = { __LIB_4__::func_324(iVar0) };
		fVar9 = __LIB_4__::func_323(iVar0);
		return func_3825(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

int func_3825(int* iParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5, struct<3> Param6, struct<3> Param7, float fParam8)//Position - 0x13F510
{
	int iVar0;
	iVar0 = 4000;
	if (bParam5)
	{
		iVar0 = 3000;
	}
	func_1280(iParam0, 100, "est", Param1, Param2, fParam3, Param1, Param2, fParam3, 1f, 0, 0, 0, 0, 0);
	func_1280(iParam0, 900, "zoom", Param1, Param2, fParam3, Param1, Param2, fParam4, 1f, 0, 0, 0, 0, 0);
	func_1280(iParam0, iVar0, "zoom_sustain", Param1, Param2, fParam4, Param1, Param2, fParam4, 1f, 0, 0, 0, 0, 0);
	if (!bParam5)
	{
		func_1280(iParam0, 3500, "above", Param6, Param7, fParam8, Param6, Param7, fParam8, 0.1f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_3938(int iParam0, int iParam1)//Position - 0x1458AB
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_301(iParam0) };
	if (__LIB_6__::func_903(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1632(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_59(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_59(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_850(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_850(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3940(var uParam0, var uParam1)//Position - 0x1459EC
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3954(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_3942(uParam0, uParam1);
		}
	}
	else if (__LIB_3__::func_616() == 3)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			__LIB_4__::func_376(uParam1);
		}
	}
}

void func_3942(var uParam0, var uParam1)//Position - 0x145A77
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_55(uParam0, uParam1);
			break;
		case 1:
			func_3943(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3943(var uParam0, var uParam1)//Position - 0x145AB1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1632(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

void func_3954(var uParam0, var uParam1)//Position - 0x145FCB
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_56(uParam0, uParam1);
			break;
		case 1:
			func_3961(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_760(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3961(var uParam0, var uParam1)//Position - 0x1463D6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1632(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_931(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_59(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_4027(var uParam0, int iParam1)//Position - 0x14D30F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1372268/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1372212/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1371943/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1371882/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1371851/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1371787/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1371778/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 11:
			uParam0->f_11 = 1371769/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1371760/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 12:
			uParam0->f_33 = 1371549/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1371541/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1371517/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1371508/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1370566/*__LIB_9__::func_501*/;
			break;
		case 75:
			uParam0->f_4 = 1370557/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1370532/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1370523/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1370497/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1370485/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1370476/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1370467/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1369999/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1369880/*__LIB_5__::func_596*/;
			break;
		case 25:
			uParam0->f_23 = 1369110/*func_4069*/;
			break;
		case 30:
			uParam0->f_8 = 1368964/*__LIB_5__::func_595*/;
			break;
		case 31:
			uParam0->f_39 = 1368952/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1368745/*__LIB_9__::func_282*/;
			break;
		case 34:
			uParam0->f_41 = 1368428/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1368375/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1367602/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1367593/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1367584/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1367576/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1367565/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1367326/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1367317/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1367308/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1367299/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1367288/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1367277/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1367269/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1367260/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1367251/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1366958/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1366414/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1366406/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1366338/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1366198/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1365754/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1365745/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1365733/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1365724/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1365712/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1365703/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1365695/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4069(int iParam0, int iParam1)//Position - 0x14E416
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_8__::func_933(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_282(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_282(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4070(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4070(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4070(int iParam0)//Position - 0x14E640
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4105(var uParam0, int iParam1)//Position - 0x14F075
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1470042/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1469938/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1469203/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1469121/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1468978/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1468968/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1468831/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1468764/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1468652/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1468638/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1468629/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1468129/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1468120/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1468112/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1468088/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1468008/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1467912/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1467707/*__LIB_9__::func_798*/;
			break;
		case 75:
			uParam0->f_4 = 1467691/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1466882/*__LIB_8__::func_936*/;
			break;
		case 108:
			uParam0->f_55 = 1462177/*__LIB_10__::func_74*/;
			break;
		case 17:
			uParam0->f_17 = 1461359/*func_4286*/;
			break;
		case 19:
			uParam0->f_17 = 1461332/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1461248/*__LIB_5__::func_616*/;
			break;
		case 21:
			uParam0->f_3 = 1461184/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1461032/*__LIB_5__::func_330*/;
			break;
		case 22:
			uParam0->f_24 = 1460865/*__LIB_5__::func_615*/;
			break;
		case 25:
			uParam0->f_23 = 1459815/*func_4276*/;
			break;
		case 30:
			uParam0->f_8 = 1459233/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1458920/*__LIB_5__::func_749*/;
			break;
		case 33:
			uParam0->f_40 = 1457977/*__LIB_7__::func_62*/;
			break;
		case 34:
			uParam0->f_41 = 1456617/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1456559/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1408558/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1408549/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1408540/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1408532/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1408509/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1408381/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1408340/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1408207/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1408138/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1408127/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1407893/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1407543/*func_4253*/;
			break;
		case 56:
			uParam0->f_46 = 1407534/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1407463/*func_4251*/;
			break;
		case 58:
			uParam0->f_13 = 1407229/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1407029/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1406131/*__LIB_7__::func_61*/;
			break;
		case 66:
			uParam0->f_21 = 1405420/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1403158/*__LIB_6__::func_986*/;
			break;
		case 68:
			*uParam0 = 1402525/*__LIB_6__::func_985*/;
			break;
		case 69:
			*uParam0 = 1402516/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1402504/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1402495/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1402483/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1401790/*__LIB_6__::func_984*/;
			break;
		case 84:
			uParam0->f_1 = 1401250/*func_4203*/;
			break;
		case 85:
			uParam0->f_1 = 1397227/*func_4197*/;
			break;
		case 87:
			uParam0->f_1 = 1393240/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1392726/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1392554/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1392382/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1392216/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1390764/*func_4171*/;
			break;
		case 94:
			uParam0->f_1 = 1386750/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1386454/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1386424/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1385756/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1383107/*func_4136*/;
			break;
		case 100:
			uParam0->f_22 = 1375734/*__LIB_7__::func_882*/;
			break;
		case 101:
			uParam0->f_22 = 1373805/*__LIB_7__::func_881*/;
			break;
		case 78:
			uParam0->f_59 = 1373585/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1373561/*__LIB_4__::func_412*/;
			break;
	}
}

int func_4136(int iParam0, int* iParam1)//Position - 0x151AC3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var5;
	struct<3> Var6;
	struct<3> Var7;
	char* sVar8;
	struct<3> Var9;
	struct<3> Var10;
	if ((__LIB_0__::func_177() || __LIB_3__::func_719()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_0__::func_893() || __LIB_4__::func_54())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_0__::func_937(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 0))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
			}
		}
		else
		{
			return 0;
		}
		if (!BitTest(Global_1946250.f_2, 21))
		{
			bVar3 = false;
		}
		else
		{
			bVar3 = true;
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 1))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((__LIB_1__::func_693(bVar2, 1, 1) && !__LIB_4__::func_972(bVar2)) && !Global_2824892)
			{
				if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, bVar3) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::GET_PLAYER_PED(bVar2)))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!BitTest(*iParam1, 12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
			{
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_4__::func_417(0), false);
				Var4 = { __LIB_4__::func_426() };
				__LIB_5__::func_893(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::getMinusOneOrNull())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_1336(&(iParam1->f_140[0]), Global_1853191, 1, 0);
							if (Global_1853191 == PLAYER::PLAYER_ID())
							{
								Global_2824887 = iVar1;
							}
							iVar1++;
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (Global_1853191 != bVar2)
				{
					if (__LIB_1__::func_693(bVar2, 0, 1) && !__LIB_4__::func_972(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_1336(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
								if (__LIB_0__::func_121(iParam1->f_140[iVar1]))
								{
									PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar1]);
								}
								if (bVar2 == PLAYER::PLAYER_ID())
								{
									Global_2824887 = iVar1;
								}
								iVar1++;
							}
						}
					}
				}
				iVar0++;
			}
			__LIB_4__::func_442();
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar0]) && __LIB_0__::func_121(iParam1->f_140[iVar0]))
				{
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_614() || BitTest(Global_1574942, 4))
		{
			if (__LIB_0__::func_893() || __LIB_4__::func_54())
			{
			}
			else
			{
				__LIB_7__::func_872(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_5__::func_892(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_5__::func_991(&(iParam1->f_176[3]), Var5, Var5.f_3);
		}
		iParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
		if (BitTest(Global_1946250.f_2, 21))
		{
		}
	}
	else
	{
		if (!BitTest(*iParam1, 12))
		{
			func_1336(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]) && __LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				return 0;
			}
		}
		iParam1->f_176[1] = 0;
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_140[0], false) };
			Var6.f_2 = (Var6.f_2 - 20f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_140[0], Var6, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_140[0], true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
		{
			Var7 = { __LIB_4__::func_426() };
			__LIB_5__::func_893(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_1__::func_394())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_3__::func_900(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_4__::func_428(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_5__::func_514(iParam1, 0);
	__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_4171(int iParam0, int* iParam1)//Position - 0x1538AC
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_4__::func_427() };
		__LIB_5__::func_893(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				__LIB_17__::func_834(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_1518(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_4173(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar4 = iVar2;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
				bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (iVar2 < 30)
				{
					if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_2__::func_717(bVar5) == iParam0) && __LIB_3__::func_171(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_1336(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
							if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
							{
								PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar3]);
								if (ENTITY::GET_ENTITY_MODEL(iParam1->f_140[iVar3]) == joaat("MP_M_Freemode_01"))
								{
									MISC::SET_BIT(&(iParam1->f_188), 27);
								}
								else
								{
									MISC::SET_BIT(&(iParam1->f_188), 28);
								}
								if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
								}
							}
							iVar3++;
						}
						else if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
						{
							if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
							{
								return 0;
							}
							else
							{
								PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
							}
							iVar3++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_5__::func_602(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	func_4172(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_417(0));
	return 1;
}

void func_4172(int iParam0, int* iParam1)//Position - 0x153B1A
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
			func_1280(iParam1, 6750, "Entry", 482.1462f, 4836.044f, -57.4031f, 27.1279f, -0.106f, 177.5027f, 26.413f, 482.1778f, 4834.7886f, -57.8881f, 0.936f, -0.106f, 176.6204f, 26.413f, 0f, 0, 0, 1, 1, 750);
			break;
	}
}

int func_4173(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x153BBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		iVar1 = iVar0 + 1;
		iVar2 = iVar0;
		if ((*uParam3)[iVar1] != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_1188(uParam2[iVar1], iVar3, 1, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && __LIB_0__::func_121((*uParam2)[iVar1]))
				{
					if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
					{
						if (bParam4)
						{
							return 0;
						}
					}
					else
					{
						PED::FINALIZE_HEAD_BLEND((*uParam2)[iVar1]);
					}
					iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar2, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (__LIB_0__::func_121(*uParam1))
						{
							PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar2);
						}
					}
					if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4197(int iParam0, int* iParam1)//Position - 0x1551EB
{
	int iVar0;
	struct<4> Var1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_1518(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_4__::func_453(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				MISC::SET_BIT(&(iParam1->f_188), 9);
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("avenger"))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 4 || VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 1)
					{
						MISC::SET_BIT(&(iParam1->f_188), 14);
					}
					MISC::SET_BIT(&(iParam1->f_188), 13);
				}
			}
			return 0;
		}
		else if (func_1311(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_4__::func_465(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1336(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[0]) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[0]);
				PED::FINALIZE_HEAD_BLEND(iParam1->f_140[0]);
			}
			else
			{
				return 0;
			}
		}
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_892(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_6__::func_424(iParam0, 3) };
	__LIB_5__::func_893(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_5__::func_609(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_6__::func_424(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_5__::func_893(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_991(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_6__::func_805(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	func_4198(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

void func_4198(int iParam0, int* iParam1, bool bParam2, int iParam3)//Position - 0x155442
{
	struct<6> Var0;
	struct<6> Var1;
	bool bVar2;
	int iVar3;
	bVar2 = false;
	iVar3 = 0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		bVar2 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
	}
	if (bVar2 && __LIB_0__::func_121(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		iVar3 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
	}
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
			if (iParam3 == 0)
			{
				func_1280(iParam1, 5000, "INT_Exit", 482.51f, 4832.033f, -57.0314f, -10.0613f, -0.023f, 177.2871f, 49.6412f, 482.51f, 4832.033f, -57.0314f, -10.0613f, -0.023f, 177.2871f, 49.6412f, 1f, 0, 0, 12, 0, 0);
			}
			else if (iParam3 == 1)
			{
				func_1280(iParam1, 3000, "EXT_Exit", 1.1188f, 3349.2717f, 41.1314f, -3.5435f, -0.1481f, 127.1506f, 58.2477f, 1.1188f, 3349.2717f, 41.1314f, -3.5435f, -0.1481f, 127.1506f, 58.2477f, 1f, 0, 0, 12, 0, 0);
				Var0 = { __LIB_4__::func_418(__LIB_4__::func_425(iParam0)) };
				Var1 = { __LIB_4__::func_418(iParam0) };
				__LIB_5__::func_993(Var0, iParam1, Var1);
			}
			else
			{
				if (__LIB_5__::func_329())
				{
					func_1280(iParam1, 6500, "Entry", -5.9734f, 3346.5703f, 41.8644f, -8.3767f, 0.057f, -179.3879f, 46.1205f, -5.2366f, 3346.7302f, 41.7703f, 31.87f, 0.057f, -179.72f, 46.1205f, 0.3f, 0, 0, 12, 12, 0);
				}
				else if (bVar2)
				{
					if (!__LIB_4__::func_461(iVar3))
					{
						func_1280(iParam1, 6500, "Entry", -10.3206f, 3311.8088f, 40.364f, 0.0289f, 0.3124f, -12.4688f, 14.7245f, -10.4392f, 3311.6401f, 41.1087f, 2.0037f, 0.3124f, -12.3982f, 15.1764f, 0.3f, 0, 0, 1, 1, 0);
					}
					else
					{
						func_1280(iParam1, 10000, "Entry", -4.8574f, 3345.3655f, 41.2644f, -1.3791f, 0.3176f, 175.795f, 26.8329f, -4.6284f, 3348.4814f, 41.3425f, 1.58f, 0.3176f, 175.9904f, 26.8329f, 0.3f, 0, 0, 12, 12, 0);
					}
				}
				else
				{
					func_1280(iParam1, 6500, "Entry", __LIB_4__::func_463(iParam0, 1), -4.8186f, 0.21f, 157.6689f, 23.8189f, __LIB_4__::func_463(iParam0, 0), 0.1958f, 0.1468f, 170.0269f, 23.8189f, 0.3f, 0, 0, 12, 12, 0);
				}
				Var0 = { __LIB_4__::func_418(__LIB_4__::func_425(iParam0)) };
				Var1 = { __LIB_4__::func_418(iParam0) };
				if (!bParam2)
				{
					if (iVar3 == joaat("avenger"))
					{
						func_1280(iParam1, 7000, "Descent", 11.1073f, 3348.9534f, 58.9731f, -34.0226f, -0.3218f, 135.5465f, 35.752f, 12.9496f, 3345.151f, 64.4397f, -43.1488f, -0.3218f, 123.0018f, 35.752f, 0.3f, 0, 0, 0, 0, 0);
					}
					else if (bVar2)
					{
						if (!__LIB_4__::func_461(iVar3))
						{
							func_1280(iParam1, 7000, "Descent", -9.4331f, 3341.502f, 54.8109f, -55.8299f, -0.4106f, -161.4268f, 35.889f, -2.6038f, 3345.0256f, 60.965f, -57.6206f, -1.078f, 157.7437f, 35.889f, 0.3f, 0, 0, 0, 0, 0);
						}
						else
						{
							func_1280(iParam1, 7000, "Descent", -9.4331f, 3341.502f, 54.8109f, -55.8299f, -0.4106f, -161.4268f, 35.889f, -1.1462f, 3345.4565f, 61.5159f, -50.1259f, -0.4106f, 155.2311f, 35.889f, 0.3f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_1280(iParam1, 7000, "Descent", -7.7921f, 3340.0403f, 53.8889f, -51.3443f, -0.3723f, -153.8411f, 35.6942f, -1.4456f, 3345.4854f, 61.8217f, -51.1283f, -0.3977f, 162.7439f, 42.0052f, 0.3f, 0, 0, 0, 0, 0);
					}
					Var0 = { __LIB_4__::func_418(__LIB_4__::func_425(iParam0)) };
					Var1 = { __LIB_4__::func_418(iParam0) };
				}
				__LIB_5__::func_993(Var0, iParam1, Var1);
			}
			break;
		case 97:
			if (iParam3 == 0)
			{
				func_1280(iParam1, 5000, "INT_Exit", 482.51f, 4832.033f, -57.0314f, -10.0613f, -0.023f, 177.2871f, 49.6412f, 482.51f, 4832.033f, -57.0314f, -10.0613f, -0.023f, 177.2871f, 49.6412f, 1f, 0, 0, 12, 0, 0);
			}
			else if (iParam3 == 1)
			{
				func_1280(iParam1, 3000, "EXT_Exit", 1.1188f, 3349.2717f, 41.1314f, -3.5435f, -0.1481f, 127.1506f, 58.2477f, 1.1188f, 3349.2717f, 41.1314f, -3.5435f, -0.1481f, 127.1506f, 58.2477f, 1f, 0, 0, 12, 0, 0);
				Var0 = { __LIB_4__::func_418(__LIB_4__::func_425(iParam0)) };
				Var1 = { __LIB_4__::func_418(iParam0) };
				__LIB_5__::func_993(Var0, iParam1, Var1);
			}
			else
			{
				if (__LIB_5__::func_329())
				{
					func_1280(iParam1, 6500, "Entry", -5.9734f, 3346.5703f, 41.8644f, -8.3767f, 0.057f, -179.3879f, 46.1205f, -5.2366f, 3346.7302f, 41.7703f, 31.87f, 0.057f, -179.72f, 46.1205f, 0.3f, 0, 0, 12, 12, 0);
				}
				else if (bVar2)
				{
					if (!__LIB_4__::func_461(iVar3))
					{
						func_1280(iParam1, 6500, "Entry", -10.3206f, 3311.8088f, 40.364f, 0.0289f, 0.3124f, -12.4688f, 14.7245f, -10.4392f, 3311.6401f, 41.1087f, 2.0037f, 0.3124f, -12.3982f, 15.1764f, 0.3f, 0, 0, 1, 1, 0);
					}
					else
					{
						func_1280(iParam1, 10000, "Entry", -4.8574f, 3345.3655f, 41.2644f, -1.3791f, 0.3176f, 175.795f, 26.8329f, -4.6284f, 3348.4814f, 41.3425f, 1.58f, 0.3176f, 175.9904f, 26.8329f, 0.3f, 0, 0, 12, 12, 0);
					}
				}
				else
				{
					func_1280(iParam1, 6500, "Entry", -1.7428f, 3346.097f, 42.022f, -4.8186f, 0.21f, 157.6689f, 23.8189f, -1.6727f, 3346.8914f, 41.8528f, 0.1958f, 0.1468f, 170.0269f, 23.8189f, 0.3f, 0, 0, 12, 12, 0);
				}
				Var0 = { __LIB_4__::func_418(__LIB_4__::func_425(iParam0)) };
				Var1 = { __LIB_4__::func_418(iParam0) };
				if (bVar2)
				{
					__LIB_5__::func_993(Var0, iParam1, Var1);
				}
				if (!bParam2)
				{
					if (bVar2)
					{
						if (iParam0 == 97)
						{
							func_1280(iParam1, 7000, "Descent", 1836.8279f, 249.2855f, 163.8257f, 8.4524f, -0.177f, -53.3591f, 35.752f, 1843.3336f, 254.3313f, 164.3541f, 3.1476f, -0.1927f, -51.2117f, 35.752f, 0.3f, 0, 0, 0, 0, 0);
						}
						else if (iParam0 == 91)
						{
							func_1280(iParam1, 7000, "Descent", 2796.3982f, 3967.014f, 45.8065f, 1.101f, -0.671f, 151.9465f, 20.5713f, 2795.5513f, 3965.0398f, 45.8444f, 0.6883f, -0.671f, 151.7169f, 20.5713f, 0.3f, 0, 0, 0, 0, 0);
						}
						else
						{
							func_1280(iParam1, 7000, "Descent", 11.1073f, 3348.9534f, 58.9731f, -34.0226f, -0.3218f, 135.5465f, 35.752f, 12.9496f, 3345.151f, 64.4397f, -43.1488f, -0.3218f, 123.0018f, 35.752f, 0.3f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_1280(iParam1, 7000, "Descent", -7.7921f, 3340.0403f, 53.8889f, -51.3443f, -0.3723f, -153.8411f, 35.6942f, -1.4456f, 3345.4854f, 61.8217f, -51.1283f, -0.3977f, 162.7439f, 42.0052f, 0.3f, 0, 0, 0, 0, 0);
					}
					if (!bVar2)
					{
						Var0 = { __LIB_4__::func_418(__LIB_4__::func_425(iParam0)) };
						Var1 = { __LIB_4__::func_418(iParam0) };
					}
				}
				if (!bVar2)
				{
					__LIB_5__::func_993(Var0, iParam1, Var1);
				}
			}
			break;
	}
}

int func_4203(int iParam0, var uParam1)//Position - 0x1561A2
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_5__::func_604(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_459(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_459(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_441());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_441()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_440());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_440()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar0 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				Var2.f_2 = (Var2.f_2 - 10f);
				__LIB_0__::func_799(__LIB_4__::func_445());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_445()))
				{
					bVar0 = false;
				}
				else if (!__LIB_17__::func_834(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_1518(&iVar1, &(uParam1->f_122), 24);
					__LIB_4__::func_456(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_4__::func_466(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_1__::func_394())
			{
				sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

int func_4251(int iParam0)//Position - 0x1579E7
{
	if (__LIB_35__::func_914(iParam0))
	{
		return 5;
	}
	if (__LIB_2__::func_50())
	{
		return __LIB_1__::func_389(__LIB_5__::func_706(PLAYER::PLAYER_ID()));
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		return __LIB_1__::func_389(__LIB_5__::func_706(__LIB_0__::func_797()));
	}
	return 4;
}

void func_4253(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x157A37
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_35__::func_914(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
	if (__LIB_0__::func_172(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_4__::func_296(iParam0) };
					iVar1 = __LIB_4__::func_74(iParam0);
					*iParam2 = __LIB_0__::func_488(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					func_2961(iParam2, 166);
					HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
		}
	}
}

void func_4276(int iParam0, int iParam1)//Position - 0x164667
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_616(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_296(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_1633(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_1633(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_62(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_62(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4277(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4277(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4277(int iParam0)//Position - 0x1648F7
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

char* func_4286(int iParam0, var uParam1, var uParam2)//Position - 0x164C6F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK17A" /* GXT: You cannot enter the Facility while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	iVar0 = __LIB_0__::func_846(iParam0);
	iVar1 = __LIB_0__::func_797();
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar2 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::getMinusOneOrNull())
		{
			switch (iVar2)
			{
				case 192:
					return "BASE_BLOCK_A" /* GXT: You can't enter this Facility while resupplying another business. */;
				case 190:
					return "BASE_BLOCK_B" /* GXT: You can't enter this Facility while selling goods from another business. */;
				case 167:
					return "BASE_BLOCK_C" /* GXT: You can't enter this Facility while acquiring goods for a warehouse. */;
				case 168:
					return "BASE_BLOCK_D" /* GXT: You can't enter this Facility while selling goods from a warehouse. */;
				case 178:
					return "BASE_BLOCK_E" /* GXT: You can't enter this Facility while acquiring a vehicle for a warehouse. */;
				case 188:
					return "BASE_BLOCK_F" /* GXT: You can't enter this Facility while selling vehicles from a warehouse. */;
				case 225:
					return "BASE_BLOCK_G" /* GXT: You can't enter this Facility while acquiring goods for a bunker. */;
				case 226:
					return "BASE_BLOCK_H" /* GXT: You can't enter this Facility while selling goods from a bunker. */;
				case 229:
					return "BASE_BLOCK_I" /* GXT: You can't enter this Facility while acquiring goods for a hangar. */;
				case 230:
					return "BASE_BLOCK_J" /* GXT: You can't enter this Facility while selling goods from a hangar. */;
				}
			}
		default:
	}
	if (__LIB_3__::func_695())
	{
		return "BASE_BLOCK_K" /* GXT: You cannot enter your Facility with a prostitute. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "BASE_BLOCK_L" /* GXT: You can't access your Facility as the Beast. */;
	}
	if (__LIB_3__::func_693())
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	iVar3 = 0;
	if ((iVar1 != __LIB_0__::getMinusOneOrNull() && iVar1 != PLAYER::PLAYER_ID()) && __LIB_4__::func_493(iVar1, iVar0))
	{
		iVar3 = 1;
	}
	if (__LIB_4__::func_493(PLAYER::PLAYER_ID(), iVar0) || iVar3)
	{
		if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
		{
			return "BASE_BLOCK_M" /* GXT: You can't access this Facility whilst wearing the Ballistic Equipment. */;
		}
		if (__LIB_4__::func_912(PLAYER::PLAYER_ID()))
		{
			return "BASE_BLOCK_U" /* GXT: You can't enter this Facility whilst participating in a Business Battle. */;
		}
		if (__LIB_2__::func_906())
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_4__::func_493(PLAYER::PLAYER_ID(), iVar0) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_536(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 140)
			{
				return "BASE_BLOCK_N" /* GXT: Your Facility is unavailable whilst being a member of an MC. */;
			}
		}
		else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_4__::func_493(iVar1, iVar0))
			{
				if (__LIB_3__::func_673(iVar1))
				{
					return "BASE_BLOCK_O" /* GXT: Your Facility is unavailable when working as an Associate for a CEO. */;
				}
				else
				{
					return "BASE_BLOCK_P" /* GXT: Your Facility is unavailable when working as a Bodyguard for a VIP. */;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_952(PLAYER::PLAYER_ID()))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar7 = __LIB_7__::func_772(iVar6, &uVar5, &uVar4);
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar6, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar8);
				if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_5__::func_185(PLAYER::PLAYER_ID()) != 233) && !__LIB_35__::func_914(iParam0))
				{
					if ((((((__LIB_1__::func_589(iVar6) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar6))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar6), 13)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar6))) || __LIB_1__::func_588(iVar6)) || __LIB_3__::func_689(iVar6)) || (__LIB_0__::func_872(iVar6, 1) && iVar7 != iVar9))
					{
						return "BASE_BLOCK_R" /* GXT: You cannot enter the Facility with this vehicle. */;
					}
					if (__LIB_3__::func_690(iVar6))
					{
						return "BASE_BLOCK_T" /* GXT: You cannot enter the Facility with the Mobile Operations Center. */;
					}
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iVar3)
	{
		if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_5__::func_185(PLAYER::PLAYER_ID()) != 233) && !__LIB_35__::func_914(iParam0))
		{
			return "BASE_BLOCK_S" /* GXT: You cannot enter this Facility, only the Facility's Owner can drive a vehicle in. */;
		}
	}
	return "";
}

void func_4330(var uParam0, int iParam1)//Position - 0x166E63
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1497334/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1497278/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1497009/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1496950/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1496919/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1496799/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1496715/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1496651/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1496628/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1496619/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1496166/*__LIB_9__::func_474*/;
			break;
		case 14:
			uParam0->f_11 = 1496157/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1496149/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1496125/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1496116/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1491667/*__LIB_9__::func_759*/;
			break;
		case 75:
			uParam0->f_4 = 1491658/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1491474/*__LIB_31__::func_576*/;
			break;
		case 108:
			uParam0->f_55 = 1488525/*__LIB_10__::func_150*/;
			break;
		case 17:
			uParam0->f_17 = 1488017/*__LIB_8__::func_938*/;
			break;
		case 19:
			uParam0->f_17 = 1487990/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1487912/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1487849/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1487634/*__LIB_6__::func_909*/;
			break;
		case 22:
			uParam0->f_24 = 1487515/*__LIB_5__::func_627*/;
			break;
		case 25:
			uParam0->f_23 = 1486568/*func_4428*/;
			break;
		case 30:
			uParam0->f_8 = 1486004/*__LIB_5__::func_626*/;
			break;
		case 31:
			uParam0->f_39 = 1485825/*__LIB_5__::func_625*/;
			break;
		case 33:
			uParam0->f_40 = 1484795/*__LIB_8__::func_973*/;
			break;
		case 34:
			uParam0->f_41 = 1484101/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1484048/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1483471/*__LIB_6__::func_908*/;
			break;
		case 45:
			uParam0->f_14 = 1483462/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1483453/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1483276/*__LIB_8__::func_972*/;
			break;
		case 77:
			uParam0->f_13 = 1483265/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1482767/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1482726/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1482717/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1482708/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1482697/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1482686/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1482678/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1482669/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1482660/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1482431/*__LIB_8__::func_859*/;
			break;
		case 64:
			uParam0->f_47 = 1476517/*__LIB_10__::func_61*/;
			break;
		case 65:
			uParam0->f_21 = 1474855/*__LIB_8__::func_988*/;
			break;
		case 66:
			uParam0->f_21 = 1474540/*__LIB_6__::func_759*/;
			break;
		case 67:
			uParam0->f_21 = 1473815/*__LIB_7__::func_819*/;
			break;
		case 68:
			*uParam0 = 1473270/*__LIB_6__::func_987*/;
			break;
		case 69:
			*uParam0 = 1473261/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1473249/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1473240/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1473228/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1471512/*__LIB_7__::func_30*/;
			break;
		case 78:
			uParam0->f_59 = 1471062/*__LIB_8__::func_987*/;
			break;
		case 125:
			uParam0->f_19 = 1471046/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4428(int iParam0, int iParam1)//Position - 0x16AEE8
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_5__::func_628(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1633(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1633(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_8__::func_973(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_8__::func_973(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_860(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4429(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_860(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4429(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4429(int iParam0)//Position - 0x16B17B
{
	__LIB_8__::func_973(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4493(var uParam0, int iParam1)//Position - 0x16D8FF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1548828/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1548748/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1548249/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1548199/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1548112/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1548102/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1547982/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1547860/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1547772/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1547758/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1547749/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1547370/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1547361/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1547353/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1547329/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1547197/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1546915/*__LIB_9__::func_799*/;
			break;
		case 75:
			uParam0->f_4 = 1546901/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1546383/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1542759/*__LIB_10__::func_75*/;
			break;
		case 17:
			uParam0->f_17 = 1542222/*__LIB_8__::func_939*/;
			break;
		case 19:
			uParam0->f_17 = 1542195/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1542111/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1542047/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1541867/*__LIB_6__::func_910*/;
			break;
		case 22:
			uParam0->f_24 = 1541724/*__LIB_5__::func_642*/;
			break;
		case 25:
			uParam0->f_23 = 1541100/*func_4606*/;
			break;
		case 30:
			uParam0->f_8 = 1540621/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1540334/*__LIB_5__::func_756*/;
			break;
		case 33:
			uParam0->f_40 = 1539661/*__LIB_7__::func_65*/;
			break;
		case 34:
			uParam0->f_41 = 1538397/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1538352/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1512636/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1512627/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1512618/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1512610/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1512587/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1512483/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1512442/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1512309/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1512240/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1512229/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1512091/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1511903/*__LIB_12__::func_287*/;
			break;
		case 56:
			uParam0->f_46 = 1511894/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1511811/*__LIB_35__::func_919*/;
			break;
		case 58:
			uParam0->f_13 = 1511673/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1511665/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1510829/*__LIB_7__::func_64*/;
			break;
		case 66:
			uParam0->f_21 = 1510722/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1510658/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1510170/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1510161/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1510149/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1510140/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1510128/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1509566/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1509467/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1507483/*func_4561*/;
			break;
		case 87:
			uParam0->f_1 = 1505147/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1505138/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1505075/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1504753/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1500746/*func_4511*/;
			break;
		case 100:
			uParam0->f_22 = 1498711/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1498507/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1498491/*__LIB_4__::func_516*/;
			break;
	}
}

int func_4511(int iParam0, int* iParam1)//Position - 0x16E64A
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	func_4544(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_1518(&iVar0, &(iParam1->f_109), 12);
		__LIB_5__::func_638(iParam0, &(iParam1->f_109));
	}
	__LIB_7__::func_63(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_5__::func_343(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_5__::func_899(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

void func_4544(int iParam0)//Position - 0x16F3DD
{
	switch (iParam0)
	{
		case 83:
			func_1280(&(Global_1946250.f_4073), 8000, "Entry", -1151.0643f, -3411.0664f, 50.8151f, -85.9505f, 0f, -15.6087f, 50f, -1151.0643f, -3411.0664f, 50.8151f, -85.9505f, 0f, -15.6087f, 50f, 1f, 50, 0, 0, 0, 0);
			break;
		case 84:
			func_1280(&(Global_1946250.f_4073), 8000, "Entry", -1399.0032f, -3268.5234f, 39.0374f, -73.1941f, 0.0298f, -53.2804f, 48.7357f, -1399.0032f, -3268.5234f, 39.0374f, -73.1941f, 0.0298f, -53.2804f, 41.7354f, 1f, 50, 0, 0, 0, 0);
			break;
		case 85:
			func_1280(&(Global_1946250.f_4073), 8000, "Entry", -2021.4059f, 3157.5413f, 58.2636f, -83.1035f, -0.0577f, 156.039f, 50f, -2021.4059f, 3157.5413f, 58.2636f, -83.1034f, -0.0577f, 156.039f, 39.5172f, 1f, 50, 0, 0, 0, 0);
			break;
		case 86:
			func_1280(&(Global_1946250.f_4073), 8000, "Entry", -1876.5295f, 3111.2295f, 55.1665f, -85.0253f, 0.0949f, 141.9315f, 45f, -1876.5295f, 3111.2295f, 55.1665f, -84.1814f, 0.0949f, 141.9315f, 42f, 1f, 50, 0, 0, 0, 0);
			break;
		case 87:
			func_1280(&(Global_1946250.f_4073), 8000, "Entry", -2469.4438f, 3278.8835f, 56.5443f, -80.7367f, -0.0242f, 153.2984f, 50f, -2469.4438f, 3278.8835f, 56.5443f, -80.7367f, -0.0242f, 153.2984f, 43f, 1f, 50, 0, 0, 0, 0);
			break;
	}
}

int func_4561(int iParam0, int* iParam1)//Position - 0x17009B
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_1518(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_1311(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1336(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_4__::func_607(iParam0, &(iParam1->f_109));
	}
	func_4562(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_7__::func_63(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

void func_4562(int iParam0, int* iParam1, bool bParam2, bool bParam3)//Position - 0x1701B2
{
	struct<6> Var0;
	struct<6> Var1;
	if (!bParam2)
	{
		if (bParam3)
		{
			func_1280(iParam1, 6000, "DoorOpen", -2018.5708f, 3162.381f, 33.0983f, -0.1324f, -0.0117f, 148.6292f, 30.8076f, -2018.0559f, 3163.2703f, 33.094f, 1.7782f, -0.0117f, 150.9361f, 30.8076f, 1f, 0, 0, 12, 0, 0);
		}
		else
		{
			func_1280(iParam1, 5000, "DoorOpen", -2018.5708f, 3162.381f, 33.0983f, -0.1324f, -0.0117f, 148.6292f, 30.8076f, -2018.0559f, 3163.2703f, 33.094f, 1.7782f, -0.0117f, 150.9361f, 30.8076f, 1f, 0, 0, 12, 0, 0);
		}
	}
	else
	{
		func_1280(iParam1, 5000, "DoorOpen", -2018.5708f, 3162.381f, 33.0983f, -0.1324f, -0.0117f, 148.6292f, 30.8076f, -2018.0559f, 3163.2703f, 33.094f, 1.7782f, -0.0117f, 150.9361f, 30.8076f, 1f, 0, 0, 12, 0, 0);
	}
	if (!bParam2)
	{
		if (!bParam3)
		{
			func_1280(iParam1, 1000, "Entry", -2042.5227f, 3170.266f, 56.1319f, -44.4112f, -0.0966f, -133.4297f, 50f, -2042.5227f, 3170.266f, 56.1319f, -44.4112f, -0.0966f, -133.4297f, 31.5034f, 1f, 0, 0, 13, 0, 0);
			func_1280(iParam1, 4000, "Entry", -2042.5227f, 3170.266f, 56.1319f, -44.4112f, -0.0966f, -133.4297f, 31.5034f, -2042.5227f, 3170.266f, 56.1319f, -44.4112f, -0.0966f, -133.4297f, 31.5034f, 1f, 0, 0, 12, 0, 0);
		}
	}
	Var0 = { __LIB_4__::func_578(85) };
	Var1 = { __LIB_4__::func_578(iParam0) };
	__LIB_5__::func_993(Var0, iParam1, Var1);
	switch (iParam0)
	{
		case 83:
			iParam1->f_18[1 /*36*/].f_1 = { -1130.4193f, -3421.955f, 51.3961f };
			iParam1->f_18[1 /*36*/].f_7 = { -55.3193f, -0.1138f, 36.1014f };
			iParam1->f_18[1 /*36*/].f_13 = 45.9135f;
			iParam1->f_18[1 /*36*/].f_4 = { -1130.415f, -3421.9587f, 51.3961f };
			iParam1->f_18[1 /*36*/].f_10 = { -55.3193f, -0.1138f, 40.2985f };
			iParam1->f_18[1 /*36*/].f_14 = 34.9884f;
			iParam1->f_18[2 /*36*/].f_1 = { -1130.415f, -3421.9587f, 51.3961f };
			iParam1->f_18[2 /*36*/].f_7 = { -55.3193f, -0.1138f, 40.2985f };
			iParam1->f_18[2 /*36*/].f_13 = 34.9884f;
			iParam1->f_18[2 /*36*/].f_4 = { -1130.415f, -3421.9587f, 51.3961f };
			iParam1->f_18[2 /*36*/].f_10 = { -55.3193f, -0.1138f, 40.2985f };
			iParam1->f_18[2 /*36*/].f_14 = 34.9884f;
			break;
		case 84:
			iParam1->f_18[1 /*36*/].f_1 = { -1393.4413f, -3272.001f, 45.8679f };
			iParam1->f_18[1 /*36*/].f_7 = { -65.8799f, 0.0812f, -18.2091f };
			iParam1->f_18[1 /*36*/].f_13 = 46.6019f;
			iParam1->f_18[1 /*36*/].f_4 = { -1393.4381f, -3272.0005f, 45.8637f };
			iParam1->f_18[1 /*36*/].f_10 = { -69.7723f, 0.185f, -17.7706f };
			iParam1->f_18[1 /*36*/].f_14 = 43.477f;
			iParam1->f_18[2 /*36*/].f_1 = { -1393.4381f, -3272.0005f, 45.8637f };
			iParam1->f_18[2 /*36*/].f_7 = { -69.7723f, 0.185f, -17.7706f };
			iParam1->f_18[2 /*36*/].f_13 = 43.477f;
			iParam1->f_18[2 /*36*/].f_4 = { -1393.4381f, -3272.0005f, 45.8637f };
			iParam1->f_18[2 /*36*/].f_10 = { -69.7723f, 0.185f, -17.7706f };
			iParam1->f_18[2 /*36*/].f_14 = 43.477f;
			break;
		case 86:
			iParam1->f_18[1 /*36*/].f_1 = { -1884.3369f, 3115.6772f, 56.1709f };
			iParam1->f_18[1 /*36*/].f_7 = { -62.9275f, -0.0704f, -166.9268f };
			iParam1->f_18[1 /*36*/].f_13 = 46.6019f;
			iParam1->f_18[1 /*36*/].f_4 = { -1884.3369f, 3115.6772f, 56.1709f };
			iParam1->f_18[1 /*36*/].f_10 = { -62.9275f, -0.0704f, -166.9268f };
			iParam1->f_18[1 /*36*/].f_14 = 39.6075f;
			iParam1->f_18[2 /*36*/].f_1 = { -1884.3369f, 3115.6772f, 56.1709f };
			iParam1->f_18[2 /*36*/].f_7 = { -62.9275f, -0.0704f, -166.9268f };
			iParam1->f_18[2 /*36*/].f_13 = 39.6075f;
			iParam1->f_18[2 /*36*/].f_4 = { -1884.3369f, 3115.6772f, 56.1709f };
			iParam1->f_18[2 /*36*/].f_10 = { -62.9275f, -0.0704f, -166.9268f };
			iParam1->f_18[2 /*36*/].f_14 = 39.6075f;
			break;
		case 87:
			iParam1->f_18[1 /*36*/].f_1 = { -2485.1272f, 3287.3044f, 60.7348f };
			iParam1->f_18[1 /*36*/].f_7 = { -52.4066f, -0.219f, -151.274f };
			iParam1->f_18[1 /*36*/].f_13 = 43.5099f;
			iParam1->f_18[1 /*36*/].f_4 = { -2485.1272f, 3287.3044f, 60.7348f };
			iParam1->f_18[1 /*36*/].f_10 = { -53.4063f, -0.219f, -146.2641f };
			iParam1->f_18[1 /*36*/].f_14 = 35.3156f;
			iParam1->f_18[2 /*36*/].f_1 = { -2485.1272f, 3287.3044f, 60.7348f };
			iParam1->f_18[2 /*36*/].f_7 = { -53.4063f, -0.219f, -146.2641f };
			iParam1->f_18[2 /*36*/].f_13 = 35.3156f;
			iParam1->f_18[2 /*36*/].f_4 = { -2485.1272f, 3287.3044f, 60.7348f };
			iParam1->f_18[2 /*36*/].f_10 = { -53.4063f, -0.219f, -146.2641f };
			iParam1->f_18[2 /*36*/].f_14 = 35.3156f;
			break;
	}
}

void func_4606(int iParam0, int iParam1)//Position - 0x1783EC
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_643(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_302(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_1633(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_1633(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_65(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_65(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4607(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4607(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4607(int iParam0)//Position - 0x17862E
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4650(var uParam0, int iParam1)//Position - 0x17A225
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1558249/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1558193/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1557974/*__LIB_6__::func_912*/;
			break;
		case 3:
			uParam0->f_34 = 1557923/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1557890/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1557826/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1557817/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 79:
			*uParam0 = 1557793/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1557784/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1557692/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1557683/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1557675/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1557423/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1557414/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1557405/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1557396/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1557387/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1557342/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1557330/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1557283/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1557231/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1557175/*__LIB_6__::func_911*/;
			break;
		case 22:
			uParam0->f_24 = 1557093/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1556124/*func_4686*/;
			break;
		case 30:
			uParam0->f_8 = 1555914/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1555882/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1555692/*__LIB_9__::func_285*/;
			break;
		case 34:
			uParam0->f_41 = 1551689/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1551636/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1550445/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1550436/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1550427/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1550419/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1550408/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1550305/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1550280/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1550242/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1550233/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1550222/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1550141/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1550133/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1550124/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1550114/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1549907/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1549899/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1549891/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1549883/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1549875/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1549866/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1549857/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1549845/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1549836/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1549824/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1549815/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1549806/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1549798/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4686(int iParam0, int iParam1)//Position - 0x17BE9C
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_8__::func_863(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		__LIB_8__::func_195(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_285(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_285(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4687(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4687(iParam0);
					}
					Jump @636; //curOff = 617
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4687(int iParam0)//Position - 0x17C11B
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4714(var uParam0, int iParam1)//Position - 0x17C6F2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1634411/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1634355/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1632810/*__LIB_8__::func_869*/;
			break;
		case 3:
			uParam0->f_34 = 1632761/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1632728/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1632664/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1632641/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1632617/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1632497/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1632430/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1632421/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1632076/*__LIB_9__::func_505*/;
			break;
		case 14:
			uParam0->f_11 = 1632067/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1632059/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1626735/*__LIB_9__::func_800*/;
			break;
		case 13:
			uParam0->f_2 = 1626726/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1626717/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1626692/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1619695/*__LIB_12__::func_848*/;
			break;
		case 17:
			uParam0->f_17 = 1619111/*__LIB_9__::func_477*/;
			break;
		case 19:
			uParam0->f_17 = 1619084/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1619023/*__LIB_9__::func_476*/;
			break;
		case 21:
			uParam0->f_3 = 1618903/*__LIB_6__::func_914*/;
			break;
		case 74:
			uParam0->f_53 = 1618847/*__LIB_6__::func_913*/;
			break;
		case 22:
			uParam0->f_24 = 1618765/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1617793/*func_4794*/;
			break;
		case 30:
			uParam0->f_8 = 1617053/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1616782/*__LIB_5__::func_760*/;
			break;
		case 33:
			uParam0->f_40 = 1615846/*__LIB_9__::func_504*/;
			break;
		case 34:
			uParam0->f_41 = 1612502/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1612449/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1611766/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1611757/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1611748/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1611305/*__LIB_10__::func_65*/;
			break;
		case 77:
			uParam0->f_13 = 1611294/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1611191/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1611166/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1611128/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1611104/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1611093/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1611014/*__LIB_8__::func_865*/;
			break;
		case 54:
			uParam0->f_45 = 1611006/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1610997/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1610987/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1610758/*__LIB_8__::func_864*/;
			break;
		case 64:
			uParam0->f_47 = 1566160/*__LIB_10__::func_154*/;
			break;
		case 65:
			uParam0->f_21 = 1565022/*__LIB_8__::func_989*/;
			break;
		case 66:
			uParam0->f_21 = 1564799/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1563904/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1563359/*__LIB_6__::func_989*/;
			break;
		case 69:
			*uParam0 = 1563350/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1563338/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1563329/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1563317/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1561554/*__LIB_35__::func_952*/;
			break;
		case 73:
			uParam0->f_51 = 1559786/*__LIB_35__::func_921*/;
			break;
		case 78:
			uParam0->f_59 = 1559253/*__LIB_8__::func_974*/;
			break;
	}
}

void func_4794(int iParam0, int iParam1)//Position - 0x18AF81
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_9__::func_476(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1633(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1633(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_504(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_504(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_866(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4795(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_866(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4795(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4795(int iParam0)//Position - 0x18B214
{
	__LIB_9__::func_504(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4862(var uParam0, int iParam1)//Position - 0x18F074
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1665831/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1665715/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1664485/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1664415/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1664242/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1664118/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1663895/*__LIB_6__::func_399*/;
			break;
		case 111:
			uParam0->f_35 = 1663881/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1663857/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1663737/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1663499/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1663490/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1661786/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1661777/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1661769/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1661263/*func_4979*/;
			break;
		case 13:
			uParam0->f_2 = 1661224/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1661215/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1661206/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1660738/*__LIB_9__::func_509*/;
			break;
		case 108:
			uParam0->f_55 = 1658699/*__LIB_9__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1656563/*__LIB_9__::func_507*/;
			break;
		case 19:
			uParam0->f_17 = 1656536/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1656452/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1656352/*__LIB_6__::func_918*/;
			break;
		case 74:
			uParam0->f_53 = 1656185/*__LIB_5__::func_369*/;
			break;
		case 22:
			uParam0->f_24 = 1656082/*__LIB_5__::func_662*/;
			break;
		case 25:
			uParam0->f_23 = 1655430/*func_4952*/;
			break;
		case 30:
			uParam0->f_8 = 1654930/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1654633/*__LIB_5__::func_762*/;
			break;
		case 33:
			uParam0->f_40 = 1653635/*__LIB_9__::func_506*/;
			break;
		case 32:
			*uParam0 = 1653531/*__LIB_6__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 1651386/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1569448/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1651326/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1651317/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1651308/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1651042/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1651031/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1650891/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1650850/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1650653/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1650569/*__LIB_6__::func_916*/;
			break;
		case 52:
			uParam0->f_15 = 1650558/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1650276/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1650268/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1650259/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1650198/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1649916/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1648554/*__LIB_9__::func_521*/;
			break;
		case 65:
			uParam0->f_21 = 1648511/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1647808/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1646724/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1646133/*__LIB_6__::func_991*/;
			break;
		case 69:
			*uParam0 = 1646124/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1646112/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1646103/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1646091/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1643449/*__LIB_9__::func_520*/;
			break;
		case 84:
			uParam0->f_1 = 1642205/*func_4886*/;
			break;
		case 85:
			uParam0->f_1 = 1640652/*func_4882*/;
			break;
		case 87:
			uParam0->f_1 = 1639020/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1639011/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1638968/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1638667/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1637901/*func_4874*/;
			break;
		case 94:
			uParam0->f_1 = 1636401/*__LIB_11__::func_353*/;
			break;
		case 102:
			uParam0->f_1 = 1635832/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1635824/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1635749/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1635675/*__LIB_8__::func_975*/;
			break;
		case 125:
			uParam0->f_19 = 1635651/*__LIB_4__::func_688*/;
			break;
	}
}

int func_4874(var uParam0, var uParam1)//Position - 0x18FE0D
{
	func_1280(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	func_1280(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_1518(&(uParam1->f_248), &(uParam1->f_109), 14);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(joaat("phantom3"), 0f, 10f, 0f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
	{
		uParam1->f_109.f_12 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), 0f, 10f, 10f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		uParam1->f_109.f_1[0] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 8f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 942.387f, -3245.778f, -94.91f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 87.91f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, 5f);
		uParam1->f_140[1] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		__LIB_4__::func_37(&(uParam1->f_109), 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam1->f_109, 3);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
		{
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
			VEHICLE::VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(uParam1->f_109.f_12, 1);
			VEHICLE::VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(uParam1->f_109.f_12, 0f);
			VEHICLE::VEHICLE_SET_OVERRIDE_SIDE_RATIO(uParam1->f_109.f_12, 0f);
		}
	}
	__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_4882(int iParam0, var uParam1)//Position - 0x1908CC
{
	int iVar0;
	struct<4> Var1;
	bool bVar2;
	bool bVar3;
	struct<6> Var4;
	Var1 = { __LIB_4__::func_696(70) };
	switch (__LIB_3__::func_616())
	{
		case 0:
			func_1280(&(Global_1946250.f_3638), 4400, "BunkerDoorOpen", 503.952f, 3028.7239f, 41.1295f, 7.3352f, -0.2947f, 142.9671f, 33.2472f, 504.336f, 3029.3562f, 41.0353f, 7.3352f, -0.2947f, 142.9671f, 33.2472f, 1f, 50, 0, 0, 0, 0);
			if (__LIB_0__::func_680())
			{
				__LIB_6__::func_397(&(Global_1946250.f_3638), (Global_1946250.f_3638.f_372 - 1), Var1, __LIB_0__::func_327(0f, 1f, 0f, (Var1.f_3.f_2 - 90f)));
			}
			func_1280(&(Global_1946250.f_3638), 3500, "BunkerDoorEntry", 501.7677f, 3013.7969f, 43.4078f, -7.2709f, -0.2947f, 8.4302f, 33.2472f, 501.095f, 3013.1267f, 43.487f, -11.7757f, -0.2947f, 20.5798f, 33.2472f, 1f, 50, 0, 0, 0, 0);
			break;
		case 1:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			bVar2 = false;
			bVar3 = false;
			switch (iParam0)
			{
				case 74:
					if (iVar0 == 1)
					{
						bVar2 = true;
					}
					bVar3 = true;
					break;
				case 77:
					if (iVar0 == 2)
					{
						__LIB_4__::func_706(&iVar0, 0, 3);
					}
					break;
				case 73:
					if (iVar0 == 2)
					{
						__LIB_4__::func_706(&iVar0, 0, 3);
					}
					break;
				case 78:
				case 80:
					if (iVar0 == 1)
					{
						__LIB_4__::func_706(&iVar0, 0, 3);
					}
					break;
			}
			if (__LIB_3__::func_690(uParam1->f_109))
			{
				if (__LIB_0__::func_680())
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 3;
				}
			}
			func_1280(&(Global_1946250.f_3638), 4000, "BunkerDoorOpen", 506.7242f, 3027.3523f, 41.119f, 2.3987f, 0.3587f, 120.02f, 26.2144f, 506.0964f, 3026.9622f, 41.2278f, 3.9494f, 0.3587f, 120.3686f, 26.2144f, 0.2f, 50, 0, 0, 0, 0);
			if (__LIB_0__::func_680() && !bVar3)
			{
				__LIB_6__::func_397(&(Global_1946250.f_3638), (Global_1946250.f_3638.f_372 - 1), Var1, __LIB_0__::func_327(0f, 1f, 0f, (Var1.f_3.f_2 - 90f)));
			}
			switch (iVar0)
			{
				case 0:
					func_1280(&(Global_1946250.f_3638), 7500, "BunkerDoorEntryTopDriver", 501.1288f, 3002.7197f, 43.8039f, -0.9762f, 0f, -3.618f, 28.3499f, 500.8275f, 3002.797f, 43.8024f, -0.9762f, 0f, 3.6719f, 28.3499f, 0.2f, 0, 0, 0, 0, 0);
					if (__LIB_0__::func_680() && !bVar2)
					{
						__LIB_6__::func_397(&(Global_1946250.f_3638), (Global_1946250.f_3638.f_372 - 1), Var1, __LIB_0__::func_327(0f, 1f, 0f, (Var1.f_3.f_2 - 90f)));
					}
					break;
				case 1:
					func_1280(&(Global_1946250.f_3638), 7500, "BunkerDoorEntryTopDriver", 522.3356f, 3029.9004f, 40.6795f, 4.5222f, 0f, 98.7932f, 28.571f, 521.2911f, 3028.657f, 40.7756f, 4.5222f, 0f, 106.3725f, 28.571f, 0.2f, 0, 0, 0, 0, 0);
					if (__LIB_0__::func_680() && !bVar2)
					{
						__LIB_6__::func_397(&(Global_1946250.f_3638), (Global_1946250.f_3638.f_372 - 1), Var1, __LIB_0__::func_327(0f, 1f, 0f, (Var1.f_3.f_2 - 90f)));
					}
					break;
				case 2:
					func_1280(&(Global_1946250.f_3638), 7500, "BunkerDoorEntryTopDriver", 498.3441f, 3002.5098f, 57.9981f, -28.6131f, 0f, -16.6355f, 31.582f, 495.9691f, 3002.8262f, 57.3614f, -43.8163f, 0f, -7.6098f, 31.582f, 0.2f, 0, 0, 0, 0, 0);
					if (__LIB_0__::func_680() && !bVar2)
					{
						__LIB_6__::func_397(&(Global_1946250.f_3638), (Global_1946250.f_3638.f_372 - 1), Var1, __LIB_0__::func_327(0f, 1f, 0f, (Var1.f_3.f_2 - 90f)));
					}
					break;
				case 3:
					func_1280(&(Global_1946250.f_3638), 7500, "BunkerDoorEntryTopDriver", 493.6764f, 3014.5925f, 43.126f, -2.4938f, 0f, -37.8158f, 35.905f, 494.3485f, 3015.4578f, 44.1464f, -4.6679f, 0f, -36.8404f, 35.905f, 0.2f, 0, 0, 0, 0, 0);
					break;
			}
			break;
	}
	Var4 = { 494.615f, 3015.84f, 41.3727f };
	Var4.f_3 = { 0f, 0f, 54.899063f };
	func_1321(iParam0, &(Global_1946250.f_3638), Var4, 0);
	return 1;
}

int func_4886(int iParam0, var uParam1)//Position - 0x190EDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_4__::func_694(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_616() == 1)
		{
			__LIB_5__::func_457(0);
		}
	}
	switch (__LIB_3__::func_616())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_1336(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_5__::func_911(iParam0, &(uParam1->f_140[0]));
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_140[0], false, false);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_248) == joaat("trailersmall2"))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_248))
					{
						iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(uParam1->f_248);
						if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								func_1518(&iVar2, &(uParam1->f_109), 14);
								func_1311(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_1518(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_1518(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_1518(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_1311(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_5__::func_911(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_5__::func_911(iParam0, &(uParam1->f_109.f_12));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109, uParam1->f_248, false);
			}
			__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_5__::func_914(iParam0, uParam1))
	{
		return 0;
	}
	if (func_1305(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_3__::func_616() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_1336(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_4__::func_709(&(uParam1->f_109.f_1), 5f);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			VEHICLE::SET_VEHICLE_STEER_FOR_BUILDINGS(uParam1->f_109, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[0], false))
		{
			PED::SET_PED_LOD_MULTIPLIER(uParam1->f_140[0], 5f);
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_658(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_4__::func_707(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_4952(int iParam0, int iParam1)//Position - 0x194286
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_919(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_4__::func_303(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_1633(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_1633(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_506(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_506(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4953(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4953(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4953(int iParam0)//Position - 0x1944E4
{
	__LIB_9__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_4979(var uParam0)//Position - 0x19594F
{
	bool bVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	bVar0 = false;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
	{
		if (__LIB_5__::func_815(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			return 1;
		}
		else if (__LIB_42__::func_44())
		{
			return 1;
		}
	}
	if (!__LIB_7__::func_71(1) && !bVar0)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 7))
	{
		return 1;
	}
	bVar1 = false;
	if (__LIB_9__::func_523(bVar1, 6) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_728(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_4__::func_384() || __LIB_4__::func_383(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_5004(var uParam0, int iParam1)//Position - 0x196B30
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1707837/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1705518/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1705455/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1705399/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1704683/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1704675/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1704666/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 79:
			*uParam0 = 1704642/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1704633/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1702803/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1702794/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1702786/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1702777/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1702768/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1702759/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1702750/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1702741/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1702715/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1702703/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1702694/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1702685/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1702676/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1702668/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1702660/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1701499/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1701487/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1701459/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1701450/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1701405/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1667724/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1667715/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1667706/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1667698/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1667687/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1667679/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1667670/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1667350/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1667321/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1667290/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1667256/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1667212/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1667183/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1667174/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1667117/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1667109/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1667101/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1667093/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1667085/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1667059/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1667033/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1667021/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1667012/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1667000/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1666991/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1666983/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1666800/*__LIB_7__::func_855*/;
			break;
	}
}

void func_5082(var uParam0, int iParam1)//Position - 0x1A142E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1751890/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1751580/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1746645/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1746616/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1746422/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1746072/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1745930/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1745906/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1745368/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1745263/*__LIB_7__::func_823*/;
			break;
		case 11:
			uParam0->f_11 = 1745254/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1745149/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1745140/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1745132/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1745123/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1745114/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1744825/*__LIB_9__::func_802*/;
			break;
		case 75:
			uParam0->f_4 = 1744816/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1744732/*__LIB_7__::func_39*/;
			break;
		case 108:
			uParam0->f_55 = 1744723/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1744102/*__LIB_7__::func_859*/;
			break;
		case 19:
			uParam0->f_17 = 1743901/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1743837/*__LIB_7__::func_768*/;
			break;
		case 21:
			uParam0->f_3 = 1743777/*__LIB_7__::func_37*/;
			break;
		case 74:
			uParam0->f_53 = 1743768/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1743527/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1743154/*func_5121*/;
			break;
		case 30:
			uParam0->f_8 = 1743016/*__LIB_7__::func_858*/;
			break;
		case 31:
			uParam0->f_39 = 1742574/*__LIB_7__::func_857*/;
			break;
		case 33:
			uParam0->f_40 = 1741909/*__LIB_7__::func_856*/;
			break;
		case 34:
			uParam0->f_41 = 1739331/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1739286/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1713253/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1713025/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1712849/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1712841/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1712830/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1712588/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1712556/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1712490/*__LIB_10__::func_5*/;
			break;
		case 51:
			*uParam0 = 1712466/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1712283/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1711688/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1711451/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1711442/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1711377/*__LIB_7__::func_35*/;
			break;
		case 58:
			uParam0->f_13 = 1710955/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1710947/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1710939/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1710879/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1710861/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1710852/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1710843/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1710339/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1710191/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1710146/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1710137/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1710129/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1710113/*__LIB_4__::func_516*/;
			break;
	}
}

void func_5121(int iParam0, int iParam1)//Position - 0x1A9932
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_802(PLAYER::PLAYER_ID()) && __LIB_7__::func_768(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_769(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::getMinusOneOrNull() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_1633(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_5159(var uParam0, int iParam1)//Position - 0x1ABB5B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1786749/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1786639/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1784181/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1784152/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1783992/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1783874/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1783813/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1783789/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1783669/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1783518/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1783509/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1782506/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1782497/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1782489/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1782480/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1782326/*__LIB_9__::func_803*/;
			break;
		case 75:
			uParam0->f_4 = 1782317/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1782229/*__LIB_7__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1781445/*__LIB_42__::func_45*/;
			break;
		case 17:
			uParam0->f_17 = 1780816/*__LIB_7__::func_69*/;
			break;
		case 19:
			uParam0->f_17 = 1780789/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1780750/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1780690/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1780681/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1780628/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1780324/*func_5247*/;
			break;
		case 30:
			uParam0->f_8 = 1780201/*__LIB_7__::func_861*/;
			break;
		case 31:
			uParam0->f_39 = 1779980/*__LIB_5__::func_765*/;
			break;
		case 33:
			uParam0->f_40 = 1779695/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1779289/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1779244/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1761711/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1761702/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1761618/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1761610/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1761587/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1761535/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1761503/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1761325/*__LIB_8__::func_977*/;
			break;
		case 51:
			*uParam0 = 1761228/*__LIB_9__::func_319*/;
			break;
		case 52:
			uParam0->f_15 = 1761217/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1760902/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1760037/*__LIB_9__::func_318*/;
			break;
		case 56:
			uParam0->f_46 = 1760028/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1755256/*__LIB_9__::func_325*/;
			break;
		case 58:
			uParam0->f_13 = 1755242/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1753734/*__LIB_9__::func_522*/;
			break;
		case 65:
			uParam0->f_21 = 1753726/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1753675/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1753647/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1753638/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1753629/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1753345/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1753249/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1753237/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1753049/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1752877/*__LIB_6__::func_13*/;
			break;
	}
}

void func_5247(int iParam0, int iParam1)//Position - 0x1B2A64
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_744(PLAYER::PLAYER_ID()) && __LIB_5__::func_820(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_816(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::getMinusOneOrNull() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_1633(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_5290(var uParam0, int iParam1)//Position - 0x1B4386
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1814485/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1814339/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1809151/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1809122/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1808711/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1808541/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1808146/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1808122/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1808113/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1808018/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1808009/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1808001/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1807992/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1807763/*__LIB_9__::func_804*/;
			break;
		case 75:
			uParam0->f_4 = 1807754/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1807666/*__LIB_7__::func_42*/;
			break;
		case 108:
			uParam0->f_55 = 1807657/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1807403/*__LIB_7__::func_825*/;
			break;
		case 19:
			uParam0->f_17 = 1807376/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1807367/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1807358/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1807349/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1807341/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1807333/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1807210/*__LIB_7__::func_863*/;
			break;
		case 31:
			uParam0->f_39 = 1806963/*__LIB_7__::func_824*/;
			break;
		case 33:
			uParam0->f_40 = 1806707/*__LIB_6__::func_347*/;
			break;
		case 34:
			uParam0->f_41 = 1804554/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1804509/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1790060/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1790051/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1790042/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1790034/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1790023/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1789971/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1789939/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1789810/*__LIB_7__::func_41*/;
			break;
		case 51:
			*uParam0 = 1789786/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1789775/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1789124/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1788488/*__LIB_7__::func_862*/;
			break;
		case 56:
			uParam0->f_46 = 1788479/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1788412/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1788398/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1788019/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1787944/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1787893/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1787875/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1787866/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1787857/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1787740/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1787731/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1787719/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1787710/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1787702/*__LIB_0__::func_467*/;
			break;
	}
}

void func_5361(var uParam0, int iParam1)//Position - 0x1BAFDE
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1814952/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1814943/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1814934/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1814774/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1814766/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1814611/*__LIB_8__::func_991*/;
			break;
	}
}

void func_5369(var uParam0, int iParam1)//Position - 0x1BB1B1
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1815169/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1815160/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1815151/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1814774/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1815142/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1815078/*__LIB_8__::func_991*/;
			break;
	}
}

void func_5375(var uParam0, int iParam1)//Position - 0x1BB28A
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1815396/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1815387/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1814774/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1815378/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1815278/*__LIB_8__::func_992*/;
			break;
	}
}

int func_5381(var uParam0, var uParam1)//Position - 0x1BB37D
{
	if (func_5382(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

int func_5382(var uParam0, var uParam1)//Position - 0x1BB395
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	if (uParam1->f_162[0] == 18)
	{
		return 1;
	}
	Var0 = { uParam1->f_2 };
	if (uParam1->f_230[0] == 0)
	{
		if (__LIB_0__::func_86(uParam1->f_65[uParam1->f_162[0] /*3*/]))
		{
			fVar1 = (360f / 18f);
			uParam1->f_65[uParam1->f_162[0] /*3*/] = (Var0.f_0 + (SYSTEM::COS((fVar1 * IntToFloat(uParam1->f_162[0]))) * uParam1->f_169[0]));
			uParam1->f_65[uParam1->f_162[0] /*3*/].f_1 = (Var0.f_1 + (SYSTEM::SIN((fVar1 * IntToFloat(uParam1->f_162[0]))) * uParam1->f_169[0]));
			uParam1->f_65[uParam1->f_162[0] /*3*/].f_2 = (Var0.f_2 + 40f);
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam1->f_65[uParam1->f_162[0] /*3*/], &fVar2, false, false))
			{
				uParam1->f_65[uParam1->f_162[0] /*3*/].f_2 = (fVar2 + uParam1->f_169[1]);
			}
			else
			{
				uParam1->f_162[0]++;
				return 0;
			}
			if (MISC::ABSF((uParam1->f_65[uParam1->f_162[0] /*3*/].f_2 - Var0.f_2)) > 4f)
			{
				uParam1->f_162[0]++;
				return 0;
			}
		}
		Var3 = { uParam1->f_65[uParam1->f_162[0] /*3*/] };
		Var4 = { Var0 + Vector(0.1f, 0f, 0f) };
		uParam1->f_230[0] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var3, Var4, 511, 0, 7);
		if (uParam1->f_230[0] != 0)
		{
		}
	}
	else
	{
		iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam1->f_230[0], &iVar5, &uVar6, &uVar7, &uVar8);
		if (iVar9 == 2)
		{
			if (iVar5 == 0)
			{
				MISC::SET_BIT(&(uParam1->f_176[0]), uParam1->f_162[0]);
			}
			uParam1->f_162[0]++;
			uParam1->f_230[0] = 0;
		}
		else if (iVar9 == 0)
		{
			uParam1->f_230[0] = 0;
		}
	}
	return 0;
}

void func_5385(var uParam0, var uParam1)//Position - 0x1BB5B5
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	if (((((((((!ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[2]) || ENTITY::IS_ENTITY_DEAD(uParam1->f_28[2], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[3])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_28[3], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_55[0])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_55[0], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_55[1])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_55[1], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[1])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_28[1], false))
	{
		return;
	}
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam1->f_28[3]);
	if (__LIB_3__::func_630(uParam0, 0))
	{
		if (!BitTest(uParam1->f_176[0], 3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[3]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[1]))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_28[3], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[1], 0f, -2f, 5f), false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_28[3], (ENTITY::GET_ENTITY_HEADING(uParam1->f_28[1]) + 10f));
			}
			MISC::SET_BIT(&(uParam1->f_176[0]), 3);
		}
		fVar0 = __LIB_1__::func_712(1f, (SYSTEM::TO_FLOAT(uParam0->f_375) / SYSTEM::TO_FLOAT((uParam0->f_18[0 /*36*/] - 1500))));
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[2], 0f, 0f, 0f) - uParam1->f_65[4 /*3*/] };
		Var1.f_2 = (Var1.f_2 * 0.25f);
		uParam1->f_65[4 /*3*/] = { uParam1->f_65[4 /*3*/] + Var1 * FtoV(MISC::GET_FRAME_TIME()) * FtoV((1f - __LIB_1__::func_712(1f, (SYSTEM::VMAG(Var1) / uParam1->f_169[0])))) * Vector(fVar0, fVar0, fVar0) };
		if (uParam0->f_375 >= 5000)
		{
			if (!BitTest(uParam1->f_176[0], 4))
			{
				TASK::TASK_HELI_MISSION(uParam1->f_55[0], uParam1->f_28[2], 0, 0, ENTITY::GET_ENTITY_COORDS(uParam1->f_28[2], true) - Vector(50f, 0f, 0f), 4, 10f, 1f, ENTITY::GET_ENTITY_HEADING(uParam1->f_28[2]), 0, 0, -1f, 0);
				CAM::STOP_CAM_POINTING(uParam0->f_387);
				MISC::SET_BIT(&(uParam1->f_176[0]), 4);
			}
			uParam1->f_65[4 /*3*/].f_2 = uParam1->f_169[2];
		}
		else
		{
			uParam1->f_169[2] = uParam1->f_65[4 /*3*/].f_2;
		}
		CAM::POINT_CAM_AT_COORD(uParam0->f_387, uParam1->f_65[4 /*3*/]);
		if (!BitTest(uParam1->f_176[0], 4))
		{
			fVar2 = 0f;
			if (fVar0 >= fVar2)
			{
				CAM::SET_CAM_FOV(uParam0->f_387, (uParam0->f_18[0 /*36*/].f_13 - ((10f * (fVar0 - fVar2)) / (1f - fVar2))));
			}
		}
		GRAPHICS::DRAW_DEBUG_SPHERE(uParam1->f_65[4 /*3*/], 0.1f, 255, 0, 0, 255);
	}
	if (uParam0->f_382 == 1 && !__LIB_3__::func_630(uParam0, 1))
	{
		CAM::STOP_CAM_POINTING(uParam0->f_387);
	}
	if (__LIB_3__::func_630(uParam0, 1))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(uParam1->f_28[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_28[2], true);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_28[2], false, false);
		}
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_28[3], true) };
		Var3 = { Var3 + Vector(1f, 0f, 0f) * Vector(1.45f, 1.45f, 1.45f) * FtoV(MISC::GET_FRAME_TIME()) };
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_28[3], Var3, false, false, true);
		if (!BitTest(uParam1->f_176[0], 0))
		{
			VEHICLE::SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(uParam1->f_28[3], true);
			VEHICLE::ATTACH_ENTITY_TO_CARGOBOB(uParam1->f_28[3], uParam1->f_28[1], 0, 0f, 0f, 3f);
			MISC::SET_BIT(&(uParam1->f_176[0]), 0);
		}
	}
}

void func_5386(var uParam0, var uParam1)//Position - 0x1BB93B
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	Var0 = { uParam1->f_2 };
	fVar1 = uParam1->f_5;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0]))
	{
		if (ENTITY::GET_ENTITY_MODEL(uParam1->f_28[0]) != joaat("phantom2"))
		{
			VEHICLE::DELETE_VEHICLE(&(uParam1->f_28[0]));
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[1]))
	{
		uParam1->f_28[1] = VEHICLE::CREATE_VEHICLE(uParam1->f_7[2], Var0, ENTITY::GET_ENTITY_HEADING(uParam1->f_28[0]), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[1]))
	{
		VEHICLE::SET_TRAILER_LEGS_RAISED(uParam1->f_28[1]);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_28[0], false))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_28[0], uParam1->f_28[1], false);
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_28[1]))
			{
				ENTITY::DETACH_ENTITY(uParam1->f_28[1], true, true);
			}
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0.111684f, -8.4309f, 1.53631f), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_28[1], ENTITY::GET_ENTITY_HEADING(uParam1->f_28[0]));
		}
		else
		{
			Var2 = { __LIB_2__::func_770(ENTITY::GET_ENTITY_MODEL(uParam1->f_28[1]), Var0) };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_28[1], Var2, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_28[1], 0f, 0f, ENTITY::GET_ENTITY_HEADING(uParam1->f_28[1]), 2, true);
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_28[1], true) };
		fVar1 = ENTITY::GET_ENTITY_HEADING(uParam1->f_28[1]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_28[1], false))
	{
		Var3 = { func_5388(__LIB_3__::func_623(fVar1), 1) };
		Var3 = { __LIB_0__::func_327(Var3, fVar1) };
		Var4 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam1->f_28[1]) };
		uParam0->f_18[1 /*36*/].f_1 = { Var0 + Vector(50f, 0f, 0f) + Var4 * Vector(2f, 2f, 2f) + func_5388(Var3, 2) * Vector(5f, 5f, 5f) };
		Var5 = { uParam0->f_18[1 /*36*/].f_1 + Var3 * Vector(2f, 2f, 2f) };
		Var5.f_2 = Var0.f_2;
		Var6 = { __LIB_0__::func_79(Var5 - uParam0->f_18[1 /*36*/].f_1) };
		uParam0->f_18[1 /*36*/].f_4 = { uParam0->f_18[1 /*36*/].f_1 + func_5388(Var3, 0) * Vector(1f, 1f, 1f) };
		uParam0->f_18[1 /*36*/].f_7 = { __LIB_35__::func_917(Var6) };
		uParam0->f_18[1 /*36*/].f_10 = { uParam0->f_18[1 /*36*/].f_7 };
	}
	uParam1->f_65[2 /*3*/] = { uParam0->f_18[0 /*36*/].f_1 + uParam1->f_65[0 /*3*/] * Vector(30f, 30f, 30f) + func_5388(uParam1->f_65[0 /*3*/], 2) * Vector(28f, 28f, 28f) };
	uParam1->f_65[1 /*3*/] = { func_5388(uParam1->f_65[0 /*3*/], 0) };
	fVar7 = (MISC::GET_HEADING_FROM_VECTOR_2D(uParam1->f_65[1 /*3*/], uParam1->f_65[1 /*3*/].f_1) + 10f);
	uParam1->f_65[1 /*3*/] = { __LIB_3__::func_623(fVar7) };
	uParam1->f_65[3 /*3*/] = { Var0 + uParam1->f_65[0 /*3*/] * Vector(34f, 34f, 34f) + func_5388(uParam1->f_65[0 /*3*/], 2) * Vector(5f, 5f, 5f) };
	uParam1->f_65[4 /*3*/] = { uParam0->f_18[0 /*36*/].f_1 + uParam1->f_65[0 /*3*/] * Vector(30f, 30f, 30f) };
	uParam1->f_169[0] = SYSTEM::VDIST(uParam1->f_65[4 /*3*/], uParam1->f_65[2 /*3*/]);
	uParam1->f_28[2] = VEHICLE::CREATE_VEHICLE(uParam1->f_7[1], uParam1->f_65[2 /*3*/], fVar7, false, false, false);
	uParam1->f_55[0] = PED::CREATE_PED(4, uParam1->f_7[3], uParam1->f_65[2 /*3*/], 0f, false, false);
	if (((ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[2]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_28[2], false)) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_55[0])) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_55[0], false))
	{
		PED::SET_PED_INTO_VEHICLE(uParam1->f_55[0], uParam1->f_28[2], -1);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam1->f_28[2]);
		VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(uParam1->f_28[2], 0);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam1->f_28[2], 5f);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(uParam1->f_28[2], true);
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(uParam1->f_28[2], true), &fVar9, false, false))
		{
			iVar8 = SYSTEM::ROUND(MISC::ABSF((uParam0->f_18[0 /*36*/].f_1.f_2 - fVar9)));
		}
		else
		{
			iVar8 = SYSTEM::ROUND(__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uParam1->f_28[2], 1));
		}
		TASK::TASK_HELI_MISSION(uParam1->f_55[0], uParam1->f_28[2], 0, 0, uParam1->f_65[3 /*3*/], 4, 20f, 1f, fVar7, iVar8, (iVar8 - 5), -1f, 0);
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(uParam1->f_28[2], 0.3f);
	}
	uParam1->f_28[3] = VEHICLE::CREATE_VEHICLE(uParam1->f_7[1], 0f, 0f, -30f, (ENTITY::GET_ENTITY_HEADING(uParam1->f_28[1]) + 10f), false, false, false);
	uParam1->f_55[1] = PED::CREATE_PED(4, uParam1->f_7[3], uParam1->f_65[2 /*3*/], 0f, false, false);
	if (((ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[3]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_28[3], false)) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_55[1])) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_55[1], false))
	{
		PED::SET_PED_INTO_VEHICLE(uParam1->f_55[1], uParam1->f_28[3], -1);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam1->f_28[3]);
		VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(uParam1->f_28[3], 0);
		VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(uParam1->f_28[3], 2f, 2f, true);
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(uParam1->f_28[3], 0f);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(uParam1->f_28[3], true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
	{
		if (__LIB_35__::func_912(uParam1->f_1))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam1->f_1, -1, false))
			{
				iVar10 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam1->f_1, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar10))
				{
					if (iVar10 == PLAYER::PLAYER_PED_ID())
					{
						TASK::TASK_HELI_MISSION(PLAYER::PLAYER_PED_ID(), uParam1->f_1, 0, 0, __LIB_19__::func_397(*uParam1) + Vector(20f, 0f, 0f), 4, 30f, 0f, ENTITY::GET_ENTITY_HEADING(uParam1->f_1), 20, 20, -1f, 0);
					}
				}
			}
		}
	}
}

Vector3 func_5388(struct<2> Param0, var uParam1, int iParam2)//Position - 0x1BBFAD
{
	struct<3> Var0;
	switch (iParam2)
	{
		case 0:
			Var0.f_0 = -Param0.f_1;
			Var0.f_1 = Param0.f_0;
			break;
		case 1:
			Var0.f_0 = -Param0.f_0;
			Var0.f_1 = -Param0.f_1;
			break;
		case 2:
			Var0.f_0 = Param0.f_1;
			Var0.f_1 = -Param0.f_0;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

int func_5390(int* iParam0, var uParam1, var uParam2)//Position - 0x1BC016
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	uParam1->f_7[0] = joaat("phantom2");
	uParam1->f_7[1] = joaat("cargobob");
	uParam1->f_7[2] = joaat("trailers");
	uParam1->f_7[3] = joaat("S_M_Y_Pilot_01");
	uParam1->f_169[1] = -1f;
	Var0 = { uParam1->f_2 + Vector(200f, 0f, 0f) };
	Var1 = { 0f, 0f, 200f };
	uParam1->f_65[0 /*3*/] = { __LIB_0__::func_79(Var1 - Var0) };
	Var2 = { __LIB_35__::func_917(uParam1->f_65[0 /*3*/]) };
	func_1421(iParam0, "phantom_delivery", -1);
	func_1280(iParam0, 10000, "scene1", Var0, Var2, 40f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0.1f, 0, 0, 0, 0, 0);
	func_1280(iParam0, 6000, "scene2", 0f, 0f, 0f, 0f, 0f, 0f, 15f, 0f, 0f, 0f, 0f, 0f, 0f, 15f, 0.1f, 0, 0, 0, 0, 0);
	return 1;
}

void func_5392(var uParam0, var uParam1)//Position - 0x1BC107
{
	int iVar0;
	if (((!ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0]) || ENTITY::IS_ENTITY_DEAD(uParam1->f_28[0], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_33[0])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_33[0], false))
	{
		return;
	}
	if (!BitTest(uParam1->f_176[1], 0))
	{
		if (uParam0->f_377 > 500)
		{
			iVar0 = 0;
			while (iVar0 < uParam1->f_33)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_33[iVar0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_33[iVar0], false))
					{
						if (__LIB_0__::func_336(uParam1->f_33[iVar0], 0) != 7)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(uParam1->f_33[iVar0], 0, 64);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam1->f_28[0], 5, 5, 1f);
						}
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&(uParam1->f_176[1]), 0);
		}
	}
}

void func_5393(int* iParam0, var uParam1)//Position - 0x1BC1E0
{
	struct<3> Var0;
	func_5395(iParam0, uParam1);
	if (uParam1->f_6)
	{
		return;
	}
	__LIB_0__::func_467(iParam0, uParam1);
	iParam0->f_18[1 /*36*/].f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0f, -3.5f, 0.8f) };
	iParam0->f_18[1 /*36*/].f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0f, -4.5f, 0.8f) };
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0f, 0f, 1f) };
	iParam0->f_18[1 /*36*/].f_7 = { __LIB_35__::func_917(__LIB_0__::func_79(Var0 - iParam0->f_18[1 /*36*/].f_1)) };
	iParam0->f_18[1 /*36*/].f_7.f_1 = -ENTITY::GET_ENTITY_ROLL(uParam1->f_28[0]);
	iParam0->f_18[1 /*36*/].f_10 = { iParam0->f_18[1 /*36*/].f_7 };
	iParam0->f_18[2 /*36*/].f_1 = { iParam0->f_18[1 /*36*/].f_4 };
	iParam0->f_18[2 /*36*/].f_4 = { iParam0->f_18[1 /*36*/].f_4 };
	iParam0->f_18[2 /*36*/].f_7 = { iParam0->f_18[1 /*36*/].f_7 };
	iParam0->f_18[2 /*36*/].f_10 = { iParam0->f_18[1 /*36*/].f_7 };
}

void func_5395(int* iParam0, var uParam1)//Position - 0x1BC306
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	fVar0 = (uParam1->f_5 + 90f);
	fVar1 = (360f / 18f);
	fVar2 = 50f;
	iVar3 = SYSTEM::FLOOR((fVar0 / fVar1));
	iVar5 = -1;
	while (iVar4 < 18)
	{
		if ((iVar3 + iVar4) < 18)
		{
			if (BitTest(uParam1->f_176[0], (iVar3 + iVar4)))
			{
				iVar5 = (iVar3 + iVar4);
			}
			else if (iVar4 > 0 && (iVar3 - iVar4) >= 0)
			{
				if (BitTest(uParam1->f_176[0], (iVar3 - iVar4)))
				{
					iVar5 = (iVar3 - iVar4);
				}
				else
				{
					iVar4++;
				}
				if (iVar5 == -1)
				{
					uParam1->f_6 = 1;
					iVar5 = 0;
				}
				Var6 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_1, true) };
				Var7 = { uParam1->f_65[iVar5 /*3*/] };
				func_1421(iParam0, "move_weapons", -1);
				Var8 = { Var6 + Vector(1.5f, 0f, 0f) - Var7 };
				Var8 = { __LIB_0__::func_79(Var8) };
				Var9 = { __LIB_35__::func_917(Var8) };
				if (uParam1->f_6)
				{
					func_5396(*uParam1, &Var7, &Var9, &fVar2);
					uParam1->f_6 = 0;
				}
				func_1280(iParam0, 3500, "scene1", Var7, Var9, fVar2, Var7 + Vector(0f, 0f, 0f), Var9, 35f, 0.2f, 0, 0, 0, 0, 0);
				func_1280(iParam0, 5000, "scene2", 0f, 0f, 0f, 0f, 0f, 0f, 60f, 0f, 0f, 0f, 0f, 0f, 0f, 60f, 0.2f, 0, 0, 3, 3, 0);
				func_1280(iParam0, 400, "scene2", 0f, 0f, 0f, 0f, 0f, 0f, 60f, 0f, 0f, 0f, 0f, 0f, 0f, 60f, 0.2f, 0, 0, 0, 0, 0);
			}
void func_5396(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x1BC4A7
{
	switch (iParam0)
	{
		case 12:
			*uParam1 = { 36.5735f, 6569.537f, 42.5394f };
			*uParam2 = { -27.5351f, 0f, 79.8661f };
			*fParam3 = 50f;
			break;
		case 13:
			*uParam1 = { 391.5988f, 6634.035f, 37.7136f };
			*uParam2 = { -11.5787f, 0f, -140.4141f };
			*fParam3 = 50f;
			break;
		case 14:
			*uParam1 = { 14.1324f, 6532.019f, 36.5357f };
			*uParam2 = { -17.9602f, 0f, -173.6631f };
			*fParam3 = 50f;
			break;
		case 15:
			*uParam1 = { -186.973f, 6459.9214f, 35.8558f };
			*uParam2 = { -14.7841f, 0f, 92.6616f };
			*fParam3 = 50f;
			break;
		case 16:
			*uParam1 = { -227.0445f, 6421.6177f, 39.5059f };
			*uParam2 = { -21.4372f, 0f, 2.8946f };
			*fParam3 = 50f;
			break;
		case 17:
			*uParam1 = { -147.9945f, 6327.414f, 37.3003f };
			*uParam2 = { -9.1472f, 0f, -67.4204f };
			*fParam3 = 50f;
			break;
		case 18:
			*uParam1 = { -353.9754f, 6307.766f, 38.3755f };
			*uParam2 = { -5.8748f, 0f, -0.0867f };
			*fParam3 = 50f;
			break;
		case 19:
			*uParam1 = { -321.1798f, 6331.2935f, 38.0054f };
			*uParam2 = { -9.9697f, 0f, -176.8878f };
			*fParam3 = 50f;
			break;
		case 20:
			*uParam1 = { -419.0103f, 6267.8086f, 38.0995f };
			*uParam2 = { -19.733f, 0f, 112.2946f };
			*fParam3 = 50f;
			break;
		case 21:
			*uParam1 = { -238.5225f, 6220.9175f, 42.9345f };
			*uParam2 = { -17.1616f, 0f, 101.1774f };
			*fParam3 = 50f;
			break;
		case 22:
			*uParam1 = { -261.8289f, 6176.5835f, 39.8118f };
			*uParam2 = { -21.5566f, 0f, 87.3085f };
			*fParam3 = 50f;
			break;
		case 23:
			*uParam1 = { -429.9159f, 6120.5913f, 38.0592f };
			*uParam2 = { -8.0689f, 0f, 1.2842f };
			*fParam3 = 50f;
			break;
		case 24:
			*uParam1 = { 2238.25f, 5192.88f, 68.9847f };
			*uParam2 = { -17.1347f, 0f, -177.6114f };
			*fParam3 = 50f;
			break;
		case 25:
			*uParam1 = { 2012.8134f, 4991.095f, 50.3863f };
			*uParam2 = { -12.5201f, 0f, -164.8657f };
			*fParam3 = 50f;
			break;
		case 26:
			*uParam1 = { 2328.4185f, 4774.3115f, 46.8227f };
			*uParam2 = { -8.523f, 0f, 112.6437f };
			*fParam3 = 50f;
			break;
		case 27:
			*uParam1 = { -1325.5497f, 4840.709f, 151.8916f };
			*uParam2 = { -20.5373f, 0f, 100.5541f };
			*fParam3 = 50f;
			break;
		case 28:
			*uParam1 = { 1683.4298f, 4639.3247f, 51.3936f };
			*uParam2 = { -26.0178f, 0f, 32.7382f };
			*fParam3 = 50f;
			break;
		case 29:
			*uParam1 = { 1697.96f, 4754.148f, 49.5384f };
			*uParam2 = { -15.6878f, 0f, -134.2903f };
			*fParam3 = 50f;
			break;
		case 30:
			*uParam1 = { 2955.3367f, 4480.4546f, 56.8123f };
			*uParam2 = { -14.7383f, 0f, 85.3989f };
			*fParam3 = 50f;
			break;
		case 31:
			*uParam1 = { 1895.582f, 3748.691f, 41.0289f };
			*uParam2 = { -13.3639f, 0f, 65.1558f };
			*fParam3 = 50f;
			break;
		case 32:
			*uParam1 = { 1891.5513f, 3694.4092f, 39.9596f };
			*uParam2 = { -12.3222f, 0f, 3.3238f };
			*fParam3 = 50f;
			break;
		case 33:
			*uParam1 = { 940.1895f, 3657.3345f, 40.7142f };
			*uParam2 = { -12.5643f, 0f, 134.9185f };
			*fParam3 = 50f;
			break;
		case 34:
			*uParam1 = { 1378.8119f, 3610.5881f, 41.3637f };
			*uParam2 = { -6.7997f, 0f, 139.5238f };
			*fParam3 = 50f;
			break;
		case 35:
			*uParam1 = { 408.888f, 3545.9143f, 43.4946f };
			*uParam2 = { -10.4153f, 0f, -65.296f };
			*fParam3 = 50f;
			break;
		case 36:
			*uParam1 = { -2258.5166f, 3460.027f, 38.7876f };
			*uParam2 = { -9.0854f, 0f, -74.996f };
			*fParam3 = 50f;
			break;
		case 37:
			*uParam1 = { 1226.5999f, 2725.592f, 48.6466f };
			*uParam2 = { -13.3576f, 0f, 128.5186f };
			*fParam3 = 50f;
			break;
		case 38:
			*uParam1 = { 1019.2131f, 2646.1067f, 51.6826f };
			*uParam2 = { -11.8433f, 0f, 51.7107f };
			*fParam3 = 50f;
			break;
		case 39:
			*uParam1 = { 2872.0234f, 1452.8049f, 34.4343f };
			*uParam2 = { -16.0402f, 0f, 40.4119f };
			*fParam3 = 50f;
			break;
		case 40:
			*uParam1 = { 1768.2223f, 3681.3582f, 46.5404f };
			*uParam2 = { -11.9767f, 0f, 170.4576f };
			*fParam3 = 50f;
			break;
		case 41:
			*uParam1 = { -261.3971f, 6269.904f, 41.2678f };
			*uParam2 = { -18.1448f, 0f, -159.7883f };
			*fParam3 = 50f;
			break;
		case 42:
			*uParam1 = { -1983.1538f, 461.9846f, 110.4829f };
			*uParam2 = { -15.9895f, 4.5633f, 132.943f };
			*fParam3 = 50f;
			break;
		case 43:
			*uParam1 = { -203.2005f, 333.1274f, 108.3379f };
			*uParam2 = { -15.395f, 0f, -136.7291f };
			*fParam3 = 45f;
			break;
		case 44:
			*uParam1 = { -128.0132f, 209.1882f, 104.1048f };
			*uParam2 = { -25.6896f, 0f, 129.0972f };
			*fParam3 = 50f;
			break;
		case 45:
			*uParam1 = { -1924.5431f, 200.6054f, 92.7748f };
			*uParam2 = { -15.9948f, 0f, 160.5087f };
			*fParam3 = 50f;
			break;
		case 46:
			*uParam1 = { 326.4579f, 42.3446f, 101.0316f };
			*uParam2 = { -23.9594f, 0f, -146.6969f };
			*fParam3 = 50f;
			break;
		case 47:
			*uParam1 = { 211.6117f, -156.0833f, 66.6939f };
			*uParam2 = { -23.538f, 0f, 108.3673f };
			*fParam3 = 50f;
			break;
		case 48:
			*uParam1 = { -1498.7937f, -180.7409f, 66.2593f };
			*uParam2 = { -25.0164f, 0f, -177.6287f };
			*fParam3 = 50f;
			break;
		case 49:
			*uParam1 = { 939.99f, -268.3495f, 76.687f };
			*uParam2 = { -13.7468f, 0f, 11.4198f };
			*fParam3 = 50f;
			break;
		case 50:
			*uParam1 = { -515.9101f, -40.3301f, 49.7454f };
			*uParam2 = { -15.1874f, 0f, 93.7082f };
			*fParam3 = 50f;
			break;
		case 51:
			*uParam1 = { -1288.953f, -393.0926f, 45.2944f };
			*uParam2 = { -28.5592f, 0f, 156.9409f };
			*fParam3 = 50f;
			break;
		case 52:
			*uParam1 = { 933.2134f, -497.2465f, 69.5297f };
			*uParam2 = { -15.4811f, 0f, 81.6522f };
			*fParam3 = 50f;
			break;
		case 53:
			*uParam1 = { 1257.5093f, -593.2073f, 77.2474f };
			*uParam2 = { -9.3488f, 0f, 57.9059f };
			*fParam3 = 50f;
			break;
		case 54:
			*uParam1 = { -1270.2802f, -632.528f, 38.3999f };
			*uParam2 = { -12.1498f, 0f, -5.5992f };
			*fParam3 = 50f;
			break;
		case 55:
			*uParam1 = { 340.5221f, -704.1046f, 40.3619f };
			*uParam2 = { -14.8558f, 0f, 25.3365f };
			*fParam3 = 50f;
			break;
		case 56:
			*uParam1 = { 932.6509f, -624.2589f, 69.7337f };
			*uParam2 = { -27.1982f, 0f, 114.7252f };
			*fParam3 = 50f;
			break;
		case 57:
			*uParam1 = { -1386.5905f, -795.2264f, 34.5398f };
			*uParam2 = { -21.5419f, 0f, -73.9359f };
			*fParam3 = 50f;
			break;
		case 58:
			*uParam1 = { -628.8514f, -755.0581f, 35.473f };
			*uParam2 = { -12.8563f, 0f, -139.2738f };
			*fParam3 = 50f;
			break;
		case 59:
			*uParam1 = { -1390.4717f, -885.293f, 20.0036f };
			*uParam2 = { -6.8589f, 0f, -100.843f };
			*fParam3 = 50f;
			break;
		case 60:
			*uParam1 = { -1465.0829f, -891.1269f, 20.3783f };
			*uParam2 = { -4.7419f, 0f, -72.952f };
			*fParam3 = 50f;
			break;
		case 61:
			*uParam1 = { 459.02f, -951.9058f, 37.4426f };
			*uParam2 = { -18.512f, 0f, 45.9026f };
			*fParam3 = 50f;
			break;
		case 62:
			*uParam1 = { 1164.1083f, -972.2504f, 59.5149f };
			*uParam2 = { -15.1506f, 0f, 110.4453f };
			*fParam3 = 44.9999f;
			break;
		case 63:
			*uParam1 = { -1339.656f, -1054.5687f, 20.0319f };
			*uParam2 = { -16.4292f, -1.0441f, -10.4908f };
			*fParam3 = 50f;
			break;
		case 64:
			*uParam1 = { -612.736f, -1070.2891f, 35.4428f };
			*uParam2 = { -18.2388f, -0.0111f, -134.6484f };
			*fParam3 = 50f;
			break;
		case 65:
			*uParam1 = { -1266.3715f, -1197.4802f, 16.6082f };
			*uParam2 = { -13.3919f, 0f, -137.7864f };
			*fParam3 = 45f;
			break;
		case 66:
			*uParam1 = { -1079.0101f, -1484.6761f, 15.3639f };
			*uParam2 = { -23.2661f, 0.1792f, 161.8475f };
			*fParam3 = 50f;
			break;
		case 67:
			*uParam1 = { 1294.1271f, -1645.9863f, 63.8202f };
			*uParam2 = { -13.3082f, 0f, -109.677f };
			*fParam3 = 50f;
			break;
		case 68:
			*uParam1 = { 253.3068f, -1704.2894f, 37.232f };
			*uParam2 = { -16.2038f, 0f, -162.0453f };
			*fParam3 = 50f;
			break;
		case 69:
			*uParam1 = { 931.1226f, -2014.4263f, 38.6039f };
			*uParam2 = { -8.475f, 0f, -55.4055f };
			*fParam3 = 50f;
			break;
		case 70:
			*uParam1 = { 1025.2697f, -2336.0598f, 43.181f };
			*uParam2 = { -10.2937f, 0f, 126.6524f };
			*fParam3 = 50f;
			break;
		case 71:
			*uParam1 = { -718.0296f, -2470.5393f, 26.5757f };
			*uParam2 = { -11.2395f, 0f, -70.4007f };
			*fParam3 = 50f;
			break;
	}
}

int func_5397(var uParam0, var uParam1)//Position - 0x1BD0BA
{
	if (func_5382(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

int func_5399(var uParam0, var uParam1, var uParam2)//Position - 0x1BD2B1
{
	uParam1->f_169[1] = 2f;
	uParam1->f_169[0] = 6f;
	uParam1->f_7[0] = joaat("insurgent2");
	uParam1->f_7[1] = joaat("prop_mil_crate_02");
	return 1;
}

void func_5401(var uParam0, var uParam1)//Position - 0x1BD2EA
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	if (((((((((!ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[1]) || ENTITY::IS_ENTITY_DEAD(uParam1->f_28[1], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[2])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_28[2], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_55[0])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_55[0], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_55[1])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_55[1], false)) || !ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0])) || ENTITY::IS_ENTITY_DEAD(uParam1->f_28[0], false))
	{
		return;
	}
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam1->f_28[2]);
	if (__LIB_3__::func_630(uParam0, 0))
	{
		if (!BitTest(uParam1->f_176[0], 3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[2]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0]))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_28[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[0], 0f, -2f, 5f), false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_28[2], (ENTITY::GET_ENTITY_HEADING(uParam1->f_28[0]) + 10f));
			}
			MISC::SET_BIT(&(uParam1->f_176[0]), 3);
		}
		fVar0 = __LIB_1__::func_712(1f, (SYSTEM::TO_FLOAT(uParam0->f_375) / SYSTEM::TO_FLOAT((uParam0->f_18[0 /*36*/] - 1500))));
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_28[1], 0f, 0f, 0f) - uParam1->f_65[4 /*3*/] };
		uParam1->f_65[4 /*3*/] = { uParam1->f_65[4 /*3*/] + Var1 * FtoV(MISC::GET_FRAME_TIME()) * FtoV((1f - __LIB_1__::func_712(1f, (SYSTEM::VMAG(Var1) / uParam1->f_169[0])))) * Vector(fVar0, fVar0, fVar0) };
		if (uParam0->f_375 >= 5000)
		{
			if (!BitTest(uParam1->f_176[0], 4))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(uParam1->f_65[4 /*3*/], 2f, 0, 255, 0, 255);
				TASK::TASK_HELI_MISSION(uParam1->f_55[0], uParam1->f_28[1], 0, 0, ENTITY::GET_ENTITY_COORDS(uParam1->f_28[1], true) - Vector(50f, 0f, 0f), 4, 10f, 1f, ENTITY::GET_ENTITY_HEADING(uParam1->f_28[1]), 0, 0, -1f, 0);
				CAM::STOP_CAM_POINTING(uParam0->f_387);
				MISC::SET_BIT(&(uParam1->f_176[0]), 4);
			}
			uParam1->f_65[4 /*3*/].f_2 = uParam1->f_169[2];
		}
		else
		{
			uParam1->f_169[2] = uParam1->f_65[4 /*3*/].f_2;
		}
		CAM::POINT_CAM_AT_COORD(uParam0->f_387, uParam1->f_65[4 /*3*/]);
		if (!BitTest(uParam1->f_176[0], 4))
		{
			fVar2 = 0f;
			if (fVar0 >= fVar2)
			{
				CAM::SET_CAM_FOV(uParam0->f_387, (uParam0->f_18[0 /*36*/].f_13 - ((10f * (fVar0 - fVar2)) / (1f - fVar2))));
			}
		}
	}
	if (uParam0->f_382 == 1 && !__LIB_3__::func_630(uParam0, 1))
	{
		CAM::STOP_CAM_POINTING(uParam0->f_387);
	}
	if (__LIB_3__::func_630(uParam0, 1))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(uParam1->f_28[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_28[1], true);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_28[1], false, false);
		}
		if (!BitTest(uParam1->f_176[0], 0) && uParam0->f_375 > 600)
		{
			VEHICLE::ATTACH_ENTITY_TO_CARGOBOB(uParam1->f_28[2], uParam1->f_28[0], 0, 0f, 0f, 3f);
			Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam1->f_28[2]) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_28[0], true) + Vector(200f, 0f, 0f) + Var3 * Vector(100f, 100f, 100f) };
			TASK::TASK_HELI_MISSION(uParam1->f_55[1], uParam1->f_28[2], 0, 0, Var4, 4, 3f, 0f, ENTITY::GET_ENTITY_HEADING(uParam1->f_28[2]), 40, 40, -1f, 0);
			MISC::SET_BIT(&(uParam1->f_176[0]), 0);
		}
	}
}

void func_5402(var uParam0, var uParam1)//Position - 0x1BD687
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	float fVar6;
	fVar0 = uParam1->f_5;
	Var1 = { uParam1->f_2 };
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_28[0], false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_28[0], true) };
		Var2 = { func_5388(__LIB_3__::func_623(fVar0), 1) };
		Var2 = { __LIB_0__::func_327(Var2, -30f) };
		uParam0->f_18[1 /*36*/].f_1 = { Var1 + Vector(50f, 0f, 0f) + func_5388(Var2, 2) * Vector(5f, 5f, 5f) };
		Var3 = { __LIB_0__::func_79(Var1 - uParam0->f_18[1 /*36*/].f_1) };
		uParam0->f_18[1 /*36*/].f_4 = { uParam0->f_18[1 /*36*/].f_1 + func_5388(Var2, 0) * Vector(1f, 1f, 1f) };
		uParam0->f_18[1 /*36*/].f_7 = { __LIB_35__::func_917(Var3) };
		uParam0->f_18[1 /*36*/].f_10 = { uParam0->f_18[1 /*36*/].f_7 };
	}
	uParam1->f_65[2 /*3*/] = { uParam0->f_18[0 /*36*/].f_1 + Vector(0f, 0f, 0f) + uParam1->f_65[0 /*3*/] * Vector(30f, 30f, 30f) + func_5388(uParam1->f_65[0 /*3*/], 2) * Vector(28f, 28f, 28f) };
	uParam1->f_65[1 /*3*/] = { func_5388(uParam1->f_65[0 /*3*/], 0) };
	fVar4 = (MISC::GET_HEADING_FROM_VECTOR_2D(uParam1->f_65[1 /*3*/], uParam1->f_65[1 /*3*/].f_1) + 10f);
	uParam1->f_65[1 /*3*/] = { __LIB_3__::func_623(fVar4) };
	uParam1->f_65[3 /*3*/] = { Var1 + uParam1->f_65[0 /*3*/] * Vector(34f, 34f, 34f) + func_5388(uParam1->f_65[0 /*3*/], 2) * Vector(5f, 5f, 5f) };
	uParam1->f_65[4 /*3*/] = { uParam0->f_18[0 /*36*/].f_1 + uParam1->f_65[0 /*3*/] * Vector(30f, 30f, 30f) };
	uParam1->f_169[0] = SYSTEM::VDIST(uParam1->f_65[4 /*3*/], uParam1->f_65[2 /*3*/]);
	uParam1->f_28[1] = VEHICLE::CREATE_VEHICLE(uParam1->f_7[1], uParam1->f_65[2 /*3*/], fVar4, false, false, false);
	uParam1->f_55[0] = PED::CREATE_PED(4, uParam1->f_7[3], uParam1->f_65[2 /*3*/], 0f, false, false);
	if (((ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_28[1], false)) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_55[0])) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_55[0], false))
	{
		PED::SET_PED_INTO_VEHICLE(uParam1->f_55[0], uParam1->f_28[1], -1);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam1->f_28[1]);
		VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(uParam1->f_28[1], 0);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam1->f_28[1], 20f);
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(uParam1->f_28[1], true), &fVar6, false, false))
		{
			iVar5 = SYSTEM::ROUND(MISC::ABSF((uParam0->f_18[0 /*36*/].f_1.f_2 - fVar6)));
		}
		else
		{
			iVar5 = SYSTEM::ROUND(__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uParam1->f_28[1], 1));
		}
		TASK::TASK_HELI_MISSION(uParam1->f_55[0], uParam1->f_28[1], 0, 0, uParam1->f_65[3 /*3*/], 4, 20f, 1f, fVar4, iVar5, (iVar5 - 5), -1f, 0);
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(uParam1->f_28[1], 0.3f);
	}
	uParam1->f_28[2] = VEHICLE::CREATE_VEHICLE(uParam1->f_7[1], 0f, 10f, -10f, (ENTITY::GET_ENTITY_HEADING(uParam1->f_28[0]) + 10f), false, false, false);
	uParam1->f_55[1] = PED::CREATE_PED(4, uParam1->f_7[3], uParam1->f_65[2 /*3*/], 0f, false, false);
	if (((ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[2]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_28[2], false)) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_55[1])) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_55[1], false))
	{
		PED::SET_PED_INTO_VEHICLE(uParam1->f_55[1], uParam1->f_28[2], -1);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam1->f_28[2]);
		VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(uParam1->f_28[2], 0);
		VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(uParam1->f_28[2], 2f, 2f, true);
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(uParam1->f_28[2], 0f);
	}
}

int func_5404(int* iParam0, var uParam1, var uParam2)//Position - 0x1BDA8E
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	uParam1->f_7[0] = joaat("marshall");
	uParam1->f_7[1] = joaat("cargobob");
	uParam1->f_7[3] = joaat("S_M_Y_Pilot_01");
	uParam1->f_169[1] = -1f;
	Var0 = { uParam1->f_2 + Vector(200f, 0f, 0f) };
	Var1 = { 0f, 0f, 200f };
	uParam1->f_65[0 /*3*/] = { __LIB_0__::func_79(Var1 - Var0) };
	Var2 = { __LIB_35__::func_917(uParam1->f_65[0 /*3*/]) };
	func_1421(iParam0, "HILL_CLIMB_delivery", -1);
	func_1280(iParam0, 10000, "scene1", Var0, Var2, 40f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0.1f, 0, 0, 0, 0, 0);
	func_1280(iParam0, 6000, "scene2", 0f, 0f, 0f, 0f, 0f, 0f, 15f, 0f, 0f, 0f, 0f, 0f, 0f, 15f, 0.1f, 0, 0, 0, 0, 0);
	return 1;
}

int func_5405(int iParam0, int iParam1)//Position - 0x1BDB6B
{
	if (__LIB_0__::func_121(iParam1) && __LIB_1__::func_693(iParam0, 1, 1))
	{
		if (__LIB_8__::func_955(iParam0))
		{
			if (__LIB_35__::func_765(iParam0, 1))
			{
				if ((__LIB_2__::func_72(iParam0, 1) && __LIB_6__::func_854(iParam1) != __LIB_2__::func_39(iParam0)) || func_1216(iParam1, iParam0))
				{
					return 0;
				}
			}
			else if (func_1216(iParam1, iParam0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_5408(struct<2> Param0, char* sParam1)//Position - 0x1BDD4C
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	char cVar6[16];
	bVar0 = false;
	if (bVar0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sParam1 = "FREEMODE_DELIVERY_DEBUG_PRINT_DELIVERABLE_ID";
		}
		uVar1 = __LIB_3__::func_487(Param0);
		uVar2 = __LIB_5__::func_191(Param0);
		uVar3 = __LIB_5__::func_193(Param0);
		iVar4 = __LIB_5__::func_194(Param0);
		uVar5 = __LIB_10__::func_805(Param0);
		if (iVar4 == 0)
		{
			StringCopy(&cVar6, "Initial", 16);
		}
		else if (iVar4 == 2)
		{
			StringCopy(&cVar6, "Delivered", 16);
		}
		else if (iVar4 == -1)
		{
			StringCopy(&cVar6, "Invalid", 16);
		}
		else
		{
			IntToString(&cVar6, iVar4, 16);
		}
	}
}

