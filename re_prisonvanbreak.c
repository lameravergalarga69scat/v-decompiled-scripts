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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 16;
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
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	struct<3> Local_217 = { 0, 0, 0 } ;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222[3] = { 0, 0, 0 };
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225[3] = { 0, 0, 0 };
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	var uLocal_233[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_234 = 0;
	bool bLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	struct<3> Local_245 = { 0, 0, 0 } ;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	bool bLocal_258 = 0;
	bool bLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264[2] = { 0, 0 };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267[3] = { 0, 0, 0 };
	var uLocal_268[2] = { 0, 0 };
	struct<2> Local_269 = { 0, 5 } ;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 5;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_217 = { ScriptParam_269.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_148();
	}
	if (__LIB_42__.func_567(Local_217, -1, 0, 0, 0))
	{
		__LIB_35__.func_176(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_246)
		{
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_CR", 0);
			switch (iLocal_44)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_217, 100f, 100f, 100f, false, true, 0))
					{
						func_148();
					}
					if (iLocal_45)
					{
						iLocal_44 = 1;
					}
					else
					{
						func_91();
						iLocal_46 = 1;
					}
					break;
				case 1:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					func_90();
					func_88();
					if (!__LIB_35__.func_175())
					{
						func_84();
					}
					if (!bLocal_47)
					{
						func_73();
					}
					if (!bLocal_48 && !bLocal_256)
					{
						func_69();
					}
					if (iLocal_240 && !bLocal_47)
					{
						func_68(iLocal_222[0]);
						func_68(iLocal_222[1]);
						func_68(iLocal_222[2]);
					}
					if ((!iLocal_240 && !bLocal_256) && __LIB_35__.func_175())
					{
						func_67(iLocal_225[0], &(uLocal_233[0]), 1, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[1]), 5, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[2]), 0, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[3]), 4, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[4]), 1, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[5]), 5, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[6]), 0, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[7]), 4, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[8]), 1, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[9]), 5, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[10]), 0, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[11]), 4, 0.7f);
						func_67(iLocal_226, &(uLocal_233[12]), 1, 0.7f);
						func_67(iLocal_226, &(uLocal_233[13]), 5, 0.7f);
						func_67(iLocal_226, &(uLocal_233[14]), 0, 0.7f);
						func_67(iLocal_226, &(uLocal_233[15]), 4, 0.7f);
					}
					if (!iLocal_238)
					{
						func_65();
					}
					else
					{
						if (!bLocal_256)
						{
							func_64();
						}
						else if (!iLocal_253 && bLocal_47)
						{
							func_62();
						}
						if (!iLocal_257)
						{
							func_61();
						}
						func_60();
					}
					func_2();
					__LIB_0__.func_371();
					break;
			}
		}
		else
		{
			func_148();
		}
	}
}

