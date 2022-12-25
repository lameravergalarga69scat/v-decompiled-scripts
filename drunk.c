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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_178();
	}
	Local_43 = { ScriptParam_55 };
	func_177();
	func_176();
	__LIB_8__::func_981(iLocal_44, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_170();
	func_166();
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_31__::func_987(iLocal_44);
		func_164();
		func_162();
		func_155();
		__LIB_8__::func_981(iLocal_44, 0, 0);
		func_177();
		func_9();
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !__LIB_17__::func_7())
		{
			__LIB_2__::func_976();
		}
	}
}

void func_9()//Position - 0x1BE
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		func_178();
	}
	if (bLocal_46)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_178();
		}
	}
	__LIB_0__::func_467();
	bVar0 = true;
	switch (Local_52.f_0)
	{
		case 4:
			func_153();
			return;
		case 5:
			func_150();
			return;
		case 6:
			func_148();
			return;
		case 7:
			func_147();
			return;
		case 8:
			func_146();
			return;
		case 9:
			func_144();
			return;
		case 10:
			func_143();
			func_140();
			func_139();
			return;
		case 11:
			func_138();
			return;
		case 12:
			break;
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_52.f_0 == 12)
	{
		return;
	}
	switch (Local_52.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
		case 2:
			func_119();
			break;
		case 12:
			func_106();
			break;
		case 3:
			func_10();
			break;
		default:
			break;
	}
}

