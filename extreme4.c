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
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
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
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	struct<61> Local_80 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	float fLocal_82 = 0f;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<13> Local_91 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_92 = NULL;
	int iLocal_93 = 0;
	int* iLocal_94 = NULL;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int* iLocal_99 = NULL;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 16;
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
	int iLocal_271 = 0;
	struct<3> Local_272 = { 0, 0, 0 } ;
	float fLocal_273 = 0f;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	struct<61> Local_307 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_78 = __LIB_2__::func_108(52);
	iLocal_79 = joaat("A_C_Retriever");
	Local_81 = { 1726.4f, 83.0424f, 169.67f };
	fLocal_82 = 328.7801f;
	iLocal_289 = AUDIO::GET_SOUND_ID();
	Local_80 = { ScriptParam_307 };
	__LIB_20__::func_264(&Local_80);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_38__::func_39(1);
		func_339(1);
	}
	if (__LIB_0__::func_294())
	{
		Global_78564 = 1;
		func_333(&Local_80);
		Global_78564 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
	{
	}
	func_321();
	if (!__LIB_0__::func_294())
	{
		if ((__LIB_1__::func_197(Local_80.f_28[0]) && __LIB_1__::func_197(PLAYER::PLAYER_PED_ID())) && !__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 4f, 1))
		{
			iLocal_305 = 1;
		}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_UR", 0);
		__LIB_35__::func_898(Local_80.f_9, 0, 0, 0, 0, 0);
		if (iLocal_84 != 4 && iLocal_84 != 0)
		{
			func_301();
		}
		if (iLocal_84 < 3 && iLocal_305)
		{
			if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1668.8821f, -19.652481f, 172.67476f, 1653.8553f, 8.008027f, 175.02478f, 7f, false, true, 0))
			{
				if (__LIB_1__::func_197(Local_91.f_0))
				{
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_91.f_0, 10f, 1))
					{
						func_300();
					}
				}
			}
		}
		switch (iLocal_84)
		{
			case 0:
				func_283();
				break;
			case 1:
				func_270();
				break;
			case 2:
				func_248();
				break;
			case 3:
				func_8();
				break;
			case 4:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x20C
{
	switch (iLocal_83)
	{
		case 0:
			__LIB_0__::func_523(&iLocal_94);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_92))
			{
				__LIB_38__::func_39(1);
			}
			else
			{
				__LIB_39__::func_861(sLocal_92, 1);
			}
			iLocal_83 = 1;
			break;
		case 1:
			if (__LIB_0__::func_204())
			{
				func_2(1);
				func_339(0);
			}
			break;
	}
}

void func_2(int iParam0)//Position - 0x268
{
	if (iParam0 == 1)
	{
		HUD::CLEAR_PRINTS();
	}
	__LIB_0__::func_523(&iLocal_94);
	__LIB_0__::func_123(&iLocal_99);
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
}

void func_8()//Position - 0x35E
{
	switch (iLocal_85)
	{
		case 0:
			iLocal_297 = 0;
			SYSTEM::SETTIMERA(0);
			iLocal_85 = 1;
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_102))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_102, false))
				{
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_102, 1f, 1))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
						OBJECT::DELETE_OBJECT(&iLocal_102);
					}
				}
			}
			if (iLocal_271 == 0)
			{
				func_232();
				iLocal_292 = MISC::GET_GAME_TIMER();
				if (__LIB_0__::func_121(Local_91.f_0))
				{
				}
				iLocal_271 = 1;
			}
			if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_297 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1624.015f, -5.45107f, 102.06766f, 1639.0066f, -52.987503f, 181.3352f, 58.75f, false, true, 0) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
					{
						iLocal_297 = 1;
					}
				}
				if (__LIB_0__::func_121(Local_91.f_0))
				{
					if (SYSTEM::TIMERA() > 5000)
					{
						if ((MISC::GET_GAME_TIMER() > iLocal_292 + 25000 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1665.7285f, -26.278694f, 172.58151f, 1672.6519f, -24.58394f, 177.25467f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1650.5189f, 5.134407f, 172.67433f, 1656.5706f, 9.669823f, 176.77434f, 15.25f, false, true, 0))
						{
							iLocal_85 = 2;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() > iLocal_292 + 25000 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1665.7285f, -26.278694f, 172.58151f, 1672.6519f, -24.58394f, 177.25467f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1650.5189f, 5.134407f, 172.67433f, 1656.5706f, 9.669823f, 176.77434f, 15.25f, false, true, 0))
				{
					iLocal_85 = 2;
				}
			}
			if (MISC::GET_GAME_TIMER() < iLocal_292 + 5000)
			{
				if (RECORDING::IS_REPLAY_RECORDING())
				{
					RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				}
			}
			break;
		case 2:
			if (((!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) < 2f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_35__::func_536(&uLocal_106, "EXT4AUD", "EXT4_WIL2", 8, 0, 0, 0))
				{
					func_9();
				}
			}
			break;
	}
}

