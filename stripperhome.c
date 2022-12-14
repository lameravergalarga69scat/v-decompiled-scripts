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
	int iLocal_45 = 0;
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
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74[1] = { 0 };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
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
	int* iLocal_243 = NULL;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int* iLocal_246 = NULL;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int* iLocal_249 = NULL;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int* iLocal_252 = NULL;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int* iLocal_255 = NULL;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int* iLocal_258 = NULL;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int* iLocal_261 = NULL;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1097859072;
	var uLocal_267 = 1500;
	var uLocal_268 = 45;
	var uLocal_269 = 1103626240;
	var uLocal_270 = 5;
	int iLocal_271[1] = { 0 };
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278[1] = { 0 };
	int iLocal_279[4] = { 0, 0, 0, 0 };
	struct<9> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	struct<3> Local_285 = { 0, 0, 0 } ;
	struct<3> Local_286 = { 0, 0, 0 } ;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	struct<3> Local_290 = { 0, 0, 0 } ;
	struct<3> Local_291 = { 0, 0, 0 } ;
	struct<3> Local_292 = { 0, 0, 0 } ;
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<5> Local_308 = { 1, 0, 0, 0, 0 } ;
	var uLocal_309 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_63 = { 500f, 500f, 500f };
	fLocal_296 = -1f;
	iLocal_299 = -1;
	bLocal_303 = true;
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
	MISC::SET_MISSION_FLAG(true);
	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(75))
	{
		func_303();
	}
	bLocal_304 = ScriptParam_308.f_5;
	if (bLocal_304)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
		__LIB_0__::func_895(0, -1, 0);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	uLocal_74[0] = ScriptParam_308[0];
	Global_112411.f_1 = uLocal_74[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (func_297() && ScriptParam_308.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_268(&ScriptParam_308, bVar0) && iLocal_72 != 6) && iLocal_72 != 5) && (iLocal_72 != -1 || !__LIB_0__::func_703(uLocal_300, 1024)))
	{
		func_259(0);
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_39__::func_811(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_39__::func_811(1, 0));
	if (!bVar1)
	{
		iLocal_72 = 2;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_302 > 0)
		{
			__LIB_0__::func_646();
			iLocal_302 = (iLocal_302 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		}
		switch (iLocal_72)
		{
			case -1:
				func_255();
				break;
			case 0:
				func_215(1);
				break;
			case 1:
				func_108();
				break;
			case 2:
				func_215(0);
				break;
			case 3:
				func_90();
				break;
			case 4:
				func_38(bLocal_303);
				break;
			case 5:
				func_11();
				break;
			case 6:
				if (!__LIB_0__::func_702(&iLocal_258))
				{
					__LIB_3__::func_128(&iLocal_258);
				}
				else if (func_1(&iLocal_258, 7.5f))
				{
					func_303();
				}
				break;
		}
	}
}

int func_1(int* iParam0, float fParam1)//Position - 0x24B
{
	if (func_3(iParam0, fParam1))
	{
		__LIB_1__::func_12(iParam0);
		return 1;
	}
	return 0;
}

int func_3(int* iParam0, float fParam1)//Position - 0x27F
{
	if (__LIB_0__::func_702(iParam0))
	{
		if (__LIB_37__::func_602(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_11()//Position - 0x3A1
{
	if (!__LIB_0__::func_703(uLocal_300, 8192))
	{
		if (func_37())
		{
			func_26();
		}
		else
		{
			iLocal_72 = 6;
		}
	}
	if (__LIB_0__::func_703(uLocal_300, 16384))
	{
		if (func_12())
		{
			iLocal_72 = 6;
		}
	}
}

int func_12()//Position - 0x3DF
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
	{
		return 1;
	}
	if (__LIB_0__::func_703(uLocal_300, 8192))
	{
		PED::SET_PED_RESET_FLAG(iLocal_271[0], 60, true);
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_271[0], 96.8033f, -1287.5966f, 28.2688f, 5f, 5f, 2f, false, true, 1) || __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 96.8033f, -1287.5966f, 28.2688f, 1) > 100f)
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, true, 0f, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_279[0]))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_279[0]))
				{
					__LIB_14__::func_565(1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(iLocal_279[0], true);
				}
			}
			PED::DELETE_PED(&(iLocal_271[0]));
			return 1;
		}
	}
	return 0;
}

void func_26()//Position - 0x834
{
	int iVar0;
	func_29();
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, false, 0f, false);
	}
	__LIB_1__::func_330(&uLocal_300, 16384);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_271[0], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_271[0], 104, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 98.2041f, -1291.2522f, 28.2688f, 1f, -1, 0.25f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 107.6303f, -1304.7424f, 27.7688f, 1f, -1, 0.25f, 0, 40000f);
	TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_271[0], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	__LIB_1__::func_330(&uLocal_300, 8192);
}

void func_29()//Position - 0x942
{
	if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_271[0]) && __LIB_0__::func_494(1, 0, 1))
	{
		__LIB_14__::func_563(0, 0, 0);
		iLocal_279[0] = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.5734f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, true, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

int func_37()//Position - 0xC58
{
	if ((uLocal_74[0] == 8 || uLocal_74[0] == 9) || __LIB_0__::func_724(iLocal_271[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_38(bool bParam0)//Position - 0xCA4
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	func_65();
	if (bParam0)
	{
		Var0 = { Local_287 };
	}
	else
	{
		func_64(&Var0, &uVar1, 0);
	}
	func_61(Var0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
			{
				if (iLocal_305)
				{
					if (__LIB_0__::func_213(iVar2, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_58();
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_271[0], 0, 16777216);
						func_39();
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_305 = 1;
				}
			}
		}
	}
}

void func_39()//Position - 0xD5A
{
	func_57();
	__LIB_0__::func_716(295, 0, 0);
	func_40(0);
	func_303();
}

void func_40(bool bParam0)//Position - 0xD78
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	if (!__LIB_40__::func_0())
	{
		return;
	}
	if (!iLocal_67)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var1[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var1[1 /*6*/]), "City", 24);
	StringCopy(&(Var1[2 /*6*/]), "????", 24);
	if (__LIB_1__::func_317(200, &Var1, &Var0, 3, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, __LIB_0__::func_114(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(108, func_43(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(102, func_42(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(8, func_41(), 0f);
	}
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
}

int func_41()//Position - 0xE35
{
	return iLocal_65;
}

int func_42()//Position - 0xE3F
{
	return iLocal_66;
}

int func_43()//Position - 0xE49
{
	return iLocal_64;
}

void func_57()//Position - 0x168A
{
	iLocal_66++;
	iLocal_67 = 1;
}

void func_58()//Position - 0x169B
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_271[0], true);
		if (PED::IS_PED_IN_GROUP(iLocal_271[0]))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_271[0]);
		}
	}
}

void func_61(struct<3> Param0)//Position - 0x18A7
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iLocal_277))
	{
		HUD::REMOVE_BLIP(&iLocal_277);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_271[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_276))
				{
					iLocal_276 = __LIB_0__::func_488(Param0, 1);
				}
			}
		}
	}
}

void func_64(var uParam0, var uParam1, bool bParam2)//Position - 0x1970
{
	Local_290 = { Local_290 };
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { Local_289 };
				*uParam1 = fLocal_293;
			}
			Local_290 = { *uParam0 };
			break;
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.9908f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { Local_289 };
				*uParam1 = fLocal_293;
			}
			Local_290 = { *uParam0 };
			break;
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.4315f, 3776.8496f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { Local_289 };
				*uParam1 = fLocal_293;
			}
			Local_290 = { *uParam0 };
			break;
	}
}