void func_10()//Position - 0x2D9
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	if (!BitTest(Global_1946250.f_3, 27))
	{
		PED::SET_PED_TO_RAGDOLL(Local_43.f_1, 3000, 3500, 0, true, true, false);
	}
	Global_1940653 = 1;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_795(&uVar0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), false, true);
		}
		while ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		MISC::CLEAR_BIT(&(Global_1946250.f_3), 27);
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 57344, 0);
		Global_2667225.f_2681 = 1;
		if (BitTest(Global_1946250, 15))
		{
			MISC::CLEAR_BIT(&Global_1946250, 15);
		}
		if (BitTest(Global_1946250.f_2, 6))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_2), 6);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_2682 = 1;
		}
		else
		{
			Global_2667225.f_2682 = 0;
		}
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
		}
		if (__LIB_1__::func_375(1))
		{
			func_75(0);
		}
		__LIB_12__::func_915(1);
		func_178();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_30 = 1148829696;
	Var2.f_31 = 1148829696;
	Var2.f_52 = 1148829696;
	iVar3 = 7;
	switch (__LIB_0__::func_683())
	{
		case 0:
			if (__LIB_17__::func_251() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_425(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		case 2:
			if (!__LIB_0__::func_426(4))
			{
				if (__LIB_0__::func_425(58))
				{
					iVar3 = 4;
				}
				if (__LIB_0__::func_425(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!__LIB_0__::func_680())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2.f_0 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2.f_0 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2.f_0 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2.f_0 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2.f_0 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2.f_0 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2.f_0 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_43.f_1, Var2.f_5, true, false, false, true);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var2.f_11), "", 16);
	Var2.f_15 = -1f;
	func_12(sVar1, &Var2, "");
	__LIB_0__::func_183(126, 1);
	func_178();
}

void func_12(char* sParam0, var uParam1, char* sParam2)//Position - 0x797
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	float fVar28;
	float fVar29;
	float fVar30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	float fVar38;
	float fVar39;
	float fVar40;
	struct<3> Var41;
	struct<3> Var42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	fVar0 = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, true, false, false, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, true, false, false, true);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(true);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_38__::func_975(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = MISC::GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SYSTEM::WAIT(0);
	}
	__LIB_17__::func_11();
	if (!__LIB_0__::func_78(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), true, false, false, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	MISC::SET_GAME_PAUSED(false);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, true, false, false, false);
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	__LIB_16__::func_616();
	while (__LIB_0__::func_134())
	{
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, false);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar4, false);
		iVar5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		__LIB_38__::func_974(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1000f, 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		bVar3 = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, true);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iVar5, iVar4, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0f, false, false, false);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			__LIB_0__::func_151(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		iVar10 = __LIB_0__::func_683();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			default:
				break;
		}
		__LIB_0__::func_222(&uVar9, iVar11, PLAYER::PLAYER_PED_ID(), sVar12, 0, 1);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!bVar8)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_26, 0, false);
						bVar8 = true;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, false);
							bVar8 = true;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, false);
							bVar8 = true;
						}
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			__LIB_1__::func_33(0);
			iVar15 = MISC::GET_GAME_TIMER();
			if (iVar15 >= (Global_43603 - 500))
			{
				__LIB_0__::func_50(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (__LIB_0__::func_787(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar13)))
			{
				iVar19 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) - 128);
				iVar20 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar21 = 1.5f;
						Var22 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var23 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar24 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var22, Var23, true);
						fVar21 = __LIB_0__::func_331(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						__LIB_17__::func_8(&(uParam1->f_34), PLAYER::PLAYER_PED_ID(), __LIB_0__::func_683(), 1E-06f, 300, 300, 0, 0, 1045220557);
						__LIB_15__::func_247(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var27 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							fVar28 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							fVar29 = Var27.f_2;
							fVar30 = fVar28;
							uParam1->f_57 = (fVar29 - fVar30);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar25 = uParam1->f_56;
						fVar26 = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar25, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar26);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(fVar25);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(fVar26);
						Var31 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var32 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar33 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var31, Var32, true);
						iVar34 = SYSTEM::ROUND((fVar33 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
						if (__LIB_15__::func_966(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar14)) || iVar18)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), true, 0, false);
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
							break;
						case joaat("MotionState_Walk"):
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 0, false);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, true, false);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var37 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									fVar38 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar39 = Var37.f_2;
									fVar40 = fVar38;
									uParam1->f_31 = (fVar39 - fVar40);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar35 = uParam1->f_30;
								fVar36 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar35, 1f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar36);
								Var41 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
								Var42 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar43 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var41, Var42, true);
								iVar44 = SYSTEM::ROUND((fVar43 * 1000f));
								CAM::RENDER_SCRIPT_CAMS(false, true, iVar44, false, false, 0);
							}
							break;
						default:
							break;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = -1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!__LIB_0__::func_78(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	bVar45 = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
	bVar46 = false;
	if (uParam1->f_32)
	{
		CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
		if (!__LIB_15__::func_966(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			__LIB_38__::func_973(1, 26, &iVar47);
			__LIB_38__::func_973(1, 79, &iVar47);
			__LIB_38__::func_973(1, 1, &iVar47);
			__LIB_38__::func_973(1, 2, &iVar47);
			__LIB_38__::func_973(0, 22, &iVar47);
			__LIB_38__::func_973(0, 36, &iVar47);
			__LIB_38__::func_973(0, 142, &iVar47);
			__LIB_38__::func_973(0, 141, &iVar47);
			__LIB_38__::func_973(0, 140, &iVar47);
			__LIB_38__::func_973(0, 263, &iVar47);
			__LIB_38__::func_973(0, 264, &iVar47);
			SYSTEM::WAIT(0);
			bVar45 = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
			bVar46 = false;
			if (uParam1->f_32)
			{
				CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
				if (!__LIB_15__::func_966(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_16);
	}
	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(iVar5, false);
	__LIB_15__::func_959(&(uParam1->f_34));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, bVar3);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	sParam0 = sParam0;
}

void func_75(int iParam0)//Position - 0x29FC
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18209 /* Tunable: -539038925 */;
			break;
		case 1:
			iVar0 = Global_262145.f_18199 /* Tunable: BIKER_MC_POINTS_WIN_MINIGAME */;
			break;
		case 2:
			iVar0 = Global_262145.f_18210 /* Tunable: 771289284 */;
			break;
		case 3:
			iVar0 = Global_262145.f_18202 /* Tunable: BIKER_MC_POINTS_DESTROY_PRODUCT */;
			break;
		case 4:
			iVar0 = Global_262145.f_18198 /* Tunable: BIKER_MC_POINTS_ROB_SHOP */;
			break;
		case 6:
			iVar0 = 3;
			break;
		case 7:
			iVar0 = Global_262145.f_18213 /* Tunable: BIKER_MC_POINTS_DESTROY_MEMBERS_PV */;
			break;
		case 8:
			iVar0 = Global_262145.f_18214 /* Tunable: -555621765 */;
			break;
		case 9:
			iVar0 = Global_262145.f_18217 /* Tunable: 45776395 */;
			break;
		case 22:
			iVar0 = Global_262145.f_18218 /* Tunable: BIKER_MC_POINTS_DRIVE_CAR */;
			break;
		case 23:
			iVar0 = Global_262145.f_18211 /* Tunable: 419613951 */;
			break;
		case 25:
			iVar0 = Global_262145.f_19100 /* Tunable: 1684681813 */;
			break;
		case 26:
			iVar0 = Global_262145.f_19099 /* Tunable: -1825390724 */;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::PLAYSTATS_EARNED_MC_POINTS(__LIB_2__::func_477(__LIB_0__::func_797()), __LIB_2__::func_552(__LIB_0__::func_797()), __LIB_2__::func_476(), __LIB_2__::func_475(), iParam0, iVar0);
	}
	__LIB_2__::func_474(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)//Position - 0x2B21
{
	int iVar0;
	iVar0 = __LIB_0__::func_369(3971, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_468 = iVar0;
	__LIB_0__::func_413(3971, iVar0, -1, 1, 0);
}

void func_106()//Position - 0x35C9
{
	int iVar0;
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_44024[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	Local_52.f_0 = 5;
	Local_51.f_2 = (SYSTEM::TIMERA() + iVar0);
}

int func_107(int iParam0)//Position - 0x360C
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_43.f_1))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_43.f_1))
		{
			return 0;
		}
		if (func_114(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0) && Global_44024[iLocal_54 /*5*/].f_3 > Global_44024[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_44024[iLocal_54 /*5*/].f_4 < 9 && Global_44024[iLocal_54 /*5*/].f_4 != 0) && Global_44024[iLocal_54 /*5*/].f_4 > Global_44024[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = __LIB_16__::func_879(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return 0;
	}
	if (func_114(Local_43.f_1))
	{
		return 0;
	}
	STREAMING::REQUEST_CLIP_SET(sVar1);
	if (func_110(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_43.f_1))
			{
				TASK::TASK_PLAY_ANIM(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0f, false, false, false);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sVar1))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		return 0;
	}
	PED::SET_PED_MOVEMENT_CLIPSET(Local_43.f_1, sVar1, 0.75f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_STRAFE_CLIPSET(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, sVar1, "idle", 2f, true);
	Local_52.f_2 = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (__LIB_0__::func_216(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		default:
			if (PED::IS_PED_A_PLAYER(Local_43.f_1))
			{
				if (!__LIB_1__::func_394())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (PED::IS_PED_MALE(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1, "mood_drunk_1", iVar4);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, true);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, false);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, true);
	AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, true);
	return 1;
}

