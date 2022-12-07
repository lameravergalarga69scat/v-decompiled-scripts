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
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int* iLocal_68 = NULL;
	int iLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	int iLocal_72 = 0;
	float fLocal_73 = 0f;
	int iLocal_74 = 0;
	struct<3> Local_75 = { 0, 0, 0 } ;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	char cLocal_80[64] = "";
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	char cLocal_89[64] = "";
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	char cLocal_98[64] = "";
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	char* sLocal_110 = NULL;
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
	char[] cLocal_126[8] = 0;
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
	char cLocal_142[64] = "";
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	char cLocal_151[64] = "";
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	char cLocal_160[64] = "";
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
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
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	iLocal_66 = 318;
	iLocal_67 = 1;
	fLocal_108 = -1f;
	fLocal_109 = -1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_66();
	}
	SYSTEM::WAIT(0);
	func_54();
	func_53();
	__LIB_26__::func_563();
	while (iLocal_67 && __LIB_35__::func_92(5, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_65)
		{
			case 0:
				if (func_37())
				{
					iLocal_65 = 1;
				}
				break;
			case 1:
				if (func_2())
				{
					iLocal_65 = 2;
				}
				break;
			case 2:
				__LIB_30__::func_708();
				break;
		}
	}
	func_66();
}

int func_2()//Position - 0x10E
{
	struct<3> Var0;
	float fVar1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_80))
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
		{
			Var0 = { Vector(32.856f, 3819.65f, 1971.62f) - Local_75 };
			iLocal_77 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(&cLocal_80, Local_75 + Var0, 0f, 0f, 0f, 1f, false, false, false, false);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sLocal_110, &cLocal_126, 2))
		{
			fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_97771);
			switch (iLocal_170)
			{
				case 0:
					if (fLocal_108 < 0f)
					{
						iLocal_170++;
						return 0;
					}
					if (fVar1 > fLocal_108)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_68) || iLocal_79 != -1)
						{
							if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(&cLocal_89, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, iLocal_79, 1f, false, false, false))
							{
								if (MISC::ARE_STRINGS_EQUAL(&cLocal_89, "scr_meth_pipe_smoke"))
								{
									__LIB_25__::func_652(PLAYER::PLAYER_PED_ID(), 0, 1, 0, -1);
								}
								iLocal_169 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_169, &cLocal_160, PLAYER::PLAYER_PED_ID(), &cLocal_151, false, 0);
								iLocal_170++;
							}
						}
						else if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(&cLocal_89, iLocal_68, 0f, 0f, -1f, 0f, 0f, 0f, 1f, false, false, false))
						{
							if (MISC::ARE_STRINGS_EQUAL(&cLocal_89, "scr_meth_pipe_smoke"))
							{
								__LIB_25__::func_652(PLAYER::PLAYER_PED_ID(), 0, 1, 0, -1);
							}
							iLocal_169 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_169, &cLocal_160, PLAYER::PLAYER_PED_ID(), &cLocal_151, false, 0);
							iLocal_170++;
						}
					}
					break;
				case 1:
					if (fLocal_109 < 0f)
					{
						iLocal_170++;
						return 0;
					}
					if (fVar1 > fLocal_109)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_68) || iLocal_79 != -1)
						{
							if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(&cLocal_89, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, iLocal_79, 1f, false, false, false))
							{
								if (MISC::ARE_STRINGS_EQUAL(&cLocal_89, "scr_meth_pipe_smoke"))
								{
									__LIB_25__::func_652(PLAYER::PLAYER_PED_ID(), 0, 1, 0, -1);
								}
								iLocal_169 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_169, &cLocal_160, PLAYER::PLAYER_PED_ID(), &cLocal_151, false, 0);
								iLocal_170++;
							}
						}
						else if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(&cLocal_89, iLocal_68, 0f, 0f, -1f, 0f, 0f, 0f, 1f, false, false, false))
						{
							if (MISC::ARE_STRINGS_EQUAL(&cLocal_89, "scr_meth_pipe_smoke"))
							{
								__LIB_25__::func_652(PLAYER::PLAYER_PED_ID(), 0, 1, 0, -1);
							}
							iLocal_169 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_169, &cLocal_160, PLAYER::PLAYER_PED_ID(), &cLocal_151, false, 0);
							iLocal_170++;
						}
					}
					break;
				case 2:
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_98))
					{
						if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(&cLocal_98, Local_75 + Local_107, 0f, 0f, 0f, 1f, false, false, false))
						{
							iLocal_170++;
						}
					}
					else
					{
						iLocal_170++;
					}
					break;
				case 3:
					break;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_68))
				{
					if (iLocal_74 != -1)
					{
						if (fVar1 > fLocal_73)
						{
							func_3(&iLocal_68, iLocal_74);
						}
					}
				}
			}
		}
		else
		{
			if (iLocal_78 != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_78, false);
				iLocal_78 = 0;
				AUDIO::STOP_SOUND(iLocal_169);
				AUDIO::RELEASE_SOUND_ID(iLocal_169);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_68))
				{
					if (iLocal_74 != -1)
					{
						func_3(&iLocal_68, iLocal_74);
					}
				}
			}
			return 1;
		}
	}
	else
	{
		func_66();
		return 0;
	}
	return 0;
}

