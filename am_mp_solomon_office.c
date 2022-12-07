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
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
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
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<444> Local_130 = { 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000 } ;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 32;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	int iLocal_167 = 0;
	bool bLocal_168 = 0;
	struct<20> Local_169 = { 2, 0, 0, 2, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 } ;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	struct<3> Local_172 = { 0, 0, 0 } ;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
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
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_106 = -1;
	fLocal_108 = 0.5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_4738(&ScriptParam_172);
	}
	else
	{
		func_4735();
	}
	while (true)
	{
		__LIB_0__::func_671();
		if (__LIB_6__::func_949())
		{
			func_4735();
		}
		if (func_4724(ScriptParam_172.f_2, ScriptParam_172.f_0))
		{
			func_4735();
		}
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != -1)
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_352 = NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT());
		}
		if (func_4723(1))
		{
			func_3();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x114
{
	if (func_4723(0))
	{
		__LIB_9__::func_623(1);
	}
	else if (func_4723(1))
	{
	}
}

void func_3()//Position - 0x141
{
	__LIB_6__::func_12();
	if (func_4721(0))
	{
		func_66();
	}
	else if (func_4721(1))
	{
		func_35();
	}
	else if (func_4721(2))
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
		}
		else
		{
			if (!BitTest(Local_130.f_0, 2))
			{
				if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && func_30(PLAYER::PLAYER_ID()))
				{
					if (CAM::IS_SCREEN_FADED_IN())
					{
						HUD::CLEAR_HELP(true);
						MISC::SET_BIT(&Local_130, 2);
					}
				}
			}
			func_20();
			func_11();
			func_4();
		}
	}
}