int func_110(int iParam0)//Position - 0x38FD
{
	struct<3> Var0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 7)
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 7)
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (__LIB_0__::func_719())
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	if (SYSTEM::VMAG2(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_114(int iParam0)//Position - 0x3A65
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_35__::func_242(iParam0);
	sVar1 = __LIB_16__::func_879(iVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_52.f_2))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(Local_52.f_2, sVar1);
}

int func_118()//Position - 0x3B5A
{
	int iVar0;
	if (Local_51.f_0 == -2)
	{
		return -2;
	}
	if (Local_51.f_0 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51.f_0 - SYSTEM::TIMERA());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_119()//Position - 0x3BA0
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_120())
	{
		Local_52.f_0 = 5;
		Local_51.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	Local_52.f_0 = 6;
}

bool func_120()//Position - 0x3BCC
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_4, false))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_1, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	return fVar2 < 7f;
}

void func_121()//Position - 0x3C1D
{
	int iVar0;
	char* sVar1;
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
		if (PED::GET_PED_STEALTH_MOVEMENT(Local_43.f_1))
		{
			if (Global_44024[iLocal_54 /*5*/].f_2 == 0 || Global_44024[iLocal_54 /*5*/].f_2 == 2)
			{
				PED::SET_PED_STEALTH_MOVEMENT(Local_43.f_1, false, 0);
			}
		}
		if (PED::IS_PED_DUCKING(Local_43.f_1))
		{
			PED::SET_PED_DUCKING(Local_43.f_1, false);
		}
	}
	if (Local_51.f_0 != -2)
	{
		if (Local_51.f_0 == -1)
		{
			if (Global_44024[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_44024[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51.f_0 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_44024[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_44024[iLocal_54 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_44024[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_44024[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_44024[iLocal_54 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_44024[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_44024[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_50))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				TASK::STOP_ANIM_TASK(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if ((Global_44024[iLocal_54 /*5*/].f_3 >= 10 || Global_44024[iLocal_54 /*5*/].f_4 >= 15) || BitTest(Global_44241, 9))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_43.f_1, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1 && !BitTest(Global_1946250.f_3, 27))
		{
			return;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_43.f_1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, true))
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_362(PLAYER::PLAYER_ID())) && Global_262145.f_24379 /* Tunable: -748730308 */)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && __LIB_6__::func_196())
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && __LIB_1__::func_2())
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && __LIB_0__::func_622())
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_783(PLAYER::PLAYER_ID())) && Global_262145.f_27022 /* Tunable: VC_CASINO_DISABLE_PASSOUT */)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && __LIB_2__::func_885(PLAYER::PLAYER_ID())) && Global_262145.f_27055 /* Tunable: VC_PENTHOUSE_DISABLE_PASSOUT */)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && __LIB_2__::func_839(PLAYER::PLAYER_ID()) == 15)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && Global_75485) && !Global_43997)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_52.f_1 = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_137()//Position - 0x483A
{
	int iVar0;
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 0;
	}
	if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_52.f_0 = 7;
	return 1;
}

