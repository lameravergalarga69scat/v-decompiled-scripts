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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_84 = 20;
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
	int* iLocal_205 = NULL;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int* iLocal_208 = NULL;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	bool bLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	struct<3> Local_218 = { 0, 0, 0 } ;
	struct<3> Local_219 = { 0, 0, 0 } ;
	struct<3> Local_220 = { 0, 0, 0 } ;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	Local_218 = { 0f, 0f, 0f };
	Local_219 = { Local_218 };
	Local_220 = { Local_218 };
	iLocal_223 = 3;
	iLocal_228 = 24818;
	iLocal_231 = 24816;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(178))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_82();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_0__.func_116())
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (__LIB_0__.func_2(0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (__LIB_0__.func_39(14))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if ((!BitTest(Global_113386.f_10049.f_99, 0) && __LIB_18__.func_173() == 1) && !func_72())
		{
			func_1();
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1()//Position - 0xF8
{
	switch (iLocal_221)
	{
		case 0:
			func_46();
			func_42();
			func_32();
			func_30();
			func_21();
			if (BitTest(Global_113386.f_10049.f_99, 1) && !bLocal_214)
			{
				iLocal_221++;
			}
			break;
		case 1:
			if (__LIB_30__.func_331(&iLocal_208) > 5f)
			{
				if (!BitTest(Global_113386.f_10049.f_99, 3))
				{
					__LIB_38__.func_127(28, iLocal_83[20], 1);
					__LIB_38__.func_126(28);
					MISC::SET_BIT(&(Global_113386.f_10049.f_99), 3);
					__LIB_6__.func_770(63, 1);
					iLocal_221++;
				}
			}
			break;
		case 2:
			if (__LIB_11__.func_866(63))
			{
				iLocal_221++;
			}
			break;
		case 3:
			MISC::SET_BIT(&(Global_113386.f_10049.f_99), 0);
			__LIB_0__.func_533();
			break;
	}
}

void func_21()//Position - 0x18A6
{
	switch (iLocal_81)
	{
		case 0:
			if (bLocal_214)
			{
				if (!__LIB_0__.func_511())
				{
					iLocal_211 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_211))
					{
						SYSTEM::WAIT(0);
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_211, "SHOW_BRIDGES_KNIVES_PROGRESS");
					__LIB_0__.func_478("PW_TITLE" /* GXT: Wildlife Photography~s~ */);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
					__LIB_0__.func_478("PW_PASS" /* GXT: Success! */);
					__LIB_0__.func_478("PW_CHALLENGE" /* GXT: Wildlife photographs taken */);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_26());
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_222 = func_26();
					Global_32195 = iLocal_222;
					SYSTEM::SETTIMERB(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
				}
				iLocal_81 = 1;
			}
			break;
		case 1:
			if ((((((SYSTEM::TIMERB() > 7500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || __LIB_0__.func_511()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || __LIB_0__.func_134()) || __LIB_30__.func_614())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_211, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				SYSTEM::SETTIMERB(0);
				iLocal_81 = 2;
			}
			else
			{
				func_23();
				if (Global_32195 > iLocal_222)
				{
					iLocal_81 = 3;
				}
			}
			break;
		case 2:
			if ((((((SYSTEM::TIMERB() > 500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || __LIB_0__.func_511()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || __LIB_0__.func_134()) || __LIB_30__.func_614())
			{
				iLocal_81 = 3;
			}
			else
			{
				func_23();
				if (Global_32195 > iLocal_222)
				{
					iLocal_81 = 3;
				}
			}
			break;
		case 3:
			func_22();
			bLocal_214 = false;
			iLocal_81 = 0;
			break;
	}
}

void func_22()//Position - 0x1A50
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_211))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_211);
	}
}

void func_23()//Position - 0x1A67
{
	if (!__LIB_0__.func_511())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_211))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_211, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_26()//Position - 0x1B04
{
	int iVar0;
	iVar0 = func_27();
	if (iVar0 == 20)
	{
		MISC::SET_BIT(&(Global_113386.f_10049.f_99), 1);
	}
	return iVar0;
}

int func_27()//Position - 0x1B29
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (bVar1 > 3)
		{
			if (BitTest(Global_113386.f_10049.f_99, bVar1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	if (iVar0 > 20)
	{
		iVar0 = 20;
	}
	return iVar0;
}

void func_30()//Position - 0x1BA8
{
	if (__LIB_11__.func_506() && !iLocal_216)
	{
		iLocal_216 = 1;
		iLocal_79 = 7;
	}
	if (!__LIB_11__.func_506() && iLocal_216)
	{
		iLocal_216 = 0;
	}
}

void func_32()//Position - 0x1BED
{
	if (__LIB_30__.func_331(&iLocal_205) > 3f)
	{
		__LIB_6__.func_849(0);
		__LIB_2__.func_186(&iLocal_205, 0f);
		__LIB_21__.func_175(&iLocal_205);
	}
	if ((__LIB_30__.func_331(&iLocal_205) <= 3f && __LIB_0__.func_77(0)) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/) || (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))) || (__LIB_11__.func_506() && !iLocal_216))
		{
			__LIB_2__.func_186(&iLocal_205, 0f);
			__LIB_21__.func_175(&iLocal_205);
		}
	}
}

