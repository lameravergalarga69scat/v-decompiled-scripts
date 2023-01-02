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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	struct<2> Local_66 = { 0, 0 } ;
	var uLocal_67[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<571> Local_70 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	var uLocal_72 = 12;
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
	var uLocal_85 = 12;
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
	var uLocal_98 = 12;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 9;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 9;
	var uLocal_122 = 0;
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
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	struct<20> Local_140 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_141 = 0;
	bool bLocal_142 = 0;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	struct<3> Local_145 = { 0, 0, 0 } ;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	char* sLocal_155 = NULL;
	char* sLocal_156 = NULL;
	char* sLocal_157 = NULL;
	char* sLocal_158 = NULL;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	bool bLocal_176 = 0;
	int iLocal_177 = 0;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	struct<16> Local_182 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	struct<4> Local_195 = { 0, 0, 0, 0 } ;
	struct<4> Local_196 = { 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_153 = -1;
	sLocal_158 = "MISSTATTOO_PARLOUR@SHOP_IG_4BPLAYER";
	iLocal_184 = 207;
	StringCopy(&Local_195, "", 16);
	iLocal_68 = ScriptParam_196.f_0;
	iLocal_69 = func_1019(iLocal_68);
	MISC::SET_BIT(&(Global_100493.f_1393[iLocal_68]), 16);
	func_1015(ScriptParam_196.f_3);
	__LIB_14__::func_937(iLocal_68);
	if (__LIB_9__::func_354(1))
	{
		iLocal_175 = 1;
	}
	Local_70.f_3 = -1;
	func_1012(&uLocal_186, iLocal_68, 0);
	Global_1945923 = 0;
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1011(&(Local_70.f_12));
		if (__LIB_15__::func_117(iLocal_68) && !__LIB_39__::func_756(&Local_70, iLocal_68))
		{
			if (__LIB_16__::func_505(&Local_70))
			{
				func_998(iLocal_68);
				iVar0 = 0;
				__LIB_42__::func_694(&Local_70, &iVar0, 0, Local_70.f_43);
				func_980(&Local_70, &(Local_70.f_116));
				if (Local_70.f_9)
				{
					if (!__LIB_17__::func_598(Local_70.f_0))
					{
						func_967(&Local_70, &(Local_70.f_116), 0);
					}
				}
				func_966();
				func_958();
				func_957();
				switch (Local_70.f_11)
				{
					case 0:
						func_946();
						break;
					case 1:
						__LIB_16__::func_557(0);
						func_941();
						if (Local_70.f_11 == 2)
						{
							func_917();
						}
						break;
					case 2:
						func_917();
						func_913(&Local_70, &(Local_70.f_116));
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							__LIB_42__::func_692(&Local_70);
						}
						break;
					case 3:
						if (!func_897(Local_70.f_0))
						{
							func_894(&Local_70, func_896(iLocal_69, Local_70.f_0));
						}
						func_889();
						func_851();
						func_850();
						break;
					case 4:
						func_889();
						func_250();
						func_913(&Local_70, &(Local_70.f_116));
						break;
					case 5:
						func_889();
						Local_70.f_11 = 1;
						break;
					}
			}
		}
		else
		{
			func_21(0);
		}
		if (__LIB_39__::func_754(&Local_70))
		{
			func_8();
		}
		func_1();
	}
}

void func_1()//Position - 0x22E
{
	bool bVar0;
	int iVar1;
	if (Local_70.f_9 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_67[PLAYER::PLAYER_ID()] = Global_100493.f_1393[Local_70.f_0];
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			__LIB_16__::func_510(Local_70.f_0);
			if (Local_70.f_569)
			{
				if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Local_70.f_570))
				{
					bVar0 = true;
					if ((!BitTest(Global_100493.f_1393[Local_70.f_0], 0) && !BitTest(Global_100493.f_1393[Local_70.f_0], 5)) && (!ENTITY::DOES_ENTITY_EXIST(Local_70.f_12) || PED::IS_PED_INJURED(Local_70.f_12)))
					{
						iVar1 = 0;
						while (iVar1 < 32)
						{
							if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar1), 1, 1))
							{
								if (BitTest(uLocal_67[iVar1], 5))
								{
									bVar0 = false;
									iVar1 = 33;
								}
							}
							iVar1++;
						}
					}
					else
					{
						bVar0 = false;
					}
					if (Global_2815059.f_5117)
					{
						bVar0 = false;
					}
					__LIB_14__::func_940(Local_70.f_0, bVar0, 0, 1);
					Local_70.f_569 = 0;
				}
			}
			else
			{
				Local_70.f_570 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
				Local_70.f_569 = 1;
			}
		}
		else
		{
			Local_70.f_570 = NETWORK::GET_NETWORK_TIME();
			Local_70.f_569 = 1;
		}
	}
}

void func_8()//Position - 0x3CCF
{
	func_21(1);
	func_9(&Local_70);
}

void func_9(var uParam0)//Position - 0x3CE2
{
	int iVar0;
	__LIB_13__::func_841(&(uParam0->f_116));
	__LIB_13__::func_840(uParam0);
	__LIB_13__::func_839(&(uParam0->f_236));
	__LIB_13__::func_838(&(uParam0->f_184));
	iVar0 = 0;
	while (iVar0 < uParam0->f_442)
	{
		uParam0->f_442[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_447)
	{
		uParam0->f_447[iVar0] = 0;
		iVar0++;
	}
}

void func_21(bool bParam0)//Position - 0x4407
{
	__LIB_16__::func_557(1);
	if (Local_70.f_116.f_19)
	{
		if (__LIB_10__::func_320())
		{
			__LIB_9__::func_341();
			Global_2714762.f_785.f_33[0] = Local_70.f_498;
			Global_2714762.f_785.f_33[1] = Local_70.f_116.f_3;
			Global_2714762.f_785.f_39 = Local_70.f_116;
			Global_2714762.f_785.f_33[2] = Local_70.f_116.f_1;
			Global_2714762.f_785.f_40 = 1;
		}
	}
	if (Local_70.f_3 != -1)
	{
		__LIB_3__::func_122(&(Local_70.f_3));
	}
	__LIB_42__::func_689(&Local_70, iLocal_68);
	__LIB_13__::func_862(&(Local_70.f_51));
	if (Local_70.f_116.f_19)
	{
		__LIB_15__::func_133(&(Local_70.f_116), 1, 1, 1, 1);
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		__LIB_0__::func_963(0, 1, 1, 0);
		__LIB_13__::func_610(1);
		func_167();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Global_262145.f_2460 /* Tunable: IS_SALE_ON_IN_TATTOO_SHOP */)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShops");
			}
		}
		__LIB_1__::func_895(1, Local_70.f_0);
		__LIB_14__::func_423(Local_70.f_0, 0);
		func_158();
		Global_100493.f_1554 = 0;
		if (!Global_78319 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_157();
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
			func_34(PLAYER::PLAYER_PED_ID());
		}
		__LIB_43__::func_570(0);
		func_28();
		Local_140.f_19 = 0;
		__LIB_16__::func_382(&Local_140, 1);
	}
	if (!PED::IS_PED_INJURED(Local_70.f_12))
	{
		if (__LIB_16__::func_422(0))
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_70.f_12, true);
		}
		if (Local_70.f_10)
		{
			if (__LIB_14__::func_311(iLocal_68) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(Local_70.f_12));
			}
		}
		else if (bParam0)
		{
			if (__LIB_14__::func_311(iLocal_68) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(Local_70.f_12));
			}
		}
		else if (__LIB_14__::func_311(iLocal_68) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		else
		{
			PED::SET_PED_KEEP_TASK(Local_70.f_12, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_70.f_12));
		}
	}
	else
	{
		Local_70.f_12 = 0;
	}
	if (Local_70.f_12.f_28)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_70.f_12.f_3);
		Local_70.f_12.f_28 = 0;
	}
	if (!PED::IS_PED_INJURED(Local_70.f_43))
	{
		if (Local_70.f_10)
		{
			PED::DELETE_PED(&(Local_70.f_43));
		}
		else if (bParam0)
		{
			PED::DELETE_PED(&(Local_70.f_43));
		}
		else
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_70.f_43, false);
			PED::SET_PED_KEEP_TASK(Local_70.f_43, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_70.f_43));
		}
	}
	else
	{
		Local_70.f_43 = 0;
	}
	if (Local_70.f_43.f_7)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_70.f_43.f_1);
		Local_70.f_43.f_7 = 0;
	}
	if (iLocal_138)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_137);
		iLocal_138 = 0;
	}
	func_23();
	MISC::CLEAR_BIT(&Global_78567, 9);
	if (!Global_78319 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
	}
	if (bParam0)
	{
		__LIB_13__::func_836("Resetting script", -1);
		MISC::SET_BIT(&(Global_100493.f_1393[iLocal_68]), 11);
	}
	else
	{
		Global_1945923 = 0;
		if (iLocal_68 == 54)
		{
			Global_1945925 = -1;
			AUDIO::STOP_AUDIO_SCENE("Ls_Car_Meet_Tattoo_Shop_Scene");
		}
		__LIB_13__::func_836("Terminating script", -1);
		MISC::CLEAR_BIT(&(Global_100493.f_1393[iLocal_68]), 16);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_23()//Position - 0x4730
{
	func_24();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_157))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_157);
	}
}

void func_24()//Position - 0x474E
{
	if (iLocal_159)
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_155);
		STREAMING::REMOVE_ANIM_DICT(sLocal_156);
	}
}

void func_28()//Position - 0x4977
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2) && !PED::IS_PED_INJURED(Local_71.f_2))
	{
		iVar0 = Local_71.f_2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 1, false);
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 0, false);
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 4, false);
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 5, false);
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 2, false);
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 3, false);
	}
}

void func_34(int iParam0)//Position - 0x4A8C
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (Global_78319)
		{
			func_50(&iParam0, -1, 0, 0);
		}
		else
		{
			__LIB_36__::func_910(iParam0);
		}
	}
}

void func_50(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x820E
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
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__::getGlobal_1574918();
	}
	if (!bParam3)
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(*iParam0);
	}
	iVar1 = __LIB_0__::func_276(*iParam0);
	bVar2 = func_150(*iParam0, 0);
	bVar3 = __LIB_1__::func_37(*iParam0);
	bVar4 = func_141(*iParam0, -1);
	if (!bParam2)
	{
		if (func_61(*iParam0))
		{
			bParam2 = true;
		}
	}
	if (bParam2)
	{
		bVar3 = true;
	}
	iVar5 = 0;
	while (iVar5 < 127)
	{
		if (__LIB_0__::func_549(iVar5, iParam1))
		{
			if (__LIB_0__::func_445(&Var0, iVar5, iVar1, *iParam0, -1))
			{
				if (__LIB_0__::func_674(*iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
				{
					if (!bParam3)
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
		}
		iVar5++;
	}
	if (__LIB_0__::func_549(123, -1))
	{
		if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
		{
			if (!bParam3)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
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
				if (__LIB_0__::func_549(iVar9, iParam1))
				{
					if (__LIB_0__::func_674(*iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
					{
						if (!bParam3)
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_260(*iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
		}
		iVar6++;
	}
}

int func_61(int iParam0)//Position - 0xB88C
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_66(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_66(iParam0, 11, -1);
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

int func_66(int iParam0, int iParam1, int iParam2)//Position - 0xC1C8
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
				if (func_75(iParam0, iParam1, iVar0))
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
				if (func_75(iParam0, iParam1, iVar1))
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

int func_75(int iParam0, int iParam1, int iParam2)//Position - 0xC740
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
				if (!func_75(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_75(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_75(iParam0, 14, iVar6))
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
			if (!func_75(iParam0, 14, uVar11[iVar10]))
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
						return func_75(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_75(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_141(int iParam0, int iParam1)//Position - 0x2BBF8
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
				iVar3 = func_66(iParam0, 11, -1);
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
				iVar5 = func_66(iParam0, 11, -1);
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

int func_150(int iParam0, bool bParam1)//Position - 0x2C05A
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_66(iParam0, 11, -1), 0);
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
						iVar3 = func_66(iParam0, 11, -1);
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
						iVar5 = func_66(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_66(iParam0, 11, -1), 0);
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
						iVar8 = func_66(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_66(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_66(iParam0, 11, -1), 0);
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
						iVar12 = func_66(iParam0, 8, -1);
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

void func_157()//Position - 0x2D1F9
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && Local_70.f_564)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iVar0 != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), iVar0, Local_70.f_499.f_13[iVar0], Local_70.f_499[iVar0], Local_70.f_499.f_26[iVar0]);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (Local_70.f_499.f_39[iVar0] != -1)
			{
				PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), iVar0, Local_70.f_499.f_39[iVar0], Local_70.f_499.f_49[iVar0], NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
			}
			else
			{
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), iVar0);
			}
			iVar0++;
		}
	}
}

void func_158()//Position - 0x2D2AC
{
	if (Local_71.f_0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_71.f_1);
		Local_71.f_0 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2))
	{
		PED::DELETE_PED(&(Local_71.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_4538723))
	{
		PED::DELETE_PED(&Global_4538723);
	}
}

void func_167()//Position - 0x2D87D
{
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	__LIB_13__::func_617();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		if (!Global_78319)
		{
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
		}
	}
	Global_102575 = 0;
	__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
}

void func_250()//Position - 0x3057D
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (__LIB_9__::func_354(1))
	{
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
		{
			__LIB_9__::func_353();
			__LIB_9__::func_340();
		}
		else if (!__LIB_14__::func_292())
		{
			__LIB_9__::func_340();
		}
		return;
	}
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	__LIB_42__::func_691(&Local_70, &(Local_70.f_116), -1);
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::DOES_ENTITY_EXIST(Local_70.f_12)) && !PED::IS_PED_INJURED(Local_70.f_12))
	{
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(Local_70.f_12, true, true);
	}
	if (Local_70.f_116.f_31 > 0 && Local_70.f_116.f_31 < 6)
	{
		__LIB_15__::func_77(0, 1, 1);
		HUD::THEFEED_HIDE_THIS_FRAME();
	}
	__LIB_1__::func_33(0);
	bVar3 = false;
	switch (Local_70.f_116.f_31)
	{
		case 0:
			Local_140.f_19 = 0;
			Local_140.f_18 = 0;
			if (__LIB_14__::func_404(1))
			{
				Local_70.f_116.f_19 = 1;
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_TATTOO_SHOP", false, -1);
				if (((__LIB_3__::func_67("TAT_MNU", Local_70.f_0, 1) && __LIB_14__::func_403(Local_70.f_0, 0)) && func_773()) && func_772())
				{
					if (!Global_78319)
					{
						func_624(1);
					}
					Local_70.f_116.f_31 = 1;
				}
			}
			break;
		case 1:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_0__::func_137(60, -1))
			{
				__LIB_0__::func_186(60, 1, -1);
			}
			MISC::SET_BIT(&Global_78567, 9);
			__LIB_43__::func_570(1);
			__LIB_16__::func_572(&(Local_70.f_116), 0);
			__LIB_16__::func_447(0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::SET_MULTIPLAYER_WALLET_CASH();
				HUD::SET_MULTIPLAYER_BANK_CASH();
			}
			if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_70.f_184.f_31, 3f) && !Global_78319)
			{
				__LIB_16__::func_529(&Local_70);
			}
			if (!PED::IS_PED_INJURED(Local_70.f_12))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_70.f_12, true) };
				Local_70.f_184.f_31.f_2 = Var2.f_2;
			}
			if (!Global_78319)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (((Var0.f_0 < (Local_70.f_184.f_31 - 0.1f) || Var0.f_0 > (Local_70.f_184.f_31 + 0.1f)) || Var0.f_1 < (Local_70.f_184.f_31.f_1 - 0.1f)) || Var0.f_1 > (Local_70.f_184.f_31.f_1 + 0.1f))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Local_70.f_184.f_31, false, false, true);
					MISC::CLEAR_AREA_OF_OBJECTS(Local_70.f_184.f_31, 1.1f, 0);
				}
				fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
				if (fVar1 < (Local_70.f_184.f_34 - 2f) || fVar1 > (Local_70.f_184.f_34 + 2f))
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_70.f_184.f_34);
				}
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
				Local_140.f_19 = 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_71.f_2, true, false);
			}
			Local_143 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2))
			{
				if (!PED::IS_PED_INJURED(Local_71.f_2))
				{
					Local_143 = { ENTITY::GET_ENTITY_COORDS(Local_71.f_2, true) };
				}
			}
			if (iLocal_69 != 22)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_70.f_12))
				{
					if (!PED::IS_PED_INJURED(Local_70.f_12))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(Local_70.f_12, true) };
						if (((Var0.f_0 < (Local_70.f_12.f_6 - 0.1f) || Var0.f_0 > (Local_70.f_12.f_6 + 0.1f)) || Var0.f_1 < (Local_70.f_12.f_6.f_1 - 0.1f)) || Var0.f_1 > (Local_70.f_12.f_6.f_1 + 0.1f))
						{
							TASK::CLEAR_PED_TASKS(Local_70.f_12);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_70.f_12, Local_70.f_12.f_6, false, false, true);
							if (iLocal_69 == 22)
							{
								ENTITY::SET_ENTITY_HEADING(Local_70.f_12, Local_70.f_12.f_15);
							}
							else
							{
								ENTITY::SET_ENTITY_HEADING(Local_70.f_12, (Local_70.f_12.f_15 - 180f));
							}
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_70.f_12, false, false);
							TASK::TASK_LOOK_AT_ENTITY(Local_70.f_12, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
						}
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_608(&Local_70, 1f);
			Local_70.f_116.f_5 = 0;
			Local_70.f_116.f_1 = 0;
			Local_70.f_116.f_3 = 0;
			Local_70.f_116.f_4 = 0;
			Local_70.f_116.f_10 = 0;
			Local_70.f_116.f_16 = 0;
			StringCopy(&(Local_70.f_116.f_11), "", 16);
			iLocal_181 = 0;
			Local_70.f_116.f_17 = 0;
			if (iLocal_175)
			{
				Local_70.f_116.f_3 = Global_2714762.f_785.f_33[1];
				if (Global_2714762.f_785.f_40)
				{
					Local_70.f_116.f_5 = 1;
					Local_70.f_498 = Global_2714762.f_785.f_33[0];
					Local_70.f_116.f_1 = Global_2714762.f_785.f_33[2];
					Global_2714762.f_785.f_40 = 0;
					Local_70.f_116.f_17 = 1;
					iLocal_175 = 0;
				}
			}
			func_592(&bVar3);
			func_280(&bVar3);
			__LIB_3__::func_112();
			func_273();
			if (!Global_78319 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				func_272();
			}
			Local_70.f_116.f_31 = 2;
			break;
		case 2:
			func_280(&bVar3);
			func_273();
			func_270();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			break;
		case 6:
			if (!bLocal_142)
			{
				Global_100493.f_1554 = 0;
				if (!Global_78319 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_157();
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
					PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				}
				Local_70.f_116.f_31 = 7;
			}
			else
			{
				func_280(&bVar3);
			}
			break;
		case 7:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			__LIB_13__::func_905(&(Local_70.f_51));
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_15__::func_133(&(Local_70.f_116), 1, 1, 1, 1);
			__LIB_13__::func_610(1);
			func_167();
			__LIB_1__::func_895(1, Local_70.f_0);
			__LIB_14__::func_423(Local_70.f_0, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			func_158();
			Local_140.f_19 = 0;
			if (Global_4535613)
			{
				if (Global_78319)
				{
					__LIB_10__::func_577(-1326764176, __LIB_0__::func_943(1, 1));
				}
			}
			if (Global_78319)
			{
				iVar4 = __LIB_0__::func_350(PLAYER::PLAYER_PED_ID(), 11);
				func_259(PLAYER::PLAYER_PED_ID(), 11, iVar4, 0, 0);
				if (Local_70.f_565 != -1)
				{
					__LIB_0__::func_661(Local_70.f_565, 1, -1);
				}
			}
			func_34(PLAYER::PLAYER_PED_ID());
			func_28();
			__LIB_43__::func_570(0);
			MISC::CLEAR_BIT(&Global_78567, 9);
			Local_70.f_116.f_19 = 0;
			Local_70.f_11 = 3;
			if (iLocal_68 == 54)
			{
				AUDIO::STOP_AUDIO_SCENE("Ls_Car_Meet_Tattoo_Shop_Scene");
			}
			break;
		case 8:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			__LIB_13__::func_905(&(Local_70.f_51));
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_0__::func_963(0, 1, 1, 0);
			__LIB_15__::func_133(&(Local_70.f_116), 1, 1, 1, 1);
			Global_100493.f_1554 = 0;
			if (!Global_78319 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_157();
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
			}
			__LIB_13__::func_610(1);
			func_167();
			__LIB_1__::func_895(1, Local_70.f_0);
			__LIB_14__::func_423(Local_70.f_0, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			Local_140.f_19 = 0;
			func_158();
			if (Global_78319)
			{
				iVar5 = __LIB_0__::func_350(PLAYER::PLAYER_PED_ID(), 11);
				func_259(PLAYER::PLAYER_PED_ID(), 11, iVar5, 0, 0);
				if (Local_70.f_565 != -1)
				{
					__LIB_0__::func_661(Local_70.f_565, 1, -1);
				}
			}
			func_34(PLAYER::PLAYER_PED_ID());
			__LIB_43__::func_570(0);
			func_28();
			if (Global_4535613)
			{
				if (Global_78319)
				{
					__LIB_10__::func_577(-1326764176, __LIB_0__::func_943(1, 1));
				}
			}
			MISC::CLEAR_BIT(&Global_78567, 9);
			Local_70.f_116.f_19 = 0;
			Local_70.f_11 = 3;
			break;
	}
	if (iLocal_177)
	{
		iVar6 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2) && !PED::IS_PED_INJURED(Local_71.f_2))
		{
			iVar6 = Local_71.f_2;
		}
		func_624(0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_254(iVar6, Local_70.f_498, 0, -1, 0);
		}
		else
		{
			func_34(iVar6);
		}
		func_251(iVar6, Local_70.f_498);
		iLocal_177 = 0;
	}
	if (bVar3)
	{
		iLocal_177 = 1;
	}
	__LIB_16__::func_382(&Local_140, 1);
}

void func_251(int iParam0, int iParam1)//Position - 0x30D4A
{
	int iVar0;
	struct<6> Var1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = __LIB_0__::func_276(iParam0);
			if (__LIB_0__::func_445(&Var1, iParam1, iVar0, iParam0, -1))
			{
				if (!func_252(iParam1))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					__LIB_0__::func_260(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

int func_252(int iParam0)//Position - 0x30DA0
{
	if (Global_78319)
	{
		return __LIB_0__::func_549(iParam0, -1);
	}
	else
	{
		return func_253(__LIB_14__::func_466(), iParam0);
	}
	return 0;
}

int func_253(bool bParam0, int iParam1)//Position - 0x30DCA
{
	struct<11> Var0;
	if (__LIB_0__::func_374(bParam0))
	{
		if (__LIB_0__::func_445(&Var0, iParam1, __LIB_0__::func_415(bParam0), 0, -1))
		{
			return BitTest(Global_113386.f_2363.f_493[bParam0 /*15*/].f_10[Var0.f_9], Var0.f_10);
		}
	}
	return 0;
}

void func_254(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x30E0D
{
	int iVar0;
	struct<12> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (iParam3 == -1)
	{
		iParam3 = __LIB_0__::getGlobal_1574918();
	}
	PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = __LIB_0__::func_276(iParam0);
	__LIB_0__::func_445(&Var1, iParam1, iVar2, iParam0, -1);
	iVar3 = __LIB_0__::func_268(iVar0, &Var1, Var1.f_8);
	bVar5 = false;
	bVar6 = __LIB_1__::func_37(iParam0);
	bVar7 = func_141(iParam0, -1);
	iVar4 = 0;
	while (iVar4 < 127)
	{
		if (__LIB_0__::func_445(&Var1, iVar4, iVar2, iParam0, -1))
		{
			if (__LIB_0__::func_549(Var1.f_11, iParam3))
			{
				iVar8 = __LIB_0__::func_268(iVar0, &Var1, Var1.f_8);
				bVar5 = false;
				if (iVar3 != -1 && iVar8 != -1)
				{
					if (Var1.f_11 != iParam1)
					{
						if (__LIB_39__::func_735(iVar8, iVar3))
						{
							bVar5 = true;
							if (bParam2)
							{
								__LIB_0__::func_661(Var1.f_11, 0, -1);
							}
						}
					}
				}
				if (!bVar5 && __LIB_0__::func_674(iParam0, &Var1, Var1.f_11, Var1.f_4, Var1.f_8, 0, bVar6, bParam4, bVar7))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
		iVar4++;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_549(123, -1))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar12 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar11 = 0;
		while (iVar11 < iVar12)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar11, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar11);
					if (__LIB_0__::func_549(iVar10, iParam3))
					{
						iVar13 = __LIB_0__::func_268(iVar0, &(Var9.f_7), Var9.f_6);
						bVar5 = false;
						if (iVar3 != -1 && iVar13 != -1)
						{
							if (iVar10 != iParam1)
							{
								if (Var9.f_6 != 0)
								{
									if (__LIB_39__::func_735(iVar13, iVar3))
									{
										bVar5 = true;
										if (bParam2)
										{
											__LIB_0__::func_661(iVar10, 0, -1);
										}
									}
								}
							}
						}
						if (!bVar5 && __LIB_0__::func_674(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, 0, bVar6, bParam4, bVar7))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
							__LIB_0__::func_260(iParam0, Var9.f_2, Var9.f_3);
						}
					}
				}
			}
			iVar11++;
		}
	}
}

void func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x32896
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_61(iParam0))
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

void func_270()//Position - 0x339C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	struct<4> Var11;
	float fVar12;
	struct<4> Var13;
	char cVar14[16];
	int iVar15;
	struct<6> Var16;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 7;
	iVar2 = -1;
	func_271(Local_70.f_116.f_3, &iVar1, &iVar2, 0, 0);
	if (iVar1 == 2 || iVar1 == 3)
	{
		iVar4 = __LIB_0__::func_276(PLAYER::PLAYER_PED_ID());
		if (__LIB_0__::func_445(&Var3, Local_70.f_498, iVar4, PLAYER::PLAYER_PED_ID(), -1))
		{
			iVar5 = __LIB_0__::func_268(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var3, Var3.f_8);
			if ((iVar5 == 5 || iVar5 == 9) || iVar5 == 3)
			{
				iVar0 = 1;
			}
			if ((iVar5 == 17 || iVar5 == 21) || iVar5 == 15)
			{
				iVar0 = 2;
			}
		}
	}
	if (iVar0 != iLocal_194)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(sLocal_158))
		{
			return;
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_158);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_158))
		{
			return;
		}
		sVar6 = "";
		sVar7 = "";
		switch (iVar0)
		{
			case 0:
				switch (iLocal_194)
				{
					case 1:
						sVar6 = "LEFT_ARM_OUTRO";
						break;
					case 2:
						sVar6 = "RIGHT_ARM_OUTRO";
						break;
				}
				sVar7 = "";
				break;
			case 1:
				switch (iLocal_194)
				{
					case 0:
						sVar6 = "LEFT_ARM_INTRO";
						break;
					case 2:
						sVar6 = "LEFT_ARM_INTRO";
						break;
				}
				sVar7 = "LEFT_ARM_BASE";
				break;
			case 2:
				switch (iLocal_194)
				{
					case 0:
						sVar6 = "RIGHT_ARM_INTRO";
						break;
					case 1:
						sVar6 = "RIGHT_ARM_INTRO";
						break;
				}
				sVar7 = "RIGHT_ARM_BASE";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&Local_195, sVar6))
			{
				fVar8 = 4f;
				fVar9 = -2f;
				TASK::TASK_PLAY_ANIM(Local_71.f_2, sLocal_158, sVar6, fVar8, fVar9, -1, 2, 0f, false, false, false);
				StringCopy(&Local_195, sVar6, 16);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_71.f_2, sLocal_158, sVar6, 3))
			{
				fVar10 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_71.f_2, sLocal_158, sVar6);
				if (fVar10 >= 0.95f)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar7))
					{
						TASK::TASK_PLAY_ANIM(Local_71.f_2, sLocal_158, sVar7, 8f, -8f, -1, 1, 0f, false, false, false);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_71.f_2);
						STREAMING::REMOVE_ANIM_DICT(sLocal_158);
					}
					StringCopy(&Local_195, sVar7, 16);
					iLocal_194 = iVar0;
				}
			}
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_195))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_71.f_2, sLocal_158, &Local_195, 3))
		{
			Var11 = { Local_195 };
			fVar12 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_71.f_2, sLocal_158, &Var11);
			iVar15 = (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11) - HUD::GET_LENGTH_OF_LITERAL_STRING("_INTRO"));
			StringCopy(&cVar14, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, iVar15, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11)), 16);
			if (MISC::ARE_STRINGS_EQUAL(&cVar14, "_INTRO"))
			{
				StringCopy(&Var13, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, 0, iVar15), 16);
				if (fVar12 >= 0.95f && iLocal_194 == 0)
				{
					if (iVar1 == 2 || MISC::ARE_STRINGS_EQUAL(&Var13, "LEFT_ARM"))
					{
						iLocal_194 = 1;
					}
					else if (iVar1 == 3 || MISC::ARE_STRINGS_EQUAL(&Var13, "RIGHT_ARM"))
					{
						iLocal_194 = 2;
					}
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(&cVar14, "_OUTRO"))
			{
				StringCopy(&Var13, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, 0, iVar15), 16);
				if (fVar12 >= 0.95f && iLocal_194 != 0)
				{
					iLocal_194 = 0;
				}
			}
			else
			{
				iVar15 = (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11) - HUD::GET_LENGTH_OF_LITERAL_STRING("_BASE"));
				StringCopy(&cVar14, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, iVar15, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11)), 16);
				if (!MISC::ARE_STRINGS_EQUAL(&cVar14, "_BASE"))
				{
					iVar15 = (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11) - HUD::GET_LENGTH_OF_LITERAL_STRING("_IDLE_A"));
					StringCopy(&cVar14, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, iVar15, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var11)), 16);
				}
				StringCopy(&Var13, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var11, 0, iVar15), 16);
				if (fVar12 >= 0.95f)
				{
					MemCopy(&Var16, {Var13}, 6);
					if (!MISC::ARE_STRINGS_EQUAL(&cVar14, "_BASE"))
					{
						StringConCat(&Var16, "_BASE", 24);
					}
					else
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								StringConCat(&Var16, "_IDLE_A", 24);
								break;
							case 1:
								StringConCat(&Var16, "_IDLE_B", 24);
								break;
							case 2:
								StringConCat(&Var16, "_IDLE_C", 24);
								break;
							}
					}
					MemCopy(&Local_195, {Var16}, 4);
					TASK::TASK_PLAY_ANIM(Local_71.f_2, sLocal_158, &Var16, 8f, -8f, -1, 1, 0f, false, false, false);
				}
			}
		}
	}
}

int func_271(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x33DF6
{
	*iParam1 = 7;
	*iParam2 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			*iParam2 = 0;
			return 1;
			break;
		case 1:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return iParam4;
			}
			*iParam1 = 0;
			*iParam2 = 1;
			return 1;
			break;
		case 2:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return iParam4;
			}
			*iParam1 = 0;
			*iParam2 = 2;
			return 1;
			break;
		case 3:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return iParam4;
			}
			*iParam1 = 0;
			*iParam2 = 3;
			return 1;
			break;
		case 4:
			*iParam1 = 1;
			return 1;
			break;
		case 5:
			*iParam1 = 2;
			return 1;
			break;
		case 6:
			*iParam1 = 3;
			return 1;
			break;
		case 7:
			*iParam1 = 4;
			return 1;
			break;
		case 8:
			*iParam1 = 5;
			return 1;
			break;
	}
	if (!bParam3)
	{
	}
	return 0;
}

void func_272()//Position - 0x33EE4
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && Local_70.f_564)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iVar0 != 0)
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), iVar0, Local_70.f_499.f_13[iVar0], Local_70.f_499[iVar0]);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (Local_70.f_499.f_39[iVar0] != -1)
			{
				PED::SET_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID(), iVar0, Local_70.f_499.f_39[iVar0], Local_70.f_499.f_49[iVar0]);
			}
			iVar0++;
		}
	}
}

void func_273()//Position - 0x33F7D
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	struct<13> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	struct<3> Var14;
	float fVar15;
	bVar0 = ((((!HUD::IS_PAUSE_MENU_ACTIVE() && Local_70.f_116.f_31 != 6) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_100493.f_1458);
	if (!bVar0)
	{
		return;
	}
	Var1 = { -0.1f, 1.3129f, 0.5072f };
	if (Local_70.f_0 == 54)
	{
		Var1 = { -0.1f, 1.4f, 0.506f };
	}
	iVar2 = 7;
	iVar3 = -1;
	func_271(Local_70.f_116.f_3, &iVar2, &iVar3, 0, 0);
	switch (iVar2)
	{
		case 4:
			Var1 = { Var1 + Vector(-0.8058f, 0f, 0f) };
			break;
		case 5:
			Var1 = { Var1 + Vector(-0.8058f, 0f, 0f) };
			break;
	}
	Var4 = { Local_144 };
	switch (iVar2)
	{
		case 4:
			Var4 = { Var4 + Vector(-0.8058f, 0f, 0f) };
			break;
		case 5:
			Var4 = { Var4 + Vector(-0.8058f, 0f, 0f) };
			break;
	}
	if (!CAM::DOES_CAM_EXIST(Local_70.f_51[0 /*12*/]))
	{
		Local_70.f_51[0 /*12*/] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	}
	if (!CAM::IS_CAM_ACTIVE(Local_70.f_51[0 /*12*/]))
	{
		Local_70.f_51[0 /*12*/].f_7 = 52f;
		fLocal_146 = 0f;
		fLocal_147 = 0f;
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_70.f_51[0 /*12*/].f_4.f_2 = (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2))
		{
			if (!PED::IS_PED_INJURED(Local_71.f_2))
			{
				Local_70.f_51[0 /*12*/].f_4.f_2 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 0f);
			}
		}
		while (Local_70.f_51[0 /*12*/].f_4.f_2 < -180f)
		{
			Local_70.f_51[0 /*12*/].f_4.f_2 = (Local_70.f_51[0 /*12*/].f_4.f_2 + 360f);
		}
		while (Local_70.f_51[0 /*12*/].f_4.f_2 > 180f)
		{
			Local_70.f_51[0 /*12*/].f_4.f_2 = (Local_70.f_51[0 /*12*/].f_4.f_2 - 360f);
		}
		fLocal_150 = Local_70.f_51[0 /*12*/].f_4.f_2;
		Local_70.f_51[0 /*12*/].f_1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_143, Local_70.f_51[0 /*12*/].f_4.f_2, Var1) };
		Local_70.f_51[0 /*12*/].f_11 = 0;
		Local_144 = { Local_143 + Vector(0.25f, 0f, 0f) };
		Local_145 = { Local_144 };
	}
	else
	{
		Local_145 = { Local_145 + Var4 - Local_145 * Vector(0.25f, 0.25f, 0.25f) };
	}
	if (fLocal_147 == 0f || fLocal_147 == 1f)
	{
		__LIB_0__::func_603(&uVar5, &uVar6, &iVar7, &iVar8, 0);
		if ((iVar7 < 32 && iVar7 > -32) && (iVar8 < 32 && iVar8 > -32))
		{
			if (iVar7 < 32 && iVar7 > -32)
			{
				iVar7 = 0;
			}
			else if (iVar7 < 0)
			{
				iVar7 = (iVar7 - 32);
			}
			else
			{
				iVar7 += 32;
			}
			if (iVar8 < 32 && iVar8 > -32)
			{
				iVar8 = 0;
			}
			else if (iVar8 < 0)
			{
				iVar8 = (iVar8 - 32);
			}
			else
			{
				iVar8 += 32;
			}
		}
		iVar7 = (iVar7 * -1);
		if (PAD::IS_LOOK_INVERTED())
		{
			iVar8 = (iVar8 * -1);
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (__LIB_3__::func_52(1, -1, 1))
			{
				Local_70.f_51[0 /*12*/].f_4.f_2 = (Local_70.f_51[0 /*12*/].f_4.f_2 - (Global_4539959 * 400f));
			}
		}
		else
		{
			Local_70.f_51[0 /*12*/].f_4.f_2 = (Local_70.f_51[0 /*12*/].f_4.f_2 + (IntToFloat(iVar7) * 0.05f));
		}
	}
	while (Local_70.f_51[0 /*12*/].f_4.f_2 < -180f)
	{
		Local_70.f_51[0 /*12*/].f_4.f_2 = (Local_70.f_51[0 /*12*/].f_4.f_2 + 360f);
	}
	while (Local_70.f_51[0 /*12*/].f_4.f_2 > 180f)
	{
		Local_70.f_51[0 /*12*/].f_4.f_2 = (Local_70.f_51[0 /*12*/].f_4.f_2 - 360f);
	}
	while (fLocal_148 < -180f)
	{
		fLocal_148 = (fLocal_148 + 360f);
	}
	while (fLocal_148 > 180f)
	{
		fLocal_148 = (fLocal_148 - 360f);
	}
	iVar10 = __LIB_0__::func_276(PLAYER::PLAYER_PED_ID());
	if (((iVar2 == 0 || iVar2 == 2) || iVar2 == 3) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_445(&Var9, Local_70.f_498, iVar10, PLAYER::PLAYER_PED_ID(), -1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!iLocal_151)
				{
					if (Var9.f_12 == 1)
					{
						if (fLocal_147 == 0f)
						{
							fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
							if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								fLocal_149 = (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - 190f);
							}
							else if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2))
							{
								if (!PED::IS_PED_INJURED(Local_71.f_2))
								{
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 190f);
								}
							}
						}
						fLocal_147 = (fLocal_147 + 0.05f);
						if (fLocal_147 >= 1f)
						{
							fLocal_147 = 1f;
							iLocal_151 = 1;
						}
						else
						{
							Local_70.f_51[0 /*12*/].f_4.f_2 = __LIB_3__::func_569(fLocal_148, fLocal_149, fLocal_147);
						}
					}
					else if (fLocal_147 != 0f && fLocal_147 != 1f)
					{
						fLocal_147 = 1f;
						iLocal_151 = 1;
					}
				}
				else if (Var9.f_12 != 1)
				{
					if (fLocal_147 == 1f)
					{
						fLocal_148 = fLocal_150;
						fLocal_149 = Local_70.f_51[0 /*12*/].f_4.f_2;
					}
					fLocal_147 = (fLocal_147 - 0.05f);
					if (fLocal_147 <= 0f)
					{
						fLocal_147 = 0f;
						iLocal_151 = 0;
					}
					else
					{
						Local_70.f_51[0 /*12*/].f_4.f_2 = __LIB_3__::func_569(fLocal_148, fLocal_149, fLocal_147);
					}
				}
				else if (fLocal_147 != 0f && fLocal_147 != 1f)
				{
					fLocal_147 = 0f;
					iLocal_151 = 0;
				}
			}
			else
			{
				if (iVar10 == 4)
				{
					if (Var9.f_12 == 4)
					{
						Var9.f_12 = 2;
					}
					if (Var9.f_12 == 6)
					{
						Var9.f_12 = 3;
					}
					iVar11 = Var9.f_12;
					switch (MISC::GET_HASH_KEY(&Var9))
					{
						case joaat("TAT_BUS_F_006"):
							iVar11 = 1;
							break;
						case joaat("TAT_FM_017"):
							iVar11 = 1;
							break;
						case joaat("TAT_FM_222"):
							iVar11 = 1;
							break;
						case joaat("TAT_FM_227"):
							iVar11 = 1;
							break;
						case joaat("TAT_FM_234"):
							iVar11 = 1;
							break;
						case joaat("TAT_FM_236"):
							iVar11 = 1;
							break;
						case joaat("TAT_FM_238"):
							iVar11 = 1;
							break;
						case joaat("TAT_HP_009"):
							iVar11 = 1;
							break;
						case joaat("TAT_HP_019"):
							iVar11 = 1;
							break;
						case joaat("TAT_HP_040"):
							iVar11 = 1;
							break;
						case joaat("TAT_BUS_F_010"):
							iVar11 = 1;
							break;
						case joaat("TAT_FM_014"):
							iVar11 = 1;
							break;
						case joaat("TAT_FM_223"):
							iVar11 = 1;
							break;
						case joaat("TAT_FM_240"):
							iVar11 = 1;
							break;
						case joaat("TAT_FM_241"):
							iVar11 = 0;
							break;
						case joaat("TAT_FM_243"):
							iVar11 = 2;
							break;
						case joaat("TAT_FM_244"):
							iVar11 = 1;
							break;
						case joaat("TAT_HP_038"):
							iVar11 = 3;
							break;
						case joaat("TAT_HP_042"):
							iVar11 = 1;
							break;
						case joaat("TAT_BB_006"):
							iVar11 = 3;
							break;
						case joaat("TAT_FM_235"):
							iVar11 = 0;
							break;
						case joaat("TAT_HP_006"):
							iVar11 = 3;
							break;
						case joaat("TAT_HP_035"):
							iVar11 = 2;
							break;
						case joaat("TAT_BUS_F_008"):
							iVar11 = 2;
							break;
						case joaat("TAT_BUS_F_007"):
							iVar11 = 3;
							break;
						case joaat("TAT_HP_003"):
							iVar11 = 1;
							break;
						case joaat("TAT_HP_026"):
							iVar11 = 2;
							break;
						case joaat("TAT_HP_028"):
							iVar11 = 1;
							break;
						case joaat("TAT_HP_016"):
							iVar11 = 0;
							break;
						case joaat("TAT_HP_015"):
							iVar11 = 0;
							break;
						case joaat("TAT_FM_229"):
							iVar11 = 3;
							break;
						case joaat("TAT_FM_247"):
							iVar11 = 3;
							break;
						case joaat("TAT_HP_001"):
							iVar11 = 1;
							break;
						case joaat("TAT_HP_004"):
							iVar11 = 0;
							break;
						case joaat("TAT_HP_014"):
							iVar11 = 0;
							break;
						case joaat("TAT_HP_017"):
							iVar11 = 1;
							break;
						case joaat("TAT_HP_020"):
							iVar11 = 1;
							break;
					}
					if (iVar11 != Var9.f_12)
					{
						Var9.f_12 = iVar11;
					}
				}
				else if (iVar10 == 3)
				{
					if (Var9.f_12 == 4 || Var9.f_12 == 5)
					{
						Var9.f_12 = 2;
					}
					if (Var9.f_12 == 6 || Var9.f_12 == 7)
					{
						Var9.f_12 = 3;
					}
					iVar12 = Var9.f_12;
					switch (MISC::GET_HASH_KEY(&Var9))
					{
						case joaat("TAT_BB_027"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_017"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_209"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_222"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_224"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_227"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_233"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_234"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_236"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_238"):
							iVar12 = 1;
							break;
						case joaat("TAT_HP_009"):
							iVar12 = 1;
							break;
						case joaat("TAT_HP_019"):
							iVar12 = 1;
							break;
						case joaat("TAT_HP_040"):
							iVar12 = 1;
							break;
						case joaat("TAT_HP_006"):
							iVar12 = 3;
							break;
						case joaat("TAT_BUS_006"):
							iVar12 = 3;
							break;
						case joaat("TAT_BUS_007"):
							iVar12 = 2;
							break;
						case joaat("TAT_BUS_008"):
							iVar12 = 1;
							break;
						case joaat("TAT_BB_025"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_014"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_223"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_240"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_244"):
							iVar12 = 1;
							break;
						case joaat("TAT_HP_038"):
							iVar12 = 3;
							break;
						case joaat("TAT_HP_042"):
							iVar12 = 1;
							break;
						case joaat("TAT_BUS_003"):
							iVar12 = 0;
							break;
						case joaat("TAT_BUS_004"):
							iVar12 = 1;
							break;
						case joaat("TAT_HP_003"):
							iVar12 = 1;
							break;
						case joaat("TAT_HP_015"):
							iVar12 = 0;
							break;
						case joaat("TAT_HP_016"):
							iVar12 = 0;
							break;
						case joaat("TAT_HP_026"):
							iVar12 = 2;
							break;
						case joaat("TAT_HP_028"):
							iVar12 = 1;
							break;
						case joaat("TAT_FM_229"):
							iVar12 = 3;
							break;
						case joaat("TAT_FM_247"):
							iVar12 = 3;
							break;
						case joaat("TAT_HP_017"):
							iVar12 = 1;
							break;
						case joaat("TAT_BUS_010"):
							iVar12 = 0;
							break;
					}
					if (iVar12 != Var9.f_12)
					{
						Var9.f_12 = iVar12;
					}
				}
				if (fLocal_147 == 0f)
				{
					iLocal_154 = 0;
					iLocal_153 = Var9.f_12;
				}
				else if (fLocal_147 == 1f)
				{
				}
				else if (iLocal_152 != Var9.f_12)
				{
					iLocal_153 = Var9.f_12;
				}
				else if (!iLocal_154)
				{
					iLocal_152 = iLocal_153;
					fLocal_147 = 0f;
					iLocal_154 = 1;
				}
				switch (iLocal_152)
				{
					case 0:
						switch (Var9.f_12)
						{
							case 0:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 0f);
								}
								if (fLocal_147 != 0f || iLocal_154)
								{
									fLocal_147 = (fLocal_147 + 0.05f);
									if (fLocal_147 >= 1f)
									{
										fLocal_147 = 0f;
										iLocal_152 = Var9.f_12;
									}
									else
									{
										Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
									}
								}
								break;
							case 1:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 190f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							case 2:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 310f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							case 3:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 70f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							default:
								break;
						}
						break;
					case 1:
						switch (Var9.f_12)
						{
							case 0:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 0f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							case 1:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 190f);
								}
								if (fLocal_147 != 0f || iLocal_154)
								{
									fLocal_147 = (fLocal_147 + 0.05f);
									if (fLocal_147 >= 1f)
									{
										fLocal_147 = 0f;
										iLocal_152 = Var9.f_12;
									}
									else
									{
										Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
									}
								}
								break;
							case 2:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 310f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							case 3:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 70f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							default:
								break;
						}
						break;
					case 2:
						switch (Var9.f_12)
						{
							case 0:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 0f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							case 1:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 190f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							case 2:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 310f);
								}
								if (fLocal_147 != 0f || iLocal_154)
								{
									fLocal_147 = (fLocal_147 + 0.05f);
									if (fLocal_147 >= 1f)
									{
										fLocal_147 = 0f;
										iLocal_152 = Var9.f_12;
									}
									else
									{
										Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
									}
								}
								break;
							case 3:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 70f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							default:
								break;
						}
						break;
					case 3:
						switch (Var9.f_12)
						{
							case 0:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 0f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							case 1:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 190f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							case 2:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 310f);
								}
								fLocal_147 = (fLocal_147 + 0.05f);
								if (fLocal_147 >= 1f)
								{
									fLocal_147 = 1f;
									iLocal_152 = Var9.f_12;
								}
								else
								{
									Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
								}
								break;
							case 3:
								if (fLocal_147 == 0f)
								{
									fLocal_148 = Local_70.f_51[0 /*12*/].f_4.f_2;
									fLocal_149 = (ENTITY::GET_ENTITY_HEADING(Local_71.f_2) - 70f);
								}
								if (fLocal_147 != 0f || iLocal_154)
								{
									fLocal_147 = (fLocal_147 + 0.05f);
									if (fLocal_147 >= 1f)
									{
										fLocal_147 = 0f;
										iLocal_152 = Var9.f_12;
									}
									else
									{
										Local_70.f_51[0 /*12*/].f_4.f_2 = func_274(fLocal_148, fLocal_149, fLocal_147);
									}
								}
								break;
							default:
								break;
						}
						break;
					default:
						if (iLocal_152 == -1)
						{
							switch (Var9.f_12)
							{
								case 0:
									iLocal_152 = 1;
									break;
								case 1:
									iLocal_152 = 0;
									break;
								case 2:
									iLocal_152 = 3;
									break;
								case 3:
									iLocal_152 = 2;
									break;
								default:
									break;
							}
						}
						else
						{
							switch (Var9.f_12)
							{
								case 0:
									break;
								case 1:
									break;
								case 2:
									break;
								case 3:
									break;
								default:
									break;
								}
						}
						break;
					}
				}
		}
	}
	else
	{
		iLocal_154 = 0;
		fLocal_147 = 0f;
		iLocal_151 = 0;
		iLocal_152 = 0;
		iLocal_153 = Var9.f_12;
	}
	fVar13 = 34f;
	switch (iVar2)
	{
		case 4:
			fVar13 = 38f;
			break;
		case 5:
			fVar13 = 38f;
			break;
		case 3:
			fVar13 = 36f;
			break;
		case 2:
			fVar13 = 36f;
			break;
		case 1:
			fVar13 = 30f;
			break;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iLocal_184))
		{
			iLocal_185 = !iLocal_185;
		}
	}
	else
	{
		iLocal_185 = 0;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iLocal_184) || iLocal_185)
	{
		if (fLocal_146 < 1f)
		{
			fLocal_146 = (fLocal_146 + 0.05f);
		}
		if (fLocal_146 > 1f)
		{
			fLocal_146 = 1f;
		}
	}
	else
	{
		if (fLocal_146 > 0f)
		{
			fLocal_146 = (fLocal_146 - 0.05f);
		}
		if (fLocal_146 < 0f)
		{
			fLocal_146 = 0f;
		}
	}
	Var14 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_143, Local_70.f_51[0 /*12*/].f_4.f_2, Var1) };
	Local_70.f_51[0 /*12*/].f_1 = Var14.f_0;
	Local_70.f_51[0 /*12*/].f_1.f_1 = Var14.f_1;
	Local_70.f_51[0 /*12*/].f_1.f_2 = (Local_70.f_51[0 /*12*/].f_1.f_2 + ((Var14.f_2 - Local_70.f_51[0 /*12*/].f_1.f_2) * 0.25f));
	if (fLocal_146 != 0f)
	{
		if (iVar2 == 1)
		{
			fVar15 = 0.07f;
			Local_70.f_51[0 /*12*/].f_1.f_2 = __LIB_3__::func_569(Local_70.f_51[0 /*12*/].f_1.f_2, (Local_70.f_51[0 /*12*/].f_1.f_2 + fVar15), fLocal_146);
			Local_145.f_2 = __LIB_3__::func_569(Local_145.f_2, (Local_145.f_2 + fVar15), fLocal_146);
		}
		Local_70.f_51[0 /*12*/].f_7 = __LIB_3__::func_569(52f, fVar13, fLocal_146);
	}
	CAM::SET_CAM_COORD(Local_70.f_51[0 /*12*/], Local_70.f_51[0 /*12*/].f_1);
	CAM::SET_CAM_FOV(Local_70.f_51[0 /*12*/], Local_70.f_51[0 /*12*/].f_7);
	CAM::POINT_CAM_AT_COORD(Local_70.f_51[0 /*12*/], Local_145);
	CAM::SET_CAM_NEAR_CLIP(Local_70.f_51[0 /*12*/], 0.7f);
	if (!Local_70.f_51[0 /*12*/].f_11)
	{
		CAM::SET_CAM_ACTIVE(Local_70.f_51[0 /*12*/], true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		Local_70.f_51[0 /*12*/].f_11 = 1;
		__LIB_0__::func_963(1, 1, 1, 0);
	}
}

float func_274(float fParam0, float fParam1, float fParam2)//Position - 0x35371
{
	if (fParam0 > 360f)
	{
		fParam0 = (fParam0 - 360f);
	}
	else if (fParam0 < 0f)
	{
		fParam0 = (fParam0 + 360f);
	}
	if (fParam1 > (fParam0 + 180f))
	{
		fParam1 = (fParam1 - 360f);
	}
	else if (fParam1 < (fParam0 - 180f))
	{
		fParam1 = (fParam1 + 360f);
	}
	return __LIB_3__::func_569(fParam0, fParam1, fParam2);
}

void func_280(int iParam0)//Position - 0x355F1
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	struct<4> Var12;
	var uVar13;
	char* sVar14;
	int iVar15;
	int iVar16;
	char cVar17[16];
	float fVar18;
	float fVar19;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2) && !PED::IS_PED_INJURED(Local_71.f_2))
	{
		iVar0 = Local_71.f_2;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(iVar0))
	{
		if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_RESET_FLAG(iVar0, 302, true);
			}
		}
	}
	bVar1 = false;
	if (bLocal_176)
	{
		bVar1 = true;
		bLocal_176 = false;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iLocal_184 = 209;
	}
	else
	{
		iLocal_184 = 207;
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		iLocal_141 = 1;
	}
	__LIB_14__::func_405(&(Local_70.f_406), 300);
	__LIB_0__::func_603(&iVar2, &iVar3, &uVar4, &uVar5, 0);
	if (Local_70.f_116.f_10 != 0)
	{
		if (SYSTEM::TIMERA() > 200 || (((iVar3 > -64 && iVar3 < 64) && iVar2 > -64) && iVar2 < 64))
		{
			Local_70.f_116.f_10 = 0;
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
		}
	}
	bVar6 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	bVar7 = ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_14__::func_189());
	__LIB_14__::func_188();
	if (bVar6 || bVar7)
	{
		Local_70.f_406.f_8 = 0;
		Local_70.f_406.f_9 = 0;
	}
	bVar8 = ((iVar3 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && Local_70.f_406.f_8));
	bVar9 = ((iVar3 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && Local_70.f_406.f_9));
	bVar10 = (iVar3 < -64 || iVar3 > 64);
	bVar11 = ((((((!HUD::IS_PAUSE_MENU_ACTIVE() && Local_70.f_116.f_31 != 1) && Local_70.f_116.f_31 != 6) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_100493.f_1458) && !bVar1);
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		bVar6 = false;
		bVar7 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = false;
	}
	__LIB_14__::func_184();
	if (__LIB_14__::func_186(&uLocal_186))
	{
	}
	else if (bVar11 || Local_70.f_116.f_25)
	{
		if ((MISC::IS_PC_VERSION() && bVar11) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			__LIB_3__::func_567(0, 0, 0, 1);
		}
		switch (Local_70.f_116.f_5)
		{
			case 0:
				if (MISC::IS_PC_VERSION())
				{
					if (__LIB_3__::func_51())
					{
						if (Global_4539961 == Local_70.f_116.f_3)
						{
							bVar6 = true;
						}
						else
						{
							Local_70.f_116.f_3 = Global_4539961;
							__LIB_3__::func_110(Local_70.f_116.f_3, 1, 1);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
							Local_70.f_406.f_8 = 0;
							Local_70.f_406.f_9 = 0;
						}
					}
					if (__LIB_3__::func_528())
					{
						bVar7 = true;
						Local_70.f_406.f_8 = 0;
						Local_70.f_406.f_9 = 0;
					}
					if (__LIB_14__::func_181(Local_70.f_406.f_8, 0, 0))
					{
						bVar8 = true;
					}
					if (__LIB_14__::func_180(Local_70.f_406.f_9, 0, 0))
					{
						bVar9 = true;
					}
				}
				if (bVar8)
				{
					if (func_578(&(Local_70.f_116.f_3), 1))
					{
						__LIB_3__::func_110(Local_70.f_116.f_3, 1, 1);
					}
					if (bVar10)
					{
						SYSTEM::SETTIMERA(0);
						Local_70.f_116.f_10 = 1;
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
					Local_70.f_406.f_8 = 0;
					Local_70.f_406.f_4 = 0;
					Local_70.f_406.f_20 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Local_70.f_406.f_24 = NETWORK::GET_NETWORK_TIME();
					}
				}
				else if (bVar9)
				{
					if (func_576(&(Local_70.f_116.f_3), 1))
					{
						__LIB_3__::func_110(Local_70.f_116.f_3, 1, 1);
					}
					if (bVar10)
					{
						SYSTEM::SETTIMERA(0);
						Local_70.f_116.f_10 = 1;
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
					Local_70.f_406.f_9 = 0;
					Local_70.f_406.f_4 = 0;
					Local_70.f_406.f_20 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Local_70.f_406.f_24 = NETWORK::GET_NETWORK_TIME();
					}
				}
				else if (bVar6)
				{
					if (Local_70.f_116.f_3 != -1)
					{
						Local_70.f_116.f_5++;
						StringCopy(&(Local_70.f_116.f_11), "", 16);
						iLocal_181 = 0;
						bVar1 = true;
						*iParam0 = 1;
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
				}
				else if (bVar7)
				{
					Local_70.f_116.f_31 = 6;
					iLocal_185 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
				}
				break;
			case 1:
				if (!func_574(Local_70.f_498) && func_573(Local_70.f_498, ""))
				{
					func_566(Local_70.f_498, 1);
					Local_70.f_116.f_17 = 1;
					iLocal_174 = 1;
				}
				if (MISC::IS_PC_VERSION() && bVar11)
				{
					if (__LIB_3__::func_51())
					{
						if (Global_4539961 == Local_70.f_116.f_1)
						{
							bVar6 = true;
						}
						else
						{
							if (func_565(&(Local_70.f_498)))
							{
								Local_70.f_116.f_1 = Global_4539961;
								*iParam0 = 1;
								iLocal_141 = 1;
								__LIB_3__::func_110(Local_70.f_116.f_1, 1, 1);
								Local_70.f_116.f_2 = __LIB_5__::func_392();
								if (func_563() > 1)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
								}
							}
							if (iLocal_174 == 1)
							{
								bVar1 = true;
								iLocal_174 = 0;
							}
						}
					}
					if (__LIB_3__::func_528())
					{
						bVar7 = true;
					}
					if (__LIB_14__::func_181(Local_70.f_406.f_8, 0, 0))
					{
						bVar8 = true;
					}
					if (__LIB_14__::func_180(Local_70.f_406.f_9, 0, 0))
					{
						bVar9 = true;
					}
				}
				if (bVar6 || Local_70.f_116.f_25)
				{
					if (Local_70.f_498 != -1)
					{
						if (!func_252(Local_70.f_498))
						{
							if (!func_573(Local_70.f_498, ""))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
								__LIB_1__::func_789("TAT_LOCK", 4000, 0);
							}
							else if (func_422() && !Local_70.f_116.f_25)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Tattooing_Oneshot", "TATTOOIST_SOUNDS", true);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
								func_421(Local_70.f_498);
								if (Global_78319)
								{
									__LIB_0__::func_661(Local_70.f_498, 1, -1);
									__LIB_29__::func_946(Local_70.f_498, 1, -1);
								}
								else
								{
									func_419(__LIB_14__::func_466(), Local_70.f_498, 1);
								}
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									if (func_418())
									{
										__LIB_13__::func_836("HUMAN CANVAS", -1);
										__LIB_16__::func_770(21, 1, -1);
									}
									func_415();
								}
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_254(iVar0, Local_70.f_498, 1, -1, 0);
								}
								else
								{
									func_34(iVar0);
								}
								Global_4535613 = 1;
								iLocal_183 = 0;
								if (iVar0 != PLAYER::PLAYER_PED_ID())
								{
									if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									{
										func_254(PLAYER::PLAYER_PED_ID(), Local_70.f_498, 1, -1, 0);
									}
									else
									{
										func_34(PLAYER::PLAYER_PED_ID());
									}
								}
								__LIB_13__::func_901(&(Local_70.f_236), 2, 2);
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_70.f_498 >= 129)
								{
									StringCopy(&(Local_70.f_116.f_11), "TAT_BUYDLC", 16);
									iLocal_181 = 1;
								}
								else
								{
									StringCopy(&(Local_70.f_116.f_11), "TAT_BUY", 16);
									iLocal_181 = 0;
								}
								Local_70.f_116.f_17 = 1;
								bLocal_176 = true;
								iLocal_174 = 0;
							}
							else if (!Local_70.f_116.f_25)
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_182))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
									__LIB_1__::func_789("TAT_LOCK", 4000, 0);
								}
								else if (Local_70.f_116.f_24)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
									__LIB_1__::func_789("TAT_LOCK", 4000, 0);
								}
								else if (Global_4535607)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
									__LIB_1__::func_789("TAT_LCKPC", 4000, 0);
								}
								else
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
									__LIB_1__::func_789("TAT_AFF", 4000, 0);
									__LIB_13__::func_630(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_12__::func_769(Local_70.f_0, 0, 0)));
									__LIB_2__::func_820(0, 10, 3);
								}
							}
						}
						else
						{
							if (Global_78319)
							{
								__LIB_0__::func_661(Local_70.f_498, 0, -1);
							}
							else
							{
								func_419(__LIB_14__::func_466(), Local_70.f_498, 0);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Tattooing_Oneshot_Remove", "TATTOOIST_SOUNDS", true);
							func_34(iVar0);
							Global_4535613 = 1;
							iLocal_183 = 0;
							if (iVar0 != PLAYER::PLAYER_PED_ID())
							{
								func_34(PLAYER::PLAYER_PED_ID());
							}
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_70.f_498 >= 129)
							{
								StringCopy(&(Local_70.f_116.f_11), "TAT_REMDLC", 16);
								iLocal_181 = 1;
							}
							else
							{
								StringCopy(&(Local_70.f_116.f_11), "TAT_REM", 16);
								iLocal_181 = 0;
							}
							Local_70.f_116.f_17 = 1;
							bVar1 = true;
						}
					}
					iLocal_185 = 0;
				}
				else if (bVar9)
				{
					if (func_408(Local_70.f_498, &(Local_70.f_498), &(Local_70.f_116.f_1), 1))
					{
						*iParam0 = 1;
						iLocal_141 = 1;
						__LIB_3__::func_110(Local_70.f_116.f_1, 1, 1);
						Local_70.f_116.f_2 = __LIB_5__::func_392();
						if (func_563() > 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
						}
					}
					if (bVar10)
					{
						SYSTEM::SETTIMERA(0);
						Local_70.f_116.f_10 = 1;
					}
					if (iLocal_174 == 1)
					{
						bVar1 = true;
						iLocal_174 = 0;
					}
					Local_70.f_406.f_9 = 0;
					Local_70.f_406.f_4 = 0;
					Local_70.f_406.f_20 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Local_70.f_406.f_24 = NETWORK::GET_NETWORK_TIME();
					}
				}
				else if (bVar8)
				{
					if (func_406(Local_70.f_498, &(Local_70.f_498), &(Local_70.f_116.f_1), 1))
					{
						*iParam0 = 1;
						iLocal_141 = 1;
						__LIB_3__::func_110(Local_70.f_116.f_1, 1, 1);
						Local_70.f_116.f_2 = __LIB_5__::func_392();
						if (func_563() > 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
						}
					}
					if (bVar10)
					{
						SYSTEM::SETTIMERA(0);
						Local_70.f_116.f_10 = 1;
					}
					if (iLocal_174 == 1)
					{
						bVar1 = true;
						iLocal_174 = 0;
					}
					Local_70.f_406.f_8 = 0;
					Local_70.f_406.f_4 = 0;
					Local_70.f_406.f_20 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Local_70.f_406.f_24 = NETWORK::GET_NETWORK_TIME();
					}
				}
				else if (bVar7)
				{
					bVar1 = true;
					Local_70.f_498 = -1;
					func_624(0);
					func_34(iVar0);
					if (iVar0 != PLAYER::PLAYER_PED_ID())
					{
						func_34(PLAYER::PLAYER_PED_ID());
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", true);
					fLocal_147 = 0f;
					Local_70.f_116.f_17 = 1;
					Local_70.f_116.f_5 = (Local_70.f_116.f_5 - 1);
				}
				break;
			}
	}
	if (bVar1)
	{
		if (!bLocal_176)
		{
			func_592(iParam0);
		}
	}
	func_360();
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_70.f_116.f_31 == 6)
	{
		HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
		HUD::REMOVE_MULTIPLAYER_BANK_CASH();
	}
	if (iLocal_141)
	{
		__LIB_3__::func_564(-1);
		if (Local_70.f_116.f_5 == 0)
		{
			if (Local_70.f_116.f_3 != -1)
			{
				__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
			}
			__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
			if (Local_70.f_116.f_3 != -1)
			{
			}
			__LIB_14__::func_964(&uLocal_186);
			__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
			__LIB_1__::func_792(iLocal_184, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
		else if (Local_70.f_116.f_5 == 1)
		{
			if (Local_70.f_116.f_1 != -1)
			{
				if (func_252(Local_70.f_498))
				{
					__LIB_1__::func_792(201, "ITEM_REM" /* GXT: Remove */, -1, 0);
				}
				else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_444(Local_70.f_498, -1))
				{
					__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
				}
				else
				{
					__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
				}
			}
			__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
			if (Local_70.f_116.f_1 != -1)
			{
			}
			__LIB_14__::func_964(&uLocal_186);
			__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
			__LIB_1__::func_792(iLocal_184, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
		iLocal_141 = 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Local_70.f_116.f_5 != 0)
		{
			__LIB_0__::func_445(&Var12, Local_70.f_498, __LIB_0__::func_276(iVar0), iVar0, -1);
			__LIB_16__::func_397(&uVar13);
			if (MISC::GET_HASH_KEY(&uVar13) == 0)
			{
				if (Local_70.f_498 >= 129)
				{
					if (Var12.f_8 == joaat("HEAD_RIGHT") || Var12.f_8 == joaat("HEAD_LEFT"))
					{
						__LIB_1__::func_789("BB_PACK_HEADTAT" /* GXT: Part of the Beach Bum Pack. Tattoo placed on side of head. */, 0, 0);
					}
					else if (func_350(&Var12))
					{
						__LIB_1__::func_789("TAT_LCKCREW", 0, 0);
					}
					else if (__LIB_16__::func_394(&Var12, &sVar14))
					{
						__LIB_1__::func_789(&sVar14, 0, 0);
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__::func_984(&Var12, 0)))
					{
						if (func_343(Var12))
						{
							if (__LIB_13__::func_983(&Var12))
							{
								__LIB_1__::func_789("SHOP_CES_PACK" /* GXT: Part of the ~a~ Pack. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 0, 0);
								__LIB_3__::func_542(__LIB_13__::func_984(&Var12, 0));
							}
							else if (__LIB_13__::func_982(&Var12))
							{
								__LIB_1__::func_789("SHOP_CES_PACK3" /* GXT: Part of the ~a~ Special. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 0, 0);
								__LIB_3__::func_542(__LIB_13__::func_984(&Var12, 0));
							}
							else if (__LIB_13__::func_981(&Var12))
							{
								__LIB_1__::func_789("SHOP_CES_PACK4" /* GXT: Part of the ~a~ Surprise. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 0, 0);
								__LIB_3__::func_542(__LIB_13__::func_984(&Var12, 0));
							}
							else if (__LIB_13__::func_980(&Var12))
							{
								__LIB_1__::func_789("SHOP_CES_PACK6" /* GXT: Part of ~a~. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 0, 0);
								__LIB_3__::func_542(__LIB_13__::func_984(&Var12, 0));
							}
							else if (__LIB_13__::func_979(&Var12))
							{
								__LIB_1__::func_789("SHOP_CES_PACK7" /* GXT: Part of ~a~. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 0, 0);
							}
							else
							{
								__LIB_1__::func_789("SHOP_CES_PACK2" /* GXT: Part of The ~a~. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 0, 0);
								__LIB_3__::func_542(__LIB_13__::func_984(&Var12, 1));
							}
						}
						else if (__LIB_13__::func_983(&Var12))
						{
							__LIB_1__::func_789("SHOP_DLC_PACK" /* GXT: Part of the ~a~ Pack. */, 0, 0);
							__LIB_3__::func_542(__LIB_13__::func_984(&Var12, 0));
						}
						else if (__LIB_13__::func_982(&Var12))
						{
							__LIB_1__::func_789("SHOP_DLC_PACK3" /* GXT: Part of the ~a~ Special. */, 0, 0);
							__LIB_3__::func_542(__LIB_13__::func_984(&Var12, 0));
						}
						else if (__LIB_13__::func_981(&Var12))
						{
							__LIB_1__::func_789("SHOP_DLC_PACK4" /* GXT: Part of the ~a~ Surprise. */, 0, 0);
							__LIB_3__::func_542(__LIB_13__::func_984(&Var12, 0));
						}
						else if (__LIB_13__::func_980(&Var12))
						{
							__LIB_1__::func_789("SHOP_DLC_PACK6" /* GXT: Part of ~a~. */, 0, 0);
							__LIB_3__::func_542(__LIB_13__::func_984(&Var12, 0));
						}
						else if (__LIB_13__::func_979(&Var12))
						{
							__LIB_1__::func_789("SHOP_DLC_PACK7" /* GXT: Part of the Halloween Surprise. */, 0, 0);
						}
						else if (__LIB_13__::func_978(&Var12))
						{
							__LIB_1__::func_789("SHOP_DLC_PACK8", 0, 0);
						}
						else
						{
							__LIB_1__::func_789("SHOP_DLC_PACK2" /* GXT: Part of The ~a~. */, 0, 0);
							__LIB_3__::func_542(__LIB_13__::func_984(&Var12, 1));
						}
					}
				}
			}
			if (!func_573(Local_70.f_498, ""))
			{
			}
			else
			{
				iVar15 = 7;
				iVar16 = -1;
				func_271(Local_70.f_116.f_3, &iVar15, &iVar16, 0, 0);
				StringCopy(&cVar17, "", 16);
				__LIB_14__::func_8(&cVar17);
				if (MISC::GET_HASH_KEY(&cVar17) == 0 && func_334(Local_70.f_498, &Var12, iVar15, iVar16))
				{
					__LIB_11__::func_617("TAT_SALE" /* GXT: A sale is active on this tattoo. */, 0, 0);
				}
			}
		}
	}
	if (__LIB_15__::func_107(&uLocal_186))
	{
	}
	else
	{
		__LIB_11__::func_266(1, Local_70.f_0, 1, 0, 1, -1082130432, 0, 0, -1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_262145.f_2460 /* Tunable: IS_SALE_ON_IN_TATTOO_SHOP */)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShops"))
			{
				if (__LIB_3__::func_124(29, 1, 1, &fVar18, &fVar19, 0))
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
					GRAPHICS::DRAW_SPRITE("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_23149, fVar19, 0f, 255, 255, 255, 255, false, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				}
			}
		}
	}
}

int func_334(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x3B883
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (func_252(iParam0))
	{
		return 0;
	}
	if (Global_262145.f_15353 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_ALL_TATTOOS */)
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		switch (iParam3)
		{
			case -1:
				return 0;
				break;
			case 0:
				if (Global_262145.f_15354 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_TORSO_BACK */)
				{
					return 1;
				}
				break;
			case 1:
				if (Global_262145.f_15355 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_TORSO_BACK_FULL */)
				{
					return 1;
				}
				break;
			case 2:
				if (Global_262145.f_15356 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_TORSO_CHEST */)
				{
					return 1;
				}
				break;
			case 3:
				if (Global_262145.f_15357 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_TORSO_STOMACH */)
				{
					return 1;
				}
				break;
		}
	}
	else
	{
		if (iParam3 != -1)
		{
		}
		switch (iParam2)
		{
			case 1:
				if (Global_262145.f_15358 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HEAD */)
				{
					return 1;
				}
				break;
			case 2:
				if (Global_262145.f_15359 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_LEFT_ARM */)
				{
					return 1;
				}
				break;
			case 3:
				if (Global_262145.f_15360 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_RIGHT_ARM */)
				{
					return 1;
				}
				break;
			case 4:
				if (Global_262145.f_15361 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_LEFT_LEG */)
				{
					return 1;
				}
				break;
			case 5:
				if (Global_262145.f_15362 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_RIGHT_LEG */)
				{
					return 1;
				}
				break;
			}
	}
	iVar1 = MISC::GET_HASH_KEY(sParam1);
	iVar0 = 0;
	while (iVar0 < Global_262145.f_15363)
	{
		if (Global_262145.f_15363[iVar0] != 0)
		{
			if (iVar1 == Global_262145.f_15363[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_343(char[16] cParam0)//Position - 0x3C4FC
{
	return func_344(cParam0) != 114;
}

int func_344(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x3C50F
{
	if (__LIB_7__::func_269())
	{
		switch (MISC::GET_HASH_KEY(&uParam0))
		{
			case joaat("TAT_BI_000"):
				return 75;
			case joaat("TAT_BI_001"):
				return 74;
			case joaat("TAT_BI_002"):
				return 108;
			case joaat("TAT_BI_003"):
				return 80;
			case joaat("TAT_BI_004"):
				return 113;
			case joaat("TAT_BI_005"):
				return 73;
			case joaat("TAT_BI_006"):
				return 59;
			case joaat("TAT_BI_007"):
				return 100;
			case joaat("TAT_BI_008"):
				return 58;
			case joaat("TAT_BI_009"):
				return 83;
			case joaat("TAT_BI_010"):
				return 79;
			case joaat("TAT_BI_011"):
				return 57;
			case joaat("TAT_BI_012"):
				return 92;
			case joaat("TAT_BI_013"):
				return 72;
			case joaat("TAT_BI_014"):
				return 99;
			case joaat("TAT_BI_015"):
				return 107;
			case joaat("TAT_BI_016"):
				return 91;
			case joaat("TAT_BI_017"):
				return 56;
			case joaat("TAT_BI_018"):
				return 71;
			case joaat("TAT_BI_019"):
				return 70;
			case joaat("TAT_BI_020"):
				return 90;
			case joaat("TAT_BI_021"):
				return 55;
			case joaat("TAT_BI_022"):
				return 112;
			case joaat("TAT_BI_023"):
				return 69;
			case joaat("TAT_BI_024"):
				return 89;
			case joaat("TAT_BI_025"):
				return 88;
			case joaat("TAT_BI_026"):
				return 68;
			case joaat("TAT_BI_027"):
				return 106;
			case joaat("TAT_BI_028"):
				return 111;
			case joaat("TAT_BI_029"):
				return 67;
			case joaat("TAT_BI_030"):
				return 54;
			case joaat("TAT_BI_031"):
				return 78;
			case joaat("TAT_BI_032"):
				return 66;
			case joaat("TAT_BI_033"):
				return 98;
			case joaat("TAT_BI_034"):
				return 65;
			case joaat("TAT_BI_035"):
				return 87;
			case joaat("TAT_BI_036"):
				return 105;
			case joaat("TAT_BI_037"):
				return 104;
			case joaat("TAT_BI_038"):
				return 82;
			case joaat("TAT_BI_039"):
				return 77;
			case joaat("TAT_BI_040"):
				return 110;
			case joaat("TAT_BI_041"):
				return 64;
			case joaat("TAT_BI_042"):
				return 97;
			case joaat("TAT_BI_043"):
				return 53;
			case joaat("TAT_BI_044"):
				return 103;
			case joaat("TAT_BI_045"):
				return 86;
			case joaat("TAT_BI_046"):
				return 96;
			case joaat("TAT_BI_047"):
				return 95;
			case joaat("TAT_BI_048"):
				return 109;
			case joaat("TAT_BI_049"):
				return 94;
			case joaat("TAT_BI_050"):
				return 63;
			case joaat("TAT_BI_051"):
				return 81;
			case joaat("TAT_BI_052"):
				return 76;
			case joaat("TAT_BI_053"):
				return 84;
			case joaat("TAT_BI_054"):
				return 93;
			case joaat("TAT_BI_055"):
				return 85;
			case joaat("TAT_BI_056"):
				return 102;
			case joaat("TAT_BI_057"):
				return 101;
			case joaat("TAT_BI_058"):
				return 62;
			case joaat("TAT_BI_059"):
				return 60;
			case joaat("TAT_BI_060"):
				return 61;
			}
		default:
	}
	return 114;
}

int func_350(char* sParam0)//Position - 0x3D43F
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (((MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_012" /* GXT: Crew Emblem */) || MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_013" /* GXT: Crew Emblem */)) || MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_F_014" /* GXT: Crew Emblem */)) || MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_F_015" /* GXT: Crew Emblem */))
		{
			return 1;
		}
	}
	return 0;
}

void func_360()//Position - 0x3D957
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<4> Var4;
	char[] cVar5[8];
	struct<4> Var6;
	bool bVar7;
	bool bVar8;
	char* sVar9;
	int iVar10;
	struct<4> Var11;
	var uVar12;
	char* sVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	char cVar17[16];
	if (Local_70.f_116.f_31 == 6)
	{
	}
	else if (Local_70.f_116.f_5 == 0)
	{
		__LIB_16__::func_397(&uVar0);
		if (MISC::GET_HASH_KEY(&uVar0) == 0)
		{
			if (Local_70.f_116.f_3 != -1)
			{
				iVar1 = 7;
				iVar2 = -1;
				func_271(Local_70.f_116.f_3, &iVar1, &iVar2, 0, 0);
				if (!func_391(iVar1, iVar2))
				{
					__LIB_1__::func_789("TAT_UNLOCK_M", 0, 0);
				}
			}
		}
	}
	else if (!func_573(Local_70.f_498, ""))
	{
		__LIB_16__::func_397(&uVar3);
		if (MISC::GET_HASH_KEY(&uVar3) == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (Local_70.f_498)
				{
					case 13:
					case 14:
					case 15:
					case 16:
						if (__LIB_1__::func_796(PLAYER::PLAYER_ID()))
						{
							__LIB_1__::func_789("TAT_CREW", 0, 0);
						}
						else
						{
							__LIB_1__::func_789("TAT_CREWT", 0, 0);
						}
						__LIB_8__::func_283(32);
						break;
					case 9:
						__LIB_1__::func_789("TAT_RANK1", 0, 0);
						break;
					case 10:
						__LIB_1__::func_789("TAT_RANK2", 0, 0);
						break;
					case 11:
						__LIB_1__::func_789("TAT_RANK3", 0, 0);
						break;
					case 0:
						__LIB_1__::func_789("TAT_RHB", 0, 0);
						break;
					case 1:
						__LIB_1__::func_789("TAT_RDM", 0, 0);
						break;
					case 2:
						__LIB_1__::func_789("TAT_RGR", 0, 0);
						break;
					case 3:
						__LIB_1__::func_789("TAT_RHU", 0, 0);
						break;
					case 4:
						__LIB_1__::func_789("TAT_RFM", 0, 0);
						break;
					case 54:
						__LIB_1__::func_789("TAT_RAL", 0, 0);
						break;
					case 5:
						__LIB_1__::func_789("TAT_RBH", 0, 0);
						break;
					case 6:
						__LIB_1__::func_789("TAT_RWR", 0, 0);
						break;
					case 55:
						__LIB_1__::func_789("TAT_RSU", 0, 0);
						break;
					case 7:
						__LIB_1__::func_789("TAT_RRK", 0, 0);
						break;
					case 8:
						__LIB_1__::func_789("TAT_RRD", 0, 0);
						break;
					case 56:
						__LIB_1__::func_789("TAT_RKC", 0, 0);
						break;
					case 12:
						__LIB_1__::func_789("TAT_RTC", 0, 0);
						break;
					case 57:
						__LIB_1__::func_789("TAT_HU1", 0, 0);
						break;
					case 58:
						__LIB_1__::func_789("TAT_HU2", 0, 0);
						break;
					case 59:
						__LIB_1__::func_789("TAT_HU3", 0, 0);
						break;
					case 60:
						__LIB_1__::func_789("TAT_HU4", 0, 0);
						break;
					case 34:
					case 45:
					case 65:
					case 48:
					case 49:
					case 46:
					case 25:
						__LIB_1__::func_789(__LIB_16__::func_403(Local_70.f_498, __LIB_0__::func_276(PLAYER::PLAYER_PED_ID())), 0, 0);
						break;
					default:
						if (__LIB_0__::func_445(&Var6, Local_70.f_498, __LIB_0__::func_276(PLAYER::PLAYER_PED_ID()), PLAYER::PLAYER_PED_ID(), -1))
						{
							Var4 = { Var6 };
						}
						if (func_350(&Var4))
						{
							if (__LIB_1__::func_796(PLAYER::PLAYER_ID()))
							{
								__LIB_1__::func_789("TAT_CREW", 0, 0);
							}
							else
							{
								__LIB_1__::func_789("TAT_CREWT", 0, 0);
							}
							__LIB_8__::func_283(32);
						}
						else if (__LIB_16__::func_394(&Var4, &cVar5))
						{
							__LIB_1__::func_789(&Var4, 0, 0);
						}
						else
						{
							bVar7 = false;
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
							{
								bVar8 = false;
								if (func_343(Var4))
								{
									bVar8 = true;
								}
								__LIB_4__::func_886(&sVar9, Var4, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1, 0, bVar8);
								if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar9))
								{
									bVar7 = true;
								}
							}
							if (bVar7)
							{
								__LIB_1__::func_789("TAT_LCKPC", 0, 0);
							}
							else
							{
								iVar10 = __LIB_22__::func_168(Local_70.f_498);
								if (iVar10 > 0)
								{
									__LIB_1__::func_789("TAT_UNLOCK", 0, 0);
									__LIB_8__::func_283(iVar10);
								}
								else
								{
									__LIB_1__::func_789("TAT_UNLOCK", 0, 0);
								}
							}
						}
						break;
					}
				}
		}
	}
	else if (__LIB_0__::func_445(&Var11, Local_70.f_498, __LIB_0__::func_276(PLAYER::PLAYER_PED_ID()), PLAYER::PLAYER_PED_ID(), -1))
	{
		if (!func_574(Local_70.f_498))
		{
			__LIB_16__::func_397(&uVar12);
			if (MISC::GET_HASH_KEY(&uVar12) == 0)
			{
				if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_70.f_498 >= 129) && !func_350(&Var11)) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__::func_984(&Var11, 0)))
				{
					if (func_343(Var11))
					{
						if (__LIB_16__::func_394(&Var11, &sVar13))
						{
							__LIB_1__::func_789(&sVar13, 4000, 0);
						}
						else if (__LIB_13__::func_983(&Var11))
						{
							__LIB_1__::func_789("SHOP_UNLOCKCES" /* GXT: This item has just been unlocked, it is part of the ~a~ Pack. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 4000, 0);
							__LIB_3__::func_542(__LIB_13__::func_984(&Var11, 0));
						}
						else if (__LIB_13__::func_982(&Var11))
						{
							__LIB_1__::func_789("SHOP_UNLOCKCES3" /* GXT: This item has just been unlocked, it is part of the ~a~ Special. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 4000, 0);
							__LIB_3__::func_542(__LIB_13__::func_984(&Var11, 0));
						}
						else if (__LIB_13__::func_981(&Var11))
						{
							__LIB_1__::func_789("SHOP_UNLOCKCES4" /* GXT: This item has just been unlocked, it is part of the ~a~ Surprise. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 4000, 0);
							__LIB_3__::func_542(__LIB_13__::func_984(&Var11, 0));
						}
						else if (__LIB_13__::func_980(&Var11))
						{
							__LIB_1__::func_789("SHOP_UNLOCKCES6" /* GXT: This item has just been unlocked, it is part of ~a~. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 4000, 0);
							__LIB_3__::func_542(__LIB_13__::func_984(&Var11, 0));
						}
						else if (__LIB_13__::func_979(&Var11))
						{
							__LIB_1__::func_789("SHOP_UNLOCKCES7" /* GXT: This item has just been unlocked, it is part of the Halloween Surprise. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 4000, 0);
						}
						else
						{
							__LIB_1__::func_789("SHOP_UNLOCKCES2" /* GXT: This item has just been unlocked, it is part of The ~a~. This item is permanently free as part of the Criminal Enterprise Starter Pack. */, 4000, 0);
							__LIB_3__::func_542(__LIB_13__::func_984(&Var11, 1));
						}
					}
					else if (__LIB_16__::func_394(&Var11, &sVar13))
					{
						__LIB_1__::func_789(&sVar13, 4000, 0);
					}
					else if (__LIB_13__::func_983(&Var11))
					{
						__LIB_1__::func_789("SHOP_UNLOCKDLC" /* GXT: This item has just been unlocked, it is part of the ~a~ Pack. */, 4000, 0);
						__LIB_3__::func_542(__LIB_13__::func_984(&Var11, 0));
					}
					else if (__LIB_13__::func_982(&Var11))
					{
						__LIB_1__::func_789("SHOP_UNLOCKDLC3" /* GXT: This item has just been unlocked, it is part of the ~a~ Special. */, 4000, 0);
						__LIB_3__::func_542(__LIB_13__::func_984(&Var11, 0));
					}
					else if (__LIB_13__::func_981(&Var11))
					{
						__LIB_1__::func_789("SHOP_UNLOCKDLC4" /* GXT: This item has just been unlocked, it is part of the ~a~ Surprise. */, 4000, 0);
						__LIB_3__::func_542(__LIB_13__::func_984(&Var11, 0));
					}
					else if (__LIB_13__::func_980(&Var11))
					{
						__LIB_1__::func_789("SHOP_UNLOCKDLC6" /* GXT: This item has just been unlocked, it is part of ~a~. */, 4000, 0);
						__LIB_3__::func_542(__LIB_13__::func_984(&Var11, 0));
					}
					else if (__LIB_13__::func_979(&Var11))
					{
						__LIB_1__::func_789("SHOP_UNLOCKDLC7" /* GXT: This item has just been unlocked, it is part of the Halloween Surprise. */, 4000, 0);
					}
					else if (__LIB_13__::func_978(&Var11))
					{
						__LIB_1__::func_789("SHOP_UNLOCKDLC8", 4000, 0);
					}
					else
					{
						__LIB_1__::func_789("SHOP_UNLOCKDLC2" /* GXT: This item has just been unlocked, it is part of The ~a~. */, 4000, 0);
						__LIB_3__::func_542(__LIB_13__::func_984(&Var11, 1));
					}
				}
				else
				{
					__LIB_1__::func_789("TAT_UNLOCK_N", 4000, 0);
				}
			}
		}
		else if (func_361() != 0)
		{
			__LIB_16__::func_397(&uVar14);
			if (MISC::GET_HASH_KEY(&uVar14) == 0)
			{
				__LIB_1__::func_789("TAT_DISC", 0, 0);
				__LIB_8__::func_283(func_361());
			}
		}
		iVar15 = 7;
		iVar16 = -1;
		func_271(Local_70.f_116.f_3, &iVar15, &iVar16, 0, 0);
		StringCopy(&cVar17, "", 16);
		__LIB_14__::func_8(&cVar17);
		if (MISC::GET_HASH_KEY(&cVar17) == 0 && func_334(Local_70.f_498, &Var11, iVar15, iVar16))
		{
			__LIB_11__::func_617("TAT_SALE" /* GXT: A sale is active on this tattoo. */, 0, 0);
		}
	}
}

int func_361()//Position - 0x3DFB3
{
	int iVar0;
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_15__::func_885())
		{
			iVar0 = (iVar0 + Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */);
		}
	}
	return iVar0;
}

int func_391(int iParam0, int iParam1)//Position - 0x3F4EF
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar3 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		iVar4 = __LIB_0__::func_276(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar4);
			iVar6 = 0;
			while (iVar6 < iVar7)
			{
				if ((FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar4, iVar6, &Var8) && Var8.f_6 != joaat("hairOverlay")) && Var8.f_6 != joaat("torsoDecal"))
				{
					if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
					{
						if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var8.f_2, Var8.f_3) == iParam0 && func_405(iVar3, &(Var8.f_7), Var8.f_6, iParam0, iParam1))
						{
							iVar9 = (129 + iVar6);
							if (((!__LIB_3__::func_348(Var8.f_2, Var8.f_3, iVar9) && !func_395(iVar9, iVar4)) && func_394(iVar9, iVar4)) && !func_574(iVar9))
							{
								return 0;
							}
						}
					}
				}
				iVar6++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			bVar1 = false;
			while (bVar1 < 32)
			{
				iVar5 = __LIB_0__::func_416(iVar0, bVar1);
				if (__LIB_0__::func_445(&Var2, __LIB_0__::func_416(iVar0, bVar1), iVar4, PLAYER::PLAYER_PED_ID(), -1))
				{
					if (((!func_395(iVar5, iVar4) && !func_394(iVar5, iVar4)) && Var2.f_8 != joaat("hairOverlay")) && Var2.f_8 != joaat("torsoDecal"))
					{
						if (func_392(Var2.f_11) && !func_574(Var2.f_11))
						{
							if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var2.f_4, Var2.f_5) == iParam0 && func_405(iVar3, &Var2, Var2.f_8, iParam0, iParam1))
							{
								return 0;
							}
						}
					}
				}
				bVar1++;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_392(int iParam0)//Position - 0x3F69F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 >= 129)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return __LIB_0__::func_548(iParam0, -1);
	}
	else
	{
		return func_393(__LIB_14__::func_466(), iParam0);
	}
	return 0;
}

int func_393(bool bParam0, int iParam1)//Position - 0x3F6DE
{
	struct<11> Var0;
	if (__LIB_0__::func_374(bParam0))
	{
		if (bParam0 == 0)
		{
			if (iParam1 >= 21)
			{
				return 1;
			}
		}
		else if (bParam0 == 1)
		{
			if (iParam1 >= 40)
			{
				return 1;
			}
		}
		else if (bParam0 == 2)
		{
			if (iParam1 >= 34)
			{
				return 1;
			}
		}
		if (__LIB_0__::func_445(&Var0, iParam1, __LIB_0__::func_415(bParam0), 0, -1))
		{
			return BitTest(Global_113386.f_2363.f_493[bParam0 /*15*/][Var0.f_9], Var0.f_10);
		}
	}
	return 0;
}

int func_394(int iParam0, int iParam1)//Position - 0x3F758
{
	return ((iParam1 == 3 || iParam1 == 4) && iParam0 >= 129);
	if (iParam1 == iParam1 && iParam0 == iParam0)
	{
	}
	return 0;
}

int func_395(int iParam0, int iParam1)//Position - 0x3F78E
{
	switch (iParam1)
	{
		case 3:
		case 4:
			switch (iParam0)
			{
				case 13:
				case 14:
				case 15:
				case 16:
				case 71:
				case 72:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_405(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x477EB
{
	int iVar0;
	if (iParam3 == 7)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		if (iParam4 == -1)
		{
			return 0;
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam4 == 0)
			{
				return 1;
			}
			return 0;
		}
		iVar0 = __LIB_0__::func_268(iParam0, sParam1, iParam2);
		switch (iVar0)
		{
			case -1:
				return 0;
				break;
			case 26:
			case 27:
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (iParam4 == 1)
					{
						return 1;
					}
					return 0;
				}
				else
				{
					if (iParam4 == 0)
					{
						return 1;
					}
					return 0;
				}
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
				if (iParam4 == 0)
				{
					return 1;
				}
				return 0;
				break;
			case 37:
			case 38:
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
				if (iParam4 == 2)
				{
					return 1;
				}
				return 0;
				break;
			case 47:
			case 48:
			case 49:
			case 50:
			case 51:
			case 52:
			case 53:
			case 54:
			case 55:
			case 45:
			case 46:
				if (iParam4 == 3)
				{
					return 1;
				}
				return 0;
				break;
		}
		return 0;
	}
	if (iParam4 != -1)
	{
		return 0;
	}
	return 1;
}

int func_406(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x47965
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	iVar0 = -1;
	iVar1 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = (1568 - 1);
		while (iVar2 >= 0)
		{
			iVar3 = (iVar2 / 32);
			bVar4 = (iVar2 % 32);
			if (BitTest(Local_70.f_447[iVar3], bVar4))
			{
				iVar5 = (129 + iVar2);
				if (iParam0 == iVar5 && iVar0 != -1)
				{
					*uParam2 = iVar0;
					*uParam1 = iVar1;
					return 1;
				}
				iVar0++;
				iVar1 = iVar5;
			}
			iVar2 = (iVar2 + -1);
		}
	}
	iVar2 = (71 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = (iVar2 / 32);
		bVar4 = (iVar2 % 32);
		if (BitTest(Local_70.f_442[iVar3], bVar4))
		{
			if (iParam0 == __LIB_0__::func_416(iVar3, bVar4) && iVar0 != -1)
			{
				*uParam2 = iVar0;
				*uParam1 = iVar1;
				return 1;
			}
			iVar0++;
			iVar1 = __LIB_0__::func_416(iVar3, bVar4);
		}
		iVar2 = (iVar2 + -1);
	}
	if (bParam3)
	{
		return func_407(uParam1, uParam2);
	}
	return 0;
}

int func_407(var uParam0, var uParam1)//Position - 0x47A55
{
	int iVar0;
	int iVar1;
	bool bVar2;
	*uParam1 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = (1568 - 1);
		while (iVar0 >= 0)
		{
			iVar1 = (iVar0 / 32);
			bVar2 = (iVar0 % 32);
			if (BitTest(Local_70.f_447[iVar1], bVar2))
			{
				*uParam1++;
				*uParam0 = (129 + iVar0);
			}
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = (71 - 1);
	while (iVar0 >= 0)
	{
		iVar1 = (iVar0 / 32);
		bVar2 = (iVar0 % 32);
		if (BitTest(Local_70.f_442[iVar1], bVar2))
		{
			*uParam1++;
			*uParam0 = __LIB_0__::func_416(iVar1, bVar2);
		}
		iVar0 = (iVar0 + -1);
	}
	if (*uParam1 == -1)
	{
		*uParam0 = -1;
		return 0;
	}
	return 1;
}

int func_408(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x47B00
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	iVar0 = -1;
	iVar1 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = (1568 - 1);
		while (iVar2 >= 0)
		{
			iVar3 = (iVar2 / 32);
			bVar4 = (iVar2 % 32);
			if (BitTest(Local_70.f_447[iVar3], bVar4))
			{
				iVar5 = (129 + iVar2);
				if (iParam0 == iVar1)
				{
					iVar0++;
					iVar1 = iVar5;
					*iParam2 = iVar0;
					*iParam1 = iVar1;
					return 1;
				}
				iVar0++;
				iVar1 = iVar5;
			}
			iVar2 = (iVar2 + -1);
		}
	}
	iVar2 = (71 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = (iVar2 / 32);
		bVar4 = (iVar2 % 32);
		if (BitTest(Local_70.f_442[iVar3], bVar4))
		{
			if (iParam0 == iVar1)
			{
				iVar0++;
				iVar1 = __LIB_0__::func_416(iVar3, bVar4);
				*iParam2 = iVar0;
				*iParam1 = iVar1;
				return 1;
			}
			iVar0++;
			iVar1 = __LIB_0__::func_416(iVar3, bVar4);
		}
		iVar2 = (iVar2 + -1);
	}
	if (bParam3)
	{
		return func_409(iParam1, iParam2);
	}
	return 0;
}

int func_409(var uParam0, var uParam1)//Position - 0x47BF0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	*uParam1 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = (1568 - 1);
		while (iVar0 >= 0)
		{
			iVar1 = (iVar0 / 32);
			bVar2 = (iVar0 % 32);
			if (BitTest(Local_70.f_447[iVar1], bVar2))
			{
				*uParam1++;
				*uParam0 = (129 + iVar0);
				return 1;
			}
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = (71 - 1);
	while (iVar0 >= 0)
	{
		iVar1 = (iVar0 / 32);
		bVar2 = (iVar0 % 32);
		if (BitTest(Local_70.f_442[iVar1], bVar2))
		{
			*uParam1++;
			*uParam0 = __LIB_0__::func_416(iVar1, bVar2);
			return 1;
		}
		iVar0 = (iVar0 + -1);
	}
	*uParam0 = -1;
	return 0;
}

void func_415()//Position - 0x48327
{
	int iVar0;
	iVar0 = __LIB_0__::func_993(14);
	Global_2676732[iVar0 /*83*/] = 14;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

bool func_418()//Position - 0x483C5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<12> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<7> Var8;
	int iVar9;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = __LIB_0__::func_276(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar4);
			iVar6 = 0;
			while (iVar6 < iVar7)
			{
				if ((FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar4, iVar6, &Var8) && Var8.f_6 != joaat("hairOverlay")) && Var8.f_6 != joaat("torsoDecal"))
				{
					iVar9 = (129 + iVar6);
					if (__LIB_0__::func_549(iVar9, -1))
					{
						MISC::CLEAR_BIT(&iVar0, PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var8.f_2, Var8.f_3));
					}
				}
				iVar6++;
			}
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar2 = false;
			while (bVar2 < 32)
			{
				iVar5 = __LIB_0__::func_416(iVar1, bVar2);
				if (!func_395(iVar5, iVar4) && !func_394(iVar5, iVar4))
				{
					if ((__LIB_0__::func_445(&Var3, __LIB_0__::func_416(iVar1, bVar2), iVar4, PLAYER::PLAYER_PED_ID(), -1) && Var3.f_8 != joaat("hairOverlay")) && Var3.f_8 != joaat("torsoDecal"))
					{
						if (Global_78319)
						{
							if (__LIB_0__::func_549(Var3.f_11, -1))
							{
								MISC::CLEAR_BIT(&iVar0, PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var3.f_4, Var3.f_5));
							}
						}
						else if (func_253(__LIB_14__::func_466(), Var3.f_11))
						{
							return 1;
						}
					}
				}
				bVar2++;
			}
			iVar1++;
		}
	}
	return iVar0 == 0;
}

void func_419(bool bParam0, int iParam1, bool bParam2)//Position - 0x4853E
{
	struct<11> Var0;
	if (__LIB_0__::func_374(bParam0))
	{
		if (__LIB_0__::func_445(&Var0, iParam1, __LIB_0__::func_415(bParam0), 0, -1))
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_113386.f_2363.f_493[bParam0 /*15*/].f_10[Var0.f_9]), Var0.f_10);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363.f_493[bParam0 /*15*/].f_10[Var0.f_9]), Var0.f_10);
			}
		}
	}
}

void func_421(int iParam0)//Position - 0x485BC
{
	struct<12> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	iVar1 = __LIB_0__::func_276(PLAYER::PLAYER_PED_ID());
	iVar2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	if (__LIB_0__::func_445(&Var0, iParam0, iVar1, PLAYER::PLAYER_PED_ID(), -1))
	{
		if (Var0.f_8 != 0)
		{
			iVar3 = -1;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar3 = __LIB_0__::func_268(iVar2, &Var0, Var0.f_8);
			}
			iVar4 = Var0.f_8;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
				iVar7 = 0;
				while (iVar7 < iVar8)
				{
					if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar7, &Var9))
					{
						if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
						{
							iVar10 = (129 + iVar7);
							iVar11 = __LIB_0__::func_268(iVar2, &(Var9.f_7), Var9.f_6);
							if (__LIB_39__::func_735(iVar11, iVar3) && iVar10 != iParam0)
							{
								__LIB_0__::func_661(iVar10, 0, -1);
							}
						}
					}
					iVar7++;
				}
			}
			iVar5 = 0;
			while (iVar5 < 4)
			{
				bVar6 = false;
				while (bVar6 < 32)
				{
					if (!func_394(iParam0, iVar1))
					{
						if (__LIB_0__::func_445(&Var0, __LIB_0__::func_416(iVar5, bVar6), iVar1, PLAYER::PLAYER_PED_ID(), -1))
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								iVar12 = __LIB_0__::func_268(iVar2, &Var0, Var0.f_8);
								if (__LIB_39__::func_735(iVar12, iVar3) && Var0.f_11 != iParam0)
								{
									if (Global_78319)
									{
										__LIB_0__::func_661(Var0.f_11, 0, -1);
									}
									else
									{
										func_419(__LIB_14__::func_466(), Var0.f_11, 0);
									}
								}
							}
							else if (Var0.f_8 == iVar4 && Var0.f_11 != iParam0)
							{
								if (Global_78319)
								{
									__LIB_0__::func_661(Var0.f_11, 0, -1);
								}
								else
								{
									func_419(__LIB_14__::func_466(), Var0.f_11, 0);
								}
							}
						}
					}
					bVar6++;
				}
				iVar5++;
			}
		}
	}
}

int func_422()//Position - 0x4874D
{
	struct<8> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	bool bVar8;
	struct<16> Var9;
	if (__LIB_14__::func_404(1))
	{
		StringCopy(&Local_182, "", 64);
		Local_70.f_116.f_24 = 0;
		iVar1 = __LIB_0__::func_276(PLAYER::PLAYER_PED_ID());
		if (__LIB_0__::func_445(&Var0, Local_70.f_498, iVar1, PLAYER::PLAYER_PED_ID(), -1))
		{
			bVar2 = true;
			bVar3 = false;
			iVar4 = func_561(Var0.f_7, Var0);
			if (iVar4 == -1)
			{
				MemCopy(&Local_182, {Var0}, 16);
				return 0;
			}
			if (iVar4 != Var0.f_7)
			{
				Var0.f_7 = iVar4;
			}
			func_560(&(Var0.f_7), Var0);
			if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_444(Local_70.f_498, -1)) && !func_343(Var0))
			{
				Var0.f_7 = Global_262145.f_8261 /* Tunable: PURCHASED_TATTOO_APPLICATION_FEE */;
				bVar2 = true;
				bVar3 = true;
			}
			if (Local_70.f_116.f_25)
			{
				if (!func_555(Var0.f_7))
				{
					Local_70.f_116.f_24 = 1;
					return 0;
				}
				else if (!Local_70.f_116.f_25)
				{
					__LIB_0__::func_186(3, 1, -1);
					__LIB_2__::func_553(joaat("MPPLY_INGAMESTORE_MONEYSPENT"), Var0.f_7);
					func_478(Local_70.f_0, 1, 6, 0);
					__LIB_39__::func_522(7);
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				return 1;
			}
			iVar5 = 7;
			iVar6 = -1;
			func_271(Local_70.f_116.f_3, &iVar5, &iVar6, 0, 0);
			uVar7 = func_334(Var0.f_11, &Var0, iVar5, iVar6);
			func_469(Var0, Var0.f_7, 0, 1, 0, uVar7);
			if (Global_78319)
			{
				if (Var0.f_7 == 0 || MONEY::NETWORK_CAN_SPEND_MONEY(Var0.f_7, false, true, false, -1, 0))
				{
					if (__LIB_0__::func_743(1) || iLocal_183)
					{
						iLocal_183 = 1;
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
					{
						bVar8 = false;
						if (func_343(Var0))
						{
							bVar8 = true;
						}
						__LIB_4__::func_886(&Var9, Var0, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1, 0, bVar8);
						if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&Var9))
						{
							Local_182 = { Var9 };
							return 0;
						}
						if (iLocal_183)
						{
							Var0.f_7 = 0;
						}
						if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_TATTOO"), MISC::GET_HASH_KEY(&Var9), joaat("NET_SHOP_ACTION_SPEND"), 1, Var0.f_7, 1, 4, 0, 3))
						{
							if (bVar3)
							{
								if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_TATTOO"), joaat("PO_REAPPLY_TATTOO"), joaat("NET_SHOP_ACTION_SPEND"), 1, Var0.f_7, 1, 4, MISC::GET_HASH_KEY(&Var9), 3))
								{
								}
								else
								{
									__LIB_1__::func_34(__LIB_3__::func_534());
									HUD::USE_FAKE_MP_CASH(false);
									HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
									Local_70.f_116.f_24 = 1;
									return 0;
								}
							}
							if (iLocal_183)
							{
								if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_TATTOO"), joaat("PO_COUPON_TATOO"), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&Var9), 3))
								{
								}
								else
								{
									__LIB_1__::func_34(__LIB_3__::func_534());
									HUD::USE_FAKE_MP_CASH(false);
									HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
									Local_70.f_116.f_24 = 1;
									return 0;
								}
							}
							Local_70.f_116.f_24 = 0;
							Local_70.f_116.f_25 = 1;
							Local_70.f_116.f_26 = 0;
							return 1;
						}
						else
						{
							__LIB_1__::func_34(__LIB_3__::func_534());
							HUD::USE_FAKE_MP_CASH(false);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
							Local_70.f_116.f_24 = 1;
							return 0;
						}
					}
					if (Var0.f_7 > 0)
					{
					}
					if (bVar2)
					{
						__LIB_0__::func_186(3, 1, -1);
						__LIB_2__::func_553(joaat("MPPLY_INGAMESTORE_MONEYSPENT"), Var0.f_7);
						func_478(Local_70.f_0, 1, 6, 0);
					}
					__LIB_39__::func_522(7);
					if (func_343(Var0))
					{
						func_453(func_344(Var0), 1);
					}
					__LIB_1__::func_34(__LIB_3__::func_534());
					return 1;
				}
			}
			else if (__LIB_16__::func_413(__LIB_14__::func_466()) >= Var0.f_7)
			{
				if (Var0.f_7 > 0)
				{
					__LIB_39__::func_89(__LIB_14__::func_466(), __LIB_13__::func_874(Local_70.f_0), Var0.f_7);
				}
				func_423();
				func_478(Local_70.f_0, 1, 6, 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_423()//Position - 0x48AC0
{
	bool bVar0;
	bVar0 = __LIB_13__::func_716(PLAYER::PLAYER_PED_ID());
	if (__LIB_0__::func_374(bVar0))
	{
		Global_113386.f_2363.f_539.f_2344[bVar0] = MISC::GET_GAME_TIMER();
	}
}

void func_453(int iParam0, bool bParam1)//Position - 0x49C2C
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_12__::func_664(iParam0);
	if (iParam0 == -1)
	{
	}
	else if (iParam0 == 114)
	{
	}
	else if (__LIB_12__::func_663(iParam0))
	{
		iVar1 = __LIB_0__::func_369(6422, -1, 0);
		if (bParam1)
		{
			MISC::SET_BIT(&iVar1, iVar0);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar1, iVar0);
		}
		__LIB_0__::func_413(6422, iVar1, -1, 1, 0);
		if (__LIB_12__::func_665(iParam0))
		{
			func_456(19);
		}
		else
		{
			func_456(20);
		}
	}
	else if (__LIB_12__::func_662(iParam0))
	{
		if (__LIB_12__::func_661(iParam0))
		{
			iVar1 = __LIB_0__::func_369(6423, -1, 0);
			if (bParam1)
			{
				MISC::SET_BIT(&iVar1, iVar0);
			}
			else
			{
				MISC::CLEAR_BIT(&iVar1, iVar0);
			}
			__LIB_0__::func_413(6423, iVar1, -1, 1, 0);
		}
		else
		{
			iVar1 = __LIB_0__::func_369(6424, -1, 0);
			if (bParam1)
			{
				MISC::SET_BIT(&iVar1, iVar0);
			}
			else
			{
				MISC::CLEAR_BIT(&iVar1, iVar0);
			}
			__LIB_0__::func_413(6424, iVar1, -1, 1, 0);
		}
		func_456(21);
	}
	else
	{
		iVar1 = __LIB_0__::func_369(6157, -1, 0);
		if (bParam1)
		{
			MISC::SET_BIT(&iVar1, iVar0);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar1, iVar0);
		}
		__LIB_0__::func_413(6157, iVar1, -1, 1, 0);
	}
}

void func_456(int iParam0)//Position - 0x49D8B
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	iVar4 = __LIB_0__::func_369(6157, -1, 0);
	bVar5 = true;
	switch (iParam0)
	{
		case 19:
			iVar0 = 22;
			iVar1 = 42;
			bVar3 = __LIB_12__::func_664(19);
			break;
		case 20:
			iVar0 = 43;
			iVar1 = 52;
			bVar3 = __LIB_12__::func_664(20);
			break;
		case 21:
			iVar0 = 53;
			iVar1 = 113;
			bVar3 = __LIB_12__::func_664(21);
			break;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		iVar6 = iVar2;
		if (!func_457(iVar6))
		{
			bVar5 = false;
		}
		iVar2++;
	}
	if (bVar5)
	{
		if (!BitTest(iVar4, bVar3))
		{
			MISC::SET_BIT(&iVar4, bVar3);
			__LIB_0__::func_413(6157, iVar4, -1, 1, 0);
		}
	}
	else if (BitTest(iVar4, bVar3))
	{
		MISC::CLEAR_BIT(&iVar4, bVar3);
		__LIB_0__::func_413(6157, iVar4, -1, 1, 0);
	}
}

int func_457(int iParam0)//Position - 0x49E59
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_12__::func_664(iParam0);
	iVar3 = 0;
	if (iParam0 == -1)
	{
		iVar3 = 1;
		iVar2 = 0;
		while (iVar2 < 114)
		{
			if (!func_457(iVar2))
			{
				iVar3 = 0;
			}
			iVar2++;
		}
	}
	else if (iParam0 == 114)
	{
	}
	else if (__LIB_12__::func_663(iParam0))
	{
		iVar1 = __LIB_0__::func_369(6422, -1, 0);
		iVar3 = BitTest(iVar1, iVar0);
	}
	else if (__LIB_12__::func_662(iParam0))
	{
		if (__LIB_12__::func_661(iParam0))
		{
			iVar1 = __LIB_0__::func_369(6423, -1, 0);
		}
		else
		{
			iVar1 = __LIB_0__::func_369(6424, -1, 0);
		}
		iVar3 = BitTest(iVar1, iVar0);
	}
	else
	{
		iVar1 = __LIB_0__::func_369(6157, -1, 0);
		iVar3 = BitTest(iVar1, iVar0);
	}
	return iVar3;
}

void func_469(char[16] cParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4AA76
{
	Global_100493.f_1384 = { cParam0 };
	Global_100493.f_1388 = uParam1;
	Global_100493.f_1389 = iParam2;
	Global_100493.f_1390 = iParam3;
	Global_100493.f_1391 = iParam4;
	Global_100493.f_1392 = uParam5;
}

void func_478(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x4ADF3
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 3, 0))
		{
			__LIB_13__::func_768(iParam0, 3, 0);
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			switch (__LIB_0__::func_328(iParam0))
			{
				case 4:
					__LIB_0__::func_716(305, 0, 0);
					break;
				case 1:
					__LIB_0__::func_716(304, 0, 0);
					break;
				case 3:
					__LIB_0__::func_716(308, 0, 0);
					break;
				case 0:
					__LIB_0__::func_716(306, 0, 0);
					break;
				case 2:
					__LIB_0__::func_716(307, 0, 0);
					break;
				}
		}
		if (Global_100493.f_1388 >= 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar0 = true;
				if (iParam2 == 4)
				{
					if (__LIB_0__::func_743(0))
					{
						__LIB_0__::func_745(0);
						bVar0 = false;
					}
				}
				if (iParam2 == 6)
				{
					if (__LIB_0__::func_743(1))
					{
						__LIB_0__::func_745(1);
						bVar0 = false;
					}
				}
				if (bVar0)
				{
					bVar1 = MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0;
					bVar2 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < Global_100493.f_1388;
					if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_4718592 == 0) || __LIB_2__::func_839(PLAYER::PLAYER_ID()) == 11)
					{
						if (iParam2 == 11)
						{
							MISC::SET_BIT(&Global_1574989, 0);
						}
					}
					if (__LIB_0__::func_112())
					{
						if (__LIB_1__::func_818(__LIB_3__::func_534()) > 0)
						{
							NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(__LIB_3__::func_534()));
						}
					}
					if (iParam0 == 45 && iParam3 == 18)
					{
						func_481(13, -1, -1, MISC::GET_HASH_KEY(&(Global_100493.f_1384)), 1065353216);
						func_481(3, -1, -1, MISC::GET_HASH_KEY(&(Global_100493.f_1384)), 1065353216);
					}
					if (iParam0 == 55 && __LIB_2__::func_904(PLAYER::PLAYER_ID()))
					{
						func_481(31, -1, -1, MISC::GET_HASH_KEY(&(Global_100493.f_1384)), 1065353216);
					}
					if (Global_100493.f_1392)
					{
						MONEY::NETWORK_SPEND_SET_DISCOUNT(true);
					}
					else
					{
						MONEY::NETWORK_SPEND_SET_DISCOUNT(false);
					}
					if (iParam2 == 1 && Global_100493.f_1389 == -61829581)
					{
						MONEY::NETWORK_BUY_ITEM(Global_100493.f_1388, MISC::GET_HASH_KEY(&(Global_100493.f_1384)), 17, Global_100493.f_1390, bVar1, &(Global_100493.f_1384), MISC::GET_HASH_KEY(__LIB_12__::func_769(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391, bVar2);
					}
					else if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
					{
						MONEY::NETWORK_BUY_ITEM(Global_100493.f_1388, Global_100493.f_1389, iParam2, Global_100493.f_1390, bVar1, &(Global_100493.f_1384), MISC::GET_HASH_KEY(__LIB_12__::func_769(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391, bVar2);
					}
					else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
					{
						MONEY::NETWORK_BUY_ITEM(Global_100493.f_1388, Global_100493.f_1389, iParam2, Global_100493.f_1390, bVar1, &(Global_100493.f_1384), MISC::GET_HASH_KEY(__LIB_12__::func_769(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391, bVar2);
					}
					else
					{
						MONEY::NETWORK_BUY_ITEM(Global_100493.f_1388, MISC::GET_HASH_KEY(&(Global_100493.f_1384)), iParam2, Global_100493.f_1390, bVar1, &(Global_100493.f_1384), MISC::GET_HASH_KEY(__LIB_12__::func_769(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391, bVar2);
					}
				}
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_100493.f_1384)))
			{
				if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
				{
					if (Global_100493.f_1388 >= 0)
					{
						STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_12__::func_769(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391);
					}
				}
				else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
				{
					if (Global_100493.f_1388 >= 0)
					{
						STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_12__::func_769(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391);
					}
				}
				else if (Global_100493.f_1388 >= 0)
				{
					STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_12__::func_769(iParam0, iParam3, 1)), 0, Global_100493.f_1391);
				}
			}
		}
	}
	else if (__LIB_0__::func_431(iParam0, 3, 0))
	{
		__LIB_13__::func_776(iParam0, 3, 0);
	}
}

void func_481(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x4B741
{
	int iVar0;
	if (!__LIB_9__::func_18(iParam0))
	{
		return;
	}
	iVar0 = __LIB_9__::func_17(iParam0, iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__::func_137(32249, -1))
			{
				__LIB_0__::func_186(32249, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 1:
			if (!__LIB_0__::func_137(32250, -1))
			{
				__LIB_0__::func_186(32250, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 2:
			if (!__LIB_0__::func_137(32251, -1))
			{
				__LIB_0__::func_186(32251, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 3:
			if (!__LIB_0__::func_137(32252, -1))
			{
				__LIB_0__::func_186(32252, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 4:
			if (!__LIB_0__::func_137(32253, -1))
			{
				__LIB_0__::func_186(32253, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 5:
			if (!__LIB_0__::func_137(32254, -1))
			{
				__LIB_0__::func_186(32254, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 6:
			if (!__LIB_0__::func_137(32255, -1))
			{
				__LIB_0__::func_186(32255, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 7:
			if (!__LIB_0__::func_137(32256, -1))
			{
				__LIB_0__::func_186(32256, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 8:
			if (!__LIB_0__::func_137(32257, -1))
			{
				__LIB_0__::func_186(32257, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 9:
			if (!__LIB_0__::func_137(32258, -1))
			{
				__LIB_0__::func_186(32258, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 10:
			if (__LIB_0__::func_137(32249, -1))
			{
				if (!__LIB_0__::func_137(32259, -1))
				{
					__LIB_0__::func_186(32259, 1, -1);
					func_482(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 11:
			if (__LIB_0__::func_137(32250, -1))
			{
				if (!__LIB_0__::func_137(32260, -1))
				{
					__LIB_0__::func_186(32260, 1, -1);
					func_482(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 12:
			if (__LIB_0__::func_137(32251, -1))
			{
				if (!__LIB_0__::func_137(32261, -1))
				{
					__LIB_0__::func_186(32261, 1, -1);
					func_482(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 13:
			if (__LIB_0__::func_137(32252, -1))
			{
				if (!__LIB_0__::func_137(32262, -1))
				{
					__LIB_0__::func_186(32262, 1, -1);
					func_482(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 14:
			if (__LIB_0__::func_137(32253, -1))
			{
				if (!__LIB_0__::func_137(32263, -1))
				{
					__LIB_0__::func_186(32263, 1, -1);
					func_482(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 15:
			if (!__LIB_0__::func_137(32264, -1))
			{
				__LIB_0__::func_186(32264, 1, -1);
				func_482(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 16:
			if (__LIB_0__::func_137(32254, -1))
			{
				if (!__LIB_0__::func_137(32265, -1))
				{
					__LIB_0__::func_186(32265, 1, -1);
					func_482(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 17:
			if (__LIB_0__::func_137(32255, -1))
			{
				if (!__LIB_0__::func_137(32266, -1))
				{
					__LIB_0__::func_186(32266, 1, -1);
					func_482(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 18:
			if (__LIB_0__::func_137(32256, -1))
			{
				if (!__LIB_0__::func_137(32267, -1))
				{
					__LIB_0__::func_186(32267, 1, -1);
					func_482(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			func_482(iVar0, iParam0, iParam3, fParam4);
			break;
		case 24:
		case 25:
		case 26:
			func_482(iVar0, iParam0, iParam3, 1065353216);
			break;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			func_482(iVar0, iParam0, iParam3, 1065353216);
			break;
		case 32:
		case 33:
		case 34:
		case 35:
			func_482(iVar0, iParam0, iParam3, 1065353216);
			break;
	}
}

void func_482(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x4BBCC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if ((((iParam0 <= 0 || PLAYER::PLAYER_ID() == __LIB_0__::getMinusOneOrNull()) || Global_262145.f_31078 /* Tunable: -1782032913 */) || __LIB_39__::func_739() >= __LIB_13__::func_688()) || !__LIB_39__::func_738(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (fParam3 != 1f)
	{
		iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iParam0) * fParam3));
	}
	iVar0 = __LIB_39__::func_739();
	iVar1 = __LIB_9__::func_127(iVar0);
	iVar2 = (iVar0 + iParam0);
	iVar3 = __LIB_13__::func_688();
	if (iVar2 > iVar3)
	{
		iVar2 = iVar3;
	}
	bVar4 = false;
	iVar5 = __LIB_9__::func_127(iVar2);
	if (iVar5 > iVar1)
	{
		bVar4 = true;
	}
	__LIB_0__::func_413(9834, iVar2, -1, 1, 0);
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_1 = iVar2;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_2 = iVar5;
	__LIB_14__::func_456(iParam0, iVar5, bVar4, iParam1, uParam2);
	__LIB_16__::func_769(107, iVar5, -1);
	if (bVar4)
	{
		func_483(iVar1, iVar5);
	}
}

void func_483(int iParam0, int iParam1)//Position - 0x4BCC3
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0 + 1;
	while (iVar0 <= iParam1)
	{
		__LIB_9__::func_14(&iVar1, &iVar2, iVar0);
		if (__LIB_13__::func_687(iVar1))
		{
			__LIB_14__::func_426(iVar1);
			__LIB_44__::func_112(iVar1, 1);
			__LIB_9__::func_6(iVar1);
		}
		if (__LIB_13__::func_687(iVar2))
		{
			__LIB_14__::func_426(iVar2);
			__LIB_44__::func_112(iVar2, 1);
			__LIB_9__::func_6(iVar2);
		}
		__LIB_16__::func_575(iVar0);
		__LIB_8__::func_978("CCR_INC_TCK" /* GXT: LS Car Meet reputation increased: Level ~1~. */, iVar0, 1);
		iVar0++;
	}
	__LIB_14__::func_425();
}

int func_555(var uParam0)//Position - 0x5885C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_70.f_116.f_25)
	{
		switch (Local_70.f_116.f_26)
		{
			case 0:
				if (__LIB_12__::func_387())
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = uParam0;
					if (iLocal_183)
					{
						iVar2 = 0;
					}
					if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
					{
						if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar2)
						{
							iVar1 = iVar2;
						}
						else
						{
							iVar1 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
						}
						iVar2 = (iVar2 - iVar1);
					}
					if (iVar2 > 0)
					{
						if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
						{
							if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar2)
							{
								iVar0 = iVar2;
							}
							else
							{
								iVar0 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
							}
							iVar2 = (iVar2 - iVar0);
						}
					}
					HUD::USE_FAKE_MP_CASH(true);
					HUD::CHANGE_FAKE_MP_CASH(-iVar0, -iVar1);
					Local_70.f_116.f_26 = 70;
				}
				else
				{
					Local_70.f_116.f_26 = 90;
				}
				break;
			case 70:
				if (__LIB_2__::func_835(__LIB_3__::func_534()))
				{
					if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
					{
						Local_70.f_116.f_26 = 80;
					}
					else
					{
						Local_70.f_116.f_26 = 90;
					}
				}
				break;
			case 80:
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				Local_70.f_116.f_25 = 0;
				Local_70.f_116.f_26 = 0;
				break;
			case 90:
				__LIB_1__::func_34(__LIB_3__::func_534());
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				Local_70.f_116.f_25 = 0;
				Local_70.f_116.f_26 = 0;
				return 0;
				break;
			}
	}
	return 1;
}

void func_560(var uParam0, struct<4> Param1)//Position - 0x5913C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = MISC::GET_HASH_KEY(&Param1);
		switch (iVar0)
		{
			case joaat("TAT_BB_000"):
				*uParam0 = Global_262145.f_7555 /* Tunable: DLC_FEMALE_TATTOOS_LOS_SANTOS_WREATH */;
				break;
			case joaat("TAT_BB_001"):
				*uParam0 = Global_262145.f_7556 /* Tunable: DLC_FEMALE_TATTOOS_HIBISCUS_FLOWER_DUO */;
				break;
			case joaat("TAT_BB_002"):
				*uParam0 = Global_262145.f_7557 /* Tunable: DLC_FEMALE_TATTOOS_TRIBAL_FLOWER */;
				break;
			case joaat("TAT_BB_003"):
				*uParam0 = Global_262145.f_7558 /* Tunable: DLC_FEMALE_TATTOOS_ROCK_SOLID */;
				break;
			case joaat("TAT_BB_004"):
				*uParam0 = Global_262145.f_7559 /* Tunable: DLC_FEMALE_TATTOOS_CATFISH */;
				break;
			case joaat("TAT_BB_005"):
				*uParam0 = Global_262145.f_7560 /* Tunable: DLC_FEMALE_TATTOOS_SHRIMP */;
				break;
			case joaat("TAT_BB_006"):
				*uParam0 = Global_262145.f_7561 /* Tunable: DLC_FEMALE_TATTOOS_LOVE_DAGGER */;
				break;
			case joaat("TAT_BB_007"):
				*uParam0 = Global_262145.f_7562 /* Tunable: DLC_FEMALE_TATTOOS_SCHOOL_OF_FISH */;
				break;
			case joaat("TAT_BB_008"):
				*uParam0 = Global_262145.f_7563 /* Tunable: DLC_FEMALE_TATTOOS_TRIBAL_BUTTERFLY */;
				break;
			case joaat("TAT_BB_009"):
				*uParam0 = Global_262145.f_7564 /* Tunable: DLC_FEMALE_TATTOOS_HIBISCUS_FLOWER */;
				break;
			case joaat("TAT_BB_010"):
				*uParam0 = Global_262145.f_7565 /* Tunable: DLC_FEMALE_TATTOOS_DOLPHIN */;
				break;
			case joaat("TAT_BB_011"):
				*uParam0 = Global_262145.f_7566 /* Tunable: DLC_FEMALE_TATTOOS_SEA_HORSES */;
				break;
			case joaat("TAT_BB_012"):
				*uParam0 = Global_262145.f_7567 /* Tunable: DLC_FEMALE_TATTOOS_ANCHOR */;
				break;
			case joaat("TAT_BB_013"):
				*uParam0 = Global_262145.f_7567 /* Tunable: DLC_FEMALE_TATTOOS_ANCHOR */;
				break;
			case joaat("TAT_BB_014"):
				*uParam0 = Global_262145.f_7568 /* Tunable: DLC_FEMALE_TATTOOS_SWALLOW */;
				break;
			case joaat("TAT_BB_015"):
				*uParam0 = Global_262145.f_7569 /* Tunable: DLC_FEMALE_TATTOOS_TRIBAL_FISH */;
				break;
			case joaat("TAT_BB_016"):
				*uParam0 = Global_262145.f_7570 /* Tunable: DLC_FEMALE_TATTOOS_PARROT */;
				break;
			case joaat("TAT_BUS_F_002"):
				*uParam0 = Global_262145.f_7571 /* Tunable: DLC_FEMALE_TATTOOS_HIGH_ROLLER */;
				break;
			case joaat("TAT_BUS_F_000"):
				*uParam0 = Global_262145.f_7572 /* Tunable: DLC_FEMALE_TATTOOS_RESPECT */;
				break;
			case joaat("TAT_BUS_F_006"):
				*uParam0 = Global_262145.f_7573 /* Tunable: DLC_FEMALE_TATTOOS_SINGLE */;
				break;
			case joaat("TAT_BUS_F_007"):
				*uParam0 = Global_262145.f_7574 /* Tunable: DLC_FEMALE_TATTOOS_VALDEGRACE_LOGO */;
				break;
			case joaat("TAT_BUS_F_008"):
				*uParam0 = Global_262145.f_7575 /* Tunable: DLC_FEMALE_TATTOOS_MONEY_ROSE */;
				break;
			case joaat("TAT_BUS_F_010"):
				*uParam0 = Global_262145.f_7576 /* Tunable: DLC_FEMALE_TATTOOS_DIAMOND_CROWN */;
				break;
			case joaat("TAT_BUS_F_009"):
				*uParam0 = Global_262145.f_7577 /* Tunable: DLC_FEMALE_TATTOOS_DOLLAR_SIGN */;
				break;
			case joaat("TAT_BUS_F_011"):
				*uParam0 = Global_262145.f_7578 /* Tunable: DLC_FEMALE_TATTOOS_DIAMOND_JACK */;
				break;
			case joaat("TAT_BUS_F_003"):
				*uParam0 = Global_262145.f_7579 /* Tunable: DLC_FEMALE_TATTOOS_MAKIN_MONEY */;
				break;
			case joaat("TAT_BUS_F_001"):
				*uParam0 = Global_262145.f_7580 /* Tunable: DLC_FEMALE_TATTOOS_GOLD_DIGGER */;
				break;
			case joaat("TAT_BUS_F_005"):
				*uParam0 = Global_262145.f_7581 /* Tunable: DLC_FEMALE_TATTOOS_GREED_IS_GOOD */;
				break;
			case joaat("TAT_BUS_F_004"):
				*uParam0 = Global_262145.f_7582 /* Tunable: DLC_FEMALE_TATTOOS_LOVE_MONEY */;
				break;
			case joaat("TAT_BUS_F_012"):
				*uParam0 = Global_262145.f_7583 /* Tunable: DLC_FEMALE_TATTOOS_SANTO_CAPRA_LOGO */;
				break;
			case joaat("TAT_BUS_F_013"):
				*uParam0 = Global_262145.f_7584 /* Tunable: DLC_FEMALE_TATTOOS_MONEY_BAG */;
				break;
			case joaat("TAT_BUS_F_014"):
				*uParam0 = Global_262145.f_7585 /* Tunable: DLC_FEMALE_TATTOOS_CREW_EMBLEM_CHEST */;
				break;
			case joaat("TAT_BUS_F_015"):
				*uParam0 = Global_262145.f_7586 /* Tunable: DLC_FEMALE_TATTOOS_CREW_EMBLEM_ARM */;
				break;
			case joaat("TAT_BB_017"):
				*uParam0 = Global_262145.f_7587 /* Tunable: DLC_MALE_TATTOO_MERMAID_LS */;
				break;
			case joaat("TAT_BB_018"):
				*uParam0 = Global_262145.f_7588 /* Tunable: DLC_MALE_TATTOO_SHIP_ARMS */;
				break;
			case joaat("TAT_BB_019"):
				*uParam0 = Global_262145.f_7589 /* Tunable: DLC_MALE_TATTOO_TRIBAL_HAMMERHEAD */;
				break;
			case joaat("TAT_BB_020"):
				*uParam0 = Global_262145.f_7590 /* Tunable: DLC_MALE_TATTOO_TRIBAL_SHARK */;
				break;
			case joaat("TAT_BB_021"):
				*uParam0 = Global_262145.f_7591 /* Tunable: DLC_MALE_TATTOO_PIRATE_SKULL */;
				break;
			case joaat("TAT_BB_022"):
				*uParam0 = Global_262145.f_7592 /* Tunable: DLC_MALE_TATTOO_SURF_LS */;
				break;
			case joaat("TAT_BB_023"):
				*uParam0 = Global_262145.f_7593 /* Tunable: DLC_MALE_TATTOO_SWORDFISH */;
				break;
			case joaat("TAT_BB_024"):
				*uParam0 = Global_262145.f_7594 /* Tunable: DLC_MALE_TATTOO_TIKI_TOWER */;
				break;
			case joaat("TAT_BB_025"):
				*uParam0 = Global_262145.f_7595 /* Tunable: DLC_MALE_TATTOO_TRIBAL_TIKI_TOWER */;
				break;
			case joaat("TAT_BB_026"):
				*uParam0 = Global_262145.f_7596 /* Tunable: DLC_MALE_TATTOO_TRIBAL_SUN */;
				break;
			case joaat("TAT_BB_027"):
				*uParam0 = Global_262145.f_7597 /* Tunable: DLC_MALE_TATTOO_TRIBAL_STAR */;
				break;
			case joaat("TAT_BB_028"):
				*uParam0 = Global_262145.f_7598 /* Tunable: DLC_MALE_TATTOO_LITTLE_FISH */;
				break;
			case joaat("TAT_BB_029"):
				*uParam0 = Global_262145.f_7599 /* Tunable: DLC_MALE_TATTOO_SURFS_UP */;
				break;
			case joaat("TAT_BB_030"):
				*uParam0 = Global_262145.f_7600 /* Tunable: DLC_MALE_TATTOO_VESPUCCI_BEAUTY */;
				break;
			case joaat("TAT_BB_031"):
				*uParam0 = Global_262145.f_7601 /* Tunable: DLC_MALE_TATTOO_SHARK */;
				break;
			case joaat("TAT_BB_032"):
				*uParam0 = Global_262145.f_7602 /* Tunable: DLC_MALE_TATTOO_WHEEL */;
				break;
			case joaat("TAT_BUS_005"):
				*uParam0 = Global_262145.f_7603 /* Tunable: DLC_MALE_TATTOO_CASH_KING */;
				break;
			case joaat("TAT_BUS_003"):
				*uParam0 = Global_262145.f_7604 /* Tunable: DLC_MALE_TATTOO_100_BILL */;
				break;
			case joaat("TAT_BUS_011"):
				*uParam0 = Global_262145.f_7605 /* Tunable: DLC_MALE_TATTOO_HUSTLER */;
				break;
			case joaat("TAT_BUS_000"):
				*uParam0 = Global_262145.f_7606 /* Tunable: DLC_MALE_TATTOO_MAKIN_PAPER */;
				break;
			case joaat("TAT_BUS_006"):
				*uParam0 = Global_262145.f_7607 /* Tunable: DLC_MALE_TATTOO_BOLD_DOLLAR_SIGN */;
				break;
			case joaat("TAT_BUS_007"):
				*uParam0 = Global_262145.f_7608 /* Tunable: DLC_MALE_TATTOO_SCRIPT_DOLLAR_SIGN */;
				break;
			case joaat("TAT_BUS_008"):
				*uParam0 = Global_262145.f_7609 /* Tunable: DLC_MALE_TATTOO_100 */;
				break;
			case joaat("TAT_BUS_009"):
				*uParam0 = Global_262145.f_7610 /* Tunable: DLC_MALE_TATTOO_DOLLAR_SKULL */;
				break;
			case joaat("TAT_BUS_001"):
				*uParam0 = Global_262145.f_7611 /* Tunable: DLC_MALE_TATTOO_RICH */;
				break;
			case joaat("TAT_BUS_002"):
				*uParam0 = Global_262145.f_7612 /* Tunable: DLC_MALE_TATTOO_DOLLAR_SIGNS */;
				break;
			case joaat("TAT_BUS_004"):
				*uParam0 = Global_262145.f_7613 /* Tunable: DLC_MALE_TATTOO_ALLSEEING_EYE */;
				break;
			case joaat("TAT_BUS_010"):
				*uParam0 = Global_262145.f_7614 /* Tunable: DLC_MALE_TATTOO_GREEN */;
				break;
			case joaat("TAT_BUS_012"):
				*uParam0 = Global_262145.f_7615 /* Tunable: DLC_MALE_TATTOO_CREW_EMBLEM_CHEST */;
				break;
			case joaat("TAT_BUS_013"):
				*uParam0 = Global_262145.f_7616 /* Tunable: DLC_MALE_TATTOO_CREW_EMBLEM_ARM */;
				break;
			case joaat("TAT_X2_000"):
				*uParam0 = Global_262145.f_9418 /* Tunable: TATTOOS_XMAS14_SKULL_RIDER */;
				break;
			case joaat("TAT_X2_001"):
				*uParam0 = Global_262145.f_9419 /* Tunable: TATTOOS_XMAS14_SPIDER_OUTLINE */;
				break;
			case joaat("TAT_X2_002"):
				*uParam0 = Global_262145.f_9420 /* Tunable: TATTOOS_XMAS14_SPIDER_COLOR */;
				break;
			case joaat("TAT_X2_003"):
				*uParam0 = Global_262145.f_9421 /* Tunable: TATTOOS_XMAS14_SNAKE_OUTLINE */;
				break;
			case joaat("TAT_X2_004"):
				*uParam0 = Global_262145.f_9422 /* Tunable: TATTOOS_XMAS14_SNAKE_SHADED */;
				break;
			case joaat("TAT_X2_005"):
				*uParam0 = Global_262145.f_9423 /* Tunable: TATTOOS_XMAS14_CARP_OUTLINE */;
				break;
			case joaat("TAT_X2_006"):
				*uParam0 = Global_262145.f_9424 /* Tunable: TATTOOS_XMAS14_CARP_SHADED */;
				break;
			case joaat("TAT_X2_007"):
				*uParam0 = Global_262145.f_9425 /* Tunable: TATTOOS_XMAS14_LOS_MUERTOS */;
				break;
			case joaat("TAT_X2_008"):
				*uParam0 = Global_262145.f_9426 /* Tunable: TATTOOS_XMAS14_DEATH_BEFORE_DISHONOR */;
				break;
			case joaat("TAT_X2_009"):
				*uParam0 = Global_262145.f_9427 /* Tunable: TATTOOS_XMAS14_TIME_TO_DIE */;
				break;
			case joaat("TAT_X2_010"):
				*uParam0 = Global_262145.f_9428 /* Tunable: TATTOOS_XMAS14_ELECTRIC_SNAKE */;
				break;
			case joaat("TAT_X2_011"):
				*uParam0 = Global_262145.f_9429 /* Tunable: TATTOOS_XMAS14_ROARING_TIGER */;
				break;
			case joaat("TAT_X2_012"):
				*uParam0 = Global_262145.f_9430 /* Tunable: TATTOOS_XMAS14_8_BALL_SKULL */;
				break;
			case joaat("TAT_X2_013"):
				*uParam0 = Global_262145.f_9431 /* Tunable: TATTOOS_XMAS14_LIZARD */;
				break;
			case joaat("TAT_X2_014"):
				*uParam0 = Global_262145.f_9432 /* Tunable: TATTOOS_XMAS14_FLORAL_DAGGER */;
				break;
			case joaat("TAT_X2_015"):
				*uParam0 = Global_262145.f_9433 /* Tunable: TATTOOS_XMAS14_JAPANESE_WARRIOR */;
				break;
			case joaat("TAT_X2_016"):
				*uParam0 = Global_262145.f_9434 /* Tunable: TATTOOS_XMAS14_LOOSE_LIPS_OUTLINE */;
				break;
			case joaat("TAT_X2_017"):
				*uParam0 = Global_262145.f_9435 /* Tunable: TATTOOS_XMAS14_LOOSE_LIPS_COLOR */;
				break;
			case joaat("TAT_X2_018"):
				*uParam0 = Global_262145.f_9436 /* Tunable: TATTOOS_XMAS14_ROYAL_DAGGER_OUTLINE */;
				break;
			case joaat("TAT_X2_019"):
				*uParam0 = Global_262145.f_9437 /* Tunable: TATTOOS_XMAS14_ROYAL_DAGGER_COLOR */;
				break;
			case joaat("TAT_X2_020"):
				*uParam0 = Global_262145.f_9438 /* Tunable: TATTOOS_XMAS14_TIMES_UP_OUTLINE */;
				break;
			case joaat("TAT_X2_021"):
				*uParam0 = Global_262145.f_9439 /* Tunable: TATTOOS_XMAS14_TIMES_UP_COLOR */;
				break;
			case joaat("TAT_X2_022"):
				*uParam0 = Global_262145.f_9440 /* Tunable: TATTOOS_XMAS14_YOURE_NEXT_OUTLINE */;
				break;
			case joaat("TAT_X2_023"):
				*uParam0 = Global_262145.f_9441 /* Tunable: TATTOOS_XMAS14_YOURE_NEXT_COLOR */;
				break;
			case joaat("TAT_X2_024"):
				*uParam0 = Global_262145.f_9442 /* Tunable: TATTOOS_XMAS14_SNAKE_HEAD_OUTLINE */;
				break;
			case joaat("TAT_X2_025"):
				*uParam0 = Global_262145.f_9443 /* Tunable: TATTOOS_XMAS14_SNAKE_HEAD_COLOR */;
				break;
			case joaat("TAT_X2_026"):
				*uParam0 = Global_262145.f_9444 /* Tunable: TATTOOS_XMAS14_FUCK_LUCK_OUTLINE */;
				break;
			case joaat("TAT_X2_027"):
				*uParam0 = Global_262145.f_9445 /* Tunable: TATTOOS_XMAS14_FUCK_LUCK_COLOR */;
				break;
			case joaat("TAT_X2_028"):
				*uParam0 = Global_262145.f_9446 /* Tunable: TATTOOS_XMAS14_EXECUTIONER */;
				break;
			case joaat("TAT_X2_029"):
				*uParam0 = Global_262145.f_9447 /* Tunable: TATTOOS_XMAS14_BEAUTIFUL_DEATH */;
				break;
		}
		switch (iVar0)
		{
			case joaat("TAT_ST_000"):
				*uParam0 = Global_262145.f_17266 /* Tunable: STUNT_STUNT_SKULL */;
				break;
			case joaat("TAT_ST_001"):
				*uParam0 = Global_262145.f_17267 /* Tunable: STUNT_8_EYED_SKULL */;
				break;
			case joaat("TAT_ST_002"):
				*uParam0 = Global_262145.f_17268 /* Tunable: STUNT_BIG_CAT */;
				break;
			case joaat("TAT_ST_003"):
				*uParam0 = Global_262145.f_17269 /* Tunable: STUNT_POISON_WRENCH */;
				break;
			case joaat("TAT_ST_004"):
				*uParam0 = Global_262145.f_17270 /* Tunable: STUNT_SCORPION_ */;
				break;
			case joaat("TAT_ST_005"):
				*uParam0 = Global_262145.f_17271 /* Tunable: STUNT_DEMON_SPARK_PLUG */;
				break;
			case joaat("TAT_ST_006"):
				*uParam0 = Global_262145.f_17272 /* Tunable: STUNT_TOXIC_SPIDER */;
				break;
			case joaat("TAT_ST_007"):
				*uParam0 = Global_262145.f_17273 /* Tunable: STUNTDAGGER_DEVIL */;
				break;
			case joaat("TAT_ST_008"):
				*uParam0 = Global_262145.f_17274 /* Tunable: STUNT_MOONLIGHT_RIDE */;
				break;
			case joaat("TAT_ST_009"):
				*uParam0 = Global_262145.f_17275 /* Tunable: STUNT_ARACHNID_OF_DEATH */;
				break;
			case joaat("TAT_ST_010"):
				*uParam0 = Global_262145.f_17276 /* Tunable: STUNT_GRAVE_VULTURE */;
				break;
			case joaat("TAT_ST_011"):
				*uParam0 = Global_262145.f_17277 /* Tunable: STUNT_WHEELS_OF_DEATH */;
				break;
			case joaat("TAT_ST_012"):
				*uParam0 = Global_262145.f_17278 /* Tunable: STUNT_PUNK_BIKER_ */;
				break;
			case joaat("TAT_ST_013"):
				*uParam0 = Global_262145.f_17279 /* Tunable: STUNT_DIRT_TRACK_HERO */;
				break;
			case joaat("TAT_ST_014"):
				*uParam0 = Global_262145.f_17280 /* Tunable: STUNT_BAT_CAT_OF_SPADES */;
				break;
			case joaat("TAT_ST_015"):
				*uParam0 = Global_262145.f_17281 /* Tunable: STUNT_PRAYING_GLOVES */;
				break;
			case joaat("TAT_ST_016"):
				*uParam0 = Global_262145.f_17282 /* Tunable: STUNT_COFFIN_RACER */;
				break;
			case joaat("TAT_ST_017"):
				*uParam0 = Global_262145.f_17283 /* Tunable: STUNT_BAT_WHEEL */;
				break;
			case joaat("TAT_ST_018"):
				*uParam0 = Global_262145.f_17284 /* Tunable: STUNT_VINTAGE_BULLY */;
				break;
			case joaat("TAT_ST_019"):
				*uParam0 = Global_262145.f_17285 /* Tunable: STUNT_ENGINE_HEART */;
				break;
			case joaat("TAT_ST_020"):
				*uParam0 = Global_262145.f_17286 /* Tunable: STUNT_PISTON_ANGEL */;
				break;
			case joaat("TAT_ST_021"):
				*uParam0 = Global_262145.f_17287 /* Tunable: STUNT_GOLDEN_COBRA */;
				break;
			case joaat("TAT_ST_022"):
				*uParam0 = Global_262145.f_17288 /* Tunable: STUNT_PISTON_HEAD */;
				break;
			case joaat("TAT_ST_023"):
				*uParam0 = Global_262145.f_17289 /* Tunable: STUNT_TANKED_ */;
				break;
			case joaat("TAT_ST_024"):
				*uParam0 = Global_262145.f_17290 /* Tunable: STUNT_ROAD_KILL */;
				break;
			case joaat("TAT_ST_025"):
				*uParam0 = Global_262145.f_17291 /* Tunable: STUNT_SPEED_FREAK */;
				break;
			case joaat("TAT_ST_026"):
				*uParam0 = Global_262145.f_17292 /* Tunable: STUNT_WINGED_WHEEL */;
				break;
			case joaat("TAT_ST_027"):
				*uParam0 = Global_262145.f_17293 /* Tunable: STUNT_PUNK_ROAD_HOG */;
				break;
			case joaat("TAT_ST_028"):
				*uParam0 = Global_262145.f_17294 /* Tunable: STUNT_QUAD_GOBLIN */;
				break;
			case joaat("TAT_ST_029"):
				*uParam0 = Global_262145.f_17295 /* Tunable: STUNT_MAJESTIC_FINISH */;
				break;
			case joaat("TAT_ST_030"):
				*uParam0 = Global_262145.f_17296 /* Tunable: STUNT_MANS_RUIN_ */;
				break;
			case joaat("TAT_ST_031"):
				*uParam0 = Global_262145.f_17297 /* Tunable: STUNT_STUNT_JESUS */;
				break;
			case joaat("TAT_ST_032"):
				*uParam0 = Global_262145.f_17298 /* Tunable: STUNT_WHEELIE_MOUSE */;
				break;
			case joaat("TAT_ST_033"):
				*uParam0 = Global_262145.f_17299 /* Tunable: STUNT_SUGAR_SKULL_TRUCKER */;
				break;
			case joaat("TAT_ST_034"):
				*uParam0 = Global_262145.f_17300 /* Tunable: STUNT_FEATHER_ROAD_KILL */;
				break;
			case joaat("TAT_ST_035"):
				*uParam0 = Global_262145.f_17301 /* Tunable: STUNT_STUNTMANS_END */;
				break;
			case joaat("TAT_ST_036"):
				*uParam0 = Global_262145.f_17302 /* Tunable: STUNT_BIKER_STALLION */;
				break;
			case joaat("TAT_ST_037"):
				*uParam0 = Global_262145.f_17303 /* Tunable: STUNT_BIG_GRILLS */;
				break;
			case joaat("TAT_ST_038"):
				*uParam0 = Global_262145.f_17304 /* Tunable: STUNT_ONE_DOWN_FIVE_UP */;
				break;
			case joaat("TAT_ST_039"):
				*uParam0 = Global_262145.f_17305 /* Tunable: STUNT_KABOOM */;
				break;
			case joaat("TAT_ST_040"):
				*uParam0 = Global_262145.f_17306 /* Tunable: STUNT_MONKEY_CHOPPER */;
				break;
			case joaat("TAT_ST_041"):
				*uParam0 = Global_262145.f_17307 /* Tunable: STUNT_BRAPP */;
				break;
			case joaat("TAT_ST_042"):
				*uParam0 = Global_262145.f_17308 /* Tunable: STUNT_FLAMING_QUAD */;
				break;
			case joaat("TAT_ST_043"):
				*uParam0 = Global_262145.f_17309 /* Tunable: STUNT_ENGINE_ARM */;
				break;
			case joaat("TAT_ST_044"):
				*uParam0 = Global_262145.f_17310 /* Tunable: STUNT_RAM_SKULL */;
				break;
			case joaat("TAT_ST_045"):
				*uParam0 = Global_262145.f_17311 /* Tunable: STUNT_SEVERED_HAND */;
				break;
			case joaat("TAT_ST_046"):
				*uParam0 = Global_262145.f_17312 /* Tunable: STUNT_FULL_THROTLE */;
				break;
			case joaat("TAT_ST_047"):
				*uParam0 = Global_262145.f_17313 /* Tunable: STUNT_BRAKE_KNIFE */;
				break;
			case joaat("TAT_ST_048"):
				*uParam0 = Global_262145.f_17314 /* Tunable: STUNT_RACING_DOLL */;
				break;
			case joaat("TAT_ST_049"):
				*uParam0 = Global_262145.f_17315 /* Tunable: STUNT_SEDUCTIVE_MECHANIC */;
				break;
		}
		switch (iVar0)
		{
			case joaat("TAT_BI_000"):
				*uParam0 = Global_262145.f_17927 /* Tunable: BIKER_BOTH_GENDERS_DEMON_RIDER */;
				break;
			case joaat("TAT_BI_001"):
				*uParam0 = Global_262145.f_17928 /* Tunable: BIKER_BOTH_GENDERS_BOTH_BARRELS */;
				break;
			case joaat("TAT_BI_002"):
				*uParam0 = Global_262145.f_17929 /* Tunable: BIKER_BOTH_GENDERS_ROSE_TRIBUTE */;
				break;
			case joaat("TAT_BI_003"):
				*uParam0 = Global_262145.f_17930 /* Tunable: BIKER_BOTH_GENDERS_WEB_RIDER */;
				break;
			case joaat("TAT_BI_004"):
				*uParam0 = Global_262145.f_17931 /* Tunable: BIKER_BOTH_GENDERS_DRAGONS_FURY */;
				break;
			case joaat("TAT_BI_005"):
				*uParam0 = Global_262145.f_17932 /* Tunable: BIKER_BOTH_GENDERS_MADE_IN_AMERICA */;
				break;
			case joaat("TAT_BI_006"):
				*uParam0 = Global_262145.f_17933 /* Tunable: BIKER_BOTH_GENDERS_CHOPPER_FREEDOM */;
				break;
			case joaat("TAT_BI_007"):
				*uParam0 = Global_262145.f_17934 /* Tunable: BIKER_BOTH_GENDERS_SWOOPING_EAGLE */;
				break;
			case joaat("TAT_BI_008"):
				*uParam0 = Global_262145.f_17935 /* Tunable: BIKER_BOTH_GENDERS_FREEDOM_WHEELS */;
				break;
			case joaat("TAT_BI_009"):
				*uParam0 = Global_262145.f_17936 /* Tunable: BIKER_BOTH_GENDERS_MORBID_ARACHNID */;
				break;
			case joaat("TAT_BI_010"):
				*uParam0 = Global_262145.f_17937 /* Tunable: BIKER_BOTH_GENDERS_SKULL_OF_TAURUS */;
				break;
			case joaat("TAT_BI_011"):
				*uParam0 = Global_262145.f_17938 /* Tunable: BIKER_BOTH_GENDERS_RIP_MY_BROTHERS */;
				break;
			case joaat("TAT_BI_012"):
				*uParam0 = Global_262145.f_17939 /* Tunable: BIKER_BOTH_GENDERS_URBAN_STUNTER */;
				break;
			case joaat("TAT_BI_013"):
				*uParam0 = Global_262145.f_17940 /* Tunable: BIKER_BOTH_GENDERS_DEMON_CROSSBONES */;
				break;
			case joaat("TAT_BI_014"):
				*uParam0 = Global_262145.f_17941 /* Tunable: BIKER_BOTH_GENDERS_LADY_MORTALITY */;
				break;
			case joaat("TAT_BI_015"):
				*uParam0 = Global_262145.f_17942 /* Tunable: BIKER_BOTH_GENDERS_RIDE_OR_DIE */;
				break;
			case joaat("TAT_BI_016"):
				*uParam0 = Global_262145.f_17943 /* Tunable: BIKER_BOTH_GENDERS_MACABRE_TREE */;
				break;
			case joaat("TAT_BI_017"):
				*uParam0 = Global_262145.f_17944 /* Tunable: BIKER_BOTH_GENDERS_CLAWED_BEAST */;
				break;
			case joaat("TAT_BI_018"):
				*uParam0 = Global_262145.f_17945 /* Tunable: BIKER_BOTH_GENDERS_SKELETAL_CHOPPER */;
				break;
			case joaat("TAT_BI_019"):
				*uParam0 = Global_262145.f_17946 /* Tunable: BIKER_BOTH_GENDERS_GRUESOME_TALONS */;
				break;
			case joaat("TAT_BI_020"):
				*uParam0 = Global_262145.f_17947 /* Tunable: BIKER_BOTH_GENDERS_CRANIAL_ROSE */;
				break;
			case joaat("TAT_BI_021"):
				*uParam0 = Global_262145.f_17948 /* Tunable: BIKER_BOTH_GENDERS_FLAMING_REAPER */;
				break;
			case joaat("TAT_BI_022"):
				*uParam0 = Global_262145.f_17949 /* Tunable: BIKER_BOTH_GENDERS_WESTERN_INSIGNIA */;
				break;
			case joaat("TAT_BI_023"):
				*uParam0 = Global_262145.f_17950 /* Tunable: BIKER_BOTH_GENDERS_WESTERN_MC */;
				break;
			case joaat("TAT_BI_024"):
				*uParam0 = Global_262145.f_17951 /* Tunable: BIKER_BOTH_GENDERS_LIVE_TO_RIDE */;
				break;
			case joaat("TAT_BI_025"):
				*uParam0 = Global_262145.f_19008 /* Tunable: TATTOO_GOOD_LUCK */;
				break;
			case joaat("TAT_BI_026"):
				*uParam0 = Global_262145.f_19009 /* Tunable: TATTOO_AMERICAN_DREAM */;
				break;
			case joaat("TAT_BI_027"):
				*uParam0 = Global_262145.f_19010 /* Tunable: TATTOO_BAD_LUCK */;
				break;
			case joaat("TAT_BI_028"):
				*uParam0 = Global_262145.f_19011 /* Tunable: TATTOO_DUSK_RIDER */;
				break;
			case joaat("TAT_BI_029"):
				*uParam0 = Global_262145.f_19012 /* Tunable: TATTOO_BONE_WRENCH */;
				break;
			case joaat("TAT_BI_030"):
				*uParam0 = Global_262145.f_19013 /* Tunable: TATTOO_BROTHERS_FOR_LIFE */;
				break;
			case joaat("TAT_BI_031"):
				*uParam0 = Global_262145.f_19014 /* Tunable: TATTOO_GEAR_HEAD */;
				break;
			case joaat("TAT_BI_032"):
				*uParam0 = Global_262145.f_19015 /* Tunable: TATTOO_WESTERN_EAGLE */;
				break;
			case joaat("TAT_BI_033"):
				*uParam0 = Global_262145.f_19016 /* Tunable: TATTOO_EAGLE_EMBLEM */;
				break;
			case joaat("TAT_BI_034"):
				*uParam0 = Global_262145.f_19017 /* Tunable: TATTOO_BROTHERHOOD_OF_BIKES */;
				break;
			case joaat("TAT_BI_035"):
				*uParam0 = Global_262145.f_19018 /* Tunable: TATTOO_CHAIN_FIST */;
				break;
			case joaat("TAT_BI_036"):
				*uParam0 = Global_262145.f_19019 /* Tunable: -193252292 */;
				break;
			case joaat("TAT_BI_037"):
				*uParam0 = Global_262145.f_19020 /* Tunable: TATTOO_SCORCHED_SOUL */;
				break;
			case joaat("TAT_BI_038"):
				*uParam0 = Global_262145.f_19021 /* Tunable: TATTOO_FTW */;
				break;
			case joaat("TAT_BI_039"):
				*uParam0 = Global_262145.f_19022 /* Tunable: TATTOO_GAS_GUZZLER */;
				break;
			case joaat("TAT_BI_040"):
				*uParam0 = Global_262145.f_19023 /* Tunable: TATTOO_AMERICAN_MADE */;
				break;
			case joaat("TAT_BI_041"):
				*uParam0 = Global_262145.f_19024 /* Tunable: TATTOO_NO_REGRETS */;
				break;
			case joaat("TAT_BI_042"):
				*uParam0 = Global_262145.f_19025 /* Tunable: TATTOO_GRIM_RIDER */;
				break;
			case joaat("TAT_BI_043"):
				*uParam0 = Global_262145.f_19026 /* Tunable: TATTOO_RIDE_FOREVER */;
				break;
			case joaat("TAT_BI_044"):
				*uParam0 = Global_262145.f_19027 /* Tunable: TATTOO_RIDE_FREE */;
				break;
			case joaat("TAT_BI_045"):
				*uParam0 = Global_262145.f_19028 /* Tunable: TATTOO_RIDE_HARD_DIE_FAST */;
				break;
			case joaat("TAT_BI_046"):
				*uParam0 = Global_262145.f_19029 /* Tunable: TATTOO_SKULL_CHAIN */;
				break;
			case joaat("TAT_BI_047"):
				*uParam0 = Global_262145.f_19030 /* Tunable: TATTOO_SNAKE_BIKE */;
				break;
			case joaat("TAT_BI_048"):
				*uParam0 = Global_262145.f_19031 /* Tunable: TATTOO_STFU */;
				break;
			case joaat("TAT_BI_049"):
				*uParam0 = Global_262145.f_19032 /* Tunable: TATTOO_THESE_COLORS_DONT_RUN */;
				break;
			case joaat("TAT_BI_050"):
				*uParam0 = Global_262145.f_19033 /* Tunable: TATTOO_UNFORGIVEN */;
				break;
			case joaat("TAT_BI_051"):
				*uParam0 = Global_262145.f_19041 /* Tunable: WESTERN_STYLIZED */;
				break;
			case joaat("TAT_BI_052"):
				*uParam0 = Global_262145.f_19038 /* Tunable: TATTOO_BIKER_MOUNT */;
				break;
			case joaat("TAT_BI_053"):
				*uParam0 = Global_262145.f_19039 /* Tunable: TATTOO_MUFFLER_HELMET */;
				break;
			case joaat("TAT_BI_054"):
				*uParam0 = Global_262145.f_19037 /* Tunable: TATTOO_MUM */;
				break;
			case joaat("TAT_BI_055"):
				*uParam0 = Global_262145.f_19036 /* Tunable: TATTOO_POISON_SCORPION */;
				break;
			case joaat("TAT_BI_056"):
				*uParam0 = Global_262145.f_19034 /* Tunable: TATTOO_BONE_CRUISER */;
				break;
			case joaat("TAT_BI_057"):
				*uParam0 = Global_262145.f_19035 /* Tunable: TATTOO_LAUGHING_SKULL */;
				break;
			case joaat("TAT_BI_058"):
				*uParam0 = Global_262145.f_19040 /* Tunable: TATTOO_REAPER_VULTURE */;
				break;
			case joaat("TAT_BI_059"):
				*uParam0 = Global_262145.f_19149 /* Tunable: TATTOO_FAGGIO */;
				break;
			case joaat("TAT_BI_060"):
				*uParam0 = Global_262145.f_19150 /* Tunable: TATTOO_WE_ARE_THE_MODS */;
				break;
		}
		switch (iVar0)
		{
			case joaat("TAT_IE_000"):
				*uParam0 = Global_262145.f_19750 /* Tunable: IMPEXP_BOTH_GENDERS_BLOCK_BACK */;
				break;
			case joaat("TAT_IE_001"):
				*uParam0 = Global_262145.f_19751 /* Tunable: IMPEXP_BOTH_GENDERS_POWER_PLANT */;
				break;
			case joaat("TAT_IE_002"):
				*uParam0 = Global_262145.f_19752 /* Tunable: IMPEXP_BOTH_GENDERS_TUNED_TO_DEATH */;
				break;
			case joaat("TAT_IE_003"):
				*uParam0 = Global_262145.f_19753 /* Tunable: IMPEXP_BOTH_GENDERS_MECHANICAL_SLEEVE */;
				break;
			case joaat("TAT_IE_004"):
				*uParam0 = Global_262145.f_19754 /* Tunable: IMPEXP_BOTH_GENDERS_PISTON_SLEEVE */;
				break;
			case joaat("TAT_IE_005"):
				*uParam0 = Global_262145.f_19755 /* Tunable: IMPEXP_BOTH_GENDERS_DIALLED_IN */;
				break;
			case joaat("TAT_IE_006"):
				*uParam0 = Global_262145.f_19756 /* Tunable: IMPEXP_BOTH_GENDERS_ENGULFED_BLOCK */;
				break;
			case joaat("TAT_IE_007"):
				*uParam0 = Global_262145.f_19757 /* Tunable: IMPEXP_BOTH_GENDERS_DRIVE_FOREVER */;
				break;
			case joaat("TAT_IE_008"):
				*uParam0 = Global_262145.f_19758 /* Tunable: IMPEXP_BOTH_GENDERS_SCARLETT */;
				break;
			case joaat("TAT_IE_009"):
				*uParam0 = Global_262145.f_19759 /* Tunable: IMPEXP_BOTH_GENDERS_SERPENTS_OF_DESTRUCTION */;
				break;
			case joaat("TAT_IE_010"):
				*uParam0 = Global_262145.f_19760 /* Tunable: IMPEXP_BOTH_GENDERS_TAKE_THE_WHEEL */;
				break;
			case joaat("TAT_IE_011"):
				*uParam0 = Global_262145.f_19761 /* Tunable: IMPEXP_BOTH_GENDERS_TALK_SHIT_GET_HIT */;
				break;
			case joaat("TAT_GR_000"):
				*uParam0 = Global_262145.f_20334 /* Tunable: GR_BOTH_GENDERS_BULLET_PROOF */;
				break;
			case joaat("TAT_GR_001"):
				*uParam0 = Global_262145.f_20335 /* Tunable: GR_BOTH_GENDERS_CROSSED_WEAPONS */;
				break;
			case joaat("TAT_GR_002"):
				*uParam0 = Global_262145.f_20336 /* Tunable: GR_BOTH_GENDERS_GRENADE */;
				break;
			case joaat("TAT_GR_003"):
				*uParam0 = Global_262145.f_20337 /* Tunable: GR_BOTH_GENDERS_LOCK_AND_LOAD */;
				break;
			case joaat("TAT_GR_004"):
				*uParam0 = Global_262145.f_20338 /* Tunable: GR_BOTH_GENDERS_SIDEARM */;
				break;
			case joaat("TAT_GR_005"):
				*uParam0 = Global_262145.f_20339 /* Tunable: GR_BOTH_GENDERS_PATRIOT_SKULL */;
				break;
			case joaat("TAT_GR_006"):
				*uParam0 = Global_262145.f_20340 /* Tunable: GR_BOTH_GENDERS_COMBAT_SKULL */;
				break;
			case joaat("TAT_GR_007"):
				*uParam0 = Global_262145.f_20341 /* Tunable: GR_BOTH_GENDERS_STYLIZED_TIGER */;
				break;
			case joaat("TAT_GR_008"):
				*uParam0 = Global_262145.f_21204 /* Tunable: GR_BOTH_GENDERS_BANDOLIER */;
				break;
			case joaat("TAT_GR_009"):
				*uParam0 = Global_262145.f_21205 /* Tunable: GR_BOTH_GENDERS_BUTTERFLY_KNIFE */;
				break;
			case joaat("TAT_GR_010"):
				*uParam0 = Global_262145.f_21206 /* Tunable: GR_BOTH_GENDERS_CASH_MONEY */;
				break;
			case joaat("TAT_GR_011"):
				*uParam0 = Global_262145.f_21207 /* Tunable: GR_BOTH_GENDERS_DEATH_SKULL */;
				break;
			case joaat("TAT_GR_012"):
				*uParam0 = Global_262145.f_21208 /* Tunable: GR_BOTH_GENDERS_DOLLAR_DAGGERS */;
				break;
			case joaat("TAT_GR_013"):
				*uParam0 = Global_262145.f_21209 /* Tunable: GR_BOTH_GENDERS_WOLF_INSIGNIA */;
				break;
			case joaat("TAT_GR_014"):
				*uParam0 = Global_262145.f_21210 /* Tunable: GR_BOTH_GENDERS_BACKSTABBER */;
				break;
			case joaat("TAT_GR_015"):
				*uParam0 = Global_262145.f_21211 /* Tunable: GR_BOTH_GENDERS_SPIKED_SKULL */;
				break;
			case joaat("TAT_GR_016"):
				*uParam0 = Global_262145.f_21212 /* Tunable: GR_BOTH_GENDERS_BLOOD_MONEY */;
				break;
			case joaat("TAT_GR_017"):
				*uParam0 = Global_262145.f_21213 /* Tunable: GR_BOTH_GENDERS_DOG_TAGS */;
				break;
			case joaat("TAT_GR_018"):
				*uParam0 = Global_262145.f_21214 /* Tunable: GR_BOTH_GENDERS_DUAL_WIELD_SKULL */;
				break;
			case joaat("TAT_GR_019"):
				*uParam0 = Global_262145.f_21215 /* Tunable: GR_BOTH_GENDERS_PISTOL_WINGS */;
				break;
			case joaat("TAT_GR_020"):
				*uParam0 = Global_262145.f_21216 /* Tunable: GR_BOTH_GENDERS_CROWNED_WEAPONS */;
				break;
			case joaat("TAT_GR_021"):
				*uParam0 = Global_262145.f_21217 /* Tunable: GR_BOTH_GENDERS_HAVE_A_NICE_DAY */;
				break;
			case joaat("TAT_GR_022"):
				*uParam0 = Global_262145.f_21218 /* Tunable: GR_BOTH_GENDERS_EXPLOSIVE_HEART */;
				break;
			case joaat("TAT_GR_023"):
				*uParam0 = Global_262145.f_21219 /* Tunable: GR_BOTH_GENDERS_ROSE_REVOLVER */;
				break;
			case joaat("TAT_GR_024"):
				*uParam0 = Global_262145.f_21220 /* Tunable: GR_BOTH_GENDERS_COMBAT_REAPER */;
				break;
			case joaat("TAT_GR_025"):
				*uParam0 = Global_262145.f_21221 /* Tunable: GR_BOTH_GENDERS_PRAYING_SKULL */;
				break;
			case joaat("TAT_GR_026"):
				*uParam0 = Global_262145.f_21222 /* Tunable: GR_BOTH_GENDERS_RESTLESS_SKULL */;
				break;
			case joaat("TAT_GR_027"):
				*uParam0 = Global_262145.f_21223 /* Tunable: GR_BOTH_GENDERS_SERPENT_REVOLVER */;
				break;
			case joaat("TAT_GR_028"):
				*uParam0 = Global_262145.f_21224 /* Tunable: GR_BOTH_GENDERS_MICRO_SMG_CHAIN */;
				break;
			case joaat("TAT_GR_029"):
				*uParam0 = Global_262145.f_21225 /* Tunable: GR_BOTH_GENDERS_WIN_SOME_LOSE_SOME */;
				break;
			case joaat("TAT_GR_030"):
				*uParam0 = Global_262145.f_21226 /* Tunable: GR_BOTH_GENDERS_PISTOL_ACE */;
				break;
			case joaat("TAT_AR_000"):
				*uParam0 = Global_262145.f_22539 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_TURBULENCE */;
				break;
			case joaat("TAT_AR_001"):
				*uParam0 = Global_262145.f_22540 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_PILOT_SKULL */;
				break;
			case joaat("TAT_AR_002"):
				*uParam0 = Global_262145.f_22541 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_WINGED_BOMBSHELL */;
				break;
			case joaat("TAT_AR_003"):
				*uParam0 = Global_262145.f_22542 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_TOXIC_TRAILS */;
				break;
			case joaat("TAT_AR_004"):
				*uParam0 = Global_262145.f_22543 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_BALLOON_PIONEER */;
				break;
			case joaat("TAT_AR_005"):
				*uParam0 = Global_262145.f_22544 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_PARACHUTE_BELLE */;
				break;
			case joaat("TAT_AR_006"):
				*uParam0 = Global_262145.f_22545 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_BOMBS_AWAY */;
				break;
			case joaat("TAT_AR_007"):
				*uParam0 = Global_262145.f_22546 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_EAGLE_EYES */;
				break;
			case joaat("TAT_SM_000"):
				*uParam0 = Global_262145.f_22547 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_BLESS_THE_DEAD */;
				break;
			case joaat("TAT_SM_001"):
				*uParam0 = Global_262145.f_22548 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_CRACKSHOT */;
				break;
			case joaat("TAT_SM_002"):
				*uParam0 = Global_262145.f_22549 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_DEAD_LIES */;
				break;
			case joaat("TAT_SM_003"):
				*uParam0 = Global_262145.f_22550 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_GIVE_NOTHING_BACK */;
				break;
			case joaat("TAT_SM_004"):
				*uParam0 = Global_262145.f_22551 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_HONOR */;
				break;
			case joaat("TAT_SM_005"):
				*uParam0 = Global_262145.f_22552 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_MUTINY */;
				break;
			case joaat("TAT_SM_006"):
				*uParam0 = Global_262145.f_22553 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_NEVER_SURRENDER */;
				break;
			case joaat("TAT_SM_007"):
				*uParam0 = Global_262145.f_22554 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_NO_HONOR */;
				break;
			case joaat("TAT_SM_008"):
				*uParam0 = Global_262145.f_22555 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_HORRORS_OF_THE_DEEP */;
				break;
			case joaat("TAT_SM_009"):
				*uParam0 = Global_262145.f_22556 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_TALL_SHIP_CONFLICT */;
				break;
			case joaat("TAT_SM_010"):
				*uParam0 = Global_262145.f_22557 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_SEE_YOU_IN_HELL */;
				break;
			case joaat("TAT_SM_011"):
				*uParam0 = Global_262145.f_22558 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_SINNER */;
				break;
			case joaat("TAT_SM_012"):
				*uParam0 = Global_262145.f_22559 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_THIEF */;
				break;
			case joaat("TAT_SM_013"):
				*uParam0 = Global_262145.f_22560 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_TORN_WINGS */;
				break;
			case joaat("TAT_SM_014"):
				*uParam0 = Global_262145.f_22561 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_MERMAIDS_CURSE */;
				break;
			case joaat("TAT_SM_015"):
				*uParam0 = Global_262145.f_22562 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_JOLLY_ROGER */;
				break;
			case joaat("TAT_SM_016"):
				*uParam0 = Global_262145.f_22563 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_SKULL_COMPASS */;
				break;
			case joaat("TAT_SM_017"):
				*uParam0 = Global_262145.f_22564 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_FRAMED_TALL_SHIP */;
				break;
			case joaat("TAT_SM_018"):
				*uParam0 = Global_262145.f_22565 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_FINDERS_KEEPERS */;
				break;
			case joaat("TAT_SM_019"):
				*uParam0 = Global_262145.f_22566 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_LOST_AT_SEA */;
				break;
			case joaat("TAT_SM_020"):
				*uParam0 = Global_262145.f_22567 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_HOMEWARD_BOUND */;
				break;
			case joaat("TAT_SM_021"):
				*uParam0 = Global_262145.f_22568 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_DEAD_TALES */;
				break;
			case joaat("TAT_SM_022"):
				*uParam0 = Global_262145.f_22569 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_X_MARKS_THE_SPOT */;
				break;
			case joaat("TAT_SM_023"):
				*uParam0 = Global_262145.f_22570 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_STYLIZED_KRAKEN */;
				break;
			case joaat("TAT_SM_024"):
				*uParam0 = Global_262145.f_22571 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_PIRATE_CAPTAIN */;
				break;
			case joaat("TAT_SM_025"):
				*uParam0 = Global_262145.f_22572 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_CLAIMED_BY_THE_BEAST */;
				break;
			case joaat("TAT_H27_000"):
				*uParam0 = Global_262145.f_23854 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_THOR_AND_GOBLIN */;
				break;
			case joaat("TAT_H27_001"):
				*uParam0 = Global_262145.f_23855 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_VIKING_WARRIOR */;
				break;
			case joaat("TAT_H27_002"):
				*uParam0 = Global_262145.f_23856 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_KABUTO */;
				break;
			case joaat("TAT_H27_003"):
				*uParam0 = Global_262145.f_23857 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_NATIVE_WARRIOR */;
				break;
			case joaat("TAT_H27_004"):
				*uParam0 = Global_262145.f_23858 /* Tunable: 1999557167 */;
				break;
			case joaat("TAT_H27_005"):
				*uParam0 = Global_262145.f_23859 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_GHOST_DRAGON */;
				break;
			case joaat("TAT_H27_006"):
				*uParam0 = Global_262145.f_23860 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_MEDUSA */;
				break;
			case joaat("TAT_H27_007"):
				*uParam0 = Global_262145.f_23861 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_COMBAT */;
				break;
			case joaat("TAT_H27_008"):
				*uParam0 = Global_262145.f_23862 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_WARRIOR */;
				break;
			case joaat("TAT_H27_009"):
				*uParam0 = Global_262145.f_23863 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_NORSE_RUNE */;
				break;
			case joaat("TAT_H27_010"):
				*uParam0 = Global_262145.f_23864 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_SHIELD */;
				break;
			case joaat("TAT_H27_011"):
				*uParam0 = Global_262145.f_23865 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_WEATHERED_SKULL */;
				break;
			case joaat("TAT_H27_012"):
				*uParam0 = Global_262145.f_23866 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_TIGER_HEADDRESS */;
				break;
			case joaat("TAT_H27_013"):
				*uParam0 = Global_262145.f_23867 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_KATANA */;
				break;
			case joaat("TAT_H27_014"):
				*uParam0 = Global_262145.f_23868 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_CELTIC_BAND */;
				break;
			case joaat("TAT_H27_015"):
				*uParam0 = Global_262145.f_23869 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SAMURAI_COMBAT */;
				break;
			case joaat("TAT_H27_016"):
				*uParam0 = Global_262145.f_23870 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_ODIN_AND_RAVEN */;
				break;
			case joaat("TAT_H27_017"):
				*uParam0 = Global_262145.f_23871 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_FEATHER_SLEEVE */;
				break;
			case joaat("TAT_H27_018"):
				*uParam0 = Global_262145.f_23872 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_MUSCLE_TEAR */;
				break;
			case joaat("TAT_H27_019"):
				*uParam0 = Global_262145.f_23873 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_STRIKE_FORCE */;
				break;
			case joaat("TAT_H27_020"):
				*uParam0 = Global_262145.f_23874 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_MEDUSAS_GAZE */;
				break;
			case joaat("TAT_H27_021"):
				*uParam0 = Global_262145.f_23875 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_AND_LION */;
				break;
			case joaat("TAT_H27_022"):
				*uParam0 = Global_262145.f_23876 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_AND_HORSE */;
				break;
			case joaat("TAT_H27_023"):
				*uParam0 = Global_262145.f_23877 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SAMURAI_TALLSHIP */;
				break;
			case joaat("TAT_H27_024"):
				*uParam0 = Global_262145.f_23878 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_DRAGON_SLAYER */;
				break;
			case joaat("TAT_H27_025"):
				*uParam0 = Global_262145.f_23879 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_WINGED_SERPENT */;
				break;
			case joaat("TAT_H27_026"):
				*uParam0 = Global_262145.f_23880 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_SKULL */;
				break;
			case joaat("TAT_H27_027"):
				*uParam0 = Global_262145.f_23881 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_MOLON_LABE */;
				break;
			case joaat("TAT_H27_028"):
				*uParam0 = Global_262145.f_23882 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_MURAL */;
				break;
			case joaat("TAT_H27_029"):
				*uParam0 = Global_262145.f_23883 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_CERBERUS */;
				break;
			case joaat("TAT_VW_000"):
				*uParam0 = Global_262145.f_27847 /* Tunable: VC_TATTOO_IN_THE_POCKET */;
				break;
			case joaat("TAT_VW_001"):
				*uParam0 = Global_262145.f_27848 /* Tunable: VC_TATTOO_JACKPOT */;
				break;
			case joaat("TAT_VW_002"):
				*uParam0 = Global_262145.f_27849 /* Tunable: VC_TATTOO_SUITS */;
				break;
			case joaat("TAT_VW_003"):
				*uParam0 = Global_262145.f_27850 /* Tunable: VC_TATTOO_ROYAL_FLUSH */;
				break;
			case joaat("TAT_VW_004"):
				*uParam0 = Global_262145.f_27851 /* Tunable: VC_TATTOO_LADY_LUCK */;
				break;
			case joaat("TAT_VW_005"):
				*uParam0 = Global_262145.f_27852 /* Tunable: VC_TATTOO_GET_LUCKY */;
				break;
			case joaat("TAT_VW_006"):
				*uParam0 = Global_262145.f_27853 /* Tunable: VC_TATTOO_WHEEL_OF_SUITS */;
				break;
			case joaat("TAT_VW_007"):
				*uParam0 = Global_262145.f_27854 /* Tunable: VC_TATTOO_777 */;
				break;
			case joaat("TAT_VW_008"):
				*uParam0 = Global_262145.f_27855 /* Tunable: VC_TATTOO_SNAKE_EYES */;
				break;
			case joaat("TAT_VW_009"):
				*uParam0 = Global_262145.f_27856 /* Tunable: VC_TATTOO_TILL_DEATH_DO_US_PART */;
				break;
			case joaat("TAT_VW_010"):
				*uParam0 = Global_262145.f_27857 /* Tunable: VC_TATTOO_PHOTO_FINISH */;
				break;
			case joaat("TAT_VW_011"):
				*uParam0 = Global_262145.f_27858 /* Tunable: VC_TATTOO_LIFES_A_GAMBLE */;
				break;
			case joaat("TAT_VW_012"):
				*uParam0 = Global_262145.f_27859 /* Tunable: VC_TATTOO_SKULL_OF_SUITS */;
				break;
			case joaat("TAT_VW_013"):
				*uParam0 = Global_262145.f_27860 /* Tunable: VC_TATTOO_ONEARMED_BANDIT */;
				break;
			case joaat("TAT_VW_014"):
				*uParam0 = Global_262145.f_27861 /* Tunable: VC_TATTOO_GAMBLERS_RUIN */;
				break;
			case joaat("TAT_VW_015"):
				*uParam0 = Global_262145.f_27862 /* Tunable: VC_TATTOO_THE_JOLLY_JOKER */;
				break;
			case joaat("TAT_VW_016"):
				*uParam0 = Global_262145.f_27863 /* Tunable: VC_TATTOO_ROSE_ACES */;
				break;
			case joaat("TAT_VW_017"):
				*uParam0 = Global_262145.f_27864 /* Tunable: VC_TATTOO_ROLL_THE_DICE */;
				break;
			case joaat("TAT_VW_018"):
				*uParam0 = Global_262145.f_27865 /* Tunable: VC_TATTOO_THE_GAMBLERS_LIFE */;
				break;
			case joaat("TAT_VW_019"):
				*uParam0 = Global_262145.f_27866 /* Tunable: VC_TATTOO_CANT_WIN_THEM_ALL */;
				break;
			case joaat("TAT_VW_020"):
				*uParam0 = Global_262145.f_27867 /* Tunable: VC_TATTOO_CASH_IS_KING */;
				break;
			case joaat("TAT_VW_021"):
				*uParam0 = Global_262145.f_27868 /* Tunable: VC_TATTOO_SHOW_YOUR_HAND */;
				break;
			case joaat("TAT_VW_022"):
				*uParam0 = Global_262145.f_27869 /* Tunable: VC_TATTOO_BLOOD_MONEY */;
				break;
			case joaat("TAT_VW_023"):
				*uParam0 = Global_262145.f_27870 /* Tunable: VC_TATTOO_LUCKY_7S */;
				break;
			case joaat("TAT_VW_024"):
				*uParam0 = Global_262145.f_27871 /* Tunable: VC_TATTOO_CASH_MOUTH */;
				break;
			case joaat("TAT_VW_025"):
				*uParam0 = Global_262145.f_27872 /* Tunable: VC_TATTOO_QUEEN_OF_ROSES */;
				break;
			case joaat("TAT_VW_026"):
				*uParam0 = Global_262145.f_27873 /* Tunable: VC_TATTOO_BANKNOTE_ROSE */;
				break;
			case joaat("TAT_VW_027"):
				*uParam0 = Global_262145.f_27874 /* Tunable: VC_TATTOO_8BALL_ROSE */;
				break;
			case joaat("TAT_VW_028"):
				*uParam0 = Global_262145.f_27875 /* Tunable: VC_TATTOO_SKULL_ACES */;
				break;
			case joaat("TAT_VW_029"):
				*uParam0 = Global_262145.f_27876 /* Tunable: VC_TATTOO_THE_TABLE */;
				break;
			case joaat("TAT_VW_030"):
				*uParam0 = Global_262145.f_27877 /* Tunable: VC_TATTOO_THE_ROYALS */;
				break;
			case joaat("TAT_VW_031"):
				*uParam0 = Global_262145.f_27878 /* Tunable: VC_TATTOO_GAMBLING_ROYALTY */;
				break;
			case joaat("TAT_VW_032"):
				*uParam0 = Global_262145.f_27879 /* Tunable: VC_TATTOO_PLAY_YOUR_ACE */;
				break;
		}
		switch (iVar0)
		{
			case joaat("TAT_H3_000"):
				*uParam0 = Global_262145.f_28902 /* Tunable: CH_TATTOO_FIVE_STARS */;
				break;
			case joaat("TAT_H3_001"):
				*uParam0 = Global_262145.f_28903 /* Tunable: CH_TATTOO_ACE_OF_SPADES */;
				break;
			case joaat("TAT_H3_002"):
				*uParam0 = Global_262145.f_28904 /* Tunable: CH_TATTOO_ANIMAL */;
				break;
			case joaat("TAT_H3_003"):
				*uParam0 = Global_262145.f_28905 /* Tunable: CH_TATTOO_ASSAULT_RIFLE */;
				break;
			case joaat("TAT_H3_004"):
				*uParam0 = Global_262145.f_28906 /* Tunable: CH_TATTOO_BAND_AID */;
				break;
			case joaat("TAT_H3_005"):
				*uParam0 = Global_262145.f_28907 /* Tunable: CH_TATTOO_SPADES */;
				break;
			case joaat("TAT_H3_006"):
				*uParam0 = Global_262145.f_28908 /* Tunable: CH_TATTOO_CROWNED */;
				break;
			case joaat("TAT_H3_007"):
				*uParam0 = Global_262145.f_28909 /* Tunable: CH_TATTOO_TWO_HORNS */;
				break;
			case joaat("TAT_H3_008"):
				*uParam0 = Global_262145.f_28910 /* Tunable: CH_TATTOO_ICE_CREAM */;
				break;
			case joaat("TAT_H3_009"):
				*uParam0 = Global_262145.f_28911 /* Tunable: CH_TATTOO_KNIFED */;
				break;
			case joaat("TAT_H3_010"):
				*uParam0 = Global_262145.f_28912 /* Tunable: CH_TATTOO_GREEN_LEAF */;
				break;
			case joaat("TAT_H3_011"):
				*uParam0 = Global_262145.f_28913 /* Tunable: CH_TATTOO_LIPSTICK_KISS */;
				break;
			case joaat("TAT_H3_012"):
				*uParam0 = Global_262145.f_28914 /* Tunable: CH_TATTOO_RAZOR_POP */;
				break;
			case joaat("TAT_H3_013"):
				*uParam0 = Global_262145.f_28915 /* Tunable: CH_TATTOO_LS_STAR */;
				break;
			case joaat("TAT_H3_014"):
				*uParam0 = Global_262145.f_28916 /* Tunable: CH_TATTOO_LS_WINGS */;
				break;
			case joaat("TAT_H3_015"):
				*uParam0 = Global_262145.f_28917 /* Tunable: CH_TATTOO_ON_OFF */;
				break;
			case joaat("TAT_H3_016"):
				*uParam0 = Global_262145.f_28918 /* Tunable: CH_TATTOO_SLEEPY */;
				break;
			case joaat("TAT_H3_017"):
				*uParam0 = Global_262145.f_28919 /* Tunable: CH_TATTOO_SPACE_MONKEY */;
				break;
			case joaat("TAT_H3_018"):
				*uParam0 = Global_262145.f_28920 /* Tunable: CH_TATTOO_STITCHES */;
				break;
			case joaat("TAT_H3_019"):
				*uParam0 = Global_262145.f_28921 /* Tunable: CH_TATTOO_TEDDY_BEAR */;
				break;
			case joaat("TAT_H3_020"):
				*uParam0 = Global_262145.f_28922 /* Tunable: CH_TATTOO_UFO */;
				break;
			case joaat("TAT_H3_021"):
				*uParam0 = Global_262145.f_28923 /* Tunable: CH_TATTOO_WANTED */;
				break;
			case joaat("TAT_H3_022"):
				*uParam0 = Global_262145.f_28924 /* Tunable: CH_TATTOO_THOGS_SWORD */;
				break;
			case joaat("TAT_H3_023"):
				*uParam0 = Global_262145.f_28925 /* Tunable: CH_TATTOO_BIGFOOT */;
				break;
			case joaat("TAT_H3_024"):
				*uParam0 = Global_262145.f_28926 /* Tunable: CH_TATTOO_MOUNT_CHILIAD */;
				break;
			case joaat("TAT_H3_025"):
				*uParam0 = Global_262145.f_28927 /* Tunable: CH_TATTOO_DAVIS */;
				break;
			case joaat("TAT_H3_026"):
				*uParam0 = Global_262145.f_28928 /* Tunable: CH_TATTOO_DIGNITY */;
				break;
			case joaat("TAT_H3_027"):
				*uParam0 = Global_262145.f_28929 /* Tunable: CH_TATTOO_EPSILON */;
				break;
			case joaat("TAT_H3_028"):
				*uParam0 = Global_262145.f_28930 /* Tunable: CH_TATTOO_BANANAS_GONE_BAD */;
				break;
			case joaat("TAT_H3_029"):
				*uParam0 = Global_262145.f_28931 /* Tunable: CH_TATTOO_FATAL_INCURSION */;
				break;
			case joaat("TAT_H3_030"):
				*uParam0 = Global_262145.f_28932 /* Tunable: CH_TATTOO_HOWITZER */;
				break;
			case joaat("TAT_H3_031"):
				*uParam0 = Global_262145.f_28933 /* Tunable: CH_TATTOO_KIFFLOM */;
				break;
			case joaat("TAT_H3_032"):
				*uParam0 = Global_262145.f_28934 /* Tunable: CH_TATTOO_LOVE_FIST */;
				break;
			case joaat("TAT_H3_033"):
				*uParam0 = Global_262145.f_28935 /* Tunable: CH_TATTOO_LS_CITY */;
				break;
			case joaat("TAT_H3_034"):
				*uParam0 = Global_262145.f_28936 /* Tunable: CH_TATTOO_LS_MONOGRAM */;
				break;
			case joaat("TAT_H3_035"):
				*uParam0 = Global_262145.f_28937 /* Tunable: CH_TATTOO_LS_PANIC */;
				break;
			case joaat("TAT_H3_036"):
				*uParam0 = Global_262145.f_28938 /* Tunable: CH_TATTOO_LS_SHIELD */;
				break;
			case joaat("TAT_H3_037"):
				*uParam0 = Global_262145.f_28939 /* Tunable: CH_TATTOO_LADYBUG */;
				break;
			case joaat("TAT_H3_038"):
				*uParam0 = Global_262145.f_28940 /* Tunable: CH_TATTOO_ROBOT_BUBBLEGUM */;
				break;
			case joaat("TAT_H3_039"):
				*uParam0 = Global_262145.f_28941 /* Tunable: CH_TATTOO_SPACE_RANGERS */;
				break;
			case joaat("TAT_H3_040"):
				*uParam0 = Global_262145.f_28942 /* Tunable: CH_TATTOO_TIGER_HEART */;
				break;
			case joaat("TAT_H3_041"):
				*uParam0 = Global_262145.f_28943 /* Tunable: CH_TATTOO_MIGHTY_THOG */;
				break;
			case joaat("TAT_H3_042"):
				*uParam0 = Global_262145.f_28944 /* Tunable: CH_TATTOO_HEARTS */;
				break;
			case joaat("TAT_H3_043"):
				*uParam0 = Global_262145.f_28945 /* Tunable: CH_TATTOO_CLUBS */;
				break;
			case joaat("TAT_H3_044"):
				*uParam0 = Global_262145.f_28946 /* Tunable: CH_TATTOO_DIAMONDS */;
				break;
		}
		switch (iVar0)
		{
			case joaat("TAT_H4_000"):
				*uParam0 = Global_262145.f_30748 /* Tunable: IH_TATTOO_HEADPHONE_SPLAT */;
				break;
			case joaat("TAT_H4_001"):
				*uParam0 = Global_262145.f_30749 /* Tunable: IH_TATTOO_TROPICAL_DUDE */;
				break;
			case joaat("TAT_H4_002"):
				*uParam0 = Global_262145.f_30750 /* Tunable: IH_TATTOO_JELLYFISH_SHADES */;
				break;
			case joaat("TAT_H4_003"):
				*uParam0 = Global_262145.f_30751 /* Tunable: IH_TATTOO_LIGHTHOUSE */;
				break;
			case joaat("TAT_H4_004"):
				*uParam0 = Global_262145.f_30752 /* Tunable: IH_TATTOO_SKELETON_BREEZE */;
				break;
			case joaat("TAT_H4_005"):
				*uParam0 = Global_262145.f_30753 /* Tunable: IH_TATTOO_LSUR */;
				break;
			case joaat("TAT_H4_006"):
				*uParam0 = Global_262145.f_30754 /* Tunable: IH_TATTOO_MUSIC_LOCKER */;
				break;
			case joaat("TAT_H4_007"):
				*uParam0 = Global_262145.f_30755 /* Tunable: IH_TATTOO_SKELETON_DJ */;
				break;
			case joaat("TAT_H4_008"):
				*uParam0 = Global_262145.f_30756 /* Tunable: IH_TATTOO_SMILEY_GLITCH */;
				break;
			case joaat("TAT_H4_009"):
				*uParam0 = Global_262145.f_30757 /* Tunable: IH_TATTOO_SCRATCH_PANTHER */;
				break;
			case joaat("TAT_H4_010"):
				*uParam0 = Global_262145.f_30758 /* Tunable: IH_TATTOO_TROPICAL_SERPENT */;
				break;
			case joaat("TAT_H4_011"):
				*uParam0 = Global_262145.f_30759 /* Tunable: IH_TATTOO_SOULWAX */;
				break;
			case joaat("TAT_H4_012"):
				*uParam0 = Global_262145.f_30760 /* Tunable: IH_TATTOO_STILL_SLIPPIN */;
				break;
			case joaat("TAT_H4_013"):
				*uParam0 = Global_262145.f_30761 /* Tunable: IH_TATTOO_WILD_DANCERS */;
				break;
			case joaat("TAT_H4_014"):
				*uParam0 = Global_262145.f_30762 /* Tunable: IH_TATTOO_PARADISE_NAP */;
				break;
			case joaat("TAT_H4_015"):
				*uParam0 = Global_262145.f_30763 /* Tunable: IH_TATTOO_PARADISE_UKULELE */;
				break;
			case joaat("TAT_H4_016"):
				*uParam0 = Global_262145.f_30764 /* Tunable: IH_TATTOO_ROSE_PANTHER */;
				break;
			case joaat("TAT_H4_017"):
				*uParam0 = Global_262145.f_30765 /* Tunable: IH_TATTOO_TROPICAL_SORCERER */;
				break;
			case joaat("TAT_H4_018"):
				*uParam0 = Global_262145.f_30766 /* Tunable: IH_TATTOO_RECORD_HEAD */;
				break;
			case joaat("TAT_H4_019"):
				*uParam0 = Global_262145.f_30767 /* Tunable: IH_TATTOO_RECORD_SHOT */;
				break;
			case joaat("TAT_H4_020"):
				*uParam0 = Global_262145.f_30768 /* Tunable: IH_TATTOO_SPEAKER_TOWER */;
				break;
			case joaat("TAT_H4_021"):
				*uParam0 = Global_262145.f_30769 /* Tunable: IH_TATTOO_SKULL_SURFER */;
				break;
			case joaat("TAT_H4_022"):
				*uParam0 = Global_262145.f_30770 /* Tunable: IH_TATTOO_PARADISE_SIRENS */;
				break;
			case joaat("TAT_H4_023"):
				*uParam0 = Global_262145.f_30771 /* Tunable: IH_TATTOO_TECHNO_GLITCH */;
				break;
			case joaat("TAT_H4_024"):
				*uParam0 = Global_262145.f_30772 /* Tunable: IH_TATTOO_PINEAPPLE_SKULL */;
				break;
			case joaat("TAT_H4_025"):
				*uParam0 = Global_262145.f_30773 /* Tunable: IH_TATTOO_GLOW_PRINCESS */;
				break;
			case joaat("TAT_H4_026"):
				*uParam0 = Global_262145.f_30774 /* Tunable: IH_TATTOO_SHARK_WATER */;
				break;
			case joaat("TAT_H4_027"):
				*uParam0 = Global_262145.f_30775 /* Tunable: IH_TATTOO_SKULLPHONES */;
				break;
			case joaat("TAT_H4_028"):
				*uParam0 = Global_262145.f_30776 /* Tunable: IH_TATTOO_SKULL_WATERS */;
				break;
			case joaat("TAT_H4_029"):
				*uParam0 = Global_262145.f_30777 /* Tunable: IH_TATTOO_SOUNDWAVES */;
				break;
			case joaat("TAT_H4_030"):
				*uParam0 = Global_262145.f_30778 /* Tunable: IH_TATTOO_RADIO_TAPE */;
				break;
			case joaat("TAT_H4_031"):
				*uParam0 = Global_262145.f_30779 /* Tunable: IH_TATTOO_OCTOPUS_SHADES */;
				break;
			case joaat("TAT_H4_032"):
				*uParam0 = Global_262145.f_30780 /* Tunable: IH_TATTOO_KULT_991_FM */;
				break;
		}
		switch (iVar0)
		{
			case joaat("TAT_FX_000"):
				*uParam0 = Global_262145.f_31998 /* Tunable: FIXER_TATTOO_HOOD_SKELETON */;
				break;
			case joaat("TAT_FX_001"):
				*uParam0 = Global_262145.f_31999 /* Tunable: FIXER_TATTOO_BRIGHT_DIAMOND */;
				break;
			case joaat("TAT_FX_002"):
				*uParam0 = Global_262145.f_32000 /* Tunable: FIXER_TATTOO_HUSTLE */;
				break;
			case joaat("TAT_FX_003"):
				*uParam0 = Global_262145.f_32001 /* Tunable: FIXER_TATTOO_BANDANA_KNIFE */;
				break;
			case joaat("TAT_FX_004"):
				*uParam0 = Global_262145.f_32002 /* Tunable: FIXER_TATTOO_HOOD_HEART */;
				break;
			case joaat("TAT_FX_005"):
				*uParam0 = Global_262145.f_32003 /* Tunable: FIXER_TATTOO_PEACOCK */;
				break;
			case joaat("TAT_FX_006"):
				*uParam0 = Global_262145.f_32004 /* Tunable: FIXER_TATTOO_SKELETON_SHOT */;
				break;
			case joaat("TAT_FX_007"):
				*uParam0 = Global_262145.f_32005 /* Tunable: FIXER_TATTOO_BALLAS_4_LIFE */;
				break;
			case joaat("TAT_FX_008"):
				*uParam0 = Global_262145.f_32006 /* Tunable: FIXER_TATTOO_LOS_SANTOS_TAG */;
				break;
			case joaat("TAT_FX_009"):
				*uParam0 = Global_262145.f_32007 /* Tunable: FIXER_TATTOO_ASCENSION */;
				break;
			case joaat("TAT_FX_010"):
				*uParam0 = Global_262145.f_32008 /* Tunable: FIXER_TATTOO_MUSIC_IS_THE_REMEDY */;
				break;
			case joaat("TAT_FX_011"):
				*uParam0 = Global_262145.f_32009 /* Tunable: FIXER_TATTOO_SERPENT_MIC */;
				break;
			case joaat("TAT_FX_012"):
				*uParam0 = Global_262145.f_32010 /* Tunable: FIXER_TATTOO_ZOMBIE_RHYMES */;
				break;
			case joaat("TAT_FX_013"):
				*uParam0 = Global_262145.f_32011 /* Tunable: FIXER_TATTOO_BLESSED_BOOMBOX */;
				break;
			case joaat("TAT_FX_014"):
				*uParam0 = Global_262145.f_32012 /* Tunable: FIXER_TATTOO_CHAMBERLAIN_HILLS */;
				break;
			case joaat("TAT_FX_015"):
				*uParam0 = Global_262145.f_32013 /* Tunable: FIXER_TATTOO_SMOKING_BARRELS */;
				break;
			case joaat("TAT_FX_016"):
				*uParam0 = Global_262145.f_32014 /* Tunable: FIXER_TATTOO_ALL_FROM_THE_SAME_TREE */;
				break;
			case joaat("TAT_FX_017"):
				*uParam0 = Global_262145.f_32015 /* Tunable: FIXER_TATTOO_KING_OF_THE_JUNGLE */;
				break;
			case joaat("TAT_FX_018"):
				*uParam0 = Global_262145.f_32016 /* Tunable: FIXER_TATTOO_NIGHT_OWL */;
				break;
			case joaat("TAT_FX_019"):
				*uParam0 = Global_262145.f_32017 /* Tunable: FIXER_TATTOO_WEED_KNUCKLES */;
				break;
			case joaat("TAT_FX_020"):
				*uParam0 = Global_262145.f_32018 /* Tunable: FIXER_TATTOO_DOG_FIST */;
				break;
			case joaat("TAT_FX_021"):
				*uParam0 = Global_262145.f_32019 /* Tunable: FIXER_TATTOO_GRAFFITI_SKULL */;
				break;
			case joaat("TAT_FX_022"):
				*uParam0 = Global_262145.f_32020 /* Tunable: FIXER_TATTOO_LS_SMOKING_CARTRIDGES */;
				break;
			case joaat("TAT_FX_023"):
				*uParam0 = Global_262145.f_32021 /* Tunable: FIXER_TATTOO_TRUST */;
				break;
			case joaat("TAT_FX_024"):
				*uParam0 = Global_262145.f_32022 /* Tunable: FIXER_TATTOO_BEATBOX_SILHOUETTE */;
				break;
			case joaat("TAT_FX_025"):
				*uParam0 = Global_262145.f_32023 /* Tunable: FIXER_TATTOO_DAVIS_FLAMES */;
				break;
			case joaat("TAT_FX_026"):
				*uParam0 = Global_262145.f_32024 /* Tunable: FIXER_TATTOO_DOLLAR_GUNS_CROSSED */;
				break;
			case joaat("TAT_FX_027"):
				*uParam0 = Global_262145.f_32025 /* Tunable: FIXER_TATTOO_BLACK_WIDOW */;
				break;
		}
		switch (iVar0)
		{
			case joaat("TAT_SB_000"):
				*uParam0 = Global_262145.f_33047 /* Tunable: SU22_TATTOO_LIVE_FAST_MONO */;
				break;
			case joaat("TAT_SB_001"):
				*uParam0 = Global_262145.f_33048 /* Tunable: SU22_TATTOO_LIVE_FAST_COLOR */;
				break;
			case joaat("TAT_SB_002"):
				*uParam0 = Global_262145.f_33049 /* Tunable: SU22_TATTOO_COBRA_BIKER */;
				break;
			case joaat("TAT_SB_003"):
				*uParam0 = Global_262145.f_33050 /* Tunable: SU22_TATTOO_BULLET_MOUTH */;
				break;
			case joaat("TAT_SB_004"):
				*uParam0 = Global_262145.f_33051 /* Tunable: SU22_TATTOO_SMOKING_BARREL */;
				break;
			case joaat("TAT_SB_005"):
				*uParam0 = Global_262145.f_33052 /* Tunable: SU22_TATTOO_CONCEALED */;
				break;
			case joaat("TAT_SB_006"):
				*uParam0 = Global_262145.f_33053 /* Tunable: SU22_TATTOO_PAINTED_MICRO_SMG */;
				break;
			case joaat("TAT_SB_007"):
				*uParam0 = Global_262145.f_33054 /* Tunable: SU22_TATTOO_WEAPON_KING */;
				break;
			case joaat("TAT_SB_008"):
				*uParam0 = Global_262145.f_33055 /* Tunable: SU22_TATTOO_BIGNESS_CHIMP */;
				break;
			case joaat("TAT_SB_009"):
				*uParam0 = Global_262145.f_33056 /* Tunable: SU22_TATTOO_UPNATOMIZER_DESIGN */;
				break;
			case joaat("TAT_SB_010"):
				*uParam0 = Global_262145.f_33057 /* Tunable: SU22_TATTOO_ROCKET_LAUNCHER_GIRL */;
				break;
			case joaat("TAT_SB_011"):
				*uParam0 = Global_262145.f_33058 /* Tunable: SU22_TATTOO_MINIGUN_GUY */;
				break;
			case joaat("TAT_SB_012"):
				*uParam0 = Global_262145.f_33059 /* Tunable: SU22_TATTOO_SNAKE_REVOLVER */;
				break;
			case joaat("TAT_SB_013"):
				*uParam0 = Global_262145.f_33060 /* Tunable: SU22_TATTOO_WEAPON_SLEEVE */;
				break;
			case joaat("TAT_SB_014"):
				*uParam0 = Global_262145.f_33061 /* Tunable: SU22_TATTOO_MINIMAL_SMG */;
				break;
			case joaat("TAT_SB_015"):
				*uParam0 = Global_262145.f_33062 /* Tunable: SU22_TATTOO_MINIMAL_ADVANCED_RIFLE */;
				break;
			case joaat("TAT_SB_016"):
				*uParam0 = Global_262145.f_33063 /* Tunable: SU22_TATTOO_MINIMAL_SNIPER_RIFLE */;
				break;
			case joaat("TAT_SB_017"):
				*uParam0 = Global_262145.f_33064 /* Tunable: SU22_TATTOO_SKULL_GRENADE */;
				break;
			case joaat("TAT_SB_018"):
				*uParam0 = Global_262145.f_33065 /* Tunable: SU22_TATTOO_BRANCHED_SKULL */;
				break;
			case joaat("TAT_SB_019"):
				*uParam0 = Global_262145.f_33066 /* Tunable: SU22_TATTOO_SCYTHED_CORPSE */;
				break;
			case joaat("TAT_SB_020"):
				*uParam0 = Global_262145.f_33067 /* Tunable: SU22_TATTOO_SCYTHED_CORPSE_REAPER */;
				break;
			case joaat("TAT_SB_021"):
				*uParam0 = Global_262145.f_33068 /* Tunable: SU22_TATTOO_THIRD_EYE */;
				break;
			case joaat("TAT_SB_022"):
				*uParam0 = Global_262145.f_33069 /* Tunable: SU22_TATTOO_PIERCED_THIRD_EYE */;
				break;
			case joaat("TAT_SB_023"):
				*uParam0 = Global_262145.f_33070 /* Tunable: SU22_TATTOO_LIP_DRIP */;
				break;
			case joaat("TAT_SB_024"):
				*uParam0 = Global_262145.f_33071 /* Tunable: SU22_TATTOO_SKIN_MASK */;
				break;
			case joaat("TAT_SB_025"):
				*uParam0 = Global_262145.f_33072 /* Tunable: SU22_TATTOO_WEBBED_SCYTHE */;
				break;
			case joaat("TAT_SB_026"):
				*uParam0 = Global_262145.f_33073 /* Tunable: SU22_TATTOO_ONI_DEMON */;
				break;
			case joaat("TAT_SB_027"):
				*uParam0 = Global_262145.f_33074 /* Tunable: SU22_TATTOO_BAT_WINGS */;
				break;
			case joaat("TAT_SB_028"):
				*uParam0 = Global_262145.f_33075 /* Tunable: SU22_TATTOO_LASER_EYES_SKULL */;
				break;
			case joaat("TAT_SB_029"):
				*uParam0 = Global_262145.f_33076 /* Tunable: SU22_TATTOO_CLASSIC_VAMPIRE */;
				break;
			case joaat("TAT_SB_030"):
				*uParam0 = Global_262145.f_33077 /* Tunable: SU22_TATTOO_CENTIPEDE */;
				break;
			case joaat("TAT_SB_031"):
				*uParam0 = Global_262145.f_33078 /* Tunable: SU22_TATTOO_FLESHY_EYE */;
				break;
			case joaat("TAT_SB_032"):
				*uParam0 = Global_262145.f_33079 /* Tunable: SU22_TATTOO_MANYEYED_GOAT */;
				break;
			case joaat("TAT_SB_033"):
				*uParam0 = Global_262145.f_33080 /* Tunable: SU22_TATTOO_THREEEYED_DEMON */;
				break;
			case joaat("TAT_SB_034"):
				*uParam0 = Global_262145.f_33081 /* Tunable: SU22_TATTOO_SMOULDERING_REAPER */;
				break;
			case joaat("TAT_SB_035"):
				*uParam0 = Global_262145.f_33082 /* Tunable: SU22_TATTOO_SNIFF_SNIFF */;
				break;
			case joaat("TAT_SB_036"):
				*uParam0 = Global_262145.f_33083 /* Tunable: SU22_TATTOO_CHARM_PATTERN */;
				break;
			case joaat("TAT_SB_037"):
				*uParam0 = Global_262145.f_33084 /* Tunable: SU22_TATTOO_WITCH_SKULL */;
				break;
			case joaat("TAT_SB_038"):
				*uParam0 = Global_262145.f_33085 /* Tunable: SU22_TATTOO_PUMPKIN_BUG */;
				break;
			case joaat("TAT_SB_039"):
				*uParam0 = Global_262145.f_33086 /* Tunable: SU22_TATTOO_SINNER */;
				break;
			case joaat("TAT_SB_040"):
				*uParam0 = Global_262145.f_33087 /* Tunable: SU22_TATTOO_CARVED_PUMPKIN */;
				break;
			case joaat("TAT_SB_041"):
				*uParam0 = Global_262145.f_33088 /* Tunable: SU22_TATTOO_BRANCHED_WEREWOLF */;
				break;
			case joaat("TAT_SB_042"):
				*uParam0 = Global_262145.f_33089 /* Tunable: SU22_TATTOO_WINGED_SKULL */;
				break;
			case joaat("TAT_SB_043"):
				*uParam0 = Global_262145.f_33090 /* Tunable: SU22_TATTOO_CURSED_SAKI */;
				break;
			case joaat("TAT_SB_044"):
				*uParam0 = Global_262145.f_33091 /* Tunable: SU22_TATTOO_SMOULDERING_BAT_SKULL */;
				break;
			case joaat("TAT_SB_045"):
				*uParam0 = Global_262145.f_33092 /* Tunable: SU22_TATTOO_ARMORED_ARM */;
				break;
			case joaat("TAT_SB_046"):
				*uParam0 = Global_262145.f_33093 /* Tunable: SU22_TATTOO_DEMON_SMILE */;
				break;
			case joaat("TAT_SB_047"):
				*uParam0 = Global_262145.f_33094 /* Tunable: SU22_TATTOO_ANGEL_DEVIL */;
				break;
			case joaat("TAT_SB_048"):
				*uParam0 = Global_262145.f_33095 /* Tunable: SU22_TATTOO_DEATH_IS_CERTAIN */;
				break;
			case joaat("TAT_SB_049"):
				*uParam0 = Global_262145.f_33096 /* Tunable: SU22_TATTOO_DEMON_DRUMMER */;
				break;
			case joaat("TAT_SB_050"):
				*uParam0 = Global_262145.f_33097 /* Tunable: SU22_TATTOO_GOLD_GUN */;
				break;
			case joaat("TAT_SB_051"):
				*uParam0 = Global_262145.f_33098 /* Tunable: SU22_TATTOO_BLUE_SERPENT */;
				break;
			case joaat("TAT_SB_052"):
				*uParam0 = Global_262145.f_33099 /* Tunable: SU22_TATTOO_NIGHT_DEMON */;
				break;
			case joaat("TAT_SB_053"):
				*uParam0 = Global_262145.f_33100 /* Tunable: SU22_TATTOO_MOBSTER_SKULL */;
				break;
			case joaat("TAT_SB_054"):
				*uParam0 = Global_262145.f_33101 /* Tunable: SU22_TATTOO_WOUNDED_HEAD */;
				break;
			case joaat("TAT_SB_055"):
				*uParam0 = Global_262145.f_33102 /* Tunable: SU22_TATTOO_STABBED_SKULL */;
				break;
			case joaat("TAT_SB_056"):
				*uParam0 = Global_262145.f_33103 /* Tunable: SU22_TATTOO_TIGER_BLADE */;
				break;
			case joaat("TAT_SB_057"):
				*uParam0 = Global_262145.f_33104 /* Tunable: SU22_TATTOO_GRAY_DEMON */;
				break;
			case joaat("TAT_SB_058"):
				*uParam0 = Global_262145.f_33105 /* Tunable: SU22_TATTOO_SHRIEKING_DRAGON */;
				break;
			case joaat("TAT_SB_059"):
				*uParam0 = Global_262145.f_33106 /* Tunable: SU22_TATTOO_SWORDS_CITY */;
				break;
			case joaat("TAT_SB_060"):
				*uParam0 = Global_262145.f_33107 /* Tunable: SU22_TATTOO_BLAINE_COUNTY */;
				break;
			case joaat("TAT_SB_061"):
				*uParam0 = Global_262145.f_33108 /* Tunable: SU22_TATTOO_ANGRY_POSSUM */;
				break;
			case joaat("TAT_SB_062"):
				*uParam0 = Global_262145.f_33109 /* Tunable: SU22_TATTOO_FLORAL_DEMON */;
				break;
		}
		*uParam0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam0) * Global_262145.f_76 /* Tunable: TATTOO_SHOP_MULTIPLIER */));
	}
	iVar1 = func_361();
	*uParam0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam0) * (1f - (SYSTEM::TO_FLOAT(iVar1) / 100f))));
	if (func_343(Param1))
	{
		*uParam0 = 0;
	}
	if (__LIB_3__::func_538())
	{
		bVar2 = false;
		if (func_343(Param1))
		{
			bVar2 = true;
		}
		__LIB_4__::func_886(&sVar3, Param1, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1, 0, bVar2);
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar3))
		{
			*uParam0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar3), joaat("CATEGORY_TATTOO"), true);
		}
		else
		{
			*uParam0 = -1;
		}
	}
}

int func_561(int iParam0, struct<4> Param1)//Position - 0x5B8F7
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	if (__LIB_3__::func_538())
	{
		bVar0 = false;
		if (func_343(Param1))
		{
			bVar0 = true;
		}
		__LIB_4__::func_886(&sVar1, Param1, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1, 0, bVar0);
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar1))
		{
			return NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar1), joaat("CATEGORY_TATTOO"), true);
		}
		else
		{
			return -1;
		}
	}
	if (func_343(Param1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = MISC::GET_HASH_KEY(&Param1);
		switch (iVar2)
		{
			case joaat("TAT_BB_000"):
				iParam0 = Global_262145.f_7555 /* Tunable: DLC_FEMALE_TATTOOS_LOS_SANTOS_WREATH */;
				break;
			case joaat("TAT_BB_001"):
				iParam0 = Global_262145.f_7556 /* Tunable: DLC_FEMALE_TATTOOS_HIBISCUS_FLOWER_DUO */;
				break;
			case joaat("TAT_BB_002"):
				iParam0 = Global_262145.f_7557 /* Tunable: DLC_FEMALE_TATTOOS_TRIBAL_FLOWER */;
				break;
			case joaat("TAT_BB_003"):
				iParam0 = Global_262145.f_7558 /* Tunable: DLC_FEMALE_TATTOOS_ROCK_SOLID */;
				break;
			case joaat("TAT_BB_004"):
				iParam0 = Global_262145.f_7559 /* Tunable: DLC_FEMALE_TATTOOS_CATFISH */;
				break;
			case joaat("TAT_BB_005"):
				iParam0 = Global_262145.f_7560 /* Tunable: DLC_FEMALE_TATTOOS_SHRIMP */;
				break;
			case joaat("TAT_BB_006"):
				iParam0 = Global_262145.f_7561 /* Tunable: DLC_FEMALE_TATTOOS_LOVE_DAGGER */;
				break;
			case joaat("TAT_BB_007"):
				iParam0 = Global_262145.f_7562 /* Tunable: DLC_FEMALE_TATTOOS_SCHOOL_OF_FISH */;
				break;
			case joaat("TAT_BB_008"):
				iParam0 = Global_262145.f_7563 /* Tunable: DLC_FEMALE_TATTOOS_TRIBAL_BUTTERFLY */;
				break;
			case joaat("TAT_BB_009"):
				iParam0 = Global_262145.f_7564 /* Tunable: DLC_FEMALE_TATTOOS_HIBISCUS_FLOWER */;
				break;
			case joaat("TAT_BB_010"):
				iParam0 = Global_262145.f_7565 /* Tunable: DLC_FEMALE_TATTOOS_DOLPHIN */;
				break;
			case joaat("TAT_BB_011"):
				iParam0 = Global_262145.f_7566 /* Tunable: DLC_FEMALE_TATTOOS_SEA_HORSES */;
				break;
			case joaat("TAT_BB_012"):
				iParam0 = Global_262145.f_7567 /* Tunable: DLC_FEMALE_TATTOOS_ANCHOR */;
				break;
			case joaat("TAT_BB_013"):
				iParam0 = Global_262145.f_7567 /* Tunable: DLC_FEMALE_TATTOOS_ANCHOR */;
				break;
			case joaat("TAT_BB_014"):
				iParam0 = Global_262145.f_7568 /* Tunable: DLC_FEMALE_TATTOOS_SWALLOW */;
				break;
			case joaat("TAT_BB_015"):
				iParam0 = Global_262145.f_7569 /* Tunable: DLC_FEMALE_TATTOOS_TRIBAL_FISH */;
				break;
			case joaat("TAT_BB_016"):
				iParam0 = Global_262145.f_7570 /* Tunable: DLC_FEMALE_TATTOOS_PARROT */;
				break;
			case joaat("TAT_BUS_F_002"):
				iParam0 = Global_262145.f_7571 /* Tunable: DLC_FEMALE_TATTOOS_HIGH_ROLLER */;
				break;
			case joaat("TAT_BUS_F_000"):
				iParam0 = Global_262145.f_7572 /* Tunable: DLC_FEMALE_TATTOOS_RESPECT */;
				break;
			case joaat("TAT_BUS_F_006"):
				iParam0 = Global_262145.f_7573 /* Tunable: DLC_FEMALE_TATTOOS_SINGLE */;
				break;
			case joaat("TAT_BUS_F_007"):
				iParam0 = Global_262145.f_7574 /* Tunable: DLC_FEMALE_TATTOOS_VALDEGRACE_LOGO */;
				break;
			case joaat("TAT_BUS_F_008"):
				iParam0 = Global_262145.f_7575 /* Tunable: DLC_FEMALE_TATTOOS_MONEY_ROSE */;
				break;
			case joaat("TAT_BUS_F_010"):
				iParam0 = Global_262145.f_7576 /* Tunable: DLC_FEMALE_TATTOOS_DIAMOND_CROWN */;
				break;
			case joaat("TAT_BUS_F_009"):
				iParam0 = Global_262145.f_7577 /* Tunable: DLC_FEMALE_TATTOOS_DOLLAR_SIGN */;
				break;
			case joaat("TAT_BUS_F_011"):
				iParam0 = Global_262145.f_7578 /* Tunable: DLC_FEMALE_TATTOOS_DIAMOND_JACK */;
				break;
			case joaat("TAT_BUS_F_003"):
				iParam0 = Global_262145.f_7579 /* Tunable: DLC_FEMALE_TATTOOS_MAKIN_MONEY */;
				break;
			case joaat("TAT_BUS_F_001"):
				iParam0 = Global_262145.f_7580 /* Tunable: DLC_FEMALE_TATTOOS_GOLD_DIGGER */;
				break;
			case joaat("TAT_BUS_F_005"):
				iParam0 = Global_262145.f_7581 /* Tunable: DLC_FEMALE_TATTOOS_GREED_IS_GOOD */;
				break;
			case joaat("TAT_BUS_F_004"):
				iParam0 = Global_262145.f_7582 /* Tunable: DLC_FEMALE_TATTOOS_LOVE_MONEY */;
				break;
			case joaat("TAT_BUS_F_012"):
				iParam0 = Global_262145.f_7583 /* Tunable: DLC_FEMALE_TATTOOS_SANTO_CAPRA_LOGO */;
				break;
			case joaat("TAT_BUS_F_013"):
				iParam0 = Global_262145.f_7584 /* Tunable: DLC_FEMALE_TATTOOS_MONEY_BAG */;
				break;
			case joaat("TAT_BUS_F_014"):
				iParam0 = Global_262145.f_7585 /* Tunable: DLC_FEMALE_TATTOOS_CREW_EMBLEM_CHEST */;
				break;
			case joaat("TAT_BUS_F_015"):
				iParam0 = Global_262145.f_7586 /* Tunable: DLC_FEMALE_TATTOOS_CREW_EMBLEM_ARM */;
				break;
			case joaat("TAT_BB_017"):
				iParam0 = Global_262145.f_7587 /* Tunable: DLC_MALE_TATTOO_MERMAID_LS */;
				break;
			case joaat("TAT_BB_018"):
				iParam0 = Global_262145.f_7588 /* Tunable: DLC_MALE_TATTOO_SHIP_ARMS */;
				break;
			case joaat("TAT_BB_019"):
				iParam0 = Global_262145.f_7589 /* Tunable: DLC_MALE_TATTOO_TRIBAL_HAMMERHEAD */;
				break;
			case joaat("TAT_BB_020"):
				iParam0 = Global_262145.f_7590 /* Tunable: DLC_MALE_TATTOO_TRIBAL_SHARK */;
				break;
			case joaat("TAT_BB_021"):
				iParam0 = Global_262145.f_7591 /* Tunable: DLC_MALE_TATTOO_PIRATE_SKULL */;
				break;
			case joaat("TAT_BB_022"):
				iParam0 = Global_262145.f_7592 /* Tunable: DLC_MALE_TATTOO_SURF_LS */;
				break;
			case joaat("TAT_BB_023"):
				iParam0 = Global_262145.f_7593 /* Tunable: DLC_MALE_TATTOO_SWORDFISH */;
				break;
			case joaat("TAT_BB_024"):
				iParam0 = Global_262145.f_7594 /* Tunable: DLC_MALE_TATTOO_TIKI_TOWER */;
				break;
			case joaat("TAT_BB_025"):
				iParam0 = Global_262145.f_7595 /* Tunable: DLC_MALE_TATTOO_TRIBAL_TIKI_TOWER */;
				break;
			case joaat("TAT_BB_026"):
				iParam0 = Global_262145.f_7596 /* Tunable: DLC_MALE_TATTOO_TRIBAL_SUN */;
				break;
			case joaat("TAT_BB_027"):
				iParam0 = Global_262145.f_7597 /* Tunable: DLC_MALE_TATTOO_TRIBAL_STAR */;
				break;
			case joaat("TAT_BB_028"):
				iParam0 = Global_262145.f_7598 /* Tunable: DLC_MALE_TATTOO_LITTLE_FISH */;
				break;
			case joaat("TAT_BB_029"):
				iParam0 = Global_262145.f_7599 /* Tunable: DLC_MALE_TATTOO_SURFS_UP */;
				break;
			case joaat("TAT_BB_030"):
				iParam0 = Global_262145.f_7600 /* Tunable: DLC_MALE_TATTOO_VESPUCCI_BEAUTY */;
				break;
			case joaat("TAT_BB_031"):
				iParam0 = Global_262145.f_7601 /* Tunable: DLC_MALE_TATTOO_SHARK */;
				break;
			case joaat("TAT_BB_032"):
				iParam0 = Global_262145.f_7602 /* Tunable: DLC_MALE_TATTOO_WHEEL */;
				break;
			case joaat("TAT_BUS_005"):
				iParam0 = Global_262145.f_7603 /* Tunable: DLC_MALE_TATTOO_CASH_KING */;
				break;
			case joaat("TAT_BUS_003"):
				iParam0 = Global_262145.f_7604 /* Tunable: DLC_MALE_TATTOO_100_BILL */;
				break;
			case joaat("TAT_BUS_011"):
				iParam0 = Global_262145.f_7605 /* Tunable: DLC_MALE_TATTOO_HUSTLER */;
				break;
			case joaat("TAT_BUS_000"):
				iParam0 = Global_262145.f_7606 /* Tunable: DLC_MALE_TATTOO_MAKIN_PAPER */;
				break;
			case joaat("TAT_BUS_006"):
				iParam0 = Global_262145.f_7607 /* Tunable: DLC_MALE_TATTOO_BOLD_DOLLAR_SIGN */;
				break;
			case joaat("TAT_BUS_007"):
				iParam0 = Global_262145.f_7608 /* Tunable: DLC_MALE_TATTOO_SCRIPT_DOLLAR_SIGN */;
				break;
			case joaat("TAT_BUS_008"):
				iParam0 = Global_262145.f_7609 /* Tunable: DLC_MALE_TATTOO_100 */;
				break;
			case joaat("TAT_BUS_009"):
				iParam0 = Global_262145.f_7610 /* Tunable: DLC_MALE_TATTOO_DOLLAR_SKULL */;
				break;
			case joaat("TAT_BUS_001"):
				iParam0 = Global_262145.f_7611 /* Tunable: DLC_MALE_TATTOO_RICH */;
				break;
			case joaat("TAT_BUS_002"):
				iParam0 = Global_262145.f_7612 /* Tunable: DLC_MALE_TATTOO_DOLLAR_SIGNS */;
				break;
			case joaat("TAT_BUS_004"):
				iParam0 = Global_262145.f_7613 /* Tunable: DLC_MALE_TATTOO_ALLSEEING_EYE */;
				break;
			case joaat("TAT_BUS_010"):
				iParam0 = Global_262145.f_7614 /* Tunable: DLC_MALE_TATTOO_GREEN */;
				break;
			case joaat("TAT_BUS_012"):
				iParam0 = Global_262145.f_7615 /* Tunable: DLC_MALE_TATTOO_CREW_EMBLEM_CHEST */;
				break;
			case joaat("TAT_BUS_013"):
				iParam0 = Global_262145.f_7616 /* Tunable: DLC_MALE_TATTOO_CREW_EMBLEM_ARM */;
				break;
			case joaat("TAT_HP_000"):
				iParam0 = Global_262145.f_8031[0];
				break;
			case joaat("TAT_HP_001"):
				iParam0 = Global_262145.f_8031[1];
				break;
			case joaat("TAT_HP_002"):
				iParam0 = Global_262145.f_8031[2];
				break;
			case joaat("TAT_HP_003"):
				iParam0 = Global_262145.f_8031[3];
				break;
			case joaat("TAT_HP_004"):
				iParam0 = Global_262145.f_8031[4];
				break;
			case joaat("TAT_HP_005"):
				iParam0 = Global_262145.f_8031[5];
				break;
			case joaat("TAT_HP_006"):
				iParam0 = Global_262145.f_8031[6];
				break;
			case joaat("TAT_HP_007"):
				iParam0 = Global_262145.f_8031[7];
				break;
			case joaat("TAT_HP_008"):
				iParam0 = Global_262145.f_8031[8];
				break;
			case joaat("TAT_HP_009"):
				iParam0 = Global_262145.f_8031[9];
				break;
			case joaat("TAT_HP_010"):
				iParam0 = Global_262145.f_8031[10];
				break;
			case joaat("TAT_HP_011"):
				iParam0 = Global_262145.f_8031[11];
				break;
			case joaat("TAT_HP_012"):
				iParam0 = Global_262145.f_8031[12];
				break;
			case joaat("TAT_HP_013"):
				iParam0 = Global_262145.f_8031[13];
				break;
			case joaat("TAT_HP_014"):
				iParam0 = Global_262145.f_8031[14];
				break;
			case joaat("TAT_HP_015"):
				iParam0 = Global_262145.f_8031[15];
				break;
			case joaat("TAT_HP_016"):
				iParam0 = Global_262145.f_8031[16];
				break;
			case joaat("TAT_HP_017"):
				iParam0 = Global_262145.f_8031[17];
				break;
			case joaat("TAT_HP_018"):
				iParam0 = Global_262145.f_8031[18];
				break;
			case joaat("TAT_HP_019"):
				iParam0 = Global_262145.f_8031[19];
				break;
			case joaat("TAT_HP_020"):
				iParam0 = Global_262145.f_8031[20];
				break;
			case joaat("TAT_HP_021"):
				iParam0 = Global_262145.f_8031[21];
				break;
			case joaat("TAT_HP_022"):
				iParam0 = Global_262145.f_8031[22];
				break;
			case joaat("TAT_HP_023"):
				iParam0 = Global_262145.f_8031[23];
				break;
			case joaat("TAT_HP_024"):
				iParam0 = Global_262145.f_8031[24];
				break;
			case joaat("TAT_HP_025"):
				iParam0 = Global_262145.f_8031[25];
				break;
			case joaat("TAT_HP_026"):
				iParam0 = Global_262145.f_8031[26];
				break;
			case joaat("TAT_HP_027"):
				iParam0 = Global_262145.f_8031[27];
				break;
			case joaat("TAT_HP_028"):
				iParam0 = Global_262145.f_8031[28];
				break;
			case joaat("TAT_HP_029"):
				iParam0 = Global_262145.f_8031[29];
				break;
			case joaat("TAT_HP_030"):
				iParam0 = Global_262145.f_8031[30];
				break;
			case joaat("TAT_HP_031"):
				iParam0 = Global_262145.f_8031[31];
				break;
			case joaat("TAT_HP_032"):
				iParam0 = Global_262145.f_8031[32];
				break;
			case joaat("TAT_HP_033"):
				iParam0 = Global_262145.f_8031[33];
				break;
			case joaat("TAT_HP_034"):
				iParam0 = Global_262145.f_8031[34];
				break;
			case joaat("TAT_HP_035"):
				iParam0 = Global_262145.f_8031[35];
				break;
			case joaat("TAT_HP_036"):
				iParam0 = Global_262145.f_8031[36];
				break;
			case joaat("TAT_HP_037"):
				iParam0 = Global_262145.f_8031[37];
				break;
			case joaat("TAT_HP_038"):
				iParam0 = Global_262145.f_8031[38];
				break;
			case joaat("TAT_HP_039"):
				iParam0 = Global_262145.f_8031[39];
				break;
			case joaat("TAT_HP_040"):
				iParam0 = Global_262145.f_8031[40];
				break;
			case joaat("TAT_HP_041"):
				iParam0 = Global_262145.f_8031[41];
				break;
			case joaat("TAT_HP_042"):
				iParam0 = Global_262145.f_8031[42];
				break;
			case joaat("TAT_HP_043"):
				iParam0 = Global_262145.f_8031[43];
				break;
			case joaat("TAT_HP_044"):
				iParam0 = Global_262145.f_8031[44];
				break;
			case joaat("TAT_HP_045"):
				iParam0 = Global_262145.f_8031[45];
				break;
			case joaat("TAT_HP_046"):
				iParam0 = Global_262145.f_8031[46];
				break;
			case joaat("TAT_HP_047"):
				iParam0 = Global_262145.f_8031[47];
				break;
			case joaat("TAT_HP_048"):
				iParam0 = Global_262145.f_8031[48];
				break;
			case joaat("TAT_LX_000"):
				iParam0 = Global_262145.f_11045 /* Tunable: LUXE1_BOTH_GENDERS_SERPENT_OF_DEATH */;
				break;
			case joaat("TAT_LX_001"):
				iParam0 = Global_262145.f_11046 /* Tunable: LUXE1_BOTH_GENDERS_ELABORATE_LOS_MUERTOS */;
				break;
			case joaat("TAT_LX_003"):
				iParam0 = Global_262145.f_11047 /* Tunable: LUXE1_BOTH_GENDERS_ABSTRACT_SKULL */;
				break;
			case joaat("TAT_LX_004"):
				iParam0 = Global_262145.f_11048 /* Tunable: LUXE1_BOTH_GENDERS_FLORAL_RAVEN */;
				break;
			case joaat("TAT_LX_006"):
				iParam0 = Global_262145.f_11049 /* Tunable: LUXE1_BOTH_GENDERS_ADORNED_WOLF */;
				break;
			case joaat("TAT_LX_007"):
				iParam0 = Global_262145.f_11050 /* Tunable: LUXE1_BOTH_GENDERS_EYE_OF_THE_GRIFFIN */;
				break;
			case joaat("TAT_LX_008"):
				iParam0 = Global_262145.f_11051 /* Tunable: LUXE1_BOTH_GENDERS_FLYING_EYE */;
				break;
			case joaat("TAT_LX_009"):
				iParam0 = Global_262145.f_11052 /* Tunable: LUXE1_BOTH_GENDERS_FLORAL_SYMMETRY */;
				break;
			case joaat("TAT_LX_013"):
				iParam0 = Global_262145.f_11053 /* Tunable: LUXE1_BOTH_GENDERS_MERMAID_HARPIST */;
				break;
			case joaat("TAT_LX_014"):
				iParam0 = Global_262145.f_11054 /* Tunable: LUXE1_BOTH_GENDERS_ANCIENT_QUEEN */;
				break;
			case joaat("TAT_LX_015"):
				iParam0 = Global_262145.f_11055 /* Tunable: LUXE1_BOTH_GENDERS_SMOKING_SISTERS */;
				break;
			case joaat("TAT_LX_019"):
				iParam0 = Global_262145.f_11056 /* Tunable: LUXE1_BOTH_GENDERS_GEISHA_BLOOM */;
				break;
			case joaat("TAT_LX_020"):
				iParam0 = Global_262145.f_11057 /* Tunable: LUXE1_BOTH_GENDERS_ARCHANGEL_AND_MARY */;
				break;
			case joaat("TAT_LX_021"):
				iParam0 = Global_262145.f_11058 /* Tunable: LUXE1_BOTH_GENDERS_GABRIEL_ */;
				break;
			case joaat("TAT_LX_024"):
				iParam0 = Global_262145.f_11059 /* Tunable: LUXE1_BOTH_GENDERS_FEATHER_MURAL */;
				break;
			case joaat("TAT_L2_002"):
				iParam0 = Global_262145.f_11374 /* Tunable: LUXE2_THE_HOWLER */;
				break;
			case joaat("TAT_L2_005"):
				iParam0 = Global_262145.f_11375 /* Tunable: LUXE2_FATAL_DAGGER */;
				break;
			case joaat("TAT_L2_010"):
				iParam0 = Global_262145.f_11376 /* Tunable: LUXE2_INTROMETRIC */;
				break;
			case joaat("TAT_L2_011"):
				iParam0 = Global_262145.f_11377 /* Tunable: LUXE2_CROSS_OF_ROSES */;
				break;
			case joaat("TAT_L2_012"):
				iParam0 = Global_262145.f_11378 /* Tunable: LUXE2_GEOMETRIC_GALAXY */;
				break;
			case joaat("TAT_L2_016"):
				iParam0 = Global_262145.f_11379 /* Tunable: LUXE2_EGYPTIAN_MURAL */;
				break;
			case joaat("TAT_L2_017"):
				iParam0 = Global_262145.f_11380 /* Tunable: LUXE2_HEAVENLY_DEITY */;
				break;
			case joaat("TAT_L2_018"):
				iParam0 = Global_262145.f_11381 /* Tunable: LUXE2_DIVINE_GODDESS */;
				break;
			case joaat("TAT_L2_022"):
				iParam0 = Global_262145.f_11382 /* Tunable: LUXE2_CLOAKED_ANGEL */;
				break;
			case joaat("TAT_L2_023"):
				iParam0 = Global_262145.f_11383 /* Tunable: LUXE2_STARMETRIC */;
				break;
			case joaat("TAT_L2_025"):
				iParam0 = Global_262145.f_11384 /* Tunable: LUXE2_REAPER_SWAY */;
				break;
			case joaat("TAT_L2_026"):
				iParam0 = Global_262145.f_11385 /* Tunable: LUXE2_FLORAL_PRINT */;
				break;
			case joaat("TAT_L2_027"):
				iParam0 = Global_262145.f_11386 /* Tunable: LUXE2_COBRA_DAWN */;
				break;
			case joaat("TAT_L2_028"):
				iParam0 = Global_262145.f_11387 /* Tunable: LUXE2_PYTHON_SKULL */;
				break;
			case joaat("TAT_L2_029"):
				iParam0 = Global_262145.f_11388 /* Tunable: LUXE2_GEOMETRIC_DESIGN */;
				break;
			case joaat("TAT_L2_030"):
				iParam0 = Global_262145.f_11388 /* Tunable: LUXE2_GEOMETRIC_DESIGN */;
				break;
			case joaat("TAT_L2_031"):
				iParam0 = Global_262145.f_11388 /* Tunable: LUXE2_GEOMETRIC_DESIGN */;
				break;
			case joaat("TAT_X2_000"):
				iParam0 = Global_262145.f_9418 /* Tunable: TATTOOS_XMAS14_SKULL_RIDER */;
				break;
			case joaat("TAT_X2_001"):
				iParam0 = Global_262145.f_9419 /* Tunable: TATTOOS_XMAS14_SPIDER_OUTLINE */;
				break;
			case joaat("TAT_X2_002"):
				iParam0 = Global_262145.f_9420 /* Tunable: TATTOOS_XMAS14_SPIDER_COLOR */;
				break;
			case joaat("TAT_X2_003"):
				iParam0 = Global_262145.f_9421 /* Tunable: TATTOOS_XMAS14_SNAKE_OUTLINE */;
				break;
			case joaat("TAT_X2_004"):
				iParam0 = Global_262145.f_9422 /* Tunable: TATTOOS_XMAS14_SNAKE_SHADED */;
				break;
			case joaat("TAT_X2_005"):
				iParam0 = Global_262145.f_9423 /* Tunable: TATTOOS_XMAS14_CARP_OUTLINE */;
				break;
			case joaat("TAT_X2_006"):
				iParam0 = Global_262145.f_9424 /* Tunable: TATTOOS_XMAS14_CARP_SHADED */;
				break;
			case joaat("TAT_X2_007"):
				iParam0 = Global_262145.f_9425 /* Tunable: TATTOOS_XMAS14_LOS_MUERTOS */;
				break;
			case joaat("TAT_X2_008"):
				iParam0 = Global_262145.f_9426 /* Tunable: TATTOOS_XMAS14_DEATH_BEFORE_DISHONOR */;
				break;
			case joaat("TAT_X2_009"):
				iParam0 = Global_262145.f_9427 /* Tunable: TATTOOS_XMAS14_TIME_TO_DIE */;
				break;
			case joaat("TAT_X2_010"):
				iParam0 = Global_262145.f_9428 /* Tunable: TATTOOS_XMAS14_ELECTRIC_SNAKE */;
				break;
			case joaat("TAT_X2_011"):
				iParam0 = Global_262145.f_9429 /* Tunable: TATTOOS_XMAS14_ROARING_TIGER */;
				break;
			case joaat("TAT_X2_012"):
				iParam0 = Global_262145.f_9430 /* Tunable: TATTOOS_XMAS14_8_BALL_SKULL */;
				break;
			case joaat("TAT_X2_013"):
				iParam0 = Global_262145.f_9431 /* Tunable: TATTOOS_XMAS14_LIZARD */;
				break;
			case joaat("TAT_X2_014"):
				iParam0 = Global_262145.f_9432 /* Tunable: TATTOOS_XMAS14_FLORAL_DAGGER */;
				break;
			case joaat("TAT_X2_015"):
				iParam0 = Global_262145.f_9433 /* Tunable: TATTOOS_XMAS14_JAPANESE_WARRIOR */;
				break;
			case joaat("TAT_X2_016"):
				iParam0 = Global_262145.f_9434 /* Tunable: TATTOOS_XMAS14_LOOSE_LIPS_OUTLINE */;
				break;
			case joaat("TAT_X2_017"):
				iParam0 = Global_262145.f_9435 /* Tunable: TATTOOS_XMAS14_LOOSE_LIPS_COLOR */;
				break;
			case joaat("TAT_X2_018"):
				iParam0 = Global_262145.f_9436 /* Tunable: TATTOOS_XMAS14_ROYAL_DAGGER_OUTLINE */;
				break;
			case joaat("TAT_X2_019"):
				iParam0 = Global_262145.f_9437 /* Tunable: TATTOOS_XMAS14_ROYAL_DAGGER_COLOR */;
				break;
			case joaat("TAT_X2_020"):
				iParam0 = Global_262145.f_9438 /* Tunable: TATTOOS_XMAS14_TIMES_UP_OUTLINE */;
				break;
			case joaat("TAT_X2_021"):
				iParam0 = Global_262145.f_9439 /* Tunable: TATTOOS_XMAS14_TIMES_UP_COLOR */;
				break;
			case joaat("TAT_X2_022"):
				iParam0 = Global_262145.f_9440 /* Tunable: TATTOOS_XMAS14_YOURE_NEXT_OUTLINE */;
				break;
			case joaat("TAT_X2_023"):
				iParam0 = Global_262145.f_9441 /* Tunable: TATTOOS_XMAS14_YOURE_NEXT_COLOR */;
				break;
			case joaat("TAT_X2_024"):
				iParam0 = Global_262145.f_9442 /* Tunable: TATTOOS_XMAS14_SNAKE_HEAD_OUTLINE */;
				break;
			case joaat("TAT_X2_025"):
				iParam0 = Global_262145.f_9443 /* Tunable: TATTOOS_XMAS14_SNAKE_HEAD_COLOR */;
				break;
			case joaat("TAT_X2_026"):
				iParam0 = Global_262145.f_9444 /* Tunable: TATTOOS_XMAS14_FUCK_LUCK_OUTLINE */;
				break;
			case joaat("TAT_X2_027"):
				iParam0 = Global_262145.f_9445 /* Tunable: TATTOOS_XMAS14_FUCK_LUCK_COLOR */;
				break;
			case joaat("TAT_X2_028"):
				iParam0 = Global_262145.f_9446 /* Tunable: TATTOOS_XMAS14_EXECUTIONER */;
				break;
			case joaat("TAT_X2_029"):
				iParam0 = Global_262145.f_9447 /* Tunable: TATTOOS_XMAS14_BEAUTIFUL_DEATH */;
				break;
		}
		switch (iVar2)
		{
			case joaat("TAT_S1_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12441 /* Tunable: BOTH_GENDERS_KING_FIGHT */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12442 /* Tunable: BOTH_GENDERS_HOLY_MARY */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12443 /* Tunable: BOTH_GENDERS_GUN_MIC */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12444 /* Tunable: BOTH_GENDERS_NO_EVIL */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12445 /* Tunable: BOTH_GENDERS_LS_SERPENT */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12446 /* Tunable: BOTH_GENDERS_AMAZON */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12447 /* Tunable: BOTH_GENDERS_BAD_ANGEL */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12448 /* Tunable: BOTH_GENDERS_LOVE_GAMBLE */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12449 /* Tunable: BOTH_GENDERS_LOVE_IS_BLIND */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12450 /* Tunable: BOTH_GENDERS_SEDUCTRESS */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12451 /* Tunable: BOTH_GENDERS_INK_ME */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12452 /* Tunable: BOTH_GENDERS_PRESIDENTS */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12453 /* Tunable: BOTH_GENDERS_SAD_ANGEL */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12454 /* Tunable: BOTH_GENDERS_DANCE_OF_HEARTS */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_026"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12455 /* Tunable: BOTH_GENDERS_ROYAL_TAKEOVER */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_027"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12456 /* Tunable: BOTH_GENDERS_LOS_SANTOS_LIFE */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S1_033"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_12457 /* Tunable: BOTH_GENDERS_CITY_SORROW */) * Global_262145.f_12470 /* Tunable: LOWRIDER_MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
		}
		switch (iVar2)
		{
			case joaat("TAT_S2_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15073 /* Tunable: TATTOO_SA_ASSAULT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15074 /* Tunable: TATTOO_LADY_VAMP */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15075 /* Tunable: TATTOO_LOVE_HUSTLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15076 /* Tunable: TATTOO_LOVE_THE_GAME */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15077 /* Tunable: TATTOO_LADY_LIBERTY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15078 /* Tunable: TATTOO_ROYAL_KISS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15079 /* Tunable: TATTOO_TWO_FACE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15080 /* Tunable: TATTOO_SKELETON_PARTY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15081 /* Tunable: TATTOO_DEATH_BEHIND */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15082 /* Tunable: TATTOO_MY_CRAZY_LIFE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_028"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15083 /* Tunable: TATTOO_LOVING_LOS_MUERTOS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_029"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15084 /* Tunable: TATTOO_DEATH_US_DO_PART */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_030"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15085 /* Tunable: TATTOO_SAN_ANDREAS_PRAYER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_031"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15086 /* Tunable: TATTOO_DEAD_PRETTY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_032"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15087 /* Tunable: TATTOO_REIGN_OVER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_S2_035"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_15088 /* Tunable: TATTOO_BLACK_TEARS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
		}
		switch (iVar2)
		{
			case joaat("TAT_ST_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17266 /* Tunable: STUNT_STUNT_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17267 /* Tunable: STUNT_8_EYED_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17268 /* Tunable: STUNT_BIG_CAT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17269 /* Tunable: STUNT_POISON_WRENCH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17270 /* Tunable: STUNT_SCORPION_ */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17271 /* Tunable: STUNT_DEMON_SPARK_PLUG */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17272 /* Tunable: STUNT_TOXIC_SPIDER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17273 /* Tunable: STUNTDAGGER_DEVIL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17274 /* Tunable: STUNT_MOONLIGHT_RIDE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17275 /* Tunable: STUNT_ARACHNID_OF_DEATH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17276 /* Tunable: STUNT_GRAVE_VULTURE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17277 /* Tunable: STUNT_WHEELS_OF_DEATH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17278 /* Tunable: STUNT_PUNK_BIKER_ */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17279 /* Tunable: STUNT_DIRT_TRACK_HERO */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17280 /* Tunable: STUNT_BAT_CAT_OF_SPADES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17281 /* Tunable: STUNT_PRAYING_GLOVES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17282 /* Tunable: STUNT_COFFIN_RACER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17283 /* Tunable: STUNT_BAT_WHEEL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17284 /* Tunable: STUNT_VINTAGE_BULLY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17285 /* Tunable: STUNT_ENGINE_HEART */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17286 /* Tunable: STUNT_PISTON_ANGEL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17287 /* Tunable: STUNT_GOLDEN_COBRA */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17288 /* Tunable: STUNT_PISTON_HEAD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17289 /* Tunable: STUNT_TANKED_ */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_024"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17290 /* Tunable: STUNT_ROAD_KILL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_025"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17291 /* Tunable: STUNT_SPEED_FREAK */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_026"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17292 /* Tunable: STUNT_WINGED_WHEEL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_027"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17293 /* Tunable: STUNT_PUNK_ROAD_HOG */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_028"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17294 /* Tunable: STUNT_QUAD_GOBLIN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_029"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17295 /* Tunable: STUNT_MAJESTIC_FINISH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_030"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17296 /* Tunable: STUNT_MANS_RUIN_ */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_031"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17297 /* Tunable: STUNT_STUNT_JESUS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_032"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17298 /* Tunable: STUNT_WHEELIE_MOUSE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_033"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17299 /* Tunable: STUNT_SUGAR_SKULL_TRUCKER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_034"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17300 /* Tunable: STUNT_FEATHER_ROAD_KILL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_035"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17301 /* Tunable: STUNT_STUNTMANS_END */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_036"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17302 /* Tunable: STUNT_BIKER_STALLION */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_037"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17303 /* Tunable: STUNT_BIG_GRILLS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_038"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17304 /* Tunable: STUNT_ONE_DOWN_FIVE_UP */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_039"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17305 /* Tunable: STUNT_KABOOM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_040"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17306 /* Tunable: STUNT_MONKEY_CHOPPER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_041"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17307 /* Tunable: STUNT_BRAPP */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_042"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17308 /* Tunable: STUNT_FLAMING_QUAD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_043"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17309 /* Tunable: STUNT_ENGINE_ARM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_044"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17310 /* Tunable: STUNT_RAM_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_045"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17311 /* Tunable: STUNT_SEVERED_HAND */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_046"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17312 /* Tunable: STUNT_FULL_THROTLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_047"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17313 /* Tunable: STUNT_BRAKE_KNIFE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_048"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17314 /* Tunable: STUNT_RACING_DOLL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_ST_049"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17315 /* Tunable: STUNT_SEDUCTIVE_MECHANIC */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
		}
		switch (iVar2)
		{
			case joaat("TAT_BI_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17927 /* Tunable: BIKER_BOTH_GENDERS_DEMON_RIDER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17928 /* Tunable: BIKER_BOTH_GENDERS_BOTH_BARRELS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17929 /* Tunable: BIKER_BOTH_GENDERS_ROSE_TRIBUTE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17930 /* Tunable: BIKER_BOTH_GENDERS_WEB_RIDER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17931 /* Tunable: BIKER_BOTH_GENDERS_DRAGONS_FURY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17932 /* Tunable: BIKER_BOTH_GENDERS_MADE_IN_AMERICA */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17933 /* Tunable: BIKER_BOTH_GENDERS_CHOPPER_FREEDOM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17934 /* Tunable: BIKER_BOTH_GENDERS_SWOOPING_EAGLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17935 /* Tunable: BIKER_BOTH_GENDERS_FREEDOM_WHEELS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17936 /* Tunable: BIKER_BOTH_GENDERS_MORBID_ARACHNID */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17937 /* Tunable: BIKER_BOTH_GENDERS_SKULL_OF_TAURUS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17938 /* Tunable: BIKER_BOTH_GENDERS_RIP_MY_BROTHERS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17939 /* Tunable: BIKER_BOTH_GENDERS_URBAN_STUNTER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17940 /* Tunable: BIKER_BOTH_GENDERS_DEMON_CROSSBONES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17941 /* Tunable: BIKER_BOTH_GENDERS_LADY_MORTALITY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17942 /* Tunable: BIKER_BOTH_GENDERS_RIDE_OR_DIE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17943 /* Tunable: BIKER_BOTH_GENDERS_MACABRE_TREE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17944 /* Tunable: BIKER_BOTH_GENDERS_CLAWED_BEAST */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17945 /* Tunable: BIKER_BOTH_GENDERS_SKELETAL_CHOPPER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17946 /* Tunable: BIKER_BOTH_GENDERS_GRUESOME_TALONS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17947 /* Tunable: BIKER_BOTH_GENDERS_CRANIAL_ROSE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17948 /* Tunable: BIKER_BOTH_GENDERS_FLAMING_REAPER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17949 /* Tunable: BIKER_BOTH_GENDERS_WESTERN_INSIGNIA */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17950 /* Tunable: BIKER_BOTH_GENDERS_WESTERN_MC */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_024"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_17951 /* Tunable: BIKER_BOTH_GENDERS_LIVE_TO_RIDE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_025"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19008 /* Tunable: TATTOO_GOOD_LUCK */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_026"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19009 /* Tunable: TATTOO_AMERICAN_DREAM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_027"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19010 /* Tunable: TATTOO_BAD_LUCK */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_028"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19011 /* Tunable: TATTOO_DUSK_RIDER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_029"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19012 /* Tunable: TATTOO_BONE_WRENCH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_030"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19013 /* Tunable: TATTOO_BROTHERS_FOR_LIFE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_031"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19014 /* Tunable: TATTOO_GEAR_HEAD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_032"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19015 /* Tunable: TATTOO_WESTERN_EAGLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_033"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19016 /* Tunable: TATTOO_EAGLE_EMBLEM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_034"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19017 /* Tunable: TATTOO_BROTHERHOOD_OF_BIKES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_035"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19018 /* Tunable: TATTOO_CHAIN_FIST */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_036"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19019 /* Tunable: -193252292 */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_037"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19020 /* Tunable: TATTOO_SCORCHED_SOUL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_038"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19021 /* Tunable: TATTOO_FTW */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_039"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19022 /* Tunable: TATTOO_GAS_GUZZLER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_040"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19023 /* Tunable: TATTOO_AMERICAN_MADE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_041"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19024 /* Tunable: TATTOO_NO_REGRETS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_042"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19025 /* Tunable: TATTOO_GRIM_RIDER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_043"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19026 /* Tunable: TATTOO_RIDE_FOREVER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_044"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19027 /* Tunable: TATTOO_RIDE_FREE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_045"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19028 /* Tunable: TATTOO_RIDE_HARD_DIE_FAST */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_046"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19029 /* Tunable: TATTOO_SKULL_CHAIN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_047"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19030 /* Tunable: TATTOO_SNAKE_BIKE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_048"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19031 /* Tunable: TATTOO_STFU */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_049"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19032 /* Tunable: TATTOO_THESE_COLORS_DONT_RUN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_050"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19033 /* Tunable: TATTOO_UNFORGIVEN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_051"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19041 /* Tunable: WESTERN_STYLIZED */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_052"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19038 /* Tunable: TATTOO_BIKER_MOUNT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_053"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19039 /* Tunable: TATTOO_MUFFLER_HELMET */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_054"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19037 /* Tunable: TATTOO_MUM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_055"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19036 /* Tunable: TATTOO_POISON_SCORPION */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_056"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19034 /* Tunable: TATTOO_BONE_CRUISER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_057"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19035 /* Tunable: TATTOO_LAUGHING_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_058"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19040 /* Tunable: TATTOO_REAPER_VULTURE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_059"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19149 /* Tunable: TATTOO_FAGGIO */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_BI_060"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19150 /* Tunable: TATTOO_WE_ARE_THE_MODS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
		}
		switch (iVar2)
		{
			case joaat("TAT_IE_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19750 /* Tunable: IMPEXP_BOTH_GENDERS_BLOCK_BACK */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19751 /* Tunable: IMPEXP_BOTH_GENDERS_POWER_PLANT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19752 /* Tunable: IMPEXP_BOTH_GENDERS_TUNED_TO_DEATH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19753 /* Tunable: IMPEXP_BOTH_GENDERS_MECHANICAL_SLEEVE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19754 /* Tunable: IMPEXP_BOTH_GENDERS_PISTON_SLEEVE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19755 /* Tunable: IMPEXP_BOTH_GENDERS_DIALLED_IN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19756 /* Tunable: IMPEXP_BOTH_GENDERS_ENGULFED_BLOCK */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19757 /* Tunable: IMPEXP_BOTH_GENDERS_DRIVE_FOREVER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19758 /* Tunable: IMPEXP_BOTH_GENDERS_SCARLETT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19759 /* Tunable: IMPEXP_BOTH_GENDERS_SERPENTS_OF_DESTRUCTION */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19760 /* Tunable: IMPEXP_BOTH_GENDERS_TAKE_THE_WHEEL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_IE_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_19761 /* Tunable: IMPEXP_BOTH_GENDERS_TALK_SHIT_GET_HIT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_20334 /* Tunable: GR_BOTH_GENDERS_BULLET_PROOF */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_20335 /* Tunable: GR_BOTH_GENDERS_CROSSED_WEAPONS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_20336 /* Tunable: GR_BOTH_GENDERS_GRENADE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_20337 /* Tunable: GR_BOTH_GENDERS_LOCK_AND_LOAD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_20338 /* Tunable: GR_BOTH_GENDERS_SIDEARM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_20339 /* Tunable: GR_BOTH_GENDERS_PATRIOT_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_20340 /* Tunable: GR_BOTH_GENDERS_COMBAT_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_20341 /* Tunable: GR_BOTH_GENDERS_STYLIZED_TIGER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21204 /* Tunable: GR_BOTH_GENDERS_BANDOLIER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21205 /* Tunable: GR_BOTH_GENDERS_BUTTERFLY_KNIFE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21206 /* Tunable: GR_BOTH_GENDERS_CASH_MONEY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21207 /* Tunable: GR_BOTH_GENDERS_DEATH_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21208 /* Tunable: GR_BOTH_GENDERS_DOLLAR_DAGGERS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21209 /* Tunable: GR_BOTH_GENDERS_WOLF_INSIGNIA */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21210 /* Tunable: GR_BOTH_GENDERS_BACKSTABBER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21211 /* Tunable: GR_BOTH_GENDERS_SPIKED_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21212 /* Tunable: GR_BOTH_GENDERS_BLOOD_MONEY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21213 /* Tunable: GR_BOTH_GENDERS_DOG_TAGS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21214 /* Tunable: GR_BOTH_GENDERS_DUAL_WIELD_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21215 /* Tunable: GR_BOTH_GENDERS_PISTOL_WINGS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21216 /* Tunable: GR_BOTH_GENDERS_CROWNED_WEAPONS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21217 /* Tunable: GR_BOTH_GENDERS_HAVE_A_NICE_DAY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21218 /* Tunable: GR_BOTH_GENDERS_EXPLOSIVE_HEART */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21219 /* Tunable: GR_BOTH_GENDERS_ROSE_REVOLVER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_024"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21220 /* Tunable: GR_BOTH_GENDERS_COMBAT_REAPER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_025"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21221 /* Tunable: GR_BOTH_GENDERS_PRAYING_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_026"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21222 /* Tunable: GR_BOTH_GENDERS_RESTLESS_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_027"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21223 /* Tunable: GR_BOTH_GENDERS_SERPENT_REVOLVER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_028"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21224 /* Tunable: GR_BOTH_GENDERS_MICRO_SMG_CHAIN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_029"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21225 /* Tunable: GR_BOTH_GENDERS_WIN_SOME_LOSE_SOME */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_GR_030"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_21226 /* Tunable: GR_BOTH_GENDERS_PISTOL_ACE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_AR_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22539 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_TURBULENCE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_AR_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22540 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_PILOT_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_AR_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22541 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_WINGED_BOMBSHELL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_AR_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22542 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_TOXIC_TRAILS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_AR_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22543 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_BALLOON_PIONEER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_AR_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22544 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_PARACHUTE_BELLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_AR_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22545 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_BOMBS_AWAY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_AR_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22546 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_EAGLE_EYES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22547 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_BLESS_THE_DEAD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22548 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_CRACKSHOT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22549 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_DEAD_LIES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22550 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_GIVE_NOTHING_BACK */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22551 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_HONOR */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22552 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_MUTINY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22553 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_NEVER_SURRENDER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22554 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_NO_HONOR */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22555 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_HORRORS_OF_THE_DEEP */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22556 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_TALL_SHIP_CONFLICT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22557 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_SEE_YOU_IN_HELL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22558 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_SINNER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22559 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_THIEF */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22560 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_TORN_WINGS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22561 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_MERMAIDS_CURSE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22562 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_JOLLY_ROGER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22563 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_SKULL_COMPASS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22564 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_FRAMED_TALL_SHIP */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22565 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_FINDERS_KEEPERS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22566 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_LOST_AT_SEA */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22567 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_HOMEWARD_BOUND */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22568 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_DEAD_TALES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22569 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_X_MARKS_THE_SPOT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22570 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_STYLIZED_KRAKEN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_024"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22571 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_PIRATE_CAPTAIN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SM_025"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_22572 /* Tunable: SMUGGLER_TATTOOS_MALE_AND_FEMALE_CLAIMED_BY_THE_BEAST */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23854 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_THOR_AND_GOBLIN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23855 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_VIKING_WARRIOR */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23856 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_KABUTO */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23857 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_NATIVE_WARRIOR */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23858 /* Tunable: 1999557167 */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23859 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_GHOST_DRAGON */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23860 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_MEDUSA */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23861 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_COMBAT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23862 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_WARRIOR */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23863 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_NORSE_RUNE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23864 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_SHIELD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23865 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_WEATHERED_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23866 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_TIGER_HEADDRESS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23867 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_KATANA */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23868 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_CELTIC_BAND */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23869 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SAMURAI_COMBAT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23870 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_ODIN_AND_RAVEN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23871 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_FEATHER_SLEEVE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23872 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_MUSCLE_TEAR */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23873 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_STRIKE_FORCE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23874 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_MEDUSAS_GAZE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23875 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_AND_LION */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23876 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_AND_HORSE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23877 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SAMURAI_TALLSHIP */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_024"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23878 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_DRAGON_SLAYER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_025"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23879 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_WINGED_SERPENT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_026"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23880 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_027"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23881 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_MOLON_LABE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_028"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23882 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_SPARTAN_MURAL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H27_029"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_23883 /* Tunable: H2_MALE_AND_FEMALE_TATTOOS_CERBERUS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
		}
		switch (iVar2)
		{
			case joaat("TAT_VW_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27847 /* Tunable: VC_TATTOO_IN_THE_POCKET */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27848 /* Tunable: VC_TATTOO_JACKPOT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27849 /* Tunable: VC_TATTOO_SUITS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27850 /* Tunable: VC_TATTOO_ROYAL_FLUSH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27851 /* Tunable: VC_TATTOO_LADY_LUCK */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27852 /* Tunable: VC_TATTOO_GET_LUCKY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27853 /* Tunable: VC_TATTOO_WHEEL_OF_SUITS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27854 /* Tunable: VC_TATTOO_777 */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27855 /* Tunable: VC_TATTOO_SNAKE_EYES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27856 /* Tunable: VC_TATTOO_TILL_DEATH_DO_US_PART */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27857 /* Tunable: VC_TATTOO_PHOTO_FINISH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27858 /* Tunable: VC_TATTOO_LIFES_A_GAMBLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27859 /* Tunable: VC_TATTOO_SKULL_OF_SUITS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27860 /* Tunable: VC_TATTOO_ONEARMED_BANDIT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27861 /* Tunable: VC_TATTOO_GAMBLERS_RUIN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27862 /* Tunable: VC_TATTOO_THE_JOLLY_JOKER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27863 /* Tunable: VC_TATTOO_ROSE_ACES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27864 /* Tunable: VC_TATTOO_ROLL_THE_DICE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27865 /* Tunable: VC_TATTOO_THE_GAMBLERS_LIFE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27866 /* Tunable: VC_TATTOO_CANT_WIN_THEM_ALL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27867 /* Tunable: VC_TATTOO_CASH_IS_KING */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27868 /* Tunable: VC_TATTOO_SHOW_YOUR_HAND */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27869 /* Tunable: VC_TATTOO_BLOOD_MONEY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27870 /* Tunable: VC_TATTOO_LUCKY_7S */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_024"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27871 /* Tunable: VC_TATTOO_CASH_MOUTH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_025"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27872 /* Tunable: VC_TATTOO_QUEEN_OF_ROSES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_026"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27873 /* Tunable: VC_TATTOO_BANKNOTE_ROSE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_027"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27874 /* Tunable: VC_TATTOO_8BALL_ROSE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_028"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27875 /* Tunable: VC_TATTOO_SKULL_ACES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_029"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27876 /* Tunable: VC_TATTOO_THE_TABLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_030"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27877 /* Tunable: VC_TATTOO_THE_ROYALS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_031"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27878 /* Tunable: VC_TATTOO_GAMBLING_ROYALTY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_VW_032"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_27879 /* Tunable: VC_TATTOO_PLAY_YOUR_ACE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
		}
		switch (iVar2)
		{
			case joaat("TAT_H3_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28902 /* Tunable: CH_TATTOO_FIVE_STARS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28903 /* Tunable: CH_TATTOO_ACE_OF_SPADES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28904 /* Tunable: CH_TATTOO_ANIMAL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28905 /* Tunable: CH_TATTOO_ASSAULT_RIFLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28906 /* Tunable: CH_TATTOO_BAND_AID */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28907 /* Tunable: CH_TATTOO_SPADES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28908 /* Tunable: CH_TATTOO_CROWNED */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28909 /* Tunable: CH_TATTOO_TWO_HORNS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28910 /* Tunable: CH_TATTOO_ICE_CREAM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28911 /* Tunable: CH_TATTOO_KNIFED */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28912 /* Tunable: CH_TATTOO_GREEN_LEAF */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28913 /* Tunable: CH_TATTOO_LIPSTICK_KISS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28914 /* Tunable: CH_TATTOO_RAZOR_POP */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28915 /* Tunable: CH_TATTOO_LS_STAR */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28916 /* Tunable: CH_TATTOO_LS_WINGS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28917 /* Tunable: CH_TATTOO_ON_OFF */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28918 /* Tunable: CH_TATTOO_SLEEPY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28919 /* Tunable: CH_TATTOO_SPACE_MONKEY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28920 /* Tunable: CH_TATTOO_STITCHES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28921 /* Tunable: CH_TATTOO_TEDDY_BEAR */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28922 /* Tunable: CH_TATTOO_UFO */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28923 /* Tunable: CH_TATTOO_WANTED */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28924 /* Tunable: CH_TATTOO_THOGS_SWORD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28925 /* Tunable: CH_TATTOO_BIGFOOT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_024"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28926 /* Tunable: CH_TATTOO_MOUNT_CHILIAD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_025"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28927 /* Tunable: CH_TATTOO_DAVIS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_026"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28928 /* Tunable: CH_TATTOO_DIGNITY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_027"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28929 /* Tunable: CH_TATTOO_EPSILON */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_028"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28930 /* Tunable: CH_TATTOO_BANANAS_GONE_BAD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_029"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28931 /* Tunable: CH_TATTOO_FATAL_INCURSION */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_030"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28932 /* Tunable: CH_TATTOO_HOWITZER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_031"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28933 /* Tunable: CH_TATTOO_KIFFLOM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_032"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28934 /* Tunable: CH_TATTOO_LOVE_FIST */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_033"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28935 /* Tunable: CH_TATTOO_LS_CITY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_034"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28936 /* Tunable: CH_TATTOO_LS_MONOGRAM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_035"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28937 /* Tunable: CH_TATTOO_LS_PANIC */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_036"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28938 /* Tunable: CH_TATTOO_LS_SHIELD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_037"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28939 /* Tunable: CH_TATTOO_LADYBUG */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_038"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28940 /* Tunable: CH_TATTOO_ROBOT_BUBBLEGUM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_039"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28941 /* Tunable: CH_TATTOO_SPACE_RANGERS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_040"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28942 /* Tunable: CH_TATTOO_TIGER_HEART */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_041"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28943 /* Tunable: CH_TATTOO_MIGHTY_THOG */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_042"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28944 /* Tunable: CH_TATTOO_HEARTS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_043"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28945 /* Tunable: CH_TATTOO_CLUBS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H3_044"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_28946 /* Tunable: CH_TATTOO_DIAMONDS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
		}
		switch (iVar2)
		{
			case joaat("TAT_H4_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30748 /* Tunable: IH_TATTOO_HEADPHONE_SPLAT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30749 /* Tunable: IH_TATTOO_TROPICAL_DUDE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30750 /* Tunable: IH_TATTOO_JELLYFISH_SHADES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30751 /* Tunable: IH_TATTOO_LIGHTHOUSE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30752 /* Tunable: IH_TATTOO_SKELETON_BREEZE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30753 /* Tunable: IH_TATTOO_LSUR */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30754 /* Tunable: IH_TATTOO_MUSIC_LOCKER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30755 /* Tunable: IH_TATTOO_SKELETON_DJ */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30756 /* Tunable: IH_TATTOO_SMILEY_GLITCH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30757 /* Tunable: IH_TATTOO_SCRATCH_PANTHER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30758 /* Tunable: IH_TATTOO_TROPICAL_SERPENT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30759 /* Tunable: IH_TATTOO_SOULWAX */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30760 /* Tunable: IH_TATTOO_STILL_SLIPPIN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30761 /* Tunable: IH_TATTOO_WILD_DANCERS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30762 /* Tunable: IH_TATTOO_PARADISE_NAP */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30763 /* Tunable: IH_TATTOO_PARADISE_UKULELE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30764 /* Tunable: IH_TATTOO_ROSE_PANTHER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30765 /* Tunable: IH_TATTOO_TROPICAL_SORCERER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30766 /* Tunable: IH_TATTOO_RECORD_HEAD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30767 /* Tunable: IH_TATTOO_RECORD_SHOT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30768 /* Tunable: IH_TATTOO_SPEAKER_TOWER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30769 /* Tunable: IH_TATTOO_SKULL_SURFER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30770 /* Tunable: IH_TATTOO_PARADISE_SIRENS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30771 /* Tunable: IH_TATTOO_TECHNO_GLITCH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_024"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30772 /* Tunable: IH_TATTOO_PINEAPPLE_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_025"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30773 /* Tunable: IH_TATTOO_GLOW_PRINCESS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_026"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30774 /* Tunable: IH_TATTOO_SHARK_WATER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_027"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30775 /* Tunable: IH_TATTOO_SKULLPHONES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_028"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30776 /* Tunable: IH_TATTOO_SKULL_WATERS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_029"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30777 /* Tunable: IH_TATTOO_SOUNDWAVES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_030"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30778 /* Tunable: IH_TATTOO_RADIO_TAPE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_031"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30779 /* Tunable: IH_TATTOO_OCTOPUS_SHADES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_H4_032"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_30780 /* Tunable: IH_TATTOO_KULT_991_FM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
		}
		switch (iVar2)
		{
			case joaat("TAT_FX_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_31998 /* Tunable: FIXER_TATTOO_HOOD_SKELETON */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_31999 /* Tunable: FIXER_TATTOO_BRIGHT_DIAMOND */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32000 /* Tunable: FIXER_TATTOO_HUSTLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32001 /* Tunable: FIXER_TATTOO_BANDANA_KNIFE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32002 /* Tunable: FIXER_TATTOO_HOOD_HEART */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32003 /* Tunable: FIXER_TATTOO_PEACOCK */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32004 /* Tunable: FIXER_TATTOO_SKELETON_SHOT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32005 /* Tunable: FIXER_TATTOO_BALLAS_4_LIFE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32006 /* Tunable: FIXER_TATTOO_LOS_SANTOS_TAG */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32007 /* Tunable: FIXER_TATTOO_ASCENSION */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32008 /* Tunable: FIXER_TATTOO_MUSIC_IS_THE_REMEDY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32009 /* Tunable: FIXER_TATTOO_SERPENT_MIC */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32010 /* Tunable: FIXER_TATTOO_ZOMBIE_RHYMES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32011 /* Tunable: FIXER_TATTOO_BLESSED_BOOMBOX */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32012 /* Tunable: FIXER_TATTOO_CHAMBERLAIN_HILLS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32013 /* Tunable: FIXER_TATTOO_SMOKING_BARRELS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32014 /* Tunable: FIXER_TATTOO_ALL_FROM_THE_SAME_TREE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32015 /* Tunable: FIXER_TATTOO_KING_OF_THE_JUNGLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32016 /* Tunable: FIXER_TATTOO_NIGHT_OWL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32017 /* Tunable: FIXER_TATTOO_WEED_KNUCKLES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32018 /* Tunable: FIXER_TATTOO_DOG_FIST */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32019 /* Tunable: FIXER_TATTOO_GRAFFITI_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32020 /* Tunable: FIXER_TATTOO_LS_SMOKING_CARTRIDGES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32021 /* Tunable: FIXER_TATTOO_TRUST */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_024"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32022 /* Tunable: FIXER_TATTOO_BEATBOX_SILHOUETTE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_025"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32023 /* Tunable: FIXER_TATTOO_DAVIS_FLAMES */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_026"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32024 /* Tunable: FIXER_TATTOO_DOLLAR_GUNS_CROSSED */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_FX_027"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32025 /* Tunable: FIXER_TATTOO_BLACK_WIDOW */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
		}
		switch (iVar2)
		{
			case joaat("TAT_SB_000"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33047 /* Tunable: SU22_TATTOO_LIVE_FAST_MONO */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_001"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33048 /* Tunable: SU22_TATTOO_LIVE_FAST_COLOR */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_002"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33049 /* Tunable: SU22_TATTOO_COBRA_BIKER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_003"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33050 /* Tunable: SU22_TATTOO_BULLET_MOUTH */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_004"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33051 /* Tunable: SU22_TATTOO_SMOKING_BARREL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_005"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33052 /* Tunable: SU22_TATTOO_CONCEALED */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_006"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33053 /* Tunable: SU22_TATTOO_PAINTED_MICRO_SMG */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_007"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33054 /* Tunable: SU22_TATTOO_WEAPON_KING */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_008"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33055 /* Tunable: SU22_TATTOO_BIGNESS_CHIMP */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_009"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33056 /* Tunable: SU22_TATTOO_UPNATOMIZER_DESIGN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_010"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33057 /* Tunable: SU22_TATTOO_ROCKET_LAUNCHER_GIRL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_011"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33058 /* Tunable: SU22_TATTOO_MINIGUN_GUY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_012"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33059 /* Tunable: SU22_TATTOO_SNAKE_REVOLVER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_013"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33060 /* Tunable: SU22_TATTOO_WEAPON_SLEEVE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_014"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33061 /* Tunable: SU22_TATTOO_MINIMAL_SMG */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_015"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33062 /* Tunable: SU22_TATTOO_MINIMAL_ADVANCED_RIFLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_016"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33063 /* Tunable: SU22_TATTOO_MINIMAL_SNIPER_RIFLE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_017"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33064 /* Tunable: SU22_TATTOO_SKULL_GRENADE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_018"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33065 /* Tunable: SU22_TATTOO_BRANCHED_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_019"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33066 /* Tunable: SU22_TATTOO_SCYTHED_CORPSE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_020"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33067 /* Tunable: SU22_TATTOO_SCYTHED_CORPSE_REAPER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_021"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33068 /* Tunable: SU22_TATTOO_THIRD_EYE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_022"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33069 /* Tunable: SU22_TATTOO_PIERCED_THIRD_EYE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_023"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33070 /* Tunable: SU22_TATTOO_LIP_DRIP */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_024"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33071 /* Tunable: SU22_TATTOO_SKIN_MASK */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_025"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33072 /* Tunable: SU22_TATTOO_WEBBED_SCYTHE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_026"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33073 /* Tunable: SU22_TATTOO_ONI_DEMON */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_027"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33074 /* Tunable: SU22_TATTOO_BAT_WINGS */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_028"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33075 /* Tunable: SU22_TATTOO_LASER_EYES_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_029"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33076 /* Tunable: SU22_TATTOO_CLASSIC_VAMPIRE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_030"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33077 /* Tunable: SU22_TATTOO_CENTIPEDE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_031"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33078 /* Tunable: SU22_TATTOO_FLESHY_EYE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_032"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33079 /* Tunable: SU22_TATTOO_MANYEYED_GOAT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_033"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33080 /* Tunable: SU22_TATTOO_THREEEYED_DEMON */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_034"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33081 /* Tunable: SU22_TATTOO_SMOULDERING_REAPER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_035"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33082 /* Tunable: SU22_TATTOO_SNIFF_SNIFF */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_036"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33083 /* Tunable: SU22_TATTOO_CHARM_PATTERN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_037"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33084 /* Tunable: SU22_TATTOO_WITCH_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_038"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33085 /* Tunable: SU22_TATTOO_PUMPKIN_BUG */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_039"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33086 /* Tunable: SU22_TATTOO_SINNER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_040"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33087 /* Tunable: SU22_TATTOO_CARVED_PUMPKIN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_041"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33088 /* Tunable: SU22_TATTOO_BRANCHED_WEREWOLF */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_042"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33089 /* Tunable: SU22_TATTOO_WINGED_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_043"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33090 /* Tunable: SU22_TATTOO_CURSED_SAKI */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_044"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33091 /* Tunable: SU22_TATTOO_SMOULDERING_BAT_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_045"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33092 /* Tunable: SU22_TATTOO_ARMORED_ARM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_046"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33093 /* Tunable: SU22_TATTOO_DEMON_SMILE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_047"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33094 /* Tunable: SU22_TATTOO_ANGEL_DEVIL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_048"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33095 /* Tunable: SU22_TATTOO_DEATH_IS_CERTAIN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_049"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33096 /* Tunable: SU22_TATTOO_DEMON_DRUMMER */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_050"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33097 /* Tunable: SU22_TATTOO_GOLD_GUN */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_051"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33098 /* Tunable: SU22_TATTOO_BLUE_SERPENT */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_052"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33099 /* Tunable: SU22_TATTOO_NIGHT_DEMON */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_053"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33100 /* Tunable: SU22_TATTOO_MOBSTER_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_054"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33101 /* Tunable: SU22_TATTOO_WOUNDED_HEAD */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_055"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33102 /* Tunable: SU22_TATTOO_STABBED_SKULL */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_056"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33103 /* Tunable: SU22_TATTOO_TIGER_BLADE */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_057"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33104 /* Tunable: SU22_TATTOO_GRAY_DEMON */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_058"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33105 /* Tunable: SU22_TATTOO_SHRIEKING_DRAGON */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_059"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33106 /* Tunable: SU22_TATTOO_SWORDS_CITY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_060"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33107 /* Tunable: SU22_TATTOO_BLAINE_COUNTY */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_061"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33108 /* Tunable: SU22_TATTOO_ANGRY_POSSUM */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
			case joaat("TAT_SB_062"):
				iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_33109 /* Tunable: SU22_TATTOO_FLORAL_DEMON */) * Global_262145.f_15024 /* Tunable: MALE_AND_FEMALE_TATTOOS_ALL_TATTOOS */));
				break;
		}
		return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) * Global_262145.f_76 /* Tunable: TATTOO_SHOP_MULTIPLIER */));
	}
	return iParam0;
}

int func_563()//Position - 0x6041F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar1 = 0;
		while (iVar1 < 1568)
		{
			iVar2 = (iVar1 / 32);
			bVar3 = (iVar1 % 32);
			if (BitTest(Local_70.f_447[iVar2], bVar3))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 71)
	{
		iVar2 = (iVar1 / 32);
		bVar3 = (iVar1 % 32);
		if (BitTest(Local_70.f_442[iVar2], bVar3))
		{
			iVar0++;
			if (__LIB_0__::func_416(iVar2, bVar3) == -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_565(var uParam0)//Position - 0x604BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar1 = (1568 - 1);
		while (iVar1 >= 0)
		{
			iVar2 = (iVar1 / 32);
			bVar3 = (iVar1 % 32);
			if (BitTest(Local_70.f_447[iVar2], bVar3))
			{
				iVar0++;
				if (iVar0 == Global_4539961)
				{
					*uParam0 = (129 + iVar1);
					return 1;
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	iVar1 = (71 - 1);
	while (iVar1 >= 0)
	{
		iVar2 = (iVar1 / 32);
		bVar3 = (iVar1 % 32);
		if (BitTest(Local_70.f_442[iVar2], bVar3))
		{
			iVar0++;
			if (iVar0 == Global_4539961)
			{
				*uParam0 = __LIB_0__::func_416(iVar2, bVar3);
				return 1;
			}
		}
		iVar1 = (iVar1 + -1);
	}
	*uParam0 = -1;
	return 0;
}

void func_566(int iParam0, bool bParam1)//Position - 0x60574
{
	if (Global_78319)
	{
		func_568(iParam0, bParam1, -1);
	}
	else
	{
		func_567(__LIB_14__::func_466(), iParam0, bParam1);
	}
}

void func_567(bool bParam0, int iParam1, bool bParam2)//Position - 0x6059B
{
	struct<11> Var0;
	if (__LIB_0__::func_374(bParam0))
	{
		if (__LIB_0__::func_445(&Var0, iParam1, __LIB_0__::func_415(bParam0), 0, -1))
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_113386.f_2363.f_493[bParam0 /*15*/].f_5[Var0.f_9]), Var0.f_10);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363.f_493[bParam0 /*15*/].f_5[Var0.f_9]), Var0.f_10);
			}
		}
	}
}

void func_568(var uParam0, bool bParam1, int iParam2)//Position - 0x60603
{
	if (bParam1)
	{
		if (!func_572(uParam0))
		{
			func_569(uParam0, 1, iParam2);
		}
	}
	else if (func_572(uParam0))
	{
		func_569(uParam0, 0, iParam2);
	}
}

void func_569(var uParam0, bool bParam1, int iParam2)//Position - 0x60638
{
	int iVar0;
	int iVar1;
	iVar0 = func_571(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		__LIB_0__::func_413(__LIB_16__::func_399(uParam0), iVar0, iParam2, 1, 0);
	}
}

int func_571(var uParam0)//Position - 0x609C4
{
	int iVar0;
	iVar0 = __LIB_0__::func_369(__LIB_16__::func_399(uParam0), -1, 0);
	return iVar0;
}

bool func_572(var uParam0)//Position - 0x609DC
{
	var uVar0;
	int iVar1;
	uVar0 = func_571(uParam0);
	iVar1 = uParam0;
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

int func_573(int iParam0, char* sParam1)//Position - 0x609F9
{
	struct<4> Var0;
	struct<4> Var1;
	StringCopy(&Var0, sParam1, 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (__LIB_0__::func_445(&Var1, iParam0, __LIB_0__::func_276(PLAYER::PLAYER_PED_ID()), PLAYER::PLAYER_PED_ID(), -1))
		{
			Var0 = { Var1 };
		}
	}
	if (func_350(&Var0))
	{
		if (!__LIB_1__::func_526() || !Global_4539560)
		{
			return 0;
		}
	}
	return func_392(iParam0);
}

int func_574(int iParam0)//Position - 0x60A56
{
	if (Global_78319)
	{
		return func_572(iParam0);
	}
	else
	{
		return func_575(__LIB_14__::func_466(), iParam0);
	}
	return 0;
}

int func_575(bool bParam0, int iParam1)//Position - 0x60A7F
{
	struct<11> Var0;
	if (__LIB_0__::func_374(bParam0))
	{
		if (__LIB_0__::func_445(&Var0, iParam1, __LIB_0__::func_415(bParam0), 0, -1))
		{
			return BitTest(Global_113386.f_2363.f_493[bParam0 /*15*/].f_5[Var0.f_9], Var0.f_10);
		}
	}
	return 0;
}

int func_576(var uParam0, bool bParam1)//Position - 0x60AC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = *uParam0;
	while (func_271(iVar2, &iVar0, &iVar1, 1, 1))
	{
		iVar2++;
		func_271(iVar2, &iVar0, &iVar1, 1, 1);
		if (func_577(iVar0, iVar1))
		{
			*uParam0 = iVar2;
			return 1;
		}
	}
	if (bParam1)
	{
		iVar2 = 0;
		while (func_271(iVar2, &iVar0, &iVar1, 1, 1))
		{
			if (func_577(iVar0, iVar1))
			{
				*uParam0 = iVar2;
				return 1;
			}
			iVar2++;
		}
	}
	return 0;
}

int func_577(int iParam0, int iParam1)//Position - 0x60B3D
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar3 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		iVar4 = __LIB_0__::func_276(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar4);
			iVar6 = 0;
			while (iVar6 < iVar7)
			{
				if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar4, iVar6, &Var8))
				{
					if ((!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0) && Var8.f_6 != joaat("hairOverlay")) && Var8.f_6 != joaat("torsoDecal"))
					{
						if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var8.f_2, Var8.f_3) == iParam0 && func_405(iVar3, &(Var8.f_7), Var8.f_6, iParam0, iParam1))
						{
							return 1;
						}
					}
				}
				iVar6++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			bVar1 = false;
			while (bVar1 < 32)
			{
				iVar5 = __LIB_0__::func_416(iVar0, bVar1);
				if (__LIB_0__::func_445(&Var2, __LIB_0__::func_416(iVar0, bVar1), iVar4, PLAYER::PLAYER_PED_ID(), -1))
				{
					if (((!func_395(iVar5, iVar4) && !func_394(iVar5, iVar4)) && Var2.f_8 != joaat("hairOverlay")) && Var2.f_8 != joaat("torsoDecal"))
					{
						if (func_573(Var2.f_11, &Var2) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_3() == 0))
						{
							if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var2.f_4, Var2.f_5) == iParam0 && func_405(iVar3, &Var2, Var2.f_8, iParam0, iParam1))
							{
								return 1;
							}
						}
					}
				}
				bVar1++;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_578(var uParam0, bool bParam1)//Position - 0x60CB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = *uParam0;
	while (func_271(iVar2, &iVar0, &iVar1, 1, 1))
	{
		iVar2 = (iVar2 - 1);
		func_271(iVar2, &iVar0, &iVar1, 1, 1);
		if (func_577(iVar0, iVar1))
		{
			*uParam0 = iVar2;
			return 1;
		}
	}
	if (bParam1)
	{
		iVar2 = 8;
		while (func_271(iVar2, &iVar0, &iVar1, 1, 1))
		{
			if (func_577(iVar0, iVar1))
			{
				*uParam0 = iVar2;
				return 1;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	return 0;
}

void func_592(int iParam0)//Position - 0x61AB7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<4> Var9;
	struct<16> Var10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<4> Var14;
	if (Local_70.f_116.f_5 == 0)
	{
		__LIB_1__::func_602(0, 0);
		__LIB_8__::func_891(Local_70.f_0, 0);
		__LIB_1__::func_766(1, 0, 0, 0, 0);
		__LIB_1__::func_767("TAT_TITLE_0");
		if (!Local_70.f_116.f_17)
		{
			Local_70.f_116.f_3 = -1;
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = 0;
			if (func_577(0, 0))
			{
				if (!func_391(0, 0))
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0a", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(2, 0);
				}
				else if (func_600(0, 0))
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0a", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(51, 0);
				}
				else
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0", 0, 1, 0, 0, 0);
				}
				if (Local_70.f_116.f_3 == -1)
				{
					Local_70.f_116.f_3 = iVar0;
				}
			}
			iVar0++;
			iVar0++;
			iVar0++;
		}
		else
		{
			iVar0 = 0;
			if (func_577(0, 0))
			{
				if (!func_391(0, 0))
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0a", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(2, 0);
				}
				else if (func_600(0, 0))
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0a", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(51, 0);
				}
				else
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0a", 0, 1, 0, 0, 0);
				}
				if (Local_70.f_116.f_3 == -1)
				{
					Local_70.f_116.f_3 = iVar0;
				}
			}
			iVar0++;
			if (func_577(0, 1))
			{
				if (!func_391(0, 1))
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0b", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(2, 0);
				}
				else if (func_600(0, 1))
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0b", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(51, 0);
				}
				else
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0b", 0, 1, 0, 0, 0);
				}
				if (Local_70.f_116.f_3 == -1)
				{
					Local_70.f_116.f_3 = iVar0;
				}
			}
			iVar0++;
			if (func_577(0, 2))
			{
				if (!func_391(0, 2))
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0c", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(2, 0);
				}
				else if (func_600(0, 2))
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0c", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(51, 0);
				}
				else
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0c", 0, 1, 0, 0, 0);
				}
				if (Local_70.f_116.f_3 == -1)
				{
					Local_70.f_116.f_3 = iVar0;
				}
			}
			iVar0++;
			if (func_577(0, 3))
			{
				if (!func_391(0, 3))
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0d", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(2, 0);
				}
				else if (func_600(0, 3))
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0d", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(51, 0);
				}
				else
				{
					__LIB_3__::func_572(iVar0, "TAT_ZONE_0d", 0, 1, 0, 0, 0);
				}
				if (Local_70.f_116.f_3 == -1)
				{
					Local_70.f_116.f_3 = iVar0;
				}
			}
		}
		iVar0++;
		if (func_577(1, -1))
		{
			if (!func_391(1, -1))
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_1", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(2, 0);
			}
			else if (func_600(1, -1))
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_1", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(51, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_1", 0, 1, 0, 0, 0);
			}
			if (Local_70.f_116.f_3 == -1)
			{
				Local_70.f_116.f_3 = iVar0;
			}
		}
		iVar0++;
		if (func_577(2, -1))
		{
			if (!func_391(2, -1))
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_2", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(2, 0);
			}
			else if (func_600(2, -1))
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_2", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(51, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_2", 0, 1, 0, 0, 0);
			}
			if (Local_70.f_116.f_3 == -1)
			{
				Local_70.f_116.f_3 = iVar0;
			}
		}
		iVar0++;
		if (func_577(3, -1))
		{
			if (!func_391(3, -1))
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_3", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(2, 0);
			}
			else if (func_600(3, -1))
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_3", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(51, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_3", 0, 1, 0, 0, 0);
			}
			if (Local_70.f_116.f_3 == -1)
			{
				Local_70.f_116.f_3 = iVar0;
			}
		}
		iVar0++;
		if (func_577(4, -1))
		{
			if (!func_391(4, -1))
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_4", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(2, 0);
			}
			else if (func_600(4, -1))
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_4", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(51, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_4", 0, 1, 0, 0, 0);
			}
			if (Local_70.f_116.f_3 == -1)
			{
				Local_70.f_116.f_3 = iVar0;
			}
		}
		iVar0++;
		if (func_577(5, -1))
		{
			if (!func_391(5, -1))
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_5", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(2, 0);
			}
			else if (func_600(5, -1))
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_5", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(51, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar0, "TAT_ZONE_5", 0, 1, 0, 0, 0);
			}
			if (Local_70.f_116.f_3 == -1)
			{
				Local_70.f_116.f_3 = iVar0;
			}
		}
		if (Local_70.f_116.f_3 == -1)
		{
			if (func_599())
			{
				__LIB_3__::func_572(0, "TAT_NONE_OUT", 0, 1, 0, 0, 0);
			}
			else
			{
				__LIB_3__::func_572(0, "TAT_NONE", 0, 1, 0, 0, 0);
			}
		}
		__LIB_3__::func_110(Local_70.f_116.f_3, 1, 1);
		Local_70.f_116.f_17 = 0;
	}
	else if (Local_70.f_116.f_5 == 1)
	{
		__LIB_1__::func_602(0, 0);
		__LIB_8__::func_891(Local_70.f_0, 0);
		__LIB_1__::func_766(1, 1, 0, 0, 0);
		__LIB_1__::func_765(1, 2, 1, 1, 1);
		if (Global_78319)
		{
			__LIB_1__::func_767("TAT_TITLE_1_0");
		}
		else
		{
			__LIB_1__::func_767("TAT_TITLE_1_0");
		}
		iVar5 = __LIB_0__::func_276(PLAYER::PLAYER_PED_ID());
		iVar6 = 7;
		iVar7 = -1;
		func_271(Local_70.f_116.f_3, &iVar6, &iVar7, 0, 0);
		iVar8 = 0;
		StringCopy(&Local_182, "", 64);
		func_597(iVar5, &(Local_70.f_442), &(Local_70.f_447), iVar6, iVar7);
		if (func_409(&iVar3, &iVar1) && __LIB_0__::func_445(&Var4, iVar3, iVar5, PLAYER::PLAYER_PED_ID(), -1))
		{
			iVar8 = 0;
			iVar2 = func_561(Var4.f_7, Var4);
			if (iVar2 == -1)
			{
				MemCopy(&Local_182, {Var4}, 16);
				iVar8 = 1;
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
			{
				bVar12 = false;
				if (func_343(Var4))
				{
					bVar12 = true;
				}
				__LIB_4__::func_886(&Var10, Var4, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1, 0, bVar12);
				if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&Var10))
				{
					Local_182 = { Var10 };
					iVar8 = 1;
				}
			}
			bVar11 = func_573(Var4.f_11, &Var4);
			if (bVar11 && !func_574(Var4.f_11))
			{
				__LIB_3__::func_572(iVar1, &Var4, 1, 1, 0, 0, 0);
				__LIB_14__::func_431(2, 0);
			}
			else if (bVar11 && func_334(Var4.f_11, &Var4, iVar6, iVar7))
			{
				__LIB_3__::func_572(iVar1, &Var4, 1, 1, 0, 0, 0);
				__LIB_14__::func_431(51, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar1, &Var4, 0, 1, 0, 0, 0);
			}
			if (!bVar11 || iVar8)
			{
				__LIB_3__::func_572(iVar1, "", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(15, 0);
			}
			else if (func_252(Var4.f_11))
			{
				__LIB_3__::func_572(iVar1, "", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(11, 0);
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_343(Var4))
			{
				__LIB_3__::func_572(iVar1, "ITEM_FREE" /* GXT: FREE */, 0, 1, 0, 0, 0);
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_444(Var4.f_11, -1))
			{
				__LIB_3__::func_572(iVar1, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
				__LIB_13__::func_722(Global_262145.f_8261 /* Tunable: PURCHASED_TATTOO_APPLICATION_FEE */, 0);
			}
			else if (iVar2 > 0)
			{
				__LIB_3__::func_572(iVar1, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
				__LIB_13__::func_722(iVar2, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar1, "ITEM_FREE" /* GXT: FREE */, 0, 1, 0, 0, 0);
			}
			if (iVar3 == Local_70.f_498)
			{
				Var9 = { Var4 };
			}
			while (func_408(iVar3, &iVar3, &iVar1, 0))
			{
				if (__LIB_0__::func_445(&Var4, iVar3, iVar5, PLAYER::PLAYER_PED_ID(), -1))
				{
					iVar8 = 0;
					iVar2 = func_561(Var4.f_7, Var4);
					if (iVar2 == -1)
					{
						MemCopy(&Local_182, {Var4}, 16);
						iVar8 = 1;
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
					{
						bVar13 = false;
						if (func_343(Var4))
						{
							bVar13 = true;
						}
						__LIB_4__::func_886(&Var10, Var4, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1, 0, bVar13);
						if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&Var10))
						{
							Local_182 = { Var10 };
							iVar8 = 1;
						}
					}
					bVar11 = func_573(Var4.f_11, &Var4);
					if (bVar11 && !func_574(Var4.f_11))
					{
						__LIB_3__::func_572(iVar1, &Var4, 1, 1, 0, 0, 0);
						__LIB_14__::func_431(2, 0);
					}
					else if (bVar11 && func_334(Var4.f_11, &Var4, iVar6, iVar7))
					{
						__LIB_3__::func_572(iVar1, &Var4, 1, 1, 0, 0, 0);
						__LIB_14__::func_431(51, 0);
					}
					else
					{
						__LIB_3__::func_572(iVar1, &Var4, 0, 1, 0, 0, 0);
					}
					if (!bVar11 || iVar8)
					{
						__LIB_3__::func_572(iVar1, "", 1, 1, 0, 0, 0);
						__LIB_14__::func_431(15, 0);
					}
					else if (func_252(Var4.f_11))
					{
						__LIB_3__::func_572(iVar1, "", 1, 1, 0, 0, 0);
						__LIB_14__::func_431(11, 0);
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_343(Var4))
					{
						__LIB_3__::func_572(iVar1, "ITEM_FREE" /* GXT: FREE */, 0, 1, 0, 0, 0);
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_444(Var4.f_11, -1))
					{
						__LIB_3__::func_572(iVar1, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
						__LIB_13__::func_722(Global_262145.f_8261 /* Tunable: PURCHASED_TATTOO_APPLICATION_FEE */, 0);
					}
					else if (iVar2 > 0)
					{
						__LIB_3__::func_572(iVar1, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
						__LIB_13__::func_722(iVar2, 0);
					}
					else
					{
						__LIB_3__::func_572(iVar1, "ITEM_FREE" /* GXT: FREE */, 0, 1, 0, 0, 0);
					}
					if (iVar3 == Local_70.f_498)
					{
						Var9 = { Var4 };
					}
				}
			}
		}
		else if (func_599())
		{
			__LIB_3__::func_572(0, "TAT_NONE_OUT", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_3__::func_572(0, "TAT_NONE", 0, 1, 0, 0, 0);
		}
		if (Local_70.f_116.f_17)
		{
			__LIB_5__::func_393(Local_70.f_116.f_2);
			__LIB_3__::func_110(Local_70.f_116.f_1, 0, 1);
		}
		else
		{
			func_409(&(Local_70.f_498), &(Local_70.f_116.f_1));
			__LIB_3__::func_110(Local_70.f_116.f_1, 1, 1);
		}
		Local_70.f_116.f_2 = __LIB_5__::func_392();
		Local_70.f_116.f_17 = 0;
		*iParam0 = 1;
		iLocal_152 = -1;
		iLocal_153 = -1;
		if (MISC::GET_HASH_KEY(&(Local_70.f_116.f_11)) != 0)
		{
			if (!func_350(&Var9))
			{
				if (__LIB_16__::func_394(&Var9, &Var14))
				{
					Local_70.f_116.f_11 = { Var14 };
					__LIB_1__::func_789(&(Local_70.f_116.f_11), 4000, 0);
				}
				else
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Local_70.f_116.f_11), "TAT_REMDLC") && MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__::func_984(&Var9, 0)))
					{
						StringCopy(&(Local_70.f_116.f_11), "TAT_REM", 16);
					}
					__LIB_1__::func_789(&(Local_70.f_116.f_11), 4000, 0);
					if (iLocal_181 && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__::func_984(&Var9, 0)))
					{
						__LIB_3__::func_542(__LIB_13__::func_984(&Var9, 0));
					}
				}
			}
			else
			{
				__LIB_1__::func_789("TAT_LCKCREW", 4000, 0);
			}
			StringCopy(&(Local_70.f_116.f_11), "", 16);
			iLocal_181 = 0;
		}
	}
	iLocal_141 = 1;
}

void func_597(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x62BC6
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar5 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam0);
		iVar4 = 0;
		while (iVar4 < *uParam2)
		{
			(*uParam2)[iVar4] = 0;
			iVar4++;
		}
		if (iVar5 > 1568)
		{
			if (iParam0 == 3)
			{
			}
			else if (iParam0 == 4)
			{
			}
			iVar5 = 1568;
		}
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam0, iVar4, &Var6))
			{
				if (((!FILES::IS_CONTENT_ITEM_LOCKED(Var6.f_0) && !__LIB_3__::func_348(Var6.f_2, Var6.f_3, (129 + iVar4))) && Var6.f_6 != joaat("hairOverlay")) && Var6.f_6 != joaat("torsoDecal"))
				{
					if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var6.f_2, Var6.f_3) == iParam3 && func_405(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &(Var6.f_7), Var6.f_6, iParam3, iParam4))
					{
						MISC::SET_BIT(uParam2[(iVar4 / 32)], (iVar4 % 32));
					}
				}
			}
			iVar4++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam1)[iVar0] = 0;
		bVar1 = false;
		while (bVar1 < 32)
		{
			iVar3 = __LIB_0__::func_416(iVar0, bVar1);
			if (__LIB_0__::func_445(&Var2, iVar3, iParam0, PLAYER::PLAYER_PED_ID(), -1))
			{
				if (((!func_395(iVar3, iParam0) && !func_394(iVar3, iParam0)) && Var2.f_8 != joaat("hairOverlay")) && Var2.f_8 != joaat("torsoDecal"))
				{
					if (func_392(Var2.f_11) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_3() == 0))
					{
						if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var2.f_4, Var2.f_5) == iParam3 && func_405(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var2, Var2.f_8, iParam3, iParam4))
						{
							MISC::SET_BIT(uParam1[iVar0], bVar1);
						}
					}
				}
			}
			bVar1++;
		}
		iVar0++;
	}
}

int func_599()//Position - 0x62DCF
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = __LIB_0__::func_276(PLAYER::PLAYER_PED_ID());
	iVar0 = 0;
	while (iVar0 < 71)
	{
		if (__LIB_0__::func_445(&sVar1, iVar0, iVar2, PLAYER::PLAYER_PED_ID(), -1))
		{
			if (func_392(iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_600(int iParam0, int iParam1)//Position - 0x62E14
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar3 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		iVar4 = __LIB_0__::func_276(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar4);
			iVar6 = 0;
			while (iVar6 < iVar7)
			{
				if ((FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar4, iVar6, &Var8) && Var8.f_6 != joaat("hairOverlay")) && Var8.f_6 != joaat("torsoDecal"))
				{
					if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
					{
						if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var8.f_2, Var8.f_3) == iParam0 && func_405(iVar3, &(Var8.f_7), Var8.f_6, iParam0, iParam1))
						{
							iVar9 = (129 + iVar6);
							if (((!__LIB_3__::func_348(Var8.f_2, Var8.f_3, iVar9) && !func_395(iVar9, iVar4)) && func_394(iVar9, iVar4)) && func_334(iVar9, &(Var8.f_7), iParam0, iParam1))
							{
								return 1;
							}
						}
					}
				}
				iVar6++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			bVar1 = false;
			while (bVar1 < 32)
			{
				iVar5 = __LIB_0__::func_416(iVar0, bVar1);
				if (__LIB_0__::func_445(&Var2, __LIB_0__::func_416(iVar0, bVar1), iVar4, PLAYER::PLAYER_PED_ID(), -1))
				{
					if (((!func_395(iVar5, iVar4) && !func_394(iVar5, iVar4)) && Var2.f_8 != joaat("hairOverlay")) && Var2.f_8 != joaat("torsoDecal"))
					{
						if (func_392(Var2.f_11) && func_334(Var2.f_11, &Var2, iParam0, iParam1))
						{
							if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var2.f_4, Var2.f_5) == iParam0 && func_405(iVar3, &Var2, Var2.f_8, iParam0, iParam1))
							{
								return 1;
							}
						}
					}
				}
				bVar1++;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_608(var uParam0, float fParam1)//Position - 0x6374A
{
	struct<3> Var0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!Global_78319)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family1")) == 0)
			{
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Var0, 50f);
				if (__LIB_0__::func_328(*uParam0) != 3)
				{
					MISC::CLEAR_AREA_OF_OBJECTS(Var0, fParam1, 0);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 5f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Var0, 1.5f, 1);
			}
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		}
	}
	CAM::SET_WIDESCREEN_BORDERS(true, -1);
	WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
	Global_2726719 = 0;
	HUD::THEFEED_FLUSH_QUEUE();
	Global_102575 = 1;
	__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
}

void func_624(bool bParam0)//Position - 0x64301
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 506591/*func_714*/;
	}
	else
	{
		iVar0 = 496266/*func_695*/;
	}
	if (__LIB_14__::func_404(1))
	{
		Global_100493.f_1554 = 1;
		iVar1 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2) && !PED::IS_PED_INJURED(Local_71.f_2))
		{
			iVar1 = Local_71.f_2;
		}
		switch (ENTITY::GET_ENTITY_MODEL(iVar1))
		{
			case joaat("Player_Zero"):
				func_695(iVar1, 3, 169, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				if (!__LIB_0__::func_512(iVar1))
				{
					func_695(iVar1, 4, 72, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				func_695(iVar1, 6, 6, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 5, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 10, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 11, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_39__::func_742(iVar1, &iVar0);
				PED::REMOVE_PED_HELMET(iVar1, true);
				break;
			case joaat("Player_One"):
				func_695(iVar1, 3, 260, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				if (!__LIB_0__::func_512(iVar1))
				{
					func_695(iVar1, 4, 72, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				func_695(iVar1, 6, 17, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 5, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 10, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 11, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_39__::func_742(iVar1, &iVar0);
				PED::REMOVE_PED_HELMET(iVar1, true);
				break;
			case joaat("Player_Two"):
				func_695(iVar1, 3, 96, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				if (!__LIB_0__::func_512(iVar1))
				{
					func_695(iVar1, 4, 81, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				func_695(iVar1, 6, 8, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 5, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 10, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_695(iVar1, 11, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_39__::func_742(iVar1, &iVar0);
				PED::REMOVE_PED_HELMET(iVar1, true);
				break;
			case joaat("MP_M_Freemode_01"):
				if (bParam0)
				{
					Local_70.f_565 = __LIB_0__::func_662();
				}
				if (((Local_70.f_498 == 13 || Local_70.f_498 == 14) || Local_70.f_498 == 15) || Local_70.f_498 == 16)
				{
					func_625(iVar1, &(Local_70.f_499), 0, 0, 1, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 11, 15, 0, 0);
					if (PED::GET_PED_DRAWABLE_VARIATION(iVar1, 3) != 15)
					{
						PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 15, 0, 0);
					}
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 15, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 9, 0, 0, 0);
				}
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 5, 0, 0, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iVar1, 6) != 5)
				{
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 6, 5, 0, 0);
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iVar1, 4) != 14)
				{
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 14, 0, 0);
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iVar1, 7) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 7, 0, 0, 0);
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iVar1, 1) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 1, 0, 0, 0);
				}
				PED::CLEAR_ALL_PED_PROPS(iVar1);
				__LIB_39__::func_742(iVar1, &iVar0);
				if (__LIB_0__::func_351(161, -1))
				{
					func_714(iVar1, 2, __LIB_0__::func_369(2053, -1, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_714(iVar1, 2, __LIB_0__::func_369(753, -1, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;
			case joaat("MP_F_Freemode_01"):
				if (bParam0)
				{
					Local_70.f_565 = __LIB_0__::func_662();
				}
				if (((Local_70.f_498 == 13 || Local_70.f_498 == 14) || Local_70.f_498 == 15) || Local_70.f_498 == 16)
				{
					func_625(iVar1, &(Local_70.f_499), 0, 0, 1, 0);
				}
				else
				{
					func_714(iVar1, 11, 240, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					func_714(iVar1, 3, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					func_714(iVar1, 8, 120, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					func_714(iVar1, 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				func_714(iVar1, 10, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_714(iVar1, 5, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_714(iVar1, 4, 240, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_714(iVar1, 6, 80, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_714(iVar1, 7, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_714(iVar1, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				PED::CLEAR_ALL_PED_PROPS(iVar1);
				__LIB_39__::func_742(iVar1, &iVar0);
				if (__LIB_0__::func_351(161, -1))
				{
					func_714(iVar1, 2, __LIB_0__::func_369(2053, -1, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_714(iVar1, 2, __LIB_0__::func_369(753, -1, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 1, true);
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 0, true);
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 4, true);
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 5, true);
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 2, true);
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 3, true);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iVar1, 0, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iVar1, 4, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iVar1, 5, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iVar1, 2, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iVar1, 3, "ALL");
				__LIB_3__::func_346(MISC::GET_HASH_KEY("torsoDecal"), iVar1);
			}
		}
	}
}

void func_625(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x6491B
{
	bool bVar0;
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
		bVar0 = __LIB_13__::func_716(iParam0);
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
		if (__LIB_0__::func_374(bVar0))
		{
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_689(iParam0, iVar1, &iVar2, 0))
			{
				func_695(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_630(iParam0, iVar1, &iVar2))
			{
				func_695(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_61(iParam0);
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
			func_714(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_714(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_714(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_630(int iParam0, int iParam1, int iParam2)//Position - 0x65CAA
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_631(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_631(int iParam0, int iParam1, int iParam2)//Position - 0x65D36
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
				if (!func_631(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_631(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_631(iParam0, 14, iVar4))
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
			if (!func_631(iParam0, 14, uVar8[iVar7]))
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

int func_689(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x78B92
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_631(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_695(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x7928A
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
										func_695(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_695(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_699(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_689(iParam0, iVar10, &iVar4, 1))
							{
								func_695(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_695(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_695(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_695(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_695(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_695(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_695(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_695(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_695(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_695(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_689(iParam0, iVar10, &iVar4, 0))
		{
			func_695(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_630(iParam0, iVar10, &iVar4))
		{
			func_695(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_699(int iParam0, int iParam1, int iParam2)//Position - 0x79C2A
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
				if (func_631(iParam0, iParam1, iVar0))
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
				if (func_631(iParam0, iParam1, iVar1))
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

int func_714(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x7BADF
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
			func_770(iVar5, iParam1, iParam2, 1);
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
						func_770(iVar5, 10, 0, 1);
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
									func_770(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_714(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_770(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_66(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_714(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_259(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_770(iVar5, 14, uVar18[iVar1], 1);
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
							func_714(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_770(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_714(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_762(iParam0);
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
						func_714(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_714(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_761(iVar5, iVar24, iVar23, iVar25);
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
							func_714(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_714(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_714(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_714(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_714(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_714(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_714(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_259(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_761(iVar5, func_66(iParam0, 8, -1), iParam2, func_66(iParam0, 4, -1));
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
				func_751(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_761(iVar5, iParam2, iVar44, iVar45);
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
			func_259(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_761(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_714(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_714(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_761(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_761(iVar5, iVar58, iVar57, iParam2);
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
						func_714(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_761(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_714(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_75(iParam0, 9, iVar63))
						{
							func_714(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_714(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_714(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_714(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_66(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_66(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_714(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_714(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_714(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_714(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_714(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_714(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_714(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_714(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_714(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_714(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_762(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_714(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_714(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_715(iParam0, &uVar4))
		{
			func_714(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_714(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_714(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_714(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_66(iParam0, 3, -1), iVar10);
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
				func_714(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_715(int iParam0, var uParam1)//Position - 0x7D98A
{
	int iVar0;
	int iVar1;
	*uParam1 = func_66(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_75(iParam0, iVar1, iVar0))
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

void func_751(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x88213
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
	func_752(iParam0, bParam3, 0, -1);
}

void func_752(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x88260
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
		bVar3 = func_150(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_141(iParam0, iParam3);
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

int func_761(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8EF45
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
					iVar0 = func_761(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_761(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_762(int iParam0)//Position - 0x90281
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
		if (!func_767(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_767(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_767(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x90C4B
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_66(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_770(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x93565
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
							func_770(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_770(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_770(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_770(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_770(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_770(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_770(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_770(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_770(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_770(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_772()//Position - 0x9487C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_773()//Position - 0x9489E
{
	if (Global_78319)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_71.f_2))
			{
				if (iLocal_180 == -1)
				{
					iLocal_180 = MISC::GET_GAME_TIMER();
				}
				Local_71.f_0 = 1;
				Local_71.f_1 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
				STREAMING::REQUEST_MODEL(Local_71.f_1);
				if (STREAMING::HAS_MODEL_LOADED(Local_71.f_1))
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) || (MISC::GET_GAME_TIMER() - iLocal_180) > 5000)
					{
						Local_71.f_2 = PED::CLONE_PED(PLAYER::PLAYER_PED_ID(), false, false, false);
						Global_4538723 = Local_71.f_2;
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_71.f_2, Local_70.f_184.f_31, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_71.f_2, Local_70.f_184.f_34);
						ENTITY::SET_ENTITY_COLLISION(Local_71.f_2, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_71.f_2, true);
						ENTITY::SET_ENTITY_VISIBLE(Local_71.f_2, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_71.f_2, false, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_71.f_2, true);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_71.f_2, func_775(Global_1853348[PLAYER::PLAYER_ID() /*834*/]), 0);
						PED::MARK_PED_DECORATIONS_AS_CLONED_FROM_LOCAL_PLAYER(Local_71.f_2, true);
						PED::RESET_PED_VISIBLE_DAMAGE(Local_71.f_2);
						if (__LIB_16__::func_493(Local_70.f_0))
						{
							PED::SET_PED_LEG_IK_MODE(Local_71.f_2, 0);
						}
						func_624(1);
						func_50(&(Local_71.f_2), -1, 0, 0);
					}
				}
				return 0;
			}
			if (!PED::IS_PED_INJURED(Local_71.f_2))
			{
				if (!PED::HAS_PED_HEAD_BLEND_FINISHED(Local_71.f_2) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_71.f_2))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_775(int iParam0)//Position - 0x94A9B
{
	switch (iParam0)
	{
		case 1:
			return __LIB_1__::func_94(__LIB_0__::func_369(1275, -1, 0));
			break;
		case 2:
			return __LIB_1__::func_94(__LIB_0__::func_369(1274, -1, 0));
			break;
		default:
			return __LIB_1__::func_94(__LIB_0__::func_369(1273, -1, 0));
			break;
	}
	return "";
}

void func_850()//Position - 0x967FF
{
	if (__LIB_14__::func_404(1))
	{
		__LIB_42__::func_692(&Local_70);
		if (!Local_70.f_8)
		{
			if (Local_70.f_3 != -1)
			{
				__LIB_3__::func_122(&(Local_70.f_3));
			}
			__LIB_13__::func_617();
		}
		if (!Local_70.f_7)
		{
			Local_70.f_11 = 1;
		}
	}
}

void func_851()//Position - 0x9683E
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar2 = false;
	bVar3 = false;
	if (__LIB_9__::func_354(1))
	{
		if (Local_70.f_116 == -1)
		{
			Local_70.f_116 = Global_2714762.f_785.f_39;
			func_883(Local_70.f_0, &(Local_70.f_184));
		}
	}
	if (__LIB_14__::func_404(1))
	{
		if (__LIB_9__::func_354(1) || (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_100493.f_1458) && __LIB_39__::func_755(Local_70.f_0, 1, 0, -1)) && !__LIB_39__::func_743(Local_70.f_0)))
		{
			if (Local_70.f_116 == -1)
			{
				func_883(Local_70.f_0, &(Local_70.f_184));
				Local_70.f_116 = 0;
			}
			if (__LIB_15__::func_111(-1))
			{
				bVar0 = true;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_70.f_184.f_13[0 /*3*/], Local_70.f_184.f_13[1 /*3*/], Local_70.f_184.f_26[0], false, true, 1) || __LIB_9__::func_354(1))
			{
				func_866();
				bVar2 = true;
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_2__::func_821(PLAYER::PLAYER_ID()))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_3__::func_56("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_12__::func_769(Local_70.f_0, 0, 0)))
				{
					bVar1 = true;
				}
			}
		}
	}
	if (bVar0)
	{
		__LIB_14__::func_962("SHOP_COPS" /* GXT: Lose the Cops. */);
	}
	else if (bVar1)
	{
		if (!__LIB_0__::func_927(PLAYER::PLAYER_ID()) && !func_897(Local_70.f_0))
		{
			__LIB_15__::func_19("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_12__::func_769(Local_70.f_0, 0, 0));
		}
	}
	else if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_3__::func_56("SHOP_NONE" /* GXT: ~a~ is unavailable. */, __LIB_12__::func_769(Local_70.f_0, 0, 0)))
		{
			__LIB_15__::func_19("SHOP_JUGG_NONE" /* GXT: ~a~ is unavailable while wearing the Ballistic Equipment. */, __LIB_12__::func_769(Local_70.f_0, 0, 0));
		}
	}
	else if (bVar2)
	{
		bVar3 = true;
		if (Local_70.f_0 == 54 && !__LIB_39__::func_738(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_0__::func_1("CMM_HT_TAT" /* GXT: Purchase a Membership from Mimi ~BLIP_CAR_MEET_ORGANISER~ to use the Tattoo Shop ~BLIP_TATTOO~ */))
			{
				__LIB_0__::func_190("CMM_HT_TAT" /* GXT: Purchase a Membership from Mimi ~BLIP_CAR_MEET_ORGANISER~ to use the Tattoo Shop ~BLIP_TATTOO~ */);
			}
		}
		else
		{
			if (Local_70.f_3 == -1)
			{
				__LIB_5__::func_569(&(Local_70.f_3), 3, "TAT_TRY_TAT" /* GXT: Press ~a~ to browse tattoos. */, 0, 0, 0, 0);
			}
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
			if (__LIB_3__::func_113(Local_70.f_3, 1) || __LIB_9__::func_354(1))
			{
				Local_70.f_11 = 4;
				Local_70.f_116.f_31 = 0;
				if (Local_70.f_0 == 54)
				{
					AUDIO::START_AUDIO_SCENE("Ls_Car_Meet_Tattoo_Shop_Scene");
				}
				iLocal_180 = -1;
				func_913(&Local_70, &(Local_70.f_116));
				func_852();
				Local_70.f_498 = -1;
				bVar3 = false;
			}
		}
	}
	else if (!bVar2)
	{
		if (Local_70.f_0 == 54)
		{
			if (__LIB_0__::func_1("CMM_HT_TAT" /* GXT: Purchase a Membership from Mimi ~BLIP_CAR_MEET_ORGANISER~ to use the Tattoo Shop ~BLIP_TATTOO~ */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	if (!bVar3)
	{
		if (Local_70.f_3 != -1)
		{
			__LIB_3__::func_122(&(Local_70.f_3));
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		}
	}
}

void func_852()//Position - 0x96ADB
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_37__::func_200(PLAYER::PLAYER_PED_ID(), &(Local_70.f_499), 1, -1);
		Local_70.f_564 = 1;
	}
}

void func_866()//Position - 0x9770B
{
	int iVar0;
	if (__LIB_14__::func_404(1) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2) && !PED::IS_PED_INJURED(Local_71.f_2))
		{
			iVar0 = Local_71.f_2;
		}
		switch (ENTITY::GET_ENTITY_MODEL(iVar0))
		{
			case joaat("Player_Zero"):
				__LIB_17__::func_622(iVar0, 3, 169);
				if (!__LIB_0__::func_512(iVar0))
				{
					__LIB_17__::func_622(iVar0, 4, 72);
				}
				__LIB_17__::func_622(iVar0, 6, 6);
				__LIB_17__::func_622(iVar0, 5, 0);
				__LIB_17__::func_622(iVar0, 8, 0);
				__LIB_17__::func_622(iVar0, 9, 0);
				__LIB_17__::func_622(iVar0, 10, 0);
				__LIB_17__::func_622(iVar0, 11, 0);
				break;
			case joaat("Player_One"):
				__LIB_17__::func_622(iVar0, 3, 260);
				if (!__LIB_0__::func_512(iVar0))
				{
					__LIB_17__::func_622(iVar0, 4, 72);
				}
				__LIB_17__::func_622(iVar0, 6, 17);
				__LIB_17__::func_622(iVar0, 5, 0);
				__LIB_17__::func_622(iVar0, 8, 26);
				__LIB_17__::func_622(iVar0, 9, 0);
				__LIB_17__::func_622(iVar0, 10, 0);
				__LIB_17__::func_622(iVar0, 11, 0);
				break;
			case joaat("Player_Two"):
				__LIB_17__::func_622(iVar0, 3, 96);
				if (!__LIB_0__::func_512(iVar0))
				{
					__LIB_17__::func_622(iVar0, 4, 81);
				}
				__LIB_17__::func_622(iVar0, 6, 8);
				__LIB_17__::func_622(iVar0, 5, 0);
				__LIB_17__::func_622(iVar0, 8, 15);
				__LIB_17__::func_622(iVar0, 9, 0);
				__LIB_17__::func_622(iVar0, 10, 0);
				__LIB_17__::func_622(iVar0, 11, 0);
				break;
			}
	}
}

void func_883(int iParam0, var uParam1)//Position - 0x9937E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	uParam1->f_1 = { 0f, 0f, 0f };
	uParam1->f_31 = { 0f, 0f, 0f };
	uParam1->f_34 = 0f;
	uParam1->f_35 = { 0f, 0f, 0f };
	uParam1->f_38 = 0f;
	iVar0 = MISC::GET_HASH_KEY("v_tattoo");
	iVar1 = MISC::GET_HASH_KEY("v_tattoo2");
	iVar2 = MISC::GET_HASH_KEY("tr_tuner_car_meet");
	iVar3 = MISC::GET_HASH_KEY(__LIB_3__::func_285(iParam0));
	if (iVar3 == iVar0)
	{
		*uParam1 = 7;
		uParam1->f_13[0 /*3*/] = { 325.2891f, 182.55606f, 102.59211f };
		uParam1->f_13[1 /*3*/] = { 323.91092f, 177.91544f, 104.58653f };
		uParam1->f_26[0] = 4.55f;
		uParam1->f_31 = { 323.5805f, 179.8582f, 103.5915f };
		uParam1->f_34 = 78.9718f;
		uParam1->f_35 = { 323.0614f, 180.4159f, 103.5915f };
		uParam1->f_38 = 42.4545f;
		uParam1->f_39 = { 319.7213f, 176.2593f, 103.5915f };
	}
	else if (iVar3 == iVar1)
	{
		*uParam1 = 7;
		uParam1->f_13[0 /*3*/] = { 1866.5374f, 3747.879f, 32.031864f };
		uParam1->f_13[1 /*3*/] = { 1862.8899f, 3745.7898f, 34.06118f };
		uParam1->f_26[0] = 4.55f;
		uParam1->f_31 = { 1864.3986f, 3747.7668f, 33.0364f };
		uParam1->f_34 = 27.5523f;
		uParam1->f_35 = { 1863.972f, 3748.1902f, 33.0364f };
		uParam1->f_38 = 350.0413f;
		uParam1->f_39 = { 1857.3545f, 3747.635f, 33.0364f };
	}
	else if (iVar3 == iVar2)
	{
		*uParam1 = 7;
		uParam1->f_13[0 /*3*/] = { -2159.901f, 1075.2125f, -25.361736f };
		uParam1->f_13[1 /*3*/] = { -2164.27f, 1075.1278f, -23.361595f };
		uParam1->f_26[0] = 3.5f;
		uParam1->f_31 = { -2160.2385f, 1075.0209f, -24.3617f };
		uParam1->f_34 = 0f;
		uParam1->f_35 = { -2160.2385f, 1075.0209f, -24.3617f };
		uParam1->f_38 = 0f;
		uParam1->f_39 = { -2160.2385f, 1075.0209f, -24.3617f };
	}
	if (iVar3 == iVar0)
	{
		iVar4 = 22;
	}
	else if (iVar3 == iVar1)
	{
		iVar4 = 23;
	}
	else if (iVar3 == iVar2)
	{
		iVar4 = 54;
	}
	__LIB_15__::func_119(iVar4, iParam0, &(uParam1->f_13[0 /*3*/]));
	__LIB_15__::func_119(iVar4, iParam0, &(uParam1->f_13[1 /*3*/]));
	__LIB_15__::func_119(iVar4, iParam0, &(uParam1->f_31));
	__LIB_15__::func_119(iVar4, iParam0, &(uParam1->f_35));
	__LIB_15__::func_119(iVar4, iParam0, &(uParam1->f_39));
	__LIB_15__::func_124(iVar4, iParam0, &(uParam1->f_34));
	__LIB_15__::func_124(iVar4, iParam0, &(uParam1->f_38));
}

void func_889()//Position - 0x9A695
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	if ((!PED::IS_PED_INJURED(Local_70.f_12) && __LIB_14__::func_404(1)) && __LIB_16__::func_422(0))
	{
		if (Local_70.f_7)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!PED::IS_PED_HEADTRACKING_PED(Local_70.f_12, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_70.f_12, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
				}
				if (!PED::IS_PED_RAGDOLL(Local_70.f_12) && !TASK::IS_PED_GETTING_UP(Local_70.f_12))
				{
					if (!PED::IS_PED_FACING_PED(Local_70.f_12, PLAYER::PLAYER_PED_ID(), 120f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_70.f_12, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_70.f_12, PLAYER::PLAYER_PED_ID(), 0);
						}
					}
				}
			}
			else
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
				if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_2) && !PED::IS_PED_INJURED(Local_71.f_2))
				{
					iVar0 = Local_71.f_2;
				}
				if (func_897(Local_70.f_0))
				{
					iVar1 = PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(Local_70.f_12));
					if (iVar1 == __LIB_0__::getMinusOneOrNull())
					{
						return;
					}
					bVar2 = false;
					iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
					if (__LIB_0__::func_121(iVar0))
					{
						if (__LIB_0__::func_687(Local_70.f_12, iVar0, 5f, 1))
						{
							Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_70.f_12) };
							Var4 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(iVar0, true) - ENTITY::GET_ENTITY_COORDS(Local_70.f_12, true)) };
							if (__LIB_0__::func_158(Var3, Var4) > 0.1f)
							{
								bVar2 = true;
							}
						}
						if (bVar2)
						{
							if (!PED::IS_PED_HEADTRACKING_ENTITY(Local_70.f_12, iVar0))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_70.f_12, iVar0, -1, 0, 4);
							}
						}
						else if (PED::IS_PED_HEADTRACKING_ENTITY(Local_70.f_12, iVar0))
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_70.f_12);
						}
					}
				}
				else if (!PED::IS_PED_HEADTRACKING_PED(Local_70.f_12, iVar0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_70.f_12, iVar0, -1, 2048, 4);
				}
				if ((!func_897(Local_70.f_0) && !PED::IS_PED_RAGDOLL(Local_70.f_12)) && !TASK::IS_PED_GETTING_UP(Local_70.f_12))
				{
					if (!PED::IS_PED_FACING_PED(Local_70.f_12, iVar0, 130f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_70.f_12, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_70.f_12, iVar0, 0);
						}
					}
					else
					{
						Var5 = { ENTITY::GET_ENTITY_COORDS(Local_70.f_12, true) };
						Var6 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
						fVar7 = MISC::GET_HEADING_FROM_VECTOR_2D((Var6.f_0 - Var5.f_0), (Var6.f_1 - Var5.f_1));
						if (!PED::IS_PED_FACING_PED(Local_70.f_12, iVar0, 180f))
						{
							ENTITY::SET_ENTITY_HEADING(Local_70.f_12, fVar7);
						}
					}
				}
			}
		}
	}
}

void func_894(int iParam0, struct<3> Param1)//Position - 0x9A984
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_12, true), Param1, true) > 5f)
		{
			__LIB_39__::func_744(*iParam0, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_12));
		}
	}
}

Vector3 func_896(int iParam0, int iParam1)//Position - 0x9A9F5
{
	struct<3> Var0;
	if (iParam0 == 22)
	{
		Var0 = { 319.62f, 181.52f, 103.59f };
	}
	else
	{
		Var0 = { 1863.19f, 3747.52f, 33.03f };
	}
	__LIB_15__::func_119(iParam0, iParam1, &Var0);
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
	return Var0;
}

int func_897(int iParam0)//Position - 0x9AA4A
{
	switch (iParam0)
	{
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
			return 0;
		case 54:
			return 1;
		default:
	}
	return 0;
}

void func_913(int iParam0, var uParam1)//Position - 0x9B417
{
	if (iParam0->f_9)
	{
		if (iParam0->f_11 == 4 || (iParam0->f_11 == 2 && uParam1->f_5 > 1))
		{
			__LIB_39__::func_746(*iParam0, 1);
			__LIB_39__::func_740(*iParam0, 1);
			__LIB_0__::func_55();
		}
		else
		{
			__LIB_39__::func_745(*iParam0, 0);
			__LIB_39__::func_740(*iParam0, 0);
		}
	}
}

void func_917()//Position - 0x9B51B
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	if ((__LIB_0__::func_134() || __LIB_17__::func_598(Local_70.f_0)) || !func_939(&Local_70))
	{
		return;
	}
	if (Local_70.f_105)
	{
		if (__LIB_14__::func_404(1))
		{
			if (Local_70.f_116.f_5 > 0)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				__LIB_1__::func_33(0);
				if (Local_70.f_116.f_5 < 5)
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						if (__LIB_14__::func_445())
						{
							StringCopy(&(Local_70.f_116.f_11), "", 16);
							iLocal_181 = 0;
							__LIB_13__::func_617();
							HUD::CLEAR_HELP(true);
							CAM::DO_SCREEN_FADE_OUT(500);
							Local_70.f_116.f_9 = MISC::GET_GAME_TIMER();
							Local_70.f_116.f_5 = 4;
						}
					}
				}
			}
			if ((Local_70.f_116.f_5 >= 1 && Local_70.f_116.f_5 < 4) && __LIB_14__::func_403(Local_70.f_0, 0))
			{
				__LIB_14__::func_409(Local_70.f_0, &(Local_70.f_116.f_11), 0);
			}
			switch (Local_70.f_116.f_5)
			{
				case 0:
					STREAMING::REQUEST_MODEL(joaat("v_ilev_ta_tatgun"));
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_ta_tatgun")))
					{
						__LIB_13__::func_768(Local_70.f_0, 20, 1);
						if (iLocal_69 == 22)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
							{
								iVar0 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_ta_tatgun"), func_934(iLocal_69, Local_70.f_0), true, true, false);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_ta_tatgun"));
							}
						}
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
						Local_70.f_155.f_28 = 0;
						func_932(iLocal_69, Local_70.f_0, &(Local_70.f_155));
						func_883(Local_70.f_0, &(Local_70.f_184));
						if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_70.f_184.f_13[0 /*3*/], 8f) && !Global_78319)
						{
							__LIB_16__::func_529(&Local_70);
						}
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(func_931(iLocal_69, Local_70.f_0), 20f, func_930(iLocal_69), false))
						{
							OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(func_930(iLocal_69), func_931(iLocal_69, Local_70.f_0), &uVar2, &uVar1);
						}
						MISC::CLEAR_AREA_OF_PEDS(Local_179, 4f, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_179, 50f, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
						if (iLocal_69 != 22)
						{
							Local_179.f_2 = (Local_179.f_2 - 0.032f);
						}
						iLocal_161 = PED::CREATE_SYNCHRONIZED_SCENE(Local_179, Local_178, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_161, false);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_161, sLocal_155, func_929(iLocal_69), 1000f, -1f, 0, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(func_931(iLocal_69, Local_70.f_0), 5f, func_930(iLocal_69), iLocal_161, func_928(iLocal_69), sLocal_155, 1000f, -8f, 0, 1000f);
						iLocal_160 = PED::CREATE_SYNCHRONIZED_SCENE(Local_179, Local_178, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_160, false);
						if (ENTITY::DOES_ENTITY_EXIST(Local_70.f_43))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_70.f_43, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_70.f_43, iLocal_160, sLocal_156, func_927(iLocal_69), 1000f, -1000f, 0, 0, 1000f, 0);
								ENTITY::FREEZE_ENTITY_POSITION(Local_70.f_43, false);
								ENTITY::SET_ENTITY_PROOFS(Local_70.f_43, true, true, true, true, true, false, false, false);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_70.f_12))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_70.f_12, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_70.f_12, iLocal_160, sLocal_156, func_926(iLocal_69), 1000f, -1f, 0, 0, 1000f, 0);
								if (iLocal_69 == 22)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar0))
									{
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iVar0, iLocal_160, func_925(iLocal_69), sLocal_156, 1000f, -2f, 0, 1000f);
										ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iVar0);
									}
								}
							}
						}
						if (!CAM::DOES_CAM_EXIST(Local_70.f_155.f_10))
						{
							Local_70.f_155.f_10 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						}
						CAM::SET_CAM_ACTIVE(Local_70.f_155.f_10, true);
						if (iLocal_69 == 22)
						{
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(Local_70.f_155.f_10, iLocal_161, "shop_ig_4_b_cam", sLocal_155);
						}
						else
						{
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(Local_70.f_155.f_10, iLocal_161, "shop_ig_5_b_cam", sLocal_155);
						}
						INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(Local_70.f_4);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						func_608(&Local_70, 1f);
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_TATTOO_APPLIED", "SPEECH_PARAMS_FORCE", 1);
						Local_140.f_19 = 1;
						StringCopy(&(Local_70.f_116.f_11), "SHOP_INTRO" /* GXT: Welcome to ~a~. */, 16);
						iLocal_181 = 0;
						Local_70.f_116.f_9 = MISC::GET_GAME_TIMER();
						Local_70.f_116.f_5++;
					}
					break;
				case 1:
					if ((MISC::GET_GAME_TIMER() - Local_70.f_116.f_9) >= 5750)
					{
						if (!PED::IS_PED_INJURED(Local_70.f_43))
						{
							__LIB_0__::func_640(Local_70.f_43, "GENERIC_THANKS", 24);
						}
						StringCopy(&(Local_70.f_116.f_11), "TAT_INTRO_0" /* GXT: Take a seat and choose the tattoo that is right for you. */, 16);
						iLocal_181 = 0;
						Local_70.f_116.f_9 = MISC::GET_GAME_TIMER();
						Local_70.f_116.f_5++;
					}
					break;
				case 2:
					if ((MISC::GET_GAME_TIMER() - Local_70.f_116.f_9) >= 5750)
					{
						if (!PED::IS_PED_INJURED(Local_70.f_12))
						{
							__LIB_0__::func_640(Local_70.f_12, "GENERIC_BYE", 24);
						}
						ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(func_931(iLocal_69, Local_70.f_0), 5f, func_930(iLocal_69), -1000f);
						ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(func_931(iLocal_69, Local_70.f_0), 5f, func_930(iLocal_69), iLocal_160, func_922(iLocal_69), sLocal_156, 1000f, -8f, 0, 1000f);
						StringCopy(&(Local_70.f_116.f_11), "TAT_INTRO_1" /* GXT: Choose a design to suit your style and budget. */, 16);
						iLocal_181 = 0;
						Local_70.f_116.f_9 = MISC::GET_GAME_TIMER();
						Local_70.f_116.f_5++;
					}
					break;
				case 3:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_161))
					{
						Local_70.f_116.f_5 = 5;
					}
					if (iLocal_69 == 22)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_161) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_161) >= 0.62f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_70.f_12, 4000, 0, 2);
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							}
						}
					}
					else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_161) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_161) >= 0.877f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_160))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_160) >= 0.955f)
						{
							ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(func_931(iLocal_69, Local_70.f_0), 5f, func_930(iLocal_69), -1000f);
							if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(func_931(iLocal_69, Local_70.f_0), 20f, func_930(iLocal_69), false))
							{
								OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(func_930(iLocal_69), func_931(iLocal_69, Local_70.f_0), false, 0f, false);
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_160) >= 0.9f)
						{
							if (!iLocal_162)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_70.f_12, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
								{
									TASK::CLEAR_PED_TASKS(Local_70.f_12);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_70.f_12, false, false);
									if (__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()) || (__LIB_0__::func_512(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_GREET_UNUSUAL", "SPEECH_PARAMS_FORCE", 1);
									}
									else if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("Player_Zero")) && (func_631(PLAYER::PLAYER_PED_ID(), 12, 8) || func_631(PLAYER::PLAYER_PED_ID(), 12, 28)))
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "KIFFLOM_GREET", "SPEECH_PARAMS_FORCE", 1);
									}
									else
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_GREET", "SPEECH_PARAMS_FORCE", 1);
									}
									iLocal_162 = 1;
								}
							}
						}
					}
					break;
				case 4:
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(func_931(iLocal_69, Local_70.f_0), 5f, func_930(iLocal_69), -1000f);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(func_931(iLocal_69, Local_70.f_0), 20f, func_930(iLocal_69), false))
						{
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(func_930(iLocal_69), func_931(iLocal_69, Local_70.f_0), false, 0f, false);
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_161))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_161, sLocal_155, func_929(iLocal_69), 1000f, -1000f, 0, 0, 1000f, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_161, 1f);
						}
						if (!PED::IS_PED_INJURED(Local_70.f_12))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_160))
							{
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_160, 1f);
							}
						}
						Local_70.f_116.f_5++;
					}
					break;
				case 5:
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (CAM::DOES_CAM_EXIST(Local_70.f_155.f_10))
					{
						if (CAM::IS_CAM_ACTIVE(Local_70.f_155.f_10))
						{
							CAM::SET_CAM_ACTIVE(Local_70.f_155.f_10, false);
						}
						CAM::DESTROY_CAM(Local_70.f_155.f_10, false);
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					HUD::CLEAR_HELP(true);
					__LIB_15__::func_133(&(Local_70.f_116), 1, 1, 1, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_70.f_43) && !PED::IS_PED_INJURED(Local_70.f_43))
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_70.f_43, 1f);
						ENTITY::SET_ENTITY_PROOFS(Local_70.f_43, false, false, false, false, false, false, false, false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_70.f_43));
					}
					func_167();
					__LIB_13__::func_617();
					__LIB_14__::func_423(Local_70.f_0, 0);
					func_24();
					if (!CAM::IS_SCREEN_FADED_IN())
					{
						if (!CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
					}
					iVar3 = 0;
					while (iVar3 < 58)
					{
						if (__LIB_0__::func_328(iVar3) == 2)
						{
							__LIB_17__::func_233(iVar3, 1);
						}
						iVar3++;
					}
					Local_70.f_105 = 0;
					Local_140.f_19 = 0;
					break;
				}
		}
	}
	else
	{
		__LIB_13__::func_776(Local_70.f_0, 20, 1);
		__LIB_39__::func_747(Local_70.f_0, 1);
		Local_70.f_11 = 3;
	}
	__LIB_16__::func_382(&Local_140, 1);
}

char* func_922(int iParam0)//Position - 0x9BF54
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_door";
	}
	return "artist_finishes_up_his_tattoo_door";
}

char* func_925(int iParam0)//Position - 0x9C213
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_tattoogun";
	}
	return "shop_ig_4_tattoogun";
}

char* func_926(int iParam0)//Position - 0x9C232
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_tattooist";
	}
	return "artist_finishes_up_his_tattoo_artist";
}

char* func_927(int iParam0)//Position - 0x9C251
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_customer";
	}
	return "artist_finishes_up_his_tattoo_player";
}

char* func_928(int iParam0)//Position - 0x9C270
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_b_door";
	}
	return "shop_ig_5_b_door";
}

char* func_929(int iParam0)//Position - 0x9C28F
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_b_player";
	}
	return "shop_ig_5_b_player";
}

int func_930(int iParam0)//Position - 0x9C2AE
{
	if (iParam0 == 22)
	{
		return joaat("v_ilev_ta_door");
	}
	return joaat("v_ilev_ml_door1");
}

Vector3 func_931(int iParam0, int iParam1)//Position - 0x9C2CD
{
	struct<3> Var0;
	if (iParam0 == 22)
	{
		Var0 = { 321.81f, 178.36f, 103.68f };
	}
	else
	{
		Var0 = { 1859.89f, 3749.79f, 33.18f };
	}
	__LIB_15__::func_119(iParam0, iParam1, &Var0);
	return Var0;
}

void func_932(int iParam0, int iParam1, var uParam2)//Position - 0x9C313
{
	if (iParam0 == 22)
	{
		switch (uParam2->f_28)
		{
			case 0:
				uParam2->f_11[0 /*3*/] = { 320.0082f, 184.6191f, 106.4468f };
				uParam2->f_18[0 /*3*/] = { -35.1591f, 0.2702f, -156.5826f };
				uParam2->f_25[0] = 42.0858f;
				uParam2->f_11[1 /*3*/] = { 320.0082f, 184.6191f, 106.4468f };
				uParam2->f_18[1 /*3*/] = { -35.1591f, 0.2702f, -156.5826f };
				uParam2->f_25[1] = 42.0858f;
				break;
			case 1:
				uParam2->f_11[0 /*3*/] = { 323.3365f, 178.0721f, 104.0448f };
				uParam2->f_18[0 /*3*/] = { -11.8398f, 0f, -12.8859f };
				uParam2->f_25[0] = 41.6715f;
				uParam2->f_11[1 /*3*/] = { 323.4999f, 178.7863f, 103.8912f };
				uParam2->f_18[1 /*3*/] = { -11.8398f, 0f, -12.8859f };
				uParam2->f_25[1] = 41.6715f;
				break;
			case 2:
				uParam2->f_11[0 /*3*/] = { 323.8286f, 182.0626f, 104.6501f };
				uParam2->f_18[0 /*3*/] = { -18.0641f, 0.2702f, 102.4422f };
				uParam2->f_25[0] = 42.0858f;
				uParam2->f_11[1 /*3*/] = { 322.5048f, 181.7705f, 104.3379f };
				uParam2->f_18[1 /*3*/] = { -11.1765f, 0.2702f, 102.4422f };
				uParam2->f_25[1] = 42.0858f;
				break;
		}
	}
	else
	{
		switch (uParam2->f_28)
		{
			case 0:
				uParam2->f_11[0 /*3*/] = { 1864.0312f, 3752.0933f, 34.7299f };
				uParam2->f_18[0 /*3*/] = { -19.1933f, 0f, 157.3466f };
				uParam2->f_25[0] = 51.8344f;
				uParam2->f_11[1 /*3*/] = { 1864.0312f, 3752.0933f, 34.7299f };
				uParam2->f_18[1 /*3*/] = { -19.1933f, 0f, 157.3466f };
				uParam2->f_25[1] = 51.8344f;
				break;
			case 1:
				uParam2->f_11[0 /*3*/] = { 1865.221f, 3748.1377f, 33.4306f };
				uParam2->f_18[0 /*3*/] = { -17.1882f, 0f, 154.0068f };
				uParam2->f_25[0] = 39.4671f;
				uParam2->f_11[1 /*3*/] = { 1863.5363f, 3748.3088f, 33.3994f };
				uParam2->f_18[1 /*3*/] = { -17.1882f, 0f, -168.6809f };
				uParam2->f_25[1] = 39.4671f;
				break;
			case 2:
				uParam2->f_11[0 /*3*/] = { 1861.5219f, 3750.1453f, 33.34003f };
				uParam2->f_18[0 /*3*/] = { -0.962345f, 0f, -140.00893f };
				uParam2->f_25[0] = 39.4671f;
				uParam2->f_11[1 /*3*/] = { 1861.3131f, 3749.9758f, 33.34003f };
				uParam2->f_18[1 /*3*/] = { -0.962345f, 0f, -140.00893f };
				uParam2->f_25[1] = 39.4671f;
				break;
			}
	}
	__LIB_15__::func_119(iParam0, iParam1, &(uParam2->f_11[0 /*3*/]));
	__LIB_15__::func_128(iParam0, iParam1, &(uParam2->f_18[0 /*3*/]));
	__LIB_15__::func_119(iParam0, iParam1, &(uParam2->f_11[1 /*3*/]));
	__LIB_15__::func_128(iParam0, iParam1, &(uParam2->f_18[1 /*3*/]));
}

Vector3 func_934(int iParam0, int iParam1)//Position - 0x9C779
{
	struct<3> Var0;
	if (iParam0 == 22)
	{
		Var0 = { 324.17f, 182.28f, 103.4f };
	}
	else
	{
		Var0 = { 324.17f, 182.28f, 103.4f };
	}
	__LIB_15__::func_119(iParam0, iParam1, &Var0);
	return Var0;
}

int func_939(int iParam0)//Position - 0x9CA3F
{
	if ((iParam0->f_9 && !iParam0->f_1) && __LIB_0__::func_328(*iParam0) != 4)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_9__::func_334(-1082130432))
		{
			return 1;
		}
	}
	return 0;
}

void func_941()//Position - 0x9CAD9
{
	if (__LIB_14__::func_404(1))
	{
		__LIB_42__::func_692(&Local_70);
		if (Local_70.f_8 == 1)
		{
			if (!Global_78319 && !iLocal_139)
			{
				Global_113386.f_668.f_63++;
				iLocal_139 = 1;
			}
			Local_70.f_116 = -1;
			Local_70.f_11 = 2;
			Local_70.f_116.f_5 = 0;
		}
	}
}

void func_946()//Position - 0x9CCAA
{
	bool bVar0;
	char cVar1[16];
	switch (Local_70.f_116.f_5)
	{
		case 0:
			if (func_955(&Local_70, iLocal_68))
			{
				Local_70.f_116.f_5++;
			}
			else
			{
				func_21(0);
			}
			break;
		case 1:
			if (__LIB_0__::func_545(Local_70.f_0))
			{
				Local_70.f_116.f_5++;
			}
			break;
		case 2:
			if ((!__LIB_38__::func_708(Local_70.f_0) && !Global_78319) && !__LIB_0__::func_78(Local_70.f_43.f_2, 0f, 0f, 0f, 0))
			{
				Local_70.f_105 = 1;
			}
			else
			{
				Local_70.f_105 = 0;
			}
			if (Local_70.f_105 == 1)
			{
				if (!func_953() || !OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(func_952(iLocal_69, Local_70.f_0), 5f, joaat("v_ret_ta_stool"), false))
				{
					return;
				}
				OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(func_952(iLocal_69, Local_70.f_0), 5f, joaat("v_ret_ta_stool"), &Local_179, &Local_178, 2);
			}
			if (!__LIB_14__::func_311(iLocal_68) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!Local_70.f_12.f_26)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_70.f_12))
					{
						if ((PED::IS_PED_INJURED(Local_70.f_12) || PED::IS_PED_FLEEING(Local_70.f_12)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_70.f_12, true), Local_70.f_12.f_6, true) > 10f)
						{
							__LIB_13__::func_836("Marking previous shop keeper as no longer needed", -1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_70.f_12));
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_70.f_12))
					{
						PED::DELETE_PED(&(Local_70.f_12));
					}
				}
			}
			if (!Local_70.f_43.f_6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_70.f_43))
				{
					if ((PED::IS_PED_INJURED(Local_70.f_43) || PED::IS_PED_FLEEING(Local_70.f_43)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_70.f_43, true), Local_70.f_43.f_2, true) > 10f)
					{
						__LIB_13__::func_836("Marking previous shop customer as no longer needed", -1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_70.f_43));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_70.f_43))
				{
					PED::DELETE_PED(&(Local_70.f_43));
				}
			}
			if (Local_70.f_12.f_3 != 0)
			{
				STREAMING::REQUEST_MODEL(Local_70.f_12.f_3);
				Local_70.f_12.f_28 = 1;
			}
			if (Local_70.f_105)
			{
				if (Local_70.f_43.f_1 != 0)
				{
					STREAMING::REQUEST_MODEL(Local_70.f_43.f_1);
					Local_70.f_43.f_7 = 1;
				}
			}
			if ((Local_70.f_12.f_28 && !STREAMING::HAS_MODEL_LOADED(Local_70.f_12.f_3)) || (Local_70.f_43.f_7 && !STREAMING::HAS_MODEL_LOADED(Local_70.f_43.f_1)))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_70.f_12) && Local_70.f_12.f_28)
			{
				bVar0 = false;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if ((NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_0)) && !Local_66.f_1)
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
				if (!bVar0)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						__LIB_13__::func_836("Using net shop keeper..", -1);
						func_1011(&(Local_70.f_12));
						if (!Local_70.f_12.f_27)
						{
							__LIB_13__::func_836("Waiting for shop keeper to be initialised", -1);
							return;
						}
					}
				}
				else
				{
					__LIB_13__::func_836("Creating shop keeper", -1);
					MISC::CLEAR_AREA(Local_70.f_12.f_6, 2.5f, true, false, false, false);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (!__LIB_1__::func_672(&Local_66, 4, Local_70.f_12.f_3, Local_70.f_12.f_6, Local_70.f_12.f_15, 1, 1, 1))
						{
							return;
						}
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							Local_66.f_1 = 1;
						}
						func_1011(&(Local_70.f_12));
					}
					else
					{
						Local_70.f_12 = PED::CREATE_PED(5, Local_70.f_12.f_3, Local_70.f_12.f_6, Local_70.f_12.f_15, false, false);
					}
					if (__LIB_16__::func_422(0))
					{
						if (Local_70.f_0 == 22)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 10, 0, 1, 0);
						}
						else if (Local_70.f_0 == 23)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 10, 0, 0, 0);
						}
						else if (Local_70.f_0 == 24)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 10, 0, 1, 0);
						}
						else if (Local_70.f_0 == 25)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 10, 0, 1, 0);
						}
						else if (Local_70.f_0 == 26)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 10, 0, 1, 0);
						}
						else if (Local_70.f_0 == 54)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 5, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 10, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 11, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(Local_70.f_12, 0, 0, 0, false);
							PED::SET_PED_PROP_INDEX(Local_70.f_12, 1, 0, 0, false);
							PED::SET_PED_PROP_INDEX(Local_70.f_12, 2, 0, 0, false);
							PED::SET_PED_PROP_INDEX(Local_70.f_12, 6, 0, 0, false);
							PED::SET_PED_PROP_INDEX(Local_70.f_12, 7, 0, 0, false);
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_70.f_12, 10, 0, 0, 0);
						}
						if (__LIB_14__::func_289(Local_70.f_0))
						{
							INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_70.f_12, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_0__::func_785(Local_70.f_0, 0), __LIB_3__::func_285(Local_70.f_0)));
						}
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_70.f_12, true);
						ENTITY::SET_ENTITY_LOD_DIST(Local_70.f_12, 300);
						PED::SET_PED_LEG_IK_MODE(Local_70.f_12, 0);
						if (!iLocal_138)
						{
							StringCopy(&cVar1, "TATARTIST", 16);
							StringIntConCat(&cVar1, Local_70.f_0, 16);
							PED::ADD_RELATIONSHIP_GROUP(&cVar1, &iLocal_137);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_70.f_12, iLocal_137);
							iLocal_138 = 1;
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_70.f_12, true);
						PED::SET_PED_CONFIG_FLAG(Local_70.f_12, 185, true);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_70.f_12, false);
						PED::SET_PED_CAN_EVASIVE_DIVE(Local_70.f_12, false);
						PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(Local_70.f_12, true);
						if (func_897(Local_70.f_0))
						{
							NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(Local_70.f_12, true);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_70.f_12, false);
							PED::SET_PED_AS_ENEMY(Local_70.f_12, false);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_70.f_12, joaat("WEAPON_UNARMED"), true);
							PED::SET_PED_CAN_RAGDOLL(Local_70.f_12, false);
							PED::SET_PED_RESET_FLAG(Local_70.f_12, 249, true);
							PED::SET_PED_CONFIG_FLAG(Local_70.f_12, 108, true);
							PED::SET_PED_CONFIG_FLAG(Local_70.f_12, 106, true);
							PED::SET_PED_CONFIG_FLAG(Local_70.f_12, 208, true);
							ENTITY::FREEZE_ENTITY_POSITION(Local_70.f_12, true);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_70.f_12))
			{
				Global_1945923 = 1;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(Local_70.f_12) && !PED::IS_PED_INJURED(Local_70.f_12)) && __LIB_16__::func_422(0))
			{
				__LIB_0__::func_221(&(Local_70.f_236.f_5), __LIB_13__::func_103("D"));
				__LIB_0__::func_222(&(Local_70.f_236.f_5), __LIB_13__::func_103("D"), Local_70.f_12, "ShopTattooArtist", 0, 1);
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_70.f_12, "U_M_Y_TATTOO_01_WHITE_MINI_01");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_70.f_12.f_3);
				Local_70.f_12.f_28 = 0;
				Local_70.f_12.f_26 = 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_70.f_43) && Local_70.f_43.f_7)
			{
				__LIB_13__::func_836("Creating shop customer", -1);
				MISC::CLEAR_AREA(Local_70.f_43.f_2, 2.5f, true, false, false, false);
				Local_70.f_43 = PED::CREATE_PED(4, Local_70.f_43.f_1, Local_70.f_43.f_2, Local_70.f_43.f_5, false, false);
				PED::SET_PED_COMPONENT_VARIATION(Local_70.f_43, 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_70.f_43, 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_70.f_43, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_70.f_43, 8, 0, 1, 0);
				PED::CLEAR_ALL_PED_PROPS(Local_70.f_43);
				if (__LIB_14__::func_289(Local_70.f_0))
				{
					INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_70.f_43, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_0__::func_785(Local_70.f_0, 0), __LIB_3__::func_285(Local_70.f_0)));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_70.f_43.f_1);
				Local_70.f_43.f_7 = 0;
				Local_70.f_43.f_6 = 1;
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_70.f_43, sLocal_156, "customer_loop", func_952(iLocal_69, Local_70.f_0), Local_178, 4f, -1f, -1, 7689, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_70.f_12, sLocal_156, "tattooist_loop", func_952(iLocal_69, Local_70.f_0), Local_178, 4f, -1f, -1, 7689, 0f, 2, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_70.f_43, true);
				if (iLocal_69 != 22)
				{
					STREAMING::REMOVE_ANIM_DICT(sLocal_156);
					sLocal_156 = sLocal_155;
				}
			}
			if (!Local_70.f_105)
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_70.f_12)) && __LIB_16__::func_422(0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_70.f_12, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (Global_262145.f_2460 /* Tunable: IS_SALE_ON_IN_TATTOO_SHOP */)
				{
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShops", false);
				}
			}
			__LIB_15__::func_884(Local_70.f_0, 0, 0);
			if (func_897(Local_70.f_0))
			{
				__LIB_39__::func_748(Local_70.f_0, 1);
			}
			Local_70.f_116.f_5 = 0;
			Local_70.f_11 = 1;
			break;
	}
}

Vector3 func_952(int iParam0, int iParam1)//Position - 0x9D9DE
{
	struct<3> Var0;
	if (iParam0 == 22)
	{
		Var0 = { 323.67f, 182.06f, 102.59f };
	}
	else
	{
		Var0 = { 1864.89f, 3746.32f, 32.04f };
	}
	__LIB_15__::func_119(iParam0, iParam1, &Var0);
	return Var0;
}

int func_953()//Position - 0x9DA24
{
	if (iLocal_69 == 22)
	{
		sLocal_156 = "misstattoo_parlour@shop_ig_4";
		sLocal_155 = "misstattoo_parlour@shop_ig_4b";
	}
	else
	{
		sLocal_156 = "misstattoo_parlour@shop_ig_4";
		sLocal_155 = "misstattoo_parlour@shop_ig_5_b";
	}
	if (Local_70.f_105)
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_155);
		STREAMING::REQUEST_ANIM_DICT(sLocal_156);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_155) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_156))
		{
			iLocal_159 = 1;
		}
	}
	if (iLocal_159 || !Local_70.f_105)
	{
		return 1;
	}
	return 0;
}

bool func_955(var uParam0, int iParam1)//Position - 0x9DAAB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	uParam0->f_9 = 0;
	__LIB_16__::func_494(uParam0, -1, 0, 0, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0f, 0f, 0f, 0f, 0);
	iVar0 = MISC::GET_HASH_KEY("v_tattoo");
	iVar1 = MISC::GET_HASH_KEY("v_tattoo2");
	iVar2 = MISC::GET_HASH_KEY("tr_tuner_car_meet");
	iVar3 = MISC::GET_HASH_KEY(__LIB_3__::func_285(iParam1));
	if (iVar3 == iVar0)
	{
		__LIB_16__::func_494(uParam0, iParam1, MISC::GET_HASH_KEY("MainTatRm"), 1, joaat("U_M_Y_Tattoo_01"), 322.5702f, 182.0852f, 102.5865f, 196.6765f, 319.618f, 181.5184f, 102.5865f, 246.6867f, joaat("G_M_Y_MexGoon_03"), 324.1968f, 181.3282f, 103.266f, 78.9718f, 1);
		Global_97714[0] = 52.17f;
	}
	else if (iVar3 == iVar1)
	{
		__LIB_16__::func_494(uParam0, iParam1, MISC::GET_HASH_KEY("V_49_Tat2_Room"), 1, joaat("U_M_Y_Tattoo_01"), 1862.8435f, 3748.1587f, 33.03185f, 60.912f, 1862.8435f, 3748.1587f, 33.03185f, 60.912f, joaat("G_M_Y_MexGoon_03"), 1862.4863f, 3748.4702f, 32.0319f, 35.457f, 1);
		Global_97714[0] = -13.17f;
	}
	else if (iVar3 == iVar2)
	{
		__LIB_16__::func_494(uParam0, iParam1, MISC::GET_HASH_KEY("Meet_rm"), 1, joaat("S_M_M_Tattoo_01"), -2163.2468f, 1073.8733f, -25.3537f, 339f, -2163.2468f, 1073.8733f, -25.3537f, 339f, joaat("G_M_Y_MexGoon_03"), -2160.2385f, 1075.0209f, -24.3617f, 0f, 1);
		Global_97714[0] = -13.17f;
	}
	Global_97714[1] = (Global_97714[0] + 180f);
	Global_97714[2] = (Global_97714[0] - 90f);
	Global_97714[3] = (Global_97714[0] + 90f);
	Global_97714[4] = (Global_97714[0] - 45f);
	Global_97714[5] = ((Global_97714[0] - 90f) - 45f);
	Global_97714[6] = (Global_97714[0] + 45f);
	Global_97714[7] = ((Global_97714[0] + 90f) + 45f);
	if (iVar3 == iVar0)
	{
		iVar4 = 22;
	}
	else if (iVar3 == iVar1)
	{
		iVar4 = 23;
	}
	else if (iVar3 == iVar2)
	{
		iVar4 = 54;
	}
	__LIB_15__::func_119(iVar4, iParam1, &(uParam0->f_12.f_6));
	__LIB_15__::func_124(iVar4, iParam1, &(uParam0->f_12.f_15));
	__LIB_15__::func_119(iVar4, iParam1, &(uParam0->f_43.f_2));
	__LIB_15__::func_124(iVar4, iParam1, &(uParam0->f_43.f_5));
	__LIB_15__::func_124(iVar4, iParam1, &(Global_97714[0]));
	__LIB_15__::func_124(iVar4, iParam1, &(Global_97714[1]));
	__LIB_15__::func_124(iVar4, iParam1, &(Global_97714[2]));
	__LIB_15__::func_124(iVar4, iParam1, &(Global_97714[3]));
	__LIB_15__::func_124(iVar4, iParam1, &(Global_97714[4]));
	__LIB_15__::func_124(iVar4, iParam1, &(Global_97714[5]));
	__LIB_15__::func_124(iVar4, iParam1, &(Global_97714[6]));
	__LIB_15__::func_124(iVar4, iParam1, &(Global_97714[7]));
	return uParam0->f_9;
}

void func_957()//Position - 0x9DE21
{
	struct<3> Var0;
	if (!func_897(iLocal_68))
	{
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	if (__LIB_0__::func_121(Local_70.f_12))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_70.f_12))
		{
			Var0 = { Local_70.f_12.f_6 };
			Var0.f_2 = (Var0.f_2 + 1f);
			if (!__LIB_0__::func_78(ENTITY::GET_ENTITY_COORDS(Local_70.f_12, true), Var0, 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_70.f_12, Var0, true, false, true);
			}
		}
	}
}

void func_958()//Position - 0x9DE95
{
	if (!Local_70.f_9)
	{
		__LIB_13__::func_901(&(Local_70.f_236), -1, 1);
		return;
	}
	if (PED::IS_PED_INJURED(Local_70.f_12))
	{
		return;
	}
	if (!__LIB_16__::func_422(0))
	{
		return;
	}
	if (__LIB_16__::func_542())
	{
		if (Local_70.f_7)
		{
			if (Local_70.f_11 == 3)
			{
				if (!iLocal_162)
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_70.f_12, 1) < 5f)
					{
						if (PED::IS_PED_FACING_PED(Local_70.f_12, PLAYER::PLAYER_PED_ID(), 45f))
						{
							__LIB_13__::func_901(&(Local_70.f_236), 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(Local_70.f_12, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							iLocal_162 = 1;
						}
					}
				}
			}
		}
		else if (__LIB_14__::func_291(Local_70.f_0) > 30f)
		{
			iLocal_162 = 0;
		}
		if (Local_70.f_116.f_19 && Local_70.f_116.f_5 != 0)
		{
			iLocal_162 = 1;
			if (Local_70.f_116.f_31 == 2)
			{
				iLocal_170 = 1;
				if (!iLocal_165)
				{
					if (!iLocal_166)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iLocal_164 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
						}
						else
						{
							iLocal_163 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
						}
						iLocal_166 = 1;
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), iLocal_164))
						{
							__LIB_13__::func_901(&(Local_70.f_236), 1, 2);
							iLocal_165 = 1;
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_163) > 0)
					{
						__LIB_13__::func_901(&(Local_70.f_236), 1, 2);
						iLocal_165 = 1;
					}
				}
			}
		}
		else
		{
			iLocal_165 = 0;
			iLocal_166 = 0;
		}
		if (!Local_70.f_116.f_19)
		{
			if (iLocal_170)
			{
				if (!iLocal_169)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_168 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(0, 100));
					}
					else
					{
						iLocal_167 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 100));
					}
					iLocal_169 = 1;
				}
				else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), iLocal_168))
					{
						__LIB_13__::func_901(&(Local_70.f_236), 3, 2);
						iLocal_168 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
						iLocal_170 = 0;
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_167) > 0)
				{
					__LIB_13__::func_901(&(Local_70.f_236), 3, 2);
					iLocal_167 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
					iLocal_170 = 0;
				}
			}
		}
	}
	if (Local_70.f_236 != -1)
	{
		if (!__LIB_42__::func_693(&(Local_70.f_236), Local_70.f_0, 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!iLocal_173)
				{
					iLocal_172 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 3000);
					iLocal_173 = 1;
				}
				else if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), iLocal_172))
				{
					__LIB_13__::func_839(&(Local_70.f_236));
					iLocal_173 = 0;
				}
			}
			else if (!iLocal_173)
			{
				iLocal_171 = MISC::GET_GAME_TIMER();
				iLocal_173 = 1;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_171) > 3000)
			{
				__LIB_13__::func_839(&(Local_70.f_236));
				iLocal_173 = 0;
			}
		}
		else
		{
			iLocal_173 = 0;
			switch (Local_70.f_236)
			{
				case 0:
					if (__LIB_15__::func_111(-1))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_NO_COPS", "SPEECH_PARAMS_FORCE", 1);
					}
					else if (__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()) || (__LIB_0__::func_512(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_GREET_UNUSUAL", "SPEECH_PARAMS_FORCE", 1);
					}
					else if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("Player_Zero")) && (func_631(PLAYER::PLAYER_PED_ID(), 12, 8) || func_631(PLAYER::PLAYER_PED_ID(), 12, 28)))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "KIFFLOM_GREET", "SPEECH_PARAMS_FORCE", 1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_GREET", "SPEECH_PARAMS_FORCE", 1);
					}
					break;
				case 1:
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_BANTER", "SPEECH_PARAMS_FORCE", 1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_BROWSE_TATTOO_MENU", "SPEECH_PARAMS_FORCE", 1);
					}
					break;
				case 2:
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_SELL", "SPEECH_PARAMS_FORCE", 1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_TATTOO_APPLIED", "SPEECH_PARAMS_FORCE", 1);
					}
					break;
				case 3:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_70.f_12, "SHOP_GOODBYE", "SPEECH_PARAMS_FORCE", 1);
					break;
				default:
					break;
			}
			__LIB_14__::func_344(&(Local_70.f_236));
		}
	}
}

void func_966()//Position - 0x9E46D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (bLocal_142)
			{
				if (Local_70.f_11 != 4 || Local_70.f_116.f_31 > 2)
				{
					__LIB_13__::func_836("We are here 1", -1);
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
						bLocal_142 = false;
					}
					else
					{
						__LIB_13__::func_836("TK - HAS_PED_HEAD_BLEND_FINISHED = FALSE", -1);
					}
				}
			}
			else if (Local_70.f_11 == 4 && Local_70.f_116.f_31 <= 2)
			{
				bLocal_142 = true;
			}
		}
	}
	else
	{
		bLocal_142 = false;
	}
}

void func_967(int iParam0, var uParam1, int iParam2)//Position - 0x9E504
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	if (iParam0->f_11 == 4)
	{
		if (iParam2 == 0)
		{
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		}
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
		if (Global_78579)
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/, true);
		}
	}
	else if (uParam1->f_30)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam1->f_29, 1500)))
			{
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, false);
			}
			else
			{
				uParam1->f_30 = 0;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - uParam1->f_28) < 1500)
		{
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, false);
		}
		else
		{
			uParam1->f_30 = 0;
		}
	}
	if ((((((((((iParam0->f_7 && *iParam0 != 21) && !__LIB_9__::func_334(15f)) && !__LIB_2__::func_273(64)) && !__LIB_39__::func_751(*iParam0)) && !__LIB_39__::func_750(*iParam0)) && !__LIB_16__::func_543(*iParam0)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !Global_1640732) && !(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_12__::func_628(PLAYER::PLAYER_ID()))) && !__LIB_14__::func_331())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_1__::func_838(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_328(*iParam0) == 3)
			{
				return;
			}
			if (__LIB_0__::func_328(*iParam0) == 1)
			{
				if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 3)
				{
					if (__LIB_0__::func_525(PLAYER::PLAYER_ID()) == 8 || __LIB_0__::func_525(PLAYER::PLAYER_ID()) == 9)
					{
						return;
					}
				}
			}
		}
		bVar0 = true;
		iVar1 = __LIB_13__::func_833(*iParam0, 0);
		if (iVar1 != 226)
		{
			Var2 = { __LIB_0__::func_403(iVar1) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 1.5f)
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			if (!Global_1957741)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
			}
		}
		if (__LIB_0__::func_431(*iParam0, 30, 1))
		{
			return;
		}
		if (!__LIB_0__::func_719() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true))
			{
				if (iVar3 != joaat("OBJECT"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
				}
			}
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		if (__LIB_0__::func_328(*iParam0) == 3)
		{
			HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
		}
		else if (__LIB_0__::func_328(*iParam0) != 5)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		}
		if (*iParam0 == 45)
		{
			if ((__LIB_0__::func_396(PLAYER::PLAYER_ID()) || (__LIB_0__::func_362(PLAYER::PLAYER_ID()) && __LIB_0__::func_509() > 0)) || __LIB_0__::func_296(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
			}
			else if (!__LIB_0__::func_309(PLAYER::PLAYER_ID()) && !__LIB_2__::func_904(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.85f);
			}
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.35f);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 38 /*INPUT_PICKUP*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 46 /*INPUT_TALK*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, false);
	}
	if (!iParam0->f_7)
	{
		if ((*iParam0 == 28 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 15.054502f, -1115.2765f, 28.233673f, 18.64721f, -1116.5837f, 30.608673f, 2.1875f, false, true, 0)) || (*iParam0 == 38 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 813.5249f, -2147.4287f, 27.930632f, 809.9389f, -2147.4417f, 30.177204f, 2.1875f, false, true, 0)))
		{
			if (((!__LIB_9__::func_334(15f) && !__LIB_2__::func_273(64)) && !__LIB_39__::func_751(*iParam0)) && !__LIB_39__::func_750(*iParam0))
			{
				if (*iParam0 == 45)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.85f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.35f);
				}
			}
		}
	}
}

void func_980(var uParam0, var uParam1)//Position - 0x9EC56
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	if (uParam0->f_9)
	{
		if (!uParam0->f_108)
		{
			if ((__LIB_0__::func_431(*uParam0, 12, 1) || __LIB_0__::func_431(*uParam0, 13, 1)) || __LIB_0__::func_431(*uParam0, 2, 1))
			{
				uParam0->f_108 = 1;
			}
		}
		if (uParam0->f_11 != 6 && !BitTest(Global_100493.f_1393[*uParam0], 11))
		{
			bVar0 = __LIB_0__::func_545(*uParam0);
			if (*uParam0 == 44)
			{
				if (uParam0->f_11 == 0)
				{
					if (uParam1->f_5 == 1)
					{
						if (!__LIB_0__::func_530(*uParam0) && !__LIB_0__::func_545(*uParam0))
						{
							bVar0 = true;
						}
					}
				}
			}
			if (*uParam0 == 45)
			{
				bVar0 = true;
			}
			if (!bVar0 || (((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || uParam0->f_12.f_27) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12)) && PED::IS_PED_INJURED(uParam0->f_12)) && *uParam0 != 44) && *uParam0 != 45))
			{
				if (uParam0->f_11 == 4)
				{
					uParam1->f_31 = 8;
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_328(*uParam0) == 4)
					{
						if (uParam0->f_11 == 4)
						{
							__LIB_15__::func_133(uParam1, 0, 0, 0, 0);
							__LIB_13__::func_610(1);
							func_167();
						}
					}
					uParam0->f_11 = 6;
				}
			}
			if (uParam0->f_11 == 6)
			{
				__LIB_13__::func_617();
			}
		}
		if (uParam0->f_11 == 6)
		{
			__LIB_42__::func_692(uParam0);
			if (!uParam0->f_1)
			{
				if (uParam0->f_3 != -1)
				{
					__LIB_3__::func_122(&(uParam0->f_3));
				}
				bVar1 = false;
				bVar2 = false;
				bVar3 = false;
				if (uParam0->f_7 || ((__LIB_17__::func_598(*uParam0) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && __LIB_0__::func_328(*uParam0) != 4))
				{
					bVar2 = true;
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (((!__LIB_14__::func_350(*uParam0) || !__LIB_0__::func_431(*uParam0, 0, 0)) || __LIB_1__::getGlobal_2714762_f_691()) || __LIB_1__::func_872(PLAYER::PLAYER_ID()))
					{
						bVar1 = true;
					}
				}
				else if ((!__LIB_14__::func_349(*uParam0) || !__LIB_0__::func_431(*uParam0, 0, 0)) || __LIB_1__::func_872(PLAYER::PLAYER_ID()))
				{
					bVar1 = true;
				}
				if (!bVar1)
				{
					if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || ((uParam0->f_7 && !uParam0->f_8) && __LIB_0__::func_328(*uParam0) == 3))
					{
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					if (!uParam0->f_7)
					{
						if (__LIB_0__::func_431(*uParam0, 0, 1) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_0__::func_328(*uParam0) == 4))
						{
							bVar1 = true;
						}
						if (!bVar1)
						{
							fVar4 = 2.5f;
							if (*uParam0 == 9)
							{
								fVar4 = 4f;
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								fVar4 = 7.5f;
							}
							fVar5 = __LIB_14__::func_291(*uParam0);
							if (fVar5 > fVar4)
							{
								bVar1 = true;
							}
						}
					}
					else if (!uParam0->f_8 && __LIB_0__::func_328(*uParam0) == 3)
					{
						bVar1 = true;
					}
				}
				if (__LIB_39__::func_751(*uParam0))
				{
					bVar1 = true;
					bVar2 = true;
				}
				if (*uParam0 == 22 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family6")) != 0)
				{
					bVar3 = true;
					if (!bVar1)
					{
						bVar1 = true;
					}
				}
				if (bVar1)
				{
					__LIB_13__::func_617();
				}
				else if ((((((!__LIB_14__::func_290(*uParam0) && !__LIB_13__::func_661(*uParam0)) && *uParam0 != 50) && *uParam0 != 51) && *uParam0 != 54) && *uParam0 != 55) && *uParam0 != 57)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_3__::func_56("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_12__::func_769(*uParam0, 0, 0)))
					{
						if (!__LIB_0__::func_1("VENDHLP" /* GXT: Press ~INPUT_CONTEXT~ to buy a soda for $1. */) && !__LIB_0__::func_927(PLAYER::PLAYER_ID()))
						{
							__LIB_15__::func_19("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_12__::func_769(*uParam0, 0, 0));
						}
					}
				}
				if (!bVar3)
				{
					if (bVar2)
					{
						if (__LIB_14__::func_934(*uParam0))
						{
							__LIB_15__::func_884(*uParam0, 0, 1);
						}
						__LIB_15__::func_884(*uParam0, 0, 0);
					}
					else
					{
						__LIB_15__::func_884(*uParam0, 1, 0);
					}
				}
			}
			if (__LIB_14__::func_404(1))
			{
				if (Global_100493.f_77[*uParam0])
				{
					if ((uParam0->f_108 && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0)) && !__LIB_17__::func_598(*uParam0))
					{
						__LIB_16__::func_596(*uParam0);
					}
				}
				else if ((((((uParam0->f_108 && !__LIB_0__::isGlobal_43052EqualsValue(11)) && !__LIB_0__::isGlobal_43052EqualsValue(9)) && !__LIB_0__::isGlobal_43052EqualsValue(0)) && !__LIB_0__::isGlobal_43052EqualsValue(3)) && !BitTest(Global_100493.f_1393[*uParam0], 1)) && !BitTest(Global_100493.f_1393[*uParam0], 2))
				{
					if (__LIB_0__::func_328(*uParam0) == 3)
					{
						__LIB_16__::func_596(*uParam0);
					}
					else if (!uParam0->f_7 && __LIB_14__::func_291(*uParam0) > 50f)
					{
						__LIB_16__::func_596(*uParam0);
					}
				}
			}
		}
	}
}

void func_998(int iParam0)//Position - 0x9FB15
{
	if (!func_897(iParam0))
	{
		return;
	}
	__LIB_13__::func_768(iParam0, 0, 1);
	__LIB_13__::func_768(iParam0, 0, 1);
	__LIB_13__::func_768(iParam0, 4, 1);
	__LIB_13__::func_776(iParam0, 4, 0);
	Global_100493.f_17 = 1;
}

void func_1011(var uParam0)//Position - 0xA096A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_0))
		{
			*uParam0 = NETWORK::NET_TO_PED(Local_66.f_0);
			uParam0->f_26 = 1;
		}
		else
		{
			*uParam0 = 0;
		}
		uParam0->f_27 = Local_66.f_1;
	}
}

void func_1012(var uParam0, int iParam1, int iParam2)//Position - 0xA099F
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = iParam1;
	uParam0->f_7 = iParam2;
}

void func_1015(int iParam0)//Position - 0xA0A89
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, iParam0);
		if (!__LIB_0__::func_895(0, -1, 1))
		{
			func_21(0);
		}
		NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_66, 2, 0);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_67, 33, 0);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (!__LIB_0__::func_934())
		{
			func_21(0);
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		func_21(0);
	}
}

int func_1019(int iParam0)//Position - 0xA0C65
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY("v_tattoo");
	iVar1 = MISC::GET_HASH_KEY("tr_tuner_car_meet");
	iVar2 = MISC::GET_HASH_KEY(__LIB_3__::func_285(iParam0));
	if (iVar2 == iVar0)
	{
		return 22;
	}
	if (iVar2 == iVar1)
	{
		return 54;
	}
	return 23;
}

