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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<8> Local_57 = { 5, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_58 = 0;
	var uLocal_59 = 16;
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
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	int iLocal_224 = 0;
	struct<2> Local_225 = { 0, 5 } ;
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
	var uLocal_241 = 5;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
	int iVar2;
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
	iLocal_35 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_52 = __LIB_17__::func_29(49);
	iLocal_53 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_37__::func_256();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_37__::func_255(&Var0);
	Var1 = { ScriptParam_225.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_112473[Var0.f_0 /*10*/].f_9 != -1)
			{
				__LIB_0__::func_135("Relinquishing candidate id...");
				__LIB_0__::func_56(&(Global_112473[Var0.f_0 /*10*/].f_9));
			}
		}
		func_295(&Var0, 1);
	}
	if (!func_292(&Var0, Var1, 1f))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_283(Var0.f_0))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__::func_268(Var0.f_0))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_260(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("Player out of range [TERMINATING]");
			func_295(&Var0, 1);
		}
	}
	if (Var0.f_0 == 6)
	{
		iLocal_55 = __LIB_37__::func_250();
	}
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	if (Var0.f_0 == 4)
	{
		__LIB_0__::func_222(&uLocal_59, 3, Var0.f_28[0], "BARRY", 0, 1);
		iLocal_224 = MISC::GET_GAME_TIMER();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Var0.f_0 == 2 || Var0.f_0 == 3)
		{
			func_256(&Var0);
			func_254();
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Barry", 1, 0, 0, 0);
			}
		}
		else if (Var0.f_0 == 4)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("BARRY", 1, 0, 0, 0);
			}
		}
		if (!__LIB_37__::func_333(&Var0, Var0.f_0 != 2))
		{
			func_295(&Var0, 1);
		}
		__LIB_37__::func_266(Var0.f_0);
		__LIB_37__::func_297(&iLocal_53, &(Var0.f_9), Var1);
		if (__LIB_0__::func_121(Var0.f_28[0]))
		{
			if (Var0.f_0 == 2)
			{
				if (__LIB_37__::func_296(&Var0, ENTITY::GET_ENTITY_COORDS(Var0.f_28[0], true), "BARY1AU", "BARY1_PRELEA", 5, "BARRY", 10000, 23f))
				{
					func_204(&Var0, Local_57, 1, 0);
				}
			}
			else if (Var0.f_0 == 3)
			{
				if (__LIB_37__::func_296(&Var0, ENTITY::GET_ENTITY_COORDS(Var0.f_28[0], true), "BARY2AU", "BARY2_AMB", 3, "BARRY", 10000, 23f))
				{
				}
			}
			else if (Var0.f_0 == 4)
			{
				func_190(&uLocal_58, ENTITY::GET_ENTITY_COORDS(Var0.f_28[0], true), "BARR3AU", "BARRY3_AMB");
			}
		}
		iVar2 = 0;
		if (func_189(Var0.f_0))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_54) > 5000)
			{
				iVar2 = 1;
				iLocal_54 = MISC::GET_GAME_TIMER();
			}
		}
		if (__LIB_37__::func_320(&Var0, iVar2))
		{
			if (__LIB_37__::func_240(Var0.f_0))
			{
				__LIB_37__::func_264(Var0.f_0, &iLocal_56);
			}
			if (!__LIB_37__::func_343(&Var0))
			{
				func_295(&Var0, 1);
			}
			if (__LIB_37__::func_236(&Var0))
			{
				func_295(&Var0, 0);
			}
		}
	}
}

int func_189(int iParam0)//Position - 0xCE79
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return 1;
			break;
	}
	return 0;
}

void func_190(var uParam0, struct<3> Param1, char[4] cParam2, char* sParam3)//Position - 0xCE9C
{
	switch (*uParam0)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_224) > 5000)
			{
				*uParam0 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Param1, 1) <= 20f)
			{
				if (__LIB_16__::func_7(&uLocal_59, cParam2, sParam3, 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_75())
			{
				iLocal_224 = MISC::GET_GAME_TIMER();
				*uParam0 = 0;
			}
			else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Param1, 1) >= 25f)
			{
				__LIB_0__::func_325();
				*uParam0 = 0;
			}
			break;
	}
}

