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
	var uLocal_85 = -1;
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
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<592> Local_109 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 32, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 32;
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
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
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
	struct<9> Local_151[32];
	struct<855> Local_152 = { 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, -1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_153 = 3;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	struct<23> Local_161 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_162 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	bool bLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	bool bLocal_170 = 0;
	bool bLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177[4] = { 0, 0, 0, 0 };
	int iLocal_178[4] = { 0, 0, 0, 0 };
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	bool bLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
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
	sLocal_20 = "NULL";
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
	iLocal_165 = 1;
	func_434();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (__LIB_0__::func_959())
		{
			func_422();
		}
		if (Global_1966101)
		{
			Global_1966101 = 0;
			func_422();
		}
		if (Global_2667225.f_2681 && Global_2671449 != 0)
		{
			if (Global_2671449 != 6)
			{
				func_422();
			}
		}
		if (__LIB_15__::func_267() && CAM::IS_SCREEN_FADED_OUT())
		{
			func_422();
		}
		if ((!__LIB_1__::func_783(PLAYER::PLAYER_ID()) && !__LIB_2__::func_885(PLAYER::PLAYER_ID())) && !__LIB_0__::func_889(PLAYER::PLAYER_ID()))
		{
			func_422();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !BitTest(Global_4718592.f_34, 6))
		{
			func_422();
		}
		if (__LIB_2__::func_885(PLAYER::PLAYER_ID()) && __LIB_11__::func_612() != __LIB_0__::func_162())
		{
			if (BitTest(Global_2689235[__LIB_11__::func_612() /*453*/].f_318.f_4, 0) && CAM::IS_SCREEN_FADED_OUT())
			{
				func_422();
			}
		}
		if (__LIB_2__::func_885(PLAYER::PLAYER_ID()) && __LIB_11__::func_612() != __LIB_0__::func_162())
		{
			if (Global_2689235[__LIB_11__::func_612() /*453*/].f_446 != Global_1966110 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_422();
			}
		}
		if (__LIB_2__::func_885(PLAYER::PLAYER_ID()) && __LIB_0__::func_509() != 0)
		{
			func_422();
		}
		if (__LIB_2__::func_885(PLAYER::PLAYER_ID()) && __LIB_16__::func_228(PLAYER::PLAYER_ID()))
		{
			func_422();
		}
		iVar0 = 0;
		while (iVar0 < Local_152.f_26)
		{
			if ((!__LIB_40__::func_627() && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_50[iVar0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0]))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_109.f_50[iVar0], true);
			}
			iVar0++;
		}
		func_91();
		if (__LIB_40__::func_627())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x236
{
	int iVar0;
	int iVar1;
	func_90();
	func_87();
	func_81();
	iVar0 = 0;
	while (iVar0 < Local_152.f_26)
	{
		switch (Local_109.f_586[iVar0])
		{
			case 0:
				if (Global_2788829 != iVar0 && (Global_2788829 != -1 || __LIB_2__::func_885(PLAYER::PLAYER_ID())))
				{
					Local_109.f_25[iVar0] = 1;
					func_80(&(Local_109.f_168[iVar0 /*55*/]));
					func_79(1, iVar0);
				}
				break;
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0])))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0]))
					{
						Local_109.f_45[iVar0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_109.f_35[iVar0]);
						if (Local_109.f_45[iVar0] != -1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), __LIB_40__::func_615(), func_77(iVar0), 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), joaat("blend_out")))
								{
									Local_109.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), Local_109.f_35[iVar0], __LIB_40__::func_615(), func_74(iVar0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iVar0]);
								}
							}
							else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), joaat("blend_out")))
							{
								Local_109.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), Local_109.f_35[iVar0], __LIB_40__::func_615(), func_77(iVar0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iVar0]);
							}
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_109.f_117[(iVar0 * 4 + iVar1)] != __LIB_0__::func_162() && Global_2788829 != iVar0) && (Global_2788829 != -1 || __LIB_2__::func_885(PLAYER::PLAYER_ID())))
					{
						func_79(2, iVar0);
						Local_109.f_40[iVar0] = iVar1;
						__LIB_0__::func_795(&(Local_109.f_159[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			case 2:
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0])))
				{
					if (__LIB_0__::func_864(&(Local_109.f_159[iVar0 /*2*/])) && __LIB_0__::func_937(&(Local_109.f_159[iVar0 /*2*/]), 2000, 0))
					{
						Local_109.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), Local_109.f_35[iVar0], __LIB_40__::func_615(), func_70(iVar0, Local_109.f_40[iVar0]), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iVar0]);
						__LIB_0__::func_794(&(Local_109.f_159[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x5BE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	struct<3> Var11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	struct<5> Var23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	iVar3 = 0;
	iVar4 = 0;
	bVar6 = false;
	if (Local_109.f_576[iParam0] > 7 && Local_109.f_576[iParam0] < 12)
	{
		bVar6 = true;
	}
	if ((!func_68(iParam0, bVar6) || Global_2788829 == iParam0) || Local_109[iParam0])
	{
		Local_109[iParam0] = 1;
		func_67(iParam0);
		return;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_50[iParam0]))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
		{
			Local_109.f_10[iParam0] = 0;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]);
		}
		else if (!Local_109.f_10[iParam0])
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_109.f_50[iParam0], false);
			Local_109.f_10[iParam0] = 1;
		}
	}
	Local_109.f_45[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_109.f_35[iParam0]);
	switch (Local_109.f_576[iParam0])
	{
		case 0:
			func_66(1, iParam0);
			break;
		case 1:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_109.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (Local_151[iVar1 /*9*/] != 0 || Local_151[iVar1 /*9*/].f_6 != 0)
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_65(&(Local_109.f_168[iParam0 /*55*/]));
				func_64(iParam0);
				func_66(2, iParam0);
			}
			break;
		case 2:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_109.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (!BitTest(Local_151[iVar1 /*9*/].f_6, 0))
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_66(3, iParam0);
			}
			break;
		case 3:
			if (!func_63(iParam0, 18))
			{
				if (func_53(12, &(Local_109.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 18);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
				{
					if (Local_109.f_45[iParam0] != -1)
					{
						if (Local_109.f_30[iParam0] == 1)
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_77(iParam0), 3))
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_615(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
							}
						}
						else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_51(iParam0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_51(iParam0, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_51(iParam0, 2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_51(iParam0, 3), 3))
						{
							Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_615(), func_50(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_77(iParam0), 3))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_615(), func_74(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
							}
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
						{
							Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_615(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
						}
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]);
				}
			}
			bVar0 = true;
			iVar3 = 0;
			iVar4 = 0;
			if (!__LIB_0__::func_864(&(Local_109.f_150[iParam0 /*2*/])))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_109.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						iVar3++;
						if (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0)
						{
							__LIB_0__::func_795(&(Local_109.f_150[iParam0 /*2*/]), 0, 0);
						}
						else
						{
							iVar4++;
						}
					}
					iVar2++;
				}
				if (iVar3 == iVar4)
				{
					if (!__LIB_0__::func_864(&(Local_109.f_591[iParam0 /*2*/])))
					{
						__LIB_0__::func_795(&(Local_109.f_591[iParam0 /*2*/]), 0, 0);
					}
					else if (__LIB_0__::func_937(&(Local_109.f_591[iParam0 /*2*/]), 60000, 0))
					{
						func_64(iParam0);
						__LIB_0__::func_794(&(Local_109.f_591[iParam0 /*2*/]));
					}
					else if (__LIB_0__::func_937(&(Local_109.f_591[iParam0 /*2*/]), 30000, 0))
					{
						if (!func_63(iParam0, 17))
						{
							if (func_53(8, &(Local_109.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 17);
							}
						}
					}
				}
				else
				{
					__LIB_0__::func_794(&(Local_109.f_591[iParam0 /*2*/]));
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_109.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0)
						{
							iVar8++;
						}
						if (!BitTest(Local_151[iVar1 /*9*/], 2))
						{
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (iVar8 > 0)
				{
					if (__LIB_0__::func_937(&(Local_109.f_150[iParam0 /*2*/]), 30000, 0) || bVar0)
					{
						__LIB_0__::func_794(&(Local_109.f_150[iParam0 /*2*/]));
						func_64(iParam0);
						func_66(4, iParam0);
					}
					else if (__LIB_0__::func_937(&(Local_109.f_150[iParam0 /*2*/]), 18000, 0))
					{
						if (!func_63(iParam0, 19))
						{
							if (func_53(13, &(Local_109.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 19);
							}
						}
					}
				}
				else
				{
					__LIB_0__::func_794(&(Local_109.f_150[iParam0 /*2*/]));
				}
			}
			break;
		case 4:
			func_64(iParam0);
			if (!BitTest(Local_109.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					MISC::SET_BIT(&(Local_109.f_20[iParam0]), 11);
				}
			}
			else if (func_47(iParam0))
			{
				MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 11);
				func_66(5, iParam0);
			}
			break;
		case 5:
			if (!func_63(iParam0, 20))
			{
				if (func_53(21, &(Local_109.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 20);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
			{
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]);
						bVar9 = true;
					}
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]);
						bVar9 = true;
					}
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]);
						bVar9 = true;
					}
					if (bVar9)
					{
						return;
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
					{
						if (!BitTest(Local_109.f_20[iParam0], 0))
						{
							Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_44(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
						}
						else if (!BitTest(Local_109.f_20[iParam0], 8))
						{
							if (Local_109.f_45[iParam0] != -1)
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
								{
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_43(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_shuffle_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_shuffle_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_shuffle_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									MISC::SET_BIT(&(Local_109.f_20[iParam0]), 8);
								}
							}
						}
						else if (Local_109.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_42(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 8);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), true, false);
								func_66(6, iParam0);
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("showcards")))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), true, false);
							}
						}
					}
				}
			}
			break;
		case 6:
			if (!BitTest(Local_109.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					MISC::SET_BIT(&(Local_109.f_20[iParam0]), 11);
				}
			}
			else
			{
				Local_109.f_168[iParam0 /*55*/] = 0;
				func_66(7, iParam0);
			}
			break;
		case 7:
			Var11 = { func_76(iParam0) };
			Var11.f_2 = (Var11.f_2 + 0.914f);
			switch (Local_109.f_571[iParam0])
			{
				case 0:
					iVar1 = Local_109.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 0, 0)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 0, 0)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 1, 0)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 1, 0)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 2, 0)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 2, 0)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]);
										bVar12 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]);
										bVar12 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]);
										bVar12 = true;
									}
									if (bVar12)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_38(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p01_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p01_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p01_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												if (Local_109.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_109.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_109.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_109.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(1, iParam0);
					}
					break;
				case 1:
					iVar1 = Local_109.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 0, 1)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 0, 1)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 1, 1)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 1, 1)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 2, 1)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 2, 1)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]);
										bVar13 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]);
										bVar13 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]);
										bVar13 = true;
									}
									if (bVar13)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_35(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p02_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p02_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p02_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												if (Local_109.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_109.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_109.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_109.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(2, iParam0);
					}
					break;
				case 2:
					iVar1 = Local_109.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 0, 2)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 0, 2)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 1, 2)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 1, 2)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 2, 2)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 2, 2)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]);
										bVar14 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]);
										bVar14 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]);
										bVar14 = true;
									}
									if (bVar14)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_34(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p03_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p03_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p03_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												if (Local_109.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_109.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_109.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_109.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(3, iParam0);
					}
					break;
				case 3:
					iVar1 = Local_109.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 0, 3)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 0, 3)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 1, 3)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 1, 3)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 2, 3)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										__LIB_1__::func_671(&(Local_109.f_68[func_41(iParam0, 2, 3)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]);
										bVar15 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]);
										bVar15 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]);
										bVar15 = true;
									}
									if (bVar15)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_33(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p04_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p04_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_p04_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												if (Local_109.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_109.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_109.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_109.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(4, iParam0);
					}
					break;
				case 4:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
					{
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_55[func_46(iParam0, 0)]))
						{
							iVar10 = Local_109.f_168[iParam0 /*55*/];
							STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
							{
								__LIB_1__::func_671(&(Local_109.f_55[func_46(iParam0, 0)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_55[func_46(iParam0, 1)]))
						{
							iVar10 = Local_109.f_168[iParam0 /*55*/] + 1;
							STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
							{
								__LIB_1__::func_671(&(Local_109.f_55[func_46(iParam0, 1)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_55[func_46(iParam0, 2)]))
						{
							iVar10 = Local_109.f_168[iParam0 /*55*/] + 2;
							STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
							{
								__LIB_1__::func_671(&(Local_109.f_55[func_46(iParam0, 2)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]);
								bVar16 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]);
								bVar16 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]);
								bVar16 = true;
							}
							if (bVar16)
							{
								return;
							}
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
							{
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_32(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "deck_deal_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
								}
								else if (Local_109.f_45[iParam0] != -1)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
									{
										bVar7 = true;
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										if (Local_109.f_389[iParam0 /*5*/] == 0)
										{
											func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
											Local_109.f_389[iParam0 /*5*/].f_1[0] = uVar5;
											func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
											Local_109.f_389[iParam0 /*5*/].f_1[1] = uVar5;
											func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
											Local_109.f_389[iParam0 /*5*/].f_1[2] = uVar5;
											Local_109.f_389[iParam0 /*5*/] = 3;
										}
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									if (Local_109.f_389[iParam0 /*5*/] == 0)
									{
										func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
										Local_109.f_389[iParam0 /*5*/].f_1[0] = uVar5;
										func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
										Local_109.f_389[iParam0 /*5*/].f_1[1] = uVar5;
										func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
										Local_109.f_389[iParam0 /*5*/].f_1[2] = uVar5;
										Local_109.f_389[iParam0 /*5*/] = 3;
									}
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(0, iParam0);
						func_66(8, iParam0);
					}
					break;
			}
			break;
		case 8:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]) && Local_109.f_45[iParam0] != -1)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
					{
						Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_615(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
						func_64(iParam0);
						func_66(9, iParam0);
					}
				}
			}
			break;
		case 9:
			bVar0 = true;
			if (!__LIB_0__::func_864(&(Local_109.f_150[iParam0 /*2*/])))
			{
				__LIB_0__::func_795(&(Local_109.f_150[iParam0 /*2*/]), 0, 0);
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_109.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if ((!BitTest(Local_151[iVar1 /*9*/], 1) && !BitTest(Local_151[iVar1 /*9*/], 3)) && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (!func_63(iParam0, 18))
							{
								if (func_53(14, &(Local_109.f_50[iParam0]), 0, -1))
								{
									func_52(iParam0, 18);
								}
							}
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (bVar0)
				{
					__LIB_0__::func_794(&(Local_109.f_150[iParam0 /*2*/]));
					func_66(10, iParam0);
				}
				else if (__LIB_0__::func_937(&(Local_109.f_150[iParam0 /*2*/]), 15000, 0))
				{
					if (!func_63(iParam0, 19))
					{
						if (func_53(9, &(Local_109.f_50[iParam0]), 0, -1))
						{
							func_52(iParam0, 19);
						}
					}
				}
			}
			break;
		case 10:
			switch (Local_109.f_581[iParam0])
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]);
								bVar17 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]);
								bVar17 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]);
								bVar17 = true;
							}
							if (bVar17)
							{
								return;
							}
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
							{
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_30(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
								}
								else if (Local_109.f_45[iParam0] != -1)
								{
									if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
									{
										bVar7 = true;
										Local_109.f_5[iParam0] = 1;
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_109.f_5[iParam0] = 1;
									MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						bVar7 = false;
						func_29(1, iParam0);
					}
					break;
				case 1:
					iVar1 = Local_109.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)])) && (BitTest(Local_151[iVar1 /*9*/], 1) || BitTest(Local_151[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]);
										bVar18 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]);
										bVar18 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]);
										bVar18 = true;
									}
									if (bVar18)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_151[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_28(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p01_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_27(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p01_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_26(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p01_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_109.f_20[iParam0]), 12);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 12);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(2, iParam0);
					}
					break;
				case 2:
					iVar1 = Local_109.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)])) && (BitTest(Local_151[iVar1 /*9*/], 1) || BitTest(Local_151[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]);
										bVar19 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]);
										bVar19 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]);
										bVar19 = true;
									}
									if (bVar19)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_151[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_20(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p02_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_19(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p02_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_18(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p02_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_109.f_20[iParam0]), 13);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 13);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(3, iParam0);
					}
					break;
				case 3:
					iVar1 = Local_109.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)])) && (BitTest(Local_151[iVar1 /*9*/], 1) || BitTest(Local_151[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]);
										bVar20 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]);
										bVar20 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]);
										bVar20 = true;
									}
									if (bVar20)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_151[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_17(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p03_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_16(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p03_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_15(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p03_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_109.f_20[iParam0]), 14);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 14);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(4, iParam0);
					}
					break;
				case 4:
					iVar1 = Local_109.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)])) && (BitTest(Local_151[iVar1 /*9*/], 1) || BitTest(Local_151[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]);
										bVar21 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]);
										bVar21 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]);
										bVar21 = true;
									}
									if (bVar21)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_151[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_14(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_blind_p04_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_13(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_played_p04_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_12(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "reveal_folded_p04_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_109.f_20[iParam0]), 15);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 15);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(0, iParam0);
						func_66(11, iParam0);
					}
					break;
			}
			break;
		case 11:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
				{
					if (!BitTest(Local_109.f_20[iParam0], 0))
					{
						Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_615(), func_8(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
					}
					else if (BitTest(Local_109.f_20[iParam0], 0) && !BitTest(Local_109.f_20[iParam0], 2))
					{
						if (Local_109.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_44(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 9);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 2);
							}
						}
					}
					else if (BitTest(Local_109.f_20[iParam0], 9))
					{
						if (Local_109.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_42(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 9);
								func_64(iParam0);
								func_66(12, iParam0);
							}
						}
					}
				}
			}
			break;
		case 12:
			if (!func_63(iParam0, 21))
			{
				if (func_53(1, &(Local_109.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 21);
				}
			}
			Var23.f_1 = 3;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
			{
				if (!BitTest(Local_109.f_20[iParam0], 3))
				{
					iVar2 = iParam0 * 4;
					iVar22 = Local_109.f_117[iVar2];
					if (iVar22 != __LIB_0__::func_162() && iVar22 > -1)
					{
						if (Local_109.f_410[iVar22 /*5*/] > 0 || BitTest(Local_109.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]);
									bVar24 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]);
									bVar24 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]);
									bVar24 = true;
								}
								if (bVar24)
								{
									return;
								}
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_7(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p01_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p01_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p01_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
								{
									if (Local_109.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
										{
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 3);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), false, false);
											Local_109.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("hidecards")))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 3);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), false, false);
										Local_109.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 3);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 3);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 3);
					}
				}
				else if (!BitTest(Local_109.f_20[iParam0], 4))
				{
					iVar2 = iParam0 * 4 + 1;
					iVar22 = Local_109.f_117[iVar2];
					if (iVar22 != __LIB_0__::func_162() && iVar22 > -1)
					{
						if (Local_109.f_410[iVar22 /*5*/] > 0 || BitTest(Local_109.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]);
									bVar25 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]);
									bVar25 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]);
									bVar25 = true;
								}
								if (bVar25)
								{
									return;
								}
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_6(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p02_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p02_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p02_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
								{
									if (Local_109.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
										{
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 4);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), false, false);
											Local_109.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("hidecards")))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 4);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), false, false);
										Local_109.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 4);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 4);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 4);
					}
				}
				else if (!BitTest(Local_109.f_20[iParam0], 5))
				{
					iVar2 = iParam0 * 4 + 2;
					iVar22 = Local_109.f_117[iVar2];
					if (iVar22 != __LIB_0__::func_162() && iVar22 > -1)
					{
						if (Local_109.f_410[iVar22 /*5*/] > 0 || BitTest(Local_109.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]);
									bVar26 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]);
									bVar26 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]);
									bVar26 = true;
								}
								if (bVar26)
								{
									return;
								}
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_5(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p03_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p03_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p03_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
								{
									if (Local_109.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
										{
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 5);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), false, false);
											Local_109.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("hidecards")))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 5);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), false, false);
										Local_109.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 5);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 5);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 5);
					}
				}
				else if (!BitTest(Local_109.f_20[iParam0], 6))
				{
					iVar2 = iParam0 * 4 + 3;
					iVar22 = Local_109.f_117[iVar2];
					if (iVar22 != __LIB_0__::func_162() && iVar22 > -1)
					{
						if (Local_109.f_410[iVar22 /*5*/] > 0 || BitTest(Local_109.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]);
									bVar27 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]);
									bVar27 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]);
									bVar27 = true;
								}
								if (bVar27)
								{
									return;
								}
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_4(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p04_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p04_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_p04_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
								{
									if (Local_109.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("break_out")))
										{
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 6);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), false, false);
											Local_109.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("hidecards")))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 6);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), false, false);
										Local_109.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 6);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 6);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 6);
					}
				}
				else if (!BitTest(Local_109.f_20[iParam0], 7))
				{
					if (Local_109.f_389[iParam0 /*5*/] > 0 || BitTest(Local_109.f_20[iParam0], 0))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]);
								bVar28 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]);
								bVar28 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]);
								bVar28 = true;
							}
							if (bVar28)
							{
								return;
							}
							if (!BitTest(Local_109.f_20[iParam0], 0))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
								{
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_3(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), Local_109.f_35[iParam0], __LIB_40__::func_613(), "cards_collect_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
								}
							}
							else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
							{
								if (Local_109.f_45[iParam0] != -1)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
									{
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 7);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), false, false);
										Local_109.f_389[iParam0 /*5*/] = { Var23 };
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("hidecards")))
									{
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), false, false);
									}
								}
								else
								{
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_613(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
									MISC::SET_BIT(&(Local_109.f_20[iParam0]), 7);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), false, false);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), false, false);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), false, false);
									Local_109.f_389[iParam0 /*5*/] = { Var23 };
								}
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 7);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 7);
					}
				}
				else if (!BitTest(Local_109.f_20[iParam0], 10))
				{
					if (Local_109.f_45[iParam0] != -1)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
						{
							if (Local_109.f_30[iParam0] == 1)
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_615(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
							}
							else
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_615(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
							}
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 10);
						}
					}
				}
				else
				{
					Local_109.f_5[iParam0] = 0;
					Local_109.f_20[iParam0] = 0;
					Local_109.f_25[iParam0]++;
					__LIB_0__::func_794(&(Local_109.f_150[iParam0 /*2*/]));
					func_66(0, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)//Position - 0x61ED
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_self";
	}
	return "cards_collect_self";
}

char* func_4(int iParam0)//Position - 0x620C
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p04";
	}
	return "cards_collect_p04";
}

char* func_5(int iParam0)//Position - 0x622B
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p03";
	}
	return "cards_collect_p03";
}

char* func_6(int iParam0)//Position - 0x624A
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p02";
	}
	return "cards_collect_p02";
}

char* func_7(int iParam0)//Position - 0x6269
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p01";
	}
	return "cards_collect_p01";
}

char* func_8(int iParam0)//Position - 0x6288
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	iVar1 = func_9(&(Local_109.f_389[iParam0 /*5*/].f_1), 0, 0);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar2 = Local_109.f_117[(iParam0 * 4 + iVar3)];
		if (iVar2 != __LIB_0__::func_162())
		{
			iVar4 = func_9(&(Local_109.f_410[iVar2 /*5*/].f_1), 0, 0);
			if (iVar4 > iVar1 && (BitTest(Local_151[iVar2 /*9*/], 1) || Local_151[iVar2 /*9*/].f_3 <= 0))
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (Local_109.f_15[iParam0] >= 7)
	{
		if (iVar1 < 12)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				case 1:
					return "female_dealer_reaction_impartial_var02";
				case 2:
					return "female_dealer_reaction_impartial_var03";
				default:
			}
		}
		else if (bVar0)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				case 1:
					return "female_dealer_reaction_good_var02";
				case 2:
					return "female_dealer_reaction_good_var03";
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				case 1:
					return "female_dealer_reaction_bad_var02";
				case 2:
					return "female_dealer_reaction_bad_var03";
				}
			default:
		}
	}
	else if (iVar1 < 12)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			case 1:
				return "reaction_impartial_var_02";
			case 2:
				return "reaction_impartial_var_03";
			case 3:
				return "reaction_impartial_var_04";
			default:
		}
	}
	else if (bVar0)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			case 1:
				return "reaction_good_var_02";
			case 2:
				return "reaction_good_var_03";
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			case 1:
				return "reaction_bad_var_02";
			case 2:
				return "reaction_bad_var_03";
			case 3:
				return "reaction_bad_var_04";
			}
		default:
	}
	return "";
}

