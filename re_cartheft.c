#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int* iLocal_63 = NULL;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	char* sLocal_82 = NULL;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	float fLocal_99 = 0f;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	struct<10> Local_102[16];
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char[] cLocal_114[8] = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	char* sLocal_126 = NULL;
	char* sLocal_127 = NULL;
	char* sLocal_128 = NULL;
	char* sLocal_129 = NULL;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	int iLocal_132 = 0;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	struct<3> Local_135 = { 0, 0, 0 } ;
	struct<3> Local_136 = { 0, 0, 0 } ;
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = -1;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 1000;
	var uLocal_148 = 1000;
	var uLocal_149 = 0;
	bool bLocal_150 = 0;
	struct<18> Local_151 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	int iVar1;
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_52 = 10f;
	fLocal_53 = 7f;
	iLocal_54 = 1;
	sLocal_80 = "random@car_thief@waving_ig_1";
	fLocal_99 = 1f;
	iLocal_119 = 786603;
	iLocal_120 = 786469;
	sLocal_127 = "car_returned_peyote";
	sLocal_128 = "girl_car_returned";
	sLocal_129 = "player_car_returned";
	Local_50 = { ScriptParam_151.f_1[0 /*3*/] };
	fLocal_51 = ScriptParam_151.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_237();
	}
	func_236();
	if (bLocal_121 == 2)
	{
		if (__LIB_8__.func_915(34))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (Var0.f_2 > 23f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -743.3924f, -2129.8203f, 12.076193f, -708.892f, -2160.7053f, 19.703499f, 124.5f, false, true, 0))
				{
					SCRIPT::TERMINATE_THIS_THREAD();
				}
			}
		}
	}
	if (func_194(Local_50, 17, bLocal_121, 0, 0))
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
		__LIB_0__.func_371();
		__LIB_30__.func_879(iLocal_59, &uLocal_62);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		func_188();
		if (!__LIB_35__.func_175())
		{
			if (__LIB_40__.func_735())
			{
				func_237();
			}
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_46)
				{
					case 0:
						if (func_169())
						{
							PED::SET_CREATE_RANDOM_COPS(false);
							iLocal_46 = 1;
						}
						break;
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_72))
						{
							if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_71)) && __LIB_1__.func_183(iLocal_73)) && !func_167(0))
							{
								if (func_166())
								{
									if (__LIB_1__.func_183(iLocal_76))
									{
										VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_76, false);
									}
									__LIB_40__.func_733(1);
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
									__LIB_26__.func_264(39, 1);
									__LIB_26__.func_264(40, 1);
									__LIB_26__.func_264(41, 1);
									__LIB_26__.func_264(42, 1);
									__LIB_26__.func_264(43, 1);
									__LIB_26__.func_264(44, 1);
									SYSTEM::SETTIMERA(0);
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(iLocal_71))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
									PED::SET_PED_KEEP_TASK(iLocal_71, true);
									SYSTEM::WAIT(0);
								}
								func_237();
							}
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_71) && __LIB_1__.func_183(iLocal_73))
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_71, iLocal_73, 20f, iLocal_119);
								PED::SET_PED_KEEP_TASK(iLocal_71, true);
								SYSTEM::WAIT(0);
							}
							func_120(0);
						}
						break;
				}
			}
			else
			{
				func_237();
			}
		}
		else
		{
			if (PED::IS_PED_INJURED(iLocal_72))
			{
				if (Local_102[2 /*10*/].f_7)
				{
					__LIB_0__.func_202(&Local_102, 2);
				}
			}
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			func_111();
			if (__LIB_1__.func_183(iLocal_73) && !func_110())
			{
				if (func_108())
				{
					if (!PED::IS_PED_INJURED(iLocal_71))
					{
						switch (iLocal_47)
						{
							case 0:
								if (!PED::IS_PED_INJURED(iLocal_72))
								{
									if (PED::IS_PED_IN_VEHICLE(iLocal_72, iLocal_73, false))
									{
										if (bLocal_121 == 2)
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_72, true, 1);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_73, true, 1);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_73, PLAYER::PLAYER_PED_ID(), 8, 30f, iLocal_120, 200f, 10f, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_72, iLocal_74);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
										}
										else
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_72, true, 1);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
											TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_73, 30, 1000);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_73, PLAYER::PLAYER_PED_ID(), 8, 40f, iLocal_120, 200f, 10f, true);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_72, iLocal_74);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
										}
										Local_133 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_73, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_73, "wheel_lr")) };
										Local_134 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_73, Local_133) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", iLocal_73, Local_134 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, false, false, false);
										Local_135 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_73, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_73, "wheel_rr")) };
										Local_136 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_73, Local_135) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", iLocal_73, Local_136 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, false, false, false);
										SYSTEM::SETTIMERA(0);
										if (!HUD::DOES_BLIP_EXIST(iLocal_60))
										{
											iLocal_60 = __LIB_37__.func_549(iLocal_73, 1, 0);
										}
										MISC::SET_INSTANCE_PRIORITY_HINT(2);
										iLocal_47 = 1;
									}
									else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_73, PLAYER::PLAYER_PED_ID(), true))
									{
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											TASK::TASK_SMART_FLEE_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
											PED::SET_PED_KEEP_TASK(iLocal_72, true);
											SYSTEM::WAIT(0);
										}
										func_237();
									}
								}
								else
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_71, iLocal_73, 20f, iLocal_119);
									PED::SET_PED_KEEP_TASK(iLocal_71, true);
									SYSTEM::WAIT(0);
									func_120(0);
								}
								break;
							case 1:
								if (__LIB_1__.func_183(iLocal_73))
								{
									if (bLocal_121 == 1)
									{
										if (SYSTEM::TIMERA() < 5000)
										{
											if (SYSTEM::TIMERA() > 2000)
											{
												fLocal_99 = (fLocal_99 + 0.4f);
											}
											else
											{
												fLocal_99 = (fLocal_99 + 0.2f);
											}
											if (fLocal_99 > 30f)
											{
												fLocal_99 = 30f;
											}
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_73, fLocal_99);
											iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_73, true), 5f, 0, 4);
											if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											{
												if (__LIB_1__.func_183(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
												{
													if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_73))
													{
														SYSTEM::SETTIMERA(5000);
													}
												}
												if (__LIB_1__.func_183(iVar1))
												{
													if (iVar1 != iLocal_73)
													{
														if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iLocal_73))
														{
															SYSTEM::SETTIMERA(5000);
														}
													}
												}
											}
										}
									}
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_73) < 700f)
									{
										func_237();
									}
								}
								func_76();
								if ((((((func_75() || func_74()) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_73)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_73, 1, 5000)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_73)) || PED::IS_PED_INJURED(iLocal_72)) || !PED::IS_PED_IN_VEHICLE(iLocal_72, iLocal_73, false))
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
									{
										if (__LIB_1__.func_183(iLocal_73))
										{
											AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_73, 0f);
										}
										AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
									}
									if (HUD::DOES_BLIP_EXIST(iLocal_60))
									{
										HUD::REMOVE_BLIP(&iLocal_60);
									}
									func_73();
									if (HUD::DOES_BLIP_EXIST(iLocal_59))
									{
										HUD::REMOVE_BLIP(&iLocal_59);
									}
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_71);
									VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_73, 50f, 5, false);
									iLocal_61 = __LIB_37__.func_549(iLocal_73, 0, 0);
									fLocal_93 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_73, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
									fLocal_91 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_73, true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true));
									fLocal_92 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true));
									__LIB_9__.func_981(&uLocal_138, 0, 0);
									iLocal_47 = 2;
								}
								break;
							case 2:
								if (__LIB_1__.func_183(iLocal_73))
								{
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_73) < 700f)
									{
										func_237();
									}
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									func_237();
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_72, false))
								{
									if (!PED::IS_PED_IN_VEHICLE(iLocal_72, iLocal_73, false))
									{
										func_70(iLocal_72, &iLocal_63, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
									}
								}
								else
								{
									__LIB_0__.func_489(&iLocal_63);
								}
								if (!PED::IS_PED_INJURED(iLocal_72))
								{
									if (!PED::IS_PED_IN_COMBAT(iLocal_72, PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_COMBAT_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 0, 16);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_72));
									}
								}
								if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_73, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fLocal_93 + 220f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_73, true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) > (fLocal_91 + 220f)) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) > (fLocal_92 + 220f))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_73, false))
									{
										func_120(0);
									}
									else
									{
										func_237();
									}
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_61))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_73, false))
									{
										HUD::REMOVE_BLIP(&iLocal_61);
										iLocal_59 = __LIB_35__.func_198(iLocal_71, 0, 0);
										__LIB_30__.func_878(&uLocal_62);
										__LIB_9__.func_981(&uLocal_138, 0, 0);
										if (!iLocal_56)
										{
											if (bLocal_121 == 1)
											{
												Local_85 = { -2258.759f, 4274.059f, 45.916603f };
											}
											else if (bLocal_57)
											{
												Local_85 = { -483.4162f, -2160.8735f, 8.359f };
											}
											else
											{
												Local_85 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!CAM::IS_SPHERE_VISIBLE(Local_85, 2f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_71))
											{
												ENTITY::SET_ENTITY_COORDS(iLocal_71, Local_85, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(iLocal_71, fLocal_90);
												iLocal_56 = 1;
											}
										}
										iLocal_48 = 3;
										iLocal_124 = MISC::GET_GAME_TIMER();
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_73, iLocal_71, 20f, 20f, 7f, false, true, 0))
									{
										func_63();
										if (func_62())
										{
											if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_71, iLocal_73, -1, false, false))
											{
												if (!bLocal_116)
												{
													if (__LIB_37__.func_799(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
													{
													}
												}
												TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_71, iLocal_73, 35f, iLocal_119);
												PED::SET_PED_KEEP_TASK(iLocal_71, true);
												func_120(1);
											}
										}
									}
								}
								else if (HUD::DOES_BLIP_EXIST(iLocal_59))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_73, false))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, fLocal_52, fLocal_52, fLocal_52, false, true, 0))
										{
											if (__LIB_0__.func_398(1, 0, 1))
											{
												HUD::REMOVE_BLIP(&iLocal_59);
												if (bLocal_121 == 1)
												{
													if (__LIB_4__.func_230(ENTITY::GET_ENTITY_HEADING(iLocal_73), 336f, 90f))
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												STREAMING::REQUEST_ANIM_DICT(sLocal_126);
												iLocal_48 = 4;
												iLocal_47 = 3;
											}
										}
										else
										{
											__LIB_37__.func_547(ENTITY::GET_ENTITY_COORDS(iLocal_71, true), &fLocal_52, &fLocal_53);
										}
									}
									else
									{
										HUD::REMOVE_BLIP(&iLocal_59);
										iLocal_61 = __LIB_37__.func_549(iLocal_73, 0, 0);
										iLocal_48 = 0;
									}
								}
								break;
							case 3:
								if (bLocal_121 == 1)
								{
									if (func_4())
									{
										if (__LIB_0__.func_121(iLocal_71))
										{
											PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
										}
										func_120(1);
									}
								}
								else if (func_4())
								{
									if (__LIB_0__.func_121(iLocal_71))
									{
										PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
									}
									func_120(1);
								}
								break;
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(iLocal_72))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_72, iLocal_73, false))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_72, iLocal_73, PLAYER::PLAYER_PED_ID(), 8, 50f, iLocal_120, 10f, 10f, false);
								PED::SET_PED_KEEP_TASK(iLocal_72, true);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_72));
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								PED::SET_PED_KEEP_TASK(iLocal_72, true);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_72));
							}
						}
						SYSTEM::WAIT(0);
						func_237();
					}
				}
				else
				{
					if (iLocal_47 == 1)
					{
						if (__LIB_1__.func_183(iLocal_73))
						{
							VEHICLE::DELETE_VEHICLE(&iLocal_73);
						}
						if (!PED::IS_PED_INJURED(iLocal_72))
						{
							PED::DELETE_PED(&iLocal_72);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_71))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, sLocal_79, "agitated_idle_a", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(iLocal_71, "waiting", sLocal_79, -2f);
						}
						__LIB_6__.func_834(iLocal_71, "GENERIC_CURSE_HIGH", 24);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_88, 1f, 20000, 40000f, 0.5f);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
					}
					func_237();
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_72))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_72, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_73, 50f);
				}
				func_237();
			}
		}
	}
}

