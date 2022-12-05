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
	struct<55> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_64 = 0;
	struct<5> Local_65[32];
	int iLocal_66 = 0;
	int iLocal_67[3] = { 0, 0, 0 };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<3> Local_73 = { 0, 0, 0 } ;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int* iLocal_78 = NULL;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 16;
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
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
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
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<21> Local_257 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_69 = -1;
	iLocal_72 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_560(ScriptParam_257);
	}
	while (true)
	{
		__LIB_0__.func_671();
		if (__LIB_6__.func_949())
		{
			func_549();
		}
		iLocal_74 = NETWORK::GET_NETWORK_TIME();
		func_540();
		func_537();
		func_532();
		func_531();
		switch (func_530(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_529() == 1)
				{
					Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 1;
				}
				else if (func_529() == 4)
				{
					Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			case 1:
				if (func_529() == 1)
				{
					func_523();
				}
				else if (func_529() == 0)
				{
					func_517();
					Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
				}
				else if (func_529() == 4)
				{
					Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			case 3:
				func_493();
				__LIB_1__.func_54(&(Local_63.f_54));
				if (__LIB_1__.func_53(&(Local_63.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < __LIB_14__.func_982(iLocal_69))
					{
						func_493();
						iVar0++;
					}
					Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
				}
				break;
			case 2:
				Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
			case 4:
				func_263();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_261();
			func_260();
			func_259();
			switch (func_529())
			{
				case 0:
					func_258();
					if (func_254())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_71), false))
						{
							func_252(PLAYER::GET_PLAYER_PED(iLocal_71));
						}
						else
						{
							Local_63.f_36 = { Local_73 };
						}
						MISC::CLEAR_BIT(&(Local_63.f_2), 6);
						Local_63.f_0 = 1;
					}
					break;
				case 1:
					if (func_65())
					{
						func_64();
						__LIB_2__.func_120();
					}
					__LIB_2__.func_118();
					break;
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()//Position - 0x235
{
	int iVar0;
	if (func_529() < 4)
	{
		if (func_22())
		{
			iLocal_75 = 0;
			iVar0 = 0;
			while (iVar0 <= (__LIB_14__.func_982(iLocal_69) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_63.f_0 = 4;
		}
	}
}

void func_2()//Position - 0x271
{
	var uVar0;
	struct<14> Var1;
	if (BitTest(Local_63.f_10[iLocal_75 /*7*/].f_2, 1) || BitTest(Local_63.f_10[iLocal_75 /*7*/].f_2, 6))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iLocal_75 /*7*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_75 /*7*/])))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_75 /*7*/]), false))
				{
					if (!BitTest(Local_63.f_10[iLocal_75 /*7*/].f_2, 6))
					{
						if (iLocal_69 == 0)
						{
							Local_63.f_48++;
							if (!BitTest(Local_63.f_2, 12))
							{
								if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_63.f_10[iLocal_75 /*7*/], &uVar0) == iLocal_71)
								{
									MISC::SET_BIT(&(Local_63.f_2), 12);
								}
							}
							if ((Local_63.f_42 == iLocal_75 && !BitTest(Local_63.f_2, 5)) || Local_63.f_48 == __LIB_14__.func_982(iLocal_69))
							{
								Var1.f_2 = 199776836;
								Var1.f_10 = iLocal_71;
								Var1.f_11 = iLocal_70;
								if (__LIB_14__.func_982(iLocal_69) > 1)
								{
									Var1.f_12 = PLAYER::INT_TO_PLAYERINDEX(1);
								}
								else
								{
									Var1.f_12 = PLAYER::INT_TO_PLAYERINDEX(0);
								}
								Var1.f_3 = Local_63.f_43;
								__LIB_1__.func_226(Var1, __LIB_2__.func_31(1));
								if (Local_63.f_42 == iLocal_75)
								{
									MISC::SET_BIT(&(Local_63.f_2), 5);
								}
							}
							else if (!BitTest(Local_63.f_2, 5))
							{
								Var1.f_2 = 1036580915;
								Var1.f_11 = iLocal_70;
								__LIB_1__.func_226(Var1, __LIB_2__.func_31(1));
							}
						}
						MISC::SET_BIT(&(Local_63.f_10[iLocal_75 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!BitTest(Local_63.f_10[iLocal_75 /*7*/].f_2, 5))
					{
						MISC::SET_BIT(&iLocal_66, 2);
					}
					MISC::SET_BIT(&iLocal_66, 1);
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&iLocal_66, 1);
		MISC::SET_BIT(&iLocal_66, 2);
	}
	func_3(iLocal_75);
	iLocal_75++;
	if (iLocal_75 >= __LIB_14__.func_982(iLocal_69))
	{
		iLocal_75 = 0;
		if (BitTest(Local_63.f_1, 0))
		{
			if (!BitTest(iLocal_66, 1))
			{
				if (!BitTest(Local_63.f_1, 1))
				{
					MISC::SET_BIT(&(Local_63.f_1), 1);
				}
			}
			if (!BitTest(iLocal_66, 2))
			{
				if (!BitTest(Local_63.f_1, 9))
				{
					MISC::SET_BIT(&(Local_63.f_1), 9);
				}
			}
		}
		MISC::CLEAR_BIT(&iLocal_66, 1);
		MISC::CLEAR_BIT(&iLocal_66, 2);
	}
}