void func_65()//Position - 0x1A85
{
	if (PED::IS_PED_INJURED(iLocal_271[0]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
		{
		}
		func_66(0);
	}
}

void func_66(int iParam0)//Position - 0x1ABE
{
	if ((uLocal_74[0] > -1 && uLocal_74[0] < 10) && iParam0 != 2)
	{
		func_88(uLocal_74[0], (__LIB_42__::func_804(uLocal_74[0]) / 2));
	}
	func_86();
	switch (iParam0)
	{
		case 0:
			func_84("SCLUB_HOME_D" /* GXT: ~r~~a~ died. */, uLocal_74[0]);
			func_88(uLocal_74[0], 0);
			__LIB_42__::func_803(uLocal_74[0], 1);
			iLocal_72 = 6;
			break;
		case 1:
			HUD::CLEAR_PRINTS();
			func_67("SCLUB_HOME_A" /* GXT: ~a~ was abandoned. */, uLocal_74[0], 0);
			iLocal_72 = 5;
			break;
		case 2:
			iLocal_72 = 5;
			break;
		case 4:
			func_84("SCLUB_HOME_D3" /* GXT: ~r~~a~ was scared. */, uLocal_74[0]);
			iLocal_72 = 6;
			break;
		case 3:
			if (__LIB_0__::func_724(iLocal_271[0], 92.5861f, -1282.8604f, 28.2548f, 1) < 10f)
			{
				iLocal_72 = 5;
			}
			else
			{
				iLocal_72 = 6;
			}
			break;
	}
}

void func_67(char* sParam0, int iParam1, bool bParam2)//Position - 0x1BA7
{
	char* sVar0;
	MemCopy(&sVar0, {__LIB_39__::func_832(iParam1)}, 6);
	if (!__LIB_3__::func_56(sParam0, &sVar0))
	{
		if (!bParam2)
		{
			__LIB_8__::func_159(sParam0, &sVar0, -1);
		}
		else
		{
			__LIB_13__::func_28(sParam0, &sVar0);
		}
	}
}

void func_84(char* sParam0, int iParam1)//Position - 0x1F15
{
	char* sVar0;
	MemCopy(&sVar0, {__LIB_39__::func_832(iParam1)}, 6);
	__LIB_0__::func_578(sParam0, &sVar0, 7500, 1);
}

void func_86()//Position - 0x1F53
{
	if (HUD::DOES_BLIP_EXIST(iLocal_277))
	{
		HUD::REMOVE_BLIP(&iLocal_277);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_276))
	{
		HUD::REMOVE_BLIP(&iLocal_276);
	}
	func_87();
}

void func_87()//Position - 0x1F81
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_278[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_278[iVar0]));
		}
		iVar0++;
	}
}

void func_88(int iParam0, int iParam1)//Position - 0x1FB4
{
	Global_113386.f_243[__LIB_39__::func_393() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

void func_90()//Position - 0x1FEA
{
	func_65();
	func_86();
	switch (iLocal_77)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], false))
				{
					if (!__LIB_0__::func_1("SCLUB_SECLUDED"))
					{
						__LIB_0__::func_190("SCLUB_SECLUDED");
					}
					if (func_105() && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) == 0f)
					{
						HUD::CLEAR_HELP(true);
						STREAMING::REQUEST_ANIM_DICT(__LIB_42__::func_805(iLocal_271[0], 0, 0));
						iLocal_77 = 1;
					}
				}
			}
			break;
		case 1:
			if (func_93())
			{
				iLocal_77 = 2;
			}
			break;
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
			{
				__LIB_0__::func_646();
				if (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 4)
				{
					bLocal_303 = false;
				}
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_45);
				func_91(bLocal_303);
				iLocal_72 = 4;
			}
			break;
	}
}

void func_91(bool bParam0)//Position - 0x20BF
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_GO" /* GXT: Take ~a~ ~y~home.~s~ */, uLocal_74[0]);
			}
			else
			{
				__LIB_0__::func_229("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		case 8:
		case 9:
			__LIB_0__::func_229("SCLUB_HOME_GO3" /* GXT: Take her ~y~home. */, 7500, 1);
			break;
	}
}