int func_4()//Position - 0xDB3
{
	struct<3> Var0;
	char* sVar1;
	struct<3> Var2;
	float fVar3;
	sVar1 = "chassis";
	func_63();
	if (((!PED::IS_PED_INJURED(iLocal_71) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && __LIB_1__.func_183(iLocal_73)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_126))
	{
		switch (iLocal_49)
		{
			case 0:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (__LIB_0__.func_398(1, 0, 1))
					{
						if (!BitTest(Global_8136, 11))
						{
							if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									HUD::CLEAR_HELP(true);
									while (!__LIB_6__.func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_53, 1, 1056964608, 0, 1, 0))
									{
										HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
										SYSTEM::WAIT(0);
									}
									__LIB_6__.func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_53, 0, 1056964608, 0, 1, 0);
								}
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								if (!PED::IS_PED_INJURED(iLocal_71))
								{
									PED::SET_PED_CAN_RAGDOLL(iLocal_71, false);
								}
								__LIB_6__.func_771();
								__LIB_8__.func_611(0);
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								iLocal_49 = 1;
							}
						}
					}
				}
				break;
			case 1:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_73, 0, 0, 0f);
				VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_73, 0, true, true, true);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (bLocal_121 == 1)
				{
					if (__LIB_1__.func_183(iLocal_73))
					{
						if (__LIB_4__.func_230(ENTITY::GET_ENTITY_HEADING(iLocal_73), 336f, 90f))
						{
							Local_84 = { -2254.2998f, 4273.361f, 44.9697f };
							fLocal_89 = 336.6557f;
							Local_83 = { -2252.683f, 4274.1597f, 45.0612f };
							Local_85 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_90 = 272.8688f;
							Local_97 = { -2254.5876f, 4277.307f, 45.6133f };
							Local_98 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							Local_84 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_89 = 148.0287f;
							Local_85 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_90 = 179.4774f;
							Local_83 = { -2257.088f, 4268.938f, 44.6456f };
							Local_97 = { -2255.7751f, 4274.144f, 46.0666f };
							Local_98 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					Var2 = { -2269.34f, 4279.89f, 45.47f };
					fVar3 = 53.23f;
					fLocal_96 = 50f;
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_83, true, false, false, true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					ENTITY::SET_ENTITY_COORDS(iLocal_71, Local_85, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_73, fLocal_89);
					ENTITY::SET_ENTITY_COORDS(iLocal_73, Local_84, true, false, false, true);
				}
				else
				{
					if (!__LIB_4__.func_230(ENTITY::GET_ENTITY_HEADING(iLocal_73), 64.6764f, 90f))
					{
						Local_97 = { -478.7095f, -2163.5984f, 10.3091f };
						Local_98 = { -7.4391f, 0.0006f, 35.6865f };
						Local_84 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_89 = 243.308f;
						fLocal_96 = 22f;
					}
					else
					{
						Local_97 = { -488.0143f, -2149.419f, 9.9817f };
						Local_98 = { -11.7475f, 0.0006f, -145.0045f };
						Local_84 = { -484.3195f, -2154.1882f, 8.2182f };
						fLocal_89 = 64.6764f;
						fLocal_96 = 36.9289f;
					}
					Var2 = { -486.92f, -2169.01f, 8.89f };
					fVar3 = 63.1f;
					ENTITY::SET_ENTITY_COORDS(iLocal_73, Local_84, true, false, false, true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					ENTITY::SET_ENTITY_HEADING(iLocal_73, fLocal_89);
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				if (__LIB_1__.func_183(iLocal_73))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_73, 5f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_72))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_72, iLocal_73, false))
						{
							PED::DELETE_PED(&iLocal_72);
						}
					}
				}
				Local_130 = { 0f, 0f, 0f };
				Local_131 = { 0f, 0f, 0f };
				iLocal_122 = PED::CREATE_SYNCHRONIZED_SCENE(Local_130, Local_131, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_122, iLocal_73, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_73, sVar1));
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_122, Local_130, Local_131, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_71, iLocal_122, sLocal_126, sLocal_128, 1000f, -2f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_122, sLocal_126, sLocal_129, 1000f, -2f, 1024, 0, 1000f, 0);
				iLocal_75 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_ANIMATED_CAMERA", Local_97, Local_98, fLocal_96, false, 2);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_75, iLocal_122, "car_returned_cam", sLocal_126);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_73, sLocal_127, sLocal_126, 1000f, false, false, false, 0f, 262144);
				Local_130 = { ENTITY::GET_ENTITY_COORDS(iLocal_73, true) };
				Local_131 = { ENTITY::GET_ENTITY_ROTATION(iLocal_73, 2) };
				if (__LIB_1__.func_183(iLocal_76))
				{
					if (__LIB_0__.func_529(iLocal_76, Local_84, 1) <= 11f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_76, Var2, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_76, fVar3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_76, 5f);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_76, true, false);
					}
				}
				MISC::CLEAR_AREA(Local_84, 10f, true, false, false, false);
				SYSTEM::SETTIMERA(0);
				if (bLocal_121 == 2)
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("rocoto"), 15);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("peyote"), 15);
				}
				FIRE::STOP_FIRE_IN_RANGE(Local_84, 15f);
				CAM::SET_CAM_ACTIVE(iLocal_75, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				iLocal_49 = 3;
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				break;
			case 3:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (func_20())
				{
					iLocal_49 = 4;
				}
				if (bLocal_121 == 1)
				{
					if (SYSTEM::TIMERA() > 1500 && !bLocal_150)
					{
						if (__LIB_37__.func_799(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_49 = 4;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_122) && !bLocal_150)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_122) >= 0.2f)
					{
						if (__LIB_37__.func_799(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_58 = 0;
							iLocal_49 = 4;
						}
					}
				}
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				break;
			case 4:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (bLocal_121 == 2)
				{
					if (!__LIB_0__.func_75())
					{
						if (iLocal_58 == 0)
						{
							if (__LIB_37__.func_799(&Local_102, cLocal_114, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_58 = 1;
							}
						}
					}
				}
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				if (bLocal_121 == 1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_122))
					{
						if (iLocal_132 == 0)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_122) >= 0.83f)
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_122), false, false, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
								iLocal_132 = 1;
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_71))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_122) >= 0.83f)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, sLocal_126, sLocal_128, 2))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, -1000f, false);
									if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, false))
									{
										if (__LIB_1__.func_183(iLocal_73))
										{
											PED::SET_PED_INTO_VEHICLE(iLocal_71, iLocal_73, -1);
											PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
										}
									}
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_71, true, false);
								}
								else
								{
									PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
								}
							}
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_122))
				{
					if (iLocal_132 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_122) >= 0.86f)
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_122), false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
							iLocal_132 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_71))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_122) > 0.847f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, sLocal_126, sLocal_128, 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, -1000f, false);
								if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, false))
								{
									if (__LIB_1__.func_183(iLocal_73))
									{
										PED::SET_PED_INTO_VEHICLE(iLocal_71, iLocal_73, -1);
										PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
									}
								}
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_71, true, false);
							}
							else
							{
								PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
							}
						}
					}
				}
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_122) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_122) >= 0.99f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_122)) || func_20())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_73, false) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73, sLocal_126, sLocal_127, 3))
					{
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_73, sLocal_126, sLocal_127, 1f);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_122))
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_122, 1f);
					}
					if (bLocal_150)
					{
						Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_126, sLocal_129, Local_130, Local_131, 1f, 2) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
						Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_126, sLocal_129, Local_130, Local_131, 1f, 2) };
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var0.f_2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), true, 0, true);
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, false))
					{
						if (__LIB_1__.func_183(iLocal_73))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_71, iLocal_73, -1);
							PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_71))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, false))
						{
							if (__LIB_1__.func_183(iLocal_73))
							{
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_73, 0, 0, 0f);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_73, 0, true, true, true);
								iLocal_125 = MISC::GET_GAME_TIMER();
								iLocal_49 = 5;
							}
						}
					}
				}
				break;
			case 5:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if ((MISC::GET_GAME_TIMER() - iLocal_125) > 100)
				{
					if (__LIB_0__.func_121(iLocal_71) && __LIB_1__.func_183(iLocal_73))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_73, 9, 1000);
						TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_73, 25f, iLocal_119);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
						PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
					}
					__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
					if (bLocal_150)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_75))
						{
							CAM::SET_CAM_ACTIVE(iLocal_75, false);
							CAM::DESTROY_CAM(iLocal_75, false);
						}
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						SYSTEM::WAIT(750);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						__LIB_0__.func_84(500, 1);
					}
					else
					{
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
						CAM::SET_CAM_ACTIVE(iLocal_75, false);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					__LIB_0__.func_106(&iLocal_73);
					__LIB_26__.func_515(__LIB_18__.func_173(), 4, 5);
					return 1;
				}
				else if (__LIB_0__.func_121(iLocal_71))
				{
					PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
				}
				break;
			}
	}
	return 0;
}