void func_42()//Position - 0x1E95
{
	if (iLocal_217)
	{
		if ((__LIB_30__.func_331(&iLocal_208) > 5f && func_45() >= 1) && !BitTest(Global_113386.f_10049.f_99, 1))
		{
			switch (iLocal_224)
			{
				case 0:
					__LIB_38__.func_127(28, iLocal_83[(20 - func_45())], 1);
					iLocal_225 = 0;
					iLocal_224++;
					break;
				case 1:
					if (iLocal_225 < 10)
					{
						__LIB_11__.func_788(28, func_44(iLocal_225));
						iLocal_225++;
					}
					else
					{
						iLocal_224++;
					}
					break;
				case 2:
					__LIB_38__.func_126(28);
					iLocal_224++;
					break;
				case 3:
					__LIB_2__.func_186(&iLocal_208, 0f);
					__LIB_21__.func_175(&iLocal_208);
					iLocal_217 = 0;
					iLocal_224 = 0;
					__LIB_0__.func_533();
					break;
				}
			}
	}
}

char* func_44(int iParam0)//Position - 0x200A
{
	switch (iParam0)
	{
		case 0:
			if (!BitTest(Global_113386.f_10049.f_99, 4) && !BitTest(Global_113386.f_10049.f_99, 29))
			{
				return "PW_STRING_1_1" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> BOAR~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> BORDER COLLIE~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 4) && !BitTest(Global_113386.f_10049.f_99, 29))
			{
				return "PW_STRING_1_2" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> BOAR~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> BORDER COLLIE~nrt~ */;
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 4) && BitTest(Global_113386.f_10049.f_99, 29))
			{
				return "PW_STRING_1_3" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> BOAR~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> BORDER COLLIE~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 4) && BitTest(Global_113386.f_10049.f_99, 29))
			{
				return "PW_STRING_1_4" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> BOAR~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> BORDER COLLIE~nrt~ */;
			}
			break;
		case 1:
			if (!BitTest(Global_113386.f_10049.f_99, 5) && !BitTest(Global_113386.f_10049.f_99, 6))
			{
				return "PW_STRING_2_1" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> CAT~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> CHICKEN-HAWK~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 5) && !BitTest(Global_113386.f_10049.f_99, 6))
			{
				return "PW_STRING_2_2" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> CAT~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> CHICKEN-HAWK~nrt~ */;
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 5) && BitTest(Global_113386.f_10049.f_99, 6))
			{
				return "PW_STRING_2_3" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> CAT~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> CHICKEN-HAWK~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 5) && BitTest(Global_113386.f_10049.f_99, 6))
			{
				return "PW_STRING_2_4" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> CAT~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> CHICKEN-HAWK~nrt~ */;
			}
			break;
		case 2:
			if (!BitTest(Global_113386.f_10049.f_99, 7) && !BitTest(Global_113386.f_10049.f_99, 8))
			{
				return "PW_STRING_3_1" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> CORMORANT~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> COW~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 7) && !BitTest(Global_113386.f_10049.f_99, 8))
			{
				return "PW_STRING_3_2" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> CORMORANT~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> COW~nrt~ */;
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 7) && BitTest(Global_113386.f_10049.f_99, 8))
			{
				return "PW_STRING_3_3" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> CORMORANT~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> COW~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 7) && BitTest(Global_113386.f_10049.f_99, 8))
			{
				return "PW_STRING_3_4" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> CORMORANT~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> COW~nrt~ */;
			}
			break;
		case 3:
			if (!BitTest(Global_113386.f_10049.f_99, 9) && !BitTest(Global_113386.f_10049.f_99, 10))
			{
				return "PW_STRING_4_1" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> COYOTE~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> CROW~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 9) && !BitTest(Global_113386.f_10049.f_99, 10))
			{
				return "PW_STRING_4_2" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> COYOTE~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> CROW~nrt~ */;
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 9) && BitTest(Global_113386.f_10049.f_99, 10))
			{
				return "PW_STRING_4_3" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> COYOTE~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> CROW~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 9) && BitTest(Global_113386.f_10049.f_99, 10))
			{
				return "PW_STRING_4_4" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> COYOTE~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> CROW~nrt~ */;
			}
			break;
		case 4:
			if (!BitTest(Global_113386.f_10049.f_99, 11) && !BitTest(Global_113386.f_10049.f_99, 14))
			{
				return "PW_STRING_5_1" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> DEER~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> HEN~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 11) && !BitTest(Global_113386.f_10049.f_99, 14))
			{
				return "PW_STRING_5_2" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> DEER~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> HEN~nrt~ */;
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 11) && BitTest(Global_113386.f_10049.f_99, 14))
			{
				return "PW_STRING_5_3" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> DEER~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> HEN~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 11) && BitTest(Global_113386.f_10049.f_99, 14))
			{
				return "PW_STRING_5_4" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> DEER~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> HEN~nrt~ */;
			}
			break;
		case 5:
			if (!BitTest(Global_113386.f_10049.f_99, 16) && !BitTest(Global_113386.f_10049.f_99, 18))
			{
				return "PW_STRING_6_1" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> HUSKY~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> MOUNTAIN LION~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 16) && !BitTest(Global_113386.f_10049.f_99, 18))
			{
				return "PW_STRING_6_2" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> HUSKY~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> MOUNTAIN LION~nrt~ */;
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 16) && BitTest(Global_113386.f_10049.f_99, 18))
			{
				return "PW_STRING_6_3" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> HUSKY~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> MOUNTAIN LION~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 16) && BitTest(Global_113386.f_10049.f_99, 18))
			{
				return "PW_STRING_6_4" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> HUSKY~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> MOUNTAIN LION~nrt~ */;
			}
			break;
		case 6:
			if (!BitTest(Global_113386.f_10049.f_99, 19) && !BitTest(Global_113386.f_10049.f_99, 21))
			{
				return "PW_STRING_7_1" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> PIG~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> POODLE~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 19) && !BitTest(Global_113386.f_10049.f_99, 21))
			{
				return "PW_STRING_7_2" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> PIG~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> POODLE~nrt~ */;
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 19) && BitTest(Global_113386.f_10049.f_99, 21))
			{
				return "PW_STRING_7_3" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> PIG~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> POODLE~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 19) && BitTest(Global_113386.f_10049.f_99, 21))
			{
				return "PW_STRING_7_4" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> PIG~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> POODLE~nrt~ */;
			}
			break;
		case 7:
			if (!BitTest(Global_113386.f_10049.f_99, 22) && !BitTest(Global_113386.f_10049.f_99, 23))
			{
				return "PW_STRING_8_1" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> PUG~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> RABBIT~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 22) && !BitTest(Global_113386.f_10049.f_99, 23))
			{
				return "PW_STRING_8_2" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> PUG~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> RABBIT~nrt~ */;
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 22) && BitTest(Global_113386.f_10049.f_99, 23))
			{
				return "PW_STRING_8_3" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> PUG~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> RABBIT~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 22) && BitTest(Global_113386.f_10049.f_99, 23))
			{
				return "PW_STRING_8_4" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> PUG~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> RABBIT~nrt~ */;
			}
			break;
		case 8:
			if (!BitTest(Global_113386.f_10049.f_99, 24) && !BitTest(Global_113386.f_10049.f_99, 25))
			{
				return "PW_STRING_9_1" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> RETRIEVER~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> ROTTWEILER~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 24) && !BitTest(Global_113386.f_10049.f_99, 25))
			{
				return "PW_STRING_9_2" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> RETRIEVER~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> ROTTWEILER~nrt~ */;
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 24) && BitTest(Global_113386.f_10049.f_99, 25))
			{
				return "PW_STRING_9_3" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> RETRIEVER~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> ROTTWEILER~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 24) && BitTest(Global_113386.f_10049.f_99, 25))
			{
				return "PW_STRING_9_4" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> RETRIEVER~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> ROTTWEILER~nrt~ */;
			}
			break;
		case 9:
			if (!BitTest(Global_113386.f_10049.f_99, 26) && !BitTest(Global_113386.f_10049.f_99, 31))
			{
				return "PW_STRING_10_1" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> SEAGULL~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> WEST HIGHLAND TERRIER~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 26) && !BitTest(Global_113386.f_10049.f_99, 31))
			{
				return "PW_STRING_10_2" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> SEAGULL~nrt~~n~<img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> WEST HIGHLAND TERRIER~nrt~ */;
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 26) && BitTest(Global_113386.f_10049.f_99, 31))
			{
				return "PW_STRING_10_3" /* GXT: <img src='img://CELLPHONE_BADGER/u' height="32" width="32" vspace='-10'/> SEAGULL~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> WEST HIGHLAND TERRIER~nrt~ */;
			}
			else if (BitTest(Global_113386.f_10049.f_99, 26) && BitTest(Global_113386.f_10049.f_99, 31))
			{
				return "PW_STRING_10_4" /* GXT: <img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> SEAGULL~nrt~~n~<img src='img://CELLPHONE_BADGER/t' height="32" width="32" vspace='-10'/> WEST HIGHLAND TERRIER~nrt~ */;
			}
			break;
	}
	return "PW_STRING_NONE" /* GXT: ~nrt~ */;
}

