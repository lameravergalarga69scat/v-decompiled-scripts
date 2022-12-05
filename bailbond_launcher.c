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
	struct<7> Local_43 = { 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 16;
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
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	bool bLocal_216 = 0;
	int iLocal_217 = 0;
	char* sLocal_218 = NULL;
	int iLocal_219 = 0;
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
	sLocal_218 = "";
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_0__.func_513(22);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_259();
	}
	func_251();
	while (true)
	{
		func_248();
		switch (Global_113386.f_24986.f_2)
		{
			case 0:
				if (func_247())
				{
					if (!func_245())
					{
						if (func_223(4, 62, 2, -1, 0))
						{
							if (func_220(Local_43.f_4, Local_43.f_5))
							{
								if (Local_43.f_5)
								{
									__LIB_40__.func_942(2, 95, 5000, 0, 0);
								}
								iLocal_212 = __LIB_13__.func_95();
								__LIB_32__.func_437(&iLocal_212, 0, 0, 0, 10, 0, 0);
								Global_113386.f_24986.f_3 = iLocal_212;
								MISC::CLEAR_BIT(&(Global_113386.f_24986), 9);
								Global_113386.f_24986.f_2 = 1;
							}
						}
						else
						{
							SYSTEM::WAIT(2000);
						}
					}
					else
					{
						SYSTEM::WAIT(2000);
					}
				}
				else
				{
					SYSTEM::WAIT(2000);
				}
				break;
			case 1:
				if (__LIB_18__.func_173() == 2)
				{
					func_173(&Local_43, &uLocal_47);
					func_165(Local_43.f_4);
					if (!BitTest(Global_113386.f_24986, 8))
					{
						if (!func_245())
						{
							MISC::SET_BIT(&(Global_113386.f_24986), 8);
						}
						else
						{
							SYSTEM::WAIT(2000);
						}
					}
					else if (func_245())
					{
						if (__LIB_38__.func_35(0))
						{
							if (func_149(&(Local_43.f_6)))
							{
								func_147(Local_43.f_4);
								if (!__LIB_0__.func_294())
								{
									__LIB_42__.func_734(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
								}
								Global_113386.f_24986.f_2 = 2;
							}
						}
						else
						{
							if (BitTest(Global_113386.f_24986, 8))
							{
								MISC::CLEAR_BIT(&(Global_113386.f_24986), 8);
							}
							SYSTEM::WAIT(2000);
						}
					}
					else
					{
						func_74(Local_43.f_4);
						SYSTEM::WAIT(2000);
					}
				}
				else
				{
					if (BitTest(Global_113386.f_24986, 8))
					{
						MISC::CLEAR_BIT(&(Global_113386.f_24986), 8);
					}
					SYSTEM::WAIT(4000);
				}
				break;
			case 2:
				if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_213))
				{
					func_28(Global_112095);
				}
				break;
			case 3:
				if (__LIB_32__.func_438(Global_113386.f_24986.f_3))
				{
					Global_113386.f_24986.f_2 = 1;
				}
				break;
			case 4:
				if (iLocal_219 == 0)
				{
					if (__LIB_32__.func_438(Global_113386.f_24986.f_3))
					{
						Global_113386.f_24986.f_2 = 0;
					}
				}
				break;
			case 5:
				if (iLocal_219 == 0)
				{
					if (__LIB_32__.func_438(Global_113386.f_24986.f_3))
					{
						if (func_247())
						{
							if (func_223(4, 62, 2, -1, 0))
							{
								if (func_4())
								{
									__LIB_40__.func_942(2, 95, 5000, 0, 0);
									__LIB_0__.func_512(22);
									__LIB_0__.func_533();
									func_259();
								}
							}
							else
							{
								SYSTEM::WAIT(2000);
							}
						}
						else
						{
							SYSTEM::WAIT(2000);
						}
					}
					else
					{
						SYSTEM::WAIT(2000);
					}
				}
				break;
			case 6:
				if (iLocal_219 == 0)
				{
					__LIB_0__.func_512(22);
					func_259();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_4()//Position - 0x3FC
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	iVar0 = 79;
	sVar1 = "BBONDS_DMAIL_K5" /* GXT: I can only assume it was you, Trevor, who sent that malefactor to hell early?~n~~a~ */;
	sVar2 = "BBONDS_DMAIL_C5" /* GXT: Well, in any case, I regret to inform you that our partnership has come to an end.  I've decided to get out of this distasteful business and strike out in search of pursuits more savoury.  You'll always have a rare and special place in my heart.  Good luck and goodbye. */;
	if (func_14(26, iVar0, 1))
	{
		__LIB_39__.func_903(26, sVar1, 0);
		__LIB_11__.func_788(26, sVar2);
		__LIB_38__.func_126(26);
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, bool bParam2)//Position - 0x134D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_11__.func_789(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_53557[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_53557[iVar0 /*203*/].f_2 = iParam0;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_53557[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53557[iVar0 /*203*/].f_4[iVar1] == Global_44257[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53557[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53557[iVar0 /*203*/].f_4[Global_53557[iVar0 /*203*/].f_3] = Global_44257[iParam1 /*12*/].f_3;
			Global_53557[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53557[iVar0 /*203*/].f_4[iVar1] == Global_44257[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53557[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53557[iVar0 /*203*/].f_4[Global_53557[iVar0 /*203*/].f_3] = Global_44257[iParam1 /*12*/].f_2;
			Global_53557[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_53557[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			__LIB_11__.func_788(Global_53557[iVar0 /*203*/].f_4[iVar1], Global_53557[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_28(int iParam0)//Position - 0x1E62
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
		case 2:
			MISC::SET_BIT(&(Global_113386.f_24986), __LIB_12__.func_665(Local_43.f_4));
			if (iParam0 == 1)
			{
				func_72(0);
				iVar0 = 8;
				MISC::SET_BIT(&(Global_113386.f_24986), __LIB_28__.func_687(Local_43.f_4));
			}
			else
			{
				func_72(1);
				iVar0 = 4;
				MISC::CLEAR_BIT(&(Global_113386.f_24986), __LIB_28__.func_687(Local_43.f_4));
				__LIB_40__.func_942(2, 95, 10000, 0, 0);
				if (Global_94618 == 0)
				{
					__LIB_35__.func_525(30, 1);
				}
			}
			iLocal_219 = 1;
			sLocal_218 = func_56(Local_43.f_4);
			__LIB_35__.func_897();
			__LIB_0__.func_56(&(Local_43.f_6));
			if (func_36())
			{
				if (BitTest(Global_113386.f_24986, __LIB_28__.func_687(Local_43.f_4)))
				{
					iLocal_212 = __LIB_13__.func_95();
					__LIB_32__.func_437(&iLocal_212, 0, 0, iVar0, 0, 0, 0);
					Global_113386.f_24986.f_3 = iLocal_212;
					Global_113386.f_24986.f_2 = 5;
					__LIB_0__.func_533();
				}
				else
				{
					Global_113386.f_24986.f_2 = 6;
					__LIB_0__.func_533();
				}
			}
			else
			{
				Global_113386.f_24986.f_1 = func_35();
				MISC::CLEAR_BIT(&(Global_113386.f_24986), 8);
				func_30();
				iLocal_212 = __LIB_13__.func_95();
				__LIB_32__.func_437(&iLocal_212, 0, 0, iVar0, 0, 0, 0);
				Global_113386.f_24986.f_3 = iLocal_212;
				Global_113386.f_24986.f_2 = 4;
				__LIB_0__.func_533();
			}
			if (iParam0 != 1)
			{
				func_29();
			}
			break;
		case 3:
			if (Global_100441 == 10)
			{
				func_147(Local_43.f_4);
			}
			else if (Global_100441 == 13)
			{
				__LIB_35__.func_897();
				__LIB_0__.func_56(&(Local_43.f_6));
				MISC::CLEAR_BIT(&(Global_113386.f_24986), 8);
				iLocal_212 = __LIB_13__.func_95();
				iVar0 = 8;
				__LIB_32__.func_437(&iLocal_212, 0, 0, iVar0, 0, 0, 0);
				Global_113386.f_24986.f_3 = iLocal_212;
				Global_113386.f_24986.f_2 = 3;
				__LIB_35__.func_897();
				__LIB_0__.func_533();
			}
			break;
		case 0:
			__LIB_35__.func_897();
			__LIB_0__.func_56(&(Local_43.f_6));
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 8);
			Global_113386.f_24986.f_2 = 1;
			break;
	}
}

void func_29()//Position - 0x2059
{
	char cVar0[24];
	StringCopy(&cVar0, "Maude_PostBailBond", 24);
	MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(&cVar0);
	SCRIPT::REQUEST_SCRIPT(&cVar0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(&cVar0))
	{
		SCRIPT::REQUEST_SCRIPT(&cVar0);
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT(&cVar0, 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
}

void func_30()//Position - 0x209D
{
	int iVar0;
	iLocal_213 = 0;
	Local_43.f_4 = Global_113386.f_24986.f_1;
	Local_43 = { func_34(Local_43.f_4) };
	Local_43.f_3 = func_33(Local_43.f_4);
	Local_43.f_6 = -1;
	iVar0 = Global_113386.f_24986.f_1;
	iVar0 = (iVar0 - 1);
	if (iVar0 >= 0 && BitTest(Global_113386.f_24986, __LIB_28__.func_687(iVar0)))
	{
		Local_43.f_5 = 1;
	}
	else
	{
		Local_43.f_5 = 0;
	}
	Local_43.f_7 = __LIB_20__.func_258(26, __LIB_10__.func_664(Local_43.f_4), 0);
}

float func_33(int iParam0)//Position - 0x2244
{
	switch (iParam0)
	{
		case 0:
			return 150f;
		case 1:
			return 150f;
		case 2:
			return 150f;
		case 3:
			return 150f;
		default:
	}
	return 150f;
}

Vector3 func_34(int iParam0)//Position - 0x2290
{
	switch (iParam0)
	{
		case 0:
			return 2956.3489f, 2795.9553f, 39.9217f;
		case 1:
			return 162.5572f, 2289.1577f, 93.1489f;
		case 2:
			return 515.5f, 5494.33f, 766.77f;
		case 3:
			return 1427.9722f, 6351.139f, 22.9853f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()//Position - 0x2302
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 <= (4 - 1))
	{
		if (!BitTest(Global_113386.f_24986, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

int func_36()//Position - 0x2332
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 <= (4 - 1))
	{
		if (!BitTest(Global_113386.f_24986, bVar0))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

char* func_56(int iParam0)//Position - 0x2CFD
{
	switch (iParam0)
	{
		case 0:
			return "BBS_BJ1";
			break;
		case 1:
			return "BBS_BJ2";
			break;
		case 2:
			return "BBS_BJ3";
			break;
		case 3:
			return "BBS_BJ4";
			break;
		default:
			break;
	}
	return "";
}

void func_72(bool bParam0)//Position - 0x3096
{
	iLocal_219 = 1;
	bLocal_216 = bParam0;
}

void func_74(int iParam0)//Position - 0x30DD
{
	int iVar0;
	if (!BitTest(Global_113386.f_24986, 9))
	{
		if (__LIB_32__.func_438(Global_113386.f_24986.f_3))
		{
			if (func_247())
			{
				if (func_223(4, 62, 2, -1, 0))
				{
					iVar0 = func_75(iParam0);
					if (func_14(26, iVar0, 0))
					{
						MISC::SET_BIT(&(Global_113386.f_24986), 9);
					}
				}
			}
		}
	}
}

int func_75(int iParam0)//Position - 0x3138
{
	switch (iParam0)
	{
		case 0:
			return 80;
		case 1:
			return 81;
		case 2:
			return 82;
		case 3:
			return 83;
		default:
	}
	return 80;
}

void func_147(int iParam0)//Position - 0xA8E6
{
	struct<6> Var0;
	Var0 = { func_148(iParam0) };
	SCRIPT::REQUEST_SCRIPT(&Var0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(&Var0))
	{
		SCRIPT::REQUEST_SCRIPT(&Var0);
		SYSTEM::WAIT(0);
	}
	iLocal_213 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Var0, &Local_43, 8, 51000);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Var0);
}

struct<6> func_148(int iParam0)//Position - 0xA92C
{
	struct<6> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BailBond1", 24);
			break;
		case 1:
			StringCopy(&Var0, "BailBond2", 24);
			break;
		case 2:
			StringCopy(&Var0, "BailBond3", 24);
			break;
		case 3:
			StringCopy(&Var0, "BailBond4", 24);
			break;
		default:
			break;
	}
	return Var0;
}

int func_149(var uParam0)//Position - 0xA986
{
	int iVar0;
	iVar0 = __LIB_18__.func_219(uParam0, 0, 4, 0, 0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void func_165(int iParam0)//Position - 0xB61A
{
	if (Global_113386.f_24986.f_1 == 0)
	{
		if (!__LIB_0__.func_67(14))
		{
			if (!iLocal_45)
			{
				if (__LIB_20__.func_258(26, __LIB_10__.func_664(iParam0), 0))
				{
					__LIB_18__.func_203("AM_H_BAILBONDS" /* GXT: Trevor can do a bail bond job by visiting a suspect's last known location. A larger reward is given if a suspect is captured alive. */, 1, 0, -1, 10000, 4, 0, 0, 0);
					iLocal_45 = 1;
				}
			}
			else
			{
				switch (__LIB_11__.func_512("AM_H_BAILBONDS" /* GXT: Trevor can do a bail bond job by visiting a suspect's last known location. A larger reward is given if a suspect is captured alive. */))
				{
					case 2:
						iLocal_45 = 0;
						break;
					case 1:
						__LIB_0__.func_460(14);
						break;
					}
				}
			}
	}
}

void func_173(var uParam0, var uParam1)//Position - 0xBA7C
{
	if (!uParam0->f_7)
	{
		if (__LIB_20__.func_258(26, __LIB_10__.func_664(uParam0->f_4), 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((!__LIB_0__.func_75() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID())) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__.func_203(uParam1, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					if (__LIB_37__.func_799(uParam1, __LIB_10__.func_662(uParam0->f_4), __LIB_10__.func_661(uParam0->f_4), 4, 0, 0, 0))
					{
						uParam0->f_7 = 1;
					}
				}
				else
				{
					uParam0->f_7 = 1;
				}
			}
			else
			{
				uParam0->f_7 = 1;
			}
		}
	}
}

int func_220(int iParam0, bool bParam1)//Position - 0xD7A8
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	iVar0 = __LIB_10__.func_664(iParam0);
	sVar1 = func_222(iParam0, bParam1);
	sVar2 = func_221(iParam0);
	if (func_14(26, iVar0, 1))
	{
		__LIB_39__.func_903(26, sVar1, 0);
		__LIB_11__.func_788(26, sVar2);
		__LIB_38__.func_126(26);
		return 1;
	}
	return 0;
}

char* func_221(int iParam0)//Position - 0xD7F2
{
	switch (iParam0)
	{
		case 0:
			return "BBONDS_DMAIL_C1" /* GXT: I got a tip-off this particular reprobate has been hiding out at the quarry. Slippery character by all accounts so you might have a runner on your hands.~nrt~~n~<img src='img://Email_Quarry_Bail_Bond/Target_Quarry' height="190" width="322" hspace='5' /> ~n~Last known location:~n~<img src='img://Email_Quarry_Bail_Bond/Location_Quarry' height="190" width="322" hspace='5' />~nrt~ */;
		case 1:
			return "BBONDS_DMAIL_C2" /* GXT: If my sources serve me correctly, this pillar of society has been spotted hiding out in an old barn with a few of his cronies. He's a meth dealer with a history of violence so you two should get along just fine :)~nrt~~n~<img src='img://Email_AbandonedFarm_Bail_Bond/Target_AbandonedFarm' height="190" width="322" hspace='5' />~n~Last known location:~n~<img src='img://Email_AbandonedFarm_Bail_Bond/Location_AbandonedFarm' height="190" width="322" hspace='5' />~nrt~ */;
		case 2:
			return "BBONDS_DMAIL_C3" /* GXT: This next feller's the worst kind of criminal there is – a banker. And looking at some of the videos he's posted online, he fancies himself as a bit of an adrenaline junkie and internet celebrity on the side.  So he'll be a real pleasure to put behind bars.~nrt~~n~<img src='img://email_mountain_bail_bond/Target_Mountains' height="190" width="322" hspace='5' />~n~Last known location:~n~<img src='img://email_mountain_bail_bond/Location_Mountains' height="190" width="322" hspace='5' />~nrt~ */;
		case 3:
			return "BBONDS_DMAIL_C4" /* GXT: This old-timer's one of them crazy anti-establishment types, lives outside the system in some kind of hobo camp.  Might look harmless but watch yourself, he's got a couple of screws loose alright.~nrt~~n~<img src='img://Email_HoboCamp_Bail_Bond/Target_Hobocamp' height="190" width="322" hspace='5' /> ~n~Last known location:~n~<img src='img://Email_HoboCamp_Bail_Bond/Location_HoboCamp' height="190" width="322" hspace='5' />~nrt~ */;
		default:
	}
	return "NULL";
}

char* func_222(int iParam0, bool bParam1)//Position - 0xD837
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "BBONDS_DMAIL_K1" /* GXT: Hey Trevor~n~~a~ */;
			}
			else
			{
				return "BBONDS_DMAIL_N1" /* GXT: Hey Trevor~n~~a~ */;
			}
			break;
		case 1:
			if (bParam1)
			{
				return "BBONDS_DMAIL_K2" /* GXT: So, Trevor, did you miss the part where I said bring the fugitive back to me? Do you think you might be able to deliver this feller in one piece?~n~~a~ */;
			}
			else
			{
				return "BBONDS_DMAIL_N2" /* GXT: Hi Handsome~n~~a~ */;
			}
			break;
		case 2:
			if (bParam1)
			{
				return "BBONDS_DMAIL_K3" /* GXT: I can't say I wasn't disappointed by the news that you disposed of our fugitive instead of returning him to my care.  Do you think you could resist the temptation to dispense your own justice this time?~n~~a~ */;
			}
			else
			{
				return "BBONDS_DMAIL_N3" /* GXT: Ok Trevor~n~~a~ */;
			}
			break;
		case 3:
			if (bParam1)
			{
				return "BBONDS_DMAIL_K4" /* GXT: What happened? Did you lose your head in the heat of the moment? As it's you, I'm going to give you one more chance.  But can you please try to bring this one in alive?~n~~a~ */;
			}
			else
			{
				return "BBONDS_DMAIL_N4" /* GXT: Me again~n~~a~ */;
			}
			break;
	}
	return "NULL";
}

int func_223(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xD8C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar6[2];
	int iVar7;
	int iVar8;
	int iVar9;
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (__LIB_1__.func_414())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 0;
	}
	if (__LIB_9__.func_603() && iParam2 < 4)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_7__.func_320(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(iParam0, __LIB_18__.func_173()) && !BitTest(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_78317)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (Global_96448)
	{
		return 0;
	}
	if ((__LIB_0__.func_198() || (Global_23011.f_4 && Global_23011.f_104 == 4)) || __LIB_0__.func_200())
	{
		return 0;
	}
	if (BitTest(iParam4, 18))
	{
		if (!BitTest(iParam0, __LIB_18__.func_173()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			return 0;
		}
		if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
		{
			return 0;
		}
		if (Global_97369)
		{
			return 0;
		}
		if (__LIB_40__.func_628(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (BitTest(iParam0, __LIB_18__.func_173()))
			{
				iVar1 = __LIB_20__.func_260(__LIB_18__.func_173());
				iVar2 = __LIB_20__.func_260(iParam1);
				iVar3 = __LIB_9__.func_604(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_113386.f_18103.f_175[iVar3 /*19*/].f_8 == 1 || Global_113386.f_18103.f_175[iVar3 /*19*/].f_8 == 2)
					{
						if (__LIB_0__.func_516(&(Global_113386.f_18103.f_175[iVar3 /*19*/].f_5)))
						{
							if (__LIB_5__.func_736(&(Global_113386.f_18103.f_175[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 2)
	{
		return 0;
	}
	if (__LIB_0__.func_511())
	{
		return 0;
	}
	if (BitTest(iParam4, 3))
	{
		if (Global_112433)
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 0;
			}
		}
		if (Global_112096.f_19 != 0)
		{
			return 0;
		}
		if (Global_43052 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (func_225(PLAYER::PLAYER_PED_ID(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = __LIB_18__.func_173();
	if (__LIB_0__.func_43(iVar4))
	{
		PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar6[0] = __LIB_6__.func_757(1);
						iVar6[1] = __LIB_6__.func_757(2);
						break;
					case 1:
						iVar6[0] = __LIB_6__.func_757(0);
						iVar6[1] = __LIB_6__.func_757(2);
						break;
					case 2:
						iVar6[0] = __LIB_6__.func_757(0);
						iVar6[1] = __LIB_6__.func_757(1);
						break;
				}
				break;
			case 5:
				iVar6[0] = __LIB_6__.func_757(1);
				iVar6[1] = __LIB_6__.func_757(2);
				break;
			case 6:
				iVar6[0] = __LIB_2__.func_108(12);
				iVar6[1] = __LIB_6__.func_757(1);
				break;
			case 7:
				iVar6[0] = __LIB_2__.func_108(12);
				iVar6[1] = __LIB_6__.func_757(0);
				break;
			case 8:
				iVar6[0] = __LIB_6__.func_757(0);
				iVar6[1] = __LIB_6__.func_757(1);
				break;
			case 9:
				iVar6[0] = __LIB_6__.func_757(0);
				iVar6[1] = __LIB_6__.func_757(2);
				break;
			case 10:
				iVar6[0] = __LIB_2__.func_108(23);
				iVar6[1] = __LIB_6__.func_757(0);
				break;
			case 11:
				iVar6[0] = __LIB_2__.func_108(23);
				iVar6[1] = __LIB_6__.func_757(0);
				break;
			default:
				if (__LIB_0__.func_43(iParam1))
				{
					iVar6[0] = __LIB_6__.func_757(iParam1);
				}
				else
				{
					iVar6[0] = __LIB_2__.func_108(iParam1);
				}
				iVar6[1] = 0;
				break;
		}
		iVar7 = 0;
		while (iVar7 < 2)
		{
			if (iVar6[iVar7] != 0)
			{
				iVar8 = 0;
				while (iVar8 < 16)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar5[iVar8]))
					{
						if (ENTITY::GET_ENTITY_MODEL(uVar5[iVar8]) == iVar6[iVar7])
						{
							if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar8], false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar5[iVar8], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
									{
										return 0;
									}
								}
							}
							else
							{
								return 0;
							}
						}
					}
					iVar8++;
				}
				iVar9 = 0;
				switch (iVar6[iVar7])
				{
					case joaat("Player_Zero"):
						iVar9 = Global_97919[0];
						break;
					case joaat("Player_One"):
						iVar9 = Global_97919[1];
						break;
					case joaat("Player_Two"):
						iVar9 = Global_97919[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar9, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar6[iVar7])
				{
					case joaat("Player_Zero"):
						iVar9 = Global_100366[0];
						break;
					case joaat("Player_One"):
						iVar9 = Global_100366[1];
						break;
					case joaat("Player_Two"):
						iVar9 = Global_100366[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar9, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
						{
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0, int iParam1, float fParam2)//Position - 0xDED6
{
	struct<5> Var0;
	float fVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { Global_43053[iParam1 /*5*/] };
		fVar1 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar1 = fParam2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var0, true) < fVar1)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_225(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

int func_245()//Position - 0xFD50
{
	struct<3> Var0;
	float fVar1;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	Var0 = { __LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()) };
	fVar1 = Local_43.f_3;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				fVar1 = (fVar1 + 50f);
				if (fVar1 > 200f)
				{
					fVar1 = 200f;
				}
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, Local_43) <= (fVar1 * fVar1))
	{
		return 1;
	}
	return 0;
}

int func_247()//Position - 0xFDF8
{
	struct<3> Var0;
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	Var0 = { __LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()) };
	if (SYSTEM::VDIST2(Var0, 2727.58f, 4144.19f, 43.95f) >= (50f * 50f))
	{
		return 1;
	}
	return 0;
}

void func_248()//Position - 0xFE46
{
	char* sVar0;
	if (iLocal_219 != 0)
	{
		if (!func_250())
		{
			iLocal_219 = 4;
		}
		switch (iLocal_219)
		{
			case 1:
				iLocal_214 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
				iLocal_219 = 2;
				break;
			case 2:
				if (bLocal_216)
				{
					sVar0 = "BBS_MPD";
				}
				else
				{
					sVar0 = "BBS_MPK";
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_214))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_214, "SHOW_SHARD_MIDSIZED_MESSAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BBS_MP");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sLocal_218);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_217 = MISC::GET_GAME_TIMER();
					iLocal_219 = 3;
				}
				break;
			case 3:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_214))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_214, 255, 255, 255, 255, 0);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					if (!iLocal_215)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
						iLocal_215 = 1;
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_217) > 7000)
				{
					if (!iLocal_46)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_214, "SHARD_ANIM_OUT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_46 = 1;
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_217) > 7500)
				{
					iLocal_219 = 4;
				}
				break;
			case 4:
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_214);
				iLocal_46 = 0;
				func_249();
				break;
			}
	}
}

void func_249()//Position - 0xFF6A
{
	iLocal_219 = 0;
	iLocal_215 = 0;
	bLocal_216 = false;
	iLocal_217 = 0;
}

int func_250()//Position - 0xFF7E
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		return 0;
	}
	if (__LIB_18__.func_173() != 2)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	return 1;
}

void func_251()//Position - 0xFFCD
{
	if (Global_113386.f_24986.f_1 == 0)
	{
		if (Global_113386.f_24986.f_2 == -1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 0);
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 1);
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 2);
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 3);
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 4);
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 5);
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 6);
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 7);
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 8);
			MISC::CLEAR_BIT(&(Global_113386.f_24986), 9);
			iLocal_212 = __LIB_13__.func_95();
			__LIB_32__.func_437(&iLocal_212, 0, 0, 1, 0, 0, 0);
			Global_113386.f_24986.f_3 = iLocal_212;
			Global_113386.f_24986.f_2 = 4;
		}
	}
	if (Global_113386.f_24986.f_2 == 2)
	{
		Global_113386.f_24986.f_2 = 1;
	}
	if (Global_113386.f_24986.f_2 == 1)
	{
		MISC::CLEAR_BIT(&(Global_113386.f_24986), 8);
	}
	func_249();
	func_30();
	__LIB_24__.func_951(62, 2, 0);
}

void func_259()//Position - 0x103B4
{
	if (__LIB_0__.func_1("AM_H_BAILBONDS" /* GXT: Trevor can do a bail bond job by visiting a suspect's last known location. A larger reward is given if a suspect is captured alive. */))
	{
		HUD::CLEAR_HELP(true);
	}
	__LIB_0__.func_202(&uLocal_47, 2);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_214);
	if (Local_43.f_6 != -1)
	{
		__LIB_0__.func_56(&(Local_43.f_6));
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