int func_20()//Position - 0x1B99
{
	int iVar0;
	iVar0 = joaat("peyote");
	if (bLocal_121 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (__LIB_6__.func_841(1000))
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(iVar0))
		{
			CAM::SET_CAM_ACTIVE(iLocal_75, false);
			CAM::DO_SCREEN_FADE_OUT(500);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				SYSTEM::WAIT(0);
			}
			bLocal_150 = true;
			return 1;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(iVar0))
		{
			bLocal_150 = true;
			return 1;
		}
	}
	return 0;
}

int func_62()//Position - 0x2D16
{
	if (PED::IS_PED_INJURED(iLocal_72))
	{
		return 1;
	}
	else if (__LIB_1__.func_183(iLocal_73))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_72, iLocal_73, 10f, 10f, 10f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_63()//Position - 0x2D5A
{
	float fVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_1__.func_183(iLocal_73))
	{
		fVar0 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_73);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(iLocal_73))
		{
			sLocal_101 = sLocal_113;
		}
		else if (bVar2)
		{
			sLocal_101 = sLocal_112;
		}
		else
		{
			sLocal_101 = sLocal_111;
		}
	}
}

int func_70(int iParam0, int* iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x2F70
{
	bool bVar0;
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				iParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*iParam1))
				{
					HUD::SET_BLIP_PRIORITY(*iParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*iParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*iParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*iParam1);
				}
				HUD::SET_BLIP_PRIORITY(*iParam1, 7);
			}
		}
		if (!BitTest(iParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				MISC::SET_BIT(&(iParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(iParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(iParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(iParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(iParam1->f_1, 7);
					MISC::SET_BIT(&(iParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(iParam1->f_1))
			{
				iParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(iParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
		{
			iParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(iParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_73()//Position - 0x3249
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72, 2, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72, 6, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72, 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72, 1, false);
		TASK::TASK_COMBAT_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_72, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_72));
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_72));
	}
	if (__LIB_1__.func_183(iLocal_73))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_73, 1);
	}
}

int func_74()//Position - 0x32B6
{
	if (__LIB_1__.func_183(iLocal_73))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73, 40f, 40f, 10f, false, true, 0))
		{
			if (iLocal_77)
			{
				if (!PED::IS_PED_INJURED(iLocal_72))
				{
					if (!iLocal_118)
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_73))
						{
							TASK::TASK_DRIVE_BY(iLocal_72, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 40f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							iLocal_118 = 1;
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_123 + 7000)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73, 20f, 20f, 10f, false, true, 0))
						{
							if (__LIB_37__.func_799(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0))
							{
								iLocal_123 = MISC::GET_GAME_TIMER();
							}
						}
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_73);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_73);
					iLocal_77 = 0;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_73, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(iLocal_72))
				{
					__LIB_37__.func_799(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0);
				}
				iLocal_78++;
				iLocal_77 = 1;
			}
			if (iLocal_78 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_118 = 0;
			iLocal_77 = 0;
		}
	}
	return 0;
}