int func_45()//Position - 0x2701
{
	return (20 - func_27());
}

void func_46()//Position - 0x2710
{
	switch (iLocal_79)
	{
		case 0:
			if (__LIB_11__.func_741())
			{
				if ((!__LIB_11__.func_655() && Global_4539953 == 0) && Global_4539954 == 0)
				{
					iLocal_79 = 1;
				}
			}
			break;
		case 1:
			iLocal_212 = func_65(&iLocal_213, 60f, iLocal_226, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_227, iLocal_228);
			if (iLocal_212 == 0)
			{
				iLocal_212 = func_65(&iLocal_213, 60f, iLocal_229, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_230, iLocal_231);
				if (iLocal_212 == 0)
				{
					iLocal_79 = 7;
				}
				else
				{
					iLocal_79 = 4;
				}
			}
			else
			{
				iLocal_79 = 4;
			}
			break;
		case 4:
			if (!func_64(iLocal_213))
			{
				__LIB_14__.func_367(1);
				iLocal_79 = 5;
			}
			else
			{
				if (!iLocal_215)
				{
				}
				else
				{
					iLocal_215 = 0;
				}
				iLocal_79 = 7;
			}
			break;
		case 5:
			switch (iLocal_80)
			{
				case 0:
					__LIB_0__.func_151("PW_HELP_1" /* GXT: Use ~INPUT_CELLPHONE_EXTRA_OPTION~ to email the photograph to the LS Tourist Board. */, -1);
					if (__LIB_0__.func_507())
					{
						if (__LIB_0__.func_77(0))
						{
							__LIB_11__.func_736(99);
							if (__LIB_0__.func_1("PW_HELP_1" /* GXT: Use ~INPUT_CELLPHONE_EXTRA_OPTION~ to email the photograph to the LS Tourist Board. */))
							{
								HUD::CLEAR_THIS_PRINT("PW_HELP_1" /* GXT: Use ~INPUT_CELLPHONE_EXTRA_OPTION~ to email the photograph to the LS Tourist Board. */);
							}
							iLocal_80 = 1;
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/))
					{
						__LIB_14__.func_367(0);
						__LIB_21__.func_368(99);
						if (__LIB_0__.func_1("PW_HELP_1" /* GXT: Use ~INPUT_CELLPHONE_EXTRA_OPTION~ to email the photograph to the LS Tourist Board. */))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_1" /* GXT: Use ~INPUT_CELLPHONE_EXTRA_OPTION~ to email the photograph to the LS Tourist Board. */);
						}
						iLocal_79 = 7;
					}
					break;
				case 1:
					__LIB_0__.func_151("PW_HELP_2" /* GXT: Use ~INPUT_CELLPHONE_SELECT~ to send the email to the LS Tourist Board. */, -1);
					if (__LIB_21__.func_414(99))
					{
						iLocal_80 = 0;
						__LIB_14__.func_367(0);
						__LIB_21__.func_368(99);
						if (__LIB_0__.func_1("PW_HELP_2" /* GXT: Use ~INPUT_CELLPHONE_SELECT~ to send the email to the LS Tourist Board. */))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_2" /* GXT: Use ~INPUT_CELLPHONE_SELECT~ to send the email to the LS Tourist Board. */);
						}
						iLocal_79 = 6;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
					{
						iLocal_80 = 0;
						__LIB_14__.func_367(0);
						__LIB_21__.func_368(99);
						if (__LIB_0__.func_1("PW_HELP_2" /* GXT: Use ~INPUT_CELLPHONE_SELECT~ to send the email to the LS Tourist Board. */))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_2" /* GXT: Use ~INPUT_CELLPHONE_SELECT~ to send the email to the LS Tourist Board. */);
						}
						iLocal_79 = 7;
					}
					break;
			}
			break;
		case 6:
			func_54(iLocal_213);
			func_51(iLocal_82);
			STATS::STAT_SET_INT(joaat("NUM_HIDDEN_PACKAGES_7"), func_27(), true);
			bLocal_214 = true;
			__LIB_26__.func_973(&iLocal_205);
			__LIB_26__.func_973(&iLocal_208);
			iLocal_217 = 1;
			iLocal_79 = 7;
			break;
		case 7:
			func_47();
			iLocal_79 = 8;
			break;
		case 8:
			if (!__LIB_11__.func_741())
			{
				iLocal_79 = 0;
			}
			break;
	}
}