int func_93()//Position - 0x2156
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_42__::func_805(iLocal_271[0], 0, 0)))
	{
		func_94(iLocal_271[0], 0, 1, -1, 1);
		func_94(PLAYER::PLAYER_PED_ID(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_94(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x2190
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return;
	}
	iLocal_45 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && __LIB_38__::func_895(0, 1))
	{
		if (iLocal_45 != 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
		}
	}
	bVar1 = __LIB_40__::func_22(iVar0);
	sVar2 = __LIB_42__::func_805(iParam0, 0, 0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar2);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_PLAY_ANIM(0, sVar2, __LIB_40__::func_29(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, __LIB_40__::func_29(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, __LIB_40__::func_29(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, __LIB_40__::func_29(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, __LIB_40__::func_29(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar3);
		if (bParam4)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
}

int func_105()//Position - 0x2B31
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	fVar4 = 25f;
	func_64(&Var5, &uVar6, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var3, &Var7, 3f, 0f))
		{
			fVar8 = SYSTEM::VDIST(Var3, Var7);
			if (fVar8 <= 10f)
			{
				return 0;
			}
		}
		if (SYSTEM::VDIST(Var3, Local_287) < 20f || SYSTEM::VDIST(Var3, Var5) < 20f)
		{
			return 0;
		}
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		PED::GET_CLOSEST_PED(Var3, fVar4, true, true, &iVar0, false, false, -1);
		if (!iVar0 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Var3, fVar4, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
					{
						iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar9 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (!iVar9 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_108()//Position - 0x2CCC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iLocal_73 < 12 && iLocal_73 >= 2)
	{
		if (__LIB_0__::func_645(3000))
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			iLocal_73 = 12;
		}
	}
	if (!bLocal_69 && iLocal_73 >= 5)
	{
		iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blimp2"))
			{
				bLocal_69 = false;
			}
			else if (VEHICLE::IS_BIG_VEHICLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) && uLocal_74[0] == 5)
			{
				bLocal_69 = func_210(&uLocal_68, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_209(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
			{
				bLocal_69 = func_210(&uLocal_68, Local_292, 1, fLocal_294);
			}
			else
			{
				bLocal_69 = func_210(&uLocal_68, Local_287, 1, fLocal_294);
			}
		}
	}
	if (iLocal_73 > 0 && iLocal_73 < 13)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	switch (iLocal_73)
	{
		case 0:
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			func_86();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1);
			__LIB_14__::func_563(56, 1, 0);
			if (!__LIB_0__::func_703(uLocal_300, 131072))
			{
				__LIB_1__::func_330(&uLocal_300, 131072);
			}
			if (!__LIB_0__::func_703(uLocal_300, 256))
			{
				func_208();
				__LIB_1__::func_330(&uLocal_300, 256);
			}
			if (!__LIB_0__::func_703(uLocal_300, 32768))
			{
				STREAMING::REQUEST_ANIM_DICT(func_207());
				__LIB_1__::func_330(&uLocal_300, 32768);
			}
			if (!__LIB_0__::func_703(uLocal_300, 256))
			{
				STREAMING::REQUEST_ANIM_DICT(func_206());
				__LIB_1__::func_330(&uLocal_300, 256);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_307 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_205(PLAYER::PLAYER_PED_ID(), iLocal_307);
				iLocal_73 = 1;
			}
			else
			{
				func_58();
				func_203(PLAYER::PLAYER_PED_ID(), Local_285);
				func_203(iLocal_271[0], Local_286);
				iLocal_73 = 2;
			}
			func_201();
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_307, true), Local_287) < 2f)
				{
					func_58();
					func_203(PLAYER::PLAYER_PED_ID(), Local_285);
					func_203(iLocal_271[0], Local_286);
					STREAMING::NEW_LOAD_SCENE_STOP();
					iLocal_73 = 2;
				}
				else if (MISC::GET_GAME_TIMER() >= 10000)
				{
					iLocal_73 = 13;
				}
			}
			break;
		case 2:
			if (!CAM::IS_CAM_RENDERING(iLocal_279[0]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_279[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_307, false, false);
					}
				}
				__LIB_1__::func_31(&iLocal_252);
				iLocal_73 = 3;
			}
			break;
		case 3:
			if (__LIB_38__::func_425(&iLocal_252) > 1f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_279[1], iLocal_279[0], 6000, 1, 1);
				func_199(&Local_280, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = CLOCK::GET_CLOCK_HOURS();
				iLocal_297 = iVar1 + 8;
				if (iLocal_297 > 23)
				{
					iLocal_297 = (iLocal_297 - 24);
				}
				Local_280.f_7 = iVar1;
				Local_280.f_8 = iLocal_297;
				__LIB_1__::func_12(&iLocal_252);
				iLocal_73 = 4;
			}
			break;
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_279[1]) && CAM::IS_CAM_RENDERING(iLocal_279[1]))
			{
				if (!__LIB_0__::func_703(uLocal_298, 512))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_307) && !ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_307, true);
					}
					__LIB_14__::func_808(PLAYER::PLAYER_PED_ID(), func_198());
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_195());
					func_172();
					__LIB_1__::func_330(&uLocal_298, 512);
				}
				else if (!__LIB_0__::func_703(uLocal_298, 2048))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
					{
					}
					if (!__LIB_0__::func_75() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_271[0]))
					{
						func_172();
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						__LIB_1__::func_330(&uLocal_298, 2048);
						__LIB_1__::func_31(&iLocal_252);
						sLocal_273 = func_170();
						iLocal_73 = 5;
					}
				}
			}
			break;
		case 5:
			if (__LIB_38__::func_425(&iLocal_252) > 1f)
			{
				if (func_145(iLocal_297, 0, sLocal_273, "", &Local_280, (__LIB_38__::func_425(&iLocal_252) * 0.2f), 0))
				{
					if (!__LIB_0__::func_75())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_307))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_307) != joaat("blimp2"))
							{
								MISC::CLEAR_AREA(Local_286, 20f, true, false, false, false);
							}
						}
						else
						{
							MISC::CLEAR_AREA(Local_286, 20f, true, false, false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_271[0], false, false);
						}
						TASK::SET_PED_PATH_AVOID_FIRE(PLAYER::PLAYER_PED_ID(), false);
						__LIB_1__::func_31(&iLocal_252);
						iLocal_73 = 6;
					}
				}
			}
			break;
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			if (__LIB_38__::func_425(&iLocal_252) > 1.5f)
			{
				if (bLocal_69)
				{
					__LIB_37__::func_661(&uLocal_68);
				}
				__LIB_1__::func_31(&iLocal_252);
				iLocal_73 = 7;
			}
			break;
		case 7:
			if (!CAM::IS_CAM_RENDERING(iLocal_279[2]))
			{
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_279[2], iLocal_279[1], 6000, 1, 1);
				__LIB_1__::func_31(&iLocal_252);
				iLocal_73 = 8;
			}
			break;
		case 8:
			if (!__LIB_0__::func_703(uLocal_300, 262144))
			{
				if (__LIB_38__::func_425(&iLocal_252) >= 1.25f)
				{
					func_142();
				}
			}
			if (__LIB_38__::func_425(&iLocal_252) > 6f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_279[3], true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_307, true, false);
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_307, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_307, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_307, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_307);
				}
				__LIB_1__::func_31(&iLocal_252);
				iLocal_73 = 10;
			}
			break;
		case 10:
			if (__LIB_38__::func_425(&iLocal_252) > 2f)
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				iLocal_73 = 13;
			}
			break;
		case 12:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (!__LIB_0__::func_703(uLocal_300, 262144))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Local_289, fLocal_293, false, true, true);
					func_142();
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_307, true, false);
					}
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_307, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_307, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_307, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_307);
				}
				__LIB_1__::func_31(&iLocal_252);
				iLocal_73 = 13;
			}
			break;
		case 13:
			if (!CAM::IS_SCREEN_FADING_OUT() && __LIB_38__::func_425(&iLocal_252) >= 1f)
			{
				__LIB_14__::func_565(1, 1, 0);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
				PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 30, true, 0);
				if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), __LIB_0__::func_154(0)))
				{
					__LIB_39__::func_67();
				}
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), 15f, 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_307, true, true);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) != joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_307, Local_287, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_307, fLocal_294);
						if (VEHICLE::IS_BIG_VEHICLE(iLocal_307) && uLocal_74[0] == 5)
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_307, -865f, 516.3f, 90f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_307, 15f);
						}
						else if (func_209(iLocal_307))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_307, Local_292, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_307, fLocal_295);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_307, 5f);
					}
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					func_199(&Local_280, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					CLOCK::ADD_TO_CLOCK_TIME(8, 0, 0);
					__LIB_42__::func_821(SYSTEM::TO_FLOAT(8));
					CAM::DO_SCREEN_FADE_IN(2000);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_199(&Local_280, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
				{
					PED::DELETE_PED(&(iLocal_271[0]));
				}
				if (!func_138(uLocal_74[0], -1))
				{
					if (uLocal_74[0] == 5)
					{
						func_67("SCLUB_PHON_HELP_ALT" /* GXT: ~a~' number has been added to your phone. */, uLocal_74[0], 0);
					}
					else
					{
						func_67("SCLUB_PHON_HELP" /* GXT: ~a~'s number has been added to your phone. */, uLocal_74[0], 0);
					}
					func_119(uLocal_74[0], 1, -1);
					SYSTEM::WAIT(4000);
				}
				__LIB_43__::func_611(uLocal_74[0]);
				iVar2 = __LIB_42__::func_806(uLocal_74[0]);
				if (iVar2 <= 2)
				{
					iVar3 = __LIB_40__::func_27(uLocal_74[0]);
					iVar4 = __LIB_40__::func_26(iVar2);
					__LIB_17__::func_268(joaat("TEXT_SEXT"), iVar3, iVar4, 3, __LIB_14__::func_792(), __LIB_39__::func_391(uLocal_74[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_39();
			}
			break;
	}
}

void func_119(int iParam0, bool bParam1, int iParam2)//Position - 0x39E6
{
	bool bVar0;
	int iVar1;
	if (iParam2 < 0)
	{
		iParam2 = __LIB_39__::func_393();
	}
	if (__LIB_39__::func_868(iParam2) == 4)
	{
	}
	bVar0 = Global_113386.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_136(__LIB_39__::func_391(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_136(__LIB_39__::func_391(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_113386.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			__LIB_40__::func_34(iParam0, 0);
			func_129(__LIB_39__::func_391(iParam0), __LIB_39__::func_868(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1273), iParam0);
					__LIB_1__::func_333(-60084924, 15, 0);
					break;
			}
			__LIB_39__::func_390(iVar1);
			__LIB_39__::func_389(iParam0, iVar1);
			Global_112380.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_120(__LIB_39__::func_391(iParam0), __LIB_39__::func_868(iParam2));
	}
}

void func_120(bool bParam0, int iParam1)//Position - 0x3B0F
{
	int iVar0;
	if (Global_117[bParam0 /*10*/].f_8 != 166)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			__LIB_0__::func_171(bParam0, iVar0, 0);
			__LIB_0__::func_170(bParam0, iVar0, 0);
		}
	}
}

void func_129(bool bParam0, int iParam1, bool bParam2)//Position - 0x3D37
{
	int iVar0;
	Global_8822 = bParam0;
	if (Global_117[bParam0 /*10*/].f_8 != 166)
	{
		__LIB_0__::func_698();
		if (iParam1 == 4)
		{
			__LIB_0__::func_171(bParam0, 0, 1);
			__LIB_0__::func_171(bParam0, 1, 1);
			__LIB_0__::func_171(bParam0, 2, 1);
			__LIB_0__::func_170(bParam0, 0, 1);
			__LIB_0__::func_170(bParam0, 1, 1);
			__LIB_0__::func_170(bParam0, 2, 1);
		}
		else
		{
			if (__LIB_0__::func_169(bParam0, iParam1) == 1 && __LIB_0__::func_168(bParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			__LIB_0__::func_171(bParam0, iVar0, 1);
			__LIB_0__::func_170(bParam0, iVar0, 1);
			if (bParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (bParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (bParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { __LIB_0__::func_167(bParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = bParam0;
					}
					else if (bParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { __LIB_0__::func_167(bParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						__LIB_0__::func_166();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { __LIB_0__::func_167(bParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					__LIB_0__::func_166();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { __LIB_0__::func_167(bParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				__LIB_0__::func_166();
			}
		}
	}
}

int func_136(bool bParam0, int iParam1)//Position - 0x4051
{
	if (__LIB_0__::func_169(bParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

bool func_138(int iParam0, int iParam1)//Position - 0x40C9
{
	if (iParam1 < 0)
	{
		iParam1 = __LIB_39__::func_393();
	}
	return Global_113386.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_142()//Position - 0x41E4
{
	int iVar0;
	int iVar1;
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_272))
	{
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 50000);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_289, 1f, -1, 0.25f, 0, fLocal_293);
		if (iVar0 < 15000)
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_272, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_272, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		else
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_272, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		__LIB_1__::func_330(&uLocal_300, 262144);
	}
}

int func_145(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)//Position - 0x4334
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = __LIB_40__::func_30();
			iVar4 = __LIB_40__::func_30();
			__LIB_17__::func_863(&iVar4, iParam0);
			__LIB_17__::func_864(&iVar4, iParam1);
			__LIB_17__::func_865(&iVar4, 0);
			if (__LIB_11__::func_761(*uParam4, iVar4))
			{
				__LIB_42__::func_808(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			__LIB_13__::func_826(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			__LIB_42__::func_821((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
			__LIB_13__::func_811();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			__LIB_13__::func_788();
			uParam4->f_3++;
			break;
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (MISC::GET_HASH_KEY(sParam2) != 0)
					{
						MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, 1f);
					}
					if (MISC::GET_HASH_KEY(sParam3) != 0)
					{
						MISC::UNLOAD_ALL_CLOUD_HATS();
						MISC::LOAD_CLOUD_HAT(sParam3, 0f);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				__LIB_42__::func_808(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_199(iVar4), __LIB_0__::func_198(iVar4), __LIB_0__::func_615(iVar4));
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = __LIB_0__::func_331(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			__LIB_42__::func_808(&iVar4, iVar3, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(__LIB_0__::func_199(iVar4), __LIB_0__::func_198(iVar4), __LIB_0__::func_615(iVar4));
			if (__LIB_0__::func_614(iVar4) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(__LIB_0__::func_614(iVar4), __LIB_0__::func_553(iVar4), __LIB_0__::func_214(iVar4));
			}
			__LIB_0__::func_646();
			GRAPHICS::RESET_ADAPTATION(6);
			break;
	}
	return 0;
}

char* func_170()//Position - 0x4EEC
{
	char* sVar0;
	switch (uLocal_74[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		case 1:
			sVar0 = "OVERCAST";
			break;
		case 4:
			sVar0 = "CLOUDS";
			break;
		case 5:
			sVar0 = "CLEAR";
			break;
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		case 9:
			sVar0 = "RAIN";
			break;
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

void func_172()//Position - 0x4F85
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
	{
		if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
		{
			__LIB_0__::func_222(&uLocal_78, 1, 0, __LIB_15__::func_280(uLocal_74[0]), 0, 1);
			func_175("SC_SEX", 0, 0, 0);
		}
		else
		{
			__LIB_0__::func_640(iLocal_271[0], "SEX_ORAL", 10);
		}
	}
}

int func_175(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x51F3
{
	struct<6> Var0;
	char[] cVar1[8];
	if (func_192())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_191(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_190(Var0) };
		}
		if (bParam3)
		{
			cVar1 = "SCAUD";
		}
		else
		{
			cVar1 = "SHAUD";
		}
		if (__LIB_2__::func_859(&uLocal_78, cVar1, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_190(char[24] cParam0)//Position - 0x58D0
{
	int iVar0;
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_74[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_191(char* sParam0, bool bParam1)//Position - 0x58F1
{
	StringConCat(sParam0, "_", 24);
	if (__LIB_0__::func_683() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (__LIB_0__::func_683() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (__LIB_0__::func_683() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_190(*sParam0) };
	}
}

int func_192()//Position - 0x5948
{
	if ((HUD::IS_MESSAGE_BEING_DISPLAYED() || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) || Global_21605 != 0)
	{
		return 0;
	}
	return 1;
}

float func_195()//Position - 0x5ABF
{
	switch (uLocal_74[0])
	{
		case 1:
			return 325.6f;
			break;
		case 0:
			return 52.89f;
			break;
		case 4:
			return 14.5f;
			break;
		case 5:
			return 43.85f;
			break;
		case 8:
			return 193.5f;
			break;
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_198()//Position - 0x5B9C
{
	switch (uLocal_74[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		case 0:
			return -162.4315f, -1635.1072f, 32.6529f;
			break;
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		case 8:
			return -28.5266f, -1565.7926f, 28.918f;
			break;
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5C53
{
	int iVar0;
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(true);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			}
			CAM::DESTROY_CAM(uParam0->f_4, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	__LIB_0__::func_532(bParam1, 1, 0, 0, 0, 0, 0);
	__LIB_13__::func_788();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113386.f_32749.f_4801 != -15)
		{
			Global_113386.f_32749.f_4801 = __LIB_40__::func_30();
		}
	}
}

void func_201()//Position - 0x5E00
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var2[4];
	var uVar3[4];
	func_202(&Var1, &Var2, &uVar3);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_279[iVar0]))
		{
			iLocal_279[iVar0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var1[iVar0 /*3*/], Var2[iVar0 /*3*/], uVar3[iVar0], false, 2);
			CAM::SHAKE_CAM(iLocal_279[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_280.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
	CAM::ADD_CAM_SPLINE_NODE(Local_280.f_4, Var1[0 /*3*/], Var2[0 /*3*/], 6000, 3, 2);
	CAM::ADD_CAM_SPLINE_NODE(Local_280.f_4, Var1[1 /*3*/], Var2[1 /*3*/], 6000, 3, 2);
	CAM::SET_CAM_FOV(Local_280.f_4, uVar3[0]);
}

void func_202(var uParam0, var uParam1, var uParam2)//Position - 0x5ED2
{
	switch (uLocal_74[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.5271f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.18987f, -1885.8654f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.13081f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.2922f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.3278f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.5049f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.1932f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.67564f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.2499f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.23572f, 106.94099f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.97023f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.61206f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.906235f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.6459f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.6459f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.639044f, -1579.7404f, 30.824232f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.330508f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.0903f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.6306f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.9038f, 5157.8184f, 20.579899f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.448088f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.3682f, 5171.7715f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_203(int iParam0, struct<3> Param1)//Position - 0x6406
{
	float fVar0;
	float fVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(iParam0, true);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_306);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_306);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16777216);
			}
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), Local_285);
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), Local_286);
				if (fVar1 < fVar0)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_271[0], 0);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_204(), 0, 552, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_285, 1f, -1, 0.25f, 64, 40000f);
				}
			}
			if (iParam0 != PLAYER::PLAYER_PED_ID())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_204(), 0, 546, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, 1f, -1, 0.25f, 1, 40000f);
				}
				if (__LIB_0__::func_724(iParam0, Param1, 1) > 5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0f, false, false, false);
				}
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_306);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_306);
		}
	}
}

char* func_204()//Position - 0x65D4
{
	char* sVar0;
	if (uLocal_74[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_205(int iParam0, int iParam1)//Position - 0x65ED
{
	if (!PED::IS_PED_INJURED(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		TASK::TASK_VEHICLE_PARK(iParam0, iParam1, Local_287, fLocal_294, 3, 10f, false);
	}
}

char* func_206()//Position - 0x6623
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_207()//Position - 0x662F
{
	if (__LIB_0__::func_683() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (__LIB_0__::func_683() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (__LIB_0__::func_683() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_208()//Position - 0x666E
{
	sLocal_272 = "move_p_m_one_idles@generic";
	STREAMING::REQUEST_ANIM_DICT(sLocal_272);
}

int func_209(int iParam0)//Position - 0x6684
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_210(var uParam0, struct<3> Param1, bool bParam2, float fParam3)//Position - 0x6771
{
	if (func_212(uParam0))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(*uParam0);
		if (!__LIB_0__::func_86(Param1))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, Param1, true, false, false, true);
			if (bParam2)
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
		}
		return 1;
	}
	return 0;
}

int func_212(var uParam0)//Position - 0x67EE
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!__LIB_2__::func_836(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_63, false, true, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

void func_215(bool bParam0)//Position - 0x68DC
{
	struct<4> Var0;
	float fVar1;
	func_65();
	if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
	{
		return;
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_287 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_287 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, true);
	fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_271[0], true));
	if (iLocal_75 != 9)
	{
		if (((fVar1 >= (200f / 2f) && func_192()) && !__LIB_0__::func_703(uLocal_300, 2)) || func_254(iLocal_271[0], 0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_277))
			{
				HUD::REMOVE_BLIP(&iLocal_277);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_276))
			{
				HUD::REMOVE_BLIP(&iLocal_276);
			}
			func_251(0);
			func_84("SCLUB_HOME_R" /* GXT: Return to ~b~~a~.~s~ */, uLocal_74[0]);
			iLocal_75 = 9;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_75 != 8)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_277))
			{
				HUD::REMOVE_BLIP(&iLocal_277);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_276))
			{
				HUD::REMOVE_BLIP(&iLocal_276);
			}
			iLocal_75 = 8;
		}
	}
	if (func_240(iLocal_271[0], &uLocal_264, &iLocal_261))
	{
		func_66(4);
	}
	if (iLocal_75 <= 1)
	{
		func_259(1);
	}
	switch (iLocal_75)
	{
		case 0:
			iLocal_76 = 0;
			if (func_192())
			{
				if (!__LIB_0__::func_703(uLocal_300, 1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_271[0], true);
					func_84("SCLUB_HOME_MEET" /* GXT: Meet ~b~~a~~s~ behind the club. */, uLocal_74[0]);
					func_251(0);
					__LIB_1__::func_330(&uLocal_300, 1);
				}
				iLocal_75 = 1;
			}
			break;
		case 1:
			iLocal_76 = 1;
			Var0 = { __LIB_39__::func_832(uLocal_74[0]) };
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_307 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				iLocal_301 = ENTITY::GET_ENTITY_HEALTH(iLocal_307);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_271[0], true), 3f, 3f, 3f, false, true, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_307, false) && __LIB_0__::func_76(iLocal_307, iLocal_271[0], 1) <= 10f))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_271[0], false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_307) && (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_307) < 1 || (!bParam0 && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_307)))))
				{
					if (!__LIB_3__::func_56("SCLUB_SMALL_CAR" /* GXT: Get a larger vehicle to take ~a~ home. */, &Var0))
					{
						func_67("SCLUB_SMALL_CAR" /* GXT: Get a larger vehicle to take ~a~ home. */, uLocal_74[0], 0);
						__LIB_0__::func_640(iLocal_271[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					HUD::CLEAR_HELP(true);
					TASK::CLEAR_PED_TASKS(iLocal_271[0]);
					func_237();
					if (!__LIB_0__::func_703(uLocal_300, 2))
					{
						__LIB_1__::func_330(&uLocal_300, 2);
					}
					func_236();
					func_86();
					__LIB_17__::func_911(39, 1);
					__LIB_17__::func_911(40, 1);
					__LIB_17__::func_911(41, 1);
					__LIB_17__::func_911(42, 1);
					__LIB_17__::func_911(43, 1);
					__LIB_17__::func_911(44, 1);
					iLocal_75 = 2;
				}
			}
			else if (__LIB_3__::func_56("SCLUB_SMALL_CAR" /* GXT: Get a larger vehicle to take ~a~ home. */, &Var0))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		case 2:
			iLocal_76 = 2;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], false))
				{
					iLocal_75 = 3;
				}
			}
			else
			{
				__LIB_0__::func_640(iLocal_271[0], "NEED_A_VEHICLE", 10);
				iLocal_75 = 3;
			}
			break;
		case 3:
			iLocal_76 = 3;
			func_226();
			if (!__LIB_0__::func_75())
			{
				if (func_192())
				{
					PATHFIND::SET_ROADS_IN_AREA(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), false, true);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), false, true);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_287, 10f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_287, 10f, 0);
					iLocal_284 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_287 - Vector(35f, 35f, 35f), Local_287 + Vector(35f, 35f, 35f), false, true, true, true);
					__LIB_1__::func_31(&iLocal_243);
					if (bParam0)
					{
						func_91(1);
						func_225();
					}
					else
					{
						iLocal_72 = 3;
					}
				}
			}
			break;
		case 4:
			iLocal_76 = 4;
			func_222(fVar1, Local_288);
			func_216();
			if ((__LIB_37__::func_602(&iLocal_255) > 45f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_291) > (100f * 100f)) && __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_288, 1) > 100f)
			{
				if (uLocal_74[0] == 8)
				{
					func_175("SC_WALK", 0, 0, 0);
				}
				else
				{
					__LIB_0__::func_640(iLocal_271[0], "GENERIC_FUCK_YOU", 10);
				}
				func_66(3);
			}
			else if (func_254(iLocal_271[0], 1))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_277))
				{
					HUD::REMOVE_BLIP(&iLocal_277);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_276))
				{
					HUD::REMOVE_BLIP(&iLocal_276);
				}
				func_251(0);
				func_84("SCLUB_HOME_R" /* GXT: Return to ~b~~a~.~s~ */, uLocal_74[0]);
				iLocal_75 = 9;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_287, 3f, 3f, 2f, true, true, 2) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_286, 5f, 5f, 2f, true, true, 1))
			{
				if (__LIB_0__::func_494(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			else if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				func_225();
			}
			break;
		case 5:
			iLocal_76 = 5;
			func_222(fVar1, Local_287);
			func_216();
			func_237();
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_287, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_75 = 6;
			}
			else
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_225();
				}
				else
				{
					func_61(Local_287);
				}
				if (__LIB_0__::func_1("SCLUB_HOME_WALK" /* GXT: Walk her to the door. */))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_58();
						func_203(iLocal_271[0], Local_286);
						if (uLocal_74[0] == 9 || uLocal_74[0] == 8)
						{
							func_175("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_175("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_75 = 7;
					}
				}
			}
			else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_271[0]);
				func_225();
				HUD::CLEAR_HELP(true);
			}
			break;
		case 7:
			iLocal_76 = 7;
			if ((!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !__LIB_0__::func_703(uLocal_300, 2048))
			{
				Var0 = { __LIB_39__::func_832(uLocal_74[0]) };
				__LIB_0__::func_578("SCLUB_FOLLOW_H" /* GXT: Follow ~b~~a~~s~ to her home. */, &Var0, 7500, 1);
				func_86();
				func_251(0);
				__LIB_1__::func_330(&uLocal_300, 2048);
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_288, 5f, 5f, 2f, false, true, 1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_286, 5f, 5f, 2f, false, true, 1)) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_494(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			break;
		case 8:
			if ((!__LIB_0__::func_703(uLocal_298, 4096) && !__LIB_0__::func_75()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_271[0]))
			{
				if (iLocal_76 > 1 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_271[0], true)) < (3f * 3f))
				{
					__LIB_0__::func_640(iLocal_271[0], "GENERIC_FRIGHTENED_MED", 10);
					__LIB_1__::func_330(&uLocal_298, 4096);
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_75 = iLocal_76;
			}
			break;
		case 9:
			if (fVar1 > 200f)
			{
				func_66(1);
			}
			else if (fVar1 <= (200f / 2f) && !func_254(iLocal_271[0], 1))
			{
				HUD::CLEAR_PRINTS();
				iLocal_75 = iLocal_76;
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_225();
				}
			}
			break;
	}
}