int func_75()//Position - 0x33C2
{
	if (__LIB_1__.func_183(iLocal_73))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_73, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_73, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_73, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_73, 5, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_76()//Position - 0x340D
{
	if (__LIB_1__.func_183(iLocal_73) && HUD::DOES_BLIP_EXIST(iLocal_60))
	{
		__LIB_39__.func_909(&uLocal_138, iLocal_73, 0, 0, 1, 1, 1);
	}
}

int func_108()//Position - 0x452A
{
	float fVar0;
	fVar0 = 300f;
	if (bLocal_121 == 1)
	{
		fVar0 = 220f;
	}
	if (__LIB_1__.func_183(iLocal_73))
	{
		__LIB_10__.func_618(iLocal_60, iLocal_73, fVar0, 1061158912, 0);
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73, fVar0, fVar0, 100f, false, true, 0))
		{
			return 1;
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_73))
		{
			return 1;
		}
	}
	return 0;
}

int func_110()//Position - 0x46E8
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_73, false) && VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_73))
	{
		return 1;
	}
	return 0;
}

void func_111()//Position - 0x470E
{
	if (!PED::IS_PED_INJURED(iLocal_71) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_48)
		{
			case 0:
				iLocal_54 = iLocal_54;
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, false))
				{
					if (bLocal_121 == 1)
					{
						if (func_118())
						{
							iLocal_48 = 1;
						}
					}
					else if (!PED::IS_PED_RAGDOLL(iLocal_71) && !TASK::IS_PED_GETTING_UP(iLocal_71))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.5486f, 18.99127f, 26.75f, false, true, 0))
						{
							TASK::TASK_ACHIEVE_HEADING(iLocal_71, 345f, 0);
							iLocal_48 = 1;
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
							TASK::TASK_PLAY_ANIM(0, sLocal_80, "arms_waving", 2f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_80, "arms_waving", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_80, "arms_waving", 8f, -2f, -1, 0, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_74);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
							iLocal_124 = MISC::GET_GAME_TIMER();
							iLocal_48 = 2;
						}
					}
				}
				break;
			case 1:
				if (bLocal_121 == 1)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
						TASK::TASK_PLAY_ANIM(0, sLocal_80, sLocal_82, 4f, -2f, -1, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
						iLocal_48 = 2;
					}
				}
				else if (PED::IS_PED_FACING_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 60f))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
						TASK::TASK_PLAY_ANIM(0, sLocal_80, "arms_waving", 2f, -8f, -1, 0, 0f, false, false, false);
						if (bLocal_57 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, sLocal_80, "pointing", 8f, -4f, -1, 0, 0f, false, false, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
						iLocal_48 = 2;
					}
				}
				if (func_118())
				{
					if (func_117())
					{
					}
				}
				break;
			case 2:
				if (func_118())
				{
					if (func_117())
					{
					}
				}
				if (bLocal_121 == 2)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 60f) && !__LIB_4__.func_465(iLocal_71, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 0);
					}
					if (__LIB_0__.func_76(iLocal_71, PLAYER::PLAYER_PED_ID(), 1) < 25f)
					{
						if (!__LIB_0__.func_75())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_124) > 6000)
							{
								func_113();
							}
						}
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !__LIB_4__.func_465(iLocal_71, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
				{
					if (bLocal_121 == 1)
					{
						Local_85 = { -2260.1f, 4274.24f, 44.9f };
						if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_71, Local_85, 1.5f, 1.5f, 1.5f, false, true, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_85, 1f, 20000, fLocal_90, 0.5f);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_74);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, sLocal_79, "waiting", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, 0f, false, false, false);
							if (__LIB_0__.func_76(iLocal_71, PLAYER::PLAYER_PED_ID(), 1) < 25f)
							{
								func_113();
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, sLocal_79, "waiting", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, 0f, false, false, false);
					}
				}
				break;
			case 3:
				if (!PED::IS_PED_HEADTRACKING_PED(iLocal_71, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 40f, 40f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 9f, 9f, 9f, false, true, 0))
				{
					if (func_112())
					{
						if (iLocal_55)
						{
							if (bLocal_121 == 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_74);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
								iLocal_55 = 0;
								iLocal_124 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_74);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
								iLocal_55 = 0;
								iLocal_124 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
							{
								if (!PED::IS_PED_FACING_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_74);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_124) > 6000)
								{
									iLocal_55 = 1;
								}
							}
						}
						else if (!PED::IS_PED_FACING_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 70f))
						{
							TASK::CLEAR_PED_TASKS(iLocal_71);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_74);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_74);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_71, iLocal_74);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_74);
							iLocal_124 += 4000;
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_72))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_72, true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_72);
					}
				}
				else
				{
					if (bLocal_121 == 1)
					{
						Local_85 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_57)
					{
						Local_85 = { -483.4162f, -2160.8735f, 8.359f };
					}
					else
					{
						Local_85 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_71, Local_85, 4f, 4f, 4f, false, true, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7)
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_71, Local_85, 1f, 20000, fLocal_90, 0.5f);
						}
					}
					else if (!PED::IS_PED_FACING_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 50f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), -1);
					}
					iLocal_55 = 1;
				}
				break;
			case 4:
				break;
			}
	}
	if (func_167(1))
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_71, true);
			SYSTEM::WAIT(0);
		}
		func_237();
	}
}