void func_2()//Position - 0x325
{
	int iVar0;
	if (!iLocal_251)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_222[0], false) || PED::IS_PED_INJURED(iLocal_222[0]))
		{
			__LIB_0__.func_202(&uLocal_52, 4);
			iLocal_251 = 1;
		}
	}
	if (!bLocal_234)
	{
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_218, false) || PED::IS_PED_INJURED(iLocal_218)) || PED::IS_PED_HURT(iLocal_218))
		{
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				Local_245 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_218, 1.2f, 1.5f) };
				Local_245.f_2 = (Local_245.f_2 + 0.3f);
				iLocal_264[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), Local_245 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, true, joaat("prop_security_case_01"));
				if (!HUD::DOES_BLIP_EXIST(uLocal_268[0]))
				{
					uLocal_268[0] = __LIB_11__.func_324(iLocal_264[0]);
				}
				bLocal_234 = true;
				__LIB_0__.func_202(&uLocal_52, 5);
			}
		}
	}
	if (!bLocal_235)
	{
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_219, false) || PED::IS_PED_INJURED(iLocal_219)) || PED::IS_PED_HURT(iLocal_219))
		{
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				Local_245 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_219, 1.2f, 1.5f) };
				Local_245.f_2 = (Local_245.f_2 + 0.3f);
				iLocal_264[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), Local_245 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, true, joaat("prop_security_case_01"));
				if (!HUD::DOES_BLIP_EXIST(uLocal_268[1]))
				{
					uLocal_268[1] = __LIB_11__.func_324(iLocal_264[1]);
				}
				bLocal_235 = true;
				__LIB_0__.func_202(&uLocal_52, 6);
			}
		}
	}
	if (!bLocal_256)
	{
		if (!iLocal_248)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_218, false) || PED::IS_PED_INJURED(iLocal_218))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_218, PLAYER::PLAYER_PED_ID(), true))
					{
						HUD::REMOVE_BLIP(&iLocal_265);
						iLocal_248 = 1;
						bLocal_48 = true;
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("PLAYER"));
						if (!PED::IS_PED_INJURED(iLocal_219))
						{
							TASK::TASK_COMBAT_PED(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_219, true);
							PED::REGISTER_TARGET(iLocal_219, PLAYER::PLAYER_PED_ID());
							PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_219, true);
							__LIB_0__.func_202(&uLocal_52, 5);
							__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_247)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_219))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_219, false) || PED::IS_PED_INJURED(iLocal_219))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_219, PLAYER::PLAYER_PED_ID(), true))
					{
						HUD::REMOVE_BLIP(&iLocal_266);
						iLocal_247 = 1;
						bLocal_48 = true;
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("PLAYER"));
						if (!PED::IS_PED_INJURED(iLocal_218))
						{
							TASK::TASK_COMBAT_PED(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_218, true);
							PED::REGISTER_TARGET(iLocal_218, PLAYER::PLAYER_PED_ID());
							PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_218, true);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_38() || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.8538f, 43.5173f, 150f, 150f, 180f, false, true, 0))
		{
			if (PED::IS_PED_INJURED(iLocal_218) && PED::IS_PED_INJURED(iLocal_219))
			{
				if (func_38() && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_217, 50f, 50f, 50f, false, true, 0))
				{
					func_7();
				}
				if (bLocal_48 && !bLocal_47)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.8538f, 43.5173f, 150f, 150f, 180f, false, true, 0))
					{
						__LIB_30__.func_870(5);
						func_7();
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.8538f, 43.5173f, 200f, 200f, 180f, false, true, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_256)
	{
		if (func_38())
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_218, false) && ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
			{
				func_7();
			}
			if (bLocal_256)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_218, 150f, 150f, 150f, false, false, 0))
					{
						if (!bLocal_48)
						{
							__LIB_30__.func_870(6);
						}
						func_7();
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_219))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_219, 150f, 150f, 150f, false, false, 0))
					{
						if (!bLocal_48)
						{
							__LIB_30__.func_870(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_240 && !bLocal_47)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.29956f, 2650.5967f, 42.847225f, 297.89813f, 2617.9683f, 53.641197f, 49.6875f, 1);
		STREAMING::REQUEST_MODEL(joaat("ambulance"));
		STREAMING::REQUEST_ANIM_DICT("random@countrysiderobbery");
		if (((ENTITY::IS_ENTITY_DEAD(iLocal_218, false) && ENTITY::IS_ENTITY_DEAD(iLocal_219, false)) && STREAMING::HAS_MODEL_LOADED(joaat("ambulance"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@countrysiderobbery"))
		{
			HUD::REMOVE_BLIP(&iLocal_265);
			HUD::REMOVE_BLIP(&iLocal_266);
			__LIB_0__.func_202(&uLocal_52, 5);
			__LIB_0__.func_202(&uLocal_52, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_267[iVar0]));
				}
				iVar0++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_242, joaat("PLAYER"));
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 267.94f, 2700.48f, 43.6f, 15f, 15f, 15f, false, true, 0))
			{
				iLocal_227 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 267.94f, 2700.48f, 43.1f, 180f, true, true, false);
			}
			else
			{
				iLocal_227 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 185.94f, 2603.48f, 46.9f, 0f, true, true, false);
			}
			VEHICLE::SET_VEHICLE_SIREN(iLocal_227, true);
			iLocal_220 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_227, 20, joaat("S_M_M_Paramedic_01"), -1, true, true);
			iLocal_221 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_227, 20, joaat("S_M_M_Paramedic_01"), 0, true, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_220, 17, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_221, 17, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_220, 185, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_221, 185, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_227, 307.1379f, 2640.0417f, 43.4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_218, -1, 2f, 1f, 10f, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_218, -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_218, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_220, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(iLocal_220, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_219))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_PAUSE(0, 15000);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_219, -1, 2f, 1f, 10f, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_219, -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_219, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_221, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(iLocal_221, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_222[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_226))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_222[0], 185, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_226, false) + Vector(0f, 5f, 0f), 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_SWAP_WEAPON(0, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_222[0], iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(iLocal_222[0], true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_222[1], false) && ENTITY::DOES_ENTITY_EXIST(iLocal_223))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_222[1], 185, true);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_222[1], joaat("WEAPON_UNARMED"), true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_223, false) + Vector(0f, 1f, 0f), 2f, -1, 0.25f, 0, 40000f);
				TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_223, false), -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_223, false), 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_222[1], iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(iLocal_222[1], true);
			}
			if (!PED::IS_PED_INJURED(iLocal_222[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_219))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_222[2], 185, true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_219))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_219, false) + Vector(0f, 1f, 0f), 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_SWAP_WEAPON(0, false);
					TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_222[2], iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				}
				PED::SET_PED_KEEP_TASK(iLocal_222[2], true);
			}
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_222[0]))
			{
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				__LIB_0__.func_202(&uLocal_52, 4);
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				__LIB_0__.func_202(&uLocal_52, 4);
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_222[0]))
			{
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				__LIB_0__.func_202(&uLocal_52, 4);
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				__LIB_0__.func_202(&uLocal_52, 4);
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_240 = 1;
		}
	}
	if (iLocal_238 && !__LIB_35__.func_175())
	{
		func_5();
	}
	if (((((ENTITY::IS_ENTITY_DEAD(iLocal_218, false) && ENTITY::IS_ENTITY_DEAD(iLocal_219, false)) && ENTITY::IS_ENTITY_DEAD(iLocal_222[0], false)) && ENTITY::IS_ENTITY_DEAD(iLocal_222[1], false)) && ENTITY::IS_ENTITY_DEAD(iLocal_222[2], false)) && (func_38() || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.8538f, 43.5173f, 200f, 200f, 180f, false, true, 0)))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
		PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
		func_7();
	}
}

void func_5()//Position - 0xED6
{
	func_148();
}

void func_7()//Position - 0xEF0
{
	if (!bLocal_47)
	{
	}
	while (__LIB_0__.func_75())
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_40__.func_739(-1, 0);
	__LIB_20__.func_174();
	func_148();
}

