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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	struct<10> Local_53[16];
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_69 = 0f;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_71 = 0f;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	int iLocal_74 = 0;
	struct<3> Local_75[200];
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	float fLocal_78 = 0f;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_80 = { 0, 0, 0 } ;
	float fLocal_81 = 0f;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	float fLocal_84 = 0f;
	struct<3> Local_85 = { 0, 0, 0 } ;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97[3] = { 0, 0, 0 };
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	char* sLocal_109 = NULL;
	char[] cLocal_110[8] = 0;
	char* sLocal_111 = NULL;
	int iLocal_112[4] = { 0, 0, 0, 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_116[4];
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = -1;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 1000;
	var uLocal_127 = 1000;
	var uLocal_128 = 0;
	struct<2> Local_129 = { 0, 0 } ;
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
	int iLocal_159 = 0;
	int* iLocal_160 = NULL;
	struct<3> Local_161 = { 0, 0, 0 } ;
	struct<3> Local_162 = { 0, 0, 0 } ;
	int iLocal_163 = 0;
	int* iLocal_164 = NULL;
	int* iLocal_165 = NULL;
	int* iLocal_166 = NULL;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179[5] = { 0, 0, 0, 0, 0 };
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	char* sLocal_187 = NULL;
	char* sLocal_188 = NULL;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	struct<2> Local_192 = { 0, 0 } ;
	struct<2> Local_193 = { 0, 0 } ;
	struct<2> Local_194 = { 0, 0 } ;
	struct<2> Local_195 = { 0, 0 } ;
	struct<2> Local_196 = { 0, 0 } ;
	struct<2> Local_197 = { 0, 0 } ;
	struct<2> Local_198 = { 0, 0 } ;
	struct<2> Local_199 = { 0, 0 } ;
	struct<2> Local_200 = { 0, 0 } ;
	struct<2> Local_201 = { 0, 0 } ;
	struct<2> Local_202 = { 0, 0 } ;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	struct<6> Local_205 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_206 = 0;
	struct<3> Local_207 = { 0, 0, 0 } ;
	struct<3> Local_208 = { 0, 0, 0 } ;
	int iLocal_209 = 0;
	struct<3> Local_210 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	int iLocal_212 = 0;
	struct<2> Local_213[4];
	struct<3> Local_214[8];
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = -1;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 1000;
	var uLocal_227 = 1000;
	var uLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	float fLocal_233 = 0f;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	struct<6> Local_237 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_238 = NULL;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	char[] cLocal_244[8] = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	struct<3> Local_252 = { 0, 0, 0 } ;
	struct<3> Local_253 = { 0, 0, 0 } ;
	float fLocal_254 = 0f;
	struct<3> Local_255 = { 0, 0, 0 } ;
	struct<3> Local_256 = { 0, 0, 0 } ;
	float fLocal_257 = 0f;
	struct<3> Local_258 = { 0, 0, 0 } ;
	struct<3> Local_259 = { 0, 0, 0 } ;
	float fLocal_260 = 0f;
	struct<3> Local_261 = { 0, 0, 0 } ;
	struct<3> Local_262 = { 0, 0, 0 } ;
	float fLocal_263 = 0f;
	float fLocal_264 = 0f;
	struct<3> Local_265 = { 0, 0, 0 } ;
	float fLocal_266 = 0f;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	bool bLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	float fLocal_278 = 0f;
	float fLocal_279 = 0f;
	int iLocal_280[3] = { 0, 0, 0 };
	int iLocal_281 = 0;
	struct<3> Local_282 = { 0, 0, 0 } ;
	struct<3> Local_283 = { 0, 0, 0 } ;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	bool bLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
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
	bLocal_52 = true;
	Local_58 = { -107.54f, -9.03f, 70.67f };
	Local_59 = { 71.4087f, -702.7785f, 31.2297f };
	Local_60 = { -70.5294f, -45.0289f, 62.1148f };
	Local_61 = { 0f, -2.3f, -0.35f };
	Local_62 = { -109.2446f, -8.7791f, 70f };
	Local_63 = { -84.4707f, -22.6341f, 65.3215f };
	Local_64 = { 0f, 0f, 0.7f };
	Local_65 = { 719.09f, -983.13f, 23.14f };
	Local_66 = { 0.08f, 0.07f, -0.005f };
	Local_67 = { 0f, -0.051185f, -20.336971f };
	Local_68 = { 715.2437f, -978.9654f, 23.1143f };
	fLocal_69 = 99.3712f;
	Local_70 = { 709.4145f, -980.8687f, 23.1044f };
	fLocal_71 = 280.8127f;
	Local_72 = { -78.025f, -17.575f, 65.318f };
	Local_73 = { 0f, 0.3f, -18.56f };
	Local_76 = { 111.0968f, -583.676f, 29.400103f };
	Local_77 = { 69.21112f, -698.3458f, 34.402485f };
	fLocal_78 = 27f;
	Local_79 = { 68.085724f, -701.3279f, 30.65333f };
	Local_80 = { 118.56015f, -562.4277f, 38.156513f };
	fLocal_81 = 27f;
	Local_82 = { -66.01379f, -59.915276f, 59.154297f };
	Local_83 = { -48.97403f, 10.519518f, 76.13416f };
	fLocal_84 = 60f;
	Local_85 = { 710.9962f, -979.7601f, 23.1001f };
	fLocal_86 = 223.343f;
	fLocal_87 = 50f;
	fLocal_88 = 340.9176f;
	fLocal_89 = 167.842f;
	fLocal_90 = 69.6488f;
	sLocal_109 = "83QSL722";
	cLocal_110 = "FBS1AUD";
	sLocal_111 = "agencysetup1park2";
	iLocal_113 = joaat("A_M_Y_Business_01");
	iLocal_114 = joaat("stanier");
	Local_115 = { 0f, -2.6829f, 0.0781f };
	Local_161 = { -107.492f, -9.034f, 69.524f };
	Local_162 = { 0f, 0f, -178f };
	sLocal_187 = "ah_1_mcs_1";
	sLocal_188 = "ah_1_int";
	StringCopy(&Local_205, "", 24);
	Local_207 = { Vector(34.627426f, -662.97723f, 62.325294f) + Vector(5f, 91.5f, 49.25f) };
	Local_208 = { Vector(34.627426f, -662.97723f, 62.325294f) - Vector(5f, 91.5f, 49.25f) };
	Local_210 = { -81.1729f, -94.4853f, -160.997f };
	Local_211 = { -34.0891f, 28.3163f, 192.107f };
	iLocal_215 = -1;
	fLocal_233 = 0f;
	iLocal_236 = 15000;
	StringCopy(&Local_237, "", 24);
	Local_252 = { 110.11135f, -584.3711f, 30.352879f };
	Local_253 = { 104.696365f, -567.518f, 35.669853f };
	fLocal_254 = 12f;
	Local_255 = { 124.08223f, -38.153778f, 66.36127f };
	Local_256 = { 100.992325f, -11.908267f, 71.92962f };
	fLocal_257 = 17f;
	Local_258 = { -28.279661f, 32.393726f, 70.74029f };
	Local_259 = { -51.275455f, 24.574474f, 76.14353f };
	fLocal_260 = 17f;
	Local_261 = { 90.54105f, -482.08908f, 33.695477f };
	Local_262 = { -58.22495f, -524.615f, 44.399258f };
	fLocal_263 = 17f;
	fLocal_278 = 0f;
	Local_282 = { -110.732f, -6.756f, 70.538f };
	Local_283 = { 0f, 0f, -105.84f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_756();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
		{
			PED::DELETE_PED(&iLocal_170);
		}
		func_752();
	}
	MISC::SET_MISSION_FLAG(true);
	if (iLocal_48 != 10)
	{
		func_740();
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_BR1", 0);
		switch (iLocal_48)
		{
			case 0:
				__LIB_0__.func_396();
				break;
			case 1:
				func_724();
				break;
			case 2:
				func_702();
				break;
			case 3:
				func_652();
				break;
			case 4:
				func_644();
				break;
			case 5:
				func_575();
				break;
			case 6:
				func_91();
				break;
			case 12:
				func_68();
				break;
			case 13:
				func_39();
				break;
			case 10:
				break;
			default:
				break;
		}
		if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) == 1)
		{
			PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		}
		func_38(iLocal_170);
		if ((__LIB_6__.func_793(iLocal_170) && !iLocal_50) && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			func_13(Local_199.f_0);
		}
		if (iLocal_50)
		{
			func_10();
			iLocal_50 = 0;
		}
		if (iLocal_48 > 4 && iLocal_48 != 13)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_169, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) > 1000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_169))
				{
					PED::DELETE_PED(&iLocal_169);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_178, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) > 1000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_178))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_178);
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			__LIB_0__.func_320(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 530);
			__LIB_0__.func_316(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 531);
		}
		else
		{
			__LIB_0__.func_320(0, 530);
			__LIB_0__.func_316(0, 531);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
		{
			if (PED::IS_PED_INJURED(iLocal_170) || ENTITY::IS_ENTITY_DEAD(iLocal_170, false))
			{
				func_13("S1_LESFAIL");
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_182))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_170, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
		{
			if (PED::IS_PED_INJURED(iLocal_172) || PED::IS_PED_INJURED(iLocal_172))
			{
				func_13("CMN_FDIED" /* GXT: ~s~Franklin died. */);
			}
		}
		if (iLocal_48 < 4)
		{
			func_7();
		}
		func_2();
		__LIB_0__.func_501();
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_48 == 1 || iLocal_48 == 6)
			{
				func_68();
			}
			else if (iLocal_48 == 3 || iLocal_48 == 4)
			{
				if (!PED::IS_PED_INJURED(iLocal_171))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_171, iLocal_175, false))
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_171, iLocal_175, PLAYER::PLAYER_PED_ID(), 8, 40f, 262144, 20f, 20f, true);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_171, false))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID(), 200f, 20000, false, false);
					}
				}
				func_13("S1_JSPOOK");
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_2()//Position - 0x783
{
	if (!iLocal_100)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_176, false);
			iLocal_100 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
		{
			if (iLocal_48 == 6)
			{
				if (!__LIB_7__.func_141(iLocal_176, 0, 0, 0, 0, 0, 1, 0, 1) || PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
				{
					if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_176, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_176, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_176, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_176, 1, 40000))
					{
						func_13("S1_VEHSTUCK");
					}
				}
			}
			else if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_176, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_176, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_176, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_176, 1, 40000))
			{
				func_13("S1_VEHSTUCK");
			}
		}
		else if (iLocal_48 < 6)
		{
			func_13("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
		}
		else if (!__LIB_7__.func_141(iLocal_176, 0, 0, 0, 0, 0, 1, 0, 1) || PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
		{
			func_13("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
		}
	}
}

void func_7()//Position - 0xAA3
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		if (PED::IS_PED_INJURED(iLocal_171) && iLocal_48 < 6)
		{
			func_13("S1_FAILED_K");
		}
		else
		{
			if (((FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(iLocal_171, false) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_171, false) - Vector(3f, 3f, 3f)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 6f, true)) || (PED::IS_PED_FLEEING(iLocal_171) && !bLocal_51)) || (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_171)))
			{
				func_13("S1_JSPOOK");
			}
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) && iLocal_175 == PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))
			{
				func_13("S1_JSPOOK");
			}
		}
		if (!bLocal_91)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
				{
					func_13("S1_FAILED_C");
				}
			}
		}
	}
}

void func_10()//Position - 0xC04
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_53[1 /*10*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		if (!PED::IS_PED_INJURED(iLocal_171))
		{
			__LIB_0__.func_203(&Local_53, 1, iLocal_171, "AGENCYJANITOR", 0, 1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_53[1 /*10*/]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		__LIB_0__.func_202(&Local_53, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_53[2 /*10*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		if (!PED::IS_PED_INJURED(iLocal_170))
		{
			__LIB_0__.func_203(&Local_53, 2, iLocal_170, "LESTER", 0, 1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_53[2 /*10*/]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		__LIB_0__.func_202(&Local_53, 2);
	}
}

void func_13(char* sParam0)//Position - 0xD70
{
	AUDIO::TRIGGER_MUSIC_EVENT("AH1_FAIL");
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (CAM::DOES_CAM_EXIST(Local_129.f_0) && CAM::IS_CAM_RENDERING(Local_129.f_0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_168) && CAM::IS_CAM_RENDERING(iLocal_168))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
		}
	}
	__LIB_9__.func_981(&uLocal_117, 0, 0);
	func_17(sParam0);
	while (!__LIB_0__.func_204())
	{
		SYSTEM::WAIT(0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (func_15(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -105.0312f, -8.6584f, 69.5201f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 259.2958f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-252283844, 0f, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 1, true, false);
		}
	}
	if ((MISC::ARE_STRINGS_EQUAL(sParam0, "S1_JSPOOK") && ENTITY::DOES_ENTITY_EXIST(iLocal_171)) && (PED::IS_PED_INJURED(iLocal_171) || ENTITY::IS_ENTITY_DEAD(iLocal_171, false)))
	{
		sParam0 = "S1_FAILED_K";
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		PED::DELETE_PED(&iLocal_170);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
	{
		PED::DELETE_PED(&iLocal_169);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
	{
		PED::DELETE_PED(&iLocal_172);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		PED::DELETE_PED(&iLocal_171);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_180))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_180);
	}
	__LIB_11__.func_732(3, 0, 0);
	func_752();
}

int func_15(int iParam0)//Position - 0xF39
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -112.68609f, -14.275766f, 69.53925f, -109.54989f, -5.690081f, 72.7827f, 6f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_17(char* sParam0)//Position - 0xFB5
{
	__LIB_0__.func_324(sParam0);
	func_18(0);
}

void func_18(int iParam0)//Position - 0xFC8
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_19(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_19(int iParam0)//Position - 0x100D
{
	int iVar0;
	int iVar1;
	__LIB_26__.func_584();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__.func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_20(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
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

void func_20(var uParam0, int iParam1)//Position - 0x111D
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
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_22(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__.func_17(&(uParam0->f_2296[iVar0]));
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

int func_22(int iParam0, var uParam1, float fParam2)//Position - 0x12F1
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
			return func_22(8, uParam1, fParam2);
			break;
		case 10:
			return func_22(8, uParam1, fParam2);
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

void func_38(int iParam0)//Position - 0x20E6
{
	if (!PED::IS_PED_INJURED(iParam0) && PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, false);
	}
}

void func_39()//Position - 0x2112
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iLocal_171))
	{
		switch (iLocal_103)
		{
			case 0:
				if (!PED::IS_PED_INJURED(iLocal_169))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_169, joaat("HATES_PLAYER"));
					TASK::CLEAR_PED_TASKS(iLocal_169);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_169, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_169, 17, true);
				}
				__LIB_6__.func_771();
				HUD::CLEAR_PRINTS();
				TASK::CLEAR_PED_TASKS(iLocal_171);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				if ((func_15(iLocal_171) && !func_15(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), Local_58) > 1f)
				{
					TASK::TASK_COWER(iLocal_171, -1);
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_171, -99.23925f, -10.321966f, 65.75197f, -107.06205f, -7.839327f, 72.58364f, 2.75f, false, true, 0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), Local_58) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_58))
				{
					__LIB_0__.func_317(61, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -111.5814f, -11.7526f, 69.5196f, 3f, -1, 0.25f, 0, 40000f);
					TASK::TASK_COWER(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_171, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				else
				{
					if (bLocal_52)
					{
					}
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID());
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_171, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_171, 17, true);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_103++;
				break;
			case 1:
				if (!__LIB_0__.func_75() && SYSTEM::TIMERA() > 1500)
				{
					func_13("S1_JSPOOK");
				}
				break;
		}
	}
	else
	{
		func_13("S1_FAILED_K");
	}
}

void func_43(int iParam0)//Position - 0x240F
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	if (!__LIB_6__.func_291())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { __LIB_0__.func_347(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		__LIB_24__.func_932(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	if ((BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] == 2) && fVar4 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
		Global_38430[iParam0] = 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_38657[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_100493.f_373 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_100493.f_373 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar5 = Global_100493.f_373;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
					Global_38884[iParam0] = 3;
					MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_38657[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_38884[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113386.f_9085)
		{
			iVar3 = __LIB_26__.func_598(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (__LIB_0__.func_39(14))
		{
			iVar3 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) == 0)
	{
		if (__LIB_0__.func_318())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_113386.f_7261[iParam0];
	}
	if (Global_39111[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (BitTest(Global_38412[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) || (Global_38430[iParam0] == 0 && Global_38884[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_38411)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, false, false, false);
			}
			switch (iVar3)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
						bVar2 = true;
					}
					break;
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, true);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
					bVar2 = true;
					break;
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			MISC::CLEAR_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
			Global_39111[iParam0] = iVar3;
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
		__LIB_0__.func_345(iParam0);
		if (Global_38430[iParam0] < 2)
		{
			Global_38430[iParam0]++;
		}
	}
}

void func_68()//Position - 0x653B
{
	if (iLocal_48 != 12)
	{
		iLocal_49 = iLocal_48;
		iLocal_48 = 12;
		HUD::CLEAR_PRINTS();
		func_90();
		Local_198.f_1 = 0;
		iLocal_231 = 0;
		if ((__LIB_0__.func_75() && iLocal_203) && !iLocal_204)
		{
			iLocal_204 = 1;
			Local_205 = { __LIB_0__.func_389() };
		}
		__LIB_6__.func_771();
	}
	if (!__LIB_0__.func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
	{
		__LIB_0__.func_320(&Local_198);
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_85) > 75f)
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) != 1 && OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(763780711) != 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, true, false);
			__LIB_0__.func_317(63, 1);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) != 1 && OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(-826072862) != 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, true, false);
			__LIB_0__.func_317(62, 1);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_167))
			{
				HUD::REMOVE_BLIP(&iLocal_167);
			}
			if (!iLocal_231)
			{
				if (iLocal_49 == 1)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
					{
						if (__LIB_9__.func_238(&Local_53, cLocal_110, "FBS1_WANT", 8, 0, 0, 0))
						{
							iLocal_231 = 1;
						}
					}
				}
				else
				{
					iLocal_231 = 1;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_170) && PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_167))
			{
				iLocal_167 = __LIB_6__.func_825(iLocal_176, 0, 0);
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(763780711) == 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, true, false);
			__LIB_0__.func_317(63, 0);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(-826072862) == 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, true, false);
			__LIB_0__.func_317(62, 0);
		}
		iLocal_48 = iLocal_49;
		HUD::CLEAR_PRINTS();
	}
}

void func_90()//Position - 0x7037
{
	HUD::REMOVE_BLIP(&iLocal_167);
	HUD::REMOVE_BLIP(&iLocal_165);
	HUD::REMOVE_BLIP(&iLocal_166);
}

void func_91()//Position - 0x7054
{
	int iVar0;
	int iVar1;
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_85) < 1000f)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(763780711) == 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, true, false);
		__LIB_0__.func_317(63, 0);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(-826072862) == 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, true, false);
		__LIB_0__.func_317(62, 0);
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 716.1905f, -967.21844f, 31.585453f, 8f, 9f, 2.5f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	switch (iLocal_103)
	{
		case 0:
			Local_192.f_1 = 0;
			iLocal_288 = 0;
			func_574(1);
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			if (iLocal_50)
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 1, 1);
				STREAMING::REQUEST_COLLISION_AT_COORD(Local_58);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_181))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_181);
					INTERIOR::CAP_INTERIOR(iLocal_181, true);
				}
				if (__LIB_0__.func_295() && __LIB_0__.func_294())
				{
					func_527(&iLocal_176, Local_60, fLocal_89, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
				}
				while (!func_526(Local_60, fLocal_89, 0, 1))
				{
					SYSTEM::WAIT(0);
				}
				while (!ENTITY::DOES_ENTITY_EXIST(iLocal_178))
				{
					func_525();
					SYSTEM::WAIT(0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
				{
					PED::DELETE_PED(&iLocal_169);
				}
				if (!__LIB_0__.func_295())
				{
					while (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(PLAYER::PLAYER_PED_ID()))
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::SET_FOCUS_POS_AND_VEL(-105.0312f, -8.6584f, 69.5201f, 0f, 0f, 0f);
					STREAMING::NEW_LOAD_SCENE_START(-105.0312f, -8.6584f, 69.5201f, SYSTEM::COS((259.2958f + 90f)), SYSTEM::SIN((259.2958f + 90f)), 0f, 25f, 0);
					SYSTEM::SETTIMERA(0);
					while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 10000)
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::CLEAR_FOCUS();
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 1, 1, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -105.0312f, -8.6584f, 69.5201f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 259.2958f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_2__.func_292();
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_176, Local_60, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_176, -11.3149f, 1.4111f, 167.8415f, 2, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_176, -0.0226f, -0.0967f, 0.9893f, 0.1066f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 5f);
				while (!func_518(Local_63, fLocal_90))
				{
					SYSTEM::WAIT(0);
				}
				if (__LIB_0__.func_295())
				{
					__LIB_6__.func_775(0, -1, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_170))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_170, false);
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -98.8604f, -10.5318f, 65.5199f, 1f, -1, 40000f, 0.5f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 8f, 4);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
			{
				PED::DELETE_PED(&iLocal_171);
			}
			func_10();
			iLocal_103++;
			__LIB_30__.func_929(500);
			SYSTEM::SETTIMERA(0);
			break;
		case -1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
			{
				PED::DELETE_PED(&iLocal_171);
			}
			func_10();
			iLocal_103++;
			__LIB_30__.func_929(500);
			SYSTEM::SETTIMERA(0);
			iLocal_103 = 1;
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (SYSTEM::TIMERA() > 1000)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_167))
				{
					iLocal_167 = __LIB_6__.func_825(iLocal_176, 0, 0);
					__LIB_0__.func_210("S1_BKINCAR", 7500, 1);
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_DRIVE_TO_FACTORY"))
					{
						AUDIO::START_AUDIO_SCENE("AGENCY_H_1_DRIVE_TO_FACTORY");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("AH1_BACK_IN_CAR");
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
					iLocal_103++;
					SYSTEM::SETTIMERA(0);
				}
				else if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_176, false)) < 400f)
					{
						if (!PED::IS_PED_DEAD_OR_DYING(iLocal_170, true))
						{
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_170, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_170, PLAYER::PLAYER_PED_ID(), -1, 2052, 3);
							}
						}
					}
					else if (!PED::IS_PED_DEAD_OR_DYING(iLocal_170, true))
					{
						if (PED::IS_PED_HEADTRACKING_PED(iLocal_170, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_170);
						}
					}
				}
			}
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false) && !PED::IS_PED_INJURED(iLocal_170))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_167))
						{
							HUD::REMOVE_BLIP(&iLocal_167);
						}
						if (SYSTEM::TIMERA() > 500)
						{
							if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_PKGE", 9, 0, 0, 0))
							{
								SYSTEM::SETTIMERA(0);
								iLocal_103++;
							}
						}
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_167))
				{
					iLocal_167 = __LIB_6__.func_825(iLocal_176, 0, 0);
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false) && !PED::IS_PED_INJURED(iLocal_170))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_167))
						{
							HUD::REMOVE_BLIP(&iLocal_167);
						}
						if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_GOHOME", 9, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_103++;
						}
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_167))
				{
					iLocal_167 = __LIB_6__.func_825(iLocal_176, 0, 0);
				}
			}
			break;
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false) && !PED::IS_PED_INJURED(iLocal_170))
			{
				if (SYSTEM::TIMERA() > 1000)
				{
					func_514(&iLocal_176, &iLocal_167, Local_65, &iLocal_165);
				}
				if ((SYSTEM::TIMERA() > 3000 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false)) && (!__LIB_0__.func_75() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (!Local_196.f_1)
					{
						__LIB_0__.func_320(&Local_196);
					}
				}
				if (SYSTEM::TIMERA() > 11000)
				{
					__LIB_11__.func_860(Local_202.f_0, iLocal_176);
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_65) < 40000f)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_177))
					{
						if (func_445(&iLocal_177, 1, 711.2252f, -979.7821f, 23.1003f, 43.2293f, 1, 1))
						{
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177, 5f);
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_177, 0, 0f, 0f, -0.01f, 0f, 0f, 0f, 0, true, true, false, false, true);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_177, 2);
						}
					}
				}
				if ((HUD::DOES_BLIP_EXIST(iLocal_165) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_176))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_65, Global_19, true, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 723.49054f, -983.81635f, 19.161726f, 710.2278f, -984.95374f, 26.114151f, 12.25f, false, true, 0))
					{
						iLocal_103++;
					}
				}
			}
			break;
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
			{
				STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
				if (__LIB_6__.func_762(iLocal_176, 8f, 5, 1056964608, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					SYSTEM::SETTIMERA(0);
					HUD::REMOVE_BLIP(&iLocal_165);
					__LIB_6__.func_833();
					iLocal_103++;
				}
			}
			break;
		case 6:
			if (!__LIB_0__.func_75())
			{
				if (__LIB_9__.func_238(&Local_53, cLocal_110, "FBS1_HOME2", 8, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
					iLocal_103++;
				}
			}
			break;
		case 7:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_176) < 0.5f)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
					{
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_165 = __LIB_0__.func_392(706.5483f, -965.2577f, 29.4179f, 0);
					iLocal_103++;
					SYSTEM::SETTIMERA(0);
				}
			}
			break;
		case 8:
			if (SYSTEM::TIMERA() > 250 && STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_170) && PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
					{
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_170, "move_lester_CaneUp");
						TASK::TASK_LOOK_AT_ENTITY(iLocal_170, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_LEAVE_VEHICLE(0, iLocal_176, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 713.0986f, -962.1581f, 29.3953f, 1f, -1, 0.25f, 0, 40000f);
						TASK::TASK_ACHIEVE_HEADING(0, 185.6443f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_170, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
				}
				SCRIPT::REQUEST_SCRIPT("lesterHandler");
				__LIB_11__.func_732(3, 0, 1);
				iLocal_103++;
			}
			break;
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_170))
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_170, 0.8f);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_165))
			{
				iLocal_165 = __LIB_0__.func_392(706.5483f, -965.2577f, 29.4179f, 0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 710.97174f, -964.13495f, 30.64533f, 1f, 5.5f, 1.25f, false, true, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					while (!__LIB_6__.func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_165))
				{
					HUD::REMOVE_BLIP(&iLocal_165);
				}
				HUD::CLEAR_PRINTS();
				__LIB_6__.func_771();
				iLocal_103++;
			}
			break;
		case 10:
			if (__LIB_0__.func_295())
			{
				__LIB_6__.func_775(0, -1, 1);
			}
			if (__LIB_0__.func_90() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				if (!PED::IS_PED_INJURED(iLocal_170))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_170, "Lester", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_172))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_172, "Franklin", 1, 0, 0);
				}
				func_431(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 4);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_103 = 100;
			}
			break;
		case 100:
			MISC::CLEAR_AREA(710.97174f, -964.13495f, 30.64533f, 20f, true, false, false, false);
			CAM::DO_SCREEN_FADE_IN(500);
			iLocal_103++;
			break;
		case 101:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_189))
			{
				OBJECT::DELETE_OBJECT(&iLocal_189);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_DRIVE_TO_FACTORY"))
			{
				AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_DRIVE_TO_FACTORY");
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_177))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_177);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0) && !PED::IS_PED_INJURED(iLocal_170))
			{
				if (SCRIPT::HAS_SCRIPT_LOADED("lesterHandler"))
				{
					iVar1 = iLocal_170;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar1, 1, 1424);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("lesterHandler");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
			}
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				func_431(0, 1, 1, 0, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_103++;
			}
			break;
		case 102:
			if (SYSTEM::TIMERA() < 1500 && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 715.8696f, -964.413f, 31.395329f, 4f, 6f, 2f, false, true, 0))
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (SYSTEM::TIMERA() > 3000)
			{
				func_428();
			}
			break;
	}
	if (((HUD::DOES_BLIP_EXIST(iLocal_165) && !iLocal_288) && iLocal_103 > 7) && !__LIB_0__.func_75())
	{
		__LIB_0__.func_325("S1_UPSTAIRS", 7500, 1);
		iLocal_288 = 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_170))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_189))
		{
			if (iLocal_103 < 100)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_65) < 40000f)
				{
					STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick")))
					{
						iLocal_189 = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), ENTITY::GET_ENTITY_COORDS(iLocal_170, false), true, true, false);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_189, false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_189, iLocal_170, PED::GET_PED_BONE_INDEX(iLocal_170, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					}
				}
			}
		}
		else if (ENTITY::IS_ENTITY_VISIBLE(iLocal_189))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_170, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_189, false, false);
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_170, false))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_189, true, false);
		}
	}
	if (iLocal_103 < 100)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_172) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_65) < 100f)
		{
			func_175();
			CUTSCENE::REQUEST_CUTSCENE("ah_1_ext_t6", 8);
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					func_92("Franklin", joaat("Player_One"), 39);
				}
			}
		}
		else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_65) > 120f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
			{
				PED::DELETE_PED(&iLocal_172);
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 709.9813f, -963.5311f, 30.5453f, 100f, 100f, 50f, false, true, 0))
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-874851305, 0f, false, true);
		}
	}
}