bool func_112()//Position - 0x4D7A
{
	if (!bLocal_116)
	{
		if (__LIB_37__.func_799(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
		{
			bLocal_116 = true;
		}
	}
	return bLocal_116;
}

int func_113()//Position - 0x4DA3
{
	if (!iLocal_117)
	{
		if (__LIB_37__.func_799(&Local_102, cLocal_114, sLocal_108, 4, 0, 0, 0))
		{
			iLocal_117 = 1;
		}
	}
	return iLocal_117;
}

int func_117()//Position - 0x4E7D
{
	if (!iLocal_115)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			if (__LIB_37__.func_799(&Local_102, cLocal_114, sLocal_107, 4, 0, 0, 0))
			{
				iLocal_115 = 1;
			}
		}
	}
	return iLocal_115;
}

int func_118()//Position - 0x4EB0
{
	if (!PED::IS_PED_INJURED(iLocal_72) && !PED::IS_PED_INJURED(iLocal_71))
	{
		if (__LIB_1__.func_183(iLocal_73))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_72, iLocal_73))
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

void func_120(bool bParam0)//Position - 0x4F0B
{
	int iVar0;
	if (bLocal_121 == 2)
	{
		iVar0 = __LIB_18__.func_173();
		switch (iVar0)
		{
			case 0:
				while (!__LIB_26__.func_490(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (__LIB_0__.func_121(iLocal_71))
					{
						PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			case 1:
				while (!__LIB_26__.func_490(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (__LIB_0__.func_121(iLocal_71))
					{
						PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			case 2:
				while (!__LIB_26__.func_490(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (__LIB_0__.func_121(iLocal_71))
					{
						PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		__LIB_30__.func_870(8);
	}
	func_124(17, bLocal_121);
	__LIB_20__.func_174();
	func_237();
}

void func_124(int iParam0, bool bParam1)//Position - 0x5086
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_35__.func_171();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= __LIB_30__.func_873(iParam0))
	{
		__LIB_30__.func_872(iParam0, bParam1);
		if (!__LIB_0__.func_67(51))
		{
			__LIB_18__.func_203("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_26__.func_250(), 0, 138, 0);
			__LIB_0__.func_460(51);
		}
		if (__LIB_30__.func_859(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_30__.func_871(iParam0, bParam1) != 322)
		{
			__LIB_37__.func_544(__LIB_30__.func_871(iParam0, bParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_30__.func_870(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_30__.func_870(7);
			}
			else
			{
				__LIB_30__.func_870(1);
			}
		}
	}
}

int func_166()//Position - 0x7018
{
	float fVar0;
	switch (bLocal_121)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2300.3167f, 4179.6123f, 36.981594f, -2191.317f, 4368.794f, 74.89676f, 70.75f, false, true, 0))
			{
				return 1;
			}
			break;
		case 2:
			if (bLocal_57)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -487.5048f, -2157.9895f, 8.2627f, fVar0, fVar0, 40f, false, true, 0))
			{
				return 1;
			}
			break;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_71))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_167(int iParam0)//Position - 0x70CE
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	Var1 = { 6f, 6f, 6f };
	Var2 = { -6f, -6f, -6f };
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			if (iParam0 == 0 || __LIB_0__.func_76(iLocal_71, iLocal_72, 1) > 15f)
			{
				if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_71, 31086, 0f, 0f, 0f), 4f, false))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_71, 31086, 0f, 0f, 0f) };
				Var2 = { Var2 + PED::GET_PED_BONE_COORDS(iLocal_71, 31086, 0f, 0f, 0f) };
				if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("WEAPON_STICKYBOMB"), true))
				{
					bVar0 = true;
				}
			}
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), true))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_169()//Position - 0x721F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	Var1 = { Local_87 };
	fVar2 = fLocal_95;
	switch (bLocal_121)
	{
		case 1:
			Local_86 = { -2257.4817f, 4266.638f, 44.5095f };
			fLocal_94 = 293.9091f;
			Local_87 = { -2253.7632f, 4273.17f, 44.977f };
			fLocal_95 = 185.5212f;
			iVar3 = joaat("A_F_Y_Vinewood_04");
			iVar5 = joaat("peyote");
			iVar4 = joaat("G_M_Y_SalvaGoon_01");
			sVar6 = "CThiefVictim";
			sVar7 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_107 = "RECT1_ATTR";
			sLocal_108 = "RECT1_HELP";
			sLocal_109 = "RECT1_FYOU";
			sLocal_110 = "RECT1_JOY";
			sLocal_111 = "RECT1_OK";
			sLocal_112 = "RECT1_BAD";
			sLocal_113 = "RECT1_GOOD";
			cLocal_114 = "RECT1AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_81 = "random@car_thief@waving_ig_1";
			Local_88 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_53 = 3f;
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_86) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_87))
			{
				Var1 = { Local_86 };
				fVar2 = fLocal_94;
				bLocal_57 = true;
				sLocal_80 = "random@car_thief@waving_ig_2";
				sLocal_82 = "waving_l";
			}
			else
			{
				sLocal_82 = "waving";
				sLocal_80 = "random@car_thief@waving_ig_1";
				Var1 = { Local_87 };
				fVar2 = fLocal_95;
			}
			break;
		case 2:
			Local_87 = { -538.6718f, -2183.4421f, 5.2336f };
			Local_86 = { -365.7f, -2179.2603f, 9.3184f };
			iVar3 = joaat("A_F_Y_Indian_01");
			iVar5 = joaat("rocoto");
			iVar4 = joaat("A_M_M_SouCent_04");
			sVar6 = "CThiefGolfer";
			sVar8 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_107 = "RECT2_ATTR";
			sLocal_108 = "RECT2_HELP";
			sLocal_109 = "RECT2_FYOU";
			sLocal_110 = "RECT2_JOY";
			sLocal_111 = "RECT2_OK";
			sLocal_112 = "RECT2_BAD";
			sLocal_113 = "RECT2_GOOD";
			cLocal_114 = "RECT2AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_80 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_81 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			Local_88 = { -505.1966f, -2159.2275f, 7.6466f };
			fLocal_52 = 15f;
			fLocal_53 = 3f;
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_86) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_87))
			{
				bLocal_57 = true;
			}
			break;
	}
	STREAMING::REQUEST_MODEL(iVar3);
	STREAMING::REQUEST_MODEL(iVar4);
	STREAMING::REQUEST_MODEL(iVar5);
	STREAMING::REQUEST_ANIM_DICT(sLocal_79);
	STREAMING::REQUEST_ANIM_DICT(sLocal_80);
	STREAMING::REQUEST_ANIM_DICT(sLocal_81);
	STREAMING::REQUEST_ANIM_DICT("RANDOM@CAR_THIEF@WAITING_IG_4");
	STREAMING::REQUEST_PTFX_ASSET();
	if (((((((STREAMING::HAS_MODEL_LOADED(iVar3) && STREAMING::HAS_MODEL_LOADED(iVar4)) && STREAMING::HAS_MODEL_LOADED(iVar5)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_79)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_80)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_81)) && STREAMING::HAS_ANIM_DICT_LOADED("RANDOM@CAR_THIEF@WAITING_IG_4")) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		if (bLocal_121 == 1)
		{
			func_183("re_cartheft - Distance to vTop = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_86));
			func_183("re_cartheft - Distance to vBottom = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_87));
			iLocal_73 = VEHICLE::CREATE_VEHICLE(iVar5, Var1, fVar2, true, true, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_73, 0, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_73, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_73, true);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_73, false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_73, false);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_73, 2, false);
			iLocal_72 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 22, iVar4, -1, true, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_72, 42, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72, 3, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_72, joaat("WEAPON_PISTOL"), -1, true, true);
			PED::SET_PED_ACCURACY(iLocal_72, 10);
			PED::SET_DRIVER_ABILITY(iLocal_72, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(iLocal_72, 1f);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_73, 135, 135);
			PED::ADD_RELATIONSHIP_GROUP("re_cartheft relGroupThief", &iLocal_137);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_137, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_137, joaat("CIVMALE"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVMALE"), iLocal_137);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_72, iLocal_137);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_73, true);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Local_50 };
				fLocal_51 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1);
			}
			iLocal_71 = PED::CREATE_PED(5, iVar3, Local_50, fLocal_51, true, true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_71, sVar7);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 4, 1, 1, 0);
			AUDIO::STOP_PED_SPEAKING(iLocal_71, true);
			if (bLocal_57)
			{
				Local_84 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_89 = 124.6557f;
				Local_83 = { -2252.683f, 4274.1597f, 45.0612f };
				Local_85 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_90 = 272.8688f;
				Local_97 = { -2258.0403f, 4272.2437f, 45.75466f };
				Local_98 = { 1.729481f, 0f, -114.935196f };
			}
			else
			{
				Local_84 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_89 = 336.143f;
				Local_85 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_90 = 179.4774f;
				Local_83 = { -2257.088f, 4268.938f, 44.6456f };
				Local_97 = { -2254.8865f, 4273.539f, 46.2282f };
				Local_98 = { -7.492095f, 0f, -168.19087f };
			}
		}
		else
		{
			if (bLocal_57)
			{
				iLocal_73 = VEHICLE::CREATE_VEHICLE(iVar5, -488.7506f, -2159.3254f, 8.2581f, 15.0886f, true, true, false);
			}
			else
			{
				iLocal_73 = VEHICLE::CREATE_VEHICLE(iVar5, -486.3563f, -2159.9421f, 8.2887f, 288.8187f, true, true, false);
			}
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_73, 0, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_73, false);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_73, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_73, true);
			VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_73, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_73, 11, 2, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_73, 16, 3, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_73, 12, 1, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_73, 13, 1, false);
			VEHICLE::SET_VEHICLE_WHEEL_TYPE(iLocal_73, 3);
			VEHICLE::SET_VEHICLE_MOD(iLocal_73, 23, 6, false);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iLocal_73, 3);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_73, 18, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_73, 22, true);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_73, 143, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_73, 31, 2);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_73, false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_73, false);
			if (bLocal_57)
			{
				iLocal_71 = PED::CREATE_PED(5, iVar3, -490.4008f, -2160.7551f, 8.2498f, 314.0037f, true, true);
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -583.08844f, -2234.2488f, 4.523423f, -685.1817f, -2350.9036f, 17.070732f, 178f, false, true, 0))
			{
				iLocal_71 = PED::CREATE_PED(5, iVar3, -486.81f, -2156.99f, 8.27f, -172.34f, true, true);
			}
			else
			{
				iLocal_71 = PED::CREATE_PED(5, iVar3, -486.2511f, -2161.808f, 8.3041f, 353.4264f, true, true);
			}
			PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 4, 1, 2, 0);
			iLocal_72 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 22, iVar4, -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_72, joaat("WEAPON_PISTOL"), -1, true, true);
			PED::SET_PED_ACCURACY(iLocal_72, 10);
			PED::SET_DRIVER_ABILITY(iLocal_72, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(iLocal_72, 1f);
			PED::SET_PED_CONFIG_FLAG(iLocal_72, 42, true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_72, sVar8);
			Local_84 = { -501.9105f, -2148.0193f, 8.0392f };
			fLocal_89 = 294.4744f;
			Local_83 = { -501.0442f, -2150.7988f, 8.139f };
			Local_85 = { -493.8062f, -2156.036f, 8.1978f };
			Local_97 = { -504.365f, -2144.5342f, 9.8585f };
			Local_98 = { -6.6935f, 0f, -127.8147f };
		}
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_71, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_71, 185, true);
		VEHICLE::SET_CAN_RESPRAY_VEHICLE(iLocal_73, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_73, true, true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_72, true);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_71, iLocal_72, -1, 0, 2);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_73);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_73, true);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_73, false, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar5, true);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_73, "RE_CAR_STEAL_STOLEN_VEHICLE", 0f);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_73, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_71, 17, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_71, 512, true);
		switch (__LIB_18__.func_173())
		{
			case 0:
				sLocal_100 = "MICHAEL";
				break;
			case 1:
				sLocal_100 = "FRANKLIN";
				break;
			case 2:
				sLocal_100 = "TREVOR";
				break;
		}
		__LIB_0__.func_203(&Local_102, 0, PLAYER::PLAYER_PED_ID(), sLocal_100, 0, 1);
		__LIB_0__.func_203(&Local_102, 1, iLocal_71, sVar6, 0, 1);
		__LIB_0__.func_203(&Local_102, 2, iLocal_72, "CThief", 0, 1);
		return 1;
	}
	else if (func_170())
	{
		func_237();
	}
	return 0;
}