void func_216()//Position - 0x706F
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	if (!__LIB_0__::func_703(uLocal_300, 16))
	{
		if (func_217())
		{
			__LIB_1__::func_330(&uLocal_300, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = __LIB_42__::func_805(iLocal_271[0], 0, 0);
	if (!__LIB_0__::func_703(uLocal_300, 8))
	{
		if (!__LIB_0__::func_703(uLocal_300, 4))
		{
			if (!__LIB_0__::func_703(uLocal_298, 256))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					func_175("SC_BJ", 0, 0, 0);
				}
				__LIB_1__::func_330(&uLocal_298, 256);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(sVar0);
				__LIB_1__::func_330(&uLocal_300, 4);
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			func_94(iLocal_271[0], 1, 1, -1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_271[0], true);
			__LIB_3__::func_128(&iLocal_252);
			__LIB_1__::func_330(&uLocal_300, 8);
		}
	}
	else if (__LIB_0__::func_703(uLocal_300, 4))
	{
		iVar1 = 0;
		bVar2 = ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_271[0], sVar0, __LIB_40__::func_29(4, 1, 1, __LIB_40__::func_22(iLocal_307)), 3);
		bVar3 = PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID());
		bVar4 = TASK::GET_SCRIPT_TASK_STATUS(iLocal_271[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7;
		bVar5 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
		bVar6 = false;
		if (bVar5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				bVar6 = (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 5f);
			}
		}
		if ((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_37__::func_602(&iLocal_252) > 35f) || SYSTEM::VDIST(Local_287, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				TASK::TASK_PLAY_ANIM(iLocal_271[0], sVar0, __LIB_40__::func_29(4, 1, 1, __LIB_40__::func_22(iLocal_307)), 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (bVar3)
			{
				iLocal_302 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			__LIB_0__::func_646();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) - SYSTEM::CEIL((IntToFloat(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) * 0.1f))), 0);
					__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", 10);
				}
				__LIB_1__::func_330(&uLocal_298, 128);
			}
			STREAMING::REMOVE_ANIM_DICT(sVar0);
			__LIB_2__::func_712(&uLocal_300, 4);
		}
		if (!__LIB_0__::func_703(uLocal_298, 64))
		{
			if (__LIB_37__::func_602(&iLocal_252) > 10f)
			{
				__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", 10);
				__LIB_0__::func_640(iLocal_271[0], "SEX_ORAL", 10);
				__LIB_1__::func_330(&uLocal_298, 64);
			}
		}
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		__LIB_0__::func_646();
	}
}

