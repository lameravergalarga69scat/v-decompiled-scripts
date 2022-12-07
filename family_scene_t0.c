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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55[5] = { 0, 0, 0, 0, 0 };
	var uLocal_56[1] = { 0 };
	int iLocal_57[5] = { 0, 0, 0, 0, 0 };
	var uLocal_58[5] = { 0, 0, 0, 0, 0 };
	var uLocal_59[5] = { 0, 0, 0, 0, 0 };
	int iLocal_60[5] = { 0, 0, 0, 0, 0 };
	int iLocal_61[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_62[5];
	struct<3> Local_63[5];
	var uLocal_64[5] = { 0, 0, 0, 0, 0 };
	int iLocal_65[5] = { 0, 0, 0, 0, 0 };
	int iLocal_66[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_67[5];
	struct<3> Local_68[5];
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	int iLocal_74 = 0;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	struct<3> Local_77[5];
	var uLocal_78[5] = { 0, 0, 0, 0, 0 };
	var uLocal_79[5] = { 0, 0, 0, 0, 0 };
	var uLocal_80[5] = { 0, 0, 0, 0, 0 };
	var uLocal_81 = 0;
	var uLocal_82[5] = { 0, 0, 0, 0, 0 };
	int iLocal_83[5] = { 0, 0, 0, 0, 0 };
	struct<16> Local_84[5];
	struct<16> Local_85[5];
	struct<16> Local_86[5];
	struct<4> Local_87[5];
	char cLocal_88[16] = "";
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int* iLocal_92 = NULL;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97[5] = { 0, 0, 0, 0, 0 };
	int* iLocal_98 = NULL;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int* iLocal_101 = NULL;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104[5] = { 0, 0, 0, 0, 0 };
	var uLocal_105 = 16;
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
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272[5] = { 0, 0, 0, 0, 0 };
	struct<4> Local_273 = { 0, 0, 0, 0 } ;
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
	StringCopy(&cLocal_88, "", 16);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		func_653();
	}
	SYSTEM::WAIT(0);
	func_651(ScriptParam_273);
	func_650();
	while (__LIB_38__::func_147(0, Local_75, 1.5f) || __LIB_38__::func_147(2, Local_75, 1.5f))
	{
		SYSTEM::WAIT(0);
		func_35();
		__LIB_39__::func_913(4, &uLocal_48, Local_75, 12.5f, 12.5f, 10f, &uLocal_56);
	}
	func_653();
}

int func_35()//Position - 0x1240
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	struct<3> Var9;
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iLocal_91 = 0;
	bVar0 = false;
	__LIB_32__::func_788(&iLocal_91, &iLocal_92, &uLocal_95, &uLocal_96, Local_75, "v_trailer");
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_368(iVar1))
		{
			iVar2 = func_367(iVar1);
			iVar3 = 0;
			iVar4 = __LIB_11__::func_970(iVar2, &iVar3);
			if (iVar4 == __LIB_26__::func_499())
			{
				if (Global_95447[iVar2] != 141)
				{
					Global_95447[iVar2] = 141;
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_59[iVar1]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_59[iVar1], PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::DETACH_ENTITY(uLocal_59[iVar1], true, true);
						}
						else
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uLocal_59[iVar1], -8f, true);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_59[iVar1]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_59[iVar1], false);
							ENTITY::SET_ENTITY_DYNAMIC(uLocal_59[iVar1], true);
							ENTITY::SET_ENTITY_COLLISION(uLocal_59[iVar1], true, false);
							ENTITY::APPLY_FORCE_TO_ENTITY(uLocal_59[iVar1], 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, false, false, true);
						}
						iLocal_60[iVar1] = 0;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_64[iVar1]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_64[iVar1], PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::DETACH_ENTITY(uLocal_64[iVar1], true, true);
						}
						else
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uLocal_64[iVar1], -8f, true);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_64[iVar1]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_64[iVar1], false);
							ENTITY::SET_ENTITY_DYNAMIC(uLocal_64[iVar1], true);
							ENTITY::SET_ENTITY_COLLISION(uLocal_64[iVar1], true, false);
							ENTITY::APPLY_FORCE_TO_ENTITY(uLocal_64[iVar1], 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, false, false, true);
						}
						iLocal_65[iVar1] = 0;
					}
					if (iVar4 == 2)
					{
						iVar5 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 4);
						if (iVar5 == 25)
						{
							while (((!func_249(PLAYER::PLAYER_PED_ID(), 4, 91, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0) || !func_249(PLAYER::PLAYER_PED_ID(), 6, 28, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(PLAYER::PLAYER_PED_ID(), 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(PLAYER::PLAYER_PED_ID(), 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
							{
								SYSTEM::WAIT(0);
							}
						}
					}
				}
			}
			func_95(iVar1);
			if (!bVar0)
			{
				if (!Global_113386.f_18514.f_18)
				{
					if (__LIB_0__::func_176(14) && __LIB_32__::func_786(2))
					{
						iVar6 = 0;
						if (func_52(uLocal_55[iVar1], Global_95447[iVar2], &uLocal_105, "FMTAUD", &Local_87, &iLocal_98, &iVar6, 8f, "FMT_COUNTRY", 0))
						{
							bVar0 = true;
							Global_113386.f_18514.f_18 = 1;
						}
					}
				}
				if (iVar1 == 3)
				{
					if (!iLocal_53)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(uLocal_55[iVar1]))
						{
							bVar7 = true;
							Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
							Var9 = { ENTITY::GET_ENTITY_COORDS(uLocal_55[iVar1], true) };
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var8, Var9, false) > 5f)
							{
								bVar7 = false;
							}
							if (bVar7)
							{
								__LIB_6__::func_834(uLocal_55[iVar1], "GENERIC_HI", 3);
								__LIB_6__::func_892(&iLocal_98);
								iLocal_53 = 1;
							}
						}
					}
				}
				if (!__LIB_11__::func_934(uLocal_55[iVar1], Local_85[iVar1 /*16*/], Local_86[iVar1 /*16*/], iLocal_272[iVar1], &iLocal_98))
				{
					if (func_52(uLocal_55[iVar1], Global_95447[iVar2], &uLocal_105, "FMTAUD", &Local_87, &iLocal_98, &(uLocal_104[iVar1]), 3f, 0, 0))
					{
						bVar0 = true;
					}
				}
			}
		}
		else
		{
			__LIB_32__::func_788(&iLocal_91, &iLocal_92, &uLocal_95, &uLocal_96, Local_75, "v_trailer");
			iLocal_91 = 1;
		}
		iVar1++;
	}
	__LIB_38__::func_149(&uLocal_55, &iLocal_101);
	return 1;
}

