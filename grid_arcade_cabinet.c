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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
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
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
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
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	struct<22> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<453> Local_135 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -2147483647, -1, 4, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, 4, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, 0, -1, 0, 4, 0, 0, 0, 0, 0, -1, 0, -1, -2147483647, 0, -1, -1, -2147483647, 0, -2147483647, 0, 0, 0, -2147483647, -1, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0 } ;
	struct<166> Local_136 = { 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 7, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -2147483647, 4, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 3, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, 10 } ;
	var uLocal_137 = 0;
	var uLocal_138 = -1;
	var uLocal_139 = -1;
	var uLocal_140 = 0;
	var uLocal_141 = -1;
	var uLocal_142 = -1;
	var uLocal_143 = 0;
	var uLocal_144 = -1;
	var uLocal_145 = -1;
	var uLocal_146 = 0;
	var uLocal_147 = -1;
	var uLocal_148 = -1;
	var uLocal_149 = 0;
	var uLocal_150 = -1;
	var uLocal_151 = -1;
	var uLocal_152 = 0;
	var uLocal_153 = -1;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = -1;
	var uLocal_157 = -1;
	var uLocal_158 = 0;
	var uLocal_159 = -1;
	var uLocal_160 = -1;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = -1;
	var uLocal_164 = 0;
	var uLocal_165 = -1;
	var uLocal_166 = -1;
	var uLocal_167 = 4;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	int iLocal_172[4] = { 0, 0, 0, 0 };
	struct<9> Local_173[4];
	struct<16> Local_174[4];
	struct<37> Local_175[4];
	struct<17> Local_176 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0 } ;
	var uLocal_177 = 255;
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
	var uLocal_190 = 255;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 255;
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
	var uLocal_207 = 255;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 255;
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
	var uLocal_224 = 255;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 255;
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
	var uLocal_241 = 255;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 255;
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
	var uLocal_258 = 255;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 255;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 255;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 255;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 255;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 255;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	struct<21> Local_301 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_106 = -1;
	fLocal_108 = 0.5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_400(ScriptParam_301);
	}
	while (true)
	{
		__LIB_0__::func_671();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_47();
		}
		else
		{
			func_9();
		}
		if (__LIB_6__::func_949())
		{
			func_9();
		}
	}
}

void func_9()//Position - 0x1FE
{
	func_11();
	__LIB_0__::func_199();
}

void func_11()//Position - 0x21A
{
	int iVar0;
	if (func_46())
	{
		Local_134.f_16 = 1;
	}
	Local_134.f_21 = func_43();
	__LIB_31__::func_25();
	__LIB_38__::func_114();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGrid");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridTiles");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerBlue");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerGreen");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerPurple");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerYellow");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridHUD");
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	if (Local_135.f_427 != 0)
	{
		GRAPHICS::RELEASE_BINK_MOVIE(Local_135.f_427);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	__LIB_31__::func_23(func_19(4));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_135.f_281[iVar0 /*7*/].f_5 >= 0)
		{
			AUDIO::STOP_SOUND(Local_135.f_281[iVar0 /*7*/].f_5);
			AUDIO::RELEASE_SOUND_ID(Local_135.f_281[iVar0 /*7*/].f_5);
		}
		if (Local_135.f_281[iVar0 /*7*/].f_6 >= 0)
		{
			AUDIO::STOP_SOUND(Local_135.f_281[iVar0 /*7*/].f_6);
			AUDIO::RELEASE_SOUND_ID(Local_135.f_281[iVar0 /*7*/].f_6);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_135.f_204[iVar0 /*19*/].f_7 >= 0)
		{
			AUDIO::STOP_SOUND(Local_135.f_204[iVar0 /*19*/].f_7);
			AUDIO::RELEASE_SOUND_ID(Local_135.f_204[iVar0 /*19*/].f_7);
		}
		if (Local_135.f_204[iVar0 /*19*/].f_6 >= 0)
		{
			AUDIO::STOP_SOUND(Local_135.f_204[iVar0 /*19*/].f_6);
			AUDIO::RELEASE_SOUND_ID(Local_135.f_204[iVar0 /*19*/].f_6);
		}
		if (Local_135.f_204[iVar0 /*19*/].f_8 >= 0)
		{
			AUDIO::STOP_SOUND(Local_135.f_204[iVar0 /*19*/].f_8);
			AUDIO::RELEASE_SOUND_ID(Local_135.f_204[iVar0 /*19*/].f_8);
		}
		iVar0++;
	}
	if (Local_135.f_178.f_4 >= 0)
	{
		AUDIO::STOP_SOUND(Local_135.f_178.f_4);
		AUDIO::RELEASE_SOUND_ID(Local_135.f_178.f_4);
	}
	if (Local_135.f_428 >= 0)
	{
		AUDIO::STOP_SOUND(Local_135.f_428);
		AUDIO::RELEASE_SOUND_ID(Local_135.f_428);
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_TW");
	func_16();
	func_15(12);
	Global_1931416 = 0;
	Global_1931416.f_1 = 0;
	func_12(0);
	__LIB_0__::func_199();
}

void func_12(bool bParam0)//Position - 0x420
{
	if (bParam0)
	{
		if (!__LIB_34__::func_751(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428), 4);
		}
	}
	else if (__LIB_34__::func_751(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428), 4);
	}
}

void func_15(int iParam0)//Position - 0x499
{
	Local_135.f_140 = iParam0;
}

void func_16()//Position - 0x4A7
{
	Local_135.f_442 = -1;
	Local_135.f_421 = 0;
	if (Local_135.f_418 != -2147483647)
	{
		Local_135.f_418 = -2147483647;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_135.f_419))
	{
		Local_135.f_419 = __LIB_0__::func_459();
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

char* func_19(int iParam0)//Position - 0x50D
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_TW_TITLE_START";
		case 1:
			return "CASINO_TW_GAMEPLAY";
		case 2:
			return "CASINO_TW_MID_ROUND";
		case 3:
			return "CASINO_TW_SUDDEN_DEATH";
		case 4:
			return "CASINO_TW_STOP_MUSIC";
		default:
	}
	return "INVALID MUSIC EVENT";
}

int func_43()//Position - 0xF24
{
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_160())
	{
		switch (__LIB_4__::func_767())
		{
			case 17:
				return 2003554330;
				break;
			case 15:
				return 729976867;
				break;
			default:
				return 0;
				break;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_46()//Position - 0x140B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_175[iVar0 /*37*/].f_25)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_47()//Position - 0x1436
{
	func_356();
	func_100();
	func_51();
	func_48();
}

void func_48()//Position - 0x144E
{
	func_50();
	if (!func_49())
	{
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
	}
}

bool func_49()//Position - 0x1466
{
	return BitTest(Local_135.f_417, 0);
}

void func_50()//Position - 0x1475
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_175[iVar0 /*37*/].f_25)
		{
			Local_173[iVar0 /*9*/] = { Local_175[iVar0 /*37*/] };
			Local_174[iVar0 /*16*/] = { Local_175[iVar0 /*37*/].f_9 };
		}
		iVar0++;
	}
}

void func_51()//Position - 0x14C5
{
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	switch (Local_136.f_145)
	{
		case 0:
			func_98();
			break;
		case 1:
			func_92();
			break;
		case 2:
			func_86();
			break;
		case 3:
			func_85();
			break;
		case 4:
			func_65();
			break;
		case 5:
			func_52();
			break;
		case 6:
			break;
		case 7:
			break;
	}
}

void func_52()//Position - 0x1544
{
	if (NETWORK::GET_NETWORK_TIME() < Local_136.f_147 + 5000)
	{
		return;
	}
	if (func_64())
	{
		func_63(2);
		return;
	}
	func_53();
	func_63(6);
}

void func_53()//Position - 0x1576
{
	struct<3> Var0;
	int iVar1;
	Var0 = 14;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_175[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar1 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Var0[iVar1 /*3*/] = Local_173[iVar1 /*9*/].f_7;
			Var0[iVar1 /*3*/].f_1 = Local_173[iVar1 /*9*/].f_8;
			Var0[iVar1 /*3*/].f_2 = iVar1;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Var0[iVar1 + 4 /*3*/] = Local_136.f_165[iVar1 /*3*/];
		Var0[iVar1 + 4 /*3*/].f_2 = Local_136.f_165[iVar1 /*3*/].f_2;
		Var0[iVar1 + 4 /*3*/].f_1 = Local_136.f_165[iVar1 /*3*/].f_1;
		iVar1++;
	}
	func_62(&Var0, 0, 13);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Local_136.f_165[iVar1 /*3*/] = Var0[iVar1 /*3*/];
		Local_136.f_165[iVar1 /*3*/].f_2 = Var0[iVar1 /*3*/].f_2;
		Local_136.f_165[iVar1 /*3*/].f_1 = Var0[iVar1 /*3*/].f_1;
		__LIB_20__::func_592(__LIB_6__::func_940(PLAYER::PLAYER_ID()), 0, iVar1, Local_136.f_165[iVar1 /*3*/], Local_136.f_165[iVar1 /*3*/].f_1, 0);
		iVar1++;
	}
}

void func_62(var uParam0, int iParam1, int iParam2)//Position - 0x19BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = (uParam0[((iParam1 + iParam2) / 2) /*3*/])->f_1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*3*/])->f_1 > iVar2 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (iVar2 > (uParam0[iVar1 /*3*/])->f_1 && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var3.f_0 = (*uParam0)[iVar0 /*3*/];
			Var3.f_2 = (uParam0[iVar0 /*3*/])->f_2;
			Var3.f_1 = (uParam0[iVar0 /*3*/])->f_1;
			(*uParam0)[iVar0 /*3*/] = (*uParam0)[iVar1 /*3*/];
			(uParam0[iVar0 /*3*/])->f_2 = (uParam0[iVar1 /*3*/])->f_2;
			(uParam0[iVar0 /*3*/])->f_1 = (uParam0[iVar1 /*3*/])->f_1;
			(*uParam0)[iVar1 /*3*/] = Var3.f_0;
			(uParam0[iVar1 /*3*/])->f_2 = Var3.f_2;
			(uParam0[iVar1 /*3*/])->f_1 = Var3.f_1;
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_62(uParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_62(uParam0, iParam1, iVar1);
	}
}

void func_63(int iParam0)//Position - 0x1AD6
{
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	Local_136.f_145 = iParam0;
}

int func_64()//Position - 0x1AF2
{
	int iVar0;
	int iVar1;
	if (Local_135.f_148 <= 1)
	{
		return 0;
	}
	if (Local_136.f_137 >= Local_136.f_138)
	{
		return 0;
	}
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Local_136.f_138) / 2f));
	if (Local_136.f_137 > iVar0)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_175[iVar1 /*37*/].f_25)
			{
			}
			else if (Local_173[iVar1 /*9*/].f_6 == -1)
			{
			}
			else if (Local_136.f_139[Local_173[iVar1 /*9*/].f_6] > iVar0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

void func_65()//Position - 0x1B8E
{
	int iVar0;
	func_79();
	func_74(0, 0);
	func_70();
	if (!func_69())
	{
		return;
	}
	iVar0 = func_67();
	if (iVar0 == -1)
	{
		func_74(1, 1);
		Local_136.f_162 = 1;
		return;
	}
	Local_136.f_139[Local_173[iVar0 /*9*/].f_6]++;
	Local_136.f_131[Local_136.f_137] = iVar0;
	Local_136.f_137++;
	Local_136.f_147 = NETWORK::GET_NETWORK_TIME();
	if (!func_64())
	{
		Local_136.f_130 = func_66();
	}
	func_63(5);
}

int func_66()//Position - 0x1C25
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_175[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar2 /*9*/].f_6 == -1)
		{
		}
		else if (Local_136.f_139[Local_173[iVar2 /*9*/].f_6] > iVar1)
		{
			iVar0 = iVar2;
			iVar1 = Local_136.f_139[Local_173[iVar2 /*9*/].f_6];
		}
		else if (iVar0 > -1 && Local_136.f_139[Local_173[iVar2 /*9*/].f_6] == iVar1)
		{
			if (Local_173[iVar2 /*9*/].f_8 + iLocal_172[Local_173[iVar2 /*9*/].f_6]) > (Local_173[iVar0 /*9*/].f_8 + iLocal_172[Local_173[iVar0 /*9*/].f_6])
			{
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_67()//Position - 0x1CFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_175[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			if (!Local_136.f_163)
			{
				if (Local_136.f_162 && func_68(iVar2))
				{
				}
				else
				{
					if (Local_136.f_162)
					{
						iVar4 = 0;
					}
					if (iLocal_172[Local_173[iVar2 /*9*/].f_6] > iVar1)
					{
						iVar0 = iVar2;
						iVar1 = iLocal_172[Local_173[iVar2 /*9*/].f_6];
						iVar3 = 0;
					}
					else if (iLocal_172[Local_173[iVar2 /*9*/].f_6] == iVar1)
					{
						iVar3 = 1;
					}
				}
				iVar2++;
				if (iVar3 && !Local_136.f_163)
				{
					iVar0 = -1;
				}
				if (iVar4 && Local_136.f_162)
				{
					Local_136.f_163 = 1;
				}
				return iVar0;
			}
int func_68(int iParam0)//Position - 0x1DEE
{
	if (Local_173[iParam0 /*9*/] == 3)
	{
		return 1;
	}
	if (Local_173[iParam0 /*9*/] == 4)
	{
		return 1;
	}
	return 0;
}

int func_69()//Position - 0x1E15
{
	if (!Local_136.f_162 && NETWORK::GET_NETWORK_TIME() > (Local_136.f_146 + 120000))
	{
		return 1;
	}
	if (Local_135.f_147 <= 1)
	{
		return 1;
	}
	return 0;
}

void func_70()//Position - 0x1E4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_136.f_161 + 15000)
	{
		return;
	}
	Local_136.f_161 = NETWORK::GET_NETWORK_TIME();
	if (__LIB_0__::func_502())
	{
		bVar3 = __LIB_0__::func_502();
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
		if ((iVar0 % 2) != 0)
		{
			iVar0++;
			if (iVar0 >= 13)
			{
				iVar0 = 0;
			}
		}
		iVar1 = __LIB_0__::func_138(bVar3, 8, 0);
		iVar2 = __LIB_0__::func_138(bVar3, 0, 1);
	}
	else
	{
		bVar4 = __LIB_0__::func_502();
		iVar0 = __LIB_0__::func_138(bVar4, 12, 0);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
		if ((iVar1 % 2) != 0)
		{
			iVar1++;
			if (iVar1 >= 9)
			{
				iVar1 = 0;
			}
		}
		iVar2 = __LIB_0__::func_138(bVar4, 2, 3);
	}
	Local_136.f_148[0 /*4*/] = NETWORK::GET_NETWORK_TIME() + 1000;
	Local_136.f_148[0 /*4*/].f_1 = func_71(iVar0, iVar1);
	Local_136.f_148[0 /*4*/].f_2 = iVar2;
	Local_136.f_148[0 /*4*/].f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
}

int func_71(int iParam0, int iParam1)//Position - 0x1F3A
{
	return (iParam0 + iParam1 * 13);
}

void func_74(bool bParam0, bool bParam1)//Position - 0x1F7E
{
	int iVar0;
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	if (Local_136.f_162 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Local_136.f_62[iVar0 /*3*/].f_2 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() < Local_136.f_62[iVar0 /*3*/].f_2 + 17500)
		{
		}
		else
		{
			Local_136.f_62[iVar0 /*3*/] = -1;
			Local_136.f_62[iVar0 /*3*/].f_1 = -1;
			Local_136.f_62[iVar0 /*3*/].f_2 = -2147483647;
		}
		iVar0++;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_136.f_84 + 20000 && !bParam0)
	{
		return;
	}
	Local_136.f_84 = NETWORK::GET_NETWORK_TIME();
	if (bParam1)
	{
		func_78();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_136.f_146) < 20000)
	{
		func_77();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_136.f_146) >= 20000 && (NETWORK::GET_NETWORK_TIME() - Local_136.f_146) < 60000)
	{
		func_76();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_136.f_146) < 102500)
	{
		func_75();
	}
}

void func_75()//Position - 0x2094
{
	int iVar0;
	int iVar1;
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_136.f_62[0 /*3*/].f_1 = 6;
			Local_136.f_62[0 /*3*/] = 32;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 4;
			Local_136.f_62[1 /*3*/] = 56;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 4;
			Local_136.f_62[2 /*3*/] = 60;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 6;
			Local_136.f_62[3 /*3*/] = 84;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 0;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 1;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 1;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		case 1:
			Local_136.f_62[0 /*3*/].f_1 = 5;
			Local_136.f_62[0 /*3*/] = 32;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 1;
			Local_136.f_62[1 /*3*/] = 56;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 1;
			Local_136.f_62[2 /*3*/] = 60;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 5;
			Local_136.f_62[3 /*3*/] = 84;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 5;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		case 2:
			Local_136.f_62[0 /*3*/].f_1 = 3;
			Local_136.f_62[0 /*3*/] = 34;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 6;
			Local_136.f_62[1 /*3*/] = 30;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 6;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 3;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		case 3:
			Local_136.f_62[0 /*3*/].f_1 = 0;
			Local_136.f_62[0 /*3*/] = 30;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 0;
			Local_136.f_62[1 /*3*/] = 34;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 0;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 0;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 7;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 7;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		case 4:
			Local_136.f_62[0 /*3*/].f_1 = 6;
			Local_136.f_62[0 /*3*/] = 30;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 6;
			Local_136.f_62[1 /*3*/] = 34;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 6;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 6;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 0;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_76()//Position - 0x2561
{
	int iVar0;
	int iVar1;
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_136.f_62[0 /*3*/].f_1 = 3;
			Local_136.f_62[0 /*3*/] = 32;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 4;
			Local_136.f_62[1 /*3*/] = 56;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 4;
			Local_136.f_62[2 /*3*/] = 60;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 3;
			Local_136.f_62[3 /*3*/] = 84;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 1;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 1;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		case 1:
			Local_136.f_62[0 /*3*/].f_1 = 5;
			Local_136.f_62[0 /*3*/] = 32;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 7;
			Local_136.f_62[1 /*3*/] = 56;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 7;
			Local_136.f_62[2 /*3*/] = 60;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 5;
			Local_136.f_62[3 /*3*/] = 84;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		case 2:
			Local_136.f_62[0 /*3*/].f_1 = 3;
			Local_136.f_62[0 /*3*/] = 30;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 3;
			Local_136.f_62[1 /*3*/] = 34;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 3;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 3;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 6;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		case 3:
			Local_136.f_62[0 /*3*/].f_1 = 1;
			Local_136.f_62[0 /*3*/] = 30;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 1;
			Local_136.f_62[1 /*3*/] = 34;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 1;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 1;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		case 4:
			Local_136.f_62[0 /*3*/].f_1 = 0;
			Local_136.f_62[0 /*3*/] = 30;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 0;
			Local_136.f_62[1 /*3*/] = 34;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 0;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 0;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 6;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 6;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 6;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_77()//Position - 0x2A2E
{
	int iVar0;
	int iVar1;
	iVar0 = NETWORK::GET_NETWORK_TIME();
	Local_136.f_62[0 /*3*/].f_1 = 3;
	Local_136.f_62[0 /*3*/] = 32;
	Local_136.f_62[0 /*3*/].f_2 = iVar0;
	Local_136.f_62[1 /*3*/].f_1 = 3;
	Local_136.f_62[1 /*3*/] = 56;
	Local_136.f_62[1 /*3*/].f_2 = iVar0;
	Local_136.f_62[2 /*3*/].f_1 = 3;
	Local_136.f_62[2 /*3*/] = 60;
	Local_136.f_62[2 /*3*/].f_2 = iVar0;
	Local_136.f_62[3 /*3*/].f_1 = 3;
	Local_136.f_62[3 /*3*/] = 84;
	Local_136.f_62[3 /*3*/].f_2 = iVar0;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar1)
	{
		case 0:
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			break;
		case 1:
			Local_136.f_62[4 /*3*/].f_1 = MISC::GET_RANDOM_INT_IN_RANGE(4, 6);
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			break;
		case 2:
			Local_136.f_62[4 /*3*/].f_1 = 1;
			Local_136.f_62[4 /*3*/] = 54;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 1;
			Local_136.f_62[5 /*3*/] = 58;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 1;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		case 3:
			break;
	}
}

void func_78()//Position - 0x2B9D
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_136.f_62[iVar0 /*3*/] = -1;
		Local_136.f_62[iVar0 /*3*/].f_1 = -1;
		Local_136.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar1 = NETWORK::GET_NETWORK_TIME();
	Local_136.f_62[0 /*3*/] = 54;
	Local_136.f_62[0 /*3*/].f_2 = iVar1;
	Local_136.f_62[1 /*3*/] = 56;
	Local_136.f_62[1 /*3*/].f_2 = iVar1;
	Local_136.f_62[2 /*3*/] = 58;
	Local_136.f_62[2 /*3*/].f_2 = iVar1;
	Local_136.f_62[3 /*3*/] = 60;
	Local_136.f_62[3 /*3*/].f_2 = iVar1;
	Local_136.f_62[4 /*3*/] = 62;
	Local_136.f_62[4 /*3*/].f_2 = iVar1;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar2)
	{
		case 0:
			Local_136.f_62[0 /*3*/].f_1 = 3;
			Local_136.f_62[1 /*3*/].f_1 = 3;
			Local_136.f_62[3 /*3*/].f_1 = 3;
			Local_136.f_62[4 /*3*/].f_1 = 3;
			break;
		case 1:
			Local_136.f_62[0 /*3*/].f_1 = 4;
			Local_136.f_62[1 /*3*/].f_1 = 4;
			Local_136.f_62[3 /*3*/].f_1 = 4;
			Local_136.f_62[4 /*3*/].f_1 = 4;
			break;
		case 2:
			Local_136.f_62[0 /*3*/].f_1 = 5;
			Local_136.f_62[1 /*3*/].f_1 = 5;
			Local_136.f_62[3 /*3*/].f_1 = 5;
			Local_136.f_62[4 /*3*/].f_1 = 5;
			break;
		case 3:
			Local_136.f_62[0 /*3*/].f_1 = 7;
			Local_136.f_62[1 /*3*/].f_1 = 7;
			Local_136.f_62[3 /*3*/].f_1 = 7;
			Local_136.f_62[4 /*3*/].f_1 = 7;
			break;
		case 4:
			Local_136.f_62[0 /*3*/].f_1 = 6;
			Local_136.f_62[1 /*3*/].f_1 = 6;
			Local_136.f_62[3 /*3*/].f_1 = 6;
			Local_136.f_62[4 /*3*/].f_1 = 6;
			break;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar2)
	{
		case 0:
			Local_136.f_62[2 /*3*/].f_1 = -1;
			Local_136.f_62[2 /*3*/] = -1;
			Local_136.f_62[2 /*3*/].f_2 = -2147483647;
			break;
		case 1:
			Local_136.f_62[2 /*3*/].f_1 = 2;
			break;
		case 2:
			Local_136.f_62[2 /*3*/].f_1 = 0;
			break;
		case 3:
			Local_136.f_62[2 /*3*/].f_1 = 1;
			break;
	}
}

void func_79()//Position - 0x2DE0
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			iVar3 = func_80(iVar1, iVar2);
			if (Local_136[iVar1 /*5*/][iVar2] != iVar3)
			{
				Local_136[iVar1 /*5*/][iVar2] = iVar3;
			}
			if (iVar3 != -1)
			{
				uVar0[iVar3]++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iLocal_172[iVar1] != uVar0[iVar1])
		{
			iLocal_172[iVar1] = uVar0[iVar1];
		}
		iVar1++;
	}
}

int func_80(int iParam0, int iParam1)//Position - 0x2E88
{
	int iVar0;
	int iVar1;
	iVar0 = func_84(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_175[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar1 /*9*/].f_6 == -1)
		{
		}
		else if (!__LIB_22__::func_217(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!__LIB_22__::func_217(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 - 13)))
		{
		}
		else if (!__LIB_22__::func_217(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!__LIB_22__::func_217(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 13) + 1))
		{
		}
		else if (!__LIB_22__::func_217(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 1)))
		{
		}
		else if (!__LIB_22__::func_217(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), iVar0 + 1))
		{
		}
		else if (!__LIB_22__::func_217(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 + 13 - 1)))
		{
		}
		else if (!__LIB_22__::func_217(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), iVar0 + 13))
		{
		}
		else
		{
			return Local_173[iVar1 /*9*/].f_6;
		}
		iVar1++;
	}
	return -1;
}

int func_84(int iParam0, int iParam1)//Position - 0x3075
{
	return func_71((1 + iParam0 * 2), (1 + iParam1 * 2));
}

void func_85()//Position - 0x308D
{
	if (NETWORK::GET_NETWORK_TIME() < Local_136.f_146)
	{
		return;
	}
	Local_136.f_84 = Local_136.f_146;
	Local_136.f_161 = Local_136.f_146;
	func_74(1, 0);
	func_63(4);
}

void func_86()//Position - 0x30C3
{
	func_87();
	func_63(3);
}

void func_87()//Position - 0x30D4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	Local_136.f_162 = 0;
	Local_136.f_163 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_136[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iLocal_172[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Local_136.f_85[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_135.f_149[iVar0] == -1)
		{
		}
		else
		{
			func_88(iVar0, func_91(iVar0), func_90(iVar0), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_136.f_62[iVar0 /*3*/] = -1;
		Local_136.f_62[iVar0 /*3*/].f_1 = -1;
		Local_136.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_136.f_148[iVar0 /*4*/] = -2147483647;
		Local_136.f_148[iVar0 /*4*/].f_1 = -1;
		Local_136.f_148[iVar0 /*4*/].f_2 = -1;
		Local_136.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	Local_136.f_146 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME() + 5000) / 1000f)) * 1000;
	func_79();
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3246
{
	int iVar0;
	iVar0 = func_84(iParam1, iParam2);
	if (!(iParam3 && iParam0 == 3))
	{
		__LIB_22__::func_216(&(Local_136.f_85[iParam0 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1));
	}
	if (!(iParam3 && iParam0 == 2))
	{
		__LIB_22__::func_216(&(Local_136.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 - 13));
	}
	__LIB_22__::func_216(&(Local_136.f_85[iParam0 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1));
	__LIB_22__::func_216(&(Local_136.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 13) + 1);
	__LIB_22__::func_216(&(Local_136.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 1));
	__LIB_22__::func_216(&(Local_136.f_85[iParam0 /*11*/][0 /*5*/]), iVar0 + 1);
	if (!(iParam3 && iParam0 == 1))
	{
		__LIB_22__::func_216(&(Local_136.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 + 13 - 1));
	}
	if (!(iParam3 && iParam0 == 0))
	{
		__LIB_22__::func_216(&(Local_136.f_85[iParam0 /*11*/][1 /*5*/]), iVar0 + 13);
	}
	Local_136[iParam1 /*5*/][iParam2] = iParam0;
}

int func_90(int iParam0)//Position - 0x3369
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 3;
		case 3:
			return 3;
		default:
	}
	return -1;
}

int func_91(int iParam0)//Position - 0x33A1
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 5;
		case 2:
			return 0;
		case 3:
			return 5;
		default:
	}
	return -1;
}