int func_9(var uParam0, bool bParam1, bool bParam2)//Position - 0x648A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if ((func_11((*uParam0)[0]) != func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2])) && func_11((*uParam0)[1]) != func_11((*uParam0)[2]))
	{
		bVar0 = false;
		iVar1 = ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2]));
		if (iVar1 == 19)
		{
			if ((((func_11((*uParam0)[0]) == 14 || func_11((*uParam0)[0]) == 2) || func_11((*uParam0)[0]) == 3) && ((func_11((*uParam0)[1]) == 14 || func_11((*uParam0)[1]) == 2) || func_11((*uParam0)[1]) == 3)) && ((func_11((*uParam0)[2]) == 14 || func_11((*uParam0)[2]) == 2) || func_11((*uParam0)[2]) == 3))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 9)
		{
			if ((((func_11((*uParam0)[0]) == 2 || func_11((*uParam0)[0]) == 3) || func_11((*uParam0)[0]) == 4) && ((func_11((*uParam0)[1]) == 2 || func_11((*uParam0)[1]) == 3) || func_11((*uParam0)[1]) == 4)) && ((func_11((*uParam0)[2]) == 2 || func_11((*uParam0)[2]) == 3) || func_11((*uParam0)[2]) == 4))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 12)
		{
			if ((((func_11((*uParam0)[0]) == 3 || func_11((*uParam0)[0]) == 4) || func_11((*uParam0)[0]) == 5) && ((func_11((*uParam0)[1]) == 3 || func_11((*uParam0)[1]) == 4) || func_11((*uParam0)[1]) == 5)) && ((func_11((*uParam0)[2]) == 3 || func_11((*uParam0)[2]) == 4) || func_11((*uParam0)[2]) == 5))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 15)
		{
			if ((((func_11((*uParam0)[0]) == 4 || func_11((*uParam0)[0]) == 5) || func_11((*uParam0)[0]) == 6) && ((func_11((*uParam0)[1]) == 4 || func_11((*uParam0)[1]) == 5) || func_11((*uParam0)[1]) == 6)) && ((func_11((*uParam0)[2]) == 4 || func_11((*uParam0)[2]) == 5) || func_11((*uParam0)[2]) == 6))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 18)
		{
			if ((((func_11((*uParam0)[0]) == 5 || func_11((*uParam0)[0]) == 6) || func_11((*uParam0)[0]) == 7) && ((func_11((*uParam0)[1]) == 5 || func_11((*uParam0)[1]) == 6) || func_11((*uParam0)[1]) == 7)) && ((func_11((*uParam0)[2]) == 5 || func_11((*uParam0)[2]) == 6) || func_11((*uParam0)[2]) == 7))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 21)
		{
			if ((((func_11((*uParam0)[0]) == 6 || func_11((*uParam0)[0]) == 7) || func_11((*uParam0)[0]) == 8) && ((func_11((*uParam0)[1]) == 6 || func_11((*uParam0)[1]) == 7) || func_11((*uParam0)[1]) == 8)) && ((func_11((*uParam0)[2]) == 6 || func_11((*uParam0)[2]) == 7) || func_11((*uParam0)[2]) == 8))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 24)
		{
			if ((((func_11((*uParam0)[0]) == 7 || func_11((*uParam0)[0]) == 8) || func_11((*uParam0)[0]) == 9) && ((func_11((*uParam0)[1]) == 7 || func_11((*uParam0)[1]) == 8) || func_11((*uParam0)[1]) == 9)) && ((func_11((*uParam0)[2]) == 7 || func_11((*uParam0)[2]) == 8) || func_11((*uParam0)[2]) == 9))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 27)
		{
			if ((((func_11((*uParam0)[0]) == 8 || func_11((*uParam0)[0]) == 9) || func_11((*uParam0)[0]) == 10) && ((func_11((*uParam0)[1]) == 8 || func_11((*uParam0)[1]) == 9) || func_11((*uParam0)[1]) == 10)) && ((func_11((*uParam0)[2]) == 8 || func_11((*uParam0)[2]) == 9) || func_11((*uParam0)[2]) == 10))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 30)
		{
			if ((((func_11((*uParam0)[0]) == 9 || func_11((*uParam0)[0]) == 10) || func_11((*uParam0)[0]) == 11) && ((func_11((*uParam0)[1]) == 9 || func_11((*uParam0)[1]) == 10) || func_11((*uParam0)[1]) == 11)) && ((func_11((*uParam0)[2]) == 9 || func_11((*uParam0)[2]) == 10) || func_11((*uParam0)[2]) == 11))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 33)
		{
			if ((((func_11((*uParam0)[0]) == 10 || func_11((*uParam0)[0]) == 11) || func_11((*uParam0)[0]) == 12) && ((func_11((*uParam0)[1]) == 10 || func_11((*uParam0)[1]) == 11) || func_11((*uParam0)[1]) == 12)) && ((func_11((*uParam0)[2]) == 10 || func_11((*uParam0)[2]) == 11) || func_11((*uParam0)[2]) == 12))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 36)
		{
			if ((((func_11((*uParam0)[0]) == 11 || func_11((*uParam0)[0]) == 12) || func_11((*uParam0)[0]) == 13) && ((func_11((*uParam0)[1]) == 11 || func_11((*uParam0)[1]) == 12) || func_11((*uParam0)[1]) == 13)) && ((func_11((*uParam0)[2]) == 11 || func_11((*uParam0)[2]) == 12) || func_11((*uParam0)[2]) == 13))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 39)
		{
			if ((((func_11((*uParam0)[0]) == 12 || func_11((*uParam0)[0]) == 13) || func_11((*uParam0)[0]) == 14) && ((func_11((*uParam0)[1]) == 12 || func_11((*uParam0)[1]) == 13) || func_11((*uParam0)[1]) == 14)) && ((func_11((*uParam0)[2]) == 12 || func_11((*uParam0)[2]) == 13) || func_11((*uParam0)[2]) == 14))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (iVar1 == 19)
			{
				iVar1 = 6;
			}
			if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
			{
				return iVar1 + 500;
			}
			return iVar1 + 300;
		}
	}
	iVar2 = 0;
	if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + 100;
		}
		else
		{
			return func_11((*uParam0)[2]);
		}
	}
	else if (func_11((*uParam0)[1]) == func_11((*uParam0)[2]) && func_11((*uParam0)[1]) != func_11((*uParam0)[0]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[1]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0]);
		}
	}
	else if (func_11((*uParam0)[2]) == func_11((*uParam0)[0]) && func_11((*uParam0)[2]) != func_11((*uParam0)[1]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[1]);
		}
	}
	else if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) == func_11((*uParam0)[2]))
	{
		return ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2])) + 400;
	}
	else if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
	{
		iVar2 = 200;
	}
	if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]) && func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0]) + iVar2);
	}
	else if (func_11((*uParam0)[1]) > func_11((*uParam0)[0]) && func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[1]) + iVar2);
	}
	else if (func_11((*uParam0)[2]) > func_11((*uParam0)[0]) && func_11((*uParam0)[2]) > func_11((*uParam0)[1]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[2]) + iVar2);
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x70ED
{
	switch (iParam0)
	{
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
			return 0;
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
			return 1;
		case 27:
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
		case 39:
			return 2;
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			return 3;
		default:
	}
	return 3;
}

int func_11(int iParam0)//Position - 0x7245
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		case 10:
		case 23:
		case 36:
		case 49:
			return 10;
		case 11:
		case 24:
		case 37:
		case 50:
			return 11;
		case 12:
		case 25:
		case 38:
		case 51:
			return 12;
		case 13:
		case 26:
		case 39:
		case 52:
			return 13;
		case 1:
		case 14:
		case 27:
		case 40:
			return 14;
		default:
	}
	return 0;
}

char* func_12(int iParam0)//Position - 0x73C8
{
	if (Local_109.f_15[iParam0] > 7)
	{
		return "female_reveal_folded_p04";
	}
	return "reveal_folded_p04";
}

char* func_13(int iParam0)//Position - 0x73E7
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p04";
	}
	return "reveal_played_p04";
}

char* func_14(int iParam0)//Position - 0x7406
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p04";
	}
	return "reveal_blind_p04";
}

char* func_15(int iParam0)//Position - 0x7425
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p03";
	}
	return "reveal_folded_p03";
}

char* func_16(int iParam0)//Position - 0x7444
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p03";
	}
	return "reveal_played_p03";
}

char* func_17(int iParam0)//Position - 0x7463
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p03";
	}
	return "reveal_blind_p03";
}

char* func_18(int iParam0)//Position - 0x7482
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p02";
	}
	return "reveal_folded_p02";
}

char* func_19(int iParam0)//Position - 0x74A1
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p02";
	}
	return "reveal_played_p02";
}

char* func_20(int iParam0)//Position - 0x74C0
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p02";
	}
	return "reveal_blind_p02";
}

int func_21(int iParam0, int iParam1)//Position - 0x74DF
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 1;
	}
	if (!func_24(iParam0, iParam1) && !func_22(iParam1))
	{
		return func_53(11, &(Local_109.f_50[iParam0]), 0, -1);
	}
	return 1;
}

int func_22(int iParam0)//Position - 0x753E
{
	int iVar0;
	if (Local_151[iParam0 /*9*/].f_5 > 0)
	{
		iVar0 = func_9(&(Local_109.f_410[iParam0 /*5*/].f_1), 0, 0);
		if (func_23(iVar0) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)//Position - 0x7575
{
	if (iParam0 > 500)
	{
		return 40;
	}
	else if (iParam0 > 400)
	{
		return 30;
	}
	else if (iParam0 > 300)
	{
		return 6;
	}
	else if (iParam0 > 200)
	{
		return 4;
	}
	else if (iParam0 > 100)
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)//Position - 0x75C6
{
	int iVar0;
	int iVar1;
	if (Local_151[iParam1 /*9*/].f_3 > 0 && BitTest(Local_151[iParam1 /*9*/], 1))
	{
		iVar0 = func_9(&(Local_109.f_410[iParam1 /*5*/].f_1), 0, 0);
		iVar1 = func_9(&(Local_109.f_389[iParam0 /*5*/].f_1), 0, 0);
		if (!func_25(iVar1))
		{
			return 1;
		}
		if (iVar0 > iVar1)
		{
			return 1;
		}
		if (iVar0 == iVar1)
		{
			iVar0 = func_9(&(Local_109.f_410[iParam1 /*5*/].f_1), 1, 0);
			iVar1 = func_9(&(Local_109.f_389[iParam0 /*5*/].f_1), 1, 0);
			if (iVar0 > iVar1)
			{
				return 1;
			}
			if (iVar0 == iVar1)
			{
				iVar0 = func_9(&(Local_109.f_410[iParam1 /*5*/].f_1), 0, 1);
				iVar1 = func_9(&(Local_109.f_389[iParam0 /*5*/].f_1), 0, 1);
				if (iVar0 > iVar1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x769A
{
	if (iParam0 >= 12)
	{
		return 1;
	}
	return 0;
}

char* func_26(int iParam0)//Position - 0x76AE
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p01";
	}
	return "reveal_folded_p01";
}

char* func_27(int iParam0)//Position - 0x76CD
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p01";
	}
	return "reveal_played_p01";
}

char* func_28(int iParam0)//Position - 0x76EC
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p01";
	}
	return "reveal_blind_p01";
}

void func_29(int iParam0, int iParam1)//Position - 0x770B
{
	Local_109.f_581[iParam1] = iParam0;
}

char* func_30(int iParam0)//Position - 0x771E
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_self";
	}
	return "reveal_self";
}

char* func_31(int iParam0)//Position - 0x773D
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_put_down";
	}
	return "deck_put_down";
}

char* func_32(int iParam0)//Position - 0x775C
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_self";
	}
	return "deck_deal_self";
}

char* func_33(int iParam0)//Position - 0x777B
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p04";
	}
	return "deck_deal_p04";
}

char* func_34(int iParam0)//Position - 0x779A
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p03";
	}
	return "deck_deal_p03";
}

char* func_35(int iParam0)//Position - 0x77B9
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p02";
	}
	return "deck_deal_p02";
}

void func_36(int iParam0, int iParam1)//Position - 0x77D8
{
	Local_109.f_571[iParam1] = iParam0;
}

int func_37(var uParam0, var uParam1)//Position - 0x77EB
{
	if (*uParam0 >= uParam0->f_1)
	{
		return 0;
	}
	*uParam1 = uParam0->f_2[*uParam0];
	*uParam0++;
	return 1;
}

char* func_38(int iParam0)//Position - 0x7816
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p01";
	}
	return "deck_deal_p01";
}

int func_40(int iParam0, bool bParam1)//Position - 0x78DA
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_a_a");
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_02a");
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_03a");
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_04a");
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_05a");
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_06a");
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_07a");
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_08a");
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_09a");
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_10a");
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_j_a");
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_q_a");
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_k_a");
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_a_a");
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_02a");
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_03a");
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_04a");
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_05a");
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_06a");
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_07a");
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_08a");
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_09a");
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_10a");
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_j_a");
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_q_a");
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_k_a");
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_a_a");
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_02a");
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_03a");
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_04a");
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_05a");
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_06a");
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_07a");
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_08a");
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_09a");
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_10a");
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_j_a");
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_q_a");
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_k_a");
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_a_a");
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_02a");
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_03a");
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_04a");
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_05a");
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_06a");
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_07a");
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_08a");
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_09a");
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_10a");
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_j_a");
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_q_a");
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_k_a");
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_ace");
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_02");
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_03");
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_04");
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_05");
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_06");
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_07");
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_08");
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_09");
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_10");
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_jack");
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_queen");
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_king");
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_ace");
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_02");
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_03");
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_04");
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_05");
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_06");
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_07");
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_08");
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_09");
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_10");
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_jack");
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_queen");
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_king");
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_ace");
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_02");
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_03");
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_04");
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_05");
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_06");
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_07");
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_08");
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_09");
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_10");
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_jack");
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_queen");
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_king");
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_ace");
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_02");
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_03");
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_04");
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_05");
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_06");
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_07");
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_08");
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_09");
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_10");
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_jack");
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_queen");
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_king");
			}
		default:
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x7FE1
{
	return ((iParam0 * 3 * 4 + iParam2 * 3) + iParam1);
}

char* func_42(int iParam0)//Position - 0x7FF7
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_idle";
	}
	return "deck_idle";
}

char* func_43(int iParam0)//Position - 0x8018
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_shuffle";
	}
	return "deck_shuffle";
}

char* func_44(int iParam0)//Position - 0x8037
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_pick_up";
	}
	return "deck_pick_up";
}

int func_46(int iParam0, int iParam1)//Position - 0x8062
{
	return (iParam0 * 3 + iParam1);
}

int func_47(int iParam0)//Position - 0x8071
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	Var3 = { func_76(iParam0) };
	Var3.f_2 = (Var3.f_2 + 0.914f);
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar0 = func_46(iParam0, iVar4);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 53);
		iVar1 = func_40(iVar2, Local_152.f_5);
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_55[iVar0]))
		{
			STREAMING::REQUEST_MODEL(iVar1);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1) || !__LIB_1__::func_671(&(Local_109.f_55[iVar0]), iVar1, Var3, 1, 1, 1, 1, 1, 1, 1))
			{
				return 0;
			}
		}
		iVar4++;
	}
	return 1;
}

int func_48(int iParam0)//Position - 0x8108
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar1 = func_41(iParam0, iVar3, iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[iVar1]))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[iVar1]))
				{
					__LIB_1__::func_445(&(Local_109.f_68[iVar1]));
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[iVar1]);
					bVar0 = true;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar1 = func_46(iParam0, iVar4);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_55[iVar1]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[iVar1]))
			{
				__LIB_1__::func_445(&(Local_109.f_55[iVar1]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[iVar1]);
				bVar0 = true;
			}
		}
		iVar4++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

char* func_50(int iParam0)//Position - 0x821C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_51(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_51(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_51(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_51(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_109.f_117[(iParam0 * 4 + iVar2)] != __LIB_0__::func_162())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_109.f_15[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			case 1:
				return "female_acknowledge_p02";
			case 2:
				return "female_acknowledge_p03";
			case 3:
				return "female_acknowledge_p04";
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			case 1:
				return "acknowledge_p02";
			case 2:
				return "acknowledge_p03";
			case 3:
				return "acknowledge_p04";
			}
		default:
	}
	return "";
}

char* func_51(int iParam0, int iParam1)//Position - 0x8373
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_109.f_117[(iParam0 * 4 + iVar1)] != __LIB_0__::func_162())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_109.f_15[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			case 1:
				return "female_idle_single_p02";
			case 2:
				return "female_idle_single_p03";
			case 3:
				return "female_idle_single_p04";
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			case 1:
				return "idle_single_p02";
			case 2:
				return "idle_single_p03";
			case 3:
				return "idle_single_p04";
			}
		default:
	}
	return "";
}

void func_52(int iParam0, int iParam1)//Position - 0x8438
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	MISC::SET_BIT(&(Local_109.f_20[iParam0]), iParam1);
}

int func_53(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x8477
{
	char cVar0[64];
	int iVar1;
	char* sVar2;
	StringCopy(&cVar0, func_55(iParam0, iParam3), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NET_TO_PED(*uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar1))
	{
		return 0;
	}
	sVar2 = __LIB_0__::func_471(7);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iVar1, &cVar0, sVar2, 1);
	return 1;
}

char* func_55(int iParam0, int iParam1)//Position - 0x86E1
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_DEALER_PLACE_BET";
		case 1:
			return "MINIGAME_DEALER_ANOTHER_GO";
		case 3:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		case 2:
			return func_56(iParam1);
		case 4:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		case 5:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		case 6:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		case 7:
			return "MINIGAME_DEALER_REFUSE_BETS";
		case 9:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		case 21:
			return "MINIGAME_DEALER_CLOSED_BETS";
		case 8:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		case 10:
			return "MINIGAME_DEALER_BUSTS";
		case 11:
			return "MINIGAME_DEALER_WINS";
		case 12:
			return "MINIGAME_DEALER_PLACE_BET";
		case 13:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		case 14:
			return "MINIGAME_DEALER_PLACE_BET";
		case 15:
			return "";
		case 16:
			return "";
		case 17:
			return "";
		case 18:
			return "";
		case 19:
			return "";
		case 20:
			return "";
		default:
	}
	return "";
}

char* func_56(int iParam0)//Position - 0x8814
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!__LIB_0__::func_156(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (__LIB_4__::func_962(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_58(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (__LIB_0__::func_338(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

bool func_58(int iParam0)//Position - 0x88AC
{
	int iVar0;
	iVar0 = Local_151[*iParam0 /*9*/].f_2;
	return __LIB_40__::func_614(iVar0, Local_152.f_26);
}

int func_63(int iParam0, int iParam1)//Position - 0x89BD
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return BitTest(Local_109.f_20[iParam0], iParam1);
}

void func_64(int iParam0)//Position - 0x89FB
{
	MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 16);
	MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 17);
	MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 18);
	MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 19);
	MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 21);
}

void func_65(var uParam0)//Position - 0x8A49
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	*uParam0 = 0;
	uParam0->f_1 = 52;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			iVar0 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, uParam0->f_1);
			uVar2 = uParam0->f_2[iVar1];
			uParam0->f_2[iVar1] = uParam0->f_2[iVar0];
			uParam0->f_2[iVar0] = uVar2;
			iVar1++;
		}
		iVar3++;
	}
}

void func_66(int iParam0, int iParam1)//Position - 0x8AB1
{
	Local_109.f_576[iParam1] = iParam0;
}

void func_67(int iParam0)//Position - 0x8AC4
{
	struct<5> Var0;
	Local_109[iParam0] = 1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), __LIB_40__::func_615(), func_77(iParam0), 3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
			{
				Local_109.f_45[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_109.f_35[iParam0]);
				if (Local_109.f_45[iParam0] == -1 || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))))
				{
					Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_615(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]);
			}
			return;
		}
	}
	if (func_48(iParam0))
	{
		Local_109.f_20[iParam0] = 0;
		Var0.f_1 = 3;
		Local_109.f_389[iParam0 /*5*/] = { Var0 };
		Local_109.f_5[iParam0] = 0;
		__LIB_0__::func_794(&(Local_109.f_150[iParam0 /*2*/]));
		func_79(1, iParam0);
		func_66(0, iParam0);
		func_36(0, iParam0);
		func_29(0, iParam0);
		Local_109.f_25[iParam0]++;
		Local_109[iParam0] = 0;
	}
}

int func_68(int iParam0, bool bParam1)//Position - 0x8C66
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_109.f_117[(iParam0 * 4 + iVar1)] != __LIB_0__::func_162() && Local_109.f_410[Local_109.f_117[(iParam0 * 4 + iVar1)] /*5*/] > 0)
			{
				iVar0++;
			}
			else
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]);
					}
					else
					{
						__LIB_1__::func_445(&(Local_109.f_68[func_41(iParam0, 0, iVar1)]));
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]);
					}
					else
					{
						__LIB_1__::func_445(&(Local_109.f_68[func_41(iParam0, 1, iVar1)]));
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]);
					}
					else
					{
						__LIB_1__::func_445(&(Local_109.f_68[func_41(iParam0, 2, iVar1)]));
					}
				}
			}
		}
		else if (Local_109.f_117[(iParam0 * 4 + iVar1)] != __LIB_0__::func_162())
		{
			iVar0++;
		}
		else
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]);
				}
				else
				{
					__LIB_1__::func_445(&(Local_109.f_68[func_41(iParam0, 0, iVar1)]));
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]);
				}
				else
				{
					__LIB_1__::func_445(&(Local_109.f_68[func_41(iParam0, 1, iVar1)]));
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]);
				}
				else
				{
					__LIB_1__::func_445(&(Local_109.f_68[func_41(iParam0, 2, iVar1)]));
				}
			}
		}
		iVar1++;
	}
	if (Local_109.f_30[iParam0] != iVar0)
	{
		Local_109.f_30[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

char* func_70(int iParam0, int iParam1)//Position - 0x8F17
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			case 1:
				return "female_acknowledge_p02";
			case 2:
				return "female_acknowledge_p03";
			case 3:
				return "female_acknowledge_p04";
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			case 1:
				return "acknowledge_p02";
			case 2:
				return "acknowledge_p03";
			case 3:
				return "acknowledge_p04";
			}
		default:
	}
	return "";
}

char* func_74(int iParam0)//Position - 0x9057
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			case 1:
				return "female_idle_var_02";
			case 2:
				return "female_idle_var_03";
			case 3:
				return "female_idle_var_04";
			case 4:
				return "female_idle_var_05";
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "idle_var_01";
			case 1:
				return "idle_var_02";
			case 2:
				return "idle_var_03";
			case 3:
				return "idle_var_04";
			case 4:
				return "idle_var_05";
			}
		default:
	}
	return "";
}

float func_75(int iParam0)//Position - 0x910A
{
	if (Local_152.f_26 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -135f;
			case 1:
				return 45f;
			case 2:
				return -45f;
			case 3:
				return -45f;
			}
		default:
	}
	return 0f;
}

