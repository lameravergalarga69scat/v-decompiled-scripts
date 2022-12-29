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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	bool bLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100[120] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	char* sLocal_148 = NULL;
	char* sLocal_149 = NULL;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	char* sLocal_152 = NULL;
	char* sLocal_153 = NULL;
	char* sLocal_154 = NULL;
	char* sLocal_155 = NULL;
	char* sLocal_156 = NULL;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_163 = NULL;
	int iLocal_164[5] = { 0, 0, 0, 0, 0 };
	int iLocal_165[3] = { 0, 0, 0 };
	int* iLocal_166 = NULL;
	int iLocal_167[3] = { 0, 0, 0 };
	int iLocal_168[1] = { 0 };
	int* iLocal_169 = NULL;
	int* iLocal_170 = NULL;
	int* iLocal_171 = NULL;
	int* iLocal_172 = NULL;
	int iLocal_173[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_174 = 0;
	int iLocal_175[2] = { 0, 0 };
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	var uLocal_194 = 4;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 4;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 4;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 4;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 4;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 4;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 4;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	struct<6> Local_238 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	var uLocal_240 = 1092616192;
	var uLocal_241 = 1101004800;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 3;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	struct<12> Local_258 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	struct<12> Local_261 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	struct<12> Local_264 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	struct<12> Local_267 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	struct<21> Local_270[7];
	struct<21> Local_271[4];
	struct<21> Local_272[1];
	struct<21> Local_273[1];
	struct<21> Local_274[4];
	struct<21> Local_275[4];
	struct<21> Local_276[4];
	struct<21> Local_277[3];
	struct<21> Local_278[4];
	struct<21> Local_279[1];
	struct<21> Local_280[3];
	struct<21> Local_281[3];
	struct<21> Local_282[3];
	struct<21> Local_283[1];
	struct<21> Local_284[1];
	struct<21> Local_285[3];
	struct<21> Local_286[4];
	struct<21> Local_287[4];
	struct<21> Local_288[3];
	struct<21> Local_289[6];
	struct<21> Local_290[1];
	struct<3> Local_291 = { 0, 0, 0 } ;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	struct<10> Local_294[16];
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	struct<20> Local_299 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
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
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_49 = { -727.5588f, 5313.5103f, 71.498f };
	Local_50 = { -716.7578f, 5319.358f, 70.8262f };
	Local_51 = { -718.4451f, 5304.8486f, 71.6183f };
	Local_52 = { -715.2372f, 5317.78f, 70.6856f };
	Local_53 = { -719.1467f, 5308.008f, 71.6904f };
	Local_54 = { -540.0828f, 5425.959f, 62.3495f };
	Local_55 = { -523.094f, 5309.081f, 79.2679f };
	Local_56 = { -579.0994f, 5246.155f, 69.4693f };
	Local_57 = { -654.8719f, 5241.6436f, 75.2173f };
	Local_58 = { -440.6452f, 5429.001f, 76.283f };
	Local_59 = { -545.1334f, 5428.288f, 61.8625f };
	Local_60 = { -555.7971f, 5214.834f, 81.4045f };
	Local_61 = { -71.2345f, -1466.6842f, 30.9867f };
	Local_62 = { -732.8705f, 5317.547f, 71.9049f };
	Local_63 = { 0f, 0f, 0f };
	Local_64 = { 0f, 0f, 0f };
	Local_65 = { 0f, 0f, 0f };
	iLocal_105 = -1;
	iLocal_106 = -1;
	fLocal_139 = 261.2129f;
	fLocal_140 = 15f;
	fLocal_141 = 221.4874f;
	fLocal_142 = 283f;
	fLocal_143 = 104.2f;
	fLocal_144 = 163f;
	fLocal_145 = -14.1f;
	fLocal_146 = 261.1234f;
	fLocal_147 = 0f;
	sLocal_148 = "move_injured_generic";
	sLocal_149 = "missfra2";
	sLocal_151 = "fra2_001";
	sLocal_152 = "fra2_002";
	sLocal_153 = "fra2_003";
	sLocal_154 = "fratwoWP0";
	sLocal_155 = "fratwo";
	sLocal_156 = "pickup_object";
	iLocal_176 = joaat("bulldozer");
	iLocal_177 = joaat("G_M_Y_BallaOrig_01");
	iLocal_178 = joaat("bison");
	iLocal_179 = joaat("felon");
	iLocal_180 = joaat("prop_woodpile_01b");
	iLocal_181 = joaat("prop_skip_01a");
	iLocal_182 = joaat("prop_weed_pallet");
	iLocal_185 = 1;
	iLocal_186 = 2;
	iLocal_188 = 1;
	iLocal_190 = 1;
	iLocal_191 = 1;
	iLocal_192 = 1;
	iLocal_193 = 3;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_939();
		iLocal_184 = 1;
		func_924();
	}
	func_918();
	bLocal_68 = func_916();
	if (!bLocal_68)
	{
		__LIB_16__::func_309(1, 0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_LamarDown", 0);
		if (bLocal_68)
		{
			if (iLocal_184 == 1)
			{
				bLocal_68 = false;
			}
		}
		func_914();
		func_911();
		switch (iLocal_183)
		{
			case 0:
				func_899();
				break;
			case 1:
				func_894();
				break;
			case 2:
				func_879();
				break;
			case 3:
				func_872();
				break;
			case 4:
				func_870();
				break;
			case 5:
				func_777();
				break;
			case 6:
				func_478();
				break;
			case 7:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x335
{
	int iVar0;
	if (iLocal_184 == 4)
	{
		if (func_198())
		{
			if (bLocal_68)
			{
				__LIB_0__::func_427(Local_61, 0f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_61, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 0f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			while (!ENTITY::DOES_ENTITY_EXIST(Local_267.f_0))
			{
				func_192(-72.3909f, -1461.0822f, 31.1151f, 323.4056f);
				SYSTEM::WAIT(0);
			}
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 10000)
			{
				if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && ((!PED::IS_PED_INJURED(Local_267.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_267.f_0)) || PED::IS_PED_INJURED(Local_267.f_0)))
				{
					SYSTEM::SETTIMERA(100000);
				}
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_433(0, -1, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, true, false, false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			iLocal_101 = 0;
			iLocal_184 = 0;
		}
	}
	if (iLocal_184 == 0)
	{
		CUTSCENE::REQUEST_CUTSCENE("FRA_2_EXT", 8);
		func_178("FRA_2_EXT");
		if (!__LIB_13__::func_755(&Local_238, 1) && __LIB_0__::func_90())
		{
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_START_EVENT(4);
			if (!PED::IS_PED_INJURED(Local_267.f_0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_267.f_0, "Lamar", 0, 0, 0);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			iLocal_101 = 0;
			iLocal_67 = 0;
			iLocal_184 = 1;
		}
	}
	if (iLocal_184 == 1)
	{
		switch (iLocal_101)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_GO_TO_FRANKLINS"))
					{
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_GO_TO_FRANKLINS");
					}
					iLocal_171 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171, false))
					{
						AUDIO::SET_VEH_RADIO_STATION(iLocal_171, "OFF");
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_171, false, false, false);
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_171, Local_61, 20f, 20f, 10f, false, true, 0) && ENTITY::GET_ENTITY_MODEL(iLocal_171) != __LIB_13__::func_741(1, 1))
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_171, -1, false))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_171, -1, false);
							}
							if (iVar0 == 0 || iVar0 == PLAYER::PLAYER_PED_ID())
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_171, true, false);
								ENTITY::SET_ENTITY_HEADING(iLocal_171, 135.3133f);
								ENTITY::SET_ENTITY_COORDS(iLocal_171, -77.4702f, -1472.7953f, 31.0564f, true, false, false, true);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_171, true);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_171, false, false, false);
								VEHICLE::SET_VEHICLE_LIGHTS(iLocal_171, 1);
							}
						}
					}
					if (!PED::IS_PED_INJURED(Local_267.f_0))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_267.f_0, 1, 0, 0, 0);
					}
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
					MISC::CLEAR_AREA(Local_61, 200f, true, false, false, false);
					func_47(PLAYER::PLAYER_PED_ID(), 14, 158);
					__LIB_16__::func_11();
					iLocal_101++;
				}
				break;
			case 1:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::SETTIMERB(0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_101++;
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				break;
			case 2:
				if (SYSTEM::TIMERB() < 500)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
				}
				__LIB_16__::func_309(1, 0);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (SYSTEM::TIMERB() > 4000 || CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_184 = 2;
				}
				break;
		}
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_184 = 3;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
		}
		if (!PED::IS_PED_INJURED(Local_267.f_0))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_267.f_0, -72.3909f, -1461.0822f, 31.1151f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_267.f_0, 323.4056f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_267.f_0, -83.649f, -1437.1771f, 30.3611f, 1f, -1, 0.25f, 1, 40000f);
				PED::SET_PED_COMPONENT_VARIATION(Local_267.f_0, 1, 1, 0, 0);
			}
		}
	}
	if (iLocal_184 == 2)
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		__LIB_28__::func_239(&iLocal_171, 0);
		func_43(&Local_267, 1);
		__LIB_16__::func_11();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (__LIB_15__::func_806(1) > 50)
		{
			__LIB_15__::func_812(1, 1, 50);
		}
		RECORDING::REPLAY_STOP_EVENT();
		func_2(0);
	}
	if (iLocal_184 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(false);
		CUTSCENE::REMOVE_CUTSCENE();
		iLocal_184 = 1;
	}
}

void func_2(bool bParam0)//Position - 0x79D
{
	if (bParam0)
	{
	}
	__LIB_0__::func_526(0, 0);
	func_924();
}

void func_43(int* iParam0, bool bParam1)//Position - 0x1C88
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
			{
				if ((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*iParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, true, true);
				}
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, true, false);
			}
			if (PED::IS_PED_GROUP_MEMBER(*iParam0, __LIB_0__::func_495()))
			{
				PED::REMOVE_PED_FROM_GROUP(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, true);
		}
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x1DE4
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
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_96(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_47(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_47(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_0__::func_459(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_87(iParam0, iVar0, &iVar7, 0))
	{
		func_50(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_48(iParam0, iVar0, &iVar7))
	{
		func_50(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x1FA0
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_96(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2067
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
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_0__::func_633(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_0__::func_633(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_50(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_0__::func_633(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_14__::func_752(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_50(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_56(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_87(iParam0, iVar10, &iVar4, 1))
							{
								func_50(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_50(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_13__::func_798(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_50(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_50(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_50(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_50(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_50(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_0__::func_633(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_50(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_0__::func_633(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_50(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_50(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_14__::func_635(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_87(iParam0, iVar10, &iVar4, 0))
		{
			func_50(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_48(iParam0, iVar10, &iVar4))
		{
			func_50(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_56(int iParam0, int iParam1, int iParam2)//Position - 0x30A4
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
				if (func_96(iParam0, iParam1, iVar0))
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
				if (func_96(iParam0, iParam1, iVar1))
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

int func_87(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x98B3
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_96(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)//Position - 0xC5EF
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
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
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
				if (!func_96(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_96(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_96(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, iVar2, iVar1, -1) };
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
			if (!func_96(iParam0, 14, uVar8[iVar7]))
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

void func_178(char* sParam0)//Position - 0x20786
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (iVar0 == joaat("fra_2_int"))
		{
			func_179("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
		}
		else if (iVar0 == joaat("fra_2_ig_4_alt1_concat"))
		{
			func_179("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(uLocal_194[0]))
			{
				func_179("Michael", uLocal_194[0], 0, 2);
			}
			if (!PED::IS_PED_INJURED(uLocal_194[2]))
			{
				func_179("Trevor", uLocal_194[2], 0, 2);
			}
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Michael", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Trevor", 2, 0, 0, 0);
		}
		else if (iVar0 == joaat("fra_2_ext"))
		{
			func_179("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_267.f_0))
			{
				func_179("Lamar", Local_267.f_0, 0, 2);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
		}
	}
}

void func_179(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2085E
{
	struct<50> Var0;
	int iVar1;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_180(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_180(int iParam0, var uParam1, int iParam2)//Position - 0x20919
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_17__::func_665(iParam0, &Var2, 0, -1);
	__LIB_17__::func_665(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (__LIB_0__::func_230(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_206(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &iVar1))
			{
				Var3 = { __LIB_13__::func_798(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_231(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_206(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &iVar1))
			{
				Var3 = { __LIB_13__::func_798(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (__LIB_0__::func_230(iVar4, 14, __LIB_0__::func_349(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { __LIB_13__::func_798(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_231(iVar4, 14, __LIB_0__::func_349(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { __LIB_13__::func_798(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = __LIB_0__::func_24(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { __LIB_13__::func_798(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_192(struct<3> Param0, float fParam1)//Position - 0x21676
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_267.f_0))
	{
		if (__LIB_34__::func_231(&Local_267, 19, Param0, fParam1, 1))
		{
			PED::SET_PED_CAN_BE_TARGETTED(Local_267.f_0, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_267.f_0, joaat("PLAYER"));
			PED::SET_PED_CONFIG_FLAG(Local_267.f_0, 182, true);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_267.f_0, 2f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_267.f_0, "FRANKLIN_2_LAMAR_GROUP", 0f);
			__LIB_0__::func_222(&Local_294, 3, Local_267.f_0, "LAMAR", 0, 1);
			if (iLocal_183 == 4)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267.f_0, true);
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_267.f_0, "WORLD_HUMAN_STUPOR", 0, false);
			}
			PED::SET_PED_COMPONENT_VARIATION(Local_267.f_0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_267.f_0, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_267.f_0, 4, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_267.f_0, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_267.f_0, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_267.f_0, 1, 1, 0, 0);
			Local_267.f_3 = 0;
			Local_267.f_5 = 0;
			Local_267.f_7 = 0;
			Local_267.f_8 = 0;
			return 1;
		}
	}
	else
	{
		if (Local_294[3 /*10*/] != Local_267.f_0)
		{
			__LIB_0__::func_222(&Local_294, 3, Local_267.f_0, "LAMAR", 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_198()//Position - 0x219A8
{
	if (__LIB_17__::func_341() != 1)
	{
		func_200(1, 1);
		func_199();
	}
	else
	{
		func_199();
		return 1;
	}
	return 0;
}

void func_199()//Position - 0x219CF
{
	if (!PED::IS_PED_INJURED(uLocal_194[0]))
	{
		if (Local_294[0 /*10*/] != uLocal_194[0] || !Local_294[0 /*10*/].f_7)
		{
			__LIB_0__::func_222(&Local_294, 0, uLocal_194[0], "MICHAEL", 0, 1);
		}
	}
	else if (__LIB_17__::func_341() == 0)
	{
		if (Local_294[0 /*10*/] != PLAYER::PLAYER_PED_ID() || !Local_294[0 /*10*/].f_7)
		{
			__LIB_0__::func_222(&Local_294, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
	}
	else if (Local_294[0 /*10*/] != 0)
	{
		__LIB_0__::func_222(&Local_294, 0, 0, "MICHAEL", 0, 1);
	}
	if (!PED::IS_PED_INJURED(uLocal_194[1]))
	{
		if (Local_294[1 /*10*/] != uLocal_194[1] || !Local_294[1 /*10*/].f_7)
		{
			__LIB_0__::func_222(&Local_294, 1, uLocal_194[1], "FRANKLIN", 0, 1);
		}
	}
	else if (__LIB_17__::func_341() == 1)
	{
		if (Local_294[1 /*10*/] != PLAYER::PLAYER_PED_ID() || !Local_294[1 /*10*/].f_7)
		{
			__LIB_0__::func_222(&Local_294, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
	}
	else if (Local_294[1 /*10*/] != 0)
	{
		__LIB_0__::func_222(&Local_294, 1, 0, "FRANKLIN", 0, 1);
	}
	if (!PED::IS_PED_INJURED(uLocal_194[2]))
	{
		if (Local_294[2 /*10*/] != uLocal_194[2] || !Local_294[2 /*10*/].f_7)
		{
			__LIB_0__::func_222(&Local_294, 2, uLocal_194[2], "TREVOR", 0, 1);
		}
	}
	else if (__LIB_17__::func_341() == 2)
	{
		if (Local_294[2 /*10*/] != PLAYER::PLAYER_PED_ID() || !Local_294[2 /*10*/].f_7)
		{
			__LIB_0__::func_222(&Local_294, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	else if (Local_294[2 /*10*/] != 0)
	{
		__LIB_0__::func_222(&Local_294, 2, 0, "TREVOR", 0, 1);
	}
}

int func_200(int iParam0, bool bParam1)//Position - 0x21B9C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_16__::func_512(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_475(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_272(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_203(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_203(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x21D5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = __LIB_17__::func_341();
		if (!uParam0->f_23)
		{
			__LIB_38__::func_46(iVar0, 0);
		}
		__LIB_13__::func_813(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = __LIB_0__::func_484(uParam0->f_7);
		__LIB_38__::func_46((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_17__::func_107(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (__LIB_0__::func_374(__LIB_17__::func_341()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (__LIB_0__::func_540(0) || __LIB_0__::func_540(3))
		{
			if (Global_23011.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (BitTest(Global_91193[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_91193[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_91229[Global_78588.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_23011.f_13 = 0;
		uParam0->f_5 = __LIB_0__::func_682(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_682(iVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_17__::func_438(iVar7);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar7, false, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
				__LIB_17__::func_438(iVar0);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar0, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_97723 = 1;
		__LIB_0__::func_481(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_501();
		__LIB_13__::func_799(iVar2);
		__LIB_28__::func_248();
		__LIB_13__::func_822(iVar2);
		__LIB_37__::func_926(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(68));
		}
		__LIB_13__::func_818(iVar2, &iVar7);
		if (((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!__LIB_0__::func_477())
		{
			__LIB_17__::func_500();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

int func_272(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x29045
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_16__::func_512(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_16__::func_895(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_467(*iParam0);
			__LIB_17__::func_456(*iParam0, 1, 0);
			__LIB_17__::func_449(*iParam0);
			__LIB_17__::func_448(*iParam0);
			func_274(*iParam0, bParam6);
			__LIB_0__::func_405(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0, bool bParam1)//Position - 0x2915D
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_278(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_278(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_96(iParam0, 3, 169))
					{
						func_50(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_96(iParam0, 12, 6))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_96(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 11))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_96(iParam0, 12, 10))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_96(iParam0, 12, 50))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_96(iParam0, 14, 59))
			{
				func_50(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_96(iParam0, 8, 22))
			{
				func_50(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_96(iParam0, 12, 14))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_96(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 4))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_96(iParam0, 12, 3))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_96(iParam0, 14, 82))
			{
				func_50(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_96(iParam0, 8, 76))
			{
				func_50(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_96(iParam0, 12, 1))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_96(iParam0, 12, 12))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_96(iParam0, 12, 15))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_96(iParam0, 3, 71))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_96(iParam0, 12, 7))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_96(iParam0, 12, 6))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_96(iParam0, 14, 88))
			{
				func_50(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_96(iParam0, 8, 17))
			{
				func_50(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_96(iParam0, 12, 11))
			{
				func_50(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_278(int iParam0, int iParam1)//Position - 0x298EE
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_17__::func_107(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_56(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_280(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_17__::func_665(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_28__::func_248();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_280(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x29B69
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
		iVar0 = __LIB_17__::func_107(iParam0);
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
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_87(iParam0, iVar1, &iVar2, 0))
			{
				func_50(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_48(iParam0, iVar1, &iVar2))
			{
				func_50(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_445(iParam0);
			__LIB_0__::func_413(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_413(755, uParam1->f_61, Global_78127, 1, 0);
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
			func_283(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_283(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_283(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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
			__LIB_0__::func_413(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_413(2053, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_513(161, 1, -1, 1);
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

int func_283(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2A045
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
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
			func_406(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 10, 0, -1) };
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
						func_406(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_406(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_283(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_406(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_405(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_283(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_0__::func_662();
			if (iVar17 != -1)
			{
				__LIB_0__::func_661(iVar17, 0, iParam10);
			}
			func_399(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_406(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_12__::func_901(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_283(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_406(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_283(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_391(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_283(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_283(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_390(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_283(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_3__::func_523(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_283(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_283(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar32, -1) };
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
								func_283(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_523(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
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
								func_283(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_283(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_283(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_520(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_399(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_390(iVar5, func_405(iParam0, 8, -1), iParam2, func_405(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_369(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_369(2160, iParam10, 0);
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
				func_326(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_390(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_399(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_390(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
				iVar52 = __LIB_0__::func_369(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_369(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_369(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_412(135, iParam10);
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
				__LIB_3__::func_345(iParam0, iParam10);
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
						func_283(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_283(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_390(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_390(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_283(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_390(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_283(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_303(iParam0, 9, iVar63))
						{
							func_283(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_283(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_283(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_369(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_0__::func_533(iParam0, iVar64), __LIB_0__::func_242(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_283(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_405(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_405(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_283(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_283(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_283(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_283(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_283(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_283(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_283(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_283(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_283(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_283(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_391(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_283(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_283(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_284(iParam0, &uVar4))
		{
			func_283(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_283(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_283(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_283(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_405(iParam0, 3, -1), iVar10);
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
				func_283(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_284(int iParam0, var uParam1)//Position - 0x2BEEF
{
	int iVar0;
	int iVar1;
	*uParam1 = func_405(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_369(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_369(754, Global_78127, 0) == 0 && __LIB_0__::func_369(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				if (__LIB_0__::func_369(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_369(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_369(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_369(755, Global_78127, 0);
		if (!func_303(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_369(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_369(753, Global_78127, 0);
			}
			__LIB_0__::func_413(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_413(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_303(int iParam0, int iParam1, int iParam2)//Position - 0x301EE
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar0, iParam1, iParam2, -1) };
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
				if (!func_303(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_303(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_303(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_0__::func_369(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_303(iParam0, 14, uVar11[iVar10]))
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
						return func_303(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_303(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_326(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x36F03
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_346(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_0__::func_661(iVar1, 1, iParam2);
	}
	func_327(iParam0, bParam3, 0, -1);
}

void func_327(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x36F50
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
		bVar3 = func_370(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_361(iParam0, iParam3);
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
			if (__LIB_0__::func_549(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_0__::func_674(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_0__::func_549(123, iVar0))
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
					if (__LIB_0__::func_549(iVar10, iVar0))
					{
						if (__LIB_0__::func_674(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_348(Var9.f_2, Var9.f_3, iVar10))
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

int func_361(int iParam0, int iParam1)//Position - 0x46058
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_405(iParam0, 11, -1);
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
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
				iVar5 = func_405(iParam0, 11, -1);
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

int func_370(int iParam0, bool bParam1)//Position - 0x464B6
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_405(iParam0, 11, -1), 0);
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
						if (__LIB_0__::func_549(13, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(14, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(15, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(16, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(71, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(72, -1))
						{
						}
						else if (__LIB_0__::func_536(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_405(iParam0, 11, -1);
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
						iVar5 = func_405(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_405(iParam0, 11, -1), 0);
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
						iVar8 = func_405(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_405(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_405(iParam0, 11, -1), 0);
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
						iVar12 = func_405(iParam0, 8, -1);
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

int func_390(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4F344
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
					iVar0 = func_390(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_390(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_391(int iParam0)//Position - 0x50681
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
		if (!func_396(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_396(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_396(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5104B
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_405(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_399(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x53965
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_445(iParam0))
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
			__LIB_3__::func_346(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_347(iVar0, iParam2, 13) && !__LIB_3__::func_347(iVar0, iParam2, 14)) && !__LIB_3__::func_347(iVar0, iParam2, 15)) && !__LIB_3__::func_347(iVar0, iParam2, 16)) && !__LIB_3__::func_347(iVar0, iParam2, 71)) && !__LIB_3__::func_347(iVar0, iParam2, 72))
				{
					__LIB_3__::func_346(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_0__::func_676(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_0__::func_660(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_0__::func_661(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_405(int iParam0, int iParam1, int iParam2)//Position - 0x53C14
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
				if (func_303(iParam0, iParam1, iVar0))
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
				if (func_303(iParam0, iParam1, iVar1))
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

void func_406(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x53CB5
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
		Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
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
							__LIB_0__::func_538(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_406(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_406(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_406(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_0__::func_369(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_413(iVar6, iVar7, Global_78127, 1, 0);
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
							func_406(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_406(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_406(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_406(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_406(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_406(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_406(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_445(int iParam0)//Position - 0x6C9EC
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_405(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_405(iParam0, 11, -1);
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

void func_467(int iParam0)//Position - 0x6DFFC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_0__::func_374(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_13__::func_802(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_280(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_56(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_468(__LIB_16__::func_512(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_56(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_56(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_468(__LIB_16__::func_512(0), 3, 70, 1, 0, 0, 0);
					func_468(__LIB_16__::func_512(0), 3, 71, 1, 0, 0, 0);
					func_468(__LIB_16__::func_512(0), 3, 72, 1, 0, 0, 0);
					func_468(__LIB_16__::func_512(0), 3, 73, 1, 0, 0, 0);
					func_468(__LIB_16__::func_512(0), 3, 74, 1, 0, 0, 0);
					func_468(__LIB_16__::func_512(0), 3, 75, 1, 0, 0, 0);
					func_468(__LIB_16__::func_512(0), 4, 41, 1, 0, 0, 0);
					func_468(__LIB_16__::func_512(0), 4, 42, 1, 0, 0, 0);
					func_468(__LIB_16__::func_512(0), 4, 43, 1, 0, 0, 0);
					func_468(__LIB_16__::func_512(0), 4, 44, 1, 0, 0, 0);
					func_468(__LIB_16__::func_512(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_56(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_280(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_468(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6E259
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_471(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_471(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6E414
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iParam0, iParam1, iParam2, -1) };
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
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_471(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_471(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_950(iParam0, 14, uVar4[iVar2], 1);
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
								func_471(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_471(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_471(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_471(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_471(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_471(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_471(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_471(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_471(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_471(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_471(iParam0, 14, iVar5, 1, 0);
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
								func_471(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_471(iParam0, 14, 17, 1, 0);
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

int func_475(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6E9F9
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_16__::func_512(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_16__::func_895(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_467(*iParam0);
				__LIB_17__::func_456(*iParam0, 1, 0);
				__LIB_17__::func_449(*iParam0);
				__LIB_17__::func_448(*iParam0);
				func_274(*iParam0, bParam6);
				__LIB_0__::func_405(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_478()//Position - 0x6EAF2
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5[5];
	int iVar6;
	bool bVar7;
	if (iLocal_184 == 4)
	{
		if (func_198())
		{
			if (bLocal_68)
			{
				__LIB_0__::func_427(-577.2953f, 5254.0166f, 69.4656f, 152.958f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -577.2953f, 5254.0166f, 69.4656f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 152.958f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			SYSTEM::SETTIMERA(0);
			func_776();
			if (Global_96890)
			{
				while (((!ENTITY::DOES_ENTITY_EXIST(uLocal_194[0]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_194[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_169)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_170))
				{
					func_775(Local_60, fLocal_145, 0);
					func_772(-568.2169f, 5261.117f, 69.5043f, 178.0029f, 0);
					func_771(Local_50, fLocal_139, 0);
					func_732(Local_51, fLocal_140, 0);
					SYSTEM::WAIT(0);
				}
				func_731();
				func_730();
			}
			while (((!func_667(Local_62, fLocal_146) || !ENTITY::DOES_ENTITY_EXIST(Local_267.f_0)) || !bLocal_69) || !ENTITY::DOES_ENTITY_EXIST(iLocal_164[0]))
			{
				func_659();
				func_192(-573.1397f, 5254.383f, 69.4683f, 145.2989f);
				func_658();
				SYSTEM::WAIT(0);
			}
			func_50(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			__LIB_0__::func_433(0, -1, 0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 10000)
			{
				if (((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && ((!PED::IS_PED_INJURED(uLocal_194[0]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[0])) || PED::IS_PED_INJURED(uLocal_194[0]))) && ((!PED::IS_PED_INJURED(uLocal_194[1]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[1])) || PED::IS_PED_INJURED(uLocal_194[1]))) && ((!PED::IS_PED_INJURED(uLocal_194[2]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[2])) || PED::IS_PED_INJURED(uLocal_194[2])))
				{
					SYSTEM::SETTIMERA(100000);
				}
				SYSTEM::WAIT(0);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
			__LIB_39__::func_59(1);
			func_655(1);
			func_654(1);
			func_653();
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f, true, false, false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			iLocal_185 = 1;
			Local_267.f_3 = 50;
			iLocal_101 = 0;
			iLocal_184 = 0;
		}
	}
	if (iLocal_184 == 0)
	{
		iLocal_87 = 0;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_ALERT"))
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_ALERT");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_PROTECT_LAMAR"))
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_PROTECT_LAMAR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_TREVOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_TREVOR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_MICHAEL"))
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_MICHAEL");
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_291.f_0, false))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_291.f_0, 0f);
		}
		if (HUD::DOES_BLIP_EXIST(Local_261.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_261.f_1));
		}
		if (HUD::DOES_BLIP_EXIST(Local_258.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_258.f_1));
		}
		if (!PED::IS_PED_INJURED(Local_267.f_0))
		{
			TASK::CLEAR_PED_TASKS(Local_267.f_0);
			if (!PED::IS_PED_GROUP_MEMBER(Local_267.f_0, __LIB_0__::func_495()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(Local_267.f_0, __LIB_0__::func_495());
			}
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_267.f_0, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_267.f_0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267.f_0, false);
			ENTITY::SET_ENTITY_PROOFS(Local_267.f_0, false, false, false, false, false, false, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_267.f_0, 2, true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_267.f_0, false);
			ENTITY::SET_ENTITY_PROOFS(Local_267.f_0, false, false, false, false, false, false, false, false);
			PED::SET_PED_ALLOWED_TO_DUCK(Local_267.f_0, true);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_267.f_0, true);
			PED::SET_PED_CONFIG_FLAG(Local_267.f_0, 174, true);
			PED::SET_PED_CONFIG_FLAG(Local_267.f_0, 185, false);
			PED::SET_PED_NEVER_LEAVES_GROUP(Local_267.f_0, false);
		}
		func_597(3, "FLEE_AREA", 1, 0, 0, 0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_169, false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_169, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_169, 1);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170, false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_170, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_170, 1);
		}
		if (!PED::IS_PED_INJURED(uLocal_194[0]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_194[0], false, 1);
		}
		if (!PED::IS_PED_INJURED(uLocal_194[2]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_194[2], false, 1);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			if (!PED::IS_PED_INJURED(Local_267.f_0))
			{
				PED::SET_PED_USING_ACTION_MODE(Local_267.f_0, true, -1, 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_194[2]))
			{
				PED::SET_PED_USING_ACTION_MODE(uLocal_194[2], true, -1, 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_194[0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uLocal_194[0], true, -1, 0);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			AUDIO::TRIGGER_MUSIC_EVENT("FRA2_FLEE_RT");
			func_595();
			SYSTEM::WAIT(1000);
			__LIB_16__::func_11();
		}
		else
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FRA2_RETURN_LAMAR");
		}
		func_594(0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		SYSTEM::SETTIMERB(0);
		iLocal_101 = 0;
		iLocal_184 = 1;
	}
	if (iLocal_184 == 1)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (HUD::DOES_BLIP_EXIST(Local_267.f_1))
		{
			func_593();
		}
		switch (iLocal_101)
		{
			case 0:
				if (Global_96890)
				{
					if (!iLocal_100[73])
					{
						if (!__LIB_13__::func_755(&Local_238, 1))
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_TAKE", 7, 0, 0, 0))
							{
								iLocal_100[73] = 1;
							}
						}
					}
					else if (!iLocal_100[76])
					{
						if (!__LIB_13__::func_755(&Local_238, 1))
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_MGOING", 7, 0, 0, 0))
							{
								iLocal_100[76] = 1;
							}
						}
					}
					else if (!iLocal_100[74])
					{
						if (!PED::IS_PED_INJURED(Local_267.f_0))
						{
							if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_267.f_0, true)) < 400f)
							{
								if (!__LIB_13__::func_755(&Local_238, 1))
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_LBYEM", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
										iLocal_100[74] = 1;
									}
								}
							}
							else
							{
								iLocal_100[74] = 1;
							}
						}
					}
					else if (!iLocal_100[77])
					{
						if (!PED::IS_PED_INJURED(uLocal_194[2]))
						{
							if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_267.f_0, true)) < 400f)
							{
								if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true)) < 625f)
								{
									if (!__LIB_13__::func_755(&Local_238, 1))
									{
										if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_tbye", 7, 0, 0, 0))
										{
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
											iLocal_100[77] = 1;
										}
									}
								}
								else
								{
									iLocal_100[77] = 1;
									iLocal_100[75] = 1;
								}
							}
						}
					}
					else if (!iLocal_100[75])
					{
						if (!PED::IS_PED_INJURED(Local_267.f_0))
						{
							if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_267.f_0, true)) < 625f)
							{
								if (!__LIB_13__::func_755(&Local_238, 1))
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_LBYET", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
										iLocal_100[75] = 1;
									}
								}
							}
						}
					}
				}
				if (!iLocal_100[79] && !iLocal_100[36])
				{
					if (!__LIB_13__::func_755(&Local_238, 1))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(Local_267.f_0, false))
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "lm2_leave", 7, 0, 0, 0))
							{
								iLocal_100[79] = 1;
							}
						}
					}
				}
				if (func_542(&Local_238, Local_61, Global_19, 1, Local_267.f_0, "FRAN2_getCar", "FRAN2_drvL", 0, 1, 1, -1))
				{
					__LIB_16__::func_318(&Local_238, 1, 0);
					if (__LIB_0__::func_568())
					{
						__LIB_0__::func_620(0);
					}
					__LIB_0__::func_638();
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						__LIB_0__::func_366(0);
					}
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					iLocal_101++;
				}
				if ((HUD::DOES_BLIP_EXIST(Local_238.f_5) && !PED::IS_PED_INJURED(Local_267.f_0)) && __LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), Local_267.f_0))
				{
					if (__LIB_0__::func_568())
					{
						__LIB_0__::func_620(0);
					}
					if (!__LIB_13__::func_755(&Local_238, 1))
					{
						if (!iLocal_100[36])
						{
							if (iLocal_87)
							{
								if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_BANT1", 7, 0, 0, 0))
								{
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
									PED::SET_PED_USING_ACTION_MODE(Local_267.f_0, false, -1, 0);
									iLocal_100[36] = 1;
								}
							}
						}
						else if (!iLocal_100[37])
						{
							if (Global_96890)
							{
								if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_BANT4", 7, 0, 0, 0))
								{
									iLocal_100[37] = 1;
								}
							}
							else if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_BANT5", 7, 0, 0, 0))
							{
								iLocal_100[37] = 1;
							}
						}
						else if (!iLocal_100[41])
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_BANT6", 7, 0, 0, 0))
							{
								iLocal_100[41] = 1;
							}
						}
						else if (!iLocal_100[42])
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_BANT6b", 7, 0, 0, 0))
							{
								iLocal_100[42] = 1;
							}
						}
					}
				}
				else if (iLocal_100[36])
				{
					if (!__LIB_0__::func_568())
					{
						__LIB_0__::func_620(1);
					}
				}
				break;
			case 1:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
					if (__LIB_0__::func_213(iVar2, 1093140480, 5, 1056964608, 0, 1, 0))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
						}
						bVar1 = true;
					}
				}
				else
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
					}
					bVar1 = true;
				}
				if (bVar1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
					iLocal_184 = 2;
				}
				break;
		}
		if (!PED::IS_PED_INJURED(Local_267.f_0))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(Local_267.f_0, true) };
			if (!iLocal_87)
			{
				Var4 = { -547.2f, 5314.1f, 84.7f };
				AUDIO::PREPARE_MUSIC_EVENT("FRA2_END_VEHICLE");
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_ESCAPE_IN_VEHICLE"))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::START_AUDIO_SCENE("FRANKLIN_2_ESCAPE_IN_VEHICLE");
					}
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_ESCAPE_IN_VEHICLE");
				}
				if (SYSTEM::VDIST2(Var0, Local_56) > 900f && SYSTEM::VDIST2(Var0, Var4) > SYSTEM::VDIST2(Local_56, Var4))
				{
					if (SYSTEM::VDIST2(Var0, Var3) < 900f)
					{
						PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar5, -1);
						iVar6 = 0;
						bVar7 = false;
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							if (!PED::IS_PED_INJURED(iVar5[iVar6]))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar5[iVar6]) == iLocal_177)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar5[iVar6], true), Var0) < 10000f)
									{
										bVar7 = true;
									}
								}
							}
							iVar6++;
						}
						if (!bVar7)
						{
							if (__LIB_16__::func_19(Local_267.f_0, PLAYER::PLAYER_PED_ID()))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FRA2_END_VEHICLE");
							}
							else
							{
								func_525();
								AUDIO::TRIGGER_MUSIC_EVENT("FRA2_END_ON_FOOT");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_ESCAPE_IN_VEHICLE"))
							{
								AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_ESCAPE_IN_VEHICLE");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_GO_TO_FRANKLINS"))
							{
								AUDIO::START_AUDIO_SCENE("FRANKLIN_2_GO_TO_FRANKLINS");
							}
							func_523(0);
							func_522(0);
							func_520(0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_177);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_178);
							VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_179);
							WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"));
							WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_SMG"));
							WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
							__LIB_39__::func_59(0);
							func_655(0);
							func_654(0);
							iLocal_87 = 1;
						}
					}
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_194[0]))
				{
					if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(uLocal_194[0], false)) > 40000f)
					{
						func_43(&(uLocal_194[0]), 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
				{
					if ((SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_169, false)) > 40000f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_169, false)) > 160000f)
					{
						__LIB_28__::func_239(&iLocal_169, 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_194[2]))
				{
					if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(uLocal_194[2], false)) > 40000f)
					{
						func_43(&(uLocal_194[2]), 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
				{
					if ((SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_170, false)) > 40000f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_170, false)) > 160000f)
					{
						__LIB_28__::func_239(&iLocal_170, 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
				{
					if ((SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_172, false)) > 40000f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_172, false)) > 160000f)
					{
						__LIB_28__::func_239(&iLocal_172, 1);
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_238.f_5))
			{
				if (SYSTEM::VDIST2(Var0, Var3) > 22500f)
				{
					func_481(7);
				}
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_194[0]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_194[0], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[0], true), -587.9527f, 5181.2993f, 94.6509f) > 4f && !MISC::IS_AREA_OCCUPIED(Vector(94.6509f, 5181.2993f, -587.9527f) - Vector(1f, 1f, 1f), Vector(94.6509f, 5181.2993f, -587.9527f) + Vector(1f, 1f, 1f), false, true, false, false, false, 0, false))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_194[0], -587.9527f, 5181.2993f, 94.6509f, 2f, -1, 0.25f, 0, 186.8357f);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_194[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_194[0], true);
					PED::SET_PED_CONFIG_FLAG(uLocal_194[0], 185, true);
				}
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_194[2]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_194[2], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true), -575.8129f, 5271.753f, 69.2686f) > 4f && !MISC::IS_AREA_OCCUPIED(Vector(69.2686f, 5271.753f, -575.8129f) - Vector(1f, 0.5f, 0.5f), Vector(69.2686f, 5271.753f, -575.8129f) + Vector(1f, 0.5f, 0.5f), false, true, false, false, false, 0, false))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_194[2], -575.8129f, 5271.753f, 69.2686f, 2f, -1, 0.25f, 0, 204.2659f);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_194[2], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_194[2], true);
					PED::SET_PED_CONFIG_FLAG(uLocal_194[2], 185, true);
				}
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_61) < 15625f)
		{
			CUTSCENE::REQUEST_CUTSCENE("FRA_2_EXT", 8);
			func_178("FRA_2_EXT");
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_61) > 30625f)
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
	}
	if (iLocal_184 == 2)
	{
		__LIB_16__::func_318(&Local_238, 1, 0);
		func_593();
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		__LIB_0__::func_638();
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 4);
		iLocal_183 = 7;
		iLocal_184 = 0;
	}
	if (iLocal_184 == 3)
	{
		func_479(7, 0);
	}
}

void func_479(int iParam0, bool bParam1)//Position - 0x6FA7B
{
	__LIB_17__::func_737();
	iLocal_184 = 4;
	iLocal_101 = 0;
	iLocal_183 = iParam0;
	func_924();
	if (bParam1)
	{
		if (iLocal_183 >= 6)
		{
			func_597(3, "FLEE_AREA", 1, 0, 0, 1);
		}
		else if (iLocal_183 >= 5)
		{
			func_597(2, "GET_LAMAR_OUT", 0, 0, 0, 1);
		}
		else if (iLocal_183 >= 3)
		{
			func_597(1, "ATTACK_SAWMILL", 0, 0, 0, 1);
		}
		else if (iLocal_183 >= 1)
		{
			func_597(0, "MEET_THE_CREW", 0, 0, 0, 1);
		}
	}
}

void func_481(int iParam0)//Position - 0x6FB28
{
	if (!iLocal_66 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		func_593();
		__LIB_16__::func_318(&Local_238, 1, 0);
		__LIB_0__::func_325();
		switch (iParam0)
		{
			case 0:
				sLocal_150 = "";
				break;
			case 7:
				sLocal_150 = "FRAN2_LABAN";
				break;
			case 6:
				sLocal_150 = "FRAN2_F03";
				break;
			case 1:
				sLocal_150 = "FRAN2_FEARLY";
				break;
			case 5:
				sLocal_150 = "CMN_FDIED" /* GXT: ~s~Franklin died. */;
				break;
			case 2:
				sLocal_150 = "FRAN2_F01";
				break;
			case 4:
				sLocal_150 = "CMN_MDIED" /* GXT: ~s~Michael died. */;
				break;
			case 3:
				sLocal_150 = "CMN_TDIED" /* GXT: ~s~Trevor died. */;
				break;
			case 8:
				sLocal_150 = "FRAN2_FCOPS";
				break;
			case 9:
				sLocal_150 = "CMN_MDEST" /* GXT: ~s~Michael's car was destroyed. */;
				break;
			case 10:
				sLocal_150 = "CMN_TDEST" /* GXT: ~s~Trevor's truck was destroyed. */;
				break;
		}
		iLocal_66 = 1;
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FRA2_FAIL");
	func_509(sLocal_150);
	while (!__LIB_0__::func_223())
	{
		if (iLocal_183 >= 3 && iLocal_183 < 6)
		{
			func_659();
			func_500();
			if (iLocal_183 >= 5)
			{
				func_483();
			}
		}
		SYSTEM::WAIT(0);
	}
	func_467(PLAYER::PLAYER_PED_ID());
	func_482(uLocal_194[1]);
	func_482(uLocal_194[0]);
	func_482(uLocal_194[2]);
	func_482(Local_267.f_0);
	func_924();
}

void func_482(int* iParam0)//Position - 0x6FC94
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_495()) || __LIB_16__::func_19(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			func_43(&iParam0, 1);
		}
	}
}

void func_483()//Position - 0x6FCCB
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	if (iLocal_183 == 5)
	{
		iVar0 = 0;
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (!Local_277[0 /*21*/].f_3)
		{
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SMG")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_277[0 /*21*/]))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_127) > 1500 || CAM::IS_SPHERE_VISIBLE(-500.2f, 5299.8f, 80.8f, 2f))
					{
						Local_277[0 /*21*/] = func_499(iLocal_177, -493.5506f, 5253.9517f, 85.8353f, 39.0411f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_277[1 /*21*/]))
				{
					Local_277[1 /*21*/] = func_499(iLocal_177, -489.7464f, 5314.803f, 79.61f, 33.0662f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_277[2 /*21*/]))
				{
					Local_277[2 /*21*/] = func_499(iLocal_177, -482.9134f, 5314.787f, 79.61f, 83.899f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
					func_496(&Local_277, "AfterL_");
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_277.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_277[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_277[iVar0 /*21*/]))
					{
						switch (Local_277[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_277[iVar0 /*21*/].f_10 = { -484.8358f, 5277.863f, 85.8626f };
									Local_277[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 1)
								{
									Local_277[iVar0 /*21*/].f_10 = { -497.8528f, 5299.311f, 79.61f };
									Local_277[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 2)
								{
									Local_277[iVar0 /*21*/].f_10 = { -498.0019f, 5301.9556f, 79.6037f };
									Local_277[iVar0 /*21*/].f_5 = 1;
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[iVar0 /*21*/], Local_277[iVar0 /*21*/].f_10, 2f, true, false);
								__LIB_28__::func_241(&(Local_277[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_277[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_277[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_277[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_277[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_277[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_277[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_277[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_277[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_277[iVar0 /*21*/], 3);
								if (iVar0 == 1)
								{
									__LIB_0__::func_640(Local_277[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_277[iVar0 /*21*/].f_8 = 0;
								Local_277[iVar0 /*21*/].f_7++;
								break;
							case 1:
								break;
						}
						if (Local_277[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_277[iVar0 /*21*/], &(Local_277[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (!Local_277[iVar0 /*21*/].f_4)
							{
								if (Local_277[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_277[iVar0 /*21*/], true), Local_277[iVar0 /*21*/].f_10) < 4f)
									{
										Local_277[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_277[iVar0 /*21*/].f_8) > 10000)
								{
									if ((!Local_277[iVar0 /*21*/].f_5 && iLocal_185 != 0) || (Local_277[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_277[iVar0 /*21*/], true), Var2) < 25f))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_277[iVar0 /*21*/], 51, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_277[iVar0 /*21*/], 50, true);
										PED::SET_COMBAT_FLOAT(Local_277[iVar0 /*21*/], 13, 3f);
										Local_277[iVar0 /*21*/].f_4 = 1;
									}
								}
							}
							else if (iLocal_185 == 0)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_277[iVar0 /*21*/], true), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_277[iVar0 /*21*/], 51, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_277[iVar0 /*21*/], 50, false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_277[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[iVar0 /*21*/], Local_277[iVar0 /*21*/].f_10, 3f, true, false);
									Local_277[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_491(Local_277[iVar0 /*21*/], Var2);
						func_488(&(Local_277[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_278[0 /*21*/].f_3)
		{
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SMG"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE")))
			{
				if (Local_277[0 /*21*/].f_3)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_278[0 /*21*/]))
					{
						Local_278[0 /*21*/] = func_499(iLocal_177, -500.3767f, 5275.7744f, 79.61f, 350.0594f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_278[1 /*21*/]))
					{
						Local_278[1 /*21*/] = func_499(iLocal_177, -524.5526f, 5250.3794f, 78.2809f, 314.8624f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_278[2 /*21*/]))
					{
						Local_278[2 /*21*/] = func_499(iLocal_177, -494.5456f, 5251.4844f, 85.8305f, 356.7617f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_278[3 /*21*/]))
					{
						Local_278[3 /*21*/] = func_499(iLocal_177, -505.5895f, 5259.6177f, 79.61f, 347.4243f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
						func_496(&Local_278, "AfterL2_");
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_278.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_278[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_278[iVar0 /*21*/]))
					{
						switch (Local_278[iVar0 /*21*/].f_7)
						{
							case 0:
								Local_278[iVar0 /*21*/].f_10 = { ENTITY::GET_ENTITY_COORDS(Local_278[iVar0 /*21*/], true) };
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_278[iVar0 /*21*/], Local_278[iVar0 /*21*/].f_10, 2f, true, false);
								__LIB_28__::func_241(&(Local_278[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_278[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_278[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_278[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_278[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_278[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_278[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_278[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_278[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_278[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									__LIB_0__::func_640(Local_278[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_278[iVar0 /*21*/].f_8 = 0;
								Local_278[iVar0 /*21*/].f_7++;
								break;
							case 1:
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -451.7185f, 5289.7285f, 89.019905f, -536.2419f, 5292.2544f, 71.685295f, 10.25f, false, true, 0) || __LIB_28__::func_240(&Local_277) == 0)
								{
									if (iVar0 == 0)
									{
										Local_278[iVar0 /*21*/].f_10 = { -504.842f, 5280.014f, 79.61f };
									}
									else if (iVar0 == 1)
									{
										Local_278[iVar0 /*21*/].f_10 = { -502.5594f, 5272.3975f, 79.61f };
									}
									else if (iVar0 == 2)
									{
										Local_278[iVar0 /*21*/].f_10 = { -490.6916f, 5260.422f, 85.9607f };
										Local_278[iVar0 /*21*/].f_5 = 1;
									}
									else if (iVar0 == 3)
									{
										Local_278[iVar0 /*21*/].f_10 = { -515.0439f, 5269.5923f, 79.4698f };
									}
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_278[iVar0 /*21*/], Local_278[iVar0 /*21*/].f_10, 2f, true, false);
									if (iVar0 == 0)
									{
										__LIB_0__::func_640(Local_277[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
									}
									Local_278[iVar0 /*21*/].f_7++;
								}
								break;
							case 2:
								break;
						}
						if (Local_278[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_278[iVar0 /*21*/], &(Local_278[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (Local_278[iVar0 /*21*/].f_7 > 1)
							{
								if (!Local_278[iVar0 /*21*/].f_4)
								{
									if (Local_278[iVar0 /*21*/].f_8 == 0)
									{
										if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_278[iVar0 /*21*/], true), Local_278[iVar0 /*21*/].f_10) < 4f)
										{
											Local_278[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - Local_278[iVar0 /*21*/].f_8) > 10000)
									{
										if ((!Local_278[iVar0 /*21*/].f_5 && iLocal_185 != 0) || (Local_278[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_278[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_278[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_278[iVar0 /*21*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_278[iVar0 /*21*/], 13, 3f);
											Local_278[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
								else if (iLocal_185 == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_278[iVar0 /*21*/], true), Var2) > 900f)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_278[iVar0 /*21*/], 51, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_278[iVar0 /*21*/], 50, false);
										PED::SET_PED_COMBAT_MOVEMENT(Local_278[iVar0 /*21*/], 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_278[iVar0 /*21*/], Local_278[iVar0 /*21*/].f_10, 3f, true, false);
										Local_278[iVar0 /*21*/].f_4 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_491(Local_278[iVar0 /*21*/], Var2);
						func_488(&(Local_278[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_279[0 /*21*/].f_3)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE")))
			{
				if (bLocal_81)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_279[0 /*21*/]))
					{
						Local_279[0 /*21*/] = func_499(iLocal_177, -561.4196f, 5254.911f, 69.507f, 290.0712f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
						func_496(&Local_279, "AfterL3_");
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_279.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_279[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_279[iVar0 /*21*/]))
					{
						switch (Local_279[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_279[iVar0 /*21*/].f_10 = { -561.0891f, 5254.966f, 69.511f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_279[iVar0 /*21*/], Local_279[iVar0 /*21*/].f_10, 2f, true, false);
								__LIB_28__::func_241(&(Local_279[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_279[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_279[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_279[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_279[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_279[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_279[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_279[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_279[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_279[iVar0 /*21*/], 3);
								Local_279[iVar0 /*21*/].f_8 = 0;
								Local_279[iVar0 /*21*/].f_7++;
								break;
							case 1:
								break;
						}
						if (Local_279[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_279[iVar0 /*21*/], &(Local_279[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (!Local_279[iVar0 /*21*/].f_4)
							{
								if (Local_279[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_279[iVar0 /*21*/], true), Local_279[iVar0 /*21*/].f_10) < 4f)
									{
										Local_279[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_279[iVar0 /*21*/], true), Var2) < 900f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_279[iVar0 /*21*/], PLAYER::PLAYER_PED_ID(), true))
								{
									if ((!Local_279[iVar0 /*21*/].f_5 && iLocal_185 != 0) || (Local_279[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_279[iVar0 /*21*/], true), Var2) < 25f))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_279[iVar0 /*21*/], 51, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_279[iVar0 /*21*/], 50, true);
										PED::SET_COMBAT_FLOAT(Local_279[iVar0 /*21*/], 13, 3f);
										Local_279[iVar0 /*21*/].f_4 = 1;
									}
								}
							}
							else if (iLocal_185 == 0)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_279[iVar0 /*21*/], true), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_279[iVar0 /*21*/], 51, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_279[iVar0 /*21*/], 50, false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_279[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_279[iVar0 /*21*/], Local_279[iVar0 /*21*/].f_10, 3f, true, false);
									Local_279[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_491(Local_279[iVar0 /*21*/], Var2);
						func_488(&(Local_279[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_288[0 /*21*/].f_3)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, sLocal_155);
			STREAMING::REQUEST_MODEL(iLocal_179);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && STREAMING::HAS_MODEL_LOADED(iLocal_179)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, sLocal_155))
			{
				if (bLocal_81)
				{
					iLocal_174 = VEHICLE::CREATE_VEHICLE(iLocal_179, -590.5018f, 5283.3286f, 69.9264f, -107.7629f, true, true, false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_174, true, true, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_174, 10, sLocal_155, true);
					__LIB_17__::func_710(&iLocal_174, 2000f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_174, true);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_174, 1.1f);
					AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_174, 3);
					Local_288[0 /*21*/] = func_485(iLocal_177, iLocal_174, -1, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
					Local_288[1 /*21*/] = func_485(iLocal_177, iLocal_174, 0, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					Local_288[2 /*21*/] = func_485(iLocal_177, iLocal_174, 1, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					func_496(&Local_288, "TimbPost_");
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_288.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_288[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_288[iVar0 /*21*/]))
					{
						switch (Local_288[iVar0 /*21*/].f_7)
						{
							case 0:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174, false))
								{
									if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iLocal_174)) < 0.5f && ENTITY::IS_ENTITY_AT_COORD(iLocal_174, -518.2f, 5245.4f, 80f, 10f, 10f, 5f, false, true, 0))
									{
										AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_174, 0);
										bVar3 = true;
									}
								}
								else
								{
									bVar3 = true;
								}
								if (bVar3)
								{
									if (iVar0 == 0)
									{
										iVar4 = 0;
									}
									else if (iVar0 == 1)
									{
										iVar4 = 1200;
									}
									else if (iVar0 == 2)
									{
										iVar4 = 650;
									}
									if (Local_288[iVar0 /*21*/].f_8 == 0)
									{
										Local_288[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - Local_288[iVar0 /*21*/].f_8) > iVar4)
									{
										if (iVar0 == 0)
										{
											Local_288[iVar0 /*21*/].f_10 = { -519.2643f, 5255.7915f, 79.4995f };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_288[iVar0 /*21*/], Local_288[iVar0 /*21*/].f_10, 3f, true, false);
										}
										else if (iVar0 == 1)
										{
											Local_288[iVar0 /*21*/].f_10 = { ENTITY::GET_ENTITY_COORDS(Local_288[iVar0 /*21*/], true) };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_288[iVar0 /*21*/], Local_288[iVar0 /*21*/].f_10, 5f, true, false);
										}
										else if (iVar0 == 2)
										{
											Local_288[iVar0 /*21*/].f_10 = { -507.8264f, 5254.7817f, 79.653f };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_288[iVar0 /*21*/], Local_288[iVar0 /*21*/].f_10, 3f, true, false);
										}
										__LIB_28__::func_241(&(Local_288[iVar0 /*21*/]), 10, 1, 2, 0, 1);
										if (WEAPON::HAS_PED_GOT_WEAPON(Local_288[iVar0 /*21*/], joaat("WEAPON_SMG"), false))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(Local_288[iVar0 /*21*/], joaat("WEAPON_SMG"), true);
										}
										else if (WEAPON::HAS_PED_GOT_WEAPON(Local_288[iVar0 /*21*/], joaat("WEAPON_ASSAULTRIFLE"), false))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(Local_288[iVar0 /*21*/], joaat("WEAPON_ASSAULTRIFLE"), true);
										}
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_288[iVar0 /*21*/], 1, false);
										PED::SET_COMBAT_FLOAT(Local_288[iVar0 /*21*/], 5, 1f);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_288[iVar0 /*21*/], 200f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_288[iVar0 /*21*/], false);
										PED::SET_PED_ALERTNESS(Local_288[iVar0 /*21*/], 3);
										if (iVar0 == 0)
										{
											__LIB_0__::func_640(Local_288[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
										}
										Local_288[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										Local_288[iVar0 /*21*/].f_7++;
									}
								}
								break;
							case 1:
								break;
						}
						if (Local_288[iVar0 /*21*/].f_7 > 0)
						{
							__LIB_0__::func_631(Local_288[iVar0 /*21*/], &(Local_288[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (!Local_288[iVar0 /*21*/].f_4)
							{
								if (Local_288[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_288[iVar0 /*21*/], true), Local_288[iVar0 /*21*/].f_10) < 4f)
									{
										Local_288[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_288[iVar0 /*21*/].f_8) > 10000)
								{
									if ((!Local_288[iVar0 /*21*/].f_5 && iLocal_185 != 0) || (Local_288[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_288[iVar0 /*21*/], true), Var2) < 25f))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_288[iVar0 /*21*/], 51, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_288[iVar0 /*21*/], 50, true);
										PED::SET_COMBAT_FLOAT(Local_288[iVar0 /*21*/], 13, 3f);
										Local_288[iVar0 /*21*/].f_4 = 1;
									}
								}
							}
							else if (iLocal_185 == 0)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_288[iVar0 /*21*/], true), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_288[iVar0 /*21*/], 51, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_288[iVar0 /*21*/], 50, false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_288[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_288[iVar0 /*21*/], Local_288[iVar0 /*21*/].f_10, 3f, true, false);
									Local_288[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_491(Local_288[iVar0 /*21*/], Var2);
						func_488(&(Local_288[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_174, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_174))
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(10, sLocal_155);
				}
			}
		}
		if (!Local_289[0 /*21*/].f_3)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, sLocal_155);
			VEHICLE::REQUEST_VEHICLE_RECORDING(12, sLocal_155);
			STREAMING::REQUEST_MODEL(iLocal_179);
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_177) && STREAMING::HAS_MODEL_LOADED(iLocal_179)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, sLocal_155)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, sLocal_155))
			{
				if (bLocal_82 || (__LIB_28__::func_240(&Local_288) == 0 && SYSTEM::VDIST2(Var2, Local_56) < 10000f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175[0]))
					{
						iLocal_175[0] = VEHICLE::CREATE_VEHICLE(iLocal_179, -701.887f, 5255.897f, 73.3489f, -104.8644f, true, true, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_175[0], true, true, false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_175[0], 11, sLocal_155, true);
						__LIB_17__::func_710(&(iLocal_175[0]), 1500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_175[0], true);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_175[0], 1.1f);
						AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_175[0], 3);
						iLocal_175[1] = VEHICLE::CREATE_VEHICLE(iLocal_179, -709.0966f, 5259.7446f, 72.5166f, -126.1647f, true, true, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_175[1], true, true, false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_175[1], 12, sLocal_155, true);
						__LIB_17__::func_710(&(iLocal_175[1]), 1500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_175[1], true);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_175[1], 1.1f);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_289[0 /*21*/]))
					{
						Local_289[0 /*21*/] = func_485(iLocal_177, iLocal_175[0], -1, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_289[1 /*21*/]))
					{
						Local_289[1 /*21*/] = func_485(iLocal_177, iLocal_175[0], 0, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_289[2 /*21*/]))
					{
						Local_289[2 /*21*/] = func_485(iLocal_177, iLocal_175[0], 1, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_289[3 /*21*/]))
					{
						Local_289[3 /*21*/] = func_485(iLocal_177, iLocal_175[1], -1, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_289[4 /*21*/]))
					{
						Local_289[4 /*21*/] = func_485(iLocal_177, iLocal_175[1], 0, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_289[5 /*21*/]))
					{
						Local_289[5 /*21*/] = func_485(iLocal_177, iLocal_175[1], 1, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
						func_496(&Local_289, "ExitPost_");
					}
				}
			}
		}
		else
		{
			iVar5 = 0;
			iVar0 = 0;
			while (iVar0 < Local_289.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_289[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_289[iVar0 /*21*/]))
					{
						switch (Local_289[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 < 3)
								{
									iVar5 = 0;
								}
								else
								{
									iVar5 = 1;
								}
								bVar6 = false;
								iVar7 = 0;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175[iVar5], false))
								{
									if (MISC::ABSF(SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(iLocal_175[iVar5]))) < 0.5f && ENTITY::IS_ENTITY_AT_COORD(iLocal_175[iVar5], -568.1f, 5263.7f, 71.7f, 30f, 30f, 10f, false, true, 0))
									{
										if (iVar5 == 0)
										{
											AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_175[iVar5], 3);
										}
										bVar6 = true;
									}
								}
								else
								{
									bVar6 = true;
								}
								if (bVar6)
								{
									if (iVar0 == 0)
									{
										iVar7 = 0;
									}
									else if (iVar0 == 1)
									{
										iVar7 = 950;
									}
									else if (iVar0 == 2)
									{
										iVar7 = 450;
									}
									else if (iVar0 == 3)
									{
										iVar7 = 0;
									}
									else if (iVar0 == 4)
									{
										iVar7 = 1900;
									}
									else if (iVar0 == 5)
									{
										iVar7 = 1200;
									}
									if (Local_289[iVar0 /*21*/].f_8 == 0)
									{
										Local_289[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - Local_289[iVar0 /*21*/].f_8) > iVar7)
									{
										if (iVar0 == 0)
										{
											Local_289[iVar0 /*21*/].f_10 = { -566.3519f, 5256.4736f, 69.467f };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_289[iVar0 /*21*/], Local_289[iVar0 /*21*/].f_10, 3f, true, false);
										}
										else if (iVar0 == 1)
										{
											Local_289[iVar0 /*21*/].f_10 = { -566.4669f, 5270.942f, 69.2532f };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_289[iVar0 /*21*/], Local_289[iVar0 /*21*/].f_10, 3f, true, false);
										}
										else if (iVar0 == 2)
										{
											Local_289[iVar0 /*21*/].f_10 = { ENTITY::GET_ENTITY_COORDS(Local_289[iVar0 /*21*/], true) };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_289[iVar0 /*21*/], Local_289[iVar0 /*21*/].f_10, 5f, true, false);
										}
										else if (iVar0 == 3)
										{
											if (!Global_96890)
											{
												Local_289[iVar0 /*21*/].f_10 = { -573.4135f, 5274.261f, 69.2604f };
											}
											else
											{
												Local_289[iVar0 /*21*/].f_10 = { -542.5646f, 5232.9062f, 74.4704f };
											}
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_289[iVar0 /*21*/], Local_289[iVar0 /*21*/].f_10, 3f, true, false);
										}
										else if (iVar0 == 4)
										{
											if (!Global_96890)
											{
												Local_289[iVar0 /*21*/].f_10 = { ENTITY::GET_ENTITY_COORDS(Local_289[iVar0 /*21*/], true) };
											}
											else
											{
												Local_289[iVar0 /*21*/].f_10 = { -547.2554f, 5231.9375f, 73.178f };
											}
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_289[iVar0 /*21*/], Local_289[iVar0 /*21*/].f_10, 5f, true, false);
										}
										else
										{
											if (!Global_96890)
											{
												Local_289[iVar0 /*21*/].f_10 = { ENTITY::GET_ENTITY_COORDS(Local_289[iVar0 /*21*/], true) };
											}
											else
											{
												Local_289[iVar0 /*21*/].f_10 = { -541.3654f, 5227.298f, 75.7013f };
											}
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_289[iVar0 /*21*/], Local_289[iVar0 /*21*/].f_10, 5f, true, false);
										}
										__LIB_28__::func_241(&(Local_289[iVar0 /*21*/]), 10, 1, 2, 0, 1);
										if (WEAPON::HAS_PED_GOT_WEAPON(Local_289[iVar0 /*21*/], joaat("WEAPON_SMG"), false))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(Local_289[iVar0 /*21*/], joaat("WEAPON_SMG"), true);
										}
										else if (WEAPON::HAS_PED_GOT_WEAPON(Local_289[iVar0 /*21*/], joaat("WEAPON_ASSAULTRIFLE"), false))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(Local_289[iVar0 /*21*/], joaat("WEAPON_ASSAULTRIFLE"), true);
										}
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_289[iVar0 /*21*/], 1, false);
										PED::SET_COMBAT_FLOAT(Local_289[iVar0 /*21*/], 5, 1f);
										PED::SET_COMBAT_FLOAT(Local_289[iVar0 /*21*/], 13, 3f);
										if (iVar0 < 3 || PED::IS_PED_INJURED(func_484(0)))
										{
											TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_289[iVar0 /*21*/], 200f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_289[iVar0 /*21*/], false);
										}
										else
										{
											TASK::OPEN_SEQUENCE_TASK(&iVar1);
											if (iVar0 == 3)
											{
												TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -570.1f, 5236.1f, 69.6337f, func_484(0), 2f, false, 2f, 2f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
											}
											else if (iVar0 == 4)
											{
												TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -571.1f, 5235.4f, 69.6337f, func_484(0), 2f, false, 2f, 2f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
											}
											else if (iVar0 == 5)
											{
												TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -573.1f, 5235.4f, 69.6337f, func_484(0), 2f, false, 2f, 2f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
											}
											TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_289[iVar0 /*21*/].f_10, func_484(0), 2f, false, 1f, 4f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
											TASK::TASK_COMBAT_PED(0, func_484(0), 67108864, 16);
											TASK::CLOSE_SEQUENCE_TASK(iVar1);
											TASK::TASK_PERFORM_SEQUENCE(Local_289[iVar0 /*21*/], iVar1);
											TASK::CLEAR_SEQUENCE_TASK(&iVar1);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_289[iVar0 /*21*/], true);
										}
										if (iVar0 == 0)
										{
											__LIB_0__::func_640(Local_289[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
										}
										Local_289[iVar0 /*21*/].f_4 = 0;
										Local_289[iVar0 /*21*/].f_8 = 0;
										Local_289[iVar0 /*21*/].f_7++;
									}
								}
								break;
							case 1:
								if (iVar0 >= 3 && Global_96890)
								{
									if (iVar0 == 3)
									{
										iVar8 = 10000;
										Var9 = { -562.8715f, 5217.48f, 81.9101f };
									}
									else if (iVar0 == 4)
									{
										iVar8 = 10700;
										Var9 = { -578.9219f, 5207.404f, 81.6344f };
									}
									else
									{
										iVar8 = 11200;
										Var9 = { -586.4161f, 5210.2407f, 80.3978f };
									}
									if (Local_289[iVar0 /*21*/].f_8 == 0)
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_289[iVar0 /*21*/], true), Local_289[iVar0 /*21*/].f_10) < 4f)
										{
											Local_289[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - Local_289[iVar0 /*21*/].f_8) > iVar8)
									{
										Local_289[iVar0 /*21*/].f_10 = { Var9 };
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_289[iVar0 /*21*/], Local_289[iVar0 /*21*/].f_10, 3f, true, false);
										Local_289[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										Local_289[iVar0 /*21*/].f_7++;
									}
								}
								break;
							case 2:
								if (iVar0 >= 3 && Global_96890)
								{
									if (!PED::IS_PED_INJURED(uLocal_194[0]))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_289[iVar0 /*21*/], true), Local_289[iVar0 /*21*/].f_10) < 4f && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_194[0], Local_289[iVar0 /*21*/], true))
										{
											ENTITY::SET_ENTITY_HEALTH(uLocal_194[0], 0, 0);
										}
									}
								}
								break;
						}
						if (Local_289[iVar0 /*21*/].f_7 > 0)
						{
							__LIB_0__::func_631(Local_289[iVar0 /*21*/], &(Local_289[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (iVar0 == 3)
							{
								if (!iLocal_100[66])
								{
									if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_289[iVar0 /*21*/], true), Var2) < 900f)
										{
											if (!PED::IS_PED_INJURED(uLocal_194[0]))
											{
												__LIB_0__::func_222(&Local_294, 6, Local_289[iVar0 /*21*/], "fr2_enemy3", 0, 1);
												if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "Lm2_flank", 7, 0, 0, 0))
												{
													iLocal_100[66] = 1;
												}
											}
										}
										else
										{
											iLocal_100[66] = 1;
										}
									}
								}
							}
							if (iVar0 < 3)
							{
								if (!Local_289[iVar0 /*21*/].f_4)
								{
									if (Local_289[iVar0 /*21*/].f_8 == 0)
									{
										if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_289[iVar0 /*21*/], true), Local_289[iVar0 /*21*/].f_10) < 4f)
										{
											Local_289[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - Local_289[iVar0 /*21*/].f_8) > 10000)
									{
										if ((!Local_289[iVar0 /*21*/].f_5 && iLocal_185 != 0) || (Local_289[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_289[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_289[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_289[iVar0 /*21*/], 50, true);
											Local_289[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
								else if (iLocal_185 == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_289[iVar0 /*21*/], true), Var2) > 900f)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_289[iVar0 /*21*/], 51, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_289[iVar0 /*21*/], 50, false);
										PED::SET_PED_COMBAT_MOVEMENT(Local_289[iVar0 /*21*/], 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_289[iVar0 /*21*/], Local_289[iVar0 /*21*/].f_10, 3f, true, false);
										Local_289[iVar0 /*21*/].f_4 = 0;
									}
								}
							}
							if (iLocal_185 == 0)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_289[iVar0 /*21*/], true);
							}
							else
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_289[iVar0 /*21*/], false);
							}
							if (iVar0 >= 3)
							{
								if (iLocal_185 != 0)
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_289[iVar0 /*21*/], PLAYER::PLAYER_PED_ID(), true) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_289[iVar0 /*21*/], true), Var2) < 10f)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_289[iVar0 /*21*/], joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
										{
											TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_289[iVar0 /*21*/], 200f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_289[iVar0 /*21*/], false);
										}
									}
								}
							}
						}
					}
					else
					{
						func_491(Local_289[iVar0 /*21*/], Var2);
						func_488(&(Local_289[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_175[0], false) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_175[0]))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(11, sLocal_155);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_175[1], false) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_175[1]))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(12, sLocal_155);
			}
		}
	}
}

int func_484(int iParam0)//Position - 0x71BB9
{
	if (__LIB_16__::func_512(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return uLocal_194[__LIB_0__::func_682(iParam0)];
}

int func_485(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x71BE7
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar0 = func_499(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true) + Vector(3f, 0f, 0f), 0f, iParam3, iParam4, iParam5, iParam6, iParam7);
		PED::SET_PED_INTO_VEHICLE(iVar0, iParam1, iParam2);
	}
	return iVar0;
}

void func_488(int* iParam0, bool bParam1)//Position - 0x71C9F
{
	int iVar0;
	int iVar1;
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
	}
	__LIB_0__::func_621(&(iParam0->f_13));
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(*iParam0);
				if (iVar1 == iLocal_292)
				{
					__LIB_0__::func_497(363, 1, 0);
				}
			}
		}
	}
	TASK::REMOVE_COVER_POINT(iParam0->f_2);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	if (bParam1)
	{
		iParam0->f_3 = 0;
		iParam0->f_7 = 0;
		iParam0->f_8 = 0;
		iParam0->f_9 = 0;
		*iParam0 = 0;
	}
}

void func_491(int iParam0, struct<3> Param1)//Position - 0x71E73
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam0);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (iVar1 == uLocal_194[0])
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Param1) < 10000f)
			{
				iLocal_115 = MISC::GET_GAME_TIMER();
			}
		}
		else if (iVar1 == uLocal_194[1])
		{
			iLocal_116 = MISC::GET_GAME_TIMER();
		}
		else if (iVar1 == PLAYER::PLAYER_PED_ID())
		{
			Local_65 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
			iLocal_117 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_496(int iParam0, char* sParam1)//Position - 0x72345
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_497(iParam0[iVar0 /*21*/], sParam1, iVar0);
		iVar0++;
	}
}

void func_497(var uParam0, var uParam1, int iParam2)//Position - 0x72372
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		TASK::TASK_STAND_STILL(*uParam0, -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		__LIB_0__::func_609(*uParam0, 0);
		uParam0->f_3 = 1;
		uParam0->f_4 = 0;
		uParam0->f_6 = 0;
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
		uParam0->f_8 = 0;
		uParam1 = uParam1;
		iParam2 = iParam2;
	}
}

int func_499(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x7245E
{
	int iVar0;
	iVar0 = PED::CREATE_PED(iParam7, iParam0, Param1, fParam2, true, true);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam6, -1, true, true);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iParam6);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam4);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam4, 0);
	PED::ADD_ARMOUR_TO_PED(iVar0, -PED::GET_PED_ARMOUR(iVar0));
	PED::ADD_ARMOUR_TO_PED(iVar0, iParam5);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam3);
	PED::SET_PED_AS_ENEMY(iVar0, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 188, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 29, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 35, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 23, false);
	PED::SET_PED_MONEY(iVar0, 0);
	return iVar0;
}

void func_500()//Position - 0x72505
{
	struct<3> Var0;
	int iVar1[5];
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	struct<3> Var8;
	struct<3> Var9[6];
	struct<3> Var10[6];
	struct<3> Var11;
	int iVar12;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_267.f_0))
	{
		if (SYSTEM::VDIST2(Var0, Local_55) < 40000f && Local_271[0 /*21*/].f_3)
		{
			func_192(Local_55, fLocal_144);
		}
	}
	else if (!PED::IS_PED_INJURED(Local_267.f_0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_267.f_0, true) };
		bVar5 = (PED::IS_PED_IN_COMBAT(Local_267.f_0, 0) || TASK::GET_SCRIPT_TASK_STATUS(Local_267.f_0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) == 1);
		if (!PED::IS_PED_INJURED(uLocal_194[1]))
		{
			Var8 = { Local_264.f_11 };
		}
		else if (!PED::IS_PED_INJURED(uLocal_194[2]))
		{
			Var8 = { Local_258.f_11 };
		}
		Var9[0 /*3*/] = { -523.093f, 5306.6973f, 79.2448f };
		Var9[1 /*3*/] = { -498.3445f, 5300.786f, 79.6049f };
		Var9[2 /*3*/] = { -498.9495f, 5281.7505f, 79.61f };
		Var9[3 /*3*/] = { -516.5259f, 5258.892f, 79.5591f };
		Var9[4 /*3*/] = { -532.4301f, 5261.022f, 73.3084f };
		Var9[5 /*3*/] = { -577.0162f, 5256.7354f, 69.4628f };
		Var10[0 /*3*/] = { -519.9658f, 5307.7275f, 79.2448f };
		Var10[1 /*3*/] = { -498.4532f, 5303.5f, 79.5833f };
		Var10[2 /*3*/] = { -504.163f, 5282.2646f, 79.61f };
		Var10[3 /*3*/] = { -517.9027f, 5256.091f, 79.5374f };
		Var10[4 /*3*/] = { -541.1633f, 5260.263f, 73.2855f };
		Var10[5 /*3*/] = { -577.0162f, 5256.7354f, 69.4628f };
		STREAMING::REQUEST_ANIM_DICT(sLocal_149);
		PED::SET_PED_RESET_FLAG(Local_267.f_0, 227, true);
		switch (Local_267.f_3)
		{
			case 0:
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_149))
				{
					PED::SET_PED_CONFIG_FLAG(Local_267.f_0, 118, false);
					PED::SET_PED_CONFIG_FLAG(Local_267.f_0, 208, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_267.f_0, iLocal_293);
					PED::SET_PED_CAN_BE_TARGETTED(Local_267.f_0, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_267.f_0, true);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_267.f_0, false);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_267.f_0, joaat("WEAPON_UNARMED"), true);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_267.f_0, 729);
					TASK::TASK_PLAY_ANIM(Local_267.f_0, sLocal_149, "lamar_base_idle", 8f, -4f, -1, 262145, 0f, false, false, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267.f_0, true);
					Local_267.f_3++;
				}
				break;
			case 1:
				PED::SET_PED_CAPSULE(Local_267.f_0, 0.5f);
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -512.4742f, 5304.625f, 78.76758f, -525.51825f, 5308.7466f, 83.01758f, 3.5f, false, true, 0) && PED::IS_PED_INJURED(Local_272[0 /*21*/])) && Local_272[0 /*21*/].f_3)
				{
					TASK::TASK_PLAY_ANIM(Local_267.f_0, sLocal_149, "lamar_base_idle_to_standing_idle", 4f, -1.5f, -1, 262144, 0f, false, false, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267.f_0, true);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 3);
					func_507();
					Local_267.f_3++;
				}
				break;
			case 2:
				if (!iLocal_100[23] && !iLocal_100[24])
				{
					if (!__LIB_13__::func_755(&Local_238, 1))
					{
						if (iLocal_185 == 1)
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "lm2_lgof", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
								iLocal_100[23] = 1;
							}
						}
						else if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "lm2_lgot", 7, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
							iLocal_100[24] = 1;
						}
					}
				}
				else
				{
					bLocal_71 = true;
				}
				PED::SET_PED_CAPSULE(Local_267.f_0, 0.5f);
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_267.f_0, sLocal_149, "lamar_base_idle_to_standing_idle", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_267.f_0, sLocal_149, "lamar_base_idle_to_standing_idle") > 0.65f) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_267.f_0, sLocal_149, "lamar_base_idle_to_standing_idle", 3))
				{
					TASK::CLEAR_PED_TASKS(Local_267.f_0);
					Local_267.f_3 = 50;
				}
				break;
			case 50:
				if (!WEAPON::HAS_PED_GOT_WEAPON(Local_267.f_0, joaat("WEAPON_PISTOL"), false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_267.f_0, joaat("WEAPON_PISTOL"), -1, false, false);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_267.f_0, joaat("PLAYER"));
				__LIB_28__::func_241(&Local_267, 10, 1, 2, 1, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_267.f_0, 12, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_267.f_0, 36, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_267.f_0, 35, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_267.f_0, 29, true);
				PED::SET_PED_CONFIG_FLAG(Local_267.f_0, 118, false);
				ENTITY::SET_ENTITY_PROOFS(Local_267.f_0, false, true, false, false, false, false, false, false);
				PED::SET_PED_CAN_BE_TARGETTED(Local_267.f_0, false);
				PED::SET_PED_MAX_HEALTH(Local_267.f_0, 1800);
				ENTITY::SET_ENTITY_HEALTH(Local_267.f_0, 1800, 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_267.f_0, false);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_267.f_0, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_267.f_0, 729);
				PED::SET_PED_USING_ACTION_MODE(Local_267.f_0, true, -1, 0);
				TASK::SET_PED_PATH_AVOID_FIRE(Local_267.f_0, true);
				Local_267.f_11 = { Var9[0 /*3*/] };
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
				Local_267.f_5 = 0;
				Local_267.f_3++;
				Local_267.f_7 = 1;
				break;
			case 51:
				PED::GET_PED_NEARBY_PEDS(Local_267.f_0, &iVar1, -1);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar2]))
					{
						if (ENTITY::GET_ENTITY_MODEL(iVar1[iVar2]) == iLocal_177)
						{
							if (SYSTEM::VDIST2(Var3, ENTITY::GET_ENTITY_COORDS(iVar1[iVar2], false)) < 16f)
							{
								Var11 = { ENTITY::GET_ENTITY_COORDS(iVar1[iVar2], false) };
							}
						}
					}
					iVar2++;
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(Local_267.f_0, joaat("WEAPON_PISTOL"), false))
				{
					WEAPON::GET_CURRENT_PED_WEAPON(Local_267.f_0, &iVar12, true);
				}
				if (!__LIB_0__::func_78(Var11, 0f, 0f, 0f, 0))
				{
					STREAMING::REQUEST_ANIM_DICT(sLocal_156);
					if (Local_267.f_5 == 0)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_156))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar7);
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var11, 2f, -1, 0.25f, 1, 40000f);
							TASK::TASK_PLAY_ANIM(0, sLocal_156, "pickup_low", 1.5f, -1.5f, -1, 262144, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar7);
							TASK::TASK_PERFORM_SEQUENCE(Local_267.f_0, iVar7);
							TASK::CLEAR_SEQUENCE_TASK(&iVar7);
							TASK::TASK_LOOK_AT_COORD(Local_267.f_0, Var11, -1, 2048, 2);
							Local_267.f_5 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - Local_267.f_5) > 3000 && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_267.f_0, sLocal_156, "pickup_low", 3))
					{
						if (iVar12 != joaat("WEAPON_PISTOL"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Local_267.f_0, joaat("WEAPON_PISTOL"), true);
						}
						TASK::TASK_CLEAR_LOOK_AT(Local_267.f_0);
						STREAMING::REMOVE_ANIM_DICT(sLocal_156);
						Local_267.f_5 = 0;
						Local_267.f_3++;
						Local_267.f_7 = 1;
					}
					else if (iVar12 != joaat("WEAPON_PISTOL"))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_267.f_0, sLocal_156, "pickup_low", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_267.f_0, sLocal_156, "pickup_low") > 0.381f)
							{
								WEAPON::SET_CURRENT_PED_WEAPON(Local_267.f_0, joaat("WEAPON_PISTOL"), true);
							}
						}
					}
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_267.f_0, joaat("WEAPON_PISTOL"), true);
					STREAMING::REMOVE_ANIM_DICT(sLocal_156);
					Local_267.f_5 = 0;
					Local_267.f_3++;
					Local_267.f_7 = 1;
				}
				break;
			case 52:
				if (!Local_267.f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), Local_267.f_0, Local_267.f_11, Var8, 3f, 2f))
					{
						if (Local_267.f_8)
						{
							Local_267.f_11 = { Var9[0 /*3*/] };
							Local_267.f_8 = 0;
						}
						else
						{
							Local_267.f_11 = { Var10[0 /*3*/] };
							Local_267.f_8 = 1;
						}
						bVar4 = true;
						Local_267.f_7 = 1;
					}
				}
				fVar6 = SYSTEM::VDIST2(Var3, Local_267.f_11);
				if (Local_267.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_267.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar6 > 4f || !bVar5)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar7);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar7);
					TASK::TASK_PERFORM_SEQUENCE(Local_267.f_0, iVar7);
					TASK::CLEAR_SEQUENCE_TASK(&iVar7);
					Local_267.f_7 = 0;
				}
				if ((!func_503(Local_267.f_0, Var9[1 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_277) == 0) && (__LIB_28__::func_240(&Local_278) < Local_278.f_0 || (!PED::IS_PED_INJURED(func_484(1)) && ENTITY::IS_ENTITY_AT_COORD(func_484(1), -499.08777f, 5287.9624f, 84.85998f, 56.75f, 9f, 9.5f, false, true, 0))))
				{
					Local_267.f_11 = { Var9[1 /*3*/] };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					Local_267.f_5 = 0;
					Local_267.f_3++;
					Local_267.f_7 = 1;
				}
				break;
			case 53:
				if (!Local_267.f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), Local_267.f_0, Local_267.f_11, Var8, 3f, 2f))
					{
						if (Local_267.f_8)
						{
							Local_267.f_11 = { Var9[1 /*3*/] };
							Local_267.f_8 = 0;
						}
						else
						{
							Local_267.f_11 = { Var10[1 /*3*/] };
							Local_267.f_8 = 1;
						}
						bVar4 = true;
						Local_267.f_7 = 1;
					}
				}
				fVar6 = SYSTEM::VDIST2(Var3, Local_267.f_11);
				if (Local_267.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_267.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar6 > 4f || !bVar5)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar7);
					if (fVar6 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Local_267.f_11, -516.1574f, 5247.171f, 80.3439f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar7);
					TASK::TASK_PERFORM_SEQUENCE(Local_267.f_0, iVar7);
					TASK::CLEAR_SEQUENCE_TASK(&iVar7);
					Local_267.f_7 = 0;
				}
				if (__LIB_17__::func_745(Local_267.f_0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_267.f_0, -511.0591f, 5255.0005f, 79.36004f, -496.35767f, 5296.4565f, 84.41231f, 14.25f, false, true, 0))
					{
						if (__LIB_28__::func_240(&Local_278) > 0)
						{
							if (!__LIB_28__::func_242(PLAYER::PLAYER_PED_ID(), Local_267.f_0, -516.1574f, 5247.171f, 80.3439f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_267.f_0, -516.1574f, 5247.171f, 80.3439f, false);
							}
						}
					}
				}
				if ((!func_503(Local_267.f_0, Var9[2 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_278) == 0) && __LIB_28__::func_240(&Local_288) < Local_288.f_0)
				{
					Local_267.f_11 = { Var9[2 /*3*/] };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					Local_267.f_5 = 0;
					Local_267.f_3++;
					Local_267.f_7 = 1;
				}
				else if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
				{
					if (!iLocal_100[44])
					{
						if (Local_278[0 /*21*/].f_7 > 0)
						{
							if (SYSTEM::VDIST2(Var0, Var3) < 900f)
							{
								if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_MORE", 7, 0, 0, 0))
								{
									iLocal_100[44] = 1;
								}
							}
						}
					}
					if (!iLocal_100[43])
					{
						if (!PED::IS_PED_INJURED(Local_278[2 /*21*/]))
						{
							if (SYSTEM::VDIST2(Var0, Var3) < 900f)
							{
								if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_LSIDE", 7, 0, 0, 0))
								{
									iLocal_100[43] = 1;
								}
							}
						}
					}
				}
				break;
			case 54:
				if (!Local_267.f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), Local_267.f_0, Local_267.f_11, Var8, 5f, 3f))
					{
						if (Local_267.f_8)
						{
							Local_267.f_11 = { Var9[2 /*3*/] };
							Local_267.f_8 = 0;
						}
						else
						{
							Local_267.f_11 = { Var10[2 /*3*/] };
							Local_267.f_8 = 1;
						}
						bVar4 = true;
						Local_267.f_7 = 1;
					}
				}
				fVar6 = SYSTEM::VDIST2(Var3, Local_267.f_11);
				if (Local_267.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_267.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar6 > 4f || !bVar5)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar7);
					if (fVar6 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Local_267.f_11, -516.1574f, 5247.171f, 80.3439f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar7);
					TASK::TASK_PERFORM_SEQUENCE(Local_267.f_0, iVar7);
					TASK::CLEAR_SEQUENCE_TASK(&iVar7);
					Local_267.f_7 = 0;
				}
				if (__LIB_17__::func_745(Local_267.f_0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_267.f_0, -511.0591f, 5255.0005f, 79.36004f, -496.35767f, 5296.4565f, 84.41231f, 14.25f, false, true, 0))
					{
						if (__LIB_28__::func_240(&Local_288) > 0)
						{
							if (!__LIB_28__::func_242(PLAYER::PLAYER_PED_ID(), Local_267.f_0, -516.1574f, 5247.171f, 80.3439f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_267.f_0, -516.1574f, 5247.171f, 80.3439f, false);
							}
						}
					}
				}
				if (!func_503(Local_267.f_0, Var9[3 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_288) == 0)
				{
					Local_267.f_11 = { Var9[3 /*3*/] };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					Local_267.f_5 = 0;
					Local_267.f_3++;
					Local_267.f_7 = 1;
				}
				else if (!iLocal_100[45])
				{
					if (Local_288[0 /*21*/].f_7 > 0 && !__LIB_13__::func_755(&Local_238, 1))
					{
						if (SYSTEM::VDIST2(Var0, Var3) < 625f)
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_MORE", 7, 0, 0, 0))
							{
								iLocal_100[45] = 1;
							}
						}
					}
				}
				break;
			case 55:
				if (!Local_267.f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), Local_267.f_0, Local_267.f_11, Var8, 5f, 3f))
					{
						if (Local_267.f_8)
						{
							Local_267.f_11 = { Var9[3 /*3*/] };
							Local_267.f_8 = 0;
						}
						else
						{
							Local_267.f_11 = { Var10[3 /*3*/] };
							Local_267.f_8 = 1;
						}
						bVar4 = true;
						Local_267.f_7 = 1;
					}
				}
				fVar6 = SYSTEM::VDIST2(Var3, Local_267.f_11);
				if (Local_267.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_267.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar6 > 4f || !bVar5)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar7);
					if (fVar6 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_267.f_11, 2f, -1, 0.5f, 1, 40000f);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar7);
					TASK::TASK_PERFORM_SEQUENCE(Local_267.f_0, iVar7);
					TASK::CLEAR_SEQUENCE_TASK(&iVar7);
					Local_267.f_7 = 0;
				}
				if (!func_503(Local_267.f_0, Var9[4 /*3*/], 1101004800) && ((!PED::IS_PED_INJURED(func_484(1)) && ENTITY::IS_ENTITY_AT_COORD(func_484(1), -556.7076f, 5235.4272f, 83.054245f, 19.25f, 44.75f, 16.75f, false, true, 0)) || __LIB_28__::func_240(&Local_289) == 0))
				{
					Local_267.f_11 = { Var9[4 /*3*/] };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					Local_267.f_5 = 0;
					Local_267.f_3++;
					Local_267.f_7 = 1;
				}
				break;
			case 56:
				if (!Local_267.f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), Local_267.f_0, Local_267.f_11, Var8, 5f, 3f))
					{
						if (Local_267.f_8)
						{
							Local_267.f_11 = { Var9[4 /*3*/] };
							Local_267.f_8 = 0;
						}
						else
						{
							Local_267.f_11 = { Var10[4 /*3*/] };
							Local_267.f_8 = 1;
						}
						bVar4 = true;
						Local_267.f_7 = 1;
					}
				}
				fVar6 = SYSTEM::VDIST2(Var3, Local_267.f_11);
				if (Local_267.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_267.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar6 > 4f || !bVar5)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar7);
					if (fVar6 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Local_267.f_11, -574.0313f, 5258.59f, 71.0182f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar7);
					TASK::TASK_PERFORM_SEQUENCE(Local_267.f_0, iVar7);
					TASK::CLEAR_SEQUENCE_TASK(&iVar7);
					Local_267.f_7 = 0;
				}
				if (__LIB_17__::func_745(Local_267.f_0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_267.f_0, -527.86066f, 5247.0664f, 79.93937f, -556.41766f, 5258.9277f, 69.14958f, 14.5f, false, true, 0))
					{
						if (__LIB_28__::func_240(&Local_289) > 0)
						{
							if (!__LIB_28__::func_242(PLAYER::PLAYER_PED_ID(), Local_267.f_0, -574.0313f, 5258.59f, 71.0182f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_267.f_0, -574.0313f, 5258.59f, 71.0182f, false);
							}
						}
					}
				}
				if (__LIB_28__::func_240(&Local_289) == 0)
				{
					Local_267.f_11 = { Var9[5 /*3*/] };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					Local_267.f_5 = 0;
					Local_267.f_3++;
					Local_267.f_7 = 1;
				}
				else if (!iLocal_100[46])
				{
					if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
					{
						if (Local_289[0 /*21*/].f_3)
						{
							if (SYSTEM::VDIST2(Var0, Var3) < 900f && SYSTEM::VDIST2(Var3, Local_267.f_11) < 400f)
							{
								if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175[0], false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_175[0])) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175[1], false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_175[1])))
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_LCARS", 7, 0, 0, 0))
									{
										iLocal_100[49] = 1;
									}
								}
								else if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_MORE", 7, 0, 0, 0))
								{
									iLocal_100[46] = 1;
								}
							}
						}
					}
				}
				break;
			case 57:
				fVar6 = SYSTEM::VDIST2(Var3, Local_267.f_11);
				if (Local_267.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_267.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar6 > 4f || !bVar5)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267.f_0, Local_267.f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar7);
					if (fVar6 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Local_267.f_11, -591.5313f, 5285.29f, 71.0182f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar7);
					TASK::TASK_PERFORM_SEQUENCE(Local_267.f_0, iVar7);
					TASK::CLEAR_SEQUENCE_TASK(&iVar7);
					Local_267.f_7 = 0;
				}
				if (SYSTEM::VDIST2(Var3, Local_267.f_11) < 25f)
				{
					if (iLocal_185 == 1)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267.f_0, false);
						TASK::CLEAR_PED_TASKS(Local_267.f_0);
						PED::SET_PED_AS_GROUP_MEMBER(Local_267.f_0, __LIB_0__::func_495());
						PED::SET_PED_NEVER_LEAVES_GROUP(Local_267.f_0, true);
						Local_267.f_3 = 100;
					}
				}
				break;
			case 100:
				break;
		}
		if (Local_267.f_3 > 50 && !PED::IS_PED_INJURED(Local_267.f_0))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(Local_267.f_0))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_134) > 2000)
				{
					FIRE::STOP_ENTITY_FIRE(Local_267.f_0);
				}
			}
			else
			{
				iLocal_134 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

int func_503(int iParam0, struct<3> Param1, float fParam2)//Position - 0x739C5
{
	var uVar0[8];
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		iVar6 = 0;
		PED::GET_PED_NEARBY_PEDS(iParam0, &uVar0, -1);
		while (iVar6 < 8)
		{
			if (!PED::IS_PED_INJURED(uVar0[iVar6]))
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar0[iVar6]) == iLocal_177)
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true) };
					fVar3 = SYSTEM::VDIST2(Var2, Var1);
					fVar5 = SYSTEM::VDIST2(Var2, Param1);
					fVar4 = SYSTEM::VDIST2(Var1, Param1);
					if (fVar3 < (fVar4 + (fParam2 * fParam2)))
					{
						if (fVar5 < fVar4 || fVar3 < 225f)
						{
							return 1;
						}
					}
				}
			}
			iVar6++;
		}
	}
	return 0;
}

int func_504(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4, float fParam5)//Position - 0x73A85
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	if (!PED::IS_PED_INJURED(iParam1) && !PED::IS_PED_INJURED(iParam0))
	{
		if (__LIB_0__::func_490(Param3, Param2, 1056964608, 0))
		{
			return 1;
		}
		else
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
			fVar2 = SYSTEM::VDIST2(Var1, Param2);
			fVar3 = SYSTEM::VDIST2(Var0, Param2);
			if (fVar2 < (fParam4 * fParam4))
			{
				if (fVar3 < (fParam5 * fParam5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_507()//Position - 0x73BCE
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[2]))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_178, ENTITY::GET_ENTITY_COORDS(iLocal_173[2], false), false))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_173[2], -599.5241f, 5287.424f, 69.7612f, false, false, false, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[3]))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_178, ENTITY::GET_ENTITY_COORDS(iLocal_173[3], false), false))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_173[3], -551.522f, 5251.099f, 72.2283f, false, false, false, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[4]))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_178, ENTITY::GET_ENTITY_COORDS(iLocal_173[4], false), false))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_173[4], -568.607f, 5270.833f, 69.8024f, false, false, false, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_291.f_0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_291.f_0, false) };
		if (SYSTEM::VDIST2(Var0, -585.3985f, 5283.5503f, 69.2604f) < 2500f)
		{
			ENTITY::SET_ENTITY_COORDS(Local_291.f_0, -585.3985f, 5283.5503f, 69.2604f, false, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_291.f_0, 0f, 0f, 213.3433f, 2, false);
		}
		if (SYSTEM::VDIST2(Var0, -509.1606f, 5238.897f, 79.3041f) < 2500f)
		{
			ENTITY::SET_ENTITY_COORDS(Local_291.f_0, -509.1606f, 5238.897f, 79.3041f, false, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_291.f_0, 0f, 0f, 256.9148f, 2, false);
		}
	}
}

void func_509(char* sParam0)//Position - 0x73D6D
{
	__LIB_0__::func_381(sParam0);
	func_510(0);
}

void func_510(int iParam0)//Position - 0x73D80
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_511(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_511(int iParam0)//Position - 0x73DC5
{
	int iVar0;
	int iVar1;
	__LIB_17__::func_505();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_512(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_512(var uParam0, int iParam1)//Position - 0x73ED5
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_514(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__::func_17(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

int func_514(int iParam0, var uParam1, float fParam2)//Position - 0x740AC
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_514(8, uParam1, fParam2);
			break;
		case 10:
			return func_514(8, uParam1, fParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_520(bool bParam0)//Position - 0x74BF2
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_164)
	{
		__LIB_16__::func_13(&(iLocal_164[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_165)
	{
		__LIB_16__::func_13(&(iLocal_165[iVar0]), bParam0);
		iVar0++;
	}
}

void func_522(bool bParam0)//Position - 0x74C78
{
	int iVar0;
	__LIB_28__::func_239(&iLocal_174, bParam0);
	__LIB_28__::func_239(&(iLocal_175[0]), bParam0);
	__LIB_28__::func_239(&(iLocal_175[1]), bParam0);
	__LIB_28__::func_239(&Local_291, bParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_173)
	{
		__LIB_28__::func_239(&(iLocal_173[iVar0]), bParam0);
		iVar0++;
	}
}

void func_523(bool bParam0)//Position - 0x74CCE
{
	func_524(&Local_270, bParam0);
	func_524(&Local_271, bParam0);
	func_524(&Local_277, bParam0);
	func_524(&Local_278, bParam0);
	func_524(&Local_279, bParam0);
	func_524(&Local_272, bParam0);
	func_524(&Local_273, bParam0);
	func_524(&Local_274, bParam0);
	func_524(&Local_275, bParam0);
	func_524(&Local_276, bParam0);
	func_524(&Local_280, bParam0);
	func_524(&Local_281, bParam0);
	func_524(&Local_283, bParam0);
	func_524(&Local_284, bParam0);
	func_524(&Local_285, bParam0);
	func_524(&Local_286, bParam0);
	func_524(&Local_287, bParam0);
	func_524(&Local_288, bParam0);
	func_524(&Local_289, bParam0);
	func_524(&Local_290, bParam0);
}

void func_524(var uParam0, bool bParam1)//Position - 0x74D8A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*21*/])->f_1))
		{
			HUD::REMOVE_BLIP(&((uParam0[iVar0 /*21*/])->f_1));
		}
		__LIB_0__::func_621(&((uParam0[iVar0 /*21*/])->f_13));
		TASK::REMOVE_COVER_POINT((uParam0[iVar0 /*21*/])->f_2);
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*21*/]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*21*/], false) && PED::GET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iVar0 /*21*/]) == iLocal_292)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*21*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else if (!PED::IS_PED_INJURED(uLocal_194[1]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*21*/], uLocal_194[1], 0, 16);
				}
				else if (!PED::IS_PED_INJURED(uLocal_194[2]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*21*/], uLocal_194[2], 0, 16);
				}
				else if (!PED::IS_PED_INJURED(uLocal_194[0]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*21*/], uLocal_194[0], 0, 16);
				}
				PED::SET_PED_KEEP_TASK((*uParam0)[iVar0 /*21*/], true);
			}
		}
		func_43(uParam0[iVar0 /*21*/], bParam1);
		(uParam0[iVar0 /*21*/])->f_3 = 0;
		(uParam0[iVar0 /*21*/])->f_7 = 0;
		(uParam0[iVar0 /*21*/])->f_9 = 0;
		(uParam0[iVar0 /*21*/])->f_8 = 0;
		iVar0++;
	}
}

void func_525()//Position - 0x74ED0
{
	AUDIO::CANCEL_MUSIC_EVENT("FRA2_END_VEHICLE");
}

bool func_542(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x75541
{
	return __LIB_28__::func_249(iParam0, Param1, Param2, bParam3, iParam4, 0, 0, sParam5, sParam6, sParam6, sParam6, sParam6, bParam7, bParam8, bParam9, iParam10);
}

void func_593()//Position - 0x78191
{
	if (HUD::DOES_BLIP_EXIST(iLocal_157))
	{
		HUD::REMOVE_BLIP(&iLocal_157);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_158))
	{
		HUD::REMOVE_BLIP(&iLocal_158);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_159))
	{
		HUD::REMOVE_BLIP(&iLocal_159);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_160))
	{
		HUD::REMOVE_BLIP(&iLocal_160);
	}
	if (HUD::DOES_BLIP_EXIST(Local_261.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_261.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_258.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_258.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_264.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_264.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_267.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_267.f_1));
	}
}

void func_594(bool bParam0)//Position - 0x78231
{
	if (bParam0)
	{
		PATHFIND::SET_ROADS_IN_AREA(-713.6164f, 5242.05f, 0.8567f, -428.4971f, 5498.299f, 171.8567f, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-713.6164f, 5242.05f, 0.8567f, -428.4971f, 5498.299f, 171.8567f, 1);
	}
}

void func_595()//Position - 0x78288
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_16__::func_306(__LIB_17__::func_107(PLAYER::PLAYER_PED_ID()));
	if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
	}
	if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
	{
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, true);
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) < iVar1)
		{
			WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iVar0, iVar1 * 2);
			WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, iVar1);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, true);
	}
}

void func_597(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7833E
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_179(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_0__::func_365(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = __LIB_0__::func_531(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__::func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__::func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_598(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_598(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x784B6
{
	func_599(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_599(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x784D2
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_17__::func_341();
	uParam0->f_1 = __LIB_0__::func_464();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_510(&(uParam0->f_2884), 0);
		__LIB_17__::func_442(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_452(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == __LIB_17__::func_341())
		{
			__LIB_17__::func_665(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328_SPN_TOTAL_CASH[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_601(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_601(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7937D
{
	int iVar0;
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = __LIB_17__::func_107(iParam2);
	}
	if (__LIB_17__::func_502(iParam2, &iVar0, iParam3, iParam5))
	{
		func_602(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				func_602(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_602(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x79405
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
	{
		func_604(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (__LIB_0__::func_385(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

void func_604(var uParam0, int iParam1, int iParam2)//Position - 0x79473
{
	__LIB_0__::func_209(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_607(iParam1, 145, 0);
	uParam0->f_11 = __LIB_0__::func_119(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = __LIB_0__::func_386(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78042 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_607(int iParam0, int iParam1, int iParam2)//Position - 0x795F4
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_97782[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == __LIB_13__::func_741(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_653()//Position - 0x7E9EA
{
	Local_261.f_3 = 0;
	Local_261.f_4 = 0;
	Local_261.f_5 = 0;
	Local_261.f_10 = 0;
	Local_261.f_7 = 0;
	Local_261.f_8 = 0;
	Local_261.f_9 = 0;
	Local_264.f_3 = 0;
	Local_264.f_4 = 0;
	Local_264.f_5 = 0;
	Local_264.f_10 = 0;
	Local_264.f_7 = 0;
	Local_264.f_8 = 0;
	Local_264.f_9 = 0;
	Local_258.f_3 = 0;
	Local_258.f_4 = 0;
	Local_258.f_5 = 0;
	Local_258.f_10 = 0;
	Local_258.f_7 = 0;
	Local_258.f_8 = 0;
	Local_258.f_9 = 0;
	Local_267.f_3 = 0;
	Local_267.f_4 = 0;
	Local_267.f_5 = 0;
	Local_267.f_7 = 0;
	Local_267.f_8 = 0;
	if (!PED::IS_PED_INJURED(uLocal_194[0]))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), 100, true, true);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_194[0], joaat("PLAYER"));
		__LIB_28__::func_241(&(uLocal_194[0]), 5, 1, 2, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[0], 12, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[0], 36, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[0], 35, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[0], 29, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_194[0], 118, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_194[0], 185, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_194[0], 188, true);
		ENTITY::SET_ENTITY_PROOFS(uLocal_194[0], false, true, false, false, false, false, false, false);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_194[0], false);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), true);
		PED::SET_PED_MAX_HEALTH(uLocal_194[0], 1800);
		ENTITY::SET_ENTITY_HEALTH(uLocal_194[0], 1800, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_194[0], false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_194[0], 729);
		PED::SET_PED_USING_ACTION_MODE(uLocal_194[0], true, -1, 0);
	}
	if (!PED::IS_PED_INJURED(uLocal_194[1]))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_194[1], joaat("WEAPON_CARBINERIFLE"), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_194[1], joaat("WEAPON_CARBINERIFLE"), 500, true, true);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_194[1], joaat("PLAYER"));
		__LIB_28__::func_241(&(uLocal_194[1]), 5, 1, 2, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[1], 12, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[1], 36, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[1], 29, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[1], 35, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_194[1], 118, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_194[1], 185, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_194[1], 188, true);
		ENTITY::SET_ENTITY_PROOFS(uLocal_194[1], false, true, false, false, false, false, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_194[1], joaat("WEAPON_CARBINERIFLE"), true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_194[1], false);
		PED::SET_PED_MAX_HEALTH(uLocal_194[1], 1800);
		ENTITY::SET_ENTITY_HEALTH(uLocal_194[1], 1800, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_194[1], false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_194[1], 729);
		PED::SET_PED_USING_ACTION_MODE(uLocal_194[1], true, -1, 0);
	}
	if (!PED::IS_PED_INJURED(uLocal_194[2]))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_194[2], joaat("WEAPON_CARBINERIFLE"), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_194[2], joaat("WEAPON_CARBINERIFLE"), 500, true, true);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_194[2], joaat("PLAYER"));
		__LIB_28__::func_241(&(uLocal_194[2]), 5, 1, 2, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[2], 12, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[2], 36, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_194[2], 118, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_194[2], 185, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_194[2], 188, true);
		ENTITY::SET_ENTITY_PROOFS(uLocal_194[2], false, true, false, false, false, false, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_194[2], joaat("WEAPON_CARBINERIFLE"), true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_194[2], false);
		PED::SET_PED_MAX_HEALTH(uLocal_194[2], 1800);
		ENTITY::SET_ENTITY_HEALTH(uLocal_194[2], 1800, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_194[2], false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_194[2], 729);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[2], 29, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[2], 35, true);
		PED::SET_PED_USING_ACTION_MODE(uLocal_194[2], true, -1, 0);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
	return 1;
}

void func_654(bool bParam0)//Position - 0x7EDEF
{
	int iVar0;
	if (bParam0)
	{
		if (iLocal_162[0] == 0)
		{
			iLocal_162[0] = TASK::ADD_COVER_POINT(-565.6465f, 5257.004f, 69.4669f, 175.0081f, 0, 2, 1, false);
		}
		if (iLocal_162[1] == 0)
		{
			iLocal_162[1] = TASK::ADD_COVER_POINT(-581.6578f, 5291.769f, 69.2604f, 128.3183f, 0, 2, 1, false);
		}
		if (iLocal_162[2] == 0)
		{
			iLocal_162[2] = TASK::ADD_COVER_POINT(-592.0037f, 5236.3384f, 69.9043f, 325.1953f, 2, 0, 1, false);
		}
		if (iLocal_162[3] == 0)
		{
			iLocal_162[3] = TASK::ADD_COVER_POINT(-487.6498f, 5385.08f, 77.0692f, 192.7037f, 2, 0, 1, false);
		}
		if (iLocal_162[4] == 0)
		{
			iLocal_162[4] = TASK::ADD_COVER_POINT(-499.8006f, 5292.344f, 79.61f, 158.0821f, 1, 2, 1, false);
		}
		if (iLocal_162[5] == 0)
		{
			iLocal_162[5] = TASK::ADD_COVER_POINT(-580.1699f, 5262.912f, 69.4438f, 56.725f, 0, 2, 1, false);
		}
		if (iLocal_162[6] == 0)
		{
			iLocal_162[6] = TASK::ADD_COVER_POINT(-588.9133f, 5318.15f, 69.2144f, 333.8809f, 0, 2, 1, false);
		}
		if (iLocal_162[7] == 0)
		{
			iLocal_162[7] = TASK::ADD_COVER_POINT(-582.0135f, 5334.625f, 69.2144f, 329.7396f, 0, 2, 1, false);
		}
		if (iLocal_162[8] == 0)
		{
			iLocal_162[8] = TASK::ADD_COVER_POINT(-554.9641f, 5364.963f, 69.4369f, 340.0293f, 1, 0, 1, false);
		}
		if (iLocal_162[9] == 0)
		{
			iLocal_162[9] = TASK::ADD_COVER_POINT(-522.1553f, 5250.7095f, 78.555f, 339.6773f, 2, 0, 1, false);
		}
		if (iLocal_162[10] == 0)
		{
			iLocal_162[10] = TASK::ADD_COVER_POINT(-524.0961f, 5250.4805f, 78.3368f, 355.7343f, 0, 2, 1, false);
		}
		if (iLocal_162[11] == 0)
		{
			iLocal_162[11] = TASK::ADD_COVER_POINT(-475.8146f, 5321.9814f, 79.61f, 161.7416f, 2, 0, 1, false);
		}
		if (iLocal_162[12] == 0)
		{
			iLocal_162[12] = TASK::ADD_COVER_POINT(-475.4565f, 5334.2856f, 81.7084f, 344.8566f, 2, 0, 1, false);
		}
		if (iLocal_162[13] == 0)
		{
			iLocal_162[13] = TASK::ADD_COVER_POINT(-472.9561f, 5340.5737f, 81.7094f, 162.1539f, 2, 0, 1, false);
		}
		if (iLocal_162[14] == 0)
		{
			iLocal_162[14] = TASK::ADD_COVER_POINT(-495.6543f, 5299.4863f, 79.61f, 152.2808f, 2, 0, 1, false);
		}
		if (iLocal_162[15] == 0)
		{
			iLocal_162[15] = TASK::ADD_COVER_POINT(-494.111f, 5298.9985f, 79.61f, 161.1279f, 2, 0, 1, false);
		}
		if (iLocal_162[16] == 0)
		{
			iLocal_162[16] = TASK::ADD_COVER_POINT(-532.4843f, 5260.9775f, 73.3015f, 73.5275f, 1, 2, 1, false);
		}
		if (iLocal_162[17] == 0)
		{
			iLocal_162[17] = TASK::ADD_COVER_POINT(-580.3589f, 5263.8354f, 69.4457f, 140.5717f, 1, 2, 1, false);
		}
		if (iLocal_162[18] == 0)
		{
			iLocal_162[18] = TASK::ADD_COVER_POINT(-492.6234f, 5316.028f, 79.6067f, 333.0276f, 1, 2, 1, false);
		}
		if (iLocal_162[19] == 0)
		{
			iLocal_162[19] = TASK::ADD_COVER_POINT(-615.4936f, 5267.1724f, 71.5453f, 317.7524f, 2, 0, 1, false);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_162)
		{
			if (iLocal_162[iVar0] != 0)
			{
				TASK::REMOVE_COVER_POINT(iLocal_162[iVar0]);
				iLocal_162[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

void func_655(bool bParam0)//Position - 0x7F1B9
{
	if (bParam0)
	{
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
		VEHICLE::SET_RANDOM_TRAINS(false);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
	}
	else
	{
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
		VEHICLE::SET_RANDOM_TRAINS(true);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
	}
}

int func_658()//Position - 0x7F2E6
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_164[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_180);
		STREAMING::REQUEST_MODEL(iLocal_181);
		STREAMING::REQUEST_MODEL(iLocal_182);
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_180) && STREAMING::HAS_MODEL_LOADED(iLocal_181)) && STREAMING::HAS_MODEL_LOADED(iLocal_182))
		{
			iLocal_164[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_180, -614.29f, 5269.06f, 71.3612f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_164[0], -4.3f, 0f, -44.18f, 2, true);
			iLocal_164[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_181, -525.2531f, 5241.241f, 78.626f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_164[1], 3.3465f, 4.7541f, 172.9586f, 2, true);
			iLocal_164[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_182, -600.129f, 5325.839f, 69.4513f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_164[2], 0f, 0f, -32.04f, 2, true);
			iLocal_164[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_182, -578.5708f, 5303.519f, 69.2611f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_164[3], 0f, 0f, -83.52f, 2, true);
			iLocal_164[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_182, -578.8108f, 5305.399f, 69.2611f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_164[4], 0f, 0f, -97.56f, 2, true);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iLocal_164)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_164[iVar0], true);
				if (ENTITY::GET_ENTITY_MODEL(iLocal_164[iVar0]) == iLocal_182)
				{
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_164[iVar0], 200);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_180);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_181);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_182);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_659()//Position - 0x7F49B
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	struct<3> Var11;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	struct<3> Var19;
	int iVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25;
	struct<3> Var26;
	bool bVar27;
	struct<3> Var28;
	iVar0 = 0;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	STREAMING::REQUEST_MODEL(iLocal_177);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_SMG"), 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
	STREAMING::REQUEST_CLIP_SET("move_ped_strafing");
	iVar3 = func_666(Var2);
	if (!bLocal_70)
	{
		iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (((__LIB_28__::func_243(func_484(0), func_484(2), func_484(1), -582.5289f, 5331.001f, 66.464424f, -477.7677f, 5292.183f, 145.07281f, 109.5f) || MISC::IS_BULLET_IN_ANGLED_AREA(-499.70096f, 5391.09f, 166.6113f, -559.49615f, 5230.065f, 63.06849f, 188f, false)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -499.70096f, 5391.09f, 166.6113f, -559.49615f, 5230.065f, 63.06849f, 188f)) || (ENTITY::DOES_ENTITY_EXIST(iVar4) && OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_ENTITY_COORDS(iVar4, false), -499.70096f, 5391.09f, 166.6113f, -559.49615f, 5230.065f, 63.06849f, 188f, false, true)))
		{
			bLocal_70 = true;
		}
	}
	if (!Local_270[0 /*21*/].f_3)
	{
		if (((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SMG"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && iLocal_183 < 5)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_270[0 /*21*/]))
			{
				Local_270[0 /*21*/] = func_499(iLocal_177, -600.801f, 5282.034f, 69.922f, -123.5317f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_270[1 /*21*/]))
			{
				Local_270[1 /*21*/] = func_499(iLocal_177, -567.2858f, 5256.007f, 69.4673f, 62.9176f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_270[2 /*21*/]))
			{
				Local_270[2 /*21*/] = func_499(iLocal_177, -465.5948f, 5348.7334f, 83.4476f, 160.7631f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_270[3 /*21*/]))
			{
				Local_270[3 /*21*/] = func_499(iLocal_177, -556.7905f, 5363.8936f, 69.2721f, 74.8856f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_270[4 /*21*/]))
			{
				Local_270[4 /*21*/] = func_499(iLocal_177, -495.7584f, 5248.298f, 85.7865f, 104.518f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_270[5 /*21*/]))
			{
				Local_270[5 /*21*/] = func_499(iLocal_177, -604.6235f, 5295.0073f, 69.3041f, 291.152f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_270[6 /*21*/]))
			{
				Local_270[6 /*21*/] = func_499(iLocal_177, -552.7806f, 5348.862f, 73.7482f, 291.152f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
				func_496(&Local_270, "Start_");
				func_654(1);
				iLocal_107 = 0;
				iLocal_137 = -1;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_270.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_270[iVar0 /*21*/]))
			{
				if (!PED::IS_PED_INJURED(Local_270[iVar0 /*21*/]))
				{
					switch (Local_270[iVar0 /*21*/].f_7)
					{
						case 0:
							if (iVar0 == 5)
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -599.9635f, 5350.112f, 69.4697f, 1f, -1, 0.25f, 0, 98.0563f);
								TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -604.6235f, 5295.0073f, 69.3041f, 1f, -1, 0.25f, 0, 291.152f);
								TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								TASK::SET_SEQUENCE_TO_REPEAT(iVar1, true);
								TASK::CLOSE_SEQUENCE_TASK(iVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_270[iVar0 /*21*/], iVar1);
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							}
							else
							{
								TASK::TASK_STAND_GUARD(Local_270[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*21*/], true), ENTITY::GET_ENTITY_HEADING(Local_270[iVar0 /*21*/]), "WORLD_HUMAN_GUARD_STAND");
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_270[iVar0 /*21*/], true);
							Local_270[iVar0 /*21*/].f_7++;
							break;
						case 1:
							if (!bLocal_70)
							{
								if (iVar0 == iLocal_107)
								{
									Var5 = { ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*21*/], true) };
									fVar7 = SYSTEM::VDIST2(Var2, Var5);
									fVar8 = 100000f;
									if (!PED::IS_PED_INJURED(uLocal_194[2]))
									{
										fVar8 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true), Var5);
									}
									else if (!PED::IS_PED_INJURED(uLocal_194[1]))
									{
										fVar8 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[1], true), Var5);
									}
									fVar6 = (Var5.f_2 - Var2.f_2);
									if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_270[iVar0 /*21*/], PLAYER::PLAYER_PED_ID(), true) || ((iVar0 != 2 && fVar7 < 1600f) && (fVar6 > -5f || fVar7 < 100f))) || (iVar0 != 2 && fVar8 < 1600f)) || (iVar0 == 2 && fVar7 < 900f)) || MISC::IS_PROJECTILE_IN_AREA(Var5 - Vector(5f, 8f, 8f), Var5 + Vector(5f, 8f, 8f), true))
									{
										iLocal_137 = iVar0;
										bLocal_70 = true;
									}
								}
							}
							else
							{
								if (iVar0 == 0)
								{
									Local_270[iVar0 /*21*/].f_10 = { -596.4f, 5287f, 69.8f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*21*/], Local_270[iVar0 /*21*/].f_10, 6f, true, false);
								}
								else if (iVar0 == 1)
								{
									Local_270[iVar0 /*21*/].f_10 = { -565.5f, 5257.3f, 69.9f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*21*/], Local_270[iVar0 /*21*/].f_10, 2f, true, false);
								}
								else if (iVar0 == 2)
								{
									Local_270[iVar0 /*21*/].f_10 = { -465.8f, 5348.8f, 84.1f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*21*/], Local_270[iVar0 /*21*/].f_10, 3f, true, false);
									Local_270[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 3)
								{
									Local_270[iVar0 /*21*/].f_10 = { -561.2f, 5377f, 70.2f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*21*/], Local_270[iVar0 /*21*/].f_10, 6f, true, false);
								}
								else if (iVar0 == 4)
								{
									Local_270[iVar0 /*21*/].f_10 = { -513.3f, 5257.5f, 80f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*21*/], Local_270[iVar0 /*21*/].f_10, 10f, true, false);
								}
								else if (iVar0 == 5)
								{
									Local_270[iVar0 /*21*/].f_10 = { -581.3f, 5292f, 70.4f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*21*/], Local_270[iVar0 /*21*/].f_10, 6f, true, false);
								}
								else if (iVar0 == 6)
								{
									Local_270[iVar0 /*21*/].f_10 = { -554.8165f, 5349.4985f, 73.7563f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*21*/], Local_270[iVar0 /*21*/].f_10, 6f, true, false);
								}
								__LIB_28__::func_241(&(Local_270[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_270[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_270[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_270[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_270[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_270[iVar0 /*21*/], 2, 300f);
								PED::SET_PED_ALERTNESS(Local_270[iVar0 /*21*/], 3);
								Local_270[iVar0 /*21*/].f_7++;
							}
							break;
					}
					if (Local_270[iVar0 /*21*/].f_7 != 0 && bLocal_70)
					{
						__LIB_0__::func_631(Local_270[iVar0 /*21*/], &(Local_270[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
						if (!Local_270[iVar0 /*21*/].f_6)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
							{
								PED::SET_PED_ACCURACY(Local_270[iVar0 /*21*/], 1);
								Local_270[iVar0 /*21*/].f_6 = 1;
							}
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							PED::SET_PED_ACCURACY(Local_270[iVar0 /*21*/], 5);
							Local_270[iVar0 /*21*/].f_6 = 0;
						}
						if (Local_270[iVar0 /*21*/].f_7 > 1)
						{
							if (!Local_270[iVar0 /*21*/].f_4)
							{
								if (Local_270[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*21*/], true), Local_270[iVar0 /*21*/].f_10) < 4f)
									{
										if (iVar0 == 0 && iLocal_191 == 4)
										{
											Local_270[iVar0 /*21*/].f_8 = 1;
										}
										else
										{
											Local_270[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_270[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_185 != 0)
									{
										if (((!Local_270[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*21*/], true)) < 625f) || (iVar0 == 0 && iLocal_191 == 4)) || (Local_270[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[iVar0 /*21*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_270[iVar0 /*21*/], 13, 3f);
											if (iVar0 == 0)
											{
												PED::SET_PED_CONFIG_FLAG(Local_270[iVar0 /*21*/], 286, true);
											}
											Local_270[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*21*/], true), Var2) > 900f && iVar0 != 0) || iLocal_185 == 0)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[iVar0 /*21*/], 51, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[iVar0 /*21*/], 50, false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_270[iVar0 /*21*/], 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*21*/], Local_270[iVar0 /*21*/].f_10, 3f, true, false);
								Local_270[iVar0 /*21*/].f_4 = 0;
							}
							if (iLocal_137 > -1 && iLocal_137 == iVar0)
							{
								__LIB_0__::func_222(&Local_294, 5, Local_270[iVar0 /*21*/], "fr2_enemy1", 0, 1);
								if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "Lm2_alert", 7, 0, 0, 0))
								{
									iLocal_137 = -1;
								}
							}
						}
					}
				}
				else
				{
					if (!bLocal_70)
					{
						bLocal_70 = true;
					}
					func_491(Local_270[iVar0 /*21*/], Var2);
					func_488(&(Local_270[iVar0 /*21*/]), 0);
				}
			}
			iVar0++;
		}
		iLocal_107++;
		if (iLocal_107 >= Local_270.f_0)
		{
			iLocal_107 = 0;
		}
	}
	if (!bLocal_69)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[0]))
		{
			STREAMING::REQUEST_MODEL(iLocal_178);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_178))
			{
				iLocal_173[0] = VEHICLE::CREATE_VEHICLE(iLocal_178, -583.9711f, 5315.609f, 69.2144f, -68.552f, true, true, false);
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[1]))
		{
			iLocal_173[1] = VEHICLE::CREATE_VEHICLE(iLocal_178, -561.6607f, 5378.3745f, 69.1896f, 274.1927f, true, true, false);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[2]))
		{
			iLocal_173[2] = VEHICLE::CREATE_VEHICLE(iLocal_178, -596.3167f, 5286.4297f, 69.2252f, 19.9865f, true, true, false);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[3]))
		{
			iLocal_173[3] = VEHICLE::CREATE_VEHICLE(iLocal_178, -545.0247f, 5253.058f, 73.3049f, 124.1131f, true, true, false);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[4]))
		{
			iLocal_173[4] = VEHICLE::CREATE_VEHICLE(iLocal_178, -569.1078f, 5268.111f, 69.2658f, 146.2613f, true, true, false);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[5]))
		{
			iLocal_173[5] = VEHICLE::CREATE_VEHICLE(iLocal_178, -583.5582f, 5250.513f, 69.4679f, 216.5756f, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_178);
			iVar0 = 0;
			while (iVar0 < iLocal_173)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[iVar0], false))
				{
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_173[iVar0], 66, 0);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_173[iVar0], 66, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_173[iVar0], 7);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_173[iVar0], true);
				}
				iVar0++;
			}
			bLocal_69 = true;
		}
	}
	else if (iLocal_183 == 6 && CAM::IS_SCREEN_FADED_IN())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_173)
			{
				__LIB_28__::func_239(&(iLocal_173[iVar0]), 0);
				iVar0++;
			}
		}
	}
	if (!Local_290[0 /*21*/].f_3)
	{
		if (iLocal_183 == 3 && !bLocal_70)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_177))
			{
				Local_290[0 /*21*/] = func_499(iLocal_177, -474.2554f, 5377.4683f, 79.3745f, 208.8788f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
				func_496(&Local_290, "Phone_");
				WEAPON::SET_CURRENT_PED_WEAPON(Local_290[0 /*21*/], joaat("WEAPON_UNARMED"), true);
				TASK::TASK_USE_MOBILE_PHONE(Local_290[0 /*21*/], true, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_290[0 /*21*/], true);
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_290.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_290[iVar0 /*21*/]))
			{
				if (!PED::IS_PED_INJURED(Local_290[iVar0 /*21*/]))
				{
					switch (Local_290[iVar0 /*21*/].f_7)
					{
						case 0:
							fVar9 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_290[iVar0 /*21*/], true), Var2);
							if (bLocal_70 || (fVar9 < 2500f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_290[iVar0 /*21*/], PLAYER::PLAYER_PED_ID())))
							{
								if (fVar9 > 5000f && (ENTITY::IS_ENTITY_OCCLUDED(Local_290[iVar0 /*21*/]) || fVar9 > 10000f))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_290[iVar0 /*21*/], 0, 0);
								}
								else
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Local_290[iVar0 /*21*/], joaat("WEAPON_PISTOL"), true);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_290[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(Local_290[iVar0 /*21*/], true), 5f, false, false);
									__LIB_28__::func_241(&(Local_290[iVar0 /*21*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_290[iVar0 /*21*/], iLocal_292);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_290[iVar0 /*21*/], 1, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_290[iVar0 /*21*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_290[iVar0 /*21*/], 50, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_290[iVar0 /*21*/], 35, true);
									PED::SET_COMBAT_FLOAT(Local_290[iVar0 /*21*/], 13, 3f);
									PED::SET_COMBAT_FLOAT(Local_290[iVar0 /*21*/], 2, 300f);
									PED::SET_PED_ALERTNESS(Local_290[iVar0 /*21*/], 3);
									TASK::CLEAR_PED_TASKS(Local_290[iVar0 /*21*/]);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_290[iVar0 /*21*/], 200f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_290[iVar0 /*21*/], false);
									__LIB_0__::func_640(Local_290[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
									Local_290[iVar0 /*21*/].f_7++;
								}
							}
							else if (!iLocal_100[80])
							{
								if (fVar9 < 625f && !__LIB_13__::func_755(&Local_238, 1))
								{
									__LIB_0__::func_222(&Local_294, 5, Local_290[iVar0 /*21*/], "fr2_enemy1", 0, 1);
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "Lm2_onphn", 7, 0, 0, 0))
										{
											iLocal_100[80] = 1;
										}
									}
									else if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "Lm2_onphn2", 7, 0, 0, 0))
									{
										iLocal_100[80] = 1;
									}
								}
							}
							break;
					}
					if (Local_290[iVar0 /*21*/].f_7 != 0 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_290[iVar0 /*21*/], PLAYER::PLAYER_PED_ID(), true))
					{
						__LIB_0__::func_631(Local_290[iVar0 /*21*/], &(Local_290[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
						MemCopy(&uVar10, {__LIB_0__::func_486()}, 4);
						if (MISC::ARE_STRINGS_EQUAL(&uVar10, "Lm2_onphn") || MISC::ARE_STRINGS_EQUAL(&uVar10, "Lm2_onphn2"))
						{
							__LIB_0__::func_429();
						}
					}
				}
				else
				{
					func_491(Local_290[iVar0 /*21*/], Var2);
					func_488(&(Local_290[iVar0 /*21*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (bLocal_70)
	{
		if (!Local_271[0 /*21*/].f_3)
		{
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing")) && iLocal_183 < 5)
			{
				if (iVar3 == 4)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_271[0 /*21*/]))
					{
						Local_271[0 /*21*/] = func_499(iLocal_177, -554.3489f, 5358.439f, 69.6098f, 339.524f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*21*/]))
					{
						Local_271[1 /*21*/] = func_499(iLocal_177, -579.1994f, 5344.5347f, 69.2308f, 322.3706f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[2 /*21*/]))
					{
						Local_271[2 /*21*/] = func_499(iLocal_177, -576.9061f, 5350.8096f, 69.2145f, 349.5044f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*21*/]))
					{
						Local_271[3 /*21*/] = func_499(iLocal_177, -585.943f, 5345f, 69.2672f, 280.4455f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
				}
				else if (iVar3 == 3)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_271[0 /*21*/]))
					{
						Local_271[0 /*21*/] = func_499(iLocal_177, -572.7003f, 5346.6313f, 69.2309f, 139.4092f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*21*/]))
					{
						Local_271[1 /*21*/] = func_499(iLocal_177, -571.7344f, 5348.919f, 69.2319f, 154.9614f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[2 /*21*/]))
					{
						Local_271[2 /*21*/] = func_499(iLocal_177, -571.5287f, 5351.3413f, 69.2284f, 154.9614f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*21*/]))
					{
						Local_271[3 /*21*/] = func_499(iLocal_177, -570.4391f, 5353.686f, 69.2298f, 154.9614f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
				}
				else if (iVar3 == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_271[0 /*21*/]))
					{
						if (SYSTEM::VDIST2(Var2, -574.6f, 5249.3f, 70.9f) < SYSTEM::VDIST2(Var2, -551.1f, 5245.5f, 73.1f))
						{
							Local_271[0 /*21*/] = func_499(iLocal_177, -581.5417f, 5264.88f, 69.4481f, 144.5352f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
						}
						else
						{
							Local_271[0 /*21*/] = func_499(iLocal_177, -561.1369f, 5254.2246f, 69.509f, 139.8273f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*21*/]))
					{
						Local_271[1 /*21*/] = func_499(iLocal_177, -556.1404f, 5300.717f, 80.6723f, 155.9017f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[2 /*21*/]))
					{
						Local_271[2 /*21*/] = func_499(iLocal_177, -543.4486f, 5247.4453f, 73.7604f, 138.4167f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*21*/]))
					{
						Local_271[3 /*21*/] = func_499(iLocal_177, -587.5444f, 5271.093f, 69.4683f, 131.0496f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
				}
				else if (iVar3 == 1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_271[0 /*21*/]))
					{
						Local_271[0 /*21*/] = func_499(iLocal_177, -544.0679f, 5269.8926f, 73.1741f, 74.9389f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*21*/]))
					{
						Local_271[1 /*21*/] = func_499(iLocal_177, -563.5525f, 5288.2593f, 74.9328f, 152.3262f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_271[1 /*21*/], -563.5525f, 5288.2593f, 74.9328f, 1000, false, 0f, false, false, 0, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_271[1 /*21*/], false, false);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[2 /*21*/]))
					{
						Local_271[2 /*21*/] = func_499(iLocal_177, -593.4202f, 5320.579f, 69.2144f, 153.0497f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*21*/]))
					{
						Local_271[3 /*21*/] = func_499(iLocal_177, -592.1321f, 5334.994f, 69.2534f, 169.728f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
				}
				else if (iVar3 == 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_271[0 /*21*/]))
					{
						if (SYSTEM::VDIST2(Var2, -574.6f, 5249.3f, 70.9f) < SYSTEM::VDIST2(Var2, -551.1f, 5245.5f, 73.1f))
						{
							Local_271[0 /*21*/] = func_499(iLocal_177, -581.5417f, 5264.88f, 69.4481f, 144.5352f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
						}
						else
						{
							Local_271[0 /*21*/] = func_499(iLocal_177, -561.1369f, 5254.2246f, 69.509f, 139.8273f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*21*/]))
					{
						Local_271[1 /*21*/] = func_499(iLocal_177, -544.4281f, 5274.3335f, 73.1741f, 167.7283f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[2 /*21*/]))
					{
						Local_271[2 /*21*/] = func_499(iLocal_177, -543.4486f, 5247.4453f, 73.7604f, 138.4167f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*21*/]))
					{
						Local_271[3 /*21*/] = func_499(iLocal_177, -587.5444f, 5271.093f, 69.4683f, 131.0496f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
				}
				else if (iVar3 == 6)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_271[0 /*21*/]))
					{
						Local_271[0 /*21*/] = func_499(iLocal_177, -503.1779f, 5326.708f, 79.2676f, 184.6035f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*21*/]))
					{
						Local_271[1 /*21*/] = func_499(iLocal_177, -498.2337f, 5277.7466f, 79.61f, 150.6502f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[2 /*21*/]))
					{
						Local_271[2 /*21*/] = func_499(iLocal_177, -505.1916f, 5286.6523f, 79.5654f, 141.7527f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*21*/]))
					{
						Local_271[3 /*21*/] = func_499(iLocal_177, -501.1952f, 5292.961f, 79.603f, 169.5985f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[0 /*21*/]))
				{
					Local_271[0 /*21*/] = func_499(iLocal_177, -484.6786f, 5324.6045f, 79.6103f, 337.5868f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*21*/]))
				{
					Local_271[1 /*21*/] = func_499(iLocal_177, -480.7613f, 5337.829f, 81.695f, 329.087f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[2 /*21*/]))
				{
					Local_271[2 /*21*/] = func_499(iLocal_177, -471.4462f, 5315.302f, 82.4486f, 350.6388f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*21*/]))
				{
					Local_271[3 /*21*/] = func_499(iLocal_177, -476.9317f, 5324.8955f, 79.61f, 333.9693f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*21*/]))
				{
					func_496(&Local_271, "Alert_");
					iLocal_192 = iVar3;
					if (!PED::IS_PED_INJURED(uLocal_194[1]))
					{
						Var11 = { ENTITY::GET_ENTITY_COORDS(uLocal_194[1], true) };
					}
					else if (!PED::IS_PED_INJURED(uLocal_194[2]))
					{
						Var11 = { ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true) };
					}
					iVar0 = 0;
					while (iVar0 < Local_270.f_0)
					{
						if (!PED::IS_PED_INJURED(Local_270[iVar0 /*21*/]))
						{
							fVar12 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*21*/], true), Var2);
							fVar13 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*21*/], true), Var11);
							if ((fVar12 > 5000f && fVar13 > 5000f) && (ENTITY::IS_ENTITY_OCCLUDED(Local_270[iVar0 /*21*/]) || fVar12 > 10000f))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_270[iVar0 /*21*/], 0, 0);
							}
						}
						iVar0++;
					}
					if (iVar3 == 4)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
						{
							if (!PED::IS_PED_INJURED(Local_271[0 /*21*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_271[0 /*21*/], 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_271[2 /*21*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_271[2 /*21*/], 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_271[3 /*21*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_271[3 /*21*/], 0, 0);
							}
						}
					}
					if (iVar3 == 5)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_271[0 /*21*/], 0, 0);
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_271.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_271[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_271[iVar0 /*21*/]))
					{
						switch (Local_271[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar3 == 4)
								{
									if (iVar0 == 0)
									{
										Local_271[iVar0 /*21*/].f_10 = { -562.2291f, 5374.916f, 69.1818f };
									}
									else if (iVar0 == 1)
									{
										Local_271[iVar0 /*21*/].f_10 = { -559.8881f, 5356.96f, 69.2145f };
									}
									else if (iVar0 == 2)
									{
										Local_271[iVar0 /*21*/].f_10 = { -572.6667f, 5362.7197f, 69.2182f };
									}
									else if (iVar0 == 3)
									{
										Local_271[iVar0 /*21*/].f_10 = { -577.9835f, 5344.342f, 69.2178f };
									}
								}
								else if (iVar3 == 3)
								{
									if (iVar0 == 0)
									{
										Local_271[iVar0 /*21*/].f_10 = { -594.3f, 5314.7f, 69.2309f };
									}
									else if (iVar0 == 1)
									{
										Local_271[iVar0 /*21*/].f_10 = { -604.9f, 5333.7f, 69.2319f };
									}
									else if (iVar0 == 2)
									{
										Local_271[iVar0 /*21*/].f_10 = { -605.7f, 5340.1f, 69.5284f };
									}
									else if (iVar0 == 3)
									{
										Local_271[iVar0 /*21*/].f_10 = { -587.1f, 5369.486f, 69.7298f };
									}
								}
								else if (iVar3 == 0)
								{
									if (iVar0 == 0)
									{
										Local_271[iVar0 /*21*/].f_10 = { -567.8237f, 5270.855f, 69.2604f };
									}
									else if (iVar0 == 1)
									{
										Local_271[iVar0 /*21*/].f_10 = { -556.1403f, 5283.8877f, 76.1836f };
										PED::SET_PED_STRAFE_CLIPSET(Local_271[iVar0 /*21*/], "move_ped_strafing");
										TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_271[iVar0 /*21*/], false);
									}
									else if (iVar0 == 2)
									{
										Local_271[iVar0 /*21*/].f_10 = { -571.0912f, 5276.412f, 69.2604f };
									}
									else if (iVar0 == 3)
									{
										Local_271[iVar0 /*21*/].f_10 = { -580.3883f, 5263.822f, 69.4455f };
									}
								}
								else if (iVar3 == 1)
								{
									if (iVar0 == 0)
									{
										Local_271[iVar0 /*21*/].f_10 = { -571.947f, 5273.3647f, 69.2604f };
									}
									else if (iVar0 == 1)
									{
										Local_271[iVar0 /*21*/].f_10 = { -572.3436f, 5296.354f, 73.8037f };
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_271[iVar0 /*21*/], 0, false);
										Local_271[iVar0 /*21*/].f_5 = 1;
									}
									else if (iVar0 == 2)
									{
										Local_271[iVar0 /*21*/].f_10 = { -594.5383f, 5285.5923f, 69.2216f };
									}
									else if (iVar0 == 3)
									{
										Local_271[iVar0 /*21*/].f_10 = { -586.1855f, 5316.1484f, 69.2147f };
									}
								}
								else if (iVar3 == 2)
								{
									if (iVar0 == 0)
									{
										Local_271[iVar0 /*21*/].f_10 = { -564.5952f, 5272.389f, 69.2142f };
									}
									else if (iVar0 == 1)
									{
										Local_271[iVar0 /*21*/].f_10 = { -556.1403f, 5283.8877f, 76.1836f };
										PED::SET_PED_STRAFE_CLIPSET(Local_271[iVar0 /*21*/], "move_ped_strafing");
										TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_271[iVar0 /*21*/], false);
										Local_271[iVar0 /*21*/].f_5 = 1;
									}
									else if (iVar0 == 2)
									{
										Local_271[iVar0 /*21*/].f_10 = { -571.0912f, 5276.412f, 69.2604f };
									}
									else if (iVar0 == 3)
									{
										Local_271[iVar0 /*21*/].f_10 = { -580.3883f, 5263.822f, 69.4455f };
									}
								}
								else if (iVar3 == 6)
								{
									if (iVar0 == 0)
									{
										Local_271[iVar0 /*21*/].f_10 = { -498.4009f, 5303.551f, 79.5833f };
									}
									else if (iVar0 == 1)
									{
										Local_271[iVar0 /*21*/].f_10 = { -507.3313f, 5259.493f, 79.61f };
									}
									else if (iVar0 == 2)
									{
										Local_271[iVar0 /*21*/].f_10 = { -515.3116f, 5265.815f, 79.4651f };
									}
									else if (iVar0 == 3)
									{
										Local_271[iVar0 /*21*/].f_10 = { -504.5242f, 5282.318f, 79.61f };
									}
								}
								else if (iVar0 == 0)
								{
									Local_271[iVar0 /*21*/].f_10 = { -464.8362f, 5331.2334f, 82.4351f };
									Local_271[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 1)
								{
									Local_271[iVar0 /*21*/].f_10 = { -474.5163f, 5340.7954f, 81.7043f };
									Local_271[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 2)
								{
									Local_271[iVar0 /*21*/].f_10 = { -462.8243f, 5337.7476f, 82.4694f };
									Local_271[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 3)
								{
									Local_271[iVar0 /*21*/].f_10 = { -472.7236f, 5312.4346f, 85.6664f };
									PED::SET_PED_STRAFE_CLIPSET(Local_271[iVar0 /*21*/], "move_ped_strafing");
									Local_271[iVar0 /*21*/].f_5 = 1;
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_271[iVar0 /*21*/], Local_271[iVar0 /*21*/].f_10, 2f, true, false);
								__LIB_28__::func_241(&(Local_271[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_271[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_271[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_271[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_271[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_271[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_271[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_271[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_271[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_271[iVar0 /*21*/], 3);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_271[iVar0 /*21*/], joaat("WEAPON_PISTOL"), true);
								if (iVar0 == 0)
								{
									__LIB_0__::func_640(Local_271[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_271[iVar0 /*21*/].f_8 = 0;
								Local_271[iVar0 /*21*/].f_7++;
								break;
							case 1:
								if (iLocal_192 == 5 && iVar0 == 3)
								{
									if (iLocal_185 != 0)
									{
										if (Var2.f_2 > 83f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_271[iVar0 /*21*/], true), Local_271[iVar0 /*21*/].f_10) < 4f)
										{
											Local_271[iVar0 /*21*/].f_10 = { -466.5307f, 5329.649f, 82.4978f };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_271[iVar0 /*21*/], Local_271[iVar0 /*21*/].f_10, 2f, false, false);
											Local_271[iVar0 /*21*/].f_7++;
										}
									}
								}
								break;
						}
						if (Local_271[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_271[iVar0 /*21*/], &(Local_271[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if ((iVar0 == 0 && iLocal_192 != 5) || (iVar0 == 1 && iLocal_192 == 5))
							{
								if (!iLocal_100[64])
								{
									if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
									{
										bVar14 = false;
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
										{
											if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false) || (!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_291.f_0, -1, false) && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_291.f_0, true)) < 625f))
											{
												bVar14 = true;
											}
										}
										if (bVar14)
										{
											__LIB_0__::func_222(&Local_294, 4, Local_271[iVar0 /*21*/], "fr2_enemy2", 0, 1);
											if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "Lm2_dozer", 7, 0, 0, 0))
											{
												iLocal_100[64] = 1;
											}
										}
										else if (iLocal_185 == 1)
										{
											__LIB_0__::func_222(&Local_294, 5, Local_271[iVar0 /*21*/], "fr2_enemy1", 0, 1);
											if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "Lm2_frank", 7, 0, 0, 0))
											{
												iLocal_100[64] = 1;
											}
										}
									}
								}
							}
							if (!Local_271[iVar0 /*21*/].f_6)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
								{
									PED::SET_PED_ACCURACY(Local_271[iVar0 /*21*/], 1);
									Local_271[iVar0 /*21*/].f_6 = 1;
								}
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								PED::SET_PED_ACCURACY(Local_271[iVar0 /*21*/], 5);
								Local_271[iVar0 /*21*/].f_6 = 0;
							}
							if (!Local_271[iVar0 /*21*/].f_4)
							{
								if (Local_271[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_271[iVar0 /*21*/], true), Local_271[iVar0 /*21*/].f_10) < 4f)
									{
										Local_271[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_271[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_185 != 0)
									{
										if ((!Local_271[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_271[iVar0 /*21*/], true)) < 900f) || (Local_271[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_271[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_271[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_271[iVar0 /*21*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_271[iVar0 /*21*/], 13, 3f);
											Local_271[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_271[iVar0 /*21*/], true), Var2) > 900f || iLocal_185 == 0)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_271[iVar0 /*21*/], 51, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_271[iVar0 /*21*/], 50, false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_271[iVar0 /*21*/], 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_271[iVar0 /*21*/], Local_271[iVar0 /*21*/].f_10, 3f, true, false);
								Local_271[iVar0 /*21*/].f_4 = 0;
							}
						}
					}
					else
					{
						func_491(Local_271[iVar0 /*21*/], Var2);
						func_488(&(Local_271[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_272[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_177))
				{
					if (!PED::IS_PED_INJURED(Local_267.f_0))
					{
						Local_272[0 /*21*/] = func_499(iLocal_177, -521.6014f, 5306.6914f, 79.2676f, 39.3728f, iLocal_292, 200, 0, joaat("WEAPON_PISTOL"), 26);
						WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_272[0 /*21*/], false);
						func_496(&Local_272, "Guard_");
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_272.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_272[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_272[iVar0 /*21*/]))
					{
						switch (Local_272[iVar0 /*21*/].f_7)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_267.f_0))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(Local_272[iVar0 /*21*/], Local_267.f_0, -1, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_272[iVar0 /*21*/], true);
									Local_272[iVar0 /*21*/].f_7++;
								}
								break;
							case 1:
								if (!HUD::DOES_BLIP_EXIST(Local_272[iVar0 /*21*/].f_1))
								{
									if (HUD::DOES_BLIP_EXIST(Local_267.f_1))
									{
										Local_272[iVar0 /*21*/].f_1 = __LIB_0__::func_639(Local_272[iVar0 /*21*/], 1, 0);
									}
								}
								if ((((!PED::IS_PED_INJURED(func_484(1)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_272[iVar0 /*21*/], func_484(1), true)) || (!PED::IS_PED_INJURED(func_484(2)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_272[iVar0 /*21*/], func_484(2), true))) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_272[iVar0 /*21*/], true), Var2) < 324f) || (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_272[iVar0 /*21*/], true), 8f, true) && !ENTITY::IS_ENTITY_OCCLUDED(Local_272[iVar0 /*21*/])))
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_272[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(Local_272[iVar0 /*21*/], true), 5f, false, false);
									__LIB_28__::func_241(&(Local_272[iVar0 /*21*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_272[iVar0 /*21*/], iLocal_292);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_272[iVar0 /*21*/], 1, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_272[iVar0 /*21*/], 200f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_272[iVar0 /*21*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_272[iVar0 /*21*/], 35, true);
									PED::SET_COMBAT_FLOAT(Local_272[iVar0 /*21*/], 13, 3f);
									PED::SET_COMBAT_FLOAT(Local_272[iVar0 /*21*/], 2, 300f);
									PED::SET_PED_ALERTNESS(Local_272[iVar0 /*21*/], 3);
									if (!HUD::DOES_BLIP_EXIST(Local_272[iVar0 /*21*/].f_1))
									{
										Local_272[iVar0 /*21*/].f_1 = __LIB_0__::func_639(Local_272[iVar0 /*21*/], 1, 0);
									}
									Local_272[iVar0 /*21*/].f_7++;
								}
								break;
						}
					}
					else
					{
						func_491(Local_272[iVar0 /*21*/], Var2);
						func_488(&(Local_272[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_280[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SMG")))
				{
					bVar15 = false;
					if (iLocal_75)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_291.f_0, false))
						{
							if ((!PED::IS_PED_INJURED(uLocal_194[2]) && PED::IS_PED_IN_VEHICLE(uLocal_194[2], Local_291.f_0, false)) || (!PED::IS_PED_INJURED(uLocal_194[1]) && PED::IS_PED_IN_VEHICLE(uLocal_194[1], Local_291.f_0, false)))
							{
								if (iLocal_191 != 1)
								{
									bVar15 = true;
								}
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -597.8615f, 5345.1113f, 54.71984f, -666.8249f, 5242.8584f, 102.60649f, 112.25f, false, true, 0))
						{
							bVar15 = true;
						}
						if (bVar15)
						{
							iVar0 = 0;
							while (iVar0 < Local_280.f_0)
							{
								Local_280[iVar0 /*21*/].f_3 = 1;
								iVar0++;
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_280[0 /*21*/]))
						{
							Local_280[0 /*21*/] = func_499(iLocal_177, -565.0798f, 5326.8994f, 69.24f, 71.9622f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_280[1 /*21*/]))
						{
							Local_280[1 /*21*/] = func_499(iLocal_177, -592.5015f, 5334.403f, 69.262f, 252.6935f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_280[2 /*21*/]))
						{
							Local_280[2 /*21*/] = func_499(iLocal_177, -594.6821f, 5335.3022f, 69.3288f, 350.3948f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
							func_496(&Local_280, "Bull1_");
							if (!ENTITY::IS_ENTITY_DEAD(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
							{
								if (!PED::IS_PED_INJURED(Local_280[1 /*21*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_280[1 /*21*/], 0, 0);
								}
								if (!PED::IS_PED_INJURED(Local_280[2 /*21*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_280[2 /*21*/], 0, 0);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_280.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_280[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_280[iVar0 /*21*/]))
					{
						switch (Local_280[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_280[iVar0 /*21*/].f_10 = { -571.566f, 5329.713f, 69.2144f };
								}
								else if (iVar0 == 1)
								{
									Local_280[iVar0 /*21*/].f_10 = { -578.4724f, 5338.5435f, 69.2144f };
								}
								else if (iVar0 == 2)
								{
									Local_280[iVar0 /*21*/].f_10 = { -566.1284f, 5339.827f, 69.2144f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_280[iVar0 /*21*/], Local_280[iVar0 /*21*/].f_10, 2f, true, false);
								__LIB_28__::func_241(&(Local_280[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_280[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_280[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_280[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_280[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_280[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_280[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_280[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_280[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									__LIB_0__::func_640(Local_280[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_280[iVar0 /*21*/].f_8 = 0;
								Local_280[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_280[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_280[iVar0 /*21*/], &(Local_280[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (!Local_280[iVar0 /*21*/].f_6)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
								{
									PED::SET_PED_ACCURACY(Local_280[iVar0 /*21*/], 1);
									Local_280[iVar0 /*21*/].f_6 = 1;
								}
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								PED::SET_PED_ACCURACY(Local_280[iVar0 /*21*/], 5);
								Local_280[iVar0 /*21*/].f_6 = 0;
							}
							if (!Local_280[iVar0 /*21*/].f_4)
							{
								if (Local_280[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_280[iVar0 /*21*/], true), Local_280[iVar0 /*21*/].f_10) < 4f)
									{
										Local_280[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_280[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_191 == 0 || iLocal_191 == 1)
									{
										if (!Local_280[iVar0 /*21*/].f_5 || (Local_280[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_280[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_280[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_280[iVar0 /*21*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_280[iVar0 /*21*/], 13, 3f);
											Local_280[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (iLocal_191 != 0 && iLocal_191 != 1)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_280[iVar0 /*21*/], true), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_280[iVar0 /*21*/], 51, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_280[iVar0 /*21*/], 50, false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_280[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_280[iVar0 /*21*/], Local_280[iVar0 /*21*/].f_10, 3f, true, false);
									Local_280[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_491(Local_280[iVar0 /*21*/], Var2);
						func_488(&(Local_280[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_281[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SMG")))
				{
					iVar16 = 0;
					bVar17 = false;
					if (__LIB_28__::func_240(&Local_280) <= 1 && (iLocal_191 == 1 || iLocal_191 == 0))
					{
						iVar16 = 1;
					}
					if (iLocal_76 || iVar16)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_291.f_0, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false) || VEHICLE::IS_VEHICLE_SEAT_FREE(Local_291.f_0, -1, false))
							{
								if (__LIB_28__::func_243(func_484(2), func_484(1), 0, -503.45947f, 5236.2407f, 102.546524f, -618.6067f, 5292.7036f, 55.00938f, 40.5f))
								{
									bVar17 = true;
								}
							}
							if ((!PED::IS_PED_INJURED(uLocal_194[2]) && PED::IS_PED_IN_VEHICLE(uLocal_194[2], Local_291.f_0, false)) || (!PED::IS_PED_INJURED(uLocal_194[1]) && PED::IS_PED_IN_VEHICLE(uLocal_194[1], Local_291.f_0, false)))
							{
								if (iLocal_191 != 1)
								{
									bVar17 = true;
								}
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -601.5615f, 5333.1113f, 54.71984f, -666.8249f, 5242.8584f, 102.60649f, 112.25f, false, true, 0))
						{
							bVar17 = true;
						}
						if (bVar17)
						{
							iVar0 = 0;
							while (iVar0 < Local_281.f_0)
							{
								Local_281[iVar0 /*21*/].f_3 = 1;
								iVar0++;
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_281[0 /*21*/]))
						{
							Local_281[0 /*21*/] = func_499(iLocal_177, -583.9528f, 5284.0156f, 69.2604f, 345.9741f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_281[1 /*21*/]))
						{
							Local_281[1 /*21*/] = func_499(iLocal_177, -582.048f, 5282.944f, 69.6424f, 71.8583f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_281[2 /*21*/]))
						{
							Local_281[2 /*21*/] = func_499(iLocal_177, -595.5361f, 5315.0264f, 69.2144f, 309.6455f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
							func_496(&Local_281, "Bull2_");
							if (!ENTITY::IS_ENTITY_DEAD(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
							{
								if (!PED::IS_PED_INJURED(Local_281[1 /*21*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_281[1 /*21*/], 0, 0);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_281.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_281[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_281[iVar0 /*21*/]))
					{
						switch (Local_281[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_281[iVar0 /*21*/].f_10 = { -584.1713f, 5311.372f, 69.2144f };
								}
								else if (iVar0 == 1)
								{
									Local_281[iVar0 /*21*/].f_10 = { -573.7343f, 5315.25f, 69.1795f };
								}
								else if (iVar0 == 2)
								{
									Local_281[iVar0 /*21*/].f_10 = { -583.9662f, 5286.522f, 69.2604f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_281[iVar0 /*21*/], Local_281[iVar0 /*21*/].f_10, 2f, true, false);
								__LIB_28__::func_241(&(Local_281[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_281[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_281[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_281[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_281[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_281[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_281[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_281[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_281[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									__LIB_0__::func_640(Local_281[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_281[iVar0 /*21*/].f_8 = 0;
								Local_281[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_281[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_281[iVar0 /*21*/], &(Local_281[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (!Local_281[iVar0 /*21*/].f_6)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
								{
									PED::SET_PED_ACCURACY(Local_281[iVar0 /*21*/], 1);
									Local_281[iVar0 /*21*/].f_6 = 1;
								}
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								PED::SET_PED_ACCURACY(Local_281[iVar0 /*21*/], 5);
								Local_281[iVar0 /*21*/].f_6 = 0;
							}
							if (!Local_281[iVar0 /*21*/].f_4)
							{
								if (Local_281[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_281[iVar0 /*21*/], true), Local_281[iVar0 /*21*/].f_10) < 4f)
									{
										Local_281[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_281[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_191 == 0 || iLocal_191 == 1)
									{
										if (!Local_281[iVar0 /*21*/].f_5 || (Local_281[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_281[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_281[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_281[iVar0 /*21*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_281[iVar0 /*21*/], 13, 3f);
											Local_281[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (iLocal_191 != 0 && iLocal_191 != 1)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_281[iVar0 /*21*/], true), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_281[iVar0 /*21*/], 51, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_281[iVar0 /*21*/], 50, false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_281[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_281[iVar0 /*21*/], Local_281[iVar0 /*21*/].f_10, 3f, true, false);
									Local_281[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_491(Local_281[iVar0 /*21*/], Var2);
						func_488(&(Local_281[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_282[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_177))
				{
					if (bLocal_84 || __LIB_28__::func_240(&Local_281) == 0)
					{
						if (iLocal_191 == 1 || iLocal_191 == 0)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_282[0 /*21*/]))
							{
								Local_282[0 /*21*/] = func_499(iLocal_177, -562.3906f, 5254.9883f, 69.4939f, 64.2948f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_282[1 /*21*/]))
							{
								Local_282[1 /*21*/] = func_499(iLocal_177, -568.1168f, 5236.523f, 69.4282f, 152.231f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_282[2 /*21*/]))
							{
								Local_282[2 /*21*/] = func_499(iLocal_177, -558.9417f, 5266.699f, 71.3148f, 54.0498f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
								func_496(&Local_282, "Bull3_");
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < Local_282.f_0)
							{
								Local_282[iVar0 /*21*/].f_3 = 1;
								iVar0++;
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
						{
							if (!PED::IS_PED_INJURED(Local_282[2 /*21*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_282[2 /*21*/], 0, 0);
							}
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_282.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_282[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_282[iVar0 /*21*/]))
					{
						switch (Local_282[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_282[iVar0 /*21*/].f_10 = { -571.5106f, 5274.36f, 69.2604f };
								}
								else if (iVar0 == 1)
								{
									Local_282[iVar0 /*21*/].f_10 = { -568.8f, 5265.7f, 69.8f };
								}
								else if (iVar0 == 2)
								{
									Local_282[iVar0 /*21*/].f_10 = { -580.0616f, 5262.9087f, 69.4442f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_282[iVar0 /*21*/], Local_282[iVar0 /*21*/].f_10, 2f, true, false);
								__LIB_28__::func_241(&(Local_282[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_282[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_282[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_282[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_282[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_282[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_282[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_282[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_282[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_282[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									__LIB_0__::func_640(Local_282[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_282[iVar0 /*21*/].f_8 = 0;
								Local_282[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_282[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_282[iVar0 /*21*/], &(Local_282[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (!Local_282[iVar0 /*21*/].f_6)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
								{
									PED::SET_PED_ACCURACY(Local_282[iVar0 /*21*/], 1);
									Local_282[iVar0 /*21*/].f_6 = 1;
								}
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								PED::SET_PED_ACCURACY(Local_282[iVar0 /*21*/], 5);
								Local_282[iVar0 /*21*/].f_6 = 0;
							}
							if (!Local_282[iVar0 /*21*/].f_4)
							{
								if (Local_282[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_282[iVar0 /*21*/], true), Local_282[iVar0 /*21*/].f_10) < 4f)
									{
										Local_282[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_282[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_191 == 0 || iLocal_191 == 1)
									{
										if (!Local_282[iVar0 /*21*/].f_5 || (Local_282[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_282[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_282[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_282[iVar0 /*21*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_282[iVar0 /*21*/], 13, 3f);
											Local_282[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (iLocal_191 != 0 && iLocal_191 != 1)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_282[iVar0 /*21*/], true), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_282[iVar0 /*21*/], 51, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_282[iVar0 /*21*/], 50, false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_282[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_282[iVar0 /*21*/], Local_282[iVar0 /*21*/].f_10, 3f, true, false);
									Local_282[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_491(Local_282[iVar0 /*21*/], Var2);
						func_488(&(Local_282[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_283[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_177) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (bLocal_83)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_283[0 /*21*/]))
						{
							bVar18 = false;
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
								{
									bVar18 = true;
								}
								else if ((!PED::IS_PED_INJURED(uLocal_194[2]) && PED::IS_PED_IN_VEHICLE(uLocal_194[2], Local_291.f_0, false)) || (!PED::IS_PED_INJURED(uLocal_194[1]) && PED::IS_PED_IN_VEHICLE(uLocal_194[1], Local_291.f_0, false)))
								{
									if ((iLocal_191 == 1 || iLocal_191 == 2) || iLocal_191 == 4)
									{
										if (__LIB_28__::func_240(&Local_276) > 0)
										{
											bVar18 = true;
										}
									}
								}
							}
							if (bVar18)
							{
								Local_283[0 /*21*/] = func_499(iLocal_177, -544.1907f, 5296.94f, 87.4445f, 157.0515f, iLocal_292, 200, 0, joaat("WEAPON_RPG"), 26);
								PED::SET_PED_STRAFE_CLIPSET(Local_283[0 /*21*/], "move_ped_strafing");
								func_496(&Local_283, "Rocket_");
							}
							else
							{
								func_661(&Local_283);
							}
						}
					}
				}
			}
		}
		else
		{
			fVar21 = 0f;
			fVar22 = 0f;
			iVar0 = 0;
			while (iVar0 < Local_283.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_283[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_283[iVar0 /*21*/]))
					{
						switch (Local_283[iVar0 /*21*/].f_7)
						{
							case 0:
								Local_283[iVar0 /*21*/].f_10 = { -546.0917f, 5286.8765f, 87.3861f };
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_283[iVar0 /*21*/], Local_283[iVar0 /*21*/].f_10, 1f, true, false);
								__LIB_28__::func_241(&(Local_283[iVar0 /*21*/]), 10, 0, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_283[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_283[iVar0 /*21*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_283[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_283[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_283[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_283[iVar0 /*21*/], 5, 1f);
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
								{
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_283[iVar0 /*21*/].f_10, Local_291.f_0, 2f, false, 0.25f, 4f, false, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_291.f_0, -1, false);
								}
								else
								{
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_283[iVar0 /*21*/].f_10, PLAYER::PLAYER_PED_ID(), 2f, false, 0.25f, 4f, false, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_283[iVar0 /*21*/], iVar1);
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								__LIB_0__::func_640(Local_283[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								Local_283[iVar0 /*21*/].f_8 = 0;
								Local_283[iVar0 /*21*/].f_7++;
								break;
							case 1:
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_283[iVar0 /*21*/], true), Local_283[iVar0 /*21*/].f_10) < 4f)
								{
									if (Local_283[iVar0 /*21*/].f_8 == 0)
									{
										Local_283[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER() + 1000;
									}
									else if ((MISC::GET_GAME_TIMER() - Local_283[iVar0 /*21*/].f_8) > 0)
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_291.f_0, false))
										{
											if (iLocal_122 < 4)
											{
												if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_154))
												{
													TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_154, ENTITY::GET_ENTITY_COORDS(Local_291.f_0, true), &iVar20);
													TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_154, (iVar20 + (4 - iLocal_122)), &Var19);
													Var19.f_0 = (Var19.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f));
													Var19.f_1 = (Var19.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f));
													if (iLocal_122 == 0)
													{
														Var19 = { -570.1f, 5266.5f, 70.9f };
													}
													PED::SET_PED_SHOOTS_AT_COORD(Local_283[iVar0 /*21*/], Var19, false);
													iLocal_122++;
													Local_283[iVar0 /*21*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000));
												}
											}
											else
											{
												if (iLocal_185 != 0)
												{
													PED::SET_PED_SHOOTS_AT_COORD(Local_283[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), false);
												}
												else if (!PED::IS_PED_INJURED(uLocal_194[1]) && !PED::IS_PED_INJURED(uLocal_194[2]))
												{
													fVar22 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_283[iVar0 /*21*/], true), ENTITY::GET_ENTITY_COORDS(uLocal_194[1], true));
													fVar21 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_283[iVar0 /*21*/], true), ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true));
													if (fVar22 < fVar21)
													{
														PED::SET_PED_SHOOTS_AT_COORD(Local_283[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(uLocal_194[1], true), false);
													}
													else
													{
														PED::SET_PED_SHOOTS_AT_COORD(Local_283[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true), false);
													}
												}
												iLocal_122++;
												Local_283[iVar0 /*21*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000));
											}
										}
										else
										{
											TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_283[iVar0 /*21*/], 300f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_283[iVar0 /*21*/], false);
											Local_283[iVar0 /*21*/].f_7++;
										}
									}
								}
								else if (iLocal_183 >= 5)
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_283[iVar0 /*21*/], 300f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_283[iVar0 /*21*/], false);
									Local_283[iVar0 /*21*/].f_7++;
								}
								break;
							case 2:
								break;
						}
						if (Local_283[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_283[iVar0 /*21*/], &(Local_283[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							Var23 = { ENTITY::GET_ENTITY_COORDS(Local_283[iVar0 /*21*/], true) };
							if (Var23.f_2 < 84f)
							{
								PED::APPLY_DAMAGE_TO_PED(Local_283[iVar0 /*21*/], 300, true, 0);
							}
						}
					}
					else
					{
						if (iVar0 == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 2f, 3);
						}
						func_491(Local_283[iVar0 /*21*/], Var2);
						func_488(&(Local_283[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_284[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_177) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (bLocal_78)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_284[0 /*21*/]))
						{
							if (Global_96890)
							{
								if (iLocal_191 != 3)
								{
									Local_284[0 /*21*/] = func_499(iLocal_177, -503.8309f, 5323.56f, 88.016f, 158.6523f, iLocal_292, 200, 0, joaat("WEAPON_SNIPERRIFLE"), 26);
								}
								else
								{
									Local_284[0 /*21*/] = func_499(iLocal_177, -510.6272f, 5308.1636f, 87.9901f, 158.8536f, iLocal_292, 200, 0, joaat("WEAPON_SNIPERRIFLE"), 26);
								}
								PED::SET_PED_STRAFE_CLIPSET(Local_284[0 /*21*/], "move_ped_strafing");
								func_496(&Local_284, "Sniper_");
							}
							else
							{
								Local_284[0 /*21*/].f_3 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_284.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_284[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_284[iVar0 /*21*/]))
					{
						switch (Local_284[iVar0 /*21*/].f_7)
						{
							case 0:
								Local_284[iVar0 /*21*/].f_10 = { -512.1504f, 5308.8306f, 88.0628f };
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_284[iVar0 /*21*/], Local_284[iVar0 /*21*/].f_10, 1f, true, false);
								__LIB_28__::func_241(&(Local_284[iVar0 /*21*/]), 40, 0, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_284[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_284[iVar0 /*21*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_284[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_284[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_284[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_284[iVar0 /*21*/], 5, 1f);
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_284[iVar0 /*21*/].f_10, PLAYER::PLAYER_PED_ID(), 2f, false, 0.25f, 4f, false, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 500f, 0);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_284[iVar0 /*21*/], iVar1);
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								Local_284[iVar0 /*21*/].f_1 = __LIB_0__::func_666(Local_284[iVar0 /*21*/], 1, 145);
								iLocal_128 = MISC::GET_GAME_TIMER();
								Local_284[iVar0 /*21*/].f_8 = 0;
								Local_284[iVar0 /*21*/].f_7++;
								break;
						}
						Var24 = { ENTITY::GET_ENTITY_COORDS(Local_284[iVar0 /*21*/], true) };
						if (Var24.f_2 < 85f)
						{
							PED::APPLY_DAMAGE_TO_PED(Local_284[iVar0 /*21*/], 300, true, 0);
						}
					}
					else
					{
						if (iVar0 == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 2f, 3);
						}
						func_491(Local_284[iVar0 /*21*/], Var2);
						func_488(&(Local_284[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_285[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_177) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (Local_271[0 /*21*/].f_3 && (iLocal_192 == 1 || __LIB_28__::func_240(&Local_271) < 4))
					{
						if ((((iLocal_192 == 2 || iLocal_192 == 1) || iLocal_192 == 0) && (iLocal_191 == 4 || iLocal_191 == 2)) && Global_96890)
						{
							if (iLocal_192 == 1)
							{
								Local_285[0 /*21*/].f_3 = 1;
								Local_285[1 /*21*/].f_3 = 1;
								Local_285[2 /*21*/].f_3 = 1;
								func_496(&Local_285, "Extra_");
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_285[0 /*21*/]))
							{
								Local_285[0 /*21*/] = func_499(iLocal_177, -537.4317f, 5292.5913f, 88.1882f, 162.6303f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
								PED::SET_PED_STRAFE_CLIPSET(Local_285[0 /*21*/], "move_ped_strafing");
							}
							else
							{
								Local_285[1 /*21*/].f_3 = 1;
								Local_285[2 /*21*/].f_3 = 1;
								func_496(&Local_285, "Extra_");
							}
						}
						else
						{
							Local_285[0 /*21*/].f_3 = 1;
							Local_285[1 /*21*/].f_3 = 1;
							Local_285[2 /*21*/].f_3 = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_285.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_285[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_285[iVar0 /*21*/]))
					{
						switch (Local_285[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									if (iLocal_192 == 1)
									{
										Local_285[iVar0 /*21*/].f_10 = { -569.2231f, 5302.5654f, 82.749f };
									}
									else
									{
										Local_285[iVar0 /*21*/].f_10 = { -539.9885f, 5285.099f, 87.4831f };
									}
								}
								else if (iVar0 == 1)
								{
									Local_285[iVar0 /*21*/].f_10 = { -586.1855f, 5316.1484f, 69.2147f };
								}
								else if (iVar0 == 2)
								{
									Local_285[iVar0 /*21*/].f_10 = { -566.7495f, 5269.23f, 69.2973f };
								}
								if (iVar0 == 0)
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_285[iVar0 /*21*/], Local_285[iVar0 /*21*/].f_10, 1f, true, false);
									__LIB_28__::func_241(&(Local_285[iVar0 /*21*/]), 10, 0, 2, 0, 1);
								}
								else
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_285[iVar0 /*21*/], Local_285[iVar0 /*21*/].f_10, 2f, true, false);
									__LIB_28__::func_241(&(Local_285[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								}
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_285[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_285[iVar0 /*21*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_285[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_285[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_285[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_285[iVar0 /*21*/], 5, 1f);
								if (iVar0 == 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_285[iVar0 /*21*/].f_10, PLAYER::PLAYER_PED_ID(), 2f, false, 0.25f, 4f, false, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
									TASK::CLOSE_SEQUENCE_TASK(iVar1);
									TASK::TASK_PERFORM_SEQUENCE(Local_285[iVar0 /*21*/], iVar1);
									TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								}
								else
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_285[iVar0 /*21*/], 200f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_285[iVar0 /*21*/], false);
								}
								Local_285[iVar0 /*21*/].f_8 = 0;
								Local_285[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_285[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_285[iVar0 /*21*/], &(Local_285[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (iVar0 == 0 && iLocal_192 != 1)
							{
								Var25 = { ENTITY::GET_ENTITY_COORDS(Local_285[iVar0 /*21*/], true) };
								if (Var25.f_2 < 85f)
								{
									PED::APPLY_DAMAGE_TO_PED(Local_285[iVar0 /*21*/], 300, true, 0);
								}
							}
						}
					}
					else
					{
						func_491(Local_285[iVar0 /*21*/], Var2);
						func_488(&(Local_285[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_286[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SMG")))
				{
					if (bLocal_79)
					{
						if (!Local_276[0 /*21*/].f_3 && Var2.f_1 > 5315.2f)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_286[0 /*21*/]))
							{
								if (iLocal_191 != 4 && iLocal_191 != 2)
								{
									Local_286[0 /*21*/] = func_499(iLocal_177, -510.4515f, 5304.9263f, 79.2676f, 341.0726f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
								}
								else
								{
									Local_286[0 /*21*/] = func_499(iLocal_177, -502.498f, 5298.049f, 79.5761f, 70.1201f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_286[1 /*21*/]))
							{
								if (SYSTEM::VDIST2(Var2, -462.7f, 5341.5f, 83.4f) < 400f || iLocal_191 != 3)
								{
									Local_286[1 /*21*/] = func_499(iLocal_177, -485.4689f, 5324.949f, 79.61f, 349.1465f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
								}
								else
								{
									Local_286[1 /*21*/] = func_499(iLocal_177, -504.8583f, 5308.1387f, 79.2676f, 320.3648f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_286[2 /*21*/]))
							{
								if (SYSTEM::VDIST2(Var2, -462.7f, 5341.5f, 83.4f) < 400f || iLocal_191 != 3)
								{
									Local_286[2 /*21*/] = func_499(iLocal_177, -491.6151f, 5327.02f, 79.5436f, 334.4004f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
								}
								else
								{
									Local_286[2 /*21*/] = func_499(iLocal_177, -505.3082f, 5306.3003f, 79.2676f, 325.5638f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_286[3 /*21*/]))
							{
								if (iLocal_191 != 4 && iLocal_191 != 2)
								{
									Local_286[3 /*21*/] = func_499(iLocal_177, -512.5977f, 5305.67f, 79.2676f, 307.494f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
								}
								else
								{
									Local_286[3 /*21*/] = func_499(iLocal_177, -502.8857f, 5326.429f, 79.2676f, 192.3165f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
								}
								func_496(&Local_286, "Rear1_");
							}
						}
						else
						{
							Local_286[0 /*21*/].f_3 = 1;
							Local_286[1 /*21*/].f_3 = 1;
							Local_286[2 /*21*/].f_3 = 1;
							Local_286[3 /*21*/].f_3 = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_286.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_286[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_286[iVar0 /*21*/]))
					{
						switch (Local_286[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_286[iVar0 /*21*/].f_10 = { -491.425f, 5314.0537f, 79.61f };
								}
								else if (iVar0 == 1)
								{
									Local_286[iVar0 /*21*/].f_10 = { -487.1756f, 5317.7554f, 79.61f };
								}
								else if (iVar0 == 2)
								{
									Local_286[iVar0 /*21*/].f_10 = { -484.8855f, 5314.1694f, 79.61f };
								}
								else if (iVar0 == 3)
								{
									Local_286[iVar0 /*21*/].f_10 = { -480.3152f, 5303.8145f, 79.61f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_286[iVar0 /*21*/], Local_286[iVar0 /*21*/].f_10, 2f, true, false);
								__LIB_28__::func_241(&(Local_286[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_286[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_286[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_286[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_286[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_286[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_286[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_286[iVar0 /*21*/], 3);
								if (WEAPON::HAS_PED_GOT_WEAPON(Local_286[iVar0 /*21*/], joaat("WEAPON_SMG"), false))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Local_286[iVar0 /*21*/], joaat("WEAPON_SMG"), true);
								}
								else if (WEAPON::HAS_PED_GOT_WEAPON(Local_286[iVar0 /*21*/], joaat("WEAPON_ASSAULTRIFLE"), false))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Local_286[iVar0 /*21*/], joaat("WEAPON_ASSAULTRIFLE"), true);
								}
								if (iVar0 == 0)
								{
									__LIB_0__::func_640(Local_286[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_286[iVar0 /*21*/].f_8 = 0;
								Local_286[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_286[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_286[iVar0 /*21*/], &(Local_286[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (!Local_286[iVar0 /*21*/].f_4)
							{
								if (Local_286[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_286[iVar0 /*21*/], true), Local_286[iVar0 /*21*/].f_10) < 4f)
									{
										Local_286[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_286[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_191 == 4 || iLocal_191 == 3)
									{
										if ((!Local_286[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_286[iVar0 /*21*/], true)) < 900f) || (Local_286[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_286[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*21*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_286[iVar0 /*21*/], 13, 3f);
											Local_286[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (iLocal_191 != 4 && iLocal_191 != 3)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_286[iVar0 /*21*/], true), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*21*/], 51, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*21*/], 50, false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_286[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_286[iVar0 /*21*/], Local_286[iVar0 /*21*/].f_10, 3f, true, false);
									Local_286[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_491(Local_286[iVar0 /*21*/], Var2);
						func_488(&(Local_286[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_287[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5 && iLocal_191 == 3)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SMG")))
				{
					if (bLocal_80 || __LIB_28__::func_240(&Local_286) <= 1)
					{
						if (!Local_276[0 /*21*/].f_3 && Var2.f_1 > 5315.2f)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_287[0 /*21*/]))
							{
								Local_287[0 /*21*/] = func_499(iLocal_177, -503.334f, 5294.9595f, 79.55f, 343.6317f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_287[1 /*21*/]))
							{
								Local_287[1 /*21*/] = func_499(iLocal_177, -511.1639f, 5305.3657f, 79.2676f, 345.3339f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_287[2 /*21*/]))
							{
								Local_287[2 /*21*/] = func_499(iLocal_177, -503.0632f, 5293.5557f, 79.5585f, 352.8675f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_287[3 /*21*/]))
							{
								Local_287[3 /*21*/] = func_499(iLocal_177, -519.3588f, 5304.95f, 79.2676f, 261.0985f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
								func_496(&Local_287, "Rear2_");
							}
						}
						else
						{
							Local_287[0 /*21*/].f_3 = 1;
							Local_287[1 /*21*/].f_3 = 1;
							Local_287[2 /*21*/].f_3 = 1;
							Local_287[3 /*21*/].f_3 = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_287.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_287[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_287[iVar0 /*21*/]))
					{
						switch (Local_287[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_287[iVar0 /*21*/].f_10 = { -499.1525f, 5298.5225f, 79.6052f };
								}
								else if (iVar0 == 1)
								{
									Local_287[iVar0 /*21*/].f_10 = { -495.8702f, 5309.066f, 79.5914f };
								}
								else if (iVar0 == 2)
								{
									Local_287[iVar0 /*21*/].f_10 = { -501.6623f, 5302.262f, 79.5513f };
								}
								else
								{
									Local_287[iVar0 /*21*/].f_10 = { -488.4678f, 5306.713f, 79.6103f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_287[iVar0 /*21*/], Local_287[iVar0 /*21*/].f_10, 2f, true, false);
								__LIB_28__::func_241(&(Local_287[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_287[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_287[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_287[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_287[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_287[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_287[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_287[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_287[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_287[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									__LIB_0__::func_640(Local_287[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_287[iVar0 /*21*/].f_8 = 0;
								Local_287[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_287[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_287[iVar0 /*21*/], &(Local_287[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (!Local_287[iVar0 /*21*/].f_4)
							{
								if (Local_287[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_287[iVar0 /*21*/], true), Local_287[iVar0 /*21*/].f_10) < 4f)
									{
										Local_287[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_287[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_191 == 4 || iLocal_191 == 3)
									{
										if ((!Local_287[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_287[iVar0 /*21*/], true)) < 900f) || (Local_287[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_287[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_287[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_287[iVar0 /*21*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_287[iVar0 /*21*/], 13, 3f);
											Local_287[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (iLocal_191 != 4 && iLocal_191 != 3)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_287[iVar0 /*21*/], true), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_287[iVar0 /*21*/], 51, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_287[iVar0 /*21*/], 50, false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_287[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_287[iVar0 /*21*/], Local_287[iVar0 /*21*/].f_10, 3f, true, false);
									Local_287[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_491(Local_287[iVar0 /*21*/], Var2);
						func_488(&(Local_287[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_273[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (bLocal_72)
					{
						if (iLocal_185 == 0 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -485.04413f, 5304.46f, 66.85991f, -562.70807f, 5083.085f, 129.19806f, 91.25f, false, true, 0))
						{
							func_661(&Local_273);
						}
						else
						{
							Local_273[0 /*21*/] = func_499(iLocal_177, -535.3907f, 5288.1235f, 83.9712f, 100.9884f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							PED::SET_PED_STRAFE_CLIPSET(Local_273[0 /*21*/], "move_ped_strafing");
							func_496(&Local_273, "Belt_");
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_273.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_273[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_273[iVar0 /*21*/]))
					{
						switch (Local_273[iVar0 /*21*/].f_7)
						{
							case 0:
								Local_273[0 /*21*/].f_10 = { -540.4274f, 5272.74f, 80.2341f };
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_273[0 /*21*/].f_10, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, false, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_273[iVar0 /*21*/], iVar1);
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[iVar0 /*21*/], Local_273[0 /*21*/].f_10, 2f, false, false);
								__LIB_28__::func_241(&(Local_273[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_273[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[iVar0 /*21*/], 1, false);
								PED::SET_COMBAT_FLOAT(Local_273[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_273[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_273[iVar0 /*21*/], 5, 1f);
								if (iVar0 == 0)
								{
									__LIB_0__::func_640(Local_273[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_273[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_273[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_273[iVar0 /*21*/], &(Local_273[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							Var26 = { ENTITY::GET_ENTITY_COORDS(Local_273[iVar0 /*21*/], true) };
							if (Var26.f_2 < 78.5f)
							{
								PED::APPLY_DAMAGE_TO_PED(Local_273[iVar0 /*21*/], 200, true, 0);
							}
						}
					}
					else
					{
						func_491(Local_273[iVar0 /*21*/], Var2);
						func_488(&(Local_273[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_274[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SMG")))
				{
					if (bLocal_77 || ((iLocal_191 != 3 && PED::IS_PED_INJURED(Local_283[0 /*21*/])) && __LIB_28__::func_240(&Local_273) == 0))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_274[0 /*21*/]))
						{
							if (iLocal_191 != 2)
							{
								Local_274[0 /*21*/] = func_499(iLocal_177, -502.0386f, 5252.9727f, 79.6104f, 74.4253f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
							else
							{
								Local_274[0 /*21*/] = func_499(iLocal_177, -503.4162f, 5258.272f, 79.61f, 79.7836f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_274[1 /*21*/]))
						{
							if (iLocal_191 != 2)
							{
								Local_274[1 /*21*/] = func_499(iLocal_177, -527.3934f, 5272.4277f, 73.3164f, 126.3766f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
							}
							else
							{
								Local_274[1 /*21*/] = func_499(iLocal_177, -528.6542f, 5274.0645f, 73.1741f, 133.3165f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_274[2 /*21*/]))
						{
							if (iLocal_191 != 2)
							{
								Local_274[2 /*21*/] = func_499(iLocal_177, -531.4066f, 5263.5024f, 73.3278f, 175.8792f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
							else
							{
								Local_274[2 /*21*/] = func_499(iLocal_177, -531.7002f, 5265.315f, 73.2375f, 155.8115f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_274[3 /*21*/]))
						{
							if (iLocal_191 != 2)
							{
								Local_274[3 /*21*/] = func_499(iLocal_177, -502.2048f, 5252.96f, 79.6104f, 83.7086f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
							else
							{
								Local_274[3 /*21*/] = func_499(iLocal_177, -502.4242f, 5256.5176f, 79.61f, 84.5402f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
							func_496(&Local_274, "BeforeT_");
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_274.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_274[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_274[iVar0 /*21*/]))
					{
						switch (Local_274[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_274[iVar0 /*21*/].f_10 = { -520.9052f, 5260.525f, 78.85f };
								}
								else if (iVar0 == 1)
								{
									Local_274[iVar0 /*21*/].f_10 = { -542.3945f, 5253.3306f, 73.6131f };
								}
								else if (iVar0 == 2)
								{
									Local_274[iVar0 /*21*/].f_10 = { -545.6429f, 5251.0005f, 73.1374f };
								}
								else if (iVar0 == 3)
								{
									Local_274[iVar0 /*21*/].f_10 = { -523.8617f, 5242.07f, 78.6782f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274[iVar0 /*21*/], Local_274[iVar0 /*21*/].f_10, 3f, true, false);
								__LIB_28__::func_241(&(Local_274[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_274[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_274[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_274[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_274[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_274[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_274[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_274[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_274[iVar0 /*21*/], 3);
								if (iVar0 == 2)
								{
									__LIB_0__::func_640(Local_274[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								if (iVar0 == 0 || iVar0 == 3)
								{
									Local_274[iVar0 /*21*/].f_5 = 1;
								}
								Local_274[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_274[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_274[iVar0 /*21*/], &(Local_274[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (!Local_274[iVar0 /*21*/].f_4)
							{
								if (Local_274[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_274[iVar0 /*21*/], true), Local_274[iVar0 /*21*/].f_10) < 4f)
									{
										Local_274[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_274[iVar0 /*21*/].f_8) > 15000)
								{
									if ((!Local_274[iVar0 /*21*/].f_5 && iLocal_191 == 4) || (Local_274[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_274[iVar0 /*21*/], true), Var2) < 25f))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_274[iVar0 /*21*/], 51, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_274[iVar0 /*21*/], 50, true);
										Local_274[iVar0 /*21*/].f_4 = 1;
									}
								}
							}
							else if (iLocal_191 != 4)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_274[iVar0 /*21*/], true), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_274[iVar0 /*21*/], 51, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_274[iVar0 /*21*/], 50, false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_274[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274[iVar0 /*21*/], Local_274[iVar0 /*21*/].f_10, 3f, true, false);
									Local_274[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_491(Local_274[iVar0 /*21*/], Var2);
						func_488(&(Local_274[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_275[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SMG")))
				{
					if (bLocal_73)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_275[0 /*21*/]))
						{
							Local_275[0 /*21*/] = func_499(iLocal_177, -500.7499f, 5274.358f, 79.61f, 125.7038f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_275[1 /*21*/]))
						{
							Local_275[1 /*21*/] = func_499(iLocal_177, -503.8717f, 5286.321f, 79.5971f, 174.9208f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_275[2 /*21*/]) && !Local_275[2 /*21*/].f_3)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -527.0826f, 5251.387f, 85.50326f, -554.00055f, 5261.277f, 68.925285f, 20f, false, true, 0))
							{
								Local_275[2 /*21*/] = func_499(iLocal_177, -492.2799f, 5259.2686f, 85.8358f, 96.183f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
							else
							{
								Local_275[2 /*21*/].f_3 = 1;
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_275[3 /*21*/]))
						{
							Local_275[3 /*21*/] = func_499(iLocal_177, -503.4756f, 5262.6255f, 79.6103f, 357.9579f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
							func_496(&Local_275, "Timber1_");
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_275.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_275[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_275[iVar0 /*21*/]))
					{
						switch (Local_275[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_275[iVar0 /*21*/].f_10 = { -515.1771f, 5265.7627f, 79.47f };
								}
								else if (iVar0 == 1)
								{
									Local_275[iVar0 /*21*/].f_10 = { -502.3758f, 5270.7603f, 79.61f };
								}
								else if (iVar0 == 2)
								{
									Local_275[iVar0 /*21*/].f_10 = { -492.2799f, 5259.2686f, 85.8358f };
									Local_275[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 3)
								{
									Local_275[iVar0 /*21*/].f_10 = { -504.5726f, 5265.7915f, 79.6103f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_275[iVar0 /*21*/], Local_275[iVar0 /*21*/].f_10, 3f, true, false);
								__LIB_28__::func_241(&(Local_275[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_275[iVar0 /*21*/], iLocal_292);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_275[iVar0 /*21*/], 1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_275[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275[iVar0 /*21*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_275[iVar0 /*21*/], 35, true);
								PED::SET_COMBAT_FLOAT(Local_275[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_275[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_275[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_275[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									__LIB_0__::func_640(Local_275[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_275[iVar0 /*21*/].f_7++;
								break;
							case 1:
								if (Var2.f_2 > 79.5f)
								{
									if (iVar0 == 2)
									{
										Local_275[iVar0 /*21*/].f_10 = { -485.1102f, 5278.609f, 85.865f };
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_275[iVar0 /*21*/], Local_275[iVar0 /*21*/].f_10, 2f, true, false);
										Local_275[iVar0 /*21*/].f_7++;
									}
								}
								break;
						}
						if (Local_275[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_275[iVar0 /*21*/], &(Local_275[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (iVar0 != 2 && Var2.f_2 > 79.5f)
							{
								if (!Local_275[iVar0 /*21*/].f_4)
								{
									if (Local_275[iVar0 /*21*/].f_8 == 0)
									{
										if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275[iVar0 /*21*/], true), Local_275[iVar0 /*21*/].f_10) < 4f)
										{
											Local_275[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - Local_275[iVar0 /*21*/].f_8) > 10000)
									{
										if ((!Local_275[iVar0 /*21*/].f_5 && iLocal_191 == 4) || (Local_275[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_275[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_275[iVar0 /*21*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_275[iVar0 /*21*/], 13, 3f);
											Local_275[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
								else if (iLocal_191 != 4)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275[iVar0 /*21*/], true), Var2) > 900f)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_275[iVar0 /*21*/], 51, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_275[iVar0 /*21*/], 50, false);
										PED::SET_PED_COMBAT_MOVEMENT(Local_275[iVar0 /*21*/], 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_275[iVar0 /*21*/], Local_275[iVar0 /*21*/].f_10, 3f, true, false);
										Local_275[iVar0 /*21*/].f_4 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_491(Local_275[iVar0 /*21*/], Var2);
						func_488(&(Local_275[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_276[0 /*21*/].f_3)
		{
			if (iLocal_183 < 5)
			{
				if (((STREAMING::HAS_MODEL_LOADED(iLocal_177) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SMG"))) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (bLocal_74 || (__LIB_28__::func_240(&Local_275) <= 1 && iLocal_191 != 3))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -495.67874f, 5296.4937f, 90.66683f, 21.25f, 14f, 12.5f, false, true, 0))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_276[0 /*21*/]))
							{
								Local_276[0 /*21*/] = func_499(iLocal_177, -501.683f, 5293.622f, 79.5882f, 164.6348f, iLocal_292, 200, 0, joaat("WEAPON_SMG"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_276[1 /*21*/]))
							{
								Local_276[1 /*21*/] = func_499(iLocal_177, -504.035f, 5286.59f, 79.5914f, 175.8207f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_276[2 /*21*/]) && !Local_276[2 /*21*/].f_3)
							{
								if (iLocal_191 != 3)
								{
									Local_276[2 /*21*/] = func_499(iLocal_177, -502.1692f, 5320.155f, 86.6316f, 164.93f, iLocal_292, 200, 0, joaat("WEAPON_COMBATMG"), 26);
									PED::SET_PED_STRAFE_CLIPSET(Local_276[2 /*21*/], "move_ped_strafing");
								}
								else
								{
									Local_276[2 /*21*/].f_3 = 1;
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_276[3 /*21*/]))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -514.7172f, 5247.3174f, 77.87701f, -499.80698f, 5287.7007f, 85.860344f, 21.5f, false, true, 0))
								{
									Local_276[3 /*21*/] = func_499(iLocal_177, -481.4254f, 5284.557f, 83.1625f, 146.3917f, iLocal_292, 200, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
									PED::SET_PED_STRAFE_CLIPSET(Local_276[3 /*21*/], "move_ped_strafing");
								}
								else
								{
									Local_276[3 /*21*/].f_3 = 1;
								}
								func_496(&Local_276, "Timber2_");
							}
						}
						else
						{
							Local_276[0 /*21*/].f_3 = 1;
							Local_276[1 /*21*/].f_3 = 1;
							Local_276[2 /*21*/].f_3 = 1;
							Local_276[3 /*21*/].f_3 = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_276.f_0)
			{
				bVar27 = false;
				if (ENTITY::DOES_ENTITY_EXIST(Local_276[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_276[iVar0 /*21*/]))
					{
						switch (Local_276[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 != 2)
								{
									bVar27 = true;
								}
								else if ((__LIB_28__::func_240(&Local_276) < Local_276.f_0 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -538.50116f, 5288.4434f, 72.86422f, -462.79443f, 5238.1567f, 99.61439f, 9.25f, false, true, 0)) || iLocal_191 == 3)
								{
									bVar27 = true;
								}
								if (bVar27)
								{
									if (iVar0 == 0)
									{
										Local_276[iVar0 /*21*/].f_10 = { -501.683f, 5293.622f, 79.5882f };
									}
									else if (iVar0 == 1)
									{
										Local_276[iVar0 /*21*/].f_10 = { -496.6544f, 5286.956f, 79.61f };
									}
									else if (iVar0 == 2)
									{
										Local_276[iVar0 /*21*/].f_10 = { -489.447f, 5304.7974f, 86.9991f };
										Local_276[iVar0 /*21*/].f_5 = 1;
									}
									else if (iVar0 == 3)
									{
										Local_276[iVar0 /*21*/].f_10 = { -478.784f, 5296.961f, 85.6715f };
										Local_276[iVar0 /*21*/].f_5 = 1;
									}
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_276[iVar0 /*21*/], Local_276[iVar0 /*21*/].f_10, 3f, true, false);
									__LIB_28__::func_241(&(Local_276[iVar0 /*21*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_276[iVar0 /*21*/], iLocal_292);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_276[iVar0 /*21*/], 1, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_276[iVar0 /*21*/], 200f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_276[iVar0 /*21*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_276[iVar0 /*21*/], 35, true);
									PED::SET_COMBAT_FLOAT(Local_276[iVar0 /*21*/], 13, 3f);
									PED::SET_COMBAT_FLOAT(Local_276[iVar0 /*21*/], 2, 300f);
									PED::SET_COMBAT_FLOAT(Local_276[iVar0 /*21*/], 5, 1f);
									PED::SET_PED_ALERTNESS(Local_276[iVar0 /*21*/], 3);
									if (iVar0 == 0)
									{
										__LIB_0__::func_640(Local_276[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
									}
									Local_276[iVar0 /*21*/].f_7++;
								}
								break;
							case 1:
								if (iVar0 == 2)
								{
									Var28 = { ENTITY::GET_ENTITY_COORDS(Local_276[iVar0 /*21*/], true) };
									if (Var28.f_2 < 82f)
									{
										PED::APPLY_DAMAGE_TO_PED(Local_276[iVar0 /*21*/], 200, true, 0);
									}
								}
								break;
						}
						if (Local_276[iVar0 /*21*/].f_7 != 0)
						{
							__LIB_0__::func_631(Local_276[iVar0 /*21*/], &(Local_276[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							if (iVar0 != 2)
							{
								if (!Local_276[iVar0 /*21*/].f_4)
								{
									if (Local_276[iVar0 /*21*/].f_8 == 0)
									{
										if (iLocal_185 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_276[iVar0 /*21*/], true), Local_276[iVar0 /*21*/].f_10) < 4f)
										{
											Local_276[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - Local_276[iVar0 /*21*/].f_8) > 10000)
									{
										if ((!Local_276[iVar0 /*21*/].f_5 && iLocal_191 == 4) || (Local_276[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_276[iVar0 /*21*/], true), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_276[iVar0 /*21*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_276[iVar0 /*21*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_276[iVar0 /*21*/], 13, 3f);
											Local_276[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
								else if (iLocal_191 != 4)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_276[iVar0 /*21*/], true), Var2) > 900f)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_276[iVar0 /*21*/], 51, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_276[iVar0 /*21*/], 50, false);
										PED::SET_PED_COMBAT_MOVEMENT(Local_276[iVar0 /*21*/], 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_276[iVar0 /*21*/], Local_276[iVar0 /*21*/].f_10, 3f, true, false);
										Local_276[iVar0 /*21*/].f_4 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_491(Local_276[iVar0 /*21*/], Var2);
						func_488(&(Local_276[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_661(int iParam0)//Position - 0x857AB
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*21*/])->f_3 = 1;
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*21*/]))
		{
			ENTITY::SET_ENTITY_HEALTH((*iParam0)[iVar0 /*21*/], 0, 0);
		}
		iVar0++;
	}
}

int func_666(struct<3> Param0)//Position - 0x858B7
{
	int iVar0[7];
	float fVar1;
	int iVar2;
	int iVar3;
	fVar1 = -1f;
	iVar0[4] = SYSTEM::VDIST2(Param0, -557.3316f, 5385.4585f, 69.6229f);
	iVar0[3] = SYSTEM::VDIST2(Param0, -611.2953f, 5334.0156f, 71.1438f);
	iVar0[0] = SYSTEM::VDIST2(Param0, -570.3f, 5212.4f, 88.4678f);
	iVar0[1] = SYSTEM::VDIST2(Param0, -598.2f, 5280.5f, 71.2f);
	iVar0[2] = SYSTEM::VDIST2(Param0, -574.834f, 5253.5645f, 69.4682f);
	iVar0[6] = SYSTEM::VDIST2(Param0, -503.5374f, 5248.138f, 85.5385f);
	iVar0[5] = SYSTEM::VDIST2(Param0, -476.6512f, 5344.688f, 83.9177f);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		if (fVar1 == -1f || iVar0[iVar3] < fVar1)
		{
			fVar1 = iVar0[iVar3];
			iVar2 = iVar3;
		}
		iVar3++;
	}
	return iVar2;
}

int func_667(struct<3> Param0, float fParam1)//Position - 0x859C5
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_172))
	{
		if (__LIB_13__::func_821() && __LIB_13__::func_791() != joaat("bulldozer"))
		{
			__LIB_14__::func_532();
			if (__LIB_14__::func_531())
			{
				iLocal_172 = __LIB_31__::func_966(Param0, fParam1);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_172, false, 0);
				VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(iLocal_172, false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_172, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_172, true, true);
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

void func_730()//Position - 0x8CBDB
{
	if (!PED::IS_PED_INJURED(func_484(2)))
	{
		func_50(func_484(2), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
}

void func_731()//Position - 0x8CC08
{
	if (!PED::IS_PED_INJURED(func_484(0)))
	{
		func_50(func_484(0), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
}

int func_732(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x8CC35
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		__LIB_17__::func_709(2, 1);
		if (__LIB_17__::func_719(2, 1))
		{
			if (bParam2)
			{
				return 1;
			}
			else if (__LIB_17__::func_245(&iLocal_170, 2, Param0, fParam1, 1, 1))
			{
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_170, 0, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_170, 1, false);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_170, false, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_170, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_170, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_170, true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_170, false);
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

int func_771(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x91352
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_169))
	{
		__LIB_17__::func_709(0, 1);
		if (__LIB_17__::func_719(0, 1))
		{
			if (bParam2)
			{
				return 1;
			}
			else if (__LIB_17__::func_245(&iLocal_169, 0, Param0, fParam1, 1, 1))
			{
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_169, 0, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_169, 1, false);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_169, false, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_169, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_169, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_169, true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_169, false);
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

int func_772(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x913DB
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_194[2]))
	{
		__LIB_17__::func_319(2);
		if (__LIB_17__::func_318(2))
		{
			if (bParam2)
			{
				return 1;
			}
			else if (func_272(&(uLocal_194[2]), 2, Param0, fParam1, 1, 0, 0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_194[2], false);
				PED::SET_PED_MAX_HEALTH(uLocal_194[2], 1800);
				ENTITY::SET_ENTITY_HEALTH(uLocal_194[2], 1800, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_194[2], false);
				PED::SET_PED_CONFIG_FLAG(uLocal_194[2], 118, false);
				PED::SET_PED_CONFIG_FLAG(uLocal_194[2], 174, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_194[2], 188, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_194[2], true);
				Local_258.f_3 = 0;
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_194[2], joaat("WEAPON_CARBINERIFLE"), 500, true, true);
				__LIB_0__::func_222(&Local_294, 2, uLocal_194[2], "TREVOR", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_194[2], joaat("PLAYER"));
				func_730();
				return 1;
			}
		}
	}
	else
	{
		if (Local_294[2 /*10*/] != uLocal_194[2])
		{
			__LIB_0__::func_222(&Local_294, 2, uLocal_194[2], "TREVOR", 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_775(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x91542
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_194[0]))
	{
		__LIB_17__::func_319(0);
		if (__LIB_17__::func_318(0))
		{
			if (bParam2)
			{
				return 1;
			}
			else if (func_272(&(uLocal_194[0]), 0, Param0, fParam1, 1, 0, 0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_194[0], false);
				PED::SET_PED_MAX_HEALTH(uLocal_194[0], 1800);
				ENTITY::SET_ENTITY_HEALTH(uLocal_194[0], 1800, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_194[0], false);
				PED::SET_PED_CONFIG_FLAG(uLocal_194[0], 118, false);
				PED::SET_PED_CONFIG_FLAG(uLocal_194[0], 174, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_194[0], 188, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_194[0], true);
				func_50(uLocal_194[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Local_261.f_3 = 0;
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), 100, true, true);
				__LIB_0__::func_222(&Local_294, 0, uLocal_194[0], "MICHAEL", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_194[0], joaat("PLAYER"));
				func_731();
				return 1;
			}
		}
	}
	else
	{
		if (Local_294[0 /*10*/] != uLocal_194[0])
		{
			__LIB_0__::func_222(&Local_294, 0, uLocal_194[0], "MICHAEL", 0, 1);
		}
		return 1;
	}
	return 0;
}

void func_776()//Position - 0x91673
{
	iLocal_75 = 0;
	iLocal_76 = 0;
	bLocal_79 = false;
	bLocal_80 = false;
	bLocal_72 = false;
	bLocal_73 = false;
	iLocal_85 = 0;
	bLocal_81 = false;
	bLocal_82 = false;
	bLocal_69 = false;
	bLocal_74 = false;
	bLocal_83 = false;
	bLocal_78 = false;
	bLocal_77 = false;
	bLocal_93 = false;
	iLocal_94 = 0;
	iLocal_91 = 0;
	iLocal_90 = 0;
	iLocal_92 = 0;
	bLocal_84 = false;
	iLocal_86 = 0;
	iLocal_95 = 0;
	iLocal_122 = 0;
	iLocal_124 = 0;
	iLocal_123 = 0;
	iLocal_128 = 0;
	iLocal_102 = 0;
	if (iLocal_183 <= 3)
	{
		bLocal_70 = false;
		bLocal_71 = false;
		iLocal_85 = 0;
	}
	else if (iLocal_183 == 4)
	{
		bLocal_70 = true;
		bLocal_71 = false;
		iLocal_85 = 0;
	}
	else if (iLocal_183 >= 5)
	{
		bLocal_70 = true;
		bLocal_71 = true;
		iLocal_85 = 1;
		Local_267.f_3 = 50;
	}
}

void func_777()//Position - 0x9170E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	bool bVar4;
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (iLocal_184 == 4)
	{
		if (func_198())
		{
			if (bLocal_68)
			{
				__LIB_0__::func_427(-516.7184f, 5305.604f, 79.2676f, 248.7328f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -516.7184f, 5305.604f, 79.2676f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 248.7328f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			func_776();
			if (Global_96890)
			{
				while (((!ENTITY::DOES_ENTITY_EXIST(uLocal_194[0]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_194[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_169)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_170))
				{
					func_775(Local_60, fLocal_145, 0);
					func_772(-508.7989f, 5305.9316f, 79.2676f, 250.0743f, 0);
					func_771(Local_50, fLocal_139, 0);
					func_732(Local_51, fLocal_140, 0);
					SYSTEM::WAIT(0);
				}
				func_731();
				func_730();
			}
			while ((((!func_667(Local_62, fLocal_146) || !ENTITY::DOES_ENTITY_EXIST(Local_291.f_0)) || !ENTITY::DOES_ENTITY_EXIST(Local_267.f_0)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_164[0])) || !bLocal_69)
			{
				func_659();
				func_483();
				func_192(-521.4622f, 5307.608f, 79.2676f, 252.3208f);
				func_869(Local_54, fLocal_143, 0);
				func_658();
				SYSTEM::WAIT(0);
			}
			func_50(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			__LIB_0__::func_433(0, -1, 0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 10000)
			{
				if (((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && ((!PED::IS_PED_INJURED(uLocal_194[0]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[0])) || PED::IS_PED_INJURED(uLocal_194[0]))) && ((!PED::IS_PED_INJURED(uLocal_194[1]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[1])) || PED::IS_PED_INJURED(uLocal_194[1]))) && ((!PED::IS_PED_INJURED(uLocal_194[2]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[2])) || PED::IS_PED_INJURED(uLocal_194[2])))
				{
					SYSTEM::SETTIMERA(100000);
				}
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(uLocal_194[0]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_194[0], true, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_194[2]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_194[2], true, 1);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			__LIB_39__::func_59(1);
			func_655(1);
			func_654(1);
			func_653();
			func_507();
			func_868();
			func_867();
			iLocal_100[23] = 1;
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f, true, false, false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			iLocal_185 = 1;
			Local_267.f_3 = 50;
			iLocal_101 = 0;
			iLocal_184 = 0;
		}
	}
	if (iLocal_184 == 0)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_ALERT"))
		{
			AUDIO::START_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_ALERT");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_PROTECT_LAMAR"))
		{
			AUDIO::START_AUDIO_SCENE("FRANKLIN_2_PROTECT_LAMAR");
		}
		if (Global_96890)
		{
			if (!PED::IS_PED_INJURED(uLocal_194[1]))
			{
				iVar0 = uLocal_194[1];
			}
			else
			{
				iVar0 = uLocal_194[2];
			}
			if (!PED::IS_PED_INJURED(iVar0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, true), Local_55) > 2500f)
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iVar0))
					{
						if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(iVar0), -507.0433f, 5308.2754f, 79.2676f, true))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, -507.0433f, 5308.2754f, 79.2676f, true, false, false, true);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, -494.3257f, 5324.513f, 79.5372f, true, false, false, true);
						}
					}
				}
			}
			Local_258.f_3 = 0;
			Local_258.f_7 = 1;
			Local_264.f_3 = 0;
			Local_264.f_7 = 1;
		}
		if (HUD::DOES_BLIP_EXIST(Local_267.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_267.f_1));
		}
		func_597(2, "GET_LAMAR_OUT", 0, 0, 0, 0);
		__LIB_28__::func_244(&uLocal_194, 0, 0);
		__LIB_28__::func_244(&uLocal_194, 2, 0);
		__LIB_28__::func_244(&uLocal_194, 1, 0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_595();
			AUDIO::TRIGGER_MUSIC_EVENT("FRA2_CUT_LAMAR_RT");
			SYSTEM::WAIT(500);
			__LIB_16__::func_11();
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FRA2_GOT_LAMAR");
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		SYSTEM::SETTIMERB(0);
		SYSTEM::SETTIMERA(0);
		iLocal_125 = 0;
		iLocal_193 = 3;
		iLocal_127 = MISC::GET_GAME_TIMER();
		iLocal_101 = 0;
		iLocal_184 = 1;
	}
	if (iLocal_184 == 1)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (!PED::IS_PED_INJURED(Local_267.f_0))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(Local_267.f_0, true) };
		}
		if (!PED::IS_PED_INJURED(uLocal_194[0]))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_194[0], true) };
		}
		func_865(1);
		func_500();
		func_659();
		func_483();
		func_864();
		func_861();
		if (!iLocal_100[34])
		{
			if (Global_96890)
			{
				if (!__LIB_13__::func_755(&Local_238, 1))
				{
					if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_snipe1", 7, 0, 0, 0))
					{
						iLocal_100[34] = 1;
					}
				}
			}
			else
			{
				iLocal_100[34] = 1;
			}
		}
		else if (!iLocal_100[12])
		{
			if (!__LIB_13__::func_755(&Local_238, 2))
			{
				__LIB_0__::func_229("FRAN2_leadL", 7500, 0);
				iLocal_100[12] = 1;
			}
		}
		else if (!iLocal_100[25])
		{
			if (((!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477()) && iLocal_185 != 0) && Global_96890)
			{
				if (SYSTEM::TIMERA() < 35000 && !PED::IS_PED_INJURED(Local_267.f_0))
				{
					if (iLocal_100[23])
					{
						if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(func_484(2), true)) < 400f)
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_LSEET", 7, 0, 0, 0))
							{
								iLocal_100[25] = 1;
							}
						}
					}
					else if (iLocal_100[24])
					{
						if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(func_484(1), true)) < 400f)
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_LSEEF", 7, 0, 0, 0))
							{
								iLocal_100[25] = 1;
							}
						}
					}
				}
			}
		}
		if (!HUD::DOES_BLIP_EXIST(Local_267.f_1) && !PED::IS_PED_INJURED(Local_267.f_0))
		{
			Local_267.f_1 = __LIB_0__::func_639(Local_267.f_0, 0, 0);
		}
		if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
		{
			if (iLocal_100[12])
			{
				func_860();
				func_858();
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_194[0]))
		{
			if (((!PED::IS_PED_INJURED(Local_289[3 /*21*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_289[3 /*21*/], true), Var3) < 1600f) || (!PED::IS_PED_INJURED(Local_289[4 /*21*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_289[4 /*21*/], true), Var3) < 1600f)) || (!PED::IS_PED_INJURED(Local_289[5 /*21*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_289[5 /*21*/], true), Var3) < 1600f))
			{
				bLocal_93 = true;
				iLocal_95 = 1;
				if (!iLocal_100[63])
				{
					if (!__LIB_13__::func_755(&Local_238, 1))
					{
						if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_MIKEHURT", 7, 0, 0, 0))
						{
							iLocal_100[63] = 1;
							__LIB_28__::func_244(&uLocal_194, 0, 1);
							__LIB_15__::func_961(&uLocal_194, 0, 1, 2);
						}
					}
				}
			}
		}
		if (bLocal_93)
		{
			if ((PED::IS_PED_INJURED(Local_289[3 /*21*/]) && PED::IS_PED_INJURED(Local_289[4 /*21*/])) && PED::IS_PED_INJURED(Local_289[5 /*21*/]))
			{
				__LIB_28__::func_244(&uLocal_194, 0, 0);
				bLocal_93 = false;
			}
		}
		switch (iLocal_101)
		{
			case 0:
				ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_56, Global_19, true, true, 0);
				if (((__LIB_28__::func_240(&Local_289) == 0 && __LIB_28__::func_240(&Local_279) == 0) && PED::IS_PED_INJURED(Local_283[0 /*21*/])) && PED::IS_PED_INJURED(Local_284[0 /*21*/]))
				{
					bVar4 = true;
				}
				if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -565.16925f, 5272.2397f, 69.214165f, -584.38354f, 5234.474f, 78.22045f, 20f, false, true, 0) || iLocal_185 == 0) && bVar4) && !__LIB_0__::func_477())
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_157))
					{
						HUD::REMOVE_BLIP(&iLocal_157);
					}
					if (iLocal_185 == 1)
					{
						iLocal_184 = 2;
					}
					else if (iLocal_125 == 0)
					{
						iLocal_125 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_125) > 1500)
					{
						HUD::CLEAR_PRINTS();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						__LIB_0__::func_638();
						__LIB_0__::func_497(369, 1, 0);
						__LIB_16__::func_15(&uLocal_194, 1, 0);
						__LIB_28__::func_245(&uLocal_194, 1);
						Local_299.f_12 = uLocal_194[1];
						if (!PED::IS_PED_INJURED(uLocal_194[1]))
						{
							TASK::TASK_AIM_GUN_AT_COORD(uLocal_194[1], -587.6f, 5230.2f, 71.4f, -1, false, false);
						}
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -489.7256f, 5408.6177f, 49.595184f, -570.13477f, 5210.887f, 122.60995f, 188.75f, false, true, 0))
						{
							iLocal_193 = 0;
						}
						iLocal_101++;
					}
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_157))
					{
						iLocal_157 = __LIB_0__::func_488(Local_56, 0);
					}
					if (__LIB_0__::func_501("FRAN2_SWFRANK", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (Global_96890)
					{
						if ((iLocal_185 != 1 || !bVar4) || __LIB_0__::func_477())
						{
							func_828();
						}
						func_827();
						func_817();
						if (iLocal_185 == 0)
						{
							if (__LIB_0__::func_501("FRAN2_leadL", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (!iLocal_100[13] && !bLocal_93)
							{
								if (!__LIB_13__::func_755(&Local_238, 2) && !__LIB_0__::func_477())
								{
									__LIB_0__::func_229("FRAN2_PROT", 7500, 0);
									iLocal_100[13] = 1;
								}
							}
						}
						else if (iLocal_100[13])
						{
							if (__LIB_0__::func_501("FRAN2_PROT", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
						}
					}
				}
				break;
			case 1:
				if (!__LIB_17__::func_671(&Local_299, iLocal_193, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_184 = 2;
				}
				else if (Local_299.f_18)
				{
					if (!Local_299.f_19)
					{
						if (func_203(&uLocal_194, 1, 1, 0))
						{
							if (!PED::IS_PED_INJURED(uLocal_194[uLocal_194.f_5]))
							{
								if (iLocal_103 < 110)
								{
									iLocal_103 = 110;
								}
								PED::SET_PED_CAN_BE_TARGETTED(uLocal_194[uLocal_194.f_5], false);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_194[uLocal_194.f_5], false);
								PED::SET_PED_DIES_WHEN_INJURED(uLocal_194[uLocal_194.f_5], true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_194[uLocal_194.f_5], joaat("PLAYER"));
								__LIB_28__::func_241(&(uLocal_194[uLocal_194.f_5]), 5, 1, 2, 1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 12, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 29, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 36, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 35, true);
								PED::SET_PED_CONFIG_FLAG(uLocal_194[uLocal_194.f_5], 118, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_194[uLocal_194.f_5], 185, true);
								PED::SET_PED_CONFIG_FLAG(uLocal_194[uLocal_194.f_5], 188, true);
								ENTITY::SET_ENTITY_HEALTH(uLocal_194[uLocal_194.f_5], iLocal_103, 0);
								__LIB_17__::func_479(uLocal_194[uLocal_194.f_5], 1800);
								PED::SET_PED_USING_ACTION_MODE(uLocal_194[uLocal_194.f_5], true, -1, 0);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_194[uLocal_194.f_5], 33497);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_194[uLocal_194.f_5], true);
							}
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
							PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 33497);
							func_199();
							func_868();
							iLocal_185 = uLocal_194.f_7;
							Local_299.f_19 = 1;
						}
					}
				}
				break;
		}
		if (SYSTEM::VDIST2(Var1, Var2) > 22500f)
		{
			func_481(7);
		}
	}
	if (iLocal_184 == 2)
	{
		__LIB_16__::func_318(&Local_238, 1, 0);
		func_593();
		HUD::CLEAR_HELP(true);
		STREAMING::REMOVE_ANIM_DICT(sLocal_149);
		STREAMING::REMOVE_CLIP_SET("move_ped_strafing");
		if (!PED::IS_PED_INJURED(uLocal_194[1]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_194[1], 0f);
		}
		if (!PED::IS_PED_INJURED(uLocal_194[2]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_194[2], 0f);
		}
		if (!PED::IS_PED_INJURED(uLocal_194[0]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_194[0], 0f);
		}
		__LIB_16__::func_15(&uLocal_194, 1, 0);
		__LIB_17__::func_645(&uLocal_194);
		iLocal_183 = 6;
		iLocal_184 = 0;
	}
	if (iLocal_184 == 3)
	{
		func_479(6, 0);
	}
}

void func_817()//Position - 0x93683
{
	int iVar0[8];
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(uLocal_194[0]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_194[0], 227, true);
		if (iLocal_186 == 2)
		{
		}
		if (!__LIB_0__::func_477() || (__LIB_0__::func_477() && uLocal_194.f_7 != 0))
		{
			func_826(&(uLocal_194[0]), &Local_261);
		}
		if (PED::IS_PED_RAGDOLL(uLocal_194[0]))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(uLocal_194[0]) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uLocal_194[0], true), 5f))
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_194[0], 0, 0);
			}
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_194[1]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_194[1], 227, true);
		if (iLocal_183 <= 4)
		{
			if (iLocal_188 == 0)
			{
				func_825(&(uLocal_194[1]), &Local_264);
			}
			else if (iLocal_188 == 1)
			{
				func_824(&(uLocal_194[1]), &Local_264);
			}
			else if (iLocal_188 == 4)
			{
				func_823(&(uLocal_194[1]), &Local_264);
			}
			else if (iLocal_188 == 3)
			{
				func_822(&(uLocal_194[1]), &Local_264);
			}
			Var2 = { ENTITY::GET_ENTITY_COORDS(uLocal_194[1], true) };
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_194[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && !PED::IS_PED_IN_COMBAT(uLocal_194[1], 0))
			{
				iLocal_118 = MISC::GET_GAME_TIMER();
			}
			if (SYSTEM::VDIST2(Var2, Local_264.f_11) > 9f && ENTITY::GET_ENTITY_SPEED(uLocal_194[1]) > 0.3f)
			{
				iLocal_118 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_117) < 500 && SYSTEM::VDIST2(Var2, Local_65) < 2500f)
			{
				iLocal_118 = MISC::GET_GAME_TIMER();
			}
			if (!bLocal_70)
			{
				iLocal_118 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_190 != iLocal_188)
			{
				iLocal_118 = MISC::GET_GAME_TIMER();
				Local_264.f_4 = 0;
				iLocal_190 = iLocal_188;
			}
			if (Local_264.f_3 > Local_264.f_4)
			{
				iLocal_118 = MISC::GET_GAME_TIMER();
				Local_264.f_4 = Local_264.f_3;
			}
			if (!PED::IS_PED_INJURED(uLocal_194[2]))
			{
				if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true)) < 400f)
				{
					iLocal_118 = MISC::GET_GAME_TIMER();
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_118) > 20000)
			{
				iVar3 = 0;
				PED::GET_PED_NEARBY_PEDS(uLocal_194[1], &iVar0, -1);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (!PED::IS_PED_INJURED(iVar0[iVar1]) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iLocal_292)
					{
						if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(iVar0[iVar1], true)) < 2500f)
						{
							iVar3++;
						}
					}
					iVar1++;
				}
				if (iVar3 > 1)
				{
					__LIB_28__::func_244(&uLocal_194, 1, 1);
					__LIB_15__::func_961(&uLocal_194, 1, 2, 0);
					if ((MISC::GET_GAME_TIMER() - iLocal_120) > 0)
					{
						if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_FRANHURT", 7, 0, 0, 0))
							{
								iLocal_120 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
							}
						}
					}
				}
				else
				{
					iLocal_118 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				__LIB_28__::func_244(&uLocal_194, 1, 0);
			}
		}
		else
		{
			func_819(&(uLocal_194[1]), &Local_264);
		}
		func_818(&(uLocal_194[1]), &(Local_264.f_6));
	}
	if (!PED::IS_PED_INJURED(uLocal_194[2]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_194[2], 227, true);
		if (iLocal_183 <= 4)
		{
			if (iLocal_187 == 0)
			{
				func_825(&(uLocal_194[2]), &Local_258);
			}
			else if (iLocal_187 == 1)
			{
				func_824(&(uLocal_194[2]), &Local_258);
			}
			else if (iLocal_187 == 4)
			{
				func_823(&(uLocal_194[2]), &Local_258);
			}
			else if (iLocal_187 == 3)
			{
				func_822(&(uLocal_194[2]), &Local_258);
			}
			Var4 = { ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true) };
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_194[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && !PED::IS_PED_IN_COMBAT(uLocal_194[2], 0))
			{
				iLocal_119 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_117) < 500 && SYSTEM::VDIST2(Var4, Local_65) < 2500f)
			{
				iLocal_119 = MISC::GET_GAME_TIMER();
			}
			if (SYSTEM::VDIST2(Var4, Local_258.f_11) > 9f && ENTITY::GET_ENTITY_SPEED(uLocal_194[2]) > 0.3f)
			{
				iLocal_119 = MISC::GET_GAME_TIMER();
			}
			if (!bLocal_70)
			{
				iLocal_119 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_189 != iLocal_187)
			{
				iLocal_119 = MISC::GET_GAME_TIMER();
				Local_258.f_4 = 0;
				iLocal_189 = iLocal_187;
			}
			if (Local_258.f_3 > Local_258.f_4)
			{
				iLocal_119 = MISC::GET_GAME_TIMER();
				Local_258.f_4 = Local_258.f_3;
			}
			if (!PED::IS_PED_INJURED(uLocal_194[1]))
			{
				if (SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(uLocal_194[1], true)) < 400f)
				{
					iLocal_119 = MISC::GET_GAME_TIMER();
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_119) > 20000)
			{
				iVar5 = 0;
				PED::GET_PED_NEARBY_PEDS(uLocal_194[2], &iVar0, -1);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (!PED::IS_PED_INJURED(iVar0[iVar1]) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iLocal_292)
					{
						if (SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(iVar0[iVar1], true)) < 2500f)
						{
							iVar5++;
						}
					}
					iVar1++;
				}
				if (iVar5 > 1)
				{
					__LIB_28__::func_244(&uLocal_194, 2, 1);
					__LIB_15__::func_961(&uLocal_194, 2, 1, 0);
					if ((MISC::GET_GAME_TIMER() - iLocal_121) > 0)
					{
						if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_TREVHURT", 7, 0, 0, 0))
							{
								iLocal_121 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
							}
						}
					}
				}
				else
				{
					iLocal_119 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				__LIB_28__::func_244(&uLocal_194, 2, 0);
			}
		}
		else
		{
			func_819(&(uLocal_194[2]), &Local_258);
		}
		func_818(&(uLocal_194[2]), &(Local_258.f_6));
	}
}

void func_818(var uParam0, var uParam1)//Position - 0x93C5A
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		bVar0 = true;
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
			if (PED::IS_PED_RAGDOLL(*uParam0))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*uParam0, true), 5f))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 0);
					ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
					bVar0 = false;
				}
				else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if ((*uParam1 - ENTITY::GET_ENTITY_HEALTH(*uParam0)) > 100)
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 0);
						ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
						bVar0 = false;
					}
				}
			}
		}
		if (bVar0)
		{
			*uParam1 = ENTITY::GET_ENTITY_HEALTH(*uParam0);
		}
	}
}

void func_819(var uParam0, var uParam1)//Position - 0x93CF6
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6[5];
	struct<3> Var7[5];
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	float fVar13;
	float fVar14;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
		bVar2 = false;
		bVar3 = (PED::IS_PED_IN_COMBAT(*uParam0, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) == 1);
		if (*uParam0 == uLocal_194[2])
		{
			Var5 = { Local_264.f_11 };
		}
		else
		{
			Var5 = { Local_258.f_11 };
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("WEAPON_CARBINERIFLE"), false))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(*uParam0, joaat("WEAPON_CARBINERIFLE")) < 50)
			{
				WEAPON::ADD_AMMO_TO_PED(*uParam0, joaat("WEAPON_CARBINERIFLE"), 50);
			}
		}
		PED::SET_PED_RESET_FLAG(*uParam0, 227, true);
		Var6[0 /*3*/] = { -505.4764f, 5305.939f, 79.2676f };
		Var6[1 /*3*/] = { -502.2627f, 5288.6313f, 79.61f };
		Var6[2 /*3*/] = { -515.8207f, 5274.3574f, 79.2366f };
		Var6[3 /*3*/] = { -547.1495f, 5262.1836f, 72.9514f };
		Var6[4 /*3*/] = { -573.9721f, 5258.023f, 69.4643f };
		Var7[0 /*3*/] = { -506.0377f, 5301.814f, 79.2758f };
		Var7[1 /*3*/] = { -496.8887f, 5287.045f, 79.61f };
		Var7[2 /*3*/] = { -502.4147f, 5270.4785f, 79.61f };
		Var7[3 /*3*/] = { -544.3444f, 5269.4688f, 73.1745f };
		Var7[4 /*3*/] = { -573.9721f, 5258.023f, 69.4643f };
		if (uParam1->f_9)
		{
			iVar8 = 0;
			iVar9 = 0;
			fVar10 = -1f;
			iVar8 = 0;
			while (iVar8 < Var6.f_0)
			{
				fVar11 = SYSTEM::VDIST2(Var0, Var6[iVar8 /*3*/]);
				if (fVar10 == -1f || fVar11 < fVar10)
				{
					iVar9 = iVar8;
					fVar10 = fVar11;
				}
				iVar8++;
			}
			if (iVar9 > 0)
			{
				if (func_821(*uParam0, Var6[(iVar9 - 1) /*3*/], Var6[iVar9 /*3*/], 1101004800))
				{
					iVar9 = (iVar9 - 1);
				}
			}
			if (iVar9 == 0)
			{
				uParam1->f_3 = 0;
			}
			else if (iVar9 == 1)
			{
				uParam1->f_3 = 1;
			}
			else if (iVar9 == 2)
			{
				uParam1->f_3 = 2;
			}
			else
			{
				uParam1->f_3 = 3;
			}
			Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar13 = SYSTEM::VDIST2(Var6[iVar9 /*3*/], Var12);
			fVar14 = SYSTEM::VDIST2(Var7[iVar9 /*3*/], Var12);
			if (fVar13 < fVar14)
			{
				if (fVar13 > 400f)
				{
					if (__LIB_0__::func_477())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var6[iVar9 /*3*/], true, false, false, true);
					}
				}
				uParam1->f_11 = { Var6[iVar9 /*3*/] };
				uParam1->f_8 = 0;
			}
			else
			{
				if (fVar14 > 400f)
				{
					if (__LIB_0__::func_477())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var7[iVar9 /*3*/], true, false, false, true);
					}
				}
				uParam1->f_11 = { Var7[iVar9 /*3*/] };
				uParam1->f_8 = 1;
			}
			uParam1->f_5 = 0;
			uParam1->f_7 = 1;
			uParam1->f_9 = 0;
		}
		if (__LIB_0__::func_490(uParam1->f_11, 0f, 0f, 0f, 1056964608, 0))
		{
			uParam1->f_11 = { Var6[0 /*3*/] };
		}
		switch (uParam1->f_3)
		{
			case 0:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var5, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var6[0 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var7[0 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar3)))
				{
					if (!__LIB_0__::func_490(Var6[0 /*3*/], uParam1->f_11, 1056964608, 0) && !__LIB_0__::func_490(Var7[0 /*3*/], uParam1->f_11, 1056964608, 0))
					{
						uParam1->f_11 = { Var6[0 /*3*/] };
					}
					if (__LIB_0__::func_490(uParam1->f_11, Var6[0 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -111.4f, 2f, 0, 2, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -113.9f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var6[1 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_277) == 0)
					{
						uParam1->f_11 = { Var6[1 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 1:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var5, 2f, 2f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var6[1 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var7[1 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar3)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var6[1 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 158.4f, 2f, 1, 2, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 158.4f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -516.1574f, 5247.171f, 80.3439f, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				if (__LIB_17__::func_745(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -511.0591f, 5255.0005f, 79.36004f, -496.35767f, 5296.4565f, 84.41231f, 14.25f, false, true, 0))
					{
						if (__LIB_28__::func_240(&Local_278) > 0)
						{
							if (!__LIB_28__::func_242(PLAYER::PLAYER_PED_ID(), *uParam0, -516.1574f, 5247.171f, 80.3439f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -516.1574f, 5247.171f, 80.3439f, false);
							}
						}
					}
				}
				if (!iLocal_100[19] && iLocal_185 != 0)
				{
					if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
					{
						if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 625f)
						{
							if (iLocal_185 == 1)
							{
								if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_OUT2", 7, 0, 0, 0))
								{
									iLocal_100[19] = 1;
									iLocal_136 = MISC::GET_GAME_TIMER();
								}
							}
							else if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_OUT", 7, 0, 0, 0))
							{
								iLocal_100[19] = 1;
								iLocal_136 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var6[2 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_278) == 0)
					{
						uParam1->f_11 = { Var6[2 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 2:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var5, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var6[2 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var7[2 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar3)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var6[2 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 154.3f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 158.1f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -516.1574f, 5247.171f, 80.3439f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				if (__LIB_17__::func_745(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -511.0591f, 5255.0005f, 79.36004f, -496.35767f, 5296.4565f, 84.41231f, 14.25f, false, true, 0))
					{
						if (__LIB_28__::func_240(&Local_288) > 0)
						{
							if (!__LIB_28__::func_242(PLAYER::PLAYER_PED_ID(), *uParam0, -516.1574f, 5247.171f, 80.3439f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -516.1574f, 5247.171f, 80.3439f, false);
							}
						}
					}
				}
				if (iLocal_185 == 0 && !iLocal_100[83])
				{
					if (((fVar1 > 25f && !__LIB_13__::func_755(&Local_238, 1)) && !__LIB_0__::func_477()) && (MISC::GET_GAME_TIMER() - iLocal_117) < 10000)
					{
						if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_Snipe3", 7, 0, 0, 0))
						{
							iLocal_100[83] = 1;
						}
					}
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var6[3 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_288) == 0)
					{
						uParam1->f_11 = { Var6[3 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 3:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var5, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var6[3 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var7[3 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar3)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var6[3 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 70.7f, 2f, 1, 2, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 72.4f, 2f, 1, 2, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						if (SYSTEM::VDIST2(Var0, uParam1->f_11) > SYSTEM::VDIST2(-519.4547f, 5250.6426f, 78.7824f, uParam1->f_11))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -519.4547f, 5250.6426f, 78.7824f, 2f, 60000, 0.5f, 1, 40000f);
						}
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -574.0313f, 5258.59f, 71.0182f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				if (__LIB_17__::func_745(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -527.86066f, 5247.0664f, 79.93937f, -556.41766f, 5258.9277f, 69.14958f, 14.5f, false, true, 0))
					{
						if (__LIB_28__::func_240(&Local_289) > 0)
						{
							if (!__LIB_28__::func_242(PLAYER::PLAYER_PED_ID(), *uParam0, -574.0313f, 5258.59f, 71.0182f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -574.0313f, 5258.59f, 71.0182f, false);
							}
						}
					}
				}
				if (iLocal_185 == 0 && !iLocal_100[84])
				{
					if ((((fVar1 > 25f && !__LIB_13__::func_755(&Local_238, 1)) && !__LIB_0__::func_477()) && !bLocal_93) && (MISC::GET_GAME_TIMER() - iLocal_117) < 10000)
					{
						if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_Snipe3", 7, 0, 0, 0))
						{
							iLocal_100[84] = 1;
						}
					}
				}
				if (fVar1 < 25f)
				{
					if (__LIB_28__::func_240(&Local_289) == 0)
					{
						uParam1->f_11 = { Var6[4 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 4:
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar3)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -587.1f, 5281.6f, 71f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				break;
			}
	}
}

void func_820(var uParam0, var uParam1, struct<3> Param2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x94AFC
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (*uParam1 != 0)
		{
			TASK::REMOVE_COVER_POINT(*uParam1);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(Param2))
		{
			*uParam1 = TASK::ADD_COVER_POINT(Param2, fParam3, iParam5, iParam6, iParam7, false);
		}
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, Param2, fParam4, bParam8, false);
	}
}

int func_821(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x94B4D
{
	var uVar0[16];
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar4 = SYSTEM::VDIST2(Param1, Param2);
		iVar5 = 0;
		PED::GET_PED_NEARBY_PEDS(iParam0, &uVar0, -1);
		while (iVar5 < 16)
		{
			if (!PED::IS_PED_INJURED(uVar0[iVar5]))
			{
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(uVar0[iVar5]) == iLocal_292)
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar5], true) };
					fVar2 = SYSTEM::VDIST2(Var1, Param1);
					fVar3 = SYSTEM::VDIST2(Var1, Param2);
					if (fVar2 < (fVar3 + (fParam3 * fParam3)))
					{
						if (fVar3 < fVar4 || fVar2 < 225f)
						{
							return 1;
						}
					}
				}
			}
			iVar5++;
		}
	}
	return 0;
}

void func_822(var uParam0, var uParam1)//Position - 0x94C02
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6[6];
	struct<3> Var7[6];
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
		bVar2 = false;
		bVar3 = (PED::IS_PED_IN_COMBAT(*uParam0, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) == 1);
		if (*uParam0 == uLocal_194[2])
		{
			Var5 = { Local_264.f_11 };
		}
		else
		{
			Var5 = { Local_258.f_11 };
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("WEAPON_CARBINERIFLE"), false))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(*uParam0, joaat("WEAPON_CARBINERIFLE")) < 50)
			{
				WEAPON::ADD_AMMO_TO_PED(*uParam0, joaat("WEAPON_CARBINERIFLE"), 50);
			}
		}
		Var6[0 /*3*/] = { -487.6498f, 5385.08f, 77.0692f };
		Var6[1 /*3*/] = { -462.0061f, 5339.45f, 82.4832f };
		Var6[2 /*3*/] = { -476.0758f, 5322.0405f, 79.61f };
		Var6[3 /*3*/] = { -483.3072f, 5315.957f, 79.61f };
		Var6[4 /*3*/] = { -497.8078f, 5302.225f, 79.6052f };
		Var6[5 /*3*/] = { -504.7159f, 5300.7744f, 79.5876f };
		Var7[0 /*3*/] = { -471.3402f, 5380.9253f, 78.8354f };
		Var7[1 /*3*/] = { -462.9181f, 5335.053f, 82.4505f };
		Var7[2 /*3*/] = { -483.2917f, 5321.426f, 79.61f };
		Var7[3 /*3*/] = { -489.777f, 5318.1147f, 79.61f };
		Var7[4 /*3*/] = { -497.933f, 5299.2705f, 79.61f };
		Var7[5 /*3*/] = { -504.2799f, 5304.1685f, 79.4737f };
		if (uParam1->f_9)
		{
			iVar8 = 0;
			iVar9 = 0;
			fVar10 = -1f;
			iVar8 = 0;
			while (iVar8 < Var6.f_0)
			{
				fVar11 = SYSTEM::VDIST2(Var0, Var6[iVar8 /*3*/]);
				if (fVar10 == -1f || fVar11 < fVar10)
				{
					iVar9 = iVar8;
					fVar10 = fVar11;
				}
				iVar8++;
			}
			if (iVar9 > 0)
			{
				if (func_821(*uParam0, Var6[(iVar9 - 1) /*3*/], Var6[iVar9 /*3*/], 1101004800))
				{
					iVar9 = (iVar9 - 1);
				}
			}
			if (iVar9 == 0)
			{
				uParam1->f_3 = 0;
			}
			else if (iVar9 == 1)
			{
				uParam1->f_3 = 1;
			}
			else if (iVar9 == 2)
			{
				uParam1->f_3 = 2;
			}
			else if (iVar9 == 3)
			{
				uParam1->f_3 = 3;
			}
			else if (iVar9 == 4)
			{
				uParam1->f_3 = 4;
			}
			else
			{
				uParam1->f_3 = 5;
			}
			Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar13 = SYSTEM::VDIST2(Var6[iVar9 /*3*/], Var12);
			fVar14 = SYSTEM::VDIST2(Var7[iVar9 /*3*/], Var12);
			if (fVar13 < fVar14)
			{
				if (fVar13 > 400f)
				{
					if (__LIB_0__::func_477())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var6[iVar9 /*3*/], true, false, false, true);
					}
				}
				uParam1->f_11 = { Var6[iVar9 /*3*/] };
				uParam1->f_8 = 0;
			}
			else
			{
				if (fVar14 > 400f)
				{
					if (__LIB_0__::func_477())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var7[iVar9 /*3*/], true, false, false, true);
					}
				}
				uParam1->f_11 = { Var7[iVar9 /*3*/] };
				uParam1->f_8 = 1;
			}
			uParam1->f_5 = 0;
			uParam1->f_7 = 1;
			uParam1->f_9 = 0;
		}
		if (__LIB_0__::func_490(uParam1->f_11, 0f, 0f, 0f, 1056964608, 0))
		{
			uParam1->f_11 = { Var6[0 /*3*/] };
		}
		switch (uParam1->f_3)
		{
			case 0:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var5, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var6[0 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var7[0 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar3)))
				{
					if (!__LIB_0__::func_490(Var6[0 /*3*/], uParam1->f_11, 1056964608, 0) && !__LIB_0__::func_490(Var7[0 /*3*/], uParam1->f_11, 1056964608, 0))
					{
						uParam1->f_11 = { Var6[0 /*3*/] };
					}
					if (__LIB_0__::func_490(uParam1->f_11, Var6[0 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -176.6f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 158.9f, 2f, 0, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -498.8398f, 5292.783f, 81.7003f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var6[1 /*3*/], 1101004800))
					{
						uParam1->f_11 = { Var6[1 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 1:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var5, 2f, 2f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var6[1 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var7[1 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar3)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var6[1 /*3*/], 1056964608, 0))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 150.6f, 2f, 0, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						if (Var0.f_2 < 83f)
						{
							TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, -463.8806f, 5341.847f, 79.7449f, -498.8398f, 5292.783f, 81.7003f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -462.0908f, 5340.9727f, 82.4936f, 2f, -1, 0.5f, 5, 40000f);
						}
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -498.8398f, 5292.783f, 81.7003f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				if (Var0.f_2 < 83f && SYSTEM::VDIST2(Var0, -463.8806f, 5341.847f, 79.7449f) < 4f)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) > 100f)
					{
						if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(*uParam0), -463.8806f, 5341.847f, 79.7449f, true) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(*uParam0), -462.0908f, 5340.9727f, 82.4936f, true))
						{
							ENTITY::SET_ENTITY_COORDS(*uParam0, -462.0908f, 5340.9727f, 82.4936f, true, false, false, true);
						}
					}
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var6[2 /*3*/], 1101004800) && Var0.f_2 > 83f)
					{
						uParam1->f_11 = { Var6[2 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 2:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var5, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var6[2 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var7[2 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar3)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var6[2 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 156.4f, 2f, 0, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 158.8f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -498.8398f, 5292.783f, 81.7003f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var6[3 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_286) == 0)
					{
						uParam1->f_11 = { Var6[3 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 3:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var5, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var6[3 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var7[3 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar3)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var6[3 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 153.5f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 158.5f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -498.8398f, 5292.783f, 81.7003f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var6[4 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_287) == 0)
					{
						uParam1->f_11 = { Var6[4 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 4:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var5, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var6[4 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var7[4 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar3)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var6[4 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 65.6f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 65.6f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -523.1256f, 5307.7715f, 80.4874f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var6[5 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_272) == 0)
					{
						uParam1->f_11 = { Var6[5 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 5:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var5, 3f, 2f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var6[5 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var7[5 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && fVar1 > 4f))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var6[5 /*3*/], 1056964608, 0))
					{
						Var15 = { -537.1587f, 5268.9067f, 79.4526f };
					}
					else
					{
						Var15 = { -487.8635f, 5318.1475f, 81.0427f };
					}
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, Var15, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, Var15, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
					uParam1->f_7 = 0;
				}
				break;
			}
	}
}

void func_823(var uParam0, var uParam1)//Position - 0x95A97
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7[8];
	struct<3> Var8[8];
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	float fVar14;
	float fVar15;
	struct<3> Var16;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
		bVar2 = false;
		iVar3 = 1;
		bVar4 = (PED::IS_PED_IN_COMBAT(*uParam0, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) == 1);
		if (*uParam0 == uLocal_194[2])
		{
			Var6 = { Local_264.f_11 };
		}
		else
		{
			Var6 = { Local_258.f_11 };
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("WEAPON_CARBINERIFLE"), false))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(*uParam0, joaat("WEAPON_CARBINERIFLE")) < 50)
			{
				WEAPON::ADD_AMMO_TO_PED(*uParam0, joaat("WEAPON_CARBINERIFLE"), 50);
			}
		}
		if (SYSTEM::VDIST2(Var0, -592.0587f, 5236.6323f, 69.8622f) < SYSTEM::VDIST2(Var0, -598.3776f, 5286.8184f, 69.2335f))
		{
			Var7[0 /*3*/] = { -592.0587f, 5236.6323f, 69.8622f };
		}
		else
		{
			Var7[0 /*3*/] = { -598.3776f, 5286.8184f, 69.2335f };
		}
		Var7[1 /*3*/] = { -566.3613f, 5256.4595f, 69.467f };
		Var7[2 /*3*/] = { -547.0441f, 5270.3545f, 73.1741f };
		Var7[3 /*3*/] = { -522.0834f, 5250.7563f, 78.5639f };
		Var7[4 /*3*/] = { -518.9554f, 5255.7407f, 79.5127f };
		Var7[5 /*3*/] = { -504.8981f, 5280.011f, 79.61f };
		Var7[6 /*3*/] = { -497.9232f, 5299.3667f, 79.61f };
		Var7[7 /*3*/] = { -504.7159f, 5300.7744f, 79.5876f };
		Var8[0 /*3*/] = { -583.5048f, 5248.0664f, 69.4689f };
		Var8[1 /*3*/] = { -566.3081f, 5271.212f, 69.2443f };
		Var8[2 /*3*/] = { -544.6422f, 5255.0625f, 73.2873f };
		Var8[3 /*3*/] = { -508.5136f, 5255.053f, 79.6276f };
		Var8[4 /*3*/] = { -508.5136f, 5255.053f, 79.6276f };
		Var8[5 /*3*/] = { -501.262f, 5275.9766f, 79.61f };
		Var8[6 /*3*/] = { -497.8619f, 5302.2593f, 79.6041f };
		Var8[7 /*3*/] = { -504.2799f, 5304.1685f, 79.4737f };
		if (uParam1->f_9)
		{
			iVar9 = 0;
			iVar10 = 0;
			fVar11 = -1f;
			iVar9 = 0;
			while (iVar9 < Var7.f_0)
			{
				fVar12 = SYSTEM::VDIST2(Var0, Var7[iVar9 /*3*/]);
				if (fVar11 == -1f || fVar12 < fVar11)
				{
					iVar10 = iVar9;
					fVar11 = fVar12;
				}
				iVar9++;
			}
			if (iVar10 > 0)
			{
				if (func_821(*uParam0, Var7[(iVar10 - 1) /*3*/], Var7[iVar10 /*3*/], 1101004800))
				{
					iVar10 = (iVar10 - 1);
				}
			}
			if (iVar10 == 0)
			{
				uParam1->f_3 = 0;
			}
			else if (iVar10 == 1)
			{
				uParam1->f_3 = 1;
			}
			else if (iVar10 == 2)
			{
				uParam1->f_3 = 2;
			}
			else if (iVar10 == 3)
			{
				uParam1->f_3 = 3;
			}
			else if (iVar10 == 4)
			{
				uParam1->f_3 = 4;
			}
			else if (iVar10 == 5)
			{
				uParam1->f_3 = 5;
			}
			else if (iVar10 == 6)
			{
				uParam1->f_3 = 6;
			}
			else
			{
				uParam1->f_3 = 7;
			}
			Var13 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar14 = SYSTEM::VDIST2(Var7[iVar10 /*3*/], Var13);
			fVar15 = SYSTEM::VDIST2(Var8[iVar10 /*3*/], Var13);
			if (fVar14 < fVar15)
			{
				if (fVar14 > 400f)
				{
					if (__LIB_0__::func_477())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var7[iVar10 /*3*/], true, false, false, true);
					}
				}
				uParam1->f_11 = { Var7[iVar10 /*3*/] };
				uParam1->f_8 = 0;
			}
			else
			{
				if (fVar15 > 400f)
				{
					if (__LIB_0__::func_477())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var8[iVar10 /*3*/], true, false, false, true);
					}
				}
				uParam1->f_11 = { Var8[iVar10 /*3*/] };
				uParam1->f_8 = 1;
			}
			uParam1->f_5 = 0;
			uParam1->f_7 = 1;
			uParam1->f_9 = 0;
		}
		if (__LIB_0__::func_490(uParam1->f_11, 0f, 0f, 0f, 1056964608, 0))
		{
			uParam1->f_11 = { Var7[0 /*3*/] };
		}
		switch (uParam1->f_3)
		{
			case 0:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[0 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[0 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						if (fVar1 > SYSTEM::VDIST2(uParam1->f_11, -664.8f, 5242.8f, 76.3f))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -664.8f, 5242.8f, 76.3f, -570.3f, 5267.9f, 70.9f, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -570.3f, 5267.9f, 70.9f, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var7[1 /*3*/], 1101004800))
					{
						iVar3 = 1;
						if (iLocal_192 == 2 || iLocal_192 == 0)
						{
							if (__LIB_28__::func_240(&Local_271) > 0)
							{
								iVar3 = 0;
							}
						}
						else if (iLocal_192 == 1)
						{
							if (!PED::IS_PED_INJURED(Local_271[0 /*21*/]))
							{
								iVar3 = 0;
							}
						}
						if (iVar3 && (__LIB_28__::func_240(&Local_282) == 0 || !Local_282[0 /*21*/].f_3))
						{
							uParam1->f_11 = { Var7[1 /*3*/] };
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
							uParam1->f_5 = 0;
							uParam1->f_3++;
							uParam1->f_7 = 1;
						}
					}
				}
				break;
			case 1:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[1 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[1 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[1 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -108.3f, 2f, 1, 2, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -107.8f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -541.5f, 5254.5f, 75.6f, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var7[2 /*3*/], 1101004800))
					{
						uParam1->f_11 = { Var7[2 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 2:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[2 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[2 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[2 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -115f, 2f, 0, 2, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 231.8f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -541.5f, 5254.5f, 75.6f, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (__LIB_17__::func_745(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -543.3775f, 5254.1616f, 76.24041f, -575.4658f, 5268.108f, 67.46845f, 19.5f, false, true, 0))
					{
						if (__LIB_28__::func_240(&Local_274) > 0)
						{
							if (!__LIB_28__::func_242(PLAYER::PLAYER_PED_ID(), *uParam0, -524.1f, 5246.2f, 80f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -524.1f, 5246.2f, 80f, false);
							}
						}
					}
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var7[3 /*3*/], 1101004800))
					{
						uParam1->f_11 = { Var7[3 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 3:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[3 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[3 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[3 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -23.1f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -14.4f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -492.6f, 5304.7f, 81.6f, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (__LIB_17__::func_745(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -509.11996f, 5255.369f, 82.36004f, -515.34796f, 5237.1445f, 77.304115f, 19.5f, false, true, 0))
					{
						if (__LIB_28__::func_240(&Local_275) > 0)
						{
							if (!__LIB_28__::func_242(PLAYER::PLAYER_PED_ID(), *uParam0, -492.6f, 5304.7f, 81.6f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -492.6f, 5304.7f, 81.6f, false);
							}
						}
					}
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var7[4 /*3*/], 1101004800))
					{
						uParam1->f_11 = { Var7[4 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 4:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[4 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[4 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[4 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -30.7f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -14.4f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -492.6f, 5304.7f, 81.6f, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (__LIB_17__::func_745(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -511.0591f, 5255.0005f, 79.36004f, -498.24393f, 5290.137f, 83.11004f, 14.25f, false, true, 0))
					{
						if ((__LIB_28__::func_240(&Local_275) + __LIB_28__::func_240(&Local_276)) > 0)
						{
							if (!__LIB_28__::func_242(PLAYER::PLAYER_PED_ID(), *uParam0, -492.6f, 5304.7f, 81.6f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -492.6f, 5304.7f, 81.6f, false);
							}
						}
					}
				}
				if (fVar1 < 25f)
				{
					if ((!func_503(*uParam0, Var7[5 /*3*/], 1101004800) && ((Local_275[0 /*21*/].f_3 && PED::IS_PED_INJURED(Local_275[0 /*21*/])) && PED::IS_PED_INJURED(Local_275[1 /*21*/]))) && PED::IS_PED_INJURED(Local_284[0 /*21*/]))
					{
						uParam1->f_11 = { Var7[5 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 5:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[5 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[5 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[5 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -22.7f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -21.3f, 2f, 1, 2, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -492.6f, 5304.7f, 81.6f, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (__LIB_17__::func_745(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -511.0591f, 5255.0005f, 79.36004f, -498.24393f, 5290.137f, 83.11004f, 14.25f, false, true, 0))
					{
						if ((__LIB_28__::func_240(&Local_275) + __LIB_28__::func_240(&Local_276)) > 0)
						{
							if (!__LIB_28__::func_242(PLAYER::PLAYER_PED_ID(), *uParam0, -492.6f, 5304.7f, 81.6f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -492.6f, 5304.7f, 81.6f, false);
							}
						}
					}
				}
				if (fVar1 < 25f)
				{
					if ((!func_503(*uParam0, Var7[6 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_276) == 0) && PED::IS_PED_INJURED(Local_284[0 /*21*/]))
					{
						uParam1->f_11 = { Var7[6 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 6:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[6 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[6 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[6 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 68.6f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 68.6f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -520.9f, 5306.8f, 80.8f, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var7[7 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_272) == 0)
					{
						uParam1->f_11 = { Var7[7 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 7:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 3f, 2f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[7 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[7 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && fVar1 > 4f))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[7 /*3*/], 1056964608, 0))
					{
						Var16 = { -537.1587f, 5268.9067f, 79.4526f };
					}
					else
					{
						Var16 = { -487.8635f, 5318.1475f, 81.0427f };
					}
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, Var16, 2f, false, 0.5f, 0.5f, true, 5, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, Var16, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				break;
			}
	}
}

void func_824(var uParam0, var uParam1)//Position - 0x96EB9
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7[5];
	struct<3> Var8[5];
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	float fVar14;
	float fVar15;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
		bVar2 = false;
		bVar3 = true;
		bVar4 = (PED::IS_PED_IN_COMBAT(*uParam0, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) == 1);
		if (*uParam0 == uLocal_194[2])
		{
			Var6 = { Local_264.f_11 };
		}
		else
		{
			Var6 = { Local_258.f_11 };
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("WEAPON_CARBINERIFLE"), false))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(*uParam0, joaat("WEAPON_CARBINERIFLE")) < 50)
			{
				WEAPON::ADD_AMMO_TO_PED(*uParam0, joaat("WEAPON_CARBINERIFLE"), 50);
			}
		}
		Var7[0 /*3*/] = { -561.3218f, 5379.88f, 69.0322f };
		Var7[1 /*3*/] = { -563.3644f, 5350.0957f, 69.2162f };
		Var7[2 /*3*/] = { -571.0067f, 5331.988f, 69.2144f };
		Var7[3 /*3*/] = { -598.5005f, 5291.4f, 69.2144f };
		Var7[4 /*3*/] = { -573.1577f, 5274.526f, 69.2604f };
		Var8[0 /*3*/] = { -551.4478f, 5375.3696f, 69.4518f };
		Var8[1 /*3*/] = { -572.2329f, 5357.805f, 69.2145f };
		Var8[2 /*3*/] = { -579.6328f, 5342.0933f, 69.2144f };
		Var8[3 /*3*/] = { -584.6021f, 5285.116f, 69.2604f };
		Var8[4 /*3*/] = { -584.8169f, 5285.143f, 69.2604f };
		if (uParam1->f_9)
		{
			iVar9 = 0;
			iVar10 = 0;
			fVar11 = -1f;
			iVar9 = 0;
			while (iVar9 < Var7.f_0)
			{
				fVar12 = SYSTEM::VDIST2(Var0, Var7[iVar9 /*3*/]);
				if (fVar11 == -1f || fVar12 < fVar11)
				{
					iVar10 = iVar9;
					fVar11 = fVar12;
				}
				iVar9++;
			}
			if (iVar10 > 0)
			{
				if (func_821(*uParam0, Var7[(iVar10 - 1) /*3*/], Var7[iVar10 /*3*/], 1101004800))
				{
					iVar10 = (iVar10 - 1);
				}
			}
			if (iVar10 == 0)
			{
				uParam1->f_3 = 0;
			}
			else if (iVar10 == 1)
			{
				uParam1->f_3 = 1;
			}
			else if (iVar10 == 2)
			{
				uParam1->f_3 = 2;
			}
			else if (iVar10 == 3)
			{
				uParam1->f_3 = 3;
			}
			else
			{
				uParam1->f_3 = 4;
			}
			Var13 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar14 = SYSTEM::VDIST2(Var7[iVar10 /*3*/], Var13);
			fVar15 = SYSTEM::VDIST2(Var8[iVar10 /*3*/], Var13);
			if (fVar14 < fVar15)
			{
				if (fVar14 > 400f)
				{
					if (__LIB_0__::func_477())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var7[iVar10 /*3*/], true, false, false, true);
					}
				}
				uParam1->f_11 = { Var7[iVar10 /*3*/] };
				uParam1->f_8 = 0;
			}
			else
			{
				if (fVar15 > 400f)
				{
					if (__LIB_0__::func_477())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var8[iVar10 /*3*/], true, false, false, true);
					}
				}
				uParam1->f_11 = { Var8[iVar10 /*3*/] };
				uParam1->f_8 = 1;
			}
			uParam1->f_5 = 0;
			uParam1->f_7 = 1;
			uParam1->f_9 = 0;
		}
		if (__LIB_0__::func_490(uParam1->f_11, 0f, 0f, 0f, 1056964608, 0))
		{
			uParam1->f_11 = { Var7[0 /*3*/] };
		}
		switch (uParam1->f_3)
		{
			case 0:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[0 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[0 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (!__LIB_0__::func_490(Var7[0 /*3*/], uParam1->f_11, 1056964608, 0) && !__LIB_0__::func_490(Var8[0 /*3*/], uParam1->f_11, 1056964608, 0))
					{
						uParam1->f_11 = { Var7[0 /*3*/] };
					}
					if (__LIB_0__::func_490(uParam1->f_11, Var7[0 /*3*/], 1056964608, 0))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 156.7f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -590.8f, 5276.8f, 71.5f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var7[1 /*3*/], 1101004800))
					{
						bVar3 = true;
						if (iLocal_192 == 4)
						{
							if (__LIB_28__::func_240(&Local_271) > 0)
							{
								bVar3 = false;
							}
						}
						if (bVar3)
						{
							uParam1->f_11 = { Var7[1 /*3*/] };
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
							uParam1->f_5 = 0;
							uParam1->f_3++;
							uParam1->f_7 = 1;
						}
					}
				}
				break;
			case 1:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[1 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[1 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[1 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 156.7f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 156.7f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -590.8f, 5276.8f, 71.5f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var7[2 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_280) == 0)
					{
						uParam1->f_11 = { Var7[2 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 2:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[2 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[2 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[2 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 156.7f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, 156.7f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -590.8f, 5276.8f, 71.5f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var7[3 /*3*/], 1101004800) && __LIB_28__::func_240(&Local_281) == 0)
					{
						uParam1->f_11 = { Var7[3 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 3:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[3 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[3 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[3 /*3*/], 1056964608, 0))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -122.7f, 2f, 0, 2, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -553.1f, 5258.8f, 73.3f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, Var7[4 /*3*/], 1101004800))
					{
						uParam1->f_11 = { Var7[4 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			case 4:
				if (!uParam1->f_7)
				{
					if (func_504(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var6, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var7[4 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var8[4 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar2 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar1 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && (fVar1 > 4f || !bVar4)))
				{
					if (__LIB_0__::func_490(uParam1->f_11, Var7[4 /*3*/], 1056964608, 0))
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -126f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_820(uParam0, &(uParam1->f_2), uParam1->f_11, -122.7f, 2f, 0, 2, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					if (fVar1 > 4f && !bVar2)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -553.1f, 5258.8f, 73.3f, 2f, false, 0.5f, 0.5f, true, 5, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					uParam1->f_7 = 0;
				}
				if (fVar1 < 25f)
				{
					if (!func_503(*uParam0, -566.3613f, 5256.4595f, 69.467f, 1101004800) && PED::IS_PED_INJURED(Local_283[0 /*21*/]))
					{
						if (*uParam0 == uLocal_194[1])
						{
							iLocal_188 = 4;
						}
						else if (*uParam0 == uLocal_194[2])
						{
							iLocal_187 = 4;
						}
						uParam1->f_3 = 0;
						uParam1->f_9 = 1;
						uParam1->f_7 = 1;
					}
				}
				break;
			}
	}
}

void func_825(var uParam0, var uParam1)//Position - 0x97AE6
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9[2];
	int iVar10[4];
	bool bVar11;
	int iVar12;
	bVar0 = false;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
		{
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_154);
			if (PED::IS_PED_IN_VEHICLE(*uParam0, Local_291.f_0, false))
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_154))
				{
					bVar3 = false;
					if (iLocal_191 == 1)
					{
						Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_291.f_0, Var2) };
						if (Var4.f_1 < 6f && Var4.f_1 > 3f)
						{
							if (MISC::ABSF(Var4.f_0) < 1.25f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")) == 7)
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_291.f_0) > 1f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(*uParam0, Local_291.f_0, 24, -1);
									}
								}
								bVar3 = true;
							}
						}
					}
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_291.f_0))
					{
						if (!iLocal_85 && !bVar3)
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_154, ENTITY::GET_ENTITY_COORDS(Local_291.f_0, true), &iVar5);
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(*uParam0, Local_291.f_0, sLocal_154, 262144, iVar5 + 2, 32, -1, -1f, false, 2f);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
							fLocal_147 = 4f;
						}
					}
					else
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_154, ENTITY::GET_ENTITY_COORDS(Local_291.f_0, true), &iVar6);
						if ((MISC::GET_GAME_TIMER() - iLocal_124) > 2000 && (MISC::GET_GAME_TIMER() - iLocal_124) < 5200)
						{
							VEHICLE::SET_VEHICLE_BULLDOZER_ARM_POSITION(Local_291.f_0, 0.9f, false);
						}
						else if (iVar6 > 10 && iVar6 < 25)
						{
							VEHICLE::SET_VEHICLE_BULLDOZER_ARM_POSITION(Local_291.f_0, 0.05f, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_BULLDOZER_ARM_POSITION(Local_291.f_0, 0.1f, false);
						}
						if (iLocal_191 == 1)
						{
							if (iVar6 > 9)
							{
								fVar7 = Var4.f_1;
								fVar8 = 4f;
								if (iVar6 < 17)
								{
									if (fVar7 < -2f)
									{
										fVar8 = 1f;
									}
									else
									{
										fVar8 = 4f;
									}
								}
								else if (fVar7 < -2f)
								{
									fVar8 = 5f;
								}
								else if (fVar8 == 10f)
								{
								}
								fLocal_147 = (fLocal_147 + ((((fVar8 - fLocal_147) * 0.01f) * 30f) * SYSTEM::TIMESTEP()));
								TASK::SET_DRIVE_TASK_CRUISE_SPEED(*uParam0, fLocal_147);
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_291.f_0, -512.42957f, 5258.3247f, 79.60999f, -515.06604f, 5217.2344f, 83.786385f, 8f, false, true, 0))
					{
						iLocal_85 = 1;
						bVar0 = true;
					}
					PED::GET_PED_NEARBY_VEHICLES(*uParam0, &uVar9);
					PED::GET_PED_NEARBY_PEDS(*uParam0, &iVar10, -1);
					if (((MISC::GET_GAME_TIMER() - iLocal_126) > 10000 && *uParam0 == uLocal_194[2]) && SYSTEM::VDIST2(Var2, Var1) < 625f)
					{
						bVar11 = false;
						iVar12 = 0;
						iVar12 = 0;
						while (iVar12 < iVar10)
						{
							if (!PED::IS_PED_INJURED(iVar10[iVar12]) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar10[iVar12]) == iLocal_292)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar10[iVar12], true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_291.f_0, -1.9927f, -0.0424f, 0.8947f)) < 9f)
								{
									bVar11 = true;
								}
							}
							iVar12++;
						}
						if (bVar11)
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_jack", 7, 0, 0, 0))
							{
								iLocal_126 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(uVar9[1], false) && uVar9[1] != Local_291.f_0)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar9[1], true), Var1) < 100f)
						{
							if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uVar9[1]) > 0f)
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_291.f_0, uVar9[1]))
								{
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uVar9[1], 0f);
									iLocal_124 = MISC::GET_GAME_TIMER();
								}
							}
							else if (*uParam0 == uLocal_194[2])
							{
								if (SYSTEM::VDIST2(Var2, Var1) < 625f)
								{
									if (!iLocal_100[87])
									{
										if (SYSTEM::VDIST2(Var1, -563.1f, 5375.6f, 69.8f) < 400f)
										{
											if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_move", 7, 0, 0, 0))
											{
												iLocal_100[87] = 1;
											}
										}
									}
									else if (!iLocal_100[88])
									{
										if (SYSTEM::VDIST2(Var1, -584.2f, 5312.7f, 69.8f) < 400f)
										{
											if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_move2", 7, 0, 0, 0))
											{
												iLocal_100[88] = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_191 == 1)
					{
						PED::SET_PED_CONFIG_FLAG(*uParam0, 119, true);
					}
					else
					{
						PED::SET_PED_CONFIG_FLAG(*uParam0, 119, false);
					}
					switch (Local_291.f_2)
					{
						case 0:
							if (Local_283[0 /*21*/].f_3)
							{
								if (iLocal_123 != 0)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_123) > 1500)
									{
										bVar0 = true;
									}
								}
							}
							break;
						case 1:
							break;
						}
				}
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
		if (bVar0)
		{
			if (SYSTEM::VDIST2(Var1, -512.42957f, 5258.3247f, 79.60999f) < 6400f && PED::IS_PED_INJURED(Local_283[0 /*21*/]))
			{
				if (*uParam0 == uLocal_194[1])
				{
					iLocal_188 = 4;
				}
				else
				{
					iLocal_187 = 4;
				}
			}
			else if (*uParam0 == uLocal_194[1])
			{
				iLocal_188 = 1;
			}
			else
			{
				iLocal_187 = 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_291.f_0, false))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_291.f_0, false);
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 119, false);
			uParam1->f_3 = 0;
			uParam1->f_9 = 1;
			uParam1->f_7 = 1;
		}
	}
}

void func_826(var uParam0, var uParam1)//Position - 0x98021
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("WEAPON_HEAVYSNIPER"), false))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar1, true);
			if (iVar1 != joaat("WEAPON_HEAVYSNIPER"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_HEAVYSNIPER"), false);
			}
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(*uParam0, joaat("WEAPON_HEAVYSNIPER")) < 5)
			{
				WEAPON::ADD_AMMO_TO_PED(*uParam0, joaat("WEAPON_HEAVYSNIPER"), 5);
			}
		}
		uParam1->f_11 = { Local_60 };
		if (uParam1->f_9)
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar3 = SYSTEM::VDIST2(uParam1->f_11, Var2);
			if (fVar3 > 4f)
			{
				if (__LIB_0__::func_477())
				{
					ENTITY::SET_ENTITY_COORDS(*uParam0, uParam1->f_11, true, false, false, true);
				}
			}
			uParam1->f_7 = 1;
			uParam1->f_9 = 0;
		}
		if (bLocal_70)
		{
			if (iLocal_102 == 0)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !PED::IS_PED_IN_COMBAT(*uParam0, 0)) || uParam1->f_7)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (SYSTEM::VDIST2(uParam1->f_11, ENTITY::GET_ENTITY_COORDS(*uParam0, true)) > 100f)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_11, 2f, 60000, 0.25f, 4, 40000f);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 1000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_COMBAT_FLOAT(*uParam0, 2, 500f);
					PED::SET_PED_STEALTH_MOVEMENT(*uParam0, false, 0);
					uParam1->f_7 = 0;
				}
			}
		}
	}
}

void func_827()//Position - 0x981A2
{
	if (!PED::IS_PED_INJURED(uLocal_194[1]))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_264.f_1))
		{
			Local_264.f_1 = __LIB_0__::func_639(uLocal_194[1], 0, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_264.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_264.f_1));
	}
	if (!PED::IS_PED_INJURED(uLocal_194[0]))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_261.f_1))
		{
			Local_261.f_1 = __LIB_0__::func_639(uLocal_194[0], 0, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_261.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_261.f_1));
	}
	if (!PED::IS_PED_INJURED(uLocal_194[2]))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_258.f_1))
		{
			Local_258.f_1 = __LIB_0__::func_639(uLocal_194[2], 0, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_258.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_258.f_1));
	}
}

void func_828()//Position - 0x98276
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4[16];
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = true;
	if (iLocal_185 == 0)
	{
		if (!iLocal_95)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		}
	}
	switch (iLocal_102)
	{
		case 0:
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				bVar3 = false;
			}
			if (!PED::IS_PED_INJURED(uLocal_194[1]))
			{
				if (!Local_264.f_10)
				{
					if (FIRE::IS_ENTITY_ON_FIRE(uLocal_194[1]))
					{
						__LIB_15__::func_888(&uLocal_194, 1, 1);
						Local_264.f_10 = 1;
					}
				}
				else if (!FIRE::IS_ENTITY_ON_FIRE(uLocal_194[1]))
				{
					__LIB_15__::func_888(&uLocal_194, 1, 0);
					Local_264.f_10 = 0;
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_194[2]))
			{
				if (!Local_258.f_10)
				{
					if (FIRE::IS_ENTITY_ON_FIRE(uLocal_194[2]))
					{
						__LIB_15__::func_888(&uLocal_194, 2, 1);
						Local_258.f_10 = 1;
					}
				}
				else if (!FIRE::IS_ENTITY_ON_FIRE(uLocal_194[2]))
				{
					__LIB_15__::func_888(&uLocal_194, 2, 0);
					Local_258.f_10 = 0;
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_194[0]))
			{
				if (!Local_261.f_10)
				{
					if (FIRE::IS_ENTITY_ON_FIRE(uLocal_194[0]) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[0], true), Local_60) > 16f)
					{
						__LIB_15__::func_888(&uLocal_194, 0, 1);
						Local_261.f_10 = 1;
					}
				}
				else if (!FIRE::IS_ENTITY_ON_FIRE(uLocal_194[0]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[0], true), Local_60) < 16f)
				{
					__LIB_15__::func_888(&uLocal_194, 0, 0);
					Local_261.f_10 = 0;
				}
			}
			if (bVar3)
			{
				if (__LIB_34__::func_233(&uLocal_194, 1, 1))
				{
					HUD::CLEAR_HELP(true);
					CAM::DESTROY_ALL_CAMS(false);
					__LIB_0__::func_497(369, 1, 0);
					Local_299.f_12 = uLocal_194[uLocal_194.f_7];
					iLocal_103 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
					if (uLocal_194.f_7 == 2)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_TREVOR"))
						{
							AUDIO::START_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_TREVOR");
						}
					}
					else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_TREVOR"))
					{
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_TREVOR");
					}
					if (uLocal_194.f_7 == 0)
					{
						if (!PED::IS_PED_INJURED(uLocal_194[0]))
						{
							PED::GET_PED_NEARBY_PEDS(uLocal_194[0], &iVar4, -1);
							iVar2 = 0;
							while (iVar2 < iVar4)
							{
								if (iVar1 == -1)
								{
									if (!PED::IS_PED_INJURED(iVar4[iVar2]))
									{
										if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar4[iVar2]) == iLocal_292)
										{
											iVar1 = iVar2;
										}
									}
								}
								iVar2++;
							}
							if (iLocal_90 && !PED::IS_PED_INJURED(Local_284[0 /*21*/]))
							{
								Local_63 = { ENTITY::GET_ENTITY_COORDS(Local_284[0 /*21*/], false) + Vector(3f, 0f, -1f) };
								TASK::TASK_AIM_GUN_AT_COORD(uLocal_194[0], Local_63, -1, true, false);
							}
							else if (iLocal_91 && !PED::IS_PED_INJURED(Local_283[0 /*21*/]))
							{
								Local_63 = { ENTITY::GET_ENTITY_COORDS(Local_283[0 /*21*/], false) + Vector(-3f, 0f, 1f) };
								TASK::TASK_AIM_GUN_AT_COORD(uLocal_194[0], Local_63, -1, true, false);
							}
							else
							{
								if (iVar1 == -1)
								{
									Local_63 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								}
								else
								{
									Local_63 = { ENTITY::GET_ENTITY_COORDS(iVar4[iVar1], false) };
								}
								TASK::TASK_AIM_GUN_AT_COORD(uLocal_194[0], Local_63, -1, true, false);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_194[0], true);
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_MICHAEL"))
						{
							AUDIO::START_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_MICHAEL");
						}
					}
					else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_MICHAEL"))
					{
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_MICHAEL");
					}
					bLocal_97 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -489.7256f, 5408.6177f, 49.595184f, -570.13477f, 5210.887f, 122.60995f, 188.75f, false, true, 0);
					if (bLocal_97)
					{
						if (!PED::IS_PED_INJURED(uLocal_194[uLocal_194.f_7]))
						{
							if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
							{
								Var5 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(uLocal_194[uLocal_194.f_7]) };
								STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(uLocal_194[uLocal_194.f_7], true), __LIB_3__::func_80(Var5), 50f, 2);
							}
						}
					}
					iLocal_102++;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > 1000)
			{
				if (iLocal_185 == 1)
				{
					if (Local_264.f_2 != 0)
					{
						if (SYSTEM::VDIST2(Local_264.f_11, Var0) > 9f)
						{
							TASK::REMOVE_COVER_POINT(Local_264.f_2);
							Local_264.f_11 = { 0f, 0f, 0f };
						}
					}
				}
				else if (iLocal_185 == 0)
				{
					if (Local_261.f_2 != 0)
					{
						if (SYSTEM::VDIST2(Local_261.f_11, Var0) > 9f)
						{
							TASK::REMOVE_COVER_POINT(Local_261.f_2);
							Local_261.f_11 = { 0f, 0f, 0f };
						}
					}
				}
				else if (Local_258.f_2 != 0)
				{
					if (SYSTEM::VDIST2(Local_258.f_11, Var0) > 9f)
					{
						TASK::REMOVE_COVER_POINT(Local_258.f_2);
						Local_258.f_11 = { 0f, 0f, 0f };
					}
				}
			}
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
			if (iLocal_185 == 0 && iLocal_95)
			{
			}
			if ((bLocal_97 && !func_831(&Local_299, 0, 1148829696, 1148829696)) || (!bLocal_97 && !__LIB_17__::func_671(&Local_299, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0)))
			{
				if (iLocal_185 == 0)
				{
					if (iLocal_95)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
						PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
					}
					else
					{
						if (!__LIB_0__::func_490(Local_63, 0f, 0f, 0f, 1056964608, 0))
						{
							fVar6 = func_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_63);
							CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE((fVar6 - 0.5f), (fVar6 + 0.5f));
						}
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
						PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
					}
					PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), false);
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				iLocal_104 = MISC::GET_GAME_TIMER();
				iLocal_102 = 0;
			}
			else if (Local_299.f_18)
			{
				if (!Local_299.f_19)
				{
					if (func_203(&uLocal_194, 1, 1, 0))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (!PED::IS_PED_INJURED(uLocal_194[uLocal_194.f_5]))
						{
							if (iLocal_103 < 110)
							{
								iLocal_103 = 110;
							}
							PED::SET_PED_CAN_BE_TARGETTED(uLocal_194[uLocal_194.f_5], false);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_194[uLocal_194.f_5], false);
							PED::SET_PED_DIES_WHEN_INJURED(uLocal_194[uLocal_194.f_5], true);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_194[uLocal_194.f_5], joaat("PLAYER"));
							__LIB_28__::func_241(&(uLocal_194[uLocal_194.f_5]), 5, 1, 2, 1, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 12, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 29, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 36, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 35, true);
							PED::SET_PED_CONFIG_FLAG(uLocal_194[uLocal_194.f_5], 118, false);
							PED::SET_PED_CONFIG_FLAG(uLocal_194[uLocal_194.f_5], 185, true);
							PED::SET_PED_CONFIG_FLAG(uLocal_194[uLocal_194.f_5], 188, true);
							ENTITY::SET_ENTITY_PROOFS(uLocal_194[uLocal_194.f_5], false, true, false, false, false, false, false, false);
							ENTITY::SET_ENTITY_HEALTH(uLocal_194[uLocal_194.f_5], iLocal_103, 0);
							__LIB_17__::func_479(uLocal_194[uLocal_194.f_5], 1800);
							PED::SET_PED_USING_ACTION_MODE(uLocal_194[uLocal_194.f_5], true, -1, 0);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_194[uLocal_194.f_5], 33497);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_194[uLocal_194.f_5], true, 1);
							if (iLocal_183 == 4 || iLocal_183 == 5)
							{
								if (uLocal_194.f_5 == 0)
								{
									iLocal_186 = func_829(uLocal_194[uLocal_194.f_5]);
									Local_261.f_9 = 1;
								}
								else if (uLocal_194.f_5 == 1)
								{
									iLocal_188 = func_829(uLocal_194[uLocal_194.f_5]);
									Local_264.f_9 = 1;
									if ((MISC::GET_GAME_TIMER() - iLocal_118) > 17000)
									{
										iLocal_118 = (MISC::GET_GAME_TIMER() - 17000);
									}
								}
								else if (uLocal_194.f_5 == 2)
								{
									iLocal_187 = func_829(uLocal_194[uLocal_194.f_5]);
									Local_258.f_9 = 1;
									if ((MISC::GET_GAME_TIMER() - iLocal_119) > 17000)
									{
										iLocal_119 = (MISC::GET_GAME_TIMER() - 17000);
									}
								}
							}
							if (uLocal_194.f_5 != 0)
							{
								if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_194[uLocal_194.f_5], joaat("WEAPON_CARBINERIFLE"), false))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(uLocal_194[uLocal_194.f_5], joaat("WEAPON_CARBINERIFLE"), false);
									if (WEAPON::GET_AMMO_IN_PED_WEAPON(uLocal_194[uLocal_194.f_5], joaat("WEAPON_CARBINERIFLE")) < 50)
									{
										WEAPON::ADD_AMMO_TO_PED(uLocal_194[uLocal_194.f_5], joaat("WEAPON_CARBINERIFLE"), 50);
									}
								}
							}
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
						PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 33497);
						func_199();
						func_868();
						iLocal_185 = uLocal_194.f_6;
						if (iLocal_185 == 0)
						{
							Local_261.f_11 = { 0f, 0f, 0f };
						}
						else
						{
							PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
							PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
							if (iLocal_185 == 1)
							{
								Var7 = { Local_264.f_11 };
							}
							else if (iLocal_185 == 2)
							{
								Var7 = { Local_258.f_11 };
							}
							if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(Var7))
							{
								fVar8 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[uLocal_194.f_5], true), Var7);
								fVar9 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var7);
								if ((fVar9 < fVar8 && fVar8 > 100f) && fVar9 < 4f)
								{
									TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Var7, 1500, false, 0f, false, false, 0, true);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
								}
							}
							if (iLocal_185 == 1)
							{
								Local_264.f_11 = { 0f, 0f, 0f };
							}
							else if (iLocal_185 == 2)
							{
								Local_258.f_11 = { 0f, 0f, 0f };
							}
						}
						Local_299.f_19 = 1;
					}
				}
			}
			break;
	}
}

int func_829(int iParam0)//Position - 0x98BEE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	iVar0 = 5;
	if (((!PED::IS_PED_INJURED(iParam0) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_151)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_153)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_152))
	{
		if (__LIB_16__::func_512(0) == ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			iVar0 = 2;
		}
		else
		{
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_151, Var4, &iVar1);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_153, Var4, &iVar2);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_152, Var4, &iVar3);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_151, iVar1, &Var5);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_153, iVar2, &Var6);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_152, iVar3, &Var7);
			fVar8 = SYSTEM::VDIST2(Var4, Var5);
			fVar9 = SYSTEM::VDIST2(Var4, Var6);
			fVar10 = SYSTEM::VDIST2(Var4, Var7);
			if (fVar8 < fVar9)
			{
				if (fVar8 < fVar10)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 3;
				}
			}
			else if (fVar9 < fVar10)
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = 3;
			}
			if (iVar0 == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_SITTING_IN_VEHICLE(iParam0, Local_291.f_0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

float func_830(struct<3> Param0, struct<3> Param1)//Position - 0x98D0F
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { Param1 - Param0 };
	Var1 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	return MISC::ATAN2(Var1.f_2, SYSTEM::VMAG(Var1.f_0, Var1.f_1, 0f));
}

int func_831(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x98D49
{
	return __LIB_17__::func_626(uParam0, 0, 3, iParam1, fParam2, fParam3, 0, 0, 0, 6, 0, 0, 0);
	return 1;
}

void func_858()//Position - 0x9A631
{
	struct<3> Var0;
	struct<3> Var1;
	if (!PED::IS_PED_INJURED(Local_267.f_0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_267.f_0, true) };
		if (SYSTEM::VDIST2(Var0, Var1) < 400f)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_108) > 0 && (MISC::GET_GAME_TIMER() - iLocal_112) > 0)
			{
				if ((iLocal_100[25] && (iLocal_100[20] || !iLocal_100[19])) || !Global_96890)
				{
					if (iLocal_185 == 1)
					{
						if (func_859())
						{
							iLocal_112 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 19000));
							iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
						}
					}
					else if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_SPEAK", 7, 0, 0, 0))
					{
						iLocal_112 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 19000));
						iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
					}
				}
			}
			if (iLocal_100[19])
			{
				if (!iLocal_100[20] && iLocal_185 != 0)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_136) < 13000)
					{
						if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_LHEARM", 7, 0, 0, 0))
						{
							iLocal_100[20] = 1;
						}
					}
					else
					{
						iLocal_100[20] = 1;
					}
				}
				if (!iLocal_100[21] && iLocal_185 != 0)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -486.6962f, 5309.8105f, 86.64392f, 22.25f, 2.5f, 7.5f, false, true, 0))
					{
						if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_WAY", 7, 0, 0, 0))
						{
							iLocal_100[21] = 1;
						}
					}
				}
			}
		}
	}
}

int func_859()//Position - 0x9A7DE
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	StringCopy(&Var1, "", 16);
	switch (iVar0)
	{
		case 0:
			StringConCat(&Var1, "LM2_SH1", 16);
			iVar2 = 26;
			break;
		case 1:
			StringConCat(&Var1, "LM2_SH2", 16);
			iVar2 = 27;
			break;
		case 2:
			StringConCat(&Var1, "LM2_SH3", 16);
			iVar2 = 28;
			break;
		case 3:
			StringConCat(&Var1, "LM2_SH4", 16);
			iVar2 = 29;
			break;
		case 4:
			StringConCat(&Var1, "LM2_SH5", 16);
			iVar2 = 30;
			break;
		case 5:
			StringConCat(&Var1, "LM2_SH6", 16);
			iVar2 = 31;
			break;
		case 6:
			StringConCat(&Var1, "LM2_SH7", 16);
			iVar2 = 32;
			break;
		case 7:
			StringConCat(&Var1, "LM2_SH8", 16);
			iVar2 = 33;
			break;
	}
	if (!iLocal_100[iVar2])
	{
		if (__LIB_17__::func_506(&Local_294, "LEM2AUD", &Var1, 7, 0, 0, 0))
		{
			iLocal_100[iVar2] = 1;
			return 1;
		}
	}
	return 0;
}

void func_860()//Position - 0x9A8D8
{
	int iVar0;
	int iVar1[5];
	struct<2> Var2;
	struct<2> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	iVar4 = 0;
	Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar6 = 0;
	if (!PED::IS_PED_INJURED(uLocal_194[2]))
	{
		iVar0 = uLocal_194[2];
		if (iLocal_185 != 0)
		{
			if (!iLocal_100[3] && iLocal_183 < 5)
			{
				if ((!iLocal_100[89] && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false)) && PED::IS_PED_IN_VEHICLE(iVar0, Local_291.f_0, false))
				{
					StringCopy(&Var2, "LM2_driveT", 16);
				}
				else
				{
					StringCopy(&Var2, "LM2_drive", 16);
				}
				StringCopy(&Var3, "LM2_FRANGEN", 16);
			}
			if (iLocal_183 == 5)
			{
				StringCopy(&Var2, "LM2_TRVATT", 16);
			}
		}
	}
	else if (!PED::IS_PED_INJURED(uLocal_194[1]))
	{
		iVar0 = uLocal_194[1];
		if (iLocal_185 != 0)
		{
			if (!iLocal_100[3] && iLocal_183 < 5)
			{
				StringCopy(&Var2, "LM2_FRANGEN", 16);
				StringCopy(&Var3, "LM2_drive", 16);
			}
			if (iLocal_183 == 5)
			{
				StringCopy(&Var3, "LM2_TRVATT", 16);
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_108) > 0 && !__LIB_0__::func_477())
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_109) > 0)
		{
			PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar1, -1);
			iVar6 = 0;
			while (iVar6 < iVar1)
			{
				if (!PED::IS_PED_INJURED(iVar1[iVar6]))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar1[iVar6]) == iLocal_177)
					{
						if (SYSTEM::VDIST2(Var5, ENTITY::GET_ENTITY_COORDS(iVar1[iVar6], true)) < 10000f)
						{
							iVar4 = 1;
						}
					}
				}
				iVar6++;
			}
			if (iVar4 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
				{
					if (__LIB_17__::func_506(&Local_294, "LEM2AUD", &Var3, 7, 0, 0, 0))
					{
						iLocal_109 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000));
						iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_110) > 0)
		{
			if (!PED::IS_PED_INJURED(iVar0))
			{
				if ((((PED::IS_PED_SHOOTING(iVar0) || PED::IS_PED_IN_COMBAT(iVar0, 0)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(iVar0, Local_291.f_0, false))) && !PED::IS_PED_RAGDOLL(iVar0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, true), Var5) < 625f)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
					{
						if (__LIB_17__::func_506(&Local_294, "LEM2AUD", &Var2, 7, 0, 0, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(iVar0, Local_291.f_0, false))
							{
								iLocal_110 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 19000));
							}
							else
							{
								iLocal_110 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000));
							}
							if (MISC::ARE_STRINGS_EQUAL(&Var2, "LM2_driveT"))
							{
								iLocal_100[89] = 1;
							}
							iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
						}
					}
				}
			}
		}
		if ((((Global_96890 && iLocal_183 == 4) && iLocal_185 != 0) && !HUD::DOES_BLIP_EXIST(Local_267.f_1)) && !PED::IS_PED_INJURED(iVar0))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_111) > 0)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, true), Var5) > 2500f)
				{
					if (!PED::IS_PED_INJURED(uLocal_194[1]))
					{
						if (!iLocal_100[90])
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_ANYSIGN", 7, 0, 0, 0))
							{
								iLocal_111 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_100[90] = 1;
							}
						}
						else if (!iLocal_100[91])
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_ANYSIGN2", 7, 0, 0, 0))
							{
								iLocal_111 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_100[91] = 1;
							}
						}
						else if (!iLocal_100[92])
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_ANYSIGN3", 7, 0, 0, 0))
							{
								iLocal_111 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_100[92] = 1;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uLocal_194[2]))
					{
						if (!iLocal_100[93])
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_FOUND", 7, 0, 0, 0))
							{
								iLocal_111 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_100[93] = 1;
							}
						}
						else if (!iLocal_100[94])
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_FOUND2", 7, 0, 0, 0))
							{
								iLocal_111 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_100[94] = 1;
							}
						}
						else if (!iLocal_100[95])
						{
							if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_FOUND3", 7, 0, 0, 0))
							{
								iLocal_111 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_100[95] = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!iLocal_100[96] && iLocal_183 == 4)
	{
		if (!PED::IS_PED_INJURED(uLocal_194[2]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true), -579f, 5304.6f, 70.1f) < 100f)
			{
				if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_WEEDT", 7, 0, 0, 0))
				{
					iLocal_100[96] = 1;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(uLocal_194[1]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[1], true), -579f, 5304.6f, 70.1f) < 100f)
			{
				if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_WEEDF", 7, 0, 0, 0))
				{
					iLocal_100[96] = 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_194[0]))
	{
		if (iLocal_115 > 0 && (MISC::GET_GAME_TIMER() - iLocal_115) < 1500)
		{
			if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "lm2_mikill", 7, 0, 0, 0))
			{
				iLocal_115 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_194[1]))
	{
		if ((iLocal_116 > 0 && (MISC::GET_GAME_TIMER() - iLocal_116) < 1500) && iLocal_185 == 0)
		{
			if (iLocal_188 == 4 || iLocal_183 == 5)
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_194[1]))
				{
					if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "lm2_frkill", 7, 0, 0, 0))
					{
						iLocal_116 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
	if (iLocal_185 == 0)
	{
		if (!__LIB_0__::func_477() && !iLocal_100[4])
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_132 = MISC::GET_GAME_TIMER();
				iLocal_100[85] = 0;
				iLocal_100[86] = 0;
			}
			else if (iLocal_187 == 4 || iLocal_183 == 5)
			{
				if (!iLocal_100[85])
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_132) > 10000 && (MISC::GET_GAME_TIMER() - iLocal_119) > 10000)
					{
						if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_enc1", 7, 0, 0, 0))
						{
							iLocal_100[85] = 1;
						}
					}
				}
				else if (!iLocal_100[86])
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_132) > 17000 && uLocal_194.f_13[2])
					{
						if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_enc2", 7, 0, 0, 0))
						{
							iLocal_100[86] = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_132 = MISC::GET_GAME_TIMER();
	}
}

void func_861()//Position - 0x9B05A
{
	if (((iLocal_185 == 0 && PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED()) && __LIB_1__::func_732(PLAYER::PLAYER_PED_ID())) && !__LIB_0__::func_477())
	{
		if (!iLocal_100[97])
		{
			if ((((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 42 /*INPUT_SNIPER_ZOOM_IN_SECONDARY*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 43 /*INPUT_SNIPER_ZOOM_OUT_SECONDARY*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 274 /*INPUT_SNIPER_ZOOM_IN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 275 /*INPUT_SNIPER_ZOOM_OUT*/)) || (MISC::GET_GAME_TIMER() - iLocal_138) > 2000)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (MISC::IS_PC_VERSION())
					{
						if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							__LIB_0__::func_151("FRAN2_SNIPEHELP", 20000);
						}
						else
						{
							__LIB_0__::func_151("FRAN2_SNIPEHELP_KM", 20000);
						}
					}
					else
					{
						__LIB_0__::func_151("FRAN2_SNIPEHELP", 20000);
					}
					iLocal_100[97] = 1;
				}
			}
		}
	}
	else
	{
		if (__LIB_0__::func_1("FRAN2_SNIPEHELP") && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))
		{
			HUD::CLEAR_HELP(true);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (__LIB_0__::func_1("FRAN2_SNIPEHELP_KM") && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		iLocal_138 = MISC::GET_GAME_TIMER();
	}
}

void func_864()//Position - 0x9B199
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_291.f_0, false))
	{
		if (Global_96890)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
			{
				if (!iLocal_85)
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0))
					{
						if (__LIB_0__::func_477() && bLocal_70)
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_291.f_0, 2f);
						}
					}
					else if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_291.f_0, -1, false))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_291.f_0, true);
					}
					else
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_291.f_0, false);
					}
				}
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
		{
			if (!iLocal_86)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_291.f_0, "FRANKLIN_2_BULLDOZER_Group", 0f);
				iLocal_86 = 1;
			}
		}
		else if (iLocal_86)
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_291.f_0, 0f);
			iLocal_86 = 0;
		}
		if (!iLocal_98)
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_291.f_0) > 2f)
			{
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_291.f_0, false);
				iLocal_98 = 1;
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(Local_291.f_0) < 0.5f)
		{
			VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_291.f_0, true);
			iLocal_98 = 0;
		}
	}
}

void func_865(int iParam0)//Position - 0x9B27F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		if (iLocal_183 == 4)
		{
			switch (iLocal_113)
			{
				case 0:
					if (!bLocal_72)
					{
						bLocal_72 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -558.1774f, 5305.1196f, 67.82993f, -580.6056f, 5263.624f, 88.29326f, 4f);
					}
					break;
				case 1:
					if (!bLocal_72)
					{
						bLocal_72 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_484(1), -581.0774f, 5263.9834f, 61.98342f, -566.5982f, 5254.7075f, 74.502625f, 4f, false, true, 0);
					}
					break;
				case 2:
					if (!bLocal_73)
					{
						bLocal_73 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -513.98175f, 5303.33f, 74.58913f, -531.8288f, 5254.358f, 78.010544f, 1.75f);
					}
					break;
				case 3:
					if (!bLocal_73)
					{
						bLocal_73 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -531.57404f, 5253.4775f, 74.83571f, -541.5794f, 5225.2163f, 78.37697f, 1.75f);
					}
					break;
				case 4:
					if (!iLocal_75)
					{
						if (!PED::IS_PED_INJURED(func_484(1)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_484(1), -578.9755f, 5378.4326f, 68.78147f, -531.7402f, 5358.9517f, 83.436295f, 10.5f, false, true, 0))
						{
							if (iLocal_185 == 1)
							{
								iLocal_75 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(uLocal_194[1], Local_291.f_0, false))
							{
								if (iLocal_191 == 1)
								{
									iLocal_75 = 1;
								}
							}
							else
							{
								iLocal_75 = 1;
							}
						}
						else if (!PED::IS_PED_INJURED(func_484(2)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_484(2), -578.9755f, 5378.4326f, 68.78147f, -531.7402f, 5358.9517f, 83.436295f, 10.5f, false, true, 0))
						{
							if (iLocal_185 == 2)
							{
								iLocal_75 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(uLocal_194[2], Local_291.f_0, false))
							{
								if (iLocal_191 == 1)
								{
									iLocal_75 = 1;
								}
							}
							else
							{
								iLocal_75 = 1;
							}
						}
					}
					break;
				case 5:
					iLocal_76 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -547.7983f, 5327.8975f, 83.81184f, -621.1396f, 5351.127f, 65.211105f, 10.5f);
					if (!iLocal_76)
					{
						if (!PED::IS_PED_INJURED(func_484(1)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_484(1), -547.7983f, 5327.8975f, 83.81184f, -621.1396f, 5351.127f, 65.211105f, 10.5f, false, true, 0))
						{
							if (iLocal_185 == 1)
							{
								iLocal_76 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(uLocal_194[1], Local_291.f_0, false))
							{
								if (iLocal_191 == 1)
								{
									iLocal_76 = 1;
								}
							}
							else
							{
								iLocal_76 = 1;
							}
						}
						else if (!PED::IS_PED_INJURED(func_484(2)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_484(2), -547.7983f, 5327.8975f, 83.81184f, -621.1396f, 5351.127f, 65.211105f, 10.5f, false, true, 0))
						{
							if (iLocal_185 == 2)
							{
								iLocal_76 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(uLocal_194[2], Local_291.f_0, false))
							{
								if (iLocal_191 == 1)
								{
									iLocal_76 = 1;
								}
							}
							else
							{
								iLocal_76 = 1;
							}
						}
					}
					break;
				case 6:
					if (!bLocal_79)
					{
						bLocal_79 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -421.0383f, 5325.92f, 105.33745f, -516.91003f, 5335.9365f, 63.6036f, 18.5f);
					}
					break;
				case 7:
					if (!bLocal_80)
					{
						bLocal_80 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -439.47345f, 5303.4727f, 98.53514f, -518.60803f, 5324.277f, 79.13394f, 9.25f);
					}
					break;
				case 8:
					if (!bLocal_74)
					{
						bLocal_74 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -538.50116f, 5288.4434f, 72.86422f, -462.79443f, 5238.1567f, 99.61439f, 9.25f);
					}
					break;
				case 9:
					if (!bLocal_83)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
						{
							bLocal_83 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_291.f_0, -558.2652f, 5294.501f, 69.138664f, -629.74615f, 5269.548f, 82.583916f, 4.25f, false, true, 0);
						}
					}
					break;
				case 10:
					if (!bLocal_84)
					{
						bLocal_84 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -563.0012f, 5294.1416f, 83.103325f, -615.77856f, 5313.2397f, 66.259796f, 7f);
					}
					break;
				case 11:
					if (!bLocal_78)
					{
						bLocal_78 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -512.3232f, 5297.808f, 75.35219f, -528.5533f, 5122.547f, 114.40756f, 11f);
					}
					break;
				case 12:
					if (!bLocal_77)
					{
						bLocal_77 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -563.69385f, 5225.0396f, 66.89445f, -556.4073f, 5290.143f, 95.39075f, 7.25f);
					}
					break;
				case 13:
					if (!bLocal_77)
					{
						bLocal_77 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -588.4457f, 5264.1235f, 56.399567f, -546.9515f, 5244.38f, 85.20131f, 7.25f);
					}
					break;
			}
			iLocal_113++;
			if (iLocal_113 > 13)
			{
				iLocal_113 = 0;
			}
		}
		else if (iLocal_183 == 5)
		{
			switch (iLocal_113)
			{
				case 0:
					if (!bLocal_81)
					{
						bLocal_81 = __LIB_28__::func_243(func_484(1), func_484(2), 0, -450.69003f, 5276.055f, 94.35943f, -533.64685f, 5304.58f, 72.32547f, 2.5f);
					}
					break;
				case 1:
					if (!bLocal_82)
					{
						bLocal_82 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -598.3373f, 5469.9287f, 56.10997f, -431.00076f, 5025.9556f, 204.01724f, 8.5f, false, true, 0);
					}
					break;
				case 2:
					if (iLocal_185 == 0)
					{
						bLocal_82 = (((__LIB_28__::func_243(func_484(1), func_484(2), 0, -566.7373f, 5383.9287f, 68.10997f, -488.80075f, 5165.156f, 104.017235f, 8.5f) && __LIB_28__::func_240(&Local_277) == 0) && __LIB_28__::func_240(&Local_278) == 0) && __LIB_28__::func_240(&Local_288) < 3);
					}
					break;
			}
			iLocal_113++;
			if (iLocal_113 > 2)
			{
				iLocal_113 = 0;
			}
		}
		iVar0++;
	}
}

void func_867()//Position - 0x9B94D
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iLocal_167)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_167[iVar1]))
		{
			Var0 = { OBJECT::GET_PICKUP_COORDS(iLocal_167[iVar1]) };
			OBJECT::REMOVE_PICKUP(iLocal_167[iVar1]);
			MISC::CLEAR_AREA(Var0, 2f, true, false, false, false);
		}
		iVar1++;
	}
	iVar2 = 0;
	MISC::SET_BIT(&iVar2, 1);
	MISC::SET_BIT(&iVar2, 5);
	iLocal_167[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), -515.1648f, 5307.256f, 80.2493f, 0f, 0f, -18.36f, iVar2, -1, 2, true, 0);
	iLocal_167[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), -468.34f, 5355.3f, 79.85f, 0f, 0f, -50.4f, iVar2, -1, 2, true, 0);
	iLocal_167[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_ARMOUR_STANDARD"), -523.61f, 5289.89f, 73.281f, -90f, 0f, -58.2f, iVar2, -1, 2, true, 0);
}

void func_868()//Position - 0x9BA37
{
	if (!PED::IS_PED_INJURED(uLocal_194[0]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_194[0], "FRANKLIN_2_BUDDIES_GROUP", 0f);
	}
	if (!PED::IS_PED_INJURED(uLocal_194[1]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_194[1], "FRANKLIN_2_BUDDIES_GROUP", 0f);
	}
	if (!PED::IS_PED_INJURED(uLocal_194[2]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_194[2], "FRANKLIN_2_BUDDIES_GROUP", 0f);
	}
	AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
}

int func_869(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x9BAA2
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_291.f_0))
	{
		STREAMING::REQUEST_MODEL(iLocal_176);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_176))
		{
			if (bParam2)
			{
				return 1;
			}
			else
			{
				Local_291.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_176, Param0, fParam1, true, true, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_291.f_0, 0, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_291.f_0, 1, false);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_291.f_0, false, 0);
				VEHICLE::SET_VEHICLE_STRONG(Local_291.f_0, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_291.f_0, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_291.f_0, true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_291.f_0, false);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_291.f_0, "FRANKLIN_2_BULLDOZER_Group", 0f);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_291.f_0, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_176);
				VEHICLE::SET_VEHICLE_BULLDOZER_ARM_POSITION(Local_291.f_0, 0.1f, false);
				ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_291.f_0, true);
				Local_291.f_2 = 0;
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

void func_870()//Position - 0x9BB64
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	int iVar5;
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (iLocal_184 == 4)
	{
		if (func_198())
		{
			if (bLocal_68)
			{
				__LIB_0__::func_427(-591.813f, 5236.3486f, 69.8739f, 321.3476f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -591.813f, 5236.3486f, 69.8739f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 321.3476f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			func_776();
			if (Global_96890)
			{
				while (((!ENTITY::DOES_ENTITY_EXIST(uLocal_194[0]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_194[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_169)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_170))
				{
					func_775(Local_60, fLocal_145, 0);
					func_772(-487.0432f, 5385.6133f, 77.1299f, 189.1107f, 0);
					func_771(Local_50, fLocal_139, 0);
					func_732(Local_51, fLocal_140, 0);
					SYSTEM::WAIT(0);
				}
				func_731();
				func_730();
			}
			while ((((!func_667(Local_62, fLocal_146) || !ENTITY::DOES_ENTITY_EXIST(Local_291.f_0)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_164[0])) || !Local_270[0 /*21*/].f_3) || !bLocal_69)
			{
				func_659();
				func_869(Local_54, fLocal_143, 0);
				func_658();
				SYSTEM::WAIT(0);
			}
			func_50(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			__LIB_0__::func_433(0, -1, 0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 5000)
			{
				if (((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && ((!PED::IS_PED_INJURED(uLocal_194[0]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[0])) || PED::IS_PED_INJURED(uLocal_194[0]))) && ((!PED::IS_PED_INJURED(uLocal_194[1]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[1])) || PED::IS_PED_INJURED(uLocal_194[1]))) && ((!PED::IS_PED_INJURED(uLocal_194[2]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[2])) || PED::IS_PED_INJURED(uLocal_194[2])))
				{
					SYSTEM::SETTIMERA(100000);
				}
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(uLocal_194[0]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_194[0], true, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_194[2]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_194[2], true, 1);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			__LIB_39__::func_59(1);
			func_655(1);
			func_654(1);
			func_653();
			func_868();
			func_867();
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f, true, false, false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			iLocal_185 = 1;
			iLocal_101 = 0;
			iLocal_184 = 0;
		}
	}
	if (iLocal_184 == 0)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_151);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_153);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_152);
		if ((TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_151) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_153)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_152))
		{
			func_776();
			__LIB_39__::func_59(1);
			func_655(1);
			__LIB_16__::func_15(&uLocal_194, 0, 0);
			func_871();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_291.f_0, true);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_STEALTH"))
			{
				AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_STEALTH");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_ALERT"))
			{
				AUDIO::START_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_ALERT");
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -591.813f, 5236.3486f, 69.8739f, -1, false, 0f, false, false, 0, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				func_595();
				AUDIO::TRIGGER_MUSIC_EVENT("FRA2_ATTACK_RT");
				SYSTEM::WAIT(500);
				__LIB_16__::func_11();
			}
			AUDIO::TRIGGER_MUSIC_EVENT("FRA2_ALERTED");
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			SYSTEM::SETTIMERB(0);
			iLocal_101 = 0;
			iLocal_184 = 1;
		}
	}
	if (iLocal_184 == 1)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iLocal_191 = func_829(PLAYER::PLAYER_PED_ID());
		func_865(3);
		func_659();
		func_500();
		if (Global_96890)
		{
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_151);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_153);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_152);
			func_828();
			func_817();
			func_827();
			func_864();
			func_861();
		}
		if (bLocal_71)
		{
			iLocal_184 = 2;
		}
		else
		{
			if (!iLocal_100[22])
			{
				if ((iLocal_96 && Global_96890) && iLocal_185 == 2)
				{
					if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
					{
						if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_NOWAIT", 7, 0, 0, 0))
						{
							iLocal_100[22] = 1;
						}
					}
				}
				else
				{
					iLocal_100[22] = 1;
				}
			}
			else if (!iLocal_100[2])
			{
				if (!__LIB_13__::func_755(&Local_238, 2))
				{
					__LIB_0__::func_229("FRAN2_FIND", 7500, 0);
					iLocal_100[2] = 1;
				}
			}
			if (Global_96890)
			{
				if (!iLocal_91)
				{
					if (!PED::IS_PED_INJURED(Local_283[0 /*21*/]) && iLocal_122 > 0)
					{
						if (iLocal_123 == 0)
						{
							iLocal_123 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_123) > 1500)
						{
							if (iLocal_185 != 0)
							{
								__LIB_16__::func_15(&uLocal_194, 0, 1);
								__LIB_15__::func_961(&uLocal_194, 0, 1, 2);
								iLocal_91 = 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(Local_283[0 /*21*/]))
				{
					if (!iLocal_100[67])
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(2), true), ENTITY::GET_ENTITY_COORDS(func_484(1), true)) < 900f)
						{
							if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
							{
								if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_mrpg", 7, 0, 0, 0))
								{
									iLocal_100[67] = 1;
									iLocal_129 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else if (!iLocal_100[68])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_129) > 11000)
						{
							if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
							{
								if (iLocal_185 == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(2), true), ENTITY::GET_ENTITY_COORDS(Local_283[0 /*21*/], true)) < SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(1), true), ENTITY::GET_ENTITY_COORDS(Local_283[0 /*21*/], true)))
									{
										if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_TSHOOTM", 7, 0, 0, 0))
										{
											iLocal_100[68] = 1;
										}
									}
									else if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_FSHOOTM", 7, 0, 0, 0))
									{
										iLocal_100[68] = 1;
									}
								}
								else if (iLocal_185 == 1)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(2), true), ENTITY::GET_ENTITY_COORDS(func_484(1), true)) < 900f)
									{
										if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_DEALT", 7, 0, 0, 0))
										{
											iLocal_100[68] = 1;
										}
									}
								}
								else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(2), true), ENTITY::GET_ENTITY_COORDS(func_484(1), true)) < 900f)
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_DEALF", 7, 0, 0, 0))
									{
										iLocal_100[68] = 1;
									}
								}
							}
						}
					}
				}
				else if (PED::IS_PED_INJURED(Local_284[0 /*21*/]))
				{
					__LIB_16__::func_15(&uLocal_194, 0, 0);
					iLocal_91 = 0;
				}
				if (!iLocal_90)
				{
					if (!PED::IS_PED_INJURED(Local_284[0 /*21*/]))
					{
						if (iLocal_128 != 0 && (MISC::GET_GAME_TIMER() - iLocal_128) > 5000)
						{
							if (iLocal_185 != 0)
							{
								__LIB_16__::func_15(&uLocal_194, 0, 1);
								__LIB_15__::func_961(&uLocal_194, 0, 1, 2);
								iLocal_90 = 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(Local_284[0 /*21*/]))
				{
					if (!iLocal_100[81])
					{
						if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(2), true), ENTITY::GET_ENTITY_COORDS(Local_284[0 /*21*/], true)) < SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(1), true), ENTITY::GET_ENTITY_COORDS(Local_284[0 /*21*/], true)))
							{
								if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_SNIPERT", 7, 0, 0, 0))
								{
									iLocal_100[81] = 1;
									iLocal_130 = MISC::GET_GAME_TIMER();
								}
							}
							else if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_SNIPERF", 7, 0, 0, 0))
							{
								iLocal_100[81] = 1;
								iLocal_130 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (!iLocal_100[69])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_130) > 11000)
						{
							if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
							{
								if (iLocal_185 == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(2), true), ENTITY::GET_ENTITY_COORDS(Local_284[0 /*21*/], true)) < SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(1), true), ENTITY::GET_ENTITY_COORDS(Local_284[0 /*21*/], true)))
									{
										if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_TSHOOTM", 7, 0, 0, 0))
										{
											iLocal_100[69] = 1;
										}
									}
									else if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_FSHOOTM", 7, 0, 0, 0))
									{
										iLocal_100[69] = 1;
									}
								}
								else if (iLocal_185 == 1)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(2), true), ENTITY::GET_ENTITY_COORDS(func_484(1), true)) < 900f)
									{
										if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_DEALT", 7, 0, 0, 0))
										{
											iLocal_100[69] = 1;
										}
									}
								}
								else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(2), true), ENTITY::GET_ENTITY_COORDS(func_484(1), true)) < 900f)
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_DEALF", 7, 0, 0, 0))
									{
										iLocal_100[69] = 1;
									}
								}
							}
						}
					}
				}
				else if (PED::IS_PED_INJURED(Local_283[0 /*21*/]))
				{
					__LIB_16__::func_15(&uLocal_194, 0, 0);
					iLocal_91 = 0;
				}
				if (iLocal_185 == 0 && !__LIB_0__::func_477())
				{
					if ((SYSTEM::VDIST2(Local_55, ENTITY::GET_ENTITY_COORDS(func_484(2), true)) < 900f && SYSTEM::VDIST2(Local_55, ENTITY::GET_ENTITY_COORDS(func_484(1), true)) < 900f) && (__LIB_28__::func_240(&Local_276) == 0 || __LIB_28__::func_240(&Local_287) == 0))
					{
						if (!iLocal_100[16])
						{
							if (!__LIB_13__::func_755(&Local_238, 2))
							{
								__LIB_0__::func_229("FRAN2_SWITCH2", 7500, 0);
							}
						}
						if (!iLocal_92)
						{
							__LIB_16__::func_15(&uLocal_194, 1, 1);
							__LIB_16__::func_15(&uLocal_194, 2, 1);
							__LIB_15__::func_961(&uLocal_194, 1, 2, 0);
							iLocal_92 = 1;
						}
					}
				}
				else
				{
					if (__LIB_0__::func_501("FRAN2_SWITCH2", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (iLocal_100[7])
					{
						if (__LIB_0__::func_1("FRAN2_SPECHELP"))
						{
							HUD::CLEAR_HELP(true);
						}
						if (MISC::IS_PC_VERSION())
						{
							if (__LIB_0__::func_1("FRAN2_SPECHELP_KM"))
							{
								HUD::CLEAR_HELP(true);
							}
						}
					}
					if (iLocal_92)
					{
						__LIB_16__::func_15(&uLocal_194, 2, 0);
						__LIB_16__::func_15(&uLocal_194, 1, 0);
						iLocal_92 = 0;
					}
					iLocal_133 = MISC::GET_GAME_TIMER();
				}
			}
			if (iLocal_185 != 0)
			{
				fVar1 = SYSTEM::VDIST2(Var0, Local_55);
				if (fVar1 > 90000f)
				{
					func_481(7);
				}
				else if (fVar1 > 50625f)
				{
					if (!iLocal_100[72])
					{
						if (!__LIB_13__::func_755(&Local_238, 2))
						{
							__LIB_0__::func_229("FRAN2_RETSAW", 7500, 0);
							iLocal_100[72] = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(Local_267.f_0))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(Local_267.f_0, true) };
					if (SYSTEM::VDIST2(Var0, Var2) < 2500f && Var0.f_2 > 79f)
					{
						if (!__LIB_0__::func_477())
						{
							if (!HUD::DOES_BLIP_EXIST(Local_267.f_1))
							{
								Local_267.f_1 = __LIB_0__::func_639(Local_267.f_0, 0, 0);
								HUD::SET_BLIP_SCALE(Local_267.f_1, 1f);
							}
							if (!iLocal_100[3])
							{
								if (!__LIB_13__::func_755(&Local_238, 2))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FRA2_GET_TO_LAMAR");
									__LIB_0__::func_229("FRAN2_GETLAMAR", 7500, 0);
									iLocal_100[3] = 1;
								}
							}
						}
						if (!iLocal_100[62] && Global_96890)
						{
							if (!__LIB_13__::func_755(&Local_238, 1) && !__LIB_0__::func_477())
							{
								if (!ENTITY::IS_ENTITY_OCCLUDED(Local_267.f_0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -527.93097f, 5309.8857f, 79.26758f, -503.3806f, 5300.901f, 82.347145f, 3.5f, false, true, 0))
								{
									GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var2, &fVar3, &fVar4);
									if (((fVar3 > 0.3f && fVar3 < 0.7f) && fVar4 > 0.3f) && fVar4 < 0.7f)
									{
										if (iLocal_185 == 1)
										{
											if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_SPOTL", 7, 0, 0, 0))
											{
												iLocal_100[62] = 1;
											}
										}
										else if (iLocal_185 == 2)
										{
											if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_SPOTL2", 7, 0, 0, 0))
											{
												iLocal_100[62] = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (!iLocal_94)
		{
			if (!PED::IS_PED_INJURED(Local_267.f_0))
			{
				if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_267.f_0, true)) < 225f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_267.f_0, 8000, 2048, 2);
					iLocal_94 = 1;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(Local_267.f_0))
		{
			if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_267.f_0, true)) > 400f)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				iLocal_94 = 0;
			}
		}
		if (!__LIB_13__::func_755(&Local_238, 1))
		{
			func_860();
		}
	}
	if (iLocal_184 == 2)
	{
		func_593();
		HUD::CLEAR_HELP(true);
		iVar5 = 0;
		while (iVar5 < Local_270.f_0)
		{
			if (!PED::IS_PED_INJURED(Local_270[iVar5 /*21*/]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_270[iVar5 /*21*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 22500f && !ENTITY::IS_ENTITY_ON_SCREEN(Local_270[iVar5 /*21*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_270[iVar5 /*21*/], 0, 0);
				}
			}
			iVar5++;
		}
		__LIB_16__::func_15(&uLocal_194, 0, 0);
		__LIB_16__::func_15(&uLocal_194, 2, 0);
		__LIB_16__::func_15(&uLocal_194, 1, 0);
		__LIB_17__::func_645(&uLocal_194);
		iLocal_183 = 5;
		iLocal_184 = 0;
	}
	if (iLocal_184 == 3)
	{
		func_479(5, 0);
	}
}

void func_871()//Position - 0x9C927
{
	if (__LIB_16__::func_512(1) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_185 = 1;
	}
	else if (__LIB_16__::func_512(2) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_185 = 2;
	}
	else
	{
		iLocal_185 = 0;
	}
	iLocal_186 = func_829(func_484(0));
	iLocal_188 = func_829(func_484(1));
	iLocal_187 = func_829(func_484(2));
	iLocal_190 = iLocal_188;
	iLocal_189 = iLocal_187;
	iLocal_118 = MISC::GET_GAME_TIMER();
	iLocal_119 = MISC::GET_GAME_TIMER();
	iLocal_111 = MISC::GET_GAME_TIMER() + 25000;
	if (iLocal_185 != 1)
	{
		Local_264.f_9 = 1;
	}
	if (iLocal_185 != 2)
	{
		Local_258.f_9 = 1;
	}
}

void func_872()//Position - 0x9C9C3
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	if (iLocal_184 == 4)
	{
		if ((Global_96890 && func_878()) || (!Global_96890 && func_198()))
		{
			if (bLocal_68)
			{
				__LIB_0__::func_427(-706.1613f, 5313.144f, 70.0483f, 284.2023f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -706.1613f, 5313.144f, 70.0483f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 284.2023f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			func_776();
			if (Global_96890)
			{
				while (((!ENTITY::DOES_ENTITY_EXIST(uLocal_194[0]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_194[1])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_169)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_170))
				{
					func_775(-686.4227f, 5256.7705f, 75.7882f, 223.4715f, 0);
					func_877(-696.7804f, 5312.5044f, 69.2695f, 275.3851f, 0);
					func_771(Local_50, fLocal_139, 0);
					func_732(Local_51, fLocal_140, 0);
					SYSTEM::WAIT(0);
				}
				func_731();
				func_730();
			}
			while ((((!func_667(Local_62, fLocal_146) || !ENTITY::DOES_ENTITY_EXIST(Local_291.f_0)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_164[0])) || !Local_270[0 /*21*/].f_3) || !bLocal_69)
			{
				func_659();
				func_869(Local_54, fLocal_143, 0);
				func_658();
				SYSTEM::WAIT(0);
			}
			if (Global_96890)
			{
				func_50(PLAYER::PLAYER_PED_ID(), 14, 154, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			else
			{
				func_50(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			__LIB_0__::func_433(0, -1, 0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 10000)
			{
				if (((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && ((!PED::IS_PED_INJURED(uLocal_194[0]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[0])) || PED::IS_PED_INJURED(uLocal_194[0]))) && ((!PED::IS_PED_INJURED(uLocal_194[1]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[1])) || PED::IS_PED_INJURED(uLocal_194[1]))) && ((!PED::IS_PED_INJURED(uLocal_194[2]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_194[2])) || PED::IS_PED_INJURED(uLocal_194[2])))
				{
					SYSTEM::SETTIMERA(100000);
				}
				SYSTEM::WAIT(0);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			__LIB_39__::func_59(1);
			func_655(1);
			func_867();
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			bLocal_70 = false;
			iLocal_101 = 0;
			iLocal_184 = 0;
		}
	}
	if (iLocal_184 == 0)
	{
		bLocal_71 = false;
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 5f, 4);
		AUDIO::TRIGGER_MUSIC_EVENT("FRA2_HEAD_TO_POS");
		MISC::SET_INSTANCE_PRIORITY_HINT(1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_STEALTH"))
		{
			AUDIO::START_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_STEALTH");
		}
		if (Global_96890)
		{
			func_653();
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_291.f_0, false);
		}
		func_876();
		func_595();
		func_597(1, "ATTACK_SAWMILL", 0, 0, 0, 1);
		func_868();
		if (!PED::IS_PED_INJURED(uLocal_194[1]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_194[1], true, 1);
		}
		if (!PED::IS_PED_INJURED(uLocal_194[0]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_194[0], true, 1);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (Global_96890)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -706.1613f, 5313.144f, 70.0483f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 284.2023f);
				if (!PED::IS_PED_INJURED(uLocal_194[1]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_194[1], -707.5012f, 5310.943f, 70.3263f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uLocal_194[1], 285.2878f);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			SYSTEM::WAIT(500);
			__LIB_16__::func_11();
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_291.f_0, true);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_GET_TO_SAWMILL"))
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_GET_TO_SAWMILL");
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		SYSTEM::SETTIMERB(0);
		iLocal_185 = 2;
		iLocal_96 = 0;
		iLocal_101 = 0;
		iLocal_184 = 1;
	}
	if (iLocal_184 == 1)
	{
		func_659();
		func_864();
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_151);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_153);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_152);
		if (bLocal_70)
		{
			if (Global_96890)
			{
				func_828();
			}
			if (!PED::IS_PED_INJURED(uLocal_194[0]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_194[0], true)) > 25f)
				{
					if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uLocal_194[0], true), 2f) && !CAM::IS_SPHERE_VISIBLE(Local_60, 2f))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_194[0], Local_60, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(uLocal_194[0], fLocal_145);
					}
				}
			}
			if (iLocal_101 == 0)
			{
				iLocal_96 = 1;
			}
			iLocal_184 = 2;
		}
		else
		{
			if (!Global_96890)
			{
				if (!iLocal_100[17])
				{
					if (!__LIB_13__::func_755(&Local_238, 1))
					{
						if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_ALONE", 7, 0, 0, 0))
						{
							iLocal_100[17] = 1;
						}
					}
				}
				else if (!iLocal_100[2])
				{
					if (!__LIB_13__::func_755(&Local_238, 2))
					{
						__LIB_0__::func_229("FRAN2_FIND", 7500, 0);
						iLocal_100[2] = 1;
					}
				}
			}
			else
			{
				switch (iLocal_101)
				{
					case 0:
						if (!HUD::DOES_BLIP_EXIST(iLocal_158))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
							{
								iLocal_158 = __LIB_0__::func_639(Local_291.f_0, 0, 0);
								HUD::SET_BLIP_COLOUR(iLocal_158, 5);
								HUD::SET_BLIP_BRIGHT(iLocal_158, false);
							}
							else
							{
								iLocal_158 = __LIB_0__::func_488(Local_59, 0);
							}
						}
						else
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
							{
								if (!__LIB_0__::func_490(HUD::GET_BLIP_COORDS(iLocal_158), Local_59, 0.1f, 0))
								{
									HUD::REMOVE_BLIP(&iLocal_158);
								}
								bVar1 = true;
							}
							else
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
								{
									__LIB_28__::func_229();
									HUD::SET_BLIP_ALPHA(iLocal_158, 0);
								}
								else
								{
									HUD::SET_BLIP_ALPHA(iLocal_158, 255);
								}
								bVar1 = true;
							}
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_59, Global_19, bVar1, true, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false)))
							{
								Local_64 = { Local_59 };
								bVar0 = true;
							}
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_159))
						{
							iLocal_159 = __LIB_0__::func_488(Local_57, 0);
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_57, Global_19, true, true, 0))
						{
							Local_64 = { Local_57 };
							bVar0 = true;
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_160))
						{
							iLocal_160 = __LIB_0__::func_488(Local_58, 0);
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_58, Global_19, true, true, 0))
						{
							Local_64 = { Local_58 };
							bVar0 = true;
						}
						if (bVar0 || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							__LIB_1__::func_33(0);
							if (!iLocal_100[51])
							{
								if (__LIB_0__::func_490(Local_64, Local_58, 1056964608, 0))
								{
									StringCopy(&Var2, "LM2_PICK3", 16);
								}
								else if (__LIB_0__::func_490(Local_64, Local_57, 1056964608, 0))
								{
									StringCopy(&Var2, "LM2_PICK1", 16);
								}
								else
								{
									StringCopy(&Var2, "LM2_PICK2", 16);
								}
								if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
									}
									else
									{
										__LIB_0__::func_190("FRAN2_SIGHELP2");
									}
								}
								else if (__LIB_17__::func_506(&Local_294, "LEM2AUD", &Var2, 7, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 3f, 4);
									iLocal_100[51] = 1;
								}
								else
								{
									__LIB_0__::func_638();
								}
							}
							else
							{
								HUD::CLEAR_HELP(true);
								CAM::DESTROY_ALL_CAMS(false);
								func_593();
								__LIB_0__::func_497(369, 1, 0);
								__LIB_28__::func_245(&uLocal_194, 1);
								Local_299.f_12 = uLocal_194[uLocal_194.f_7];
								iLocal_103 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
								if (!PED::IS_PED_INJURED(uLocal_194[uLocal_194.f_7]))
								{
									if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
									{
										Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(uLocal_194[uLocal_194.f_7]) };
										STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(uLocal_194[uLocal_194.f_7], true), __LIB_3__::func_80(Var3), 50f, 2);
									}
								}
								iLocal_101++;
							}
						}
						else
						{
							if (__LIB_0__::func_1("FRAN2_SIGHELP2"))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!iLocal_100[18])
							{
								if (!__LIB_13__::func_755(&Local_238, 2))
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_WHERE", 7, 0, 0, 0))
									{
										iLocal_100[18] = 1;
									}
								}
							}
							else if (!iLocal_100[1])
							{
								if (!__LIB_13__::func_755(&Local_238, 2))
								{
									__LIB_0__::func_229("FRAN2_GETP", 7500, 0);
									iLocal_100[1] = 1;
									iLocal_114 = MISC::GET_GAME_TIMER();
								}
							}
							else if (!iLocal_100[70])
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_114) > 4000)
								{
									if (!__LIB_13__::func_755(&Local_238, 2))
									{
										if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_MPATH", 7, 0, 0, 0))
										{
											iLocal_100[70] = 1;
										}
									}
									if (!iLocal_100[8])
									{
										__LIB_0__::func_151("FRAN2_POSHELP", -1);
										iLocal_100[8] = 1;
									}
								}
							}
							else if (!iLocal_100[61])
							{
								if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_NOCLOSE", 7, 0, 0, 0))
								{
									iLocal_100[61] = 1;
								}
							}
						}
						func_818(&(uLocal_194[1]), &(Local_264.f_6));
						break;
					case 1:
						if (!__LIB_17__::func_671(&Local_299, 3, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							iLocal_101++;
						}
						else
						{
							if (Local_299.f_18)
							{
								if (!Local_299.f_19)
								{
									if (func_203(&uLocal_194, 1, 1, 0))
									{
										if (!PED::IS_PED_INJURED(uLocal_194[uLocal_194.f_5]))
										{
											if (iLocal_103 < 110)
											{
												iLocal_103 = 110;
											}
											PED::SET_PED_CAN_BE_TARGETTED(uLocal_194[uLocal_194.f_5], false);
											PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_194[uLocal_194.f_5], false);
											PED::SET_PED_DIES_WHEN_INJURED(uLocal_194[uLocal_194.f_5], true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_194[uLocal_194.f_5], joaat("PLAYER"));
											__LIB_28__::func_241(&(uLocal_194[uLocal_194.f_5]), 5, 1, 2, 1, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 12, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 29, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 36, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_194[uLocal_194.f_5], 35, true);
											PED::SET_PED_CONFIG_FLAG(uLocal_194[uLocal_194.f_5], 118, false);
											PED::SET_PED_CONFIG_FLAG(uLocal_194[uLocal_194.f_5], 185, true);
											PED::SET_PED_CONFIG_FLAG(uLocal_194[uLocal_194.f_5], 188, true);
											ENTITY::SET_ENTITY_PROOFS(uLocal_194[uLocal_194.f_5], false, true, false, false, false, false, false, false);
											ENTITY::SET_ENTITY_HEALTH(uLocal_194[uLocal_194.f_5], iLocal_103, 0);
											__LIB_17__::func_479(uLocal_194[uLocal_194.f_5], 1800);
											PED::SET_PED_USING_ACTION_MODE(uLocal_194[uLocal_194.f_5], true, -1, 0);
											PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_194[uLocal_194.f_5], 33497);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_194[uLocal_194.f_5], true);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_194[uLocal_194.f_5], true, 1);
											if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_194[uLocal_194.f_5], joaat("WEAPON_CARBINERIFLE"), false))
											{
												WEAPON::SET_CURRENT_PED_WEAPON(uLocal_194[uLocal_194.f_5], joaat("WEAPON_CARBINERIFLE"), true);
												if (WEAPON::GET_AMMO_IN_PED_WEAPON(uLocal_194[uLocal_194.f_5], joaat("WEAPON_CARBINERIFLE")) < 50)
												{
													WEAPON::ADD_AMMO_TO_PED(uLocal_194[uLocal_194.f_5], joaat("WEAPON_CARBINERIFLE"), 50);
												}
											}
										}
										if (!PED::IS_PED_INJURED(uLocal_194[0]))
										{
											ENTITY::SET_ENTITY_COORDS(uLocal_194[0], Local_60, true, true, false, true);
											PED::SET_PED_STEALTH_MOVEMENT(uLocal_194[0], false, 0);
										}
										MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f, 0);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
										PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
										PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 33497);
										func_199();
										func_868();
										iLocal_185 = uLocal_194.f_7;
										Local_299.f_19 = 1;
									}
								}
							}
							if (iLocal_185 != 1)
							{
								Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								fVar5 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
								fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_55.f_0 - Var4.f_0), (Local_55.f_1 - Var4.f_1));
								fVar7 = MISC::ABSF((fVar6 - fVar5));
								if (fVar7 > 180f)
								{
									fVar7 = MISC::ABSF((fVar7 - 360f));
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD")) != 1 && fVar7 > 20f)
								{
									TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), Local_55, 0);
								}
							}
						}
						break;
					case 2:
						if (!HUD::DOES_BLIP_EXIST(iLocal_158))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_291.f_0, -1, false))
							{
								iLocal_158 = __LIB_0__::func_639(Local_291.f_0, 0, 0);
								HUD::SET_BLIP_COLOUR(iLocal_158, 5);
								HUD::SET_BLIP_BRIGHT(iLocal_158, false);
							}
							else
							{
								iLocal_158 = __LIB_0__::func_488(Local_59, 0);
							}
						}
						else
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_291.f_0, -1, false))
							{
								HUD::SET_BLIP_ALPHA(iLocal_158, 255);
								bVar8 = true;
							}
							else
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false))
								{
									__LIB_28__::func_229();
									HUD::SET_BLIP_ALPHA(iLocal_158, 0);
								}
								else if (!__LIB_0__::func_490(HUD::GET_BLIP_COORDS(iLocal_158), Local_59, 0.1f, 0))
								{
									HUD::REMOVE_BLIP(&iLocal_158);
								}
								bVar8 = true;
							}
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_59, Global_19, bVar8, true, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_291.f_0, false)))
							{
								bVar0 = true;
							}
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_159))
						{
							iLocal_159 = __LIB_0__::func_488(Local_57, 0);
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_57, Global_19, true, true, 0))
						{
							bVar0 = true;
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_160))
						{
							iLocal_160 = __LIB_0__::func_488(Local_58, 0);
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_58, Global_19, true, true, 0))
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							__LIB_1__::func_33(0);
							if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
							{
								HUD::CLEAR_HELP(true);
								func_593();
								func_871();
								AUDIO::TRIGGER_MUSIC_EVENT("FRA2_IN_POSITION");
								iLocal_131 = MISC::GET_GAME_TIMER();
								iLocal_101++;
							}
							else
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									__LIB_0__::func_190("FRAN2_SIGHELP");
								}
								if (!iLocal_100[57])
								{
									if (!__LIB_13__::func_755(&Local_238, 1))
									{
										if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_PREBANG", 7, 0, 0, 0))
										{
											iLocal_100[57] = 1;
										}
									}
								}
							}
						}
						else
						{
							if (__LIB_0__::func_1("FRAN2_SIGHELP"))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!__LIB_13__::func_755(&Local_238, 1))
							{
								if (!iLocal_100[52])
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_FRANPICK", 7, 0, 0, 0))
									{
										iLocal_100[52] = 1;
									}
								}
								else if (!iLocal_100[53])
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_MIKEBANG", 7, 0, 0, 0))
									{
										iLocal_100[53] = 1;
									}
								}
								else if (!iLocal_100[54])
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_MIXT", 7, 0, 0, 0))
									{
										iLocal_100[54] = 1;
									}
								}
								else if (!iLocal_100[55])
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_MIXF", 7, 0, 0, 0))
									{
										iLocal_100[55] = 1;
									}
								}
								else if (!iLocal_100[56])
								{
									if (!PED::IS_PED_INJURED(uLocal_194[2]))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 400f)
										{
											if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_TREVSAME", 7, 0, 0, 0))
											{
												iLocal_100[56] = 1;
											}
										}
									}
								}
							}
						}
						if (!PED::IS_PED_INJURED(uLocal_194[2]))
						{
							if (__LIB_0__::func_490(Local_64, Local_59, 1056964608, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
								{
									if (!PED::IS_PED_IN_VEHICLE(uLocal_194[2], Local_291.f_0, false) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_194[2], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(uLocal_194[2], Local_291.f_0, -1, -1, 2f, 1, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_194[2], true);
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_291.f_0, true);
									}
								}
							}
							else
							{
								Var9 = { ENTITY::GET_ENTITY_COORDS(uLocal_194[2], true) };
								fVar10 = ENTITY::GET_ENTITY_HEADING(uLocal_194[2]);
								fVar11 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_55.f_0 - Var9.f_0), (Local_55.f_1 - Var9.f_1));
								fVar12 = MISC::ABSF((fVar11 - fVar10));
								if (fVar12 > 180f)
								{
									fVar12 = MISC::ABSF((fVar12 - 360f));
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_194[2], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD")) != 1 && fVar12 > 20f)
								{
									TASK::TASK_TURN_PED_TO_FACE_COORD(uLocal_194[2], Local_55, 0);
								}
							}
						}
						func_818(&(uLocal_194[2]), &(Local_258.f_6));
						break;
					case 3:
						if (!iLocal_100[58])
						{
							if (!__LIB_13__::func_755(&Local_238, 1))
							{
								if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "lm2_bang", 7, 0, 0, 0))
								{
									iLocal_131 = MISC::GET_GAME_TIMER();
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
									iLocal_100[58] = 1;
								}
							}
						}
						else
						{
							if (Global_96890)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_131) > 800)
								{
									func_828();
									func_817();
									func_861();
								}
								func_827();
							}
							if (!iLocal_100[60])
							{
								if (!__LIB_13__::func_755(&Local_238, 1))
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_MATT", 7, 0, 0, 0))
									{
										iLocal_100[60] = 1;
									}
								}
							}
							else if (!iLocal_100[59])
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_484(1), true), ENTITY::GET_ENTITY_COORDS(func_484(2), true)) < 625f)
								{
									if (!__LIB_13__::func_755(&Local_238, 1))
									{
										if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "lm2_bul", 7, 0, 0, 0))
										{
											iLocal_100[59] = 1;
										}
									}
								}
								else if (!__LIB_13__::func_755(&Local_238, 1))
								{
									if (__LIB_17__::func_506(&Local_294, "LEM2AUD", "LM2_TREVBANG", 7, 0, 0, 0))
									{
										iLocal_100[59] = 1;
									}
								}
							}
							else if (!iLocal_100[2])
							{
								if (!__LIB_13__::func_755(&Local_238, 2))
								{
									__LIB_0__::func_229("FRAN2_FIND", 7500, 0);
									iLocal_100[2] = 1;
								}
							}
						}
						break;
					}
			}
			fVar13 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_55);
			if (fVar13 > 90000f)
			{
				func_481(7);
			}
			else if (fVar13 > 50625f)
			{
				if (!iLocal_100[72])
				{
					if (!__LIB_13__::func_755(&Local_238, 2))
					{
						__LIB_0__::func_229("FRAN2_RETSAW", 7500, 0);
						iLocal_100[72] = 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_194[0]))
		{
			Local_261.f_11 = { Local_60 };
			if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), false))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_194[0], &iVar14, true);
				if (iVar14 != joaat("WEAPON_HEAVYSNIPER"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), false);
				}
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER")) < 5)
				{
					WEAPON::ADD_AMMO_TO_PED(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), 5);
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_194[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_194[0], true), Local_60) > 4f)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar15);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_60, 2f, -1, 0.5f, 0, 40000f);
				TASK::TASK_AIM_GUN_AT_COORD(0, -573.5f, 5257.8f, 71.7f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar15);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_194[0], iVar15);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_194[0], true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar15);
				PED::SET_PED_STEALTH_MOVEMENT(uLocal_194[0], true, 0);
			}
			func_818(&(uLocal_194[0]), &(Local_261.f_6));
		}
	}
	if (iLocal_184 == 2)
	{
		func_593();
		HUD::CLEAR_HELP(true);
		STREAMING::NEW_LOAD_SCENE_STOP();
		if (!PED::IS_PED_INJURED(uLocal_194[0]))
		{
			if ((ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(uLocal_194[0]), Local_60, false) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_60) > 22500f) && (ENTITY::IS_ENTITY_OCCLUDED(uLocal_194[0]) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_194[0], true)) > 22500f))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_194[0], Local_60, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uLocal_194[0], fLocal_145);
			}
		}
		__LIB_0__::func_638();
		iLocal_183 = 4;
		iLocal_184 = 0;
	}
	if (iLocal_184 == 3)
	{
		func_479(4, 0);
	}
}

void func_876()//Position - 0x9DE7F
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_100;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_100[iVar1] = 0;
		iVar1++;
	}
}

int func_877(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x9DEA8
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_194[1]))
	{
		__LIB_17__::func_319(1);
		if (__LIB_17__::func_318(1))
		{
			if (bParam2)
			{
				return 1;
			}
			else if (func_272(&(uLocal_194[1]), 1, Param0, fParam1, 1, 0, 0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_194[1], false);
				PED::SET_PED_MAX_HEALTH(uLocal_194[1], 1800);
				ENTITY::SET_ENTITY_HEALTH(uLocal_194[1], 1800, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_194[1], false);
				PED::SET_PED_CONFIG_FLAG(uLocal_194[1], 118, false);
				PED::SET_PED_CONFIG_FLAG(uLocal_194[1], 174, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_194[1], 188, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_194[1], true);
				Local_264.f_3 = 0;
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_194[1], joaat("WEAPON_CARBINERIFLE"), 500, true, true);
				__LIB_0__::func_222(&Local_294, 1, uLocal_194[1], "FRANKLIN", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_194[1], joaat("PLAYER"));
				func_50(uLocal_194[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
		}
	}
	else
	{
		if (Local_294[1 /*10*/] != uLocal_194[1])
		{
			__LIB_0__::func_222(&Local_294, 1, uLocal_194[1], "FRANKLIN", 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_878()//Position - 0x9DFD6
{
	if (__LIB_17__::func_341() != 2)
	{
		func_200(2, 1);
		func_199();
	}
	else
	{
		func_199();
		return 1;
	}
	return 0;
}

void func_879()//Position - 0x9DFFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_184 == 4)
	{
		if (func_198())
		{
			if (bLocal_68)
			{
				__LIB_0__::func_427(Local_49, 204.959f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_49, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 204.959f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			SYSTEM::SETTIMERA(0);
			func_776();
			while (((!ENTITY::DOES_ENTITY_EXIST(Local_291.f_0) || !ENTITY::DOES_ENTITY_EXIST(iLocal_164[0])) || !Local_270[0 /*21*/].f_3) || !bLocal_69)
			{
				func_659();
				func_869(Local_54, fLocal_143, 0);
				func_658();
				SYSTEM::WAIT(0);
			}
			if (Global_96890)
			{
				while (((!ENTITY::DOES_ENTITY_EXIST(uLocal_194[0]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_194[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_169)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_170))
				{
					func_775(Local_52, fLocal_141, 0);
					func_772(Local_53, fLocal_142, 0);
					func_771(Local_50, fLocal_139, 0);
					func_732(Local_51, fLocal_140, 0);
					SYSTEM::WAIT(0);
				}
			}
			__LIB_0__::func_433(0, -1, 0);
			func_867();
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			bLocal_70 = false;
			iLocal_101 = 0;
			iLocal_184 = 0;
		}
	}
	if (iLocal_184 == 0)
	{
		CUTSCENE::REQUEST_CUTSCENE("FRA_2_IG_4_ALT1_concat", 8);
		func_178("FRA_2_IG_4_ALT1_concat");
		func_776();
		__LIB_16__::func_309(1, 0);
		__LIB_15__::func_988();
		func_892(1);
		if ((!__LIB_13__::func_755(&Local_238, 1) && func_892(1)) && __LIB_0__::func_90())
		{
			if (__LIB_17__::func_341() != 2)
			{
				__LIB_28__::func_245(&uLocal_194, 2);
				func_203(&uLocal_194, 1, 0, 0);
				func_199();
			}
			if (!PED::IS_PED_INJURED(uLocal_194[1]))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_194[1]);
				STREAMING::SET_FOCUS_ENTITY(uLocal_194[1]);
			}
			if (!PED::IS_PED_INJURED(uLocal_194[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_194[0], "Michael", 0, 0, 0);
				if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), 100, false, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), true);
				iLocal_163 = __LIB_17__::func_616(uLocal_194[0], joaat("WEAPON_HEAVYSNIPER"), 1, 0, 0, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_163, "Michaels_weapon", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_194[2]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_194[2], "Trevor", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_194[1]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_194[1], "Franklin", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_169, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_169, "Michaels_car", 0, 0, 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Michaels_car", 3, __LIB_13__::func_741(0, 0), 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_170, "Trevors_car", 0, 0, 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevors_car", 3, __LIB_13__::func_741(2, 0), 0);
			}
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_101 = 0;
			iLocal_67 = 0;
			iLocal_184 = 1;
		}
	}
	if (iLocal_184 == 1)
	{
		func_659();
		switch (iLocal_101)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 10000f && iVar0 != iLocal_169) && iVar0 != iLocal_170)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -707.73724f, 5325.1636f, 74.4733f, -715.0993f, 5299.242f, 68.70159f, 45f, false, true, 0))
							{
								ENTITY::SET_ENTITY_HEADING(iVar0, 261.1234f);
								ENTITY::SET_ENTITY_COORDS(iVar0, -732.8705f, 5317.547f, 71.9049f, true, false, false, true);
							}
							AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, false, false);
							func_888(iVar0);
							iLocal_172 = iVar0;
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_172, true, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_169, false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_169, 1000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_169, 1000f);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_170, false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_170, 1000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_170, 1000f);
					}
					__LIB_17__::func_621(-707.73724f, 5325.1636f, 74.4733f, -715.0993f, 5299.242f, 68.70159f, 45f, -732.8705f, 5317.547f, 71.9049f, 261.1234f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
					__LIB_39__::func_59(1);
					func_655(1);
					MISC::CLEAR_AREA_OF_PEDS(Local_49, 5000f, 0);
					MISC::CLEAR_AREA_OF_OBJECTS(Local_49, 5000f, 0);
					MISC::CLEAR_AREA_OF_COPS(Local_49, 5000f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_49, 5000f, 0);
					AUDIO::STOP_AUDIO_SCENES();
					if (!PED::IS_PED_INJURED(uLocal_194[1]))
					{
						func_50(uLocal_194[1], 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					func_892(0);
					__LIB_16__::func_11();
					iLocal_101++;
				}
				else if (!PED::IS_PED_INJURED(uLocal_194[1]))
				{
					CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_194[1]);
				}
				break;
			case 1:
				if (CUTSCENE::GET_CUTSCENE_TIME() > 28000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FRA2_START");
					iLocal_101++;
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_165[0]))
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 43000)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < iLocal_165)
				{
					__LIB_16__::func_13(&(iLocal_165[iVar1]), 1);
					iVar1++;
				}
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
			iLocal_184 = 2;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 46000)
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
		}
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_184 = 3;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			if (!PED::IS_PED_INJURED(uLocal_194[0]))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_194[0], -686.4227f, 5256.7705f, 75.7882f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uLocal_194[0], 223.4715f);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
			STREAMING::CLEAR_FOCUS();
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5500, -87.7f, false, false);
			}
			else
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3500, -87.7f, false, false);
			}
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 1, false);
			func_595();
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
		{
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
		{
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_163, func_484(0));
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			RECORDING::REPLAY_STOP_EVENT();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	if (iLocal_184 == 2)
	{
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
		bLocal_70 = false;
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iLocal_165)
		{
			__LIB_16__::func_13(&(iLocal_165[iVar2]), 1);
			iVar2++;
		}
		STREAMING::CLEAR_FOCUS();
		iLocal_183 = 3;
		iLocal_184 = 0;
	}
	if (iLocal_184 == 3)
	{
		__LIB_17__::func_737();
		CUTSCENE::STOP_CUTSCENE(false);
		iLocal_67 = 1;
		iLocal_184 = 1;
	}
}

void func_888(int iParam0)//Position - 0x9F05E
{
	func_602(&(Global_106934.f_2890), &Global_106934, iParam0, 1);
}

int func_892(bool bParam0)//Position - 0x9F40D
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_165[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_182);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_182))
		{
			if (bParam0)
			{
				return 1;
			}
			else
			{
				iLocal_165[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_182, -597.299f, 5313.809f, 69.2413f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_165[0], 0f, 0f, 33.48f, 2, true);
				iLocal_165[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_182, -594.849f, 5314.079f, 69.2413f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_165[1], 0f, 0f, 42.84f, 2, true);
				iLocal_165[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_182, -595.739f, 5312.149f, 69.2413f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_165[2], 0f, 0f, 5.4f, 2, true);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iLocal_165)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_165[iVar0], true);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_165[iVar0]) == iLocal_182)
					{
						ENTITY::SET_ENTITY_LOD_DIST(iLocal_165[iVar0], 200);
					}
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_182);
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

void func_894()//Position - 0x9F5AA
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if (iLocal_184 == 4)
	{
		if (func_198())
		{
			if (bLocal_68)
			{
				__LIB_0__::func_427(8.2263f, 535.3607f, 175.0279f, 2.8314f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 8.2263f, 535.3607f, 175.0279f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 2.8314f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			SYSTEM::SETTIMERA(0);
			__LIB_0__::func_433(0, -1, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f, true, true, false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			iLocal_101 = 0;
			iLocal_184 = 0;
		}
	}
	if (iLocal_184 == 0)
	{
		func_776();
		iLocal_88 = 0;
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			__LIB_0__::func_342(5);
			__LIB_0__::func_342(4);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			SYSTEM::WAIT(500);
			__LIB_16__::func_11();
		}
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		func_867();
		SYSTEM::SETTIMERB(0);
		iLocal_101 = 0;
		iLocal_184 = 1;
	}
	if (iLocal_184 == 1)
	{
		fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_49);
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -484.7f, 5276.6f, 87.5f);
		bVar2 = true;
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (fVar0 < 2500f)
			{
				bVar2 = false;
				if ((MISC::GET_GAME_TIMER() - iLocal_135) > 1500)
				{
					func_481(8);
				}
			}
		}
		else
		{
			iLocal_135 = MISC::GET_GAME_TIMER();
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		switch (iLocal_101)
		{
			case 0:
				__LIB_28__::func_247(&Local_238, Local_49, 0.001f, 0.001f, 2f, 1, "FRAN2_GOSAW", bVar2, 1, -1);
				if (HUD::DOES_BLIP_EXIST(Local_238.f_5))
				{
					if (((!ENTITY::IS_ENTITY_DEAD(iVar3, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -704.7422f, 5313.341f, 74.917175f, -733.02167f, 5316.371f, 69.17234f, 37f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_AIR(iVar3)) || (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -711.7355f, 5310.284f, 75.79887f, -730.60895f, 5311.804f, 69.0042f, 27.5f, false, true, 0)))
					{
						__LIB_16__::func_318(&Local_238, 1, 0);
						__LIB_0__::func_638();
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							__LIB_0__::func_366(0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iVar3, false) && VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar3)))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
						}
						iLocal_101++;
					}
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_100[71])
					{
						if (!__LIB_13__::func_755(&Local_238, 1))
						{
							__LIB_0__::func_222(&Local_294, 8, 0, "LESTER", 0, 1);
							if (__LIB_17__::func_508(&Local_294, 12, "LEM2AUD", "LM2_PHNL", 11, 1, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
								iLocal_100[71] = 1;
							}
						}
					}
				}
				break;
			case 1:
				if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
					if (__LIB_0__::func_213(iVar3, 10.5f, 1, 1056964608, 0, 1, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
						bVar4 = true;
					}
				}
				else
				{
					bVar4 = true;
				}
				if (__LIB_0__::func_568())
				{
					__LIB_0__::func_620(0);
				}
				if (bVar4)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
					iLocal_184 = 2;
				}
				break;
		}
		if (bLocal_70)
		{
			iLocal_184 = 2;
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_GET_TO_SAWMILL"))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::START_AUDIO_SCENE("FRANKLIN_2_GET_TO_SAWMILL");
			}
		}
		if (!bLocal_89)
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
				{
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar5)))
					{
						__LIB_0__::func_497(370, 0, 0);
					}
					else if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar5)))
					{
						__LIB_0__::func_497(370, 1, 0);
					}
					else
					{
						__LIB_0__::func_497(370, 2, 0);
					}
				}
				else
				{
					__LIB_0__::func_497(370, 2, 0);
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
				bLocal_89 = true;
			}
		}
		if (fVar0 < 40000f || fVar1 < 90000f)
		{
			func_659();
			if (ENTITY::DOES_ENTITY_EXIST(Local_270[0 /*21*/]))
			{
				func_869(Local_54, fLocal_143, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_291.f_0))
			{
				func_658();
			}
			if (Global_96890)
			{
				func_775(Local_52, fLocal_141, 0);
				func_772(Local_53, fLocal_142, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_194[0]))
				{
					func_771(Local_50, fLocal_139, 0);
					func_732(Local_51, fLocal_140, 0);
				}
			}
		}
		else if (fVar0 > 62500f && fVar1 > 1600000f)
		{
			if (Global_96890)
			{
				func_43(&(uLocal_194[0]), 1);
				func_43(&(uLocal_194[2]), 1);
				__LIB_28__::func_239(&iLocal_169, 1);
				__LIB_28__::func_239(&iLocal_170, 1);
			}
		}
		if (Global_96890)
		{
			if (fVar0 < (100f * 100f))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_194[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_194[2]))
				{
					CUTSCENE::REQUEST_CUTSCENE("FRA_2_IG_4_ALT1_concat", 8);
					func_178("FRA_2_IG_4_ALT1_concat");
				}
			}
			else if (fVar0 > (150f * 150f))
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_238.f_5))
		{
			if (!iLocal_88)
			{
				__LIB_16__::func_17(&(Local_238.f_5), -745.3523f, 5320.2935f, 72.6167f, 257.6477f);
				iLocal_88 = 1;
			}
		}
		else
		{
			iLocal_88 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_291.f_0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_291.f_0, false))
			{
				func_481(6);
			}
		}
	}
	if (iLocal_184 == 2)
	{
		__LIB_16__::func_318(&Local_238, 1, 0);
		func_593();
		HUD::CLEAR_HELP(true);
		if (!bLocal_89)
		{
			__LIB_0__::func_497(370, 2, 0);
		}
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 4);
		if (Global_96890 && !bLocal_70)
		{
			iLocal_183 = 2;
		}
		else
		{
			iLocal_183 = 3;
		}
		iLocal_184 = 0;
	}
	if (iLocal_184 == 3)
	{
		func_479(2, 0);
	}
}

void func_899()//Position - 0x9FCD4
{
	if (iLocal_184 == 4)
	{
		if (func_198())
		{
			if (bLocal_68)
			{
				__LIB_0__::func_427(8.2263f, 535.3607f, 175.0279f, 2.8314f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 8.2263f, 535.3607f, 175.0279f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 2.8314f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			SYSTEM::SETTIMERA(0);
			__LIB_0__::func_433(0, -1, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			iLocal_101 = 0;
			iLocal_184 = 0;
		}
	}
	if (iLocal_184 == 0)
	{
		CUTSCENE::REQUEST_CUTSCENE("FRA_2_INT", 8);
		func_178("FRA_2_INT");
		__LIB_16__::func_309(1, 0);
		if (__LIB_0__::func_90())
		{
			iLocal_166 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(7.5184f, 539.5269f, 176.1776f, 2f, joaat("v_ilev_fh_frontdoor"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_166, "Franklins_Door", 0, 0, 1024);
			}
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_101 = 0;
			iLocal_67 = 0;
			iLocal_184 = 1;
		}
	}
	if (iLocal_184 == 1)
	{
		switch (iLocal_101)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (__LIB_14__::func_742(0f, 0f, 0f, 1))
					{
						func_901(3.1501f, 543.9788f, 173.728f, 124.6853f, 0, 145);
					}
					__LIB_17__::func_621(8.178145f, 549.36597f, 169.81557f, 18.647863f, 526.653f, 179.86429f, 29f, 3.1501f, 543.9788f, 173.728f, 124.6853f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					__LIB_0__::func_468(42);
					__LIB_16__::func_11();
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fh_frontdoor"), 7.5184f, 539.5269f, 176.1776f, true, 0.1f, false);
					MISC::CLEAR_AREA_OF_PEDS(0f, 0f, 0f, 5000f, 0);
					MISC::CLEAR_AREA_OF_OBJECTS(0f, 0f, 0f, 5000f, 0);
					MISC::CLEAR_AREA_OF_COPS(0f, 0f, 0f, 5000f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(0f, 0f, 0f, 5000f, 0);
					iLocal_101++;
				}
				break;
			case 1:
				if (iLocal_67)
				{
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fh_frontdoor"), 7.5184f, 539.5269f, 176.1776f, true, 0f, false);
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fh_frontdoor"), 7.5184f, 539.5269f, 176.1776f, false, 0f, false);
					iLocal_101++;
				}
				break;
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_184 = 2;
		}
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_184 = 3;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			RECORDING::REPLAY_STOP_EVENT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
	if (iLocal_184 == 2)
	{
		if (iLocal_67)
		{
		}
		__LIB_16__::func_13(&iLocal_166, 0);
		__LIB_0__::func_532(0, 0, 1, 0, 0, 0, 0);
		iLocal_183 = 1;
		iLocal_184 = 0;
	}
	if (iLocal_184 == 3)
	{
		__LIB_17__::func_737();
		CUTSCENE::STOP_CUTSCENE(false);
		iLocal_67 = 1;
		iLocal_184 = 1;
	}
}

void func_901(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0xA0011
{
	struct<3> Var0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_103950.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_103950.f_4, false))
		{
			if (__LIB_0__::func_343(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (__LIB_14__::func_665(ENTITY::GET_ENTITY_COORDS(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				__LIB_31__::func_730(Global_103950.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_911()//Position - 0xA061C
{
	int iVar0;
	if (iLocal_184 == 1)
	{
		__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 360);
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if ((!ENTITY::DOES_ENTITY_EXIST(Global_63167) || !ENTITY::IS_ENTITY_A_VEHICLE(Global_63167)) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_63167) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_63167) != iVar0))
				{
					__LIB_0__::func_377(iVar0, 361);
				}
				if ((!ENTITY::DOES_ENTITY_EXIST(Global_63165) || !ENTITY::IS_ENTITY_A_VEHICLE(Global_63165)) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_63165) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_63165) != iVar0))
				{
					__LIB_0__::func_505(iVar0, -1);
				}
			}
		}
		else
		{
			if ((!ENTITY::DOES_ENTITY_EXIST(Global_63167) || !ENTITY::IS_ENTITY_A_PED(Global_63167)) || (ENTITY::IS_ENTITY_A_PED(Global_63167) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_63167) != PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 360);
			}
			if (Global_63165 != 0)
			{
				__LIB_0__::func_505(0, -1);
			}
		}
	}
}

void func_914()//Position - 0xA07A0
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_194[1]) && PED::IS_PED_INJURED(uLocal_194[1]))
	{
		func_481(5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_194[0]) && PED::IS_PED_INJURED(uLocal_194[0]))
	{
		func_481(4);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_194[2]) && PED::IS_PED_INJURED(uLocal_194[2]))
	{
		func_481(3);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_267.f_0) && PED::IS_PED_INJURED(Local_267.f_0))
	{
		func_481(2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_169) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_169, false))
	{
		func_481(9);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_170) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170, false))
	{
		func_481(10);
	}
}

int func_916()//Position - 0xA091C
{
	int iVar0;
	if (__LIB_0__::func_323())
	{
		iVar0 = __LIB_0__::func_344();
		if (Global_94618)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			func_479(1, 0);
		}
		else if (iVar0 == 1)
		{
			func_479(3, 0);
		}
		else if (iVar0 == 2)
		{
			func_479(5, 0);
		}
		else if (iVar0 == 3)
		{
			func_479(6, 0);
		}
		else if (iVar0 > 3)
		{
			func_479(7, 0);
		}
		return 1;
	}
	else
	{
		func_597(0, "MEET_THE_CREW", 0, 0, 0, 1);
	}
	return 0;
}

void func_918()//Position - 0xA09C6
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	HUD::REQUEST_ADDITIONAL_TEXT("FRAN2", 0);
	__LIB_0__::func_222(&Local_294, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	PED::ADD_RELATIONSHIP_GROUP("BALLAS", &iLocal_292);
	PED::ADD_RELATIONSHIP_GROUP("NEUTRAL", &iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_292);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_292, iLocal_292);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_292, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_292, iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_293, iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_293, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_293, iLocal_292);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
	__LIB_0__::func_424(1);
	func_922();
	__LIB_16__::func_1();
	func_594(1);
	func_920(1);
	iLocal_105 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-551.224f, 5323.079f, 70.517f, 25f, 87.3f, 3f, __LIB_12__::func_418(-18.92f), false, 7);
	iLocal_106 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-517.347f, 5276.551f, 77.5f, 52.27f, 4f, 3f, __LIB_12__::func_418(-110.2f), false, 7);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_176, true);
	Global_96890 = 1;
}

void func_920(bool bParam0)//Position - 0xA0B3E
{
	if (bParam0)
	{
		if (iLocal_168[0] == 0)
		{
			iLocal_168[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-970.6f, 5015.2f, 0.8567f, -228.4971f, 5698.299f, 181.8567f, false, true, true, true);
		}
	}
	else if (iLocal_168[0] != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_168[0], false);
		iLocal_168[0] = 0;
	}
}

void func_922()//Position - 0xA0BB5
{
	if (Global_31963 == 0)
	{
		Global_31963 = 1;
	}
}

void func_924()//Position - 0xA0BF4
{
	int iVar0[8];
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		CUTSCENE::STOP_CUTSCENE(false);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_184 == 4)
	{
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (iLocal_99)
	{
		RECORDING::REPLAY_STOP_EVENT();
		iLocal_99 = 0;
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	PED::SET_CREATE_RANDOM_COPS(true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(8, true);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(6, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	__LIB_0__::func_671(0);
	__LIB_0__::func_203(0, 0);
	__LIB_16__::func_18(0);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(true);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
	AUDIO::SET_AGGRESSIVE_HORNS(false);
	VEHICLE::SET_RANDOM_TRAINS(true);
	STREAMING::CLEAR_FOCUS();
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	__LIB_12__::func_849(9, 0);
	__LIB_12__::func_849(8, 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_RADAR_BLIPS(true);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		}
		if (iLocal_184 == 4)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	else if ((((iLocal_183 == 4 || iLocal_183 == 5) || iLocal_183 == 3) || iLocal_183 == 1) || iLocal_183 == 6)
	{
		bVar1 = false;
		if (!PED::IS_PED_INJURED(Local_267.f_0))
		{
			PED::GET_PED_NEARBY_PEDS(Local_267.f_0, &iVar0, -1);
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar0)
		{
			if (!PED::IS_PED_INJURED(iVar0[iVar2]))
			{
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar2]) == iLocal_292)
				{
					bVar1 = true;
				}
			}
			iVar2++;
		}
		if (!PED::IS_PED_INJURED(Local_267.f_0))
		{
			if (!PED::IS_PED_IN_COMBAT(Local_267.f_0, 0) && iLocal_183 >= 5)
			{
				if (bVar1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_267.f_0, 500f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(Local_267.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 200f, -1, false, false);
				}
			}
			PED::SET_PED_KEEP_TASK(Local_267.f_0, true);
		}
		if (!PED::IS_PED_INJURED(uLocal_194[0]))
		{
			if (!PED::IS_PED_IN_COMBAT(uLocal_194[0], 0))
			{
				if (bVar1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_194[0], 500f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(uLocal_194[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 200f, -1, false, false);
				}
				PED::SET_PED_KEEP_TASK(uLocal_194[0], true);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_194[2]))
		{
			if (!PED::IS_PED_IN_COMBAT(uLocal_194[2], 0))
			{
				if (bVar1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_194[2], 500f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(uLocal_194[2], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 200f, -1, false, false);
				}
				PED::SET_PED_KEEP_TASK(uLocal_194[2], true);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_194[1]))
		{
			if (!PED::IS_PED_IN_COMBAT(uLocal_194[1], 0))
			{
				if (bVar1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_194[1], 500f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(uLocal_194[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 200f, -1, false, false);
				}
				PED::SET_PED_KEEP_TASK(uLocal_194[1], true);
			}
		}
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FRA2_FAIL");
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	__LIB_16__::func_318(&Local_238, 1, 0);
	__LIB_0__::func_221(&Local_294, 2);
	__LIB_0__::func_221(&Local_294, 4);
	__LIB_0__::func_221(&Local_294, 5);
	__LIB_0__::func_221(&Local_294, 6);
	__LIB_0__::func_221(&Local_294, 7);
	__LIB_0__::func_221(&Local_294, 8);
	func_936();
	func_593();
	func_935();
	if (iLocal_184 == 4)
	{
		func_934(1);
		func_933(1);
		func_932(1);
	}
	else
	{
		func_934(0);
		func_933(0);
		func_932(0);
	}
	func_931();
	func_654(0);
	__LIB_17__::func_645(&uLocal_194);
	__LIB_15__::func_888(&uLocal_194, 2, 0);
	__LIB_15__::func_888(&uLocal_194, 0, 0);
	__LIB_15__::func_888(&uLocal_194, 1, 0);
	if (iLocal_184 != 4)
	{
		__LIB_0__::func_424(0);
		__LIB_15__::func_931();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_176, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_13__::func_741(1, 2), false);
		__LIB_14__::func_804(0);
		func_928();
		__LIB_0__::func_638();
		func_594(0);
		func_920(0);
		if (iLocal_105 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_105);
			iLocal_105 = -1;
		}
		if (iLocal_106 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_106);
			iLocal_106 = -1;
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		func_876();
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, true, false, false, false);
		FIRE::STOP_FIRE_IN_RANGE(0f, 0f, 0f, 10000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(0f, 0f, 0f, 10000f);
		__LIB_0__::func_429();
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		func_525();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_176);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_177);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_178);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_180);
		WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"));
		WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_SMG"));
		WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_151);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_153);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_152);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_154);
		VEHICLE::REMOVE_VEHICLE_RECORDING(10, sLocal_155);
		VEHICLE::REMOVE_VEHICLE_RECORDING(11, sLocal_155);
		VEHICLE::REMOVE_VEHICLE_RECORDING(12, sLocal_155);
		if (iLocal_183 < 4)
		{
			__LIB_14__::func_804(0);
			__LIB_13__::func_824(39, 1);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < iLocal_167)
		{
			if (OBJECT::DOES_PICKUP_EXIST(iLocal_167[iVar3]))
			{
				OBJECT::REMOVE_PICKUP(iLocal_167[iVar3]);
			}
			iVar3++;
		}
	}
}

void func_928()//Position - 0xA12FA
{
	if (Global_31963 == 1)
	{
		Global_31963 = 0;
	}
}

void func_931()//Position - 0xA134C
{
	STREAMING::REMOVE_ANIM_DICT(sLocal_148);
	STREAMING::REMOVE_ANIM_DICT(sLocal_149);
	STREAMING::REMOVE_ANIM_DICT(sLocal_156);
}

void func_932(bool bParam0)//Position - 0xA1369
{
	func_522(bParam0);
	__LIB_28__::func_239(&iLocal_171, bParam0);
	__LIB_28__::func_239(&iLocal_169, bParam0);
	__LIB_28__::func_239(&iLocal_170, bParam0);
	__LIB_28__::func_239(&iLocal_172, bParam0);
}

void func_933(bool bParam0)//Position - 0xA139B
{
	func_43(&(uLocal_194[0]), bParam0);
	func_43(&(uLocal_194[1]), bParam0);
	func_43(&(uLocal_194[2]), bParam0);
	func_43(&Local_267, bParam0);
	func_523(bParam0);
}

void func_934(bool bParam0)//Position - 0xA13D6
{
	__LIB_16__::func_13(&iLocal_163, bParam0);
	__LIB_16__::func_13(&iLocal_166, 0);
	func_520(bParam0);
}

void func_935()//Position - 0xA13F5
{
	if (CAM::DOES_CAM_EXIST(iLocal_161))
	{
		CAM::DESTROY_CAM(iLocal_161, false);
	}
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

void func_936()//Position - 0xA142B
{
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::STOP_STREAM();
	if (!iLocal_66)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FH2A_MISSION_FAIL");
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
}

void func_939()//Position - 0xA147C
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_511(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_17__::func_505();
		}
	}
}