void func_204(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, int iParam10)//Position - 0xD601
{
	int iVar0;
	int iVar1;
	iVar1 = 32768;
	if (!__LIB_0__::func_121(iParam0->f_28[iParam10]))
	{
		return;
	}
	if (bParam9)
	{
		iVar1 |= 512;
	}
	uParam1.f_7 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam1.f_6);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_ANIM(0, iParam0->f_48, uParam1[uParam1.f_7], 4f, -4f, -1, 0 | iVar1, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, iParam0->f_48, iParam0->f_48.f_1, 8f, -8f, -1, 1 | iVar1, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0->f_28[iParam10], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_254()//Position - 0xF46F
{
	struct<3> Var0;
	float fVar1;
	Var0 = { 190.2424f, -956.479f, 29.08f };
	fVar1 = 12f;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Var0, fVar1, 1))
		{
			__LIB_0__::func_91();
		}
	}
}

void func_256(int iParam0)//Position - 0xF4D0
{
	if (__LIB_0__::func_121(iParam0->f_28[0]))
	{
		PED::SET_PED_RESET_FLAG(iParam0->f_28[0], 64, true);
		PED::SET_PED_RESET_FLAG(iParam0->f_28[0], 249, true);
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iParam0->f_28[0], true), 5.1f))
		{
			func_257(iParam0);
			if (__LIB_0__::func_121(iParam0->f_28[0]))
			{
				PED::APPLY_DAMAGE_TO_PED(iParam0->f_28[0], 1000, true, 0);
			}
		}
	}
}

void func_257(var uParam0)//Position - 0xF53F
{
	int iVar0;
	if (*uParam0 == 2 || *uParam0 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (__LIB_0__::func_121(uParam0->f_41[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[iVar0], false);
			}
			iVar0++;
		}
		if (__LIB_0__::func_121(uParam0->f_28[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], false);
			PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, true, true, false);
			TASK::TASK_SMART_FLEE_PED(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
		}
		__LIB_0__::func_123(&(uParam0->f_41[2]));
	}
}

int func_260(int iParam0)//Position - 0xF6A2
{
	switch (*iParam0)
	{
		case 2:
			if (!func_281(iParam0))
			{
				return 0;
			}
			break;
		case 3:
			if (!func_278(iParam0))
			{
				return 0;
			}
			break;
		case 4:
			if (!func_272(iParam0))
			{
				return 0;
			}
			break;
		case 5:
			if (!func_269(iParam0))
			{
				return 0;
			}
			break;
		case 6:
			if (!func_264(iParam0))
			{
				return 0;
			}
			break;
		case 7:
			if (!__LIB_37__::func_251(iParam0))
			{
				return 0;
			}
			break;
	}
	if (*iParam0 == 2)
	{
		func_262(&Local_57);
		func_261(&Local_57, "democ_only_works");
		func_261(&Local_57, "gift_from_god");
		func_261(&Local_57, "rigged_vote");
		func_261(&Local_57, "suck_my");
		func_261(&Local_57, "tyranny");
	}
	__LIB_0__::func_135("Created initial scene");
	return 1;
}

void func_261(var uParam0, char* sParam1)//Position - 0xF784
{
	if (uParam0->f_6 >= *uParam0)
	{
		return;
	}
	(*uParam0)[uParam0->f_6] = sParam1;
	uParam0->f_6++;
}

void func_262(var uParam0)//Position - 0xF7AD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_6 = 0;
	uParam0->f_7 = -1;
}