void func_138()//Position - 0x488E
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		return;
	}
}

void func_139()//Position - 0x48A9
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (!bLocal_46)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var3 = { Var2 - Vector(3f, 30f, 30f) };
	Var4 = { Var2 + Vector(3f, 30f, 30f) };
	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var3, Var4) && !PED::IS_COP_PED_IN_AREA_3D(Var3, Var4))
	{
		return;
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	__LIB_0__::func_183(73, 1);
}

void func_140()//Position - 0x4978
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_4)
	{
		func_142(iVar0, fLocal_49);
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_141(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_141(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_141(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_141(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
		}
	}
	func_142(iVar0, fLocal_49);
}

float func_141(int iParam0, float fParam1, float fParam2)//Position - 0x4B1A
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (TASK::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = __LIB_0__::func_331(fVar0, -1f, 1f);
	return fVar0;
}

void func_142(int iParam0, float fParam1)//Position - 0x4BAE
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		PED::SET_PED_STEER_BIAS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
}

void func_143()//Position - 0x4BF9
{
	int iVar0;
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_44024[iLocal_54 /*5*/].f_3 >= 10 || Global_44024[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
		Local_52.f_0 = 11;
		return;
	}
}

void func_144()//Position - 0x4C9D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (SYSTEM::TIMERA() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"));
	if (!iVar0 == 7)
	{
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
	if (iVar2 == Local_43.f_1)
	{
		func_145();
		Local_51.f_3 = -2;
		return;
	}
	TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar1, false);
	Local_52.f_0 = 9;
	Local_51.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_145()//Position - 0x4D38
{
	if (Local_52.f_0 == 10)
	{
		return;
	}
	Local_52.f_0 = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	__LIB_8__::func_981(iLocal_44, 2, 5);
	Local_51.f_4 = SYSTEM::TIMERA();
	fLocal_49 = 0f;
}

void func_146()//Position - 0x4D6A
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		Local_52.f_0 = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_3)
	{
		return;
	}
	Local_52.f_0 = 4;
	Local_51.f_3 = -2;
}

void func_147()//Position - 0x4D9C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				TASK::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
				Local_52.f_0 = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_43.f_4, -1, false);
		if (iVar2 == Local_43.f_1)
		{
			func_145();
			return;
		}
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar0, false);
		Local_52.f_0 = 9;
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_120())
	{
		TASK::CLEAR_PED_TASKS(Local_43.f_1);
		Local_52.f_0 = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = TASK::GET_SCRIPT_TASK_STATUS(Local_43.f_1, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar3 == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
			{
				TASK::CLEAR_PED_TASKS(Local_43.f_1);
				Local_52.f_0 = 4;
				return;
			}
		}
	}
}

void func_148()//Position - 0x4EB8
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		Local_52.f_0 = 4;
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_43.f_4, false))
	{
		Local_43.f_4 = 0;
		Local_52.f_0 = 4;
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_1, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	if (fVar2 > 3f)
	{
		if (!func_107(Global_44024[iLocal_54 /*5*/].f_2))
		{
			Local_52.f_0 = 12;
			return;
		}
		Local_52.f_0 = 5;
		Local_51.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_43.f_4, iVar4, false))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			Local_52.f_0 = 4;
			return;
		}
	}
	func_149();
	TASK::TASK_ENTER_VEHICLE(Local_43.f_1, Local_43.f_4, -1, iVar4, 2f, 1, 0);
	Local_52.f_0 = 7;
}

void func_149()//Position - 0x4FBB
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_43.f_1))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(Local_43.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_43.f_1, 0.25f);
		PED::RESET_PED_STRAFE_CLIPSET(Local_43.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, -8f);
		Local_52.f_2 = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, false);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, false);
		AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, false);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_150()//Position - 0x5050
{
	if (SYSTEM::TIMERA() < Local_51.f_2)
	{
		func_121();
		return;
	}
	func_151();
	Local_51.f_2 = -2;
	Local_52.f_0 = 12;
}

int func_151()//Position - 0x507A
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	__LIB_22__::func_619(Local_43.f_1);
	Local_52.f_2 = "";
	Global_2815059.f_4607 = 1;
	return 1;
}