void func_3(int iParam0)//Position - 0x48F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iParam0 /*7*/]))
		{
			iVar0 = NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_63.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (__LIB_2__.func_111(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					case 1:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) == 2 || (Global_2689235[iLocal_71 /*453*/].f_244 != -1 && __LIB_0__.func_299(Global_2689235[iLocal_71 /*453*/].f_244) == 4)) || BitTest(Global_1853348[iLocal_71 /*834*/].f_833, 14)) || __LIB_14__.func_308(iLocal_71, 0)) || func_9(iLocal_71))
								{
									Local_63.f_10[iParam0 /*7*/].f_3 = iLocal_74;
									MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2 && Global_2689235[iLocal_71 /*453*/].f_244 == -1) && !BitTest(Global_1853348[iLocal_71 /*834*/].f_833, 14)) && !__LIB_14__.func_308(iLocal_71, 0)) && !func_9(iLocal_71))
							{
								MISC::CLEAR_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_10[iParam0 /*7*/].f_3) > 10000 || TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2)
							{
								if (!BitTest(Local_63.f_2, 10))
								{
									MISC::SET_BIT(&(Local_63.f_2), 10);
									Local_63.f_39 = { __LIB_0__.func_85(iLocal_71) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < __LIB_14__.func_982(iLocal_69))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) == 3f && !PED::GET_PED_CONFIG_FLAG(iVar0, 118, true))
									{
										MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (BitTest(Local_63.f_2, 1))
						{
							MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (__LIB_0__.func_154(iLocal_71, 1, 1))
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), true), 25f) || !func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), true), 625f))
								{
									MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), true)) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_71)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					case 2:
						if (BitTest(Local_63.f_2, 1))
						{
							MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (__LIB_0__.func_154(iLocal_71, 1, 1))
						{
							if (!func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), true)) && !(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_71)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					case 3:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (PED::GET_PED_CONFIG_FLAG(iVar0, 118, true))
								{
									MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(struct<3> Param0, struct<3> Param1)//Position - 0x87E
{
	struct<3> Var0;
	struct<3> Var1;
	if (MISC::ABSF((Param1.f_2 - Param0.f_2)) < 2f)
	{
		Var0.f_0 = Param0.f_0;
		Var0.f_1 = Param0.f_1;
		Var1.f_0 = Param1.f_0;
		Var1.f_1 = Param1.f_1;
		if (func_5(Var0, Var1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x8C5
{
	if (SYSTEM::VDIST2(Param0, Param1) < fParam2)
	{
		return 1;
	}
	return 0;
}

void func_7(int iParam0, int iParam1)//Position - 0x944
{
	Local_63.f_10[iParam0 /*7*/].f_5 = iParam1;
}

int func_9(int iParam0)//Position - 0x96B
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (__LIB_1__.func_113(iParam0, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			iVar1 = func_11(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
					{
						return __LIB_2__.func_34(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_11(int iParam0)//Position - 0x9FF
{
	if (__LIB_1__.func_113(iParam0, 1))
	{
		return Global_2815059.f_5195.f_226[__LIB_0__.func_603(iParam0)];
	}
	return 0;
}

int func_22()//Position - 0xEF7
{
	if (BitTest(Local_63.f_1, 0))
	{
		if (iLocal_69 == 1)
		{
			if (BitTest(Local_63.f_1, 4))
			{
				MISC::SET_BIT(&(Local_63.f_3), 11);
				return 1;
			}
		}
		else if (BitTest(Local_63.f_1, 1))
		{
			MISC::SET_BIT(&(Local_63.f_3), 0);
			return 1;
		}
	}
	else if (BitTest(Local_63.f_1, 2))
	{
		MISC::SET_BIT(&(Local_63.f_3), 1);
		MISC::SET_BIT(&Global_1922952, iLocal_69);
		return 1;
	}
	if (BitTest(Local_63.f_3, 12))
	{
		return 1;
	}
	if (iLocal_69 == 0)
	{
		if (BitTest(Local_63.f_2, 2))
		{
			MISC::SET_BIT(&(Local_63.f_3), 2);
			return 1;
		}
		if (BitTest(Local_63.f_2, 8))
		{
			MISC::SET_BIT(&(Local_63.f_3), 8);
			return 1;
		}
		if (BitTest(Local_63.f_2, 5))
		{
			MISC::SET_BIT(&(Local_63.f_3), 3);
			return 1;
		}
		if (BitTest(Local_63.f_2, 9))
		{
			MISC::SET_BIT(&(Local_63.f_3), 9);
			return 1;
		}
		if (BitTest(Local_63.f_1, 15))
		{
			MISC::SET_BIT(&(Local_63.f_3), 10);
			return 1;
		}
	}
	if (!__LIB_0__.func_154(iLocal_71, 0, 1))
	{
		if (iLocal_69 != 0 || !BitTest(Local_63.f_2, 1))
		{
			MISC::SET_BIT(&(Local_63.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (__LIB_2__.func_303(iLocal_71, 129))
		{
			MISC::SET_BIT(&(Local_63.f_2), 13);
			MISC::SET_BIT(&(Local_63.f_3), 8);
			return 1;
		}
		if (__LIB_2__.func_303(iLocal_71, 131) || BitTest(Global_1892703[iLocal_71 /*599*/].f_1, 11))
		{
			MISC::SET_BIT(&(Local_63.f_2), 13);
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_2__.func_303(iLocal_71, 136) || (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 24) && __LIB_1__.func_338(iLocal_71)))
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_2__.func_303(iLocal_71, 146))
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_7__.func_114(PLAYER::PLAYER_ID()) && ((__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 148 || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 142) || __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 164))
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 153)
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_0__.func_286(PLAYER::PLAYER_ID()) && __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 170)
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 167)
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 168)
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_0__.func_286(PLAYER::PLAYER_ID()) && __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 238)
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_0__.func_286(PLAYER::PLAYER_ID()) && __LIB_0__.func_396(PLAYER::PLAYER_ID()) == 249)
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		switch (__LIB_7__.func_113(PLAYER::PLAYER_ID()))
		{
			case 6:
			case 7:
				if (__LIB_1__.func_909())
				{
					MISC::SET_BIT(&(Local_63.f_2), 8);
					return 1;
				}
				break;
		}
		if (__LIB_0__.func_665(iLocal_71))
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_1__.func_385(iLocal_71))
		{
			MISC::SET_BIT(&(Local_63.f_2), 8);
			return 1;
		}
		if (__LIB_0__.func_396(iLocal_71) == 276)
		{
			if (__LIB_1__.func_337(iLocal_71) == 3)
			{
				MISC::SET_BIT(&(Local_63.f_2), 8);
				return 1;
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_71), false))
		{
			if (iLocal_69 == 1)
			{
				if (BitTest(Local_63.f_1, 0))
				{
					MISC::SET_BIT(&(Local_63.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_69 == 1)
			{
				if (__LIB_2__.func_303(iLocal_71, 146))
				{
					MISC::SET_BIT(&(Local_63.f_3), 7);
					return 1;
				}
				if (!BitTest(Local_63.f_1, 16))
				{
					if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_9) > func_30())
					{
						MISC::SET_BIT(&(Local_63.f_3), 7);
						return 1;
					}
				}
				if (__LIB_2__.func_116())
				{
					MISC::SET_BIT(&(Local_63.f_3), 7);
					return 1;
				}
				if (__LIB_2__.func_113(iLocal_71, __LIB_0__.func_603(iLocal_70), 1))
				{
					MISC::SET_BIT(&(Local_63.f_3), 7);
					return 1;
				}
			}
			if (iLocal_72 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_71)))
			{
				MISC::SET_BIT(&(Local_63.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1347
{
	if (iParam1 != __LIB_0__.func_160() && iParam0 != __LIB_0__.func_160())
	{
		if (!bParam2)
		{
			if (__LIB_2__.func_35(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__.func_160())
		{
			if (iParam1 == Global_1892703[iParam0 /*599*/].f_10)
			{
				return __LIB_2__.func_114(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_30()//Position - 0x14E3
{
	if (Local_63.f_52)
	{
		return 300000;
	}
	return 120000;
}

void func_46()//Position - 0x1715
{
	int iVar0;
	if (__LIB_0__.func_154(PLAYER::INT_TO_PLAYERINDEX(iLocal_76), 0, 1))
	{
		if (iLocal_69 == 1)
		{
			if (PLAYER::INT_TO_PLAYERINDEX(iLocal_76) == iLocal_71)
			{
				if (!BitTest(Local_63.f_1, 16))
				{
					if (BitTest(Local_65[iLocal_76 /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_63.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!BitTest(Local_63.f_1, 11))
			{
				if (__LIB_7__.func_115(PLAYER::INT_TO_PLAYERINDEX(iLocal_76)))
				{
					if (!BitTest(Local_63.f_4, iLocal_76))
					{
						MISC::SET_BIT(&(Local_63.f_1), 11);
						MISC::SET_BIT(&(Local_63.f_4), iLocal_76);
					}
				}
				else if (BitTest(Local_63.f_4, iLocal_76))
				{
					MISC::SET_BIT(&(Local_63.f_1), 11);
					MISC::CLEAR_BIT(&(Local_63.f_4), iLocal_76);
				}
			}
			else if (BitTest(Local_65[iLocal_76 /*5*/].f_1, 2))
			{
				MISC::CLEAR_BIT(&(Local_63.f_1), 11);
			}
			if (iLocal_69 == 0)
			{
				if (BitTest(Local_65[iLocal_76 /*5*/].f_1, 0))
				{
					if (Local_65[iLocal_76 /*5*/].f_2 != -1)
					{
						if (!BitTest(Local_63.f_2, 1))
						{
							MISC::SET_BIT(&(Local_63.f_2), 1);
							Local_63.f_42 = Local_65[iLocal_76 /*5*/].f_2;
							Local_63.f_43 = Local_65[iLocal_76 /*5*/].f_3;
							if (!__LIB_0__.func_112())
							{
								func_50();
							}
						}
					}
					else if (!BitTest(Local_63.f_2, 9))
					{
						if (!__LIB_0__.func_112())
						{
							func_49();
						}
						iVar0 = 0;
						while (iVar0 < __LIB_14__.func_982(iLocal_69))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						MISC::SET_BIT(&(Local_63.f_2), 9);
						MISC::SET_BIT(&(Local_63.f_2), 1);
					}
				}
				if (__LIB_0__.func_112())
				{
					if (!BitTest(iLocal_66, 17))
					{
						if (BitTest(Local_65[iLocal_76 /*5*/].f_1, 5))
						{
							func_50();
							MISC::SET_BIT(&iLocal_66, 17);
						}
						else if (BitTest(Local_65[iLocal_76 /*5*/].f_1, 6))
						{
							func_49();
							MISC::SET_BIT(&iLocal_66, 17);
						}
					}
				}
				if (!BitTest(Local_65[iLocal_76 /*5*/].f_1, 1))
				{
					if (!BitTest(iLocal_66, 3))
					{
						MISC::SET_BIT(&iLocal_66, 3);
					}
				}
				else if (PLAYER::INT_TO_PLAYERINDEX(iLocal_76) == iLocal_71)
				{
					if (iLocal_69 == 0)
					{
						if (!BitTest(Local_63.f_2, 1))
						{
							if (!BitTest(Local_63.f_2, 6))
							{
								MISC::SET_BIT(&(Local_63.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_76++;
	if (iLocal_76 >= 32)
	{
		iLocal_76 = 0;
		if (iLocal_69 == 0)
		{
			if (!BitTest(iLocal_66, 3))
			{
				func_48();
			}
			else
			{
				func_47();
			}
			MISC::CLEAR_BIT(&iLocal_66, 3);
		}
	}
}

void func_47()//Position - 0x195B
{
	if (BitTest(Local_63.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Local_63.f_2), 3);
	}
}

void func_48()//Position - 0x1975
{
	if (!BitTest(Local_63.f_2, 3))
	{
		Local_63.f_6 = iLocal_74;
		MISC::SET_BIT(&(Local_63.f_2), 3);
	}
}

void func_49()//Position - 0x1997
{
	struct<14> Var0;
	Var0.f_2 = -250941162;
	Var0.f_10 = iLocal_71;
	Var0.f_11 = iLocal_70;
	__LIB_1__.func_226(Var0, __LIB_2__.func_31(1));
}

void func_50()//Position - 0x19C4
{
	struct<14> Var0;
	Var0.f_2 = -1296682161;
	Var0.f_10 = iLocal_71;
	Var0.f_11 = iLocal_70;
	if (__LIB_14__.func_982(iLocal_69) > 1)
	{
		Var0.f_12 = PLAYER::INT_TO_PLAYERINDEX(1);
	}
	else
	{
		Var0.f_12 = PLAYER::INT_TO_PLAYERINDEX(0);
	}
	Var0.f_3 = Local_63.f_43;
	__LIB_1__.func_226(Var0, __LIB_2__.func_31(1));
}

void func_56()//Position - 0x1A89
{
	int iVar0;
	if (iLocal_69 == 0)
	{
		if (BitTest(Local_63.f_2, 3))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_6) > 10000)
			{
				if (BitTest(Local_63.f_2, 1))
				{
					MISC::SET_BIT(&(Local_63.f_2), 2);
				}
			}
		}
		if (BitTest(Local_63.f_1, 8))
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				if (__LIB_18__.func_330())
				{
					MISC::SET_BIT(&(Local_63.f_2), 6);
					func_59();
				}
			}
		}
		if (!BitTest(Local_63.f_1, 0))
		{
			if (__LIB_0__.func_154(iLocal_71, 1, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iLocal_71);
				if (func_58(iVar0))
				{
					func_252(iVar0);
				}
			}
		}
		if (!BitTest(Local_63.f_2, 1))
		{
			if (!__LIB_0__.func_154(iLocal_71, 1, 1) || __LIB_0__.func_743(iLocal_71))
			{
				MISC::SET_BIT(&(Local_63.f_1), 15);
			}
		}
	}
	if (BitTest(Local_63.f_1, 0))
	{
		if (BitTest(Local_63.f_1, 5))
		{
			if (!BitTest(Local_63.f_1, 4))
			{
				if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_5) > 600000)
				{
					MISC::SET_BIT(&(Local_63.f_1), 4);
				}
			}
		}
		if (!BitTest(Local_63.f_3, 12))
		{
			if (func_57())
			{
				MISC::SET_BIT(&(Local_63.f_3), 12);
			}
		}
	}
}

int func_57()//Position - 0x1B9B
{
	switch (Local_63.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_773 == 0)
			{
				return 1;
			}
			break;
		case 1:
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_773 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x1BF0
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (BitTest(Local_63.f_1, 17))
	{
		if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_63.f_36, ENTITY::GET_ENTITY_COORDS(iParam0, true), 625f))
	{
		return 1;
	}
	return 0;
}

void func_59()//Position - 0x1C38
{
	func_517();
	Local_63.f_0 = 0;
}

int func_61(int iParam0, int iParam1)//Position - 0x1CF0
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_64()//Position - 0x1D91
{
	if (BitTest(Local_63.f_1, 5))
	{
		MISC::CLEAR_BIT(&(Local_63.f_1), 5);
	}
}

int func_65()//Position - 0x1DAB
{
	bool bVar0;
	if (BitTest(Local_63.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_254())
		{
			if (iLocal_69 == 1)
			{
				bVar0 = true;
			}
			else if (func_249())
			{
				if (func_246())
				{
					if (func_245())
					{
						bVar0 = true;
					}
					else if (__LIB_0__.func_584(func_244(iLocal_69)))
					{
						if (func_71())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			__LIB_2__.func_120();
			if (func_66())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()//Position - 0x1E22
{
	int iVar0;
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (BitTest(Local_63.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_69)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < __LIB_14__.func_982(iLocal_69))
					{
						if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iVar0 /*7*/]) && !BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 1)) && !BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							__LIB_2__.func_121(iVar0, func_70(iLocal_69), Local_63.f_32, Local_63.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_69 != 1)
			{
				iVar0 = 0;
				while (iVar0 < __LIB_14__.func_982(iLocal_69))
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iVar0 /*7*/]))
					{
						if (!BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			MISC::SET_BIT(&iLocal_66, 1);
			MISC::SET_BIT(&iLocal_66, 2);
			MISC::SET_BIT(&iLocal_66, 3);
			MISC::SET_BIT(&iLocal_66, 4);
			MISC::SET_BIT(&(Local_63.f_1), 0);
			MISC::SET_BIT(&Global_1922953, iLocal_69);
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)//Position - 0x1FB6
{
	char cVar0[16];
	if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), false))
		{
			if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), Global_1837196);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), true);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), false);
			}
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), false, false, false, false, false, false, true, false);
			PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 41, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 20, true);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 132, true);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 118, false);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 311, true);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 300f, 10);
			PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), true);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			PED::SET_PED_NAME_DEBUG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_63.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2, false);
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2);
					PED::SET_PED_COMBAT_RANGE(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0);
					PED::SET_PED_USING_ACTION_MODE(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), false, -1, 0);
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 32, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 4, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1024, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 128, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 32, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 8, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 64, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 256, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 16, true);
					if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 0))
					{
						MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 512, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 17, false);
					WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), joaat("WEAPON_KNIFE"), 1, true, true);
					PED::SET_PED_MONEY(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 0);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), PLAYER::GET_PLAYER_PED(iLocal_71), -1, 0, 2);
					NETWORK::SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(Local_63.f_10[iParam0 /*7*/], true);
					break;
			}
			ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), SYSTEM::ROUND((Global_262145.f_164 /* Tunable: AI_HEALTH */ * IntToFloat(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]))))), 0);
			if (!BitTest(Local_63.f_1, 8))
			{
				MISC::SET_BIT(&(Local_63.f_1), 8);
			}
			MISC::SET_BIT(&(Local_63.f_10[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_70(int iParam0)//Position - 0x2398
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_71()//Position - 0x23B5
{
	struct<6> Var0;
	if (BitTest(Local_63.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_69)
		{
			case 0:
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_71) && __LIB_0__.func_154(iLocal_71, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), true) };
					Var0.f_5 = 20f;
					if (func_72(Local_63.f_36, 40f, &(Local_63.f_32), &(Local_63.f_35), &Var0))
					{
						MISC::SET_BIT(&(Local_63.f_1), 3);
						return 1;
					}
				}
				else
				{
					NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
					PED::SPAWNPOINTS_CANCEL_SEARCH();
					if (Global_2667225.f_2472)
					{
						PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
						Global_2667225.f_2472 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_72(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4)//Position - 0x2483
{
	struct<17> Var0;
	struct<18> Var1;
	struct<3> Var2;
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1 = { Param0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (__LIB_7__.func_154(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > uParam4->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

void func_76(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x35F0
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
						if (__LIB_1__.func_66(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__.func_65(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__.func_65(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
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
	if (func_90(*uParam0, &Var0, iVar6, iParam3, 1))
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
		if (__LIB_1__.func_335(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_205(&Var0, &uVar1, &Var2);
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
		if (!__LIB_7__.func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_90(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_7__.func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
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
			else if (func_77(uParam0, 1, 1, 1, 1))
			{
				func_76(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
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

int func_77(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3A63
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
				if (__LIB_6__.func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							func_78(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_77(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_78(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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

void func_78(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x3B3E
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_85(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			case 1:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			case 2:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				__LIB_2__.func_127(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			case 1:
				__LIB_0__.func_621(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			case 2:
				__LIB_2__.func_123(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

Vector3 func_85(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x41F1
{
	int iVar0;
	struct<3> Var1;
	switch (iParam4)
	{
		case 0:
			__LIB_2__.func_127(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		case 1:
			__LIB_0__.func_621(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		case 2:
			__LIB_2__.func_123(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!__LIB_0__.func_613(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			case 1:
				if (!__LIB_6__.func_903(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param1, Param2, fParam3, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_90(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x49D7
{
	if (__LIB_1__.func_64(Param0, uParam1))
	{
		if (func_91(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_91(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x4A33
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !__LIB_2__.func_133(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_95(*uParam1, 1056964608))
			{
				if (!func_92(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_92(var uParam0, bool bParam1)//Position - 0x4AB8
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	Var1 = { *uParam0 };
	iVar2 = __LIB_0__.func_616(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2673770[iVar2])
	{
		if (__LIB_0__.func_615(Var1, &(Global_2672374[iVar2 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				__LIB_2__.func_123(&Var1, Global_2672374[iVar2 /*155*/][iVar0 /*7*/], Global_2672374[iVar2 /*155*/][iVar0 /*7*/].f_3, Global_2672374[iVar2 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2673770[8])
	{
		if (__LIB_0__.func_615(Var1, &(Global_2672374[8 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				__LIB_2__.func_123(&Var1, Global_2672374[8 /*155*/][iVar0 /*7*/], Global_2672374[8 /*155*/][iVar0 /*7*/].f_3, Global_2672374[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_95(struct<3> Param0, float fParam1)//Position - 0x4C80
{
	int iVar0;
	if (__LIB_2__.func_132(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4980736.f_36355 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_36355)
			{
				if (Global_4980736.f_36356[iVar0 /*134*/].f_7 != 0)
				{
					if (func_96(Param0, Global_4980736.f_36356[iVar0 /*134*/], Global_4980736.f_36356[iVar0 /*134*/].f_6, Global_4980736.f_36356[iVar0 /*134*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5739)
			{
				if (Global_4980736.f_5742[iVar0 /*442*/].f_15 != 0)
				{
					if (func_96(Param0, Global_4980736.f_5742[iVar0 /*442*/], Global_4980736.f_5742[iVar0 /*442*/].f_3, Global_4980736.f_5742[iVar0 /*442*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_78574 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_78574)
			{
				if (Global_4980736.f_78578[iVar0 /*450*/].f_12 != 0)
				{
					if (func_96(Param0, Global_4980736.f_78578[iVar0 /*450*/], Global_4980736.f_78578[iVar0 /*450*/].f_3, Global_4980736.f_78578[iVar0 /*450*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058069.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058069.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058069.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058069.f_233[iVar0], false))
				{
					if (func_96(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058069.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058069.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058069.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058069.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058069.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058069.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058069.f_119[iVar0], false))
				{
					if (func_96(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058069.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058069.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058069.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_96(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)//Position - 0x4F14
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (SYSTEM::VDIST(Param0, Param1) < __LIB_2__.func_131(iParam3, 1008981770))
	{
		__LIB_2__.func_128(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, false, true))
		{
			return 1;
		}
	}
	return 0;
}

bool func_118(int iParam0, bool bParam1)//Position - 0x58C9
{
	if (__LIB_0__.func_3() != 0)
	{
		return __LIB_1__.func_63(iParam0) != 0;
	}
	return __LIB_2__.func_132(iParam0, bParam1, 0);
}

int func_126(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x5B67
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
					func_196(uParam1, uParam2);
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
							if (uParam1->f_5 && __LIB_1__.func_62(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_76(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_196(uParam1, uParam2);
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
					func_196(uParam1, uParam2);
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
				func_196(uParam1, uParam2);
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
		func_193(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_134(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
					func_134(Var0, fVar1, uParam1, uParam2, 0, iVar3);
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
				__LIB_7__.func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__.func_62(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__.func_61(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__.func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__.func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__.func_61(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__.func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_92(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__.func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__.func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__.func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__.func_62(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
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
			func_76(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__.func_67(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_134(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x642B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
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
		if (func_190(PLAYER::PLAYER_ID()))
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
		if (!__LIB_8__.func_885(Param0, 1084227584, 1123024896, 0))
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
		if (!__LIB_18__.func_321(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
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
		if (func_182(Param0, fParam1, uParam2->f_15, __LIB_1__.func_84(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!func_179(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_18__.func_221(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_18__.func_221(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
			if (!__LIB_0__.func_607(Param0, 0.5f))
			{
				if (__LIB_2__.func_137(Var12))
				{
					if (!func_77(&Param0, 0, 0, 0, 1) && !func_174(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_174(&Param0, 0))
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
	else if (!__LIB_1__.func_81(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_172(PLAYER::PLAYER_ID()) && __LIB_6__.func_936(PLAYER::PLAYER_ID())))
		{
			if (!func_170(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
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
		if (!__LIB_6__.func_936(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__.func_80(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
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
	if (__LIB_7__.func_117(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__.func_62(Global_2667225.f_489))
			{
				if (__LIB_7__.func_137(Param0, 0.01f))
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
		if (__LIB_1__.func_79(Param0))
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
			if (!__LIB_2__.func_134(&Param0, 0, 0))
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
	if (!func_92(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_7__.func_136(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_1__.func_971(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_18__.func_329(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_95(Param0, 1056964608))
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
	else if (__LIB_1__.func_76(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
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
				fVar0 = func_151(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_151(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__.func_62(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_18__.func_320(Param0);
			}
			uVar7 = func_140(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			__LIB_1__.func_969(Var19);
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
							fVar0 = func_151(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_151(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__.func_62(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_18__.func_320(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_138(Var19, iVar18);
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
						func_138(Var19, iVar18);
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
						fVar5 = __LIB_8__.func_884(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_140(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__.func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__.func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_138(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_138(struct<10> Param0, int iParam1)//Position - 0x7049
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_138(Var0, iParam1 + 1);
	}
}

float func_140(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x718F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (__LIB_0__.func_154(iVar7, 1, 1) || (iParam5 == 1 && __LIB_0__.func_154(iVar7, 0, 0)))
		{
			if (!iVar7 == PLAYER::PLAYER_ID() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_141(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar7) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar7) == -1 || !func_118(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar7) || !bParam4)
					{
						if (__LIB_0__.func_605(iVar7))
						{
							Var5 = { __LIB_0__.func_85(iVar7) };
							if (!iVar7 == PLAYER::PLAYER_ID())
							{
								Var6 = { NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(iVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_141(int iParam0)//Position - 0x72F2
{
	if (__LIB_0__.func_154(iParam0, 0, 1))
	{
		if (!__LIB_6__.func_948(iParam0))
		{
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__.func_132(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!__LIB_0__.func_610(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!__LIB_2__.func_132(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!__LIB_8__.func_883(iParam0))
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
	}
	return 0;
}

float func_151(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x7821
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = __LIB_1__.func_73(SYSTEM::VDIST(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 10000000f;
	fVar4 = func_140(Param0, 1, 0, 0, 1, 0);
	fVar0 = __LIB_1__.func_73(fVar4, 0f, __LIB_25__.func_0(), __LIB_25__.func_666(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = __LIB_7__.func_96(Param0);
	fVar0 = __LIB_1__.func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_118(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = __LIB_6__.func_397(Param0, PLAYER::PLAYER_ID(), 0);
	fVar0 = __LIB_1__.func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (__LIB_1__.func_74(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = __LIB_1__.func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + __LIB_1__.func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = __LIB_1__.func_73(SYSTEM::VDIST(Global_2667225.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_170(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x84B4
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				__LIB_2__.func_127(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x855D
{
	if (__LIB_2__.func_132(iParam0, 1, 0))
	{
		if (Global_1853348[iParam0 /*834*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_174(var uParam0, bool bParam1)//Position - 0x85C0
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	if (__LIB_0__.func_619(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			__LIB_2__.func_127(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 0, fVar2);
			if (__LIB_2__.func_135(Var1, &uVar0) || __LIB_0__.func_619(Var1))
			{
				Var1 = { *uParam0 };
				__LIB_2__.func_127(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_179(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x889B
{
	if (__LIB_1__.func_82(Param0, fParam1, iParam2, iParam3, 0) || func_180(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_180(struct<3> Param0, int iParam1, int iParam2)//Position - 0x88CC
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_96(Param0, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (__LIB_0__.func_154(iVar2, 0, 1) && __LIB_0__.func_154(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_182(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x8AAB
{
	Global_2667225.f_3 = 0;
	if (!func_179(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2667225.f_3++;
		if (bParam3)
		{
			if (__LIB_24__.func_996(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!func_186(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!func_95(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (!bParam2)
		{
			if (__LIB_24__.func_996(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!func_186(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!__LIB_7__.func_118(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2667225.f_3++;
						if (!func_95(Param0, 1056964608))
						{
							Global_2667225.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (__LIB_24__.func_996(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			if (!func_186(Param0, fParam10))
			{
				Global_2667225.f_3++;
				if (!__LIB_7__.func_118(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2667225.f_3++;
					if (!func_95(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
		}
	}
	return 0;
}

int func_186(struct<3> Param0, float fParam1)//Position - 0x8E6E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((__LIB_0__.func_154(iVar1, 1, 1) && __LIB_0__.func_605(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_118(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !__LIB_0__.func_723(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(Param0, __LIB_0__.func_85(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_190(int iParam0)//Position - 0x9136
{
	if (((func_118(iParam0, 1) || __LIB_0__.func_738(iParam0)) || __LIB_0__.func_292(iParam0, 0)) || __LIB_2__.func_37(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_193(struct<3> Param0, var uParam1, var uParam2)//Position - 0x91BB
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
					func_195(&Var3, uParam1, iVar0);
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
				func_195(&Var3, uParam1, iVar0);
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
					func_195(&Var3, uParam1, iVar0);
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
				func_194(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_194(var uParam0, var uParam1, int iParam2)//Position - 0x94DB
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_194(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_195(var uParam0, var uParam1, int iParam2)//Position - 0x9519
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_195(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_196(var uParam0, var uParam1)//Position - 0x9553
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (__LIB_7__.func_255(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_134(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		__LIB_7__.func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

void func_205(var uParam0, var uParam1, var uParam2)//Position - 0x9863
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_227(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_206(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_206(var uParam0, var uParam1, var uParam2)//Position - 0x98D2
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
		if (__LIB_2__.func_133(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_226(uParam0, 1))
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
	if (__LIB_6__.func_902(uParam2->f_34) != 0)
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
					if (!func_174(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_2__.func_38(Var1))
									{
										Var1 = { __LIB_24__.func_992(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_95(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_7__.func_119(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_226(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_216(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !__LIB_2__.func_133(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_215(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_24__.func_996(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_24__.func_996(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_213(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = func_212(Var1, uParam2->f_54, &fVar23);
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
																													func_211(Var1, fVar2, iVar14);
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
																									if (__LIB_7__.func_119(Var1, uParam2))
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
							func_209(0, uParam2);
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
						__LIB_31__.func_894(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (__LIB_2__.func_133(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_226(&Var27, bVar29))
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
				func_207(&Global_1574205, uParam0, uParam1, *uParam0);
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

void func_207(var uParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0xA300
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_179(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_209(int iParam0, var uParam1)//Position - 0xA421
{
	if (!__LIB_7__.func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__.func_609(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_209(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_209(iParam0 + 1, uParam1);
	}
}

void func_211(struct<3> Param0, float fParam1, int iParam2)//Position - 0xA4C7
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
			func_211(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_212(struct<3> Param0, float fParam1, float fParam2)//Position - 0xA534
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_141(iVar3))
		{
			Var1 = { __LIB_0__.func_85(iVar3) };
			fVar5 = SYSTEM::VDIST(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_213(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0xA59C
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (__LIB_0__.func_154(iVar1, bParam3, bParam4))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && __LIB_0__.func_605(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && __LIB_8__.func_883(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_214(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_96(__LIB_0__.func_85(iVar1), Param0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_214(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)//Position - 0xA70F
{
	if (func_96(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	__LIB_2__.func_128(Param0, fParam1, iParam2, &Global_1976933, &(Global_1976933.f_3), &(Global_1976933.f_6), 1036831949);
	__LIB_2__.func_128(Param3, fParam4, iParam5, &(Global_1976933.f_7), &(Global_1976933.f_10), &(Global_1976933.f_13), 1036831949);
	if (MISC::GET_POINT_AREA_OVERLAP(Global_1976933, Global_1976933.f_3, Global_1976933.f_6, Global_1976933.f_7, Global_1976933.f_10, Global_1976933.f_13))
	{
		return 1;
	}
	return 0;
}

int func_215(struct<3> Param0, float fParam1, int iParam2)//Position - 0xA7AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_214(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_214(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_216(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA8B9
{
	if (func_219(Param0, fParam1, iParam2, iParam3, iParam4) || func_217(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_217(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA8EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_218(Param0, iParam2, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_214(Param0, fParam1, iParam2, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (__LIB_0__.func_154(iVar2, 0, 1) && __LIB_0__.func_154(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_218(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)//Position - 0xA9C9
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = __LIB_2__.func_131(iParam1, 1008981770);
	fVar1 = __LIB_2__.func_131(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_219(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0xAA09
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (__LIB_0__.func_154(iVar1, 0, 1) && __LIB_0__.func_154(iParam3, 0, 1))
			{
				if (Global_2680265.f_261[iVar0])
				{
					if (func_96(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_96(__LIB_0__.func_85(iVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2680265.f_261[iVar0])
			{
				if (func_96(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (__LIB_0__.func_154(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_96(__LIB_0__.func_85(iVar1), Param0, fParam1, iParam2, 1036831949))
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

bool func_226(var uParam0, bool bParam1)//Position - 0xB11E
{
	bool bVar0;
	bVar0 = false;
	if (Global_2667225.f_26.f_18)
	{
		switch (Global_2667225.f_26.f_17)
		{
			case 0:
				if (__LIB_0__.func_613(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 1:
				if (__LIB_6__.func_903(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_85(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, Global_2667225.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_227(var uParam0, var uParam1, var uParam2)//Position - 0xB210
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
			if (__LIB_2__.func_133(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_226(uParam0, 1))
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
			__LIB_6__.func_904(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__.func_623();
		}
		else
		{
			__LIB_0__.func_622();
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
							if ((uParam2->f_12 && !func_216(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !__LIB_2__.func_133(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_215(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_24__.func_996(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_24__.func_996(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_213(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = func_212(Var3, uParam2->f_54, &fVar12);
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
																		func_211(Var3, fVar4, iVar5);
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
					func_209(0, uParam2);
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

int func_244(int iParam0)//Position - 0xBCDB
{
	switch (iParam0)
	{
		case 0:
			return Local_63.f_49;
			break;
	}
	return 0;
}

int func_245()//Position - 0xBCFB
{
	if (iLocal_69 == 0)
	{
		if (BitTest(Local_63.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_246()//Position - 0xBD18
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	if (!BitTest(Local_63.f_2, 0))
	{
		MISC::SET_BIT(&(Local_63.f_2), 0);
		if (iLocal_69 != 0)
		{
			return 1;
		}
		else if (__LIB_0__.func_154(iLocal_71, 1, 1))
		{
			if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false)) >= __LIB_14__.func_982(iLocal_69)
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(__LIB_14__.func_982(iLocal_69)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = PLAYER::GET_PLAYER_PED(iLocal_71);
					iVar3 = PED::GET_PED_NEARBY_PEDS(iVar2, &uLocal_252, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < __LIB_14__.func_982(iLocal_69))
							{
								if (iVar5 == -1)
								{
									if (((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iVar1 /*7*/]) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 1)) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 6)) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_252[iVar0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_252[iVar0], false))
									{
										if (!PED::IS_PED_A_PLAYER(uLocal_252[iVar0]))
										{
											if (__LIB_2__.func_172(ENTITY::GET_ENTITY_MODEL(uLocal_252[iVar0])))
											{
												if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_252[iVar0]))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_252[iVar0], false))
													{
														if (func_5(ENTITY::GET_ENTITY_COORDS(uLocal_252[iVar0], true), ENTITY::GET_ENTITY_COORDS(iVar2, true), 625f))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_252[iVar0], true, false);
															Local_63.f_10[iVar5 /*7*/].f_6 = iVar0;
															MISC::SET_BIT(&(Local_63.f_10[iVar5 /*7*/].f_2), 8);
															if (!BitTest(Local_63.f_1, 12))
															{
																Local_63.f_8 = iLocal_74;
																MISC::SET_BIT(&(Local_63.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (BitTest(Local_63.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < __LIB_14__.func_982(iLocal_69))
		{
			if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 1) || BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6], false))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6], true);
							Local_63.f_10[iVar6 /*7*/] = NETWORK::PED_TO_NET(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]);
							NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_63.f_10[iVar6 /*7*/], true);
							MISC::SET_BIT(&(Local_63.f_10[iVar6 /*7*/].f_2), 0);
							Local_63.f_10[iVar6 /*7*/].f_1 = iLocal_69;
							Local_63.f_10[iVar6 /*7*/].f_4 = func_70(iLocal_69);
							func_68(iVar6);
							MISC::CLEAR_BIT(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_8) > 5000)
		{
			if (iVar7 >= __LIB_14__.func_982(iLocal_69))
			{
				MISC::SET_BIT(&(Local_63.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_252[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < __LIB_14__.func_982(iLocal_69))
			{
				if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 8))
				{
					__LIB_1__.func_162(&(Local_63.f_10[iVar6 /*7*/]));
					MISC::CLEAR_BIT(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			MISC::CLEAR_BIT(&(Local_63.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_249()//Position - 0xC40A
{
	if (BitTest(Local_63.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_69 == 0)
	{
		Local_63.f_49 = func_250(Local_63.f_36, 1);
		MISC::SET_BIT(&(Local_63.f_1), 6);
		return 1;
	}
	else
	{
		MISC::SET_BIT(&(Local_63.f_1), 6);
		return 1;
	}
	return 0;
}

int func_250(struct<3> Param0, int iParam1)//Position - 0xC456
{
	int iVar0;
	if (__LIB_9__.func_424(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("G_M_Y_MexGoon_01");
	}
	else if (__LIB_9__.func_424(Param0, 1100f, -196f, 300f, 350f, 0) || __LIB_9__.func_424(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("G_M_Y_Lost_01");
	}
	else if (__LIB_9__.func_424(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("G_M_Y_BallaOrig_01");
	}
	else if (__LIB_9__.func_424(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("G_M_Y_FamCA_01");
	}
	else if (__LIB_9__.func_424(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("G_M_Y_Korean_02");
	}
	else if (__LIB_9__.func_424(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("A_M_M_Hillbilly_02");
	}
	else if (__LIB_9__.func_424(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("G_M_Y_SalvaGoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar0 < 33)
		{
			return joaat("MP_G_M_Pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("G_M_M_ArmGoon_01");
		}
		else
		{
			return joaat("G_M_M_ChiGoon_01");
		}
		if (Param0.f_1 > 800f)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar0 < 33)
			{
				return joaat("A_M_M_Hillbilly_02");
			}
		}
	}
	return joaat("MP_G_M_Pros_01");
}

void func_252(int iParam0)//Position - 0xC62C
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	Local_63.f_36 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (__LIB_2__.func_39(iParam0, 0))
	{
		MISC::SET_BIT(&(Local_63.f_1), 17);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_63.f_1), 17);
	}
}

int func_254()//Position - 0xC6AC
{
	bool bVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (BitTest(Local_63.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_69)
			{
				case 0:
					if (BitTest(Local_63.f_2, 11))
					{
						if (__LIB_0__.func_154(iLocal_71, 1, 1))
						{
							if (SYSTEM::VDIST2(__LIB_0__.func_85(iLocal_71), Local_63.f_39) > 625f)
							{
								MISC::CLEAR_BIT(&(Local_63.f_2), 11);
								MISC::CLEAR_BIT(&iLocal_66, 8);
							}
						}
					}
					else
					{
						if (__LIB_0__.func_154(iLocal_71, 1, 1))
						{
							bVar0 = true;
							if (func_257())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							__LIB_2__.func_120();
						}
						else
						{
							func_64();
						}
						if (BitTest(Local_63.f_1, 5))
						{
							if (func_256())
							{
								func_64();
								MISC::SET_BIT(&(Local_63.f_1), 7);
							}
						}
					}
					break;
				case 1:
					if (__LIB_0__.func_154(iLocal_71, 1, 1))
					{
						bVar0 = true;
						if (func_255())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						__LIB_2__.func_120();
					}
					else
					{
						func_64();
					}
					if (BitTest(Local_63.f_1, 5))
					{
						if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_5) > 30000)
						{
							func_64();
							MISC::SET_BIT(&(Local_63.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_255()//Position - 0xC7C5
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_71);
	if (((((ENTITY::IS_ENTITY_IN_AIR(iVar0) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || __LIB_1__.func_155(iLocal_71, 1, 1)) || __LIB_0__.func_702(iLocal_71, 0)) || __LIB_0__.func_702(iLocal_71, 7)) || __LIB_0__.func_743(iLocal_71))
	{
		return 1;
	}
	if (func_118(iLocal_71, 1))
	{
		if (iLocal_71 > -1)
		{
			if (Global_1853348[iLocal_71 /*834*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_256()//Position - 0xC84C
{
	if (!BitTest(Local_63.f_1, 18))
	{
		if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_5) > 5000)
		{
			MISC::SET_BIT(&(Local_63.f_1), 18);
			return 1;
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_5) > 60000/*func_310*/)
	{
		return 1;
	}
	return 0;
}

int func_257()//Position - 0xC898
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_71);
	if (((((((((ENTITY::GET_ENTITY_SPEED(iVar0) > 10f || ENTITY::IS_ENTITY_IN_AIR(iVar0)) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || __LIB_1__.func_155(iLocal_71, 1, 1)) || __LIB_1__.func_154(iLocal_71)) || __LIB_0__.func_702(iLocal_71, 0)) || __LIB_0__.func_702(iLocal_71, 7)) || __LIB_0__.func_743(iLocal_71)) || Global_2689235[iLocal_71 /*453*/].f_246) || func_61(PLAYER::GET_PLAYER_PED(iLocal_71), joaat("titan")))
	{
		return 1;
	}
	if (func_118(iLocal_71, 1))
	{
		if (iLocal_71 > -1)
		{
			if (Global_1853348[iLocal_71 /*834*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_71 != -1)
	{
		if (BitTest(Local_65[iLocal_71 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_258()//Position - 0xC97F
{
	if (!BitTest(Local_63.f_1, 14))
	{
		Local_63.f_9 = iLocal_74;
		MISC::SET_BIT(&(Local_63.f_1), 14);
	}
}

void func_259()//Position - 0xC9A3
{
	if (Local_63.f_44 != Local_65[iLocal_70 /*5*/].f_4)
	{
		Local_63.f_44 = Local_65[iLocal_70 /*5*/].f_4;
	}
}

void func_260()//Position - 0xC9C8
{
	if (!BitTest(Local_63.f_1, 10))
	{
		Local_63.f_45 = __LIB_14__.func_982(iLocal_69);
		Local_63.f_46 = 0;
		Local_63.f_47 = 0;
		MISC::SET_BIT(&(Local_63.f_1), 10);
	}
}

void func_261()//Position - 0xC9FA
{
	func_262();
	if (!BitTest(Local_63.f_1, 8))
	{
		if (BitTest(Local_63.f_2, 7))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_74, Local_63.f_7) > 300000)
			{
				MISC::SET_BIT(&(Local_63.f_2), 8);
			}
		}
	}
}

void func_262()//Position - 0xCA36
{
	if (!BitTest(Local_63.f_2, 7))
	{
		Local_63.f_7 = iLocal_74;
		MISC::SET_BIT(&(Local_63.f_2), 7);
	}
}

void func_263()//Position - 0xCA58
{
	int iVar0;
	int iVar1;
	int iVar2;
	MISC::SET_BIT(&iLocal_66, 7);
	if (BitTest(Local_63.f_3, 1))
	{
	}
	if (BitTest(Local_63.f_3, 2))
	{
	}
	if (BitTest(Local_63.f_3, 3))
	{
	}
	if (BitTest(Local_63.f_3, 9))
	{
	}
	if (BitTest(Local_63.f_3, 4))
	{
	}
	if (BitTest(Local_63.f_3, 5))
	{
	}
	if (BitTest(Local_63.f_3, 11))
	{
		if (PLAYER::PLAYER_ID() == iLocal_70)
		{
			MISC::CLEAR_BIT(&iLocal_66, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				MISC::SET_BIT(&iLocal_66, 7);
			}
			else if (func_383("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_66, 7);
			}
		}
	}
	if (BitTest(Local_63.f_3, 6))
	{
		if (PLAYER::PLAYER_ID() == iLocal_70)
		{
			MISC::CLEAR_BIT(&iLocal_66, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				MISC::SET_BIT(&iLocal_66, 7);
			}
			else if (func_383("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_66, 7);
			}
		}
	}
	if (BitTest(Local_63.f_3, 7))
	{
		if (PLAYER::PLAYER_ID() == iLocal_70)
		{
			MISC::CLEAR_BIT(&iLocal_66, 7);
			if (func_343())
			{
				if (!Local_63.f_50)
				{
					if (Local_63.f_52)
					{
						iLocal_253 = __LIB_6__.func_341(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_338(12);
					}
					if (iLocal_253 > 0)
					{
						__LIB_1__.func_611(iLocal_253, 1, 0, 0f);
						__LIB_37__.func_810(iLocal_253, 4, 1, 1);
					}
					MISC::SET_BIT(&iLocal_66, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_66, 7);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 0))
	{
		if (PLAYER::PLAYER_ID() == iLocal_70)
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				MISC::CLEAR_BIT(&iLocal_66, 7);
				if (func_383("MPCT_mugfail", "LAMAR", 19))
				{
					MISC::SET_BIT(&iLocal_66, 7);
				}
			}
		}
		else if (PLAYER::PLAYER_ID() == iLocal_71)
		{
			if (BitTest(Local_63.f_2, 1))
			{
				if (BitTest(Local_63.f_2, 12))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_7101 /* Tunable: KILL_A_MUGGER_RP */) * Global_262145.f_4303 /* Tunable: XP_TUNABLE_KILL_MUGGERS */));
					__LIB_37__.func_803(0, "XPT_MEDIUMT", joaat("XPTYPE_ACTION"), joaat("XPCATEGORY_ACTION_STOPPED_MUGGER"), iVar0, 1, -1, 0);
					__LIB_35__.func_525(47, 1);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 8))
	{
		if (PLAYER::PLAYER_ID() == iLocal_70)
		{
			MISC::CLEAR_BIT(&iLocal_66, 7);
			if (func_343())
			{
				if (iLocal_69 == 0)
				{
					iLocal_253 = (func_338(2) * __LIB_14__.func_982(iLocal_69));
					iVar1 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_253 = __LIB_6__.func_341(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_338(12);
					}
					iVar1 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_253 > 0)
					{
						__LIB_1__.func_611(iLocal_253, 1, 0, 0f);
						__LIB_37__.func_810(iLocal_253, iVar1, 1, 0);
					}
					MISC::SET_BIT(&iLocal_66, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_66, 7);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 10))
	{
		if (PLAYER::PLAYER_ID() == iLocal_70)
		{
			MISC::CLEAR_BIT(&iLocal_66, 7);
			if (func_343())
			{
				if (iLocal_69 == 0)
				{
					iLocal_253 = (func_338(2) * __LIB_14__.func_982(iLocal_69));
					iVar2 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_253 = __LIB_6__.func_341(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_338(12);
					}
					iVar2 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_253 > 0)
					{
						__LIB_1__.func_611(iLocal_253, 1, 0, 0f);
						__LIB_37__.func_810(iLocal_253, iVar2, 1, 0);
					}
					MISC::SET_BIT(&iLocal_66, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_66, 7);
				}
			}
		}
	}
	if (BitTest(iLocal_66, 7))
	{
		func_264();
	}
}

void func_264()//Position - 0xCD80
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*834*/].f_140), iLocal_69);
	Global_1853348[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*834*/].f_141 = -1;
	if (iLocal_69 == 1)
	{
		if (MISC::IS_INCIDENT_VALID(iLocal_251))
		{
			MISC::DELETE_INCIDENT(iLocal_251);
		}
	}
	func_517();
	func_549();
}

int func_338(int iParam0)//Position - 0xFDE6
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_7__.func_265(iParam0) >= 0)
	{
		iVar0 = __LIB_7__.func_265(iParam0);
	}
	else
	{
		iVar0 = __LIB_25__.func_934(iParam0);
	}
	return iVar0;
}

int func_343()//Position - 0x103E4
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	if (Local_63.f_50 || Local_63.f_52)
	{
		if (!Local_63.f_51)
		{
			if (!BitTest(Local_63.f_3, 7))
			{
				__LIB_35__.func_558("HS_UNABLE" /* GXT: ~s~Unable to send a Hit Squad to attack ~a~.~s~ */, iLocal_71, 0, 0, 0, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_69)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_383(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_383(char* sParam0, char* sParam1, int iParam2)//Position - 0x11455
{
	if (!MISC::ARE_STRINGS_EQUAL(sParam0, "NULL"))
	{
		if (!BitTest(iLocal_68, 0))
		{
			__LIB_0__.func_203(&uLocal_86, 3, 0, sParam1, 0, 1);
			if (__LIB_42__.func_898(&uLocal_86, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				MISC::SET_BIT(&iLocal_68, 0);
			}
		}
		else if (!BitTest(iLocal_68, 1))
		{
			if (__LIB_0__.func_77(0))
			{
				MISC::SET_BIT(&iLocal_68, 1);
			}
		}
		else if (!__LIB_0__.func_77(0))
		{
			iLocal_68 = 0;
			return 1;
		}
	}
	return 0;
}

void func_493()//Position - 0x1474A
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63.f_10[iLocal_77 /*7*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_77 /*7*/]), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_5(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_63.f_10[iLocal_77 /*7*/]), true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50625f))
			{
				if (!BitTest(iLocal_66, 4))
				{
					MISC::SET_BIT(&iLocal_66, 4);
				}
			}
			else if (!BitTest(iLocal_66, 5))
			{
				if (Local_63.f_42 != -1)
				{
					if (iLocal_77 == Local_63.f_42)
					{
						if (!BitTest(iLocal_66, 5))
						{
							MISC::SET_BIT(&iLocal_66, 5);
						}
					}
				}
			}
		}
	}
	func_494(iLocal_77);
	iLocal_77++;
	if (iLocal_77 >= __LIB_14__.func_982(iLocal_69))
	{
		if ((!BitTest(iLocal_66, 4) && BitTest(Local_63.f_1, 8)) || BitTest(iLocal_66, 5))
		{
			if (!BitTest(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
			{
				MISC::SET_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 1);
			}
		}
		else if (BitTest(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
		{
			MISC::CLEAR_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 1);
		}
		MISC::CLEAR_BIT(&iLocal_66, 4);
		MISC::CLEAR_BIT(&iLocal_66, 5);
		iLocal_77 = 0;
	}
}

void func_494(int iParam0)//Position - 0x1487E
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar2 = 0;
	Var3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iParam0 /*7*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]);
		if (iLocal_69 == 0)
		{
			if (PLAYER::PLAYER_ID() == iLocal_71)
			{
				if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_63.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (PLAYER::PLAYER_ID() == iLocal_70)
		{
			if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!BitTest(iLocal_67[iParam0], 0))
				{
					MISC::SET_BIT(&Global_1835488, 0);
					MISC::SET_BIT(&(iLocal_67[iParam0]), 0);
				}
				if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!BitTest(iLocal_67[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (BitTest(iLocal_67[iParam0], 1))
				{
					MISC::CLEAR_BIT(&(iLocal_67[iParam0]), 1);
				}
			}
		}
		if (bVar4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iParam0 /*7*/]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_10[iParam0 /*7*/]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_63.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_10[iParam0 /*7*/]))
		{
			if (PLAYER::PLAYER_ID() == iLocal_70)
			{
				if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 9) && !BitTest(iLocal_67[iParam0], 1))
				{
					if (NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(iVar0, PLAYER::PLAYER_ID()))
					{
						switch (Local_63.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								__LIB_2__.func_51(iVar0, 3);
								break;
						}
						MISC::SET_BIT(&(iLocal_67[iParam0]), 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !PED::IS_PED_INJURED(iVar0))
			{
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					case 1:
						PED::SET_PED_RESET_FLAG(iVar0, 187, true);
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 3f);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
									PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
								}
							}
						}
						if (PLAYER::PLAYER_ID() == iLocal_71 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), true), 25f))
						{
							MISC::SET_BIT(&(Global_2815059.f_4658), 0);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2815059.f_4658), 0);
						}
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_RESPONDING_TO_EVENT(iVar0, 29))
							{
								if (__LIB_0__.func_154(iLocal_71, 1, 1))
								{
									if (!BitTest(Local_63.f_2, 13))
									{
										if (func_515(iLocal_71) && !PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::GET_PLAYER_PED(iLocal_71)))
										{
											if (!__LIB_9__.func_25(iVar0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
											{
												if (func_513(iVar0))
												{
													iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_71), false);
													if (ENTITY::DOES_ENTITY_EXIST(iVar1))
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
														{
														}
														if (!VEHICLE::IS_SEAT_WARP_ONLY(iVar1, __LIB_0__.func_306(PLAYER::GET_PLAYER_PED(iLocal_71), 0)))
														{
															TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, __LIB_2__.func_50(PLAYER::GET_PLAYER_PED(iLocal_71), iVar1), func_510(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_71)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
										{
											if (__LIB_9__.func_25(iVar0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
											{
												TASK::CLEAR_PED_TASKS(iVar0);
											}
											if (!__LIB_9__.func_25(iVar0, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
											{
												if (func_513(iVar0))
												{
													TASK::TASK_GO_TO_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(iLocal_71), -1, 0f, func_510(iParam0), 2f, 0);
												}
											}
											else
											{
												PED::SET_PED_RESET_FLAG(iVar0, 151, true);
											}
										}
									}
								}
							}
						}
						break;
					case 2:
						if (PLAYER::PLAYER_ID() == iLocal_71 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_71), true), 25f))
						{
							MISC::SET_BIT(&(Global_2815059.f_4658), 0);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2815059.f_4658), 0);
						}
						if (PLAYER::PLAYER_ID() == iLocal_71)
						{
							if (!BitTest(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								{
									if ((func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) && (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::PLAYER_PED_ID()))
									{
										iVar2 = __LIB_7__.func_120(PLAYER::PLAYER_ID());
										fVar5 = (SYSTEM::TO_FLOAT(Global_262145.f_7109 /* Tunable: MUGGER_AMOUNT_STEAL */) / 100f);
										iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) * fVar5));
										iVar6 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (iVar2 > (iVar6 * Global_262145.f_7110 /* Tunable: MUGGER_STEAL_CAP */))
										{
											iVar2 = (iVar6 * Global_262145.f_7110 /* Tunable: MUGGER_STEAL_CAP */);
										}
										if (iVar2 > 0)
										{
											MISC::SET_BIT(&iLocal_66, 16);
										}
										TASK::SET_HIGH_FALL_TASK(PLAYER::PLAYER_PED_ID(), 5000, 10000, 4);
										if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_71)))
										{
											Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iVar0, true) };
											Var3 = { __LIB_0__.func_79(Var3) };
											Var3.f_0 = (Var3.f_0 * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, Var3, 0f, 0f, 0.5f, 0, false, true, true, false, true);
										}
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
										if (((PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) || PED::IS_PED_JACKING(iVar0)) && func_505(iVar0)) && __LIB_0__.func_306(iVar0, 0) == -1)
										{
											PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, true);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(iVar0);
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 10000f, -1, true, false);
										}
										Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
										}
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837201);
										MISC::SET_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 0);
										MISC::SET_BIT(&(Global_2815059.f_4658), 2);
									}
								}
							}
						}
						break;
					case 3:
						if (PED::GET_PED_RESET_FLAG(iVar0, 187))
						{
							PED::SET_PED_RESET_FLAG(iVar0, 187, false);
						}
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
								PED::SET_PED_CONFIG_FLAG(iVar0, 118, true);
							}
						}
						if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_71)))
						{
							if (!PED::IS_PED_FLEEING(iVar0))
							{
								if (func_513(iVar0))
								{
									if ((PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) || PED::IS_PED_JACKING(iVar0)) && !BitTest(Local_63.f_2, 10))
									{
										if (!__LIB_9__.func_25(iVar0, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) && !__LIB_9__.func_25(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")))
										{
											if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
											{
												iVar7 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
												iVar8 = ENTITY::GET_ENTITY_MODEL(iVar7);
												if (BitTest(Local_63.f_2, 13))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, false);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar8))
												{
													TASK::TASK_HELI_MISSION(iVar0, iVar7, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar8))
												{
													TASK::TASK_PLANE_MISSION(iVar0, iVar7, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 1.12E-43f, 1.12E-43f, true);
												}
												else if (ENTITY::GET_ENTITY_MODEL(iVar7) == joaat("taxi"))
												{
													PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_71), 10000f, -1, true, false);
												}
												else
												{
													TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, PED::GET_VEHICLE_PED_IS_IN(iVar0, true), 60f, 786468);
												}
											}
										}
									}
									else if (!__LIB_9__.func_25(iVar0, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
									{
										if (__LIB_0__.func_154(iLocal_71, 1, 1))
										{
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_71), 10000f, -1, true, false);
										}
									}
								}
							}
						}
						break;
					case 4:
						func_503(Local_63.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (BitTest(Local_63.f_2, 13))
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_10[iParam0 /*7*/]), 1, false);
				}
				func_495(iVar0);
			}
		}
	}
}

void func_495(int iParam0)//Position - 0x150BD
{
	int iVar0;
	int iVar1;
	if (BitTest(iLocal_66, 16))
	{
		iVar0 = Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3;
		iVar1 = func_496(iVar0);
		if (iVar1 == 1)
		{
			MISC::CLEAR_BIT(&iLocal_66, 15);
			MISC::CLEAR_BIT(&iLocal_66, 16);
			if (!__LIB_0__.func_112())
			{
				MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iVar0, false, false, 0);
			}
			if (iVar0 > Global_262145.f_8528 /* Tunable: MUGGER_CASH_DROP_CAP */)
			{
				iVar0 = Global_262145.f_8528 /* Tunable: MUGGER_CASH_DROP_CAP */;
			}
			PED::SET_PED_MONEY(iParam0, iVar0);
			MISC::SET_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			MISC::CLEAR_BIT(&iLocal_66, 15);
			MISC::CLEAR_BIT(&iLocal_66, 16);
			MISC::SET_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_496(int iParam0)//Position - 0x15167
{
	if (__LIB_0__.func_112())
	{
		if (func_499(iParam0))
		{
			if (__LIB_2__.func_46(iLocal_254) == 2)
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__.func_375(iLocal_254));
				MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iParam0, false, false, 0);
				__LIB_18__.func_226(iLocal_254);
				return 1;
			}
			else
			{
				__LIB_18__.func_226(iLocal_254);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_499(int iParam0)//Position - 0x15210
{
	if (!BitTest(iLocal_66, 15))
	{
		__LIB_31__.func_881(&iLocal_254, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"), iParam0, 4, 3);
		__LIB_0__.func_495(&uLocal_255, 0, 0);
		MISC::SET_BIT(&iLocal_66, 15);
	}
	else if (__LIB_2__.func_48(iLocal_254) || __LIB_2__.func_47(&uLocal_255, 10000, 0))
	{
		return 1;
	}
	return 0;
}

void func_503(int iParam0, bool bParam1)//Position - 0x1533D
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0))
		{
			if (!__LIB_0__.func_680(iParam0))
			{
				if (BitTest(Local_63.f_2, 13))
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iParam0));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 1, false);
				}
				else
				{
					if (bParam1)
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iParam0));
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 1, true);
				}
			}
		}
		__LIB_1__.func_162(&iParam0);
	}
}

int func_505(int iParam0)//Position - 0x153E9
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
	}
	if (PED::IS_PED_JACKING(iParam0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_515(iLocal_71))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_71), true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (__LIB_2__.func_49(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iVar0))
			{
				return 0;
			}
		}
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailersmall2"))
		{
			return 0;
		}
	}
	return 1;
}

float func_510(int iParam0)//Position - 0x1555E
{
	if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_513(int iParam0)//Position - 0x15672
{
	if ((!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_BEING_STUNNED(iParam0, 0)) && !PED::IS_PED_RAGDOLL(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0)//Position - 0x156CC
{
	if (PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_517()//Position - 0x15729
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bVar0 = BitTest(Local_63.f_2, 6);
	bVar1 = BitTest(Local_63.f_2, 10);
	func_522();
	if (iLocal_69 != 1)
	{
		if (BitTest(Local_63.f_3, 12))
		{
			func_519();
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_78))
	{
		__LIB_0__.func_489(&iLocal_78);
	}
	iVar3 = 0;
	while (iVar3 < __LIB_14__.func_982(iLocal_69))
	{
		iLocal_67[iVar3] = 0;
		iVar3++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_63.f_42 = -1;
		Local_63.f_5 = iLocal_74;
		Local_63.f_6 = iLocal_74;
		Local_63.f_7 = iLocal_74;
		Local_63.f_1 = 0;
		Local_63.f_4 = 0;
		Local_63.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < __LIB_14__.func_982(iLocal_69))
		{
			bVar2 = BitTest(Local_63.f_10[iVar3 /*7*/].f_2, 6);
			Local_63.f_10[iVar3 /*7*/].f_2 = 0;
			Local_63.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				MISC::SET_BIT(&(Local_63.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1 = 0;
	Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
	iLocal_66 = 0;
	if (bVar0)
	{
		MISC::SET_BIT(&(Local_63.f_2), 6);
	}
	if (bVar1)
	{
		MISC::SET_BIT(&(Local_63.f_2), 11);
		MISC::SET_BIT(&iLocal_66, 8);
	}
	MISC::SET_BIT(&iLocal_66, 4);
	MISC::SET_BIT(&iLocal_66, 11);
}

void func_519()//Position - 0x158CF
{
	switch (iLocal_69)
	{
		case 0:
			func_521(&(Global_1837209[3]));
			break;
		case 1:
			func_520();
			break;
	}
}

void func_520()//Position - 0x15900
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837161[iVar0], joaat("PRIVATE_SECURITY"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PRIVATE_SECURITY"), Global_1837161[iVar0]);
			iVar0++;
		}
	}
}

void func_521(var uParam0)//Position - 0x15946
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837161[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1837161[iVar0]);
			iVar0++;
		}
	}
}

void func_522()//Position - 0x15988
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < __LIB_14__.func_982(iLocal_69))
	{
		bVar1 = false;
		if (iLocal_69 == 0)
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_503(Local_63.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_523()//Position - 0x159D0
{
	func_524();
	if (iLocal_69 != 1)
	{
		func_493();
	}
}

void func_524()//Position - 0x159E7
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < __LIB_14__.func_982(iLocal_69))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_10[iVar0 /*7*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_10[iVar0 /*7*/]))
			{
				iVar1 = NETWORK::NET_TO_PED(Local_63.f_10[iVar0 /*7*/]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					PED::SET_PED_RESET_FLAG(iVar1, 151, true);
				}
			}
		}
		iVar0++;
	}
	if (Global_2815059.f_1766)
	{
	}
	if (iLocal_69 == 1)
	{
		if (PLAYER::PLAYER_ID() == iLocal_71)
		{
			if (BitTest(Local_63.f_1, 0))
			{
				if (!MISC::IS_INCIDENT_VALID(iLocal_251))
				{
					if (__LIB_0__.func_154(iLocal_71, 1, 1))
					{
						if (Local_63.f_50)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(15, PLAYER::GET_PLAYER_PED(iLocal_71), 4, 0f, &iLocal_251, joaat("PRIVATE_SECURITY"), 0);
						}
						else if (Local_63.f_52)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(16, PLAYER::GET_PLAYER_PED(iLocal_71), 4, 0f, &iLocal_251, joaat("PRIVATE_SECURITY"), Local_63.f_53);
						}
						else
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(14, PLAYER::GET_PLAYER_PED(iLocal_71), 4, 0f, &iLocal_251, 0, 0);
						}
					}
				}
				if (Global_2815059.f_1766)
				{
					if (!BitTest(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_69 == 0)
	{
		if (Local_63.f_42 != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63.f_10[Local_63.f_42 /*7*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_63.f_10[Local_63.f_42 /*7*/]), false) && !func_528(NETWORK::NET_TO_PED(Local_63.f_10[Local_63.f_42 /*7*/])))
				{
					if (Local_63.f_10[Local_63.f_42 /*7*/].f_5 == 3)
					{
						__LIB_7__.func_121(Local_63.f_10[Local_63.f_42 /*7*/], &iLocal_78, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0);
						if (HUD::DOES_BLIP_EXIST(iLocal_78))
						{
							if (!BitTest(iLocal_66, 6))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78, "FM_MGR_BLP" /* GXT: Mugger */);
								MISC::SET_BIT(&iLocal_66, 6);
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_78))
				{
					__LIB_0__.func_489(&iLocal_78);
				}
			}
			if (PLAYER::PLAYER_ID() == iLocal_70)
			{
				if (!BitTest(iLocal_66, 14))
				{
					if (func_383("MPCT_mugsuc", "LAMAR", 19))
					{
						MISC::SET_BIT(&iLocal_66, 14);
					}
				}
			}
		}
	}
}

int func_528(int iParam0)//Position - 0x15E76
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar1 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
				}
				if (BitTest(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_529()//Position - 0x15EC7
{
	return Local_63.f_0;
}

int func_530(int iParam0)//Position - 0x15ED1
{
	return Local_65[iParam0 /*5*/];
}

void func_531()//Position - 0x15EDF
{
	if (PLAYER::PLAYER_ID() == iLocal_71)
	{
		if (Global_32110)
		{
			if (!BitTest(Local_65[iLocal_76 /*5*/].f_1, 4))
			{
				MISC::SET_BIT(&(Local_65[iLocal_76 /*5*/].f_1), 4);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_65[iLocal_76 /*5*/].f_1), 4);
		}
	}
}

void func_532()//Position - 0x15F25
{
	bool bVar0;
	bVar0 = false;
	if (PLAYER::PLAYER_ID() == iLocal_70)
	{
		if (BitTest(Global_1835488, 0))
		{
			MISC::CLEAR_BIT(&Global_1835488, 0);
			bVar0 = true;
		}
		if (!BitTest(Local_65[iLocal_70 /*5*/].f_1, 2))
		{
			if (BitTest(Local_63.f_1, 11))
			{
				MISC::SET_BIT(&(Local_65[iLocal_70 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!BitTest(Local_63.f_1, 11))
		{
			MISC::CLEAR_BIT(&(Local_65[iLocal_70 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = func_536();
			func_533(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		}
	}
	else if (Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 != Local_63.f_44)
	{
		Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = Local_63.f_44;
		func_533(Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_533(var uParam0)//Position - 0x15FE9
{
	switch (iLocal_69)
	{
		case 0:
			__LIB_24__.func_67(&(Global_1837209[3]), uParam0);
			break;
		case 1:
			func_534(uParam0);
			break;
	}
}

void func_534(var uParam0)//Position - 0x1601E
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam0, bVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837161[bVar0], joaat("PRIVATE_SECURITY"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PRIVATE_SECURITY"), Global_1837161[bVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837161[bVar0], joaat("PRIVATE_SECURITY"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PRIVATE_SECURITY"), Global_1837161[bVar0]);
		}
		bVar0++;
	}
}

int func_536()//Position - 0x160F2
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_69 == 1 || iLocal_69 == 0)
		{
			if (iLocal_70 == PLAYER::INT_TO_PLAYERINDEX(iVar1))
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		else if (PLAYER::PLAYER_ID() == PLAYER::INT_TO_PLAYERINDEX(iVar1))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		else if (__LIB_0__.func_154(PLAYER::INT_TO_PLAYERINDEX(iVar1), 0, 1))
		{
			if (__LIB_7__.func_115(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_537()//Position - 0x1617B
{
	switch (iLocal_69)
	{
		case 0:
			if (!BitTest(iLocal_66, 11))
			{
				if (PLAYER::PLAYER_ID() == iLocal_70 && PLAYER::PLAYER_ID() != iLocal_71)
				{
					if (__LIB_0__.func_154(iLocal_71, 1, 1))
					{
						__LIB_35__.func_558("GC_TCK_60" /* GXT: ~s~Mugger successfully acquired. They will approach ~a~~s~ soon. */, iLocal_71, 0, 0, 0, 1, 0);
						MISC::SET_BIT(&iLocal_66, 11);
					}
				}
			}
			if (!BitTest(iLocal_66, 12))
			{
				if (BitTest(Local_63.f_1, 8))
				{
					if (PLAYER::PLAYER_ID() == iLocal_70 && PLAYER::PLAYER_ID() != iLocal_71)
					{
						if (__LIB_0__.func_154(iLocal_71, 1, 1))
						{
							__LIB_35__.func_558("GC_TCK_62" /* GXT: ~s~Your Mugger is approaching ~a~.~s~ */, iLocal_71, 0, 0, 0, 1, 0);
							MISC::SET_BIT(&iLocal_66, 12);
						}
					}
				}
			}
			if (BitTest(Local_63.f_2, 10))
			{
				if (!BitTest(iLocal_66, 8))
				{
					if (PLAYER::PLAYER_ID() == iLocal_70 && PLAYER::PLAYER_ID() != iLocal_71)
					{
						if (__LIB_0__.func_154(iLocal_71, 1, 1))
						{
							__LIB_35__.func_558("GC_TCK_65" /* GXT: ~s~Your Mugger is unable to reach ~a~'s~s~ current position. They will attempt again soon. */, iLocal_71, 0, 0, 0, 1, 0);
							MISC::SET_BIT(&iLocal_66, 8);
						}
					}
				}
			}
			else if (!BitTest(iLocal_66, 13))
			{
				if (!BitTest(Local_63.f_2, 11))
				{
					if (BitTest(Local_63.f_1, 8))
					{
						if (BitTest(Local_63.f_2, 6))
						{
							if (PLAYER::PLAYER_ID() == iLocal_70 && PLAYER::PLAYER_ID() != iLocal_71)
							{
								if (__LIB_0__.func_154(iLocal_71, 1, 1))
								{
									__LIB_35__.func_558("GC_TCK_63" /* GXT: ~s~~a~~s~ has escaped from your Mugger. They will approach again soon. */, iLocal_71, 0, 0, 0, 1, 0);
									MISC::SET_BIT(&iLocal_66, 13);
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!BitTest(iLocal_66, 11))
			{
				if (PLAYER::PLAYER_ID() == iLocal_70)
				{
					if (__LIB_0__.func_154(iLocal_71, 1, 1) && PLAYER::PLAYER_ID() != iLocal_71)
					{
						if (Local_63.f_50)
						{
							__LIB_35__.func_558("HS_SUCC" /* GXT: ~s~A Hit Squad was successfully sent to attack ~a~.~s~ */, iLocal_71, 0, 0, 0, 1, 0);
						}
						else if (Local_63.f_52)
						{
							__LIB_35__.func_558("GO_ASS_SUCC" /* GXT: ~s~A Strike Team was successfully sent to attack ~a~.~s~ */, iLocal_71, 0, 0, 0, 1, 0);
						}
						else
						{
							__LIB_35__.func_558("GC_TCK_70" /* GXT: ~s~Mercenaries were successfully sent to attack ~a~.~s~ */, iLocal_71, 0, 0, 0, 1, 0);
						}
						MISC::SET_BIT(&iLocal_66, 11);
					}
				}
				else if (PLAYER::PLAYER_ID() == iLocal_71)
				{
					if (__LIB_0__.func_154(iLocal_70, 1, 1))
					{
						if (Local_63.f_50)
						{
							if (Local_63.f_51)
							{
								__LIB_18__.func_450("HS_A_SUCC" /* GXT: A Hit Squad has been sent to attack you for abandoning your Motorcycle Club. */, 0);
							}
							else
							{
								__LIB_35__.func_558("HS_SENT" /* GXT: ~s~~a~~s~ has sent a Hit Squad to attack you. */, iLocal_70, 0, 0, 0, 1, 0);
							}
						}
						else if (Local_63.f_52)
						{
							__LIB_35__.func_558("GO_ASS_SENT" /* GXT: ~s~~a~~s~ has sent a Strike Team to attack you. */, iLocal_70, 0, 0, 0, 1, 0);
						}
						else
						{
							__LIB_35__.func_558("GC_TCK_71" /* GXT: ~s~~a~~s~ has sent Mercenaries to attack you. */, iLocal_70, 0, 0, 0, 1, 0);
						}
						MISC::SET_BIT(&iLocal_66, 11);
					}
				}
			}
			if (!BitTest(iLocal_66, 10))
			{
				if (BitTest(Local_63.f_1, 0))
				{
					if (BitTest(Local_63.f_3, 6))
					{
						if (PLAYER::PLAYER_ID() == iLocal_70 && PLAYER::PLAYER_ID() != iLocal_71)
						{
							if (__LIB_0__.func_154(iLocal_71, 0, 1))
							{
								__LIB_22__.func_994(-1, 1);
								if (Local_63.f_50)
								{
									if (!Local_63.f_51)
									{
										__LIB_35__.func_558("HS_KILLED" /* GXT: ~s~~a~~s~ has been killed by the Hit Squad. */, iLocal_71, 0, 0, 0, 1, 0);
									}
								}
								else if (Local_63.f_52)
								{
									__LIB_35__.func_558("GO_ASS_KILL" /* GXT: ~s~~a~~s~ has been killed by the Strike Team. */, iLocal_71, 0, 0, 0, 1, 0);
								}
								else
								{
									__LIB_35__.func_558("GC_TCK_73" /* GXT: ~s~~a~~s~ has been killed by Mercenaries. */, iLocal_71, 0, 0, 0, 1, 0);
								}
								MISC::SET_BIT(&iLocal_66, 10);
							}
						}
					}
				}
			}
			if (!BitTest(iLocal_66, 9))
			{
				if (BitTest(Local_63.f_1, 0))
				{
					if (BitTest(Local_63.f_3, 7))
					{
						if (PLAYER::PLAYER_ID() == iLocal_70 && PLAYER::PLAYER_ID() != iLocal_71)
						{
							if (__LIB_0__.func_154(iLocal_71, 0, 1))
							{
								if (Local_63.f_50)
								{
									__LIB_35__.func_558("HS_ESCAPED" /* GXT: ~s~~a~~s~ has escaped the Hit Squad. */, iLocal_71, 0, 0, 0, 1, 0);
								}
								else if (Local_63.f_52)
								{
									__LIB_35__.func_558("GO_ASS_ESC" /* GXT: ~s~~a~~s~ has escaped the Strike Team. */, iLocal_71, 0, 0, 0, 1, 0);
								}
								else
								{
									__LIB_35__.func_558("GC_TCK_75" /* GXT: ~s~~a~~s~ has escaped the Mercenaries. */, iLocal_71, 0, 0, 0, 1, 0);
								}
								MISC::SET_BIT(&iLocal_66, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_540()//Position - 0x165A3
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != Local_63.f_45)
	{
		if (__LIB_7__.func_122(Local_63.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= Local_63.f_45)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_63.f_45);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != Local_63.f_46)
	{
		if (__LIB_6__.func_977(Local_63.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false) <= Local_63.f_46)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_63.f_46);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) != Local_63.f_47)
	{
		if (__LIB_7__.func_692(Local_63.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(false) <= Local_63.f_47)
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_63.f_47);
			}
		}
	}
}

void func_549()//Position - 0x16894
{
	if (Local_63.f_50)
	{
		if (PLAYER::PLAYER_ID() == iLocal_70)
		{
			__LIB_9__.func_309(3);
		}
		else if (PLAYER::PLAYER_ID() == iLocal_71)
		{
			__LIB_9__.func_309(4);
		}
	}
	else if (Local_63.f_52)
	{
	}
	__LIB_0__.func_199();
}

void func_560(struct<21> Param0)//Position - 0x16A24
{
	__LIB_0__.func_673(32, Param0);
	__LIB_1__.func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_63, 56, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_65, 161, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!__LIB_0__.func_672())
	{
		func_264();
	}
	iLocal_69 = Param0.f_16;
	iLocal_70 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_17);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_70))
	{
	}
	iLocal_71 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_18);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_71))
	{
		iLocal_72 = MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_71));
	}
	if (__LIB_1__.func_298(iLocal_70, 3) && iLocal_69 == 1)
	{
		Local_63.f_50 = 1;
		if (__LIB_1__.func_298(iLocal_71, 4))
		{
			Local_63.f_51 = 1;
		}
	}
	if (iLocal_69 == 1)
	{
		if (__LIB_6__.func_340(iLocal_70))
		{
			Local_63.f_52 = 1;
			Local_63.f_53 = func_561(iLocal_70);
		}
	}
	Local_73 = { Param0.f_10 };
	if (iLocal_69 == 1)
	{
		if (PLAYER::PLAYER_ID() == iLocal_70)
		{
			MISC::SET_BIT(&Global_1835488, 0);
		}
	}
	Global_1922952 = 0;
	Global_1922953 = 0;
	if (iLocal_69 == 1)
	{
		Global_2815059.f_1766 = 0;
	}
	Local_65[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
}

var func_561(int iParam0)//Position - 0x16B32
{
	return Global_1853348[iParam0 /*834*/].f_180.f_4;
}

