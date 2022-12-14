#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_5 = { 0, 0, 0 } ;
	int iLocal_6 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_4();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_6))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iScriptParam_6, true);
		Local_4 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_6, true) };
		Local_5 = { ENTITY::GET_ENTITY_ROTATION(iScriptParam_6, 2) };
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_6))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_6))
			{
				switch (iLocal_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_6))
						{
							STREAMING::REQUEST_MODEL(joaat("p_abat_roller_1_col"));
							if (STREAMING::HAS_MODEL_LOADED(joaat("p_abat_roller_1_col")))
							{
								if (!__LIB_0__::func_78(Local_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = OBJECT::CREATE_OBJECT(joaat("p_abat_roller_1_col"), Local_4, true, true, false);
									ENTITY::SET_ENTITY_ROTATION(iLocal_3, Local_5, 2, true);
									iLocal_2 = 1;
								}
							}
						}
						break;
					case 1:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_6))
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
							{
								STREAMING::REQUEST_ANIM_DICT("map_objects");
								if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					case 2:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_6))
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
							{
								if (Global_96872)
								{
									if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
									{
										ENTITY::PLAY_ENTITY_ANIM(iScriptParam_6, "P_Abat_roller_1_open", "map_objects", 1f, false, true, false, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					case 3:
						fVar3 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_3, true) };
							if (!__LIB_0__::func_490(Var1, Var0, 0.1f, 0))
							{
								Var2 = { Var0 - Var1 };
								ENTITY::SET_ENTITY_COORDS(iLocal_3, Var1 + __LIB_0__::func_79(Var2) * FtoV(MISC::GET_FRAME_TIME()) * Vector(fVar3, fVar3, fVar3), true, false, false, true);
							}
							else
							{
								Global_96873 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

void func_4()//Position - 0x2C7
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_abat_roller_1_col"));
	__LIB_38__::func_718("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	SCRIPT::TERMINATE_THIS_THREAD();
}