void func_47()//Position - 0x2952
{
	iLocal_80 = 0;
	iLocal_82 = 0;
	iLocal_212 = 0;
	iLocal_213 = 0;
	iLocal_215 = 0;
	Local_219 = { Local_218 };
	Local_220 = { Local_218 };
	__LIB_14__.func_367(0);
	__LIB_21__.func_368(99);
	if (__LIB_0__.func_1("PW_HELP_1" /* GXT: Use ~INPUT_CELLPHONE_EXTRA_OPTION~ to email the photograph to the LS Tourist Board. */))
	{
		HUD::CLEAR_THIS_PRINT("PW_HELP_1" /* GXT: Use ~INPUT_CELLPHONE_EXTRA_OPTION~ to email the photograph to the LS Tourist Board. */);
	}
	if (__LIB_0__.func_1("PW_HELP_2" /* GXT: Use ~INPUT_CELLPHONE_SELECT~ to send the email to the LS Tourist Board. */))
	{
		HUD::CLEAR_THIS_PRINT("PW_HELP_2" /* GXT: Use ~INPUT_CELLPHONE_SELECT~ to send the email to the LS Tourist Board. */);
	}
}

void func_51(int iParam0)//Position - 0x29F3
{
	int iVar0;
	iVar0 = __LIB_0__.func_716(92);
	Global_2676732[iVar0 /*83*/] = 92;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_1), func_52(iParam0), 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