int func_3(int* iParam0, int iParam1)//Position - 0x3E7
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	char* sVar10;
	struct<3> Var11;
	struct<3> Var12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	char[] cVar16[8];
	int iVar17;
	char* sVar18;
	char[] cVar19[8];
	char[] cVar20[8];
	var uVar21;
	var uVar22;
	iVar0 = __LIB_11__::func_330();
	switch (iParam1)
	{
		case 0:
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_cs_ironing_board") && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_iron_01"))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
				ENTITY::SET_ENTITY_DYNAMIC(*iParam0, true);
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("prop_iron_01"))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
				Var2 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
				ENTITY::SET_ENTITY_COORDS(*iParam0, Var1 + Vector(0.1f, 0f, 0f), true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(*iParam0, Var2.f_0, Var2.f_1, Var2.f_2, 2, true);
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("p_defilied_ragdoll_01_s"))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			}
			return 1;
			break;
		case 1:
			OBJECT::DELETE_OBJECT(iParam0);
			return 1;
			break;
		case 2:
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			ENTITY::SET_ENTITY_DYNAMIC(*iParam0, true);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			*iParam0 = 0;
			return 1;
			break;
		case 3:
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
			if (((ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_chateau_table_01") && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_res_tt_flusher")) && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_ilev_fh_lampa_on")) && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_cs_remote_01"))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
			}
			if ((ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_ilev_fh_dineeamesa") && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_res_tt_flusher")) && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_ilev_fh_lampa_on"))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			}
			ENTITY::SET_ENTITY_DYNAMIC(*iParam0, true);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			return 1;
			break;
		case 4:
			Var3 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
			Var4 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
			iVar5 = 0;
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("p_laptop_02_s"):
					iVar5 = joaat("prop_laptop_02_closed");
					break;
				case joaat("v_ilev_m_dinechair"):
					iVar5 = joaat("p_dinechair_01_s");
					break;
				case joaat("prop_acc_guitar_01"):
					iVar5 = joaat("prop_acc_guitar_01_d1");
					break;
				case joaat("p_defilied_ragdoll_01_s"):
					iVar5 = joaat("prop_defilied_ragdoll_01");
					break;
				case joaat("p_hand_toilet_s"):
					iVar5 = joaat("prop_toiletfoot_static");
					break;
				case joaat("prop_laptop_02_closed"):
				case joaat("p_dinechair_01_s"):
				case joaat("prop_acc_guitar_01_d1"):
				case joaat("prop_defilied_ragdoll_01"):
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
					return 1;
					break;
				case joaat("prop_toiletfoot_static"):
					Var6 = { 1971.669f, 3819.449f, 32.766f };
					Var7 = { 0f, 0f, 53.6f };
					ENTITY::SET_ENTITY_COORDS(*iParam0, Var6, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(*iParam0, Var7, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
					return 1;
					break;
				default:
					iVar5 = 0;
					return 0;
					break;
			}
			STREAMING::REQUEST_MODEL(iVar5);
			while (!STREAMING::HAS_MODEL_LOADED(iVar5))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_20266.f_1 != 1)
				{
					__LIB_8__::func_770(1);
				}
				SYSTEM::WAIT(0);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			if (Global_20266.f_1 != 1)
			{
				__LIB_8__::func_770(1);
			}
			OBJECT::DELETE_OBJECT(iParam0);
			*iParam0 = OBJECT::CREATE_OBJECT(iVar5, Var3, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, Var4, 2, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return 1;
			break;
		case 5:
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(*iParam0, true), 0, 0.5f, true, false, 1f, false);
			OBJECT::DELETE_OBJECT(iParam0);
			return 1;
			break;
		case 6:
			return 1;
			break;
		case 7:
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 30, false, true);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), true);
				}
				OBJECT::DELETE_OBJECT(iParam0);
				return 1;
			}
			else
			{
				OBJECT::DELETE_OBJECT(iParam0);
				return 0;
			}
			break;
		case 8:
			Var8 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
			Var9 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
			sVar10 = "";
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("prop_cs_beer_bot_01"):
					sVar10 = "scr_pts_glass_bottle";
					break;
				case joaat("prop_pineapple"):
					sVar10 = "ent_dst_pineapple";
					break;
				case joaat("prop_acc_guitar_01"):
					sVar10 = "scr_pts_guitar_break";
					break;
				default:
					sVar10 = "";
					return 0;
					break;
			}
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_20266.f_1 != 1)
				{
					__LIB_8__::func_770(1);
				}
				SYSTEM::WAIT(0);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			if (Global_20266.f_1 != 1)
			{
				__LIB_8__::func_770(1);
			}
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(sVar10, Var8, Var9, 1f, false, false, false);
			OBJECT::DELETE_OBJECT(iParam0);
			return 1;
			break;
		case 9:
			Var11 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
			Var12 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
			sVar13 = "";
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("prop_cs_beer_bot_01"):
					sVar13 = "scr_pts_glass_bottle";
					break;
				case joaat("prop_pineapple"):
					sVar13 = "ent_dst_pineapple";
					break;
				case joaat("prop_acc_guitar_01"):
				case joaat("prop_acc_guitar_01_d1"):
					sVar13 = "scr_pts_guitar_break";
					break;
				default:
					sVar13 = "";
					return 0;
					break;
			}
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_20266.f_1 != 1)
				{
					__LIB_8__::func_770(1);
				}
				SYSTEM::WAIT(0);
			}
			iVar14 = 0;
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("prop_acc_guitar_01_d1"):
					return 0;
					break;
				case joaat("p_laptop_02_s"):
					iVar14 = joaat("prop_laptop_02_closed");
					break;
				case joaat("v_ilev_m_dinechair"):
					iVar14 = joaat("p_dinechair_01_s");
					break;
				case joaat("prop_acc_guitar_01"):
					iVar14 = joaat("prop_acc_guitar_01_d1");
					break;
				case joaat("p_defilied_ragdoll_01_s"):
					iVar14 = joaat("prop_defilied_ragdoll_01");
					break;
				default:
					iVar14 = 0;
					return 0;
					break;
			}
			STREAMING::REQUEST_MODEL(iVar14);
			while (!STREAMING::HAS_MODEL_LOADED(iVar14))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_20266.f_1 != 1)
				{
					__LIB_8__::func_770(1);
				}
				SYSTEM::WAIT(0);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			if (Global_20266.f_1 != 1)
			{
				__LIB_8__::func_770(1);
			}
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(sVar13, Var11, Var12, 1f, false, false, false);
			OBJECT::DELETE_OBJECT(iParam0);
			*iParam0 = OBJECT::CREATE_OBJECT(iVar14, Var11, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, Var12, 2, true);
			if (__LIB_30__::func_712(iVar0, &sVar15, &cVar16, &iVar17))
			{
				if (__LIB_26__::func_591(iVar0, &sVar18, &cVar19, &cVar20, &uVar21, &uVar22))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, &sVar18, &sVar15, 2))
					{
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*iParam0, Global_97771, &sVar15, &sVar18, 1000f, -8f, iVar17, 1000f);
					}
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar14);
			return 1;
			break;
	}
	return 0;
}