int func_38()//Position - 0x22C4
{
	if (bLocal_234 || bLocal_235)
	{
		if (bLocal_234 && bLocal_235)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_268[0]) && !HUD::DOES_BLIP_EXIST(uLocal_268[1]))
			{
				return 1;
			}
		}
		if (bLocal_234 && !bLocal_235)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_268[0]))
			{
				return 1;
			}
		}
		if (bLocal_235 && !bLocal_234)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_268[1]))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_60()//Position - 0x2BC0
{
	if (!iLocal_254)
	{
		if (!PED::IS_PED_INJURED(iLocal_218))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_218, false))
			{
				iLocal_263 = PED::GET_VEHICLE_PED_IS_IN(iLocal_218, false);
				if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0)) || PED::IS_PED_BEING_JACKED(iLocal_218)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_263, false)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_263, joaat("WEAPON_STICKYBOMB"), -1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("PLAYER"));
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_218, false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_218, joaat("WEAPON_MICROSMG"), 200, true, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_218, joaat("WEAPON_MICROSMG"), true);
						TASK::TASK_DRIVE_BY(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
					}
					if (!PED::IS_PED_INJURED(iLocal_219))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_219, false))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, false);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_219, joaat("WEAPON_MICROSMG"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_219, joaat("WEAPON_MICROSMG"), true);
							TASK::TASK_DRIVE_BY(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
						}
					}
					bLocal_48 = true;
					iLocal_254 = 1;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_218, PLAYER::PLAYER_PED_ID(), true))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("PLAYER"));
				if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_218, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, false);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_218, joaat("WEAPON_MICROSMG"), 200, true, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_218, joaat("WEAPON_MICROSMG"), true);
						TASK::TASK_DRIVE_BY(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
						bLocal_48 = true;
						iLocal_254 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_219))
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_219, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, false);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_219, joaat("WEAPON_MICROSMG"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_219, joaat("WEAPON_MICROSMG"), true);
							TASK::TASK_DRIVE_BY(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_219))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_219, false))
			{
				iLocal_263 = PED::GET_VEHICLE_PED_IS_IN(iLocal_219, false);
				if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_BEING_JACKED(iLocal_219)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_263, false)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_263, joaat("WEAPON_STICKYBOMB"), -1))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("PLAYER"));
					if (!PED::IS_PED_INJURED(iLocal_218))
					{
						if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_218, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, false);
								WEAPON::GIVE_WEAPON_TO_PED(iLocal_218, joaat("WEAPON_MICROSMG"), 200, true, true);
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_218, joaat("WEAPON_MICROSMG"), true);
								TASK::TASK_DRIVE_BY(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								bLocal_48 = true;
								iLocal_254 = 1;
							}
						}
					}
					if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_219, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, false);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_219, joaat("WEAPON_MICROSMG"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_219, joaat("WEAPON_MICROSMG"), true);
							TASK::TASK_DRIVE_BY(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_219, PLAYER::PLAYER_PED_ID(), true))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("PLAYER"));
				if (!PED::IS_PED_INJURED(iLocal_218))
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_218, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_218, joaat("WEAPON_MICROSMG"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_218, joaat("WEAPON_MICROSMG"), true);
							TASK::TASK_DRIVE_BY(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
				if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_219, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_219, joaat("WEAPON_MICROSMG"), 200, true, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_219, joaat("WEAPON_MICROSMG"), true);
						TASK::TASK_DRIVE_BY(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
						bLocal_48 = true;
						iLocal_254 = 1;
					}
				}
			}
		}
	}
}

void func_61()//Position - 0x30FE
{
	if (!PED::IS_PED_INJURED(iLocal_218) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
	{
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_218, iLocal_226, -1, false, false) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_218, iLocal_226, 0, false, false))
		{
			TASK::TASK_SMART_FLEE_COORD(iLocal_218, Local_217, 1000f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_218, true);
			iLocal_257 = 1;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_219) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
	{
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_219, iLocal_226, -1, false, false) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_219, iLocal_226, 0, false, false))
		{
			TASK::TASK_SMART_FLEE_COORD(iLocal_219, Local_217, 1000f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_219, true);
			iLocal_257 = 1;
		}
	}
}

void func_62()//Position - 0x31AE
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
	{
		Local_245 = { ENTITY::GET_ENTITY_COORDS(iLocal_218, true) };
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
	{
		Local_245 = { ENTITY::GET_ENTITY_COORDS(iLocal_219, true) };
	}
	Local_245.f_2 = (Local_245.f_2 - 0.11f);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
	{
		SYSTEM::SETTIMERA(0);
		if (!bLocal_48)
		{
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
			{
				__LIB_36__.func_42(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
			{
				__LIB_0__.func_202(&uLocal_52, 5);
				__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				__LIB_36__.func_42(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			OBJECT::CREATE_MONEY_PICKUPS(OBJECT::GET_SAFE_PICKUP_COORDS(Local_245, 1.2f, 1.5f), 1000, 5, 0);
			iLocal_253 = 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_219, iLocal_226, false))
		{
			SYSTEM::SETTIMERA(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
			{
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
			{
			}
			iLocal_253 = 1;
		}
	}
}

void func_64()//Position - 0x3324
{
	if (!bLocal_256)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.29956f, 2650.5967f, 42.847225f, 297.89813f, 2617.9683f, 53.641197f, 49.6875f, 1);
		if (iLocal_260)
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				if (PED::IS_PED_JACKING(iLocal_218))
				{
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				if (PED::IS_PED_JACKING(iLocal_219))
				{
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					__LIB_0__.func_202(&uLocal_52, 5);
					__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
		}
		if (iLocal_239 == 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_218) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_218, iLocal_226, false))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_218, 2, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_226, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_218, iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
					PED::SET_PED_KEEP_TASK(iLocal_218, true);
					bLocal_256 = true;
				}
			}
		}
		if (iLocal_239 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_219) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_219, iLocal_226, false))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_219, 2, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_226, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_219, iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
					PED::SET_PED_KEEP_TASK(iLocal_219, true);
					bLocal_256 = true;
				}
			}
		}
		if (iLocal_239 == 3)
		{
			if ((!PED::IS_PED_INJURED(iLocal_219) && !PED::IS_PED_INJURED(iLocal_218)) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_218, iLocal_226, false) && PED::IS_PED_IN_VEHICLE(iLocal_219, iLocal_226, false))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_218, 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_219, 2, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_226, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_218, iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, false);
					PED::SET_PED_KEEP_TASK(iLocal_218, true);
					bLocal_256 = true;
				}
			}
			if (PED::IS_PED_INJURED(iLocal_218) && !PED::IS_PED_INJURED(iLocal_219))
			{
				__LIB_0__.func_202(&uLocal_52, 5);
				TASK::TASK_ENTER_VEHICLE(iLocal_219, iLocal_226, -1, -1, 2f, 8, 0);
				iLocal_239 = 2;
			}
			if (PED::IS_PED_INJURED(iLocal_219) && !PED::IS_PED_INJURED(iLocal_218))
			{
				__LIB_0__.func_202(&uLocal_52, 6);
				TASK::TASK_ENTER_VEHICLE(iLocal_218, iLocal_226, -1, -1, 2f, 8, 0);
				iLocal_239 = 1;
			}
		}
		if (iLocal_239 == 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				TASK::CLEAR_PED_TASKS(iLocal_218);
				TASK::TASK_SMART_FLEE_COORD(iLocal_218, Local_217, 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_218, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				TASK::CLEAR_PED_TASKS(iLocal_219);
				TASK::TASK_SMART_FLEE_COORD(iLocal_219, Local_217, 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_219, true);
			}
			bLocal_256 = true;
		}
	}
}

