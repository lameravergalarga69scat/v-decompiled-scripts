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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	int iLocal_38[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_39[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<6> Local_48 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_49[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_50 = 16;
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
	var uLocal_62 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_47 = 3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_0__.func_371();
	__LIB_0__.func_203(&uLocal_50, 8, 0, "TANNOY", 0, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_0__.func_371();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			switch (iLocal_36)
			{
				case 0:
					if (__LIB_0__.func_134())
					{
						iLocal_36 = 2;
					}
					else
					{
						if (iLocal_42)
						{
							iLocal_44 = 0;
							iLocal_45 = 0;
							iLocal_44 = 0;
							while (iLocal_44 < 8)
							{
								if (iLocal_43[iLocal_44])
								{
									if (func_38(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), iLocal_44 + 1, 0, 0))
									{
										PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
										iLocal_45++;
									}
									else
									{
										iLocal_43[iLocal_44] = 0;
									}
								}
								iLocal_44++;
							}
							if (iLocal_45 == 0)
							{
								iLocal_42 = 0;
							}
						}
						if (SYSTEM::TIMERA() > 125)
						{
							bLocal_37 = iLocal_46 + 1;
							if (__LIB_19__.func_779(bLocal_37, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!iLocal_38[iLocal_46])
								{
									iLocal_38[iLocal_46] = 1;
								}
								if (__LIB_30__.func_858(bLocal_37))
								{
									if (!iLocal_39[iLocal_46])
									{
										iLocal_39[iLocal_46] = 1;
									}
									Local_48 = { func_33(bLocal_37) };
									if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&Local_48)) == 0)
									{
										if (!Global_32174[bLocal_37])
										{
											__LIB_11__.func_647(bLocal_37, Global_32174[bLocal_37]);
										}
									}
								}
								else if (!Global_32174[bLocal_37])
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										bLocal_40 = false;
										switch (bLocal_37)
										{
											case 1:
												if (func_30() || func_29())
												{
													bLocal_40 = true;
												}
												break;
											case 2:
												if (func_27())
												{
													bLocal_40 = true;
												}
												break;
											case 7:
												if (func_25())
												{
													bLocal_40 = true;
												}
												break;
										}
										if (!bLocal_40)
										{
											if (func_38(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), bLocal_37, 0, 0))
											{
												if ((MISC::GET_GAME_TIMER() - iLocal_49[iLocal_46]) > 8000)
												{
													func_24();
												}
												else if (MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(200f, 200f, 200f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) - Vector(200f, 200f, 200f), true))
												{
													func_24();
												}
												else if (bLocal_37 != 4)
												{
													if (!iLocal_41)
													{
														if (__LIB_37__.func_799(&uLocal_50, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
														{
															iLocal_41 = 1;
														}
													}
												}
											}
											else
											{
												iLocal_49[iLocal_46] = MISC::GET_GAME_TIMER();
											}
										}
									}
									else
									{
										bLocal_40 = false;
										switch (bLocal_37)
										{
											case 1:
												if (func_30() || func_29())
												{
													bLocal_40 = true;
												}
												break;
											case 2:
												if (func_27())
												{
													bLocal_40 = true;
												}
												break;
											case 7:
												if (func_25())
												{
													bLocal_40 = true;
												}
												break;
										}
										if (!bLocal_40)
										{
											if (func_38(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), bLocal_37, 0, 0))
											{
												if (!bLocal_37 == 4 || (MISC::GET_GAME_TIMER() - iLocal_49[iLocal_46]) > 8000)
												{
													func_24();
												}
											}
											else
											{
												iLocal_49[iLocal_46] = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else
								{
									bLocal_40 = false;
									switch (bLocal_37)
									{
										case 1:
											if (func_30() || func_29())
											{
												bLocal_40 = true;
											}
											break;
										case 2:
											if (func_27())
											{
												bLocal_40 = true;
											}
											break;
										case 7:
											if (func_25())
											{
												bLocal_40 = true;
											}
											break;
									}
									if (!bLocal_40)
									{
										if (func_38(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), bLocal_37, 0, 0))
										{
											func_24();
										}
									}
								}
							}
							else if (iLocal_38[iLocal_46])
							{
								if (__LIB_30__.func_858(bLocal_37))
								{
									Local_48 = { func_33(bLocal_37) };
									if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&Local_48)) == 0)
									{
										__LIB_11__.func_647(bLocal_37, 0);
										iLocal_38[iLocal_46] = 0;
									}
								}
								else if (Global_32174[bLocal_37])
								{
									Global_32174[bLocal_37] = 0;
									iLocal_38[iLocal_46] = 0;
									iLocal_39[iLocal_46] = 0;
									iLocal_41 = 0;
								}
							}
							iLocal_46++;
							if (iLocal_46 == 8)
							{
								iLocal_46 = 0;
							}
							SYSTEM::SETTIMERA(0);
						}
					}
					break;
				case 1:
					break;
				case 2:
					if (!__LIB_0__.func_134())
					{
						iLocal_36 = 0;
					}
					break;
				}
		}
	}
}