void func_9()//Position - 0x5A9
{
	if (iLocal_297 == 1)
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 4f, 0);
		__LIB_0__::func_498(762);
	}
	func_2(1);
	func_10(84, 1);
	func_339(1);
}

void func_10(int iParam0, bool bParam1)//Position - 0x5DB
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__::func_205();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_112473[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_6)
	{
		return;
	}
	__LIB_38__::func_136(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__::func_56(&(Global_112473[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::START_FIRING_AMNESTY(5000);
		}
	}
	__LIB_32__::func_577(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_339(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_26__::func_250());
	func_38();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_35__::func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__::func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__::func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__::func_943(iParam0, 0, 0);
	}
	__LIB_0__::func_533();
}

void func_38()//Position - 0x178D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_97810[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = __LIB_18__::func_168(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				case 1:
					iVar2 = 158;
					break;
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_156(iVar1, 14, iVar2))
				{
					func_39(iVar1, 14, iVar2);
				}
				if (Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_39(int iParam0, int iParam1, int iParam2)//Position - 0x184E
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_156(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_39(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_39(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_78130[1 /*14*/].f_12);
	}
	else
	{
		uVar6 = { __LIB_18__::func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_82(iParam0, iVar0, &iVar7, 0))
	{
		func_42(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_40(iParam0, iVar0, &iVar7))
	{
		func_42(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_40(int iParam0, int iParam1, int iParam2)//Position - 0x1A0A
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_156(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1AD1
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
										func_42(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_42(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_48(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_82(iParam0, iVar10, &iVar4, 1))
							{
								func_42(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_42(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_42(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_42(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_42(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_42(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_42(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_42(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_42(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_42(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_82(iParam0, iVar10, &iVar4, 0))
		{
			func_42(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_40(iParam0, iVar10, &iVar4))
		{
			func_42(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x2B0E
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
				if (func_156(iParam0, iParam1, iVar0))
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
				if (func_156(iParam0, iParam1, iVar1))
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

int func_82(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x91E8
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_156(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0, int iParam1, int iParam2)//Position - 0x1F5E4
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
				if (!func_156(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_156(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_156(iParam0, 14, iVar4))
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
			if (!func_156(iParam0, 14, uVar8[iVar7]))
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

void func_232()//Position - 0x2733B
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	float fVar5;
	iVar0 = 0;
	fVar1 = 1f;
	iLocal_296 = MISC::GET_GAME_TIMER();
	if (!CAM::DOES_CAM_EXIST(iLocal_274))
	{
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_275))
	{
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_276))
	{
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_277))
	{
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_278))
	{
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_279))
	{
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_280))
	{
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_281))
	{
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_282))
	{
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_283))
	{
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_284))
	{
	}
	MISC::SET_TIME_SCALE(fVar1);
	HUD::DISPLAY_HUD(false);
	HUD::DISPLAY_RADAR(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
	AUDIO::STOP_AUDIO_SCENE("EXTREME_04_CUSTOM_QUIET_SCENE");
	__LIB_0__::func_84(800, 0);
	iLocal_298 = 0;
	iLocal_299 = 0;
	iLocal_301 = 0;
	iLocal_302 = 0;
	bLocal_303 = false;
	iLocal_299 = 0;
	iLocal_304 = 0;
	AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_EXTREME_04");
	RECORDING::REPLAY_START_EVENT(0);
	while (MISC::GET_GAME_TIMER() < iLocal_296 + 11000 && !CAM::IS_SCREEN_FADED_OUT())
	{
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294))
		{
			if (__LIB_6__::func_841(400))
			{
				bLocal_303 = true;
			}
		}
		if (bLocal_303)
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
		}
		SYSTEM::WAIT(0);
		if (!iLocal_301)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) == 1f)
				{
					if (__LIB_1__::func_197(Local_91.f_0))
					{
						iLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(1656.378f, -12.057f, 169.038f, 0f, 0f, 115.85f, 2);
						iLocal_286 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_91.f_0, iLocal_294, "rcmextreme4", "Base_Jump_Spot_02", 1000f, -1000f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_294, false);
						CAM::SET_CAM_ACTIVE(iLocal_286, true);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_286, iLocal_294, "Base_Jump_Spot_02_CAM", "rcmextreme4");
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_91.f_0, false, false);
						CAM::DESTROY_CAM(iLocal_285, false);
						iLocal_301 = 1;
					}
				}
			}
		}
		else if (!iLocal_302)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) >= 0.2f)
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
				{
					AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("RCM_Extreme4_Fall_and_impact", 0);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) == 1f)
			{
				if (__LIB_1__::func_197(Local_91.f_0))
				{
					iLocal_295 = PED::CREATE_SYNCHRONIZED_SCENE(1656.378f, -12.057f, 169.038f, 0f, 0f, 115.85f, 2);
					iLocal_287 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_91.f_0, iLocal_295, "rcmextreme4", "Fall_and_impact", 1000f, -1000f, 0, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_295, true);
					CAM::SET_CAM_ACTIVE(iLocal_287, true);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_287, iLocal_295, "Fall_and_impact_CAM", "rcmextreme4");
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_295);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_91.f_0, false, false);
					CAM::DESTROY_CAM(iLocal_286, false);
					iLocal_302 = 1;
				}
			}
		}
		else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) >= 0.323f)
		{
			if (!iLocal_298)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_extrm4_water_splash", 1655.27f, -20.8134f, 133.841f, 0f, 0f, 0f, 1f, false, false, false);
				GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(1f);
				__LIB_6__::func_771();
				iLocal_298 = 1;
			}
			else if (!iLocal_304)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) >= 0.44f)
				{
					iLocal_104 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_extrm4_water_blood", 1655.27f, -20.8134f, 133.842f, 0f, 0f, 0f, 1f, false, false, false, false);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_104, 1f);
					iLocal_304 = 1;
				}
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_296 + 600 && fVar1 == 1f)
		{
			if (!iLocal_299)
			{
				iLocal_299 = 1;
			}
		}
		fVar2 = (1f / 30f);
		fVar3 = (MISC::GET_FRAME_TIME() / fVar2);
		if (MISC::GET_GAME_TIMER() > iLocal_296 + 630)
		{
			fVar1 = (fVar1 + (0.035f * fVar3));
			if (fVar1 > 1f)
			{
				fVar1 = 1f;
			}
			MISC::SET_TIME_SCALE(fVar1);
		}
		else
		{
			fVar1 = (fVar1 - (0.07f * fVar3));
			if (fVar1 < 0.1f)
			{
				fVar1 = 0.1f;
			}
			MISC::SET_TIME_SCALE(fVar1);
		}
		if (iVar0 == 0)
		{
			iVar0 = 1;
		}
		if (MISC::GET_GAME_TIMER() > iLocal_296 + 563)
		{
			if (iVar0 == 1)
			{
				__LIB_0__::func_123(&iLocal_99);
				if (__LIB_1__::func_197(Local_91.f_0))
				{
				}
				iVar0 = 2;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_296 + 871)
		{
			if (iVar0 == 2)
			{
				if (__LIB_1__::func_197(Local_91.f_0))
				{
				}
				iVar0 = 3;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_296 + 2000)
		{
			if (iVar0 == 3)
			{
				if (__LIB_1__::func_197(Local_91.f_0))
				{
				}
				iVar0 = 4;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_296 + 3500)
		{
			if (iVar0 == 4)
			{
				iVar0 = 5;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_296 + 10000)
		{
			if (iVar0 != 7)
			{
				CAM::DESTROY_CAM(iLocal_287, false);
				iLocal_284 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				CAM::SET_CAM_PARAMS(iLocal_284, 1659.8927f, -6.552459f, 174.87099f, -29.259314f, 1E-06f, 122.45019f, 50f, 0, 1, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				CAM::SET_CAM_ACTIVE(iLocal_284, true);
				iVar0 = 7;
			}
		}
	}
	if (bLocal_303)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
		{
			AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_295);
		}
		AUDIO::CANCEL_MUSIC_EVENT("EXT4_JUMPED_OS");
		__LIB_6__::func_771();
		iLocal_284 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		CAM::SET_CAM_PARAMS(iLocal_284, 1659.8927f, -6.552459f, 174.87099f, -29.259314f, 1E-06f, 122.45019f, 50f, 0, 1, 1, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(iLocal_284, true);
		if (!iLocal_304)
		{
			iLocal_104 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_extrm4_water_blood", 1655.27f, -20.8134f, 133.842f, 0f, 0f, 0f, 1f, false, false, false, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_104, 1f);
			iLocal_304 = 1;
		}
		CAM::DO_SCREEN_FADE_IN(500);
		SYSTEM::WAIT(100);
	}
	AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_EXTREME_04");
	__LIB_0__::func_123(&iLocal_99);
	if (__LIB_1__::func_197(Local_91.f_0))
	{
		if (iVar0 < 3)
		{
			ENTITY::SET_ENTITY_HEALTH(Local_91.f_0, 101, 0);
			Var4 = { ENTITY::GET_ENTITY_COORDS(Local_91.f_0, true) };
			if (Var4.f_2 > 155f)
			{
				fVar5 = 155f;
			}
			else
			{
				fVar5 = Var4.f_2;
			}
			ENTITY::SET_ENTITY_COORDS(Local_91.f_0, 1657.0461f, -17.4571f, fVar5, true, false, false, true);
		}
	}
	RECORDING::REPLAY_STOP_EVENT();
	__LIB_32__::func_576(1, 1, 1, 1);
	CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 128);
	MISC::SET_TIME_SCALE(1f);
	if (__LIB_0__::func_121(Local_91.f_0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
		{
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_295, 1f);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_91.f_0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_91.f_0, false, false);
		ENTITY::SET_ENTITY_COORDS(Local_91.f_0, 1655.77f, -20.04f, 135.8f, true, false, false, true);
		ENTITY::SET_ENTITY_HEALTH(Local_91.f_0, 0, 0);
	}
	__LIB_0__::func_203(&uLocal_106, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	__LIB_35__::func_536(&uLocal_106, "EXT4AUD", "EXT4_DUMB", 7, 0, 0, 0);
}

void func_248()//Position - 0x27EA9
{
	if (iLocal_85 < 2)
	{
		AUDIO::PREPARE_MUSIC_EVENT("EXT4_JUMPED_OS");
	}
	switch (iLocal_85)
	{
		case 0:
			iLocal_87 = 0;
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1655.1393f, 5.342447f, 172.67477f, 1662.0853f, -6.198325f, 175.02477f, 8.25f, false, true, 0))
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("es_4_rcm_p2_concat", 6, 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("es_4_rcm_p2_concat", 5, 8);
			}
			AUDIO::STOP_SOUND(iLocal_289);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Dom", 8, 2, 0, 0);
			}
			if (!__LIB_0__::func_75())
			{
				if (func_263(1, 20f, 1))
				{
					if ((!iLocal_305 || MISC::GET_GAME_TIMER() > iLocal_306 + 3000) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1658.95f, -5.45f, 173.78f, 0.2f, 0.2f, 0.2f, false, true, 0))
					{
						RECORDING::REPLAY_START_EVENT(1);
						CUTSCENE::START_CUTSCENE(2048);
						if (__LIB_1__::func_197(Local_91.f_0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_91.f_0, "Dom", 0, joaat("CS_Dom"), 0);
						}
						SYSTEM::WAIT(0);
						iLocal_305 = 0;
						CAM::STOP_GAMEPLAY_HINT(false);
						AUDIO::START_AUDIO_SCENE("EXTREME_04_CUSTOM_QUIET_SCENE");
						if (__LIB_1__::func_197(Local_91.f_0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_91.f_0, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_103) && !ENTITY::IS_ENTITY_DEAD(iLocal_103, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_103, false, false);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_96 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							iLocal_105 = ENTITY::GET_ENTITY_MODEL(iLocal_96);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_105) == 1 || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_105) == 1)
							{
								Local_272 = { 1649.793f, 11.7826f, 172.7745f };
								fLocal_273 = 220.9923f;
							}
							else
							{
								Local_272 = { 1662.016f, 53.0925f, 171.2482f };
								fLocal_273 = 298.6364f;
							}
							__LIB_32__::func_742(1654.7211f, 4.166876f, 172.5245f, 1662.5616f, -8.920052f, 178.27415f, 6.25f, Local_272, fLocal_273, 1, 1, 1, 0, 0);
						}
						else
						{
							Local_272 = { 1649.793f, 11.7826f, 172.7745f };
							fLocal_273 = 220.9923f;
							__LIB_29__::func_731(Local_272, fLocal_273);
						}
						func_250(1660.1857f, -7.492f, 172.774f, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1);
						MISC::CLEAR_AREA_OF_PEDS(1660.1857f, -7.492f, 172.774f, 200f, 0);
						iLocal_288 = PED::ADD_SCENARIO_BLOCKING_AREA(1636.6907f, -89.8127f, 150f, 1706.1459f, 58.721f, 190f, false, true, true, true);
						iLocal_85 = 1;
					}
				}
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					if (!iLocal_90)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
						{
							if (__LIB_1__::func_197(Local_91.f_0))
							{
								if (!CAM::DOES_CAM_EXIST(iLocal_285))
								{
									iLocal_285 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
								}
								CAM::SET_CAM_ACTIVE(iLocal_285, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(1656.378f, -12.057f, 169.038f, 0f, 0f, 115.85f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_91.f_0, iLocal_293, "rcmextreme4", "Base_Jump_Spot", 1000f, -1000f, 0, 0, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_293, true);
								CAM::SET_CAM_ACTIVE(iLocal_285, true);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_285, iLocal_293, "Base_Jump_Spot_CAM", "rcmextreme4");
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_91.f_0, false, false);
								iLocal_90 = 1;
							}
						}
					}
					iLocal_85 = 2;
				}
				if (__LIB_1__::func_197(Local_91.f_0))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dom", 0))
					{
						iLocal_85 = 2;
					}
				}
			}
			else
			{
				iLocal_85 = 2;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_103) && !ENTITY::IS_ENTITY_DEAD(iLocal_103, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_103, true, false);
			}
			if (iLocal_87 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXT4_JUMPED_OS");
				func_249(3);
			}
			break;
	}
}