void func_65()//Position - 0x362E
{
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_222[0], false) && ENTITY::IS_ENTITY_DEAD(iLocal_222[1], false)) && ENTITY::IS_ENTITY_DEAD(iLocal_222[2], false))
	{
		__LIB_0__.func_202(&uLocal_52, 4);
		iLocal_246 = 1;
		iLocal_238 = 1;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_241, joaat("PLAYER"));
		if (!bLocal_48 && bLocal_47)
		{
			HUD::REMOVE_BLIP(&iLocal_265);
			HUD::REMOVE_BLIP(&iLocal_266);
		}
		if (!bLocal_48)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
			{
				__LIB_35__.func_901(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
			{
				__LIB_0__.func_202(&uLocal_52, 5);
				__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				__LIB_35__.func_901(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_226, false))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_226);
			if (!PED::IS_PED_INJURED(iLocal_218) && !PED::IS_PED_HURT(iLocal_218))
			{
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_218, true, true, true, false);
				iLocal_239 = 1;
				TASK::CLEAR_PED_TASKS(iLocal_218);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, true);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_218);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_226);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_226, -1, -1, 2f, 9, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_218, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				if (!PED::IS_PED_INJURED(iLocal_219) && !PED::IS_PED_HURT(iLocal_219))
				{
					TASK::CLEAR_PED_TASKS(iLocal_219);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, true);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_219);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_226);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, true);
					TASK::TASK_ENTER_VEHICLE(iLocal_219, iLocal_226, -1, 0, 2f, 1, 0);
					iLocal_239 = 3;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_219))
			{
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_219, true, true, true, false);
				TASK::CLEAR_PED_TASKS(iLocal_219);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, true);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_219);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_226);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_226, -1, -1, 2f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_219, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				iLocal_239 = 2;
			}
		}
		else
		{
			iLocal_239 = 4;
		}
	}
}

