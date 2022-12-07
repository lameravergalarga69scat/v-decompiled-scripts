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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
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
	iLocal_50 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_51 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (!__LIB_6__::func_763(0))
		{
			if (Global_43600 == -1)
			{
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
		iVar0 = 0;
		while (iVar0 < 235)
		{
			if (Global_113386.f_8613[iVar0])
			{
				if (MISC::GET_GAME_TIMER() >= Global_113386.f_8613.f_236[iVar0])
				{
					switch (iVar0)
					{
						case 1:
							func_583();
							break;
						case 4:
							func_581();
							break;
						case 5:
							func_580();
							break;
						case 19:
							func_579();
							break;
						case 6:
							func_578();
							break;
						case 7:
							func_577();
							break;
						case 8:
							func_576();
							break;
						case 9:
							func_575();
							break;
						case 11:
							func_574();
							break;
						case 12:
							func_573();
							break;
						case 13:
							func_572();
							break;
						case 14:
							func_571();
							break;
						case 15:
							func_570();
							break;
						case 16:
							func_569();
							break;
						case 17:
							func_568();
							break;
						case 18:
							func_567();
							break;
						case 20:
							func_566();
							break;
						case 21:
							func_565();
							break;
						case 23:
							func_564();
							break;
						case 39:
							func_563();
							break;
						case 22:
							func_562();
							break;
						case 24:
							func_561();
							break;
						case 25:
							__LIB_0__::func_371();
							break;
						case 27:
							func_559();
							break;
						case 28:
							func_558();
							break;
						case 29:
							func_557();
							break;
						case 30:
							func_555();
							break;
						case 31:
							func_554();
							break;
						case 33:
							func_552();
							break;
						case 32:
							func_507(0, 1);
							break;
						case 160:
							func_507(1, 1);
							break;
						case 161:
							func_507(2, 1);
							break;
						case 162:
							func_507(3, 1);
							break;
						case 34:
							func_486();
							break;
						case 35:
							func_485();
							break;
						case 36:
							func_483(0);
							break;
						case 37:
							func_483(1);
							break;
						case 38:
							func_483(2);
							break;
						case 40:
							func_482();
							break;
						case 41:
							func_481();
							break;
						case 42:
							func_480();
							break;
						case 43:
							func_479();
							break;
						case 44:
							func_478();
							break;
						case 45:
							func_443();
							break;
						case 46:
							__LIB_11__::func_906(6, 140);
							__LIB_11__::func_906(7, 140);
							break;
						case 47:
							__LIB_11__::func_906(6, 141);
							__LIB_11__::func_906(7, 141);
							break;
						case 54:
							func_441();
							break;
						case 48:
							func_440();
							break;
						case 49:
							func_439();
							break;
						case 50:
							func_438();
							break;
						case 51:
							func_419();
							break;
						case 52:
							func_418();
							break;
						case 53:
							func_417();
							break;
						case 55:
							func_416();
							break;
						case 56:
							func_415();
							break;
						case 57:
							__LIB_0__::func_367(1);
							break;
						case 58:
							__LIB_0__::func_367(0);
							break;
						case 59:
							__LIB_6__::func_770(18, 1);
							__LIB_6__::func_770(19, 1);
							break;
						case 60:
							__LIB_6__::func_770(15, 1);
							__LIB_6__::func_770(16, 1);
							__LIB_6__::func_770(17, 1);
							break;
						case 61:
							__LIB_6__::func_770(12, 1);
							__LIB_6__::func_770(13, 1);
							break;
						case 62:
							__LIB_18__::func_203("AM_H_GARAGEP" /* GXT: Garage properties are now available to purchase at ~BLIP_GARAGE_FOR_SALE~~n~These will allow storage of vehicles purchased from websites or driven into the garage. */, 1, 0, -1, 10000, 7, 0, 0, 0);
							__LIB_6__::func_770(21, 1);
							__LIB_6__::func_770(22, 1);
							__LIB_6__::func_770(23, 1);
							break;
						case 63:
							func_408();
							break;
						case 64:
							func_407();
							break;
						case 65:
							func_404();
							break;
						case 66:
							func_387();
							break;
						case 67:
							func_386();
							break;
						case 68:
							func_385();
							break;
						case 69:
							func_384();
							break;
						case 70:
							func_383();
							break;
						case 71:
							func_382();
							break;
						case 72:
							func_380();
							break;
						case 73:
							func_379();
							break;
						case 74:
							func_378();
							break;
						case 75:
							func_377();
							break;
						case 76:
							func_376();
							break;
						case 77:
							func_375();
							break;
						case 78:
							func_374();
							break;
						case 79:
							func_373();
							break;
						case 80:
							func_359();
							break;
						case 81:
							func_358();
							AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_16_SILVERLAKE" /* GXT: Radio Mirror Park */, "MIRRORPARK_LOCKED");
							MISC::SET_BIT(&(Global_113386.f_10016.f_25), 5);
							break;
						case 82:
							func_357();
							break;
						case 83:
							func_356();
							break;
						case 84:
							func_354();
							break;
						case 86:
							func_350();
							break;
						case 87:
							func_349();
							break;
						case 88:
							func_348();
							func_555();
							break;
						case 89:
							func_347();
							break;
						case 90:
							__LIB_42__::func_342(1);
							break;
						case 91:
							func_345();
							break;
						case 92:
							func_344();
							break;
						case 93:
							func_343();
							break;
						case 94:
							func_340();
							break;
						case 95:
							func_338();
							break;
						case 96:
							func_337();
							break;
						case 97:
							func_336();
							break;
						case 98:
							func_331();
							break;
						case 99:
							__LIB_6__::func_770(20, 1);
							__LIB_0__::func_60(20, 5, 1);
							__LIB_6__::func_770(14, 1);
							__LIB_0__::func_60(14, 5, 1);
							break;
						case 100:
							func_329();
							break;
						case 101:
							func_328();
							break;
						case 102:
							func_322();
							break;
						case 103:
							func_321();
							break;
						case 104:
							func_320();
							break;
						case 105:
							func_319();
							break;
						case 106:
							func_317();
							break;
						case 107:
							func_316();
							break;
						case 108:
							func_314();
							break;
						case 109:
							func_313();
							break;
						case 110:
							func_312();
							break;
						case 111:
							func_311();
							break;
						case 112:
							func_305();
							break;
						case 113:
							func_304();
							break;
						case 114:
							func_298();
							break;
						case 115:
							func_283();
							break;
						case 117:
							func_282();
							break;
						case 118:
							func_281();
							break;
						case 116:
							func_280();
							break;
						case 120:
							func_279();
							break;
						case 121:
							func_277();
							break;
						case 122:
							func_274();
							break;
						case 123:
							func_273();
							break;
						case 124:
							func_271();
							break;
						case 125:
							func_270();
							break;
						case 126:
							func_269();
							break;
						case 127:
							func_268();
							break;
						case 128:
							func_267();
							break;
						case 129:
							func_266();
							break;
						case 130:
							func_265();
							break;
						case 131:
							__LIB_0__::func_460(45);
							break;
						case 133:
							func_263(0);
							break;
						case 134:
							func_263(1);
							break;
						case 135:
							func_262(0);
							break;
						case 136:
							func_262(1);
							break;
						case 137:
							__LIB_0__::func_460(50);
							break;
						case 138:
							__LIB_0__::func_460(51);
							break;
						case 139:
							__LIB_0__::func_460(54);
							break;
						case 140:
							func_261(0);
							break;
						case 141:
							func_261(1);
							break;
						case 142:
							__LIB_11__::func_511();
							break;
						case 143:
							func_258();
							break;
						case 144:
							func_256();
							break;
						case 145:
							func_255();
							break;
						case 146:
							func_254();
							break;
						case 147:
							func_252();
							break;
						case 148:
							__LIB_0__::func_503(10, 1);
							break;
						case 149:
							func_250();
							break;
						case 150:
							func_249();
							break;
						case 151:
							func_248();
							break;
						case 152:
							func_247();
							break;
						case 153:
							func_235();
							break;
						case 157:
							func_232();
							break;
						case 163:
							func_231();
							break;
						case 164:
							func_230();
							break;
						case 165:
							func_229();
							break;
						case 166:
							func_227();
							break;
						case 167:
							func_226();
							break;
						case 168:
							func_216();
							break;
						case 173:
							func_215();
							break;
						case 169:
							func_214();
							break;
						case 170:
							func_213();
							break;
						case 171:
							func_212();
							break;
						case 172:
							func_211();
							break;
						case 174:
							func_210();
							break;
						case 175:
							func_209();
							break;
						case 176:
							func_208();
							break;
						case 177:
							func_207();
							break;
						case 178:
							func_206();
							break;
						case 179:
							func_202();
							break;
						case 181:
							__LIB_11__::func_508();
							break;
						case 182:
							__LIB_11__::func_507();
							break;
						case 183:
							func_198();
							break;
						case 184:
							func_197();
							break;
						case 185:
							func_196();
							break;
						case 186:
							func_195();
							break;
						case 187:
							func_193();
							break;
						case 188:
							func_187();
							break;
						case 189:
							func_183();
							break;
						case 190:
							func_182();
							break;
						case 191:
							func_180();
							break;
						case 192:
							func_179();
							break;
						case 193:
							func_178();
							break;
						case 194:
							func_177();
							break;
						case 195:
							func_176();
							break;
						case 196:
							func_175();
							break;
						case 197:
							func_174();
							break;
						case 198:
							func_169();
							break;
						case 199:
							func_87();
							break;
						case 200:
							func_86();
							break;
						case 201:
							func_75();
							break;
						default:
							switch (iVar0)
							{
								case 202:
									func_74();
									break;
								case 203:
									func_73();
									break;
								case 204:
									func_72();
									break;
								case 205:
									func_71();
									break;
								case 206:
									func_29();
									break;
								case 207:
									func_28();
									break;
								case 154:
									__LIB_11__::func_792(-655205392);
									__LIB_11__::func_792(1266526796);
									break;
								case 155:
									__LIB_11__::func_792(joaat("TEXT_CAR3_F_REM"));
									__LIB_11__::func_792(joaat("TEXT_CAR3_MT_REM"));
									break;
								case 156:
									func_12(58, 0);
									func_12(59, 0);
									break;
								case 159:
									func_1();
									break;
								case 208:
									__LIB_0__::func_460(68);
									break;
								case 209:
									__LIB_0__::func_460(69);
									break;
								case 210:
									__LIB_0__::func_460(70);
									break;
								case 211:
									__LIB_0__::func_460(71);
									break;
							}
							break;
					}
					Global_113386.f_8613[iVar0] = 0;
				}
			}
			iVar0++;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xC1E
{
	if (!BitTest(Global_113386.f_18574.f_382, 6))
	{
		__LIB_26__::func_490(-1067764575, 6, 2, 144, 1000, 5000, -1, 0, -1, 0);
		MISC::SET_BIT(&(Global_113386.f_18574.f_382), 6);
	}
}

void func_12(int iParam0, int iParam1)//Position - 0x1073
{
	iParam1 = iParam1;
	Global_44248 = 1;
	if (Global_47582[iParam0 /*46*/] && !Global_47582[iParam0 /*46*/].f_1)
	{
		Global_47582[iParam0 /*46*/].f_1 = 1;
		Global_47582[iParam0 /*46*/] = 0;
	}
}

void func_28()//Position - 0x17FE
{
	__LIB_6__::func_770(62, 1);
}

void func_29()//Position - 0x180D
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_20__::func_728();
	iVar1 = __LIB_9__::func_231(iVar0);
	if (iVar1 > 10000)
	{
		__LIB_40__::func_982(iVar0, 129, 5000);
	}
	else if (iVar1 >= 10)
	{
		__LIB_40__::func_982(iVar0, 129, (iVar1 / 10));
	}
}

void func_71()//Position - 0x2D84
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_20__::func_728();
	iVar1 = __LIB_9__::func_231(iVar0);
	if (iVar1 > 10000)
	{
		__LIB_40__::func_982(iVar0, 128, 5000);
	}
	else if (iVar1 >= 10)
	{
		__LIB_40__::func_982(iVar0, 128, (iVar1 / 10));
	}
}

void func_72()//Position - 0x2DC6
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_20__::func_728();
	iVar1 = __LIB_9__::func_231(iVar0);
	if (iVar1 > 10000)
	{
		__LIB_40__::func_982(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10)
	{
		__LIB_40__::func_982(iVar0, 127, (iVar1 / 10));
	}
}

void func_73()//Position - 0x2E08
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_20__::func_728();
	iVar1 = __LIB_9__::func_231(iVar0);
	if (iVar1 > 10000)
	{
		__LIB_40__::func_982(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10)
	{
		__LIB_40__::func_982(iVar0, 126, (iVar1 / 10));
	}
}

void func_74()//Position - 0x2E4A
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_20__::func_728();
	iVar1 = __LIB_9__::func_231(iVar0);
	if (iVar1 > 10000)
	{
		__LIB_40__::func_982(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10)
	{
		__LIB_40__::func_982(iVar0, 125, (iVar1 / 10));
	}
}

void func_75()//Position - 0x2E8C
{
	int iVar0;
	iVar0 = __LIB_20__::func_728();
	switch (iVar0)
	{
		case 0:
			func_76(0, 26, 100000);
			break;
		case 1:
			func_76(1, 26, 100000);
			break;
		case 2:
			func_76(2, 26, 100000);
			break;
	}
}

void func_76(int iParam0, int iParam1, int iParam2)//Position - 0x2EDD
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = __LIB_20__::func_573(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	fVar1 = __LIB_38__::func_112(iParam1);
	if (Global_55453[iParam1 /*36*/].f_8)
	{
		return;
	}
	iVar2 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iParam2) / fVar1));
	__LIB_11__::func_494(iParam0, iVar0, iParam1);
	__LIB_11__::func_493(iParam0, iVar0, iVar2, 1);
}