Vector3 func_76(int iParam0)//Position - 0x9166
{
	if (Local_152.f_26 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1143.3379f, 264.2453f, -52.8409f;
			case 1:
				return 1146.329f, 261.2543f, -52.8409f;
			case 2:
				return 1133.74f, 266.6947f, -52.0409f;
			case 3:
				return 1148.74f, 251.6947f, -52.0409f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

char* func_77(int iParam0)//Position - 0x91F6
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

void func_79(int iParam0, int iParam1)//Position - 0x9221
{
	Local_109.f_586[iParam1] = iParam0;
}

void func_80(var uParam0)//Position - 0x9234
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar2 = 52;
	iVar3 = 0;
	while (iVar3 < 52)
	{
		iVar1 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar2);
		iVar4 = 0;
		while (iVar4 < 52)
		{
			iVar6 = (iVar4 / 32);
			bVar7 = (iVar4 % 32);
			if (iVar5 == iVar1 && !BitTest(uVar0[iVar6], bVar7))
			{
				MISC::SET_BIT(&(uVar0[iVar6]), bVar7);
				uParam0->f_2[iVar3] = iVar4 + 1;
			}
			else
			{
				if (!BitTest(uVar0[iVar6], bVar7))
				{
					iVar5++;
				}
				iVar4++;
			}
		}
		iVar5 = 0;
		iVar2 = (iVar2 - 1);
		iVar3++;
	}
	uParam0->f_1 = 52;
}

void func_81()//Position - 0x92D6
{
	int iVar0;
	if (!__LIB_1__::func_548(PLAYER::PLAYER_ID()))
	{
		iVar0 = iLocal_186;
		if (Global_2788829 != iVar0 && (Global_2788829 != -1 || __LIB_2__::func_885(PLAYER::PLAYER_ID())))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]))
			{
				func_82(iVar0);
			}
		}
		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0]))
			{
				__LIB_1__::func_445(&(Local_109.f_50[iVar0]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0]);
			}
		}
	}
	iLocal_186++;
	if (iLocal_186 >= Local_152.f_26)
	{
		iLocal_186 = 0;
	}
}

void func_82(int iParam0)//Position - 0x937C
{
	int iVar0;
	int iVar1;
	iVar0 = joaat("S_M_Y_Casino_01");
	if (Local_109.f_15[iParam0] >= 7)
	{
		iVar0 = joaat("S_F_Y_Casino_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(__LIB_40__::func_615());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_40__::func_615()))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(true);
			}
			iVar1 = PED::CREATE_PED(26, iVar0, func_76(iParam0), func_75(iParam0), true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
			PED::SET_PED_AS_ENEMY(iVar1, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			PED::SET_PED_RESET_FLAG(iVar1, 249, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 185, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 108, true);
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar1, true);
			PED::SET_PED_CAN_EVASIVE_DIVE(iVar1, false);
			PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iVar1, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar1, false);
			PED::SET_PED_CONFIG_FLAG(iVar1, 208, true);
			PED::SET_PED_CAN_RAGDOLL(iVar1, false);
			__LIB_40__::func_617(Local_109.f_15[iParam0], &iVar1);
			__LIB_40__::func_616(Local_109.f_15[iParam0], &iVar1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_76(iParam0), false, false, true);
			ENTITY::SET_ENTITY_HEADING(iVar1, func_75(iParam0));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				Local_109.f_50[iParam0] = NETWORK::PED_TO_NET(iVar1);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_109.f_50[iParam0], false);
					Local_109.f_10[iParam0] = 1;
					Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], __LIB_40__::func_615(), func_77(iParam0), 1000f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
					STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_615());
				}
			}
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(false);
			}
		}
	}
}

void func_87()//Position - 0x9E59
{
	struct<5> Var0;
	bool bVar1;
	int iVar2;
	Var0.f_1 = 3;
	bVar1 = false;
	iVar2 = iLocal_185;
	if (Local_151[iVar2 /*9*/].f_2 == -1)
	{
		Local_109.f_410[iVar2 /*5*/] = { Var0 };
	}
	if (Local_151[iVar2 /*9*/].f_7 == 0)
	{
		if (Local_109.f_600[iVar2] != 0)
		{
			Local_109.f_600[iVar2] = 0;
		}
	}
	if (!bVar1)
	{
		if (func_88(iVar2))
		{
			bVar1 = true;
		}
	}
	iLocal_185++;
	if (iLocal_185 >= 32)
	{
		iLocal_185 = 0;
	}
}

int func_88(int iParam0)//Position - 0x9ED8
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_40__::func_627())
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!__LIB_0__::func_156(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_151[iParam0 /*9*/].f_7.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 1)
	{
		if (func_53(2, &(Local_109.f_50[iVar2]), 0, iParam0))
		{
			func_89(iParam0, 1);
		}
		return 1;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 2)
	{
		if (func_53(3, &(Local_109.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 2);
		}
		return 1;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 4)
	{
		if (func_53(4, &(Local_109.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 4);
		}
		return 1;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 5)
	{
		if (func_53(5, &(Local_109.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 5);
		}
		return 1;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 6)
	{
		if (func_53(6, &(Local_109.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 6);
		}
		return 1;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 7)
	{
		if (func_53(7, &(Local_109.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1)//Position - 0xA03A
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	MISC::SET_BIT(&(Local_109.f_600[iParam0]), iVar0);
}

void func_90()//Position - 0xA07F
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_184;
	if (Local_109.f_117[iVar0] != __LIB_0__::func_162())
	{
		iVar1 = Local_109.f_117[iVar0];
		if (((!__LIB_0__::func_156(Local_109.f_117[iVar0], 1, 1) || Local_151[iVar1 /*9*/].f_1 == -1) || Local_151[iVar1 /*9*/].f_1 != iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_109.f_117[iVar0]))
		{
			Local_109.f_117[iVar0] = __LIB_0__::func_162();
			if (Local_109.f_600[iVar0] != 0)
			{
				Local_109.f_600[iVar0] = 0;
			}
		}
	}
	if (__LIB_0__::func_156(iVar0, 1, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		if (Local_151[iVar0 /*9*/].f_1 > -1 && Local_151[iVar0 /*9*/].f_1 < 32)
		{
			if (Local_109.f_117[Local_151[iVar0 /*9*/].f_1] == __LIB_0__::func_162())
			{
				if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
				{
					Local_109.f_117[Local_151[iVar0 /*9*/].f_1] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
			}
		}
	}
	iLocal_184++;
	if (iLocal_184 >= 32)
	{
		iLocal_184 = 0;
	}
}

void func_91()//Position - 0xA193
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<16> Var6;
	struct<3> Var7;
	if (!Local_152.f_5)
	{
		if (__LIB_2__::func_885(PLAYER::PLAYER_ID()) && __LIB_11__::func_612() != __LIB_0__::func_162())
		{
			if (BitTest(Global_2689235[__LIB_11__::func_612() /*453*/].f_318.f_4, 4))
			{
				Local_152.f_5 = 1;
				func_407();
				iLocal_179 = 1;
			}
		}
	}
	else if (iLocal_179)
	{
		if (func_406())
		{
			iLocal_179 = 0;
		}
	}
	func_405();
	Local_152.f_19 = __LIB_40__::func_632();
	func_392();
	func_388();
	func_385();
	if (Local_152.f_798 > 2)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/))
		{
		}
		if (__LIB_40__::func_623(Local_152.f_18) >= 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_76(__LIB_40__::func_623(Local_152.f_18)), true) > 5f)
		{
			func_379(0);
		}
	}
	if (Local_152.f_798 > 5)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		__LIB_40__::func_631(1);
		__LIB_17__::func_97(1, 0);
	}
	if (Local_152.f_798 > 6)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 0)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
			}
		}
		CAM::BLOCK_FIRST_PERSON_ORIENTATION_RESET_THIS_UPDATE();
	}
	if (Local_152.f_798 > 7)
	{
		func_372(&(Local_151[PLAYER::PLAYER_ID() /*9*/]));
	}
	if (__LIB_1__::func_512())
	{
		bLocal_181 = true;
	}
	else if (bLocal_181)
	{
		__LIB_0__::func_627(&uLocal_182, 0, 0);
		bLocal_181 = false;
	}
	else if (__LIB_0__::func_864(&uLocal_182) && __LIB_0__::func_937(&uLocal_182, 500, 0))
	{
		__LIB_0__::func_794(&uLocal_182);
	}
	switch (Local_152.f_798)
	{
		case 0:
			if (func_365())
			{
				Local_152.f_796 = "idle_cardgames";
				Local_152.f_22 = 0;
				Local_151[PLAYER::PLAYER_ID() /*9*/] = 0;
				Local_151[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
				Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
				Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
				func_364(PLAYER::PLAYER_ID());
				func_363(1);
			}
			break;
		case 1:
			switch (__LIB_40__::func_623(Local_152.f_18))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_152.f_16 = 5000;
					Local_152.f_17 = 10;
					Local_152.f_27 = 500;
					Local_152.f_28 = 10;
					break;
				case 2:
				case 3:
					bVar0 = true;
					Local_152.f_16 = 50000;
					Local_152.f_17 = 1000;
					Local_152.f_27 = 5000;
					Local_152.f_28 = 1000;
					break;
			}
			if (Local_152.f_26 == 1)
			{
				bVar0 = true;
				Local_152.f_16 = 50000;
				Local_152.f_17 = 1000;
				Local_152.f_27 = 5000;
				Local_152.f_28 = 1000;
			}
			if (((((((((((((((((((((((!Global_262145.f_26944 /* Tunable: VC_CASINO_DISABLE_POKER */ && !(Global_262145.f_26946 /* Tunable: VC_CASINO_DISABLE_POKER_LOW */ && !bVar0)) && !(Global_262145.f_26945 /* Tunable: VC_CASINO_DISABLE_POKER_HIGH */ && bVar0)) && ((__LIB_4__::func_63(joaat("rm_GamingFloor_02")) || __LIB_4__::func_63(joaat("rm_GamingFloor_03"))) || __LIB_2__::func_885(PLAYER::PLAYER_ID()))) && __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), func_361(Local_152.f_18), 1.5f, 1)) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), func_359(Local_152.f_18), 40f)) && Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] == 0) && !BitTest(Global_1946250.f_4, 2)) && !Global_2667225.f_2681) && Global_2788829 != __LIB_40__::func_623(Local_152.f_18)) && (Global_2788829 != -1 || __LIB_2__::func_885(PLAYER::PLAYER_ID()))) && func_354()) && !__LIB_16__::func_265()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2667225.f_2681) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !__LIB_1__::func_16()) && !__LIB_0__::func_626()) && !__LIB_4__::func_911()) && !Global_2725439.f_12) && Global_1946244 != 33) && !__LIB_3__::func_597())
			{
				func_363(2);
			}
			else
			{
				Local_152.f_18++;
				if (Local_152.f_18 >= Local_152.f_26 * 4)
				{
					Local_152.f_18 = 0;
				}
			}
			break;
		case 2:
			func_341();
			func_364(PLAYER::PLAYER_ID());
			if (((((((((((((((((((((__LIB_4__::func_63(joaat("rm_GamingFloor_02")) || __LIB_4__::func_63(joaat("rm_GamingFloor_03"))) || __LIB_2__::func_885(PLAYER::PLAYER_ID())) && __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), func_361(Local_152.f_18), 1.5f, 1)) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), func_359(Local_152.f_18), 40f)) && Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] == 0) && Global_2788829 != __LIB_40__::func_623(Local_152.f_18)) && (Global_2788829 != -1 || __LIB_2__::func_885(PLAYER::PLAYER_ID()))) && func_354()) && !__LIB_16__::func_265()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2667225.f_2681) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !__LIB_1__::func_16()) && !__LIB_0__::func_626()) && !__LIB_4__::func_911()) && !Global_2725439.f_12) && Global_1946244 != 33) && !Local_109[__LIB_40__::func_623(Local_152.f_18)]) && !__LIB_3__::func_597())
			{
				if ((((((__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !bLocal_181) && !__LIB_0__::func_864(&uLocal_182))
				{
					if (__LIB_9__::func_559(2, &uVar1))
					{
						if (!__LIB_0__::func_1("TCP_NA" /* GXT: This feature is not available for you. */))
						{
							__LIB_0__::func_190("TCP_NA" /* GXT: This feature is not available for you. */);
						}
					}
					else if (Local_109.f_117[Local_152.f_18] != __LIB_0__::func_162())
					{
						if (!__LIB_0__::func_1("TCP_USED" /* GXT: This seat is currently in use. */))
						{
							__LIB_0__::func_190("TCP_USED" /* GXT: This seat is currently in use. */);
						}
					}
					else if (__LIB_33__::func_307())
					{
						if (__LIB_16__::func_263() == 2)
						{
							if (!__LIB_0__::func_1("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */))
							{
								__LIB_0__::func_190("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */);
							}
						}
						else if (!__LIB_0__::func_1("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */))
						{
							__LIB_0__::func_190("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */);
						}
					}
					else if ((!__LIB_1__::func_124(PLAYER::PLAYER_ID()) && (__LIB_40__::func_623(Local_152.f_18) == 2 || __LIB_40__::func_623(Local_152.f_18) == 3)) && !(__LIB_1__::func_520(1) && __LIB_1__::func_124(__LIB_0__::func_797())))
					{
						if (!__LIB_0__::func_1("CAS_MG_SUITE2" /* GXT: A VIP Membership is required to play High Limit. Purchase a Penthouse from www.thediamondcasinoandresort.com to become a VIP member. */))
						{
							__LIB_0__::func_190("CAS_MG_SUITE2" /* GXT: A VIP Membership is required to play High Limit. Purchase a Penthouse from www.thediamondcasinoandresort.com to become a VIP member. */);
						}
					}
					else if (!__LIB_9__::func_558() && !(__LIB_1__::func_520(1) && __LIB_4__::func_153(__LIB_0__::func_797())))
					{
						if (!__LIB_5__::func_831("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, __LIB_9__::func_562(1)))
						{
							__LIB_9__::func_821("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, __LIB_9__::func_562(1));
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/))
						{
							HUD::CLEAR_HELP(true);
							__LIB_16__::func_175();
							func_363(3);
						}
					}
					else if (Local_152.f_19 <= 0)
					{
						if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
						{
							if (!__LIB_0__::func_1("CAS_MG_NOCHIPS7" /* GXT: Chips are required to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */))
							{
								__LIB_0__::func_190("CAS_MG_NOCHIPS7" /* GXT: Chips are required to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */);
							}
						}
						else if (!__LIB_0__::func_1("CAS_MG_NOCHIPS3" /* GXT: Chips are required to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */))
						{
							__LIB_0__::func_190("CAS_MG_NOCHIPS3" /* GXT: Chips are required to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */);
						}
					}
					else if (Local_152.f_19 < Local_152.f_28)
					{
						if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
						{
							if (!__LIB_0__::func_1("CAS_MG_LOWCHIPS7" /* GXT: You don't have enough Chips to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */))
							{
								__LIB_0__::func_190("CAS_MG_LOWCHIPS7" /* GXT: You don't have enough Chips to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */);
							}
						}
						else if (!__LIB_0__::func_1("CAS_MG_LOWCHIPS3" /* GXT: You don't have enough Chips to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */))
						{
							__LIB_0__::func_190("CAS_MG_LOWCHIPS3" /* GXT: You don't have enough Chips to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */);
						}
					}
					else if (Local_152.f_31 == -1)
					{
						if (func_321())
						{
							HUD::CLEAR_HELP(true);
						}
						if (((!__LIB_1__::func_124(PLAYER::PLAYER_ID()) && (__LIB_40__::func_623(Local_152.f_18) == 2 || __LIB_40__::func_623(Local_152.f_18) == 3)) && !(__LIB_1__::func_520(1) && __LIB_1__::func_124(__LIB_0__::func_797()))) || (!__LIB_9__::func_558() && (__LIB_1__::func_520(1) && __LIB_4__::func_153(__LIB_0__::func_797()))))
						{
							if (__LIB_15__::func_273(__LIB_0__::func_797()) == 1)
							{
								Local_152.f_25 = 1;
								__LIB_5__::func_569(&(Local_152.f_31), 4, "TCP_PLAY_A" /* GXT: Press ~INPUT_CONTEXT~ to play Three Card Poker using your MC President's casino membership. */, 0, 0, 0, 0);
							}
							else if (__LIB_3__::func_39(__LIB_0__::func_797()))
							{
								Local_152.f_25 = 2;
								__LIB_5__::func_569(&(Local_152.f_31), 4, "TCP_PLAY_B" /* GXT: Press ~INPUT_CONTEXT~ to play Three Card Poker using your CEO's casino membership. */, 0, 0, 0, 0);
							}
							else
							{
								Local_152.f_25 = 3;
								__LIB_5__::func_569(&(Local_152.f_31), 4, "TCP_PLAY_C" /* GXT: Press ~INPUT_CONTEXT~ to play Three Card Poker using your VIP's casino membership. */, 0, 0, 0, 0);
							}
						}
						else
						{
							Local_152.f_25 = 0;
							__LIB_5__::func_569(&(Local_152.f_31), 4, "TCP_PLAY" /* GXT: Press ~INPUT_CONTEXT~ to play Three Card Poker. */, 0, 0, 0, 0);
						}
					}
					else if (__LIB_3__::func_113(Local_152.f_31, 1))
					{
						__LIB_3__::func_122(&(Local_152.f_31));
						Local_152.f_31 = -1;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
						__LIB_1__::func_92();
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 1048832, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						func_363(4);
					}
				}
				else
				{
					if (func_321())
					{
						HUD::CLEAR_HELP(true);
					}
					if (Local_152.f_31 != -1)
					{
						__LIB_3__::func_122(&(Local_152.f_31));
						Local_152.f_31 = -1;
					}
					Local_152.f_18 = 0;
					func_363(1);
				}
			}
			else
			{
				if (func_321())
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_152.f_31 != -1)
				{
					__LIB_3__::func_122(&(Local_152.f_31));
					Local_152.f_31 = -1;
				}
				Local_152.f_18 = 0;
				func_363(1);
			}
			break;
		case 3:
			if (!__LIB_15__::func_264())
			{
				func_363(2);
			}
			break;
		case 4:
			__LIB_40__::func_631(1);
			sVar2 = "CasinoUI_Cards_Three";
			if ((__LIB_40__::func_623(Local_152.f_18) == 2 || __LIB_40__::func_623(Local_152.f_18) == 3) || __LIB_2__::func_885(PLAYER::PLAYER_ID()))
			{
				sVar2 = "CasinoUI_Cards_Three_High";
			}
			if (BitTest(Global_1946250.f_5, 22))
			{
				__LIB_0__::func_627(&(Local_152.f_792), 0, 0);
				func_300(Local_152.f_18);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				else
				{
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				func_363(5);
			}
			else
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar2, false);
				if (__LIB_3__::func_67(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar2))
				{
					if (!iLocal_180)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
						__LIB_1__::func_602(0, 0);
						__LIB_3__::func_566(1, sVar2, sVar2);
						__LIB_1__::func_767("TCP_TITLE" /* GXT: THREE CARD POKER */);
						__LIB_3__::func_781(-1, 1, 1);
						__LIB_1__::func_789("TCP_DIS" /* GXT: ~a~~n~~n~~a~~n~~n~~a~ */, 0, 0);
						__LIB_3__::func_542("TCP_DIS1" /* GXT: The aim of Three Card Poker is to make the best poker hand possible with three cards, comparing your hand against the Dealer's hand. */);
						__LIB_3__::func_542("TCP_DIS2" /* GXT: Bets can be placed on the Ante, Pair Plus, or both. Play and Ante bets pay out 1 to 1 if your hand beats the Dealer's hand. A Straight or higher is needed to receive the Ante Bonus. */);
						__LIB_3__::func_542("TCP_DIS3" /* GXT: For Pair Plus, you are betting on your own hand only, and must have a Pair or better to receive a payout. */);
						__LIB_1__::func_791(202, "TCP_EXIT" /* GXT: Quit */, -1);
						__LIB_1__::func_791(201, "TCP_CONT" /* GXT: Continue */, -1);
						iLocal_180 = 1;
					}
					__LIB_11__::func_266(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					__LIB_1__::func_895(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_180 = 0;
					func_251();
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					__LIB_1__::func_895(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_180 = 0;
					MISC::SET_BIT(&(Global_1946250.f_5), 22);
					__LIB_0__::func_627(&(Local_152.f_792), 0, 0);
					func_300(Local_152.f_18);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
					}
					else
					{
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
					}
					func_363(5);
				}
			}
			break;
		case 5:
			if ((((func_250(Local_152.f_18) && !__LIB_3__::func_558()) && !__LIB_1__::func_512()) && func_354()) && !__LIB_16__::func_265())
			{
				__LIB_0__::func_794(&(Local_152.f_792));
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 3);
				__LIB_16__::func_266(2);
				func_363(6);
			}
			else
			{
				if (__LIB_3__::func_558())
				{
					func_251();
				}
				if (__LIB_1__::func_512())
				{
					func_251();
				}
				if (func_240(Local_152.f_18))
				{
					func_251();
				}
				if (func_239())
				{
					func_251();
				}
				if (!func_354())
				{
					func_251();
				}
				if (__LIB_16__::func_265())
				{
					func_251();
				}
			}
			break;
		case 6:
			if (!__LIB_3__::func_558() && !__LIB_1__::func_512())
			{
				if (func_238())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 1 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 2)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
					}
					fVar3 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), func_237(Local_152.f_18, 0), 1);
					fVar4 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), func_237(Local_152.f_18, 1), 1);
					fVar5 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), func_237(Local_152.f_18, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_152.f_21 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_152.f_21 = 2;
					}
					else
					{
						Local_152.f_21 = 0;
					}
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_237(Local_152.f_18, Local_152.f_21), 1f, 5000, func_235(Local_152.f_18, Local_152.f_21), 0.01f);
					func_363(7);
				}
			}
			else
			{
				func_251();
			}
			break;
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
			{
				Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_152.f_18), func_233(Local_152.f_18), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, __LIB_40__::func_622(), __LIB_40__::func_621(Local_152.f_21), 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
				Local_151[PLAYER::PLAYER_ID() /*9*/].f_7.f_1 = Local_151[PLAYER::PLAYER_ID() /*9*/].f_2;
				func_363(8);
			}
			break;
		case 8:
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(joaat("CASINO_POKER_CAMERA"));
			Local_152.f_30 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_152.f_24);
			if (func_230())
			{
				func_229(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 2);
			}
			else
			{
				func_229(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 1);
			}
			if (Local_152.f_30 != -1)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showui"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))
				{
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
					Local_162 = { Var6 };
					if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
					{
						Local_162.f_0 = 1695074466;
					}
					else if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 3)
					{
						Local_162.f_0 = joaat("high stakes");
					}
					else
					{
						Local_162.f_0 = joaat("standard");
					}
					Local_162.f_1 = Local_151[PLAYER::PLAYER_ID() /*9*/].f_2;
					Local_162.f_6 = 1;
					if (__LIB_1__::func_124(PLAYER::PLAYER_ID()))
					{
						Local_162.f_15 = joaat("VIP membership");
					}
					else if (__LIB_9__::func_558())
					{
						Local_162.f_15 = joaat("paid membership");
					}
					else if (__LIB_1__::func_520(1) && (__LIB_1__::func_124(__LIB_0__::func_797()) || __LIB_40__::func_630(PLAYER::PLAYER_ID())))
					{
						Local_162.f_15 = joaat("Gang membership");
					}
					else
					{
						Local_162.f_15 = joaat("no membership");
					}
					__LIB_0__::func_627(&uLocal_159, 0, 0);
					func_226();
					Local_152.f_32 = __LIB_40__::func_632();
					func_363(9);
				}
			}
			break;
		case 9:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(joaat("CASINO_POKER_CAMERA"));
			func_95();
			break;
		case 10:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
			{
				func_229(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), func_94());
				Var7 = { PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/), PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/), 0f };
				Local_152.f_30 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_152.f_24);
				if (Local_152.f_7)
				{
					if (Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
					{
						Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_152.f_18), func_233(Local_152.f_18), 2, false, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, __LIB_40__::func_622(), __LIB_40__::func_618(Local_152.f_18), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
						Local_152.f_7 = 0;
					}
				}
				else if (Local_152.f_30 != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) || (SYSTEM::VMAG(Var7) >= 0.24f && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")))))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
					STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_613());
					STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_615());
					STREAMING::REMOVE_ANIM_DICT(func_92());
					STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_622());
					func_407();
					MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 3);
					func_341();
					func_363(2);
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
				STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_613());
				STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_615());
				STREAMING::REMOVE_ANIM_DICT(func_92());
				STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_622());
				MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 3);
				func_341();
				func_363(2);
			}
			break;
	}
}