void func_67(int iParam0, var uParam1, int iParam2, float fParam3)//Position - 0x3878
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					Var0 = { -1f, 1f, 0.5f };
					Var1 = { -0.5f, 0.75f, 0.05f };
					iVar2 = 0;
					break;
				case 1:
					Var0 = { 1f, 1f, 0.5f };
					Var1 = { 0.5f, 0.75f, 0.05f };
					iVar2 = 1;
					break;
				case 4:
					Var0 = { -1f, -1f, 0.5f };
					Var1 = { -0.5f, -0.75f, 0.05f };
					iVar2 = 2;
					break;
				case 5:
					Var0 = { 1f, -1f, 0.5f };
					Var1 = { 0.5f, -0.75f, 0.05f };
					iVar2 = 3;
					break;
			}
			if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0), fParam3, true, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0), fParam3, false, true))
			{
				switch (*uParam1)
				{
					case 0:
						VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, iParam2, false, 1000f);
						*uParam1++;
						break;
					case 1:
						VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, iVar2);
						*uParam1++;
						break;
					case 2:
						*uParam1++;
						break;
					case 3:
						*uParam1++;
						break;
					case 4:
						VEHICLE::SET_VEHICLE_DAMAGE(iParam0, Var1, 150f, 50f, true);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_68(int iParam0)//Position - 0x39F6
{
	if ((!PED::IS_PED_INJURED(iParam0) && !__LIB_0__.func_75()) && SYSTEM::TIMERA() > 12000)
	{
		__LIB_0__.func_203(&uLocal_52, 4, iParam0, "RECSBCop1", 0, 1);
		if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
		{
			__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_69()//Position - 0x3A62
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_218, PLAYER::PLAYER_PED_ID(), true))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("PLAYER"));
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				TASK::TASK_COMBAT_PED(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_218, true);
				PED::REGISTER_TARGET(iLocal_218, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_218, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				TASK::TASK_COMBAT_PED(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_219, true);
				PED::REGISTER_TARGET(iLocal_219, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_219, true);
			}
			if (!bLocal_47)
			{
				__LIB_6__.func_771();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_222[0]))
				{
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					__LIB_0__.func_202(&uLocal_52, 4);
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					__LIB_0__.func_202(&uLocal_52, 4);
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_218))
		{
			if (!func_72() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_218) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_218))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_218, 20f, 20f, 20f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_218, PLAYER::PLAYER_PED_ID()))
					{
						iLocal_230++;
						if (!iLocal_231 && !__LIB_11__.func_869("recsb_theaim"))
						{
							__LIB_6__.func_771();
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(iLocal_218))
							{
								__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!PED::IS_PED_INJURED(iLocal_219))
							{
								__LIB_0__.func_202(&uLocal_52, 5);
								__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
								__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_231 = 1;
						}
						if (iLocal_230 > 45)
						{
							bLocal_48 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_47)
							{
								__LIB_6__.func_771();
								SYSTEM::WAIT(0);
								if (!PED::IS_PED_INJURED(iLocal_222[0]))
								{
									__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
									__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_222[1]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									__LIB_0__.func_202(&uLocal_52, 4);
									__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
									__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_222[2]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									__LIB_0__.func_202(&uLocal_52, 4);
									__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
									__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_231 || iLocal_232)
				{
					iLocal_230 = 45;
				}
				else
				{
					iLocal_230 = 0;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_219, PLAYER::PLAYER_PED_ID(), true))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("PLAYER"));
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				TASK::TASK_COMBAT_PED(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_219, true);
				PED::REGISTER_TARGET(iLocal_219, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_219, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				TASK::TASK_COMBAT_PED(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_218, true);
				PED::REGISTER_TARGET(iLocal_218, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_218, true);
			}
			if (!bLocal_47)
			{
				__LIB_6__.func_771();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_222[0]))
				{
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					__LIB_0__.func_202(&uLocal_52, 4);
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					__LIB_0__.func_202(&uLocal_52, 4);
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_219))
		{
			if (!func_72() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_219) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_219))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_219, 20f, 20f, 20f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_219, PLAYER::PLAYER_PED_ID()))
					{
						if ((!iLocal_232 && !PED::IS_PED_INJURED(iLocal_218)) && !__LIB_11__.func_869("recsb_theaim"))
						{
							__LIB_6__.func_771();
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(iLocal_218))
							{
								__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!PED::IS_PED_INJURED(iLocal_219))
							{
								__LIB_0__.func_202(&uLocal_52, 5);
								__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
								__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_232 = 1;
						}
						iLocal_229++;
						if (iLocal_229 > 45)
						{
							bLocal_48 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_47)
							{
								__LIB_6__.func_771();
								SYSTEM::WAIT(0);
								if (!PED::IS_PED_INJURED(iLocal_222[0]))
								{
									__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
									__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_222[1]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									__LIB_0__.func_202(&uLocal_52, 4);
									__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
									__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_222[2]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									__LIB_0__.func_202(&uLocal_52, 4);
									__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
									__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_231 || iLocal_232)
				{
					iLocal_230 = 45;
				}
				else
				{
					iLocal_230 = 0;
				}
			}
		}
	}
	if (!iLocal_261 && bLocal_234)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_218, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_218, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_261 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_219))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_219, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_219, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					__LIB_0__.func_202(&uLocal_52, 5);
					__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_261 = 1;
				}
			}
		}
	}
	if (!iLocal_262 && bLocal_235)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_218, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_218, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_262 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_219))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_219, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_219, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					__LIB_0__.func_202(&uLocal_52, 5);
					__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_262 = 1;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_226, PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_226, false)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_226, joaat("WEAPON_STICKYBOMB"), -1))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("PLAYER"));
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				TASK::TASK_COMBAT_PED(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_218, true);
				PED::REGISTER_TARGET(iLocal_218, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_218, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				TASK::TASK_COMBAT_PED(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_219, true);
				PED::REGISTER_TARGET(iLocal_219, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_219, true);
			}
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_226, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_218))
					{
						__LIB_35__.func_901(&uLocal_52, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						TASK::TASK_ENTER_VEHICLE(iLocal_218, iLocal_226, -1, -1, 2f, 524296, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_219))
					{
						__LIB_0__.func_202(&uLocal_52, 5);
						__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
						__LIB_35__.func_901(&uLocal_52, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						TASK::TASK_ENTER_VEHICLE(iLocal_219, iLocal_226, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_47)
				{
					if (!PED::IS_PED_INJURED(iLocal_222[0]))
					{
						__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
						__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222[1]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						__LIB_0__.func_202(&uLocal_52, 4);
						__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
						__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222[2]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						__LIB_0__.func_202(&uLocal_52, 4);
						__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
						__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_72()//Position - 0x44DE
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("lazer")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("buzzard")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73()//Position - 0x452B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!bLocal_258)
	{
		PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iLocal_244);
		if (ENTITY::IS_ENTITY_A_PED(iLocal_244))
		{
			iLocal_224 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_244);
		}
		if ((iLocal_224 == iLocal_222[0] || iLocal_224 == iLocal_222[1]) || iLocal_224 == iLocal_222[2])
		{
			if (!PED::IS_PED_INJURED(iLocal_224))
			{
				if (!func_72() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_224) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_224))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_224, 20f, 20f, 20f, false, true, 0))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_224, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_224, 8f, 8f, 8f, false, true, 0))
							{
								if (!bLocal_259)
								{
									if (!__LIB_11__.func_869("recsb_coppon"))
									{
										if (!PED::IS_PED_INJURED(iLocal_222[0]))
										{
											__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
											__LIB_6__.func_771();
											SYSTEM::WAIT(0);
											__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
										else if (!PED::IS_PED_INJURED(iLocal_222[1]))
										{
											AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											__LIB_0__.func_202(&uLocal_52, 4);
											__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
											__LIB_6__.func_771();
											SYSTEM::WAIT(0);
											__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
										else if (!PED::IS_PED_INJURED(iLocal_222[2]))
										{
											AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											__LIB_0__.func_202(&uLocal_52, 4);
											__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
											__LIB_6__.func_771();
											SYSTEM::WAIT(0);
											__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
									}
								}
								iLocal_228++;
								if (iLocal_228 > 40)
								{
									bLocal_258 = true;
									bLocal_47 = true;
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_244, false))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("PLAYER"));
										iVar0 = 0;
										while (iVar0 < iLocal_222)
										{
											if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
											{
												TASK::TASK_COMBAT_PED(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
												PED::REGISTER_TARGET(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID());
												PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar0], true);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_259)
					{
						iLocal_228 = 40;
					}
					else
					{
						iLocal_228 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_222)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_222[iVar1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222[iVar1], PLAYER::PLAYER_PED_ID(), true))
			{
				bLocal_47 = true;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222[iVar1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				{
					bLocal_47 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_258)
	{
	}
	if (iLocal_240)
	{
		if (SYSTEM::TIMERB() > 6000)
		{
			if (SYSTEM::TIMERB() > 6000 && SYSTEM::TIMERB() < 7000)
			{
				FIRE::STOP_FIRE_IN_RANGE(330.1744f, 2629.2375f, 43.5056f, 30f);
			}
			if (!iLocal_236)
			{
				if (bLocal_48)
				{
					if (!__LIB_0__.func_75())
					{
						if (!PED::IS_PED_INJURED(iLocal_222[0]))
						{
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							__LIB_0__.func_202(&uLocal_52, 4);
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							__LIB_0__.func_202(&uLocal_52, 4);
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_236 = 1;
					}
				}
				else if (!iLocal_238)
				{
					if (!__LIB_0__.func_75())
					{
						if (!PED::IS_PED_INJURED(iLocal_222[0]))
						{
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							__LIB_0__.func_202(&uLocal_52, 4);
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							__LIB_0__.func_202(&uLocal_52, 4);
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_236 = 1;
					}
				}
			}
			if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Vector(43.5005f, 2626.29f, 326.6079f) - Vector(50f, 50f, 50f), Vector(43.5005f, 2626.29f, 326.6079f) + Vector(50f, 50f, 50f), false, true))
			{
				bLocal_47 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_226, false))
				{
					bLocal_47 = true;
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_222[0]))
					{
						__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
						__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222[1]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						__LIB_0__.func_202(&uLocal_52, 4);
						__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
						__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222[2]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						__LIB_0__.func_202(&uLocal_52, 4);
						__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
						__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_222)
		{
			if (!PED::IS_PED_INJURED(iLocal_222[iVar1]))
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[0]) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[1]))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_222[iVar1], PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_222[iVar1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
					{
						bLocal_47 = true;
						__LIB_6__.func_771();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_222[0]))
						{
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							__LIB_0__.func_202(&uLocal_52, 4);
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							__LIB_0__.func_202(&uLocal_52, 4);
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_222[iVar1]))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_242, joaat("PLAYER"));
					bLocal_47 = true;
				}
			}
			iVar1++;
		}
		if (!PED::IS_PED_INJURED(iLocal_222[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_225[2], false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_222[1], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_222[1]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_225[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_225)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[iVar1], false))
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[iVar1], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_225[iVar1], false)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_225[iVar1], joaat("WEAPON_STICKYBOMB"), -1))
			{
				bLocal_47 = true;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[iVar1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				{
					bLocal_47 = true;
				}
			}
		}
		iVar1++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_227, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_227, PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_227, false))
		{
			bLocal_47 = true;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iLocal_240)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, iLocal_226))
					{
						bLocal_47 = true;
						__LIB_6__.func_771();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_222[0]))
						{
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							__LIB_0__.func_202(&uLocal_52, 4);
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							__LIB_0__.func_202(&uLocal_52, 4);
							__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_225)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[iVar1], false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, iLocal_225[iVar1]))
					{
						bLocal_47 = true;
					}
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_227, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, iLocal_227))
				{
					bLocal_47 = true;
				}
			}
		}
	}
	if (bLocal_47 || bLocal_258)
	{
		SYSTEM::SETTIMERA(0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(350f);
		bLocal_47 = true;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_226, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_226, false))
		{
		}
		else
		{
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			if (!iLocal_240)
			{
				if (PED::IS_PED_INJURED(iLocal_218) && !PED::IS_PED_INJURED(iLocal_219))
				{
					__LIB_0__.func_202(&uLocal_52, 5);
					__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_222[0]))
				{
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					__LIB_0__.func_202(&uLocal_52, 4);
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					__LIB_0__.func_202(&uLocal_52, 4);
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[0]))
			{
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				__LIB_0__.func_202(&uLocal_52, 4);
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				__LIB_0__.func_202(&uLocal_52, 4);
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("PLAYER"));
		if (!__LIB_35__.func_175())
		{
			SYSTEM::SETTIMERA(0);
			if (!__LIB_35__.func_175())
			{
				__LIB_40__.func_733(1);
			}
		}
		if (iLocal_240)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_222)
			{
				if (!PED::IS_PED_INJURED(iLocal_222[iVar1]))
				{
					TASK::TASK_COMBAT_PED(iLocal_222[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_222[iVar1], true);
					PED::REGISTER_TARGET(iLocal_222[iVar1], PLAYER::PLAYER_PED_ID());
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_222[iVar1], true, true, true, false);
					PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar1], true);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_222[iVar1], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[iVar1], 50, true);
				}
				iVar1++;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_220))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_220, PLAYER::PLAYER_PED_ID(), true))
		{
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("PLAYER"));
			bLocal_47 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_221))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_221, PLAYER::PLAYER_PED_ID(), true))
		{
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("PLAYER"));
			bLocal_47 = true;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		bLocal_47 = true;
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("PLAYER"));
	}
}