void func_86()//Position - 0x3859
{
	int iVar0;
	iVar0 = __LIB_20__::func_728();
	switch (iVar0)
	{
		case 0:
			func_76(0, 48, 100000);
			break;
		case 1:
			func_76(1, 48, 100000);
			break;
		case 2:
			func_76(2, 48, 100000);
			break;
	}
}

void func_87()//Position - 0x38AA
{
	int iVar0;
	iVar0 = __LIB_20__::func_728();
	switch (iVar0)
	{
		case 0:
			if (!__LIB_38__::func_32(__LIB_19__::func_811(0), 12, 37))
			{
				__LIB_38__::func_82(__LIB_19__::func_811(0), 12, 37, 1);
				func_88(__LIB_19__::func_811(0), 12, 37, 1, 1);
			}
			else
			{
				__LIB_38__::func_82(__LIB_19__::func_811(0), 12, 36, 1);
				func_88(__LIB_19__::func_811(0), 12, 36, 1, 1);
			}
			break;
		case 1:
			if (!__LIB_38__::func_32(__LIB_19__::func_811(1), 12, 33))
			{
				__LIB_38__::func_82(__LIB_19__::func_811(1), 12, 33, 1);
				func_88(__LIB_19__::func_811(1), 12, 33, 1, 1);
			}
			else
			{
				__LIB_38__::func_82(__LIB_19__::func_811(1), 12, 25, 1);
				func_88(__LIB_19__::func_811(1), 12, 25, 1, 1);
			}
			break;
		case 2:
			if (!__LIB_38__::func_32(__LIB_19__::func_811(2), 12, 40))
			{
				__LIB_38__::func_82(__LIB_19__::func_811(2), 12, 40, 1);
				func_88(__LIB_19__::func_811(2), 12, 40, 1, 1);
			}
			else
			{
				__LIB_38__::func_82(__LIB_19__::func_811(2), 12, 37, 1);
				func_88(__LIB_19__::func_811(2), 12, 37, 1, 1);
			}
			break;
	}
}

int func_88(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x39C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_18__::func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_88(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_88(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__::func_82(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_88(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_88(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

void func_169()//Position - 0x1E07A
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 19);
	MISC::SET_BIT(&iVar0, 20);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 10);
	MISC::SET_BIT(&iVar0, 7);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 12);
	MISC::SET_BIT(&iVar0, 13);
	MISC::SET_BIT(&iVar0, 14);
	MISC::SET_BIT(&iVar0, 15);
	func_171(33, iVar0, 0);
	func_170(2);
}

void func_170(int iParam0)//Position - 0x1E0E8
{
	Global_60325 = iParam0;
}

void func_171(int iParam0, int iParam1, bool bParam2)//Position - 0x1E0F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_113386.f_20564.f_452[iVar1] > 0)
		{
			if (Global_113386.f_20564.f_443[iVar1] == iParam0)
			{
				iVar0 = iVar1;
			}
		}
		else
		{
			iVar2 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 != -1 || iVar2 == -1)
	{
		return;
	}
	iVar3 = 0;
	if (BitTest(iParam1, 3))
	{
		iVar3++;
	}
	if (BitTest(iParam1, 4))
	{
		iVar3 += 2;
	}
	if (BitTest(iParam1, 5))
	{
		iVar3 += 4;
	}
	if (BitTest(iParam1, 20))
	{
		iVar3 += 8;
	}
	if (iVar3 == 0 && !BitTest(iParam1, 1))
	{
		return;
	}
	iVar3 *= 3;
	if (BitTest(iParam1, 2))
	{
		iVar3 *= 7;
	}
	Global_113386.f_20564.f_442++;
	Global_113386.f_20564.f_461[iVar2] = iParam1;
	Global_113386.f_20564.f_443[iVar2] = iParam0;
	Global_113386.f_20564.f_452[iVar2] = iVar3;
	if (!bParam2)
	{
		if (!__LIB_0__::func_67(54))
		{
			__LIB_18__::func_203("AM_H_STOCKS" /* GXT: Actions in the world may have an impact on company stock values. Take advantage of likely changes in stock prices to generate extra capital. */, 1, 0, 40000, 10000, 7, 0, 139, 0);
		}
	}
	__LIB_39__::func_598(iParam0, 0);
}

void func_174()//Position - 0x1E37B
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 9);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 13);
	func_171(49, iVar0, 0);
	func_170(2);
}

void func_175()//Position - 0x1E3D0
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 20);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 12);
	MISC::SET_BIT(&iVar0, 13);
	MISC::SET_BIT(&iVar0, 14);
	MISC::SET_BIT(&iVar0, 15);
	func_171(36, iVar0, 0);
	func_170(2);
}

void func_176()//Position - 0x1E421
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 17);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 13);
	MISC::SET_BIT(&iVar0, 14);
	MISC::SET_BIT(&iVar0, 12);
	func_171(12, iVar0, 0);
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 17);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 7);
	MISC::SET_BIT(&iVar0, 9);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 13);
	MISC::SET_BIT(&iVar0, 12);
	func_171(15, iVar0, 0);
	func_170(2);
}

void func_177()//Position - 0x1E4CE
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 17);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 10);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 15);
	MISC::SET_BIT(&iVar0, 12);
	func_171(65, iVar0, 0);
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 10);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 13);
	func_171(40, iVar0, 0);
	func_170(2);
}

void func_178()//Position - 0x1E57B
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 20);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 10);
	MISC::SET_BIT(&iVar0, 7);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 12);
	MISC::SET_BIT(&iVar0, 13);
	func_171(79, iVar0, 0);
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 10);
	MISC::SET_BIT(&iVar0, 7);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 12);
	MISC::SET_BIT(&iVar0, 13);
	func_171(43, iVar0, 0);
	func_170(2);
}

void func_179()//Position - 0x1E630
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 17);
	func_171(61, iVar0, 1);
	Global_55453[61 /*36*/].f_9 = (Global_55453[61 /*36*/].f_9 * 0.544f);
	func_170(1);
}

void func_180()//Position - 0x1E678
{
	func_181(3);
	func_181(22);
	func_181(25);
	func_181(26);
	func_181(27);
	func_181(28);
	func_181(29);
	func_181(30);
	func_181(31);
	func_181(32);
	func_181(33);
	func_181(34);
	func_181(35);
	func_181(36);
	func_181(37);
	func_181(38);
	func_181(39);
	func_181(40);
	func_181(41);
	func_181(42);
	func_181(43);
	func_181(52);
	func_181(53);
	func_181(54);
	func_181(55);
	func_181(56);
}

void func_181(int iParam0)//Position - 0x1E71B
{
	MISC::CLEAR_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 0);
	MISC::CLEAR_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 1);
	MISC::CLEAR_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 2);
}

void func_182()//Position - 0x1E753
{
	func_181(0);
	func_181(1);
	func_181(2);
	func_181(9);
	func_181(10);
	func_181(11);
	func_181(12);
	func_181(13);
	func_181(14);
	func_181(15);
	func_181(16);
	func_181(21);
}

void func_183()//Position - 0x1E7A0
{
	PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	switch (Global_113386.f_24979)
	{
		case 2:
			MISC::SET_BIT(&(Global_113386.f_24979.f_1), 2);
			if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), __LIB_11__::func_156(88, 0)) < 43681f)
			{
				MISC::SET_BIT(&(Global_113386.f_24979.f_3), 2);
			}
			break;
		case 3:
			MISC::SET_BIT(&(Global_113386.f_24979.f_1), 3);
			if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), __LIB_11__::func_156(89, 0)) < 43681f)
			{
				MISC::SET_BIT(&(Global_113386.f_24979.f_3), 3);
			}
			break;
		case 4:
			MISC::SET_BIT(&(Global_113386.f_24979.f_1), 4);
			if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), __LIB_11__::func_156(90, 0)) < 43681f)
			{
				MISC::SET_BIT(&(Global_113386.f_24979.f_3), 4);
			}
			break;
	}
	__LIB_0__::func_533();
}

void func_187()//Position - 0x1E921
{
	__LIB_0__::func_503(104, 1);
	__LIB_36__::func_488(103, 1, 1);
}

void func_193()//Position - 0x1EC0A
{
	__LIB_35__::func_161(1794975438, 1, 2, 103, 360000, 10000, -1, 188, -1, 0, 1);
}

void func_195()//Position - 0x1ED45
{
	__LIB_0__::func_503(103, 1);
	__LIB_36__::func_488(103, 1, 1);
}

void func_196()//Position - 0x1ED5C
{
	__LIB_35__::func_161(969002696, 1, 2, 103, 360000, 10000, 66, 186, -1, 0, 1);
}

void func_197()//Position - 0x1ED7F
{
	__LIB_0__::func_503(102, 1);
}

void func_198()//Position - 0x1ED8E
{
	__LIB_35__::func_161(-1444331296, 1, 2, 50, 120000, 10000, -1, 184, -1, 0, 1);
}

void func_202()//Position - 0x1EEA8
{
	__LIB_0__::func_503(107, 1);
	__LIB_24__::func_943(286, 0, 0);
}

void func_206()//Position - 0x1F46F
{
	__LIB_0__::func_503(100, 1);
}

void func_207()//Position - 0x1F47E
{
	__LIB_26__::func_490(-1674789340, 1, 4, 64, 60000, 10000, -1, 178, -1, 0);
}

void func_208()//Position - 0x1F4A0
{
	__LIB_0__::func_503(105, 1);
}

void func_209()//Position - 0x1F4AF
{
	__LIB_0__::func_503(99, 1);
}

void func_210()//Position - 0x1F4BE
{
	__LIB_35__::func_161(-1134717682, 1, 4, 54, 1920000, 10000, -1, 175, -1, 0, 1);
}

void func_211()//Position - 0x1F4E1
{
	__LIB_0__::func_503(97, 1);
}

void func_212()//Position - 0x1F4F0
{
	__LIB_35__::func_161(-1159983966, 1, 2, 52, 200000, 10000, -1, 172, -1, 0, 1);
	func_214();
}

void func_213()//Position - 0x1F517
{
	__LIB_0__::func_503(96, 1);
}

void func_214()//Position - 0x1F526
{
	func_88(__LIB_19__::func_811(1), 12, 10, 1, 1);
}

void func_215()//Position - 0x1F53D
{
	__LIB_0__::func_503(92, 1);
	__LIB_0__::func_503(93, 1);
	__LIB_6__::func_770(37, 1);
}

void func_216()//Position - 0x1F55A
{
	__LIB_36__::func_45(8);
	__LIB_24__::func_943(287, 0, 0);
	__LIB_0__::func_503(106, 1);
}

void func_226()//Position - 0x2386F
{
	__LIB_0__::func_503(85, 1);
}

void func_227()//Position - 0x2387E
{
	if (__LIB_0__::func_528(5) && __LIB_0__::func_528(6))
	{
		__LIB_35__::func_161(1800466587, 1, 2, 49, 1920000, 10000, -1, 167, -1, 0, 1);
	}
}

void func_229()//Position - 0x238DE
{
	__LIB_0__::func_503(84, 1);
}

void func_230()//Position - 0x238ED
{
	__LIB_35__::func_161(483349085, 1, 2, 49, 120000, 10000, -1, 165, -1, 0, 1);
}

void func_231()//Position - 0x23910
{
	__LIB_0__::func_503(110, 1);
}

void func_232()//Position - 0x2391F
{
	if (__LIB_30__::func_692())
	{
		__LIB_40__::func_942(1, 97, 500000, 0, 0);
	}
}

void func_235()//Position - 0x23A26
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_8__::func_915(43))
	{
		Global_113386.f_9085.f_99.f_58[81] = 1;
		uVar0 = Global_78588.f_12526[22 /*2*/];
		iVar1 = Global_78588.f_12526[22 /*2*/].f_1;
		iVar2 = uVar0;
		iVar3 = -1;
		bVar4 = false;
		while (iVar2 <= iVar1 && !bVar4)
		{
			if (Global_78588.f_6825[iVar2 /*3*/] == 531432813)
			{
				iVar3 = Global_78588.f_6825[iVar2 /*3*/].f_2;
				iVar5 = Global_78588.f_109[iVar3 /*4*/];
				if (iVar5 == 128)
				{
					Global_113386.f_9085.f_2[22 /*3*/].f_1 = iVar2;
					bVar4 = true;
				}
			}
			iVar2++;
		}
		iVar6 = __LIB_30__::func_296(43);
		iVar7 = func_244(43);
		__LIB_34__::func_971(iVar6);
		__LIB_26__::func_699(Global_91193[iVar7 /*5*/]);
	}
}