int func_170()//Position - 0x7A4F
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__.func_568())
		{
			return 0;
		}
	}
	if (__LIB_35__.func_173())
	{
		return 1;
	}
	if (__LIB_40__.func_734(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_183(char* sParam0, float fParam1)//Position - 0x975A
{
	__LIB_0__.func_558(sParam0);
	__LIB_12__.func_5(fParam1);
}

void func_188()//Position - 0x981D
{
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_73 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_76)
			{
				iLocal_76 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}
}

int func_194(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x998F
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_35__.func_171();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__.func_116())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__.func_568())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__.func_2(0))
		{
			return 0;
		}
		if (__LIB_35__.func_173())
		{
			return 0;
		}
		if (__LIB_2__.func_477())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__.func_43(__LIB_18__.func_173()))
		{
			if (__LIB_40__.func_734(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_30__.func_899(iParam1))
		{
			return 0;
		}
		if (__LIB_0__.func_43(__LIB_18__.func_173()))
		{
			if (__LIB_30__.func_867(__LIB_18__.func_173()) == 4 || __LIB_30__.func_867(__LIB_18__.func_173()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__.func_43(__LIB_18__.func_173()))
		{
			if (!__LIB_39__.func_550(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_32__.func_438(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_39__.func_551())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_32__.func_573(4))
		{
			return 0;
		}
		if (!__LIB_6__.func_763(5))
		{
			return 0;
		}
		if (__LIB_30__.func_866(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_30__.func_866(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_30__.func_899(30) && !__LIB_30__.func_866(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__.func_43(__LIB_18__.func_173()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_9__.func_51(iVar4))
				{
					if (__LIB_41__.func_659(iVar2))
					{
						if (!__LIB_0__.func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_18__.func_173() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

void func_236()//Position - 0xB023
{
	if (SYSTEM::VDIST(Local_50, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		bLocal_121 = true;
	}
	else if (SYSTEM::VDIST(Local_50, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		bLocal_121 = 2;
	}
}

void func_237()//Position - 0xB06E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_72) && !ENTITY::IS_ENTITY_DEAD(iLocal_72, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_72, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_72));
		__LIB_0__.func_124(&iLocal_72, 1, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_71) && !ENTITY::IS_ENTITY_DEAD(iLocal_71, false))
	{
		PED::SET_PED_RESET_FLAG(iLocal_71, 310, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, false);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_60))
	{
		HUD::REMOVE_BLIP(&iLocal_60);
	}
	__LIB_0__.func_489(&iLocal_63);
	if (HUD::DOES_BLIP_EXIST(iLocal_61))
	{
		HUD::REMOVE_BLIP(&iLocal_61);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (__LIB_1__.func_183(iLocal_73))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_73, 0f);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}
	if (bLocal_121 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("rocoto"));
	}
	else
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("peyote"));
	}
	__LIB_0__.func_106(&iLocal_73);
	if (__LIB_1__.func_183(iLocal_76))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_76, true);
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_26__.func_264(39, 0);
	__LIB_26__.func_264(40, 0);
	__LIB_26__.func_264(41, 0);
	__LIB_26__.func_264(42, 0);
	__LIB_26__.func_264(43, 0);
	__LIB_26__.func_264(44, 0);
	__LIB_41__.func_466(-1);
	__LIB_9__.func_981(&uLocal_138, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