char* func_92()//Position - 0xB2EE
{
	return "anim_casino_b@amb@casino@games@threecardpoker@player";
}

int func_94()//Position - 0xB344
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_40__::func_632();
	iVar1 = (iVar0 - Local_152.f_32);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_95()//Position - 0xB371
{
	int iVar0;
	struct<9> Var1;
	struct<5> Var2;
	struct<23> Var3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	char* sVar29;
	bool bVar30;
	bool bVar31;
	if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
	{
		if (func_225(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2))
		{
			__LIB_0__::func_151("TCP_ERROR" /* GXT: Something went wrong with the game. */, -1);
			return;
		}
	}
	func_211();
	if (__LIB_40__::func_627())
	{
		Local_162.f_10 = 1;
	}
	Local_162.f_11 = __LIB_40__::func_629();
	if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_pickup", 3)) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)) && !Local_152.f_1) && !func_208())
	{
		Local_161.f_4 = joaat("QUIT");
		Local_162.f_2 = joaat("QUIT");
		Local_161.f_22 = joaat("QUIT");
		Local_161.f_7 = __LIB_40__::func_632();
		Local_161.f_17 = __LIB_1__::func_724(&uLocal_157, 0, 0);
		Local_161.f_18 = __LIB_40__::func_627();
		Local_161.f_19 = __LIB_40__::func_629();
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
		{
			Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
		}
		if ((Local_152.f_797 > 1 || Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 != 0) || Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 != 0)
		{
			if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
			{
				STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
			}
		}
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0 && !Local_152.f_2)
		{
			__LIB_16__::func_179(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
		}
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 > 0 && !Local_152.f_6)
		{
			__LIB_16__::func_179(Local_151[PLAYER::PLAYER_ID() /*9*/].f_5);
		}
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 > 0 && !Local_152.f_3)
		{
			__LIB_16__::func_179(Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
		}
		SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
		SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_5));
		SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_4));
		func_379(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (((Global_2788829 == Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 || Global_2725439.f_12) || Global_1946244 == 33) || !__LIB_0__::func_893())
	{
		Local_161.f_7 = __LIB_40__::func_632();
		Local_161.f_17 = __LIB_1__::func_724(&uLocal_157, 0, 0);
		Local_161.f_18 = __LIB_40__::func_627();
		Local_161.f_19 = __LIB_40__::func_629();
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
		{
			Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
		}
		if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
		{
			STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
		}
		func_379(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (Local_152.f_24 > -1)
	{
		Local_152.f_30 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_152.f_24);
		if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_idle", 3)) && !BitTest(Local_152.f_22, 0)) && !Local_152.f_1)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), __LIB_40__::func_622(), "idle_cardgames", 3))
			{
				if (Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
				{
					Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, __LIB_40__::func_622(), "idle_cardgames", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
					Local_152.f_796 = "idle_cardgames";
				}
			}
			else if (Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
			{
				Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, __LIB_40__::func_622(), func_203(0), 2f, -2f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
			}
		}
	}
	if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
	{
		__LIB_1__::func_539(&(Local_152.f_90));
		if (!BitTest(Local_152.f_20, 0) && !BitTest(Local_152.f_20, 3))
		{
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), "TCP_EXIT" /* GXT: Quit */, &(Local_152.f_90), 0);
			if (((((Local_152.f_797 == 3 && Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0) && !BitTest(Local_152.f_22, 2)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_152.f_22, 1)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 3))
			{
				__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "TCP_PLAY_HAND" /* GXT: Play */, &(Local_152.f_90), 0);
				__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true), "TCP_FOLD_HAND" /* GXT: Fold */, &(Local_152.f_90), 0);
			}
			if (Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] == 3 && ((Local_152.f_19 >= Local_152.f_28 || Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 != 0) || Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 != 0))
			{
				if (!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 0) && !BitTest(Local_152.f_22, 0))
				{
					if (Local_152.f_19 >= Local_152.f_17 * 2)
					{
						__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "TCP_PLACE" /* GXT: Place Ante Bet */, &(Local_152.f_90), 0);
					}
					__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true), "TCP_DECLINEA" /* GXT: Decline Ante Bet */, &(Local_152.f_90), 0);
					if (Local_152.f_19 >= Local_152.f_17 * 2)
					{
						if (!BitTest(Local_152.f_22, 8))
						{
							__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/, true), "TCP_BET_MAX" /* GXT: Max Bet */, &(Local_152.f_90), 0);
						}
						__LIB_16__::func_170(2, 7, "TCP_BET_NUM" /* GXT: Adjust Bet */, &(Local_152.f_90));
					}
				}
				else if ((!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 2) && Local_152.f_19 >= (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_152.f_28)) && !BitTest(Local_152.f_22, 0))
				{
					__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "TCP_PLACE_PP" /* GXT: Place Pair Plus Bet */, &(Local_152.f_90), 0);
					__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true), "TCP_DECLINE" /* GXT: Decline Pair Plus Bet */, &(Local_152.f_90), 0);
					if (!BitTest(Local_152.f_22, 8))
					{
						__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/, true), "TCP_BET_MAX" /* GXT: Max Bet */, &(Local_152.f_90), 0);
					}
					__LIB_16__::func_170(2, 7, "TCP_BET_NUM" /* GXT: Adjust Bet */, &(Local_152.f_90));
				}
			}
		}
		if (BitTest(Local_152.f_20, 0))
		{
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), "IB_BACK" /* GXT: Back */, &(Local_152.f_90), 0);
			__LIB_16__::func_170(2, 8, "IB_TAB" /* GXT: Previous/Next Page */, &(Local_152.f_90));
		}
		else if (BitTest(Local_152.f_20, 3))
		{
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), "IB_BACK" /* GXT: Back */, &(Local_152.f_90), 0);
		}
		if (Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] < 12)
		{
			if (Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] > 0)
			{
				__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/, true), "TCP_DLR" /* GXT: Dealer's Cards */, &(Local_152.f_90), 0);
			}
			if (Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] > 0)
			{
				if (BitTest(Local_152.f_22, 4) || BitTest(Local_109.f_20[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2], func_198(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1)))
				{
					__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true), "TCP_CARDS" /* GXT: Your Cards */, &(Local_152.f_90), 0);
				}
				else if (((((Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0 && Local_152.f_797 == 3) && !BitTest(Local_152.f_22, 2)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_152.f_22, 1)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 3))
				{
					__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true), "TCP_PICK_UP" /* GXT: Pick Up Cards */, &(Local_152.f_90), 0);
				}
			}
		}
		if (!BitTest(Local_152.f_20, 0) && !BitTest(Local_152.f_20, 3))
		{
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true), "TCP_RULESb" /* GXT: Rules */, &(Local_152.f_90), 0);
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/, true), "TCP_HANDSb" /* GXT: Hand Rankings */, &(Local_152.f_90), 0);
		}
		Var1 = { __LIB_1__::func_404() };
		__LIB_6__::func_206(&(Local_152.f_90), 1f);
		__LIB_5__::func_693(&(Local_152.f_89), &Var1, &(Local_152.f_90), __LIB_1__::func_402(&(Local_152.f_90)));
		__LIB_0__::func_876(1);
	}
	func_182();
	func_162();
	switch (Local_152.f_797)
	{
		case 0:
			if (Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] == 3)
			{
				if ((Local_152.f_15 > (Local_152.f_19 / 2) || Local_152.f_15 < Local_152.f_17) || Local_152.f_15 > Local_152.f_16)
				{
					Local_152.f_15 = Local_152.f_17;
				}
				if ((((Local_152.f_23 > Local_152.f_19 || Local_152.f_23 > Local_152.f_27) || Local_152.f_23 < Local_152.f_28) || Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_152.f_23 > Local_152.f_19)
				{
					Local_152.f_23 = Local_152.f_28;
				}
				Var2.f_1 = 3;
				Local_152.f_854 = { Var2 };
				Local_161 = { Var3 };
				Local_161.f_10 = 1;
				Local_161.f_0 = -941885798;
				Local_161.f_11 = __LIB_1__::func_124(PLAYER::PLAYER_ID());
				if (__LIB_1__::func_124(PLAYER::PLAYER_ID()))
				{
					Local_161.f_20 = joaat("VIP membership");
				}
				else if (__LIB_9__::func_558())
				{
					Local_161.f_20 = joaat("paid membership");
				}
				else if (__LIB_1__::func_520(1) && (__LIB_1__::func_124(__LIB_0__::func_797()) || __LIB_40__::func_630(PLAYER::PLAYER_ID())))
				{
					Local_161.f_20 = joaat("Gang membership");
				}
				else
				{
					Local_161.f_20 = joaat("no membership");
				}
				if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
				{
					Local_161.f_1 = 1695074466;
				}
				else if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 3)
				{
					Local_161.f_1 = joaat("high stakes");
				}
				else
				{
					Local_161.f_1 = joaat("standard");
				}
				__LIB_0__::func_627(&uLocal_157, 0, 0);
				Local_161.f_3 = Local_109.f_25[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
				Local_161.f_2 = Local_151[PLAYER::PLAYER_ID() /*9*/].f_2;
				func_161(1);
			}
			break;
		case 1:
			if ((!__LIB_9__::func_558() && !(__LIB_1__::func_520(1) && __LIB_4__::func_153(__LIB_0__::func_797()))) || ((!__LIB_1__::func_124(PLAYER::PLAYER_ID()) && (__LIB_40__::func_623(Local_152.f_18) == 2 || __LIB_40__::func_623(Local_152.f_18) == 3)) && !(__LIB_1__::func_520(1) && __LIB_1__::func_124(__LIB_0__::func_797()))))
			{
				if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				Local_162.f_2 = joaat("no membership");
				Local_161.f_4 = joaat("no membership");
				Local_161.f_7 = __LIB_40__::func_632();
				Local_161.f_17 = __LIB_1__::func_724(&uLocal_157, 0, 0);
				Local_161.f_18 = __LIB_40__::func_627();
				Local_161.f_19 = __LIB_40__::func_629();
				if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
				}
				func_379(1);
				HUD::CLEAR_HELP(true);
				if (Local_152.f_25 == 1)
				{
					__LIB_0__::func_151("IT_MEMBOc" /* GXT: You have been removed from the game because you no longer have access to your MC President's casino membership. */, -1);
				}
				else if (Local_152.f_25 == 2)
				{
					__LIB_0__::func_151("IT_MEMBOa" /* GXT: You have been removed from the game because you no longer have access to your CEO's casino membership. */, -1);
				}
				else if (Local_152.f_25 == 3)
				{
					__LIB_0__::func_151("IT_MEMBOb" /* GXT: You have been removed from the game because you no longer have access to your VIP's casino membership. */, -1);
				}
				return;
			}
			if ((((Local_152.f_19 < Local_152.f_28 && Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 == 0) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 == 0) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 == 0) && !Local_152.f_1)
			{
				Local_161.f_4 = joaat("low chips");
				Local_162.f_2 = joaat("low chips");
				Local_161.f_7 = __LIB_40__::func_632();
				Local_161.f_17 = __LIB_1__::func_724(&uLocal_157, 0, 0);
				Local_161.f_18 = __LIB_40__::func_627();
				Local_161.f_19 = __LIB_40__::func_629();
				if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
				}
				func_379(1);
				HUD::CLEAR_HELP(true);
				if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
				{
					if (Local_152.f_19 <= 0)
					{
						__LIB_0__::func_151("CAS_MG_NOCHIPS7" /* GXT: Chips are required to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */, -1);
					}
					else
					{
						__LIB_0__::func_151("CAS_MG_LOWCHIPS7" /* GXT: You don't have enough Chips to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */, -1);
					}
				}
				else if (Local_152.f_19 <= 0)
				{
					__LIB_0__::func_151("CAS_MG_NOCHIPS3" /* GXT: Chips are required to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */, -1);
				}
				else
				{
					__LIB_0__::func_151("CAS_MG_LOWCHIPS3" /* GXT: You don't have enough Chips to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */, -1);
				}
				return;
			}
			if (__LIB_33__::func_307())
			{
				switch (__LIB_16__::func_263())
				{
					case 0:
						Local_161.f_4 = joaat("win cutoff");
						break;
					case 1:
						Local_161.f_4 = joaat("loss cutoff");
						break;
					case 2:
						Local_161.f_4 = joaat("time cutoff");
						break;
				}
				switch (__LIB_16__::func_263())
				{
					case 0:
						Local_162.f_2 = joaat("win cutoff");
						break;
					case 1:
						Local_162.f_2 = joaat("loss cutoff");
						break;
					case 2:
						Local_162.f_2 = joaat("time cutoff");
						break;
				}
				Local_161.f_7 = __LIB_40__::func_632();
				Local_161.f_17 = __LIB_1__::func_724(&uLocal_157, 0, 0);
				Local_161.f_18 = __LIB_40__::func_627();
				Local_161.f_19 = __LIB_40__::func_629();
				if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
				}
				func_379(1);
				HUD::CLEAR_HELP(true);
				if (__LIB_16__::func_263() == 2)
				{
					__LIB_0__::func_151("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */, -1);
				}
				else
				{
					__LIB_0__::func_151("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */, -1);
				}
				return;
			}
			if (((!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 0) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 2)) && !BitTest(Local_152.f_22, 0)) && (!func_354() || __LIB_16__::func_265()))
			{
				Local_161.f_7 = __LIB_40__::func_632();
				Local_161.f_17 = __LIB_1__::func_724(&uLocal_157, 0, 0);
				Local_161.f_18 = __LIB_40__::func_627();
				Local_161.f_19 = __LIB_40__::func_629();
				if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
				}
				func_379(1);
				HUD::CLEAR_HELP(true);
				return;
			}
			if (!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 0))
			{
				if (!BitTest(Local_152.f_22, 0))
				{
					if ((((((!BitTest(Local_152.f_29, 1) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3))
					{
						bVar5 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
						bVar6 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
						if (bVar6 || ((((((bVar5 && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)))
						{
							__LIB_0__::func_795(&(Local_152.f_790), 0, 0);
							MISC::SET_BIT(&(Local_152.f_29), 1);
						}
					}
					else if (__LIB_0__::func_937(&(Local_152.f_790), 100, 0))
					{
						__LIB_0__::func_794(&(Local_152.f_790));
						MISC::CLEAR_BIT(&(Local_152.f_29), 1);
					}
					if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) && !bVar6) && !bVar5) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)) && !BitTest(Local_152.f_22, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar4 = true;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_152.f_15 >= 10000)
							{
								iVar7 = 5000;
							}
							else if (Local_152.f_15 >= 5000)
							{
								iVar7 = 1000;
							}
							else if (Local_152.f_15 >= 500)
							{
								iVar7 = 500;
							}
							else if (Local_152.f_15 >= 100)
							{
								iVar7 = 50;
							}
							else
							{
								iVar7 = 10;
							}
							if (Local_152.f_15 > (Local_152.f_19 / 2))
							{
								Local_152.f_15 = (Local_152.f_15 - iVar7);
							}
							if (Local_152.f_15 < Local_152.f_17)
							{
								Local_152.f_15 = Local_152.f_17;
							}
							if (Local_152.f_15 > Local_152.f_16)
							{
								Local_152.f_15 = Local_152.f_16;
							}
							Local_152.f_15 = (Local_152.f_15 + iVar7);
							if (Local_152.f_15 > (Local_152.f_19 / 2))
							{
								bVar4 = false;
								Local_152.f_15 = (Local_152.f_15 - iVar7);
							}
							if (Local_152.f_15 < Local_152.f_17)
							{
								Local_152.f_15 = Local_152.f_17;
							}
							if (Local_152.f_15 > Local_152.f_16)
							{
								bVar4 = false;
								Local_152.f_15 = Local_152.f_16;
							}
						}
					}
					else
					{
						if (Local_152.f_15 >= 10000)
						{
							iVar7 = 5000;
						}
						else if (Local_152.f_15 >= 5000)
						{
							iVar7 = 1000;
						}
						else if (Local_152.f_15 >= 500)
						{
							iVar7 = 500;
						}
						else if (Local_152.f_15 >= 100)
						{
							iVar7 = 50;
						}
						else
						{
							iVar7 = 10;
						}
						if (Local_152.f_15 > (Local_152.f_19 / 2))
						{
							Local_152.f_15 = (Local_152.f_15 - iVar7);
						}
						if (Local_152.f_15 < Local_152.f_17)
						{
							Local_152.f_15 = Local_152.f_17;
						}
						if (Local_152.f_15 > Local_152.f_16)
						{
							Local_152.f_15 = Local_152.f_16;
						}
						iVar8 = Local_152.f_15;
						if (bVar5)
						{
							Local_152.f_15 = (Local_152.f_15 + iVar7);
							if (Local_152.f_15 > (Local_152.f_19 / 2))
							{
								Local_152.f_15 = (Local_152.f_15 - iVar7);
							}
							if (Local_152.f_15 < Local_152.f_17)
							{
								Local_152.f_15 = Local_152.f_17;
							}
							if (Local_152.f_15 > Local_152.f_16)
							{
								Local_152.f_15 = Local_152.f_16;
							}
							if (Local_152.f_15 == iVar8)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || !BitTest(Local_152.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_152.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_152.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar6)
						{
							if (Local_152.f_15 <= 100)
							{
								iVar7 = 10;
							}
							else if (Local_152.f_15 <= 500)
							{
								iVar7 = 50;
							}
							else if (Local_152.f_15 <= 5000)
							{
								iVar7 = 500;
							}
							else if (Local_152.f_15 <= 10000)
							{
								iVar7 = 1000;
							}
							else
							{
								iVar7 = 5000;
							}
							Local_152.f_15 = (Local_152.f_15 - iVar7);
							if (Local_152.f_15 < Local_152.f_17)
							{
								Local_152.f_15 = Local_152.f_17;
							}
							if (Local_152.f_15 == iVar8)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || !BitTest(Local_152.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_152.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_152.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_152.f_15 == Local_152.f_16 || (Local_152.f_15 + iVar7) > Local_152.f_16) || (Local_152.f_15 + iVar7) > (Local_152.f_19 / 2))
					{
						MISC::SET_BIT(&(Local_152.f_22), 8);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_152.f_22), 8);
					}
					MISC::SET_BIT(&(Local_152.f_29), 0);
					iVar0 = (30 - (__LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !__LIB_0__::func_864(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
					{
						if ((((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3))
						{
							if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && Local_152.f_15 >= Local_152.f_17) && Local_152.f_19 >= Local_152.f_17 * 2)
							{
								MISC::SET_BIT(&(Local_152.f_22), 0);
								Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								if (func_160(Local_152.f_15))
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "bet_ante_large", 2f, -2f, 13, 16, 1000f, 0);
								}
								else
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "bet_ante", 2f, -2f, 13, 16, 1000f, 0);
								}
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							}
							else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || Local_152.f_19 < Local_152.f_28)
							{
								Local_152.f_19 = __LIB_40__::func_632();
								if ((((Local_152.f_23 > Local_152.f_19 || Local_152.f_23 > Local_152.f_27) || Local_152.f_23 < Local_152.f_28) || Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_152.f_23 > Local_152.f_19)
								{
									Local_152.f_23 = Local_152.f_28;
								}
								MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 0);
							}
						}
						if (__LIB_0__::func_864(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (__LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (Local_152.f_19 < Local_152.f_17 * 2)
						{
							if (((!__LIB_0__::func_1("TCP_LOW" /* GXT: You do not have enough Chips to place the Ante and Play Bet.~n~You can still bet on Pair Plus. */) && !bLocal_170) && !bLocal_171) && !bLocal_166)
							{
								__LIB_5__::func_401("TCP_LOW" /* GXT: You do not have enough Chips to place the Ante and Play Bet.~n~You can still bet on Pair Plus. */);
							}
						}
						else if (((!__LIB_0__::func_1("TCP_PLACE_ANTE" /* GXT: Place an Ante bet to receive a hand that can be played against the Dealer. */) && !bLocal_170) && !bLocal_171) && !bLocal_166)
						{
							__LIB_5__::func_401("TCP_PLACE_ANTE" /* GXT: Place an Ante bet to receive a hand that can be played against the Dealer. */);
						}
					}
				}
				else
				{
					if (((!__LIB_0__::func_1("TCP_PLACE_ANTE" /* GXT: Place an Ante bet to receive a hand that can be played against the Dealer. */) && !bLocal_170) && !bLocal_171) && !bLocal_166)
					{
						__LIB_5__::func_401("TCP_PLACE_ANTE" /* GXT: Place an Ante bet to receive a hand that can be played against the Dealer. */);
					}
					if (__LIB_0__::func_864(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (__LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_152.f_30 != -1 && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 0))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
						{
							MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 0);
							MISC::CLEAR_BIT(&(Local_152.f_22), 0);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showchips")) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
						{
							Local_152.f_1 = 1;
						}
						if (Local_152.f_1)
						{
							if (__LIB_43__::func_636(Local_152.f_15, &(Local_152.f_14), 2, Local_152.f_0))
							{
								if (Local_152.f_14 == 3)
								{
									Local_152.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_152.f_22), 0);
									Local_152.f_14 = 0;
								}
								else
								{
									Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 = Local_152.f_15;
									SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
									if (Local_152.f_15 >= 10000)
									{
										iVar9 = 5000;
									}
									else if (Local_152.f_15 >= 5000)
									{
										iVar9 = 1000;
									}
									else if (Local_152.f_15 >= 500)
									{
										iVar9 = 500;
									}
									else if (Local_152.f_15 >= 100)
									{
										iVar9 = 50;
									}
									else
									{
										iVar9 = 10;
									}
									if ((Local_152.f_15 == Local_152.f_16 || (Local_152.f_15 + iVar9) > Local_152.f_16) || (Local_152.f_15 + iVar9) > (Local_152.f_19 / 2))
									{
										Local_161.f_5 = 1;
									}
									Local_161.f_6 = (Local_161.f_6 - Local_152.f_15);
									Local_162.f_3 = (Local_162.f_3 - Local_152.f_15);
									Local_162.f_7 = (Local_162.f_7 + Local_152.f_15);
									Local_161.f_12 = (Local_161.f_12 + Local_152.f_15);
									Local_152.f_19 = __LIB_40__::func_632();
									if ((((Local_152.f_23 > Local_152.f_19 || Local_152.f_23 > Local_152.f_27) || Local_152.f_23 < Local_152.f_28) || Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_152.f_23 > Local_152.f_19)
									{
										Local_152.f_23 = Local_152.f_28;
									}
									Local_152.f_1 = 0;
								}
							}
						}
					}
				}
				__LIB_30__::func_393(Local_152.f_15, "TCP_BET2" /* GXT: ANTE BET */, -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else if (!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 2))
			{
				if (!BitTest(Local_152.f_22, 0))
				{
					if ((((((!BitTest(Local_152.f_29, 1) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
					{
						bVar10 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
						bVar11 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
						if (bVar11 || ((((((bVar10 && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)))
						{
							__LIB_0__::func_795(&(Local_152.f_790), 0, 0);
							MISC::SET_BIT(&(Local_152.f_29), 1);
						}
					}
					else if (__LIB_0__::func_937(&(Local_152.f_790), 100, 0))
					{
						__LIB_0__::func_794(&(Local_152.f_790));
						MISC::CLEAR_BIT(&(Local_152.f_29), 1);
					}
					if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) && !bVar11) && !bVar10) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)) && !BitTest(Local_152.f_22, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar4 = true;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_152.f_23 >= 10000)
							{
								iVar12 = 5000;
							}
							else if (Local_152.f_23 >= 5000)
							{
								iVar12 = 1000;
							}
							else if (Local_152.f_23 >= 500)
							{
								iVar12 = 500;
							}
							else if (Local_152.f_23 >= 100)
							{
								iVar12 = 50;
							}
							else
							{
								iVar12 = 10;
							}
							if (Local_152.f_23 > Local_152.f_19)
							{
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
							if (Local_152.f_23 > Local_152.f_27)
							{
								Local_152.f_23 = Local_152.f_27;
							}
							if (Local_152.f_23 < Local_152.f_28)
							{
								Local_152.f_23 = Local_152.f_28;
							}
							if (Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
							Local_152.f_23 = (Local_152.f_23 + iVar12);
							if (Local_152.f_23 > Local_152.f_19)
							{
								bVar4 = false;
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
							if (Local_152.f_23 > Local_152.f_27)
							{
								bVar4 = false;
								Local_152.f_23 = Local_152.f_27;
							}
							if (Local_152.f_23 < Local_152.f_28)
							{
								Local_152.f_23 = Local_152.f_28;
							}
							if (Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								bVar4 = false;
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
						}
					}
					else
					{
						if (Local_152.f_23 >= 10000)
						{
							iVar12 = 5000;
						}
						else if (Local_152.f_23 >= 5000)
						{
							iVar12 = 1000;
						}
						else if (Local_152.f_23 >= 500)
						{
							iVar12 = 500;
						}
						else if (Local_152.f_23 >= 100)
						{
							iVar12 = 50;
						}
						else
						{
							iVar12 = 10;
						}
						if (Local_152.f_23 > Local_152.f_19)
						{
							Local_152.f_23 = (Local_152.f_23 - iVar12);
						}
						if (Local_152.f_23 > Local_152.f_27)
						{
							Local_152.f_23 = Local_152.f_27;
						}
						if (Local_152.f_23 < Local_152.f_28)
						{
							Local_152.f_23 = Local_152.f_28;
						}
						if (Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
						{
							Local_152.f_23 = (Local_152.f_23 - iVar12);
						}
						iVar13 = Local_152.f_23;
						if (bVar10)
						{
							Local_152.f_23 = (Local_152.f_23 + iVar12);
							if (Local_152.f_23 > Local_152.f_19)
							{
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
							if (Local_152.f_23 > Local_152.f_27)
							{
								Local_152.f_23 = Local_152.f_27;
							}
							if (Local_152.f_23 < Local_152.f_28)
							{
								Local_152.f_23 = Local_152.f_28;
							}
							if (Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
							if (Local_152.f_23 == iVar13)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || !BitTest(Local_152.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_152.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_152.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar11)
						{
							if (Local_152.f_23 <= 100)
							{
								iVar12 = 10;
							}
							else if (Local_152.f_23 <= 500)
							{
								iVar12 = 50;
							}
							else if (Local_152.f_23 <= 5000)
							{
								iVar12 = 500;
							}
							else if (Local_152.f_23 <= 10000)
							{
								iVar12 = 1000;
							}
							else
							{
								iVar12 = 5000;
							}
							Local_152.f_23 = (Local_152.f_23 - iVar12);
							if (Local_152.f_23 < Local_152.f_28)
							{
								Local_152.f_23 = Local_152.f_28;
							}
							if (Local_152.f_23 == iVar13)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || !BitTest(Local_152.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_152.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_152.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_152.f_23 == Local_152.f_27 || (Local_152.f_23 + iVar12) > Local_152.f_27) || (Local_152.f_23 + iVar12) > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
					{
						MISC::SET_BIT(&(Local_152.f_22), 8);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_152.f_22), 8);
					}
					MISC::SET_BIT(&(Local_152.f_29), 0);
					iVar0 = (30 - (__LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !__LIB_0__::func_864(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
					{
						if ((((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3))
						{
							if (((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && Local_152.f_23 >= Local_152.f_28) && Local_152.f_23 <= Local_152.f_19) && Local_152.f_19 >= (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_152.f_28))
							{
								MISC::SET_BIT(&(Local_152.f_22), 0);
								Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								if (func_160(Local_152.f_23))
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "bet_plus_large", 2f, -2f, 13, 16, 1000f, 0);
								}
								else
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "bet_plus", 2f, -2f, 13, 16, 1000f, 0);
								}
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							}
							else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) || Local_152.f_19 < (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_152.f_28))
							{
								if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
								{
									MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 2);
								}
								else
								{
									Local_161.f_4 = joaat("QUIT");
									Local_162.f_2 = joaat("QUIT");
									Local_161.f_7 = __LIB_40__::func_632();
									Local_161.f_17 = __LIB_1__::func_724(&uLocal_157, 0, 0);
									Local_161.f_18 = __LIB_40__::func_627();
									Local_161.f_19 = __LIB_40__::func_629();
									if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
									{
										Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
									}
									if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
									{
										STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
									}
									func_379(1);
									HUD::CLEAR_HELP(true);
									return;
								}
							}
						}
						if (__LIB_0__::func_864(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (__LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (((!__LIB_0__::func_1("TCP_PLACE_PAIR" /* GXT: Pair Plus is a side bet. This will win if your hand has a Pair or higher. */) && !bLocal_170) && !bLocal_171) && !bLocal_166)
						{
							__LIB_5__::func_401("TCP_PLACE_PAIR" /* GXT: Pair Plus is a side bet. This will win if your hand has a Pair or higher. */);
						}
					}
				}
				else
				{
					if (((!__LIB_0__::func_1("TCP_PLACE_PAIR" /* GXT: Pair Plus is a side bet. This will win if your hand has a Pair or higher. */) && !bLocal_170) && !bLocal_171) && !bLocal_166)
					{
						__LIB_5__::func_401("TCP_PLACE_PAIR" /* GXT: Pair Plus is a side bet. This will win if your hand has a Pair or higher. */);
					}
					if (__LIB_0__::func_864(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (__LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_152.f_30 != -1 && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 2))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 > 0)
						{
							MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 2);
							MISC::CLEAR_BIT(&(Local_152.f_22), 0);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showchips")) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
						{
							Local_152.f_1 = 1;
						}
						if (Local_152.f_1)
						{
							if (__LIB_43__::func_636(Local_152.f_23, &(Local_152.f_14), 2, Local_152.f_0))
							{
								if (Local_152.f_14 == 3)
								{
									Local_152.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_152.f_22), 0);
									Local_152.f_14 = 0;
								}
								else
								{
									Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 = Local_152.f_23;
									SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_5));
									if (Local_152.f_23 >= 10000)
									{
										iVar14 = 5000;
									}
									else if (Local_152.f_23 >= 5000)
									{
										iVar14 = 1000;
									}
									else if (Local_152.f_23 >= 500)
									{
										iVar14 = 500;
									}
									else if (Local_152.f_23 >= 100)
									{
										iVar14 = 50;
									}
									else
									{
										iVar14 = 10;
									}
									if ((Local_152.f_23 == Local_152.f_27 || (Local_152.f_23 + iVar14) > Local_152.f_27) || (Local_152.f_23 + iVar14) > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
									{
										Local_161.f_5 = 1;
									}
									Local_161.f_6 = (Local_161.f_6 - Local_152.f_23);
									Local_162.f_3 = (Local_162.f_3 - Local_152.f_23);
									Local_162.f_8 = (Local_162.f_8 + Local_152.f_23);
									Local_161.f_13 = (Local_161.f_13 + Local_152.f_23);
									Local_152.f_19 = __LIB_40__::func_632();
									Local_152.f_1 = 0;
								}
							}
						}
					}
				}
				__LIB_30__::func_393(Local_152.f_23, "TCP_BET3" /* GXT: PAIR PLUS BET */, -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				bVar15 = true;
				iVar16 = 0;
				while (iVar16 < 4)
				{
					iVar17 = Local_109.f_117[(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar16)];
					if (iVar17 != -1)
					{
						if (!BitTest(Local_151[iVar17 /*9*/], 2))
						{
							bVar15 = false;
						}
					}
					iVar16++;
				}
				if ((((!__LIB_0__::func_1("TCP_WAIT" /* GXT: Waiting for other players. */) && !bVar15) && !bLocal_170) && !bLocal_171) && !bLocal_166)
				{
					__LIB_5__::func_401("TCP_WAIT" /* GXT: Waiting for other players. */);
				}
				if (__LIB_0__::func_864(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
				{
					if (__LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
					{
						__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
			}
			if ((Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] > 3 && !BitTest(Local_152.f_22, 0)) && !Local_152.f_1)
			{
				if (BitTest(Local_152.f_29, 0))
				{
					HUD::CLEAR_HELP(true);
					Local_162.f_12++;
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0 && Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
					{
						MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 5);
					}
					func_161(2);
				}
				else
				{
					bVar18 = true;
					iVar19 = 0;
					while (iVar19 < 4)
					{
						iVar20 = Local_109.f_117[(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar19)];
						if (iVar20 != -1)
						{
							if (!BitTest(Local_151[iVar20 /*9*/], 2))
							{
								bVar18 = false;
							}
						}
						iVar19++;
					}
					if ((((!__LIB_0__::func_1("TCP_WAIT" /* GXT: Waiting for other players. */) && !bVar18) && !bLocal_170) && !bLocal_171) && !bLocal_166)
					{
						__LIB_5__::func_401("TCP_WAIT" /* GXT: Waiting for other players. */);
					}
					if (__LIB_0__::func_864(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (__LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
				}
			}
			break;
		case 2:
			if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
			{
				if (Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] == 3)
				{
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						MISC::SET_BIT(&(Local_152.f_22), 6);
					}
					MISC::CLEAR_BIT(&(Local_152.f_22), 0);
					func_161(3);
				}
			}
			break;
		case 3:
			if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0 && Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
			{
				MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 3);
				if (!BitTest(Local_152.f_22, 4))
				{
					MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 4);
				}
				func_161(4);
				return;
			}
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (bVar21)
				{
					return;
				}
				if ((((((!BitTest(Local_152.f_22, 0) && !BitTest(Local_152.f_22, 4)) && !BitTest(Local_152.f_22, 2)) && !BitTest(Local_152.f_22, 1)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 3)) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
				{
					if ((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_pickup", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_pickup_card_a", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_pickup_card_b", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_pickup_card_c", 1000f, -1000f, 13);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							MISC::SET_BIT(&(Local_152.f_22), 7);
							MISC::SET_BIT(&(Local_152.f_22), 0);
						}
					}
				}
				if (!BitTest(Local_152.f_22, 0))
				{
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						iVar0 = (30 - (__LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
						if (iVar0 > 0)
						{
							if (__LIB_0__::func_864(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
							{
								if (__LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
								{
									__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								}
								else
								{
									__LIB_1__::func_350((30000 - __LIB_1__::func_724(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
							if (((!__LIB_0__::func_1("TCP_PLACE_PLAY" /* GXT: Place a Play bet equal to your Ante to compare your hand against the Dealer. Folding will forfeit your Ante bet. */) && !bLocal_170) && !bLocal_171) && !bLocal_166)
							{
								__LIB_5__::func_401("TCP_PLACE_PLAY" /* GXT: Place a Play bet equal to your Ante to compare your hand against the Dealer. Folding will forfeit your Ante bet. */);
							}
							if ((((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3))
							{
								if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) || BitTest(Local_152.f_22, 4)))
								{
									if (BitTest(Local_152.f_22, 4))
									{
										Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_play", 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_play_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_play_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_play_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
									}
									MISC::SET_BIT(&(Local_152.f_22), 0);
									MISC::SET_BIT(&(Local_152.f_22), 2);
								}
								else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) && (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) || BitTest(Local_152.f_22, 4)))
								{
									if (BitTest(Local_152.f_22, 4))
									{
										Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
									}
									MISC::SET_BIT(&(Local_152.f_22), 0);
									MISC::SET_BIT(&(Local_152.f_22), 1);
								}
							}
						}
						else if (__LIB_0__::func_864(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
						{
							if (BitTest(Local_152.f_22, 4))
							{
								Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							}
							MISC::SET_BIT(&(Local_152.f_22), 0);
							MISC::SET_BIT(&(Local_152.f_22), 1);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 3);
						if (!BitTest(Local_152.f_22, 4))
						{
							MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 4);
						}
						func_161(4);
						return;
					}
				}
				else if (BitTest(Local_152.f_22, 2))
				{
					if (!BitTest(Local_152.f_22, 3))
					{
						if ((Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))) || !BitTest(Local_152.f_22, 4))
						{
							Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							if (func_160(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_bet_large", 2f, -2f, 13, 16, 1000f, 0);
							}
							else
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_bet", 2f, -2f, 13, 16, 1000f, 0);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							MISC::SET_BIT(&(Local_152.f_22), 3);
						}
					}
					else if (Local_152.f_30 != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 > 0)
						{
							Local_152.f_796 = "idle_cardgames";
							Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, __LIB_40__::func_622(), Local_152.f_796, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							MISC::CLEAR_BIT(&(Local_152.f_22), 0);
							MISC::CLEAR_BIT(&(Local_152.f_22), 1);
							MISC::CLEAR_BIT(&(Local_152.f_22), 2);
							MISC::CLEAR_BIT(&(Local_152.f_22), 3);
							MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 1);
							if (!BitTest(Local_152.f_22, 4))
							{
								MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 4);
							}
							func_161(4);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showchips")) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 <= 0)
						{
							Local_152.f_1 = 1;
						}
						if (Local_152.f_1)
						{
							if (__LIB_43__::func_636(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3, &(Local_152.f_14), 2, Local_152.f_0))
							{
								if (Local_152.f_14 == 3)
								{
									Local_152.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_152.f_22), 0);
									MISC::CLEAR_BIT(&(Local_152.f_22), 1);
									MISC::CLEAR_BIT(&(Local_152.f_22), 2);
									MISC::CLEAR_BIT(&(Local_152.f_22), 3);
									if (BitTest(Local_152.f_22, 4))
									{
										Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, false, true, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_idle", 1000f, -1000f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
									}
									Local_152.f_14 = 0;
								}
								else
								{
									Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 = Local_151[PLAYER::PLAYER_ID() /*9*/].f_3;
									SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_4));
									Local_161.f_6 = (Local_161.f_6 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
									Local_162.f_3 = (Local_162.f_3 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
									Local_152.f_19 = __LIB_40__::func_632();
									Local_152.f_1 = 0;
								}
							}
						}
					}
				}
				else if (BitTest(Local_152.f_22, 1))
				{
					if ((Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))) || !BitTest(Local_152.f_22, 4))
					{
						Local_152.f_796 = "idle_cardgames";
						Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, __LIB_40__::func_622(), Local_152.f_796, 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
						MISC::CLEAR_BIT(&(Local_152.f_22), 0);
						MISC::CLEAR_BIT(&(Local_152.f_22), 1);
						MISC::CLEAR_BIT(&(Local_152.f_22), 2);
						MISC::CLEAR_BIT(&(Local_152.f_22), 3);
						MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 3);
						if (!BitTest(Local_152.f_22, 4))
						{
							MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 4);
						}
						func_161(4);
					}
				}
				else if (BitTest(Local_152.f_22, 7) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_pickup", 3))
				{
					if (Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
					{
						Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_idle", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
						MISC::CLEAR_BIT(&(Local_152.f_22), 0);
						MISC::CLEAR_BIT(&(Local_152.f_22), 7);
						MISC::SET_BIT(&(Local_152.f_22), 4);
					}
				}
				if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
				{
					__LIB_30__::func_393(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3, "TCP_BET4" /* GXT: PLAY WAGER */, -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		case 4:
			if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
			{
				bVar22 = true;
				iVar23 = 0;
				while (iVar23 < 4)
				{
					iVar24 = Local_109.f_117[(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar23)];
					if (iVar24 != -1)
					{
						if ((!BitTest(Local_151[iVar24 /*9*/], 1) && !BitTest(Local_151[iVar24 /*9*/], 3)) && (Local_151[iVar24 /*9*/].f_3 > 0 || Local_151[iVar24 /*9*/].f_5 > 0))
						{
							bVar22 = false;
						}
					}
					iVar23++;
				}
				if (Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] == 9 && !bVar22)
				{
					if (((!__LIB_0__::func_1("TCP_WAIT" /* GXT: Waiting for other players. */) && !bLocal_170) && !bLocal_171) && !bLocal_166)
					{
						__LIB_5__::func_401("TCP_WAIT" /* GXT: Waiting for other players. */);
					}
				}
				else if (__LIB_0__::func_1("TCP_WAIT" /* GXT: Waiting for other players. */) || __LIB_0__::func_1("TCP_PLACE_PLAY" /* GXT: Place a Play bet equal to your Ante to compare your hand against the Dealer. Folding will forfeit your Ante bet. */))
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] == 1)
				{
					if (BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 5))
					{
						bVar25 = true;
					}
					if (Local_152.f_31 != -1)
					{
						__LIB_3__::func_122(&(Local_152.f_31));
						Local_152.f_31 = -1;
					}
					Local_152.f_2 = 0;
					Local_152.f_3 = 0;
					Local_152.f_4 = 0;
					Local_152.f_6 = 0;
					Local_152.f_22 = 0;
					Local_151[PLAYER::PLAYER_ID() /*9*/] = 0;
					Local_151[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
					Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
					Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
					Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
					func_161(0);
					Local_161.f_7 = __LIB_40__::func_632();
					Local_161.f_17 = __LIB_1__::func_724(&uLocal_157, 0, 0);
					Local_161.f_18 = __LIB_40__::func_627();
					Local_161.f_19 = __LIB_40__::func_629();
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
					{
						Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
					}
					if (!func_354() || __LIB_16__::func_265())
					{
						if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */ && !bVar25)
						{
							STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
						}
						func_379(1);
						HUD::CLEAR_HELP(true);
						return;
					}
					if (__LIB_33__::func_307())
					{
						switch (__LIB_16__::func_263())
						{
							case 0:
								Local_161.f_4 = joaat("win cutoff");
								break;
							case 1:
								Local_161.f_4 = joaat("loss cutoff");
								break;
							case 2:
								Local_161.f_4 = joaat("time cutoff");
								break;
						}
						switch (__LIB_16__::func_263())
						{
							case 0:
								Local_162.f_2 = joaat("win cutoff");
								break;
							case 1:
								Local_162.f_2 = joaat("loss cutoff");
								break;
							case 2:
								Local_162.f_2 = joaat("time cutoff");
								break;
						}
						if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */ && !bVar25)
						{
							STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
						}
						func_379(1);
						HUD::CLEAR_HELP(true);
						if (__LIB_16__::func_263() == 2)
						{
							__LIB_0__::func_151("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */, -1);
						}
						else
						{
							__LIB_0__::func_151("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */, -1);
						}
						return;
					}
					if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */ && !bVar25)
					{
						STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
					}
					return;
				}
				if ((Local_109.f_5[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] && Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] > 0) && BitTest(Local_109.f_20[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2], func_198(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1)))
				{
					iVar27 = func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0);
					iVar28 = func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
					if (func_25(iVar27))
					{
						bVar26 = true;
					}
					if (iVar28 > 500)
					{
						Local_161.f_22 = joaat("StraightFlush");
					}
					else if (iVar28 > 400)
					{
						Local_161.f_22 = 588481795;
					}
					else if (iVar28 > 300)
					{
						Local_161.f_22 = joaat("straight");
					}
					else if (iVar28 > 200)
					{
						Local_161.f_22 = joaat("flush");
					}
					else if (iVar28 > 100)
					{
						Local_161.f_22 = 378531009;
					}
					else
					{
						Local_161.f_22 = 201584577;
					}
					if (((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6)
					{
						if (!BitTest(Local_152.f_22, 5))
						{
							Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							sVar29 = func_150(Local_161.f_6);
							if ((Local_152.f_26 == 1 || __LIB_40__::func_623(Local_152.f_18) == 2) || __LIB_40__::func_623(Local_152.f_18) == 3)
							{
								if (((Local_152.f_15 >= 35000 && iVar28 > iVar27) && iVar28 > 300) || (Local_152.f_23 >= 3500 && iVar28 > 300))
								{
									sVar29 = __LIB_40__::func_620();
								}
								else if (((Local_152.f_15 >= 35000 && iVar28 > 300) && iVar28 < iVar27) && !(Local_152.f_23 >= 3500 && iVar28 > 300))
								{
									sVar29 = __LIB_40__::func_628();
								}
							}
							else if (((Local_152.f_15 >= 4500 && iVar28 > iVar27) && iVar28 > 300) || (Local_152.f_23 >= 450 && iVar28 > 300))
							{
								sVar29 = __LIB_40__::func_620();
							}
							else if (((Local_152.f_15 >= 4500 && iVar28 > 300) && iVar28 < iVar27) && !(Local_152.f_23 >= 450 && iVar28 > 300))
							{
								sVar29 = __LIB_40__::func_628();
							}
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, __LIB_40__::func_622(), sVar29, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							MISC::SET_BIT(&(Local_152.f_22), 5);
						}
						if (Local_161.f_14 > 0)
						{
							if (!BitTest(Local_152.f_22, 9))
							{
								if (__LIB_43__::func_930(Local_161.f_14, &(Local_152.f_14), 2))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_152.f_22), 9);
									if (__LIB_1__::func_783(PLAYER::PLAYER_ID()) && iVar28 > 500)
									{
										MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_800), 11);
									}
								}
							}
						}
					}
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						if (!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 3))
						{
							if (!bVar26)
							{
								if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
								{
									if (!__LIB_3__::func_442("TCP_WIN_NP" /* GXT: The Dealer has less than Queen High and does not play. You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14))
									{
										__LIB_40__::func_619("TCP_WIN_NP" /* GXT: The Dealer has less than Queen High and does not play. You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14);
									}
								}
								if (!Local_152.f_2)
								{
									Local_152.f_2 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
								}
								if (!Local_152.f_3)
								{
									Local_152.f_3 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_162.f_13++;
									Local_161.f_15 = 1;
									Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_161.f_4 = joaat("win");
								}
							}
							else if (iVar28 > iVar27)
							{
								if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
								{
									if (iVar28 > 500 && iVar27 > 500)
									{
										bVar30 = true;
									}
									if ((iVar28 > 400 && iVar27 > 400) && (iVar28 < 500 && iVar27 < 500))
									{
										bVar30 = true;
									}
									if ((iVar28 > 300 && iVar27 > 300) && (iVar28 < 400 && iVar27 < 400))
									{
										bVar30 = true;
									}
									if ((iVar28 > 200 && iVar27 > 200) && (iVar28 < 300 && iVar27 < 300))
									{
										bVar30 = true;
									}
									if ((iVar28 > 100 && iVar27 > 100) && (iVar28 < 200 && iVar27 < 200))
									{
										bVar30 = true;
									}
									if (bVar30)
									{
										if (!__LIB_3__::func_442("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
										{
											__LIB_40__::func_619("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
										}
									}
									else if (!__LIB_3__::func_442("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14))
									{
										__LIB_40__::func_619("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14);
									}
								}
								if (!Local_152.f_2)
								{
									Local_152.f_2 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
								}
								if (!Local_152.f_3)
								{
									Local_152.f_3 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_162.f_13++;
									Local_161.f_15 = 1;
									Local_161.f_4 = joaat("win");
								}
							}
							else if (iVar28 == iVar27)
							{
								iVar27 = func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 1, 0);
								iVar28 = func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 1, 0);
								if (iVar28 == iVar27)
								{
									iVar27 = func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 1);
									iVar28 = func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 1);
									if (iVar28 > iVar27)
									{
										if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
										{
											if (!__LIB_3__::func_442("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
											{
												__LIB_40__::func_619("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
											}
										}
										if (!Local_152.f_2)
										{
											Local_152.f_2 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
											Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
											Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										}
										if (!Local_152.f_3)
										{
											Local_152.f_3 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_162.f_13++;
											Local_161.f_15 = 1;
											Local_161.f_4 = joaat("win");
										}
									}
									else if (iVar28 == iVar27)
									{
										if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
										{
											if (!__LIB_0__::func_1("TCP_LOSE_PUSH" /* GXT: You and the Dealer have the same hand. The hand is a push. */))
											{
												__LIB_5__::func_401("TCP_LOSE_PUSH" /* GXT: You and the Dealer have the same hand. The hand is a push. */);
											}
										}
										if (!Local_152.f_2)
										{
											Local_152.f_2 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
											Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
											Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
											__LIB_16__::func_179(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
										}
										if (!Local_152.f_3)
										{
											Local_152.f_3 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_162.f_13++;
											Local_161.f_15 = 1;
											Local_161.f_4 = joaat("win");
										}
										Local_152.f_2 = 1;
									}
									else
									{
										if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
										{
											if (Local_161.f_14 > 0)
											{
												if (!__LIB_3__::func_442("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
												{
													__LIB_40__::func_619("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
												}
											}
											else if (!__LIB_3__::func_56("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
											{
												__LIB_30__::func_362("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
											}
										}
										Local_161.f_4 = joaat("lose");
										if (!Local_152.f_3)
										{
											__LIB_16__::func_179((Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
											Local_152.f_3 = 1;
											Local_162.f_14++;
										}
										Local_152.f_2 = 1;
									}
								}
								else if (iVar28 > iVar27)
								{
									if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
									{
										if (!__LIB_3__::func_442("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
										{
											__LIB_40__::func_619("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
										}
									}
									if (!Local_152.f_2)
									{
										Local_152.f_2 = 1;
										SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
										Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									}
									if (!Local_152.f_3)
									{
										Local_152.f_3 = 1;
										SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
										Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_162.f_13++;
										Local_161.f_15 = 1;
										Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_161.f_4 = joaat("win");
									}
								}
								else
								{
									if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
									{
										if (Local_161.f_14 > 0)
										{
											if (!__LIB_3__::func_442("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
											{
												__LIB_40__::func_619("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
											}
										}
										else if (!__LIB_3__::func_56("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											__LIB_30__::func_362("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									Local_161.f_4 = joaat("lose");
									if (!Local_152.f_3)
									{
										__LIB_16__::func_179((Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
										Local_152.f_3 = 1;
										Local_162.f_14++;
									}
									Local_152.f_2 = 1;
								}
							}
							else
							{
								if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
								{
									if (iVar28 > 500 && iVar27 > 500)
									{
										bVar31 = true;
									}
									if ((iVar28 > 400 && iVar27 > 400) && (iVar28 < 500 && iVar27 < 500))
									{
										bVar31 = true;
									}
									if ((iVar28 > 300 && iVar27 > 300) && (iVar28 < 400 && iVar27 < 400))
									{
										bVar31 = true;
									}
									if ((iVar28 > 200 && iVar27 > 200) && (iVar28 < 300 && iVar27 < 300))
									{
										bVar31 = true;
									}
									if ((iVar28 > 100 && iVar27 > 100) && (iVar28 < 200 && iVar27 < 200))
									{
										bVar31 = true;
									}
									if (bVar31)
									{
										if (Local_161.f_14 > 0)
										{
											if (!__LIB_3__::func_442("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
											{
												__LIB_40__::func_619("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
											}
										}
										else if (!__LIB_3__::func_56("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											__LIB_30__::func_362("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									else if (Local_161.f_14 > 0)
									{
										if (!__LIB_3__::func_442("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14))
										{
											__LIB_40__::func_619("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14);
										}
									}
									else if (!__LIB_3__::func_56("TCP_LOSE_PLAY" /* GXT: The Dealer has ~a~. You lose. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
									{
										__LIB_30__::func_362("TCP_LOSE_PLAY" /* GXT: The Dealer has ~a~. You lose. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
									}
								}
								Local_161.f_4 = joaat("lose");
								if (!Local_152.f_3)
								{
									__LIB_16__::func_179((Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
									Local_152.f_3 = 1;
									Local_162.f_14++;
								}
								Local_152.f_2 = 1;
							}
							iVar28 = func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
							if (!Local_152.f_4)
							{
								SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
								if (func_96(iVar28) > 0)
								{
									Local_162.f_3 = (Local_162.f_3 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar28)));
									Local_161.f_6 = (Local_161.f_6 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar28)));
									Local_162.f_13++;
									Local_161.f_15 = 1;
									Local_161.f_14 = (Local_161.f_14 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar28)));
								}
								Local_152.f_4 = 1;
							}
						}
						else
						{
							if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 >= 0)
							{
								Local_161.f_4 = joaat("fold");
							}
							if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
							{
								if (Local_161.f_14 > 0)
								{
									if (!__LIB_3__::func_442("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14))
									{
										__LIB_40__::func_619("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14);
									}
								}
								else if (!__LIB_3__::func_56("TCP_LOSE_FOLD" /* GXT: The Dealer has ~a~. You folded your hand. You lose. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
								{
									__LIB_30__::func_362("TCP_LOSE_FOLD" /* GXT: The Dealer has ~a~. You folded your hand. You lose. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
								}
							}
							if (!Local_152.f_3)
							{
								__LIB_16__::func_179(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
								Local_152.f_3 = 1;
								Local_162.f_14++;
							}
							Local_152.f_4 = 1;
							Local_152.f_2 = 1;
						}
					}
					else
					{
						Local_152.f_2 = 1;
						Local_152.f_3 = 1;
						Local_152.f_4 = 1;
					}
					iVar28 = func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 > 0)
					{
						Local_161.f_21 = 1;
						if (func_23(iVar28) > 0)
						{
							if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
							{
								if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
								{
									if (!__LIB_3__::func_442("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14))
									{
										__LIB_40__::func_619("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14);
									}
								}
							}
							if (!Local_152.f_6)
							{
								Local_152.f_6 = 1;
								SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
								Local_162.f_3 = (Local_162.f_3 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar28))));
								Local_161.f_6 = (Local_161.f_6 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar28))));
								Local_162.f_13++;
								Local_161.f_15 = 1;
								Local_161.f_14 = (Local_161.f_14 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar28))));
								Local_161.f_4 = joaat("win");
							}
						}
						else
						{
							if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
							{
								Local_161.f_4 = joaat("lose");
								if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
								{
									if (!__LIB_3__::func_56("TCP_LOSE_PP" /* GXT: You have ~a~. You lose. */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
									{
										__LIB_30__::func_362("TCP_LOSE_PP" /* GXT: You have ~a~. You lose. */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0));
									}
								}
							}
							if (!Local_152.f_6)
							{
								__LIB_16__::func_179(Local_151[PLAYER::PLAYER_ID() /*9*/].f_5);
								Local_152.f_6 = 1;
								if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
								{
									Local_162.f_14++;
								}
							}
						}
					}
					else
					{
						Local_152.f_6 = 1;
					}
				}
				else
				{
					if (!Local_109.f_5[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2])
					{
					}
					if (Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] <= 0)
					{
					}
					if (!BitTest(Local_109.f_20[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2], func_198(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1)))
					{
					}
					if (((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6)
					{
						if (Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] <= 0)
						{
							Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
							Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
							Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
							SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
							SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_5));
							SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_4));
						}
					}
				}
			}
			break;
	}
}

int func_96(int iParam0)//Position - 0x10799
{
	if (iParam0 > 500)
	{
		return 5;
	}
	else if (iParam0 > 400)
	{
		return 4;
	}
	else if (iParam0 > 300)
	{
		return 1;
	}
	return 0;
}

char* func_101(int iParam0, bool bParam1)//Position - 0x10842
{
	if (bParam1)
	{
		if (iParam0 > 500)
		{
			return "TCP_STRAIGHTF_F" /* GXT: a Straight Flush */;
		}
		else if (iParam0 > 400)
		{
			return "TCP_TOFAKIND_F" /* GXT: Three of a Kind */;
		}
		else if (iParam0 > 300)
		{
			return "TCP_STRAIGHT_F" /* GXT: a Straight */;
		}
		else if (iParam0 > 200)
		{
			return "TCP_FLUSH_F" /* GXT: a Flush */;
		}
		else if (iParam0 > 100)
		{
			return "TCP_PAIR_F" /* GXT: a Pair */;
		}
		else if (iParam0 == 12)
		{
			return "TCP_HIGH_Q_F" /* GXT: Queen High */;
		}
		else if (iParam0 == 13)
		{
			return "TCP_HIGH_K_F" /* GXT: King High */;
		}
		else
		{
			return "TCP_HIGH_A_F" /* GXT: Ace High */;
		}
	}
	else if (iParam0 > 500)
	{
		return "TCP_STRAIGHTF" /* GXT: a Straight Flush */;
	}
	else if (iParam0 > 400)
	{
		return "TCP_TOFAKIND" /* GXT: Three of a Kind */;
	}
	else if (iParam0 > 300)
	{
		return "TCP_STRAIGHT" /* GXT: a Straight */;
	}
	else if (iParam0 > 200)
	{
		return "TCP_FLUSH" /* GXT: a Flush */;
	}
	else if (iParam0 > 100)
	{
		if (iParam0 == 128)
		{
			return "TCP_PAIR_A" /* GXT: a Pair of Aces */;
		}
		else if (iParam0 == 104)
		{
			return "TCP_PAIR_2" /* GXT: a Pair of 2s */;
		}
		else if (iParam0 == 106)
		{
			return "TCP_PAIR_3" /* GXT: a Pair of 3s */;
		}
		else if (iParam0 == 108)
		{
			return "TCP_PAIR_4" /* GXT: a Pair of 4s */;
		}
		else if (iParam0 == 110)
		{
			return "TCP_PAIR_5" /* GXT: a Pair of 5s */;
		}
		else if (iParam0 == 112)
		{
			return "TCP_PAIR_6" /* GXT: a Pair of 6s */;
		}
		else if (iParam0 == 114)
		{
			return "TCP_PAIR_7" /* GXT: a Pair of 7s */;
		}
		else if (iParam0 == 116)
		{
			return "TCP_PAIR_8" /* GXT: a Pair of 8s */;
		}
		else if (iParam0 == 118)
		{
			return "TCP_PAIR_9" /* GXT: a Pair of 9s */;
		}
		else if (iParam0 == 120)
		{
			return "TCP_PAIR_10" /* GXT: a Pair of 10s */;
		}
		else if (iParam0 == 122)
		{
			return "TCP_PAIR_J" /* GXT: a Pair of Jacks */;
		}
		else if (iParam0 == 124)
		{
			return "TCP_PAIR_Q" /* GXT: a Pair of Queens */;
		}
		else if (iParam0 == 126)
		{
			return "TCP_PAIR_K" /* GXT: a Pair of Kings */;
		}
	}
	else if (iParam0 == 5)
	{
		return "TCP_HIGH_5" /* GXT: 5 High */;
	}
	else if (iParam0 == 6)
	{
		return "TCP_HIGH_6" /* GXT: 6 High */;
	}
	else if (iParam0 == 7)
	{
		return "TCP_HIGH_7" /* GXT: 7 High */;
	}
	else if (iParam0 == 8)
	{
		return "TCP_HIGH_8" /* GXT: 8 High */;
	}
	else if (iParam0 == 9)
	{
		return "TCP_HIGH_9" /* GXT: 9 High */;
	}
	else if (iParam0 == 10)
	{
		return "TCP_HIGH_10" /* GXT: 10 High */;
	}
	else if (iParam0 == 11)
	{
		return "TCP_HIGH_J" /* GXT: Jack High */;
	}
	else if (iParam0 == 12)
	{
		return "TCP_HIGH_Q" /* GXT: Queen High */;
	}
	else if (iParam0 == 13)
	{
		return "TCP_HIGH_K" /* GXT: King High */;
	}
	else
	{
		return "TCP_HIGH_A" /* GXT: Ace High */;
	}
	return "";
}

char* func_150(int iParam0)//Position - 0x1232E
{
	if (__LIB_1__::func_394())
	{
		if ((__LIB_2__::func_885(PLAYER::PLAYER_ID()) || __LIB_40__::func_623(Local_152.f_18) == 2) || __LIB_40__::func_623(Local_152.f_18) == 3)
		{
			if (iParam0 > 10000)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					case 1:
						return "female_reaction_good_var_02";
					case 2:
						return "female_reaction_good_var_03";
					case 3:
						return "female_reaction_good_var_04";
					default:
				}
			}
			else if (iParam0 > -10000)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					case 1:
						return "female_reaction_impartial_var_02";
					case 2:
						return "female_reaction_impartial_var_03";
					case 3:
						return "female_reaction_impartial_var_04";
					case 4:
						return "female_reaction_impartial_var_05";
					case 5:
						return "female_reaction_impartial_var_06";
					case 6:
						return "female_reaction_impartial_var_07";
					default:
				}
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					case 1:
						return "female_reaction_bad_var_02";
					case 2:
						return "female_reaction_bad_var_03";
					case 3:
						return "female_reaction_bad_var_04";
					}
				default:
			}
		}
		else if (iParam0 > 1000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				case 1:
					return "female_reaction_good_var_02";
				case 2:
					return "female_reaction_good_var_03";
				case 3:
					return "female_reaction_good_var_04";
				default:
			}
		}
		else if (iParam0 > -1000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				case 1:
					return "female_reaction_impartial_var_02";
				case 2:
					return "female_reaction_impartial_var_03";
				case 3:
					return "female_reaction_impartial_var_04";
				case 4:
					return "female_reaction_impartial_var_05";
				case 5:
					return "female_reaction_impartial_var_06";
				case 6:
					return "female_reaction_impartial_var_07";
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				case 1:
					return "female_reaction_bad_var_02";
				case 2:
					return "female_reaction_bad_var_03";
				case 3:
					return "female_reaction_bad_var_04";
				}
			default:
		}
	}
	else if ((__LIB_2__::func_885(PLAYER::PLAYER_ID()) || __LIB_40__::func_623(Local_152.f_18) == 2) || __LIB_40__::func_623(Local_152.f_18) == 3)
	{
		if (iParam0 > 10000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				case 1:
					return "reaction_good_var_02";
				case 2:
					return "reaction_good_var_03";
				case 3:
					return "reaction_good_var_04";
				default:
			}
		}
		else if (iParam0 > -10000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				case 1:
					return "reaction_impartial_var_02";
				case 2:
					return "reaction_impartial_var_03";
				case 3:
					return "reaction_impartial_var_04";
				case 4:
					return "reaction_impartial_var_05";
				case 5:
					return "reaction_impartial_var_06";
				case 6:
					return "reaction_impartial_var_07";
				case 7:
					return "reaction_impartial_var_08";
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				case 1:
					return "reaction_bad_var_02";
				case 2:
					return "reaction_bad_var_03";
				case 3:
					return "reaction_bad_var_04";
				}
			default:
		}
	}
	else if (iParam0 > 1000)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			case 1:
				return "reaction_good_var_02";
			case 2:
				return "reaction_good_var_03";
			case 3:
				return "reaction_good_var_04";
			default:
		}
	}
	else if (iParam0 > -1000)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			case 1:
				return "reaction_impartial_var_02";
			case 2:
				return "reaction_impartial_var_03";
			case 3:
				return "reaction_impartial_var_04";
			case 4:
				return "reaction_impartial_var_05";
			case 5:
				return "reaction_impartial_var_06";
			case 6:
				return "reaction_impartial_var_07";
			case 7:
				return "reaction_impartial_var_08";
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			case 1:
				return "reaction_bad_var_02";
			case 2:
				return "reaction_bad_var_03";
			case 3:
				return "reaction_bad_var_04";
			}
		default:
	}
	return "";
}

int func_160(int iParam0)//Position - 0x12C33
{
	if ((Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 3) || __LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				return 1;
			}
		default:
	}
	return 0;
}

void func_161(int iParam0)//Position - 0x12CB4
{
	Local_152.f_797 = iParam0;
}

void func_162()//Position - 0x12CC4
{
	char* sVar0;
	int iVar1;
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/, true);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/);
	if (!BitTest(Local_152.f_20, 3))
	{
		if ((PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/)) && !BitTest(Local_152.f_20, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_152.f_20), 3);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((__LIB_40__::func_623(Local_152.f_18) == 2 || __LIB_40__::func_623(Local_152.f_18) == 3) || __LIB_2__::func_885(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (__LIB_3__::func_67(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!BitTest(Local_152.f_20, 4))
			{
				__LIB_1__::func_602(0, 0);
				__LIB_3__::func_566(1, sVar0, sVar0);
				__LIB_1__::func_767("TCP_HANDS" /* GXT: HAND RANKINGS */);
				__LIB_1__::func_765(1, 2, 2, 2, 1);
				__LIB_1__::func_766(1, 1, 1, 1, 0);
				iVar1 = 0;
				__LIB_3__::func_572(iVar1, "TCP_HAND1" /* GXT: Straight Flush */, 0, 1, 0, 0, 0);
				__LIB_3__::func_572(iVar1, "TCP_10" /* GXT: 10 */, 1, 1, 0, 0, 0);
				func_163(59, 0);
				__LIB_3__::func_572(iVar1, "TCP_9" /* GXT: 9 */, 1, 1, 0, 0, 0);
				func_163(59, 0);
				__LIB_3__::func_572(iVar1, "TCP_8" /* GXT: 8 */, 1, 1, 0, 0, 0);
				func_163(59, 0);
				iVar1 = 1;
				__LIB_3__::func_572(iVar1, "TCP_HAND2" /* GXT: Three of a Kind */, 0, 1, 0, 0, 0);
				__LIB_3__::func_572(iVar1, "TCP_5" /* GXT: 5 */, 1, 1, 0, 0, 0);
				func_163(57, 0);
				__LIB_3__::func_572(iVar1, "TCP_5" /* GXT: 5 */, 1, 1, 0, 0, 0);
				func_163(58, 0);
				__LIB_3__::func_572(iVar1, "TCP_5" /* GXT: 5 */, 1, 1, 0, 0, 0);
				func_163(56, 0);
				iVar1 = 2;
				__LIB_3__::func_572(iVar1, "TCP_HAND3" /* GXT: Straight */, 0, 1, 0, 0, 0);
				__LIB_3__::func_572(iVar1, "TCP_2" /* GXT: 2 */, 1, 1, 0, 0, 0);
				func_163(57, 0);
				__LIB_3__::func_572(iVar1, "TCP_3" /* GXT: 3 */, 1, 1, 0, 0, 0);
				func_163(59, 0);
				__LIB_3__::func_572(iVar1, "TCP_4" /* GXT: 4 */, 1, 1, 0, 0, 0);
				func_163(57, 0);
				iVar1 = 3;
				__LIB_3__::func_572(iVar1, "TCP_HAND4" /* GXT: Flush */, 0, 1, 0, 0, 0);
				__LIB_3__::func_572(iVar1, "TCP_A" /* GXT: A */, 1, 1, 0, 0, 0);
				func_163(59, 0);
				__LIB_3__::func_572(iVar1, "TCP_Q" /* GXT: Q */, 1, 1, 0, 0, 0);
				func_163(59, 0);
				__LIB_3__::func_572(iVar1, "TCP_9" /* GXT: 9 */, 1, 1, 0, 0, 0);
				func_163(59, 0);
				iVar1 = 4;
				__LIB_3__::func_572(iVar1, "TCP_HAND5" /* GXT: Pair */, 0, 1, 0, 0, 0);
				__LIB_3__::func_572(iVar1, "TCP_K" /* GXT: K */, 1, 1, 0, 0, 0);
				func_163(57, 0);
				__LIB_3__::func_572(iVar1, "TCP_K" /* GXT: K */, 1, 1, 0, 0, 0);
				func_163(59, 0);
				__LIB_3__::func_572(iVar1, "TCP_7" /* GXT: 7 */, 1, 1, 0, 0, 0);
				func_163(56, 0);
				iVar1 = 5;
				__LIB_3__::func_572(iVar1, "TCP_HAND6" /* GXT: High Card */, 0, 1, 0, 0, 0);
				__LIB_3__::func_572(iVar1, "TCP_A" /* GXT: A */, 1, 1, 0, 0, 0);
				func_163(56, 0);
				__LIB_3__::func_572(iVar1, "TCP_7" /* GXT: 7 */, 1, 1, 0, 0, 0);
				func_163(57, 0);
				__LIB_3__::func_572(iVar1, "TCP_3" /* GXT: 3 */, 1, 1, 0, 0, 0);
				func_163(59, 0);
				__LIB_3__::func_781(-1, 1, 1);
				MISC::SET_BIT(&(Local_152.f_20), 4);
			}
			__LIB_11__::func_266(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			__LIB_1__::func_895(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_165 = 1;
			Local_152.f_20 = 0;
			MISC::SET_BIT(&(Local_152.f_20), 2);
		}
	}
}

void func_163(int iParam0, bool bParam1)//Position - 0x13000
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (Global_23150.f_5615 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	Global_23150.f_4824[Global_23150.f_5615] = iParam0;
	Global_23150.f_5615++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 4;
	Global_23150.f_6134++;
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = __LIB_16__::func_230();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			__LIB_3__::func_124(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = __LIB_16__::func_229();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

void func_182()//Position - 0x1467C
{
	char* sVar0;
	if (BitTest(Local_152.f_20, 2))
	{
		MISC::CLEAR_BIT(&(Local_152.f_20), 2);
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/);
	if (!BitTest(Local_152.f_20, 0))
	{
		if ((PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/)) && !BitTest(Local_152.f_20, 3))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_152.f_20), 0);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((__LIB_40__::func_623(Local_152.f_18) == 2 || __LIB_40__::func_623(Local_152.f_18) == 3) || __LIB_2__::func_885(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (__LIB_3__::func_67(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!BitTest(Local_152.f_20, 1))
			{
				__LIB_1__::func_602(0, 0);
				__LIB_3__::func_566(1, sVar0, sVar0);
				__LIB_1__::func_767("TCP_RULES" /* GXT: RULES */);
				__LIB_16__::func_258(1, iLocal_165, 6);
				__LIB_4__::func_846(1, 1, 1, 1, 1);
				__LIB_3__::func_781(-1, 1, 1);
				__LIB_1__::func_789(func_184(iLocal_165), 0, 0);
				__LIB_3__::func_542(func_183(iLocal_165));
				MISC::SET_BIT(&(Local_152.f_20), 1);
			}
			__LIB_11__::func_266(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			__LIB_1__::func_895(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_165 = 1;
			Local_152.f_20 = 0;
			MISC::SET_BIT(&(Local_152.f_20), 2);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			iLocal_165++;
			if (iLocal_165 > 6)
			{
				iLocal_165 = 1;
			}
			MISC::CLEAR_BIT(&(Local_152.f_20), 1);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			iLocal_165 = (iLocal_165 - 1);
			if (iLocal_165 < 1)
			{
				iLocal_165 = 6;
			}
			MISC::CLEAR_BIT(&(Local_152.f_20), 1);
		}
	}
}

char* func_183(int iParam0)//Position - 0x14840
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1" /* GXT: A single standard 52-card pack is used. This is shuffled at the start of every hand. */;
		case 2:
			return "TCP_RULE_2" /* GXT: The Dealer must have a Queen high or better to play. If the Dealer does not play, Ante wagers are paid 1 to 1 and Play wagers are returned. */;
		case 3:
			return "TCP_RULE_3" /* GXT: Players can choose to bet on the Ante, Pair Plus, or both. After being dealt their cards, players that have bet the Ante must place an equal Play bet to compare their hand with the Dealer.~n~~n~Play and Ante bets pay out 1 to 1 if the player's hand beats the Dealer. The player needs a Straight or better to receive the Ante Bonus. For Pair Plus, the player must have a Pair or better to receive a payout. This is paid independently of what hand the Dealer has. */;
		case 4:
			return "TCP_RULE_4" /* GXT: Straight Flush: 40 to 1~n~Three of a Kind: 30 to 1~n~Straight: 6 to 1~n~Flush: 4 to 1~n~Pair: 1 to 1 */;
		case 5:
			return "TCP_RULE_5" /* GXT: Straight Flush: 5 to 1~n~Three of a Kind: 4 to 1~n~Straight: 1 to 1 */;
		case 6:
			if ((__LIB_40__::func_623(Local_152.f_18) == 2 || __LIB_40__::func_623(Local_152.f_18) == 3) || __LIB_2__::func_885(PLAYER::PLAYER_ID()))
			{
				return "TCP_RULE_6b" /* GXT: Ante and Play:~n~- Minimum: 1000 Chips~n~- Maximum: 50000 Chips~n~~n~Pair Plus:~n~- Minimum: 1000 Chips~n~- Maximum: 5000 Chips */;
			}
			else
			{
				return "TCP_RULE_6a" /* GXT: Ante and Play:~n~- Minimum: 10 Chips~n~- Maximum: 5000 Chips~n~~n~Pair Plus:~n~- Minimum: 10 Chips~n~- Maximum: 500 Chips */;
			}
			break;
	}
	return "";
}

char* func_184(int iParam0)//Position - 0x148DB
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1T" /* GXT: The Pack~n~~a~ */;
		case 2:
			return "TCP_RULE_2T" /* GXT: Dealer Hand~n~~a~ */;
		case 3:
			return "TCP_RULE_3T" /* GXT: Player Hand~n~~a~ */;
		case 4:
			return "TCP_RULE_4T" /* GXT: Pair Plus Payouts~n~~a~ */;
		case 5:
			return "TCP_RULE_5T" /* GXT: Ante Bonus Payouts~n~~a~ */;
		case 6:
			if ((__LIB_40__::func_623(Local_152.f_18) == 2 || __LIB_40__::func_623(Local_152.f_18) == 3) || __LIB_2__::func_885(PLAYER::PLAYER_ID()))
			{
				return "TCP_RULE_6Tb" /* GXT: Bet Limits~n~~a~ */;
			}
			else
			{
				return "TCP_RULE_6Ta" /* GXT: Bet Limits~n~~a~ */;
			}
			break;
	}
	return "";
}

int func_198(int iParam0)//Position - 0x14E5A
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 12;
		case 1:
		case 5:
		case 9:
		case 13:
			return 13;
		case 2:
		case 6:
		case 10:
		case 14:
			return 14;
		case 3:
		case 7:
		case 11:
		case 15:
			return 15;
		default:
	}
	return 0;
}

var func_203(bool bParam0)//Position - 0x1508F
{
	if (__LIB_1__::func_394())
	{
		if (!bParam0)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					Local_152.f_796 = "female_idle_cardgames_var_01";
					break;
				case 1:
					Local_152.f_796 = "female_idle_cardgames_var_02";
					break;
				case 2:
					Local_152.f_796 = "female_idle_cardgames_var_03";
					break;
				case 3:
					Local_152.f_796 = "female_idle_cardgames_var_04";
					break;
				case 4:
					Local_152.f_796 = "female_idle_cardgames_var_05";
					break;
				case 5:
					Local_152.f_796 = "female_idle_cardgames_var_06";
					break;
				case 6:
					Local_152.f_796 = "female_idle_cardgames_var_07";
					break;
				case 7:
					Local_152.f_796 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
		{
			case 0:
				Local_152.f_796 = "idle_cardgames_var_01";
				break;
			case 1:
				Local_152.f_796 = "idle_cardgames_var_02";
				break;
			case 2:
				Local_152.f_796 = "idle_cardgames_var_03";
				break;
			case 3:
				Local_152.f_796 = "idle_cardgames_var_04";
				break;
			case 4:
				Local_152.f_796 = "idle_cardgames_var_05";
				break;
			case 5:
				Local_152.f_796 = "idle_cardgames_var_06";
				break;
			case 6:
				Local_152.f_796 = "idle_cardgames_var_07";
				break;
			case 7:
				Local_152.f_796 = "idle_cardgames_var_08";
				break;
			case 8:
				Local_152.f_796 = "idle_cardgames_var_09";
				break;
			case 9:
				Local_152.f_796 = "idle_cardgames_var_10";
				break;
			case 10:
				Local_152.f_796 = "idle_cardgames_var_11";
				break;
			case 11:
				Local_152.f_796 = "idle_cardgames_var_12";
				break;
			case 12:
				Local_152.f_796 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_152.f_796;
}

int func_208()//Position - 0x1533D
{
	if ((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && (!BitTest(Local_152.f_22, 9) && Local_161.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

void func_211()//Position - 0x153B6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/))
	{
		if (bLocal_171)
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_171 = false;
	}
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/))
	{
		if (bLocal_170)
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_170 = false;
	}
	if ((((Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0 && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_3__::func_558()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] < 12)
	{
		if (Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] > 0 && (BitTest(Local_152.f_22, 4) || BitTest(Local_109.f_20[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2], func_198(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1))))
		{
			if ((((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/)) && !bLocal_170) && !__LIB_0__::func_864(&uLocal_172)) && !CAM::DOES_CAM_EXIST(Local_152.f_13))
			{
				if (!bLocal_171)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						bLocal_166 = true;
					}
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
					bLocal_171 = true;
				}
			}
		}
		else
		{
			if (bLocal_171)
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_171 = false;
		}
		if (Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] > 0)
		{
			if ((((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/)) && !bLocal_171) && !__LIB_0__::func_864(&uLocal_172)) && !CAM::DOES_CAM_EXIST(Local_152.f_13))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				bLocal_170 = true;
			}
		}
		else
		{
			if (bLocal_170)
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_170 = false;
		}
	}
	else
	{
		if (bLocal_171 || bLocal_170)
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_171 = false;
		bLocal_170 = false;
	}
	if (bLocal_170 || bLocal_171)
	{
		CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 166, true);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!CAM::DOES_CAM_EXIST(Local_152.f_13))
		{
			Local_152.f_13 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			CAM::SET_CAM_PARAMS(Local_152.f_13, func_223(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), func_222(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), func_221(bLocal_170), 0, 1, 1, 2);
			CAM::SHAKE_CAM(Local_152.f_13, "HAND_SHAKE", 0.03f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else if (bLocal_170)
		{
			if (Local_109.f_5[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2])
			{
				if (!__LIB_3__::func_56("TCP_D_HAND" /* GXT: The Dealer has ~a~. */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
				{
					__LIB_30__::func_362("TCP_D_HAND" /* GXT: The Dealer has ~a~. */, func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
				}
			}
			else if (!__LIB_0__::func_1("TCP_D_HAND_D" /* GXT: The Dealer's cards will be shown once all players have made their decisions. */))
			{
				__LIB_5__::func_401("TCP_D_HAND_D" /* GXT: The Dealer's cards will be shown once all players have made their decisions. */);
			}
			fVar0 = CAM::GET_CAM_FOV(Local_152.f_13);
			fVar1 = 50f;
			fVar1 = func_220();
			fVar0 = func_218(fVar0, fVar1, 0.2f, 4);
			CAM::SET_CAM_PARAMS(Local_152.f_13, func_223(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), func_222(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_171)
		{
			if (bLocal_166)
			{
				fVar2 = CAM::GET_CAM_FOV(Local_152.f_13);
				fVar3 = 50f;
				Var4 = { CAM::GET_CAM_ROT(Local_152.f_13, 2) };
				Var5 = { 0f, 0f, 0f };
				Var6 = { -38.1166f, -0.0930717f, -102.613f };
				Var7 = { CAM::GET_CAM_COORD(Local_152.f_13) };
				Var8 = { 0f, 0f, 0f };
				Var9 = { 966.621f, 32.009f, 116.621f };
				if (Var4.f_2 < 0f)
				{
					Var4.f_2 = (Var4.f_2 + 360f);
				}
				Var9 = { func_217(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1) };
				Var6 = { func_216(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1) };
				fVar3 = func_220();
				if (Var6.f_2 < 0f)
				{
					Var6.f_2 = (Var6.f_2 + 360f);
				}
				Var5 = { func_214(Var4, Var6, 0.35f, 4) };
				Var8 = { func_213(Var7, Var9, 0.35f, 4) };
				if (Var5.f_2 > 180f)
				{
					Var5.f_2 = (Var5.f_2 - 360f);
				}
				else if (Var5.f_2 < -180f)
				{
					Var5.f_2 = (Var5.f_2 + 360f);
				}
				if (__LIB_0__::func_490(Var4, Var6, 10f, 0) && __LIB_0__::func_490(Var7, Var9, 0.1f, 0))
				{
					fVar2 = func_218(fVar2, fVar3, 0.35f, 4);
				}
				CAM::SET_CAM_PARAMS(Local_152.f_13, Var8, Var5, fVar2, 0, 1, 1, 2);
			}
			else
			{
				fVar10 = CAM::GET_CAM_FOV(Local_152.f_13);
				fVar11 = 50f;
				fVar11 = func_220();
				fVar10 = func_218(fVar10, fVar11, 0.35f, 4);
				CAM::SET_CAM_PARAMS(Local_152.f_13, func_223(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), func_222(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), fVar10, 0, 1, 1, 2);
			}
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (CAM::DOES_CAM_EXIST(Local_152.f_13))
		{
			CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
			if (!__LIB_0__::func_864(&uLocal_172) && bLocal_166)
			{
				__LIB_0__::func_795(&uLocal_172, 0, 0);
				GRAPHICS::ANIMPOSTFX_PLAY("PokerCamTransition", 0, false);
			}
			else if (__LIB_0__::func_937(&uLocal_172, 100, 0) || !bLocal_166)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(Local_152.f_13, false);
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_794(&uLocal_172);
				bLocal_166 = false;
			}
		}
	}
	if (bLocal_171 || bLocal_166)
	{
		if (BitTest(Local_152.f_22, 4) || BitTest(Local_109.f_20[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2], func_198(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1)))
		{
			if (!__LIB_3__::func_56("TCP_P_HAND" /* GXT: You have ~a~. */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
			{
				__LIB_30__::func_362("TCP_P_HAND" /* GXT: You have ~a~. */, func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0));
			}
		}
	}
}

Vector3 func_213(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x15AED
{
	struct<3> Var0;
	Var0.f_0 = func_218(Param0.f_0, Param1.f_0, fParam2, iParam3);
	Var0.f_1 = func_218(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_218(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

Vector3 func_214(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x15B2F
{
	struct<3> Var0;
	Var0.f_0 = func_215(Param0.f_0, Param1.f_0, fParam2, iParam3);
	Var0.f_1 = func_215(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_215(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

float func_215(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x15B71
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = MISC::ABSF((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_218(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_216(int iParam0)//Position - 0x15BE1
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { func_233(iParam0) };
	Var1 = { -47.16f, 0f, -87.475f };
	return Vector(Var0.f_2, 0f, 0f) + Var1;
}

Vector3 func_217(int iParam0)//Position - 0x15C0D
{
	struct<3> Var0;
	Var0 = { func_233(iParam0) };
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_361(iParam0), Var0.f_2, 0.198f, 0f, 1.388f);
}

float func_218(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x15C38
{
	float fVar0;
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(__LIB_0__::func_503((3.1415927f * fParam2))) / 2f) + 0.5f);
			break;
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_218(fParam0, fParam1, fParam2, 0);
			break;
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_218(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_220()//Position - 0x15D5B
{
	if (bLocal_170)
	{
		return 37.8425f;
	}
	return 43.3518f;
}

float func_221(bool bParam0)//Position - 0x15D76
{
	float fVar0;
	fVar0 = 44.6546f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	if (bLocal_166)
	{
		fVar0 = 50f;
	}
	return fVar0;
}

Vector3 func_222(int iParam0, int iParam1, bool bParam2)//Position - 0x15DA0
{
	struct<3> Var0;
	if (bParam2)
	{
		Var0 = { -74.52f, 0f, 0f };
	}
	else if (bLocal_166)
	{
		return CAM::GET_GAMEPLAY_CAM_ROT(2);
	}
	else
	{
		return func_216(iParam0);
	}
	return Vector(func_75(iParam1), 0f, 0f) + Var0;
}

Vector3 func_223(int iParam0, int iParam1, bool bParam2)//Position - 0x15DE2
{
	struct<3> Var0;
	if (bParam2)
	{
		Var0 = { 0f, -0.02f, 1.62f };
	}
	else if (bLocal_166)
	{
		return CAM::GET_GAMEPLAY_CAM_COORD();
	}
	else
	{
		return func_217(iParam0);
	}
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iParam1), func_75(iParam1), Var0);
}

int func_225(int iParam0)//Position - 0x15E45
{
	if (Local_109.f_576[iParam0] == 2)
	{
		if (!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/].f_6, 0))
		{
			Local_152.f_799 = { Local_109.f_168[iParam0 /*55*/] };
			MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_6), 0);
		}
	}
	else if (Local_109.f_576[iParam0] > 2 && BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/].f_6, 0))
	{
		if (Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] > 0)
		{
			if (Local_152.f_854 != Local_109.f_410[PLAYER::PLAYER_ID() /*5*/])
			{
				Local_152.f_854 = { Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] };
			}
			else
			{
				if (Local_152.f_854.f_1[iLocal_169] != Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1[iLocal_169])
				{
					iLocal_168 = 0;
					iLocal_169 = 0;
					if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
					{
						STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
					}
					func_379(1);
					HUD::CLEAR_HELP(true);
					return 1;
				}
				iLocal_169++;
				if (iLocal_169 >= Local_152.f_854)
				{
					iLocal_169 = 0;
				}
			}
		}
		if (Local_109.f_168[iParam0 /*55*/].f_2[iLocal_168] != Local_152.f_799.f_2[iLocal_168])
		{
			iLocal_168 = 0;
			iLocal_169 = 0;
			if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
			{
				STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
			}
			func_379(1);
			HUD::CLEAR_HELP(true);
			return 1;
		}
		iLocal_168++;
		if (iLocal_168 >= 52)
		{
			iLocal_168 = 0;
		}
	}
	return 0;
}

void func_226()//Position - 0x15FA9
{
	int iVar0;
	iVar0 = __LIB_40__::func_623(Local_152.f_18);
	if (iVar0 < 32)
	{
		MISC::SET_BIT(&(Local_152.f_33), iVar0);
	}
}

void func_229(var uParam0, int iParam1)//Position - 0x16021
{
	if (uParam0->f_7 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_7 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (__LIB_33__::func_307())
		{
			func_229(uParam0, 7);
			return;
		}
	}
	uParam0->f_7 = iParam1;
	__LIB_0__::func_794(&(Local_152.f_794));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		__LIB_0__::func_795(&(Local_152.f_794), 0, 0);
	}
}

int func_230()//Position - 0x160AD
{
	int iVar0;
	iVar0 = __LIB_40__::func_623(Local_152.f_18);
	if (iVar0 < 32)
	{
		return BitTest(Local_152.f_33, iVar0);
	}
	return 0;
}

Vector3 func_233(int iParam0)//Position - 0x16119
{
	int iVar0;
	if (Local_152.f_26 == 1)
	{
		if (__LIB_11__::func_612() != __LIB_0__::func_162())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(__LIB_40__::func_623(iParam0)), 1f, func_234(Global_2689235[__LIB_11__::func_612() /*453*/].f_446), false, false, false);
		}
	}
	else if (__LIB_40__::func_623(iParam0) == 0 || __LIB_40__::func_623(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(__LIB_40__::func_623(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(__LIB_40__::func_623(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 1:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 2:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 3:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 4:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 5:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 6:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 7:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 8:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 9:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 10:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 11:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 12:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 13:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 14:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 15:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		default:
	}
	return 0f, 0f, 0f;
}

int func_234(int iParam0)//Position - 0x1635A
{
	switch (iParam0)
	{
		case 1:
			return joaat("h4_prop_casino_3cardpoker_01a");
			break;
		case 2:
			return joaat("h4_prop_casino_3cardpoker_01b");
			break;
		case 3:
			return joaat("h4_prop_casino_3cardpoker_01c");
			break;
		case 4:
			return joaat("h4_prop_casino_3cardpoker_01e");
			break;
	}
	return joaat("vw_prop_casino_3cardpoker_01b");
}

var func_235(int iParam0, int iParam1)//Position - 0x163B2
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_40__::func_622(), __LIB_40__::func_621(iParam1), func_361(iParam0), func_233(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_237(int iParam0, int iParam1)//Position - 0x1641C
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_40__::func_622(), __LIB_40__::func_621(iParam1), func_361(iParam0), func_233(iParam0), 0.01f, 2) };
	return Var0;
}

int func_238()//Position - 0x1644C
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_40__::func_613());
	STREAMING::REQUEST_ANIM_DICT(__LIB_40__::func_615());
	STREAMING::REQUEST_ANIM_DICT(func_92());
	STREAMING::REQUEST_ANIM_DICT(__LIB_40__::func_622());
	if (((STREAMING::HAS_ANIM_DICT_LOADED(__LIB_40__::func_613()) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_40__::func_615())) && STREAMING::HAS_ANIM_DICT_LOADED(func_92())) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_40__::func_622()))
	{
		return 1;
	}
	return 0;
}

int func_239()//Position - 0x164AB
{
	if (__LIB_0__::func_937(&(Local_152.f_792), 3500, 0))
	{
		__LIB_0__::func_794(&(Local_152.f_792));
		return 1;
	}
	return 0;
}

bool func_240(int iParam0)//Position - 0x164D3
{
	if (Local_109.f_117[iParam0] == __LIB_0__::func_162())
	{
		return 0;
	}
	return Local_109.f_117[iParam0] != PLAYER::PLAYER_ID();
}

bool func_250(int iParam0)//Position - 0x16648
{
	return Local_109.f_117[iParam0] == PLAYER::PLAYER_ID();
}

void func_251()//Position - 0x1665D
{
	func_363(2);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
	func_341();
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
	__LIB_1__::func_91();
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 3);
	__LIB_33__::func_308();
}

void func_300(int iParam0)//Position - 0x1AF2F
{
	Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam0;
	Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 = __LIB_40__::func_623(iParam0);
}

int func_321()//Position - 0x1B97A
{
	if (((((((((__LIB_0__::func_1("TCP_USED" /* GXT: This seat is currently in use. */) || __LIB_0__::func_1("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */)) || __LIB_0__::func_1("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */)) || __LIB_5__::func_831("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, __LIB_9__::func_562(1))) || __LIB_0__::func_1("CAS_MG_SUITE2" /* GXT: A VIP Membership is required to play High Limit. Purchase a Penthouse from www.thediamondcasinoandresort.com to become a VIP member. */)) || __LIB_0__::func_1("CAS_MG_NOCHIPS3" /* GXT: Chips are required to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */)) || __LIB_0__::func_1("CAS_MG_LOWCHIPS3" /* GXT: You don't have enough Chips to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */)) || __LIB_0__::func_1("CAS_MG_NOCHIPS7" /* GXT: Chips are required to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */)) || __LIB_0__::func_1("CAS_MG_LOWCHIPS7" /* GXT: You don't have enough Chips to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */)) || __LIB_0__::func_1("TCP_NA" /* GXT: This feature is not available for you. */))
	{
		return 1;
	}
	return 0;
}

void func_341()//Position - 0x1BC8F
{
	if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 != -1)
	{
		Local_152.f_2 = 0;
		Local_152.f_3 = 0;
		Local_152.f_4 = 0;
		Local_152.f_6 = 0;
		Local_152.f_22 = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/] = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	}
}

int func_354()//Position - 0x1BF1D
{
	if (__LIB_2__::func_885(PLAYER::PLAYER_ID()) && __LIB_11__::func_612() != __LIB_0__::func_162())
	{
		if ((BitTest(Global_2689235[__LIB_11__::func_612() /*453*/].f_318.f_4, 0) || BitTest(Global_1946250.f_6, 10)) || Global_2689235[__LIB_11__::func_612() /*453*/].f_446 != Global_1966110)
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_359(int iParam0)//Position - 0x1C03F
{
	if (Local_152.f_26 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1142.7981f, 263.5501f, -51.7869f;
			case 1:
				return 1142.82f, 264.2595f, -51.8004f;
			case 2:
				return 1143.3395f, 264.7519f, -51.8289f;
			case 3:
				return 1144.0516f, 264.7396f, -51.7913f;
			case 4:
				return 1146.8492f, 261.9344f, -51.8167f;
			case 5:
				return 1146.8649f, 261.2238f, -51.8003f;
			case 6:
				return 1146.3254f, 260.7546f, -51.812f;
			case 7:
				return 1145.6301f, 260.7765f, -51.7979f;
			case 8:
				return 1134.4108f, 266.1568f, -50.9898f;
			case 9:
				return 1133.7075f, 266.1863f, -50.9883f;
			case 10:
				return 1133.2422f, 266.7186f, -50.9969f;
			case 11:
				return 1133.261f, 267.4263f, -50.9812f;
			case 12:
				return 1149.4203f, 251.1891f, -50.9655f;
			case 13:
				return 1148.7267f, 251.1957f, -50.9855f;
			case 14:
				return 1148.2361f, 251.7239f, -51.0083f;
			case 15:
				return 1148.2625f, 252.4149f, -51.0019f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_361(int iParam0)//Position - 0x1C262
{
	int iVar0;
	if (Local_152.f_26 == 1)
	{
		if (__LIB_11__::func_612() != __LIB_0__::func_162())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(__LIB_40__::func_623(iParam0)), 1f, func_234(Global_2689235[__LIB_11__::func_612() /*453*/].f_446), false, false, false);
		}
	}
	else if (__LIB_40__::func_623(iParam0) == 0 || __LIB_40__::func_623(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(__LIB_40__::func_623(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(__LIB_40__::func_623(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 1:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 2:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 3:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 4:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 5:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 6:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 7:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 8:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 9:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 10:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 11:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 12:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 13:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 14:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 15:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		default:
	}
	return 0f, 0f, 0f;
}

void func_363(int iParam0)//Position - 0x1C4B5
{
	Local_152.f_798 = iParam0;
}

void func_364(int iParam0)//Position - 0x1C4C5
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_229(&(Local_151[iParam0 /*9*/]), 0);
	Local_151[iParam0 /*9*/].f_7.f_1 = -1;
}

int func_365()//Position - 0x1C4FA
{
	int iVar0;
	if (Local_152.f_26 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_34))
		{
			if (__LIB_11__::func_612() != __LIB_0__::func_162())
			{
				iVar0 = func_234(Global_2689235[__LIB_11__::func_612() /*453*/].f_446);
				STREAMING::REQUEST_MODEL(iVar0);
				if (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					return 0;
				}
				Local_152.f_34 = OBJECT::CREATE_OBJECT(iVar0, func_76(0), false, false, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_34, func_76(0), false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_152.f_34, func_75(0));
				OBJECT::SET_OBJECT_TINT_INDEX(Local_152.f_34, __LIB_25__::func_688(__LIB_11__::func_612()));
				ENTITY::FREEZE_ENTITY_POSITION(Local_152.f_34, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
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

void func_372(var uParam0)//Position - 0x1C6B5
{
	switch (uParam0->f_7)
	{
		case 0:
			break;
		case 1:
			if ((func_375(PLAYER::PLAYER_ID(), 1) || func_375(PLAYER::PLAYER_ID(), 2)) || func_374())
			{
				func_229(uParam0, 3);
			}
			break;
		case 2:
			if ((func_375(PLAYER::PLAYER_ID(), 1) || func_375(PLAYER::PLAYER_ID(), 2)) || func_374())
			{
				func_229(uParam0, 3);
			}
			break;
		case 3:
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_373())
			{
				func_229(uParam0, 8);
			}
			break;
		case 8:
			break;
	}
}

int func_373()//Position - 0x1C775
{
	if ((((func_375(PLAYER::PLAYER_ID(), 4) || func_375(PLAYER::PLAYER_ID(), 5)) || func_375(PLAYER::PLAYER_ID(), 6)) || func_375(PLAYER::PLAYER_ID(), 7)) || func_374())
	{
		return 1;
	}
	return 0;
}

int func_374()//Position - 0x1C7C5
{
	if (__LIB_0__::func_937(&(Local_152.f_794), 3500, 0))
	{
		__LIB_0__::func_794(&(Local_152.f_794));
		return 1;
	}
	return 0;
}

int func_375(int iParam0, int iParam1)//Position - 0x1C7ED
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return BitTest(Local_109.f_600[iParam0], iVar0);
}

void func_379(bool bParam0)//Position - 0x1C8E4
{
	char* sVar0;
	if (Local_152.f_798 > 2 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
	{
		if (((((!__LIB_3__::func_366() && !__LIB_1__::func_584()) && !__LIB_0__::func_629()) && !__LIB_5__::func_845()) && !__LIB_0__::func_890(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		__LIB_1__::func_91();
	}
	if (Local_152.f_798 > 2)
	{
		__LIB_1__::func_91();
	}
	if (BitTest(Local_152.f_20, 0) || BitTest(Local_152.f_20, 3))
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((__LIB_40__::func_623(Local_152.f_18) == 2 || __LIB_40__::func_623(Local_152.f_18) == 3) || __LIB_2__::func_885(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		__LIB_1__::func_895(1, -1);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
		iLocal_165 = 1;
		Local_152.f_20 = 0;
	}
	if (CAM::DOES_CAM_EXIST(Local_152.f_13))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(Local_152.f_13, false);
		bLocal_166 = false;
	}
	if (Local_152.f_31 != -1)
	{
		__LIB_3__::func_122(&(Local_152.f_31));
		Local_152.f_31 = -1;
	}
	if (bParam0)
	{
		if (BitTest(Local_152.f_22, 4) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_idle", 3))
		{
			Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
			Local_152.f_7 = 1;
		}
		else
		{
			Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_152.f_18), func_233(Local_152.f_18), 2, false, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, __LIB_40__::func_622(), __LIB_40__::func_618(Local_152.f_18), 2f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
		}
	}
	Local_152.f_15 = 0;
	Local_152.f_23 = 0;
	Local_152.f_22 = 0;
	Local_152.f_29 = 0;
	Local_151[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Local_152.f_1 = 0;
	Local_152.f_2 = 0;
	Local_152.f_3 = 0;
	Local_152.f_4 = 0;
	Local_152.f_6 = 0;
	Local_152.f_14 = 0;
	if (!bParam0)
	{
		func_341();
	}
	Local_162.f_4 = __LIB_40__::func_632();
	Local_162.f_5 = __LIB_1__::func_724(&uLocal_159, 0, 0);
	if (Local_152.f_798 > 2)
	{
		if (Global_262145.f_26821 /* Tunable: ENABLE_THREE_CARD_POKER_LIGHT */)
		{
			STATS::PLAYSTATS_CASINO_THREE_CARD_POKER_LIGHT(&Local_162);
		}
	}
	if (!bParam0)
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 3);
	}
	if (bParam0 || Local_152.f_798 > 2)
	{
		__LIB_33__::func_308();
	}
	func_363(10);
	func_161(0);
}

void func_385()//Position - 0x1CD88
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_152.f_26)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(Local_109.f_50[iVar0]);
			if (__LIB_0__::func_121(iVar1))
			{
				if (func_386(iVar0))
				{
					AUDIO::BLOCK_ALL_SPEECH_FROM_PED(iVar1, false, true);
				}
				else
				{
					AUDIO::BLOCK_ALL_SPEECH_FROM_PED(iVar1, true, false);
				}
			}
		}
		iVar0++;
	}
}

int func_386(int iParam0)//Position - 0x1CDEC
{
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 5) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 2))
	{
		return 0;
	}
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 3))
	{
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

void func_388()//Position - 0x1CE70
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_152.f_26)
	{
		if (Global_2788829 != iVar0 && (Global_2788829 != -1 || __LIB_2__::func_885(PLAYER::PLAYER_ID())))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_35[iVar0]))
			{
				func_391(iVar0);
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0])))
			{
				if (!iLocal_177[iVar0])
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), __LIB_40__::func_613(), func_44(iVar0), 3))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), joaat("pick_up_deck")))
						{
							iLocal_178[iVar0] = 1;
						}
					}
					else
					{
						iLocal_178[iVar0] = 0;
					}
					if (((iLocal_178[iVar0] || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), __LIB_40__::func_613(), func_43(iVar0), 3)) || Local_109.f_576[iVar0] == 6) || Local_109.f_576[iVar0] == 7)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_152.f_35[iVar0]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_152.f_35[iVar0], false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_152.f_35[iVar0], NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
						}
						iLocal_177[iVar0] = 1;
					}
				}
				else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), __LIB_40__::func_613(), func_31(iVar0), 3) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), joaat("put_down_deck"))) || ((Local_109.f_576[iVar0] < 5 && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), __LIB_40__::func_613(), func_44(iVar0), 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), __LIB_40__::func_613(), func_43(iVar0), 3)))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_152.f_35[iVar0]))
					{
						ENTITY::DETACH_ENTITY(Local_152.f_35[iVar0], true, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_35[iVar0], func_390(iVar0), false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_152.f_35[iVar0], func_389(iVar0), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_152.f_35[iVar0], true);
					}
					iLocal_177[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_389(int iParam0)//Position - 0x1D0E0
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_40__::func_613(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

Vector3 func_390(int iParam0)//Position - 0x1D110
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_40__::func_613(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

void func_391(int iParam0)//Position - 0x1D140
{
	int iVar0;
	if (Local_152.f_5)
	{
		iVar0 = joaat("vw_prop_vw_casino_cards_01");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(__LIB_40__::func_613());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_40__::func_613()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_35[iParam0]))
	{
		Local_152.f_35[iParam0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, func_390(iParam0), false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_35[iParam0], func_390(iParam0), false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_152.f_35[iParam0], func_389(iParam0), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_152.f_35[iParam0], true);
		STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_613());
	}
}

void func_392()//Position - 0x1D1FB
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	if (((__LIB_4__::func_63(joaat("rm_GamingFloor_02")) || __LIB_4__::func_63(joaat("rm_GamingFloor_03"))) || __LIB_2__::func_885(PLAYER::PLAYER_ID())) && !__LIB_7__::func_563())
	{
		iLocal_164 = 1;
		if (!bLocal_163)
		{
			bLocal_163 = (func_406() && __LIB_42__::func_881());
		}
	}
	else
	{
		if (iLocal_164)
		{
			func_407();
			__LIB_42__::func_880();
			iLocal_164 = 0;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_152.f_26)
	{
		if (iVar0 != iLocal_167 && iVar0 != Local_151[PLAYER::PLAYER_ID() /*9*/].f_2)
		{
		}
		else
		{
			bVar1 = false;
			if (__LIB_40__::func_614(iVar0, Local_152.f_26))
			{
				bVar1 = true;
			}
			Var3 = { 0f, 0f, func_75(iVar0) };
			iVar4 = 0;
			while (iVar4 < 4)
			{
				iVar5 = Local_109.f_117[(iVar0 * 4 + iVar4)];
				if (iVar5 < 0 || ((!__LIB_4__::func_63(joaat("rm_GamingFloor_02")) && !__LIB_4__::func_63(joaat("rm_GamingFloor_03"))) && !__LIB_2__::func_885(PLAYER::PLAYER_ID())))
				{
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, iVar2)]))
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, iVar2)]));
						}
						iVar2++;
					}
				}
				else
				{
					if (Local_151[iVar5 /*9*/].f_3 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 0)]))
						{
							if (__LIB_40__::func_625(Local_151[iVar5 /*9*/].f_3, bVar1) != 0)
							{
								Local_152.f_40[func_397(iVar0, iVar4, 0)] = OBJECT::CREATE_OBJECT_NO_OFFSET(__LIB_40__::func_625(Local_151[iVar5 /*9*/].f_3, bVar1), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_3, 0, iVar4, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_40[func_397(iVar0, iVar4, 0)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_3, 0, iVar4, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_152.f_40[func_397(iVar0, iVar4, 0)], Var3 + func_394(Local_151[iVar5 /*9*/].f_4, 0, iVar4, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_40__::func_624(Local_151[iVar5 /*9*/].f_3)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_40__::func_624(Local_151[iVar5 /*9*/].f_3), Local_152.f_40[func_397(iVar0, iVar4, 0)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 0)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 0)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 0)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 0)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 0)], SYSTEM::FLOOR(func_218(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 0)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 0)]));
						}
					}
					if (Local_151[iVar5 /*9*/].f_5 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 1)]))
						{
							if (__LIB_40__::func_625(Local_151[iVar5 /*9*/].f_5, bVar1) != 0)
							{
								Local_152.f_40[func_397(iVar0, iVar4, 1)] = OBJECT::CREATE_OBJECT_NO_OFFSET(__LIB_40__::func_625(Local_151[iVar5 /*9*/].f_5, bVar1), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_5, 1, iVar4, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_40[func_397(iVar0, iVar4, 1)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_5, 1, iVar4, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_152.f_40[func_397(iVar0, iVar4, 1)], Var3 + func_394(Local_151[iVar5 /*9*/].f_4, 1, iVar4, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_40__::func_624(Local_151[iVar5 /*9*/].f_5)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_40__::func_624(Local_151[iVar5 /*9*/].f_5), Local_152.f_40[func_397(iVar0, iVar4, 1)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 1)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 1)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 1)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 1)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 1)], SYSTEM::FLOOR(func_218(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 1)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 1)]));
						}
					}
					if (Local_151[iVar5 /*9*/].f_4 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 2)]))
						{
							if (__LIB_40__::func_625(Local_151[iVar5 /*9*/].f_4, bVar1) != 0)
							{
								Local_152.f_40[func_397(iVar0, iVar4, 2)] = OBJECT::CREATE_OBJECT_NO_OFFSET(__LIB_40__::func_625(Local_151[iVar5 /*9*/].f_4, bVar1), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_4, 2, iVar4, bVar1, 1)), false, false, true);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_40[func_397(iVar0, iVar4, 2)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_4, 2, iVar4, bVar1, 1)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_152.f_40[func_397(iVar0, iVar4, 2)], Var3 + func_394(Local_151[iVar5 /*9*/].f_4, 2, iVar4, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_40__::func_624(Local_151[iVar5 /*9*/].f_4)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_40__::func_624(Local_151[iVar5 /*9*/].f_4), Local_152.f_40[func_397(iVar0, iVar4, 2)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 2)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 2)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 2)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 2)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 2)], SYSTEM::FLOOR(func_218(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 2)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 2)]));
						}
					}
				}
				iVar4++;
			}
			if (!Local_109.f_5[iVar0])
			{
				Local_152.f_8[iVar0] = 1;
			}
			else
			{
				Local_152.f_8[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iLocal_167++;
	if (iLocal_167 >= Local_152.f_26)
	{
		iLocal_167 = 0;
	}
}

Vector3 func_394(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1DB2C
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 66.96f;
					case 1:
						return 0f, 0f, 66.96f;
					case 2:
						return 0f, 0f, 64.08f;
					default:
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 21.24f;
					case 1:
						return 0f, 0f, 15.48f;
					case 2:
						return 0f, 0f, 20.16f;
					default:
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -21.6f;
					case 1:
						return 0f, 0f, -25.56f;
					case 2:
						return 0f, 0f, -21.96f;
					default:
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -71.64f;
					case 1:
						return 0f, 0f, -70.2f;
					case 2:
						return 0f, 0f, -68.4f;
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 68.76f;
							case 1:
								return 0f, 0f, 68.76f;
							case 2:
								return 0f, 0f, 69.48f;
							default:
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 22.68f;
							case 1:
								return 0f, 0f, 21.96f;
							case 2:
								return 0f, 0f, 22.68f;
							default:
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.96f;
							case 1:
								return 0f, 0f, -23.04f;
							case 2:
								return 0f, 0f, -21.6f;
							default:
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -68.04f;
							case 1:
								return 0f, 0f, -69.84f;
							case 2:
								return 0f, 0f, -69.84f;
							default:
						}
						break;
				}
				break;
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 66.96f;
							case 1:
								return 0f, 0f, 66.96f;
							case 2:
								return 0f, 0f, 64.08f;
							default:
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 21.24f;
							case 1:
								return 0f, 0f, 15.48f;
							case 2:
								return 0f, 0f, 20.16f;
							default:
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.6f;
							case 1:
								return 0f, 0f, -25.56f;
							case 2:
								return 0f, 0f, -21.96f;
							default:
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -71.64f;
							case 1:
								return 0f, 0f, -70.2f;
							case 2:
								return 0f, 0f, -68.4f;
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_395(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1DE9E
{
	float fVar0;
	struct<3> Var1;
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			case 20:
				fVar0 = 0.896f;
				break;
			case 30:
				fVar0 = 0.901f;
				break;
			case 40:
				fVar0 = 0.907f;
				break;
			case 50:
				fVar0 = 0.95f;
				break;
			case 60:
				fVar0 = 0.917f;
				break;
			case 70:
				fVar0 = 0.922f;
				break;
			case 80:
				fVar0 = 0.927f;
				break;
			case 90:
				fVar0 = 0.932f;
				break;
			case 100:
				fVar0 = 0.95f;
				break;
			case 150:
				fVar0 = 0.904f;
				break;
			case 200:
				fVar0 = 0.899f;
				break;
			case 250:
				fVar0 = 0.914f;
				break;
			case 300:
				fVar0 = 0.904f;
				break;
			case 350:
				fVar0 = 0.924f;
				break;
			case 400:
				fVar0 = 0.91f;
				break;
			case 450:
				fVar0 = 0.935f;
				break;
			case 500:
				fVar0 = 0.95f;
				break;
			case 1000:
				fVar0 = 0.95f;
				break;
			case 1500:
				fVar0 = 0.904f;
				break;
			case 2000:
				fVar0 = 0.899f;
				break;
			case 2500:
				fVar0 = 0.915f;
				break;
			case 3000:
				fVar0 = 0.904f;
				break;
			case 3500:
				fVar0 = 0.925f;
				break;
			case 4000:
				fVar0 = 0.91f;
				break;
			case 4500:
				fVar0 = 0.935f;
				break;
			case 5000:
				fVar0 = 0.95f;
				break;
			case 6000:
				fVar0 = 0.919f;
				break;
			case 7000:
				fVar0 = 0.924f;
				break;
			case 8000:
				fVar0 = 0.93f;
				break;
			case 9000:
				fVar0 = 0.935f;
				break;
			case 10000:
				fVar0 = 0.95f;
				break;
			case 15000:
				fVar0 = 0.902f;
				break;
			case 20000:
				fVar0 = 0.897f;
				break;
			case 25000:
				fVar0 = 0.912f;
				break;
			case 30000:
				fVar0 = 0.902f;
				break;
			case 35000:
				fVar0 = 0.922f;
				break;
			case 40000:
				fVar0 = 0.907f;
				break;
			case 45000:
				fVar0 = 0.932f;
				break;
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.59535f, 0.200875f, 0f };
						break;
					case 1:
						Var1 = { 0.51655f, 0.2268f, 0f };
						break;
					case 2:
						Var1 = { 0.689125f, 0.171575f, 0f };
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.247825f, -0.123625f, 0f };
						break;
					case 1:
						Var1 = { 0.2163f, -0.04745f, 0f };
						break;
					case 2:
						Var1 = { 0.2869f, -0.211925f, 0f };
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.2804f, -0.109775f, 0f };
						break;
					case 1:
						Var1 = { -0.2552f, -0.031225f, 0f };
						break;
					case 2:
						Var1 = { -0.30935f, -0.205675f, 0f };
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.606975f, 0.249675f, 0f };
						break;
					case 1:
						Var1 = { -0.529875f, 0.281425f, 0f };
						break;
					case 2:
						Var1 = { -0.69795f, 0.211525f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			case 20:
				fVar0 = 0.896f;
				break;
			case 30:
				fVar0 = 0.901f;
				break;
			case 40:
				fVar0 = 0.907f;
				break;
			case 50:
				fVar0 = 0.95f;
				break;
			case 60:
				fVar0 = 0.917f;
				break;
			case 70:
				fVar0 = 0.922f;
				break;
			case 80:
				fVar0 = 0.927f;
				break;
			case 90:
				fVar0 = 0.932f;
				break;
			case 100:
				fVar0 = 0.95f;
				break;
			case 150:
				fVar0 = 0.904f;
				break;
			case 200:
				fVar0 = 0.899f;
				break;
			case 250:
				fVar0 = 0.914f;
				break;
			case 300:
				fVar0 = 0.904f;
				break;
			case 350:
				fVar0 = 0.924f;
				break;
			case 400:
				fVar0 = 0.91f;
				break;
			case 450:
				fVar0 = 0.935f;
				break;
			case 500:
				fVar0 = 0.95f;
				break;
			case 1000:
				fVar0 = 0.95f;
				break;
			case 1500:
				fVar0 = 0.904f;
				break;
			case 2000:
				fVar0 = 0.899f;
				break;
			case 2500:
				fVar0 = 0.915f;
				break;
			case 3000:
				fVar0 = 0.904f;
				break;
			case 3500:
				fVar0 = 0.925f;
				break;
			case 4000:
				fVar0 = 0.91f;
				break;
			case 4500:
				fVar0 = 0.935f;
				break;
			case 5000:
				fVar0 = 0.953f;
				break;
			case 6000:
				fVar0 = 0.919f;
				break;
			case 7000:
				fVar0 = 0.924f;
				break;
			case 8000:
				fVar0 = 0.93f;
				break;
			case 9000:
				fVar0 = 0.935f;
				break;
			case 10000:
				fVar0 = 0.95f;
				break;
			case 15000:
				fVar0 = 0.902f;
				break;
			case 20000:
				fVar0 = 0.897f;
				break;
			case 25000:
				fVar0 = 0.912f;
				break;
			case 30000:
				fVar0 = 0.902f;
				break;
			case 35000:
				fVar0 = 0.922f;
				break;
			case 40000:
				fVar0 = 0.907f;
				break;
			case 45000:
				fVar0 = 0.932f;
				break;
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.597825f, 0.20105f, 0f };
								break;
							case 1:
								Var1 = { 0.5151f, 0.22775f, 0f };
								break;
							case 2:
								Var1 = { 0.686125f, 0.171625f, 0f };
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.248425f, -0.126325f, 0f };
								break;
							case 1:
								Var1 = { 0.2144f, -0.04415f, 0f };
								break;
							case 2:
								Var1 = { 0.285325f, -0.212f, 0f };
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.281f, -0.111875f, 0f };
								break;
							case 1:
								Var1 = { -0.254775f, -0.029175f, 0f };
								break;
							case 2:
								Var1 = { -0.308175f, -0.199325f, 0f };
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.61015f, 0.24815f, 0f };
								break;
							case 1:
								Var1 = { -0.527375f, 0.283575f, 0f };
								break;
							case 2:
								Var1 = { -0.694475f, 0.214225f, 0f };
								break;
						}
						break;
				}
				break;
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.59535f, 0.200875f, 0f };
								break;
							case 1:
								Var1 = { 0.51655f, 0.2268f, 0f };
								break;
							case 2:
								Var1 = { 0.689125f, 0.171575f, 0f };
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.247825f, -0.123625f, 0f };
								break;
							case 1:
								Var1 = { 0.2163f, -0.04745f, 0f };
								break;
							case 2:
								Var1 = { 0.2869f, -0.211925f, 0f };
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.2804f, -0.109775f, 0f };
								break;
							case 1:
								Var1 = { -0.2552f, -0.031225f, 0f };
								break;
							case 2:
								Var1 = { -0.30935f, -0.205675f, 0f };
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.606975f, 0.249675f, 0f };
								break;
							case 1:
								Var1 = { -0.529875f, 0.281425f, 0f };
								break;
							case 2:
								Var1 = { -0.69795f, 0.211525f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	if (!bParam4)
	{
		Var1.f_2 = fVar0;
	}
	else
	{
		Var1.f_2 = fVar0;
		switch (iParam0)
		{
			case 10:
			case 50:
			case 100:
			case 500:
			case 1000:
			case 5000:
			case 10000:
				Var1.f_2 = (Var1.f_2 + 0.004f);
				break;
			}
	}
	return Var1;
}