void func_24()//Position - 0xD23
{
	switch (iLocal_46)
	{
		case 0:
			iLocal_47 = 2;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_47)
			{
			}
			break;
		case 1:
			if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) && MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(200f, 200f, 200f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) - Vector(200f, 200f, 200f), true))
			{
				iLocal_47 = 5;
			}
			else
			{
				iLocal_47 = 3;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_47)
			{
			}
			break;
		case 2:
			if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) && MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(200f, 200f, 200f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) - Vector(200f, 200f, 200f), true))
			{
				iLocal_47 = 5;
			}
			else
			{
				iLocal_47 = 4;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_47)
			{
			}
			break;
		case 3:
			iLocal_47 = 4;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_47)
			{
			}
			break;
		case 4:
			iLocal_47 = 4;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_47)
			{
			}
			break;
		case 5:
			iLocal_47 = 4;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_47)
			{
			}
			break;
		case 6:
			iLocal_47 = 2;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_47)
			{
			}
			break;
		case 7:
			iLocal_47 = 3;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_47)
			{
			}
			break;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_47)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_47, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	iLocal_43[iLocal_46] = 1;
	iLocal_42 = 1;
}

int func_25()//Position - 0xEBF
{
	switch (__LIB_18__.func_173())
	{
		case 0:
			if (__LIB_0__.func_368(65))
			{
				return 1;
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) > 0)
			{
				return 1;
			}
			break;
		case 1:
			if (__LIB_0__.func_368(66))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_0__.func_368(65))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_27()//Position - 0xF51
{
	switch (__LIB_18__.func_173())
	{
		case 0:
			if (__LIB_0__.func_61(12, 5))
			{
				return 1;
			}
			break;
		case 1:
			if (__LIB_0__.func_61(13, 5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_29()//Position - 0xFB1
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar0)) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("caddy")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("caddy2"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_30()//Position - 0x1016
{
	if (__LIB_10__.func_242(8) == __LIB_18__.func_173())
	{
		return 1;
	}
	return 0;
}

struct<6> func_33(bool bParam0)//Position - 0x1077
{
	return Global_32119[bParam0 /*6*/];
}

int func_38(struct<3> Param0, bool bParam1, int iParam2, bool bParam3)//Position - 0x123D
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bVar5 = false;
	switch (bParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			Var1[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			Var1[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			Var1[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			Var1[0 /*3*/] = { -1816.9539f, -2768.8933f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.7476f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			Var1[2 /*3*/] = { -1011.08105f, -3086.9038f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.0082f, -2616.2705f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.6105f, -2226.7634f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			Var1[5 /*3*/] = { -1136.9174f, -2617.9546f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			Var1[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			Var1[7 /*3*/] = { -1955.2982f, -3010.4314f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.2683f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			Var1[9 /*3*/] = { -1259.6486f, -3463.4863f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.7148f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			Var1[11 /*3*/] = { -1685.6256f, -2720.3635f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			Var1[12 /*3*/] = { -1110.1978f, -3493.6172f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			Var1[0 /*3*/] = { -2029.7765f, 2845.0833f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			Var1[1 /*3*/] = { -2009.1815f, 2879.8352f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			Var1[2 /*3*/] = { -2033.9279f, 3089.0488f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.7909f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			Var1[4 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			Var1[5 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			Var1[6 /*3*/] = { -2715.8708f, 3269.9155f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			Var1[7 /*3*/] = { -1977.5688f, 3330.8882f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.4412f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			Var1[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			Var1[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			Var1[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			Var1[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		case 4:
			Var0[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.5753f, 2535.0596f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			Var1[1 /*3*/] = { 1716.9603f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			Var1[2 /*3*/] = { 1650.0776f, 2515.9226f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			Var1[3 /*3*/] = { 1698.5546f, 2460.2078f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			Var1[4 /*3*/] = { 1718.8477f, 2589.1616f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			Var1[5 /*3*/] = { 1774.8124f, 2679.4187f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			Var1[6 /*3*/] = { 1657.2083f, 2595.4844f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.1647f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.8551f, 2705.0369f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			Var1[9 /*3*/] = { 1783.1143f, 2606.7832f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.1936f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.8008f, 3694.3618f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			Var1[2 /*3*/] = { 3650.9143f, 3766.1516f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		case 6:
			Var0[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			Var1[0 /*3*/] = { 523.22894f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			Var1[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		case 7:
			Var0[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			Var1[0 /*3*/] = { -1187.8108f, -477.50366f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			Var1[1 /*3*/] = { -1215.7959f, -464.82806f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			Var1[2 /*3*/] = { -1013.3932f, -475.20575f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.3325f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			Var1[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			Var1[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			Var1[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			Var1[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], bVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