int func_217()//Position - 0x735B
{
	struct<3> Var0;
	var uVar1;
	if (!func_192())
	{
		return 0;
	}
	func_64(&Var0, &uVar1, 0);
	if (((SYSTEM::VDIST(Local_287, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (75f * 2f) && SYSTEM::VDIST(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (75f / 2f)) && __LIB_42__::func_806(uLocal_74[0]) > 1) && func_218())
	{
		return 1;
	}
	return 0;
}

int func_218()//Position - 0x73D1
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (__LIB_40__::func_31(iVar1, 0) && __LIB_40__::func_28(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_222(float fParam0, struct<3> Param1)//Position - 0x7A9B
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (!__LIB_0__::func_703(uLocal_298, 262144))
	{
		if (func_224(iLocal_271[0]))
		{
			if (uLocal_74[0] == 8)
			{
				func_175("SC_STEALC", 0, 0, 0);
			}
			else
			{
				__LIB_0__::func_640(iLocal_271[0], "GENERIC_SHOCKED_MED", 10);
			}
			__LIB_1__::func_31(&iLocal_246);
			__LIB_1__::func_330(&uLocal_298, 262144);
		}
	}
	else if (__LIB_37__::func_602(&iLocal_246) > 10f)
	{
		__LIB_2__::func_712(&uLocal_298, 262144);
		__LIB_1__::func_31(&iLocal_246);
	}
	if ((fParam0 > 5f || !func_192()) || __LIB_0__::func_703(uLocal_300, 4))
	{
		return;
	}
	if (!__LIB_0__::func_703(uLocal_298, 1) && !__LIB_0__::func_703(uLocal_298, 128))
	{
		if (SYSTEM::VDIST(Param1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f)
		{
			if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
			{
				if (func_175("SC_NEAR", 0, 0, 0))
				{
					__LIB_1__::func_330(&uLocal_298, 1);
				}
			}
			else
			{
				__LIB_1__::func_330(&uLocal_298, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(Local_287, 5f, false, false, false, false, false, false, 0);
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (!__LIB_0__::func_703(uLocal_298, 16))
		{
			__LIB_0__::func_640(iLocal_271[0], "NEED_A_VEHICLE", 10);
			__LIB_1__::func_330(&uLocal_298, 16);
			__LIB_1__::func_31(&iLocal_243);
		}
		if (!__LIB_0__::func_703(uLocal_298, 4))
		{
			__LIB_2__::func_712(&uLocal_298, 4);
		}
		if (!__LIB_0__::func_703(uLocal_298, 8))
		{
			__LIB_2__::func_712(&uLocal_298, 8);
		}
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		fVar2 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			__LIB_1__::func_31(&iLocal_249);
		}
		if (!__LIB_0__::func_703(uLocal_298, 4))
		{
			if (__LIB_37__::func_602(&iLocal_243) > 15f && __LIB_37__::func_602(&iLocal_249) > 5f)
			{
				__LIB_0__::func_640(iLocal_271[0], "DRIVEN_FAST", 10);
				__LIB_1__::func_330(&uLocal_298, 4);
				__LIB_1__::func_31(&iLocal_243);
			}
		}
		else if (__LIB_37__::func_602(&iLocal_243) < 5f)
		{
			__LIB_2__::func_712(&uLocal_298, 4);
			__LIB_1__::func_31(&iLocal_243);
		}
		if (!__LIB_0__::func_703(uLocal_298, 8))
		{
			if (__LIB_37__::func_602(&iLocal_243) > 15f && __LIB_37__::func_602(&iLocal_249) > 5f)
			{
				__LIB_0__::func_640(iLocal_271[0], "DRIVEN_SLOW", 10);
				__LIB_1__::func_330(&uLocal_298, 4);
				__LIB_1__::func_31(&iLocal_243);
			}
		}
		else if (__LIB_37__::func_602(&iLocal_243) < 5f)
		{
			__LIB_2__::func_712(&uLocal_298, 8);
			__LIB_1__::func_31(&iLocal_243);
		}
		if (!__LIB_0__::func_703(uLocal_298, 131072))
		{
			if (func_223(iLocal_271[0], &iLocal_301))
			{
				if (__LIB_37__::func_602(&iLocal_246) > 5f)
				{
					__LIB_0__::func_640(iLocal_271[0], "CRASH_GENERIC_DRIVEN", 10);
					__LIB_1__::func_330(&uLocal_298, 131072);
					__LIB_1__::func_31(&iLocal_243);
				}
			}
		}
		else if (__LIB_37__::func_602(&iLocal_246) > 5f)
		{
			__LIB_2__::func_712(&uLocal_298, 131072);
			__LIB_1__::func_31(&iLocal_246);
		}
		if (!__LIB_0__::func_703(uLocal_298, 65536))
		{
			if (__LIB_37__::func_602(&iLocal_243) > 30f || (__LIB_37__::func_602(&iLocal_243) > 10f && !__LIB_0__::func_703(uLocal_298, 32)))
			{
				__LIB_0__::func_640(iLocal_271[0], "BOOTY_FLIRT", 10);
				__LIB_1__::func_330(&uLocal_298, 32);
				__LIB_1__::func_330(&uLocal_298, 524288);
				__LIB_1__::func_31(&iLocal_243);
			}
			else if (__LIB_0__::func_703(uLocal_298, 524288))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_271[0]) && __LIB_37__::func_602(&iLocal_243) > 4f)
				{
					__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "BOOTY_FLIRT_RESP", 10);
					__LIB_2__::func_712(&uLocal_298, 524288);
				}
			}
		}
	}
}

int func_223(int iParam0, int iParam1)//Position - 0x7E51
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iVar0))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0))
			{
				iVar1 = ENTITY::GET_ENTITY_HEALTH(iVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224(int iParam0)//Position - 0x7EA9
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(110 /*EVENT_SHOCKING_SEEN_CAR_STOLEN*/, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_225()//Position - 0x7EE7
{
	func_87();
	__LIB_1__::func_31(&iLocal_243);
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_276))
		{
			HUD::REMOVE_BLIP(&iLocal_276);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_277))
		{
			iLocal_277 = __LIB_0__::func_488(Local_288, 0);
		}
		__LIB_1__::func_31(&iLocal_255);
		Local_291 = { ENTITY::GET_ENTITY_COORDS(iLocal_271[0], true) };
		iLocal_75 = 4;
	}
	else
	{
		__LIB_1__::func_31(&iLocal_246);
		func_61(Local_287);
		iLocal_75 = 5;
	}
}