int func_397(int iParam0, int iParam1, int iParam2)//Position - 0x1ED16
{
	return ((iParam0 * 3 * 4 + iParam1 * 3) + iParam2);
}

void func_405()//Position - 0x1EF2C
{
	if (Local_152.f_26 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
		{
			if (__LIB_11__::func_612() != __LIB_0__::func_162())
			{
				iLocal_174 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(0), 1f, func_234(Global_2689235[__LIB_11__::func_612() /*453*/].f_446), false, false, false);
			}
		}
		else if (__LIB_11__::func_612() != __LIB_0__::func_162() && CAM::IS_SCREEN_FADED_OUT())
		{
			if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_174) != __LIB_25__::func_688(__LIB_11__::func_612()))
			{
				OBJECT::SET_OBJECT_TINT_INDEX(iLocal_174, __LIB_25__::func_688(__LIB_11__::func_612()));
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
		{
			iLocal_175 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1133.74f, 266.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
		}
		else if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_175) != 3)
		{
			OBJECT::SET_OBJECT_TINT_INDEX(iLocal_175, 3);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
		{
			iLocal_176 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1148.74f, 251.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
		}
		else if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_176) != 3)
		{
			OBJECT::SET_OBJECT_TINT_INDEX(iLocal_176, 3);
		}
	}
}