void func_92()//Position - 0x33D9
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_175[iVar0 /*37*/].f_25)
		{
		}
		else
		{
			if (Local_173[iVar0 /*9*/].f_6 == -1)
			{
				bVar2 = false;
			}
			else if (Local_173[iVar0 /*9*/] == 0)
			{
				bVar2 = false;
			}
			else
			{
				iVar1++;
				iVar0++;
			}
			if (!bVar2)
			{
				if (__LIB_0__::func_649(&(Local_135.f_314)))
				{
					__LIB_0__::func_579(&(Local_135.f_314));
				}
				return;
			}
			if (iVar1 <= 1)
			{
				if (__LIB_0__::func_649(&(Local_135.f_314)))
				{
					__LIB_0__::func_579(&(Local_135.f_314));
				}
				return;
			}
			if (!__LIB_0__::func_649(&(Local_135.f_314)))
			{
				__LIB_0__::func_495(&(Local_135.f_314), 0, 0);
				return;
			}
			else if (!func_93(&(Local_135.f_314), 1500, 0))
			{
				return;
			}
			Local_136.f_138 = iVar1 + 1;
			func_63(2);
		}
int func_93(var uParam0, int iParam1, bool bParam2)//Position - 0x34BC
{
	if (iParam1 == -1)
	{
		return 1;
	}
	__LIB_0__::func_580(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_98()//Position - 0x35B5
{
	func_99();
	func_63(1);
}

void func_99()//Position - 0x35C6
{
	int iVar0;
	int iVar1;
	int iVar2[24];
	int iVar3;
	int iVar4;
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	MISC::SET_RANDOM_SEED(NETWORK::GET_NETWORK_TIME());
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 24);
		iVar3 = iVar2[iVar0];
		iVar2[iVar0] = iVar2[iVar1];
		iVar2[iVar1] = iVar3;
		iVar0++;
	}
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_136.f_31[iVar0 /*5*/][iVar1] = iVar2[iVar4];
			iVar4++;
			iVar1++;
		}
		iVar0++;
	}
}

void func_100()//Position - 0x367C
{
	switch (Local_135.f_140)
	{
		case 0:
			func_337();
			break;
		case 1:
			func_334();
			break;
		case 2:
			func_333();
			break;
		case 3:
			func_328();
			break;
		case 4:
			func_327();
			break;
		case 5:
			func_321();
			break;
		case 6:
			func_319();
			break;
		case 7:
			func_194();
			break;
		case 8:
			func_150();
			break;
		case 9:
			func_129();
			break;
		case 10:
			func_101();
			break;
		case 11:
			func_11();
			break;
		case 12:
			break;
	}
}

void func_101()//Position - 0x3732
{
	func_125();
	func_102();
}

void func_102()//Position - 0x3742
{
	var uVar0[4];
	float fVar1;
	int iVar2;
	int iVar3;
	func_124();
	__LIB_26__::func_457("MPArcadeCabinetGridHUD", "lbd", 0.5f, 0.5f, 0.66041666f, 0.94814813f, 0f, Local_135.f_107.f_17);
	HUD::SET_TEXT_SCALE(1f, 1f);
	HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_LBD_T");
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635((0.5f + 0.001041667f)), (0.15f + 0.003703704f), 0);
	HUD::SET_TEXT_SCALE(1f, 1f);
	HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_LBD_T");
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), 0.15f, 0);
	fVar1 = 0.22f;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		__LIB_26__::func_458(Local_136.f_165[iVar2 /*3*/], &uVar0);
		iVar3 = 255;
		if (Local_136.f_165[iVar2 /*3*/].f_2 == Local_135.f_178)
		{
			iVar3 = SYSTEM::ROUND(MISC::ABSF((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0.5f)) * 80f))) + 175;
		}
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar3);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(__LIB_11__::func_635(0f), __LIB_11__::func_635((0.37f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_118(iVar2));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), (fVar1 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_135.f_107[uVar0[3] /*4*/], Local_135.f_107[uVar0[3] /*4*/].f_1, Local_135.f_107[uVar0[3] /*4*/].f_2, iVar3);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(__LIB_11__::func_635(0f), __LIB_11__::func_635(0.37f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_118(iVar2));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), fVar1, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar3);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(__LIB_11__::func_635(0f), __LIB_11__::func_635((0.41354167f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[0]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), (fVar1 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_135.f_107[uVar0[3] /*4*/], Local_135.f_107[uVar0[3] /*4*/].f_1, Local_135.f_107[uVar0[3] /*4*/].f_2, iVar3);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(__LIB_11__::func_635(0f), __LIB_11__::func_635(0.41354167f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[0]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), fVar1, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar3);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(__LIB_11__::func_635(0f), __LIB_11__::func_635((0.44114584f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[1]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), (fVar1 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_135.f_107[uVar0[3] /*4*/], Local_135.f_107[uVar0[3] /*4*/].f_1, Local_135.f_107[uVar0[3] /*4*/].f_2, iVar3);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(__LIB_11__::func_635(0f), __LIB_11__::func_635(0.44114584f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[1]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), fVar1, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar3);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(__LIB_11__::func_635(0f), __LIB_11__::func_635((0.46875f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[2]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), (fVar1 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_135.f_107[uVar0[3] /*4*/], Local_135.f_107[uVar0[3] /*4*/].f_1, Local_135.f_107[uVar0[3] /*4*/].f_2, iVar3);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(__LIB_11__::func_635(0f), __LIB_11__::func_635(0.46875f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[2]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), fVar1, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar3);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(__LIB_11__::func_635(0f), __LIB_11__::func_635((0.695f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
		HUD::ADD_TEXT_COMPONENT_INTEGER(Local_136.f_165[iVar2 /*3*/].f_1);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), (fVar1 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_135.f_107[uVar0[3] /*4*/], Local_135.f_107[uVar0[3] /*4*/].f_1, Local_135.f_107[uVar0[3] /*4*/].f_2, iVar3);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(__LIB_11__::func_635(0f), __LIB_11__::func_635(0.695f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
		HUD::ADD_TEXT_COMPONENT_INTEGER(Local_136.f_165[iVar2 /*3*/].f_1);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), fVar1, 0);
		fVar1 = (fVar1 + 0.06f);
		iVar2++;
	}
	func_104();
	func_103();
}

void func_103()//Position - 0x3C5C
{
	__LIB_26__::func_457("MPArcadeCabinetGridTiles", "facade", 0.5f, 0.5f, 1f, 1f, 0f, Local_135.f_107.f_17);
}

void func_104()//Position - 0x3C84
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_105(iVar0);
		iVar0++;
	}
}

void func_105(int iParam0)//Position - 0x3CA5
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<4> Var3;
	float fVar4;
	if (!Local_176[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { __LIB_20__::func_590() };
	Var3.f_3 = 255;
	if (Local_176[iParam0 /*17*/].f_3)
	{
		Var0.f_0 = -Var0.f_0;
	}
	Var1 = { __LIB_20__::func_589() };
	if (!Local_176[iParam0 /*17*/].f_2)
	{
		if (Local_176[iParam0 /*17*/].f_4 > 0)
		{
			Var1.f_1 = (Var1.f_1 - ((Var0.f_1 * (IntToFloat(Local_176[iParam0 /*17*/].f_4) % (IntToFloat(Local_176[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_176[iParam0 /*17*/].f_6) * 1f)));
			Var2 = { Var1 };
			Var2.f_1 = (Var2.f_1 + Var0.f_1);
		}
		else if (Local_176[iParam0 /*17*/].f_7 > 0)
		{
			Local_176[iParam0 /*17*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_176[iParam0 /*17*/].f_7);
			Local_176[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_176[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_176[iParam0 /*17*/].f_4 = Local_176[iParam0 /*17*/].f_6;
		Local_176[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_176[iParam0 /*17*/].f_1)
	{
		fVar4 = (SYSTEM::TO_FLOAT(Local_176[iParam0 /*17*/].f_5) / SYSTEM::TO_FLOAT(Local_176[iParam0 /*17*/].f_8));
		Var3.f_0 = __LIB_11__::func_95(Local_176[iParam0 /*17*/].f_9, Local_176[iParam0 /*17*/].f_13, fVar4);
		Var3.f_1 = __LIB_11__::func_95(Local_176[iParam0 /*17*/].f_9.f_1, Local_176[iParam0 /*17*/].f_13.f_1, fVar4);
		Var3.f_2 = __LIB_11__::func_95(Local_176[iParam0 /*17*/].f_9.f_2, Local_176[iParam0 /*17*/].f_13.f_2, fVar4);
		Var3.f_3 = __LIB_11__::func_95(Local_176[iParam0 /*17*/].f_9.f_3, Local_176[iParam0 /*17*/].f_13.f_3, fVar4);
	}
	else
	{
		Var3 = { Local_176[iParam0 /*17*/].f_9 };
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_11__::func_636(iParam0)))
	{
		__LIB_37__::func_167(Var1, Var0, Var3);
	}
	else
	{
		__LIB_35__::func_201(__LIB_11__::func_632(iParam0), __LIB_11__::func_636(iParam0), Var1, Var0, 0f, Var3);
	}
	if (!Local_176[iParam0 /*17*/].f_2 && Local_176[iParam0 /*17*/].f_4 > 0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_11__::func_636(0)))
		{
			__LIB_37__::func_167(Var2, Var0, Var3);
		}
		else
		{
			__LIB_35__::func_201(__LIB_11__::func_632(iParam0), __LIB_11__::func_636(iParam0), Var2, Var0, 0f, Var3);
		}
	}
	Local_176[iParam0 /*17*/].f_5 = (Local_176[iParam0 /*17*/].f_5 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_176[iParam0 /*17*/].f_5 < 0)
	{
		Local_176[iParam0 /*17*/].f_5 = (Local_176[iParam0 /*17*/].f_5 + Local_176[iParam0 /*17*/].f_8);
	}
	Local_176[iParam0 /*17*/].f_4 = (Local_176[iParam0 /*17*/].f_4 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_176[iParam0 /*17*/].f_4 < 0)
	{
		Local_176[iParam0 /*17*/].f_4 = 0;
	}
}

char* func_118(int iParam0)//Position - 0x43CF
{
	switch (iParam0)
	{
		case 0:
			return "SCGW_1ST";
		case 1:
			return "SCGW_2ND";
		case 2:
			return "SCGW_3RD";
		case 3:
			return "SCGW_4TH";
		case 4:
			return "SCGW_5TH";
		case 5:
			return "SCGW_6TH";
		case 6:
			return "SCGW_7TH";
		case 7:
			return "SCGW_8TH";
		case 8:
			return "SCGW_9TH";
		case 9:
			return "SCGW_10TH";
		default:
	}
	return "SCGW_URD";
}

void func_124()//Position - 0x4592
{
	__LIB_32__::func_726(__LIB_3__::func_990(0.5f, 0.5f), __LIB_3__::func_990(1f, 1f), Local_135.f_107.f_25);
}

void func_125()//Position - 0x45BA
{
	struct<2> Var0;
	MISC::SET_BIT(&(Local_135.f_417), 0);
	StringCopy(&Var0, "SC_H_LBD_3", 16);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		StringConCat(&Var0, "PC", 16);
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_16();
	func_126(&Var0);
}

void func_126(char* sParam0)//Position - 0x45FA
{
	Local_135.f_442 = MISC::GET_HASH_KEY(sParam0);
	__LIB_0__::func_187(sParam0);
}

int func_128(char* sParam0)//Position - 0x4629
{
	if (Local_135.f_442 == MISC::GET_HASH_KEY(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_129()//Position - 0x4644
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[0];
	int iVar6;
	if (!__LIB_4__::func_311())
	{
		func_11();
	}
	func_137();
	func_136();
	if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(Local_135.f_436))
	{
		if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(Local_135.f_436))
		{
			return;
		}
		if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(Local_135.f_436))
		{
			func_134();
			func_15(10);
			func_133("Frontend_Change_Screen");
			Local_135.f_436 = 0;
		}
		else
		{
			func_133("Frontend_Change_Letter");
			Local_135.f_432 = 0;
			__LIB_26__::func_458(0, &iVar0);
			iVar0[3] = Local_173[Local_135.f_178 /*9*/].f_6;
			Local_173[Local_135.f_178 /*9*/].f_7 = __LIB_20__::func_591(&iVar0);
			Local_135.f_436 = 0;
		}
		return;
	}
	iVar1 = 227;
	iVar2 = 226;
	iVar3 = 191;
	iVar4 = 194;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar3 = 237;
		iVar4 = 238;
		iVar1 = 188;
		iVar2 = 187;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar3))
	{
		Local_135.f_432++;
		if (Local_135.f_432 == 3)
		{
			__LIB_26__::func_458(Local_173[Local_135.f_178 /*9*/].f_7, &iVar0);
			StringCopy(&cVar5, __LIB_11__::func_96(iVar0[0]), 4);
			StringConCat(&cVar5, __LIB_11__::func_96(iVar0[1]), 4);
			StringConCat(&cVar5, __LIB_11__::func_96(iVar0[2]), 4);
			if (SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&cVar5, &(Local_135.f_436)))
			{
				func_133("Frontend_Entered_Score");
			}
		}
		else if (func_130(Local_135.f_178) == 99)
		{
			func_133("Frontend_Change_Screen");
			func_15(10);
		}
		return;
	}
	if (func_130(Local_135.f_178) == 99)
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar4))
	{
		if (Local_135.f_432 > 0)
		{
			Local_135.f_432 = (Local_135.f_432 - 1);
		}
		return;
	}
	iVar6 = 0;
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
	{
		iVar6 = 1;
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2))
	{
		iVar6 = -1;
	}
	if (iVar6 == 0)
	{
		return;
	}
	func_133("Frontend_Change_Letter");
	__LIB_26__::func_458(Local_173[Local_135.f_178 /*9*/].f_7, &iVar0);
	iVar0[Local_135.f_432] = (iVar0[Local_135.f_432] + iVar6);
	if (iVar0[Local_135.f_432] >= 36)
	{
		iVar0[Local_135.f_432] = 0;
	}
	else if (iVar0[Local_135.f_432] < 0)
	{
		iVar0[Local_135.f_432] = 35;
	}
	Local_173[Local_135.f_178 /*9*/].f_7 = __LIB_20__::func_591(&iVar0);
}

int func_130(int iParam0)//Position - 0x4869
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_136.f_165[iVar0 /*3*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

void func_133(char* sParam0)//Position - 0x48FA
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, sParam0, "dlc_vw_am_tw_frontend_sounds", false);
}

void func_134()//Position - 0x490E
{
	struct<2> Var0;
	int iVar1;
	Var0.f_0 = -658279885;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar1 = __LIB_2__::func_31(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iVar1);
	}
}

void func_136()//Position - 0x499E
{
	struct<2> Var0;
	MISC::SET_BIT(&(Local_135.f_417), 0);
	if (func_130(Local_135.f_178) == 99)
	{
		StringCopy(&Var0, "SC_H_LBD_2", 16);
	}
	else if (Local_135.f_432 == 2)
	{
		StringCopy(&Var0, "SC_H_LBD_1", 16);
	}
	else
	{
		StringCopy(&Var0, "SC_H_LBD_0", 16);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		StringConCat(&Var0, "PC", 16);
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_16();
	func_126(&Var0);
}

void func_137()//Position - 0x4A0A
{
	var uVar0[4];
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	func_124();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		func_139(iVar1, 1);
		if (Local_135.f_149[iVar1] == -1)
		{
		}
		else
		{
			Var2 = { func_138(iVar1) };
			iVar3 = func_130(Local_135.f_149[iVar1]);
			HUD::SET_TEXT_SCALE(1.1f, 1.1f);
			HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_118(iVar3));
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635((Var2.f_0 + 0.001041667f)), (0.205f + 0.003703704f), 0);
			HUD::SET_TEXT_SCALE(1.1f, 1.1f);
			HUD::SET_TEXT_COLOUR(Local_135.f_107[iVar1 /*4*/], Local_135.f_107[iVar1 /*4*/].f_1, Local_135.f_107[iVar1 /*4*/].f_2, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_118(iVar3));
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(Var2.f_0), 0.205f, 0);
			iVar4 = Local_173[Local_135.f_149[iVar1] /*9*/].f_8;
			HUD::SET_TEXT_SCALE(0.75f, 0.75f);
			HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635((Var2.f_0 + 0.001041667f)), (0.26f + 0.003703704f), 0);
			HUD::SET_TEXT_SCALE(0.75f, 0.75f);
			HUD::SET_TEXT_COLOUR(Local_135.f_107[iVar1 /*4*/], Local_135.f_107[iVar1 /*4*/].f_1, Local_135.f_107[iVar1 /*4*/].f_2, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(Var2.f_0), 0.26f, 0);
			if (Local_135.f_149[iVar1] != Local_135.f_178)
			{
			}
			else if (iVar3 >= 10)
			{
			}
			else
			{
				__LIB_26__::func_458(Local_173[Local_135.f_149[iVar1] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[0]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(((Var2.f_0 - 0.025f) + 0.001041667f)), (0.875f + 0.003703704f), 0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_135.f_432 == 0)
				{
					HUD::SET_TEXT_COLOUR(Local_135.f_107[iVar1 /*4*/], Local_135.f_107[iVar1 /*4*/].f_1, Local_135.f_107[iVar1 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[0]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635((Var2.f_0 - 0.025f)), 0.875f, 0);
				__LIB_26__::func_458(Local_173[Local_135.f_149[iVar1] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[1]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635((Var2.f_0 + 0.001041667f)), (0.875f + 0.003703704f), 0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_135.f_432 == 1)
				{
					HUD::SET_TEXT_COLOUR(Local_135.f_107[iVar1 /*4*/], Local_135.f_107[iVar1 /*4*/].f_1, Local_135.f_107[iVar1 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[1]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(Var2.f_0), 0.875f, 0);
				__LIB_26__::func_458(Local_173[Local_135.f_149[iVar1] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[2]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(((Var2.f_0 + 0.025f) + 0.001041667f)), (0.875f + 0.003703704f), 0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_135.f_432 == 2)
				{
					HUD::SET_TEXT_COLOUR(Local_135.f_107[iVar1 /*4*/], Local_135.f_107[iVar1 /*4*/].f_1, Local_135.f_107[iVar1 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_11__::func_96(uVar0[2]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635((Var2.f_0 + 0.025f)), 0.875f, 0);
			}
		}
		iVar1++;
	}
	func_104();
	func_103();
}

struct<2> func_138(int iParam0)//Position - 0x4E7A
{
	switch (iParam0)
	{
		case 0:
			return __LIB_3__::func_990(0.25520834f, 0.4564815f);
		case 1:
			return __LIB_3__::func_990(0.41822916f, 0.4564815f);
		case 2:
			return __LIB_3__::func_990(0.58177084f, 0.4564815f);
		case 3:
			return __LIB_3__::func_990(0.7447917f, 0.4564815f);
		default:
	}
	return __LIB_3__::func_990(0.5f, 0.5f);
}

void func_139(int iParam0, bool bParam1)//Position - 0x4EF3
{
	struct<2> Var0;
	struct<2> Var1;
	struct<4> Var2;
	struct<2> Var3;
	char cVar4[16];
	float fVar5;
	struct<4> Var6;
	Var0 = { func_138(iParam0) };
	Var1 = { func_146() };
	__LIB_26__::func_457(func_145(iParam0), func_144(iParam0), Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1, 0f, Local_135.f_107.f_17);
	if (Local_135.f_149[iParam0] == Local_135.f_178)
	{
		Var2 = { Local_135.f_107[iParam0 /*4*/] };
		if (Local_173[Local_135.f_178 /*9*/] != 1)
		{
			Var2.f_3 = SYSTEM::ROUND(MISC::TAN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.25f))) * 255;
		}
		Var3 = { func_143(iParam0) };
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "gang_lobby_player_highlight", Var3.f_0, Var3.f_1, 0.1625f, 0.051851854f, 0f, Var2);
	}
	if (Local_135.f_149[iParam0] != -1)
	{
		HUD::SET_TEXT_SCALE(0.5f, 0.5f);
		HUD::SET_TEXT_COLOUR(Local_135.f_107[iParam0 /*4*/], Local_135.f_107[iParam0 /*4*/].f_1, Local_135.f_107[iParam0 /*4*/].f_2, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(4);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		if (!func_142(iParam0))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_135.f_149[iParam0]))));
		}
		else
		{
			StringCopy(&cVar4, "Bot ", 16);
			switch (iParam0)
			{
				case 0:
					StringConCat(&cVar4, "Green" /* GXT: Green */, 16);
					break;
				case 1:
					StringConCat(&cVar4, "Purple" /* GXT: Schafter Purple */, 16);
					break;
				case 2:
					StringConCat(&cVar4, "Yellow" /* GXT: Yellow */, 16);
					break;
				case 3:
					StringConCat(&cVar4, "Blue" /* GXT: Blue */, 16);
					break;
			}
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar4);
		}
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(Var0.f_0), 0.845f, 0);
	}
	if (bParam1)
	{
		return;
	}
	if (Local_135.f_149[iParam0] != -1 && Local_173[Local_135.f_149[iParam0] /*9*/] == 1)
	{
		HUD::SET_TEXT_SCALE(0.95f, 0.95f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_R");
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635((Var0.f_0 + 0.001041667f)), (0.23f + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(0.95f, 0.95f);
		HUD::SET_TEXT_COLOUR(Local_135.f_107[iParam0 /*4*/], Local_135.f_107[iParam0 /*4*/].f_1, Local_135.f_107[iParam0 /*4*/].f_2, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_R");
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(Var0.f_0), 0.23f, 0);
	}
	if (Local_135.f_154[iParam0] != -2147483647 && (NETWORK::GET_NETWORK_TIME() - Local_135.f_154[iParam0]) <= 1000)
	{
		fVar5 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_135.f_154[iParam0])) / 1000f);
		Var6 = { Local_135.f_107[iParam0 /*4*/] };
		Var6.f_3 = SYSTEM::ROUND(func_140(125f, 0f, fVar5, 1));
		Var1.f_1 = (Var1.f_1 - 0.05f);
		Var0.f_1 = (Var0.f_1 + (0.05f / 2f));
		__LIB_32__::func_726(Var0, Var1, Var6);
	}
}

float func_140(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x51CF
{
	float fVar0;
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(__LIB_0__::func_407((3.1415927f * fParam2))) / 2f) + 0.5f);
			break;
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_140(fParam0, fParam1, fParam2, 0);
			break;
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_140(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

int func_142(int iParam0)//Position - 0x52F2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_175[iVar0 /*37*/].f_25)
		{
			if (Local_175[iVar0 /*37*/].f_6 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_143(int iParam0)//Position - 0x532B
{
	switch (iParam0)
	{
		case 0:
			return __LIB_3__::func_990(0.25520834f, 0.14351852f);
		case 1:
			return __LIB_3__::func_990(0.41822916f, 0.14351852f);
		case 2:
			return __LIB_3__::func_990(0.58177084f, 0.14351852f);
		case 3:
			return __LIB_3__::func_990(0.7447917f, 0.14351852f);
		default:
	}
	return __LIB_3__::func_990(0.5f, 0.5f);
}

char* func_144(int iParam0)//Position - 0x53A4
{
	if (Local_135.f_149[iParam0] == -1)
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_Off";
			case 1:
				return "Gang_Lobby_Purple_Off";
			case 2:
				return "Gang_Lobby_Yellow_Off";
			case 3:
				return "Gang_Lobby_Blue_Off";
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_On";
			case 1:
				return "Gang_Lobby_Purple_On";
			case 2:
				return "Gang_Lobby_Yellow_On";
			case 3:
				return "Gang_Lobby_Blue_On";
			}
		default:
	}
	return "INVALID GANG";
}

char* func_145(int iParam0)//Position - 0x5435
{
	if (Local_135.f_149[iParam0] != -1)
	{
		switch (iParam0)
		{
			case 0:
				return "MPArcadeCabinetGridPlayerGreen";
			case 1:
				return "MPArcadeCabinetGridPlayerPurple";
			case 2:
				return "MPArcadeCabinetGridPlayerYellow";
			case 3:
				return "MPArcadeCabinetGridPlayerBlue";
			}
		default:
	}
	return "MPArcadeCabinetGridHUD";
}

struct<2> func_146()//Position - 0x5483
{
	return __LIB_3__::func_990(0.1625f, 0.7777778f);
}

void func_150()//Position - 0x552C
{
	bool bVar0;
	bVar0 = func_64();
	if (bVar0)
	{
		func_192();
	}
	else
	{
		func_174();
	}
	func_171();
	if (Local_136.f_145 >= 6)
	{
		__LIB_31__::func_24(&(Local_135.f_428));
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
		}
		__LIB_31__::func_23(func_19(0));
		func_15(9);
		return;
	}
	if (Local_136.f_145 == 2 || Local_136.f_145 == 3)
	{
		__LIB_31__::func_24(&(Local_135.f_428));
		func_15(5);
		return;
	}
	func_169("Ambience", &(Local_135.f_428), __LIB_3__::func_990(-1f, -1f), 0);
	if (Global_1931416 != 4)
	{
		return;
	}
	if (bVar0)
	{
		if (Local_136.f_131[(Local_136.f_137 - 1)] != -1)
		{
			if (Local_136.f_131[(Local_136.f_137 - 1)] == Local_135.f_178)
			{
				func_168(7);
				func_164("Win", Local_135.f_178, &(Local_135.f_204[Local_135.f_178 /*19*/].f_6));
			}
			else
			{
				func_168(8);
				func_164("Lose_Game", Local_135.f_178, &(Local_135.f_204[Local_135.f_178 /*19*/].f_6));
			}
			func_163((16 + Local_173[Local_136.f_131[(Local_136.f_137 - 1)] /*9*/].f_6));
		}
	}
	else if (Local_136.f_130 != -1)
	{
		if (Local_136.f_130 == Local_135.f_178)
		{
			func_159();
			func_168(9);
			func_164("Win", Local_135.f_178, &(Local_135.f_204[Local_135.f_178 /*19*/].f_6));
		}
		else
		{
			func_168(10);
			func_164("Lose_Game", Local_135.f_178, &(Local_135.f_204[Local_135.f_178 /*19*/].f_6));
		}
		func_163((16 + Local_173[Local_136.f_130 /*9*/].f_6));
	}
	if ((!BitTest(Local_135.f_141, 2) && Local_136.f_131[(Local_136.f_137 - 1)] != -1) && Local_136.f_131[(Local_136.f_137 - 1)] == Local_135.f_178)
	{
		if (!__LIB_0__::func_421(247, -1))
		{
			__LIB_6__::func_796(247, 1, -1, 1);
			__LIB_19__::func_765(12, "CLO_VWM_D_1_1" /* GXT: Street Crimes Action Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
			__LIB_0__::func_521(27193, 1, -1);
			func_151("SCGW_CH_4", 7500, 1);
		}
	}
}

void func_151(char* sParam0, int iParam1, int iParam2)//Position - 0x5760
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_16();
	}
	Local_135.f_418 = (NETWORK::GET_NETWORK_TIME() + iParam1);
	Local_135.f_419 = sParam0;
	Local_135.f_420 = -1;
	Local_135.f_421 = iParam2;
}

void func_159()//Position - 0x591B
{
	int iVar0;
	switch (Local_173[Local_135.f_178 /*9*/].f_6)
	{
		case 0:
			iVar0 = __LIB_0__::func_534(8355, -1, 0) + 1;
			__LIB_0__::func_427(8355, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_27246 /* Tunable: 554611933 */)
			{
				__LIB_0__::func_521(27189, 1, -1);
				__LIB_19__::func_765(12, "CLO_VWM_D_1_3" /* GXT: Street Crimes Hoods Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_0", Global_262145.f_27246 /* Tunable: 554611933 */, 7500, 1);
			}
			break;
		case 1:
			iVar0 = __LIB_0__::func_534(8356, -1, 0) + 1;
			__LIB_0__::func_427(8356, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_27246 /* Tunable: 554611933 */)
			{
				__LIB_0__::func_521(27190, 1, -1);
				__LIB_19__::func_765(12, "CLO_VWM_D_1_4" /* GXT: Street Crimes Punks Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_1", Global_262145.f_27246 /* Tunable: 554611933 */, 7500, 1);
			}
			break;
		case 2:
			iVar0 = __LIB_0__::func_534(8357, -1, 0) + 1;
			__LIB_0__::func_427(8357, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_27246 /* Tunable: 554611933 */)
			{
				__LIB_0__::func_521(27191, 1, -1);
				__LIB_19__::func_765(12, "CLO_VWM_D_1_5" /* GXT: Street Crimes Yokels Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_2", Global_262145.f_27246 /* Tunable: 554611933 */, 7500, 1);
			}
			break;
		case 3:
			iVar0 = __LIB_0__::func_534(8358, -1, 0) + 1;
			__LIB_0__::func_427(8358, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_27246 /* Tunable: 554611933 */)
			{
				__LIB_0__::func_521(27192, 1, -1);
				__LIB_19__::func_765(12, "CLO_VWM_D_1_2" /* GXT: Street Crimes Bikers Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_3", Global_262145.f_27246 /* Tunable: 554611933 */, 7500, 1);
			}
			break;
	}
}

void func_160(char* sParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5ACB
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_16();
	}
	Local_135.f_418 = (NETWORK::GET_NETWORK_TIME() + iParam2);
	Local_135.f_420 = uParam1;
	Local_135.f_419 = sParam0;
	Local_135.f_421 = iParam3;
}