void func_249(int iParam0)//Position - 0x2826E
{
	iLocal_84 = iParam0;
	iLocal_85 = 0;
	iLocal_86 = 0;
}

void func_250(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x28280
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__::func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__::func_173())
			{
				case 0:
					if (func_156(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_42(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_156(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_42(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_156(PLAYER::PLAYER_PED_ID(), 8, 1) || func_156(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_42(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_156(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_42(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam8)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, true);
		if (bParam10)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
		HUD::CLEAR_PRINTS();
		if (iParam9 == 1)
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_34 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

int func_263(int iParam0, float fParam1, int iParam2)//Position - 0x28EBC
{
	int iVar0;
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!__LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!__LIB_4__::func_465(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				iVar0 = 0;
			}
		}
	}
	__LIB_0__::func_91();
	if (__LIB_0__::func_75())
	{
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!__LIB_0__::func_90())
		{
			return 0;
		}
	}
	return 1;
}

void func_270()//Position - 0x2920C
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1)
		{
			if (((((((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/)) || (__LIB_4__::func_739() && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/))) || (__LIB_4__::func_739() && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/))) || (__LIB_4__::func_739() && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/)))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	switch (iLocal_85)
	{
		case 0:
			if (__LIB_1__::func_197(Local_80.f_28[0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_80.f_28[0], 17, true);
			}
			iLocal_290 = 0;
			iLocal_305 = 1;
			__LIB_0__::func_210("EXT4_01", 7500, 1);
			iLocal_94 = __LIB_10__::func_711(Local_91.f_0, 1, 1, 5);
			SYSTEM::SETTIMERA(0);
			iLocal_85 = 1;
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_102))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_102, false))
				{
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iLocal_102, 1f, 1))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
						OBJECT::DELETE_OBJECT(&iLocal_102);
					}
				}
			}
			if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_1__::func_197(Local_91.f_0))
				{
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_91.f_0, 100f, 1))
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("es_4_rcm_p2_concat", 6, 8);
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Dom", 8, 2, 0, 0);
						}
					}
					if (PED::IS_PED_RAGDOLL(Local_91.f_0))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_91.f_0, 0, 0);
					}
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_91.f_0, 32f, 1))
					{
						if (__LIB_32__::func_572(Local_91.f_0, 1, 0, 0, 0))
						{
							if (iLocal_93 == 0)
							{
								if (!__LIB_0__::func_75())
								{
									__LIB_35__::func_901(&uLocal_106, "EXT4AUD", "EXT4_ATTACK", "EXT4_ATTACK_1", 7, 0, 0);
									iLocal_93 = 1;
								}
							}
							else if (iLocal_93 == 1)
							{
								if (!__LIB_0__::func_75())
								{
									__LIB_35__::func_901(&uLocal_106, "EXT4AUD", "EXT4_ATTACK", "EXT4_ATTACK_2", 7, 0, 0);
									iLocal_93 = 2;
								}
							}
						}
						else
						{
							if (!iLocal_300)
							{
								if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_91.f_0, 30f, 1) && !__LIB_0__::func_75())
								{
									if (__LIB_35__::func_536(&uLocal_106, "EXT4AUD", "EXT4_COMM", 7, 0, 0, 0))
									{
										iLocal_300 = 1;
									}
								}
							}
							func_272();
							if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_91.f_0))
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_91.f_0, -1, 0, 2);
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1663.5873f, -11.714151f, 172.67476f, 1658.3868f, -1.735749f, 175.77477f, 5.5f, false, true, 0))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_85 = 2;
						}
						else
						{
							iLocal_96 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							iLocal_105 = ENTITY::GET_ENTITY_MODEL(iLocal_96);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_105) == 1 || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_105) == 1)
							{
								iLocal_85 = 2;
							}
						}
					}
					else
					{
						func_271();
					}
				}
			}
			break;
		case 2:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 3);
			__LIB_0__::func_523(&iLocal_94);
			if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f, 1, false);
					SYSTEM::WAIT(600);
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			func_249(2);
			break;
	}
}

