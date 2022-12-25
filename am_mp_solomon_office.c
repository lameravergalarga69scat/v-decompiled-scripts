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
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
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
		__LIB_13__::func_125(1);
	}
	else if (func_4723(1))
	{
	}
}

void func_3()//Position - 0x141
{
	__LIB_9__::func_868();
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
				if (!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && func_30(PLAYER::PLAYER_ID()))
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
		fVar1 = __LIB_0__::func_932(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_169.f_8, true));
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_169.f_8, 0) < 1f && __LIB_6__::func_177(fVar0, fVar1, 30f))
		{
			__LIB_0__::func_190("MPROP_RWD_PROM" /* GXT: Press ~INPUT_CONTEXT~ to open the box. */);
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
		iVar0 = __LIB_31__::func_558(joaat("v_ilev_sol_off_door01"), -1002.147f, -478.064f, 50.117f);
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
		if (!__LIB_12__::func_671(0, bVar0) && func_25(bVar0) != 0)
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
	if (iParam0 != __LIB_0__::func_162())
	{
		if (__LIB_1__::func_693(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_172(Global_2689235[iParam0 /*453*/].f_318.f_6) == 18;
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
		if (!__LIB_4__::func_19())
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
	if (__LIB_29__::func_770(0, 1))
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
	if (__LIB_29__::func_770(0, 3))
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
		__LIB_6__::func_51(1);
		__LIB_6__::func_263(1);
		__LIB_6__::func_261();
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
	if (__LIB_0__::func_799(func_48(iParam0)))
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
			return !__LIB_12__::func_671(0, 7);
		case 1:
			return !__LIB_12__::func_671(0, 8);
		default:
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x2A49
{
	if (__LIB_0__::func_799(joaat("ch_prop_ch_fib_01a")))
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
			return !__LIB_12__::func_671(0, 4);
		case 1:
			return !__LIB_12__::func_671(0, 9);
		case 2:
			return !__LIB_12__::func_671(0, 8);
		case 3:
			return !__LIB_12__::func_671(0, 7);
		case 4:
			return !__LIB_12__::func_671(0, 5);
		case 5:
			return !__LIB_12__::func_671(0, 2);
		case 6:
			return !__LIB_12__::func_671(0, 1);
		case 7:
			return !__LIB_12__::func_671(0, 6);
		case 8:
			return !__LIB_12__::func_671(0, 3);
		default:
	}
	return 0;
}

void func_54(int iParam0)//Position - 0x2CD7
{
	if (__LIB_0__::func_799(joaat("prop_barrier_work05")))
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
	if (__LIB_0__::func_799(joaat("S_M_Y_Cop_01")))
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
					__LIB_6__::func_264();
					__LIB_6__::func_263(1);
					MISC::SET_BIT(&Local_130, 0);
					__LIB_0__::func_794(&(Local_130.f_441));
				}
			}
			else
			{
				if (!__LIB_0__::func_864(&(Local_130.f_441)))
				{
					__LIB_6__::func_262(Local_130.f_419);
					__LIB_0__::func_795(&(Local_130.f_441), 0, 0);
				}
				if (__LIB_0__::func_937(&(Local_130.f_441), Local_130.f_443, 0))
				{
					__LIB_0__::func_794(&(Local_130.f_441));
				}
			}
		}
		else
		{
			__LIB_6__::func_263(1);
			MISC::SET_BIT(&Local_130, 0);
		}
	}
	if (__LIB_6__::func_184() && BitTest(Local_130.f_0, 0))
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
	func_76(__LIB_0__::func_172(iParam0), uParam1, iParam2);
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
			*uParam0 = 326324/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 326310/*__LIB_5__::func_448*/;
			break;
		case 1:
			uParam0->f_30 = 326214/*__LIB_5__::func_447*/;
			break;
		case 2:
			uParam0->f_31 = 324871/*__LIB_5__::func_446*/;
			break;
		case 3:
			uParam0->f_34 = 324642/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 324630/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 324620/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 324432/*__LIB_5__::func_200*/;
			break;
		case 38:
			uParam0->f_9 = 324385/*__LIB_7__::func_731*/;
			break;
		case 42:
			uParam0->f_10 = 324357/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 324048/*__LIB_4__::func_915*/;
			break;
		case 11:
			uParam0->f_11 = 324039/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 321371/*__LIB_9__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 321362/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 314779/*__LIB_9__::func_299*/;
			break;
		case 8:
			uParam0->f_37 = 313904/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 313787/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 313731/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 313578/*__LIB_5__::func_445*/;
			break;
		case 10:
			uParam0->f_27 = 313434/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 313352/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 311518/*__LIB_9__::func_814*/;
			break;
		case 16:
			uParam0->f_5 = 310320/*__LIB_9__::func_976*/;
			break;
		case 108:
			uParam0->f_55 = 252610/*__LIB_10__::func_76*/;
			break;
		case 17:
			uParam0->f_17 = 250884/*__LIB_9__::func_260*/;
			break;
		case 19:
			uParam0->f_17 = 250734/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 250709/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 250489/*__LIB_6__::func_934*/;
			break;
		case 21:
			uParam0->f_3 = 249048/*__LIB_9__::func_313*/;
			break;
		case 74:
			uParam0->f_53 = 248858/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 247523/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 247406/*__LIB_5__::func_432*/;
			break;
		case 23:
			uParam0->f_26 = 247363/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 247329/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 247321/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 244333/*func_543*/;
			break;
		case 27:
			uParam0->f_25 = 244325/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 244317/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 244167/*__LIB_5__::func_710*/;
			break;
		case 31:
			uParam0->f_39 = 243948/*__LIB_5__::func_709*/;
			break;
		case 33:
			uParam0->f_40 = 242955/*__LIB_7__::func_49*/;
			break;
		case 32:
			*uParam0 = 242900/*__LIB_6__::func_932*/;
			break;
		case 76:
			uParam0->f_13 = 242889/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 239137/*__LIB_6__::func_931*/;
			break;
		case 36:
			uParam0->f_58 = 239092/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 218029/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 218020/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 218011/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 218003/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 217980/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 217934/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 217802/*__LIB_4__::func_910*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 216549/*__LIB_6__::func_930*/;
			break;
		case 49:
			uParam0->f_8 = 216531/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 216182/*__LIB_6__::func_929*/;
			break;
		case 51:
			*uParam0 = 216080/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 216069/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 215943/*func_492*/;
			break;
		case 54:
			uParam0->f_45 = 215556/*func_491*/;
			break;
		case 56:
			uParam0->f_46 = 215537/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 214293/*__LIB_7__::func_48*/;
			break;
		case 58:
			uParam0->f_13 = 214167/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 212502/*__LIB_7__::func_868*/;
			break;
		case 60:
			*uParam0 = 212493/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 212482/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 212356/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 212348/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 212334/*__LIB_7__::func_867*/;
			break;
		case 64:
			uParam0->f_47 = 212326/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 210731/*__LIB_7__::func_47*/;
			break;
		case 66:
			uParam0->f_21 = 210045/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 209905/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 208700/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 208691/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 208679/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 208670/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 208658/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 208176/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 208167/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 34918/*func_232*/;
			break;
		case 87:
			uParam0->f_1 = 31063/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 31054/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 31046/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 30124/*__LIB_7__::func_0*/;
			break;
		case 91:
			uParam0->f_1 = 30090/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 28162/*__LIB_7__::func_864*/;
			break;
		case 94:
			uParam0->f_1 = 26151/*__LIB_7__::func_875*/;
			break;
		case 95:
			uParam0->f_22 = 21872/*__LIB_7__::func_883*/;
			break;
		case 96:
			uParam0->f_1 = 21863/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 21854/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 21845/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 21837/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 21829/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 21715/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 21561/*__LIB_5__::func_701*/;
			break;
		case 114:
			uParam0->f_16 = 20893/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 20884/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 20875/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 16459/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 16450/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 16321/*__LIB_7__::func_44*/;
			break;
		case 120:
			uParam0->f_19 = 16266/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 15338/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 15329/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 15321/*__LIB_0__::func_467*/;
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
			__LIB_3__::func_633(&(uParam1->f_109));
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
		__LIB_3__::func_632(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_3__::func_632(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_3__::func_631(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_3__::func_631(iParam0, &Var6, &Var8, &uVar12, 0);
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
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
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
		__LIB_1__::func_494(*uParam0);
		if (func_257(iParam1) || __LIB_1__::func_554(iParam1))
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
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_259(iParam0, 14, 0), -1))
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
				if (func_260(iParam0, iParam1, iVar0))
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
				if (func_260(iParam0, iParam1, iVar1))
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

int func_260(int iParam0, int iParam1, int iParam2)//Position - 0xA164
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
				if (!func_260(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_260(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_260(iParam0, 14, iVar6))
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
			if (!func_260(iParam0, 14, uVar11[iVar10]))
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
						return func_260(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_260(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
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
				func_241(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				__LIB_31__::func_175(iParam0, &(uParam1->f_12));
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

void func_491(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x34A04
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_5__::func_423(iParam0))
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
	iVar2 = __LIB_3__::func_616();
	Var3 = { __LIB_3__::func_681(iParam0, iVar2) };
	if (__LIB_6__::func_934(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_554(iParam0, Var3, &bVar0, &bVar1, 1, 0);
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
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_555(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_555(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
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
			*uParam0 = 382893/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 382884/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 382805/*__LIB_5__::func_466*/;
			break;
		case 2:
			uParam0->f_31 = 382169/*__LIB_5__::func_715*/;
			break;
		case 3:
			uParam0->f_34 = 381903/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 381891/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 381792/*__LIB_4__::func_918*/;
			break;
		case 37:
			uParam0->f_18 = 381662/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 381615/*__LIB_6__::func_866*/;
			break;
		case 39:
			uParam0->f_11 = 381580/*__LIB_7__::func_734*/;
			break;
		case 41:
			uParam0->f_20 = 381461/*__LIB_9__::func_300*/;
			break;
		case 42:
			uParam0->f_10 = 381433/*__LIB_6__::func_865*/;
			break;
		case 11:
			uParam0->f_11 = 381423/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 379272/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 379263/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 376698/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 376690/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 376681/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 376672/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 376610/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 376529/*__LIB_9__::func_784*/;
			break;
		case 16:
			uParam0->f_5 = 376176/*__LIB_6__::func_940*/;
			break;
		case 108:
			uParam0->f_55 = 371743/*__LIB_10__::func_67*/;
			break;
		case 17:
			uParam0->f_17 = 370603/*__LIB_9__::func_261*/;
			break;
		case 19:
			uParam0->f_17 = 370578/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 370569/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 370438/*__LIB_6__::func_939*/;
			break;
		case 74:
			uParam0->f_53 = 370334/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 370318/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 370168/*__LIB_5__::func_463*/;
			break;
		case 23:
			uParam0->f_26 = 370160/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 362321/*func_948*/;
			break;
		case 25:
			uParam0->f_23 = 361272/*func_944*/;
			break;
		case 27:
			uParam0->f_25 = 361080/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 361042/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 361019/*__LIB_6__::func_864*/;
			break;
		case 30:
			uParam0->f_8 = 360067/*__LIB_5__::func_714*/;
			break;
		case 31:
			uParam0->f_39 = 360039/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 359925/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 359807/*__LIB_6__::func_863*/;
			break;
		case 76:
			uParam0->f_13 = 359758/*__LIB_4__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 350920/*__LIB_5__::func_459*/;
			break;
		case 36:
			uParam0->f_58 = 350872/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 339782/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 339773/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 339764/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 339756/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 339745/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 339628/*__LIB_4__::func_916*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 338695/*__LIB_8__::func_920*/;
			break;
		case 49:
			uParam0->f_8 = 338686/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 338517/*__LIB_6__::func_937*/;
			break;
		case 51:
			*uParam0 = 338508/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 338497/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 338474/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 338426/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 338408/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 338366/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 338324/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 338195/*__LIB_7__::func_779*/;
			break;
		case 60:
			*uParam0 = 338186/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 338175/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 338152/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 338143/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 338102/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 338094/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 338086/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 337815/*__LIB_5__::func_455*/;
			break;
		case 67:
			uParam0->f_21 = 337745/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 337073/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 337064/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 337052/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 336832/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 336820/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 336284/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 336169/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 335266/*func_866*/;
			break;
		case 87:
			uParam0->f_1 = 332637/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 332628/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 332620/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 332611/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 332602/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 332593/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 332585/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 332577/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 332542/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 332533/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 330586/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 330577/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 329357/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 329275/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 329258/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 329226/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 328010/*__LIB_9__::func_323*/;
			break;
		case 124:
			uParam0->f_1 = 328001/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 327993/*__LIB_0__::func_467*/;
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
		iVar0 = __LIB_3__::func_616();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_330(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
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
		__LIB_3__::func_752(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_3__::func_752(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
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
	iVar3 = __LIB_3__::func_616();
	iVar4 = 0;
	Var5 = { __LIB_3__::func_780(iVar3) };
	func_554(iParam0, Var5, &bVar0, &bVar1, 1, 0);
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

void func_948(var uParam0, var uParam1)//Position - 0x58751
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
	bVar2 = __LIB_5__::func_208();
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
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

void func_1045(var uParam0, int iParam1)//Position - 0x5D7B6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 423539/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 423525/*__LIB_5__::func_475*/;
			break;
		case 1:
			uParam0->f_30 = 423434/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 423215/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 423058/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 423046/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 423036/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 422922/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 422875/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 422847/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 422759/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 422750/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 421005/*__LIB_9__::func_499*/;
			break;
		case 14:
			uParam0->f_11 = 420996/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 416963/*func_1194*/;
			break;
		case 8:
			uParam0->f_37 = 416486/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 416392/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 416383/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 416321/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 416240/*__LIB_9__::func_785*/;
			break;
		case 16:
			uParam0->f_5 = 415342/*__LIB_9__::func_264*/;
			break;
		case 108:
			uParam0->f_55 = 412063/*__LIB_10__::func_68*/;
			break;
		case 17:
			uParam0->f_17 = 410821/*__LIB_9__::func_263*/;
			break;
		case 19:
			uParam0->f_17 = 410796/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 410582/*__LIB_6__::func_944*/;
			break;
		case 21:
			uParam0->f_3 = 410518/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 410414/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 410398/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 410296/*__LIB_5__::func_471*/;
			break;
		case 23:
			uParam0->f_26 = 410288/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 406274/*func_1144*/;
			break;
		case 25:
			uParam0->f_23 = 405824/*func_1141*/;
			break;
		case 27:
			uParam0->f_25 = 405816/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 405808/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 405171/*__LIB_6__::func_942*/;
			break;
		case 31:
			uParam0->f_39 = 405041/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 404167/*__LIB_7__::func_8*/;
			break;
		case 32:
			*uParam0 = 403964/*__LIB_7__::func_7*/;
			break;
		case 76:
			uParam0->f_13 = 403811/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 402199/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 402154/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 392894/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 392885/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 392876/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 392868/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 392845/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 392796/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 392659/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 392641/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 391809/*__LIB_7__::func_835*/;
			break;
		case 51:
			*uParam0 = 391707/*__LIB_5__::func_716*/;
			break;
		case 52:
			uParam0->f_15 = 391696/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 391543/*func_1096*/;
			break;
		case 54:
			uParam0->f_45 = 391310/*func_1095*/;
			break;
		case 56:
			uParam0->f_46 = 391301/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 390888/*__LIB_7__::func_6*/;
			break;
		case 58:
			uParam0->f_13 = 390735/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 390726/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 390717/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 390706/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 390695/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 390686/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 390678/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 389622/*__LIB_7__::func_51*/;
			break;
		case 66:
			uParam0->f_21 = 389402/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 389327/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 388638/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 388629/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 388617/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 388525/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 388513/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 388146/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 388137/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 387345/*func_1069*/;
			break;
		case 87:
			uParam0->f_1 = 385967/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 385958/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 385950/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 385941/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 385932/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 385923/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 385915/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 385907/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 385895/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 385886/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 385877/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 385868/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 384476/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 384467/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 384459/*__LIB_0__::func_467*/;
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
			__LIB_3__::func_633(&(uParam1->f_109));
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
		__LIB_3__::func_805(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_3__::func_805(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
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
	Var2 = { __LIB_3__::func_830(iParam0) };
	if (__LIB_6__::func_944(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1144(var uParam0, var uParam1)//Position - 0x63302
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_1147(uParam0, uParam1);
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

void func_1147(var uParam0, var uParam1)//Position - 0x633E1
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_51(uParam0, uParam1);
			break;
		case 1:
			func_1161(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_758(uParam0, uParam1);
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

void func_1194(int iParam0, var uParam1, int iParam2)//Position - 0x65CC3
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
				func_554(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

void func_1218(var uParam0, int iParam1)//Position - 0x6767C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 439913/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 439904/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 439837/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 439399/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 439251/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 439239/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 439025/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 438936/*__LIB_6__::func_870*/;
			break;
		case 39:
			uParam0->f_11 = 438916/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 438811/*__LIB_6__::func_869*/;
			break;
		case 41:
			uParam0->f_20 = 438786/*__LIB_5__::func_228*/;
			break;
		case 42:
			uParam0->f_10 = 438773/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 438709/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 438700/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 438163/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 438154/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 437232/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 437224/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 437215/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 437206/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 437144/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 437063/*__LIB_9__::func_786*/;
			break;
		case 16:
			uParam0->f_5 = 436736/*__LIB_9__::func_302*/;
			break;
		case 108:
			uParam0->f_55 = 436727/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 436716/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 436705/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 436663/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 436654/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 436606/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 436451/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 436442/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 436340/*__LIB_5__::func_481*/;
			break;
		case 23:
			uParam0->f_26 = 436332/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 435905/*func_1295*/;
			break;
		case 27:
			uParam0->f_25 = 435897/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 435889/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 435854/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 435826/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 435659/*__LIB_6__::func_868*/;
			break;
		case 76:
			uParam0->f_13 = 435636/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 432022/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 431977/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 428783/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 428774/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 428765/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 428757/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 428746/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 428584/*__LIB_5__::func_478*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 427312/*func_1268*/;
			break;
		case 49:
			uParam0->f_8 = 427303/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 426878/*__LIB_7__::func_869*/;
			break;
		case 51:
			*uParam0 = 426869/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 426858/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 426835/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 426827/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 426818/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 426805/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 426763/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 426754/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 426745/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 426734/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 426723/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 426714/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 426706/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 426698/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 426085/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 426015/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 425325/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 425316/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 425304/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 425295/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 425283/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 425274/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 425265/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 425256/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 425247/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 425238/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 425230/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 425221/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 425212/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 425203/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 425195/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 425187/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 425175/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 425166/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 425157/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 425148/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 425140/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 425131/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 425123/*__LIB_0__::func_467*/;
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
			func_554(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
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

void func_1295(int iParam0, int iParam1)//Position - 0x6A6C1
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1340(var uParam0, int iParam1)//Position - 0x6B672
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 716206/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 716151/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 715491/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 715364/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 715332/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 715321/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 715257/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 715234/*__LIB_5__::func_245*/;
			break;
		case 79:
			*uParam0 = 715225/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 715112/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 715016/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 715007/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 714617/*__LIB_8__::func_851*/;
			break;
		case 109:
			uParam0->f_56 = 714314/*__LIB_7__::func_741*/;
			break;
		case 15:
			uParam0->f_2 = 712347/*__LIB_7__::func_876*/;
			break;
		case 13:
			uParam0->f_2 = 712338/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 712329/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 711946/*__LIB_9__::func_2*/;
			break;
		case 108:
			uParam0->f_55 = 707991/*__LIB_9__::func_529*/;
			break;
		case 17:
			uParam0->f_17 = 707267/*__LIB_9__::func_267*/;
			break;
		case 19:
			uParam0->f_17 = 707242/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 707073/*__LIB_8__::func_925*/;
			break;
		case 21:
			uParam0->f_3 = 707010/*__LIB_5__::func_243*/;
			break;
		case 74:
			uParam0->f_53 = 706858/*__LIB_5__::func_242*/;
			break;
		case 22:
			uParam0->f_24 = 706777/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 705840/*func_1721*/;
			break;
		case 30:
			uParam0->f_8 = 704507/*__LIB_7__::func_837*/;
			break;
		case 31:
			uParam0->f_39 = 703931/*__LIB_8__::func_924*/;
			break;
		case 33:
			uParam0->f_40 = 702696/*__LIB_8__::func_963*/;
			break;
		case 14:
			uParam0->f_11 = 702687/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 699920/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 699867/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 694415/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 694406/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 694397/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 694389/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 694366/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 694317/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 694292/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 694254/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 694180/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 694169/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 694090/*__LIB_6__::func_874*/;
			break;
		case 54:
			uParam0->f_45 = 694082/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 694073/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 694063/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 693816/*__LIB_7__::func_737*/;
			break;
		case 64:
			uParam0->f_47 = 692672/*__LIB_10__::func_52*/;
			break;
		case 65:
			uParam0->f_21 = 691480/*__LIB_7__::func_870*/;
			break;
		case 66:
			uParam0->f_21 = 690373/*__LIB_7__::func_54*/;
			break;
		case 67:
			uParam0->f_21 = 690197/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 688537/*__LIB_8__::func_962*/;
			break;
		case 69:
			*uParam0 = 688528/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 688516/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 688507/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 688495/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 687621/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 687612/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 686960/*__LIB_9__::func_517*/;
			break;
		case 85:
			uParam0->f_1 = 686088/*func_1624*/;
			break;
		case 87:
			uParam0->f_1 = 684877/*__LIB_9__::func_525*/;
			break;
		case 88:
			uParam0->f_1 = 684857/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 684763/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 684632/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 684004/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 683237/*func_1606*/;
			break;
		case 94:
			uParam0->f_1 = 682685/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 682091/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 681733/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 681640/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 680794/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 446549/*func_1395*/;
			break;
		case 100:
			uParam0->f_22 = 443269/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 442111/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 441903/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 441435/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 441426/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 441316/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 441273/*__LIB_3__::func_870*/;
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
		func_1412(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
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
			func_330(&iVar9, &(uParam1->f_109), 4);
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
		func_1416(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_8__::func_849(iParam1, 2)))
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
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_8__::func_849(PLAYER::PLAYER_ID(), 2));
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
								if (!func_257(*uParam0))
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
										func_1540(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1540(*uParam0, uParam0->f_4, uParam0->f_8);
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
										func_1529(*uParam0);
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
												func_1460(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_1460(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
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
									func_1455(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1426(*uParam0, bVar24, 0, iVar25);
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
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_8__::func_849(PLAYER::PLAYER_ID(), 2));
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
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_8__::func_849(PLAYER::PLAYER_ID(), 2));
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
		iVar2 = __LIB_0__::func_276(iParam0);
		bVar3 = func_1453(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_259(iParam0, 11, -1);
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
				iVar5 = func_259(iParam0, 11, -1);
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
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_259(iParam0, 11, -1), 0);
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
						iVar3 = func_259(iParam0, 11, -1);
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
						iVar5 = func_259(iParam0, 8, -1);
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
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_259(iParam0, 11, -1), 0);
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
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_259(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_259(iParam0, 11, -1), 0);
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
		iVar1 = __LIB_0__::func_276(iParam0);
		bVar2 = func_1453(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
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
						func_1524(iVar5, 10, 0, 1);
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
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_259(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
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
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_1518(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_1524(iVar5, 14, uVar18[iVar1], 1);
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
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
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
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1529(iParam0);
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
						func_1460(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
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
					iVar27 = func_1515(iVar5, iVar24, iVar23, iVar25);
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
							func_1460(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1460(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1460(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1460(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1460(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1460(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1460(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1501(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1515(iVar5, iParam2, iVar44, iVar45);
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
			func_1518(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1515(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_1460(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1460(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1515(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1515(iVar5, iVar58, iVar57, iParam2);
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
								iVar6 = func_1515(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1460(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_260(iParam0, 9, iVar63))
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
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_1460(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
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
										func_1460(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1460(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1460(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
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
										func_1460(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1460(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1460(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
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
				func_1529(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1460(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
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
		iVar84 = __LIB_0__::func_282(iVar5, func_259(iParam0, 3, -1), iVar10);
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
		if (!func_260(iParam0, iVar1, iVar0))
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

void func_1501(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8CE86
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
					iVar0 = func_1515(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1515(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_259(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_259(iParam0, 11, -1);
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
									func_1524(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1524(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1524(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1524(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1524(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1524(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_1529(int iParam0)//Position - 0x99D8F
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
		if (!func_1534(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_1534(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1534(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x9A759
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_259(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
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
	if (__LIB_3__::func_376(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1541(iParam0);
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_259(iParam0, 7, -1), -1))
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

void func_1541(int iParam0)//Position - 0x9B122
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
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
					func_1460(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1460(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_1606(var uParam0, var uParam1)//Position - 0xA6CE5
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
			func_330(&iVar2, &(uParam1->f_109), 4);
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
			func_1412(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
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

int func_1624(int iParam0, var uParam1)//Position - 0xA7808
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
		if (func_1412(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
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
		func_330(&iVar1, &(uParam1->f_109), 32);
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
						func_1722(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1722(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_1722(int iParam0, bool bParam1)//Position - 0xAC7BF
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

void func_1787(var uParam0, int iParam1)//Position - 0xAEDB7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 737349/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 737340/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 737269/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 736945/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 736784/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 736772/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 736708/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 736699/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 736363/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 736354/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 735624/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 735616/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 735607/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 735598/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 735586/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 735577/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 735498/*__LIB_9__::func_787*/;
			break;
		case 16:
			uParam0->f_5 = 735154/*__LIB_6__::func_950*/;
			break;
		case 108:
			uParam0->f_55 = 735145/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 734637/*__LIB_6__::func_949*/;
			break;
		case 19:
			uParam0->f_17 = 734584/*__LIB_6__::func_948*/;
			break;
		case 18:
			uParam0->f_8 = 734496/*__LIB_5__::func_502*/;
			break;
		case 20:
			uParam0->f_3 = 734476/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 734449/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 734427/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 734418/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 734316/*__LIB_5__::func_501*/;
			break;
		case 23:
			uParam0->f_26 = 734308/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 734300/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 733539/*func_1869*/;
			break;
		case 27:
			uParam0->f_25 = 733531/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 733523/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 733412/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 733365/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 733296/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 733273/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 729200/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 729143/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 722925/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 722916/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 722907/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 722899/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 722888/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 722784/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 721717/*__LIB_7__::func_839*/;
			break;
		case 49:
			uParam0->f_8 = 721708/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 721311/*__LIB_7__::func_742*/;
			break;
		case 51:
			*uParam0 = 721302/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 721292/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 721269/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 720710/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 720701/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 720692/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 720650/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 720641/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 720632/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 720621/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 720610/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 720601/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 720593/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 720585/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 720275/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 720205/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 719516/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 719507/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 719495/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 719486/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 719474/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 719465/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 719456/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 719447/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 719438/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 719429/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 719421/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 719396/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 719287/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 718576/*func_1798*/;
			break;
		case 100:
			uParam0->f_22 = 717913/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 717786/*__LIB_7__::func_877*/;
			break;
		case 112:
			uParam0->f_13 = 717774/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 717765/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 717756/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 717747/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 717739/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 717730/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 717722/*__LIB_0__::func_467*/;
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
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_555(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_555(iVar7))
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
					else if ((!bVar1 && !bVar0) && !func_1870())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
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
			*uParam0 = 745634/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 745625/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 745554/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 745318/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 745267/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 745255/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 745191/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 745182/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 744742/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 744733/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 744065/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 744057/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 744048/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 744039/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 743977/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 743897/*__LIB_9__::func_788*/;
			break;
		case 16:
			uParam0->f_5 = 743544/*__LIB_6__::func_952*/;
			break;
		case 108:
			uParam0->f_55 = 743535/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 743524/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 743513/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 743504/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 743495/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 743473/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 743464/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 743452/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 743444/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 743436/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 743428/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 743420/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 743412/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 743377/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 743349/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 743279/*__LIB_6__::func_881*/;
			break;
		case 76:
			uParam0->f_13 = 743256/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 743160/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 743115/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 740602/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 740593/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 740584/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 740576/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 740565/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 740525/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 740417/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 740408/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 740205/*__LIB_6__::func_951*/;
			break;
		case 51:
			*uParam0 = 740196/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 740185/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 740162/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 740154/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 740145/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 740132/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 740090/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 740081/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 740072/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 740061/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 740050/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 740041/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 740033/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 740025/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 739792/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 739722/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 739033/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 739024/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 739012/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 739003/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 738991/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 738982/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 738973/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 738964/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 738955/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 738946/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 738938/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 738929/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 738920/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 738911/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 738903/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 738895/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 738883/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 738874/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 738865/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 738856/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 738848/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 738839/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 738831/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2004(var uParam0, int iParam1)//Position - 0xB60AB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 825102/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 825088/*__LIB_5__::func_530*/;
			break;
		case 1:
			uParam0->f_30 = 824932/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 824456/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 824257/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 824135/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 824125/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 823988/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 823944/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 823860/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 823766/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 823757/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 822579/*__LIB_9__::func_526*/;
			break;
		case 14:
			uParam0->f_11 = 822570/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 816105/*__LIB_5__::func_731*/;
			break;
		case 8:
			uParam0->f_37 = 815805/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 815748/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 815504/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 815442/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 815362/*__LIB_9__::func_789*/;
			break;
		case 16:
			uParam0->f_5 = 814642/*__LIB_9__::func_270*/;
			break;
		case 108:
			uParam0->f_55 = 811451/*__LIB_10__::func_69*/;
			break;
		case 17:
			uParam0->f_17 = 809146/*__LIB_9__::func_269*/;
			break;
		case 19:
			uParam0->f_17 = 809120/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 808944/*__LIB_6__::func_885*/;
			break;
		case 21:
			uParam0->f_3 = 808880/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 808776/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 808760/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 808657/*__LIB_5__::func_525*/;
			break;
		case 23:
			uParam0->f_26 = 808610/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 808573/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 806530/*func_2194*/;
			break;
		case 25:
			uParam0->f_23 = 806208/*func_2192*/;
			break;
		case 30:
			uParam0->f_8 = 805351/*__LIB_6__::func_957*/;
			break;
		case 31:
			uParam0->f_39 = 805217/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 804645/*__LIB_6__::func_884*/;
			break;
		case 32:
			*uParam0 = 804360/*__LIB_7__::func_15*/;
			break;
		case 34:
			uParam0->f_41 = 801873/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 801816/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 774634/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 774625/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 774616/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 774608/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 774585/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 774513/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 774385/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 774359/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 773672/*__LIB_7__::func_841*/;
			break;
		case 51:
			*uParam0 = 773402/*__LIB_6__::func_955*/;
			break;
		case 52:
			uParam0->f_15 = 773391/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 773229/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 772705/*func_2153*/;
			break;
		case 56:
			uParam0->f_46 = 772687/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 772435/*__LIB_7__::func_14*/;
			break;
		case 58:
			uParam0->f_13 = 772273/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 771777/*__LIB_7__::func_13*/;
			break;
		case 60:
			*uParam0 = 771762/*__LIB_6__::func_883*/;
			break;
		case 61:
			uParam0->f_15 = 771751/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 771589/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 771410/*__LIB_6__::func_882*/;
			break;
		case 63:
			uParam0->f_11 = 771383/*__LIB_7__::func_840*/;
			break;
		case 64:
			uParam0->f_47 = 769708/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 768321/*__LIB_7__::func_55*/;
			break;
		case 66:
			uParam0->f_21 = 767962/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 767848/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 766888/*__LIB_6__::func_954*/;
			break;
		case 69:
			*uParam0 = 766879/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 766867/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 766323/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 766311/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 766123/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 766114/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 764528/*func_2113*/;
			break;
		case 87:
			uParam0->f_1 = 763012/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 763003/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 762995/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 762965/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 762520/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 756715/*__LIB_8__::func_985*/;
			break;
		case 100:
			uParam0->f_22 = 748288/*__LIB_7__::func_871*/;
			break;
		case 101:
			uParam0->f_22 = 747366/*__LIB_8__::func_984*/;
			break;
		case 112:
			uParam0->f_13 = 747355/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 747346/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 747337/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 747328/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 747156/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 747133/*__LIB_4__::func_29*/;
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
			__LIB_3__::func_633(&(uParam1->f_109));
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
		__LIB_4__::func_61(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_61(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_60(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_60(iParam0, &Var6, &Var8, &uVar12, 0);
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
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
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
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2192(int iParam0, int iParam1)//Position - 0xC4D40
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
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2194(var uParam0, var uParam1)//Position - 0xC4E82
{
	if (__LIB_3__::func_616() == 3)
	{
		func_2198(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_2196(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
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

void func_2198(var uParam0, var uParam1)//Position - 0xC5029
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_53(uParam0, uParam1);
			break;
		case 1:
			func_2203(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_751(uParam0, uParam1);
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

void func_2262(var uParam0, int iParam1)//Position - 0xC9717
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 841309/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 841300/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 841232/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 840786/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 840681/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 840668/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 840604/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 840595/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 840134/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 840125/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 839738/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 839730/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 839721/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 839697/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 839635/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 839556/*__LIB_9__::func_790*/;
			break;
		case 16:
			uParam0->f_5 = 839259/*__LIB_6__::func_958*/;
			break;
		case 108:
			uParam0->f_55 = 839250/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 839239/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 839213/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 839204/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 839195/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 839173/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 839164/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 839156/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 839148/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 839140/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 838808/*func_2334*/;
			break;
		case 27:
			uParam0->f_25 = 838800/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 838792/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 838471/*__LIB_7__::func_745*/;
			break;
		case 31:
			uParam0->f_39 = 838443/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 838374/*__LIB_6__::func_880*/;
			break;
		case 34:
			uParam0->f_41 = 834640/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 834595/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 831428/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 831419/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 831410/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 831402/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 831391/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 831283/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 830168/*__LIB_7__::func_799*/;
			break;
		case 49:
			uParam0->f_8 = 830159/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 830150/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 830141/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 830130/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 830119/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 830111/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 830102/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 830093/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 830051/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 830042/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 830033/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 830022/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 830011/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 830002/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 829994/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 829986/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 829683/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 829613/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 828964/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 828955/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 828947/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 828938/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 828926/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 828492/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 828467/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 828450/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 827908/*func_2284*/;
			break;
		case 87:
			uParam0->f_1 = 826867/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 826858/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 826850/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 826841/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 826832/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 826823/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 826815/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 826807/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 826795/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 826786/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 826483/*__LIB_7__::func_798*/;
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
			__LIB_3__::func_633(&(uParam0->f_109));
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
		__LIB_4__::func_109(&Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_109(&Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_108(&Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_108(&Var6, &Var8, &uVar12, 0);
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
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2334(int iParam0, int iParam1)//Position - 0xCCC98
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
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2372(var uParam0, int iParam1)//Position - 0xCD666
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 876407/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 876384/*__LIB_4__::func_174*/;
			break;
		case 1:
			uParam0->f_30 = 876254/*__LIB_5__::func_547*/;
			break;
		case 2:
			uParam0->f_31 = 875589/*__LIB_6__::func_894*/;
			break;
		case 3:
			uParam0->f_34 = 875326/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 875313/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 875303/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 875105/*__LIB_5__::func_274*/;
			break;
		case 38:
			uParam0->f_9 = 875057/*__LIB_6__::func_964*/;
			break;
		case 42:
			uParam0->f_10 = 875021/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 874906/*__LIB_4__::func_941*/;
			break;
		case 11:
			uParam0->f_11 = 874897/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 873967/*__LIB_8__::func_928*/;
			break;
		case 14:
			uParam0->f_11 = 873958/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 872815/*__LIB_7__::func_805*/;
			break;
		case 8:
			uParam0->f_37 = 872771/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 872748/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 872724/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 872662/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 872583/*__LIB_9__::func_791*/;
			break;
		case 16:
			uParam0->f_5 = 871909/*__LIB_8__::func_927*/;
			break;
		case 108:
			uParam0->f_55 = 868627/*__LIB_10__::func_70*/;
			break;
		case 17:
			uParam0->f_17 = 867708/*__LIB_9__::func_272*/;
			break;
		case 19:
			uParam0->f_17 = 867663/*__LIB_6__::func_962*/;
			break;
		case 20:
			uParam0->f_3 = 867490/*__LIB_6__::func_892*/;
			break;
		case 21:
			uParam0->f_3 = 867405/*__LIB_6__::func_891*/;
			break;
		case 74:
			uParam0->f_53 = 867265/*__LIB_5__::func_271*/;
			break;
		case 75:
			uParam0->f_4 = 867249/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 867146/*__LIB_5__::func_546*/;
			break;
		case 23:
			uParam0->f_26 = 867099/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 867062/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 865657/*func_2481*/;
			break;
		case 25:
			uParam0->f_23 = 865291/*func_2478*/;
			break;
		case 27:
			uParam0->f_25 = 864478/*__LIB_6__::func_961*/;
			break;
		case 28:
			uParam0->f_24 = 864439/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 864204/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 863879/*__LIB_7__::func_802*/;
			break;
		case 31:
			uParam0->f_39 = 863682/*__LIB_5__::func_545*/;
			break;
		case 43:
			uParam0->f_8 = 863576/*__LIB_7__::func_801*/;
			break;
		case 33:
			uParam0->f_40 = 863260/*__LIB_6__::func_890*/;
			break;
		case 34:
			uParam0->f_41 = 858268/*__LIB_6__::func_889*/;
			break;
		case 36:
			uParam0->f_58 = 858211/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 852007/*__LIB_6__::func_960*/;
			break;
		case 45:
			uParam0->f_14 = 851998/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 851989/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 851981/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 851953/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 851940/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 851648/*__LIB_5__::func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 849425/*__LIB_8__::func_964*/;
			break;
		case 49:
			uParam0->f_8 = 849377/*__LIB_4__::func_938*/;
			break;
		case 50:
			*uParam0 = 849185/*__LIB_5__::func_733*/;
			break;
		case 51:
			*uParam0 = 849176/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 849165/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 849123/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 849115/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 849106/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 849097/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 849055/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 849046/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 849037/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 849026/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 848996/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 848987/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 848979/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 847893/*__LIB_7__::func_56*/;
			break;
		case 66:
			uParam0->f_21 = 847552/*__LIB_5__::func_541*/;
			break;
		case 67:
			uParam0->f_21 = 847438/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 846610/*__LIB_6__::func_959*/;
			break;
		case 69:
			*uParam0 = 846601/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 846589/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 846497/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 846485/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 846297/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 846288/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 846274/*func_2411*/;
			break;
		case 87:
			uParam0->f_1 = 846258/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 846249/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 846241/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 846232/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 845789/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 844327/*func_2393*/;
			break;
		case 100:
			uParam0->f_22 = 843448/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 843271/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 843259/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 843245/*__LIB_4__::func_126*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 843236/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 843135/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 843110/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 842938/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 842911/*__LIB_4__::func_124*/;
			break;
	}
}

int func_2393(int iParam0, var uParam1)//Position - 0xCE227
{
	if (__LIB_4__::func_128(iParam0))
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

int func_2411(var uParam0, var uParam1)//Position - 0xCE9C2
{
	return func_2285(uParam1);
}

void func_2478(int iParam0, int iParam1)//Position - 0xD340B
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
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2481(var uParam0, var uParam1)//Position - 0xD3579
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_2482(uParam0, uParam1);
	}
}

void func_2482(var uParam0, var uParam1)//Position - 0xD35A5
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2493(*uParam0, 0, 0))
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
			func_2488(uParam0, uParam1);
			break;
		case 1:
			func_2484(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
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
	sVar3 = __LIB_4__::func_155();
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
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
			else if (func_2493(*uParam0, 0, 0))
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
			*uParam0 = 906957/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 906948/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 906880/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 906529/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 906296/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 906283/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 906219/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 906210/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 905485/*__LIB_6__::func_967*/;
			break;
		case 14:
			uParam0->f_11 = 905476/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 904354/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 904346/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 904337/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 904313/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 904241/*__LIB_9__::func_793*/;
			break;
		case 15:
			uParam0->f_2 = 904152/*__LIB_9__::func_792*/;
			break;
		case 16:
			uParam0->f_5 = 903792/*__LIB_6__::func_966*/;
			break;
		case 108:
			uParam0->f_55 = 903653/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 902997/*__LIB_8__::func_852*/;
			break;
		case 19:
			uParam0->f_17 = 902971/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 902962/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 902914/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 902859/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 902746/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 902738/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 902730/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 900187/*func_2677*/;
			break;
		case 25:
			uParam0->f_23 = 900179/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 900171/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 900163/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 899882/*__LIB_7__::func_749*/;
			break;
		case 31:
			uParam0->f_39 = 899854/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 899785/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 899762/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 897208/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 897163/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 897067/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 897058/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 897049/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 897041/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 897030/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 896923/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 896085/*__LIB_7__::func_808*/;
			break;
		case 49:
			uParam0->f_8 = 896076/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 895863/*__LIB_7__::func_748*/;
			break;
		case 51:
			*uParam0 = 895854/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 895843/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 895801/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 895762/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 895753/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 895711/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 895669/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 895660/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 895651/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 895640/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 895629/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 895620/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 895534/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 895526/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 895185/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 895115/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 894418/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 894409/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 894336/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 894327/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 894315/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 894306/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 893781/*__LIB_6__::func_965*/;
			break;
		case 85:
			uParam0->f_1 = 892225/*func_2627*/;
			break;
		case 87:
			uParam0->f_1 = 888998/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 888983/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 888622/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 888260/*__LIB_7__::func_20*/;
			break;
		case 97:
			uParam0->f_1 = 887754/*func_2605*/;
			break;
		case 98:
			uParam0->f_1 = 886125/*func_2603*/;
			break;
		case 100:
			uParam0->f_22 = 885848/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 885299/*__LIB_7__::func_880*/;
			break;
		case 112:
			uParam0->f_13 = 885287/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 885278/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 330595/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 885141/*__LIB_7__::func_807*/;
			break;
		case 116:
			*uParam0 = 885093/*__LIB_5__::func_278*/;
			break;
		case 117:
			uParam0->f_16 = 384648/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 843236/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 843135/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 843110/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 885085/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 877996/*func_2553*/;
			break;
		case 125:
			uParam0->f_19 = 877940/*__LIB_4__::func_175*/;
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
				if (func_2627(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_2579(iParam1))
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
					__LIB_9__::func_324(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_4__::func_181(iParam1, 4);
				}
			}
			else
			{
				__LIB_7__::func_842(iParam1);
				__LIB_9__::func_324(&iParam0);
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
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2394(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_162())
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

int func_2605(int iParam0, var uParam1)//Position - 0xD8BCA
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
		if (Global_1946250.f_4539 != __LIB_0__::func_162())
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
				if (__LIB_0__::func_338(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_259(*uParam0, 14, 0), -1))
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
			func_330(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
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
			func_1412(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
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
			__LIB_6__::func_27(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
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
			func_2681(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
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
	iVar1 = __LIB_3__::func_785();
	bVar0 = iVar1 != 5;
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
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
		if (func_2493(iParam0, 0, 0))
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
		if (func_2493(iParam0, 1, 0))
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
		if (func_2493(iParam0, 0, 0))
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

void func_2683(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDC249
{
	if (iParam1 == 0)
	{
		if (func_2493(iParam0, 0, 0))
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
		if (func_2493(iParam0, 0, 0))
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

void func_2726(var uParam0, int iParam1)//Position - 0xDD6D6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 942548/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 942534/*__LIB_5__::func_565*/;
			break;
		case 1:
			uParam0->f_30 = 942435/*__LIB_4__::func_945*/;
			break;
		case 2:
			uParam0->f_31 = 941373/*__LIB_6__::func_898*/;
			break;
		case 3:
			uParam0->f_34 = 941219/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 941166/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 941111/*__LIB_4__::func_263*/;
			break;
		case 37:
			uParam0->f_18 = 940993/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 940861/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 940746/*__LIB_4__::func_944*/;
			break;
		case 11:
			uParam0->f_11 = 940736/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 939567/*__LIB_6__::func_973*/;
			break;
		case 14:
			uParam0->f_11 = 939558/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 938246/*__LIB_7__::func_753*/;
			break;
		case 8:
			uParam0->f_37 = 938202/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 938179/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 938155/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 938092/*__LIB_9__::func_795*/;
			break;
		case 15:
			uParam0->f_2 = 938012/*__LIB_9__::func_794*/;
			break;
		case 16:
			uParam0->f_5 = 937369/*__LIB_8__::func_929*/;
			break;
		case 108:
			uParam0->f_55 = 934229/*__LIB_10__::func_71*/;
			break;
		case 17:
			uParam0->f_17 = 933528/*__LIB_9__::func_274*/;
			break;
		case 19:
			uParam0->f_17 = 933502/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 933323/*__LIB_6__::func_897*/;
			break;
		case 21:
			uParam0->f_3 = 933259/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 932985/*__LIB_6__::func_971*/;
			break;
		case 75:
			uParam0->f_4 = 932969/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 932866/*__LIB_5__::func_561*/;
			break;
		case 23:
			uParam0->f_26 = 932819/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 932782/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 931955/*func_2830*/;
			break;
		case 25:
			uParam0->f_23 = 931589/*func_2827*/;
			break;
		case 27:
			uParam0->f_25 = 931207/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 931156/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 931148/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 930911/*__LIB_5__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 930790/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 930370/*__LIB_6__::func_896*/;
			break;
		case 34:
			uParam0->f_41 = 919077/*__LIB_7__::func_844*/;
			break;
		case 36:
			uParam0->f_58 = 919032/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 915944/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 915935/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 915926/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 915918/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 915869/*__LIB_4__::func_942*/;
			break;
		case 47:
			uParam0->f_43 = 915787/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 915023/*__LIB_6__::func_970*/;
			break;
		case 49:
			uParam0->f_8 = 914976/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 914917/*__LIB_5__::func_736*/;
			break;
		case 51:
			*uParam0 = 914685/*__LIB_6__::func_969*/;
			break;
		case 52:
			uParam0->f_15 = 914674/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 914632/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 914624/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 914615/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 914606/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 914564/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 914555/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 914546/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 914535/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 914493/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 914484/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 914476/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 913414/*__LIB_7__::func_57*/;
			break;
		case 66:
			uParam0->f_21 = 913111/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 912997/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 912154/*__LIB_6__::func_968*/;
			break;
		case 69:
			*uParam0 = 912145/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 912072/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 912063/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 912051/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 911849/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 911840/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 910107/*func_2745*/;
			break;
		case 87:
			uParam0->f_1 = 908654/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 908645/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 908637/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 908628/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 908619/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 908610/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 908602/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 908594/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 908422/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 908389/*__LIB_4__::func_215*/;
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
			func_330(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
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
		Var1 = { __LIB_4__::func_229(iParam0, __LIB_3__::func_616()) };
		Var2 = { __LIB_4__::func_228(iParam0, __LIB_3__::func_616()) };
		uVar3 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var4 = { __LIB_4__::func_227(iParam0, __LIB_3__::func_616()) };
		Var5 = { __LIB_4__::func_226(iParam0, __LIB_3__::func_616()) };
		uVar6 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var7 = { __LIB_4__::func_224(iParam0, __LIB_3__::func_616()) };
		Var8 = { __LIB_4__::func_223(iParam0, __LIB_3__::func_616()) };
		uVar9 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		Var10 = { __LIB_4__::func_222(iParam0, __LIB_3__::func_616()) };
		Var11 = { __LIB_4__::func_221(iParam0, __LIB_3__::func_616()) };
		uVar12 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
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
		return __LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2827(int iParam0, int iParam1)//Position - 0xE3705
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
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2830(var uParam0, var uParam1)//Position - 0xE3873
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_2831(uParam0, uParam1);
	}
}

void func_2831(var uParam0, var uParam1)//Position - 0xE3891
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_54(uParam0, uParam1);
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

void func_2894(var uParam0, int iParam1)//Position - 0xE61DD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1034285/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1034229/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1033885/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1033846/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1033813/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1033802/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1033738/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1033715/*__LIB_5__::func_306*/;
			break;
		case 79:
			*uParam0 = 1033691/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1033573/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1033494/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1033485/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1032889/*__LIB_9__::func_316*/;
			break;
		case 109:
			uParam0->f_56 = 1032881/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1027684/*__LIB_9__::func_796*/;
			break;
		case 13:
			uParam0->f_2 = 1027675/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1027660/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1027185/*__LIB_9__::func_277*/;
			break;
		case 108:
			uParam0->f_55 = 1023215/*__LIB_10__::func_72*/;
			break;
		case 17:
			uParam0->f_17 = 1022439/*__LIB_9__::func_276*/;
			break;
		case 19:
			uParam0->f_17 = 1022413/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1022202/*__LIB_9__::func_306*/;
			break;
		case 21:
			uParam0->f_3 = 1022039/*__LIB_7__::func_847*/;
			break;
		case 74:
			uParam0->f_53 = 1021430/*__LIB_7__::func_846*/;
			break;
		case 22:
			uParam0->f_24 = 1021348/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1020432/*func_2966*/;
			break;
		case 30:
			uParam0->f_8 = 1019181/*__LIB_7__::func_873*/;
			break;
		case 31:
			uParam0->f_39 = 1018506/*__LIB_9__::func_275*/;
			break;
		case 33:
			uParam0->f_40 = 1017603/*__LIB_9__::func_305*/;
			break;
		case 14:
			uParam0->f_11 = 1017594/*__LIB_0__::func_162*/;
			break;
		case 34:
			uParam0->f_41 = 1016819/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1016766/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 948343/*__LIB_7__::func_845*/;
			break;
		case 45:
			uParam0->f_14 = 948334/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 948325/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 948317/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 948294/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 948154/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 948119/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 948081/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 948057/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 948046/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 947967/*__LIB_8__::func_854*/;
			break;
		case 54:
			uParam0->f_45 = 947959/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 947950/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 947940/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 947651/*__LIB_8__::func_853*/;
			break;
		case 64:
			uParam0->f_47 = 946061/*__LIB_12__::func_284*/;
			break;
		case 65:
			uParam0->f_21 = 945098/*__LIB_7__::func_58*/;
			break;
		case 66:
			uParam0->f_21 = 944903/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 944800/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 944111/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 944102/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 944090/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 944081/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 944069/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 943695/*__LIB_6__::func_974*/;
			break;
		case 73:
			uParam0->f_51 = 943686/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 943569/*__LIB_7__::func_810*/;
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
							func_2967(iParam0);
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
							func_2967(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_2967(int iParam0)//Position - 0xF94C8
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3040(var uParam0, int iParam1)//Position - 0xFC836
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1097367/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1097127/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1094826/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1094617/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1094411/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1094333/*__LIB_4__::func_391*/;
			break;
		case 37:
			uParam0->f_18 = 1094194/*__LIB_4__::func_951*/;
			break;
		case 38:
			uParam0->f_9 = 1094138/*__LIB_6__::func_904*/;
			break;
		case 42:
			uParam0->f_10 = 1093977/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1093741/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1093727/*__LIB_5__::func_589*/;
			break;
		case 11:
			uParam0->f_11 = 1093718/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1090348/*__LIB_9__::func_500*/;
			break;
		case 14:
			uParam0->f_11 = 1090339/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1076649/*__LIB_5__::func_316*/;
			break;
		case 79:
			*uParam0 = 1076393/*__LIB_5__::func_588*/;
			break;
		case 13:
			uParam0->f_2 = 1076344/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1076133/*__LIB_9__::func_797*/;
			break;
		case 44:
			*uParam0 = 1076124/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1076095/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1075368/*__LIB_9__::func_280*/;
			break;
		case 108:
			uParam0->f_55 = 1071514/*__LIB_10__::func_73*/;
			break;
		case 17:
			uParam0->f_17 = 1070201/*__LIB_9__::func_279*/;
			break;
		case 19:
			uParam0->f_17 = 1070156/*__LIB_6__::func_983*/;
			break;
		case 20:
			uParam0->f_3 = 1069991/*__LIB_6__::func_903*/;
			break;
		case 21:
			uParam0->f_3 = 1069927/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1069700/*__LIB_6__::func_982*/;
			break;
		case 22:
			uParam0->f_24 = 1069577/*__LIB_5__::func_585*/;
			break;
		case 26:
			uParam0->f_38 = 1066199/*func_3178*/;
			break;
		case 25:
			uParam0->f_23 = 1065878/*func_3176*/;
			break;
		case 27:
			uParam0->f_25 = 1064729/*__LIB_8__::func_970*/;
			break;
		case 28:
			uParam0->f_24 = 1064617/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1064536/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1063646/*__LIB_8__::func_969*/;
			break;
		case 31:
			uParam0->f_39 = 1063099/*__LIB_5__::func_740*/;
			break;
		case 33:
			uParam0->f_40 = 1062417/*__LIB_7__::func_59*/;
			break;
		case 32:
			*uParam0 = 1062324/*__LIB_6__::func_980*/;
			break;
		case 34:
			uParam0->f_41 = 1053058/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1053000/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 949212/*__LIB_6__::func_975*/;
			break;
		case 45:
			uParam0->f_14 = 1052991/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1052982/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1052974/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1052925/*__LIB_4__::func_950*/;
			break;
		case 47:
			uParam0->f_43 = 1052633/*__LIB_4__::func_949*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1049608/*__LIB_8__::func_986*/;
			break;
		case 49:
			uParam0->f_8 = 1049504/*__LIB_4__::func_948*/;
			break;
		case 50:
			*uParam0 = 1049221/*__LIB_7__::func_814*/;
			break;
		case 51:
			*uParam0 = 1049059/*__LIB_6__::func_978*/;
			break;
		case 52:
			uParam0->f_15 = 1049048/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1048790/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1048528/*__LIB_7__::func_813*/;
			break;
		case 56:
			uParam0->f_46 = 1048519/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1047362/*__LIB_7__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 1047104/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1046825/*__LIB_5__::func_738*/;
			break;
		case 60:
			*uParam0 = 1046816/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1046805/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1046547/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1046539/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1046481/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1046331/*__LIB_7__::func_812*/;
			break;
		case 65:
			uParam0->f_21 = 1044625/*__LIB_7__::func_874*/;
			break;
		case 66:
			uParam0->f_21 = 1044314/*__LIB_5__::func_575*/;
			break;
		case 67:
			uParam0->f_21 = 1044162/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1043162/*__LIB_6__::func_976*/;
			break;
		case 69:
			*uParam0 = 1043153/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1042704/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1042425/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1042413/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1042180/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1042171/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1040076/*func_3061*/;
			break;
		case 87:
			uParam0->f_1 = 1037181/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1037172/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1037164/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1037138/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1037029/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1036318/*func_3047*/;
			break;
		case 100:
			uParam0->f_22 = 1036156/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1036029/*__LIB_7__::func_877*/;
			break;
		case 78:
			uParam0->f_59 = 1035739/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1035715/*__LIB_4__::func_313*/;
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
			func_330(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
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
		Var2 = { __LIB_4__::func_329(iVar0) };
		Var3 = { __LIB_4__::func_328(iVar0) };
		fVar4 = __LIB_4__::func_327(iVar0);
		fVar5 = __LIB_4__::func_326(iVar0);
		bVar6 = false;
		Var7 = { __LIB_4__::func_325(iVar0) };
		Var8 = { __LIB_4__::func_324(iVar0) };
		fVar9 = __LIB_4__::func_323(iVar0);
		return __LIB_6__::func_423(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_3176(int iParam0, int iParam1)//Position - 0x104396
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
		func_554(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_3178(var uParam0, var uParam1)//Position - 0x1044D7
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3192(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_3180(uParam0, uParam1);
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

void func_3180(var uParam0, var uParam1)//Position - 0x104562
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_55(uParam0, uParam1);
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
	func_554(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
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

void func_3192(var uParam0, var uParam1)//Position - 0x104AB6
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_56(uParam0, uParam1);
			break;
		case 1:
			func_3201(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_760(uParam0, uParam1);
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

void func_3271(var uParam0, int iParam1)//Position - 0x10BEA0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1104890/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1104834/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1104565/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1104504/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1104473/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1104409/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1104400/*__LIB_0__::func_162*/;
			break;
		case 11:
			uParam0->f_11 = 1104391/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1104382/*__LIB_0__::func_162*/;
			break;
		case 12:
			uParam0->f_33 = 1104171/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1104163/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1104139/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1104130/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1103188/*__LIB_9__::func_501*/;
			break;
		case 75:
			uParam0->f_4 = 1103179/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1103154/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1103145/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1103120/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1103109/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1103100/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1103091/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1102623/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1102504/*__LIB_5__::func_596*/;
			break;
		case 25:
			uParam0->f_23 = 1101734/*func_3313*/;
			break;
		case 30:
			uParam0->f_8 = 1101588/*__LIB_5__::func_595*/;
			break;
		case 31:
			uParam0->f_39 = 1101577/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1101370/*__LIB_9__::func_282*/;
			break;
		case 34:
			uParam0->f_41 = 1101053/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1101000/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1100227/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1100218/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1100209/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1100201/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1100190/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1099951/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1099942/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1099933/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1099924/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1099913/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1099902/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1099894/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1099885/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1099876/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1099583/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1099039/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1099031/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1098963/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1098823/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1098379/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1098370/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1098358/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1098349/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1098337/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1098328/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1098320/*__LIB_0__::func_467*/;
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
						func_3314(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3314(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3314(int iParam0)//Position - 0x10D1D0
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3349(var uParam0, int iParam1)//Position - 0x10DC03
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1203842/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1203738/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1203003/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1202921/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1202778/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1202768/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1202633/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1202566/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1202454/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1202215/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1202206/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1201706/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1201697/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1201689/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1201665/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1201585/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1201489/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1201284/*__LIB_9__::func_798*/;
			break;
		case 75:
			uParam0->f_4 = 1201268/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1200459/*__LIB_8__::func_936*/;
			break;
		case 108:
			uParam0->f_55 = 1195752/*__LIB_10__::func_74*/;
			break;
		case 17:
			uParam0->f_17 = 1194935/*__LIB_10__::func_19*/;
			break;
		case 19:
			uParam0->f_17 = 1194909/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1194825/*__LIB_5__::func_616*/;
			break;
		case 21:
			uParam0->f_3 = 1194761/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1194609/*__LIB_5__::func_330*/;
			break;
		case 22:
			uParam0->f_24 = 1194442/*__LIB_5__::func_615*/;
			break;
		case 25:
			uParam0->f_23 = 1193296/*func_3536*/;
			break;
		case 30:
			uParam0->f_8 = 1192678/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1192367/*__LIB_5__::func_749*/;
			break;
		case 33:
			uParam0->f_40 = 1191428/*__LIB_7__::func_62*/;
			break;
		case 34:
			uParam0->f_41 = 1190068/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1190010/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1142305/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1142296/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1142287/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1142279/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1142256/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1142128/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1142087/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1141819/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1141750/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1141739/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1141505/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1141155/*func_3511*/;
			break;
		case 56:
			uParam0->f_46 = 1141146/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1141075/*__LIB_7__::func_28*/;
			break;
		case 58:
			uParam0->f_13 = 1140841/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1140641/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1139743/*__LIB_7__::func_61*/;
			break;
		case 66:
			uParam0->f_21 = 1139017/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1136718/*__LIB_6__::func_986*/;
			break;
		case 68:
			*uParam0 = 1136085/*__LIB_6__::func_985*/;
			break;
		case 69:
			*uParam0 = 1136076/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1136064/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1136055/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1136043/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1135350/*__LIB_6__::func_984*/;
			break;
		case 84:
			uParam0->f_1 = 1134810/*func_3459*/;
			break;
		case 85:
			uParam0->f_1 = 1130708/*func_3451*/;
			break;
		case 87:
			uParam0->f_1 = 1126720/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1126206/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1126035/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1125829/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1125663/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1124211/*func_3424*/;
			break;
		case 94:
			uParam0->f_1 = 1120075/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1119779/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1119749/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1119082/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1116433/*func_3387*/;
			break;
		case 100:
			uParam0->f_22 = 1108370/*__LIB_7__::func_882*/;
			break;
		case 101:
			uParam0->f_22 = 1106427/*__LIB_7__::func_881*/;
			break;
		case 78:
			uParam0->f_59 = 1106207/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1106183/*__LIB_4__::func_412*/;
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
			if (Global_1853191 != __LIB_0__::func_162())
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
					if (__LIB_1__::func_693(bVar2, 0, 1) && !__LIB_4__::func_972(bVar2))
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
					if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_2__::func_717(bVar5) == iParam0) && __LIB_3__::func_171(bVar5))
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
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_5__::func_602(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_6__::func_425(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_417(0));
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
		if ((*uParam3)[iVar1] != __LIB_0__::func_162() && __LIB_1__::func_693((*uParam3)[iVar1], 1, 1))
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
		else if (func_241(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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
	__LIB_6__::func_426(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_5__::func_514(iParam1, 0);
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
					func_330(&iVar1, &(uParam1->f_122), 24);
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

void func_3511(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x1169A3
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_5__::func_423(iParam0))
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
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_555(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_555(bVar7))
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
						func_3537(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3537(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3537(int iParam0)//Position - 0x1237E0
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3594(var uParam0, int iParam1)//Position - 0x125E8B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1232142/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1232086/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1231817/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1231758/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1231727/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1231609/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1231525/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1231461/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1231438/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1231429/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1230976/*__LIB_12__::func_69*/;
			break;
		case 14:
			uParam0->f_11 = 1230967/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1230959/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1230935/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1230926/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1225854/*__LIB_12__::func_283*/;
			break;
		case 75:
			uParam0->f_4 = 1225845/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1225661/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1222562/*__LIB_16__::func_189*/;
			break;
		case 17:
			uParam0->f_17 = 1222056/*__LIB_10__::func_22*/;
			break;
		case 19:
			uParam0->f_17 = 1222030/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1221952/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1221889/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1221674/*__LIB_9__::func_134*/;
			break;
		case 22:
			uParam0->f_24 = 1221555/*__LIB_5__::func_627*/;
			break;
		case 25:
			uParam0->f_23 = 1220608/*func_3696*/;
			break;
		case 30:
			uParam0->f_8 = 1220044/*__LIB_5__::func_626*/;
			break;
		case 31:
			uParam0->f_39 = 1219866/*__LIB_5__::func_625*/;
			break;
		case 33:
			uParam0->f_40 = 1218754/*__LIB_12__::func_9*/;
			break;
		case 34:
			uParam0->f_41 = 1218060/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1218007/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1217430/*__LIB_6__::func_908*/;
			break;
		case 45:
			uParam0->f_14 = 1217421/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1217412/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1217235/*__LIB_10__::func_21*/;
			break;
		case 77:
			uParam0->f_13 = 1217224/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1216726/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1216685/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1216676/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1216667/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1216656/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1216645/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1216637/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1216628/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1216619/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1216390/*__LIB_11__::func_983*/;
			break;
		case 64:
			uParam0->f_47 = 1210398/*__LIB_13__::func_81*/;
			break;
		case 65:
			uParam0->f_21 = 1208666/*__LIB_10__::func_23*/;
			break;
		case 66:
			uParam0->f_21 = 1208340/*__LIB_6__::func_392*/;
			break;
		case 67:
			uParam0->f_21 = 1207615/*__LIB_7__::func_819*/;
			break;
		case 68:
			*uParam0 = 1207070/*__LIB_6__::func_987*/;
			break;
		case 69:
			*uParam0 = 1207061/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1207049/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1207040/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1207028/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1205312/*__LIB_7__::func_30*/;
			break;
		case 78:
			uParam0->f_59 = 1204862/*__LIB_8__::func_987*/;
			break;
		case 125:
			uParam0->f_19 = 1204846/*__LIB_4__::func_516*/;
			break;
	}
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_555(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_555(bVar7))
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
						__LIB_12__::func_9(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_12__::func_9(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_11__::func_984(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3697(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_984(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3697(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3697(int iParam0)//Position - 0x12A293
{
	__LIB_12__::func_9(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3768(var uParam0, int iParam1)//Position - 0x12CD17
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1284641/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1284561/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1284062/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1284012/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1283925/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1283915/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1283797/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1283675/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1283587/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1283573/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1283564/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1283185/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1283176/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1283168/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1283144/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1283012/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1282730/*__LIB_9__::func_799*/;
			break;
		case 75:
			uParam0->f_4 = 1282716/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1282198/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1278574/*__LIB_10__::func_75*/;
			break;
		case 17:
			uParam0->f_17 = 1278038/*__LIB_8__::func_939*/;
			break;
		case 19:
			uParam0->f_17 = 1278012/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1277925/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1277861/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1277681/*__LIB_6__::func_910*/;
			break;
		case 22:
			uParam0->f_24 = 1277538/*__LIB_5__::func_642*/;
			break;
		case 25:
			uParam0->f_23 = 1276914/*func_3892*/;
			break;
		case 30:
			uParam0->f_8 = 1276399/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1276114/*__LIB_5__::func_756*/;
			break;
		case 33:
			uParam0->f_40 = 1275443/*__LIB_7__::func_65*/;
			break;
		case 34:
			uParam0->f_41 = 1274179/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1274134/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1248091/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1248082/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1248073/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1248065/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1248042/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1247938/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1247897/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1247683/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1247614/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1247603/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1247465/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1247277/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1247268/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1247091/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1246953/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1246945/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1246109/*__LIB_7__::func_64*/;
			break;
		case 66:
			uParam0->f_21 = 1246002/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1245938/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1245450/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1245441/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1245429/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1245420/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1245408/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1244702/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1244602/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1242618/*func_3841*/;
			break;
		case 87:
			uParam0->f_1 = 1240195/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1240186/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1240123/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1239802/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1235795/*func_3790*/;
			break;
		case 100:
			uParam0->f_22 = 1233519/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1233315/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1233299/*__LIB_4__::func_516*/;
			break;
	}
}

int func_3790(int iParam0, int* iParam1)//Position - 0x12DB53
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_330(&iVar0, &(iParam1->f_109), 12);
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
			__LIB_3__::func_633(&(iParam1->f_109));
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
		bVar1 = __LIB_4__::func_607(iParam0, &(iParam1->f_109));
	}
	__LIB_6__::func_429(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_7__::func_63(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_5__::func_514(iParam1, 0);
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
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_555(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_555(bVar7))
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
						func_3893(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3893(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3893(int iParam0)//Position - 0x137E34
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3936(var uParam0, int iParam1)//Position - 0x139A2A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1294152/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1294096/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1293877/*__LIB_5__::func_807*/;
			break;
		case 3:
			uParam0->f_34 = 1293826/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1293793/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1293729/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1293720/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1293696/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1293687/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1293595/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1293586/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1293578/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1293326/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1293317/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1293308/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1293299/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1293290/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1293246/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1293235/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1293188/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1293136/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1293080/*__LIB_5__::func_806*/;
			break;
		case 22:
			uParam0->f_24 = 1292998/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1292031/*func_3973*/;
			break;
		case 30:
			uParam0->f_8 = 1291726/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1291695/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1291505/*__LIB_9__::func_285*/;
			break;
		case 34:
			uParam0->f_41 = 1287502/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1287449/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1286258/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1286249/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1286240/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1286232/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1286221/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1286118/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1286093/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1286055/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1286046/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1286035/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1285954/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1285946/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1285937/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1285927/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1285720/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1285712/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1285704/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1285696/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1285688/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1285679/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1285670/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1285658/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1285649/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1285637/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1285628/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1285619/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1285611/*__LIB_0__::func_467*/;
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
						func_3974(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3974(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3974(int iParam0)//Position - 0x13B97C
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4001(var uParam0, int iParam1)//Position - 0x13BF51
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1373735/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1373679/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1372134/*__LIB_11__::func_992*/;
			break;
		case 3:
			uParam0->f_34 = 1372085/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1372052/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1371988/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1371965/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1371941/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1371823/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1371756/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1371747/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1371402/*__LIB_12__::func_78*/;
			break;
		case 14:
			uParam0->f_11 = 1371393/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1371385/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1366061/*__LIB_12__::func_285*/;
			break;
		case 13:
			uParam0->f_2 = 1366052/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1366043/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1366018/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1357821/*__LIB_17__::func_835*/;
			break;
		case 17:
			uParam0->f_17 = 1357239/*__LIB_12__::func_77*/;
			break;
		case 19:
			uParam0->f_17 = 1357213/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1357152/*__LIB_12__::func_71*/;
			break;
		case 21:
			uParam0->f_3 = 1357032/*__LIB_5__::func_810*/;
			break;
		case 74:
			uParam0->f_53 = 1356976/*__LIB_5__::func_809*/;
			break;
		case 22:
			uParam0->f_24 = 1356894/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1355922/*func_4095*/;
			break;
		case 30:
			uParam0->f_8 = 1355182/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1354912/*__LIB_5__::func_760*/;
			break;
		case 33:
			uParam0->f_40 = 1353976/*__LIB_12__::func_76*/;
			break;
		case 34:
			uParam0->f_41 = 1350632/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1350579/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1349896/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1349887/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1349878/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1349435/*__LIB_16__::func_191*/;
			break;
		case 77:
			uParam0->f_13 = 1349424/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1349321/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1349296/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1349258/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1349234/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1349223/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1349144/*__LIB_11__::func_988*/;
			break;
		case 54:
			uParam0->f_45 = 1349136/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1349127/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1349117/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1348888/*__LIB_11__::func_987*/;
			break;
		case 64:
			uParam0->f_47 = 1302562/*__LIB_16__::func_193*/;
			break;
		case 65:
			uParam0->f_21 = 1301424/*__LIB_10__::func_24*/;
			break;
		case 66:
			uParam0->f_21 = 1301201/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1300306/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1299761/*__LIB_6__::func_989*/;
			break;
		case 69:
			*uParam0 = 1299752/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1299740/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1299731/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1299719/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1297625/*__LIB_9__::func_286*/;
			break;
		case 73:
			uParam0->f_51 = 1295857/*__LIB_31__::func_174*/;
			break;
		case 78:
			uParam0->f_59 = 1295324/*__LIB_8__::func_974*/;
			break;
	}
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
	if (__LIB_12__::func_71(PLAYER::PLAYER_ID(), iParam0))
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_555(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_555(bVar7))
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
						__LIB_12__::func_76(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_12__::func_76(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_11__::func_989(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4096(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_989(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4096(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4096(int iParam0)//Position - 0x14B325
{
	__LIB_12__::func_76(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4167(var uParam0, int iParam1)//Position - 0x14F630
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1409708/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1409592/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1408361/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1408291/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1408118/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1407994/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1407771/*__LIB_6__::func_399*/;
			break;
		case 111:
			uParam0->f_35 = 1407757/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1407733/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1407615/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1407377/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1407368/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1405664/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1405655/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1405647/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1405141/*__LIB_9__::func_801*/;
			break;
		case 13:
			uParam0->f_2 = 1405102/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1405093/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1405084/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1404616/*__LIB_9__::func_509*/;
			break;
		case 108:
			uParam0->f_55 = 1402577/*__LIB_9__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1400443/*__LIB_9__::func_507*/;
			break;
		case 19:
			uParam0->f_17 = 1400417/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1400333/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1400233/*__LIB_6__::func_918*/;
			break;
		case 74:
			uParam0->f_53 = 1400066/*__LIB_5__::func_369*/;
			break;
		case 22:
			uParam0->f_24 = 1399963/*__LIB_5__::func_662*/;
			break;
		case 25:
			uParam0->f_23 = 1399311/*func_4289*/;
			break;
		case 30:
			uParam0->f_8 = 1398811/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1398518/*__LIB_5__::func_762*/;
			break;
		case 33:
			uParam0->f_40 = 1397520/*__LIB_9__::func_506*/;
			break;
		case 32:
			*uParam0 = 1397416/*__LIB_5__::func_814*/;
			break;
		case 34:
			uParam0->f_41 = 1395271/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1308010/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1395211/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1395202/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1395193/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1394927/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1394916/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1394776/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1394735/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1394538/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1394454/*__LIB_6__::func_916*/;
			break;
		case 52:
			uParam0->f_15 = 1394443/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1394161/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1394153/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1394144/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1394083/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1393801/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1391884/*__LIB_10__::func_25*/;
			break;
		case 65:
			uParam0->f_21 = 1391841/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1391138/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1390054/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1389463/*__LIB_6__::func_991*/;
			break;
		case 69:
			*uParam0 = 1389454/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1389442/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1389433/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1389421/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1386747/*__LIB_9__::func_520*/;
			break;
		case 84:
			uParam0->f_1 = 1384901/*func_4212*/;
			break;
		case 85:
			uParam0->f_1 = 1382567/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1378342/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1378333/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1378290/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1377989/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1377226/*func_4179*/;
			break;
		case 94:
			uParam0->f_1 = 1375724/*__LIB_8__::func_275*/;
			break;
		case 102:
			uParam0->f_1 = 1375156/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1375148/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1375073/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1374999/*__LIB_8__::func_975*/;
			break;
		case 125:
			uParam0->f_19 = 1374975/*__LIB_4__::func_688*/;
			break;
	}
}

int func_4179(var uParam0, var uParam1)//Position - 0x1503CA
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
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

int func_4212(int iParam0, var uParam1)//Position - 0x1521C5
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
				func_1412(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
	if (__LIB_6__::func_769(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
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
				func_1412(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
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
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_555(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_555(bVar7))
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
						func_4290(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4290(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4290(int iParam0)//Position - 0x155C6D
{
	__LIB_9__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4341(var uParam0, int iParam1)//Position - 0x1582B5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1451708/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1449390/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1449327/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1449271/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1448556/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1448548/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1448539/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1448515/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1448506/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1446678/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1446669/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1446661/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1446652/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1446643/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1446634/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1446625/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1446616/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1446591/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1446580/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1446571/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1446562/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1446553/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1446545/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1446537/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1445376/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1445365/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1445337/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1445328/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1445283/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1411601/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1411592/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1411583/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1411575/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1411564/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1411556/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1411547/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1411227/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1411198/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1411167/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1411133/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1411089/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1411060/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1411051/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1410994/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1410986/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1410978/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1410970/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1410962/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1410936/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1410910/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1410898/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1410889/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1410877/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1410868/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1410860/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1410677/*__LIB_7__::func_855*/;
			break;
	}
}

void func_4419(var uParam0, int iParam1)//Position - 0x162BAD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1495570/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1495260/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1490320/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1490291/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1490097/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1489747/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1489605/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1489581/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1489045/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1488940/*__LIB_7__::func_823*/;
			break;
		case 11:
			uParam0->f_11 = 1488931/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1488826/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1488817/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1488809/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1488800/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1488791/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1488502/*__LIB_9__::func_802*/;
			break;
		case 75:
			uParam0->f_4 = 1488493/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1488409/*__LIB_7__::func_39*/;
			break;
		case 108:
			uParam0->f_55 = 1488400/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1487780/*__LIB_7__::func_859*/;
			break;
		case 19:
			uParam0->f_17 = 1487580/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1487516/*__LIB_7__::func_768*/;
			break;
		case 21:
			uParam0->f_3 = 1487456/*__LIB_7__::func_37*/;
			break;
		case 74:
			uParam0->f_53 = 1487447/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1487206/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1486833/*func_4458*/;
			break;
		case 30:
			uParam0->f_8 = 1486695/*__LIB_7__::func_858*/;
			break;
		case 31:
			uParam0->f_39 = 1486255/*__LIB_7__::func_857*/;
			break;
		case 33:
			uParam0->f_40 = 1485590/*__LIB_7__::func_856*/;
			break;
		case 34:
			uParam0->f_41 = 1483012/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1482967/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1457124/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1456896/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1456720/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1456712/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1456701/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1456459/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1456427/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1456361/*__LIB_10__::func_5*/;
			break;
		case 51:
			*uParam0 = 1456337/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1456154/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1455559/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1455322/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1455313/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1455248/*__LIB_7__::func_35*/;
			break;
		case 58:
			uParam0->f_13 = 1454826/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1454818/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1454810/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1454750/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1454732/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1454723/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1454714/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1454210/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1454062/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1454017/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1454008/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1454000/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1453984/*__LIB_4__::func_516*/;
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
	if (__LIB_1__::func_802(PLAYER::PLAYER_ID()) && __LIB_7__::func_768(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_769(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_555(bVar2))
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

void func_4496(var uParam0, int iParam1)//Position - 0x16D21B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1530681/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1530571/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1528117/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1528088/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1527928/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1527810/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1527593/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1527569/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1527451/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1527300/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1527291/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1526288/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1526279/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1526271/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1526262/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1526108/*__LIB_9__::func_803*/;
			break;
		case 75:
			uParam0->f_4 = 1526099/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1526011/*__LIB_7__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1525224/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1524596/*__LIB_7__::func_69*/;
			break;
		case 19:
			uParam0->f_17 = 1524570/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1524531/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1524471/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1524462/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1524409/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1524105/*func_4585*/;
			break;
		case 30:
			uParam0->f_8 = 1523982/*__LIB_7__::func_861*/;
			break;
		case 31:
			uParam0->f_39 = 1523762/*__LIB_5__::func_765*/;
			break;
		case 33:
			uParam0->f_40 = 1523475/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1523069/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1523024/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1505423/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1505414/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1505330/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1505322/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1505299/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1505247/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1505215/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1505037/*__LIB_8__::func_977*/;
			break;
		case 51:
			*uParam0 = 1504940/*__LIB_9__::func_319*/;
			break;
		case 52:
			uParam0->f_15 = 1504929/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1504614/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1503750/*__LIB_9__::func_318*/;
			break;
		case 56:
			uParam0->f_46 = 1503741/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1498934/*__LIB_9__::func_325*/;
			break;
		case 58:
			uParam0->f_13 = 1498920/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1497412/*__LIB_9__::func_522*/;
			break;
		case 65:
			uParam0->f_21 = 1497404/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1497353/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1497325/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1497316/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1497307/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1497023/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1496927/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1496915/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1496729/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1496557/*__LIB_6__::func_13*/;
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
	if (__LIB_1__::func_744(PLAYER::PLAYER_ID()) && __LIB_5__::func_820(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_816(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_555(bVar2))
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

void func_4629(var uParam0, int iParam1)//Position - 0x175B42
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1558472/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1558326/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1553136/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1553107/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1552697/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1552527/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1552132/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1552108/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1552099/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1552004/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1551995/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1551987/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1551978/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1551693/*__LIB_10__::func_63*/;
			break;
		case 75:
			uParam0->f_4 = 1551684/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1551596/*__LIB_7__::func_42*/;
			break;
		case 108:
			uParam0->f_55 = 1551587/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1551334/*__LIB_7__::func_825*/;
			break;
		case 19:
			uParam0->f_17 = 1551308/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1551299/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1551290/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1551281/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1551273/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1551265/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1551142/*__LIB_7__::func_863*/;
			break;
		case 31:
			uParam0->f_39 = 1550896/*__LIB_7__::func_824*/;
			break;
		case 33:
			uParam0->f_40 = 1550640/*__LIB_6__::func_347*/;
			break;
		case 34:
			uParam0->f_41 = 1548487/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1548442/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1533992/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1533983/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1533974/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1533966/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1533955/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1533903/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1533871/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1533742/*__LIB_7__::func_41*/;
			break;
		case 51:
			*uParam0 = 1533718/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1533707/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1533056/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1532420/*__LIB_7__::func_862*/;
			break;
		case 56:
			uParam0->f_46 = 1532411/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1532344/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1532330/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1531951/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1531876/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1531825/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1531807/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1531798/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1531789/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1531672/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1531663/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1531651/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1531642/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1531634/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4702(var uParam0, int iParam1)//Position - 0x17C7D1
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1558939/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1558930/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1558921/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1558761/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1558753/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1558598/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4710(var uParam0, int iParam1)//Position - 0x17C9A4
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1559156/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1559147/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1559138/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1558761/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1559129/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1559065/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4716(var uParam0, int iParam1)//Position - 0x17CA7D
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1559383/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1559374/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1558761/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1559365/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1559265/*__LIB_8__::func_992*/;
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
	if ((Global_1946250.f_4590 == iParam1 && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_OUT())
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
	__LIB_0__::func_794(&(Global_1946250.f_530));
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	__LIB_5__::func_453();
	__LIB_5__::func_452();
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
	__LIB_0__::func_202();
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
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_131, 2, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_133, 33, 0);
	if (!__LIB_0__::func_934())
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