char* func_52(int iParam0)//Position - 0x2A32
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "AF_BOAR";
		case 2:
			return "AF_BORDERCOLLIE";
		case 3:
			return "AF_CAT";
		case 4:
			return "AF_CHICKENHAWK";
		case 5:
			return "AF_CORMORANT";
		case 6:
			return "AF_COW";
		case 7:
			return "AF_COYOTE";
		case 8:
			return "AF_CROW";
		case 9:
			return "AF_DEER";
		case 10:
			return "AF_HEN";
		case 11:
			return "AF_HUSKY";
		case 12:
			return "AF_MOUNT_LION";
		case 13:
			return "AF_PIG";
		case 14:
			return "AF_RABBIT";
		case 15:
			return "AF_POODLE";
		case 16:
			return "AF_PUG";
		case 17:
			return "AF_RETRIEVER";
		case 18:
			return "AF_ROTTWEILER";
		case 19:
			return "AF_SEAGULL";
		case 20:
			return "AF_WESTIE";
		default:
	}
	return "";
}

void func_54(int iParam0)//Position - 0x2BA3
{
	switch (iParam0)
	{
		case joaat("A_C_Boar"):
			if (!BitTest(Global_113386.f_10049.f_99, 4))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 4);
				iLocal_82 = 1;
			}
			break;
		case joaat("A_C_Cat_01"):
			if (!BitTest(Global_113386.f_10049.f_99, 5))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 5);
				iLocal_82 = 3;
			}
			break;
		case joaat("A_C_Chickenhawk"):
			if (!BitTest(Global_113386.f_10049.f_99, 6))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 6);
				iLocal_82 = 4;
			}
			break;
		case joaat("A_C_Cormorant"):
			if (!BitTest(Global_113386.f_10049.f_99, 7))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 7);
				iLocal_82 = 5;
			}
			break;
		case joaat("A_C_Cow"):
			if (!BitTest(Global_113386.f_10049.f_99, 8))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 8);
				iLocal_82 = 6;
			}
			break;
		case joaat("A_C_Coyote"):
			if (!BitTest(Global_113386.f_10049.f_99, 9))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 9);
				iLocal_82 = 7;
			}
			break;
		case joaat("A_C_Crow"):
			if (!BitTest(Global_113386.f_10049.f_99, 10))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 10);
				iLocal_82 = 8;
			}
			break;
		case joaat("A_C_Deer"):
			if (!BitTest(Global_113386.f_10049.f_99, 11))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 11);
				iLocal_82 = 9;
			}
			break;
		case joaat("A_C_Hen"):
			if (!BitTest(Global_113386.f_10049.f_99, 14))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 14);
				iLocal_82 = 10;
			}
			break;
		case joaat("A_C_Husky"):
			if (!BitTest(Global_113386.f_10049.f_99, 16))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 16);
				iLocal_82 = 11;
			}
			break;
		case joaat("A_C_MtLion"):
			if (!BitTest(Global_113386.f_10049.f_99, 18))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 18);
				iLocal_82 = 12;
			}
			break;
		case joaat("A_C_Pig"):
			if (!BitTest(Global_113386.f_10049.f_99, 19))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 19);
				iLocal_82 = 13;
			}
			break;
		case joaat("A_C_Poodle"):
			if (!BitTest(Global_113386.f_10049.f_99, 21))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 21);
				iLocal_82 = 15;
			}
			break;
		case joaat("A_C_Pug"):
			if (!BitTest(Global_113386.f_10049.f_99, 22))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 22);
				iLocal_82 = 16;
			}
			break;
		case joaat("A_C_Rabbit_01"):
			if (!BitTest(Global_113386.f_10049.f_99, 23))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 23);
				iLocal_82 = 14;
			}
			break;
		case joaat("A_C_Retriever"):
			if (!BitTest(Global_113386.f_10049.f_99, 24))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 24);
				iLocal_82 = 17;
			}
			break;
		case joaat("A_C_Rottweiler"):
		case joaat("A_C_Chop"):
			if (!BitTest(Global_113386.f_10049.f_99, 25))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 25);
				iLocal_82 = 18;
			}
			break;
		case joaat("A_C_Seagull"):
			if (!BitTest(Global_113386.f_10049.f_99, 26))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 26);
				iLocal_82 = 19;
			}
			break;
		case joaat("A_C_shepherd"):
			if (!BitTest(Global_113386.f_10049.f_99, 29))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 29);
				iLocal_82 = 2;
			}
			break;
		case joaat("A_C_Westy"):
			if (!BitTest(Global_113386.f_10049.f_99, 31))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 31);
				iLocal_82 = 20;
			}
			break;
		default:
			break;
	}
}