int func_37()//Position - 0x2D8D
{
	if (!iLocal_69 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_68))
		{
			STREAMING::REQUEST_MODEL(iLocal_69);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_69))
			{
				STREAMING::REQUEST_MODEL(iLocal_69);
			}
			else if (iLocal_72 != -1)
			{
				iLocal_68 = OBJECT::CREATE_OBJECT(iLocal_69, Local_75, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_72), Local_70, Local_71, false, false, false, false, 2, true, 0);
			}
			else
			{
				iLocal_68 = OBJECT::CREATE_OBJECT(iLocal_69, Local_75 + Local_70, true, true, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_68, Local_75 + Local_70, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_68, Vector(uLocal_76, 0f, 0f) + Local_71, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_68, true);
			}
		}
	}
	if (!__LIB_12__::func_114())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
		{
			if (iLocal_72 != -1)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_72), Local_70, Local_71, false, false, false, false, 2, true, 0);
				}
			}
		}
		return 1;
	}
	return 0;
}

void func_53()//Position - 0x3214
{
	int iVar0;
	bool bVar1;
	STREAMING::REQUEST_PTFX_ASSET();
	iVar0 = 0;
	bVar1 = false;
	while (!bVar1 && iVar0 < 400)
	{
		bVar1 = true;
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && (STREAMING::GET_PLAYER_SWITCH_STATE() != 8 || STREAMING::GET_PLAYER_SWITCH_STATE() == 1))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_PTFX_ASSET();
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			bVar1 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_142))
		{
			if (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK(&cLocal_142, false, -1))
			{
				bVar1 = false;
			}
		}
		if (!iLocal_69 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				STREAMING::REQUEST_MODEL(iLocal_69);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_69))
				{
					bVar1 = false;
					STREAMING::REQUEST_MODEL(iLocal_69);
				}
				else if (iLocal_72 != -1)
				{
					if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && (STREAMING::GET_PLAYER_SWITCH_STATE() != 8 || STREAMING::GET_PLAYER_SWITCH_STATE() == 1))
					{
						bVar1 = false;
					}
					else
					{
						iLocal_68 = OBJECT::CREATE_OBJECT(iLocal_69, Local_75, true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_72), Local_70, Local_71, false, false, false, false, 2, true, 0);
					}
				}
				else
				{
					iLocal_68 = OBJECT::CREATE_OBJECT(iLocal_69, Local_75 + Local_70, true, true, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_68, Local_75 + Local_70, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_68, Vector(uLocal_76, 0f, 0f) + Local_71, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_68, true);
				}
			}
		}
		if (!bVar1)
		{
			iVar0++;
		}
		SYSTEM::WAIT(0);
	}
}