int func_52(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, int* iParam5, int iParam6, float fParam7, char* sParam8, char* sParam9)//Position - 0x1BB9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	var uVar4;
	var uVar5;
	char* sVar6;
	float fVar7;
	bool bVar8;
	struct<2> Var9;
	struct<2> Var10;
	int iVar11;
	struct<3> Var12;
	struct<2> Var13;
	iVar0 = 3;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		return 0;
	}
	if (__LIB_20__::func_693(iParam0))
	{
		if (__LIB_0__::func_736(iParam5))
		{
			if (!__LIB_1__::func_637(iParam5))
			{
				__LIB_10__::func_565(iParam5);
			}
		}
		return 0;
	}
	if ((__LIB_0__::func_497() || __LIB_0__::func_191(8, -1)) || Global_78579)
	{
		if (__LIB_0__::func_736(iParam5))
		{
			if (!__LIB_1__::func_637(iParam5))
			{
				__LIB_10__::func_565(iParam5);
			}
		}
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_200())
	{
		if (__LIB_0__::func_736(iParam5))
		{
			if (!__LIB_1__::func_637(iParam5))
			{
				__LIB_10__::func_565(iParam5);
			}
		}
		return 0;
	}
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (__LIB_40__::func_987(iParam0, iParam1, uParam2, sParam3, uParam4, iParam5, iVar0))
	{
		return 1;
	}
	__LIB_0__::func_114();
	sVar6 = func_83(iParam1, &iVar3, &uVar4, &uVar5);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		sVar6 = sParam8;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		return 0;
	}
	if (__LIB_0__::func_517(uVar4, 2))
	{
		if (!func_81(iParam0, iParam1))
		{
			return 0;
		}
	}
	else
	{
		if (__LIB_0__::func_517(uVar4, 1))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var2, false) > fParam7)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_517(uVar4, 4))
		{
			if (MISC::ABSF((Var1.f_2 - Var2.f_2)) > 2f)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_517(uVar4, 8))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 0;
			}
		}
	}
	if (__LIB_0__::func_517(uVar4, 16))
	{
		fVar7 = 10f;
		if (*iParam6 >= iVar3)
		{
			return 0;
		}
		fVar7 = (fVar7 + ((SYSTEM::TO_FLOAT(*iParam6) / SYSTEM::TO_FLOAT((iVar3 - 1))) * 10f));
		if (iParam1 == 29 || iParam1 == 30)
		{
			fVar7 = (fVar7 * 1.5f);
		}
		if (__LIB_0__::func_736(iParam5))
		{
			if (__LIB_1__::func_637(iParam5))
			{
				__LIB_11__::func_933(iParam5);
			}
			if (!__LIB_26__::func_532(iParam5, fVar7))
			{
				return 0;
			}
		}
	}
	if (!__LIB_0__::func_517(uVar5, __LIB_32__::func_787()))
	{
		bVar8 = __LIB_26__::func_499();
		StringCopy(&Var9, "", 16);
		switch (__LIB_20__::func_692(iParam0))
		{
			case 0:
				StringCopy(&Var9, "FMM_0", 16);
				break;
			case 1:
				StringCopy(&Var9, "FMM_1", 16);
				break;
			case 2:
				StringCopy(&Var9, "FMM_2", 16);
				break;
			case 3:
				StringCopy(&Var9, "FMM_3_FT", 16);
				break;
			case 5:
				StringCopy(&Var9, "FMF_0", 16);
				if (bVar8 == 0 || bVar8 == 2)
				{
					StringCopy(&Var9, "", 16);
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var9))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&Var9, "FMM_3_FT"))
			{
				switch (bVar8)
				{
					case 0:
						StringConCat(&Var9, "_MIC", 16);
						break;
					case 1:
						StringConCat(&Var9, "_FRA", 16);
						if (MISC::ARE_STRINGS_EQUAL(&Var9, "FMM_2_FRA"))
						{
							if (!__LIB_0__::func_176(17))
							{
								StringConCat(&Var9, "1", 16);
							}
							else
							{
								StringConCat(&Var9, "2", 16);
							}
						}
						break;
					case 2:
						StringConCat(&Var9, "_TRV", 16);
						break;
					}
			}
			if (__LIB_40__::func_986(sParam3, &Var9, uParam2, iVar0, uParam4, sParam9))
			{
				__LIB_6__::func_892(iParam5);
				*iParam6 = 99;
				return 1;
			}
			return 0;
		}
		else
		{
			return 0;
		}
	}
	StringCopy(&Var10, "", 16);
	switch (__LIB_26__::func_499())
	{
		case 0:
			StringCopy(&Var10, "MICHAEL", 16);
			break;
		case 1:
			StringCopy(&Var10, "FRANKLIN", 16);
			break;
		case 2:
			StringCopy(&Var10, "TREVOR", 16);
			break;
	}
	iVar11 = -1;
	Var12 = { 0f, 0f, 0f };
	if (__LIB_0__::func_517(uVar4, 128))
	{
		iVar11 = 1;
		Var12 = { -14.3293f, -1443.6351f, 29.9f };
	}
	if (MISC::ARE_STRINGS_EQUAL("TRA_IG_MD", sVar6))
	{
		if (__LIB_0__::func_517(uVar4, 64))
		{
		}
		else
		{
			__LIB_6__::func_896(&uVar4, 64);
		}
	}
	if (MISC::ARE_STRINGS_EQUAL("FMT_COUNTRY", sVar6))
	{
		if (__LIB_0__::func_517(uVar4, 64))
		{
		}
		else
		{
			__LIB_6__::func_896(&uVar4, 64);
		}
	}
	if (__LIB_0__::func_517(uVar4, 64))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
		{
			if (__LIB_0__::func_517(uVar4, 32))
			{
				if (!__LIB_20__::func_701(uParam2, sParam3, sVar6))
				{
					return 0;
				}
			}
			__LIB_0__::func_203(uParam2, 0, PLAYER::PLAYER_PED_ID(), &Var10, 0, 1);
			if (__LIB_0__::func_517(uVar4, 128))
			{
				__LIB_0__::func_203(uParam2, iVar11, 0, "DENISE", 0, 1);
				__LIB_3__::func_983(uParam2, iVar11, Var12);
			}
			if (__LIB_40__::func_986(sParam3, sVar6, uParam2, iVar0, uParam4, sParam9))
			{
				__LIB_6__::func_892(iParam5);
				*iParam6++;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		StringCopy(&Var13, sVar6, 16);
		if (__LIB_26__::func_527(sParam3, &Var13, uParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
			{
				if (__LIB_0__::func_517(uVar4, 32))
				{
					if (!__LIB_20__::func_701(uParam2, sParam3, &Var13))
					{
						return 0;
					}
				}
				__LIB_0__::func_203(uParam2, 0, PLAYER::PLAYER_PED_ID(), &Var10, 0, 1);
				if (__LIB_0__::func_517(uVar4, 128))
				{
					__LIB_0__::func_203(uParam2, iVar11, 0, "DENISE", 0, 1);
					__LIB_3__::func_983(uParam2, iVar11, Var12);
				}
				if (__LIB_40__::func_986(sParam3, &Var13, uParam2, iVar0, uParam4, sParam9))
				{
					__LIB_6__::func_892(iParam5);
					*iParam6++;
					return 1;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1)//Position - 0x3348
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	Var0 = { 0f, 0f, 0f };
	Var1 = { 5f, 5f, 2f };
	switch (iParam1)
	{
		case 5:
			Var0 = { 0f, 2f, 0f };
			Var1 = { 5f, 7f, 2f };
			break;
		case 17:
			Var0 = { 0f, 0f, 0f };
			Var1 = { 5f, 5f, 2f };
			break;
		case 8:
			Var0 = { 0f, 3.9f, 0f };
			Var1 = { 5f, 5f, 2f };
			break;
		case 6:
			Var0 = { 1f, -2f, 0f };
			Var1 = { 5f, 5f, 2f };
			break;
		case 12:
			Var0 = { 0f, 5f, 0f };
			Var1 = { 5f, 7.5f, 2f };
			break;
		case 13:
			Var0 = { 0f, 5f, 0f };
			Var1 = { 5f, 7.5f, 2f };
			break;
		case 14:
			Var0 = { 0f, 5f, 0f };
			Var1 = { 5f, 7.5f, 2f };
			break;
		case 15:
			Var0 = { 0f, 5f, 0f };
			Var1 = { 5f, 7.5f, 2f };
			break;
		case 26:
			Var0 = { -1f, -0.5f, 0f };
			Var1 = { 6.5f, 3.5f, 2f };
			break;
		case 46:
			func_81(iParam0, 26);
			break;
		case 31:
			Var0 = { 1f, -2f, 0f };
			Var1 = { 5f, 5f, 2f };
			break;
		case 32:
			Var0 = { -1.5f, 0.5f, 0f };
			Var1 = { 5f, 6.5f, 2f };
			break;
		case 29:
			Var0 = { -2.1f, 4.1f, 0f };
			Var1 = { 5.5f, 5.5f, 2f };
			break;
		case 30:
			func_81(iParam0, 29);
			break;
		case 38:
			Var0 = { 0f, 5f, 0f };
			Var1 = { 5f, 7.5f, 2f };
			break;
		case 93:
			Var0 = { 0f, 0f, 0f };
			Var1 = { 2f, 2f, 2f };
			break;
		case 98:
			Var0 = { 0f, 0f, 0f };
			Var1 = { 10f, 10f, 2f };
			break;
		default:
			Var0 = { 0f, 0f, 0f };
			Var1 = { 5f, 5f, 2f };
			break;
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2 + Var0, Var1, false, true, 0))
	{
		return 1;
	}
	return 0;
}

char* func_83(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x357D
{
	__LIB_6__::func_896(uParam2, 85);
	switch (iParam0)
	{
		case 0:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 1:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "MIC4_IG_1";
			break;
		case 2:
			__LIB_6__::func_896(uParam2, 32);
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_0";
			break;
		case 3:
			__LIB_6__::func_896(uParam2, 32);
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_1";
			break;
		case 4:
			__LIB_6__::func_896(uParam2, 32);
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_9_2";
			break;
		case 19:
			*uParam1 = 0;
			*uParam3 = 1;
			return "";
			break;
		case 18:
			*uParam1 = 12;
			*uParam3 = 1;
			return "FMM_0_0";
			break;
		case 5:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_2a";
			break;
		case 6:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 22;
			*uParam3 = 1;
			return "FMM_0_2";
			break;
		case 7:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 8:
			__LIB_6__::func_896(uParam2, 2);
			__LIB_7__::func_204(uParam2, 16);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 9:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_3";
			break;
		case 10:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM_0_6";
			break;
		case 11:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "JIM_IG_5";
			break;
		case 12:
			__LIB_6__::func_896(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 13:
			__LIB_6__::func_896(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 14:
			__LIB_6__::func_896(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 15:
			__LIB_6__::func_896(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 16:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_1";
			break;
		case 17:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_4";
			break;
		case 20:
			*uParam1 = 9;
			*uParam3 = 1;
			return "FAMR_IG_2a";
			break;
		case 21:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 22:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 23:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 24:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_5";
			break;
		case 25:
			__LIB_6__::func_896(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_6";
			break;
		case 26:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_3";
			break;
		case 32:
			if (!Global_3)
			{
				__LIB_6__::func_896(uParam2, 2);
				__LIB_7__::func_204(uParam2, 64);
				*uParam1 = 3;
				*uParam3 = 1;
				return "TRA_IG_5";
			}
			else
			{
				__LIB_6__::func_896(uParam2, 2);
				__LIB_7__::func_204(uParam2, 64);
				*uParam1 = 5;
				*uParam3 = 1;
				return "TRA_IG_MD";
			}
			break;
		case 27:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 41:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_3";
			break;
		case 33:
			__LIB_7__::func_204(uParam2, 16);
			__LIB_6__::func_896(uParam2, 8);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 38:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_7";
			break;
		case 29:
			__LIB_7__::func_204(uParam2, 64);
			__LIB_6__::func_896(uParam2, 8);
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_6";
			break;
		case 30:
			return func_83(29, uParam1, uParam2, uParam3);
			break;
		case 31:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_8";
			break;
		case 34:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_9";
			break;
		case 35:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_15";
			break;
		case 37:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 39:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_11";
			break;
		case 40:
			*uParam1 = 15;
			*uParam3 = 1;
			return "";
			break;
		case 36:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_1";
			break;
		case 28:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_6";
			break;
		case 42:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 43:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 44:
			*uParam1 = 15;
			*uParam3 = 1;
			return "FMM7_1_0";
			break;
		case 45:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_1_1";
			break;
		case 46:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 47:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 48:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_10";
			break;
		case 68:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_10";
			break;
		case 49:
			return func_83(140, uParam1, uParam2, uParam3);
			break;
		case 50:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_4";
			break;
		case 69:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_4";
			break;
		case 51:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 52:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 67:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 53:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_8";
			break;
		case 54:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_5";
			break;
		case 70:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_5";
			break;
		case 55:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		case 71:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_1";
			break;
		case 56:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 57:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 58:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 59:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_11";
			break;
		case 72:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_11";
			break;
		case 60:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 61:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 62:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 63:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_6";
			break;
		case 64:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		case 65:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 66:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 73:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 74:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 75:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_1";
			break;
		case 76:
			return func_83(75, uParam1, uParam2, uParam3);
			break;
		case 77:
			return func_83(75, uParam1, uParam2, uParam3);
			break;
		case 78:
			return func_83(75, uParam1, uParam2, uParam3);
			break;
		case 79:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 80:
			*uParam1 = 5;
			*uParam3 = 1;
			return "MA_IG_1b";
			break;
		case 81:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_2";
			break;
		case 82:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 83:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 84:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_3_0";
			break;
		case 85:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_surface";
			break;
		case 86:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_window";
			break;
		case 87:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_0";
			break;
		case 88:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 89:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_4";
			break;
		case 90:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_3";
			break;
		case 91:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_5";
			break;
		case 92:
			*uParam1 = 4;
			*uParam3 = 1;
			return "GAR_IG_6";
			break;
		case 93:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_7";
			break;
		case 94:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_1";
			break;
		case 95:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_2";
			break;
		case 96:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_3";
			break;
		case 97:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_4";
			break;
		case 98:
			__LIB_7__::func_204(uParam2, 64);
			__LIB_6__::func_896(uParam2, 130);
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_RETURN";
			break;
		case 99:
			*uParam1 = 5;
			*uParam3 = 2;
			return "";
			break;
		case 100:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_1";
			break;
		case 101:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_2";
			break;
		case 102:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_3";
			break;
		case 103:
			return func_83(102, uParam1, uParam2, uParam3);
			break;
		case 104:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_4";
			break;
		case 105:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_5";
			break;
		case 106:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_6";
			break;
		case 107:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_1";
			break;
		case 108:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_2";
			break;
		case 109:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_3";
			break;
		case 110:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 111:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 116:
			__LIB_7__::func_204(uParam2, 64);
			__LIB_6__::func_896(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_1";
			break;
		case 117:
			__LIB_7__::func_204(uParam2, 64);
			__LIB_6__::func_896(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_2";
			break;
		case 112:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_3";
			break;
		case 113:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_4";
			break;
			__LIB_7__::func_204(uParam2, 64);
			__LIB_7__::func_204(uParam2, 16);
			__LIB_6__::func_896(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 114:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_6";
			break;
		case 115:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_7";
			break;
		case 118:
			*uParam1 = 5;
			*uParam3 = 1;
			return "RONEX_IG_1";
			break;
		case 119:
			*uParam1 = 5;
			*uParam3 = 5;
			return "";
			break;
		case 120:
			*uParam1 = 5;
			*uParam3 = 7;
			return "";
			break;
		case 121:
			*uParam1 = 5;
			*uParam3 = 5;
			return "RONEX_IG_4";
			break;
		case 122:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_1";
			break;
		case 123:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_2";
			break;
		case 124:
			__LIB_6__::func_896(uParam2, 32);
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_3";
			break;
		case 125:
			*uParam1 = 5;
			*uParam3 = 4;
			__LIB_7__::func_204(uParam2, 64);
			return "";
			break;
		case 126:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_1";
			break;
		case 127:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		case 128:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		case 129:
			*uParam1 = 0;
			*uParam3 = 4;
			return "";
			break;
		case 130:
			*uParam1 = 12;
			*uParam3 = 4;
			return "FL_IG_3a";
			break;
		case 131:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 132:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 133:
			return func_83(132, uParam1, uParam2, uParam3);
			break;
		case 134:
			return func_83(132, uParam1, uParam2, uParam3);
			break;
		case 135:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_5";
			break;
		case 136:
			*uParam1 = 9;
			*uParam3 = 4;
			return "FL_IG_7";
			break;
		case 137:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 138:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 141:
			*uParam1 = 5;
			*uParam3 = 0;
			return "";
			break;
	}
	*uParam1 = -1;
	*uParam3 = 0;
	return "NULL";
}

int func_95(int iParam0)//Position - 0x4972
{
	int iVar0;
	iVar0 = func_367(iParam0);
	func_96(iParam0, Global_95447[iVar0]);
	return 0;
}

void func_96(int iParam0, int iParam1)//Position - 0x4991
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	bool bVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var14;
	int iVar15;
	iVar0 = func_367(iParam0);
	switch (iParam1)
	{
		case 100:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_64[iParam0]))
			{
				if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_MONITORING_POLICE_FREQUENCY", "AFT_RON_MONITORING_POLICE_FREQUENCY_MASTER", uLocal_64[iParam0], &(Local_84[iParam0 /*16*/]), 0))
				{
				}
			}
			if (!func_243(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76))
			{
				func_242(uLocal_55[iParam0], iVar0, iParam1);
			}
			if (Global_32005 == 4)
			{
				__LIB_26__::func_529(iVar0, 138);
			}
			break;
		case 101:
		case 119:
			if (iParam1 == 101)
			{
				if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_LISTENS_TO_RADIO_BROADCAST", "AFT_RON_LISTENS_TO_RADIO_BROADCAST_MASTER", uLocal_64[iParam0], &(Local_84[iParam0 /*16*/]), 0))
				{
				}
			}
			else if (iParam1 == 119)
			{
				if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_EX_TRYING_TO_PICK_UP_SIGNALS", "AFT_RON_EX_TRYING_TO_PICK_UP_SIGNALS_MASTER", uLocal_64[iParam0], &(Local_84[iParam0 /*16*/]), 0))
				{
				}
			}
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0);
			if (Global_32005 == 4)
			{
				__LIB_26__::func_529(iVar0, 138);
			}
			break;
		case 102:
			__LIB_20__::func_711(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_57[iParam0]), &(iLocal_272[iParam0]), &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 103, "", "", "", &Local_87, &uLocal_105, &iLocal_98, 0, 4);
			break;
		case 103:
			func_231(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 1000f, -1000f);
			break;
		case 104:
			if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_SMOKING_CRYSTAL", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			if (!func_243(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76))
			{
				func_230(uLocal_55[iParam0], iVar0, iParam1, Local_75 + Vector(1f, 0f, 0f), fLocal_76, 1090519040, -1056964608);
				if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_55[iParam0]) && !__LIB_0__::func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					func_83(iParam1, &iVar1, &uVar2, &uVar3);
					if (uLocal_104[iParam0] >= iVar1)
					{
						PED::SET_PED_TO_RAGDOLL(uLocal_55[iParam0], 25000, 30000, 0, true, true, false);
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_59[iParam0]))
						{
							ENTITY::DETACH_ENTITY(uLocal_59[iParam0], true, true);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_64[iParam0]))
						{
							ENTITY::DETACH_ENTITY(uLocal_64[iParam0], true, true);
						}
						__LIB_7__::func_787(uLocal_55[iParam0], 90000, 0);
						__LIB_26__::func_529(iVar0, 138);
					}
				}
			}
			__LIB_11__::func_973(uLocal_55[iParam0], iParam1, "cs_mich1_lighter_sparks", &(uLocal_80[iParam0]), &(uLocal_79[iParam0]), Local_85[iParam0 /*16*/], Local_86[iParam0 /*16*/], &(iLocal_272[iParam0]), "spark", 4f, 0, uLocal_59[iParam0]);
			__LIB_11__::func_973(uLocal_55[iParam0], iParam1, "cs_mich1_lighter_flame", &uLocal_81, &(uLocal_79[iParam0]), Local_85[iParam0 /*16*/], Local_86[iParam0 /*16*/], &(iLocal_272[iParam0]), "flame", 5f, 0, uLocal_59[iParam0]);
			break;
		case 105:
			if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_DRINKING_MOONSHINE_FROM_A_JAR", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			break;
		case 106:
			if (func_220(uLocal_55[iParam0], iVar0, iParam1, Local_75 + Vector(1f, 0f, 0f), fLocal_76, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), &(iLocal_272[iParam0]), uLocal_59[iParam0], uLocal_64[iParam0], uLocal_270))
			{
				func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			}
			break;
		case 107:
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 1);
			break;
		case 108:
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 1);
			break;
		case 109:
			if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "MICHAEL_DRINKING_BEER", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			break;
		case 110:
			func_242(uLocal_55[iParam0], iVar0, iParam1);
			func_219(uLocal_55[iParam0], iVar0, 111, "FMTAUD", "MIC_IG_4", &Local_87, &uLocal_105, &iLocal_98, &iParam1, 4);
			if (Global_95447[iVar0] == 111)
			{
				iParam1 = 111;
			}
			break;
		case 111:
			func_217(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), &(iLocal_57[iParam0]), &(uLocal_59[iParam0]), &(iLocal_60[iParam0]), 1);
			break;
		case 116:
			if (iParam0 == 2)
			{
				func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[2]), 1, 0);
			}
			else
			{
				func_208(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[2 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_86[2 /*16*/], "_TREVOR", &(iLocal_272[2]));
				if (Global_95447[9] != iParam1)
				{
					iLocal_57[iParam0] = 0;
					__LIB_26__::func_529(iVar0, 138);
				}
			}
			func_207(1);
			break;
		case 117:
			if (iParam0 == 2)
			{
				if (func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[2]), 1, 0))
				{
					if (func_205(uLocal_55[iParam0], iVar0, iParam1, &(uLocal_58[iParam0]), &uLocal_271))
					{
					}
				}
			}
			else
			{
				if (func_208(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[2 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_86[2 /*16*/], "_TREVOR", &(iLocal_272[2])))
				{
					if (func_205(uLocal_55[iParam0], iVar0, iParam1, &(uLocal_58[iParam0]), &uLocal_271))
					{
					}
				}
				if (Global_95447[9] != iParam1)
				{
					iLocal_57[iParam0] = 0;
					__LIB_26__::func_529(iVar0, 138);
				}
			}
			if (Global_32005 == 4)
			{
				__LIB_26__::func_529(iVar0, 138);
			}
			break;
		case 112:
			if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "TREVOR_SMOKING_CRYSTAL", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			__LIB_11__::func_955(uLocal_55[iParam0], iVar0, iParam1);
			break;
		case 113:
			if (!func_243(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76))
			{
				func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			}
			__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "TREVOR_POO", "TREVORS_POO_FAIL", uLocal_55[iParam0], &(Local_84[iParam0 /*16*/]), 0);
			__LIB_11__::func_955(uLocal_55[iParam0], iVar0, iParam1);
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(uLocal_55[iParam0], false)) < (35f * 35f))
			{
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			}
			break;
		case 114:
			if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "TREVOR_BLOWING_SHIT_UP", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_231(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 1090519040, -1056964608);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_272[iParam0]))
			{
				fVar4 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_272[iParam0]);
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_64[iParam0]))
				{
					if (iLocal_65[iParam0] == 0)
					{
						if (fVar4 < 0.6f)
						{
							iLocal_65[iParam0] = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_GRENADE"));
						}
					}
				}
				else
				{
					if (__LIB_11__::func_956(&(uLocal_64[iParam0]), &(Local_85[iParam0 /*16*/]), "", "", "GRENADE_THROWING_grenade", &(iLocal_272[iParam0]), 12))
					{
					}
					if (fVar4 > 0.6f)
					{
						FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(uLocal_64[iParam0], true), 0, 0.5f, true, false, 1f, false);
						OBJECT::DELETE_OBJECT(&(uLocal_64[iParam0]));
						iLocal_65[iParam0] = 0;
					}
				}
			}
			func_207(1);
			break;
		case 115:
			func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0);
			break;
		case 118:
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			func_207(1);
			break;
		case 120:
			if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "RON_WORKING_A_MOONSHINE_SILL", "AFT_RON_EX_MOONSHINE_SILL_LOOP_MASTER", iLocal_69, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			__LIB_20__::func_711(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_57[iParam0]), &(iLocal_272[iParam0]), &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 138, "FMTAUD", "", "RONEX_IG_3", &Local_87, &uLocal_105, &iLocal_98, 0, 4);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_272[iParam0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_59[iParam0]))
			{
				bVar5 = true;
				if (iLocal_57[iParam0] == 3)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_272[iParam0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_59[iParam0], uLocal_55[iParam0]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_272[iParam0]) >= 0.3f)
						{
							bVar5 = false;
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_272[iParam0]) >= 0.6f)
						{
							ENTITY::DETACH_ENTITY(uLocal_59[iParam0], true, true);
						}
					}
				}
				if (bVar5)
				{
					__LIB_11__::func_962(uLocal_64[iParam0], iParam1, "scr_fam_moonshine_pour", &(uLocal_80[iParam0]), 0f);
				}
				else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_80[iParam0]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_80[iParam0], false);
				}
			}
			func_207(1);
			break;
		case 121:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_59[iParam0]))
			{
				Var7 = { ENTITY::GET_ENTITY_COORDS(uLocal_59[iParam0], true) };
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uLocal_64[iParam0]))
			{
				Var7 = { ENTITY::GET_ENTITY_COORDS(uLocal_64[iParam0], true) };
			}
			else
			{
				Var7 = { ENTITY::GET_ENTITY_COORDS(uLocal_55[iParam0], true) };
			}
			Var6 = { ENTITY::GET_ENTITY_COORDS(uLocal_55[iParam0], true) + Var7 / Vector(2f, 2f, 2f) };
			fVar8 = (SYSTEM::VDIST(Var6, ENTITY::GET_ENTITY_COORDS(uLocal_55[iParam0], true)) - 0.1f);
			if (!MISC::IS_POSITION_OCCUPIED(Var6, fVar8, false, true, true, false, false, uLocal_55[iParam0], false))
			{
				if (func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0))
				{
				}
			}
			else
			{
				func_231(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 1.5f, -1.5f);
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_272[iParam0]))
			{
			}
			else
			{
				if (PED::IS_PED_RAGDOLL(uLocal_55[iParam0]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_55[iParam0]);
					iLocal_57[iParam0] = 0;
					__LIB_26__::func_529(iVar0, 137);
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_55[iParam0], joaat("WEAPON_PISTOL"), false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uLocal_55[iParam0], joaat("WEAPON_PISTOL"), -1, true, true);
				}
				else
				{
					fVar9 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_272[iParam0]);
					bVar10 = false;
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_59[iParam0]))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_59[iParam0], PLAYER::PLAYER_PED_ID(), true))
						{
							bVar10 = true;
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_59[iParam0], false);
						}
					}
					else
					{
						bVar10 = true;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_64[iParam0]))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_64[iParam0], PLAYER::PLAYER_PED_ID(), true))
						{
							bVar10 = true;
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_64[iParam0], false);
						}
					}
					else
					{
						bVar10 = true;
					}
					if (!bVar10)
					{
						iLocal_57[iParam0] = 0;
						__LIB_26__::func_529(iVar0, 138);
					}
					fVar11 = -1f;
					fVar12 = -1f;
					if (ENTITY::FIND_ANIM_EVENT_PHASE(&(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), "shoot", &fVar11, &fVar12))
					{
						if (fVar11 > 0f && fVar12 > 0f)
						{
							if (fVar9 >= fVar11 && fVar9 <= (fVar12 + 0.1f))
							{
								if (iLocal_57[iParam0] == 0)
								{
									Var13 = { 0.1f, 0f, 0.043f };
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_59[iParam0]))
									{
										Var14 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_59[iParam0], Var13 + Vector(0f, 0f, 2f)) };
										ENTITY::FREEZE_ENTITY_POSITION(uLocal_59[iParam0], false);
									}
									else if (ENTITY::DOES_ENTITY_EXIST(uLocal_64[iParam0]))
									{
										Var14 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_64[iParam0], Var13 + Vector(0f, 0f, 2f)) };
										ENTITY::FREEZE_ENTITY_POSITION(uLocal_64[iParam0], false);
									}
									else
									{
										iLocal_57[iParam0] = 0;
										__LIB_26__::func_529(iVar0, 138);
									}
									PED::SET_PED_RESET_FLAG(uLocal_55[iParam0], 62, true);
									PED::SET_PED_SHOOTS_AT_COORD(uLocal_55[iParam0], Var14, false);
									iLocal_57[iParam0]++;
								}
							}
							else
							{
								iLocal_57[iParam0] = 0;
							}
						}
						else
						{
							iLocal_57[iParam0] = 0;
						}
					}
					else
					{
						iLocal_57[iParam0] = 0;
					}
				}
			}
			func_207(1);
			break;
		case 122:
			if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "KIDNAPPED_WIFE_CLEANING", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			break;
		case 123:
			if (__LIB_20__::func_711(iParam1, &(uLocal_82[iParam0]), &(iLocal_83[iParam0]), "KIDNAPPED_WIFE_DOES_GARDEN_WORK", "", 0, &(Local_84[iParam0 /*16*/]), 0))
			{
			}
			func_221(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75 + Vector(1f, 0f, 0f), fLocal_76);
			func_207(1);
			break;
		case 124:
			if (iParam0 == 3)
			{
				func_237(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_75, fLocal_76, &(iLocal_272[3]), 1, 1);
				if (Global_95447[8] != iParam1)
				{
					iLocal_57[iParam0] = 0;
					__LIB_26__::func_529(iVar0, 138);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uLocal_55[iParam0]))
			{
				func_208(uLocal_55[iParam0], iVar0, iParam1, &(Local_85[3 /*16*/]), &(Local_86[iParam0 /*16*/]), Local_86[3 /*16*/], "_PATRICIA", &(iLocal_272[3]));
			}
			else
			{
				func_231(uLocal_55[iParam0], iVar0, iParam1, Local_75, fLocal_76, &(iLocal_272[iParam0]), 1, 0, &(Local_85[iParam0 /*16*/]), &(Local_86[iParam0 /*16*/]), 1090519040, -1056964608);
			}
			if (Global_32005 == 4)
			{
				__LIB_26__::func_529(iVar0, 138);
			}
			break;
		case 125:
			func_242(uLocal_55[iParam0], iVar0, iParam1);
			__LIB_39__::func_906(51, 4);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_88))
			{
				if (func_52(uLocal_55[iParam0], iParam1, &uLocal_105, "FMTAUD", &Local_87, &iLocal_98, &(uLocal_104[iParam0]), 7.5f, "FMT_5_1", 0))
				{
					cLocal_88 = { Local_87[0 /*4*/] };
				}
			}
			else
			{
				iVar15 = (uLocal_104[iParam0] - 1);
				if (func_52(uLocal_55[iParam0], iParam1, &uLocal_105, "FMTAUD", &Local_87, &iLocal_98, &iVar15, 7.5f, &cLocal_88, 0))
				{
					StringCopy(&cLocal_88, "", 16);
				}
			}
			break;
		case 137:
			func_108(uLocal_55[iParam0], iVar0, Local_75, 1082130432, 1);
			break;
		case 138:
			func_105(uLocal_55[iParam0], iVar0, &(iLocal_57[iParam0]), &(uLocal_59[iParam0]), &(iLocal_60[iParam0]), &(uLocal_64[iParam0]), &(iLocal_65[iParam0]), &(uLocal_58[iParam0]), &(iLocal_272[iParam0]));
			break;
		case 140:
		case 141:
			break;
		default:
			break;
	}
	if (Global_95447[iVar0] != iParam1)
	{
		func_104(iVar0, Global_95447[iVar0], &(Local_77[iParam0 /*3*/]), &(uLocal_78[iParam0]));
		__LIB_26__::func_533(uLocal_55[iParam0], iVar0, Global_95446, 1);
		func_97(iParam0);
		iLocal_83[iParam0] = -1;
	}
}