int func_264(var uParam0)//Position - 0xF805
{
	int iVar0[3];
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	Var1 = { -468.9f, -1713.06f, 18.21f };
	Var2 = { -426.56f, -1717.89f, 18.2f };
	Var3 = { -0.1f, -0.85f, 0.23f };
	Var4 = { 8f, 0.5f, 0f };
	fVar5 = -76.2f;
	fVar6 = 43.5f;
	iVar0[0] = joaat("emperor2");
	iVar0[1] = joaat("prop_weed_tub_01");
	iVar0[2] = joaat("towtruck");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -480.99292f, -1712.6495f, 17.452402f };
			uParam0->f_17[1 /*3*/] = { -443.61295f, -1705.8864f, 27.622137f };
			uParam0->f_24 = 31f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar7]);
				iVar7++;
			}
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar8 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[0], Var1, fVar5);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_ALARM(uParam0->f_35[0], false);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], true);
					VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_35[0], "WEED STASH VEHICLE");
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], false);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], false);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
					VEHICLE::SET_VEHICLE_UNDRIVEABLE(uParam0->f_35[0], true);
				}
				else
				{
					bVar8 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[1], Var1 + Var3, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_35[0], 0, Var3, Var4, false, false, false, false, 2, true, 0);
				}
				else
				{
					bVar8 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[1]), iVar0[2], Var2, fVar6);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[1], 39, 43);
			}
			if (bVar8)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar7]);
				iVar7++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_269(var uParam0)//Position - 0xFBC1
{
	int iVar0[4];
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	Var1 = { 1199.8f, -1259.22f, 34.23f };
	Var2 = { 0f, -1f, 0.64f };
	Var3 = { 1195.3f, -1312.74f, 34.75f };
	fVar4 = 174.7f;
	fVar5 = 282.4f;
	iVar0[0] = joaat("dloader");
	iVar0[1] = joaat("prop_weed_tub_01b");
	iVar0[2] = joaat("police4");
	iVar0[3] = joaat("A_M_Y_Business_01");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 1198.3666f, -1326.095f, 33.968296f };
			uParam0->f_17[1 /*3*/] = { 1202.2368f, -1235.3735f, 43.976414f };
			uParam0->f_24 = 31f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar6]);
				iVar6++;
			}
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar7 = true;
			__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[0], Var1, fVar4);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_ALARM(uParam0->f_35[0], false);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], true);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_35[0], "WEED STASH VEHICLE");
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], false);
				VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 3, true);
			}
			else
			{
				bVar7 = false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[1], Var1 + Var2, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_35[0], 0, Var2, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[1]), iVar0[2], Var3, fVar5);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				__LIB_17__::func_42(&(uParam0->f_28[0]), iVar0[3], Var3, fVar5, 6);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				__LIB_17__::func_42(&(uParam0->f_28[1]), iVar0[3], Var3, fVar5, 6);
			}
			if (bVar7)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_35[1]))
			{
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					PED::SET_PED_AS_COP(uParam0->f_28[0], true);
					PED::SET_PED_INTO_VEHICLE(uParam0->f_28[0], uParam0->f_35[1], -1);
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uParam0->f_28[0], joaat("WEAPON_PISTOL"), 100, true);
				}
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					PED::SET_PED_AS_COP(uParam0->f_28[1], true);
					PED::SET_PED_INTO_VEHICLE(uParam0->f_28[1], uParam0->f_35[1], 0);
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uParam0->f_28[1], joaat("WEAPON_PISTOL"), 100, true);
				}
			}
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar6]);
				iVar6++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_272(var uParam0)//Position - 0xFF73
{
	int iVar0[2];
	struct<3> Var1;
	float fVar2;
	int iVar3;
	bool bVar4;
	Var1 = { 417.78f, -765.71f, 29.39f };
	fVar2 = 87.3f;
	iVar0[0] = uLocal_52;
	iVar0[1] = joaat("p_cs_clipboard");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 415.45868f, -773.3615f, 27.854902f };
			uParam0->f_17[1 /*3*/] = { 415.52054f, -758.57153f, 31.344553f };
			uParam0->f_24 = 14.5f;
			StringCopy(&(uParam0->f_9), "BAR_5_RCM_P2", 24);
			uParam0->f_25 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			__LIB_14__::func_825(&(uParam0->f_48), "rcm_barry3", "bar_3_rcm_barry_standing_on_street_base", "bar_3_rcm_barry_standing_on_street_fidget");
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_267(&(uParam0->f_28[0]), 49, Var1, fVar2, "RC LAUNCHER: BARRY 3", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, false);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[1], Var1 + Vector(0f, 0f, 5f), -115.18f);
				if (__LIB_0__::func_121(uParam0->f_41[0]) && __LIB_0__::func_121(uParam0->f_28[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_278(var uParam0)//Position - 0x10302
{
	int iVar0[5];
	struct<3> Var1;
	float fVar2;
	int iVar3;
	bool bVar4;
	Var1 = { 190.2424f, -956.479f, 29.08f };
	fVar2 = 69.171f;
	iVar0[0] = uLocal_52;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("prop_protest_sign_01");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			StringCopy(&(uParam0->f_9), "BAR_3_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 190.03151f, -956.3355f, 29.091919f };
			uParam0->f_17[1 /*3*/] = { 178.04579f, -950.6594f, 31.093576f };
			uParam0->f_24 = 23f;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			__LIB_14__::func_825(&(uParam0->f_48), "rcm_barry2", "lead_in_loop", "lead_in_loop");
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_267(&(uParam0->f_28[0]), 49, Var1, fVar2, "RC LAUNCHER: BARRY 2", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, false);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				MISC::CLEAR_AREA_OF_OBJECTS(189.5964f, -956.0344f, 29.09179f, 2f, 0);
				__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[1], 189.5964f, -956.0344f, 29.09179f, __LIB_0__::func_503(-2.01f));
				if (__LIB_0__::func_121(uParam0->f_41[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
					__LIB_14__::func_807(&(uParam0->f_41[2]), iVar0[3], 189.79015f, -956.1675f, 29.8229f, __LIB_0__::func_503(-2.01f));
					if (__LIB_0__::func_121(uParam0->f_41[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], true);
					}
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[1]), iVar0[2], 190.417f, -956.511f, 29.09179f, -99.157f);
				if (__LIB_0__::func_121(uParam0->f_41[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], true);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], false, false);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], joaat("PLAYER"));
				ENTITY::SET_ENTITY_COORDS(uParam0->f_28[0], Var1, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], fVar2);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 9, 0f, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (__LIB_0__::func_121(uParam0->f_41[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
			}
			if (__LIB_0__::func_121(uParam0->f_41[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], true);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], true, false);
			}
			__LIB_31__::func_758(&(uParam0->f_41[3]), iVar0[4]);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_281(var uParam0)//Position - 0x106E0
{
	int iVar0[7];
	struct<3> Var1;
	float fVar2;
	int iVar3;
	bool bVar4;
	Var1 = { 190.2424f, -956.379f, 28.63f };
	fVar2 = __LIB_0__::func_503(1.12f);
	iVar0[0] = uLocal_52;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("p_cs_lighter_01");
	iVar0[5] = joaat("p_cs_joint_01");
	iVar0[6] = joaat("prop_protest_sign_01");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			StringCopy(&(uParam0->f_9), "BAR_1_RCM_P2", 24);
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 190.03151f, -956.3355f, 29.091919f };
			uParam0->f_17[1 /*3*/] = { 178.04579f, -950.6594f, 31.093576f };
			uParam0->f_24 = 23f;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			__LIB_14__::func_825(&(uParam0->f_48), "RCMBarryLeadInOut", "idle", "fidget");
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_267(&(uParam0->f_28[0]), 49, Var1, fVar2, "RC LAUNCHER: BARRY 1", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, false);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				MISC::CLEAR_AREA_OF_OBJECTS(189.5964f, -956.0344f, 29.09179f, 5f, 0);
				__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[1], 189.5964f, -956.0344f, 29.09179f, __LIB_0__::func_503(-2.01f));
				if (__LIB_0__::func_121(uParam0->f_41[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
					__LIB_14__::func_807(&(uParam0->f_41[2]), iVar0[3], 189.79015f, -956.1675f, 29.8229f, __LIB_0__::func_503(-2.01f));
					if (__LIB_0__::func_121(uParam0->f_41[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], true);
					}
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[1]), iVar0[2], 190.2574f, -956.3513f, 29.09179f, __LIB_0__::func_503(-1.68f));
				if (__LIB_0__::func_121(uParam0->f_41[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], true);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], false, false);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], joaat("PLAYER"));
				ENTITY::SET_ENTITY_COORDS(uParam0->f_28[0], Var1, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], fVar2);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 9, 0f, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (__LIB_0__::func_121(uParam0->f_41[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
			}
			if (__LIB_0__::func_121(uParam0->f_41[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], true);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], true, false);
			}
			__LIB_14__::func_807(&(uParam0->f_41[4]), iVar0[5], 189.895f, -955.945f, 29.818f, 0f);
			if (__LIB_0__::func_121(uParam0->f_41[4]))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[4], -90f, 0f, -30.8f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], true);
			}
			__LIB_14__::func_807(&(uParam0->f_41[3]), iVar0[4], 189.783f, -956.015f, 29.79f, 0f);
			if (__LIB_0__::func_121(uParam0->f_41[3]))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[3], -90f, 0f, 75f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], true);
			}
			__LIB_31__::func_758(&(uParam0->f_41[5]), iVar0[6]);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_283(int iParam0)//Position - 0x10B8F
{
	char* sVar0;
	if (Global_78319)
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085_FLOW_STRUCT_isGameflowActive && !__LIB_0__::func_2(1))
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_284(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_0__::func_432(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), sVar0))
			{
				__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_284(int iParam0)//Position - 0x10C48
{
	var uVar0;
	__LIB_0__::func_432(iParam0, &uVar0);
	if (!__LIB_0__::func_215(4))
	{
		if (__LIB_0__::func_781(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_767() && !__LIB_0__::func_766())
	{
		return 0;
	}
	if (__LIB_37__::func_254(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::func_775();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_774(iParam0))
	{
		if (!__LIB_37__::func_253(iParam0))
		{
			return 0;
		}
		if (!__LIB_37__::func_252(iParam0))
		{
			return 0;
		}
		if (__LIB_0__::func_720(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_285(5))
		{
			Global_112473[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112473[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_285(int iParam0)//Position - 0x10D09
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
			if (func_285(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_623(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0, struct<3> Param1, float fParam2)//Position - 0x10F40
{
	int iVar0[4];
	int iVar1;
	if (__LIB_14__::func_466() == 0)
	{
		if (__LIB_37__::func_263(2, Param1, fParam2, iParam0))
		{
			return 1;
		}
	}
	else if (__LIB_14__::func_466() == 2)
	{
		if (__LIB_37__::func_263(3, Param1, fParam2, iParam0))
		{
			return 1;
		}
	}
	iVar0[0] = 4;
	iVar0[1] = 5;
	iVar0[2] = 6;
	iVar0[3] = 7;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_37__::func_263(iVar0[iVar1], Param1, fParam2, iParam0))
		{
			iVar1 = iVar0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_295(int iParam0, bool bParam1)//Position - 0x110C4
{
	char* sVar0;
	if (bParam1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_257(iParam0);
		__LIB_14__::func_871(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_56))
	{
		HUD::REMOVE_BLIP(&iLocal_56);
	}
	if (iLocal_53 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_37__::func_5(&iLocal_53);
	}
	if (*iParam0 == 6)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_55, false);
	}
	__LIB_37__::func_293(&(iParam0->f_48));
	switch (*iParam0)
	{
		case 4:
			sVar0 = "BARRY3_AMB";
			break;
	}
	__LIB_37__::func_269(sVar0);
	if (bParam1)
	{
		__LIB_37__::func_266(*iParam0);
	}
	__LIB_37__::func_262();
	__LIB_0__::func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