void func_54()//Position - 0x3365
{
	char[] cVar0[8];
	struct<109> Var1;
	struct<97> Var2;
	char[] cVar3[8];
	var uVar4;
	var uVar5;
	iLocal_66 = Global_99844;
	func_58(iLocal_66, &Local_75, &uLocal_76, &cVar0);
	switch (iLocal_66)
	{
		case 273:
		case 274:
			StringCopy(&cLocal_142, "TREVOR_PUKEINTOFOUNT", 64);
			StringCopy(&cLocal_151, "TREVOR_PUKEINTOFOUNT_SOUNDS", 64);
			StringCopy(&cLocal_160, "Puke", 64);
			fLocal_108 = 0.19f;
			fLocal_109 = 0.33f;
			iLocal_79 = 31086;
			StringCopy(&cLocal_80, "", 64);
			StringCopy(&cLocal_89, "scr_trev_amb_puke", 64);
			StringCopy(&cLocal_98, "scr_pts_vomit_water", 64);
			if (iLocal_66 == 273)
			{
				Local_107 = { Vector((34.97325f + 0.25f), -441.7662f, -118.32176f) - Local_75 };
			}
			else if (iLocal_66 == 274)
			{
				Local_107 = { 0.125f, -1.1486f, (0.0588f + 0.1f) };
			}
			else
			{
				Local_107 = { -0.125f, 1.1486f, -0.0588f };
			}
			break;
		case 245:
		case 40:
			StringCopy(&cLocal_142, "", 64);
			StringCopy(&cLocal_151, "", 64);
			StringCopy(&cLocal_160, "", 64);
			fLocal_108 = 0.19f;
			fLocal_109 = 0.47f;
			iLocal_79 = 31086;
			StringCopy(&cLocal_80, "", 64);
			StringCopy(&cLocal_89, "scr_meth_pipe_smoke", 64);
			StringCopy(&cLocal_98, "", 64);
			break;
		case 310:
			StringCopy(&cLocal_142, "", 64);
			StringCopy(&cLocal_151, "", 64);
			StringCopy(&cLocal_160, "", 64);
			fLocal_108 = 0.22f;
			fLocal_109 = 0.24f;
			iLocal_79 = -1;
			StringCopy(&cLocal_80, "", 64);
			StringCopy(&cLocal_89, "scr_pts_digging", 64);
			StringCopy(&cLocal_98, "", 64);
			iLocal_69 = joaat("prop_tool_shovel");
			Local_70 = { 0f, 0f, -0.045f };
			Local_71 = { 0f, 180f, 0f };
			iLocal_72 = 28422;
			fLocal_73 = 0.7f;
			iLocal_74 = 0;
			break;
		case 311:
			StringCopy(&cLocal_142, "", 64);
			StringCopy(&cLocal_151, "", 64);
			StringCopy(&cLocal_160, "", 64);
			fLocal_108 = 0.5f;
			fLocal_109 = 0.55f;
			iLocal_79 = 52301;
			StringCopy(&cLocal_80, "scr_pts_flush", 64);
			StringCopy(&cLocal_89, "scr_pts_footsplash", 64);
			StringCopy(&cLocal_98, "", 64);
			break;
		case 315:
			StringCopy(&cLocal_142, "", 64);
			StringCopy(&cLocal_151, "", 64);
			StringCopy(&cLocal_160, "", 64);
			fLocal_108 = 0.15f;
			fLocal_109 = -1f;
			iLocal_79 = 31086;
			StringCopy(&cLocal_80, "", 64);
			StringCopy(&cLocal_89, "scr_pts_headsplash_trev", 64);
			StringCopy(&cLocal_98, "", 64);
			iLocal_69 = joaat("prop_cs_sink_filler_02");
			Local_70 = { -0.54f, 0.08f, -0.13f };
			Local_71 = { 0f, 0f, -12f };
			iLocal_72 = -1;
			fLocal_73 = 0.7f;
			iLocal_74 = -1;
			break;
		case 124:
			StringCopy(&cLocal_142, "", 64);
			StringCopy(&cLocal_151, "", 64);
			StringCopy(&cLocal_160, "", 64);
			fLocal_108 = 0.07f;
			fLocal_109 = -1f;
			iLocal_79 = 60309;
			StringCopy(&cLocal_80, "", 64);
			StringCopy(&cLocal_89, "scr_pts_headsplash", 64);
			StringCopy(&cLocal_98, "", 64);
			iLocal_69 = joaat("prop_cs_sink_filler_03");
			Local_70 = { -0.72f, 0.9f, 0.21f };
			Local_71 = { 0f, 0f, 9f };
			iLocal_72 = -1;
			fLocal_73 = 0.7f;
			iLocal_74 = -1;
			break;
		default:
			break;
	}
	Var1.f_1 = -1;
	Var1.f_17 = 4;
	Var1.f_17.f_8 = 4;
	Var1.f_17.f_13 = 4;
	Var1.f_17.f_18 = 4;
	Var1.f_17.f_24 = 4;
	Var1.f_17.f_29 = 4;
	Var1.f_17.f_34 = 4;
	Var1.f_62 = 8;
	Var1.f_96.f_7 = 21;
	Var1.f_96.f_8 = 6;
	Var2.f_1 = -1;
	Var2.f_17 = 4;
	Var2.f_17.f_8 = 4;
	Var2.f_17.f_13 = 4;
	Var2.f_17.f_18 = 4;
	Var2.f_17.f_24 = 4;
	Var2.f_17.f_29 = 4;
	Var2.f_17.f_34 = 4;
	Var2.f_62 = 8;
	Var2.f_96.f_7 = 21;
	Var2.f_96.f_8 = 6;
	Var1.f_0 = 0;
	Var1.f_2 = iLocal_66;
	Var1.f_3 = Global_97919.f_45;
	__LIB_32__::func_822(Var1, &Var2);
	__LIB_26__::func_591(iLocal_66, &sLocal_110, &cVar3, &cLocal_126, &uVar4, &uVar5);
}