void func_163(int iParam0)//Position - 0x5B6C
{
	Global_1931416.f_1 = iParam0;
}

void func_164(char* sParam0, int iParam1, var uParam2)//Position - 0x5B7C
{
	float fVar0;
	fVar0 = __LIB_35__::func_225(Local_135.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(*uParam2, sParam0, func_165(Local_173[iParam1 /*9*/].f_6), false);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam2, "Screen_Position", fVar0);
}

char* func_165(int iParam0)//Position - 0x5BC6
{
	switch (iParam0)
	{
		case 0:
			return "dlc_vw_am_tw_gang_Hoods_sounds";
		case 1:
			return "dlc_vw_am_tw_gang_Punks_sounds";
		case 2:
			return "dlc_vw_am_tw_gang_Yokels_sounds";
		case 3:
			return "dlc_vw_am_tw_gang_Bikers_sounds";
		default:
	}
	return "INVALID GANG";
}

void func_168(int iParam0)//Position - 0x5C50
{
	Global_1931416 = iParam0;
}

void func_169(char* sParam0, var uParam1, struct<2> Param2, bool bParam3)//Position - 0x5C5E
{
	float fVar0;
	fVar0 = __LIB_35__::func_225(Param2);
	if (bParam3)
	{
	}
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, "dlc_vw_am_tw_global_sounds", false);
	}
	if (bParam3)
	{
		AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", fVar0);
	}
}

void func_171()//Position - 0x5CD5
{
	struct<2> Var0;
	if (Local_135.f_418 == -2147483647)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_135.f_419))
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_135.f_418)
	{
		func_16();
		return;
	}
	MISC::SET_BIT(&(Local_135.f_417), 0);
	StringCopy(&Var0, Local_135.f_419, 16);
	if (Local_135.f_420 == -1)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && !Local_135.f_421)
		{
			StringConCat(&Var0, "_PC", 16);
		}
	}
	else
	{
		if (func_128(&Var0))
		{
			return;
		}
		func_172(&Var0, Local_135.f_420);
		return;
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_126(&Var0);
}

void func_172(char* sParam0, int iParam1)//Position - 0x5D75
{
	Local_135.f_442 = MISC::GET_HASH_KEY(sParam0);
	__LIB_4__::func_67(sParam0, iParam1, -1);
}

void func_174()//Position - 0x5DAE
{
	func_124();
	func_188();
	func_182();
	func_180();
	func_175();
	func_104();
	func_103();
}

void func_175()//Position - 0x5DD2
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char cVar6[16];
	__LIB_32__::func_726(__LIB_3__::func_990(0.5f, (0.069444f + 0.0356482f)), __LIB_3__::func_990(0.658333f, 0.071296f), Local_135.f_107.f_21);
	__LIB_32__::func_726(__LIB_3__::func_990(0.5f, (0.069444f + 0.072685f)), __LIB_3__::func_990(0.658333f, 0.002778f), Local_135.f_107.f_25);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_177(iVar0, Local_135.f_149[iVar0]);
		iVar0++;
	}
	fVar1 = ((SYSTEM::TO_FLOAT((Local_136.f_138 - 1)) / 2f) * -0.013541334f);
	iVar0 = 0;
	while (iVar0 <= (Local_136.f_138 - 1))
	{
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "hud_rounds", ((fVar1 + 0.5f) + (0.013541333f * IntToFloat(iVar0))), (((0.069444f + -0.00162963f) + (0.024074258f / 2f)) + 0.00462963f), 0.013541333f, 0.024074258f, 0f, func_176(iVar0));
		iVar0++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (Local_136.f_145 == 4 && !Local_136.f_162)
	{
		iVar2 = ((Local_136.f_146 + 120000) - NETWORK::GET_NETWORK_TIME());
	}
	iVar3 = (iVar2 / 60000);
	iVar4 = ((iVar2 / 1000) % 60);
	HUD::SET_TEXT_SCALE(1f, 1f);
	if (iVar2 < 10000 && Local_136.f_145 == 4)
	{
		if (!BitTest(Local_135.f_429, 5))
		{
			func_133("Frontend_Countdown_10s");
			MISC::SET_BIT(&(Local_135.f_429), 5);
		}
		iVar5 = SYSTEM::ROUND((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * (0.5058f / 2f))) * 255f));
		if (iVar5 > 51)
		{
			iVar5 = 255;
		}
		else
		{
			iVar5 = 0;
		}
		HUD::SET_TEXT_COLOUR(255, 0, 0, iVar5);
	}
	else if (iVar2 < 30000 && Local_136.f_145 == 4)
	{
		HUD::SET_TEXT_COLOUR(255, 0, 0, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	}
	HUD::SET_TEXT_DROP_SHADOW();
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	StringCopy(&cVar6, "SCGW_ROUND_T", 16);
	if (iVar4 < 10)
	{
		StringConCat(&cVar6, "_S", 16);
	}
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(0.5f, (0.083f + 0.00462963f), 0);
}

struct<4> func_176(int iParam0)//Position - 0x5FFB
{
	if (Local_136.f_131[iParam0] == -1)
	{
		return Local_135.f_107.f_17;
	}
	return Local_135.f_107[Local_173[Local_136.f_131[iParam0] /*9*/].f_6 /*4*/];
}

void func_177(int iParam0, int iParam1)//Position - 0x6036
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	fVar1 = func_179(iParam0);
	if (iParam1 == -1)
	{
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "hud_insert_coin", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_135.f_107[iParam0 /*4*/]);
	}
	else if (func_68(iParam1))
	{
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "hud_wasted", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_135.f_107.f_29);
	}
	else
	{
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "hud_frame", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_135.f_107[iParam0 /*4*/]);
	}
	StringCopy(&Var2, "hud_head_", 64);
	StringConCat(&Var2, Local_135.f_422[iParam0], 64);
	__LIB_26__::func_457("MPArcadeCabinetGridHUD", &Var2, (fVar1 + (0.033333f / 2f)), (0.069444f + 0.04166683f), 0.033333f, 0.059259f, 0f, Local_135.f_107.f_17);
	if (iParam1 == -1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (NETWORK::NETWORK_IS_PLAYER_TALKING(iVar3))
		{
			__LIB_26__::func_457("MPArcadeCabinetGridHUD", "hud_mic", ((fVar1 + 0.026563f) + (0.008333f / 2f)), ((0.069444f + 0.04722233f) + (0.014815f / 2f)), 0.008333f, 0.014815f, 0f, Local_135.f_107[iParam0 /*4*/]);
		}
	}
	else if (Local_175[iParam1 /*37*/].f_25)
	{
	}
	if (Local_173[iParam1 /*9*/] == 2)
	{
		iVar4 = (Local_135.f_204[iParam1 /*19*/].f_9 - 1);
		iVar0 = 0;
		while (iVar0 <= iVar4)
		{
			if (iVar0 >= Local_173[iParam1 /*9*/].f_2 && Local_135.f_140 == 7)
			{
				__LIB_26__::func_457("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0.035417f) + (0.00625f * IntToFloat(iVar0))) + (0.00625f / 2f)), ((0.069444f + 0.012037333f) + (0.059259f / 2f)), 0.00625f, 0.059259f, 0f, Local_135.f_107.f_29);
			}
			else
			{
				__LIB_26__::func_457("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0.035417f) + (0.00625f * IntToFloat(iVar0))) + (0.00625f / 2f)), ((0.069444f + 0.012037333f) + (0.059259f / 2f)), 0.00625f, 0.059259f, 0f, func_178(Local_135.f_107[iParam0 /*4*/], (SYSTEM::TO_FLOAT(iVar0) / 7f)));
			}
			iVar0++;
		}
		HUD::SET_TEXT_SCALE(1f, 1f);
		if (((iLocal_172[iParam0] == 0 && Local_136.f_145 == 4) && iParam0 == Local_173[Local_135.f_178 /*9*/].f_6) && SYSTEM::SIN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.5058f)) > 0.5f)
		{
			HUD::SET_TEXT_COLOUR(Local_135.f_107.f_29, Local_135.f_107.f_29.f_1, Local_135.f_107.f_29.f_2, Local_135.f_107.f_29.f_3);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(Local_135.f_107[iParam0 /*4*/], Local_135.f_107[iParam0 /*4*/].f_1, Local_135.f_107[iParam0 /*4*/].f_2, Local_135.f_107[iParam0 /*4*/].f_3);
		}
		HUD::SET_TEXT_DROP_SHADOW();
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_SCORE");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_172[iParam0]);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635((fVar1 + 0.105f)), 0.083f, 0);
	}
}

struct<4> func_178(struct<4> Param0, float fParam1)//Position - 0x637C
{
	Param0.f_0 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_0)) * fParam1) + IntToFloat(Param0.f_0)));
	Param0.f_1 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_1)) * fParam1) + IntToFloat(Param0.f_1)));
	Param0.f_2 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_2)) * fParam1) + IntToFloat(Param0.f_2)));
	return Param0;
}

float func_179(int iParam0)//Position - 0x63CD
{
	switch (iParam0)
	{
		case 0:
			return 0.195313f;
		case 1:
			return 0.325521f;
		case 2:
			return 0.547396f;
		case 3:
			return 0.677604f;
		default:
	}
	return 0f;
}

void func_180()//Position - 0x6415
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	int iVar3;
	char cVar4[64];
	struct<4> Var5;
	struct<8> Var6;
	if (Local_136.f_130 == -1)
	{
		return;
	}
	func_181(Local_135.f_107[Local_173[Local_136.f_130 /*9*/].f_6 /*4*/], 102);
	bVar0 = false;
	bVar1 = true;
	Var2 = { __LIB_3__::func_990(0.5f, (0.5f + -0.005f)) };
	iVar3 = 255;
	StringCopy(&cVar4, "text_gang_", 64);
	StringConCat(&cVar4, Local_135.f_422[Local_173[Local_136.f_130 /*9*/].f_6], 64);
	StringConCat(&cVar4, "_", 64);
	if (Local_135.f_415 < 4)
	{
		Var2.f_1 = (Var2.f_1 + (-0.05f / IntToFloat(Local_135.f_415 + 1)));
		bVar1 = false;
		Local_135.f_415 = (Local_135.f_415 + Local_135.f_412);
	}
	else if (Local_135.f_415 < 12)
	{
		iVar3 = SYSTEM::FLOOR(((255f / 8f) * IntToFloat((8 - (Local_135.f_415 - 4)))));
		bVar0 = true;
		bVar1 = false;
		Local_135.f_415 = (Local_135.f_415 + Local_135.f_412);
	}
	else if (Local_135.f_415 < 22)
	{
		if (((Local_135.f_415 + 1 - 4) - 8) < 10)
		{
			StringConCat(&cVar4, "0", 64);
		}
		StringIntConCat(&cVar4, ((Local_135.f_415 + 1 - 4) - 8), 64);
		Local_135.f_415 = (Local_135.f_415 + Local_135.f_414);
	}
	else
	{
		StringIntConCat(&cVar4, 10, 64);
	}
	if (bVar0)
	{
		Var5 = { Local_135.f_107.f_17 };
		Var5.f_3 = iVar3;
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "text_bkgd_blur", Var2.f_0, Var2.f_1, 0.3125f, 0.14814815f, 0f, Var5);
	}
	__LIB_26__::func_457("MPArcadeCabinetGridHUD", "text_winner", Var2.f_0, Var2.f_1, 0.3125f, 0.14814815f, 0f, Local_135.f_107.f_17);
	if (bVar1)
	{
		StringCopy(&Var6, "MPArcadeCabinetGridPlayer", 64);
		StringConCat(&Var6, Local_135.f_422[Local_173[Local_136.f_130 /*9*/].f_6], 64);
		__LIB_26__::func_457(&Var6, &cVar4, Var2.f_0, (Var2.f_1 + 0.074074075f), 0.3125f, 0.14814815f, 0f, Local_135.f_107[Local_173[Local_136.f_130 /*9*/].f_6 /*4*/]);
	}
}

void func_181(struct<4> Param0, int iParam1)//Position - 0x6600
{
	Param0.f_3 = iParam1;
	__LIB_32__::func_726(__LIB_3__::func_990(0.5f, 0.5f), __LIB_3__::func_990(1f, 1f), Param0);
}

void func_182()//Position - 0x662A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	struct<2> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<4> Var12;
	int iVar13;
	int iVar14;
	float fVar15;
	struct<2> Var16;
	struct<2> Var17;
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar3 = func_71(iVar0, iVar1);
			if (iVar0 + 1 < 13)
			{
				iVar4 = func_71(iVar0 + 1, iVar1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (__LIB_22__::func_217(&(Local_136.f_85[iVar2 /*11*/][1 /*5*/]), iVar3))
					{
						Var5 = { __LIB_14__::func_344(__LIB_3__::func_989(func_187(iVar3), func_187(iVar4)), 2f) };
						__LIB_26__::func_457("MPArcadeCabinetGrid", "player_trail", Var5.f_0, Var5.f_1, 0.052083332f, 0.02962963f, 0f, Local_135.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (iVar1 + 1 < 9)
			{
				iVar6 = func_71(iVar0, iVar1 + 1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (__LIB_22__::func_217(&(Local_136.f_85[iVar2 /*11*/][0 /*5*/]), iVar3))
					{
						Var7 = { __LIB_14__::func_344(__LIB_3__::func_989(func_187(iVar3), func_187(iVar6)), 2f) };
						__LIB_26__::func_457("MPArcadeCabinetGrid", "player_trail", Var7.f_0, Var7.f_1, 0.052083332f, 0.02962963f, 90f, Local_135.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	Var12.f_3 = 255;
	iVar13 = 0;
	iVar13 = 0;
	while (iVar13 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar13)) && !Local_175[iVar13 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar13 /*9*/].f_6 == -1)
		{
		}
		else if (Local_174[iVar13 /*16*/] == Local_174[iVar13 /*16*/].f_1)
		{
		}
		else
		{
			func_184(Local_174[iVar13 /*16*/], &iVar8, &iVar9);
			func_184(Local_174[iVar13 /*16*/].f_1, &iVar10, &iVar11);
			iVar14 = -1;
			Var12 = { Local_135.f_107[Local_173[iVar13 /*9*/].f_6 /*4*/] };
			fVar15 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_174[iVar13 /*16*/].f_2)) / SYSTEM::TO_FLOAT(func_183(iVar13)));
			if (fVar15 > 1.2f)
			{
			}
			else
			{
				Var12.f_3 = SYSTEM::ROUND((255f * func_140(0f, 1f, fVar15, 6)));
				if (iVar10 != iVar8)
				{
					if (iVar10 > iVar8)
					{
						iVar14 = Local_174[iVar13 /*16*/];
					}
					else
					{
						iVar14 = func_71((iVar8 - 1), iVar9);
					}
					if (__LIB_22__::func_217(&(Local_136.f_85[Local_173[iVar13 /*9*/].f_6 /*11*/][1 /*5*/]), iVar14))
					{
					}
					else
					{
						Var16 = { __LIB_14__::func_344(__LIB_3__::func_989(func_187(Local_174[iVar13 /*16*/].f_1), func_187(Local_174[iVar13 /*16*/])), 2f) };
						__LIB_26__::func_457("MPArcadeCabinetGrid", "player_trail", Var16.f_0, Var16.f_1, 0.052083332f, 0.02962963f, 0f, Var12);
						Jump @804; //curOff = 660
						if (iVar11 != iVar9)
						{
							if (iVar11 > iVar9)
							{
								iVar14 = Local_174[iVar13 /*16*/];
							}
							else
							{
								iVar14 = func_71(iVar8, (iVar9 - 1));
							}
							if (__LIB_22__::func_217(&(Local_136.f_85[Local_173[iVar13 /*9*/].f_6 /*11*/][0 /*5*/]), iVar14))
							{
							}
							else
							{
								Var17 = { __LIB_14__::func_344(__LIB_3__::func_989(func_187(Local_174[iVar13 /*16*/].f_1), func_187(Local_174[iVar13 /*16*/])), 2f) };
								__LIB_26__::func_457("MPArcadeCabinetGrid", "player_trail", Var17.f_0, Var17.f_1, 0.052083332f, 0.02962963f, 90f, Var12);
							}
						}
					}
					iVar13++;
				}
int func_183(int iParam0)//Position - 0x695A
{
	return SYSTEM::ROUND((700f * Local_173[iParam0 /*9*/].f_1));
}

void func_184(int iParam0, int iParam1, int iParam2)//Position - 0x6975
{
	*iParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 13f));
	*iParam1 = (iParam0 - *iParam2 * 13);
}

struct<2> func_187(int iParam0)//Position - 0x69D9
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	func_184(iParam0, &iVar0, &iVar1);
	Var2.f_0 = (0.13802066f + (0.0520835f * IntToFloat(iVar0 + 1)));
	Var2.f_1 = (0.06851837f + (0.0925925f * IntToFloat(iVar1 + 1)));
	return Var2;
}

void func_188()//Position - 0x6A17
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	struct<2> Var8;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&Var2, "top_down_tile_", 64);
			iVar3 = Local_136.f_31[iVar0 /*5*/][iVar1] + 1;
			StringIntConCat(&Var2, iVar3, 64);
			Var4 = { func_191(iVar0, iVar1) };
			__LIB_26__::func_457("MPArcadeCabinetGridTiles", &Var2, Var4.f_0, Var4.f_1, 0.104167f, 0.185185f, 0f, Local_135.f_107.f_17);
			func_189(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = -1;
	while (iVar0 <= 6)
	{
		Var5 = { func_191(iVar0, -1) };
		__LIB_26__::func_457("MPArcadeCabinetGridTiles", "top_down_tile_1", Var5.f_0, Var5.f_1, 0.104167f, 0.185185f, 0f, Local_135.f_107.f_17);
		Var6 = { func_191(iVar0, 4) };
		__LIB_26__::func_457("MPArcadeCabinetGridTiles", "top_down_tile_1", Var6.f_0, Var6.f_1, 0.104167f, 0.185185f, 0f, Local_135.f_107.f_17);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Var7 = { func_191(-1, iVar0) };
		__LIB_26__::func_457("MPArcadeCabinetGridTiles", "top_down_tile_1", Var7.f_0, Var7.f_1, 0.104167f, 0.185185f, 0f, Local_135.f_107.f_17);
		Var8 = { func_191(6, iVar0) };
		__LIB_26__::func_457("MPArcadeCabinetGridTiles", "top_down_tile_1", Var8.f_0, Var8.f_1, 0.104167f, 0.185185f, 0f, Local_135.f_107.f_17);
		iVar0++;
	}
}

void func_189(int iParam0, int iParam1)//Position - 0x6B78
{
	struct<8> Var0;
	int iVar1;
	struct<2> Var2;
	float fVar3;
	struct<2> Var4;
	if (Local_135.f_318[iParam0 /*5*/][iParam1] != Local_136[iParam0 /*5*/][iParam1])
	{
		Local_135.f_349[iParam0 /*5*/][iParam1] = Local_135.f_318[iParam0 /*5*/][iParam1];
		Local_135.f_380[iParam0 /*5*/][iParam1] = NETWORK::GET_NETWORK_TIME();
		if (Local_135.f_140 == 7)
		{
			func_190("Steal_Area", func_191(iParam0, iParam1), Local_136[iParam0 /*5*/][iParam1]);
		}
	}
	if (Local_135.f_349[iParam0 /*5*/][iParam1] == -1)
	{
		iVar1 = Local_136[iParam0 /*5*/][iParam1];
		if ((NETWORK::GET_NETWORK_TIME() - Local_135.f_380[iParam0 /*5*/][iParam1]) < 600)
		{
			fVar3 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_135.f_380[iParam0 /*5*/][iParam1])) / 600f);
			if (fVar3 > 1f)
			{
				fVar3 = 1f;
			}
			Var2.f_0 = func_140(0f, 0.070833f, fVar3, 2);
			Var2.f_1 = func_140(0f, 0.125926f, fVar3, 2);
		}
		else
		{
			Var2 = { __LIB_3__::func_990(0.070833f, 0.125926f) };
		}
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_135.f_380[iParam0 /*5*/][iParam1]) < 300)
	{
		iVar1 = Local_135.f_349[iParam0 /*5*/][iParam1];
		fVar3 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_135.f_380[iParam0 /*5*/][iParam1])) / 300f);
		if (fVar3 > 1f)
		{
			fVar3 = 1f;
		}
		Var2.f_0 = func_140(0.070833f, 0f, fVar3, 1);
		Var2.f_1 = func_140(0.125926f, 0f, fVar3, 1);
	}
	else
	{
		iVar1 = Local_136[iParam0 /*5*/][iParam1];
		Var2 = { __LIB_3__::func_990(0.070833f, 0.125926f) };
	}
	if (iVar1 > -1)
	{
		StringCopy(&Var0, "gang_logo_", 64);
		StringConCat(&Var0, Local_135.f_422[iVar1], 64);
		Var4 = { func_191(iParam0, iParam1) };
		__LIB_26__::func_457("MPArcadeCabinetGrid", &Var0, Var4.f_0, Var4.f_1, Var2.f_0, Var2.f_1, 0f, Local_135.f_107[iVar1 /*4*/]);
	}
	Local_135.f_318[iParam0 /*5*/][iParam1] = Local_136[iParam0 /*5*/][iParam1];
}

void func_190(char* sParam0, struct<2> Param1, int iParam2)//Position - 0x6D6E
{
	float fVar0;
	int iVar1;
	fVar0 = __LIB_35__::func_225(Param1);
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, func_165(iParam2), false);
	AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", fVar0);
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

struct<2> func_191(int iParam0, int iParam1)//Position - 0x6DA7
{
	struct<2> Var0;
	Var0.f_0 = (0.13802066f + (0.1041665f * IntToFloat(iParam0 + 1)));
	Var0.f_1 = (0.06851837f + (0.1851855f * IntToFloat(iParam1 + 1)));
	return Var0;
}

void func_192()//Position - 0x6DDB
{
	func_124();
	func_188();
	func_182();
	func_193();
	func_175();
	func_104();
	func_103();
}

void func_193()//Position - 0x6DFF
{
	struct<2> Var0;
	char cVar1[64];
	struct<8> Var2;
	if (Local_136.f_137 == 0)
	{
		return;
	}
	if (Local_136.f_131[(Local_136.f_137 - 1)] == -1)
	{
		return;
	}
	func_181(Local_135.f_107[Local_173[Local_136.f_131[(Local_136.f_137 - 1)] /*9*/].f_6 /*4*/], 102);
	Var0 = { __LIB_3__::func_990(0.5f, (0.5f + -0.016f)) };
	__LIB_26__::func_457("MPArcadeCabinetGridHUD", "text_round_winner", 0.5f, (0.5f + -0.016f), 0.3125f, 0.24074075f, 0f, Local_135.f_107.f_17);
	StringCopy(&cVar1, "text_gang_", 64);
	StringConCat(&cVar1, Local_135.f_422[Local_173[Local_136.f_131[(Local_136.f_137 - 1)] /*9*/].f_6], 64);
	StringConCat(&cVar1, "_", 64);
	if (Local_135.f_415 < 10)
	{
		if (Local_135.f_415 + 1 < 10)
		{
			StringConCat(&cVar1, "0", 64);
		}
		StringIntConCat(&cVar1, Local_135.f_415 + 1, 64);
		Local_135.f_415 = (Local_135.f_415 + Local_135.f_414);
	}
	else
	{
		StringIntConCat(&cVar1, 10, 64);
	}
	StringCopy(&Var2, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var2, Local_135.f_422[Local_173[Local_136.f_131[(Local_136.f_137 - 1)] /*9*/].f_6], 64);
	__LIB_26__::func_457(&Var2, &cVar1, Var0.f_0, ((Var0.f_1 + 0.074074075f) + ((0.24074075f - 0.14814815f) / 2f)), 0.3125f, 0.14814815f, 0f, Local_135.f_107[Local_173[Local_136.f_131[(Local_136.f_137 - 1)] /*9*/].f_6 /*4*/]);
}

void func_194()//Position - 0x6F75
{
	int iVar0;
	int iVar1;
	func_169("Ambience", &(Local_135.f_428), __LIB_3__::func_990(-1f, -1f), 0);
	func_309();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_135.f_178 && Local_175[iVar0 /*37*/].f_25)
		{
			func_285(iVar0);
		}
		iVar0++;
	}
	func_281();
	func_273();
	func_266();
	func_261();
	func_241();
	func_237();
	func_231();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_135.f_178 && Local_175[iVar0 /*37*/].f_25)
		{
			func_224(iVar0);
		}
		iVar0++;
	}
	func_196();
	func_171();
	func_195();
	if (Local_135.f_434 != Local_135.f_433)
	{
		if (Local_135.f_434 == Local_135.f_178)
		{
			func_133("Frontend_Player_Loses_Lead");
		}
		else if (Local_135.f_433 == Local_135.f_178)
		{
			func_133("Frontend_Player_Takes_Lead");
		}
	}
	if (Local_136.f_162 && !__LIB_0__::func_649(&(Local_135.f_316)))
	{
		__LIB_31__::func_23(func_19(3));
		__LIB_0__::func_495(&(Local_135.f_316), 0, 0);
	}
	if (Local_136.f_145 <= 4)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (Local_135.f_281[iVar1 /*7*/].f_5 != -1)
		{
			__LIB_31__::func_24(&(Local_135.f_281[iVar1 /*7*/].f_5));
		}
		iVar1++;
	}
	func_16();
	Local_134.f_20 = (Local_134.f_20 + iLocal_172[Local_173[Local_135.f_178 /*9*/].f_6]);
	Local_135.f_415 = 0;
	Local_173[Local_135.f_178 /*9*/].f_8 = (Local_173[Local_135.f_178 /*9*/].f_8 + iLocal_172[Local_173[Local_135.f_178 /*9*/].f_6]);
	func_15(8);
	__LIB_31__::func_23(func_19(2));
}