void func_153()//Position - 0x50F4
{
	int iVar0;
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		Local_52.f_0 = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		Local_52.f_0 = 12;
		return;
	}
	if (Local_51.f_0 == -2)
	{
		return;
	}
	if (!func_107(Global_44024[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	Local_52.f_0 = 12;
}

void func_155()//Position - 0x51D2
{
	int iVar0;
	int iVar1;
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_44105[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_44105[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_157(iVar1);
				__LIB_17__::func_12(iVar1);
			}
			else if (Global_44105[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_44105[iVar1 /*6*/])
					{
						func_157(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_157(int iParam0)//Position - 0x5297
{
	int iVar0;
	iVar0 = Global_44105[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_178();
			break;
		case 2:
			func_161(Global_44105[iParam0 /*6*/].f_4);
			break;
		case 3:
			func_160(Global_44105[iParam0 /*6*/].f_5);
			break;
		case 4:
			func_159();
			break;
		case 5:
			func_158();
			break;
		case 0:
			break;
		case 6:
			break;
		default:
			break;
	}
}

void func_158()//Position - 0x5319
{
	Local_52.f_1 = 2;
}

void func_159()//Position - 0x5326
{
	int iVar0;
	Global_44024[iLocal_54 /*5*/].f_4++;
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_4 < 9 && Global_44024[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44024[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_160(int iParam0)//Position - 0x53E6
{
	int iVar0;
	Global_44024[iLocal_54 /*5*/].f_3 = (Global_44024[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44024[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_161(int iParam0)//Position - 0x54A6
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51.f_0 = (Local_51.f_0 + iParam0);
}

void func_162()//Position - 0x54D6
{
	int iVar0;
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			__LIB_0__::func_467();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_164()//Position - 0x5528
{
	if (!Local_51.f_0 == -1)
	{
		if (!Local_51.f_0 == -2)
		{
			if (SYSTEM::TIMERA() >= Local_51.f_0)
			{
				func_149();
				Local_51.f_0 = -2;
				Local_52.f_0 = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_51.f_1)
		{
			func_178();
		}
	}
}

void func_166()//Position - 0x5597
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	Local_52.f_0 = 4;
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
		{
			Local_52.f_0 = 10;
		}
	}
	if (bLocal_46)
	{
		__LIB_0__::func_467();
		__LIB_0__::func_183(71, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = __LIB_0__::func_369(2059, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_167(iVar1);
			}
			__LIB_0__::func_413(2059, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STATS::STAT_GET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK"), &iVar2, -1);
			STATS::STAT_GET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK"), &iVar3, -1);
			STATS::STAT_GET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_167(iVar6);
			}
			switch (__LIB_0__::func_683())
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK"), iVar2 + 1, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK"), iVar3 + 1, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK"), iVar4 + 1, true);
					break;
				}
		}
		Local_52.f_1 = 1;
		return;
	}
	Local_52.f_1 = 12;
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51.f_0 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_167(int iParam0)//Position - 0x5744
{
	int iVar0;
	iVar0 = __LIB_0__::func_993(81);
	Global_2676732[iVar0 /*83*/] = 81;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_170()//Position - 0x57D0
{
	Local_51.f_0 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_176()//Position - 0x5923
{
	int iVar0;
	bLocal_46 = false;
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_46 = true;
		Global_44237 = 1;
		Global_44239++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		iVar0 = __LIB_0__::func_216(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_DRUNK");
				break;
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_177()//Position - 0x5990
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = __LIB_3__::func_35(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = __LIB_3__::func_34(iLocal_44);
}

void func_178()//Position - 0x59BE
{
	int iVar0;
	if (!__LIB_0__::func_39(0) && !__LIB_0__::func_39(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
		{
			iVar0 = __LIB_0__::func_216(Local_43.f_1);
			if (Global_44024[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						__LIB_0__::func_640(Local_43.f_1, "POST_STONED", 24);
						break;
					case 1:
						__LIB_0__::func_640(Local_43.f_1, "POST_STONED", 24);
						break;
					case 2:
						__LIB_0__::func_640(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_NORMAL");
					break;
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_149();
	if (bLocal_46)
	{
		Global_44237 = 0;
	}
	func_179();
	STREAMING::REMOVE_ANIM_DICT(__LIB_16__::func_879(0));
	STREAMING::REMOVE_ANIM_DICT(__LIB_16__::func_879(2));
	STREAMING::REMOVE_ANIM_DICT(__LIB_16__::func_879(1));
	Global_1940653 = 0;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
	{
		__LIB_0__::func_366(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_179()//Position - 0x5AC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_142(iVar0, 0f);
}