void func_271()//Position - 0x2954A
{
	if (__LIB_1__::func_197(Local_91.f_0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_91.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
		{
			TASK::TASK_PERFORM_SEQUENCE(Local_91.f_0, iLocal_95);
		}
	}
}

void func_272()//Position - 0x29572
{
	if (!__LIB_0__::func_75())
	{
		if (iLocal_290 < 5)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_291 + (8000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))))
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_289))
				{
					if (__LIB_35__::func_536(&uLocal_106, "EXT4AUD", "EXT4_DOM", 6, 0, 0, 0))
					{
						iLocal_291 = MISC::GET_GAME_TIMER();
						iLocal_290++;
						return;
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_75())
	{
		if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_A", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_B", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_C", false, -1))
		{
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_289))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_289, "DOM", Local_91.f_0, "EXTREME_04_SOUNDSET", false, 0);
			}
		}
	}
}

void func_283()//Position - 0x29A8B
{
	if (__LIB_0__::func_294() == 0)
	{
		func_294();
	}
	else
	{
		__LIB_0__::func_370(1732.1328f, 91.9424f, 169.7872f, 128.6917f, 1, 0);
		__LIB_6__::func_775(0, -1, 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1723.4518f, 80.729f, 169.6701f, 1f, -1, 1f, 2113, 40000f);
		__LIB_0__::func_84(800, 0);
		iLocal_88 = 1;
		__LIB_32__::func_751(1, 1, 1);
	}
	if (iLocal_88 == 1)
	{
		__LIB_10__::func_700(&Local_80, 0, 1);
		func_284();
	}
}