int func_64(int iParam0)//Position - 0x305C
{
	switch (iParam0)
	{
		case joaat("A_C_Boar"):
			if (!BitTest(Global_113386.f_10049.f_99, 4))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Cat_01"):
			if (!BitTest(Global_113386.f_10049.f_99, 5))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Chickenhawk"):
			if (!BitTest(Global_113386.f_10049.f_99, 6))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Cormorant"):
			if (!BitTest(Global_113386.f_10049.f_99, 7))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Cow"):
			if (!BitTest(Global_113386.f_10049.f_99, 8))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Coyote"):
			if (!BitTest(Global_113386.f_10049.f_99, 9))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Crow"):
			if (!BitTest(Global_113386.f_10049.f_99, 10))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Deer"):
			if (!BitTest(Global_113386.f_10049.f_99, 11))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Hen"):
			if (!BitTest(Global_113386.f_10049.f_99, 14))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Husky"):
			if (!BitTest(Global_113386.f_10049.f_99, 16))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_MtLion"):
			if (!BitTest(Global_113386.f_10049.f_99, 18))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Pig"):
			if (!BitTest(Global_113386.f_10049.f_99, 19))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Poodle"):
			if (!BitTest(Global_113386.f_10049.f_99, 21))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Pug"):
			if (!BitTest(Global_113386.f_10049.f_99, 22))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Rabbit_01"):
			if (!BitTest(Global_113386.f_10049.f_99, 23))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Retriever"):
			if (!BitTest(Global_113386.f_10049.f_99, 24))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Rottweiler"):
		case joaat("A_C_Chop"):
			if (!BitTest(Global_113386.f_10049.f_99, 25))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Seagull"):
			if (!BitTest(Global_113386.f_10049.f_99, 26))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_shepherd"):
			if (!BitTest(Global_113386.f_10049.f_99, 29))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("A_C_Westy"):
			if (!BitTest(Global_113386.f_10049.f_99, 31))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		default:
			iLocal_215 = 1;
			break;
	}
	return 1;
}