void func_84()//Position - 0x577D
{
	int iVar0;
	if ((!PED::IS_PED_INJURED(iLocal_222[0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iLocal_218))
	{
	}
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 220.6075f, 2615.1453f, 35.8465f, 440.8339f, 2684.2297f, 72.6324f, 183.125f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(Local_217, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[iVar0], true, iLocal_241);
				if (!HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
				{
					iLocal_267[iVar0] = __LIB_6__.func_850(iLocal_222[iVar0], 0, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_267[iVar0], false);
				}
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false) || (!PED::IS_PED_INJURED(iLocal_218) && !iLocal_249))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_218, true, iLocal_242);
			iLocal_265 = __LIB_6__.func_850(iLocal_218, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_265, false);
			iLocal_248 = 0;
			iLocal_249 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false) || (!PED::IS_PED_INJURED(iLocal_219) && !iLocal_250))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_219, true, iLocal_242);
			iLocal_266 = __LIB_6__.func_850(iLocal_219, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_266, false);
			iLocal_247 = 0;
			iLocal_250 = 1;
		}
		SYSTEM::SETTIMERA(0);
		if (!__LIB_35__.func_175())
		{
			__LIB_40__.func_733(1);
		}
	}
}

void func_88()//Position - 0x5A32
{
	int iVar0;
	if (!iLocal_252)
	{
		if (!bLocal_47 && !iLocal_240)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, false, true, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_222)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_267[iVar0], true);
					}
					iVar0++;
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_265))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_265, true);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_266))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_266, true);
				}
				if (!PED::IS_PED_INJURED(iLocal_222[0]))
				{
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					__LIB_0__.func_202(&uLocal_52, 4);
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					__LIB_0__.func_202(&uLocal_52, 4);
					__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_252 = 1;
			}
		}
	}
	if ((__LIB_35__.func_175() && !iLocal_238) && !iLocal_240)
	{
		if (iLocal_255 == 0 && !__LIB_0__.func_75())
		{
			SYSTEM::SETTIMERA(0);
			if (__LIB_18__.func_173() == 0)
			{
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (__LIB_18__.func_173() == 1)
			{
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (__LIB_18__.func_173() == 2)
			{
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_255++;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_255 == 1 && !__LIB_0__.func_75())
		{
			SYSTEM::SETTIMERA(0);
			if (!PED::IS_PED_INJURED(iLocal_222[0]))
			{
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				__LIB_0__.func_202(&uLocal_52, 4);
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				__LIB_0__.func_202(&uLocal_52, 4);
				__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_255++;
			SYSTEM::SETTIMERA(0);
		}
		if ((iLocal_255 == 2 && SYSTEM::TIMERA() > 2000) && !__LIB_0__.func_75())
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_219))
			{
				__LIB_0__.func_202(&uLocal_52, 5);
				__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
		if ((iLocal_255 == 3 && SYSTEM::TIMERA() > 2000) && !__LIB_0__.func_75())
		{
			if (!bLocal_48)
			{
				if (!iLocal_237)
				{
					if (!PED::IS_PED_INJURED(iLocal_218))
					{
						__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_219))
					{
						__LIB_0__.func_202(&uLocal_52, 5);
						__LIB_0__.func_203(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
						__LIB_35__.func_536(&uLocal_52, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_237 = 1;
				}
			}
			if (!bLocal_47)
			{
				func_89(&(iLocal_222[0]), "recsb_copclo");
				func_89(&(iLocal_222[1]), "recsb_copclo");
				func_89(&(iLocal_222[2]), "recsb_copclo");
			}
		}
		if (iLocal_255 == 4 && SYSTEM::TIMERA() > 5000)
		{
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
	}
}

void func_89(var uParam0, char* sParam1)//Position - 0x5E49
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0, 4f, 4f, 4f, false, true, 0))
		{
			if (!bLocal_47)
			{
				__LIB_0__.func_203(&uLocal_52, 4, *uParam0, "RECSBCop1", 0, 1);
				__LIB_35__.func_536(&uLocal_52, "recsbau", sParam1, 4, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 10000, 48, 4);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
	}
}

void func_90()//Position - 0x5EB3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_222)
	{
		if (PED::IS_PED_INJURED(iLocal_222[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_267[iVar0]));
			}
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_218))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_265))
		{
			HUD::REMOVE_BLIP(&iLocal_265);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_219))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_266))
		{
			HUD::REMOVE_BLIP(&iLocal_266);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_225)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[iVar0], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_225[iVar0], false))
			{
				VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[iVar0], false);
			}
		}
		iVar0++;
	}
	if (bLocal_48)
	{
		if (!iLocal_50)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("PLAYER"));
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_265))
				{
					HUD::REMOVE_BLIP(&iLocal_265);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_265))
				{
					iLocal_265 = __LIB_6__.func_850(iLocal_218, 1, 145);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_218, true);
				}
				TASK::TASK_COMBAT_PED(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_218, true);
				PED::REGISTER_TARGET(iLocal_218, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_218, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_266))
				{
					HUD::REMOVE_BLIP(&iLocal_266);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_266))
				{
					iLocal_266 = __LIB_6__.func_850(iLocal_219, 1, 145);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_219, true);
				}
				TASK::TASK_COMBAT_PED(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_219, true);
				PED::REGISTER_TARGET(iLocal_219, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_219, true);
			}
			iLocal_50 = 1;
		}
		if (bLocal_47)
		{
			if (!iLocal_51)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("PLAYER"));
				iVar0 = 0;
				while (iVar0 < iLocal_222)
				{
					if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_222[iVar0], true);
						if (HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
						{
							HUD::REMOVE_BLIP(&(iLocal_267[iVar0]));
						}
						TASK::TASK_COMBAT_PED(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
						PED::REGISTER_TARGET(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID());
						PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar0], true);
					}
					iVar0++;
				}
				iLocal_51 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_222[iVar0], false);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_47)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_218, false);
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_219, false);
			}
			iLocal_49 = 1;
		}
		if (!iLocal_51)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("PLAYER"));
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_222[iVar0], true);
					HUD::REMOVE_COP_BLIP_FROM_PED(iLocal_222[iVar0]);
					if (HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_267[iVar0]));
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
					{
						iLocal_267[iVar0] = __LIB_6__.func_850(iLocal_222[iVar0], 1, 145);
					}
					TASK::TASK_COMBAT_PED(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
					PED::REGISTER_TARGET(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID());
					PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar0], true);
				}
				iVar0++;
			}
			iLocal_51 = 1;
		}
	}
}