void func_284()//Position - 0x29B44
{
	if (__LIB_0__::func_121(Local_80.f_28[0]))
	{
		__LIB_10__::func_701(Local_80.f_28[0], 1737.4534f, 101.7498f, 170.0243f, 288.5211f, 0, 1);
	}
	else
	{
		func_285(&(Local_80.f_28[0]), 1737.4534f, 101.7498f, 170.0243f, 288.5211f);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_80.f_28[0], 1826.6621f, 146.9161f, 170.4472f, 1f, -1, 0.25f, 0, 40000f);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", false);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_91.f_1, 20f, false, false, false, false, false, false, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97))
	{
		iLocal_97 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 1662.8799f, -14.255f, 172.7742f, 205.3516f, true, true, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		iLocal_98 = VEHICLE::CREATE_VEHICLE(joaat("bmx"), 1633.7656f, -23.6768f, 127.0535f, 55.7565f, true, true, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_100))
	{
		iLocal_100 = OBJECT::CREATE_OBJECT(joaat("prop_box_wood01a"), 1666.2823f, -11.204082f, 172.7773f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_100, 0.000637f, -0.000136f, 10.660593f, 2, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_101))
	{
		iLocal_101 = OBJECT::CREATE_OBJECT(joaat("prop_box_wood01a"), 1667.0764f, -12.07778f, 173.2611f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_101, 90.03932f, -0.257438f, -13.861418f, 2, true);
	}
	if (__LIB_1__::func_197(Local_91.f_0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_91.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "fidget_01", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "fidget_02", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_95, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
			TASK::TASK_PERFORM_SEQUENCE(Local_91.f_0, iLocal_95);
		}
	}
	if (__LIB_1__::func_197(Local_91.f_0))
	{
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_91.f_0, false);
		__LIB_0__::func_203(&uLocal_106, 4, Local_91.f_0, "DOM", 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_91.f_0, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_103))
	{
		iLocal_103 = OBJECT::CREATE_AMBIENT_PICKUP(joaat("PICKUP_PARACHUTE"), 1665.264f, -11.4427f, 172.7747f, 7, -1, joaat("p_parachute_s"), true, true);
	}
	ENTITY::SET_ENTITY_ROTATION(iLocal_103, -111.82254f, -0.454914f, -162.22308f, 2, true);
	ENTITY::PLAY_ENTITY_ANIM(iLocal_103, "Chute_Off_Bag", "skydive@parachute@", 4f, false, true, false, 0.99f, 0);
	func_249(1);
}