int func_244(int iParam0)//Position - 0x23F31
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_91193[iVar0 /*5*/] != -1)
		{
			if (Global_78588.f_109[Global_91193[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_247()//Position - 0x2400B
{
	ENTITY::REMOVE_MODEL_HIDE(-18.3539f, -1438.7838f, 31.305f, 3f, joaat("v_ilev_frnkwarddr1"), false);
	ENTITY::REMOVE_MODEL_HIDE(-18.3594f, -1438.1329f, 31.305f, 3f, joaat("v_ilev_frnkwarddr2"), false);
}

void func_248()//Position - 0x24047
{
	if (!BitTest(Global_113386.f_7688.f_923, 3))
	{
		MISC::SET_BIT(&(Global_113386.f_7688.f_923), 3);
	}
	else if (!BitTest(Global_113386.f_7688.f_923, 4))
	{
		MISC::SET_BIT(&(Global_113386.f_7688.f_923), 4);
	}
	else if (!BitTest(Global_113386.f_7688.f_923, 5))
	{
		MISC::SET_BIT(&(Global_113386.f_7688.f_923), 5);
	}
}

void func_249()//Position - 0x240B2
{
	if (!BitTest(Global_113386.f_7688.f_923, 0))
	{
		MISC::SET_BIT(&(Global_113386.f_7688.f_923), 0);
	}
	else if (!BitTest(Global_113386.f_7688.f_923, 1))
	{
		MISC::SET_BIT(&(Global_113386.f_7688.f_923), 1);
	}
	else if (!BitTest(Global_113386.f_7688.f_923, 2))
	{
		MISC::SET_BIT(&(Global_113386.f_7688.f_923), 2);
	}
}

void func_250()//Position - 0x2411D
{
	bool bVar0;
	bVar0 = __LIB_20__::func_728();
	if (__LIB_0__::func_317(bVar0))
	{
		switch (bVar0)
		{
			case 0:
				__LIB_39__::func_706(0, 1, 38, 60000, 0);
				__LIB_36__::func_488(95, 0, 0);
				break;
			case 1:
				__LIB_39__::func_706(1, 1, 38, 60000, 0);
				__LIB_36__::func_488(95, 1, 0);
				break;
			case 2:
				__LIB_39__::func_706(2, 1, 38, 60000, 0);
				__LIB_36__::func_488(95, 2, 0);
				break;
			}
	}
	__LIB_11__::func_792(-1199050901);
	__LIB_11__::func_792(1082655975);
	__LIB_11__::func_792(-2100435596);
}

void func_252()//Position - 0x241FB
{
	int iVar0;
	iVar0 = __LIB_11__::func_511(joaat("CALL_PATRICIA_2"));
	if (iVar0 != -1)
	{
		Global_113386.f_7688[iVar0 /*15*/].f_4 = (MISC::GET_GAME_TIMER() + 100000);
	}
	iVar0 = __LIB_11__::func_511(joaat("CALL_PATRICIA_3"));
	if (iVar0 != -1)
	{
		Global_113386.f_7688[iVar0 /*15*/].f_4 = (MISC::GET_GAME_TIMER() + 100000);
	}
	func_384();
}

void func_254()//Position - 0x2428D
{
	__LIB_35__::func_161(joaat("TEXT_CAR1_UNLOCK"), 1, 7, 45, 30000, 5000, -1, 0, -1, 0, 1);
}

void func_255()//Position - 0x242AE
{
	int iVar0;
	iVar0 = __LIB_11__::func_511(1635046052);
	if (iVar0 != -1)
	{
		Global_113386.f_7688.f_913 = 1;
		Global_113386.f_7688.f_914 = 0;
		Global_113386.f_7688.f_911 = 1635046052;
		__LIB_0__::func_503(79, 1);
	}
	__LIB_11__::func_792(1635046052);
}

void func_256()//Position - 0x242FD
{
	if (__LIB_0__::func_176(59))
	{
		__LIB_35__::func_161(joaat("TEXT_CARS2_DONE"), 0, 2, 0, 6000, 6000, -1, 142, -1, 262148, 1);
	}
}

void func_258()//Position - 0x24356
{
	if (__LIB_0__::func_176(9))
	{
		__LIB_29__::func_870(joaat("CALL_SOLOMON1_DONE"), 0, 1, 31, 3, 6000, 6000, -1, -1, 142, -1, 1060);
	}
}

void func_261(bool bParam0)//Position - 0x2450D
{
	TASK::SET_SCENARIO_GROUP_ENABLED("LOST_BIKERS", bParam0);
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_113386.f_10016.f_25), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 2);
	}
}

void func_262(bool bParam0)//Position - 0x24543
{
	__LIB_10__::func_604(109, bParam0, 0);
}

void func_263(bool bParam0)//Position - 0x24554
{
	__LIB_10__::func_604(97, bParam0, 0);
}

void func_265()//Position - 0x245A7
{
	func_88(__LIB_19__::func_811(0), 12, 3, 1, 1);
	func_88(__LIB_19__::func_811(0), 12, 12, 1, 1);
	func_88(__LIB_19__::func_811(0), 12, 4, 1, 1);
	func_88(__LIB_19__::func_811(0), 12, 11, 1, 1);
	func_88(__LIB_19__::func_811(0), 12, 14, 1, 1);
	func_88(__LIB_19__::func_811(0), 12, 15, 1, 1);
	func_88(__LIB_19__::func_811(0), 12, 17, 1, 1);
	func_88(__LIB_19__::func_811(0), 12, 23, 1, 1);
	func_88(__LIB_19__::func_811(0), 12, 24, 1, 1);
	func_88(__LIB_19__::func_811(1), 12, 5, 1, 1);
	func_88(__LIB_19__::func_811(1), 12, 1, 1, 1);
	func_88(__LIB_19__::func_811(1), 12, 4, 1, 1);
	func_88(__LIB_19__::func_811(1), 12, 8, 1, 1);
	func_88(__LIB_19__::func_811(1), 12, 10, 1, 1);
	func_88(__LIB_19__::func_811(1), 8, 9, 1, 1);
	func_88(__LIB_19__::func_811(2), 12, 3, 1, 1);
	func_88(__LIB_19__::func_811(2), 12, 2, 1, 1);
	func_88(__LIB_19__::func_811(2), 12, 7, 1, 1);
	func_88(__LIB_19__::func_811(2), 12, 11, 1, 1);
	func_88(__LIB_19__::func_811(2), 12, 13, 1, 1);
	func_88(__LIB_19__::func_811(2), 12, 8, 1, 1);
}

void func_266()//Position - 0x246EA
{
	__LIB_29__::func_870(joaat("CALL_FIN_MDEAD2"), 1, 2, 14, 3, 200000, 180000, -1, -1, 0, -1, 0);
	__LIB_29__::func_870(joaat("CALL_FIN_MDEAD3"), 1, 4, 14, 3, 350000, 180000, -1, -1, 0, -1, 0);
}

void func_267()//Position - 0x2472A
{
	Global_43604[12] = (MISC::GET_GAME_TIMER() + 120000);
}

void func_268()//Position - 0x24742
{
	Global_43604[15] = (MISC::GET_GAME_TIMER() + 120000);
}

void func_269()//Position - 0x2475A
{
	Global_43604[14] = (MISC::GET_GAME_TIMER() + 120000);
}

void func_270()//Position - 0x24772
{
	Global_43604[17] = (MISC::GET_GAME_TIMER() + 120000);
}

void func_271()//Position - 0x2478A
{
	if (!__LIB_0__::func_368(42))
	{
		if (__LIB_0__::func_176(44))
		{
			__LIB_0__::func_503(42, 1);
		}
		else if (__LIB_0__::func_176(40))
		{
			__LIB_0__::func_503(42, 1);
		}
	}
}

void func_273()//Position - 0x247EC
{
	__LIB_0__::func_503(75, 1);
}

void func_274()//Position - 0x247FB
{
	if (__LIB_20__::func_728() == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_11__::func_952(4, PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_277()//Position - 0x2490B
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_176(74) || !__LIB_0__::func_176(75))
	{
		if (__LIB_0__::func_176(60))
		{
			iVar0 = __LIB_11__::func_511(joaat("CALL_DOCKS_2_T_UNLOCK"));
			if (iVar0 != -1)
			{
				iVar1 = MISC::GET_GAME_TIMER() + 20000;
				if (Global_113386.f_7688[iVar0 /*15*/].f_4 > iVar1)
				{
					Global_113386.f_7688[iVar0 /*15*/].f_4 = iVar1;
				}
			}
			iVar0 = func_278(joaat("TEXT_DOCKS_2_MF_UNLOCK"));
			if (iVar0 != -1)
			{
				iVar1 = MISC::GET_GAME_TIMER() + 20000;
				if (Global_113386.f_7688.f_651[iVar0 /*14*/].f_4 > iVar1)
				{
					Global_113386.f_7688.f_651[iVar0 /*14*/].f_4 = iVar1;
				}
			}
		}
	}
}

int func_278(int iParam0)//Position - 0x249AF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (Global_113386.f_7688.f_651[iVar0 /*14*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_279()//Position - 0x249EB
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_176(83))
	{
		if (__LIB_0__::func_176(79))
		{
			iVar0 = func_278(joaat("TEXT_FINH_PD_UNLOCK"));
			if (iVar0 != -1)
			{
				iVar1 = MISC::GET_GAME_TIMER() + 25000;
				if (Global_113386.f_7688.f_651[iVar0 /*14*/].f_4 > iVar1)
				{
					Global_113386.f_7688.f_651[iVar0 /*14*/].f_4 = iVar1;
				}
			}
		}
	}
}

void func_280()//Position - 0x24A47
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_176(51))
	{
		if (__LIB_0__::func_176(22))
		{
			if (__LIB_0__::func_176(60))
			{
				iVar0 = __LIB_11__::func_511(-464957327);
				if (iVar0 != -1)
				{
					iVar1 = MISC::GET_GAME_TIMER() + 25000;
					if (Global_113386.f_7688[iVar0 /*15*/].f_4 > iVar1)
					{
						Global_113386.f_7688[iVar0 /*15*/].f_4 = iVar1;
					}
				}
			}
		}
	}
}

void func_281()//Position - 0x24AA6
{
	__LIB_0__::func_503(15, 1);
}

void func_282()//Position - 0x24AB5
{
	int iVar0;
	MISC::CLEAR_AREA(689.6588f, -962.4214f, 22.4975f, 25f, true, false, false, false);
	if (!__LIB_0__::func_176(88))
	{
		if (!__LIB_8__::func_915(88))
		{
			iVar0 = func_278(joaat("TEXT_JEWEL_P2A_UNLOCK"));
			if (iVar0 != -1)
			{
				__LIB_11__::func_792(joaat("TEXT_JEWEL_P2A_UNLOCK"));
				__LIB_0__::func_503(15, 1);
			}
		}
	}
}

void func_283()//Position - 0x24B0F
{
	if (!__LIB_0__::func_67(22))
	{
		__LIB_32__::func_812(22, 1, 0);
		__LIB_32__::func_812(23, 1, 0);
		__LIB_32__::func_812(24, 1, 0);
		__LIB_32__::func_812(25, 1, 0);
		__LIB_32__::func_812(26, 1, 0);
		__LIB_32__::func_812(27, 1, 0);
		__LIB_30__::func_298(43);
		__LIB_20__::func_574(43);
		__LIB_18__::func_203("AM_H_TATTOO" /* GXT: Tattoo parlors now available at ~BLIP_TATTOO~ Visit the parlor for some new ink. */, 1, 3000, -1, 10000, 7, 0, 0, 0);
		__LIB_18__::func_203("AM_H_SHOUT" /* GXT: Press ~INPUT_CONTEXT~ to interact with pedestrians. */, 0, 20000, -1, 10000, 7, 0, 0, 0);
		__LIB_0__::func_460(22);
	}
}

void func_298()//Position - 0x256AF
{
	__LIB_39__::func_547(1);
	__LIB_11__::func_501(0);
	__LIB_0__::func_503(60, 1);
}

void func_304()//Position - 0x259FB
{
	__LIB_11__::func_792(-128912482);
	__LIB_11__::func_792(-131238069);
	__LIB_11__::func_792(-330732224);
	if (__LIB_0__::func_368(28) && __LIB_0__::func_368(29))
	{
		__LIB_0__::func_503(36, 1);
	}
}

void func_305()//Position - 0x25A3C
{
	__LIB_11__::func_792(2095586439);
	__LIB_11__::func_792(1608868018);
	__LIB_11__::func_792(1134611425);
	__LIB_11__::func_792(187813079);
	__LIB_11__::func_792(-39544602);
	__LIB_11__::func_792(-997367701);
	__LIB_19__::func_856("AM_H_GAUNT_R" /* GXT: Gauntlets are required before attempting the heist. Check your email for locations. */, 1);
	__LIB_0__::func_503(29, 1);
	if (__LIB_0__::func_368(28))
	{
		__LIB_0__::func_503(36, 1);
	}
}

void func_311()//Position - 0x25E21
{
	__LIB_11__::func_792(-1631047976);
	__LIB_11__::func_792(962970051);
	__LIB_11__::func_792(-1323797481);
	__LIB_19__::func_856("AM_H_GAUNT_R" /* GXT: Gauntlets are required before attempting the heist. Check your email for locations. */, 1);
}