int func_58(int iParam0, var uParam1, var uParam2, char* sParam3)//Position - 0x6AC0
{
	int iVar0;
	if (func_61(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			case 1:
				__LIB_12__::func_128(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_95644[iVar0 /*9*/].f_3 };
					*uParam2 = Global_95644[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_95644[0 /*9*/].f_3 };
					*uParam2 = Global_95644[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			case 2:
				*uParam1 = { Global_98552[0 /*109*/].f_4 };
				*uParam2 = Global_98552[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 3:
				*uParam1 = { Global_98552[1 /*109*/].f_4 };
				*uParam2 = Global_98552[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 4:
				*uParam1 = { Global_98552[2 /*109*/].f_4 };
				*uParam2 = Global_98552[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 5:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_113386.f_2363.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 6:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_113386.f_2363.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 7:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_113386.f_2363.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_98880[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

int func_61(int iParam0, var uParam1, char* sParam2)//Position - 0x6DB2
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			__LIB_12__::func_128(&iVar1);
			if (iVar1 < 5)
			{
				*uParam1 = Global_95644[iVar1 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_95644[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 2:
			*uParam1 = Global_98552[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 3:
			*uParam1 = Global_98552[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 4:
			*uParam1 = Global_98552[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 5:
			*uParam1 = Global_113386.f_2363.f_539.f_2310[0];
			StringCopy(sParam2, __LIB_12__::func_129(Global_113386.f_2363.f_539.f_2314[0]), 32);
			return 1;
			break;
		case 6:
			*uParam1 = Global_113386.f_2363.f_539.f_2310[1];
			StringCopy(sParam2, __LIB_12__::func_129(Global_113386.f_2363.f_539.f_2314[1]), 32);
			return 1;
			break;
		case 7:
			*uParam1 = Global_113386.f_2363.f_539.f_2310[2];
			StringCopy(sParam2, __LIB_12__::func_129(Global_113386.f_2363.f_539.f_2314[2]), 32);
			return 1;
			break;
		case 11:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		case 8:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 9:
			return func_61(8, uParam1, sParam2);
			break;
		case 10:
			return func_61(8, uParam1, sParam2);
			break;
		case 13:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 14:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 15:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 12:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 16:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 17:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 18:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 19:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 20:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 22:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 74:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 23:
			return func_61(208, uParam1, sParam2);
			break;
		case 24:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 67:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 25:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 26:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 27:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 28:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 58:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 59:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 60:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 38:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 40:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		case 41:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 42:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 43:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 44:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 45:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 47:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 49:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 48:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 124:
			Var0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 50:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 51:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 52:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 66:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 54:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 55:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 56:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 57:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 61:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 62:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 63:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 69:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 64:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 65:
			if (func_64(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 315:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 76:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 79:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 80:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 98:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 133:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 168:
			if (func_62(0, 25, &uVar2, &fVar3))
			{
				*uParam1 = (fVar3 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 170:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 172:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 179:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 200:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		case 224:
			return func_61(222, uParam1, sParam2);
			break;
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 275:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 294:
			return func_61(293, uParam1, sParam2);
			break;
		case 295:
			return func_61(292, uParam1, sParam2);
			break;
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 300:
			return func_61(303, uParam1, sParam2);
			break;
		case 301:
			return func_61(303, uParam1, sParam2);
			break;
		case 302:
			return func_61(303, uParam1, sParam2);
			break;
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		case 306:
			Var4 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var4.f_0, -Var4.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 307:
			Var5 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var5.f_0, -Var5.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 308:
			Var6 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var6.f_0, -Var6.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 309:
			Var7 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var7.f_0, -Var7.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 312:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_62(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x92BB
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 1;
					break;
				case 1:
					if (func_62(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 1;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
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
					*uParam3 = 163.0716f;
					return 1;
					break;
				case 1:
					if (func_62(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				case 2:
					if (func_62(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
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
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
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
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_62(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
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
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
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
					*uParam3 = 158f;
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
					*uParam3 = 339f;
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
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
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
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*uParam3 = (306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
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
					*uParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
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
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_62(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
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
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
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
					*uParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		case 46:
			return func_62(iParam0, 26, uParam2, uParam3);
			break;
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
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
					*uParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
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
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
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
					*uParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
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
					*uParam3 = 39f;
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
					*uParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
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
					*uParam3 = 311.4f;
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
					*uParam3 = 306.6f;
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
					*uParam3 = 337.4f;
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
					*uParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		case 60:
			if (func_62(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
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
					*uParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
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
					*uParam3 = 157.44f;
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
					*uParam3 = 87.3368f;
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
					*uParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		case 77:
			if (func_62(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
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
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
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
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.6757f, -42.2059f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 1;
					break;
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.8477f, -40.7478f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 1;
					break;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
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
					*uParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
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
					*uParam3 = 114.3391f;
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
					*uParam3 = 252.2687f;
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
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 1;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
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
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
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
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else if (((Global_113386.f_18533[2] == 300 || Global_113386.f_18533[2] == 301) || Global_113386.f_18533[2] == 302) || Global_113386.f_18533[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					if (__LIB_0__::func_502())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
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
					*uParam3 = (102f - 90.6729f);
					return 1;
					break;
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_62(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
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
					*uParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.7363f, -1148.4664f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return 1;
					break;
			}
			break;
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 1;
					break;
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		default:
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return 0;
}

int func_64(int iParam0, var uParam1, var uParam2)//Position - 0xB226
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_64(8, uParam1, uParam2);
			break;
		case 10:
			return func_64(8, uParam1, uParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_66()//Position - 0xBC27
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
	{
		if (iLocal_74 != -1)
		{
			func_3(&iLocal_68, iLocal_74);
		}
	}
	if (iLocal_78 != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_78, false);
		iLocal_78 = 0;
		AUDIO::STOP_SOUND(iLocal_169);
		AUDIO::RELEASE_SOUND_ID(iLocal_169);
	}
	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