void func_91()//Position - 0x61F2
{
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Ranger_01"));
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_GenStreet_01"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Paramedic_01"));
	STREAMING::REQUEST_MODEL(joaat("sheriff"));
	STREAMING::REQUEST_MODEL(joaat("phoenix"));
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Ranger_01")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_GenStreet_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Paramedic_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("sheriff"))) && STREAMING::HAS_MODEL_LOADED(joaat("phoenix")))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phoenix"), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.49f, 2630.83f, 335.22f) - Vector(20f, 50f, 50f), Vector(44.49f, 2630.83f, 335.22f) + Vector(20f, 50f, 50f), false, true, true, true);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(418.29956f, 2650.5967f, 42.847225f, 297.89813f, 2617.9683f, 53.641197f, 49.6875f, false, false, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(43.4932f, 2612.6938f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.6938f, 328.0555f) + Vector(10f, 10f, 10f), false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(328.0555f, 2612.6938f, 43.4932f, 5f, false, false, false, false, false, false, 0);
		iLocal_226 = VEHICLE::CREATE_VEHICLE(joaat("phoenix"), 326.78f, 2626.56f, 43.5081f, 45.21f, true, true, false);
		iLocal_225[0] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 314.1008f, 2641.6704f, 43.5055f, 258.9436f, true, true, false);
		iLocal_225[1] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 330.7097f, 2646.9126f, 43.685f, 120.9436f, true, true, false);
		iLocal_225[2] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 321.4496f, 2649.3877f, 43.5706f, 105.9436f, true, true, false);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_225[2], true);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_225[1], true);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_225[2], true);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_225[1], true);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[2], true);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[1], true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_226, true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_225[1], true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_225[2], true);
		iLocal_218 = PED::CREATE_PED(19, joaat("A_M_Y_GenStreet_01"), 321.31f, 2615.66f, 43.4963f, 346f, true, true);
		iLocal_219 = PED::CREATE_PED(19, joaat("A_M_Y_GenStreet_01"), 326.25f, 2624.51f, 43.4846f, 341f, true, true);
		iLocal_223 = PED::CREATE_PED(6, joaat("S_M_Y_Ranger_01"), 325.3731f, 2631.1597f, 43.5248f, 87f, true, true);
		iLocal_222[0] = PED::CREATE_PED(6, joaat("S_M_Y_Ranger_01"), 310.6203f, 2642.8538f, 43.5173f, 226f, true, true);
		iLocal_222[1] = PED::CREATE_PED(6, joaat("S_M_Y_Ranger_01"), 319.5652f, 2650.067f, 43.5411f, 189f, true, true);
		iLocal_222[2] = PED::CREATE_PED(6, joaat("S_M_Y_Ranger_01"), 324.0396f, 2650.9636f, 43.5983f, 214f, true, true);
		PED::SET_PED_NAME_DEBUG(iLocal_222[0], "ped_cops[0]");
		PED::SET_PED_NAME_DEBUG(iLocal_222[1], "ped_cops[1]");
		PED::SET_PED_NAME_DEBUG(iLocal_222[2], "ped_cops[2]");
		PED::SET_PED_USING_ACTION_MODE(iLocal_222[0], true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_222[1], true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_222[2], true, -1, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_219, 326.25f, 2624.51f, 43.4846f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_218, 321.31f, 2615.66f, 43.4963f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_222[0], 310.6203f, 2642.8538f, 43.5173f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_222[1], 319.5652f, 2650.067f, 43.5411f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_222[2], 324.0396f, 2650.9636f, 43.5983f, 3.5f, false, false);
		TASK::TASK_STAY_IN_COVER(iLocal_222[0]);
		TASK::TASK_STAY_IN_COVER(iLocal_222[1]);
		TASK::TASK_STAY_IN_COVER(iLocal_222[2]);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[0], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[1], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[2], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[0], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[1], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[2], 1, true);
		PED::SET_PED_ACCURACY(iLocal_222[0], 13);
		PED::SET_PED_ACCURACY(iLocal_222[1], 13);
		PED::SET_PED_ACCURACY(iLocal_222[2], 13);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_219, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_218, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_219, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_218, 1, true);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[0], 0, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[0], 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[1], 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[1], 0, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[2], 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[2], 0, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_226, 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_226, 0, false, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_226, true, 1);
		PED::ADD_RELATIONSHIP_GROUP("robbers", &iLocal_241);
		PED::ADD_RELATIONSHIP_GROUP("cops", &iLocal_242);
		ENTITY::SET_ENTITY_HEALTH(iLocal_223, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_219, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_219, false, iLocal_242);
		ENTITY::SET_ENTITY_HEALTH(iLocal_219, 300, 0);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_219, joaat("WEAPON_PISTOL"), 200, true, true);
		PED::SET_PED_SEEING_RANGE(iLocal_219, 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_219, 100f);
		TASK::TASK_GUARD_CURRENT_POSITION(iLocal_219, 35f, 35f, true);
		PED::SET_PED_ACCURACY(iLocal_219, 13);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_218, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_218, false, iLocal_242);
		ENTITY::SET_ENTITY_HEALTH(iLocal_218, 300, 0);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_218, joaat("WEAPON_PISTOL"), 200, true, true);
		PED::SET_PED_SEEING_RANGE(iLocal_218, 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_218, 100f);
		TASK::TASK_GUARD_CURRENT_POSITION(iLocal_218, 35f, 35f, true);
		PED::SET_PED_ACCURACY(iLocal_218, 13);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[0], false, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[1], false, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[2], false, iLocal_241);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_222[0], joaat("WEAPON_PUMPSHOTGUN"), 200, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_222[1], joaat("WEAPON_PISTOL"), 200, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_222[2], joaat("WEAPON_PUMPSHOTGUN"), 200, true, true);
		PED::SET_PED_SEEING_RANGE(iLocal_222[0], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_222[0], 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_222[1], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_222[1], 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_222[2], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_222[2], 100f);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222[0], iLocal_242);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222[1], iLocal_242);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222[2], iLocal_242);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_242, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_242);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_242, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_241, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, iLocal_241);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_241);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, iLocal_242);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_222[0], iLocal_218, 3000, false);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_222[1], iLocal_218, 3000, false);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_222[2], iLocal_218, 3000, false);
		if (__LIB_18__.func_173() == 0)
		{
			__LIB_0__.func_203(&uLocal_52, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (__LIB_18__.func_173() == 1)
		{
			__LIB_0__.func_203(&uLocal_52, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (__LIB_18__.func_173() == 2)
		{
			__LIB_0__.func_203(&uLocal_52, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		__LIB_0__.func_203(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
		__LIB_0__.func_203(&uLocal_52, 5, iLocal_218, "RECSBRobber1", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_218, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_218, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_45 = 1;
	}
}

void func_148()//Position - 0x9C32
{
	int iVar0;
	if (iLocal_46)
	{
		HUD::REMOVE_BLIP(&iLocal_265);
		HUD::REMOVE_BLIP(&iLocal_266);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.29956f, 2650.5967f, 42.847225f, 297.89813f, 2617.9683f, 53.641197f, 49.6875f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(43.4932f, 2612.6938f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.6938f, 328.0555f) + Vector(10f, 10f, 10f), true, true);
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222[iVar0], false);
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_STAY_IN_COVER(iLocal_222[iVar0]);
					PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_218, 317, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, false);
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_226, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_218, iLocal_226, false))
					{
						VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_226, true);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_219, 317, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, false);
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_226, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_219, iLocal_226, false))
					{
						VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_226, true);
					}
				}
			}
			iVar0++;
		}
	}
	__LIB_41__.func_466(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

