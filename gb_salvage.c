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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	float fLocal_116 = 0f;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	struct<4> Local_132[50];
	int iLocal_133[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_134[4] = { 0, 0, 0, 0 };
	var uLocal_135[4] = { 0, 0, 0, 0 };
	int iLocal_136[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	int iLocal_145 = 0;
	struct<212> Local_146 = { 0, 0, 50, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 50, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 32 } ;
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
	var uLocal_189 = 10;
	var uLocal_190 = 500;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 1065353216;
	var uLocal_194 = 1065353216;
	var uLocal_195 = 1;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = -1;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = -1;
	var uLocal_210 = -1;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224[4] = { 0, 0, 0, 0 };
	int iLocal_225[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	char* sLocal_238 = NULL;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	struct<14> Local_251 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	struct<6> Local_259[32];
	float fLocal_260 = 0f;
	float fLocal_261 = 0f;
	float fLocal_262 = 0f;
	float fLocal_263 = 0f;
	float fLocal_264 = 0f;
	float fLocal_265 = 0f;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	struct<21> Local_269 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	iLocal_114 = -1;
	fLocal_116 = 0.5f;
	iLocal_228 = AUDIO::GET_SOUND_ID();
	iLocal_229 = AUDIO::GET_SOUND_ID();
	sLocal_238 = "scr_biolab_heist";
	iLocal_240 = 1000;
	iLocal_241 = 145;
	iLocal_250 = 5000;
	fLocal_260 = -0.285f;
	fLocal_261 = -0.078f;
	fLocal_262 = -0.169f;
	fLocal_263 = 0f;
	fLocal_264 = -0.451f;
	fLocal_265 = -342.7f;
	iLocal_267 = 1000;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_6618(ScriptParam_269))
		{
			func_6568();
		}
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			if ((__LIB_2__::func_50() || func_6561() == PLAYER::PLAYER_ID()) || iLocal_223 == PLAYER::PLAYER_ID())
			{
				__LIB_35__::func_722(0, 4, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
			}
			else
			{
				__LIB_35__::func_722(0, 8, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
			}
			func_6568();
		}
		if (__LIB_36__::func_806() == 1)
		{
			if (__LIB_2__::func_50() && __LIB_12__::func_540(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_30__::func_661(88, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, "PIM_MAGM101" /* GXT: No Bodyguards work for you */, 1, -1, 2, 1, 0);
				if (iLocal_227 == 0)
				{
					func_6358(172, 0, &uLocal_191, 0);
				}
				__LIB_35__::func_722(0, 6, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
				func_6568();
			}
			else if (__LIB_2__::func_39(PLAYER::PLAYER_ID()) == __LIB_0__::getMinusOneOrNull() || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(__LIB_2__::func_39(PLAYER::PLAYER_ID())))
			{
				if ((__LIB_2__::func_50() || func_6561() == PLAYER::PLAYER_ID()) || iLocal_223 == PLAYER::PLAYER_ID())
				{
					__LIB_35__::func_722(0, 4, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
				}
				else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
				{
					__LIB_35__::func_722(0, 8, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
					if (__LIB_3__::func_673(__LIB_0__::func_797()))
					{
						__LIB_30__::func_661(88, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, "GBTER_BIGBSLFTC" /* GXT: Your CEO left the session */, 1, -1, 2, 1, 0);
					}
					else
					{
						__LIB_30__::func_661(88, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, "GBTER_BIG_BSLFT" /* GXT: Your VIP left the session */, 1, -1, 2, 1, 0);
					}
				}
				else
				{
					__LIB_35__::func_722(0, 4, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
					__LIB_30__::func_661(88, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, "GB_GOONLEFTb" /* GXT: You quit ~a~~s~ as a Bodyguard */, 1, -1, 2, 1, 0);
				}
				if (iLocal_227 == 0)
				{
					func_6358(172, 0, &uLocal_191, 0);
				}
				func_6568();
			}
		}
		if (__LIB_30__::func_677(1))
		{
			__LIB_35__::func_722(0, 5, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
			func_6568();
		}
		if (__LIB_15__::func_374())
		{
			__LIB_35__::func_722(0, 5, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
			func_6568();
		}
		func_942(&uLocal_179, 1, 0, 1, 1, 6000);
		switch (func_941(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_36__::func_806() == 1)
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != joaat("YachtRm_Bridge"))
					{
						__LIB_15__::func_577();
						if (__LIB_35__::func_381(&uLocal_179))
						{
							if (func_806())
							{
								func_805(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
							}
						}
					}
					else
					{
						__LIB_5__::func_401("GBM_IN_APRT");
						__LIB_24__::func_333(0);
					}
				}
				break;
			case 1:
				func_802();
				if (__LIB_36__::func_806() == 1)
				{
					func_395();
				}
				else if (__LIB_36__::func_806() == 3)
				{
					if (iLocal_227 == 0)
					{
						func_394();
						func_380();
					}
					__LIB_34__::func_787(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
					if (__LIB_34__::func_785(&uLocal_252, 1, 0))
					{
						func_805(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
					}
				}
				break;
			case 3:
				if (__LIB_10__::func_332())
				{
					func_802();
					__LIB_34__::func_824();
				}
				else
				{
					func_6568();
				}
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_194();
			switch (__LIB_36__::func_806())
			{
				case 0:
					if (func_143())
					{
						__LIB_36__::func_782(1);
					}
					break;
				case 1:
					if (Local_146.f_156 == 0)
					{
						if (func_134())
						{
						}
					}
					if (!Local_146.f_180)
					{
						if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(__LIB_30__::func_848(172, -1, 1, -1, -1, -1)))
						{
							func_81();
						}
					}
					if (!Local_146.f_182)
					{
						if (func_80())
						{
							func_79(Local_146.f_164);
						}
					}
					if (Global_2787548 == 1)
					{
						if (func_78())
						{
						}
					}
					if (__LIB_0__::func_937(&uLocal_139, Global_262145.f_15578 /* Tunable: EXEC_SALVAGE_REBREATHER_DELAY */, 0))
					{
						iVar0 = 0;
						while (iVar0 < 10)
						{
							if (iLocal_136[iVar0] != -1)
							{
								func_16(Local_146.f_164, iLocal_136[iVar0]);
								iLocal_136[iVar0] = -1;
								__LIB_0__::clearF_1Prop(&uLocal_139);
							}
							iVar0++;
						}
					}
					if (func_7())
					{
						__LIB_36__::func_782(3);
					}
					else
					{
						func_1();
					}
					func_194();
					if (__LIB_15__::func_374())
					{
						__LIB_36__::func_782(3);
					}
					break;
				case 3:
					break;
				}
		}
	}
}

void func_1()//Position - 0x4D6
{
	func_2();
	switch (Local_146.f_165)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_2()//Position - 0x507
{
	if (__LIB_34__::func_860(&(Local_146.f_166), &uLocal_247, 0))
	{
		Local_146.f_163++;
	}
}

int func_7()//Position - 0x69A
{
	if (func_8())
	{
		return 1;
	}
	return 0;
}

int func_8()//Position - 0x6AE
{
	if (Local_146.f_1 >= 50 || Local_146.f_179 == 0)
	{
		if (iLocal_227 == 0)
		{
			if (Global_2703735.f_4.f_10)
			{
				Local_251.f_2 = 238216506;
				Local_251.f_10 = Local_146.f_166[0 /*2*/];
				if (Local_251.f_10 != 0 && __LIB_1__::func_693(Local_251.f_10, 1, 1))
				{
				}
				Local_146.f_175 = 1;
				if (func_12())
				{
					Local_251.f_11 = Local_146.f_166[1 /*2*/];
					if (Local_251.f_11 != 0 && __LIB_1__::func_693(Local_251.f_11, 1, 1))
					{
					}
					Local_251.f_3 = 1;
				}
				else
				{
					Local_251.f_11 = 0;
				}
				__LIB_1__::func_634(Local_251, __LIB_4__::func_970(1));
			}
			return 1;
		}
	}
	if (__LIB_0__::func_937(&(Local_146.f_159), func_9(), 0))
	{
		if (Global_2703735.f_4.f_10)
		{
			Local_146.f_175 = 2;
			Local_251.f_2 = -1435009097;
			Local_251.f_10 = Local_146.f_166[0 /*2*/];
			Local_251.f_4 = Local_146.f_166[0 /*2*/].f_1;
			if (Local_146.f_166[0 /*2*/] != 0)
			{
				if (Local_251.f_10 != 0 && __LIB_1__::func_693(Local_251.f_10, 1, 1))
				{
				}
				if (func_12())
				{
					if (Local_251.f_11 != 0 && __LIB_1__::func_693(Local_251.f_11, 0, 1))
					{
						Local_251.f_11 = Local_146.f_166[1 /*2*/];
						Local_251.f_3 = 1;
					}
				}
				else
				{
					Local_251.f_11 = 0;
				}
				if (Local_146.f_166[0 /*2*/].f_1 < 1 && Local_146.f_166[1 /*2*/].f_1 < 1)
				{
					Local_251.f_3 = 3;
				}
			}
			__LIB_1__::func_634(Local_251, __LIB_4__::func_970(1));
		}
		return 1;
	}
	return 0;
}

int func_9()//Position - 0x84C
{
	return Global_262145.f_15571 /* Tunable: EXEC_SALVAGE_TIME_LIMIT */;
}

int func_12()//Position - 0x8E5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_7__::func_769())
	{
		if (iVar0 != 0)
		{
			if (Local_146.f_166[0 /*2*/].f_1 == Local_146.f_166[iVar0 /*2*/].f_1)
			{
				return 1;
			}
		}
		else if (Local_146.f_166[1 /*2*/].f_1 == Local_146.f_166[iVar0 /*2*/].f_1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0, int iParam1)//Position - 0x99B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(__LIB_30__::func_459(172, -1, -1, -1, -1, -1)))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_carrier_crate_01a")))
		{
			iVar0 = iParam1 + 1;
			if (iVar0 >= 10)
			{
				iVar0 = 0;
			}
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_146.f_195[iVar1]))
				{
					iVar2++;
				}
				iVar1++;
			}
			if (iVar2 >= Local_146.f_181)
			{
				Global_2787549 = 1;
				return 1;
			}
			else
			{
				func_23(iParam0, &iVar0);
				func_23(iParam0, &iVar0);
				func_23(iParam0, &iVar0);
				func_23(iParam0, &iVar0);
				func_23(iParam0, &iVar0);
				func_23(iParam0, &iVar0);
				func_23(iParam0, &iVar0);
				Var3 = { func_22(iParam0, iVar0) };
				if (func_20(&(Local_146.f_184[iVar0]), &(Local_146.f_195[iVar0]), Var3, 1))
				{
					func_18(Local_146.f_184[iVar0]);
					Global_2787549 = 1;
					return 1;
				}
			}
		}
		else
		{
			__LIB_0__::func_799(joaat("hei_prop_carrier_crate_01a"));
		}
	}
	return 0;
}

void func_18(int iParam0)//Position - 0xAB7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (__LIB_1__::func_693(iVar1, 0, 1))
			{
				iVar2 = iVar1;
				if (__LIB_3__::func_234(iVar1, PLAYER::PLAYER_ID()))
				{
					MISC::SET_BIT(&iVar3, iVar2);
				}
			}
		}
		iVar0++;
	}
	OBJECT::BLOCK_PLAYERS_FOR_AMBIENT_PICKUP(iParam0, iVar3);
}

int func_20(var uParam0, var uParam1, struct<3> Param2, bool bParam3)//Position - 0xB42
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_86(Param2))
	{
		iVar0 = joaat("hei_prop_carrier_crate_01a");
		if (__LIB_0__::func_799(iVar0))
		{
			iVar1 = 0;
			MISC::SET_BIT(&iVar1, 0);
			MISC::SET_BIT(&iVar1, 1);
			MISC::SET_BIT(&iVar1, 9);
			MISC::SET_BIT(&iVar1, 4);
			*uParam0 = OBJECT::CREATE_AMBIENT_PICKUP(joaat("PICKUP_CUSTOM_SCRIPT"), Param2 + Vector(0.1f, 0f, 0f), iVar1, -1, iVar0, bParam3, true);
			*uParam1 = NETWORK::OBJ_TO_NET(*uParam0);
			return 1;
		}
	}
	return 0;
}

Vector3 func_22(int iParam0, int iParam1)//Position - 0xBDF
{
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 0:
				return 3142.781f, -258.6545f, -21.1781f;
				break;
			case 1:
				return 3149.457f, -291.8208f, -25.1835f;
				break;
			case 2:
				return 3157.3423f, -308.1521f, -27.5322f;
				break;
			case 3:
				return 3155.684f, -346.0982f, -25.8994f;
				break;
			case 4:
				return 3185.8042f, -343.2384f, -30.1358f;
				break;
			case 5:
				return 3177.128f, -370.8136f, -29.4753f;
				break;
			case 6:
				return 3193.618f, -368.2251f, -29.2594f;
				break;
			case 7:
				return 3207.8567f, -384.609f, -15.8373f;
				break;
			case 8:
				return 3163.4536f, -378.8613f, -18.8252f;
				break;
			case 9:
				return 3188.5115f, -305.0131f, -10.0456f;
				break;
			}
	}
	if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 0:
				return -989.5922f, 6565.9165f, -24.255f;
				break;
			case 1:
				return -1026.5356f, 6518.4f, -35.3361f;
				break;
			case 2:
				return -916.1893f, 6637.1045f, -30.7942f;
				break;
			case 3:
				return -929.2811f, 6591.7754f, -29.5562f;
				break;
			case 4:
				return -874.1296f, 6581.4766f, -29.3949f;
				break;
			case 5:
				return -811.0801f, 6664.58f, -19.0324f;
				break;
			case 6:
				return -942.7502f, 6689.849f, -30.6195f;
				break;
			case 7:
				return -984.6858f, 6665.808f, -32.044f;
				break;
			case 8:
				return -970.4923f, 6492.4146f, -30.857f;
				break;
			case 9:
				return -878.9694f, 6622.42f, -30.8634f;
				break;
			}
	}
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 0:
				return 2685.3232f, -1398.177f, -13.6244f;
				break;
			case 1:
				return 2665.1643f, -1414.4856f, -20.5692f;
				break;
			case 2:
				return 2644.1982f, -1423.7665f, -19.0826f;
				break;
			case 3:
				return 2680.7532f, -1369.1603f, -19.6391f;
				break;
			case 4:
				return 2649.2952f, -1365.4832f, -16.2271f;
				break;
			case 5:
				return 2608.8882f, -1407.2898f, -14.6f;
				break;
			case 6:
				return 2656.1558f, -1494.7499f, -17.9674f;
				break;
			case 7:
				return 2697.7468f, -1325.8494f, -19.9296f;
				break;
			case 8:
				return 2662.6885f, -1433.6698f, -20.8508f;
				break;
			case 9:
				return 2649.8943f, -1394.2932f, -16.749f;
				break;
			}
	}
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 0:
				return -232.464f, -2870.585f, -18.0988f;
				break;
			case 1:
				return -111.4055f, -2872.1436f, -6.5123f;
				break;
			case 2:
				return -298.935f, -2884.572f, -13.7479f;
				break;
			case 3:
				return -295.4654f, -2944.3706f, -14.8823f;
				break;
			case 4:
				return -216.2081f, -2977.9795f, -24.2963f;
				break;
			case 5:
				return -198.3882f, -2936.8015f, -13.1733f;
				break;
			case 6:
				return -111.7231f, -2923.2625f, -11.8486f;
				break;
			case 7:
				return -133.2846f, -2790.6033f, -7.1538f;
				break;
			case 8:
				return -133.282f, -2790.6f, -6.8968f;
				break;
			case 9:
				return -271.0499f, -2817.2776f, -7.4216f;
				break;
			}
	}
	if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 0:
				return 1831.7064f, -2938.631f, -45.2356f;
				break;
			case 1:
				return 1762.5571f, -2991.8362f, -50.5554f;
				break;
			case 2:
				return 1817.9899f, -2919.8904f, -31.9195f;
				break;
			case 3:
				return 1869.6853f, -2947.8806f, -46.0897f;
				break;
			case 4:
				return 1871.8484f, -3036.0205f, -47.687f;
				break;
			case 5:
				return 1828.0731f, -3031.95f, -34.9909f;
				break;
			case 6:
				return 1878.0989f, -2930.4917f, -37.7912f;
				break;
			case 7:
				return 1750.2693f, -2928.7454f, -34.4448f;
				break;
			case 8:
				return 1721.2423f, -2980.9277f, -29.2093f;
				break;
			case 9:
				return 1721.2422f, -2980.9211f, -28.5943f;
				break;
			}
	}
	if (iParam0 == 5)
	{
		switch (iParam1)
		{
			case 0:
				return 4156.2344f, 3499.9768f, -28.9651f;
				break;
			case 1:
				return 4123.4834f, 3524.5154f, -27.3879f;
				break;
			case 2:
				return 4184.126f, 3567.26f, -9.0319f;
				break;
			case 3:
				return 4184.1255f, 3567.2593f, -8.7436f;
				break;
			case 4:
				return 4069.2585f, 3597.9187f, -20.1678f;
				break;
			case 5:
				return 4112.9106f, 3667.8672f, -12.7752f;
				break;
			case 6:
				return 4112.912f, 3667.873f, -12.5514f;
				break;
			case 7:
				return 4211.2314f, 3645.2463f, -36.9892f;
				break;
			case 8:
				return 4204.519f, 3615.5486f, -22.8357f;
				break;
			case 9:
				return 4248.5615f, 3568.8093f, -28.0085f;
				break;
			}
	}
	if (iParam0 == 6)
	{
		switch (iParam1)
		{
			case 0:
				return 2683.8635f, 6651.761f, -17.1646f;
				break;
			case 1:
				return 2659.4888f, 6648.311f, -25.0424f;
				break;
			case 2:
				return 2642.91f, 6673.744f, -23.2345f;
				break;
			case 3:
				return 2759.3396f, 6634.2397f, -24.695f;
				break;
			case 4:
				return 2702.9128f, 6619.7104f, -23.8372f;
				break;
			case 5:
				return 2699.209f, 6683.521f, -36.9647f;
				break;
			case 6:
				return 2718.2793f, 6661.374f, -28.1706f;
				break;
			case 7:
				return 2630.026f, 6630.8667f, -13.7466f;
				break;
			case 8:
				return 2613.672f, 6676.5103f, -19.7247f;
				break;
			case 9:
				return 2637.59f, 6610.6943f, -8.8308f;
				break;
			}
	}
	if (iParam0 == 7)
	{
		switch (iParam1)
		{
			case 0:
				return -3241.9656f, 3688.965f, -20.1426f;
				break;
			case 1:
				return -3208.555f, 3640.823f, -35.7548f;
				break;
			case 2:
				return -3235.6765f, 3642.6904f, -32.7612f;
				break;
			case 3:
				return -3282.1055f, 3641.5625f, -26.2563f;
				break;
			case 4:
				return -3218.2556f, 3687.9048f, -25.9951f;
				break;
			case 5:
				return -3160.1523f, 3700.6992f, -22.8258f;
				break;
			case 6:
				return -3151.1982f, 3647.7224f, -31.4883f;
				break;
			case 7:
				return -3262.1897f, 3674.48f, -25.8873f;
				break;
			case 8:
				return -3259.456f, 3590.2712f, -31.6526f;
				break;
			case 9:
				return -3223.859f, 3715.489f, -33.1337f;
				break;
			}
	}
	if (iParam0 == 8)
	{
		switch (iParam1)
		{
			case 0:
				return -2839.06f, -445.753f, -16.6761f;
				break;
			case 1:
				return -2852.8157f, -422.0252f, -9.3182f;
				break;
			case 2:
				return -2848.1091f, -493.7422f, -16.5211f;
				break;
			case 3:
				return -2835.32f, -520.9986f, -34.6716f;
				break;
			case 4:
				return -2864.306f, -578.0115f, -20.2448f;
				break;
			case 5:
				return -2808.7815f, -577.7209f, -20.8295f;
				break;
			case 6:
				return -2774.604f, -440.0441f, -34.5225f;
				break;
			case 7:
				return -2798.33f, -388.744f, -26.0379f;
				break;
			case 8:
				return -2901.902f, -395.7604f, -39.0237f;
				break;
			case 9:
				return -2887.6013f, -495.8942f, -38.2618f;
				break;
			}
	}
	if (iParam0 == 9)
	{
		switch (iParam1)
		{
			case 0:
				return -3178.99f, 3039.0574f, -34.0949f;
				break;
			case 1:
				return -3151.3179f, 3041.0935f, -18.6523f;
				break;
			case 2:
				return -3174.0542f, 2991.4753f, -37.0318f;
				break;
			case 3:
				return -3231.086f, 3028.2664f, -31.3029f;
				break;
			case 4:
				return -3258.6016f, 3079.2427f, -33.5343f;
				break;
			case 5:
				return -3216.9326f, 3078.686f, -33.9647f;
				break;
			case 6:
				return -3237.8838f, 2994.729f, -28.6229f;
				break;
			case 7:
				return -3199.2488f, 3081.5796f, -25.5331f;
				break;
			case 8:
				return -3197.7998f, 2975.1814f, -18.7584f;
				break;
			case 9:
				return -3121.2246f, 3057.6792f, -15.9893f;
				break;
			}
	}
	return 3188.5115f, -305.0131f, -10.0456f;
}

void func_23(int iParam0, int iParam1)//Position - 0x1706
{
	struct<3> Var0;
	Var0 = { func_22(iParam0, *iParam1) };
	if (OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 5f, joaat("hei_prop_carrier_crate_01a"), false, false, false) != 0 || NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_146.f_195[*iParam1]))
	{
		*iParam1++;
	}
	if (*iParam1 >= 10)
	{
		*iParam1 = 0;
	}
}

int func_78()//Position - 0x36D5
{
	if (Global_2787548 == 1 && Global_2787547 != -1)
	{
		Global_2787548 = 0;
		iLocal_136[Global_2787547] = Global_2787547;
		Global_2787547 = -1;
		__LIB_0__::clearF_1Prop(&uLocal_139);
		return 1;
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x3714
{
	int iVar0;
	struct<3> Var1[10];
	if (__LIB_13__::func_61() == 1)
	{
		Local_146.f_181 = Global_262145.f_15573 /* Tunable: EXEC_SALVAGE_NUMBER_OF_ACTIVE_REBREATHERS_2P */;
	}
	else if (__LIB_13__::func_61() == 2)
	{
		Local_146.f_181 = Global_262145.f_15574 /* Tunable: EXEC_SALVAGE_NUMBER_OF_ACTIVE_REBREATHERS_3P */;
	}
	else if (__LIB_13__::func_61() == 3)
	{
		Local_146.f_181 = Global_262145.f_15575 /* Tunable: EXEC_SALVAGE_NUMBER_OF_ACTIVE_REBREATHERS_4P */;
	}
	else
	{
		Local_146.f_181 = Global_262145.f_15575 /* Tunable: EXEC_SALVAGE_NUMBER_OF_ACTIVE_REBREATHERS_4P */;
	}
	if (Local_146.f_181 >= 10)
	{
		Local_146.f_181 = 9;
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_carrier_crate_01a")))
	{
		iVar0 = 0;
		while (iVar0 < Local_146.f_181)
		{
			Var1[iVar0 /*3*/] = { func_22(iParam0, iVar0) };
			if (func_20(&(Local_146.f_184[iVar0]), &(Local_146.f_195[iVar0]), Var1[iVar0 /*3*/], 1))
			{
				func_18(Local_146.f_184[iVar0]);
				Local_146.f_182 = 1;
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_80()//Position - 0x37F0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_259[iVar0 /*6*/].f_4 == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_81()//Position - 0x381D
{
	int iVar0;
	int iVar1;
	if (Local_146.f_180)
	{
		return 0;
	}
	iVar1 = __LIB_13__::func_61() + 1;
	STREAMING::REQUEST_MODEL(joaat("seashark"));
	MISC::CLEAR_AREA(func_87(iVar0), 30f, true, false, false, false);
	if (STREAMING::HAS_MODEL_LOADED(joaat("seashark")))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			__LIB_0__::func_957(&(Local_146.f_206[iVar0]), joaat("seashark"), func_87(iVar0), __LIB_0__::func_932(func_87(iVar0), func_86(Local_146.f_164)), NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), 1, 1, 0, 1, 1, 0, 0, 0, 0);
			if (VEHICLE::CAN_ANCHOR_BOAT_HERE(NETWORK::NET_TO_VEH(Local_146.f_206[iVar0])))
			{
				VEHICLE::SET_BOAT_ANCHOR(NETWORK::NET_TO_VEH(Local_146.f_206[iVar0]), true);
			}
			iVar0++;
		}
		Local_146.f_180 = 1;
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("seashark"));
		Local_146.f_180 = 0;
	}
	return 0;
}

Vector3 func_86(int iParam0)//Position - 0x3B84
{
	switch (iParam0)
	{
		case 0:
			return 3172.246f, -337.484f, -14.5003f;
			break;
		case 1:
			return -928.4571f, 6581.173f, -12.8434f;
			break;
		case 2:
			return 2671.5374f, -1398.648f, -8.4314f;
			break;
		case 3:
			return -203.7591f, -2863.4998f, -0.9841f;
			break;
		case 4:
			return 1794.1816f, -2968.3179f, -3.0297f;
			break;
		case 5:
			return 4128.16f, 3537.0808f, -26.9639f;
			break;
		case 6:
			return 2651.7754f, 6647.8843f, -3.8573f;
			break;
		case 7:
			return -3242.6138f, 3669.3164f, -16.2196f;
			break;
		case 8:
			return -2835.3994f, -519.6956f, -42.4877f;
			break;
		case 9:
			return -3178.1387f, 3039.4556f, -27.8788f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_87(int iParam0)//Position - 0x3CA4
{
	if (__LIB_2__::func_50())
	{
	}
	switch (Local_146.f_164)
	{
		case 0:
		case 2:
			if (iParam0 == 0)
			{
				return 2859.307f, -644.3696f, -2.5415f;
			}
			else if (iParam0 == 1)
			{
				return 2855.4456f, -618.0198f, -2.3131f;
			}
			else if (iParam0 == 2)
			{
				return 2849.8909f, -604.3315f, -1.6402f;
			}
			else if (iParam0 == 3)
			{
				return 2845.8909f, -599.3315f, -1.6402f;
			}
			else if (iParam0 == 4)
			{
				return 2840.8909f, -601.3315f, -1.6402f;
			}
			else if (iParam0 == 5)
			{
				return 2845.8909f, -599.3315f, -1.6402f;
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				return -722.0089f, 6143.828f, -0.0725f;
			}
			else if (iParam0 == 1)
			{
				return -720.0872f, 6145.948f, -0.1022f;
			}
			else if (iParam0 == 2)
			{
				return -718.3804f, 6147.8433f, -0.0667f;
			}
			else if (iParam0 == 3)
			{
				return -716.8694f, 6149.5312f, -0.0463f;
			}
			else if (iParam0 == 4)
			{
				return -724.8694f, 6140.5312f, -0.0463f;
			}
			else if (iParam0 == 5)
			{
				return -715.8694f, 6147.5312f, -0.0463f;
			}
			break;
		case 3:
			if (iParam0 == 0)
			{
				return -94.5899f, -2780.1401f, -0.2103f;
			}
			else if (iParam0 == 1)
			{
				return -110.3913f, -2778.9321f, -0.0374f;
			}
			else if (iParam0 == 2)
			{
				return -107.0318f, -2775.7676f, -0.1162f;
			}
			else if (iParam0 == 3)
			{
				return -104.819f, -2774.1895f, -0.5056f;
			}
			else if (iParam0 == 4)
			{
				return -97.8694f, -2779.5312f, -0.0463f;
			}
			else if (iParam0 == 5)
			{
				return -112.8694f, -2780.5312f, -0.0463f;
			}
			break;
		case 6:
			if (iParam0 == 0)
			{
				return 1521.656f, 6657.6465f, -1.019f;
			}
			else if (iParam0 == 1)
			{
				return 1527.1831f, 6660.347f, -1.2808f;
			}
			else if (iParam0 == 2)
			{
				return 1533.4044f, 6664.429f, -1.8564f;
			}
			else if (iParam0 == 3)
			{
				return 1540.946f, 6670.6665f, -0.2959f;
			}
			else if (iParam0 == 4)
			{
				return -1542.8694f, 6671.5312f, -0.0463f;
			}
			else if (iParam0 == 5)
			{
				return -1519.8694f, 6655.5312f, -0.0463f;
			}
			break;
		case 5:
			if (iParam0 == 0)
			{
				return 3870.385f, 4439.973f, -7.2256f;
			}
			else if (iParam0 == 1)
			{
				return 3851.836f, 4483.777f, -3.0963f;
			}
			else if (iParam0 == 2)
			{
				return 3862.3071f, 4485.8013f, -0.9069f;
			}
			else if (iParam0 == 3)
			{
				return 3868.08f, 4475.3213f, -0.7179f;
			}
			else if (iParam0 == 4)
			{
				return 3872.8694f, 4438.5312f, -0.0463f;
			}
			else if (iParam0 == 5)
			{
				return 3869.8694f, 4435.5312f, -0.0463f;
			}
			break;
		case 4:
			if (iParam0 == 0)
			{
				return 1018.1042f, -2683.42f, -1.7048f;
			}
			else if (iParam0 == 1)
			{
				return 1020.3278f, -2681.3982f, -1.2738f;
			}
			else if (iParam0 == 2)
			{
				return 1009.0112f, -2686.8506f, -4.6334f;
			}
			else if (iParam0 == 3)
			{
				return 1011.9038f, -2692.4639f, -5.5581f;
			}
			else if (iParam0 == 4)
			{
				return 1015.8694f, -2682.5312f, -0.0463f;
			}
			else if (iParam0 == 5)
			{
				return 1014.8694f, -2680.5312f, -0.0463f;
			}
			break;
		case 7:
			if (iParam0 == 0)
			{
				return -3148.3691f, 3338.419f, -1.563f;
			}
			else if (iParam0 == 1)
			{
				return -3145.249f, 3342.1257f, -1.6426f;
			}
			else if (iParam0 == 2)
			{
				return -3144.8489f, 3344.4915f, -1.7292f;
			}
			else if (iParam0 == 3)
			{
				return -3140.848f, 3348.7825f, -1.5683f;
			}
			else if (iParam0 == 4)
			{
				return -3150.3691f, 3337.419f, -1.563f;
			}
			else if (iParam0 == 5)
			{
				return -3138.3691f, 3350.419f, -1.563f;
			}
			break;
		case 8:
			if (iParam0 == 0)
			{
				return -2566.684f, -269.2132f, -1.7097f;
			}
			else if (iParam0 == 1)
			{
				return -2563.9312f, -270.9359f, -1.7388f;
			}
			else if (iParam0 == 2)
			{
				return -2561.7402f, -275.2886f, -2.1442f;
			}
			else if (iParam0 == 3)
			{
				return -2558.8489f, -278.561f, -2.3748f;
			}
			else if (iParam0 == 4)
			{
				return -2569.684f, -268.2132f, -1.7097f;
			}
			else if (iParam0 == 5)
			{
				return -2555.684f, -280.2132f, -1.7097f;
			}
			break;
		case 9:
			if (iParam0 == 0)
			{
				return -2767.1545f, 2923.921f, -1.1199f;
			}
			else if (iParam0 == 1)
			{
				return -2766.0686f, 2908.893f, -1.0505f;
			}
			else if (iParam0 == 2)
			{
				return -2770.9153f, 2928.0857f, -1.278f;
			}
			else if (iParam0 == 3)
			{
				return -2768.4568f, 2889.6602f, -1.1289f;
			}
			else if (iParam0 == 4)
			{
				return -2765.1545f, 2900.921f, -1.1199f;
			}
			else if (iParam0 == 5)
			{
				return -2771.4568f, 2905.6602f, -1.1289f;
			}
			break;
	}
	return -1012.9749f, 6242.637f, -1.1634f;
}

int func_134()//Position - 0x6F66
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (Local_259[iVar0 /*6*/].f_3 == 1 && Local_146.f_156 == 0)
			{
				if (!BitTest(Local_146.f_2[__LIB_1__::func_851(Local_259[iVar0 /*6*/].f_5) /*3*/].f_2, __LIB_2__::func_37(Local_259[iVar0 /*6*/].f_5)))
				{
					Local_146.f_156 = 1;
					iVar1 = iVar2;
					Local_251.f_2 = -547323955;
					Local_251.f_10 = iVar1;
					if (Local_146.f_211[iVar0] < Global_262145.f_15584 /* Tunable: EXEC_SALVAGE_CP_INCREMENT_CAP */)
					{
						Local_251.f_3 = (Global_262145.f_15583 /* Tunable: EXEC_SALVAGE_CP_INCREMENT */ + (Local_146.f_211[iVar0] * Global_262145.f_15583 /* Tunable: EXEC_SALVAGE_CP_INCREMENT */));
					}
					else
					{
						Local_251.f_3 = (Global_262145.f_15584 /* Tunable: EXEC_SALVAGE_CP_INCREMENT_CAP */ * Global_262145.f_15583 /* Tunable: EXEC_SALVAGE_CP_INCREMENT */);
					}
					if (Local_251.f_10 == PLAYER::PLAYER_ID())
					{
						if (iLocal_245 == 0)
						{
							iLocal_245 = 1;
							Local_251.f_4 = 1;
						}
						else
						{
							Local_251.f_4 = 0;
						}
					}
					__LIB_1__::func_634(Local_251, __LIB_4__::func_970(1));
					Local_146.f_211[iVar0]++;
					Local_146.f_2[Local_259[iVar0 /*6*/].f_5 /*3*/] = iVar0;
					MISC::SET_BIT(&(Local_146.f_2[__LIB_1__::func_851(Local_259[iVar0 /*6*/].f_5) /*3*/].f_2), __LIB_2__::func_37(Local_259[iVar0 /*6*/].f_5));
					func_139();
					Local_146.f_1 = func_138();
					func_135(iVar2, Local_146.f_211[iVar0]);
					return 1;
				}
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_146.f_179 = (Local_146.f_178 - Local_146.f_1);
	}
	return 0;
}

void func_135(int iParam0, int iParam1)//Position - 0x70F9
{
	__LIB_34__::func_759(&(Local_146.f_166), iParam0, iParam1, 0);
	Local_146.f_163++;
}

int func_138()//Position - 0x7364
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = (iVar0 + Local_146.f_211[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_139()//Position - 0x7392
{
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_228))
	{
		AUDIO::STOP_SOUND(iLocal_228);
	}
	if (Local_146.f_175 == 2)
	{
	}
}

int func_143()//Position - 0x7419
{
	int iVar0;
	int iVar1;
	Local_146.f_161 = __LIB_1__::func_730();
	__LIB_0__::clearF_1Prop(&(Local_146.f_159));
	STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_146.f_176), &(Local_146.f_177));
	iVar1 = 0;
	if (__LIB_7__::func_944() > -1)
	{
		if (__LIB_7__::func_944() == 0)
		{
			iVar0 = 0;
		}
		else if (__LIB_7__::func_944() == 1)
		{
			iVar0 = 1;
		}
		else if (__LIB_7__::func_944() == 2)
		{
			iVar0 = 2;
		}
		else if (__LIB_7__::func_944() == 3)
		{
			iVar0 = 3;
		}
		else if (__LIB_7__::func_944() == 4)
		{
			iVar0 = 4;
		}
		else if (__LIB_7__::func_944() == 5)
		{
			iVar0 = 5;
		}
		else if (__LIB_7__::func_944() == 6)
		{
			iVar0 = 6;
		}
		else if (__LIB_7__::func_944() == 7)
		{
			iVar0 = 7;
		}
		else if (__LIB_7__::func_944() == 8)
		{
			iVar0 = 8;
		}
		else if (__LIB_7__::func_944() == 9)
		{
			iVar0 = 9;
		}
		else
		{
			iVar0 = func_191();
			while ((!func_190(PLAYER::PLAYER_ID(), iVar0) || func_189(iVar0)) && iVar1 < 11)
			{
				iVar0 = func_188(iVar0);
				iVar1++;
			}
			if (iVar1 >= 11)
			{
				iVar0 = func_191();
			}
		}
	}
	else
	{
		iVar0 = func_191();
		while ((!func_190(PLAYER::PLAYER_ID(), iVar0) || func_189(iVar0)) && iVar1 < 11)
		{
			iVar0 = func_188(iVar0);
			iVar1++;
		}
		if (iVar1 >= 11)
		{
			iVar0 = func_191();
		}
	}
	if (iVar0 == 10)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	}
	Local_146.f_153 = { func_86(iVar0) };
	__LIB_34__::func_760(&(Local_146.f_166), 0);
	func_186(iVar0);
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_426 = iVar0;
	func_135(PLAYER::PLAYER_ID(), 0);
	__LIB_30__::func_723(172, 1, -1, 0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 50)
	{
		if (iVar1 > 0)
		{
		}
		iVar1++;
	}
	Local_146.f_164 = iVar0;
	STREAMING::REQUEST_MODEL(joaat("seashark"));
	return 1;
}

void func_186(int iParam0)//Position - 0x85E1
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_372 != iParam0)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_372 = iParam0;
	}
}

int func_188(int iParam0)//Position - 0x864C
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 3;
			break;
		case 3:
			return 4;
			break;
		case 4:
			return 5;
			break;
		case 5:
			return 6;
			break;
		case 6:
			return 7;
			break;
		case 7:
			return 8;
			break;
		case 8:
			return 9;
			break;
		case 9:
			return 0;
			break;
	}
	return 10;
}

int func_189(int iParam0)//Position - 0x86E1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iParam0 == Global_1892703[iVar0 /*599*/].f_10.f_426)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_190(int iParam0, int iParam1)//Position - 0x8714
{
	return iParam1 != Global_1892703[iParam0 /*599*/].f_10.f_372;
}

int func_191()//Position - 0x872D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	Var0 = { func_86(0) };
	Var1 = { func_86(1) };
	Var2 = { func_86(2) };
	Var3 = { func_86(3) };
	Var4 = { func_86(4) };
	Var5 = { func_86(5) };
	Var6 = { func_86(6) };
	Var7 = { func_86(7) };
	Var8 = { func_86(8) };
	Var9 = { func_86(9) };
	fVar10 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), true), Var0);
	fVar11 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), true), Var1);
	fVar12 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), true), Var2);
	fVar13 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), true), Var3);
	fVar14 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), true), Var4);
	fVar15 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), true), Var5);
	fVar16 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), true), Var6);
	fVar17 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), true), Var7);
	fVar18 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), true), Var8);
	fVar19 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), true), Var9);
	iVar20 = 10;
	fVar21 = 100000f;
	if (fVar10 < fVar21)
	{
		iVar20 = 0;
		fVar21 = fVar10;
	}
	if (fVar11 < fVar21)
	{
		iVar20 = 1;
		fVar21 = fVar11;
	}
	if (fVar12 < fVar21)
	{
		iVar20 = 2;
		fVar21 = fVar12;
	}
	if (fVar14 < fVar21)
	{
		iVar20 = 4;
		fVar21 = fVar14;
	}
	if (fVar13 < fVar21)
	{
		iVar20 = 3;
		fVar21 = fVar13;
	}
	if (fVar15 < fVar21)
	{
		iVar20 = 5;
		fVar21 = fVar15;
	}
	if (fVar16 < fVar21)
	{
		iVar20 = 6;
		fVar21 = fVar16;
	}
	if (fVar17 < fVar21)
	{
		iVar20 = 7;
		fVar21 = fVar17;
	}
	if (fVar18 < fVar21)
	{
		iVar20 = 8;
		fVar21 = fVar18;
	}
	if (fVar19 < fVar21)
	{
		iVar20 = 9;
		fVar21 = fVar19;
	}
	return iVar20;
}

void func_194()//Position - 0x8945
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (iVar1 == 153)
			{
				func_195(iVar0);
			}
		}
		iVar0++;
	}
}

void func_195(int iParam0)//Position - 0x8980
{
	struct<21> Var0;
	int iVar1;
	Var0.f_20 = 20;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 56);
	if (Var0.f_16 != __LIB_0__::getMinusOneOrNull())
	{
		if (!BitTest(Local_146.f_183, Var0.f_16))
		{
			iVar1 = 0;
			while (iVar1 < Var0.f_19)
			{
				if (Var0.f_20[iVar1] == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					func_135(Var0.f_16, 0);
					MISC::SET_BIT(&(Local_146.f_183), Var0.f_16);
				}
				iVar1++;
			}
		}
	}
}

void func_380()//Position - 0xD6DE
{
	func_139();
	func_393();
	func_392();
	func_391();
	func_390();
	func_389();
	if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
	{
		AUDIO::TRIGGER_MUSIC_EVENT("SALVAGE_STOP_MUSIC");
	}
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (iLocal_221 == 0)
	{
		if ((func_9() - __LIB_1__::func_724(&(Local_146.f_159), 0, 0)) < 31000 && (func_9() - __LIB_1__::func_724(&(Local_146.f_159), 0, 0)) > 6000)
		{
			iLocal_221 = 1;
			AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S");
			AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
		}
	}
	func_387();
	__LIB_2__::func_777();
}

void func_387()//Position - 0xDAF3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_133[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_133[iVar0]));
		}
		iVar0++;
	}
}

void func_389()//Position - 0xDB6E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_236))
	{
		ENTITY::DETACH_ENTITY(iLocal_236, true, true);
		OBJECT::DELETE_OBJECT(&iLocal_236);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_236);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_237))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_237, false);
		STREAMING::REMOVE_NAMED_PTFX_ASSET(sLocal_238);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_229))
	{
		AUDIO::STOP_SOUND(iLocal_229);
	}
}

void func_390()//Position - 0xDBC2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_146.f_178)
	{
		GRAPHICS::DELETE_CHECKPOINT(Local_132[iVar0 /*4*/].f_1);
		if (HUD::DOES_BLIP_EXIST(Local_132[iVar0 /*4*/]))
		{
			HUD::REMOVE_BLIP(&(Local_132[iVar0 /*4*/]));
		}
		iVar0++;
	}
}

void func_391()//Position - 0xDC03
{
	if (HUD::DOES_BLIP_EXIST(iLocal_131))
	{
		Global_2815059.f_261 = { 0f, 0f, 0f };
		Global_2815059.f_267 = 0;
		HUD::REMOVE_BLIP(&iLocal_131);
	}
}

void func_392()//Position - 0xDC2E
{
	if (HUD::DOES_BLIP_EXIST(iLocal_130))
	{
		HUD::REMOVE_BLIP(&iLocal_130);
	}
}

void func_393()//Position - 0xDC45
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_224[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_224[iVar0]));
		}
		iVar0++;
	}
}

void func_394()//Position - 0xDC78
{
	if (Local_146.f_166[0 /*2*/] == PLAYER::PLAYER_ID() && Local_146.f_166[0 /*2*/].f_1 > Local_146.f_166[1 /*2*/].f_1)
	{
		func_6358(172, 1, &uLocal_191, 0);
		func_380();
	}
	else
	{
		func_6358(172, 0, &uLocal_191, 0);
		func_380();
	}
	iLocal_227 = 1;
}

void func_395()//Position - 0xDCCF
{
	func_801((func_9() - __LIB_1__::func_724(&(Local_146.f_159), 0, 0)));
	if (__LIB_36__::func_806() != 3)
	{
		func_785();
	}
	__LIB_34__::func_787(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
	func_784();
	if (Global_2787551 == 1 || (__LIB_0__::func_937(&uLocal_143, iLocal_267, 0) && Local_259[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3))
	{
		func_783();
		Global_2787551 = 0;
	}
	if (Global_2787552 == 1)
	{
		Global_2787552 = 0;
	}
	switch (Local_146.f_165)
	{
		case 0:
			func_396();
			if (Local_146.f_1 >= 50 && iLocal_227 == 0)
			{
				func_394();
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_396()//Position - 0xDD9D
{
	int iVar0;
	int iVar1;
	if (Local_146.f_0 != 3)
	{
		if (Local_146.f_162 == 1 && iLocal_225[Local_146.f_1] == 0)
		{
			func_139();
			func_392();
			func_391();
			if (Local_146.f_0 == 1)
			{
				func_782();
			}
			if (!__LIB_3__::func_244())
			{
			}
		}
		if (!__LIB_10__::func_332())
		{
			if (Local_146.f_1 != 49)
			{
				if (func_779(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_3__::func_417("GB_SAL_HELP1" /* GXT: Salvage the ~y~checkpoints~s~. */))
					{
						__LIB_3__::func_198("GB_SAL_HELP1" /* GXT: Salvage the ~y~checkpoints~s~. */, 0);
					}
				}
				else if (!__LIB_3__::func_417("GB_SAL_HELP2" /* GXT: Enter the ~y~salvage area~s~. */))
				{
					__LIB_3__::func_198("GB_SAL_HELP2" /* GXT: Enter the ~y~salvage area~s~. */, 0);
				}
			}
			else if (!__LIB_3__::func_244())
			{
				__LIB_3__::func_198("GB_SAL_HELP4" /* GXT: Salvage the final ~y~Checkpoint~s~. */, 0);
			}
		}
		if ((bLocal_226 == 0 && func_779(PLAYER::PLAYER_ID())) || bLocal_226 == 1)
		{
			if (Global_2787546 == 1 && func_771())
			{
				func_544();
			}
		}
		if (iLocal_217)
		{
			func_393();
			iLocal_217 = 0;
		}
		if (bLocal_226 || __LIB_10__::func_332())
		{
			iVar0 = 0;
			while (iVar0 < Local_146.f_178)
			{
				func_477(&(Local_132[iVar0 /*4*/]), func_543(iVar0), iVar0);
				iVar0++;
			}
		}
		if (!bLocal_226)
		{
			if (func_779(PLAYER::PLAYER_ID()))
			{
				func_475();
				func_391();
				iLocal_217 = 1;
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_145))
				{
					__LIB_1__::func_518(&iLocal_145);
				}
				__LIB_12__::func_846(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
				__LIB_12__::func_17(func_456(), __LIB_0__::func_932(func_456(), func_86(Local_146.f_164)), 1065353216);
				__LIB_15__::func_448(1, joaat("seashark"), 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
				__LIB_1__::func_959(Local_146.f_153, 1, 0);
				bLocal_226 = true;
			}
			if (!bLocal_226)
			{
				if ((iLocal_218 == 0 && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if ((iLocal_219 == 0 && iLocal_214 == 1) && iLocal_217 == 0)
					{
						if (__LIB_0__::func_937(&uLocal_137, 5000, 0))
						{
							if (Local_146.f_180)
							{
								iLocal_218 = 1;
								__LIB_0__::func_151("GB_SAL_HELP6" /* GXT: Seasharks ~BLIP_SEASHARK~~s~ on the shore nearby can be used to reach the Salvage area. */, -1);
							}
						}
					}
				}
			}
		}
		else
		{
			func_446();
			func_445();
		}
		if (iLocal_216 == 0)
		{
			if (func_779(PLAYER::PLAYER_ID()) && func_771())
			{
				func_544();
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_KNIFE"), false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_KNIFE"), true);
				}
			}
		}
		if (iLocal_214 == 1 && Local_146.f_180 == 1)
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_443(iVar0))
				{
					func_442(iVar0);
				}
				iVar0++;
			}
		}
		if (func_779(PLAYER::PLAYER_ID()) && func_771())
		{
			if (Local_146.f_182)
			{
				if (!iLocal_215 || Global_2787549)
				{
					func_439();
				}
			}
		}
		if (iLocal_214 == 0)
		{
			if (Local_146.f_180 == 1)
			{
				func_438();
				iLocal_214 = 1;
			}
		}
		if (func_779(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_0__::func_86(Local_146.f_153))
			{
				__LIB_30__::func_760(172, Local_146.f_153, &uLocal_248, 500f, 750f, 0);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_130))
		{
			if (__LIB_2__::func_759(PLAYER::PLAYER_ID(), __LIB_2__::func_39(PLAYER::PLAYER_ID()), 1) || __LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
			{
				if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
				{
					iVar1 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
				}
				else
				{
					iVar1 = Local_146.f_161;
				}
				if (func_417(iVar1) != iLocal_246)
				{
					iLocal_246 = func_417(iVar1);
					HUD::SET_BLIP_ALPHA(iLocal_130, iLocal_246);
				}
			}
		}
		if (Local_146.f_156 == 0)
		{
			if (func_400())
			{
			}
		}
		if (func_397())
		{
		}
	}
	else
	{
		Local_259[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
	}
}

int func_397()//Position - 0xE14E
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_146.f_195[iVar0]))
		{
			if (Global_2787550 == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_22(Local_146.f_164, iVar0), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false), true) < 1f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_399(iVar0);
					if (HUD::DOES_BLIP_EXIST(iLocal_133[iVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_133[iVar0]));
					}
					if (!__LIB_1__::func_515())
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Boss_Message_Orange", func_543(iVar0), "GTAO_Boss_Goons_FM_Soundset", false, 0, false);
					}
					__LIB_0__::clearF_1Prop(&uLocal_139);
					Global_2787550 = 0;
					iLocal_243++;
					return 1;
				}
			}
			Var1 = { func_22(Local_146.f_164, iVar0) };
			func_398(&Var1);
		}
		else if (Global_2787550 == 1 && MISC::GET_DISTANCE_BETWEEN_COORDS(func_22(Local_146.f_164, iVar0), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false), true) < 2f)
		{
			func_399(iVar0);
			if (HUD::DOES_BLIP_EXIST(iLocal_133[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_133[iVar0]));
			}
			__LIB_0__::clearF_1Prop(&uLocal_139);
			Global_2787550 = 0;
			iLocal_243++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_398(var uParam0)//Position - 0xE284
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	fVar4 = 15f;
	if (!__LIB_0__::func_86(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

void func_399(int iParam0)//Position - 0xE2D8
{
	struct<14> Var0;
	Var0.f_2 = -1978767900;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	__LIB_1__::func_634(Var0, __LIB_4__::func_970(1));
}

int func_400()//Position - 0xE305
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (Local_259[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 == 0)
	{
		bVar1 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) != PLAYER::PLAYER_PED_ID())
			{
				bVar1 = true;
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_146.f_178)
		{
			if (!BitTest(Local_146.f_2[__LIB_1__::func_851(iVar3) /*3*/].f_2, __LIB_2__::func_37(iVar3)) && !BitTest(uLocal_135[__LIB_1__::func_851(iVar3)], __LIB_2__::func_37(iVar3)))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_543(iVar3), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false), true) < 3f && !bVar1)
				{
					Local_259[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = 1;
					Local_259[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = iVar3;
					__LIB_22__::func_272();
					MISC::SET_BIT(&(uLocal_135[__LIB_1__::func_851(iVar3)]), __LIB_2__::func_37(iVar3));
					GRAPHICS::DELETE_CHECKPOINT(Local_132[iVar3 /*4*/].f_1);
					if (HUD::DOES_BLIP_EXIST(Local_132[iVar3 /*4*/]))
					{
						HUD::REMOVE_BLIP(&(Local_132[iVar3 /*4*/]));
					}
					if (iLocal_245 == 0)
					{
						__LIB_5__::func_832("GB_SAL_CASHPICK" /* GXT: Each checkpoint will contain $~1~ ~s~more than the last. */, Global_262145.f_15583 /* Tunable: EXEC_SALVAGE_CP_INCREMENT */, -1);
						iLocal_245 = 1;
					}
					__LIB_0__::clearF_1Prop(&uLocal_143);
					if (!__LIB_1__::func_515() && __LIB_0__::func_937(&uLocal_137, 500, 0))
					{
						__LIB_0__::clearF_1Prop(&uLocal_141);
					}
					if (Local_146.f_211[NETWORK::PARTICIPANT_ID_TO_INT()] < Global_262145.f_15584 /* Tunable: EXEC_SALVAGE_CP_INCREMENT_CAP */)
					{
						iVar4 = (Global_262145.f_15583 /* Tunable: EXEC_SALVAGE_CP_INCREMENT */ + (Local_146.f_211[NETWORK::PARTICIPANT_ID_TO_INT()] * Global_262145.f_15583 /* Tunable: EXEC_SALVAGE_CP_INCREMENT */));
					}
					else
					{
						iVar4 = (Global_262145.f_15584 /* Tunable: EXEC_SALVAGE_CP_INCREMENT_CAP */ * Global_262145.f_15583 /* Tunable: EXEC_SALVAGE_CP_INCREMENT */);
					}
					if (__LIB_0__::func_112())
					{
						iVar5 = 0;
						__LIB_9__::func_982(joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"), iVar4, &iVar5, 0, 1, 0);
					}
					else
					{
						MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_CP_COLLECTION", &uVar0);
					}
					return 1;
				}
			}
			iVar3++;
		}
	}
	return 0;
}

int func_417(int iParam0)//Position - 0xF2F5
{
	float fVar0;
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (!__LIB_0__::func_86(Local_146.f_153))
		{
			fVar0 = __LIB_0__::func_724(PLAYER::GET_PLAYER_PED(iParam0), Local_146.f_153, 0);
			if (fVar0 < (248f + __LIB_35__::func_719()))
			{
				return 70;
			}
		}
	}
	return Global_262145.f_12711 /* Tunable: BLIP_AREA_ALPHA */;
}

void func_438()//Position - 0xF9E3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_146.f_206[iVar0]))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_224[iVar0]))
			{
				iLocal_224[iVar0] = HUD::ADD_BLIP_FOR_COORD(func_87(iVar0));
				HUD::SET_BLIP_SCALE(iLocal_224[iVar0], 1f);
				HUD::SET_BLIP_SPRITE(iLocal_224[iVar0], 471);
				if (iVar0 == 0)
				{
					HUD::SET_BLIP_ROUTE(iLocal_224[iVar0], true);
				}
			}
		}
		iVar0++;
	}
}

int func_439()//Position - 0xFA59
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_146.f_195[iVar0]) && !HUD::DOES_BLIP_EXIST(iLocal_133[iVar0]))
		{
			iLocal_133[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_146.f_195[iVar0]));
			Global_2787549 = 0;
			iLocal_215 = 1;
			HUD::SET_BLIP_SCALE(iLocal_133[iVar0], 1f);
			__LIB_1__::func_540(&(iLocal_133[iVar0]), 18);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_133[iVar0], "BLIP_REBREATHE" /* GXT: Rebreather */);
			HUD::SET_BLIP_PRIORITY(iLocal_133[iVar0], 12);
			if (iVar0 == 9)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_442(int iParam0)//Position - 0xFD85
{
	if (HUD::DOES_BLIP_EXIST(iLocal_224[iParam0]))
	{
		HUD::REMOVE_BLIP(&(iLocal_224[iParam0]));
		iLocal_219 = 1;
	}
}

int func_443(int iParam0)//Position - 0xFDAA
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iLocal_224[iParam0]))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_146.f_206[iParam0]))
		{
			if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_146.f_206[iParam0]), 0))
			{
				iLocal_217 = 1;
				return 1;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("seashark")))
				{
					iLocal_217 = 1;
					return 1;
				}
			}
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_146.f_206[iParam0]), -1, false))
			{
				return 1;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_146.f_206[iParam0]), false))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_445()//Position - 0xFEAC
{
	struct<14> Var0;
	if (!iLocal_239)
	{
		Var0.f_2 = 51281702;
		Var0.f_10 = PLAYER::PLAYER_ID();
		__LIB_1__::func_634(Var0, __LIB_4__::func_970(1));
		iLocal_239 = 1;
	}
}

void func_446()//Position - 0xFEDE
{
	float fVar0;
	if (iLocal_242 == 0 && __LIB_0__::func_937(&uLocal_137, 10000, 0))
	{
		if (!__LIB_10__::func_332())
		{
			if (((!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_771()) && func_447())
			{
				__LIB_0__::clearF_1Prop(&uLocal_137);
				iLocal_242 = 1;
				__LIB_0__::func_151("GB_SAL_HELP1b" /* GXT: Collect rebreathers ~HUD_COLOUR_GREEN~~BLIP_OBJECTIVE~~s~ for more oxygen. */, -1);
			}
			if (!__LIB_3__::func_417("GB_SAL_HELP1" /* GXT: Salvage the ~y~checkpoints~s~. */))
			{
				__LIB_2__::func_777();
				__LIB_3__::func_198("GB_SAL_HELP1" /* GXT: Salvage the ~y~checkpoints~s~. */, 0);
			}
		}
	}
	if (AUDIO::HAS_SOUND_FINISHED(iLocal_228))
	{
		if (__LIB_0__::func_937(&(Local_146.f_157), iLocal_250, 0))
		{
			fVar0 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), func_543(Local_146.f_1), 0);
			if (Global_262145.f_13011 /* Tunable: GB_FINDERS_KEEPERS_SFX_RADIUS */ > SYSTEM::ROUND(fVar0))
			{
				__LIB_0__::clearF_1Prop(&(Local_146.f_157));
			}
		}
	}
	if (iLocal_230 == 0)
	{
		if (iLocal_231 == 1)
		{
			iLocal_230 = 1;
		}
	}
}

int func_447()//Position - 0xFFB0
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_146.f_153, 0) < (Global_262145.f_15572 /* Tunable: EXEC_SALVAGE_AREA_RADIUS */ + 300f))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iVar0) || PED::IS_PED_SWIMMING(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_456()//Position - 0x10325
{
	int iVar0;
	if (__LIB_2__::func_50())
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = __LIB_11__::func_797(func_6561(), PLAYER::PLAYER_ID());
	}
	if (Local_146.f_164 == 0)
	{
		if (iVar0 == 0)
		{
			return 3212.0474f, -85.1364f, 0.4581f;
		}
		else if (iVar0 == 1)
		{
			return 3070.1868f, -106.6181f, 0.2643f;
		}
		else if (iVar0 == 2)
		{
			return 3377.301f, -202.4127f, 0.8126f;
		}
		else if (iVar0 == 3)
		{
			return 3427.9248f, -289.1371f, 0.645f;
		}
		else if (iVar0 == 4)
		{
			return 3422.6885f, -378.5902f, 0.4568f;
		}
		else if (iVar0 == 5)
		{
			return 3375.189f, -494.8062f, 1.955f;
		}
	}
	else if (Local_146.f_164 == 2)
	{
		if (iVar0 == 0)
		{
			return 2708.2107f, -1648.3726f, 1.0228f;
		}
		else if (iVar0 == 1)
		{
			return 2765.0498f, -1664.643f, 1.0459f;
		}
		else if (iVar0 == 2)
		{
			return 2892.4736f, -1253.6687f, 0.2681f;
		}
		else if (iVar0 == 3)
		{
			return 2897.8845f, -1202.1033f, 0.0385f;
		}
		else if (iVar0 == 4)
		{
			return 2839.276f, -1212.1224f, 0.4156f;
		}
		else if (iVar0 == 5)
		{
			return 2836.4502f, -1160.7767f, -0.1465f;
		}
	}
	else if (Local_146.f_164 == 1)
	{
		if (iVar0 == 0)
		{
			return -933.9257f, 6845.116f, 0.1161f;
		}
		else if (iVar0 == 1)
		{
			return -768.8779f, 6788.8643f, -0.3356f;
		}
		else if (iVar0 == 2)
		{
			return -675.7148f, 6650.4595f, 0.5063f;
		}
		else if (iVar0 == 3)
		{
			return -681.525f, 6483.855f, 0.6498f;
		}
		else if (iVar0 == 4)
		{
			return -767.5818f, 6365.283f, 1.3525f;
		}
		else if (iVar0 == 5)
		{
			return -920.9078f, 6312.791f, 0.6602f;
		}
	}
	else if (Local_146.f_164 == 3)
	{
		if (iVar0 == 0)
		{
			return 62.5283f, -2871.5671f, 0.7724f;
		}
		else if (iVar0 == 1)
		{
			return 45.5803f, -2978.4114f, 0.3402f;
		}
		else if (iVar0 == 2)
		{
			return -23.1547f, -3063.6672f, 1.2579f;
		}
		else if (iVar0 == 3)
		{
			return -42.5379f, -3150.6934f, 0.7744f;
		}
		else if (iVar0 == 4)
		{
			return -133.2555f, -3123.654f, -0.1452f;
		}
		else if (iVar0 == 5)
		{
			return -194.499f, -3181.501f, -0.7797f;
		}
	}
	else if (Local_146.f_164 == 6)
	{
		if (iVar0 == 0)
		{
			return 2408.9429f, 6697.803f, 0.3778f;
		}
		else if (iVar0 == 1)
		{
			return 2439.8328f, 6792.1855f, 0.3985f;
		}
		else if (iVar0 == 2)
		{
			return 2506.5205f, 6871.954f, -0.2933f;
		}
		else if (iVar0 == 3)
		{
			return 2605.1448f, 6906.0605f, 0.591f;
		}
		else if (iVar0 == 4)
		{
			return 2711.3855f, 6911.089f, 0.9865f;
		}
		else if (iVar0 == 5)
		{
			return 2808.1914f, 6859.2183f, 0.8395f;
		}
	}
	else if (Local_146.f_164 == 5)
	{
		if (iVar0 == 0)
		{
			return 4002.2913f, 3768.315f, -0.549f;
		}
		else if (iVar0 == 1)
		{
			return 4116.6587f, 3805.0034f, 1.9367f;
		}
		else if (iVar0 == 2)
		{
			return 4249.7812f, 3770.628f, 0.3236f;
		}
		else if (iVar0 == 3)
		{
			return 4342.792f, 3686.66f, 1.9332f;
		}
		else if (iVar0 == 4)
		{
			return 4387.1035f, 3569.591f, 1.2003f;
		}
		else if (iVar0 == 5)
		{
			return 4377.966f, 3444.1392f, 1.5163f;
		}
	}
	else if (Local_146.f_164 == 4)
	{
		if (iVar0 == 0)
		{
			return 1915.518f, -2722.9236f, -0.2301f;
		}
		else if (iVar0 == 1)
		{
			return 2010.0168f, -2824.0085f, -0.2663f;
		}
		else if (iVar0 == 2)
		{
			return 2059.2192f, -2931.1787f, 0.0218f;
		}
		else if (iVar0 == 3)
		{
			return 2050.2517f, -3056.3027f, 0.9162f;
		}
		else if (iVar0 == 4)
		{
			return 1975.9358f, -3166.9763f, -0.2203f;
		}
		else if (iVar0 == 5)
		{
			return 1874.6621f, -3225.3862f, 0.776f;
		}
	}
	else if (Local_146.f_164 == 7)
	{
		if (iVar0 == 0)
		{
			return -2928.9956f, 3668.9824f, 0.31f;
		}
		else if (iVar0 == 1)
		{
			return -2968.4126f, 3826.9253f, -0.3712f;
		}
		else if (iVar0 == 2)
		{
			return -3080.578f, 3933.0251f, -0.4947f;
		}
		else if (iVar0 == 3)
		{
			return -3250.6787f, 3976.441f, -0.091f;
		}
		else if (iVar0 == 4)
		{
			return -3422.4055f, 3924.8713f, -0.6138f;
		}
		else if (iVar0 == 5)
		{
			return -3537.3127f, 3805.9626f, 0.4037f;
		}
	}
	else if (Local_146.f_164 == 8)
	{
		if (iVar0 == 0)
		{
			return -2684.2954f, -257.0117f, 0.1348f;
		}
		else if (iVar0 == 1)
		{
			return -2564.0173f, -397.6332f, 0.6662f;
		}
		else if (iVar0 == 2)
		{
			return -2536.9185f, -583.0862f, -0.2603f;
		}
		else if (iVar0 == 3)
		{
			return -2617.3855f, -729.0892f, 0.833f;
		}
		else if (iVar0 == 4)
		{
			return -2782.6843f, -822.0383f, 0.2424f;
		}
		else if (iVar0 == 5)
		{
			return -2979.096f, -787.7824f, 0.2871f;
		}
	}
	else if (Local_146.f_164 == 9)
	{
		if (iVar0 == 0)
		{
			return -2945.949f, 2839.3555f, -0.2352f;
		}
		else if (iVar0 == 1)
		{
			return -3036.118f, 2777.1877f, 0.0065f;
		}
		else if (iVar0 == 2)
		{
			return -3233.485f, 2748.6677f, 0.228f;
		}
		else if (iVar0 == 3)
		{
			return -3339.808f, 2790.8003f, 0.1298f;
		}
		else if (iVar0 == 4)
		{
			return -3418.4336f, 2862.3452f, 1.1379f;
		}
		else if (iVar0 == 5)
		{
			return -3468.6912f, 2955.863f, 0.4168f;
		}
	}
	return -1012.9749f, 6242.637f, -1.1634f;
}

void func_475()//Position - 0x10F1C
{
	if (!bLocal_226)
	{
		Global_1943926 = 0;
		__LIB_0__::clearF_1Prop(&uLocal_232);
		__LIB_0__::clearF_1Prop(&uLocal_137);
		iLocal_250 = 5000;
		func_476();
	}
}

int func_476()//Position - 0x10F49
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_146.f_178)
	{
		func_477(&(Local_132[iVar0 /*4*/]), func_543(iVar0), iVar0);
		iVar0++;
	}
	return 1;
}

void func_477(int iParam0, struct<3> Param1, int iParam2)//Position - 0x10F7A
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	Var0 = { Param1 };
	HUD::GET_HUD_COLOUR(12, &iVar1, &iVar2, &iVar3, &uVar4);
	if (!BitTest(Local_146.f_2[__LIB_1__::func_851(iParam2) /*3*/].f_2, __LIB_2__::func_37(iParam2)))
	{
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				HUD::SET_BLIP_ALPHA(*iParam0, 255);
			}
			else
			{
				__LIB_35__::func_730(*iParam0, 25, 1152319488, 1137180672);
			}
		}
		if (!BitTest(uLocal_134[__LIB_1__::func_851(iParam2)], __LIB_2__::func_37(iParam2)))
		{
			iVar5 = 54;
			iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar5, Var0, Var0, 5f, iVar1, iVar2, iVar3, iParam0->f_2, 0);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 2.5f, 2.5f, 50f);
			MISC::SET_BIT(&(uLocal_134[__LIB_1__::func_851(iParam2)]), __LIB_2__::func_37(iParam2));
			HUD::GET_HUD_COLOUR(12, &iVar1, &iVar2, &iVar3, &uVar4);
			GRAPHICS::SET_CHECKPOINT_RGBA(iParam0->f_1, iVar1, iVar2, iVar3, 175);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iParam0->f_1, iVar1, iVar2, iVar3, 175);
			if (!__LIB_0__::func_78(Var0, 0f, 0f, 0f, 0) && !__LIB_0__::func_78(Var0, 0f, 0f, -2000f, 0))
			{
				*iParam0 = HUD::ADD_BLIP_FOR_COORD(Var0);
				HUD::SET_BLIP_SPRITE(*iParam0, 431);
				HUD::SET_BLIP_PRIORITY(*iParam0, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "CPC_BLIP" /* GXT: Checkpoint */);
				__LIB_35__::func_730(*iParam0, 25, 1152319488, 1137180672);
				__LIB_1__::func_540(iParam0, 12);
				HUD::SHOW_HEIGHT_ON_BLIP(*iParam0, true);
				HUD::SET_BLIP_AS_SHORT_RANGE(*iParam0, true);
			}
		}
		else
		{
			__LIB_36__::func_129(&(iParam0->f_1), &(iParam0->f_2));
		}
		func_398(&Param1);
	}
	else
	{
		if (BitTest(uLocal_134[__LIB_1__::func_851(iParam2)], __LIB_2__::func_37(iParam2)))
		{
			GRAPHICS::DELETE_CHECKPOINT(iParam0->f_1);
			if (HUD::DOES_BLIP_EXIST(*iParam0))
			{
				HUD::REMOVE_BLIP(iParam0);
			}
			iParam0->f_1 = 0;
			iParam0->f_3 = 1;
			MISC::CLEAR_BIT(&(uLocal_134[__LIB_1__::func_851(iParam2)]), __LIB_2__::func_37(iParam2));
		}
		else if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
			iParam0->f_3 = 1;
			GRAPHICS::DELETE_CHECKPOINT(iParam0->f_1);
			iParam0->f_1 = 0;
		}
		if (BitTest(Local_146.f_2[__LIB_1__::func_851(iParam2) /*3*/].f_2, __LIB_2__::func_37(iParam2)))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam0))
			{
				HUD::REMOVE_BLIP(iParam0);
				iParam0->f_3 = 1;
			}
		}
	}
}

Vector3 func_543(int iParam0)//Position - 0x1288E
{
	if (Local_146.f_164 == 0)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_146.f_162 = 1;
			Local_146.f_153 = { func_86(0) };
			Local_146.f_178 = 50;
		}
		switch (iParam0)
		{
			case 0:
				return 3135.3657f, -354.4541f, -7f;
				break;
			case 1:
				return 3147.6912f, -359.3427f, -20.7122f;
				break;
			case 2:
				return 3186.573f, -357.5428f, -8.8624f;
				break;
			case 3:
				return 3173.9028f, -325.9884f, -19.1843f;
				break;
			case 4:
				return 3170.252f, -313.4249f, -8.7975f;
				break;
			case 5:
				return 3196.7742f, -379.4515f, -23.8401f;
				break;
			case 6:
				return 3140.8335f, -312.4993f, -19.6948f;
				break;
			case 7:
				return 3219.6697f, -421.9644f, -27.603f;
				break;
			case 8:
				return 3209.596f, -397.0404f, -30.8351f;
				break;
			case 9:
				return 3201.9934f, -388.6151f, -8.2073f;
				break;
			case 10:
				return 3135.249f, -283.5456f, -15.2094f;
				break;
			case 11:
				return 3147.4255f, -266.2146f, -24.7057f;
				break;
			case 12:
				return 3127.4033f, -221.6972f, -23.2968f;
				break;
			case 13:
				return 3126.3667f, -307.3863f, -11.9712f;
				break;
			case 14:
				return 3152.1917f, -394.2682f, -10.2259f;
				break;
			case 15:
				return 3190.4556f, -399.7629f, -24.9871f;
				break;
			case 16:
				return 3199.365f, -314.4537f, -5.2628f;
				break;
			case 17:
				return 3156.17f, -281.5862f, -5.544f;
				break;
			case 18:
				return 3176.5042f, -251.6724f, -14.6202f;
				break;
			case 19:
				return 3103.8032f, -250.1026f, -3.3526f;
				break;
			case 20:
				return 3159.5354f, -297.5987f, -22.2973f;
				break;
			case 21:
				return 3144.7231f, -298.9697f, -8f;
				break;
			case 22:
				return 3169.7163f, -324.8933f, -3.3222f;
				break;
			case 23:
				return 3109.2214f, -351.5621f, -18.0474f;
				break;
			case 24:
				return 3185.5476f, -417.2469f, -5.891f;
				break;
			case 25:
				return 3086.0469f, -175.0174f, -19.842f;
				break;
			case 26:
				return 3238.8218f, -374.8987f, -17.5602f;
				break;
			case 27:
				return 3178.904f, -293.3883f, -15.1235f;
				break;
			case 28:
				return 3127.9429f, -395.72f, -21.3886f;
				break;
			case 29:
				return 3201.6145f, -256.6116f, -4f;
				break;
			case 30:
				return 3118.2673f, -194.1014f, -19.5541f;
				break;
			case 31:
				return 3078.641f, -147.0168f, -16.0298f;
				break;
			case 32:
				return 3053.7427f, -243.9219f, -4f;
				break;
			case 33:
				return 3021.06f, -413.0354f, -8.4086f;
				break;
			case 34:
				return 3102.27f, -400.6252f, -26.5297f;
				break;
			case 35:
				return 3027.9985f, -459.912f, -23.7804f;
				break;
			case 36:
				return 3076.0696f, -491.1312f, -21.1518f;
				break;
			case 37:
				return 3132.9353f, -434.1494f, -36.4362f;
				break;
			case 38:
				return 3185.1057f, -468.8703f, -23.9478f;
				break;
			case 39:
				return 3346.8518f, -432.3822f, -44.1609f;
				break;
			case 40:
				return 3324.2793f, -369.7613f, -64.3232f;
				break;
			case 41:
				return 3269.3613f, -238.7943f, -8.1386f;
				break;
			case 42:
				return 3054.6138f, -468.0908f, -38.0196f;
				break;
			case 43:
				return 3095.727f, -470.5118f, -26.1035f;
				break;
			case 44:
				return 3211.5771f, -478.0594f, -45.7608f;
				break;
			case 45:
				return 3257.281f, -417.4969f, -36.4075f;
				break;
			case 46:
				return 3160.0386f, -429.4074f, -21.2846f;
				break;
			case 47:
				return 3256.0093f, -395.3117f, -23.4135f;
				break;
			case 48:
				return 3242.3472f, -357.9663f, -49.5796f;
				break;
			case 49:
				return 3161.974f, -320.1731f, -19.2641f;
				break;
			}
	}
	if (Local_146.f_164 == 1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_146.f_162 = 1;
			Local_146.f_153 = { func_86(1) };
			Local_146.f_178 = 50;
		}
		switch (iParam0)
		{
			case 0:
				return -940.684f, 6558.5083f, -25.2199f;
				break;
			case 1:
				return -1020.4067f, 6571.399f, -23.312f;
				break;
			case 2:
				return -1015.4128f, 6506.8438f, -29.3461f;
				break;
			case 3:
				return -1032.7959f, 6506.292f, -17.9195f;
				break;
			case 4:
				return -902.9766f, 6606.668f, -27.9263f;
				break;
			case 5:
				return -987.1236f, 6567.1973f, -8.0592f;
				break;
			case 6:
				return -946.2492f, 6659.7373f, -20.8487f;
				break;
			case 7:
				return -855.8766f, 6613.142f, -6.4414f;
				break;
			case 8:
				return -881.7035f, 6633.5645f, -19.5167f;
				break;
			case 9:
				return -911.9145f, 6654.6045f, -28.2485f;
				break;
			case 10:
				return -802.5884f, 6665.67f, -8.6216f;
				break;
			case 11:
				return -907.0857f, 6718.439f, -16.6377f;
				break;
			case 12:
				return -920.1297f, 6681.995f, -22.0983f;
				break;
			case 13:
				return -981.9054f, 6699.1987f, -27.5578f;
				break;
			case 14:
				return -942.4011f, 6713.846f, -40.4849f;
				break;
			case 15:
				return -978.6621f, 6640.107f, -25.0549f;
				break;
			case 16:
				return -1040.0034f, 6576.214f, -7.7223f;
				break;
			case 17:
				return -808.7715f, 6595.152f, -21.9147f;
				break;
			case 18:
				return -837.3305f, 6634.91f, -22.2648f;
				break;
			case 19:
				return -990.1726f, 6725.25f, -39.5781f;
				break;
			case 20:
				return -992.2587f, 6666.246f, -30.4054f;
				break;
			case 21:
				return -1029.708f, 6608.91f, -25.4515f;
				break;
			case 22:
				return -888.2024f, 6528.345f, -15.7453f;
				break;
			case 23:
				return -932.7153f, 6480.5415f, -17.2071f;
				break;
			case 24:
				return -1047.847f, 6475.624f, -10.5532f;
				break;
			case 25:
				return -1052.667f, 6544.7563f, -26.1796f;
				break;
			case 26:
				return -917.3282f, 6625.926f, -22.2058f;
				break;
			case 27:
				return -766.0142f, 6611.6714f, -13.7582f;
				break;
			case 28:
				return -936.9161f, 6544.037f, -4.6f;
				break;
			case 29:
				return -1035.7434f, 6570.106f, -7.8606f;
				break;
			case 30:
				return -1003.443f, 6708.4683f, -58.9846f;
				break;
			case 31:
				return -995.2881f, 6704.0405f, -41.1943f;
				break;
			case 32:
				return -1061.6298f, 6692.3784f, -43.392f;
				break;
			case 33:
				return -1055.6711f, 6651.2886f, -41.1978f;
				break;
			case 34:
				return -1092.413f, 6608.608f, -33.0847f;
				break;
			case 35:
				return -1117.7777f, 6580.113f, -9.8624f;
				break;
			case 36:
				return -1087.6035f, 6498.543f, -25.4028f;
				break;
			case 37:
				return -1042.3569f, 6478.0234f, -25.6903f;
				break;
			case 38:
				return -1017.3608f, 6409.9644f, -14.2984f;
				break;
			case 39:
				return -992.8898f, 6387.5522f, -16.2148f;
				break;
			case 40:
				return -982.5092f, 6422.2734f, -11.8426f;
				break;
			case 41:
				return -927.6414f, 6430.357f, -16.7373f;
				break;
			case 42:
				return -972.7563f, 6476.662f, -25.8281f;
				break;
			case 43:
				return -879.3123f, 6463.0464f, -11.2318f;
				break;
			case 44:
				return -804.7411f, 6542.3496f, -19.5496f;
				break;
			case 45:
				return -755.4528f, 6575.423f, -8.7002f;
				break;
			case 46:
				return -772.2038f, 6711.6064f, -23.5659f;
				break;
			case 47:
				return -846.384f, 6744.7744f, -20.1361f;
				break;
			case 48:
				return -866.293f, 6697.9824f, -18.1454f;
				break;
			case 49:
				return -938.1859f, 6785.8535f, -32.4493f;
				break;
			}
	}
	if (Local_146.f_164 == 2)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_146.f_162 = 1;
			Local_146.f_153 = { func_86(2) };
			Local_146.f_178 = 50;
		}
		switch (iParam0)
		{
			case 0:
				return 2652.266f, -1418.445f, -4.0544f;
				break;
			case 1:
				return 2654.3518f, -1448.4978f, -15.3399f;
				break;
			case 2:
				return 2666.7666f, -1427.1753f, -20.417f;
				break;
			case 3:
				return 2658.1392f, -1420.1147f, -16.0462f;
				break;
			case 4:
				return 2643.4148f, -1391.1132f, -5.9669f;
				break;
			case 5:
				return 2689.4155f, -1408.0809f, -8.213f;
				break;
			case 6:
				return 2698.872f, -1368.3978f, -10.9564f;
				break;
			case 7:
				return 2685.246f, -1398.0529f, -17.2692f;
				break;
			case 8:
				return 2661.2402f, -1396.7802f, -17.5751f;
				break;
			case 9:
				return 2638.0996f, -1426.559f, -17.6362f;
				break;
			case 10:
				return 2680.4631f, -1355.8827f, -10.6394f;
				break;
			case 11:
				return 2675.4177f, -1361.2708f, -17.9876f;
				break;
			case 12:
				return 2631.8098f, -1369.9413f, -9.6194f;
				break;
			case 13:
				return 2625.3137f, -1401.5372f, -11.7442f;
				break;
			case 14:
				return 2702.982f, -1435.5287f, -14.8009f;
				break;
			case 15:
				return 2727.1418f, -1365.1554f, -12.2438f;
				break;
			case 16:
				return 2649.8838f, -1424.1425f, -18.2053f;
				break;
			case 17:
				return 2638.3977f, -1314.7654f, -15.1045f;
				break;
			case 18:
				return 2727.043f, -1444.6843f, -8.6098f;
				break;
			case 19:
				return 2589.5774f, -1459.8925f, -8.4694f;
				break;
			case 20:
				return 2641.3074f, -1441.0742f, -14.6031f;
				break;
			case 21:
				return 2645.7212f, -1488.5498f, -19.2787f;
				break;
			case 22:
				return 2649.4368f, -1375.3959f, -15.9989f;
				break;
			case 23:
				return 2601.1318f, -1409.915f, -5.8628f;
				break;
			case 24:
				return 2693.9204f, -1474.928f, -13.5258f;
				break;
			case 25:
				return 2733.894f, -1413.834f, -9.2974f;
				break;
			case 26:
				return 2604.147f, -1437.5265f, -12.8387f;
				break;
			case 27:
				return 2665.8901f, -1493.6519f, -16.7828f;
				break;
			case 28:
				return 2750.2664f, -1346.656f, -4.0896f;
				break;
			case 29:
				return 2610.1858f, -1327.5623f, -3.4805f;
				break;
			case 30:
				return 2693.2979f, -1518.5035f, -13.9086f;
				break;
			case 31:
				return 2576.1875f, -1534.4918f, -11.9347f;
				break;
			case 32:
				return 2635.0295f, -1540.928f, -11.61f;
				break;
			case 33:
				return 2560.1077f, -1462.671f, -9.8545f;
				break;
			case 34:
				return 2604.9817f, -1384.6818f, -9.6481f;
				break;
			case 35:
				return 2724.7134f, -1256.7545f, -18.9802f;
				break;
			case 36:
				return 2726.7712f, -1200.4049f, -13.2008f;
				break;
			case 37:
				return 2753.039f, -1260.0951f, -14.3599f;
				break;
			case 38:
				return 2691.308f, -1307.2642f, -18.7307f;
				break;
			case 39:
				return 2693.6826f, -1423.661f, -5.9968f;
				break;
			case 40:
				return 2659.946f, -1279.5763f, -19.4202f;
				break;
			case 41:
				return 2653.221f, -1329.4376f, -17.5979f;
				break;
			case 42:
				return 2693.2224f, -1379.7386f, -16.9807f;
				break;
			case 43:
				return 2718.5437f, -1393.1926f, -16.1313f;
				break;
			case 44:
				return 2633.145f, -1540.8651f, -4.2618f;
				break;
			case 45:
				return 2679.107f, -1566.7404f, -9.1924f;
				break;
			case 46:
				return 2648.099f, -1341.8434f, -11.7505f;
				break;
			case 47:
				return 2645.3352f, -1274.2909f, -14.0425f;
				break;
			case 48:
				return 2735.6624f, -1329.7449f, -12.1964f;
				break;
			case 49:
				return 2767.3633f, -1201.9155f, -17.5772f;
				break;
			}
	}
	if (Local_146.f_164 == 3)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_146.f_162 = 1;
			Local_146.f_153 = { func_86(3) };
			Local_146.f_178 = 50;
		}
		switch (iParam0)
		{
			case 0:
				return -123.4617f, -2869.94f, -16.3995f;
				break;
			case 1:
				return -138.7137f, -2871.6477f, -13.6277f;
				break;
			case 2:
				return -148.4602f, -2858.5728f, -14.1256f;
				break;
			case 3:
				return -159.7547f, -2858.2988f, -11.114f;
				break;
			case 4:
				return -180.8156f, -2856.6562f, -13.2429f;
				break;
			case 5:
				return -178.0286f, -2836.46f, -11.5266f;
				break;
			case 6:
				return -170.6358f, -2884.3755f, -21.4938f;
				break;
			case 7:
				return -107.0947f, -2872.7434f, -18.7651f;
				break;
			case 8:
				return -197.4001f, -2876.7644f, -16.9466f;
				break;
			case 9:
				return -211.4926f, -2853.538f, -9.8861f;
				break;
			case 10:
				return -241.3681f, -2861.2898f, -17.7971f;
				break;
			case 11:
				return -242.2805f, -2879.2493f, -21.514f;
				break;
			case 12:
				return -232.0783f, -2886.665f, -19.3111f;
				break;
			case 13:
				return -279.0308f, -2894.552f, -13.4571f;
				break;
			case 14:
				return -267.7975f, -2896.8467f, -8.563f;
				break;
			case 15:
				return -303.1421f, -2895.1946f, -12.8636f;
				break;
			case 16:
				return -284.3269f, -2879.3818f, -13.198f;
				break;
			case 17:
				return -270.1964f, -2874.6824f, -15.5478f;
				break;
			case 18:
				return -230.8368f, -2883.796f, -5.773f;
				break;
			case 19:
				return -122.9077f, -2856.764f, -7.3161f;
				break;
			case 20:
				return -108.1399f, -2848.085f, -5.1325f;
				break;
			case 21:
				return -130.6012f, -2839.3906f, -11.9248f;
				break;
			case 22:
				return -187.7467f, -2764.2751f, -12.927f;
				break;
			case 23:
				return -187.997f, -2800.6997f, -14.3917f;
				break;
			case 24:
				return -203.4084f, -2811.9695f, -12.1949f;
				break;
			case 25:
				return -241.163f, -2822.9177f, -16.996f;
				break;
			case 26:
				return -272.5608f, -2844.2f, -13.733f;
				break;
			case 27:
				return -317.5323f, -2846.3394f, -7.7371f;
				break;
			case 28:
				return -322.6858f, -2916.3984f, -13.2445f;
				break;
			case 29:
				return -329.1637f, -2945.7625f, -15.1612f;
				break;
			case 30:
				return -296.3756f, -2964.9553f, -16.5131f;
				break;
			case 31:
				return -281.2891f, -2930.6091f, -16.9224f;
				break;
			case 32:
				return -250.3996f, -2915.875f, -22.7967f;
				break;
			case 33:
				return -212.148f, -2939.8044f, -27.3775f;
				break;
			case 34:
				return -161.8391f, -2918.9211f, -18.3542f;
				break;
			case 35:
				return -123.5734f, -2889.8223f, -24.0321f;
				break;
			case 36:
				return -40.3317f, -2871.4438f, -21.5325f;
				break;
			case 37:
				return -28.3143f, -2840.5818f, -10f;
				break;
			case 38:
				return -74.5391f, -2831.7007f, -12.069f;
				break;
			case 39:
				return -97.5883f, -2808.7834f, -10.6454f;
				break;
			case 40:
				return -121.2626f, -2820.794f, -13.3995f;
				break;
			case 41:
				return -133.0665f, -2788.7717f, -11.1374f;
				break;
			case 42:
				return -153.0454f, -2814.6365f, -12.3484f;
				break;
			case 43:
				return -169.498f, -2782.3015f, -11.2845f;
				break;
			case 44:
				return -182.149f, -2816.4048f, -8.201f;
				break;
			case 45:
				return -222.4776f, -2791.6038f, -16.0357f;
				break;
			case 46:
				return -227.1795f, -2818.8826f, -18.2681f;
				break;
			case 47:
				return -254.0901f, -2836.053f, -15.0898f;
				break;
			case 48:
				return -174.4692f, -2955.3035f, -24.8742f;
				break;
			case 49:
				return -119.8888f, -2933.497f, -27.3452f;
				break;
			}
	}
	if (Local_146.f_164 == 5)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_146.f_162 = 1;
			Local_146.f_153 = { func_86(5) };
			Local_146.f_178 = 50;
		}
		switch (iParam0)
		{
			case 0:
				return 4128.6455f, 3536.8157f, -27.2726f;
				break;
			case 1:
				return 4142.2495f, 3513.8633f, -35.5099f;
				break;
			case 2:
				return 4124.658f, 3509.5256f, -29.0893f;
				break;
			case 3:
				return 4156.7993f, 3518.2576f, -40.8704f;
				break;
			case 4:
				return 4157.6187f, 3503.0051f, -33.465f;
				break;
			case 5:
				return 4142.7183f, 3528.0044f, -37.9942f;
				break;
			case 6:
				return 4169.4155f, 3538.0305f, -46.6281f;
				break;
			case 7:
				return 4174.0557f, 3520.2874f, -25.6862f;
				break;
			case 8:
				return 4108.327f, 3514.6907f, -26.2199f;
				break;
			case 9:
				return 4138.39f, 3549.1982f, -32.0103f;
				break;
			case 10:
				return 4149.3594f, 3575.9976f, -40.3522f;
				break;
			case 11:
				return 4202.261f, 3579.7288f, -50.913f;
				break;
			case 12:
				return 4196.5366f, 3600.012f, -43.763f;
				break;
			case 13:
				return 4187.8345f, 3579.0437f, -42.4474f;
				break;
			case 14:
				return 4167.6143f, 3487.6716f, -21.3586f;
				break;
			case 15:
				return 4194.7886f, 3481.737f, -14.6297f;
				break;
			case 16:
				return 4136.941f, 3493.0679f, -16.5569f;
				break;
			case 17:
				return 4114.3413f, 3497.086f, -27.7748f;
				break;
			case 18:
				return 4111.525f, 3507.9795f, -17.8111f;
				break;
			case 19:
				return 4102.7275f, 3529.9946f, -22.0589f;
				break;
			case 20:
				return 4102.727f, 3529.9946f, -12.9261f;
				break;
			case 21:
				return 4138.7583f, 3562.23f, -30.3732f;
				break;
			case 22:
				return 4164.3096f, 3568.0574f, -7.4719f;
				break;
			case 23:
				return 4160.3154f, 3562.0583f, -10.2153f;
				break;
			case 24:
				return 4296.9575f, 3511.3936f, -51.261f;
				break;
			case 25:
				return 4190.939f, 3554.381f, -30.0441f;
				break;
			case 26:
				return 4108.94f, 3655.3833f, -14.8135f;
				break;
			case 27:
				return 4239.1357f, 3599.483f, -44.3814f;
				break;
			case 28:
				return 4238.883f, 3586.7542f, -25.5911f;
				break;
			case 29:
				return 4243.8335f, 3505.8335f, -20.6198f;
				break;
			case 30:
				return 4197.836f, 3562.8972f, -25.189f;
				break;
			case 31:
				return 4158.588f, 3665.2769f, -33.9307f;
				break;
			case 32:
				return 4200.714f, 3424.8804f, -20.2091f;
				break;
			case 33:
				return 4162.6216f, 3634.2463f, -33.5816f;
				break;
			case 34:
				return 4162.782f, 3617.425f, -12.2804f;
				break;
			case 35:
				return 4160.0576f, 3605.7239f, -32.3609f;
				break;
			case 36:
				return 4221.9116f, 3553.8462f, -23.0533f;
				break;
			case 37:
				return 4221.9043f, 3558.8525f, -17.8789f;
				break;
			case 38:
				return 4080.092f, 3479.7007f, -14.235f;
				break;
			case 39:
				return 4066.0889f, 3526.066f, -15.4203f;
				break;
			case 40:
				return 4154.0923f, 3411.0771f, -46.2615f;
				break;
			case 41:
				return 4072.0947f, 3614.0728f, -9.9735f;
				break;
			case 42:
				return 4066.0957f, 3536.072f, -10.7735f;
				break;
			case 43:
				return 4113.668f, 3597.486f, -31.9989f;
				break;
			case 44:
				return 4096.7964f, 3604.8677f, -16.0383f;
				break;
			case 45:
				return 4135.1133f, 3615.6663f, -17.9848f;
				break;
			case 46:
				return 4133.843f, 3640.7646f, -16.4483f;
				break;
			case 47:
				return 4116.5127f, 3627.5146f, -26.1424f;
				break;
			case 48:
				return 4148.9253f, 3621.0298f, -15.3541f;
				break;
			case 49:
				return 4172.7407f, 3640.3933f, -19.4547f;
				break;
			}
	}
	if (Local_146.f_164 == 4)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_146.f_162 = 1;
			Local_146.f_153 = { func_86(4) };
			Local_146.f_178 = 50;
		}
		switch (iParam0)
		{
			case 0:
				return 1788.7787f, -2959.714f, -38.8306f;
				break;
			case 1:
				return 1762.0347f, -2989.6985f, -39.914f;
				break;
			case 2:
				return 1786.4927f, -2975.6926f, -42.3752f;
				break;
			case 3:
				return 1821.0055f, -2965.8862f, -45.5229f;
				break;
			case 4:
				return 1829.8605f, -2939.6309f, -46.0756f;
				break;
			case 5:
				return 1835.6147f, -2963.9944f, -46.8441f;
				break;
			case 6:
				return 1834.27f, -2990.777f, -48.3743f;
				break;
			case 7:
				return 1792.9769f, -2940.7688f, -38.3727f;
				break;
			case 8:
				return 1861.3779f, -2944.7083f, -40.415f;
				break;
			case 9:
				return 1861.5988f, -2937.704f, -43.0719f;
				break;
			case 10:
				return 1888.6262f, -2951.3494f, -40.0834f;
				break;
			case 11:
				return 1893.4778f, -2937.9402f, -35.4192f;
				break;
			case 12:
				return 1814.0315f, -2945.8594f, -39.3598f;
				break;
			case 13:
				return 1798.4218f, -2916.2942f, -30.0976f;
				break;
			case 14:
				return 1756.9698f, -2992.4194f, -24.831f;
				break;
			case 15:
				return 1799.1189f, -2902.2722f, -28.3129f;
				break;
			case 16:
				return 1866.496f, -2928.122f, -40.468f;
				break;
			case 17:
				return 1883.4008f, -2925.5789f, -31.1202f;
				break;
			case 18:
				return 1855.723f, -2976.4497f, -50.0471f;
				break;
			case 19:
				return 1857.5791f, -2976.0193f, -25.141f;
				break;
			case 20:
				return 1777.9792f, -2905.3662f, -12.1964f;
				break;
			case 21:
				return 1791.0074f, -3004.0635f, -36.1629f;
				break;
			case 22:
				return 1745.0244f, -2993.7517f, -53.8849f;
				break;
			case 23:
				return 1750.0521f, -3016.4512f, -50.4857f;
				break;
			case 24:
				return 1798.3268f, -3046.9465f, -43.0121f;
				break;
			case 25:
				return 1825.4607f, -3032.8965f, -30.4531f;
				break;
			case 26:
				return 1896.5208f, -2995.2253f, -16.2614f;
				break;
			case 27:
				return 1888.6799f, -2907.6248f, -20.249f;
				break;
			case 28:
				return 1870.2258f, -2881.2803f, -24.3322f;
				break;
			case 29:
				return 1861.718f, -2868.9587f, -19.209f;
				break;
			case 30:
				return 1813.0112f, -2881.74f, -14.7041f;
				break;
			case 31:
				return 1790.4539f, -2886.9924f, -10.1967f;
				break;
			case 32:
				return 1759.0607f, -2897.5251f, -24.7666f;
				break;
			case 33:
				return 1756.3274f, -2945.521f, -29.9931f;
				break;
			case 34:
				return 1814.3345f, -2932.6968f, -21.4609f;
				break;
			case 35:
				return 1913.3959f, -2986.4114f, -24.5091f;
				break;
			case 36:
				return 1765.0681f, -3045.4082f, -44.3087f;
				break;
			case 37:
				return 1724.7415f, -3014.0247f, -39.0973f;
				break;
			case 38:
				return 1768.7816f, -3027.7827f, -44.8443f;
				break;
			case 39:
				return 1938.8844f, -2959.583f, -30.9051f;
				break;
			case 40:
				return 1903.1936f, -2922.4639f, -9.1981f;
				break;
			case 41:
				return 1858.0865f, -2902.4062f, -15.2284f;
				break;
			case 42:
				return 1731.573f, -2956.3555f, -25.0112f;
				break;
			case 43:
				return 1763.3627f, -2912.459f, -27.5669f;
				break;
			case 44:
				return 1802.7463f, -2984.4978f, -43.4314f;
				break;
			case 45:
				return 1771.8168f, -3067.359f, -59.3156f;
				break;
			case 46:
				return 1792.935f, -3087.551f, -20.4934f;
				break;
			case 47:
				return 1826.7393f, -3083.127f, -39.8522f;
				break;
			case 48:
				return 1865.4401f, -2873.1184f, -11.6081f;
				break;
			case 49:
				return 1853.0006f, -3005.079f, -35.9146f;
				break;
			}
	}
	if (Local_146.f_164 == 6)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_146.f_162 = 1;
			Local_146.f_153 = { func_86(6) };
			Local_146.f_178 = 50;
		}
		switch (iParam0)
		{
			case 0:
				return 2672.4363f, 6650.988f, -22.6184f;
				break;
			case 1:
				return 2652.9883f, 6656.752f, -23.2354f;
				break;
			case 2:
				return 2658.5671f, 6638.355f, -20.0689f;
				break;
			case 3:
				return 2676.149f, 6691.3003f, -6.5556f;
				break;
			case 4:
				return 2672.1191f, 6642.49f, -19.7414f;
				break;
			case 5:
				return 2710.7083f, 6631.0215f, -26.8888f;
				break;
			case 6:
				return 2711.4824f, 6632.9795f, -10.609f;
				break;
			case 7:
				return 2727.654f, 6647.559f, -23.194f;
				break;
			case 8:
				return 2713.0579f, 6675.0903f, -22.1789f;
				break;
			case 9:
				return 2674.4756f, 6693.5415f, -23.6009f;
				break;
			case 10:
				return 2641.6038f, 6688.5957f, -22.4951f;
				break;
			case 11:
				return 2660.5562f, 6669.358f, -31.0305f;
				break;
			case 12:
				return 2638.3625f, 6651.471f, -18.2788f;
				break;
			case 13:
				return 2683.237f, 6605.484f, -18.9837f;
				break;
			case 14:
				return 2717.0051f, 6598.3584f, -15.7131f;
				break;
			case 15:
				return 2737.601f, 6626.9756f, -18.4517f;
				break;
			case 16:
				return 2756.214f, 6614.9956f, -14.3817f;
				break;
			case 17:
				return 2754.5671f, 6656.9023f, -27.2893f;
				break;
			case 18:
				return 2614.5745f, 6660.5386f, -10.9642f;
				break;
			case 19:
				return 2619.6345f, 6622.2974f, -8.2971f;
				break;
			case 20:
				return 2647.5107f, 6581.7354f, -6.9138f;
				break;
			case 21:
				return 2697.8953f, 6584.8003f, -13.0691f;
				break;
			case 22:
				return 2739.21f, 6591.8315f, -13.1861f;
				break;
			case 23:
				return 2788.2087f, 6620.3413f, -20.8984f;
				break;
			case 24:
				return 2781.0984f, 6649.3447f, -10.9847f;
				break;
			case 25:
				return 2769.9355f, 6676.397f, -18.6507f;
				break;
			case 26:
				return 2738.5251f, 6710.3774f, -53.6591f;
				break;
			case 27:
				return 2726.0278f, 6716.9497f, -46.2289f;
				break;
			case 28:
				return 2687.5005f, 6716.587f, -37.4639f;
				break;
			case 29:
				return 2628.6057f, 6704.681f, -8.6546f;
				break;
			case 30:
				return 2579.1726f, 6696.1494f, -8.3973f;
				break;
			case 31:
				return 2594.4395f, 6671.167f, -10.1626f;
				break;
			case 32:
				return 2650.4004f, 6742.4175f, -49.6593f;
				break;
			case 33:
				return 2614.278f, 6747.9937f, -30.2251f;
				break;
			case 34:
				return 2586.1401f, 6737.2134f, -18.2017f;
				break;
			case 35:
				return 2534.0286f, 6675.504f, -17.3698f;
				break;
			case 36:
				return 2730.9282f, 6576f, -9.7398f;
				break;
			case 37:
				return 2763.9316f, 6589.6216f, -13.4522f;
				break;
			case 38:
				return 2753.11f, 6569.837f, -9.4955f;
				break;
			case 39:
				return 2789.7864f, 6671.588f, -26.5903f;
				break;
			case 40:
				return 2744.5547f, 6667.389f, -26.1127f;
				break;
			case 41:
				return 2691.264f, 6665.334f, -27.879f;
				break;
			case 42:
				return 2704.6826f, 6714.3687f, -54.7546f;
				break;
			case 43:
				return 2654.5793f, 6705.445f, -26.775f;
				break;
			case 44:
				return 2625.5205f, 6716.481f, -25.5891f;
				break;
			case 45:
				return 2603.2063f, 6710.211f, -21.4665f;
				break;
			case 46:
				return 2658.263f, 6600.373f, -11.9487f;
				break;
			case 47:
				return 2777.163f, 6631.276f, -20.4348f;
				break;
			case 48:
				return 2652.1406f, 6617.933f, -18.9142f;
				break;
			case 49:
				return 2754.891f, 6681.718f, -26.7887f;
				break;
			}
	}
	if (Local_146.f_164 == 7)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_146.f_162 = 1;
			Local_146.f_153 = { func_86(7) };
			Local_146.f_178 = 50;
		}
		switch (iParam0)
		{
			case 0:
				return -3246.515f, 3669.755f, -30.2516f;
				break;
			case 1:
				return -3282.4548f, 3676.838f, -38.8842f;
				break;
			case 2:
				return -3215.3323f, 3669.156f, -17.34f;
				break;
			case 3:
				return -3228.2278f, 3668.937f, -18.7083f;
				break;
			case 4:
				return -3218.2114f, 3657.0703f, -10.2778f;
				break;
			case 5:
				return -3241.502f, 3673.1274f, -34.6267f;
				break;
			case 6:
				return -3251.7153f, 3690.4949f, -24.8453f;
				break;
			case 7:
				return -3263.1685f, 3652.2498f, -21.1263f;
				break;
			case 8:
				return -3220.8542f, 3637.2988f, -34.6968f;
				break;
			case 9:
				return -3265.7434f, 3630.0962f, -24.6169f;
				break;
			case 10:
				return -3178.346f, 3690.1228f, -7.8235f;
				break;
			case 11:
				return -3228.4023f, 3696.978f, -16.5639f;
				break;
			case 12:
				return -3198.7617f, 3689.1438f, -27.2023f;
				break;
			case 13:
				return -3238.3293f, 3711.1655f, -41.9236f;
				break;
			case 14:
				return -3184.934f, 3718.2632f, -39.717f;
				break;
			case 15:
				return -3214.3865f, 3743.1648f, -48.5735f;
				break;
			case 16:
				return -3328.4321f, 3616.2795f, -52.7051f;
				break;
			case 17:
				return -3265.9753f, 3667.4148f, -28.762f;
				break;
			case 18:
				return -3265.8486f, 3685.5654f, -42.8826f;
				break;
			case 19:
				return -3149.5488f, 3629.4958f, -18.7436f;
				break;
			case 20:
				return -3168.2473f, 3633.0078f, -34.8681f;
				break;
			case 21:
				return -3190.376f, 3632.1267f, -35.0561f;
				break;
			case 22:
				return -3229.846f, 3568.4717f, -24.091f;
				break;
			case 23:
				return -3241.3584f, 3566.743f, -14.1235f;
				break;
			case 24:
				return -3238.9204f, 3596.221f, -30.501f;
				break;
			case 25:
				return -3175.9653f, 3655.284f, -25.3718f;
				break;
			case 26:
				return -3243.3218f, 3623.8816f, -32.8644f;
				break;
			case 27:
				return -3286.5654f, 3637.9048f, -20.75f;
				break;
			case 28:
				return -3287.0408f, 3702.0332f, -22.8537f;
				break;
			case 29:
				return -3296.3403f, 3659.3223f, -13.6941f;
				break;
			case 30:
				return -3293.8728f, 3591.799f, -22.9375f;
				break;
			case 31:
				return -3264.2705f, 3585.8022f, -21.8316f;
				break;
			case 32:
				return -3215.4348f, 3594.9497f, -15.7747f;
				break;
			case 33:
				return -3185.9956f, 3604.0122f, -19.0794f;
				break;
			case 34:
				return -3153.5156f, 3658.7744f, -23.8419f;
				break;
			case 35:
				return -3219.9114f, 3713.4395f, -18.3682f;
				break;
			case 36:
				return -3207.4695f, 3572.783f, -19.8693f;
				break;
			case 37:
				return -3307.7856f, 3599.4214f, -22.347f;
				break;
			case 38:
				return -3205.9634f, 3759.5269f, -25.0518f;
				break;
			case 39:
				return -3178.5632f, 3742.8982f, -11.5727f;
				break;
			case 40:
				return -3159.8792f, 3728.7048f, -25.1143f;
				break;
			case 41:
				return -3154.8752f, 3697.2456f, -22.9222f;
				break;
			case 42:
				return -3139.8276f, 3669.602f, -21.5616f;
				break;
			case 43:
				return -3169.7202f, 3611.7202f, -21.208f;
				break;
			case 44:
				return -3261.815f, 3559.0398f, -13.1608f;
				break;
			case 45:
				return -3277.7822f, 3703.1013f, -19.8983f;
				break;
			case 46:
				return -3309.3582f, 3673.3f, -18.6977f;
				break;
			case 47:
				return -3309.0198f, 3686.7458f, -24.8755f;
				break;
			case 48:
				return -3224.465f, 3608.0884f, -20.2441f;
				break;
			case 49:
				return -3250.9675f, 3757.14f, -29.3826f;
				break;
			}
	}
	if (Local_146.f_164 == 8)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_146.f_162 = 1;
			Local_146.f_153 = { func_86(8) };
			Local_146.f_178 = 50;
		}
		switch (iParam0)
		{
			case 0:
				return -2835.728f, -482.3605f, -30.0288f;
				break;
			case 1:
				return -2839.0781f, -438.0658f, -29.7548f;
				break;
			case 2:
				return -2825.1208f, -412.9836f, -18.7924f;
				break;
			case 3:
				return -2857.555f, -415.7047f, -32.1892f;
				break;
			case 4:
				return -2836.2773f, -469.6712f, -44.3442f;
				break;
			case 5:
				return -2840.4155f, -428.2162f, -33.3264f;
				break;
			case 6:
				return -2853.7854f, -445.6909f, -35.8564f;
				break;
			case 7:
				return -2834.699f, -490.2503f, -61.9216f;
				break;
			case 8:
				return -2835.5803f, -520.8021f, -54.9401f;
				break;
			case 9:
				return -2833.896f, -547.5646f, -53.9204f;
				break;
			case 10:
				return -2832.0117f, -625.4982f, -52.1343f;
				break;
			case 11:
				return -2767.8115f, -585.6926f, -42.2241f;
				break;
			case 12:
				return -2835.8755f, -507.0797f, -40.8141f;
				break;
			case 13:
				return -2842.7405f, -460.0384f, -12.8564f;
				break;
			case 14:
				return -2794.9966f, -452.9641f, -29.8533f;
				break;
			case 15:
				return -2791.6936f, -440.0353f, -8.7679f;
				break;
			case 16:
				return -2795.5725f, -486.5534f, -49.2621f;
				break;
			case 17:
				return -2858.9238f, -503.7948f, -54.9654f;
				break;
			case 18:
				return -2875.5867f, -493.8596f, -41.5212f;
				break;
			case 19:
				return -2878.0208f, -395.8189f, -28.0632f;
				break;
			case 20:
				return -2897.2778f, -427.1053f, -35.0445f;
				break;
			case 21:
				return -2873.7686f, -439.9445f, -34.7849f;
				break;
			case 22:
				return -2772.9868f, -469.3011f, -41.8144f;
				break;
			case 23:
				return -2776.685f, -533.2573f, -48.0774f;
				break;
			case 24:
				return -2769.8662f, -560.6915f, -38.9118f;
				break;
			case 25:
				return -2790.9841f, -633.6831f, -42.1443f;
				break;
			case 26:
				return -2798.7085f, -585.2871f, -46.9006f;
				break;
			case 27:
				return -2835.1199f, -533.6248f, -35.2752f;
				break;
			case 28:
				return -2905.103f, -450.1064f, -34.1608f;
				break;
			case 29:
				return -2748.3013f, -412.1993f, -14.6037f;
				break;
			case 30:
				return -2896.709f, -483.8218f, -43.4204f;
				break;
			case 31:
				return -2874.851f, -461.9164f, -21.9398f;
				break;
			case 32:
				return -2884.325f, -495.3757f, -13.8974f;
				break;
			case 33:
				return -2812.757f, -503.7162f, -15.1477f;
				break;
			case 34:
				return -2802.8823f, -501.8399f, -36.2526f;
				break;
			case 35:
				return -2807.2922f, -536.3256f, -29.5052f;
				break;
			case 36:
				return -2868.4082f, -526.4774f, -27.7767f;
				break;
			case 37:
				return -2832.6116f, -583.6776f, -23.6061f;
				break;
			case 38:
				return -2807.07f, -564.2064f, -31.064f;
				break;
			case 39:
				return -2866.6667f, -568.1177f, -31.1873f;
				break;
			case 40:
				return -2832.2354f, -591.0103f, -23.8917f;
				break;
			case 41:
				return -2808.283f, -642.5566f, -15.098f;
				break;
			case 42:
				return -2807.7163f, -539.4503f, -39.4314f;
				break;
			case 43:
				return -2774.5808f, -502.4204f, -19.1766f;
				break;
			case 44:
				return -2931.3008f, -497.4826f, -10.0121f;
				break;
			case 45:
				return -2900.0676f, -496.1484f, -12.6503f;
				break;
			case 46:
				return -2895.111f, -529.889f, -14.6029f;
				break;
			case 47:
				return -2843.1355f, -379.7443f, -9.5852f;
				break;
			case 48:
				return -2780.6504f, -563.4147f, -19.1329f;
				break;
			case 49:
				return -2828.6555f, -519.7512f, -14.6729f;
				break;
			}
	}
	if (Local_146.f_164 == 9)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_146.f_162 = 1;
			Local_146.f_153 = { func_86(9) };
			Local_146.f_178 = 50;
		}
		switch (iParam0)
		{
			case 0:
				return -3172.6934f, 3034.6174f, -28.2233f;
				break;
			case 1:
				return -3173.2673f, 3024.902f, -34.0257f;
				break;
			case 2:
				return -3172.4429f, 3040.7568f, -38.3969f;
				break;
			case 3:
				return -3177.3442f, 3045.8103f, -39.0048f;
				break;
			case 4:
				return -3185.6328f, 3057.3875f, -39.3901f;
				break;
			case 5:
				return -3186.3213f, 3040.9062f, -37.4284f;
				break;
			case 6:
				return -3187.5962f, 3025.6272f, -38.1375f;
				break;
			case 7:
				return -3195.2217f, 3040.5286f, -30.8778f;
				break;
			case 8:
				return -3182.2112f, 3011.164f, -39.9141f;
				break;
			case 9:
				return -3224.8984f, 3022.0352f, -37.851f;
				break;
			case 10:
				return -3200.9067f, 2993.6294f, -33.5806f;
				break;
			case 11:
				return -3191.4988f, 3065.608f, -38.6213f;
				break;
			case 12:
				return -3206.0396f, 3077.2566f, -41.1165f;
				break;
			case 13:
				return -3173.8933f, 3067.6301f, -34.2896f;
				break;
			case 14:
				return -3145.676f, 3063.0173f, -25.598f;
				break;
			case 15:
				return -3161.01f, 3089.9026f, -30.8359f;
				break;
			case 16:
				return -3148.3643f, 3015.7847f, -31.2774f;
				break;
			case 17:
				return -3144.4924f, 2980.4634f, -32.6345f;
				break;
			case 18:
				return -3127.061f, 3016.437f, -22.3345f;
				break;
			case 19:
				return -3124.433f, 3104.2632f, -12.6705f;
				break;
			case 20:
				return -3097.8447f, 3084.7646f, -12.0425f;
				break;
			case 21:
				return -3144.9717f, 3126.4272f, -10.0939f;
				break;
			case 22:
				return -3219.9224f, 3049.3987f, -44.7865f;
				break;
			case 23:
				return -3242.707f, 3036.2312f, -52.2086f;
				break;
			case 24:
				return -3246.9993f, 2994.8862f, -33.0739f;
				break;
			case 25:
				return -3276.4011f, 3035.7341f, -11.4063f;
				break;
			case 26:
				return -3169.6191f, 2941.907f, -36.9934f;
				break;
			case 27:
				return -3220.6526f, 2931.9487f, -40.711f;
				break;
			case 28:
				return -3269.1782f, 2969.1443f, -35.0162f;
				break;
			case 29:
				return -3228.8743f, 2968.119f, -36.6465f;
				break;
			case 30:
				return -3203.1526f, 3118.6755f, -14.4662f;
				break;
			case 31:
				return -3258.2788f, 3066.622f, -24.7998f;
				break;
			case 32:
				return -3272.6802f, 3019.5703f, -38.4661f;
				break;
			case 33:
				return -3192.4814f, 2956.1265f, -17.2506f;
				break;
			case 34:
				return -3150.4363f, 2963.3936f, -34.3075f;
				break;
			case 35:
				return -3174.3506f, 2978.566f, -26.1099f;
				break;
			case 36:
				return -3097.6042f, 2966.0244f, -29.8447f;
				break;
			case 37:
				return -3057.2805f, 3008.0942f, -13.5868f;
				break;
			case 38:
				return -3082.2812f, 3036.3635f, -10.8164f;
				break;
			case 39:
				return -3135.1724f, 3084.172f, -14.785f;
				break;
			case 40:
				return -3221.4453f, 2986.2803f, -31.0734f;
				break;
			case 41:
				return -3247.3982f, 3017.5686f, -50.7397f;
				break;
			case 42:
				return -3245.661f, 3100.2815f, -26.8515f;
				break;
			case 43:
				return -3268.6873f, 3007.6472f, -41.2257f;
				break;
			case 44:
				return -3257.359f, 2981.7202f, -14.632f;
				break;
			case 45:
				return -3240.511f, 2946.8235f, -21.1369f;
				break;
			case 46:
				return -3277.3054f, 3056.7249f, -40.447f;
				break;
			case 47:
				return -3234.2822f, 3072.6963f, -32.0938f;
				break;
			case 48:
				return -3191.0776f, 3092.2983f, -15.6324f;
				break;
			case 49:
				return -3161.5208f, 3117.5503f, -17.6407f;
				break;
			}
	}
	return -2823.9104f, -596.8481f, -72.6573f;
}

void func_544()//Position - 0x15F4A
{
	int iVar0;
	if (!__LIB_0__::func_157(0))
	{
		if (!iLocal_220)
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()) || PED::IS_CURRENT_HEAD_PROP_A_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
			if (__LIB_3__::func_521(PLAYER::PLAYER_PED_ID(), 3, -1))
			{
				iLocal_249 = 1;
			}
			iLocal_220 = 1;
		}
		iVar0 = __LIB_1__::func_360(2048, -1, 0);
		if (iVar0 < Global_262145.f_15577 /* Tunable: EXEC_SALVAGE_INITIAL_REBREATHERS_GIVEN */)
		{
			__LIB_1__::func_746(2048, (Global_262145.f_15577 /* Tunable: EXEC_SALVAGE_INITIAL_REBREATHERS_GIVEN */ - iVar0), -1);
		}
		PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
		func_545(PLAYER::PLAYER_PED_ID(), 3, -1);
		MISC::SET_BIT(&(Global_2815059.f_4660), 22);
		Global_2787546 = 0;
		Local_259[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4 = 1;
		PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(PLAYER::PLAYER_ID(), 100f);
		iLocal_216 = 1;
		PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_DIES_IN_SINKING_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_545(int iParam0, int iParam1, int iParam2)//Position - 0x1601F
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
			func_644(iParam0);
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_551(iParam0, 7, -1), -1))
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

int func_551(int iParam0, int iParam1, int iParam2)//Position - 0x1693E
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
				if (func_560(iParam0, iParam1, iVar0))
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
				if (func_560(iParam0, iParam1, iVar1))
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

int func_560(int iParam0, int iParam1, int iParam2)//Position - 0x16EB6
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
				if (!func_560(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_560(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_560(iParam0, 14, iVar6))
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
			if (!func_560(iParam0, 14, uVar11[iVar10]))
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
						return func_560(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_560(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_644(int iParam0)//Position - 0x37A6D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_645(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_645(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37B02
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
					func_651(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_651(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_651(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x37F9F
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
			func_755(iVar5, iParam1, iParam2, 1);
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
						func_755(iVar5, 10, 0, 1);
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
									func_755(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_651(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_755(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_551(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_651(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_747(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_755(iVar5, 14, uVar18[iVar1], 1);
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
							func_651(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_755(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_651(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_738(iParam0);
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
						func_651(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_651(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_737(iVar5, iVar24, iVar23, iVar25);
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
							func_651(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_651(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_651(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_651(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_651(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_651(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_651(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_747(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_737(iVar5, func_551(iParam0, 8, -1), iParam2, func_551(iParam0, 4, -1));
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
				func_677(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_737(iVar5, iParam2, iVar44, iVar45);
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
			func_747(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_737(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_651(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_651(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_737(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_737(iVar5, iVar58, iVar57, iParam2);
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
						func_651(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_737(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_651(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_560(iParam0, 9, iVar63))
						{
							func_651(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_651(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_651(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_6__::func_275(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_651(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_551(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_551(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_651(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_651(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_651(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_651(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_651(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_651(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_651(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_651(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_651(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_651(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_738(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_651(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_651(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_652(iParam0, &uVar4))
		{
			func_651(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_651(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_651(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_651(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_551(iParam0, 3, -1), iVar10);
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
				func_651(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_652(int iParam0, var uParam1)//Position - 0x39E4B
{
	int iVar0;
	int iVar1;
	*uParam1 = func_551(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_560(iParam0, iVar1, iVar0))
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

void func_677(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x43A8A
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
	func_678(iParam0, bParam3, 0, -1);
}

void func_678(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x43AD7
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
		bVar3 = func_716(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_707(iParam0, iParam3);
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

int func_707(int iParam0, int iParam1)//Position - 0x52A00
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
				iVar3 = func_551(iParam0, 11, -1);
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
				iVar5 = func_551(iParam0, 11, -1);
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

int func_716(int iParam0, bool bParam1)//Position - 0x52E5E
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
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_551(iParam0, 11, -1), 0);
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
						else if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_551(iParam0, 11, -1);
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
						iVar5 = func_551(iParam0, 8, -1);
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
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_551(iParam0, 11, -1), 0);
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
						iVar8 = func_551(iParam0, 11, -1);
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
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_551(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_551(iParam0, 11, -1), 0);
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
						iVar12 = func_551(iParam0, 8, -1);
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

int func_737(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5CB29
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
					iVar0 = func_737(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_737(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_738(int iParam0)//Position - 0x5DE64
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
		if (!func_743(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_743(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_743(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5E82E
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_551(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_747(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x61216
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_749(iParam0))
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

int func_749(int iParam0)//Position - 0x613A5
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_5__::func_799(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_551(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_5__::func_799(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_551(iParam0, 11, -1);
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

void func_755(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x618A6
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
							func_755(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_755(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_755(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_755(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_755(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_755(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_755(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_755(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_755(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_755(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_771()//Position - 0x6B85C
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("seashark")))
			{
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		if (func_447())
		{
			return 1;
		}
	}
	return 0;
}

int func_779(int iParam0)//Position - 0x6BA49
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (__LIB_0__::func_724(iVar0, Local_146.f_153, 0) < (Global_262145.f_15572 /* Tunable: EXEC_SALVAGE_AREA_RADIUS */ + 20f))
	{
		if (iLocal_244 == 0)
		{
			__LIB_22__::func_272();
			AUDIO::TRIGGER_MUSIC_EVENT("SALVAGE_START_MUSIC");
			iLocal_244 = 1;
		}
		func_391();
		return 1;
	}
	else
	{
		if (__LIB_0__::func_724(iVar0, Local_146.f_153, 0) > (Global_262145.f_15572 /* Tunable: EXEC_SALVAGE_AREA_RADIUS */ + 50f))
		{
			if (iLocal_244 == 1)
			{
				if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
				{
					AUDIO::TRIGGER_MUSIC_EVENT("SALVAGE_STOP_MUSIC");
					iLocal_244 = 0;
				}
			}
		}
		if (__LIB_36__::func_806() == 1)
		{
			func_780();
		}
	}
	return 0;
}

void func_780()//Position - 0x6BAE2
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_131))
	{
		iLocal_131 = HUD::ADD_BLIP_FOR_COORD(Local_146.f_153);
		HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_131, false);
		if (iLocal_214 == 0)
		{
			HUD::SET_BLIP_ROUTE(iLocal_131, true);
		}
		HUD::SET_BLIP_SPRITE(iLocal_131, 456);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_131, "GB_SAL_GO1b" /* GXT: Salvage */);
		HUD::SET_BLIP_FLASHES(iLocal_131, true);
		HUD::SET_BLIP_FLASH_TIMER(iLocal_131, 10000);
		__LIB_1__::func_540(&iLocal_131, 12);
		HUD::SET_BLIP_PRIORITY(iLocal_131, 11);
		HUD::SET_BLIP_SCALE(iLocal_131, Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */);
		Global_2815059.f_261 = { func_87(5) };
		Global_2815059.f_267 = 1;
		if (HUD::DOES_BLIP_EXIST(iLocal_130))
		{
			HUD::SET_BLIP_COORDS(iLocal_130, Local_146.f_153);
		}
	}
}

void func_782()//Position - 0x6BBAE
{
	bLocal_226 = false;
	if (!HUD::DOES_BLIP_EXIST(iLocal_130))
	{
		iLocal_225[Local_146.f_1] = 1;
		iLocal_130 = HUD::ADD_BLIP_FOR_RADIUS(Local_146.f_153, (Global_262145.f_15572 /* Tunable: EXEC_SALVAGE_AREA_RADIUS */ + 20f));
		__LIB_1__::func_540(&iLocal_130, 12);
		HUD::SET_BLIP_ALPHA(iLocal_130, Global_262145.f_12711 /* Tunable: BLIP_AREA_ALPHA */);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
	}
	func_780();
	if (Local_146.f_1 != 0)
	{
		if (Local_146.f_1 != 50)
		{
		}
	}
}

void func_783()//Position - 0x6BC1C
{
	if (__LIB_0__::func_937(&uLocal_143, iLocal_267, 0) && Local_259[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3)
	{
		Global_2787552 = 0;
	}
	Local_259[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = 0;
	Local_259[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_146.f_156 = 0;
	}
}

void func_784()//Position - 0x6BC6C
{
	if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(__LIB_30__::func_459(172, -1, -1, -1, -1, -1)))
	{
		if (func_447())
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET(sLocal_238);
			if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sLocal_238))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_236))
				{
					iLocal_236 = OBJECT::CREATE_OBJECT(joaat("prop_flare_01b"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_236, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 24818), fLocal_260, fLocal_261, fLocal_262, fLocal_263, fLocal_264, fLocal_265, false, false, false, false, 2, true, 0);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_229, "Flare", iLocal_236, "DLC_Exec_Salvage_Sounds", false, 0);
				}
				else if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_236))
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_237))
					{
						GRAPHICS::USE_PARTICLE_FX_ASSET(sLocal_238);
						iLocal_237 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_heist_biolab_flare_underwater", iLocal_236, 0.11f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
					}
				}
				if (iLocal_266 == 1)
				{
					iLocal_266 = 0;
					func_389();
				}
			}
		}
		else
		{
			func_389();
		}
	}
}

void func_785()//Position - 0x6BD71
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
	if (!Global_2703735.f_4.f_10)
	{
		return;
	}
	if (__LIB_10__::func_332())
	{
		return;
	}
	iVar0 = 1;
	iVar2 = 1;
	iVar1 = (func_9() - __LIB_1__::func_724(&(Local_146.f_159), 0, 0));
	iVar1 = __LIB_1__::func_723(iVar1, 0);
	if (iVar1 < 30000)
	{
		iVar0 = 6;
	}
	if (Local_146.f_166[0 /*2*/] != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_1__::func_693(Local_146.f_166[0 /*2*/], 0, 1))
		{
			iVar3 = Local_146.f_166[0 /*2*/];
			iVar7 = Local_146.f_166[0 /*2*/].f_1;
		}
	}
	if (Local_146.f_166[1 /*2*/] != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_1__::func_693(Local_146.f_166[1 /*2*/], 0, 1))
		{
			iVar4 = Local_146.f_166[1 /*2*/];
			iVar8 = Local_146.f_166[1 /*2*/].f_1;
		}
	}
	if (Local_146.f_166[2 /*2*/] != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_1__::func_693(Local_146.f_166[2 /*2*/], 0, 1))
		{
			iVar5 = Local_146.f_166[2 /*2*/];
			iVar9 = Local_146.f_166[2 /*2*/].f_1;
		}
	}
	if (Local_146.f_166[3 /*2*/] != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_1__::func_693(Local_146.f_166[3 /*2*/], 0, 1))
		{
			iVar6 = Local_146.f_166[3 /*2*/];
			iVar10 = Local_146.f_166[3 /*2*/].f_1;
		}
	}
	if (!__LIB_10__::func_332())
	{
		iVar11 = Local_146.f_211[NETWORK::PARTICIPANT_ID_TO_INT()];
	}
	__LIB_34__::func_782(iVar3, iVar4, iVar5, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11, iVar1, &iVar2, iVar0, "GB_CHAL_END" /* GXT: CHALLENGE END */, 1, 0, 0, 0, 0);
	__LIB_2__::func_131(func_791(), "CHECKPOINT" /* GXT: CHECKPOINTS */, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}

int func_791()//Position - 0x6C1F9
{
	return Local_146.f_179;
}

void func_801(int iParam0)//Position - 0x6C865
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2815059.f_5032 = 0;
	}
	else if (iParam0 < 36000 && iParam0 > 31000)
	{
		if (iLocal_244 != 4)
		{
			iLocal_244 = 4;
			AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP");
		}
	}
	else if (iParam0 < 31000 && iParam0 > 6000)
	{
		if (iLocal_244 != 3)
		{
			iLocal_244 = 3;
			AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S");
		}
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2815059.f_5032, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			Global_2815059.f_5032 = 0;
			MISC::SET_BIT(&(Global_2815059.f_5032), 1);
		}
	}
}

void func_802()//Position - 0x6C911
{
	int iVar0;
	if (iLocal_268 == Local_146.f_163)
	{
		return;
	}
	if (Global_1637407.f_1.f_108 != 0)
	{
		Global_1637407.f_1.f_108 = 0;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_7__::func_769())
	{
		Global_1637407.f_534[iVar0 /*42*/].f_1 = Local_146.f_166[iVar0 /*2*/];
		Global_1637407.f_534[iVar0 /*42*/].f_9 = Local_146.f_166[iVar0 /*2*/].f_1;
		Global_1637407.f_534[iVar0 /*42*/].f_31 = -1;
		iVar0++;
	}
	iLocal_268 = Local_146.f_163;
}

void func_805(int iParam0, int iParam1)//Position - 0x6C9E2
{
	Local_259[iParam0 /*6*/] = iParam1;
}

int func_806()//Position - 0x6C9F3
{
	int iVar0;
	__LIB_0__::func_799(joaat("seashark"));
	__LIB_0__::func_799(joaat("hei_prop_carrier_crate_01a"));
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_136[iVar0] = -1;
		iVar0++;
	}
	if (Global_2703735.f_4.f_10)
	{
		__LIB_30__::func_661(86, "GB_BIGM_SAL_T" /* GXT: Salvage */, "GB_SAL_HELP5" /* GXT: Salvage the checkpoints~s~ */, 1, -1, 2, 1, 0);
		__LIB_24__::func_333(1);
	}
	__LIB_0__::func_151("GB_SAL_SETUP" /* GXT: The Salvage Challenge has started. Enter the salvage area ~HUD_COLOUR_YELLOW~~BLIP_FINDERS_KEEPERS~~s~ and compete against your Organization to collect most checkpoints for cash and RP. */, -1);
	__LIB_30__::func_686(-1, 0, 0, -1, 0, 0);
	Global_2787552 = 0;
	Global_2787551 = 0;
	Global_2787549 = 0;
	Global_2787548 = 0;
	__LIB_30__::func_723(172, 1, -1, 0);
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	iLocal_222 = __LIB_1__::func_360(2048, -1, 0);
	return 1;
}

int func_941(int iParam0)//Position - 0x77AAF
{
	return Local_259[iParam0 /*6*/];
}

int func_942(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x77ABE
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (!__LIB_15__::func_415())
	{
		return 0;
	}
	if (iParam1 && !__LIB_2__::func_50())
	{
		return 0;
	}
	if (!__LIB_10__::func_332())
	{
		if (__LIB_12__::func_110())
		{
			if (__LIB_30__::func_417(1))
			{
				__LIB_15__::func_406();
			}
			__LIB_29__::func_175();
			return 0;
		}
		return 0;
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	switch (*uParam0)
	{
		case 0:
			__LIB_27__::func_866();
			__LIB_30__::func_843(&Global_1941652);
			__LIB_34__::func_724(&Global_1941652);
			if (__LIB_10__::func_843(&(Global_1941652.f_1)))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
			}
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 256, 0);
				MISC::SET_BIT(&(Global_2815059.f_5194), 2);
			}
			if (!__LIB_3__::func_505())
			{
				__LIB_5__::func_835();
				MISC::SET_BIT(&(Global_2815059.f_5194), 4);
			}
			if (!__LIB_3__::func_241())
			{
				__LIB_1__::func_92();
				MISC::SET_BIT(&(Global_2815059.f_5194), 3);
			}
			uParam0->f_1 = 0;
			uParam0->f_2 = 0;
			uParam0->f_3 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			iVar0 = __LIB_1__::func_360(11389, -1, 0);
			if (!BitTest(iVar0, 6))
			{
				MISC::SET_BIT(&iVar0, 6);
				__LIB_1__::func_354(11389, iVar0, -1, 1, 0);
			}
			else if (!BitTest(iVar0, 7))
			{
				MISC::SET_BIT(&iVar0, 7);
				__LIB_1__::func_354(11389, iVar0, -1, 1, 0);
			}
			else if (!BitTest(iVar0, 8))
			{
				MISC::SET_BIT(&iVar0, 8);
				MISC::SET_BIT(&(uParam0->f_2), 1);
				__LIB_1__::func_354(11389, iVar0, -1, 1, 0);
			}
			if (__LIB_0__::func_1("GB_SPEC_CON" /* GXT: Press ~INPUT_CONTEXT~ to spectate your Bodyguards. */))
			{
				HUD::CLEAR_HELP(true);
			}
			__LIB_1__::func_966(24);
			Global_1943929.f_4 = 2;
			*uParam0 = 1;
			break;
		case 1:
			if (BitTest(uParam0->f_2, 1) && __LIB_29__::func_856(0))
			{
				__LIB_1__::func_707("GB_SPEC_MENH" /* GXT: You can choose to spectate your Bodyguards in the VIP Abilities Interaction Menu */, -1);
				__LIB_24__::func_333(1);
				MISC::CLEAR_BIT(&(uParam0->f_2), 1);
			}
			if (!__LIB_10__::func_206(&(Global_1941652.f_1)) && __LIB_30__::func_801(5))
			{
				STREAMING::CLEAR_FOCUS();
				__LIB_11__::func_775(&Global_1941652, 4, 0, 8);
			}
			else
			{
				if (!BitTest(Global_2815059.f_5194, 2) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
				{
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 256, 0);
					MISC::SET_BIT(&(Global_2815059.f_5194), 2);
				}
				if (__LIB_7__::func_700(&(Global_1941652.f_1)) && __LIB_10__::func_208())
				{
					if (!__LIB_30__::func_801(5))
					{
						if (__LIB_10__::func_206(&(Global_1941652.f_1)))
						{
							__LIB_30__::func_808(uParam0, 0);
						}
					}
				}
			}
			if (__LIB_30__::func_645(uParam0))
			{
				__LIB_30__::func_808(uParam0, iParam2);
			}
			if (__LIB_7__::func_532(0, 1, 0))
			{
				__LIB_30__::func_457(bParam3);
			}
			break;
		case 2:
			if (!BitTest(uParam0->f_2, 3))
			{
				if ((CAM::IS_SCREEN_FADED_OUT() && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 99)
				{
					MISC::SET_BIT(&(uParam0->f_2), 3);
					__LIB_35__::func_731(&Global_1941652, 0);
					__LIB_0__::clearF_1Prop(&(uParam0->f_4));
					__LIB_0__::func_795(&(uParam0->f_4), 0, 0);
					STREAMING::SET_FOCUS_ENTITY(PLAYER::PLAYER_PED_ID());
				}
				else if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else if (__LIB_0__::func_86(uParam0->f_6) || func_5790(uParam0->f_10, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
			{
				if (__LIB_0__::func_864(&(uParam0->f_4)))
				{
					if (!__LIB_0__::func_937(&(uParam0->f_4), iParam5, 0))
					{
						return 0;
					}
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				__LIB_0__::clearF_1Prop(&(uParam0->f_4));
				uParam0->f_2 = 0;
				*uParam0 = 0;
				bVar2 = !__LIB_29__::func_174();
				bVar1 = __LIB_15__::func_415();
				func_5783();
				__LIB_29__::func_173();
				if (((__LIB_5__::func_185(PLAYER::PLAYER_ID()) != 153 && __LIB_5__::func_185(PLAYER::PLAYER_ID()) != 191) && !__LIB_30__::func_417(0)) && __LIB_6__::func_391(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_1__::func_707("GB_SPEC_NO" /* GXT: Not enough Bodyguards to continue spectating. */, -1);
					__LIB_24__::func_333(1);
				}
				if (bVar1)
				{
					__LIB_15__::func_577();
				}
				__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (bVar2 && iParam4)
				{
					if (uParam0->f_3 != 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), uParam0->f_3, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						uParam0->f_3 = 0;
					}
				}
				uParam0->f_6 = { 0f, 0f, 0f };
				return 1;
			}
			break;
	}
	if (!BitTest(uParam0->f_2, 0))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			NETWORK::FADE_OUT_LOCAL_PLAYER(true);
			MISC::SET_BIT(&(uParam0->f_2), 0);
			uParam0->f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				uParam0->f_9 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID()) && !BitTest(uParam0->f_2, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				return 0;
			}
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		}
		MISC::SET_BIT(&(uParam0->f_2), 2);
	}
	if (*uParam0 != 2)
	{
		func_943(&Global_1941652);
	}
	return 0;
}

void func_943(var uParam0)//Position - 0x77F97
{
	int iVar0;
	var uVar1;
	Global_2715699.f_2846.f_180 = uParam0->f_1.f_34;
	if ((__LIB_10__::func_388() == 3 || __LIB_10__::func_387() == 3) || (__LIB_1__::func_11() && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0)))
	{
		return;
	}
	if (__LIB_7__::func_721(Global_4718592.f_116524))
	{
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(__LIB_1__::func_4());
			}
		}
	}
	if (__LIB_10__::func_388() == 1)
	{
		if (__LIB_4__::func_860() && __LIB_0__::func_983())
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_10__::func_386() == 1 || __LIB_10__::func_386() == 2)
				{
					CAM::DO_SCREEN_FADE_IN(250);
					__LIB_10__::func_385(0);
				}
			}
			return;
		}
	}
	if (!BitTest(uParam0->f_1, 13))
	{
		if (__LIB_2__::func_177())
		{
			if (__LIB_10__::func_197(&(uParam0->f_1)) != 0)
			{
				func_5772(uParam0, 1);
				MISC::SET_BIT(&(uParam0->f_1), 13);
			}
		}
	}
	if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
		{
			if (__LIB_11__::func_680(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_2__::func_346(PLAYER::PLAYER_ID(), 0);
			}
			if (!BitTest(Global_2621446, 9))
			{
				__LIB_5__::func_837();
			}
			__LIB_10__::func_384(&(uParam0->f_47));
		}
	}
	if (__LIB_10__::func_206(&(uParam0->f_1)))
	{
		__LIB_34__::func_758(uParam0);
		if (((__LIB_10__::func_383() && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			__LIB_10__::func_944(&(uParam0->f_1), 0);
		}
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 11)
		{
			__LIB_10__::func_447(&(uParam0->f_1));
		}
		else if (BitTest(uParam0->f_1, 2))
		{
			__LIB_10__::func_380(&(uParam0->f_1));
		}
	}
	else
	{
		__LIB_11__::func_841(&(uParam0->f_1), 0);
		if (BitTest(uParam0->f_1, 2))
		{
			__LIB_10__::func_380(&(uParam0->f_1));
		}
	}
	if ((__LIB_10__::func_197(&(uParam0->f_1)) == 0 || __LIB_10__::func_197(&(uParam0->f_1)) == 1) || __LIB_10__::func_197(&(uParam0->f_1)) == 6)
	{
		if (BitTest(uParam0->f_1, 5))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1), 5);
			MISC::CLEAR_BIT(&Global_2621446, 4);
		}
	}
	else
	{
		if (uParam0->f_1.f_35 == 3)
		{
			CAM::SET_CINEMATIC_NEWS_CHANNEL_ACTIVE_THIS_UPDATE();
		}
		if (__LIB_10__::func_197(&(uParam0->f_1)) == 3)
		{
			if (!BitTest(uParam0->f_1, 5))
			{
				MISC::SET_BIT(&(uParam0->f_1), 5);
				MISC::SET_BIT(&Global_2621446, 4);
			}
		}
	}
	if (((__LIB_10__::func_197(&(uParam0->f_1)) == 0 || __LIB_10__::func_197(&(uParam0->f_1)) == 4) || __LIB_10__::func_197(&(uParam0->f_1)) == 5) || __LIB_10__::func_197(&(uParam0->f_1)) == 6)
	{
		if (!BitTest(uParam0->f_1, 6))
		{
			MISC::SET_BIT(&(uParam0->f_1), 6);
		}
	}
	else
	{
		if (BitTest(uParam0->f_1, 6))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1), 6);
		}
		func_1601(uParam0);
		__LIB_1__::func_405();
	}
	if (BitTest(uParam0->f_1, 14))
	{
		if (!Global_1931426)
		{
			__LIB_10__::func_370(&(uParam0->f_47));
		}
		MISC::CLEAR_BIT(&(uParam0->f_1), 14);
	}
	switch (__LIB_10__::func_197(&(uParam0->f_1)))
	{
		case 0:
			__LIB_10__::func_861(uParam0);
			break;
		case 1:
			__LIB_34__::func_693(uParam0);
			break;
		case 2:
			func_1591(uParam0);
			break;
		case 3:
			func_1556(uParam0);
			break;
		case 4:
			func_1521(uParam0);
			break;
		case 5:
			func_1399(uParam0);
			break;
		case 6:
			func_1328(uParam0);
			break;
	}
	if (__LIB_10__::func_333())
	{
		__LIB_34__::func_724(uParam0);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_10__::func_329();
		if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0) || (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_7__::func_700(&(uParam0->f_1))))
		{
			if (!__LIB_10__::func_328(__LIB_1__::func_4()) || !__LIB_11__::func_782(&(uParam0->f_47), &iVar0, &uVar1, __LIB_1__::func_4()))
			{
				__LIB_34__::func_756(uParam0, 0, 1);
				if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
				{
					if (!__LIB_30__::func_844(uParam0, &iVar0, &uVar1, 0, 0, 0))
					{
						if (__LIB_10__::func_325())
						{
							__LIB_10__::func_324();
							if (!__LIB_0__::func_864(&(uParam0->f_2245)))
							{
								__LIB_0__::func_795(&(uParam0->f_2245), 0, 0);
							}
							else if (__LIB_0__::func_937(&(uParam0->f_2245), 10000, 0))
							{
								__LIB_15__::func_183();
							}
						}
						else if (__LIB_13__::func_569() && !__LIB_1__::func_623())
						{
							if (__LIB_10__::func_300())
							{
								if (!__LIB_0__::func_864(&(uParam0->f_2253)))
								{
									__LIB_0__::func_795(&(uParam0->f_2253), 0, 0);
								}
								else if (__LIB_0__::func_937(&(uParam0->f_2253), 5000, 0))
								{
									__LIB_11__::func_780(0);
									Global_2621446.f_81 = 3;
								}
							}
							else
							{
								__LIB_11__::func_780(0);
								Global_2621446.f_81 = 3;
							}
						}
					}
				}
			}
		}
	}
	__LIB_10__::func_931();
	__LIB_30__::func_824(uParam0);
	__LIB_34__::func_755(uParam0);
}

void func_1328(var uParam0)//Position - 0x84A3A
{
	func_1370(uParam0);
	if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		if (uParam0->f_1.f_35 == 3)
		{
		}
		else if (__LIB_1__::func_826(PLAYER::PLAYER_ID()))
		{
		}
		else if (__LIB_1__::func_448(PLAYER::PLAYER_ID()) == 3 || Global_1574962)
		{
			NETWORK::NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
	{
		if (!PED::IS_PED_INJURED(__LIB_1__::func_4()))
		{
			PED::SET_PED_LOD_MULTIPLIER(__LIB_1__::func_4(), 1f);
		}
	}
	if (!__LIB_2__::func_177() && !BitTest(Global_2621446, 13))
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
	}
	if (!BitTest(uParam0->f_1.f_2, 3) && (!__LIB_1__::func_11() || __LIB_2__::func_40(PLAYER::PLAYER_ID(), 0)))
	{
		if (!BitTest(uParam0->f_1.f_2, 0) || !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_10__::func_889())
			{
				if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0) || Global_2621446.f_69 == Global_2621446.f_69.f_1)
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
			}
		}
	}
	__LIB_15__::func_194(uParam0);
	__LIB_11__::func_920(&(uParam0->f_47));
	__LIB_15__::func_649(uParam0);
	__LIB_10__::func_338(&(uParam0->f_1));
	__LIB_10__::func_205();
	uParam0->f_1.f_4 = 0;
	HUD::UNLOCK_MINIMAP_POSITION();
	MISC::CLEAR_BIT(&(uParam0->f_47), 0);
	uParam0->f_1.f_26 = 0;
	uParam0->f_1.f_33 = 0;
	__LIB_10__::func_327(&(uParam0->f_1), 0);
	uParam0->f_1.f_27 = 0;
	uParam0->f_1.f_25 = 0;
	HUD::SET_MINIMAP_BLOCK_WAYPOINT(false);
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 0);
	MISC::CLEAR_BIT(&(uParam0->f_1), 10);
	if (!BitTest(uParam0->f_1.f_2, 2))
	{
		if (!__LIB_10__::func_337())
		{
			NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		}
		__LIB_5__::func_942(0, 0, 1);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	__LIB_10__::func_887(&(uParam0->f_1));
	__LIB_10__::func_886();
	__LIB_10__::func_336();
	if (__LIB_10__::func_337())
	{
		__LIB_2__::func_263(1);
	}
	else
	{
		NETWORK::NETWORK_SET_NO_SPECTATOR_CHAT(false);
	}
	__LIB_10__::func_335(&(uParam0->f_1.f_7), 0);
	NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
	MISC::CLEAR_BIT(&Global_2621446, 5);
	MISC::CLEAR_BIT(&Global_2621446, 10);
	MISC::CLEAR_BIT(&Global_2621446, 4);
	MISC::CLEAR_BIT(&Global_2621446, 6);
	MISC::CLEAR_BIT(&Global_2621446, 14);
	MISC::CLEAR_BIT(&(uParam0->f_1), 12);
	MISC::CLEAR_BIT(&(uParam0->f_1), 14);
	MISC::CLEAR_BIT(&(uParam0->f_1), 9);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 2)
	{
		__LIB_7__::func_695(&(uParam0->f_1), 0);
	}
	if (!BitTest(Global_2621446, 9))
	{
		__LIB_5__::func_837();
	}
	__LIB_10__::func_384(&(uParam0->f_47));
	if (BitTest(uParam0->f_1, 2))
	{
		__LIB_10__::func_380(&(uParam0->f_1));
	}
	if (!__LIB_10__::func_334(Global_4718592.f_168757))
	{
		Global_1836146 = 0;
	}
	if (!Global_1836610 && !__LIB_10__::func_227())
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	uParam0->f_1.f_1 = 0;
	uParam0->f_1.f_2 = 0;
	Global_2715699.f_2846.f_180 = 0;
	__LIB_13__::func_574();
	uParam0->f_47.f_2197 = 0;
	STREAMING::CLEAR_FOCUS();
	__LIB_7__::func_694(&(uParam0->f_1), 0);
}

void func_1370(var uParam0)//Position - 0x8575F
{
	if (uParam0->f_2262 != -1)
	{
		if (__LIB_5__::func_374(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_1371(uParam0->f_2262, 0);
		}
		uParam0->f_2262 = -1;
	}
}

void func_1371(int iParam0, bool bParam1)//Position - 0x85790
{
	if (bParam1)
	{
		if (!__LIB_3__::func_479(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
		{
			__LIB_7__::func_698(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
			if (__LIB_12__::func_48(iParam0))
			{
				__LIB_10__::func_976(iParam0, 1);
			}
		}
	}
	else if (__LIB_3__::func_479(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
	{
		__LIB_7__::func_696(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
	}
	if (iParam0 == 10)
	{
		func_1371(11, bParam1);
		func_1371(12, bParam1);
		func_1371(13, bParam1);
	}
	if (iParam0 == 36)
	{
		func_1371(37, bParam1);
		func_1371(38, bParam1);
		func_1371(39, bParam1);
		func_1371(40, bParam1);
		func_1371(41, bParam1);
	}
}

void func_1399(var uParam0)//Position - 0x8EA0A
{
	if (func_1400(uParam0))
	{
		__LIB_7__::func_694(&(uParam0->f_1), 6);
	}
}

int func_1400(var uParam0)//Position - 0x8EA24
{
	if (!BitTest(uParam0->f_1, 11))
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			MISC::SET_BIT(&(uParam0->f_1), 11);
		}
		else if (!__LIB_10__::func_889())
		{
			CAM::DO_SCREEN_FADE_IN(250);
			MISC::SET_BIT(&(uParam0->f_1), 11);
		}
	}
	if (func_1401(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 11);
		return 1;
	}
	return 0;
}

int func_1401(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14)//Position - 0x8EA92
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	Global_2727793 = MISC::GET_GAME_TIMER();
	if (((((!__LIB_2__::func_179() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !DLC::GET_IS_LOADING_SCREEN_ACTIVE()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_2727896) && !__LIB_0__::func_628() == 63)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
		return 0;
	}
	if (!STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
	{
		func_1436();
		__LIB_5__::func_728(1, 0);
		MISC::PREVENT_ARREST_STATE_THIS_FRAME();
		if (bParam10)
		{
			__LIB_1__::func_211(0);
			__LIB_2__::func_408(0);
		}
		return 0;
	}
	if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__::func_81())
		{
			if (__LIB_0__::func_628() == 58)
			{
				__LIB_2__::func_178(1);
			}
			if (__LIB_2__::func_177())
			{
				if (BitTest(Global_2621446, 3))
				{
					MISC::CLEAR_BIT(&Global_2621446, 3);
				}
			}
			return 0;
		}
	}
	if (__LIB_0__::func_623() == 4)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0)
		{
			__LIB_0__::func_986(0);
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_5__::func_728(1, 0);
		if (bParam10)
		{
			__LIB_1__::func_211(0);
			__LIB_2__::func_408(0);
		}
		return 0;
	}
	__LIB_1__::func_684();
	__LIB_7__::func_718();
	if (iParam9 == 0)
	{
	}
	if (!bParam11)
	{
		if (!__LIB_2__::func_176())
		{
			__LIB_2__::func_175();
		}
	}
	if (!__LIB_1__::func_584())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() == 1)
		{
			if (bParam1)
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
		}
		if (Global_1585311)
		{
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
		}
		if (HUD::IS_ONLINE_POLICIES_MENU_ACTIVE() == 0)
		{
			if (HUD::GET_PAUSE_MENU_STATE() == 25)
			{
				HUD::CLOSE_SOCIAL_CLUB_MENU();
			}
		}
		if ((__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_3() == 0) && !__LIB_0__::func_490(CAM::GET_FINAL_RENDERED_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), false, false, false, false);
			bParam4 = true;
		}
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (iVar0 != 0)
		{
			bParam4 = true;
			if (__LIB_1__::func_625())
			{
				bParam2 = false;
			}
		}
		if (Global_2725323)
		{
			if ((Global_2715699.f_6597 || __LIB_5__::func_253(-1046478848)) || __LIB_1__::func_35())
			{
				if (__LIB_11__::func_810(0))
				{
					bParam12 = true;
					if (__LIB_2__::func_174() > 800 || (__LIB_22__::func_433() && !__LIB_1__::func_683()))
					{
						if (__LIB_0__::func_893() && !__LIB_0__::func_983())
						{
							if (!CAM::IS_SCREEN_FADED_OUT())
							{
								if (!CAM::IS_SCREEN_FADING_OUT())
								{
									CAM::DO_SCREEN_FADE_OUT(800);
								}
							}
						}
					}
					__LIB_0__::func_982();
				}
			}
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19))
		{
			bParam4 = true;
			__LIB_2__::func_408(1);
			bParam2 = false;
		}
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
		{
			bParam4 = true;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			bParam4 = true;
		}
		if (bParam2 && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_2__::func_448(1, 0, 1);
		}
		if (((__LIB_0__::func_893() && ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || bParam1 == 0) || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE()))) && STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()) && __LIB_7__::func_717())
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::IS_SRL_LOADED())
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
					STREAMING::END_SRL();
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			HUD::CLEAR_PRINTS();
			iVar2 = 0;
			if (bParam4)
			{
				iVar2 = 1;
			}
			Var3 = { fParam5, fParam6, fParam7 };
			if (iParam3 == 3)
			{
				if (__LIB_0__::func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			else if (iParam3 == 2)
			{
				if (__LIB_0__::func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 2 || STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			GRAPHICS::DONT_RENDER_IN_GAME_UI(true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			if (bParam12)
			{
				GRAPHICS::ANIMPOSTFX_STOP_ALL();
			}
			__LIB_2__::func_173();
			__LIB_1__::func_618();
			if (__LIB_1__::func_81())
			{
				if (__LIB_2__::func_172())
				{
					iVar2 = 1;
					iVar2 += 32;
					iVar2 += 16384;
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(Global_1577841, iVar2, __LIB_0__::func_109());
				}
				else
				{
					return 0;
				}
			}
			else if (bParam0)
			{
				if (iParam13 || __LIB_1__::func_625())
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 | 16384 || iParam14), iParam3);
				}
				else
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 || iParam14), iParam3);
				}
			}
			else if (iParam13 || __LIB_1__::func_625())
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 16384 || iParam14), iParam3);
			}
			else
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 || iParam14), iParam3);
			}
			StringCopy(&Global_2725371, "", 32);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					StringCopy(&Global_2725371, AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			__LIB_0__::func_986(1);
			HUD::SET_BIGMAP_ACTIVE(false, false);
			if (bParam2 && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_2__::func_448(1, 0, 1);
			}
		}
		if (__LIB_0__::func_623() == 1)
		{
			if (__LIB_1__::func_81())
			{
				if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					if (Global_2725330)
					{
						Global_2725330 = 0;
					}
					if (Global_2815059.f_6776 != -1)
					{
						__LIB_1__::func_622();
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1577841))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577841, false, true);
						PED::DELETE_PED(&Global_1577841);
					}
					__LIB_2__::func_448(0, 0, 1);
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (__LIB_0__::func_625())
						{
							GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
						}
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_0__::func_986(2);
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_2__::func_409();
						__LIB_2__::func_448(0, 0, 1);
						if (((__LIB_1__::func_649() && LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() == 0) && NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA() == 0) && NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() == 0)
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(0);
							}
						}
					}
				}
				else if (bParam2)
				{
					if (bParam8)
					{
						__LIB_2__::func_409();
					}
					__LIB_2__::func_448(0, 0, 1);
				}
			}
			if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
			{
				if (bParam8 == 0 || __LIB_2__::func_409())
				{
					if (bParam2)
					{
						if (bParam8)
						{
							__LIB_2__::func_409();
						}
						__LIB_2__::func_448(0, 0, 1);
					}
					__LIB_0__::func_986(2);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_1436()//Position - 0x8FAA3
{
	int iVar0;
	struct<62> Var1;
	int iVar2;
	if (PLAYER::PLAYER_ID() != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_1__::func_832(PLAYER::PLAYER_ID()))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_579 = 0;
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
			PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
			WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(PLAYER::PLAYER_PED_ID(), joaat("DEFAULT"));
			iVar0 = 2600;
			PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(PLAYER::PLAYER_PED_ID(), false);
			GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
			PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			iVar2 = -1;
			Var1[0] = __LIB_0__::func_253(387, iVar2);
			Var1[1] = __LIB_0__::func_253(388, iVar2);
			Var1[2] = __LIB_0__::func_253(389, iVar2);
			Var1[3] = __LIB_0__::func_253(390, iVar2);
			Var1[4] = __LIB_0__::func_253(391, iVar2);
			Var1[5] = __LIB_0__::func_253(392, iVar2);
			Var1[6] = __LIB_0__::func_253(393, iVar2);
			Var1[7] = __LIB_0__::func_253(394, iVar2);
			Var1[8] = __LIB_0__::func_253(395, iVar2);
			Var1[9] = __LIB_0__::func_253(396, iVar2);
			Var1[10] = __LIB_0__::func_253(397, iVar2);
			Var1[11] = __LIB_0__::func_253(398, iVar2);
			Var1.f_13[0] = __LIB_0__::func_253(399, iVar2);
			Var1.f_13[1] = (__LIB_0__::func_253(400, iVar2) + __LIB_0__::func_253(18092, iVar2));
			Var1.f_13[2] = __LIB_0__::func_253(401, iVar2);
			Var1.f_13[3] = (__LIB_0__::func_253(402, iVar2) + __LIB_0__::func_253(18093, iVar2));
			Var1.f_13[4] = __LIB_0__::func_253(403, iVar2);
			Var1.f_13[5] = __LIB_0__::func_253(404, iVar2);
			Var1.f_13[6] = __LIB_0__::func_253(405, iVar2);
			Var1.f_13[7] = __LIB_0__::func_253(406, iVar2);
			Var1.f_13[8] = (__LIB_0__::func_253(407, iVar2) + __LIB_0__::func_253(18094, iVar2));
			Var1.f_13[9] = __LIB_0__::func_253(408, iVar2);
			Var1.f_13[10] = __LIB_0__::func_253(409, iVar2);
			Var1.f_13[11] = (__LIB_0__::func_253(410, iVar2) + __LIB_0__::func_253(18095, iVar2));
			Var1.f_26[0] = __LIB_0__::func_253(411, iVar2);
			Var1.f_26[1] = __LIB_0__::func_253(412, iVar2);
			Var1.f_26[2] = __LIB_0__::func_253(413, iVar2);
			Var1.f_26[3] = __LIB_0__::func_253(414, iVar2);
			Var1.f_26[4] = __LIB_0__::func_253(415, iVar2);
			Var1.f_26[5] = __LIB_0__::func_253(416, iVar2);
			Var1.f_26[6] = __LIB_0__::func_253(417, iVar2);
			Var1.f_26[7] = __LIB_0__::func_253(418, iVar2);
			Var1.f_26[8] = __LIB_0__::func_253(419, iVar2);
			Var1.f_26[9] = __LIB_0__::func_253(420, iVar2);
			Var1.f_26[10] = __LIB_0__::func_253(421, iVar2);
			Var1.f_26[11] = __LIB_0__::func_253(422, iVar2);
			Var1.f_39[0] = __LIB_0__::func_253(423, iVar2);
			Var1.f_39[1] = __LIB_0__::func_253(424, iVar2);
			Var1.f_39[2] = __LIB_0__::func_253(425, iVar2);
			Var1.f_39[3] = __LIB_0__::func_253(426, iVar2);
			Var1.f_39[4] = __LIB_0__::func_253(427, iVar2);
			Var1.f_39[5] = __LIB_0__::func_253(428, iVar2);
			Var1.f_39[6] = __LIB_0__::func_253(429, iVar2);
			Var1.f_39[7] = __LIB_0__::func_253(430, iVar2);
			Var1.f_39[8] = __LIB_0__::func_253(431, iVar2);
			Var1.f_49[0] = __LIB_0__::func_253(432, iVar2);
			Var1.f_49[1] = __LIB_0__::func_253(433, iVar2);
			Var1.f_49[2] = __LIB_0__::func_253(434, iVar2);
			Var1.f_49[3] = __LIB_0__::func_253(435, iVar2);
			Var1.f_49[4] = __LIB_0__::func_253(436, iVar2);
			Var1.f_49[5] = __LIB_0__::func_253(437, iVar2);
			Var1.f_49[6] = __LIB_0__::func_253(438, iVar2);
			Var1.f_49[7] = __LIB_0__::func_253(439, iVar2);
			Var1.f_49[8] = __LIB_0__::func_253(440, iVar2);
			if (__LIB_1__::func_342(161, -1))
			{
				Var1.f_59 = __LIB_1__::func_360(2053, iVar2, 0);
			}
			else
			{
				Var1.f_59 = __LIB_1__::func_360(753, iVar2, 0);
			}
			Var1.f_60 = __LIB_1__::func_360(754, iVar2, 0);
			Var1.f_61 = __LIB_1__::func_360(755, iVar2, 0);
			func_1437(PLAYER::PLAYER_PED_ID(), &Var1, 0, 0, 1, 1);
		}
	}
}

void func_1437(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x8FF7D
{
	int iVar0;
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
		iVar0 = __LIB_0__::func_216(iParam0);
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
		if (__LIB_0__::func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_1512(iParam0, iVar1, &iVar2, 0))
			{
				func_1497(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_1438(iParam0, iVar1, &iVar2))
			{
				func_1497(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_749(iParam0);
			__LIB_1__::func_354(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_354(755, uParam1->f_61, Global_78127, 1, 0);
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
			func_651(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_651(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_651(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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
			__LIB_1__::func_354(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_354(2053, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_348(161, 1, -1, 1);
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

int func_1438(int iParam0, int iParam1, int iParam2)//Position - 0x9041B
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_1439(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_1439(int iParam0, int iParam1, int iParam2)//Position - 0x904A7
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
	Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar0, iParam1, iParam2, -1) };
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
				if (!func_1439(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_1439(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_1439(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, iVar2, iVar1, -1) };
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
			if (!func_1439(iParam0, 14, uVar8[iVar7]))
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

int func_1497(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xA369A
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
		Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_3__::func_367(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_3__::func_367(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_16__::func_225(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_1497(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_3__::func_367(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_16__::func_225(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_1497(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, func_1501(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_1512(iParam0, iVar10, &iVar4, 1))
							{
								func_1497(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_1497(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_12__::func_14(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_1497(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_1497(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_1497(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_1497(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_1497(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_3__::func_367(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_16__::func_225(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_1497(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_3__::func_367(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_16__::func_225(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_1497(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_16__::func_225(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_1497(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_13__::func_589(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_1512(iParam0, iVar10, &iVar4, 0))
		{
			func_1497(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_1438(iParam0, iVar10, &iVar4))
		{
			func_1497(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1501(int iParam0, int iParam1, int iParam2)//Position - 0xA403C
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
				if (func_1439(iParam0, iParam1, iVar0))
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
				if (func_1439(iParam0, iParam1, iVar1))
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

int func_1512(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA5CF9
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_1439(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_1521(var uParam0)//Position - 0xA5E4C
{
	if (__LIB_1__::func_711() != PLAYER::PLAYER_PED_ID())
	{
		__LIB_10__::func_909(uParam0, PLAYER::PLAYER_PED_ID());
		__LIB_10__::func_327(&(uParam0->f_1), 1);
	}
	if (func_1522(uParam0, 0, 1))
	{
		__LIB_7__::func_694(&(uParam0->f_1), 6);
	}
}

int func_1522(var uParam0, bool bParam1, bool bParam2)//Position - 0xA5E86
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	if (__LIB_10__::func_224(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (((__LIB_1__::func_711() != -1 && ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_711())) && (!bParam1 || __LIB_30__::func_720(uParam0, __LIB_1__::func_711(), 1))) && !__LIB_10__::func_224(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())))
	{
		iVar1 = __LIB_1__::func_711();
	}
	else if (__LIB_24__::func_275(uParam0, 0))
	{
		__LIB_34__::func_724(uParam0);
		if (__LIB_30__::func_844(uParam0, &iVar6, &iVar7, 0, 1, 1))
		{
			__LIB_10__::func_909(uParam0, __LIB_10__::func_925(&(uParam0->f_47), iVar6, iVar7));
			__LIB_30__::func_271(uParam0, iVar6, iVar7);
			__LIB_9__::func_819(&(uParam0->f_1), 0);
		}
		else if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
		{
			if (__LIB_13__::func_569())
			{
				__LIB_11__::func_780(0);
				Global_2621446.f_81 = 3;
			}
		}
		else if (__LIB_0__::func_80())
		{
			if (Global_1574667)
			{
				if (__LIB_10__::func_860())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					MISC::SET_BIT(&(Global_2621446.f_1), 0);
					NETWORK::NETWORK_BAIL(15, 0, 0);
					Global_2621446.f_81 = 3;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (uParam0->f_1.f_34)
		{
			switch (__LIB_1__::func_286(&(uParam0->f_1)))
			{
				case 0:
					uParam0->f_1.f_6 = 0;
					if (uParam0->f_1.f_35 == 3)
					{
						uParam0->f_1.f_5 = 10000;
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (PED::IS_PED_INJURED(iVar1))
						{
						}
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()) && __LIB_1__::func_4() != iVar1)
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(__LIB_1__::func_4(), false) };
						}
						else
						{
							Var4 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						}
						fVar3 = SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(iVar1, false));
						if ((__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && __LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_2__::func_51()), 0))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if (((uParam0->f_1.f_4 && !__LIB_10__::func_354(&(uParam0->f_1))) && fVar3 < 2500f) && !__LIB_7__::func_721(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if ((fVar3 < 2500f && __LIB_10__::func_227()) && __LIB_7__::func_709(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if ((fVar3 < 2500f && __LIB_10__::func_227()) && (__LIB_8__::func_875(Global_4718592.f_168757) || Global_2815059.f_6749))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if (fVar3 < 90000f)
						{
							uParam0->f_1.f_5 = 3000;
						}
						else if (__LIB_8__::func_875(Global_4718592.f_168757) || Global_2815059.f_6749)
						{
							uParam0->f_1.f_5 = 100;
						}
						else
						{
							uParam0->f_1.f_5 = 8000;
						}
					}
					else
					{
						uParam0->f_1.f_5 = 8000;
						if (__LIB_8__::func_875(Global_4718592.f_168757) || Global_2815059.f_6749)
						{
							uParam0->f_1.f_5 = 100;
						}
					}
					__LIB_9__::func_819(&(uParam0->f_1), 1);
					break;
				case 1:
					if (__LIB_10__::func_221(Global_4718592.f_168757))
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
						HUD::THEFEED_FLUSH_QUEUE();
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if ((!CAM::IS_SCREEN_FADED_OUT() && Global_2715699.f_2846.f_85 == 0) && uParam0->f_1.f_5 > 0)
					{
						if (!CAM::IS_SCREEN_FADING_OUT())
						{
							__LIB_11__::func_783(uParam0);
							if ((!__LIB_10__::func_889() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_10__::func_325())
							{
								if (GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() == 1)
								{
									CAM::DO_SCREEN_FADE_OUT(250);
								}
								else
								{
									__LIB_11__::func_783(uParam0);
									__LIB_9__::func_819(&(uParam0->f_1), 2);
								}
							}
							else
							{
								__LIB_11__::func_783(uParam0);
								__LIB_9__::func_819(&(uParam0->f_1), 2);
							}
						}
					}
					else
					{
						__LIB_9__::func_819(&(uParam0->f_1), 2);
					}
					break;
				case 2:
					__LIB_11__::func_930();
					__LIB_15__::func_649(uParam0);
					__LIB_1__::func_292();
					if (!Global_1931426)
					{
						__LIB_13__::func_574();
					}
					if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0) || !__LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_2__::func_51()), 0))
					{
						if (!__LIB_10__::func_224(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_2__::func_51())))
						{
							__LIB_35__::func_723(1, 1);
						}
					}
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (PED::IS_PED_INJURED(iVar1) || !PED::IS_PED_INJURED(iVar1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
							{
								if (!PED::IS_PED_INJURED(__LIB_1__::func_4()))
								{
									PED::SET_PED_LOD_MULTIPLIER(__LIB_1__::func_4(), 1f);
								}
							}
							if (!__LIB_10__::func_325())
							{
								__LIB_5__::func_942(1, iVar1, 1);
							}
						}
						if (iVar1 == PLAYER::PLAYER_PED_ID())
						{
							__LIB_10__::func_335(&(uParam0->f_1.f_7), 0);
						}
						else
						{
							__LIB_10__::func_352(&(uParam0->f_1.f_7), 0);
						}
						if (Global_2715699.f_2846.f_26)
						{
							if (CAM::DOES_CAM_EXIST(Global_2715699.f_2846.f_20))
							{
								if (iVar1 == PLAYER::PLAYER_PED_ID())
								{
									MISC::CLEAR_BIT(&Global_2621446, 10);
									if (!BitTest(Global_2621446, 18))
									{
										HUD::DISPLAY_RADAR(false);
									}
								}
								else
								{
									MISC::SET_BIT(&Global_2621446, 10);
									if (!BitTest(Global_2621446, 18) && __LIB_5__::func_839(&(uParam0->f_1)) != 3)
									{
										HUD::DISPLAY_RADAR(true);
									}
								}
							}
						}
						if ((uParam0->f_1.f_5 > 0 || uParam0->f_1.f_6) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							if (uParam0->f_1.f_44 < 5 && !STREAMING::IS_ENTITY_FOCUS(PLAYER::PLAYER_PED_ID()))
							{
								uParam0->f_1.f_44++;
								return 0;
							}
							uParam0->f_1.f_44 = 0;
							func_1601(uParam0);
							if (__LIB_10__::func_354(&(uParam0->f_1)))
							{
								uParam0->f_1.f_30 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
							}
							else
							{
								uParam0->f_1.f_30 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
								if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != __LIB_0__::getMinusOneOrNull())
								{
								}
							}
							if (Global_2621443 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
							{
								Var5 = { uParam0->f_1.f_30 };
								Var5.f_2 = (Var5.f_2 + 25f);
								if ((((__LIB_5__::func_839(&(uParam0->f_1)) != 5 && __LIB_5__::func_839(&(uParam0->f_1)) != 3) && __LIB_5__::func_839(&(uParam0->f_1)) != 4) && !BitTest(Global_2621446, 16)) && MISC::ABSF(Var5.f_2) < 2600f)
								{
									if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
									{
										if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
										{
											ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
											PED::SET_PED_HEATSCALE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0f);
											return 0;
										}
									}
									if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
									{
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var5, false, true, false, false);
										ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
									}
								}
							}
							if (__LIB_10__::func_354(&(uParam0->f_1)))
							{
								if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								{
									STREAMING::SET_FOCUS_POS_AND_VEL(uParam0->f_1.f_30, 0f, 0f, 0f);
								}
							}
							else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
							{
								STREAMING::SET_FOCUS_ENTITY(iVar1);
							}
							if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
							{
								if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								{
									STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_1.f_30, 50f, 0);
								}
							}
							MISC::SET_BIT(&(uParam0->f_1), 10);
						}
						else
						{
							uParam0->f_1.f_30 = { 0f, 0f, 0f };
							MISC::CLEAR_BIT(&(uParam0->f_1), 10);
						}
					}
					__LIB_11__::func_839(uParam0);
					MISC::SET_BIT(&(uParam0->f_47), 6);
					uParam0->f_1.f_24 = NETWORK::GET_NETWORK_TIME();
					__LIB_10__::func_351(uParam0);
					__LIB_0__::clearF_1Prop(&(uParam0->f_2257));
					__LIB_9__::func_819(&(uParam0->f_1), 3);
					break;
				case 3:
					bVar0 = false;
					if (BitTest(uParam0->f_1, 10))
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							bVar0 = true;
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								if (PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1)))
								{
									bVar0 = false;
								}
							}
						}
						else if (!__LIB_10__::func_354(&(uParam0->f_1)))
						{
							if (ENTITY::IS_ENTITY_DEAD(iVar1, false))
							{
							}
							if (SYSTEM::VDIST2(uParam0->f_1.f_30, ENTITY::GET_ENTITY_COORDS(iVar1, false)) > 2500f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = true;
								if (__LIB_11__::func_725(PLAYER::PLAYER_ID()))
								{
									bVar0 = false;
								}
							}
							if (ENTITY::GET_ENTITY_SPEED(iVar1) > 2f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = false;
								__LIB_0__::clearF_1Prop(&(uParam0->f_2257));
								__LIB_0__::func_795(&(uParam0->f_2257), 0, 0);
							}
							if (__LIB_0__::func_864(&(uParam0->f_2257)))
							{
								if (!__LIB_0__::func_937(&(uParam0->f_2257), 6000, 0))
								{
									return 0;
								}
								else
								{
									bVar0 = true;
								}
							}
						}
					}
					if (!bVar0)
					{
						if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_1.f_24) > uParam0->f_1.f_5)
						{
							bVar0 = true;
						}
					}
					if (__LIB_10__::func_859(iVar2))
					{
						bVar0 = false;
					}
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (iVar2 != __LIB_0__::getMinusOneOrNull())
					{
						if (__LIB_1__::func_693(iVar2, 0, 1))
						{
							if (__LIB_1__::func_20(iVar2))
							{
								if (__LIB_3__::func_492(iVar2))
								{
									if (__LIB_0__::func_983())
									{
										if (!__LIB_1__::func_117(109))
										{
											if (__LIB_1__::func_19() == 6)
											{
												if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
												{
													CAM::DO_SCREEN_FADE_IN(500);
												}
											}
											bVar0 = false;
										}
									}
								}
							}
						}
					}
					if (bVar0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									PED::SET_PED_LOD_MULTIPLIER(iVar1, 2.5f);
								}
							}
						}
						if (!BitTest(uParam0->f_1, 12))
						{
							if (((uParam0->f_1.f_35 != 3 && uParam0->f_1.f_35 != 5) && uParam0->f_1.f_35 != 4) && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 14);
							}
							MISC::SET_BIT(&(uParam0->f_1), 12);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
						GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
						__LIB_0__::clearF_1Prop(&(uParam0->f_2257));
						__LIB_9__::func_819(&(uParam0->f_1), 4);
					}
					__LIB_11__::func_839(uParam0);
					break;
				case 4:
					__LIB_11__::func_839(uParam0);
					if (BitTest(uParam0->f_47, 15))
					{
						if (__LIB_0__::func_983() || __LIB_22__::func_396())
						{
							MISC::CLEAR_BIT(&(uParam0->f_47), 15);
						}
					}
					if (bParam2 && PED::IS_PED_INJURED(iVar1))
					{
						__LIB_9__::func_819(&(uParam0->f_1), 5);
					}
					else if (!CAM::IS_SCREEN_FADED_IN())
					{
						if (!BitTest(uParam0->f_47, 15))
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								if (!__LIB_10__::func_889() && !__LIB_10__::func_350(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), Global_2815059.f_6749))
								{
									if (__LIB_0__::func_983() || __LIB_22__::func_396())
									{
										CAM::DO_SCREEN_FADE_IN(250);
									}
									else
									{
										MISC::SET_BIT(&(uParam0->f_47), 15);
									}
									__LIB_0__::clearF_1Prop(&(uParam0->f_47.f_2186));
									HUD::BUSYSPINNER_OFF();
									PAD::SET_CONTROL_VALUE_NEXT_FRAME(0 /*PLAYER_CONTROL*/, 98 /*INPUT_VEH_CINEMATIC_LR*/, 1f);
								}
								else
								{
									__LIB_9__::func_819(&(uParam0->f_1), 5);
								}
							}
						}
						else
						{
							__LIB_9__::func_819(&(uParam0->f_1), 5);
						}
					}
					else
					{
						__LIB_9__::func_819(&(uParam0->f_1), 5);
					}
					break;
				case 5:
					__LIB_10__::func_326();
					__LIB_10__::func_338(&(uParam0->f_1));
					if (!bParam2 || !PED::IS_PED_INJURED(iVar1))
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_9__::func_819(&(uParam0->f_1), 0);
					__LIB_10__::func_327(&(uParam0->f_1), 0);
					break;
				}
			}
	}
	if (!uParam0->f_1.f_34)
	{
		uParam0->f_1.f_4 = 1;
		MISC::CLEAR_BIT(&(uParam0->f_47), 2);
		MISC::CLEAR_BIT(&(uParam0->f_1), 10);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_10__::func_349();
		__LIB_10__::func_858(uParam0, __LIB_1__::func_711());
		if (PED::IS_PED_A_PLAYER(__LIB_1__::func_711()))
		{
			uParam0->f_1.f_42 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711());
		}
		else
		{
			uParam0->f_1.f_42 = -1;
		}
		return 1;
	}
	return 0;
}

void func_1556(var uParam0)//Position - 0xA762D
{
	int iVar0;
	int iVar1;
	if (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_0__::func_629())
		{
			if (uParam0->f_1.f_4)
			{
				if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
				{
					if (BitTest(Global_2621446, 28))
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
						HUD::HIDE_HELP_TEXT_THIS_FRAME();
						HUD::THEFEED_HIDE_THIS_FRAME();
						return;
					}
				}
				if (__LIB_0__::func_80())
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
				}
				if (__LIB_10__::func_941() && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
				{
					return;
				}
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				HUD::ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
				__LIB_10__::func_351(uParam0);
				if (__LIB_10__::func_368(uParam0))
				{
					if (PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)) != __LIB_1__::func_4())
					{
						__LIB_10__::func_858(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_10__::func_909(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_5__::func_942(1, __LIB_1__::func_4(), 1);
						__LIB_10__::func_299();
					}
				}
				if (__LIB_10__::func_328(__LIB_1__::func_711()))
				{
					if (__LIB_1__::func_711() != PLAYER::PLAYER_PED_ID())
					{
						if (PED::IS_PED_A_PLAYER(__LIB_1__::func_711()))
						{
							__LIB_24__::func_279(uParam0);
							if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
							{
								func_1575(uParam0);
							}
							iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()));
							if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())) > iVar0)
							{
								iVar0 = PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()));
							}
							if (iVar0 != uParam0->f_47.f_1465)
							{
								uParam0->f_47.f_1465 = iVar0;
								MISC::SET_FAKE_WANTED_LEVEL(uParam0->f_47.f_1465);
							}
							if (__LIB_1__::func_693(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()), 1, 1))
							{
								if (PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())) != uParam0->f_47.f_1466)
								{
									uParam0->f_47.f_1466 = PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()));
									HUD::FLASH_WANTED_DISPLAY(uParam0->f_47.f_1466);
								}
							}
							iVar1 = 1;
							if ((uParam0->f_1.f_35 == 3 || uParam0->f_1.f_35 == 5) || uParam0->f_1.f_35 == 4)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())))
								{
									if (__LIB_1__::func_20(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())))
									{
										__LIB_10__::func_299();
										if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT())
										{
											CAM::DO_SCREEN_FADE_OUT(0);
										}
										iVar1 = 0;
									}
								}
							}
							if (__LIB_0__::func_864(&(uParam0->f_2255)))
							{
								if (__LIB_30__::func_716(__LIB_1__::func_711(), __LIB_5__::func_839(&(uParam0->f_1))) && iVar1)
								{
									__LIB_0__::clearF_1Prop(&(uParam0->f_2255));
								}
							}
							func_1561(uParam0, __LIB_1__::func_711());
						}
					}
					if (!BitTest(uParam0->f_47, 0))
					{
						if (!BitTest(uParam0->f_47, 3))
						{
							MISC::SET_BIT(&(uParam0->f_47), 0);
							__LIB_34__::func_724(uParam0);
						}
					}
					if ((__LIB_10__::func_197(&(uParam0->f_1)) != 6 && __LIB_10__::func_197(&(uParam0->f_1)) != 4) && __LIB_10__::func_197(&(uParam0->f_1)) != 5)
					{
						if (__LIB_1__::func_711() != __LIB_1__::func_4())
						{
							if (!__LIB_10__::func_445())
							{
								__LIB_9__::func_819(&(uParam0->f_1), 0);
								__LIB_7__::func_694(&(uParam0->f_1), 2);
								__LIB_10__::func_327(&(uParam0->f_1), 1);
								__LIB_10__::func_887(&(uParam0->f_1));
							}
						}
					}
				}
				else
				{
					__LIB_34__::func_756(uParam0, 1, 0);
				}
			}
		}
	}
	else
	{
		__LIB_10__::func_887(&(uParam0->f_1));
		__LIB_34__::func_757(uParam0);
	}
	__LIB_34__::func_765(uParam0);
}

void func_1561(var uParam0, int iParam1)//Position - 0xA7A31
{
	if (__LIB_10__::func_939(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
	{
		if (uParam0->f_2262 == -1)
		{
			uParam0->f_2262 = __LIB_13__::func_580(iParam1);
		}
		else if (!__LIB_5__::func_374(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_1371(uParam0->f_2262, 1);
		}
	}
	else
	{
		func_1370(uParam0);
	}
}

void func_1575(var uParam0)//Position - 0xA7FEC
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711());
	if (iVar1 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (BitTest(Global_2621446.f_69.f_5, 11))
		{
			if ((__LIB_10__::func_355(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775, 0) && !__LIB_2__::func_154(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775)) && !__LIB_11__::func_679(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775))
			{
				if ((Global_4718592 == 2 || Global_4718592 == 8) || Global_4718592 == 0)
				{
					if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775 == NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()))
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (__LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()), 0))
			{
				bVar0 = true;
			}
		}
		else if (__LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()), 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0 == 1)
	{
		if (__LIB_10__::func_207() && __LIB_1__::func_620())
		{
			bVar0 = false;
		}
	}
	if (__LIB_2__::func_176())
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_623() == 2)
		{
			__LIB_10__::func_336();
		}
	}
	else
	{
		if (bVar0)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_623() == 1)
			{
				if ((!__LIB_0__::func_864(&(uParam0->f_2251)) || __LIB_0__::func_937(&(uParam0->f_2251), 5000, 0)) || __LIB_0__::func_623() == 1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_0__::clearF_1Prop(&(uParam0->f_2251));
					__LIB_10__::func_892(uParam0, __LIB_10__::func_364());
					__LIB_5__::func_942(0, 0, 1);
					func_1401(1, 1, 1, 1, 0, 0f, 0f, 0f, 1, 0, 0, 1, 1, 0, 0);
				}
			}
			else
			{
				__LIB_0__::func_627(&(uParam0->f_2251), 0, 0);
			}
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (__LIB_10__::func_386() == 0)
			{
				__LIB_10__::func_385(1);
			}
		}
		switch (__LIB_10__::func_386())
		{
			case 0:
				break;
			case 1:
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						if ((!__LIB_10__::func_889() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_10__::func_325())
						{
							CAM::DO_SCREEN_FADE_OUT(250);
						}
						else
						{
							__LIB_5__::func_942(1, __LIB_1__::func_4(), 1);
							__LIB_2__::func_325();
							__LIB_35__::func_723(1, 1);
							__LIB_10__::func_363(1);
							__LIB_10__::func_385(0);
						}
					}
				}
				else
				{
					uParam0->f_1.f_28 = NETWORK::GET_NETWORK_TIME();
					__LIB_5__::func_942(1, __LIB_1__::func_4(), 1);
					__LIB_2__::func_325();
					__LIB_35__::func_723(1, 1);
					__LIB_10__::func_363(1);
					__LIB_10__::func_385(2);
				}
				break;
			case 2:
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_1.f_28) > 8000)
				{
					__LIB_10__::func_385(3);
				}
				break;
			case 3:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (!__LIB_10__::func_889())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						else
						{
							__LIB_10__::func_385(0);
						}
					}
				}
				else
				{
					__LIB_10__::func_385(0);
				}
				break;
			}
	}
}

void func_1591(var uParam0)//Position - 0xA8884
{
	if (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_7__::func_719(16))
		{
			if (func_1522(uParam0, 1, 0))
			{
				__LIB_7__::func_694(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		__LIB_10__::func_886();
		__LIB_10__::func_887(&(uParam0->f_1));
		__LIB_34__::func_757(uParam0);
	}
	__LIB_34__::func_765(uParam0);
}

void func_1601(var uParam0)//Position - 0xA8BAD
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	struct<3> Var9;
	var uVar10;
	var uVar11;
	var uVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<3> Var18;
	int iVar19;
	struct<3> Var20;
	int iVar21;
	int iVar22;
	struct<3> Var23;
	int iVar24;
	struct<3> Var25;
	int iVar26;
	struct<3> Var27;
	int iVar28;
	int iVar29;
	struct<415> Var30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	fVar1 = 0.25f;
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		fVar1 = 0.15f;
	}
	if (__LIB_10__::func_354(&(uParam0->f_1)) && CAM::GET_RENDERING_CAM() == uParam0->f_1.f_39)
	{
		CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(true, true);
		PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			Var2 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
			if (__LIB_10__::func_379())
			{
				Var2 = { __LIB_10__::func_378() };
			}
			if (!__LIB_0__::func_86(Var2))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var2, 0f, 0f, 0f);
			}
		}
	}
	if (uParam0->f_1.f_34 && __LIB_1__::func_286(&(uParam0->f_1)) > 1)
	{
		iVar0 = __LIB_2__::func_51();
	}
	else
	{
		iVar0 = __LIB_1__::func_4();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				iVar4 = iVar3;
				if (iVar4 != -1)
				{
					iVar5 = -1;
					iVar6 = -1;
					iVar6 = __LIB_7__::func_693(iVar3, 0);
					bVar7 = false;
					if (BitTest(Global_1853348[iVar4 /*834*/].f_833, 8))
					{
						iVar5 = Global_1853348[iVar4 /*834*/].f_776;
					}
					else
					{
						iVar5 = Global_1853348[iVar4 /*834*/].f_267.f_32;
					}
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (!bVar7)
						{
							if (((Global_2689235[iVar4 /*453*/].f_244 != -1 && !__LIB_0__::func_845(iVar5, -1)) && !__LIB_2__::func_782(iVar5, 0, 0)) && !__LIB_4__::func_914(iVar3))
							{
								iVar14 = __LIB_0__::func_328(Global_2689235[iVar4 /*453*/].f_244);
								if (iVar14 != 3 && !__LIB_11__::func_785(iVar14, iVar3))
								{
									bVar7 = true;
									if (!__LIB_10__::func_354(&(uParam0->f_1)))
									{
										if (__LIB_10__::func_377(Global_2689235[iVar4 /*453*/].f_244, &Var8, &Var9, &fVar13))
										{
											uParam0->f_1.f_41 = 1;
											__LIB_10__::func_942(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
										}
									}
								}
							}
						}
						if ((!PED::IS_PED_INJURED(iVar0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == MISC::GET_HASH_KEY("YachtRm_Bridge")) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 9))
						{
							iVar5 = 86;
						}
						if (bVar7)
						{
							iVar15 = __LIB_3__::func_248(iVar3);
							if (iVar15 == -1)
							{
								iVar15 = __LIB_2__::func_717(iVar3);
							}
							if ((iVar15 == 81 || iVar15 == 82) || iVar15 == 117)
							{
								if (iVar15 == 117)
								{
									iVar16 = joaat("terbyte");
								}
								else
								{
									iVar16 = joaat("trailerlarge");
								}
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::getMinusOneOrNull())
								{
									iVar17 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11, 50f, iVar16, 131078);
									Var18 = { 0f, -15f, 5f };
									if (__LIB_10__::func_354(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar17))
										{
											__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar17, Var18);
										}
									}
								}
							}
							else if (iVar15 == 88 || iVar15 == 101)
							{
								iVar19 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								Var20 = { 0f, -15f, 5f };
								if (__LIB_10__::func_354(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar19))
									{
										__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar19, Var20);
									}
								}
							}
						}
						if (!bVar7)
						{
							iVar21 = __LIB_3__::func_248(iVar3);
							if (iVar21 == -1)
							{
								iVar21 = __LIB_2__::func_717(iVar3);
							}
							if ((iVar21 == 81 || iVar21 == 82) || iVar21 == 117)
							{
								if (iVar21 == 117)
								{
									iVar22 = joaat("terbyte");
								}
								else
								{
									iVar22 = joaat("trailerlarge");
								}
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::getMinusOneOrNull())
								{
									Var23 = { Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11 };
									iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(Var23, 50f, iVar22, 131078);
									if (!__LIB_0__::func_86(Var23))
									{
										__LIB_10__::func_376(Var23);
									}
									Var25 = { 0f, -15f, 5f };
									if (!__LIB_10__::func_354(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar24))
										{
											__LIB_10__::func_970(uParam0, iVar24, Var25, 0, Var23);
										}
										else
										{
											if (!__LIB_0__::func_86(Var23))
											{
												STREAMING::SET_FOCUS_POS_AND_VEL(Var23, 0f, 0f, 0f);
											}
											__LIB_10__::func_970(uParam0, iVar24, Var25, 0, Var23);
										}
									}
									else if (ENTITY::DOES_ENTITY_EXIST(iVar24))
									{
										CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar24, Var25, true);
										__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar24, Var25);
									}
								}
								bVar7 = true;
							}
							else if (iVar21 == 88 || iVar21 == 101)
							{
								iVar26 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
								{
									__LIB_10__::func_376(Global_2689235[iVar3 /*453*/].f_318.f_21);
								}
								Var27 = { 0f, -15f, 5f };
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar26))
									{
										__LIB_10__::func_970(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
										Global_2815059.f_5195.f_764 = iVar26;
									}
									else
									{
										if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
										{
											STREAMING::SET_FOCUS_POS_AND_VEL(Global_2689235[iVar3 /*453*/].f_318.f_21, 0f, 0f, 0f);
										}
										__LIB_10__::func_970(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
									}
								}
								else if (Global_2815059.f_5195.f_764 != iVar26)
								{
									__LIB_15__::func_649(uParam0);
								}
								else if (ENTITY::DOES_ENTITY_EXIST(iVar26))
								{
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar26, Var27, true);
									__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar26, Var27);
								}
								bVar7 = true;
							}
						}
						if (!bVar7)
						{
							if (((__LIB_1__::func_511(iVar3, 1, 0) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 8)) || (!PED::IS_PED_INJURED(iVar0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == MISC::GET_HASH_KEY("YachtRm_Bridge"))) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 9))
							{
								if (iVar5 != -1)
								{
									if (!__LIB_7__::func_685(iVar5) || (__LIB_7__::func_685(iVar5) && iVar6 != -1))
									{
										bVar7 = true;
										__LIB_10__::func_375(uParam0);
										if (uParam0->f_1.f_41 > 2)
										{
											__LIB_15__::func_649(uParam0);
										}
										if (!__LIB_10__::func_354(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 2;
											if (__LIB_7__::func_685(iVar5))
											{
												__LIB_10__::func_376(Global_4196263[iVar6 /*2012*/].f_3[0 /*3*/]);
												__LIB_10__::func_942(uParam0, fVar1, Global_4196263[iVar6 /*2012*/].f_24, Global_4196263[iVar6 /*2012*/].f_24.f_3, Global_4196263[iVar6 /*2012*/].f_24.f_6, 1, 1);
											}
											else
											{
												__LIB_10__::func_376(Global_1312193[iVar5 /*1951*/].f_3[0 /*3*/]);
												__LIB_10__::func_942(uParam0, fVar1, Global_1312193[iVar5 /*1951*/].f_24, Global_1312193[iVar5 /*1951*/].f_24.f_3, Global_1312193[iVar5 /*1951*/].f_24.f_6, 1, 1);
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_4__::func_902(iVar3) || __LIB_3__::func_171(iVar3))
							{
								iVar28 = __LIB_3__::func_248(iVar3);
								if (iVar28 == -1)
								{
									iVar28 = __LIB_2__::func_717(iVar3);
								}
								if (iVar28 != -1)
								{
									if ((((((((((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_0__::func_172(iVar28) != 4)) && __LIB_0__::func_172(iVar28) != 12) && __LIB_0__::func_172(iVar28) != 8) && __LIB_0__::func_172(iVar28) != 5) && __LIB_0__::func_172(iVar28) != 10) && __LIB_0__::func_172(iVar28) != 6) && __LIB_0__::func_172(iVar28) != 14) && __LIB_0__::func_172(iVar28) != 15) && __LIB_0__::func_172(iVar28) != 16) && __LIB_0__::func_172(iVar28) != 17)
									{
										iVar29 = 0;
										if (__LIB_0__::func_172(iVar28) == 11)
										{
											iVar29 = 1;
										}
										Var30.f_22.f_10 = -1;
										Var30.f_22.f_37 = -1;
										Var30.f_22.f_40 = 1048576000;
										Var30.f_22.f_66 = 1048576000;
										Var30.f_22.f_68 = -1;
										Var30.f_22.f_69 = 2;
										Var30.f_22.f_72 = 2;
										Var30.f_22.f_89 = 4;
										Var30.f_22.f_94 = -1;
										Var30.f_22.f_96 = 4;
										Var30.f_22.f_109.f_1 = 10;
										Var30.f_22.f_122.f_1 = 10;
										Var30.f_22.f_135 = 4;
										Var30.f_22.f_140 = 30;
										Var30.f_22.f_171 = 4;
										Var30.f_22.f_176 = 6;
										Var30.f_22.f_183 = 4;
										Var30.f_22.f_189 = 9;
										Var30.f_22.f_218 = -1;
										Var30.f_22.f_221 = 6;
										Var30.f_285 = 9;
										Var30.f_285.f_28 = 9;
										Var30.f_285.f_56 = 9;
										Var30.f_285.f_66 = 9;
										Var30.f_285.f_94 = 9;
										Var30.f_403 = -1;
										Var30.f_405 = 2;
										Var30.f_413 = -1;
										Var30.f_414 = -1;
										func_1609(iVar28, &Var30, iVar29, 0);
										__LIB_10__::func_375(uParam0);
										if (!__LIB_10__::func_354(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 14;
											Var31 = { Var30.f_22.f_59 };
											Var32 = { Var30.f_22.f_62 };
											fVar33 = Var30.f_22.f_65;
											__LIB_10__::func_376(Global_1946250.f_533[iVar28 /*3*/]);
											if (SYSTEM::VDIST(Var31, 0f, 0f, 0f) < 0.01f)
											{
												Var31 = { Var30.f_22.f_13 };
												Var32 = { Var30.f_22.f_16 };
												fVar33 = Var30.f_22.f_19;
											}
											if (!__LIB_0__::func_86(Var31))
											{
												__LIB_10__::func_942(uParam0, fVar1, Var31, Var32, fVar33, 1, 1);
												bVar7 = true;
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 7))
							{
								bVar7 = true;
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 3;
									__LIB_10__::func_942(uParam0, fVar1, 122.0654f, -1327.9208f, 33.6793f, -2.9863f, 2.0975f, -9.7207f, 32.8998f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 12))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 4;
									__LIB_10__::func_942(uParam0, fVar1, 1291.5598f, -1730.0697f, 58.7646f, -7.1113f, 0f, 65.8008f, 41.2371f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 13))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 5;
									__LIB_10__::func_942(uParam0, fVar1, 1989.2953f, 3812.5586f, 33.4393f, -0.5562f, 0f, 69.5306f, 40.2409f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 14))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 6;
									__LIB_10__::func_942(uParam0, fVar1, 689.6125f, -996.7897f, 37.070427f, -7.501717f, 0f, -43.41461f, 45f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_11__::func_728(iVar3))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
									Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
									uParam0->f_1.f_41 = 7;
									__LIB_10__::func_942(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (BitTest(Global_1853348[iVar4 /*834*/].f_833, 12))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									__LIB_10__::func_374(&uVar10, &uVar11, &Var8, &Var9, &uVar12, Global_4718592.f_162483, 1);
									uParam0->f_1.f_41 = 8;
									__LIB_10__::func_942(uParam0, fVar1, Var8, Var9, 40f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (((BitTest(Global_1853348[iVar4 /*834*/].f_833, 14) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 15)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_ROLLERCOASTER", -1)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_FERRISWHEEL", -1))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 9;
									__LIB_10__::func_942(uParam0, fVar1, -1703.854f, -1082.2223f, 42.006f, -8.3096f, 0f, -111.8213f, 45f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (BitTest(Global_2815059.f_4660, 5))
							{
								bVar7 = true;
								if (BitTest(uParam0->f_1, 16))
								{
									MISC::CLEAR_BIT(&(uParam0->f_1), 16);
								}
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									__LIB_10__::func_373(0);
									uParam0->f_1.f_41 = 10;
									__LIB_10__::func_942(uParam0, fVar1, -1155.4f, -2715.5f, 64f, -10.3f, 0f, 113.1f, 50f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
							{
								if ((__LIB_1__::func_20(iVar3) && __LIB_2__::func_88(iVar3) < 41) && !__LIB_1__::func_511(iVar3, 1, 0))
								{
									if ((__LIB_10__::func_197(&(uParam0->f_1)) == 3 && __LIB_11__::func_784(iVar3)) && Global_4718592.f_117083)
									{
										if (__LIB_10__::func_354(&(uParam0->f_1)))
										{
											bVar7 = true;
										}
										else
										{
											bVar7 = true;
											Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
											Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
											fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
											if (!__LIB_0__::func_86(Global_4718592.f_634) && __LIB_0__::func_983())
											{
												Var8 = { Global_4718592.f_634 };
												Var9 = { Global_4718592.f_637 };
											}
											__LIB_2__::func_448(0, 0, 1);
											uParam0->f_1.f_41 = 11;
											__LIB_10__::func_942(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
										}
									}
									else if (__LIB_10__::func_354(&(uParam0->f_1)))
									{
										bVar7 = true;
									}
									else if (Global_2689235[iVar4 /*453*/].f_205.f_2 > 0f)
									{
										Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
										Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
										fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
										bVar7 = true;
										if (__LIB_0__::func_86(Var8))
										{
											Var8 = { Global_2689235[iVar4 /*453*/].f_205 };
											Var8.f_0 = (Var8.f_0 + 0f);
											Var8.f_1 = (Var8.f_1 + -2.3332f);
											Var8.f_2 = (Var8.f_2 + 3.2914f);
											Var9 = { -40.6168f, 0f, 0f };
											fVar13 = 40.3433f;
										}
										uParam0->f_1.f_41 = 12;
										__LIB_10__::func_942(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
							else if (__LIB_0__::func_979(iVar3, 0))
							{
								bVar7 = true;
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									if (__LIB_10__::func_372(__LIB_1__::func_694(iVar3), &Var8, &Var9, &fVar13))
									{
										uParam0->f_1.f_41 = 13;
										__LIB_10__::func_942(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
						}
					}
					if (!bVar7 && !__LIB_0__::func_983())
					{
						if (__LIB_11__::func_727(uParam0, iVar3) && !__LIB_10__::func_371())
						{
							__LIB_15__::func_649(uParam0);
						}
					}
				}
			}
		}
	}
}

void func_1609(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xA9D83
{
	var uVar0;
	func_1610(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_1610(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xA9D99
{
	struct<33> Var0;
	func_1611(iParam0, &Var0, 2);
	func_1611(iParam0, &Var0, 6);
	func_1611(iParam0, &Var0, 1);
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

void func_1611(int iParam0, var uParam1, int iParam2)//Position - 0xA9DE8
{
	func_5730(uParam1, iParam2);
	func_5724(uParam1, iParam2);
	func_5716(uParam1, iParam2);
	func_1612(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_1612(int iParam0, var uParam1, int iParam2)//Position - 0xA9E16
{
	switch (iParam0)
	{
		case 0:
			func_5646(uParam1, iParam2);
			break;
		case 1:
			func_5516(uParam1, iParam2);
			break;
		case 2:
			func_5442(uParam1, iParam2);
			break;
		case 3:
			func_5369(uParam1, iParam2);
			break;
		case 4:
			func_5202(uParam1, iParam2);
			break;
		case 5:
			func_5047(uParam1, iParam2);
			break;
		case 6:
			func_4984(uParam1, iParam2);
			break;
		case 7:
			func_4816(uParam1, iParam2);
			break;
		case 8:
			func_4652(uParam1, iParam2);
			break;
		case 9:
			func_4418(uParam1, iParam2);
			break;
		case 10:
			func_4340(uParam1, iParam2);
			break;
		case 11:
			func_4125(uParam1, iParam2);
			break;
		case 12:
			func_3991(uParam1, iParam2);
			break;
		case 13:
			func_3823(uParam1, iParam2);
			break;
		case 14:
			func_3666(uParam1, iParam2);
			break;
		case 15:
			func_3488(uParam1, iParam2);
			break;
		case 16:
			func_3378(uParam1, iParam2);
			break;
		case 17:
			func_3161(uParam1, iParam2);
			break;
		case 18:
			func_3067(uParam1, iParam2);
			break;
		case 19:
			func_2948(uParam1, iParam2);
			break;
		case 20:
			func_2659(uParam1, iParam2);
			break;
		case 21:
			func_2538(uParam1, iParam2);
			break;
		case 22:
			func_2368(uParam1, iParam2);
			break;
		case 23:
			func_2146(uParam1, iParam2);
			break;
		case 24:
			func_1613(uParam1, iParam2);
			break;
	}
}

void func_1613(var uParam0, int iParam1)//Position - 0xA9FCE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 868836/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 868822/*__LIB_7__::func_293*/;
			break;
		case 1:
			uParam0->f_30 = 868724/*__LIB_7__::func_218*/;
			break;
		case 2:
			uParam0->f_31 = 867358/*__LIB_7__::func_292*/;
			break;
		case 3:
			uParam0->f_34 = 867129/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 867116/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 867106/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 866907/*__LIB_6__::func_453*/;
			break;
		case 38:
			uParam0->f_9 = 866859/*__LIB_11__::func_900*/;
			break;
		case 42:
			uParam0->f_10 = 866830/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 866521/*__LIB_7__::func_217*/;
			break;
		case 11:
			uParam0->f_11 = 866512/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 863868/*__LIB_8__::func_63*/;
			break;
		case 14:
			uParam0->f_11 = 863859/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 857024/*__LIB_8__::func_51*/;
			break;
		case 8:
			uParam0->f_37 = 856149/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 856032/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 855976/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 855823/*__LIB_7__::func_289*/;
			break;
		case 10:
			uParam0->f_27 = 855674/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 855612/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 854029/*__LIB_30__::func_492*/;
			break;
		case 16:
			uParam0->f_5 = 852859/*__LIB_30__::func_653*/;
			break;
		case 108:
			uParam0->f_55 = 797840/*__LIB_30__::func_834*/;
			break;
		case 17:
			uParam0->f_17 = 796239/*__LIB_15__::func_635*/;
			break;
		case 19:
			uParam0->f_17 = 796087/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 796062/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 795842/*__LIB_7__::func_288*/;
			break;
		case 21:
			uParam0->f_3 = 794401/*__LIB_7__::func_672*/;
			break;
		case 74:
			uParam0->f_53 = 794211/*__LIB_6__::func_77*/;
			break;
		case 75:
			uParam0->f_4 = 793013/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 792906/*__LIB_6__::func_605*/;
			break;
		case 23:
			uParam0->f_26 = 792859/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 792822/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 792814/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 789849/*func_1921*/;
			break;
		case 27:
			uParam0->f_25 = 789841/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 789833/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 789683/*__LIB_30__::func_422*/;
			break;
		case 31:
			uParam0->f_39 = 789467/*__LIB_6__::func_712*/;
			break;
		case 33:
			uParam0->f_40 = 788552/*__LIB_22__::func_400*/;
			break;
		case 32:
			*uParam0 = 788497/*__LIB_11__::func_807*/;
			break;
		case 76:
			uParam0->f_13 = 788486/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 784731/*__LIB_7__::func_393*/;
			break;
		case 36:
			uParam0->f_58 = 784686/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 763684/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 763675/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 763666/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 763658/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 763635/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 763589/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 763446/*__LIB_7__::func_216*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 762303/*__LIB_22__::func_399*/;
			break;
		case 49:
			uParam0->f_8 = 762285/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 761971/*__LIB_22__::func_398*/;
			break;
		case 51:
			*uParam0 = 761869/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 761858/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 761732/*func_1875*/;
			break;
		case 54:
			uParam0->f_45 = 761342/*func_1874*/;
			break;
		case 56:
			uParam0->f_46 = 761323/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 761037/*__LIB_30__::func_616*/;
			break;
		case 58:
			uParam0->f_13 = 760911/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 759532/*__LIB_30__::func_623*/;
			break;
		case 60:
			*uParam0 = 759523/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 759512/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 759386/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 759378/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 759364/*__LIB_30__::func_809*/;
			break;
		case 64:
			uParam0->f_47 = 759356/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 757932/*__LIB_7__::func_534*/;
			break;
		case 66:
			uParam0->f_21 = 757236/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 757096/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 755891/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 755882/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 755870/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 755861/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 755849/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 755398/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 755389/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 714597/*func_1730*/;
			break;
		case 87:
			uParam0->f_1 = 710742/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 710733/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 710725/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 709847/*__LIB_8__::func_19*/;
			break;
		case 91:
			uParam0->f_1 = 709813/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 707971/*__LIB_7__::func_389*/;
			break;
		case 94:
			uParam0->f_1 = 706001/*__LIB_7__::func_679*/;
			break;
		case 95:
			uParam0->f_22 = 704610/*__LIB_11__::func_950*/;
			break;
		case 96:
			uParam0->f_1 = 704601/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 704592/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 704583/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 704575/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 704567/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 704448/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 704294/*__LIB_7__::func_388*/;
			break;
		case 114:
			uParam0->f_16 = 703626/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 703617/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 703608/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 699192/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 699183/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 699056/*__LIB_8__::func_49*/;
			break;
		case 120:
			uParam0->f_19 = 699001/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 698082/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 698073/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 698065/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1730(int iParam0, var uParam1)//Position - 0xAE765
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
			func_1745(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1739(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

int func_1739(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xAEEDC
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
						func_1740(uParam2[iVar1], iVar4, bParam8, bParam6);
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

int func_1740(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xAF03E
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
		if (func_1742(iParam1) || __LIB_1__::func_554(iParam1))
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

int func_1742(int iParam0)//Position - 0xAF19D
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_551(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_1745(int iParam0, var uParam1, int iParam2)//Position - 0xAF28B
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
	else if (__LIB_30__::func_743(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
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
			__LIB_30__::func_682(*uParam1, &Var0, 1, 1, 0);
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
				func_1739(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				__LIB_30__::func_825(iParam0, &(uParam1->f_12));
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

void func_1874(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xB9DFE
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_6__::func_601(iParam0))
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
				bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_693(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_3__::func_649(bVar1, __LIB_3__::func_650(iParam0)))
					{
						Var3 = { __LIB_1__::func_696(bVar1) };
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
Vector3 func_1875(int iParam0)//Position - 0xB9F84
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

void func_1921(int iParam0, int iParam1)//Position - 0xC0D59
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_3__::func_616();
	Var3 = { __LIB_3__::func_681(iParam0, iVar2) };
	if (__LIB_7__::func_288(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1931(iParam0, Var3, &bVar0, &bVar1, 1, 0);
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
			__LIB_22__::func_400(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_6__::func_598());
			}
			__LIB_24__::func_358(iParam0, __LIB_6__::func_598());
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_6__::func_598());
			}
			__LIB_24__::func_358(iParam0, __LIB_6__::func_598());
		}
	}
	else
	{
		if (__LIB_2__::func_159(0))
		{
			if (iVar2 == 3 && __LIB_6__::func_597(__LIB_0__::func_797()) == iParam0)
			{
				__LIB_3__::func_664(1);
			}
		}
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1931(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xC13A1
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
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
		bVar5 = iVar4;
		if (iVar2 == bVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(bVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[bVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_696(bVar5) };
						bVar8 = false;
						if (__LIB_6__::func_70(bVar5) > -1)
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
								if (((((((((!__LIB_1__::func_907(bVar5, 1) && !__LIB_6__::func_279(bVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_2__::func_154(bVar5)) && !__LIB_4__::func_976(bVar5, 1)) && !((__LIB_2__::func_72(bVar5, 1) && !__LIB_3__::func_234(iVar2, bVar5)) && __LIB_6__::func_598() != 0)) && !func_1932(bVar5)) && !__LIB_3__::func_171(bVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar5)) && !__LIB_6__::func_279(bVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_2__::func_154(bVar5)) && !__LIB_4__::func_976(bVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_1932(bVar5)) && !__LIB_3__::func_171(bVar5)) && !bVar8)
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
int func_1932(bool bParam0)//Position - 0xC15DC
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

void func_2146(var uParam0, int iParam1)//Position - 0xD41ED
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 925530/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 925521/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 925442/*__LIB_7__::func_296*/;
			break;
		case 2:
			uParam0->f_31 = 924801/*__LIB_7__::func_613*/;
			break;
		case 3:
			uParam0->f_34 = 924535/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 924522/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 924423/*__LIB_7__::func_223*/;
			break;
		case 37:
			uParam0->f_18 = 924285/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 924237/*__LIB_6__::func_614*/;
			break;
		case 39:
			uParam0->f_11 = 924202/*__LIB_30__::func_624*/;
			break;
		case 41:
			uParam0->f_20 = 924083/*__LIB_12__::func_136*/;
			break;
		case 42:
			uParam0->f_10 = 924054/*__LIB_6__::func_456*/;
			break;
		case 11:
			uParam0->f_11 = 924044/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 921893/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 921884/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 919267/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 919259/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 919250/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 919241/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 919179/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 919098/*__LIB_30__::func_475*/;
			break;
		case 16:
			uParam0->f_5 = 918745/*__LIB_6__::func_722*/;
			break;
		case 108:
			uParam0->f_55 = 914307/*__LIB_30__::func_826*/;
			break;
		case 17:
			uParam0->f_17 = 913137/*__LIB_15__::func_636*/;
			break;
		case 19:
			uParam0->f_17 = 913110/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 913101/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 912970/*__LIB_6__::func_613*/;
			break;
		case 74:
			uParam0->f_53 = 912866/*__LIB_6__::func_77*/;
			break;
		case 75:
			uParam0->f_4 = 912850/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 912694/*__LIB_6__::func_612*/;
			break;
		case 23:
			uParam0->f_26 = 912686/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 904731/*func_2271*/;
			break;
		case 25:
			uParam0->f_23 = 903682/*func_2267*/;
			break;
		case 27:
			uParam0->f_25 = 903466/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 903425/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 903402/*__LIB_7__::func_222*/;
			break;
		case 30:
			uParam0->f_8 = 902643/*__LIB_11__::func_808*/;
			break;
		case 31:
			uParam0->f_39 = 902613/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 902499/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 902381/*__LIB_7__::func_295*/;
			break;
		case 76:
			uParam0->f_13 = 902332/*__LIB_7__::func_221*/;
			break;
		case 34:
			uParam0->f_41 = 893395/*__LIB_7__::func_220*/;
			break;
		case 36:
			uParam0->f_58 = 893347/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 882258/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 882249/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 882240/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 882232/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 882221/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 882095/*__LIB_7__::func_219*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 881210/*__LIB_30__::func_727*/;
			break;
		case 49:
			uParam0->f_8 = 881201/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 881032/*__LIB_6__::func_719*/;
			break;
		case 51:
			*uParam0 = 881023/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 881012/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 880989/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 880940/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 880922/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 880880/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 880838/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 880709/*__LIB_7__::func_487*/;
			break;
		case 60:
			*uParam0 = 880700/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 880689/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 880666/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 880657/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 880615/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 880607/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 880599/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 880328/*__LIB_7__::func_294*/;
			break;
		case 67:
			uParam0->f_21 = 880258/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 879586/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 879577/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 879565/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 879345/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 879333/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 878797/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 878682/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 877778/*func_2189*/;
			break;
		case 87:
			uParam0->f_1 = 875147/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 875138/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 875130/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 875121/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 875112/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 875103/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 875095/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 875087/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 875052/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 875043/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 873105/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 873096/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 873087/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 871867/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 871785/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 871768/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 871736/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 870520/*__LIB_12__::func_160*/;
			break;
		case 124:
			uParam0->f_1 = 870511/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 870503/*__LIB_0__::func_467*/;
			break;
	}
}

int func_2189(int iParam0, var uParam1)//Position - 0xD64D2
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
			func_1745(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1739(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2267(int iParam0, int iParam1)//Position - 0xDCA02
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
	func_1931(iParam0, Var5, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_295(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_295(iParam0, -1);
			__LIB_3__::func_664(iVar4);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_612(iVar4, 1);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_612(iVar4, 1);
		}
	}
	else
	{
		__LIB_3__::func_664(iVar4);
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2271(var uParam0, var uParam1)//Position - 0xDCE1B
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
			func_2272(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2272(var uParam0, var uParam1)//Position - 0xDCE71
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
	func_1931(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_6__::func_455(0))))
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
					__LIB_6__::func_454(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_3__::func_770();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_6__::func_455(iVar8);
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
				__LIB_6__::func_454(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_30__::func_215(iVar4[uParam0->f_4], 154);
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

void func_2368(var uParam0, int iParam1)//Position - 0xE1F63
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 966091/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 966077/*__LIB_7__::func_297*/;
			break;
		case 1:
			uParam0->f_30 = 965986/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 965762/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 965605/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 965592/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 965582/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 965461/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 965413/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 965384/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 965296/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 965287/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 963542/*__LIB_10__::func_536*/;
			break;
		case 14:
			uParam0->f_11 = 963533/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 959385/*func_2514*/;
			break;
		case 8:
			uParam0->f_37 = 958908/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 958814/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 958805/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 958743/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 958662/*__LIB_30__::func_476*/;
			break;
		case 16:
			uParam0->f_5 = 957764/*__LIB_11__::func_902*/;
			break;
		case 108:
			uParam0->f_55 = 954484/*__LIB_30__::func_827*/;
			break;
		case 17:
			uParam0->f_17 = 953209/*__LIB_15__::func_637*/;
			break;
		case 19:
			uParam0->f_17 = 953182/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 952968/*__LIB_6__::func_619*/;
			break;
		case 21:
			uParam0->f_3 = 952904/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 952800/*__LIB_6__::func_77*/;
			break;
		case 75:
			uParam0->f_4 = 952784/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 952677/*__LIB_6__::func_618*/;
			break;
		case 23:
			uParam0->f_26 = 952669/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 948686/*func_2466*/;
			break;
		case 25:
			uParam0->f_23 = 948236/*func_2463*/;
			break;
		case 27:
			uParam0->f_25 = 948228/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 948220/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 947583/*__LIB_7__::func_401*/;
			break;
		case 31:
			uParam0->f_39 = 947445/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 946571/*__LIB_7__::func_614*/;
			break;
		case 32:
			*uParam0 = 946368/*__LIB_7__::func_400*/;
			break;
		case 76:
			uParam0->f_13 = 946215/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 944603/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 944558/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 935521/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 935512/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 935503/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 935495/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 935472/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 935420/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 935282/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 935264/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 934457/*__LIB_7__::func_490*/;
			break;
		case 51:
			*uParam0 = 934355/*__LIB_6__::func_615*/;
			break;
		case 52:
			uParam0->f_15 = 934344/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 934191/*func_2419*/;
			break;
		case 54:
			uParam0->f_45 = 933956/*func_2418*/;
			break;
		case 56:
			uParam0->f_46 = 933947/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 933528/*__LIB_7__::func_399*/;
			break;
		case 58:
			uParam0->f_13 = 933375/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 933366/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 933357/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 933346/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 933335/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 933326/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 933318/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 932262/*__LIB_10__::func_702*/;
			break;
		case 66:
			uParam0->f_21 = 932042/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 931967/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 931278/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 931269/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 931257/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 931165/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 931153/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 930786/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 930777/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 929984/*func_2392*/;
			break;
		case 87:
			uParam0->f_1 = 928604/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 928595/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 928587/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 928578/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 928569/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 928560/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 928552/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 928544/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 928532/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 928523/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 873105/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 928514/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 928505/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 927285/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 927113/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 927104/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 927096/*__LIB_0__::func_467*/;
			break;
	}
}

int func_2392(int iParam0, var uParam1)//Position - 0xE30C0
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
			func_1745(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1739(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2418(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xE4044
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_6__::func_79(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0)) && !__LIB_6__::func_79(__LIB_0__::func_797(), __LIB_3__::func_810(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_6__::func_79(bVar1, __LIB_3__::func_810(iParam0)) && __LIB_6__::func_295(bVar1))
				{
					Var3 = { __LIB_1__::func_696(bVar1) };
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
Vector3 func_2419(int iParam0)//Position - 0xE412F
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

void func_2463(int iParam0, int iParam1)//Position - 0xE780C
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_830(iParam0) };
	if (__LIB_6__::func_619(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1931(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_614(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_986(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_986(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2466(var uParam0, var uParam1)//Position - 0xE79CE
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_2469(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_6__::func_79(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_3__::func_810(*uParam0)))
	{
		__LIB_6__::func_457(uParam0, uParam1);
	}
	else
	{
		__LIB_3__::func_831(uParam1);
	}
}

void func_2469(var uParam0, var uParam1)//Position - 0xE7AAD
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_15__::func_654(uParam0, uParam1);
			break;
		case 1:
			func_2481(uParam0, uParam1);
			break;
		case 2:
			__LIB_30__::func_467(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2481(var uParam0, var uParam1)//Position - 0xE8689
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1931(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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
		if (__LIB_7__::func_988(*uParam0))
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
			__LIB_7__::func_614(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_2514(int iParam0, var uParam1, int iParam2)//Position - 0xEA399
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
					if (__LIB_6__::func_621(iParam0))
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
					if (__LIB_6__::func_621(iParam0))
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
					if (__LIB_6__::func_621(iParam0))
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
					if (__LIB_6__::func_621(iParam0))
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
					if (__LIB_6__::func_621(iParam0))
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
			if (!__LIB_2__::func_159(1) || (__LIB_2__::func_50() && __LIB_6__::func_79(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0))))
			{
				func_1931(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_7__::func_988(iParam0))
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

void func_2538(var uParam0, int iParam1)//Position - 0xEBDD4
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 982996/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 982987/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 982920/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 982478/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 982330/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 982317/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 982090/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 982000/*__LIB_6__::func_624*/;
			break;
		case 39:
			uParam0->f_11 = 981980/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 981875/*__LIB_7__::func_226*/;
			break;
		case 41:
			uParam0->f_20 = 981850/*__LIB_6__::func_459*/;
			break;
		case 42:
			uParam0->f_10 = 981837/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 981773/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 981764/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 981227/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 981218/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 980251/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 980243/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 980234/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 980225/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 980163/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 980082/*__LIB_30__::func_477*/;
			break;
		case 16:
			uParam0->f_5 = 979755/*__LIB_7__::func_491*/;
			break;
		case 108:
			uParam0->f_55 = 979746/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 979734/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 979722/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 979680/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 979671/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 979623/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 979568/*__LIB_6__::func_472*/;
			break;
		case 75:
			uParam0->f_4 = 979559/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 979452/*__LIB_6__::func_623*/;
			break;
		case 23:
			uParam0->f_26 = 979444/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 979017/*func_2615*/;
			break;
		case 27:
			uParam0->f_25 = 979009/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 979001/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 978966/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 978936/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 978769/*__LIB_7__::func_298*/;
			break;
		case 76:
			uParam0->f_13 = 978746/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 975132/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 975087/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 971893/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 971884/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 971875/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 971867/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 971856/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 971685/*__LIB_6__::func_622*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 970412/*func_2588*/;
			break;
		case 49:
			uParam0->f_8 = 970403/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 969978/*__LIB_6__::func_823*/;
			break;
		case 51:
			*uParam0 = 969969/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 969958/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 969935/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 969927/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 969918/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 969905/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 969863/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 969854/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 969845/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 969834/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 969823/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 969814/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 969806/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 969798/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 969185/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 969115/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 968426/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 968417/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 968405/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 968396/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 968384/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 968375/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 968366/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 968357/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 968348/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 968339/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 968331/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 968322/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 968313/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 968304/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 968296/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 968288/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 968276/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 968267/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 873105/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 968258/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 968249/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 927285/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 968241/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 968232/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 968224/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2588(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xECEAC
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
		if (__LIB_7__::func_226(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_1931(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
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
		iVar5 = __LIB_7__::func_404(__LIB_3__::func_661(4, iParam3));
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

void func_2615(int iParam0, int iParam1)//Position - 0xEF049
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_1931(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_298(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_298(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_615();
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_615();
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2659(var uParam0, int iParam1)//Position - 0xEFFDD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1043530/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1043474/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 1042812/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 1042685/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 1042651/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 1042640/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 1042576/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 1042553/*__LIB_6__::func_461*/;
			break;
		case 79:
			*uParam0 = 1042544/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 1042424/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 1042327/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 1042318/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 1041928/*__LIB_7__::func_577*/;
			break;
		case 109:
			uParam0->f_56 = 1041618/*__LIB_7__::func_302*/;
			break;
		case 15:
			uParam0->f_2 = 1039720/*__LIB_24__::func_387*/;
			break;
		case 13:
			uParam0->f_2 = 1039711/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1039702/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 1039319/*__LIB_30__::func_666*/;
			break;
		case 108:
			uParam0->f_55 = 1035401/*__LIB_30__::func_762*/;
			break;
		case 17:
			uParam0->f_17 = 1034658/*__LIB_15__::func_638*/;
			break;
		case 19:
			uParam0->f_17 = 1034631/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 1034462/*__LIB_11__::func_504*/;
			break;
		case 21:
			uParam0->f_3 = 1034399/*__LIB_6__::func_303*/;
			break;
		case 74:
			uParam0->f_53 = 1034247/*__LIB_6__::func_89*/;
			break;
		case 22:
			uParam0->f_24 = 1034162/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 1033225/*func_2885*/;
			break;
		case 30:
			uParam0->f_8 = 1031893/*__LIB_22__::func_441*/;
			break;
		case 31:
			uParam0->f_39 = 1031307/*__LIB_11__::func_503*/;
			break;
		case 33:
			uParam0->f_40 = 1030110/*__LIB_11__::func_530*/;
			break;
		case 14:
			uParam0->f_11 = 1030101/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 1027334/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 1027281/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1021829/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 1021820/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1021811/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1021803/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1021780/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 1021728/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 1021703/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1021665/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1021623/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1021612/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 1021533/*__LIB_6__::func_630*/;
			break;
		case 54:
			uParam0->f_45 = 1021525/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1021516/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1021506/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1021259/*__LIB_10__::func_418*/;
			break;
		case 64:
			uParam0->f_47 = 1020264/*__LIB_30__::func_452*/;
			break;
		case 65:
			uParam0->f_21 = 1019071/*__LIB_7__::func_537*/;
			break;
		case 66:
			uParam0->f_21 = 1018012/*__LIB_7__::func_54*/;
			break;
		case 67:
			uParam0->f_21 = 1017836/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 1016312/*__LIB_7__::func_407*/;
			break;
		case 69:
			*uParam0 = 1016303/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1016291/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1016282/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1016270/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1015435/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 1015426/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1014754/*__LIB_11__::func_940*/;
			break;
		case 85:
			uParam0->f_1 = 1013881/*func_2799*/;
			break;
		case 87:
			uParam0->f_1 = 1012668/*__LIB_11__::func_952*/;
			break;
		case 88:
			uParam0->f_1 = 1012648/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 1012554/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 1012423/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 1011777/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 1011009/*func_2781*/;
			break;
		case 94:
			uParam0->f_1 = 1010456/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 1009860/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 1009502/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 1009409/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 1008541/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 989643/*func_2713*/;
			break;
		case 100:
			uParam0->f_22 = 986359/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 985196/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 984988/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 984548/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 984539/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 984427/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 984384/*__LIB_3__::func_870*/;
			break;
	}
}

int func_2713(var uParam0, var uParam1)//Position - 0xF19CB
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
		func_2729(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
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
			func_1745(&iVar9, &(uParam1->f_109), 4);
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
		if (__LIB_6__::func_625())
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

int func_2729(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xF248E
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_1740(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_2730(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_2730(var uParam0, bool bParam1)//Position - 0xF24EC
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_5__::func_799(bParam1))
	{
		iVar0 = __LIB_12__::func_439(bParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_2734(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_475(), __LIB_3__::func_904(__LIB_6__::func_299(bParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(bParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(bParam1, 0), __LIB_6__::func_626(bParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_2734(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xF260D
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
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_626(PLAYER::PLAYER_ID(), 2));
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
									__LIB_6__::func_724(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_1742(*uParam0))
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
										func_545(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_545(*uParam0, uParam0->f_4, uParam0->f_8);
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
										func_738(*uParam0);
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
											func_651(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
											func_651(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
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
												func_651(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_651(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
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
									func_2737(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_678(*uParam0, bVar24, 0, iVar25);
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
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_626(PLAYER::PLAYER_ID(), 2));
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
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_626(PLAYER::PLAYER_ID(), 2));
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

void func_2737(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0xF3BFC
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
		bVar2 = func_716(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_707(iParam0, iParam3);
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

int func_2781(var uParam0, var uParam1)//Position - 0xF6D41
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
			func_1745(&iVar2, &(uParam1->f_109), 4);
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
			func_2729(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
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

int func_2799(int iParam0, var uParam1)//Position - 0xF7879
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
	if (__LIB_11__::func_648())
	{
		return 1;
	}
	iVar0 = __LIB_3__::func_616();
	iVar1 = __LIB_6__::func_300();
	Var2 = { __LIB_7__::func_406(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_2729(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_3__::func_921(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_299(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_1745(&iVar1, &(uParam1->f_109), 32);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_7__::func_405(iParam0, iVar0));
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

void func_2885(int iParam0, int iParam1)//Position - 0xFC409
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
	if (__LIB_11__::func_504(PLAYER::PLAYER_ID(), iParam0))
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
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_3__::func_234(bVar7, PLAYER::PLAYER_ID()))
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
						__LIB_11__::func_530(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_11__::func_530(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_10__::func_419(1);
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2886(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_10__::func_419(1);
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2886(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_2886(int iParam0, bool bParam1)//Position - 0xFC698
{
	__LIB_11__::func_530(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_5__::func_457(2);
	}
}

void func_2948(var uParam0, int iParam1)//Position - 0xFEC53
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1064563/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1064554/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1064487/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 1064159/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 1063998/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 1063985/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 1063921/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 1063912/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1063576/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 1063567/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1062824/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 1062816/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1062807/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1062798/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 1062785/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 1062776/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1062697/*__LIB_30__::func_478*/;
			break;
		case 16:
			uParam0->f_5 = 1062353/*__LIB_6__::func_732*/;
			break;
		case 108:
			uParam0->f_55 = 1062344/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1061813/*__LIB_11__::func_903*/;
			break;
		case 19:
			uParam0->f_17 = 1061757/*__LIB_6__::func_730*/;
			break;
		case 18:
			uParam0->f_8 = 1061669/*__LIB_6__::func_638*/;
			break;
		case 20:
			uParam0->f_3 = 1061649/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 1061622/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 1061600/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 1061591/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1061484/*__LIB_6__::func_637*/;
			break;
		case 23:
			uParam0->f_26 = 1061476/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1061468/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1060707/*func_3025*/;
			break;
		case 27:
			uParam0->f_25 = 1060699/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1060691/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1060580/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 1060530/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 1060461/*__LIB_7__::func_303*/;
			break;
		case 76:
			uParam0->f_13 = 1060438/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 1056365/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 1056308/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 1050090/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 1050081/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1050072/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1050064/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1050053/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1049940/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1048967/*__LIB_30__::func_625*/;
			break;
		case 49:
			uParam0->f_8 = 1048958/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1048621/*__LIB_6__::func_729*/;
			break;
		case 51:
			*uParam0 = 1048612/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1048602/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 1048579/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 1048081/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 1048072/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1048063/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1048021/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 1048012/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1048003/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1047992/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1047981/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1047972/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1047964/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1047956/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1047646/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 1047576/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1046887/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1046878/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1046866/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1046857/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1046845/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1046836/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1046827/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1046818/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 1046809/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 1046800/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1046792/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1046767/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 1046657/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1045940/*func_2959*/;
			break;
		case 100:
			uParam0->f_22 = 1045238/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1045110/*__LIB_11__::func_953*/;
			break;
		case 112:
			uParam0->f_13 = 1045098/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1045089/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 873105/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 1045080/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 1045071/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 927285/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 1045063/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 1045054/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 1045046/*__LIB_0__::func_467*/;
			break;
	}
}

int func_2959(var uParam0, var uParam1)//Position - 0xFF5B4
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
		func_2729(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
	__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

void func_3025(int iParam0, int iParam1)//Position - 0x102F63
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
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_1932(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_1932(bVar7))
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
						__LIB_7__::func_303(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_7__::func_617(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_7__::func_617(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_3026())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_3026()//Position - 0x1031F1
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_3067(var uParam0, int iParam1)//Position - 0x103E7C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1073268/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1073259/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1073188/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 1072949/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 1072898/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 1072885/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 1072821/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 1072812/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1072372/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 1072363/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1071682/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 1071674/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1071665/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1071656/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 1071594/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 1071514/*__LIB_30__::func_479*/;
			break;
		case 16:
			uParam0->f_5 = 1071145/*__LIB_6__::func_734*/;
			break;
		case 108:
			uParam0->f_55 = 1071136/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1071124/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 1071112/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1071103/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1071094/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1071072/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 1071063/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1071051/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 1071043/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1071035/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1071027/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 1071019/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1071011/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1070976/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 1070946/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 1070876/*__LIB_7__::func_304*/;
			break;
		case 76:
			uParam0->f_13 = 1070853/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 1070757/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 1070712/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1068199/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 1068190/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1068181/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1068173/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1068162/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1068120/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1068012/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 1068003/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1067800/*__LIB_6__::func_733*/;
			break;
		case 51:
			*uParam0 = 1067791/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1067780/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 1067757/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 1067749/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1067740/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1067727/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 1067685/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 1067676/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1067667/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1067656/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1067645/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1067636/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1067628/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1067620/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1067387/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 1067317/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1066628/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1066619/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1066607/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1066598/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1066586/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1066577/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1066568/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1066559/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 1066550/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 1066541/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1066533/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1066524/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1066515/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1066506/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 1066498/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1066490/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 1066478/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1066469/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 873105/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 1066460/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 1066451/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 927285/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 1066443/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 1066434/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 1066426/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3161(var uParam0, int iParam1)//Position - 0x10607D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1150423/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1150409/*__LIB_7__::func_310*/;
			break;
		case 1:
			uParam0->f_30 = 1150254/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 1149772/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 1149573/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 1149451/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 1149441/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 1149303/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 1149258/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 1149174/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 1149080/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 1149071/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1147893/*__LIB_10__::func_538*/;
			break;
		case 14:
			uParam0->f_11 = 1147884/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 1141224/*__LIB_6__::func_645*/;
			break;
		case 8:
			uParam0->f_37 = 1140924/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 1140867/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 1140623/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 1140561/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 1140481/*__LIB_30__::func_480*/;
			break;
		case 16:
			uParam0->f_5 = 1139761/*__LIB_11__::func_904*/;
			break;
		case 108:
			uParam0->f_55 = 1136569/*__LIB_30__::func_828*/;
			break;
		case 17:
			uParam0->f_17 = 1134283/*__LIB_30__::func_434*/;
			break;
		case 19:
			uParam0->f_17 = 1134256/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 1134080/*__LIB_6__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1134016/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1133912/*__LIB_6__::func_77*/;
			break;
		case 75:
			uParam0->f_4 = 1133896/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 1133789/*__LIB_6__::func_642*/;
			break;
		case 23:
			uParam0->f_26 = 1133742/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 1133705/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 1131660/*func_3311*/;
			break;
		case 25:
			uParam0->f_23 = 1131338/*func_3309*/;
			break;
		case 30:
			uParam0->f_8 = 1130479/*__LIB_7__::func_308*/;
			break;
		case 31:
			uParam0->f_39 = 1130341/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 1129769/*__LIB_7__::func_307*/;
			break;
		case 32:
			*uParam0 = 1129555/*__LIB_12__::func_676*/;
			break;
		case 34:
			uParam0->f_41 = 1127069/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 1127012/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 1100044/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 1100035/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1100026/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1100018/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1099995/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 1099923/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1099795/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 1099769/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 1099082/*__LIB_7__::func_498*/;
			break;
		case 51:
			*uParam0 = 1098920/*__LIB_22__::func_281*/;
			break;
		case 52:
			uParam0->f_15 = 1098909/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 1098747/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 1098261/*func_3274*/;
			break;
		case 56:
			uParam0->f_46 = 1098243/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 1097991/*__LIB_7__::func_414*/;
			break;
		case 58:
			uParam0->f_13 = 1097829/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 1097332/*__LIB_7__::func_497*/;
			break;
		case 60:
			*uParam0 = 1097317/*__LIB_7__::func_306*/;
			break;
		case 61:
			uParam0->f_15 = 1097306/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1097144/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 1096965/*__LIB_7__::func_305*/;
			break;
		case 63:
			uParam0->f_11 = 1096938/*__LIB_11__::func_650*/;
			break;
		case 64:
			uParam0->f_47 = 1095505/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 1094118/*__LIB_7__::func_539*/;
			break;
		case 66:
			uParam0->f_21 = 1093759/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 1093645/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 1092685/*__LIB_7__::func_413*/;
			break;
		case 69:
			*uParam0 = 1092676/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1092664/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1092120/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 1092108/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1091920/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 1091911/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1090325/*func_3235*/;
			break;
		case 87:
			uParam0->f_1 = 1088807/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 1088798/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1088790/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1088760/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 1088315/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 1083831/*__LIB_30__::func_595*/;
			break;
		case 100:
			uParam0->f_22 = 1075941/*__LIB_7__::func_495*/;
			break;
		case 101:
			uParam0->f_22 = 1075000/*__LIB_12__::func_161*/;
			break;
		case 112:
			uParam0->f_13 = 1074989/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 1074980/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 1074971/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 1074962/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1074790/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 1074767/*__LIB_4__::func_29*/;
			break;
	}
}

int func_3235(int iParam0, var uParam1)//Position - 0x10A315
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
			func_1745(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1739(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_3274(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x10C215
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_6__::func_94(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)) && !__LIB_6__::func_94(__LIB_0__::func_797(), __LIB_4__::func_71(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_6__::func_94(bVar1, __LIB_4__::func_71(iParam0)) && __LIB_6__::func_387(bVar1))
				{
					Var3 = { __LIB_1__::func_696(bVar1) };
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
								*iParam2 = func_3275(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								__LIB_1__::func_540(iParam2, 18);
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
int func_3275(struct<3> Param0, bool bParam1)//Position - 0x10C38E
{
	int iVar0;
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, __LIB_0__::func_373(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_3309(int iParam0, int iParam1)//Position - 0x11434A
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_67(iParam0, 0) };
	if (__LIB_6__::func_643(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1931(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_307(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_307(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_618(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_618(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3311(var uParam0, var uParam1)//Position - 0x11448C
{
	if (__LIB_3__::func_616() == 3)
	{
		func_3315(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_6__::func_94(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_6__::func_462(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_3313(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_3313(var uParam0, var uParam1)//Position - 0x114515
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1931(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
			__LIB_7__::func_307(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_3315(var uParam0, var uParam1)//Position - 0x114633
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_15__::func_655(uParam0, uParam1);
			break;
		case 1:
			func_3320(uParam0, uParam1);
			break;
		case 2:
			__LIB_30__::func_453(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3320(var uParam0, var uParam1)//Position - 0x1149B6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1931(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
		if (__LIB_7__::func_992(*uParam0))
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
			__LIB_7__::func_307(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_3378(var uParam0, int iParam1)//Position - 0x118DE0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1166660/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1166651/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1166584/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 1166136/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 1166031/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 1166018/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 1165954/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 1165945/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1165484/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 1165475/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1165078/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 1165070/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1165061/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1165037/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1164975/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 1164896/*__LIB_30__::func_481*/;
			break;
		case 16:
			uParam0->f_5 = 1164599/*__LIB_6__::func_738*/;
			break;
		case 108:
			uParam0->f_55 = 1164590/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1164578/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 1164551/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 1164542/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1164533/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1164511/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 1164502/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1164494/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 1164486/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1164478/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1164146/*func_3450*/;
			break;
		case 27:
			uParam0->f_25 = 1164138/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1164130/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1163809/*__LIB_18__::func_490*/;
			break;
		case 31:
			uParam0->f_39 = 1163779/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 1163710/*__LIB_7__::func_303*/;
			break;
		case 34:
			uParam0->f_41 = 1159976/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 1159931/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1156764/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 1156755/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1156746/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1156738/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1156727/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1156614/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1155491/*__LIB_7__::func_418*/;
			break;
		case 49:
			uParam0->f_8 = 1155482/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1155473/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1155464/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 1155453/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 1155442/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1155434/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1155425/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1155416/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1155374/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 1155365/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1155356/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1155345/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1155334/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1155325/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1155317/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1155309/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1155006/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 1154936/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1154287/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 1154278/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1154270/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 1154261/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1154249/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1153815/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 1153790/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 1153773/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 1153231/*func_3400*/;
			break;
		case 87:
			uParam0->f_1 = 1152188/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 1152179/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1152171/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1152162/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1152153/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1152144/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 1152136/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1152128/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 1152116/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1152107/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1151804/*__LIB_7__::func_798*/;
			break;
	}
}

int func_3400(var uParam0, var uParam1)//Position - 0x1198CF
{
	return func_3401(uParam1);
}

int func_3401(var uParam0)//Position - 0x1198DD
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
			func_1745(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_1739(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_3450(int iParam0, int iParam1)//Position - 0x11C372
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
		func_1931(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_303(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_303(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_617(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_617(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3488(var uParam0, int iParam1)//Position - 0x11CD4D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1201778/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1201755/*__LIB_6__::func_469*/;
			break;
		case 1:
			uParam0->f_30 = 1201627/*__LIB_7__::func_321*/;
			break;
		case 2:
			uParam0->f_31 = 1200960/*__LIB_7__::func_320*/;
			break;
		case 3:
			uParam0->f_34 = 1200697/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 1200684/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 1200674/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 1200475/*__LIB_6__::func_468*/;
			break;
		case 38:
			uParam0->f_9 = 1200427/*__LIB_15__::func_639*/;
			break;
		case 42:
			uParam0->f_10 = 1200391/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 1200276/*__LIB_7__::func_229*/;
			break;
		case 11:
			uParam0->f_11 = 1200267/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 1199337/*__LIB_30__::func_638*/;
			break;
		case 14:
			uParam0->f_11 = 1199328/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 1198152/*__LIB_30__::func_570*/;
			break;
		case 8:
			uParam0->f_37 = 1198108/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 1198085/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 1198061/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1197999/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 1197920/*__LIB_30__::func_482*/;
			break;
		case 16:
			uParam0->f_5 = 1197246/*__LIB_30__::func_579*/;
			break;
		case 108:
			uParam0->f_55 = 1193963/*__LIB_30__::func_829*/;
			break;
		case 17:
			uParam0->f_17 = 1193023/*__LIB_30__::func_435*/;
			break;
		case 19:
			uParam0->f_17 = 1192977/*__LIB_7__::func_318*/;
			break;
		case 20:
			uParam0->f_3 = 1192804/*__LIB_6__::func_649*/;
			break;
		case 21:
			uParam0->f_3 = 1192719/*__LIB_6__::func_467*/;
			break;
		case 74:
			uParam0->f_53 = 1192579/*__LIB_6__::func_466*/;
			break;
		case 75:
			uParam0->f_4 = 1192563/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 1192456/*__LIB_6__::func_648*/;
			break;
		case 23:
			uParam0->f_26 = 1192409/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 1192372/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 1190961/*func_3596*/;
			break;
		case 25:
			uParam0->f_23 = 1190595/*func_3593*/;
			break;
		case 27:
			uParam0->f_25 = 1189781/*__LIB_6__::func_740*/;
			break;
		case 28:
			uParam0->f_24 = 1189740/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 1189505/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 1189180/*__LIB_18__::func_491*/;
			break;
		case 31:
			uParam0->f_39 = 1188980/*__LIB_7__::func_228*/;
			break;
		case 43:
			uParam0->f_8 = 1188874/*__LIB_7__::func_993*/;
			break;
		case 33:
			uParam0->f_40 = 1188558/*__LIB_7__::func_317*/;
			break;
		case 34:
			uParam0->f_41 = 1183566/*__LIB_7__::func_316*/;
			break;
		case 36:
			uParam0->f_58 = 1183509/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 1177304/*__LIB_7__::func_623*/;
			break;
		case 45:
			uParam0->f_14 = 1177295/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1177286/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1177278/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1177255/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 1177242/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 1176939/*__LIB_7__::func_314*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1174776/*__LIB_30__::func_721*/;
			break;
		case 49:
			uParam0->f_8 = 1174728/*__LIB_7__::func_227*/;
			break;
		case 50:
			*uParam0 = 1174536/*__LIB_6__::func_739*/;
			break;
		case 51:
			*uParam0 = 1174527/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1174516/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 1174474/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 1174466/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1174457/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1174448/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1174406/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 1174397/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1174388/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1174377/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1174347/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 1174338/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1174330/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1173244/*__LIB_7__::func_540*/;
			break;
		case 66:
			uParam0->f_21 = 1172903/*__LIB_7__::func_312*/;
			break;
		case 67:
			uParam0->f_21 = 1172789/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 1171961/*__LIB_7__::func_419*/;
			break;
		case 69:
			*uParam0 = 1171952/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1171940/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1171848/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 1171836/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1171648/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 1171639/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1171625/*func_3527*/;
			break;
		case 87:
			uParam0->f_1 = 1171609/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 1171600/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1171592/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1171583/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1171140/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 1169678/*func_3509*/;
			break;
		case 100:
			uParam0->f_22 = 1168799/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 1168622/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 1168610/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1168596/*__LIB_6__::func_465*/;
			break;
		case 114:
			uParam0->f_16 = 873105/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 927285/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 1168587/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 1168486/*__LIB_8__::func_25*/;
			break;
		case 120:
			uParam0->f_19 = 1168461/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 1168289/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 1168262/*__LIB_4__::func_124*/;
			break;
	}
}

int func_3509(int iParam0, var uParam1)//Position - 0x11D90E
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_3510(iParam0, uParam1);
	}
	return 1;
}

int func_3510(int iParam0, var uParam1)//Position - 0x11D92B
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
		if (func_1740(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
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

int func_3527(var uParam0, var uParam1)//Position - 0x11E0A9
{
	return func_3401(uParam1);
}

void func_3593(int iParam0, int iParam1)//Position - 0x122AC3
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_154(iParam0) };
	if (__LIB_6__::func_649(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1931(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_317(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_317(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_624(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_624(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3596(var uParam0, var uParam1)//Position - 0x122C31
{
	if (__LIB_6__::func_91(PLAYER::PLAYER_ID()) || __LIB_6__::func_99(PLAYER::PLAYER_ID()))
	{
		func_3597(uParam0, uParam1);
	}
}

void func_3597(var uParam0, var uParam1)//Position - 0x122C5D
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_3608(*uParam0, 0, 0))
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
			func_3603(uParam0, uParam1);
			break;
		case 1:
			func_3599(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3599(var uParam0, var uParam1)//Position - 0x122D1C
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
	func_1931(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_6__::func_455(iVar5);
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
			__LIB_30__::func_216(iVar1[uParam0->f_4]);
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

void func_3603(var uParam0, var uParam1)//Position - 0x122F1D
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
	if (!__LIB_6__::func_91(PLAYER::PLAYER_ID()) && __LIB_6__::func_99(PLAYER::PLAYER_ID()))
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
			else if (func_3608(*uParam0, 0, 0))
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

int func_3608(int iParam0, bool bParam1, bool bParam2)//Position - 0x123182
{
	int iVar0;
	int iVar1;
	func_1931(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_3666(var uParam0, int iParam1)//Position - 0x12567B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1231100/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1231091/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1231024/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 1230671/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 1230438/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 1230425/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 1230361/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 1230352/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 1229627/*__LIB_7__::func_324*/;
			break;
		case 14:
			uParam0->f_11 = 1229618/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1228468/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 1228460/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1228451/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1228427/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1228355/*__LIB_30__::func_468*/;
			break;
		case 15:
			uParam0->f_2 = 1228266/*__LIB_30__::func_483*/;
			break;
		case 16:
			uParam0->f_5 = 1227906/*__LIB_6__::func_748*/;
			break;
		case 108:
			uParam0->f_55 = 1227767/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 1227090/*__LIB_24__::func_147*/;
			break;
		case 19:
			uParam0->f_17 = 1227063/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 1227054/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1227006/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 1226951/*__LIB_6__::func_472*/;
			break;
		case 75:
			uParam0->f_4 = 1226838/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 1226830/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 1226822/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1224264/*func_3774*/;
			break;
		case 25:
			uParam0->f_23 = 1224256/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 1224248/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1224240/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1223959/*__LIB_18__::func_392*/;
			break;
		case 31:
			uParam0->f_39 = 1223929/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 1223860/*__LIB_7__::func_303*/;
			break;
		case 76:
			uParam0->f_13 = 1223837/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 1221283/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 1221238/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1221142/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 1221133/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1221124/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1221116/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1221105/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1220992/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1220145/*__LIB_30__::func_618*/;
			break;
		case 49:
			uParam0->f_8 = 1220136/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1219923/*__LIB_6__::func_746*/;
			break;
		case 51:
			*uParam0 = 1219914/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1219903/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 1219861/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 1219822/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 1219813/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 1219771/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 1219729/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 1219720/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1219711/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1219700/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1219689/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1219680/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1219594/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 1219586/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1219245/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 1219175/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1218478/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 1218469/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1218396/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 1218387/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1218375/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1218366/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1217839/*__LIB_6__::func_745*/;
			break;
		case 85:
			uParam0->f_1 = 1216283/*func_3724*/;
			break;
		case 87:
			uParam0->f_1 = 1213051/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 1213036/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 1212674/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 1212380/*__LIB_6__::func_744*/;
			break;
		case 97:
			uParam0->f_1 = 1211873/*func_3703*/;
			break;
		case 98:
			uParam0->f_1 = 1210239/*func_3701*/;
			break;
		case 100:
			uParam0->f_22 = 1209960/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 1209455/*__LIB_11__::func_956*/;
			break;
		case 112:
			uParam0->f_13 = 1209443/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1209434/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 873105/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 1209323/*__LIB_6__::func_743*/;
			break;
		case 116:
			*uParam0 = 1209275/*__LIB_6__::func_471*/;
			break;
		case 117:
			uParam0->f_16 = 927285/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 1168587/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 1168486/*__LIB_8__::func_25*/;
			break;
		case 120:
			uParam0->f_19 = 1168461/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 1209267/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 1203367/*func_3668*/;
			break;
		case 125:
			uParam0->f_19 = 1203311/*__LIB_4__::func_175*/;
			break;
	}
}

int func_3668(int iParam0, int* iParam1)//Position - 0x125CA7
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
			__LIB_30__::func_669(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_5__::func_457(0);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(3);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(4);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
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
				if (__LIB_6__::func_745(iParam0, iParam1))
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
				if (func_3724(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_3679(iParam1))
			{
				__LIB_4__::func_181(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_3__::func_616() == 0)
			{
				__LIB_12__::func_165(&(Global_1946250.f_3638), 0, 1);
				__LIB_7__::func_843(iParam0, iParam1);
				if (__LIB_3__::func_630(&(Global_1946250.f_3638), 0))
				{
					__LIB_19__::func_92(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_4__::func_181(iParam1, 4);
				}
			}
			else
			{
				__LIB_6__::func_741(iParam1);
				__LIB_19__::func_92(&iParam0);
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
				__LIB_12__::func_165(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_7__::func_843(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_30__::func_669(iParam1);
				}
			}
			else if (__LIB_6__::func_741(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_30__::func_669(iParam1);
			}
			break;
	}
	return 1;
}

int func_3679(int* iParam0)//Position - 0x126A45
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
		func_2729(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

int func_3701(int iParam0, var uParam1)//Position - 0x12777F
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_3510(iParam0, uParam1);
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
		__LIB_5__::func_943(1, 1, 1, 0, 0, 0, 0);
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
			func_2729(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

int func_3703(int iParam0, var uParam1)//Position - 0x127DE1
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
				if (!func_3704(&(uParam1->f_2), Global_1946250.f_4539))
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

int func_3704(var uParam0, int iParam1)//Position - 0x127EF0
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
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_551(*uParam0, 14, 0), -1))
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

int func_3724(int iParam0, int* iParam1)//Position - 0x128F1B
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
		if (!func_1740(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
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
			func_1745(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_1740(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
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
			func_2729(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

void func_3774(var uParam0, var uParam1)//Position - 0x12AE48
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (__LIB_3__::func_616() == 0 || __LIB_3__::func_616() == 2)
	{
		if (!__LIB_6__::func_93(PLAYER::PLAYER_ID()) || __LIB_3__::func_597())
		{
			if (!__LIB_3__::func_597())
			{
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					__LIB_30__::func_217(1, *uParam0);
				}
			}
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				__LIB_30__::func_217(1, *uParam0);
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
			func_3778(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_3775(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3775(var uParam0, var uParam1)//Position - 0x12AF86
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
	func_1931(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_4__::func_155();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_6__::func_455(iVar9);
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
				__LIB_30__::func_217(iVar5[uParam0->f_4], 123);
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
				__LIB_30__::func_217(iVar5[uParam0->f_4], 146);
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
				__LIB_30__::func_217(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
	}
}

void func_3778(var uParam0, var uParam1)//Position - 0x12B212
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
		uVar0 = __LIB_7__::func_323(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_7__::func_627(&uVar1, &uVar2, &uVar3, &iVar5);
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
				func_3780(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_3779(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_3779(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x12B32F
{
	if (iParam1 == 0)
	{
		if (func_3608(iParam0, 0, 0))
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
		if (func_3608(iParam0, 0, 0))
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
		if (func_3608(iParam0, 1, 0))
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
		if (func_3608(iParam0, 0, 0))
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

void func_3780(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x12B437
{
	if (iParam1 == 0)
	{
		if (func_3608(iParam0, 0, 0))
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
		if (func_3608(iParam0, 0, 0))
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

void func_3823(var uParam0, int iParam1)//Position - 0x12C905
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1266745/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1266731/*__LIB_7__::func_328*/;
			break;
		case 1:
			uParam0->f_30 = 1266633/*__LIB_7__::func_233*/;
			break;
		case 2:
			uParam0->f_31 = 1265569/*__LIB_7__::func_327*/;
			break;
		case 3:
			uParam0->f_34 = 1265415/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 1265361/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 1265306/*__LIB_6__::func_476*/;
			break;
		case 37:
			uParam0->f_18 = 1265186/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 1265054/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 1264939/*__LIB_7__::func_232*/;
			break;
		case 11:
			uParam0->f_11 = 1264929/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 1263760/*__LIB_7__::func_326*/;
			break;
		case 14:
			uParam0->f_11 = 1263751/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1262407/*__LIB_30__::func_572*/;
			break;
		case 8:
			uParam0->f_37 = 1262363/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 1262340/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 1262316/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1262253/*__LIB_30__::func_469*/;
			break;
		case 15:
			uParam0->f_2 = 1262173/*__LIB_30__::func_484*/;
			break;
		case 16:
			uParam0->f_5 = 1261529/*__LIB_30__::func_580*/;
			break;
		case 108:
			uParam0->f_55 = 1258389/*__LIB_30__::func_830*/;
			break;
		case 17:
			uParam0->f_17 = 1257684/*__LIB_22__::func_443*/;
			break;
		case 19:
			uParam0->f_17 = 1257657/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 1257478/*__LIB_6__::func_658*/;
			break;
		case 21:
			uParam0->f_3 = 1257414/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1257140/*__LIB_11__::func_905*/;
			break;
		case 75:
			uParam0->f_4 = 1257124/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 1257017/*__LIB_6__::func_657*/;
			break;
		case 23:
			uParam0->f_26 = 1256970/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 1256933/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 1256103/*func_3927*/;
			break;
		case 25:
			uParam0->f_23 = 1255737/*func_3924*/;
			break;
		case 27:
			uParam0->f_25 = 1255355/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 1255304/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 1255296/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1255059/*__LIB_7__::func_427*/;
			break;
		case 31:
			uParam0->f_39 = 1254935/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 1254515/*__LIB_7__::func_325*/;
			break;
		case 34:
			uParam0->f_41 = 1243221/*__LIB_7__::func_502*/;
			break;
		case 36:
			uParam0->f_58 = 1243176/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1240089/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 1240080/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1240071/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1240063/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1240014/*__LIB_7__::func_230*/;
			break;
		case 47:
			uParam0->f_43 = 1239932/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1239168/*__LIB_7__::func_426*/;
			break;
		case 49:
			uParam0->f_8 = 1239121/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 1239062/*__LIB_6__::func_749*/;
			break;
		case 51:
			*uParam0 = 1238830/*__LIB_22__::func_282*/;
			break;
		case 52:
			uParam0->f_15 = 1238819/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 1238777/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 1238769/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1238760/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1238751/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1238709/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 1238700/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1238691/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1238680/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1238638/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 1238629/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1238621/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1237559/*__LIB_7__::func_542*/;
			break;
		case 66:
			uParam0->f_21 = 1237256/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 1237142/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 1236299/*__LIB_7__::func_425*/;
			break;
		case 69:
			*uParam0 = 1236290/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1236217/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 1236208/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1236196/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1235994/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 1235985/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1234252/*func_3842*/;
			break;
		case 87:
			uParam0->f_1 = 1232797/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 1232788/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1232780/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1232771/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1232762/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1232753/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 1232745/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1232737/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 1232565/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 1232532/*__LIB_4__::func_215*/;
			break;
	}
}

int func_3842(int iParam0, var uParam1)//Position - 0x12D54C
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
			func_1745(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1739(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_3924(int iParam0, int iParam1)//Position - 0x132939
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_252(iParam0) };
	if (__LIB_6__::func_658(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1931(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_325(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_325(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_628(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_628(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3927(var uParam0, var uParam1)//Position - 0x132AA7
{
	if (__LIB_6__::func_87(PLAYER::PLAYER_ID()))
	{
		func_3928(uParam0, uParam1);
	}
}

void func_3928(var uParam0, var uParam1)//Position - 0x132AC5
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_15__::func_656(uParam0, uParam1);
			break;
		case 1:
			func_3929(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3929(var uParam0, var uParam1)//Position - 0x132AFF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1931(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_3991(var uParam0, int iParam1)//Position - 0x135442
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1357783/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1357727/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1357383/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1357344/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1357310/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1357299/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1357235/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1357212/*__LIB_6__::func_488*/;
			break;
		case 79:
			*uParam0 = 1357188/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1357068/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1356989/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1356980/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1356384/*__LIB_24__::func_388*/;
			break;
		case 109:
			uParam0->f_56 = 1356376/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1351229/*__LIB_30__::func_654*/;
			break;
		case 13:
			uParam0->f_2 = 1351220/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1351205/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1350730/*__LIB_30__::func_439*/;
			break;
		case 108:
			uParam0->f_55 = 1346759/*__LIB_30__::func_851*/;
			break;
		case 17:
			uParam0->f_17 = 1345978/*__LIB_30__::func_640*/;
			break;
		case 19:
			uParam0->f_17 = 1345951/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1345740/*__LIB_24__::func_289*/;
			break;
		case 21:
			uParam0->f_3 = 1345577/*__LIB_10__::func_539*/;
			break;
		case 74:
			uParam0->f_53 = 1344968/*__LIB_7__::func_505*/;
			break;
		case 22:
			uParam0->f_24 = 1344883/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1343967/*func_4053*/;
			break;
		case 30:
			uParam0->f_8 = 1342989/*__LIB_11__::func_906*/;
			break;
		case 31:
			uParam0->f_39 = 1342312/*__LIB_30__::func_438*/;
			break;
		case 33:
			uParam0->f_40 = 1341469/*__LIB_30__::func_639*/;
			break;
		case 14:
			uParam0->f_11 = 1341460/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 34:
			uParam0->f_41 = 1340685/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1340632/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1272293/*__LIB_7__::func_663*/;
			break;
		case 45:
			uParam0->f_14 = 1272284/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1272275/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1272267/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1272244/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 1272104/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 1272069/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 1272031/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1272007/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1271996/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1271917/*__LIB_22__::func_284*/;
			break;
		case 54:
			uParam0->f_45 = 1271909/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1271900/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1271890/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1271601/*__LIB_22__::func_283*/;
			break;
		case 64:
			uParam0->f_47 = 1270221/*__LIB_30__::func_671*/;
			break;
		case 65:
			uParam0->f_21 = 1269258/*__LIB_7__::func_543*/;
			break;
		case 66:
			uParam0->f_21 = 1269063/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 1268960/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 1268271/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1268262/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1268250/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1268241/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1268229/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1267892/*__LIB_6__::func_661*/;
			break;
		case 73:
			uParam0->f_51 = 1267883/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1267766/*__LIB_7__::func_810*/;
			break;
	}
}

void func_4053(int iParam0, int iParam1)//Position - 0x1481DF
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
	if (__LIB_24__::func_289(PLAYER::PLAYER_ID(), iParam0))
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
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_6__::func_804(PLAYER::PLAYER_ID())) && __LIB_3__::func_234(bVar7, PLAYER::PLAYER_ID()))
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
						__LIB_30__::func_639(iParam0, -1);
					}
					bVar9 = __LIB_6__::func_58(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_30__::func_639(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_22__::func_285(1);
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_2__::func_752(PLAYER::PLAYER_ID()))
						{
							func_4054(iParam0);
						}
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_22__::func_285(1);
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_2__::func_752(PLAYER::PLAYER_ID()))
						{
							func_4054(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4054(int iParam0)//Position - 0x148497
{
	__LIB_30__::func_639(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4125(var uParam0, int iParam1)//Position - 0x14B7E0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1420513/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1420275/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1417972/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1417763/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1417556/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1417478/*__LIB_6__::func_491*/;
			break;
		case 37:
			uParam0->f_18 = 1417338/*__LIB_7__::func_237*/;
			break;
		case 38:
			uParam0->f_9 = 1417282/*__LIB_12__::func_128*/;
			break;
		case 42:
			uParam0->f_10 = 1417245/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1417009/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1416995/*__LIB_7__::func_333*/;
			break;
		case 11:
			uParam0->f_11 = 1416986/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1413616/*__LIB_10__::func_540*/;
			break;
		case 14:
			uParam0->f_11 = 1413607/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1399511/*__LIB_6__::func_489*/;
			break;
		case 79:
			*uParam0 = 1399255/*__LIB_7__::func_332*/;
			break;
		case 13:
			uParam0->f_2 = 1399206/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1398995/*__LIB_30__::func_485*/;
			break;
		case 44:
			*uParam0 = 1398986/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1398957/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1398271/*__LIB_11__::func_910*/;
			break;
		case 108:
			uParam0->f_55 = 1394416/*__LIB_30__::func_831*/;
			break;
		case 17:
			uParam0->f_17 = 1393100/*__LIB_30__::func_440*/;
			break;
		case 19:
			uParam0->f_17 = 1393054/*__LIB_7__::func_331*/;
			break;
		case 20:
			uParam0->f_3 = 1392889/*__LIB_6__::func_669*/;
			break;
		case 21:
			uParam0->f_3 = 1392825/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1392597/*__LIB_11__::func_908*/;
			break;
		case 22:
			uParam0->f_24 = 1392470/*__LIB_6__::func_668*/;
			break;
		case 26:
			uParam0->f_38 = 1389249/*func_4252*/;
			break;
		case 25:
			uParam0->f_23 = 1388928/*func_4250*/;
			break;
		case 27:
			uParam0->f_25 = 1387836/*__LIB_10__::func_983*/;
			break;
		case 28:
			uParam0->f_24 = 1387723/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1387642/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1386752/*__LIB_11__::func_907*/;
			break;
		case 31:
			uParam0->f_39 = 1386202/*__LIB_7__::func_438*/;
			break;
		case 33:
			uParam0->f_40 = 1385520/*__LIB_7__::func_509*/;
			break;
		case 32:
			*uParam0 = 1385480/*__LIB_30__::func_108*/;
			break;
		case 34:
			uParam0->f_41 = 1376212/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1376154/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 1273162/*__LIB_7__::func_431*/;
			break;
		case 45:
			uParam0->f_14 = 1376145/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1376136/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1376128/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1376079/*__LIB_7__::func_236*/;
			break;
		case 47:
			uParam0->f_43 = 1375787/*__LIB_7__::func_235*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1373123/*__LIB_10__::func_552*/;
			break;
		case 49:
			uParam0->f_8 = 1373019/*__LIB_7__::func_234*/;
			break;
		case 50:
			*uParam0 = 1372736/*__LIB_7__::func_435*/;
			break;
		case 51:
			*uParam0 = 1372574/*__LIB_22__::func_288*/;
			break;
		case 52:
			uParam0->f_15 = 1372563/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1372305/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1372043/*__LIB_7__::func_434*/;
			break;
		case 56:
			uParam0->f_46 = 1372034/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1370877/*__LIB_7__::func_508*/;
			break;
		case 58:
			uParam0->f_13 = 1370619/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1370340/*__LIB_6__::func_750*/;
			break;
		case 60:
			*uParam0 = 1370331/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1370320/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1370062/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1370054/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1369996/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1369846/*__LIB_7__::func_631*/;
			break;
		case 65:
			uParam0->f_21 = 1368139/*__LIB_10__::func_703*/;
			break;
		case 66:
			uParam0->f_21 = 1367828/*__LIB_7__::func_330*/;
			break;
		case 67:
			uParam0->f_21 = 1367676/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1366676/*__LIB_7__::func_432*/;
			break;
		case 69:
			*uParam0 = 1366667/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1366218/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1365939/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1365927/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1365694/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1365685/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1363588/*func_4146*/;
			break;
		case 87:
			uParam0->f_1 = 1360693/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1360684/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1360676/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1360650/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1360540/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1359819/*func_4132*/;
			break;
		case 100:
			uParam0->f_22 = 1359655/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1359527/*__LIB_11__::func_953*/;
			break;
		case 78:
			uParam0->f_59 = 1359237/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1359213/*__LIB_4__::func_313*/;
			break;
	}
}

int func_4132(var uParam0, var uParam1)//Position - 0x14BFCB
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
		func_2729(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
	__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

int func_4146(int iParam0, var uParam1)//Position - 0x14CE84
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
			func_1745(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_1739(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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

void func_4250(int iParam0, int iParam1)//Position - 0x153180
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_301(iParam0) };
	if (__LIB_6__::func_669(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_1931(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_509(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_509(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_8__::func_32(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_8__::func_32(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_4252(var uParam0, var uParam1)//Position - 0x1532C1
{
	if (__LIB_3__::func_616() == 2)
	{
		func_4266(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_8__::func_33(uParam0, uParam1);
		}
		else
		{
			func_4254(uParam0, uParam1);
		}
	}
	else if (__LIB_3__::func_616() == 3)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_8__::func_33(uParam0, uParam1);
		}
		else
		{
			__LIB_4__::func_376(uParam1);
		}
	}
}

void func_4254(var uParam0, var uParam1)//Position - 0x15334C
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_15__::func_657(uParam0, uParam1);
			break;
		case 1:
			func_4255(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4255(var uParam0, var uParam1)//Position - 0x153386
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1931(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_6__::func_665(PLAYER::PLAYER_ID()), 0);
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

void func_4266(var uParam0, var uParam1)//Position - 0x1538A3
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_15__::func_658(uParam0, uParam1);
			break;
		case 1:
			func_4273(uParam0, uParam1);
			break;
		case 2:
			__LIB_30__::func_454(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4273(var uParam0, var uParam1)//Position - 0x153CB0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_1931(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
		if (__LIB_7__::func_996(*uParam0))
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
			__LIB_7__::func_509(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_4340(var uParam0, int iParam1)//Position - 0x15ACEA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1428046/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1427991/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1427722/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1427661/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1427630/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1427566/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1427557/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 11:
			uParam0->f_11 = 1427548/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1427539/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 12:
			uParam0->f_33 = 1427328/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1427320/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1427296/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1427287/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1426343/*__LIB_11__::func_942*/;
			break;
		case 75:
			uParam0->f_4 = 1426334/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1426309/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1426300/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1426273/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1426261/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1426252/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1426243/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1425775/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1425652/*__LIB_6__::func_672*/;
			break;
		case 25:
			uParam0->f_23 = 1424880/*func_4382*/;
			break;
		case 30:
			uParam0->f_8 = 1424734/*__LIB_6__::func_492*/;
			break;
		case 31:
			uParam0->f_39 = 1424722/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1424515/*__LIB_10__::func_469*/;
			break;
		case 34:
			uParam0->f_41 = 1424198/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1424145/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1423373/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1423364/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1423355/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1423347/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1423336/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1423097/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1423088/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1423079/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1423070/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1423059/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1423048/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1423040/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1423031/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1423022/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1422729/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1422185/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1422177/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1422109/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1421969/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1421525/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1421516/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1421504/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1421495/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1421483/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1421474/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1421466/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4382(int iParam0, int iParam1)//Position - 0x15BDF0
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
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
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
						__LIB_10__::func_469(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_10__::func_469(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4383(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4383(iParam0);
					}
					Jump @553; //curOff = 534
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4383(int iParam0)//Position - 0x15C01C
{
	__LIB_10__::func_469(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4418(var uParam0, int iParam1)//Position - 0x15CA57
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1526895/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1526792/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1526057/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1525975/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1525832/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1525822/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1525685/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1525618/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1525506/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1525492/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1525483/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1524983/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1524974/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1524966/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1524942/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1524862/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1524766/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1524561/*__LIB_30__::func_486*/;
			break;
		case 75:
			uParam0->f_4 = 1524545/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1523736/*__LIB_11__::func_911*/;
			break;
		case 108:
			uParam0->f_55 = 1519081/*__LIB_30__::func_832*/;
			break;
		case 17:
			uParam0->f_17 = 1518261/*__LIB_22__::func_445*/;
			break;
		case 19:
			uParam0->f_17 = 1518234/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1518150/*__LIB_6__::func_337*/;
			break;
		case 21:
			uParam0->f_3 = 1518086/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1517934/*__LIB_6__::func_89*/;
			break;
		case 22:
			uParam0->f_24 = 1517763/*__LIB_6__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1516713/*func_4600*/;
			break;
		case 30:
			uParam0->f_8 = 1516095/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1515782/*__LIB_6__::func_758*/;
			break;
		case 33:
			uParam0->f_40 = 1514843/*__LIB_7__::func_513*/;
			break;
		case 34:
			uParam0->f_41 = 1513483/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1513425/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1465366/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1465357/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1465348/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1465340/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1465317/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1465189/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1465148/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1464880/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1464811/*__LIB_7__::func_759*/;
			break;
		case 52:
			uParam0->f_15 = 1464800/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1464566/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1464216/*func_4575*/;
			break;
		case 56:
			uParam0->f_46 = 1464207/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1464136/*__LIB_7__::func_447*/;
			break;
		case 58:
			uParam0->f_13 = 1463902/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1463702/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1462804/*__LIB_7__::func_545*/;
			break;
		case 66:
			uParam0->f_21 = 1462090/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1459828/*__LIB_7__::func_446*/;
			break;
		case 68:
			*uParam0 = 1459195/*__LIB_7__::func_445*/;
			break;
		case 69:
			*uParam0 = 1459186/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1459174/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1459165/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1459153/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1458460/*__LIB_6__::func_334*/;
			break;
		case 84:
			uParam0->f_1 = 1457919/*func_4525*/;
			break;
		case 85:
			uParam0->f_1 = 1453817/*func_4517*/;
			break;
		case 87:
			uParam0->f_1 = 1449830/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1449316/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1449145/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1448973/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1448807/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1447355/*func_4492*/;
			break;
		case 94:
			uParam0->f_1 = 1443219/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1442923/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1442893/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1442225/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1439575/*func_4455*/;
			break;
		case 100:
			uParam0->f_22 = 1431512/*__LIB_11__::func_958*/;
			break;
		case 101:
			uParam0->f_22 = 1429583/*__LIB_11__::func_957*/;
			break;
		case 78:
			uParam0->f_59 = 1429363/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1429339/*__LIB_4__::func_412*/;
			break;
	}
}

int func_4455(int iParam0, int* iParam1)//Position - 0x15F757
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
			if ((__LIB_1__::func_693(bVar2, 1, 1) && !__LIB_2__::func_154(bVar2)) && !Global_2824892)
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
							func_2729(&(iParam1->f_140[0]), Global_1853191, 1, 0);
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
					if (__LIB_1__::func_693(bVar2, 0, 1) && !__LIB_2__::func_154(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_2729(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
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
				__LIB_22__::func_442(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
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
			func_2729(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_4492(int iParam0, int* iParam1)//Position - 0x1615BB
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
				__LIB_30__::func_746(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_1745(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_4494(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
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
							func_2729(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
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

int func_4494(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x1618CD
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
					func_1740(uParam2[iVar1], iVar3, 1, 0);
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

int func_4517(int iParam0, int* iParam1)//Position - 0x162EF9
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
			func_1745(&iVar0, &(iParam1->f_109), 60);
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
		else if (func_1739(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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
		func_2729(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_4525(int iParam0, var uParam1)//Position - 0x163EFF
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
				else if (!__LIB_30__::func_746(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_1745(&iVar1, &(uParam1->f_122), 24);
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

void func_4575(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x165798
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_6__::func_601(iParam0))
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
					*iParam2 = func_3275(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					__LIB_1__::func_540(iParam2, 166);
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

void func_4600(int iParam0, int iParam1)//Position - 0x1724A9
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
	if (__LIB_6__::func_337(PLAYER::PLAYER_ID(), iParam0))
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
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_2__::func_154(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_1932(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_2__::func_154(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_1932(bVar7))
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
						__LIB_7__::func_513(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_513(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4601(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4601(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4601(int iParam0)//Position - 0x172739
{
	__LIB_7__::func_513(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4652(var uParam0, int iParam1)//Position - 0x174C78
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1554415/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1554360/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1554091/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1554032/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1554001/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1553881/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1553797/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1553733/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1553710/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1553701/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1553248/*__LIB_30__::func_444*/;
			break;
		case 14:
			uParam0->f_11 = 1553239/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1553231/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1553207/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1553198/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1548718/*__LIB_30__::func_722*/;
			break;
		case 75:
			uParam0->f_4 = 1548709/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1548525/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1545428/*__LIB_34__::func_723*/;
			break;
		case 17:
			uParam0->f_17 = 1544918/*__LIB_22__::func_402*/;
			break;
		case 19:
			uParam0->f_17 = 1544891/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1544813/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1544750/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1544535/*__LIB_12__::func_118*/;
			break;
		case 22:
			uParam0->f_24 = 1544412/*__LIB_6__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1543465/*func_4749*/;
			break;
		case 30:
			uParam0->f_8 = 1542901/*__LIB_7__::func_335*/;
			break;
		case 31:
			uParam0->f_39 = 1542722/*__LIB_6__::func_681*/;
			break;
		case 33:
			uParam0->f_40 = 1541610/*__LIB_24__::func_292*/;
			break;
		case 34:
			uParam0->f_41 = 1540916/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1540863/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1540286/*__LIB_6__::func_680*/;
			break;
		case 45:
			uParam0->f_14 = 1540277/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1540268/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1540090/*__LIB_22__::func_446*/;
			break;
		case 77:
			uParam0->f_13 = 1540079/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1539581/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1539540/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1539531/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1539522/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1539511/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1539500/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1539492/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1539483/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1539474/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1539245/*__LIB_24__::func_150*/;
			break;
		case 64:
			uParam0->f_47 = 1533318/*__LIB_30__::func_849*/;
			break;
		case 65:
			uParam0->f_21 = 1531704/*__LIB_22__::func_464*/;
			break;
		case 66:
			uParam0->f_21 = 1531393/*__LIB_6__::func_759*/;
			break;
		case 67:
			uParam0->f_21 = 1530668/*__LIB_11__::func_507*/;
			break;
		case 68:
			*uParam0 = 1530123/*__LIB_7__::func_451*/;
			break;
		case 69:
			*uParam0 = 1530114/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1530102/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1530093/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1530081/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1528365/*__LIB_6__::func_807*/;
			break;
		case 78:
			uParam0->f_59 = 1527915/*__LIB_11__::func_943*/;
			break;
		case 125:
			uParam0->f_19 = 1527899/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4749(int iParam0, int iParam1)//Position - 0x178D29
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1932(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1932(bVar7))
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
						__LIB_24__::func_292(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_24__::func_292(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_24__::func_151(1);
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4750(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_24__::func_151(1);
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4750(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4750(int iParam0)//Position - 0x178FBC
{
	__LIB_24__::func_292(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4816(var uParam0, int iParam1)//Position - 0x17B7F8
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1606929/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1606850/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1606351/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1606301/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1606214/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1606204/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1606084/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1605962/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1605874/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1605860/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1605851/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1605471/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1605462/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1605454/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1605430/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1605298/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1605016/*__LIB_30__::func_487*/;
			break;
		case 75:
			uParam0->f_4 = 1605002/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1604484/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1600860/*__LIB_30__::func_833*/;
			break;
		case 17:
			uParam0->f_17 = 1600321/*__LIB_11__::func_912*/;
			break;
		case 19:
			uParam0->f_17 = 1600294/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1600210/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1600146/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1599966/*__LIB_6__::func_111*/;
			break;
		case 22:
			uParam0->f_24 = 1599819/*__LIB_6__::func_686*/;
			break;
		case 25:
			uParam0->f_23 = 1599195/*func_4940*/;
			break;
		case 30:
			uParam0->f_8 = 1598680/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1598393/*__LIB_6__::func_763*/;
			break;
		case 33:
			uParam0->f_40 = 1597722/*__LIB_7__::func_521*/;
			break;
		case 34:
			uParam0->f_41 = 1596458/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1596413/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1570365/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1570356/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1570347/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1570339/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1570316/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1570212/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1570171/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1569957/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1569888/*__LIB_7__::func_759*/;
			break;
		case 52:
			uParam0->f_15 = 1569877/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1569739/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1569551/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1569542/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1569365/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1569227/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1569219/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1568383/*__LIB_10__::func_704*/;
			break;
		case 66:
			uParam0->f_21 = 1568276/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1568212/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1567724/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1567715/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1567703/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1567694/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1567682/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1566979/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1566879/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1564895/*func_4889*/;
			break;
		case 87:
			uParam0->f_1 = 1562472/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1562463/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1562400/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1562078/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1558071/*func_4838*/;
			break;
		case 100:
			uParam0->f_22 = 1555792/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1555588/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1555572/*__LIB_4__::func_516*/;
			break;
	}
}

int func_4838(int iParam0, int* iParam1)//Position - 0x17C637
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_1745(&iVar0, &(iParam1->f_109), 12);
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

int func_4889(int iParam0, int* iParam1)//Position - 0x17E0DF
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
			func_1745(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_1739(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_2729(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4940(int iParam0, int iParam1)//Position - 0x1866DB
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
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_1932(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_1932(bVar7))
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
						__LIB_7__::func_521(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_521(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4941(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4941(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4941(int iParam0)//Position - 0x18691D
{
	__LIB_7__::func_521(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4984(var uParam0, int iParam1)//Position - 0x18851A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1615554/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1615499/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1615280/*__LIB_6__::func_912*/;
			break;
		case 3:
			uParam0->f_34 = 1615229/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1615195/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1615131/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1615122/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 79:
			*uParam0 = 1615098/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1615089/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1614997/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1614988/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1614980/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1614728/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1614719/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1614710/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1614701/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1614692/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1614646/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1614634/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1614587/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1614535/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1614479/*__LIB_6__::func_911*/;
			break;
		case 22:
			uParam0->f_24 = 1614394/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1613427/*func_5019*/;
			break;
		case 30:
			uParam0->f_8 = 1613217/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1613185/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1612995/*__LIB_10__::func_429*/;
			break;
		case 34:
			uParam0->f_41 = 1609790/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1609737/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1608546/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1608537/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1608528/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1608520/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1608509/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1608406/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1608381/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1608343/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1608334/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1608323/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1608242/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1608234/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1608225/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1608215/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1608008/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1608000/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1607992/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1607984/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1607976/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1607967/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1607958/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1607946/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1607937/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1607925/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1607916/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1607907/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1607899/*__LIB_0__::func_467*/;
			break;
	}
}

void func_5019(int iParam0, int iParam1)//Position - 0x189E73
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
								if ((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7))
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
						__LIB_10__::func_429(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_10__::func_429(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_194(1);
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5020(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5020(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_5020(int iParam0)//Position - 0x18A0F0
{
	__LIB_10__::func_429(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5047(var uParam0, int iParam1)//Position - 0x18A6CB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1693148/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1693093/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1691548/*__LIB_8__::func_869*/;
			break;
		case 3:
			uParam0->f_34 = 1691499/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1691465/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1691401/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1691378/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1691354/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1691234/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1691167/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1691158/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1690813/*__LIB_9__::func_505*/;
			break;
		case 14:
			uParam0->f_11 = 1690804/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1690796/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1685468/*__LIB_30__::func_655*/;
			break;
		case 13:
			uParam0->f_2 = 1685459/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1685450/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1685425/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1678891/*__LIB_30__::func_850*/;
			break;
		case 17:
			uParam0->f_17 = 1678305/*__LIB_22__::func_448*/;
			break;
		case 19:
			uParam0->f_17 = 1678278/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1678217/*__LIB_9__::func_476*/;
			break;
		case 21:
			uParam0->f_3 = 1678097/*__LIB_6__::func_914*/;
			break;
		case 74:
			uParam0->f_53 = 1678041/*__LIB_6__::func_913*/;
			break;
		case 22:
			uParam0->f_24 = 1677956/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1676984/*func_5136*/;
			break;
		case 30:
			uParam0->f_8 = 1676244/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1675973/*__LIB_6__::func_766*/;
			break;
		case 33:
			uParam0->f_40 = 1675062/*__LIB_12__::func_144*/;
			break;
		case 34:
			uParam0->f_41 = 1671718/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1671665/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1670982/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1670973/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1670964/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1670521/*__LIB_30__::func_815*/;
			break;
		case 77:
			uParam0->f_13 = 1670510/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1670407/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1670382/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1670344/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1670320/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1670309/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1670230/*__LIB_8__::func_865*/;
			break;
		case 54:
			uParam0->f_45 = 1670222/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1670213/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1670203/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1669974/*__LIB_8__::func_864*/;
			break;
		case 64:
			uParam0->f_47 = 1623685/*__LIB_30__::func_821*/;
			break;
		case 65:
			uParam0->f_21 = 1622547/*__LIB_22__::func_465*/;
			break;
		case 66:
			uParam0->f_21 = 1622324/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1621427/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1620882/*__LIB_7__::func_454*/;
			break;
		case 69:
			*uParam0 = 1620873/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1620861/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1620852/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1620840/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1618781/*__LIB_30__::func_455*/;
			break;
		case 73:
			uParam0->f_51 = 1617027/*__LIB_30__::func_747*/;
			break;
		case 78:
			uParam0->f_59 = 1616558/*__LIB_11__::func_914*/;
			break;
	}
}

void func_5136(int iParam0, int iParam1)//Position - 0x1996B8
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1932(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_1932(bVar7))
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
						__LIB_12__::func_144(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_12__::func_144(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_866(1);
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5137(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_866(1);
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5137(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_5137(int iParam0)//Position - 0x19994B
{
	__LIB_12__::func_144(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5202(var uParam0, int iParam1)//Position - 0x19D5E5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1728757/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1728642/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1727412/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1727342/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1727168/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1727044/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1726877/*__LIB_15__::func_472*/;
			break;
		case 111:
			uParam0->f_35 = 1726863/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1726839/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1726719/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1726519/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1726510/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1724806/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1724797/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1724789/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1724283/*__LIB_30__::func_488*/;
			break;
		case 13:
			uParam0->f_2 = 1724244/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1724235/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1724226/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1723859/*__LIB_11__::func_541*/;
			break;
		case 108:
			uParam0->f_55 = 1721820/*__LIB_11__::func_540*/;
			break;
		case 17:
			uParam0->f_17 = 1719682/*__LIB_22__::func_450*/;
			break;
		case 19:
			uParam0->f_17 = 1719655/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1719571/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1719471/*__LIB_6__::func_693*/;
			break;
		case 74:
			uParam0->f_53 = 1719304/*__LIB_6__::func_112*/;
			break;
		case 22:
			uParam0->f_24 = 1719197/*__LIB_6__::func_692*/;
			break;
		case 25:
			uParam0->f_23 = 1718545/*func_5321*/;
			break;
		case 30:
			uParam0->f_8 = 1718045/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1717750/*__LIB_6__::func_771*/;
			break;
		case 33:
			uParam0->f_40 = 1716828/*__LIB_22__::func_449*/;
			break;
		case 32:
			*uParam0 = 1716724/*__LIB_6__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 1714579/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1629095/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1714519/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1714510/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1714501/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1714235/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1714224/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1714084/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1714043/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1713952/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1713868/*__LIB_9__::func_435*/;
			break;
		case 52:
			uParam0->f_15 = 1713857/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1713575/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1713567/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1713558/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1713497/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1713215/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1711300/*__LIB_30__::func_846*/;
			break;
		case 65:
			uParam0->f_21 = 1711257/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1710554/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1709470/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1708879/*__LIB_7__::func_460*/;
			break;
		case 69:
			*uParam0 = 1708870/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1708858/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1708849/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1708837/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1706161/*__LIB_12__::func_145*/;
			break;
		case 84:
			uParam0->f_1 = 1704315/*func_5247*/;
			break;
		case 85:
			uParam0->f_1 = 1701981/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1697755/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1697746/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1697703/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1697402/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1696639/*func_5214*/;
			break;
		case 94:
			uParam0->f_1 = 1695139/*__LIB_6__::func_499*/;
			break;
		case 102:
			uParam0->f_1 = 1694569/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1694561/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1694486/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1694412/*__LIB_11__::func_916*/;
			break;
		case 125:
			uParam0->f_19 = 1694388/*__LIB_4__::func_688*/;
			break;
	}
}

int func_5214(var uParam0, var uParam1)//Position - 0x19E37F
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_1745(&(uParam1->f_248), &(uParam1->f_109), 14);
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

int func_5247(int iParam0, var uParam1)//Position - 0x1A017B
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
				func_2729(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
								func_1745(&iVar2, &(uParam1->f_109), 14);
								func_1739(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_1745(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_1745(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_1745(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_1739(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
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
				func_2729(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_5321(int iParam0, int iParam1)//Position - 0x1A3911
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
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_1932(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_1932(bVar7))
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
						__LIB_22__::func_449(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_22__::func_449(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_5322(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_5322(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_5322(int iParam0)//Position - 0x1A3B6F
{
	__LIB_22__::func_449(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5369(var uParam0, int iParam1)//Position - 0x1A60FE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1769125/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1768473/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1768410/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1768354/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1767638/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1767630/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1767621/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 79:
			*uParam0 = 1767597/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1767588/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1765760/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1765751/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1765743/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1765734/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1765725/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1765716/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1765707/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1765698/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1765671/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1765659/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1765650/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1765641/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1765632/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1765624/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1765616/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1764486/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1764474/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1764446/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1764437/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1764392/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1730629/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1730620/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1730611/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1730603/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1730592/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1730584/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1730575/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1730276/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1730247/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1730216/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1730182/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1730138/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1730109/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1730100/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1730043/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1730035/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1730027/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1730019/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1730011/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1729985/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1729959/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1729947/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1729938/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1729926/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1729917/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1729909/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1729726/*__LIB_7__::func_855*/;
			break;
	}
}

void func_5442(var uParam0, int iParam1)//Position - 0x1B037F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1812609/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1812302/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1807330/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1807301/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1807106/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1806756/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1806614/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1806590/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1806378/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1806273/*__LIB_7__::func_462*/;
			break;
		case 11:
			uParam0->f_11 = 1806264/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1806159/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1806150/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1806142/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1806133/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1806124/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1805835/*__LIB_30__::func_489*/;
			break;
		case 75:
			uParam0->f_4 = 1805826/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1805742/*__LIB_6__::func_775*/;
			break;
		case 108:
			uParam0->f_55 = 1805733/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1805110/*__LIB_15__::func_659*/;
			break;
		case 19:
			uParam0->f_17 = 1804909/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1804845/*__LIB_7__::func_352*/;
			break;
		case 21:
			uParam0->f_3 = 1804785/*__LIB_6__::func_773*/;
			break;
		case 74:
			uParam0->f_53 = 1804776/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1804533/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1804229/*func_5481*/;
			break;
		case 30:
			uParam0->f_8 = 1804091/*__LIB_7__::func_527*/;
			break;
		case 31:
			uParam0->f_39 = 1803649/*__LIB_7__::func_526*/;
			break;
		case 33:
			uParam0->f_40 = 1802984/*__LIB_6__::func_816*/;
			break;
		case 34:
			uParam0->f_41 = 1800405/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1800360/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1774518/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1774290/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1774114/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1774106/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1774095/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1773853/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1773821/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1773755/*__LIB_30__::func_675*/;
			break;
		case 51:
			*uParam0 = 1773731/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1773548/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1772953/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1772716/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1772707/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1772642/*__LIB_7__::func_461*/;
			break;
		case 58:
			uParam0->f_13 = 1772220/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1772212/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1772204/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1772144/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1772126/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1772117/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1772108/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1771604/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1771456/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1771411/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1771402/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1771394/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1771378/*__LIB_4__::func_516*/;
			break;
	}
}

void func_5481(int iParam0, int iParam1)//Position - 0x1B87C5
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_6__::func_71(PLAYER::PLAYER_ID()) && __LIB_7__::func_352(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_769(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_13__::func_61())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::getMinusOneOrNull() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_1932(bVar2))
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
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
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

void func_5516(var uParam0, int iParam1)//Position - 0x1BA88A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1847578/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1847469/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1844977/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1844948/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1844788/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1844670/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1844453/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1844429/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1844309/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1844158/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1844149/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1843146/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1843137/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1843129/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1843120/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1842966/*__LIB_30__::func_490*/;
			break;
		case 75:
			uParam0->f_4 = 1842957/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1842869/*__LIB_6__::func_778*/;
			break;
		case 108:
			uParam0->f_55 = 1842079/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1841448/*__LIB_6__::func_818*/;
			break;
		case 19:
			uParam0->f_17 = 1841421/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1841382/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1841322/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1841313/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1841259/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1840955/*func_5602*/;
			break;
		case 30:
			uParam0->f_8 = 1840832/*__LIB_7__::func_530*/;
			break;
		case 31:
			uParam0->f_39 = 1840611/*__LIB_6__::func_777*/;
			break;
		case 33:
			uParam0->f_40 = 1840326/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1839920/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1839875/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1822343/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1822334/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1822250/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1822242/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1822219/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1822167/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1822135/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1821957/*__LIB_7__::func_670*/;
			break;
		case 51:
			*uParam0 = 1821860/*__LIB_24__::func_389*/;
			break;
		case 52:
			uParam0->f_15 = 1821849/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1821534/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1820669/*__LIB_22__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1820660/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1815903/*__LIB_22__::func_473*/;
			break;
		case 58:
			uParam0->f_13 = 1815889/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1814451/*__LIB_12__::func_371*/;
			break;
		case 65:
			uParam0->f_21 = 1814443/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1814392/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1814364/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1814355/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1814346/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1814062/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1813966/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1813954/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1813768/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1813596/*__LIB_6__::func_13*/;
			break;
	}
}

void func_5602(int iParam0, int iParam1)//Position - 0x1C173B
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
		while (iVar4 < __LIB_13__::func_61())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::getMinusOneOrNull() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_1932(bVar2))
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
				__LIB_12__::func_135(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
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

void func_5646(var uParam0, int iParam1)//Position - 0x1C3123
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1875176/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1875033/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1869807/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1869778/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1869367/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1869197/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1868802/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1868778/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1868769/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1868674/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1868665/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1868657/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1868648/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1868401/*__LIB_30__::func_656*/;
			break;
		case 75:
			uParam0->f_4 = 1868392/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1868304/*__LIB_6__::func_781*/;
			break;
		case 108:
			uParam0->f_55 = 1868295/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1868039/*__LIB_7__::func_600*/;
			break;
		case 19:
			uParam0->f_17 = 1868012/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1868003/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1867994/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1867985/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1867977/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1867969/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1867846/*__LIB_7__::func_531*/;
			break;
		case 31:
			uParam0->f_39 = 1867596/*__LIB_7__::func_463*/;
			break;
		case 33:
			uParam0->f_40 = 1867340/*__LIB_15__::func_437*/;
			break;
		case 34:
			uParam0->f_41 = 1865356/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1865311/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1850858/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1850849/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1850840/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1850832/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1850821/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1850769/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1850737/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1850608/*__LIB_6__::func_780*/;
			break;
		case 51:
			*uParam0 = 1850584/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1850573/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1849922/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1849317/*__LIB_7__::func_644*/;
			break;
		case 56:
			uParam0->f_46 = 1849308/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1849241/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1849227/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1848848/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1848773/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1848722/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1848704/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1848695/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1848686/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1848569/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1848560/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1848548/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1848539/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1848531/*__LIB_0__::func_467*/;
			break;
	}
}

void func_5716(var uParam0, int iParam1)//Position - 0x1C9CF1
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1875643/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1875634/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1875625/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1875465/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1875457/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1875302/*__LIB_12__::func_162*/;
			break;
	}
}

void func_5724(var uParam0, int iParam1)//Position - 0x1C9EC4
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1875860/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1875851/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1875842/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1875465/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1875833/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1875769/*__LIB_12__::func_162*/;
			break;
	}
}

void func_5730(var uParam0, int iParam1)//Position - 0x1C9F9D
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1876087/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1876078/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1875465/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1876069/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1875969/*__LIB_12__::func_163*/;
			break;
	}
}

void func_5772(var uParam0, bool bParam1)//Position - 0x1CB5A3
{
	if (__LIB_10__::func_197(&(uParam0->f_1)) != 0)
	{
		if (bParam1)
		{
			__LIB_10__::func_892(uParam0, 1);
		}
		func_1328(uParam0);
		MISC::CLEAR_BIT(&Global_2621446, 3);
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
}

void func_5783()//Position - 0x1CB6AD
{
	__LIB_2__::func_346(PLAYER::PLAYER_ID(), 1);
	__LIB_6__::func_704();
	__LIB_1__::func_553();
	func_5772(&Global_1941652, 0);
	HUD::SET_RADAR_ZOOM(0);
	HUD::DISPLAY_RADAR(true);
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	GRAPHICS::SET_NOISEOVERIDE(false);
	GRAPHICS::SET_NOISINESSOVERIDE(0f);
	HUD::DISPLAY_CASH(true);
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	__LIB_35__::func_731(&Global_1941652, 0);
	__LIB_15__::func_194(&Global_1941652);
	func_5772(&Global_1941652, 0);
	__LIB_15__::func_585();
	__LIB_15__::func_584();
	if (BitTest(Global_2815059.f_5194, 3))
	{
		__LIB_1__::func_91();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && BitTest(Global_2815059.f_5194, 2))
	{
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	if (BitTest(Global_2815059.f_5194, 4))
	{
		__LIB_3__::func_504();
	}
	__LIB_1__::func_967(24);
	Global_2815059.f_5194 = 0;
}

int func_5790(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x1CB7EC
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
				if (!__LIB_3__::func_262())
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
			else if (func_6062(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
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
						__LIB_30__::func_456(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_640();
						__LIB_30__::func_643(&iVar2);
					}
					if (__LIB_3__::func_262())
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
							func_6039(iVar2);
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
			if (func_6036())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_5849(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_3__::func_207(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
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
					func_5840(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
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
				__LIB_30__::func_818(Global_2667225.f_706);
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
				func_5810(0, 0);
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
		__LIB_30__::func_643(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_858();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_5810(int iParam0, bool bParam1)//Position - 0x1CC970
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
			func_5810(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_5840(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1CDBD5
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
				func_5841(0);
			}
		}
	}
}

void func_5841(bool bParam0)//Position - 0x1CDCDF
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
			func_651(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_651(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_5849(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x1CDF25
{
	int* iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_2__::func_154(PLAYER::PLAYER_ID()))
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
	if (func_6031() && !bVar3)
	{
		if (func_6030())
		{
			if (func_6024(&iVar2))
			{
				if (__LIB_8__::func_267(iVar2))
				{
					if (!bVar4)
					{
						func_5840(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 0, 0);
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
						func_5840(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), iVar5, 0);
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
			if ((__LIB_3__::func_262() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_3__::func_262())
			{
				if (!__LIB_24__::func_66(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_6039(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_1__::func_141())
	{
		__LIB_30__::func_643(&iVar0);
	}
	if (func_6036())
	{
		__LIB_30__::func_643(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_870())
		{
			if (__LIB_1__::func_599(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_638(), __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_638(), fParam1);
				func_6013(__LIB_2__::func_638());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_878())
			{
				if (__LIB_2__::func_924(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_463(), 1))
				{
					func_6013(__LIB_2__::func_638());
					return 1;
				}
			}
			else if (func_5851(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_463(), 0, 1, 0))
			{
				func_6013(__LIB_2__::func_638());
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
			func_6013(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_5851(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1CE560
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
							func_6004(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_814(iVar1) || !__LIB_0__::func_371(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									func_6002(iParam3, -1);
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
									if (func_5909(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_5909(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
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
										if (func_5909(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
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
										if (func_5909(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
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
									__LIB_30__::func_759(&iVar0, iParam3);
									if ((__LIB_1__::func_629() || __LIB_2__::func_632()) || __LIB_2__::func_631())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_8__::func_248(iVar0, iParam3);
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
													func_5872(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													func_5862(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
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
									func_5862(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
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

int func_5862(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x1CF5CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_5871(1411, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_5871(1412, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	if (__LIB_1__::func_770(iParam0))
	{
	}
	else
	{
		iVar1 = func_5871(1413, iParam0);
		__LIB_1__::func_379(iVar1, *uParam1, iParam3);
		if (!bParam4)
		{
		}
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_5871(1414, iParam0) + iVar0);
				__LIB_1__::func_379(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			else
			{
				iVar1 = (__LIB_3__::func_307(iParam0) + (iVar0 - 25));
				__LIB_1__::func_379(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_5871(1439, iParam0) + iVar0);
			__LIB_1__::func_379(iVar1, uParam1->f_59[iVar0], iParam3);
			iVar0++;
		}
	}
	iVar1 = func_5871(1441, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_5871(1442, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_5871(1443, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	if (__LIB_1__::func_770(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_5871(1444, iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_65, iParam3);
		if (!bParam4)
		{
		}
	}
	iVar1 = func_5871(1445, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_67, iParam3);
	if (__LIB_1__::func_770(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_5871(1446, iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_68, iParam3);
	}
	iVar1 = func_5871(1447, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_5871(1448, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_70, -1);
	iVar1 = func_5871(1449, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_71, iParam3);
	iVar1 = func_5871(1450, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_72, iParam3);
	iVar1 = func_5871(1451, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_73, iParam3);
	iVar1 = func_5871(1452, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_5, iParam3);
	iVar1 = func_5871(1453, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_6, iParam3);
	iVar1 = func_5871(1454, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_7, iParam3);
	iVar1 = func_5871(1455, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_8, iParam3);
	if (__LIB_1__::func_770(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_5871(3880, iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_74, iParam3);
		iVar1 = func_5871(3881, iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_75, iParam3);
		iVar1 = func_5871(3882, iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_76, iParam3);
		iVar1 = __LIB_3__::func_306(iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_97, iParam3);
		iVar1 = __LIB_3__::func_305(iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_99, iParam3);
		iVar1 = __LIB_3__::func_304(iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_98, iParam3);
		iVar1 = __LIB_3__::func_311(iParam0, 0);
		__LIB_1__::func_379(iVar1, uParam1->f_102, iParam3);
	}
	iVar2 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1275;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	__LIB_1__::func_354(1629, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__::func_354(__LIB_1__::func_811(1, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__::func_354(__LIB_1__::func_811(2, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__::func_354(__LIB_1__::func_811(3, iParam0), uParam1->f_105, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__::func_354(__LIB_1__::func_811(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	__LIB_1__::func_354(__LIB_1__::func_811(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__::func_354(__LIB_1__::func_811(7, iParam0), uParam1->f_140, iParam3, 1, 0);
	if (!__LIB_1__::func_770(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			__LIB_2__::func_723(__LIB_1__::func_811(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

int func_5871(int iParam0, int iParam1)//Position - 0x1D07B6
{
	int iVar0;
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < __LIB_3__::func_231(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
		else if (iParam1 > 306 && iParam1 < 317)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (31158 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (31159 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (31160 + (iParam1 - 307) * 3);
			}
		}
		else if (iParam1 >= 317 && iParam1 < 337)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (33376 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (33377 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (33378 + (iParam1 - 317) * 3);
			}
		}
		else if (iParam1 >= 337 && iParam1 < 347)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35868 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35869 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35870 + (iParam1 - 337) * 3);
			}
		}
		else if (iParam1 >= 350 && iParam1 < 360)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35898 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35899 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35900 + (iParam1 - 350) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < __LIB_3__::func_231(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - __LIB_3__::func_231(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - __LIB_3__::func_231(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		iVar0 = (30708 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 307) * (1456 - 1411)));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		iVar0 = (32476 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 317) * (1456 - 1411)));
	}
	else if (iParam1 < 347)
	{
		iVar0 = (34878 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 337) * (1456 - 1411)));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		iVar0 = ((iParam1 - 347) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35328);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35329);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35330);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35331);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35332);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35333/*__LIB_10__::func_332*/);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35334);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35335);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35336);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35337);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35338);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35339);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35340);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35341);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35342);
		}
	}
	else if (iParam1 < 360)
	{
		iVar0 = (35373 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 350) * (1456 - 1411)));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		iVar0 = ((iParam1 - 360) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35823);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35824);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35825);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35826);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35827);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35828);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35829);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35830);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35831);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35832);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35833);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35834);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35835);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35836);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35837);
		}
	}
	return iVar0;
}

void func_5872(int iParam0)//Position - 0x1D1E2D
{
	int iVar0;
	if (!BitTest(Global_1585857[iParam0 /*142*/].f_103, 2))
	{
		MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 8);
	}
	if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 6))
	{
		__LIB_1__::func_746(1915, 1, -1);
		__LIB_2__::func_921(iParam0);
	}
	if (Global_1585857[iParam0 /*142*/].f_66 == joaat("oppressor2"))
	{
		__LIB_0__::func_627(&Global_2789823, 1, 0);
	}
	MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 6);
	MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 3);
	MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 11);
	Global_1585857[iParam0 /*142*/].f_104 = 0;
	if (__LIB_2__::func_721(Global_1585857[iParam0 /*142*/].f_66, 0))
	{
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
		{
			__LIB_1__::func_653(39);
			if (__LIB_1__::func_586(Global_1585857[iParam0 /*142*/].f_66))
			{
				__LIB_2__::func_920(53);
			}
			else
			{
				__LIB_0__::func_627(&(Global_2715699.f_4316.f_233[45 /*2*/]), 1, 0);
				Global_2715699.f_4316.f_388[45] = 0;
			}
			if (__LIB_2__::func_969(4))
			{
				Global_4535616 = 1;
			}
			else
			{
				func_5862(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
				__LIB_1__::func_333(-1948815871, 3, 0);
			}
		}
	}
	else if (!__LIB_7__::func_567(iParam0))
	{
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
		{
		}
	}
	else if (__LIB_1__::func_579() && Global_1946223 == iParam0)
	{
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
		{
			if (__LIB_2__::func_969(4))
			{
				Global_4535616 = 1;
			}
			else
			{
				func_5862(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
				__LIB_1__::func_333(-1948815871, 3, 0);
			}
		}
	}
	else if (__LIB_1__::func_587(Global_1585857[iParam0 /*142*/].f_66))
	{
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
		{
			__LIB_1__::func_653(39);
			MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 1);
			if (__LIB_2__::func_969(4))
			{
				Global_4535616 = 1;
			}
			else
			{
				func_5862(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
				__LIB_1__::func_333(-1948815871, 3, 0);
			}
		}
	}
	else if (!BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
	{
		MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 1);
		if (__LIB_2__::func_969(4))
		{
			Global_4535616 = 1;
		}
		else
		{
			func_5862(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
			__LIB_1__::func_333(-1948815871, 3, 0);
		}
		if (!BitTest(Global_1585857[iParam0 /*142*/].f_103, 2))
		{
			Global_2815059.f_425 = iParam0;
			Global_2815059.f_426 = 0;
			__LIB_1__::func_660(iParam0, &iVar0);
			if (iVar0 >= 0)
			{
				__LIB_2__::func_968(iVar0, -1, -1);
			}
			if (!__LIB_0__::func_112())
			{
				func_6002(Global_2815059.f_425, -1);
				Global_2815059.f_425 = -1;
			}
		}
	}
	MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 0);
}

int func_5909(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1D3214
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
		if (func_5994(Param0))
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
		if (!uParam6->f_27 || (((((((__LIB_22__::func_438(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_30__::func_461(Param0, iParam2);
		}
		if (__LIB_30__::func_471(Param0))
		{
			__LIB_30__::func_461(Param0, iParam2);
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
				if (((uParam6->f_3 && __LIB_30__::func_460(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_4__::func_986(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
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
					func_5922(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_3__::func_247(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
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
						func_5917(Global_2667225.f_683, 0);
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
								if (__LIB_4__::func_985(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_22__::func_470(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_5917(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_5917(Global_2667225.f_683, 0);
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
			func_5922(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
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

void func_5917(struct<3> Param0, int iParam1)//Position - 0x1D3EDF
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
		func_5917(Var0, iParam1 + 1);
	}
}

void func_5922(var uParam0, var uParam1, var uParam2)//Position - 0x1D40F5
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_5962(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_5923(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_5923(var uParam0, var uParam1, var uParam2)//Position - 0x1D4164
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
		if (func_5958(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
																			if (!uParam2->f_15 || !func_5958(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																							if (__LIB_30__::func_460(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_30__::func_460(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_22__::func_470(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = __LIB_30__::func_642(Var1, uParam2->f_54, &fVar23);
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
																													func_5931(Var1, fVar2, iVar14);
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
							func_5929(0, uParam2);
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
						if (func_5958(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
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

void func_5929(int iParam0, var uParam1)//Position - 0x1D4EC3
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_5929(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_5929(iParam0 + 1, uParam1);
	}
}

void func_5931(struct<3> Param0, float fParam1, int iParam2)//Position - 0x1D4F69
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
			func_5931(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_5958(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x1D6676
{
	int iVar0;
	bool bVar1;
	if (func_5994(Param0))
	{
		if (func_5961(uParam1, bParam4, 0, 1, 1))
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

int func_5961(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1D68C0
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
							if (func_5961(&Var1, 0, 0, 0, 1))
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

int func_5962(var uParam0, var uParam1, var uParam2)//Position - 0x1D699B
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
			if (func_5958(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
								if (!uParam2->f_15 || !func_5958(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
												if (__LIB_30__::func_460(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_30__::func_460(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_22__::func_470(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = __LIB_30__::func_642(Var3, uParam2->f_54, &fVar12);
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
																		func_5931(Var3, fVar4, iVar5);
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
					func_5929(0, uParam2);
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

int func_5994(struct<3> Param0)//Position - 0x1DF837
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
				if (!func_5961(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_5961(&Param0, 0, 1, 0, 1))
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
					if (!func_5961(&Var1, 0, 0, 0, 1))
					{
						if (!func_5961(&Param0, 0, 0, 0, 1))
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

void func_6002(int iParam0, int iParam1)//Position - 0x1DFAB6
{
	int iVar0;
	__LIB_1__::func_660(iParam0, &iVar0);
	if (iVar0 >= 0)
	{
		__LIB_2__::func_968(iVar0, -1, -1);
	}
	__LIB_2__::func_769(&(Global_1585857[iParam0 /*142*/]));
	Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_5862(iParam0, &(Global_1585857[iParam0 /*142*/]), 0, iParam1, 0, 0);
}

void func_6004(int iParam0)//Position - 0x1DFB4E
{
	if (__LIB_1__::func_816(&(Global_1585857[iParam0 /*142*/].f_66)))
	{
		func_6005(iParam0);
	}
}

void func_6005(int iParam0)//Position - 0x1DFB6D
{
	__LIB_1__::func_815(&(Global_1585857[iParam0 /*142*/].f_66));
	func_5862(iParam0, &(Global_1585857[iParam0 /*142*/]), 0, -1, 0, 0);
}

void func_6013(int iParam0)//Position - 0x1DFD6C
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
	func_6039(iParam0);
	__LIB_2__::func_640(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_30__::func_749(iParam0, 1);
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

int func_6024(var uParam0)//Position - 0x1E01FA
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
											if (func_6025(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
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
int func_6025(bool bParam0)//Position - 0x1E0429
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

int func_6030()//Position - 0x1E04A2
{
	bool bVar0;
	if (__LIB_1__::func_837())
	{
		if (func_6024(&bVar0))
		{
			if (func_6025(bVar0))
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

int func_6031()//Position - 0x1E04E7
{
	var uVar0;
	if (__LIB_2__::func_645() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_6024(&uVar0))
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

int func_6036()//Position - 0x1E062A
{
	bool bVar0;
	var uVar1;
	if (__LIB_3__::func_262())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_6031())
		{
			if (func_6030())
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
						if (__LIB_2__::func_154(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
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

void func_6039(int iParam0)//Position - 0x1E08AC
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
			func_5840(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
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

int func_6062(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x1E1745
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
			if (func_6070(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_3__::func_255(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
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
							func_5917(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
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
						func_6063(&(Global_2667225.f_623));
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
								func_5917(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
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
			if (func_6070(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
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

void func_6063(var uParam0)//Position - 0x1E1CCD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_5917(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_6070(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x1E20BD
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
	var uVar43;
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
				if (__LIB_24__::func_66(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_3__::func_261(Global_2676213);
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
		Global_2667225.f_520.f_30 = __LIB_3__::func_406();
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
		if (Global_2667225.f_489 == 0 || __LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_6235();
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
				__LIB_30__::func_814(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_30__::func_813(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_30__::func_742(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_6226(bParam2) };
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
				__LIB_30__::func_742(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
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
						if (__LIB_30__::func_448(Global_1888188))
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
				Var13 = { __LIB_30__::func_633(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_6217(&(Global_2667225.f_555), 1))
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
				if (__LIB_3__::func_262() || iVar40)
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
				if (func_6217(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::getMinusOneOrNull())
					{
						if (__LIB_1__::func_693(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1836068.f_14) };
							if (__LIB_3__::func_262())
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
				if (__LIB_3__::func_262())
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
				iVar30 = __LIB_30__::func_642(Var21, fVar35, &uVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_30__::func_730(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_30__::func_730(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_30__::func_632(Var21, fVar35) };
						Var23 = { __LIB_30__::func_631(Var21, fVar35) };
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
							uVar26[iVar0] = __LIB_30__::func_642(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
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
				if (func_5961(&(Global_2667225.f_555), 0, 0, 0, 1))
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
					Var17 = { func_6193(PLAYER::PLAYER_ID()) };
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
					Var17 = { func_6193(PLAYER::PLAYER_ID()) };
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
					Global_2667225.f_555 = { func_6193(__LIB_0__::func_797()) };
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
							switch (__LIB_6__::func_45(PLAYER::PLAYER_ID()))
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
							iVar46 = __LIB_1__::func_639(__LIB_6__::func_61(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::getMinusOneOrNull())
								{
									iVar46 = __LIB_1__::func_635(__LIB_6__::func_101(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_635(__LIB_6__::func_101(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_630(__LIB_6__::func_98(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_626(__LIB_6__::func_96(PLAYER::PLAYER_ID()));
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
							iVar46 = __LIB_1__::func_604(__LIB_6__::func_80(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_578(__LIB_6__::func_45(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_30__::func_644(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
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
						Global_2667225.f_555 = { func_6193(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_6193(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_6193(__LIB_0__::func_797()) };
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
						Global_2667225.f_555 = { func_6193(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_6193(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_6193(__LIB_0__::func_797()) };
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
				Global_2667225.f_555 = { func_6193(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_6193(PLAYER::PLAYER_ID()) };
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
				if (Global_2667225.f_490.f_3 && !__LIB_30__::func_630(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_30__::func_729() };
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
				if (func_5961(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_24__::func_380(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_3__::func_406())
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
			func_6150();
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
			if ((__LIB_0__::func_975() && __LIB_3__::func_262()) && func_5961(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_3__::func_404();
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
			func_5922(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
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
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_6143(&(Var18[iVar0 /*3*/]), __LIB_1__::func_560(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_6140(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_6140(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_6140(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
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
			if ((__LIB_1__::func_410(Global_2667225.f_489) && !__LIB_1__::func_560(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_3__::func_406())
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
						func_6150();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_24__::func_66(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_9__::func_516(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
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
						func_6150();
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
		Global_2667225.f_520.f_9 = __LIB_3__::func_404();
		Global_2667225.f_520.f_10 = 0;
		if (func_6071(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
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

int func_6071(var uParam0, var uParam1, var uParam2)//Position - 0x1E73B6
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
				if (__LIB_30__::func_460(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
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
					func_5922(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
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
				if (uParam0->f_5 && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
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
			if (func_6081(uParam2, uParam0, uParam1, 0))
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
			if (func_6081(uParam2, uParam0, uParam1, 1))
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
						func_6073(&Var1, 0, 1, 1, 0, uParam0, uParam1);
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
				func_6073(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
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

void func_6073(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x1E8401
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
	if (func_6075(*uParam0, &Var0, iVar6, iParam3, 1))
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
		if (__LIB_2__::func_732(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_5922(&Var0, &uVar1, &Var2);
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
			if (func_6075(*uParam0, &Var0, iVar6, iParam3, 0))
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
			else if (func_5961(uParam0, 1, 1, 1, 1))
			{
				func_6073(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
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

int func_6075(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1E88E1
{
	if (__LIB_1__::func_411(Param0, uParam1))
	{
		if (func_6076(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_6076(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_6076(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x1E893D
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_5958(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
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

int func_6081(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1E8C0C
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
					func_6125(uParam1, uParam2);
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
									func_6073(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_6073(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_6125(uParam1, uParam2);
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
					func_6125(uParam1, uParam2);
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
				func_6125(uParam1, uParam2);
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
		func_6122(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_6089(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
					func_6089(Var0, fVar1, uParam1, uParam2, 0, iVar3);
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
					func_6073(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
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
					func_6073(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_6073(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
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
				func_6073(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
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
			func_6073(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_414(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_6089(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x1E94D0
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
		if (!__LIB_22__::func_351(Param0, 1084227584, 1123024896, 0))
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
		if (!__LIB_24__::func_66(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
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
		if (__LIB_30__::func_657(Param0, fParam1, uParam2->f_15, __LIB_1__::func_430(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
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
		if (!__LIB_12__::func_131(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_12__::func_131(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
				if (func_5994(Var12))
				{
					if (!func_5961(&Param0, 0, 0, 0, 1) && !__LIB_2__::func_784(&Param0, 0))
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
				fVar0 = __LIB_30__::func_724(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_30__::func_724(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_410(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_3__::func_256(Param0);
			}
			fVar7 = __LIB_30__::func_629(Param0, 1, 0, 0, 0, 0);
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
							fVar0 = __LIB_30__::func_724(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_30__::func_724(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
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
							func_6092(Var19, iVar18);
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
						func_6092(Var19, iVar18);
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
						fVar5 = __LIB_22__::func_350(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_30__::func_629(Param0, 1, 1, 1, 1, 0);
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
						func_6092(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_6092(struct<10> Param0, int iParam1)//Position - 0x1EA0C3
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_6092(Var0, iParam1 + 1);
	}
}

void func_6122(struct<3> Param0, var uParam1, var uParam2)//Position - 0x1EB599
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
					func_6124(&Var3, uParam1, iVar0);
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
				func_6124(&Var3, uParam1, iVar0);
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
					func_6124(&Var3, uParam1, iVar0);
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
				func_6123(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_6123(var uParam0, var uParam1, int iParam2)//Position - 0x1EB8B9
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_6123(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_6124(var uParam0, var uParam1, int iParam2)//Position - 0x1EB8F7
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_6124(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_6125(var uParam0, var uParam1)//Position - 0x1EB931
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
				func_6089(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
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

Vector3 func_6140(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x1EBD12
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
		if (func_6143(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_6143(var uParam0, bool bParam1)//Position - 0x1EBE53
{
	func_6144(uParam0, bParam1);
	if (__LIB_30__::func_460(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_6144(var uParam0, bool bParam1)//Position - 0x1EBE8A
{
	float fVar0;
	if (!bParam1)
	{
		func_6146(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_6146(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_2__::func_672(uParam0);
}

void func_6146(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1EBF60
{
	if (bParam1)
	{
		if (func_5994(Global_2667225.f_512))
		{
			if (func_5961(uParam0, 1, 0, 0, bParam5))
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

void func_6150()//Position - 0x1EC198
{
	if (!Global_2667225.f_701)
	{
		if (func_5994(Global_2667225.f_555))
		{
			if (func_5961(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_6217(&(Global_2667225.f_555), 1))
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
	if (__LIB_3__::func_406())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_6193(int iParam0)//Position - 0x1F01AF
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
	return func_6194(iParam0);
}

Vector3 func_6194(int iParam0)//Position - 0x1F0223
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
		func_6195(__LIB_1__::func_694(iParam0), &iVar0);
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
		Var1 = { __LIB_30__::func_636(iParam0) };
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

void func_6195(struct<3> Param0, var uParam1)//Position - 0x1F03F6
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_6196(Param0, iVar0, 0))
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
		if (func_6196(Param0, iVar0, 0))
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
		if (func_6196(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_6196(Param0, iVar0, 0))
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
	if (func_6196(Param0, iVar0, 0))
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

int func_6196(struct<3> Param0, int iParam1, float fParam2)//Position - 0x1F053A
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
			if (func_6196(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_6196(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_6196(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_6196(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_6196(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_6196(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_6196(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_6196(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_6196(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_6196(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_6196(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_6217(var uParam0, bool bParam1)//Position - 0x1F386E
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
						if (func_5961(&Var1, 0, 0, 0, 1))
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

struct<18> func_6226(bool bParam0)//Position - 0x1F4257
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
			if (__LIB_12__::func_131(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_12__::func_131(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_12__::func_131(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
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
				fVar5 = __LIB_30__::func_629(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_3__::func_403(), __LIB_3__::func_402(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_30__::func_629(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
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
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_3__::func_403(), __LIB_3__::func_402(), fVar8, 0.3f);
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
					func_6227(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_6227(&Var0, iVar1, fVar4, iVar7, fVar6);
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

void func_6227(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0x1F46BA
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
		func_6227(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_6235()//Position - 0x1F4C3E
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
		else if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
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
					if (func_6243(PLAYER::PLAYER_ID()))
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
				else if ((((((__LIB_2__::func_159(1) && func_6243(PLAYER::PLAYER_ID())) && (__LIB_5__::func_185(PLAYER::PLAYER_ID()) != 157 || (__LIB_5__::func_185(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_797() != __LIB_1__::func_730()))) && !__LIB_2__::func_895()) && !__LIB_7__::func_570(PLAYER::PLAYER_ID())) && !__LIB_6__::func_788(1)) && !(__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0) == 0 && func_6241(PLAYER::PLAYER_ID()) == 1))
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
						if ((__LIB_2__::func_867(iVar0) && __LIB_7__::func_979(iVar0)) && (__LIB_9__::func_497(iVar0) || __LIB_1__::func_744(PLAYER::PLAYER_ID())))
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
					if (__LIB_2__::func_867(iVar0) && __LIB_7__::func_979(iVar0))
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

int func_6241(int iParam0)//Position - 0x1F50BF
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_2__::func_72(iParam0, 0))
	{
		iVar0 = __LIB_2__::func_39(iParam0);
		Var1 = { func_6193(iVar0) };
		return func_5961(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_6243(int iParam0)//Position - 0x1F516B
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	Var0 = { func_6193(iParam0) };
	if (__LIB_2__::func_72(iParam0, 0))
	{
		iVar1 = __LIB_2__::func_39(iParam0);
		Var2 = { func_6193(iVar1) };
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
			Var4 = { func_6193(iVar3) };
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

void func_6358(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x1F7367
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	__LIB_15__::func_611(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + __LIB_22__::func_247(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + __LIB_15__::func_393(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (__LIB_22__::func_375(iParam0))
	{
		if (bParam1)
		{
			if (Global_262145.f_24496 /* Tunable: -76964080 */)
			{
				if (__LIB_15__::func_392(PLAYER::PLAYER_ID()) <= 0)
				{
					__LIB_15__::func_547();
				}
			}
			else if (__LIB_15__::func_392(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_15__::func_546();
			}
			else
			{
				__LIB_15__::func_547();
			}
		}
		else
		{
			__LIB_12__::func_585();
		}
	}
	__LIB_24__::func_378(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	__LIB_24__::func_236(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_24__::func_377(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_24__::func_346(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	__LIB_24__::func_345(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2815059.f_5195.f_387 = iVar4;
	}
	else
	{
		Global_2815059.f_5195.f_387 = iVar5;
	}
	iVar8 = __LIB_1__::func_730();
	if (iVar8 != __LIB_0__::getMinusOneOrNull() && iParam0 != 148)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_2__::func_759(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				__LIB_30__::func_679(&iVar0, 1);
			}
		}
	}
	__LIB_24__::func_344(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1943929.f_10 = iVar1;
		__LIB_1__::func_925();
		__LIB_15__::func_502(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1943929.f_9 = iVar0;
		__LIB_30__::func_678(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		__LIB_22__::func_246(iParam0, iVar0);
		if (__LIB_15__::func_381(iParam0))
		{
			if (__LIB_15__::func_380(iParam0) > -1)
			{
				__LIB_1__::func_926(__LIB_15__::func_380(iParam0), iVar0);
			}
		}
		Global_2727753 = iVar0;
		__LIB_0__::func_627(&Global_2725869, 0, 0);
	}
	if (__LIB_2__::func_106(PLAYER::PLAYER_ID()) || __LIB_4__::func_77(PLAYER::PLAYER_ID()))
	{
		__LIB_22__::func_372(iParam0);
	}
	if ((__LIB_12__::func_654(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		Global_1943947.f_13 = iVar0;
		Global_1943947.f_14 = iVar1;
	}
	if (__LIB_12__::func_499(iParam0))
	{
		Global_1944003.f_13 = iVar0;
		Global_1944003.f_14 = iVar1;
	}
	if (((__LIB_4__::func_740(iParam0) || iParam0 == 297) || iParam0 == 296) || iParam0 == 298)
	{
		Global_1944066.f_12 = iVar0;
		Global_1944066.f_13 = iVar1;
	}
	if (__LIB_1__::func_612(iParam0))
	{
		Global_1944113.f_12 = iVar0;
		Global_1944113.f_13 = iVar1;
	}
	if (__LIB_1__::func_77(iParam0))
	{
		Global_1944167.f_12 = iVar0;
		Global_1944167.f_13 = iVar1;
	}
	if (__LIB_4__::func_78(iParam0))
	{
		if (__LIB_15__::func_326(iParam0))
		{
			Global_1944249.f_12 = iVar0;
			Global_1944249.f_13 = iVar1;
		}
		else if (((__LIB_30__::func_430(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
		{
			Global_1944303.f_12 = iVar0;
			Global_1944303.f_13 = iVar1;
		}
	}
	if (__LIB_12__::func_747(iParam0))
	{
		Global_1944390.f_12 = iVar0;
		Global_1944390.f_13 = iVar1;
	}
	if (__LIB_4__::func_184(iParam0))
	{
		Global_1944465.f_16 = iVar0;
		Global_1944465.f_17 = iVar1;
	}
	if (__LIB_11__::func_619(iParam0))
	{
		Global_1944552.f_16 = iVar0;
		Global_1944552.f_17 = iVar1;
	}
	if (__LIB_3__::func_691(iParam0) || __LIB_15__::func_310(iParam0))
	{
		Global_1944685.f_15 = iVar0;
		Global_1944685.f_16 = iVar1;
	}
	func_6359(bParam1, iParam0);
}

void func_6359(bool bParam0, int iParam1)//Position - 0x1F782A
{
	int iVar0;
	bool bVar1;
	if (bParam0)
	{
		iVar0 = -1;
		bVar1 = false;
		switch (iParam1)
		{
			case 226:
				iVar0 = 2;
				bVar1 = true;
				break;
			case 190:
				iVar0 = 3;
				bVar1 = true;
				break;
			case 230:
				iVar0 = 4;
				bVar1 = true;
				break;
			case 168:
				iVar0 = 5;
				bVar1 = true;
				break;
			case 188:
				iVar0 = 6;
				bVar1 = true;
				break;
			case 237:
				bVar1 = true;
				break;
		}
		if (iVar0 != -1)
		{
			if (__LIB_12__::func_530(iVar0) && !func_6366(iVar0))
			{
				func_6360(iVar0);
			}
		}
		if (bVar1)
		{
			if (__LIB_12__::func_530(1) && !func_6366(1))
			{
				func_6360(1);
			}
		}
	}
}

void func_6360(int iParam0)//Position - 0x1F78DC
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		__LIB_0__::func_186(func_6364(__LIB_12__::func_546(iParam0)), 1, -1);
		__LIB_12__::func_529(12, __LIB_12__::func_497(__LIB_12__::func_546(iParam0)), "UNLOCK_DESC_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
}

int func_6364(int iParam0)//Position - 0x1FCA22
{
	switch (iParam0)
	{
		case joaat("MP_Sum2_Tee_000_M"):
		case joaat("MP_Sum2_Tee_000_F"):
			return 34505;
			break;
		case joaat("MP_Sum2_Tee_001_M"):
		case joaat("MP_Sum2_Tee_001_F"):
			return 34375;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_0"):
			return 34397;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_1"):
			return 34398;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_0"):
			return 34395;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_1"):
			return 34396;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_1"):
			return 34399;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_2_0"):
			return 34400;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_G9EC_M_OUTFIT_MUMMY"):
		case joaat("DLC_MP_SUM2_G9EC_F_OUTFIT_MUMMY"):
			return 34389;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_0"):
			return 34410;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_1"):
			return 34409;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_0"):
			return 34404;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_1"):
			return 34403;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_4_0"):
			return 34406;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_8_0"):
			return 34408;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_5_0"):
			return 34405;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_1_0"):
			return 34391;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_2_0"):
			return 34394;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_4_0"):
			return 34390;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_7_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_7_0"):
			return 34392;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_0"):
			return 34393;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_1"):
			return 34730;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_2"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_2"):
			return 34731;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_3"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_3"):
			return 34732;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_4"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_4"):
			return 34733;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_7"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_7"):
			return 34736;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_8"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_8"):
			return 34737;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_5"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_5"):
			return 34734;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_6"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_6"):
			return 34735;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PEARS_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PEARS_0_0"):
			return 34401;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PRIGHT_WRIST_0_0"):
			return 34402;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_DECL_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_DECL_0_0"):
			return 34407;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_M_BERD_5_0"):
		case joaat("DLC_MP_SUM2_F_BERD_5_0"):
			return 34451;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_1"):
		case joaat("DLC_MP_SUM2_F_BERD_5_1"):
			return 34452;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_2"):
		case joaat("DLC_MP_SUM2_F_BERD_5_2"):
			return 34453;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_3"):
		case joaat("DLC_MP_SUM2_F_BERD_5_3"):
			return 34454;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_0"):
		case joaat("DLC_MP_SUM2_F_BERD_6_0"):
			return 34418;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_1"):
		case joaat("DLC_MP_SUM2_F_BERD_6_1"):
			return 34419;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_2"):
		case joaat("DLC_MP_SUM2_F_BERD_6_2"):
			return 34420;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_7_0"):
		case joaat("DLC_MP_SUM2_F_BERD_7_0"):
			return 34372;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_8_0"):
		case joaat("DLC_MP_SUM2_F_BERD_8_0"):
			return 34421;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_0"):
		case joaat("DLC_MP_SUM2_F_BERD_9_0"):
			return 34415;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_1"):
		case joaat("DLC_MP_SUM2_F_BERD_9_1"):
			return 34416;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_2"):
		case joaat("DLC_MP_SUM2_F_BERD_9_2"):
			return 34417;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_0"):
		case joaat("DLC_MP_SUM2_F_BERD_10_0"):
			return 34425;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_1"):
		case joaat("DLC_MP_SUM2_F_BERD_10_1"):
			return 34426;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_2"):
		case joaat("DLC_MP_SUM2_F_BERD_10_2"):
			return 34427;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_3"):
		case joaat("DLC_MP_SUM2_F_BERD_10_3"):
			return 34428;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_4"):
		case joaat("DLC_MP_SUM2_F_BERD_10_4"):
			return 34429;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_5"):
		case joaat("DLC_MP_SUM2_F_BERD_10_5"):
			return 34430;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_6"):
		case joaat("DLC_MP_SUM2_F_BERD_10_6"):
			return 34431;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_7"):
		case joaat("DLC_MP_SUM2_F_BERD_10_7"):
			return 34432;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_8"):
		case joaat("DLC_MP_SUM2_F_BERD_10_8"):
			return 34433;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_9"):
		case joaat("DLC_MP_SUM2_F_BERD_10_9"):
			return 34434;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_10"):
		case joaat("DLC_MP_SUM2_F_BERD_10_10"):
			return 34435;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_11"):
		case joaat("DLC_MP_SUM2_F_BERD_10_11"):
			return 34436;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_12"):
		case joaat("DLC_MP_SUM2_F_BERD_10_12"):
			return 34437;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_13"):
		case joaat("DLC_MP_SUM2_F_BERD_10_13"):
			return 34438;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_14"):
		case joaat("DLC_MP_SUM2_F_BERD_10_14"):
			return 34439;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_15"):
		case joaat("DLC_MP_SUM2_F_BERD_10_15"):
			return 34440;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_16"):
		case joaat("DLC_MP_SUM2_F_BERD_10_16"):
			return 34441;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_17"):
		case joaat("DLC_MP_SUM2_F_BERD_10_17"):
			return 34442;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_18"):
		case joaat("DLC_MP_SUM2_F_BERD_10_18"):
			return 34443;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_19"):
		case joaat("DLC_MP_SUM2_F_BERD_10_19"):
			return 34444;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_20"):
		case joaat("DLC_MP_SUM2_F_BERD_10_20"):
			return 34445;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_21"):
		case joaat("DLC_MP_SUM2_F_BERD_10_21"):
			return 34446;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_22"):
		case joaat("DLC_MP_SUM2_F_BERD_10_22"):
			return 34447;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_23"):
		case joaat("DLC_MP_SUM2_F_BERD_10_23"):
			return 34448;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_24"):
		case joaat("DLC_MP_SUM2_F_BERD_10_24"):
			return 34449;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_25"):
		case joaat("DLC_MP_SUM2_F_BERD_10_25"):
			return 34450;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_0_0"):
		case joaat("DLC_MP_SUM2_F_BERD_0_0"):
			return 34423;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_0"):
		case joaat("DLC_MP_SUM2_F_BERD_1_0"):
			return 34703;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_1"):
		case joaat("DLC_MP_SUM2_F_BERD_1_1"):
			return 34704;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_2"):
		case joaat("DLC_MP_SUM2_F_BERD_1_2"):
			return 34705;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_3_0"):
		case joaat("DLC_MP_SUM2_F_BERD_3_0"):
			return 34424;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_4_0"):
		case joaat("DLC_MP_SUM2_F_BERD_4_0"):
			return 34422;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_M_OUTFIT_SASQUATCH"):
		case joaat("DLC_MP_SUM2_F_OUTFIT_SASQUATCH"):
			return 34411;
			break;
		case joaat("DLC_MP_SUM2_M_LEGS_2_0"):
		case joaat("DLC_MP_SUM2_F_LEGS_0_0"):
			return 34506;
			break;
		case joaat("DLC_MP_SUM2_M_LEGS_2_1"):
		case joaat("DLC_MP_SUM2_F_LEGS_0_1"):
			return 34507;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_13_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_15_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_16_0"):
			return 34380/*func_188*/;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_14_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_19_0"):
			return 34388;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_0"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_0"):
			return 34383;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_1"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_1"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_1"):
			return 34381;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_2"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_2"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_2"):
			return 34385;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_17_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_8_0"):
			return 34382;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM2_M_JBIB_8_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_24_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_21_0"):
			return 34384;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_0"):
			return 34455;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_1"):
			return 34456;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_2"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_2"):
			return 34457;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_3"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_3"):
			return 34458;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_4"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_4"):
			return 34459;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_5"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_5"):
			return 34460;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_6"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_6"):
			return 34461;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_7"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_7"):
			return 34462;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_8"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_8"):
			return 34463;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_9"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_9"):
			return 34464;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_10"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_10"):
			return 34465;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_11"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_11"):
			return 34466;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_12"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_12"):
			return 34467;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_13"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_13"):
			return 34468;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_1_0"):
			return 34375;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_4_0"):
			return 34508;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_2_1"):
		case joaat("DLC_MP_SUM2_M_PHEAD_4_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_2_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_4_1"):
			return 34509;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_7_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_7_0"):
			return 34510;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_8_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_8_0"):
			return 34387;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_0"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_0"):
			return 34469;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_1"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_1"):
			return 34470;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_2"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_2"):
			return 34471;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_3"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_3"):
			return 34472;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_4"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_4"):
			return 34473;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_5"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_5"):
			return 34474;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_6"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_6"):
			return 34475;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_7"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_7"):
			return 34476;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_8"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_8"):
			return 34477;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_9"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_9"):
			return 34478;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_10"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_10"):
			return 34479;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_11"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_11"):
			return 34480;
			break;
		case joaat("DLC_MP_SUM2_M_SPECIAL_1_0"):
		case joaat("DLC_MP_SUM2_F_SPECIAL_1_0"):
			return 34386;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_0"):
		case joaat("DLC_MP_SUM2_F_FEET_5_0"):
			return 34481;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_1"):
		case joaat("DLC_MP_SUM2_F_FEET_5_1"):
			return 34482;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_2"):
		case joaat("DLC_MP_SUM2_F_FEET_5_2"):
			return 34483;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_3"):
		case joaat("DLC_MP_SUM2_F_FEET_5_3"):
			return 34484;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_4"):
		case joaat("DLC_MP_SUM2_F_FEET_5_4"):
			return 34485;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_5"):
		case joaat("DLC_MP_SUM2_F_FEET_5_5"):
			return 34486;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_6"):
		case joaat("DLC_MP_SUM2_F_FEET_5_6"):
			return 34487;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_7"):
		case joaat("DLC_MP_SUM2_F_FEET_5_7"):
			return 34488;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_8"):
		case joaat("DLC_MP_SUM2_F_FEET_5_8"):
			return 34489;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_0"):
		case joaat("DLC_MP_SUM2_F_FEET_6_0"):
			return 34490;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_1"):
		case joaat("DLC_MP_SUM2_F_FEET_6_1"):
			return 34491;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_2"):
		case joaat("DLC_MP_SUM2_F_FEET_6_2"):
			return 34492;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_3"):
		case joaat("DLC_MP_SUM2_F_FEET_6_3"):
			return 34493;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_4"):
		case joaat("DLC_MP_SUM2_F_FEET_6_4"):
			return 34494;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_5"):
		case joaat("DLC_MP_SUM2_F_FEET_6_5"):
			return 34495;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_6"):
		case joaat("DLC_MP_SUM2_F_FEET_6_6"):
			return 34496;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_7"):
		case joaat("DLC_MP_SUM2_F_FEET_6_7"):
			return 34497;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_8"):
		case joaat("DLC_MP_SUM2_F_FEET_6_8"):
			return 34498;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_9"):
		case joaat("DLC_MP_SUM2_F_FEET_6_9"):
			return 34499;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_10"):
		case joaat("DLC_MP_SUM2_F_FEET_6_10"):
			return 34500;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_11"):
		case joaat("DLC_MP_SUM2_F_FEET_6_11"):
			return 34501;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_12"):
		case joaat("DLC_MP_SUM2_F_FEET_6_12"):
			return 34502;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_13"):
		case joaat("DLC_MP_SUM2_F_FEET_6_13"):
			return 34503;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_14"):
		case joaat("DLC_MP_SUM2_F_FEET_6_14"):
			return 34504;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_FIXER_M_JBIB_10_2"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_2"):
			return 32309;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_3"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_3"):
			return 32310;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_4"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_4"):
			return 32311;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_0"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_0"):
			return 32307;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_1"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_1"):
			return 32308;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_0"):
		case joaat("DLC_MP_FIXER_F_BERD_0_0"):
			return 32295;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_1"):
		case joaat("DLC_MP_FIXER_F_BERD_0_1"):
			return 32296;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_2"):
		case joaat("DLC_MP_FIXER_F_BERD_0_2"):
			return 32297;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_3"):
		case joaat("DLC_MP_FIXER_F_BERD_0_3"):
			return 32298;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_0"):
		case joaat("DLC_MP_FIXER_F_BERD_1_0"):
			return 32299;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_1"):
		case joaat("DLC_MP_FIXER_F_BERD_1_1"):
			return 32300;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_2"):
		case joaat("DLC_MP_FIXER_F_BERD_1_2"):
			return 32301;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_3"):
		case joaat("DLC_MP_FIXER_F_BERD_1_3"):
			return 32302;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_0"):
		case joaat("DLC_MP_FIXER_F_BERD_2_0"):
			return 32303;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_1"):
		case joaat("DLC_MP_FIXER_F_BERD_2_1"):
			return 32304;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_2"):
		case joaat("DLC_MP_FIXER_F_BERD_2_2"):
			return 32305;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_3"):
		case joaat("DLC_MP_FIXER_F_BERD_2_3"):
			return 32306;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_TUNER_M_DECL_30_1"):
		case joaat("DLC_MP_TUNER_F_DECL_29_1"):
			return 32273;
			break;
		case joaat("MP_Tuner_Tee_008_M"):
		case joaat("MP_Tuner_Tee_008_F"):
			return 31768;
			break;
		case joaat("MP_Tuner_Tee_010_M"):
		case joaat("MP_Tuner_Tee_010_F"):
			return 31769;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_11_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_12_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_11_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_12_0"):
			return 31784;
			break;
		case joaat("MP_Tuner_Tee_011_M"):
		case joaat("MP_Tuner_Tee_011_F"):
			return 31770;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_1_3"):
		case joaat("DLC_MP_TUNER_M_LEGS_1_3"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_1_3"):
		case joaat("DLC_MP_TUNER_F_LEGS_1_3"):
			return 31777;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_9_15"):
		case joaat("DLC_MP_TUNER_F_JBIB_9_15"):
			return 31788;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_2"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_2"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_2"):
			return 31787;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_0"):
			return 31786;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_1"):
			return 31785;
			break;
		case joaat("DLC_MP_TUNER_M_PHEAD_1_0"):
		case joaat("DLC_MP_TUNER_M_PHEAD_2_0"):
		case joaat("DLC_MP_TUNER_F_PHEAD_1_0"):
		case joaat("DLC_MP_TUNER_F_PHEAD_2_0"):
			return 31766;
			break;
		case joaat("DLC_MP_TUNER_M_PHEAD_1_1"):
		case joaat("DLC_MP_TUNER_M_PHEAD_2_1"):
		case joaat("DLC_MP_TUNER_F_PHEAD_1_1"):
		case joaat("DLC_MP_TUNER_F_PHEAD_2_1"):
			return 31767;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_0"):
			return 31789;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_1"):
			return 31790;
			break;
		case -1372800957:
			return 31791;
			break;
		case -1125170035:
			return 31792;
			break;
		case 1276052663:
			return 31793;
			break;
		case joaat("MP_Tuner_Tee_012_M"):
		case joaat("MP_Tuner_Tee_012_F"):
			return 31771;
			break;
		case joaat("MP_Tuner_Tee_013_M"):
		case joaat("MP_Tuner_Tee_013_F"):
			return 31772;
			break;
		case joaat("MP_Tuner_Tee_014_M"):
		case joaat("MP_Tuner_Tee_014_F"):
			return 31773;
			break;
		case joaat("MP_Tuner_Tee_015_M"):
		case joaat("MP_Tuner_Tee_015_F"):
			return 31774;
			break;
		case joaat("MP_Tuner_Tee_016_M"):
		case joaat("MP_Tuner_Tee_016_F"):
			return 31775;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_1_2"):
		case joaat("DLC_MP_TUNER_M_LEGS_1_2"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_1_2"):
		case joaat("DLC_MP_TUNER_F_LEGS_1_2"):
			return 31776;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_055_M"):
		case joaat("MP_Heist4_Tee_055_F"):
			return 30703;
			break;
		case joaat("MP_Heist4_Tee_057_M"):
		case joaat("MP_Heist4_Tee_057_F"):
			return 30704;
			break;
		case joaat("MP_Heist4_Tee_059_M"):
		case joaat("MP_Heist4_Tee_059_F"):
			return 30700;
			break;
		case joaat("MP_Heist4_Tee_061_M"):
		case joaat("MP_Heist4_Tee_061_F"):
			return 30701;
			break;
		case joaat("MP_Heist4_Tee_063_M"):
		case joaat("MP_Heist4_Tee_063_F"):
			return 30702;
			break;
		case joaat("MP_Heist4_Tee_065_M"):
		case joaat("MP_Heist4_Tee_065_F"):
			return 30699;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_030_M"):
		case joaat("MP_Heist4_Tee_030_F"):
			return 30533;
			break;
		case joaat("MP_Heist4_Tee_032_M"):
		case joaat("MP_Heist4_Tee_032_F"):
			return 30534;
			break;
		case joaat("MP_Heist4_Tee_028_M"):
		case joaat("MP_Heist4_Tee_028_F"):
			return 30535;
			break;
		case joaat("MP_Heist4_Tee_029_M"):
		case joaat("MP_Heist4_Tee_029_F"):
			return 30536;
			break;
		case joaat("MP_Heist4_Tee_031_M"):
		case joaat("MP_Heist4_Tee_031_F"):
			return 30537;
			break;
		case joaat("MP_Heist4_Tee_022_M"):
		case joaat("MP_Heist4_Tee_022_F"):
			return 30538;
			break;
		case joaat("MP_Heist4_Tee_023_M"):
		case joaat("MP_Heist4_Tee_023_F"):
			return 30539;
			break;
		case joaat("MP_Heist4_Tee_020_M"):
		case joaat("MP_Heist4_Tee_020_F"):
			return 30540;
			break;
		case joaat("MP_Heist4_Tee_021_M"):
		case joaat("MP_Heist4_Tee_021_F"):
			return 30541;
			break;
		case joaat("MP_Heist4_Tee_003_M"):
		case joaat("MP_Heist4_Tee_003_F"):
			return 30542;
			break;
		case joaat("MP_Heist4_Tee_004_M"):
		case joaat("MP_Heist4_Tee_004_F"):
			return 30543;
			break;
		case joaat("MP_Heist4_Tee_005_M"):
		case joaat("MP_Heist4_Tee_005_F"):
			return 30544;
			break;
		case joaat("MP_Heist4_Tee_006_M"):
		case joaat("MP_Heist4_Tee_006_F"):
			return 30545;
			break;
		case joaat("MP_Heist4_Tee_027_M"):
		case joaat("MP_Heist4_Tee_027_F"):
			return 30546;
			break;
		case joaat("MP_Heist4_Tee_026_M"):
		case joaat("MP_Heist4_Tee_026_F"):
			return 30547;
			break;
		case joaat("MP_Heist4_Tee_025_M"):
		case joaat("MP_Heist4_Tee_025_F"):
			return 30548;
			break;
		case joaat("MP_Heist4_Tee_024_M"):
		case joaat("MP_Heist4_Tee_024_F"):
			return 30549;
			break;
		case joaat("MP_Heist4_Tee_002_M"):
		case joaat("MP_Heist4_Tee_002_F"):
			return 30550;
			break;
		case joaat("MP_Heist4_Tee_001_M"):
		case joaat("MP_Heist4_Tee_001_F"):
			return 30551;
			break;
		case joaat("MP_Heist4_Tee_000_M"):
		case joaat("MP_Heist4_Tee_000_F"):
			return 30552;
			break;
		case joaat("MP_Heist4_Tee_007_M"):
		case joaat("MP_Heist4_Tee_007_F"):
			return 30553;
			break;
		case joaat("MP_Heist4_Tee_008_M"):
		case joaat("MP_Heist4_Tee_008_F"):
			return 30554;
			break;
		case joaat("MP_Heist4_Tee_009_M"):
		case joaat("MP_Heist4_Tee_009_F"):
			return 30555;
			break;
		case joaat("MP_Heist4_Tee_010_M"):
		case joaat("MP_Heist4_Tee_010_F"):
			return 30556;
			break;
		case joaat("MP_Heist4_Tee_011_M"):
		case joaat("MP_Heist4_Tee_011_F"):
			return 30557;
			break;
		case joaat("MP_Heist4_Tee_012_M"):
		case joaat("MP_Heist4_Tee_012_F"):
			return 30524;
			break;
		case joaat("MP_Heist4_Tee_013_M"):
		case joaat("MP_Heist4_Tee_013_F"):
			return 30525;
			break;
		case joaat("MP_Heist4_Tee_014_M"):
		case joaat("MP_Heist4_Tee_014_F"):
			return 30526;
			break;
		case joaat("MP_Heist4_Tee_015_M"):
		case joaat("MP_Heist4_Tee_015_F"):
			return 30527;
			break;
		case joaat("MP_Heist4_Tee_016_M"):
		case joaat("MP_Heist4_Tee_016_F"):
			return 30528;
			break;
		case joaat("MP_Heist4_Tee_017_M"):
		case joaat("MP_Heist4_Tee_017_F"):
			return 30529;
			break;
		case joaat("MP_Heist4_Tee_018_M"):
		case joaat("MP_Heist4_Tee_018_F"):
			return 30530;
			break;
		case joaat("MP_Heist4_Tee_019_M"):
		case joaat("MP_Heist4_Tee_019_F"):
			return 30531;
			break;
		case joaat("MP_Heist4_Tee_033_M"):
		case joaat("MP_Heist4_Tee_033_F"):
			return 30532;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_JBIB_8_0"):
		case joaat("DLC_MP_H4_F_JBIB_9_0"):
		case joaat("DLC_MP_H4_M_JBIB_8_0"):
		case joaat("DLC_MP_H4_M_JBIB_9_0"):
			return 30563;
			break;
		case joaat("DLC_MP_H4_F_JBIB_10_0"):
		case joaat("DLC_MP_H4_M_JBIB_10_0"):
			return 30564;
			break;
		case joaat("DLC_MP_H4_F_JBIB_5_0"):
		case joaat("DLC_MP_H4_M_JBIB_6_0"):
			return 30565;
			break;
		case joaat("DLC_MP_H4_F_JBIB_5_1"):
		case joaat("DLC_MP_H4_M_JBIB_6_1"):
			return 30566;
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_5"):
		case joaat("DLC_MP_H4_F_JBIB_7_1"):
			return 30567;
			break;
		case joaat("MP_Heist4_Tee_048_M"):
		case joaat("MP_Heist4_Tee_048_F"):
			return 30568;
			break;
		case joaat("MP_Heist4_Tee_047_M"):
		case joaat("MP_Heist4_Tee_047_F"):
			return 30569;
			break;
		case joaat("MP_Heist4_Tee_045_M"):
		case joaat("MP_Heist4_Tee_045_F"):
			return 30570;
			break;
		case joaat("MP_Heist4_Tee_046_M"):
		case joaat("MP_Heist4_Tee_046_F"):
			return 30571;
			break;
		case joaat("DLC_MP_H4_F_JBIB_7_5"):
		case joaat("DLC_MP_H4_M_JBIB_0_9"):
			return 30572;
			break;
		case joaat("DLC_MP_H4_F_JBIB_7_4"):
		case joaat("DLC_MP_H4_M_JBIB_0_8"):
			return 30573;
			break;
		case joaat("DLC_MP_H4_M_DECL_0_0"):
		case joaat("DLC_MP_H4_F_DECL_0_0"):
			return 30574;
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_6"):
		case joaat("DLC_MP_H4_F_JBIB_7_2"):
			return 30575;
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_7"):
		case joaat("DLC_MP_H4_F_JBIB_7_3"):
			return 30576;
			break;
		case joaat("DLC_MP_H4_M_JBIB_5_0"):
		case joaat("DLC_MP_H4_F_JBIB_4_0"):
			return 30577;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_4"):
		case joaat("DLC_MP_H4_M_JBIB_7_4"):
			return 30578;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_3"):
		case joaat("DLC_MP_H4_M_JBIB_7_3"):
			return 30579;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_2"):
		case joaat("DLC_MP_H4_M_JBIB_7_2"):
			return 30580;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_7_1"):
			return 30581;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_0"):
		case joaat("DLC_MP_H4_M_JBIB_7_0"):
			return 30582;
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_0"):
		case joaat("DLC_MP_H4_M_LEGS_1_0"):
			return 30583;
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_1"):
		case joaat("DLC_MP_H4_M_LEGS_1_1"):
			return 30584;
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_2"):
		case joaat("DLC_MP_H4_M_LEGS_1_2"):
			return 30585;
			break;
		case joaat("DLC_MP_H4_F_LEGS_0_0"):
		case joaat("DLC_MP_H4_M_LEGS_0_0"):
			return 30586;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_0"):
		case joaat("DLC_MP_H4_M_PHEAD_1_0"):
		case joaat("DLC_MP_H4_F_PHEAD_2_0"):
		case joaat("DLC_MP_H4_M_PHEAD_2_0"):
			return 30587;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_1"):
		case joaat("DLC_MP_H4_M_PHEAD_1_1"):
		case joaat("DLC_MP_H4_F_PHEAD_2_1"):
		case joaat("DLC_MP_H4_M_PHEAD_2_1"):
			return 30588;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_2"):
		case joaat("DLC_MP_H4_M_PHEAD_1_2"):
		case joaat("DLC_MP_H4_F_PHEAD_2_2"):
		case joaat("DLC_MP_H4_M_PHEAD_2_2"):
			return 30589;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_3"):
		case joaat("DLC_MP_H4_M_PHEAD_1_3"):
		case joaat("DLC_MP_H4_F_PHEAD_2_3"):
		case joaat("DLC_MP_H4_M_PHEAD_2_3"):
			return 30590;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_4"):
		case joaat("DLC_MP_H4_M_PHEAD_1_4"):
		case joaat("DLC_MP_H4_F_PHEAD_2_4"):
		case joaat("DLC_MP_H4_M_PHEAD_2_4"):
			return 30591;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
			return 30592;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
			return 30593;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
			return 30594;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
			return 30595;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
			return 30596;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
			return 30597;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
			return 30598;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
			return 30599;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
			return 30600;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
			return 30601;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
			return 30602;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
			return 30603;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PEYES_0_0"):
		case joaat("DLC_MP_H4_M_PEYES_0_0"):
			return 30604;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_1"):
		case joaat("DLC_MP_H4_M_PEYES_0_1"):
			return 30605;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_2"):
		case joaat("DLC_MP_H4_M_PEYES_0_2"):
			return 30606;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_3"):
		case joaat("DLC_MP_H4_M_PEYES_0_3"):
			return 30607;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_4"):
		case joaat("DLC_MP_H4_M_PEYES_0_4"):
			return 30608;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_5"):
		case joaat("DLC_MP_H4_M_PEYES_0_5"):
			return 30609;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_6"):
		case joaat("DLC_MP_H4_M_PEYES_0_6"):
			return 30610;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_7"):
		case joaat("DLC_MP_H4_M_PEYES_0_7"):
			return 30611;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_8"):
		case joaat("DLC_MP_H4_M_PEYES_0_8"):
			return 30612;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_9"):
		case joaat("DLC_MP_H4_M_PEYES_0_9"):
			return 30613;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_10"):
		case joaat("DLC_MP_H4_M_PEYES_0_10"):
			return 30614;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_11"):
		case joaat("DLC_MP_H4_M_PEYES_0_11"):
			return 30615;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_TEETH_13_0"):
		case joaat("DLC_MP_H4_M_TEETH_13_0"):
		case joaat("DLC_MP_H4_F_TEETH_14_0"):
		case joaat("DLC_MP_H4_M_TEETH_14_0"):
			return 30616;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_1"):
		case joaat("DLC_MP_H4_M_TEETH_13_1"):
		case joaat("DLC_MP_H4_F_TEETH_14_1"):
		case joaat("DLC_MP_H4_M_TEETH_14_1"):
			return 30617;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_2"):
		case joaat("DLC_MP_H4_M_TEETH_13_2"):
		case joaat("DLC_MP_H4_F_TEETH_14_2"):
		case joaat("DLC_MP_H4_M_TEETH_14_2"):
			return 30618;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_3"):
		case joaat("DLC_MP_H4_M_TEETH_13_3"):
		case joaat("DLC_MP_H4_F_TEETH_14_3"):
		case joaat("DLC_MP_H4_M_TEETH_14_3"):
			return 30619;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_4"):
		case joaat("DLC_MP_H4_M_TEETH_13_4"):
		case joaat("DLC_MP_H4_F_TEETH_14_4"):
		case joaat("DLC_MP_H4_M_TEETH_14_4"):
			return 30620;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_5"):
		case joaat("DLC_MP_H4_M_TEETH_13_5"):
		case joaat("DLC_MP_H4_F_TEETH_14_5"):
		case joaat("DLC_MP_H4_M_TEETH_14_5"):
			return 30621;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_6"):
		case joaat("DLC_MP_H4_M_TEETH_13_6"):
		case joaat("DLC_MP_H4_F_TEETH_14_6"):
		case joaat("DLC_MP_H4_M_TEETH_14_6"):
			return 30622;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_7"):
		case joaat("DLC_MP_H4_M_TEETH_13_7"):
		case joaat("DLC_MP_H4_F_TEETH_14_7"):
		case joaat("DLC_MP_H4_M_TEETH_14_7"):
			return 30623;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_8"):
		case joaat("DLC_MP_H4_M_TEETH_13_8"):
		case joaat("DLC_MP_H4_F_TEETH_14_8"):
		case joaat("DLC_MP_H4_M_TEETH_14_8"):
			return 30624;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_9"):
		case joaat("DLC_MP_H4_M_TEETH_13_9"):
		case joaat("DLC_MP_H4_F_TEETH_14_9"):
		case joaat("DLC_MP_H4_M_TEETH_14_9"):
			return 30625;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_10"):
		case joaat("DLC_MP_H4_M_TEETH_13_10"):
		case joaat("DLC_MP_H4_F_TEETH_14_10"):
		case joaat("DLC_MP_H4_M_TEETH_14_10"):
			return 30626;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_11"):
		case joaat("DLC_MP_H4_M_TEETH_13_11"):
		case joaat("DLC_MP_H4_F_TEETH_14_11"):
		case joaat("DLC_MP_H4_M_TEETH_14_11"):
			return 30627;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_12"):
		case joaat("DLC_MP_H4_M_TEETH_13_12"):
		case joaat("DLC_MP_H4_F_TEETH_14_12"):
		case joaat("DLC_MP_H4_M_TEETH_14_12"):
			return 30628;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_13"):
		case joaat("DLC_MP_H4_M_TEETH_13_13"):
		case joaat("DLC_MP_H4_F_TEETH_14_13"):
		case joaat("DLC_MP_H4_M_TEETH_14_13"):
			return 30629;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_14"):
		case joaat("DLC_MP_H4_M_TEETH_13_14"):
		case joaat("DLC_MP_H4_F_TEETH_14_14"):
		case joaat("DLC_MP_H4_M_TEETH_14_14"):
			return 30630;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_15"):
		case joaat("DLC_MP_H4_M_TEETH_13_15"):
		case joaat("DLC_MP_H4_F_TEETH_14_15"):
		case joaat("DLC_MP_H4_M_TEETH_14_15"):
			return 30631;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_BERD_4_0"):
		case joaat("DLC_MP_H4_F_BERD_4_0"):
			return 30674;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_1"):
		case joaat("DLC_MP_H4_F_BERD_4_1"):
			return 30675;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_2"):
		case joaat("DLC_MP_H4_F_BERD_4_2"):
			return 30676;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_3"):
		case joaat("DLC_MP_H4_F_BERD_4_3"):
			return 30677;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_4"):
		case joaat("DLC_MP_H4_F_BERD_4_4"):
			return 30678;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_5"):
		case joaat("DLC_MP_H4_F_BERD_4_5"):
			return 30679;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_6"):
		case joaat("DLC_MP_H4_F_BERD_4_6"):
			return 30680;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_7"):
		case joaat("DLC_MP_H4_F_BERD_4_7"):
			return 30681;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_8"):
		case joaat("DLC_MP_H4_F_BERD_4_8"):
			return 30682;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_9"):
		case joaat("DLC_MP_H4_F_BERD_4_9"):
			return 30683;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_10"):
		case joaat("DLC_MP_H4_F_BERD_4_10"):
			return 30684;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_11"):
		case joaat("DLC_MP_H4_F_BERD_4_11"):
			return 30685;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_12"):
		case joaat("DLC_MP_H4_F_BERD_4_12"):
			return 30686;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_13"):
		case joaat("DLC_MP_H4_F_BERD_4_13"):
			return 30687;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_14"):
		case joaat("DLC_MP_H4_F_BERD_4_14"):
			return 30688;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_15"):
		case joaat("DLC_MP_H4_F_BERD_4_15"):
			return 30689;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_16"):
		case joaat("DLC_MP_H4_F_BERD_4_16"):
			return 30690;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_17"):
		case joaat("DLC_MP_H4_F_BERD_4_17"):
			return 30691;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_18"):
		case joaat("DLC_MP_H4_F_BERD_4_18"):
			return 30692;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_19"):
		case joaat("DLC_MP_H4_F_BERD_4_19"):
			return 30693;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_PEYES_1_0"):
		case joaat("DLC_MP_H4_F_PEYES_1_0"):
			return 30638;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_1"):
		case joaat("DLC_MP_H4_F_PEYES_1_1"):
			return 30639;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_2"):
		case joaat("DLC_MP_H4_F_PEYES_1_2"):
			return 30640;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_3"):
		case joaat("DLC_MP_H4_F_PEYES_1_3"):
			return 30641;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_4"):
		case joaat("DLC_MP_H4_F_PEYES_1_4"):
			return 30642;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_5"):
		case joaat("DLC_MP_H4_F_PEYES_1_5"):
			return 30643;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_6"):
		case joaat("DLC_MP_H4_F_PEYES_1_6"):
			return 30644;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_7"):
		case joaat("DLC_MP_H4_F_PEYES_1_7"):
			return 30645;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_8"):
		case joaat("DLC_MP_H4_F_PEYES_1_8"):
			return 30646;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_9"):
		case joaat("DLC_MP_H4_F_PEYES_1_9"):
			return 30647;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_10"):
		case joaat("DLC_MP_H4_F_PEYES_1_10"):
			return 30648;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_11"):
		case joaat("DLC_MP_H4_F_PEYES_1_11"):
			return 30649;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_0"):
		case joaat("DLC_MP_H4_F_PEYES_2_0"):
			return 30650;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_1"):
		case joaat("DLC_MP_H4_F_PEYES_2_1"):
			return 30651;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_2"):
		case joaat("DLC_MP_H4_F_PEYES_2_2"):
			return 30652;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_3"):
		case joaat("DLC_MP_H4_F_PEYES_2_3"):
			return 30653;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_4"):
		case joaat("DLC_MP_H4_F_PEYES_2_4"):
			return 30654;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_5"):
		case joaat("DLC_MP_H4_F_PEYES_2_5"):
			return 30655;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_6"):
		case joaat("DLC_MP_H4_F_PEYES_2_6"):
			return 30656;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_7"):
		case joaat("DLC_MP_H4_F_PEYES_2_7"):
			return 30657;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_8"):
		case joaat("DLC_MP_H4_F_PEYES_2_8"):
			return 30658;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_9"):
		case joaat("DLC_MP_H4_F_PEYES_2_9"):
			return 30659;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_10"):
		case joaat("DLC_MP_H4_F_PEYES_2_10"):
			return 30660;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_11"):
		case joaat("DLC_MP_H4_F_PEYES_2_11"):
			return 30661;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_0"):
		case joaat("DLC_MP_H4_F_PEYES_3_0"):
			return 30662;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_1"):
		case joaat("DLC_MP_H4_F_PEYES_3_1"):
			return 30663;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_2"):
		case joaat("DLC_MP_H4_F_PEYES_3_2"):
			return 30664;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_3"):
		case joaat("DLC_MP_H4_F_PEYES_3_3"):
			return 30665;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_4"):
		case joaat("DLC_MP_H4_F_PEYES_3_4"):
			return 30666;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_5"):
		case joaat("DLC_MP_H4_F_PEYES_3_5"):
			return 30667;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_6"):
		case joaat("DLC_MP_H4_F_PEYES_3_6"):
			return 30668;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_7"):
		case joaat("DLC_MP_H4_F_PEYES_3_7"):
			return 30669;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_8"):
		case joaat("DLC_MP_H4_F_PEYES_3_8"):
			return 30670;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_9"):
		case joaat("DLC_MP_H4_F_PEYES_3_9"):
			return 30671;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_10"):
		case joaat("DLC_MP_H4_F_PEYES_3_10"):
			return 30672;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_11"):
		case joaat("DLC_MP_H4_F_PEYES_3_11"):
			return 30673;
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_Tee_000_M"):
		case joaat("mpSum_Tee_000_F"):
			return 30260;
			break;
		case joaat("mpSum_Tee_001_M"):
		case joaat("mpSum_Tee_001_F"):
			return 30261;
			break;
		case joaat("mpSum_Tee_002_M"):
		case joaat("mpSum_Tee_002_F"):
			return 30262;
			break;
		case joaat("mpSum_Tee_003_M"):
		case joaat("mpSum_Tee_003_F"):
			return 30263;
			break;
		case joaat("mpSum_Tee_004_M"):
		case joaat("mpSum_Tee_004_F"):
			return 30264;
			break;
		case joaat("mpSum_Tee_005_M"):
		case joaat("mpSum_Tee_005_F"):
			return 30265;
			break;
		case joaat("mpSum_Tee_006_M"):
		case joaat("mpSum_Tee_006_F"):
			return 30266;
			break;
		case joaat("mpSum_Tee_007_M"):
		case joaat("mpSum_Tee_007_F"):
			return 30267;
			break;
		case joaat("mpSum_Tee_008_M"):
		case joaat("mpSum_Tee_008_F"):
			return 30268;
			break;
		case joaat("mpSum_Tee_009_M"):
		case joaat("mpSum_Tee_009_F"):
			return 30269;
			break;
		case joaat("mpSum_Tee_010_M"):
		case joaat("mpSum_Tee_010_F"):
			return 30270;
			break;
		case joaat("mpSum_Tee_011_M"):
		case joaat("mpSum_Tee_011_F"):
			return 30271;
			break;
		case joaat("mpSum_Tee_012_M"):
		case joaat("mpSum_Tee_012_F"):
			return 30272;
			break;
		case joaat("mpSum_Tee_013_M"):
		case joaat("mpSum_Tee_013_F"):
			return 30273;
			break;
		case joaat("mpSum_Tee_014_M"):
		case joaat("mpSum_Tee_014_F"):
			return 30274;
			break;
		case joaat("mpSum_Tee_015_M"):
		case joaat("mpSum_Tee_015_F"):
			return 30275;
			break;
		case joaat("mpSum_Tee_016_M"):
		case joaat("mpSum_Tee_016_F"):
			return 30276;
			break;
		case joaat("mpSum_Tee_017_M"):
		case joaat("mpSum_Tee_017_F"):
			return 30277;
			break;
		case joaat("mpSum_Tee_018_M"):
		case joaat("mpSum_Tee_018_F"):
			return 30278;
			break;
		case joaat("mpSum_Tee_019_M"):
		case joaat("mpSum_Tee_019_F"):
			return 30279;
			break;
		case joaat("mpSum_Tee_020_M"):
		case joaat("mpSum_Tee_020_F"):
			return 30280;
			break;
		case joaat("mpSum_Tee_021_M"):
		case joaat("mpSum_Tee_021_F"):
			return 30281;
			break;
		case joaat("mpSum_Tee_022_M"):
		case joaat("mpSum_Tee_022_F"):
			return 30282;
			break;
		case joaat("mpSum_Tee_023_M"):
		case joaat("mpSum_Tee_023_F"):
			return 30283;
			break;
		case joaat("mpSum_Tee_024_M"):
		case joaat("mpSum_Tee_024_F"):
			return 30284;
			break;
		case joaat("mpSum_Tee_025_M"):
		case joaat("mpSum_Tee_025_F"):
			return 30285;
			break;
		case joaat("mpSum_Tee_026_M"):
		case joaat("mpSum_Tee_026_F"):
			return 30286;
			break;
		case joaat("mpSum_Tee_027_M"):
		case joaat("mpSum_Tee_027_F"):
			return 30287;
			break;
		case joaat("mpSum_Tee_028_M"):
		case joaat("mpSum_Tee_028_F"):
			return 30288;
			break;
		case joaat("mpSum_Tee_029_M"):
		case joaat("mpSum_Tee_029_F"):
			return 30289;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_4"):
		case joaat("DLC_MP_SUM_F_BERD_3_4"):
			return 30290;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_5"):
		case joaat("DLC_MP_SUM_F_BERD_3_5"):
			return 30291;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_6"):
		case joaat("DLC_MP_SUM_F_BERD_3_6"):
			return 30292;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_7"):
		case joaat("DLC_MP_SUM_F_BERD_3_7"):
			return 30293;
			break;
		case joaat("DLC_MP_SUM_M_LEGS_1_25"):
		case joaat("DLC_MP_SUM_F_LEGS_2_25"):
			return 30294;
			break;
		case joaat("DLC_MP_SUM_M_JBIB_0_25"):
		case joaat("DLC_MP_SUM_F_JBIB_0_25"):
			return 30295;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return 27194;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return 27195;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return 27196;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return 27197;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return 27198;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return 27199;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return 27200;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return 27201;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return 27202;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return 27203;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return 27204;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return 27205;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return 27206;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return 27207;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return 27208;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return 27209;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return 27210;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return 27211;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return 27212;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return 27213;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
		case joaat("MP_Christmas2018_Tee_000_F"):
			return 25032;
			break;
		case joaat("MP_Christmas2018_Tee_001_M"):
		case joaat("MP_Christmas2018_Tee_001_F"):
			return 25033;
			break;
		case joaat("MP_Christmas2018_Tee_002_M"):
		case joaat("MP_Christmas2018_Tee_002_F"):
			return 25034;
			break;
		case joaat("MP_Christmas2018_Tee_003_M"):
		case joaat("MP_Christmas2018_Tee_003_F"):
			return 25035;
			break;
		case joaat("MP_Christmas2018_Tee_004_M"):
		case joaat("MP_Christmas2018_Tee_004_F"):
			return 25036;
			break;
		case joaat("MP_Christmas2018_Tee_005_M"):
		case joaat("MP_Christmas2018_Tee_005_F"):
			return 25037;
			break;
		case joaat("MP_Christmas2018_Tee_006_M"):
		case joaat("MP_Christmas2018_Tee_006_F"):
			return 25038;
			break;
		case joaat("MP_Christmas2018_Tee_007_M"):
		case joaat("MP_Christmas2018_Tee_007_F"):
			return 25039;
			break;
		case joaat("MP_Christmas2018_Tee_008_M"):
		case joaat("MP_Christmas2018_Tee_008_F"):
			return 25040;
			break;
		case joaat("MP_Christmas2018_Tee_009_M"):
		case joaat("MP_Christmas2018_Tee_009_F"):
			return 25041;
			break;
		case joaat("MP_Christmas2018_Tee_010_M"):
		case joaat("MP_Christmas2018_Tee_010_F"):
			return 25042;
			break;
		case joaat("MP_Christmas2018_Tee_011_M"):
		case joaat("MP_Christmas2018_Tee_011_F"):
			return 25043;
			break;
		case joaat("MP_Christmas2018_Tee_012_M"):
		case joaat("MP_Christmas2018_Tee_012_F"):
			return 25044;
			break;
		case joaat("MP_Christmas2018_Tee_013_M"):
		case joaat("MP_Christmas2018_Tee_013_F"):
			return 25045;
			break;
		case joaat("MP_Christmas2018_Tee_014_M"):
		case joaat("MP_Christmas2018_Tee_014_F"):
			return 25046;
			break;
		case joaat("MP_Christmas2018_Tee_015_M"):
		case joaat("MP_Christmas2018_Tee_015_F"):
			return 25047;
			break;
		case joaat("MP_Christmas2018_Tee_016_M"):
		case joaat("MP_Christmas2018_Tee_016_F"):
			return 25048;
			break;
		case joaat("MP_Christmas2018_Tee_017_M"):
		case joaat("MP_Christmas2018_Tee_017_F"):
			return 25049;
			break;
		case joaat("MP_Christmas2018_Tee_018_M"):
		case joaat("MP_Christmas2018_Tee_018_F"):
			return 25050;
			break;
		case joaat("MP_Christmas2018_Tee_019_M"):
		case joaat("MP_Christmas2018_Tee_019_F"):
			return 25051;
			break;
		case joaat("MP_Christmas2018_Tee_020_M"):
		case joaat("MP_Christmas2018_Tee_020_F"):
			return 25052;
			break;
		case joaat("MP_Christmas2018_Tee_021_M"):
		case joaat("MP_Christmas2018_Tee_021_F"):
			return 25053;
			break;
		case joaat("MP_Christmas2018_Tee_022_M"):
		case joaat("MP_Christmas2018_Tee_022_F"):
			return 25054;
			break;
		case joaat("MP_Christmas2018_Tee_023_M"):
		case joaat("MP_Christmas2018_Tee_023_F"):
			return 25055;
			break;
		case joaat("MP_Christmas2018_Tee_024_M"):
		case joaat("MP_Christmas2018_Tee_024_F"):
			return 25056;
			break;
		case joaat("MP_Christmas2018_Tee_025_M"):
		case joaat("MP_Christmas2018_Tee_025_F"):
			return 25057;
			break;
		case joaat("MP_Christmas2018_Tee_026_M"):
		case joaat("MP_Christmas2018_Tee_026_F"):
			return 25058;
			break;
		case joaat("MP_Christmas2018_Tee_027_M"):
		case joaat("MP_Christmas2018_Tee_027_F"):
			return 25059;
			break;
		case joaat("MP_Christmas2018_Tee_028_M"):
		case joaat("MP_Christmas2018_Tee_028_F"):
			return 25060;
			break;
		case joaat("MP_Christmas2018_Tee_029_M"):
		case joaat("MP_Christmas2018_Tee_029_F"):
			return 25061;
			break;
		case joaat("MP_Christmas2018_Tee_030_M"):
		case joaat("MP_Christmas2018_Tee_030_F"):
			return 25062;
			break;
		case joaat("MP_Christmas2018_Tee_031_M"):
		case joaat("MP_Christmas2018_Tee_031_F"):
			return 25063;
			break;
		case joaat("MP_Christmas2018_Tee_032_M"):
		case joaat("MP_Christmas2018_Tee_032_F"):
			return 25064;
			break;
		case joaat("MP_Christmas2018_Tee_033_M"):
		case joaat("MP_Christmas2018_Tee_033_F"):
			return 25065;
			break;
		case joaat("MP_Christmas2018_Tee_034_M"):
		case joaat("MP_Christmas2018_Tee_034_F"):
			return 25066;
			break;
		case joaat("MP_Christmas2018_Tee_035_M"):
		case joaat("MP_Christmas2018_Tee_035_F"):
			return 25067;
			break;
		case joaat("MP_Christmas2018_Tee_036_M"):
		case joaat("MP_Christmas2018_Tee_036_F"):
			return 25068;
			break;
		case joaat("MP_Christmas2018_Tee_037_M"):
		case joaat("MP_Christmas2018_Tee_037_F"):
			return 25069;
			break;
		case joaat("MP_Christmas2018_Tee_038_M"):
		case joaat("MP_Christmas2018_Tee_038_F"):
			return 25070;
			break;
		case joaat("MP_Christmas2018_Tee_039_M"):
		case joaat("MP_Christmas2018_Tee_039_F"):
			return 25071;
			break;
		case joaat("MP_Christmas2018_Tee_040_M"):
		case joaat("MP_Christmas2018_Tee_040_F"):
			return 25072;
			break;
		case joaat("MP_Christmas2018_Tee_041_M"):
		case joaat("MP_Christmas2018_Tee_041_F"):
			return 25073;
			break;
		case joaat("MP_Christmas2018_Tee_042_M"):
		case joaat("MP_Christmas2018_Tee_042_F"):
			return 25074;
			break;
		case joaat("MP_Christmas2018_Tee_043_M"):
		case joaat("MP_Christmas2018_Tee_043_F"):
			return 25075;
			break;
		case joaat("MP_Christmas2018_Tee_044_M"):
		case joaat("MP_Christmas2018_Tee_044_F"):
			return 25076;
			break;
		case joaat("MP_Christmas2018_Tee_045_M"):
		case joaat("MP_Christmas2018_Tee_045_F"):
			return 25077;
			break;
		case joaat("MP_Christmas2018_Tee_046_M"):
		case joaat("MP_Christmas2018_Tee_046_F"):
			return 25078;
			break;
		case joaat("MP_Christmas2018_Tee_047_M"):
		case joaat("MP_Christmas2018_Tee_047_F"):
			return 25079;
			break;
		case joaat("MP_Christmas2018_Tee_048_M"):
		case joaat("MP_Christmas2018_Tee_048_F"):
			return 25080;
			break;
		case joaat("MP_Christmas2018_Tee_049_M"):
		case joaat("MP_Christmas2018_Tee_049_F"):
			return 25081;
			break;
		case joaat("MP_Christmas2018_Tee_050_M"):
		case joaat("MP_Christmas2018_Tee_050_F"):
			return 25082;
			break;
		case joaat("MP_Christmas2018_Tee_051_M"):
		case joaat("MP_Christmas2018_Tee_051_F"):
			return 25083;
			break;
		case joaat("MP_Christmas2018_Tee_052_M"):
		case joaat("MP_Christmas2018_Tee_052_F"):
			return 25084;
			break;
		case joaat("MP_Christmas2018_Tee_053_M"):
		case joaat("MP_Christmas2018_Tee_053_F"):
			return 25085;
			break;
		case joaat("MP_Christmas2018_Tee_054_M"):
		case joaat("MP_Christmas2018_Tee_054_F"):
			return 25086;
			break;
		case joaat("MP_Christmas2018_Tee_055_M"):
		case joaat("MP_Christmas2018_Tee_055_F"):
			return 25087;
			break;
		case joaat("MP_Christmas2018_Tee_056_M"):
		case joaat("MP_Christmas2018_Tee_056_F"):
			return 25088;
			break;
		case joaat("MP_Christmas2018_Tee_057_M"):
		case joaat("MP_Christmas2018_Tee_057_F"):
			return 25089;
			break;
		case joaat("MP_Christmas2018_Tee_058_M"):
		case joaat("MP_Christmas2018_Tee_058_F"):
			return 25090;
			break;
		case joaat("MP_Christmas2018_Tee_059_M"):
		case joaat("MP_Christmas2018_Tee_059_F"):
			return 25091;
			break;
		case joaat("MP_Christmas2018_Tee_060_M"):
		case joaat("MP_Christmas2018_Tee_060_F"):
			return 25092;
			break;
		case joaat("MP_Christmas2018_Tee_061_M"):
		case joaat("MP_Christmas2018_Tee_061_F"):
			return 25093;
			break;
		case joaat("MP_Christmas2018_Tee_062_M"):
		case joaat("MP_Christmas2018_Tee_062_F"):
			return 25094;
			break;
		case joaat("MP_Christmas2018_Tee_063_M"):
		case joaat("MP_Christmas2018_Tee_063_F"):
			return 25095;
			break;
		case joaat("MP_Christmas2018_Tee_064_M"):
		case joaat("MP_Christmas2018_Tee_064_F"):
			return 25096;
			break;
		case joaat("MP_Christmas2018_Tee_065_M"):
		case joaat("MP_Christmas2018_Tee_065_F"):
			return 25097;
			break;
		case joaat("MP_Christmas2018_Tee_066_M"):
		case joaat("MP_Christmas2018_Tee_066_F"):
			return 25098;
			break;
		case joaat("MP_Christmas2018_Tee_067_M"):
		case joaat("MP_Christmas2018_Tee_067_F"):
			return 25099;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return 25022;
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return 25023;
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return 25024;
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return 25025;
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return 25026;
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return 25027;
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return 25028;
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return 25019;
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return 25029;
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return 25021;
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return 25018;
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return 25020;
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return 25030;
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return 25031;
		default:
	}
	switch (iParam0)
	{
		case joaat("WP_WT_RAYPISTOL_t0_v0"):
			return 25002;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return 22108;
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return 9481;
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return 9470;
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return 9475;
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return 9472;
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return 9465;
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return 9463;
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return 9464;
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return 9468;
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return 9469;
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return 9479;
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return 9473;
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return 9480;
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return 9476;
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return 9477;
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return 9471;
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return 9474;
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return 9467;
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return 9478;
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return 9462;
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return 9466;
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return 22126;
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return 22127;
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return 22128;
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return 22124;
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return 22130;
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return 22125;
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return 22129;
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return 22131;
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return 22132;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return 22147;
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return 22148;
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return 22149;
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return 22150;
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return 22151;
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return 22152;
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return 22153;
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return 22154;
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return 22155;
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return 22156;
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return 22157;
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return 22158;
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return 22159;
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return 22160;
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return 22161;
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return 22162;
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return 22163;
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return 22164;
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return 22165;
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return 22166;
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return 22167;
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return 22168;
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return 22169;
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return 22170;
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return 22171;
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return 22172;
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return 22173;
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return 22174;
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return 22175;
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return 22176;
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return 22177;
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return 22178;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return 18099;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return 18121;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return 18122;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return 18123;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return 18124;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return 18125;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return 18134;
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return 18135;
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return 18136;
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return 18137;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return 15417;
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return 15418;
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return 15425;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return 15405;
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return 15393;
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return 15409;
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return 15396;
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return 15412;
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return 15403;
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return 15389;
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return 15398;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return 15400;
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return 15408;
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return 15411;
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return 15397;
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return 15413;
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return 15391;
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return 15388;
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return 15401;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return 15394;
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return 15406;
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return 15395;
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return 15410;
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return 15407;
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return 15414;
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return 15415;
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return 15399;
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return 15404;
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return 15392;
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return 15390;
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return 15402;
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return 15416;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 9443;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return 9366;
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return 9367;
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return 9369;
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return 9368;
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return 9365;
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return 9364;
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return 9363;
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return 9362;
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return 9370;
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return 9371;
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return 9372;
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return 9373;
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return 9374;
		case joaat("MP_Biker_Award_000_M"):
		case joaat("MP_Biker_Award_000_F"):
			return 9384;
		case joaat("MP_Biker_Award_001_M"):
		case joaat("MP_Biker_Award_001_F"):
			return 9385;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return 9375;
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return 9376;
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return 9377;
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return 9378;
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return 9379;
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return 9380;
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return 9381;
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return 9382;
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return 9383;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return 7595;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return 7596;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return 7597;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return 7599;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return 7600;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return 7598;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return 7601;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return 7482;
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return 7483;
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return 7484;
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return 7485;
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return 7486;
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return 7487;
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return 7488;
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return 7489;
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return 7490;
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return 7491;
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return 7492;
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return 7493;
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return 7494;
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return 7495;
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return 7515;
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return 7516;
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return 7517;
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return 7518;
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return 7519;
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return 7520;
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return 7521;
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return 7522;
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return 7523;
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return 7524;
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return 7525;
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return 7526;
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return 7527;
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return 7528;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return 4247;
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return 4248;
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return 4249;
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return 4250;
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return 4251;
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return 4252;
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return 4253;
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return 4254;
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return 4255;
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return 4256;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_0"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_0"):
			return 110;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_1"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_1"):
			return 111;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_2"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_2"):
			return 112;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_XMAS2_F_PHEAD_4_0"):
		case joaat("DLC_MP_XMAS2_F_PHEAD_5_0"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_4_0"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_5_0"):
			return 4333;
		case joaat("DLC_MP_XMAS2_F_PHEAD_4_3"):
		case joaat("DLC_MP_XMAS2_F_PHEAD_5_3"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_4_3"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_5_3"):
			return 4334;
		case joaat("DLC_MP_XMAS3_M_BERD_10_0"):
		case joaat("DLC_MP_XMAS3_F_BERD_10_0"):
			return 4335;
		case joaat("DLC_MP_XMAS2_M_BERD_1_0"):
		case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			return 3750;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return 3594;
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return 3595;
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return 3596;
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return 3597;
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return 3598;
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return 3599;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return 3616;
		case joaat("FM_LTS_M_Tshirt_000"):
		case joaat("FM_LTS_F_Tshirt_000"):
			return 3615;
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return 9440;
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return 9430;
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return 9426;
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return 9427;
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return 9428;
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return 9431;
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return 9432;
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return 9433;
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return 9439;
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return 9434;
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return 9435;
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return 9436;
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return 9429;
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return 9437;
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return 3593;
		default:
	}
	return -1;
}

int func_6366(int iParam0)//Position - 0x2007C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = -99;
	iVar2 = -1;
	iVar0 = __LIB_12__::func_546(iParam0);
	if (iVar0 == -1)
	{
		return 1;
	}
	if (__LIB_1__::func_394())
	{
		iVar3 = __LIB_12__::func_498(iVar0);
		if (iVar3 != -1)
		{
			iVar1 = __LIB_0__::func_204(joaat("MP_F_Freemode_01"), iVar0, __LIB_12__::func_498(iVar0), 4);
		}
		iVar2 = __LIB_0__::func_266(iVar0, 4);
		if ((__LIB_0__::func_137(func_6364(iVar0), -1) || (iVar2 != -1 && __LIB_2__::func_170(iVar2, -1))) || (iVar1 != -99 && __LIB_36__::func_130(joaat("MP_F_Freemode_01"), __LIB_12__::func_498(iVar0), iVar1)))
		{
			return 1;
		}
	}
	else
	{
		iVar4 = __LIB_12__::func_498(iVar0);
		if (iVar4 != -1)
		{
			iVar1 = __LIB_0__::func_204(joaat("MP_M_Freemode_01"), iVar0, __LIB_12__::func_498(iVar0), 3);
		}
		iVar2 = __LIB_0__::func_266(iVar0, 3);
		if ((__LIB_0__::func_137(func_6364(iVar0), -1) || (iVar2 != -1 && __LIB_2__::func_170(iVar2, -1))) || (iVar1 != -99 && __LIB_36__::func_130(joaat("MP_M_Freemode_01"), __LIB_12__::func_498(iVar0), iVar1)))
		{
			return 1;
		}
	}
	return 0;
}

int func_6561()//Position - 0x20B4DF
{
	return Local_146.f_161;
}

void func_6568()//Position - 0x20B5BF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5783();
		func_380();
		if (__LIB_36__::func_806() == 3)
		{
		}
		Global_1943926 = 0;
		Global_2787549 = 0;
		Global_2787548 = 0;
		Global_1943929.f_2 = Local_146.f_176;
		Global_1943929.f_3 = Local_146.f_177;
		__LIB_30__::func_428(Global_1943929, Local_146.f_211[NETWORK::PARTICIPANT_ID_TO_INT()], iLocal_243, -1, -1);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_6615();
		}
		Global_2787546 = 0;
		__LIB_12__::func_846(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		__LIB_15__::func_448(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
		func_6614();
		Global_2787552 = 0;
		Global_2787551 = 0;
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_426 = -1;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		__LIB_34__::func_788(1, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_6614()//Position - 0x20D7D7
{
	int iVar0;
	if (!iLocal_249 || iLocal_222 < 1)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			func_644(PLAYER::PLAYER_PED_ID());
			func_645(PLAYER::PLAYER_PED_ID(), -1, -1, -1);
			PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), true);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(PLAYER::PLAYER_PED_ID(), true);
			MISC::SET_BIT(&(Global_2815059.f_4660), 22);
		}
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_146.f_184[iVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_146.f_195[iVar0]))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_146.f_195[iVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_146.f_195[iVar0]))
						{
							OBJECT::DELETE_OBJECT(&(Local_146.f_184[iVar0]));
							__LIB_1__::func_445(&(Local_146.f_195[iVar0]));
						}
					}
				}
			}
		}
		iVar0++;
	}
	__LIB_1__::func_354(2048, iLocal_222, -1, 1, 0);
	PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(PLAYER::PLAYER_ID(), 100f);
	MISC::SET_BIT(&(Global_2815059.f_4660), 22);
}

void func_6615()//Position - 0x20D8CA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_146.f_206[iVar0]))
		{
			__LIB_1__::func_518(&(Local_146.f_206[iVar0]));
		}
		iVar0++;
	}
}

int func_6618(struct<21> Param0)//Position - 0x20DAD6
{
	Global_1943926 = 0;
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	__LIB_30__::func_659(0, 0, 0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(__LIB_30__::func_459(172, -1, -1, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(__LIB_30__::func_848(172, -1, 1, -1, -1, -1));
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_146, 244, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_259, 193, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	iLocal_223 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	return 1;
}