void func_195()//Position - 0x7115
{
	bool bVar0;
	bVar0 = true;
	if (Local_136.f_145 != 4)
	{
		bVar0 = false;
	}
	if (func_68(Local_135.f_178))
	{
		bVar0 = false;
	}
	if (iLocal_172[Local_173[Local_135.f_178 /*9*/].f_6] > 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (Local_135.f_430 == -1)
		{
			Local_135.f_430 = AUDIO::GET_SOUND_ID();
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_135.f_430))
		{
			AUDIO::PLAY_SOUND_FRONTEND(Local_135.f_430, "Frontend_Player_No_Territory_Loop", "dlc_vw_am_tw_frontend_sounds", false);
		}
	}
	else if (Local_135.f_430 != -1 && !AUDIO::HAS_SOUND_FINISHED(Local_135.f_430))
	{
		AUDIO::STOP_SOUND(Local_135.f_430);
		AUDIO::RELEASE_SOUND_ID(Local_135.f_430);
		Local_135.f_430 = -1;
	}
}

void func_196()//Position - 0x71BA
{
	func_124();
	func_188();
	func_182();
	func_222();
	func_220();
	func_214();
	func_207();
	func_206();
	func_202();
	func_200();
	func_199();
	func_198();
	func_197();
	func_175();
	func_104();
	func_103();
}

void func_197()//Position - 0x7202
{
	struct<2> Var0;
	if (!Local_136.f_162)
	{
		return;
	}
	if (!__LIB_0__::func_649(&(Local_135.f_316)))
	{
		return;
	}
	if (func_93(&(Local_135.f_316), 2250, 0))
	{
		return;
	}
	Var0 = { __LIB_3__::func_990(0.5f, (0.5f + -0.005f)) };
	__LIB_26__::func_457("MPArcadeCabinetGridHUD", "TEXT_SUDDEN", Var0.f_0, Var0.f_1, 0.26666668f, 0.14814815f, 0f, Local_135.f_107.f_17);
	__LIB_26__::func_457("MPArcadeCabinetGridHUD", "TEXT_DEATH", Var0.f_0, (Var0.f_1 + 0.074074075f), 0.26666668f, 0.11481482f, 0f, Local_135.f_107.f_17);
}

void func_198()//Position - 0x729F
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	if (Local_136.f_146 == -2147483647)
	{
		return;
	}
	iVar0 = (Local_136.f_146 - NETWORK::GET_NETWORK_TIME());
	if (iVar0 < -1500)
	{
		return;
	}
	if (iVar0 <= 0)
	{
		if (!BitTest(Local_135.f_429, 4))
		{
			func_133("Frontend_GO");
			MISC::SET_BIT(&(Local_135.f_429), 4);
		}
		fVar1 = (SYSTEM::TO_FLOAT(iVar0) / (SYSTEM::TO_FLOAT(-1500) / 3.5f));
		func_181(Local_135.f_107.f_25, SYSTEM::ROUND(func_140(153f, 0f, fVar1, 1)));
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "text_fight", 0.5f, (0.5f + -0.005f), 0.26666668f, 0.14814815f, 0f, Local_135.f_107.f_17);
		return;
	}
	func_181(Local_135.f_107.f_25, 153);
	if (iVar0 <= 1000)
	{
		if (!BitTest(Local_135.f_429, 3))
		{
			func_133("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_135.f_429), 3);
		}
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "text_1", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.14814815f, 0f, Local_135.f_107.f_17);
		return;
	}
	if (iVar0 <= 2000)
	{
		if (!BitTest(Local_135.f_429, 2))
		{
			func_133("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_135.f_429), 2);
		}
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "text_2", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.14814815f, 0f, Local_135.f_107.f_17);
		return;
	}
	if (iVar0 <= 3000)
	{
		if (!BitTest(Local_135.f_429, 1))
		{
			func_133("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_135.f_429), 1);
		}
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "text_3", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.14814815f, 0f, Local_135.f_107.f_17);
		return;
	}
	if (iVar0 <= 4500)
	{
		if (!BitTest(Local_135.f_429, 0))
		{
			func_133("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_135.f_429), 0);
		}
		StringCopy(&Var2, "text_round_", 64);
		StringIntConCat(&Var2, Local_136.f_137 + 1, 64);
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", &Var2, 0.5f, (0.5f + -0.005f), 0.3125f, 0.14814815f, 0f, Local_135.f_107.f_17);
		return;
	}
}

void func_199()//Position - 0x74CC
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	bVar0 = false;
	if (Local_173[Local_135.f_178 /*9*/].f_3 + 1000 > NETWORK::GET_NETWORK_TIME())
	{
		bVar0 = true;
	}
	if (func_68(Local_135.f_178))
	{
		iVar1 = (NETWORK::GET_NETWORK_TIME() - Local_173[Local_135.f_178 /*9*/].f_3);
		if (iVar1 < 2500 || Local_173[Local_135.f_178 /*9*/] == 4)
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	fVar3 = (0.23703703f / 2f);
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		__LIB_26__::func_457("MPArcadeCabinetGrid", "damage_v", 0.176f, fVar3, 0.03333333f, 0.23703703f, 180f, Local_135.f_107.f_29);
		__LIB_26__::func_457("MPArcadeCabinetGrid", "damage_v", (1f - 0.173f), fVar3, 0.03333333f, 0.23703703f, 0f, Local_135.f_107.f_29);
		fVar3 = (fVar3 + 0.23703703f);
		iVar2++;
	}
	fVar4 = (0.13333334f / 2f);
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		__LIB_26__::func_457("MPArcadeCabinetGrid", "damage_h", fVar4, 0.154f, 0.13333334f, 0.05925926f, 0f, Local_135.f_107.f_29);
		__LIB_26__::func_457("MPArcadeCabinetGrid", "damage_h", fVar4, (1f - 0.09f), 0.13333334f, 0.05925926f, 180f, Local_135.f_107.f_29);
		fVar4 = (fVar4 + 0.13333334f);
		iVar2++;
	}
}

void func_200()//Position - 0x7618
{
	int iVar0;
	int iVar1;
	if (func_68(Local_135.f_178))
	{
		if (BitTest(Local_135.f_429, 8))
		{
			MISC::CLEAR_BIT(&(Local_135.f_429), 8);
		}
		iVar0 = (NETWORK::GET_NETWORK_TIME() - Local_173[Local_135.f_178 /*9*/].f_3);
		if (iVar0 < 2500 || Local_173[Local_135.f_178 /*9*/] == 4)
		{
			func_201();
			if (!BitTest(Local_135.f_429, 7))
			{
				MISC::SET_BIT(&(Local_135.f_429), 7);
				func_133("Frontend_Wasted");
			}
			return;
		}
		if (iVar0 < 3500)
		{
			if (!BitTest(Local_135.f_429, 6))
			{
				MISC::SET_BIT(&(Local_135.f_429), 6);
				func_133("Frontend_Text_Appear_Generic");
			}
			func_181(Local_135.f_107.f_25, 153);
			__LIB_26__::func_457("MPArcadeCabinetGridHUD", "text_ready", 0.5f, (0.5f + -0.005f), 0.3125f, 0.14814815f, 0f, Local_135.f_107.f_17);
		}
	}
	else
	{
		if (BitTest(Local_135.f_429, 7))
		{
			MISC::CLEAR_BIT(&(Local_135.f_429), 7);
		}
		if (BitTest(Local_135.f_429, 6))
		{
			MISC::CLEAR_BIT(&(Local_135.f_429), 6);
		}
	}
	if (Local_173[Local_135.f_178 /*9*/].f_4 == -2147483647)
	{
		return;
	}
	iVar1 = (NETWORK::GET_NETWORK_TIME() - Local_173[Local_135.f_178 /*9*/].f_4);
	if (iVar1 < 1000)
	{
		if (!BitTest(Local_135.f_429, 8))
		{
			MISC::SET_BIT(&(Local_135.f_429), 8);
			func_133("Frontend_GO");
		}
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "text_fight", 0.5f, (0.5f + -0.005f), 0.26666668f, 0.14814815f, 0f, Local_135.f_107.f_17);
	}
}

void func_201()//Position - 0x779A
{
	func_181(Local_135.f_107.f_29, 102);
	__LIB_26__::func_457("MPArcadeCabinetGridHUD", "text_wasted", 0.5f, (0.5f + -0.005f), 0.3125f, 0.14814815f, 0f, Local_135.f_107.f_29);
}

void func_202()//Position - 0x77DE
{
	struct<2> Var0;
	Var0 = { func_205(Local_135.f_438) };
	if (__LIB_31__::func_28(Local_135.f_439, Var0))
	{
		return;
	}
	__LIB_26__::func_457("MPArcadeCabinetGrid", func_203(Local_135.f_438), Local_135.f_439, Local_135.f_439.f_1, Var0.f_0, Var0.f_1, 0f, Local_135.f_107.f_17);
}

char* func_203(int iParam0)//Position - 0x7832
{
	switch (iParam0)
	{
		case 0:
			return "BIRDS";
		case 1:
			return "AIRPLANE";
		case 2:
			return "HELICOPTER";
		default:
	}
	return "";
}

struct<2> func_205(int iParam0)//Position - 0x78E3
{
	switch (iParam0)
	{
		case 0:
			return __LIB_3__::func_990(0.03333333f, 0.05925926f);
		case 1:
			return __LIB_3__::func_990(0.114583336f, 0.2037037f);
		case 2:
			return __LIB_3__::func_990(0.114583336f, 0.2037037f);
		default:
	}
	return __LIB_3__::func_990(0f, 0f);
}

void func_206()//Position - 0x793D
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var2;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_135.f_159[iVar0 /*3*/] <= -1)
		{
		}
		else
		{
			StringCopy(&Var1, "fire_ball", 64);
			StringIntConCat(&Var1, Local_135.f_159[iVar0 /*3*/] + 1, 64);
			Var2 = { __LIB_3__::func_990((0.066667f / 2f), (0.118519f / 2f)) };
			__LIB_26__::func_457("MPArcadeCabinetGrid", &Var1, Local_135.f_159[iVar0 /*3*/].f_1, Local_135.f_159[iVar0 /*3*/].f_1.f_1, Var2.f_0, Var2.f_1, 0f, Local_135.f_107.f_17);
			Local_135.f_159[iVar0 /*3*/] = (Local_135.f_159[iVar0 /*3*/] + Local_135.f_412);
			if (Local_135.f_159[iVar0 /*3*/] >= 9)
			{
				Local_135.f_159[iVar0 /*3*/] = -1;
			}
		}
		iVar0++;
	}
}

void func_207()//Position - 0x79EB
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_136.f_148[iVar0 /*4*/].f_3 == -1)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() < Local_136.f_148[iVar0 /*4*/])
		{
			func_210(iVar0);
		}
		else
		{
			iVar1 = func_209(Local_136.f_148[iVar0 /*4*/].f_2);
			if (NETWORK::GET_NETWORK_TIME() > (Local_136.f_148[iVar0 /*4*/] + iVar1))
			{
			}
			else
			{
				if (NETWORK::GET_NETWORK_TIME() < (Local_136.f_148[iVar0 /*4*/] + (iVar1 / 2)) && __LIB_31__::func_28(__LIB_3__::func_990(Local_135.f_281[iVar0 /*7*/], Local_135.f_281[iVar0 /*7*/].f_1), __LIB_3__::func_990(Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1)))
				{
					func_210(iVar0);
				}
				fVar2 = func_208(Local_136.f_148[iVar0 /*4*/].f_2);
				Local_135.f_281[iVar0 /*7*/].f_4 = (Local_135.f_281[iVar0 /*7*/].f_4 + Local_135.f_414);
				if (Local_135.f_281[iVar0 /*7*/].f_4 >= Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/].f_1)
				{
					Local_135.f_281[iVar0 /*7*/].f_4 = 0;
				}
				StringCopy(&Var3, "", 64);
				StringConCat(&Var3, Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/], 64);
				if (Local_136.f_148[iVar0 /*4*/].f_3 < 5)
				{
					StringIntConCat(&Var3, Local_135.f_281[iVar0 /*7*/].f_4 + 1, 64);
				}
				__LIB_26__::func_457("MPArcadeCabinetGrid", &Var3, Local_135.f_281[iVar0 /*7*/], Local_135.f_281[iVar0 /*7*/].f_1, Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1, fVar2, Local_135.f_107.f_17);
			}
		}
		iVar0++;
	}
}

float func_208(int iParam0)//Position - 0x7BA5
{
	switch (iParam0)
	{
		case 0:
			return 90f;
		case 1:
			return 270f;
		case 2:
			return 0f;
		case 3:
			return 180f;
		default:
	}
	return 0f;
}

var func_209(int iParam0)//Position - 0x7BE9
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 11;
			break;
		case 2:
		case 3:
			iVar0 = 15;
			break;
	}
	return iVar0 * 650;
}

void func_210(int iParam0)//Position - 0x7C23
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	func_184(Local_136.f_148[iParam0 /*4*/].f_1, &iVar0, &iVar1);
	if (Local_136.f_148[iParam0 /*4*/].f_2 == 1)
	{
		Var2 = { func_187(func_71(iVar0, 0)) };
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + -0.011f), 0.020833332f, 0.018518519f, 180f, func_212(Local_136.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_136.f_148[iParam0 /*4*/].f_2 == 0)
	{
		Var2 = { func_187(func_71(iVar0, 8)) };
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + 0.023f), 0.020833332f, 0.018518519f, 0f, func_212(Local_136.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_136.f_148[iParam0 /*4*/].f_2 == 3)
	{
		Var2 = { func_187(func_71(0, iVar1)) };
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_211(iVar1, 1)), Var2.f_1, 0.020833332f, 0.018518519f, 90f, func_212(Local_136.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_136.f_148[iParam0 /*4*/].f_2 == 2)
	{
		Var2 = { func_187(func_71(12, iVar1)) };
		__LIB_26__::func_457("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_211(iVar1, 0)), Var2.f_1, 0.020833332f, 0.018518519f, -90f, func_212(Local_136.f_148[iParam0 /*4*/].f_3));
	}
}

float func_211(int iParam0, bool bParam1)//Position - 0x7D95
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return -0.011f;
			}
			return 0.00975f;
		case 2:
			if (bParam1)
			{
				return -0.02275f;
			}
			return 0.02275f;
		case 4:
			if (bParam1)
			{
				return -0.02375f;
			}
			return 0.02275f;
		case 6:
			if (bParam1)
			{
				return -0.01975f;
			}
			return 0.018f;
		case 8:
			if (bParam1)
			{
				return -0.006f;
			}
			return 0.004f;
		default:
	}
	return 0f;
}

struct<4> func_212(int iParam0)//Position - 0x7E2C
{
	float fVar0;
	struct<4> Var1;
	fVar0 = SYSTEM::SIN((IntToFloat(MISC::GET_GAME_TIMER()) * 0.5f));
	Var1 = { Local_135.f_107.f_17 };
	switch (iParam0)
	{
		case 0:
		case 4:
			break;
		case 1:
		case 2:
		case 3:
			if (fVar0 > 0f)
			{
				__LIB_11__::func_94(&Var1, 255, 0, 0, 255);
			}
			else
			{
				__LIB_11__::func_94(&Var1, 0, 0, 255, 255);
			}
			break;
		case 5:
			Var1 = { Local_135.f_107[0 /*4*/] };
			break;
		case 6:
			Var1 = { Local_135.f_107[1 /*4*/] };
			break;
		case 7:
			Var1 = { Local_135.f_107[2 /*4*/] };
			break;
		case 8:
			Var1 = { Local_135.f_107[3 /*4*/] };
			break;
	}
	Var1.f_3 = (55 + SYSTEM::ROUND((MISC::ABSF(fVar0) * 200f)));
	return Var1;
}

void func_214()//Position - 0x7F2F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == Local_135.f_178)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_175[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_215(iVar0);
		}
		iVar0++;
	}
	func_215(Local_135.f_178);
}

void func_215(int iParam0)//Position - 0x7F96
{
	struct<8> Var0;
	char cVar1[64];
	struct<4> Var2;
	float fVar3;
	float fVar4;
	char cVar5[64];
	int iVar6;
	struct<2> Var7;
	struct<8> Var8;
	struct<2> Var9;
	StringCopy(&Var0, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var0, Local_135.f_422[Local_173[iParam0 /*9*/].f_6], 64);
	if (func_68(iParam0))
	{
		StringCopy(&cVar1, "dead_", 64);
		StringConCat(&cVar1, Local_135.f_422[Local_173[iParam0 /*9*/].f_6], 64);
		__LIB_26__::func_457(&Var0, &cVar1, Local_135.f_204[iParam0 /*19*/], Local_135.f_204[iParam0 /*19*/].f_1, 0.033333f, 0.059259f, 0f, Local_135.f_107.f_17);
		return;
	}
	Var2 = { Local_135.f_107.f_17 };
	if (Local_174[iParam0 /*16*/].f_2 + func_183(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (Local_135.f_204[iParam0 /*19*/].f_4 == 0)
		{
			func_164("Footsteps", iParam0, &(Local_135.f_204[iParam0 /*19*/].f_7));
		}
		Local_135.f_204[iParam0 /*19*/].f_4 = (Local_135.f_204[iParam0 /*19*/].f_4 + Local_135.f_412);
		if (Local_135.f_204[iParam0 /*19*/].f_4 >= 12)
		{
			Local_135.f_204[iParam0 /*19*/].f_4 = 0;
		}
	}
	if (Local_173[iParam0 /*9*/].f_3 + 1000 > NETWORK::GET_NETWORK_TIME())
	{
		fVar3 = MISC::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT((Local_173[iParam0 /*9*/].f_3 + 1000 - NETWORK::GET_NETWORK_TIME())) * 0.35f)));
		Var2.f_3 = (255 - SYSTEM::ROUND(fVar3) * 150);
	}
	fVar4 = func_219(Local_174[iParam0 /*16*/].f_4);
	StringCopy(&cVar5, "walk_", 64);
	StringConCat(&cVar5, Local_135.f_422[Local_173[iParam0 /*9*/].f_6], 64);
	StringConCat(&cVar5, "_", 64);
	StringConCat(&cVar5, Local_135.f_59[Local_173[iParam0 /*9*/].f_5 /*5*/], 64);
	StringIntConCat(&cVar5, Local_135.f_204[iParam0 /*19*/].f_4 + 1, 64);
	if (Local_173[iParam0 /*9*/].f_1 < 1f && Local_135.f_204[iParam0 /*19*/].f_4 > 0)
	{
		iVar6 = Var2.f_3;
		Var2.f_3 = (iVar6 / 2);
		Var7 = { Local_135.f_204[iParam0 /*19*/] };
		if (__LIB_0__::func_502())
		{
			Var7 = { __LIB_3__::func_989(Var7, __LIB_3__::func_990((0.002604167f * SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))), (0.00462963f * SYSTEM::COS(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))))) };
		}
		else
		{
			Var7 = { __LIB_3__::func_989(Var7, __LIB_3__::func_990((0.002604167f * SYSTEM::COS(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))), (0.00462963f * SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))))) };
		}
		__LIB_26__::func_457(&Var0, &cVar5, Var7.f_0, Var7.f_1, 0.033333f, 0.059259f, fVar4, Var2);
		Var2.f_3 = iVar6;
	}
	__LIB_26__::func_457(&Var0, &cVar5, Local_135.f_204[iParam0 /*19*/], Local_135.f_204[iParam0 /*19*/].f_1, 0.033333f, 0.059259f, fVar4, Var2);
	if (Local_135.f_204[iParam0 /*19*/].f_5 > -1)
	{
		StringCopy(&Var8, "muzzle_flare_", 64);
		StringIntConCat(&Var8, Local_135.f_204[iParam0 /*19*/].f_5 + 1, 64);
		Var9 = { func_216(iParam0, fVar4) };
		__LIB_26__::func_457("MPArcadeCabinetGrid", &Var8, Var9.f_0, Var9.f_1, 0.016666668f, 0.02962963f, fVar4, Var2);
		Local_135.f_204[iParam0 /*19*/].f_5 = (Local_135.f_204[iParam0 /*19*/].f_5 + Local_135.f_412);
		if (Local_135.f_204[iParam0 /*19*/].f_5 >= 3)
		{
			Local_135.f_204[iParam0 /*19*/].f_5 = -1;
		}
	}
}

struct<2> func_216(int iParam0, float fParam1)//Position - 0x82A5
{
	struct<2> Var0;
	Var0 = { __LIB_31__::func_27(Local_135.f_204[iParam0 /*19*/]) };
	switch (Local_173[iParam0 /*9*/].f_5)
	{
		case 1:
		case 2:
			Var0 = { __LIB_3__::func_989(Var0, __LIB_3__::func_990(7f, -36f)) };
			break;
		case 3:
		case 4:
		case 5:
			Var0 = { __LIB_3__::func_989(Var0, __LIB_3__::func_990(5f, -40f)) };
			break;
	}
	Var0 = { __LIB_17__::func_671(__LIB_31__::func_27(Local_135.f_204[iParam0 /*19*/]), Var0, fParam1) };
	Var0 = { __LIB_20__::func_436(Var0) };
	return Var0;
}

float func_219(int iParam0)//Position - 0x83C7
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return 180f;
		case 2:
			return 270f;
		case 3:
			return 90f;
		default:
	}
	return 0f;
}

void func_220()//Position - 0x840B
{
	float fVar0;
	struct<2> Var1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	struct<2> Var5;
	struct<8> Var6;
	struct<4> Var7;
	fVar0 = MISC::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0.2f)));
	bVar4 = false;
	bVar2 = false;
	while (bVar2 <= 6)
	{
		if (Local_136.f_62[bVar2 /*3*/].f_1 == -1)
		{
		}
		else if (BitTest(Local_135.f_309, bVar2))
		{
		}
		else
		{
			Var5 = { func_187(Local_136.f_62[bVar2 /*3*/]) };
			MISC::SET_BIT(&uVar3, bVar2);
			if (!BitTest(Local_135.f_310, bVar2) && !bVar4)
			{
				func_221("Pickup_Spawn", Var5, 1);
				bVar4 = true;
			}
			StringCopy(&Var6, Local_135.f_90[Local_136.f_62[bVar2 /*3*/].f_1 /*2*/], 64);
			if (Local_135.f_90[Local_136.f_62[bVar2 /*3*/].f_1 /*2*/].f_1 > 0)
			{
				StringIntConCat(&Var6, (Local_135.f_311 % Local_135.f_90[Local_136.f_62[bVar2 /*3*/].f_1 /*2*/].f_1) + 1, 64);
			}
			Var1 = { __LIB_3__::func_990(0.033333f, 0.059259f) };
			if (!((Local_136.f_62[bVar2 /*3*/].f_1 == 0 || Local_136.f_62[bVar2 /*3*/].f_1 == 2) || Local_136.f_62[bVar2 /*3*/].f_1 == 1))
			{
				Var1.f_0 = (Var1.f_0 - ((Var1.f_0 * 0.15f) * fVar0));
				Var1.f_1 = (Var1.f_1 - ((Var1.f_1 * 0.15f) * fVar0));
			}
			Var7 = { Local_135.f_107.f_17 };
			if ((NETWORK::GET_NETWORK_TIME() - Local_136.f_62[bVar2 /*3*/].f_2) < 1250)
			{
				Var7.f_3 = SYSTEM::ROUND((fVar0 * 255f));
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_136.f_62[bVar2 /*3*/].f_2) > 16500)
			{
				Var7.f_3 = SYSTEM::ROUND((func_140(1f, 0.1f, (SYSTEM::TO_FLOAT(((NETWORK::GET_NETWORK_TIME() - Local_136.f_62[bVar2 /*3*/].f_2) - 16500)) / 1000f), 4) * 255f));
			}
			__LIB_26__::func_457("MPArcadeCabinetGrid", &Var6, Var5.f_0, Var5.f_1, Var1.f_0, Var1.f_1, 0f, Var7);
		}
		bVar2++;
	}
	Local_135.f_310 = uVar3;
}

void func_221(char* sParam0, struct<2> Param1, bool bParam2)//Position - 0x85F9
{
	float fVar0;
	int iVar1;
	fVar0 = __LIB_35__::func_225(Param1);
	if (bParam2)
	{
	}
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, "dlc_vw_am_tw_global_sounds", false);
	if (bParam2)
	{
		AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", fVar0);
	}
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