void func_97(int iParam0)//Position - 0x5A2E
{
	int iVar0;
	iVar0 = func_367(iParam0);
	iLocal_60[iParam0] = 0;
	iLocal_61[iParam0] = -1;
	Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
	Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
	iLocal_65[iParam0] = 0;
	iLocal_66[iParam0] = -1;
	Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
	Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
	switch (Global_95447[iVar0])
	{
		case 100:
		case 101:
		case 119:
			iLocal_65[iParam0] = joaat("prop_cs_hand_radio");
			iLocal_66[iParam0] = 28422;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		case 106:
			iLocal_60[iParam0] = joaat("prop_binoc_01");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		case 105:
		case 120:
			iLocal_60[iParam0] = joaat("prop_ceramic_jug_cork");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_65[iParam0] = joaat("prop_ceramic_jug_01");
			iLocal_66[iParam0] = 28422;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			if (Global_95447[iVar0] == 120)
			{
				iLocal_70 = joaat("prop_still");
				iLocal_71 = -1;
				Local_72 = { -0.12f, -0.954f, -0.772f };
				Local_73 = { 0f, 0f, -6f };
			}
			break;
		case 121:
			iLocal_60[iParam0] = joaat("prop_cs_beer_bot_01");
			iLocal_61[iParam0] = -1;
			Local_62[iParam0 /*3*/] = { -6.463f, 6.136f, 0.324f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, -42f };
			iLocal_65[iParam0] = joaat("prop_cs_beer_bot_01");
			iLocal_66[iParam0] = -1;
			Local_67[iParam0 /*3*/] = { -6.644f, 5.982f, 0.324f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, -3f };
			break;
		case 114:
			iLocal_60[iParam0] = joaat("prop_whiskey_bottle");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_65[iParam0] = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_GRENADE"));
			iLocal_66[iParam0] = -1;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		case 109:
			iLocal_60[iParam0] = joaat("prop_cs_beer_bot_01");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		case 110:
		case 111:
			iLocal_60[iParam0] = joaat("prop_phone_ing");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		case 104:
		case 112:
			iLocal_60[iParam0] = joaat("p_cs_lighter_01");
			iLocal_61[iParam0] = 60309;
			Local_62[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_63[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_65[iParam0] = joaat("prop_cs_crackpipe");
			iLocal_66[iParam0] = 28422;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		case 123:
			iLocal_65[iParam0] = joaat("prop_cs_trowel");
			iLocal_66[iParam0] = 28422;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		case 122:
			iLocal_65[iParam0] = joaat("prop_scourer_01");
			iLocal_66[iParam0] = 28422;
			Local_67[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_68[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		default:
			break;
	}
}

int func_104(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x6362
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*fParam3 = -144f;
					return 1;
					break;
				case 1:
					if (func_104(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*fParam3 = (*fParam3 + (456.7661f - 360f));
						return 1;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((16f - 222.8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*fParam3 = 163.0716f;
					return 1;
					break;
				case 1:
					if (func_104(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
				case 2:
					if (func_104(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*fParam3 = 160f;
					return 1;
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*fParam3 = 255f;
					return 1;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*fParam3 = 252f;
					return 1;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*fParam3 = 273f;
					return 1;
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_104(0, 5, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*fParam3 = 318f;
					return 1;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*fParam3 = 306f;
					return 1;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*fParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*fParam3 = 330f;
					return 1;
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*fParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*fParam3 = 158f;
					return 1;
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*fParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*fParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*fParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*fParam3 = 333f;
					return 1;
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*fParam3 = (306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
					return 1;
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*fParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((26.087f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((13f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*fParam3 = 319f;
					return 1;
					break;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*fParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*fParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*fParam3 = 180f;
					return 1;
					break;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_104(1, 32, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*fParam3 = 228f;
					return 1;
					break;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*fParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*fParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*fParam3 = 264f;
					return 1;
					break;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*fParam3 = 338f;
					return 1;
					break;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*fParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*fParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*fParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*fParam3 = 165f;
					return 1;
					break;
			}
			break;
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*fParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*fParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*fParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*fParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		case 46:
			return func_104(iParam0, 26, uParam2, fParam3);
			break;
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*fParam3 = 159f;
					return 1;
					break;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*fParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					return 0;
					break;
			}
			break;
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*fParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*fParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*fParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*fParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*fParam3 = 39f;
					return 1;
					break;
			}
			break;
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*fParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*fParam3 = 336f;
					return 1;
					break;
			}
			break;
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*fParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*fParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*fParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*fParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		case 60:
			if (func_104(iParam0, 59, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*fParam3 = (*fParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
				return 1;
			}
			break;
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*fParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-158f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-164f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*fParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*fParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*fParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*fParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		case 77:
			if (func_104(iParam0, 47, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*fParam3 = (*fParam3 + 0f);
				return 1;
			}
			break;
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*fParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*fParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*fParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*fParam3 = 54f;
					return 1;
					break;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*fParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*fParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*fParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*fParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*fParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*fParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*fParam3 = 324f;
					return 1;
					break;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*fParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*fParam3 = 69f;
					return 1;
					break;
			}
			break;
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*fParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*fParam3 = 71f;
					return 1;
					break;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.6757f, -42.2059f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*fParam3 = (84.7009f - 188.5817f);
					return 1;
					break;
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.8477f, -40.7478f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*fParam3 = (90.6417f - 188.5817f);
					return 1;
					break;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*fParam3 = 354f;
					return 1;
					break;
			}
			break;
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*fParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*fParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*fParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*fParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*fParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*fParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*fParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*fParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*fParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*fParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*fParam3 = 109f;
					return 1;
					break;
			}
			break;
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*fParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*fParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*fParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*fParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*fParam3 = (170.2796f - 180f);
					return 1;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*fParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*fParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*fParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*fParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*fParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*fParam3 = 296f;
					return 1;
					break;
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*fParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*fParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*fParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_113386.f_18533[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*fParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else if (((Global_113386.f_18533[2] == 300 || Global_113386.f_18533[2] == 301) || Global_113386.f_18533[2] == 302) || Global_113386.f_18533[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*fParam3 = (32f - 90.6729f);
						return 1;
					}
					if (__LIB_0__::func_502())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*fParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*fParam3 = (32f - 90.6729f);
						return 1;
					}
					break;
			}
			break;
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*fParam3 = (102f - 90.6729f);
					return 1;
					break;
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*fParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_104(iParam0, 130, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						*fParam3 = (*fParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*fParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.7363f, -1148.4664f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*fParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return 1;
					break;
			}
			break;
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*fParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*fParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*fParam3 = 214.92f;
					return 1;
					break;
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*fParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*fParam3 = 0f;
			return 0;
			break;
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*fParam3 = 0f;
			return 0;
			break;
		default:
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*fParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*fParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return 0;
}

int func_105(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x82B4
{
	var uVar0[10];
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	char* sVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	struct<3> Var15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	struct<3> Var22;
	struct<3> Var23;
	int iVar24;
	float fVar25;
	int iVar26;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(*uParam8);
	}
	if (*uParam8 != -1)
	{
		*uParam8 = -1;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
		{
			iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && !PED::IS_PED_INJURED(uVar0[iVar2]))
				{
					if (PED::GET_PED_TYPE(uVar0[iVar2]) == 6)
					{
						TASK::TASK_SMART_FLEE_PED(iParam0, uVar0[iVar2], 75f, -1, true, false);
						*uParam2 = 0;
						return 0;
					}
				}
				iVar2++;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -251125078) != 1)
			{
				TASK::TASK_SMART_FLEE_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 75f, -1, true, false);
				*uParam2 = 0;
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam3, true, true);
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, true, true);
				}
				*uParam4 = 0;
				*uParam3 = 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam5))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam5, iParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam5, true, true);
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam5, iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, true, true);
				}
				*uParam6 = 0;
				*uParam5 = 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam7))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam7, iParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam7, true, true);
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam7, iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, true, true);
				}
				*uParam7 = 0;
			}
		}
		return 1;
	}
	switch (*uParam2)
	{
		case 0:
			if (func_108(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, false), 40f, 1))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
				*uParam2 = 0;
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam3, true, true);
					*uParam3 = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam5))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam5, iParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam5, true, true);
					*uParam3 = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam7))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam7, iParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam7, true, true);
					*uParam7 = 0;
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, __LIB_11__::func_935(iParam0, iParam1, 1), 1f, -1, 0.25f, 0, 40000f);
					return 0;
				}
			}
			else
			{
				SYSTEM::WAIT(5);
				if (PED::IS_PED_INJURED(iParam0))
				{
					return 0;
				}
				iVar3 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar4, &uVar5);
				if (iVar3 != 2)
				{
					*uParam2 = 1;
					return 0;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iParam0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, __LIB_11__::func_935(iParam0, iParam1, 0), 1f, -1, 0.25f, 0, 40000f);
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iParam0) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1)
					{
						iVar3 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar4, &uVar5);
						if (iVar3 != 2)
						{
							*uParam2 = 1;
							return 0;
						}
					}
				}
			}
			sVar6 = "PROP_HUMAN_SEAT_CHAIR";
			bVar7 = true;
			if (__LIB_11__::func_927(69, &iVar8, &iVar9, &iVar10, &iVar11))
			{
				if (iParam1 == iVar8)
				{
					if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar9) == iVar10 && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar9) == iVar11)
					{
						if (TASK::IS_SCENARIO_TYPE_ENABLED(sVar6))
						{
							TASK::SET_SCENARIO_TYPE_ENABLED(sVar6, false);
							bVar7 = false;
						}
					}
				}
			}
			if (INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(iParam0, false)))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
				{
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 8192);
					TASK::TASK_WANDER_STANDARD(iParam0, 40000f, 0);
					*uParam2 = 1;
					return 0;
				}
			}
			break;
		case 1:
			if (func_108(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, false), 40f, 1))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
				*uParam2 = 0;
				return 1;
			}
			if (!TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), 5f, true))
			{
			}
			else if (TASK::IS_SCENARIO_OCCUPIED(ENTITY::GET_ENTITY_COORDS(iParam0, true), 5f, true))
			{
			}
			else
			{
				if (bVar7)
				{
				}
				if (Global_32005 == 3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6) && TASK::IS_SCENARIO_TYPE_ENABLED(sVar6))
					{
						TASK::SET_SCENARIO_TYPE_ENABLED(sVar6, false);
						return 0;
					}
				}
				if (!TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1)
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true), 5f, 0);
				}
				else
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					*uParam2 = 2;
					return 0;
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1)
			{
				iVar12 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar13, &uVar14);
				if (iVar12 == 2)
				{
					Var15 = { __LIB_11__::func_935(iParam0, iParam1, 0) };
					TASK::CLEAR_PED_TASKS(iParam0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var15, 1f, -1, 0.25f, 0, 40000f);
					*uParam2 = 0;
					return 0;
				}
				return 0;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_WANDER_IN_AREA")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_WANDER_STANDARD")) == 1)
			{
				iVar16 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar17, &uVar18);
				if (iVar16 == 2)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, __LIB_11__::func_935(iParam0, iParam1, 1), 1f, -1, 0.25f, 0, 40000f);
					*uParam2 = 0;
					return 0;
				}
			}
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
				*uParam2 = 0;
				return 0;
			}
			if (((TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_WANDER_IN_AREA")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_WANDER_STANDARD")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_WANDER_STANDARD")) == 1)
			{
			}
			else
			{
				*uParam2 = 0;
				return 0;
			}
			return 1;
			break;
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) != 1)
			{
				if (!Global_32005 == 3)
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), 5f, true))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true), 5f, 0);
						iVar19 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar20, &uVar21);
						if (iVar19 == 2 || iVar19 == 0)
						{
							Var22 = { __LIB_11__::func_935(iParam0, iParam1, 1) };
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var22, 1f, -1, 0.25f, 0, 40000f);
							*uParam2 = 0;
							return 0;
						}
					}
					else
					{
						*uParam2 = 1;
						return 0;
					}
				}
				else
				{
					Var23 = { __LIB_11__::func_935(iParam0, iParam1, 1) };
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var23, 1f, -1, 0.25f, 0, 40000f);
					*uParam2 = 0;
					return 0;
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(iParam0))
			{
			}
			else
			{
				iVar24 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &fVar25, &iVar26);
				if (func_108(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, false), 40f, 1))
				{
					return 1;
				}
				if (iVar26 > 0)
				{
					if (TASK::IS_SCENARIO_OCCUPIED(ENTITY::GET_ENTITY_COORDS(iParam0, true), (fVar25 + 0.5f), true))
					{
						iVar24 = iVar24;
						TASK::CLEAR_PED_TASKS(iParam0);
						*uParam2 = 1;
						return 0;
					}
				}
			}
			break;
		default:
			break;
	}
	iParam1 = iParam1;
	return 0;
}