void func_4()//Position - 0x1BD
{
	float fVar0;
	float fVar1;
	if ((Global_1973170 == 5 && !BitTest(Global_1973170.f_2, 4)) && ENTITY::DOES_ENTITY_EXIST(Local_169.f_8))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		fVar1 = __LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_169.f_8, true));
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_169.f_8, 0) < 1f && __LIB_4__::func_230(fVar0, fVar1, 30f))
		{
			__LIB_0__::func_187("MPROP_RWD_PROM" /* GXT: Press ~INPUT_CONTEXT~ to open the box. */);
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
			{
				Global_1973170.f_6 = fVar1;
				func_5();
				MISC::SET_BIT(&(Global_1973170.f_2), 4);
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_5()//Position - 0x267
{
	if (__LIB_0__::func_1("MPROP_RWD_PROM" /* GXT: Press ~INPUT_CONTEXT~ to open the box. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_11()//Position - 0x393
{
	int iVar0;
	if (!iLocal_167)
	{
		iVar0 = __LIB_32__::func_393(joaat("v_ilev_sol_off_door01"), -1002.147f, -478.064f, 50.117f);
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, joaat("v_ilev_sol_off_door01"), -1002.147f, -478.064f, 50.117f, true, true, false);
		}
		else if (NETWORK::NETWORK_IS_DOOR_NETWORKED(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(iVar0))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 6, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 1, true, false);
			iLocal_167 = 1;
		}
	}
}

void func_20()//Position - 0x811
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (!__LIB_19__::func_778(0, bVar0) && func_25(bVar0) != 0)
		{
			if (!BitTest(uLocal_166, bVar0))
			{
				if (bVar0 == 9)
				{
					func_24(1);
				}
				else if (bVar0 == 6)
				{
					func_23(1);
				}
				else
				{
					ENTITY::CREATE_MODEL_HIDE(func_22(bVar0), func_21(bVar0), func_25(bVar0), false);
				}
				MISC::SET_BIT(&uLocal_166, bVar0);
			}
		}
		else if (BitTest(uLocal_166, bVar0))
		{
			if (bVar0 == 9)
			{
				func_24(0);
			}
			else if (bVar0 == 6)
			{
				func_23(0);
			}
			else
			{
				ENTITY::REMOVE_MODEL_HIDE(func_22(bVar0), func_21(bVar0), func_25(bVar0), false);
			}
			MISC::CLEAR_BIT(&uLocal_166, bVar0);
		}
		bVar0++;
	}
}

float func_21(bool bParam0)//Position - 0x8D4
{
	switch (bParam0)
	{
		case 0:
			return 1f;
		case 1:
			return 1f;
		case 2:
			return 1f;
		case 3:
			return 1f;
		case 4:
			return 1f;
		case 5:
			return 1f;
		case 6:
			return 1f;
		case 7:
			return 1f;
		case 8:
			return 1f;
		case 9:
			return 1f;
		default:
	}
	return 0f;
}

Vector3 func_22(bool bParam0)//Position - 0x948
{
	switch (bParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 0f, 0f, 0f;
		case 2:
			return -1007.766f, -482.575f, 50.606f;
		case 3:
			return 0f, 0f, 0f;
		case 4:
			return -1011.148f, -477.345f, 50.089f;
		case 5:
			return -1007.786f, -482.558f, 50.022f;
		case 6:
			return -1005.666f, -473.263f, 51.337f;
		case 7:
			return -1007.047f, -478.231f, 49.204f;
		case 8:
			return -1009.077f, -480.691f, 50.409f;
		case 9:
			return -1011.502f, -476.491f, 49.89f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_23(bool bParam0)//Position - 0xA26
{
	if (bParam0)
	{
		ENTITY::CREATE_MODEL_HIDE(func_22(6), func_21(6), func_25(6), false);
		ENTITY::CREATE_MODEL_HIDE(-1005.705f, -473.483f, 50.825f, 1f, joaat("v_58_sol_boa"), false);
	}
	else
	{
		ENTITY::REMOVE_MODEL_HIDE(func_22(6), func_21(6), func_25(6), false);
		ENTITY::REMOVE_MODEL_HIDE(-1005.705f, -473.483f, 50.825f, 1f, joaat("v_58_sol_boa"), false);
	}
}

void func_24(bool bParam0)//Position - 0xA92
{
	if (bParam0)
	{
		ENTITY::CREATE_MODEL_HIDE(func_22(9), func_21(9), func_25(9), false);
		ENTITY::CREATE_MODEL_HIDE(-1011.566f, -476.515f, 49.81f, 1f, joaat("prop_cherenkov_01"), false);
		ENTITY::CREATE_MODEL_HIDE(-1011.361f, -476.419f, 49.804f, 1f, joaat("prop_bar_cockshaker"), false);
		ENTITY::CREATE_MODEL_HIDE(-1011.444f, -476.561f, 49.811f, 1f, joaat("prop_whiskey_bottle"), false);
		ENTITY::CREATE_MODEL_HIDE(-1011.2f, -476.558f, 49.804f, 1f, joaat("prop_bottle_cognac"), false);
		ENTITY::CREATE_MODEL_HIDE(-1011.517f, -476.684f, 49.81f, 1f, joaat("prop_bottle_brandy"), false);
	}
	else
	{
		ENTITY::REMOVE_MODEL_HIDE(func_22(9), func_21(9), func_25(9), false);
		ENTITY::REMOVE_MODEL_HIDE(-1011.566f, -476.515f, 49.81f, 1f, joaat("prop_cherenkov_01"), false);
		ENTITY::REMOVE_MODEL_HIDE(-1011.361f, -476.419f, 49.804f, 1f, joaat("prop_bar_cockshaker"), false);
		ENTITY::REMOVE_MODEL_HIDE(-1011.444f, -476.561f, 49.811f, 1f, joaat("prop_whiskey_bottle"), false);
		ENTITY::REMOVE_MODEL_HIDE(-1011.2f, -476.558f, 49.804f, 1f, joaat("prop_bottle_cognac"), false);
		ENTITY::REMOVE_MODEL_HIDE(-1011.517f, -476.684f, 49.81f, 1f, joaat("prop_bottle_brandy"), false);
	}
}

int func_25(bool bParam0)//Position - 0xBD4
{
	switch (bParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return joaat("v_58_alienhead");
		case 3:
			return 0;
		case 4:
			return joaat("v_58_headdress");
		case 5:
			return joaat("v_58_head");
		case 6:
			return joaat("v_58_monstrmask1");
		case 7:
			return joaat("v_58_rugs");
		case 8:
			return joaat("v_58_sarcophagus");
		case 9:
			return joaat("v_58_drinks");
		default:
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x2000
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 18;
			}
		}
	}
	return 0;
}

void func_35()//Position - 0x2568
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (func_65())
	{
		if (!__LIB_2__::func_800())
		{
			if (func_63())
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_169[iVar1]))
					{
						func_60(iVar1);
						bVar0 = false;
					}
					else
					{
						func_57(iVar1);
					}
					iVar1++;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_169.f_3[iVar1]))
			{
				func_54(iVar1);
				bVar0 = false;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (func_53(iVar1) && !ENTITY::DOES_ENTITY_EXIST(Local_169.f_9[iVar1]))
			{
				func_50(iVar1);
				bVar0 = false;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (func_49(iVar1) && !ENTITY::DOES_ENTITY_EXIST(Local_169.f_19[iVar1]))
			{
				func_44(iVar1);
				bVar0 = false;
			}
			iVar1++;
		}
	}
	if (__LIB_27__::func_955(0, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_169.f_6))
		{
			Local_169.f_6 = OBJECT::CREATE_OBJECT(joaat("sum_prop_ac_filmreel_01a"), -1008.656f, -477.283f, 49.842f, false, true, false);
			ENTITY::SET_ENTITY_ROTATION(Local_169.f_6, 0f, 0f, 171.6f, 2, true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_169.f_6, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_169.f_6, true);
			bVar0 = false;
		}
	}
	if (__LIB_27__::func_955(0, 3))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_169.f_7))
		{
			Local_169.f_7 = OBJECT::CREATE_OBJECT(joaat("sum_prop_ac_clapperboard_01a"), -1004.482f, -475.067f, 49.738f, false, true, false);
			ENTITY::SET_ENTITY_ROTATION(Local_169.f_7, 68.107f, -0.813f, -59.801f, 2, true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_169.f_7, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_169.f_7, true);
			bVar0 = false;
		}
	}
	if (Global_2788199.f_495 == 10 && __LIB_0__::func_137(30240, -1) == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_169.f_8))
		{
			Local_169.f_8 = OBJECT::CREATE_OBJECT(joaat("prop_cardbordbox_04a"), -1010.027f, -479.242f, 49.025f, false, true, false);
			ENTITY::SET_ENTITY_ROTATION(Local_169.f_8, 0f, 0f, -59.801f, 2, true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_169.f_8, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_169.f_8, true);
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		func_40();
		__LIB_4__::func_95(1);
		__LIB_4__::func_325(1);
		__LIB_4__::func_323();
		func_36(2);
	}
}

void func_36(int iParam0)//Position - 0x27B1
{
	Local_130.f_2 = iParam0;
}

void func_40()//Position - 0x27FF
{
	if (bLocal_168)
	{
		STREAMING::REMOVE_ANIM_DICT(func_41(0));
		STREAMING::REMOVE_ANIM_DICT(func_41(1));
	}
}

char* func_41(int iParam0)//Position - 0x281F
{
	switch (iParam0)
	{
		case 0:
			return "amb@code_human_police_investigate@idle_b";
		case 1:
			return "amb@code_human_police_investigate@idle_a";
		default:
	}
	return "";
}

void func_44(int iParam0)//Position - 0x28F8
{
	if (__LIB_0__::func_584(func_48(iParam0)))
	{
		Local_169.f_19[iParam0] = OBJECT::CREATE_OBJECT(func_48(iParam0), func_46(iParam0), false, true, false);
		ENTITY::SET_ENTITY_ROTATION(Local_169.f_19[iParam0], func_45(iParam0), 2, true);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_169.f_19[iParam0], true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_169.f_19[iParam0], true);
	}
}

Vector3 func_45(int iParam0)//Position - 0x295A
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, -27.2f;
		case 1:
			return 0f, 0f, -60.0035f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_46(int iParam0)//Position - 0x298C
{
	switch (iParam0)
	{
		case 0:
			return -1004.9274f, -479.243f, 49.0287f;
		case 1:
			return -1009.1912f, -480.8413f, 49.0287f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_48(int iParam0)//Position - 0x29EC
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_paper_box_02");
		case 1:
			return joaat("prop_box_wood01a");
		default:
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x2A18
{
	switch (iParam0)
	{
		case 0:
			return !__LIB_19__::func_778(0, 7);
		case 1:
			return !__LIB_19__::func_778(0, 8);
		default:
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x2A49
{
	if (__LIB_0__::func_584(joaat("ch_prop_ch_fib_01a")))
	{
		Local_169.f_9[iParam0] = OBJECT::CREATE_OBJECT(joaat("ch_prop_ch_fib_01a"), func_52(iParam0), false, true, false);
		ENTITY::SET_ENTITY_ROTATION(Local_169.f_9[iParam0], func_51(iParam0), 2, true);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_169.f_9[iParam0], true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_169.f_9[iParam0], true);
	}
}

Vector3 func_51(int iParam0)//Position - 0x2AA9
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 109.198f;
		case 1:
			return 0f, 0f, 74.398f;
		case 2:
			return 0f, 0f, -155.6028f;
		case 3:
			return 0f, 0f, -179.403f;
		case 4:
			return 0f, 0f, 121.197f;
		case 5:
			return 0f, 0f, -158.203f;
		case 6:
			return 0f, 0f, 27.397f;
		case 7:
			return 0f, 0f, -62.803f;
		case 8:
			return 0f, 0f, -61.603f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_52(int iParam0)//Position - 0x2B4B
{
	switch (iParam0)
	{
		case 0:
			return -1010.827f, -477.512f, 49.027f;
		case 1:
			return -1011.641f, -476.541f, 49.027f;
		case 2:
			return -1009.6951f, -479.9473f, 49.028f;
		case 3:
			return -1006.17f, -480.067f, 49.038f;
		case 4:
			return -1008.142f, -482.282f, 49.899f;
		case 5:
			return -1007.696f, -482.449f, 50.433f;
		case 6:
			return -1008.699f, -477.079f, 49.846f;
		case 7:
			return -1005.757f, -473.534f, 51.021f;
		case 8:
			return -1004.692f, -474.942f, 49.587f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_53(int iParam0)//Position - 0x2C35
{
	switch (iParam0)
	{
		case 0:
			return !__LIB_19__::func_778(0, 4);
		case 1:
			return !__LIB_19__::func_778(0, 9);
		case 2:
			return !__LIB_19__::func_778(0, 8);
		case 3:
			return !__LIB_19__::func_778(0, 7);
		case 4:
			return !__LIB_19__::func_778(0, 5);
		case 5:
			return !__LIB_19__::func_778(0, 2);
		case 6:
			return !__LIB_19__::func_778(0, 1);
		case 7:
			return !__LIB_19__::func_778(0, 6);
		case 8:
			return !__LIB_19__::func_778(0, 3);
		default:
	}
	return 0;
}

void func_54(int iParam0)//Position - 0x2CD7
{
	if (__LIB_0__::func_584(joaat("prop_barrier_work05")))
	{
		Local_169.f_3[iParam0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work05"), func_56(iParam0), false, true, false);
		ENTITY::SET_ENTITY_ROTATION(Local_169.f_3[iParam0], func_55(iParam0), 2, true);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_169.f_3[iParam0], true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_169.f_3[iParam0], true);
	}
}

Vector3 func_55(int iParam0)//Position - 0x2D37
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, -99.2001f;
		case 1:
			return 0f, 0f, 173.9998f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_56(int iParam0)//Position - 0x2D69
{
	switch (iParam0)
	{
		case 0:
			return -1008.7462f, -479.1937f, 49.0118f;
		case 1:
			return -1005.3309f, -476.5495f, 48.9918f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_57(int iParam0)//Position - 0x2DAB
{
	if ((__LIB_0__::func_121(Local_169[iParam0]) && TASK::GET_SCRIPT_TASK_STATUS(Local_169[iParam0], joaat("SCRIPT_TASK_PLAY_ANIM")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_169[iParam0], joaat("SCRIPT_TASK_PLAY_ANIM")) != 0)
	{
		TASK::TASK_PLAY_ANIM(Local_169[iParam0], func_41(iParam0), func_58(iParam0), 8f, -8f, -1, 1, 0f, false, false, false);
	}
}

char* func_58(int iParam0)//Position - 0x2E16
{
	switch (iParam0)
	{
		case 0:
			return "idle_f";
		case 1:
			return "idle_a";
		default:
	}
	return "";
}

void func_60(int iParam0)//Position - 0x2E63
{
	if (__LIB_0__::func_584(joaat("S_M_Y_Cop_01")))
	{
		Local_169[iParam0] = PED::CREATE_PED(26, joaat("S_M_Y_Cop_01"), func_62(iParam0), func_61(iParam0), false, true);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_169[iParam0], true);
		PED::SET_PED_TREATED_AS_FRIENDLY(Local_169[iParam0], 1, 0);
		PED::SET_PED_CAN_RAGDOLL(Local_169[iParam0], false);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_169[iParam0], false);
		AUDIO::STOP_PED_SPEAKING(Local_169[iParam0], true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_169[iParam0], true);
	}
}

float func_61(int iParam0)//Position - 0x2EE0
{
	switch (iParam0)
	{
		case 0:
			return 74.999f;
		case 1:
			return 35.799f;
		default:
	}
	return 0f;
}

Vector3 func_62(int iParam0)//Position - 0x2F0C
{
	switch (iParam0)
	{
		case 0:
			return -1010.884f, -476.831f, 49.026f;
		case 1:
			return -1005.4048f, -480.3152f, 49.0277f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_63()//Position - 0x2F4E
{
	STREAMING::REQUEST_ANIM_DICT(func_41(0));
	STREAMING::REQUEST_ANIM_DICT(func_41(1));
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_41(0)) && STREAMING::HAS_ANIM_DICT_LOADED(func_41(1)))
	{
		bLocal_168 = true;
		return 1;
	}
	return 0;
}

int func_65()//Position - 0x2F9B
{
	if (Global_2788199.f_494 < 10 || Global_2788199.f_495 < 10)
	{
		return 1;
	}
	return 0;
}

void func_66()//Position - 0x2FC5
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	if (!BitTest(Local_130.f_0, 0))
	{
		if (!Local_130.f_440)
		{
			func_74(Local_130.f_3, &(Local_130.f_424), &(Local_130.f_420), &(Local_130.f_423), 1);
			Local_130.f_419 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_130.f_420, &(Local_130.f_424));
			if (INTERIOR::IS_VALID_INTERIOR(Local_130.f_419) && INTERIOR::IS_INTERIOR_READY(Local_130.f_419))
			{
				bVar0 = true;
				if (bVar0)
				{
					if (func_30(PLAYER::PLAYER_ID()))
					{
						iVar1 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						if (iVar1 == joaat("GtaMloRoom001"))
						{
							INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), Local_130.f_419, iVar1);
						}
					}
					__LIB_4__::func_326();
					__LIB_4__::func_325(1);
					MISC::SET_BIT(&Local_130, 0);
					__LIB_0__::func_579(&(Local_130.f_441));
				}
			}
			else
			{
				if (!__LIB_0__::func_649(&(Local_130.f_441)))
				{
					__LIB_4__::func_324(Local_130.f_419);
					__LIB_0__::func_580(&(Local_130.f_441), 0, 0);
				}
				if (__LIB_2__::func_47(&(Local_130.f_441), Local_130.f_443, 0))
				{
					__LIB_0__::func_579(&(Local_130.f_441));
				}
			}
		}
		else
		{
			__LIB_4__::func_325(1);
			MISC::SET_BIT(&Local_130, 0);
		}
	}
	if (__LIB_4__::func_237() && BitTest(Local_130.f_0, 0))
	{
		bVar2 = true;
		if (!BitTest(Local_130.f_0, 1))
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return;
			}
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			else
			{
				return;
			}
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var3, 25f, 0);
			MISC::SET_BIT(&Local_130, 1);
			bVar2 = false;
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				bVar2 = false;
			}
			else
			{
				func_74(Local_130.f_3, &(Local_130.f_424), &(Local_130.f_420), &(Local_130.f_423), 0);
				Local_130.f_419 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_130.f_420, &(Local_130.f_424));
				if (INTERIOR::IS_VALID_INTERIOR(Local_130.f_419) && INTERIOR::IS_INTERIOR_READY(Local_130.f_419))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
			}
		}
		if (bVar2)
		{
			func_36(1);
			Global_1946250.f_515 = 1;
		}
	}
}

void func_74(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x32D0
{
	struct<31> Var0;
	func_75(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_75(int iParam0, var uParam1, int iParam2)//Position - 0x32F0
{
	func_4716(uParam1, iParam2);
	func_4710(uParam1, iParam2);
	func_4702(uParam1, iParam2);
	func_76(__LIB_0__::func_170(iParam0), uParam1, iParam2);
}

void func_76(int iParam0, var uParam1, int iParam2)//Position - 0x331E
{
	switch (iParam0)
	{
		case 0:
			func_4629(uParam1, iParam2);
			break;
		case 1:
			func_4496(uParam1, iParam2);
			break;
		case 2:
			func_4419(uParam1, iParam2);
			break;
		case 3:
			func_4341(uParam1, iParam2);
			break;
		case 4:
			func_4167(uParam1, iParam2);
			break;
		case 5:
			func_4001(uParam1, iParam2);
			break;
		case 6:
			func_3936(uParam1, iParam2);
			break;
		case 7:
			func_3768(uParam1, iParam2);
			break;
		case 8:
			func_3594(uParam1, iParam2);
			break;
		case 9:
			func_3349(uParam1, iParam2);
			break;
		case 10:
			func_3271(uParam1, iParam2);
			break;
		case 11:
			func_3040(uParam1, iParam2);
			break;
		case 12:
			func_2894(uParam1, iParam2);
			break;
		case 13:
			func_2726(uParam1, iParam2);
			break;
		case 14:
			func_2551(uParam1, iParam2);
			break;
		case 15:
			func_2372(uParam1, iParam2);
			break;
		case 16:
			func_2262(uParam1, iParam2);
			break;
		case 17:
			func_2004(uParam1, iParam2);
			break;
		case 18:
			func_1911(uParam1, iParam2);
			break;
		case 19:
			func_1787(uParam1, iParam2);
			break;
		case 20:
			func_1340(uParam1, iParam2);
			break;
		case 21:
			func_1218(uParam1, iParam2);
			break;
		case 22:
			func_1045(uParam1, iParam2);
			break;
		case 23:
			func_823(uParam1, iParam2);
			break;
		case 24:
			func_77(uParam1, iParam2);
			break;
	}
}

void func_77(var uParam0, int iParam1)//Position - 0x34D6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 326324/*func_822*/;
			break;
		case 111:
			uParam0->f_35 = 326310/*func_821*/;
			break;
		case 1:
			uParam0->f_30 = 326214/*func_820*/;
			break;
		case 2:
			uParam0->f_31 = 324871/*func_814*/;
			break;
		case 3:
			uParam0->f_34 = 324642/*func_813*/;
			break;
		case 4:
			uParam0->f_12 = 324630/*func_812*/;
			break;
		case 5:
			uParam0->f_11 = 324620/*func_811*/;
			break;
		case 37:
			uParam0->f_18 = 324432/*func_810*/;
			break;
		case 38:
			uParam0->f_9 = 324385/*func_809*/;
			break;
		case 42:
			uParam0->f_10 = 324357/*func_808*/;
			break;
		case 6:
			uParam0->f_32 = 324048/*func_807*/;
			break;
		case 11:
			uParam0->f_11 = 324039/*func_806*/;
			break;
		case 12:
			uParam0->f_33 = 321371/*func_798*/;
			break;
		case 14:
			uParam0->f_11 = 321362/*func_797*/;
			break;
		case 109:
			uParam0->f_56 = 314779/*func_794*/;
			break;
		case 8:
			uParam0->f_37 = 313904/*func_793*/;
			break;
		case 7:
			uParam0->f_36 = 313787/*func_792*/;
			break;
		case 79:
			*uParam0 = 313731/*func_789*/;
			break;
		case 9:
			uParam0->f_29 = 313578/*func_788*/;
			break;
		case 10:
			uParam0->f_27 = 313434/*func_786*/;
			break;
		case 13:
			uParam0->f_2 = 313352/*func_784*/;
			break;
		case 15:
			uParam0->f_2 = 311518/*func_760*/;
			break;
		case 16:
			uParam0->f_5 = 310320/*func_751*/;
			break;
		case 108:
			uParam0->f_55 = 252610/*func_617*/;
			break;
		case 17:
			uParam0->f_17 = 250884/*func_598*/;
			break;
		case 19:
			uParam0->f_17 = 250734/*func_593*/;
			break;
		case 18:
			uParam0->f_8 = 250709/*func_592*/;
			break;
		case 20:
			uParam0->f_3 = 250489/*func_590*/;
			break;
		case 21:
			uParam0->f_3 = 249048/*func_576*/;
			break;
		case 74:
			uParam0->f_53 = 248858/*func_574*/;
			break;
		case 75:
			uParam0->f_4 = 247523/*func_568*/;
			break;
		case 22:
			uParam0->f_24 = 247406/*func_566*/;
			break;
		case 23:
			uParam0->f_26 = 247363/*func_565*/;
			break;
		case 24:
			uParam0->f_26 = 247329/*func_564*/;
			break;
		case 26:
			uParam0->f_38 = 247321/*func_563*/;
			break;
		case 25:
			uParam0->f_23 = 244333/*func_543*/;
			break;
		case 27:
			uParam0->f_25 = 244325/*func_542*/;
			break;
		case 28:
			uParam0->f_24 = 244317/*func_541*/;
			break;
		case 30:
			uParam0->f_8 = 244167/*func_539*/;
			break;
		case 31:
			uParam0->f_39 = 243948/*func_536*/;
			break;
		case 33:
			uParam0->f_40 = 242955/*func_526*/;
			break;
		case 32:
			*uParam0 = 242900/*func_525*/;
			break;
		case 76:
			uParam0->f_13 = 242889/*func_524*/;
			break;
		case 34:
			uParam0->f_41 = 239137/*func_521*/;
			break;
		case 36:
			uParam0->f_58 = 239092/*func_520*/;
			break;
		case 35:
			uParam0->f_42 = 218029/*func_517*/;
			break;
		case 45:
			uParam0->f_14 = 218020/*func_516*/;
			break;
		case 46:
			uParam0->f_14 = 218011/*func_515*/;
			break;
		case 110:
			uParam0->f_57 = 218003/*func_514*/;
			break;
		case 77:
			uParam0->f_13 = 217980/*func_513*/;
			break;
		case 82:
			uParam0->f_19 = 217934/*func_511*/;
			break;
		case 47:
			uParam0->f_43 = 217802/*func_510*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 216549/*func_500*/;
			break;
		case 49:
			uParam0->f_8 = 216531/*func_499*/;
			break;
		case 50:
			*uParam0 = 216182/*func_495*/;
			break;
		case 51:
			*uParam0 = 216080/*func_494*/;
			break;
		case 52:
			uParam0->f_15 = 216069/*func_493*/;
			break;
		case 53:
			uParam0->f_13 = 215943/*func_492*/;
			break;
		case 54:
			uParam0->f_45 = 215556/*func_491*/;
			break;
		case 56:
			uParam0->f_46 = 215537/*func_490*/;
			break;
		case 57:
			uParam0->f_11 = 214293/*func_481*/;
			break;
		case 58:
			uParam0->f_13 = 214167/*func_480*/;
			break;
		case 59:
			*uParam0 = 212502/*func_462*/;
			break;
		case 60:
			*uParam0 = 212493/*func_461*/;
			break;
		case 61:
			uParam0->f_15 = 212482/*func_460*/;
			break;
		case 62:
			uParam0->f_13 = 212356/*func_459*/;
			break;
		case 55:
			uParam0->f_45 = 212348/*func_458*/;
			break;
		case 63:
			uParam0->f_11 = 212334/*func_457*/;
			break;
		case 64:
			uParam0->f_47 = 212326/*func_456*/;
			break;
		case 65:
			uParam0->f_21 = 210731/*func_439*/;
			break;
		case 66:
			uParam0->f_21 = 210045/*func_436*/;
			break;
		case 67:
			uParam0->f_21 = 209905/*func_434*/;
			break;
		case 68:
			*uParam0 = 208700/*func_429*/;
			break;
		case 69:
			*uParam0 = 208691/*func_428*/;
			break;
		case 70:
			uParam0->f_48 = 208679/*func_427*/;
			break;
		case 71:
			uParam0->f_49 = 208670/*func_426*/;
			break;
		case 107:
			uParam0->f_50 = 208658/*func_425*/;
			break;
		case 80:
			uParam0->f_7 = 208176/*func_422*/;
			break;
		case 84:
			uParam0->f_1 = 208167/*func_421*/;
			break;
		case 85:
			uParam0->f_1 = 34918/*func_232*/;
			break;
		case 87:
			uParam0->f_1 = 31063/*func_211*/;
			break;
		case 88:
			uParam0->f_1 = 31054/*func_210*/;
			break;
		case 89:
			uParam0->f_54 = 31046/*func_209*/;
			break;
		case 90:
			uParam0->f_1 = 30124/*func_190*/;
			break;
		case 91:
			uParam0->f_1 = 30090/*func_189*/;
			break;
		case 92:
			uParam0->f_1 = 28162/*func_175*/;
			break;
		case 94:
			uParam0->f_1 = 26151/*func_161*/;
			break;
		case 95:
			uParam0->f_22 = 21872/*func_117*/;
			break;
		case 96:
			uParam0->f_1 = 21863/*func_116*/;
			break;
		case 97:
			uParam0->f_1 = 21854/*func_115*/;
			break;
		case 98:
			uParam0->f_1 = 21845/*func_114*/;
			break;
		case 100:
			uParam0->f_22 = 21837/*func_113*/;
			break;
		case 101:
			uParam0->f_22 = 21829/*func_112*/;
			break;
		case 112:
			uParam0->f_13 = 21715/*func_111*/;
			break;
		case 113:
			uParam0->f_3 = 21561/*func_107*/;
			break;
		case 114:
			uParam0->f_16 = 20893/*func_106*/;
			break;
		case 115:
			uParam0->f_3 = 20884/*func_105*/;
			break;
		case 116:
			*uParam0 = 20875/*func_104*/;
			break;
		case 117:
			uParam0->f_16 = 16459/*func_103*/;
			break;
		case 118:
			uParam0->f_11 = 16450/*func_102*/;
			break;
		case 119:
			uParam0->f_27 = 16321/*func_97*/;
			break;
		case 120:
			uParam0->f_19 = 16266/*func_94*/;
			break;
		case 78:
			uParam0->f_59 = 15338/*func_80*/;
			break;
		case 124:
			uParam0->f_1 = 15329/*func_79*/;
			break;
		case 125:
			uParam0->f_19 = 15321/*func_78*/;
			break;
	}
}

int func_232(int iParam0, var uParam1)//Position - 0x8866
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
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
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
			func_330(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_241(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_415(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_415(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_414(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_414(iParam0, &Var6, &Var8, &uVar12, 0);
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
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_241(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x8FDB
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
						func_242(uParam2[iVar1], iVar4, bParam8, bParam6);
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

int func_242(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x913D
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
		__LIB_1__::func_137(*uParam0);
		if (func_257(iParam1) || __LIB_19__::func_37(iParam1))
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

int func_257(int iParam0)//Position - 0x9FC2
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_259(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0, int iParam1, int iParam2)//Position - 0xA0C3
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
				if (__LIB_9__::func_623(iParam0, iParam1, iVar0))
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
				if (__LIB_9__::func_623(iParam0, iParam1, iVar1))
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
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_330(int iParam0, var uParam1, int iParam2)//Position - 0x29438
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
		if (__LIB_0__::func_517(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_517(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_517(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (func_418(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
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
			__LIB_25__::func_536(*iParam0, &Var0);
			func_334(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_138(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_652(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
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
			if (!__LIB_0__::func_517(iParam2, 32))
			{
				func_241(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_517(iParam2, 16), __LIB_0__::func_517(iParam2, 128), __LIB_0__::func_517(iParam2, 64), !__LIB_0__::func_517(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_517(iParam2, 4))
			{
				func_331(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_517(iParam2, 8))
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
			if (__LIB_0__::func_517(iParam2, 8))
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

int func_331(var uParam0, var uParam1)//Position - 0x296E9
{
	int iVar0;
	struct<101> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*uParam0, &iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (func_418(uParam1, iVar0, 10f, 10f, 15f, ENTITY::GET_ENTITY_HEADING(iVar0), 0, 0))
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
					__LIB_25__::func_536(iVar0, &Var1);
					func_334(*uParam1, &Var1, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_334(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x29849
{
	int iVar0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != __LIB_0__::func_160())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			__LIB_25__::func_367(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, true);
				}
			}
			if (__LIB_0__::func_596(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, true);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, true);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(iParam0, uParam1->f_79);
			}
			if (__LIB_0__::func_595(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
			}
			if (__LIB_0__::func_594(iParam0))
			{
				__LIB_6__::func_921(iParam0, __LIB_7__::func_253(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				__LIB_37__::func_874(iParam0, &(uParam1->f_81));
			}
			if ((!func_341(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				__LIB_25__::func_414(iParam0);
			}
			if (__LIB_0__::func_586(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (__LIB_6__::func_909(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21791 /* Tunable: -1001087518 */ + 0.05f));
						}
						else
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21791 /* Tunable: -1001087518 */);
						}
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (__LIB_0__::func_585(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				case 3:
					break;
				case 4:
					break;
				}
		}
	}
}

int func_341(int iParam0)//Position - 0x29F79
{
	int iVar0;
	if (__LIB_0__::func_527())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (__LIB_0__::func_299(iVar0) == iParam0)
			{
				if (__LIB_20__::func_376(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_418(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5)//Position - 0x32AEF
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_140(&Global_1966234);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		__LIB_25__::func_536(iParam1, &Global_1966234);
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iVar0, Param2, fParam3, bParam4, bParam5, false);
		func_334(*uParam0, &Global_1966234, 1, 1, 0);
		if (((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) && iVar0 != joaat("kosatka")) && iVar0 != joaat("avisa"))
		{
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, iVar1))
				{
					VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, iVar1, true);
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam1, iVar1))
				{
					VEHICLE::REMOVE_VEHICLE_WINDOW(*uParam0, iVar1);
				}
				iVar1++;
			}
		}
		if ((!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) && iVar0 != joaat("kosatka")) && iVar0 != joaat("avisa"))
		{
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, iVar1, true))
				{
					VEHICLE::SET_VEHICLE_TYRE_BURST(*uParam0, iVar1, true, 1000f);
				}
				else if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, iVar1, false))
				{
					VEHICLE::SET_VEHICLE_TYRE_BURST(*uParam0, iVar1, false, 1000f);
				}
				iVar1++;
			}
		}
		VEHICLE::COPY_VEHICLE_DAMAGES(iParam1, *uParam0);
		if ((iVar0 == joaat("dominator4") || iVar0 == joaat("dominator5")) || iVar0 == joaat("dominator6"))
		{
			if (!VEHICLE::GET_DOES_VEHICLE_HAVE_TOMBSTONE(iParam1))
			{
				VEHICLE::HIDE_TOMBSTONE(*uParam0, true);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		return 1;
	}
	return 0;
}

void func_491(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x34A04
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_7__::func_926(iParam0))
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
		if (!__LIB_2__::func_432(PLAYER::PLAYER_ID(), __LIB_2__::func_433(iParam0)) && __LIB_2__::func_432(__LIB_0__::func_582(), __LIB_2__::func_433(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_2__::func_432(iVar1, __LIB_2__::func_433(iParam0)))
					{
						Var3 = { __LIB_1__::func_267(iVar1) };
						if (__LIB_0__::func_585(Var3))
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
Vector3 func_492(int iParam0)//Position - 0x34B87
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

void func_543(int iParam0, int iParam1)//Position - 0x3BA6D
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_2__::func_399();
	Var3 = { __LIB_2__::func_462(iParam0, iVar2) };
	if (__LIB_7__::func_372(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_554(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_2__::func_447(0);
			}
			else
			{
				__LIB_2__::func_447(1);
			}
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_379(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_6__::func_25());
			}
			__LIB_25__::func_417(iParam0, __LIB_6__::func_25());
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_6__::func_25());
			}
			__LIB_25__::func_417(iParam0, __LIB_6__::func_25());
		}
	}
	else
	{
		if (__LIB_4__::func_973(0))
		{
			if (iVar2 == 3 && __LIB_5__::func_705(__LIB_0__::func_582()) == iParam0)
			{
				__LIB_2__::func_447(1);
			}
		}
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_554(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x3C0CC
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
	if (__LIB_6__::func_911())
	{
		iVar0 = __LIB_3__::func_808();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_807(iParam0)), 2f);
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
						Var7 = { __LIB_1__::func_267(iVar5) };
						bVar8 = false;
						if (__LIB_2__::func_461(iVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_2__::func_180(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_425(iVar5, 1) && !__LIB_7__::func_291(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_8__::func_303(iVar5)) && !__LIB_8__::func_108(iVar5, 1)) && !((__LIB_4__::func_682(iVar5, 1) && !__LIB_2__::func_457(iVar2, iVar5)) && __LIB_6__::func_25() != 0)) && !func_555(iVar5)) && !__LIB_3__::func_998(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_7__::func_291(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_8__::func_303(iVar5)) && !__LIB_8__::func_108(iVar5, 1)) && __LIB_2__::func_192(PLAYER::PLAYER_ID())) && !func_555(iVar5)) && !__LIB_3__::func_998(iVar5)) && !bVar8)
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
int func_555(bool bParam0)//Position - 0x3C307
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

void func_823(var uParam0, int iParam1)//Position - 0x4FABD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 382893/*func_1044*/;
			break;
		case 111:
			uParam0->f_35 = 382884/*func_1043*/;
			break;
		case 1:
			uParam0->f_30 = 382805/*func_1041*/;
			break;
		case 2:
			uParam0->f_31 = 382169/*func_1037*/;
			break;
		case 3:
			uParam0->f_34 = 381903/*func_1036*/;
			break;
		case 4:
			uParam0->f_12 = 381891/*func_1035*/;
			break;
		case 6:
			uParam0->f_32 = 381792/*func_1034*/;
			break;
		case 37:
			uParam0->f_18 = 381662/*func_1033*/;
			break;
		case 38:
			uParam0->f_9 = 381615/*func_1032*/;
			break;
		case 39:
			uParam0->f_11 = 381580/*func_1031*/;
			break;
		case 41:
			uParam0->f_20 = 381461/*func_1028*/;
			break;
		case 42:
			uParam0->f_10 = 381433/*func_1027*/;
			break;
		case 11:
			uParam0->f_11 = 381423/*func_1026*/;
			break;
		case 12:
			uParam0->f_33 = 379272/*func_1022*/;
			break;
		case 14:
			uParam0->f_11 = 379263/*func_1021*/;
			break;
		case 109:
			uParam0->f_56 = 376698/*func_1018*/;
			break;
		case 8:
			uParam0->f_37 = 376690/*func_1017*/;
			break;
		case 7:
			uParam0->f_36 = 376681/*func_1016*/;
			break;
		case 79:
			*uParam0 = 376672/*func_1015*/;
			break;
		case 13:
			uParam0->f_2 = 376610/*func_1014*/;
			break;
		case 15:
			uParam0->f_2 = 376529/*func_1013*/;
			break;
		case 16:
			uParam0->f_5 = 376176/*func_1012*/;
			break;
		case 108:
			uParam0->f_55 = 371743/*func_997*/;
			break;
		case 17:
			uParam0->f_17 = 370603/*func_995*/;
			break;
		case 19:
			uParam0->f_17 = 370578/*func_994*/;
			break;
		case 20:
			uParam0->f_3 = 370569/*func_993*/;
			break;
		case 21:
			uParam0->f_3 = 370438/*func_991*/;
			break;
		case 74:
			uParam0->f_53 = 370334/*func_990*/;
			break;
		case 75:
			uParam0->f_4 = 370318/*func_989*/;
			break;
		case 22:
			uParam0->f_24 = 370168/*func_988*/;
			break;
		case 23:
			uParam0->f_26 = 370160/*func_987*/;
			break;
		case 26:
			uParam0->f_38 = 362321/*func_948*/;
			break;
		case 25:
			uParam0->f_23 = 361272/*func_944*/;
			break;
		case 27:
			uParam0->f_25 = 361080/*func_942*/;
			break;
		case 28:
			uParam0->f_24 = 361042/*func_941*/;
			break;
		case 29:
			uParam0->f_28 = 361019/*func_940*/;
			break;
		case 30:
			uParam0->f_8 = 360067/*func_936*/;
			break;
		case 31:
			uParam0->f_39 = 360039/*func_935*/;
			break;
		case 43:
			uParam0->f_8 = 359925/*func_934*/;
			break;
		case 33:
			uParam0->f_40 = 359807/*func_933*/;
			break;
		case 76:
			uParam0->f_13 = 359758/*func_932*/;
			break;
		case 34:
			uParam0->f_41 = 350920/*func_931*/;
			break;
		case 36:
			uParam0->f_58 = 350872/*func_930*/;
			break;
		case 35:
			uParam0->f_42 = 339782/*func_923*/;
			break;
		case 45:
			uParam0->f_14 = 339773/*func_922*/;
			break;
		case 46:
			uParam0->f_14 = 339764/*func_921*/;
			break;
		case 110:
			uParam0->f_57 = 339756/*func_920*/;
			break;
		case 77:
			uParam0->f_13 = 339745/*func_919*/;
			break;
		case 47:
			uParam0->f_43 = 339628/*func_918*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 338695/*func_904*/;
			break;
		case 49:
			uParam0->f_8 = 338686/*func_903*/;
			break;
		case 50:
			*uParam0 = 338517/*func_902*/;
			break;
		case 51:
			*uParam0 = 338508/*func_901*/;
			break;
		case 52:
			uParam0->f_15 = 338497/*func_900*/;
			break;
		case 53:
			uParam0->f_13 = 338474/*func_899*/;
			break;
		case 54:
			uParam0->f_45 = 338426/*func_898*/;
			break;
		case 56:
			uParam0->f_46 = 338408/*func_897*/;
			break;
		case 57:
			uParam0->f_11 = 338366/*func_895*/;
			break;
		case 58:
			uParam0->f_13 = 338324/*func_894*/;
			break;
		case 59:
			*uParam0 = 338195/*func_892*/;
			break;
		case 60:
			*uParam0 = 338186/*func_891*/;
			break;
		case 61:
			uParam0->f_15 = 338175/*func_890*/;
			break;
		case 62:
			uParam0->f_13 = 338152/*func_889*/;
			break;
		case 63:
			uParam0->f_11 = 338143/*func_888*/;
			break;
		case 55:
			uParam0->f_45 = 338102/*func_887*/;
			break;
		case 64:
			uParam0->f_47 = 338094/*func_886*/;
			break;
		case 65:
			uParam0->f_21 = 338086/*func_885*/;
			break;
		case 66:
			uParam0->f_21 = 337815/*func_884*/;
			break;
		case 67:
			uParam0->f_21 = 337745/*func_883*/;
			break;
		case 68:
			*uParam0 = 337073/*func_881*/;
			break;
		case 69:
			*uParam0 = 337064/*func_880*/;
			break;
		case 70:
			uParam0->f_48 = 337052/*func_879*/;
			break;
		case 71:
			uParam0->f_49 = 336832/*func_878*/;
			break;
		case 107:
			uParam0->f_50 = 336820/*func_877*/;
			break;
		case 80:
			uParam0->f_7 = 336284/*func_873*/;
			break;
		case 84:
			uParam0->f_1 = 336169/*func_868*/;
			break;
		case 85:
			uParam0->f_1 = 335266/*func_866*/;
			break;
		case 87:
			uParam0->f_1 = 332637/*func_857*/;
			break;
		case 88:
			uParam0->f_1 = 332628/*func_856*/;
			break;
		case 89:
			uParam0->f_54 = 332620/*func_855*/;
			break;
		case 96:
			uParam0->f_1 = 332611/*func_854*/;
			break;
		case 97:
			uParam0->f_1 = 332602/*func_853*/;
			break;
		case 98:
			uParam0->f_1 = 332593/*func_852*/;
			break;
		case 100:
			uParam0->f_22 = 332585/*func_851*/;
			break;
		case 101:
			uParam0->f_22 = 332577/*func_850*/;
			break;
		case 112:
			uParam0->f_13 = 332542/*func_848*/;
			break;
		case 113:
			uParam0->f_3 = 332533/*func_847*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*func_845*/;
			break;
		case 115:
			uParam0->f_3 = 330586/*func_844*/;
			break;
		case 116:
			*uParam0 = 330577/*func_843*/;
			break;
		case 117:
			uParam0->f_16 = 329357/*func_842*/;
			break;
		case 121:
			*uParam0 = 329275/*func_841*/;
			break;
		case 122:
			*uParam0 = 329258/*func_840*/;
			break;
		case 123:
			uParam0->f_19 = 329226/*func_838*/;
			break;
		case 78:
			uParam0->f_59 = 328010/*func_826*/;
			break;
		case 124:
			uParam0->f_1 = 328001/*func_825*/;
			break;
		case 125:
			uParam0->f_19 = 327993/*func_824*/;
			break;
	}
}

int func_866(int iParam0, var uParam1)//Position - 0x51DA2
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	var uVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_2__::func_399();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_330(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_241(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_533(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_2__::func_533(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_944(int iParam0, int iParam1)//Position - 0x58338
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_2__::func_399();
	iVar4 = 0;
	Var5 = { __LIB_2__::func_561(iVar3) };
	func_554(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_3__::func_805(iParam1, 0, 1);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				if (__LIB_2__::func_444(0, iParam1))
				{
					__LIB_2__::func_447(1);
				}
				break;
			default:
				__LIB_3__::func_805(iParam1, 0, !bVar2);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				__LIB_2__::func_447(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_805(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_927(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_927(iParam0, -1);
			__LIB_2__::func_447(iVar4);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_905(iVar4, 1);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_905(iVar4, 1);
		}
	}
	else
	{
		__LIB_2__::func_447(iVar4);
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_948(var uParam0, var uParam1)//Position - 0x58751
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (!__LIB_4__::func_10() && iVar0 != 1)
	{
		__LIB_2__::func_565(1);
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_567(uParam0, uParam1);
			break;
		case 1:
			func_949(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_949(var uParam0, var uParam1)//Position - 0x587A7
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
	bVar2 = __LIB_3__::func_820();
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_4__::func_724(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_2__::func_566() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_7__::func_396();
				if (bVar2)
				{
					__LIB_2__::func_447(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_3__::func_816(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_2__::func_551();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_4__::func_724(iVar8);
		if (__LIB_2__::func_563(iVar8, bVar0, bVar1))
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
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_7__::func_286(1, sVar6, sVar6);
		__LIB_3__::func_874();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_25__::func_557(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_7__::func_396();
			if (bVar2)
			{
				__LIB_2__::func_447(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_3__::func_816(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_25__::func_296(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_4__::func_10();
		__LIB_7__::func_396();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

void func_1045(var uParam0, int iParam1)//Position - 0x5D7B6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 423539/*func_1217*/;
			break;
		case 111:
			uParam0->f_35 = 423525/*func_1216*/;
			break;
		case 1:
			uParam0->f_30 = 423434/*func_1214*/;
			break;
		case 2:
			uParam0->f_31 = 423215/*func_1211*/;
			break;
		case 3:
			uParam0->f_34 = 423058/*func_1210*/;
			break;
		case 4:
			uParam0->f_12 = 423046/*func_1209*/;
			break;
		case 5:
			uParam0->f_11 = 423036/*func_1208*/;
			break;
		case 37:
			uParam0->f_18 = 422922/*func_1207*/;
			break;
		case 38:
			uParam0->f_9 = 422875/*func_1206*/;
			break;
		case 42:
			uParam0->f_10 = 422847/*func_1205*/;
			break;
		case 6:
			uParam0->f_32 = 422759/*func_1204*/;
			break;
		case 11:
			uParam0->f_11 = 422750/*func_1203*/;
			break;
		case 12:
			uParam0->f_33 = 421005/*func_1198*/;
			break;
		case 14:
			uParam0->f_11 = 420996/*func_1197*/;
			break;
		case 109:
			uParam0->f_56 = 416963/*func_1194*/;
			break;
		case 8:
			uParam0->f_37 = 416486/*func_1193*/;
			break;
		case 7:
			uParam0->f_36 = 416392/*func_1192*/;
			break;
		case 79:
			*uParam0 = 416383/*func_1191*/;
			break;
		case 13:
			uParam0->f_2 = 416321/*func_1190*/;
			break;
		case 15:
			uParam0->f_2 = 416240/*func_1189*/;
			break;
		case 16:
			uParam0->f_5 = 415342/*func_1187*/;
			break;
		case 108:
			uParam0->f_55 = 412063/*func_1175*/;
			break;
		case 17:
			uParam0->f_17 = 410821/*func_1172*/;
			break;
		case 19:
			uParam0->f_17 = 410796/*func_1171*/;
			break;
		case 20:
			uParam0->f_3 = 410582/*func_1169*/;
			break;
		case 21:
			uParam0->f_3 = 410518/*func_1168*/;
			break;
		case 74:
			uParam0->f_53 = 410414/*func_1167*/;
			break;
		case 75:
			uParam0->f_4 = 410398/*func_1166*/;
			break;
		case 22:
			uParam0->f_24 = 410296/*func_1165*/;
			break;
		case 23:
			uParam0->f_26 = 410288/*func_1164*/;
			break;
		case 26:
			uParam0->f_38 = 406274/*func_1144*/;
			break;
		case 25:
			uParam0->f_23 = 405824/*func_1141*/;
			break;
		case 27:
			uParam0->f_25 = 405816/*func_1140*/;
			break;
		case 28:
			uParam0->f_24 = 405808/*func_1139*/;
			break;
		case 30:
			uParam0->f_8 = 405171/*func_1134*/;
			break;
		case 31:
			uParam0->f_39 = 405041/*func_1133*/;
			break;
		case 33:
			uParam0->f_40 = 404167/*func_1124*/;
			break;
		case 32:
			*uParam0 = 403964/*func_1120*/;
			break;
		case 76:
			uParam0->f_13 = 403811/*func_1119*/;
			break;
		case 34:
			uParam0->f_41 = 402199/*func_1115*/;
			break;
		case 36:
			uParam0->f_58 = 402154/*func_1114*/;
			break;
		case 35:
			uParam0->f_42 = 392894/*func_1111*/;
			break;
		case 45:
			uParam0->f_14 = 392885/*func_1110*/;
			break;
		case 46:
			uParam0->f_14 = 392876/*func_1109*/;
			break;
		case 110:
			uParam0->f_57 = 392868/*func_1108*/;
			break;
		case 77:
			uParam0->f_13 = 392845/*func_1107*/;
			break;
		case 47:
			uParam0->f_43 = 392796/*func_1106*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 392659/*func_1104*/;
			break;
		case 49:
			uParam0->f_8 = 392641/*func_1103*/;
			break;
		case 50:
			*uParam0 = 391809/*func_1099*/;
			break;
		case 51:
			*uParam0 = 391707/*func_1098*/;
			break;
		case 52:
			uParam0->f_15 = 391696/*func_1097*/;
			break;
		case 53:
			uParam0->f_13 = 391543/*func_1096*/;
			break;
		case 54:
			uParam0->f_45 = 391310/*func_1095*/;
			break;
		case 56:
			uParam0->f_46 = 391301/*func_1094*/;
			break;
		case 57:
			uParam0->f_11 = 390888/*func_1090*/;
			break;
		case 58:
			uParam0->f_13 = 390735/*func_1089*/;
			break;
		case 59:
			*uParam0 = 390726/*func_1088*/;
			break;
		case 60:
			*uParam0 = 390717/*func_1087*/;
			break;
		case 61:
			uParam0->f_15 = 390706/*func_1086*/;
			break;
		case 62:
			uParam0->f_13 = 390695/*func_1085*/;
			break;
		case 63:
			uParam0->f_11 = 390686/*func_1084*/;
			break;
		case 64:
			uParam0->f_47 = 390678/*func_1083*/;
			break;
		case 65:
			uParam0->f_21 = 389622/*func_1080*/;
			break;
		case 66:
			uParam0->f_21 = 389402/*func_1079*/;
			break;
		case 67:
			uParam0->f_21 = 389327/*func_1078*/;
			break;
		case 68:
			*uParam0 = 388638/*func_1077*/;
			break;
		case 69:
			*uParam0 = 388629/*func_1076*/;
			break;
		case 70:
			uParam0->f_48 = 388617/*func_1075*/;
			break;
		case 71:
			uParam0->f_49 = 388525/*func_1074*/;
			break;
		case 107:
			uParam0->f_50 = 388513/*func_1073*/;
			break;
		case 80:
			uParam0->f_7 = 388146/*func_1072*/;
			break;
		case 84:
			uParam0->f_1 = 388137/*func_1071*/;
			break;
		case 85:
			uParam0->f_1 = 387345/*func_1069*/;
			break;
		case 87:
			uParam0->f_1 = 385967/*func_1062*/;
			break;
		case 88:
			uParam0->f_1 = 385958/*func_1061*/;
			break;
		case 89:
			uParam0->f_54 = 385950/*func_1060*/;
			break;
		case 96:
			uParam0->f_1 = 385941/*func_1059*/;
			break;
		case 97:
			uParam0->f_1 = 385932/*func_1058*/;
			break;
		case 98:
			uParam0->f_1 = 385923/*func_1057*/;
			break;
		case 100:
			uParam0->f_22 = 385915/*func_1056*/;
			break;
		case 101:
			uParam0->f_22 = 385907/*func_1055*/;
			break;
		case 112:
			uParam0->f_13 = 385895/*func_1054*/;
			break;
		case 113:
			uParam0->f_3 = 385886/*func_1053*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*func_845*/;
			break;
		case 115:
			uParam0->f_3 = 385877/*func_1052*/;
			break;
		case 116:
			*uParam0 = 385868/*func_1051*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*func_1050*/;
			break;
		case 78:
			uParam0->f_59 = 384476/*func_1048*/;
			break;
		case 124:
			uParam0->f_1 = 384467/*func_1047*/;
			break;
		case 125:
			uParam0->f_19 = 384459/*func_1046*/;
			break;
	}
}

int func_1069(int iParam0, var uParam1)//Position - 0x5E911
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_330(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_241(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_586(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_2__::func_586(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1095(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x5F88E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0)) && !__LIB_2__::func_590(__LIB_0__::func_582(), __LIB_2__::func_591(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__::func_590(iVar1, __LIB_2__::func_591(iParam0)) && __LIB_7__::func_33(iVar1))
				{
					Var3 = { __LIB_1__::func_267(iVar1) };
					if (__LIB_0__::func_585(Var3))
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
Vector3 func_1096(int iParam0)//Position - 0x5F977
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

void func_1141(int iParam0, int iParam1)//Position - 0x63140
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_611(iParam0) };
	if (__LIB_7__::func_408(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_19__::func_95(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_19__::func_174(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_19__::func_174(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_1144(var uParam0, var uParam1)//Position - 0x63302
{
	if (__LIB_2__::func_399() == 2 || __LIB_2__::func_399() == 1)
	{
		func_1147(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_590(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_591(*uParam0)))
	{
		__LIB_3__::func_829(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_612(uParam1);
	}
}

void func_1147(var uParam0, var uParam1)//Position - 0x633E1
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_569(uParam0, uParam1);
			break;
		case 1:
			func_1161(uParam0, uParam1);
			break;
		case 2:
			__LIB_32__::func_188(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1161(var uParam0, var uParam1)//Position - 0x63FDF
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_96(*uParam0))
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
			__LIB_1__::func_319("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_19__::func_95(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_1194(int iParam0, var uParam1, int iParam2)//Position - 0x65CC3
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_2__::func_617(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
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
		case 150:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
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
		case 151:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
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
		case 152:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
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
		case 153:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_22.f_5) && MISC::GET_HASH_KEY(uParam1->f_22.f_5) != joaat("buzz_short"))
	{
		if (iParam2 == 0)
		{
			uParam1->f_22.f_42 = 1;
		}
		else
		{
			if (!__LIB_4__::func_973(1) || (__LIB_2__::func_232() && __LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0))))
			{
				func_554(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_19__::func_96(iParam0))
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

void func_1218(var uParam0, int iParam1)//Position - 0x6767C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 439913/*func_1339*/;
			break;
		case 111:
			uParam0->f_35 = 439904/*func_1338*/;
			break;
		case 1:
			uParam0->f_30 = 439837/*func_1336*/;
			break;
		case 2:
			uParam0->f_31 = 439399/*func_1333*/;
			break;
		case 3:
			uParam0->f_34 = 439251/*func_1332*/;
			break;
		case 4:
			uParam0->f_12 = 439239/*func_1331*/;
			break;
		case 37:
			uParam0->f_18 = 439025/*func_1330*/;
			break;
		case 38:
			uParam0->f_9 = 438936/*func_1329*/;
			break;
		case 39:
			uParam0->f_11 = 438916/*func_1328*/;
			break;
		case 40:
			uParam0->f_6 = 438811/*func_1327*/;
			break;
		case 41:
			uParam0->f_20 = 438786/*func_1326*/;
			break;
		case 42:
			uParam0->f_10 = 438773/*func_1325*/;
			break;
		case 6:
			uParam0->f_32 = 438709/*func_1324*/;
			break;
		case 11:
			uParam0->f_11 = 438700/*func_1323*/;
			break;
		case 12:
			uParam0->f_33 = 438163/*func_1319*/;
			break;
		case 14:
			uParam0->f_11 = 438154/*func_1318*/;
			break;
		case 109:
			uParam0->f_56 = 437232/*func_1316*/;
			break;
		case 8:
			uParam0->f_37 = 437224/*func_1315*/;
			break;
		case 7:
			uParam0->f_36 = 437215/*func_1314*/;
			break;
		case 79:
			*uParam0 = 437206/*func_1313*/;
			break;
		case 13:
			uParam0->f_2 = 437144/*func_1312*/;
			break;
		case 15:
			uParam0->f_2 = 437063/*func_1311*/;
			break;
		case 16:
			uParam0->f_5 = 436736/*func_1310*/;
			break;
		case 108:
			uParam0->f_55 = 436727/*func_1309*/;
			break;
		case 17:
			uParam0->f_17 = 436716/*func_1308*/;
			break;
		case 19:
			uParam0->f_17 = 436705/*func_1307*/;
			break;
		case 18:
			uParam0->f_8 = 436663/*func_1305*/;
			break;
		case 20:
			uParam0->f_3 = 436654/*func_1304*/;
			break;
		case 21:
			uParam0->f_3 = 436606/*func_1303*/;
			break;
		case 74:
			uParam0->f_53 = 436451/*func_1301*/;
			break;
		case 75:
			uParam0->f_4 = 436442/*func_1300*/;
			break;
		case 22:
			uParam0->f_24 = 436340/*func_1299*/;
			break;
		case 23:
			uParam0->f_26 = 436332/*func_1298*/;
			break;
		case 25:
			uParam0->f_23 = 435905/*func_1295*/;
			break;
		case 27:
			uParam0->f_25 = 435897/*func_1294*/;
			break;
		case 28:
			uParam0->f_24 = 435889/*func_1293*/;
			break;
		case 30:
			uParam0->f_8 = 435854/*func_1292*/;
			break;
		case 31:
			uParam0->f_39 = 435826/*func_1291*/;
			break;
		case 33:
			uParam0->f_40 = 435659/*func_1290*/;
			break;
		case 76:
			uParam0->f_13 = 435636/*func_1289*/;
			break;
		case 34:
			uParam0->f_41 = 432022/*func_1286*/;
			break;
		case 36:
			uParam0->f_58 = 431977/*func_1285*/;
			break;
		case 35:
			uParam0->f_42 = 428783/*func_1281*/;
			break;
		case 45:
			uParam0->f_14 = 428774/*func_1280*/;
			break;
		case 46:
			uParam0->f_14 = 428765/*func_1279*/;
			break;
		case 110:
			uParam0->f_57 = 428757/*func_1278*/;
			break;
		case 77:
			uParam0->f_13 = 428746/*func_1277*/;
			break;
		case 47:
			uParam0->f_43 = 428584/*func_1276*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 427312/*func_1268*/;
			break;
		case 49:
			uParam0->f_8 = 427303/*func_1267*/;
			break;
		case 50:
			*uParam0 = 426878/*func_1260*/;
			break;
		case 51:
			*uParam0 = 426869/*func_1259*/;
			break;
		case 52:
			uParam0->f_15 = 426858/*func_1258*/;
			break;
		case 53:
			uParam0->f_13 = 426835/*func_1257*/;
			break;
		case 54:
			uParam0->f_45 = 426827/*func_1256*/;
			break;
		case 56:
			uParam0->f_46 = 426818/*func_1255*/;
			break;
		case 57:
			uParam0->f_11 = 426805/*func_1254*/;
			break;
		case 58:
			uParam0->f_13 = 426763/*func_1253*/;
			break;
		case 59:
			*uParam0 = 426754/*func_1252*/;
			break;
		case 60:
			*uParam0 = 426745/*func_1251*/;
			break;
		case 61:
			uParam0->f_15 = 426734/*func_1250*/;
			break;
		case 62:
			uParam0->f_13 = 426723/*func_1249*/;
			break;
		case 63:
			uParam0->f_11 = 426714/*func_1248*/;
			break;
		case 64:
			uParam0->f_47 = 426706/*func_1247*/;
			break;
		case 65:
			uParam0->f_21 = 426698/*func_1246*/;
			break;
		case 66:
			uParam0->f_21 = 426085/*func_1243*/;
			break;
		case 67:
			uParam0->f_21 = 426015/*func_1242*/;
			break;
		case 68:
			*uParam0 = 425325/*func_1241*/;
			break;
		case 69:
			*uParam0 = 425316/*func_1240*/;
			break;
		case 70:
			uParam0->f_48 = 425304/*func_1239*/;
			break;
		case 71:
			uParam0->f_49 = 425295/*func_1238*/;
			break;
		case 107:
			uParam0->f_50 = 425283/*func_1237*/;
			break;
		case 80:
			uParam0->f_7 = 425274/*func_1236*/;
			break;
		case 84:
			uParam0->f_1 = 425265/*func_1235*/;
			break;
		case 85:
			uParam0->f_1 = 425256/*func_1234*/;
			break;
		case 87:
			uParam0->f_1 = 425247/*func_1233*/;
			break;
		case 88:
			uParam0->f_1 = 425238/*func_1232*/;
			break;
		case 89:
			uParam0->f_54 = 425230/*func_1231*/;
			break;
		case 96:
			uParam0->f_1 = 425221/*func_1230*/;
			break;
		case 97:
			uParam0->f_1 = 425212/*func_1229*/;
			break;
		case 98:
			uParam0->f_1 = 425203/*func_1228*/;
			break;
		case 100:
			uParam0->f_22 = 425195/*func_1227*/;
			break;
		case 101:
			uParam0->f_22 = 425187/*func_1226*/;
			break;
		case 112:
			uParam0->f_13 = 425175/*func_1225*/;
			break;
		case 113:
			uParam0->f_3 = 425166/*func_1224*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*func_845*/;
			break;
		case 115:
			uParam0->f_3 = 425157/*func_1223*/;
			break;
		case 116:
			*uParam0 = 425148/*func_1222*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*func_1050*/;
			break;
		case 78:
			uParam0->f_59 = 425140/*func_1221*/;
			break;
		case 124:
			uParam0->f_1 = 425131/*func_1220*/;
			break;
		case 125:
			uParam0->f_19 = 425123/*func_1219*/;
			break;
	}
}

void func_1268(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x68530
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_2__::func_635();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 1:
			__LIB_3__::func_805(iParam3, 0, 0);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 1);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 3:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 2:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_4__::func_727(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_554(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_3__::func_805(iParam3, 4, bVar1);
		__LIB_3__::func_805(iParam3, 5, bVar2);
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
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
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
	else if (__LIB_2__::func_444(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(4, iParam3) || __LIB_2__::func_444(5, iParam3))
	{
		iVar5 = __LIB_8__::func_220(__LIB_2__::func_444(4, iParam3));
		__LIB_2__::func_633(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_2__::func_626())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_3__::func_834())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_2__::func_549(iParam0, -1);
		}
	}
}

void func_1295(int iParam0, int iParam1)//Position - 0x6A6C1
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_2__::func_399();
		Var2 = { __LIB_2__::func_640(iParam0, iVar3) };
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && Global_1946250.f_3606 != 148)
		{
			__LIB_7__::func_928(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_928(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_907();
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_907();
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_1340(var uParam0, int iParam1)//Position - 0x6B672
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 716206/*func_1786*/;
			break;
		case 1:
			uParam0->f_30 = 716151/*func_1785*/;
			break;
		case 2:
			uParam0->f_31 = 715491/*func_1783*/;
			break;
		case 3:
			uParam0->f_34 = 715364/*func_1782*/;
			break;
		case 4:
			uParam0->f_12 = 715332/*func_1781*/;
			break;
		case 5:
			uParam0->f_11 = 715321/*func_1780*/;
			break;
		case 6:
			uParam0->f_32 = 715257/*func_1779*/;
			break;
		case 111:
			uParam0->f_35 = 715234/*func_1778*/;
			break;
		case 79:
			*uParam0 = 715225/*func_1777*/;
			break;
		case 37:
			uParam0->f_18 = 715112/*func_1776*/;
			break;
		case 38:
			uParam0->f_9 = 715016/*func_1774*/;
			break;
		case 11:
			uParam0->f_11 = 715007/*func_1773*/;
			break;
		case 12:
			uParam0->f_33 = 714617/*func_1771*/;
			break;
		case 109:
			uParam0->f_56 = 714314/*func_1770*/;
			break;
		case 15:
			uParam0->f_2 = 712347/*func_1757*/;
			break;
		case 13:
			uParam0->f_2 = 712338/*func_1756*/;
			break;
		case 75:
			uParam0->f_4 = 712329/*func_1755*/;
			break;
		case 16:
			uParam0->f_5 = 711946/*func_1752*/;
			break;
		case 108:
			uParam0->f_55 = 707991/*func_1733*/;
			break;
		case 17:
			uParam0->f_17 = 707267/*func_1730*/;
			break;
		case 19:
			uParam0->f_17 = 707242/*func_1729*/;
			break;
		case 20:
			uParam0->f_3 = 707073/*func_1728*/;
			break;
		case 21:
			uParam0->f_3 = 707010/*func_1727*/;
			break;
		case 74:
			uParam0->f_53 = 706858/*func_1726*/;
			break;
		case 22:
			uParam0->f_24 = 706777/*func_1725*/;
			break;
		case 25:
			uParam0->f_23 = 705840/*func_1721*/;
			break;
		case 30:
			uParam0->f_8 = 704507/*func_1715*/;
			break;
		case 31:
			uParam0->f_39 = 703931/*func_1712*/;
			break;
		case 33:
			uParam0->f_40 = 702696/*func_1707*/;
			break;
		case 14:
			uParam0->f_11 = 702687/*func_1706*/;
			break;
		case 34:
			uParam0->f_41 = 699920/*func_1703*/;
			break;
		case 36:
			uParam0->f_58 = 699867/*func_1702*/;
			break;
		case 35:
			uParam0->f_42 = 694415/*func_1698*/;
			break;
		case 45:
			uParam0->f_14 = 694406/*func_1697*/;
			break;
		case 46:
			uParam0->f_14 = 694397/*func_1696*/;
			break;
		case 110:
			uParam0->f_57 = 694389/*func_1695*/;
			break;
		case 77:
			uParam0->f_13 = 694366/*func_1694*/;
			break;
		case 47:
			uParam0->f_43 = 694317/*func_1693*/;
			break;
		case 49:
			uParam0->f_8 = 694292/*func_1692*/;
			break;
		case 50:
			*uParam0 = 694254/*func_1691*/;
			break;
		case 51:
			*uParam0 = 694180/*func_1688*/;
			break;
		case 52:
			uParam0->f_15 = 694169/*func_1687*/;
			break;
		case 53:
			uParam0->f_13 = 694090/*func_1686*/;
			break;
		case 54:
			uParam0->f_45 = 694082/*func_1685*/;
			break;
		case 56:
			uParam0->f_46 = 694073/*func_1684*/;
			break;
		case 57:
			uParam0->f_11 = 694063/*func_1683*/;
			break;
		case 58:
			uParam0->f_13 = 693816/*func_1682*/;
			break;
		case 64:
			uParam0->f_47 = 692672/*func_1677*/;
			break;
		case 65:
			uParam0->f_21 = 691480/*func_1672*/;
			break;
		case 66:
			uParam0->f_21 = 690373/*func_1661*/;
			break;
		case 67:
			uParam0->f_21 = 690197/*func_1659*/;
			break;
		case 68:
			*uParam0 = 688537/*func_1645*/;
			break;
		case 69:
			*uParam0 = 688528/*func_1644*/;
			break;
		case 70:
			uParam0->f_48 = 688516/*func_1643*/;
			break;
		case 71:
			uParam0->f_49 = 688507/*func_1642*/;
			break;
		case 107:
			uParam0->f_50 = 688495/*func_1641*/;
			break;
		case 80:
			uParam0->f_7 = 687621/*func_1635*/;
			break;
		case 73:
			uParam0->f_51 = 687612/*func_1634*/;
			break;
		case 84:
			uParam0->f_1 = 686960/*func_1632*/;
			break;
		case 85:
			uParam0->f_1 = 686088/*func_1624*/;
			break;
		case 87:
			uParam0->f_1 = 684877/*func_1615*/;
			break;
		case 88:
			uParam0->f_1 = 684857/*func_1614*/;
			break;
		case 89:
			uParam0->f_54 = 684763/*func_1613*/;
			break;
		case 90:
			uParam0->f_1 = 684632/*func_1610*/;
			break;
		case 91:
			uParam0->f_1 = 684004/*func_1609*/;
			break;
		case 92:
			uParam0->f_1 = 683237/*func_1606*/;
			break;
		case 94:
			uParam0->f_1 = 682685/*func_1605*/;
			break;
		case 95:
			uParam0->f_22 = 682091/*func_1600*/;
			break;
		case 18:
			uParam0->f_8 = 681733/*func_1596*/;
			break;
		case 96:
			uParam0->f_1 = 681640/*func_1595*/;
			break;
		case 97:
			uParam0->f_1 = 680794/*func_1590*/;
			break;
		case 98:
			uParam0->f_1 = 446549/*func_1395*/;
			break;
		case 100:
			uParam0->f_22 = 443269/*func_1373*/;
			break;
		case 101:
			uParam0->f_22 = 442111/*func_1360*/;
			break;
		case 78:
			uParam0->f_59 = 441903/*func_1357*/;
			break;
		case 104:
			uParam0->f_1 = 441435/*func_1348*/;
			break;
		case 102:
			uParam0->f_1 = 441426/*func_1347*/;
			break;
		case 103:
			uParam0->f_22 = 441316/*func_1342*/;
			break;
		case 81:
			*uParam0 = 441273/*func_1341*/;
			break;
	}
}

int func_1395(var uParam0, var uParam1)//Position - 0x6D055
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
	if (__LIB_2__::func_675())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_3__::func_842())
	{
		func_1412(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_7__::func_43(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_2__::func_684(Global_1946250.f_3377) };
			Var2 = { __LIB_2__::func_683(Global_1946250.f_3377) };
			sVar3 = __LIB_2__::func_669(0, 1);
			sVar4 = __LIB_2__::func_682(0, 1);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_2__::func_669(bVar0, 0);
			sVar4 = __LIB_2__::func_682(bVar0, 0);
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
		if (__LIB_2__::func_668(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_667(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_7__::func_636(uParam1, iVar8))
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
			func_330(&iVar9, &(uParam1->f_109), 4);
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_7__::func_423(uParam1->f_109);
			return 0;
		}
		__LIB_2__::func_663(1);
		if (__LIB_7__::func_422())
		{
			__LIB_7__::func_635(iVar8);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
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
							__LIB_2__::func_677(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_2__::func_676(&Var6, &Var7, uParam1, iVar10);
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

int func_1412(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x6DC80
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_242(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1413(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1413(var uParam0, int iParam1)//Position - 0x6DCDE
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_2__::func_204(iParam1))
	{
		iVar0 = __LIB_25__::func_208(iParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_1416(&Var1, __LIB_2__::func_262(iVar0), 0, 1, 1, !__LIB_18__::func_523(), 0, __LIB_19__::func_138(), __LIB_2__::func_685(__LIB_6__::func_417(iParam1), 0), __LIB_2__::func_261(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(iParam1, 0), __LIB_8__::func_221(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1416(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x6DDF1
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
					if (__LIB_37__::func_867(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_7__::func_307(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
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
							if (!__LIB_2__::func_257(uParam0, &Global_78200))
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
								if (__LIB_1__::func_200(*uParam0))
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
										if (__LIB_2__::func_256(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_2__::func_256(uParam0->f_2) == 8 || __LIB_2__::func_256(uParam0->f_2) == 50) || __LIB_2__::func_256(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
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
											if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
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
												if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
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
								__LIB_25__::func_113(*uParam0, &Global_78200, uParam0->f_8);
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
											iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_6__::func_911())
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
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_8__::func_221(PLAYER::PLAYER_ID(), 2));
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
												iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
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
										__LIB_6__::func_810(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
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
									__LIB_18__::func_734(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_257(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_37__::func_856(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_709(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_2__::func_255(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_155(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_1540(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1540(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_597(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_0__::func_812(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_2__::func_254(*uParam0))
									{
										iVar13 = __LIB_2__::func_253(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_2__::func_254(*uParam0) && __LIB_2__::func_252(*uParam0))
									{
										iVar15 = __LIB_2__::func_253(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										__LIB_39__::func_563(*uParam0);
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
									if (__LIB_2__::func_251(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_6__::func_810(*uParam0, 0, -1, 0);
											__LIB_6__::func_810(*uParam0, 1, -1, 0);
											__LIB_6__::func_810(*uParam0, 2, -1, 0);
											func_1460(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
											func_1460(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_556(2153, -1, 0);
											iVar19 = __LIB_1__::func_556(2160, -1, 0);
											if (__LIB_1__::func_563(161, -1))
											{
												iVar21 = __LIB_1__::func_556(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_181(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_186(iVar21);
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
														iVar21 = __LIB_18__::func_181(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_18__::func_186(iVar21);
														if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_1460(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_556(753, -1, 0);
												func_1460(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_155(0))
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
									func_1455(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1426(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_2__::func_250(iVar28, iParam8, &uVar26, &uVar27))
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
									iVar37 = __LIB_0__::func_250(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_6__::func_785(&Var36, iVar31, iVar37, *uParam0, -1))
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
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_8__::func_221(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_235(*uParam0, Var36.f_4, Var36.f_5);
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
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_8__::func_221(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_235(*uParam0, Var35.f_2, Var35.f_3);
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
							__LIB_2__::func_249(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_155(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_2__::func_249(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_2__::func_249(*uParam0);
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

void func_1426(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x73C19
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
		iVar2 = __LIB_0__::func_250(iParam0);
		bVar3 = func_1453(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_1444(iParam0, iParam3);
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
			if (__LIB_18__::func_373(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_373(123, iVar0))
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
					if (__LIB_18__::func_373(iVar10, iVar0))
					{
						if (__LIB_25__::func_27(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_993(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_1444(int iParam0, int iParam1)//Position - 0x7E0CC
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_259(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
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
				iVar5 = func_259(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_1453(int iParam0, bool bParam1)//Position - 0x7E52A
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
							iVar2 = __LIB_25__::func_110(joaat("MP_M_Freemode_01"), 11, func_259(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_373(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(72, -1))
						{
						}
						else if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_259(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_259(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_259(iParam0, 11, -1), 0);
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
						iVar8 = func_259(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_259(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_259(iParam0, 11, -1), 0);
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
						iVar12 = func_259(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

void func_1455(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x7F588
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
		iVar1 = __LIB_0__::func_250(iParam0);
		bVar2 = func_1453(iParam0, 0);
		bVar3 = __LIB_31__::func_887(iParam0);
		bVar4 = func_1444(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_6__::func_785(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
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
						if (__LIB_25__::func_27(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_235(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

int func_1460(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x805E4
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
		Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
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
			func_1524(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__::func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 10, 0, -1) };
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
						func_1524(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__::func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1524(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1460(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1524(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iVar0, func_259(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_1460(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_395();
			if (iVar17 != -1)
			{
				__LIB_18__::func_394(iVar17, 0, iParam10);
			}
			func_1518(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1524(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_39__::func_749(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1460(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_1524(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1460(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_39__::func_563(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1460(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1460(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar23 = __LIB_6__::func_795(iParam0, 11);
				iVar24 = __LIB_6__::func_795(iParam0, 8);
				iVar25 = __LIB_6__::func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__::func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_1515(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__::func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__::func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_1460(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__::func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__::func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__::func_870(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_1460(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1460(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__::func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_1460(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_870(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__::func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_1460(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_1460(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1460(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_32__::func_56(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1518(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1515(iVar5, func_259(iParam0, 8, -1), iParam2, func_259(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_556(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_556(2160, iParam10, 0);
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
						iVar42 = __LIB_18__::func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_1501(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_1515(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_1518(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_32__::func_56(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1515(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__::func_795(iParam0, 7);
				if (!__LIB_24__::func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_1__::func_556(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_556(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_556(2102, iParam10, 0);
				fVar55 = __LIB_2__::func_97(135, iParam10);
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
				__LIB_25__::func_44(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__::func_795(iParam0, 11);
			iVar58 = __LIB_6__::func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_1460(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_1460(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1515(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1515(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar60, iVar62) == iVar59)
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
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1460(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1515(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1460(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_223(iParam0))
				{
					iVar63 = __LIB_6__::func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!__LIB_9__::func_623(iParam0, 9, iVar63))
						{
							func_1460(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1460(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1460(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_556(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__::func_183(iParam0, iVar64), __LIB_0__::func_217(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__::func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__::func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_1460(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_259(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_259(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_1460(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_1460(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__::func_795(iParam0, 4);
				iVar75 = __LIB_6__::func_795(iParam0, 6);
				if (__LIB_0__::func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_1460(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1460(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_1460(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1460(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_1460(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1460(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_1460(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1460(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				__LIB_39__::func_563(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1460(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1460(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1461(iParam0, &uVar4))
		{
			func_1460(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1460(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1460(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1460(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_259(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_1460(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1461(int iParam0, var uParam1)//Position - 0x8248E
{
	int iVar0;
	int iVar1;
	*uParam1 = func_259(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_556(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_556(754, Global_78127, 0) == 0 && __LIB_1__::func_556(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				if (__LIB_1__::func_556(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_556(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_556(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_556(755, Global_78127, 0);
		if (!__LIB_9__::func_623(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_556(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_556(753, Global_78127, 0);
			}
			__LIB_1__::func_597(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_597(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_1501(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8CE86
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_25__::func_74(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_18__::func_394(iVar1, 1, iParam2);
	}
	func_1426(iParam0, bParam3, 0, -1);
}

int func_1515(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x94AF8
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_1515(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_1515(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__::func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar12, 3, 4);
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

void func_1518(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x980A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1520(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__::func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__::func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__::func_795(iParam0, 11);
				if (!__LIB_6__::func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_25__::func_74(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_297(iVar0, iParam2, 13) && !__LIB_25__::func_297(iVar0, iParam2, 14)) && !__LIB_25__::func_297(iVar0, iParam2, 15)) && !__LIB_25__::func_297(iVar0, iParam2, 16)) && !__LIB_25__::func_297(iVar0, iParam2, 71)) && !__LIB_25__::func_297(iVar0, iParam2, 72))
				{
					__LIB_25__::func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__::func_110(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_393(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_18__::func_394(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_1520(int iParam0)//Position - 0x98234
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_2__::func_204(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_259(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_2__::func_204(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_259(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

void func_1524(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x9868D
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
		Global_78130[2 /*14*/] = { __LIB_37__::func_856(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_86(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_1524(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1524(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1524(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_556(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_597(iVar6, iVar7, Global_78127, 1, 0);
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
							func_1524(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1524(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1524(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_37__::func_856(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1524(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1524(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1524(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_1540(int iParam0, int iParam1, int iParam2)//Position - 0x9AF16
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
	if (__LIB_18__::func_485(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1541(iParam0);
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_2__::func_256(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_2__::func_256(iVar1) == 8)
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
					if (__LIB_7__::func_241(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_259(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
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

void func_1541(int iParam0)//Position - 0x9B122
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_25__::func_111(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1542(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1542(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9B1B7
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
	if (__LIB_18__::func_485(iParam0, &Global_78200, iParam1, &iParam3))
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
			if (!__LIB_0__::func_155(0))
			{
				if (__LIB_1__::func_563(161, -1))
				{
					func_1460(iParam0, 2, __LIB_1__::func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1460(iParam0, 2, __LIB_1__::func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_25__::func_44(iParam0, -1);
				}
			}
			__LIB_0__::func_917(0);
			__LIB_18__::func_775(1, 2);
		}
	}
}

int func_1606(var uParam0, var uParam1)//Position - 0xA6CE5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_2__::func_399();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_2__::func_696();
	}
	__LIB_2__::func_695(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_7__::func_636(uParam1, iVar3))
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
					if (!__LIB_7__::func_636(uParam1, iVar3))
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
			func_330(&iVar2, &(uParam1->f_109), 4);
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_7__::func_423(uParam1->f_109);
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
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_7__::func_423(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_1412(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_95())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_2__::func_671());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_7__::func_635(iVar3);
	__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_1624(int iParam0, var uParam1)//Position - 0xA7808
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_3__::func_845())
	{
		return 1;
	}
	if (__LIB_32__::func_25())
	{
		return 1;
	}
	iVar0 = __LIB_2__::func_399();
	iVar1 = __LIB_6__::func_418();
	Var2 = { __LIB_18__::func_737(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_1412(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_2__::func_702(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_930(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_330(&iVar1, &(uParam1->f_109), 32);
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_18__::func_736(iParam0, iVar0));
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
		iVar5 = __LIB_2__::func_701(iParam0, iVar0);
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_1721(int iParam0, int iParam1)//Position - 0xAC530
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
	if (__LIB_18__::func_911(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_2__::func_457(iVar7, PLAYER::PLAYER_ID()))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_388(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_388(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_933(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1722(iParam0, 0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_933(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1722(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_1722(int iParam0, bool bParam1)//Position - 0xAC7BF
{
	__LIB_25__::func_388(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_7__::func_394(2);
	}
}

void func_1787(var uParam0, int iParam1)//Position - 0xAEDB7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 737349/*func_1910*/;
			break;
		case 111:
			uParam0->f_35 = 737340/*func_1909*/;
			break;
		case 1:
			uParam0->f_30 = 737269/*func_1907*/;
			break;
		case 2:
			uParam0->f_31 = 736945/*func_1904*/;
			break;
		case 3:
			uParam0->f_34 = 736784/*func_1903*/;
			break;
		case 4:
			uParam0->f_12 = 736772/*func_1902*/;
			break;
		case 6:
			uParam0->f_32 = 736708/*func_1901*/;
			break;
		case 11:
			uParam0->f_11 = 736699/*func_1900*/;
			break;
		case 12:
			uParam0->f_33 = 736363/*func_1896*/;
			break;
		case 14:
			uParam0->f_11 = 736354/*func_1895*/;
			break;
		case 109:
			uParam0->f_56 = 735624/*func_1893*/;
			break;
		case 8:
			uParam0->f_37 = 735616/*func_1892*/;
			break;
		case 7:
			uParam0->f_36 = 735607/*func_1891*/;
			break;
		case 79:
			*uParam0 = 735598/*func_1890*/;
			break;
		case 72:
			uParam0->f_12 = 735586/*func_1889*/;
			break;
		case 13:
			uParam0->f_2 = 735577/*func_1888*/;
			break;
		case 15:
			uParam0->f_2 = 735498/*func_1887*/;
			break;
		case 16:
			uParam0->f_5 = 735154/*func_1886*/;
			break;
		case 108:
			uParam0->f_55 = 735145/*func_1885*/;
			break;
		case 17:
			uParam0->f_17 = 734637/*func_1883*/;
			break;
		case 19:
			uParam0->f_17 = 734584/*func_1882*/;
			break;
		case 18:
			uParam0->f_8 = 734496/*func_1880*/;
			break;
		case 20:
			uParam0->f_3 = 734476/*func_1879*/;
			break;
		case 21:
			uParam0->f_3 = 734449/*func_1878*/;
			break;
		case 74:
			uParam0->f_53 = 734427/*func_1877*/;
			break;
		case 75:
			uParam0->f_4 = 734418/*func_1876*/;
			break;
		case 22:
			uParam0->f_24 = 734316/*func_1875*/;
			break;
		case 23:
			uParam0->f_26 = 734308/*func_1874*/;
			break;
		case 26:
			uParam0->f_38 = 734300/*func_1873*/;
			break;
		case 25:
			uParam0->f_23 = 733539/*func_1869*/;
			break;
		case 27:
			uParam0->f_25 = 733531/*func_1868*/;
			break;
		case 28:
			uParam0->f_24 = 733523/*func_1867*/;
			break;
		case 30:
			uParam0->f_8 = 733412/*func_1866*/;
			break;
		case 31:
			uParam0->f_39 = 733365/*func_1865*/;
			break;
		case 33:
			uParam0->f_40 = 733296/*func_1864*/;
			break;
		case 76:
			uParam0->f_13 = 733273/*func_1863*/;
			break;
		case 34:
			uParam0->f_41 = 729200/*func_1860*/;
			break;
		case 36:
			uParam0->f_58 = 729143/*func_1859*/;
			break;
		case 35:
			uParam0->f_42 = 722925/*func_1850*/;
			break;
		case 45:
			uParam0->f_14 = 722916/*func_1849*/;
			break;
		case 46:
			uParam0->f_14 = 722907/*func_1848*/;
			break;
		case 110:
			uParam0->f_57 = 722899/*func_1847*/;
			break;
		case 77:
			uParam0->f_13 = 722888/*func_1846*/;
			break;
		case 47:
			uParam0->f_43 = 722784/*func_1845*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 721717/*func_1837*/;
			break;
		case 49:
			uParam0->f_8 = 721708/*func_1836*/;
			break;
		case 50:
			*uParam0 = 721311/*func_1829*/;
			break;
		case 51:
			*uParam0 = 721302/*func_1828*/;
			break;
		case 52:
			uParam0->f_15 = 721292/*func_1827*/;
			break;
		case 53:
			uParam0->f_13 = 721269/*func_1826*/;
			break;
		case 54:
			uParam0->f_45 = 720710/*func_1824*/;
			break;
		case 56:
			uParam0->f_46 = 720701/*func_1823*/;
			break;
		case 57:
			uParam0->f_11 = 720692/*func_1822*/;
			break;
		case 58:
			uParam0->f_13 = 720650/*func_1821*/;
			break;
		case 59:
			*uParam0 = 720641/*func_1820*/;
			break;
		case 60:
			*uParam0 = 720632/*func_1819*/;
			break;
		case 61:
			uParam0->f_15 = 720621/*func_1818*/;
			break;
		case 62:
			uParam0->f_13 = 720610/*func_1817*/;
			break;
		case 63:
			uParam0->f_11 = 720601/*func_1816*/;
			break;
		case 64:
			uParam0->f_47 = 720593/*func_1815*/;
			break;
		case 65:
			uParam0->f_21 = 720585/*func_1814*/;
			break;
		case 66:
			uParam0->f_21 = 720275/*func_1813*/;
			break;
		case 67:
			uParam0->f_21 = 720205/*func_1812*/;
			break;
		case 68:
			*uParam0 = 719516/*func_1811*/;
			break;
		case 69:
			*uParam0 = 719507/*func_1810*/;
			break;
		case 70:
			uParam0->f_48 = 719495/*func_1809*/;
			break;
		case 71:
			uParam0->f_49 = 719486/*func_1808*/;
			break;
		case 107:
			uParam0->f_50 = 719474/*func_1807*/;
			break;
		case 80:
			uParam0->f_7 = 719465/*func_1806*/;
			break;
		case 84:
			uParam0->f_1 = 719456/*func_1805*/;
			break;
		case 85:
			uParam0->f_1 = 719447/*func_1804*/;
			break;
		case 87:
			uParam0->f_1 = 719438/*func_1803*/;
			break;
		case 88:
			uParam0->f_1 = 719429/*func_1802*/;
			break;
		case 89:
			uParam0->f_54 = 719421/*func_1801*/;
			break;
		case 96:
			uParam0->f_1 = 719396/*func_1800*/;
			break;
		case 97:
			uParam0->f_1 = 719287/*func_1799*/;
			break;
		case 98:
			uParam0->f_1 = 718576/*func_1798*/;
			break;
		case 100:
			uParam0->f_22 = 717913/*func_1796*/;
			break;
		case 101:
			uParam0->f_22 = 717786/*func_1795*/;
			break;
		case 112:
			uParam0->f_13 = 717774/*func_1794*/;
			break;
		case 113:
			uParam0->f_3 = 717765/*func_1793*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*func_845*/;
			break;
		case 115:
			uParam0->f_3 = 717756/*func_1792*/;
			break;
		case 116:
			*uParam0 = 717747/*func_1791*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*func_1050*/;
			break;
		case 78:
			uParam0->f_59 = 717739/*func_1790*/;
			break;
		case 124:
			uParam0->f_1 = 717730/*func_1789*/;
			break;
		case 125:
			uParam0->f_19 = 717722/*func_1788*/;
			break;
	}
}

int func_1798(var uParam0, var uParam1)//Position - 0xAF6F0
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
		func_1412(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

void func_1869(int iParam0, int iParam1)//Position - 0xB3163
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
	if (__LIB_3__::func_856(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_2__::func_776(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(iVar7, 1) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(iVar7, 14)) && !func_555(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(iVar7, 14)) && !func_555(iVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_7__::func_937(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_18__::func_917(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_18__::func_917(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_1870())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
bool func_1870()//Position - 0xB33F1
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_1911(var uParam0, int iParam1)//Position - 0xB404E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 745634/*func_2003*/;
			break;
		case 111:
			uParam0->f_35 = 745625/*func_2002*/;
			break;
		case 1:
			uParam0->f_30 = 745554/*func_2000*/;
			break;
		case 2:
			uParam0->f_31 = 745318/*func_1997*/;
			break;
		case 3:
			uParam0->f_34 = 745267/*func_1996*/;
			break;
		case 4:
			uParam0->f_12 = 745255/*func_1995*/;
			break;
		case 6:
			uParam0->f_32 = 745191/*func_1994*/;
			break;
		case 11:
			uParam0->f_11 = 745182/*func_1993*/;
			break;
		case 12:
			uParam0->f_33 = 744742/*func_1989*/;
			break;
		case 14:
			uParam0->f_11 = 744733/*func_1988*/;
			break;
		case 109:
			uParam0->f_56 = 744065/*func_1986*/;
			break;
		case 8:
			uParam0->f_37 = 744057/*func_1985*/;
			break;
		case 7:
			uParam0->f_36 = 744048/*func_1984*/;
			break;
		case 79:
			*uParam0 = 744039/*func_1983*/;
			break;
		case 13:
			uParam0->f_2 = 743977/*func_1982*/;
			break;
		case 15:
			uParam0->f_2 = 743897/*func_1981*/;
			break;
		case 16:
			uParam0->f_5 = 743544/*func_1980*/;
			break;
		case 108:
			uParam0->f_55 = 743535/*func_1979*/;
			break;
		case 17:
			uParam0->f_17 = 743524/*func_1978*/;
			break;
		case 19:
			uParam0->f_17 = 743513/*func_1977*/;
			break;
		case 20:
			uParam0->f_3 = 743504/*func_1976*/;
			break;
		case 21:
			uParam0->f_3 = 743495/*func_1975*/;
			break;
		case 74:
			uParam0->f_53 = 743473/*func_1974*/;
			break;
		case 75:
			uParam0->f_4 = 743464/*func_1973*/;
			break;
		case 22:
			uParam0->f_24 = 743452/*func_1972*/;
			break;
		case 23:
			uParam0->f_26 = 743444/*func_1971*/;
			break;
		case 26:
			uParam0->f_38 = 743436/*func_1970*/;
			break;
		case 25:
			uParam0->f_23 = 743428/*func_1969*/;
			break;
		case 27:
			uParam0->f_25 = 743420/*func_1968*/;
			break;
		case 28:
			uParam0->f_24 = 743412/*func_1967*/;
			break;
		case 30:
			uParam0->f_8 = 743377/*func_1966*/;
			break;
		case 31:
			uParam0->f_39 = 743349/*func_1965*/;
			break;
		case 33:
			uParam0->f_40 = 743279/*func_1964*/;
			break;
		case 76:
			uParam0->f_13 = 743256/*func_1963*/;
			break;
		case 34:
			uParam0->f_41 = 743160/*func_1962*/;
			break;
		case 36:
			uParam0->f_58 = 743115/*func_1961*/;
			break;
		case 35:
			uParam0->f_42 = 740602/*func_1959*/;
			break;
		case 45:
			uParam0->f_14 = 740593/*func_1958*/;
			break;
		case 46:
			uParam0->f_14 = 740584/*func_1957*/;
			break;
		case 110:
			uParam0->f_57 = 740576/*func_1956*/;
			break;
		case 77:
			uParam0->f_13 = 740565/*func_1955*/;
			break;
		case 47:
			uParam0->f_43 = 740525/*func_1954*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 740417/*func_1953*/;
			break;
		case 49:
			uParam0->f_8 = 740408/*func_1952*/;
			break;
		case 50:
			*uParam0 = 740205/*func_1951*/;
			break;
		case 51:
			*uParam0 = 740196/*func_1950*/;
			break;
		case 52:
			uParam0->f_15 = 740185/*func_1949*/;
			break;
		case 53:
			uParam0->f_13 = 740162/*func_1948*/;
			break;
		case 54:
			uParam0->f_45 = 740154/*func_1947*/;
			break;
		case 56:
			uParam0->f_46 = 740145/*func_1946*/;
			break;
		case 57:
			uParam0->f_11 = 740132/*func_1945*/;
			break;
		case 58:
			uParam0->f_13 = 740090/*func_1944*/;
			break;
		case 59:
			*uParam0 = 740081/*func_1943*/;
			break;
		case 60:
			*uParam0 = 740072/*func_1942*/;
			break;
		case 61:
			uParam0->f_15 = 740061/*func_1941*/;
			break;
		case 62:
			uParam0->f_13 = 740050/*func_1940*/;
			break;
		case 63:
			uParam0->f_11 = 740041/*func_1939*/;
			break;
		case 64:
			uParam0->f_47 = 740033/*func_1938*/;
			break;
		case 65:
			uParam0->f_21 = 740025/*func_1937*/;
			break;
		case 66:
			uParam0->f_21 = 739792/*func_1936*/;
			break;
		case 67:
			uParam0->f_21 = 739722/*func_1935*/;
			break;
		case 68:
			*uParam0 = 739033/*func_1934*/;
			break;
		case 69:
			*uParam0 = 739024/*func_1933*/;
			break;
		case 70:
			uParam0->f_48 = 739012/*func_1932*/;
			break;
		case 71:
			uParam0->f_49 = 739003/*func_1931*/;
			break;
		case 107:
			uParam0->f_50 = 738991/*func_1930*/;
			break;
		case 80:
			uParam0->f_7 = 738982/*func_1929*/;
			break;
		case 84:
			uParam0->f_1 = 738973/*func_1928*/;
			break;
		case 85:
			uParam0->f_1 = 738964/*func_1927*/;
			break;
		case 87:
			uParam0->f_1 = 738955/*func_1926*/;
			break;
		case 88:
			uParam0->f_1 = 738946/*func_1925*/;
			break;
		case 89:
			uParam0->f_54 = 738938/*func_1924*/;
			break;
		case 96:
			uParam0->f_1 = 738929/*func_1923*/;
			break;
		case 97:
			uParam0->f_1 = 738920/*func_1922*/;
			break;
		case 98:
			uParam0->f_1 = 738911/*func_1921*/;
			break;
		case 100:
			uParam0->f_22 = 738903/*func_1920*/;
			break;
		case 101:
			uParam0->f_22 = 738895/*func_1919*/;
			break;
		case 112:
			uParam0->f_13 = 738883/*func_1918*/;
			break;
		case 113:
			uParam0->f_3 = 738874/*func_1917*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*func_845*/;
			break;
		case 115:
			uParam0->f_3 = 738865/*func_1916*/;
			break;
		case 116:
			*uParam0 = 738856/*func_1915*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*func_1050*/;
			break;
		case 78:
			uParam0->f_59 = 738848/*func_1914*/;
			break;
		case 124:
			uParam0->f_1 = 738839/*func_1913*/;
			break;
		case 125:
			uParam0->f_19 = 738831/*func_1912*/;
			break;
	}
}

void func_2004(var uParam0, int iParam1)//Position - 0xB60AB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 825102/*func_2261*/;
			break;
		case 111:
			uParam0->f_35 = 825088/*func_2260*/;
			break;
		case 1:
			uParam0->f_30 = 824932/*func_2258*/;
			break;
		case 2:
			uParam0->f_31 = 824456/*func_2254*/;
			break;
		case 3:
			uParam0->f_34 = 824257/*func_2253*/;
			break;
		case 4:
			uParam0->f_12 = 824135/*func_2252*/;
			break;
		case 5:
			uParam0->f_11 = 824125/*func_2251*/;
			break;
		case 37:
			uParam0->f_18 = 823988/*func_2250*/;
			break;
		case 38:
			uParam0->f_9 = 823944/*func_2249*/;
			break;
		case 42:
			uParam0->f_10 = 823860/*func_2247*/;
			break;
		case 6:
			uParam0->f_32 = 823766/*func_2246*/;
			break;
		case 11:
			uParam0->f_11 = 823757/*func_2245*/;
			break;
		case 12:
			uParam0->f_33 = 822579/*func_2241*/;
			break;
		case 14:
			uParam0->f_11 = 822570/*func_2240*/;
			break;
		case 109:
			uParam0->f_56 = 816105/*func_2238*/;
			break;
		case 8:
			uParam0->f_37 = 815805/*func_2237*/;
			break;
		case 7:
			uParam0->f_36 = 815748/*func_2236*/;
			break;
		case 79:
			*uParam0 = 815504/*func_2234*/;
			break;
		case 13:
			uParam0->f_2 = 815442/*func_2233*/;
			break;
		case 15:
			uParam0->f_2 = 815362/*func_2232*/;
			break;
		case 16:
			uParam0->f_5 = 814642/*func_2230*/;
			break;
		case 108:
			uParam0->f_55 = 811451/*func_2218*/;
			break;
		case 17:
			uParam0->f_17 = 809146/*func_2214*/;
			break;
		case 19:
			uParam0->f_17 = 809120/*func_2213*/;
			break;
		case 20:
			uParam0->f_3 = 808944/*func_2212*/;
			break;
		case 21:
			uParam0->f_3 = 808880/*func_2211*/;
			break;
		case 74:
			uParam0->f_53 = 808776/*func_2210*/;
			break;
		case 75:
			uParam0->f_4 = 808760/*func_2209*/;
			break;
		case 22:
			uParam0->f_24 = 808657/*func_2208*/;
			break;
		case 23:
			uParam0->f_26 = 808610/*func_2207*/;
			break;
		case 24:
			uParam0->f_26 = 808573/*func_2206*/;
			break;
		case 26:
			uParam0->f_38 = 806530/*func_2194*/;
			break;
		case 25:
			uParam0->f_23 = 806208/*func_2192*/;
			break;
		case 30:
			uParam0->f_8 = 805351/*func_2190*/;
			break;
		case 31:
			uParam0->f_39 = 805217/*func_2189*/;
			break;
		case 33:
			uParam0->f_40 = 804645/*func_2188*/;
			break;
		case 32:
			*uParam0 = 804360/*func_2183*/;
			break;
		case 34:
			uParam0->f_41 = 801873/*func_2181*/;
			break;
		case 36:
			uParam0->f_58 = 801816/*func_2180*/;
			break;
		case 35:
			uParam0->f_42 = 774634/*func_2177*/;
			break;
		case 45:
			uParam0->f_14 = 774625/*func_2176*/;
			break;
		case 46:
			uParam0->f_14 = 774616/*func_2175*/;
			break;
		case 110:
			uParam0->f_57 = 774608/*func_2174*/;
			break;
		case 77:
			uParam0->f_13 = 774585/*func_2173*/;
			break;
		case 47:
			uParam0->f_43 = 774513/*func_2171*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 774385/*func_2170*/;
			break;
		case 49:
			uParam0->f_8 = 774359/*func_2169*/;
			break;
		case 50:
			*uParam0 = 773672/*func_2165*/;
			break;
		case 51:
			*uParam0 = 773402/*func_2162*/;
			break;
		case 52:
			uParam0->f_15 = 773391/*func_2161*/;
			break;
		case 53:
			uParam0->f_13 = 773229/*func_2160*/;
			break;
		case 54:
			uParam0->f_45 = 772705/*func_2153*/;
			break;
		case 56:
			uParam0->f_46 = 772687/*func_2152*/;
			break;
		case 57:
			uParam0->f_11 = 772435/*func_2151*/;
			break;
		case 58:
			uParam0->f_13 = 772273/*func_2150*/;
			break;
		case 59:
			*uParam0 = 771777/*func_2143*/;
			break;
		case 60:
			*uParam0 = 771762/*func_2142*/;
			break;
		case 61:
			uParam0->f_15 = 771751/*func_2141*/;
			break;
		case 62:
			uParam0->f_13 = 771589/*func_2140*/;
			break;
		case 55:
			uParam0->f_45 = 771410/*func_2139*/;
			break;
		case 63:
			uParam0->f_11 = 771383/*func_2138*/;
			break;
		case 64:
			uParam0->f_47 = 769708/*func_2130*/;
			break;
		case 65:
			uParam0->f_21 = 768321/*func_2127*/;
			break;
		case 66:
			uParam0->f_21 = 767962/*func_2126*/;
			break;
		case 67:
			uParam0->f_21 = 767848/*func_2125*/;
			break;
		case 68:
			*uParam0 = 766888/*func_2122*/;
			break;
		case 69:
			*uParam0 = 766879/*func_2121*/;
			break;
		case 70:
			uParam0->f_48 = 766867/*func_2120*/;
			break;
		case 71:
			uParam0->f_49 = 766323/*func_2119*/;
			break;
		case 107:
			uParam0->f_50 = 766311/*func_2118*/;
			break;
		case 80:
			uParam0->f_7 = 766123/*func_2117*/;
			break;
		case 84:
			uParam0->f_1 = 766114/*func_2116*/;
			break;
		case 85:
			uParam0->f_1 = 764528/*func_2113*/;
			break;
		case 87:
			uParam0->f_1 = 763012/*func_2106*/;
			break;
		case 88:
			uParam0->f_1 = 763003/*func_2105*/;
			break;
		case 89:
			uParam0->f_54 = 762995/*func_2104*/;
			break;
		case 96:
			uParam0->f_1 = 762965/*func_2103*/;
			break;
		case 97:
			uParam0->f_1 = 762520/*func_2102*/;
			break;
		case 98:
			uParam0->f_1 = 756715/*func_2043*/;
			break;
		case 100:
			uParam0->f_22 = 748288/*func_2018*/;
			break;
		case 101:
			uParam0->f_22 = 747366/*func_2012*/;
			break;
		case 112:
			uParam0->f_13 = 747355/*func_2011*/;
			break;
		case 113:
			uParam0->f_3 = 747346/*func_2010*/;
			break;
		case 114:
			uParam0->f_16 = 747337/*func_2009*/;
			break;
		case 117:
			uParam0->f_16 = 747328/*func_2008*/;
			break;
		case 78:
			uParam0->f_59 = 747156/*func_2006*/;
			break;
		case 76:
			uParam0->f_13 = 747133/*func_2005*/;
			break;
	}
}

int func_2113(int iParam0, var uParam1)//Position - 0xBAA70
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
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
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
			func_330(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_241(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_842(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_842(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_841(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_841(iParam0, &Var6, &Var8, &uVar12, 0);
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
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2153(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xBCA61
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_2__::func_851(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)) && !__LIB_2__::func_851(__LIB_0__::func_582(), __LIB_2__::func_852(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__::func_851(iVar1, __LIB_2__::func_852(iParam0)) && __LIB_9__::func_217(iVar1))
				{
					Var3 = { __LIB_1__::func_267(iVar1) };
					if (__LIB_0__::func_585(Var3))
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
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_18__::func_676(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_2__::func_856(iParam0) };
								iVar6 = __LIB_2__::func_855(iParam0);
								*iParam2 = __LIB_0__::func_392(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								func_2154(iParam2, 18);
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
void func_2154(var uParam0, int iParam1)//Position - 0xBCBDA
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_48(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2192(int iParam0, int iParam1)//Position - 0xC4D40
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_848(iParam0, 0) };
	if (__LIB_7__::func_461(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_939(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_939(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_914(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_914(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2194(var uParam0, var uParam1)//Position - 0xC4E82
{
	if (__LIB_2__::func_399() == 3)
	{
		func_2198(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_851(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_852(*uParam0)))
	{
		__LIB_3__::func_862(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 2)
	{
		func_2196(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_868(uParam1);
	}
}

void func_2196(var uParam0, var uParam1)//Position - 0xC4F0B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_7__::func_396();
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
			__LIB_7__::func_939(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_2198(var uParam0, var uParam1)//Position - 0xC5029
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_37__::func_974(uParam0, uParam1);
			break;
		case 1:
			func_2203(uParam0, uParam1);
			break;
		case 2:
			__LIB_37__::func_973(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2203(var uParam0, var uParam1)//Position - 0xC53AA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_35__::func_796(*uParam0))
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
			if (__LIB_2__::func_399() == 3)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_939(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_2262(var uParam0, int iParam1)//Position - 0xC9717
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 841309/*func_2371*/;
			break;
		case 111:
			uParam0->f_35 = 841300/*func_2370*/;
			break;
		case 1:
			uParam0->f_30 = 841232/*func_2368*/;
			break;
		case 2:
			uParam0->f_31 = 840786/*func_2365*/;
			break;
		case 3:
			uParam0->f_34 = 840681/*func_2364*/;
			break;
		case 4:
			uParam0->f_12 = 840668/*func_2363*/;
			break;
		case 6:
			uParam0->f_32 = 840604/*func_2362*/;
			break;
		case 11:
			uParam0->f_11 = 840595/*func_2361*/;
			break;
		case 12:
			uParam0->f_33 = 840134/*func_2356*/;
			break;
		case 14:
			uParam0->f_11 = 840125/*func_2355*/;
			break;
		case 109:
			uParam0->f_56 = 839738/*func_2353*/;
			break;
		case 8:
			uParam0->f_37 = 839730/*func_2352*/;
			break;
		case 7:
			uParam0->f_36 = 839721/*func_2351*/;
			break;
		case 79:
			*uParam0 = 839697/*func_2350*/;
			break;
		case 13:
			uParam0->f_2 = 839635/*func_2349*/;
			break;
		case 15:
			uParam0->f_2 = 839556/*func_2348*/;
			break;
		case 16:
			uParam0->f_5 = 839259/*func_2347*/;
			break;
		case 108:
			uParam0->f_55 = 839250/*func_2346*/;
			break;
		case 17:
			uParam0->f_17 = 839239/*func_2345*/;
			break;
		case 19:
			uParam0->f_17 = 839213/*func_2344*/;
			break;
		case 20:
			uParam0->f_3 = 839204/*func_2343*/;
			break;
		case 21:
			uParam0->f_3 = 839195/*func_2342*/;
			break;
		case 74:
			uParam0->f_53 = 839173/*func_2341*/;
			break;
		case 75:
			uParam0->f_4 = 839164/*func_2340*/;
			break;
		case 22:
			uParam0->f_24 = 839156/*func_2339*/;
			break;
		case 23:
			uParam0->f_26 = 839148/*func_2338*/;
			break;
		case 26:
			uParam0->f_38 = 839140/*func_2337*/;
			break;
		case 25:
			uParam0->f_23 = 838808/*func_2334*/;
			break;
		case 27:
			uParam0->f_25 = 838800/*func_2333*/;
			break;
		case 28:
			uParam0->f_24 = 838792/*func_2332*/;
			break;
		case 30:
			uParam0->f_8 = 838471/*func_2329*/;
			break;
		case 31:
			uParam0->f_39 = 838443/*func_2328*/;
			break;
		case 33:
			uParam0->f_40 = 838374/*func_2327*/;
			break;
		case 34:
			uParam0->f_41 = 834640/*func_2326*/;
			break;
		case 36:
			uParam0->f_58 = 834595/*func_2325*/;
			break;
		case 35:
			uParam0->f_42 = 831428/*func_2322*/;
			break;
		case 45:
			uParam0->f_14 = 831419/*func_2321*/;
			break;
		case 46:
			uParam0->f_14 = 831410/*func_2320*/;
			break;
		case 110:
			uParam0->f_57 = 831402/*func_2319*/;
			break;
		case 77:
			uParam0->f_13 = 831391/*func_2318*/;
			break;
		case 47:
			uParam0->f_43 = 831283/*func_2317*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 830168/*func_2314*/;
			break;
		case 49:
			uParam0->f_8 = 830159/*func_2313*/;
			break;
		case 50:
			*uParam0 = 830150/*func_2312*/;
			break;
		case 51:
			*uParam0 = 830141/*func_2311*/;
			break;
		case 52:
			uParam0->f_15 = 830130/*func_2310*/;
			break;
		case 53:
			uParam0->f_13 = 830119/*func_2309*/;
			break;
		case 54:
			uParam0->f_45 = 830111/*func_2308*/;
			break;
		case 56:
			uParam0->f_46 = 830102/*func_2307*/;
			break;
		case 57:
			uParam0->f_11 = 830093/*func_2306*/;
			break;
		case 58:
			uParam0->f_13 = 830051/*func_2305*/;
			break;
		case 59:
			*uParam0 = 830042/*func_2304*/;
			break;
		case 60:
			*uParam0 = 830033/*func_2303*/;
			break;
		case 61:
			uParam0->f_15 = 830022/*func_2302*/;
			break;
		case 62:
			uParam0->f_13 = 830011/*func_2301*/;
			break;
		case 63:
			uParam0->f_11 = 830002/*func_2300*/;
			break;
		case 64:
			uParam0->f_47 = 829994/*func_2299*/;
			break;
		case 65:
			uParam0->f_21 = 829986/*func_2298*/;
			break;
		case 66:
			uParam0->f_21 = 829683/*func_2297*/;
			break;
		case 67:
			uParam0->f_21 = 829613/*func_2296*/;
			break;
		case 68:
			*uParam0 = 828964/*func_2295*/;
			break;
		case 69:
			*uParam0 = 828955/*func_2294*/;
			break;
		case 70:
			uParam0->f_48 = 828947/*func_2293*/;
			break;
		case 71:
			uParam0->f_49 = 828938/*func_2292*/;
			break;
		case 107:
			uParam0->f_50 = 828926/*func_2291*/;
			break;
		case 80:
			uParam0->f_7 = 828492/*func_2290*/;
			break;
		case 18:
			uParam0->f_8 = 828467/*func_2289*/;
			break;
		case 84:
			uParam0->f_1 = 828450/*func_2288*/;
			break;
		case 85:
			uParam0->f_1 = 827908/*func_2284*/;
			break;
		case 87:
			uParam0->f_1 = 826867/*func_2275*/;
			break;
		case 88:
			uParam0->f_1 = 826858/*func_2274*/;
			break;
		case 89:
			uParam0->f_54 = 826850/*func_2273*/;
			break;
		case 96:
			uParam0->f_1 = 826841/*func_2272*/;
			break;
		case 97:
			uParam0->f_1 = 826832/*func_2271*/;
			break;
		case 98:
			uParam0->f_1 = 826823/*func_2270*/;
			break;
		case 100:
			uParam0->f_22 = 826815/*func_2269*/;
			break;
		case 101:
			uParam0->f_22 = 826807/*func_2268*/;
			break;
		case 112:
			uParam0->f_13 = 826795/*func_2267*/;
			break;
		case 113:
			uParam0->f_3 = 826786/*func_2266*/;
			break;
		case 78:
			uParam0->f_59 = 826483/*func_2263*/;
			break;
	}
}

int func_2284(var uParam0, var uParam1)//Position - 0xCA204
{
	return func_2285(uParam1);
}

int func_2285(var uParam0)//Position - 0xCA212
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
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
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
			func_330(&iVar0, &(uParam0->f_109), 60);
			__LIB_2__::func_416(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_241(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_2__::func_890(&Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_890(&Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_889(&Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_889(&Var6, &Var8, &uVar12, 0);
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
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2334(int iParam0, int iParam1)//Position - 0xCCC98
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_364(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_937(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_937(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_917(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_917(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2372(var uParam0, int iParam1)//Position - 0xCD666
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 876407/*func_2550*/;
			break;
		case 111:
			uParam0->f_35 = 876384/*func_2549*/;
			break;
		case 1:
			uParam0->f_30 = 876254/*func_2547*/;
			break;
		case 2:
			uParam0->f_31 = 875589/*func_2543*/;
			break;
		case 3:
			uParam0->f_34 = 875326/*func_2542*/;
			break;
		case 4:
			uParam0->f_12 = 875313/*func_2541*/;
			break;
		case 5:
			uParam0->f_11 = 875303/*func_2540*/;
			break;
		case 37:
			uParam0->f_18 = 875105/*func_2539*/;
			break;
		case 38:
			uParam0->f_9 = 875057/*func_2538*/;
			break;
		case 42:
			uParam0->f_10 = 875021/*func_2537*/;
			break;
		case 6:
			uParam0->f_32 = 874906/*func_2536*/;
			break;
		case 11:
			uParam0->f_11 = 874897/*func_2535*/;
			break;
		case 12:
			uParam0->f_33 = 873967/*func_2529*/;
			break;
		case 14:
			uParam0->f_11 = 873958/*func_2528*/;
			break;
		case 109:
			uParam0->f_56 = 872815/*func_2526*/;
			break;
		case 8:
			uParam0->f_37 = 872771/*func_2525*/;
			break;
		case 7:
			uParam0->f_36 = 872748/*func_2524*/;
			break;
		case 79:
			*uParam0 = 872724/*func_2523*/;
			break;
		case 13:
			uParam0->f_2 = 872662/*func_2522*/;
			break;
		case 15:
			uParam0->f_2 = 872583/*func_2521*/;
			break;
		case 16:
			uParam0->f_5 = 871909/*func_2516*/;
			break;
		case 108:
			uParam0->f_55 = 868627/*func_2503*/;
			break;
		case 17:
			uParam0->f_17 = 867708/*func_2502*/;
			break;
		case 19:
			uParam0->f_17 = 867663/*func_2501*/;
			break;
		case 20:
			uParam0->f_3 = 867490/*func_2500*/;
			break;
		case 21:
			uParam0->f_3 = 867405/*func_2499*/;
			break;
		case 74:
			uParam0->f_53 = 867265/*func_2498*/;
			break;
		case 75:
			uParam0->f_4 = 867249/*func_2497*/;
			break;
		case 22:
			uParam0->f_24 = 867146/*func_2496*/;
			break;
		case 23:
			uParam0->f_26 = 867099/*func_2495*/;
			break;
		case 24:
			uParam0->f_26 = 867062/*func_2494*/;
			break;
		case 26:
			uParam0->f_38 = 865657/*func_2481*/;
			break;
		case 25:
			uParam0->f_23 = 865291/*func_2478*/;
			break;
		case 27:
			uParam0->f_25 = 864478/*func_2474*/;
			break;
		case 28:
			uParam0->f_24 = 864439/*func_2473*/;
			break;
		case 29:
			uParam0->f_28 = 864204/*func_2469*/;
			break;
		case 30:
			uParam0->f_8 = 863879/*func_2465*/;
			break;
		case 31:
			uParam0->f_39 = 863682/*func_2464*/;
			break;
		case 43:
			uParam0->f_8 = 863576/*func_2463*/;
			break;
		case 33:
			uParam0->f_40 = 863260/*func_2462*/;
			break;
		case 34:
			uParam0->f_41 = 858268/*func_2459*/;
			break;
		case 36:
			uParam0->f_58 = 858211/*func_2458*/;
			break;
		case 35:
			uParam0->f_42 = 852007/*func_2454*/;
			break;
		case 45:
			uParam0->f_14 = 851998/*func_2453*/;
			break;
		case 46:
			uParam0->f_14 = 851989/*func_2452*/;
			break;
		case 110:
			uParam0->f_57 = 851981/*func_2451*/;
			break;
		case 77:
			uParam0->f_13 = 851953/*func_2450*/;
			break;
		case 82:
			uParam0->f_19 = 851940/*func_2449*/;
			break;
		case 47:
			uParam0->f_43 = 851648/*func_2446*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 849425/*func_2440*/;
			break;
		case 49:
			uParam0->f_8 = 849377/*func_2439*/;
			break;
		case 50:
			*uParam0 = 849185/*func_2437*/;
			break;
		case 51:
			*uParam0 = 849176/*func_2436*/;
			break;
		case 52:
			uParam0->f_15 = 849165/*func_2435*/;
			break;
		case 53:
			uParam0->f_13 = 849123/*func_2434*/;
			break;
		case 54:
			uParam0->f_45 = 849115/*func_2433*/;
			break;
		case 56:
			uParam0->f_46 = 849106/*func_2432*/;
			break;
		case 57:
			uParam0->f_11 = 849097/*func_2431*/;
			break;
		case 58:
			uParam0->f_13 = 849055/*func_2430*/;
			break;
		case 59:
			*uParam0 = 849046/*func_2429*/;
			break;
		case 60:
			*uParam0 = 849037/*func_2428*/;
			break;
		case 61:
			uParam0->f_15 = 849026/*func_2427*/;
			break;
		case 62:
			uParam0->f_13 = 848996/*func_2426*/;
			break;
		case 63:
			uParam0->f_11 = 848987/*func_2425*/;
			break;
		case 64:
			uParam0->f_47 = 848979/*func_2424*/;
			break;
		case 65:
			uParam0->f_21 = 847893/*func_2421*/;
			break;
		case 66:
			uParam0->f_21 = 847552/*func_2420*/;
			break;
		case 67:
			uParam0->f_21 = 847438/*func_2419*/;
			break;
		case 68:
			*uParam0 = 846610/*func_2418*/;
			break;
		case 69:
			*uParam0 = 846601/*func_2417*/;
			break;
		case 70:
			uParam0->f_48 = 846589/*func_2416*/;
			break;
		case 71:
			uParam0->f_49 = 846497/*func_2415*/;
			break;
		case 107:
			uParam0->f_50 = 846485/*func_2414*/;
			break;
		case 80:
			uParam0->f_7 = 846297/*func_2413*/;
			break;
		case 84:
			uParam0->f_1 = 846288/*func_2412*/;
			break;
		case 85:
			uParam0->f_1 = 846274/*func_2411*/;
			break;
		case 87:
			uParam0->f_1 = 846258/*func_2410*/;
			break;
		case 88:
			uParam0->f_1 = 846249/*func_2409*/;
			break;
		case 89:
			uParam0->f_54 = 846241/*func_2408*/;
			break;
		case 96:
			uParam0->f_1 = 846232/*func_2407*/;
			break;
		case 97:
			uParam0->f_1 = 845789/*func_2403*/;
			break;
		case 98:
			uParam0->f_1 = 844327/*func_2393*/;
			break;
		case 100:
			uParam0->f_22 = 843448/*func_2388*/;
			break;
		case 101:
			uParam0->f_22 = 843271/*func_2385*/;
			break;
		case 112:
			uParam0->f_13 = 843259/*func_2384*/;
			break;
		case 113:
			uParam0->f_3 = 843245/*func_2383*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*func_845*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*func_1050*/;
			break;
		case 118:
			uParam0->f_11 = 843236/*func_2382*/;
			break;
		case 119:
			uParam0->f_27 = 843135/*func_2378*/;
			break;
		case 120:
			uParam0->f_19 = 843110/*func_2376*/;
			break;
		case 78:
			uParam0->f_59 = 842938/*func_2374*/;
			break;
		case 125:
			uParam0->f_19 = 842911/*func_2373*/;
			break;
	}
}

int func_2393(int iParam0, var uParam1)//Position - 0xCE227
{
	if (__LIB_2__::func_909(iParam0))
	{
		return func_2394(iParam0, uParam1);
	}
	return 1;
}

int func_2394(int iParam0, var uParam1)//Position - 0xCE244
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
		if (func_242(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
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
		if (!__LIB_7__::func_476(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_2__::func_914(-395939522);
		iVar3 = __LIB_2__::func_914(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-395939522), iVar2);
			__LIB_2__::func_912(__LIB_2__::func_913(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(uParam1->f_50), __LIB_2__::func_913(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_2__::func_911(&(uParam1->f_58), __LIB_2__::func_913(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_3__::func_869(uParam1, 6);
		iVar7 = 3500;
		__LIB_2__::func_681(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2411(var uParam0, var uParam1)//Position - 0xCE9C2
{
	return func_2285(uParam1);
}

void func_2478(int iParam0, int iParam1)//Position - 0xD340B
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_935(iParam0) };
	if (__LIB_7__::func_480(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_943(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_943(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_919(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_919(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2481(var uParam0, var uParam1)//Position - 0xD3579
{
	if (__LIB_0__::func_834(PLAYER::PLAYER_ID()) || __LIB_2__::func_934(PLAYER::PLAYER_ID()))
	{
		func_2482(uParam0, uParam1);
	}
}

void func_2482(var uParam0, var uParam1)//Position - 0xD35A5
{
	int iVar0;
	if (__LIB_2__::func_399() == 2 && __LIB_2__::func_566() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2493(*uParam0, 0, 0))
		{
			__LIB_2__::func_447(0);
			__LIB_2__::func_565(1);
		}
		else
		{
			__LIB_7__::func_648(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			func_2488(uParam0, uParam1);
			break;
		case 1:
			func_2484(uParam0, uParam1);
			break;
		case 2:
			__LIB_7__::func_647(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2484(var uParam0, var uParam1)//Position - 0xD3664
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
	sVar3 = __LIB_2__::func_936();
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_4__::func_724(iVar5);
		if (__LIB_2__::func_563(iVar5, bVar6, bVar7))
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
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar3, sVar3);
		__LIB_3__::func_874();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_25__::func_557(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_394(5);
		__LIB_7__::func_396();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_25__::func_301(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
		if (__LIB_2__::func_399() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2488(var uParam0, var uParam1)//Position - 0xD3863
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_2__::func_936();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_2__::func_939(iVar6);
		uVar1[iVar6] = __LIB_2__::func_938(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_0__::func_834(PLAYER::PLAYER_ID()) && __LIB_2__::func_934(PLAYER::PLAYER_ID()))
	{
		__LIB_7__::func_647(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_342(__LIB_2__::func_937(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_2__::func_565(2);
			}
			else if (func_2493(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_2__::func_447(1);
				__LIB_2__::func_565(1);
			}
			else
			{
				__LIB_7__::func_648(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_2493(int iParam0, bool bParam1, bool bParam2)//Position - 0xD3AC4
{
	int iVar0;
	int iVar1;
	func_554(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_2551(var uParam0, int iParam1)//Position - 0xD5F80
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 906957/*func_2725*/;
			break;
		case 111:
			uParam0->f_35 = 906948/*func_2724*/;
			break;
		case 1:
			uParam0->f_30 = 906880/*func_2722*/;
			break;
		case 2:
			uParam0->f_31 = 906529/*func_2719*/;
			break;
		case 3:
			uParam0->f_34 = 906296/*func_2718*/;
			break;
		case 4:
			uParam0->f_12 = 906283/*func_2717*/;
			break;
		case 6:
			uParam0->f_32 = 906219/*func_2716*/;
			break;
		case 11:
			uParam0->f_11 = 906210/*func_2715*/;
			break;
		case 12:
			uParam0->f_33 = 905485/*func_2711*/;
			break;
		case 14:
			uParam0->f_11 = 905476/*func_2710*/;
			break;
		case 109:
			uParam0->f_56 = 904354/*func_2709*/;
			break;
		case 8:
			uParam0->f_37 = 904346/*func_2708*/;
			break;
		case 7:
			uParam0->f_36 = 904337/*func_2707*/;
			break;
		case 79:
			*uParam0 = 904313/*func_2706*/;
			break;
		case 13:
			uParam0->f_2 = 904241/*func_2705*/;
			break;
		case 15:
			uParam0->f_2 = 904152/*func_2704*/;
			break;
		case 16:
			uParam0->f_5 = 903792/*func_2703*/;
			break;
		case 108:
			uParam0->f_55 = 903653/*func_2701*/;
			break;
		case 17:
			uParam0->f_17 = 902997/*func_2700*/;
			break;
		case 19:
			uParam0->f_17 = 902971/*func_2699*/;
			break;
		case 20:
			uParam0->f_3 = 902962/*func_2698*/;
			break;
		case 21:
			uParam0->f_3 = 902914/*func_2697*/;
			break;
		case 74:
			uParam0->f_53 = 902859/*func_2696*/;
			break;
		case 75:
			uParam0->f_4 = 902746/*func_2695*/;
			break;
		case 22:
			uParam0->f_24 = 902738/*func_2694*/;
			break;
		case 23:
			uParam0->f_26 = 902730/*func_2693*/;
			break;
		case 26:
			uParam0->f_38 = 900187/*func_2677*/;
			break;
		case 25:
			uParam0->f_23 = 900179/*func_2676*/;
			break;
		case 27:
			uParam0->f_25 = 900171/*func_2675*/;
			break;
		case 28:
			uParam0->f_24 = 900163/*func_2674*/;
			break;
		case 30:
			uParam0->f_8 = 899882/*func_2673*/;
			break;
		case 31:
			uParam0->f_39 = 899854/*func_2672*/;
			break;
		case 33:
			uParam0->f_40 = 899785/*func_2671*/;
			break;
		case 76:
			uParam0->f_13 = 899762/*func_2670*/;
			break;
		case 34:
			uParam0->f_41 = 897208/*func_2667*/;
			break;
		case 36:
			uParam0->f_58 = 897163/*func_2666*/;
			break;
		case 35:
			uParam0->f_42 = 897067/*func_2665*/;
			break;
		case 45:
			uParam0->f_14 = 897058/*func_2664*/;
			break;
		case 46:
			uParam0->f_14 = 897049/*func_2663*/;
			break;
		case 110:
			uParam0->f_57 = 897041/*func_2662*/;
			break;
		case 77:
			uParam0->f_13 = 897030/*func_2661*/;
			break;
		case 47:
			uParam0->f_43 = 896923/*func_2660*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 896085/*func_2659*/;
			break;
		case 49:
			uParam0->f_8 = 896076/*func_2658*/;
			break;
		case 50:
			*uParam0 = 895863/*func_2657*/;
			break;
		case 51:
			*uParam0 = 895854/*func_2656*/;
			break;
		case 52:
			uParam0->f_15 = 895843/*func_2655*/;
			break;
		case 53:
			uParam0->f_13 = 895801/*func_2654*/;
			break;
		case 54:
			uParam0->f_45 = 895762/*func_2653*/;
			break;
		case 56:
			uParam0->f_46 = 895753/*func_2652*/;
			break;
		case 57:
			uParam0->f_11 = 895711/*func_2650*/;
			break;
		case 58:
			uParam0->f_13 = 895669/*func_2649*/;
			break;
		case 59:
			*uParam0 = 895660/*func_2648*/;
			break;
		case 60:
			*uParam0 = 895651/*func_2647*/;
			break;
		case 61:
			uParam0->f_15 = 895640/*func_2646*/;
			break;
		case 62:
			uParam0->f_13 = 895629/*func_2645*/;
			break;
		case 63:
			uParam0->f_11 = 895620/*func_2644*/;
			break;
		case 64:
			uParam0->f_47 = 895534/*func_2642*/;
			break;
		case 65:
			uParam0->f_21 = 895526/*func_2641*/;
			break;
		case 66:
			uParam0->f_21 = 895185/*func_2640*/;
			break;
		case 67:
			uParam0->f_21 = 895115/*func_2639*/;
			break;
		case 68:
			*uParam0 = 894418/*func_2638*/;
			break;
		case 69:
			*uParam0 = 894409/*func_2637*/;
			break;
		case 70:
			uParam0->f_48 = 894336/*func_2636*/;
			break;
		case 71:
			uParam0->f_49 = 894327/*func_2635*/;
			break;
		case 107:
			uParam0->f_50 = 894315/*func_2634*/;
			break;
		case 80:
			uParam0->f_7 = 894306/*func_2633*/;
			break;
		case 84:
			uParam0->f_1 = 893781/*func_2630*/;
			break;
		case 85:
			uParam0->f_1 = 892225/*func_2627*/;
			break;
		case 87:
			uParam0->f_1 = 888998/*func_2614*/;
			break;
		case 88:
			uParam0->f_1 = 888983/*func_2613*/;
			break;
		case 89:
			uParam0->f_54 = 888622/*func_2611*/;
			break;
		case 96:
			uParam0->f_1 = 888260/*func_2607*/;
			break;
		case 97:
			uParam0->f_1 = 887754/*func_2605*/;
			break;
		case 98:
			uParam0->f_1 = 886125/*func_2603*/;
			break;
		case 100:
			uParam0->f_22 = 885848/*func_2602*/;
			break;
		case 101:
			uParam0->f_22 = 885299/*func_2598*/;
			break;
		case 112:
			uParam0->f_13 = 885287/*func_2597*/;
			break;
		case 113:
			uParam0->f_3 = 885278/*func_2596*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*func_845*/;
			break;
		case 115:
			uParam0->f_3 = 885141/*func_2593*/;
			break;
		case 116:
			*uParam0 = 885093/*func_2592*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*func_1050*/;
			break;
		case 118:
			uParam0->f_11 = 843236/*func_2382*/;
			break;
		case 119:
			uParam0->f_27 = 843135/*func_2378*/;
			break;
		case 120:
			uParam0->f_19 = 843110/*func_2376*/;
			break;
		case 78:
			uParam0->f_59 = 885085/*func_2591*/;
			break;
		case 124:
			uParam0->f_1 = 877996/*func_2553*/;
			break;
		case 125:
			uParam0->f_19 = 877940/*func_2552*/;
			break;
	}
}

int func_2553(int iParam0, int* iParam1)//Position - 0xD65AC
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
			__LIB_35__::func_659(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_7__::func_394(0);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(3);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(4);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(1);
					__LIB_2__::func_962(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_399() == 0)
			{
				if (__LIB_18__::func_751(iParam0, iParam1))
				{
					__LIB_2__::func_961();
					__LIB_2__::func_962(iParam1, 2);
				}
			}
			else
			{
				__LIB_7__::func_484(iParam0, iParam1, __LIB_2__::func_399());
				__LIB_2__::func_962(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_399() == 0)
			{
				if (func_2627(iParam0, iParam1))
				{
					__LIB_2__::func_959(&(Global_1946250.f_3638), 60);
					__LIB_2__::func_962(iParam1, 3);
				}
			}
			else if (func_2579(iParam1))
			{
				__LIB_2__::func_962(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_399() == 0)
			{
				__LIB_35__::func_658(&(Global_1946250.f_3638), 0, 1);
				__LIB_25__::func_302(iParam0, iParam1);
				if (__LIB_2__::func_413(&(Global_1946250.f_3638), 0))
				{
					__LIB_35__::func_602(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_2__::func_962(iParam1, 4);
				}
			}
			else
			{
				__LIB_18__::func_749(iParam1);
				__LIB_35__::func_602(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_2__::func_962(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_399() == 0)
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
				__LIB_35__::func_658(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_25__::func_302(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_35__::func_659(iParam1);
				}
			}
			else if (__LIB_18__::func_749(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_35__::func_659(iParam1);
			}
			break;
	}
	return 1;
}

int func_2579(int* iParam0)//Position - 0xD7804
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
		func_1412(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

int func_2603(int iParam0, var uParam1)//Position - 0xD856D
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_2__::func_909(iParam0))
	{
		return func_2394(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_160())
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
		__LIB_8__::func_454(1, 1, 1, 0, 0, 0, 0);
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
			__LIB_2__::func_966(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_1412(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
		__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

int func_2605(int iParam0, var uParam1)//Position - 0xD8BCA
{
	char* sVar0;
	bool bVar1;
	if (__LIB_2__::func_909(iParam0))
	{
		return __LIB_18__::func_572(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 21);
		STREAMING::REQUEST_IPL("ch_cutscene_casino");
		if (Global_1946250.f_4539 != __LIB_0__::func_160())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_2606(&(uParam1->f_2), Global_1946250.f_4539))
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

int func_2606(var uParam0, int iParam1)//Position - 0xD8CD8
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
				if (__LIB_0__::func_308(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_259(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_0__::func_812(*uParam0, 7))
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

int func_2627(int iParam0, int* iParam1)//Position - 0xD9D41
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
		if (!func_242(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-1805228339), __LIB_2__::func_914(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(iParam1->f_50), __LIB_2__::func_913(-1805228339), __LIB_2__::func_974(-1805228339), __LIB_2__::func_914(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_2__::func_917())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
		Var3 = { __LIB_2__::func_913(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_2__::func_972(6);
		__LIB_2__::func_681(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_657(iVar6, 0)) && __LIB_6__::func_407(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
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
			func_330(&iVar7, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_242(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
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
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
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
		sVar11 = __LIB_7__::func_487(iParam1, 6);
		iVar12 = __LIB_2__::func_973(__LIB_2__::func_970(iParam1));
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_1412(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_2__::func_913(-1805228339), 0.1f, __LIB_2__::func_914(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_2__::func_914(-1805228339), __LIB_2__::func_913(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_2__::func_913(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
			__LIB_25__::func_103(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_2677(var uParam0, var uParam1)//Position - 0xDBC5B
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (__LIB_2__::func_399() == 0 || __LIB_2__::func_399() == 2)
	{
		if (!__LIB_2__::func_779(PLAYER::PLAYER_ID()) || __LIB_2__::func_380())
		{
			if (!__LIB_2__::func_380())
			{
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					__LIB_25__::func_303(1, *uParam0);
				}
			}
			if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_303(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			if (__LIB_2__::func_380())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_2__::func_380())
	{
		if ((__LIB_2__::func_399() == 3 || __LIB_2__::func_399() == 4) || __LIB_2__::func_399() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_2681(uParam0, uParam1);
			break;
		case 4:
			__LIB_7__::func_652(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2678(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2678(var uParam0, var uParam1)//Position - 0xDBD99
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
	iVar1 = __LIB_2__::func_566();
	bVar0 = iVar1 != 5;
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_2__::func_936();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_4__::func_724(iVar9);
		if (__LIB_2__::func_563(iVar9, bVar2, bVar3))
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
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar7, sVar7);
		__LIB_3__::func_874();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_25__::func_557(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			if ((__LIB_2__::func_399() == 1 || __LIB_2__::func_399() == 3) || __LIB_2__::func_399() == 4)
			{
				__LIB_2__::func_924();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_2__::func_566() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			if (__LIB_2__::func_566() == 3)
			{
				__LIB_2__::func_924();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
	}
}

void func_2681(var uParam0, var uParam1)//Position - 0xDC024
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_2__::func_936();
	if (__LIB_2__::func_399() == 0)
	{
		uVar0 = __LIB_7__::func_491(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_19__::func_101(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_2__::func_399() == 0)
		{
			__LIB_1__::func_342(__LIB_2__::func_986(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_342(__LIB_7__::func_653(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_2__::func_399() == 0)
			{
				func_2683(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2682(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2682(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDC141
{
	if (iParam1 == 0)
	{
		if (func_2493(iParam0, 0, 0))
		{
			__LIB_2__::func_565(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_2__::func_924();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_2__::func_447(0);
		if (func_2493(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_2493(iParam0, 1, 0))
		{
			__LIB_2__::func_565(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_2__::func_565(4);
		__LIB_2__::func_924();
	}
	else
	{
		__LIB_2__::func_447(1);
		if (func_2493(iParam0, 0, 0))
		{
			__LIB_2__::func_565(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			__LIB_2__::func_924();
		}
	}
	*uParam2 = 1;
}

void func_2683(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDC249
{
	if (iParam1 == 0)
	{
		if (func_2493(iParam0, 0, 0))
		{
			__LIB_2__::func_565(1);
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
		__LIB_2__::func_447(0);
		if (func_2493(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
}

void func_2726(var uParam0, int iParam1)//Position - 0xDD6D6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 942548/*func_2893*/;
			break;
		case 111:
			uParam0->f_35 = 942534/*func_2892*/;
			break;
		case 1:
			uParam0->f_30 = 942435/*func_2891*/;
			break;
		case 2:
			uParam0->f_31 = 941373/*func_2887*/;
			break;
		case 3:
			uParam0->f_34 = 941219/*func_2886*/;
			break;
		case 4:
			uParam0->f_12 = 941166/*func_2884*/;
			break;
		case 5:
			uParam0->f_11 = 941111/*func_2883*/;
			break;
		case 37:
			uParam0->f_18 = 940993/*func_2882*/;
			break;
		case 38:
			uParam0->f_9 = 940861/*func_2878*/;
			break;
		case 6:
			uParam0->f_32 = 940746/*func_2877*/;
			break;
		case 11:
			uParam0->f_11 = 940736/*func_2876*/;
			break;
		case 12:
			uParam0->f_33 = 939567/*func_2871*/;
			break;
		case 14:
			uParam0->f_11 = 939558/*func_2870*/;
			break;
		case 109:
			uParam0->f_56 = 938246/*func_2869*/;
			break;
		case 8:
			uParam0->f_37 = 938202/*func_2868*/;
			break;
		case 7:
			uParam0->f_36 = 938179/*func_2867*/;
			break;
		case 79:
			*uParam0 = 938155/*func_2866*/;
			break;
		case 13:
			uParam0->f_2 = 938092/*func_2865*/;
			break;
		case 15:
			uParam0->f_2 = 938012/*func_2864*/;
			break;
		case 16:
			uParam0->f_5 = 937369/*func_2860*/;
			break;
		case 108:
			uParam0->f_55 = 934229/*func_2847*/;
			break;
		case 17:
			uParam0->f_17 = 933528/*func_2846*/;
			break;
		case 19:
			uParam0->f_17 = 933502/*func_2845*/;
			break;
		case 20:
			uParam0->f_3 = 933323/*func_2844*/;
			break;
		case 21:
			uParam0->f_3 = 933259/*func_2843*/;
			break;
		case 74:
			uParam0->f_53 = 932985/*func_2841*/;
			break;
		case 75:
			uParam0->f_4 = 932969/*func_2840*/;
			break;
		case 22:
			uParam0->f_24 = 932866/*func_2839*/;
			break;
		case 23:
			uParam0->f_26 = 932819/*func_2838*/;
			break;
		case 24:
			uParam0->f_26 = 932782/*func_2837*/;
			break;
		case 26:
			uParam0->f_38 = 931955/*func_2830*/;
			break;
		case 25:
			uParam0->f_23 = 931589/*func_2827*/;
			break;
		case 27:
			uParam0->f_25 = 931207/*func_2825*/;
			break;
		case 28:
			uParam0->f_24 = 931156/*func_2824*/;
			break;
		case 29:
			uParam0->f_28 = 931148/*func_2823*/;
			break;
		case 30:
			uParam0->f_8 = 930911/*func_2819*/;
			break;
		case 31:
			uParam0->f_39 = 930790/*func_2818*/;
			break;
		case 33:
			uParam0->f_40 = 930370/*func_2817*/;
			break;
		case 34:
			uParam0->f_41 = 919077/*func_2803*/;
			break;
		case 36:
			uParam0->f_58 = 919032/*func_2802*/;
			break;
		case 35:
			uParam0->f_42 = 915944/*func_2799*/;
			break;
		case 45:
			uParam0->f_14 = 915935/*func_2798*/;
			break;
		case 46:
			uParam0->f_14 = 915926/*func_2797*/;
			break;
		case 110:
			uParam0->f_57 = 915918/*func_2796*/;
			break;
		case 77:
			uParam0->f_13 = 915869/*func_2795*/;
			break;
		case 47:
			uParam0->f_43 = 915787/*func_2794*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 915023/*func_2787*/;
			break;
		case 49:
			uParam0->f_8 = 914976/*func_2786*/;
			break;
		case 50:
			*uParam0 = 914917/*func_2785*/;
			break;
		case 51:
			*uParam0 = 914685/*func_2782*/;
			break;
		case 52:
			uParam0->f_15 = 914674/*func_2781*/;
			break;
		case 53:
			uParam0->f_13 = 914632/*func_2780*/;
			break;
		case 54:
			uParam0->f_45 = 914624/*func_2779*/;
			break;
		case 56:
			uParam0->f_46 = 914615/*func_2778*/;
			break;
		case 57:
			uParam0->f_11 = 914606/*func_2777*/;
			break;
		case 58:
			uParam0->f_13 = 914564/*func_2776*/;
			break;
		case 59:
			*uParam0 = 914555/*func_2775*/;
			break;
		case 60:
			*uParam0 = 914546/*func_2774*/;
			break;
		case 61:
			uParam0->f_15 = 914535/*func_2773*/;
			break;
		case 62:
			uParam0->f_13 = 914493/*func_2772*/;
			break;
		case 63:
			uParam0->f_11 = 914484/*func_2771*/;
			break;
		case 64:
			uParam0->f_47 = 914476/*func_2770*/;
			break;
		case 65:
			uParam0->f_21 = 913414/*func_2767*/;
			break;
		case 66:
			uParam0->f_21 = 913111/*func_2766*/;
			break;
		case 67:
			uParam0->f_21 = 912997/*func_2765*/;
			break;
		case 68:
			*uParam0 = 912154/*func_2764*/;
			break;
		case 69:
			*uParam0 = 912145/*func_2763*/;
			break;
		case 70:
			uParam0->f_48 = 912072/*func_2762*/;
			break;
		case 71:
			uParam0->f_49 = 912063/*func_2761*/;
			break;
		case 107:
			uParam0->f_50 = 912051/*func_2760*/;
			break;
		case 80:
			uParam0->f_7 = 911849/*func_2759*/;
			break;
		case 84:
			uParam0->f_1 = 911840/*func_2758*/;
			break;
		case 85:
			uParam0->f_1 = 910107/*func_2745*/;
			break;
		case 87:
			uParam0->f_1 = 908654/*func_2737*/;
			break;
		case 88:
			uParam0->f_1 = 908645/*func_2736*/;
			break;
		case 89:
			uParam0->f_54 = 908637/*func_2735*/;
			break;
		case 96:
			uParam0->f_1 = 908628/*func_2734*/;
			break;
		case 97:
			uParam0->f_1 = 908619/*func_2733*/;
			break;
		case 98:
			uParam0->f_1 = 908610/*func_2732*/;
			break;
		case 100:
			uParam0->f_22 = 908602/*func_2731*/;
			break;
		case 101:
			uParam0->f_22 = 908594/*func_2730*/;
			break;
		case 78:
			uParam0->f_59 = 908422/*func_2728*/;
			break;
		case 125:
			uParam0->f_19 = 908389/*func_2727*/;
			break;
	}
}

int func_2745(int iParam0, var uParam1)//Position - 0xDE31B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (__LIB_18__::func_483())
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
			func_330(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_241(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_3__::func_10(iParam0, __LIB_2__::func_399()) };
		Var2 = { __LIB_3__::func_9(iParam0, __LIB_2__::func_399()) };
		uVar3 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var4 = { __LIB_3__::func_8(iParam0, __LIB_2__::func_399()) };
		Var5 = { __LIB_3__::func_7(iParam0, __LIB_2__::func_399()) };
		uVar6 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var7 = { __LIB_3__::func_5(iParam0, __LIB_2__::func_399()) };
		Var8 = { __LIB_3__::func_4(iParam0, __LIB_2__::func_399()) };
		uVar9 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
		Var10 = { __LIB_3__::func_3(iParam0, __LIB_2__::func_399()) };
		Var11 = { __LIB_3__::func_2(iParam0, __LIB_2__::func_399()) };
		uVar12 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
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
		return __LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2827(int iParam0, int iParam1)//Position - 0xE3705
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_33(iParam0) };
	if (__LIB_7__::func_499(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_948(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_948(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_923(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_923(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2830(var uParam0, var uParam1)//Position - 0xE3873
{
	if (__LIB_2__::func_710(PLAYER::PLAYER_ID()))
	{
		func_2831(uParam0, uParam1);
	}
}

void func_2831(var uParam0, var uParam1)//Position - 0xE3891
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_572(uParam0, uParam1);
			break;
		case 1:
			func_2832(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2832(var uParam0, var uParam1)//Position - 0xE38CB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
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
			__LIB_1__::func_319("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

void func_2894(var uParam0, int iParam1)//Position - 0xE61DD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1034285/*func_3039*/;
			break;
		case 1:
			uParam0->f_30 = 1034229/*func_3038*/;
			break;
		case 2:
			uParam0->f_31 = 1033885/*func_3037*/;
			break;
		case 3:
			uParam0->f_34 = 1033846/*func_3036*/;
			break;
		case 4:
			uParam0->f_12 = 1033813/*func_3035*/;
			break;
		case 5:
			uParam0->f_11 = 1033802/*func_3034*/;
			break;
		case 6:
			uParam0->f_32 = 1033738/*func_3033*/;
			break;
		case 111:
			uParam0->f_35 = 1033715/*func_3032*/;
			break;
		case 79:
			*uParam0 = 1033691/*func_3031*/;
			break;
		case 37:
			uParam0->f_18 = 1033573/*func_3030*/;
			break;
		case 38:
			uParam0->f_9 = 1033494/*func_3029*/;
			break;
		case 11:
			uParam0->f_11 = 1033485/*func_3028*/;
			break;
		case 12:
			uParam0->f_33 = 1032889/*func_3025*/;
			break;
		case 109:
			uParam0->f_56 = 1032881/*func_3024*/;
			break;
		case 15:
			uParam0->f_2 = 1027684/*func_2999*/;
			break;
		case 13:
			uParam0->f_2 = 1027675/*func_2998*/;
			break;
		case 75:
			uParam0->f_4 = 1027660/*func_2997*/;
			break;
		case 16:
			uParam0->f_5 = 1027185/*func_2993*/;
			break;
		case 108:
			uParam0->f_55 = 1023215/*func_2977*/;
			break;
		case 17:
			uParam0->f_17 = 1022439/*func_2976*/;
			break;
		case 19:
			uParam0->f_17 = 1022413/*func_2975*/;
			break;
		case 20:
			uParam0->f_3 = 1022202/*func_2974*/;
			break;
		case 21:
			uParam0->f_3 = 1022039/*func_2973*/;
			break;
		case 74:
			uParam0->f_53 = 1021430/*func_2970*/;
			break;
		case 22:
			uParam0->f_24 = 1021348/*func_2969*/;
			break;
		case 25:
			uParam0->f_23 = 1020432/*func_2966*/;
			break;
		case 30:
			uParam0->f_8 = 1019181/*func_2957*/;
			break;
		case 31:
			uParam0->f_39 = 1018506/*func_2953*/;
			break;
		case 33:
			uParam0->f_40 = 1017603/*func_2950*/;
			break;
		case 14:
			uParam0->f_11 = 1017594/*func_2949*/;
			break;
		case 34:
			uParam0->f_41 = 1016819/*func_2946*/;
			break;
		case 36:
			uParam0->f_58 = 1016766/*func_2945*/;
			break;
		case 35:
			uParam0->f_42 = 948343/*func_2933*/;
			break;
		case 45:
			uParam0->f_14 = 948334/*func_2932*/;
			break;
		case 46:
			uParam0->f_14 = 948325/*func_2931*/;
			break;
		case 110:
			uParam0->f_57 = 948317/*func_2930*/;
			break;
		case 77:
			uParam0->f_13 = 948294/*func_2929*/;
			break;
		case 47:
			uParam0->f_43 = 948154/*func_2928*/;
			break;
		case 49:
			uParam0->f_8 = 948119/*func_2927*/;
			break;
		case 50:
			*uParam0 = 948081/*func_2926*/;
			break;
		case 51:
			*uParam0 = 948057/*func_2925*/;
			break;
		case 52:
			uParam0->f_15 = 948046/*func_2924*/;
			break;
		case 53:
			uParam0->f_13 = 947967/*func_2923*/;
			break;
		case 54:
			uParam0->f_45 = 947959/*func_2922*/;
			break;
		case 56:
			uParam0->f_46 = 947950/*func_2921*/;
			break;
		case 57:
			uParam0->f_11 = 947940/*func_2920*/;
			break;
		case 58:
			uParam0->f_13 = 947651/*func_2919*/;
			break;
		case 64:
			uParam0->f_47 = 946061/*func_2911*/;
			break;
		case 65:
			uParam0->f_21 = 945098/*func_2908*/;
			break;
		case 66:
			uParam0->f_21 = 944903/*func_2907*/;
			break;
		case 67:
			uParam0->f_21 = 944800/*func_2906*/;
			break;
		case 68:
			*uParam0 = 944111/*func_2905*/;
			break;
		case 69:
			*uParam0 = 944102/*func_2904*/;
			break;
		case 70:
			uParam0->f_48 = 944090/*func_2903*/;
			break;
		case 71:
			uParam0->f_49 = 944081/*func_2902*/;
			break;
		case 107:
			uParam0->f_50 = 944069/*func_2901*/;
			break;
		case 80:
			uParam0->f_7 = 943695/*func_2898*/;
			break;
		case 73:
			uParam0->f_51 = 943686/*func_2897*/;
			break;
		case 78:
			uParam0->f_59 = 943569/*func_2895*/;
			break;
	}
}

void func_2966(int iParam0, int iParam1)//Position - 0xF9210
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
	if (__LIB_25__::func_487(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_25__::func_305(PLAYER::PLAYER_ID())) && __LIB_2__::func_457(iVar7, PLAYER::PLAYER_ID()))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_506(iParam0, -1);
					}
					bVar9 = __LIB_1__::func_229(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_506(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_465(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
						{
							func_2967(iParam0);
						}
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_465(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
						{
							func_2967(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_2967(int iParam0)//Position - 0xF94C8
{
	__LIB_25__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3040(var uParam0, int iParam1)//Position - 0xFC836
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1097367/*func_3270*/;
			break;
		case 1:
			uParam0->f_30 = 1097127/*func_3268*/;
			break;
		case 2:
			uParam0->f_31 = 1094826/*func_3262*/;
			break;
		case 3:
			uParam0->f_34 = 1094617/*func_3261*/;
			break;
		case 4:
			uParam0->f_12 = 1094411/*func_3259*/;
			break;
		case 5:
			uParam0->f_11 = 1094333/*func_3258*/;
			break;
		case 37:
			uParam0->f_18 = 1094194/*func_3257*/;
			break;
		case 38:
			uParam0->f_9 = 1094138/*func_3256*/;
			break;
		case 42:
			uParam0->f_10 = 1093977/*func_3253*/;
			break;
		case 6:
			uParam0->f_32 = 1093741/*func_3252*/;
			break;
		case 111:
			uParam0->f_35 = 1093727/*func_3251*/;
			break;
		case 11:
			uParam0->f_11 = 1093718/*func_3250*/;
			break;
		case 12:
			uParam0->f_33 = 1090348/*func_3241*/;
			break;
		case 14:
			uParam0->f_11 = 1090339/*func_3240*/;
			break;
		case 109:
			uParam0->f_56 = 1076649/*func_3239*/;
			break;
		case 79:
			*uParam0 = 1076393/*func_3235*/;
			break;
		case 13:
			uParam0->f_2 = 1076344/*func_3234*/;
			break;
		case 15:
			uParam0->f_2 = 1076133/*func_3231*/;
			break;
		case 44:
			*uParam0 = 1076124/*func_3230*/;
			break;
		case 75:
			uParam0->f_4 = 1076095/*func_3229*/;
			break;
		case 16:
			uParam0->f_5 = 1075368/*func_3226*/;
			break;
		case 108:
			uParam0->f_55 = 1071514/*func_3213*/;
			break;
		case 17:
			uParam0->f_17 = 1070201/*func_3209*/;
			break;
		case 19:
			uParam0->f_17 = 1070156/*func_3208*/;
			break;
		case 20:
			uParam0->f_3 = 1069991/*func_3207*/;
			break;
		case 21:
			uParam0->f_3 = 1069927/*func_3206*/;
			break;
		case 74:
			uParam0->f_53 = 1069700/*func_3205*/;
			break;
		case 22:
			uParam0->f_24 = 1069577/*func_3204*/;
			break;
		case 26:
			uParam0->f_38 = 1066199/*func_3178*/;
			break;
		case 25:
			uParam0->f_23 = 1065878/*func_3176*/;
			break;
		case 27:
			uParam0->f_25 = 1064729/*func_3167*/;
			break;
		case 28:
			uParam0->f_24 = 1064617/*func_3166*/;
			break;
		case 29:
			uParam0->f_28 = 1064536/*func_3165*/;
			break;
		case 30:
			uParam0->f_8 = 1063646/*func_3163*/;
			break;
		case 31:
			uParam0->f_39 = 1063099/*func_3161*/;
			break;
		case 33:
			uParam0->f_40 = 1062417/*func_3159*/;
			break;
		case 32:
			*uParam0 = 1062324/*func_3157*/;
			break;
		case 34:
			uParam0->f_41 = 1053058/*func_3142*/;
			break;
		case 36:
			uParam0->f_58 = 1053000/*func_3141*/;
			break;
		case 35:
			uParam0->f_42 = 949212/*func_2936*/;
			break;
		case 45:
			uParam0->f_14 = 1052991/*func_3140*/;
			break;
		case 46:
			uParam0->f_14 = 1052982/*func_3139*/;
			break;
		case 110:
			uParam0->f_57 = 1052974/*func_3138*/;
			break;
		case 77:
			uParam0->f_13 = 1052925/*func_3137*/;
			break;
		case 47:
			uParam0->f_43 = 1052633/*func_3136*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1049608/*func_3112*/;
			break;
		case 49:
			uParam0->f_8 = 1049504/*func_3111*/;
			break;
		case 50:
			*uParam0 = 1049221/*func_3110*/;
			break;
		case 51:
			*uParam0 = 1049059/*func_3109*/;
			break;
		case 52:
			uParam0->f_15 = 1049048/*func_3108*/;
			break;
		case 53:
			uParam0->f_13 = 1048790/*func_3107*/;
			break;
		case 54:
			uParam0->f_45 = 1048528/*func_3106*/;
			break;
		case 56:
			uParam0->f_46 = 1048519/*func_3105*/;
			break;
		case 57:
			uParam0->f_11 = 1047362/*func_3098*/;
			break;
		case 58:
			uParam0->f_13 = 1047104/*func_3097*/;
			break;
		case 59:
			*uParam0 = 1046825/*func_3094*/;
			break;
		case 60:
			*uParam0 = 1046816/*func_3093*/;
			break;
		case 61:
			uParam0->f_15 = 1046805/*func_3092*/;
			break;
		case 62:
			uParam0->f_13 = 1046547/*func_3091*/;
			break;
		case 55:
			uParam0->f_45 = 1046539/*func_3090*/;
			break;
		case 63:
			uParam0->f_11 = 1046481/*func_3089*/;
			break;
		case 64:
			uParam0->f_47 = 1046331/*func_3088*/;
			break;
		case 65:
			uParam0->f_21 = 1044625/*func_3081*/;
			break;
		case 66:
			uParam0->f_21 = 1044314/*func_3080*/;
			break;
		case 67:
			uParam0->f_21 = 1044162/*func_3079*/;
			break;
		case 68:
			*uParam0 = 1043162/*func_3076*/;
			break;
		case 69:
			*uParam0 = 1043153/*func_3075*/;
			break;
		case 70:
			uParam0->f_48 = 1042704/*func_3074*/;
			break;
		case 71:
			uParam0->f_49 = 1042425/*func_3073*/;
			break;
		case 107:
			uParam0->f_50 = 1042413/*func_3072*/;
			break;
		case 80:
			uParam0->f_7 = 1042180/*func_3071*/;
			break;
		case 84:
			uParam0->f_1 = 1042171/*func_3070*/;
			break;
		case 85:
			uParam0->f_1 = 1040076/*func_3061*/;
			break;
		case 87:
			uParam0->f_1 = 1037181/*func_3052*/;
			break;
		case 88:
			uParam0->f_1 = 1037172/*func_3051*/;
			break;
		case 89:
			uParam0->f_54 = 1037164/*func_3050*/;
			break;
		case 96:
			uParam0->f_1 = 1037138/*func_3049*/;
			break;
		case 97:
			uParam0->f_1 = 1037029/*func_3048*/;
			break;
		case 98:
			uParam0->f_1 = 1036318/*func_3047*/;
			break;
		case 100:
			uParam0->f_22 = 1036156/*func_3046*/;
			break;
		case 101:
			uParam0->f_22 = 1036029/*func_3045*/;
			break;
		case 78:
			uParam0->f_59 = 1035739/*func_3042*/;
			break;
		case 125:
			uParam0->f_19 = 1035715/*func_3041*/;
			break;
	}
}

int func_3047(var uParam0, var uParam1)//Position - 0xFD01E
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
		func_1412(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

int func_3061(int iParam0, var uParam1)//Position - 0xFDECC
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
	iVar0 = __LIB_3__::func_103(iParam0);
	if (__LIB_18__::func_486(iVar0))
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
			func_330(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_241(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_3__::func_110(iVar0) };
		Var3 = { __LIB_3__::func_109(iVar0) };
		fVar4 = __LIB_3__::func_108(iVar0);
		fVar5 = __LIB_3__::func_107(iVar0);
		bVar6 = false;
		Var7 = { __LIB_3__::func_106(iVar0) };
		Var8 = { __LIB_3__::func_105(iVar0) };
		fVar9 = __LIB_3__::func_104(iVar0);
		return __LIB_25__::func_164(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_3176(int iParam0, int iParam1)//Position - 0x104396
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_82(iParam0) };
	if (__LIB_6__::func_426(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_25__::func_396(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_396(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_25__::func_430(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_25__::func_430(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3178(var uParam0, var uParam1)//Position - 0x1044D7
{
	if (__LIB_2__::func_399() == 2)
	{
		func_3192(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_432(uParam0, uParam1);
		}
		else
		{
			func_3180(uParam0, uParam1);
		}
	}
	else if (__LIB_2__::func_399() == 3)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_432(uParam0, uParam1);
		}
		else
		{
			__LIB_3__::func_157(uParam1);
		}
	}
}

void func_3180(var uParam0, var uParam1)//Position - 0x104562
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_573(uParam0, uParam1);
			break;
		case 1:
			func_3181(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3181(var uParam0, var uParam1)//Position - 0x10459C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_7__::func_514(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
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
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

void func_3192(var uParam0, var uParam1)//Position - 0x104AB6
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_574(uParam0, uParam1);
			break;
		case 1:
			func_3201(uParam0, uParam1);
			break;
		case 2:
			__LIB_32__::func_189(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3201(var uParam0, var uParam1)//Position - 0x104F63
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_53(*uParam0))
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
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_25__::func_396(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_3271(var uParam0, int iParam1)//Position - 0x10BEA0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1104890/*func_3348*/;
			break;
		case 1:
			uParam0->f_30 = 1104834/*func_3347*/;
			break;
		case 2:
			uParam0->f_31 = 1104565/*func_3346*/;
			break;
		case 3:
			uParam0->f_34 = 1104504/*func_3345*/;
			break;
		case 4:
			uParam0->f_12 = 1104473/*func_3344*/;
			break;
		case 6:
			uParam0->f_32 = 1104409/*func_3343*/;
			break;
		case 111:
			uParam0->f_35 = 1104400/*func_3342*/;
			break;
		case 11:
			uParam0->f_11 = 1104391/*func_3341*/;
			break;
		case 14:
			uParam0->f_11 = 1104382/*func_3340*/;
			break;
		case 12:
			uParam0->f_33 = 1104171/*func_3338*/;
			break;
		case 109:
			uParam0->f_56 = 1104163/*func_3337*/;
			break;
		case 79:
			*uParam0 = 1104139/*func_3336*/;
			break;
		case 13:
			uParam0->f_2 = 1104130/*func_3335*/;
			break;
		case 15:
			uParam0->f_2 = 1103188/*func_3328*/;
			break;
		case 75:
			uParam0->f_4 = 1103179/*func_3327*/;
			break;
		case 16:
			uParam0->f_5 = 1103154/*func_3326*/;
			break;
		case 108:
			uParam0->f_55 = 1103145/*func_3325*/;
			break;
		case 17:
			uParam0->f_17 = 1103120/*func_3324*/;
			break;
		case 19:
			uParam0->f_17 = 1103109/*func_3323*/;
			break;
		case 20:
			uParam0->f_3 = 1103100/*func_3322*/;
			break;
		case 21:
			uParam0->f_3 = 1103091/*func_3321*/;
			break;
		case 74:
			uParam0->f_53 = 1102623/*func_3318*/;
			break;
		case 22:
			uParam0->f_24 = 1102504/*func_3317*/;
			break;
		case 25:
			uParam0->f_23 = 1101734/*func_3313*/;
			break;
		case 30:
			uParam0->f_8 = 1101588/*func_3311*/;
			break;
		case 31:
			uParam0->f_39 = 1101577/*func_3310*/;
			break;
		case 33:
			uParam0->f_40 = 1101370/*func_3308*/;
			break;
		case 34:
			uParam0->f_41 = 1101053/*func_3306*/;
			break;
		case 36:
			uParam0->f_58 = 1101000/*func_3305*/;
			break;
		case 35:
			uParam0->f_42 = 1100227/*func_3302*/;
			break;
		case 45:
			uParam0->f_14 = 1100218/*func_3301*/;
			break;
		case 46:
			uParam0->f_14 = 1100209/*func_3300*/;
			break;
		case 110:
			uParam0->f_57 = 1100201/*func_3299*/;
			break;
		case 77:
			uParam0->f_13 = 1100190/*func_3298*/;
			break;
		case 47:
			uParam0->f_43 = 1099951/*func_3296*/;
			break;
		case 49:
			uParam0->f_8 = 1099942/*func_3295*/;
			break;
		case 50:
			*uParam0 = 1099933/*func_3294*/;
			break;
		case 51:
			*uParam0 = 1099924/*func_3293*/;
			break;
		case 52:
			uParam0->f_15 = 1099913/*func_3292*/;
			break;
		case 53:
			uParam0->f_13 = 1099902/*func_3291*/;
			break;
		case 54:
			uParam0->f_45 = 1099894/*func_3290*/;
			break;
		case 56:
			uParam0->f_46 = 1099885/*func_3289*/;
			break;
		case 57:
			uParam0->f_11 = 1099876/*func_3288*/;
			break;
		case 58:
			uParam0->f_13 = 1099583/*func_3286*/;
			break;
		case 64:
			uParam0->f_47 = 1099039/*func_3283*/;
			break;
		case 65:
			uParam0->f_21 = 1099031/*func_3282*/;
			break;
		case 66:
			uParam0->f_21 = 1098963/*func_3281*/;
			break;
		case 67:
			uParam0->f_21 = 1098823/*func_3279*/;
			break;
		case 68:
			*uParam0 = 1098379/*func_3278*/;
			break;
		case 69:
			*uParam0 = 1098370/*func_3277*/;
			break;
		case 70:
			uParam0->f_48 = 1098358/*func_3276*/;
			break;
		case 71:
			uParam0->f_49 = 1098349/*func_3275*/;
			break;
		case 107:
			uParam0->f_50 = 1098337/*func_3274*/;
			break;
		case 80:
			uParam0->f_7 = 1098328/*func_3273*/;
			break;
		case 78:
			uParam0->f_59 = 1098320/*func_3272*/;
			break;
	}
}

void func_3313(int iParam0, int iParam1)//Position - 0x10CFA6
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
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_19__::func_148(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_425(iVar7, 1) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_19__::func_147(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_19__::func_147(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3314(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3314(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3314(int iParam0)//Position - 0x10D1D0
{
	__LIB_19__::func_147(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3349(var uParam0, int iParam1)//Position - 0x10DC03
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1203842/*func_3593*/;
			break;
		case 1:
			uParam0->f_30 = 1203738/*func_3592*/;
			break;
		case 2:
			uParam0->f_31 = 1203003/*func_3590*/;
			break;
		case 3:
			uParam0->f_34 = 1202921/*func_3589*/;
			break;
		case 4:
			uParam0->f_12 = 1202778/*func_3588*/;
			break;
		case 5:
			uParam0->f_11 = 1202768/*func_3587*/;
			break;
		case 37:
			uParam0->f_18 = 1202633/*func_3586*/;
			break;
		case 42:
			uParam0->f_10 = 1202566/*func_3585*/;
			break;
		case 6:
			uParam0->f_32 = 1202454/*func_3584*/;
			break;
		case 111:
			uParam0->f_35 = 1202215/*func_3580*/;
			break;
		case 11:
			uParam0->f_11 = 1202206/*func_3579*/;
			break;
		case 12:
			uParam0->f_33 = 1201706/*func_3576*/;
			break;
		case 14:
			uParam0->f_11 = 1201697/*func_3575*/;
			break;
		case 109:
			uParam0->f_56 = 1201689/*func_3574*/;
			break;
		case 79:
			*uParam0 = 1201665/*func_3573*/;
			break;
		case 38:
			uParam0->f_9 = 1201585/*func_3572*/;
			break;
		case 13:
			uParam0->f_2 = 1201489/*func_3571*/;
			break;
		case 15:
			uParam0->f_2 = 1201284/*func_3570*/;
			break;
		case 75:
			uParam0->f_4 = 1201268/*func_3569*/;
			break;
		case 16:
			uParam0->f_5 = 1200459/*func_3566*/;
			break;
		case 108:
			uParam0->f_55 = 1195752/*func_3548*/;
			break;
		case 17:
			uParam0->f_17 = 1194935/*func_3547*/;
			break;
		case 19:
			uParam0->f_17 = 1194909/*func_3546*/;
			break;
		case 20:
			uParam0->f_3 = 1194825/*func_3545*/;
			break;
		case 21:
			uParam0->f_3 = 1194761/*func_3544*/;
			break;
		case 74:
			uParam0->f_53 = 1194609/*func_3543*/;
			break;
		case 22:
			uParam0->f_24 = 1194442/*func_3542*/;
			break;
		case 25:
			uParam0->f_23 = 1193296/*func_3536*/;
			break;
		case 30:
			uParam0->f_8 = 1192678/*func_3534*/;
			break;
		case 31:
			uParam0->f_39 = 1192367/*func_3533*/;
			break;
		case 33:
			uParam0->f_40 = 1191428/*func_3531*/;
			break;
		case 34:
			uParam0->f_41 = 1190068/*func_3530*/;
			break;
		case 36:
			uParam0->f_58 = 1190010/*func_3529*/;
			break;
		case 35:
			uParam0->f_42 = 1142305/*func_3526*/;
			break;
		case 45:
			uParam0->f_14 = 1142296/*func_3525*/;
			break;
		case 46:
			uParam0->f_14 = 1142287/*func_3524*/;
			break;
		case 110:
			uParam0->f_57 = 1142279/*func_3523*/;
			break;
		case 77:
			uParam0->f_13 = 1142256/*func_3522*/;
			break;
		case 47:
			uParam0->f_43 = 1142128/*func_3521*/;
			break;
		case 49:
			uParam0->f_8 = 1142087/*func_3520*/;
			break;
		case 50:
			*uParam0 = 1141819/*func_3517*/;
			break;
		case 51:
			*uParam0 = 1141750/*func_3516*/;
			break;
		case 52:
			uParam0->f_15 = 1141739/*func_3515*/;
			break;
		case 53:
			uParam0->f_13 = 1141505/*func_3514*/;
			break;
		case 54:
			uParam0->f_45 = 1141155/*func_3511*/;
			break;
		case 56:
			uParam0->f_46 = 1141146/*func_3510*/;
			break;
		case 57:
			uParam0->f_11 = 1141075/*func_3509*/;
			break;
		case 58:
			uParam0->f_13 = 1140841/*func_3508*/;
			break;
		case 64:
			uParam0->f_47 = 1140641/*func_3506*/;
			break;
		case 65:
			uParam0->f_21 = 1139743/*func_3504*/;
			break;
		case 66:
			uParam0->f_21 = 1139017/*func_3495*/;
			break;
		case 67:
			uParam0->f_21 = 1136718/*func_3475*/;
			break;
		case 68:
			*uParam0 = 1136085/*func_3471*/;
			break;
		case 69:
			*uParam0 = 1136076/*func_3470*/;
			break;
		case 70:
			uParam0->f_48 = 1136064/*func_3469*/;
			break;
		case 71:
			uParam0->f_49 = 1136055/*func_3468*/;
			break;
		case 107:
			uParam0->f_50 = 1136043/*func_3467*/;
			break;
		case 80:
			uParam0->f_7 = 1135350/*func_3461*/;
			break;
		case 84:
			uParam0->f_1 = 1134810/*func_3459*/;
			break;
		case 85:
			uParam0->f_1 = 1130708/*func_3451*/;
			break;
		case 87:
			uParam0->f_1 = 1126720/*func_3439*/;
			break;
		case 88:
			uParam0->f_1 = 1126206/*func_3435*/;
			break;
		case 89:
			uParam0->f_54 = 1126035/*func_3434*/;
			break;
		case 90:
			uParam0->f_1 = 1125829/*func_3429*/;
			break;
		case 91:
			uParam0->f_1 = 1125663/*func_3428*/;
			break;
		case 92:
			uParam0->f_1 = 1124211/*func_3424*/;
			break;
		case 94:
			uParam0->f_1 = 1120075/*func_3413*/;
			break;
		case 95:
			uParam0->f_22 = 1119779/*func_3410*/;
			break;
		case 96:
			uParam0->f_1 = 1119749/*func_3409*/;
			break;
		case 97:
			uParam0->f_1 = 1119082/*func_3406*/;
			break;
		case 98:
			uParam0->f_1 = 1116433/*func_3387*/;
			break;
		case 100:
			uParam0->f_22 = 1108370/*func_3363*/;
			break;
		case 101:
			uParam0->f_22 = 1106427/*func_3353*/;
			break;
		case 78:
			uParam0->f_59 = 1106207/*func_3351*/;
			break;
		case 125:
			uParam0->f_19 = 1106183/*func_3350*/;
			break;
	}
}

int func_3387(int iParam0, int* iParam1)//Position - 0x110911
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
	if ((__LIB_0__::func_175() || __LIB_2__::func_500()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_4__::func_715() || __LIB_2__::func_835())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_2__::func_47(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
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
			if ((__LIB_1__::func_264(bVar2, 1, 1) && !__LIB_8__::func_303(bVar2)) && !Global_2824892)
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
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_3__::func_198(0), false);
				Var4 = { __LIB_3__::func_207() };
				__LIB_7__::func_660(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::func_160())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_1412(&(iParam1->f_140[0]), Global_1853191, 1, 0);
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
					if (__LIB_1__::func_264(bVar2, 0, 1) && !__LIB_8__::func_303(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_1412(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
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
			__LIB_3__::func_223();
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
		if (__LIB_1__::func_206() || BitTest(Global_1574942, 4))
		{
			if (__LIB_4__::func_715() || __LIB_2__::func_835())
			{
			}
			else
			{
				__LIB_35__::func_794(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_7__::func_659(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_18__::func_635(&(iParam1->f_176[3]), Var5, Var5.f_3);
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
			func_1412(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
			Var7 = { __LIB_3__::func_207() };
			__LIB_7__::func_660(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_6__::func_925())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_2__::func_681(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_3__::func_209(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_7__::func_449(iParam1, 0);
	__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_3424(int iParam0, int* iParam1)//Position - 0x112773
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_3__::func_208() };
		__LIB_7__::func_660(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
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
				func_3427(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_330(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3426(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
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
					if ((__LIB_1__::func_264(bVar5, 1, 1) && __LIB_3__::func_977(bVar5) == iParam0) && __LIB_3__::func_998(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_1412(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
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
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_7__::func_536(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_25__::func_126(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_3__::func_198(0));
	return 1;
}

int func_3426(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x112A85
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
		if ((*uParam3)[iVar1] != __LIB_0__::func_160() && __LIB_1__::func_264((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_242(uParam2[iVar1], iVar3, 1, 0);
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

int func_3427(int iParam0, var uParam1, int iParam2, struct<3> Param3)//Position - 0x112BBD
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_517(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_517(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		return 1;
	}
	else
	{
		*uParam1 = VEHICLE::CREATE_VEHICLE(__LIB_3__::func_226(), Param3, ENTITY::GET_ENTITY_HEADING(*iParam0), false, false, false);
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
			__LIB_25__::func_536(*iParam0, &Var0);
			func_334(*uParam1, &Var0, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			ENTITY::SET_ENTITY_PROOFS(*uParam1, true, true, true, true, true, true, true, true);
			VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar1, &iVar2);
			if (iVar1 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
		}
	}
	return 0;
}

int func_3451(int iParam0, int* iParam1)//Position - 0x1140D4
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
			func_330(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_3__::func_234(ENTITY::GET_ENTITY_MODEL(iVar0)))
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
		else if (func_241(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_3__::func_246(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1412(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_7__::func_659(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_25__::func_125(iParam0, 3) };
	__LIB_7__::func_660(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_7__::func_542(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_25__::func_125(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_7__::func_660(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_18__::func_635(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_25__::func_166(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_25__::func_127(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

int func_3459(int iParam0, var uParam1)//Position - 0x1150DA
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_7__::func_538(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_240(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_240(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_222());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_222()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_221());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_221()))
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
				__LIB_0__::func_584(__LIB_3__::func_226());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_226()))
				{
					bVar0 = false;
				}
				else if (!func_3427(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_330(&iVar1, &(uParam1->f_122), 24);
					__LIB_3__::func_237(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_3__::func_247(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_6__::func_925())
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

void func_3511(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x1169A3
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_7__::func_926(iParam0))
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
	if (__LIB_0__::func_170(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_3__::func_77(iParam0) };
					iVar1 = __LIB_2__::func_855(iParam0);
					*iParam2 = __LIB_0__::func_392(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					func_2154(iParam2, 166);
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

void func_3536(int iParam0, int iParam1)//Position - 0x123550
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
	if (__LIB_6__::func_431(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_77(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_8__::func_303(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_764(bVar7)) && !func_555(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_8__::func_303(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_764(bVar7)) && !func_555(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_398(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_398(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3537(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3537(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3537(int iParam0)//Position - 0x1237E0
{
	__LIB_25__::func_398(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3594(var uParam0, int iParam1)//Position - 0x125E8B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1232142/*func_3767*/;
			break;
		case 1:
			uParam0->f_30 = 1232086/*func_3766*/;
			break;
		case 2:
			uParam0->f_31 = 1231817/*func_3765*/;
			break;
		case 3:
			uParam0->f_34 = 1231758/*func_3764*/;
			break;
		case 4:
			uParam0->f_12 = 1231727/*func_3763*/;
			break;
		case 37:
			uParam0->f_18 = 1231609/*func_3762*/;
			break;
		case 38:
			uParam0->f_9 = 1231525/*func_3761*/;
			break;
		case 6:
			uParam0->f_32 = 1231461/*func_3760*/;
			break;
		case 111:
			uParam0->f_35 = 1231438/*func_3759*/;
			break;
		case 11:
			uParam0->f_11 = 1231429/*func_3758*/;
			break;
		case 12:
			uParam0->f_33 = 1230976/*func_3755*/;
			break;
		case 14:
			uParam0->f_11 = 1230967/*func_3754*/;
			break;
		case 109:
			uParam0->f_56 = 1230959/*func_3753*/;
			break;
		case 79:
			*uParam0 = 1230935/*func_3752*/;
			break;
		case 13:
			uParam0->f_2 = 1230926/*func_3751*/;
			break;
		case 15:
			uParam0->f_2 = 1225854/*func_3725*/;
			break;
		case 75:
			uParam0->f_4 = 1225845/*func_3724*/;
			break;
		case 16:
			uParam0->f_5 = 1225661/*func_3723*/;
			break;
		case 108:
			uParam0->f_55 = 1222562/*func_3709*/;
			break;
		case 17:
			uParam0->f_17 = 1222056/*func_3707*/;
			break;
		case 19:
			uParam0->f_17 = 1222030/*func_3706*/;
			break;
		case 20:
			uParam0->f_3 = 1221952/*func_3705*/;
			break;
		case 21:
			uParam0->f_3 = 1221889/*func_3704*/;
			break;
		case 74:
			uParam0->f_53 = 1221674/*func_3702*/;
			break;
		case 22:
			uParam0->f_24 = 1221555/*func_3701*/;
			break;
		case 25:
			uParam0->f_23 = 1220608/*func_3696*/;
			break;
		case 30:
			uParam0->f_8 = 1220044/*func_3694*/;
			break;
		case 31:
			uParam0->f_39 = 1219866/*func_3691*/;
			break;
		case 33:
			uParam0->f_40 = 1218754/*func_3686*/;
			break;
		case 34:
			uParam0->f_41 = 1218060/*func_3684*/;
			break;
		case 36:
			uParam0->f_58 = 1218007/*func_3683*/;
			break;
		case 35:
			uParam0->f_42 = 1217430/*func_3681*/;
			break;
		case 45:
			uParam0->f_14 = 1217421/*func_3680*/;
			break;
		case 46:
			uParam0->f_14 = 1217412/*func_3679*/;
			break;
		case 110:
			uParam0->f_57 = 1217235/*func_3678*/;
			break;
		case 77:
			uParam0->f_13 = 1217224/*func_3677*/;
			break;
		case 47:
			uParam0->f_43 = 1216726/*func_3674*/;
			break;
		case 49:
			uParam0->f_8 = 1216685/*func_3673*/;
			break;
		case 50:
			*uParam0 = 1216676/*func_3672*/;
			break;
		case 51:
			*uParam0 = 1216667/*func_3671*/;
			break;
		case 52:
			uParam0->f_15 = 1216656/*func_3670*/;
			break;
		case 53:
			uParam0->f_13 = 1216645/*func_3669*/;
			break;
		case 54:
			uParam0->f_45 = 1216637/*func_3668*/;
			break;
		case 56:
			uParam0->f_46 = 1216628/*func_3667*/;
			break;
		case 57:
			uParam0->f_11 = 1216619/*func_3666*/;
			break;
		case 58:
			uParam0->f_13 = 1216390/*func_3665*/;
			break;
		case 64:
			uParam0->f_47 = 1210398/*func_3633*/;
			break;
		case 65:
			uParam0->f_21 = 1208666/*func_3621*/;
			break;
		case 66:
			uParam0->f_21 = 1208340/*func_3618*/;
			break;
		case 67:
			uParam0->f_21 = 1207615/*func_3614*/;
			break;
		case 68:
			*uParam0 = 1207070/*func_3613*/;
			break;
		case 69:
			*uParam0 = 1207061/*func_3612*/;
			break;
		case 70:
			uParam0->f_48 = 1207049/*func_3611*/;
			break;
		case 71:
			uParam0->f_49 = 1207040/*func_3610*/;
			break;
		case 107:
			uParam0->f_50 = 1207028/*func_3609*/;
			break;
		case 80:
			uParam0->f_7 = 1205312/*func_3599*/;
			break;
		case 78:
			uParam0->f_59 = 1204862/*func_3596*/;
			break;
		case 125:
			uParam0->f_19 = 1204846/*func_3595*/;
			break;
	}
}

void func_3633(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x12781E
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = func_3662();
	if ((func_3725(iParam1) && !__LIB_3__::func_925(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
	{
		__LIB_25__::func_561(uParam0, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_7__::func_556(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_25__::func_562(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_3725(iParam1))
		{
		}
		else if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			__LIB_25__::func_561(uParam0, 1);
			__LIB_3__::func_307(0);
		}
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false);
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("oppressor2"))
				{
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iVar1, 0f);
				}
			}
		}
	}
	if ((__LIB_3__::func_326(PLAYER::PLAYER_ID()) || __LIB_3__::func_325(PLAYER::PLAYER_ID())) && func_3651(iParam1))
	{
		if (!__LIB_4__::func_658())
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			__LIB_3__::func_324(0);
			__LIB_3__::func_323(0);
			__LIB_3__::func_309(0);
			__LIB_3__::func_322(0);
			CAM::DO_SCREEN_FADE_IN(500);
			if (__LIB_2__::func_560())
			{
				__LIB_3__::func_321(1);
			}
			__LIB_3__::func_320(0);
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_3__::func_319(0);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			__LIB_3__::func_320(0);
		}
	}
	if (__LIB_0__::func_618())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_1853190 != __LIB_0__::func_160())
		{
			if (PLAYER::PLAYER_ID() == Global_1853190)
			{
				if (__LIB_1__::func_237(PLAYER::PLAYER_ID()))
				{
					if (((__LIB_3__::func_283(PLAYER::PLAYER_ID()) || __LIB_3__::func_233()) || __LIB_3__::func_232()) || Global_1957730)
					{
						__LIB_8__::func_611(1);
					}
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam0->f_22.f_94));
			}
		}
		if (!__LIB_3__::func_925(PLAYER::PLAYER_ID()))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)))
				{
					__LIB_32__::func_41(uParam0, iVar0);
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
				if (__LIB_1__::func_264(bVar3, 1, 1))
				{
					if (__LIB_3__::func_311(bVar3))
					{
						if (func_3725(iParam1) && !__LIB_3__::func_925(PLAYER::PLAYER_ID()))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							__LIB_3__::func_319(0);
							__LIB_3__::func_320(0);
							__LIB_3__::func_321(1);
						}
					}
				}
			}
		}
	}
	if (__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	__LIB_18__::func_584();
	if (!__LIB_4__::func_715() || __LIB_0__::func_706())
	{
		__LIB_3__::func_272(0);
	}
}

int func_3651(int iParam0)//Position - 0x12842E
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_3725(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_160())
				{
					if (((!__LIB_3__::func_998(Global_1946250.f_3630) && !__LIB_3__::func_859(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5)) && !__LIB_3__::func_311(Global_1946250.f_3630))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3662()//Position - 0x128BF3
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	char* sVar3;
	int iVar4;
	int iVar5;
	var uVar6[25];
	int iVar7;
	int iVar8;
	var uVar9[25];
	int iVar10;
	int iVar11;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16 != -1 && __LIB_4__::func_735(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16) == 9)
	{
		return -1;
	}
	if (__LIB_3__::func_930(PLAYER::PLAYER_ID()) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_3__::func_325(PLAYER::PLAYER_ID()) && __LIB_1__::func_237(Global_1853191))
		{
			iVar4 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
						{
							if (__LIB_1__::func_580(uVar2[iVar0], 1))
							{
								sVar3 = ENTITY::GET_ENTITY_SCRIPT(uVar2[iVar0], &uVar1);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
								{
									if (MISC::ARE_STRINGS_EQUAL(sVar3, "am_mp_defunct_base"))
									{
										if (__LIB_1__::func_264(Global_1853191, 1, 1))
										{
											if (__LIB_4__::func_925(uVar2[iVar0], 1, 0) == Global_1853191)
											{
												return uVar2[iVar0];
											}
										}
									}
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_582())
		{
			iVar7 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar6);
			iVar5 = 0;
			while (iVar5 < iVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar5]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar6[iVar5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar5], false))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar6[iVar5], __LIB_3__::func_328()))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
							{
								if (__LIB_1__::func_580(uVar6[iVar5], 1))
								{
									if (__LIB_1__::func_264(__LIB_0__::func_582(), 1, 1))
									{
										if (__LIB_4__::func_925(uVar6[iVar5], 1, 0) == __LIB_0__::func_582())
										{
											return uVar6[iVar5];
										}
									}
								}
							}
						}
					}
				}
				iVar5++;
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1640744))
				{
					Global_2815059.f_293 = Global_1640744;
					return Global_1640744;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_293))
			{
				iVar10 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar9);
				iVar8 = 0;
				while (iVar8 < iVar10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar9[iVar8]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar9[iVar8]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar9[iVar8], false))
						{
							if (VEHICLE::IS_VEHICLE_MODEL(uVar9[iVar8], __LIB_3__::func_328()))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
								{
									if (__LIB_1__::func_580(uVar9[iVar8], 1))
									{
										if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
										{
											if (__LIB_4__::func_925(uVar9[iVar8], 1, 0) == Global_1946250.f_3630)
											{
												Global_2815059.f_293 = uVar9[iVar8];
												return uVar9[iVar8];
											}
										}
									}
								}
							}
						}
					}
					iVar8++;
				}
			}
			else
			{
				return Global_2815059.f_293;
			}
		}
	}
	else if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		__LIB_3__::func_322(0);
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1))
	{
		iVar11 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
		if (iVar11 != __LIB_0__::func_160() && __LIB_3__::func_330(iVar11))
		{
			return __LIB_3__::func_329(iVar11);
		}
	}
	return Global_2815059.f_308;
}

Vector3 func_3665(var uParam0)//Position - 0x128F86
{
	int iVar0;
	iVar0 = func_3662();
	if (Global_1853190 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_237(Global_1853190))
		{
			return 487.6422f, 4792.5854f, -59.3939f;
		}
		else if (Global_1853190 != PLAYER::PLAYER_ID())
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			return ENTITY::GET_ENTITY_COORDS(iVar0, true);
		}
		else
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return ENTITY::GET_ENTITY_COORDS(iVar0, true);
	}
	else if (__LIB_4__::func_925(iVar0, 1, 0) != __LIB_0__::func_160())
	{
		return Global_2689235[__LIB_4__::func_925(iVar0, 1, 0) /*453*/].f_318.f_18;
	}
	return 0f, 0f, 0f;
}

void func_3686(int iParam0, int iParam1)//Position - 0x1298C2
{
	int iVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_160();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	Global_1946250.f_506 = 0;
	iVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (((__LIB_3__::func_286() && Global_1853191 != __LIB_0__::func_160()) && Global_1853191 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		if (Global_1946250.f_3280 != PLAYER::PLAYER_ID())
		{
			if (Global_1946250.f_3280 != -1)
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 5);
				Global_1853190 = Global_1853191;
			}
			else
			{
				if (Global_1946250.f_3280 == -1)
				{
					__LIB_2__::func_452(Global_1853191);
				}
				Global_1853190 = Global_1853191;
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
		}
	}
	else if ((Global_1946250.f_3280 != -1 && Global_1946250.f_3280 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 0);
		if (iVar0 != __LIB_0__::func_160())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = iVar0;
		}
	}
	else if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = Global_1946250.f_3630;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1946250.f_3630;
	}
	else if (__LIB_3__::func_330(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(func_3662(), 1, 0))
	{
		Global_1853190 = PLAYER::PLAYER_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
			{
				__LIB_3__::func_335(PLAYER::PLAYER_ID(), 88, 3);
			}
			else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				__LIB_4__::func_692(PLAYER::PLAYER_ID(), 88, 3);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
		MISC::SET_BIT(&(Global_1946250.f_506), 31);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160())
	{
		Global_1946250.f_3636 = __LIB_1__::func_243(__LIB_1__::func_244(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9));
	}
	__LIB_7__::func_369();
}

void func_3696(int iParam0, int iParam1)//Position - 0x12A000
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
	if (__LIB_4__::func_981(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_555(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_555(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						func_3686(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_339(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						func_3686(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							func_3698(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3697(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							func_3698(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3697(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3697(int iParam0)//Position - 0x12A293
{
	func_3686(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3698(int iParam0)//Position - 0x12A2C1
{
	int iVar0;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || iParam0)
	{
		iVar0 = func_3662();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if ((__LIB_4__::func_925(iVar0, 1, 0) == PLAYER::PLAYER_ID() && !__LIB_1__::func_237(PLAYER::PLAYER_ID())) && !__LIB_3__::func_931())
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 2f, -17f, 0f) };
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_24 = ENTITY::GET_ENTITY_HEADING(iVar0);
			}
		}
	}
}

int func_3709(var uParam0, var uParam1, var uParam2)//Position - 0x12A7A2
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	*uParam2 = 1;
	if (Global_262145.f_23133 /* Tunable: 200197103 */)
	{
		return 0;
	}
	iVar0 = func_3662();
	if (__LIB_3__::func_233() || __LIB_3__::func_232())
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_4__::func_925(iVar0, 1, 0) != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if ((!__LIB_4__::func_715() || __LIB_2__::func_368()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_25__::func_561(uParam1, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_561(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (((__LIB_7__::func_556(iVar0) && __LIB_3__::func_464(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) || __LIB_3__::func_930(PLAYER::PLAYER_ID())) || __LIB_3__::func_285())
					{
						if (!func_3725(*uParam0) && __LIB_25__::func_562(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 0))
						{
							if (MISC::IS_PC_VERSION())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
									{
										if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */, "STRING")) || __LIB_2__::func_161("BASE_MOD_ENTER" /* GXT: ~a~ Access the Facility Vehicle Workshop. ~n~ ~INPUT_CONTEXT_SECONDARY~ Enter your Avenger with this vehicle. */, "STRING"))
										{
											PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
										}
									}
								}
							}
							__LIB_3__::func_345(1);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							if (!__LIB_3__::func_311(PLAYER::PLAYER_ID()))
							{
								if (__LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("GAN_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Avenger. */, -1);
									}
									return 0;
								}
								if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
								{
									bVar1 = true;
								}
								if (!bVar1)
								{
									sVar2 = "GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */;
								}
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
								if (!bVar1)
								{
									if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
									{
										__LIB_7__::func_508(&(uParam1->f_22.f_94), 5, sVar2, 0, 0, 0, 0);
									}
									if (__LIB_0__::func_77(0))
									{
										__LIB_6__::func_404(&(uParam1->f_22.f_94));
									}
								}
								if (((!bVar1 && __LIB_2__::func_187(uParam1->f_22.f_94, 1)) || ((bVar1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/)) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) || BitTest(uParam1->f_22, 1))
								{
									__LIB_25__::func_561(uParam1, 0);
									__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
									__LIB_6__::func_404(&(uParam1->f_22.f_94));
									if (BitTest(uParam1->f_22, 1))
									{
										MISC::CLEAR_BIT(&(uParam1->f_22), 1);
									}
									if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
									{
										__LIB_4__::func_736(1, 1);
										MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
									}
									if (!__LIB_3__::func_930(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_343(1);
									}
									__LIB_7__::func_375(1, 88);
									__LIB_3__::func_307(1);
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
								__LIB_8__::func_611(0);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								HUD::DISABLE_FRONTEND_THIS_FRAME();
								HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
								VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
								if (__LIB_4__::func_32() && __LIB_7__::func_560())
								{
									if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_308(1);
									}
									if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										__LIB_3__::func_335(PLAYER::PLAYER_ID(), 88, 3);
									}
									else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
									{
										__LIB_4__::func_692(PLAYER::PLAYER_ID(), 88, 3);
									}
									if (!__LIB_3__::func_285())
									{
										__LIB_7__::func_394(1);
										__LIB_3__::func_934(88, uParam1, 0, 0);
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
										__LIB_18__::func_904(1);
										__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
										__LIB_3__::func_345(0);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
									else if (!__LIB_2__::func_560())
									{
										__LIB_3__::func_324(1);
										__LIB_3__::func_323(1);
										__LIB_18__::func_904(1);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
								}
								else
								{
									if (!__LIB_4__::func_32())
									{
									}
									if (!__LIB_7__::func_560())
									{
									}
								}
							}
						}
						else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					else
					{
						__LIB_3__::func_345(0);
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
						__LIB_25__::func_561(uParam1, 1);
						__LIB_3__::func_307(0);
					}
				}
				else
				{
					if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					__LIB_25__::func_561(uParam1, 1);
					__LIB_3__::func_307(0);
				}
			}
			else
			{
				func_3710(*uParam0);
				if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_649(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_580(&(uParam1->f_22.f_101), 0, 0);
					}
					if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_4__::func_735(Global_1946250.f_3630) && __LIB_3__::func_925(Global_1946250.f_3630))
					{
						if (__LIB_0__::func_649(&(uParam1->f_22.f_101)))
						{
							if (__LIB_2__::func_47(&(uParam1->f_22.f_101), 15000, 0) && CAM::IS_SCREEN_FADING_OUT())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
								if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
								{
									NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
								}
								CAM::DO_SCREEN_FADE_IN(500);
								__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
								__LIB_3__::func_320(0);
								__LIB_3__::func_322(0);
								__LIB_3__::func_319(0);
								__LIB_0__::func_579(&(uParam1->f_22.f_101));
							}
						}
					}
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_8__::func_611(0);
					__LIB_2__::func_452(Global_1946250.f_3630);
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_3__::func_343(1);
					__LIB_7__::func_375(1, 88);
					__LIB_3__::func_307(1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_0__::func_579(&(uParam1->f_22.f_101));
					return 1;
				}
			}
		}
		else
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_561(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_6__::func_404(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_3710(int iParam0)//Position - 0x12AECB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
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
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if ((__LIB_3__::func_311(bVar2) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 8) || __LIB_3__::func_311(bVar2))
								{
									if (func_3651(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_3__::func_326(PLAYER::PLAYER_ID()))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_3__::func_320(0);
											__LIB_3__::func_322(0);
										}
									}
									else if (__LIB_4__::func_31())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_3__::func_320(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
											{
												__LIB_3__::func_309(1);
												__LIB_3__::func_324(1);
												__LIB_3__::func_308(1);
												__LIB_3__::func_323(1);
											}
											if (VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0)) || (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2")) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_3__::func_319(1);
											__LIB_3__::func_320(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_3__::func_322(0);
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

int func_3725(int iParam0)//Position - 0x12B47E
{
	int iVar0;
	bool bVar1;
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar1 = false;
	iVar0 = func_3662();
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_165()) || __LIB_3__::func_334())
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_1__::func_580(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_3__::func_165()) || __LIB_3__::func_334())
		{
			bVar1 = true;
		}
	}
	if (BitTest(Global_1946250.f_4523, 4) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !bVar1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if ((((ENTITY::GET_ENTITY_SPEED(iVar0) > 0.5f && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_UPRIGHT(iVar0, 25f) && !bVar1)
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0) && !bVar1)
		{
			return 1;
		}
	}
	if (__LIB_2__::func_477())
	{
		return 1;
	}
	if (__LIB_0__::func_706())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)))
		{
			if ((((ENTITY::IS_ENTITY_IN_AIR(iVar0) && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			return 1;
		}
	}
	if (func_3746(iParam0, iVar0))
	{
		return 1;
	}
	if (func_3745(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3742(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3741(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3735(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3734(iParam0, iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			if (!__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0)))
			{
			}
			else
			{
				__LIB_3__::func_347(1);
			}
		}
		else
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3731(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3730(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_1__::func_154(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_3729(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_233())
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_307()) && !__LIB_0__::func_494())
	{
		return 1;
	}
	if (__LIB_3__::func_185(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_3__::func_338(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_2__::func_745())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_3__::func_931())
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && func_3727())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((((((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && !__LIB_3__::func_930(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)) && !__LIB_3__::func_930(PLAYER::PLAYER_ID()))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((__LIB_3__::func_930(PLAYER::PLAYER_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iVar0) || NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_2__::func_161("BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, "STRING"))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (!__LIB_3__::func_930(PLAYER::PLAYER_ID()) && __LIB_2__::func_39(iVar0, 0))
	{
		return 1;
	}
	if (__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_170(__LIB_4__::func_721(PLAYER::PLAYER_ID())) != 8)
		{
		}
	}
	if (__LIB_1__::func_205(PLAYER::PLAYER_ID()) == 5)
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_1__::func_909())
	{
		return 1;
	}
	if (__LIB_1__::func_302(23))
	{
		return 1;
	}
	if (__LIB_2__::func_104())
	{
		return 1;
	}
	__LIB_3__::func_347(0);
	return 0;
}

int func_3727()//Position - 0x12BBB0
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	iVar2 = func_3662();
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
	{
		func_3728(88, &Var0);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, 0f, -8f, -0.6f) };
		if (MISC::ABSF((Var0.f_2 - Var1.f_2)) > 5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_3728(int iParam0, var uParam1)//Position - 0x12BC08
{
	int iVar0;
	var uVar1;
	switch (iParam0)
	{
		case 88:
			iVar0 = func_3662();
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -8f, -0.6f) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar1, false, false) && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
				}
				else
				{
					*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
				}
			}
			break;
	}
}

int func_3729(int iParam0)//Position - 0x12BC91
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	iVar0 = func_3662();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		func_3728(iParam0, &Var1);
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if (!__LIB_0__::func_78(Global_1310720.f_1445[iVar2 /*3*/], 0f, 0f, 0f, 0))
			{
				if (SYSTEM::VDIST2(Global_1310720.f_1445[iVar2 /*3*/], Var1) <= 225f)
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_3730(int iParam0, int iParam1)//Position - 0x12BD0C
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3728(iParam0, &Var0);
		if (!__LIB_2__::func_710(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(-376.2393f, -1878.2488f, 19.5278f, Var0) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3731(int iParam0, int iParam1)//Position - 0x12BD67
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3728(iParam0, &Var0);
		if (SYSTEM::VDIST2(__LIB_3__::func_82(__LIB_6__::func_932(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f || SYSTEM::VDIST2(__LIB_3__::func_81(__LIB_6__::func_932(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3734(int iParam0, int iParam1)//Position - 0x12BFF9
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3728(iParam0, &Var0);
		if (!__LIB_1__::func_233(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(__LIB_3__::func_77(__LIB_6__::func_933(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3735(int iParam0, int iParam1)//Position - 0x12C057
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3728(iParam0, &Var0);
		if (!__LIB_1__::func_247(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_83(__LIB_7__::func_561(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3741(int iParam0, int iParam1)//Position - 0x12C20C
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3728(iParam0, &Var0);
		if ((((SYSTEM::VDIST2(759.36f, -675.13f, 27.86f, Var0) <= 900f || SYSTEM::VDIST2(-144.58f, -1341.37f, 28.87f, Var0) <= 900f) || SYSTEM::VDIST2(-171f, -31.4f, 51.27f, Var0) <= 900f) || SYSTEM::VDIST2(231.54f, -1875.7f, 25.41f, Var0) <= 900f) || SYSTEM::VDIST2(488.98f, -897.41f, 24.79f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3742(int iParam0, int iParam1)//Position - 0x12C2E3
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3728(iParam0, &Var0);
		if (((((SYSTEM::VDIST2(-237.12f, 6228.7554f, 30.5005f, Var0) <= 900f || SYSTEM::VDIST2(1710.83f, 4760.13f, 41.0504f, Var0) <= 900f) || SYSTEM::VDIST2(-105.19f, -1778.3f, 28.51f, Var0) <= 900f) || SYSTEM::VDIST2(-617.7421f, 285.8363f, 80.6871f, Var0) <= 900f) || SYSTEM::VDIST2(-1287.1135f, -278.0045f, 37.5935f, Var0) <= 900f) || SYSTEM::VDIST2(726.7626f, -822.4685f, 23.8603f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3745(int iParam0, int iParam1)//Position - 0x12C445
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3728(iParam0, &Var0);
		if (((((((((SYSTEM::VDIST2(931.99f, 43.83f, 80.1f, Var0) <= 900f || SYSTEM::VDIST2(930.45f, 41.36f, 80.1f, Var0) <= 900f) || SYSTEM::VDIST2(964.4556f, 57.9093f, 112.1931f, Var0) <= 900f) || SYSTEM::VDIST2(926.4164f, 45.5401f, 59.9018f, Var0) <= 900f) || SYSTEM::VDIST2(936.3319f, 1.1849f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(968.591f, 63.923855f, 111.55298f, Var0) <= 900f) || SYSTEM::VDIST2(967.22f, 62.69f, 111.5531f, Var0) <= 900f) || SYSTEM::VDIST2(936.5542f, 1.1273f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(925.04f, 46.48f, 80.096f, Var0) <= 900f) || SYSTEM::VDIST2(924.507f, 60.3318f, 79.89629f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3746(int iParam0, int iParam1)//Position - 0x12C5CB
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3728(iParam0, &Var0);
		if (!__LIB_3__::func_932(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_84(__LIB_5__::func_702(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

void func_3755(int iParam0, int iParam1, var uParam2)//Position - 0x12C880
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = func_3662();
	switch (iParam1)
	{
		case 0:
			func_3728(iParam0, &(uParam2->f_4));
			uParam2->f_7 = { 1f, 1f, 2f };
			MISC::SET_BIT(&(uParam2->f_3), 4);
			MISC::SET_BIT(&(uParam2->f_3), 1);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, true))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				uParam2->f_18 = 0;
			}
			else
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
		case 1:
			func_3756(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14));
			uParam2->f_2 = 1;
			MISC::SET_BIT(&(uParam2->f_3), 0);
			MISC::SET_BIT(&(uParam2->f_3), 2);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			break;
	}
}

void func_3756(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x12C97E
{
	int iVar0;
	var uVar1;
	iVar0 = func_3662();
	switch (iParam0)
	{
		case 88:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == __LIB_3__::func_328())
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -5f, 0f) };
					*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, 6f, -1.5f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam2, &uVar1, false, false))
					{
						*uParam2 = { *uParam2, uParam2->f_1, uVar1 };
					}
					*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -6f, 2.5f) };
					*uParam4 = 1f;
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iVar0);
				}
			}
			break;
	}
}

void func_3768(var uParam0, int iParam1)//Position - 0x12CD17
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1284641/*func_3935*/;
			break;
		case 1:
			uParam0->f_30 = 1284561/*func_3934*/;
			break;
		case 2:
			uParam0->f_31 = 1284062/*func_3933*/;
			break;
		case 3:
			uParam0->f_34 = 1284012/*func_3932*/;
			break;
		case 4:
			uParam0->f_12 = 1283925/*func_3931*/;
			break;
		case 5:
			uParam0->f_11 = 1283915/*func_3930*/;
			break;
		case 37:
			uParam0->f_18 = 1283797/*func_3929*/;
			break;
		case 38:
			uParam0->f_9 = 1283675/*func_3928*/;
			break;
		case 6:
			uParam0->f_32 = 1283587/*func_3927*/;
			break;
		case 111:
			uParam0->f_35 = 1283573/*func_3926*/;
			break;
		case 11:
			uParam0->f_11 = 1283564/*func_3925*/;
			break;
		case 12:
			uParam0->f_33 = 1283185/*func_3922*/;
			break;
		case 14:
			uParam0->f_11 = 1283176/*func_3921*/;
			break;
		case 109:
			uParam0->f_56 = 1283168/*func_3920*/;
			break;
		case 79:
			*uParam0 = 1283144/*func_3919*/;
			break;
		case 13:
			uParam0->f_2 = 1283012/*func_3918*/;
			break;
		case 15:
			uParam0->f_2 = 1282730/*func_3916*/;
			break;
		case 75:
			uParam0->f_4 = 1282716/*func_3915*/;
			break;
		case 16:
			uParam0->f_5 = 1282198/*func_3913*/;
			break;
		case 108:
			uParam0->f_55 = 1278574/*func_3901*/;
			break;
		case 17:
			uParam0->f_17 = 1278038/*func_3899*/;
			break;
		case 19:
			uParam0->f_17 = 1278012/*func_3898*/;
			break;
		case 20:
			uParam0->f_3 = 1277925/*func_3897*/;
			break;
		case 21:
			uParam0->f_3 = 1277861/*func_3896*/;
			break;
		case 74:
			uParam0->f_53 = 1277681/*func_3895*/;
			break;
		case 22:
			uParam0->f_24 = 1277538/*func_3894*/;
			break;
		case 25:
			uParam0->f_23 = 1276914/*func_3892*/;
			break;
		case 30:
			uParam0->f_8 = 1276399/*func_3890*/;
			break;
		case 31:
			uParam0->f_39 = 1276114/*func_3889*/;
			break;
		case 33:
			uParam0->f_40 = 1275443/*func_3887*/;
			break;
		case 34:
			uParam0->f_41 = 1274179/*func_3886*/;
			break;
		case 36:
			uParam0->f_58 = 1274134/*func_3885*/;
			break;
		case 35:
			uParam0->f_42 = 1248091/*func_3877*/;
			break;
		case 45:
			uParam0->f_14 = 1248082/*func_3876*/;
			break;
		case 46:
			uParam0->f_14 = 1248073/*func_3875*/;
			break;
		case 110:
			uParam0->f_57 = 1248065/*func_3874*/;
			break;
		case 77:
			uParam0->f_13 = 1248042/*func_3873*/;
			break;
		case 47:
			uParam0->f_43 = 1247938/*func_3872*/;
			break;
		case 49:
			uParam0->f_8 = 1247897/*func_3871*/;
			break;
		case 50:
			*uParam0 = 1247683/*func_3868*/;
			break;
		case 51:
			*uParam0 = 1247614/*func_3867*/;
			break;
		case 52:
			uParam0->f_15 = 1247603/*func_3866*/;
			break;
		case 53:
			uParam0->f_13 = 1247465/*func_3865*/;
			break;
		case 54:
			uParam0->f_45 = 1247277/*func_3864*/;
			break;
		case 56:
			uParam0->f_46 = 1247268/*func_3863*/;
			break;
		case 57:
			uParam0->f_11 = 1247091/*func_3861*/;
			break;
		case 58:
			uParam0->f_13 = 1246953/*func_3860*/;
			break;
		case 64:
			uParam0->f_47 = 1246945/*func_3859*/;
			break;
		case 65:
			uParam0->f_21 = 1246109/*func_3857*/;
			break;
		case 66:
			uParam0->f_21 = 1246002/*func_3856*/;
			break;
		case 67:
			uParam0->f_21 = 1245938/*func_3855*/;
			break;
		case 68:
			*uParam0 = 1245450/*func_3854*/;
			break;
		case 69:
			*uParam0 = 1245441/*func_3853*/;
			break;
		case 70:
			uParam0->f_48 = 1245429/*func_3852*/;
			break;
		case 71:
			uParam0->f_49 = 1245420/*func_3851*/;
			break;
		case 107:
			uParam0->f_50 = 1245408/*func_3850*/;
			break;
		case 80:
			uParam0->f_7 = 1244702/*func_3846*/;
			break;
		case 84:
			uParam0->f_1 = 1244602/*func_3844*/;
			break;
		case 85:
			uParam0->f_1 = 1242618/*func_3841*/;
			break;
		case 87:
			uParam0->f_1 = 1240195/*func_3829*/;
			break;
		case 88:
			uParam0->f_1 = 1240186/*func_3828*/;
			break;
		case 96:
			uParam0->f_1 = 1240123/*func_3827*/;
			break;
		case 97:
			uParam0->f_1 = 1239802/*func_3824*/;
			break;
		case 98:
			uParam0->f_1 = 1235795/*func_3790*/;
			break;
		case 100:
			uParam0->f_22 = 1233519/*func_3772*/;
			break;
		case 78:
			uParam0->f_59 = 1233315/*func_3770*/;
			break;
		case 125:
			uParam0->f_19 = 1233299/*func_3769*/;
			break;
	}
}

int func_3790(int iParam0, int* iParam1)//Position - 0x12DB53
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_25__::func_129(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_330(&iVar0, &(iParam1->f_109), 12);
		__LIB_7__::func_568(iParam0, &(iParam1->f_109));
	}
	__LIB_31__::func_964(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_3__::func_936(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_7__::func_665(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

int func_3841(int iParam0, int* iParam1)//Position - 0x12F5FA
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
			func_330(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_241(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1412(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_3__::func_390(iParam0, &(iParam1->f_109));
	}
	__LIB_25__::func_130(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_31__::func_964(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

void func_3892(int iParam0, int iParam1)//Position - 0x137BF2
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
	if (__LIB_4__::func_984(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_83(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_555(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_555(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_309(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_309(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3893(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3893(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3893(int iParam0)//Position - 0x137E34
{
	__LIB_25__::func_309(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3936(var uParam0, int iParam1)//Position - 0x139A2A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1294152/*func_4000*/;
			break;
		case 1:
			uParam0->f_30 = 1294096/*func_3999*/;
			break;
		case 2:
			uParam0->f_31 = 1293877/*func_3998*/;
			break;
		case 3:
			uParam0->f_34 = 1293826/*func_3997*/;
			break;
		case 4:
			uParam0->f_12 = 1293793/*func_3996*/;
			break;
		case 6:
			uParam0->f_32 = 1293729/*func_3995*/;
			break;
		case 111:
			uParam0->f_35 = 1293720/*func_3994*/;
			break;
		case 79:
			*uParam0 = 1293696/*func_3993*/;
			break;
		case 11:
			uParam0->f_11 = 1293687/*func_3992*/;
			break;
		case 12:
			uParam0->f_33 = 1293595/*func_3991*/;
			break;
		case 14:
			uParam0->f_11 = 1293586/*func_3990*/;
			break;
		case 109:
			uParam0->f_56 = 1293578/*func_3989*/;
			break;
		case 15:
			uParam0->f_2 = 1293326/*func_3988*/;
			break;
		case 13:
			uParam0->f_2 = 1293317/*func_3987*/;
			break;
		case 75:
			uParam0->f_4 = 1293308/*func_3986*/;
			break;
		case 16:
			uParam0->f_5 = 1293299/*func_3985*/;
			break;
		case 108:
			uParam0->f_55 = 1293290/*func_3984*/;
			break;
		case 17:
			uParam0->f_17 = 1293246/*func_3983*/;
			break;
		case 19:
			uParam0->f_17 = 1293235/*func_3982*/;
			break;
		case 20:
			uParam0->f_3 = 1293188/*func_3981*/;
			break;
		case 21:
			uParam0->f_3 = 1293136/*func_3980*/;
			break;
		case 74:
			uParam0->f_53 = 1293080/*func_3979*/;
			break;
		case 22:
			uParam0->f_24 = 1292998/*func_3978*/;
			break;
		case 25:
			uParam0->f_23 = 1292031/*func_3973*/;
			break;
		case 30:
			uParam0->f_8 = 1291726/*func_3971*/;
			break;
		case 31:
			uParam0->f_39 = 1291695/*func_3970*/;
			break;
		case 33:
			uParam0->f_40 = 1291505/*func_3969*/;
			break;
		case 34:
			uParam0->f_41 = 1287502/*func_3966*/;
			break;
		case 36:
			uParam0->f_58 = 1287449/*func_3965*/;
			break;
		case 35:
			uParam0->f_42 = 1286258/*func_3963*/;
			break;
		case 45:
			uParam0->f_14 = 1286249/*func_3962*/;
			break;
		case 46:
			uParam0->f_14 = 1286240/*func_3961*/;
			break;
		case 110:
			uParam0->f_57 = 1286232/*func_3960*/;
			break;
		case 77:
			uParam0->f_13 = 1286221/*func_3959*/;
			break;
		case 47:
			uParam0->f_43 = 1286118/*func_3958*/;
			break;
		case 49:
			uParam0->f_8 = 1286093/*func_3957*/;
			break;
		case 50:
			*uParam0 = 1286055/*func_3956*/;
			break;
		case 51:
			*uParam0 = 1286046/*func_3955*/;
			break;
		case 52:
			uParam0->f_15 = 1286035/*func_3954*/;
			break;
		case 53:
			uParam0->f_13 = 1285954/*func_3953*/;
			break;
		case 54:
			uParam0->f_45 = 1285946/*func_3952*/;
			break;
		case 56:
			uParam0->f_46 = 1285937/*func_3951*/;
			break;
		case 57:
			uParam0->f_11 = 1285927/*func_3950*/;
			break;
		case 58:
			uParam0->f_13 = 1285720/*func_3949*/;
			break;
		case 64:
			uParam0->f_47 = 1285712/*func_3948*/;
			break;
		case 65:
			uParam0->f_21 = 1285704/*func_3947*/;
			break;
		case 66:
			uParam0->f_21 = 1285696/*func_3946*/;
			break;
		case 67:
			uParam0->f_21 = 1285688/*func_3945*/;
			break;
		case 68:
			*uParam0 = 1285679/*func_3944*/;
			break;
		case 69:
			*uParam0 = 1285670/*func_3943*/;
			break;
		case 70:
			uParam0->f_48 = 1285658/*func_3942*/;
			break;
		case 71:
			uParam0->f_49 = 1285649/*func_3941*/;
			break;
		case 107:
			uParam0->f_50 = 1285637/*func_3940*/;
			break;
		case 80:
			uParam0->f_7 = 1285628/*func_3939*/;
			break;
		case 73:
			uParam0->f_51 = 1285619/*func_3938*/;
			break;
		case 78:
			uParam0->f_59 = 1285611/*func_3937*/;
			break;
	}
}

void func_3973(int iParam0, int iParam1)//Position - 0x13B6FF
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
	if (__LIB_18__::func_763(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		__LIB_6__::func_439(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_18__::func_762(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_18__::func_762(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_6__::func_438(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3974(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_6__::func_438(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3974(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3974(int iParam0)//Position - 0x13B97C
{
	__LIB_18__::func_762(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4001(var uParam0, int iParam1)//Position - 0x13BF51
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1373735/*func_4166*/;
			break;
		case 1:
			uParam0->f_30 = 1373679/*func_4165*/;
			break;
		case 2:
			uParam0->f_31 = 1372134/*func_4164*/;
			break;
		case 3:
			uParam0->f_34 = 1372085/*func_4163*/;
			break;
		case 4:
			uParam0->f_12 = 1372052/*func_4162*/;
			break;
		case 6:
			uParam0->f_32 = 1371988/*func_4161*/;
			break;
		case 111:
			uParam0->f_35 = 1371965/*func_4160*/;
			break;
		case 79:
			*uParam0 = 1371941/*func_4159*/;
			break;
		case 37:
			uParam0->f_18 = 1371823/*func_4158*/;
			break;
		case 38:
			uParam0->f_9 = 1371756/*func_4157*/;
			break;
		case 11:
			uParam0->f_11 = 1371747/*func_4156*/;
			break;
		case 12:
			uParam0->f_33 = 1371402/*func_4154*/;
			break;
		case 14:
			uParam0->f_11 = 1371393/*func_4153*/;
			break;
		case 109:
			uParam0->f_56 = 1371385/*func_4152*/;
			break;
		case 15:
			uParam0->f_2 = 1366061/*func_4130*/;
			break;
		case 13:
			uParam0->f_2 = 1366052/*func_4129*/;
			break;
		case 75:
			uParam0->f_4 = 1366043/*func_4128*/;
			break;
		case 16:
			uParam0->f_5 = 1366018/*func_4127*/;
			break;
		case 108:
			uParam0->f_55 = 1357821/*func_4106*/;
			break;
		case 17:
			uParam0->f_17 = 1357239/*func_4105*/;
			break;
		case 19:
			uParam0->f_17 = 1357213/*func_4104*/;
			break;
		case 20:
			uParam0->f_3 = 1357152/*func_4103*/;
			break;
		case 21:
			uParam0->f_3 = 1357032/*func_4102*/;
			break;
		case 74:
			uParam0->f_53 = 1356976/*func_4101*/;
			break;
		case 22:
			uParam0->f_24 = 1356894/*func_4100*/;
			break;
		case 25:
			uParam0->f_23 = 1355922/*func_4095*/;
			break;
		case 30:
			uParam0->f_8 = 1355182/*func_4094*/;
			break;
		case 31:
			uParam0->f_39 = 1354912/*func_4093*/;
			break;
		case 33:
			uParam0->f_40 = 1353976/*func_4090*/;
			break;
		case 34:
			uParam0->f_41 = 1350632/*func_4089*/;
			break;
		case 36:
			uParam0->f_58 = 1350579/*func_4088*/;
			break;
		case 35:
			uParam0->f_42 = 1349896/*func_4086*/;
			break;
		case 45:
			uParam0->f_14 = 1349887/*func_4085*/;
			break;
		case 46:
			uParam0->f_14 = 1349878/*func_4084*/;
			break;
		case 110:
			uParam0->f_57 = 1349435/*func_4083*/;
			break;
		case 77:
			uParam0->f_13 = 1349424/*func_4082*/;
			break;
		case 47:
			uParam0->f_43 = 1349321/*func_4081*/;
			break;
		case 49:
			uParam0->f_8 = 1349296/*func_4080*/;
			break;
		case 50:
			*uParam0 = 1349258/*func_4079*/;
			break;
		case 51:
			*uParam0 = 1349234/*func_4078*/;
			break;
		case 52:
			uParam0->f_15 = 1349223/*func_4077*/;
			break;
		case 53:
			uParam0->f_13 = 1349144/*func_4076*/;
			break;
		case 54:
			uParam0->f_45 = 1349136/*func_4075*/;
			break;
		case 56:
			uParam0->f_46 = 1349127/*func_4074*/;
			break;
		case 57:
			uParam0->f_11 = 1349117/*func_4073*/;
			break;
		case 58:
			uParam0->f_13 = 1348888/*func_4072*/;
			break;
		case 64:
			uParam0->f_47 = 1302562/*func_4039*/;
			break;
		case 65:
			uParam0->f_21 = 1301424/*func_4036*/;
			break;
		case 66:
			uParam0->f_21 = 1301201/*func_4034*/;
			break;
		case 67:
			uParam0->f_21 = 1300306/*func_4030*/;
			break;
		case 68:
			*uParam0 = 1299761/*func_4029*/;
			break;
		case 69:
			*uParam0 = 1299752/*func_4028*/;
			break;
		case 70:
			uParam0->f_48 = 1299740/*func_4027*/;
			break;
		case 71:
			uParam0->f_49 = 1299731/*func_4026*/;
			break;
		case 107:
			uParam0->f_50 = 1299719/*func_4025*/;
			break;
		case 80:
			uParam0->f_7 = 1297625/*func_4016*/;
			break;
		case 73:
			uParam0->f_51 = 1295857/*func_4008*/;
			break;
		case 78:
			uParam0->f_59 = 1295324/*func_4002*/;
			break;
	}
}

int func_4008(int iParam0, var uParam1)//Position - 0x13C5F1
{
	int iVar0;
	int iVar1;
	struct<101> Var2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	if (!__LIB_0__::func_584(joaat("trailerlarge")))
	{
		return 0;
	}
	if (!__LIB_0__::func_584(__LIB_3__::func_433(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (!__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		return 0;
	}
	iVar0 = Global_2815059.f_304[1];
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !__LIB_0__::func_86(uParam1->f_22.f_250))
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_22.f_250, 0f, 0f, 0f);
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((uParam1->f_22.f_250 - 100f), (uParam1->f_22.f_250.f_1 - 100f), (uParam1->f_22.f_250 + 100f), (uParam1->f_22.f_250.f_1 + 100f));
	if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				Var2.f_9 = 49;
				Var2.f_59 = 2;
				Var2.f_78 = -1;
				Var2.f_79 = -1;
				Var2.f_96 = -1;
				Var2.f_97 = 1;
				Var2.f_99 = 132;
				Var2.f_100 = -1;
				iVar3 = PLAYER::PLAYER_PED_ID();
				__LIB_3__::func_344(uParam1->f_22.f_250, 25f, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_22.f_105, false))
				{
					VEHICLE::SET_TRAILER_LEGS_LOWERED(uParam1->f_22.f_105);
				}
				switch (uParam1->f_22.f_217)
				{
					case 0:
						if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105))
						{
							if (__LIB_3__::func_432())
							{
								uParam1->f_22.f_250 = { 842.616f, -3239.21f, -96.8731f };
								uParam1->f_22.f_253 = 62.260525f;
								uParam1->f_22.f_189[0 /*3*/] = { 1.47961f, 0.00453185f, 62.2534f };
							}
							else if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
							{
								uParam1->f_22.f_250 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
								uParam1->f_22.f_253 = ENTITY::GET_ENTITY_HEADING(iVar0);
								uParam1->f_22.f_189[0 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
							}
							uParam1->f_22.f_105 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), uParam1->f_22.f_250, uParam1->f_22.f_250.f_1, (uParam1->f_22.f_250.f_2 - 70f), uParam1->f_22.f_253, false, false, false);
							ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_22.f_105, true);
							ENTITY::SET_ENTITY_COLLISION(uParam1->f_22.f_105, false, false);
							__LIB_25__::func_536(iVar0, &Var2);
							func_334(uParam1->f_22.f_105, &Var2, 1, 1, 0);
						}
						else
						{
							uParam1->f_22.f_217 = 1;
						}
						break;
					case 1:
						if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105))
						{
							if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, true, false);
								NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false);
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_GR_MOC_Drive_Up_Ramp_Scene"))
								{
									AUDIO::START_AUDIO_SCENE("DLC_GR_MOC_Drive_Up_Ramp_Scene");
								}
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_22.f_105, false))
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_22.f_105, uParam1->f_22.f_250, false, false, true);
									ENTITY::SET_ENTITY_HEADING(uParam1->f_22.f_105, uParam1->f_22.f_253);
									ENTITY::SET_ENTITY_ROTATION(uParam1->f_22.f_105, uParam1->f_22.f_189[0 /*3*/], 2, true);
									ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_22.f_105, false);
									ENTITY::SET_ENTITY_COLLISION(uParam1->f_22.f_105, true, false);
									ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_22.f_105, true);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Enter_Car_Ramp_Deploy", uParam1->f_22.f_105, "DLC_GR_MOC_Enter_Exit_Sounds", false, 0);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam1->f_22.f_105, 5, false, false);
									VEHICLE::SET_TRAILER_LEGS_LOWERED(uParam1->f_22.f_105);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam1->f_22.f_105);
									__LIB_8__::func_620(iParam0, uParam1, 0, 0);
									uParam1->f_22.f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
									CAM::SET_CAM_PARAMS(uParam1->f_22.f_11, uParam1->f_22.f_13, uParam1->f_22.f_16, uParam1->f_22.f_19, 0, 1, 1, 2);
									CAM::SET_CAM_FAR_CLIP(uParam1->f_22.f_11, 1000f);
									CAM::SHAKE_CAM(uParam1->f_22.f_11, "HAND_SHAKE", uParam1->f_22.f_40);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_22.f_250, uParam1->f_22.f_253, 0f, -16.5f, 0f) };
									MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &fVar5, false, false);
									MISC::CLEAR_AREA(Var4.f_0, Var4.f_1, fVar5, 5f, false, false, false, false);
									GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Var4.f_0, Var4.f_1, fVar5, 5f);
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_22.f_105, uParam1->f_22.f_250, false, false, true);
									if (__LIB_3__::func_432())
									{
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var4, false, false, true);
									}
									else
									{
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var4.f_0, Var4.f_1, fVar5, false, false, true);
									}
									ENTITY::SET_ENTITY_HEADING(iVar1, uParam1->f_22.f_253);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1, 0f);
									__LIB_3__::func_431();
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iVar1);
									uParam1->f_22.f_217 = 2;
								}
							}
						}
						break;
					case 2:
						if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_22.f_105, false) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
						{
							VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iVar1, 0f);
							VEHICLE::SET_VEHICLE_MAX_SPEED(iVar1, -1f);
							VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(iVar1);
							__LIB_7__::func_578(iVar1, &fVar6);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Enter_Car_Ramp_Hits_Ground", uParam1->f_22.f_105, "DLC_GR_MOC_Enter_Exit_Sounds", false, 0);
							__LIB_3__::func_430(&iVar3, &iVar1, 3000, fVar6, 32);
							uParam1->f_22.f_217 = 0;
							__LIB_3__::func_429(0);
							__LIB_3__::func_428(0);
							return 1;
						}
						break;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
			}
		}
	}
	return 0;
}

void func_4095(int iParam0, int iParam1)//Position - 0x14B092
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
	if (__LIB_25__::func_439(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_555(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_555(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_968(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_968(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_617(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4096(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_617(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4096(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4096(int iParam0)//Position - 0x14B325
{
	__LIB_25__::func_968(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4167(var uParam0, int iParam1)//Position - 0x14F630
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1409708/*func_4340*/;
			break;
		case 1:
			uParam0->f_30 = 1409592/*func_4339*/;
			break;
		case 2:
			uParam0->f_31 = 1408361/*func_4336*/;
			break;
		case 3:
			uParam0->f_34 = 1408291/*func_4335*/;
			break;
		case 4:
			uParam0->f_12 = 1408118/*func_4334*/;
			break;
		case 6:
			uParam0->f_32 = 1407994/*func_4333*/;
			break;
		case 106:
			uParam0->f_52 = 1407771/*func_4331*/;
			break;
		case 111:
			uParam0->f_35 = 1407757/*func_4330*/;
			break;
		case 79:
			*uParam0 = 1407733/*func_4329*/;
			break;
		case 37:
			uParam0->f_18 = 1407615/*func_4328*/;
			break;
		case 38:
			uParam0->f_9 = 1407377/*func_4325*/;
			break;
		case 11:
			uParam0->f_11 = 1407368/*func_4324*/;
			break;
		case 12:
			uParam0->f_33 = 1405664/*func_4322*/;
			break;
		case 14:
			uParam0->f_11 = 1405655/*func_4321*/;
			break;
		case 109:
			uParam0->f_56 = 1405647/*func_4320*/;
			break;
		case 15:
			uParam0->f_2 = 1405141/*func_4316*/;
			break;
		case 13:
			uParam0->f_2 = 1405102/*func_4315*/;
			break;
		case 44:
			*uParam0 = 1405093/*func_4314*/;
			break;
		case 75:
			uParam0->f_4 = 1405084/*func_4313*/;
			break;
		case 16:
			uParam0->f_5 = 1404616/*func_4308*/;
			break;
		case 108:
			uParam0->f_55 = 1402577/*func_4304*/;
			break;
		case 17:
			uParam0->f_17 = 1400443/*func_4296*/;
			break;
		case 19:
			uParam0->f_17 = 1400417/*func_4295*/;
			break;
		case 20:
			uParam0->f_3 = 1400333/*func_4294*/;
			break;
		case 21:
			uParam0->f_3 = 1400233/*func_4293*/;
			break;
		case 74:
			uParam0->f_53 = 1400066/*func_4292*/;
			break;
		case 22:
			uParam0->f_24 = 1399963/*func_4291*/;
			break;
		case 25:
			uParam0->f_23 = 1399311/*func_4289*/;
			break;
		case 30:
			uParam0->f_8 = 1398811/*func_4286*/;
			break;
		case 31:
			uParam0->f_39 = 1398518/*func_4285*/;
			break;
		case 33:
			uParam0->f_40 = 1397520/*func_4281*/;
			break;
		case 32:
			*uParam0 = 1397416/*func_4280*/;
			break;
		case 34:
			uParam0->f_41 = 1395271/*func_4279*/;
			break;
		case 35:
			uParam0->f_42 = 1308010/*func_4063*/;
			break;
		case 36:
			uParam0->f_58 = 1395211/*func_4278*/;
			break;
		case 45:
			uParam0->f_14 = 1395202/*func_4277*/;
			break;
		case 46:
			uParam0->f_14 = 1395193/*func_4276*/;
			break;
		case 110:
			uParam0->f_57 = 1394927/*func_4275*/;
			break;
		case 77:
			uParam0->f_13 = 1394916/*func_4274*/;
			break;
		case 47:
			uParam0->f_43 = 1394776/*func_4273*/;
			break;
		case 49:
			uParam0->f_8 = 1394735/*func_4272*/;
			break;
		case 50:
			*uParam0 = 1394538/*func_4269*/;
			break;
		case 51:
			*uParam0 = 1394454/*func_4268*/;
			break;
		case 52:
			uParam0->f_15 = 1394443/*func_4267*/;
			break;
		case 53:
			uParam0->f_13 = 1394161/*func_4266*/;
			break;
		case 54:
			uParam0->f_45 = 1394153/*func_4265*/;
			break;
		case 56:
			uParam0->f_46 = 1394144/*func_4264*/;
			break;
		case 57:
			uParam0->f_11 = 1394083/*func_4263*/;
			break;
		case 58:
			uParam0->f_13 = 1393801/*func_4262*/;
			break;
		case 64:
			uParam0->f_47 = 1391884/*func_4253*/;
			break;
		case 65:
			uParam0->f_21 = 1391841/*func_4252*/;
			break;
		case 66:
			uParam0->f_21 = 1391138/*func_4249*/;
			break;
		case 67:
			uParam0->f_21 = 1390054/*func_4241*/;
			break;
		case 68:
			*uParam0 = 1389463/*func_4239*/;
			break;
		case 69:
			*uParam0 = 1389454/*func_4238*/;
			break;
		case 70:
			uParam0->f_48 = 1389442/*func_4237*/;
			break;
		case 71:
			uParam0->f_49 = 1389433/*func_4236*/;
			break;
		case 107:
			uParam0->f_50 = 1389421/*func_4235*/;
			break;
		case 80:
			uParam0->f_7 = 1386747/*func_4223*/;
			break;
		case 84:
			uParam0->f_1 = 1384901/*func_4212*/;
			break;
		case 85:
			uParam0->f_1 = 1382567/*func_4206*/;
			break;
		case 87:
			uParam0->f_1 = 1378342/*func_4185*/;
			break;
		case 88:
			uParam0->f_1 = 1378333/*func_4184*/;
			break;
		case 90:
			uParam0->f_1 = 1378290/*func_4183*/;
			break;
		case 91:
			uParam0->f_1 = 1377989/*func_4181*/;
			break;
		case 92:
			uParam0->f_1 = 1377226/*func_4179*/;
			break;
		case 94:
			uParam0->f_1 = 1375724/*func_4178*/;
			break;
		case 102:
			uParam0->f_1 = 1375156/*func_4172*/;
			break;
		case 103:
			uParam0->f_22 = 1375148/*func_4171*/;
			break;
		case 104:
			uParam0->f_1 = 1375073/*func_4170*/;
			break;
		case 78:
			uParam0->f_59 = 1374999/*func_4169*/;
			break;
		case 125:
			uParam0->f_19 = 1374975/*func_4168*/;
			break;
	}
}

int func_4179(var uParam0, var uParam1)//Position - 0x1503CA
{
	__LIB_25__::func_103(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_25__::func_103(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_330(&(uParam1->f_248), &(uParam1->f_109), 14);
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
		__LIB_2__::func_818(&(uParam1->f_109), 1);
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
	__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_4212(int iParam0, var uParam1)//Position - 0x1521C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_3__::func_478(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_2__::func_399() == 1)
		{
			__LIB_7__::func_394(0);
		}
	}
	switch (__LIB_2__::func_399())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_1412(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_7__::func_673(iParam0, &(uParam1->f_140[0]));
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
								func_330(&iVar2, &(uParam1->f_109), 14);
								func_241(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_330(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_330(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_330(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_241(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_7__::func_673(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_7__::func_673(iParam0, &(uParam1->f_109.f_12));
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
			__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_7__::func_676(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_18__::func_706(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_2__::func_399() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_1412(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_3__::func_493(&(uParam1->f_109.f_1), 5f);
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
		if (!__LIB_7__::func_587(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_3__::func_491(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_4289(int iParam0, int iParam1)//Position - 0x155A0F
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
	if (__LIB_7__::func_680(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_3__::func_84(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_555(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_555(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_444(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_444(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4290(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4290(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4290(int iParam0)//Position - 0x155C6D
{
	__LIB_25__::func_444(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4341(var uParam0, int iParam1)//Position - 0x1582B5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1451708/*func_4417*/;
			break;
		case 1:
			uParam0->f_30 = 1449390/*func_4412*/;
			break;
		case 2:
			uParam0->f_31 = 1449327/*func_4410*/;
			break;
		case 3:
			uParam0->f_34 = 1449271/*func_4409*/;
			break;
		case 4:
			uParam0->f_12 = 1448556/*func_4408*/;
			break;
		case 6:
			uParam0->f_32 = 1448548/*func_4407*/;
			break;
		case 111:
			uParam0->f_35 = 1448539/*func_4406*/;
			break;
		case 79:
			*uParam0 = 1448515/*func_4405*/;
			break;
		case 11:
			uParam0->f_11 = 1448506/*func_4404*/;
			break;
		case 12:
			uParam0->f_33 = 1446678/*func_4401*/;
			break;
		case 14:
			uParam0->f_11 = 1446669/*func_4400*/;
			break;
		case 109:
			uParam0->f_56 = 1446661/*func_4399*/;
			break;
		case 13:
			uParam0->f_2 = 1446652/*func_4398*/;
			break;
		case 15:
			uParam0->f_2 = 1446643/*func_4397*/;
			break;
		case 75:
			uParam0->f_4 = 1446634/*func_4396*/;
			break;
		case 16:
			uParam0->f_5 = 1446625/*func_4395*/;
			break;
		case 108:
			uParam0->f_55 = 1446616/*func_4394*/;
			break;
		case 17:
			uParam0->f_17 = 1446591/*func_4393*/;
			break;
		case 19:
			uParam0->f_17 = 1446580/*func_4392*/;
			break;
		case 20:
			uParam0->f_3 = 1446571/*func_4391*/;
			break;
		case 21:
			uParam0->f_3 = 1446562/*func_4390*/;
			break;
		case 74:
			uParam0->f_53 = 1446553/*func_4389*/;
			break;
		case 22:
			uParam0->f_24 = 1446545/*func_4388*/;
			break;
		case 25:
			uParam0->f_23 = 1446537/*func_4387*/;
			break;
		case 30:
			uParam0->f_8 = 1445376/*func_4385*/;
			break;
		case 31:
			uParam0->f_39 = 1445365/*func_4384*/;
			break;
		case 33:
			uParam0->f_40 = 1445337/*func_4383*/;
			break;
		case 34:
			uParam0->f_41 = 1445328/*func_4382*/;
			break;
		case 36:
			uParam0->f_58 = 1445283/*func_4381*/;
			break;
		case 35:
			uParam0->f_42 = 1411601/*func_4378*/;
			break;
		case 45:
			uParam0->f_14 = 1411592/*func_4377*/;
			break;
		case 46:
			uParam0->f_14 = 1411583/*func_4376*/;
			break;
		case 110:
			uParam0->f_57 = 1411575/*func_4375*/;
			break;
		case 77:
			uParam0->f_13 = 1411564/*func_4374*/;
			break;
		case 47:
			uParam0->f_43 = 1411556/*func_4373*/;
			break;
		case 49:
			uParam0->f_8 = 1411547/*func_4372*/;
			break;
		case 50:
			*uParam0 = 1411227/*func_4365*/;
			break;
		case 51:
			*uParam0 = 1411198/*func_4364*/;
			break;
		case 52:
			uParam0->f_15 = 1411167/*func_4363*/;
			break;
		case 53:
			uParam0->f_13 = 1411133/*func_4362*/;
			break;
		case 54:
			uParam0->f_45 = 1411089/*func_4361*/;
			break;
		case 56:
			uParam0->f_46 = 1411060/*func_4360*/;
			break;
		case 57:
			uParam0->f_11 = 1411051/*func_4359*/;
			break;
		case 58:
			uParam0->f_13 = 1410994/*func_4357*/;
			break;
		case 64:
			uParam0->f_47 = 1410986/*func_4356*/;
			break;
		case 65:
			uParam0->f_21 = 1410978/*func_4355*/;
			break;
		case 66:
			uParam0->f_21 = 1410970/*func_4354*/;
			break;
		case 67:
			uParam0->f_21 = 1410962/*func_4353*/;
			break;
		case 68:
			*uParam0 = 1410936/*func_4352*/;
			break;
		case 69:
			*uParam0 = 1410910/*func_4351*/;
			break;
		case 70:
			uParam0->f_48 = 1410898/*func_4350*/;
			break;
		case 71:
			uParam0->f_49 = 1410889/*func_4349*/;
			break;
		case 107:
			uParam0->f_50 = 1410877/*func_4348*/;
			break;
		case 80:
			uParam0->f_7 = 1410868/*func_4347*/;
			break;
		case 78:
			uParam0->f_59 = 1410860/*func_4346*/;
			break;
		case 126:
			*uParam0 = 1410677/*func_4342*/;
			break;
	}
}

void func_4419(var uParam0, int iParam1)//Position - 0x162BAD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1495570/*func_4495*/;
			break;
		case 1:
			uParam0->f_30 = 1495260/*func_4494*/;
			break;
		case 2:
			uParam0->f_31 = 1490320/*func_4488*/;
			break;
		case 3:
			uParam0->f_34 = 1490291/*func_4487*/;
			break;
		case 4:
			uParam0->f_12 = 1490097/*func_4486*/;
			break;
		case 6:
			uParam0->f_32 = 1489747/*func_4485*/;
			break;
		case 111:
			uParam0->f_35 = 1489605/*func_4483*/;
			break;
		case 79:
			*uParam0 = 1489581/*func_4482*/;
			break;
		case 37:
			uParam0->f_18 = 1489045/*func_4480*/;
			break;
		case 38:
			uParam0->f_9 = 1488940/*func_4479*/;
			break;
		case 11:
			uParam0->f_11 = 1488931/*func_4478*/;
			break;
		case 12:
			uParam0->f_33 = 1488826/*func_4476*/;
			break;
		case 14:
			uParam0->f_11 = 1488817/*func_4475*/;
			break;
		case 109:
			uParam0->f_56 = 1488809/*func_4474*/;
			break;
		case 13:
			uParam0->f_2 = 1488800/*func_4473*/;
			break;
		case 44:
			*uParam0 = 1488791/*func_4472*/;
			break;
		case 15:
			uParam0->f_2 = 1488502/*func_4471*/;
			break;
		case 75:
			uParam0->f_4 = 1488493/*func_4470*/;
			break;
		case 16:
			uParam0->f_5 = 1488409/*func_4469*/;
			break;
		case 108:
			uParam0->f_55 = 1488400/*func_4468*/;
			break;
		case 17:
			uParam0->f_17 = 1487780/*func_4466*/;
			break;
		case 19:
			uParam0->f_17 = 1487580/*func_4465*/;
			break;
		case 20:
			uParam0->f_3 = 1487516/*func_4464*/;
			break;
		case 21:
			uParam0->f_3 = 1487456/*func_4463*/;
			break;
		case 74:
			uParam0->f_53 = 1487447/*func_4462*/;
			break;
		case 22:
			uParam0->f_24 = 1487206/*func_4461*/;
			break;
		case 25:
			uParam0->f_23 = 1486833/*func_4458*/;
			break;
		case 30:
			uParam0->f_8 = 1486695/*func_4457*/;
			break;
		case 31:
			uParam0->f_39 = 1486255/*func_4455*/;
			break;
		case 33:
			uParam0->f_40 = 1485590/*func_4450*/;
			break;
		case 34:
			uParam0->f_41 = 1483012/*func_4449*/;
			break;
		case 36:
			uParam0->f_58 = 1482967/*func_4448*/;
			break;
		case 35:
			uParam0->f_42 = 1457124/*func_4447*/;
			break;
		case 45:
			uParam0->f_14 = 1456896/*func_4446*/;
			break;
		case 46:
			uParam0->f_14 = 1456720/*func_4445*/;
			break;
		case 110:
			uParam0->f_57 = 1456712/*func_4444*/;
			break;
		case 77:
			uParam0->f_13 = 1456701/*func_4443*/;
			break;
		case 47:
			uParam0->f_43 = 1456459/*func_4442*/;
			break;
		case 49:
			uParam0->f_8 = 1456427/*func_4441*/;
			break;
		case 50:
			*uParam0 = 1456361/*func_4440*/;
			break;
		case 51:
			*uParam0 = 1456337/*func_4439*/;
			break;
		case 52:
			uParam0->f_15 = 1456154/*func_4438*/;
			break;
		case 53:
			uParam0->f_13 = 1455559/*func_4436*/;
			break;
		case 54:
			uParam0->f_45 = 1455322/*func_4435*/;
			break;
		case 56:
			uParam0->f_46 = 1455313/*func_4434*/;
			break;
		case 57:
			uParam0->f_11 = 1455248/*func_4433*/;
			break;
		case 58:
			uParam0->f_13 = 1454826/*func_4432*/;
			break;
		case 64:
			uParam0->f_47 = 1454818/*func_4431*/;
			break;
		case 65:
			uParam0->f_21 = 1454810/*func_4430*/;
			break;
		case 66:
			uParam0->f_21 = 1454750/*func_4429*/;
			break;
		case 67:
			uParam0->f_21 = 1454732/*func_4428*/;
			break;
		case 68:
			*uParam0 = 1454723/*func_4427*/;
			break;
		case 69:
			*uParam0 = 1454714/*func_4426*/;
			break;
		case 70:
			uParam0->f_48 = 1454210/*func_4425*/;
			break;
		case 71:
			uParam0->f_49 = 1454062/*func_4424*/;
			break;
		case 107:
			uParam0->f_50 = 1454017/*func_4423*/;
			break;
		case 80:
			uParam0->f_7 = 1454008/*func_4422*/;
			break;
		case 78:
			uParam0->f_59 = 1454000/*func_4421*/;
			break;
		case 125:
			uParam0->f_19 = 1453984/*func_4420*/;
			break;
	}
}

void func_4458(int iParam0, int iParam1)//Position - 0x16AFF1
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_359(PLAYER::PLAYER_ID()) && __LIB_7__::func_959(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_553(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_7__::func_684())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_555(bVar2))
			{
				Var1 = { __LIB_1__::func_265(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_807(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		if (__LIB_2__::func_444(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_18__::func_658(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
	}
}

void func_4496(var uParam0, int iParam1)//Position - 0x16D21B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1530681/*func_4628*/;
			break;
		case 1:
			uParam0->f_30 = 1530571/*func_4627*/;
			break;
		case 2:
			uParam0->f_31 = 1528117/*func_4622*/;
			break;
		case 3:
			uParam0->f_34 = 1528088/*func_4621*/;
			break;
		case 4:
			uParam0->f_12 = 1527928/*func_4620*/;
			break;
		case 6:
			uParam0->f_32 = 1527810/*func_4619*/;
			break;
		case 111:
			uParam0->f_35 = 1527593/*func_4616*/;
			break;
		case 79:
			*uParam0 = 1527569/*func_4615*/;
			break;
		case 37:
			uParam0->f_18 = 1527451/*func_4614*/;
			break;
		case 38:
			uParam0->f_9 = 1527300/*func_4611*/;
			break;
		case 11:
			uParam0->f_11 = 1527291/*func_4610*/;
			break;
		case 12:
			uParam0->f_33 = 1526288/*func_4607*/;
			break;
		case 14:
			uParam0->f_11 = 1526279/*func_4606*/;
			break;
		case 109:
			uParam0->f_56 = 1526271/*func_4605*/;
			break;
		case 13:
			uParam0->f_2 = 1526262/*func_4604*/;
			break;
		case 15:
			uParam0->f_2 = 1526108/*func_4603*/;
			break;
		case 75:
			uParam0->f_4 = 1526099/*func_4602*/;
			break;
		case 16:
			uParam0->f_5 = 1526011/*func_4601*/;
			break;
		case 108:
			uParam0->f_55 = 1525224/*func_4595*/;
			break;
		case 17:
			uParam0->f_17 = 1524596/*func_4591*/;
			break;
		case 19:
			uParam0->f_17 = 1524570/*func_4590*/;
			break;
		case 20:
			uParam0->f_3 = 1524531/*func_4589*/;
			break;
		case 21:
			uParam0->f_3 = 1524471/*func_4588*/;
			break;
		case 74:
			uParam0->f_53 = 1524462/*func_4587*/;
			break;
		case 22:
			uParam0->f_24 = 1524409/*func_4586*/;
			break;
		case 25:
			uParam0->f_23 = 1524105/*func_4585*/;
			break;
		case 30:
			uParam0->f_8 = 1523982/*func_4584*/;
			break;
		case 31:
			uParam0->f_39 = 1523762/*func_4583*/;
			break;
		case 33:
			uParam0->f_40 = 1523475/*func_4582*/;
			break;
		case 34:
			uParam0->f_41 = 1523069/*func_4581*/;
			break;
		case 36:
			uParam0->f_58 = 1523024/*func_4580*/;
			break;
		case 35:
			uParam0->f_42 = 1505423/*func_4579*/;
			break;
		case 45:
			uParam0->f_14 = 1505414/*func_4578*/;
			break;
		case 46:
			uParam0->f_14 = 1505330/*func_4577*/;
			break;
		case 110:
			uParam0->f_57 = 1505322/*func_4576*/;
			break;
		case 77:
			uParam0->f_13 = 1505299/*func_4575*/;
			break;
		case 47:
			uParam0->f_43 = 1505247/*func_4574*/;
			break;
		case 49:
			uParam0->f_8 = 1505215/*func_4573*/;
			break;
		case 50:
			*uParam0 = 1505037/*func_4572*/;
			break;
		case 51:
			*uParam0 = 1504940/*func_4571*/;
			break;
		case 52:
			uParam0->f_15 = 1504929/*func_4570*/;
			break;
		case 53:
			uParam0->f_13 = 1504614/*func_4568*/;
			break;
		case 54:
			uParam0->f_45 = 1503750/*func_4561*/;
			break;
		case 56:
			uParam0->f_46 = 1503741/*func_4560*/;
			break;
		case 57:
			uParam0->f_11 = 1498934/*func_4523*/;
			break;
		case 58:
			uParam0->f_13 = 1498920/*func_4522*/;
			break;
		case 64:
			uParam0->f_47 = 1497412/*func_4508*/;
			break;
		case 65:
			uParam0->f_21 = 1497404/*func_4507*/;
			break;
		case 66:
			uParam0->f_21 = 1497353/*func_4506*/;
			break;
		case 67:
			uParam0->f_21 = 1497325/*func_4505*/;
			break;
		case 68:
			*uParam0 = 1497316/*func_4504*/;
			break;
		case 69:
			*uParam0 = 1497307/*func_4503*/;
			break;
		case 70:
			uParam0->f_48 = 1497023/*func_4502*/;
			break;
		case 71:
			uParam0->f_49 = 1496927/*func_4501*/;
			break;
		case 107:
			uParam0->f_50 = 1496915/*func_4500*/;
			break;
		case 80:
			uParam0->f_7 = 1496729/*func_4499*/;
			break;
		case 78:
			uParam0->f_59 = 1496557/*func_4497*/;
			break;
	}
}

void func_4585(int iParam0, int iParam1)//Position - 0x174189
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_2__::func_192(PLAYER::PLAYER_ID()) && __LIB_4__::func_51(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_600(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_7__::func_684())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_555(bVar2))
			{
				Var1 = { __LIB_1__::func_265(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_807(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		if (__LIB_2__::func_444(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_18__::func_658(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
	}
}

void func_4629(var uParam0, int iParam1)//Position - 0x175B42
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1558472/*func_4701*/;
			break;
		case 1:
			uParam0->f_30 = 1558326/*func_4700*/;
			break;
		case 2:
			uParam0->f_31 = 1553136/*func_4694*/;
			break;
		case 3:
			uParam0->f_34 = 1553107/*func_4693*/;
			break;
		case 4:
			uParam0->f_12 = 1552697/*func_4691*/;
			break;
		case 6:
			uParam0->f_32 = 1552527/*func_4690*/;
			break;
		case 111:
			uParam0->f_35 = 1552132/*func_4687*/;
			break;
		case 79:
			*uParam0 = 1552108/*func_4686*/;
			break;
		case 11:
			uParam0->f_11 = 1552099/*func_4685*/;
			break;
		case 12:
			uParam0->f_33 = 1552004/*func_4683*/;
			break;
		case 14:
			uParam0->f_11 = 1551995/*func_4682*/;
			break;
		case 109:
			uParam0->f_56 = 1551987/*func_4681*/;
			break;
		case 13:
			uParam0->f_2 = 1551978/*func_4680*/;
			break;
		case 15:
			uParam0->f_2 = 1551693/*func_4677*/;
			break;
		case 75:
			uParam0->f_4 = 1551684/*func_4676*/;
			break;
		case 16:
			uParam0->f_5 = 1551596/*func_4675*/;
			break;
		case 108:
			uParam0->f_55 = 1551587/*func_4674*/;
			break;
		case 17:
			uParam0->f_17 = 1551334/*func_4673*/;
			break;
		case 19:
			uParam0->f_17 = 1551308/*func_4672*/;
			break;
		case 20:
			uParam0->f_3 = 1551299/*func_4671*/;
			break;
		case 21:
			uParam0->f_3 = 1551290/*func_4670*/;
			break;
		case 74:
			uParam0->f_53 = 1551281/*func_4669*/;
			break;
		case 22:
			uParam0->f_24 = 1551273/*func_4668*/;
			break;
		case 25:
			uParam0->f_23 = 1551265/*func_4667*/;
			break;
		case 30:
			uParam0->f_8 = 1551142/*func_4666*/;
			break;
		case 31:
			uParam0->f_39 = 1550896/*func_4665*/;
			break;
		case 33:
			uParam0->f_40 = 1550640/*func_4664*/;
			break;
		case 34:
			uParam0->f_41 = 1548487/*func_4662*/;
			break;
		case 36:
			uParam0->f_58 = 1548442/*func_4661*/;
			break;
		case 35:
			uParam0->f_42 = 1533992/*func_4660*/;
			break;
		case 45:
			uParam0->f_14 = 1533983/*func_4659*/;
			break;
		case 46:
			uParam0->f_14 = 1533974/*func_4658*/;
			break;
		case 110:
			uParam0->f_57 = 1533966/*func_4657*/;
			break;
		case 77:
			uParam0->f_13 = 1533955/*func_4656*/;
			break;
		case 47:
			uParam0->f_43 = 1533903/*func_4655*/;
			break;
		case 49:
			uParam0->f_8 = 1533871/*func_4654*/;
			break;
		case 50:
			*uParam0 = 1533742/*func_4653*/;
			break;
		case 51:
			*uParam0 = 1533718/*func_4652*/;
			break;
		case 52:
			uParam0->f_15 = 1533707/*func_4651*/;
			break;
		case 53:
			uParam0->f_13 = 1533056/*func_4649*/;
			break;
		case 54:
			uParam0->f_45 = 1532420/*func_4645*/;
			break;
		case 56:
			uParam0->f_46 = 1532411/*func_4644*/;
			break;
		case 57:
			uParam0->f_11 = 1532344/*func_4643*/;
			break;
		case 58:
			uParam0->f_13 = 1532330/*func_4642*/;
			break;
		case 64:
			uParam0->f_47 = 1531951/*func_4641*/;
			break;
		case 65:
			uParam0->f_21 = 1531876/*func_4639*/;
			break;
		case 66:
			uParam0->f_21 = 1531825/*func_4638*/;
			break;
		case 67:
			uParam0->f_21 = 1531807/*func_4637*/;
			break;
		case 68:
			*uParam0 = 1531798/*func_4636*/;
			break;
		case 69:
			*uParam0 = 1531789/*func_4635*/;
			break;
		case 70:
			uParam0->f_48 = 1531672/*func_4634*/;
			break;
		case 71:
			uParam0->f_49 = 1531663/*func_4633*/;
			break;
		case 107:
			uParam0->f_50 = 1531651/*func_4632*/;
			break;
		case 80:
			uParam0->f_7 = 1531642/*func_4631*/;
			break;
		case 78:
			uParam0->f_59 = 1531634/*func_4630*/;
			break;
	}
}

void func_4702(var uParam0, int iParam1)//Position - 0x17C7D1
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1558939/*func_4709*/;
			break;
		case 97:
			uParam0->f_1 = 1558930/*func_4708*/;
			break;
		case 98:
			uParam0->f_1 = 1558921/*func_4707*/;
			break;
		case 99:
			uParam0->f_1 = 1558761/*func_4706*/;
			break;
		case 100:
			uParam0->f_22 = 1558753/*func_4705*/;
			break;
		case 101:
			uParam0->f_22 = 1558598/*func_4703*/;
			break;
	}
}

void func_4710(var uParam0, int iParam1)//Position - 0x17C9A4
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1559156/*func_4715*/;
			break;
		case 91:
			uParam0->f_1 = 1559147/*func_4714*/;
			break;
		case 92:
			uParam0->f_1 = 1559138/*func_4713*/;
			break;
		case 93:
			uParam0->f_1 = 1558761/*func_4706*/;
			break;
		case 94:
			uParam0->f_1 = 1559129/*func_4712*/;
			break;
		case 95:
			uParam0->f_22 = 1559065/*func_4711*/;
			break;
	}
}

void func_4716(var uParam0, int iParam1)//Position - 0x17CA7D
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1559383/*func_4720*/;
			break;
		case 85:
			uParam0->f_1 = 1559374/*func_4719*/;
			break;
		case 86:
			uParam0->f_1 = 1558761/*func_4706*/;
			break;
		case 87:
			uParam0->f_1 = 1559365/*func_4718*/;
			break;
		case 89:
			uParam0->f_54 = 1559265/*func_4717*/;
			break;
	}
}

bool func_4721(int iParam0)//Position - 0x17CB60
{
	return Local_130.f_2 == iParam0;
}

bool func_4723(int iParam0)//Position - 0x17CBBA
{
	return iLocal_131 == iParam0;
}

bool func_4724(int iParam0, int iParam1)//Position - 0x17CBC8
{
	bool bVar0;
	bVar0 = !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_INT", iParam0, true, 0);
	if (!bVar0 && func_4725(iParam1))
	{
		bVar0 = true;
	}
	if (BitTest(Global_2815059.f_428.f_5, 0) && ((!CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()) || HUD::IS_WARNING_MESSAGE_ACTIVE()))
	{
		bVar0 = true;
	}
	if ((Global_1946250.f_4590 == iParam1 && !__LIB_3__::func_998(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_OUT())
	{
		bVar0 = true;
	}
	if (BitTest(Global_1946250.f_5, 2) && CAM::IS_SCREEN_FADED_OUT())
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 2);
		bVar0 = true;
	}
	if (bVar0)
	{
		OBJECT::SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(true);
	}
	return bVar0;
}

int func_4725(int iParam0)//Position - 0x17CC78
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_4726(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_4726(int iParam0)//Position - 0x17CC98
{
	var uVar0;
	if (!Global_1946250.f_3634)
	{
		return 0;
	}
	uVar0 = { func_4727(iParam0) };
	return BitTest(uVar0[1], 22);
}

Vector3 func_4727(int iParam0)//Position - 0x17CCC1
{
	struct<3> Var0;
	struct<35> Var1;
	if (iParam0 == -1 || iParam0 == 159)
	{
		Var0 = 2;
		return Var0;
	}
	if (Global_1946250.f_14[iParam0 /*3*/][0] == -1 || !BitTest(Global_1946250, 3))
	{
		func_75(iParam0, &Var1, 3);
		Stack.Push(iParam0);
		Call_Loc(Var1.f_34);
		Global_1946250.f_14[iParam0 /*3*/] = { StackVal, StackVal, StackVal };
	}
	return Global_1946250.f_14[iParam0 /*3*/];
}

void func_4735()//Position - 0x17CE4A
{
	func_4737();
	__LIB_0__::func_579(&(Global_1946250.f_530));
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	__LIB_7__::func_390();
	__LIB_7__::func_389();
	Global_1946250.f_3603 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 429, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 106, false);
	}
	__LIB_0__::func_199();
}

void func_4737()//Position - 0x17CED0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_169[iVar0]))
		{
			PED::DELETE_PED(&(Local_169[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_169.f_3[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_169.f_3[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_169.f_9[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_169.f_9[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_169.f_19[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_169.f_19[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_169.f_6))
	{
		OBJECT::DELETE_OBJECT(&(Local_169.f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_169.f_7))
	{
		OBJECT::DELETE_OBJECT(&(Local_169.f_7));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_169.f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_169.f_8));
	}
}

void func_4738(var uParam0)//Position - 0x17CFD0
{
	Local_130.f_3 = *uParam0;
	Local_130.f_1 = uParam0->f_2;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Local_130.f_1);
	__LIB_1__::func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_131, 2, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_133, 33, 0);
	if (!__LIB_0__::func_672())
	{
		func_4735();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_4735();
	}
	Global_1946109 = 0;
	func_4739();
}

void func_4739()//Position - 0x17D030
{
	if (Local_130.f_3 != -1)
	{
		Global_1957730 = 0;
		func_4740(Local_130.f_3, &(Local_130.f_4), 0, 0);
		if (Global_1946250.f_499 > -1)
		{
			Global_1946250.f_499 = -1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 106, true);
		}
	}
}

void func_4740(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x17D0A7
{
	var uVar0;
	func_4741(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_4741(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x17D0BD
{
	struct<33> Var0;
	func_75(iParam0, &Var0, 2);
	func_75(iParam0, &Var0, 6);
	func_75(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam3);
	Stack.Push(uParam4);
	Call_Loc(Var0.f_31);
	Stack.Push(iParam0);
	Stack.Push(&(uParam1->f_389));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_32);
	Stack.Push(iParam0);
	Stack.Push(uParam2);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_4));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_30);
}