void func_285(int* iParam0, struct<3> Param1, float fParam2)//Position - 0x29E45
{
	__LIB_11__::func_798(iParam0, iLocal_79, Param1, fParam2, 26);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
	PED::SET_PED_NAME_DEBUG(*iParam0, "EXTREME LAUNCHER RC");
}

void func_294()//Position - 0x2A1C8
{
	switch (iLocal_86)
	{
		case 0:
			func_299();
			iLocal_87 = 0;
			__LIB_26__::func_478("es_4_rcm_p1", 0);
			if (__LIB_18__::func_170(1, 1093140480, 0))
			{
				if (!iLocal_305 || MISC::GET_GAME_TIMER() > iLocal_306 + 3500)
				{
					__LIB_26__::func_252();
					RECORDING::REPLAY_START_EVENT(1);
					CUTSCENE::START_CUTSCENE(0);
					if (__LIB_0__::func_121(Local_80.f_28[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_80.f_28[0], "Hudson", 0, joaat("A_C_Retriever"), 0);
					}
					SYSTEM::WAIT(0);
					CAM::STOP_GAMEPLAY_HINT(false);
					__LIB_32__::func_742(1729.9216f, 89.4162f, 174.01227f, 1739.7454f, 101.28158f, 167.82816f, 7f, 1739.9564f, 97.8651f, 169.9797f, 140.876f, 1, 1, 1, 0, 0);
					__LIB_32__::func_742(1743.1155f, 105.83296f, 169.63617f, 1732.0288f, 93.77112f, 172.60745f, 4f, 1739.9564f, 97.8651f, 169.9797f, 140.876f, 1, 1, 1, 0, 0);
					func_250(1733.315f, 95.2246f, 169.9192f, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1);
					iLocal_86 = 1;
				}
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				iLocal_86 = 2;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				iLocal_86 = 2;
			}
			break;
		case 2:
			__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), 1732.2219f, 92.0087f, 169.7867f, 138.1854f, 0, 1);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1723.4518f, 80.729f, 169.6701f, 1f, -1, 1f, 2113, 40000f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			RECORDING::REPLAY_STOP_EVENT();
			iLocal_88 = 1;
			__LIB_32__::func_576(1, 1, 1, 1);
			break;
	}
}