void func_226()//Position - 0x7F5C
{
	if (!__LIB_0__::func_703(uLocal_298, 1024))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_227(uLocal_74[0]))
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_640(iLocal_271[0], "NICE_CAR", 10);
					__LIB_1__::func_330(&uLocal_298, 1024);
				}
			}
		}
	}
}

int func_227(int iParam0)//Position - 0x7FBB
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_228(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_228(int iParam0, int iParam1)//Position - 0x7FF0
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_236()//Position - 0x87CC
{
	if (uLocal_74[0] == 8)
	{
		func_175("SC_GREET", 0, 0, 0);
	}
	else
	{
		__LIB_0__::func_640(iLocal_271[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_237()//Position - 0x87FD
{
	if (!PED::IS_PED_IN_GROUP(iLocal_271[0]) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_271[0], true)) < 10f)
	{
		PED::SET_PED_AS_GROUP_MEMBER(iLocal_271[0], __LIB_0__::func_495());
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_271[0], 0);
	}
}

int func_240(int iParam0, var uParam1, int* iParam2)//Position - 0x88BD
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_702(iParam2))
	{
		__LIB_3__::func_128(iParam2);
	}
	if (__LIB_37__::func_602(iParam2) > 3f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		if (func_243(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_241(&uVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
				{
					if (!PED::DOES_RELATIONSHIP_GROUP_EXIST(iLocal_70))
					{
						PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_70);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_70);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_70);
					TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
			}
			__LIB_1__::func_31(iParam2);
			return 1;
		}
	}
	return 0;
}

