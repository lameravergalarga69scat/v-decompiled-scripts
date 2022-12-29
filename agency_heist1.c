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
				func_729();
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
		if ((func_37(iLocal_170) && !iLocal_50) && !CUTSCENE::IS_CUTSCENE_PLAYING())
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
			__LIB_0__::func_377(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 530);
			__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 531);
		}
		else
		{
			__LIB_0__::func_377(0, 530);
			__LIB_0__::func_505(0, 531);
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
		__LIB_0__::func_496();
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
				if (!__LIB_2__::func_925(iLocal_176, 0, 0, 0, 0, 0, 1, 0, 1) || PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
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
		else if (!__LIB_2__::func_925(iLocal_176, 0, 0, 0, 0, 0, 1, 0, 1) || PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
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
			__LIB_0__::func_222(&Local_53, 1, iLocal_171, "AGENCYJANITOR", 0, 1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_53[1 /*10*/]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		__LIB_0__::func_221(&Local_53, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_53[2 /*10*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		if (!PED::IS_PED_INJURED(iLocal_170))
		{
			__LIB_0__::func_222(&Local_53, 2, iLocal_170, "LESTER", 0, 1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_53[2 /*10*/]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		__LIB_0__::func_221(&Local_53, 2);
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
	__LIB_0__::func_345(&uLocal_117, 0, 0);
	func_17(sParam0);
	while (!__LIB_0__::func_223())
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
	__LIB_16__::func_917(3, 0, 0);
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
	__LIB_0__::func_381(sParam0);
	func_18(0);
}

void func_18(int iParam0)//Position - 0xFC8
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
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
	__LIB_16__::func_40();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_20(&(Global_113386.f_2363.f_539), iVar1);
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
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_22(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_37(int iParam0)//Position - 0x20A8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iParam0, false), true) > 150f)
			{
				return 1;
			}
		}
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
				__LIB_0__::func_429();
				HUD::CLEAR_PRINTS();
				TASK::CLEAR_PED_TASKS(iLocal_171);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				if ((func_15(iLocal_171) && !func_15(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), Local_58) > 1f)
				{
					TASK::TASK_COWER(iLocal_171, -1);
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_171, -99.23925f, -10.321966f, 65.75197f, -107.06205f, -7.839327f, 72.58364f, 2.75f, false, true, 0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), Local_58) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_58))
				{
					__LIB_17__::func_656(61, 0);
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
				if (!__LIB_0__::func_75() && SYSTEM::TIMERA() > 1500)
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
		if ((__LIB_0__::func_75() && iLocal_203) && !iLocal_204)
		{
			iLocal_204 = 1;
			Local_205 = { __LIB_0__::func_485() };
		}
		__LIB_0__::func_429();
	}
	if (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
	{
		__LIB_0__::func_400(&Local_198);
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_85) > 75f)
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) != 1 && OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(763780711) != 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, true, false);
			__LIB_17__::func_656(63, 1);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) != 1 && OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(-826072862) != 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, true, false);
			__LIB_17__::func_656(62, 1);
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
						if (__LIB_17__::func_243(&Local_53, cLocal_110, "FBS1_WANT", 8, 0, 0, 0))
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
				iLocal_167 = __LIB_0__::func_639(iLocal_176, 0, 0);
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(763780711) == 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, true, false);
			__LIB_17__::func_656(63, 0);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(-826072862) == 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, true, false);
			__LIB_17__::func_656(62, 0);
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
		__LIB_17__::func_656(63, 0);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(-826072862) == 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, true, false);
		__LIB_17__::func_656(62, 0);
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
				if (__LIB_0__::func_324() && __LIB_0__::func_323())
				{
					__LIB_37__::func_872(&iLocal_176, Local_60, fLocal_89, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
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
				if (!__LIB_0__::func_324())
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
				func_520();
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_176, Local_60, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_176, -11.3149f, 1.4111f, 167.8415f, 2, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_176, -0.0226f, -0.0967f, 0.9893f, 0.1066f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 5f);
				while (!func_518(Local_63, fLocal_90))
				{
					SYSTEM::WAIT(0);
				}
				if (__LIB_0__::func_324())
				{
					__LIB_0__::func_433(0, -1, 1);
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
			__LIB_39__::func_119(500);
			SYSTEM::SETTIMERA(0);
			break;
		case -1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
			{
				PED::DELETE_PED(&iLocal_171);
			}
			func_10();
			iLocal_103++;
			__LIB_39__::func_119(500);
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
					iLocal_167 = __LIB_0__::func_639(iLocal_176, 0, 0);
					__LIB_0__::func_229("S1_BKINCAR", 7500, 1);
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
							if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_PKGE", 9, 0, 0, 0))
							{
								SYSTEM::SETTIMERA(0);
								iLocal_103++;
							}
						}
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_167))
				{
					iLocal_167 = __LIB_0__::func_639(iLocal_176, 0, 0);
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
						if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_GOHOME", 9, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_103++;
						}
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_167))
				{
					iLocal_167 = __LIB_0__::func_639(iLocal_176, 0, 0);
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
				if ((SYSTEM::TIMERA() > 3000 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false)) && (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (!Local_196.f_1)
					{
						__LIB_0__::func_400(&Local_196);
					}
				}
				if (SYSTEM::TIMERA() > 11000)
				{
					func_512(Local_202.f_0, iLocal_176);
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_65) < 40000f)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_177))
					{
						if (__LIB_17__::func_478(&iLocal_177, 1, 711.2252f, -979.7821f, 23.1003f, 43.2293f, 1, 1))
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
				if (__LIB_0__::func_213(iLocal_176, 8f, 5, 1056964608, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					SYSTEM::SETTIMERA(0);
					HUD::REMOVE_BLIP(&iLocal_165);
					__LIB_0__::func_638();
					iLocal_103++;
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_17__::func_243(&Local_53, cLocal_110, "FBS1_HOME2", 8, 0, 0, 0))
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
					iLocal_165 = __LIB_0__::func_488(706.5483f, -965.2577f, 29.4179f, 0);
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
				__LIB_16__::func_917(3, 0, 1);
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
				iLocal_165 = __LIB_0__::func_488(706.5483f, -965.2577f, 29.4179f, 0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 710.97174f, -964.13495f, 30.64533f, 1f, 5.5f, 1.25f, false, true, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					while (!__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0))
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
				__LIB_0__::func_429();
				iLocal_103++;
			}
			break;
		case 10:
			if (__LIB_0__::func_324())
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			if (__LIB_0__::func_90() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
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
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
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
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
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
	if (((HUD::DOES_BLIP_EXIST(iLocal_165) && !iLocal_288) && iLocal_103 > 7) && !__LIB_0__::func_75())
	{
		__LIB_0__::func_382("S1_UPSTAIRS", 7500, 1);
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
					__LIB_17__::func_43("Franklin", joaat("Player_One"), 39);
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

int func_175()//Position - 0x220FE
{
	if (func_211(&iLocal_172, 1, 705.4539f, -965.5662f, 29.3953f, 273.3178f, 1, 0, 0))
	{
		func_176(iLocal_172, 12, 39, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_172, "PROP_HUMAN_SEAT_CHAIR", 704.85626f, -965.3852f, 29.8245f, 269.2285f, 0, false, true);
		return 1;
	}
	return 0;
}

int func_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x22165
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
										func_176(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_176(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_186(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_185(iParam0, iVar10, &iVar4, 1))
							{
								func_176(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_176(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_176(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_176(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_176(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_176(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_176(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_176(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_176(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_176(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_185(iParam0, iVar10, &iVar4, 0))
		{
			func_176(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_177(iParam0, iVar10, &iVar4))
		{
			func_176(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_177(int iParam0, int iParam1, int iParam2)//Position - 0x22975
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
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
				if (!func_178(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_178(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_178(iParam0, 14, iVar4))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x234C1
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_178(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
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

int func_211(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x26222
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_0__::func_518(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_0__::func_550(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_419(*iParam0);
			__LIB_13__::func_777(*iParam0, 1, 0);
			__LIB_13__::func_763(*iParam0);
			__LIB_13__::func_762(*iParam0);
			func_213(*iParam0, bParam6);
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

int func_213(int iParam0, bool bParam1)//Position - 0x2633A
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_473(bVar0))
	{
		__LIB_0__::func_472(bVar0, 0);
		func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_217(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(bVar0, 0);
			func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_217(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_178(iParam0, 3, 169))
					{
						func_176(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_178(iParam0, 12, 6))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 11))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 10))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 50))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 14, 59))
			{
				func_176(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_178(iParam0, 8, 22))
			{
				func_176(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_178(iParam0, 12, 14))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_178(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 4))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 3))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 14, 82))
			{
				func_176(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_178(iParam0, 8, 76))
			{
				func_176(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_178(iParam0, 12, 1))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_178(iParam0, 12, 12))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 15))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_178(iParam0, 3, 71))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_178(iParam0, 12, 7))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 12, 6))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_178(iParam0, 14, 88))
			{
				func_176(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_178(iParam0, 8, 17))
			{
				func_176(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_178(iParam0, 12, 11))
			{
				func_176(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_217(int iParam0, int iParam1)//Position - 0x26ACB
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_0__::func_650(iParam0);
		if (__LIB_0__::func_374(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_186(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_414(bVar0);
					func_228(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_17__::func_236(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_653();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[bVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (bVar0 == 0)
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

void func_228(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x27AA9
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
		bVar0 = __LIB_0__::func_650(iParam0);
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
		if (__LIB_0__::func_374(bVar0))
		{
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_185(iParam0, iVar1, &iVar2, 0))
			{
				func_176(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_177(iParam0, iVar1, &iVar2))
			{
				func_176(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_393(iParam0);
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
			func_231(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_231(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_231(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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
						func_354(iVar5, 10, 0, 1);
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
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
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
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_353(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
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
			iVar17 = __LIB_0__::func_662();
			if (iVar17 != -1)
			{
				__LIB_0__::func_661(iVar17, 0, iParam10);
			}
			func_347(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_354(iVar5, 14, uVar18[iVar1], 1);
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
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
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
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
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
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_231(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_231(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_338(iVar5, iVar24, iVar23, iVar25);
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
							func_231(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_231(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_231(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_231(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_231(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_231(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_231(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_347(iParam0, iParam1, iParam2, iParam6, 0);
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
				func_274(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_338(iVar5, iParam2, iVar44, iVar45);
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
			func_347(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_338(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_231(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_231(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_338(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_338(iVar5, iVar58, iVar57, iParam2);
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
								iVar6 = func_338(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_231(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_231(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
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
										func_231(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_231(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_231(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
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
										func_231(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_231(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_231(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
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
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_231(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
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
		if (func_232(iParam0, &uVar4))
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
		iVar84 = __LIB_0__::func_282(iVar5, func_353(iParam0, 3, -1), iVar10);
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
				func_231(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_232(int iParam0, var uParam1)//Position - 0x29E30
{
	int iVar0;
	int iVar1;
	*uParam1 = func_353(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_251(iParam0, iVar1, iVar0))
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
				if (!func_251(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_251(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_251(iParam0, 14, iVar6))
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
						return func_251(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_251(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_274(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x34E03
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
		iVar2 = __LIB_0__::func_276(iParam0);
		bVar3 = func_318(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_353(iParam0, 11, -1);
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
				iVar5 = func_353(iParam0, 11, -1);
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_353(iParam0, 11, -1), 0);
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
						iVar3 = func_353(iParam0, 11, -1);
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
						iVar5 = func_353(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_353(iParam0, 11, -1), 0);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_353(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_353(iParam0, 11, -1), 0);
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
					iVar0 = func_338(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_338(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_353(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_347(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5187E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_393(iParam0))
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
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
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
							func_354(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_354(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_354(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_354(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_354(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_354(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_354(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_353(iParam0, 11, -1);
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
				iVar3 = func_353(iParam0, 11, -1);
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

void func_419(int iParam0)//Position - 0x6CED3
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_374(bVar0))
	{
		if (!Global_100362[bVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[bVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[bVar0])
				{
					__LIB_0__::func_414(bVar0);
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_228(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_186(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_420(__LIB_0__::func_518(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
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
					func_420(__LIB_0__::func_518(0), 3, 70, 1, 0, 0, 0);
					func_420(__LIB_0__::func_518(0), 3, 71, 1, 0, 0, 0);
					func_420(__LIB_0__::func_518(0), 3, 72, 1, 0, 0, 0);
					func_420(__LIB_0__::func_518(0), 3, 73, 1, 0, 0, 0);
					func_420(__LIB_0__::func_518(0), 3, 74, 1, 0, 0, 0);
					func_420(__LIB_0__::func_518(0), 3, 75, 1, 0, 0, 0);
					func_420(__LIB_0__::func_518(0), 4, 41, 1, 0, 0, 0);
					func_420(__LIB_0__::func_518(0), 4, 42, 1, 0, 0, 0);
					func_420(__LIB_0__::func_518(0), 4, 43, 1, 0, 0, 0);
					func_420(__LIB_0__::func_518(0), 4, 44, 1, 0, 0, 0);
					func_420(__LIB_0__::func_518(0), 4, 45, 1, 0, 0, 0);
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
				__LIB_0__::func_414(bVar0);
				func_228(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_420(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6D130
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_423(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_423(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6D2EB
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
								func_423(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_423(iParam0, 14, uVar4[iVar2], 1, 1);
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

void func_428()//Position - 0x6D8E9
{
	__LIB_16__::func_917(3, 0, 1);
	__LIB_0__::func_526(0, 0);
	func_752();
}

void func_512(char* sParam0, int iParam1)//Position - 0x77338
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false))
		{
			if (!iLocal_203)
			{
				if (__LIB_17__::func_243(&Local_53, "FBS1AUD", sParam0, 8, 0, 0, 0))
				{
					iLocal_204 = 0;
					iLocal_203 = 1;
				}
			}
			if (iLocal_204)
			{
				if (__LIB_17__::func_244(&Local_53, "FBS1AUD", sParam0, &Local_205, 8, 0, 0))
				{
					iLocal_204 = 0;
				}
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false))
		{
			if (!iLocal_204)
			{
				Local_205 = { __LIB_0__::func_485() };
				__LIB_0__::func_638();
				iLocal_204 = 1;
			}
		}
	}
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
				__LIB_0__::func_400(&Local_192);
				*iParam1 = __LIB_0__::func_639(*iParam0, 0, 0);
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
				*iParam3 = __LIB_0__::func_488(Param2, 1);
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
			__LIB_0__::func_679(iLocal_175, iLocal_179);
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
			__LIB_0__::func_222(&Local_53, 1, iLocal_171, "AGENCYJANITOR", 0, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_171, "AGENCYJANITOR");
		}
	}
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_171) && ENTITY::DOES_ENTITY_EXIST(iLocal_175));
}

void func_520()//Position - 0x7772B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
	{
		PED::DELETE_PED(&iLocal_170);
		func_10();
		while (!__LIB_15__::func_938(&iLocal_170, 12, iLocal_176, 0, 1))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_PROP_INDEX(iLocal_170, 1, 0, 0, false);
		func_521(iLocal_170);
		func_10();
	}
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
			__LIB_0__::func_222(&Local_53, 5, iLocal_169, "AH_NEIGHBOUR", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Hippie_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dilettante"));
		}
	}
}

bool func_526(struct<3> Param0, float fParam1, bool bParam2, bool bParam3)//Position - 0x77A95
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		__LIB_17__::func_478(&iLocal_176, 0, Param0, fParam1, 1, 0);
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
				if (!__LIB_0__::func_324())
				{
					__LIB_0__::func_399(Local_58 + Vector(0f, 1f, 0.5f), -1082130432, 1, 12000, 1123680256, 0);
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
					func_520();
					if (!PED::IS_PED_INJURED(iLocal_171))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_171, Local_58, true, false, false, true);
					}
				}
				__LIB_0__::func_433(0, -1, 1);
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
			if (__LIB_0__::func_90())
			{
				if (__LIB_13__::func_801(sLocal_187))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					if (!PED::IS_PED_INJURED(iLocal_171))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_171, "Janitor", 0, 0, 0);
					}
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					func_638(6);
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
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
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
	__LIB_17__::func_656(61, 1);
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
	func_585();
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
	if (iParam0 != 2 && !__LIB_0__::func_324())
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
		__LIB_39__::func_123(500);
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
		__LIB_0__::func_429();
		__LIB_0__::func_325();
		while (!func_638(iParam0))
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
	Local_192 = { __LIB_0__::func_398("S1_BKINCAR") };
	Local_193 = { __LIB_0__::func_398("S1_WAIT") };
	Local_194 = { __LIB_0__::func_398("S1_FOLLOW") };
	Local_195 = { __LIB_0__::func_398("S1_GETTOBANK") };
	Local_196 = { __LIB_0__::func_398("S1_GOTOSH") };
	Local_197 = { __LIB_0__::func_398("S1_BKTOAPT") };
	Local_198 = { __LIB_0__::func_398("S1_LOSECOPS") };
	Local_199 = { __LIB_0__::func_398("S1_ABAND") };
	Local_200 = { __LIB_0__::func_398("FBS1_TAIL1") };
	Local_201 = { __LIB_0__::func_398("FBS1_TAIL2") };
	Local_202 = { __LIB_0__::func_398("FBS1_HOME1") };
}

void func_585()//Position - 0x7B557
{
	bLocal_91 = false;
	iLocal_92 = 0;
	bLocal_93 = false;
	iLocal_96 = 0;
	iLocal_203 = 0;
	iLocal_204 = 0;
	iLocal_107 = 0;
	StringCopy(&Local_205, "", 24);
	iLocal_102 = 0;
	iLocal_103 = 0;
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
	*uParam0 = __LIB_15__::func_944();
	uParam0->f_1 = __LIB_0__::func_464();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_186(&(uParam0->f_2884), 0);
		__LIB_13__::func_760(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_237(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_15__::func_944())
		{
			__LIB_17__::func_236(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		__LIB_32__::func_103(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_638(int iParam0)//Position - 0x81AA5
{
	int iVar0[11];
	int iVar1[11];
	int iVar2;
	int iVar3;
	iVar0[0] = joaat("S_M_M_Janitor");
	iVar0[1] = __LIB_0__::func_493(12);
	iVar0[2] = __LIB_0__::func_493(23);
	iVar0[3] = __LIB_0__::func_493(30);
	iVar0[4] = joaat("tailgater");
	iVar0[5] = iLocal_114;
	iVar0[6] = iLocal_112[0];
	iVar0[7] = iLocal_112[1];
	iVar0[8] = iLocal_112[2];
	iVar0[9] = iLocal_113;
	iVar0[10] = joaat("A_F_Y_Hipster_03");
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar1[iVar2] = 0;
		iVar2++;
	}
	switch (iParam0)
	{
		case 1:
			iVar1[0] = __LIB_0__::func_493(12);
			iVar1[1] = __LIB_0__::func_493(23);
			iVar1[2] = __LIB_0__::func_493(30);
			iVar1[3] = __LIB_32__::func_2(30, 0);
			iVar1[4] = joaat("tailgater");
			break;
		case 3:
			iVar1[0] = __LIB_0__::func_493(12);
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("S_M_M_Janitor");
			iVar1[3] = iLocal_114;
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FBIs1UBER");
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_111);
			break;
		case 4:
			iVar1[0] = __LIB_0__::func_493(12);
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("S_M_M_Janitor");
			iVar1[3] = iLocal_114;
			break;
		case 5:
			iVar1[0] = __LIB_0__::func_493(12);
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("S_M_M_Janitor");
			iVar1[3] = iLocal_114;
			break;
		case 6:
			iVar1[0] = iLocal_114;
			iVar1[1] = __LIB_0__::func_493(12);
			iVar1[2] = joaat("tailgater");
			break;
	}
	iVar3 = 1;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iVar1[iVar2] != 0)
		{
			STREAMING::REQUEST_MODEL(iVar1[iVar2]);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1[iVar2]))
			{
				iVar3 = 0;
			}
		}
		iVar2++;
	}
	if (iParam0 == 3)
	{
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_111))
		{
			iVar3 = 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (!__LIB_39__::func_121(iVar0[iVar2], &iVar1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
		}
		iVar2++;
	}
	return iVar3;
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
					iLocal_164 = __LIB_0__::func_666(iLocal_171, 0, 145);
					bLocal_286 = false;
				}
				else
				{
					iLocal_164 = __LIB_0__::func_666(iLocal_171, 0, 145);
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
							if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_DAMN", 7, 0, 0, 0))
							{
								iLocal_107++;
							}
						}
						else if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_DAMN", 7, 1, 1, 0))
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
						__LIB_17__::func_656(61, 0);
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
			__LIB_0__::func_382("S1_FOLLOW2", 7500, 1);
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
					if (!__LIB_0__::func_324())
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
					if (__LIB_0__::func_323() && __LIB_0__::func_324())
					{
						__LIB_37__::func_872(&iLocal_176, Local_85, fLocal_86, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
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
					func_520();
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(iLocal_176, -1, 1);
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
							if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_ARRIVE", 8, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
								iLocal_284 = 1;
							}
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176))
					{
						if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_60, Global_19, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_60 - Vector(0.05f, 0f, 0f), 1f, 1f, 2.5f, true, true, 0)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_176)) && __LIB_0__::func_494(1, 0, 1))
						{
							HUD::CLEAR_PRINTS();
							if (__LIB_0__::func_213(iLocal_176, 1093140480, 1, 1056964608, 0, 1, 0))
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
						if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_OUT", 9, 0, 0, 0))
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
				func_638(5);
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
				__LIB_0__::func_400(&Local_197);
			}
		}
		if (iLocal_48 != 4)
		{
			__LIB_17__::func_656(61, 6);
			__LIB_17__::func_656(61, 1);
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
						__LIB_0__::func_325();
						__LIB_0__::func_429();
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
			__LIB_0__::func_325();
			__LIB_0__::func_429();
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
					__LIB_0__::func_229("S1_BACKUP", 1000, 1);
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
				if (fVar3 < fVar2 && fLocal_233 > __LIB_0__::func_504(fVar0, fVar1, (fVar3 / fVar2)))
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
					if (!__LIB_0__::func_324())
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
					func_520();
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
						if (__LIB_0__::func_86(Local_75[0 /*3*/]))
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
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(iLocal_176, -1, 1);
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
						iLocal_164 = __LIB_0__::func_639(iLocal_175, 0, 0);
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
				__LIB_39__::func_119(500);
				if (HUD::DOES_BLIP_EXIST(iLocal_164) && !__LIB_0__::func_75())
				{
					__LIB_0__::func_400(&Local_194);
				}
				switch (iLocal_108)
				{
					case 0:
						if (SYSTEM::TIMERA() > 7500)
						{
							func_692(Local_200.f_0, 0);
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
							{
								if ((iLocal_203 && !iLocal_204) && !__LIB_0__::func_75())
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
						func_692("", 1);
						if (SYSTEM::TIMERA() > 8000)
						{
							iLocal_108++;
						}
						break;
					case 2:
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_182))
						{
							STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
							__LIB_32__::func_14(&iLocal_160);
							STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_2");
							if (((STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")) && __LIB_17__::func_311(&iLocal_160)) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_2")) && !PED::IS_PED_INJURED(iLocal_170))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_182))
								{
									iLocal_182 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), PED::GET_PED_BONE_COORDS(iLocal_170, 60309, 0f, 0f, 0f), true, true, false);
									__LIB_17__::func_310(&iLocal_160, 0, 20);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_182, iLocal_170, PED::GET_PED_BONE_INDEX(iLocal_170, 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
									TASK::TASK_PLAY_ANIM(iLocal_170, "missheist_agency2aig_2", "look_at_phone_a", 2f, -1000f, -1, 49, 0f, false, false, false);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_170, iLocal_182, -1, 0, 2);
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						else if (SYSTEM::TIMERA() > 3000)
						{
							func_692(Local_201.f_0, 0);
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
							{
								if ((iLocal_203 && !iLocal_204) && !__LIB_0__::func_75())
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
							__LIB_17__::func_313(&iLocal_160);
							__LIB_17__::func_61();
							iLocal_108++;
						}
						break;
					case 5:
						func_692("", 1);
						if (SYSTEM::TIMERA() > 4000)
						{
							iLocal_108++;
						}
						break;
					case 6:
						if (SYSTEM::TIMERA() > 3000)
						{
							func_692("FBS1_CASH", 0);
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
							{
								if ((iLocal_203 && !iLocal_204) && !__LIB_0__::func_75())
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
						func_692("", 1);
						if (SYSTEM::TIMERA() > 10000)
						{
							iLocal_108++;
						}
						break;
					case 8:
						func_692("FBS1_TAIL3", 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
						{
							if ((iLocal_203 && !iLocal_204) && !__LIB_0__::func_75())
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
						func_692("", 1);
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
					__LIB_17__::func_71(&uLocal_117, iLocal_175, 0, 0, 1, 1, 1);
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
							__LIB_0__::func_429();
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
						__LIB_0__::func_429();
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_175, 10f, 10f, 3f, false, true, 0))
					{
						if (((PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID()) != 0) && PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID()) != 0) && !__LIB_2__::func_925(iLocal_175, 0, 0, 0, 0, 0, 1, 0, 1))
						{
							if (!PED::IS_PED_INJURED(iLocal_171))
							{
								PED::SET_PED_FLEE_ATTRIBUTES(iLocal_171, 2, VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false));
								TASK::TASK_SMART_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
							}
							SYSTEM::SETTIMERA(1500);
							iLocal_103 = 20;
							bLocal_51 = true;
							__LIB_0__::func_429();
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
					if (__LIB_17__::func_243(&Local_53, cLocal_110, "FBS1_SPKFAIL", 8, 0, 0, 0))
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
					if (__LIB_17__::func_243(&Local_53, cLocal_110, "FBS1_LOSFAIL", 8, 0, 0, 0))
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
					__LIB_0__::func_345(&uLocal_117, 0, 0);
				}
				if (iLocal_103 == 1)
				{
				}
				if (bLocal_99)
				{
					__LIB_0__::func_630(528);
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
				func_638(4);
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
				__LIB_0__::func_400(&Local_192);
				*iParam1 = __LIB_0__::func_639(*iParam0, 0, 0);
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
					*iParam3 = __LIB_0__::func_639(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam2), 0, 0);
				}
				else if (ENTITY::IS_ENTITY_A_PED(iParam2))
				{
					*iParam3 = __LIB_0__::func_666(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam2), 0, 145);
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
	if (fVar1 > fParam2 && fLocal_278 > __LIB_0__::func_504(fParam0, fParam1, (1f - (__LIB_0__::func_331((fVar1 - fParam2), 0f, fVar0) / fVar0))))
	{
		return 1;
	}
	return 0;
}

void func_692(char* sParam0, bool bParam1)//Position - 0x86139
{
	float fVar0;
	float fVar1;
	bool bVar2;
	if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false)) && !PED::IS_PED_INJURED(iLocal_171)) && !PED::IS_PED_INJURED(iLocal_170)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER"))
	{
		fVar0 = func_699(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
		fVar1 = func_699(ENTITY::GET_ENTITY_COORDS(iLocal_175, false));
		bVar2 = fVar0 > fVar1;
		if ((!iLocal_203 && !bParam1) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
			{
				if (__LIB_17__::func_243(&Local_53, "FBS1AUD", sParam0, 8, 0, 0, 0))
				{
					iLocal_203 = 1;
					iLocal_234 = 0;
				}
			}
		}
		else
		{
			if (!iLocal_234)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
				{
					if (__LIB_0__::func_75())
					{
						Local_237 = { __LIB_0__::func_485() };
						iLocal_234 = 1;
						iLocal_250 = 0;
						__LIB_0__::func_638();
					}
				}
				else
				{
					if (!iLocal_250)
					{
						if (func_697(&sLocal_238, &cLocal_244, bVar2) && (MISC::GET_GAME_TIMER() - iLocal_235) > iLocal_236)
						{
							iLocal_250 = 1;
							iLocal_251 = MISC::GET_GAME_TIMER();
						}
					}
					if (iLocal_250)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_251) < 3000)
						{
							if (__LIB_0__::func_75())
							{
								Local_237 = { __LIB_0__::func_485() };
								__LIB_0__::func_638();
							}
							if (!__LIB_0__::func_75())
							{
								if (iLocal_250)
								{
									if ((!MISC::ARE_STRINGS_EQUAL(&sLocal_238, "FBS1_LTURN") && !MISC::ARE_STRINGS_EQUAL(&sLocal_238, "FBS1_RTURN")) && !MISC::IS_STRING_NULL(&sLocal_238))
									{
										if (bParam1)
										{
											if (func_694(&Local_53, "FBS1AUD", &sLocal_238, &sLocal_238, "FBS1_MRESP", "FBS1_MRESP", 8, 0, 0))
											{
												if (MISC::ARE_STRINGS_EQUAL(&sLocal_238, "FBS1_FRONT") || MISC::ARE_STRINGS_EQUAL(&sLocal_238, "FBS1_CLOSE"))
												{
													bLocal_99 = false;
												}
												iLocal_234 = 1;
												iLocal_250 = 0;
												iLocal_235 = MISC::GET_GAME_TIMER();
											}
										}
										else if (__LIB_17__::func_731(&Local_53, "FBS1AUD", &sLocal_238, &cLocal_244, 9, 0, 0))
										{
											if (MISC::ARE_STRINGS_EQUAL(&sLocal_238, "FBS1_FRONT") || MISC::ARE_STRINGS_EQUAL(&sLocal_238, "FBS1_CLOSE"))
											{
												bLocal_99 = false;
											}
											iLocal_234 = 1;
											iLocal_250 = 0;
											iLocal_235 = MISC::GET_GAME_TIMER();
										}
									}
									else if (__LIB_17__::func_731(&Local_53, "FBS1AUD", &sLocal_238, &cLocal_244, 9, 0, 0))
									{
										if (MISC::ARE_STRINGS_EQUAL(&cLocal_244, "FBS1_LTURN_1"))
										{
											iLocal_97[0] = 1;
										}
										if (MISC::ARE_STRINGS_EQUAL(&cLocal_244, "FBS1_LTURN_2"))
										{
											iLocal_97[1] = 1;
										}
										if (MISC::ARE_STRINGS_EQUAL(&cLocal_244, "FBS1_LTURN_3"))
										{
											iLocal_97[2] = 1;
										}
										if (MISC::ARE_STRINGS_EQUAL(&cLocal_244, "FBS1_RTURN_1"))
										{
											iLocal_98 = 1;
										}
										iLocal_234 = 1;
										iLocal_250 = 0;
										iLocal_235 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						else
						{
							iLocal_250 = 0;
						}
					}
				}
			}
			if (iLocal_234)
			{
				if (!__LIB_0__::func_75() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, false))
				{
					if (!bParam1)
					{
						if (__LIB_17__::func_244(&Local_53, "FBS1AUD", sParam0, &Local_237, 8, 0, 0))
						{
							iLocal_234 = 0;
						}
					}
					else
					{
						iLocal_234 = 0;
					}
				}
			}
		}
	}
}

bool func_694(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8)//Position - 0x8647E
{
	var uVar0;
	var uVar1;
	__LIB_0__::func_487(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	__LIB_16__::func_906(2, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
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
					__LIB_0__::func_74();
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
		if (__LIB_0__::func_194(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		__LIB_0__::func_228();
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
				__LIB_16__::func_38();
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
				if (__LIB_0__::func_227())
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
			if (__LIB_0__::func_73())
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
			__LIB_0__::func_226();
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
		__LIB_0__::func_225();
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
		__LIB_0__::func_74();
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
		else if (!__LIB_0__::func_75())
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
					if (!__LIB_0__::func_324())
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
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(iLocal_176, -1, 1);
					}
					func_520();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
				{
					iLocal_174 = VEHICLE::CREATE_VEHICLE(ENTITY::GET_ENTITY_MODEL(iLocal_176), 72.6414f, -702.4333f, 31.18f, 0f, true, true, false);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_174, 0.0019f, 0.0174f, -0.174f, 0.9846f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_174, 5f);
					iLocal_173 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_174, 26, __LIB_0__::func_518(0), -1, true, true);
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
							__LIB_39__::func_123(500);
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
							__LIB_17__::func_313(&iLocal_160);
							__LIB_17__::func_61();
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
							__LIB_39__::func_119(500);
							while (!CAM::IS_SCREEN_FADED_IN())
							{
								SYSTEM::WAIT(0);
							}
						}
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(0);
					}
					CAM::DO_SCREEN_FADE_IN(500);
					__LIB_0__::func_400(&Local_193);
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
								if (func_709(&(Local_213[iLocal_102 /*2*/]), iLocal_112[iLocal_102], iLocal_113, iVar2, iLocal_106[(2 * iLocal_102)], iLocal_106[(2 * iLocal_102) + 1]))
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
								__LIB_0__::func_190("S1_FOCUS");
							}
							if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_SPOT", 8, 0, 0, 0))
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
						if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_IDENT", 8, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
							iLocal_273 = 5;
						}
						break;
					case 4:
						func_710(Local_213[iLocal_102 /*2*/].f_1, Local_116[iLocal_102 /*3*/]);
						if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_MISS", 8, 0, 0, 0))
						{
							iLocal_273 = 5;
						}
						break;
					case 5:
						func_710(Local_213[iLocal_102 /*2*/].f_1, Local_116[iLocal_102 /*3*/]);
						if (!__LIB_0__::func_75())
						{
							if (iLocal_105 < 4)
							{
								StringCopy(&Var3, "FBS1_SOC", 24);
								StringIntConCat(&Var3, iLocal_105, 24);
								if (__LIB_17__::func_243(&Local_53, "FBS1AUD", &Var3, 8, 0, 0, 0))
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
						if (!__LIB_0__::func_75())
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_213[iLocal_102 /*2*/].f_1) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_213[iLocal_102 /*2*/].f_1, Local_79, Local_80, fLocal_81, false, true, 0)) || !ENTITY::DOES_ENTITY_EXIST(Local_213[iLocal_102 /*2*/].f_1))
							{
								iLocal_102++;
								iLocal_101 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 5000);
								if (iLocal_102 >= iLocal_104)
								{
									func_638(3);
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
						if (!__LIB_13__::func_796(&uLocal_217, 0, 1, 0) || SYSTEM::TIMERA() > 3000)
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
							__LIB_0__::func_345(&uLocal_217, 0, 0);
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
								__LIB_0__::func_190("S1_FOCUS");
							}
						}
						if (func_710(iLocal_175, Local_115))
						{
							if (!bLocal_93)
							{
								__LIB_0__::func_429();
								if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_JANID", 8, 0, 0, 0))
								{
									if (iLocal_272 == iLocal_104)
									{
										__LIB_0__::func_630(527);
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
					if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_FOLLOW", 8, 0, 0, 0))
					{
						func_576(3);
						iLocal_164 = __LIB_0__::func_639(iLocal_175, 0, 0);
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
			__LIB_2__::func_819(&Local_129, 0, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			if (CAM::DOES_CAM_EXIST(iLocal_168) && CAM::IS_CAM_ACTIVE(iLocal_168))
			{
				CAM::SET_CAM_ROT(Local_129.f_0, Local_67, 2);
			}
		}
	}
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER"))
	{
		func_518(98.6395f, -728.7055f, 32.134f, 347.8271f);
		if (__LIB_0__::func_86(Local_75[0 /*3*/]))
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
		if (__LIB_0__::func_1("S1_FOCUS"))
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
				if (__LIB_0__::func_1("S1_FOCUS"))
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
		__LIB_0__::func_189();
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

int func_709(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x88410
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) || !ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		STREAMING::REQUEST_MODEL(iParam2);
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam3, "FBIs1");
		if ((STREAMING::HAS_MODEL_LOADED(iParam1) && STREAMING::HAS_MODEL_LOADED(iParam2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam3, "FBIs1"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
			{
				uParam0->f_1 = VEHICLE::CREATE_VEHICLE(iParam1, 99.8736f, -721.168f, 32.1399f, 342.0303f, true, true, false);
				if (iParam4 != -1 && iParam5 != -1)
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_1, iParam4, iParam5);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, false))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_1, 26, iParam2, -1, true, true);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, false) && !PED::IS_PED_INJURED(*uParam0))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(uParam0->f_1, iParam3, "FBIs1", 10f, 786477);
			}
		}
		return 0;
	}
	return 1;
}

int func_710(int iParam0, struct<3> Param1)//Position - 0x8850A
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	if (CAM::DOES_CAM_EXIST(Local_129.f_0))
	{
		if ((((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && SYSTEM::VDIST(Local_59, ENTITY::GET_ENTITY_COORDS(iParam0, false)) < 130.36f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_79, Local_80, fLocal_81, false, true, 0)) && __LIB_13__::func_796(&uLocal_217, 0, 1, 0))
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
					if (func_711(iParam0, 0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_76, Local_77, fLocal_78, false, true, 0))
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
					__LIB_0__::func_345(&uLocal_217, 0, 0);
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

int func_711(int iParam0, bool bParam1, bool bParam2)//Position - 0x8873E
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Local_61) };
		Var1 = { func_715(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Local_64), Var0) };
		Var2 = { Var0 - ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
		Var3 = { Var1 - Var0 };
		Var4 = { Var2 - Var0 };
		fVar5 = func_712(Var4, Var3);
		if (bParam2)
		{
		}
		if (bParam1)
		{
		}
		if (MISC::ABSF(fVar5) < 60f)
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

float func_712(struct<3> Param0, struct<3> Param1)//Position - 0x887D5
{
	float fVar0;
	Param0 = { func_713(Param0) };
	Param1 = { func_713(Param1) };
	fVar0 = (MISC::ATAN2(Param1.f_1, Param1.f_0) - MISC::ATAN2(Param0.f_1, Param0.f_0));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
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

Vector3 func_715(struct<3> Param0, struct<3> Param1)//Position - 0x888C6
{
	struct<3> Var0;
	struct<3> Var1;
	Var1 = { Param1 - Param0 };
	func_716(&Var1, 0.3f);
	Var0 = { Param0 + Var1 };
	return Var0;
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
	__LIB_0__::func_366(0);
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
				if (!__LIB_0__::func_324())
				{
					__LIB_0__::func_399(Local_68, fLocal_69, 0, 12000, 1123680256, 0);
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
				if (__LIB_0__::func_324())
				{
					__LIB_0__::func_433(0, -1, 1);
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
			iLocal_167 = __LIB_0__::func_639(iLocal_176, 0, 0);
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
			__LIB_39__::func_119(500);
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
						__LIB_0__::func_429();
						if (__LIB_17__::func_243(&Local_53, "FBS1AUD", "FBS1_INTRO", 8, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_103++;
						}
					}
				}
				else if (!iLocal_268)
				{
					__LIB_0__::func_229("CMN_GENGETINY" /* GXT: ~s~Get in your ~b~car. */, 7500, 1);
					iLocal_268 = 1;
				}
			}
			break;
		case 2:
			if (SYSTEM::TIMERA() > 7500)
			{
				func_512("FBS1_TOFIB", iLocal_176);
			}
			switch (iLocal_108)
			{
				case 0:
					if (iLocal_203 && !iLocal_204)
					{
						Var0 = { __LIB_0__::func_486() };
						if (__LIB_0__::func_75() && MISC::ARE_STRINGS_EQUAL(&Var0, "FBS1_TOFIB"))
						{
							iLocal_108++;
						}
					}
					break;
				case 1:
					STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
					__LIB_32__::func_14(&iLocal_160);
					STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_2");
					if (((STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")) && __LIB_17__::func_311(&iLocal_160)) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_2")) && !PED::IS_PED_INJURED(iLocal_170))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_182))
						{
							iLocal_182 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), PED::GET_PED_BONE_COORDS(iLocal_170, 60309, 0f, 0f, 0f), true, true, false);
							__LIB_17__::func_310(&iLocal_160, 0, 20);
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
						if (!__LIB_0__::func_75())
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
						__LIB_17__::func_313(&iLocal_160);
						__LIB_17__::func_61();
						iLocal_108++;
					}
					break;
			}
			func_514(&iLocal_176, &iLocal_167, Local_59 - Vector(0.5f, 0.5f, 0.5f), &iLocal_165);
			if (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176))
					{
						__LIB_0__::func_400(&Local_195);
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
						if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_176) && __LIB_0__::func_494(1, 0, 1))
						{
							if (MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var2.f_0, Var2.f_1, Var3.f_0, Var3.f_1)) < 30f)
							{
								HUD::REMOVE_BLIP(&iLocal_165);
								__LIB_0__::func_638();
								iLocal_103++;
							}
							else if (!iLocal_269)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_17__::func_243(&Local_53, cLocal_110, "FBS1_TURNRND", 8, 0, 0, 0))
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
				if (__LIB_0__::func_213(iLocal_176, 5f, 5, 1056964608, 0, 1, 0))
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
			if (__LIB_17__::func_243(&Local_53, cLocal_110, "FBS1_ATFIB", 8, 0, 0, 0))
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
			func_638(2);
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
						__LIB_0__::func_679(iLocal_179[iVar0], iVar0);
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
	STREAMING::REQUEST_MODEL(__LIB_0__::func_493(bParam1));
	if (STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_493(bParam1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			__LIB_0__::func_648(iParam0, bParam1, Param2, fParam3, 1);
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

void func_729()//Position - 0x89939
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_176) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
	{
		VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_176);
	}
	if (!iLocal_268)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	}
	switch (iLocal_103)
	{
		case 0:
			if (iLocal_50 || __LIB_0__::func_2(0))
			{
				while (!func_526(Local_85, fLocal_86, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_0__::func_399(Local_85, fLocal_69, 0, 12000, 1123680256, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_85, true, false, false, true);
				func_520();
				iLocal_50 = 0;
				iLocal_103 = -1;
			}
			else if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_190) || !ENTITY::DOES_ENTITY_EXIST(iLocal_189)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_170))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_170))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
					iLocal_170 = Global_96938.f_9[0];
					Global_96938.f_9[0] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_190))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[0], true, true);
					iLocal_190 = Global_96938.f_28[0];
					Global_96938.f_28[0] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_189))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[1], true, true);
					iLocal_189 = Global_96938.f_28[1];
					Global_96938.f_28[1] = 0;
				}
			}
			else
			{
				__LIB_0__::func_468(66);
				iLocal_103++;
			}
			break;
		case -1:
			iLocal_103 = 1;
			break;
		case 1:
			if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_188, 8);
				if (!iLocal_267)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_170) && !PED::IS_PED_INJURED(iLocal_170))
					{
						if (CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
							{
								CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lester", iLocal_170, 0);
								iLocal_267 = 1;
							}
						}
					}
				}
			}
			if (__LIB_0__::func_90())
			{
				if (__LIB_13__::func_801(sLocal_188))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_170))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_170, "Lester", 2, __LIB_0__::func_493(12), 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_170))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_170, "Lester", 0, 0, 0);
						}
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(4);
						STREAMING::REMOVE_ANIM_DICT("missheistfbisetup1leadinoutah_1_int");
						iLocal_103++;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < Global_96938.f_28)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[iVar0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[iVar0], true, true);
					OBJECT::DELETE_OBJECT(&(Global_96938.f_28[iVar0]));
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_190))
			{
				OBJECT::DELETE_OBJECT(&iLocal_190);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_189))
			{
				OBJECT::DELETE_OBJECT(&iLocal_189);
			}
			iLocal_103++;
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			CAM::STOP_GAMEPLAY_HINT(false);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
					if (__LIB_31__::func_649(iVar1))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false) != 0)
						{
							bVar2 = true;
						}
					}
					if (!VEHICLE::IS_BIG_VEHICLE(iVar1) && !bVar2)
					{
						__LIB_31__::func_730(iVar1, 702.5282f, -980.0775f, 23.1412f, 225.0234f, 24, 0);
					}
					VEHICLE::DELETE_VEHICLE(&iVar1);
				}
				MISC::CLEAR_AREA(Local_85, 100f, true, false, false, false);
				__LIB_0__::func_342(24);
				while (!func_526(Local_85, fLocal_86, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				MISC::CLEAR_AREA(Local_85, 100f, true, false, false, false);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_170))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
				{
					iLocal_170 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
					func_521(iLocal_170);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_170) && ENTITY::DOES_ENTITY_EXIST(iLocal_176))
			{
				iLocal_103++;
			}
			break;
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_176, false) + Vector(2f, 0f, 0f), 0f, 255, 0, 255, 255);
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 900, 0f, true, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_170))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_170, iLocal_176, 0);
						func_521(iLocal_170);
					}
				}
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				MISC::CLEAR_AREA(Local_210, 300f, true, false, false, false);
				MISC::CLEAR_AREA(Local_207, 300f, true, false, false, false);
				VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
				if (!PED::IS_PED_INJURED(iLocal_170) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, false))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_170, iLocal_176, 0);
						func_521(iLocal_170);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				__LIB_39__::func_119(500);
				func_10();
				SYSTEM::SETTIMERA(0);
				RECORDING::REPLAY_STOP_EVENT();
				func_576(1);
			}
			break;
	}
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
	__LIB_0__::func_222(&Local_53, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
	STREAMING::REQUEST_MODEL(joaat("tailgater"));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_Heist_1_Tail_Janitor_01", false, -1);
	if (__LIB_0__::func_323())
	{
		HUD::DISPLAY_RADAR(true);
		__LIB_39__::func_123(500);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		func_583();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(2f, 0f, 0f), true, false, false, true);
		}
		iVar0 = __LIB_0__::func_344();
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
				__LIB_37__::func_872(&iLocal_176, Local_85, fLocal_86, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
				func_576(1);
			}
			if (iVar0 == 1)
			{
				Local_265 = { Local_59 };
				fLocal_266 = fLocal_88;
				__LIB_37__::func_872(&iLocal_176, Local_59, fLocal_88, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
				func_576(2);
			}
			if (iVar0 == 2)
			{
				Local_265 = { Local_59 };
				fLocal_266 = fLocal_88;
				__LIB_37__::func_872(&iLocal_176, Local_59, fLocal_88, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
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
		__LIB_0__::func_427(Local_265, fLocal_266, 1, 0);
		MISC::CLEAR_AREA(Local_265, 1000f, true, false, false, false);
		GRAPHICS::WASH_DECALS_IN_RANGE(Local_265, 1000f, 1f);
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (__LIB_0__::func_2(0))
	{
		__LIB_0__::func_544(70, 1, 0, 1, 0);
		__LIB_0__::func_544(71, 1, 0, 1, 0);
		__LIB_0__::func_544(73, 1, 0, 1, 0);
		__LIB_0__::func_544(72, 0, 0, 1, 0);
		__LIB_0__::func_544(74, 0, 0, 1, 0);
		__LIB_17__::func_656(62, 0);
		__LIB_17__::func_656(63, 0);
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
	__LIB_0__::func_424(1);
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
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 50f && !__LIB_34__::func_682(ENTITY::GET_ENTITY_MODEL(iVar2)))
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
	if ((((!__LIB_0__::func_323() && iLocal_48 != 11) && iLocal_48 != 7) && iLocal_48 != 8) && iLocal_48 != 10)
	{
		func_638(1);
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
	__LIB_0__::func_325();
	__LIB_0__::func_429();
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
	__LIB_0__::func_424(0);
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
	__LIB_17__::func_313(&iLocal_160);
	__LIB_17__::func_61();
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
	__LIB_0__::func_377(0, -1);
	__LIB_0__::func_505(0, -1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, true, false);
	__LIB_17__::func_656(63, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, true, false);
	__LIB_17__::func_656(62, 0);
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
					__LIB_16__::func_38();
					Global_113386.f_14141[iVar0 /*104*/].f_99[Global_20266] = 0;
					if (__LIB_3__::func_416(iVar0))
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
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
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
			__LIB_16__::func_40();
		}
	}
}