int func_108(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x9E88
{
	int iVar0;
	float fVar1;
	int iVar2;
	if (SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(iParam0, true)) > (fParam3 * fParam3))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
		{
			iVar0 = -1;
			fVar1 = 0.25f;
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Param2, 1f, iVar0, fVar1, 0, 40000f);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
		if (func_110(iParam1, &iVar2, 1))
		{
			if (__LIB_36__::func_58(iParam1, iVar2))
			{
				__LIB_26__::func_529(iParam1, iVar2);
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
		__LIB_26__::func_529(iParam1, 138);
	}
	return 0;
}

int func_110(int iParam0, var uParam1, bool bParam2)//Position - 0xA09B
{
	var uVar0;
	if (Global_3)
	{
		switch (iParam0)
		{
			case 1:
				*uParam1 = 32;
				return 1;
				break;
			case 3:
				*uParam1 = 79;
				return 1;
				break;
			case 2:
				*uParam1 = 51;
				return 1;
				break;
		}
		*uParam1 = 141;
		return 0;
	}
	if (!bParam2)
	{
		if (func_185(iParam0, uParam1, &uVar0))
		{
			return 1;
		}
	}
	if (iParam0 == 2)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && Global_98551 == 161)
		{
			return 0;
		}
		if (__LIB_11__::func_330() == 161)
		{
			return 0;
		}
	}
	if (*uParam1 != 141)
	{
		if (__LIB_20__::func_696(iParam0, *uParam1))
		{
			return 0;
		}
	}
	switch (CLOCK::GET_CLOCK_HOURS())
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return func_176(iParam0, uParam1);
			break;
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return func_170(iParam0, uParam1);
			break;
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return func_166(iParam0, uParam1);
			break;
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return func_111(iParam0, uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_111(int iParam0, var uParam1)//Position - 0xA21F
{
	switch (iParam0)
	{
		case 0:
			return func_165(uParam1);
			break;
		case 1:
			return func_164(uParam1);
			break;
		case 2:
			return func_162(uParam1);
			break;
		case 3:
			*uParam1 = 141;
			return 0;
			break;
		case 4:
			*uParam1 = 141;
			return 0;
			break;
		case 5:
			return func_161(uParam1);
			break;
		case 6:
			return 0;
			break;
		case 7:
			return 0;
			break;
		case 10:
			return func_160(uParam1);
			break;
		case 8:
			return func_159(uParam1);
			break;
		case 9:
			return func_158(uParam1);
			break;
		case 11:
			return func_133(uParam1);
			break;
		case 12:
			return __LIB_11__::func_946(uParam1);
			break;
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_112(var uParam0)//Position - 0xA326
{
	int iVar0[8];
	float fVar1[8];
	if (!__LIB_0__::func_176(64))
	{
		*uParam0 = 141;
		return 0;
	}
	if (__LIB_0__::func_176(65))
	{
		*uParam0 = 141;
		return 0;
	}
	if (Global_78583 == 71)
	{
		if (!__LIB_11__::func_945(60f))
		{
			*uParam0 = 136;
			return 1;
		}
	}
	if (Global_78583 == 64)
	{
		*uParam0 = 140;
		return 0;
	}
	if ((__LIB_8__::func_915(71) || __LIB_8__::func_915(74)) || __LIB_8__::func_915(65))
	{
		*uParam0 = 140;
		return 0;
	}
	if (__LIB_11__::func_193(136) != 1)
	{
		iVar0[0] = 126;
		fVar1[0] = 20f;
	}
	else
	{
		iVar0[0] = 141;
		fVar1[0] = 0f;
	}
	if (__LIB_0__::func_176(20))
	{
		iVar0[1] = 127;
		fVar1[1] = 20f;
	}
	else
	{
		iVar0[1] = 141;
		fVar1[1] = 0f;
	}
	iVar0[2] = 130;
	fVar1[2] = 20f;
	iVar0[3] = 132;
	fVar1[3] = (20f / 3f);
	iVar0[4] = 133;
	fVar1[4] = (20f / 3f);
	iVar0[5] = 134;
	fVar1[5] = (20f / 3f);
	iVar0[6] = 135;
	fVar1[6] = 20f;
	iVar0[7] = 141;
	fVar1[7] = 20f;
	return func_113(13, &iVar0, &fVar1, uParam0);
}

int func_113(int iParam0, int iParam1, float fParam2, var uParam3)//Position - 0xA487
{
	float fVar0;
	int iVar1;
	float fVar2;
	fVar0 = 0f;
	iVar1 = 0;
	while (iVar1 < *fParam2)
	{
		if (func_114(iParam0, (*iParam1)[iVar1]))
		{
			fVar0 = (fVar0 + (*fParam2)[iVar1]);
		}
		iVar1++;
	}
	fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar0);
	iVar1 = 0;
	while (iVar1 < *fParam2)
	{
		if (func_114(iParam0, (*iParam1)[iVar1]))
		{
			if (fVar2 < (*fParam2)[iVar1])
			{
				*uParam3 = (*iParam1)[iVar1];
				return 1;
			}
			fVar2 = (fVar2 - (*fParam2)[iVar1]);
		}
		iVar1++;
	}
	*uParam3 = 141;
	return 0;
}

int func_114(int iParam0, int iParam1)//Position - 0xA516
{
	if (!__LIB_0__::func_176(20))
	{
		if ((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3) || iParam0 == 4)
		{
			if (__LIB_32__::func_786(2))
			{
				return 0;
			}
		}
	}
	if (iParam1 == Global_113386.f_18514[iParam0])
	{
		return 0;
	}
	if (__LIB_32__::func_789(iParam0, iParam1))
	{
		return 0;
	}
	if (__LIB_11__::func_938(iParam0, iParam1))
	{
		return 0;
	}
	if (__LIB_11__::func_937(iParam1))
	{
		return 0;
	}
	if (func_116(iParam0, iParam1))
	{
		return 0;
	}
	if (__LIB_11__::func_936(iParam1))
	{
		return 0;
	}
	if (__LIB_11__::func_330() == 161)
	{
		if ((((iParam1 == 0 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4)
		{
			return 0;
		}
	}
	return 1;
}

int func_116(int iParam0, int iParam1)//Position - 0xA6CD
{
	struct<3> Var0;
	var uVar1;
	struct<3> Var2;
	if (Global_95447[iParam0] == 138)
	{
		return 0;
	}
	if (func_104(iParam0, iParam1, &Var0, &uVar1))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
				Var0 = { Var0 + Vector(71.1531f, 179.5117f, -812.0607f) };
				break;
			case 5:
			case 6:
			case 7:
				Var0 = { Var0 + Vector(30.116f, -1435.9974f, -14.3064f) };
				break;
			case 10:
			case 8:
			case 9:
			case 11:
			case 12:
				Var0 = { Var0 + Vector(32.4374f, 3819.1438f, 1974.6129f) };
				break;
			case 13:
				Var0 = { Var0 + Vector(9.6346f, -1517.601f, -1152.5707f) };
				break;
		}
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if (SYSTEM::VDIST2(Var0, Var2) < (5f * 5f))
		{
			return 1;
		}
	}
	return 0;
}

int func_133(var uParam0)//Position - 0xB20E
{
	int iVar0[3];
	float fVar1[3];
	if (BitTest(Global_113386.f_18574[35 /*6*/], 3) && !BitTest(Global_113386.f_18574[36 /*6*/], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!__LIB_0__::func_368(130))
	{
		*uParam0 = 141;
		return 0;
	}
	if (__LIB_0__::func_176(39))
	{
		*uParam0 = 141;
		return 0;
	}
	if (__LIB_8__::func_915(15))
	{
		*uParam0 = 122;
		return 1;
	}
	iVar0[0] = 122;
	fVar1[0] = 25f;
	iVar0[1] = 123;
	fVar1[1] = 25f;
	if (!__LIB_0__::func_368(131))
	{
		if (__LIB_42__::func_101(0))
		{
			iVar0[2] = 124;
			fVar1[2] = 25f;
		}
		else
		{
			iVar0[2] = 141;
			fVar1[2] = 0f;
		}
	}
	else
	{
		iVar0[2] = 141;
		fVar1[2] = 0f;
	}
	return func_113(11, &iVar0, &fVar1, uParam0);
}

int func_158(var uParam0)//Position - 0xBB42
{
	int iVar0[7];
	float fVar1[7];
	if (BitTest(Global_113386.f_18574[35 /*6*/], 3) && !BitTest(Global_113386.f_18574[36 /*6*/], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!__LIB_42__::func_101(2))
	{
		*uParam0 = 140;
		return 0;
	}
	if (!__LIB_0__::func_368(130))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!__LIB_0__::func_176(39))
	{
		iVar0[0] = 116;
		fVar1[0] = 15f;
		iVar0[1] = 117;
		fVar1[1] = 12.5f;
		iVar0[4] = 141;
		fVar1[4] = 0f;
	}
	else
	{
		iVar0[0] = 141;
		fVar1[0] = 0f;
		iVar0[1] = 141;
		fVar1[1] = 0f;
		iVar0[4] = 141;
		fVar1[4] = 0f;
	}
	iVar0[2] = 112;
	fVar1[2] = 15f;
	iVar0[3] = 113;
	fVar1[3] = 15f;
	iVar0[5] = 114;
	fVar1[5] = 15f;
	iVar0[6] = 115;
	fVar1[6] = 15f;
	return func_113(9, &iVar0, &fVar1, uParam0);
}

int func_159(var uParam0)//Position - 0xBC58
{
	int iVar0[4];
	float fVar1[4];
	if (BitTest(Global_113386.f_18574[35 /*6*/], 3) && !BitTest(Global_113386.f_18574[36 /*6*/], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!__LIB_42__::func_101(0))
	{
		*uParam0 = 140;
		return 0;
	}
	if (!__LIB_0__::func_368(130))
	{
		*uParam0 = 141;
		return 0;
	}
	if (!__LIB_0__::func_176(14))
	{
		*uParam0 = 141;
		return 0;
	}
	if (__LIB_0__::func_368(131))
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0[0] = 107;
	fVar1[0] = 25f;
	iVar0[1] = 108;
	if (BitTest(Global_113386.f_2363.f_539.f_3816[0 /*166*/][12 /*11*/][(32 / 32)], (32 % 32)))
	{
		fVar1[1] = (25f * 2f);
	}
	else
	{
		fVar1[1] = 25f;
	}
	iVar0[2] = 109;
	fVar1[2] = 25f;
	iVar0[3] = 110;
	fVar1[3] = 25f;
	return func_113(8, &iVar0, &fVar1, uParam0);
}

int func_160(var uParam0)//Position - 0xBD61
{
	int iVar0[6];
	float fVar1[6];
	int iVar2;
	int iVar3;
	if (BitTest(Global_113386.f_18574[35 /*6*/], 3) && !BitTest(Global_113386.f_18574[36 /*6*/], 3))
	{
		*uParam0 = 141;
		return 0;
	}
	if (Global_78583 == 62)
	{
		if (__LIB_11__::func_945(60f))
		{
			*uParam0 = 141;
			return 0;
		}
	}
	if (!__LIB_0__::func_368(130))
	{
		if (!__LIB_32__::func_786(2))
		{
			*uParam0 = 141;
			return 0;
		}
		iVar0[0] = 100;
		fVar1[0] = 16.6f;
		iVar0[1] = 101;
		fVar1[1] = 16.6f;
		iVar0[2] = 102;
		fVar1[2] = 16.6f;
		iVar0[3] = 104;
		fVar1[3] = 16.6f;
		iVar0[4] = 105;
		fVar1[4] = 16.6f;
		iVar2 = CLOCK::GET_CLOCK_HOURS();
		if (iVar2 > 20 || iVar2 < 6)
		{
			iVar0[5] = 106;
			fVar1[5] = 16.6f;
		}
		else
		{
			iVar0[5] = 141;
			fVar1[5] = 0f;
		}
	}
	else
	{
		if (!__LIB_32__::func_786(2))
		{
			if (__LIB_8__::func_915(15))
			{
				*uParam0 = 118;
				return 1;
			}
			iVar0[0] = 118;
			fVar1[0] = 20f;
		}
		else
		{
			iVar3 = CLOCK::GET_CLOCK_HOURS();
			if (iVar3 > 20 || iVar3 < 6)
			{
				iVar0[0] = 106;
				fVar1[0] = 16.6f;
			}
			else
			{
				iVar0[0] = 141;
				fVar1[0] = 0f;
			}
		}
		iVar0[1] = 119;
		fVar1[1] = 20f;
		iVar0[2] = 120;
		fVar1[2] = 20f;
		iVar0[3] = 121;
		fVar1[3] = 20f;
		iVar0[4] = 141;
		fVar1[4] = 0f;
		iVar0[5] = 141;
		fVar1[5] = 0f;
	}
	return func_113(10, &iVar0, &fVar1, uParam0);
}

int func_161(var uParam0)//Position - 0xBF2B
{
	int iVar0[4];
	float fVar1[4];
	if (__LIB_8__::func_915(0) || Global_78583 == 0)
	{
		*uParam0 = 141;
		return 0;
	}
	if (Global_98551 == 196)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_200())
		{
			*uParam0 = 141;
			return 0;
		}
	}
	if (__LIB_0__::func_368(126))
	{
		*uParam0 = 98;
		return 1;
	}
	iVar0[0] = 94;
	fVar1[0] = 25f;
	iVar0[1] = 95;
	fVar1[1] = 25f;
	iVar0[2] = 96;
	fVar1[2] = 25f;
	iVar0[3] = 97;
	fVar1[3] = 25f;
	return func_113(5, &iVar0, &fVar1, uParam0);
}

int func_162(var uParam0)//Position - 0xBFDE
{
	int iVar0;
	int iVar1[4];
	float fVar2[4];
	int iVar3[6];
	float fVar4[6];
	if (__LIB_11__::func_330() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 61;
		fVar2[0] = 10f;
		iVar1[1] = 64;
		fVar2[1] = 10f;
		iVar1[2] = 65;
		fVar2[2] = 70f;
		iVar1[3] = 141;
		fVar2[3] = 10f;
		return func_113(2, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 73;
		fVar4[0] = 25f;
		iVar3[1] = 74;
		fVar4[1] = 25f;
		iVar3[2] = 141;
		fVar4[2] = 0f;
		iVar3[3] = 141;
		fVar4[3] = 0f;
		iVar3[4] = 63;
		fVar4[4] = 10f;
		iVar3[5] = 66;
		fVar4[5] = 20f;
		return func_113(2, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_164(var uParam0)//Position - 0xC1A8
{
	int iVar0;
	int iVar1[5];
	float fVar2[5];
	int iVar3[4];
	float fVar4[4];
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 40;
		fVar2[0] = 10f;
		iVar1[1] = 36;
		fVar2[1] = 10f;
		iVar1[2] = 28;
		fVar2[2] = 30f;
		iVar1[3] = 42;
		fVar2[3] = 30f;
		iVar1[4] = 141;
		fVar2[4] = 20f;
		return func_113(1, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 44;
		fVar4[0] = 30f;
		iVar3[1] = 45;
		fVar4[1] = 30f;
		iVar3[2] = 42;
		fVar4[2] = 30f;
		iVar3[3] = 141;
		fVar4[3] = 10f;
		return func_113(1, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_165(var uParam0)//Position - 0xC2D7
{
	int iVar0;
	int iVar1[4];
	float fVar2[4];
	int iVar3[9];
	float fVar4[9];
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 17;
		fVar2[0] = 30f;
		iVar1[1] = 10;
		fVar2[1] = 30f;
		iVar1[2] = 141;
		fVar2[2] = 10f;
		iVar1[3] = 5;
		fVar2[3] = 30f;
		return func_113(0, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 20;
		fVar4[0] = 15f;
		iVar3[1] = 21;
		fVar4[1] = 15f;
		iVar3[2] = 22;
		fVar4[2] = 15f;
		iVar3[3] = 23;
		fVar4[3] = 15f;
		iVar3[4] = 24;
		fVar4[4] = 15f;
		iVar3[5] = 4;
		fVar4[5] = 10f;
		iVar3[6] = 2;
		fVar4[6] = 15f;
		iVar3[7] = 3;
		fVar4[7] = 15f;
		iVar3[8] = 4;
		fVar4[8] = 15f;
		return func_113(0, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_166(int iParam0, var uParam1)//Position - 0xC449
{
	switch (iParam0)
	{
		case 0:
			return func_169(uParam1);
			break;
		case 1:
			return func_168(uParam1);
			break;
		case 2:
			return func_167(uParam1);
			break;
		case 3:
			*uParam1 = 141;
			return 0;
			break;
		case 4:
			*uParam1 = 141;
			return 0;
			break;
		case 5:
			return func_161(uParam1);
			break;
		case 6:
			return 0;
			break;
		case 7:
			return 0;
			break;
		case 10:
			return func_160(uParam1);
			break;
		case 8:
			return func_159(uParam1);
			break;
		case 9:
			return func_158(uParam1);
			break;
		case 11:
			return func_133(uParam1);
			break;
		case 12:
			return __LIB_11__::func_946(uParam1);
			break;
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_167(var uParam0)//Position - 0xC550
{
	int iVar0;
	int iVar1[8];
	float fVar2[8];
	int iVar3[7];
	float fVar4[7];
	if (__LIB_11__::func_330() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 48;
		fVar2[0] = 20f;
		iVar1[1] = 55;
		fVar2[1] = 20f;
		iVar1[2] = 141;
		fVar2[2] = 25f;
		iVar1[3] = 141;
		fVar2[3] = 0f;
		iVar1[4] = 56;
		fVar2[4] = (7.5f / 3f);
		iVar1[5] = 57;
		fVar2[5] = (7.5f / 3f);
		if (!__LIB_0__::func_176(20))
		{
			iVar1[6] = 58;
			fVar2[6] = 7.5f;
		}
		else
		{
			iVar1[6] = 141;
			fVar2[6] = 0f;
		}
		iVar1[7] = 59;
		fVar2[7] = 10f;
		return func_113(2, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 73;
		fVar4[0] = 25f;
		iVar3[1] = 74;
		fVar4[1] = 25f;
		iVar3[2] = 141;
		fVar4[2] = 0f;
		iVar3[3] = 141;
		fVar4[3] = 0f;
		iVar3[4] = 68;
		fVar4[4] = 20f;
		iVar3[5] = 71;
		fVar4[5] = 20f;
		iVar3[6] = 72;
		fVar4[6] = 10f;
		return func_113(2, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_168(var uParam0)//Position - 0xC70B
{
	int iVar0;
	int iVar1[7];
	float fVar2[7];
	int iVar3[4];
	float fVar4[4];
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 38;
		fVar2[0] = 10f;
		iVar1[1] = 37;
		fVar2[1] = 10f;
		iVar1[2] = 39;
		fVar2[2] = 10f;
		iVar1[3] = 40;
		fVar2[3] = 10f;
		iVar1[4] = 29;
		fVar2[4] = 10f;
		iVar1[5] = 36;
		fVar2[5] = 10f;
		if (!__LIB_8__::func_915(52))
		{
			iVar1[6] = 27;
			fVar2[6] = 10f;
		}
		else
		{
			iVar1[6] = 141;
			fVar2[6] = 0f;
		}
		return func_113(1, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 44;
		fVar4[0] = 30f;
		iVar3[1] = 45;
		fVar4[1] = 30f;
		iVar3[2] = 29;
		fVar4[2] = 30f;
		iVar3[3] = 141;
		fVar4[3] = 10f;
		return func_113(1, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_169(var uParam0)//Position - 0xC876
{
	int iVar0;
	int iVar1[9];
	float fVar2[9];
	int iVar3[9];
	float fVar4[9];
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 9;
		fVar2[0] = 10f;
		iVar1[1] = 10;
		fVar2[1] = 10f;
		iVar1[2] = 11;
		fVar2[2] = 15f;
		iVar1[3] = 16;
		fVar2[3] = 40f;
		if (!__LIB_0__::func_176(20))
		{
			iVar1[4] = 0;
			fVar2[4] = 10f;
			iVar1[5] = 12;
			fVar2[5] = (15f / 4f);
			iVar1[6] = 13;
			fVar2[6] = (15f / 4f);
			iVar1[7] = 14;
			fVar2[7] = (15f / 4f);
			iVar1[8] = 15;
			fVar2[8] = (15f / 4f);
		}
		else
		{
			iVar1[4] = 141;
			fVar2[4] = 0f;
			iVar1[5] = 141;
			fVar2[5] = 0f;
			iVar1[6] = 141;
			fVar2[6] = 0f;
			iVar1[7] = 141;
			fVar2[7] = 0f;
			iVar1[8] = 141;
			fVar2[8] = 0f;
		}
		return func_113(0, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 20;
		fVar4[0] = 15f;
		iVar3[1] = 21;
		fVar4[1] = 15f;
		iVar3[2] = 22;
		fVar4[2] = 15f;
		iVar3[3] = 23;
		fVar4[3] = 15f;
		iVar3[4] = 24;
		fVar4[4] = 15f;
		iVar3[5] = 4;
		fVar4[5] = 10f;
		iVar3[6] = 2;
		fVar4[6] = 15f;
		iVar3[7] = 3;
		fVar4[7] = 15f;
		iVar3[8] = 4;
		fVar4[8] = 15f;
		return func_113(0, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_170(int iParam0, var uParam1)//Position - 0xCA97
{
	switch (iParam0)
	{
		case 0:
			return func_175(uParam1);
			break;
		case 1:
			return func_174(uParam1);
			break;
		case 2:
			return func_172(uParam1);
			break;
		case 3:
			return func_171(uParam1);
			break;
		case 4:
			*uParam1 = 141;
			return 0;
			break;
		case 5:
			return func_161(uParam1);
			break;
		case 6:
			return 0;
			break;
		case 7:
			return 0;
			break;
		case 10:
			return func_160(uParam1);
			break;
		case 8:
			return func_159(uParam1);
			break;
		case 9:
			return func_158(uParam1);
			break;
		case 11:
			return func_133(uParam1);
			break;
		case 12:
			return __LIB_11__::func_946(uParam1);
			break;
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_171(var uParam0)//Position - 0xCB9E
{
	int iVar0;
	int iVar1[4];
	float fVar2[4];
	int iVar3[3];
	float fVar4[3];
	if (Global_78583 == 49)
	{
		if (!__LIB_11__::func_945((60f * 60f)))
		{
			*uParam0 = 80;
			return 1;
		}
	}
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 75;
		fVar2[0] = 25f;
		if (!__LIB_8__::func_915(20))
		{
			iVar1[1] = 82;
			fVar2[1] = 25f;
		}
		else
		{
			iVar1[1] = 141;
			fVar2[1] = 0f;
		}
		iVar1[2] = 141;
		fVar2[2] = 12.5f;
		return func_113(3, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		iVar3[0] = 84;
		fVar4[0] = 25f;
		if (!__LIB_8__::func_915(20))
		{
			iVar3[1] = 82;
			fVar4[1] = 25f;
		}
		else
		{
			iVar3[1] = 141;
			fVar4[1] = 0f;
		}
		iVar3[2] = 141;
		fVar4[2] = 12.5f;
		return func_113(3, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_172(var uParam0)//Position - 0xCCE2
{
	int iVar0;
	int iVar1[7];
	float fVar2[7];
	int iVar3[8];
	float fVar4[8];
	if (__LIB_11__::func_330() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 47;
		fVar2[0] = 10f;
		iVar1[1] = 52;
		fVar2[1] = 10f;
		iVar1[2] = 53;
		fVar2[2] = 10f;
		iVar1[3] = 54;
		fVar2[3] = 20f;
		iVar1[4] = 55;
		fVar2[4] = 15f;
		iVar1[5] = 141;
		fVar2[5] = 10f;
		if (!__LIB_0__::func_176(19))
		{
			if (__LIB_11__::func_947())
			{
				iVar1[6] = 49;
				fVar2[6] = 10f;
			}
			else
			{
				iVar1[6] = 141;
				fVar2[6] = 0f;
			}
		}
		else
		{
			iVar1[6] = 50;
			fVar2[6] = 10f;
		}
		return func_113(2, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 73;
		fVar4[0] = 25f;
		iVar3[1] = 74;
		fVar4[1] = 25f;
		iVar3[2] = 141;
		fVar4[2] = 0f;
		iVar3[3] = 141;
		fVar4[3] = 0f;
		iVar3[4] = 69;
		fVar4[5] = 10f;
		iVar3[5] = 71;
		fVar4[5] = 15f;
		iVar3[6] = 70;
		fVar4[6] = 20f;
		iVar3[7] = 67;
		fVar4[7] = 10f;
		return func_113(2, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_174(var uParam0)//Position - 0xCEF6
{
	int iVar0;
	int iVar1[10];
	float fVar2[10];
	int iVar3[3];
	float fVar4[3];
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 26;
		fVar2[0] = 15f;
		iVar1[1] = 38;
		fVar2[1] = 10f;
		iVar1[2] = 29;
		fVar2[2] = 10f;
		if (!__LIB_8__::func_915(52))
		{
			iVar1[3] = 27;
			fVar2[3] = 10f;
		}
		else
		{
			iVar1[3] = 141;
			fVar2[3] = 0f;
		}
		iVar1[4] = 31;
		fVar2[4] = 10f;
		iVar1[5] = 33;
		fVar2[5] = 20f;
		iVar1[6] = 34;
		fVar2[6] = (10f / 2f);
		iVar1[7] = 35;
		fVar2[7] = (10f / 2f);
		iVar1[8] = 43;
		fVar2[8] = 10f;
		iVar1[9] = 141;
		fVar2[9] = 5f;
		return func_113(1, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 44;
		fVar4[0] = 33.333332f;
		iVar3[1] = 45;
		fVar4[1] = 33.333332f;
		iVar3[2] = 46;
		fVar4[2] = 33.333332f;
		return func_113(1, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_175(var uParam0)//Position - 0xD087
{
	int iVar0;
	int iVar1[5];
	float fVar2[5];
	int iVar3[9];
	float fVar4[9];
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		if (!__LIB_0__::func_176(20))
		{
			if (!__LIB_8__::func_915(52))
			{
				iVar1[0] = 7;
				fVar2[0] = 20f;
			}
			else
			{
				iVar1[0] = 141;
				fVar2[0] = 0f;
			}
			iVar1[1] = 0;
			fVar2[1] = 10f;
		}
		else
		{
			iVar1[0] = 141;
			fVar2[0] = 0f;
			iVar1[1] = 141;
			fVar2[1] = 0f;
		}
		iVar1[2] = 141;
		fVar2[2] = 20f;
		iVar1[3] = 5;
		fVar2[3] = 40f;
		iVar1[4] = 8;
		fVar2[4] = 10f;
		return func_113(0, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 20;
		fVar4[0] = 15f;
		iVar3[1] = 21;
		fVar4[1] = 15f;
		iVar3[2] = 22;
		fVar4[2] = 15f;
		iVar3[3] = 23;
		fVar4[3] = 15f;
		iVar3[4] = 24;
		fVar4[4] = 15f;
		iVar3[5] = 4;
		fVar4[5] = 10f;
		iVar3[6] = 2;
		fVar4[6] = 15f;
		iVar3[7] = 3;
		fVar4[7] = 15f;
		iVar3[8] = 4;
		fVar4[8] = 15f;
		return func_113(0, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_176(int iParam0, var uParam1)//Position - 0xD249
{
	switch (iParam0)
	{
		case 0:
			return func_181(uParam1);
			break;
		case 1:
			return func_180(uParam1);
			break;
		case 2:
			return func_179(uParam1);
			break;
		case 3:
			return func_178(uParam1);
			break;
		case 4:
			return func_177(uParam1);
			break;
		case 5:
			return func_161(uParam1);
			break;
		case 6:
			return 0;
			break;
		case 7:
			return 0;
			break;
		case 10:
			return func_160(uParam1);
			break;
		case 8:
			return func_159(uParam1);
			break;
		case 9:
			return func_158(uParam1);
			break;
		case 11:
			return func_133(uParam1);
			break;
		case 12:
			return __LIB_11__::func_946(uParam1);
			break;
		case 13:
			return func_112(uParam1);
			break;
	}
	*uParam1 = 141;
	return 0;
}

int func_177(var uParam0)//Position - 0xD350
{
	int iVar0;
	int iVar1[8];
	float fVar2[8];
	int iVar3[8];
	float fVar4[8];
	if (Global_78583 == 19)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 87;
		fVar2[0] = 12.5f;
		iVar1[1] = 88;
		fVar2[1] = 12.5f;
		iVar1[2] = 90;
		fVar2[2] = 12.5f;
		iVar1[3] = 91;
		fVar2[3] = 12.5f;
		if (!__LIB_8__::func_915(17))
		{
			iVar1[4] = 89;
			fVar2[4] = 12.5f;
		}
		else
		{
			iVar1[4] = 141;
			fVar2[4] = 0f;
		}
		iVar1[5] = 92;
		fVar2[5] = 12.5f;
		iVar1[6] = 93;
		fVar2[6] = 12f;
		iVar1[7] = 141;
		fVar2[7] = 0.5f;
		return func_113(4, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		iVar3[0] = 87;
		fVar4[0] = 12.5f;
		iVar3[1] = 88;
		fVar4[1] = 12.5f;
		iVar3[2] = 90;
		fVar4[2] = 12.5f;
		iVar3[3] = 91;
		fVar4[3] = 12.5f;
		iVar3[4] = 89;
		fVar4[4] = 12.5f;
		iVar3[5] = 92;
		fVar4[5] = 12.5f;
		iVar3[6] = 93;
		fVar4[6] = 12f;
		iVar3[7] = 141;
		fVar4[7] = 0.5f;
		return func_113(4, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_178(var uParam0)//Position - 0xD515
{
	int iVar0;
	int iVar1[3];
	float fVar2[3];
	int iVar3[4];
	float fVar4[4];
	if (Global_78583 == 49)
	{
		if (!__LIB_11__::func_945((60f * 60f)))
		{
			*uParam0 = 80;
			return 1;
		}
	}
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 75;
		fVar2[0] = 20f;
		iVar1[1] = 81;
		fVar2[1] = 20f;
		iVar1[2] = 141;
		fVar2[2] = 10f;
		return func_113(3, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		iVar3[0] = 84;
		fVar4[0] = 20f;
		iVar3[1] = 81;
		fVar4[1] = 20f;
		iVar3[2] = 141;
		fVar4[2] = 20f;
		return func_113(3, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_179(var uParam0)//Position - 0xD625
{
	int iVar0;
	int iVar1[5];
	float fVar2[5];
	int iVar3[6];
	float fVar4[6];
	if (__LIB_11__::func_330() == 161)
	{
		*uParam0 = 141;
		return 0;
	}
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 47;
		fVar2[0] = 10f;
		iVar1[1] = 48;
		fVar2[1] = 20f;
		if (!__LIB_0__::func_176(19))
		{
			if (__LIB_11__::func_947())
			{
				iVar1[2] = 49;
				fVar2[2] = 20f;
			}
			else
			{
				iVar1[2] = 141;
				fVar2[2] = 0f;
			}
		}
		else
		{
			iVar1[2] = 50;
			fVar2[2] = 20f;
		}
		iVar1[3] = 141;
		fVar2[3] = 10f;
		if (!__LIB_8__::func_915(21))
		{
			iVar1[4] = 51;
			fVar2[4] = 10f;
		}
		else
		{
			iVar1[4] = 141;
			fVar2[4] = 0f;
		}
		return func_113(2, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 73;
		fVar4[0] = 25f;
		iVar3[1] = 74;
		fVar4[1] = 25f;
		iVar3[2] = 141;
		fVar4[2] = 0f;
		iVar3[3] = 141;
		fVar4[3] = 0f;
		iVar3[4] = 68;
		fVar4[4] = 20f;
		iVar3[5] = 69;
		fVar4[5] = 20f;
		return func_113(2, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_180(var uParam0)//Position - 0xD7CF
{
	int iVar0;
	int iVar1[6];
	float fVar2[6];
	int iVar3[3];
	float fVar4[3];
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 26;
		fVar2[0] = 15f;
		iVar1[1] = 32;
		fVar2[1] = 15f;
		if (!__LIB_8__::func_915(52))
		{
			iVar1[2] = 27;
			fVar2[2] = 15f;
		}
		else
		{
			iVar1[2] = 141;
			fVar2[2] = 0f;
		}
		iVar1[3] = 41;
		fVar2[3] = 10f;
		iVar1[4] = 141;
		fVar2[4] = 20f;
		iVar1[5] = 33;
		fVar2[5] = 15f;
		return func_113(1, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 44;
		fVar4[0] = 33.333332f;
		iVar3[1] = 45;
		fVar4[1] = 33.333332f;
		iVar3[2] = 46;
		fVar4[2] = 33.333332f;
		return func_113(1, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_181(var uParam0)//Position - 0xD918
{
	int iVar0;
	int iVar1[5];
	float fVar2[5];
	int iVar3[9];
	float fVar4[9];
	iVar0 = __LIB_11__::func_961();
	if (iVar0 == 0)
	{
		iVar1[0] = 18;
		fVar2[0] = 60f;
		iVar1[1] = 5;
		fVar2[1] = 10f;
		iVar1[2] = 141;
		fVar2[2] = 10f;
		iVar1[3] = 6;
		fVar2[3] = 10f;
		if (!__LIB_0__::func_176(20))
		{
			iVar1[4] = 0;
			fVar2[4] = 10f;
		}
		else
		{
			iVar1[4] = 141;
			fVar2[4] = 0f;
		}
		return func_113(0, &iVar1, &fVar2, uParam0);
	}
	if (iVar0 == 1)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 4)
	{
		*uParam0 = 141;
		return 0;
	}
	if (iVar0 == 3)
	{
		if (Global_78583 == 49)
		{
			*uParam0 = 1;
			return 1;
		}
		iVar3[0] = 20;
		fVar4[0] = 15f;
		iVar3[1] = 21;
		fVar4[1] = 15f;
		iVar3[2] = 22;
		fVar4[2] = 15f;
		iVar3[3] = 23;
		fVar4[3] = 15f;
		iVar3[4] = 24;
		fVar4[4] = 15f;
		iVar3[5] = 4;
		fVar4[5] = 10f;
		iVar3[6] = 2;
		fVar4[6] = 15f;
		iVar3[7] = 3;
		fVar4[7] = 15f;
		iVar3[8] = 4;
		fVar4[8] = 15f;
		return func_113(0, &iVar3, &fVar4, uParam0);
	}
	*uParam0 = 141;
	return 0;
}

int func_185(int iParam0, var uParam1, var uParam2)//Position - 0xDCA5
{
	*uParam2 = -1;
	switch (iParam0)
	{
		case 0:
			if (__LIB_8__::func_915(17))
			{
				*uParam2 = 17;
				*uParam1 = 141;
				return 1;
			}
			if (__LIB_8__::func_915(20))
			{
				*uParam2 = 20;
				*uParam1 = 141;
				return 1;
			}
			if (Global_78583 == 44)
			{
				if (__LIB_11__::func_945(60f))
				{
					*uParam2 = 44;
					*uParam1 = 141;
					return 1;
				}
			}
			break;
		case 1:
			if (__LIB_11__::func_961() == 0)
			{
				if (__LIB_0__::func_176(20))
				{
					*uParam2 = 20;
					*uParam1 = 141;
					return 1;
				}
			}
			if (__LIB_8__::func_915(18))
			{
				*uParam2 = 18;
				*uParam1 = 141;
				return 1;
			}
			if (__LIB_8__::func_915(17))
			{
				*uParam2 = 17;
				*uParam1 = 34;
				return 1;
			}
			if (__LIB_8__::func_915(20))
			{
				*uParam2 = 20;
				*uParam1 = 141;
				return 1;
			}
			if (__LIB_8__::func_915(19))
			{
				*uParam2 = 19;
				*uParam1 = 141;
				return 1;
			}
			if (Global_78583 == 44)
			{
				if (__LIB_11__::func_945(60f))
				{
					*uParam2 = 44;
					*uParam1 = 29;
					return 1;
				}
			}
			break;
		case 2:
			if (__LIB_8__::func_915(17))
			{
				*uParam2 = 17;
				*uParam1 = 53;
				return 1;
			}
			if (__LIB_8__::func_915(19))
			{
				*uParam2 = 19;
				*uParam1 = 141;
				return 1;
			}
			if (__LIB_8__::func_915(20))
			{
				*uParam2 = 20;
				*uParam1 = 141;
				return 1;
			}
			if (Global_78583 == 50)
			{
				if (__LIB_11__::func_945(60f))
				{
					*uParam2 = 50;
					*uParam1 = 53;
					return 1;
				}
			}
			break;
		case 3:
			if (Global_78583 == 44)
			{
				*uParam2 = 44;
				*uParam1 = 141;
				return 1;
			}
			break;
		case 5:
			if (Global_78583 == 0)
			{
				if (!__LIB_11__::func_945(60f))
				{
					*uParam2 = 0;
					*uParam1 = 96;
					return 1;
				}
			}
			if (__LIB_8__::func_915(43))
			{
				*uParam2 = 43;
				*uParam1 = 141;
				return 1;
			}
			if (__LIB_8__::func_915(41))
			{
				*uParam2 = 41;
				*uParam1 = 141;
				return 1;
			}
			break;
		case 6:
		case 7:
			if (Global_78583 == 43)
			{
				if (__LIB_11__::func_945(60f))
				{
					if (Global_113386.f_18514[7] != 99 && Global_113386.f_18514[6] != 99)
					{
						*uParam2 = 43;
						*uParam1 = 99;
						return 1;
					}
				}
			}
			if (!__LIB_0__::func_176(43))
			{
				*uParam2 = 43;
				*uParam1 = 141;
				return 1;
			}
			if (__LIB_8__::func_915(41))
			{
				*uParam2 = 41;
				*uParam1 = 141;
				return 1;
			}
			if (__LIB_0__::func_176(41))
			{
				*uParam2 = 41;
				*uParam1 = 141;
				return 1;
			}
			break;
		case 10:
			if (Global_78583 == 62)
			{
				if (__LIB_11__::func_945(60f))
				{
					*uParam2 = 62;
					*uParam1 = 141;
					return 1;
				}
			}
			if (Global_78583 == 14)
			{
				if (__LIB_11__::func_945(60f))
				{
					*uParam2 = 14;
					*uParam1 = 141;
					return 1;
				}
			}
			if (__LIB_8__::func_915(63))
			{
				*uParam2 = 63;
				*uParam1 = 141;
				return 1;
			}
			if (__LIB_8__::func_915(64))
			{
				*uParam2 = 64;
				*uParam1 = 141;
				return 1;
			}
			if (__LIB_8__::func_915(16))
			{
				*uParam2 = 16;
				*uParam1 = 141;
				return 1;
			}
			break;
		case 9:
			if (__LIB_8__::func_915(16))
			{
				*uParam2 = 16;
				*uParam1 = 141;
				return 1;
			}
			break;
		case 11:
			if (__LIB_8__::func_915(16))
			{
				*uParam2 = 16;
				*uParam1 = 141;
				return 1;
			}
			break;
		case 13:
			if (__LIB_8__::func_915(71))
			{
				*uParam2 = 71;
				*uParam1 = 140;
				return 1;
			}
			break;
	}
	if (func_186(iParam0))
	{
		*uParam2 = 94;
		*uParam1 = 140;
		return 1;
	}
	return 0;
}

int func_186(int iParam0)//Position - 0xE04C
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (iParam0 != 16 && iParam0 != 15)
	{
		iVar0 = 145;
		iVar1 = 0;
		switch (iParam0)
		{
			case 6:
			case 7:
				iVar0 = 19;
				iVar1 = 8;
				break;
			case 0:
				iVar0 = 14;
				iVar1 = 16;
				break;
			case 2:
				iVar0 = 17;
				iVar1 = 32;
				break;
			case 1:
				iVar0 = 15;
				iVar1 = 0;
				break;
			default:
				return 0;
				break;
		}
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_91193)
			{
				if (Global_91193[iVar2 /*5*/] != -1)
				{
					uVar3 = Global_78588.f_109[Global_91193[iVar2 /*5*/] /*4*/];
					iVar4 = uVar3;
					if (__LIB_0__::func_517(Global_91229[iVar4 /*34*/].f_12, iVar1))
					{
						return 1;
					}
				}
				iVar2++;
			}
			if (__LIB_9__::func_604(__LIB_20__::func_260(__LIB_26__::func_499()), __LIB_20__::func_260(iVar0)) < 9)
			{
				fVar5 = __LIB_20__::func_710(__LIB_26__::func_499(), iVar0);
				switch (__LIB_20__::func_704(__LIB_26__::func_499(), iVar0))
				{
					case 0:
						if (fVar5 <= (1f * 60f))
						{
							return 1;
						}
						break;
					case 1:
						if (fVar5 <= (5f * 60f))
						{
							return 1;
						}
						break;
					default:
						break;
					}
				}
		}
		iVar6 = MISC::GET_GAME_TIMER();
		iVar7 = 0;
		while (iVar7 < Global_113386.f_7688.f_136)
		{
			if (Global_113386.f_7688[iVar7 /*15*/].f_6 == iVar0)
			{
				iVar8 = (Global_113386.f_7688[iVar7 /*15*/].f_4 - iVar6);
				if (iVar8 < 150000)
				{
					return 1;
				}
			}
			iVar7++;
		}
	}
	return 0;
}

int func_205(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0x127E8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	Var4 = { 0f, 0f, 0f };
	iVar5 = 0;
	Var6 = { 0f, 0f, 0f };
	Var7 = { 0f, 0f, 0f };
	iVar8 = 0;
	bVar9 = false;
	if (Var2.f_0 == Var6.f_0)
	{
		if (Var7.f_0 == Var6.f_0)
		{
		}
	}
	switch (iParam2)
	{
		case 0:
		case 24:
			if (iParam2 == 0)
			{
				bVar9 = true;
			}
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.77f, 180.96f, 71.83f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, 1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 0;
					break;
				case 1:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.46f, 179.88f, 71.83f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, 1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 0;
					break;
				case 2:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -796.65f, 181.23f, 71.83f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, -1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 1;
					break;
			}
			break;
		case 2:
		case 3:
			bVar9 = true;
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.774f, 180.96f, 71.836f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, -1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 1;
					break;
				case 1:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -796.655f, 181.225f, 71.836f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, -1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 1;
					break;
				case 2:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.461f, 179.875f, 71.836f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0f, 0f, -1f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 1;
					break;
			}
			iVar8 = 1;
			break;
		case 26:
		case 46:
		case 54:
		case 70:
			bVar9 = true;
			iVar0 = joaat("prop_patio_lounger1");
			Var1 = { -784f, 188.2f, 71.8f };
			Var2 = { 0f, 0f, 0f };
			if (iParam2 == 54 || iParam2 == 70)
			{
				Var3 = { -0.09f, -1.57f, 1f };
				Var4 = { 0f, 0f, 180f };
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 9:
					return 0;
					break;
				case 11:
					iVar0 = joaat("prop_chair_06");
					Var1 = { 1977.433f, 3819.045f, 32.453f };
					Var2 = { 0f, 0f, 0f };
					Var3 = { 0.05f, 0f, -0.6f };
					Var4 = { 0f, 0f, 180f };
					iVar8 = 1;
					break;
			}
			break;
		default:
			return 0;
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		*uParam3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 10f, iVar0, true, false, true);
	}
	else if (ENTITY::GET_ENTITY_MODEL(*uParam3) != iVar0)
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, *uParam3))
		{
			ENTITY::DETACH_ENTITY(iParam0, true, true);
		}
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam3, true, true);
		}
		*uParam3 = 0;
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return 0;
	}
	else
	{
		if (iVar8 == 0)
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, *uParam3))
			{
				bVar10 = false;
				bVar11 = true;
				bVar12 = false;
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, *uParam3, iVar5, Var3, Var4, bVar9, bVar10, bVar11, bVar12, 2, true, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
				if (__LIB_11__::func_963(*uParam3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam3, true);
				}
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*uParam3, iParam0, false);
				return 0;
			}
		}
		else if (iVar8 == 1)
		{
			Var13 = { ENTITY::GET_ENTITY_COORDS(*uParam3, true) };
			Var14 = { ENTITY::GET_ENTITY_ROTATION(*uParam3, 2) };
			Var15 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) + Var3 };
			Var16 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) + Var4 };
			if (SYSTEM::VDIST(Var13, Var15) > 0.1f || (SYSTEM::VDIST(Var14, Var16) > 0.1f && SYSTEM::VDIST(Var14, Var16) < 360f))
			{
				ENTITY::SET_ENTITY_COORDS(*uParam3, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Var3, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(*uParam3, ENTITY::GET_ENTITY_ROTATION(iParam0, 2) + Var4, 2, true);
				if (__LIB_11__::func_963(*uParam3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam3, true);
				}
				ENTITY::SET_ENTITY_DYNAMIC(*uParam3, false);
				ENTITY::SET_ENTITY_COLLISION(*uParam3, false, false);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*uParam3, iParam0, false);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, *uParam3, false);
			}
			else if (iParam2 == 2 || iParam2 == 3)
			{
				if (iParam1 == 2)
				{
					iLocal_43 = 1;
				}
			}
		}
		return 1;
	}
	return 0;
}

void func_207(bool bParam0)//Position - 0x12CD4
{
	if (bParam0)
	{
		if (!iLocal_54)
		{
			ENTITY::CREATE_MODEL_HIDE(Local_75, 25f, joaat("prop_barrel_01a"), false);
			iLocal_54 = 1;
		}
	}
	else if (iLocal_54)
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_75, 25f, joaat("prop_barrel_01a"), true);
		iLocal_54 = 0;
	}
}

int func_208(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<16> Param5, char* sParam6, var uParam7)//Position - 0x12D1B
{
	var uVar0;
	var uVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	var uVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	uVar0 = 6;
	uVar1 = 6;
	if (func_213(iParam1, iParam2, &uVar0, &uVar1, &iVar2, &fVar3, &fVar4, &iVar5) && func_104(iParam1, iParam2, &uVar6, &fVar7))
	{
		iVar8 = 1;
		iVar9 = 16;
		fVar10 = 1000f;
		iVar11 = 0;
		__LIB_11__::func_950(iParam1, iParam2, &iVar11);
		if (__LIB_1__::func_133(iVar5, 8))
		{
			__LIB_1__::func_132(&iVar8, 4);
		}
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam7))
		{
			return 0;
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 2) || PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam7) <= 0.001f)
		{
			__LIB_20__::func_705(iParam0, *uParam7, &uVar0, &uVar1, iVar2, sParam3, sParam4, Param5, sParam6, fVar3, fVar4, iVar8, iVar9, fVar10, iVar11);
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_213(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x13125
{
	struct<16> Var0;
	struct<16> Var1;
	var uVar2;
	*uParam5 = 4f;
	*uParam6 = -4f;
	if (func_214(iParam0, iParam1, &Var0, &Var1, uParam7, &uVar2))
	{
		switch (iParam1)
		{
			case 0:
			case 24:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam2[2 /*16*/]) = { Var0 };
				if (iParam0 != 2)
				{
					*(uParam3[0 /*16*/]) = { Var1 };
					StringConCat(uParam3[0 /*16*/], "base", 64);
					*(uParam3[1 /*16*/]) = { Var1 };
					StringConCat(uParam3[1 /*16*/], "idle_a", 64);
					*(uParam3[2 /*16*/]) = { Var1 };
					StringConCat(uParam3[2 /*16*/], "idle_b", 64);
				}
				else
				{
					StringCopy(uParam3[0 /*16*/], "base", 64);
					StringConCat(uParam3[0 /*16*/], &Var1, 64);
					StringCopy(uParam3[1 /*16*/], "idle_a", 64);
					StringConCat(uParam3[1 /*16*/], &Var1, 64);
					StringCopy(uParam3[2 /*16*/], "idle_b", 64);
					StringConCat(uParam3[2 /*16*/], &Var1, 64);
				}
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 2:
			case 3:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "eat_takeout", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "eating_disorder", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "getting_fit", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "your_boyfriend", 64);
				switch (iParam0)
				{
					case 2:
						StringConCat(uParam3[0 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[1 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[2 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[3 /*16*/], "_Amanda", 64);
						break;
					case 0:
						StringConCat(uParam3[0 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[1 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[2 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[3 /*16*/], "_Jimmy", 64);
						break;
					case 1:
						StringConCat(uParam3[0 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[1 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[2 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[3 /*16*/], "_Tracy", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 4:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IsThisTheBest", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "ShouldntYouGuys", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "watching_this", 64);
				switch (iParam0)
				{
					case 2:
						StringConCat(uParam3[0 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[1 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[2 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[3 /*16*/], "_Amanda", 64);
						break;
					case 0:
						StringConCat(uParam3[0 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[1 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[2 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[3 /*16*/], "_Jimmy", 64);
						break;
					case 1:
						StringConCat(uParam3[0 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[1 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[2 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[3 /*16*/], "_Tracy", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 18:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@SLEEPING", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@BASE", 64);
				StringCopy(uParam3[1 /*16*/], "Base", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_a", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_b", 64);
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 16:
				StringCopy(uParam2[0 /*16*/], "TIMETABLE@JIMMY@IG_1@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				StringCopy(uParam2[1 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Thats_Some_Good_Shit", 64);
				StringCopy(uParam2[2 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Whole_Chamber_Dog", 64);
				StringCopy(uParam2[3 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Hydrotropic_Bud_Or_Something", 64);
				StringCopy(uParam2[4 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[4 /*16*/], "Dont_Dudge_Me_Dad", 64);
				*uParam4 = 4;
				break;
			case 9:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Body_High2", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Grow_This_Strain", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "Helps_My_Glands", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "Bring_Me_Some_Food", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 25:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "MICS3_15_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IDLE_A", 64);
				switch (iParam0)
				{
					case 0:
						StringConCat(uParam3[0 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[1 /*16*/], "_Jimmy", 64);
						break;
					case 1:
						StringConCat(uParam3[0 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[1 /*16*/], "_Tracy", 64);
						break;
				}
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 32:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				*uParam5 = 8f;
				*uParam6 = -8f;
				*uParam7 |= 2;
				break;
			case 33:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				*uParam5 = 8f;
				*uParam6 = -8f;
				*uParam7 |= 2;
				break;
			case 34:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				break;
			case 35:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				break;
			case 42:
			case 43:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				break;
			case 38:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 50:
			case 69:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_4_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_4_IDLE", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 52:
			case 67:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringCopy(uParam3[5 /*16*/], "idle_e", 64);
				*uParam4 = 5;
				break;
			case 74:
				StringCopy(uParam2[0 /*16*/], "TIMETABLE@REUNITED@IG_7", 64);
				StringCopy(uParam3[0 /*16*/], "AmandaBase_Amanda", 64);
				*uParam4 = 0;
				StringCopy(uParam2[1 /*16*/], "", 64);
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 53:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "amanda_gets_drunk_loop1", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "amanda_gets_drunk_loop2", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "amanda_gets_drunk_loop3", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 59:
			case 72:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_11_IDLE_OhReallyWow", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_11_IDLE_UhHuh", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_11_IDLE_UmHumYesIKnow", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "IG_11_IDLE_YouRSoBad", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 76:
			case 78:
			case 85:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 77:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_9_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_9_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_9_IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 79:
			case 86:
			case 80:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				if (!Global_3)
				{
					*(uParam2[4 /*16*/]) = { Var0 };
					StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
					StringCopy(uParam3[4 /*16*/], "idle_d", 64);
					*(uParam2[5 /*16*/]) = { Var0 };
					StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
					StringCopy(uParam3[5 /*16*/], "idle_e", 64);
					*uParam4 = 5;
				}
				break;
			case 81:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_2_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_2_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_2_IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_2_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 82:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_8_BASE", 64);
				*uParam4 = 0;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 89:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "idle_a_gardener", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_b_gardener", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_c_gardener", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var1 };
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 93:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Idle_Cough", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Smoke_Idle", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 94:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 96:
			case 98:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 97:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 107:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "ON_CHAIR_Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "ON_CHAIR_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "ON_CHAIR_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[3 /*16*/], "ON_CHAIR_C", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "ON_CHAIR_D", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "IDLE_C", 64);
				StringCopy(uParam3[5 /*16*/], "ON_CHAIR_E", 64);
				*uParam4 = 5;
				break;
			case 108:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "ON_CLUBCHAIR_Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "ON_CLUBCHAIR_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "ON_CLUBCHAIR_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[3 /*16*/], "ON_CLUBCHAIR_C", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "ON_CLUBCHAIR_D", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "IDLE_C", 64);
				StringCopy(uParam3[5 /*16*/], "ON_CLUBCHAIR_E", 64);
				*uParam4 = 5;
				break;
			case 109:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "_Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				*(uParam3[2 /*16*/]) = { Var1 };
				StringConCat(uParam3[2 /*16*/], "_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_A", 64);
				*(uParam3[3 /*16*/]) = { Var1 };
				StringConCat(uParam3[3 /*16*/], "_C", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				*(uParam3[4 /*16*/]) = { Var1 };
				StringConCat(uParam3[4 /*16*/], "_D", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "IDLE_B", 64);
				*(uParam3[5 /*16*/]) = { Var1 };
				StringConCat(uParam3[5 /*16*/], "_E", 64);
				*uParam4 = 5;
				break;
			case 118:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_1_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_1_IDLE_A", 64);
				*uParam4 = 1;
				*uParam5 = 1.5f;
				*uParam6 = -1.5f;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 101:
			case 119:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_2_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_2_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_2_IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 121:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_4_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_4_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_4_IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_4_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 105:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var1 };
				StringConCat(uParam3[2 /*16*/], "IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 106:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_6_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_6_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_6_IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_6_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 112:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 113:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "BaseLoop", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "StruggleLoop", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 115:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "_IDLE_01", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var1 };
				StringConCat(uParam3[2 /*16*/], "_IDLE_02", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var1 };
				StringConCat(uParam3[3 /*16*/], "_IDLE_03", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 122:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Clean_Up", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 123:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "IDLE_B", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 135:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 17:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 28:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_14_BASE_TRACY", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_14_IDLE_A_WhatRUDoingHere_TRACY", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_14_IDLE_B_ReallyLoveUDad_TRACY", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_14_IDLE_C_YouGotAnyBlowDad_TRACY", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 29:
			case 30:
			case 44:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Idle_a", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Idle_b", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Idle_c", 64);
				*uParam4 = 2;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 45:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "FAMR_IG_5_IAmAboutToCrackThis", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "FAMR_IG_5_IAmTotallyOnTop", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "FAMR_IG_5_IAmTryingtoConcentrate", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "FAMR_IG_5_ThisCollegeStuff", 64);
				*uParam4 = 4;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 90:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 116:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "TheDesertIsSoBeautiful", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var1 };
				StringConCat(uParam3[2 /*16*/], "TheDontKnowWhy", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var1 };
				StringConCat(uParam3[3 /*16*/], "ThereAreJustSomeMoments", 64);
				switch (iParam0)
				{
					case 9:
						StringConCat(uParam3[0 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[1 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[2 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[3 /*16*/], "_TREVOR", 64);
						break;
					case 11:
						StringConCat(uParam3[0 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[1 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[2 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[3 /*16*/], "_PATRICIA", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 117:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var1 };
				StringConCat(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var1 };
				StringConCat(uParam3[1 /*16*/], "Making_Me_Blush", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var1 };
				StringConCat(uParam3[2 /*16*/], "Met_You_20_Years_Ago", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var1 };
				StringConCat(uParam3[3 /*16*/], "You_Blinked", 64);
				switch (iParam0)
				{
					case 9:
						StringConCat(uParam3[0 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[1 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[2 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[3 /*16*/], "_TREVOR", 64);
						break;
					case 11:
						StringConCat(uParam3[0 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[1 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[2 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[3 /*16*/], "_PATRICIA", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 124:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "PAT_IG_3", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "BASE", 64);
				StringCopy(uParam3[1 /*16*/], "BASE", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "ALT_1", 64);
				StringCopy(uParam3[2 /*16*/], "ALT_1", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "ALT_2", 64);
				StringCopy(uParam3[3 /*16*/], "ALT_2", 64);
				switch (iParam0)
				{
					case 11:
						StringConCat(uParam3[0 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[1 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[2 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[3 /*16*/], "_PATRICIA", 64);
						break;
					case 8:
						StringConCat(uParam3[0 /*16*/], "_MICHAEL", 64);
						StringConCat(uParam3[1 /*16*/], "_MICHAEL", 64);
						StringConCat(uParam3[2 /*16*/], "_MICHAEL", 64);
						StringConCat(uParam3[3 /*16*/], "_MICHAEL", 64);
						break;
				}
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 126:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			case 127:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			default:
				*uParam4 = -1;
				return 0;
				break;
			}
	}
	return 1;
}

int func_214(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)//Position - 0x153EC
{
	*uParam4 = 9;
	*uParam5 = 0;
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam2, "TIMETABLE@AMANDA@IG_12", 64);
			*uParam4 |= 262146;
			*uParam4 = (*uParam4 - 1);
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam3, "jimmy_", 64);
					*uParam5 = 3;
					return 1;
					break;
				case 1:
					StringCopy(sParam3, "tracy_", 64);
					*uParam5 = 3;
					return 1;
					break;
				case 2:
					StringCopy(sParam3, "_amanda", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
				case 1:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
				case 2:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		case 2:
		case 3:
			*uParam4 |= 262146;
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*uParam5 = 3;
					return 1;
					break;
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*uParam5 = 3;
					return 1;
					break;
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*uParam5 = 3;
					return 1;
					break;
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*uParam5 = 3;
					return 1;
					break;
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 5:
		case 21:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					*uParam4 |= 2560;
					return 1;
					break;
			}
			break;
		case 7:
		case 22:
			switch (iParam0)
			{
				case 0:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 33816576;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*uParam5 = 4;
					return 1;
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262144;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
					StringCopy(sParam3, "Jimmy_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
					StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "SWITCH@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "BASE_Jimmy", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_JIMMY", 64);
					*uParam5 = 3;
					return 1;
					break;
				case 1:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_TRACY", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 2;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_5", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262146;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_8", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 786434;
					return 1;
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_7@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					*uParam4 |= 2560;
					return 1;
					break;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_15", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_4@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 34340864;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
					StringCopy(sParam3, "IG_14_BASE_TRACY", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 42:
			return func_214(iParam0, 43, sParam2, sParam3, uParam4, uParam5);
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@SLEEP@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 44:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_4", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_5", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 46:
			return func_214(iParam0, 26, sParam2, sParam3, uParam4, uParam5);
			break;
		case 47:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				case 3:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_MAID", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 262146;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		case 49:
			return func_214(iParam0, 140, sParam2, sParam3, uParam4, uParam5);
			break;
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@MAGDEMO_IG_2_SYNCED", 64);
					StringCopy(sParam3, "base_demo", 64);
					*uParam4 |= 1;
					return 1;
					break;
			}
			break;
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_7", 64);
					StringCopy(sParam3, "IG_7_ENTER", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@", 64);
					StringCopy(sParam3, "amanda_gets_drunk_", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
					StringCopy(sParam3, "IG_5_BASE", 64);
					*uParam5 = 2;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 64:
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 786434;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		case 56:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				case 0:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 57:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				case 0:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_JIMMY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 58:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_AMANDA", 64);
					*uParam5 = 0;
					return 1;
					break;
				case 1:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_TRACY", 64);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 60:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_IAmAFastLearner", 64);
					*uParam4 |= 266240;
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		case 61:
		case 63:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_BASE", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 62:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_END_BASE", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "SWITCH@MICHAEL@BEDROOM", 64);
					StringCopy(sParam3, "BED_LOOP_02_Amanda", 64);
					return 1;
					break;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "SWITCH@MICHAEL@GETS_READY", 64);
					StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
					return 1;
					break;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_6", 64);
					StringCopy(sParam3, "BASE_Amanda", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Amanda", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Tracy", 64);
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 1;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 77:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 79:
		case 86:
		case 80:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_2@", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					if (iParam1 == 82)
					{
						*uParam5 = 3;
					}
					if (iParam1 == 83)
					{
						*uParam5 = 2;
					}
					return 1;
					break;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_LEAF_BLOWER", 64);
					*uParam5 = 4;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_PLANT", 64);
					*uParam5 = 4;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@CLEAN_POOL@", 64);
					StringCopy(sParam3, "Base_gardener", 64);
					*uParam5 = 3;
					*uParam4 |= 262146;
					*uParam4 = (*uParam4 - 1);
					return 1;
					break;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@LAWNMOW@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@FILLING_CAN", 64);
					StringCopy(sParam3, "GAR_IG_5_Filling_Can", 64);
					*uParam4 |= 262144;
					*uParam5 = 0;
					return 1;
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*uParam5 = 4;
					return 1;
					break;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_SMOKING", 64);
					*uParam5 = 4;
					return 1;
					break;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 262146;
					*uParam4 = (*uParam4 - 1);
					return 1;
					break;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 2;
					*uParam4 |= 262146;
					return 1;
					break;
			}
			break;
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 786434;
					return 1;
					break;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					__LIB_11__::func_948(iParam1, sParam2, "", sParam3, "", uParam5);
					return 0;
					break;
				case 7:
					__LIB_11__::func_948(iParam1, sParam2, "", sParam3, "", uParam5);
					return 0;
					break;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
					StringCopy(sParam3, "IG_1_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		case 101:
		case 119:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 102:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "LAYING", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 103:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "BASE", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
					StringCopy(sParam3, "BASE", 64);
					*uParam4 = 263176;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@MOONSHINE_IG_5", 64);
					StringCopy(sParam3, "IG_5_", 64);
					*uParam4 |= 262152;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_6", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262152;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CHAIR", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CLUBCHAIR", 64);
					StringCopy(sParam3, "ON_CLUBCHAIR", 64);
					*uParam5 = 3;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "SIT_Sofa", 64);
					*uParam5 = 3;
					*uParam4 |= 33816576;
					return 1;
					break;
			}
			break;
		case 110:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEbase", 64);
					StringCopy(sParam3, "TALK_PHONE_Base", 64);
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 111:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT", 64);
					StringCopy(sParam3, "TALK_PHONE_Exit", 64);
					*uParam4 |= 266240;
					*uParam5 = 2;
					return 1;
					break;
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*uParam5 = 3;
					return 1;
					break;
				case 11:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
				case 11:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 112:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@SMOKING_METH", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 = 267272;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
					StringCopy(sParam3, "TrevOnLav_", 64);
					*uParam4 |= 786434;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@GRENADE_THROWING", 64);
					StringCopy(sParam3, "GRENADE_THROWING_trev", 64);
					return 1;
					break;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "SWITCH@TREVOR@BED", 64);
					StringCopy(sParam3, "GC_TRV_IG_7", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE", 64);
					return 1;
					break;
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4", 64);
					StringCopy(sParam3, "IG_4_BASE", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_1", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					*uParam4 |= 786434;
					return 1;
					break;
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_2@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 124:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
				case 8:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 12:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CLEAN_KITCHEN", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 127:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262146;
					*uParam4 = (*uParam4 - 1);
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 128:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "SWITCH@TREVOR@FLOYD_CRYING", 64);
					StringCopy(sParam3, "Console_end_LOOP_FLOYD", 64);
					return 1;
					break;
			}
			break;
		case 129:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "SWITCH@TREVOR@PINEAPPLE", 64);
					StringCopy(sParam3, "Pineapple_EXIT_LOOP_FLOYD", 64);
					return 1;
					break;
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
					StringCopy(sParam3, "base", 64);
					*uParam5 = 2;
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@ENDING_CALL", 64);
					StringCopy(sParam3, "base", 64);
					*uParam4 |= 266240;
					return 1;
					break;
			}
			break;
		case 132:
		case 133:
		case 134:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
					StringCopy(sParam3, "idle", 64);
					*uParam4 |= 262144;
					return 1;
					break;
			}
			break;
		case 135:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED_IG_5@", 64);
					StringCopy(sParam3, "", 64);
					*uParam4 |= 262144;
					*uParam5 = 3;
					return 1;
					break;
			}
			break;
		case 136:
			switch (iParam0)
			{
				case 13:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
				case 14:
					__LIB_11__::func_964(iParam1, sParam2, sParam3, uParam5);
					return 1;
					break;
			}
			break;
		case 138:
		case 137:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*uParam4 = -1;
			*uParam5 = 5;
			return 0;
			break;
		case 140:
		case 141:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*uParam4 = -1;
			*uParam5 = 5;
			return 0;
			break;
		default:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*uParam4 = -1;
			*uParam5 = 5;
			return 0;
			break;
	}
	StringCopy(sParam2, "", 64);
	StringCopy(sParam3, "", 64);
	*uParam4 = -1;
	*uParam5 = 5;
	return 0;
}

int func_217(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, char* sParam5, char* sParam6, var uParam7, int* iParam8, var uParam9, bool bParam10)//Position - 0x16FED
{
	struct<16> Var0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	float fVar6;
	var uVar7;
	switch (*uParam7)
	{
		case 0:
			StringCopy(sParam5, "", 64);
			StringCopy(sParam5, "", 64);
			if (func_214(iParam1, iParam2, &Var0, &Var1, &iVar2, &iVar3))
			{
			}
			if (iVar3 != 2)
			{
				STREAMING::REQUEST_ANIM_DICT(&Var0);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var0))
				{
					return 0;
				}
				if (__LIB_1__::func_133(iVar2, 1))
				{
					__LIB_11__::func_949(&iVar2, 1);
				}
				TASK::TASK_PLAY_ANIM(iParam0, &Var0, &Var1, 8f, -1.5f, -1, iVar2, 0f, false, false, false);
				*sParam5 = { Var0 };
				*sParam6 = { Var1 };
				*uParam7 = 1;
			}
			else if (func_243(iParam0, iParam1, iParam2, sParam5, sParam6, Param3, fParam4))
			{
				*uParam7 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam5, sParam6, 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam5, sParam6);
				if (fVar4 >= 1f)
				{
					TASK::CLEAR_PED_TASKS(iParam0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(*iParam8))
				{
					sVar5 = "hangup";
					if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam5, sParam6, sVar5, &fVar6, &uVar7))
					{
					}
					else
					{
						fVar6 = -1f;
						if (MISC::ARE_STRINGS_EQUAL(sParam5, "TIMETABLE@MAID@IG_8@"))
						{
							if (MISC::ARE_STRINGS_EQUAL(sParam6, "IG_8_IDLE_A"))
							{
								fVar6 = 0.85f;
							}
						}
						if (fVar6 < 0f)
						{
							fVar6 = 0.5f;
						}
					}
					if (fVar4 < fVar6)
					{
					}
					else
					{
						if (ENTITY::IS_ENTITY_ATTACHED(*iParam8))
						{
							ENTITY::DETACH_ENTITY(*iParam8, true, true);
						}
						if (bParam10)
						{
							*uParam9 = 0;
							OBJECT::DELETE_OBJECT(iParam8);
						}
					}
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(*iParam8))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(*iParam8))
					{
						ENTITY::DETACH_ENTITY(*iParam8, true, true);
					}
					if (bParam10)
					{
						*uParam9 = 0;
						OBJECT::DELETE_OBJECT(iParam8);
					}
				}
				StringCopy(sParam5, "", 64);
				StringCopy(sParam6, "", 64);
				*uParam7 = 2;
			}
			break;
		case 2:
			if (bParam10)
			{
				if (ENTITY::DOES_ENTITY_EXIST(*iParam8))
				{
				}
			}
			__LIB_26__::func_529(iParam1, 138);
			*uParam7 = 0;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

int func_219(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, var uParam5, var uParam6, int* iParam7, int iParam8, int iParam9)//Position - 0x171D4
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	if (Global_95447[iParam1] != iParam2)
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) > (7f * 7f))
		{
			return 0;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
		{
			return 0;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
			func_83(iParam2, &uVar0, &uVar1, &uVar2);
			if (!__LIB_0__::func_517(uVar2, __LIB_32__::func_787()))
			{
				return 0;
			}
			if (__LIB_0__::func_517(uVar1, 64))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					if (__LIB_40__::func_986(sParam3, sParam4, uParam6, iParam9, uParam5, 0))
					{
						__LIB_6__::func_892(iParam7);
						Global_95447[iParam1] = iParam2;
						return 1;
					}
				}
			}
			else
			{
				StringCopy(&Var3, sParam4, 16);
				if (__LIB_26__::func_527(sParam3, &Var3, uParam5))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
					{
						if (__LIB_40__::func_986(sParam3, &Var3, uParam6, iParam9, uParam5, 0))
						{
							__LIB_6__::func_892(iParam7);
							Global_95447[iParam1] = iParam2;
							return 1;
						}
					}
				}
			}
			return 0;
		}
		Global_95447[iParam1] = iParam2;
		*iParam8 = Global_95447[iParam1];
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, char* sParam5, char* sParam6, var uParam7, int iParam8, int iParam9, var uParam10)//Position - 0x172F8
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (func_104(iParam1, iParam2, &Var0, &fVar1))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param3 + Var0) > (4f * 4f))
		{
			if (!TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Param3 + Var0, 1f, -1, 0.25f, 0, (fParam4 + fVar1));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					StringCopy(sParam5, "", 64);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					StringCopy(sParam6, "", 64);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam7))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(*uParam7);
				}
				*uParam7 = -1;
			}
		}
		else if (!TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam8))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam8, iParam0))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(iParam8))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam8, true, false);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam9, iParam0))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(iParam9))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam9, true, false);
					}
				}
			}
			if (__LIB_11__::func_922(iParam1, &fVar2))
			{
				PED::SET_PED_CAPSULE(iParam0, fVar2);
			}
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam8))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam8, iParam0))
			{
				if (ENTITY::IS_ENTITY_VISIBLE(iParam8))
				{
					ENTITY::SET_ENTITY_VISIBLE(iParam8, false, false);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam9))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam9, iParam0))
			{
				if (ENTITY::IS_ENTITY_VISIBLE(iParam9))
				{
					ENTITY::SET_ENTITY_VISIBLE(iParam9, false, false);
				}
			}
		}
		PED::SET_PED_CAPSULE(iParam0, 0.3f);
		return 0;
	}
	uParam10 = uParam10;
	return 0;
}

int func_221(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam6)//Position - 0x17461
{
	var uVar0;
	var uVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	float fVar7;
	int iVar8;
	bool bVar9;
	float fVar10;
	uVar0 = 6;
	uVar1 = 6;
	if (func_213(iParam1, iParam2, &uVar0, &uVar1, &iVar2, &fVar3, &fVar4, &iVar5))
	{
		if (func_104(iParam1, iParam2, &Var6, &fVar7))
		{
			__LIB_11__::func_950(iParam1, iParam2, &iVar8);
			bVar9 = false;
			if (!bVar9)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 1))
					{
						fVar10 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam3, sParam4);
						if (fVar10 >= 0.99f)
						{
							__LIB_11__::func_965(iParam0, &uVar0, &uVar1, iVar2, Param5 + Var6, 0f, 0f, (fParam6 + fVar7), sParam3, sParam4, fVar3, fVar4, -1, iVar5, 0, 2, iVar8);
						}
						bVar9 = true;
					}
				}
			}
			if (!bVar9)
			{
				__LIB_11__::func_965(iParam0, &uVar0, &uVar1, iVar2, Param5 + Var6, 0f, 0f, (fParam6 + fVar7), sParam3, sParam4, fVar3, fVar4, -1, iVar5, 0, 2, iVar8);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 3);
		}
		return 0;
	}
	StringCopy(sParam3, "", 64);
	StringCopy(sParam4, "", 64);
	return 0;
}

int func_230(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, float fParam5, float fParam6)//Position - 0x17B63
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;
	var uVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	if (func_214(iParam1, iParam2, &sVar0, &cVar1, &iVar2, &uVar3) && func_104(iParam1, iParam2, &Var4, &fVar5))
	{
		STREAMING::REQUEST_ANIM_DICT(&sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
		{
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			return 0;
		}
		else
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &sVar0, &cVar1, 3))
			{
				__LIB_11__::func_950(iParam1, iParam2, &iVar6);
				if (__LIB_1__::func_133(iVar2, 262144))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
				}
				TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, &sVar0, &cVar1, Param3 + Var4, 0f, 0f, (fParam4 + fVar5), fParam5, fParam6, -1, iVar2, 0f, 2, iVar6);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, true);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_231(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, var uParam5, bool bParam6, bool bParam7, char* sParam8, char* sParam9, float fParam10, float fParam11)//Position - 0x17C1F
{
	struct<16> Var0;
	struct<16> Var1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	if (func_214(iParam1, iParam2, &Var0, &Var1, &uVar2, &uVar3) && func_104(iParam1, iParam2, &Var4, &fVar5))
	{
		STREAMING::REQUEST_ANIM_DICT(&Var0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var0))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var0);
			StringCopy(sParam8, "", 64);
			StringCopy(sParam9, "", 64);
			return 0;
		}
		else
		{
			iVar6 = 5;
			iVar7 = 16;
			fVar8 = 1000f;
			iVar9 = 0;
			__LIB_11__::func_950(iParam1, iParam2, &iVar9);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam5))
			{
				*uParam5 = PED::CREATE_SYNCHRONIZED_SCENE(Param3 + Var4, 0f, 0f, (fParam4 + fVar5), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam5, bParam6);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam5, bParam7);
				PED::SET_SYNCHRONIZED_SCENE_RATE(*uParam5, 1f);
				if (__LIB_1__::func_133(iVar7, 1))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
				}
				TASK::TASK_SYNCHRONIZED_SCENE(iParam0, *uParam5, &Var0, &Var1, fParam10, fParam11, iVar6, iVar7, fVar8, iVar9);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, true);
				*sParam8 = { Var0 };
				*sParam9 = { Var1 };
				return 0;
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var0, &Var1, 2))
			{
				if (__LIB_1__::func_133(iVar7, 1))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
				}
				TASK::TASK_SYNCHRONIZED_SCENE(iParam0, *uParam5, &Var0, &Var1, fParam10, fParam11, iVar6, iVar7, fVar8, iVar9);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, true);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam5, bParam6);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam5, bParam7);
				*sParam8 = { Var0 };
				*sParam9 = { Var1 };
				return 0;
			}
			return 1;
		}
	}
	StringCopy(sParam8, "", 64);
	StringCopy(sParam9, "", 64);
	return 0;
}

int func_237(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam6, var uParam7, bool bParam8, bool bParam9)//Position - 0x18E4E
{
	struct<16> Var0[6];
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	var uVar6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	uVar1 = 6;
	if (func_213(iParam1, iParam2, &Var0, &uVar1, &iVar2, &fVar4, &fVar5, &uVar6) && func_104(iParam1, iParam2, &Var7, &fVar8))
	{
		iVar9 = 1;
		iVar10 = 16;
		fVar11 = 1000f;
		iVar12 = 0;
		__LIB_11__::func_950(iParam1, iParam2, &iVar12);
		if (__LIB_1__::func_133(uVar6, 8))
		{
			__LIB_1__::func_132(&iVar9, 4);
		}
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam7))
		{
			if (iParam2 == 127)
			{
				fVar4 = 1000f;
				fVar11 = fVar4;
			}
			else if (iParam2 == 53)
			{
				fVar4 = 2f;
				fVar11 = fVar4;
			}
			else if (iParam2 == 18)
			{
				fVar4 = 1000f;
				fVar11 = fVar4;
				fVar5 = -1000f;
			}
			else if (iParam2 == 117)
			{
				fVar4 = 1000f;
				fVar11 = fVar4;
				fVar5 = -1000f;
			}
			else if (iParam2 == 115)
			{
				fVar4 = 1000f;
				fVar11 = fVar4;
				fVar5 = -1000f;
			}
			else
			{
				fVar4 = 4f;
				fVar11 = 1000f;
			}
			STREAMING::REQUEST_ANIM_DICT(&(Var0[0 /*16*/]));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&(Var0[0 /*16*/])))
			{
				return 0;
			}
			if (*uParam7 > 0)
			{
				*uParam7 = -1;
			}
			*uParam7 = PED::CREATE_SYNCHRONIZED_SCENE(Param5 + Var7, 0f, 0f, (fParam6 + fVar8), 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam7, bParam8);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam7, bParam9);
			uVar3 = __LIB_11__::func_957(iParam0, *uParam7, &Var0, &uVar1, iVar2, sParam3, sParam4, fVar4, fVar5, iVar9, iVar10, fVar11, iVar12);
			return uVar3;
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 2))
		{
			if (!__LIB_11__::func_957(iParam0, *uParam7, &Var0, &uVar1, iVar2, sParam3, sParam4, fVar4, -1000f, iVar9, iVar10, fVar11, iVar12))
			{
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam7, true);
				return 0;
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam7, bParam8);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam7, bParam9);
		}
		if (bParam9)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam7) >= 0.999f)
			{
				__LIB_11__::func_957(iParam0, *uParam7, &Var0, &uVar1, iVar2, sParam3, sParam4, 1000f, -1000f, iVar9, iVar10, 1000f, iVar12);
			}
		}
		return 1;
	}
	return 0;
}