int func_406()//Position - 0x1F031
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_152.f_5);
		STREAMING::REQUEST_MODEL(iVar2);
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_407()//Position - 0x1F074
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_152.f_5);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		iVar0++;
	}
}

void func_422()//Position - 0x1F78F
{
	if (Local_152.f_798 > 2)
	{
		if (Global_262145.f_26815 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
		{
			STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_161);
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_379(0);
	func_407();
	__LIB_42__::func_880();
	func_425();
	func_424();
	if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_34))
	{
		OBJECT::DELETE_OBJECT(&(Local_152.f_34));
	}
	if (Local_152.f_798 > 0)
	{
		STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_613());
		STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_615());
		STREAMING::REMOVE_ANIM_DICT(func_92());
		STREAMING::REMOVE_ANIM_DICT(__LIB_40__::func_622());
	}
	Global_1966108 = 0;
	__LIB_0__::func_202();
}

void func_424()//Position - 0x1F841
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_35[iVar0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_152.f_35[iVar0]))
			{
				ENTITY::DETACH_ENTITY(Local_152.f_35[iVar0], true, true);
			}
			OBJECT::DELETE_OBJECT(&(Local_152.f_35[iVar0]));
		}
		iVar0++;
	}
}

void func_425()//Position - 0x1F897
{
	int iVar0;
	int iVar1;
	iVar0 = 48;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(Local_152.f_40[iVar1]));
		}
		iVar1++;
	}
}