void func_312()//Position - 0x25E50
{
	__LIB_11__::func_792(-1980743701);
	__LIB_11__::func_792(1567521709);
	__LIB_11__::func_792(-1687842043);
	__LIB_19__::func_856("AM_H_GAUNT_R" /* GXT: Gauntlets are required before attempting the heist. Check your email for locations. */, 1);
}

void func_313()//Position - 0x25E7F
{
	__LIB_11__::func_792(-553769964);
	__LIB_11__::func_792(-1434443191);
	__LIB_11__::func_792(-2032593637);
	__LIB_11__::func_792(-458789713);
	__LIB_11__::func_792(321648831);
	__LIB_11__::func_792(312697495);
	__LIB_0__::func_503(28, 1);
	if (__LIB_0__::func_368(29))
	{
		__LIB_0__::func_503(36, 1);
	}
}

void func_314()//Position - 0x25EDA
{
	if (__LIB_0__::func_176(79))
	{
		if (__LIB_0__::func_176(83))
		{
			func_315(-128912482, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1028);
			func_315(-131238069, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1028);
			func_315(-330732224, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1028);
		}
		else
		{
			func_315(-128912482, -1106471007, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
			func_315(-131238069, -1106471007, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
			func_315(-330732224, -1106471007, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
		}
	}
	else if (__LIB_0__::func_176(83))
	{
		func_315(-128912482, 94848458, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
		func_315(-131238069, 94848458, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
		func_315(-330732224, 94848458, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
	}
	else
	{
		func_315(-128912482, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
		func_315(-131238069, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
		func_315(-330732224, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
	}
}

int func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x2609E
{
	struct<15> Var0;
	int iVar1;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == bParam5)
	{
		return 0;
	}
	if (((bParam5 != 144 && bParam5 != 0) && bParam5 != 1) && bParam5 != 2)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = __LIB_0__::func_522(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_1 = iParam12;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, bParam5);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 13);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		__LIB_12__::func_132(bParam5);
		return 1;
	}
	return 0;
}

void func_316()//Position - 0x261FB
{
	if (__LIB_0__::func_176(79))
	{
		if (Global_113386.f_9085.f_99.f_58[34])
		{
			func_315(187813079, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1028);
			func_315(-39544602, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1028);
			func_315(-997367701, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1028);
		}
		else
		{
			func_315(187813079, -1394105734, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
			func_315(-39544602, -1394105734, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
			func_315(-997367701, -1394105734, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
		}
	}
	else if (Global_113386.f_9085.f_99.f_58[34])
	{
		func_315(187813079, 94848458, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
		func_315(-39544602, 94848458, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
		func_315(-997367701, 94848458, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
	}
	else
	{
		func_315(187813079, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
		func_315(-39544602, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
		func_315(-997367701, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
	}
}

void func_317()//Position - 0x263D1
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_176(80))
	{
		iVar0++;
	}
	if (__LIB_0__::func_176(81))
	{
		iVar0++;
	}
	if (__LIB_0__::func_176(82))
	{
		iVar0++;
	}
	if (iVar0 == 1)
	{
		func_318(-1980743701, 0, 0, 12, 3, 6000, 6000, -1, 110, 0, 1024);
		func_318(1567521709, 0, 1, 12, 3, 6000, 6000, -1, 110, 0, 1024);
		func_318(-1687842043, 0, 2, 12, 3, 6000, 6000, -1, 110, 0, 1024);
	}
	else if (iVar0 == 2)
	{
		func_318(-1631047976, 0, 0, 12, 3, 6000, 6000, -1, 111, 0, 1024);
		func_318(962970051, 0, 1, 12, 3, 6000, 6000, -1, 111, 0, 1024);
		func_318(-1323797481, 0, 2, 12, 3, 6000, 6000, -1, 111, 0, 1024);
	}
	else if (iVar0 == 3)
	{
		if (__LIB_0__::func_176(78))
		{
			func_315(2095586439, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1028);
			func_315(1608868018, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1028);
			func_315(1134611425, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1028);
		}
		else
		{
			func_315(2095586439, 1679209251, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
			func_315(1608868018, 1679209251, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
			func_315(1134611425, 1679209251, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
		}
		__LIB_11__::func_792(1694883968);
	}
}

int func_318(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x265AB
{
	struct<15> Var0;
	int iVar1;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = __LIB_0__::func_522(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, bParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		__LIB_12__::func_132(bParam2);
		return 1;
	}
	return 0;
}

void func_319()//Position - 0x266FC
{
	if (__LIB_0__::func_176(83))
	{
		if (Global_113386.f_9085.f_99.f_58[34])
		{
			func_315(-458789713, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1028);
			func_315(321648831, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1028);
			func_315(312697495, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1028);
		}
		else
		{
			func_315(-458789713, -1394105734, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
			func_315(321648831, -1394105734, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
			func_315(312697495, -1394105734, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
		}
	}
	else if (Global_113386.f_9085.f_99.f_58[34])
	{
		func_315(-458789713, -1106471007, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
		func_315(321648831, -1106471007, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
		func_315(312697495, -1106471007, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
	}
	else
	{
		func_315(-458789713, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
		func_315(321648831, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
		func_315(312697495, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
	}
}

void func_320()//Position - 0x268D2
{
	if ((__LIB_0__::func_176(80) && __LIB_0__::func_176(81)) && __LIB_0__::func_176(82))
	{
		func_315(-553769964, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1028);
		func_315(-1434443191, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1028);
		func_315(-2032593637, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1028);
	}
	else
	{
		func_315(-553769964, -268883259, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
		func_315(-1434443191, -268883259, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
		func_315(-2032593637, -268883259, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
	}
}

void func_321()//Position - 0x269C8
{
	__LIB_0__::func_503(30, 1);
	Global_97358 = 1;
}

void func_322()//Position - 0x269DC
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_11__::func_685(4, 4);
	if ((iVar0 != 0 && iVar0 != 15) && __LIB_0__::func_485(iVar0) == 2)
	{
		iVar1 = 60000;
		switch (__LIB_0__::func_432(iVar0))
		{
			case 2:
				__LIB_26__::func_490(692693384, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4);
				break;
			case 1:
				__LIB_26__::func_490(1209844154, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4);
				break;
			case 0:
				__LIB_26__::func_490(-1144971313, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4);
				break;
		}
	}
	else if (!__LIB_0__::func_2(0))
	{
	}
}

void func_328()//Position - 0x26B71
{
	switch (__LIB_0__::func_434(7))
	{
		case 1:
			break;
		case 2:
			func_88(__LIB_19__::func_811(0), 12, 31, 1, 1);
			func_88(__LIB_19__::func_811(1), 12, 22, 1, 1);
			break;
	}
}

void func_329()//Position - 0x26BB3
{
	if (HUD::DOES_BLIP_EXIST(Global_77137.f_208[14]))
	{
		HUD::SET_BLIP_FLASHES(Global_77137.f_208[14], true);
		HUD::SET_BLIP_FLASH_TIMER(Global_77137.f_208[14], 10000);
	}
	__LIB_18__::func_203("AM_H_LHNGR" /* GXT: Trevor has taken ownership of The Lost's Sandy Shores Airfield. This location contains storage for planes at ~HUD_COLOUR_TREVOR~~BLIP_HANGAR~~s~ and helicopters at ~HUD_COLOUR_TREVOR~~BLIP_HELIPAD~ */, 2, 1000, -1, 10000, 7, 0, 0, 0);
}

void func_331()//Position - 0x26C3B
{
	func_332(2, 1);
}

void func_332(int iParam0, bool bParam1)//Position - 0x26C49
{
	int iVar0;
	char* sVar1;
	MISC::SET_BIT(&(Global_113386.f_1.f_116), iParam0);
	switch (iParam0)
	{
		case 10:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 14);
			break;
		case 13:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 16);
			break;
		case 12:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 15);
			break;
		case 11:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (__LIB_0__::func_485(iParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			case 3:
				iVar0 = 4;
				break;
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = __LIB_34__::func_786(iParam0);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("FEED_CREW_U" /* GXT: Heist crew member ~a~ unlocked. */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_34__::func_786(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(sVar1, sVar1, false, iVar0, "", 0);
		if (!__LIB_0__::func_67(45))
		{
			__LIB_18__::func_203("AM_H_CREWU" /* GXT: Throughout the game you may meet contacts who can help on heists. This will give you extra crew members to pick from. */, 2, 0, 20000, 10000, __LIB_32__::func_721(), 0, 131, 0);
		}
	}
}

void func_336()//Position - 0x26E7D
{
	func_332(3, 1);
}

void func_337()//Position - 0x26E8B
{
	func_332(5, 1);
}

void func_338()//Position - 0x26E99
{
	__LIB_6__::func_770(57, 1);
	__LIB_0__::func_313(57);
	__LIB_0__::func_503(109, 1);
}

void func_340()//Position - 0x26EDA
{
	__LIB_30__::func_298(158);
	__LIB_30__::func_298(159);
	__LIB_10__::func_604(158, 1, 0);
	__LIB_10__::func_604(159, 1, 0);
	__LIB_30__::func_825(158, 5);
	__LIB_30__::func_825(159, 5);
	__LIB_20__::func_576(158);
	__LIB_20__::func_576(159);
}

void func_343()//Position - 0x26FD3
{
	__LIB_30__::func_298(156);
	__LIB_30__::func_298(157);
	__LIB_10__::func_604(156, 1, 0);
	__LIB_10__::func_604(157, 1, 0);
	__LIB_30__::func_825(156, 5);
	__LIB_30__::func_825(157, 5);
}

void func_344()//Position - 0x27005
{
	__LIB_30__::func_298(161);
	__LIB_30__::func_298(160);
	__LIB_10__::func_604(161, 1, 0);
	__LIB_10__::func_604(160, 1, 0);
}

void func_345()//Position - 0x27029
{
	int iVar0;
	var uVar1;
	if (!__LIB_0__::func_2(0))
	{
		STATS::STAT_GET_FLOAT(joaat("SP0_DIST_RUNNING"), &uVar1, -1);
		Global_113386.f_2363.f_539.f_2355[0] = uVar1;
		STATS::STAT_GET_INT(joaat("SP0_UNARMED_HITS"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2359[0] = iVar0;
		STATS::STAT_GET_INT(joaat("SP0_NUMBER_NEAR_MISS"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2363[0] = iVar0;
		STATS::STAT_GET_FLOAT(joaat("SP0_DIST_WALK_ST"), &uVar1, -1);
		Global_113386.f_2363.f_539.f_2367[0] = uVar1;
		STATS::STAT_GET_INT(joaat("SP0_KILLS_STEALTH"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2371[0] = iVar0;
		STATS::STAT_GET_INT(joaat("SP0_HITS_MISSION"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2375[0] = iVar0;
		STATS::STAT_GET_INT(joaat("SP0_HITS_PEDS_VEHICLES"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2379[0] = (iVar0 - Global_113386.f_2363.f_539.f_2375[0]);
		STATS::STAT_GET_FLOAT(joaat("SP1_DIST_RUNNING"), &uVar1, -1);
		Global_113386.f_2363.f_539.f_2355[1] = uVar1;
		STATS::STAT_GET_INT(joaat("SP1_UNARMED_HITS"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2359[1] = iVar0;
		STATS::STAT_GET_INT(joaat("SP1_NUMBER_NEAR_MISS"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2363[1] = iVar0;
		STATS::STAT_GET_FLOAT(joaat("SP1_DIST_WALK_ST"), &uVar1, -1);
		Global_113386.f_2363.f_539.f_2367[1] = uVar1;
		STATS::STAT_GET_INT(joaat("SP1_KILLS_STEALTH"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2371[1] = iVar0;
		STATS::STAT_GET_INT(joaat("SP1_HITS_MISSION"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2375[1] = iVar0;
		STATS::STAT_GET_INT(joaat("SP0_HITS_PEDS_VEHICLES"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2379[1] = (iVar0 - Global_113386.f_2363.f_539.f_2375[1]);
		STATS::STAT_GET_FLOAT(joaat("SP2_DIST_RUNNING"), &uVar1, -1);
		Global_113386.f_2363.f_539.f_2355[2] = uVar1;
		STATS::STAT_GET_INT(joaat("SP2_UNARMED_HITS"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2359[2] = iVar0;
		STATS::STAT_GET_INT(joaat("SP2_NUMBER_NEAR_MISS"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2363[2] = iVar0;
		STATS::STAT_GET_FLOAT(joaat("SP2_DIST_WALK_ST"), &uVar1, -1);
		Global_113386.f_2363.f_539.f_2367[2] = uVar1;
		STATS::STAT_GET_INT(joaat("SP2_KILLS_STEALTH"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2371[2] = iVar0;
		STATS::STAT_GET_INT(joaat("SP2_HITS_MISSION"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2375[2] = iVar0;
		STATS::STAT_GET_INT(joaat("SP2_HITS_PEDS_VEHICLES"), &iVar0, -1);
		Global_113386.f_2363.f_539.f_2379[2] = (iVar0 - Global_113386.f_2363.f_539.f_2375[2]);
	}
}

void func_347()//Position - 0x274F5
{
	__LIB_11__::func_792(-2116452823);
	__LIB_11__::func_792(1880611494);
	__LIB_0__::func_503(41, 1);
}

void func_348()//Position - 0x27518
{
	__LIB_32__::func_812(7, 1, 0);
	__LIB_32__::func_812(8, 1, 0);
	__LIB_32__::func_812(9, 1, 0);
	__LIB_32__::func_812(10, 1, 0);
	__LIB_32__::func_812(11, 1, 0);
	__LIB_32__::func_812(12, 1, 0);
	__LIB_32__::func_812(13, 1, 0);
	__LIB_32__::func_812(14, 1, 0);
	__LIB_32__::func_812(15, 1, 0);
	__LIB_32__::func_812(16, 1, 0);
	__LIB_32__::func_812(17, 1, 0);
	__LIB_32__::func_812(18, 1, 0);
	__LIB_32__::func_812(19, 1, 0);
	__LIB_32__::func_812(20, 1, 0);
	__LIB_20__::func_574(26);
}

void func_349()//Position - 0x27595
{
	__LIB_40__::func_942(2, 36, 62680, 0, 0);
}

void func_350()//Position - 0x275AA
{
	func_351(1, 1);
	__LIB_0__::func_503(11, 1);
}

int func_351(bool bParam0, bool bParam1)//Position - 0x275C0
{
	if (!__LIB_0__::func_198() && __LIB_0__::func_317(bParam0))
	{
		if (!func_352(bParam0) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_97919.f_45 = bParam0;
			Global_97919.f_46 = 0;
			Global_97919.f_44 = 1;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool func_352(bool bParam0)//Position - 0x27633
{
	__LIB_20__::func_605();
	return bParam0 == Global_113386.f_2363.f_539.f_4321;
}

void func_354()//Position - 0x2766B
{
	if (__LIB_11__::func_92(0) >= 22000)
	{
		__LIB_40__::func_982(0, 35, 22000);
	}
	else
	{
		__LIB_40__::func_982(0, 35, __LIB_11__::func_92(0));
	}
}

void func_356()//Position - 0x276A8
{
	if (__LIB_11__::func_92(0) >= 9500)
	{
		__LIB_40__::func_982(0, 34, 9500);
	}
	else
	{
		__LIB_40__::func_982(0, 34, __LIB_11__::func_92(0));
	}
}

void func_357()//Position - 0x276D6
{
	int iVar0;
	if (__LIB_11__::func_92(0) >= 7500)
	{
		__LIB_40__::func_982(0, 33, 5000);
	}
	else
	{
		iVar0 = SYSTEM::ROUND((IntToFloat(__LIB_11__::func_92(0)) * 0.8f));
		if (iVar0 > 5000)
		{
			iVar0 = 5000;
		}
		__LIB_40__::func_982(0, 33, iVar0);
	}
}

void func_358()//Position - 0x27720
{
	int iVar0;
	if (__LIB_11__::func_92(0) >= 5500)
	{
		__LIB_40__::func_982(0, 34, 3000);
	}
	else
	{
		iVar0 = SYSTEM::ROUND((IntToFloat(__LIB_11__::func_92(0)) * 0.8f));
		if (iVar0 > 3000)
		{
			iVar0 = 3000;
		}
		__LIB_40__::func_982(0, 34, iVar0);
	}
}

void func_359()//Position - 0x2776A
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Global_113386.f_1.f_126[4 /*23*/].f_2[0];
	if (iVar0 == 0)
	{
		iVar0 = 12000000;
	}
	iVar1 = Global_113386.f_1.f_126[4 /*23*/].f_2[1];
	if (iVar1 == 0)
	{
		iVar1 = 12000000;
	}
	iVar2 = Global_113386.f_1.f_126[4 /*23*/].f_2[2];
	if (iVar2 == 0)
	{
		iVar2 = 12000000;
	}
	if (__LIB_11__::func_509(7))
	{
		func_364(7, 0);
	}
	else if (!__LIB_11__::func_508(7))
	{
		func_360(7, 0);
	}
	if (__LIB_11__::func_509(8))
	{
		func_364(8, 0);
	}
	else if (!__LIB_11__::func_508(8))
	{
		func_360(8, 0);
	}
	if (__LIB_0__::func_368(136))
	{
		__LIB_39__::func_706(0, 1, 32, SYSTEM::ROUND((IntToFloat(iVar0) + (IntToFloat(iVar2) / 2f))), 0);
		__LIB_39__::func_706(1, 1, 32, SYSTEM::ROUND((IntToFloat(iVar1) + (IntToFloat(iVar2) / 2f))), 0);
	}
	else if (__LIB_0__::func_368(135))
	{
		__LIB_39__::func_706(1, 1, 32, iVar1, 0);
		__LIB_39__::func_706(2, 1, 32, iVar2, 0);
	}
	else
	{
		__LIB_39__::func_706(0, 1, 32, iVar0, 0);
		__LIB_39__::func_706(1, 1, 32, iVar1, 0);
		__LIB_39__::func_706(2, 1, 32, iVar2, 0);
	}
}

void func_360(int iParam0, bool bParam1)//Position - 0x27892
{
	func_361(iParam0, bParam1);
}

void func_361(int iParam0, bool bParam1)//Position - 0x278A2
{
	Global_44248 = 1;
	if (!Global_47582[iParam0 /*46*/] && !Global_47582[iParam0 /*46*/].f_1)
	{
		Global_47582[iParam0 /*46*/] = 1;
		func_364(iParam0, bParam1);
	}
	else
	{
		__LIB_11__::func_503(iParam0);
		func_361(iParam0, bParam1);
	}
}

void func_364(int iParam0, bool bParam1)//Position - 0x2793C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_47582[iParam0 /*46*/] && !Global_47582[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_47582[iParam0 /*46*/].f_31 == Global_47582[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_47582[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_44257[Global_47582[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_47582[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_47582[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_47582[iParam0 /*46*/].f_8[Global_47582[iParam0 /*46*/].f_31];
	Global_47582[iParam0 /*46*/].f_31++;
	__LIB_11__::func_507(iParam0, iVar1);
	Global_47582[iParam0 /*46*/].f_45 = Global_44257[iVar1 /*12*/].f_10;
	Global_47582[iParam0 /*46*/].f_43 = Global_44257[iVar1 /*12*/].f_11;
	iVar2 = Global_47582[iParam0 /*46*/].f_2;
	func_365(Global_44257[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_47582[iParam0 /*46*/].f_3[iVar3] != Global_44257[iVar1 /*12*/].f_2 && Global_47582[iParam0 /*46*/].f_3[iVar3] != Global_44257[iVar1 /*12*/].f_3)
		{
			func_365(Global_47582[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_47582[iParam0 /*46*/].f_31 == Global_47582[iParam0 /*46*/].f_30)
	{
		if (Global_44257[Global_47582[iParam0 /*46*/].f_32[(Global_47582[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_47582[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

void func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x27AD8
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_47582[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_47582[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { __LIB_10__::func_690(Global_44257[iVar5 /*12*/].f_1) };
		if (Global_44257[iVar5 /*12*/].f_2 == iParam0 && !Global_44257[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_44257[iVar5 /*12*/].f_2;
		iVar0 = Global_53195[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_53195[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44249 = (Global_44249 - 1);
						if (Global_44249 < 0)
						{
							Global_44249 = 0;
						}
						break;
					case 1:
						Global_44250 = (Global_44250 - 1);
						if (Global_44250 < 0)
						{
							Global_44250 = 0;
						}
						break;
					case 2:
						Global_44251 = (Global_44251 - 1);
						if (Global_44251 < 0)
						{
							Global_44251 = 0;
						}
						break;
					}
				}
		}
		Global_53195[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_53195[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_53195[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53195[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_53195[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_53195[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44249 = (Global_44249 - 1);
						if (Global_44249 < 0)
						{
							Global_44249 = 0;
						}
						break;
					case 1:
						Global_44250 = (Global_44250 - 1);
						if (Global_44250 < 0)
						{
							Global_44250 = 0;
						}
						break;
					case 2:
						Global_44251 = (Global_44251 - 1);
						if (Global_44251 < 0)
						{
							Global_44251 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_53557[iVar9 /*203*/].f_1 == iParam1 && Global_53557[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_53195[iParam0 /*120*/].f_18[iVar0] = Global_53557[iVar8 /*203*/].f_1;
		Global_53195[iParam0 /*120*/].f_1[iVar0] = (Global_53557[iVar8 /*203*/].f_9 - 1);
		Global_53195[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_53195[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53195[iParam0 /*120*/]++;
		iVar10 = Global_53195[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_53557[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_44257[iVar11 /*12*/].f_2;
		if (Global_53557[iVar8 /*203*/].f_10[(Global_53557[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53557[iVar8 /*203*/].f_10[(Global_53557[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { __LIB_10__::func_690(Global_44257[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_53195[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_366(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				case 1:
					if (iVar2 == 249)
					{
						func_366(1, iVar1, iVar2, "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_366(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				case 2:
					func_366(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_366(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x27EAD
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = __LIB_20__::func_728();
	bVar1 = false;
	StringCopy(&cVar2, __LIB_10__::func_689(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */);
				break;
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */);
				break;
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */);
				break;
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			__LIB_10__::func_687(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(__LIB_10__::func_688(iParam1)), 0));
		}
		else
		{
			__LIB_10__::func_687(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(__LIB_10__::func_688(iParam1)), 0));
		}
		switch (Global_20266)
		{
			case 0:
				StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
				Global_44249++;
				if (Global_44249 > 16)
				{
					Global_44249 = 16;
				}
				break;
			case 2:
				StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
				Global_44251++;
				if (Global_44251 > 16)
				{
					Global_44251 = 16;
				}
				break;
			case 1:
				StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
				Global_44250++;
				if (Global_44250 > 16)
				{
					Global_44250 = 16;
				}
				break;
			default:
				StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20255, true);
	}
}

void func_373()//Position - 0x28882
{
	__LIB_26__::func_490(801347631, 1, 7, 12, 1000, 1000, -1, 80, -1, 0);
}

void func_374()//Position - 0x288A3
{
	int iVar0;
	iVar0 = Global_113386.f_1.f_126[3 /*23*/].f_2[1];
	if (iVar0 == 0)
	{
		iVar0 = 200000;
	}
	__LIB_39__::func_706(1, 1, 96, iVar0, 0);
}

void func_375()//Position - 0x288D5
{
	if (__LIB_11__::func_509(7))
	{
		func_364(7, 0);
	}
	else if (!__LIB_11__::func_508(7))
	{
		func_360(7, 0);
	}
	__LIB_0__::func_71(78, 0);
}

void func_376()//Position - 0x28904
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Global_113386.f_1.f_126[2 /*23*/].f_2[0];
	if (iVar0 == 0)
	{
		iVar0 = 325000;
	}
	iVar1 = Global_113386.f_1.f_126[2 /*23*/].f_2[1];
	if (iVar1 == 0)
	{
		iVar1 = 325000;
	}
	iVar2 = Global_113386.f_1.f_126[2 /*23*/].f_2[2];
	if (iVar2 == 0)
	{
		iVar2 = 325000;
	}
	__LIB_39__::func_706(0, 1, 96, iVar0, 0);
	__LIB_39__::func_706(1, 1, 96, iVar1, 0);
	__LIB_39__::func_706(2, 1, 96, iVar2, 0);
}

void func_377()//Position - 0x2898A
{
	int iVar0;
	int iVar1;
	iVar0 = Global_113386.f_1.f_126[0 /*23*/].f_2[0];
	if (iVar0 == 0)
	{
		iVar0 = 83100;
	}
	iVar1 = Global_113386.f_1.f_126[0 /*23*/].f_2[1];
	if (iVar1 == 0)
	{
		iVar1 = 28000;
	}
	__LIB_39__::func_706(0, 1, 32, iVar0, 0);
	__LIB_39__::func_706(1, 1, 32, iVar1, 0);
	__LIB_0__::func_71(74, 60000);
	__LIB_11__::func_792(1595158098);
	__LIB_11__::func_792(-420969532);
	__LIB_0__::func_71(128, 0);
}

void func_378()//Position - 0x28A0A
{
	if (__LIB_11__::func_509(7))
	{
		func_364(7, 0);
	}
	else if (!__LIB_11__::func_508(7))
	{
		func_360(7, 0);
	}
	if (__LIB_11__::func_509(6))
	{
		func_364(6, 0);
	}
	else if (!__LIB_11__::func_508(6))
	{
		func_360(6, 0);
	}
}

void func_379()//Position - 0x28A52
{
	func_332(11, 0);
}

void func_380()//Position - 0x28A61
{
	if (!__LIB_29__::func_561(12))
	{
		__LIB_36__::func_488(46, 0, 0);
		func_332(12, 0);
	}
}

void func_382()//Position - 0x28A95
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), true);
	}
	__LIB_0__::func_503(68, 1);
}

void func_383()//Position - 0x28AB8
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), true);
	}
	__LIB_0__::func_503(67, 1);
}

void func_384()//Position - 0x28ADB
{
	__LIB_36__::func_488(40, 2, 1);
}

void func_385()//Position - 0x28AEB
{
	__LIB_36__::func_488(31, 2, 1);
}

void func_386()//Position - 0x28AFB
{
	__LIB_36__::func_488(31, 0, 1);
}

void func_387()//Position - 0x28B0B
{
	__LIB_40__::func_650(19, 2, 1);
	__LIB_36__::func_488(19, 2, 1);
}

void func_404()//Position - 0x29030
{
	int iVar0;
	iVar0 = 82;
	if (__LIB_30__::func_299(82) && __LIB_10__::func_861(82))
	{
		HUD::SET_BLIP_FLASHES(Global_32338[iVar0 /*23*/].f_19, true);
		HUD::SET_BLIP_FLASH_TIMER(Global_32338[iVar0 /*23*/].f_19, 10000);
	}
}

void func_407()//Position - 0x29105
{
	int iVar0;
	iVar0 = HUD::GET_FIRST_BLIP_INFO_ID(66);
	if (HUD::DOES_BLIP_EXIST(iVar0))
	{
		HUD::SET_BLIP_FLASHES(iVar0, true);
		HUD::SET_BLIP_FLASH_TIMER(iVar0, 10000);
	}
}

void func_408()//Position - 0x2912E
{
	int iVar0;
	iVar0 = 243;
	while (iVar0 <= 262)
	{
		if ((__LIB_31__::func_84(iVar0) && !HUD::IS_RADAR_HIDDEN()) && !MISC::IS_FRONTEND_FADING())
		{
			HUD::SET_BLIP_FLASHES(Global_32338[iVar0 /*23*/].f_19, true);
			HUD::SET_BLIP_FLASH_TIMER(Global_32338[iVar0 /*23*/].f_19, 10000);
		}
		iVar0++;
	}
}

void func_415()//Position - 0x29477
{
	__LIB_11__::func_792(-375893868);
	__LIB_11__::func_792(-658009473);
	__LIB_0__::func_503(50, 1);
}

void func_416()//Position - 0x2949A
{
	__LIB_11__::func_792(546458037);
	if (!__LIB_0__::func_2(0))
	{
		__LIB_18__::func_203("AM_H_CHOP" /* GXT: Chop is now at Franklin's house. Franklin can interact with Chop at ~BLIP_CHOP~ */, 0, 3000, -1, 10000, 2, 0, 0, 0);
	}
	__LIB_0__::func_503(63, 1);
	if (!__LIB_0__::func_368(126))
	{
		__LIB_10__::func_604(138, 1, 0);
		__LIB_30__::func_298(138);
		__LIB_20__::func_574(138);
		__LIB_18__::func_191(80, 1, 0, 1, 0);
	}
	else
	{
		__LIB_10__::func_604(139, 1, 0);
		__LIB_20__::func_576(139);
		__LIB_30__::func_298(139);
	}
}

void func_417()//Position - 0x2950F
{
	__LIB_11__::func_792(-651018670);
	__LIB_11__::func_792(-236506853);
	__LIB_0__::func_503(14, 1);
}

void func_418()//Position - 0x29532
{
	if (!__LIB_0__::func_368(48))
	{
		__LIB_0__::func_503(48, 1);
	}
}

void func_419()//Position - 0x2954B
{
	if (!__LIB_0__::func_368(48))
	{
		__LIB_0__::func_503(48, 1);
		if (__LIB_20__::func_728() != 1)
		{
			func_420(12, 1, "ASS1_MIS" /* GXT: I've got an opportunity for you. Meet me at Del Perro pier. */, 1, 0, 0, 0, 0, 0, 0, 1);
		}
	}
	__LIB_11__::func_792(joaat("TEXT_FIB4_F_ASS1"));
	__LIB_11__::func_792(joaat("TEXT_FIB4_MT_ASS1"));
}

int func_420(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x29594
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	if (__LIB_32__::func_739(iParam0, sParam2, iParam3, iVar0, sVar1, sVar3, iVar2, iParam4, iParam5, iParam6, bParam8, iParam9, iParam10, iVar4, sVar5, sVar6, iParam1) == 1)
	{
		if (bParam8 == 1)
		{
			Global_8843 = iParam7;
			Global_8746[3 /*6*/] = { __LIB_0__::func_165(iParam0) };
			Global_8823 = iParam0;
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

void func_438()//Position - 0x2A674
{
	__LIB_35__::func_161(joaat("TEXT_FIB4_F_ASS1"), 1, 2, 12, 15000, 5000, -1, 51, -1, 0, 1);
	__LIB_35__::func_161(joaat("TEXT_FIB4_MT_ASS1"), 1, 5, 1, 15000, 5000, -1, 51, -1, 0, 1);
	__LIB_11__::func_792(1635608802);
}

void func_439()//Position - 0x2A6B9
{
	__LIB_11__::func_792(joaat("CALL_FIB4_M_UNLOCK"));
	__LIB_11__::func_792(joaat("CALL_FIB4_F_UNLOCK"));
	__LIB_11__::func_792(joaat("CALL_FIB4_T_UNLOCK"));
	__LIB_11__::func_792(joaat("TEXT_FIB4_M_UNLOCK"));
	__LIB_11__::func_792(joaat("TEXT_FIB4_FT_UNLOCK"));
	__LIB_0__::func_503(47, 1);
}

void func_440()//Position - 0x2A6FA
{
	__LIB_11__::func_792(-444489072);
	__LIB_11__::func_792(154402960);
	__LIB_6__::func_826(23, 2);
	__LIB_26__::func_46(23);
	__LIB_0__::func_503(44, 1);
}

void func_441()//Position - 0x2A72B
{
	__LIB_11__::func_792(joaat("TEXT_DOCKS_2_MF_UNLOCK"));
	__LIB_11__::func_792(joaat("CALL_DOCKS_2_T_UNLOCK"));
	__LIB_0__::func_503(23, 1);
}

void func_443()//Position - 0x2A760
{
	bool bVar0;
	int iVar1;
	__LIB_0__::func_503(126, 1);
	func_446(6, 1);
	__LIB_12__::func_291(6, 1);
	func_446(5, 0);
	__LIB_6__::func_770(4, 1);
	__LIB_6__::func_770(5, 1);
	if (__LIB_11__::func_193(157) != 1)
	{
		__LIB_18__::func_191(156, 1, 0, 1, 0);
	}
	__LIB_18__::func_191(159, 1, 0, 1, 0);
	__LIB_18__::func_191(160, 1, 0, 1, 0);
	__LIB_18__::func_191(96, 1, 0, 1, 0);
	bVar0 = __LIB_20__::func_728();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_317(bVar0))
		{
			if (bVar0 == 1)
			{
				__LIB_11__::func_952(12, PLAYER::PLAYER_PED_ID());
			}
		}
	}
	__LIB_12__::func_291(5, 0);
	__LIB_6__::func_770(2, 0);
	__LIB_6__::func_770(3, 0);
	__LIB_18__::func_191(153, 1, 0, 1, 0);
	__LIB_18__::func_191(155, 0, 0, 1, 0);
	__LIB_18__::func_191(154, 0, 0, 1, 0);
	__LIB_18__::func_191(80, 0, 0, 1, 0);
	if (!__LIB_0__::func_368(63))
	{
		__LIB_11__::func_792(546458037);
		__LIB_11__::func_792(joaat("TEXT_CHOP_UNLOCK"));
		if (!__LIB_0__::func_2(0))
		{
			__LIB_18__::func_203("AM_H_CHOP" /* GXT: Chop is now at Franklin's house. Franklin can interact with Chop at ~BLIP_CHOP~ */, 0, 3000, -1, 10000, 2, 0, 0, 0);
			__LIB_35__::func_161(joaat("TEXT_CHOP_UNLOCK"), 1, 2, 19, 10000, 10000, -1, 0, -1, 524288, 1);
		}
		__LIB_0__::func_503(63, 1);
	}
	__LIB_10__::func_604(138, 0, 0);
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("chop")) == 0)
	{
		__LIB_10__::func_604(139, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_113386.f_18533.f_24[1 /*5*/][iVar1] = 1;
		iVar1++;
	}
	Global_113386.f_20118.f_264 = 1;
	if (!__LIB_0__::func_2(0))
	{
		__LIB_18__::func_203("AM_H_HILLS" /* GXT: Franklin has been moved into a new house in Vinewood Hills at ~BLIP_SAFEHOUSE~ This location can now be used to save progress and change clothes. */, 2, 3000, -1, 10000, 2, 0, 0, 0);
	}
}

void func_446(int iParam0, bool bParam1)//Position - 0x2A986
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	MISC::SET_SAVE_HOUSE(Global_95479[iParam0 /*10*/].f_8, bParam1, true);
	func_474(iParam0);
	__LIB_20__::func_320(iParam0, 0);
	__LIB_20__::func_182(iParam0);
	__LIB_39__::func_917(iParam0);
}

void func_474(int iParam0)//Position - 0x2F0D5
{
	bool bVar0;
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_95479[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (BitTest(Global_113386.f_7229[iParam0], 0))
	{
		if (Global_95479[iParam0 /*10*/].f_9 != __LIB_20__::func_728())
		{
			bVar0 = true;
		}
		else if (!func_475(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (__LIB_0__::func_369(6))
		{
			bVar0 = false;
		}
	}
	if (__LIB_6__::func_854(14))
	{
		bVar0 = false;
	}
	__LIB_10__::func_604(Global_95479[iParam0 /*10*/].f_7, bVar0, 0);
}

int func_475(int iParam0)//Position - 0x2F15F
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_475(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_10__::func_605(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_478()//Position - 0x2F2DD
{
	__LIB_0__::func_503(118, 1);
	__LIB_6__::func_770(3, 1);
}

void func_479()//Position - 0x2F2F2
{
	__LIB_0__::func_503(9, 1);
}

void func_480()//Position - 0x2F301
{
	__LIB_35__::func_161(866793964, 1, 2, 19, 60000, 10000, 2, 44, -1, 262144, 1);
}

void func_481()//Position - 0x2F327
{
	__LIB_11__::func_792(joaat("TEXT_ARM2_END"));
	__LIB_11__::func_792(joaat("TEXT_FRAN0_END"));
	__LIB_0__::func_503(62, 1);
	__LIB_35__::func_161(joaat("TEXT_MONKEY_MOSAIC_LAMAR"), 1, 2, 19, 800000, 20000, -1, 0, -1, 0, 1);
}

void func_482()//Position - 0x2F364
{
	func_360(40, 1);
	func_360(48, 1);
	func_360(58, 1);
	func_360(71, 1);
}

void func_483(int iParam0)//Position - 0x2F388
{
	__LIB_10__::func_1(iParam0);
}

void func_485()//Position - 0x2F5C0
{
	__LIB_18__::func_203("AM_H_SHOOT" /* GXT: The Shooting Range is available at ~BLIP_SHOOTINGRANGE_GUNSHOP~ */, 2, 3000, 60000, 10000, 7, 0, 0, 0);
}

void func_486()//Position - 0x2F5DF
{
	int iVar0;
	__LIB_30__::func_298(48);
	__LIB_29__::func_816(48, 1);
	__LIB_9__::func_989(0, 11, 1);
	__LIB_32__::func_812(28, 1, 0);
	__LIB_32__::func_812(29, 1, 0);
	__LIB_32__::func_812(30, 1, 0);
	__LIB_32__::func_812(31, 1, 0);
	__LIB_32__::func_812(32, 1, 0);
	__LIB_32__::func_812(33, 1, 0);
	__LIB_32__::func_812(34, 1, 0);
	__LIB_32__::func_812(35, 1, 0);
	__LIB_32__::func_812(36, 1, 0);
	__LIB_32__::func_812(37, 1, 0);
	__LIB_32__::func_812(38, 1, 0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_487(iVar0, joaat("WEAPON_ASSAULTRIFLE"), 1, 1);
		func_487(iVar0, joaat("WEAPON_GRENADE"), 1, 1);
		func_487(iVar0, joaat("WEAPON_PISTOL"), 1, 1);
		func_487(iVar0, joaat("WEAPON_MICROSMG"), 1, 1);
		func_487(iVar0, joaat("WEAPON_SMG"), 1, 1);
		func_487(iVar0, joaat("WEAPON_KNIFE"), 1, 1);
		iVar0++;
	}
}

void func_487(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2F6B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_317(iParam0))
	{
		iVar0 = __LIB_20__::func_898(iParam0, iParam1);
		iVar1 = __LIB_7__::func_250(iParam1);
		iVar2 = __LIB_0__::func_158(iVar1);
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		__LIB_26__::func_706(iParam0, iParam1, iVar0);
		if (bParam3)
		{
			func_488(iParam0, iParam1);
		}
	}
}

void func_488(int iParam0, int iParam1)//Position - 0x2F70E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = __LIB_6__::func_851(iParam1, iVar0);
	while (iVar1 != 0)
	{
		__LIB_36__::func_144(iParam0, iParam1, iVar1, 1);
		iVar0++;
		iVar1 = __LIB_6__::func_851(iParam1, iVar0);
	}
}

void func_507(int iParam0, bool bParam1)//Position - 0x33550
{
	int iVar0;
	if (bParam1)
	{
		__LIB_32__::func_812(39, 1, 0);
		__LIB_32__::func_812(40, 1, 0);
		__LIB_32__::func_812(41, 1, 0);
		__LIB_32__::func_812(42, 1, 0);
		__LIB_32__::func_812(43, 1, 0);
	}
	func_508(1, iParam0, 0);
	func_508(2, iParam0, 1);
	func_508(3, iParam0, 2);
	func_508(4, iParam0, 3);
	func_508(103, iParam0, 3);
	func_508(5, iParam0, 0);
	func_508(6, iParam0, 0);
	func_508(7, iParam0, 0);
	func_508(8, iParam0, 0);
	func_508(9, iParam0, 0);
	func_508(10, iParam0, 0);
	func_508(11, iParam0, 0);
	func_508(12, iParam0, 0);
	func_508(13, iParam0, 0);
	func_508(14, iParam0, 2);
	func_508(15, iParam0, 3);
	func_508(16, iParam0, 3);
	func_508(17, iParam0, 0);
	func_508(18, iParam0, 1);
	func_508(19, iParam0, 2);
	func_508(20, iParam0, 2);
	func_508(101, iParam0, 3);
	func_508(102, iParam0, 3);
	func_508(21, iParam0, 0);
	func_508(22, iParam0, 1);
	func_508(23, iParam0, 2);
	func_508(24, iParam0, 3);
	func_508(25, iParam0, 0);
	func_508(26, iParam0, 1);
	func_508(27, iParam0, 2);
	func_508(28, iParam0, 3);
	func_508(29, iParam0, 0);
	func_508(30, iParam0, 0);
	func_508(31, iParam0, 1);
	func_508(32, iParam0, 2);
	func_508(33, iParam0, 3);
	func_508(34, iParam0, 0);
	func_508(35, iParam0, 0);
	func_508(36, iParam0, 0);
	func_508(37, iParam0, 0);
	func_508(38, iParam0, 0);
	func_508(39, iParam0, 0);
	func_508(40, iParam0, 0);
	func_508(41, iParam0, 0);
	func_508(42, iParam0, 0);
	func_508(43, iParam0, 0);
	func_508(44, iParam0, 2);
	func_508(45, iParam0, 3);
	func_508(99, iParam0, 1);
	func_508(46, iParam0, 1);
	func_508(55, iParam0, 0);
	func_508(60, iParam0, 0);
	func_508(59, iParam0, 1);
	func_508(58, iParam0, 1);
	func_508(56, iParam0, 2);
	func_508(57, iParam0, 3);
	func_508(47, iParam0, 0);
	func_508(48, iParam0, 1);
	func_508(49, iParam0, 2);
	func_508(50, iParam0, 3);
	func_508(51, iParam0, 0);
	func_508(52, iParam0, 1);
	func_508(53, iParam0, 2);
	func_508(54, iParam0, 3);
	func_508(106, iParam0, 3);
	func_508(61, iParam0, 0);
	func_508(62, iParam0, 1);
	func_508(63, iParam0, 1);
	func_508(64, iParam0, 2);
	func_508(65, iParam0, 2);
	func_508(66, iParam0, 0);
	func_508(67, iParam0, 1);
	func_508(68, iParam0, 2);
	func_508(69, iParam0, 3);
	func_508(70, iParam0, 3);
	func_508(71, iParam0, 3);
	func_508(72, iParam0, 0);
	func_508(73, iParam0, 0);
	func_508(74, iParam0, 1);
	func_508(75, iParam0, 2);
	func_508(76, iParam0, 3);
	func_508(77, iParam0, 0);
	func_508(78, iParam0, 1);
	func_508(79, iParam0, 2);
	func_508(80, iParam0, 3);
	func_508(100, iParam0, 3);
	func_508(81, iParam0, 0);
	func_508(82, iParam0, 1);
	func_508(83, iParam0, 2);
	func_508(84, iParam0, 3);
	func_508(105, iParam0, 3);
	func_508(85, iParam0, 0);
	func_508(86, iParam0, 0);
	func_508(87, iParam0, 0);
	func_508(88, iParam0, 0);
	func_508(104, iParam0, 0);
	func_508(91, iParam0, 0);
	func_508(92, iParam0, 1);
	func_508(93, iParam0, 2);
	func_508(94, iParam0, 3);
	func_508(95, iParam0, 0);
	func_508(96, iParam0, 1);
	func_508(97, iParam0, 2);
	func_508(98, iParam0, 3);
	if (iParam0 >= 3)
	{
		iVar0 = 0;
		while (iVar0 < 90)
		{
			func_508(iVar0, iParam0, 3);
			iVar0++;
		}
	}
}

void func_508(int iParam0, int iParam1, int iParam2)//Position - 0x33948
{
	int iVar0;
	if (iParam1 >= iParam2)
	{
		if (!BitTest(Global_113386.f_2363.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32)))
		{
			iVar0 = 0;
			while (iVar0 < Global_113386.f_20118)
			{
				Global_113386.f_20118[iVar0 /*43*/].f_42 = 1;
				iVar0++;
			}
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2241[(iParam0 / 32)]), (iParam0 % 32));
			if (iParam2 == 0)
			{
				func_509(0, iParam0, "", 0, 0, 2);
			}
		}
	}
}

void func_509(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x339CB
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
	if (__LIB_10__::func_185(iParam0) && func_518(iParam1, -1, 0, -1))
	{
		if (iParam5 == 8 && iParam4 == 2)
		{
			iParam3 = (iParam3 - 20);
		}
		if ((iParam5 == 15 && iParam3 > 21) && !__LIB_10__::func_179(iParam0))
		{
			iParam3 = (iParam3 - 21);
		}
		if (iParam0 == joaat("oppressor2"))
		{
			if (iParam5 == 23)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
		else if (iParam0 == joaat("strikeforce"))
		{
			if (iParam5 == 18)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
		if (iParam5 == 58 && iParam4 == 2)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam2, "CMOD_TYR_LG" /* GXT: Low Grip Tires */))
			{
				if (__LIB_1__::func_932(iParam0) && __LIB_2__::func_102(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_137(31778, -1))
					{
						__LIB_0__::func_521(31778, 1, -1);
					}
				}
			}
		}
	}
	if (iParam1 == -1)
	{
		if (!__LIB_10__::func_185(iParam0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam0 == 0)
				{
					iVar0 = 0;
					while (iVar0 < 306)
					{
						iVar1 = iVar0 * 3;
						iVar2 = __LIB_10__::func_178(MISC::GET_HASH_KEY(sParam2));
						if (iVar2 != -1)
						{
							MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2690[(iVar1 + (iVar2 / 32))]), (iVar2 % 32));
						}
						iVar0++;
					}
				}
				else
				{
					iVar3 = __LIB_10__::func_177(iParam0);
					if (iVar3 != -1)
					{
						iVar4 = iVar3 * 3;
						iVar5 = __LIB_10__::func_178(MISC::GET_HASH_KEY(sParam2));
						if (iVar5 != -1)
						{
							MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2690[(iVar4 + (iVar5 / 32))]), (iVar5 % 32));
						}
					}
					iVar6 = __LIB_10__::func_176(iParam0, iParam3, iParam4, iParam5);
					if (iVar6 > 0)
					{
						MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_3609[(iVar6 / 32)]), (iVar6 % 32));
					}
				}
			}
			return;
		}
		else if (func_518(iParam1, -1, 0, -1) || iParam1 == -1)
		{
			iVar7 = __LIB_10__::func_176(iParam0, iParam3, iParam4, iParam5);
			if (iVar7 > 0)
			{
				MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_3609[(iVar7 / 32)]), (iVar7 % 32));
			}
		}
	}
	else if (__LIB_10__::func_185(iParam0) && func_518(iParam1, -1, 0, -1))
	{
		iVar8 = __LIB_10__::func_176(iParam0, iParam3, iParam4, iParam5);
		if (iVar8 > 0)
		{
			MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_3609[(iVar8 / 32)]), (iVar8 % 32));
		}
	}
	if (iParam0 == 0)
	{
		iVar9 = 0;
		while (iVar9 < 306)
		{
			if (func_518(iParam1, -1, 0, -1))
			{
				iVar10 = (iVar9 * 4 + (iParam1 / 32));
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_47[iVar10]), (iParam1 % 32));
				}
				else
				{
					MISC::SET_BIT(&(Global_113386.f_668.f_87[iVar10]), (iParam1 % 32));
				}
			}
			iVar9++;
		}
	}
	else if (func_518(iParam1, -1, 0, -1))
	{
		iVar11 = __LIB_10__::func_177(iParam0);
		if (iVar11 != -1)
		{
			iVar12 = (iVar11 * 4 + (iParam1 / 32));
			iVar13 = (iParam1 % 32);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((iParam0 == joaat("avarus") || iParam0 == joaat("chimera")) || iParam0 == joaat("esskey")) && iParam1 == 1) || ((iParam1 == 72 || iParam1 == 66) && iParam0 == joaat("esskey")))
				{
					iVar13 = (iVar13 - 1);
				}
				if (iParam0 == joaat("specter2") && (iParam1 == 21 || iParam1 == 72))
				{
					iVar13 = (iVar13 - 1);
				}
				if (iParam0 == joaat("trailerlarge") && iParam1 == 85)
				{
					iVar13++;
				}
				if (iParam0 == joaat("bombushka") && iParam1 == 21)
				{
					iVar13 = (iVar13 - 1);
				}
				if (iVar13 >= 0)
				{
					MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_47[iVar12]), iVar13);
				}
			}
			else
			{
				MISC::SET_BIT(&(Global_113386.f_668.f_87[iVar12]), iVar13);
			}
		}
	}
}

int func_518(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4CA53
{
	int iVar0;
	if (__LIB_2__::func_218(iParam1, iParam3))
	{
		return 1;
	}
	if (__LIB_4__::func_531())
	{
		return 1;
	}
	if (__LIB_10__::func_184(iParam1, iParam3) && __LIB_8__::func_882(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113386.f_2363.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32));
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, false))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam2);
		}
		if (__LIB_10__::func_183(iParam1, iParam3))
		{
			if (iVar0 == joaat("phantom3") || iVar0 == joaat("hauler2"))
			{
				return 1;
			}
			else if (iVar0 == joaat("trailerlarge"))
			{
				if ((iParam0 == 85 || iParam0 == 86) || iParam0 == 87)
				{
					return 1;
				}
			}
		}
		if (__LIB_10__::func_182(iParam1, iParam3))
		{
			if (iVar0 == joaat("avenger"))
			{
				return 1;
			}
		}
		if (__LIB_10__::func_181(iParam1, iParam3))
		{
			if (iVar0 == joaat("oppressor2"))
			{
				return 1;
			}
		}
		if (__LIB_4__::func_529(iParam1, iParam3))
		{
			return 1;
		}
		if (__LIB_2__::func_216(iParam1, iParam3))
		{
			if (iVar0 == joaat("vigilante"))
			{
				if (iParam0 == 85 || iParam0 == 86)
				{
					return 1;
				}
			}
		}
		switch (iVar0)
		{
			case joaat("monster3"):
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("issi4"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("dominator"):
			case joaat("dominator2"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("slamvan4"):
			case joaat("imperator"):
			case joaat("zr380"):
			case joaat("cerberus"):
			case joaat("scarab"):
			case joaat("brutus"):
			case joaat("imperator2"):
			case joaat("imperator3"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("cerberus2"):
			case joaat("scarab2"):
			case joaat("brutus2"):
			case joaat("cerberus3"):
			case joaat("scarab3"):
			case joaat("brutus3"):
			case joaat("slamvan5"):
			case joaat("slamvan6"):
			case joaat("monster4"):
			case joaat("monster5"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("rcbandito"):
				return 1;
				break;
		}
		if (((iParam0 == 85 || iParam0 == 86) || iParam0 == 87) || iParam0 == 88)
		{
			if (__LIB_24__::func_933(iParam2) || __LIB_0__::func_266(iVar0))
			{
				return 1;
			}
		}
		if (iParam0 == 77 || iParam0 == 78)
		{
			if (iVar0 == joaat("thruster"))
			{
				return 1;
			}
		}
		if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
		{
			if (iVar0 == joaat("oppressor2"))
			{
				return 1;
			}
		}
		if (((iParam0 == 72 || iParam0 == 73) || iParam0 == 74) || iParam0 == 75)
		{
			if (iVar0 == joaat("barrage") || __LIB_0__::func_266(iVar0))
			{
				return 1;
			}
		}
		if ((iParam0 == 21 || iParam0 == 22) || iParam0 == 23)
		{
			if (__LIB_0__::func_266(iVar0))
			{
				return 1;
			}
		}
		else if (iParam0 == 95 || iParam0 == 96)
		{
			if (__LIB_0__::func_266(iVar0) || __LIB_0__::func_596(iVar0))
			{
				return 1;
			}
		}
		if ((((((iParam0 == 17 || iParam0 == 18) || iParam0 == 19) || iParam0 == 20) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
		{
			if (__LIB_0__::func_266(iVar0))
			{
				return 1;
			}
		}
	}
	if (__LIB_0__::func_3() == 0)
	{
		return func_519(iParam0, -1);
	}
	return 1;
}

var func_519(int iParam0, int iParam1)//Position - 0x4CE31
{
	var uVar0;
	int iVar1;
	uVar0 = func_520(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__::func_158(iVar1));
}

var func_520(var uParam0, int iParam1)//Position - 0x4CE50
{
	var uVar0;
	uVar0 = __LIB_0__::func_534(__LIB_10__::func_180(uParam0), iParam1, 0);
	return uVar0;
}

void func_552()//Position - 0x4E1B2
{
	__LIB_32__::func_812(21, 1, 0);
	__LIB_1__::func_285(21);
	__LIB_40__::func_992();
}

void func_554()//Position - 0x4E51C
{
	__LIB_32__::func_812(0, 1, 0);
	__LIB_32__::func_812(1, 1, 0);
	__LIB_32__::func_812(2, 1, 0);
	__LIB_32__::func_812(3, 1, 0);
	__LIB_32__::func_812(4, 1, 0);
	__LIB_32__::func_812(5, 1, 0);
	__LIB_32__::func_812(6, 1, 0);
}

void func_555()//Position - 0x4E555
{
	__LIB_29__::func_825(30, 1);
}

void func_557()//Position - 0x4E5C9
{
	__LIB_29__::func_825(13, 1);
}

void func_558()//Position - 0x4E5D8
{
	__LIB_29__::func_825(32, 1);
}

void func_559()//Position - 0x4E5E7
{
	__LIB_29__::func_825(23, 1);
	__LIB_29__::func_825(15, 1);
	__LIB_29__::func_825(29, 1);
	__LIB_29__::func_825(24, 1);
	__LIB_29__::func_825(17, 1);
	__LIB_29__::func_825(11, 1);
	__LIB_29__::func_825(16, 1);
	__LIB_29__::func_825(18, 1);
	__LIB_29__::func_825(12, 1);
	__LIB_29__::func_825(27, 1);
	__LIB_29__::func_825(19, 1);
	__LIB_29__::func_825(28, 1);
	__LIB_29__::func_825(22, 1);
	__LIB_29__::func_825(21, 1);
	__LIB_29__::func_825(14, 1);
	__LIB_29__::func_825(7, 1);
	__LIB_29__::func_825(3, 1);
	__LIB_29__::func_825(30, 0);
}

void func_561()//Position - 0x4E673
{
	__LIB_0__::func_503(74, 1);
	__LIB_29__::func_825(0, 1);
	__LIB_29__::func_825(1, 1);
	__LIB_29__::func_825(26, 1);
	__LIB_29__::func_825(2, 1);
	__LIB_29__::func_825(4, 1);
	__LIB_29__::func_825(9, 1);
	__LIB_29__::func_825(5, 1);
	__LIB_29__::func_825(6, 1);
	__LIB_29__::func_825(10, 1);
	__LIB_29__::func_825(8, 1);
	__LIB_29__::func_825(20, 1);
	__LIB_29__::func_825(25, 1);
	__LIB_29__::func_825(31, 1);
}

void func_562()//Position - 0x4E6D7
{
	__LIB_10__::func_604(68, 1, 0);
	__LIB_10__::func_604(96, 1, 0);
	__LIB_10__::func_604(97, 1, 0);
	__LIB_10__::func_604(98, 1, 0);
	__LIB_10__::func_604(99, 1, 0);
	__LIB_10__::func_604(100, 1, 0);
	__LIB_10__::func_604(101, 1, 0);
	__LIB_10__::func_604(102, 1, 0);
	__LIB_10__::func_604(103, 1, 0);
	__LIB_9__::func_989(0, 2, 1);
	__LIB_9__::func_989(0, 13, 1);
	__LIB_18__::func_203("AM_H_SWTCH5" /* GXT: Hobbies and Pastimes are available.~n~~BLIP_GUN_SHOP~ Ammu-Nation ~n~~BLIP_STRIP_CLUB~ Strip Club ~n~~BLIP_CINEMA~ Cinema ~n~~BLIP_FAIRGROUND~ Fairground ~n~~BLIP_GOLF~ Golf ~n~~BLIP_TENNIS~ Tennis */, 2, 3000, -1, 10000, 7, 0, 0, 0);
	__LIB_30__::func_298(68);
	__LIB_30__::func_298(96);
	__LIB_11__::func_792(joaat("TEXT_TENNIS_UNLOCK"));
	__LIB_11__::func_792(-1845612607);
}

void func_563()//Position - 0x4E76A
{
	__LIB_18__::func_203("AM_H_CRCE" /* GXT: Stock Car Races are now available at ~BLIP_RACE_LAND~ */, 0, 3000, -1, 10000, 7, 0, 0, 0);
	__LIB_9__::func_989(0, 19, 1);
	__LIB_30__::func_298(65);
	__LIB_10__::func_604(65, 1, 0);
	__LIB_20__::func_574(65);
}

void func_564()//Position - 0x4E7A2
{
	if (__LIB_0__::func_116())
	{
		if (__LIB_0__::func_368(136))
		{
			func_563();
		}
		else
		{
			__LIB_35__::func_161(joaat("TEXT_COUNTRY_RACE_UNLOCK"), 6, 4, 20, 120000, 30000, -1, 39, -1, 0, 1);
		}
		Global_113386.f_25073.f_10 = 1;
	}
}

void func_565()//Position - 0x4E7E6
{
	__LIB_30__::func_298(110);
	__LIB_30__::func_298(111);
	__LIB_10__::func_604(110, 1, 0);
	__LIB_10__::func_604(111, 1, 0);
	__LIB_9__::func_989(0, 18, 1);
	__LIB_20__::func_574(110);
}

void func_566()//Position - 0x4E818
{
	__LIB_30__::func_298(107);
	__LIB_10__::func_604(107, 1, 0);
	__LIB_9__::func_989(0, 17, 1);
	__LIB_18__::func_191(113, 1, 0, 1, 0);
	__LIB_20__::func_574(107);
	__LIB_18__::func_203("AM_H_FOU" /* GXT: Triathlon event now available at ~BLIP_TRIATHLON~ */, 0, 3000, -1, 10000, 7, 0, 0, 0);
}

void func_567()//Position - 0x4E85A
{
	__LIB_9__::func_989(0, 14, 1);
}

void func_568()//Position - 0x4E86A
{
	__LIB_9__::func_989(0, 12, 1);
	__LIB_0__::func_503(56, 1);
}

void func_569()//Position - 0x4E881
{
	__LIB_9__::func_989(0, 10, 1);
	__LIB_30__::func_298(95);
	__LIB_10__::func_604(95, 1, 0);
	BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_stunts");
	__LIB_20__::func_574(95);
	__LIB_18__::func_203("AM_H_STNTP" /* GXT: Stunt Plane time trials now available at ~BLIP_RACE_AIR~ */, 1, 3000, -1, 10000, 7, 0, 0, 0);
}

void func_570()//Position - 0x4E8C1
{
	__LIB_30__::func_298(94);
	__LIB_10__::func_604(94, 1, 0);
	__LIB_9__::func_989(0, 9, 1);
}

void func_571()//Position - 0x4E8DF
{
	__LIB_18__::func_203("AM_H_SRAC" /* GXT: Franklin can take part in Street Races throughout San Andreas at ~BLIP_RACE_LAND~ These races are only available between 20:00 and 05:00. */, 0, 3000, -1, 10000, 2, 0, 0, 0);
}

void func_572()//Position - 0x4E8FB
{
	__LIB_9__::func_989(0, 8, 1);
	MISC::SET_BIT(&(Global_113386.f_24979.f_1), 0);
	MISC::SET_BIT(&(Global_113386.f_24979.f_1), 1);
	if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), __LIB_11__::func_156(87, 0)) < 43681f)
	{
		MISC::SET_BIT(&(Global_113386.f_24979.f_3), 1);
	}
	if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), __LIB_11__::func_156(86, 0)) < 43681f)
	{
		MISC::SET_BIT(&(Global_113386.f_24979.f_3), 0);
	}
}

void func_573()//Position - 0x4E97B
{
	__LIB_9__::func_989(0, 7, 1);
	Global_113386.f_24976 = 0;
	MISC::SET_BIT(&(Global_113386.f_24976.f_2), 0);
	MISC::SET_BIT(&(Global_113386.f_24976.f_2), 1);
	MISC::SET_BIT(&(Global_113386.f_24976.f_2), 2);
	MISC::SET_BIT(&(Global_113386.f_24976.f_2), 3);
}

void func_574()//Position - 0x4E9CA
{
	__LIB_11__::func_792(1440910066);
	__LIB_11__::func_792(2063740346);
	__LIB_11__::func_792(957098437);
	func_573();
	__LIB_18__::func_203("AM_H_SEAR" /* GXT: Sea Races are now available at ~BLIP_RACE_SEA~ */, 0, 3000, -1, 10000, 7, 0, 0, 0);
}

void func_575()//Position - 0x4EA08
{
	__LIB_30__::func_298(76);
	__LIB_9__::func_989(0, 5, 1);
	__LIB_10__::func_604(76, 1, 0);
	__LIB_20__::func_574(76);
	__LIB_18__::func_203("AM_H_PLTSC" /* GXT: Flight School now available at ~BLIP_FLIGHT_SCHOOL~ */, 0, 3000, -1, 10000, 7, 0, 0, 0);
}

void func_576()//Position - 0x4EA3F
{
	__LIB_30__::func_298(70);
	__LIB_9__::func_989(0, 4, 1);
	__LIB_0__::func_503(69, 1);
	__LIB_10__::func_604(70, 1, 0);
	__LIB_20__::func_574(70);
	__LIB_18__::func_203("AM_H_OFFRR" /* GXT: Offroad Races now available at ~BLIP_OFF_ROAD_RACING~ */, 0, 3000, -1, 10000, 4, 0, 0, 0);
}

void func_577()//Position - 0x4EA7D
{
	__LIB_10__::func_604(69, 1, 0);
	func_88(__LIB_19__::func_811(2), 12, 20, 1, 1);
	__LIB_9__::func_989(0, 3, 1);
	__LIB_20__::func_574(69);
	__LIB_30__::func_298(69);
	__LIB_18__::func_203("AM_H_HUNT" /* GXT: Hunting now available at ~BLIP_HUNTING~ for Trevor only. The hunting outfit has been added to Trevor's wardrobe. */, 0, 3000, -1, 10000, 4, 0, 0, 0);
}

void func_578()//Position - 0x4EAC3
{
	__LIB_10__::func_604(68, 1, 0);
	__LIB_9__::func_989(0, 2, 1);
	__LIB_20__::func_574(68);
	__LIB_30__::func_298(68);
	__LIB_18__::func_203("AM_H_GOLF" /* GXT: Golf now available at ~BLIP_GOLF~ */, 0, 3000, -1, 10000, 7, 0, 0, 0);
}

void func_579()//Position - 0x4EAFA
{
	__LIB_9__::func_989(0, 15, 1);
	__LIB_9__::func_989(0, 16, 1);
	__LIB_20__::func_574(105);
	__LIB_20__::func_574(106);
	__LIB_30__::func_298(105);
	__LIB_30__::func_298(106);
}

void func_580()//Position - 0x4EB2A
{
	__LIB_30__::func_298(67);
	__LIB_10__::func_604(67, 1, 0);
	__LIB_9__::func_989(0, 1, 1);
	__LIB_0__::func_503(73, 1);
	__LIB_20__::func_574(67);
	__LIB_30__::func_298(67);
}

void func_581()//Position - 0x4EB5A
{
	int iVar0;
	__LIB_10__::func_604(125, 1, 0);
	__LIB_10__::func_604(126, 1, 0);
	__LIB_10__::func_604(127, 1, 0);
	__LIB_10__::func_604(128, 1, 0);
	__LIB_10__::func_604(129, 1, 0);
	__LIB_10__::func_604(130, 1, 0);
	__LIB_10__::func_604(131, 1, 0);
	__LIB_10__::func_604(132, 1, 0);
	__LIB_10__::func_604(133, 1, 0);
	__LIB_10__::func_604(134, 1, 0);
	__LIB_10__::func_604(135, 1, 0);
	__LIB_10__::func_604(136, 1, 0);
	__LIB_10__::func_604(137, 1, 0);
	iVar0 = 125;
	if (BitTest(Global_113386.f_18967.f_1, (125 - iVar0)))
	{
		__LIB_11__::func_504(125, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (126 - iVar0)))
	{
		__LIB_11__::func_504(126, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (127 - iVar0)))
	{
		__LIB_11__::func_504(127, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (128 - iVar0)))
	{
		__LIB_11__::func_504(128, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (129 - iVar0)))
	{
		__LIB_11__::func_504(129, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (130 - iVar0)))
	{
		__LIB_11__::func_504(130, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (131 - iVar0)))
	{
		__LIB_11__::func_504(131, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (132 - iVar0)))
	{
		__LIB_11__::func_504(132, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (133 - iVar0)))
	{
		__LIB_11__::func_504(133, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (134 - iVar0)))
	{
		__LIB_11__::func_504(134, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (135 - iVar0)))
	{
		__LIB_11__::func_504(135, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (136 - iVar0)))
	{
		__LIB_11__::func_504(136, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (137 - iVar0)))
	{
		__LIB_11__::func_504(137, 1);
	}
	__LIB_9__::func_989(0, 0, 1);
	__LIB_20__::func_574(125);
	__LIB_30__::func_298(125);
	__LIB_18__::func_203("AM_H_BASEJ" /* GXT: Parachuting now available at ~BLIP_BASE_JUMP~ */, 0, 3000, -1, 10000, 7, 0, 0, 0);
	__LIB_35__::func_161(-1783809705, 1, 2, 52, 200000, 10000, 64, 170, -1, 0, 1);
}

void func_583()//Position - 0x4EDDB
{
	__LIB_30__::func_298(112);
	__LIB_30__::func_298(113);
	__LIB_30__::func_298(114);
	__LIB_10__::func_604(112, 1, 0);
	__LIB_10__::func_604(113, 1, 0);
	__LIB_10__::func_604(114, 1, 0);
	__LIB_0__::func_503(53, 1);
}