void func_299()//Position - 0x2A4AB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar0 = 35f;
	fVar1 = 0.4f;
	fVar2 = 0f;
	fVar3 = -0.85f;
	fVar4 = 0f;
	if (((!__LIB_0__::func_294() && __LIB_1__::func_197(Local_80.f_28[0])) && __LIB_1__::func_197(PLAYER::PLAYER_PED_ID())) && iLocal_305 == 1)
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], -1, 0, 2);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 0f, 0f, 0f, 1f, -1, 0.5f, true);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_80.f_28[0], -0.5f, 0f, -0.2f, true, 30000, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(fVar0);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fVar1);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fVar2);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fVar3);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fVar4);
			iLocal_306 = MISC::GET_GAME_TIMER();
		}
		else
		{
			if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 4f, 1))
			{
				iLocal_306 = (iLocal_306 - 10000);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
		}
	}
}

void func_300()//Position - 0x2A5B5
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar0 = 35f;
	fVar1 = 0.45f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0.07f;
	if (iLocal_305)
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_91.f_0, -1, 0, 2);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1658.95f, -5.45f, 173.78f, 1f, -1, 0.25f, 0, -161.08f);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_91.f_0, 0f, 0f, 0f, true, 30000, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(fVar0);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fVar1);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fVar2);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fVar3);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fVar4);
			iLocal_306 = MISC::GET_GAME_TIMER();
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
		}
	}
}

void func_301()//Position - 0x2A670
{
	float fVar0;
	if (iLocal_84 == 1)
	{
		if (!__LIB_1__::func_197(Local_91.f_0))
		{
			sLocal_92 = "EXT4_F1";
			iLocal_84 = 4;
		}
		else
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_91.f_0, true), true);
			if (iLocal_89 == 0)
			{
				if (fVar0 > 160f)
				{
					iLocal_89 = 1;
				}
			}
			else if (fVar0 > 200f)
			{
				sLocal_92 = "EXT4_F2";
				iLocal_84 = 4;
			}
			if (fVar0 > 150f)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_94))
				{
					HUD::SET_BLIP_FLASHES(iLocal_94, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_94))
			{
				HUD::SET_BLIP_FLASHES(iLocal_94, false);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1660.332f, -20.456074f, 136.7029f, 1584.419f, -30.291168f, 120.603775f, 32f, false, true, 0))
		{
			sLocal_92 = "EXT4_F2";
			iLocal_84 = 4;
		}
	}
}