void func_222()//Position - 0x863D
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_175[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				if (Local_174[iVar0 /*16*/].f_5[iVar1 /*5*/] == -2147483647)
				{
				}
				else if (BitTest(Local_135.f_303, func_223(iVar0, iVar1)))
				{
				}
				else
				{
					fVar2 = func_219(Local_174[iVar0 /*16*/].f_5[iVar1 /*5*/].f_3);
					if (Local_174[iVar0 /*16*/].f_5[iVar1 /*5*/].f_4 == 4)
					{
						StringCopy(&Var3, "rocket_trail_", 64);
						StringIntConCat(&Var3, Local_135.f_416 + 1, 64);
						__LIB_26__::func_457("MPArcadeCabinetGrid", &Var3, Local_135.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_135.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0.004166667f, 0.03333333f, fVar2, Local_135.f_107.f_17);
					}
					else
					{
						__LIB_26__::func_457("MPArcadeCabinetGrid", "bullet" /* GXT: Bullet */, Local_135.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_135.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0.004166667f, 0.011111111f, fVar2, Local_135.f_107.f_17);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_223(int iParam0, int iParam1)//Position - 0x877F
{
	return (iParam1 + (2 * iParam0));
}

void func_224(int iParam0)//Position - 0x878E
{
	if (iLocal_172[Local_175[iParam0 /*37*/].f_6] == 0 && (NETWORK::GET_NETWORK_TIME() - Local_136.f_146) > 3000)
	{
		if ((BitTest(Local_135.f_417, 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !BitTest(Local_135.f_417, 3))
		{
		}
	}
	if (Local_175[iParam0 /*37*/] != 3)
	{
		return;
	}
	if (Local_136.f_162)
	{
		func_230(iParam0, 4);
	}
	if (func_229(iParam0))
	{
		if (NETWORK::GET_NETWORK_TIME() >= Local_175[iParam0 /*37*/].f_3 + 2500 && !BitTest(Local_135.f_142[iParam0], 6))
		{
			MISC::SET_BIT(&(Local_135.f_142[iParam0]), 6);
		}
		if (NETWORK::GET_NETWORK_TIME() >= Local_175[iParam0 /*37*/].f_3 + 3500)
		{
			func_226(iParam0);
		}
	}
	else if (NETWORK::GET_NETWORK_TIME() > Local_175[iParam0 /*37*/].f_3 + 1000 && !BitTest(Local_135.f_142[iParam0], 6))
	{
		func_230(iParam0, 4);
		func_225("Death_Dead");
	}
}

void func_225(char* sParam0)//Position - 0x8883
{
	if (Local_135.f_178.f_4 == -1)
	{
		Local_135.f_178.f_4 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(Local_135.f_178.f_4, sParam0, "dlc_vw_am_tw_global_sounds", false);
}

void func_226(int iParam0)//Position - 0x88B0
{
	func_227(iParam0);
	func_230(iParam0, 2);
	func_225("Death_Resurrect");
	Local_175[iParam0 /*37*/].f_4 = NETWORK::GET_NETWORK_TIME();
	Local_175[iParam0 /*37*/].f_2 = 8;
	Local_175[iParam0 /*37*/].f_5 = 0;
	Local_175[iParam0 /*37*/].f_1 = 1f;
	Local_135.f_178.f_2 = 0;
	if (BitTest(Local_135.f_142[iParam0], 6))
	{
		MISC::CLEAR_BIT(&(Local_135.f_142[iParam0]), 6);
	}
}

void func_227(int iParam0)//Position - 0x891A
{
	Local_175[iParam0 /*37*/].f_9 = func_228(iParam0);
	Local_175[iParam0 /*37*/].f_9.f_1 = Local_175[iParam0 /*37*/].f_9;
}

int func_228(int iParam0)//Position - 0x8945
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	iVar0 = -1;
	iVar1 = -1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (bVar2 == iParam0)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar2)) && !Local_175[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_173[bVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_68(bVar2))
		{
		}
		else
		{
			func_184(Local_174[bVar2 /*16*/], &iVar8, &iVar9);
			MISC::SET_BIT(&uVar4, iVar8);
			MISC::SET_BIT(&uVar5, iVar9);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 2)
	{
		if (Local_136.f_148[bVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_184(Local_136.f_148[bVar2 /*4*/].f_1, &iVar8, &iVar9);
			if (Local_136.f_148[bVar2 /*4*/].f_2 == 0 || Local_136.f_148[bVar2 /*4*/].f_2 == 1)
			{
				MISC::SET_BIT(&uVar6, iVar8);
			}
			else if (Local_136.f_148[bVar2 /*4*/].f_2 == 2 || Local_136.f_148[bVar2 /*4*/].f_2 == 3)
			{
				MISC::SET_BIT(&uVar7, iVar9);
			}
		}
		bVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	bVar2 = false;
	while (bVar2 <= 12)
	{
		bVar3 = false;
		while (bVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_71(bVar2, bVar3);
			if (!(__LIB_22__::func_217(&(Local_136.f_85[Local_175[iParam0 /*37*/].f_6 /*11*/][0 /*5*/]), iVar10) || __LIB_22__::func_217(&(Local_136.f_85[Local_175[iParam0 /*37*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (BitTest(uVar6, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar7, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar4, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar5, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			bVar3++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_229(int iParam0)//Position - 0x8B2C
{
	if (BitTest(Local_135.f_142[iParam0], 6))
	{
		return 1;
	}
	if (Local_175[iParam0 /*37*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_172[Local_175[iParam0 /*37*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_230(int iParam0, int iParam1)//Position - 0x8B6D
{
	if (iParam0 == -1)
	{
		return;
	}
	Local_175[iParam0 /*37*/] = iParam1;
}

void func_231()//Position - 0x8B87
{
	if (iLocal_172[Local_173[Local_135.f_178 /*9*/].f_6] == 0 && (NETWORK::GET_NETWORK_TIME() - Local_136.f_146) > 3000)
	{
		if ((BitTest(Local_135.f_417, 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !BitTest(Local_135.f_417, 3))
		{
			func_151("SCGW_H_RSPWN", 7500, 0);
			MISC::SET_BIT(&(Local_135.f_417), 3);
		}
	}
	if (Local_173[Local_135.f_178 /*9*/] != 3)
	{
		return;
	}
	func_16();
	if (Local_136.f_162)
	{
		func_236(4);
		func_168(6);
	}
	if (func_235(Local_135.f_178))
	{
		if (NETWORK::GET_NETWORK_TIME() >= Local_173[Local_135.f_178 /*9*/].f_3 + 2500 && !BitTest(Local_135.f_141, 6))
		{
			MISC::SET_BIT(&(Local_135.f_141), 6);
		}
		if (NETWORK::GET_NETWORK_TIME() >= Local_173[Local_135.f_178 /*9*/].f_3 + 3500)
		{
			func_232();
		}
	}
	else if (NETWORK::GET_NETWORK_TIME() > Local_173[Local_135.f_178 /*9*/].f_3 + 1000 && !BitTest(Local_135.f_141, 6))
	{
		func_236(4);
		func_225("Death_Dead");
		func_168(6);
	}
}

void func_232()//Position - 0x8C9A
{
	func_233();
	func_236(2);
	func_225("Death_Resurrect");
	Local_173[Local_135.f_178 /*9*/].f_4 = NETWORK::GET_NETWORK_TIME();
	Local_173[Local_135.f_178 /*9*/].f_2 = 8;
	Local_173[Local_135.f_178 /*9*/].f_5 = 0;
	Local_173[Local_135.f_178 /*9*/].f_1 = 1f;
	Local_135.f_178.f_2 = 0;
	func_168(4);
	if (BitTest(Local_135.f_141, 6))
	{
		MISC::CLEAR_BIT(&(Local_135.f_141), 6);
	}
}

void func_233()//Position - 0x8D05
{
	Local_174[Local_135.f_178 /*16*/] = func_234();
	Local_174[Local_135.f_178 /*16*/].f_1 = Local_174[Local_135.f_178 /*16*/];
}

int func_234()//Position - 0x8D2E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	iVar0 = -1;
	iVar1 = -1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (bVar2 == Local_135.f_178)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar2)) && !Local_175[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_173[bVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_68(bVar2))
		{
		}
		else
		{
			func_184(Local_174[bVar2 /*16*/], &iVar8, &iVar9);
			MISC::SET_BIT(&uVar4, iVar8);
			MISC::SET_BIT(&uVar5, iVar9);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 2)
	{
		if (Local_136.f_148[bVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_184(Local_136.f_148[bVar2 /*4*/].f_1, &iVar8, &iVar9);
			if (Local_136.f_148[bVar2 /*4*/].f_2 == 0 || Local_136.f_148[bVar2 /*4*/].f_2 == 1)
			{
				MISC::SET_BIT(&uVar6, iVar8);
			}
			else if (Local_136.f_148[bVar2 /*4*/].f_2 == 2 || Local_136.f_148[bVar2 /*4*/].f_2 == 3)
			{
				MISC::SET_BIT(&uVar7, iVar9);
			}
		}
		bVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	bVar2 = false;
	while (bVar2 <= 12)
	{
		bVar3 = false;
		while (bVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_71(bVar2, bVar3);
			if (!(__LIB_22__::func_217(&(Local_136.f_85[Local_173[Local_135.f_178 /*9*/].f_6 /*11*/][0 /*5*/]), iVar10) || __LIB_22__::func_217(&(Local_136.f_85[Local_173[Local_135.f_178 /*9*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (BitTest(uVar6, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar7, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar4, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar5, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			bVar3++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_235(int iParam0)//Position - 0x8F1B
{
	if (BitTest(Local_135.f_141, 6))
	{
		return 1;
	}
	if (Local_173[iParam0 /*9*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_172[Local_173[iParam0 /*9*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_236(int iParam0)//Position - 0x8F58
{
	if (Local_135.f_178 == -1)
	{
		return;
	}
	Local_173[Local_135.f_178 /*9*/] = iParam0;
}

void func_237()//Position - 0x8F76
{
	int iVar0;
	if (Local_135.f_437 == -2147483647)
	{
		Local_135.f_437 = NETWORK::GET_NETWORK_TIME();
	}
	if ((NETWORK::GET_NETWORK_TIME() - Local_135.f_437) > 22500)
	{
		Local_135.f_437 = NETWORK::GET_NETWORK_TIME();
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == Local_135.f_438)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		Local_135.f_438 = iVar0;
		func_240();
	}
	Local_135.f_439 = (Local_135.f_439 + (func_239() * SYSTEM::TIMESTEP()));
	Local_135.f_439.f_1 = (Local_135.f_439.f_1 + (func_238() * SYSTEM::TIMESTEP()));
}

float func_238()//Position - 0x8FFE
{
	switch (Local_135.f_438)
	{
		case 0:
			return -0.11111111f;
		case 1:
			return -0.11111111f;
		case 2:
			return -0.1388889f;
		default:
	}
	return 0f;
}

float func_239()//Position - 0x903B
{
	switch (Local_135.f_438)
	{
		case 0:
			return -0.0625f;
		case 1:
			return -0.0625f;
		case 2:
			return 0.078125f;
		default:
	}
	return 0f;
}

void func_240()//Position - 0x9078
{
	switch (Local_135.f_438)
	{
		case 0:
		case 1:
			Local_135.f_439 = { __LIB_3__::func_990((1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0f)), (1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f))) };
			break;
		case 2:
			Local_135.f_439 = { __LIB_3__::func_990((0f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f)), (1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f))) };
			break;
	}
}

void func_241()//Position - 0x90E8
{
	int* iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_175[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_175[iVar1 /*37*/].f_6 == -1)
		{
		}
		else
		{
			func_242(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_135.f_306 = iVar0;
}

void func_242(int iParam0, int* iParam1)//Position - 0x9137
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	struct<2> Var4;
	int iVar5;
	bool bVar6;
	float fVar7;
	struct<2> Var8;
	float fVar9;
	struct<2> Var10;
	struct<2> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 1)
	{
		bVar6 = func_223(iParam0, iVar5);
		if (Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/] == -2147483647)
		{
			if (BitTest(Local_135.f_304, bVar6))
			{
				MISC::CLEAR_BIT(&(Local_135.f_304), bVar6);
			}
		}
		else
		{
			MISC::SET_BIT(iParam1, bVar6);
			if (!BitTest(Local_135.f_306, bVar6))
			{
				Local_135.f_204[iParam0 /*19*/].f_5 = 0;
				func_259(iParam0, iVar5);
			}
			fVar7 = 0f;
			Var8 = { Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1 };
			switch (Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_3)
			{
				case 0:
					fVar7 = -(IntToFloat(Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { __LIB_3__::func_990(0f, 0.014814815f) };
					break;
				case 1:
					fVar7 = (IntToFloat(Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { __LIB_3__::func_990(0f, -0.014814815f) };
					break;
				case 2:
					fVar7 = -(IntToFloat(Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { __LIB_3__::func_990(0.008333333f, 0f) };
					break;
				case 3:
					fVar7 = (IntToFloat(Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { __LIB_3__::func_990(-0.008333333f, 0f) };
					break;
			}
			fVar9 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/])) / SYSTEM::TO_FLOAT((Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2 * Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_1)));
			if (BitTest(Local_135.f_304, bVar6))
			{
				if (fVar9 > 1f)
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { __LIB_3__::func_990(-1f, -1f) };
					Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/] = -2147483647;
					Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1 = -1f;
					Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1.f_1 = -1f;
					Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_3 = -1;
					Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 = -1;
				}
			}
			else
			{
				Var10 = { Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1 };
				Var11 = { Var8 };
				if (__LIB_11__::func_98(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, (-1f - 0.0001f), (-1f + 0.0001f)) && __LIB_11__::func_98(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2.f_1, (-1f - 0.0001f), (-1f + 0.0001f)))
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Var10 };
				}
				else
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				}
				Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] = { __LIB_31__::func_859(Var10, Var11, fVar9) };
				iVar12 = 0;
				iVar13 = 0;
				Var2 = { Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				Var3 = { __LIB_3__::func_989(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, Var4) };
				iVar12 = 0;
				while (iVar12 <= 3)
				{
					if (iVar12 == iParam0)
					{
					}
					else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar12)))
					{
					}
					else if (Local_173[iVar12 /*9*/].f_6 == -1)
					{
					}
					else if (func_68(iVar12))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[iVar12 /*19*/] };
						Var1 = { Local_135.f_204[iVar12 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var2.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_249(iVar5, iVar12, iParam0);
							iVar13 = 1;
						}
					}
					iVar12++;
				}
				iVar14 = 0;
				iVar14 = 0;
				while (iVar14 <= 3)
				{
					if (iVar14 == iParam0)
					{
					}
					else if (!Local_175[iVar14 /*37*/].f_25)
					{
					}
					else if (Local_175[iVar14 /*37*/].f_6 == -1)
					{
					}
					else if (func_248(iVar14))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[iVar14 /*19*/] };
						Var1 = { Local_135.f_204[iVar14 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var2.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_245(iVar5, iVar14, iParam0);
							iVar13 = 1;
						}
					}
					iVar14++;
				}
				if (fVar9 >= 1f || iVar13)
				{
					if (!BitTest(Local_135.f_304, bVar6))
					{
						if (Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 == 4)
						{
							func_243(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/]);
						}
						MISC::SET_BIT(&(Local_135.f_304), bVar6);
					}
				}
			}
		}
		iVar5++;
	}
}

void func_243(struct<2> Param0)//Position - 0x968D
{
	Local_135.f_159[Local_135.f_308 /*3*/] = 0;
	Local_135.f_159[Local_135.f_308 /*3*/].f_1 = { Param0 };
	if (__LIB_17__::func_670(Param0, Local_135.f_204[Local_135.f_178 /*19*/]) < SYSTEM::POW((0.185185f * 2f), 2f))
	{
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 100);
	}
	func_221("Rocket_Explode", Param0, 1);
	Local_135.f_308++;
	if (Local_135.f_308 >= 6)
	{
		Local_135.f_308 = 0;
	}
}

void func_245(int iParam0, int iParam1, int iParam2)//Position - 0x972B
{
	Local_135.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_135.f_204[iParam1 /*19*/] };
	func_246(iParam1, -Local_135.f_59[Local_175[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 250, 200);
	Local_175[iParam1 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	if (Local_175[iParam1 /*37*/] != 2)
	{
		func_163((6 + Local_175[iParam2 /*37*/].f_6));
	}
	if (Local_175[iParam1 /*37*/].f_2 <= 0)
	{
		func_163((2 + Local_175[iParam1 /*37*/].f_6));
		Local_134.f_18++;
	}
}

void func_246(int iParam0, int iParam1, int iParam2)//Position - 0x97C3
{
	int iVar0;
	iVar0 = (Local_175[iParam0 /*37*/].f_2 + iParam1);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_175[iParam0 /*37*/] == 2)
		{
			func_230(iParam0, 3);
			func_225("Death_Bleeps");
		}
	}
	if (iVar0 != Local_175[iParam0 /*37*/].f_2)
	{
		Local_175[iParam0 /*37*/].f_2 = iVar0;
	}
	if (iParam1 < 0)
	{
		func_247(iParam0, Local_175[iParam0 /*37*/] != 2, iParam2);
	}
}

void func_247(int iParam0, bool bParam1, var uParam2)//Position - 0x983A
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 538776314;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = uParam2;
	iVar1 = __LIB_2__::func_31(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_248(int iParam0)//Position - 0x987F
{
	if (Local_175[iParam0 /*37*/] == 3)
	{
		return 1;
	}
	if (Local_175[iParam0 /*37*/] == 4)
	{
		return 1;
	}
	return 0;
}

void func_249(int iParam0, int iParam1, int iParam2)//Position - 0x98A6
{
	Local_135.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_135.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_135.f_178)
	{
		func_250(-Local_135.f_59[Local_175[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 250, 200);
		Local_173[Local_135.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		if (Local_173[Local_135.f_178 /*9*/] != 2)
		{
			func_163((6 + Local_175[iParam2 /*37*/].f_6));
		}
	}
	else if (iParam2 == Local_135.f_178 && (Local_173[iParam1 /*9*/].f_2 - Local_135.f_59[Local_175[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_163((2 + Local_173[iParam1 /*9*/].f_6));
		Local_134.f_18++;
	}
}

void func_250(int iParam0, int iParam1)//Position - 0x9973
{
	int iVar0;
	iVar0 = (Local_173[Local_135.f_178 /*9*/].f_2 + iParam0);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_173[Local_135.f_178 /*9*/] == 2)
		{
			func_236(3);
			MISC::SET_BIT(&(Local_135.f_141), 2);
			func_225("Death_Bleeps");
			Global_1931416 = 5;
		}
	}
	if (iVar0 != Local_173[Local_135.f_178 /*9*/].f_2)
	{
		Local_173[Local_135.f_178 /*9*/].f_2 = iVar0;
	}
	if (iParam0 < 0)
	{
		func_247(Local_135.f_178, Local_173[Local_135.f_178 /*9*/] != 2, iParam1);
	}
}

int func_251(struct<2> Param0, struct<2> Param1, struct<2> Param2, struct<2> Param3)//Position - 0x9A02
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	var uVar4;
	Var0 = { Param0 };
	Var1 = { Param1 };
	Var2 = { Param2 };
	Var3 = { Param3 };
	func_255(&Param0, &Param1);
	func_255(&Param2, &Param3);
	func_255(&Var1, &Var0);
	func_255(&Var3, &Var2);
	if (((__LIB_35__::func_226(Param0, Param1, Var2, Var3, &uVar4) || __LIB_35__::func_226(Param0, Param1, Param2, Param3, &uVar4)) || __LIB_35__::func_226(Var0, Var1, Param2, Param3, &uVar4)) || __LIB_35__::func_226(Var0, Var1, Var2, Var3, &uVar4))
	{
		return 1;
	}
	return 0;
}

void func_255(var uParam0, var uParam1)//Position - 0x9C9A
{
	if (__LIB_11__::func_98(*uParam0, (*uParam1 - 0.0001f), (*uParam1 + 0.0001f)))
	{
		*uParam0 = (*uParam0 + 0.008333333f);
		*uParam1 = (*uParam1 - 0.008333333f);
	}
	if (__LIB_11__::func_98(uParam0->f_1, (uParam1->f_1 - 0.0001f), (uParam1->f_1 + 0.0001f)))
	{
		uParam0->f_1 = (uParam0->f_1 + 0.014814815f);
		uParam1->f_1 = (uParam1->f_1 - 0.014814815f);
	}
}

void func_259(int iParam0, int iParam1)//Position - 0x9D68
{
	char* sVar0;
	sVar0 = "";
	switch (Local_175[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_175[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_164(sVar0, iParam0, &(Local_135.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_260(sVar0, iParam0, &(Local_135.f_204[iParam0 /*19*/].f_8));
	}
}

void func_260(char* sParam0, int iParam1, var uParam2)//Position - 0x9E13
{
	float fVar0;
	fVar0 = __LIB_35__::func_225(Local_135.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(*uParam2, sParam0, "dlc_vw_am_tw_global_sounds", false);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam2, "Screen_Position", fVar0);
}

void func_261()//Position - 0x9E54
{
	int* iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
		}
		else if (Local_173[iVar1 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_262(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_135.f_305 = iVar0;
}

void func_262(int iParam0, int* iParam1)//Position - 0x9EA4
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	struct<2> Var4;
	int iVar5;
	bool bVar6;
	float fVar7;
	struct<2> Var8;
	float fVar9;
	struct<2> Var10;
	struct<2> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 1)
	{
		bVar6 = func_223(iParam0, iVar5);
		if (Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/] == -2147483647)
		{
			if (BitTest(Local_135.f_303, bVar6))
			{
				MISC::CLEAR_BIT(&(Local_135.f_303), bVar6);
			}
		}
		else
		{
			MISC::SET_BIT(iParam1, bVar6);
			if (!BitTest(Local_135.f_305, bVar6))
			{
				Local_135.f_204[iParam0 /*19*/].f_5 = 0;
				func_265(iParam0, iVar5);
			}
			fVar7 = 0f;
			Var8 = { Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_1 };
			switch (Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_3)
			{
				case 0:
					fVar7 = -(IntToFloat(Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { __LIB_3__::func_990(0f, 0.014814815f) };
					break;
				case 1:
					fVar7 = (IntToFloat(Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { __LIB_3__::func_990(0f, -0.014814815f) };
					break;
				case 2:
					fVar7 = -(IntToFloat(Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { __LIB_3__::func_990(0.008333333f, 0f) };
					break;
				case 3:
					fVar7 = (IntToFloat(Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { __LIB_3__::func_990(-0.008333333f, 0f) };
					break;
			}
			fVar9 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/])) / SYSTEM::TO_FLOAT((Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2 * Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_1)));
			if (BitTest(Local_135.f_303, bVar6))
			{
				if (fVar9 > 1f)
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { __LIB_3__::func_990(-1f, -1f) };
					if (iParam0 == Local_135.f_178)
					{
						Local_174[Local_135.f_178 /*16*/].f_5[iVar5 /*5*/] = -2147483647;
						Local_174[Local_135.f_178 /*16*/].f_5[iVar5 /*5*/].f_1 = -1f;
						Local_174[Local_135.f_178 /*16*/].f_5[iVar5 /*5*/].f_1.f_1 = -1f;
						Local_174[Local_135.f_178 /*16*/].f_5[iVar5 /*5*/].f_3 = -1;
						Local_174[Local_135.f_178 /*16*/].f_5[iVar5 /*5*/].f_4 = -1;
					}
				}
			}
			else
			{
				Var10 = { Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_1 };
				Var11 = { Var8 };
				if (__LIB_11__::func_98(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, (-1f - 0.0001f), (-1f + 0.0001f)) && __LIB_11__::func_98(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2.f_1, (-1f - 0.0001f), (-1f + 0.0001f)))
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Var10 };
				}
				else
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				}
				Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] = { __LIB_31__::func_859(Var10, Var11, fVar9) };
				iVar12 = 0;
				iVar13 = 0;
				Var2 = { Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				Var3 = { __LIB_3__::func_989(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, Var4) };
				iVar12 = 0;
				while (iVar12 <= 3)
				{
					if (iVar12 == iParam0)
					{
					}
					else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar12)))
					{
					}
					else if (Local_173[iVar12 /*9*/].f_6 == -1)
					{
					}
					else if (func_68(iVar12))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[iVar12 /*19*/] };
						Var1 = { Local_135.f_204[iVar12 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var2.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_264(iVar5, iVar12, iParam0);
							iVar13 = 1;
						}
					}
					iVar12++;
				}
				iVar14 = 0;
				iVar14 = 0;
				while (iVar14 <= 3)
				{
					if (iVar14 == iParam0)
					{
					}
					else if (!Local_175[iVar14 /*37*/].f_25)
					{
					}
					else if (Local_175[iVar14 /*37*/].f_6 == -1)
					{
					}
					else if (func_248(iVar14))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[iVar14 /*19*/] };
						Var1 = { Local_135.f_204[iVar14 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var2.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_263(iVar5, iVar14, iParam0);
							iVar13 = 1;
						}
					}
					iVar14++;
				}
				if (fVar9 >= 1f || iVar13)
				{
					if (!BitTest(Local_135.f_303, bVar6))
					{
						if (Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 == 4)
						{
							func_243(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/]);
						}
						MISC::SET_BIT(&(Local_135.f_303), bVar6);
					}
				}
			}
		}
		iVar5++;
	}
}

void func_263(int iParam0, int iParam1, int iParam2)//Position - 0xA3EB
{
	Local_135.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_135.f_204[iParam1 /*19*/] };
	func_246(iParam1, -Local_135.f_59[Local_174[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 250, 200);
	Local_175[iParam1 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	if (Local_175[iParam1 /*37*/] != 2)
	{
		func_163((6 + Local_173[iParam2 /*9*/].f_6));
	}
	if (Local_175[iParam1 /*37*/].f_2 <= 0)
	{
		func_163((2 + Local_175[iParam1 /*37*/].f_6));
		Local_134.f_18++;
	}
}

void func_264(int iParam0, int iParam1, int iParam2)//Position - 0xA481
{
	Local_135.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_135.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_135.f_178)
	{
		func_250(-Local_135.f_59[Local_174[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 250, 200);
		Local_173[Local_135.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		if (Local_173[Local_135.f_178 /*9*/] != 2)
		{
			func_163((6 + Local_173[iParam2 /*9*/].f_6));
		}
	}
	else if (iParam2 == Local_135.f_178 && (Local_173[iParam1 /*9*/].f_2 - Local_135.f_59[Local_174[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_163((2 + Local_173[iParam1 /*9*/].f_6));
		Local_134.f_18++;
	}
}

void func_265(int iParam0, int iParam1)//Position - 0xA54A
{
	char* sVar0;
	sVar0 = "";
	switch (Local_174[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_174[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_164(sVar0, iParam0, &(Local_135.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_260(sVar0, iParam0, &(Local_135.f_204[iParam0 /*19*/].f_8));
	}
}

void func_266()//Position - 0xA5F1
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	struct<2> Var4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	struct<2> Var14;
	struct<2> Var15;
	struct<2> Var16;
	int iVar17;
	int iVar18;
	int iVar19;
	bVar5 = false;
	iVar6 = 0;
	while (iVar6 <= 2)
	{
		iVar11 = NETWORK::GET_NETWORK_TIME();
		if (Local_136.f_148[iVar6 /*4*/].f_3 != -1 && iVar11 > Local_136.f_148[iVar6 /*4*/])
		{
			iVar12 = __LIB_0__::func_138((Local_136.f_148[iVar6 /*4*/].f_2 == 1 || Local_136.f_148[iVar6 /*4*/].f_2 == 0), 11, 15) * 650;
			if (iVar11 > (Local_136.f_148[iVar6 /*4*/] + iVar12))
			{
			}
			else
			{
				bVar5 = true;
				fVar13 = (SYSTEM::TO_FLOAT((iVar11 - Local_136.f_148[iVar6 /*4*/])) / SYSTEM::TO_FLOAT(iVar12));
				func_184(Local_136.f_148[iVar6 /*4*/].f_1, &iVar7, &iVar8);
				switch (Local_136.f_148[iVar6 /*4*/].f_2)
				{
					case 0:
						iVar9 = iVar7;
						iVar10 = 0;
						Var4 = { __LIB_3__::func_990(0f, -(Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					case 1:
						iVar9 = iVar7;
						iVar10 = 8;
						Var4 = { __LIB_3__::func_990(0f, (Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					case 2:
						iVar9 = 0;
						iVar10 = iVar8;
						Var4 = { __LIB_3__::func_990(-(Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
					case 3:
						iVar9 = 12;
						iVar10 = iVar8;
						Var4 = { __LIB_3__::func_990((Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
				}
				Var14 = { func_187(Local_136.f_148[iVar6 /*4*/].f_1) };
				Var15 = { func_187(func_71(iVar9, iVar10)) };
				switch (Local_136.f_148[iVar6 /*4*/].f_2)
				{
					case 0:
						Var14.f_1 = (Var14.f_1 + 0.1851855f);
						Var15.f_1 = (Var15.f_1 + -0.1851855f);
						break;
					case 1:
						Var14.f_1 = (Var14.f_1 + -0.1851855f);
						Var15.f_1 = (Var15.f_1 + 0.1851855f);
						break;
					case 2:
						Var14.f_0 = (Var14.f_0 + 0.1041665f);
						Var15.f_0 = (Var15.f_0 + -0.1041665f);
						break;
					case 3:
						Var14.f_0 = (Var14.f_0 + -0.1041665f);
						Var15.f_0 = (Var15.f_0 + 0.1041665f);
						break;
				}
				Local_135.f_281[iVar6 /*7*/].f_2 = { Local_135.f_281[iVar6 /*7*/] };
				Local_135.f_281[iVar6 /*7*/] = { __LIB_31__::func_859(Var14, Var15, fVar13) };
				if (!__LIB_31__::func_28(Local_135.f_281[iVar6 /*7*/], Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2))
				{
					if (__LIB_31__::func_28(Local_135.f_281[iVar6 /*7*/].f_2, Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2))
					{
						if (Local_136.f_148[iVar6 /*4*/].f_3 != 0)
						{
							func_221(func_272(Local_136.f_148[iVar6 /*4*/].f_3), Local_135.f_281[iVar6 /*7*/], 1);
						}
					}
					else
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
						{
							AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
						{
							AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
						}
						if (iVar6 != 2)
						{
							Var16 = { Local_135.f_281[iVar6 /*7*/] };
							if (iVar6 == 1 && Local_136.f_148[iVar6 /*4*/].f_2 != Local_136.f_148[2 /*4*/].f_2)
							{
								Var16 = { __LIB_3__::func_990(0.5f, 0.5f) };
							}
							if (Local_136.f_148[iVar6 /*4*/].f_3 >= 5)
							{
								iVar17 = (Local_136.f_148[iVar6 /*4*/].f_3 - 5);
								func_270(func_271(Local_136.f_148[iVar6 /*4*/].f_3), &(Local_135.f_281[iVar6 /*7*/].f_5), Var16, iVar17);
							}
							else
							{
								func_169(func_271(Local_136.f_148[iVar6 /*4*/].f_3), &(Local_135.f_281[iVar6 /*7*/].f_5), Var16, 1);
							}
						}
					}
				}
				else if (Local_135.f_281[iVar6 /*7*/].f_5 != -1)
				{
					__LIB_31__::func_24(&(Local_135.f_281[iVar6 /*7*/].f_5));
				}
				Var2 = { __LIB_3__::func_989(Local_135.f_281[iVar6 /*7*/], Var4) };
				Var3 = { __LIB_17__::func_666(Local_135.f_281[iVar6 /*7*/].f_2, Var4) };
				iVar18 = 0;
				iVar18 = 0;
				while (iVar18 <= 3)
				{
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar18)))
					{
					}
					else if (Local_173[iVar18 /*9*/].f_6 == -1)
					{
					}
					else if (func_68(iVar18))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[iVar18 /*19*/] };
						Var1 = { Local_135.f_204[iVar18 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var2.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_268(iVar18);
						}
					}
					iVar18++;
				}
				iVar19 = 0;
				iVar19 = 0;
				while (iVar19 <= 3)
				{
					if (!Local_175[iVar19 /*37*/].f_25)
					{
					}
					else if (Local_175[iVar19 /*37*/].f_6 == -1)
					{
					}
					else if (func_248(iVar19))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[iVar19 /*19*/] };
						Var1 = { Local_135.f_204[iVar19 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var2.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_267(iVar19);
						}
					}
					iVar19++;
				}
				Jump @1613; //curOff = 1374
				if (Local_135.f_281[iVar6 /*7*/].f_5 != -1)
				{
					__LIB_31__::func_24(&(Local_135.f_281[iVar6 /*7*/].f_5));
				}
				Local_135.f_281[iVar6 /*7*/] = { func_187(Local_136.f_148[iVar6 /*4*/].f_1) };
				switch (Local_136.f_148[iVar6 /*4*/].f_2)
				{
					case 0:
						Local_135.f_281[iVar6 /*7*/].f_1 = (Local_135.f_281[iVar6 /*7*/].f_1 + 0.1851855f);
						break;
					case 1:
						Local_135.f_281[iVar6 /*7*/].f_1 = (Local_135.f_281[iVar6 /*7*/].f_1 + -0.1851855f);
						break;
					case 2:
						Local_135.f_281[iVar6 /*7*/] = (Local_135.f_281[iVar6 /*7*/] + 0.1041665f);
						break;
					case 3:
						Local_135.f_281[iVar6 /*7*/] = (Local_135.f_281[iVar6 /*7*/] + -0.1041665f);
						break;
				}
				Local_135.f_281[iVar6 /*7*/].f_2 = { Local_135.f_281[iVar6 /*7*/] };
			}
			iVar6++;
			if (!bVar5)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
				{
					AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
				}
			}
		}
void func_267(int iParam0)//Position - 0xAC76
{
	func_246(iParam0, -8, 1);
	Local_175[iParam0 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	func_163(10);
}

void func_268(int iParam0)//Position - 0xAC9B
{
	if (iParam0 == Local_135.f_178)
	{
		func_250(-8, 1);
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 200);
		Local_173[Local_135.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		func_163(10);
	}
}

void func_270(char* sParam0, var uParam1, struct<2> Param2, int iParam3)//Position - 0xACF3
{
	float fVar0;
	fVar0 = __LIB_35__::func_225(Param2);
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, func_165(iParam3), false);
	}
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", fVar0);
}

char* func_271(int iParam0)//Position - 0xAD3A
{
	switch (iParam0)
	{
		case 0:
			return "Ice_Cream_Van_Loop";
		case 1:
		case 2:
		case 3:
			return "Emergency_Siren_Loop";
		case 4:
			return "Tank_Loop";
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Loop";
		default:
	}
	return "INVALID VEHICLE";
}

char* func_272(int iParam0)//Position - 0xAD9F
{
	switch (iParam0)
	{
		case 1:
			return "Ambulance_Warning";
		case 2:
			return "Police_Car_Warning";
		case 3:
			return "Fire_Truck_Warning";
		case 4:
			return "Tank_Warning";
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Warning";
		default:
	}
	return "INVALID VEHICLE";
}

void func_273()//Position - 0xAE05
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_175[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_175[iVar0 /*37*/].f_6 == -1)
		{
		}
		else if (func_68(iVar0))
		{
			Local_135.f_204[iVar0 /*19*/].f_2 = { __LIB_3__::func_990(-1f, -1f) };
		}
		else
		{
			func_274(iVar0);
		}
		iVar0++;
	}
}

void func_274(int iParam0)//Position - 0xAE66
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	float fVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	Var4 = { func_187(Local_175[iParam0 /*37*/].f_9) };
	Var5 = { func_187(Local_175[iParam0 /*37*/].f_9.f_1) };
	fVar6 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_175[iParam0 /*37*/].f_9.f_2)) / SYSTEM::TO_FLOAT(func_280(iParam0)));
	if (fVar6 < 0f)
	{
		fVar6 = 0f;
	}
	if ((fVar6 >= 0.65f && !BitTest(Local_135.f_142[iParam0], 0)) || (fVar6 >= 0.8f && !BitTest(Local_135.f_142[iParam0], 1)))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_279(Local_175[iParam0 /*37*/].f_9, 1, Local_175[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar7 = func_71((iVar0 - 1), iVar1);
				func_279(uVar7, 1, Local_175[iParam0 /*37*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_279(Local_175[iParam0 /*37*/].f_9, 0, Local_175[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar8 = func_71(iVar0, (iVar1 - 1));
				func_279(uVar8, 0, Local_175[iParam0 /*37*/].f_6);
			}
		}
		if (!BitTest(Local_135.f_142[iParam0], 0))
		{
			MISC::SET_BIT(&(Local_135.f_142[iParam0]), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_135.f_142[iParam0]), 4);
			MISC::SET_BIT(&(Local_135.f_142[iParam0]), 1);
		}
	}
	if (fVar6 > 0.85f || fVar6 < 0.15f)
	{
		if (fVar6 > 0.85f)
		{
			iVar9 = Local_175[iParam0 /*37*/].f_9;
		}
		else
		{
			iVar9 = Local_175[iParam0 /*37*/].f_9.f_1;
		}
		bVar10 = false;
		while (bVar10 <= 6)
		{
			if (Local_136.f_62[bVar10 /*3*/].f_1 == -1)
			{
				if (BitTest(Local_135.f_309, bVar10))
				{
					MISC::CLEAR_BIT(&(Local_135.f_309), bVar10);
				}
			}
			else if (!func_278(bVar10, iParam0))
			{
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_136.f_62[bVar10 /*3*/].f_2) < 1250)
			{
			}
			else if (BitTest(Local_135.f_309, bVar10))
			{
			}
			else if (iVar9 == Local_136.f_62[bVar10 /*3*/])
			{
				MISC::SET_BIT(&(Local_135.f_309), bVar10);
				func_276(bVar10, iParam0);
				func_275(bVar10);
				func_163(11);
			}
			bVar10++;
		}
	}
	if (fVar6 < 1f)
	{
		if (Local_135.f_204[iParam0 /*19*/].f_2 < 0f && Local_135.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_135.f_204[iParam0 /*19*/].f_2 = { __LIB_31__::func_859(Var5, Var4, fVar6) };
		}
		else
		{
			Local_135.f_204[iParam0 /*19*/].f_2 = { Local_135.f_204[iParam0 /*19*/] };
		}
		Local_135.f_204[iParam0 /*19*/] = { __LIB_31__::func_859(Var5, Var4, fVar6) };
		return;
	}
	if (Local_135.f_204[iParam0 /*19*/].f_2 < 0f && Local_135.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_135.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_135.f_204[iParam0 /*19*/].f_2 = { Local_135.f_204[iParam0 /*19*/] };
	}
	Local_135.f_204[iParam0 /*19*/] = { Var4 };
	Local_135.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_275(bool bParam0)//Position - 0xB194
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 1391426543;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_2__::func_31(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_276(bool bParam0, int iParam1)//Position - 0xB1CD
{
	Local_134.f_17++;
	switch (Local_136.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			func_246(iParam1, 4, 0);
			break;
		case 1:
			Local_135.f_178.f_2 += 10;
			break;
		case 2:
			func_277(Local_175[iParam1 /*37*/].f_9, Local_175[iParam1 /*37*/].f_6);
			break;
		case 3:
			Local_175[iParam1 /*37*/].f_5 = 1;
			break;
		case 4:
			Local_175[iParam1 /*37*/].f_5 = 2;
			break;
		case 5:
			Local_175[iParam1 /*37*/].f_5 = 3;
			break;
		case 6:
			Local_175[iParam1 /*37*/].f_5 = 4;
			break;
		case 7:
			Local_175[iParam1 /*37*/].f_5 = 5;
			break;
	}
	if (!BitTest(Local_135.f_417, 2) && Local_175[iParam1 /*37*/].f_5 != 0)
	{
	}
}

void func_277(var uParam0, var uParam1)//Position - 0xB2B0
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 1719815852;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam1;
	iVar1 = __LIB_2__::func_31(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_278(bool bParam0, int iParam1)//Position - 0xB2EF
{
	switch (Local_136.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_175[iParam1 /*37*/].f_2 == 8)
			{
				return 0;
			}
			break;
		case 1:
		case 2:
			return 1;
		case 3:
			if (Local_175[iParam1 /*37*/].f_5 == 1)
			{
				return 0;
			}
			break;
		case 4:
			if (Local_175[iParam1 /*37*/].f_5 == 2)
			{
				return 0;
			}
			break;
		case 5:
			if (Local_175[iParam1 /*37*/].f_5 == 3)
			{
				return 0;
			}
			break;
		case 6:
			if (Local_175[iParam1 /*37*/].f_5 == 4)
			{
				return 0;
			}
			break;
		case 7:
			if (Local_175[iParam1 /*37*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_279(var uParam0, int iParam1, var uParam2)//Position - 0xB3B5
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 166716001;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam2;
	iVar1 = __LIB_2__::func_31(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_280(int iParam0)//Position - 0xB3FA
{
	return SYSTEM::ROUND((700f * Local_175[iParam0 /*37*/].f_1));
}

void func_281()//Position - 0xB415
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else if (Local_173[iVar0 /*9*/].f_6 == -1)
		{
		}
		else if (func_68(iVar0))
		{
			Local_135.f_204[iVar0 /*19*/].f_2 = { __LIB_3__::func_990(-1f, -1f) };
		}
		else
		{
			func_282(iVar0);
		}
		iVar0++;
	}
}

void func_282(int iParam0)//Position - 0xB477
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	float fVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	func_184(Local_174[iParam0 /*16*/], &iVar0, &iVar1);
	func_184(Local_174[iParam0 /*16*/].f_1, &iVar2, &iVar3);
	Var4 = { func_187(Local_174[iParam0 /*16*/]) };
	Var5 = { func_187(Local_174[iParam0 /*16*/].f_1) };
	fVar6 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_174[iParam0 /*16*/].f_2)) / SYSTEM::TO_FLOAT(func_183(iParam0)));
	if (fVar6 < 0f)
	{
		fVar6 = 0f;
	}
	if (iParam0 == Local_135.f_178 && ((fVar6 >= 0.65f && !BitTest(Local_135.f_141, 0)) || (fVar6 >= 0.8f && !BitTest(Local_135.f_141, 1))))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_279(Local_174[iParam0 /*16*/], 1, Local_173[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar7 = func_71((iVar0 - 1), iVar1);
				func_279(uVar7, 1, Local_173[iParam0 /*9*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_279(Local_174[iParam0 /*16*/], 0, Local_173[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar8 = func_71(iVar0, (iVar1 - 1));
				func_279(uVar8, 0, Local_173[iParam0 /*9*/].f_6);
			}
		}
		if (!BitTest(Local_135.f_141, 0))
		{
			MISC::SET_BIT(&(Local_135.f_141), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_135.f_141), 4);
			MISC::SET_BIT(&(Local_135.f_141), 1);
		}
	}
	if (fVar6 > 0.85f || fVar6 < 0.15f)
	{
		if (fVar6 > 0.85f)
		{
			iVar9 = Local_174[iParam0 /*16*/];
		}
		else
		{
			iVar9 = Local_174[iParam0 /*16*/].f_1;
		}
		bVar10 = false;
		while (bVar10 <= 6)
		{
			if (Local_136.f_62[bVar10 /*3*/].f_1 == -1)
			{
				if (BitTest(Local_135.f_309, bVar10))
				{
					MISC::CLEAR_BIT(&(Local_135.f_309), bVar10);
				}
			}
			else if (!func_284(bVar10))
			{
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_136.f_62[bVar10 /*3*/].f_2) < 1250)
			{
			}
			else if (BitTest(Local_135.f_309, bVar10))
			{
			}
			else if (iVar9 == Local_136.f_62[bVar10 /*3*/])
			{
				if (iParam0 == Local_135.f_178)
				{
					MISC::SET_BIT(&(Local_135.f_309), bVar10);
					func_283(bVar10);
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 100, 50);
					func_275(bVar10);
					func_163(11);
				}
			}
			bVar10++;
		}
	}
	if (fVar6 < 1f)
	{
		if (Local_135.f_204[iParam0 /*19*/].f_2 < 0f && Local_135.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_135.f_204[iParam0 /*19*/].f_2 = { __LIB_31__::func_859(Var5, Var4, fVar6) };
		}
		else
		{
			Local_135.f_204[iParam0 /*19*/].f_2 = { Local_135.f_204[iParam0 /*19*/] };
		}
		Local_135.f_204[iParam0 /*19*/] = { __LIB_31__::func_859(Var5, Var4, fVar6) };
		return;
	}
	if (Local_135.f_204[iParam0 /*19*/].f_2 < 0f && Local_135.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_135.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_135.f_204[iParam0 /*19*/].f_2 = { Local_135.f_204[iParam0 /*19*/] };
	}
	Local_135.f_204[iParam0 /*19*/] = { Var4 };
	Local_135.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_283(bool bParam0)//Position - 0xB794
{
	struct<2> Var0;
	Var0 = { func_187(Local_136.f_62[bParam0 /*3*/]) };
	Local_134.f_17++;
	switch (Local_136.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			func_221("Pickup_Health", Var0, 1);
			func_250(4, 0);
			break;
		case 1:
			func_221("Pickup_Speed", Var0, 1);
			Local_135.f_178.f_2 += 10;
			break;
		case 2:
			func_221("Pickup_Collect_Transport", Var0, 1);
			func_277(Local_174[Local_135.f_178 /*16*/], Local_173[Local_135.f_178 /*9*/].f_6);
			break;
		case 3:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_173[Local_135.f_178 /*9*/].f_5 = 1;
			break;
		case 4:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_173[Local_135.f_178 /*9*/].f_5 = 2;
			break;
		case 5:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_173[Local_135.f_178 /*9*/].f_5 = 3;
			break;
		case 6:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_173[Local_135.f_178 /*9*/].f_5 = 4;
			break;
		case 7:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_173[Local_135.f_178 /*9*/].f_5 = 5;
			break;
	}
	if (!BitTest(Local_135.f_417, 2) && Local_173[Local_135.f_178 /*9*/].f_5 != 0)
	{
		MISC::SET_BIT(&(Local_135.f_417), 2);
		func_151("SCGW_H_SHOOT", 7500, 0);
	}
}

int func_284(bool bParam0)//Position - 0xB912
{
	switch (Local_136.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_173[Local_135.f_178 /*9*/].f_2 == 8)
			{
				return 0;
			}
			break;
		case 1:
		case 2:
			return 1;
		case 3:
			if (Local_173[Local_135.f_178 /*9*/].f_5 == 1)
			{
				return 0;
			}
			break;
		case 4:
			if (Local_173[Local_135.f_178 /*9*/].f_5 == 2)
			{
				return 0;
			}
			break;
		case 5:
			if (Local_173[Local_135.f_178 /*9*/].f_5 == 3)
			{
				return 0;
			}
			break;
		case 6:
			if (Local_173[Local_135.f_178 /*9*/].f_5 == 4)
			{
				return 0;
			}
			break;
		case 7:
			if (Local_173[Local_135.f_178 /*9*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_285(int iParam0)//Position - 0xB9E4
{
	func_297(iParam0);
	func_293(iParam0);
	func_290(iParam0);
	func_286(iParam0);
}

void func_286(int iParam0)//Position - 0xBA04
{
	int iVar0;
	var uVar1;
	bool bVar2;
	if (Local_175[iParam0 /*37*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_288(iParam0);
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_287(iParam0, Local_175[iParam0 /*37*/].f_9.f_4);
	}
	if (bVar2)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_135.f_183[iParam0 /*5*/].f_3 + Local_135.f_59[Local_175[iParam0 /*37*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_175[iParam0 /*37*/].f_9.f_4;
		Local_175[iParam0 /*37*/].f_9.f_5[Local_135.f_307 /*5*/] = NETWORK::GET_NETWORK_TIME();
		Local_175[iParam0 /*37*/].f_9.f_5[Local_135.f_307 /*5*/].f_3 = uVar1;
		Local_175[iParam0 /*37*/].f_9.f_5[Local_135.f_307 /*5*/].f_4 = Local_175[iParam0 /*37*/].f_5;
		Local_175[iParam0 /*37*/].f_9.f_5[Local_135.f_307 /*5*/].f_1 = { Local_135.f_204[iParam0 /*19*/] };
		Local_175[iParam0 /*37*/].f_9.f_4 = uVar1;
		Local_135.f_183[iParam0 /*5*/].f_3 = NETWORK::GET_NETWORK_TIME();
		Local_135.f_307++;
		if (Local_135.f_307 >= 2)
		{
			Local_135.f_307 = 0;
		}
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 50, 100);
	}
}

int func_287(int iParam0, int iParam1)//Position - 0xBB1F
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	Var0 = { func_187(func_71(12, 8)) };
	Var1 = { func_187(func_71(0, 0)) };
	switch (iParam1)
	{
		case 0:
			if (__LIB_11__::func_98(Local_135.f_204[iParam0 /*19*/].f_1, (Var1.f_1 - 0.0001f), (Var1.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		case 1:
			if (__LIB_11__::func_98(Local_135.f_204[iParam0 /*19*/].f_1, (Var0.f_1 - 0.0001f), (Var0.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		case 2:
			if (__LIB_11__::func_98(Local_135.f_204[iParam0 /*19*/], (Var1.f_0 - 0.0001f), (Var1.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
		case 3:
			if (__LIB_11__::func_98(Local_135.f_204[iParam0 /*19*/], (Var0.f_0 - 0.0001f), (Var0.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
	}
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar2, &iVar3);
	func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	if (Local_175[iParam0 /*37*/].f_9.f_2 + func_183(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar3 != iVar5)
		{
			if (iParam1 == 2 || iParam1 == 3)
			{
				return 0;
			}
		}
		else if (iVar2 != iVar4)
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_288(int iParam0)//Position - 0xBC80
{
	if (func_289(iParam0))
	{
		return -1;
	}
	if (Local_175[iParam0 /*37*/].f_26)
	{
		return 8;
	}
	return -1;
}

int func_289(int iParam0)//Position - 0xBCA7
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (Local_175[iParam0 /*37*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_290(int iParam0)//Position - 0xBCCA
{
	int iVar0;
	bool bVar1;
	iVar0 = func_292(iParam0);
	bVar1 = func_291(iParam0, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_175[iParam0 /*37*/].f_9.f_4 = 0;
				break;
			case 5:
				Local_175[iParam0 /*37*/].f_9.f_4 = 1;
				break;
			case 6:
				Local_175[iParam0 /*37*/].f_9.f_4 = 2;
				break;
			case 7:
				Local_175[iParam0 /*37*/].f_9.f_4 = 3;
				break;
			}
	}
}

int func_291(int iParam0, int iParam1)//Position - 0xBD44
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_175[iParam0 /*37*/].f_9.f_2 + func_183(Local_135.f_178)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_292(int iParam0)//Position - 0xBE04
{
	if (func_289(iParam0))
	{
		return -1;
	}
	return Local_175[iParam0 /*37*/].f_28;
}

void func_293(int iParam0)//Position - 0xBE22
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	iVar0 = func_294(iParam0);
	bVar1 = false;
	if (((!((Local_175[iParam0 /*37*/].f_9.f_2 + func_183(Local_135.f_178)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_135.f_142[iParam0], 1)) && NETWORK::GET_NETWORK_TIME() < Local_175[iParam0 /*37*/].f_9.f_2 + 100) && Local_175[iParam0 /*37*/].f_9.f_3 != iVar0) && !BitTest(Local_135.f_142[iParam0], 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
		func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	else
	{
		func_184(Local_175[iParam0 /*37*/].f_9, &iVar2, &iVar3);
		func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_175[iParam0 /*37*/].f_9.f_2 + func_183(iParam0)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_135.f_142[iParam0], 1)) || bVar1)
		{
			if (bVar1 || !BitTest(Local_135.f_142[iParam0], 5))
			{
				MISC::SET_BIT(&(Local_135.f_142[iParam0]), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_175[iParam0 /*37*/].f_9 = func_71(iVar2, iVar3);
			Local_175[iParam0 /*37*/].f_9.f_1 = func_71(iVar4, iVar5);
			if (Local_135.f_178.f_2 > 0)
			{
				Local_175[iParam0 /*37*/].f_1 = 0.75f;
				Local_135.f_178.f_2 = (Local_135.f_178.f_2 - 1);
			}
			else if (!__LIB_11__::func_98(Local_175[iParam0 /*37*/].f_1, (1f - 0.0001f), (1f + 0.0001f)))
			{
				Local_175[iParam0 /*37*/].f_1 = 1f;
			}
			Local_175[iParam0 /*37*/].f_9.f_2 = NETWORK::GET_NETWORK_TIME();
			if (iVar8 > 0)
			{
				Local_175[iParam0 /*37*/].f_9.f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_175[iParam0 /*37*/].f_9.f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_175[iParam0 /*37*/].f_9.f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_175[iParam0 /*37*/].f_9.f_4 = 1;
			}
			MISC::CLEAR_BIT(&(Local_135.f_142[iParam0]), 1);
			MISC::CLEAR_BIT(&(Local_135.f_142[iParam0]), 0);
			Local_175[iParam0 /*37*/].f_9.f_3 = iVar0;
			if (!BitTest(Local_135.f_142[iParam0], 5))
			{
				MISC::SET_BIT(&(Local_135.f_142[iParam0]), 5);
			}
		}
	}
}

int func_294(int iParam0)//Position - 0xC119
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (func_289(iParam0))
	{
		return -1;
	}
	if (!BitTest(Local_135.f_142[iParam0], 5))
	{
		return func_296(Local_175[iParam0 /*37*/].f_6);
	}
	iVar0 = Local_175[iParam0 /*37*/].f_33;
	iVar1 = Local_175[iParam0 /*37*/].f_34;
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar2, &iVar3);
	uVar4 = func_295(iVar2, iVar3, iVar0, iVar1);
	return uVar4;
	return -1;
}

int func_295(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC187
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = (iParam2 - iParam0);
	iVar1 = (iParam3 - iParam1);
	if ((((iParam2 < 0 || iParam2 > 13) || iParam3 < 0) || iParam3 > 9) || (iVar0 == 0 && iVar1 == 0))
	{
		return -1;
	}
	if (iVar1 < 0)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = 1;
	}
	if (iVar0 < 0)
	{
		iVar2 = 2;
	}
	else
	{
		iVar2 = 3;
	}
	if (MISC::ABSI(iVar0) < MISC::ABSI(iVar1))
	{
		if ((iParam0 % 2) == 0)
		{
			return iVar3;
		}
		else
		{
			return iVar2;
		}
	}
	else if ((iParam1 % 2) == 0)
	{
		return iVar2;
	}
	else
	{
		return iVar3;
	}
	return -1;
}

int func_296(int iParam0)//Position - 0xC236
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 2;
		default:
	}
	return -1;
}

void func_297(int iParam0)//Position - 0xC26E
{
	Local_175[iParam0 /*37*/].f_26 = func_308(iParam0);
	Local_175[iParam0 /*37*/].f_28 = func_307(iParam0);
	if (Local_175[iParam0 /*37*/].f_27)
	{
		if (Local_175[iParam0 /*37*/].f_36 != 3 && func_306(iParam0))
		{
			Local_175[iParam0 /*37*/].f_36 = 3;
		}
		else if (Local_175[iParam0 /*37*/].f_36 != 1 && func_305(iParam0))
		{
			Local_175[iParam0 /*37*/].f_36 = 1;
		}
		else if (Local_175[iParam0 /*37*/].f_36 != 2 && func_304(iParam0))
		{
			Local_175[iParam0 /*37*/].f_36 = 2;
		}
		else if (Local_175[iParam0 /*37*/].f_36 != 0 && Local_175[iParam0 /*37*/].f_27)
		{
			Local_175[iParam0 /*37*/].f_36 = 0;
		}
		switch (Local_175[iParam0 /*37*/].f_36)
		{
			case 0:
				func_301(iParam0);
				break;
			case 1:
				func_300(iParam0);
				break;
			case 2:
				func_299(iParam0);
				break;
			case 3:
				func_298(iParam0);
				break;
		}
		if (Local_175[iParam0 /*37*/].f_33 == -1)
		{
			Local_175[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
		}
		if (Local_175[iParam0 /*37*/].f_34 == -1)
		{
			Local_175[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
		}
		Local_175[iParam0 /*37*/].f_27 = 0;
	}
	else if ((Local_175[iParam0 /*37*/].f_9.f_2 + func_183(iParam0)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_135.f_142[iParam0], 1))
	{
		if (Local_175[iParam0 /*37*/].f_9 == func_71(Local_175[iParam0 /*37*/].f_33, Local_175[iParam0 /*37*/].f_34) || (Local_175[iParam0 /*37*/].f_33 == -1 && Local_175[iParam0 /*37*/].f_34 == -1))
		{
			Local_175[iParam0 /*37*/].f_27 = 1;
		}
	}
}

void func_298(int iParam0)//Position - 0xC442
{
	if (Local_175[iParam0 /*37*/].f_35 == -1)
	{
		Local_175[iParam0 /*37*/].f_35 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	if (Local_175[iParam0 /*37*/].f_35 == iParam0)
	{
		Local_175[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_175[iParam0 /*37*/].f_35)) && !Local_175[Local_175[iParam0 /*37*/].f_35 /*37*/].f_25)
	{
		Local_175[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (Local_173[Local_175[iParam0 /*37*/].f_35 /*9*/].f_2 == 0)
	{
		Local_175[iParam0 /*37*/].f_35 = -1;
		return;
	}
	func_184(Local_174[Local_175[iParam0 /*37*/].f_35 /*16*/], &(Local_175[iParam0 /*37*/].f_33), &(Local_175[iParam0 /*37*/].f_34));
}

void func_299(int iParam0)//Position - 0xC4FE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 6)
	{
		if ((Local_136.f_62[iVar6 /*3*/].f_1 != -1 && Local_136.f_62[iVar6 /*3*/] != -1) && Local_136.f_62[iVar6 /*3*/].f_2 != -2147483647)
		{
			if (Local_136.f_62[iVar6 /*3*/].f_1 == 0)
			{
				func_184(Local_136.f_62[iVar6 /*3*/], &iVar2, &iVar3);
				if ((iVar4 == -1 && iVar5 == -1) || (MISC::ABSI((iVar2 - iVar0)) + MISC::ABSI((iVar3 - iVar1))) < (MISC::ABSI((iVar4 - iVar0)) + MISC::ABSI((iVar5 - iVar1))))
				{
					iVar4 = iVar2;
					iVar5 = iVar3;
				}
			}
		}
		iVar6++;
	}
	if (iVar4 == -1)
	{
		Local_175[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
	}
	if (iVar5 == -1)
	{
		Local_175[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
	}
}

void func_300(int iParam0)//Position - 0xC601
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	iVar2 = NETWORK::GET_NETWORK_TIME();
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		iVar10 = __LIB_0__::func_138((Local_136.f_148[iVar9 /*4*/].f_2 == 1 || Local_136.f_148[iVar9 /*4*/].f_2 == 0), 11, 15) * 650;
		if (Local_136.f_148[iVar9 /*4*/].f_3 == -1 || (iVar2 < Local_136.f_148[iVar9 /*4*/] && iVar2 > (Local_136.f_148[iVar9 /*4*/] + iVar10)))
		{
		}
		else
		{
			func_184(Local_136.f_148[iVar9 /*4*/].f_1, &iVar7, &iVar8);
			bVar3 = (bVar3 || iVar7 == iVar0);
			bVar4 = (bVar4 || iVar8 == iVar1);
			bVar5 = (bVar5 || (Local_136.f_148[iVar9 /*4*/].f_2 == 1 && iVar8 == iVar1));
			bVar6 = (bVar6 || (Local_136.f_148[iVar9 /*4*/].f_2 == 2 && iVar7 == iVar0));
		}
		iVar9++;
	}
	if (bVar3)
	{
		if (bVar5)
		{
			if (iVar1 + 2 > 8)
			{
				Local_175[iParam0 /*37*/].f_34 = (iVar1 - 2);
			}
			else
			{
				Local_175[iParam0 /*37*/].f_34 = iVar1 + 2;
			}
		}
		else if ((iVar1 - 2) < 0)
		{
			Local_175[iParam0 /*37*/].f_34 = iVar1 + 2;
		}
		else
		{
			Local_175[iParam0 /*37*/].f_34 = (iVar1 - 2);
		}
	}
	if (bVar4)
	{
		if (bVar6)
		{
			if (iVar0 + 2 > 12)
			{
				Local_175[iParam0 /*37*/].f_33 = (iVar0 - 2);
			}
			else
			{
				Local_175[iParam0 /*37*/].f_33 = iVar0 + 2;
			}
		}
		else if ((iVar0 - 2) < 0)
		{
			Local_175[iParam0 /*37*/].f_33 = iVar0 + 2;
		}
		else
		{
			Local_175[iParam0 /*37*/].f_33 = (iVar0 - 2);
		}
	}
	if (!bVar3 && !bVar4)
	{
		Local_175[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
		Local_175[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
	}
}

void func_301(int iParam0)//Position - 0xC7EA
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	if (Local_175[iParam0 /*37*/].f_29 == -1 && Local_175[iParam0 /*37*/].f_30 == -1)
	{
		func_303(iParam0);
	}
	StringCopy(&cVar2, "", 64);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar2, "", 64);
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			StringIntConCat(&cVar2, Local_136[iVar0 /*5*/][iVar1], 64);
			StringConCat(&cVar2, " ", 64);
			iVar0++;
		}
		iVar1++;
	}
	if ((Local_175[iParam0 /*37*/].f_29 != -1 && Local_175[iParam0 /*37*/].f_30 != -1) && Local_136[(Local_175[iParam0 /*37*/].f_29 % 6) /*5*/][(Local_175[iParam0 /*37*/].f_30 % 4)] == Local_175[iParam0 /*37*/].f_6)
	{
		Local_175[iParam0 /*37*/].f_31 = 4;
	}
	if (Local_175[iParam0 /*37*/].f_29 != -1 && Local_175[iParam0 /*37*/].f_30 != -1)
	{
		func_302(iParam0);
	}
}

void func_302(int iParam0)//Position - 0xC8D9
{
	Local_175[iParam0 /*37*/].f_31++;
	Local_175[iParam0 /*37*/].f_31 = (Local_175[iParam0 /*37*/].f_31 % 6);
	if (Local_175[iParam0 /*37*/].f_31 == 0)
	{
		Local_175[iParam0 /*37*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	else if (Local_175[iParam0 /*37*/].f_31 == 5)
	{
		Local_175[iParam0 /*37*/].f_29 = -1;
		Local_175[iParam0 /*37*/].f_30 = -1;
		Local_175[iParam0 /*37*/].f_33 = Local_175[iParam0 /*37*/].f_29;
		Local_175[iParam0 /*37*/].f_34 = Local_175[iParam0 /*37*/].f_30;
		return;
	}
	switch (((Local_175[iParam0 /*37*/].f_31 + Local_175[iParam0 /*37*/].f_32) % 6))
	{
		case 0:
		case 4:
			Local_175[iParam0 /*37*/].f_33 = (Local_175[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_175[iParam0 /*37*/].f_34 = (Local_175[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		case 1:
			Local_175[iParam0 /*37*/].f_33 = Local_175[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_175[iParam0 /*37*/].f_34 = (Local_175[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		case 2:
			Local_175[iParam0 /*37*/].f_33 = Local_175[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_175[iParam0 /*37*/].f_34 = Local_175[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		case 3:
			Local_175[iParam0 /*37*/].f_33 = (Local_175[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_175[iParam0 /*37*/].f_34 = Local_175[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		case 5:
			break;
	}
}

void func_303(int iParam0)//Position - 0xCA7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 5:
			iVar2 = -1;
			iVar3 = -1;
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if ((iVar0 % 2) == 1 && (iVar1 % 2) == 0)
				{
					iVar2 = iVar0;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar3 = (iVar1 - 1);
					}
					else
					{
						iVar3 = iVar1 + 1;
					}
				}
				else if ((iVar1 % 2) == 1 && (iVar0 % 2) == 0)
				{
					iVar3 = iVar1;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar2 = (iVar0 - 1);
					}
					else
					{
						iVar2 = iVar0 + 1;
					}
				}
				else if (((iVar5 + iVar4) % 4) == 0)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 1)
				{
					iVar2 = iVar0 + 1;
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 2)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar2 = iVar0 + 1;
					iVar3 = iVar1 + 1;
				}
				if (iVar2 != -1 && iVar3 != -1)
				{
					if (Local_136[((iVar2 / 2) % 6) /*5*/][((iVar3 / 2) % 4)] != Local_175[iParam0 /*37*/].f_6)
					{
						Local_175[iParam0 /*37*/].f_29 = ((iVar2 / 2) % 6);
						Local_175[iParam0 /*37*/].f_30 = ((iVar3 / 2) % 4);
						return;
					}
				}
				iVar5++;
			}
			break;
		case 0:
			iVar7 = 0;
			while (iVar7 <= 3)
			{
				iVar6 = 0;
				while (iVar6 <= 5)
				{
					if (Local_136[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_175[iParam0 /*37*/].f_6)
					{
						Local_175[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_175[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		case 1:
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				iVar7 = 0;
				while (iVar7 <= 3)
				{
					if (Local_136[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_175[iParam0 /*37*/].f_6)
					{
						Local_175[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_175[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		case 2:
			iVar6 = 5;
			while (iVar6 <= 0)
			{
				iVar7 = 3;
				while (iVar7 <= 0)
				{
					if (Local_136[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_175[iParam0 /*37*/].f_6)
					{
						Local_175[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_175[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		case 3:
			iVar7 = 3;
			while (iVar7 <= 0)
			{
				iVar6 = 5;
				while (iVar6 <= 0)
				{
					if (Local_136[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_175[iParam0 /*37*/].f_6)
					{
						Local_175[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_175[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		case 4:
			Local_175[iParam0 /*37*/].f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			Local_175[iParam0 /*37*/].f_30 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			break;
	}
}

bool func_304(int iParam0)//Position - 0xCDE9
{
	return Local_175[iParam0 /*37*/].f_2 <= 4;
}

int func_305(int iParam0)//Position - 0xCDFC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (Local_136.f_148[iVar4 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_184(Local_136.f_148[iVar4 /*4*/].f_1, &iVar2, &iVar3);
			if (iVar2 == iVar0 || iVar3 == iVar1)
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

var func_306(int iParam0)//Position - 0xCE64
{
	return Local_136.f_162;
}

int func_307(int iParam0)//Position - 0xCE71
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if (iVar4 != iParam0 && (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) || Local_175[iVar4 /*37*/].f_25))
		{
			func_184(Local_174[iVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				if (iVar3 <= iVar1)
				{
					return 4;
				}
				else if (iVar3 >= iVar1)
				{
					return 5;
				}
			}
			else if (iVar3 == iVar1)
			{
				if (iVar2 <= iVar0)
				{
					return 6;
				}
				else if (iVar2 >= iVar0)
				{
					return 7;
				}
			}
		}
		iVar4++;
	}
	return -1;
}

int func_308(int iParam0)//Position - 0xCF15
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if ((iVar4 != iParam0 && (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) || Local_175[iVar4 /*37*/].f_25)) && (Local_173[iVar4 /*9*/].f_2 > 0 || Local_175[iVar4 /*37*/].f_2 > 0))
		{
			func_184(Local_174[iVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				return ((iVar3 <= iVar1 && Local_175[iParam0 /*37*/].f_9.f_4 == 0) || (iVar3 >= iVar1 && Local_175[iParam0 /*37*/].f_9.f_4 == 1));
			}
			else if (iVar3 == iVar1)
			{
				return ((iVar2 <= iVar0 && Local_175[iParam0 /*37*/].f_9.f_4 == 2) || (iVar2 >= iVar0 && Local_175[iParam0 /*37*/].f_9.f_4 == 3));
			}
		}
		iVar4++;
	}
	return 0;
}

void func_309()//Position - 0xD016
{
	func_317();
	func_314();
	func_310();
}

void func_310()//Position - 0xD02A
{
	int iVar0;
	var uVar1;
	bool bVar2;
	if (Local_173[Local_135.f_178 /*9*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_312();
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_311(Local_174[Local_135.f_178 /*16*/].f_4);
	}
	if (bVar2)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_135.f_178.f_3 + Local_135.f_59[Local_173[Local_135.f_178 /*9*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_174[Local_135.f_178 /*16*/].f_4;
		Local_174[Local_135.f_178 /*16*/].f_5[Local_135.f_307 /*5*/] = NETWORK::GET_NETWORK_TIME();
		Local_174[Local_135.f_178 /*16*/].f_5[Local_135.f_307 /*5*/].f_3 = uVar1;
		Local_174[Local_135.f_178 /*16*/].f_5[Local_135.f_307 /*5*/].f_4 = Local_173[Local_135.f_178 /*9*/].f_5;
		Local_174[Local_135.f_178 /*16*/].f_5[Local_135.f_307 /*5*/].f_1 = { Local_135.f_204[Local_135.f_178 /*19*/] };
		Local_174[Local_135.f_178 /*16*/].f_4 = uVar1;
		Local_135.f_178.f_3 = NETWORK::GET_NETWORK_TIME();
		Local_135.f_307++;
		if (Local_135.f_307 >= 2)
		{
			Local_135.f_307 = 0;
		}
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 50, 100);
	}
}

int func_311(int iParam0)//Position - 0xD141
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	Var0 = { func_187(func_71(12, 8)) };
	Var1 = { func_187(func_71(0, 0)) };
	switch (iParam0)
	{
		case 0:
			if (__LIB_11__::func_98(Local_135.f_204[Local_135.f_178 /*19*/].f_1, (Var1.f_1 - 0.0001f), (Var1.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		case 1:
			if (__LIB_11__::func_98(Local_135.f_204[Local_135.f_178 /*19*/].f_1, (Var0.f_1 - 0.0001f), (Var0.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		case 2:
			if (__LIB_11__::func_98(Local_135.f_204[Local_135.f_178 /*19*/], (Var1.f_0 - 0.0001f), (Var1.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
		case 3:
			if (__LIB_11__::func_98(Local_135.f_204[Local_135.f_178 /*19*/], (Var0.f_0 - 0.0001f), (Var0.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
	}
	func_184(Local_174[Local_135.f_178 /*16*/], &iVar2, &iVar3);
	func_184(Local_174[Local_135.f_178 /*16*/].f_1, &iVar4, &iVar5);
	if (Local_174[Local_135.f_178 /*16*/].f_2 + func_183(Local_135.f_178)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar3 != iVar5)
		{
			if (iParam0 == 2 || iParam0 == 3)
			{
				return 0;
			}
		}
		else if (iVar2 != iVar4)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_312()//Position - 0xD2AC
{
	int iVar0;
	if (func_313())
	{
		return -1;
	}
	iVar0 = 229;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 203;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		return 8;
	}
	return -1;
}

int func_313()//Position - 0xD2DF
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (Local_173[Local_135.f_178 /*9*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_314()//Position - 0xD304
{
	int iVar0;
	bool bVar1;
	iVar0 = func_316();
	bVar1 = func_315(Local_135.f_178, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_174[Local_135.f_178 /*16*/].f_4 = 0;
				break;
			case 5:
				Local_174[Local_135.f_178 /*16*/].f_4 = 1;
				break;
			case 6:
				Local_174[Local_135.f_178 /*16*/].f_4 = 2;
				break;
			case 7:
				Local_174[Local_135.f_178 /*16*/].f_4 = 3;
				break;
			}
	}
}

int func_315(int iParam0, int iParam1)//Position - 0xD37E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_184(Local_174[Local_135.f_178 /*16*/], &iVar0, &iVar1);
	func_184(Local_174[Local_135.f_178 /*16*/].f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_174[Local_135.f_178 /*16*/].f_2 + func_183(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_316()//Position - 0xD43C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	if (func_313())
	{
		return -1;
	}
	iVar0 = 363;
	iVar1 = 363;
	iVar2 = 363;
	iVar3 = 363;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 188;
		iVar1 = 187;
		iVar2 = 189;
		iVar3 = 190;
	}
	fVar4 = 0f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar4 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	}
	if (fVar4 < -0.65f || (iVar0 != 363 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0)))
	{
		return 4;
	}
	if (fVar4 > 0.65f || (iVar1 != 363 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1)))
	{
		return 5;
	}
	fVar5 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
	if (fVar5 < -0.65f || (iVar2 != 363 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2)))
	{
		return 6;
	}
	if (fVar5 > 0.65f || (iVar3 != 363 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar3)))
	{
		return 7;
	}
	return -1;
}

void func_317()//Position - 0xD536
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	iVar0 = func_318();
	bVar1 = false;
	if (((!((Local_174[Local_135.f_178 /*16*/].f_2 + func_183(Local_135.f_178)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_135.f_141, 1)) && NETWORK::GET_NETWORK_TIME() < Local_174[Local_135.f_178 /*16*/].f_2 + 100) && Local_174[Local_135.f_178 /*16*/].f_3 != iVar0) && !BitTest(Local_135.f_141, 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_184(Local_174[Local_135.f_178 /*16*/].f_1, &iVar2, &iVar3);
		func_184(Local_174[Local_135.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	else
	{
		func_184(Local_174[Local_135.f_178 /*16*/], &iVar2, &iVar3);
		func_184(Local_174[Local_135.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_174[Local_135.f_178 /*16*/].f_2 + func_183(Local_135.f_178)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_135.f_141, 1)) || bVar1)
		{
			if (bVar1 || !BitTest(Local_135.f_141, 5))
			{
				MISC::SET_BIT(&(Local_135.f_141), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_174[Local_135.f_178 /*16*/] = func_71(iVar2, iVar3);
			Local_174[Local_135.f_178 /*16*/].f_1 = func_71(iVar4, iVar5);
			if (Local_135.f_178.f_2 > 0)
			{
				Local_173[Local_135.f_178 /*9*/].f_1 = 0.75f;
				Local_135.f_178.f_2 = (Local_135.f_178.f_2 - 1);
			}
			else if (!__LIB_11__::func_98(Local_173[Local_135.f_178 /*9*/].f_1, (1f - 0.0001f), (1f + 0.0001f)))
			{
				Local_173[Local_135.f_178 /*9*/].f_1 = 1f;
			}
			Local_174[Local_135.f_178 /*16*/].f_2 = NETWORK::GET_NETWORK_TIME();
			if (iVar8 > 0)
			{
				Local_174[Local_135.f_178 /*16*/].f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_174[Local_135.f_178 /*16*/].f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_174[Local_135.f_178 /*16*/].f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_174[Local_135.f_178 /*16*/].f_4 = 1;
			}
			MISC::CLEAR_BIT(&(Local_135.f_141), 1);
			MISC::CLEAR_BIT(&(Local_135.f_141), 0);
			Local_174[Local_135.f_178 /*16*/].f_3 = iVar0;
			if (!BitTest(Local_135.f_141, 5))
			{
				MISC::SET_BIT(&(Local_135.f_141), 5);
			}
		}
	}
}

int func_318()//Position - 0xD80D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	if (func_313())
	{
		return -1;
	}
	if (!BitTest(Local_135.f_141, 5))
	{
		return func_296(Local_173[Local_135.f_178 /*9*/].f_6);
	}
	iVar0 = 363;
	iVar1 = 363;
	iVar2 = 363;
	iVar3 = 363;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 363;
		iVar1 = 363;
		iVar2 = 363;
		iVar3 = 363;
	}
	fVar4 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	if (fVar4 < -0.65f || (iVar0 != 363 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0)))
	{
		return 0;
	}
	if (fVar4 > 0.65f || (iVar1 != 363 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1)))
	{
		return 1;
	}
	fVar5 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
	if (fVar5 < -0.65f || (iVar2 != 363 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2)))
	{
		return 2;
	}
	if (fVar5 > 0.65f || (iVar3 != 363 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar3)))
	{
		return 3;
	}
	return -1;
}

void func_319()//Position - 0xD91B
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_169("Ambience", &(Local_135.f_428), __LIB_3__::func_990(-1f, -1f), 0);
	func_281();
	func_273();
	func_171();
	func_320();
	if (NETWORK::GET_NETWORK_TIME() < Local_136.f_146)
	{
		return;
	}
	if (!BitTest(Local_135.f_417, 1))
	{
		MISC::SET_BIT(&(Local_135.f_417), 1);
		func_151("SCGW_H_MOVE", 7500, 0);
	}
	func_168(4);
	__LIB_31__::func_23(func_19(1));
	func_15(7);
}

void func_320()//Position - 0xD9C1
{
	func_124();
	func_188();
	func_182();
	if ((Local_136.f_146 - NETWORK::GET_NETWORK_TIME()) <= 4500)
	{
		func_214();
	}
	func_198();
	func_175();
	func_104();
	func_103();
}

void func_321()//Position - 0xD9F9
{
	int iVar0;
	func_326();
	func_171();
	if (Local_136.f_145 <= 2)
	{
		return;
	}
	func_324();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_135.f_178 && Local_175[iVar0 /*37*/].f_25)
		{
			func_322(iVar0);
		}
		iVar0++;
	}
	func_168(3);
	func_15(6);
}

void func_322(int iParam0)//Position - 0xDA53
{
	int iVar0;
	int iVar1;
	func_323(iParam0);
	Local_175[iParam0 /*37*/].f_2 = 8;
	func_230(iParam0, 2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_175[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/] = -2147483647;
		Local_175[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1 = -1f;
		Local_175[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_175[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_3 = -1;
		Local_175[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_135.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { __LIB_3__::func_990(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_135.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_135.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_135.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_135.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_135.f_437 = -2147483647;
	Local_135.f_439 = { __LIB_3__::func_990(0f, 0f) };
	MISC::SET_BIT(&(Local_135.f_142[iParam0]), 1);
	MISC::SET_BIT(&(Local_135.f_142[iParam0]), 0);
	MISC::CLEAR_BIT(&(Local_135.f_142[iParam0]), 2);
	MISC::CLEAR_BIT(&(Local_135.f_142[iParam0]), 5);
	__LIB_0__::func_579(&(Local_135.f_316));
	Local_175[iParam0 /*37*/].f_4 = -2147483647;
	Local_175[iParam0 /*37*/].f_1 = 1f;
	Local_135.f_178.f_2 = 0;
	Local_135.f_308 = 0;
	Local_135.f_307 = 0;
	Local_135.f_429 = 0;
	Local_175[iParam0 /*37*/].f_5 = 0;
}

void func_323(int iParam0)//Position - 0xDC0C
{
	Local_175[iParam0 /*37*/].f_9 = func_71(Local_135.f_9[Local_175[iParam0 /*37*/].f_6 /*3*/][0], Local_135.f_9[Local_175[iParam0 /*37*/].f_6 /*3*/][1]);
	Local_175[iParam0 /*37*/].f_9.f_1 = Local_175[iParam0 /*37*/].f_9;
	if (Local_135.f_9[Local_175[iParam0 /*37*/].f_6 /*3*/][1] == 0)
	{
		Local_175[iParam0 /*37*/].f_9.f_4 = 1;
	}
	else
	{
		Local_175[iParam0 /*37*/].f_9.f_4 = 0;
	}
}

void func_324()//Position - 0xDC8A
{
	int iVar0;
	int iVar1;
	var uVar2[4];
	func_325();
	Local_173[Local_135.f_178 /*9*/].f_2 = 8;
	func_236(2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_174[Local_135.f_178 /*16*/].f_5[iVar0 /*5*/] = -2147483647;
		Local_174[Local_135.f_178 /*16*/].f_5[iVar0 /*5*/].f_1 = -1f;
		Local_174[Local_135.f_178 /*16*/].f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_174[Local_135.f_178 /*16*/].f_5[iVar0 /*5*/].f_3 = -1;
		Local_174[Local_135.f_178 /*16*/].f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_135.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { __LIB_3__::func_990(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_135.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_135.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_135.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_135.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_135.f_437 = -2147483647;
	Local_135.f_439 = { __LIB_3__::func_990(0f, 0f) };
	MISC::SET_BIT(&(Local_135.f_141), 1);
	MISC::SET_BIT(&(Local_135.f_141), 0);
	MISC::CLEAR_BIT(&(Local_135.f_141), 2);
	MISC::CLEAR_BIT(&(Local_135.f_141), 5);
	__LIB_0__::func_579(&(Local_135.f_316));
	Local_173[Local_135.f_178 /*9*/].f_4 = -2147483647;
	Local_173[Local_135.f_178 /*9*/].f_1 = 1f;
	__LIB_26__::func_458(Local_173[Local_135.f_178 /*9*/].f_7, &uVar2);
	uVar2[3] = Local_173[Local_135.f_178 /*9*/].f_6;
	Local_173[Local_135.f_178 /*9*/].f_7 = __LIB_20__::func_591(&uVar2);
	Local_135.f_178.f_2 = 0;
	Local_135.f_308 = 0;
	Local_135.f_307 = 0;
	Local_135.f_429 = 0;
	Local_173[Local_135.f_178 /*9*/].f_5 = 0;
}

void func_325()//Position - 0xDE6E
{
	Local_174[Local_135.f_178 /*16*/] = func_71(Local_135.f_9[Local_173[Local_135.f_178 /*9*/].f_6 /*3*/][0], Local_135.f_9[Local_173[Local_135.f_178 /*9*/].f_6 /*3*/][1]);
	Local_174[Local_135.f_178 /*16*/].f_1 = Local_174[Local_135.f_178 /*16*/];
	if (Local_135.f_9[Local_173[Local_135.f_178 /*9*/].f_6 /*3*/][1] == 0)
	{
		Local_174[Local_135.f_178 /*16*/].f_4 = 1;
	}
	else
	{
		Local_174[Local_135.f_178 /*16*/].f_4 = 0;
	}
}

void func_326()//Position - 0xDEF2
{
	func_124();
	func_188();
	func_181(Local_135.f_107.f_25, 153);
	func_175();
	func_104();
	func_103();
}

void func_327()//Position - 0xDF1C
{
	func_326();
	func_171();
	if (Local_136.f_145 <= 1)
	{
		return;
	}
	Local_134.f_16 = Local_135.f_148;
	func_15(5);
}

void func_328()//Position - 0xDF45
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_332();
	iVar0 = 199;
	iVar1 = 225;
	iVar2 = 193;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 201;
		iVar1 = 214;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_135.f_441 + 500)
	{
		if (Local_173[Local_135.f_178 /*9*/] != 1)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
			{
				func_16();
				func_163(1);
				func_236(1);
				func_133("Frontend_Ready");
				Local_135.f_441 = NETWORK::GET_NETWORK_TIME();
			}
			if (Local_135.f_452)
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2))
				{
					iVar3 = 0;
					while (iVar3 <= 3)
					{
						if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)) && !Local_175[iVar3 /*37*/].f_25)
						{
							Local_175[iVar3 /*37*/].f_6 = func_331();
							Local_175[iVar3 /*37*/].f_25 = 1;
							Local_175[iVar3 /*37*/] = 1;
						}
						else
						{
							iVar3++;
						}
					}
				}
			}
		}
		if (Local_173[Local_135.f_178 /*9*/] == 1)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
			{
				func_16();
				func_236(0);
				func_133("Frontend_Unready");
				Local_135.f_441 = NETWORK::GET_NETWORK_TIME();
			}
		}
	}
	func_330();
	if (Local_136.f_145 >= 2)
	{
		func_15(4);
		func_133("Frontend_Start_Game");
		__LIB_31__::func_29(1);
	}
}

void func_330()//Position - 0xE0A6
{
	struct<3> Var0;
	MISC::SET_BIT(&(Local_135.f_417), 0);
	if (Local_173[Local_135.f_178 /*9*/] == 1)
	{
		StringCopy(&Var0, "SCGW_H_RDY1", 24);
	}
	else
	{
		StringCopy(&Var0, "SCGW_H_RDY0", 24);
		if (Local_135.f_178.f_1 && Local_135.f_452)
		{
			StringConCat(&Var0, "_H", 24);
		}
		if (__LIB_0__::func_52())
		{
			StringConCat(&Var0, "_PS4", 24);
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		StringConCat(&Var0, "_PC", 24);
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_16();
	func_126(&Var0);
}

int func_331()//Position - 0xE128
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Local_173[iVar0 /*9*/].f_6 == iVar1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar2 = false;
			}
			if (Local_175[iVar0 /*37*/].f_6 == iVar1)
			{
				bVar2 = false;
			}
			iVar0++;
		}
		if (bVar2)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_332()//Position - 0xE194
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar3;
	func_124();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_139(iVar0, 0);
		if (Local_135.f_149[iVar0] != -1 && Local_173[Local_135.f_149[iVar0] /*9*/] == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Local_135.f_148)
	{
		if (Local_173[Local_135.f_178 /*9*/] == 1)
		{
			StringCopy(&cVar2, "SCGW_WFP", 16);
		}
		else
		{
			StringCopy(&cVar2, "SCGW_PS", 16);
		}
		iVar3 = SYSTEM::ROUND((SYSTEM::SIN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.5058f)) * 255f));
		if (iVar3 > 51)
		{
			iVar3 = 255;
		}
		else
		{
			iVar3 = 0;
		}
		HUD::SET_TEXT_SCALE(0.65f, 0.65f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, iVar3);
		HUD::SET_TEXT_DROP_SHADOW();
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar2);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_11__::func_635(0.5f), 0.885f, 0);
	}
	func_104();
	func_103();
}

void func_333()//Position - 0xE27F
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_124();
	GRAPHICS::DRAW_BINK_MOVIE(Local_135.f_427, 0.5f, 0.5f, (1f * fLocal_131), 1f, 0f, 255, 255, 255, 255);
	if (GRAPHICS::GET_BINK_MOVIE_TIME(Local_135.f_427) >= 30f && !BitTest(Local_135.f_141, 3))
	{
		MISC::SET_BIT(&(Local_135.f_141), 3);
		__LIB_31__::func_23(func_19(0));
	}
	if (GRAPHICS::GET_BINK_MOVIE_TIME(Local_135.f_427) >= 99f)
	{
		GRAPHICS::STOP_BINK_MOVIE(Local_135.f_427);
		GRAPHICS::RELEASE_BINK_MOVIE(Local_135.f_427);
		func_15(3);
		Local_135.f_154[Local_173[Local_135.f_178 /*9*/].f_6] = NETWORK::GET_NETWORK_TIME();
		func_168(2);
	}
	func_104();
	func_103();
}

void func_334()//Position - 0xE35C
{
	if (!__LIB_32__::func_727())
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGrid", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGrid"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerYellow", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerYellow"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerPurple", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerPurple"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerGreen", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerGreen"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerBlue", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerBlue"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridTiles", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridTiles"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridHUD", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridHUD"))
	{
		return;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("SCGW", 3);
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("SCGW", 3))
	{
		return;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_TW", false, -1))
	{
		return;
	}
	func_15(2);
	GRAPHICS::PLAY_BINK_MOVIE(Local_135.f_427);
	GRAPHICS::SET_BINK_SHOULD_SKIP(Local_135.f_427, true);
	func_133("Frontend_Degenatron_Screen");
}

void func_337()//Position - 0xE4C0
{
	int iVar0;
	int iVar1;
	if (Local_136.f_145 > 1)
	{
		if (__LIB_2__::func_331(PLAYER::PLAYER_ID()))
		{
			Local_135.f_443.f_4 = 0;
			Local_135.f_443.f_3 = 0;
			func_354(&(Local_135.f_443), 11);
		}
		func_15(11);
		return;
	}
	__LIB_36__::func_28();
	func_344(0);
	func_343();
	func_342();
	func_341();
	func_340();
	func_339();
	func_338();
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_135.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_135.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_135.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_135.f_154[iVar0] = -2147483647;
		iVar0++;
	}
	Local_135.f_427 = GRAPHICS::SET_BINK_MOVIE("DegenSting_StreetCrime_1920x1080_auto");
	func_15(1);
}

void func_338()//Position - 0xE5A4
{
	Local_135.f_59[0 /*5*/] = "";
	Local_135.f_59[0 /*5*/].f_2 = 0;
	Local_135.f_59[0 /*5*/].f_4 = 0;
	Local_135.f_59[0 /*5*/].f_3 = 0;
	Local_135.f_59[0 /*5*/].f_1 = 0;
	Local_135.f_59[1 /*5*/] = "gun_";
	Local_135.f_59[1 /*5*/].f_2 = 2;
	Local_135.f_59[1 /*5*/].f_4 = 2;
	Local_135.f_59[1 /*5*/].f_3 = 700;
	Local_135.f_59[1 /*5*/].f_1 = 300;
	Local_135.f_59[2 /*5*/] = "uzi_";
	Local_135.f_59[2 /*5*/].f_2 = 1;
	Local_135.f_59[2 /*5*/].f_4 = 1;
	Local_135.f_59[2 /*5*/].f_3 = 325;
	Local_135.f_59[2 /*5*/].f_1 = 300;
	Local_135.f_59[3 /*5*/] = "rifle_";
	Local_135.f_59[3 /*5*/].f_2 = 3;
	Local_135.f_59[3 /*5*/].f_4 = 2;
	Local_135.f_59[3 /*5*/].f_3 = 650;
	Local_135.f_59[3 /*5*/].f_1 = 200;
	Local_135.f_59[4 /*5*/] = "rocket_";
	Local_135.f_59[4 /*5*/].f_2 = 5;
	Local_135.f_59[4 /*5*/].f_4 = 8;
	Local_135.f_59[4 /*5*/].f_3 = 2000;
	Local_135.f_59[4 /*5*/].f_1 = 525;
	Local_135.f_59[5 /*5*/] = "shotgun_";
	Local_135.f_59[5 /*5*/].f_2 = 2;
	Local_135.f_59[5 /*5*/].f_4 = 4;
	Local_135.f_59[5 /*5*/].f_3 = 1000;
	Local_135.f_59[5 /*5*/].f_1 = 300;
}

void func_339()//Position - 0xE6F2
{
	Local_135.f_90[0 /*2*/] = "heart_anim_";
	Local_135.f_90[0 /*2*/].f_1 = 10;
	Local_135.f_90[1 /*2*/] = "speed_anim_";
	Local_135.f_90[1 /*2*/].f_1 = 10;
	Local_135.f_90[2 /*2*/] = "phone_anim_";
	Local_135.f_90[2 /*2*/].f_1 = 10;
	Local_135.f_90[3 /*2*/] = "icon_pistol";
	Local_135.f_90[3 /*2*/].f_1 = 0;
	Local_135.f_90[4 /*2*/] = "icon_uzi";
	Local_135.f_90[4 /*2*/].f_1 = 0;
	Local_135.f_90[5 /*2*/] = "icon_rifle";
	Local_135.f_90[5 /*2*/].f_1 = 0;
	Local_135.f_90[6 /*2*/] = "icon_rocket_launcher";
	Local_135.f_90[6 /*2*/].f_1 = 0;
	Local_135.f_90[7 /*2*/] = "icon_shotgun";
	Local_135.f_90[7 /*2*/].f_1 = 0;
}

void func_340()//Position - 0xE7A5
{
	Local_135.f_22[0 /*4*/] = "ice_cream_van_";
	Local_135.f_22[0 /*4*/].f_1 = 1;
	Local_135.f_22[0 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[0 /*4*/].f_2.f_1 = 0.02963f;
	Local_135.f_22[1 /*4*/] = "ambulance_";
	Local_135.f_22[1 /*4*/].f_1 = 2;
	Local_135.f_22[1 /*4*/].f_2 = 0.035417f;
	Local_135.f_22[1 /*4*/].f_2.f_1 = 0.02963f;
	Local_135.f_22[2 /*4*/] = "police_";
	Local_135.f_22[2 /*4*/].f_1 = 2;
	Local_135.f_22[2 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[2 /*4*/].f_2.f_1 = 0.025926f;
	Local_135.f_22[3 /*4*/] = "fire_truck_";
	Local_135.f_22[3 /*4*/].f_1 = 2;
	Local_135.f_22[3 /*4*/].f_2 = 0.045833f;
	Local_135.f_22[3 /*4*/].f_2.f_1 = 0.02963f;
	Local_135.f_22[4 /*4*/] = "tank_";
	Local_135.f_22[4 /*4*/].f_1 = 1;
	Local_135.f_22[4 /*4*/].f_2 = 0.041667f;
	Local_135.f_22[4 /*4*/].f_2.f_1 = 0.025926f;
	Local_135.f_22[5 /*4*/] = "gang_car_green";
	Local_135.f_22[5 /*4*/].f_1 = 1;
	Local_135.f_22[5 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[5 /*4*/].f_2.f_1 = 0.059259f;
	Local_135.f_22[6 /*4*/] = "gang_car_purple";
	Local_135.f_22[6 /*4*/].f_1 = 1;
	Local_135.f_22[6 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[6 /*4*/].f_2.f_1 = 0.059259f;
	Local_135.f_22[7 /*4*/] = "gang_car_yellow";
	Local_135.f_22[7 /*4*/].f_1 = 1;
	Local_135.f_22[7 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[7 /*4*/].f_2.f_1 = 0.059259f;
	Local_135.f_22[8 /*4*/] = "gang_car_blue";
	Local_135.f_22[8 /*4*/].f_1 = 1;
	Local_135.f_22[8 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[8 /*4*/].f_2.f_1 = 0.059259f;
}

void func_341()//Position - 0xE97C
{
	Local_135.f_422[0] = "green" /* GXT: Green */;
	Local_135.f_422[1] = "purple" /* GXT: Schafter Purple */;
	Local_135.f_422[2] = "yellow" /* GXT: Yellow */;
	Local_135.f_422[3] = "blue" /* GXT: Blue */;
}

void func_342()//Position - 0xE9B4
{
	__LIB_11__::func_94(&(Local_135.f_107[0 /*4*/]), 78, 187, 30, 255);
	__LIB_11__::func_94(&(Local_135.f_107[1 /*4*/]), 171, 0, 255, 255);
	__LIB_11__::func_94(&(Local_135.f_107[2 /*4*/]), 255, 228, 0, 255);
	__LIB_11__::func_94(&(Local_135.f_107[3 /*4*/]), 35, 92, 255, 255);
	__LIB_11__::func_94(&(Local_135.f_107.f_29), 221, 21, 10, 255);
	__LIB_11__::func_94(&(Local_135.f_107.f_17), 255, 255, 255, 255);
	__LIB_11__::func_94(&(Local_135.f_107.f_21), 55, 55, 55, 255);
	__LIB_11__::func_94(&(Local_135.f_107.f_25), 0, 0, 0, 255);
}

void func_343()//Position - 0xEA3F
{
	Local_135[0 /*2*/] = { __LIB_3__::func_990(0.170833f, (0.909259f - 0.019444f)) };
	Local_135[1 /*2*/] = { __LIB_3__::func_990(0.170833f, (0.109259f + 0.019444f)) };
	Local_135[2 /*2*/] = { __LIB_3__::func_990(0.829167f, (0.109259f + 0.019444f)) };
	Local_135[3 /*2*/] = { __LIB_3__::func_990(0.829167f, (0.909259f - 0.019444f)) };
	Local_135.f_9[0 /*3*/][0] = 1;
	Local_135.f_9[0 /*3*/][1] = 2;
	Local_135.f_9[1 /*3*/][0] = 11;
	Local_135.f_9[1 /*3*/][1] = 2;
	Local_135.f_9[2 /*3*/][0] = 1;
	Local_135.f_9[2 /*3*/][1] = 6;
	Local_135.f_9[3 /*3*/][0] = 11;
	Local_135.f_9[3 /*3*/][1] = 6;
}

void func_344(int iParam0)//Position - 0xEB0D
{
	Local_176.f_137 = iParam0;
	__LIB_11__::func_94(&(Local_176[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_176[1 /*17*/].f_6 = 1000;
	Local_176[1 /*17*/].f_7 = 10000;
	Local_176[2 /*17*/].f_1 = 1;
	Local_176[2 /*17*/].f_8 = 40;
	__LIB_11__::func_94(&(Local_176[2 /*17*/].f_9), 0, 0, 0, 0);
	__LIB_11__::func_94(&(Local_176[3 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_11__::func_94(&(Local_176[4 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_11__::func_94(&(Local_176[5 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_11__::func_94(&(Local_176[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_176.f_137)
	{
		case 2:
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_11__::func_94(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_11__::func_94(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_11__::func_94(&(Local_176[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[3 /*17*/] = 1;
			break;
		case 3:
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_11__::func_94(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_11__::func_94(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_11__::func_94(&(Local_176[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[4 /*17*/] = 1;
			break;
		case 4:
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_11__::func_94(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_11__::func_94(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_11__::func_94(&(Local_176[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[5 /*17*/] = 1;
			break;
		case 1:
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_11__::func_94(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_11__::func_94(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[3 /*17*/] = 1;
			break;
		case 0:
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_11__::func_94(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_11__::func_94(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 10);
			__LIB_11__::func_94(&(Local_176[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[5 /*17*/] = 1;
			break;
		case 6:
			__LIB_11__::func_94(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 10);
			__LIB_11__::func_94(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 8);
			__LIB_11__::func_94(&(Local_176[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_176[0 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[7 /*17*/] = 1;
			break;
		case 7:
			__LIB_11__::func_94(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_176[2 /*17*/] = 1;
			Local_176[0 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_176[3 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_176[6 /*17*/] = 1;
			break;
		case 5:
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_11__::func_94(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_11__::func_94(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[3 /*17*/] = 1;
			break;
		case 8:
			Local_176[1 /*17*/] = 0;
			Local_176[2 /*17*/] = 0;
			Local_176[0 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_176[6 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_176[7 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 9:
			Local_176[1 /*17*/] = 0;
			Local_176[2 /*17*/] = 0;
			Local_176[0 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_176[6 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_176[7 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 10:
			Local_176[1 /*17*/] = 0;
			Local_176[2 /*17*/] = 0;
			Local_176[0 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_176[6 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_176[7 /*17*/] = 1;
			__LIB_11__::func_94(&(Local_176[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 11:
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 15);
			__LIB_11__::func_94(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 10);
			__LIB_11__::func_94(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[3 /*17*/] = 1;
			break;
		case 12:
			__LIB_11__::func_94(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 3);
			__LIB_11__::func_94(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 15);
			__LIB_11__::func_94(&(Local_176[0 /*17*/].f_9), 0, 0, 255, 90);
			__LIB_11__::func_94(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 0;
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			break;
	}
}

void func_354(var uParam0, int iParam1)//Position - 0xF27A
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0.f_0 = -1887020194;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428, 1))
		{
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428), 1);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!__LIB_0__::func_649(&(uParam0->f_1)))
	{
		__LIB_0__::func_580(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (__LIB_0__::func_649(&(uParam0->f_1)) && !func_93(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			__LIB_0__::func_579(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		__LIB_0__::func_579(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = __LIB_0__::func_679(PLAYER::PLAYER_ID());
		if (iVar3 != -1)
		{
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar3);
			uParam0->f_5 = 1;
		}
	}
}

void func_356()//Position - 0xF3E5
{
	bool bVar0;
	int iVar1;
	if (Global_1931416.f_1 != 0)
	{
		func_163(0);
	}
	Local_135.f_411 = (Local_135.f_411 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	Local_135.f_412 = SYSTEM::FLOOR((IntToFloat(Local_135.f_411) / 66f));
	Local_135.f_411 = (Local_135.f_411 - SYSTEM::ROUND((66f * IntToFloat(Local_135.f_412))));
	Local_135.f_413 = (Local_135.f_413 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	Local_135.f_414 = SYSTEM::FLOOR((IntToFloat(Local_135.f_413) / (66f * 3f)));
	Local_135.f_413 = (Local_135.f_413 - SYSTEM::ROUND(((66f * 3f) * IntToFloat(Local_135.f_414))));
	Local_135.f_311 = (Local_135.f_311 + Local_135.f_412);
	Local_135.f_416 = (Local_135.f_416 + Local_135.f_414);
	if (Local_135.f_416 >= 3)
	{
		Local_135.f_416 = 0;
	}
	func_398();
	func_397();
	func_396();
	if (Local_135.f_140 >= 11)
	{
		return;
	}
	if (!__LIB_4__::func_715())
	{
		func_15(11);
		return;
	}
	if (func_383())
	{
		if (__LIB_2__::func_331(PLAYER::PLAYER_ID()))
		{
			Local_135.f_443.f_4 = 0;
			Local_135.f_443.f_3 = 0;
			func_354(&(Local_135.f_443), 11);
		}
		func_15(11);
		return;
	}
	if ((Local_135.f_178.f_1 && !Local_136.f_164) && (Local_135.f_435 == -2147483647 || (NETWORK::GET_NETWORK_TIME() - Local_135.f_435) > 5000))
	{
		__LIB_29__::func_178(__LIB_6__::func_940(PLAYER::PLAYER_ID()), 0);
		Local_135.f_435 = NETWORK::GET_NETWORK_TIME();
	}
	func_373();
	MISC::CLEAR_BIT(&(Local_135.f_417), 0);
	bVar0 = Local_135.f_140 >= 2;
	__LIB_36__::func_29(bVar0);
	Local_135.f_452 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Local_135.f_178 != iVar1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			Local_135.f_452 = 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_135.f_452)
		{
			Local_175[iVar1 /*37*/].f_25 = 0;
			func_12(0);
		}
		if (Local_175[iVar1 /*37*/].f_25)
		{
			func_12(1);
		}
		iVar1++;
	}
}

void func_373()//Position - 0xF917
{
	int iVar0;
	struct<3> Var1;
	struct<5> Var2;
	struct<4> Var3;
	struct<5> Var4;
	struct<15> Var5;
	struct<2> Var6;
	Var5.f_3 = 10;
	Var5.f_14 = 10;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) != 174)
		{
		}
		else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 3))
		{
			if (Var1.f_0 == 1391426543)
			{
				func_381(Var1.f_2);
			}
			else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var2, 5))
			{
				if (Var2.f_0 == 166716001)
				{
					func_379(Var2.f_2, Var2.f_3, Var2.f_4);
				}
				else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var3, 4))
				{
					if (Var3.f_0 == 1719815852)
					{
						func_378(Var3.f_3, Var3.f_2);
					}
					else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 5))
					{
						if (Var3.f_0 == 538776314)
						{
							func_377(Var4.f_2, Var4.f_3, Var4.f_4);
						}
						else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var5, 25))
						{
							if (Var5.f_0 == -1168862534)
							{
								if (Local_136.f_164)
								{
								}
								else if (Var5.f_2 != 0)
								{
								}
								else
								{
									func_375(&(Var5.f_3), &(Var5.f_14));
									Jump @301; //curOff = 264
									if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var6, 2))
									{
										if (Var6.f_0 == -658279885)
										{
											func_374(Var6.f_1);
										}
									}
								}
								iVar0++;
							}
void func_374(int iParam0)//Position - 0xFA50
{
	int iVar0;
	int iVar1;
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	iVar1 = func_130(iVar0);
	if (iVar1 < 0 || iVar1 >= 10)
	{
		return;
	}
	Local_136.f_165[iVar1 /*3*/] = Local_173[iVar0 /*9*/].f_7;
	__LIB_20__::func_592(__LIB_6__::func_940(PLAYER::PLAYER_ID()), 0, iVar1, Local_136.f_165[iVar1 /*3*/], Local_136.f_165[iVar1 /*3*/].f_1, 0);
}

void func_375(var uParam0, var uParam1)//Position - 0xFAB3
{
	int iVar0;
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam1)[iVar0] <= 0)
		{
			Local_136.f_165[iVar0 /*3*/].f_1 = (50 - iVar0 * 2);
			Local_136.f_165[iVar0 /*3*/] = func_376(iVar0);
			__LIB_20__::func_592(__LIB_6__::func_940(PLAYER::PLAYER_ID()), 0, iVar0, Local_136.f_165[iVar0 /*3*/], Local_136.f_165[iVar0 /*3*/].f_1, 0);
		}
		else
		{
			Local_136.f_165[iVar0 /*3*/].f_1 = (*uParam1)[iVar0];
			Local_136.f_165[iVar0 /*3*/] = (*uParam0)[iVar0];
		}
		iVar0++;
	}
	Local_136.f_164 = 1;
}

int func_376(int iParam0)//Position - 0xFB53
{
	switch (iParam0)
	{
		case 0:
			return 69644;
		case 1:
			return 356361;
		case 2:
			return 533761;
		case 3:
			return 861443;
		case 4:
			return 21638;
		case 5:
			return 336649;
		case 6:
			return 586639;
		case 7:
			return 795403;
		case 8:
			return 38023;
		case 9:
			return 341123;
		default:
	}
	return 0;
}

void func_377(int iParam0, bool bParam1, bool bParam2)//Position - 0xFBE4
{
	if (bParam1)
	{
		if (bParam2)
		{
			func_164("Hit_By_Car", iParam0, &(Local_135.f_204[iParam0 /*19*/].f_6));
		}
		else
		{
			func_164("Death", iParam0, &(Local_135.f_204[iParam0 /*19*/].f_6));
		}
	}
	else
	{
		func_164("Pain", iParam0, &(Local_135.f_204[iParam0 /*19*/].f_6));
	}
}

void func_378(int iParam0, int iParam1)//Position - 0xFC38
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[2];
	var uVar4[2];
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	iVar5 = 1;
	func_184(iParam1, &iVar1, &iVar2);
	if (__LIB_0__::func_502())
	{
		if ((iVar1 % 2) == 0)
		{
			iVar5 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar6 = __LIB_0__::func_502();
			iVar3[iVar0] = __LIB_0__::func_138(bVar6, 0, 1);
			uVar4[iVar0] = func_71((iVar1 + iVar5), __LIB_0__::func_138(bVar6, 8, 0));
			iVar5 = (iVar5 * -1);
			iVar0++;
		}
	}
	else
	{
		if ((iVar2 % 2) == 0)
		{
			iVar5 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar7 = __LIB_0__::func_502();
			iVar3[iVar0] = __LIB_0__::func_138(bVar7, 2, 3);
			uVar4[iVar0] = func_71(__LIB_0__::func_138(bVar7, 12, 0), (iVar2 + iVar5));
			iVar5 = (iVar5 * -1);
			iVar0++;
		}
	}
	iVar8 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_136.f_148[(iVar0 + iVar8) /*4*/].f_1 = uVar4[iVar0];
		Local_136.f_148[(iVar0 + iVar8) /*4*/] = NETWORK::GET_NETWORK_TIME() + 1000;
		Local_136.f_148[(iVar0 + iVar8) /*4*/].f_2 = iVar3[iVar0];
		Local_136.f_148[(iVar0 + iVar8) /*4*/].f_3 = (5 + iParam0);
		iVar0++;
	}
	Local_136.f_161 = NETWORK::GET_NETWORK_TIME();
}

void func_379(int iParam0, int iParam1, int iParam2)//Position - 0xFD77
{
	int iVar0;
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == iParam2)
		{
			if (!__LIB_22__::func_217(&(Local_136.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
			{
				__LIB_22__::func_216(&(Local_136.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
			}
		}
		else if (__LIB_22__::func_217(&(Local_136.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
		{
			__LIB_27__::func_375(&(Local_136.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
		}
		iVar0++;
	}
}

void func_381(int iParam0)//Position - 0xFE17
{
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	Local_136.f_62[iParam0 /*3*/].f_1 = -1;
	Local_136.f_62[iParam0 /*3*/] = -1;
	Local_136.f_62[iParam0 /*3*/].f_2 = -2147483647;
}

int func_383()//Position - 0xFE99
{
	int iVar0;
	if (Global_1931418)
	{
		return 1;
	}
	if (__LIB_22__::func_888())
	{
		return 1;
	}
	if (__LIB_5__::func_922(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (!func_393())
	{
		return 1;
	}
	if (__LIB_32__::func_728())
	{
		return 1;
	}
	if (Local_136.f_145 == 4 && Local_173[Local_135.f_178 /*9*/] != 4)
	{
		return 0;
	}
	if (Local_135.f_140 < 2)
	{
		return 0;
	}
	iVar0 = 202;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 214;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		__LIB_8__::func_79((1000 - MISC::ABSI((NETWORK::GET_NETWORK_TIME() - Local_135.f_431))), 1000, "DEG_GAME_QUIT" /* GXT: Fill bar to quit the game. */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	else
	{
		__LIB_8__::func_79(0, 1000, "DEG_GAME_QUIT" /* GXT: Fill bar to quit the game. */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		if (Local_135.f_431 == -2147483647)
		{
			Local_135.f_431 = NETWORK::GET_NETWORK_TIME() + 1000;
		}
		if (NETWORK::GET_NETWORK_TIME() > Local_135.f_431)
		{
			return 1;
		}
	}
	else if (Local_135.f_431 != -2147483647)
	{
		Local_135.f_431 = -2147483647;
	}
	if (__LIB_2__::func_331(PLAYER::PLAYER_ID()))
	{
		if (__LIB_32__::func_728())
		{
			return 1;
		}
	}
	return 0;
}

int func_393()//Position - 0x103F4
{
	switch (__LIB_4__::func_767())
	{
		case 15:
		case 17:
			return 1;
			break;
	}
	return 0;
}

void func_396()//Position - 0x1044F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Local_135.f_147 = 0;
	Local_135.f_148 = 0;
	Local_135.f_434 = Local_135.f_433;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		Local_135.f_149[iVar2] = -1;
		if (iLocal_172[iVar2] > iVar0)
		{
			iVar0 = iLocal_172[iVar2];
			iVar1 = iVar2;
		}
		else if (iLocal_172[iVar2] == iVar0)
		{
			iVar1 = -1;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_175[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Local_135.f_149[Local_173[iVar2 /*9*/].f_6] = iVar2;
			if (Local_173[iVar2 /*9*/].f_6 == iVar1)
			{
				iVar1 = iVar2;
			}
			if (Local_135.f_154[Local_173[iVar2 /*9*/].f_6] == -2147483647 && Global_1931416.f_1 == 0)
			{
				func_163((12 + Local_173[iVar2 /*9*/].f_6));
				Local_135.f_154[Local_173[iVar2 /*9*/].f_6] = NETWORK::GET_NETWORK_TIME();
			}
			Local_135.f_148++;
			if (Local_135.f_204[iVar2 /*19*/].f_9 != Local_173[iVar2 /*9*/].f_2)
			{
				iVar3 = (Local_173[iVar2 /*9*/].f_2 - Local_135.f_204[iVar2 /*19*/].f_9);
				if (iVar3 > 0)
				{
					Local_135.f_204[iVar2 /*19*/].f_9 = (Local_135.f_204[iVar2 /*19*/].f_9 + Local_135.f_412);
					if (Local_135.f_204[iVar2 /*19*/].f_9 > Local_173[iVar2 /*9*/].f_2)
					{
						Local_135.f_204[iVar2 /*19*/].f_9 = Local_173[iVar2 /*9*/].f_2;
					}
				}
				else
				{
					Local_135.f_204[iVar2 /*19*/].f_9 = (Local_135.f_204[iVar2 /*19*/].f_9 - Local_135.f_414);
					if (Local_135.f_204[iVar2 /*19*/].f_9 < Local_173[iVar2 /*9*/].f_2)
					{
						Local_135.f_204[iVar2 /*19*/].f_9 = Local_173[iVar2 /*9*/].f_2;
					}
				}
			}
			if (Local_173[iVar2 /*9*/] == 4)
			{
			}
			else
			{
				Local_135.f_147++;
			}
		}
		iVar2++;
	}
	Local_135.f_433 = iVar1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (Local_135.f_149[iVar2] == -1 && Local_135.f_154[iVar2] != -2147483647)
		{
			Local_135.f_154[iVar2] = -2147483647;
		}
		iVar2++;
	}
}

void func_397()//Position - 0x1068A
{
	bool bVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Local_135.f_178 = NETWORK::PARTICIPANT_ID_TO_INT();
		bVar0 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		Local_135.f_178.f_1 = bVar0;
	}
}

void func_398()//Position - 0x106AF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_175[iVar0 /*37*/].f_25)
		{
			Local_173[iVar0 /*9*/] = { Local_175[iVar0 /*37*/] };
		}
		iVar0++;
	}
}

void func_400(struct<21> Param0)//Position - 0x106F6
{
	__LIB_0__::func_673(4, Param0);
	__LIB_1__::func_569(0, -1, 0);
	__LIB_0__::func_371();
	func_402();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_136, 201, 0);
	NETWORK::NETWORK_REGISTER_HIGH_FREQUENCY_HOST_BROADCAST_VARIABLES(&iLocal_172, 5, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_173, 37, 0);
	NETWORK::NETWORK_REGISTER_HIGH_FREQUENCY_PLAYER_BROADCAST_VARIABLES(&Local_174, 65, 0);
	if (!__LIB_0__::func_672())
	{
		func_9();
	}
	Local_173[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_6 = Param0.f_19;
}

void func_402()//Position - 0x107B3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_136[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_136.f_62[iVar0 /*3*/] = -1;
		Local_136.f_62[iVar0 /*3*/].f_1 = -1;
		Local_136.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_136.f_148[iVar0 /*4*/] = -2147483647;
		Local_136.f_148[iVar0 /*4*/].f_1 = -1;
		Local_136.f_148[iVar0 /*4*/].f_2 = -1;
		Local_136.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Local_136.f_131[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_136.f_196[iVar0] = 99;
		iVar0++;
	}
}