void func_241(var uParam0)//Position - 0x8977
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			__LIB_42__::func_809(1);
			break;
		case 2:
			break;
	}
}

int func_243(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x89CF
{
	int iVar0;
	bool bVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!__LIB_0__::func_703(*uParam2, 1))
		{
			if (__LIB_14__::func_574(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 4))
		{
			if (__LIB_14__::func_585(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 8))
		{
			if (__LIB_14__::func_537(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !__LIB_0__::func_703(*uParam2, 128);
		if (bParam4)
		{
			if (func_244(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!__LIB_0__::func_703(*uParam2, 16))
		{
			if (func_244(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8AF9
{
	int iVar0;
	int iVar1;
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (__LIB_14__::func_536(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && __LIB_14__::func_556(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_251(int iParam0)//Position - 0x9048
{
	struct<4> Var0;
	if (HUD::DOES_BLIP_EXIST(uLocal_278[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_278[iParam0]));
	}
	uLocal_278[iParam0] = __LIB_0__::func_666(iLocal_271[iParam0], 0, 145);
	Var0 = { __LIB_39__::func_832(uLocal_74[iParam0]) };
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_278[iParam0], &Var0);
}

int func_254(int iParam0, int iParam1)//Position - 0x9187
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PED::GET_PED_GROUP_INDEX(iParam0) == __LIB_0__::func_495())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(iParam0, iVar2, false) && SYSTEM::VDIST(Var0, Var1) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && __LIB_0__::func_703(uLocal_300, 2))
	{
		fVar3 = MISC::ABSF((Var0.f_2 - Var1.f_2));
		if (fVar3 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_255()//Position - 0x922E
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			__LIB_14__::func_808(iLocal_271[0], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0f, 2f, 0f));
			iLocal_72 = 1;
			iLocal_73 = 0;
		}
	}
}

void func_259(bool bParam0)//Position - 0x92E4
{
	struct<8> Var0;
	if (!__LIB_3__::func_423(iLocal_71))
	{
		iLocal_71 = __LIB_40__::func_30();
		__LIB_42__::func_808(&iLocal_71, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!__LIB_0__::func_703(uLocal_300, 512))
		{
			if (__LIB_42__::func_810(iLocal_71) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_271[0]))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_74[0], 64);
					__LIB_0__::func_222(&uLocal_78, 1, 0, __LIB_15__::func_280(uLocal_74[0]), 0, 1);
					func_265(&uLocal_78, __LIB_39__::func_391(uLocal_74[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_263();
				}
				func_262(iLocal_271[0]);
				__LIB_1__::func_330(&uLocal_300, 512);
			}
		}
		else if (__LIB_1__::func_859())
		{
			__LIB_2__::func_712(&uLocal_300, 512);
		}
		else if ((!__LIB_0__::func_75() && __LIB_14__::func_521()) && !__LIB_1__::func_859())
		{
			__LIB_42__::func_809(1);
			func_66(2);
		}
	}
}

void func_262(int iParam0)//Position - 0x9423
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(iParam0, true);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_306);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_306);
			TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_286, 1.5f, -1, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_306);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_306);
		}
	}
}

void func_263()//Position - 0x948C
{
	int iVar0;
	if (__LIB_16__::func_610())
	{
		return;
	}
	iVar0 = __LIB_40__::func_27(uLocal_74[0]);
	__LIB_17__::func_268(joaat("TEXT_SEXT"), iVar0, 6, 3, __LIB_14__::func_792(), __LIB_39__::func_391(uLocal_74[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_265(var uParam0, bool bParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x94E2
{
	__LIB_0__::func_487(uParam0, bParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 1;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return __LIB_0__::func_711(sParam3, iParam4, bParam7);
}

int func_268(var uParam0, bool bParam1)//Position - 0x9551
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	char cVar3[64];
	struct<16> Var4;
	struct<8> Var5;
	func_296();
	func_64(&Var0, &fVar1, bParam1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fLocal_296 == -1f)
		{
			fLocal_296 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		}
		if (iLocal_299 == -1)
		{
			iLocal_299 = uParam0->f_3;
		}
		if (!__LIB_0__::func_703(uLocal_300, 32))
		{
			__LIB_14__::func_526(&uLocal_274, func_294((*uParam0)[0], 0));
			__LIB_1__::func_298(&uLocal_274);
			__LIB_1__::func_330(&uLocal_300, 32);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@stripper");
			STREAMING::REQUEST_ANIM_DICT("gestures@f@standing@casual");
			func_290();
			return 0;
		}
		else if ((!__LIB_1__::func_297(&uLocal_274) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@stripper")) || !func_288())
		{
			return 0;
		}
		if (bLocal_304)
		{
			if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				return 0;
			}
		}
		if (!__LIB_0__::func_703(uLocal_300, 1024))
		{
			uLocal_74[0] = (*uParam0)[0];
			iLocal_271[0] = PED::CREATE_PED(26, func_294((*uParam0)[0], 0), Var0, fVar1, true, true);
			__LIB_40__::func_32(iLocal_271[0], uLocal_74[0], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_271[iVar2], true);
			PED::SET_PED_KEEP_TASK(iLocal_271[0], true);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_271[0], true);
			func_278(iLocal_271[0]);
			TASK::TASK_PLAY_ANIM(iLocal_271[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0f, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_271[iVar2], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_271[0], 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_271[0], __LIB_15__::func_280((*uParam0)[0]));
			__LIB_0__::func_222(&uLocal_78, 1, iLocal_271[0], __LIB_15__::func_280((*uParam0)[0]), 0, 1);
			__LIB_1__::func_330(&uLocal_300, 1024);
		}
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) > 100f)
		{
			if (func_192())
			{
				if (!__LIB_0__::func_703(uLocal_300, 1))
				{
					func_277(bParam1);
					func_251(0);
					__LIB_1__::func_330(&uLocal_300, 1);
				}
			}
			if (!__LIB_0__::func_703(uLocal_300, 64) && !__LIB_0__::func_703(uLocal_300, 512))
			{
				if (__LIB_0__::func_769(__LIB_39__::func_391((*uParam0)[0])))
				{
					StringCopy(&cVar3, "BC_PLYRC_", 64);
					if (__LIB_0__::func_683() == 2)
					{
						__LIB_0__::func_222(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						StringConCat(&cVar3, "T", 64);
					}
					else if (__LIB_0__::func_683() == 0)
					{
						__LIB_0__::func_222(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						StringConCat(&cVar3, "M", 64);
					}
					else if (__LIB_0__::func_683() == 1)
					{
						__LIB_0__::func_222(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						StringConCat(&cVar3, "F", 64);
					}
					__LIB_0__::func_222(&uLocal_78, 3, 0, __LIB_15__::func_280((*uParam0)[0]), 0, 1);
					Var4 = { func_275() };
					func_270(&uLocal_78, __LIB_39__::func_391((*uParam0)[0]), "BCAUD", &cVar3, &cVar3, &Var4, &Var4, 12, 1, 0, 0, 0);
					__LIB_1__::func_330(&uLocal_300, 64);
				}
				if (__LIB_3__::func_423(iLocal_71))
				{
					if (__LIB_42__::func_810(iLocal_71))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var5, "SC_CANCEL_", 64);
							StringIntConCat(&Var5, (*uParam0)[0], 64);
							__LIB_0__::func_222(&uLocal_78, 1, 0, __LIB_15__::func_280((*uParam0)[0]), 0, 1);
							func_265(&uLocal_78, __LIB_39__::func_391((*uParam0)[0]), "SHAUD", &Var5, 12, 0, 0, 1);
						}
						else
						{
							func_263();
						}
						__LIB_1__::func_330(&uLocal_300, 512);
					}
				}
			}
			else if (__LIB_1__::func_859())
			{
				__LIB_2__::func_712(&uLocal_300, 64);
				__LIB_2__::func_712(&uLocal_300, 512);
			}
			else if ((!__LIB_0__::func_75() && __LIB_14__::func_521()) && !__LIB_1__::func_859())
			{
				func_269((*uParam0)[0]);
				__LIB_42__::func_809(1);
				func_66(2);
			}
			if (!__LIB_0__::func_703(uLocal_300, 128))
			{
				if (!__LIB_0__::func_77(0))
				{
					func_67("SCLUB_HOME_C_H" /* GXT: To cancel the booty call, call ~a~ back. */, uLocal_74[0], 0);
					__LIB_1__::func_330(&uLocal_300, 128);
				}
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) > (fLocal_296 + (200f * 3f)))
			{
				func_66(1);
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) < fLocal_296)
			{
				fLocal_296 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (__LIB_0__::func_683() == 2)
	{
		__LIB_0__::func_222(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (__LIB_0__::func_683() == 0)
	{
		__LIB_0__::func_222(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (__LIB_0__::func_683() == 1)
	{
		__LIB_0__::func_222(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_269(int iParam0)//Position - 0x99D4
{
	if (Global_113386.f_243[__LIB_39__::func_393() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_113386.f_243[__LIB_39__::func_393() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_113386.f_243[__LIB_39__::func_393() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_270(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x9A33
{
	var uVar0;
	var uVar1;
	__LIB_0__::func_487(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	__LIB_15__::func_997();
	if (iParam8 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	__LIB_30__::func_365(2, &uVar0, &uVar1, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return __LIB_16__::func_607(&uVar0, &uVar1, iParam7, bParam11);
}

struct<16> func_275()//Position - 0x9ECC
{
	struct<16> Var0;
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_74[0], 64);
	return Var0;
}

void func_277(bool bParam0)//Position - 0x9F4E
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_MEE4" /* GXT: Meet ~b~~a~~s~ at her home. */, uLocal_74[0]);
			}
			else
			{
				func_84("SCLUB_HOME_MEET" /* GXT: Meet ~b~~a~~s~ behind the club. */, uLocal_74[0]);
			}
			break;
		case 8:
			func_84("SCLUB_HOME_LIZ" /* GXT: Meet ~b~~a~~s~ at the college. */, uLocal_74[0]);
			break;
		case 9:
			func_84("SCLUB_HOME_HITCH" /* GXT: Meet ~b~~a~~s~ at the marina. */, uLocal_74[0]);
			break;
	}
}

void func_278(int iParam0)//Position - 0x9FE1
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("S_F_Y_Stripper_02"))
	{
		__LIB_39__::func_804(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		__LIB_39__::func_806(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		__LIB_39__::func_802(iParam0, 0, 0);
	}
}

int func_288()//Position - 0xA61F
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
	{
		return 1;
	}
	else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_204()))
	{
		return 1;
	}
	return 0;
}

void func_290()//Position - 0xA693
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_204());
	}
}

int func_294(int iParam0, bool bParam1)//Position - 0xA768
{
	int iVar0;
	if (bParam1)
	{
		return joaat("MP_F_StripperLite");
	}
	iVar0 = __LIB_39__::func_391(iParam0);
	if (iVar0 != 145)
	{
		return __LIB_2__::func_910(iVar0);
	}
	return __LIB_39__::func_811(0, 0);
}

void func_296()//Position - 0xA7C1
{
	switch (uLocal_74[0])
	{
		case 1:
			Local_285 = { 128.1002f, -1895.0007f, 22.4811f };
			Local_286 = { 128.1059f, -1896.8188f, 22.6792f };
			Local_287 = { 133.9411f, -1881.8903f, 22.5257f };
			Local_288 = { 130.1663f, -1893.0575f, 22.3748f };
			Local_289 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_293 = 330.5705f;
			fLocal_294 = 244f;
			Local_292 = { 146.293f, -1888.0493f, 22.2193f };
			fLocal_295 = fLocal_294;
			break;
		case 0:
			Local_285 = { -161.9628f, -1636.501f, 33.0339f };
			Local_286 = { -159.9415f, -1637.307f, 33.0339f };
			Local_287 = { -178.6316f, -1629.5216f, 32.1789f };
			Local_288 = { -166.1453f, -1633.1024f, 32.6574f };
			Local_289 = { -166.6636f, -1633.2289f, 32.6567f };
			fLocal_293 = 108.072f;
			fLocal_294 = 180.9811f;
			Local_292 = { Local_287 };
			fLocal_295 = fLocal_294;
			break;
		case 4:
			Local_285 = { -198.3824f, 87.8785f, 68.7436f };
			Local_286 = { -197.2292f, 86.3497f, 68.7561f };
			Local_287 = { -200.9078f, 113.537f, 68.5518f };
			Local_288 = { -200.1384f, 96.9809f, 68.5203f };
			Local_289 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_293 = 48.99f;
			fLocal_294 = 64.3f;
			Local_292 = { Local_287 };
			fLocal_295 = fLocal_294;
			break;
		case 5:
			Local_285 = { -849.0348f, 510.6906f, 89.8218f };
			Local_286 = { -849.0408f, 508.5767f, 89.8218f };
			Local_287 = { -846.1005f, 520.2202f, 89.6217f };
			Local_288 = { -851.8972f, 512.73f, 89.6217f };
			Local_289 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_293 = 92.365f;
			fLocal_294 = 293f;
			Local_292 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_295 = fLocal_294;
			break;
		case 8:
			Local_285 = { -28.2427f, -1555.8925f, 29.6918f };
			Local_286 = { -24.8589f, -1556.8461f, 29.6819f };
			Local_287 = { -41.8174f, -1575.6086f, 28.2831f };
			Local_288 = { -25.3404f, -1556.3406f, 29.6919f };
			Local_289 = { -27.7382f, -1570.5724f, 29.3f };
			fLocal_293 = 181.352f;
			fLocal_294 = 47.9206f;
			Local_292 = { Local_287 };
			fLocal_295 = fLocal_294;
			break;
		case 9:
			Local_285 = { 3313.487f, 5175.8306f, 18.619f };
			Local_286 = { 3310.8157f, 5176.3306f, 18.619f };
			Local_287 = { 3334.3206f, 5161.122f, 17.2996f };
			Local_288 = { 3317.7876f, 5171.707f, 17.4471f };
			Local_289 = { 3318.0757f, 5171.805f, 17.4385f };
			fLocal_293 = 236.4579f;
			Local_292 = { 3322.9268f, 5148.6074f, 17.3141f };
			fLocal_295 = 310.8648f;
			break;
	}
}

int func_297()//Position - 0xAB39
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_304)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		default:
			return 0;
			break;
	}
	return 0;
}

void func_303()//Position - 0xACF0
{
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_86();
	HUD::CLEAR_PRINTS();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_284, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), true, true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), 15f, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
		{
			if (!__LIB_0__::func_703(uLocal_300, 8192))
			{
				TASK::TASK_WANDER_STANDARD(iLocal_271[0], 40000f, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_271[0], true);
			if (!PED::DOES_RELATIONSHIP_GROUP_EXIST(iLocal_70))
			{
				PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_70);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_70);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_271[0], iLocal_70);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_271[0]));
	}
	if (iLocal_299 != -1)
	{
		__LIB_15__::func_281(&iLocal_299);
	}
	if (bLocal_69)
	{
		__LIB_37__::func_661(&uLocal_68);
	}
	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	__LIB_39__::func_389(uLocal_74[0], -1);
	Global_112380 = 0;
	__LIB_25__::func_729(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