void func_321()//Position - 0x2B1F2
{
	__LIB_24__::func_951(52, 1, 0);
	iLocal_89 = 0;
	Local_91.f_1 = { 1658.42f, -8.02f, (174.78f - 1f) };
	Local_91.f_4 = 116.87f;
	Local_91.f_5 = __LIB_2__::func_108(52);
	Local_91.f_9 = { 1660.3239f, -11.712502f, 173.96379f };
	Local_91.f_12 = 119.600716f;
	HUD::REQUEST_ADDITIONAL_TEXT("EXT4", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_MODEL(joaat("prop_box_guncase_03a"));
	STREAMING::REQUEST_MODEL(joaat("prop_box_wood01a"));
	STREAMING::REQUEST_MODEL(joaat("p_parachute_s"));
	STREAMING::REQUEST_MODEL(joaat("bmx"));
	while (((!STREAMING::HAS_MODEL_LOADED(joaat("prop_box_guncase_03a")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood01a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("p_parachute_s"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bmx")))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_99))
	{
		iLocal_99 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_box_guncase_03a"), 1658.299f, -7.930665f, 173.71f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_99, 90f, 0f, -62.999996f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_99, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_99, false, false);
	}
	func_325(1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
	{
		__LIB_26__::func_256(&Local_91, 52, Local_91.f_1, Local_91.f_4, "Ext4-Dom", 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_91.f_0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_91.f_0, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Local_91.f_0, true);
		PED::SET_PED_COMPONENT_VARIATION(Local_91.f_0, 8, 2, 0, 0);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_91.f_0, true);
		PED::SET_PED_CONFIG_FLAG(Local_91.f_0, 137, true);
		PED::SET_PED_CONFIG_FLAG(Local_91.f_0, 118, false);
		PED::SET_PED_CONFIG_FLAG(Local_91.f_0, 208, true);
		PED::SET_PED_MONEY(Local_91.f_0, 5000);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_203(&uLocal_106, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	iLocal_297 = 0;
	iLocal_298 = 0;
	iLocal_299 = 0;
	iLocal_300 = 0;
	iLocal_301 = 0;
	iLocal_302 = 0;
	bLocal_303 = false;
	iLocal_305 = 0;
	iLocal_90 = 0;
	func_249(0);
}

void func_325(int iParam0)//Position - 0x2B4FF
{
	STREAMING::REQUEST_MODEL(Local_91.f_5);
	STREAMING::REQUEST_ANIM_DICT("rcmextreme4");
	STREAMING::REQUEST_ANIM_DICT("skydive@parachute@");
	STREAMING::REQUEST_MODEL(joaat("sanchez"));
	STREAMING::REQUEST_PTFX_ASSET();
	if (iParam0 == 1)
	{
		while ((((!STREAMING::HAS_MODEL_LOADED(Local_91.f_5) || !STREAMING::HAS_MODEL_LOADED(joaat("sanchez"))) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme4")) || !STREAMING::HAS_ANIM_DICT_LOADED("skydive@parachute@")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_333(var uParam0)//Position - 0x2B863
{
	int iVar0[1];
	int iVar1;
	iVar0[0] = iLocal_79;
	switch (iLocal_77)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 12f;
			StringCopy(&(uParam0->f_9), "ES_4_RCM_P1", 24);
			uParam0->f_27 = 0;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_10__::func_717(&(uParam0->f_48), "rcmextreme4", "idle_a", "idle_c");
			iLocal_77 = 1;
			break;
		case 1:
			if (!__LIB_10__::func_716(&iVar0) || !__LIB_20__::func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_77 = 2;
			break;
		case 2:
			func_285(&(uParam0->f_28[0]), 1732.27f, 96.36f, 170.29f, -98.56f);
			PED::SET_PED_CAN_LEG_IK(uParam0->f_28[0], true);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[0], 2);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_339(int iParam0)//Position - 0x2BA47
{
	__LIB_26__::func_252();
	if (__LIB_26__::func_257())
	{
		func_2(iParam0);
		func_352();
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_288, false);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	__LIB_0__::func_122(&iLocal_100, 0);
	__LIB_0__::func_122(&iLocal_101, 0);
	__LIB_0__::func_122(&iLocal_102, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", true);
	__LIB_32__::func_757(&Local_80, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_352()//Position - 0x2BD36
{
	__LIB_32__::func_757(&Local_80, 1, 0, 0);
	__LIB_0__::func_124(&(Local_80.f_28[0]), 1, 0, 1);
	STREAMING::REMOVE_ANIM_DICT("rcmextreme4");
}