int func_65(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9)//Position - 0x3344
{
	int iVar0;
	float fVar1;
	iVar0 = CAM::GET_FOCUS_PED_ON_SCREEN(fParam1, iParam2, fParam3, fParam4, fParam5, fParam6, fParam7, iParam8, iParam9);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (iVar0 != 0 && __LIB_0__.func_121(iVar0))
	{
		if (PED::GET_PED_TYPE(iVar0) == 28)
		{
			if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				*iParam0 = ENTITY::GET_ENTITY_MODEL(iVar0);
				if (func_69(iVar0, 31086))
				{
					fVar1 = __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iVar0, 1);
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), iVar0))
					{
					}
					if (func_67(*iParam0))
					{
						if (fVar1 <= IntToFloat(func_66(*iParam0)))
						{
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (fVar1 <= IntToFloat(func_66(*iParam0)))
					{
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_66(int iParam0)//Position - 0x3415
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("A_C_Boar"):
			iVar0 = 30;
			break;
		case joaat("A_C_Cat_01"):
			iVar0 = 30;
			break;
		case joaat("A_C_Chickenhawk"):
			iVar0 = 60;
			break;
		case joaat("A_C_Cormorant"):
			iVar0 = 60;
			break;
		case joaat("A_C_Cow"):
			iVar0 = 30;
			break;
		case joaat("A_C_Coyote"):
			iVar0 = 30;
			break;
		case joaat("A_C_Crow"):
			iVar0 = 60;
			break;
		case joaat("A_C_Deer"):
			iVar0 = 40;
			break;
		case joaat("A_C_Hen"):
			iVar0 = 30;
			break;
		case joaat("A_C_Husky"):
			iVar0 = 30;
			break;
		case joaat("A_C_MtLion"):
			iVar0 = 30;
			break;
		case joaat("A_C_Pig"):
			iVar0 = 30;
			break;
		case joaat("A_C_Pigeon"):
			iVar0 = 40;
			break;
		case joaat("A_C_Poodle"):
			iVar0 = 30;
			break;
		case joaat("A_C_Pug"):
			iVar0 = 30;
			break;
		case joaat("A_C_Rabbit_01"):
			iVar0 = 30;
			break;
		case joaat("A_C_Retriever"):
			iVar0 = 30;
			break;
		case joaat("A_C_Rottweiler"):
		case joaat("A_C_Chop"):
			iVar0 = 30;
			break;
		case joaat("A_C_Seagull"):
			iVar0 = 60;
			break;
		case joaat("A_C_shepherd"):
			iVar0 = 30;
			break;
		case joaat("A_C_Westy"):
			iVar0 = 30;
			break;
		default:
			iVar0 = 30;
			break;
	}
	return iVar0;
}

int func_67(int iParam0)//Position - 0x3544
{
	switch (iParam0)
	{
		case joaat("A_C_Chickenhawk"):
		case joaat("A_C_Cormorant"):
		case joaat("A_C_Crow"):
		case joaat("A_C_Hen"):
		case joaat("A_C_Pigeon"):
		case joaat("A_C_Seagull"):
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)//Position - 0x35E0
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	Local_220 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, iParam1)) };
	if (iLocal_213 == joaat("A_C_Rabbit_01") || iLocal_213 == joaat("A_C_Rat"))
	{
		Local_219 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24816)) };
	}
	else
	{
		Local_219 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24818)) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_219, &fVar0, &fVar1);
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_220, &fVar2, &fVar3);
	if ((((fVar0 >= 0.05f && fVar0 <= 0.95f) && (fVar2 >= 0.05f && fVar2 <= 0.95f)) && (fVar1 >= 0.05f && fVar1 <= 0.95f)) && (fVar3 >= 0.05f && fVar3 <= 0.95f))
	{
		return 1;
	}
	return 0;
}

int func_72()//Position - 0x36FB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3a")) > 0)
	{
		return 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3b")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_82()//Position - 0x39A7
{
	if (!BitTest(Global_113386.f_10049.f_99, 2))
	{
		MISC::SET_BIT(&(Global_113386.f_10049.f_99), 2);
	}
	iLocal_221 = 0;
	iLocal_216 = __LIB_11__.func_506();
	iLocal_83[0] = 249;
	iLocal_83[1] = 250;
	iLocal_83[2] = 251;
	iLocal_83[3] = 252;
	iLocal_83[4] = 253;
	iLocal_83[5] = 254;
	iLocal_83[6] = 255;
	iLocal_83[7] = 256;
	iLocal_83[8] = 257;
	iLocal_83[9] = 258;
	iLocal_83[10] = 259;
	iLocal_83[11] = 260;
	iLocal_83[12] = 261;
	iLocal_83[13] = 262;
	iLocal_83[14] = 263;
	iLocal_83[15] = 264;
	iLocal_83[16] = 265;
	iLocal_83[17] = 266;
	iLocal_83[18] = 267;
	iLocal_83[19] = 268;
	iLocal_83[20] = 269;
}