int func_242(int iParam0, int iParam1, int iParam2)//Position - 0x196D1
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;
	var uVar3;
	if (func_214(iParam1, iParam2, &sVar0, &cVar1, &iVar2, &uVar3))
	{
		STREAMING::REQUEST_ANIM_DICT(&sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
		{
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			return 0;
		}
		else
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &sVar0, &cVar1, 3))
			{
				TASK::TASK_PLAY_ANIM(iParam0, &sVar0, &cVar1, 8f, -8f, -1, iVar2, 0f, false, false, false);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, true);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_243(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam6)//Position - 0x19743
{
	float fVar0;
	struct<16> Var1;
	struct<16> Var2;
	char* sVar3;
	char[] cVar4[8];
	int iVar5;
	var uVar6;
	bool bVar7;
	float fVar8;
	Param5 = { Param5 };
	fParam6 = fParam6;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 3))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam3, sParam4);
			if (fVar0 <= 0.99f)
			{
				return 1;
			}
		}
		StringCopy(sParam3, "", 64);
		StringCopy(sParam4, "", 64);
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
	{
		if (func_244(iParam1, iParam2, &Var1, &Var2, -1))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var1);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&Var1))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var1, &Var2, 3))
				{
					if (func_214(iParam1, iParam2, &sVar3, &cVar4, &iVar5, &uVar6))
					{
						if (__LIB_1__::func_133(iVar5, 1))
						{
							__LIB_11__::func_949(&iVar5, 1);
						}
						if (__LIB_1__::func_133(iVar5, 262144))
						{
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
							PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
						}
						__LIB_11__::func_950(iParam1, iParam2, &bVar7);
						fVar8 = -8f;
						if (iParam2 == 60 || iParam2 == 83)
						{
							fVar8 = -1.5f;
						}
						if (iParam2 == 60)
						{
							if (__LIB_1__::func_133(iVar5, 33554432))
							{
							}
							else
							{
								__LIB_1__::func_132(&iVar5, 33554432);
							}
							fVar8 = -4f;
						}
						TASK::TASK_PLAY_ANIM(iParam0, &Var1, &Var2, 8f, fVar8, -1, iVar5, 0f, false, bVar7, false);
						*sParam3 = { Var1 };
						*sParam4 = { Var2 };
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		return 0;
	}
	return 0;
}