void func_434()//Position - 0x1F9FA
{
	int iVar0;
	if (Global_1966101)
	{
		Global_1966101 = 0;
	}
	if (__LIB_2__::func_885(PLAYER::PLAYER_ID()) && __LIB_11__::func_612() != __LIB_0__::func_162())
	{
		if (BitTest(Global_2689235[__LIB_11__::func_612() /*453*/].f_318.f_4, 4))
		{
			Local_152.f_5 = 1;
		}
		Global_1966110 = Global_2689235[__LIB_11__::func_612() /*453*/].f_446;
	}
	while (!(Global_2788829 != -1 || __LIB_2__::func_885(PLAYER::PLAYER_ID())))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_422();
		}
		if (__LIB_0__::func_959())
		{
			func_422();
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		iVar0 = __LIB_7__::func_254();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, iVar0);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_109, 633, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_151, 289, 0);
	if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		while (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(15))
		{
			SYSTEM::WAIT(0);
		}
		Local_152.f_26 = 1;
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(1);
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(15);
	}
	else
	{
		while (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(45))
		{
			SYSTEM::WAIT(0);
		}
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(3);
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(45);
	}
	if (!__LIB_0__::func_934())
	{
		func_422();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else
	{
		func_422();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
		{
			Local_109.f_15[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
		}
		else
		{
			Local_109.f_15[0] = Global_2788847[0];
			Local_109.f_15[1] = Global_2788847[1];
			Local_109.f_15[2] = Global_2788847[2];
			Local_109.f_15[3] = Global_2788847[3];
		}
	}
	Global_1966108 = 1;
}