void func_92(char* sParam0, int iParam1, int iParam2)//Position - 0x7E39
{
	int iVar0;
	struct<14> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	uVar2 = 9;
	uVar8 = { __LIB_18__.func_180(iParam1, iParam2) };
	iVar9 = 0;
	if (uVar8[2] == -99 && uVar8[0] == -99)
	{
		iVar9 = 1;
	}
	iVar6 = 0;
	while (iVar6 <= 14)
	{
		iVar0 = iVar6;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar2 = { __LIB_18__.func_247(iParam1, uVar8[iVar6]) };
				iVar7 = 0;
				while (iVar7 <= 8)
				{
					iVar3 = iVar7;
					iVar4 = __LIB_0__.func_40(iVar3);
					iVar5 = __LIB_0__.func_29(iVar4);
					if (uVar2[iVar7] != iVar5)
					{
						Var1 = { func_94(iParam1, 14, uVar2[iVar7], -1) };
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar7++;
				}
			}
			else
			{
				Var1 = { func_94(iParam1, iVar0, uVar8[iVar6], -1) };
				if (((iVar6 == 2 || iVar6 == 0) && iVar9) || uVar8[iVar6] == -99)
				{
					Var1.f_3 = Global_113386.f_2363.f_539[Var1.f_5 /*65*/].f_13[iVar6];
					Var1.f_4 = Global_113386.f_2363.f_539[Var1.f_5 /*65*/][iVar6];
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, __LIB_0__.func_33(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar6++;
	}
}

struct<14> func_94(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x804A
{
	__LIB_0__.func_41();
	if (iParam0 == joaat("Player_Zero"))
	{
		func_143(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_One"))
	{
		func_124(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		func_95(iParam1, iParam2);
	}
	return Global_78130[0 /*14*/];
}

void func_95(int iParam0, int iParam1)//Position - 0x809C
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__.func_322(iParam1);
			break;
		case 2:
			__LIB_20__.func_201(iParam1);
			break;
		case 3:
			__LIB_26__.func_240(iParam1);
			break;
		case 4:
			__LIB_0__.func_374(iParam1);
			break;
		case 6:
			__LIB_20__.func_197(iParam1);
			break;
		case 5:
			__LIB_20__.func_196(iParam1);
			break;
		case 8:
			__LIB_0__.func_321(iParam1);
			break;
		case 9:
			__LIB_20__.func_194(iParam1);
			break;
		case 10:
			__LIB_20__.func_193(iParam1);
			break;
		case 1:
			__LIB_20__.func_192(iParam1);
			break;
		case 7:
			__LIB_20__.func_191(iParam1);
			break;
		case 11:
			__LIB_20__.func_190(iParam1);
			break;
		case 12:
			__LIB_20__.func_189(iParam1);
			break;
		case 13:
			__LIB_20__.func_188(iParam1);
			break;
		case 14:
			__LIB_20__.func_321(iParam1);
			break;
	}
}

void func_124(int iParam0, int iParam1)//Position - 0x11F74
{
	switch (iParam0)
	{
		case 0:
			__LIB_20__.func_219(iParam1);
			break;
		case 2:
			__LIB_20__.func_218(iParam1);
			break;
		case 3:
			func_137(iParam1);
			break;
		case 4:
			__LIB_20__.func_214(iParam1);
			break;
		case 6:
			__LIB_20__.func_213(iParam1);
			break;
		case 5:
			__LIB_20__.func_212(iParam1);
			break;
		case 8:
			__LIB_20__.func_211(iParam1);
			break;
		case 9:
			__LIB_20__.func_210(iParam1);
			break;
		case 10:
			__LIB_20__.func_209(iParam1);
			break;
		case 1:
			__LIB_20__.func_208(iParam1);
			break;
		case 7:
			__LIB_20__.func_207(iParam1);
			break;
		case 11:
			__LIB_20__.func_206(iParam1);
			break;
		case 12:
			__LIB_0__.func_324(iParam1);
			break;
		case 13:
			__LIB_20__.func_204(iParam1);
			break;
		case 14:
			__LIB_0__.func_323(iParam1);
			break;
	}
}

void func_137(int iParam0)//Position - 0x16F23
{
	if (iParam0 < 107)
	{
		__LIB_20__.func_217(iParam0);
	}
	else if (iParam0 < 227)
	{
		__LIB_20__.func_216(iParam0);
	}
	else
	{
		__LIB_0__.func_325(iParam0);
	}
	if (Global_78130[0 /*14*/].f_2 == -1)
	{
		__LIB_18__.func_335(3, iParam0, 318, -1);
	}
}

void func_143(int iParam0, int iParam1)//Position - 0x19807
{
	switch (iParam0)
	{
		case 0:
			__LIB_20__.func_235(iParam1);
			break;
		case 2:
			__LIB_20__.func_234(iParam1);
			break;
		case 3:
			func_156(iParam1);
			break;
		case 4:
			__LIB_0__.func_328(iParam1);
			break;
		case 6:
			__LIB_20__.func_230(iParam1);
			break;
		case 5:
			__LIB_20__.func_229(iParam1);
			break;
		case 8:
			__LIB_0__.func_327(iParam1);
			break;
		case 9:
			__LIB_20__.func_227(iParam1);
			break;
		case 10:
			__LIB_20__.func_226(iParam1);
			break;
		case 1:
			__LIB_20__.func_225(iParam1);
			break;
		case 7:
			__LIB_20__.func_224(iParam1);
			break;
		case 11:
			__LIB_0__.func_326(iParam1);
			break;
		case 12:
			__LIB_20__.func_222(iParam1);
			break;
		case 13:
			__LIB_20__.func_221(iParam1);
			break;
		case 14:
			__LIB_20__.func_220(iParam1);
			break;
	}
}

void func_156(int iParam0)//Position - 0x1D777
{
	if (iParam0 < 60)
	{
		__LIB_20__.func_233(iParam0);
	}
	else
	{
		__LIB_0__.func_329(iParam0);
	}
	if (Global_78130[0 /*14*/].f_2 == -1)
	{
		__LIB_18__.func_335(3, iParam0, 181, -1);
	}
}

int func_175()//Position - 0x220FE
{
	if (func_211(&iLocal_172, 1, 705.4539f, -965.5662f, 29.3953f, 273.3178f, 1, 0, 0))
	{
		__LIB_18__.func_178(iLocal_172, 12, 39, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_172, "PROP_HUMAN_SEAT_CHAIR", 704.85626f, -965.3852f, 29.8245f, 269.2285f, 0, false, true);
		return 1;
	}
	return 0;
}

int func_177(int iParam0, int iParam1, int iParam2)//Position - 0x22975
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_178(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0, int iParam1, int iParam2)//Position - 0x22A01
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
	Global_78130[1 /*14*/] = { func_94(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_178(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_178(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { func_94(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_178(iParam0, 14, iVar4))
										{
											if (!func_183(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_0__.func_338(iParam0, iVar2);
						Global_78130[2 /*14*/] = { func_94(iVar0, iVar2, iVar1, -1) };
						if (!func_183(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_178(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_180(int iParam0, int iParam1, int iParam2)//Position - 0x22C94
{
	int iVar0;
	int iVar1;
	if (iParam0 == joaat("Player_Zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("Player_One"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		iVar0 = 4;
	}
	if (func_182(iParam0, 12, iVar0))
	{
		if (__LIB_0__.func_20(iParam0, iParam1, iParam2))
		{
			iVar1 = __LIB_0__.func_19(iParam0);
			if (iParam1 == 3)
			{
				Global_113386.f_2363.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_113386.f_2363.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

bool func_182(int iParam0, int iParam1, int iParam2)//Position - 0x22DFC
{
	Global_78130[1 /*14*/] = { func_94(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 2);
}

int func_183(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x22E24
{
	var uVar0;
	int iVar1;
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { __LIB_18__.func_247(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (__LIB_0__.func_21(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("Player_Zero"))
	{
		if (func_203(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_0__.func_337(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (__LIB_0__.func_336(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (func_203(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_0__.func_337(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
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
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (__LIB_0__.func_336(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_203(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_0__.func_337(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (__LIB_0__.func_336(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_186(int iParam0, int iParam1, int iParam2)//Position - 0x23557
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
				if (func_178(iParam0, iParam1, iVar0))
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
				if (func_178(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_0__.func_338(iParam0, iParam1);
		}
	}
	return -99;
}

int func_188(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x238FF
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
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = __LIB_0__.func_338(iParam0, 1);
				iVar0 = __LIB_0__.func_24(iParam1, iParam3, iVar1);
				break;
			case 1:
				iVar2 = __LIB_0__.func_338(iParam0, 2);
				iVar0 = __LIB_0__.func_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		__LIB_0__.func_211(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		__LIB_0__.func_212(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (__LIB_0__.func_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									case 37:
										iVar0 = 17;
										break;
									case 38:
										iVar0 = 18;
										break;
									case 39:
										iVar0 = 18;
										break;
									case 40:
										iVar0 = 19;
										break;
									case 41:
										iVar0 = 19;
										break;
									case 42:
										iVar0 = 20;
										break;
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_192(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_192(iParam0, 3, 135, 150))
									{
										iVar0 = func_191(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									case 61:
										iVar0 = 3;
										break;
									case 16:
										iVar0 = 1;
										break;
									case 114:
										iVar0 = 15;
										break;
									case 115:
										iVar0 = 17;
										break;
									case 116:
										iVar0 = 16;
										break;
									case 117:
										iVar0 = 18;
										break;
									case 118:
										iVar0 = 20;
										break;
									case 119:
										iVar0 = 19;
										break;
									case 125:
										iVar0 = 21;
										break;
									case 120:
										iVar0 = 22;
										break;
									case 124:
										iVar0 = 23;
										break;
									case 126:
										iVar0 = 24;
										break;
									case 121:
										iVar0 = 25;
										break;
									case 127:
										iVar0 = 26;
										break;
									case 128:
										iVar0 = 27;
										break;
									case 85:
										iVar0 = 6;
										break;
									case 77:
										iVar0 = 7;
										break;
									case 78:
										iVar0 = 8;
										break;
									case 79:
										iVar0 = 9;
										break;
									case 80:
										iVar0 = 10;
										break;
									case 81:
										iVar0 = 11;
										break;
									case 82:
										iVar0 = 12;
										break;
									case 83:
										iVar0 = 13;
										break;
									case 84:
										iVar0 = 14;
										break;
									case 21:
										iVar0 = 31;
										break;
									case 22:
										iVar0 = 30;
										break;
									case 23:
										iVar0 = 29;
										break;
									case 24:
										iVar0 = 28;
										break;
									case 25:
										iVar0 = 33;
										break;
									case 26:
										iVar0 = 35;
										break;
									case 27:
										iVar0 = 34;
										break;
									case 28:
										iVar0 = 32;
										break;
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									case 90:
										iVar0 = 1;
										break;
									case 268:
										iVar0 = 3;
										break;
									case 269:
										iVar0 = 5;
										break;
									case 270:
										iVar0 = 4;
										break;
									case 271:
										iVar0 = 6;
										break;
									case 272:
										iVar0 = 8;
										break;
									case 273:
										iVar0 = 7;
										break;
									case 279:
										iVar0 = 9;
										break;
									case 274:
										iVar0 = 10;
										break;
									case 278:
										iVar0 = 11;
										break;
									case 280:
										iVar0 = 12;
										break;
									case 275:
										iVar0 = 13;
										break;
									case 281:
										iVar0 = 14;
										break;
									case 282:
										iVar0 = 15;
										break;
									case 107:
										iVar0 = 16;
										break;
									case 108:
										iVar0 = 17;
										break;
									case 109:
										iVar0 = 18;
										break;
									case 110:
										iVar0 = 19;
										break;
									case 111:
										iVar0 = 20;
										break;
									case 112:
										iVar0 = 21;
										break;
									case 113:
										iVar0 = 22;
										break;
									case 114:
										iVar0 = 23;
										break;
									case 115:
										iVar0 = 24;
										break;
									case 116:
										iVar0 = 25;
										break;
									case 117:
										iVar0 = 52;
										break;
									case 118:
										iVar0 = 27;
										break;
									case 119:
										iVar0 = 28;
										break;
									case 120:
										iVar0 = 29;
										break;
									case 121:
										iVar0 = 30;
										break;
									case 122:
										iVar0 = 31;
										break;
									case 296:
										iVar0 = 32;
										break;
									case 297:
										iVar0 = 33;
										break;
									case 298:
										iVar0 = 34;
										break;
									case 299:
										iVar0 = 35;
										break;
									case 300:
										iVar0 = 36;
										break;
									case 301:
										iVar0 = 37;
										break;
									case 302:
										iVar0 = 38;
										break;
									case 309:
										iVar0 = 39;
										break;
									case 310:
										iVar0 = 40;
										break;
									case 311:
										iVar0 = 41;
										break;
									case 312:
										iVar0 = 42;
										break;
									case 313:
										iVar0 = 43;
										break;
									case 314:
										iVar0 = 44;
										break;
									case 315:
										iVar0 = 45;
										break;
									case 316:
										iVar0 = 46;
										break;
									case 317:
										iVar0 = 51;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_192(iParam0, 3, 209, 222))
									{
										iVar0 = func_191(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_192(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_191(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_191(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_191(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_191(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_192(iParam0, 3, 176, 191) && !func_192(iParam0, 3, 227, 242))
									{
										iVar0 = func_191(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = __LIB_0__.func_338(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = __LIB_0__.func_338(iParam0, 11);
								iVar5 = func_190(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = __LIB_0__.func_338(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!__LIB_0__.func_22(joaat("Player_One"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = __LIB_0__.func_338(iParam0, 8);
								iVar8 = __LIB_0__.func_338(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_190(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_190(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = __LIB_0__.func_338(iParam0, 11);
								iVar0 = func_190(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									case 81:
										iVar0 = 5;
										break;
									case 82:
										iVar0 = 6;
										break;
									case 83:
										iVar0 = 7;
										break;
									case 84:
										iVar0 = 10;
										break;
									case 85:
										iVar0 = 9;
										break;
									case 86:
										iVar0 = 8;
										break;
									case 92:
										iVar0 = 22;
										break;
									case 87:
										iVar0 = 23;
										break;
									case 91:
										iVar0 = 24;
										break;
									case 93:
										iVar0 = 25;
										break;
									case 88:
										iVar0 = 26;
										break;
									case 94:
										iVar0 = 27;
										break;
									case 120:
										iVar0 = 11;
										break;
									case 121:
										iVar0 = 13;
										break;
									case 122:
										iVar0 = 14;
										break;
									case 124:
										iVar0 = 12;
										break;
									case 126:
										iVar0 = 18;
										break;
									case 128:
										iVar0 = 17;
										break;
									case 130:
										iVar0 = 19;
										break;
									case 131:
										iVar0 = 16;
										break;
									case 134:
										iVar0 = 15;
										break;
									case 135:
										iVar0 = 20;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x24796
{
	int iVar0;
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_191(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_191(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_191(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x24A5D
{
	int iVar0;
	int iVar1;
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_182(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_192(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x24A94
{
	int iVar0;
	iVar0 = __LIB_0__.func_338(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

void func_196(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x25168
{
	int iVar0;
	if (iParam2 == -1)
	{
		PED::CLEAR_PED_PROP(iParam0, iParam1);
		if (iParam1 == 0)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
		}
	}
	else
	{
		PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
		if (iParam1 == 0)
		{
			iVar0 = __LIB_6__.func_766(iParam0, iParam2, iParam3, iParam1);
			if (func_197(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3)))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, true);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
			}
		}
	}
}

int func_197(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x25200
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = __LIB_0__.func_334(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = __LIB_0__.func_334(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x25CC4
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		case joaat("Player_One"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		case joaat("Player_Two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		case joaat("MP_M_Freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = __LIB_0__.func_334(iParam0, iParam2, 14, 3);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = __LIB_0__.func_334(iParam0, iParam2, 14, 4);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_211(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x26222
{
	int iVar0;
	if (__LIB_0__.func_317(bParam1))
	{
		iVar0 = __LIB_6__.func_816(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_24__.func_931(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_419(*iParam0);
			__LIB_32__.func_491(*iParam0, 1, 0);
			__LIB_19__.func_970(*iParam0);
			__LIB_19__.func_969(*iParam0);
			func_213(*iParam0, bParam6);
			__LIB_0__.func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0, bool bParam1)//Position - 0x2633A
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_18__.func_190(iParam0);
	if (__LIB_0__.func_377(bVar0))
	{
		__LIB_0__.func_376(bVar0, 0);
		__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_217(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_215(iParam0))
		{
			__LIB_0__.func_376(bVar0, 0);
			__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_217(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_178(iParam0, 3, 169))
					{
						__LIB_18__.func_178(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_178(iParam0, 12, 6))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 17))
			{
				if (!func_214(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 20))
			{
				if (!func_214(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 21))
			{
				if (!func_214(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 22))
			{
				if (!func_214(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 11))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 10))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 50))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 14, 59))
			{
				__LIB_18__.func_178(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_178(iParam0, 8, 22))
			{
				__LIB_18__.func_178(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_178(iParam0, 12, 14))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_178(iParam0, 12, 13))
			{
				if (!func_214(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 14))
			{
				if (!func_214(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 15))
			{
				if (!func_214(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 4))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 3))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 14, 82))
			{
				__LIB_18__.func_178(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_178(iParam0, 8, 76))
			{
				__LIB_18__.func_178(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_178(iParam0, 12, 1))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_178(iParam0, 12, 12))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 15))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_178(iParam0, 3, 71))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 17))
			{
				if (!func_214(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 18))
			{
				if (!func_214(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 19))
			{
				if (!func_214(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 7))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 6))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 14, 88))
			{
				__LIB_18__.func_178(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_178(iParam0, 8, 17))
			{
				__LIB_18__.func_178(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_178(iParam0, 12, 11))
			{
				__LIB_18__.func_178(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_214(int iParam0, int iParam1, int iParam2)//Position - 0x26998
{
	Global_78130[1 /*14*/] = { func_94(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 1);
}

bool func_215(int iParam0)//Position - 0x269C0
{
	int iVar0;
	int iVar1;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar0 = __LIB_0__.func_338(iParam0, 4);
	return __LIB_0__.func_351(iVar1, 4, iVar0);
}

void func_217(int iParam0, int iParam1)//Position - 0x26ACB
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_18__.func_190(iParam0);
		if (__LIB_0__.func_317(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_186(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__.func_358(bVar0);
					__LIB_0__.func_340(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_224(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				func_219();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__.func_39(0) && !__LIB_0__.func_39(1)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(9)) && !__LIB_0__.func_39(10)))
				{
					Global_113386.f_2363.f_539[bVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__.func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__.func_338(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__.func_338(iParam0, __LIB_0__.func_33(iVar3));
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

void func_219()//Position - 0x26D46
{
	struct<50> Var0;
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !__LIB_0__.func_317(__LIB_24__.func_941())) || !__LIB_6__.func_781())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_224(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
	__LIB_0__.func_353(1306, Var0[0], -1);
	__LIB_0__.func_353(1307, Var0[1], -1);
	__LIB_0__.func_353(1308, Var0[2], -1);
	__LIB_0__.func_353(1309, Var0[3], -1);
	__LIB_0__.func_353(1310, Var0[4], -1);
	__LIB_0__.func_353(1311, Var0[5], -1);
	__LIB_0__.func_353(1312, Var0[6], -1);
	__LIB_0__.func_353(1313, Var0[7], -1);
	__LIB_0__.func_353(1314, Var0[8], -1);
	__LIB_0__.func_353(1315, Var0[9], -1);
	__LIB_0__.func_353(1316, Var0[10], -1);
	__LIB_0__.func_353(1317, Var0[11], -1);
	__LIB_0__.func_353(1318, Var0.f_13[0], -1);
	__LIB_0__.func_353(1319, Var0.f_13[1], -1);
	__LIB_0__.func_353(1320, Var0.f_13[2], -1);
	__LIB_0__.func_353(1321, Var0.f_13[3], -1);
	__LIB_0__.func_353(1322, Var0.f_13[4], -1);
	__LIB_0__.func_353(1323, Var0.f_13[5], -1);
	__LIB_0__.func_353(1324, Var0.f_13[6], -1);
	__LIB_0__.func_353(1325, Var0.f_13[7], -1);
	__LIB_0__.func_353(1326, Var0.f_13[8], -1);
	__LIB_0__.func_353(1327, Var0.f_13[9], -1);
	__LIB_0__.func_353(1328, Var0.f_13[10], -1);
	__LIB_0__.func_353(1329, Var0.f_13[11], -1);
	__LIB_0__.func_353(1330, Var0.f_26[0], -1);
	__LIB_0__.func_353(1331, Var0.f_26[1], -1);
	__LIB_0__.func_353(1332, Var0.f_26[2], -1);
	__LIB_0__.func_353(1333, Var0.f_26[3], -1);
	__LIB_0__.func_353(1334, Var0.f_26[4], -1);
	__LIB_0__.func_353(1335, Var0.f_26[5], -1);
	__LIB_0__.func_353(1336, Var0.f_26[6], -1);
	__LIB_0__.func_353(1337, Var0.f_26[7], -1);
	__LIB_0__.func_353(1338, Var0.f_26[8], -1);
	__LIB_0__.func_353(1339, Var0.f_26[9], -1);
	__LIB_0__.func_353(1340, Var0.f_26[10], -1);
	__LIB_0__.func_353(1341, Var0.f_26[11], -1);
	__LIB_0__.func_353(1342, Var0.f_39[0], -1);
	__LIB_0__.func_353(1343, Var0.f_39[1], -1);
	__LIB_0__.func_353(1344, Var0.f_39[2], -1);
	__LIB_0__.func_353(1345, Var0.f_39[3], -1);
	__LIB_0__.func_353(1346, Var0.f_39[4], -1);
	__LIB_0__.func_353(1347, Var0.f_39[5], -1);
	__LIB_0__.func_353(1348, Var0.f_39[6], -1);
	__LIB_0__.func_353(1349, Var0.f_39[7], -1);
	__LIB_0__.func_353(1350, Var0.f_39[8], -1);
	__LIB_0__.func_353(1351, Var0.f_49[0], -1);
	__LIB_0__.func_353(1352, Var0.f_49[1], -1);
	__LIB_0__.func_353(1353, Var0.f_49[2], -1);
	__LIB_0__.func_353(1354, Var0.f_49[3], -1);
	__LIB_0__.func_353(1355, Var0.f_49[4], -1);
	__LIB_0__.func_353(1356, Var0.f_49[5], -1);
	__LIB_0__.func_353(1357, Var0.f_49[6], -1);
	__LIB_0__.func_353(1358, Var0.f_49[7], -1);
	__LIB_0__.func_353(1359, Var0.f_49[8], -1);
	__LIB_0__.func_353(1360, __LIB_24__.func_941(), -1);
	STATS::STAT_SET_BOOL(joaat("CLO_STORED_INITIAL"), true, true);
	Global_113386.f_2363.f_539.f_4315 = 1;
}

void func_224(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x27154
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_18__.func_190(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			__LIB_19__.func_963(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			__LIB_0__.func_339(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (__LIB_0__.func_317(bVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_0__.func_421(161, iParam3))
			{
				uParam1->f_59 = __LIB_0__.func_534(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_0__.func_534(753, iParam3, 0);
			}
			uParam1->f_60 = __LIB_0__.func_534(754, iParam3, 0);
			uParam1->f_61 = __LIB_0__.func_534(755, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_0__.func_421(161, iParam3))
			{
				uParam1->f_59 = __LIB_0__.func_534(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_0__.func_534(753, iParam3, 0);
			}
		}
	}
}

int func_231(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x27F85
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
		Global_78130[1 /*14*/] = { func_356(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_354(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__.func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { func_356(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_354(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { func_356(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__.func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { func_356(iVar5, 14, uVar15[iVar1], -1) };
								func_196(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_354(iVar5, iVar0, uVar14[iVar0], 1);
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
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_231(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_354(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { func_356(iVar5, iVar0, func_353(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_231(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = func_352();
			if (iVar17 != -1)
			{
				func_349(iVar17, 0, iParam10);
			}
			__LIB_0__.func_346(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { func_356(iVar5, 14, uVar18[iVar1], -1) };
			func_196(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_354(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_345(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_231(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_196(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_354(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_231(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { func_356(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_339(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_345(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_231(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_345(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_231(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__.func_33(iParam1);
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
				iVar23 = __LIB_0__.func_338(iParam0, 11);
				iVar24 = __LIB_0__.func_338(iParam0, 8);
				iVar25 = __LIB_0__.func_338(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_334(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_334(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_0__.func_338(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_338(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = func_345(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__.func_334(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__.func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_0__.func_338(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__.func_334(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = func_335(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_231(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { func_356(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_334(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__.func_334(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__.func_334(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!func_334(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = func_333(iParam0, iParam2);
							iVar31 = func_335(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_231(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_356(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_231(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_356(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { func_356(iVar5, 11, iVar32, -1) };
									iVar31 = func_335(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__.func_334(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_231(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_356(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { func_356(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { func_356(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = func_333(iParam0, iParam2);
							Global_78130[1 /*14*/] = { func_356(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_10__.func_0(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__.func_334(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__.func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { func_356(iVar5, 11, iVar38, -1) };
										iVar39 = func_335(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { func_356(iVar5, 11, iVar38, -1) };
										iVar39 = func_335(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_334(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_334(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { func_356(iVar5, 11, iVar38, -1) };
									iVar39 = func_335(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = func_335(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_329(iVar5, __LIB_0__.func_338(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_329(iVar5, __LIB_0__.func_338(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_231(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { func_356(iVar5, 11, iVar38, -1) };
								iVar39 = func_335(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_231(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_231(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { func_356(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_326(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			__LIB_0__.func_346(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_338(iVar5, func_353(iParam0, 8, -1), iParam2, func_353(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__.func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__.func_534(2160, iParam10, 0);
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
						iVar42 = __LIB_18__.func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_274(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__.func_338(iParam0, 11);
				iVar45 = __LIB_0__.func_338(iParam0, 4);
				iVar46 = func_338(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = func_345(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__.func_334(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			__LIB_0__.func_346(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__.func_338(iParam0, 11);
			if (func_334(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_10__.func_0(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				func_326(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_338(iVar5, iParam2, __LIB_0__.func_338(iParam0, 11), __LIB_0__.func_338(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_0__.func_338(iParam0, 7);
				if (!func_271(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__.func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__.func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__.func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__.func_424(135, iParam10);
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
				__LIB_31__.func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_0__.func_338(iParam0, 11);
			iVar58 = __LIB_0__.func_338(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_329(iVar5, iParam2, __LIB_10__.func_0(iVar5, iVar58, 0)))
					{
						func_231(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { func_356(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_329(iVar5, iParam2, __LIB_10__.func_0(iVar5, iVar58, 0)))
					{
						func_231(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { func_356(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_338(iVar5, __LIB_0__.func_338(iParam0, 8), __LIB_0__.func_338(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_338(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = func_345(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__.func_334(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar60, iVar62) == iVar59)
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
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_345(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_231(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_338(iVar5, iVar3, __LIB_0__.func_338(iParam0, 11), __LIB_0__.func_338(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_345(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_231(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__.func_223(iParam0))
				{
					iVar63 = func_252(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_251(iParam0, 9, iVar63))
						{
							func_231(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_231(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_231(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__.func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__.func_183(iParam0, iVar64), __LIB_0__.func_217(iParam0, iVar64), __LIB_0__.func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__.func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__.func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__.func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__.func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_231(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_353(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_353(iParam0, 11, -1);
				}
				if (func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_776(iVar5, 4, iVar65, -1))
					{
						if (func_238(iVar5, 4, iVar65, &uVar67))
						{
							func_231(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_776(iVar5, 4, iVar65, -1))
				{
					if (func_237(iVar5, 4, iVar65, &uVar67))
					{
						func_231(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_0__.func_338(iParam0, 4);
				iVar75 = __LIB_0__.func_338(iParam0, 6);
				if (__LIB_0__.func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != func_235(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_231(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_231(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != func_234(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_231(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_231(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__.func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != func_234(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_231(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_231(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != func_235(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_231(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_231(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_339(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_345(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_231(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_345(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_231(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (__LIB_6__.func_775(iParam0, &uVar4))
		{
			func_231(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_231(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_231(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_231(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_353(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_231(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_234(int iParam0, int iParam1, int iParam2)//Position - 0x29F50
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = __LIB_0__.func_334(iParam0, iParam1, 6, 3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("COWBOY_BOOTS"), 0))
			{
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("GUN_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("GUN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("GORKA_SUIT"), 0))
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("PILOT_SUIT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("COWBOY_BOOTS"), 0))
				{
					return 1;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = __LIB_0__.func_334(iParam0, iParam1, 6, 4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("PILOT_SUIT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_235(int iParam0, int iParam1, int iParam2)//Position - 0x2A1CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = __LIB_0__.func_334(iParam0, iParam1, 4, 3);
				iVar1 = __LIB_0__.func_252(iVar0);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SKINNY"), 0)) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_0"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_1"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SHORTS"), 0))
				{
					iVar2 = 0;
				}
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BATTLE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BATTLE_DRAW_2"), 0))
				{
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0))
					{
						iVar2 = 1;
					}
				}
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = __LIB_0__.func_334(iParam0, iParam1, 4, 4);
				iVar1 = __LIB_0__.func_252(iVar0);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0))
				{
					if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("DUNGAREES"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("H3_DRAW_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_237(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x2A820
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = __LIB_0__.func_334(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = __LIB_6__.func_758(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_238(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x2A8C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = __LIB_0__.func_334(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = __LIB_6__.func_758(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_240(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2A9C7
{
	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = __LIB_0__.func_334(iParam0, iParam2, 11, 4);
						}
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_251(int iParam0, int iParam1, int iParam2)//Position - 0x2E0EC
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
	Global_78130[1 /*14*/] = { func_356(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__.func_180(iVar0, iParam2) };
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
				if (!func_251(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__.func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_251(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { func_356(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_251(iParam0, 14, iVar6))
										{
											if (!func_183(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_0__.func_338(iParam0, iVar4);
						Global_78130[2 /*14*/] = { func_356(iVar0, iVar4, iVar1, -1) };
						if (!func_183(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__.func_534(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_251(iParam0, 14, uVar11[iVar10]))
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
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (func_240(iVar0, 11, __LIB_0__.func_338(iParam0, 11), -1))
				{
					if (func_238(iVar0, 4, iParam2, &uVar18))
					{
						return func_251(iParam0, 4, uVar18);
					}
				}
				else if (func_237(iVar0, 4, iParam2, &uVar18))
				{
					return func_251(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_252(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2E546
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
	var uVar10;
	int iVar11;
	if (__LIB_0__.func_220(iParam0))
	{
		return -99;
	}
	if (__LIB_0__.func_222(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("MP_M_Freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = __LIB_0__.func_334(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != joaat("0"))
							{
								return __LIB_6__.func_758(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("MP_F_Freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = __LIB_0__.func_334(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						FILES::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != joaat("0"))
							{
								return __LIB_6__.func_758(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_271(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2F78F
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<7> Var21;
	int iVar22;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4538435 == iParam1)
		{
			iVar2 = Global_4538434;
			iVar1 = Global_4538433;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = __LIB_0__.func_334(iParam0, iParam1, 7, 3);
			iVar1 = __LIB_0__.func_252(iVar2);
			Global_4538435 = iParam1;
			Global_4538434 = iVar2;
			Global_4538433 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4538438 == iParam3)
		{
			iVar4 = Global_4538437;
			iVar3 = Global_4538436;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = __LIB_0__.func_334(iParam0, iParam3, 11, 3);
			iVar3 = __LIB_0__.func_252(iVar4);
			Global_4538438 = iParam3;
			Global_4538437 = iVar4;
			Global_4538436 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4538441 == iParam4)
		{
			iVar6 = Global_4538440;
			iVar5 = Global_4538439;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = __LIB_0__.func_334(iParam0, iParam4, 8, 3);
			iVar5 = __LIB_0__.func_252(iVar6);
			Global_4538441 = iParam4;
			Global_4538440 = iVar6;
			Global_4538439 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4538444 == iParam10)
		{
			iVar8 = Global_4538443;
			iVar7 = Global_4538442;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = __LIB_0__.func_334(iParam0, iParam10, 1, 3);
			iVar7 = __LIB_0__.func_252(iVar8);
			Global_4538444 = iParam10;
			Global_4538443 = iVar8;
			Global_4538442 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MORPH_SUIT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SCUBA_GEAR"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GORKA_SUIT"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("HEADSCARF"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("SMUG_DRAW_6"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HOOP_NECKLACE"), 0))
		{
			if (func_334(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("PILOT_SUIT"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("EPSILON_CHAIN"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TR_DRAW_0"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TR_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TR_DRAW_0"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TR_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("DESERT_SCARF"), 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = __LIB_0__.func_334(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case joaat("DLC_MP_XMAS2_M_PHEAD_5_0"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_5_1"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_5_2"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_5_3"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_5_4"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_5_5"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_5_6"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_5_7"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_2_0"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_2_1"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_2_2"):
					case joaat("DLC_MP_XMAS2_M_PHEAD_2_3"):
					case joaat("DLC_MP_EXEC_M_PHEAD_1_0"):
					case joaat("DLC_MP_BEACH_M_HEAD0_0"):
					case joaat("DLC_MP_BEACH_M_HEAD0_1"):
					case joaat("DLC_MP_BEACH_M_HEAD0_2"):
					case joaat("DLC_MP_BEACH_M_HEAD0_3"):
					case joaat("DLC_MP_BEACH_M_HEAD0_4"):
					case joaat("DLC_MP_BEACH_M_HEAD0_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_8"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_9"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_10"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_11"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_12"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_13"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_14"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_15"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_16"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_17"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_18"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_19"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_20"):
					case joaat("DLC_MP_GR_M_PHEAD_7_0"):
					case joaat("DLC_MP_GR_M_PHEAD_7_1"):
					case joaat("DLC_MP_GR_M_PHEAD_7_2"):
					case joaat("DLC_MP_GR_M_PHEAD_7_3"):
					case joaat("DLC_MP_GR_M_PHEAD_7_4"):
					case joaat("DLC_MP_GR_M_PHEAD_7_5"):
					case joaat("DLC_MP_GR_M_PHEAD_7_6"):
					case joaat("DLC_MP_GR_M_PHEAD_7_7"):
					case joaat("DLC_MP_GR_M_PHEAD_7_8"):
					case joaat("DLC_MP_GR_M_PHEAD_7_9"):
					case joaat("DLC_MP_GR_M_PHEAD_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SCARF"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_SCARF"), 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BLOCK_SCARFS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
					else if (func_273(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BLOCK_SCARFS"), 0))
				{
					return 0;
				}
				else if (func_273(iParam0, iParam3))
				{
					return 0;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("DESERT_SCARF"), 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("HEADSCARF"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_SCARF"), 0))
			{
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SCARF"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIG_CHAIN"), 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = __LIB_0__.func_334(iParam0, iParam11, 4, 3);
				}
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("DUNGAREES"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BEAD_NECKLACE"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIG_CHAIN"), 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BLOCK_CHAINS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TUX_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SCRUFFY_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET_ONLY"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
				{
					return 0;
				}
				else if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BLOCK_CHAINS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("STUNT_DRAW_2"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIG_CHAIN"), 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("FULL_BOWTIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMUG_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ASSAULT_DRAW_0"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("VEST_SHIRT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CLOSED_COLLAR"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("OPEN_COLLAR"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_SHIRT"), 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OUTFIT_CHECKS"), 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HIGH_ROLLER_TIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TIE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_334(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_SHIRT"), 0)))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = __LIB_0__.func_338(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && __LIB_0__.func_252(__LIB_0__.func_334(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_334(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("VEST_SHIRT"), 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_VEST"), 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_SHIRT"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = __LIB_0__.func_338(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && __LIB_0__.func_252(__LIB_0__.func_334(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("VEST_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_0")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_1")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_2")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_3")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_4")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_5")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_6")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_7")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_8")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_9")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_10")) || iVar4 == joaat("DLC_MP_VAL2_M_JBIB_0_11")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_0"), 0)) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_0")) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_1")) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_2")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_0")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_1")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_2")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_3"))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
					{
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("VEST_SHIRT"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TUX_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_VEST"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_TIE_ALT"), 0)) || (((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_SHIRT"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_TIE_ALT"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOOSE_BOWTIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_1")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_1")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_2")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_3")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_4")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_5")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_6")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_7")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_8")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_0")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_1")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRAW_11"), 0))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SWEAT_VEST"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOOSE_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_1")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_0")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_1")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("HEIST_DRAW_5"), 0))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SWEAT_VEST"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SLACK_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || __LIB_0__.func_234(iVar6)) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRAW_12"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SCARF"), 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_16"), 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4538435 == iParam1)
		{
			iVar12 = Global_4538434;
			iVar11 = Global_4538433;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = __LIB_0__.func_334(iParam0, iParam1, 7, 4);
			iVar11 = __LIB_0__.func_252(iVar12);
			Global_4538435 = iParam1;
			Global_4538434 = iVar12;
			Global_4538433 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4538438 == iParam3)
		{
			iVar14 = Global_4538437;
			iVar13 = Global_4538436;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = __LIB_0__.func_334(iParam0, iParam3, 11, 4);
			iVar13 = __LIB_0__.func_252(iVar14);
			Global_4538438 = iParam3;
			Global_4538437 = iVar14;
			Global_4538436 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4538441 == iParam4)
		{
			iVar16 = Global_4538440;
			iVar15 = Global_4538439;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = __LIB_0__.func_334(iParam0, iParam4, 8, 4);
			iVar15 = __LIB_0__.func_252(iVar16);
			Global_4538441 = iParam4;
			Global_4538440 = iVar16;
			Global_4538439 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4538444 == iParam10)
		{
			iVar18 = Global_4538443;
			iVar17 = Global_4538442;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = __LIB_0__.func_334(iParam0, iParam10, 1, 4);
			iVar17 = __LIB_0__.func_252(iVar18);
			Global_4538444 = iParam10;
			Global_4538443 = iVar18;
			Global_4538442 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = __LIB_0__.func_334(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("MORPH_SUIT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SCUBA_GEAR"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("CAT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("GORKA_SUIT"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("HEADSCARF"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("SMUG_DRAW_6"), 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("CUFF"), 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("HEADSCARF"), 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("EARRING"), 0)))
				{
					return 0;
				}
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HOOP_NECKLACE"), 0))
		{
			if (func_334(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("PILOT_SUIT"), 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("PILOT_SUIT"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("ARENA_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("EPSILON_CHAIN"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("ARENA_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TR_DRAW_0"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TR_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TR_DRAW_0"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("TR_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == joaat("DLC_MP_APA_F_TEETH_0_0") || iVar12 == joaat("DLC_MP_APA_F_TEETH_0_1")) || iVar12 == joaat("DLC_MP_APA_F_TEETH_0_2"))
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case joaat("DLC_MP_XMAS2_F_PHEAD_2_0"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_2_1"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_2_2"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_2_3"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_5_0"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_5_1"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_5_2"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_5_3"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_5_4"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_5_5"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_5_6"):
					case joaat("DLC_MP_XMAS2_F_PHEAD_5_7"):
					case joaat("DLC_MP_EXEC_F_PHEAD_1_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_8"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_9"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_10"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_11"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_12"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_13"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_14"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_15"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_16"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_17"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_18"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_19"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_20"):
					case joaat("DLC_MP_GR_F_PHEAD_7_0"):
					case joaat("DLC_MP_GR_F_PHEAD_7_1"):
					case joaat("DLC_MP_GR_F_PHEAD_7_2"):
					case joaat("DLC_MP_GR_F_PHEAD_7_3"):
					case joaat("DLC_MP_GR_F_PHEAD_7_4"):
					case joaat("DLC_MP_GR_F_PHEAD_7_5"):
					case joaat("DLC_MP_GR_F_PHEAD_7_6"):
					case joaat("DLC_MP_GR_F_PHEAD_7_7"):
					case joaat("DLC_MP_GR_F_PHEAD_7_8"):
					case joaat("DLC_MP_GR_F_PHEAD_7_9"):
					case joaat("DLC_MP_GR_F_PHEAD_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("OVER_JACKET"), 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("SCARF"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("JACKET_SCARF"), 0))
				{
					if ((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BLOCK_SCARFS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
					else if (func_273(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_273(iParam0, iParam3) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BLOCK_SCARFS"), 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("HEADSCARF"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_SCARF"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("SCARF"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BLOCK_SCARFS"), 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("CHAIN"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BLOCK_CHAINS"), 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("SCARF"), 0)) || (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("BIG_CHAIN"), 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = __LIB_0__.func_334(iParam0, iParam11, 4, 4);
				}
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("DUNGAREES"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TIE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("BOWTIE"), 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_9"), 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_13"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("BOWTIE"), 0))
					{
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
			else if (iParam2 == 8)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("OPEN_COLLAR"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("CLOSED_COLLAR"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TIE"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("HEIST_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("HEIST_DRAW_9"), 0))
						{
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("ALT_TIE"), 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("ALT_TIE"), 0))
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
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("EARRING"), 1)) || (iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("BLOCK_EARRINGS"), 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("EARRING"), 0)))
				{
					return 0;
				}
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HOOP_NECKLACE"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRESS"), 0))
			{
				return 1;
			}
		}
		if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BLOCK_CHAINS"), 0))
				{
					return 0;
				}
				else if (func_334(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("EXEC_DRAW_14"), 0)) || iVar14 == joaat("DLC_MP_IND_F_JBIB_1_0")) || iVar14 == joaat("DLC_MP_IND_F_JBIB_1_1")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SMUG_DRAW_5"), 0))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRESS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("VEST_SHIRT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("PILOT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("COMBAT_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("XMAS2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("XMAS2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("AIR_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("VNECK_SWEAT"), 0))
				{
					return 0;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("OFF_SHOULDER_ACCS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LUXE_DRAW_11"), 0)) || iVar16 == joaat("DLC_MP_HEIST_F_SPECIAL_12_0")) || iVar16 == joaat("DLC_MP_HEIST_F_SPECIAL_12_1")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_0")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_1")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_2")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_3")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_0")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_1")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_2")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_0")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_1")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_2")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("APART_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("SMUG_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BLOCK_CHAINS"), 0))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("VEST_SHIRT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("HEIST_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("APART_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("APART_DRAW_1"), 0))
				{
					return 0;
				}
				else if (__LIB_10__.func_0(iParam0, iParam4, 0) != -99)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("BEAD_NECKLACE"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_21"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("CUFF"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("CUFF"), 1))
				{
					FILES::GET_SHOP_PED_PROP(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("VEST_SHIRT"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_3"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE_DRAW_4"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_SWEAT"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_0"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("EXEC_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BIKER_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BIKER_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BIKER_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("AIR_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("ASSAULT_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LONG_NECKLACE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("HEIST_DRAW_3"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRAW_0"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE_DRAW_4"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_SWEAT"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_0"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_DRAW_3"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("VEST_SHIRT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("APART_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("EXEC_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("AIR_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BLOCK_CHAINS"), 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LONG_SLEEVE"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("COMBAT_GEAR"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_7"), 0))
				{
					if (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("VEST_SHIRT"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
				else if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_4"), 0))
				{
					return 0;
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("ALT_SPECIAL_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("ALT_SPECIAL_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("ALT_SPECIAL_6"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRESS"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW_SWEAT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRESS"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("SWEAT_VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("BASIC_VEST"), 0))
				{
					return 0;
				}
				else if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("STUNT_DRAW_4"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HIGH_ROLLER_TIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("HIGH_ROLLER_SHIRT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("BRACES"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_7"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar22 = -1;
				if (iParam11 >= 256)
				{
					iVar22 = __LIB_0__.func_334(iParam0, iParam11, 4, 4);
				}
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HIGH_WAIST"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_273(int iParam0, int iParam1)//Position - 0x348D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		iVar0 = __LIB_0__.func_334(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("JAN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("JAN_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("AIR_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("USE_JACKET_SCARF"), 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				return 1;
			}
		}
		return func_334(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		iVar1 = __LIB_0__.func_334(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = __LIB_0__.func_252(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("HEIST_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("LOW2_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("APART_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("APART_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("APART_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("APART_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("STUNT_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("STUNT_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("STUNT_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("STUNT_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("STUNT_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("STUNT_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("AIR_DRAW_0"), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_274(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x34E03
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_325(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = func_324(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		func_349(iVar1, 1, iParam2);
	}
	func_275(iParam0, bParam3, 0, -1);
}

void func_275(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x34E50
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
		iVar2 = __LIB_0__.func_250(iParam0);
		bVar3 = func_318(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_309(iParam0, iParam3);
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
			if (__LIB_0__.func_343(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_296(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_0__.func_343(123, iVar0))
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
					if (__LIB_0__.func_343(iVar10, iVar0))
					{
						if (func_296(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__.func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__.func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_296(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x3E754
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = __LIB_0__.func_242(iVar0, sParam1, iParam4);
		iParam4 = MISC::GET_HASH_KEY(__LIB_0__.func_241(iVar1));
	}
	if (iParam3 == joaat("mpDummy"))
	{
		return 0;
	}
	switch (iParam4)
	{
		case joaat("CHEST_FULL"):
		case joaat("CHEST_LEFT"):
		case joaat("CHEST_MID"):
		case joaat("CHEST_RIGHT"):
		case joaat("CHEST_STOM"):
		case joaat("CHEST_STOM_FULL"):
		case joaat("SIDE_RIGHT"):
		case joaat("TORSO_SIDE_LEFT"):
		case joaat("TORSO_SIDE_RIGHT"):
		case -1238079313:
		case joaat("STOMACH_FULL"):
		case joaat("STOMACH_LEFT"):
		case joaat("STOMACH_LOWER_LEFT"):
		case joaat("STOMACH_LOWER_RIGHT"):
		case joaat("STOMACH_MID"):
		case joaat("STOMACH_RIGHT"):
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == joaat("CHEST_FULL") || (iParam4 == joaat("CHEST_MID") && iVar0 == joaat("MP_F_Freemode_01"))) || iParam4 == joaat("CHEST_RIGHT")) || iParam4 == joaat("CHEST_STOM")) || iParam4 == joaat("CHEST_STOM_FULL"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_0__.func_343(13, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(14, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(15, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(16, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(71, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
						return 0;
					}
					else if (Global_4539561 == 14)
					{
						return 0;
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
						return 0;
					}
					else if (Global_4539561 == 71)
					{
						return 0;
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("CHEST_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_0__.func_343(13, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(14, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(15, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(16, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(71, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
						return 0;
					}
					else if (Global_4539561 == 14)
					{
						return 0;
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
						return 0;
					}
					else if (Global_4539561 == 71)
					{
						return 0;
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			else if ((iParam4 == joaat("STOMACH_FULL") || iParam4 == joaat("STOMACH_MID")) || iParam4 == joaat("STOMACH_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_0__.func_343(13, -1))
							{
							}
							else if (__LIB_0__.func_343(14, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(15, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(16, -1))
							{
							}
							else if (__LIB_0__.func_343(71, -1))
							{
								return 0;
							}
							else if (__LIB_0__.func_343(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
					}
					else if (Global_4539561 == 14)
					{
						return 0;
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
					}
					else if (Global_4539561 == 71)
					{
						return 0;
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("BACK_UPPER"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_0__.func_343(13, -1))
							{
							}
							else if (__LIB_0__.func_343(14, -1))
							{
							}
							else if (__LIB_0__.func_343(15, -1))
							{
							}
							else if (__LIB_0__.func_343(16, -1))
							{
							}
							else if (__LIB_0__.func_343(71, -1))
							{
							}
							else if (__LIB_0__.func_343(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
					}
					else if (Global_4539561 == 14)
					{
					}
					else if (Global_4539561 == 15)
					{
					}
					else if (Global_4539561 == 16)
					{
					}
					else if (Global_4539561 == 71)
					{
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			break;
		case joaat("BACK_1"):
		case joaat("BACK_FULL"):
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
		case joaat("BACK_FULL_SHORT"):
		case joaat("BACK_LOWER"):
		case joaat("BACK_MID"):
		case joaat("BACK_UPPER"):
		case joaat("BACK_UPPER_LEFT"):
		case joaat("BACK_UPPER_RIGHT"):
			if (bParam8)
			{
				return 0;
			}
			if (!bParam6)
			{
				if (Global_4539561 == -1)
				{
					if (!Global_100493.f_1554)
					{
						if (__LIB_0__.func_343(13, -1))
						{
						}
						else if (__LIB_0__.func_343(14, -1))
						{
						}
						else if (__LIB_0__.func_343(15, -1))
						{
							return 0;
						}
						else if (__LIB_0__.func_343(16, -1))
						{
						}
						else if (__LIB_0__.func_343(71, -1))
						{
						}
						else if (__LIB_0__.func_343(72, -1))
						{
							return 0;
						}
					}
				}
				else if (Global_4539561 == 13)
				{
				}
				else if (Global_4539561 == 14)
				{
				}
				else if (Global_4539561 == 15)
				{
					return 0;
				}
				else if (Global_4539561 == 16)
				{
				}
				else if (Global_4539561 == 71)
				{
				}
				else if (Global_4539561 == 72)
				{
					return 0;
				}
			}
			break;
		case joaat("crewLogo"):
			if (bParam8)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_0__.func_343(15, -1))
							{
								return 0;
							}
						}
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
				}
			}
			if (bParam6)
			{
				return 0;
			}
			if (bParam5)
			{
				if (Global_4539561 == -1)
				{
					if (!Global_100493.f_1554)
					{
						if (__LIB_0__.func_343(13, -1))
						{
							return 0;
						}
						else if (__LIB_0__.func_343(14, -1))
						{
							return 0;
						}
						else if (__LIB_0__.func_343(15, -1))
						{
							if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */))
							{
								return 0;
							}
						}
						else if (__LIB_0__.func_343(16, -1))
						{
						}
						else if (__LIB_0__.func_343(71, -1))
						{
						}
						else if (__LIB_0__.func_343(72, -1))
						{
						}
					}
				}
				else if (Global_4539561 == 13)
				{
					return 0;
				}
				else if (Global_4539561 == 14)
				{
					return 0;
				}
				else if (Global_4539561 == 15)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */))
					{
						return 0;
					}
				}
				else if (Global_4539561 == 16)
				{
				}
				else if (Global_4539561 == 71)
				{
				}
				else if (Global_4539561 == 72)
				{
				}
			}
			break;
		case 0:
		case 2:
		case joaat("rank"):
			if (bParam5)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					switch (MISC::GET_HASH_KEY(sParam1))
					{
						case joaat("TAT_FM_011"):
						case joaat("TAT_FM_012"):
						case joaat("TAT_FM_019"):
						case joaat("TAT_FM_020"):
						case joaat("TAT_FM_021"):
						case joaat("TAT_FM_218"):
						case joaat("TAT_FM_219"):
						case joaat("TAT_FM_220"):
						case joaat("TAT_FM_225"):
						case joaat("TAT_FM_226"):
						case joaat("TAT_FM_230"):
						case joaat("TAT_FM_233"):
						case joaat("TAT_FM_235"):
						case joaat("TAT_FM_237"):
						case joaat("TAT_FM_245"):
							return 0;
							break;
						}
					}
			}
			if (iVar0 == joaat("MP_M_Freemode_01"))
			{
			}
			else if (iVar0 == joaat("MP_F_Freemode_01"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_0__.func_343(13, -1))
							{
							}
							else if (__LIB_0__.func_343(14, -1))
							{
							}
							else if (__LIB_0__.func_343(15, -1))
							{
							}
							else if (__LIB_0__.func_343(16, -1))
							{
							}
							else if (__LIB_0__.func_343(71, -1))
							{
							}
							else if (__LIB_0__.func_343(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
						return 0;
					}
					else if (Global_4539561 == 14)
					{
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
					}
					else if (Global_4539561 == 71)
					{
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			break;
		case joaat("torsoDecal"):
			if (bParam7)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_309(int iParam0, int iParam1)//Position - 0x43F6F
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_353(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_334(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
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
				iVar5 = func_353(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__.func_334(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_318(int iParam0, bool bParam1)//Position - 0x443CE
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
							iVar2 = func_322(joaat("MP_M_Freemode_01"), 11, func_353(iParam0, 11, -1), 0);
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
						if (__LIB_0__.func_343(13, -1))
						{
							return 1;
						}
						else if (__LIB_0__.func_343(14, -1))
						{
							return 1;
						}
						else if (__LIB_0__.func_343(15, -1))
						{
							return 1;
						}
						else if (__LIB_0__.func_343(16, -1))
						{
							return 1;
						}
						else if (__LIB_0__.func_343(71, -1))
						{
							return 1;
						}
						else if (__LIB_0__.func_343(72, -1))
						{
						}
						else if (__LIB_18__.func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_353(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__.func_334(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_353(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__.func_334(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = func_322(joaat("MP_F_Freemode_01"), 11, func_353(iParam0, 11, -1), 0);
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
						iVar8 = func_353(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__.func_334(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = func_322(joaat("MP_F_Freemode_01"), 11, func_353(iParam0, 11, -1), 0);
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
							iVar11 = func_322(joaat("MP_F_Freemode_01"), 11, func_353(iParam0, 11, -1), 0);
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
						iVar12 = func_353(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__.func_334(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_322(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x44CC4
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
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (__LIB_18__.func_349(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (__LIB_18__.func_349(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = __LIB_0__.func_334(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar1 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != joaat("0"))
								{
									return __LIB_0__.func_240(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = __LIB_0__.func_534(1759, -1, 0);
						}
						return __LIB_0__.func_240(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (__LIB_18__.func_349(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (__LIB_18__.func_349(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (__LIB_18__.func_349(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				return 88;
			}
			else if (iParam2 == 236)
			{
				if (__LIB_18__.func_349(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = __LIB_0__.func_334(iParam0, iParam2, 8, 3);
				if (iVar6 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar7 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != joaat("0"))
								{
									return __LIB_0__.func_240(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = __LIB_0__.func_534(1759, -1, 0);
						}
						return __LIB_0__.func_240(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (__LIB_18__.func_349(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (__LIB_18__.func_349(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = __LIB_0__.func_334(iParam0, iParam2, 11, 4);
				if (iVar12 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar13 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							FILES::GET_FORCED_COMPONENT(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != joaat("0"))
								{
									return __LIB_0__.func_240(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = __LIB_0__.func_534(1759, -1, 0);
						}
						return __LIB_0__.func_240(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (__LIB_18__.func_349(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (__LIB_18__.func_349(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (__LIB_18__.func_349(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				return 88;
			}
			else if (iParam2 == 25)
			{
				if (__LIB_18__.func_349(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = __LIB_0__.func_334(iParam0, iParam2, 8, 4);
				if (iVar18 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar19 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							FILES::GET_FORCED_COMPONENT(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != joaat("0"))
								{
									return __LIB_0__.func_240(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = __LIB_0__.func_534(1759, -1, 0);
						}
						return __LIB_0__.func_240(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

int func_324(int iParam0, int iParam1)//Position - 0x4554B
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
	var uVar10;
	int iVar11;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 95;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 96;
		}
		else if (iParam1 == 25)
		{
			return 96;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 97;
		}
		else if (iParam1 == 31)
		{
			return 97;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 98;
		}
		else if (iParam1 == 36)
		{
			return 98;
		}
		else if (iParam1 == 37)
		{
			return 98;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 99;
		}
		else if (iParam1 == 42)
		{
			return 99;
		}
		else if (iParam1 == 43)
		{
			return 99;
		}
		else if (iParam1 == 44)
		{
			return 99;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 100;
		}
		else if (iParam1 == 48)
		{
			return 100;
		}
		else if (iParam1 == 49)
		{
			return 100;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 101;
		}
		else if (iParam1 == 54)
		{
			return 101;
		}
		else if (iParam1 == 55)
		{
			return 101;
		}
		else if (iParam1 == 56)
		{
			return 101;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 102;
		}
		else if (iParam1 == 61)
		{
			return 102;
		}
		else if (iParam1 == 62)
		{
			return 102;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 103;
		}
		else if (iParam1 == 68)
		{
			return 103;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 104;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return 105;
		}
		else if (iParam1 == 80)
		{
			return 106;
		}
		else if (iParam1 == 81)
		{
			return 106;
		}
		else if (iParam1 == 82)
		{
			return 106;
		}
		else if (iParam1 == 83)
		{
			return 106;
		}
		else if (iParam1 == 84)
		{
			return 106;
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 >= 91)
		{
			iVar0 = __LIB_0__.func_334(iParam0, iParam1, 2, 3);
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case joaat("DLC_MP_BEACH_M_HAIR00"):
					case joaat("DLC_MP_BEACH_M_HAIR01"):
					case joaat("DLC_MP_BEACH_M_HAIR02"):
					case joaat("DLC_MP_BEACH_M_HAIR03"):
					case joaat("DLC_MP_BEACH_M_HAIR04"):
					case joaat("DLC_MP_GR_M_HAIR_15_0"):
						return 108;
						break;
					case joaat("DLC_MP_BEACH_M_HAIR05"):
					case joaat("DLC_MP_BEACH_M_HAIR06"):
					case joaat("DLC_MP_BEACH_M_HAIR07"):
					case joaat("DLC_MP_BEACH_M_HAIR08"):
					case joaat("DLC_MP_BEACH_M_HAIR09"):
					case joaat("DLC_MP_GR_M_HAIR_16_0"):
						return 109;
						break;
					case joaat("DLC_MP_BUSI_M_HAIR0_0"):
					case joaat("DLC_MP_BUSI_M_HAIR0_1"):
					case joaat("DLC_MP_BUSI_M_HAIR0_2"):
					case joaat("DLC_MP_BUSI_M_HAIR0_3"):
					case joaat("DLC_MP_BUSI_M_HAIR0_4"):
						return 110;
						break;
					case joaat("DLC_MP_BUSI_M_HAIR1_0"):
					case joaat("DLC_MP_BUSI_M_HAIR1_1"):
					case joaat("DLC_MP_BUSI_M_HAIR1_2"):
					case joaat("DLC_MP_BUSI_M_HAIR1_3"):
					case joaat("DLC_MP_BUSI_M_HAIR1_4"):
						return 111;
						break;
					case joaat("DLC_MP_HIPS_M_HAIR0_0"):
					case joaat("DLC_MP_HIPS_M_HAIR0_1"):
					case joaat("DLC_MP_HIPS_M_HAIR0_2"):
					case joaat("DLC_MP_HIPS_M_HAIR0_3"):
					case joaat("DLC_MP_HIPS_M_HAIR0_4"):
						return 112;
						break;
					case joaat("DLC_MP_HIPS_M_HAIR1_0"):
					case joaat("DLC_MP_HIPS_M_HAIR1_1"):
					case joaat("DLC_MP_HIPS_M_HAIR1_2"):
					case joaat("DLC_MP_HIPS_M_HAIR1_3"):
					case joaat("DLC_MP_HIPS_M_HAIR1_4"):
						return 113;
						break;
					case joaat("CLO_IND_H_0_0"):
					case joaat("CLO_IND_H_0_1"):
					case joaat("CLO_IND_H_0_2"):
					case joaat("CLO_IND_H_0_3"):
					case joaat("CLO_IND_H_0_4"):
						return 114;
						break;
				}
				iVar1 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10)
					{
						if (iVar3 != 0 && iVar3 != joaat("0"))
						{
							return __LIB_0__.func_240(iVar3, 3);
						}
						else
						{
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 96;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 97;
		}
		else if (iParam1 == 25)
		{
			return 97;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 98;
		}
		else if (iParam1 == 31)
		{
			return 98;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 99;
		}
		else if (iParam1 == 36)
		{
			return 99;
		}
		else if (iParam1 == 37)
		{
			return 99;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 100;
		}
		else if (iParam1 == 42)
		{
			return 100;
		}
		else if (iParam1 == 43)
		{
			return 100;
		}
		else if (iParam1 == 44)
		{
			return 100;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 101;
		}
		else if (iParam1 == 48)
		{
			return 101;
		}
		else if (iParam1 == 49)
		{
			return 101;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 102;
		}
		else if (iParam1 == 54)
		{
			return 102;
		}
		else if (iParam1 == 55)
		{
			return 102;
		}
		else if (iParam1 == 56)
		{
			return 102;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 103;
		}
		else if (iParam1 == 61)
		{
			return 103;
		}
		else if (iParam1 == 62)
		{
			return 103;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 104;
		}
		else if (iParam1 == 68)
		{
			return 104;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 105;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 80)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 81)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 82)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 83)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 84)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 == 91)
		{
			return 107;
		}
		else if (iParam1 >= 92)
		{
			iVar6 = __LIB_0__.func_334(iParam0, iParam1, 2, 4);
			if (iVar6 != -1)
			{
				switch (iVar6)
				{
					case joaat("DLC_MP_BEACH_F_HAIR00"):
					case joaat("DLC_MP_BEACH_F_HAIR01"):
					case joaat("DLC_MP_BEACH_F_HAIR02"):
					case joaat("DLC_MP_BEACH_F_HAIR03"):
					case joaat("DLC_MP_BEACH_F_HAIR04"):
					case joaat("DLC_MP_GR_F_HAIR_16_0"):
						return 108;
						break;
					case joaat("DLC_MP_BEACH_F_HAIR05"):
					case joaat("DLC_MP_BEACH_F_HAIR06"):
					case joaat("DLC_MP_BEACH_F_HAIR07"):
					case joaat("DLC_MP_BEACH_F_HAIR08"):
					case joaat("DLC_MP_BEACH_F_HAIR09"):
					case joaat("DLC_MP_GR_F_HAIR_15_0"):
						return 109;
						break;
					case joaat("DLC_MP_BUSI_F_HAIR0_0"):
					case joaat("DLC_MP_BUSI_F_HAIR0_1"):
					case joaat("DLC_MP_BUSI_F_HAIR0_2"):
					case joaat("DLC_MP_BUSI_F_HAIR0_3"):
					case joaat("DLC_MP_BUSI_F_HAIR0_4"):
						return 110;
						break;
					case joaat("DLC_MP_BUSI_F_HAIR1_0"):
					case joaat("DLC_MP_BUSI_F_HAIR1_1"):
					case joaat("DLC_MP_BUSI_F_HAIR1_2"):
					case joaat("DLC_MP_BUSI_F_HAIR1_3"):
					case joaat("DLC_MP_BUSI_F_HAIR1_4"):
						return 111;
						break;
					case joaat("DLC_MP_HIPS_F_HAIR0_0"):
					case joaat("DLC_MP_HIPS_F_HAIR0_1"):
					case joaat("DLC_MP_HIPS_F_HAIR0_2"):
					case joaat("DLC_MP_HIPS_F_HAIR0_3"):
					case joaat("DLC_MP_HIPS_F_HAIR0_4"):
						return 112;
						break;
					case joaat("DLC_MP_HIPS_F_HAIR1_0"):
					case joaat("DLC_MP_HIPS_F_HAIR1_1"):
					case joaat("DLC_MP_HIPS_F_HAIR1_2"):
					case joaat("DLC_MP_HIPS_F_HAIR1_3"):
					case joaat("DLC_MP_HIPS_F_HAIR1_4"):
						return 112;
						break;
					case joaat("CLO_INDF_H_0_0"):
					case joaat("CLO_INDF_H_0_1"):
					case joaat("CLO_INDF_H_0_2"):
					case joaat("CLO_INDF_H_0_3"):
					case joaat("CLO_INDF_H_0_4"):
						return 114;
						break;
				}
				iVar7 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10)
					{
						if (iVar9 != 0 && iVar9 != joaat("0"))
						{
							return __LIB_0__.func_240(iVar9, 4);
						}
						else
						{
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return -1;
}

void func_325(int iParam0, int iParam1)//Position - 0x46364
{
	struct<12> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	int iVar8;
	int iVar9;
	struct<7> Var10;
	int iVar11;
	int iVar12;
	struct<7> Var13;
	int iVar14;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar1 = __LIB_0__.func_250(iParam1);
		if (iParam0 != 0)
		{
			if (iVar1 == 3 || iVar1 == 4)
			{
				if (iParam0 == joaat("crewLogo"))
				{
					func_349(13, 0, Global_78127);
					func_349(14, 0, Global_78127);
					func_349(15, 0, Global_78127);
					func_349(16, 0, Global_78127);
					func_349(71, 0, Global_78127);
					func_349(72, 0, Global_78127);
					return;
				}
				else if (iParam0 == joaat("torsoDecal"))
				{
					if (iVar1 == 3)
					{
						func_349(73, 0, Global_78127);
						func_349(74, 0, Global_78127);
						func_349(75, 0, Global_78127);
						func_349(76, 0, Global_78127);
						func_349(77, 0, Global_78127);
						func_349(78, 0, Global_78127);
						func_349(79, 0, Global_78127);
						func_349(80, 0, Global_78127);
						func_349(81, 0, Global_78127);
						func_349(82, 0, Global_78127);
						func_349(83, 0, Global_78127);
						func_349(84, 0, Global_78127);
						func_349(85, 0, Global_78127);
						func_349(86, 0, Global_78127);
						func_349(90, 0, Global_78127);
						func_349(91, 0, Global_78127);
						func_349(124, 0, Global_78127);
						func_349(125, 0, Global_78127);
						func_349(87, 0, Global_78127);
						func_349(88, 0, Global_78127);
						func_349(89, 0, Global_78127);
						iVar3 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar2, &Var4))
							{
								if (Var4.f_6 == joaat("torsoDecal"))
								{
									func_349((129 + iVar2), 0, Global_78127);
								}
							}
							iVar2++;
						}
					}
					else
					{
						func_349(73, 0, Global_78127);
						func_349(74, 0, Global_78127);
						func_349(75, 0, Global_78127);
						func_349(76, 0, Global_78127);
						func_349(77, 0, Global_78127);
						func_349(78, 0, Global_78127);
						func_349(79, 0, Global_78127);
						func_349(80, 0, Global_78127);
						func_349(81, 0, Global_78127);
						func_349(82, 0, Global_78127);
						func_349(83, 0, Global_78127);
						func_349(84, 0, Global_78127);
						func_349(85, 0, Global_78127);
						func_349(92, 0, Global_78127);
						func_349(87, 0, Global_78127);
						func_349(88, 0, Global_78127);
						func_349(89, 0, Global_78127);
						iVar6 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar5, &Var7))
							{
								if (Var7.f_6 == joaat("torsoDecal"))
								{
									func_349((129 + iVar5), 0, Global_78127);
								}
							}
							iVar5++;
						}
					}
				}
				else if (iParam0 == joaat("hairOverlay"))
				{
					if (iVar1 == 3)
					{
						func_349(93, 0, Global_78127);
						func_349(94, 0, Global_78127);
						func_349(95, 0, Global_78127);
						func_349(96, 0, Global_78127);
						func_349(97, 0, Global_78127);
						func_349(98, 0, Global_78127);
						func_349(99, 0, Global_78127);
						func_349(100, 0, Global_78127);
						func_349(101, 0, Global_78127);
						func_349(102, 0, Global_78127);
						func_349(103, 0, Global_78127);
						func_349(104, 0, Global_78127);
						func_349(105, 0, Global_78127);
						func_349(106, 0, Global_78127);
						func_349(107, 0, Global_78127);
						func_349(108, 0, Global_78127);
						func_349(109, 0, Global_78127);
						func_349(110, 0, Global_78127);
						func_349(111, 0, Global_78127);
						func_349(112, 0, Global_78127);
						func_349(113, 0, Global_78127);
						func_349(114, 0, Global_78127);
						func_349(115, 0, Global_78127);
						func_349(116, 0, Global_78127);
						func_349(117, 0, Global_78127);
						func_349(123, 0, Global_78127);
						iVar9 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar8 = 0;
						while (iVar8 < iVar9)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar8, &Var10))
							{
								if (Var10.f_6 == joaat("hairOverlay"))
								{
									func_349((129 + iVar8), 0, Global_78127);
								}
							}
							iVar8++;
						}
					}
					else
					{
						func_349(93, 0, Global_78127);
						func_349(94, 0, Global_78127);
						func_349(95, 0, Global_78127);
						func_349(96, 0, Global_78127);
						func_349(97, 0, Global_78127);
						func_349(98, 0, Global_78127);
						func_349(99, 0, Global_78127);
						func_349(100, 0, Global_78127);
						func_349(101, 0, Global_78127);
						func_349(102, 0, Global_78127);
						func_349(103, 0, Global_78127);
						func_349(104, 0, Global_78127);
						func_349(105, 0, Global_78127);
						func_349(106, 0, Global_78127);
						func_349(107, 0, Global_78127);
						func_349(108, 0, Global_78127);
						func_349(109, 0, Global_78127);
						func_349(110, 0, Global_78127);
						func_349(111, 0, Global_78127);
						func_349(112, 0, Global_78127);
						func_349(113, 0, Global_78127);
						func_349(114, 0, Global_78127);
						func_349(115, 0, Global_78127);
						func_349(116, 0, Global_78127);
						func_349(117, 0, Global_78127);
						func_349(118, 0, Global_78127);
						func_349(119, 0, Global_78127);
						func_349(120, 0, Global_78127);
						func_349(121, 0, Global_78127);
						func_349(122, 0, Global_78127);
						func_349(123, 0, Global_78127);
						iVar12 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar11 = 0;
						while (iVar11 < iVar12)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar11, &Var13))
							{
								if (Var13.f_6 == joaat("hairOverlay"))
								{
									func_349((129 + iVar11), 0, Global_78127);
								}
							}
							iVar11++;
						}
					}
					return;
				}
			}
			iVar14 = 0;
			while (iVar14 < 127)
			{
				if (__LIB_6__.func_785(&Var0, iVar14, iVar1, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_349(Var0.f_11, 0, Global_78127);
					}
				}
				iVar14++;
			}
		}
	}
}

int func_326(int iParam0, int iParam1)//Position - 0x46961
{
	int iVar0;
	iVar0 = func_352();
	if (iVar0 != -1)
	{
		if (!func_327(iParam0, iParam1, iVar0))
		{
			func_349(iVar0, 0, Global_78127);
			return 1;
		}
	}
	return 0;
}

int func_327(int iParam0, int iParam1, int iParam2)//Position - 0x46993
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!func_334(iParam0, iParam1, -1))
	{
		if (iParam0 == joaat("MP_M_Freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = __LIB_0__.func_334(iParam0, iParam1, 11, 3);
				iVar0 = __LIB_0__.func_252(iVar1);
			}
			if (iVar1 != -1 && __LIB_0__.func_219(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && __LIB_0__.func_251(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("NO_CREW_EMBLEM"), 0))
			{
				return 0;
			}
			if ((iVar1 == joaat("DLC_MP_VAL_M_JBIB2_0") || iVar1 == joaat("DLC_MP_VAL_M_JBIB2_1")) || iVar1 == joaat("DLC_MP_VAL_M_JBIB2_2"))
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_322(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("MP_F_Freemode_01"))
		{
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = __LIB_0__.func_334(iParam0, iParam1, 11, 4);
				iVar2 = __LIB_0__.func_252(iVar3);
			}
			if (iVar3 != -1 && __LIB_0__.func_219(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && __LIB_0__.func_251(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("NO_CREW_EMBLEM"), 0))
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_322(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_322(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_329(int iParam0, int iParam1, int iParam2)//Position - 0x46E49
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		iVar0 = -1;
		iVar1 = -1;
		if (iParam1 >= 256)
		{
			iVar0 = __LIB_0__.func_334(iParam0, iParam1, 4, 3);
			iVar1 = __LIB_0__.func_252(iVar0);
		}
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = __LIB_0__.func_334(iParam0, iParam2, 11, 3);
			iVar3 = __LIB_0__.func_252(iVar2);
		}
		if (iVar2 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SANTA_SUIT"), 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SANTA_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("MORPH_SUIT"), 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("MORPH_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("GORKA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_ROBE"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TUX_PANTS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TUX_PANTS"), 0))
			{
				return 1;
			}
		}
		else if (iVar0 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TUX_PANTS"), 0))
			{
				return 1;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SANTA_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("MORPH_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("GORKA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_ROBE"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0))
		{
			if (((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 112 && iParam1 <= 127)) || (iParam1 >= 128 && iParam1 <= 143)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 224 && iParam1 <= 239)) || iVar1 == 0) || iVar1 == 3) || iVar1 == 4) || iVar1 == 7) || iVar1 == 8) || iVar1 == 11) || iVar1 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_4"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		switch (iVar0)
		{
			case joaat("DLC_MP_VAL_M_LEGS1_0"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_0"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_1"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_2"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_3"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_4"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_5"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_6"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_7"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_8"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_9"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_10"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_11"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_12"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_13"):
				if ((((((((((((((((iParam2 >= 204 && iParam2 <= 219) || iVar3 == 13) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_0")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_1")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_2")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_3")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_4")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_5")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_6")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_7")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_8")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_9")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_10")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_11")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUCKED"), 0))
				{
					return 0;
				}
				break;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SCRUFFY_JACKET"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_3"), 0))
			{
				return 0;
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 256)
		{
			iVar4 = __LIB_0__.func_334(iParam0, iParam1, 4, 4);
			iVar5 = __LIB_0__.func_252(iVar4);
		}
		iVar6 = -1;
		if (iParam2 >= 256)
		{
			iVar6 = __LIB_0__.func_334(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SANTA_SUIT"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MORPH_SUIT"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MORPH_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CAT_SUIT"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CAT_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CAT_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CAT_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GORKA_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("GORKA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRESS"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MINI_DRESS"), 0))
				{
					if ((((((((((((((((((((((((((((((((iParam1 >= 240 && iParam1 <= 255) || iVar5 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR100")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR101")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR102")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR103")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR104")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR105")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR106")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR107")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR108")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR109")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR110")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR111")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_0")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_1")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_2")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_3")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_0")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_1")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_2")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_3")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_5")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_6")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_7")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_8")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_9")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_10")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_11")) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STOCKINGS"), 0)))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STOCKINGS"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
			{
				if (((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRESS"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MINI_DRESS"), 0)) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("STOCKINGS"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if ((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("VEST_SHIRT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("XMAS2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("XMAS2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("APART_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("APART_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("APART_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUCKED"), 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STOCKINGS"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR100")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR101")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR102")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR103")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR104")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR105")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR106")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR107")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR108")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR109")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR110")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR111")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_0")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_1")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_2")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_3")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_0")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_1")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_2")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_3")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_5")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_6")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_7")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_8")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_9")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_10")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_11"))
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRAW_0"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SMUG_DRAW_5"), 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STOCKINGS"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR100")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR101")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR102")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR103")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR104")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR105")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR106")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR107")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR108")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR109")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR110")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR111")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_0")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_1")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_2")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_3")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_0")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_1")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_2")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_3")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_5")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_6")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_7")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_8")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_9")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_10")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_11"))
				{
					return 0;
				}
			}
		}
		if (iVar4 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MORPH_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CAT_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CAT_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GORKA_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("GORKA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
			{
				if (((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRESS"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MINI_DRESS"), 0)) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("STOCKINGS"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIGH_WAIST"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW2_DRAW_7"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW2_DRAW_7"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIGH_WAIST"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAILS_JACKET"), 0))
			{
				return 0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("APART_DRAW_22"), 0))
		{
			if (((((((((((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_GEAR"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_1"), 0))
			{
				return 0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("APART_DRAW_25"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_DRAW_33"), 0))
		{
			if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STOCKINGS"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR100")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR101")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR102")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR103")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR104")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR105")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR106")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR107")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR108")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR109")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR110")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR111")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_0")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_1")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_2")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_3")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_0")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_1")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_2")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_3")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_5")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_6")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_7")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_8")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_9")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_10")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_11"))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_333(int iParam0, int iParam1)//Position - 0x48B85
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_103234 != -99)
	{
		if (Global_103235 == 11)
		{
			Global_78130[1 /*14*/] = { func_356(ENTITY::GET_ENTITY_MODEL(iParam0), 11, Global_103234, -1) };
			iVar0 = func_335(ENTITY::GET_ENTITY_MODEL(iParam0), Global_103234, iParam1, Global_78130[1 /*14*/].f_4);
			if (iVar0 != -99)
			{
				return iVar0;
			}
		}
		else if (Global_103235 == 8)
		{
			iVar1 = __LIB_10__.func_0(ENTITY::GET_ENTITY_MODEL(iParam0), Global_103234, Global_103236);
			if (iVar1 != -99)
			{
				Global_78130[1 /*14*/] = { func_356(ENTITY::GET_ENTITY_MODEL(iParam0), 11, iVar1, -1) };
				iVar2 = func_335(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, iParam1, Global_78130[1 /*14*/].f_4);
				if (iVar2 != -99)
				{
					return iVar2;
				}
			}
			else
			{
				return Global_103234;
			}
		}
	}
	return -99;
}

int func_334(int iParam0, int iParam1, int iParam2)//Position - 0x48C57
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 237)
			{
				iParam2 = __LIB_0__.func_334(iParam0, iParam1, 11, 3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("JACKET"), 0))
			{
				return 1;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 256)
			{
				iParam2 = __LIB_0__.func_334(iParam0, iParam1, 11, 4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("JACKET"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_335(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x48DB0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
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
	bool bVar29;
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
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	iVar0 = -99;
	iVar1 = 1;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = __LIB_0__.func_334(iParam0, iParam2, 11, 3);
			iVar3 = __LIB_0__.func_252(iVar2);
		}
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 237)
		{
			iVar4 = __LIB_0__.func_334(iParam0, iParam1, 11, 3);
			iVar5 = __LIB_0__.func_252(iVar4);
		}
		if (iVar2 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				return -99;
			}
		}
		if (iVar2 != -1)
		{
			if (((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JAN_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
			{
				if ((((((iParam1 >= 124 && iParam1 <= 139) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 8) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
				if (((((((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0))
					{
						return -99;
					}
				}
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JAN_DRAW_1"), 0))
			{
				return -99;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_6"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_3"), 0))
			{
				return -99;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0))
			{
				if ((((((((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 140 && iParam1 <= 155)) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 5) || iVar5 == 8) || iVar5 == 9) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
			{
				return -99;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0)
				{
				}
				else
				{
					return -99;
				}
			}
		}
		iVar6 = 0;
		bVar7 = false;
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
		{
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_0"), 8, 3);
							break;
						case 1:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_1"), 8, 3);
							break;
						case 2:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_2"), 8, 3);
							break;
						case 3:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_3"), 8, 3);
							break;
						case 4:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_4"), 8, 3);
							break;
						case 5:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_5"), 8, 3);
							break;
						case 7:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_6"), 8, 3);
							break;
						case 8:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_7"), 8, 3);
							break;
						case 11:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_8"), 8, 3);
							break;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_0"), 8, 3);
							break;
						case 1:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_1"), 8, 3);
							break;
						case 2:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_2"), 8, 3);
							break;
						case 3:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_3"), 8, 3);
							break;
						case 4:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_4"), 8, 3);
							break;
						case 5:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_5"), 8, 3);
							break;
						case 7:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_6"), 8, 3);
							break;
						case 8:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_7"), 8, 3);
							break;
						case 11:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_8"), 8, 3);
							break;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_0"), 8, 3);
							break;
						case 1:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_1"), 8, 3);
							break;
						case 2:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_2"), 8, 3);
							break;
						case 3:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_3"), 8, 3);
							break;
						case 4:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_4"), 8, 3);
							break;
						case 5:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_5"), 8, 3);
							break;
						case 7:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_6"), 8, 3);
							break;
						case 8:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_7"), 8, 3);
							break;
						case 11:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_8"), 8, 3);
							break;
						}
				}
				return iVar0;
			}
			else if (iParam1 >= 236 && iParam1 <= 236)
			{
				iVar0 = 240;
				return iVar0;
			}
			else if (iParam1 >= 237)
			{
				bVar7 = true;
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
				{
					iVar6 = 4;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
				{
					iVar6 = 5;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
				{
					iVar6 = 6;
				}
				else
				{
					iVar6 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0))
		{
			bVar7 = true;
			iVar6 = 1;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
		{
			bVar7 = true;
			if (((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
			{
				iVar6 = 1;
			}
			else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_21"), 0))
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = -1;
			}
		}
		if (bVar7)
		{
			if (iVar6 != -1)
			{
				iVar8 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (((((((iVar6 == 6 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_6"), 0)) || (iVar6 == 5 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_5"), 0))) || (iVar6 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_4"), 0))) || (iVar6 == 3 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_3"), 0))) || (iVar6 == 2 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_2"), 0))) || (iVar6 == 1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL"), 0))) || ((((((iVar6 == 0 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_2"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_3"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_4"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_5"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_6"), 0)))
						{
							if (iVar10 != 0 && iVar10 != joaat("0"))
							{
								iVar0 = __LIB_6__.func_758(iParam0, iVar10, 8, 3);
							}
							else
							{
								iVar0 = iVar11;
							}
							iVar9 = iVar8 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
			return -99;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
		{
			if ((iParam1 >= 80 && iParam1 <= 95) || iVar5 == 5)
			{
				return -99;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_3"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
		{
			if ((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 140 && iParam1 <= 155)) || iVar5 == 5) || iVar5 == 9)
			{
				return -99;
			}
		}
		if ((iParam2 >= 96 && iParam2 <= 107) || iVar3 == 6)
		{
			if (iParam1 <= 15)
			{
				iVar0 = 32;
			}
			else if (iParam1 <= 31)
			{
				iVar0 = 224;
			}
			else if (iParam1 == 236)
			{
				iVar0 = 240;
			}
			else if (((iParam1 >= 220 && iParam1 <= 235) && __LIB_0__.func_253()) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0))
			{
				FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 10, -1, false, -1, 8);
				iVar13 = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(joaat("DLC_MP_BUSI_M_ACCS5_0"));
				iVar0 = (__LIB_0__.func_25(iParam0, __LIB_0__.func_33(8)) + iVar13);
				iVar1 = 1;
			}
			else
			{
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237)
				{
					iVar14 = __LIB_0__.func_334(iParam0, iParam1, 11, 3);
					if ((iVar14 != -1 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRAW_12"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRAW_8"), 0))
					{
						iVar15 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15)
						{
							FILES::GET_VARIANT_COMPONENT(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 8)
							{
								if (iVar17 != 0 && iVar17 != joaat("0"))
								{
									if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar17, joaat("ALT_SPECIAL_4"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar17, joaat("ALT_SPECIAL_5"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar17, joaat("ALT_SPECIAL_6"), 0))
									{
										iVar0 = __LIB_6__.func_758(iParam0, iVar17, 8, 3);
									}
								}
								else
								{
									iVar0 = iVar18;
								}
							}
							iVar16++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12)
		{
			if (((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 3) || iVar3 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0))
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			else
			{
				iVar20 = 0;
				if (iParam2 >= 236 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0))
				{
					iVar20 = 1;
				}
				iVar21 = __LIB_0__.func_334(iParam0, iParam1, 11, 3);
				if (iVar21 != -1)
				{
					iVar22 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar21);
					iVar23 = 0;
					while (iVar23 < iVar22)
					{
						FILES::GET_VARIANT_COMPONENT(iVar21, iVar23, &iVar24, &iVar25, &iVar26);
						if (iVar26 == 8 && iVar20 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar24, joaat("TAILS_VERSION"), 0))
						{
							if (iVar24 != 0 && iVar24 != joaat("0"))
							{
								iVar0 = __LIB_6__.func_758(iParam0, iVar24, 8, 3);
							}
							else
							{
								iVar0 = iVar25;
							}
							iVar23 = iVar22 + 1;
							iVar1 = 0;
						}
						iVar23++;
					}
				}
				else
				{
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_0"), 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = 2;
			iVar1 = 0;
			if (__LIB_0__.func_253())
			{
				iVar27 = joaat("DLC_MP_BUSI_M_ACCS4_0");
				if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)))
				{
					iVar27 = joaat("DLC_MP_BUSI_M_ACCS5_0");
				}
				FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 10, -1, false, -1, 8);
				iVar28 = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iVar27);
				iVar0 = (__LIB_0__.func_25(iParam0, __LIB_0__.func_33(8)) + iVar28);
				iVar1 = 1;
			}
			if ((((iParam2 >= 237 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0))
			{
				iVar0 = -99;
			}
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
			iVar1 = 0;
		}
		else if (iParam1 >= 237)
		{
			iVar0 = 2;
			iVar1 = 0;
			bVar29 = false;
			iVar30 = __LIB_0__.func_334(iParam0, iParam1, 11, 3);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_21"), 0))
			{
				bVar29 = true;
			}
			if (iVar30 != -1)
			{
				iVar31 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar30);
				iVar32 = 0;
				while (iVar32 < iVar31)
				{
					FILES::GET_VARIANT_COMPONENT(iVar30, iVar32, &iVar33, &iVar34, &iVar35);
					if (iVar35 == 8)
					{
						if (iVar33 != 0 && iVar33 != joaat("0"))
						{
							iVar0 = __LIB_6__.func_758(iParam0, iVar33, 8, 3);
							iVar1 = 0;
							if (!bVar29 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("ALT_SPECIAL"), 0))
							{
								iVar32 = iVar31 + 1;
							}
						}
						else
						{
							iVar0 = iVar34;
							iVar32 = iVar31 + 1;
							iVar1 = 0;
						}
					}
					iVar32++;
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		iVar36 = -1;
		iVar37 = -1;
		if (iParam2 >= 256)
		{
			iVar36 = __LIB_0__.func_334(iParam0, iParam2, 11, 4);
			iVar37 = __LIB_0__.func_252(iVar36);
		}
		iVar38 = -1;
		iVar39 = -1;
		if (iParam1 >= 256)
		{
			iVar38 = __LIB_0__.func_334(iParam0, iParam1, 11, 4);
			iVar39 = __LIB_0__.func_252(iVar38);
		}
		if (iVar36 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("JACKET_ONLY"), 0))
			{
				return -99;
			}
		}
		if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_6"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_1"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("STUNT_DRAW_5"), 0))
			{
				return -99;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LOW2_OPEN_CHECK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("OPEN_SHORT"), 0))
		{
			if (((((((((((((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar39 == 0) || iVar39 == 2) || iVar39 == 4) || iVar39 == 5) || iVar39 == 11) || iVar39 == 12) || iVar39 == 13) || iVar39 == 15) || iVar38 == joaat("DLC_MP_BUS2_F_JBIB0_0")) || iVar38 == joaat("DLC_MP_BUS2_F_JBIB0_1")) || iVar38 == joaat("DLC_MP_BUS2_F_JBIB0_2")) || iVar38 == joaat("DLC_MP_HIPS_F_JBIB7_0")) || iVar38 == joaat("DLC_MP_HIPS_F_JBIB7_1")) || iVar38 == joaat("DLC_MP_HIPS_F_JBIB7_2")) || iVar38 == joaat("DLC_MP_HIPS_F_JBIB7_3")) || iVar38 == joaat("DLC_MP_IND_F_JBIB_1_0")) || iVar38 == joaat("DLC_MP_LUXE_F_JBIB_3_0"))
			{
			}
			else
			{
				return -99;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("APART_DRAW_3"), 0))
		{
			return -99;
		}
		iVar40 = 0;
		bVar41 = false;
		if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("HEIST_DRAW_3"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LUXE_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("EXEC_DRAW_14"), 0))
		{
			bVar41 = true;
			if (((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar37 == 1) || iVar37 == 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("OPEN_SHORT"), 0))
			{
				iVar40 = 2;
			}
			else if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_0"), 0))
			{
				iVar40 = 0;
			}
			else if (((((((((((((iParam2 >= 160 && iParam2 <= 175) || iVar37 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_13"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW_DRAW_2"), 0))
				{
					iVar40 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW2_DRAW_0"), 0))
				{
					iVar40 = 1;
				}
				else
				{
					iVar40 = -1;
				}
			}
			else
			{
				iVar40 = 1;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("APART_DRAW_21"), 0))
		{
			bVar41 = true;
			if ((((((((((iParam2 >= 112 && iParam2 <= 127) || iVar37 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_9"), 0))
			{
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_0"), 0))
				{
					iVar40 = 0;
				}
				else
				{
					iVar40 = 1;
				}
			}
			else if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_12"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_22"), 0))
			{
				iVar40 = 0;
			}
			else
			{
				iVar40 = -1;
			}
		}
		switch (iVar38)
		{
			case joaat("DLC_MP_BUS2_F_JBIB0_0"):
			case joaat("DLC_MP_BUS2_F_JBIB0_1"):
			case joaat("DLC_MP_BUS2_F_JBIB0_2"):
			case joaat("DLC_MP_HIPS_F_JBIB7_0"):
			case joaat("DLC_MP_HIPS_F_JBIB7_1"):
			case joaat("DLC_MP_HIPS_F_JBIB7_2"):
			case joaat("DLC_MP_HIPS_F_JBIB7_3"):
			case joaat("DLC_MP_IND_F_JBIB_1_0"):
			case joaat("DLC_MP_LUXE_F_JBIB_3_0"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_0"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_1"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_2"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_3"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_4"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_5"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_6"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_7"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_8"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_9"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_10"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_11"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_12"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_13"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_14"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_15"):
				bVar41 = true;
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_0"), 0))
				{
					iVar40 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_1"), 0))
				{
					iVar40 = 2;
				}
				else if ((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_1"), 0))
				{
					iVar40 = 3;
				}
				else if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 112 && iParam2 <= 127)) || iVar37 == 1) || iVar37 == 7) || iVar37 == 8)
				{
					iVar40 = 0;
				}
				else
				{
					iVar40 = -1;
				}
				break;
			case joaat("DLC_MP_IND_F_JBIB_1_1"):
				bVar41 = true;
				if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar37 == 1) || iVar37 == 8)
				{
					iVar40 = 0;
				}
				else
				{
					iVar40 = -1;
				}
				break;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_5"), 0))
		{
			if ((iParam1 >= 240 && iParam1 <= 255) || iVar39 == 15)
			{
				iVar0 = 120;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW2_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW2_DRAW_1"), 0))
			{
				bVar41 = true;
				iVar40 = 0;
			}
			else
			{
				return iVar0;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("JACKET_ONLY"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("X17_DRAW_6"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar39 == 12)
				{
					return -99;
				}
			}
			if ((((((((((((iParam1 >= 64 && iParam1 <= 79) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar39 == 4) || iVar39 == 5) || iVar39 == 11) || iVar39 == 12) || iVar39 == 13) || iVar39 == 15)
			{
				bVar41 = false;
			}
			else if (iParam1 >= 256)
			{
				bVar41 = true;
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_13"), 0))
				{
					iVar40 = 4;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_1"), 0))
				{
					iVar40 = 5;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("X17_DRAW_6"), 0))
				{
					iVar40 = 6;
				}
				else
				{
					iVar40 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (bVar41)
		{
			if (iVar40 != -1)
			{
				iVar42 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar38);
				iVar43 = 0;
				while (iVar43 < iVar42)
				{
					FILES::GET_VARIANT_COMPONENT(iVar38, iVar43, &iVar44, &iVar45, &iVar46);
					if (iVar46 == 8)
					{
						if (((((((iVar40 == 6 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_6"), 0)) || (iVar40 == 5 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_5"), 0))) || (iVar40 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_4"), 0))) || (iVar40 == 3 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_3"), 0))) || (iVar40 == 2 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_2"), 0))) || (iVar40 == 1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL"), 0))) || ((((((iVar40 == 0 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_2"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_3"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_4"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_5"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_6"), 0)))
						{
							if (iVar44 != 0 && iVar44 != joaat("0"))
							{
								iVar0 = __LIB_6__.func_758(iParam0, iVar44, 8, 4);
							}
							else
							{
								iVar0 = iVar45;
							}
							iVar43 = iVar42 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar43++;
				}
			}
			return -99;
		}
		if ((((((((iParam1 >= 192 && iParam1 <= 207) || iVar39 == 12) && ((((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 112 && iParam2 <= 127)) || iVar37 == 6) || iVar37 == 7)) && __LIB_0__.func_253()) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_15"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_25"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_4"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_9"), 0))
		{
			if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_6"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_1"), 0))
			{
				return -99;
			}
			iVar47 = iVar38;
			if (iParam1 == 199)
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 8, 4);
			}
			else if (iParam1 == 200)
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 8, 4);
			}
			else if (iParam1 == 201)
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_0"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_3"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_1"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_4"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_2"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_5"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_3"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_6"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_4"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_7"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_5"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_8"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_6"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_9"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_7"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_10"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_8"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_11"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_9"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_12"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_10"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_13"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_11"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_14"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_12"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_15"), 8, 4);
			}
			iVar1 = 0;
		}
		else if (iParam1 <= 15)
		{
			if (((((iParam2 >= 160 && iParam2 <= 175) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_0"), 0))
			{
				iVar0 = 16;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar1 = 0;
			switch (iParam1)
			{
				case 199:
					iVar0 = 94;
					break;
				case 200:
					iVar0 = 95;
					break;
				case 201:
					iVar0 = 96;
					break;
			}
			if ((iParam2 >= 160 && iParam2 <= 175) || iVar37 == 10)
			{
				return -99;
			}
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar0 = 48;
			iVar1 = 0;
			if (iVar38 != -1)
			{
				bVar48 = true;
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("VEST_SHIRT"), 0))
				{
					bVar48 = false;
					if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("VEST"), 0))
					{
						bVar48 = true;
					}
				}
				if (bVar48)
				{
					iVar40 = 0;
					if (iParam2 >= 160 && iParam2 <= 175)
					{
						if (iVar39 == 12)
						{
							iVar40 = 1;
						}
					}
					iVar49 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar38);
					iVar50 = 0;
					while (iVar50 < iVar49)
					{
						FILES::GET_VARIANT_COMPONENT(iVar38, iVar50, &iVar51, &iVar52, &iVar53);
						if (iVar53 == 8 && ((((((((iVar51 == 0 || iVar51 == joaat("0")) || (iVar40 == 6 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_6"), 0))) || (iVar40 == 5 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_5"), 0))) || (iVar40 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_4"), 0))) || (iVar40 == 3 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_3"), 0))) || (iVar40 == 2 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_2"), 0))) || (iVar40 == 1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL"), 0))) || ((((((iVar40 == 0 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_2"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_3"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_4"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_5"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_6"), 0))))
						{
							if (iVar51 != 0 && iVar51 != joaat("0"))
							{
								iVar0 = __LIB_6__.func_758(iParam0, iVar51, 8, 4);
							}
							else
							{
								iVar0 = iVar52;
							}
							iVar50 = iVar49 + 1;
							iVar1 = 0;
						}
						iVar50++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam3);
	}
	return iVar0;
}

int func_338(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4D25D
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
				iVar2 = __LIB_0__.func_334(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__.func_334(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_338(iParam0, -99, __LIB_10__.func_0(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__.func_334(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__.func_334(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_338(iParam0, -99, __LIB_10__.func_0(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !func_334(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_334(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar12, 3, 4);
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

void func_339(int iParam0)//Position - 0x4E598
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
		if (!func_344(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__.func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__.func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__.func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__.func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__.func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_344(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_344(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4EF62
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !func_197(iVar0, 14, func_353(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4F60C
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
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_346(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = __LIB_0__.func_338(iParam0, 8);
					iVar15 = __LIB_0__.func_334(iParam1, iVar2, 8, 3);
					iVar16 = __LIB_0__.func_252(iVar15);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar16 == 6)) || (iVar2 >= 241 && iVar16 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar15, joaat("VEST_SHIRT"), 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						bVar17 = true;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRAW_11"), 0))
						{
							iVar2 = __LIB_0__.func_338(iParam0, 8);
							iVar18 = __LIB_0__.func_334(iParam1, iVar2, 8, 3);
							iVar19 = __LIB_0__.func_252(iVar18);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar19 == 6)) || (iVar2 >= 241 && iVar19 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("VEST_SHIRT"), 0)))
							{
								bVar17 = false;
							}
						}
						if (bVar17)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 3)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__.func_758(iParam1, iVar5, 3, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar4 = iVar3 + 1;
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar20 = __LIB_0__.func_338(iParam0, 11);
					iVar21 = __LIB_0__.func_334(iParam1, iVar20, 11, 3);
					if (iVar20 >= 237 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("OPEN_SHORT"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam1, joaat("DLC_MP_H4_M_TORSO_0_0"), 3, 3);
					}
					else
					{
						iVar0 = 14;
					}
				}
				else if (iParam3 >= 241)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar22 = -1;
				if (iParam3 >= 237)
				{
					iVar22 = __LIB_0__.func_252(__LIB_0__.func_334(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar22 == 11)
				{
					iVar2 = __LIB_0__.func_338(iParam0, 8);
					iVar23 = __LIB_0__.func_334(iParam1, iVar2, 8, 3);
					iVar24 = __LIB_0__.func_252(iVar23);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar24 == 6)) || (iVar2 >= 241 && iVar24 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar23, joaat("VEST_SHIRT"), 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
				else if (iParam2 == 6)
				{
					if (iParam3 >= 256)
					{
						iVar14 = __LIB_0__.func_334(iParam1, iParam3, 6, 3);
						if (iVar14 != -1)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar25 = -1;
				iVar26 = -1;
				if (iParam3 >= 92)
				{
					iVar26 = __LIB_0__.func_334(iParam1, iParam3, 7, 3);
					iVar25 = __LIB_0__.func_252(iVar26);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar25 == 10) || iVar25 == 11) || iVar25 == 12) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("VEST_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("TUX_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("TIE"), 0)))
				{
					iVar2 = __LIB_0__.func_338(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar14 = __LIB_0__.func_334(iParam1, iVar2, 8, 3);
						iVar27 = __LIB_0__.func_252(iVar14);
						bVar28 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TUX_VEST"), 0);
						if (((iVar27 == 3 || iVar27 == 7) || iVar27 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if ((iVar7 == 8 && !bVar28) || (iVar7 == 10 && bVar28))
									{
										if (iVar5 != 0 && iVar5 != joaat("0"))
										{
											iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
				else if (((iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("LOOSE_TIE"), 0)) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("SLACK_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("LOOSE_BOWTIE"), 0)))
				{
					iVar14 = __LIB_0__.func_334(iParam1, iVar2, 8, 3);
					iVar29 = __LIB_0__.func_252(iVar14);
					bVar30 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TUX_VEST"), 0);
					if (((iVar29 == 3 || iVar29 == 7) || iVar29 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
					{
						if (iVar14 != -1)
						{
							iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
							iVar13 = 0;
							while (iVar13 < iVar12)
							{
								FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
								if ((iVar7 == 8 && !bVar30) || (iVar7 == 10 && bVar30))
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar13 = iVar12 + 1;
								}
								iVar13++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 7, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar31 = -1;
				iVar32 = -1;
				if (iParam3 >= 92)
				{
					iVar32 = __LIB_0__.func_334(iParam1, iParam3, 7, 3);
					iVar31 = __LIB_0__.func_252(iVar32);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar31 == 10) || iVar31 == 11) || iVar31 == 12) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, joaat("TIE"), 0))
				{
					iVar33 = __LIB_0__.func_338(iParam0, 11);
					if (iVar33 >= 237)
					{
						iVar14 = __LIB_0__.func_334(iParam1, iVar33, 11, 3);
						if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SHIRT_BRACES"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("H3_DRAW_7"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if (iVar7 == 11)
									{
										if (iVar5 != 0 && iVar5 != joaat("0"))
										{
											iVar0 = __LIB_6__.func_758(iParam1, iVar5, 11, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 11, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar34 = __LIB_0__.func_338(iParam0, 11);
				if (iVar34 >= 237)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iVar34, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SHIRT_BRACES"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("H3_DRAW_7"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
					{
						iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 3);
						if (iVar14 != -1)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 7)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__.func_758(iParam1, iVar5, 7, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 7, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 4, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 10, 3);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 4, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 1, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						bVar35 = false;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BASIC_VEST"), 0))
						{
							iVar2 = __LIB_0__.func_338(iParam0, 8);
							iVar36 = __LIB_0__.func_334(iParam1, iVar2, 8, 4);
							if (iVar2 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("VEST_SHIRT"), 0))
							{
							}
							else
							{
								iVar0 = __LIB_6__.func_758(iParam1, joaat("DLC_MP_H3_F_SPECIAL_6_0"), 8, 4);
								bVar35 = true;
							}
						}
						if (!bVar35)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 4);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar37 = -1;
				if (iParam3 >= 55)
				{
					iVar37 = __LIB_0__.func_334(iParam1, iParam3, 7, 4);
				}
				if ((iVar37 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("TIE"), 0)) || (iVar37 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("BOWTIE"), 0)))
				{
					iVar14 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar38 = false;
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("LOOSE_TIE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("LOOSE_BOWTIE"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("CLOSED_COLLAR"), 0))
						{
							bVar38 = true;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
					{
						bVar38 = true;
					}
					if (bVar38)
					{
						iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
						iVar13 = 0;
						while (iVar13 < iVar12)
						{
							FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
								}
								iVar13 = iVar12 + 1;
							}
							iVar13++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 4, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 4, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 10, 4);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 11, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 7, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 1, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_334(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_346(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x515B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= __LIB_0__.func_25(iParam1, 1))
					{
						func_356(iParam1, 1, iParam3, -1);
						if (Global_2883589 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar0 = __LIB_0__.func_338(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = __LIB_0__.func_334(iParam1, iVar0, 1, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("NIGHT_VISION"), 0))
						{
							iVar1 = __LIB_0__.func_334(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILES::GET_FORCED_COMPONENT(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != joaat("0"))
										{
											*iParam4 = __LIB_6__.func_758(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= __LIB_0__.func_25(iParam1, 1))
					{
						func_356(iParam1, 1, iParam3, -1);
						if (Global_2883589 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar7 = __LIB_0__.func_338(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = __LIB_0__.func_334(iParam1, iVar7, 1, 4);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("NIGHT_VISION"), 0))
						{
							iVar8 = __LIB_0__.func_334(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILES::GET_FORCED_COMPONENT(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != joaat("0"))
										{
											*iParam4 = __LIB_6__.func_758(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		__LIB_0__.func_427(754, iParam3, Global_78127, 1, 0);
		__LIB_0__.func_427(755, iParam2, Global_78127, 1, 0);
		return 1;
	}
	return 0;
}

void func_348(int iParam0, int iParam1, int iParam2)//Position - 0x519AE
{
	int iVar0;
	struct<6> Var1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = __LIB_0__.func_250(iParam0);
			if (!__LIB_0__.func_343(iParam1, -1) || iParam2)
			{
				if (__LIB_6__.func_785(&Var1, iParam1, iVar0, iParam0, -1))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					__LIB_0__.func_235(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

void func_349(int iParam0, bool bParam1, int iParam2)//Position - 0x51A0D
{
	if (bParam1)
	{
		if (!__LIB_0__.func_343(iParam0, iParam2))
		{
			__LIB_7__.func_237(iParam0, 1, iParam2);
		}
	}
	else if (__LIB_0__.func_343(iParam0, iParam2))
	{
		__LIB_7__.func_237(iParam0, 0, iParam2);
	}
}

int func_352()//Position - 0x51ABE
{
	int iVar0;
	iVar0 = Global_78127;
	if (__LIB_0__.func_343(13, iVar0))
	{
		return 13;
	}
	if (__LIB_0__.func_343(14, iVar0))
	{
		return 14;
	}
	if (__LIB_0__.func_343(15, iVar0))
	{
		return 15;
	}
	if (__LIB_0__.func_343(16, iVar0))
	{
		return 16;
	}
	if (__LIB_0__.func_343(71, iVar0))
	{
		return 71;
	}
	if (__LIB_0__.func_343(72, iVar0))
	{
		return 72;
	}
	return -1;
}

int func_353(int iParam0, int iParam1, int iParam2)//Position - 0x51B2D
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_0__.func_338(iParam0, iParam1);
		}
	}
	return -99;
}

void func_354(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x51BCE
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
		if (Global_78127 != __LIB_0__.func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { func_356(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__.func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_354(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
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
									func_354(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_354(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
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
			if (__LIB_0__.func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__.func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__.func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_354(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_354(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_354(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { func_356(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = func_355(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_354(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_354(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_10__.func_0(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_354(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_355(int iParam0, int iParam1, int iParam2)//Position - 0x52BEF
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
	iVar0 = -99;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 203)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar1 = __LIB_0__.func_334(iParam0, iParam1, 11, 3);
			if (iVar1 != -1)
			{
				iVar2 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILES::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8)
					{
						if (iVar4 != 0 && iVar4 != joaat("0"))
						{
							iVar0 = __LIB_6__.func_758(iParam0, iVar4, 8, 3);
						}
						else
						{
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 87;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar7 = __LIB_0__.func_334(iParam0, iParam1, 11, 4);
			if (iVar7 != -1)
			{
				iVar8 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (iVar10 != 0 && iVar10 != joaat("0"))
						{
							iVar0 = __LIB_6__.func_758(iParam0, iVar10, 8, 4);
						}
						else
						{
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

struct<14> func_356(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x52EE4
{
	__LIB_0__.func_41();
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		__LIB_25__.func_40(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		func_357(iParam1, iParam2, iParam3);
	}
	return Global_78130[0 /*14*/];
}

void func_357(int iParam0, int iParam1, int iParam2)//Position - 0x52F25
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__.func_350(iParam1, iParam2);
			break;
		case 11:
			__LIB_18__.func_428(iParam1, iParam2);
			break;
		case 8:
			__LIB_25__.func_5(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__.func_348(iParam1, iParam2);
			break;
		case 3:
			__LIB_18__.func_347(iParam1, iParam2);
			break;
		case 4:
			__LIB_18__.func_346(iParam1, iParam2);
			break;
		case 6:
			__LIB_18__.func_345(iParam1, iParam2);
			break;
		case 1:
			__LIB_18__.func_344(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__.func_343(iParam1, iParam2);
			break;
		case 10:
			__LIB_0__.func_349(iParam1, iParam2);
			break;
		case 14:
			__LIB_18__.func_341(iParam1, iParam2);
			break;
		case 12:
			__LIB_0__.func_348(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__.func_339(iParam1, iParam2);
			break;
		case 0:
			__LIB_25__.func_4(iParam1, iParam2);
			break;
		case 13:
			__LIB_24__.func_956(iParam1);
			break;
	}
}

int func_393(int iParam0)//Position - 0x6A7FB
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_353(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__.func_334(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_353(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_334(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

void func_419(int iParam0)//Position - 0x6CED3
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_18__.func_190(iParam0);
	if (__LIB_0__.func_317(bVar0))
	{
		if (!Global_100362[bVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[bVar0] != 0)
			{
				if (__LIB_0__.func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[bVar0])
				{
					__LIB_0__.func_358(bVar0);
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__.func_352(iParam0);
				}
			}
		}
		__LIB_0__.func_340(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__.func_365(49))
				{
					iVar1 = func_186(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_420(__LIB_6__.func_816(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__.func_365(44))
				{
					iVar1 = func_186(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_186(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_420(__LIB_6__.func_816(0), 3, 70, 1, 0, 0, 0);
					func_420(__LIB_6__.func_816(0), 3, 71, 1, 0, 0, 0);
					func_420(__LIB_6__.func_816(0), 3, 72, 1, 0, 0, 0);
					func_420(__LIB_6__.func_816(0), 3, 73, 1, 0, 0, 0);
					func_420(__LIB_6__.func_816(0), 3, 74, 1, 0, 0, 0);
					func_420(__LIB_6__.func_816(0), 3, 75, 1, 0, 0, 0);
					func_420(__LIB_6__.func_816(0), 4, 41, 1, 0, 0, 0);
					func_420(__LIB_6__.func_816(0), 4, 42, 1, 0, 0, 0);
					func_420(__LIB_6__.func_816(0), 4, 43, 1, 0, 0, 0);
					func_420(__LIB_6__.func_816(0), 4, 44, 1, 0, 0, 0);
					func_420(__LIB_6__.func_816(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_186(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__.func_358(bVar0);
				__LIB_0__.func_340(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_420(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6D130
{
	func_424(iParam0, iParam1, iParam2, bParam3);
	func_423(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__.func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		func_421(iParam0, iParam1, iParam2, 0);
	}
}

int func_421(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6D175
{
	Global_78130[1 /*14*/] = { func_94(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 2, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		else
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 2, Global_78130[1 /*14*/].f_1, 1, 0);
		}
		return 1;
	}
	return 0;
}

int func_423(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6D2EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { func_94(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
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
					uVar3 = { __LIB_18__.func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_423(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_424(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__.func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_423(iParam0, 14, uVar4[iVar2], 1, 1);
									func_424(iParam0, 14, uVar4[iVar2], 1);
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
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
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
								func_423(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_423(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_423(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_423(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_423(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_423(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_423(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_423(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_423(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_423(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_423(iParam0, 14, iVar5, 1, 0);
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
								func_423(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_423(iParam0, 14, 17, 1, 0);
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

int func_424(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6D6CD
{
	Global_78130[1 /*14*/] = { func_94(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 0, Global_78130[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 0, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		return 1;
	}
	return 0;
}

void func_428()//Position - 0x6D8E9
{
	__LIB_11__.func_732(3, 0, 1);
	__LIB_6__.func_823(0, 0);
	func_752();
}

void func_431(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6DA10
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		__LIB_0__.func_83(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!__LIB_0__.func_73())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		__LIB_0__.func_82(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		__LIB_0__.func_83(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		__LIB_0__.func_82(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_0__.func_350(PLAYER::PLAYER_ID())) && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0)) && !__LIB_0__.func_80()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_0__.func_350(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

int func_445(int iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x6DEE3
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	if (__LIB_0__.func_317(bParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		__LIB_0__.func_321(bParam1, &Var2, iParam5);
		if (Var2.f_0 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2.f_0)
			{
			}
			return 1;
		}
		if ((bParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131])
		{
			Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/] = 0;
		}
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_24);
				}
				if (__LIB_0__.func_283(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90);
						}
					}
				}
				__LIB_18__.func_176(iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_6__.func_819(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]);
				}
				__LIB_0__.func_342(*iParam0, bParam1);
				return 1;
			}
		}
		else if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_24);
				}
				if (__LIB_0__.func_283(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90);
						}
					}
				}
				__LIB_18__.func_176(iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_6__.func_819(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]);
				}
				__LIB_0__.func_342(*iParam0, bParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var2.f_0))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2.f_0, Param2, fParam3, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
				}
				if (__LIB_0__.func_283(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Var2.f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Var2.f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Var2.f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Var2.f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
						}
					}
				}
				__LIB_18__.func_176(iParam0, &(Var2.f_31), &(Var2.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_113386.f_9085.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_6__.func_819(iParam0);
					}
				}
				else if (((bParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_113386.f_2363.f_539.f_4316 = 1;
					func_446(bParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
				}
				if (bVar5)
				{
					__LIB_0__.func_342(*iParam0, bParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_446(bool bParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6ED03
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	if ((__LIB_0__.func_317(bParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
	{
		if (iParam2 > Global_113386.f_2363.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			__LIB_36__.func_68(*iParam1, bParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, false))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_24 = 0;
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_5), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_7), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_84), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_85), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_86));
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_93), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_94), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_95));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 31);
		}
		Global_113386.f_2363.f_539.f_4317[bParam0] = 10;
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && func_451(*iParam1, 0, &uVar0))
		{
			__LIB_0__.func_107(iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_113386.f_20118[bParam0 /*43*/].f_40 = 1;
				Global_113386.f_20118[bParam0 /*43*/] = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/];
				Global_113386.f_20118[bParam0 /*43*/].f_3 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_87;
				Global_113386.f_20118[bParam0 /*43*/].f_4 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_84;
				Global_113386.f_20118[bParam0 /*43*/].f_5 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_85;
				Global_113386.f_20118[bParam0 /*43*/].f_6 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_86;
				Global_113386.f_20118[bParam0 /*43*/].f_10 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_90;
				Global_113386.f_20118[bParam0 /*43*/].f_16 = !Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_88;
				Global_113386.f_20118[bParam0 /*43*/].f_19 = { Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_27 };
				Global_113386.f_20118[bParam0 /*43*/].f_23 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_26;
				Global_113386.f_20118[bParam0 /*43*/].f_7 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[11];
				Global_113386.f_20118[bParam0 /*43*/].f_8 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[12];
				Global_113386.f_20118[bParam0 /*43*/].f_9 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[23];
				Global_113386.f_20118[bParam0 /*43*/].f_11 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[4];
				Global_113386.f_20118[bParam0 /*43*/].f_12 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[15];
				Global_113386.f_20118[bParam0 /*43*/].f_13 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[16];
				Global_113386.f_20118[bParam0 /*43*/].f_14 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[14];
				Global_113386.f_20118[bParam0 /*43*/].f_15 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[22];
				Global_113386.f_20118[bParam0 /*43*/].f_18 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[20];
				Global_113386.f_20118[bParam0 /*43*/].f_17 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[18];
				Global_113386.f_20118[bParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
				Global_113386.f_20118[bParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_113386.f_20118[bParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_113386.f_20118[bParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_113386.f_20118[bParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_113386.f_20118[bParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_113386.f_20118[bParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_113386.f_20118[bParam0 /*43*/].f_31 = __LIB_0__.func_265(*iParam1);
				Global_113386.f_20118[bParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				__LIB_6__.func_776(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_7, iVar3, 1, &(Global_113386.f_20118[bParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				__LIB_6__.func_776(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113386.f_20118[bParam0 /*43*/].f_2));
			}
		}
	}
}

int func_451(int iParam0, bool bParam1, var uParam2)//Position - 0x711D0
{
	int iVar0;
	bool bVar1;
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((!func_479(iVar0, bParam1, uParam2) && !__LIB_0__.func_280(PLAYER::PLAYER_ID())) && !func_460(iParam0))
	{
		return 0;
	}
	if (__LIB_0__.func_280(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__.func_109(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (__LIB_0__.func_353(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)))
	{
		bVar1 = true;
	}
	if (((VEHICLE::IS_BIG_VEHICLE(iParam0) && !__LIB_0__.func_352(iParam0)) && !bVar1) && !(__LIB_0__.func_266(ENTITY::GET_ENTITY_MODEL(iParam0)) && __LIB_1__.func_105(PLAYER::PLAYER_ID())))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
				*uParam2 = 16;
				break;
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((__LIB_0__.func_108(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_460(int iParam0)//Position - 0x719C2
{
	if (__LIB_0__.func_279(PLAYER::PLAYER_ID()) || __LIB_0__.func_278(PLAYER::PLAYER_ID()))
	{
		if (func_461(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_461(int iParam0)//Position - 0x719F1
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (__LIB_0__.func_354(iParam0, 0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			if (!func_462(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_462(int iParam0)//Position - 0x71A63
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if ((VEHICLE::IS_BIG_VEHICLE(iParam0) && !__LIB_0__.func_352(iParam0)) || __LIB_0__.func_268(iVar0))
		{
			return 1;
		}
		switch (iVar0)
		{
			case joaat("slamtruck"):
			case joaat("patriot2"):
			case joaat("caracara"):
			case joaat("caracara2"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("speedo4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_479(int iParam0, bool bParam1, var uParam2)//Position - 0x725B6
{
	bool bVar0;
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (__LIB_0__.func_353(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && iParam0 != joaat("rrocket")) && iParam0 != joaat("stryder")) && iParam0 != joaat("verus")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__.func_281(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

void func_514(int iParam0, int* iParam1, struct<3> Param2, int* iParam3)//Position - 0x77414
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false) && ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
		{
			if (!HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::CLEAR_PRINTS();
				__LIB_0__.func_320(&Local_192);
				*iParam1 = __LIB_6__.func_825(*iParam0, 0, 0);
			}
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(*iParam3))
			{
				*iParam3 = __LIB_0__.func_392(Param2, 1);
			}
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::CLEAR_PRINTS();
				HUD::REMOVE_BLIP(iParam1);
			}
		}
	}
}

bool func_518(struct<3> Param0, float fParam1)//Position - 0x775B0
{
	STREAMING::REQUEST_MODEL(iLocal_114);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_114))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
		{
			iLocal_175 = VEHICLE::CREATE_VEHICLE(iLocal_114, Param0, fParam1, true, true, false);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_175, sLocal_109);
			VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_175, "JANITOR CAR");
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_175, 9);
			__LIB_0__.func_501(iLocal_175, iLocal_179);
			ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_175, 2, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, true, false, false, true);
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_175, 2f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_175, 3);
		}
	}
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Janitor"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Janitor")))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false) && !ENTITY::DOES_ENTITY_EXIST(iLocal_171))
		{
			iLocal_171 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_175, 26, joaat("S_M_M_Janitor"), -1, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 9, 1, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_171, 17, true);
			PED::SET_PED_ID_RANGE(iLocal_171, 20f);
			PED::SET_PED_SEEING_RANGE(iLocal_171, 20f);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_171, false);
			PED::SET_PED_NAME_DEBUG(iLocal_171, "JANITOR");
			PED::SET_PED_LOD_MULTIPLIER(iLocal_171, 3f);
			__LIB_0__.func_203(&Local_53, 1, iLocal_171, "AGENCYJANITOR", 0, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_171, "AGENCYJANITOR");
		}
	}
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_171) && ENTITY::DOES_ENTITY_EXIST(iLocal_175));
}

void func_521(int iParam0)//Position - 0x77779
{
	PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, false);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_191);
	PED::SET_PED_CONFIG_FLAG(iParam0, 29, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 116, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, false);
}

void func_525()//Position - 0x778B2
{
	STREAMING::REQUEST_MODEL(joaat("A_F_Y_Hipster_01"));
	STREAMING::REQUEST_MODEL(joaat("dilettante"));
	STREAMING::REQUEST_ANIM_DICT("missheistfbisetup1");
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_169) && !ENTITY::DOES_ENTITY_EXIST(iLocal_178))
	{
		if ((STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Hipster_01")) && STREAMING::HAS_MODEL_LOADED(joaat("dilettante"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheistfbisetup1"))
		{
			iLocal_178 = VEHICLE::CREATE_VEHICLE(joaat("dilettante"), -81.15f, -18.851f, 65.82f, 67.68219f, true, true, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_178, -81.15f, -18.851f, 65.82f, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_178, 0f, 0f, 67.6822f, 2, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_178, 0f, 0f, 0.5569f, 0.8306f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_178, 5f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_159, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_159);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_178, 2);
			VEHICLE::SET_VEHICLE_ALARM(iLocal_178, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_178, 3);
			iLocal_169 = PED::CREATE_PED(5, joaat("A_F_Y_Hipster_01"), -81.93f, -19.81f, 65.32f, -18.56f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_169, iLocal_159);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_169, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_169, 17, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_169, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_169, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_169, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_169, 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_169, 8, 0, 1, 0);
			PED::SET_PED_LOD_MULTIPLIER(iLocal_169, 2f);
			iLocal_230 = PED::CREATE_SYNCHRONIZED_SCENE(Local_72, Local_73, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_169, iLocal_230, "missheistfbisetup1", "hassle_intro_loop_f", 1000f, -4f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_230, true);
			__LIB_0__.func_203(&Local_53, 5, iLocal_169, "AH_NEIGHBOUR", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Hippie_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dilettante"));
		}
	}
}

bool func_526(struct<3> Param0, float fParam1, bool bParam2, bool bParam3)//Position - 0x77A95
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		func_445(&iLocal_176, 0, Param0, fParam1, 1, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
	{
		if (bParam3)
		{
			if (!PED::IS_PED_INJURED(iLocal_170))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_170, iLocal_176, 0);
				}
			}
		}
		if (bParam2)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, -1);
			}
		}
		ENTITY::SET_ENTITY_COORDS(iLocal_176, Param0, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_176, fParam1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 5f);
		ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_176, 2, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, false, false, true);
	}
	return ENTITY::DOES_ENTITY_EXIST(iLocal_176);
}

void func_527(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x77B53
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_0__.func_294() || !__LIB_24__.func_934())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!__LIB_35__.func_890(iParam4, iParam5, iParam6, iParam11))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		__LIB_0__.func_356();
		while (!__LIB_26__.func_580())
		{
			SYSTEM::WAIT(0);
		}
		*iParam0 = func_540(Param1, fParam2);
	}
	else if (iParam7 == 1)
	{
		if (__LIB_0__.func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { Global_106934.f_2890 };
			fParam2 = Global_106934.f_2890.f_6;
		}
		MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
		func_530(Param1, 5f, 0);
		if (__LIB_0__.func_317(bParam10))
		{
			__LIB_6__.func_784(bParam10, 0);
			while (!func_445(iParam0, bParam10, Param1, fParam2, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(iParam8);
			while (!STREAMING::HAS_MODEL_LOADED(iParam8))
			{
				SYSTEM::WAIT(0);
			}
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam8, Param1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (iParam9 == 0)
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
				}
				else if (iParam9 > 0)
				{
					VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam9, iParam9);
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam8);
		}
	}
	if (iParam3 == 1)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, -1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
		}
	}
}

void func_530(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x77DC7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_538(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77137.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_531(iVar0);
			}
		}
		iVar0++;
	}
}

void func_531(int iParam0)//Position - 0x77E17
{
	bool bVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (func_538(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && __LIB_0__.func_61(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!__LIB_6__.func_785(0, Global_77137.f_555[0 /*21*/].f_12) || !__LIB_6__.func_785(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				__LIB_0__.func_284(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			__LIB_6__.func_770(iParam0, 0);
		}
	}
}

int func_538(var uParam0, int iParam1)//Position - 0x78188
{
	int iVar0;
	int iVar1;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = __LIB_9__.func_486(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = __LIB_9__.func_486(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = __LIB_9__.func_486(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = __LIB_9__.func_486(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = __LIB_9__.func_486(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = __LIB_9__.func_486(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = __LIB_9__.func_486(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = __LIB_9__.func_486(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = __LIB_9__.func_486(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (__LIB_0__.func_116())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (__LIB_0__.func_116())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!__LIB_0__.func_78(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!__LIB_0__.func_78(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!__LIB_0__.func_78(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_540(struct<3> Param0, float fParam1)//Position - 0x798BD
{
	return func_541(&(Global_106934.f_2890), Param0, fParam1, 0);
}

int func_541(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x798D7
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	if (__LIB_18__.func_189(uParam0))
	{
		if (__LIB_0__.func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (__LIB_26__.func_518(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			func_530(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				func_546(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							__LIB_6__.func_784(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							__LIB_6__.func_784(uParam0->f_11, 2);
						}
					}
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					__LIB_0__.func_342(iVar0, uParam0->f_11);
				}
				else if ((!func_543(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = __LIB_0__.func_393(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_531(iVar4);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							__LIB_6__.func_770(24, 0);
							func_531(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					__LIB_36__.func_68(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

int func_543(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x79C4D
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (__LIB_0__.func_395(iParam0, Global_77137.f_139[38], 0))
			{
				func_531(38);
				return 1;
			}
			break;
		case joaat("firetruk"):
			if (__LIB_0__.func_395(iParam0, Global_77137.f_139[43], 1))
			{
				func_531(43);
				return 1;
			}
			break;
		case joaat("cuban800"):
			iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (__LIB_0__.func_395(iParam0, uVar1[iVar3], 1) && __LIB_0__.func_394(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true), 2136.133f, 4780.5635f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || __LIB_0__.func_78(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true), true) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[14], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77137.f_484[14]))
				{
					func_531(14);
					return 1;
				}
			}
			break;
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[20], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77137.f_484[20]))
				{
					func_531(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_546(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x79F31
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!__LIB_7__.func_288(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (__LIB_6__.func_787(uParam1->f_5) || __LIB_6__.func_787(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || __LIB_0__.func_289(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && __LIB_0__.func_262())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !__LIB_0__.func_111(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						__LIB_0__.func_288(iParam0, uParam1->f_69);
					}
				}
				else
				{
					__LIB_0__.func_288(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			__LIB_18__.func_176(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar6 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((__LIB_18__.func_188() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

void func_574(bool bParam0)//Position - 0x7AC38
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-252283844))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-252283844, 0f, false, false);
		if (bParam0)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 4, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 1, false, false);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 3, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 0, false, false);
		}
	}
}

void func_575()//Position - 0x7AC93
{
	switch (iLocal_103)
	{
		case 0:
			bLocal_91 = true;
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			if (iLocal_50)
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 1, 1);
				if (!__LIB_0__.func_295())
				{
					__LIB_0__.func_344(Local_58 + Vector(0f, 1f, 0.5f), -1082130432, 1, 12000, 1123680256, 0);
				}
				func_526(Local_60, fLocal_89, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_176, -0.0341f, -0.1053f, 0.989f, 0.0985f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 5f);
				while (!ENTITY::DOES_ENTITY_EXIST(iLocal_178))
				{
					func_525();
					SYSTEM::WAIT(0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
				{
					PED::DELETE_PED(&iLocal_169);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_171))
				{
					STREAMING::REQUEST_MODEL(joaat("S_M_M_Janitor"));
					while (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Janitor")))
					{
						SYSTEM::WAIT(0);
					}
					while (!func_518(Local_63, fLocal_90))
					{
						SYSTEM::WAIT(0);
					}
					__LIB_2__.func_292();
					if (!PED::IS_PED_INJURED(iLocal_171))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_171, Local_58, true, false, false, true);
					}
				}
				__LIB_6__.func_775(0, -1, 1);
			}
			iLocal_287 = 0;
			AUDIO::TRIGGER_MUSIC_EVENT("AH1_STOP");
			STREAMING::REMOVE_ANIM_DICT("missheistfbisetup1leadinoutah_1_mcs_1");
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_ON_FOOT"))
			{
				AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOLLOW_ON_FOOT");
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 4);
			func_10();
			iLocal_103++;
			break;
		case 1:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_187, 8);
			}
			if (__LIB_0__.func_90())
			{
				if (__LIB_10__.func_0(sLocal_187))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					if (!PED::IS_PED_INJURED(iLocal_171))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_171, "Janitor", 0, 0, 0);
					}
					func_431(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					__LIB_0__.func_358(6);
					iLocal_103++;
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			break;
		case 2:
			CAM::DO_SCREEN_FADE_IN(500);
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_184))
			{
				OBJECT::DELETE_OBJECT(&iLocal_184);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_183))
			{
				OBJECT::DELETE_OBJECT(&iLocal_183);
			}
			MISC::CLEAR_AREA(-98.8604f, -10.5318f, 65.5199f, 100f, true, false, false, false);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			iLocal_103++;
			break;
		case 3:
			if (!iLocal_287)
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 1, 1);
				if (CUTSCENE::GET_CUTSCENE_TIME() > 27500)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 1, 1, 0);
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
					iLocal_287 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", joaat("Player_Zero")))
			{
				if (!iLocal_287)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 1, 1, 0);
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
					iLocal_287 = 1;
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 251.011f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0f, true, false);
				}
				else
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 287.4864f);
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -98.8604f, -10.5318f, 65.5199f, 1f, -1, 40000f, 0.5f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
				{
					PED::DELETE_PED(&iLocal_171);
				}
				func_431(0, 1, 1, 0, 0, 0, 0);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 251.011f);
				}
				else
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 287.4864f);
				}
				func_576(6);
			}
			break;
	}
}

void func_576(int iParam0)//Position - 0x7B02E
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iLocal_170))
	{
		if (iParam0 == 2)
		{
			func_586(1, "STAGE_WAIT_FOR_JANITOR", 0, 0, iLocal_170, 1);
		}
		else if (iParam0 == 3)
		{
			func_586(2, "STAGE_TAIL_THE_JANITOR", 0, 0, iLocal_170, 1);
		}
		else if (iParam0 >= 4 && iParam0 < 6)
		{
			func_586(3, "STAGE_FOLLOW_JANITOR_ON_FOOT", 0, 0, iLocal_170, 1);
		}
		else if (iParam0 == 6)
		{
			func_586(4, "STAGE_DRIVE_BACK_TO_SAFEHOUSE", 1, 0, iLocal_170, 1);
		}
	}
	else if (iParam0 == 2)
	{
		func_586(1, "STAGE_WAIT_FOR_JANITOR", 0, 0, 0, 1);
	}
	else if (iParam0 == 3)
	{
		func_586(2, "STAGE_TAIL_THE_JANITOR", 0, 0, 0, 1);
	}
	else if (iParam0 >= 4 && iParam0 < 6)
	{
		func_586(3, "STAGE_FOLLOW_JANITOR_ON_FOOT", 0, 0, 0, 1);
	}
	else if (iParam0 == 6)
	{
		func_586(4, "STAGE_DRIVE_BACK_TO_SAFEHOUSE", 1, 0, 0, 1);
	}
	__LIB_0__.func_317(61, 1);
	iLocal_48 = iParam0;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		CUTSCENE::STOP_CUTSCENE(false);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(true);
	}
	__LIB_7__.func_141();
	func_90();
	if (iParam0 != 3)
	{
		HUD::REMOVE_BLIP(&iLocal_164);
	}
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_176, false))
	{
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_176, 0);
	}
	func_583();
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	if (iParam0 != 2 && !__LIB_0__.func_295())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
	if (iLocal_50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_183))
		{
			OBJECT::DELETE_OBJECT(&iLocal_183);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_184))
		{
			OBJECT::DELETE_OBJECT(&iLocal_184);
		}
		__LIB_30__.func_933(500);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_176, false);
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_176, true);
		}
		func_581();
		func_580();
		func_579();
		if (iLocal_48 != 3)
		{
			func_578(&iLocal_168, 0);
			func_578(&Local_129, 0);
		}
		__LIB_6__.func_771();
		__LIB_0__.func_296();
		while (!__LIB_0__.func_358(iParam0))
		{
			SYSTEM::WAIT(0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_177))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_177);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_GET_TO_FIB"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_GET_TO_FIB");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_WAIT_FOR_CARS"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_WAIT_FOR_CARS");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_NON_TARGET_CARS"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_NON_TARGET_CARS");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_JANITORS_CAR"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_JANITORS_CAR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_PLATES"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_PLATES");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_JANITOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOLLOW_JANITOR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_JANITOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_JANITOR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_ON_FOOT"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOLLOW_ON_FOOT");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_DRIVE_TO_FACTORY"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_DRIVE_TO_FACTORY");
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_129.f_0))
	{
		CAM::DESTROY_CAM(Local_129.f_0, false);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_168))
	{
		CAM::DESTROY_CAM(iLocal_168, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	iVar0 = 0;
	while (iVar0 < iLocal_179)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_179[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_48 != 6)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	}
	iLocal_103 = 0;
}

void func_578(var uParam0, bool bParam1)//Position - 0x7B39D
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::RENDER_SCRIPT_CAMS(false, bParam1, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::DESTROY_CAM(*uParam0, false);
	}
}

void func_579()//Position - 0x7B3DB
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
	{
		PED::DELETE_PED(&iLocal_169);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_178);
	}
}

void func_580()//Position - 0x7B405
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		PED::DELETE_PED(&iLocal_171);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_175);
	}
}

void func_581()//Position - 0x7B42F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_213.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_213[iVar0 /*2*/]))
		{
			PED::DELETE_PED(&(Local_213[iVar0 /*2*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_213[iVar0 /*2*/].f_1))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_213[iVar0 /*2*/].f_1));
		}
		iVar0++;
	}
}

void func_583()//Position - 0x7B4A1
{
	Local_192 = { __LIB_0__.func_343("S1_BKINCAR") };
	Local_193 = { __LIB_0__.func_343("S1_WAIT") };
	Local_194 = { __LIB_0__.func_343("S1_FOLLOW") };
	Local_195 = { __LIB_0__.func_343("S1_GETTOBANK") };
	Local_196 = { __LIB_0__.func_343("S1_GOTOSH") };
	Local_197 = { __LIB_0__.func_343("S1_BKTOAPT") };
	Local_198 = { __LIB_0__.func_343("S1_LOSECOPS") };
	Local_199 = { __LIB_0__.func_343("S1_ABAND") };
	Local_200 = { __LIB_0__.func_343("FBS1_TAIL1") };
	Local_201 = { __LIB_0__.func_343("FBS1_TAIL2") };
	Local_202 = { __LIB_0__.func_343("FBS1_HOME1") };
}

void func_586(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7B58B
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
		__LIB_0__.func_177(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_6__.func_774(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_633(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
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
			iVar4 = func_628(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__.func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__.func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_587(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_587(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x7B703
{
	func_588(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, sParam1, iParam3, iParam2);
}

void func_588(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x7B71F
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_24__.func_941();
	uParam0->f_1 = __LIB_18__.func_240();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_601(&(uParam0->f_2884), 0);
		__LIB_19__.func_967(PLAYER::PLAYER_PED_ID());
		__LIB_26__.func_599(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_24__.func_941())
		{
			func_224(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		uParam0->f_13[iVar1] = Global_60328[iVar1];
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
		func_590(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__.func_327(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_590(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7C5CC
{
	int iVar0;
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = __LIB_18__.func_190(iParam2);
	}
	if (__LIB_35__.func_987(iParam2, &iVar0, iParam3, iParam5))
	{
		func_591(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				func_591(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_591(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x7C654
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
	{
		func_593(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (__LIB_0__.func_328(iParam2))
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

void func_593(var uParam0, int iParam1, int iParam2)//Position - 0x7C6C2
{
	__LIB_6__.func_760(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_595(iParam1, 145, 0);
	uParam0->f_11 = __LIB_0__.func_119(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = __LIB_0__.func_329(iParam1);
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

int func_595(int iParam0, bool bParam1, int iParam2)//Position - 0x7C7E0
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
				if (bParam1 == 145 || bParam1 == Global_97782[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == __LIB_9__.func_486(bParam1, iParam2))
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

void func_601(var uParam0, int iParam1)//Position - 0x7CD70
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78567, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78567, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78567, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78567, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_604(&iVar0))
		{
			if (__LIB_0__.func_332(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar3 = __LIB_24__.func_941();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (__LIB_0__.func_331(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_604(var uParam0)//Position - 0x7DA84
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__.func_300())
		{
			*uParam0 = __LIB_0__.func_390(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, 0, 1, -1);
			if (__LIB_0__.func_389(*uParam0) && !__LIB_10__.func_829(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_628(char* sParam0, int iParam1)//Position - 0x80052
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	iVar2 = MISC::GET_HASH_KEY(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		__LIB_6__.func_789(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_633(int iParam0)//Position - 0x816B3
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return __LIB_0__.func_357(Global_113386.f_9085.f_99.f_205[10]);
			break;
		case 74:
		case 75:
			return __LIB_0__.func_357(Global_113386.f_9085.f_99.f_205[8]);
			break;
		case 84:
		case 85:
			return __LIB_0__.func_357(Global_113386.f_9085.f_99.f_205[11]);
			break;
		case 90:
			return __LIB_0__.func_357(Global_113386.f_9085.f_99.f_205[7]);
			break;
		case 93:
			return __LIB_0__.func_357(Global_113386.f_9085.f_99.f_205[9]);
			break;
	}
	return 0;
}

void func_644()//Position - 0x8228A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if ((!PED::IS_PED_INJURED(iLocal_171) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_183))
		{
			STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01")))
			{
				iLocal_183 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_beer_bot_01"), -109.9875f, -6.925f, 70.5236f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_183, 0f, 0f, -91.3911f, 2, true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_183, false, false);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_184))
		{
			STREAMING::REQUEST_MODEL(joaat("p_ld_heist_bag_s_2"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("p_ld_heist_bag_s_2")))
			{
				iLocal_184 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_ld_heist_bag_s_2"), -109.5757f, -6.4225f, 70.3903f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_184, 0f, 0f, 153.0623f, 2, true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_184, false, false);
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_164))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_166))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_171, false))
				{
					iLocal_164 = __LIB_6__.func_850(iLocal_171, 0, 145);
					bLocal_286 = false;
				}
				else
				{
					iLocal_164 = __LIB_6__.func_850(iLocal_171, 0, 145);
					bLocal_286 = true;
					HUD::SET_BLIP_SCALE(iLocal_164, 1f);
				}
			}
		}
		else if ((HUD::DOES_BLIP_EXIST(iLocal_166) || (bLocal_286 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_171, false))) || (!bLocal_286 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_171, false)))
		{
			HUD::REMOVE_BLIP(&iLocal_164);
		}
		switch (iLocal_107)
		{
			case 0:
				iLocal_280[0] = -1;
				iLocal_280[1] = -1;
				iLocal_280[2] = -1;
				iLocal_281 = -1;
				iLocal_216 = 0;
				iLocal_285 = 0;
				func_574(1);
				func_649();
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_169))
				{
					func_525();
				}
				else
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 2f, 3);
					iLocal_107++;
				}
				break;
			case 1:
				func_649();
				if (iLocal_216 > 2)
				{
					iLocal_107++;
				}
				break;
			case 2:
				func_649();
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_171, joaat("SCRIPT_TASK_VEHICLE_PARK")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_171, joaat("SCRIPT_TASK_VEHICLE_PARK")) != 0) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_175, false), Local_63) < 0.2f)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_175, 0f);
					iLocal_107++;
				}
				break;
			case 3:
				iLocal_107++;
				break;
			case 4:
				if (!PED::IS_PED_INJURED(iLocal_169))
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_Heist_1_Tail_Janitor_01", false, -1))
					{
						if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -80.867424f, -25.283297f, 76.67683f, -43.42942f, -35.593742f, 56.315414f, 22.5f, false, true, 0) || (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_169) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_171))) || SYSTEM::TIMERA() > 3000)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_175, false, false, false);
							TASK::CLEAR_PED_TASKS(iLocal_169);
							iLocal_74 = PED::CREATE_SYNCHRONIZED_SCENE(Local_72, Local_73, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_169, iLocal_74, "missheistfbisetup1", "hassle_f", 4f, -2f, 27, 0, 1000f, 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_169, iLocal_171, -1, 16, 2);
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_STAND_STILL(0, 2000);
							TASK::TASK_LEAVE_VEHICLE(0, iLocal_175, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -81.9327f, -25.7698f, 65.3204f, 1f, -1, 0.25f, 512, 282.6097f);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_171, iVar0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_171, iLocal_169, -1, 16, 2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							iLocal_107++;
						}
					}
				}
				break;
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_74))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_74) > 0.25f)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_171, false)) < 1600f)
						{
							if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_DAMN", 7, 0, 0, 0))
							{
								iLocal_107++;
							}
						}
						else if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_DAMN", 7, 1, 1, 0))
						{
							iLocal_107++;
						}
					}
				}
				break;
			case 6:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_74) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_74) > 0.44f) && !PED::IS_PED_INJURED(iLocal_169))
				{
					TASK::CLEAR_PED_TASKS(iLocal_169);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -101.9519f, -82.8542f, 56.331f, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_169, iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_169, false);
					SYSTEM::SETTIMERA(0);
					STREAMING::REQUEST_ANIM_DICT("missheistfbisetup1leadinoutah_1_mcs_1");
					iLocal_107++;
				}
				break;
			case 7:
				if (SYSTEM::TIMERA() > 2500)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_171, -77.0063f, -17.4465f, 65.4398f, 1f, 20000, 0.25f, 0, 40000f);
					iLocal_107++;
				}
				break;
			case 8:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_171))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_171) > 20)
					{
						TASK::CLEAR_PED_TASKS(iLocal_171);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_171, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistfbisetup1", "unlock_enter_janitor", Local_161, Local_162, 0f, 2), 1f, -1, 0.1f, 512, 92.34f);
						iLocal_107++;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_171, -77.0063f, -17.4465f, 65.4398f, 2f, 2f, 2f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_171);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_171, "janitor_route", 0, 8, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_171, false, false);
				}
				break;
			case 9:
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistfbisetup1", "unlock_enter_janitor", Local_161, Local_162, 0f, 2)) < 0.7f)
				{
					iLocal_280[0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_161, Local_162, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_171, iLocal_280[0], "missheistfbisetup1", "unlock_enter_janitor", 4f, -8f, 1, 0, 4f, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_107++;
				}
				break;
			case 10:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_280[0]) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_280[0]) > 0.9f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_171);
					iLocal_280[0] = -1;
					iLocal_280[1] = PED::CREATE_SYNCHRONIZED_SCENE(Local_161, Local_162, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_171, iLocal_280[1], "missheistfbisetup1", "unlock_loop_janitor", 8f, -8f, 0, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_280[1], true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_171, false, false);
					iLocal_107++;
				}
				break;
			case 11:
				if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_171, false)) < 12f || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_171)) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_280[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_171);
					iLocal_280[1] = -1;
					iLocal_280[2] = PED::CREATE_SYNCHRONIZED_SCENE(Local_161, Local_162, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_171, iLocal_280[2], "missheistfbisetup1", "unlock_exit_janitor", 8f, -4f, 0, 0, 1000f, 0);
					if (ENTITY::DOES_ENTITY_EXIST(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-107.5401f, -9.0258f, 70.6696f, 2f, joaat("v_ilev_janitor_frontdoor"), false, false, true)))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-107.5401f, -9.0258f, 70.6696f, 2f, joaat("v_ilev_janitor_frontdoor"), false, false, true), false);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-107.5401f, -9.0258f, 70.6696f, 2f, joaat("v_ilev_janitor_frontdoor"), false, false, true), iLocal_280[2], "unlock_exit_door", "missheistfbisetup1", 8f, -8f, 0, 1000f);
					}
					iLocal_107++;
				}
				break;
			case 12:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_280[2]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_280[2]) > 0.9f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_171);
						if (ENTITY::DOES_ENTITY_EXIST(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-107.5401f, -9.0258f, 70.6696f, 2f, joaat("v_ilev_janitor_frontdoor"), false, false, true)))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-107.5401f, -9.0258f, 70.6696f, 2f, joaat("v_ilev_janitor_frontdoor"), false, false, true), -8f, true);
							func_574(0);
						}
						iLocal_280[2] = -1;
						__LIB_0__.func_317(61, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_171, -111.455f, -7.0131f, 69.5283f, 1f, 20000, 0.25f, 0, 283f);
						PED::FORCE_PED_MOTION_STATE(iLocal_171, joaat("MotionState_Walk"), false, 0, false);
						ENTITY::SET_ENTITY_COLLISION(iLocal_171, true, false);
						SYSTEM::SETTIMERA(0);
						iLocal_107++;
					}
				}
				break;
			case 13:
				if (SYSTEM::TIMERA() > 1000)
				{
					iLocal_107++;
				}
				break;
			case 14:
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_171, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_171, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_281))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_171, -113.7059f, -8.827343f, 69.57693f, -108.32699f, -10.887757f, 72.76908f, 8.75f, false, true, 0))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_171))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_171, true);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_282, 1f, -1, 0.1f, 512, 40000f);
							TASK::TASK_ACHIEVE_HEADING(0, Local_283.f_2, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_171, iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						}
					}
				}
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (((ENTITY::IS_ENTITY_OCCLUDED(iLocal_171) && func_15(iLocal_171)) || ((func_15(iLocal_171) && !func_15(PLAYER::PLAYER_PED_ID())) && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-252283844) < 0.05f)) || ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), Local_282) < 0.4f && MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iLocal_171) - Local_283.f_2)) < 10f) || MISC::ABSF(((ENTITY::GET_ENTITY_HEADING(iLocal_171) - Local_283.f_2) - 360f)) < 10f))
				{
					TASK::CLEAR_PED_TASKS(iLocal_171);
					iLocal_281 = PED::CREATE_SYNCHRONIZED_SCENE(Local_282, Local_283, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_171, iLocal_281, "missheistfbisetup1leadinoutah_1_mcs_1", "leadin_janitor_idle_01", 4f, -8f, 0, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_281, true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_184))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_184, true, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_183))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_183, true, false);
					}
					PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 9, 0, 0, 0);
					iLocal_107++;
				}
				break;
			case 15:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -113.7059f, -8.827343f, 69.57693f, -108.32699f, -10.887757f, 72.76908f, 8.75f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_171);
					iLocal_281 = PED::CREATE_SYNCHRONIZED_SCENE(Local_282, Local_283, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_171, iLocal_281, "missheistfbisetup1leadinoutah_1_mcs_1", "leadin_janitor_idle_action", 8f, -1000f, 0, 0, 1000f, 0);
					iLocal_107++;
				}
				break;
			}
	}
	if (!iLocal_285)
	{
		if (func_15(iLocal_171) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_58) > 4f)
		{
			__LIB_0__.func_325("S1_FOLLOW2", 7500, 1);
			iLocal_285 = 1;
		}
	}
	if (((!PED::IS_PED_INJURED(iLocal_171) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false)) || iLocal_103 == 0)
	{
		switch (iLocal_103)
		{
			case 0:
				TASK::REQUEST_WAYPOINT_RECORDING("janitor_route");
				STREAMING::REQUEST_MODEL(joaat("A_F_Y_Hipster_03"));
				PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 1, 1);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				if (iLocal_50)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FBIs1UBER");
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_111);
					if (!__LIB_0__.func_295())
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(-53.0454f, 18.6296f, 71.1259f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START(-53.0454f, 18.6296f, 71.1259f, SYSTEM::COS((167.0193f + 90f)), SYSTEM::SIN((167.0193f + 90f)), 0f, 125f, 0);
						iVar3 = MISC::GET_GAME_TIMER();
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && (MISC::GET_GAME_TIMER() - iVar3) < 10000)
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::CLEAR_FOCUS();
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (__LIB_0__.func_294() && __LIB_0__.func_295())
					{
						func_527(&iLocal_176, Local_85, fLocal_86, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
					}
					while (!func_526(-53.0454f, 18.6296f, 71.1259f, 167.0193f, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
					while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_111))
					{
						SYSTEM::WAIT(0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					MISC::CLEAR_AREA(-83.2189f, -23.8057f, 65.321f, 50f, true, false, false, false);
					while ((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("janitor_route")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Hipster_03")))
					{
						SYSTEM::WAIT(0);
					}
					while (!ENTITY::DOES_ENTITY_EXIST(iLocal_169))
					{
						func_525();
						SYSTEM::WAIT(0);
					}
					__LIB_2__.func_292();
					if (__LIB_0__.func_295())
					{
						__LIB_6__.func_775(iLocal_176, -1, 1);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_171) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
					{
						while (!func_518(-59.3559f, -7.0657f, 69.2725f, 165.8312f))
						{
							SYSTEM::WAIT(0);
						}
					}
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false) && !PED::IS_PED_INJURED(iLocal_171)) && PED::IS_PED_IN_VEHICLE(iLocal_171, iLocal_175, false))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_175, 5f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_175, true, true, false);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_175, 5f);
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_JANITOR"))
					{
						AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOLLOW_JANITOR");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("AH1_RESTART");
				}
				if (!PED::IS_PED_INJURED(iLocal_171))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_170, iLocal_171, -1, 16, 3);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_171, -1, 16, 3);
				}
				iLocal_181 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_62);
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_181);
				STREAMING::SET_INTERIOR_ACTIVE(iLocal_181, true);
				INTERIOR::CAP_INTERIOR(iLocal_181, false);
				iLocal_107 = 0;
				func_10();
				iLocal_284 = 0;
				CAM::SET_WIDESCREEN_BORDERS(false, 0);
				iLocal_103++;
				break;
			case 1:
				if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 5f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_176, true, true, false);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_176, 12f);
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
				{
					func_514(&iLocal_176, &iLocal_167, Local_60, &iLocal_166);
					if (!iLocal_284 && !PED::IS_PED_INJURED(iLocal_171))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_171, false)) < SYSTEM::POW(50f, 2f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_175, 17)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
						{
							if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_ARRIVE", 8, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
								iLocal_284 = 1;
							}
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176))
					{
						if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_60, Global_19, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_60 - Vector(0.05f, 0f, 0f), 1f, 1f, 2.5f, true, true, 0)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_176)) && __LIB_0__.func_398(1, 0, 1))
						{
							HUD::CLEAR_PRINTS();
							if (__LIB_6__.func_762(iLocal_176, 1093140480, 1, 1056964608, 0, 1, 0))
							{
								SYSTEM::SETTIMERB(0);
								HUD::REMOVE_BLIP(&iLocal_166);
								iLocal_103++;
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						HUD::CLEAR_PRINTS();
						HUD::REMOVE_BLIP(&iLocal_166);
						HUD::REMOVE_BLIP(&iLocal_167);
						iLocal_103++;
					}
				}
				break;
			case 2:
				if (iLocal_107 > 1)
				{
					SYSTEM::SETTIMERB(0);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
					iLocal_103++;
				}
				break;
			case 3:
				if (SYSTEM::TIMERB() > 1500)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
					{
						if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_OUT", 9, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_103++;
						}
					}
					else
					{
						SYSTEM::SETTIMERB(1500);
						iLocal_103++;
					}
				}
				break;
			case 4:
				if (SYSTEM::TIMERB() > 1500)
				{
					iLocal_103++;
				}
				break;
			case 5:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_171))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_171, 1f, false);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -73.21686f, -16.197964f, 65.36488f, -104.94996f, -4.713087f, 69.37826f, 6f, false, true, 0))
				{
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REQUEST_CUTSCENE(sLocal_187, 8);
					}
				}
				if (((func_15(PLAYER::PLAYER_PED_ID()) && func_15(iLocal_171)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_181))
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_181);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
					{
						PED::DELETE_PED(&iLocal_169);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Hipster_01"));
					func_576(5);
				}
				break;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_58, true) < 15f)
		{
			if (!iLocal_96)
			{
				__LIB_0__.func_358(5);
				iLocal_96 = 1;
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_187, 8);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_171))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_171, false), true) > 100f)
			{
				__LIB_0__.func_320(&Local_197);
			}
		}
		if (iLocal_48 != 4)
		{
			__LIB_0__.func_317(61, 6);
			__LIB_0__.func_317(61, 1);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_175))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
				else
				{
					iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar4, iLocal_175))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_175);
						TASK::TASK_SMART_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID(), 200f, 10000, true, false);
						__LIB_0__.func_296();
						__LIB_6__.func_771();
						func_13("S1_JSPOOK");
					}
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_ON_FOOT"))
			{
				AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOLLOW_ON_FOOT");
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_JANITOR"))
			{
				AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_JANITOR");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_JANITOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_JANITOR");
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_171, false), true) > 200f)
		{
			HUD::CLEAR_PRINTS();
			__LIB_0__.func_296();
			__LIB_6__.func_771();
			func_13("S1_FAILLV");
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_171))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false) && (PED::IS_PED_IN_VEHICLE(iLocal_171, iLocal_175, false) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), ENTITY::GET_ENTITY_COORDS(iLocal_175, false)) < 25f))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_175))
				{
					func_576(13);
				}
			}
		}
		if (func_645())
		{
			func_576(13);
		}
		if ((iLocal_107 < 7 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_171, -87.36494f, -31.341928f, 63.480988f, -80.96227f, -15.885396f, 70.97217f, 11.75f, false, true, 0)) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -87.36494f, -31.341928f, 63.480988f, -80.96227f, -15.885396f, 70.97217f, 11.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_176, -87.36494f, -31.341928f, 63.480988f, -80.96227f, -15.885396f, 70.97217f, 11.75f, false, true, 0)))
		{
			func_576(13);
		}
	}
	else if (PED::IS_PED_INJURED(iLocal_171))
	{
		if (!PED::IS_PED_INJURED(iLocal_169))
		{
			TASK::CLEAR_PED_TASKS(iLocal_169);
			TASK::TASK_SMART_FLEE_PED(iLocal_169, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		}
		func_13("S1_FAILED_K");
	}
}

int func_645()//Position - 0x83694
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		fVar0 = 1f;
		fVar1 = 5f;
		fVar2 = 5f;
		fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_171, false));
		if (!PED::IS_PED_INJURED(iLocal_171))
		{
			if (!func_15(iLocal_171))
			{
				if (fVar3 < fVar2)
				{
					__LIB_0__.func_210("S1_BACKUP", 1000, 1);
					if (iLocal_232 != 0)
					{
						fLocal_233 = (fLocal_233 + MISC::GET_FRAME_TIME());
					}
					iLocal_232 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_232 = 0;
				}
				if (fVar3 < fVar2 && fLocal_233 > __LIB_0__.func_408(fVar0, fVar1, (fVar3 / fVar2)))
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -74.9495f, -20.331139f, 64.58515f, -101.63377f, -10.822943f, 70.84535f, 13f, false, true, 0) && fVar3 < 5f)
					{
						return 1;
					}
				}
			}
			if ((fVar3 < 10f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_171, -77.8852f, -15.151772f, 65.368904f, -106.71353f, -5.29953f, 72.15063f, 7f, false, true, 0)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_171, PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_171, PLAYER::PLAYER_PED_ID(), true))
			{
				bLocal_52 = false;
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
			{
				if (!PED::IS_PED_INJURED(iLocal_169) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_169, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 25f)
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_169))
					{
						iVar4 = 1;
					}
					if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_169))
					{
						iVar4 = 1;
					}
					if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_169, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 25f) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_169))
					{
						iVar4 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
				{
					if (((((ENTITY::IS_ENTITY_DEAD(iLocal_169, false) || PED::IS_PED_INJURED(iLocal_169)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_169, PLAYER::PLAYER_PED_ID(), true)) || iVar4) || PED::IS_PED_FLEEING(iLocal_169)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178, false) && VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_178)))
					{
						if (!PED::IS_PED_INJURED(iLocal_169))
						{
							if (!PED::IS_PED_FLEEING(iLocal_169))
							{
								TASK::TASK_REACT_AND_FLEE_PED(iLocal_169, PLAYER::PLAYER_PED_ID());
							}
						}
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_74) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), ENTITY::GET_ENTITY_COORDS(iLocal_169, false)) < 100f) || (PED::IS_PED_IN_ANY_VEHICLE(iLocal_171, false) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), Local_63) < 7f))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_171, false))
							{
								bLocal_52 = true;
							}
							else
							{
								bLocal_52 = false;
							}
							return 1;
						}
					}
				}
			}
			if (PED::IS_PED_FLEEING(iLocal_171))
			{
				bLocal_52 = false;
				return 1;
			}
			if (((((((((((FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(5, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(21, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(20, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(19, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 10f))
			{
				bLocal_52 = false;
				return 1;
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 5f, true))
			{
				bLocal_52 = false;
				return 1;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iVar5 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar5, -74.64776f, -15.944033f, 69.250465f, -98.175f, -7.711004f, 65.12946f, 4.25f, false, true, 0))
				{
					bLocal_52 = true;
					return 1;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_171))
			{
				return 1;
			}
		}
		else
		{
			bLocal_52 = false;
			return 1;
		}
		if ((fVar3 < 50f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_171, PLAYER::PLAYER_PED_ID()))
				{
					bLocal_52 = false;
					return 1;
				}
			}
			else
			{
				bLocal_52 = false;
				return 1;
			}
		}
		func_646();
	}
	return 0;
}

void func_646()//Position - 0x83BF5
{
	if ((VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(-86.58f, -17.64f, 65.77f, 12f, 0, 4) != 0 || VEHICLE::GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(-86.58f, -17.64f, 65.77f, 12f, 0, 4, 0) != 0) || VEHICLE::GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(-86.58f, -17.64f, 65.77f, 12f, 0, 4, 0) != 0)
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID(), 200f, 20000, true, false);
		func_13("S1_JSPOOK");
	}
}

void func_649()//Position - 0x83D78
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iLocal_171) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_82, Local_83, fLocal_84, false, true, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_171, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) != 1)
			{
				iVar0 = func_650(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), &Local_214) + 1;
				if (iVar0 >= 0 && iVar0 < Local_214.f_0)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_175, false), Local_214[iVar0 /*3*/]) > 625f || iVar0 == 7)
					{
						iLocal_215 = iVar0;
					}
					else if (iVar0 < (Local_214.f_0 - 1))
					{
						iLocal_215 = iVar0 + 1;
					}
					if (iLocal_215 >= 0)
					{
						iLocal_216 = 0;
						if (iLocal_215 < 2)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_171, iLocal_175, Local_214[iLocal_215 /*3*/], 15f, 0, joaat("stanier"), 786475, 3f, 0f);
						}
						else
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_171, iLocal_175, Local_214[iLocal_215 /*3*/], 15f, 0, joaat("stanier"), 786603, 3f, 0f);
						}
					}
				}
			}
			else if (iLocal_215 >= 0 && iLocal_215 < Local_214.f_0)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_175, false), Local_214[iLocal_215 /*3*/]) < 400f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_171);
				}
			}
		}
		else
		{
			switch (iLocal_216)
			{
				case 0:
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_111);
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_111))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_171, iLocal_175, sLocal_111, 786469, 0, 8, -1, 10f, false, 2f);
						iLocal_216++;
					}
					break;
				case 1:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_175))
					{
						iLocal_216++;
					}
					break;
				case 2:
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_175))
					{
						iLocal_216++;
					}
					break;
				}
			}
	}
}

int func_650(struct<3> Param0, int iParam1)//Position - 0x83F49
{
	int iVar0;
	int iVar1;
	float fVar2;
	fVar2 = 99999f;
	iVar0 = 0;
	while (iVar0 < (*iParam1 - 1))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(MISC::GET_CLOSEST_POINT_ON_LINE(Param0, *(iParam1[iVar0 /*3*/]), *(iParam1[iVar0 + 1 /*3*/]), true), Param0, true) < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = SYSTEM::VDIST(MISC::GET_CLOSEST_POINT_ON_LINE(Param0, *(iParam1[iVar0 /*3*/]), *(iParam1[iVar0 + 1 /*3*/]), true), Param0);
		}
		iVar0++;
	}
	return iVar1;
}

void func_652()//Position - 0x84010
{
	float fVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false) || iLocal_103 == 0)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.85f);
		switch (iLocal_103)
		{
			case 0:
				bLocal_99 = true;
				fLocal_278 = 0f;
				bLocal_95 = false;
				fLocal_279 = 0f;
				iLocal_216 = 0;
				STREAMING::REQUEST_ANIM_DICT("cellphone@");
				STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				if (iLocal_50)
				{
					func_581();
					PED::DELETE_PED(&iLocal_171);
					VEHICLE::DELETE_VEHICLE(&iLocal_175);
					while (!func_526(Local_59, fLocal_88, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!__LIB_0__.func_295())
					{
						STREAMING::REQUEST_COLLISION_AT_COORD(Local_59);
						while (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(PLAYER::PLAYER_PED_ID()))
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::SET_FOCUS_POS_AND_VEL(Local_59, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START(Local_59, SYSTEM::COS((fLocal_88 + 90f)), SYSTEM::SIN((fLocal_88 + 90f)), 0f, 25f, 0);
						SYSTEM::SETTIMERA(0);
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 10000)
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::CLEAR_FOCUS();
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_2__.func_292();
					while (!func_518(80.8118f, -661.5384f, 30.6444f, 339.4735f))
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_175, 94.7542f, -621.0219f, 31.2438f, false, false, true);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_175, -0.0002f, -0.0024f, -0.1767f, 0.9843f);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_175, "AGENCY_H_1_JANITORS_CAR_GROUP", 0f);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FBIs1UBER");
					while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER"))
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER"))
					{
						if (__LIB_0__.func_86(Local_75[0 /*3*/]))
						{
							func_700(&Local_75, 1, "FBIs1UBER");
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_175, 7f);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					if (__LIB_0__.func_295())
					{
						__LIB_6__.func_775(iLocal_176, -1, 1);
					}
					AUDIO::TRIGGER_MUSIC_EVENT("AH1_RESTART");
					Local_194.f_1 = 0;
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(199.83015f, 182.74065f, 64.70162f, 124.54742f, -22.54642f, 115.23144f, 17.5f, false, false, true);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false) && !PED::IS_PED_INJURED(iLocal_171))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_175, true, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_171, true, 1);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_175, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_171, false);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_175))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_175);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_164))
					{
						iLocal_164 = __LIB_6__.func_825(iLocal_175, 0, 0);
					}
				}
				iLocal_97[0] = 0;
				iLocal_97[1] = 0;
				iLocal_97[2] = 0;
				iLocal_98 = 0;
				iLocal_108 = 0;
				iLocal_234 = 0;
				SYSTEM::SETTIMERA(0);
				SYSTEM::SETTIMERB(0);
				func_10();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_WAIT_FOR_CARS"))
				{
					AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_WAIT_FOR_CARS");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_JANITOR"))
				{
					AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOLLOW_JANITOR");
				}
				iLocal_163 = 1;
				iLocal_103++;
				break;
			case 1:
				__LIB_30__.func_929(500);
				if (HUD::DOES_BLIP_EXIST(iLocal_164) && !__LIB_0__.func_75())
				{
					__LIB_0__.func_320(&Local_194);
				}
				switch (iLocal_108)
				{
					case 0:
						if (SYSTEM::TIMERA() > 7500)
						{
							__LIB_6__.func_819(Local_200.f_0, 0);
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
							{
								if ((iLocal_203 && !iLocal_204) && !__LIB_0__.func_75())
								{
									SYSTEM::SETTIMERA(0);
									iLocal_203 = 0;
									iLocal_204 = 0;
									StringCopy(&Local_205, "", 24);
									iLocal_108++;
								}
							}
						}
						break;
					case 1:
						__LIB_6__.func_819("", 1);
						if (SYSTEM::TIMERA() > 8000)
						{
							iLocal_108++;
						}
						break;
					case 2:
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_182))
						{
							STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
							func_690(&iLocal_160);
							STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_2");
							if (((STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")) && __LIB_11__.func_960(&iLocal_160)) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_2")) && !PED::IS_PED_INJURED(iLocal_170))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_182))
								{
									iLocal_182 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), PED::GET_PED_BONE_COORDS(iLocal_170, 60309, 0f, 0f, 0f), true, true, false);
									__LIB_11__.func_958(&iLocal_160, 0, 20);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_182, iLocal_170, PED::GET_PED_BONE_INDEX(iLocal_170, 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
									TASK::TASK_PLAY_ANIM(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a", 2f, -1000f, -1, 49, 0f, false, false, false);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_170, iLocal_182, -1, 0, 2);
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						else if (SYSTEM::TIMERA() > 3000)
						{
							__LIB_6__.func_819(Local_201.f_0, 0);
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
							{
								if ((iLocal_203 && !iLocal_204) && !__LIB_0__.func_75())
								{
									SYSTEM::SETTIMERA(0);
									iLocal_203 = 0;
									iLocal_204 = 0;
									StringCopy(&Local_205, "", 24);
									iLocal_108++;
								}
							}
						}
						break;
					case 3:
						if (!PED::IS_PED_INJURED(iLocal_170))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a", 3))
							{
								fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a");
								TASK::CLEAR_PED_TASKS(iLocal_170);
								TASK::TASK_PLAY_ANIM(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a", 1000f, -2f, -1, 48, fVar0, false, false, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_170, false, false);
								TASK::TASK_CLEAR_LOOK_AT(iLocal_170);
								SYSTEM::SETTIMERA(0);
								iLocal_108++;
							}
						}
						break;
					case 4:
						if (((!PED::IS_PED_INJURED(iLocal_170) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a", 3)) && ENTITY::DOES_ENTITY_EXIST(iLocal_182)) && SYSTEM::TIMERA() > 1000)
						{
							SYSTEM::SETTIMERA(0);
							OBJECT::DELETE_OBJECT(&iLocal_182);
							__LIB_20__.func_654(&iLocal_160);
							__LIB_11__.func_810();
							iLocal_108++;
						}
						break;
					case 5:
						__LIB_6__.func_819("", 1);
						if (SYSTEM::TIMERA() > 4000)
						{
							iLocal_108++;
						}
						break;
					case 6:
						if (SYSTEM::TIMERA() > 3000)
						{
							__LIB_6__.func_819("FBS1_CASH", 0);
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
							{
								if ((iLocal_203 && !iLocal_204) && !__LIB_0__.func_75())
								{
									SYSTEM::SETTIMERA(0);
									iLocal_203 = 0;
									iLocal_204 = 0;
									StringCopy(&Local_205, "", 24);
									iLocal_108++;
								}
							}
						}
						break;
					case 7:
						__LIB_6__.func_819("", 1);
						if (SYSTEM::TIMERA() > 10000)
						{
							iLocal_108++;
						}
						break;
					case 8:
						__LIB_6__.func_819("FBS1_TAIL3", 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
						{
							if ((iLocal_203 && !iLocal_204) && !__LIB_0__.func_75())
							{
								SYSTEM::SETTIMERA(0);
								iLocal_203 = 0;
								iLocal_204 = 0;
								StringCopy(&Local_205, "", 24);
								iLocal_108++;
							}
						}
						break;
					case 9:
						__LIB_6__.func_819("", 1);
						break;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
				{
					if (VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(iLocal_175))
					{
					}
					if (!PED::IS_PED_INJURED(iLocal_171) && PED::IS_PED_IN_VEHICLE(iLocal_171, iLocal_175, false))
					{
						func_649();
					}
					__LIB_0__.func_360(&uLocal_117, iLocal_175, 0, 0, 1, 1, 1);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_175, iVar1, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_175, PLAYER::PLAYER_PED_ID(), true))
						{
							if (!PED::IS_PED_INJURED(iLocal_171))
							{
								PED::SET_PED_FLEE_ATTRIBUTES(iLocal_171, 2, VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false));
								TASK::TASK_SMART_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID(), 200f, 20000, false, false);
							}
							if (PED::IS_PED_IN_VEHICLE(iLocal_170, iVar1, false))
							{
								iLocal_103 = 2;
							}
							else
							{
								iLocal_103 = 20;
							}
							bLocal_51 = true;
							__LIB_6__.func_771();
						}
					}
					if (func_656(1077936128, 1092616192, 1120403456, 1132068864))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_164))
						{
							HUD::REMOVE_BLIP(&iLocal_164);
						}
						iLocal_103 = 3;
						bLocal_51 = true;
						__LIB_6__.func_771();
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_175, 10f, 10f, 3f, false, true, 0))
					{
						if (((PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID()) != 0) && PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID()) != 0) && !__LIB_7__.func_141(iLocal_175, 0, 0, 0, 0, 0, 1, 0, 1))
						{
							if (!PED::IS_PED_INJURED(iLocal_171))
							{
								PED::SET_PED_FLEE_ATTRIBUTES(iLocal_171, 2, VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false));
								TASK::TASK_SMART_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
							}
							SYSTEM::SETTIMERA(1500);
							iLocal_103 = 20;
							bLocal_51 = true;
							__LIB_6__.func_771();
						}
					}
					if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_176, false), ENTITY::GET_ENTITY_COORDS(iLocal_175, false)) < 100f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_176, iLocal_175)) || ((ENTITY::DOES_ENTITY_EXIST(iVar1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar1, false), ENTITY::GET_ENTITY_COORDS(iVar1, false)) < 100f) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iLocal_175))) || func_655())
					{
						if (!bLocal_95)
						{
							if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false) && !PED::IS_PED_INJURED(iLocal_171)) && PED::IS_PED_IN_VEHICLE(iLocal_171, iLocal_175, false))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_175);
								PED::SET_PED_FLEE_ATTRIBUTES(iLocal_171, 2, VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false));
								TASK::TASK_SMART_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID(), 200f, 20000, false, false);
								bLocal_51 = true;
								iLocal_103 = 2;
							}
						}
					}
					iVar1 = 0;
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_252, Local_253, fLocal_254, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_255, Local_256, fLocal_257, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_258, Local_259, fLocal_260, false, true, 0))
					{
						VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_175, 1, true);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_261, Local_262, fLocal_263, false, true, 0))
					{
						VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_175, 0, true);
					}
					if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, 110.14142f, -578.8231f, 29.459078f, 104.086945f, -594.87665f, 34.62697f, 7.25f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, 125.53692f, -35.08237f, 64.56139f, 115.33318f, -62.903217f, 71.670616f, 9.75f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, -4.227216f, 24.248606f, 68.12498f, -33.933033f, 34.761368f, 77.05803f, 9.75f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, -45.326366f, -542.104f, 37.18411f, -10.149111f, -544.48236f, 43.56747f, 9.75f, false, true, 0))
					{
						VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_175, 0, false);
					}
				}
				func_654(&iLocal_176, &iLocal_167, iLocal_175, &iLocal_164);
				break;
			case 2:
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176))
				{
					if (__LIB_9__.func_238(&Local_53, cLocal_110, "FBS1_SPKFAIL", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_103 = 20;
					}
				}
				else
				{
					iLocal_103 = 20;
				}
				break;
			case 20:
				if (SYSTEM::TIMERA() > 3000)
				{
					func_13("S1_JSPOOK");
				}
				break;
			case 3:
				if (HUD::DOES_BLIP_EXIST(iLocal_164))
				{
					HUD::REMOVE_BLIP(&iLocal_164);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176))
				{
					if (__LIB_9__.func_238(&Local_53, cLocal_110, "FBS1_LOSFAIL", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_103 = 30;
					}
				}
				else
				{
					iLocal_103 = 30;
				}
				break;
			case 30:
				if (SYSTEM::TIMERA() > 3000)
				{
					func_13("S1_FAILED");
				}
				break;
		}
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false) && !PED::IS_PED_INJURED(iLocal_171)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_82, Local_83, fLocal_84, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_171, Local_82, Local_83, fLocal_84, false, true, 0))
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					__LIB_9__.func_981(&uLocal_117, 0, 0);
				}
				if (iLocal_103 == 1)
				{
				}
				if (bLocal_99)
				{
					__LIB_0__.func_498(528);
				}
				func_576(4);
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_82) < 40000f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_169))
			{
				func_525();
			}
			if (!iLocal_96)
			{
				__LIB_0__.func_358(4);
				iLocal_96 = 1;
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_JANITOR"))
			{
				AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_JANITOR");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_JANITOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_JANITOR");
		}
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
}

void func_654(int iParam0, int* iParam1, int iParam2, int* iParam3)//Position - 0x84D35
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false) && ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
		{
			if (!HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::CLEAR_PRINTS();
				__LIB_0__.func_320(&Local_192);
				*iParam1 = __LIB_6__.func_825(*iParam0, 0, 0);
			}
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(*iParam3))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iParam2))
				{
					*iParam3 = __LIB_6__.func_825(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam2), 0, 0);
				}
				else if (ENTITY::IS_ENTITY_A_PED(iParam2))
				{
					*iParam3 = __LIB_6__.func_850(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam2), 0, 145);
				}
			}
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::CLEAR_PRINTS();
				HUD::REMOVE_BLIP(iParam1);
			}
		}
	}
}

int func_655()//Position - 0x84DEC
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5[4];
	int iVar6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar1), &Var2, &Var3);
				Var4 = { Var3 - Var2 };
				Var5[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_175, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, Var4.f_1, 0f)) };
				Var5[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_175, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, -Var4.f_1, 0f)) };
				Var5[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_175, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, Var4.f_0, 0f, 0f)) };
				Var5[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_175, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, -Var4.f_0, 0f, 0f)) };
				iVar6 = 0;
				while (iVar6 < Var5.f_0)
				{
					if ((Var5[iVar6 /*3*/].f_1 > -1f && Var5[iVar6 /*3*/].f_1 < 7f) && MISC::ABSF(Var5[iVar6 /*3*/]) < 3.5f)
					{
						bVar0 = true;
					}
					iVar6++;
				}
			}
		}
		if (bVar0)
		{
			if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
			{
				fLocal_279 = (fLocal_279 + (MISC::GET_FRAME_TIME() * 100f));
			}
			else
			{
				fLocal_279 = (fLocal_279 + MISC::GET_FRAME_TIME());
			}
		}
		else if (fLocal_279 > 0f)
		{
			fLocal_279 = (fLocal_279 - (MISC::GET_FRAME_TIME() * 2f));
		}
		if (fLocal_279 > 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_656(float fParam0, float fParam1, float fParam2, float fParam3)//Position - 0x84F45
{
	float fVar0;
	float fVar1;
	fVar0 = (fParam3 - fParam2);
	fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_175, false));
	if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_175) && fVar1 > fParam2)
	{
		fLocal_278 = (fLocal_278 + MISC::GET_FRAME_TIME());
	}
	else
	{
		fLocal_278 = 0f;
	}
	if (fVar1 > fParam2 && fLocal_278 > __LIB_0__.func_408(fParam0, fParam1, (1f - (__LIB_0__.func_301((fVar1 - fParam2), 0f, fVar0) / fVar0))))
	{
		return 1;
	}
	return 0;
}

void func_659(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x85004
{
	func_660(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_660(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x85022
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		__LIB_9__.func_981(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_661(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_661(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8505A
{
	int iVar0;
	int iVar1;
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (__LIB_0__.func_1(iVar0))
	{
		__LIB_0__.func_184();
	}
	if (__LIB_0__.func_309(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_679(uParam0, bParam5, bParam7, 0))
			{
				func_676(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (__LIB_0__.func_363(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!__LIB_0__.func_1(iVar0))
							{
								__LIB_0__.func_151(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
								{
									__LIB_0__.func_303(1);
								}
							}
						}
					}
				}
			}
			else if (__LIB_0__.func_363(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!__LIB_0__.func_1(iVar0))
						{
							__LIB_0__.func_151(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								__LIB_0__.func_303(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (__LIB_0__.func_1(sParam3))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						__LIB_9__.func_981(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						__LIB_9__.func_981(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						__LIB_9__.func_981(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						__LIB_9__.func_981(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						__LIB_9__.func_981(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					__LIB_9__.func_981(uParam0, iVar0, 1);
				}
			}
			if (!func_679(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !__LIB_0__.func_302(uParam0))
				{
					__LIB_0__.func_361(uParam0);
				}
			}
		}
	}
	else
	{
		__LIB_9__.func_981(uParam0, iVar0, 0);
	}
}

void func_676(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x859EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (Global_1581357 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		__LIB_9__.func_981(uParam0, 0, 0);
	}
	if (__LIB_0__.func_78(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!__LIB_0__.func_365())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_679(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x85B28
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (__LIB_18__.func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (__LIB_19__.func_975(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (__LIB_19__.func_975(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (__LIB_18__.func_201(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (__LIB_0__.func_302(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!__LIB_18__.func_201(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!__LIB_19__.func_975(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!__LIB_19__.func_975(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!__LIB_18__.func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!__LIB_18__.func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!__LIB_19__.func_975(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!__LIB_19__.func_975(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!__LIB_18__.func_201(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (__LIB_0__.func_366(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (__LIB_19__.func_973(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || __LIB_19__.func_973(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (__LIB_0__.func_366(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!__LIB_0__.func_302(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!__LIB_18__.func_177(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		__LIB_0__.func_184();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_690(int* iParam0)//Position - 0x86119
{
	*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(__LIB_0__.func_367());
}

bool func_694(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8)//Position - 0x8647E
{
	var uVar0;
	var uVar1;
	__LIB_0__.func_391(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	__LIB_11__.func_723(2, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_695(&uVar0, &uVar1, iParam6, 0);
}

int func_695(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x864D7
{
	int iVar0;
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam2 > Global_21607)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
				}
				else
				{
					__LIB_0__.func_74();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (__LIB_0__.func_191(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		__LIB_0__.func_209();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22601 = Global_22602;
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21224.f_370 = Global_22594;
		Global_21601 = Global_21602;
		Global_21603 = Global_21604;
		if (Global_21863 == 0)
		{
			Global_21759[0 /*6*/] = { Global_21785[0 /*6*/] };
			Global_21759[1 /*6*/] = { Global_21785[1 /*6*/] };
			Global_21811[0 /*6*/] = { Global_21837[0 /*6*/] };
			Global_21811[1 /*6*/] = { Global_21837[1 /*6*/] };
			Global_21772[0 /*6*/] = { Global_21798[0 /*6*/] };
			Global_21772[1 /*6*/] = { Global_21798[1 /*6*/] };
			Global_21824[0 /*6*/] = { Global_21850[0 /*6*/] };
			Global_21824[1 /*6*/] = { Global_21850[1 /*6*/] };
		}
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam3)
			{
				__LIB_26__.func_585();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (__LIB_0__.func_208())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (Global_21863 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (__LIB_0__.func_73())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					case 8:
						return 0;
						break;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
					}
			}
			__LIB_0__.func_207();
			Global_21615 = bParam3;
		}
		Global_21607 = iParam2;
		if (Global_21601 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21601)
			{
				StringCopy(&(Global_21224.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21224.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20471 = 0;
		__LIB_0__.func_206();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21607 || iParam2 == Global_21607)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		__LIB_0__.func_74();
	}
	return 0;
}

int func_697(char* sParam0, char* sParam1, bool bParam2)//Position - 0x868CA
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
	{
		fVar1 = 7f;
		fVar2 = 100f;
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_176, false), ENTITY::GET_ENTITY_COORDS(iLocal_175, false), true);
		StringCopy(sParam0, "", 24);
		StringCopy(sParam1, "", 24);
		if (bParam2 && !iLocal_163)
		{
			iVar0 = 1;
			StringCopy(sParam0, "FBS1_FRONT", 24);
			iLocal_163 = 1;
		}
		else if (func_698())
		{
			iVar0 = 1;
			StringCopy(sParam0, "FBS1_CALM", 24);
		}
		else if (fVar3 < fVar1 && !bParam2)
		{
			iVar0 = 1;
			StringCopy(sParam0, "FBS1_CLOSE", 24);
		}
		else if (fVar3 > fVar2 && !bParam2)
		{
			iVar0 = 1;
			StringCopy(sParam0, "FBS1_FAR", 24);
		}
		else if (!__LIB_0__.func_75())
		{
			if ((fVar3 < 100f && fVar3 > 40f) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_175))
			{
				if (!iLocal_97[0])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_252, Local_253, fLocal_254, false, true, 0))
					{
						StringCopy(sParam0, "FBS1_LTURN", 24);
						StringCopy(sParam1, "FBS1_LTURN_1", 24);
						iVar0 = 1;
					}
				}
				if (!iLocal_97[1])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_255, Local_256, fLocal_257, false, true, 0))
					{
						StringCopy(sParam0, "FBS1_LTURN", 24);
						StringCopy(sParam1, "FBS1_LTURN_2", 24);
						iVar0 = 1;
					}
				}
				if (!iLocal_97[2])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_258, Local_259, fLocal_260, false, true, 0))
					{
						StringCopy(sParam0, "FBS1_LTURN", 24);
						StringCopy(sParam1, "FBS1_LTURN_3", 24);
						iVar0 = 1;
					}
				}
				if (!iLocal_98)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_261, Local_262, fLocal_263, false, true, 0))
					{
						StringCopy(sParam0, "FBS1_RTURN", 24);
						StringCopy(sParam1, "FBS1_RTURN_1", 24);
						iVar0 = 1;
					}
				}
			}
		}
	}
	return iVar0;
}

int func_698()//Position - 0x86A9E
{
	int iVar0;
	iVar0 = 0;
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false)) && !PED::IS_PED_INJURED(iLocal_171))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_176, false), ENTITY::GET_ENTITY_COORDS(iLocal_175, false)) < 10000f)
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_176))
				{
					iVar0 = 1;
				}
				if (ENTITY::GET_ENTITY_SPEED(iLocal_176) > 60f)
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
				if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
			}
		}
	}
	return iVar0;
}

float func_699(struct<3> Param0)//Position - 0x86B38
{
	int iVar0;
	float fVar1;
	iVar0 = func_650(Param0, &Local_214);
	if (iVar0 >= 0 && iVar0 < Local_214.f_0)
	{
		fVar1 = SYSTEM::TO_FLOAT(iVar0);
		if (iVar0 < (Local_214.f_0 - 1))
		{
			fVar1 = (fVar1 + MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(Param0, Local_214[iVar0 /*3*/], Local_214[iVar0 + 1 /*3*/], true));
		}
		return fVar1;
	}
	return -1f;
}

void func_700(var uParam0, int iParam1, char* sParam2)//Position - 0x86B99
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
		fVar1 = (fVar0 / 199f);
		*(uParam0[199 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, fVar0, sParam2) };
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

void func_702()//Position - 0x86C26
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false) || iLocal_103 == 0)
	{
		fVar1 = 0.2f;
		switch (iLocal_103)
		{
			case 0:
				iLocal_273 = 0;
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FBIs1UBER");
				if (iLocal_50)
				{
					STREAMING::REQUEST_COLLISION_AT_COORD(Local_59);
					while (!func_526(Local_59, fLocal_88, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!__LIB_0__.func_295())
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(Local_59, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START(Local_59, SYSTEM::COS((fLocal_88 + 90f)), SYSTEM::SIN((fLocal_88 + 90f)), 0f, 25f, 0);
						SYSTEM::SETTIMERA(0);
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 10000)
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::CLEAR_FOCUS();
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_176, 72.6414f, -702.4333f, 31.18f, false, false, true);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_176, 0.0019f, 0.0174f, -0.174f, 0.9846f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_176, true, true, false);
					}
					if (__LIB_0__.func_295())
					{
						__LIB_6__.func_775(iLocal_176, -1, 1);
					}
					__LIB_2__.func_292();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
				{
					iLocal_174 = VEHICLE::CREATE_VEHICLE(ENTITY::GET_ENTITY_MODEL(iLocal_176), 72.6414f, -702.4333f, 31.18f, 0f, true, true, false);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_174, 0.0019f, 0.0174f, -0.174f, 0.9846f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_174, 5f);
					iLocal_173 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_174, 26, __LIB_6__.func_816(0), -1, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_173, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_174, true);
					ENTITY::SET_ENTITY_COLLISION(iLocal_174, false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_174, false, false);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_GET_TO_FIB"))
					{
						AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_GET_TO_FIB");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_WAIT_FOR_CARS"))
					{
						AUDIO::START_AUDIO_SCENE("AGENCY_H_1_WAIT_FOR_CARS");
					}
				}
				iLocal_102 = 0;
				iLocal_272 = 0;
				iLocal_101 = 10000;
				iLocal_105 = 1;
				iLocal_104 = MISC::GET_RANDOM_INT_IN_RANGE(3, 5);
				func_10();
				bLocal_274 = true;
				AUDIO::TRIGGER_MUSIC_EVENT("AH1_START");
				SYSTEM::SETTIMERA(0);
				iLocal_103++;
				break;
			case 1:
				if (SYSTEM::TIMERA() > 100)
				{
					if (!PED::IS_PED_INJURED(iLocal_173))
					{
						iLocal_275 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							__LIB_30__.func_933(500);
							while (!CAM::IS_SCREEN_FADED_OUT())
							{
								SYSTEM::WAIT(0);
							}
						}
						func_719();
						func_718(&Local_129, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(PED::GET_PED_BONE_COORDS(iLocal_173, 31086, 0f, 0f, 0f), 339.9642f, Local_66), Local_67, 50f, 20, 10, 3, 1101004800, 0, 0, -1082130432, 0);
						func_717(&Local_129, 1);
						func_717(&iLocal_168, 0);
						if (CAM::DOES_CAM_EXIST(iLocal_168))
						{
							if (MISC::IS_PC_VERSION() && GRAPHICS::GET_ASPECT_RATIO(true) > 1.8f)
							{
								fVar1 = 0.075f;
							}
							CAM::SET_CAM_NEAR_CLIP(iLocal_168, fVar1);
						}
						if ((!PED::IS_PED_INJURED(iLocal_170) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a", 3)) && ENTITY::DOES_ENTITY_EXIST(iLocal_182))
						{
							OBJECT::DELETE_OBJECT(&iLocal_182);
							__LIB_20__.func_654(&iLocal_160);
							__LIB_11__.func_810();
							TASK::CLEAR_PED_TASKS(iLocal_170);
							TASK::TASK_CLEAR_LOOK_AT(iLocal_170);
							SYSTEM::SETTIMERA(0);
							iLocal_108++;
						}
						CAM::SET_WIDESCREEN_BORDERS(true, 0);
						MISC::CLEAR_AREA(Local_59, 200f, true, false, false, false);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							SYSTEM::WAIT(500);
							__LIB_30__.func_929(500);
							while (!CAM::IS_SCREEN_FADED_IN())
							{
								SYSTEM::WAIT(0);
							}
						}
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(0);
					}
					CAM::DO_SCREEN_FADE_IN(500);
					__LIB_0__.func_320(&Local_193);
					iLocal_103++;
				}
				break;
			case 2:
				if ((CAM::DOES_CAM_EXIST(Local_129.f_0) && CAM::IS_CAM_ACTIVE(Local_129.f_0)) && CAM::IS_CAM_RENDERING(Local_129.f_0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_176, 1);
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				switch (iLocal_273)
				{
					case 0:
						if (iLocal_102 < iLocal_104)
						{
							func_710(Local_213[iLocal_102 /*2*/].f_1, Local_116[iLocal_102 /*3*/]);
						}
						if (SYSTEM::TIMERA() > iLocal_101 || iLocal_102 == 0)
						{
							if (iLocal_102 < iLocal_104)
							{
								if (iLocal_102 == 3)
								{
									iVar2 = 102;
								}
								else
								{
									iVar2 = (101 + iLocal_102);
								}
								if (__LIB_0__.func_393(&(Local_213[iLocal_102 /*2*/]), iLocal_112[iLocal_102], iLocal_113, iVar2, iLocal_106[(2 * iLocal_102)], iLocal_106[(2 * iLocal_102) + 1]))
								{
									iLocal_276 = 0;
									iLocal_277 = 0;
									iLocal_273 = 1;
									iLocal_101 = MISC::GET_RANDOM_INT_IN_RANGE(12000, 22000);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_213[iLocal_102 /*2*/].f_1, false))
									{
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_213[iLocal_102 /*2*/].f_1, "AGENCY_H_1_NON_TARGET_CARS_GROUP", 0f);
									}
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						break;
					case 1:
						func_710(Local_213[iLocal_102 /*2*/].f_1, Local_116[iLocal_102 /*3*/]);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_213[iLocal_102 /*2*/].f_1, Local_76, Local_77, fLocal_78, false, true, 0))
						{
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_NON_TARGET_CARS"))
							{
								AUDIO::START_AUDIO_SCENE("AGENCY_H_1_NON_TARGET_CARS");
							}
							if (!iLocal_92)
							{
								__LIB_0__.func_187("S1_FOCUS");
							}
							if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_SPOT", 8, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
								iLocal_273 = 2;
							}
						}
						break;
					case 2:
						if (func_710(Local_213[iLocal_102 /*2*/].f_1, Local_116[iLocal_102 /*3*/]))
						{
							iLocal_272++;
							iLocal_273 = 3;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_213[iLocal_102 /*2*/].f_1, Local_76, Local_77, fLocal_78, false, true, 0))
						{
							iLocal_273 = 4;
						}
						break;
					case 3:
						func_710(Local_213[iLocal_102 /*2*/].f_1, Local_116[iLocal_102 /*3*/]);
						if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_IDENT", 8, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
							iLocal_273 = 5;
						}
						break;
					case 4:
						func_710(Local_213[iLocal_102 /*2*/].f_1, Local_116[iLocal_102 /*3*/]);
						if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_MISS", 8, 0, 0, 0))
						{
							iLocal_273 = 5;
						}
						break;
					case 5:
						func_710(Local_213[iLocal_102 /*2*/].f_1, Local_116[iLocal_102 /*3*/]);
						if (!__LIB_0__.func_75())
						{
							if (iLocal_105 < 4)
							{
								StringCopy(&Var3, "FBS1_SOC", 24);
								StringIntConCat(&Var3, iLocal_105, 24);
								if (__LIB_9__.func_238(&Local_53, "FBS1AUD", &Var3, 8, 0, 0, 0))
								{
									iLocal_273 = 6;
									iLocal_105++;
								}
							}
							else
							{
								iLocal_273 = 6;
							}
						}
						break;
					case 6:
						func_710(Local_213[iLocal_102 /*2*/].f_1, Local_116[iLocal_102 /*3*/]);
						if (!__LIB_0__.func_75())
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_213[iLocal_102 /*2*/].f_1) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_213[iLocal_102 /*2*/].f_1, Local_79, Local_80, fLocal_81, false, true, 0)) || !ENTITY::DOES_ENTITY_EXIST(Local_213[iLocal_102 /*2*/].f_1))
							{
								iLocal_102++;
								iLocal_101 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 5000);
								if (iLocal_102 >= iLocal_104)
								{
									__LIB_0__.func_358(3);
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_NON_TARGET_CARS"))
									{
										AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_NON_TARGET_CARS");
									}
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_JANITORS_CAR"))
									{
										AUDIO::START_AUDIO_SCENE("AGENCY_H_1_JANITORS_CAR");
									}
									else if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
									{
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_175, "AGENCY_H_1_JANITORS_CAR_GROUP", 0f);
									}
									iLocal_276 = 0;
									iLocal_277 = 0;
									iLocal_103++;
								}
								else
								{
									iLocal_273 = 0;
								}
							}
						}
						break;
				}
				if (iLocal_102 < iLocal_104 && iLocal_102 >= 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_213[iLocal_102 /*2*/].f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_213[iLocal_102 /*2*/].f_1, false))
					{
						if (!iLocal_276)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_213[iLocal_102 /*2*/], 94.87687f, -703.07733f, 31.523407f, 98.58408f, -692.75665f, 36.082397f, 9f, false, true, 0))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_Skid_CR", Local_213[iLocal_102 /*2*/].f_1, 0, false, 0);
								iLocal_276 = 1;
							}
						}
						if (!iLocal_277)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_213[iLocal_102 /*2*/], 84.49801f, -699.1079f, 30.427471f, 88.14184f, -689.0353f, 35.591557f, 4f, false, true, 0))
							{
								if (iLocal_102 == 0)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_tyre_bump_CR", Local_213[iLocal_102 /*2*/].f_1, 0, false, 0);
								}
								else if (iLocal_102 == 1)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_tyre_bump_creak_CR", Local_213[iLocal_102 /*2*/].f_1, 0, false, 0);
								}
								else if (iLocal_102 == 2)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_tyre_bump_no_skid_CR", Local_213[iLocal_102 /*2*/].f_1, 0, false, 0);
								}
								else
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_tyre_bump_scraped_CR", Local_213[iLocal_102 /*2*/].f_1, 0, false, 0);
								}
								iLocal_277 = 1;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < Local_213.f_0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_213[iVar0 /*2*/].f_1, false) && !PED::IS_PED_INJURED(Local_213[iVar0 /*2*/]))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_213[iVar0 /*2*/].f_1))
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(Local_213[iVar0 /*2*/], Local_213[iVar0 /*2*/].f_1, 20f, 262275);
							if (ENTITY::IS_ENTITY_OCCLUDED(Local_213[iVar0 /*2*/].f_1))
							{
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_213[iVar0 /*2*/].f_1, 0f);
								PED::DELETE_PED(&(Local_213[iVar0 /*2*/]));
								VEHICLE::DELETE_VEHICLE(&(Local_213[iVar0 /*2*/].f_1));
							}
						}
					}
					iVar0++;
				}
				break;
			case 3:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER") && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_175))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_175, 1, "FBIs1UBER", 5f, 262144);
							SYSTEM::SETTIMERA(0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_175) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false))
					{
						if (!iLocal_276)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, 94.87687f, -703.07733f, 31.523407f, 98.58408f, -692.75665f, 36.082397f, 4.75f, false, true, 0))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_Skid_CR", iLocal_175, 0, false, 0);
								iLocal_276 = 1;
							}
						}
						if (!iLocal_277)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, 84.49801f, -699.1079f, 30.427471f, 88.14184f, -689.0353f, 35.591557f, 4f, false, true, 0))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_tyre_bump_CR", iLocal_175, 0, false, 0);
								iLocal_277 = 1;
							}
						}
					}
					if (bLocal_93)
					{
						if (CAM::DOES_CAM_EXIST(Local_129.f_0))
						{
							CAM::SET_CAM_ACTIVE(Local_129.f_0, false);
							CAM::DESTROY_CAM(Local_129.f_0, false);
							ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
						}
						if (!func_679(&uLocal_217, 0, 1, 0) || SYSTEM::TIMERA() > 3000)
						{
							SYSTEM::SETTIMERA(0);
							iVar0 = 0;
							while (iVar0 < Local_213.f_0)
							{
								if ((ENTITY::DOES_ENTITY_EXIST(Local_213[iVar0 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(Local_213[iVar0 /*2*/].f_1)) && ENTITY::IS_ENTITY_OCCLUDED(Local_213[iVar0 /*2*/].f_1))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_213[iVar0 /*2*/]));
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_213[iVar0 /*2*/].f_1));
								}
								iVar0++;
							}
							bLocal_274 = false;
							__LIB_9__.func_981(&uLocal_217, 0, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_176, false);
							SYSTEM::SETTIMERA(0);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_175);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_175, 1, "FBIs1UBER", 5f, 262275);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_JANITORS_CAR"))
							{
								AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_JANITORS_CAR");
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_275);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							if (CAM::DOES_CAM_EXIST(iLocal_168))
							{
								CAM::DESTROY_CAM(iLocal_168, false);
							}
							iLocal_103++;
						}
					}
					else
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_76, Local_77, fLocal_78, false, true, 0))
						{
							if (!iLocal_92)
							{
								__LIB_0__.func_187("S1_FOCUS");
							}
						}
						if (func_710(iLocal_175, Local_115))
						{
							if (!bLocal_93)
							{
								__LIB_6__.func_771();
								if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_JANID", 8, 0, 0, 0))
								{
									if (iLocal_272 == iLocal_104)
									{
										__LIB_0__.func_498(527);
									}
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
									bLocal_93 = true;
									bLocal_95 = false;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
					if (((!bLocal_93 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_76, Local_77, fLocal_78, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_79, Local_80, fLocal_81, false, true, 0)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_175, false), true) > 75f)
					{
						SYSTEM::SETTIMERA(0);
						iLocal_103 = 100;
					}
					iVar0 = 0;
					while (iVar0 < Local_213.f_0)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_213[iVar0 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(Local_213[iVar0 /*2*/].f_1)) && ENTITY::IS_ENTITY_OCCLUDED(Local_213[iVar0 /*2*/].f_1))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_213[iVar0 /*2*/].f_1, 0f);
							PED::DELETE_PED(&(Local_213[iVar0 /*2*/]));
							VEHICLE::DELETE_VEHICLE(&(Local_213[iVar0 /*2*/].f_1));
							if (iVar0 == (Local_213.f_0 - 1))
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_NON_TARGET_CARS"))
								{
									AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_NON_TARGET_CARS");
								}
							}
						}
						iVar0++;
					}
				}
				break;
			case 4:
				func_707();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_JANITOR"))
				{
					AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOLLOW_JANITOR");
				}
				if (SYSTEM::TIMERA() > 500)
				{
					if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_FOLLOW", 8, 0, 0, 0))
					{
						func_576(3);
						iLocal_164 = __LIB_6__.func_825(iLocal_175, 0, 0);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
						iVar0 = 0;
						while (iVar0 < Local_213.f_0)
						{
							PED::DELETE_PED(&(Local_213[iVar0 /*2*/]));
							VEHICLE::DELETE_VEHICLE(&(Local_213[iVar0 /*2*/].f_1));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_112[iVar0]);
							iVar0++;
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_113);
						HUD::CLEAR_HELP(true);
						SYSTEM::SETTIMERA(0);
					}
				}
				break;
			case 100:
				if (SYSTEM::TIMERA() > 3000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_175, false))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_175);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_175, 1, "FBIs1UBER", 5f, 262275);
					}
					SYSTEM::WAIT(0);
					func_13("S1_FAILED");
				}
				break;
			}
	}
	if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/))
	{
		if (CAM::DOES_CAM_EXIST(Local_129.f_0))
		{
			__LIB_7__.func_112(&Local_129, 0, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			if (CAM::DOES_CAM_EXIST(iLocal_168) && CAM::IS_CAM_ACTIVE(iLocal_168))
			{
				CAM::SET_CAM_ROT(Local_129.f_0, Local_67, 2);
			}
		}
	}
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER"))
	{
		func_518(98.6395f, -728.7055f, 32.134f, 347.8271f);
		if (__LIB_0__.func_86(Local_75[0 /*3*/]))
		{
			func_700(&Local_75, 1, "FBIs1UBER");
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_168) && CAM::IS_CAM_RENDERING(iLocal_168))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_PLATES"))
		{
			AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_PLATES");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_PLATES"))
	{
		AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_PLATES");
	}
	if (!iLocal_92)
	{
		if (__LIB_0__.func_1("S1_FOCUS"))
		{
			bVar4 = false;
			iVar0 = 0;
			while (iVar0 < Local_213.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_213[iVar0 /*2*/].f_1))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_213[iVar0 /*2*/].f_1, Local_76, Local_77, fLocal_78, false, true, 0))
					{
						bVar4 = true;
					}
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_175, Local_76, Local_77, fLocal_78, false, true, 0))
				{
					bVar4 = true;
				}
			}
			if (!bVar4)
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (CAM::DOES_CAM_EXIST(iLocal_168))
		{
			if (CAM::IS_CAM_RENDERING(iLocal_168) && CAM::GET_CAM_FOV(iLocal_168) < 20f)
			{
				if (__LIB_0__.func_1("S1_FOCUS"))
				{
					HUD::CLEAR_HELP(true);
					iLocal_92 = 1;
				}
			}
		}
	}
	if (bLocal_274)
	{
		if ((CAM::DOES_CAM_EXIST(Local_129.f_0) && CAM::IS_CAM_RENDERING(Local_129.f_0)) || (CAM::DOES_CAM_EXIST(iLocal_168) && CAM::IS_CAM_RENDERING(iLocal_168)))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(17);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
		if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/, true);
		__LIB_0__.func_186();
	}
}

void func_707()//Position - 0x88392
{
	if (CAM::DOES_CAM_EXIST(iLocal_168))
	{
		CAM::SET_CAM_ACTIVE(iLocal_168, false);
		CAM::DESTROY_CAM(iLocal_168, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_129.f_0))
	{
		CAM::SET_CAM_ACTIVE(Local_129.f_0, false);
		CAM::DESTROY_CAM(Local_129.f_0, false);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

int func_710(int iParam0, struct<3> Param1)//Position - 0x8850A
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	if (CAM::DOES_CAM_EXIST(Local_129.f_0))
	{
		if ((((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && SYSTEM::VDIST(Local_59, ENTITY::GET_ENTITY_COORDS(iParam0, false)) < 130.36f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_79, Local_80, fLocal_81, false, true, 0)) && func_679(&uLocal_217, 0, 1, 0))
		{
			if (iLocal_229 == 0)
			{
				iLocal_229 = 1;
			}
		}
		else if (iLocal_229 != 0 && iLocal_229 != 4)
		{
			iLocal_229 = 4;
		}
		fVar1 = 0.5f;
		switch (iLocal_229)
		{
			case 1:
				if (!CAM::DOES_CAM_EXIST(iLocal_168))
				{
					iLocal_168 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), CAM::GET_CAM_COORD(Local_129.f_0), 0f, 0f, 0f, 3.5f, false, 2);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_168))
				{
					if (MISC::IS_PC_VERSION() && GRAPHICS::GET_ASPECT_RATIO(true) > 1.8f)
					{
						fVar1 = 0.25f;
					}
					CAM::SET_CAM_NEAR_CLIP(iLocal_168, fVar1);
					CAM::SET_CAM_FOV(iLocal_168, 3.5f);
					CAM::SET_CAM_IS_INSIDE_VEHICLE(iLocal_168, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_168, iParam0, Param1, true);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_168, Local_129.f_0, 1500, 0, 1);
					fLocal_87 = 3.5f;
					iLocal_229 = 2;
				}
				break;
			case 2:
				if (!CAM::IS_CAM_INTERPOLATING(iLocal_168))
				{
					iLocal_229 = 3;
				}
				break;
			case 3:
				if (fLocal_87 > 3.5f)
				{
					fLocal_87 = (fLocal_87 + ((-fLocal_87 * 2f) * SYSTEM::TIMESTEP()));
				}
				CAM::SET_CAM_FOV(iLocal_168, fLocal_87);
				if (fLocal_87 < 5f)
				{
					if (__LIB_0__.func_394(iParam0, 0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_76, Local_77, fLocal_78, false, true, 0))
					{
						iVar0 = 1;
					}
				}
				break;
			case 4:
				if (CAM::DOES_CAM_EXIST(iLocal_168))
				{
					if (!CAM::IS_CAM_RENDERING(Local_129.f_0) && CAM::IS_CAM_ACTIVE(iLocal_168))
					{
						CAM::SET_CAM_FOV(Local_129.f_0, 50f);
						CAM::SET_CAM_ACTIVE(iLocal_168, false);
						CAM::SET_CAM_ACTIVE(Local_129.f_0, true);
					}
					if (CAM::IS_CAM_ACTIVE(Local_129.f_0) && CAM::IS_CAM_RENDERING(Local_129.f_0))
					{
						CAM::DESTROY_CAM(iLocal_168, false);
					}
					__LIB_9__.func_981(&uLocal_217, 0, 0);
				}
				else
				{
					iLocal_229 = 0;
				}
				break;
			}
	}
	return iVar0;
}

Vector3 func_713(struct<3> Param0)//Position - 0x8883B
{
	float fVar0;
	fVar0 = func_714(Param0);
	if (Param0.f_0 != 0f)
	{
		Param0.f_0 = (Param0.f_0 / fVar0);
	}
	else
	{
		Param0.f_0 = 0f;
	}
	if (Param0.f_1 != 0f)
	{
		Param0.f_1 = (Param0.f_1 / fVar0);
	}
	else
	{
		Param0.f_1 = 0f;
	}
	if (Param0.f_2 != 0f)
	{
		Param0.f_2 = (Param0.f_2 / fVar0);
	}
	else
	{
		Param0.f_2 = 0f;
	}
	return Param0;
}

float func_714(struct<3> Param0)//Position - 0x8889D
{
	float fVar0;
	fVar0 = SYSTEM::SQRT((((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2)));
	return fVar0;
}

void func_716(var uParam0, float fParam1)//Position - 0x888F7
{
	*uParam0 = { func_713(*uParam0) };
	*uParam0 = (*uParam0 * fParam1);
	uParam0->f_1 = (uParam0->f_1 * fParam1);
	uParam0->f_2 = (uParam0->f_2 * fParam1);
}

void func_717(int iParam0, bool bParam1)//Position - 0x8892A
{
	float fVar0;
	if (!CAM::DOES_CAM_EXIST(*iParam0))
	{
		*iParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		CAM::SET_CAM_ACTIVE(*iParam0, bParam1);
		CAM::SHAKE_CAM(*iParam0, "HAND_SHAKE", 0.15f);
	}
	CAM::STOP_CAM_POINTING(*iParam0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174, false) && !PED::IS_PED_INJURED(iLocal_173))
	{
		CAM::SET_CAM_ROT(*iParam0, Local_67, 2);
		CAM::SET_CAM_COORD(*iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(PED::GET_PED_BONE_COORDS(iLocal_173, 31086, 0.05f, 0f, 0f), 339.9642f, Local_66));
		if (*iParam0 == Local_129.f_0)
		{
			Local_129.f_1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(PED::GET_PED_BONE_COORDS(iLocal_173, 31086, 0.05f, 0f, 0f), 339.9642f, Local_66) };
		}
		fVar0 = 0.2f;
		if (MISC::IS_PC_VERSION() && GRAPHICS::GET_ASPECT_RATIO(true) > 1.8f)
		{
			fVar0 = 0.075f;
		}
		CAM::SET_CAM_NEAR_CLIP(*iParam0, fVar0);
		CAM::SET_CAM_FAR_CLIP(*iParam0, 600f);
		CAM::SET_CAM_USE_SHALLOW_DOF_MODE(*iParam0, true);
		CAM::SET_CAM_IS_INSIDE_VEHICLE(*iParam0, true);
	}
	CAM::SET_CAM_FOV(*iParam0, 50f);
	if (bParam1)
	{
		if (!CAM::IS_CAM_ACTIVE(*iParam0))
		{
			CAM::SET_CAM_ACTIVE(*iParam0, true);
		}
	}
}

void func_718(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x88A50
{
	iParam0->f_1 = { Param1 };
	iParam0->f_4 = { Param2 };
	iParam0->f_7 = fParam3;
	iParam0->f_20 = iParam4;
	iParam0->f_21 = iParam5;
	iParam0->f_22 = iParam6;
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_11 = { 0f, 0f, 0f };
	iParam0->f_14 = { 0f, 0f, 0f };
	iParam0->f_17 = fParam3;
	iParam0->f_18 = fParam3;
	iParam0->f_23 = iParam8;
	iParam0->f_19 = iParam7;
	*iParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*iParam0, true);
	CAM::SET_CAM_PARAMS(*iParam0, iParam0->f_1, iParam0->f_4, iParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*iParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*iParam0, fParam10);
	}
	if (iParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	iParam0->f_29 = 0f;
	iParam0->f_30 = 0f;
	iParam0->f_26 = 0;
	iParam0->f_28 = 0;
	iParam0->f_27 = 0;
}

void func_719()//Position - 0x88B4A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, -1);
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_176, 72.6414f, -702.4333f, 31.18f, false, false, true);
		ENTITY::SET_ENTITY_QUATERNION(iLocal_176, 0.0019f, 0.0174f, -0.174f, 0.9846f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 5f);
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
	__LIB_6__.func_849(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
}

void func_724()//Position - 0x88D0A
{
	struct<6> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false)) && iLocal_103 < 2)
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_176);
		}
	}
	if (!iLocal_268)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	}
	switch (iLocal_103)
	{
		case 0:
			if (iLocal_50)
			{
				if (!__LIB_0__.func_295())
				{
					__LIB_0__.func_344(Local_68, fLocal_69, 0, 12000, 1123680256, 0);
				}
				while (!func_526(Local_85, fLocal_86, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 5f);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_170))
				{
					while (!func_727(&iLocal_170, 12, Local_70, fLocal_71))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_170))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_170, iLocal_176, 0);
				}
				if (__LIB_0__.func_295())
				{
					__LIB_6__.func_775(0, -1, 1);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_68, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_69);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 900, 0f, true, false);
				func_10();
				func_521(iLocal_170);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
			{
				VEHICLE::SET_PLAYERS_LAST_VEHICLE(iLocal_176);
			}
			iLocal_167 = __LIB_6__.func_825(iLocal_176, 0, 0);
			iLocal_268 = 0;
			iLocal_94 = 0;
			iLocal_271 = 0;
			iLocal_108 = 0;
			if (!PED::IS_PED_INJURED(iLocal_170) && PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
			{
				func_587(0, "STAGE_GO_TO_FIB", iLocal_170, 1);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
			iLocal_103++;
			break;
		case 1:
			__LIB_30__.func_929(500);
			if (!PED::IS_PED_INJURED(iLocal_170) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_GET_TO_FIB"))
						{
							AUDIO::START_AUDIO_SCENE("AGENCY_H_1_GET_TO_FIB");
						}
						__LIB_6__.func_771();
						if (__LIB_9__.func_238(&Local_53, "FBS1AUD", "FBS1_INTRO", 8, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_103++;
						}
					}
				}
				else if (!iLocal_268)
				{
					__LIB_0__.func_210("CMN_GENGETINY" /* GXT: ~s~Get in your ~b~car. */, 7500, 1);
					iLocal_268 = 1;
				}
			}
			break;
		case 2:
			if (SYSTEM::TIMERA() > 7500)
			{
				__LIB_11__.func_860("FBS1_TOFIB", iLocal_176);
			}
			switch (iLocal_108)
			{
				case 0:
					if (iLocal_203 && !iLocal_204)
					{
						Var0 = { __LIB_0__.func_390() };
						if (__LIB_0__.func_75() && MISC::ARE_STRINGS_EQUAL(&Var0, "FBS1_TOFIB"))
						{
							iLocal_108++;
						}
					}
					break;
				case 1:
					STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
					func_690(&iLocal_160);
					STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_2");
					if (((STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")) && __LIB_11__.func_960(&iLocal_160)) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_2")) && !PED::IS_PED_INJURED(iLocal_170))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_182))
						{
							iLocal_182 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), PED::GET_PED_BONE_COORDS(iLocal_170, 60309, 0f, 0f, 0f), true, true, false);
							__LIB_11__.func_958(&iLocal_160, 0, 20);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_182, iLocal_170, PED::GET_PED_BONE_INDEX(iLocal_170, 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
							TASK::TASK_PLAY_ANIM(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a", 2f, -1000f, -1, 49, 0f, false, false, false);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_170, iLocal_182, -1, 0, 2);
							iLocal_108++;
						}
					}
					break;
				case 2:
					if (iLocal_203 && !iLocal_204)
					{
						if (!__LIB_0__.func_75())
						{
							iLocal_108++;
						}
					}
					break;
				case 3:
					if (!PED::IS_PED_INJURED(iLocal_170))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a", 3))
						{
							fVar1 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a");
							TASK::CLEAR_PED_TASKS(iLocal_170);
							TASK::TASK_PLAY_ANIM(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a", 1000f, -2f, -1, 48, fVar1, false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_170, false, false);
							TASK::TASK_CLEAR_LOOK_AT(iLocal_170);
							SYSTEM::SETTIMERA(0);
							iLocal_108++;
						}
					}
					break;
				case 4:
					if (((!PED::IS_PED_INJURED(iLocal_170) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a", 3)) && ENTITY::DOES_ENTITY_EXIST(iLocal_182)) && SYSTEM::TIMERA() > 1000)
					{
						SYSTEM::SETTIMERA(0);
						OBJECT::DELETE_OBJECT(&iLocal_182);
						__LIB_20__.func_654(&iLocal_160);
						__LIB_11__.func_810();
						iLocal_108++;
					}
					break;
			}
			func_514(&iLocal_176, &iLocal_167, Local_59 - Vector(0.5f, 0.5f, 0.5f), &iLocal_165);
			if (!__LIB_0__.func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176))
					{
						__LIB_0__.func_320(&Local_195);
					}
				}
			}
			if (((!PED::IS_PED_INJURED(iLocal_170) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176)) && PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 72.25f, -703.94f, 30.53f, 15f, 15f, Global_19.f_2, true, true, 0))
				{
					Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_59, fLocal_88, 0f, 1f, 0f) - Local_59 };
					Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_176, false), ENTITY::GET_ENTITY_HEADING(iLocal_176), 0f, 1f, 0f) - ENTITY::GET_ENTITY_COORDS(iLocal_176, false) };
					GRAPHICS::DRAW_DEBUG_LINE(Local_59, Local_59 + Var2, 0, 0, 255, 255);
					GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Var3, 0, 0, 255, 255);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 74.095825f, -698.9903f, 30.530674f, 70.89998f, -707.9105f, 32.529118f, 5.25f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_176) && __LIB_0__.func_398(1, 0, 1))
						{
							if (MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var2.f_0, Var2.f_1, Var3.f_0, Var3.f_1)) < 30f)
							{
								HUD::REMOVE_BLIP(&iLocal_165);
								__LIB_6__.func_833();
								iLocal_103++;
							}
							else if (!iLocal_269)
							{
								if (!__LIB_0__.func_75())
								{
									if (__LIB_9__.func_238(&Local_53, cLocal_110, "FBS1_TURNRND", 8, 0, 0, 0))
									{
										iLocal_270 = MISC::GET_GAME_TIMER();
										iLocal_269 = 1;
									}
								}
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_270) > 15000)
							{
								iLocal_269 = 0;
							}
						}
					}
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
			{
				if (__LIB_6__.func_762(iLocal_176, 5f, 5, 1056964608, 0, 1, 0))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						SYSTEM::SETTIMERA(0);
						iLocal_103++;
					}
				}
			}
			break;
		case 4:
			if (iLocal_271)
			{
				iLocal_103++;
			}
			break;
		case 5:
			if (SYSTEM::TIMERA() > 2000)
			{
				func_576(2);
			}
			break;
	}
	if (!iLocal_271)
	{
		if (iLocal_103 > 2)
		{
			if (__LIB_9__.func_238(&Local_53, cLocal_110, "FBS1_ATFIB", 8, 0, 0, 0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
				iLocal_271 = 1;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		func_526(Local_85, fLocal_86, 0, 0);
	}
	func_725();
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_59, true) < 300f)
	{
		if (!iLocal_94)
		{
			MISC::CLEAR_AREA(Local_59, 100f, true, false, false, false);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Local_76, Local_77, fLocal_78, false, false, false, false, false, 0, 0);
			iLocal_94 = 1;
		}
	}
	else if (iLocal_94)
	{
		iLocal_94 = 0;
	}
	if (!iLocal_96)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_59, true) < 100f)
		{
			__LIB_0__.func_358(2);
			iLocal_96 = 1;
		}
	}
}

void func_725()//Position - 0x894E8
{
	int iVar0;
	struct<3> Var1[5];
	float fVar2[5];
	int iVar3;
	if ((((!ENTITY::DOES_ENTITY_EXIST(iLocal_179[0]) || !ENTITY::DOES_ENTITY_EXIST(iLocal_179[1])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_179[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_179[3])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_179[4]))
	{
		Var1[0 /*3*/] = { 159.2625f, -683.4668f, 32.1298f };
		Var1[1 /*3*/] = { 174.8298f, -706.0013f, 32.1304f };
		Var1[2 /*3*/] = { 115.1112f, -734.7641f, 32.1331f };
		Var1[3 /*3*/] = { 130.1378f, -702.7861f, 32.1246f };
		Var1[4 /*3*/] = { 118.7168f, -698.4962f, 32.1258f };
		fVar2[0] = 336.4295f;
		fVar2[1] = 247.5462f;
		fVar2[2] = 339.0851f;
		fVar2[3] = 160.7991f;
		fVar2[4] = 342.2677f;
		iVar0 = 0;
		while (iVar0 < iLocal_179)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_179[iVar0]))
			{
				if (iVar0 < 4)
				{
					iVar3 = iLocal_112[iVar0];
				}
				else
				{
					iVar3 = iLocal_114;
				}
				STREAMING::REQUEST_MODEL(iVar3);
				if (STREAMING::HAS_MODEL_LOADED(iVar3))
				{
					iLocal_179[iVar0] = VEHICLE::CREATE_VEHICLE(iVar3, Var1[iVar0 /*3*/], fVar2[iVar0], true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_179[iVar0], 5f);
					VEHICLE::SET_VEHICLE_ALARM(iLocal_179[iVar0], true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_179[iVar0], 7);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_179[iVar0], false, 0);
					if (iVar0 == 0)
					{
						VEHICLE::GET_VEHICLE_COLOURS(iLocal_179[iVar0], &(iLocal_106[0]), &(iLocal_106[1]));
					}
					else if (iVar0 == 1)
					{
						VEHICLE::GET_VEHICLE_COLOURS(iLocal_179[iVar0], &(iLocal_106[2]), &(iLocal_106[3]));
					}
					else if (iVar0 == 2)
					{
						VEHICLE::GET_VEHICLE_COLOURS(iLocal_179[iVar0], &(iLocal_106[4]), &(iLocal_106[5]));
					}
					else if (iVar0 == 3)
					{
						VEHICLE::GET_VEHICLE_COLOURS(iLocal_179[iVar0], &(iLocal_106[6]), &(iLocal_106[7]));
					}
					if (iVar0 == 4)
					{
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_179[iVar0], 35, 35);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_179[iVar0], 33, 33);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_179[iVar0], sLocal_109);
						__LIB_0__.func_501(iLocal_179[iVar0], iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_179)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_179[iVar0], false))
			{
				if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_179[iVar0]))
				{
					fLocal_264 = (fLocal_264 + MISC::GET_FRAME_TIME());
				}
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_179[iVar0], false) + Vector(1.5f, 0f, 0f), 0f, 255, 0, 255, 255);
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_179[iVar0], false) || fLocal_264 > 3f)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_179[iVar0], PLAYER::PLAYER_PED_ID(), true))
					{
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_179[iVar0]))
					{
					}
					if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_179[iVar0]))
					{
					}
					func_13("S1_SECFAIL");
				}
			}
			else
			{
				func_13("S1_SECFAIL");
			}
		}
		iVar0++;
	}
}

int func_727(int* iParam0, bool bParam1, struct<3> Param2, float fParam3)//Position - 0x89830
{
	STREAMING::REQUEST_MODEL(__LIB_0__.func_397(bParam1));
	if (STREAMING::HAS_MODEL_LOADED(__LIB_0__.func_397(bParam1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			__LIB_6__.func_791(iParam0, bParam1, Param2, fParam3, 1);
		}
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_COORDS(*iParam0, Param2, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
			if (bParam1 == 12)
			{
				PED::SET_PED_PROP_INDEX(*iParam0, 1, 0, 0, false);
			}
			func_521(*iParam0);
			return 1;
		}
	}
	return 0;
}

void func_731(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x89EFE
{
	struct<60> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_736(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		__LIB_6__.func_760(iParam0, &Var0);
		if (__LIB_0__.func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		__LIB_6__.func_821(iParam3, &Var0, Param1, fParam2, __LIB_0__.func_119(iParam0));
		__LIB_0__.func_370(iParam3, iParam0, 0);
	}
}

void func_735(int iParam0)//Position - 0x8A253
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_538(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			__LIB_6__.func_770(iParam0, 0);
		}
	}
}

void func_736(int iParam0)//Position - 0x8A2CA
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_735(iParam0);
	__LIB_6__.func_770(iParam0, 0);
}

void func_740()//Position - 0x8A33C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(true);
	}
	iLocal_185 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(29.3953f, -963.6519f, 714.334f) - Vector(0f, 20f, 20f), Vector(29.3953f, -963.6519f, 714.334f) + Vector(10f, 20f, 20f), false, true, true, true);
	HUD::REQUEST_ADDITIONAL_TEXT("FBS1AUD", 6);
	HUD::REQUEST_ADDITIONAL_TEXT("H1SET1", 0);
	__LIB_0__.func_203(&Local_53, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
	STREAMING::REQUEST_MODEL(joaat("tailgater"));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_Heist_1_Tail_Janitor_01", false, -1);
	if (__LIB_0__.func_294())
	{
		HUD::DISPLAY_RADAR(true);
		__LIB_30__.func_933(500);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		func_583();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(2f, 0f, 0f), true, false, false, true);
		}
		iVar0 = __LIB_0__.func_315();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		if (iVar0 > 4)
		{
			Local_265 = { 714.4953f, -964.8629f, 29.3953f };
			fLocal_266 = 188.1813f;
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
			while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
			{
				SYSTEM::WAIT(0);
			}
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			func_576(6);
			iLocal_103 = 10;
			CUTSCENE::REQUEST_CUTSCENE("ah_1_ext_t6", 8);
		}
		else
		{
			iLocal_50 = 1;
			if (iVar0 == 0)
			{
				Local_265 = { Local_68 };
				fLocal_266 = fLocal_69;
				func_527(&iLocal_176, Local_85, fLocal_86, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
				func_576(1);
			}
			if (iVar0 == 1)
			{
				Local_265 = { Local_59 };
				fLocal_266 = fLocal_88;
				func_527(&iLocal_176, Local_59, fLocal_88, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
				func_576(2);
			}
			if (iVar0 == 2)
			{
				Local_265 = { Local_59 };
				fLocal_266 = fLocal_88;
				func_527(&iLocal_176, Local_59, fLocal_88, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
				func_576(3);
			}
			if (iVar0 == 3)
			{
				Local_265 = { -53.0454f, 18.6296f, 71.1259f };
				fLocal_266 = 167.0193f;
				func_576(4);
			}
			if (iVar0 == 4)
			{
				if (Global_94618)
				{
					Local_265 = { -105.0312f, -8.6584f, 69.5201f };
					fLocal_266 = 259.2958f;
					func_576(5);
				}
				else
				{
					Local_265 = { -105.0312f, -8.6584f, 69.5201f };
					fLocal_266 = 259.2958f;
					func_576(6);
				}
			}
		}
		__LIB_0__.func_370(Local_265, fLocal_266, 1, 0);
		MISC::CLEAR_AREA(Local_265, 1000f, true, false, false, false);
		GRAPHICS::WASH_DECALS_IN_RANGE(Local_265, 1000f, 1f);
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (__LIB_0__.func_2(0))
	{
		__LIB_18__.func_191(70, 1, 0, 1, 0);
		__LIB_18__.func_191(71, 1, 0, 1, 0);
		__LIB_18__.func_191(73, 1, 0, 1, 0);
		__LIB_18__.func_191(72, 0, 0, 1, 0);
		__LIB_18__.func_191(74, 0, 0, 1, 0);
		__LIB_0__.func_317(62, 0);
		__LIB_0__.func_317(63, 0);
	}
	iLocal_112[0] = joaat("ingot");
	iLocal_112[1] = joaat("intruder");
	iLocal_112[2] = joaat("picador");
	iLocal_112[3] = joaat("asterope");
	Local_116[0 /*3*/] = { 0f, -2.3123f, 0.0297f };
	Local_116[1 /*3*/] = { 0f, -2.4781f, -0.1779f };
	Local_116[2 /*3*/] = { 0f, -2.7685f, -0.3293f };
	Local_116[3 /*3*/] = { 0f, -2.3374f, 0.2962f };
	func_744();
	iVar1 = 0;
	while (iVar1 < iLocal_106)
	{
		iLocal_106[iVar1] = -1;
		iVar1++;
	}
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Aprtmnt_1");
	PED::ADD_RELATIONSHIP_GROUP("NEUTRAL PEDS", &iLocal_159);
	PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_191);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_191, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("COP"), iLocal_191);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_191, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_191);
	__LIB_0__.func_367(1);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	else
	{
		iVar2 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		if (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("taxi")))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 50f && !__LIB_28__.func_359(ENTITY::GET_ENTITY_MODEL(iVar2)))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
				iLocal_176 = iVar2;
				iVar2 = 0;
				ENTITY::SET_ENTITY_COORDS(iLocal_176, Local_85, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_176, fLocal_86);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 5f);
			}
		}
	}
	MISC::CLEAR_AREA(Local_210, 100f, true, false, false, false);
	MISC::CLEAR_AREA(Local_207, 100f, true, false, false, false);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
	func_741(iLocal_206, Local_207, Local_208);
	func_741(iLocal_209, Local_210, Local_211);
	iLocal_212 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(32.25392f, -702.4027f, 58.578835f) - Vector(3f, 9.75f, 5.5f), Vector(32.25392f, -702.4027f, 58.578835f) + Vector(3f, 9.75f, 5.5f), false, true, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(65.321f, -23.8057f, -83.2189f) + Vector(3f, 5f, 5f), Vector(65.321f, -23.8057f, -83.2189f) - Vector(3f, 5f, 5f), false, true);
	iLocal_186 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(66.61638f, -11.761818f, -85.14192f) - Vector(0f, 6.5f, 16.25f), Vector(66.61638f, -11.761818f, -85.14192f) + Vector(2f, 6.5f, 16.25f), false, true, true, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_114, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("intruder"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Janitor"), true);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_85, 40f);
	if ((((!__LIB_0__.func_294() && iLocal_48 != 11) && iLocal_48 != 7) && iLocal_48 != 8) && iLocal_48 != 10)
	{
		__LIB_0__.func_358(1);
		func_576(0);
	}
}

void func_741(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x8A95D
{
	PATHFIND::SET_PED_PATHS_IN_AREA(Param1, Param2, false, 0);
	PATHFIND::SET_ROADS_IN_AREA(Param1, Param2, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Param1, Param2, false, true);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, false);
	iParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(Param1, Param2, false, true, true, true);
}

void func_744()//Position - 0x8ADFE
{
	Local_214[0 /*3*/] = { 103.17112f, -599.2219f, 30.64482f };
	Local_214[1 /*3*/] = { 69.96421f, -552.6214f, 31.93536f };
	Local_214[2 /*3*/] = { -15.68856f, -544.8845f, 38.05373f };
	Local_214[3 /*3*/] = { -39.99245f, -493.27765f, 39.466f };
	Local_214[4 /*3*/] = { 114.25062f, -65.17094f, 65.38992f };
	Local_214[5 /*3*/] = { 82.67328f, -8.04467f, 67.46969f };
	Local_214[6 /*3*/] = { -10.82436f, 26.30634f, 70.45963f };
	Local_214[7 /*3*/] = { -78.512f, -89.0248f, 56.8283f };
	iLocal_215 = -1;
}

void func_752()//Position - 0x8F328
{
	__LIB_0__.func_296();
	__LIB_6__.func_771();
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_181))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_181);
	}
	TASK::REMOVE_WAYPOINT_RECORDING("janitor_route");
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	}
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Aprtmnt_1");
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	__LIB_0__.func_367(0);
	func_755(iLocal_206, Local_207, Local_208);
	func_755(iLocal_209, Local_210, Local_211);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_212, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(65.321f, -23.8057f, -83.2189f) + Vector(3f, 5f, 5f), Vector(65.321f, -23.8057f, -83.2189f) - Vector(3f, 5f, 5f), true, true);
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(true);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_176, true);
	}
	ENTITY::REMOVE_MODEL_HIDE(-107.5401f, -9.0258f, 70.6696f, 1f, joaat("v_ilev_janitor_frontdoor"), false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-252283844, 0f, false, true);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_114, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("intruder"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Janitor"), false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_182))
	{
		OBJECT::DELETE_OBJECT(&iLocal_182);
	}
	__LIB_20__.func_654(&iLocal_160);
	__LIB_11__.func_810();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
	{
		PED::DELETE_PED(&iLocal_172);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
	{
		PED::DELETE_PED(&iLocal_173);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_174);
	}
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	func_753("S1_LPTEXT");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_185, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_186, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_212, false);
	__LIB_0__.func_320(0, -1);
	__LIB_0__.func_316(0, -1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, true, false);
	__LIB_0__.func_317(63, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, true, false);
	__LIB_0__.func_317(62, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_753(char* sParam0)//Position - 0x8F4F4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_113386.f_14141[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar0 /*104*/]), sParam0))
			{
				if (Global_113386.f_14141[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					__LIB_26__.func_585();
					Global_113386.f_14141[iVar0 /*104*/].f_99[Global_20266] = 0;
					if (__LIB_2__.func_292(iVar0))
					{
					}
					else
					{
						Global_113386.f_14141[iVar0 /*104*/].f_24 = 0;
						Global_113386.f_14141[iVar0 /*104*/].f_28 = 0;
						Global_113386.f_14141[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_113386.f_14141[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

void func_755(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x8F5FD
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, false);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Param1, Param2, 1);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Param1, Param2, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Param1, Param2, true, true);
}

void func_756()//Position - 0x8F634
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		if (!__LIB_0__.func_134())
		{
			iVar0 = __LIB_0__.func_323();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__.func_584();
		}
	}
}