int func_244(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x198AD
{
	struct<2> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	char* sVar4;
	StringCopy(sParam2, "null", 64);
	StringCopy(sParam3, "null", 64);
	StringCopy(&Var0, "", 16);
	if (iParam4 == -1)
	{
		iParam4 = func_245(iParam1, &Var0);
		if (iParam4 == -1)
		{
			sVar4 = func_83(iParam1, &uVar1, &uVar2, &uVar3);
			if (!MISC::ARE_STRINGS_EQUAL(&Var0, sVar4))
			{
				return 0;
			}
		}
	}
	switch (iParam1)
	{
		case 100:
			switch (iParam0)
			{
				case 10:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
							StringCopy(sParam3, "IG_1_IDLE_A_FascistPricks", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
							StringCopy(sParam3, "IG_1_IDLE_B_RoutineProcedureMyAss", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
							StringCopy(sParam3, "IG_1_IDLE_C_ThoseFederalChumps", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
							StringCopy(sParam3, "TrevorDidYouHearAbout", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
							StringCopy(sParam3, "TrevorTrevorYouWouldnt", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
							StringCopy(sParam3, "TrevorYouAreReallyGonnaWant", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
							StringCopy(sParam3, "ChefIsCookingUp", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
							StringCopy(sParam3, "IfYouWantToBorrow", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
							StringCopy(sParam3, "OneMoreHit", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 9:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
							StringCopy(sParam3, "TrevOnLav_Midwife", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
							StringCopy(sParam3, "TrevOnLav_ComeHere", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
							StringCopy(sParam3, "TrevOnLav_BackedUp", 64);
							break;
						case 4:
							return 0;
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Thats_Some_Good_Shit", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Whole_Chamber_Dog", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Hydrotropic_Bud_Or_Something", 64);
							break;
						case 4:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Dont_Dudge_Me_Dad", 64);
							break;
						case 5:
							return 0;
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
						case 4:
						case 7:
							StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
							StringCopy(sParam3, "Jimmy_Masterbation", 64);
							break;
						case 2:
						case 5:
						case 8:
							StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
							StringCopy(sParam3, "Jimmy_RollsFlapping", 64);
							break;
						case 3:
						case 6:
						case 9:
							StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
							StringCopy(sParam3, "Jimmy_GetKnocked", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Body_High2", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Grow_This_Strain", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Helps_My_Glands", 64);
							break;
						case 4:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
							StringCopy(sParam3, "Bring_Me_Some_Food", 64);
							break;
						case 5:
							StringCopy(sParam2, "", 64);
							StringCopy(sParam3, "", 64);
							return 1;
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@IDLE_A", 64);
							StringCopy(sParam3, "Good_To_See_You", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@IDLE_A", 64);
							StringCopy(sParam3, "I_Dont_Tell_You", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@IDLE_A", 64);
							StringCopy(sParam3, "Its_The_Big_Man", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@IDLE_A", 64);
							StringCopy(sParam3, "idle_worry_lines", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@IDLE_A", 64);
							StringCopy(sParam3, "idle_old_hag", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@IDLE_A", 64);
							StringCopy(sParam3, "idle_years_wasted", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 64:
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@IDLE_A", 64);
							StringCopy(sParam3, "idle_buzzed", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@IDLE_A", 64);
							StringCopy(sParam3, "idle_only_you", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@IDLE_A", 64);
							StringCopy(sParam3, "idle_pinot", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
							StringCopy(sParam3, "IG_5_YouRCreepingMeOut", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
							StringCopy(sParam3, "IG_5_NotNowMichael", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
							StringCopy(sParam3, "IG_5_IWasTryingToForget", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 60:
			switch (iParam0)
			{
				case 2:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
							StringCopy(sParam3, "IG_11_EXIT_OhShit", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
							StringCopy(sParam3, "IG_11_EXIT_IKnowHeIsInTherapy", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
							StringCopy(sParam3, "IG_11_EXIT_IKnowHeIsInTherapy", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 111:
			switch (iParam0)
			{
				case 8:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_A", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_A", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_B", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_D", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_C", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_F", 64);
							break;
						case 4:
							StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_D", 64);
							StringCopy(sParam3, "TALK_PHONE_Exit_I", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_A", 64);
							StringCopy(sParam3, "Im_Youre_Daughter", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_A", 64);
							StringCopy(sParam3, "Get_Out_Of_The", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_B", 64);
							StringCopy(sParam3, "Fucking_Old_Geezer", 64);
							break;
						case 4:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@IDLE_B", 64);
							StringCopy(sParam3, "Youll_Melt_Out_Here", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Of_Course_I_Go", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Go_Stick_Youre_Head", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@IDLE_A", 64);
							StringCopy(sParam3, "Youre_All_The_Fucking", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					switch (iParam4)
					{
						case 1:
							return 1;
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
							StringCopy(sParam3, "IG_14_ParentingAtItsFinest", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
							StringCopy(sParam3, "IG_14_IWishAll_A", 64);
							break;
						case 4:
							return 1;
							break;
						case 5:
							return 1;
							break;
						case 6:
							return 1;
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 83:
			switch (iParam0)
			{
				case 3:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
							StringCopy(sParam3, "IG_8_IDLE_A", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
							StringCopy(sParam3, "IG_8_IDLE_A", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
							StringCopy(sParam3, "IG_8_IDLE_A", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
							StringCopy(sParam3, "idle_A_WhenWasYourLastTime", 64);
							break;
						case 2:
							StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
							StringCopy(sParam3, "idle_B_BoyU", 64);
							break;
						case 3:
							StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
							StringCopy(sParam3, "idle_C_ImSoStressedOut", 64);
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 13:
					switch (iParam4)
					{
						case 1:
							StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
							StringCopy(sParam3, "FL_IG_3_ThatsJustTheTv", 64);
							break;
						case 2:
							return 1;
							break;
						case 3:
							return 1;
							break;
						case 4:
							return 1;
							break;
						case 5:
							StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
							StringCopy(sParam3, "FL_IG_3_NoTheCondoIsFine", 64);
							break;
						case 6:
							return 1;
							break;
						case 7:
							StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
							StringCopy(sParam3, "FL_IG_3_IAmNotBeingJealous", 64);
							break;
						case 8:
							return 1;
							break;
						case 9:
							return 1;
							break;
						case 10:
							return 1;
							break;
						case 11:
							return 1;
							break;
						case 12:
							return 1;
							break;
						default:
							return 0;
							break;
					}
					return 1;
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_245(int iParam0, char* sParam1)//Position - 0x1A335
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	char cVar4[16];
	MemCopy(sParam1, {Global_21224}, 4);
	func_83(iParam0, &uVar0, &uVar1, &uVar2);
	if (__LIB_0__::func_517(uVar1, 64))
	{
		StringConCat(sParam1, "A", 16);
		return AUDIO::GET_VARIATION_CHOSEN_FOR_SCRIPTED_LINE(sParam1);
	}
	iVar3 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar3 <= 0)
	{
		return -1;
	}
	StringCopy(&cVar4, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam1, (iVar3 - 1), iVar3), 16);
	StringConCat(sParam1, "_1A", 16);
	switch (MISC::GET_HASH_KEY(&cVar4))
	{
		case joaat("a"):
			return 1;
			break;
		case joaat("b"):
			return 2;
			break;
		case joaat("c"):
			return 3;
			break;
		case joaat("d"):
			return 4;
			break;
	}
	return AUDIO::GET_VARIATION_CHOSEN_FOR_SCRIPTED_LINE(sParam1);
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1A714
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__::func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__::func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__::func_795(iParam0, 9);
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
			iVar7 = __LIB_6__::func_788(iParam0, 1);
			if (!__LIB_6__::func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__::func_788(iParam0, 0);
			if (!__LIB_6__::func_779(iVar10, 14, iVar8, -1) && !__LIB_6__::func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__::func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__::func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__::func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__::func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__::func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__::func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__::func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_259(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_258(iParam0, iVar10, &iVar4, 1))
							{
								func_249(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_249(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__::func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_249(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_249(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_249(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_249(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_249(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__::func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__::func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__::func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__::func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_258(iParam0, iVar10, &iVar4, 0))
		{
			func_249(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_250(iParam0, iVar10, &iVar4))
		{
			func_249(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_250(int iParam0, int iParam1, int iParam2)//Position - 0x1AF24
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_251(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_251(int iParam0, int iParam1, int iParam2)//Position - 0x1AFB0
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_251(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_251(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_251(iParam0, 14, iVar4))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_251(iParam0, 14, uVar8[iVar7]))
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

int func_258(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1BA70
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_251(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0, int iParam1, int iParam2)//Position - 0x1BB06
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
				if (func_251(iParam0, iParam1, iVar0))
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
				if (func_251(iParam0, iParam1, iVar1))
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

int func_367(int iParam0)//Position - 0x38A07
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		case 1:
			return 8;
			break;
		case 2:
			return 9;
			break;
		case 3:
			return 11;
			break;
		case 4:
			return 12;
			break;
		case 5:
			return 15;
			break;
	}
	return 16;
}

int func_368(int iParam0)//Position - 0x38A6C
{
	int iVar0;
	var uVar1;
	iVar0 = func_367(iParam0);
	if (func_390(&(uLocal_55[iParam0]), iVar0, Local_75 + Local_77[iParam0 /*3*/], __LIB_0__::func_732((fLocal_76 + uLocal_78[iParam0]), 0f, 360f), &uLocal_95, &(iLocal_97[iParam0]), &uLocal_105, iParam0 + 1, Global_95446))
	{
		func_371(iParam0, &uVar1);
		func_370(iParam0);
		if (iVar0 == 10)
		{
			if (Global_95447[iVar0] == 120)
			{
				func_369(&iLocal_69, uLocal_55[iParam0], iVar0, Global_95447[iVar0], Local_75, fLocal_76, iLocal_70, iLocal_71, &Local_72, &Local_73);
			}
			else if (Global_113386.f_18514[iVar0] == 120)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
				{
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
			{
				OBJECT::DELETE_OBJECT(&iLocal_69);
			}
		}
		if (Global_95447[iVar0] == 141 || Global_95447[iVar0] == 140)
		{
			return 0;
		}
		if (!PED::IS_PED_INJURED(uLocal_55[iParam0]))
		{
			return 1;
		}
	}
	else
	{
		iLocal_91 = 1;
	}
	return 0;
}

void func_369(int* iParam0, int iParam1, int iParam2, int iParam3, struct<3> Param4, float fParam5, int iParam6, int iParam7, var uParam8, var uParam9)//Position - 0x38B74
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (iParam6 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
			STREAMING::REQUEST_MODEL(iParam6);
			if (STREAMING::HAS_MODEL_LOADED(iParam6))
			{
				if (iParam6 == joaat("prop_bong_01"))
				{
					*iParam0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 2.5f, iParam6, true, false, true);
				}
				else
				{
					if (PED::IS_PED_INJURED(iParam1))
					{
						return;
					}
					if (iParam6 == joaat("prop_bong_01") || iParam6 == joaat("p_cs_lighter_01"))
					{
						ENTITY::CREATE_MODEL_HIDE(Var0, 1.5f, iParam6, false);
					}
					*iParam0 = OBJECT::CREATE_OBJECT(iParam6, Var0, true, true, false);
					ENTITY::SET_CAN_CLIMB_ON_ENTITY(*iParam0, false);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
				{
					return;
				}
				if (iParam7 != -1)
				{
					if (!PED::IS_PED_INJURED(iParam1))
					{
						if (iParam6 != WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(*iParam0, iParam1, PED::GET_PED_BONE_INDEX(iParam1, iParam7), *uParam8, *uParam9, true, false, true, false, 2, true, 0);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(*iParam0, iParam1, PED::GET_PED_BONE_INDEX(iParam1, iParam7), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(*iParam0, "Gun_GripR"), *uParam8, 0f, 0f, 0f, *uParam9, -1f, true, true, false, true, 2);
						}
					}
				}
				else
				{
					if (func_104(iParam2, iParam3, &Var1, &fVar2))
					{
						ENTITY::SET_ENTITY_COORDS(*iParam0, Var1 + Param4 + *uParam8, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(*iParam0, Vector((fVar2 + fParam5), 0f, 0f) + *uParam9, 2, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam6);
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_370(int iParam0)//Position - 0x38D13
{
	int iVar0;
	iVar0 = func_367(iParam0);
	func_369(&(uLocal_59[iParam0]), uLocal_55[iParam0], iVar0, Global_95447[iVar0], Local_75, fLocal_76, iLocal_60[iParam0], iLocal_61[iParam0], &(Local_62[iParam0 /*3*/]), &(Local_63[iParam0 /*3*/]));
	func_369(&(uLocal_64[iParam0]), uLocal_55[iParam0], iVar0, Global_95447[iVar0], Local_75, fLocal_76, iLocal_65[iParam0], iLocal_66[iParam0], &(Local_67[iParam0 /*3*/]), &(Local_68[iParam0 /*3*/]));
}

void func_371(int iParam0, var uParam1)//Position - 0x38D93
{
	int iVar0;
	*uParam1 = func_389(iParam0);
	if (*uParam1 < 1)
	{
		iVar0 = func_367(iParam0);
		func_372(&(uLocal_56[*uParam1]), iVar0, Local_75, fLocal_76, 0);
	}
}

void func_372(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x38DC7
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	struct<82> Var6;
	int iVar7;
	int iVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iVar0 = Global_95447[iParam1];
		if (func_388(iParam1, iVar0, &Var1, &fVar2, &bVar3, &iVar4, bParam4))
		{
			if (!Global_3)
			{
				fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param2 + Var1);
				if (fVar5 < (15f * 15f) && !INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)))
				{
					return;
				}
				Var6.f_11 = 12;
				Var6.f_31 = 49;
				Var6.f_81 = 2;
				if (bVar3 != 3)
				{
					__LIB_11__::func_860(bVar3, &Var6, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_MODEL(iVar7) == Var6.f_0)
					{
						*iParam0 = iVar7;
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
						return;
					}
				}
				if (fVar5 < (35f * 35f))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param2 + Var1, 10f))
					{
						if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Var6.f_0, Param2 + Var1, false))
						{
							if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)))
							{
								return;
							}
						}
					}
				}
				else if (CAM::IS_SPHERE_VISIBLE(Param2 + Var1, 4f))
				{
					if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Var6.f_0, Param2 + Var1, false))
					{
						if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)))
						{
							return;
						}
					}
				}
				if (__LIB_11__::func_928(Param2 + Var1, 6f))
				{
					return;
				}
				if (MISC::IS_AREA_OCCUPIED(Param2 + Var1 - Vector(4f, 4f, 4f), Param2 + Var1 + Vector(4f, 4f, 4f), false, true, false, false, false, 0, false))
				{
					return;
				}
			}
			if (bVar3 != 145)
			{
				if (!__LIB_20__::func_713(iParam0, bVar3, Param2 + Var1, iVar4))
				{
					if (__LIB_36__::func_61(iParam0, bVar3, Param2 + Var1, __LIB_0__::func_732((fParam3 + fVar2), 0f, 360f), 1, iVar4))
					{
						VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*iParam0), 15);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
						if (iParam1 == 2)
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*iParam0, true);
						}
						if (Global_3)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 3);
						}
					}
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*iParam0), 15);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
					if (iParam1 == 2)
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(*iParam0, true);
					}
					if (Global_3)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 3);
					}
				}
			}
			else
			{
				iVar8 = 0;
				if (iVar8 != 0)
				{
					STREAMING::REQUEST_MODEL(iVar8);
					if (STREAMING::HAS_MODEL_LOADED(iVar8))
					{
						if (CAM::IS_SPHERE_VISIBLE(Param2 + Var1, 2.5f))
						{
							return;
						}
						if (__LIB_11__::func_928(Param2 + Var1, 6f))
						{
							return;
						}
						if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
						{
							VEHICLE::DELETE_VEHICLE(iParam0);
						}
						*iParam0 = VEHICLE::CREATE_VEHICLE(iVar8, Param2 + Var1, __LIB_0__::func_732((fParam3 + fVar2), 0f, 360f), false, false, false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
						VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*iParam0), 15);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
						if (iVar8 == joaat("police"))
						{
							VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(*iParam0, false);
							VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(*iParam0, true);
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(*iParam0, true);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar8);
					}
				}
			}
		}
	}
}

int func_388(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)//Position - 0x3A6C8
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Var0 = { -812.0607f, 179.5117f, 71.1531f };
	fVar1 = 222.8314f;
	*uParam5 = 0;
	if (bParam6)
	{
		switch (iParam0)
		{
			case 1:
				*uParam2 = { Vector(68.3336f, 156.3374f, -826.3746f) - Var0 };
				*uParam3 = (81.6041f - fVar1);
				*uParam5 = 1;
				*uParam4 = 15;
				return 1;
				break;
			case 2:
				*uParam2 = { Vector(69.9654f, 159.461f, -816.9271f) - Var0 };
				*uParam3 = (105.9127f - fVar1);
				*uParam5 = 1;
				*uParam4 = 17;
				return 1;
				break;
			}
	}
	switch (iParam1)
	{
		case 7:
		case 27:
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar2 < 5)
			{
				*uParam2 = { -44.279f, -1.958f, -0.5f };
				*uParam3 = 135.72f;
				*uParam5 = 1;
				*uParam4 = 15;
				return 1;
			}
			else if (iVar2 < 35)
			{
				*uParam2 = { -16.8f, -21.3f, -0.5f };
				*uParam3 = -130.944f;
				*uParam5 = 1;
				*uParam4 = 15;
				return 1;
			}
			*uParam2 = { -3.779f, -18.458f, -0.5f };
			*uParam3 = -100.944f;
			*uParam5 = 1;
			*uParam4 = 15;
			return 1;
			break;
		case 22:
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar3 < 5)
			{
				*uParam2 = { -44.279f, -1.958f, -0.5f };
				*uParam3 = 135.72f;
				*uParam5 = 2;
				*uParam4 = 14;
				return 1;
			}
			else if (iVar3 < 35)
			{
				*uParam2 = { -16.8f, -21.3f, -0.5f };
				*uParam3 = -130.944f;
				*uParam5 = 2;
				*uParam4 = 14;
				return 1;
			}
			*uParam2 = { -3.779f, -18.458f, -0.5f };
			*uParam3 = -100.944f;
			*uParam5 = 2;
			*uParam4 = 14;
			return 1;
			break;
		case 23:
			if (func_104(iParam0, iParam1, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				*uParam5 = 2;
				*uParam4 = 14;
				return 1;
			}
			break;
		case 51:
			if (func_104(iParam0, iParam1, uParam2, uParam3))
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar4 < 5)
				{
					*uParam2 = { Vector(65.8745f, 167.3424f, -857.7297f) - Var0 };
					*uParam3 = (354.6213f - fVar1);
					*uParam5 = 1;
					*uParam4 = 17;
					return 1;
				}
				else if (iVar4 < 35)
				{
					*uParam2 = { *uParam2 + Vector(0f, -9.4f, -3.4f) };
					*uParam3 = (*uParam3 + (-65f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)));
					*uParam5 = 1;
					*uParam4 = 17;
					return 1;
				}
				*uParam2 = { *uParam2 + Vector(0f, -0.3f, -8.5541f) - Vector(1.2923f, 2.834f, 2.3978f) - Vector(0f, -1.3721f, -5.6492f) };
				*uParam3 = (*uParam3 + (((42f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) - (259.72f - 242.5119f)) + 90f));
				*uParam5 = 1;
				*uParam4 = 17;
				return 1;
			}
			break;
		default:
			*uParam4 = 145;
			return 0;
			break;
	}
	*uParam4 = 145;
	return 0;
}

int func_389(int iParam0)//Position - 0x3A9EF
{
	switch (iParam0)
	{
		case 5:
			return 1;
			break;
	}
	return 2;
}

int func_390(int* iParam0, int iParam1, struct<3> Param2, float fParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8)//Position - 0x3AA0C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((((__LIB_6__::func_854(0) || __LIB_6__::func_854(0)) || __LIB_6__::func_854(2)) || (MISC::GET_RANDOM_EVENT_FLAG() && Global_113376)) || __LIB_0__::func_510())
	{
		if (Global_95447[iParam1] != 141)
		{
			__LIB_11__::func_915(iParam1);
			Global_95447[iParam1] = 141;
		}
	}
	iVar0 = 0;
	bVar1 = __LIB_11__::func_970(iParam1, &iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (Global_95447[iParam1] == 141 || Global_95447[iParam1] == 140)
		{
			if (__LIB_20__::func_708(iParam0, iParam1, uParam6, iParam7, iParam8))
			{
				return 0;
			}
			return 0;
		}
		bVar2 = false;
		if (Global_95447[iParam1] != 123)
		{
			if (!__LIB_32__::func_783(iParam1, Param2, *uParam4, uParam5))
			{
				SYSTEM::WAIT(0);
				return 0;
			}
		}
		if (Global_78583 == 0 && (bVar1 == 44 && Global_95447[5] == 96))
		{
		}
		else if (__LIB_11__::func_928(Param2, 4f))
		{
			SYSTEM::WAIT(0);
			return 0;
		}
		if (__LIB_11__::func_918(Global_95447[iParam1], &sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(&sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar3))
			{
				bVar2 = true;
			}
		}
		if (bVar1 != 145)
		{
			bVar4 = false;
			if (__LIB_0__::func_317(bVar1))
			{
				__LIB_20__::func_689(bVar1);
				if (!__LIB_20__::func_688(bVar1))
				{
					bVar4 = true;
				}
			}
			else
			{
				__LIB_11__::func_972(bVar1);
				if (!__LIB_11__::func_971(bVar1))
				{
					bVar4 = true;
				}
			}
			if ((!bVar2 && !bVar4) && !__LIB_0__::func_198())
			{
				if (__LIB_0__::func_317(bVar1))
				{
					if (func_418(iParam0, bVar1, Param2, fParam3, 1, 0, 0))
					{
						__LIB_11__::func_921(iParam0, iParam8);
						func_414(*iParam0, iParam1, Global_95447[iParam1]);
						__LIB_26__::func_533(*iParam0, iParam1, iParam8, 0);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
						__LIB_0__::func_203(uParam6, iParam7, *iParam0, __LIB_11__::func_905(iParam1), 0, 1);
						iVar5 = __LIB_0__::func_386(bVar1);
						Global_97919[iVar5] = *iParam0;
						__LIB_36__::func_62(*iParam0, 0);
						Global_113386.f_2363.f_539.f_2300[bVar1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
						Global_113386.f_2363.f_539.f_2310[bVar1] = ENTITY::GET_ENTITY_HEADING(*iParam0);
						*uParam5 = INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0);
					}
				}
				else if (__LIB_20__::func_621(iParam0, bVar1, Param2, fParam3, 1))
				{
					__LIB_11__::func_921(iParam0, iParam8);
					func_414(*iParam0, iParam1, Global_95447[iParam1]);
					__LIB_26__::func_533(*iParam0, iParam1, iParam8, 0);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
					__LIB_0__::func_203(uParam6, iParam7, *iParam0, __LIB_11__::func_905(iParam1), 0, 1);
					*uParam5 = INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0);
				}
			}
		}
		else if (iVar0 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar0);
			if (STREAMING::HAS_MODEL_LOADED(iVar0) && !bVar2)
			{
				*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				__LIB_11__::func_921(iParam0, iParam8);
				func_414(*iParam0, iParam1, Global_95447[iParam1]);
				__LIB_26__::func_533(*iParam0, iParam1, iParam8, 0);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
				__LIB_0__::func_203(uParam6, iParam7, *iParam0, __LIB_11__::func_905(iParam1), 0, 1);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			fVar6 = (CAM::REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() + 5f);
			switch (Global_95447[iParam1])
			{
				case 6:
				case 8:
				case 38:
				case 39:
				case 40:
				case 30:
				case 1:
				case 136:
				case 125:
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(*iParam0, true)) < (fVar6 * fVar6))
					{
						RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
					}
					break;
				default:
					break;
				}
		}
		if (iParam1 == 12)
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
			{
				ENTITY::SET_ENTITY_VISIBLE(*iParam0, false, false);
				return 0;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(*iParam0))
			{
				return 0;
			}
		}
		else if (Global_95447[iParam1] != 141)
		{
			iVar7 = -1;
			switch (iParam1)
			{
				case 0:
					iVar7 = 24;
					break;
				case 1:
					iVar7 = 25;
					break;
				case 2:
					iVar7 = 26;
					break;
				case 5:
					iVar7 = 29;
					break;
				case 10:
					iVar7 = 30;
					break;
				case 11:
					iVar7 = 31;
					break;
				case 13:
					iVar7 = 32;
					break;
			}
			if ((bVar1 != 145 && iVar7 != -1) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				iVar8 = __LIB_20__::func_687(*iParam0);
				if (iVar8 != 0)
				{
					if (!__LIB_11__::func_924(-1789721694))
					{
						__LIB_11__::func_923(75, ENTITY::GET_ENTITY_COORDS(*iParam0, false), 250f, -1);
						if (__LIB_20__::func_709(-1789721694, iVar7, -1, 6, __LIB_32__::func_787(), bVar1, 60000, 10000, 75, iVar8, -1, 262208, 1))
						{
							__LIB_11__::func_915(iParam1);
							Global_95447[iParam1] = 141;
							return 0;
						}
					}
				}
			}
			else
			{
				__LIB_11__::func_915(iParam1);
				Global_95447[iParam1] = 141;
				return 0;
			}
		}
		if (bVar1 != 145)
		{
			Global_43604[bVar1] = MISC::GET_GAME_TIMER() + 20000;
		}
		fVar9 = (100f * 1.25f);
		fVar10 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(*iParam0, false));
		if (fVar10 > (fVar9 * fVar9))
		{
			if (Global_95447[iParam1] != 141)
			{
				__LIB_11__::func_915(iParam1);
				Global_95447[iParam1] = 141;
			}
		}
		if (fVar10 < 100f && !__LIB_1__::func_406(*iParam0, PLAYER::PLAYER_PED_ID()))
		{
			if (Global_95447[iParam1] != 138)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 1))
				{
					if (bVar1 == 2)
					{
						iVar11 = PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 4);
						if (iVar11 == 25)
						{
							while (((!func_249(*iParam0, 4, 91, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0) || !func_249(*iParam0, 6, 28, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(*iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0)) || !func_249(*iParam0, 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
							{
								SYSTEM::WAIT(0);
							}
						}
					}
					__LIB_11__::func_915(iParam1);
					Global_95447[iParam1] = 138;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 124, true);
			PED::SET_PED_RESET_FLAG(*iParam0, 62, true);
			if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0 || TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
			{
				if (__LIB_11__::func_922(iParam1, &fVar12))
				{
					PED::SET_PED_CAPSULE(*iParam0, fVar12);
				}
			}
			*uParam5 = INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0);
			if (Global_100162 == *iParam0)
			{
				if (Global_95447[iParam1] != 140)
				{
					if (!__LIB_0__::func_200())
					{
						Global_100162 = 0;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_414(int iParam0, int iParam1, int iParam2)//Position - 0x3CC50
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 138:
		case 140:
			return 0;
			break;
		case 0:
		case 2:
		case 3:
		case 1:
			switch (iParam1)
			{
				case 0:
					__LIB_26__::func_530(iParam0, 131);
					return 1;
					break;
				case 1:
					__LIB_26__::func_530(iParam0, 40);
					return 1;
					break;
				case 2:
					__LIB_26__::func_530(iParam0, 85);
					return 1;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					__LIB_26__::func_530(iParam0, 131);
					return 1;
					break;
				case 1:
					__LIB_26__::func_530(iParam0, 41);
					return 1;
					break;
				case 2:
					__LIB_26__::func_530(iParam0, 81);
					return 1;
					break;
			}
			break;
		case 5:
		case 8:
		case 10:
			__LIB_26__::func_530(iParam0, 131);
			return 1;
			break;
		case 21:
			__LIB_26__::func_530(iParam0, 133);
			return 1;
			break;
		case 18:
		case 6:
		case 16:
		case 9:
		case 17:
		case 11:
		case 24:
			__LIB_26__::func_530(iParam0, 131);
			return 1;
			break;
		case 7:
		case 22:
		case 23:
		case 20:
			__LIB_26__::func_530(iParam0, 132);
			return 1;
			break;
		case 12:
		case 13:
		case 14:
		case 15:
			switch (iParam1)
			{
				case 0:
					__LIB_26__::func_530(iParam0, 131);
					return 1;
					break;
				case 1:
					__LIB_26__::func_530(iParam0, 40);
					return 1;
					break;
			}
			break;
		case 28:
			__LIB_26__::func_530(iParam0, 37);
			return 1;
			break;
		case 43:
		case 42:
		case 34:
		case 38:
			__LIB_26__::func_530(iParam0, 42);
			return 1;
			break;
		case 29:
		case 30:
		case 35:
		case 44:
		case 45:
			__LIB_26__::func_530(iParam0, 40);
			return 1;
			break;
		case 39:
		case 40:
			__LIB_26__::func_530(iParam0, 38);
			return 1;
			break;
		case 31:
			__LIB_26__::func_530(iParam0, 43);
			return 1;
			break;
		case 26:
		case 46:
			__LIB_26__::func_530(iParam0, 39);
			return 1;
			break;
		case 41:
		case 37:
		case 27:
		case 36:
			__LIB_26__::func_530(iParam0, 34);
			return 1;
			break;
		case 33:
		case 32:
			__LIB_26__::func_530(iParam0, 41);
			return 1;
			break;
		case 54:
		case 70:
			__LIB_26__::func_530(iParam0, 87);
			return 1;
			break;
		case 48:
		case 68:
			__LIB_26__::func_530(iParam0, 84);
			return 1;
			break;
		case 65:
		case 64:
			__LIB_26__::func_530(iParam0, 85);
			return 1;
			break;
		case 66:
			__LIB_26__::func_530(iParam0, 86);
			return 1;
			break;
		case 49:
		case 59:
		case 72:
		case 60:
		case 73:
			__LIB_26__::func_530(iParam0, 80);
			return 1;
			break;
		case 47:
		case 58:
			switch (iParam1)
			{
				case 2:
					__LIB_26__::func_530(iParam0, 81);
					return 1;
					break;
				case 1:
					__LIB_26__::func_530(iParam0, 40);
					return 1;
					break;
			}
			break;
		case 51:
		case 52:
		case 67:
			__LIB_26__::func_530(iParam0, 82);
			return 1;
			break;
		case 53:
			__LIB_26__::func_530(iParam0, 83);
			return 1;
			break;
		case 61:
		case 62:
		case 55:
			__LIB_26__::func_530(iParam0, 85);
			return 1;
			break;
		case 63:
		case 71:
			__LIB_26__::func_530(iParam0, 86);
			return 1;
			break;
		case 50:
		case 69:
		case 57:
		case 56:
			switch (iParam1)
			{
				case 0:
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
					return 1;
					break;
				case 1:
					__LIB_26__::func_530(iParam0, 37);
					return 1;
					break;
				case 2:
					__LIB_26__::func_530(iParam0, 79);
					return 1;
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 2:
					__LIB_26__::func_530(iParam0, 81);
					return 1;
					break;
				case 1:
					__LIB_26__::func_530(iParam0, 35);
					return 1;
					break;
				case 0:
					__LIB_26__::func_530(iParam0, 131);
					return 1;
					break;
			}
			break;
		case 19:
			__LIB_26__::func_530(iParam0, 134);
			return 1;
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					__LIB_26__::func_530(iParam0, 134);
					return 1;
					break;
				case 1:
					__LIB_26__::func_530(iParam0, 42);
					return 1;
					break;
			}
			break;
		case 95:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, false);
			return 1;
			break;
		case 97:
		case 94:
		case 96:
		case 98:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
			PED::CLEAR_PED_PROP(iParam0, 1);
			return 1;
			break;
		case 113:
			func_249(iParam0, 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			return 1;
			break;
		case 115:
			func_249(iParam0, 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			return 1;
			break;
		case 126:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 128:
		case 129:
			__LIB_26__::func_530(iParam0, 159);
			return 1;
			break;
		case 127:
		case 135:
			__LIB_26__::func_530(iParam0, 161);
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 4:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 0, 1, false);
			return 1;
			break;
		case 10:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 0, 0, false);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, false);
			if (iParam2 != 101)
			{
				PED::CLEAR_PED_PROP(iParam0, 2);
			}
			else
			{
				PED::SET_PED_PROP_INDEX(iParam0, 2, 0, 0, false);
			}
			return 1;
			break;
		case 8:
		case 9:
			if (iParam2 == 108)
			{
				iVar0 = 12;
				iVar1 = 32;
				if (BitTest(Global_113386.f_2363.f_539.f_3816[0 /*166*/][iVar0 /*11*/][(iVar1 / 32)], (iVar1 % 32)))
				{
					func_249(iParam0, 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 12))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			return 1;
			break;
		case 6:
			return 1;
			break;
	}
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
	return 0;
}

int func_418(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x3DD64
{
	int iVar0;
	if (__LIB_0__::func_317(bParam1))
	{
		iVar0 = __LIB_12__::func_95(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_26__::func_535(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_621(*iParam0);
			__LIB_36__::func_54(*iParam0, 1, 0);
			__LIB_26__::func_525(*iParam0);
			__LIB_26__::func_430(*iParam0);
			func_420(*iParam0, bParam6);
			__LIB_0__::func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_420(int iParam0, bool bParam1)//Position - 0x3DE7C
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_20__::func_763(iParam0);
	if (__LIB_0__::func_377(bVar0))
	{
		__LIB_0__::func_376(bVar0, 0);
		func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_424(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__::func_843(iParam0))
		{
			__LIB_0__::func_376(bVar0, 0);
			func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_424(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_251(iParam0, 3, 169))
					{
						func_249(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_251(iParam0, 12, 6))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 20))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 21))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 22))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 11))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 10))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 50))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 59))
			{
				func_249(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 22))
			{
				func_249(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 14))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_251(iParam0, 12, 13))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 14))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 15))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 4))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 3))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 82))
			{
				func_249(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 76))
			{
				func_249(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 1))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_251(iParam0, 12, 12))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 15))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_251(iParam0, 3, 71))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 18))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 19))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 7))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 6))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 88))
			{
				func_249(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 17))
			{
				func_249(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 11))
			{
				func_249(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_424(int iParam0, int iParam1)//Position - 0x3E60D
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_20__::func_763(iParam0);
		if (__LIB_0__::func_317(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_259(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_358(bVar0);
					func_435(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_32__::func_782(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_36__::func_59();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[bVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (bVar0 == 0)
					{
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_435(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x3F5EC
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
		bVar0 = __LIB_20__::func_763(iParam0);
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
		if (__LIB_0__::func_317(bVar0))
		{
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_258(iParam0, iVar1, &iVar2, 0))
			{
				func_249(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_250(iParam0, iVar1, &iVar2))
			{
				func_249(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_600(iParam0);
			__LIB_0__::func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_438(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_438(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_438(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__::func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__::func_186(iVar9);
			}
			__LIB_0__::func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_796(161, 1, -1, 1);
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

int func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3FAC8
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
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
			func_561(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 10, 0, -1) };
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
						func_561(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_561(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_438(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_561(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, func_560(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_438(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_468();
			if (iVar17 != -1)
			{
				__LIB_25__::func_43(iVar17, 0, iParam10);
			}
			func_554(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_561(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__::func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_561(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_438(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_36__::func_60(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_438(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_545(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_438(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_37__::func_821(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_438(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_438(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar32, -1) };
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
								func_438(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
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
								func_438(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_438(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_438(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_554(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_545(iVar5, func_560(iParam0, 8, -1), iParam2, func_560(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_534(2160, iParam10, 0);
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
				func_481(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_545(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_554(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_545(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
				iVar52 = __LIB_0__::func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_424(135, iParam10);
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
				__LIB_31__::func_910(iParam0, iParam10);
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
						func_438(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_438(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_545(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_545(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_545(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_438(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_458(iParam0, 9, iVar63))
						{
							func_438(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_438(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_438(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_534(2042, -1, 0);
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
						func_438(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_560(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_560(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_438(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_438(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_438(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_438(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_438(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_438(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_438(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_438(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_438(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_438(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				__LIB_36__::func_60(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_438(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_438(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_439(iParam0, &uVar4))
		{
			func_438(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_438(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_438(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_438(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_560(iParam0, 3, -1), iVar10);
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
				func_438(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_439(int iParam0, var uParam1)//Position - 0x41975
{
	int iVar0;
	int iVar1;
	*uParam1 = func_560(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_534(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_534(754, Global_78127, 0) == 0 && __LIB_0__::func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				if (__LIB_0__::func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_534(755, Global_78127, 0);
		if (!func_458(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_534(753, Global_78127, 0);
			}
			__LIB_0__::func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_458(int iParam0, int iParam1, int iParam2)//Position - 0x45C32
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__::func_180(iVar0, iParam2) };
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
				if (!func_458(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__::func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_458(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_458(iParam0, 14, iVar6))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__::func_534(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_458(iParam0, 14, uVar11[iVar10]))
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
				if (__LIB_6__::func_802(iVar0, 11, __LIB_6__::func_795(iParam0, 11), -1))
				{
					if (__LIB_6__::func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_458(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_458(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_481(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4C95D
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__::func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__::func_43(iVar1, 1, iParam2);
	}
	func_482(iParam0, bParam3, 0, -1);
}

void func_482(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4C9AB
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
		bVar3 = func_525(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_516(iParam0, iParam3);
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
			if (__LIB_18__::func_432(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_432(123, iVar0))
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
					if (__LIB_18__::func_432(iVar10, iVar0))
					{
						if (__LIB_25__::func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_925(Var9.f_2, Var9.f_3, iVar10))
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

int func_516(int iParam0, int iParam1)//Position - 0x5BDC3
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
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_560(iParam0, 11, -1);
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
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
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
				iVar5 = func_560(iParam0, 11, -1);
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

int func_525(int iParam0, bool bParam1)//Position - 0x5C260
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
							iVar2 = __LIB_18__::func_431(joaat("MP_M_Freemode_01"), 11, func_560(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(72, -1))
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
						iVar3 = func_560(iParam0, 11, -1);
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
						iVar5 = func_560(iParam0, 8, -1);
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
							iVar7 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_560(iParam0, 11, -1), 0);
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
						iVar8 = func_560(iParam0, 11, -1);
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
							iVar10 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_560(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_560(iParam0, 11, -1), 0);
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
						iVar12 = func_560(iParam0, 8, -1);
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

int func_545(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6512C
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
					iVar0 = func_545(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_545(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_554(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6974C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_600(iParam0))
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
			__LIB_31__::func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_42(iVar0, iParam2, 13) && !__LIB_25__::func_42(iVar0, iParam2, 14)) && !__LIB_25__::func_42(iVar0, iParam2, 15)) && !__LIB_25__::func_42(iVar0, iParam2, 16)) && !__LIB_25__::func_42(iVar0, iParam2, 71)) && !__LIB_25__::func_42(iVar0, iParam2, 72))
				{
					__LIB_31__::func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__::func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__::func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_560(int iParam0, int iParam1, int iParam2)//Position - 0x699FD
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
				if (func_458(iParam0, iParam1, iVar0))
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
				if (func_458(iParam0, iParam1, iVar1))
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

void func_561(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x69A9E
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
		Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_561(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_561(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_561(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_0__::func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_561(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_561(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_561(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_561(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_561(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_600(int iParam0)//Position - 0x82724
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_560(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_560(iParam0, 11, -1);
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

void func_621(int iParam0)//Position - 0x83D1C
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_20__::func_763(iParam0);
	if (__LIB_0__::func_317(bVar0))
	{
		if (!Global_100362[bVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[bVar0] != 0)
			{
				if (__LIB_0__::func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[bVar0])
				{
					__LIB_0__::func_358(bVar0);
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_352(iParam0);
				}
			}
		}
		func_435(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::func_365(49))
				{
					iVar1 = func_259(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_622(__LIB_12__::func_95(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_365(44))
				{
					iVar1 = func_259(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_259(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_622(__LIB_12__::func_95(0), 3, 70, 1, 0, 0, 0);
					func_622(__LIB_12__::func_95(0), 3, 71, 1, 0, 0, 0);
					func_622(__LIB_12__::func_95(0), 3, 72, 1, 0, 0, 0);
					func_622(__LIB_12__::func_95(0), 3, 73, 1, 0, 0, 0);
					func_622(__LIB_12__::func_95(0), 3, 74, 1, 0, 0, 0);
					func_622(__LIB_12__::func_95(0), 3, 75, 1, 0, 0, 0);
					func_622(__LIB_12__::func_95(0), 4, 41, 1, 0, 0, 0);
					func_622(__LIB_12__::func_95(0), 4, 42, 1, 0, 0, 0);
					func_622(__LIB_12__::func_95(0), 4, 43, 1, 0, 0, 0);
					func_622(__LIB_12__::func_95(0), 4, 44, 1, 0, 0, 0);
					func_622(__LIB_12__::func_95(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_259(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_358(bVar0);
				func_435(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_622(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x83F79
{
	__LIB_38__::func_82(iParam0, iParam1, iParam2, bParam3);
	func_625(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__::func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_625(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x84135
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
								func_625(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_625(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_625(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 14, iVar5, 1, 0);
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
								func_625(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_625(iParam0, 14, 17, 1, 0);
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

void func_650()//Position - 0x85C8D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_97[iVar0] = 0;
		iVar0++;
	}
	iLocal_74 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(35.08396f, 3821.068f, 1974.1045f) - Vector(2f, 2f, 2f), Vector(35.08396f, 3821.068f, 1974.1045f) + Vector(2f, 2f, 2f), false, true, true, true);
}

void func_651(struct<4> Param0)//Position - 0x85CDF
{
	int iVar0;
	Local_75 = { Param0 };
	fLocal_76 = Param0.f_3;
	func_652(10);
	func_652(8);
	func_652(9);
	func_652(11);
	func_652(12);
	func_104(10, Global_95447[10], &(Local_77[0 /*3*/]), &(uLocal_78[0]));
	func_104(8, Global_95447[8], &(Local_77[1 /*3*/]), &(uLocal_78[1]));
	func_104(9, Global_95447[9], &(Local_77[2 /*3*/]), &(uLocal_78[2]));
	func_104(11, Global_95447[11], &(Local_77[3 /*3*/]), &(uLocal_78[3]));
	func_104(12, Global_95447[12], &(Local_77[4 /*3*/]), &(uLocal_78[4]));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_97(iVar0);
		iLocal_83[iVar0] = -1;
		iLocal_272[iVar0] = -1;
		iVar0++;
	}
}

int func_652(int iParam0)//Position - 0x85DB7
{
	int iVar0;
	if (Global_78588.f_1)
	{
		while (Global_78588.f_1)
		{
			SYSTEM::WAIT(0);
		}
	}
	if (Global_95447[iParam0] == 141)
	{
		if (func_110(iParam0, &iVar0, 0))
		{
			__LIB_26__::func_529(iParam0, iVar0);
			return 1;
		}
	}
	return 0;
}

void func_653()//Position - 0x85DFF
{
	var uVar0;
	var uVar1[5];
	int iVar2;
	int iVar3;
	func_681(&uLocal_55, &uLocal_58);
	uVar0 = 5;
	__LIB_38__::func_148(&iLocal_272, &uLocal_56, &uLocal_55, &uLocal_59, &iLocal_60, &uVar0, &uVar1, &uLocal_82, &iLocal_83, &Local_84);
	func_207(0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_74, false);
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_64[iVar2]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(uLocal_64[iVar2]))
			{
				ENTITY::DETACH_ENTITY(uLocal_64[iVar2], true, true);
			}
		}
		if (__LIB_20__::func_686(uLocal_64[iVar2], "family_prop_r", iVar2))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_64[iVar2]));
		}
		if (iLocal_65[iVar2] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_65[iVar2]);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (iLocal_60[iVar2] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_60[iVar2]);
		}
		if (uVar1[iVar2] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uVar1[iVar2]);
		}
		iVar3 = func_367(iVar2);
		if (Global_95447[iVar3] != 141)
		{
			__LIB_11__::func_915(iVar3);
			Global_95447[iVar3] = 141;
		}
		__LIB_20__::func_698(iVar3);
		iVar2++;
	}
	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_681(var uParam0, var uParam1)//Position - 0x86D10
{
	int iVar0;
	iLocal_43 = iLocal_43;
	iLocal_43 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
		{
			ENTITY::REMOVE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar0], true), 5f, ENTITY::GET_ENTITY_MODEL((*uParam1)[iVar0]), false);
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], false))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY((*uParam0)[iVar0], (*uParam1)[iVar0]))
				{
					if (__LIB_11__::func_963((*uParam1)[iVar0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION((*uParam1)[iVar0], false);
					}
					ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[iVar0], false);
					ENTITY::DETACH_ENTITY((*uParam0)[iVar0], true, true);
				}
			}
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam1[iVar0]);
		iVar0++;
	}
	return 0;
}

