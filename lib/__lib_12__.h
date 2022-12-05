void func_0(var uParam0)//Position - 0x95CA2
{
	if (!uParam0->f_77)
	{
		if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
		{
			if (!__LIB_0__.func_75())
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 23, 0f, 0);
				}
				else
				{
					AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 22, 0f, 0);
				}
			}
		}
	}
}

void func_1(var uParam0)//Position - 0x95CEA
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_8));
	}
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = OBJECT::CREATE_OBJECT(__LIB_0__.func_414(), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_8, uParam0->f_3, PED::GET_PED_BONE_INDEX(uParam0->f_3, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
}

void func_2(struct<3> Param0)//Position - 0x96543
{
	MISC::CLEAR_AREA(Param0, 3.2f, true, false, false, false);
}

int func_3(int iParam0, int iParam1)//Position - 0xA1F1E
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0:
			break;
	}
	return 0;
}

void func_4(int iParam0, bool bParam1, var uParam2, var uParam3)//Position - 0xAE28A
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_USING_ACTION_MODE(iParam0, true, -1, "DEFAULT_ACTION");
			*uParam3 = 0;
			*uParam2 = 1;
		}
		else
		{
			PED::SET_PED_USING_ACTION_MODE(iParam0, false, -1, 0);
			*uParam3 = 0;
			*uParam2 = 0;
		}
	}
}

void func_5(float fParam0)//Position - 0x2ACCB
{
	if (fParam0 != 0f)
	{
	}
}

void func_6(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2FA18
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
	}
	else
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*82*/]))
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam1, uParam0[iVar0 /*82*/]) && iParam5 == (uParam0[iVar0 /*82*/])->f_16)
			{
				if ((uParam0[iVar0 /*82*/])->f_17.f_39[iParam2] != iParam3 || (uParam0[iVar0 /*82*/])->f_17.f_49[iParam2] != iParam4)
				{
					if ((uParam0[iVar0 /*82*/])->f_17.f_39[iParam2] == -1 && (uParam0[iVar0 /*82*/])->f_17.f_49[iParam2] == -1)
					{
					}
					(uParam0[iVar0 /*82*/])->f_17.f_39[iParam2] = iParam3;
					(uParam0[iVar0 /*82*/])->f_17.f_49[iParam2] = iParam4;
				}
				return;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			StringCopy(uParam0[iVar1 /*82*/], sParam1, 64);
			(uParam0[iVar1 /*82*/])->f_16 = iParam5;
			iVar2 = 0;
			while (iVar2 < 12)
			{
				(uParam0[iVar1 /*82*/])->f_17.f_13[iVar2] = -1;
				(uParam0[iVar1 /*82*/])->f_17[iVar2] = -1;
				iVar2++;
			}
			iVar3 = 0;
			while (iVar3 < 9)
			{
				(uParam0[iVar1 /*82*/])->f_17.f_39[iVar3] = -1;
				(uParam0[iVar1 /*82*/])->f_17.f_49[iVar3] = -1;
				iVar3++;
			}
			(uParam0[iVar1 /*82*/])->f_17.f_39[iParam2] = iParam3;
			(uParam0[iVar1 /*82*/])->f_17.f_49[iParam2] = iParam4;
		}
	}
}

void func_7(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2FB93
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
	}
	else
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*82*/]))
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam1, uParam0[iVar0 /*82*/]) && iParam5 == (uParam0[iVar0 /*82*/])->f_16)
			{
				if ((uParam0[iVar0 /*82*/])->f_17.f_13[iParam2] != iParam3 || (uParam0[iVar0 /*82*/])->f_17[iParam2] != iParam4)
				{
					if ((uParam0[iVar0 /*82*/])->f_17.f_13[iParam2] == -1 && (uParam0[iVar0 /*82*/])->f_17[iParam2] == -1)
					{
					}
					(uParam0[iVar0 /*82*/])->f_17.f_13[iParam2] = iParam3;
					(uParam0[iVar0 /*82*/])->f_17[iParam2] = iParam4;
				}
				return;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			StringCopy(uParam0[iVar1 /*82*/], sParam1, 64);
			(uParam0[iVar1 /*82*/])->f_16 = iParam5;
			iVar2 = 0;
			while (iVar2 < 12)
			{
				(uParam0[iVar1 /*82*/])->f_17.f_13[iVar2] = -1;
				(uParam0[iVar1 /*82*/])->f_17[iVar2] = -1;
				iVar2++;
			}
			iVar3 = 0;
			while (iVar3 < 9)
			{
				(uParam0[iVar1 /*82*/])->f_17.f_39[iVar3] = -1;
				(uParam0[iVar1 /*82*/])->f_17.f_49[iVar3] = -1;
				iVar3++;
			}
			(uParam0[iVar1 /*82*/])->f_17.f_13[iParam2] = iParam3;
			(uParam0[iVar1 /*82*/])->f_17[iParam2] = iParam4;
		}
	}
}

void func_8(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3B49A
{
	*iParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
	*iParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
	*iParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
	*iParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*iParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*iParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
			*iParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		}
		if (IntToFloat(*iParam2) == 0f && IntToFloat(*iParam3) == 0f)
		{
			*iParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
			*iParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		}
	}
}

void func_9(int iParam0, int iParam1, int iParam2)//Position - 0x41633
{
	if ((iParam1 != iParam1 && iParam2 != iParam2) && iParam0->f_23)
	{
	}
}

int func_10(var uParam0, char* sParam1, int* iParam2, bool bParam3)//Position - 0x4AFC4
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_656)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_656[iVar0 /*6*/].f_4, sParam1))
			{
				uParam0->f_656[iVar0 /*6*/].f_2 = 0;
				*iParam2 = uParam0->f_656[iVar0 /*6*/].f_5;
				if (!uParam0->f_656[iVar0 /*6*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		if (bParam3)
		{
			*iParam2 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED(sParam1);
		}
		else
		{
			*iParam2 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sParam1);
		}
		uParam0->f_656[iVar1 /*6*/] = 1;
		uParam0->f_656[iVar1 /*6*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_656[iVar1 /*6*/].f_4 = sParam1;
		uParam0->f_656[iVar1 /*6*/].f_5 = *iParam2;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_11(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x4BE43
{
	float fVar0;
	float fVar1;
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &fVar0, &fVar1);
	if (fVar0 >= fParam1 && fVar0 <= fParam3)
	{
		if (fVar1 >= fParam2 && fVar1 <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

void func_12()//Position - 0x9C6AF
{
	Global_97725 = 1;
}

void func_13(bool bParam0)//Position - 0xA1F51
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		if (bParam0)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
		}
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
}

int func_14(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA4607
{
	int iVar0;
	if (!__LIB_0__.func_317(bParam1))
	{
		iVar0 = __LIB_11__.func_149(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, false, false);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
				__LIB_0__.func_366(*iParam0, bParam1);
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

int func_15(var uParam0)//Position - 0xA4B43
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_1007)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (STREAMING::HAS_MODEL_LOADED((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[iVar1 /*5*/])->f_4);
						__LIB_11__.func_694(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						STREAMING::REMOVE_ANIM_DICT(uParam0->f_273[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						TASK::REMOVE_WAYPOINT_RECORDING(uParam0->f_374[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_656[iVar1 /*6*/].f_5));
						__LIB_11__.func_694(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (WEAPON::HAS_WEAPON_ASSET_LOADED(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						WEAPON::REMOVE_WEAPON_ASSET(uParam0->f_202[iVar1 /*7*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						VEHICLE::REMOVE_VEHICLE_ASSET(uParam0->f_151[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4, false, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (INTERIOR::IS_INTERIOR_READY(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						INTERIOR::UNPIN_INTERIOR(uParam0->f_763[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = GRAPHICS::QUERY_MOVIE_MESH_SET_STATE(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								__LIB_11__.func_694(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (INTERIOR::IS_INTERIOR_READY(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = GRAPHICS::LOAD_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = MISC::GET_GAME_TIMER();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
							__LIB_11__.func_694(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						__LIB_11__.func_694(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_904[iVar1 /*5*/])
			{
				if (!uParam0->f_904[iVar1 /*5*/].f_1)
				{
					if (TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED(uParam0->f_904[iVar1 /*5*/].f_4))
					{
						uParam0->f_904[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_904[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_904[iVar1 /*5*/].f_1)
					{
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(uParam0->f_904[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_904[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_955[iVar1 /*5*/])
			{
				if (!uParam0->f_955[iVar1 /*5*/].f_1)
				{
					if (AUDIO::PREPARE_ALARM(uParam0->f_955[iVar1 /*5*/].f_4))
					{
						uParam0->f_955[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_955[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_955[iVar1 /*5*/].f_1)
					{
						__LIB_11__.func_694(&(uParam0->f_955[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (HUD::HAS_ADDITIONAL_TEXT_LOADED(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						HUD::CLEAR_ADDITIONAL_TEXT(iVar1, true);
						__LIB_11__.func_694(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_885)
		{
			if (!uParam0->f_885.f_1)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					uParam0->f_885.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_885.f_2)
			{
				if (uParam0->f_885.f_1)
				{
					STREAMING::REMOVE_PTFX_ASSET();
					__LIB_11__.func_694(&(uParam0->f_885));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_889)
		{
			if (!uParam0->f_889.f_1)
			{
				if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					uParam0->f_889.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_889.f_2)
			{
				if (uParam0->f_889.f_1)
				{
					PHYSICS::ROPE_UNLOAD_TEXTURES();
					__LIB_11__.func_694(&(uParam0->f_889));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_893 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!uParam0->f_893.f_1)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					uParam0->f_893.f_1 = 1;
					if (uParam0->f_1008)
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						__LIB_11__.func_721(uParam0);
						uParam0->f_1008 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_893.f_2)
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				__LIB_11__.func_694(&(uParam0->f_893));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_981[iVar1 /*5*/])
			{
				if (!uParam0->f_981[iVar1 /*5*/].f_1)
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam0->f_981[iVar1 /*5*/].f_4))
					{
						uParam0->f_981[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_981[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_981[iVar1 /*5*/].f_1)
					{
						__LIB_11__.func_694(&(uParam0->f_981[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_1007 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_16(int iParam0, int iParam1)//Position - 0x77BAD
{
	float fVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
		PED::SET_PED_MAX_HEALTH(iParam0, iParam1);
		ENTITY::SET_ENTITY_HEALTH(iParam0, SYSTEM::ROUND((((fVar0 / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)), 0);
	}
}

float func_17(int iParam0)//Position - 0x81849
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_142);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_142))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_142);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_142);
	return fVar0;
}

int func_18(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x81885
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_142);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_142))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_142, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_120 && iParam1 != iLocal_121)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_142, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_142, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_142, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_142, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_142))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_142);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_142, 10f, 786603);
					}
					else if (iParam1 != iLocal_120 && iParam1 != iLocal_121)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_142, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_142, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_142, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_142, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_19()//Position - 0x81A6B
{
	iLocal_42 = 1;
}

void func_20()//Position - 0x81F4E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_160[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_160[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_160[iVar0]));
			}
		}
		iLocal_108[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!iLocal_153[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iVar0]);
		}
		iVar0++;
	}
	iLocal_114 = 0;
	iLocal_111 = 0;
}

void func_21(int iParam0)//Position - 0x82D8A
{
	float fVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, true);
				if (bLocal_61)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_22(int iParam0)//Position - 0x830F3
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_156 >= -1 && iLocal_157 >= -1)
	{
		while (iVar0 == iLocal_156 || iVar0 == iLocal_157)
		{
			iVar0++;
		}
	}
	else if (iLocal_156 >= -1)
	{
		if (iVar0 == iLocal_156)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
			break;
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			break;
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			break;
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			break;
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
			break;
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			break;
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
			break;
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
			break;
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
			break;
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			break;
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			break;
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
			break;
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
			break;
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
			break;
		default:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
	}
}

int func_23(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x832DF
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_41)
		{
			if (!iLocal_28)
			{
				if (SYSTEM::VMAG2(Param1 - Param0) - fParam2) < (fParam3 * fParam3)
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_24()//Position - 0x83326
{
	if (iLocal_155 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_155;
}

void func_25()//Position - 0x836C0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_160[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_160[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_160[iVar0], true, false);
			}
			__LIB_11__.func_122(iLocal_160[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!iLocal_153[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iVar0]);
		}
		iVar0++;
	}
	iLocal_114 = 0;
	iLocal_111 = 0;
}

void func_26(int iParam0, float fParam1)//Position - 0x843E0
{
	int iVar0;
	if (!iLocal_152[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_158[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_158[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[iParam0], -1, false);
		if (!PED::IS_PED_INJURED(iVar0) && iVar0 != PLAYER::PLAYER_PED_ID())
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_158[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_61)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_30)
	{
		if (!bLocal_58)
		{
			__LIB_11__.func_109(iVar0);
			__LIB_11__.func_122(iLocal_158[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_158[iParam0]));
		}
	}
	if (!bLocal_40 && !bLocal_53)
	{
		if (iLocal_102[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_102[iParam0], &cLocal_142);
		}
	}
	iLocal_103[iParam0] = 99;
}

void func_27(int iParam0, float fParam1)//Position - 0x845BE
{
	if (!bLocal_41)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fParam1 * fParam1))
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
				}
				else
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				}
			}
		}
	}
}

void func_28(int iParam0, float fParam1)//Position - 0x8460C
{
	if (!bLocal_41)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fParam1 * fParam1))
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
			}
		}
	}
}

void func_29(int iParam0, float fParam1)//Position - 0x8465A
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_97 + 2000f);
		fVar2 = (fLocal_98 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_119 == 0)
				{
					Local_138 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_97) };
					iLocal_119++;
				}
				else if (iLocal_119 == 1)
				{
					Local_139 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_119++;
				}
				else if (!bLocal_59)
				{
					if (Local_138.f_0 > Local_139.f_0)
					{
						fVar3 = Local_138.f_0;
						Local_138.f_0 = Local_139.f_0;
						Local_139.f_0 = fVar3;
					}
					if (Local_138.f_1 > Local_139.f_1)
					{
						fVar3 = Local_138.f_1;
						Local_138.f_1 = Local_139.f_1;
						Local_139.f_1 = fVar3;
					}
					if (Local_138.f_2 > Local_139.f_2)
					{
						fVar3 = Local_138.f_2;
						Local_138.f_2 = Local_139.f_2;
						Local_139.f_2 = fVar3;
					}
					Local_138 = { Local_138 - Vector(fLocal_101, fLocal_101, fLocal_101) };
					Local_139 = { Local_139 + Vector(fLocal_101, fLocal_101, fLocal_101) };
					PATHFIND::SET_ROADS_IN_AREA(Local_138, Local_139, false, false);
					fLocal_97 = fVar1;
					iLocal_119 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_122 == 0)
			{
				Local_140 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_98) };
				iLocal_122++;
			}
			else if (iLocal_122 == 1)
			{
				Local_141 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_122++;
			}
			else if (!bLocal_59 && !bVar4)
			{
				if (Local_140.f_0 > Local_141.f_0)
				{
					fVar3 = Local_140.f_0;
					Local_140.f_0 = Local_141.f_0;
					Local_141.f_0 = fVar3;
				}
				if (Local_140.f_1 > Local_141.f_1)
				{
					fVar3 = Local_140.f_1;
					Local_140.f_1 = Local_141.f_1;
					Local_141.f_1 = fVar3;
				}
				if (Local_140.f_2 > Local_141.f_2)
				{
					fVar3 = Local_140.f_2;
					Local_140.f_2 = Local_141.f_2;
					Local_141.f_2 = fVar3;
				}
				Local_140 = { Local_140 - Vector(fLocal_101, fLocal_101, fLocal_101) };
				Local_141 = { Local_141 + Vector(fLocal_101, fLocal_101, fLocal_101) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_140, Local_141, 1);
				fLocal_98 = fVar2;
				iLocal_122 = 0;
			}
		}
	}
}

int func_30(int iParam0)//Position - 0x94CA0
{
	if (iParam0->f_39)
	{
		if (iParam0->f_7 != 4 && iParam0->f_7 != 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_31(int iParam0, int iParam1, int iParam2)//Position - 0x953DE
{
	if (iParam1 != 4)
	{
		iParam0->f_13[iParam1] = iParam2;
	}
}

int func_32(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x96448
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		fVar2 = SYSTEM::VDIST(Var1, Param1);
		fVar3 = SYSTEM::VDIST(Var0, Param1);
		if (fVar2 < fParam2)
		{
			if (fVar3 < fVar2 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, 1f, 1f, 2f, false, true, 0))
			{
				if (bParam3)
				{
					if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_33(int iParam0, int iParam1)//Position - 0xA0544
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0.f_0 = ENTITY::GET_ENTITY_FORWARD_X(iParam0);
		Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
			Var3.f_0 = ENTITY::GET_ENTITY_FORWARD_X(iVar5);
			Var3.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iVar5);
		}
		else
		{
			Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
			Var3 = { Var2 - Var1 };
		}
	}
	fVar4 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
	return fVar4;
}

float func_34(int iParam0, int iParam1)//Position - 0xA05D5
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	Var2 = { Var1 - Var0 };
	Var2.f_2 = 0f;
	fVar3 = SYSTEM::VMAG(Var2);
	return fVar3;
}

float func_35(int iParam0, int iParam1)//Position - 0xA0627
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Var0.f_0 = ENTITY::GET_ENTITY_FORWARD_X(iParam0);
		Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	Var1 = { Var3 - Var2 };
	fVar4 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1);
	fVar4 = (fVar4 + -90f);
	if (fVar4 < 0f)
	{
		fVar4 = (fVar4 * -1f);
	}
	Var1.f_2 = 0f;
	return (SYSTEM::VMAG(Var1) * SYSTEM::SIN(fVar4));
}

int func_36(int iParam0)//Position - 0xA919D
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) < 1)
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

int func_37(int iParam0, struct<3> Param1, int iParam2)//Position - 0x7AC9E
{
	struct<3> Var0;
	struct<3> Var1;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		Param1 = { __LIB_9__.func_996() };
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
	if ((Var1.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var1.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var1.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

void func_38(bool bParam0)//Position - 0x2286
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

int func_39(float fParam0, int iParam1)//Position - 0x3621
{
	int iVar0;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam0, iParam1, false);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x5B0D
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_41()//Position - 0x5FED
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_38.f_0)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0, int iParam1)//Position - 0x60E3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_38.f_0)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_43(bool bParam0)//Position - 0x8BCC
{
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	}
}

int func_44(bool bParam0)//Position - 0x1AD3
{
	if (bParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_45(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2049
{
	struct<15> Var0;
	int iVar1;
	if (__LIB_0__.func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = __LIB_0__.func_522(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, bParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		__LIB_6__.func_848(bParam2);
		return 1;
	}
	return 0;
}

void func_46(int iParam0)//Position - 0x304C
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

char* func_47(int iParam0)//Position - 0x3241
{
	char* sVar0;
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_48(int iParam0, bool bParam1)//Position - 0x329A
{
	char* sVar0;
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		case 78:
			sVar0 = "PR_TAKBACK" /* GXT: Titanium Infinity Exhaust */;
			break;
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

char* func_49(int iParam0)//Position - 0x33D5
{
	char* sVar0;
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_50(char* sParam0, int iParam1)//Position - 0x350E
{
	if (!*iParam1)
	{
		__LIB_0__.func_210(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

void func_51(int iParam0, bool bParam1)//Position - 0x3FBF
{
	if (bParam1)
	{
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_52(int iParam0, char* sParam1, int iParam2)//Position - 0x3FE4
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && iParam2 != -1)
	{
	}
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x448C
{
	int iVar0;
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		case 34:
			iVar0 = joaat("towtruck");
			break;
		case 78:
			iVar0 = 0;
			break;
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_54(int iParam0)//Position - 0x89A3
{
	if (Global_22720 == 0)
	{
		return 0;
	}
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (Global_20266.f_1 == 10)
		{
			if (Global_7451 == iParam0)
			{
				return 1;
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
	return 0;
}

int func_55(int iParam0)//Position - 0x2E011
{
	if (__LIB_1__.func_183(iParam0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
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

struct<6> func_56(struct<3> Param0, float fParam1, int iParam2)//Position - 0x2EF3A
{
	struct<6> Var0;
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

var func_57(bool bParam0)//Position - 0x261
{
	return sLocal_45[bParam0];
}

int func_58(int iParam0)//Position - 0x28F
{
	int iVar0;
	if (iParam0 < 32)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_59()//Position - 0x7D25
{
	if (iLocal_42 == 0)
	{
		return 45;
	}
	else if (iLocal_42 == 1)
	{
		return 12;
	}
	else if (iLocal_42 == 2)
	{
		return 34;
	}
	return -1;
}

bool func_60()//Position - 0x8680
{
	return SCRIPT::IS_THREAD_ACTIVE(Global_113386.f_18103.f_395);
}

int func_61()//Position - 0x877C
{
	if (iLocal_42 == 0)
	{
		return 38;
	}
	else if (iLocal_42 == 1)
	{
		return 69;
	}
	else if (iLocal_42 == 2)
	{
		return 85;
	}
	return -1;
}

void func_62(int iParam0, struct<3> Param1)//Position - 0x88A1
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(Global_32338[iParam0 /*23*/].f_19))
	{
		HUD::SET_BLIP_COORDS(Global_32338[iParam0 /*23*/].f_19, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_32338[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

void func_63(int iParam0)//Position - 0x94EC
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_44.f_6))
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SanAnd" /* GXT: San Andreas */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M77";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F78";
			}
			else
			{
				Local_44.f_7 = "LOC_T78";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Alamo" /* GXT: Alamo Sea */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M101";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F1";
			}
			else
			{
				Local_44.f_7 = "LOC_T1";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Alta" /* GXT: Alta */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M1";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F2";
			}
			else
			{
				Local_44.f_7 = "LOC_T2";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Airp" /* GXT: Los Santos International Airport */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M48";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F49";
			}
			else
			{
				Local_44.f_7 = "LOC_T49";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ArmyB" /* GXT: Fort Zancudo */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M28";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F29";
			}
			else
			{
				Local_44.f_7 = "LOC_T29";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "BhamCa" /* GXT: Banham Canyon */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M2";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F3";
			}
			else
			{
				Local_44.f_7 = "LOC_T3";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Banning" /* GXT: Banning */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M3";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F4";
			}
			else
			{
				Local_44.f_7 = "LOC_T4";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Baytre" /* GXT: Baytree Canyon */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M4";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F5";
			}
			else
			{
				Local_44.f_7 = "LOC_T5";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Beach" /* GXT: Vespucci Beach */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M93";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F94";
			}
			else
			{
				Local_44.f_7 = "LOC_T94";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "BradT" /* GXT: Braddock Tunnel */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M7";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F8";
			}
			else
			{
				Local_44.f_7 = "LOC_T8";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "BradP" /* GXT: Braddock Pass */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M6";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F7";
			}
			else
			{
				Local_44.f_7 = "LOC_T7";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Burton" /* GXT: Burton */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M8";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F9";
			}
			else
			{
				Local_44.f_7 = "LOC_T9";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CANNY" /* GXT: Raton Canyon */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M70";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F71";
			}
			else
			{
				Local_44.f_7 = "LOC_T71";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CCreak" /* GXT: Cassidy Creek */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M10";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F11";
			}
			else
			{
				Local_44.f_7 = "LOC_T11";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CalafB" /* GXT: Calafia Bridge */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M9";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F10";
			}
			else
			{
				Local_44.f_7 = "LOC_T10";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ChamH" /* GXT: Chamberlain Hills */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M11";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F12";
			}
			else
			{
				Local_44.f_7 = "LOC_T12";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CHU" /* GXT: Chumash */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M13";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F14";
			}
			else
			{
				Local_44.f_7 = "LOC_T14";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CHIL" /* GXT: Vinewood Hills */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M96";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F97";
			}
			else
			{
				Local_44.f_7 = "LOC_T97";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "COSI" /* GXT: Countryside */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M14";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F15";
			}
			else
			{
				Local_44.f_7 = "LOC_T15";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CMSW" /* GXT: Chiliad Mountain State Wilderness */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M12";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F13";
			}
			else
			{
				Local_44.f_7 = "LOC_T13";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Cypre" /* GXT: Cypress Flats */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M15";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F16";
			}
			else
			{
				Local_44.f_7 = "LOC_T16";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Davis" /* GXT: Davis */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M16";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F17";
			}
			else
			{
				Local_44.f_7 = "LOC_T17";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Desrt" /* GXT: Grand Senora Desert */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M32";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F33";
			}
			else
			{
				Local_44.f_7 = "LOC_T33";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DelBe" /* GXT: Del Perro Beach */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M19";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F20";
			}
			else
			{
				Local_44.f_7 = "LOC_T20";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DelPe" /* GXT: Del Perro */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M18";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F19";
			}
			else
			{
				Local_44.f_7 = "LOC_T19";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DelSol" /* GXT: La Puerta */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F42";
			}
			else
			{
				Local_44.f_7 = "LOC_T42";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Downt" /* GXT: Downtown */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M20";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F21";
			}
			else
			{
				Local_44.f_7 = "LOC_T21";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DTVine" /* GXT: Downtown Vinewood */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M21";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F22";
			}
			else
			{
				Local_44.f_7 = "LOC_T22";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Eclips" /* GXT: Eclipse */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M24";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F25";
			}
			else
			{
				Local_44.f_7 = "LOC_T25";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ELSant" /* GXT: East Los Santos */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M22";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F23";
			}
			else
			{
				Local_44.f_7 = "LOC_T23";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "EBuro" /* GXT: El Burro Heights */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M25";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F26";
			}
			else
			{
				Local_44.f_7 = "LOC_T26";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ELGorl" /* GXT: El Gordo Lighthouse */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M26";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F27";
			}
			else
			{
				Local_44.f_7 = "LOC_T27";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Elysian" /* GXT: Elysian Island */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M27";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F28";
			}
			else
			{
				Local_44.f_7 = "LOC_T28";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Galli" /* GXT: Galileo Park */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M31";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F32";
			}
			else
			{
				Local_44.f_7 = "LOC_T32";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Galfish" /* GXT: Galilee */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M29";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F30";
			}
			else
			{
				Local_44.f_7 = "LOC_T30";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Greatc" /* GXT: Great Chaparral */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M34";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F35";
			}
			else
			{
				Local_44.f_7 = "LOC_T35";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Golf" /* GXT: GWC and Golfing Society */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M35";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F36";
			}
			else
			{
				Local_44.f_7 = "LOC_T36";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "GrapeS" /* GXT: Grapeseed */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M33";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F34";
			}
			else
			{
				Local_44.f_7 = "LOC_T34";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Hawick" /* GXT: Hawick */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M37";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F38";
			}
			else
			{
				Local_44.f_7 = "LOC_T38";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Harmo" /* GXT: Harmony */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M36";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F37";
			}
			else
			{
				Local_44.f_7 = "LOC_T37";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Heart" /* GXT: Heart Attacks Beach */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M38";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F39";
			}
			else
			{
				Local_44.f_7 = "LOC_T39";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "HumLab" /* GXT: Humane Labs and Research */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M39";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F40";
			}
			else
			{
				Local_44.f_7 = "LOC_T40";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "HORS" /* GXT: Vinewood Racetrack */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M97";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F98";
			}
			else
			{
				Local_44.f_7 = "LOC_T98";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Koreat" /* GXT: Little Seoul */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M46";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F47";
			}
			else
			{
				Local_44.f_7 = "LOC_T47";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Jail" /* GXT: Bolingbroke Penitentiary */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M5";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F6";
			}
			else
			{
				Local_44.f_7 = "LOC_T6";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LAct" /* GXT: Land Act Reservoir */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M45";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F46";
			}
			else
			{
				Local_44.f_7 = "LOC_T46";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LDam" /* GXT: Land Act Dam */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M44";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F45";
			}
			else
			{
				Local_44.f_7 = "LOC_T45";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Lago" /* GXT: Lago Zancudo */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M43";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F44";
			}
			else
			{
				Local_44.f_7 = "LOC_T44";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LegSqu" /* GXT: Legion Square */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F";
			}
			else
			{
				Local_44.f_7 = "LOC_T";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LosSF" /* GXT: Los Santos Freeway */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M47";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F48";
			}
			else
			{
				Local_44.f_7 = "LOC_T48";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LMesa" /* GXT: La Mesa */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M40";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F41";
			}
			else
			{
				Local_44.f_7 = "LOC_T41";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LosPuer" /* GXT: La Puerta */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F42";
			}
			else
			{
				Local_44.f_7 = "LOC_T42";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LosPFy" /* GXT: La Puerta Fwy */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M42";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F43";
			}
			else
			{
				Local_44.f_7 = "LOC_T43";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LOSTMC" /* GXT: Lost MC */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F";
			}
			else
			{
				Local_44.f_7 = "LOC_T";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Mirr" /* GXT: Mirror Park */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M50";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F51";
			}
			else
			{
				Local_44.f_7 = "LOC_T51";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Morn" /* GXT: Morningwood */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M52";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F53";
			}
			else
			{
				Local_44.f_7 = "LOC_T53";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Murri" /* GXT: Murrieta Heights */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M56";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F57";
			}
			else
			{
				Local_44.f_7 = "LOC_T57";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "MTChil" /* GXT: Mount Chiliad */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M53";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F54";
			}
			else
			{
				Local_44.f_7 = "LOC_T54";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "MTJose" /* GXT: Mount Josiah */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M55";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F56";
			}
			else
			{
				Local_44.f_7 = "LOC_T56";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "MTGordo" /* GXT: Mount Gordo */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M54";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F55";
			}
			else
			{
				Local_44.f_7 = "LOC_T55";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Movie" /* GXT: Richards Majestic */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M72";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F73";
			}
			else
			{
				Local_44.f_7 = "LOC_T73";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "NCHU" /* GXT: North Chumash */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M57";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F58";
			}
			else
			{
				Local_44.f_7 = "LOC_T58";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Noose" /* GXT: N.O.O.S.E */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F85";
			}
			else
			{
				Local_44.f_7 = "LOC_T85";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Oceana" /* GXT: Pacific Ocean */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M60";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F61";
			}
			else
			{
				Local_44.f_7 = "LOC_T61";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Observ" /* GXT: Galileo Observatory */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M30";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F31";
			}
			else
			{
				Local_44.f_7 = "LOC_T31";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Palmpow" /* GXT: Palmer-Taylor Power Station */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M64";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F65";
			}
			else
			{
				Local_44.f_7 = "LOC_T65";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PBOX" /* GXT: Pillbox Hill */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M66";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F67";
			}
			else
			{
				Local_44.f_7 = "LOC_T67";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PBluff" /* GXT: Pacific Bluffs */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M59";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F60";
			}
			else
			{
				Local_44.f_7 = "LOC_T60";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Paleto" /* GXT: Paleto Bay */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M61";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F62";
			}
			else
			{
				Local_44.f_7 = "LOC_T62";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PalCov" /* GXT: Paleto Cove */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M62";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F63";
			}
			else
			{
				Local_44.f_7 = "LOC_T63";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PalFor" /* GXT: Paleto Forest */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M63";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F64";
			}
			else
			{
				Local_44.f_7 = "LOC_T64";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PalHigh" /* GXT: Palomino Highlands */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M65";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F66";
			}
			else
			{
				Local_44.f_7 = "LOC_T66";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ProcoB" /* GXT: Procopio Beach */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M68";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F69";
			}
			else
			{
				Local_44.f_7 = "LOC_T69";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Prol" /* GXT: North Yankton */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M58";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F59";
			}
			else
			{
				Local_44.f_7 = "LOC_T59";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "RTRAK" /* GXT: Redwood Lights Track */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M71";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F72";
			}
			else
			{
				Local_44.f_7 = "LOC_T72";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Rancho" /* GXT: Rancho */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M69";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F70";
			}
			else
			{
				Local_44.f_7 = "LOC_T70";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "RGLEN" /* GXT: Richman Glen */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M74";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F75";
			}
			else
			{
				Local_44.f_7 = "LOC_T75";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Richm" /* GXT: Richman */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M73";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F74";
			}
			else
			{
				Local_44.f_7 = "LOC_T74";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Rockf" /* GXT: Rockford Hills */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M75";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F76";
			}
			else
			{
				Local_44.f_7 = "LOC_T76";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SANDY" /* GXT: Sandy Shores */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M79";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F80";
			}
			else
			{
				Local_44.f_7 = "LOC_T80";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "TongvaH" /* GXT: Tongva Hills */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M87";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F88";
			}
			else
			{
				Local_44.f_7 = "LOC_T88";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "TongvaV" /* GXT: Tongva Valley */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M88";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F89";
			}
			else
			{
				Local_44.f_7 = "LOC_T89";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "East_V" /* GXT: East Vinewood */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M23";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F24";
			}
			else
			{
				Local_44.f_7 = "LOC_T24";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Zenora" /* GXT: Senora Freeway */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M80";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F81";
			}
			else
			{
				Local_44.f_7 = "LOC_T81";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Slab" /* GXT: Stab City */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M81";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F82";
			}
			else
			{
				Local_44.f_7 = "LOC_T82";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SKID" /* GXT: Mission Row */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M51";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F52";
			}
			else
			{
				Local_44.f_7 = "LOC_T52";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SLSant" /* GXT: South Los Santos */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M82";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F83";
			}
			else
			{
				Local_44.f_7 = "LOC_T83";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Stad" /* GXT: Maze Bank Arena */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M49";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F50";
			}
			else
			{
				Local_44.f_7 = "LOC_T50";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Tatamo" /* GXT: Tataviam Mountains */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F85";
			}
			else
			{
				Local_44.f_7 = "LOC_T85";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Termina" /* GXT: Terminal */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M85";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F86";
			}
			else
			{
				Local_44.f_7 = "LOC_T86";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "TEXTI" /* GXT: Textile City */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M86";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F87";
			}
			else
			{
				Local_44.f_7 = "LOC_T87";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "WVine" /* GXT: West Vinewood */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M99";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F100";
			}
			else
			{
				Local_44.f_7 = "LOC_T100";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "UtopiaG" /* GXT: Utopia Gardens */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M89";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F90";
			}
			else
			{
				Local_44.f_7 = "LOC_T90";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Vesp" /* GXT: Vespucci */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M92";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F93";
			}
			else
			{
				Local_44.f_7 = "LOC_T93";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "VCana" /* GXT: Vespucci Canals */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M94";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F95";
			}
			else
			{
				Local_44.f_7 = "LOC_T95";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Vine" /* GXT: Vinewood */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M95";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F96";
			}
			else
			{
				Local_44.f_7 = "LOC_T96";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "WMirror" /* GXT: West Mirror Drive */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M98";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F99";
			}
			else
			{
				Local_44.f_7 = "LOC_T99";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "WindF" /* GXT: Ron Alternates Wind Farm */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M76";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F77";
			}
			else
			{
				Local_44.f_7 = "LOC_T77";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Zancudo" /* GXT: Zancudo River */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M100";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F101";
			}
			else
			{
				Local_44.f_7 = "LOC_T101";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SanChia" /* GXT: San Chianski Mountain Range */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M78";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F79";
			}
			else
			{
				Local_44.f_7 = "LOC_T79";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "STRAW" /* GXT: Strawberry */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M83";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F84";
			}
			else
			{
				Local_44.f_7 = "LOC_T84";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "zQ_UAR" /* GXT: Davis Quartz */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M17";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F18";
			}
			else
			{
				Local_44.f_7 = "LOC_T18";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ZP_ORT" /* GXT: Port of South Los Santos */))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M67";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F68";
			}
			else
			{
				Local_44.f_7 = "LOC_T68";
			}
			return;
		}
		if (iParam0 == 0)
		{
			Local_44.f_7 = "LOC_M";
		}
		else if (iParam0 == 1)
		{
			Local_44.f_7 = "LOC_M";
		}
		else
		{
			Local_44.f_7 = "LOC_M";
		}
	}
	else if (iParam0 == 0)
	{
		Local_44.f_7 = "LOC_M";
	}
	else if (iParam0 == 1)
	{
		Local_44.f_7 = "LOC_F";
	}
	else
	{
		Local_44.f_7 = "LOC_T";
	}
}

void func_64()//Position - 0xB2A8
{
	MISC::CLEAR_BIT(&uLocal_49, 0);
	MISC::CLEAR_BIT(&uLocal_49, 8);
	MISC::CLEAR_BIT(&uLocal_49, 7);
}

int func_65(struct<3> Param0, bool bParam1)//Position - 0xB6D1
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar2 = 1000000f;
	iVar3 = 7;
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (Global_95580[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam1 || BitTest(Global_113386.f_7229.f_17[iVar0], 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95580[iVar0 /*9*/].f_3, true);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_66(struct<3> Param0, struct<3> Param1)//Position - 0xB883
{
	float fVar0;
	fVar0 = MISC::ABSF((Param0.f_2 - Param1.f_2));
	if (fVar0 <= 5f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_67(int iParam0)//Position - 0xBF41
{
	struct<3> Var0;
	if (iParam0 == 0)
	{
		Var0 = { -1604.668f, 5239.1f, 3.01f };
	}
	else if (iParam0 == 1)
	{
		Var0 = { -1592.84f, 5214.04f, 3.01f };
	}
	else if (iParam0 == 2)
	{
		Var0 = { 190.26f, -956.35f, 29.63f };
	}
	else if (iParam0 == 3)
	{
		Var0 = { 190.26f, -956.35f, 29.63f };
	}
	else if (iParam0 == 4)
	{
		Var0 = { 414f, -761f, 29f };
	}
	else if (iParam0 == 5)
	{
		Var0 = { 1199.27f, -1255.63f, 34.23f };
	}
	else if (iParam0 == 6)
	{
		Var0 = { -468.9f, -1713.06f, 18.21f };
	}
	else if (iParam0 == 7)
	{
		Var0 = { 237.65f, -385.41f, 44.4f };
	}
	else if (iParam0 == 8)
	{
		Var0 = { -1458.97f, 485.99f, 115.38f };
	}
	else if (iParam0 == 9)
	{
		Var0 = { -1622.89f, 4204.87f, 83.3f };
	}
	else if (iParam0 == 10)
	{
		Var0 = { 242.7f, 362.7f, 104.74f };
	}
	else if (iParam0 == 11)
	{
		Var0 = { 1835.53f, 4705.86f, 38.1f };
	}
	else if (iParam0 == 12)
	{
		Var0 = { 1826.13f, 4698.88f, 38.92f };
	}
	else if (iParam0 == 13)
	{
		Var0 = { 637.02f, 119.7093f, 89.5f };
	}
	else if (iParam0 == 14)
	{
		Var0 = { -2892.93f, 3192.37f, 11.66f };
	}
	else if (iParam0 == 15)
	{
		Var0 = { 524.43f, 3079.82f, 39.48f };
	}
	else if (iParam0 == 16)
	{
		Var0 = { -697.75f, 45.38f, 43.03f };
	}
	else if (iParam0 == 17)
	{
		Var0 = { -188.22f, 1296.1f, 302.86f };
	}
	else if (iParam0 == 18)
	{
		Var0 = { -954.19f, -2760.05f, 14.64f };
	}
	else if (iParam0 == 19)
	{
		Var0 = { -63.8f, -809.5f, 321.8f };
	}
	else if (iParam0 == 20)
	{
		Var0 = { 1731.41f, 96.96f, 170.39f };
	}
	else if (iParam0 == 21)
	{
		Var0 = { -1877.82f, -440.649f, 45.05f };
	}
	else if (iParam0 == 22)
	{
		Var0 = { 809.66f, 1279.76f, 360.49f };
	}
	else if (iParam0 == 23)
	{
		Var0 = { -915.6f, 6139.2f, 5.5f };
	}
	else if (iParam0 == 24)
	{
		Var0 = { -72.29f, -1260.63f, 28.14f };
	}
	else if (iParam0 == 25)
	{
		Var0 = { 1804.32f, 3931.33f, 32.82f };
	}
	else if (iParam0 == 26)
	{
		Var0 = { -684.17f, 5839.16f, 16.09f };
	}
	else if (iParam0 == 27)
	{
		Var0 = { -1104.93f, 291.25f, 64.3f };
	}
	else if (iParam0 == 28)
	{
		Var0 = { 565.39f, -1772.88f, 29.77f };
	}
	else if (iParam0 == 29)
	{
		Var0 = { 565.39f, -1772.88f, 29.77f };
	}
	else if (iParam0 == 30)
	{
		Var0 = { -1104.93f, 291.25f, 64.3f };
	}
	else if (iParam0 == 31)
	{
		Var0 = { 2726.1f, 4145f, 44.3f };
	}
	else if (iParam0 == 32)
	{
		Var0 = { 327.85f, 3405.7f, 35.73f };
	}
	else if (iParam0 == 33)
	{
		Var0 = { 18f, 4527f, 105f };
	}
	else if (iParam0 == 34)
	{
		Var0 = { -303.82f, 6211.29f, 31.05f };
	}
	else if (iParam0 == 35)
	{
		Var0 = { 1972.59f, 3816.43f, 32.42f };
	}
	else if (iParam0 == 36)
	{
		Var0 = { 0f, 0f, 0f };
	}
	else if (iParam0 == 37)
	{
		Var0 = { -1097.16f, 790.01f, 164.52f };
	}
	else if (iParam0 == 38)
	{
		Var0 = { -558.65f, 284.49f, 90.86f };
	}
	else if (iParam0 == 39)
	{
		Var0 = { -1034.15f, 366.08f, 80.11f };
	}
	else if (iParam0 == 40)
	{
		Var0 = { -623.91f, -266.17f, 37.76f };
	}
	else if (iParam0 == 41)
	{
		Var0 = { -1096.85f, 67.68f, 52.95f };
	}
	else if (iParam0 == 42)
	{
		Var0 = { -1310.7f, -640.22f, 26.54f };
	}
	else if (iParam0 == 43)
	{
		Var0 = { -44.75f, -1288.67f, 28.21f };
	}
	else if (iParam0 == 44)
	{
		Var0 = { 2468.51f, 3437.39f, 49.9f };
	}
	else if (iParam0 == 45)
	{
		Var0 = { 2319.44f, 2583.58f, 46.76f };
	}
	else if (iParam0 == 46)
	{
		Var0 = { -149.75f, 285.81f, 93.67f };
	}
	else if (iParam0 == 47)
	{
		Var0 = { -70.71f, 301.43f, 106.79f };
	}
	else if (iParam0 == 48)
	{
		Var0 = { -257.22f, 292.85f, 90.63f };
	}
	else if (iParam0 == 49)
	{
		Var0 = { 305.52f, 157.19f, 102.94f };
	}
	else if (iParam0 == 50)
	{
		Var0 = { 1040.96f, -534.42f, 60.17f };
	}
	else if (iParam0 == 51)
	{
		Var0 = { -484.2f, 229.68f, 82.21f };
	}
	else if (iParam0 == 52)
	{
		Var0 = { 908f, 3643.7f, 32.2f };
	}
	else if (iParam0 == 54)
	{
		Var0 = { 465.1f, -1849.3f, 27.8f };
	}
	else if (iParam0 == 55)
	{
		Var0 = { -161f, -1669.7f, 33f };
	}
	else if (iParam0 == 56)
	{
		Var0 = { -1298.2f, 2504.14f, 21.09f };
	}
	else if (iParam0 == 53)
	{
		Var0 = { 1181.5f, -400.1f, 67.5f };
	}
	else if (iParam0 == 57)
	{
		Var0 = { -1298.98f, 4640.16f, 105.67f };
	}
	else if ((iParam0 == 58 || iParam0 == 59) || iParam0 == 62)
	{
		Var0 = { -14.39f, -1472.69f, 29.58f };
	}
	else if (iParam0 == 60)
	{
		Var0 = { 0f, 0f, 0f };
	}
	else if (iParam0 == 61)
	{
		Var0 = { 0f, 0f, 0f };
	}
	return Var0;
}

int func_68(var uParam0)//Position - 0xC7A3
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_4, uParam0->f_7, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_69(char* sParam0)//Position - 0xC7CE
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!MISC::IS_STRING_NULL(sLocal_69[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL(sLocal_69[iVar0], sParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0xCDEC
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		if (DECORATOR::DECOR_GET_BOOL(iParam0, "GetawayVehicleValid"))
		{
			return 1;
		}
	}
	return 0;
}

int func_71()//Position - 0xCE11
{
	if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
	{
		if ((VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, false) == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1, false) == PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)//Position - 0xD01B
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		return 1;
	}
	return 0;
}

void func_73()//Position - 0xD10F
{
	switch (iLocal_67)
	{
		case 0:
			if (BitTest(uLocal_49, 0))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_73) > 500)
				{
					sLocal_70 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
					iLocal_67 = 1;
				}
				else if (iLocal_73 == -1)
				{
					iLocal_73 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() - Local_68[iLocal_72 /*261*/].f_259) > 500)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_70) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_68[iLocal_72 /*261*/][iLocal_71 /*8*/]))
				{
					if (MISC::ARE_STRINGS_EQUAL(sLocal_70, Local_68[iLocal_72 /*261*/][iLocal_71 /*8*/]))
					{
						MISC::SET_BIT(&(Local_68[iLocal_72 /*261*/].f_258), iLocal_71);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_68[iLocal_72 /*261*/].f_258), iLocal_71);
					}
				}
				else
				{
					sLocal_70 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
				iLocal_71++;
				if (iLocal_71 >= (Local_68[iLocal_72 /*261*/].f_257 - 1))
				{
					iLocal_71 = 0;
					Local_68[iLocal_72 /*261*/].f_259 = MISC::GET_GAME_TIMER();
					iLocal_72++;
					if (iLocal_72 >= 4)
					{
						iLocal_72 = 0;
						iLocal_73 = MISC::GET_GAME_TIMER();
						iLocal_67 = 0;
					}
				}
			}
			break;
	}
}

int func_74(bool bParam0)//Position - 0xD54A
{
	int iVar0;
	if (!__LIB_0__.func_43(bParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (BitTest(Global_113386.f_7688.f_651[iVar0 /*14*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if (BitTest(Global_113386.f_7688.f_765[iVar0 /*10*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_75()//Position - 0xDAA5
{
	if (!HUD::IS_STREAMING_ADDITIONAL_TEXT(5))
	{
		MISC::SET_BIT(&uLocal_49, 4);
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_49, 4);
	}
}

int func_76(float fParam0)//Position - 0xDB87
{
	if (iLocal_42 == 1)
	{
		if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Global_96387[1 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	else if (iLocal_42 == 2)
	{
		if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Global_96387[0 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	else if (iLocal_42 == 0)
	{
		if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Global_96387[3 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	return 0;
}

char* func_77(int iParam0)//Position - 0xE3DF
{
	char* sVar0;
	if (iLocal_42 == 0)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFT";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEM";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARTF";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARM";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWM";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWTF";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACC";
		}
	}
	else if (iLocal_42 == 1)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEML";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCRFL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCRML";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWML";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWFL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFL";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITML";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	else if (iLocal_42 == 2)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	return sVar0;
}

struct<8> func_78(char* sParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0xF8DF
{
	struct<8> Var0;
	Var0.f_0 = sParam0;
	Var0.f_1 = { Param1 };
	Var0.f_4 = { Param2 };
	Var0.f_7 = fParam3;
	return Var0;
}

void func_79()//Position - 0xFA53
{
	StringCopy(&(Global_7974[3 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_80()//Position - 0xFA69
{
	StringCopy(&(Global_7974[2 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_81()//Position - 0xFA7F
{
	StringCopy(&(Global_7974[1 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_82()//Position - 0xFA95
{
	StringCopy(&(Global_7974[0 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_83(char* sParam0)//Position - 0xFAAB
{
	StringCopy(&(Global_7974[0 /*16*/].f_8), sParam0, 32);
}

void func_84(char* sParam0)//Position - 0xFABF
{
	StringCopy(&(Global_7974[2 /*16*/].f_8), sParam0, 32);
}

void func_85(char* sParam0)//Position - 0xFAD3
{
	StringCopy(&(Global_7974[1 /*16*/].f_8), sParam0, 32);
}

void func_86(char* sParam0)//Position - 0xFAE7
{
	StringCopy(&(Global_7974[3 /*16*/].f_8), sParam0, 32);
}

void func_87(char* sParam0, char* sParam1, char* sParam2)//Position - 0x104F5
{
	if (__LIB_0__.func_405(sParam1, 0, 0) || __LIB_0__.func_405(sParam2, 0, 0))
	{
		HUD::CLEAR_PRINTS();
	}
	if (!__LIB_0__.func_405(sParam0, 0, 0))
	{
		__LIB_0__.func_210(sParam0, 60000, 0);
	}
}

int func_88(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x668BD
{
	int iVar0;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (bParam3)
	{
		if ((iVar0 == 7 || iVar0 == 2) || TASK::GET_SEQUENCE_PROGRESS(iParam0) == iParam2)
		{
			return 1;
		}
	}
	else if (iVar0 == 7 || iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_89(var uParam0)//Position - 0x8004B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		CAM::DESTROY_CAM(uParam0->f_10[iVar0 /*57*/].f_1, false);
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, false);
	}
}

int func_90(var uParam0)//Position - 0x8008B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_10)
	{
		CAM::DOES_CAM_EXIST(uParam0->f_10[iVar1 /*57*/].f_1);
		iVar0 = 1;
		iVar1++;
	}
	return iVar0;
}

void func_91(int iParam0, bool bParam1)//Position - 0x8CAD5
{
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, false);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
	PED::SET_PED_CAN_RAGDOLL(iParam0, false);
	PED::SET_PED_SEEING_RANGE(iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(iParam0, 250f);
	PED::SET_PED_ID_RANGE(iParam0, 250f);
	PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 32, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 174, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 169, true);
	}
}

void func_92()//Position - 0x93EBD
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_93(int iParam0, int iParam1, bool bParam2, float fParam3)//Position - 0x972D2
{
	float fVar0;
	float fVar1;
	if (OBJECT::DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(iParam0) && OBJECT::DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(iParam1))
	{
		fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0);
		fVar1 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam1);
		if (bParam2)
		{
			fVar0 = (fVar0 - (MISC::GET_FRAME_TIME() * fParam3));
			if (fVar0 <= -1f)
			{
				fVar0 = -1f;
			}
			fVar1 = (fVar1 + (MISC::GET_FRAME_TIME() * fParam3));
			if (fVar1 >= 1f)
			{
				fVar1 = 1f;
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fVar0, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 4, false, true);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam1, fVar1, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam1, 4, false, true);
			if (fVar0 == -1f && fVar1 == 1f)
			{
				return 1;
			}
		}
		else
		{
			fVar0 = (fVar0 + (MISC::GET_FRAME_TIME() * fParam3));
			if (fVar0 >= 0f)
			{
				fVar0 = 0f;
			}
			fVar1 = (fVar1 - (MISC::GET_FRAME_TIME() * fParam3));
			if (fVar1 <= 0f)
			{
				fVar1 = 0f;
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fVar0, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 4, false, true);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam1, fVar1, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam1, 4, false, true);
			if (fVar0 == 0f && fVar1 == 0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_94(int iParam0, int iParam1)//Position - 0xACE03
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (__LIB_0__.func_479(iParam1, 10000))
				{
					return 1;
				}
			}
			else
			{
				*iParam1 = MISC::GET_GAME_TIMER();
			}
		}
	}
	return 0;
}

int func_95(bool bParam0)//Position - 0xBD586
{
	if (__LIB_0__.func_317(bParam0))
	{
		return __LIB_0__.func_42(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_96(int iParam0, int iParam1)//Position - 0x15AFD
{
	if (!__LIB_0__.func_43(iParam0))
	{
		return;
	}
	Global_113386.f_2363.f_539.f_2332[iParam0] = iParam1;
}

void func_97(int iParam0)//Position - 0x34D62
{
	float fVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, true);
				if (bLocal_82)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

int func_98(var uParam0, int iParam1)//Position - 0x3AC5F
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
			uParam0->f_4 = __LIB_6__.func_853(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = __LIB_6__.func_853(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = __LIB_6__.func_853(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = __LIB_6__.func_853(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = __LIB_6__.func_853(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = __LIB_6__.func_853(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = __LIB_6__.func_853(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = __LIB_6__.func_853(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = __LIB_6__.func_853(2, 1);
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

float func_99(int iParam0)//Position - 0xDC0D
{
	struct<3> Var0;
	float fVar1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar1 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	if (fVar1 > 180f)
	{
		fVar1 = (fVar1 - 360f);
	}
	if (fVar1 < -180f)
	{
		fVar1 = (fVar1 + 360f);
	}
	return fVar1;
}

void func_100(var uParam0)//Position - 0x976EC
{
	uParam0->f_43 = 0;
}

void func_101()//Position - 0x246C6
{
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
}

int func_102(int iParam0)//Position - 0x2F7F5
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
			break;
	}
	return 0;
}

void func_103(var uParam0)//Position - 0x7C6CB
{
	uParam0->f_9 = 1000;
}

void func_104(bool bParam0)//Position - 0x7CA3E
{
	HUD::REQUEST_ADDITIONAL_TEXT("FINC", 0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

char* func_105()//Position - 0x80361
{
	return "finalec";
}

void func_106(var uParam0, float fParam1, float fParam2)//Position - 0x99279
{
	if (*uParam0 < fParam1)
	{
		*uParam0 = (*uParam0 + (fParam2 * SYSTEM::TIMESTEP()));
		if (*uParam0 > fParam1)
		{
			*uParam0 = fParam1;
		}
	}
	else if (*uParam0 > fParam1)
	{
		*uParam0 = (*uParam0 - (fParam2 * SYSTEM::TIMESTEP()));
		if (*uParam0 < fParam1)
		{
			*uParam0 = fParam1;
		}
	}
}

int func_107()//Position - 0x74C
{
	return Global_113386.f_7688.f_911;
}

void func_108(char* sParam0)//Position - 0xADB
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("FB_TITLE" /* GXT: Uploading Facebook Post.~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_FACEBOOK", "CHAR_FACEBOOK", true, 0, "", 0);
	}
}

void func_109(int iParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x76C9B
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

struct<4> func_110(char* sParam0, int iParam1)//Position - 0x799AB
{
	struct<4> Var0;
	StringCopy(&Var0, sParam0, 16);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1))
	{
		case 0:
			StringConCat(&Var0, "a", 16);
			break;
		case 1:
			StringConCat(&Var0, "b", 16);
			break;
		case 2:
			StringConCat(&Var0, "c", 16);
			break;
		default:
			StringConCat(&Var0, "X", 16);
			break;
	}
	return Var0;
}

void func_111(var uParam0, int iParam1, int iParam2, int iParam3, struct<3> Param4, float fParam5)//Position - 0x7D108
{
	uParam0->f_111 = iParam1;
	uParam0->f_116 = iParam2;
	uParam0->f_117 = iParam3;
	uParam0->f_112 = { Param4 };
	uParam0->f_115 = fParam5;
}

int func_112(int iParam0)//Position - 0x7D150
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((Global_113386.f_18533[iParam0] == 11 || Global_113386.f_18533[iParam0] == 8) || Global_113386.f_18533[iParam0] == 9) || Global_113386.f_18533[iParam0] == 10) || Global_113386.f_18533[iParam0] == 13) || Global_113386.f_18533[iParam0] == 14) || Global_113386.f_18533[iParam0] == 15) || Global_113386.f_18533[iParam0] == 12) || Global_113386.f_18533[iParam0] == 16) || Global_113386.f_18533[iParam0] == 17) || Global_113386.f_18533[iParam0] == 21) || Global_113386.f_18533[iParam0] == 18) || Global_113386.f_18533[iParam0] == 19) || Global_113386.f_18533[iParam0] == 20) || Global_113386.f_18533[iParam0] == 22) || Global_113386.f_18533[iParam0] == 23) || Global_113386.f_18533[iParam0] == 24) || Global_113386.f_18533[iParam0] == 67) || Global_113386.f_18533[iParam0] == 25) || Global_113386.f_18533[iParam0] == 26) || Global_113386.f_18533[iParam0] == 27) || Global_113386.f_18533[iParam0] == 28) || Global_113386.f_18533[iParam0] == 29) || Global_113386.f_18533[iParam0] == 30) || Global_113386.f_18533[iParam0] == 31) || Global_113386.f_18533[iParam0] == 32) || Global_113386.f_18533[iParam0] == 33) || Global_113386.f_18533[iParam0] == 34) || Global_113386.f_18533[iParam0] == 35) || Global_113386.f_18533[iParam0] == 36) || Global_113386.f_18533[iParam0] == 37) || Global_113386.f_18533[iParam0] == 58) || Global_113386.f_18533[iParam0] == 59) || Global_113386.f_18533[iParam0] == 60) || Global_113386.f_18533[iParam0] == 38) || Global_113386.f_18533[iParam0] == 39) || Global_113386.f_18533[iParam0] == 40) || Global_113386.f_18533[iParam0] == 41) || Global_113386.f_18533[iParam0] == 42) || Global_113386.f_18533[iParam0] == 43) || Global_113386.f_18533[iParam0] == 44) || Global_113386.f_18533[iParam0] == 45) || Global_113386.f_18533[iParam0] == 46) || Global_113386.f_18533[iParam0] == 47) || Global_113386.f_18533[iParam0] == 49) || Global_113386.f_18533[iParam0] == 48) || Global_113386.f_18533[iParam0] == 50) || Global_113386.f_18533[iParam0] == 51) || Global_113386.f_18533[iParam0] == 52) || Global_113386.f_18533[iParam0] == 66) || Global_113386.f_18533[iParam0] == 53) || Global_113386.f_18533[iParam0] == 54) || Global_113386.f_18533[iParam0] == 55) || Global_113386.f_18533[iParam0] == 56) || Global_113386.f_18533[iParam0] == 57) || Global_113386.f_18533[iParam0] == 61) || Global_113386.f_18533[iParam0] == 62) || Global_113386.f_18533[iParam0] == 63) || Global_113386.f_18533[iParam0] == 68) || Global_113386.f_18533[iParam0] == 69) || Global_113386.f_18533[iParam0] == 64) || Global_113386.f_18533[iParam0] == 65) || Global_113386.f_18533[iParam0] == 70) || Global_113386.f_18533[iParam0] == 71) || Global_113386.f_18533[iParam0] == 72) || Global_113386.f_18533[iParam0] == 73) || Global_113386.f_18533[iParam0] == 74)
	{
		if (iParam0 == 0 && Global_113386.f_18533[0] == 36)
		{
			if (Global_113386.f_18533[1] == 37)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_113386.f_18533[1] == 37)
		{
			if (Global_113386.f_18533[0] == 36)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_113386.f_18533[0] == 58)
		{
			if (Global_113386.f_18533[2] == 59)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_113386.f_18533[2] == 59)
		{
			if (Global_113386.f_18533[0] == 58)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_113386.f_18533[0] == 46)
		{
			if (Global_113386.f_18533[1] == 47)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_113386.f_18533[1] == 47)
		{
			if (Global_113386.f_18533[0] == 46)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
		}
		if (iParam0 == 1 && Global_113386.f_18533[1] == 25)
		{
			if (Global_113386.f_18533[2] == 26)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_113386.f_18533[2] == 26)
		{
			if (Global_113386.f_18533[1] == 25)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		if (iParam0 == 1 && (((Global_113386.f_18533[1] == 42 || Global_113386.f_18533[1] == 43) || Global_113386.f_18533[1] == 44) || Global_113386.f_18533[1] == 45))
		{
			if (((Global_113386.f_18533[2] == 42 || Global_113386.f_18533[2] == 43) || Global_113386.f_18533[2] == 44) || Global_113386.f_18533[2] == 45)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		else if (iParam0 == 2 && (((Global_113386.f_18533[2] == 42 || Global_113386.f_18533[2] == 43) || Global_113386.f_18533[2] == 44) || Global_113386.f_18533[2] == 45))
		{
			if (((Global_113386.f_18533[1] == 42 || Global_113386.f_18533[1] == 43) || Global_113386.f_18533[1] == 44) || Global_113386.f_18533[1] == 45)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		if (iParam0 == 1 && Global_113386.f_18533[1] == 16)
		{
			if (Global_113386.f_18533[0] == 17)
			{
				Global_113386.f_18533[0] = 318;
			}
		}
		else if (iParam0 == 0 && Global_113386.f_18533[0] == 17)
		{
			if (Global_113386.f_18533[1] == 16)
			{
				Global_113386.f_18533[1] = 318;
			}
		}
		if (iParam0 == 2 && Global_113386.f_18533[2] == 30)
		{
			if (Global_113386.f_18533[1] == 19)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_113386.f_18533[1] == 19)
		{
			if (Global_113386.f_18533[2] == 30)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		if (iParam0 == 0 && Global_113386.f_18533[0] == 21)
		{
			if (Global_113386.f_18533[1] == 20)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_113386.f_18533[1] == 20)
		{
			if (Global_113386.f_18533[0] == 21)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
		}
		if (iParam0 == 1 && Global_113386.f_18533[1] == 38)
		{
			if (Global_113386.f_18533[2] == 39)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_113386.f_18533[2] == 39)
		{
			if (Global_113386.f_18533[1] == 38)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		if (iParam0 == 1 && Global_113386.f_18533[1] == 29)
		{
			if (Global_113386.f_18533[2] == 15)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_113386.f_18533[2] == 15)
		{
			if (Global_113386.f_18533[1] == 29)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		if (iParam0 == 1 && Global_113386.f_18533[1] == 56)
		{
			if (Global_113386.f_18533[2] == 57)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_113386.f_18533[2] == 57)
		{
			if (Global_113386.f_18533[1] == 56)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		if (iParam0 == 0 && Global_113386.f_18533[0] == 68)
		{
			if (Global_113386.f_18533[2] == 69)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_113386.f_18533[2] == 69)
		{
			if (Global_113386.f_18533[0] == 68)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_113386.f_18533[0] == 64)
		{
			if (Global_113386.f_18533[2] == 65)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_113386.f_18533[2] == 65)
		{
			if (Global_113386.f_18533[0] == 64)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_113386.f_18533[0] == 72)
		{
			if (Global_113386.f_18533[1] == 73)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_113386.f_18533[1] == 73)
		{
			if (Global_113386.f_18533[0] == 72)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
		}
		if (iParam0 == 2 && Global_113386.f_18533[2] == 51)
		{
			if (Global_113386.f_18533[1] == 50)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_113386.f_18533[1] == 50)
		{
			if (Global_113386.f_18533[2] == 51)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		if (iParam0 == 0 && Global_113386.f_18533[0] == 52)
		{
			if (Global_113386.f_18533[1] == 66)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_113386.f_18533[1] == 66)
		{
			if (Global_113386.f_18533[0] == 52)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_113386.f_18533[0] == 61)
		{
			if (Global_113386.f_18533[1] == 31)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_113386.f_18533[1] == 31)
		{
			if (Global_113386.f_18533[0] == 61)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_113386.f_18533[0] == 62)
		{
			if (Global_113386.f_18533[1] == 53)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
			if (Global_113386.f_18533[2] == 54)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		else if (iParam0 == 1 && Global_113386.f_18533[1] == 53)
		{
			if (Global_113386.f_18533[0] == 62)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
			if (Global_113386.f_18533[2] == 54)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[2]));
				Global_113386.f_18533[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_113386.f_18533[2] == 54)
		{
			if (Global_113386.f_18533[0] == 62)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[0]));
				Global_113386.f_18533[0] = 318;
			}
			if (Global_113386.f_18533[1] == 53)
			{
				__LIB_0__.func_17(&(Global_113386.f_2363.f_539.f_2296[1]));
				Global_113386.f_18533[1] = 318;
			}
		}
		Global_99832 = -1;
		Global_113386.f_18533[iParam0] = 318;
		return 1;
	}
	Global_99832 = -1;
	return 0;
}

int func_113(int iParam0, var uParam1)//Position - 0x7E32D
{
	switch (iParam0)
	{
		case 114:
			*uParam1 = 1;
			return 1;
			break;
		case 108:
			*uParam1 = 2;
			return 1;
			break;
		case 109:
			*uParam1 = 3;
			return 1;
			break;
		case 110:
			*uParam1 = 4;
			return 1;
			break;
		case 218:
			*uParam1 = 5;
			return 1;
			break;
		case 221:
			*uParam1 = 6;
			return 1;
			break;
		case 187:
			*uParam1 = 7;
			return 1;
			break;
		case 196:
			*uParam1 = 8;
			return 1;
			break;
		case 197:
			*uParam1 = 9;
			return 1;
			break;
		case 246:
			*uParam1 = 10;
			return 1;
			break;
		case 283:
			*uParam1 = 11;
			return 1;
			break;
		case 124:
			*uParam1 = 12;
			return 1;
			break;
		case 8:
			*uParam1 = 13;
			return 1;
			break;
		case 9:
			*uParam1 = 13;
			return 1;
			break;
		case 10:
			*uParam1 = 13;
			return 1;
			break;
	}
	*uParam1 = -1;
	return 0;
}

int func_114()//Position - 0x7E52B
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		return 0;
	}
	if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
	{
		if (STREAMING::GET_PLAYER_SWITCH_STATE() != 11)
		{
			return 0;
		}
		if (STREAMING::GET_PLAYER_SWITCH_STATE() == 11)
		{
			if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_DURATION() > 0)
			{
				if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_CURRENT_TIME() > 100)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_115(var uParam0)//Position - 0x7E92F
{
	if (!PED::IS_PED_INJURED((*uParam0)[uParam0->f_5]))
	{
		PED::SET_PED_CAN_BE_TARGETTED((*uParam0)[uParam0->f_5], false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[uParam0->f_5], joaat("PLAYER"));
	}
}

int func_116()//Position - 0x7EBE8
{
	int iVar0;
	int iVar1;
	var uVar2;
	MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &uVar2);
	switch (iVar0)
	{
		case joaat("snow"):
		case joaat("SNOWLIGHT"):
		case joaat("Neutral"):
		case joaat("BLIZZARD"):
			return 0;
			break;
	}
	switch (iVar1)
	{
		case joaat("snow"):
		case joaat("SNOWLIGHT"):
		case joaat("Neutral"):
		case joaat("BLIZZARD"):
			return 0;
			break;
	}
	return 1;
}

void func_117(int iParam0)//Position - 0x81639
{
	if (Global_97365 == -1)
	{
		Global_97365 = iParam0;
	}
}

int func_118(var uParam0)//Position - 0x8165F
{
	char* sVar0;
	if (uParam0->f_16 != 0)
	{
		switch (uParam0->f_2)
		{
			case 187:
			case default:
		}
		sVar0 = "";
		return 0;
		INTERIOR::FORCE_ROOM_FOR_ENTITY(uParam0->f_17[uParam0->f_61], uParam0->f_16, MISC::GET_HASH_KEY(sVar0));
		return 1;
	}
	return 0;
}

void func_119(int iParam0)//Position - 0x816A7
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = __LIB_0__.func_19(iVar1);
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (Global_113386.f_2363.f_539[iVar2 /*65*/].f_13[iVar0] != -1 && Global_113386.f_2363.f_539[iVar2 /*65*/][iVar0] != -1)
		{
			PED::SET_PED_PRELOAD_VARIATION_DATA(iParam0, iVar0, Global_113386.f_2363.f_539[iVar2 /*65*/].f_13[iVar0], Global_113386.f_2363.f_539[iVar2 /*65*/][iVar0]);
		}
		iVar0++;
	}
}

Vector3 func_120(struct<3> Param0, float fParam1, int iParam2)//Position - 0x8228F
{
	float fVar0;
	if (iParam2 <= 1)
	{
		fVar0 = 0f;
	}
	else
	{
		fVar0 = 2.8f;
	}
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, fVar0, 0f, 0f);
}

int func_121(int iParam0, var uParam1, var uParam2)//Position - 0x822B8
{
	struct<3> Var0[20];
	float fVar1[20];
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	float fVar6;
	iVar2 = 0;
	Var0[iVar2 /*3*/] = { -988.0314f, -937.3164f, 247.4575f };
	fVar1[iVar2] = 21.7565f;
	iVar2++;
	Var0[iVar2 /*3*/] = { -1190.6515f, -1442.3416f, 274.3851f };
	fVar1[iVar2] = 4.3914f;
	iVar2++;
	Var0[iVar2 /*3*/] = { -1552.3132f, 384.6868f, 103.5778f };
	fVar1[iVar2] = 313.7197f;
	iVar2++;
	Var0[iVar2 /*3*/] = { -1807.507f, 2422.1606f, 238.0954f };
	fVar1[iVar2] = 266.1874f;
	iVar2++;
	Var0[iVar2 /*3*/] = { -676.9284f, 4432.508f, 360.724f };
	fVar1[iVar2] = 272.4361f;
	iVar2++;
	Var0[iVar2 /*3*/] = { 2049.124f, 6062.8164f, 294.5194f };
	fVar1[iVar2] = 225.8041f;
	iVar2++;
	Var0[iVar2 /*3*/] = { 2043.3855f, 3475.935f, 42.2975f };
	fVar1[iVar2] = 116.8867f;
	iVar2++;
	Var0[iVar2 /*3*/] = { 2634.4377f, 2338.4937f, 254.4784f };
	fVar1[iVar2] = 142.5168f;
	iVar2++;
	Var0[iVar2 /*3*/] = { 1590.3884f, 1001.1693f, 287.6988f };
	fVar1[iVar2] = 134.4989f;
	iVar2++;
	Var0[iVar2 /*3*/] = { 2056.5725f, -632.6298f, 94.2403f };
	fVar1[iVar2] = 124.6985f;
	iVar2++;
	Var0[iVar2 /*3*/] = { 1558.5808f, -2094.0803f, 302.2927f };
	fVar1[iVar2] = 97.0006f;
	iVar2++;
	Var0[iVar2 /*3*/] = { 1135.8334f, -3115.1716f, 4.8009f };
	fVar1[iVar2] = 42.7435f;
	iVar2++;
	Var0[iVar2 /*3*/] = { -428.0257f, -2891.29f, 181.5473f };
	fVar1[iVar2] = 2.7579f;
	iVar2++;
	Var0[iVar2 /*3*/] = { -86.4255f, -1548.1797f, 272.6201f };
	fVar1[iVar2] = 335.0247f;
	iVar2++;
	Var0[iVar2 /*3*/] = { 282.3189f, 210.1434f, 212.441f };
	fVar1[iVar2] = 349.689f;
	iVar2++;
	Var0[iVar2 /*3*/] = { 824.9931f, 2404.9763f, 239.2513f };
	fVar1[iVar2] = 355.0965f;
	iVar2++;
	Var0[iVar2 /*3*/] = { 1190.4857f, 4000.3528f, 235.3204f };
	fVar1[iVar2] = 328.8051f;
	iVar2++;
	Var0[iVar2 /*3*/] = { -3013.5188f, 1294.3378f, 31.2512f };
	fVar1[iVar2] = 244.3188f;
	iVar2++;
	Var0[iVar2 /*3*/] = { -205.1947f, 1965.1676f, 181.5578f };
	fVar1[iVar2] = 295.9389f;
	iVar2++;
	Var0[iVar2 /*3*/] = { -457.0207f, 6013.293f, 35.6048f };
	fVar1[iVar2] = 313.8458f;
	iVar2++;
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	fVar4 = 10000000f;
	iVar5 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 19)
	{
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var0[iVar2 /*3*/], true);
		if (fVar6 < fVar4)
		{
			fVar4 = fVar6;
			iVar5 = iVar2;
		}
		iVar2++;
	}
	if (iVar5 >= 0 && iVar5 < 20)
	{
		*uParam1 = { Var0[iVar5 /*3*/] };
		*uParam2 = fVar1[iVar5];
		return 1;
	}
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	return 0;
}

int func_122(int iParam0)//Position - 0x82676
{
	var uVar0;
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blimp"))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true), &uVar0, false, false))
	{
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_123(int iParam0, bool bParam1)//Position - 0x826B8
{
	bool bVar0;
	bool bVar1;
	bVar0 = PED::IS_USING_PED_SCUBA_GEAR_VARIATION(iParam0);
	bVar1 = ENTITY::IS_ENTITY_IN_WATER(iParam0);
	if (bVar0 && bVar1)
	{
		Global_97831[bParam1 /*29*/].f_16 = 1;
	}
	else
	{
		Global_97831[bParam1 /*29*/].f_16 = 0;
	}
}

void func_124()//Position - 0x837C5
{
	__LIB_11__.func_825(Global_100164 + 1);
}

int func_125(int iParam0, char* sParam1)//Position - 0x837D7
{
	switch (iParam0)
	{
		case 42:
			StringCopy(sParam1, "v_PRFTa_FRANKLIN1a", 24);
			return 1;
			break;
		case 43:
			StringCopy(sParam1, "v_PRFTa_FRANKLIN1c", 24);
			return 1;
			break;
		case 44:
			StringCopy(sParam1, "v_PRFTa_FRANKLIN1d", 24);
			return 1;
			break;
		case 45:
			StringCopy(sParam1, "v_PRFTa_FRANKLIN1e", 24);
			return 1;
			break;
		case 80:
			StringCopy(sParam1, "v_PRM2_SAVEHOUSE1_b", 24);
			return 1;
			break;
		case 261:
			StringCopy(sParam1, "v_PRT_FIGHTCASINO", 24);
			return 1;
			break;
		case 304:
			StringCopy(sParam1, "v_PRT6_SMOKECRYSTAL", 24);
			return 1;
			break;
		case 305:
			StringCopy(sParam1, "v_PRT6_METHLAB", 24);
			return 1;
			break;
		case 99:
			StringCopy(sParam1, "v_PRM2_DROPOFFDAU_a", 24);
			return 1;
			break;
		case 101:
			StringCopy(sParam1, "v_PRM2_DROPOFFSON_a", 24);
			return 1;
			break;
		case 102:
			StringCopy(sParam1, "v_PRM2_DROPOFFSON_b", 24);
			return 1;
			break;
		case 100:
			StringCopy(sParam1, "v_PRM2_DROPOFFDAU_b", 24);
			return 1;
			break;
		case 130:
			StringCopy(sParam1, "v_PRM6_DRINKINGBEER", 24);
			return 1;
			break;
		case 128:
			StringCopy(sParam1, "v_PRM6_HOUSETV_a", 24);
			return 1;
			break;
		case 126:
			StringCopy(sParam1, "v_PRM6_MORNING_a", 24);
			return 1;
			break;
		case 132:
			StringCopy(sParam1, "v_PRM6_DEPRESSED", 24);
			return 1;
			break;
		case 131:
			StringCopy(sParam1, "v_PRM6_ONPHONE", 24);
			return 1;
			break;
		case 96:
			StringCopy(sParam1, "v_PRM4_LUNCH_b", 24);
			return 1;
			break;
		case 79:
			StringCopy(sParam1, "v_PRM2_SAVEHOUSE1_a", 24);
			return 1;
			break;
		case 174:
			StringCopy(sParam1, "v_PRM_S_FAMILY4", 24);
			return 1;
			break;
		case 260:
			StringCopy(sParam1, "v_PRT_FIGHTYAUCLUB_b", 24);
			return 1;
			break;
		case 256:
			StringCopy(sParam1, "v_PRT_FIGHTBAR_a", 24);
			return 1;
			break;
		case 257:
			StringCopy(sParam1, "v_PRT_FIGHTBAR_b", 24);
			return 1;
			break;
		case 258:
			StringCopy(sParam1, "v_PRT_FIGHTBAR_c", 24);
			return 1;
			break;
		case 309:
			StringCopy(sParam1, "v_PRT6_TRAF_AIR", 24);
			return 1;
			break;
		case 313:
			StringCopy(sParam1, "v_PRT6_LAKE", 24);
			return 1;
			break;
		case 307:
			StringCopy(sParam1, "v_PRT6_HUNTING2", 24);
			return 1;
			break;
		case 306:
			StringCopy(sParam1, "v_PRT6_HUNTING1", 24);
			return 1;
			break;
		case 308:
			StringCopy(sParam1, "v_PRT6_HUNTING3", 24);
			return 1;
			break;
		case 312:
			StringCopy(sParam1, "v_PRT_CN_PIER", 24);
			return 1;
			break;
		case 268:
			StringCopy(sParam1, "v_PRT_CN_WAKETRAIN", 24);
			return 1;
			break;
		case 110:
			StringCopy(sParam1, "v_PRM_BENCHCALL_a", 24);
			return 1;
			break;
		case 111:
			StringCopy(sParam1, "v_PRM_BENCHCALL_b", 24);
			return 1;
			break;
		case 265:
			StringCopy(sParam1, "v_PRT_CN_WAKETRASH_b", 24);
			return 1;
			break;
		case 272:
			StringCopy(sParam1, "v_PRT_SC_ALLEYDRUNK", 24);
			return 1;
			break;
		case 279:
			StringCopy(sParam1, "v_PRT_NAKED_GARDEN", 24);
			return 1;
			break;
		case 240:
			StringCopy(sParam1, "v_PRT_CN_CHATEAU_b", 24);
			return 1;
			break;
		case 241:
			StringCopy(sParam1, "v_PRT_CN_CHATEAU_c", 24);
			return 1;
			break;
		case 242:
			StringCopy(sParam1, "v_PRT_CR_CHATEAU_d", 24);
			return 1;
			break;
		case 266:
			StringCopy(sParam1, "v_PRT_CR_WAKEBEACH", 24);
			return 1;
			break;
		case 267:
			StringCopy(sParam1, "v_PRT_CN_WAKEBARN", 24);
			return 1;
			break;
		case 269:
			StringCopy(sParam1, "v_PRT_CR_WAKEROOFTOP", 24);
			return 1;
			break;
		case 270:
			StringCopy(sParam1, "v_PRT_CN_WAKEMOUNTAIN", 24);
			return 1;
			break;
		case 194:
			StringCopy(sParam1, "v_PRF_KUSH_DOC_b", 24);
			return 1;
			break;
		case 195:
			StringCopy(sParam1, "v_PRF_KUSH_DOC_c", 24);
			return 1;
			break;
	}
	StringCopy(sParam1, "null", 24);
	return 0;
}

int func_126(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x83BCE
{
	switch (iParam0)
	{
		case 231:
			StringCopy(sParam1, "lkexcile2_chase", 16);
			*uParam2 = 100;
			*uParam3 = 6500f;
			*uParam4 = 12700f;
			*uParam5 = (5000f + 12700f);
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
		case 75:
			StringCopy(sParam1, "scene_m_fbi2_", 16);
			*uParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 6200f;
			*uParam5 = (5000f + 6200f);
			*uParam6 = 0.4f;
			*uParam7 = 0.8f;
			return 1;
			break;
		case 76:
			StringCopy(sParam1, "scene_f_fra2_", 16);
			*uParam2 = 1;
			*uParam3 = 1000f;
			*uParam5 = 8500f;
			*uParam4 = 4750f;
			*uParam6 = 0.4f;
			*uParam7 = 0.7f;
			return 1;
			break;
		case 173:
			StringCopy(sParam1, "scene_m_biking", 16);
			*uParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
		case 281:
			StringCopy(sParam1, "scene_t_chaseA", 16);
			*uParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 7500f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
		case 282:
			StringCopy(sParam1, "scene_t_chaseB", 16);
			*uParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 1500f;
			*uParam5 = 10000f;
			*uParam6 = 0.5f;
			*uParam7 = 0.75f;
			return 1;
			break;
		case 283:
			StringCopy(sParam1, "scene_t_chaseC", 16);
			*uParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 1500f;
			*uParam5 = 10000f;
			*uParam6 = 0.9f;
			*uParam7 = 1.1f;
			return 1;
			break;
		case 284:
			StringCopy(sParam1, "scene_t_chaseD", 16);
			*uParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
		case 275:
			StringCopy(sParam1, "scene_t_policeA", 16);
			*uParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 10000f;
			*uParam6 = 0.5f;
			*uParam7 = 0.75f;
			return 1;
			break;
		case 276:
			StringCopy(sParam1, "scene_t_policeB", 16);
			*uParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
		case 277:
			StringCopy(sParam1, "scene_t_policeC", 16);
			*uParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
	}
	StringCopy(sParam1, "", 16);
	*uParam2 = -1;
	*uParam3 = -1f;
	*uParam4 = -1f;
	*uParam5 = -1f;
	*uParam6 = 0f;
	*uParam7 = 0f;
	return 0;
}

int func_127(struct<3> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x8C29F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -254.8389f, -2026.9094f, 29.0359f, -394.2681f, -1909.8342f, 48.946f, 122.5f, false, true))
	{
		Var0 = { -254.8389f, -2026.9094f, 29.0359f };
		Var1 = { -394.2681f, -1909.8342f, 48.946f };
		fVar2 = 122.5f;
		Var3 = { Var0 * Vector(1f, 1f, 1f) + Var1 * Vector(1f, 1f, 1f) / Vector(2f, 2f, 2f) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3.f_0, Var3.f_1, Var1.f_2, fVar2, false, true, 0))
		{
			*uParam1 = { -231.1906f, -1995.7928f, 28.946f };
			*uParam2 = 256.7039f;
			*uParam3 = 6;
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3.f_0, Var3.f_1, Var0.f_2, Var1, fVar2, false, true, 0))
		{
			*uParam1 = { -342.98f, -1879.652f, 28.9463f };
			*uParam2 = 353.8719f;
			*uParam3 = 7;
			return 1;
		}
		*uParam1 = { -342.98f, -1879.652f, 28.9463f };
		*uParam2 = 353.8719f;
		*uParam3 = 6;
		return 1;
	}
	iVar4 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	switch (iVar4)
	{
		case joaat("strp3mainrm"):
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 127.1808f, -1277.3215f, 28.330606f, 120.22255f, -1281.5446f, 31.23053f, 4f, false, true))
			{
				*uParam1 = { 118.3254f, -1284.7686f, 27.2739f };
				*uParam2 = 16.7668f;
				*uParam3 = 0;
				return 1;
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 132.83696f, -1287.9364f, 28.269539f, 127.83243f, -1279.5791f, 31.019539f, 4f, false, true))
			{
				*uParam1 = { 127.1327f, -1283.6587f, 28.2788f };
				*uParam2 = 255.9372f;
				*uParam3 = 1;
				return 1;
			}
			break;
		case joaat("GtaMloRoom001"):
		case joaat("GtaMloRoom002"):
		case joaat("GtaMloRoom003"):
		case joaat("GtaMloRoom004"):
		case joaat("GtaMloRoom005"):
		case joaat("GtaMloRoom006"):
		case joaat("GtaMloRoom007"):
		case joaat("GtaMloRoom008"):
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true))
			{
				*uParam1 = { -598.9213f, 2096.5286f, 129.814f };
				*uParam2 = 25.7278f;
				*uParam3 = 3;
				return 1;
			}
			break;
		case joaat("BedRoom"):
		case joaat("JanitorRoom"):
		case joaat("v_janitor"):
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -112.71304f, -14.207236f, 69.51959f, -109.52924f, -5.697598f, 72.421684f, 6f, false, true))
			{
				*uParam1 = { -105.0006f, -8.013f, 69.5234f };
				*uParam2 = 247.4701f;
				*uParam3 = 5;
				return 1;
			}
			break;
		case joaat("V_57_porchRM"):
		case joaat("v_hospital"):
		case joaat("V_40_Room1"):
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 357.0317f, -590.5166f, 27.89807f, 300.43195f, -569.35443f, 51.65972f, 28.5f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 299.7401f, -584.8319f, 27.89807f, 328.3058f, -595.8621f, 51.65972f, 28.5f, false, true))
			{
				*uParam1 = { 360.4663f, -585.134f, 27.8231f };
				*uParam2 = 254.2763f;
				*uParam3 = 4;
				return 1;
			}
			break;
		case 0:
		case 2:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 428.29285f, -996.6834f, 24.488642f, 439.54382f, -996.71136f, 28.103334f, 8.6875f, false, true))
			{
				*uParam1 = { 433.8454f, -1011.9464f, 27.7057f };
				*uParam2 = 196.3176f;
				*uParam3 = 2;
				return 1;
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2331.6475f, 2575.777f, 45.66767f, 2326.4521f, 2564.806f, 49.703575f, 5f, false, true))
			{
				*uParam1 = { 2332.6953f, 2577.6816f, 45.6677f };
				*uParam2 = 321.4395f;
				*uParam3 = 8;
				return 1;
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true))
			{
				*uParam1 = { -598.9213f, 2096.5286f, 129.814f };
				*uParam2 = 25.7278f;
				*uParam3 = 3;
				return 1;
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 357.0317f, -590.5166f, 27.89807f, 300.43195f, -569.35443f, 51.65972f, 28.5f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 299.7401f, -584.8319f, 27.89807f, 328.3058f, -595.8621f, 51.65972f, 28.5f, false, true))
			{
				*uParam1 = { 360.4663f, -585.134f, 27.8231f };
				*uParam2 = 254.2763f;
				*uParam3 = 4;
				return 1;
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -112.71304f, -14.207236f, 69.51959f, -109.52924f, -5.697598f, 72.421684f, 6f, false, true))
			{
				*uParam1 = { -105.0006f, -8.013f, 69.5234f };
				*uParam2 = 247.4701f;
				*uParam3 = 5;
				return 1;
			}
			else
			{
				*uParam3 = -1;
				return 0;
			}
			break;
		default:
			*uParam3 = -1;
			return 0;
			break;
	}
	*uParam3 = -1;
	return 0;
}

bool func_128(var uParam0)//Position - 0x8CC87
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	iVar0 = Global_113386.f_2363.f_539.f_4323;
	Var1 = { Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] };
	if (__LIB_0__.func_78(Var1, 0f, 0f, 0f, 0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	}
	*uParam0 = 5;
	fVar2 = 9999999f;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (BitTest(Global_113386.f_7229.f_11[iVar3], 0))
		{
			Var4 = { Global_95644[iVar3 /*9*/].f_3 };
			fVar5 = SYSTEM::VDIST(Var1, Var4);
			if (fVar5 > 150f)
			{
				if (fVar5 < fVar2)
				{
					*uParam0 = iVar3;
					fVar2 = fVar5;
				}
			}
		}
		iVar3++;
	}
	return *uParam0 != 5;
}

char* func_129(int iParam0)//Position - 0x911EC
{
	switch (iParam0)
	{
		case joaat("v_chopshop"):
			return "v_chopshop";
			break;
		case joaat("v_franklins"):
			return "v_franklins";
			break;
		case joaat("v_franklinshouse"):
			return "v_franklinshouse";
			break;
		case joaat("v_methlab"):
			return "v_methlab";
			break;
		case joaat("v_michael"):
			return "v_michael";
			break;
		case joaat("v_strip3"):
			return "v_strip3";
			break;
		case joaat("v_trailer"):
			return "v_trailer";
			break;
		case joaat("v_trevors"):
			return "v_Trevors";
			break;
	}
	return "";
}

int func_130(int iParam0, var uParam1)//Position - 0x93047
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = Global_97919.f_45;
			return 0;
			break;
		case 1:
			*uParam1 = 3;
			return 1;
			break;
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam1 = 3;
			return 1;
			break;
		case 5:
		case 2:
		case 12:
		case 41:
		case 124:
		case 46:
		case 48:
		case 52:
		case 61:
		case 62:
		case 68:
		case 72:
		case 64:
		case 58:
		case 60:
		case 36:
		case 18:
		case 17:
		case 21:
		case 75:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 103:
		case 104:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 140:
		case 141:
		case 94:
		case 95:
		case 96:
		case 97:
		case 110:
		case 111:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 108:
		case 109:
		case 112:
		case 113:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 125:
		case 115:
		case 116:
		case 117:
		case 114:
		case 105:
		case 106:
		case 107:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 173:
		case 174:
		case 172:
			*uParam1 = 0;
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 6:
		case 3:
		case 8:
		case 9:
		case 10:
		case 11:
		case 47:
		case 49:
		case 13:
		case 25:
		case 14:
		case 16:
		case 19:
		case 20:
		case 23:
		case 24:
		case 35:
		case 67:
		case 56:
		case 38:
		case 50:
		case 66:
		case 53:
		case 37:
		case 63:
		case 27:
		case 70:
		case 71:
		case 73:
		case 76:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 193:
		case 192:
		case 194:
		case 195:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 196:
		case 197:
		case 206:
		case 207:
		case 205:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 221:
		case 222:
		case 223:
		case 224:
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
		case 218:
		case 219:
		case 220:
		case 225:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
		case 191:
		case 232:
		case 233:
		case 231:
			*uParam1 = 1;
			return 1;
			break;
		case 7:
		case 4:
		case 26:
		case 28:
		case 22:
		case 74:
		case 15:
		case 39:
		case 40:
		case 54:
		case 55:
		case 57:
		case 51:
		case 59:
		case 69:
		case 65:
		case 235:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 234:
		case 316:
		case 315:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
		case 277:
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 284:
		case 285:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 286:
		case 287:
		case 288:
		case 262:
		case 263:
		case 289:
		case 290:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 299:
		case 300:
		case 301:
		case 302:
		case 303:
		case 296:
		case 297:
		case 298:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
		case 310:
		case 311:
		case 312:
		case 313:
		case 314:
			*uParam1 = 2;
			return 1;
			break;
	}
	*uParam1 = __LIB_0__.func_388(Global_97919.f_7);
	return 0;
}

void func_131(struct<3> Param0, float fParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x937FC
{
	int iVar0;
	if (bParam4)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	MISC::CLEAR_AREA(Param0, 5f, true, false, false, false);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
			if (fParam1 != -1f)
			{
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			AUDIO::RESET_PED_AUDIO_FLAGS(PLAYER::PLAYER_PED_ID());
		}
	}
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(true);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, fParam3, 0);
	iVar0 = 0;
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && iVar0 < iParam2)
	{
		iVar0++;
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	MISC::CLEAR_AREA(Param0, 5f, true, false, false, false);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	MISC::SET_GAME_PAUSED(false);
	if (bParam4)
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
}

void func_132(bool bParam0)//Position - 0x93F45
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	if (!__LIB_0__.func_317(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113386.f_7688[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113386.f_7688[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113386.f_7688.f_764)
	{
		if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113386.f_7688.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113386.f_7688.f_919[bParam0] = iVar1;
}

int func_133(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x94FBC
{
	int iVar0;
	int iVar1;
	if (*iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = iParam0->f_123;
	if (iVar1 < 8)
	{
		iParam0->f_2[iVar1 /*15*/] = sParam1;
		iParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		iParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		iParam0->f_2[iVar1 /*15*/].f_12 = 0;
		iParam0->f_2[iVar1 /*15*/].f_13 = 0;
		iParam0->f_2[iVar1 /*15*/].f_14 = 0;
		iParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		iParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(iParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		iParam0->f_2[iVar1 /*15*/].f_14++;
		iParam0->f_123++;
		return 1;
	}
	return 0;
}

var func_134(int iParam0, int iParam1)//Position - 0x9557F
{
	var uVar0;
	var uVar1;
	__LIB_0__.func_383(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_135(bool bParam0, int iParam1, bool bParam2)//Position - 0xC5E0
{
	if (__LIB_0__.func_317(bParam0))
	{
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_95468[iParam1]), bParam0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_95468[iParam1]), bParam0);
		}
	}
}

int func_136()//Position - 0x1D552
{
	if (iLocal_175 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_175;
}

void func_137(int iParam0)//Position - 0x1E9CE
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_176 >= -1 && iLocal_177 >= -1)
	{
		while (iVar0 == iLocal_176 || iVar0 == iLocal_177)
		{
			iVar0++;
		}
	}
	else if (iLocal_176 >= -1)
	{
		if (iVar0 == iLocal_176)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
			break;
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			break;
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			break;
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			break;
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
			break;
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			break;
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
			break;
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
			break;
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
			break;
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			break;
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			break;
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
			break;
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
			break;
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
			break;
		default:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
	}
}

float func_138(int iParam0)//Position - 0x1EC01
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_162);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_162))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_162);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_162);
	return fVar0;
}

void func_139(bool bParam0)//Position - 0x12BD
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (bParam0)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_140(bool bParam0, int iParam1)//Position - 0xADA8
{
	if (__LIB_0__.func_317(bParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_6__.func_793(bParam0, iParam1));
	}
	else if (bParam0 != 145)
	{
	}
}

void func_141(int iParam0, float fParam1)//Position - 0x7C351
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam1 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0)));
		}
	}
}

int func_142(int iParam0, int iParam1)//Position - 0x86BEE
{
	return __LIB_0__.func_464(iParam1, Global_113386.f_1.f_73[iParam0 /*3*/].f_1, Global_113386.f_1.f_73[iParam0 /*3*/].f_2);
}

void func_143(int iParam0)//Position - 0x8B5E5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
		}
	}
}

void func_144(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x9169A
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER();
	while ((MISC::GET_GAME_TIMER() - iVar0) < iParam3)
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, fParam1, iParam2);
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			iVar0 = 0;
		}
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
}

void func_145(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)//Position - 0xA0E5E
{
	uParam0->f_5 = uParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = fParam8;
}

int func_146()//Position - 0xBDDC9
{
	return 2110;
}

void func_147(int* iParam0, bool bParam1)//Position - 0xBE07F
{
	if (bParam1)
	{
		MISC::SET_BIT(&(iParam0->f_13), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(iParam0->f_13), 22);
	}
}

int func_148(var uParam0, int iParam1)//Position - 0xC1A23
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
			uParam0->f_4 = __LIB_6__.func_793(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = __LIB_6__.func_793(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = __LIB_6__.func_793(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = __LIB_6__.func_793(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = __LIB_6__.func_793(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = __LIB_6__.func_793(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = __LIB_6__.func_793(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = __LIB_6__.func_793(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = __LIB_6__.func_793(2, 1);
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

void func_149()//Position - 0xCB7D3
{
	Global_112410 = 1;
}

void func_150()//Position - 0xD017F
{
	Global_112410 = 0;
}

void func_151()//Position - 0x1A5F
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_152(int iParam0, int iParam1, int iParam2)//Position - 0x2023
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (iParam2 == 0)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
	}
	bVar1 = false;
	if (Global_96671[iParam0 /*38*/].f_37 == 5)
	{
		bVar1 = true;
	}
	iVar2 = Global_96671[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_96671[iParam0 /*38*/].f_25[iVar3] == iParam1)
		{
			Global_96671[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_96671[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("HCS_PENALTY_JEWEL_DROP_MONEY"), iParam2, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("HCS_PENALTY_PALETO_DROP_MONEY"), iParam2, true);
					break;
				case 4:
					STATS::STAT_SET_INT(joaat("HCS_PENALTY_BIGS_DROP_MONEY"), iParam2, true);
					break;
			}
			break;
		case 1:
			STATS::STAT_SET_INT(joaat("HCS_PENALTY_JEWEL_DROP_MONEY"), iParam2, true);
			break;
		case 2:
			STATS::STAT_SET_INT(joaat("HCS_PENALTY_JEWEL_MADR_HOUSE"), iParam2, true);
			break;
		case 4:
			STATS::STAT_SET_INT(joaat("HCS_PENALTY_DOCKS_UNSELL_WPN"), iParam2, true);
			break;
		case 3:
			STATS::STAT_SET_INT(joaat("HCS_PENALTY_PALETO_AGENT_CUT"), iParam2, true);
			break;
		case 5:
			STATS::STAT_SET_INT(joaat("HCS_PENALTY_BIGS_SLOW_LOADING"), iParam2, true);
			break;
		case 6:
			STATS::STAT_SET_INT(joaat("HCS_PENALTY_BIGS_HOSTAGE_GIFT"), iParam2, true);
			break;
	}
	Global_96671[iParam0 /*38*/].f_25[Global_96671[iParam0 /*38*/].f_37] = iParam1;
	Global_96671[iParam0 /*38*/].f_31[Global_96671[iParam0 /*38*/].f_37] = iVar0;
	Global_96671[iParam0 /*38*/].f_37++;
}

void func_153(int iParam0)//Position - 0x2A3F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_0__.func_434(__LIB_0__.func_435(iParam0));
	iVar2 = 0;
	while (iVar2 < Global_96470[iVar1 /*19*/])
	{
		iVar0 = __LIB_11__.func_685(iParam0, iVar2);
		if (iVar0 != 0 || iVar0 != 15)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_96316[iVar0 /*5*/].f_4);
		}
		iVar2++;
	}
}

void func_154(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, struct<3> Param6, float fParam7)//Position - 0x2A44C
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, iParam2);
		PED::SET_PED_COMBAT_ABILITY(*uParam0, iParam3);
		PED::SET_PED_COMBAT_RANGE(*uParam0, iParam4);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 2, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 14, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, iParam5, true);
		PED::SET_PED_ACCURACY(*uParam0, iParam1);
		if (fParam7 != 0f)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, Param6, fParam7, false, false);
		}
	}
}

int func_155(int iParam0)//Position - 0x2A66F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 1;
	iVar2 = __LIB_0__.func_434(__LIB_0__.func_435(iParam0));
	iVar3 = 0;
	while (iVar3 < Global_96470[iVar2 /*19*/])
	{
		iVar0 = __LIB_11__.func_685(iParam0, iVar3);
		if (iVar0 != 0 || iVar0 != 15)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Global_96316[iVar0 /*5*/].f_4))
			{
				iVar1 = 0;
			}
		}
		iVar3++;
	}
	return iVar1;
}

void func_156(int iParam0)//Position - 0x2A6D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_0__.func_434(__LIB_0__.func_435(iParam0));
	iVar2 = 0;
	while (iVar2 < Global_96470[iVar1 /*19*/])
	{
		iVar0 = __LIB_11__.func_685(iParam0, iVar2);
		if (iVar0 != 0 || iVar0 != 15)
		{
			STREAMING::REQUEST_MODEL(Global_96316[iVar0 /*5*/].f_4);
		}
		iVar2++;
	}
}

int func_157(bool bParam0)//Position - 0x707B4
{
	if (!__LIB_0__.func_317(bParam0))
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_0__.func_397(bParam0));
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_158(bool bParam0)//Position - 0x707DE
{
	if (!__LIB_0__.func_317(bParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_0__.func_397(bParam0));
	}
	else if (bParam0 != 145)
	{
	}
}

void func_159()//Position - 0x70D4F
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 97 /*INPUT_VEH_CINEMATIC_DOWN_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 98 /*INPUT_VEH_CINEMATIC_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 95 /*INPUT_VEH_CINEMATIC_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 96 /*INPUT_VEH_CINEMATIC_UP_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 281 /*INPUT_VEH_MOVE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 62 /*INPUT_VEH_MOVE_DOWN_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 63 /*INPUT_VEH_MOVE_LEFT_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 64 /*INPUT_VEH_MOVE_RIGHT_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 280 /*INPUT_VEH_MOVE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 61 /*INPUT_VEH_MOVE_UP_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 93 /*INPUT_VEH_SPECIAL_ABILITY_FRANKLIN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 4 /*INPUT_LOOK_DOWN_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 3 /*INPUT_LOOK_UP_ONLY*/, true);
}

void func_160(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x7A357
{
	float fVar0;
	if (*fParam0 != fParam1)
	{
		fVar0 = fParam2;
		if (bParam3)
		{
			fVar0 = (0f + ((fParam2 * 30f) * SYSTEM::TIMESTEP()));
		}
		if ((*fParam0 - fParam1) > fVar0)
		{
			*fParam0 = (*fParam0 - fVar0);
		}
		else if ((*fParam0 - fParam1) < -fVar0)
		{
			*fParam0 = (*fParam0 + fVar0);
		}
		else
		{
			*fParam0 = fParam1;
		}
	}
}

int func_161(int iParam0)//Position - 0x9265C
{
	int iVar0;
	int iVar1;
	if ((((!PED::IS_PED_RAGDOLL(iParam0) && !TASK::IS_PED_GETTING_UP(iParam0)) && !PED::IS_PED_IN_COMBAT(iParam0, 0)) && !PED::IS_PED_RELOADING(iParam0)) && WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
		iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
		if (iVar1 != joaat("GROUP_MELEE") && iVar1 != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_162(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x9A70A
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	struct<3> Var10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	bool bVar16;
	struct<3> Var17;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		if (!uParam0->f_59)
		{
			if (uParam0->f_58)
			{
				if ((bParam4 || !PED::IS_PED_INJURED(uParam0->f_3)) && !uParam0->f_74)
				{
					if (!bParam4)
					{
						ENTITY::PROCESS_ENTITY_ATTACHMENTS(uParam0->f_3);
					}
					if (!uParam0->f_72)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_6, true) };
					}
					else
					{
						Var2 = { uParam0->f_16 };
					}
					if (!bParam4)
					{
						if (uParam0->f_56)
						{
							Var1 = { PED::GET_PED_BONE_COORDS(uParam0->f_3, 57005, 0.1f, 0.05f, 0f) };
						}
						else
						{
							if (!bParam1)
							{
								iVar9 = 60309;
							}
							else
							{
								iVar9 = 28422;
							}
							Var1 = { PED::GET_PED_BONE_COORDS(uParam0->f_3, iVar9, 0f, 0f, 0f) };
						}
						uParam0->f_19 = { Var1 };
					}
					else
					{
						Var1 = { uParam0->f_19 };
						if (Var1.f_0 < Var2.f_0)
						{
							Var1.f_0 = (Var1.f_0 + (0.05f * SYSTEM::TIMESTEP()));
							if (Var1.f_0 > Var2.f_0)
							{
								Var1.f_0 = Var2.f_0;
							}
						}
						else if (Var1.f_0 > Var2.f_0)
						{
							Var1.f_0 = (Var1.f_0 - (0.05f * SYSTEM::TIMESTEP()));
							if (Var1.f_0 < Var2.f_0)
							{
								Var1.f_0 = Var2.f_0;
							}
						}
						if (Var1.f_1 < Var2.f_1)
						{
							Var1.f_1 = (Var1.f_1 + (0.05f * SYSTEM::TIMESTEP()));
							if (Var1.f_1 > Var2.f_1)
							{
								Var1.f_1 = Var2.f_1;
							}
						}
						else if (Var1.f_1 > Var2.f_1)
						{
							Var1.f_1 = (Var1.f_1 - (0.05f * SYSTEM::TIMESTEP()));
							if (Var1.f_1 < Var2.f_1)
							{
								Var1.f_1 = Var2.f_1;
							}
						}
						uParam0->f_19 = { Var1 };
					}
					if (bParam2)
					{
						Var1 = { uParam0->f_13 };
					}
					fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var1, true);
					if (!bParam3 && !bParam4)
					{
						if (uParam0->f_90 < (uParam0->f_91 - 1))
						{
							fVar7 = (uParam0->f_31 * IntToFloat(uParam0->f_90));
							if (fVar6 > fVar7)
							{
								uParam0->f_89++;
								uParam0->f_90++;
								uParam0->f_61 = 0;
							}
						}
					}
					iVar0 = 0;
					while (iVar0 < uParam0->f_91)
					{
						if (iVar0 == 0)
						{
							PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, Var2);
						}
						else if (iVar0 <= uParam0->f_90 + 1)
						{
							fVar8 = (uParam0->f_31 * IntToFloat(iVar0));
							Var3 = { Var1 - Var2 / Vector(fVar6, fVar6, fVar6) };
							Var4 = { (Var2.f_0 + (fVar8 * Var3.f_0)), (Var2.f_1 + (fVar8 * Var3.f_1)), (Var2.f_2 + (fVar8 * Var3.f_2)) };
							if ((iVar0 != uParam0->f_90 + 1 || uParam0->f_61) || bParam3)
							{
								PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, Var4);
							}
							else
							{
								Var10 = { PHYSICS::GET_ROPE_VERTEX_COORD(uParam0->f_5, iVar0) };
								fVar11 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var10, true);
								if (fVar11 <= 0.02f)
								{
									uParam0->f_61 = 1;
									PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, Var4);
								}
								else
								{
									fVar12 = (fVar11 * 7.5f);
									if (Var4.f_0 >= Var10.f_0)
									{
										Var5.f_0 = (Var10.f_0 + (fVar12 * SYSTEM::TIMESTEP()));
										if (Var5.f_0 > Var4.f_0)
										{
											Var5.f_0 = Var4.f_0;
										}
									}
									else if (Var4.f_0 <= Var10.f_0)
									{
										Var5.f_0 = (Var10.f_0 - (fVar12 * SYSTEM::TIMESTEP()));
										if (Var5.f_0 < Var4.f_0)
										{
											Var5.f_0 = Var4.f_0;
										}
									}
									if (Var4.f_1 >= Var10.f_1)
									{
										Var5.f_1 = (Var10.f_1 + (fVar12 * SYSTEM::TIMESTEP()));
										if (Var5.f_1 > Var4.f_1)
										{
											Var5.f_1 = Var4.f_1;
										}
									}
									else if (Var4.f_1 <= Var10.f_1)
									{
										Var5.f_1 = (Var10.f_1 - (fVar12 * SYSTEM::TIMESTEP()));
										if (Var5.f_1 < Var4.f_1)
										{
											Var5.f_1 = Var4.f_1;
										}
									}
									if (Var4.f_2 >= Var10.f_2)
									{
										Var5.f_2 = (Var10.f_2 + (fVar12 * SYSTEM::TIMESTEP()));
										if (Var5.f_2 > Var4.f_2)
										{
											Var5.f_2 = Var4.f_2;
										}
									}
									else if (Var4.f_2 <= Var10.f_2)
									{
										Var5.f_2 = (Var10.f_2 - (fVar12 * SYSTEM::TIMESTEP()));
										if (Var5.f_2 < Var4.f_2)
										{
											Var5.f_2 = Var4.f_2;
										}
									}
									PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, Var5);
								}
							}
						}
						else if (!bParam3 && !bParam4)
						{
							if (iVar0 == (uParam0->f_91 - 1))
							{
								if (!uParam0->f_71)
								{
									PHYSICS::UNPIN_ROPE_VERTEX(uParam0->f_5, iVar0);
									if (MISC::GET_GAME_TIMER() >= uParam0->f_92)
									{
										Var13 = { PHYSICS::GET_ROPE_VERTEX_COORD(uParam0->f_5, iVar0) };
										Var14 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_3, Var13) };
										if (Var14.f_1 > 0.68f)
										{
											PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, Var14.f_0, 0.68f, Var14.f_2));
											uParam0->f_92 = MISC::GET_GAME_TIMER() + 50;
											uParam0->f_71 = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() >= uParam0->f_92)
								{
									PHYSICS::UNPIN_ROPE_VERTEX(uParam0->f_5, iVar0);
									uParam0->f_92 = MISC::GET_GAME_TIMER() + 1000;
									uParam0->f_71 = 0;
								}
							}
							else
							{
								PHYSICS::UNPIN_ROPE_VERTEX(uParam0->f_5, iVar0);
							}
						}
						iVar0++;
					}
				}
			}
			else
			{
				uParam0->f_58 = 1;
			}
		}
		else if (!uParam0->f_58)
		{
			__LIB_0__.func_413(uParam0);
			uParam0->f_7 = OBJECT::CREATE_OBJECT_NO_OFFSET(__LIB_0__.func_415(), PHYSICS::GET_ROPE_VERTEX_COORD(uParam0->f_5, (uParam0->f_91 - 1)), true, true, false);
			OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_7, true);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7, false, false);
			uParam0->f_58 = 1;
		}
		else
		{
			if (!uParam0->f_60)
			{
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_7))
				{
					PHYSICS::UNPIN_ROPE_VERTEX(uParam0->f_5, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_7, 3, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, true, true, false, true);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(uParam0->f_5, uParam0->f_6, uParam0->f_7, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, true), ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true), uParam0->f_30, false, false, 0, 0);
					uParam0->f_60 = 1;
				}
			}
			Var15 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_6, true) };
			bVar16 = true;
			iVar0 = 1;
			while (iVar0 <= 5)
			{
				Var17 = { PHYSICS::GET_ROPE_VERTEX_COORD(uParam0->f_5, iVar0) };
				if (Var15.f_2 - Var17.f_2) <= ((uParam0->f_31 * IntToFloat(iVar0)) * 0.7f)
				{
					bVar16 = false;
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var15, Var17, false) >= 1f)
				{
					bVar16 = false;
				}
				iVar0++;
			}
			if (bVar16)
			{
				uParam0->f_59 = 0;
			}
		}
	}
}

int func_163()//Position - 0x9C78E
{
	if (STREAMING::HAS_MODEL_LOADED(__LIB_0__.func_414()))
	{
		return 1;
	}
	return 0;
}

int func_164()//Position - 0x9C7A6
{
	if (STREAMING::HAS_MODEL_LOADED(__LIB_0__.func_415()))
	{
		return 1;
	}
	return 0;
}

void func_165(bool bParam0)//Position - 0x9C858
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_0__.func_416());
	if (bParam0)
	{
		while (!__LIB_6__.func_839())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_166(int iParam0)//Position - 0xC2808
{
	float fVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, true);
				if (bLocal_83)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

int func_167(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x2EAE
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (__LIB_12__.func_52(iParam1, "Loading", 0))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				if (bParam4)
				{
					__LIB_12__.func_51(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (__LIB_1__.func_183(*iParam0))
		{
			ENTITY::SET_ENTITY_COORDS(*iParam0, Param2, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_168(char* sParam0, bool bParam1)//Position - 0x2A09D
{
	if (!*bParam1)
	{
		__LIB_0__.func_210(sParam0, 7500, 0);
		*bParam1 = 1;
	}
}

int func_169(int iParam0)//Position - 0x9827
{
	if (!__LIB_0__.func_114() && func_100(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0, int iParam1)//Position - 0x11FEE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_171(int iParam0)//Position - 0x1961
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 12)
		{
			Global_75250[iVar0 /*9*/].f_1 = (Global_75250[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

int func_172()//Position - 0x2FF68
{
	return Global_100493.f_481;
}

bool func_173(int iParam0)//Position - 0x758E
{
	return STREAMING::HAS_MODEL_LOADED(Global_96316[iParam0 /*5*/].f_4);
}

void func_174(int iParam0)//Position - 0x78B5
{
	STREAMING::REQUEST_MODEL(Global_96316[iParam0 /*5*/].f_4);
}

void func_175(float fParam0)//Position - 0x19D40
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam0, 1f);
}

int func_176(int iParam0, int iParam1)//Position - 0x839B3
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, true))
			{
				if (iVar0 == joaat("WEAPON_STUNGUN"))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_STUNGUN"), 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_177(int iParam0, int iParam1)//Position - 0x897B7
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_113386.f_9085.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_113386.f_9085.f_99.f_205[iParam0] = iParam1;
}

int func_178(int iParam0)//Position - 0x2ED
{
	if (iParam0 > 31)
	{
		return (iParam0 - 32);
	}
	return iParam0;
}

char* func_179(bool bParam0)//Position - 0xB9A6
{
	char* sVar0;
	if (!BitTest(uLocal_49, 10))
	{
		if (iLocal_42 == 0)
		{
			sLocal_79 = "FBIPRAU";
		}
		else if (iLocal_42 == 1)
		{
			sLocal_79 = "AHFAUD";
		}
		else if (iLocal_42 == 2)
		{
			sLocal_79 = "FHFAUD";
		}
		if (iLocal_42 == 0)
		{
			if (bParam0 == 0)
			{
				sVar0 = "FBI_3_MDRPC";
			}
			else if (bParam0 == 1)
			{
				sVar0 = "FBI_3_FDRPC";
			}
			else if (bParam0 == 2)
			{
				sVar0 = "FBI_3_TDRPC";
			}
		}
		else if (iLocal_42 == 1)
		{
			if (bParam0 == 0)
			{
				sVar0 = "AH_MDRPC";
			}
			else if (bParam0 == 1)
			{
				sVar0 = "AH_FDRPC";
			}
			else if (bParam0 == 2)
			{
				sVar0 = "AH_TDRPC";
			}
		}
		else if (iLocal_42 == 2)
		{
			if (bParam0 == 0)
			{
				sVar0 = "FHP_PICKCM";
			}
			else if (bParam0 == 1)
			{
				sVar0 = "FHP_PICKCF";
			}
			else if (bParam0 == 2)
			{
				sVar0 = "FHP_PICKCT";
			}
		}
	}
	else
	{
		sLocal_79 = "FHFAUD";
		if (bParam0 == 0)
		{
			sVar0 = "FHP_MOVEM";
		}
		else if (bParam0 == 1)
		{
			sVar0 = "FHP_MOVEF";
		}
		else if (bParam0 == 2)
		{
			sVar0 = "FHP_MOVET";
		}
	}
	return sVar0;
}

int func_180(int iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x9967
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	if (!__LIB_0__.func_43(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar2 = 0;
	__LIB_0__.func_120(iParam0, &Var1, iParam1);
	iVar2 = Var1.f_0;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == iVar2 && Global_97782[iVar0] == iParam0)
				{
					if (fParam3 == -1f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_97772[iVar0], false), Param2, true) <= fParam3)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2)//Position - 0xC05A
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
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == __LIB_6__.func_853(iParam1, iParam2))
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

Vector3 func_182()//Position - 0x3D71
{
	return 1f, -0.5f, 2f;
}

Vector3 func_183()//Position - 0x3E03
{
	return -1f, -0.5f, 0f;
}

bool func_184(int iParam0, int iParam1)//Position - 0x7BC61
{
	return __LIB_0__.func_137(func_1452(iParam0), iParam1);
}

void func_185(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xFFF49
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		if (!__LIB_3__.func_118(PLAYER::PLAYER_ID(), __LIB_3__.func_103(iParam0)) && !__LIB_3__.func_118(__LIB_0__.func_582(), __LIB_3__.func_103(iParam0)))
		{
			bVar1 = false;
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__.func_264(iVar0, 1, 1) && iVar0 != PLAYER::PLAYER_ID())
				{
					if ((((__LIB_3__.func_118(iVar0, __LIB_3__.func_103(iParam0)) && __LIB_2__.func_378(iVar0, 0)) && __LIB_2__.func_378(iVar0, 1)) && __LIB_2__.func_378(iVar0, 4)) && func_3114(iVar0, 11, 1))
					{
						Var3 = { __LIB_1__.func_267(iVar0) };
						if (__LIB_0__.func_585(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "NIGHTCLUB_F_BLIP" /* GXT: Friend's Nightclub */);
							}
							else
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
				iVar2++;
			}
			if (bVar1)
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "NIGHTCLUB_R_BLIP" /* GXT: Rival's Nightclub */);
			}
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_614" /* GXT: Nightclub Property */);
		}
	}
}

int func_186(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x10CE56
{
	if (__LIB_3__.func_165() || func_3322())
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -12f, 0.3f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
			case 1:
				*uParam2 = { -11f, 1.35f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 6f, 0.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 1:
				*uParam2 = { 5f, 1.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 2:
				*uParam2 = { 5f, -0.65f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 3:
				*uParam2 = { 3f, 1.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 4:
				*uParam2 = { 3f, -0.65f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			}
	}
	return 0;
}

int func_187()//Position - 0x10D052
{
	return __LIB_4__.func_924(func_3299());
}

int func_188()//Position - 0x10D4A9
{
	return __LIB_4__.func_923(func_3335(), 1, 0);
}

Vector3 func_189(int iParam0, int iParam1, int iParam2)//Position - 0x9DDF
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_2__.func_392(iParam0, iParam2), __LIB_2__.func_391(iParam0, iParam2), func_227(iParam1, iParam2));
}

Vector3 func_190(int iParam0, int iParam1, int iParam2)//Position - 0x9F87
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_2__.func_392(iParam0, iParam2), __LIB_2__.func_391(iParam0, iParam2), func_231(iParam1, iParam2));
}

int func_191(var uParam0, var uParam1)//Position - 0xA194
{
	if ((((((((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == __LIB_0__.func_160() || BitTest(Global_1946250.f_10, 9)) || func_254(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)) || func_250(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)) || func_242(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)) || func_241()) || func_240()) || func_239() == 3) || func_238())
	{
		return 0;
	}
	return 1;
}

var func_192(var uParam0, int iParam1)//Position - 0x1D96F
{
	var uVar0;
	uVar0 = __LIB_1__.func_556(func_352(uParam0), iParam1, 0);
	return uVar0;
}

int func_193(int iParam0, int iParam1, bool bParam2)//Position - 0x2CB3B
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__.func_3() == 0)
		{
			return BitTest(__LIB_1__.func_556(func_391(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_194(int iParam0)//Position - 0x32D26
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(func_415(iParam0), -1, 0);
	return iVar0;
}

int func_195(int iParam0)//Position - 0x3DB76
{
	if ((__LIB_4__.func_738(PLAYER::PLAYER_ID()) && BitTest(Global_1946250.f_506, 31)) && iParam0 != func_172(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_196()//Position - 0x40125
{
	if (__LIB_0__.func_494() || func_649())
	{
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			return 1;
		}
	}
	return 0;
}

int func_197(int iParam0)//Position - 0x4CE14
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_1__.func_425(iParam0, 0))
		{
			if ((__LIB_3__.func_803(iParam0) == 237 && !func_726(iParam0)) || __LIB_3__.func_803(iParam0) == 238)
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0x4E044
{
	var uVar0;
	if (!__LIB_0__.func_121(iParam0) || !func_511(0))
	{
		return 0;
	}
	uVar0 = __LIB_4__.func_507(iParam0, 1, 0, 0);
	return BitTest(uVar0, __LIB_0__.func_582());
}

void func_199(var uParam0, var uParam1)//Position - 0x54741
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if ((CAM::IS_SCREEN_FADED_IN() && !__LIB_3__.func_998(PLAYER::PLAYER_ID())) && func_221() == 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 353, true);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

char* func_200(int iParam0)//Position - 0x5C480
{
	switch (iParam0)
	{
		case 0:
			switch (__LIB_2__.func_399())
			{
				case 12:
				case 13:
				case 14:
				case 15:
					return "CAR_MET_E_O_1" /* GXT: Spectate Test Track */;
					break;
				default:
					return "CAR_MET_EXT_T" /* GXT: LS Car Meet */;
					break;
			}
			break;
		case 1:
			if (!__LIB_3__.func_820() && func_1004(PLAYER::PLAYER_ID()))
			{
				return "CAR_MET_ENT_P" /* GXT: Takeover */;
			}
			break;
	}
	return "";
}

int func_201(int iParam0)//Position - 0x61D12
{
	if (iParam0 == __LIB_0__.func_160() || !func_1124(iParam0))
	{
		return 6;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_465.f_1;
}

int func_202()//Position - 0x6F470
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (__LIB_0__.func_121(iVar0))
	{
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) + 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, (iVar2 - 1), false))
			{
				iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, (iVar2 - 1), false);
				if (!PED::IS_PED_INJURED(iVar3))
				{
					if (PED::IS_PED_A_PLAYER(iVar3))
					{
						iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
						if (__LIB_1__.func_264(iVar4, 1, 1) && !func_1423(iVar4))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
	}
	return 1;
}

bool func_203(int iParam0, int iParam1)//Position - 0x7DBC5
{
	return __LIB_0__.func_137(func_1458(iParam0), iParam1);
}

int func_204()//Position - 0xA95C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__.func_160();
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_0__.func_121(iVar1))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
			if (__LIB_0__.func_121(iVar2) && PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			}
		}
	}
	if (iVar0 == __LIB_0__.func_160() && func_512(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_0__.func_582();
	}
	if (iVar0 != __LIB_0__.func_160() && PLAYER::PLAYER_ID() != iVar0)
	{
		return Global_2703735.f_402[iVar0];
	}
	return Global_2815059.f_324;
}

void func_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xB1F7C
{
	if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		if (((__LIB_0__.func_1("HIF_INTRO_HELP" /* GXT: The Music Locker ~BLIP_MUSIC_VENUE~ is a new and exclusive nightclub that has opened under The Diamond Casino & Resort. Meet Miguel Madrazo inside the club to discuss a job opportunity. */) && HUD::IS_BLIP_FLASHING(*uParam1)) || func_1846(11, 146)) || !func_1849(uParam0))
		{
			HUD::SET_BLIP_PRIORITY(*uParam1, 8);
		}
		else
		{
			HUD::SET_BLIP_PRIORITY(*uParam1, __LIB_2__.func_750(uParam0, 0));
		}
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CASINO_ENT_F6" /* GXT: The Music Locker */);
	}
}

int func_206()//Position - 0xBB68A
{
	if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__.func_206() || func_2084())
		{
			return 1;
		}
	}
	return 0;
}

bool func_207(int iParam0)//Position - 0xBE6D9
{
	return (__LIB_2__.func_376(iParam0) && func_2165(iParam0));
}

int func_208(int iParam0)//Position - 0xBEF65
{
	if (iParam0 == __LIB_0__.func_160() || !func_2186(iParam0))
	{
		return 6;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_408.f_4;
}

int func_209()//Position - 0xCCCAC
{
	if ((__LIB_11__.func_278() || !__LIB_0__.func_834(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_4523.f_1, 7))
	{
		return 0;
	}
	return 1;
}

int func_210()//Position - 0xD8D11
{
	if ((((((__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 229 || __LIB_3__.func_803(PLAYER::PLAYER_ID()) == 191) || func_2584()) || func_2583()) || __LIB_1__.func_288()) || Global_2788199.f_227 == 1) || (Global_2667225.f_1753 && func_2582(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

char* func_211(bool bParam0, int iParam1)//Position - 0xDDFF6
{
	if (bParam0)
	{
		switch (iParam1)
		{
			case 0:
				return "CASINO_ENT_F0_H" /* GXT: Enter the Casino. */;
			case 1:
				return "CASINO_ENT_F1_H" /* GXT: Enter your Penthouse. */;
			case 2:
				return "CASINO_ENT_F2_H" /* GXT: Enter your Penthouse Garage. */;
			case 3:
				return "CASINO_ENT_F3_H" /* GXT: Enter the Parking Garage. */;
			case 4:
				return "CASINO_ENT_F10E" /* GXT: Enter The Music Locker. */;
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				return "CASINO_BUY_PROP" /* GXT: Purchase the Penthouse from www.thediamondcasinoandresort.com. */;
			case 2:
				return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
			case 4:
				if (__LIB_11__.func_278())
				{
					return "CAS_CLUB_KICK2" /* GXT: You are temporarily banned from entering The Music Locker due to being thrown out. */;
				}
				else if (BitTest(Global_1946250.f_4523.f_1, 7))
				{
					return "CAS_CLUB_TMP" /* GXT: The Music Locker is currently full. Please come back later. */;
				}
				return "CASINO_ENT_F10D" /* GXT: You must own the Penthouse to access The Music Locker from here. */;
				break;
			}
	}
	return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
}

int func_212(int iParam0, int iParam1)//Position - 0xDE381
{
	if (((((((iParam1 == joaat("speedo4") || iParam1 == joaat("mule4")) || iParam1 == joaat("pounder2")) || iParam1 == __LIB_1__.func_391()) || __LIB_1__.func_177(iParam1)) || __LIB_1__.func_392(iParam1)) || func_2492(iParam1)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam1))
	{
		return 0;
	}
	return 1;
}

void func_213(int iParam0, var uParam1, int iParam2)//Position - 0xE6E33
{
	uParam1->f_22.f_69[0] = "";
	uParam1->f_22.f_69[1] = "";
	uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam1->f_22.f_79 = "Garage_Door_Close";
	uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
	uParam1->f_22.f_87 = "Garage_Door_Close";
	uParam1->f_22.f_3 = "anim@apt_trans@garage";
	uParam1->f_22.f_5 = "gar_open_1_left";
	uParam1->f_22.f_34 = 0f;
	uParam1->f_22.f_35 = 0.45f;
	uParam1->f_22.f_4 = "";
	uParam1->f_22.f_6 = "";
	uParam1->f_22.f_40 = 0.1f;
	uParam1->f_22.f_59 = { -305.6156f, -1811.623f, 43.7338f };
	uParam1->f_22.f_62 = { -3.1585f, 0f, 167.2231f };
	uParam1->f_22.f_65 = 52.1727f;
	uParam1->f_22.f_66 = 0.2f;
	switch (iParam2)
	{
		case 0:
			uParam1->f_22.f_13 = { -360.5857f, -1866.0913f, 21.5786f };
			uParam1->f_22.f_16 = { -2.5741f, -0.0486f, 156.2227f };
			uParam1->f_22.f_19 = 44.2101f;
			uParam1->f_22.f_20 = { 0f, 0f, 0f };
			uParam1->f_22.f_23 = { 0f, 0f, 0f };
			uParam1->f_22.f_26 = 0f;
			uParam1->f_22.f_28 = { -364.237f, -1874.903f, 19.51f };
			uParam1->f_22.f_31 = { 0f, 0f, -56.25f };
			break;
		case 1:
			uParam1->f_22.f_13 = { -372.5756f, -1867.3385f, 23.6148f };
			uParam1->f_22.f_16 = { -11.1339f, -0.0009f, 164.4299f };
			uParam1->f_22.f_19 = 41.4256f;
			uParam1->f_22.f_20 = { 0f, 0f, 0f };
			uParam1->f_22.f_23 = { 0f, 0f, 0f };
			uParam1->f_22.f_26 = 0f;
			uParam1->f_22.f_28 = { -375.853f, -1878.3f, 19.528f };
			uParam1->f_22.f_31 = { 0f, 0f, -47f };
			break;
		case 2:
			uParam1->f_22.f_13 = { -385.7779f, -1868.6774f, 23.7628f };
			uParam1->f_22.f_16 = { -11.0499f, -0.0187f, 173.4695f };
			uParam1->f_22.f_19 = 36.5515f;
			uParam1->f_22.f_20 = { 0f, 0f, 0f };
			uParam1->f_22.f_23 = { 0f, 0f, 0f };
			uParam1->f_22.f_26 = 0f;
			uParam1->f_22.f_28 = { -387.012f, -1883.659f, 19.525f };
			uParam1->f_22.f_31 = { 0f, 0f, -40f };
			break;
		case 6:
		case 7:
			if (__LIB_3__.func_16(PLAYER::PLAYER_ID(), __LIB_3__.func_17(iParam0)) && (!func_2876() || iParam2 == 7))
			{
				uParam1->f_22.f_13 = { -397.58f, -1887.553f, 22.2998f };
				uParam1->f_22.f_16 = { -1.429f, -0.0057f, 5.8277f };
				uParam1->f_22.f_19 = 45.8457f;
				uParam1->f_22.f_40 = 0.1f;
				uParam1->f_22.f_20 = { -397.6456f, -1887.5483f, 22.2994f };
				uParam1->f_22.f_23 = { -1.429f, -0.0057f, 13.3423f };
				uParam1->f_22.f_26 = 45.8457f;
				uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
				uParam1->f_22.f_28 = { -399.731f, -1885.762f, 20.721f };
				uParam1->f_22.f_31 = { 0f, 0f, -56.5f };
				uParam1->f_22.f_5 = "ext_player";
				uParam1->f_22.f_34 = 0.1f;
				uParam1->f_22.f_35 = 0.4f;
				uParam1->f_22.f_69[0] = "GENERIC_DOOR_PUSH";
				uParam1->f_22.f_69[1] = "GENERIC_DOOR_LIMIT";
				uParam1->f_22.f_72[0] = 0.251f;
				uParam1->f_22.f_72[1] = 0.35f;
				uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
				uParam1->f_22.f_80 = "";
				uParam1->f_22.f_79 = "";
				uParam1->f_22.f_88 = "";
				uParam1->f_22.f_87 = "";
				uParam1->f_22.f_4 = "";
				uParam1->f_22.f_6 = "";
			}
			else
			{
				uParam1->f_22.f_13 = { -394.8493f, -1886.1761f, 21.789f };
				uParam1->f_22.f_16 = { -0.9744f, 0f, 74.5255f };
				uParam1->f_22.f_19 = 50f;
				uParam1->f_22.f_40 = 0.1f;
				uParam1->f_22.f_20 = { -395.4853f, -1886.0001f, 21.7778f };
				uParam1->f_22.f_23 = { -0.9744f, 0f, 76.6543f };
				uParam1->f_22.f_26 = 50f;
				uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
				uParam1->f_22.f_28 = { -400.079f, -1884.535f, 20.532f };
				uParam1->f_22.f_31 = { 0f, 0f, 109.75f };
				uParam1->f_22.f_5 = "buzz_short";
				uParam1->f_22.f_34 = 0.2f;
				uParam1->f_22.f_35 = 0.8f;
				uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
				uParam1->f_22.f_72[0] = 0.353f;
				uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
				uParam1->f_22.f_80 = "";
				uParam1->f_22.f_79 = "";
				uParam1->f_22.f_88 = "";
				uParam1->f_22.f_87 = "";
				if (__LIB_0__.func_308(PLAYER::PLAYER_ID()))
				{
					uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
					uParam1->f_22.f_6 = "enter";
				}
				else
				{
					uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
					uParam1->f_22.f_6 = "enter";
				}
			}
			break;
	}
}

void func_214(var uParam0, var uParam1)//Position - 0x100C7A
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
	if (((__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_3__.func_998(PLAYER::PLAYER_ID())) && func_221() > 0)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 353, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
	}
	if (Global_262145.f_24266 /* Tunable: -298441869 */)
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 14);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

void func_215(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x101CF0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		if (!__LIB_3__.func_118(PLAYER::PLAYER_ID(), __LIB_3__.func_103(iParam0)) && !__LIB_3__.func_118(__LIB_0__.func_582(), __LIB_3__.func_103(iParam0)))
		{
			bVar1 = false;
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__.func_264(iVar0, 1, 1) && iVar0 != PLAYER::PLAYER_ID())
				{
					if ((((__LIB_3__.func_118(iVar0, __LIB_3__.func_103(iParam0)) && __LIB_2__.func_378(iVar0, 0)) && __LIB_2__.func_378(iVar0, 1)) && __LIB_2__.func_378(iVar0, 4)) && func_3111(iVar0, 11, 1))
					{
						Var3 = { __LIB_1__.func_267(iVar0) };
						if (__LIB_0__.func_585(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "NIGHTCLUB_F_BLIP" /* GXT: Friend's Nightclub */);
							}
							else
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
				iVar2++;
			}
			if (bVar1)
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "NIGHTCLUB_R_BLIP" /* GXT: Rival's Nightclub */);
			}
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_614" /* GXT: Nightclub Property */);
		}
	}
}

bool func_216()//Position - 0x106650
{
	return __LIB_1__.func_556(func_3198(0), -1, 0) >= 3;
}

int func_217(int iParam0, int iParam1)//Position - 0x1070C7
{
	int iVar0;
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__.func_118(iParam0, __LIB_3__.func_103(iParam1)) && !func_512(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 30))
		{
			if (__LIB_1__.func_425(iParam0, 0))
			{
				iVar0 = __LIB_3__.func_803(iParam0);
				switch (iVar0)
				{
					case 192:
					case 190:
					case 167:
					case 168:
					case 178:
					case 188:
					case 225:
					case 226:
					case 229:
					case 230:
					case 233:
						return 0;
					}
				default:
			}
			return 1;
		}
	}
	return 0;
}

int func_218(int iParam0)//Position - 0x10CCB2
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__.func_103(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = __LIB_2__.func_191(PLAYER::PLAYER_ID());
	if (iVar1 != __LIB_0__.func_160())
	{
		if (__LIB_3__.func_118(iVar1, iVar0))
		{
			if (__LIB_1__.func_425(iVar1, 0))
			{
				if ((((__LIB_3__.func_803(iVar1) == 237 && !func_726(iVar1)) && func_430(iVar1)) || (__LIB_3__.func_803(iVar1) == 238 && func_430(iVar1))) || (PLAYER::PLAYER_ID() != iVar1 && (!func_49(iVar1) || __LIB_0__.func_338(iVar1) == 0)))
				{
					return 1;
				}
			}
			return 0;
		}
		return 1;
	}
	if (__LIB_3__.func_118(PLAYER::PLAYER_ID(), iVar0))
	{
		return 0;
	}
	return 1;
}

int func_219(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x10EA1D
{
	if (__LIB_3__.func_165() || func_3319())
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -12f, 0.3f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
			case 1:
				*uParam2 = { -11f, 1.35f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 6f, 0.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 1:
				*uParam2 = { 5f, 1.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 2:
				*uParam2 = { 5f, -0.65f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 3:
				*uParam2 = { 3f, 1.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 4:
				*uParam2 = { 3f, -0.65f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			}
	}
	return 0;
}

int func_220()//Position - 0x10EC19
{
	return __LIB_4__.func_924(func_3296());
}

int func_221()//Position - 0x10F06F
{
	return __LIB_4__.func_923(func_3332(), 1, 0);
}

int func_222(int iParam0, int iParam1)//Position - 0x1257FF
{
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__.func_274(iParam0, __LIB_0__.func_631(iParam1)) && !func_512(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 30))
		{
			if (__LIB_1__.func_425(iParam0, 0))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_223()//Position - 0x12868E
{
	if (((((((((__LIB_0__.func_663() || __LIB_1__.func_240()) || __LIB_1__.func_239()) || __LIB_0__.func_706()) || (__LIB_1__.func_307() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_3618() && !func_3617())) || Global_2656879) || Global_2656879.f_1 != 0) || Global_2656953 != 0) || (__LIB_0__.func_902() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_224()//Position - 0x128733
{
	if (__LIB_0__.func_494() || func_3619())
	{
		return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8;
	}
	return 0;
}

int func_225(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5)//Position - 0x12B1F3
{
	if ((__LIB_3__.func_165() || func_3692()) || __LIB_3__.func_184())
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -12f, 0.3f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
			case 1:
				*uParam2 = { -11f, 1.35f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
		}
	}
	else if ((!bParam4 || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2"))) && __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0) != -1)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0))))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 7.6212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 1:
				*uParam2 = { 7.6212f, -1.1362f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 2:
				*uParam2 = { 6.1212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 3:
				*uParam2 = { 6.1212f, -1.2358f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 4:
				*uParam2 = { 4.6212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 5:
				*uParam2 = { 3.6212f, -1.3359f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 6:
				*uParam2 = { 3.1212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 7:
				*uParam2 = { 1.4212f, -1.1362f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 8:
				*uParam2 = { 1.4212f, 2.2642f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 9:
				*uParam2 = { 0.5212f, 1.2642f, 0.8149f };
				*uParam3 = 90f;
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 5.251f, 0.4458f, 0.1f };
				*uParam3 = 90f;
				return 1;
				break;
			}
	}
	return 0;
}

int func_226(bool bParam0, var uParam1)//Position - 0x12C128
{
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__.func_330(bParam0) && !func_512(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 31))
		{
			if (__LIB_1__.func_425(bParam0, 0))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_227(bool bParam0, int iParam1)//Position - 0x139DEF
{
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__.func_397(bParam0, __LIB_0__.func_625(iParam1)) && !func_512(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 30))
		{
			if (__LIB_1__.func_425(bParam0, 0))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x158CF9
{
	if (__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 225 && (__LIB_2__.func_234(PLAYER::PLAYER_ID()) != 0 && !func_4316(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_229()//Position - 0x15A3BB
{
	if (Global_262145.f_32663 /* Tunable: DISABLE_SIMEON_SHOWROOM */)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 236 && func_4350(PLAYER::PLAYER_ID()) == 8)
	{
		return 1;
	}
	if (__LIB_4__.func_735(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0)//Position - 0x1643CC
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 42:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 0))
			{
				return 1;
			}
			break;
		case 43:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 1))
			{
				return 1;
			}
			break;
		case 44:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 2))
			{
				return 1;
			}
			break;
		case 45:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 3))
			{
				return 1;
			}
			break;
		case 46:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 4))
			{
				return 1;
			}
			break;
		case 47:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 5))
			{
				return 1;
			}
			break;
		case 48:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 6))
			{
				return 1;
			}
			break;
		case 49:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 7))
			{
				return 1;
			}
			break;
		case 50:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 8))
			{
				return 1;
			}
			break;
		case 51:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 9))
			{
				return 1;
			}
			break;
		case 52:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 10))
			{
				return 1;
			}
			break;
		case 53:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 11))
			{
				return 1;
			}
			break;
		case 54:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 12))
			{
				return 1;
			}
			break;
		case 55:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 13))
			{
				return 1;
			}
			break;
		case 56:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 14))
			{
				return 1;
			}
			break;
		case 57:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 15))
			{
				return 1;
			}
			break;
		case 58:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 16))
			{
				return 1;
			}
			break;
		case 59:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 17))
			{
				return 1;
			}
			break;
		case 98:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 18))
			{
				return 1;
			}
			break;
		case 99:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 19))
			{
				return 1;
			}
			break;
		case 100:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 20))
			{
				return 1;
			}
			break;
		case 112:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 21))
			{
				return 1;
			}
			break;
		case 113:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 22))
			{
				return 1;
			}
			break;
		case 114:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 23))
			{
				return 1;
			}
			break;
		case 115:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 24) || func_4423(PLAYER::PLAYER_ID(), 24))
			{
				return 1;
			}
			break;
		case 119:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 27))
			{
				return 1;
			}
			break;
		case 144:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 42))
			{
				return 1;
			}
			break;
		case 116:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 25))
			{
				return 1;
			}
			break;
		case 136:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 34))
			{
				return 1;
			}
			break;
		case 118:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 26))
			{
				return 1;
			}
			break;
		case 120:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 28))
			{
				return 1;
			}
			break;
		case 121:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 29))
			{
				return 1;
			}
			break;
		case 126:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 30))
			{
				return 1;
			}
			break;
		case 127:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 31))
			{
				return 1;
			}
			break;
		case 134:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 32))
			{
				return 1;
			}
			break;
		case 135:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 33))
			{
				return 1;
			}
			break;
		case 137:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 35))
			{
				return 1;
			}
			break;
		case 138:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 36))
			{
				return 1;
			}
			break;
		case 139:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 37))
			{
				return 1;
			}
			break;
		case 140:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 38))
			{
				return 1;
			}
			break;
		case 141:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 39))
			{
				return 1;
			}
			break;
		case 142:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 40))
			{
				return 1;
			}
			break;
		case 143:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 41))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_231()//Position - 0x19582D
{
	if ((((((__LIB_0__.func_633() || func_5122()) || __LIB_0__.func_175()) || __LIB_0__.func_725()) || __LIB_0__.func_490()) || func_1471()) || func_5120())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

void func_232(var uParam0)//Position - 0x1983FE
{
	struct<13> Var0;
	struct<35> Var1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	__LIB_6__.func_242(&sVar2, &sVar3);
	iVar4 = __LIB_0__.func_160();
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__.func_727()))
	{
		iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_0__.func_727());
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_TEXT");
	switch (Global_1853348[PLAYER::PLAYER_ID() /*834*/])
	{
		case 1:
		case 2:
		case 3:
		case 0:
		case 8:
			__LIB_0__.func_478(func_5190(Global_1853348[PLAYER::PLAYER_ID() /*834*/]));
			__LIB_0__.func_514(&(Global_4718592.f_116531));
			break;
		default:
			__LIB_0__.func_478("SPC_TXT_DFLT" /* GXT: GTA Online */);
			__LIB_0__.func_478("");
			break;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "CLEAR_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (iVar4 != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		__LIB_6__.func_241("MPTV_TICK0" /* GXT: Suspect identified as known criminal going by the streetname "~a~". */, PLAYER::GET_PLAYER_NAME(iVar4));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
		Var0 = { __LIB_1__.func_267(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_0__.func_727())) };
		if (__LIB_0__.func_797(&Var0))
		{
			Var1 = { __LIB_5__.func_104(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_0__.func_727())) };
			__LIB_6__.func_239("MPTV_TICK1" /* GXT: Suspect thought to be affiliated with gangland outfit "~a~". */, __LIB_6__.func_240(&Var0, &Var1));
		}
		else
		{
			__LIB_0__.func_478("MPTV_TICK2" /* GXT: Efforts to identify the suspect's known gangland affiliations have so far been unsuccessful. */);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
	__LIB_0__.func_478(&sVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
	__LIB_0__.func_478(&sVar3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (!BitTest(Global_2621446, 18))
	{
		HUD::DISPLAY_RADAR(false);
	}
	uParam0->f_47.f_1454 = 0f;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_47.f_1454);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	uParam0->f_47.f_1453 = NETWORK::GET_NETWORK_TIME();
	__LIB_6__.func_238();
}

void func_233(int iParam0)//Position - 0x1988F8
{
	if ((__LIB_6__.func_338() == 1 && func_5438() != 3) || iParam0)
	{
		if (NETWORK::NETWORK_CAN_BAIL())
		{
			if (__LIB_6__.func_154() && !func_26(PLAYER::PLAYER_ID()))
			{
				__LIB_6__.func_546(2);
			}
			else
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				MISC::SET_BIT(&(Global_2621446.f_1), 0);
				NETWORK::NETWORK_BAIL(15, 0, 0);
			}
		}
	}
}

float func_234(int* iParam0, var uParam1, int iParam2)//Position - 0x1B5F6A
{
	if ((((((((!__LIB_4__.func_710(uParam1->f_31) && !__LIB_1__.func_188(uParam1->f_31)) && !__LIB_0__.func_630(uParam1->f_31, -1)) && !func_69(uParam1->f_31, 0, 0)) && !func_12(PLAYER::PLAYER_ID())) && !func_9(PLAYER::PLAYER_ID())) && !iParam0->f_2481) && !iParam0->f_2482) && !iParam0->f_2483)
	{
		switch (uParam1->f_33)
		{
			case 2:
				switch (iParam2)
				{
					case 0:
						return 1.5f;
						break;
					case 1:
						return 1.5f;
						break;
					case 2:
						return 1.5f;
						break;
					case 3:
						return 1.5f;
						break;
				}
				break;
			case 6:
				switch (iParam2)
				{
					case 0:
						return 1.5f;
						break;
					case 1:
						return 1.5f;
						break;
					case 2:
						return 1.5f;
						break;
					case 3:
						return 1.5f;
						break;
				}
				break;
			case 10:
				switch (iParam2)
				{
					case 0:
						return 1f;
						break;
					case 1:
						return 1f;
						break;
					case 2:
						return 1f;
						break;
					case 3:
						return 1f;
						break;
					case 4:
						return 1f;
						break;
					case 5:
						return 1f;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				return 1f;
				break;
			case 1:
				return 1f;
				break;
			case 2:
				return 1f;
				break;
			case 3:
				return 1f;
				break;
			case 4:
				return 1f;
				break;
			case 5:
				return 1f;
				break;
			case 6:
				return 1f;
				break;
			}
	}
	return 0f;
}

int func_235(var uParam0)//Position - 0x1BB4BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = PLAYER::PLAYER_ID();
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((((iVar1 != __LIB_0__.func_160() && PLAYER::PLAYER_ID() != iVar1) && __LIB_1__.func_264(iVar1, 1, 1)) && BitTest(Global_1892703[iVar1 /*599*/].f_3, 0)) && ((func_5531(PLAYER::PLAYER_ID()) && Global_1853348[iVar1 /*834*/].f_267.f_33 == Global_1853348[iVar2 /*834*/].f_267.f_33) || func_5479(iVar1, PLAYER::PLAYER_ID(), 1)))
		{
			bVar3 = BitTest(Global_1892703[iVar1 /*599*/].f_3, 4);
			if (!bVar3)
			{
				*uParam0++;
			}
			if (iVar0 < iVar2 && bVar3)
			{
				return 0;
			}
			else if (BitTest(Global_1892703[iVar1 /*599*/].f_3, 1))
			{
				if (!__LIB_0__.func_649(&(Global_1931419.f_2)) || __LIB_2__.func_47(&(Global_1931419.f_2), 500, 0))
				{
					iVar4 = 1;
				}
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_236(int iParam0)//Position - 0x1BCF99
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		default:
	}
	return 0;
}

int func_237(var uParam0, int iParam1)//Position - 0x1BCFDB
{
	if (uParam0->f_16[iParam1 /*14*/].f_13 == 5)
	{
		return 1;
	}
	return 0;
}

float func_238(int iParam0, float fParam1)//Position - 0x1BDA53
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 5:
			return fParam1;
		case 4:
		case 3:
			return (fParam1 - 180f);
		default:
	}
	return fParam1;
}

Vector3 func_239(int iParam0, int iParam1, int iParam2)//Position - 0xA15D
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_2__.func_392(iParam0, iParam2), __LIB_2__.func_391(iParam0, iParam2), func_234(iParam1, iParam2));
}

int func_240(int iParam0)//Position - 0xBEFAE
{
	if (iParam0 == __LIB_0__.func_160() || !func_2189(iParam0))
	{
		return 6;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_408.f_4;
}

int func_241()//Position - 0xD8D5A
{
	if ((((((__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 229 || __LIB_3__.func_803(PLAYER::PLAYER_ID()) == 191) || func_2587()) || func_2586()) || __LIB_1__.func_288()) || Global_2788199.f_227 == 1) || (Global_2667225.f_1753 && func_2585(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_242(int iParam0)//Position - 0xDE21E
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return __LIB_0__.func_834(PLAYER::PLAYER_ID());
		case 2:
			return __LIB_0__.func_833(PLAYER::PLAYER_ID());
		case 3:
			return 1;
		case 4:
			return __LIB_12__.func_209();
		default:
	}
	return 0;
}

int func_243(int iParam0, int iParam1)//Position - 0xDE3FB
{
	if (((((((iParam1 == joaat("speedo4") || iParam1 == joaat("mule4")) || iParam1 == joaat("pounder2")) || iParam1 == __LIB_1__.func_391()) || __LIB_1__.func_177(iParam1)) || __LIB_1__.func_392(iParam1)) || func_2495(iParam1)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam1))
	{
		return 0;
	}
	return 1;
}

int func_244()//Position - 0x12868E
{
	if (((((((((__LIB_0__.func_663() || __LIB_1__.func_240()) || __LIB_1__.func_239()) || __LIB_0__.func_706()) || (__LIB_1__.func_307() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_3621() && !func_3620())) || Global_2656879) || Global_2656879.f_1 != 0) || Global_2656953 != 0) || (__LIB_0__.func_902() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_245()//Position - 0x128733
{
	if (__LIB_0__.func_494() || func_3622())
	{
		return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8;
	}
	return 0;
}

int func_246(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5)//Position - 0x12B1F3
{
	if ((__LIB_3__.func_165() || func_3695()) || __LIB_3__.func_184())
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -12f, 0.3f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
			case 1:
				*uParam2 = { -11f, 1.35f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
		}
	}
	else if ((!bParam4 || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2"))) && __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0) != -1)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0))))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 7.6212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 1:
				*uParam2 = { 7.6212f, -1.1362f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 2:
				*uParam2 = { 6.1212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 3:
				*uParam2 = { 6.1212f, -1.2358f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 4:
				*uParam2 = { 4.6212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 5:
				*uParam2 = { 3.6212f, -1.3359f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 6:
				*uParam2 = { 3.1212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 7:
				*uParam2 = { 1.4212f, -1.1362f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 8:
				*uParam2 = { 1.4212f, 2.2642f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 9:
				*uParam2 = { 0.5212f, 1.2642f, 0.8149f };
				*uParam3 = 90f;
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 5.251f, 0.4458f, 0.1f };
				*uParam3 = 90f;
				return 1;
				break;
			}
	}
	return 0;
}

int func_247(int iParam0, var uParam1)//Position - 0x13D92C
{
	if (PLAYER::PLAYER_ID() == __LIB_12__.func_188())
	{
		if (Global_1946250.f_3280 == -1)
		{
			if (BitTest(Global_1946250.f_506, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_248(int iParam0)//Position - 0x158CF9
{
	if (__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 225 && (__LIB_2__.func_234(PLAYER::PLAYER_ID()) != 0 && !func_4319(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_249()//Position - 0x15A3BB
{
	if (Global_262145.f_32663 /* Tunable: DISABLE_SIMEON_SHOWROOM */)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 236 && func_4353(PLAYER::PLAYER_ID()) == 8)
	{
		return 1;
	}
	if (__LIB_4__.func_735(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0x1643CC
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 42:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 0))
			{
				return 1;
			}
			break;
		case 43:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 1))
			{
				return 1;
			}
			break;
		case 44:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 2))
			{
				return 1;
			}
			break;
		case 45:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 3))
			{
				return 1;
			}
			break;
		case 46:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 4))
			{
				return 1;
			}
			break;
		case 47:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 5))
			{
				return 1;
			}
			break;
		case 48:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 6))
			{
				return 1;
			}
			break;
		case 49:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 7))
			{
				return 1;
			}
			break;
		case 50:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 8))
			{
				return 1;
			}
			break;
		case 51:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 9))
			{
				return 1;
			}
			break;
		case 52:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 10))
			{
				return 1;
			}
			break;
		case 53:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 11))
			{
				return 1;
			}
			break;
		case 54:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 12))
			{
				return 1;
			}
			break;
		case 55:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 13))
			{
				return 1;
			}
			break;
		case 56:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 14))
			{
				return 1;
			}
			break;
		case 57:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 15))
			{
				return 1;
			}
			break;
		case 58:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 16))
			{
				return 1;
			}
			break;
		case 59:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 17))
			{
				return 1;
			}
			break;
		case 98:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 18))
			{
				return 1;
			}
			break;
		case 99:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 19))
			{
				return 1;
			}
			break;
		case 100:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 20))
			{
				return 1;
			}
			break;
		case 112:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 21))
			{
				return 1;
			}
			break;
		case 113:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 22))
			{
				return 1;
			}
			break;
		case 114:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 23))
			{
				return 1;
			}
			break;
		case 115:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 24) || func_4426(PLAYER::PLAYER_ID(), 24))
			{
				return 1;
			}
			break;
		case 119:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 27))
			{
				return 1;
			}
			break;
		case 144:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 42))
			{
				return 1;
			}
			break;
		case 116:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 25))
			{
				return 1;
			}
			break;
		case 136:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 34))
			{
				return 1;
			}
			break;
		case 118:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 26))
			{
				return 1;
			}
			break;
		case 120:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 28))
			{
				return 1;
			}
			break;
		case 121:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 29))
			{
				return 1;
			}
			break;
		case 126:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 30))
			{
				return 1;
			}
			break;
		case 127:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 31))
			{
				return 1;
			}
			break;
		case 134:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 32))
			{
				return 1;
			}
			break;
		case 135:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 33))
			{
				return 1;
			}
			break;
		case 137:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 35))
			{
				return 1;
			}
			break;
		case 138:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 36))
			{
				return 1;
			}
			break;
		case 139:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 37))
			{
				return 1;
			}
			break;
		case 140:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 38))
			{
				return 1;
			}
			break;
		case 141:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 39))
			{
				return 1;
			}
			break;
		case 142:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 40))
			{
				return 1;
			}
			break;
		case 143:
			if (__LIB_2__.func_319(&(Global_1951109.f_45), 41))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_251(var uParam0)//Position - 0x1983FE
{
	struct<13> Var0;
	struct<35> Var1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	__LIB_6__.func_242(&sVar2, &sVar3);
	iVar4 = __LIB_0__.func_160();
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__.func_727()))
	{
		iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_0__.func_727());
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_TEXT");
	switch (Global_1853348[PLAYER::PLAYER_ID() /*834*/])
	{
		case 1:
		case 2:
		case 3:
		case 0:
		case 8:
			__LIB_0__.func_478(func_5193(Global_1853348[PLAYER::PLAYER_ID() /*834*/]));
			__LIB_0__.func_514(&(Global_4718592.f_116531));
			break;
		default:
			__LIB_0__.func_478("SPC_TXT_DFLT" /* GXT: GTA Online */);
			__LIB_0__.func_478("");
			break;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "CLEAR_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (iVar4 != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		__LIB_6__.func_241("MPTV_TICK0" /* GXT: Suspect identified as known criminal going by the streetname "~a~". */, PLAYER::GET_PLAYER_NAME(iVar4));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
		Var0 = { __LIB_1__.func_267(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_0__.func_727())) };
		if (__LIB_0__.func_797(&Var0))
		{
			Var1 = { __LIB_5__.func_104(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_0__.func_727())) };
			__LIB_6__.func_239("MPTV_TICK1" /* GXT: Suspect thought to be affiliated with gangland outfit "~a~". */, __LIB_6__.func_240(&Var0, &Var1));
		}
		else
		{
			__LIB_0__.func_478("MPTV_TICK2" /* GXT: Efforts to identify the suspect's known gangland affiliations have so far been unsuccessful. */);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
	__LIB_0__.func_478(&sVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
	__LIB_0__.func_478(&sVar3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (!BitTest(Global_2621446, 18))
	{
		HUD::DISPLAY_RADAR(false);
	}
	uParam0->f_47.f_1454 = 0f;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_47.f_1454);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	uParam0->f_47.f_1453 = NETWORK::GET_NETWORK_TIME();
	__LIB_6__.func_238();
}

void func_252(int iParam0)//Position - 0x1988F8
{
	if ((__LIB_6__.func_338() == 1 && func_5441() != 3) || iParam0)
	{
		if (NETWORK::NETWORK_CAN_BAIL())
		{
			if (__LIB_6__.func_154() && !func_26(PLAYER::PLAYER_ID()))
			{
				__LIB_6__.func_546(2);
			}
			else
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				MISC::SET_BIT(&(Global_2621446.f_1), 0);
				NETWORK::NETWORK_BAIL(15, 0, 0);
			}
		}
	}
}

int func_253(var uParam0)//Position - 0x1BB380
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = PLAYER::PLAYER_ID();
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((((iVar1 != __LIB_0__.func_160() && PLAYER::PLAYER_ID() != iVar1) && __LIB_1__.func_264(iVar1, 1, 1)) && BitTest(Global_1892703[iVar1 /*599*/].f_3, 0)) && ((func_5529(PLAYER::PLAYER_ID()) && Global_1853348[iVar1 /*834*/].f_267.f_33 == Global_1853348[iVar2 /*834*/].f_267.f_33) || func_5479(iVar1, PLAYER::PLAYER_ID(), 1)))
		{
			bVar3 = BitTest(Global_1892703[iVar1 /*599*/].f_3, 4);
			if (!bVar3)
			{
				*uParam0++;
			}
			if (iVar0 < iVar2 && bVar3)
			{
				return 0;
			}
			else if (BitTest(Global_1892703[iVar1 /*599*/].f_3, 1))
			{
				if (!__LIB_0__.func_649(&(Global_1931419.f_2)) || __LIB_2__.func_47(&(Global_1931419.f_2), 500, 0))
				{
					iVar4 = 1;
				}
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_254()//Position - 0x13B
{
	Global_100480 = 1;
}

void func_255(int iParam0, char* sParam1)//Position - 0x1112
{
	char cVar0[64];
	IntToString(sParam1, Global_78588.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, __LIB_10__.func_827(iParam0), 64);
	IntToString(&cVar0, Global_78588.f_4824[Global_78588.f_6825[iParam0 /*3*/].f_2 /*11*/], 64);
	StringIntConCat(&cVar0, Global_78588.f_4824[Global_78588.f_6825[iParam0 /*3*/].f_2 /*11*/].f_1, 64);
	StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
	IntToString(&cVar0, Global_78588.f_4824[Global_78588.f_6825[iParam0 /*3*/].f_2 /*11*/].f_2, 64);
	StringIntConCat(&cVar0, Global_78588.f_4824[Global_78588.f_6825[iParam0 /*3*/].f_2 /*11*/].f_3, 64);
	StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
	IntToString(&cVar0, Global_78588.f_4824[Global_78588.f_6825[iParam0 /*3*/].f_2 /*11*/].f_4, 64);
	StringIntConCat(&cVar0, Global_78588.f_4824[Global_78588.f_6825[iParam0 /*3*/].f_2 /*11*/].f_5, 64);
	StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
	IntToString(&cVar0, Global_78588.f_4824[Global_78588.f_6825[iParam0 /*3*/].f_2 /*11*/].f_6, 64);
	StringIntConCat(&cVar0, Global_78588.f_4824[Global_78588.f_6825[iParam0 /*3*/].f_2 /*11*/].f_7, 64);
	StringIntConCat(&cVar0, Global_78588.f_4824[Global_78588.f_6825[iParam0 /*3*/].f_2 /*11*/].f_8, 64);
	StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
}

void func_256(int iParam0, char* sParam1)//Position - 0x1255
{
	char cVar0[64];
	IntToString(sParam1, Global_78588.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, __LIB_10__.func_827(iParam0), 64);
	MemCopy(&cVar0, {Global_78588.f_4160[Global_78588.f_6825[iParam0 /*3*/].f_2 /*12*/]}, 16);
	StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
	IntToString(&cVar0, Global_78588.f_4160[Global_78588.f_6825[iParam0 /*3*/].f_2 /*12*/].f_8, 64);
	StringIntConCat(&cVar0, Global_78588.f_4160[Global_78588.f_6825[iParam0 /*3*/].f_2 /*12*/].f_9, 64);
	StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
	IntToString(&cVar0, Global_78588.f_4160[Global_78588.f_6825[iParam0 /*3*/].f_2 /*12*/].f_10, 64);
	StringIntConCat(&cVar0, Global_78588.f_4160[Global_78588.f_6825[iParam0 /*3*/].f_2 /*12*/].f_11, 64);
	StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
}

void func_257(int iParam0, char* sParam1)//Position - 0x1323
{
	IntToString(sParam1, Global_78588.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, __LIB_10__.func_827(iParam0), 64);
	StringConCat(sParam1, &(Global_78588.f_4151[Global_78588.f_6825[iParam0 /*3*/].f_2 /*8*/]), 64);
}

void func_258(int iParam0, char* sParam1)//Position - 0x135E
{
	IntToString(sParam1, Global_78588.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, __LIB_10__.func_827(iParam0), 64);
	StringIntConCat(sParam1, Global_78588.f_3590[Global_78588.f_6825[iParam0 /*3*/].f_2 /*2*/], 64);
	StringIntConCat(sParam1, Global_78588.f_3590[Global_78588.f_6825[iParam0 /*3*/].f_2 /*2*/].f_1, 64);
}

void func_259(int iParam0, char* sParam1)//Position - 0x13B5
{
	char cVar0[64];
	IntToString(sParam1, Global_78588.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, __LIB_10__.func_827(iParam0), 64);
	IntToString(&cVar0, Global_78588.f_109[Global_78588.f_6825[iParam0 /*3*/].f_2 /*4*/], 64);
	StringIntConCat(&cVar0, Global_78588.f_109[Global_78588.f_6825[iParam0 /*3*/].f_2 /*4*/].f_1, 64);
	StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
	IntToString(&cVar0, Global_78588.f_109[Global_78588.f_6825[iParam0 /*3*/].f_2 /*4*/].f_2, 64);
	StringIntConCat(&cVar0, Global_78588.f_109[Global_78588.f_6825[iParam0 /*3*/].f_2 /*4*/].f_3, 64);
	StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
}

void func_260(int iParam0, char* sParam1)//Position - 0x1454
{
	IntToString(sParam1, Global_78588.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, __LIB_10__.func_827(iParam0), 64);
	StringIntConCat(sParam1, Global_78588.f_6825[iParam0 /*3*/].f_2, 64);
}

void func_261(int iParam0, char* sParam1)//Position - 0x1486
{
	IntToString(sParam1, Global_78588.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, __LIB_10__.func_827(iParam0), 64);
}

int func_262(int iParam0)//Position - 0x1BF0F
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 17:
		case 22:
		case 21:
		case 113:
		case 162:
		case 163:
		case 177:
		case 188:
		case 199:
		case 200:
		case 215:
		case 257:
		case 253:
			return 1;
		case 20:
		case 19:
		case 15:
		case 16:
		case 164:
		case 185:
		case 187:
		case 217:
		case 243:
		case 244:
		case 254:
			return 3;
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 102:
		case 173:
		case 201:
		case 224:
		case 258:
		case 533:
		case 525:
			return 2;
		default:
	}
	return 0;
}

void func_263(int iParam0, int iParam1)//Position - 0x1C5A0
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_264(int iParam0, int iParam1)//Position - 0x1C5DA
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_265(int iParam0, int iParam1)//Position - 0x1C615
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_266(int iParam0)//Position - 0x2A529
{
	switch (iParam0)
	{
		case joaat("benson"):
		case joaat("bobcatxl"):
		case joaat("bullet"):
		case joaat("dominator"):
		case joaat("minivan"):
		case joaat("peyote"):
		case joaat("radi"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("stanier"):
			return 3;
			break;
		case joaat("boxville"):
		case joaat("camper"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("tiptruck"):
			return 2;
			break;
		case joaat("fusilade"):
			return 6;
			break;
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("penumbra"):
		case joaat("sanchez"):
		case joaat("sanchez2"):
			return 1;
			break;
		case joaat("bfinjection"):
		case joaat("dune"):
		case joaat("surfer"):
		case joaat("surfer2"):
			return 4;
			break;
		case joaat("barracks2"):
		case joaat("biff"):
		case joaat("bulldozer"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("forklift"):
		case joaat("mixer"):
		case joaat("mixer2"):
			return 0;
			break;
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("sentinel"):
		case joaat("sentinel2"):
		case joaat("zion"):
		case joaat("zion2"):
			return 7;
			break;
	}
	return 8;
}

int func_267()//Position - 0x2AF39
{
	int iVar0;
	iVar0 = (5 - 3);
	if (iVar0 >= 0 && iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96275[iVar0]))
		{
			return 0;
		}
	}
	return 1;
}

int func_268()//Position - 0x2AF6A
{
	int iVar0;
	iVar0 = (4 - 3);
	if (iVar0 >= 0 && iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96275[iVar0]))
		{
			return 0;
		}
	}
	return 1;
}

int func_269()//Position - 0x2AF9B
{
	int iVar0;
	iVar0 = (3 - 3);
	if (iVar0 >= 0 && iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96275[iVar0]))
		{
			return 0;
		}
	}
	return 1;
}

int func_270()//Position - 0x2AFCC
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_97919[2]))
	{
		return 0;
	}
	return 1;
}

int func_271()//Position - 0x2AFE7
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_97919[1]))
	{
		return 0;
	}
	return 1;
}

int func_272()//Position - 0x2B002
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_97919[0]))
	{
		return 0;
	}
	return 1;
}

int func_273()//Position - 0x2B3F7
{
	int iVar0;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_113386.f_18103.f_395))
	{
		return 0;
	}
	iVar0 = (3 - 3);
	if (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96275[iVar0]))
		{
			return 0;
		}
	}
	return 1;
}

int func_274()//Position - 0x2B433
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (Global_113386.f_7688[iVar0 /*15*/] == joaat("CALL_PATRICIA_1"))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_275()//Position - 0x2B46D
{
	return BitTest(Global_113386.f_18574[26 /*6*/], 3);
}

var func_276()//Position - 0x2B562
{
	return Global_113386.f_9085.f_330[71 /*6*/];
}

int func_277()//Position - 0x2B578
{
	if (Global_113386.f_9085.f_99.f_205[8] == 4)
	{
		return 1;
	}
	return 0;
}

bool func_278()//Position - 0x2B598
{
	return !Global_113386.f_9085.f_99.f_58[77];
}

var func_279()//Position - 0x2B5B0
{
	return Global_113386.f_9085.f_99.f_58[77];
}

bool func_280()//Position - 0x2B655
{
	return !Global_113386.f_9085.f_99.f_58[12];
}

var func_281()//Position - 0x2B66D
{
	return Global_113386.f_9085.f_99.f_58[12];
}

bool func_282()//Position - 0x2B684
{
	return !Global_113386.f_9085.f_99.f_58[34];
}

int func_283()//Position - 0x2B69C
{
	if (!__LIB_0__.func_176(40))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(__LIB_11__.func_156(181, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 40000f)
		{
			return 1;
		}
	}
	if (Global_95443 == -1)
	{
		Global_95443 = MISC::GET_GAME_TIMER();
	}
	if ((MISC::GET_GAME_TIMER() - Global_95443) > 30000)
	{
		Global_95443 = -1;
		return 1;
	}
	return 0;
}

int func_284()//Position - 0x2B708
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = 0;
		while (iVar1 < Global_96470[iVar0 /*19*/])
		{
			bVar2 = false;
			switch (iVar0)
			{
				case 1:
				case 2:
					bVar2 = __LIB_0__.func_176(90);
					break;
				case 3:
					bVar2 = __LIB_0__.func_176(74);
					break;
				case 4:
					bVar2 = __LIB_0__.func_176(75);
					break;
				case 5:
					bVar2 = __LIB_0__.func_176(93);
					break;
				case 6:
					bVar2 = __LIB_0__.func_176(69);
					break;
				case 7:
					bVar2 = __LIB_0__.func_176(70);
					break;
				case 8:
					bVar2 = __LIB_0__.func_176(84);
					break;
				case 9:
					bVar2 = __LIB_0__.func_176(85);
					break;
			}
			if (bVar2 && Global_113386.f_1.f_12[iVar0 /*6*/][iVar1] == 12)
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

bool func_285()//Position - 0x2B7F6
{
	return !Global_113386.f_9085.f_99.f_58[45];
}

var func_286()//Position - 0x2B80E
{
	return Global_113386.f_9085.f_99.f_58[45];
}

void func_287(int iParam0)//Position - 0x2FD76
{
	Global_23011.f_16 = iParam0;
}

int func_288(int iParam0)//Position - 0x3B10A
{
	if (Global_99845[iParam0 /*98*/] == joaat("blimp") || Global_99845[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("submersible") || Global_99845[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("burrito2") || Global_99845[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("entityxf") && !Global_113386.f_9085.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("cheetah") && !Global_113386.f_9085.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("policeb") && !Global_113386.f_9085.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("ztype") && !Global_113386.f_9085.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("polmav") && !Global_113386.f_9085.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("jb700") && !Global_113386.f_9085.f_330[10 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("monroe") && !Global_113386.f_9085.f_330[11 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("firetruk"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_99845[iParam0 /*98*/] == joaat("gauntlet") && !Global_113386.f_9085.f_330[80 /*6*/]) && !Global_113386.f_9085.f_330[81 /*6*/]) && !Global_113386.f_9085.f_330[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

void func_289(int iParam0)//Position - 0x8BBB5
{
	if (iParam0 >= 94)
	{
		return;
	}
	if (Global_96288 != -1)
	{
		if (Global_96288 != iParam0)
		{
			return;
		}
		Global_96288 = -1;
		Global_96287 = 0;
		Global_96289 = 0;
	}
}

int func_290(int iParam0)//Position - 0x8BD8B
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_91193[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_291(int iParam0, bool bParam1)//Position - 0x902EC
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_113386.f_7229[iParam0]), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_7229[iParam0]), 1);
	}
	if (Global_95479[iParam0 /*10*/].f_7 != 263)
	{
		__LIB_11__.func_500(Global_95479[iParam0 /*10*/].f_7, BitTest(Global_113386.f_7229[iParam0], 1), 0);
	}
}

int func_292(int iParam0)//Position - 0x98B70
{
	switch (iParam0)
	{
		case 8:
			return 30;
		case 3:
			return 30;
		case 5:
			return 30;
		case 10:
			return 30;
		case 1:
			return 28;
		default:
	}
	return 31;
	return 0;
}

void func_293()//Position - 0x98C0A
{
	Global_97531 = 0;
	Global_97532 = 0;
	Global_97709 = CLOCK::GET_CLOCK_HOURS();
	Global_97710 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	Global_97711 = CLOCK::GET_CLOCK_MONTH();
}

void func_294(int iParam0)//Position - 0x994B4
{
	bool bVar0;
	var uVar1;
	struct<15> Var2;
	if (iParam0 < 0 || iParam0 >= Global_113386.f_7688.f_136)
	{
		return;
	}
	uVar1 = Global_113386.f_7688[iParam0 /*15*/].f_2;
	if (Global_113386.f_7688.f_136 > 1)
	{
		bVar0 = iParam0;
		while (bVar0 <= (Global_113386.f_7688.f_136 - 2))
		{
			Global_113386.f_7688[bVar0 /*15*/] = { Global_113386.f_7688[bVar0 + 1 /*15*/] };
			bVar0++;
		}
	}
	if (Global_113386.f_7688.f_136 > 0)
	{
		Global_113386.f_7688[(Global_113386.f_7688.f_136 - 1) /*15*/] = { Var2 };
		Global_113386.f_7688.f_136 = (Global_113386.f_7688.f_136 - 1);
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (BitTest(uVar1, bVar0))
		{
			__LIB_12__.func_132(bVar0);
		}
		bVar0++;
	}
}

void func_295(int iParam0, int iParam1)//Position - 0x9AFE7
{
	if (iParam0 < 9)
	{
		Global_96297[iParam0 /*2*/] = iParam1;
		if (iParam1 == 0)
		{
			Global_96297[iParam0 /*2*/].f_1 = 0;
		}
	}
}

void func_296(int iParam0)//Position - 0x1075
{
	Global_1575010 = iParam0;
}

bool func_297()//Position - 0x1EDE
{
	return Global_2715699.f_6313;
}

bool func_298()//Position - 0x1EED
{
	return Global_2714762.f_746;
}

void func_299()//Position - 0x1F0E
{
	Global_2714762.f_847 = 0;
}

bool func_300()//Position - 0x1F1E
{
	return Global_2714762.f_847;
}

void func_301(int iParam0, int iParam1)//Position - 0x2818
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = __LIB_0__.func_5();
	}
	Global_1575038[iVar0] = iParam0;
}

bool func_302()//Position - 0x2890
{
	return Global_1575054;
}

int func_303(int iParam0, bool bParam1, bool bParam2, int* iParam3)//Position - 0x999AE
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	*iParam3 = -1;
	iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		FILES::GET_VARIANT_COMPONENT(iParam0, iVar1, iParam3, &uVar2, &iVar3);
		if ((((iVar3 == 11 && *iParam3 != 0) && *iParam3 != joaat("0")) && bParam1 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*iParam3, joaat("HOOD_UP"), 0)) && bParam2 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*iParam3, joaat("HOOD_TUCKED"), 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_304(bool bParam0, int iParam1)//Position - 0xA4CE1
{
	if (iParam1 != __LIB_0__.func_160())
	{
		if (Global_1892703[bParam0 /*599*/].f_10.f_26 != __LIB_0__.func_160())
		{
			return iParam1 == Global_1892703[bParam0 /*599*/].f_10.f_26;
		}
	}
	return 0;
}

int func_305(bool bParam0)//Position - 0xD62CF
{
	if (__LIB_2__.func_193(bParam0))
	{
		return 1;
	}
	if (__LIB_2__.func_308(bParam0))
	{
		return 1;
	}
	return 0;
}

void func_306()//Position - 0x13BF9C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			iVar1 = iVar0;
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && PED::IS_PED_A_PLAYER(iVar2)) && !VEHICLE::IS_TURRET_SEAT(iVar3, iVar1))
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar2, true, false);
			}
			iVar0 = (iVar0 + 1);
		}
	}
}

int func_307(int iParam0)//Position - 0x14D8B4
{
	if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_7__.func_203(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() != iParam0)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_308()//Position - 0x157284
{
	if (Global_262145.f_32663 /* Tunable: DISABLE_SIMEON_SHOWROOM */)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 236 && func_4357(PLAYER::PLAYER_ID()) == 8)
	{
		return 1;
	}
	if (__LIB_4__.func_374(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

void func_309()//Position - 0x17B71D
{
	Global_1048576.f_10 = 0;
}

void func_310(var uParam0, var uParam1)//Position - 0x17D36F
{
	uParam0->f_30 = 0;
	if (uParam1->f_8 > uParam1->f_9)
	{
		uParam0->f_30 = 1;
	}
}

Vector3 func_311(int iParam0)//Position - 0x17D8FF
{
	struct<3> Var0;
	if (iParam0 == 0)
	{
		return 0f, 0f, 0f;
	}
	Var0 = { __LIB_11__.func_538(iParam0, "start") };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -2233.327f, 2436.1338f, -14.65155f, -2229.5598f, 2399.5764f, 11.997612f, 24f, false, true))
	{
		Var0 = { -2303.54f, 2428.09f, 2.02f };
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 603.6218f, 5573.0464f, 694.484f, 594.23785f, 5542.7915f, 727.479f, 33.5f, false, true))
	{
		Var0 = { 502.6f, 5537.06f, 777.05f };
	}
	return Var0;
}

int func_312(var uParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x17D9AC
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
			}
			GRAPHICS::FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO();
			uParam0->f_1 = 1;
			break;
		case 1:
			if (GRAPHICS::LOAD_MISSION_CREATOR_PHOTO(sParam1, iParam3, iParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		case 2:
			switch (GRAPHICS::GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(NETWORK::UGC_GET_CONTENT_PATH(0, iParam3)))
			{
				case 1:
					return 0;
				case 0:
					uParam0->f_3 = 1;
					return 1;
				case 2:
					uParam0->f_2++;
					if (uParam0->f_2 > 200)
					{
						if (*uParam0 != 0)
						{
							NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
							*uParam0 = 0;
						}
						uParam0->f_3 = 0;
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_313(int iParam0, int iParam1)//Position - 0x17E406
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		case 2:
		case 31:
			Var0.f_0 = 255;
			Var0.f_1 = 70;
			Var0.f_2 = 70;
			break;
		case 35:
			Var0.f_0 = 70;
			Var0.f_1 = 70;
			Var0.f_2 = 255;
			break;
		case 32:
			Var0.f_0 = 255;
			Var0.f_1 = 70;
			Var0.f_2 = 70;
			break;
		case 3:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		case 4:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			else if (iParam1 == 4)
			{
				Var0.f_0 = 200;
				Var0.f_1 = 200;
				Var0.f_2 = 50;
			}
			break;
		case 5:
			Var0.f_0 = 200;
			Var0.f_1 = 200;
			Var0.f_2 = 50;
			break;
		case 11:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		case 12:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		case 13:
			Var0.f_0 = 70;
			Var0.f_1 = 255;
			Var0.f_2 = 70;
			break;
		default:
			Var0.f_0 = 255;
			Var0.f_1 = 255;
			Var0.f_2 = 255;
			break;
	}
	return Var0;
}

int func_314(int iParam0, int iParam1, int iParam2)//Position - 0x17E617
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_315(var uParam0, bool bParam1)//Position - 0x17E645
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<6> Var4;
	struct<8> Var5;
	struct<16> Var6;
	if (*uParam0 != 0)
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
		*uParam0 = 0;
	}
	*uParam0 = uVar0;
	uParam0->f_1 = uVar1;
	uParam0->f_2 = uVar2;
	uParam0->f_3 = uVar3;
	MemCopy(&(uParam0->f_4), {Var4}, 16);
	if (bParam1)
	{
		MemCopy(&(uParam0->f_20), {Var5}, 16);
		uParam0->f_36 = { Var6 };
	}
}

void func_316()//Position - 0x17EC3A
{
	MISC::SET_BIT(&(Global_2714762.f_43.f_4), 7);
}

int func_317()//Position - 0x17EC4F
{
	if (((Global_4718592 != 2 && Global_4718592 != 0) && Global_4718592 != 1) && Global_4718592 != 3)
	{
		return 1;
	}
	if (Global_4718592 == 0)
	{
		if (Global_4718592.f_168757 != 0)
		{
			return 1;
		}
		if (Global_4718592.f_2 == 4)
		{
			return 1;
		}
		if (Global_4718592.f_2 != 5 && ((((Global_4718592.f_2 != 6 && !BitTest(Global_4718592.f_4, 20)) && !BitTest(Global_4718592.f_4, 21)) && !BitTest(Global_4718592.f_4, 22)) && !BitTest(Global_4718592.f_4, 23)))
		{
			return 1;
		}
	}
	if (Global_4718592 == 2)
	{
		if (Global_4718592.f_107227 == 8 || Global_4718592.f_107227 == 9)
		{
			return 1;
		}
	}
	return 0;
}

int func_318()//Position - 0x17ED59
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((((((((((((Global_4718592.f_110280[iVar0] == joaat("prop_rail_boxcar") || Global_4718592.f_110280[iVar0] == joaat("prop_rail_boxcar2")) || Global_4718592.f_110280[iVar0] == -1894510521) || Global_4718592.f_110280[iVar0] == joaat("prop_rail_boxcar3")) || Global_4718592.f_110280[iVar0] == -1562909828) || Global_4718592.f_110280[iVar0] == joaat("prop_rail_boxcar4")) || Global_4718592.f_110280[iVar0] == 338623111) || Global_4718592.f_110280[iVar0] == joaat("prop_rail_boxcar5")) || Global_4718592.f_110280[iVar0] == joaat("prop_rail_boxcar5_d")) || Global_4718592.f_110280[iVar0] == -1529940538) || Global_4718592.f_110280[iVar0] == 1152304222) || Global_4718592.f_110280[iVar0] == joaat("freight")) || Global_4718592.f_110280[iVar0] == joaat("metrotrain"))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_319()//Position - 0x17F401
{
	return 188.0411f, -682.9102f, 42.1409f;
}

Vector3 func_320(bool bParam0)//Position - 0x17F45F
{
	if (bParam0)
	{
		return 819.6473f, -3031.2603f, 4.7421f;
	}
	return 809.6473f, -3034.2603f, 4.7421f;
}

Vector3 func_321()//Position - 0x17F4D0
{
	return -1066.5455f, -74.8318f, -90.1999f;
}

Vector3 func_322()//Position - 0x17F528
{
	return -1351.713f, 156.2222f, -100.1943f;
}

Vector3 func_323()//Position - 0x17F53F
{
	return 1561.0537f, 385.9017f, -50.6854f;
}

Vector3 func_324()//Position - 0x17F586
{
	return 2713.297f, -369.5003f, -55.7809f;
}

Vector3 func_325()//Position - 0x17F59D
{
	return 349.7179f, 4870.692f, -61.4014f;
}

void func_326(int iParam0, struct<16> Param1)//Position - 0x17F5F0
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2727852, "", 64);
	}
	else
	{
		Global_2727852 = { Param1 };
	}
	Global_2727851 = iParam0;
}

int func_327(var uParam0, char* sParam1)//Position - 0x17F642
{
	var uVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	NETWORK::NETWORK_HANDLE_FROM_MEMBER_ID(sParam1, &uVar0, 13);
	if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uVar0))
	{
		*uParam0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_328(var uParam0)//Position - 0x17F955
{
	if (uParam0->f_16)
	{
		Global_1050140.f_8 = 0;
		Global_1050140.f_9 = 32;
	}
	else
	{
		Global_1048576.f_8 = 0;
		Global_1048576.f_9 = 32;
	}
}

void func_329()//Position - 0x1802A9
{
	if (Global_262145.f_31710[2] != Global_4718592.f_116524)
	{
		return;
	}
	MISC::SET_BIT(&(Global_4718592.f_658[0 /*22957*/].f_7983[3]), 23);
}

bool func_330(int iParam0)//Position - 0x1803F2
{
	return iParam0 == 88;
}

void func_331(int iParam0)//Position - 0x1830EE
{
	int iVar0;
	var* uVar1;
	int iVar2;
	var* uVar3;
	uVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "fsp");
	iVar2 = DATAFILE::DATADICT_GET_ARRAY(uVar1, "loc");
	uVar3 = DATAFILE::DATADICT_GET_ARRAY(uVar1, "head");
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (iVar2 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar2, iVar0) == 5)
		{
			Global_4980736.f_195632[iVar0 /*5*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar2, iVar0) };
			Global_4980736.f_195632[iVar0 /*5*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(uVar3, iVar0);
		}
		else
		{
			Global_4980736.f_195632[iVar0 /*5*/] = { 0f, 0f, 0f };
			Global_4980736.f_195632[iVar0 /*5*/].f_3 = 0f;
		}
		iVar0++;
	}
}

void func_332(int iParam0, bool bParam1)//Position - 0x18498D
{
	switch (iParam0)
	{
		case 3:
			if (Global_4980736.f_94390[bParam1 /*1004*/].f_648 != 0f)
			{
				Global_4980736.f_94390[bParam1 /*1004*/].f_856.f_10 = Global_4980736.f_94390[bParam1 /*1004*/].f_648;
			}
			break;
		case 7:
			if (IntToFloat(Global_4718592.f_168971) != 0f)
			{
				Global_4980736.f_69361[bParam1 /*151*/].f_106.f_10 = SYSTEM::TO_FLOAT(Global_4718592.f_168971);
			}
			break;
	}
}

void func_333(int iParam0, bool bParam1)//Position - 0x184A17
{
	switch (iParam0)
	{
		case 4:
			if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_107, 15))
			{
				MISC::SET_BIT(&(Global_4980736.f_78578[bParam1 /*450*/].f_137), 8);
				MISC::CLEAR_BIT(&(Global_4980736.f_78578[bParam1 /*450*/].f_107), 15);
			}
			break;
		case 7:
			if (BitTest(Global_4980736.f_69361[bParam1 /*151*/].f_8, 15))
			{
				MISC::SET_BIT(&(Global_4980736.f_69361[bParam1 /*151*/].f_106), 8);
				MISC::CLEAR_BIT(&(Global_4980736.f_69361[bParam1 /*151*/].f_8), 15);
			}
			break;
		case 3:
			if (BitTest(Global_4980736.f_94390[bParam1 /*1004*/].f_530, 7))
			{
				MISC::SET_BIT(&(Global_4980736.f_94390[bParam1 /*1004*/].f_856), 8);
				MISC::CLEAR_BIT(&(Global_4980736.f_94390[bParam1 /*1004*/].f_530), 7);
			}
			break;
		case 6:
			if (BitTest(Global_4980736.f_5[bParam1 /*273*/].f_88, 0))
			{
				MISC::SET_BIT(&(Global_4980736.f_5[bParam1 /*273*/].f_20), 8);
				MISC::CLEAR_BIT(&(Global_4980736.f_5[bParam1 /*273*/].f_88), 0);
			}
			break;
		case 5:
			if (BitTest(Global_4980736.f_63312[bParam1 /*183*/].f_19, 10))
			{
				MISC::CLEAR_BIT(&(Global_4980736.f_63312[bParam1 /*183*/].f_46), 8);
				MISC::CLEAR_BIT(&(Global_4980736.f_63312[bParam1 /*183*/].f_19), 10);
			}
			break;
	}
}

float func_334(int iParam0)//Position - 0x184B8D
{
	switch (iParam0)
	{
		case 4:
		case 9:
			return 1.2f;
		case 7:
			return 1.2f;
		case 1:
			return 0.8f;
		case 3:
			return 0.7f;
		case 2:
			return 0.8f;
		default:
	}
	return 1f;
}

int func_335(var uParam0, var uParam1, int iParam2)//Position - 0x185C64
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return BitTest(uParam0, 22);
			case 1:
				return BitTest(uParam0, 23);
			case 2:
				return BitTest(uParam0, 24);
			case 3:
				return BitTest(uParam0, 25);
			case 4:
				return BitTest(uParam0, 26);
			case 5:
				return BitTest(uParam0, 27);
			case 6:
				return BitTest(uParam0, 28);
			case 7:
				return BitTest(uParam0, 29);
			case 8:
				return BitTest(*uParam1, 0);
			case 9:
				return BitTest(*uParam1, 1);
			case 10:
				return BitTest(*uParam1, 2);
			case 11:
				return BitTest(*uParam1, 3);
			}
		default:
	}
	return 0;
}

int func_336(var uParam0, var uParam1, int iParam2)//Position - 0x185D2D
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return BitTest(uParam0, 14);
			case 1:
				return BitTest(uParam0, 15);
			case 2:
				return BitTest(uParam0, 16);
			case 3:
				return BitTest(uParam0, 17);
			case 4:
				return BitTest(uParam0, 18);
			case 5:
				return BitTest(uParam0, 19);
			case 6:
				return BitTest(uParam0, 20);
			case 7:
				return BitTest(uParam0, 21);
			case 8:
				return BitTest(*uParam1, 4);
			case 9:
				return BitTest(*uParam1, 5);
			case 10:
				return BitTest(*uParam1, 6);
			case 11:
				return BitTest(*uParam1, 7);
			}
		default:
	}
	return 0;
}

int func_337(var uParam0, int iParam1)//Position - 0x185DF6
{
	if (iParam1 < 12 && iParam1 >= 0)
	{
		switch (iParam1)
		{
			case 0:
				return BitTest(*uParam0, 0);
			case 1:
				return BitTest(*uParam0, 1);
			case 2:
				return BitTest(*uParam0, 2);
			case 3:
				return BitTest(*uParam0, 3);
			case 4:
				return BitTest(*uParam0, 4);
			case 5:
				return BitTest(*uParam0, 5);
			case 6:
				return BitTest(*uParam0, 6);
			case 7:
				return BitTest(*uParam0, 7);
			case 8:
				return BitTest(*uParam0, 8);
			case 9:
				return BitTest(*uParam0, 9);
			case 10:
				return BitTest(*uParam0, 10);
			case 11:
				return BitTest(*uParam0, 11);
			}
		default:
	}
	return 0;
}

int func_338(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x185EC3
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 28);
			case 1:
				return BitTest(uParam0, 29);
			case 2:
				return BitTest(uParam0, 30);
			case 3:
				return BitTest(uParam0, 31);
			case 4:
				return BitTest(uParam1, 0);
			case 5:
				return BitTest(uParam1, 1);
			case 6:
				return BitTest(uParam1, 2);
			case 7:
				return BitTest(uParam1, 3);
			case 8:
				return BitTest(*uParam2, 8);
			case 9:
				return BitTest(*uParam2, 9);
			case 10:
				return BitTest(*uParam2, 10);
			case 11:
				return BitTest(*uParam2, 11);
			}
		default:
	}
	return 0;
}

int func_339(var uParam0, var uParam1, int iParam2)//Position - 0x185F8C
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return BitTest(uParam0, 8);
			case 1:
				return BitTest(uParam0, 9);
			case 2:
				return BitTest(uParam0, 10);
			case 3:
				return BitTest(uParam0, 11);
			case 4:
				return BitTest(uParam0, 12);
			case 5:
				return BitTest(uParam0, 13);
			case 6:
				return BitTest(uParam0, 14);
			case 7:
				return BitTest(uParam0, 15);
			case 8:
				return BitTest(*uParam1, 12);
			case 9:
				return BitTest(*uParam1, 13);
			case 10:
				return BitTest(*uParam1, 14);
			case 11:
				return BitTest(*uParam1, 15);
			}
		default:
	}
	return 0;
}

int func_340(var uParam0, var uParam1, int iParam2)//Position - 0x186059
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return BitTest(uParam0, 0);
			case 1:
				return BitTest(uParam0, 1);
			case 2:
				return BitTest(uParam0, 2);
			case 3:
				return BitTest(uParam0, 3);
			case 4:
				return BitTest(uParam0, 4);
			case 5:
				return BitTest(uParam0, 5);
			case 6:
				return BitTest(uParam0, 6);
			case 7:
				return BitTest(uParam0, 7);
			case 8:
				return BitTest(*uParam1, 16);
			case 9:
				return BitTest(*uParam1, 17);
			case 10:
				return BitTest(*uParam1, 18);
			case 11:
				return BitTest(*uParam1, 19);
			}
		default:
	}
	return 0;
}

int func_341(var uParam0, var uParam1, int iParam2)//Position - 0x18611E
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return BitTest(uParam0, 17);
			case 1:
				return BitTest(uParam0, 18);
			case 2:
				return BitTest(uParam0, 19);
			case 3:
				return BitTest(uParam0, 20);
			case 4:
				return BitTest(uParam0, 21);
			case 5:
				return BitTest(uParam0, 22);
			case 6:
				return BitTest(uParam0, 23);
			case 7:
				return BitTest(uParam0, 24);
			case 8:
				return BitTest(*uParam1, 20);
			case 9:
				return BitTest(*uParam1, 21);
			case 10:
				return BitTest(*uParam1, 22);
			case 11:
				return BitTest(*uParam1, 23);
			}
		default:
	}
	return 0;
}

int func_342(var uParam0, var uParam1, int iParam2)//Position - 0x1861EB
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return BitTest(uParam0, 15);
			case 1:
				return BitTest(uParam0, 16);
			case 2:
				return BitTest(uParam0, 17);
			case 3:
				return BitTest(uParam0, 18);
			case 4:
				return BitTest(uParam0, 19);
			case 5:
				return BitTest(uParam0, 20);
			case 6:
				return BitTest(uParam0, 21);
			case 7:
				return BitTest(uParam0, 22);
			case 8:
				return BitTest(*uParam1, 24);
			case 9:
				return BitTest(*uParam1, 25);
			case 10:
				return BitTest(*uParam1, 26);
			case 11:
				return BitTest(*uParam1, 27);
			}
		default:
	}
	return 0;
}

int func_343(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x1862B8
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 25);
			case 1:
				return BitTest(uParam0, 26);
			case 2:
				return BitTest(uParam0, 27);
			case 3:
				return BitTest(uParam0, 28);
			case 4:
				return BitTest(uParam0, 29);
			case 5:
				return BitTest(uParam0, 30);
			case 6:
				return BitTest(uParam0, 31);
			case 7:
				return BitTest(uParam1, 0);
			case 8:
				return BitTest(*uParam2, 28);
			case 9:
				return BitTest(*uParam2, 29);
			case 10:
				return BitTest(*uParam2, 30);
			case 11:
				return BitTest(*uParam2, 31);
			}
		default:
	}
	return 0;
}

int func_344(var uParam0, var uParam1, int iParam2)//Position - 0x186384
{
	if (iParam2 < 12 && iParam2 >= 0)
	{
		switch (iParam2)
		{
			case 0:
				return BitTest(*uParam0, 0);
			case 1:
				return BitTest(*uParam0, 1);
			case 2:
				return BitTest(*uParam0, 2);
			case 3:
				return BitTest(*uParam0, 3);
			case 4:
				return BitTest(*uParam0, 4);
			case 5:
				return BitTest(*uParam0, 5);
			case 6:
				return BitTest(*uParam0, 6);
			case 7:
				return BitTest(*uParam0, 7);
			case 8:
				return BitTest(*uParam1, 0);
			case 9:
				return BitTest(*uParam1, 1);
			case 10:
				return BitTest(*uParam1, 2);
			case 11:
				return BitTest(*uParam1, 3);
			}
		default:
	}
	return 0;
}

int func_345(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x18644D
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_4980736.f_94390[iParam0 /*1004*/].f_530, 14))
		{
			return 1;
		}
	}
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(*uParam1, 9);
			case 1:
				return BitTest(*uParam1, 10);
			case 2:
				return BitTest(*uParam1, 11);
			case 3:
				return BitTest(*uParam1, 12);
			case 4:
				return BitTest(*uParam1, 13);
			case 5:
				return BitTest(*uParam1, 14);
			case 6:
				return BitTest(*uParam1, 15);
			case 7:
				return BitTest(*uParam1, 16);
			case 8:
				return BitTest(*uParam2, 4);
			case 9:
				return BitTest(*uParam2, 5);
			case 10:
				return BitTest(*uParam2, 6);
			case 11:
				return BitTest(*uParam2, 7);
			}
		default:
	}
	return 0;
}

int func_346(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x18653F
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_4980736.f_94390[iParam0 /*1004*/].f_530, 13))
		{
			return 1;
		}
	}
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(*uParam1, 1);
			case 1:
				return BitTest(*uParam1, 2);
			case 2:
				return BitTest(*uParam1, 3);
			case 3:
				return BitTest(*uParam1, 4);
			case 4:
				return BitTest(*uParam1, 5);
			case 5:
				return BitTest(*uParam1, 6);
			case 6:
				return BitTest(*uParam1, 7);
			case 7:
				return BitTest(*uParam1, 8);
			case 8:
				return BitTest(*uParam2, 8);
			case 9:
				return BitTest(*uParam2, 9);
			case 10:
				return BitTest(*uParam2, 10);
			case 11:
				return BitTest(*uParam2, 11);
			}
		default:
	}
	return 0;
}

int func_347(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x18662E
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 20);
			case 1:
				return BitTest(uParam0, 21);
			case 2:
				return BitTest(uParam0, 22);
			case 3:
				return BitTest(uParam0, 23);
			case 4:
				return BitTest(uParam0, 24);
			case 5:
				return BitTest(uParam1, 25);
			case 6:
				return BitTest(uParam1, 26);
			case 7:
				return BitTest(uParam1, 27);
			case 8:
				return BitTest(*uParam2, 12);
			case 9:
				return BitTest(*uParam2, 13);
			case 10:
				return BitTest(*uParam2, 14);
			case 11:
				return BitTest(*uParam2, 15);
			}
		default:
	}
	return 0;
}

int func_348(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x1866FB
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 11);
			case 1:
				return BitTest(uParam0, 12);
			case 2:
				return BitTest(uParam0, 13);
			case 3:
				return BitTest(uParam0, 14);
			case 4:
				return BitTest(uParam0, 15);
			case 5:
				return BitTest(uParam1, 22);
			case 6:
				return BitTest(uParam1, 23);
			case 7:
				return BitTest(uParam1, 24);
			case 8:
				return BitTest(*uParam2, 16);
			case 9:
				return BitTest(*uParam2, 17);
			case 10:
				return BitTest(*uParam2, 18);
			case 11:
				return BitTest(*uParam2, 19);
			}
		default:
	}
	return 0;
}

int func_349(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x1867C8
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 0);
			case 1:
				return BitTest(uParam0, 1);
			case 2:
				return BitTest(uParam0, 2);
			case 3:
				return BitTest(uParam0, 3);
			case 4:
				return BitTest(uParam0, 4);
			case 5:
				return BitTest(uParam1, 19);
			case 6:
				return BitTest(uParam1, 20);
			case 7:
				return BitTest(uParam1, 21);
			case 8:
				return BitTest(*uParam2, 20);
			case 9:
				return BitTest(*uParam2, 21);
			case 10:
				return BitTest(*uParam2, 22);
			case 11:
				return BitTest(*uParam2, 23);
			}
		default:
	}
	return 0;
}

int func_350(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x186890
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 22);
			case 1:
				return BitTest(uParam0, 23);
			case 2:
				return BitTest(uParam0, 24);
			case 3:
				return BitTest(uParam0, 25);
			case 4:
				return BitTest(uParam0, 26);
			case 5:
				return BitTest(uParam1, 16);
			case 6:
				return BitTest(uParam1, 17);
			case 7:
				return BitTest(uParam1, 18);
			case 8:
				return BitTest(*uParam2, 24);
			case 9:
				return BitTest(*uParam2, 25);
			case 10:
				return BitTest(*uParam2, 26);
			case 11:
				return BitTest(*uParam2, 27);
			}
		default:
	}
	return 0;
}

int func_351(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x18695D
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 17);
			case 1:
				return BitTest(uParam0, 18);
			case 2:
				return BitTest(uParam0, 19);
			case 3:
				return BitTest(uParam0, 20);
			case 4:
				return BitTest(uParam0, 21);
			case 5:
				return BitTest(uParam1, 13);
			case 6:
				return BitTest(uParam1, 14);
			case 7:
				return BitTest(uParam1, 15);
			case 8:
				return BitTest(*uParam2, 28);
			case 9:
				return BitTest(*uParam2, 29);
			case 10:
				return BitTest(*uParam2, 30);
			case 11:
				return BitTest(*uParam2, 31);
			}
		default:
	}
	return 0;
}

int func_352(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x186A2A
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 10);
			case 1:
				return BitTest(uParam0, 11);
			case 2:
				return BitTest(uParam0, 12);
			case 3:
				return BitTest(uParam0, 13);
			case 4:
				return BitTest(uParam0, 14);
			case 5:
				return BitTest(uParam1, 10);
			case 6:
				return BitTest(uParam1, 11);
			case 7:
				return BitTest(uParam1, 12);
			case 8:
				return BitTest(*uParam2, 0);
				break;
			case 9:
				return BitTest(*uParam2, 1);
				break;
			case 10:
				return BitTest(*uParam2, 2);
				break;
			case 11:
				return BitTest(*uParam2, 3);
				break;
			}
	}
	return 0;
}

int func_353(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x186AFF
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 5);
			case 1:
				return BitTest(uParam0, 6);
			case 2:
				return BitTest(uParam0, 7);
			case 3:
				return BitTest(uParam0, 8);
			case 4:
				return BitTest(uParam0, 9);
			case 5:
				return BitTest(uParam1, 7);
			case 6:
				return BitTest(uParam1, 8);
			case 7:
				return BitTest(uParam1, 9);
			case 8:
				return BitTest(*uParam2, 4);
			case 9:
				return BitTest(*uParam2, 5);
			case 10:
				return BitTest(*uParam2, 6);
			case 11:
				return BitTest(*uParam2, 7);
			}
		default:
	}
	return 0;
}

int func_354(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x186BC4
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 0);
			case 1:
				return BitTest(uParam0, 1);
			case 2:
				return BitTest(uParam0, 2);
			case 3:
				return BitTest(uParam0, 3);
			case 4:
				return BitTest(uParam0, 4);
			case 5:
				return BitTest(uParam1, 4);
			case 6:
				return BitTest(uParam1, 5);
			case 7:
				return BitTest(uParam1, 6);
			case 8:
				return BitTest(*uParam2, 8);
				break;
			case 9:
				return BitTest(*uParam2, 9);
				break;
			case 10:
				return BitTest(*uParam2, 10);
				break;
			case 11:
				return BitTest(*uParam2, 11);
				break;
			}
	}
	return 0;
}

int func_355(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x186C95
{
	if (iParam3 < 12 && iParam3 >= 0)
	{
		switch (iParam3)
		{
			case 0:
				return BitTest(uParam0, 25);
			case 1:
				return BitTest(uParam0, 26);
			case 2:
				return BitTest(uParam0, 27);
			case 3:
				return BitTest(uParam0, 28);
			case 4:
				return BitTest(uParam0, 29);
			case 5:
				return BitTest(uParam1, 1);
			case 6:
				return BitTest(uParam1, 2);
			case 7:
				return BitTest(uParam1, 3);
			case 8:
				return BitTest(*uParam2, 12);
			case 9:
				return BitTest(*uParam2, 13);
			case 10:
				return BitTest(*uParam2, 14);
			case 11:
				return BitTest(*uParam2, 15);
			}
		default:
	}
	return 0;
}

void func_356(var uParam0, int iParam1, int iParam2)//Position - 0x186D5F
{
	if (iParam1 > 12 || iParam1 <= -1)
	{
		return;
	}
	MISC::SET_BIT(&(uParam0->f_7[iParam1 /*27*/][(iParam2 / 32)]), (iParam2 % 32));
}

int func_357(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x186D94
{
	if (iParam4 < 12 && iParam4 >= 0)
	{
		switch (iParam4)
		{
			case 0:
				return BitTest(uParam0, 6);
			case 1:
				return BitTest(uParam0, 16);
			case 2:
				return BitTest(uParam0, 17);
			case 3:
				return BitTest(uParam0, 18);
			case 4:
				return BitTest(uParam0, 19);
			case 5:
				return BitTest(uParam1, 30);
			case 6:
				return BitTest(uParam1, 31);
			case 7:
				return BitTest(uParam2, 0);
			case 8:
				return BitTest(*uParam3, 12);
			case 9:
				return BitTest(*uParam3, 13);
			case 10:
				return BitTest(*uParam3, 14);
			case 11:
				return BitTest(*uParam3, 15);
			}
		default:
	}
	return 0;
}

int func_358(int iParam0)//Position - 0x18C3B0
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("WEAPON_PISTOL") || iParam0 == joaat("WEAPON_MICROSMG")) || iParam0 == joaat("WEAPON_SMG")) || iParam0 == joaat("WEAPON_ASSAULTRIFLE")) || iParam0 == joaat("WEAPON_ADVANCEDRIFLE")) || iParam0 == joaat("WEAPON_MG")) || iParam0 == joaat("WEAPON_COMBATMG")) || iParam0 == joaat("WEAPON_PUMPSHOTGUN")) || iParam0 == joaat("WEAPON_SAWNOFFSHOTGUN")) || iParam0 == joaat("WEAPON_SNIPERRIFLE")) || iParam0 == joaat("WEAPON_HEAVYSNIPER")) || iParam0 == joaat("WEAPON_GRENADELAUNCHER")) || iParam0 == joaat("WEAPON_RPG")) || iParam0 == joaat("WEAPON_MINIGUN")) || iParam0 == joaat("WEAPON_KNIFE")) || iParam0 == joaat("WEAPON_BAT")) || iParam0 == joaat("WEAPON_UNARMED")) || iParam0 == joaat("WEAPON_MACHINEPISTOL")) || iParam0 == joaat("WEAPON_GRENADE")) || iParam0 == joaat("WEAPON_STICKYBOMB")) || iParam0 == joaat("WEAPON_MOLOTOV")) || iParam0 == joaat("WEAPON_PIPEBOMB")) || iParam0 == joaat("WEAPON_CARBINERIFLE")) || iParam0 == joaat("WEAPON_CROWBAR")) || iParam0 == joaat("WEAPON_HAMMER")) || iParam0 == joaat("WEAPON_WRENCH")) || iParam0 == joaat("WEAPON_SPECIALCARBINE")) || iParam0 == joaat("WEAPON_BULLPUPRIFLE")) || iParam0 == joaat("WEAPON_HEAVYSHOTGUN")) || iParam0 == joaat("WEAPON_BULLPUPSHOTGUN")) || iParam0 == joaat("WEAPON_ASSAULTSHOTGUN")) || iParam0 == joaat("WEAPON_ASSAULTSMG")) || iParam0 == joaat("WEAPON_COMBATPDW")) || iParam0 == joaat("WEAPON_SPECIALCARBINE_MK2")) || iParam0 == joaat("WEAPON_PISTOL_MK2")) || iParam0 == joaat("WEAPON_MILITARYRIFLE")) || iParam0 == joaat("WEAPON_ASSAULTRIFLE_MK2")) || iParam0 == joaat("WEAPON_COMPACTRIFLE")) || iParam0 == joaat("WEAPON_MINISMG")) || iParam0 == joaat("WEAPON_SNSPISTOL")) || iParam0 == joaat("WEAPON_VINTAGEPISTOL")) || iParam0 == joaat("WEAPON_DBSHOTGUN")) || iParam0 == joaat("WEAPON_MUSKET")) || iParam0 == joaat("WEAPON_NAVYREVOLVER")) || iParam0 == joaat("WEAPON_BOTTLE")) || iParam0 == joaat("WEAPON_DAGGER")) || iParam0 == joaat("WEAPON_HATCHET")) || iParam0 == joaat("WEAPON_COMBATPISTOL")) || iParam0 == joaat("WEAPON_PISTOL50")) || iParam0 == joaat("WEAPON_SNSPISTOL")) || iParam0 == joaat("WEAPON_SNSPISTOL_MK2")) || iParam0 == joaat("WEAPON_HEAVYPISTOL")) || iParam0 == joaat("WEAPON_VINTAGEPISTOL")) || iParam0 == joaat("WEAPON_CERAMICPISTOL")) || iParam0 == joaat("WEAPON_VINTAGEPISTOL")) || iParam0 == joaat("WEAPON_MARKSMANRIFLE")) || iParam0 == joaat("WEAPON_REVOLVER")) || iParam0 == joaat("WEAPON_REVOLVER_MK2")) || iParam0 == joaat("WEAPON_DOUBLEACTION")) || iParam0 == joaat("WEAPON_NAVYREVOLVER")) || iParam0 == joaat("WEAPON_STUNGUN")) || iParam0 == joaat("WEAPON_FLAREGUN")) || iParam0 == joaat("WEAPON_RAYPISTOL")) || iParam0 == joaat("WEAPON_PUMPSHOTGUN_MK2")) || iParam0 == joaat("WEAPON_MUSKET")) || iParam0 == joaat("WEAPON_DBSHOTGUN")) || iParam0 == joaat("WEAPON_AUTOSHOTGUN")) || iParam0 == joaat("WEAPON_ASSAULTRIFLE_MK2")) || iParam0 == joaat("WEAPON_CARBINERIFLE_MK2")) || iParam0 == joaat("WEAPON_BULLPUPRIFLE_MK2")) || iParam0 == joaat("WEAPON_COMPACTRIFLE")) || iParam0 == joaat("WEAPON_MINISMG")) || iParam0 == joaat("WEAPON_SMG_MK2")) || iParam0 == joaat("WEAPON_COMBATMG_MK2")) || iParam0 == joaat("WEAPON_GUSENBERG")) || iParam0 == joaat("WEAPON_RAYCARBINE")) || iParam0 == joaat("WEAPON_FIREWORK")) || iParam0 == joaat("WEAPON_HOMINGLAUNCHER")) || iParam0 == joaat("WEAPON_COMPACTLAUNCHER")) || iParam0 == joaat("WEAPON_RAYMINIGUN")) || iParam0 == joaat("WEAPON_HEAVYSNIPER_MK2")) || iParam0 == joaat("WEAPON_MARKSMANRIFLE")) || iParam0 == joaat("WEAPON_MARKSMANRIFLE_MK2")) || iParam0 == joaat("WEAPON_STONE_HATCHET")) || iParam0 == joaat("WEAPON_POOLCUE")) || iParam0 == joaat("WEAPON_BATTLEAXE")) || iParam0 == joaat("WEAPON_NIGHTSTICK")) || iParam0 == joaat("WEAPON_SWITCHBLADE")) || iParam0 == joaat("WEAPON_FLASHLIGHT")) || iParam0 == joaat("WEAPON_KNUCKLE")) || iParam0 == joaat("WEAPON_GOLFCLUB")) || iParam0 == joaat("WEAPON_STUNGUN_MP")) || iParam0 == joaat("WEAPON_EMPLAUNCHER")) || iParam0 == joaat("WEAPON_TACTICALRIFLE")) || iParam0 == joaat("WEAPON_PRECISIONRIFLE")) || iParam0 == joaat("WEAPON_HEAVYRIFLE"))
	{
		return 1;
	}
	return 0;
}

void func_359(var uParam0, bool bParam1, var* uParam2, var* uParam3, var* uParam4, var* uParam5, var* uParam6, var* uParam7, var* uParam8, var* uParam9, var* uParam10)//Position - 0x18DDA7
{
	struct<9> Var0;
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1077936128;
	Var0.f_4 = 1082130432;
	Var0.f_5 = 1077936128;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
	if (*uParam2 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam2, bParam1) == 2)
	{
		*uParam0 = DATAFILE::DATAARRAY_GET_INT(*uParam2, bParam1);
	}
	if (*uParam3 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam3, bParam1) == 3)
	{
		uParam0->f_1 = DATAFILE::DATAARRAY_GET_FLOAT(*uParam3, bParam1);
	}
	if (*uParam4 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam4, bParam1) == 3)
	{
		uParam0->f_2 = DATAFILE::DATAARRAY_GET_FLOAT(*uParam4, bParam1);
	}
	if (*uParam5 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam5, bParam1) == 3)
	{
		uParam0->f_3 = DATAFILE::DATAARRAY_GET_FLOAT(*uParam5, bParam1);
	}
	if (*uParam6 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam6, bParam1) == 3)
	{
		uParam0->f_4 = DATAFILE::DATAARRAY_GET_FLOAT(*uParam6, bParam1);
	}
	if (*uParam7 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam7, bParam1) == 3)
	{
		uParam0->f_5 = DATAFILE::DATAARRAY_GET_FLOAT(*uParam7, bParam1);
	}
	if (*uParam8 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam8, bParam1) == 2)
	{
		uParam0->f_6 = DATAFILE::DATAARRAY_GET_INT(*uParam8, bParam1);
	}
	if (*uParam9 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam9, bParam1) == 2)
	{
		uParam0->f_7 = DATAFILE::DATAARRAY_GET_INT(*uParam9, bParam1);
	}
	if (*uParam10 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam10, bParam1) == 2)
	{
		uParam0->f_8 = DATAFILE::DATAARRAY_GET_INT(*uParam10, bParam1);
	}
}

void func_360(var uParam0, bool bParam1, var* uParam2, var* uParam3)//Position - 0x18DF42
{
	if (*uParam2 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam2, bParam1) == 2)
	{
		*uParam0 = DATAFILE::DATAARRAY_GET_INT(*uParam2, bParam1);
	}
	if (*uParam3 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam3, bParam1) == 2)
	{
		uParam0->f_1 = DATAFILE::DATAARRAY_GET_INT(*uParam3, bParam1);
	}
}

void func_361(int iParam0)//Position - 0x18E1C5
{
	if (*iParam0 == -1861812544)
	{
		*iParam0 = joaat("sum_prop_ac_rock_01a");
	}
	else if (*iParam0 == -1851129850)
	{
		*iParam0 = joaat("sum_prop_ac_rock_01b");
	}
	else if (*iParam0 == -1533303319)
	{
		*iParam0 = joaat("sum_prop_ac_rock_01c");
	}
	else if (*iParam0 == -1186607299)
	{
		*iParam0 = joaat("sum_prop_ac_rock_01d");
	}
	else if (*iParam0 == -943821778)
	{
		*iParam0 = joaat("sum_prop_ac_rock_01e");
	}
	else if (*iParam0 == -1868489442)
	{
		*iParam0 = joaat("sum_prop_ac_pit_sign_left");
	}
	else if (*iParam0 == 1308353333)
	{
		*iParam0 = joaat("sum_prop_ac_wall_sign_01");
	}
	else if (*iParam0 == 1456915955)
	{
		*iParam0 = joaat("sum_prop_ac_wall_sign_0l1");
	}
	else if (*iParam0 == 1907350248)
	{
		*iParam0 = joaat("sum_prop_ac_wall_sign_0r1");
	}
	else if (*iParam0 == 599363249)
	{
		*iParam0 = joaat("sum_prop_ac_wall_sign_02");
	}
	else if (*iParam0 == 92066360)
	{
		*iParam0 = joaat("sum_prop_ac_wall_sign_04");
	}
	else if (*iParam0 == 828910094)
	{
		*iParam0 = joaat("sum_prop_ac_wall_sign_03");
	}
	else if (*iParam0 == 357986795)
	{
		*iParam0 = joaat("sum_prop_ac_wall_sign_05");
	}
	else if (*iParam0 == -1652280004)
	{
		*iParam0 = joaat("sum_prop_ac_tyre_wall_lit_01");
	}
	else if (*iParam0 == -1805969005)
	{
		*iParam0 = joaat("sum_prop_ac_tyre_wall_lit_0r1");
	}
	else if (*iParam0 == 337086132)
	{
		*iParam0 = joaat("sum_prop_ac_tyre_wall_lit_0l1");
	}
	else if (*iParam0 == -19979547)
	{
		*iParam0 = joaat("sum_prop_ac_tyre_wall_pit_l");
	}
	else if (*iParam0 == -1862711501)
	{
		*iParam0 = joaat("sum_prop_ac_tyre_wall_pit_r");
	}
	else if (*iParam0 == 1372569558)
	{
		*iParam0 = joaat("sum_prop_ac_tyre_wall_u_l");
	}
	else if (*iParam0 == -1994641814)
	{
		*iParam0 = joaat("sum_prop_ac_tyre_wall_u_r");
	}
	else if (*iParam0 == 261612790)
	{
		*iParam0 = joaat("sum_prop_archway_01");
	}
	else if (*iParam0 == -894411992)
	{
		*iParam0 = joaat("sum_prop_archway_02");
	}
	else if (*iParam0 == 2075999603)
	{
		*iParam0 = joaat("sum_prop_archway_03");
	}
	else if (*iParam0 == 1881752441)
	{
		*iParam0 = joaat("sum_prop_ac_pit_sign_r_01a");
	}
	else if (*iParam0 == -24901620)
	{
		*iParam0 = joaat("sum_prop_ac_pit_sign_l_01a");
	}
	else if (*iParam0 == 262055884)
	{
		*iParam0 = joaat("sum_prop_ac_track_pit_stop_16l");
	}
	else if (*iParam0 == -677595155)
	{
		*iParam0 = joaat("sum_prop_ac_track_pit_stop_16r");
	}
	else if (*iParam0 == 320802763)
	{
		*iParam0 = joaat("sum_prop_ac_track_pit_stop_30l");
	}
	else if (*iParam0 == 82867054)
	{
		*iParam0 = joaat("sum_prop_ac_track_pit_stop_30r");
	}
	else if (*iParam0 == -147296475)
	{
		*iParam0 = joaat("sum_prop_ac_track_pit_stop_01");
	}
	else if (*iParam0 == 1993724063)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_45");
	}
	else if (*iParam0 == -1707006199)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_lc");
	}
	else if (*iParam0 == -322856868)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_135");
	}
	else if (*iParam0 == 810174293)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_180d");
	}
	else if (*iParam0 == -764155579)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_bar_45");
	}
	else if (*iParam0 == -1016370941)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_bar_135");
	}
	else if (*iParam0 == 1007762428)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_bar_180d");
	}
	else if (*iParam0 == -810402164)
	{
		*iParam0 = joaat("sum_prop_race_barrier_01_sec");
	}
	else if (*iParam0 == 1054513951)
	{
		*iParam0 = joaat("sum_prop_race_barrier_02_sec");
	}
	else if (*iParam0 == -1927050814)
	{
		*iParam0 = joaat("sum_prop_race_barrier_04_sec");
	}
	else if (*iParam0 == -471725193)
	{
		*iParam0 = joaat("sum_prop_race_barrier_08_sec");
	}
	else if (*iParam0 == -155668237)
	{
		*iParam0 = joaat("sum_prop_race_barrier_16_sec");
	}
	else if (*iParam0 == -724464858)
	{
		*iParam0 = joaat("sum_prop_ac_short_barrier_05d");
	}
	else if (*iParam0 == 2228859)
	{
		*iParam0 = joaat("sum_prop_ac_short_barrier_15d");
	}
	else if (*iParam0 == 1802255136)
	{
		*iParam0 = joaat("sum_prop_ac_short_barrier_30d");
	}
	else if (*iParam0 == -214062967)
	{
		*iParam0 = joaat("sum_prop_ac_short_barrier_45d");
	}
	else if (*iParam0 == 631255219)
	{
		*iParam0 = joaat("sum_prop_ac_short_barrier_90d");
	}
	else if (*iParam0 == 1069667067)
	{
		*iParam0 = joaat("sum_prop_ac_long_barrier_05d");
	}
	else if (*iParam0 == 1900578634)
	{
		*iParam0 = joaat("sum_prop_ac_long_barrier_15d");
	}
	else if (*iParam0 == 1484108471)
	{
		*iParam0 = joaat("sum_prop_ac_long_barrier_30d");
	}
	else if (*iParam0 == 921491744)
	{
		*iParam0 = joaat("sum_prop_ac_long_barrier_45d");
	}
	else if (*iParam0 == -1818585231)
	{
		*iParam0 = joaat("sum_prop_ac_long_barrier_90d");
	}
	else if (*iParam0 == -210764767)
	{
		*iParam0 = joaat("sum_prop_barrier_ac_bend_05d");
	}
	else if (*iParam0 == 1211651983)
	{
		*iParam0 = joaat("sum_prop_barrier_ac_bend_15d");
	}
	else if (*iParam0 == -1974539354)
	{
		*iParam0 = joaat("sum_prop_barrier_ac_bend_30d");
	}
	else if (*iParam0 == -832013963)
	{
		*iParam0 = joaat("sum_prop_barrier_ac_bend_45d");
	}
	else if (*iParam0 == 118315381)
	{
		*iParam0 = joaat("sum_prop_barrier_ac_bend_90d");
	}
	else if (*iParam0 == -8734659)
	{
		*iParam0 = joaat("sum_prop_track_ac_straight_bar_s_s");
	}
	else if (*iParam0 == 2067905173)
	{
		*iParam0 = joaat("sum_prop_track_ac_straight_bar_s");
	}
	else if (*iParam0 == -334932667)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_bar_m_out");
	}
	else if (*iParam0 == 2070963532)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_bar_m_in");
	}
	else if (*iParam0 == -687271813)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_bar_l_out");
	}
	else if (*iParam0 == 696455424)
	{
		*iParam0 = joaat("sum_prop_track_ac_bend_bar_l_b");
	}
	else if (*iParam0 == -425898182)
	{
		*iParam0 = joaat("sum_prop_ac_track_paddock_01");
	}
	else if (*iParam0 == -458535644)
	{
		*iParam0 = joaat("sum_prop_track_pit_garage_05a");
	}
	else if (*iParam0 == -937127205)
	{
		*iParam0 = joaat("sum_prop_track_pit_garage_04a");
	}
	else if (*iParam0 == 1470014629)
	{
		*iParam0 = joaat("sum_prop_track_pit_garage_03a");
	}
	else if (*iParam0 == -1878093276)
	{
		*iParam0 = joaat("sum_prop_track_pit_garage_02a");
	}
	else if (*iParam0 == 479937070)
	{
		*iParam0 = joaat("sum_prop_ac_pit_garage_01a");
	}
	else if (*iParam0 == 913119601)
	{
		*iParam0 = joaat("sum_prop_ac_grandstand_01a");
	}
	else if (*iParam0 == 912618411)
	{
		*iParam0 = joaat("sum_prop_ac_barge_01");
	}
	else if (*iParam0 == -695492201)
	{
		*iParam0 = joaat("sum_prop_ac_ind_light_02a");
	}
	else if (*iParam0 == 1477685997)
	{
		*iParam0 = joaat("sum_prop_ac_ind_light_03c");
	}
	else if (*iParam0 == -1233037607)
	{
		*iParam0 = joaat("sum_prop_ac_ind_light_04");
	}
	else if (*iParam0 == -1020580875)
	{
		*iParam0 = joaat("sum_prop_ac_wall_light_09a");
	}
}

int func_362(int iParam0)//Position - 0x19007F
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 5000;
		case 2:
			return 10000;
		case 3:
			return 20000;
		case 4:
			return 30000;
		case 5:
			return 45000;
		case 6:
			return 60000;
		default:
	}
	return 0;
}

int func_363(int iParam0)//Position - 0x1900E3
{
	if (((iParam0 == joaat("ch_prop_track_paddock_01") || iParam0 == joaat("sum_prop_ac_track_paddock_01")) || iParam0 == joaat("ch_prop_track_pit_garage_01a")) || iParam0 == joaat("sum_prop_ac_grandstand_01a"))
	{
		return 1;
	}
	return 0;
}

bool func_364()//Position - 0x190125
{
	return Global_4718592 == 2;
}

int func_365(int iParam0)//Position - 0x190133
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("prop_sec_gate_01d") || iParam0 == joaat("prop_vault_shutter")) || iParam0 == joaat("gr_prop_gr_bunkeddoor")) || iParam0 == joaat("prop_worklight_01a")) || iParam0 == joaat("prop_worklight_02a")) || iParam0 == joaat("prop_worklight_03a")) || iParam0 == joaat("prop_worklight_03b")) || iParam0 == joaat("prop_worklight_04b")) || iParam0 == joaat("prop_worklight_04d")) || iParam0 == joaat("prop_ind_coalcar_02")) || iParam0 == joaat("xm_prop_x17_osphatch_27m")) || iParam0 == joaat("imp_prop_impexp_boxpile_01")) || iParam0 == joaat("hei_prop_carrier_cargo_01a")) || iParam0 == joaat("sr_prop_sr_boxpile_02")) || iParam0 == joaat("sr_prop_sr_boxpile_03")) || iParam0 == joaat("prop_water_ramp_01")) || iParam0 == joaat("prop_water_ramp_02")) || iParam0 == joaat("prop_water_ramp_03")) || iParam0 == joaat("stt_prop_track_bend_l")) || iParam0 == joaat("stt_prop_track_bend2_l")) || iParam0 == joaat("stt_prop_track_bend_bar_l")) || iParam0 == joaat("stt_prop_track_bend2_bar_l")) || iParam0 == joaat("prop_ld_alarm_01")) || iParam0 == joaat("ind_prop_dlc_flag_02")) || iParam0 == joaat("prop_flare_01")) || iParam0 == joaat("hei_prop_bank_plug")) || iParam0 == joaat("hei_prop_wall_alarm_on")) || iParam0 == joaat("hei_prop_wall_alarm_off")) || iParam0 == joaat("hei_prop_hei_cash_trolly_03")) || iParam0 == joaat("hei_prop_carrier_docklight_01")) || iParam0 == joaat("hei_prop_carrier_docklight_02")) || iParam0 == joaat("hei_prop_wall_light_10a_cr")) || iParam0 == joaat("hei_prop_heist_apecrate")) || iParam0 == joaat("hei_prop_cc_metalcover_01")) || iParam0 == joaat("hei_prop_bank_alarm_01")) || iParam0 == joaat("prop_road_memorial_02")) || iParam0 == joaat("prop_boombox_01")) || iParam0 == joaat("prop_ghettoblast_02")) || iParam0 == joaat("prop_tapeplayer_01")) || iParam0 == joaat("prop_radio_01")) || iParam0 == joaat("prop_shamal_crash")) || iParam0 == joaat("apa_mp_apa_crashed_usaf_01a")) || iParam0 == joaat("ind_prop_firework_01")) || iParam0 == -1305574636) || iParam0 == joaat("ba_prop_battle_mast_01a")) || iParam0 == joaat("sr_prop_spec_target_s_01a")) || iParam0 == joaat("sr_prop_spec_target_m_01a")) || iParam0 == joaat("sr_prop_spec_target_b_01a")) || iParam0 == joaat("w_ar_railgun")) || iParam0 == joaat("prop_cs_heist_bag_01")) || iParam0 == joaat("prop_bikerset")) || iParam0 == joaat("prop_champset")) || iParam0 == joaat("xm_prop_x17_desk_cover_01a")) || iParam0 == joaat("xm_prop_x17_tool_draw_01a")) || iParam0 == joaat("xm_prop_x17_filecab_01a")) || iParam0 == joaat("xm_prop_x17_labvats")) || iParam0 == joaat("xm_prop_x17_seat_cover_01a")) || iParam0 == joaat("xm_prop_x17_tv_stand_01a")) || iParam0 == joaat("xm_prop_x17_bag_01a")) || iParam0 == joaat("xm_prop_x17_bag_med_01a")) || iParam0 == joaat("xm_prop_x17_sub")) || iParam0 == joaat("xm_prop_base_cabinet_door_01")) || iParam0 == joaat("U_F_Y_corpse_01")) || iParam0 == joaat("U_F_Y_corpse_02")) || iParam0 == joaat("xm_prop_x17_corpse_01")) || iParam0 == joaat("xm_prop_x17_corpse_02")) || iParam0 == joaat("xm_prop_x17_corpse_03")) || iParam0 == joaat("xm_prop_x17_shovel_01b")) || iParam0 == joaat("xm_prop_x17_shovel_01a")) || iParam0 == joaat("xm_prop_x17_note_paper_01a")) || iParam0 == joaat("xm_prop_x17_chest_closed")) || iParam0 == joaat("xm_prop_x17_chest_open")) || iParam0 == joaat("gr_prop_gr_crates_pistols_01a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_01a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_02a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_03a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_04a")) || iParam0 == joaat("gr_prop_gr_crates_sam_01a")) || iParam0 == joaat("gr_prop_gr_crates_weapon_mix_01a")) || iParam0 == joaat("gr_prop_gr_gunsmithsupl_01a")) || iParam0 == joaat("gr_prop_gr_gunsmithsupl_02a")) || iParam0 == joaat("gr_prop_gr_gunsmithsupl_03a")) || iParam0 == joaat("gr_prop_gr_rsply_crate01a")) || iParam0 == joaat("gr_prop_gr_rsply_crate02a")) || iParam0 == joaat("gr_prop_gr_rsply_crate03a")) || iParam0 == joaat("hei_heist_apart2_door")) || iParam0 == joaat("prop_target_ora_purp_01")) || iParam0 == joaat("gr_prop_gr_target_01a")) || iParam0 == joaat("gr_prop_gr_target_01b")) || iParam0 == joaat("gr_prop_gr_target_02a")) || iParam0 == joaat("gr_prop_gr_target_02b")) || iParam0 == joaat("gr_prop_gr_bench_01a")) || iParam0 == joaat("gr_prop_gr_bench_01b")) || iParam0 == joaat("gr_prop_gr_bench_02a")) || iParam0 == joaat("gr_prop_gr_bench_02b")) || iParam0 == joaat("gr_prop_gr_speeddrill_01a")) || iParam0 == joaat("gr_prop_gr_vertmill_01a")) || iParam0 == joaat("gr_prop_gr_cratespile_01a")) || iParam0 == joaat("imp_prop_covered_vehicle_01a")) || iParam0 == joaat("imp_prop_covered_vehicle_04a")) || iParam0 == joaat("imp_prop_covered_vehicle_02a")) || iParam0 == joaat("imp_prop_covered_vehicle_05a")) || iParam0 == joaat("imp_prop_covered_vehicle_03a")) || iParam0 == joaat("imp_prop_covered_vehicle_06a")) || iParam0 == joaat("gr_prop_gr_target_1_01a")) || iParam0 == joaat("gr_prop_gr_target_1_01b")) || iParam0 == joaat("gr_prop_gr_target_2_04a")) || iParam0 == joaat("gr_prop_gr_target_2_04b")) || iParam0 == joaat("gr_prop_gr_target_3_03a")) || iParam0 == joaat("gr_prop_gr_target_3_03b")) || iParam0 == joaat("gr_prop_gr_target_4_01a")) || iParam0 == joaat("gr_prop_gr_target_4_01b")) || iParam0 == joaat("gr_prop_gr_target_5_01a")) || iParam0 == joaat("gr_prop_gr_target_5_01b")) || iParam0 == joaat("gr_prop_gr_target_small_01a")) || iParam0 == joaat("gr_prop_gr_target_small_01b")) || iParam0 == joaat("gr_prop_gr_target_small_03a")) || iParam0 == joaat("gr_prop_gr_target_small_02a")) || iParam0 == joaat("gr_prop_gr_target_small_06a")) || iParam0 == joaat("gr_prop_gr_target_small_07a")) || iParam0 == joaat("gr_prop_gr_target_small_04a")) || iParam0 == joaat("gr_prop_gr_target_small_05a")) || iParam0 == joaat("gr_prop_gr_target_long_01a")) || iParam0 == joaat("gr_prop_gr_target_large_01a")) || iParam0 == joaat("gr_prop_gr_target_large_01b")) || iParam0 == joaat("gr_prop_gr_target_trap_01a")) || iParam0 == joaat("gr_prop_gr_target_trap_02a")) || iParam0 == joaat("ar_prop_ar_tube_crn")) || iParam0 == joaat("ar_prop_ar_tube_fork")) || iParam0 == joaat("ar_prop_ar_tube_cross")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn2")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn_30d")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn_15d")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn2")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn_30d")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn_15d")) || iParam0 == joaat("ar_prop_ar_stunt_block_01a")) || iParam0 == joaat("ar_prop_ar_stunt_block_01b")) || iParam0 == joaat("ar_prop_ar_tube_4x_speed")) || iParam0 == joaat("gr_prop_damship_01a")) || iParam0 == joaat("xm_prop_base_jet_01")) || iParam0 == joaat("xm_prop_base_jet_02")) || iParam0 == joaat("bkr_prop_mast_01a")) || iParam0 == joaat("xm_prop_gr_console_01")) || iParam0 == joaat("prop_cabinet_01b")) || iParam0 == joaat("ch_prop_ch_casino_shutter01x")) || iParam0 == joaat("ch_prop_stunt_landing_zone_01a")) || iParam0 == joaat("ch_prop_track_ch_bend_45")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_45d")) || iParam0 == joaat("ch_prop_ch_tunnel_door01a")) || iParam0 == joaat("ch_prop_track_pit_stop_01")) || iParam0 == joaat("ch_prop_ch_room_trolly_01a")) || iParam0 == joaat("prop_bikerset")) || iParam0 == joaat("ch_prop_track_pit_garage_01a")) || iParam0 == joaat("ch_prop_track_paddock_01")) || iParam0 == joaat("sum_prop_ac_rock_01a")) || iParam0 == joaat("sum_prop_ac_rock_01b")) || iParam0 == joaat("sum_prop_ac_rock_01c")) || iParam0 == joaat("sum_prop_ac_rock_01d")) || iParam0 == joaat("sum_prop_ac_rock_01e")) || iParam0 == joaat("sum_prop_ac_ind_light_02a")) || iParam0 == joaat("sum_prop_ac_ind_light_03c")) || iParam0 == joaat("sum_prop_ac_ind_light_04")) || iParam0 == joaat("sum_prop_ac_wall_light_09a")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_s_s")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_s")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_l_out")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_l_b")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_m_out")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_m_in")) || iParam0 == joaat("ch_prop_track_ch_bend_180d")) || iParam0 == joaat("ch_prop_track_ch_bend_135")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_135")) || iParam0 == joaat("h4_prop_h4_boxpile_01a")) || iParam0 == joaat("h4_prop_h4_tannoy_01a")) || iParam0 == joaat("h4_prop_h4_sign_cctv_01a")) || iParam0 == joaat("h4_prop_h4_sub_kos")) || iParam0 == joaat("h4_prop_h4_fence_seg_x1_01a")) || iParam0 == joaat("h4_prop_h4_fence_seg_x3_01a")) || iParam0 == joaat("h4_prop_h4_fence_seg_x5_01a")) || iParam0 == joaat("h4_prop_h4_fence_arches_x2_01a")) || iParam0 == joaat("h4_prop_h4_fence_arches_x3_01a")) || iParam0 == joaat("h4_prop_office_desk_01")) || iParam0 == joaat("h4_prop_h4_sec_cabinet_dum")) || iParam0 == joaat("h4_prop_h4_loch_monster")) || iParam0 == joaat("prop_box_wood02a_pu")) || iParam0 == joaat("h4_prop_h4_cctv_pole_04")) || iParam0 == joaat("h4_prop_h4_t_bottle_02a")) || iParam0 == joaat("h4_prop_h4_neck_disp_01a")) || iParam0 == joaat("h4_prop_h4_necklace_01a")) || iParam0 == joaat("h4_prop_h4_art_pant_01a")) || iParam0 == joaat("h4_prop_h4_diamond_disp_01a")) || iParam0 == joaat("h4_prop_h4_diamond_01a")) || iParam0 == joaat("gr_prop_inttruck_door_01")) || iParam0 == joaat("gr_prop_gr_trailer_tv")) || iParam0 == joaat("gr_prop_gr_trailer_tv_02")) || iParam0 == joaat("gr_prop_gr_trailer_monitor_01")) || iParam0 == joaat("gr_prop_gr_trailer_monitor_02")) || iParam0 == joaat("gr_prop_gr_trailer_monitor_03")) || iParam0 == joaat("tr_prop_tr_ramp_01a")) || iParam0 == joaat("tr_prop_tr_crates_sam_01a"))
	{
		return 1;
	}
	return 0;
}

int func_366(int iParam0)//Position - 0x190C84
{
	if (iParam0 == joaat("v_corp_conftable2"))
	{
		return 1;
	}
	return 0;
}

void func_367(bool bParam0, var* uParam1, var uParam2, int iParam3)//Position - 0x195A28
{
	int iVar0;
	iVar0 = Global_4980736.f_78578[bParam0 /*450*/].f_393;
	if (iVar0 < 0)
	{
		return;
	}
	if (*uParam1 != 0 && DATAFILE::DATAARRAY_GET_TYPE(*uParam1, iVar0) == 2)
	{
		*uParam2 = DATAFILE::DATAARRAY_GET_INT(*uParam1, iVar0);
	}
	else
	{
		*uParam2 = iParam3;
	}
}

int func_368(int iParam0)//Position - 0x195ABC
{
	if (!__LIB_0__.func_236())
	{
		if ((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("trash2") || iParam0 == joaat("emperor2")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("barracks3")) || iParam0 == joaat("slamvan2")) || iParam0 == joaat("boxville3")) || iParam0 == joaat("boxville4")) || iParam0 == joaat("picador")) || iParam0 == joaat("peyote")) || iParam0 == joaat("tornado")) || iParam0 == joaat("tr2")) || iParam0 == joaat("lurcher")) || iParam0 == joaat("btype2")) || iParam0 == joaat("limo2")) || iParam0 == joaat("dune4")) || iParam0 == joaat("ruiner3")) || iParam0 == joaat("cargoplane")) || iParam0 == joaat("trailerlarge")) || iParam0 == joaat("phantom3")) || iParam0 == joaat("hauler2")) || iParam0 == joaat("submersible2")) || iParam0 == joaat("policet")) || iParam0 == joaat("terbyte")) || iParam0 == joaat("blimp3")) || iParam0 == joaat("rcbandito")) || iParam0 == joaat("cargobob4")) || iParam0 == joaat("minitank")) || iParam0 == joaat("bison3")) || iParam0 == joaat("boxville")) || iParam0 == joaat("burrito")) || iParam0 == joaat("burrito2")) || iParam0 == joaat("pony")) || iParam0 == joaat("rancherxl")) || iParam0 == joaat("rebel2")) || iParam0 == joaat("seashark3")) || iParam0 == joaat("forklift")) || iParam0 == joaat("dloader")) || iParam0 == joaat("kosatka")) || iParam0 == joaat("avisa")) || iParam0 == joaat("seasparrow2")) || iParam0 == joaat("boattrailer")) || iParam0 == joaat("youga4")) || iParam0 == joaat("mule5")) || iParam0 == joaat("airbus")) || iParam0 == joaat("rentalbus"))
		{
			return 1;
		}
	}
	return 0;
}

int func_369(int iParam0)//Position - 0x19A1C4
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_PISTOL");
			break;
		case 1:
			return joaat("WEAPON_COMBATPISTOL");
			break;
		case 2:
			return joaat("WEAPON_APPISTOL");
			break;
		case 29:
			return joaat("WEAPON_SNSPISTOL");
			break;
		case 30:
			return joaat("WEAPON_HEAVYPISTOL");
			break;
		case 37:
			return joaat("WEAPON_VINTAGEPISTOL");
			break;
		case 35:
			return joaat("WEAPON_PISTOL50");
			break;
		case 69:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_PISTOL_MK2");
			}
			break;
		case 75:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_REVOLVER_MK2");
			}
			break;
		case 3:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 4:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
			break;
		case 5:
			return joaat("WEAPON_ASSAULTSHOTGUN");
			break;
		case 40:
			return joaat("WEAPON_HEAVYSHOTGUN");
			break;
		case 76:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_PUMPSHOTGUN_MK2");
			}
			break;
		case 6:
			return joaat("WEAPON_MICROSMG");
			break;
		case 7:
			return joaat("WEAPON_SMG");
			break;
		case 8:
			return joaat("WEAPON_MG");
			break;
		case 9:
			return joaat("WEAPON_COMBATMG");
			break;
		case 31:
			return joaat("WEAPON_GUSENBERG");
			break;
		case 70:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_SMG_MK2");
			}
			break;
		case 71:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_COMBATMG_MK2");
			}
			break;
		case 10:
			return joaat("WEAPON_ASSAULTRIFLE");
			break;
		case 11:
			return joaat("WEAPON_CARBINERIFLE");
			break;
		case 12:
			return joaat("WEAPON_ADVANCEDRIFLE");
			break;
		case 32:
			return joaat("WEAPON_SPECIALCARBINE");
			break;
		case 33:
			return joaat("WEAPON_BULLPUPRIFLE");
			break;
		case 39:
			return joaat("WEAPON_MUSKET");
			break;
		case 72:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_ASSAULTRIFLE_MK2");
			}
			break;
		case 73:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_CARBINERIFLE_MK2");
			}
			break;
		case 77:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_BULLPUPRIFLE_MK2");
			}
			break;
		case 78:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_SPECIALCARBINE_MK2");
			}
			break;
		case 13:
			return joaat("WEAPON_SNIPERRIFLE");
			break;
		case 14:
			return joaat("WEAPON_HEAVYSNIPER");
			break;
		case 41:
			return joaat("WEAPON_MARKSMANRIFLE");
			break;
		case 79:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_HEAVYSNIPER_MK2");
			}
			break;
		case 15:
			return joaat("WEAPON_GRENADELAUNCHER");
			break;
		case 16:
			return joaat("WEAPON_RPG");
			break;
		case 17:
			return joaat("WEAPON_MINIGUN");
			break;
		case 38:
			return joaat("WEAPON_FIREWORK");
			break;
		case 43:
			return joaat("WEAPON_HOMINGLAUNCHER");
			break;
		case 55:
			return joaat("WEAPON_RAILGUN");
			break;
		case 18:
			return joaat("WEAPON_GRENADE");
			break;
		case 19:
			return joaat("WEAPON_STICKYBOMB");
			break;
		case 20:
			return joaat("WEAPON_SMOKEGRENADE");
			break;
		case 21:
			return joaat("WEAPON_MOLOTOV");
			break;
		case 22:
			return joaat("WEAPON_PETROLCAN");
			break;
		case 44:
			return joaat("WEAPON_PROXMINE");
			break;
		case 23:
			return joaat("WEAPON_KNIFE");
			break;
		case 24:
			return joaat("WEAPON_NIGHTSTICK");
			break;
		case 25:
			return joaat("WEAPON_BAT");
			break;
		case 26:
			return joaat("WEAPON_CROWBAR");
			break;
		case 27:
			return joaat("WEAPON_GOLFCLUB");
			break;
		case 34:
			return joaat("WEAPON_BOTTLE");
			break;
		case 36:
			return joaat("WEAPON_DAGGER");
			break;
		case 28:
			return joaat("WEAPON_UNARMED");
			break;
		case 42:
			return joaat("WEAPON_FLAREGUN");
			break;
		case 45:
			return joaat("WEAPON_KNUCKLE");
			break;
		case 46:
			return joaat("WEAPON_COMBATPDW");
			break;
		case 47:
			return joaat("WEAPON_MARKSMANPISTOL");
			break;
		case 53:
			return joaat("WEAPON_HATCHET");
			break;
		case 48:
			return joaat("WEAPON_MACHETE");
			break;
		case 51:
			return joaat("WEAPON_MACHINEPISTOL");
			break;
		case 54:
			return joaat("WEAPON_ASSAULTSMG");
			break;
		case 49:
			return joaat("WEAPON_DBSHOTGUN");
			break;
		case 50:
			return joaat("WEAPON_COMPACTRIFLE");
			break;
		case 52:
			return joaat("WEAPON_FLASHLIGHT");
			break;
		case 56:
			return joaat("WEAPON_REVOLVER");
			break;
		case 57:
			return joaat("WEAPON_SWITCHBLADE");
			break;
		case 58:
			return joaat("WEAPON_GUSENBERG");
			break;
		case 59:
			return joaat("WEAPON_AUTOSHOTGUN");
			break;
		case 60:
			return joaat("WEAPON_MINISMG");
			break;
		case 61:
			return joaat("WEAPON_COMPACTLAUNCHER");
			break;
		case 62:
			return joaat("WEAPON_PIPEBOMB");
			break;
		case 63:
			return joaat("WEAPON_POOLCUE");
			break;
		case 64:
			return joaat("WEAPON_BATTLEAXE");
			break;
		case 65:
			return joaat("WEAPON_WRENCH");
			break;
		case 66:
			return joaat("WEAPON_BULLPUPSHOTGUN");
			break;
		case 67:
			return joaat("WEAPON_HAMMER");
			break;
		case 68:
			return joaat("WEAPON_DOUBLEACTION");
			break;
		case 80:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_MARKSMANRIFLE_MK2");
			}
			break;
		case 81:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_SNSPISTOL_MK2");
			}
			break;
		case 82:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_REVOLVER_MK2");
			}
			break;
		case 83:
			if (__LIB_0__.func_236())
			{
				return joaat("WEAPON_STONE_HATCHET");
			}
			break;
	}
	return joaat("WEAPON_PISTOL");
}

int func_370(int iParam0)//Position - 0x19A7BD
{
	switch (iParam0)
	{
		case joaat("PICKUP_HEALTH_STANDARD"):
		case joaat("PICKUP_ARMOUR_STANDARD"):
		case joaat("PICKUP_HEALTH_SNACK"):
		case joaat("PICKUP_MONEY_VARIABLE"):
		case joaat("PICKUP_MONEY_CASE"):
		case joaat("PICKUP_MONEY_WALLET"):
		case joaat("PICKUP_MONEY_PURSE"):
		case joaat("PICKUP_MONEY_DEP_BAG"):
		case joaat("PICKUP_MONEY_MED_BAG"):
		case joaat("PICKUP_MONEY_PAPER_BAG"):
		case joaat("PICKUP_MONEY_SECURITY_CASE"):
		case joaat("PICKUP_GANG_ATTACK_MONEY"):
		case joaat("PICKUP_WEAPON_PISTOL"):
		case joaat("PICKUP_WEAPON_COMBATPISTOL"):
		case joaat("PICKUP_WEAPON_PISTOL50"):
		case joaat("PICKUP_WEAPON_APPISTOL"):
		case joaat("PICKUP_WEAPON_MICROSMG"):
		case joaat("PICKUP_WEAPON_SMG"):
		case joaat("PICKUP_WEAPON_ASSAULTSMG"):
		case joaat("PICKUP_WEAPON_ASSAULTRIFLE"):
		case joaat("PICKUP_WEAPON_CARBINERIFLE"):
		case joaat("PICKUP_WEAPON_HEAVYRIFLE"):
		case joaat("PICKUP_WEAPON_ADVANCEDRIFLE"):
		case joaat("PICKUP_WEAPON_MG"):
		case joaat("PICKUP_WEAPON_COMBATMG"):
		case joaat("PICKUP_WEAPON_ASSAULTMG"):
		case joaat("PICKUP_WEAPON_PUMPSHOTGUN"):
		case joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"):
		case joaat("PICKUP_WEAPON_ASSAULTSHOTGUN"):
		case joaat("PICKUP_WEAPON_SNIPERRIFLE"):
		case joaat("PICKUP_WEAPON_ASSAULTSNIPER"):
		case joaat("PICKUP_WEAPON_HEAVYSNIPER"):
		case joaat("PICKUP_WEAPON_GRENADELAUNCHER"):
		case joaat("PICKUP_WEAPON_RPG"):
		case joaat("PICKUP_WEAPON_MINIGUN"):
		case joaat("PICKUP_WEAPON_GRENADE"):
		case joaat("PICKUP_WEAPON_SMOKEGRENADE"):
		case joaat("PICKUP_WEAPON_STICKYBOMB"):
		case joaat("PICKUP_WEAPON_MOLOTOV"):
		case joaat("PICKUP_WEAPON_STUNGUN"):
		case joaat("PICKUP_WEAPON_RUBBERGUN"):
		case joaat("PICKUP_WEAPON_PROGRAMMABLEAR"):
		case joaat("PICKUP_WEAPON_FIREEXTINGUISHER"):
		case joaat("PICKUP_WEAPON_PETROLCAN"):
		case joaat("PICKUP_WEAPON_LOUDHAILER"):
		case joaat("PICKUP_WEAPON_KNIFE"):
		case joaat("PICKUP_WEAPON_NIGHTSTICK"):
		case joaat("PICKUP_WEAPON_HAMMER"):
		case joaat("PICKUP_WEAPON_BAT"):
		case joaat("PICKUP_WEAPON_CROWBAR"):
		case joaat("PICKUP_WEAPON_GOLFCLUB"):
		case joaat("PICKUP_AMMO_BULLET_MP"):
		case joaat("PICKUP_AMMO_MISSILE_MP"):
		case joaat("PICKUP_AMMO_GRENADELAUNCHER_MP"):
		case joaat("PICKUP_AMMO_PISTOL"):
		case joaat("PICKUP_AMMO_SMG"):
		case joaat("PICKUP_AMMO_RIFLE"):
		case joaat("PICKUP_AMMO_MG"):
		case joaat("PICKUP_AMMO_SHOTGUN"):
			return 1;
		default:
	}
	switch (iParam0)
	{
		case joaat("PICKUP_AMMO_SNIPER"):
		case joaat("PICKUP_AMMO_GRENADELAUNCHER"):
		case joaat("PICKUP_AMMO_RPG"):
		case joaat("PICKUP_AMMO_MINIGUN"):
		case joaat("PICKUP_AMMO_RUBBERGUN"):
		case joaat("PICKUP_AMMO_HARPOON"):
		case joaat("PICKUP_AMMO_FLAREGUN"):
		case joaat("PICKUP_AMMO_FIREWORK"):
		case joaat("PICKUP_AMMO_AMRIFLE"):
		case joaat("PICKUP_AMMO_CROSSBOW"):
		case joaat("PICKUP_VEHICLE_HEALTH_STANDARD"):
		case joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW"):
		case joaat("PICKUP_VEHICLE_ARMOUR_STANDARD"):
		case joaat("PICKUP_VEHICLE_WEAPON_PISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_COMBATPISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_PISTOL50"):
		case joaat("PICKUP_VEHICLE_WEAPON_APPISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_MICROSMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_SMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_SAWNOFF"):
		case joaat("PICKUP_VEHICLE_WEAPON_ASSAULTSMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_GRENADE"):
		case joaat("PICKUP_VEHICLE_WEAPON_SMOKEGRENADE"):
		case joaat("PICKUP_VEHICLE_WEAPON_STICKYBOMB"):
		case joaat("PICKUP_VEHICLE_WEAPON_MOLOTOV"):
		case joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT"):
		case joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT_LOW_GLOW"):
		case joaat("PICKUP_VEHICLE_MONEY_VARIABLE"):
		case joaat("PICKUP_PORTABLE_CRATE_UNFIXED"):
		case joaat("PICKUP_PORTABLE_CRATE_UNFIXED_LOW_GLOW"):
		case joaat("PICKUP_PORTABLE_PACKAGE"):
		case joaat("PICKUP_PORTABLE_DLC_VEHICLE_PACKAGE"):
		case joaat("PICKUP_SUBMARINE"):
		case joaat("PICKUP_PARACHUTE"):
		case joaat("PICKUP_CUSTOM_SCRIPT"):
		case joaat("PICKUP_HANDCUFF_KEY"):
		case joaat("PICKUP_CAMERA"):
		case joaat("PICKUP_WEAPON_BOTTLE"):
		case joaat("PICKUP_WEAPON_SPECIALCARBINE"):
		case joaat("PICKUP_WEAPON_SNSPISTOL"):
		case joaat("PICKUP_WEAPON_BULLPUPRIFLE"):
		case joaat("PICKUP_WEAPON_HEAVYPISTOL"):
		case joaat("PICKUP_WEAPON_DAGGER"):
		case joaat("PICKUP_WEAPON_VINTAGEPISTOL"):
		case joaat("PICKUP_WEAPON_GUSENBERG"):
		case joaat("PICKUP_WEAPON_FIREWORK"):
		case joaat("PICKUP_WEAPON_MUSKET"):
		case joaat("PICKUP_WEAPON_HOMINGLAUNCHER"):
		case joaat("PICKUP_WEAPON_PROXMINE"):
		case joaat("PICKUP_WEAPON_HATCHET"):
		case joaat("PICKUP_WEAPON_RAILGUN"):
		case joaat("PICKUP_WEAPON_FLAREGUN"):
		case joaat("PICKUP_WEAPON_BULLPUPSHOTGUN"):
		case joaat("PICKUP_WEAPON_MACHINEPISTOL"):
		case joaat("PICKUP_WEAPON_MARKSMANPISTOL"):
		case joaat("PICKUP_WEAPON_HEAVYSHOTGUN"):
		case joaat("PICKUP_WEAPON_MARKSMANRIFLE"):
		case joaat("PICKUP_WEAPON_COMPACTRIFLE"):
		case joaat("PICKUP_WEAPON_DBSHOTGUN"):
		case joaat("PICKUP_WEAPON_MACHETE"):
		case joaat("PICKUP_WEAPON_FLASHLIGHT"):
		case joaat("PICKUP_WEAPON_KNUCKLE"):
		case joaat("PICKUP_WEAPON_COMBATPDW"):
		case joaat("PICKUP_WEAPON_SWITCHBLADE"):
		case joaat("PICKUP_WEAPON_REVOLVER"):
		case joaat("PICKUP_WEAPON_AUTOSHOTGUN"):
		case joaat("PICKUP_WEAPON_MINISMG"):
		case joaat("PICKUP_WEAPON_COMPACTLAUNCHER"):
		case joaat("PICKUP_WEAPON_PIPEBOMB"):
		case joaat("PICKUP_WEAPON_POOLCUE"):
		case joaat("PICKUP_WEAPON_BATTLEAXE"):
		case joaat("PICKUP_WEAPON_WRENCH"):
		case joaat("PICKUP_WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_CARBINERIFLE_MK2"):
		case joaat("PICKUP_WEAPON_COMBATMG_MK2"):
		case joaat("PICKUP_WEAPON_HEAVYSNIPER_MK2"):
		case joaat("PICKUP_WEAPON_PISTOL_MK2"):
		case joaat("PICKUP_WEAPON_SMG_MK2"):
		case joaat("PICKUP_WEAPON_SNSPISTOL_MK2"):
		case joaat("PICKUP_WEAPON_REVOLVER_MK2"):
		case joaat("PICKUP_WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_SPECIALCARBINE_MK2"):
		case joaat("PICKUP_WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("PICKUP_WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_DOUBLEACTION"):
		case joaat("PICKUP_WEAPON_STONE_HATCHET"):
		case joaat("PICKUP_WEAPON_NAVYREVOLVER"):
		case joaat("PICKUP_WEAPON_POLICERIFLE"):
		case joaat("PICKUP_WEAPON_COMBATSHOTGUN"):
		case joaat("PICKUP_WEAPON_RAYCARBINE"):
		case joaat("PICKUP_WEAPON_RAYMINIGUN"):
		case joaat("PICKUP_WEAPON_RAYPISTOL"):
		case joaat("PICKUP_WEAPON_GADGETPISTOL"):
		case joaat("PICKUP_WEAPON_STUNGUN_MP"):
		case joaat("PICKUP_WEAPON_HEAVYRIFLE"):
		case joaat("PICKUP_WEAPON_EMPLAUNCHER"):
		case joaat("PICKUP_WEAPON_CERAMICPISTOL"):
		case joaat("PICKUP_WEAPON_MILITARYRIFLE"):
		case joaat("PICKUP_WEAPON_TACTICALRIFLE"):
		case joaat("PICKUP_WEAPON_PRECISIONRIFLE"):
		case joaat("PICKUP_PORTABLE_PACKAGE_LARGE_RADIUS"):
			return 1;
		default:
	}
	if (__LIB_0__.func_248())
	{
		switch (iParam0)
		{
			case joaat("PICKUP_WEAPON_FERTILIZERCAN"):
				return 1;
			}
		default:
	}
	return 0;
}

void func_371(int iParam0)//Position - 0x19ABB4
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	var* uVar3;
	var* uVar4[10];
	var* uVar5[10];
	var* uVar6[10];
	var* uVar7[10];
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "ptemp") == 0)
	{
		return;
	}
	uVar3 = DATAFILE::DATADICT_GET_DICT(iParam0, "ptemp");
	Global_4718592.f_168703 = DATAFILE::DATADICT_GET_INT(uVar3, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_168703 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar4[iVar0] = DATAFILE::DATADICT_GET_ARRAY(uVar3, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar5[iVar0] = DATAFILE::DATADICT_GET_ARRAY(uVar3, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar6[iVar0] = DATAFILE::DATADICT_GET_ARRAY(uVar3, &cVar2);
		StringCopy(&cVar2, "ptc", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar7[iVar0] = DATAFILE::DATADICT_GET_ARRAY(uVar3, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (uVar4[iVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar4[iVar0], iVar1) == 5)
			{
				Global_4718592.f_166222[iVar0 /*248*/][iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar4[iVar0], iVar1) };
			}
			else
			{
				Global_4718592.f_166222[iVar0 /*248*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar5[iVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar5[iVar0], iVar1) == 5)
			{
				Global_4718592.f_166222[iVar0 /*248*/].f_91[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_4718592.f_166222[iVar0 /*248*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar6[iVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar6[iVar0], iVar1) == 2)
			{
				Global_4718592.f_166222[iVar0 /*248*/].f_182[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar6[iVar0], iVar1);
			}
			else
			{
				Global_4718592.f_166222[iVar0 /*248*/].f_182[iVar1] = 0;
			}
			if (uVar7[iVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar7[iVar0], iVar1) == 2)
			{
				Global_4718592.f_166222[iVar0 /*248*/].f_213[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar7[iVar0], iVar1);
			}
			else
			{
				Global_4718592.f_166222[iVar0 /*248*/].f_213[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_372(var uParam0, int iParam1)//Position - 0x19DCF7
{
	if (*uParam0 != 0 && iParam1 == 0)
	{
		*uParam0 = 0;
	}
}

void func_373(bool bParam0)//Position - 0x19DD99
{
	if (Global_4718592.f_168758 >= 1)
	{
		return;
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_121, 11))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 0);
	}
	else
	{
		return;
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_121, 12))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 1);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_121, 13))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 2);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_121, 14))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 3);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 5))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 4);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 12))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 5);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 17))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 6);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 15))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 7);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 14))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 8);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 16))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 9);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 18))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 10);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 19))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 11);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 20))
	{
		MISC::SET_BIT(&(Global_4980736.f_5742[bParam0 /*442*/].f_236.f_2), 12);
	}
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_123, 1))
	{
		if (Global_4980736.f_5742[bParam0 /*442*/].f_15 == joaat("ch_prop_ch_cctv_cam_01a"))
		{
			Global_4980736.f_5742[bParam0 /*442*/].f_15 = joaat("ch_prop_ch_cctv_cam_02a");
		}
	}
}

void func_374(var uParam0, var uParam1)//Position - 0x19F19F
{
	var uVar0;
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

void func_375(int iParam0)//Position - 0x19F1B7
{
	int iVar0;
	var* uVar1;
	var* uVar2;
	var* uVar3;
	var* uVar4;
	uVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "usj" /* GXT: Stunt Jump */);
	Global_4718592.f_115311 = DATAFILE::DATADICT_GET_INT(uVar1, "no");
	uVar2 = DATAFILE::DATADICT_GET_ARRAY(uVar1, "vto");
	uVar3 = DATAFILE::DATADICT_GET_ARRAY(uVar1, "vld");
	uVar4 = DATAFILE::DATADICT_GET_ARRAY(uVar1, "vcm");
	if (Global_4718592.f_115311 > 10)
	{
		Global_4718592.f_115311 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_115311 - 1))
	{
		Global_4718592.f_115312[iVar0 /*9*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar2, iVar0) };
		Global_4718592.f_115312[iVar0 /*9*/].f_3 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar3, iVar0) };
		Global_4718592.f_115312[iVar0 /*9*/].f_6 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar4, iVar0) };
		iVar0++;
	}
}

void func_376(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1A21C8
{
	StringCopy(sParam0, sParam1, 16);
	StringIntConCat(sParam0, iParam2, 16);
	if (iParam3 != -1)
	{
		StringConCat(sParam0, "_", 16);
		StringIntConCat(sParam0, iParam3, 16);
	}
}

void func_377()//Position - 0x1A21FD
{
	int iVar0;
	if (Global_4980736.f_201777 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_201777 - 1))
	{
		if (Global_4980736.f_201076[iVar0 /*7*/].f_3 != 0 && Global_4980736.f_201076[iVar0 /*7*/].f_4 == 0)
		{
			MISC::SET_BIT(&(Global_4980736.f_201076[iVar0 /*7*/].f_4), 0);
		}
		iVar0++;
	}
}

void func_378()//Position - 0x1A36CD
{
	Global_4718592.f_169848[0] = 50;
	Global_4718592.f_169848[1] = 30;
	Global_4718592.f_169848[2] = 20;
	Global_4718592.f_169844[0] = 3;
	Global_4718592.f_169844[1] = 2;
	Global_4718592.f_169844[2] = 1;
	Global_4718592.f_169859[0 /*4*/][0] = 7;
	Global_4718592.f_169859[0 /*4*/][1] = 8;
	Global_4718592.f_169859[0 /*4*/][2] = 9;
	Global_4718592.f_169859[1 /*4*/][0] = 5;
	Global_4718592.f_169859[1 /*4*/][1] = 6;
	Global_4718592.f_169859[1 /*4*/][2] = 7;
	Global_4718592.f_169859[2 /*4*/][0] = 3;
	Global_4718592.f_169859[2 /*4*/][1] = 4;
	Global_4718592.f_169859[2 /*4*/][2] = 5;
	Global_4718592.f_169859[3 /*4*/][0] = 1;
	Global_4718592.f_169859[3 /*4*/][1] = 2;
	Global_4718592.f_169859[3 /*4*/][2] = 3;
}

void func_379(int iParam0)//Position - 0x1A380B
{
	int iVar0;
	int iVar1;
	var* uVar2;
	var* uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "otzone") == 0)
	{
		return;
	}
	iVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "otzone");
	uVar2 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "otvo");
	uVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "otvt");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "otbs");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "otpg");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "otrw");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "otpl");
	if (iVar1 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar1, "otz") == 2)
	{
		Global_4718592.f_169028 = DATAFILE::DATADICT_GET_INT(iVar1, "otz");
	}
	else
	{
		Global_4718592.f_169028 = 0;
	}
	if (Global_4718592.f_169028 > 30)
	{
		Global_4718592.f_169028 = 30;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_169028 - 1))
	{
		Global_4718592.f_169029[iVar0 /*11*/][0 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar2, iVar0) };
		Global_4718592.f_169029[iVar0 /*11*/][1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar3, iVar0) };
		if (iVar4 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar4, iVar0) == 2)
		{
			Global_4718592.f_169029[iVar0 /*11*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar4, iVar0);
		}
		else
		{
			Global_4718592.f_169029[iVar0 /*11*/].f_7 = 0;
		}
		if (iVar5 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar5, iVar0) == 2)
		{
			Global_4718592.f_169029[iVar0 /*11*/].f_8 = DATAFILE::DATAARRAY_GET_INT(iVar5, iVar0);
		}
		else
		{
			Global_4718592.f_169029[iVar0 /*11*/].f_8 = 0;
		}
		if (iVar6 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar0) == 3)
		{
			Global_4718592.f_169029[iVar0 /*11*/].f_10 = DATAFILE::DATAARRAY_GET_FLOAT(iVar6, iVar0);
		}
		else if (DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar0) == 2)
		{
			Global_4718592.f_169029[iVar0 /*11*/].f_10 = SYSTEM::TO_FLOAT(DATAFILE::DATAARRAY_GET_INT(iVar6, iVar0));
		}
		else
		{
			Global_4718592.f_169029[iVar0 /*11*/].f_10 = 0f;
		}
		if (iVar7 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4718592.f_169029[iVar0 /*11*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar0);
		}
		else
		{
			Global_4718592.f_169029[iVar0 /*11*/].f_9 = 0;
		}
		iVar0++;
	}
}

void func_380(int iParam0, var uParam1)//Position - 0x1A4E15
{
	char* sVar0;
	int iVar1;
	int iVar2;
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = "plrPH";
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, sVar0) == 7)
	{
		iVar1 = DATAFILE::DATADICT_GET_ARRAY(iParam0, sVar0);
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (iVar1 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar1, iVar2) == 4)
		{
			StringCopy(uParam1[iVar2 /*6*/], DATAFILE::DATAARRAY_GET_STRING(iVar1, iVar2), 24);
		}
		else
		{
			StringCopy(uParam1[iVar2 /*6*/], "", 24);
		}
		iVar2++;
	}
}

void func_381(var uParam0, int iParam1, bool bParam2)//Position - 0x1A4E89
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = -1;
	iVar1 = DATAFILE::DATADICT_GET_ARRAY(*iParam1, "pcvid");
	if (iVar1 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar1, bParam2) == 2)
	{
		iVar0 = DATAFILE::DATAARRAY_GET_INT(iVar1, bParam2);
	}
	StringCopy(&cVar2, "pvpls", 8);
	if (bParam2 > 0)
	{
		StringIntConCat(&cVar2, bParam2, 8);
	}
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(*iParam1, &cVar2);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		uParam0->f_490[iVar4 /*4*/] = iVar0;
		if (iVar3 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar3, iVar4) == 2)
		{
			uParam0->f_490[iVar4 /*4*/].f_2 = DATAFILE::DATAARRAY_GET_INT(iVar3, iVar4);
		}
		else
		{
			uParam0->f_490[iVar4 /*4*/].f_2 = 0;
		}
		iVar4++;
	}
	StringCopy(&cVar2, "pvpds", 8);
	if (bParam2 > 0)
	{
		StringIntConCat(&cVar2, bParam2, 8);
	}
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(*iParam1, &cVar2);
	StringCopy(&cVar2, "pvpdi", 8);
	if (bParam2 > 0)
	{
		StringIntConCat(&cVar2, bParam2, 8);
	}
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(*iParam1, &cVar2);
	iVar4 = 0;
	while (iVar4 <= 0)
	{
		if (iVar6 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar4) == 2)
		{
			uParam0->f_507[iVar4 /*5*/] = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar4);
		}
		else
		{
			uParam0->f_507[iVar4 /*5*/] = 0;
		}
		uParam0->f_507[iVar4 /*5*/].f_1 = iVar0;
		if (iVar5 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar5, iVar4) == 2)
		{
			uParam0->f_507[iVar4 /*5*/].f_1.f_2 = DATAFILE::DATAARRAY_GET_INT(iVar5, iVar4);
		}
		else
		{
			uParam0->f_507[iVar4 /*5*/].f_1.f_2 = 0;
		}
		iVar4++;
	}
}

void func_382(var uParam0, int iParam1)//Position - 0x1A5060
{
	char[] cVar0[8];
	StringCopy(&cVar0, "vehId", 8);
	if (DATAFILE::DATADICT_GET_TYPE(*iParam1, &cVar0) == 2)
	{
		*uParam0 = DATAFILE::DATADICT_GET_INT(*iParam1, &cVar0);
	}
	else
	{
		*uParam0 = -1;
	}
	StringCopy(&cVar0, "vehIdS", 8);
	if (DATAFILE::DATADICT_GET_TYPE(*iParam1, &cVar0) == 2)
	{
		uParam0->f_1 = DATAFILE::DATADICT_GET_INT(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_1 = -1;
	}
	StringCopy(&cVar0, "vehSeat", 8);
	if (DATAFILE::DATADICT_GET_TYPE(*iParam1, &cVar0) == 2)
	{
		uParam0->f_2 = DATAFILE::DATADICT_GET_INT(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_2 = 0;
	}
	StringCopy(&cVar0, "bit1", 8);
	if (DATAFILE::DATADICT_GET_TYPE(*iParam1, &cVar0) == 2)
	{
		uParam0->f_3 = DATAFILE::DATADICT_GET_INT(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_3 = 0;
	}
}

void func_383(int iParam0)//Position - 0x1AA16A
{
	int iVar0;
	var* uVar1;
	var* uVar2;
	var* uVar3;
	var* uVar4;
	var* uVar5;
	var* uVar6;
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "cover") == 6)
	{
		uVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "cover");
		Global_4980736.f_36212 = DATAFILE::DATADICT_GET_INT(uVar1, "no");
		uVar2 = DATAFILE::DATADICT_GET_ARRAY(uVar1, "loc");
		uVar3 = DATAFILE::DATADICT_GET_ARRAY(uVar1, "dir");
		uVar4 = DATAFILE::DATADICT_GET_ARRAY(uVar1, "use");
		uVar5 = DATAFILE::DATADICT_GET_ARRAY(uVar1, "high");
		uVar6 = DATAFILE::DATADICT_GET_ARRAY(uVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_4980736.f_36212 - 1))
		{
			Global_4980736.f_36213[iVar0 /*7*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar2, iVar0) };
			Global_4980736.f_36213[iVar0 /*7*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(uVar3, iVar0);
			Global_4980736.f_36213[iVar0 /*7*/].f_4 = DATAFILE::DATAARRAY_GET_INT(uVar4, iVar0);
			Global_4980736.f_36213[iVar0 /*7*/].f_5 = DATAFILE::DATAARRAY_GET_INT(uVar5, iVar0);
			Global_4980736.f_36213[iVar0 /*7*/].f_6 = DATAFILE::DATAARRAY_GET_INT(uVar6, iVar0);
			iVar0++;
		}
	}
}

void func_384(var* uParam0)//Position - 0x1AA678
{
	int iVar0;
	int iVar1;
	var* uVar2;
	var* uVar3;
	var* uVar4;
	var* uVar5;
	var* uVar6;
	var* uVar7;
	var* uVar8;
	var* uVar9;
	var* uVar10;
	var* uVar11;
	var* uVar12;
	var* uVar13;
	var* uVar14;
	var* uVar15;
	var* uVar16;
	int iVar17;
	var* uVar18;
	var* uVar19;
	var* uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	uVar2 = DATAFILE::DATADICT_GET_DICT(uParam0, "door");
	Global_4980736.f_34610 = DATAFILE::DATADICT_GET_INT(uVar2, "no");
	uVar3 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "loc");
	uVar4 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "fopen");
	uVar5 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "model");
	uVar6 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "lock");
	uVar7 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "swing");
	uVar8 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "udrle");
	uVar9 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "udtem");
	uVar10 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "udrat");
	uVar11 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "swingu");
	uVar12 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "audst");
	uVar13 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "aurt");
	uVar14 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "uaudst");
	uVar15 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "uaurt");
	uVar16 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "lfp");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "dtime");
	uVar18 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "mid");
	uVar19 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "dbs");
	uVar20 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "dcoid");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "fcz");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "foz");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "org");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "dle");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "dird");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "dirdv");
	iVar27 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "dirud");
	iVar28 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "dirduv");
	iVar29 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "ORNLO");
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_34610 - 1))
	{
		if (iVar0 >= 32)
		{
		}
		else
		{
			Global_4980736.f_34611[iVar0 /*50*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar3, iVar0) };
			Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_2 = DATAFILE::DATAARRAY_GET_FLOAT(uVar4, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_41 = DATAFILE::DATAARRAY_GET_BOOL(uVar6, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_42 = DATAFILE::DATAARRAY_GET_BOOL(uVar7, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_37 = DATAFILE::DATAARRAY_GET_INT(uVar8, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_38 = DATAFILE::DATAARRAY_GET_INT(uVar9, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_2 = DATAFILE::DATAARRAY_GET_FLOAT(uVar10, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_39 = DATAFILE::DATAARRAY_GET_BOOL(uVar11, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(uVar13, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_4 = DATAFILE::DATAARRAY_GET_FLOAT(uVar12, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(uVar15, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_4 = DATAFILE::DATAARRAY_GET_FLOAT(uVar14, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_44 = DATAFILE::DATAARRAY_GET_BOOL(uVar16, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_33 = DATAFILE::DATAARRAY_GET_INT(uVar19, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_35 = DATAFILE::DATAARRAY_GET_INT(uVar20, iVar0);
			iVar1 = DATAFILE::DATAARRAY_GET_INT(uVar5, iVar0);
			Global_4980736.f_34611[iVar0 /*50*/].f_3 = iVar1;
			if (iVar17 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar17, iVar0) == 2)
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_43 = DATAFILE::DATAARRAY_GET_INT(iVar17, iVar0);
			}
			else
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_43 = 0;
			}
			Global_4980736.f_34611[iVar0 /*50*/].f_40 = DATAFILE::DATAARRAY_GET_BOOL(uVar18, iVar0);
			if (iVar21 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar21, iVar0) == 3)
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_4 = DATAFILE::DATAARRAY_GET_FLOAT(iVar21, iVar0);
			}
			else
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_4 = 999999f;
			}
			if (iVar22 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar22, iVar0) == 3)
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_5 = DATAFILE::DATAARRAY_GET_FLOAT(iVar22, iVar0);
			}
			else
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_5 = 999999f;
			}
			if (iVar23 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar23, iVar0) == 3)
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_34 = DATAFILE::DATAARRAY_GET_FLOAT(iVar23, iVar0);
			}
			else
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_34 = 0f;
			}
			if (iVar25 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar25, iVar0) == 2)
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar25, iVar0);
			}
			else
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_5 = 0;
			}
			if (iVar26 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar26, iVar0) == 5)
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_6 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar26, iVar0) };
			}
			else
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_6 = { 0f, 0f, 0f };
			}
			if (iVar27 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar27, iVar0) == 2)
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar27, iVar0);
			}
			else
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_5 = 3;
			}
			if (iVar28 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar28, iVar0) == 5)
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_6 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar28, iVar0) };
			}
			else
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_6 = { 0f, 0f, 0f };
			}
			if (iVar29 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar29, iVar0) == 3)
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_45 = DATAFILE::DATAARRAY_GET_FLOAT(iVar29, iVar0);
			}
			else
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_45 = 0f;
			}
			if (iVar24 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar24, iVar0) == 2)
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_46 = DATAFILE::DATAARRAY_GET_INT(iVar24, iVar0);
			}
			else
			{
				Global_4980736.f_34611[iVar0 /*50*/].f_46 = -1;
			}
			iVar0++;
		}
	}
}

int func_385(int iParam0, int iParam1, bool bParam2)//Position - 0x1ABF60
{
	if (*iParam0 != 0)
	{
		if (DATAFILE::DATAARRAY_GET_TYPE(*iParam0, bParam2) == iParam1)
		{
			return 0;
		}
	}
	return 1;
}

bool func_386()//Position - 0x1AF93F
{
	return (Global_4718592 == 0 && Global_4718592.f_2 == 6);
}

void func_387(var* uParam0)//Position - 0x1B598A
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
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	var* uVar61;
	int iVar62;
	var* uVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
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
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	iVar1 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "stpos");
	iVar2 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "delr");
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "epos");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "endr");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "vareapos");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "arear");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "time");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "plkr");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "pekr");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "vhkr");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "obkr");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "dr");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "pedr");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "vedr");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "obdr");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "lwmbs");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "flmbs");
	iVar18 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "vdoibs");
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "vdohu");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "tmbts");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "tmbt2");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "tmbt3");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "tmbt4");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "swmbs");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "gbmbs");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "pcbd");
	iVar27 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "lwbs");
	iVar28 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "wodia");
	iVar29 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "repcr");
	iVar30 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "woabs");
	iVar31 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "fwoabs");
	iVar32 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "fail");
	iVar33 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "vehrsp");
	iVar34 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "rilmvbs");
	iVar35 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "spit");
	iVar36 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "pglr");
	iVar37 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "nora");
	iVar38 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "mtlr");
	iVar39 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "mslr");
	iVar40 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "mlpl");
	iVar41 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "mlpd");
	iVar42 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "mlpm");
	iVar43 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "plyl");
	iVar44 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "shd");
	iVar45 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "spar");
	iVar46 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "2spar");
	iVar47 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "boud");
	iVar48 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "bla");
	iVar49 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "wla");
	iVar50 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "patm");
	iVar51 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "bnd2");
	iVar52 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "bla2");
	iVar53 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "wla2");
	iVar54 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "pat2");
	iVar55 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "inv");
	iVar56 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "inv2");
	iVar57 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "inv3");
	iVar58 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "inv4");
	iVar59 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "invsw");
	iVar60 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "invtm");
	uVar61 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "invrl");
	iVar62 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "inv2tm");
	uVar63 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "inv2rl");
	iVar64 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "sinv");
	iVar65 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "sinv2");
	iVar66 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "sinv3");
	iVar67 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "sinv4");
	iVar68 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "minv");
	iVar69 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "mmsw");
	iVar70 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "mmsw2");
	iVar71 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "minv2");
	iVar72 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "minv3");
	iVar73 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "minv4");
	iVar74 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "ppk");
	iVar75 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "mts");
	iVar76 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "spwia");
	iVar77 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "2spwia");
	iVar78 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "pcl");
	iVar79 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "ocl");
	iVar80 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "arrt");
	iVar81 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "thfa");
	iVar82 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "ttca");
	iVar83 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "sipis");
	iVar84 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "sipiv");
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (iVar0 < 4)
		{
			if (iVar1 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar1, iVar0) };
			}
			if (iVar16 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5963 = DATAFILE::DATAARRAY_GET_INT(iVar16, iVar0);
			}
			if (iVar17 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_6020 = DATAFILE::DATAARRAY_GET_INT(iVar17, iVar0);
			}
			if (iVar18 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_7081 = DATAFILE::DATAARRAY_GET_INT(iVar18, iVar0);
			}
			if (iVar19 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar19, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_7082 = DATAFILE::DATAARRAY_GET_INT(iVar19, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_7082 = 0;
			}
			if (iVar20 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_12179 = DATAFILE::DATAARRAY_GET_INT(iVar20, iVar0);
			}
			if (iVar21 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_12180 = DATAFILE::DATAARRAY_GET_INT(iVar21, iVar0);
			}
			if (iVar22 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_12181 = DATAFILE::DATAARRAY_GET_INT(iVar22, iVar0);
			}
			if (iVar23 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_12182 = DATAFILE::DATAARRAY_GET_INT(iVar23, iVar0);
			}
			if (iVar24 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5965 = DATAFILE::DATAARRAY_GET_INT(iVar24, iVar0);
			}
			if (iVar25 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_6334 = DATAFILE::DATAARRAY_GET_INT(iVar25, iVar0);
			}
			if (iVar26 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_12388 = DATAFILE::DATAARRAY_GET_INT(iVar26, iVar0);
			}
			if (iVar27 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5962 = DATAFILE::DATAARRAY_GET_INT(iVar27, iVar0);
			}
			if (iVar30 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5964 = DATAFILE::DATAARRAY_GET_INT(iVar30, iVar0);
			}
			if (iVar28 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5560 = DATAFILE::DATAARRAY_GET_INT(iVar28, iVar0);
			}
			if (iVar29 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5561 = DATAFILE::DATAARRAY_GET_INT(iVar29, iVar0);
			}
			if (iVar31 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_6021 = DATAFILE::DATAARRAY_GET_INT(iVar31, iVar0);
			}
			if (iVar32 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_12389 = DATAFILE::DATAARRAY_GET_INT(iVar32, iVar0);
			}
			if (iVar33 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_12390 = DATAFILE::DATAARRAY_GET_INT(iVar33, iVar0);
			}
			if (iVar34 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar34, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_12409 = DATAFILE::DATAARRAY_GET_INT(iVar34, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_12409 = 0;
			}
			if (iVar35 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_16432 = DATAFILE::DATAARRAY_GET_INT(iVar35, iVar0);
			}
			if (iVar36 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_16433 = DATAFILE::DATAARRAY_GET_INT(iVar36, iVar0);
			}
			if (iVar37 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_16434 = DATAFILE::DATAARRAY_GET_INT(iVar37, iVar0);
			}
			if (iVar38 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_32 = DATAFILE::DATAARRAY_GET_INT(iVar38, iVar0);
			}
			if (iVar39 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_33 = DATAFILE::DATAARRAY_GET_INT(iVar39, iVar0);
			}
			if (iVar40 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar40, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_34 = DATAFILE::DATAARRAY_GET_INT(iVar40, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_34 = 0;
			}
			if (iVar41 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar41, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_35 = DATAFILE::DATAARRAY_GET_INT(iVar41, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_35 = 0;
			}
			if (iVar42 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar42, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_36 = DATAFILE::DATAARRAY_GET_INT(iVar42, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_36 = 0;
			}
			if (iVar43 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_38 = DATAFILE::DATAARRAY_GET_INT(iVar43, iVar0);
			}
			if (iVar45 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5555 = DATAFILE::DATAARRAY_GET_INT(iVar45, iVar0);
			}
			if (iVar46 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5557 = DATAFILE::DATAARRAY_GET_INT(iVar46, iVar0);
			}
			if (iVar47 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5554 = DATAFILE::DATAARRAY_GET_INT(iVar47, iVar0);
			}
			if (iVar48 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5553 = DATAFILE::DATAARRAY_GET_INT(iVar48, iVar0);
			}
			if ((iVar50 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar50, iVar0) == 2) && iVar50 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5552 = DATAFILE::DATAARRAY_GET_INT(iVar50, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5552 = 60000;
			}
			if (iVar51 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar51, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5815 = DATAFILE::DATAARRAY_GET_INT(iVar51, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5815 = 0;
			}
			if (iVar52 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar52, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5814 = DATAFILE::DATAARRAY_GET_INT(iVar52, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5814 = 0;
			}
			if (iVar81 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar81, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_16435 = DATAFILE::DATAARRAY_GET_INT(iVar81, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_16435 = 0;
			}
			if (iVar82 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar82, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_16436 = DATAFILE::DATAARRAY_GET_INT(iVar82, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_16436 = -1;
			}
			if (iVar54 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar54, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5816 = DATAFILE::DATAARRAY_GET_INT(iVar54, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5816 = 60000;
			}
			if (iVar53 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar53, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5817 = DATAFILE::DATAARRAY_GET_INT(iVar53, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5817 = 0;
			}
			if (iVar55 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_61 = DATAFILE::DATAARRAY_GET_INT(iVar55, iVar0);
			}
			if (iVar56 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_62 = DATAFILE::DATAARRAY_GET_INT(iVar56, iVar0);
			}
			if (iVar57 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_63 = DATAFILE::DATAARRAY_GET_INT(iVar57, iVar0);
			}
			if (iVar58 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_64 = DATAFILE::DATAARRAY_GET_INT(iVar58, iVar0);
			}
			if (iVar59 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar59, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_336 = DATAFILE::DATAARRAY_GET_INT(iVar59, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_336 = -1;
			}
			if (iVar83 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar83, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_893 = DATAFILE::DATAARRAY_GET_INT(iVar83, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_893 = -1;
			}
			if (iVar84 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar84, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_894 = DATAFILE::DATAARRAY_GET_INT(iVar84, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_894 = -1;
			}
			if (iVar69 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar69, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_337 = DATAFILE::DATAARRAY_GET_INT(iVar69, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_337 = -1;
			}
			if (iVar70 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar70, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_338 = DATAFILE::DATAARRAY_GET_INT(iVar70, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_338 = -1;
			}
			if ((iVar60 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar60, iVar0) == 2) && DATAFILE::DATAARRAY_GET_TYPE(uVar61, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_614 = DATAFILE::DATAARRAY_GET_INT(iVar60, iVar0);
				Global_4718592.f_658[iVar0 /*22957*/].f_615 = DATAFILE::DATAARRAY_GET_INT(uVar61, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_614 = -1;
				Global_4718592.f_658[iVar0 /*22957*/].f_615 = -1;
			}
			if (iVar64 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_339 = DATAFILE::DATAARRAY_GET_INT(iVar64, iVar0);
			}
			if (iVar65 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_340 = DATAFILE::DATAARRAY_GET_INT(iVar65, iVar0);
			}
			if (iVar66 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_341 = DATAFILE::DATAARRAY_GET_INT(iVar66, iVar0);
			}
			if (iVar67 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_342 = DATAFILE::DATAARRAY_GET_INT(iVar67, iVar0);
			}
			if ((iVar62 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar62, iVar0) == 2) && DATAFILE::DATAARRAY_GET_TYPE(uVar63, iVar0) == 2)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_891 = DATAFILE::DATAARRAY_GET_INT(iVar62, iVar0);
				Global_4718592.f_658[iVar0 /*22957*/].f_892 = DATAFILE::DATAARRAY_GET_INT(uVar63, iVar0);
			}
			else
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_891 = -1;
				Global_4718592.f_658[iVar0 /*22957*/].f_892 = -1;
			}
			if (iVar68 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_616 = DATAFILE::DATAARRAY_GET_INT(iVar68, iVar0);
			}
			if (iVar71 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_617 = DATAFILE::DATAARRAY_GET_INT(iVar71, iVar0);
			}
			if (iVar72 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_618 = DATAFILE::DATAARRAY_GET_INT(iVar72, iVar0);
			}
			if (iVar73 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_619 = DATAFILE::DATAARRAY_GET_INT(iVar73, iVar0);
			}
			if (iVar74 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_57 = DATAFILE::DATAARRAY_GET_INT(iVar74, iVar0);
			}
			if (iVar75 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_58 = DATAFILE::DATAARRAY_GET_INT(iVar75, iVar0);
			}
			if (iVar76 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5556 = DATAFILE::DATAARRAY_GET_INT(iVar76, iVar0);
			}
			if (iVar77 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5558 = DATAFILE::DATAARRAY_GET_INT(iVar77, iVar0);
			}
			if (iVar49 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_5559 = DATAFILE::DATAARRAY_GET_INT(iVar49, iVar0);
			}
			if (iVar44 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar44, iVar0);
			}
			if (iVar78 != 0)
			{
				Global_4718592.f_92487[iVar0] = DATAFILE::DATAARRAY_GET_INT(iVar78, iVar0);
			}
			if (iVar79 != 0)
			{
				Global_4718592.f_92492[iVar0] = DATAFILE::DATAARRAY_GET_INT(iVar79, iVar0);
			}
			if (iVar80 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_37 = DATAFILE::DATAARRAY_GET_INT(iVar80, iVar0);
			}
			if (iVar2 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_14 = DATAFILE::DATAARRAY_GET_INT(iVar2, iVar0);
			}
			if (iVar3 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_15 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar3, iVar0) };
			}
			if (iVar4 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_18 = DATAFILE::DATAARRAY_GET_INT(iVar4, iVar0);
			}
			if (iVar5 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_19 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar5, iVar0) };
			}
			if (iVar6 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_22 = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar0);
			}
			if (iVar7 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_23 = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar0);
			}
			if (iVar8 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_24 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
			}
			if (iVar9 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_25 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
			}
			if (iVar10 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_26 = DATAFILE::DATAARRAY_GET_INT(iVar10, iVar0);
			}
			if (iVar11 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_27 = DATAFILE::DATAARRAY_GET_INT(iVar11, iVar0);
			}
			if (iVar12 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_28 = DATAFILE::DATAARRAY_GET_INT(iVar12, iVar0);
			}
			if (iVar13 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_29 = DATAFILE::DATAARRAY_GET_INT(iVar13, iVar0);
			}
			if (iVar14 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_30 = DATAFILE::DATAARRAY_GET_INT(iVar14, iVar0);
			}
			if (iVar15 != 0)
			{
				Global_4718592.f_658[iVar0 /*22957*/].f_31 = DATAFILE::DATAARRAY_GET_INT(iVar15, iVar0);
			}
		}
		iVar0++;
	}
}

void func_388(var* uParam0)//Position - 0x1B6A88
{
	var* uVar0;
	uVar0 = DATAFILE::DATADICT_GET_DICT(uParam0, "rule");
	Global_4718592.f_613 = DATAFILE::DATADICT_GET_INT(uVar0, "time");
	Global_4718592.f_616 = DATAFILE::DATADICT_GET_INT(uVar0, "score");
	Global_4718592.f_627 = DATAFILE::DATADICT_GET_INT(uVar0, "prule");
	Global_4980736.f_69353 = DATAFILE::DATADICT_GET_INT(uVar0, "ptyp");
	Global_4718592.f_617 = DATAFILE::DATADICT_GET_INT(uVar0, "blip" /* GXT: Blip */);
	Global_4718592.f_619 = DATAFILE::DATADICT_GET_INT(uVar0, "tag");
	Global_4718592.f_620 = DATAFILE::DATADICT_GET_INT(uVar0, "voice");
	Global_4718592.f_621 = DATAFILE::DATADICT_GET_INT(uVar0, "radio");
	Global_4718592.f_622 = DATAFILE::DATADICT_GET_INT(uVar0, "aim");
	Global_4718592.f_110359 = DATAFILE::DATADICT_GET_INT(uVar0, "pol");
	Global_4718592.f_608 = DATAFILE::DATADICT_GET_INT(uVar0, "liv");
	Global_4718592.f_107229 = DATAFILE::DATADICT_GET_INT(uVar0, "traf");
	Global_4718592.f_116980 = DATAFILE::DATADICT_GET_INT(uVar0, "tod");
	Global_4718592.f_116938 = DATAFILE::DATADICT_GET_INT(uVar0, "weth");
	Global_4718592.f_116939 = DATAFILE::DATADICT_GET_INT(uVar0, "alW");
	Global_4718592.f_116940 = DATAFILE::DATADICT_GET_INT(uVar0, "alWC");
	Global_4718592.f_116982 = DATAFILE::DATADICT_GET_INT(uVar0, "apeds");
	Global_4718592.f_116941 = DATAFILE::DATADICT_GET_INT(uVar0, "wethec");
	Global_4718592.f_116981 = DATAFILE::DATADICT_GET_INT(uVar0, "vehd");
	Global_4718592.f_625 = DATAFILE::DATADICT_GET_INT(uVar0, "vdm");
	Global_4718592.f_623 = DATAFILE::DATADICT_GET_INT(uVar0, "tdm");
	Global_4718592.f_92487[0] = DATAFILE::DATADICT_GET_INT(uVar0, "pcr");
	Global_4718592.f_92492[0] = DATAFILE::DATADICT_GET_INT(uVar0, "ocr");
}

void func_389(int iParam0)//Position - 0x1BEF42
{
	int iVar0;
	char cVar1[16];
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "carbar1") == 3)
	{
		Global_4718592.f_174966 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "carbar1");
	}
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "carbar2") == 3)
	{
		Global_4718592.f_174966.f_1 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "carbar2");
	}
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "carbar3") == 3)
	{
		Global_4718592.f_174966.f_2 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "carbar3");
	}
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "carbar4") == 3)
	{
		Global_4718592.f_174966.f_3 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "carbar4");
	}
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "carbar5") == 3)
	{
		Global_4718592.f_174966.f_4 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "carbar5");
	}
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "carbar6") == 3)
	{
		Global_4718592.f_174966.f_5 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "carbar6");
	}
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "carbar7") == 3)
	{
		Global_4718592.f_174966.f_6 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "carbar7");
	}
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "carbar8") == 3)
	{
		Global_4718592.f_174966.f_7 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "carbar8");
	}
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "carbar9") == 3)
	{
		Global_4718592.f_174966.f_8 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "carbar9");
	}
	StringCopy(&cVar1, "", 16);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar1, "carbar10", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar1) == 2)
		{
			Global_4718592.f_174966.f_9[iVar0] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar1);
		}
		iVar0++;
	}
}

void func_390(int iParam0)//Position - 0x1BF3F0
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	StringCopy(&cVar0, "MCV_BS1", 16);
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
	{
		Global_4718592.f_174999.f_1 = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
	}
	StringCopy(&cVar0, "MCV_ESET", 16);
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
	{
		Global_4718592.f_174999 = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		StringCopy(&cVar0, "MCV_EHP", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_2[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_2[iVar1] = 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		StringCopy(&cVar0, "MCV_EII", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_6[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_6[iVar1] = -1;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		StringCopy(&cVar0, "MCV_EMN", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_13[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_13[iVar1] = 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar2 = 0;
		while (iVar2 <= 4)
		{
			StringCopy(&cVar0, "MCV_ESPW", 16);
			StringIntConCat(&cVar0, iVar1, 16);
			StringIntConCat(&cVar0, iVar2, 16);
			if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
			{
				Global_4718592.f_174999.f_30[iVar1 /*6*/][iVar2] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
			}
			else
			{
				Global_4718592.f_174999.f_30[iVar1 /*6*/][iVar2] = -1;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar0, "MCV_TTE", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_73[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_73[iVar1] = 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar0, "MCV_TRF", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_78[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_78[iVar1] = -1;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar0, "MCV_TRT", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_83[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_83[iVar1] = -1;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar0, "MCV_TZN", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_88[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_88[iVar1] = -1;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		iVar2 = 0;
		while (iVar2 <= 4)
		{
			StringCopy(&cVar0, "MCV_TMS", 16);
			StringIntConCat(&cVar0, iVar1, 16);
			StringIntConCat(&cVar0, iVar2, 16);
			if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
			{
				Global_4718592.f_174999.f_93[iVar1 /*6*/][iVar2] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
			}
			else
			{
				Global_4718592.f_174999.f_93[iVar1 /*6*/][iVar2] = 0;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar0, "MCV_OMS", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_118[iVar1 /*3*/] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_118[iVar1 /*3*/] = 0;
		}
		StringCopy(&cVar0, "MCV_OMT", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_118[iVar1 /*3*/].f_1 = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_118[iVar1 /*3*/].f_1 = -1;
		}
		StringCopy(&cVar0, "MCV_OMST", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_118[iVar1 /*3*/].f_2 = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_118[iVar1 /*3*/].f_2 = -1;
		}
		iVar1++;
	}
	StringCopy(&cVar0, "MCV_JTE", 16);
	if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
	{
		Global_4718592.f_174999.f_131 = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			StringCopy(&cVar0, "MCV_JTP", 16);
			StringIntConCat(&cVar0, iVar1, 16);
			StringIntConCat(&cVar0, iVar2, 16);
			if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
			{
				Global_4718592.f_174999.f_132[iVar1 /*5*/][iVar2] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
			}
			else
			{
				Global_4718592.f_174999.f_132[iVar1 /*5*/][iVar2] = 0;
			}
			StringCopy(&cVar0, "MCV_JTF", 16);
			StringIntConCat(&cVar0, iVar1, 16);
			StringIntConCat(&cVar0, iVar2, 16);
			if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
			{
				Global_4718592.f_174999.f_148[iVar1 /*5*/][iVar2] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
			}
			else
			{
				Global_4718592.f_174999.f_148[iVar1 /*5*/][iVar2] = 0;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		StringCopy(&cVar0, "MCV_ECO", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 2)
		{
			Global_4718592.f_174999.f_164[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar0);
		}
		else
		{
			Global_4718592.f_174999.f_164[iVar1] = 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		StringCopy(&cVar0, "MCV_POT", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar0) == 4)
		{
			StringCopy(&(Global_4718592.f_174999.f_170[iVar1 /*16*/]), DATAFILE::DATADICT_GET_STRING(iParam0, &cVar0), 64);
		}
		else
		{
			StringCopy(&(Global_4718592.f_174999.f_170[iVar1 /*16*/]), "", 64);
		}
		iVar1++;
	}
}

struct<16> func_391()//Position - 0x1BFD4E
{
	struct<16> Var0;
	StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("IH_TITLE" /* GXT: The Cayo Perico Heist */), 64);
	return Var0;
}

struct<16> func_392()//Position - 0x1BFD86
{
	struct<16> Var0;
	StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("FMMC_CH_DN" /* GXT: The Diamond Casino Heist */), 64);
	if (Global_1966500 == 1)
	{
		StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("FMMC_CH_SS" /* GXT: The Diamond Casino Heist – Silent & Sneaky */), 64);
	}
	else if (Global_1966500 == 2)
	{
		StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("FMMC_CH_BC" /* GXT: The Diamond Casino Heist – The Big Con */), 64);
	}
	else if (Global_1966500 == 3)
	{
		StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("FMMC_CH_AG" /* GXT: The Diamond Casino Heist – Aggressive */), 64);
	}
	return Var0;
}

int func_393(int iParam0)//Position - 0x1BFE7F
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return 1;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return 2;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 3;
		default:
	}
	return 0;
}

int func_394(int iParam0)//Position - 0x1BFF48
{
	if (Global_262145.f_29921[0] == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_395(bool bParam0)//Position - 0x1BFF7B
{
	switch (bParam0)
	{
		case 0:
			return 13;
		case 1:
			return 13;
		case 3:
			return 6;
		case 2:
			return 2;
		case 4:
			return 12;
		case 5:
			return 53;
		default:
	}
	return 0;
}

void func_396(int iParam0, int iParam1)//Position - 0x1C028D
{
	struct<24> Var0;
	char cVar1[16];
	if (*iParam0 == 0)
	{
		return;
	}
	Var0.f_16 = -1;
	Global_4718592.f_174915[iParam1 /*24*/] = { Var0 };
	StringCopy(&cVar1, "MYmi", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar1, iParam1, 16);
	}
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar1) == 2)
	{
		Global_4718592.f_174915[iParam1 /*24*/].f_16 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar1);
	}
	StringCopy(&cVar1, "MYbs", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar1, iParam1, 16);
	}
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar1) == 2)
	{
		Global_4718592.f_174915[iParam1 /*24*/].f_17 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar1);
	}
	StringCopy(&cVar1, "MYyn", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar1, iParam1, 16);
	}
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar1) == 4)
	{
		StringCopy(&(Global_4718592.f_174915[iParam1 /*24*/]), DATAFILE::DATADICT_GET_STRING(*iParam0, &cVar1), 64);
	}
	StringCopy(&cVar1, "MYai", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar1, iParam1, 16);
	}
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar1) == 2)
	{
		Global_4718592.f_174915[iParam1 /*24*/].f_18 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar1);
	}
	StringCopy(&cVar1, "MYpi", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar1, iParam1, 16);
	}
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar1) == 2)
	{
		Global_4718592.f_174915[iParam1 /*24*/].f_19 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar1);
	}
	StringCopy(&cVar1, "MYci", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar1, iParam1, 16);
	}
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar1) == 2)
	{
		Global_4718592.f_174915[iParam1 /*24*/].f_20 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar1);
	}
	StringCopy(&cVar1, "MYli", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar1, iParam1, 16);
	}
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar1) == 2)
	{
		Global_4718592.f_174915[iParam1 /*24*/].f_21 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar1);
	}
	StringCopy(&cVar1, "MYfi", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar1, iParam1, 16);
	}
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar1) == 2)
	{
		Global_4718592.f_174915[iParam1 /*24*/].f_22 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar1);
	}
	StringCopy(&cVar1, "MYfl", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar1, iParam1, 16);
	}
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar1) == 2)
	{
		Global_4718592.f_174915[iParam1 /*24*/].f_23 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar1);
	}
}

void func_397(int iParam0)//Position - 0x1C078C
{
	struct<103> Var0;
	int iVar1;
	char cVar2[16];
	if (*iParam0 == 0)
	{
		return;
	}
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_13 = 1092616192;
	Var0.f_2.f_1.f_14 = 1092616192;
	Var0.f_2.f_1.f_15 = 1101004800;
	Var0.f_2.f_1.f_16 = 1077936128;
	Var0.f_2.f_1.f_17 = 1119092736;
	Var0.f_2.f_1.f_18 = 1077936128;
	Var0.f_2.f_1.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_20.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_20.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_20.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_20.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_19 = 1065353216;
	Global_4718592.f_172946 = { Var0 };
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, "KhBS") == 2)
	{
		Global_4718592.f_172946 = DATAFILE::DATADICT_GET_INT(*iParam0, "KhBS");
	}
	if (DATAFILE::DATADICT_GET_TYPE(*iParam0, "KhNha") == 2)
	{
		Global_4718592.f_172946.f_1 = DATAFILE::DATADICT_GET_INT(*iParam0, "KhNha");
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		StringCopy(&cVar2, "KhAC", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 5)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_4 = { DATAFILE::DATADICT_GET_VECTOR(*iParam0, &cVar2) };
		}
		StringCopy(&cVar2, "KhAD", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 5)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_7 = { DATAFILE::DATADICT_GET_VECTOR(*iParam0, &cVar2) };
		}
		StringCopy(&cVar2, "KhAU", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 5)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_10 = { DATAFILE::DATADICT_GET_VECTOR(*iParam0, &cVar2) };
		}
		else
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_10 = { 0f, 0f, 1f };
		}
		StringCopy(&cVar2, "KhAR", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 3)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_13 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &cVar2);
		}
		StringCopy(&cVar2, "KhTy", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 2)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/] = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar2);
		}
		StringCopy(&cVar2, "KhEn", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 2)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_1 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar2);
		}
		StringCopy(&cVar2, "KhBS", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 2)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_2 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar2);
		}
		StringCopy(&cVar2, "KhCt", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 3)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_18 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &cVar2);
		}
		StringCopy(&cVar2, "KhPt", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 3)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_19 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &cVar2);
		}
		StringCopy(&cVar2, "KhWd", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 3)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_14 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &cVar2);
		}
		StringCopy(&cVar2, "KhHe", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 3)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_16 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &cVar2);
		}
		StringCopy(&cVar2, "KhHd", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 3)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_17 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &cVar2);
		}
		StringCopy(&cVar2, "KhLn", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 3)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_15 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &cVar2);
		}
		StringCopy(&cVar2, "KhMnP", 16);
		StringIntConCat(&cVar2, iVar1, 16);
		if (DATAFILE::DATADICT_GET_TYPE(*iParam0, &cVar2) == 2)
		{
			Global_4718592.f_172946.f_2[iVar1 /*20*/].f_3 = DATAFILE::DATADICT_GET_INT(*iParam0, &cVar2);
		}
		iVar1++;
	}
}

void func_398(int iParam0)//Position - 0x1C25AF
{
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 5);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 23);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 9);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 11);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 14);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 16);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 21);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 25);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 27);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 29);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_35), 0);
	MISC::CLEAR_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_35), 2);
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 6))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 5);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 8) || BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 24))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 23);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 10))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 9);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 12))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 11);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 15))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 14);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 17))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 16);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 22))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 21);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 26))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 25);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 28))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 27);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 30))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_34), 29);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_35, 1))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_35), 0);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_35, 3))
	{
		MISC::SET_BIT(&(Global_4718592.f_173211[iParam0 /*58*/].f_35), 2);
	}
	if (BitTest(Global_4718592.f_173211[iParam0 /*58*/].f_34, 4))
	{
		Global_4718592.f_173211[iParam0 /*58*/] = -1;
	}
}

void func_399(char* sParam0, char* sParam1, int iParam2)//Position - 0x1C2E47
{
	StringCopy(sParam0, sParam1, 8);
	StringIntConCat(sParam0, iParam2, 8);
}

void func_400(int iParam0, int iParam1)//Position - 0x1C335B
{
	iParam0->f_4 = iParam1;
}

int func_401(int iParam0)//Position - 0x1C34B9
{
	if (MISC::IS_PS3_VERSION() || (__LIB_0__.func_52() && iParam0 == 0))
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0 || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
	{
		return 0;
	}
	if (__LIB_11__.func_549() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_402()//Position - 0x1C353C
{
	return BitTest(Global_1048576.f_10, 0);
}

void func_403()//Position - 0x1DB6BE
{
	MISC::SET_BIT(&(Global_2714762.f_2), 3);
}

bool func_404()//Position - 0x1DB6D1
{
	return BitTest(Global_2714762.f_2, 3);
}

bool func_405()//Position - 0x1DB6E1
{
	return BitTest(Global_2714762, 4);
}

bool func_406()//Position - 0x1DB6EF
{
	return BitTest(Global_2714762, 28);
}

void func_407(int iParam0)//Position - 0x1DB952
{
	int iVar0;
	bool bVar1;
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return;
	}
	if (!BitTest(Global_2715699.f_1.f_2813[iVar0], bVar1))
	{
	}
	MISC::SET_BIT(&(Global_2715699.f_1.f_2813[iVar0]), bVar1);
}

int func_408(bool bParam0)//Position - 0x1DB9D2
{
	switch (__LIB_6__.func_461(bParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		default:
	}
	return 1;
}

int func_409(int iParam0, int iParam1)//Position - 0x1DCAAE
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				case 1:
					return 20;
					break;
				case 3:
					return 20;
					break;
				case 2:
					return 20;
					break;
				case 4:
					return 20;
					break;
				case 5:
					return 20;
					break;
				case 6:
					return 20;
					break;
				case 7:
					return 20;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				case 1:
					return 20;
					break;
				case 3:
					return 20;
					break;
				case 2:
					return 20;
					break;
				case 4:
					return 20;
					break;
				case 5:
					return 20;
					break;
				case 6:
					return 20;
					break;
				case 7:
					return 20;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				case 1:
					return 20;
					break;
				case 3:
					return 20;
					break;
				case 2:
					return 20;
					break;
				case 4:
					return 20;
					break;
				case 5:
					return 20;
					break;
				case 6:
					return 20;
					break;
				case 7:
					return 20;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				case 1:
					return 20;
					break;
				case 3:
					return 20;
					break;
				case 2:
					return 20;
					break;
				case 4:
					return 20;
					break;
				case 5:
					return 20;
					break;
				case 6:
					return 20;
					break;
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

int func_410(int iParam0, int iParam1, int iParam2)//Position - 0x1DCCBE
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					return __LIB_1__.func_556(72, iParam2, 0);
					break;
				case 3:
					return __LIB_1__.func_556(74, iParam2, 0);
					break;
				case 2:
					return __LIB_1__.func_556(73, iParam2, 0);
					break;
				case 4:
					return __LIB_1__.func_556(75, iParam2, 0);
					break;
				case 5:
					return __LIB_1__.func_556(76, iParam2, 0);
					break;
				case 6:
					return __LIB_1__.func_556(77, iParam2, 0);
					break;
				case 7:
					return __LIB_1__.func_556(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_411(int iParam0, int iParam1, int iParam2)//Position - 0x1DCDD2
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__.func_39(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 47;
					break;
				case 3:
					return 22;
					break;
				case 2:
					return 21;
					break;
				case 4:
					return 54;
					break;
				case 5:
					return 31;
					break;
				case 6:
					return 79;
					break;
				case 7:
					return 81;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 51;
					break;
				case 3:
					return 46;
					break;
				case 2:
					return 49;
					break;
				case 4:
					return 71;
					break;
				case 5:
					return 19;
					break;
				case 6:
					return 24;
					break;
				case 7:
					return 21;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 23;
					break;
				case 3:
					return 28;
					break;
				case 2:
					return 79;
					break;
				case 4:
					return 31;
					break;
				case 5:
					return 82;
					break;
				case 6:
					return 69;
					break;
				case 7:
					return 49;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					return __LIB_1__.func_556(1225, iParam2, 0);
					break;
				case 3:
					return __LIB_1__.func_556(1231, iParam2, 0);
					break;
				case 2:
					return __LIB_1__.func_556(1227, iParam2, 0);
					break;
				case 4:
					return __LIB_1__.func_556(1230, iParam2, 0);
					break;
				case 5:
					return __LIB_1__.func_556(1229, iParam2, 0);
					break;
				case 6:
					return __LIB_1__.func_556(1226, iParam2, 0);
					break;
				case 7:
					return __LIB_1__.func_556(1228, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_412(int iParam0)//Position - 0x1DD087
{
	int iVar0;
	iVar0 = 0;
	iVar0 = (iVar0 + (STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 86400));
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 3600);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0) * 60);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_SECONDS(iParam0));
	return iVar0;
}

int func_413(int iParam0, int iParam1)//Position - 0x1DD0CA
{
	return Global_2826809[iParam0 /*3*/][__LIB_1__.func_443(iParam1)];
}

int func_414(int iParam0)//Position - 0x1DD0E2
{
	int iVar0;
	iVar0 = 0;
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 1440);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 60);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0));
	return iVar0;
}

int func_415()//Position - 0x1DD3CB
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_4718592.f_593)
	{
		iVar1 = 0;
		while (iVar1 < Global_4718592.f_593)
		{
			if (Global_4718592.f_600[iVar0] != Global_4718592.f_600[iVar1])
			{
				return 0;
			}
			else if (Global_4718592.f_595[iVar0] != Global_4718592.f_595[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

bool func_416()//Position - 0x1E2822
{
	return Global_2714762.f_749;
}

void func_417(int iParam0)//Position - 0x1E28EE
{
	Global_1922906 = iParam0;
}

int func_418(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1E3761
{
	if (MISC::ARE_STRINGS_EQUAL(&uParam0, "APA_NAR_INT"))
	{
		return 1;
	}
	return 0;
}

void func_419()//Position - 0x1E6349
{
	HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
	HUD::CLEAR_GPS_CUSTOM_ROUTE();
}

void func_420()//Position - 0x1E6E86
{
	Global_2715699.f_6313 = 0;
}

void func_421(int iParam0)//Position - 0x1E6EF6
{
	Global_1937518.f_42 = iParam0;
}

bool func_422()//Position - 0x1E6F06
{
	return Global_1937518.f_42;
}

void func_423()//Position - 0x1E6F14
{
	Global_2725858 = 0;
}

void func_424()//Position - 0x1E6F21
{
	Global_2725857 = 0;
}

float func_425()//Position - 0x1E7317
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = 1f;
	iVar2 = (Global_44205 - iVar0);
	if (iVar2 <= Global_44206)
	{
		if (Global_44205 != -1)
		{
			fVar1 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(Global_44206));
		}
	}
	return fVar1;
}

int func_426()//Position - 0x1E8384
{
	int iVar0;
	iVar0 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 70000);
	return iVar0;
}

int func_427(int iParam0)//Position - 0x1E8515
{
	switch (iParam0)
	{
		case -2093023277:
			return 0;
		case -623825288:
			return 1;
		case 1556318106:
			return 2;
		case -305805900:
			return 3;
		case 696547586:
			return 4;
		case 1995606767:
			return 5;
		case 1077174234:
			return 6;
		case 1873334195:
			return 7;
		case 1920422321:
			return 8;
		case 2113140006:
			return 9;
		case 965649721:
			return 10;
		case -298492751:
			return 11;
		default:
	}
	return 12;
}

void func_428(bool bParam0)//Position - 0x1E85A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<6> Var4;
	if (Global_1573108 == 0)
	{
		return;
	}
	if (Global_1573026.f_8)
	{
		return;
	}
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = 0;
	iVar2 = 0;
	if (!bParam0)
	{
		bVar3 = true;
		while (bVar3)
		{
			bVar3 = false;
			if (iVar1 < Global_1573108)
			{
				if (Global_1573035[iVar1 /*6*/].f_5)
				{
					iVar1++;
					iVar2++;
					bVar3 = true;
				}
			}
		}
	}
	while (iVar1 < Global_1573108)
	{
		if (NETWORK::IS_TIME_LESS_THAN(iVar0, Global_1573035[iVar1 /*6*/].f_4))
		{
			if (!iVar1 == iVar2)
			{
				Global_1573035[iVar2 /*6*/] = { Global_1573035[iVar1 /*6*/] };
			}
			iVar2++;
		}
		iVar1++;
	}
	Global_1573108 = iVar2;
	Var4 = 12;
	Var4.f_3 = -1;
	while (iVar2 < iVar1)
	{
		Global_1573035[iVar2 /*6*/] = { Var4 };
		iVar2++;
	}
}

void func_429(bool bParam0)//Position - 0x1EA183
{
	if (!bParam0)
	{
		MISC::SET_BIT(&Global_1574942, 6);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1574942, 6);
	}
}

void func_430(int iParam0)//Position - 0x1EA1E5
{
	Global_1931975.f_1782 = iParam0;
}

Vector3 func_431(int iParam0)//Position - 0x1EBB13
{
	switch (iParam0)
	{
		case 89:
			return 1287.413f, 2846.593f, 45.05f;
		case 90:
			return 19.022f, 2611.234f, 81.656f;
		case 91:
			return 2769.089f, 3920.189f, 41.488f;
		case 92:
			return 3407.521f, 5504.718f, 21.934f;
		case 93:
			return 2.43f, 6831.906f, 11.473f;
		case 94:
			return -2231.284f, 2417.664f, 7.837f;
		case 95:
			return -8.5274f, 3327.2117f, 40.5878f;
		case 96:
			return 2086.27f, 1761.5515f, 102.98f;
		case 97:
			return 1874.689f, 284.791f, 159.961f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_432()//Position - 0x1ED230
{
	switch (Global_4718592.f_116976)
	{
		case 76:
			AUDIO::TRIGGER_MUSIC_EVENT("CH_MUSIC_STOP");
			break;
		case 78:
			AUDIO::TRIGGER_MUSIC_EVENT("HEI4_MUSIC_STOP");
			break;
		case 79:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_TUNER_STOP_MUSIC");
			break;
		case 81:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FIXER_STOP_MUSIC");
			break;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FIXER_STOP_MUSIC");
			break;
		case 87:
			if (Global_1574964)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DFWD_CS_TIMED_TRACK_STOP");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FIXER_STOP_MUSIC");
			}
			break;
		case 88:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_MPSUM2_STOP_MUSIC");
			break;
		default:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_STOP");
			break;
	}
}

void func_433()//Position - 0x1EE4FA
{
	struct<13> Var0;
	Global_2715699.f_6603 = { Var0 };
}

void func_434(int iParam0)//Position - 0x1EE697
{
	Global_1941273.f_11 = iParam0;
}

int func_435()//Position - 0x1EEF2E
{
	if (MISC::IS_PS3_VERSION() || MISC::IS_XBOX360_VERSION())
	{
		return 1;
	}
	return 0;
}

bool func_436()//Position - 0x1F0980
{
	return Global_1931975.f_1782;
}

char* func_437(int iParam0)//Position - 0x1F9D90
{
	switch (iParam0)
	{
		case 0:
			return "heist_mp";
		case 1:
			return "heistmap_mp";
		case 2:
			return "instructional_buttons";
		case 3:
			return "heist_pre";
		default:
	}
	return "ERROR";
}

char* func_438(int iParam0, int iParam1)//Position - 0x1FB49E
{
	int iVar0;
	iVar0 = Global_2868353[iParam0 /*3*/][__LIB_1__.func_443(iParam1)];
	return STATS::STAT_GET_STRING(iVar0, -1);
}

bool func_439()//Position - 0x1FB78C
{
	return Global_1937518.f_44;
}

bool func_440()//Position - 0x1FB79A
{
	return Global_2715699.f_6321;
}

int func_441()//Position - 0x1FB7A9
{
	return Global_1933908.f_2769;
}

void func_442(var uParam0, bool bParam1, bool bParam2)//Position - 0x1FBBB7
{
	if (*uParam0 != 0)
	{
		if (bParam2)
		{
			NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
		}
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	if (bParam1)
	{
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = 0;
}

bool func_443()//Position - 0x1FC1AA
{
	return Global_2715699.f_6328;
}

void func_444()//Position - 0x1FC5D7
{
	Global_2715699.f_6312 = 0;
}

void func_445()//Position - 0x1FC5E7
{
	Global_2714762.f_746 = 0;
}

void func_446(int iParam0)//Position - 0x1FCB98
{
	Global_1937518.f_44 = iParam0;
}

void func_447()//Position - 0x1FDB4F
{
	int iVar0;
	Global_43986 = 1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_43792[iVar0 /*32*/] = 0;
		Global_43792[iVar0 /*32*/].f_2 = 0;
		Global_43792[iVar0 /*32*/].f_4 = 0;
		Global_43792[iVar0 /*32*/].f_5 = 0;
		Global_43792[iVar0 /*32*/].f_7 = 0;
		Global_43792[iVar0 /*32*/].f_1 = -1;
		Global_43792[iVar0 /*32*/].f_3 = 0;
		iVar0++;
	}
}

int func_448(int iParam0)//Position - 0x1FE1BB
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("SCUBA_GEAR")))
		{
			return 1;
		}
	}
	return 0;
}

void func_449()//Position - 0x200ED5
{
	Global_2715699.f_6312 = 1;
}

int func_450(int iParam0)//Position - 0x20119C
{
	if (iParam0 > 6 || iParam0 < 0)
	{
		return 0;
	}
	if (Global_1931975.f_1728[iParam0] <= Global_1931975.f_1708 + 1)
	{
		return 1;
	}
	return 0;
}

char* func_451(int iParam0, int iParam1)//Position - 0x2030F4
{
	if (iParam0 == -1)
	{
		return __LIB_9__.func_800();
	}
	return NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam0, iParam1);
}

var func_452(int iParam0)//Position - 0x203D90
{
	return iParam0 * 3;
}

void func_453(var uParam0)//Position - 0x203D9C
{
	Global_1931975.f_1758 = uParam0;
}

int func_454(int iParam0)//Position - 0x203E7F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_1931975.f_1710 - 1))
	{
		if (Global_1931975.f_1728[iVar0] == iParam0)
		{
			if (Global_1931975.f_1720[iVar0] == -1 || Global_1931975.f_1720[iVar0] == 99)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

var func_455(int iParam0)//Position - 0x204914
{
	return Global_2686568[iParam0 /*41*/].f_32;
}

var func_456(int iParam0)//Position - 0x204926
{
	return Global_2686568[iParam0 /*41*/].f_31;
}

void func_457()//Position - 0x205D00
{
	Global_2714762.f_733 = 1;
}

void func_458()//Position - 0x205D10
{
	Global_2714762.f_753 = 0;
}

var func_459()//Position - 0x206B36
{
	return Global_262145.f_9068 /* Tunable: ROOT_ID_HASH_SERIES_A_FUNDING */;
}

var func_460()//Position - 0x206B45
{
	return Global_262145.f_9062 /* Tunable: ROOT_ID_HASH_THE_HUMANE_LABS_RAID */;
}

var func_461()//Position - 0x206B54
{
	return Global_262145.f_9055 /* Tunable: ROOT_ID_HASH_THE_PRISON_BREAK */;
}

var func_462()//Position - 0x206B63
{
	return Global_262145.f_9050 /* Tunable: ROOT_ID_HASH_THE_FLECCA_JOB */;
}

char* func_463(int iParam0)//Position - 0x206DB8
{
	if (iParam0 == Global_262145.f_9050 /* Tunable: ROOT_ID_HASH_THE_FLECCA_JOB */)
	{
		return "HEI_G_HD0" /* GXT: Prove your worth as a heist crew by taking down a small Fleeca Bank franchise on the Western Highway. Scope it out, get your getaway car, then take it down, and get out clean. */;
	}
	else if (iParam0 == Global_262145.f_9055 /* Tunable: ROOT_ID_HASH_THE_PRISON_BREAK */)
	{
		return "HEI_G_HD1" /* GXT: Break a high value inmate out of Bolingbroke Penitentiary. To get him out, you'll need an inmate transport bus and a smugglers' plane. To keep him happy, you'll need to settle some debts and get him his car. */;
	}
	else if (iParam0 == Global_262145.f_9062 /* Tunable: ROOT_ID_HASH_THE_HUMANE_LABS_RAID */)
	{
		return "HEI_G_HD2" /* GXT: Go into a secretive research facility and come out with their data.  Get hold of an EMP and get it into their grounds, get the Lab's key codes, and get yourself an attack chopper.  Then half the team hits the lab and half holds off security until it's done. */;
	}
	else if (iParam0 == Global_262145.f_9068 /* Tunable: ROOT_ID_HASH_SERIES_A_FUNDING */)
	{
		return "HEI_G_HD3" /* GXT: Help a smalltime dealer get the stock he needs to launch a bigtime distribution business.  Raid some of the largest narco-operations in the state, take their product, and get it all together for the big sale. */;
	}
	else if (iParam0 == Global_262145.f_9074 /* Tunable: ROOT_ID_HASH_THE_PACIFIC_STANDARD_JOB */)
	{
		return "HEI_G_HD4" /* GXT: Bring down the flagship branch of one of the biggest banks in the country. Find a transponder and tune it to the right signal to disable Pacific Standard dye packs, get hacking equipment, getaway bikes, and thermal charges, then go in hard and come out with their holdings. */;
	}
	return "";
}

void func_464()//Position - 0x2072CA
{
	Global_2667198.f_2 = 0;
	Global_2667198.f_3 = 0;
}

void func_465(int iParam0, int iParam1)//Position - 0x2072E0
{
	Global_2666788 = iParam0;
	if (iParam0 != 0)
	{
		if (iParam1 != 0)
		{
		}
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = 120000;
	}
	Global_2666788.f_18 = iParam1;
}

int func_466()//Position - 0x2084E7
{
	return Global_2666788;
}

bool func_467()//Position - 0x208522
{
	return Global_2723612.f_6;
}

int func_468()//Position - 0x20854D
{
	return Global_1937088;
}

void func_469()//Position - 0x20AB28
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1931975.f_1914[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1931975.f_1914[iVar0], false, true);
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1931975.f_1914[iVar0], true))
			{
				OBJECT::DELETE_OBJECT(&(Global_1931975.f_1914[iVar0]));
			}
		}
		iVar0++;
	}
	Global_1939842 = 0;
	Global_1931975.f_1932 = 0;
	Global_1931975.f_1761 = 0;
}

Vector3 func_470(int iParam0)//Position - 0x20E25B
{
	return Global_2621865[iParam0 /*26*/].f_3;
}

int func_471(int iParam0)//Position - 0x20E31C
{
	return Global_2621865[iParam0 /*26*/];
}

bool func_472(int iParam0)//Position - 0x20E577
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 11);
}

bool func_473()//Position - 0x20E6EE
{
	return Global_1573131.f_8;
}

bool func_474()//Position - 0x20E6FC
{
	return Global_1573131.f_26;
}

bool func_475(int iParam0)//Position - 0x20EA21
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 16);
}

void func_476(int iParam0)//Position - 0x20EA66
{
	var uVar0;
	uVar0 = Global_2621865[iParam0 /*26*/].f_25;
	Global_2653167.f_7 = uVar0;
	Global_2653167.f_8 = (MISC::GET_GAME_TIMER() + 300000);
}

bool func_477(int iParam0)//Position - 0x20EA91
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 14);
}

int func_478(int iParam0)//Position - 0x20EEFC
{
	return Global_2621865[iParam0 /*26*/].f_15.f_2;
}

bool func_479(int iParam0)//Position - 0x20EF22
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 11);
}

void func_480(int iParam0)//Position - 0x20EF37
{
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 0);
}

bool func_481(int iParam0)//Position - 0x20F0D5
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 0);
}

int func_482(int iParam0)//Position - 0x20F156
{
	int iVar0;
	iVar0 = __LIB_9__.func_268(iParam0);
	switch (iVar0)
	{
		case 191:
			return 0;
		case 189:
			return 1;
		case 192:
			return 2;
		case 193:
			return 3;
		case 188:
			return 4;
		default:
	}
	return 6;
}

bool func_483(int iParam0)//Position - 0x20F1A0
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 21);
}

bool func_484(int iParam0)//Position - 0x20F1B5
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 5);
}

int func_485(int iParam0)//Position - 0x20F1D8
{
	return Global_2621865[iParam0 /*26*/].f_11;
}

bool func_486(int iParam0)//Position - 0x20F1EA
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 25);
}

bool func_487(int iParam0)//Position - 0x20F1FF
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 24);
}

bool func_488(int iParam0)//Position - 0x20F214
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 22);
}

int func_489(int iParam0)//Position - 0x20F229
{
	if (BitTest(Global_2621865[iParam0 /*26*/].f_12, 8))
	{
		return 0;
	}
	return 1;
}

bool func_490(int iParam0)//Position - 0x20F25C
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 15);
}

bool func_491(int iParam0)//Position - 0x20F271
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 5);
}

bool func_492(int iParam0)//Position - 0x20F285
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 4);
}

void func_493(int iParam0)//Position - 0x20F299
{
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 6);
}

void func_494(int iParam0)//Position - 0x20F2C7
{
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 6);
}

var func_495(int iParam0)//Position - 0x20F3A7
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 26);
}

bool func_496(int iParam0)//Position - 0x20F3BC
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 19);
}

bool func_497(int iParam0)//Position - 0x20F3D1
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 14);
}

bool func_498(int iParam0)//Position - 0x20F415
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 8);
}

bool func_499(int iParam0)//Position - 0x20F42A
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 9);
}

bool func_500(int iParam0)//Position - 0x20F463
{
	return Global_2621865[iParam0 /*26*/].f_6.f_4 == 16777215;
}

bool func_501(int iParam0)//Position - 0x20F47C
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 7);
}

bool func_502(int iParam0)//Position - 0x20F490
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	return BitTest(Global_2621865[iParam0 /*26*/].f_6.f_4, iVar0);
}

bool func_503(int iParam0)//Position - 0x20F5B1
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 16);
}

int func_504(int iParam0)//Position - 0x20F5EC
{
	switch (iParam0)
	{
		case 3:
			return 5;
		default:
	}
	return 0;
}

var func_505(int iParam0)//Position - 0x20F642
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 18);
}

void func_506(int iParam0)//Position - 0x20F657
{
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 7);
}

bool func_507(int iParam0)//Position - 0x20F68C
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 6);
}

void func_508(int iParam0, struct<3> Param1, var uParam2)//Position - 0x20FCB6
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (Global_1573169[iVar0 /*8*/] == -1)
		{
			Global_1573169[iVar0 /*8*/] = iParam0;
			Global_1573169[iVar0 /*8*/].f_1 = { uParam2->f_24 };
			Global_1573169[iVar0 /*8*/].f_4 = { uParam2->f_27 };
			Global_1573169[iVar0 /*8*/].f_7 = uParam2->f_30;
			Global_2621541[iVar0 /*3*/] = { Param1 };
			Global_1573850++;
			return;
		}
		iVar0++;
	}
}

int func_509()//Position - 0x20FD37
{
	var uVar0;
	uVar0 = Global_1573131;
	Global_1573131++;
	return uVar0;
}

void func_510(int iParam0, struct<24> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x20FD51
{
	if (Param1.f_1)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 3);
	}
	if (Param1.f_2)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 1);
	}
	if (Param1.f_3)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 2);
	}
	if (Param1.f_4)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 15);
	}
	if (Param1.f_5)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 0);
	}
	if (Param1.f_6)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 4);
	}
	if (Param1.f_7)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 5);
	}
	if (Param1.f_8)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 11);
	}
	if (Param1.f_9)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 6);
	}
	if (Param1.f_10)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 7);
	}
	if (Param1.f_11)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 8);
	}
	if (Param1.f_12)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 9);
	}
	if (Param1.f_13)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 10);
	}
	if (Param1.f_14)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 11);
	}
	if (Param1.f_15)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 16);
	}
	if (Param1.f_16)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 13);
	}
	if (Param1.f_17)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 14);
	}
	if (Param1.f_19)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 18);
	}
	if (Param1.f_18)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 17);
	}
	if (Param1.f_20)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 22);
	}
	if (Param1.f_21)
	{
		if (!Param1.f_20)
		{
		}
		else
		{
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 23);
		}
	}
	if (Param1.f_22)
	{
		if (!Param1.f_20)
		{
		}
		else
		{
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 24);
		}
	}
	if (Param1.f_23)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 25);
	}
	Global_2621865[iParam0 /*26*/].f_14 = Param1.f_0;
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 6);
}

void func_511(int iParam0)//Position - 0x20FF93
{
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 0);
}

int func_512(int iParam0)//Position - 0x20FFD7
{
	switch (iParam0)
	{
		case 23:
		case 27:
		case 12:
		case 122:
		case 11:
		case 14:
		case 15:
		case 8:
		case 3:
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_513(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28)//Position - 0x210321
{
	if (Param0.f_1 == -1)
	{
		return 0;
	}
	return 1;
}

void func_514(var uParam0)//Position - 0x2103CF
{
	struct<5> Var0;
	Var0.f_4 = 16777215;
	*uParam0 = { Var0 };
}

bool func_515(int iParam0)//Position - 0x2103FF
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 2);
}

bool func_516(int iParam0)//Position - 0x210413
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 1);
}

void func_517(int iParam0)//Position - 0x210427
{
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 4);
}

bool func_518(int iParam0)//Position - 0x21043E
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 4);
}

bool func_519(int iParam0)//Position - 0x210452
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 17);
}

int func_520(var uParam0)//Position - 0x210813
{
	switch (*uParam0)
	{
		case 190:
			return 1;
		default:
	}
	return 0;
}

int func_521(int iParam0)//Position - 0x2108C3
{
	switch (iParam0)
	{
		case 1621511611:
			return 1;
		default:
	}
	return 0;
}

int func_522(var uParam0)//Position - 0x210A04
{
	switch (*uParam0)
	{
		case 190:
			return 3;
		default:
	}
	return 0;
}

void func_523(var uParam0)//Position - 0x210A1F
{
	struct<31> Var0;
	Var0 = 3;
	*uParam0 = { Var0 };
	uParam0->f_24 = { 0f, 0f, 0f };
	uParam0->f_27 = { 0f, 0f, 0f };
}

float func_524(int iParam0)//Position - 0x210EF6
{
	switch (iParam0)
	{
		case 184:
		case 182:
		case 181:
		case 186:
			return 1.4f;
		default:
	}
	return 2.6f;
}

int func_525(int iParam0, bool bParam1)//Position - 0x210F2A
{
	switch (iParam0)
	{
		case 40:
			return iLocal_7;
		case 63:
			return iLocal_8;
		case 62:
			return iLocal_9;
		default:
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			return Global_2621534;
		}
		return iLocal_10;
	}
	else if (iParam0 < 32)
	{
		return iLocal_11;
	}
	return 3;
}

int func_526(int iParam0, bool bParam1)//Position - 0x210F87
{
	switch (iParam0)
	{
		case 40:
			return iLocal_2;
		case 63:
			return iLocal_3;
		case 62:
			return iLocal_4;
		default:
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			return Global_2621533;
		}
		return iLocal_5;
	}
	else if (iParam0 < 32)
	{
		return iLocal_6;
	}
	return 3;
}

int func_527(int iParam0, var uParam1)//Position - 0x211E09
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9493[iVar0] || iParam0 == MISC::GET_HASH_KEY(&(Global_794709.f_4[Global_794709.f_203824[0 /*11*/][iVar0] /*88*/])))
		{
			return __LIB_9__.func_271(0, iVar0);
		}
		iVar0++;
	}
	return uParam1;
}

void func_528(var uParam0)//Position - 0x21214E
{
	struct<30> Var0;
	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_25 = 5;
	*uParam0 = { Var0 };
	StringCopy(&(uParam0->f_2), "", 24);
	StringCopy(&(uParam0->f_8), "", 64);
	uParam0->f_27 = { 0f, 0f, 0f };
}

void func_529()//Position - 0x21246C
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	iVar0 = 0;
	iVar1 = 0;
	StringCopy(&Var2, "", 24);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var2 = { Global_2666179[iVar0 /*13*/].f_1.f_3 };
		iVar1 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
			iVar1 = MISC::GET_HASH_KEY(&Var2);
		}
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_87.f_14.f_14[iVar0] = iVar1;
		iVar0++;
	}
}

int func_530(int iParam0, char* sParam1)//Position - 0x212D8B
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return -1;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 63:
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), sParam1))
					{
						return Global_794709.f_4[iVar0 /*88*/].f_54;
					}
				}
				iVar0++;
			}
			break;
		case 62:
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[iVar0 /*88*/]), sParam1))
					{
						return Global_998606.f_604[iVar0 /*88*/].f_54;
					}
				}
				iVar0++;
			}
			break;
		case 40:
			return 0;
		default:
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				iVar0 = 0;
				while (iVar0 < 62)
				{
					if (BitTest(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
					{
						if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[iVar0 /*88*/]), sParam1))
						{
							return Global_1020252.f_5[iVar0 /*88*/].f_54;
						}
					}
					iVar0++;
				}
			}
			break;
	}
	return 0;
}

int func_531(char* sParam0, char* sParam1)//Position - 0x21338A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
		{
			return 0;
		}
	}
	return 1;
}

int func_532(char* sParam0)//Position - 0x213506
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2666179[iVar0 /*13*/] != 42)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_2666179[iVar0 /*13*/].f_1.f_3)))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<6> func_533(int iParam0, int iParam1)//Position - 0x21394E
{
	struct<6> Var0;
	StringCopy(&Var0, "UNKNOWN", 24);
	if (__LIB_2__.func_12(iParam1))
	{
		if (Global_2660249)
		{
			return Global_2660249.f_1;
		}
		return Var0;
	}
	switch (iParam0)
	{
		case 63:
			Var0 = { Global_794709.f_4[iParam1 /*88*/] };
			return Var0;
		case 62:
			Var0 = { Global_998606.f_604[iParam1 /*88*/] };
			return Var0;
		default:
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_1020252.f_5[iParam1 /*88*/];
	}
	else if (iParam0 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<6> func_534()//Position - 0x214120
{
	return Global_2714762.f_860;
}

int func_535(int iParam0)//Position - 0x2160A1
{
	int iVar0;
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_536()//Position - 0x217527
{
	Global_2714762.f_43.f_57 = 1;
}

void func_537()//Position - 0x21756F
{
	MISC::SET_BIT(&Global_2714762, 4);
}

void func_538()//Position - 0x217580
{
	MISC::SET_BIT(&Global_2714762, 28);
}

int func_539()//Position - 0x2175A8
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (Global_1574598)
		{
			return 1;
		}
	}
	else if (Global_1574598)
	{
		Global_1574598 = 0;
	}
	return 0;
}

void func_540(char* sParam0, char* sParam1, int iParam2)//Position - 0x218B29
{
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sParam0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sParam0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = 363;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

bool func_541()//Position - 0x21A032
{
	return Global_1931618.f_2;
}

int func_542(bool bParam0)//Position - 0x21D173
{
	int iVar0;
	struct<13> Var1;
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (bParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = bParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (MISC::IS_PS3_VERSION() || __LIB_0__.func_52())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__.func_53())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { __LIB_1__.func_267(bParam0) };
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_543(int iParam0, int iParam1)//Position - 0x2206DB
{
	if (iParam0 > Global_262145.f_6210[iParam1])
	{
		iParam0 = 0;
	}
	return Global_262145.f_5065[iParam1 /*51*/][iParam0];
}

int func_544(int iParam0)//Position - 0x220724
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_262145.f_6210[iParam0])
	{
		if (Global_262145.f_5065[iParam0 /*51*/][iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar0;
}

int func_545()//Position - 0x220762
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (Global_262145.f_4794[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar0;
}

void func_546(bool bParam0)//Position - 0x2211B5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	iVar4 = 62;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			Global_1031312.f_5462[iVar0] = 0;
			bVar2 = (iVar0 % 32);
			iVar1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f));
			if (BitTest(Global_1835448[iVar1], bVar2))
			{
				iVar3 = iVar0;
				while (iVar3 <= (iVar4 - 2))
				{
					Global_1031312.f_5[iVar3 /*88*/] = { Global_1031312.f_5[iVar3 + 1 /*88*/] };
					iVar3++;
				}
				MISC::CLEAR_BIT(&(Global_1835448[iVar1]), bVar2);
				return;
			}
			MISC::CLEAR_BIT(&(Global_1835448[iVar1]), bVar2);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			Global_1020252.f_5462[iVar0] = 0;
			bVar2 = (iVar0 % 32);
			iVar1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f));
			if (BitTest(Global_1835448[iVar1], bVar2))
			{
				iVar3 = iVar0;
				while (iVar3 <= (iVar4 - 2))
				{
					Global_1020252.f_5[iVar3 /*88*/] = { Global_1020252.f_5[iVar3 + 1 /*88*/] };
					iVar3++;
				}
				MISC::CLEAR_BIT(&(Global_1835448[iVar1]), bVar2);
				return;
			}
			MISC::CLEAR_BIT(&(Global_1835448[iVar1]), bVar2);
			iVar0++;
		}
	}
}

int func_547(int iParam0)//Position - 0x222428
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9493[iVar0] || iParam0 == Global_262145.f_9502[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_548(struct<16> Param0)//Position - 0x222837
{
	int iVar0;
	iVar0 = __LIB_0__.func_716(3);
	Global_2676732[iVar0 /*83*/] = 3;
	Global_2676732[iVar0 /*83*/].f_1 = { Param0 };
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-FromLiveArea", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[1 /*16*/]), "-LiveAreaContentType=UGC_TYPE_GTA5_MISSION", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[2 /*16*/]), "-LiveAreaLoadContent=", 64);
	MemCopy(&(Global_2676732[iVar0 /*83*/].f_18[3 /*16*/]), {Global_4718592.f_116811}, 16);
}

void func_549(struct<16> Param0)//Position - 0x2228B9
{
	int iVar0;
	iVar0 = __LIB_0__.func_716(2);
	Global_2676732[iVar0 /*83*/] = 2;
	Global_2676732[iVar0 /*83*/].f_1 = { Param0 };
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-FromLiveArea", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[1 /*16*/]), "-LiveAreaContentType=UGC_TYPE_GTA5_MISSION", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[2 /*16*/]), "-LiveAreaLoadContent=", 64);
	MemCopy(&(Global_2676732[iVar0 /*83*/].f_18[3 /*16*/]), {Global_4718592.f_116811}, 16);
}

int func_550(var uParam0)//Position - 0x223EC1
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(__LIB_11__.func_375(uParam0), -1, 0);
	return iVar0;
}

int func_551(int iParam0, int iParam1, bool bParam2)//Position - 0x225D49
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return joaat("MPPLY_AVAILABLE_RACES_V");
			}
			else
			{
				return joaat("MPPLY_AVAILABLE_RACES");
			}
			break;
		case 1:
			if (bParam2)
			{
				return joaat("MPPLY_AVAILABLE_DMS_V");
			}
			else
			{
				return joaat("MPPLY_AVAILABLE_DMS");
			}
			break;
		case 8:
			if (bParam2)
			{
				return joaat("MPPLY_AVAILABLE_PARAS_V");
			}
			else
			{
				return joaat("MPPLY_AVAILABLE_PARAS");
			}
			break;
		case 3:
			if (bParam2)
			{
				return joaat("MPPLY_AVAILABLE_SURVIVAL_V");
			}
			else
			{
				return joaat("MPPLY_AVAILABLE_SURVIVAL");
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return joaat("MPPLY_AVAILABLE_CTF_V");
					}
					else
					{
						return joaat("MPPLY_AVAILABLE_CTF");
					}
					break;
				case 5:
					if (bParam2)
					{
						return joaat("MPPLY_AVAILABLE_LTS_V");
					}
					else
					{
						return joaat("MPPLY_AVAILABLE_LTS");
					}
					break;
				case 4:
					if (bParam2)
					{
						return joaat("MPPLY_AVAILABLE_VERSUS_V");
					}
					else
					{
						return joaat("MPPLY_AVAILABLE_VERSUS");
					}
					break;
				case 1:
					if (bParam2)
					{
						return joaat("MPPLY_AVAILABLE_HEIST_FINALE_V");
					}
					else
					{
						return joaat("MPPLY_AVAILABLE_HEIST_FINALE");
					}
					break;
				case 7:
					if (bParam2)
					{
						return joaat("MPPLY_AVAILABLE_HEIST_PLANV");
					}
					else
					{
						return joaat("MPPLY_AVAILABLE_HEIST_PLAN");
					}
					break;
			}
			if (bParam2)
			{
				return joaat("MPPLY_AVAILABLE_MISSIONS_V");
			}
			else
			{
				return joaat("MPPLY_AVAILABLE_MISSIONS");
			}
			break;
	}
	return -1;
}

int func_552(int iParam0, int iParam1, bool bParam2)//Position - 0x225F50
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return joaat("MPPLY_UNIQUE_RACES_V");
			}
			else
			{
				return joaat("MPPLY_UNIQUE_RACES");
			}
			break;
		case 1:
			if (bParam2)
			{
				return joaat("MPPLY_UNIQUE_DMS_V");
			}
			else
			{
				return joaat("MPPLY_UNIQUE_DMS");
			}
			break;
		case 8:
			if (bParam2)
			{
				return joaat("MPPLY_UNIQUE_PARAS_V");
			}
			else
			{
				return joaat("MPPLY_UNIQUE_PARAS");
			}
			break;
		case 3:
			if (bParam2)
			{
				return joaat("MPPLY_UNIQUE_SURVIVAL_V");
			}
			else
			{
				return joaat("MPPLY_UNIQUE_SURVIVAL");
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return joaat("MPPLY_UNIQUE_CTF_V");
					}
					else
					{
						return joaat("MPPLY_UNIQUE_CTF");
					}
					break;
				case 5:
					if (bParam2)
					{
						return joaat("MPPLY_UNIQUE_LTS_V");
					}
					else
					{
						return joaat("MPPLY_UNIQUE_LTS");
					}
					break;
				case 4:
					if (bParam2)
					{
						return joaat("MPPLY_UNIQUE_VERSUS_V");
					}
					else
					{
						return joaat("MPPLY_UNIQUE_VERSUS");
					}
					break;
				case 1:
					if (bParam2)
					{
						return joaat("MPPLY_UNIQUE_HEIST_FINALE_V");
					}
					else
					{
						return joaat("MPPLY_UNIQUE_HEIST_FINALE");
					}
					break;
				case 7:
					if (bParam2)
					{
						return joaat("MPPLY_UNIQUE_HEIST_PLANNING_V");
					}
					else
					{
						return joaat("MPPLY_UNIQUE_HEIST_PLANNING");
					}
					break;
			}
			if (bParam2)
			{
				return joaat("MPPLY_UNIQUE_MISSIONS_V");
			}
			else
			{
				return joaat("MPPLY_UNIQUE_MISSIONS");
			}
			break;
	}
	return -1;
}

char* func_553()//Position - 0x2260C2
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREATOR_RSV" /* GXT: Rockstar Verified */);
}

int func_554(int iParam0)//Position - 0x226DBE
{
	switch (iParam0)
	{
		case 12:
			return joaat("MPPLY_TOTAL_CONTACT_0");
		case 19:
			return joaat("MPPLY_TOTAL_CONTACT_1");
		case 86:
			return joaat("MPPLY_TOTAL_CONTACT_2");
		case 20:
			return joaat("MPPLY_TOTAL_CONTACT_3");
		case 31:
			return joaat("MPPLY_TOTAL_CONTACT_4");
		case 2:
			return joaat("MPPLY_TOTAL_CONTACT_5");
		case 18:
			return joaat("MPPLY_TOTAL_CONTACT_6");
		default:
	}
	return -1;
}

int func_555(int iParam0)//Position - 0x226EC0
{
	switch (iParam0)
	{
		case 12:
			return joaat("MPPLY_UNIQUE_CONTACT_0");
		case 19:
			return joaat("MPPLY_UNIQUE_CONTACT_1");
		case 86:
			return joaat("MPPLY_UNIQUE_CONTACT_2");
		case 20:
			return joaat("MPPLY_UNIQUE_CONTACT_3");
		case 31:
			return joaat("MPPLY_UNIQUE_CONTACT_4");
		case 2:
			return joaat("MPPLY_UNIQUE_CONTACT_5");
		case 18:
			return joaat("MPPLY_UNIQUE_CONTACT_6");
		default:
	}
	return -1;
}

bool func_556(int iParam0)//Position - 0x22708A
{
	return BitTest(Global_794709.f_4[iParam0 /*88*/].f_76, 24);
}

bool func_557(int iParam0)//Position - 0x2270A1
{
	return BitTest(Global_794709.f_4[iParam0 /*88*/].f_76, 3);
}

bool func_558(int iParam0)//Position - 0x2270B7
{
	return BitTest(Global_794709.f_4[iParam0 /*88*/].f_76, 10);
}

bool func_559(int iParam0)//Position - 0x2270CE
{
	return BitTest(Global_794709.f_4[iParam0 /*88*/].f_76, 7);
}

void func_560()//Position - 0x22732E
{
	int iVar0;
	Global_1039641.f_684 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_1039641[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1039641.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1039641.f_512[iVar0] = 0f;
		iVar0++;
	}
}

void func_561()//Position - 0x22737A
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Global_794709.f_203824[iVar0 /*11*/].f_9 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Global_794709.f_203824[iVar1 /*11*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_562(char* sParam0)//Position - 0x2273C9
{
	if ((((((((((((((((MISC::ARE_STRINGS_EQUAL(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || MISC::ARE_STRINGS_EQUAL(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || MISC::ARE_STRINGS_EQUAL(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || MISC::ARE_STRINGS_EQUAL(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "hCC18F4SuU254v5vlgPRmA")) || MISC::ARE_STRINGS_EQUAL(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || MISC::ARE_STRINGS_EQUAL(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || MISC::ARE_STRINGS_EQUAL(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || MISC::ARE_STRINGS_EQUAL(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || MISC::ARE_STRINGS_EQUAL(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || MISC::ARE_STRINGS_EQUAL(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || MISC::ARE_STRINGS_EQUAL(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

void func_563(var uParam0)//Position - 0x227748
{
	var* uVar0;
	var* uVar1;
	int iVar2;
	var* uVar3[16];
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_ARRAY(uVar0, "list");
	uParam0->f_1864 = DATAFILE::DATAARRAY_GET_COUNT(uVar1);
	if (uParam0->f_1864 > 16)
	{
		uParam0->f_1864 = 15;
	}
	iVar2 = 0;
	while (iVar2 <= (uParam0->f_1864 - 1))
	{
		uVar3[iVar2] = DATAFILE::DATAARRAY_GET_DICT(uVar1, iVar2);
		StringCopy(uParam0[iVar2 /*16*/], DATAFILE::DATADICT_GET_STRING(uVar3[iVar2], "name"), 64);
		StringCopy(&(uParam0->f_513[iVar2 /*6*/]), DATAFILE::DATADICT_GET_STRING(uVar3[iVar2], "cid"), 24);
		iVar2++;
	}
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

void func_564()//Position - 0x2277EB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		StringCopy(&(Global_1053582[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1053582.f_257[iVar0 /*6*/]), "", 24);
		StringCopy(&(Global_1053582.f_354[iVar0 /*16*/]), "", 64);
		Global_1053582.f_884[iVar0] = 0;
		Global_1053582.f_901[iVar0] = 0;
		iVar0++;
	}
	Global_1053582.f_936 = 0;
	Global_1053582.f_935 = 0;
}

void func_565(var uParam0)//Position - 0x22785B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		StringCopy(uParam0[iVar0 /*16*/], "", 64);
		StringCopy(&(uParam0->f_257[iVar0 /*6*/]), "", 24);
		StringCopy(&(uParam0->f_354[iVar0 /*16*/]), "", 64);
		uParam0->f_884[iVar0] = 0;
		uParam0->f_901[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_936 = 0;
	uParam0->f_937 = 0;
	uParam0->f_938 = 0;
}

void func_566(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2278C3
{
	int iVar0;
	struct<88> Var1;
	if (bParam2)
	{
		*uParam0 = 0;
	}
	if (bParam1)
	{
		Var1.f_65 = -1;
		Var1.f_66 = -1;
		Var1.f_67 = 2;
		iVar0 = iParam3;
		while (iVar0 <= 30)
		{
			uParam0->f_33[iVar0 /*88*/] = { Var1 };
			iVar0++;
		}
	}
}

void func_567(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x227912
{
	int iVar0;
	struct<88> Var1;
	if (bParam3)
	{
		if (bParam1)
		{
			*uParam0 = 0;
			uParam0->f_3 = 0;
			uParam0->f_5527 = 0;
			uParam0->f_5528 = 0;
			uParam0->f_5529 = 0;
			uParam0->f_5525 = 0;
		}
		else
		{
			uParam0->f_4 = 0;
		}
	}
	if (bParam2)
	{
		Var1.f_65 = -1;
		Var1.f_66 = -1;
		Var1.f_67 = 2;
		if (bParam5)
		{
			iVar0 = iParam4;
			while (iVar0 <= 61)
			{
				uParam0->f_5[iVar0 /*88*/] = { Var1 };
				iVar0++;
			}
		}
		else if (bParam1)
		{
			iVar0 = iParam4;
			while (iVar0 <= 30)
			{
				uParam0->f_5[iVar0 /*88*/] = { Var1 };
				iVar0++;
			}
		}
		else
		{
			iVar0 = iParam4 + 31;
			while (iVar0 <= 61)
			{
				uParam0->f_5[iVar0 /*88*/] = { Var1 };
				iVar0++;
			}
		}
	}
}

void func_568(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2279E5
{
	int iVar0;
	struct<88> Var1;
	if (bParam2)
	{
		*uParam0 = 0;
		uParam0->f_1 = 0;
	}
	if (bParam1)
	{
		Var1.f_65 = -1;
		Var1.f_66 = -1;
		Var1.f_67 = 2;
		iVar0 = iParam3;
		while (iVar0 <= 99)
		{
			uParam0->f_604[iVar0 /*88*/] = { Var1 };
			iVar0++;
		}
	}
}

void func_569()//Position - 0x227AAD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 62)
	{
		Global_1031312.f_5462[iVar0] = -1;
		Global_1020252.f_5462[iVar0] = -1;
		iVar0++;
	}
}

struct<6> func_570(int iParam0)//Position - 0x2284DE
{
	return Global_1931618.f_16[iParam0 /*44*/].f_6;
}

int func_571(int iParam0)//Position - 0x22A050
{
	if (iParam0 > 50)
	{
		iParam0 = 0;
	}
	return Global_262145.f_4794[iParam0];
}

int func_572(int iParam0)//Position - 0x22A0D9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (Global_262145.f_6890[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_573(int iParam0)//Position - 0x22BFB1
{
	return BitTest(Global_1888862[iParam0 /*120*/].f_29, 12);
}

var func_574(int iParam0)//Position - 0x22CF53
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 2);
}

int func_575(int iParam0)//Position - 0x22ED92
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

var func_576(int iParam0)//Position - 0x22FAC7
{
	return Global_2686568[iParam0 /*41*/].f_38;
}

int func_577(bool bParam0)//Position - 0x257A38
{
	switch (__LIB_0__.func_3())
	{
		case 0:
			if (!__LIB_6__.func_172(bParam0))
			{
				if (Global_1853348[bParam0 /*834*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

var func_578()//Position - 0x264573
{
	return Global_4718592.f_116524;
}

void func_579(int iParam0)//Position - 0x264C29
{
	Global_1933908.f_2769 = iParam0;
}

void func_580(int iParam0)//Position - 0x277B77
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("Player_Zero"):
			break;
		case joaat("Player_One"):
			break;
		case joaat("Player_Two"):
			PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("singleplayer_overlays"), joaat("tp_001"));
			break;
	}
}

int func_581(int iParam0)//Position - 0x278009
{
	switch (iParam0)
	{
		case 1:
			return joaat("planroom");
		case 2:
			return joaat("mp_h_02_planroom");
		case 3:
			return joaat("mp_h_03_planroom");
		case 4:
			return joaat("mp_h_04_planroom");
		case 5:
			return joaat("mp_h_05_planroom");
		case 6:
			return joaat("mp_h_06_planroom");
		case 7:
			return joaat("mp_h_07_planroom");
		case 8:
			return joaat("mp_h_08_planroom");
		default:
	}
	return -1;
}

int func_582(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x27878E
{
	if (MISC::ARE_STRINGS_EQUAL(&uParam0, "APA_PRI_INT"))
	{
		return 1;
	}
	return 0;
}

int func_583(var uParam0)//Position - 0x27910B
{
	int iVar0;
	iVar0 = 1;
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_1) && !uParam0->f_407)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_584(int iParam0)//Position - 0x27A17A
{
	int iVar0;
	iVar0 = __LIB_0__.func_714(joaat("MPPLY_HEIST_ACH_TRACKER"));
	MISC::CLEAR_BIT(&iVar0, iParam0);
	__LIB_0__.func_779(joaat("MPPLY_HEIST_ACH_TRACKER"), iVar0);
}

void func_585(int iParam0)//Position - 0x27A1A0
{
	int iVar0;
	iVar0 = __LIB_0__.func_714(joaat("MPPLY_HEIST_ACH_TRACKER"));
	MISC::SET_BIT(&iVar0, iParam0);
	__LIB_0__.func_779(joaat("MPPLY_HEIST_ACH_TRACKER"), iVar0);
}

int func_586(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x27A57C
{
	if (MISC::ARE_STRINGS_EQUAL(&uParam0, ".") || MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return 0;
	}
	return 1;
}

struct<16> func_587(var* uParam0)//Position - 0x27B946
{
	struct<2> Var0;
	struct<16> Var1;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var0, 35, uParam0);
			return Var0.f_1;
		}
	}
	StringCopy(&Var1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_NONE" /* GXT: No Crew Membership */), 64);
	return Var1;
}

int func_588(var* uParam0)//Position - 0x27B98E
{
	var uVar0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar0, 35, uParam0);
			return uVar0;
		}
	}
	return -1;
}

var func_589()//Position - 0x27DBAD
{
	return Global_1931922;
}

int func_590(int iParam0, int iParam1)//Position - 0x2810E1
{
	if (!Global_262145.f_28303 /* Tunable: VC_ENABLE_KOTH */)
	{
		return 0;
	}
	if (iParam0 == 1 && (iParam1 == 3 || iParam1 == 4))
	{
		return 1;
	}
	return 0;
}

int func_591(int iParam0)//Position - 0x28ABF7
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 2;
			break;
		case 4:
			return 3;
			break;
		case 5:
			return 4;
			break;
		case 6:
			return 5;
			break;
		case 7:
			return 6;
			break;
		case 16:
			return 7;
			break;
		case 17:
			return 8;
			break;
		case 18:
			return 9;
			break;
		case 19:
			return 10;
			break;
		case 20:
			return 11;
			break;
		case 21:
			return 12;
			break;
		case 22:
			return 13;
			break;
		case 23:
			return 14;
			break;
		case 24:
			return 15;
			break;
		case 25:
			return 16;
			break;
		case 26:
			return 17;
			break;
		case 27:
			return 18;
			break;
		case 28:
			return 19;
			break;
		case 29:
			return 20;
			break;
		case 30:
			return 21;
			break;
		case 31:
			return 22;
			break;
		case 32:
			return 23;
			break;
		case 33:
			return 24;
			break;
		case 34:
			return 25;
			break;
		case 35:
			return 26;
			break;
		case 36:
			return 27;
			break;
		case 37:
			return 28;
			break;
		case 38:
			return 29;
			break;
		case 39:
			return 30;
			break;
		case 40:
			return 31;
			break;
		case 41:
			return 32;
			break;
		case 42:
			return 33;
			break;
		case 43:
			return 34;
			break;
		case 44:
			return 35;
			break;
		case 45:
			return 36;
			break;
		case 46:
			return 37;
			break;
		case 47:
			return 38;
			break;
		case 48:
			return 39;
			break;
		case 49:
			return 40;
			break;
		case 50:
			return 41;
			break;
		case 51:
			return 42;
			break;
		case 52:
			return 43;
			break;
		case 53:
			return 44;
			break;
		case 54:
			return 45;
			break;
		case 55:
			return 46;
			break;
		case 56:
			return 47;
			break;
		case 57:
			return 48;
			break;
		case 58:
			return 49;
			break;
		case 59:
			return 50;
			break;
		case 60:
			return 51;
			break;
		case 61:
			return 52;
			break;
		case 62:
			return 53;
			break;
		case 63:
			return 54;
			break;
		case 64:
			return 55;
			break;
		case 65:
			return 56;
			break;
		case 66:
			return 57;
			break;
		case 67:
			return 58;
			break;
		case 68:
			return 59;
			break;
		case 69:
			return 60;
			break;
		case 70:
			return 61;
			break;
		case 71:
			return 62;
			break;
		case 72:
			return 63;
			break;
		case 73:
			return 64;
			break;
		case 74:
			return 65;
			break;
		case 75:
			return 66;
			break;
		case 76:
			return 67;
			break;
		case 77:
			return 68;
			break;
		case 78:
			return 69;
			break;
		case 79:
			return 70;
			break;
		case 80:
			return 71;
			break;
		case 81:
			return 72;
			break;
		case 82:
			return 73;
			break;
		case 83:
			return 74;
			break;
		case 84:
			return 75;
			break;
		case 85:
			return 76;
			break;
		case 86:
			return 77;
			break;
		case 87:
			return 78;
			break;
		case 88:
			return 79;
			break;
		case 89:
			return 80;
			break;
		case 90:
			return 81;
			break;
		case 91:
			return 82;
			break;
		case 92:
			return 83;
			break;
		case 93:
			return 84;
			break;
		case 94:
			return 85;
			break;
		case 95:
			return 86;
			break;
		case 96:
			return 87;
			break;
		case 97:
			return 88;
			break;
		case 98:
			return 89;
			break;
		case 99:
			return 90;
			break;
		case 100:
			return 91;
			break;
		case 101:
			return 92;
			break;
		case 102:
			return 93;
			break;
		case 103:
			return 94;
			break;
		case 104:
			return 95;
			break;
		case 105:
			return 96;
			break;
		case 106:
			return 97;
			break;
		case 107:
			return 98;
			break;
		case 108:
			return 99;
			break;
		case 109:
			return 100;
			break;
		case 110:
			return 101;
			break;
		case 111:
			return 102;
			break;
		case 112:
			return 103;
			break;
		case 113:
			return 104;
			break;
		case 114:
			return 105;
			break;
		case 115:
			return 106;
			break;
		case 116:
			return 107;
			break;
		case 117:
			return 108;
			break;
		case 118:
			return 109;
			break;
		case 119:
			return 110;
			break;
		case 120:
			return 111;
			break;
		case 121:
			return 112;
			break;
		case 122:
			return 113;
			break;
		case 123:
			return 114;
			break;
		case 124:
			return 115;
			break;
		case 125:
			return 116;
			break;
		case 126:
			return 117;
			break;
		case 127:
			return 118;
			break;
		case 128:
			return 119;
			break;
		case 129:
			return 120;
			break;
		case 130:
			return 121;
			break;
		case 131:
			return 122;
			break;
		case 132:
			return 123;
			break;
		case 133:
			return 124;
			break;
		case 134:
			return 125;
			break;
		case 135:
			return 126;
			break;
		case 136:
			return 127;
			break;
		case 137:
			return 128;
			break;
		case 138:
			return 129;
			break;
		case 139:
			return 130;
			break;
		case 140:
			return 131;
			break;
		case 141:
			return 132;
			break;
		case 142:
			return 133;
			break;
		case 143:
			return 134;
			break;
		case 144:
			return 135;
			break;
		case 145:
			return 136;
			break;
		case 146:
			return 137;
			break;
		case 147:
			return 138;
			break;
		case 148:
			return 139;
			break;
		case 149:
			return 140;
			break;
		case 150:
			return 141;
			break;
		case 151:
			return 142;
			break;
		case 152:
			return 143;
			break;
		case 153:
			return 144;
			break;
		case 154:
			return 145;
			break;
		case 155:
			return 146;
			break;
		case 156:
			return 147;
			break;
		case 157:
			return 148;
			break;
		case 158:
			return 149;
			break;
		case 159:
			return 150;
			break;
		case 160:
			return 151;
			break;
		case 8:
			return 152;
			break;
		case 9:
			return 153;
			break;
		case 10:
			return 154;
			break;
		case 11:
			return 155;
			break;
		case 12:
			return 156;
			break;
		case 13:
			return 157;
			break;
		case 14:
			return 158;
			break;
		case 15:
			return 159;
			break;
		case 161:
			return 172;
			break;
		case 162:
			return 173;
			break;
		case 163:
			return 174;
			break;
		case 164:
			return 175;
			break;
		case 165:
			return 176;
			break;
		case 166:
			return 177;
			break;
		case 179:
			return 166;
			break;
		case 180:
			return 167;
			break;
		case 181:
			return 168;
			break;
		case 182:
			return 169;
			break;
		case 183:
			return 170;
			break;
		case 184:
			return 171;
			break;
		case 173:
			return 160;
			break;
		case 174:
			return 161;
			break;
		case 175:
			return 162;
			break;
		case 176:
			return 163;
			break;
		case 177:
			return 164;
			break;
		case 178:
			return 165;
			break;
		case 192:
			return 185;
			break;
		case 193:
			return 186;
			break;
		case 194:
			return 187;
			break;
		case 216:
			return 188;
			break;
	}
	switch (iParam0)
	{
		case 195:
			return 196;
			break;
		case 196:
			return 197;
			break;
		case 197:
			return 198;
			break;
		case 198:
			return 199;
			break;
		case 199:
			return 200;
			break;
		case 200:
			return 201;
			break;
		case 201:
			return 202;
			break;
		case 202:
			return 189;
			break;
		case 203:
			return 190;
			break;
		case 204:
			return 191;
			break;
		case 205:
			return 192;
			break;
		case 206:
			return 193;
			break;
		case 207:
			return 194;
			break;
		case 208:
			return 195;
			break;
		case 209:
			return 217;
			break;
		case 210:
			return 218;
			break;
		case 211:
			return 219;
			break;
		case 212:
			return 220;
			break;
		case 213:
			return 221;
			break;
		case 214:
			return 222;
			break;
		case 215:
			return 223;
			break;
		case 224:
			return 210;
			break;
		case 225:
			return 211;
			break;
		case 226:
			return 212;
			break;
		case 227:
			return 213;
			break;
		case 228:
			return 214;
			break;
		case 229:
			return 215;
			break;
		case 230:
			return 216;
			break;
		case 217:
			return 203;
			break;
		case 218:
			return 204;
			break;
		case 219:
			return 205;
			break;
		case 220:
			return 206;
			break;
		case 221:
			return 207;
			break;
		case 222:
			return 208;
			break;
		case 223:
			return 209;
			break;
		case 232:
			return 231;
			break;
		case 233:
			return 232;
			break;
		case 234:
			return 233;
			break;
		case 235:
			return 234;
			break;
		case 236:
			return 235;
			break;
		case 237:
			return 236;
			break;
		case 231:
			return 237;
			break;
		case 238:
			return 245;
			break;
		case 239:
			return 246;
			break;
		case 240:
			return 247;
			break;
		case 241:
			return 248;
			break;
		case 242:
			return 249;
			break;
		case 243:
			return 250;
			break;
		case 244:
			return 251;
			break;
		case 245:
			return 252;
			break;
		case 246:
			return 253;
			break;
		case 247:
			return 254;
			break;
		case 248:
			return 224;
			break;
		case 249:
			return 225;
			break;
		case 250:
			return 226;
			break;
		case 251:
			return 227;
			break;
		case 252:
			return 228;
			break;
		case 253:
			return 229;
			break;
		case 254:
			return 230;
			break;
		case 255:
			return 255;
			break;
		case 256:
			return 256;
			break;
		case 257:
			return 257;
			break;
		case 258:
			return 258;
			break;
		case 259:
			return 259;
			break;
		case 260:
			return 260;
			break;
		case 261:
			return 261;
			break;
		case 262:
			return 262;
			break;
		case 263:
			return 263;
			break;
		case 264:
			return 264;
			break;
		case 265:
			return 265;
			break;
	}
	switch (iParam0)
	{
		case 267:
			return 238;
			break;
		case 268:
			return 239;
			break;
		case 269:
			return 240;
			break;
		case 270:
			return 241;
			break;
		case 271:
			return 242;
			break;
		case 272:
			return 243;
			break;
		case 266:
			return 244;
			break;
		case 274:
			return 266;
			break;
		case 275:
			return 267;
			break;
		case 276:
			return 268;
			break;
		case 277:
			return 269;
			break;
		case 278:
			return 270;
			break;
		case 279:
			return 271;
			break;
		case 273:
			return 272;
			break;
		case 281:
			return 273;
			break;
		case 282:
			return 274;
			break;
		case 283:
			return 275;
			break;
		case 284:
			return 276;
			break;
		case 285:
			return 277;
			break;
		case 286:
			return 278;
			break;
		case 280:
			return 279;
			break;
		case 287:
			return 280;
			break;
		case 288:
			return 281;
			break;
		case 289:
			return 282;
			break;
		case 290:
			return 283;
			break;
		case 291:
			return 284;
			break;
		case 292:
			return 285;
			break;
		case 293:
			return 286;
			break;
		case 294:
			return 287;
			break;
		case 295:
			return 288;
			break;
		case 296:
			return 289;
			break;
		case 297:
			return 290;
			break;
		case 298:
			return 291;
			break;
		case 299:
			return 292;
			break;
		case 300:
			return 293;
			break;
		case 301:
			return 294;
			break;
		case 302:
			return 295;
			break;
		case 303:
			return 296;
			break;
		case 304:
			return 297;
			break;
		case 305:
			return 298;
			break;
		case 306:
			return 299;
			break;
		case 307:
			return 300;
			break;
		case 308:
			return 301;
			break;
		case 309:
			return 302;
			break;
		case 310:
			return 303;
			break;
		case 311:
			return 304;
			break;
		case 312:
			return 305;
			break;
		case 313:
			return 306;
			break;
		case 314:
			return 307;
			break;
		case 315:
			return 308;
			break;
		case 316:
			return 309;
			break;
		case 317:
			return 310;
			break;
		case 318:
			return 311;
			break;
		case 319:
			return 312;
			break;
		case 320:
			return 313;
			break;
		case 321:
			return 314;
			break;
		case 322:
			return 315;
			break;
		case 323:
			return 316;
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 338;
			break;
		case 346:
			return 339;
			break;
		case 347:
			return 340;
			break;
		case 348:
			return 341;
			break;
		case 349:
			return 342;
			break;
		case 350:
			return 343;
			break;
		case 351:
			return 344;
			break;
		case 352:
			return 345;
			break;
		case 353:
			return 346;
			break;
		case 354:
			return 347;
			break;
		case 355:
			return 348;
			break;
		case 356:
			return 349;
			break;
		case 357:
			return 350;
			break;
		case 358:
			return 351;
			break;
		case 359:
			return 352;
			break;
		case 360:
			return 353;
			break;
		case 361:
			return 354;
			break;
		case 362:
			return 355;
			break;
		case 363:
			return 356;
			break;
		case 364:
			return 357;
			break;
	}
	switch (iParam0)
	{
		case 325:
			return 317;
			break;
		case 326:
			return 318;
			break;
		case 327:
			return 319;
			break;
		case 328:
			return 320;
			break;
		case 329:
			return 321;
			break;
		case 330:
			return 322;
			break;
		case 324:
			return 323;
			break;
		case 332:
			return 324;
			break;
		case 333:
			return 325;
			break;
		case 334:
			return 326;
			break;
		case 335:
			return 327;
			break;
		case 336:
			return 328;
			break;
		case 337:
			return 329;
			break;
		case 331:
			return 330;
			break;
		case 366:
			return 370;
			break;
		case 367:
			return 371;
			break;
		case 368:
			return 372;
			break;
		case 369:
			return 373;
			break;
		case 370:
			return 374;
			break;
		case 371:
			return 375;
			break;
		case 365:
			return 376;
			break;
		case 338:
			return 358;
			break;
		case 339:
			return 359;
			break;
		case 340:
			return 360;
			break;
		case 341:
			return 361;
			break;
		case 342:
			return 362;
			break;
		case 343:
			return 363;
			break;
		case 344:
			return 364;
			break;
		case 372:
			return 365;
			break;
		case 373:
			return 366;
			break;
		case 374:
			return 367;
			break;
		case 375:
			return 368;
			break;
		case 376:
			return 369;
			break;
		case 1184:
			return 1184;
			break;
		case 1185:
			return 1185;
			break;
		case 377:
			return 383;
			break;
		case 378:
			return 377;
			break;
		case 379:
			return 378;
			break;
		case 380:
			return 379;
			break;
		case 381:
			return 380;
			break;
		case 382:
			return 381;
			break;
		case 383:
			return 382;
			break;
		case 384:
			return 384;
			break;
		case 385:
			return 385;
			break;
		case 386:
			return 386;
			break;
		case 387:
			return 387;
			break;
		case 388:
			return 388;
			break;
		case 389:
			return 389;
			break;
		case 390:
			return 390;
			break;
		case 391:
			return 405;
			break;
		case 392:
			return 406;
			break;
		case 393:
			return 407;
			break;
		case 394:
			return 408;
			break;
		case 395:
			return 409;
			break;
		case 396:
			return 410;
			break;
		case 397:
			return 397;
			break;
		case 405:
			return 391;
			break;
		case 406:
			return 392;
			break;
		case 407:
			return 393;
			break;
		case 408:
			return 394;
			break;
		case 409:
			return 395;
			break;
		case 410:
			return 396;
			break;
		case 411:
			return 397;
			break;
		case 398:
			return 398;
			break;
		case 399:
			return 399;
			break;
		case 400:
			return 400;
			break;
		case 401:
			return 401;
			break;
		case 402:
			return 402;
			break;
		case 403:
			return 403;
			break;
		case 404:
			return 404;
			break;
		case 412:
			return 412;
			break;
		case 413:
			return 413;
			break;
		case 414:
			return 414;
			break;
		case 415:
			return 415;
			break;
		case 416:
			return 416;
			break;
		case 417:
			return 417;
			break;
		case 418:
			return 418;
			break;
		case 419:
			return 419;
			break;
		case 420:
			return 420;
			break;
		case 421:
			return 421;
			break;
		case 422:
			return 422;
			break;
		case 423:
			return 423;
			break;
		case 424:
			return 424;
			break;
		case 425:
			return 425;
			break;
		case 426:
			return 433;
			break;
		case 427:
			return 434;
			break;
		case 428:
			return 435;
			break;
		case 429:
			return 436;
			break;
		case 430:
			return 437;
			break;
		case 431:
			return 438;
			break;
		case 432:
			return 439;
			break;
		case 433:
			return 426;
			break;
		case 434:
			return 427;
			break;
		case 435:
			return 428;
			break;
		case 436:
			return 429;
			break;
		case 437:
			return 430;
			break;
		case 438:
			return 431;
			break;
		case 439:
			return 432;
			break;
	}
	switch (iParam0)
	{
		case 440:
			return 440;
			break;
		case 441:
			return 441;
			break;
		case 442:
			return 442;
			break;
		case 443:
			return 443;
			break;
		case 444:
			return 444;
			break;
		case 445:
			return 445;
			break;
		case 446:
			return 446;
			break;
		case 447:
			return 447;
			break;
		case 448:
			return 448;
			break;
		case 449:
			return 449;
			break;
		case 450:
			return 450;
			break;
		case 451:
			return 451;
			break;
		case 452:
			return 452;
			break;
		case 453:
			return 453;
			break;
		case 454:
			return 454;
			break;
		case 455:
			return 455;
			break;
		case 456:
			return 456;
			break;
		case 457:
			return 457;
			break;
		case 458:
			return 458;
			break;
		case 459:
			return 459;
			break;
		case 460:
			return 460;
			break;
		case 461:
			return 461;
			break;
		case 462:
			return 462;
			break;
		case 463:
			return 463;
			break;
		case 464:
			return 464;
			break;
		case 465:
			return 465;
			break;
		case 466:
			return 466;
			break;
		case 467:
			return 467;
			break;
		case 468:
			return 468;
			break;
		case 469:
			return 469;
			break;
		case 470:
			return 470;
			break;
	}
	switch (iParam0)
	{
		case 471:
			return 471;
			break;
		case 472:
			return 472;
			break;
		case 473:
			return 473;
			break;
		case 474:
			return 474;
			break;
		case 475:
			return 475;
			break;
		case 476:
			return 476;
			break;
		case 477:
			return 477;
			break;
		case 478:
			return 478;
			break;
		case 479:
			return 479;
			break;
		case 480:
			return 480;
			break;
		case 481:
			return 481;
			break;
		case 482:
			return 482;
			break;
		case 483:
			return 483;
			break;
		case 484:
			return 484;
			break;
		case 485:
			return 485;
			break;
		case 486:
			return 486;
			break;
		case 487:
			return 487;
			break;
		case 488:
			return 488;
			break;
		case 489:
			return 489;
			break;
		case 490:
			return 490;
			break;
		case 491:
			return 491;
			break;
		case 492:
			return 492;
			break;
		case 493:
			return 493;
			break;
		case 494:
			return 494;
			break;
		case 495:
			return 495;
			break;
		case 496:
			return 496;
			break;
		case 497:
			return 497;
			break;
		case 498:
			return 498;
			break;
		case 499:
			return 499;
			break;
		case 500:
			return 500;
			break;
		case 501:
			return 501;
			break;
	}
	switch (iParam0)
	{
		case 502:
			return 502;
			break;
		case 503:
			return 503;
			break;
		case 504:
			return 504;
			break;
		case 505:
			return 505;
			break;
		case 506:
			return 506;
			break;
		case 507:
			return 507;
			break;
		case 508:
			return 508;
			break;
		case 509:
			return 509;
			break;
		case 510:
			return 510;
			break;
		case 511:
			return 511;
			break;
		case 512:
			return 512;
			break;
		case 513:
			return 513;
			break;
		case 514:
			return 514;
			break;
		case 515:
			return 515;
			break;
		case 516:
			return 516;
			break;
		case 517:
			return 517;
			break;
		case 518:
			return 518;
			break;
		case 519:
			return 519;
			break;
		case 520:
			return 520;
			break;
		case 521:
			return 521;
			break;
		case 522:
			return 522;
			break;
		case 523:
			return 523;
			break;
		case 524:
			return 524;
			break;
		case 525:
			return 525;
			break;
		case 526:
			return 526;
			break;
		case 527:
			return 527;
			break;
		case 528:
			return 528;
			break;
		case 529:
			return 529;
			break;
		case 530:
			return 530;
			break;
		case 531:
			return 531;
			break;
		case 532:
			return 532;
			break;
	}
	switch (iParam0)
	{
		case 533:
			return 533;
			break;
		case 534:
			return 534;
			break;
		case 535:
			return 535;
			break;
		case 536:
			return 536;
			break;
		case 537:
			return 537;
			break;
		case 538:
			return 538;
			break;
		case 539:
			return 539;
			break;
		case 540:
			return 540;
			break;
		case 541:
			return 541;
			break;
		case 542:
			return 542;
			break;
		case 543:
			return 543;
			break;
		case 544:
			return 544;
			break;
		case 545:
			return 545;
			break;
		case 546:
			return 546;
			break;
		case 547:
			return 547;
			break;
		case 548:
			return 548;
			break;
		case 549:
			return 549;
			break;
		case 550:
			return 550;
			break;
		case 551:
			return 551;
			break;
		case 552:
			return 552;
			break;
		case 553:
			return 553;
			break;
		case 554:
			return 554;
			break;
		case 555:
			return 555;
			break;
		case 556:
			return 556;
			break;
		case 557:
			return 557;
			break;
		case 558:
			return 558;
			break;
		case 559:
			return 559;
			break;
		case 560:
			return 560;
			break;
		case 561:
			return 561;
			break;
		case 562:
			return 562;
			break;
		case 563:
			return 563;
			break;
	}
	switch (iParam0)
	{
		case 564:
			return 564;
			break;
		case 565:
			return 565;
			break;
		case 566:
			return 566;
			break;
		case 567:
			return 567;
			break;
		case 568:
			return 568;
			break;
		case 569:
			return 569;
			break;
		case 570:
			return 570;
			break;
		case 571:
			return 571;
			break;
		case 572:
			return 572;
			break;
		case 573:
			return 573;
			break;
		case 574:
			return 574;
			break;
		case 575:
			return 575;
			break;
		case 576:
			return 576;
			break;
		case 577:
			return 577;
			break;
		case 578:
			return 578;
			break;
		case 579:
			return 579;
			break;
		case 580:
			return 580;
			break;
		case 581:
			return 581;
			break;
		case 582:
			return 582;
			break;
		case 583:
			return 583;
			break;
		case 584:
			return 584;
			break;
		case 585:
			return 585;
			break;
		case 586:
			return 586;
			break;
		case 587:
			return 587;
			break;
		case 588:
			return 588;
			break;
		case 589:
			return 589;
			break;
		case 590:
			return 590;
			break;
		case 591:
			return 591;
			break;
		case 592:
			return 592;
			break;
		case 593:
			return 593;
			break;
		case 594:
			return 594;
			break;
		case 595:
			return 595;
			break;
		case 596:
			return 596;
			break;
		case 597:
			return 597;
			break;
		case 598:
			return 598;
			break;
		case 599:
			return 599;
			break;
		case 600:
			return 600;
			break;
		case 601:
			return 601;
			break;
		case 602:
			return 602;
			break;
		case 603:
			return 603;
			break;
		case 604:
			return 604;
			break;
		case 605:
			return 605;
			break;
		case 606:
			return 606;
			break;
		case 607:
			return 607;
			break;
		case 608:
			return 608;
			break;
		case 609:
			return 609;
			break;
		case 610:
			return 610;
			break;
		case 611:
			return 611;
			break;
		case 612:
			return 612;
			break;
		case 613:
			return 613;
			break;
		case 614:
			return 614;
			break;
		case 615:
			return 615;
			break;
		case 616:
			return 616;
			break;
		case 617:
			return 617;
			break;
		case 618:
			return 618;
			break;
		case 619:
			return 619;
			break;
		case 620:
			return 620;
			break;
		case 621:
			return 621;
			break;
		case 622:
			return 622;
			break;
		case 623:
			return 623;
			break;
		case 624:
			return 624;
			break;
		case 625:
			return 625;
			break;
	}
	switch (iParam0)
	{
		case 626:
			return 626;
			break;
		case 627:
			return 627;
			break;
		case 628:
			return 628;
			break;
		case 629:
			return 629;
			break;
		case 630:
			return 630;
			break;
		case 631:
			return 631;
			break;
		case 632:
			return 632;
			break;
		case 633:
			return 633;
			break;
		case 634:
			return 634;
			break;
		case 635:
			return 635;
			break;
		case 636:
			return 636;
			break;
		case 637:
			return 637;
			break;
		case 638:
			return 638;
			break;
		case 639:
			return 639;
			break;
		case 640:
			return 640;
			break;
		case 641:
			return 641;
			break;
		case 642:
			return 642;
			break;
		case 643:
			return 643;
			break;
		case 644:
			return 644;
			break;
		case 645:
			return 645;
			break;
		case 646:
			return 646;
			break;
		case 647:
			return 647;
			break;
		case 648:
			return 648;
			break;
		case 649:
			return 649;
			break;
		case 650:
			return 650;
			break;
		case 651:
			return 651;
			break;
		case 652:
			return 652;
			break;
		case 653:
			return 653;
			break;
		case 654:
			return 654;
			break;
		case 655:
			return 655;
			break;
		case 656:
			return 656;
			break;
	}
	switch (iParam0)
	{
		case 657:
			return 657;
			break;
		case 658:
			return 658;
			break;
		case 659:
			return 659;
			break;
		case 660:
			return 660;
			break;
		case 661:
			return 661;
			break;
		case 662:
			return 662;
			break;
		case 663:
			return 663;
			break;
		case 664:
			return 664;
			break;
		case 665:
			return 665;
			break;
		case 666:
			return 666;
			break;
		case 667:
			return 667;
			break;
		case 668:
			return 668;
			break;
		case 669:
			return 669;
			break;
		case 670:
			return 670;
			break;
		case 671:
			return 671;
			break;
		case 672:
			return 672;
			break;
		case 673:
			return 673;
			break;
		case 674:
			return 674;
			break;
		case 675:
			return 675;
			break;
		case 676:
			return 676;
			break;
		case 677:
			return 677;
			break;
		case 678:
			return 678;
			break;
		case 679:
			return 679;
			break;
		case 680:
			return 680;
			break;
		case 681:
			return 681;
			break;
		case 682:
			return 682;
			break;
		case 683:
			return 683;
			break;
		case 684:
			return 684;
			break;
		case 685:
			return 685;
			break;
		case 686:
			return 686;
			break;
		case 687:
			return 687;
			break;
	}
	switch (iParam0)
	{
		case 688:
			return 688;
			break;
		case 689:
			return 689;
			break;
		case 690:
			return 690;
			break;
		case 691:
			return 691;
			break;
		case 692:
			return 692;
			break;
		case 693:
			return 693;
			break;
		case 694:
			return 694;
			break;
		case 695:
			return 695;
			break;
		case 696:
			return 696;
			break;
		case 697:
			return 697;
			break;
		case 698:
			return 698;
			break;
		case 699:
			return 699;
			break;
		case 700:
			return 700;
			break;
		case 701:
			return 701;
			break;
		case 702:
			return 702;
			break;
		case 703:
			return 703;
			break;
		case 704:
			return 704;
			break;
		case 705:
			return 705;
			break;
		case 706:
			return 706;
			break;
		case 707:
			return 707;
			break;
		case 708:
			return 708;
			break;
		case 709:
			return 709;
			break;
		case 710:
			return 710;
			break;
		case 711:
			return 711;
			break;
		case 712:
			return 712;
			break;
		case 713:
			return 713;
			break;
		case 714:
			return 714;
			break;
		case 715:
			return 715;
			break;
		case 716:
			return 716;
			break;
		case 717:
			return 717;
			break;
		case 718:
			return 718;
			break;
	}
	switch (iParam0)
	{
		case 719:
			return 719;
			break;
		case 720:
			return 720;
			break;
		case 721:
			return 721;
			break;
		case 722:
			return 722;
			break;
		case 723:
			return 723;
			break;
		case 724:
			return 724;
			break;
		case 725:
			return 725;
			break;
		case 726:
			return 726;
			break;
		case 727:
			return 727;
			break;
		case 728:
			return 728;
			break;
		case 729:
			return 729;
			break;
		case 730:
			return 730;
			break;
		case 731:
			return 731;
			break;
		case 732:
			return 732;
			break;
		case 733:
			return 733;
			break;
		case 734:
			return 734;
			break;
		case 735:
			return 735;
			break;
		case 736:
			return 736;
			break;
		case 737:
			return 737;
			break;
		case 738:
			return 738;
			break;
		case 739:
			return 739;
			break;
		case 740:
			return 740;
			break;
		case 741:
			return 741;
			break;
		case 742:
			return 742;
			break;
		case 743:
			return 743;
			break;
		case 744:
			return 744;
			break;
		case 745:
			return 745;
			break;
		case 746:
			return 746;
			break;
		case 747:
			return 747;
			break;
		case 748:
			return 748;
			break;
		case 749:
			return 749;
			break;
	}
	switch (iParam0)
	{
		case 750:
			return 750;
			break;
		case 751:
			return 751;
			break;
		case 752:
			return 752;
			break;
		case 753:
			return 753;
			break;
		case 754:
			return 754;
			break;
		case 755:
			return 755;
			break;
		case 756:
			return 756;
			break;
		case 757:
			return 757;
			break;
		case 758:
			return 758;
			break;
		case 759:
			return 759;
			break;
		case 760:
			return 760;
			break;
		case 761:
			return 761;
			break;
		case 762:
			return 762;
			break;
		case 763:
			return 763;
			break;
		case 764:
			return 764;
			break;
		case 765:
			return 765;
			break;
		case 766:
			return 766;
			break;
		case 767:
			return 767;
			break;
		case 768:
			return 768;
			break;
		case 769:
			return 769;
			break;
		case 770:
			return 770;
			break;
		case 771:
			return 771;
			break;
		case 772:
			return 772;
			break;
		case 773:
			return 773;
			break;
		case 774:
			return 774;
			break;
		case 775:
			return 775;
			break;
		case 776:
			return 776;
			break;
		case 777:
			return 777;
			break;
		case 778:
			return 778;
			break;
		case 779:
			return 779;
			break;
		case 780:
			return 780;
			break;
	}
	switch (iParam0)
	{
		case 781:
			return 781;
			break;
		case 782:
			return 782;
			break;
		case 783:
			return 783;
			break;
		case 784:
			return 784;
			break;
		case 785:
			return 785;
			break;
		case 786:
			return 786;
			break;
		case 787:
			return 787;
			break;
		case 788:
			return 788;
			break;
		case 789:
			return 789;
			break;
		case 790:
			return 790;
			break;
		case 791:
			return 791;
			break;
		case 792:
			return 792;
			break;
		case 793:
			return 793;
			break;
		case 794:
			return 794;
			break;
		case 795:
			return 795;
			break;
		case 796:
			return 796;
			break;
		case 797:
			return 797;
			break;
		case 798:
			return 798;
			break;
		case 799:
			return 799;
			break;
		case 800:
			return 800;
			break;
		case 801:
			return 801;
			break;
		case 802:
			return 802;
			break;
		case 803:
			return 803;
			break;
		case 804:
			return 804;
			break;
		case 805:
			return 805;
			break;
		case 806:
			return 806;
			break;
		case 807:
			return 807;
			break;
		case 808:
			return 808;
			break;
		case 809:
			return 809;
			break;
		case 810:
			return 810;
			break;
		case 811:
			return 811;
			break;
	}
	switch (iParam0)
	{
		case 812:
			return 874;
			break;
		case 813:
			return 875;
			break;
		case 814:
			return 876;
			break;
		case 815:
			return 877;
			break;
		case 816:
			return 878;
			break;
		case 817:
			return 879;
			break;
		case 818:
			return 880;
			break;
		case 819:
			return 881;
			break;
		case 820:
			return 882;
			break;
		case 821:
			return 883;
			break;
		case 822:
			return 884;
			break;
		case 823:
			return 885;
			break;
		case 824:
			return 886;
			break;
		case 825:
			return 887;
			break;
		case 826:
			return 888;
			break;
		case 827:
			return 889;
			break;
		case 828:
			return 890;
			break;
		case 829:
			return 891;
			break;
		case 830:
			return 892;
			break;
		case 831:
			return 893;
			break;
		case 832:
			return 894;
			break;
		case 833:
			return 895;
			break;
		case 834:
			return 896;
			break;
		case 835:
			return 897;
			break;
		case 836:
			return 898;
			break;
		case 837:
			return 899;
			break;
		case 838:
			return 900;
			break;
		case 839:
			return 901;
			break;
		case 840:
			return 902;
			break;
		case 841:
			return 903;
			break;
		case 842:
			return 904;
			break;
	}
	switch (iParam0)
	{
		case 843:
			return 967;
			break;
		case 844:
			return 968;
			break;
		case 845:
			return 969;
			break;
		case 846:
			return 970;
			break;
		case 847:
			return 971;
			break;
		case 848:
			return 972;
			break;
		case 849:
			return 973;
			break;
		case 850:
			return 974;
			break;
		case 851:
			return 975;
			break;
		case 852:
			return 976;
			break;
		case 853:
			return 977;
			break;
		case 854:
			return 978;
			break;
		case 855:
			return 979;
			break;
		case 856:
			return 980;
			break;
		case 857:
			return 981;
			break;
		case 858:
			return 982;
			break;
		case 859:
			return 983;
			break;
		case 860:
			return 984;
			break;
		case 861:
			return 985;
			break;
		case 862:
			return 986;
			break;
		case 863:
			return 987;
			break;
		case 864:
			return 988;
			break;
		case 865:
			return 989;
			break;
		case 866:
			return 990;
			break;
		case 867:
			return 991;
			break;
		case 868:
			return 992;
			break;
		case 869:
			return 993;
			break;
		case 870:
			return 994;
			break;
		case 871:
			return 995;
			break;
		case 872:
			return 996;
			break;
		case 873:
			return 997;
			break;
	}
	switch (iParam0)
	{
		case 874:
			return 936;
			break;
		case 875:
			return 937;
			break;
		case 876:
			return 938;
			break;
		case 877:
			return 939;
			break;
		case 878:
			return 940;
			break;
		case 879:
			return 941;
			break;
		case 880:
			return 942;
			break;
		case 881:
			return 943;
			break;
		case 882:
			return 944;
			break;
		case 883:
			return 945;
			break;
		case 884:
			return 946;
			break;
		case 885:
			return 947;
			break;
		case 886:
			return 948;
			break;
		case 887:
			return 949;
			break;
		case 888:
			return 950;
			break;
		case 889:
			return 951;
			break;
		case 890:
			return 952;
			break;
		case 891:
			return 953;
			break;
		case 892:
			return 954;
			break;
		case 893:
			return 955;
			break;
		case 894:
			return 956;
			break;
		case 895:
			return 957;
			break;
		case 896:
			return 958;
			break;
		case 897:
			return 959;
			break;
		case 898:
			return 960;
			break;
		case 899:
			return 961;
			break;
		case 900:
			return 962;
			break;
		case 901:
			return 963;
			break;
		case 902:
			return 964;
			break;
		case 903:
			return 965;
			break;
		case 904:
			return 966;
			break;
	}
	switch (iParam0)
	{
		case 905:
			return 843;
			break;
		case 906:
			return 844;
			break;
		case 907:
			return 845;
			break;
		case 908:
			return 846;
			break;
		case 909:
			return 847;
			break;
		case 910:
			return 848;
			break;
		case 911:
			return 849;
			break;
		case 912:
			return 850;
			break;
		case 913:
			return 851;
			break;
		case 914:
			return 852;
			break;
		case 915:
			return 853;
			break;
		case 916:
			return 854;
			break;
		case 917:
			return 855;
			break;
		case 918:
			return 856;
			break;
		case 919:
			return 857;
			break;
		case 920:
			return 858;
			break;
		case 921:
			return 859;
			break;
		case 922:
			return 860;
			break;
		case 923:
			return 861;
			break;
		case 924:
			return 862;
			break;
		case 925:
			return 863;
			break;
		case 926:
			return 864;
			break;
		case 927:
			return 865;
			break;
		case 928:
			return 866;
			break;
		case 929:
			return 867;
			break;
		case 930:
			return 868;
			break;
		case 931:
			return 869;
			break;
		case 932:
			return 870;
			break;
		case 933:
			return 871;
			break;
		case 934:
			return 872;
			break;
		case 935:
			return 873;
			break;
	}
	switch (iParam0)
	{
		case 936:
			return 905;
			break;
		case 937:
			return 906;
			break;
		case 938:
			return 907;
			break;
		case 939:
			return 908;
			break;
		case 940:
			return 909;
			break;
		case 941:
			return 910;
			break;
		case 942:
			return 911;
			break;
		case 943:
			return 912;
			break;
		case 944:
			return 913;
			break;
		case 945:
			return 914;
			break;
		case 946:
			return 915;
			break;
		case 947:
			return 916;
			break;
		case 948:
			return 917;
			break;
		case 949:
			return 918;
			break;
		case 950:
			return 919;
			break;
		case 951:
			return 920;
			break;
		case 952:
			return 921;
			break;
		case 953:
			return 922;
			break;
		case 954:
			return 923;
			break;
		case 955:
			return 924;
			break;
		case 956:
			return 925;
			break;
		case 957:
			return 926;
			break;
		case 958:
			return 927;
			break;
		case 959:
			return 928;
			break;
		case 960:
			return 929;
			break;
		case 961:
			return 930;
			break;
		case 962:
			return 931;
			break;
		case 963:
			return 932;
			break;
		case 964:
			return 933;
			break;
		case 965:
			return 934;
			break;
		case 966:
			return 935;
			break;
	}
	switch (iParam0)
	{
		case 967:
			return 812;
			break;
		case 968:
			return 813;
			break;
		case 969:
			return 814;
			break;
		case 970:
			return 815;
			break;
		case 971:
			return 816;
			break;
		case 972:
			return 817;
			break;
		case 973:
			return 818;
			break;
		case 974:
			return 819;
			break;
		case 975:
			return 820;
			break;
		case 976:
			return 821;
			break;
		case 977:
			return 822;
			break;
		case 978:
			return 823;
			break;
		case 979:
			return 824;
			break;
		case 980:
			return 825;
			break;
		case 981:
			return 826;
			break;
		case 982:
			return 827;
			break;
		case 983:
			return 828;
			break;
		case 984:
			return 829;
			break;
		case 985:
			return 830;
			break;
		case 986:
			return 831;
			break;
		case 987:
			return 832;
			break;
		case 988:
			return 833;
			break;
		case 989:
			return 834;
			break;
		case 990:
			return 835;
			break;
		case 991:
			return 836;
			break;
		case 992:
			return 837;
			break;
		case 993:
			return 838;
			break;
		case 994:
			return 839;
			break;
		case 995:
			return 840;
			break;
		case 996:
			return 841;
			break;
		case 997:
			return 842;
			break;
	}
	switch (iParam0)
	{
		case 998:
			return 1060;
			break;
		case 999:
			return 1061;
			break;
		case 1000:
			return 1062;
			break;
		case 1001:
			return 1063;
			break;
		case 1002:
			return 1064;
			break;
		case 1003:
			return 1065;
			break;
		case 1004:
			return 1066;
			break;
		case 1005:
			return 1067;
			break;
		case 1006:
			return 1068;
			break;
		case 1007:
			return 1069;
			break;
		case 1008:
			return 1070;
			break;
		case 1009:
			return 1071;
			break;
		case 1010:
			return 1072;
			break;
		case 1011:
			return 1073;
			break;
		case 1012:
			return 1074;
			break;
		case 1013:
			return 1075;
			break;
		case 1014:
			return 1076;
			break;
		case joaat("XMAS_LIVERY_8"):
			return 1077;
			break;
		case 1016:
			return 1078;
			break;
		case 1017:
			return 1079;
			break;
		case 1018:
			return 1080;
			break;
		case 1019:
			return 1081;
			break;
		case 1020:
			return 1082;
			break;
		case 1021:
			return 1083;
			break;
		case 1022:
			return 1084;
			break;
		case 1023:
			return 1085;
			break;
		case 1024:
			return 1086;
			break;
		case 1025:
			return 1087;
			break;
		case 1026:
			return 1088;
			break;
		case 1027:
			return 1089;
			break;
		case 1028:
			return 1090;
			break;
	}
	switch (iParam0)
	{
		case 1029:
			return 1153;
			break;
		case 1030:
			return 1154;
			break;
		case 1031:
			return 1155;
			break;
		case 1032:
			return 1156;
			break;
		case 1033:
			return 1157;
			break;
		case 1034:
			return 1158;
			break;
		case 1035:
			return 1159;
			break;
		case 1036:
			return 1160;
			break;
		case 1037:
			return 1161;
			break;
		case 1038:
			return 1162;
			break;
		case 1039:
			return 1163;
			break;
		case 1040:
			return 1164;
			break;
		case 1041:
			return 1165;
			break;
		case 1042:
			return 1166;
			break;
		case 1043:
			return 1167;
			break;
		case 1044:
			return 1168;
			break;
		case 1045:
			return 1169;
			break;
		case 1046:
			return 1170;
			break;
		case 1047:
			return 1171;
			break;
		case 1048:
			return 1172;
			break;
		case 1049:
			return 1173;
			break;
		case 1050:
			return 1174;
			break;
		case 1051:
			return 1175;
			break;
		case 1052:
			return 1176;
			break;
		case 1053:
			return 1177;
			break;
		case 1054:
			return 1178;
			break;
		case 1055:
			return 1179;
			break;
		case 1056:
			return 1180;
			break;
		case 1057:
			return 1181;
			break;
		case 1058:
			return 1182;
			break;
		case 1059:
			return 1183;
			break;
	}
	switch (iParam0)
	{
		case 1060:
			return 1122;
			break;
		case 1061:
			return 1123;
			break;
		case 1062:
			return 1124;
			break;
		case 1063:
			return 1125;
			break;
		case 1064:
			return 1126;
			break;
		case 1065:
			return 1127;
			break;
		case 1066:
			return 1128;
			break;
		case 1067:
			return 1129;
			break;
		case 1068:
			return 1130;
			break;
		case 1069:
			return 1131;
			break;
		case 1070:
			return 1132;
			break;
		case 1071:
			return 1133;
			break;
		case 1072:
			return 1134;
			break;
		case 1073:
			return 1135;
			break;
		case 1074:
			return 1136;
			break;
		case 1075:
			return 1137;
			break;
		case 1076:
			return 1138;
			break;
		case 1077:
			return 1139;
			break;
		case 1078:
			return 1140;
			break;
		case 1079:
			return 1141;
			break;
		case 1080:
			return 1142;
			break;
		case 1081:
			return 1143;
			break;
		case 1082:
			return 1144;
			break;
		case 1083:
			return 1145;
			break;
		case 1084:
			return 1146;
			break;
		case 1085:
			return 1147;
			break;
		case 1086:
			return 1148;
			break;
		case 1087:
			return 1149;
			break;
		case 1088:
			return 1150;
			break;
		case 1089:
			return 1151;
			break;
		case 1090:
			return 1152;
			break;
	}
	switch (iParam0)
	{
		case 1153:
			return 1029;
			break;
		case 1154:
			return 1030;
			break;
		case 1155:
			return 1031;
			break;
		case 1156:
			return 1032;
			break;
		case 1157:
			return 1033;
			break;
		case 1158:
			return 1034;
			break;
		case 1159:
			return 1035;
			break;
		case 1160:
			return 1036;
			break;
		case 1161:
			return 1037;
			break;
		case 1162:
			return 1038;
			break;
		case 1163:
			return 1039;
			break;
		case 1164:
			return 1040;
			break;
		case 1165:
			return 1041;
			break;
		case 1166:
			return 1042;
			break;
		case 1167:
			return 1043;
			break;
		case 1168:
			return 1044;
			break;
		case 1169:
			return 1045;
			break;
		case 1170:
			return 1046;
			break;
		case 1171:
			return 1047;
			break;
		case 1172:
			return 1048;
			break;
		case 1173:
			return 1049;
			break;
		case 1174:
			return 1050;
			break;
		case 1175:
			return 1051;
			break;
		case 1176:
			return 1052;
			break;
		case 1177:
			return 1053;
			break;
		case 1178:
			return 1054;
			break;
		case 1179:
			return 1055;
			break;
		case 1180:
			return 1056;
			break;
		case 1181:
			return 1057;
			break;
		case 1182:
			return 1058;
			break;
		case 1183:
			return 1059;
			break;
	}
	switch (iParam0)
	{
		case 1122:
			return 1091;
			break;
		case 1123:
			return 1092;
			break;
		case 1124:
			return 1093;
			break;
		case 1125:
			return 1094;
			break;
		case 1126:
			return 1095;
			break;
		case 1127:
			return 1096;
			break;
		case 1128:
			return 1097;
			break;
		case 1129:
			return 1098;
			break;
		case 1130:
			return 1099;
			break;
		case 1131:
			return 1100;
			break;
		case 1132:
			return 1101;
			break;
		case 1133:
			return 1102;
			break;
		case 1134:
			return 1103;
			break;
		case 1135:
			return 1104;
			break;
		case 1136:
			return 1105;
			break;
		case 1137:
			return 1106;
			break;
		case 1138:
			return 1107;
			break;
		case 1139:
			return 1108;
			break;
		case 1140:
			return 1109;
			break;
		case 1141:
			return 1110;
			break;
		case 1142:
			return 1111;
			break;
		case 1143:
			return 1112;
			break;
		case 1144:
			return 1113;
			break;
		case 1145:
			return 1114;
			break;
		case 1146:
			return 1115;
			break;
		case 1147:
			return 1116;
			break;
		case 1148:
			return 1117;
			break;
		case 1149:
			return 1118;
			break;
		case 1150:
			return 1119;
			break;
		case 1151:
			return 1120;
			break;
		case 1152:
			return 1121;
			break;
	}
	switch (iParam0)
	{
		case 1091:
			return 998;
			break;
		case 1092:
			return 999;
			break;
		case 1093:
			return 1000;
			break;
		case 1094:
			return 1001;
			break;
		case 1095:
			return 1002;
			break;
		case 1096:
			return 1003;
			break;
		case 1097:
			return 1004;
			break;
		case 1098:
			return 1005;
			break;
		case 1099:
			return 1006;
			break;
		case 1100:
			return 1007;
			break;
		case 1101:
			return 1008;
			break;
		case 1102:
			return 1009;
			break;
		case 1103:
			return 1010;
			break;
		case 1104:
			return 1011;
			break;
		case 1105:
			return 1012;
			break;
		case 1106:
			return 1013;
			break;
		case 1107:
			return 1014;
			break;
		case 1108:
			return 1015;
			break;
		case 1109:
			return 1016;
			break;
		case 1110:
			return 1017;
			break;
		case 1111:
			return 1018;
			break;
		case 1112:
			return 1019;
			break;
		case 1113:
			return 1020;
			break;
		case 1114:
			return 1021;
			break;
		case 1115:
			return 1022;
			break;
		case 1116:
			return 1023;
			break;
		case 1117:
			return 1024;
			break;
		case 1118:
			return 1025;
			break;
		case 1119:
			return 1026;
			break;
		case 1120:
			return 1027;
			break;
		case 1121:
			return 1028;
			break;
	}
	switch (iParam0)
	{
		case 1186:
			return 1186;
			break;
		case 1187:
			return 1187;
			break;
		case 1188:
			return 1188;
			break;
		case 1189:
			return 1189;
			break;
		case 1190:
			return 1190;
			break;
		case 1191:
			return 1191;
			break;
		case 1192:
			return 1192;
			break;
	}
	switch (iParam0)
	{
		case 1193:
			return 1193;
			break;
		case 1194:
			return 1194;
			break;
		case 1195:
			return 1195;
			break;
		case 1196:
			return 1196;
			break;
		case 1197:
			return 1197;
			break;
		case 1198:
			return 1198;
			break;
		case 1199:
			return 1199;
			break;
	}
	switch (iParam0)
	{
		case 1200:
			return 1200;
			break;
		case 1201:
			return 1201;
			break;
		case 1202:
			return 1202;
			break;
		case 1203:
			return 1203;
			break;
		case 1204:
			return 1204;
			break;
		case 1205:
			return 1205;
			break;
		case 1206:
			return 1206;
			break;
	}
	switch (iParam0)
	{
		case 1207:
			return 1207;
			break;
		case 1208:
			return 1208;
			break;
		case 1209:
			return 1209;
			break;
		case 1210:
			return 1210;
			break;
		case 1211:
			return 1211;
			break;
		case 1212:
			return 1212;
			break;
		case 1213:
			return 1213;
			break;
	}
	switch (iParam0)
	{
		case 1221:
			return 1242;
			break;
		case 1222:
			return 1243;
			break;
		case 1223:
			return 1244;
			break;
		case 1224:
			return 1245;
			break;
		case 1225:
			return 1246;
			break;
		case 1226:
			return 1247;
			break;
		case 1227:
			return 1248;
			break;
		case 1214:
			return 1235;
			break;
		case 1215:
			return 1236;
			break;
		case 1216:
			return 1237;
			break;
		case 1217:
			return 1238;
			break;
		case 1218:
			return 1239;
			break;
		case 1219:
			return 1240;
			break;
		case 1220:
			return 1241;
			break;
	}
	switch (iParam0)
	{
		case 1228:
			return 1249;
			break;
		case 1229:
			return 1250;
			break;
		case 1230:
			return 1251;
			break;
		case 1231:
			return 1252;
			break;
		case 1232:
			return 1253;
			break;
		case 1233:
			return 1254;
			break;
		case 1234:
			return 1255;
			break;
		case 1235:
			return 1256;
			break;
		case 1236:
			return 1257;
			break;
	}
	switch (iParam0)
	{
		case 185:
			return 178;
			break;
		case 186:
			return 179;
			break;
		case 187:
			return 180;
			break;
		case 188:
			return 181;
			break;
		case 189:
			return 182;
			break;
		case 190:
			return 183;
			break;
		case 191:
			return 184;
			break;
		case 1237:
			return 1258;
			break;
		case 1238:
			return 1259;
			break;
		case 1239:
			return 1260;
			break;
		case 1240:
			return 1261;
			break;
		case 1241:
			return 1262;
			break;
		case 1242:
			return 1263;
			break;
		case 1243:
			return 1264;
			break;
		case 1244:
			return 1265;
			break;
		case 1245:
			return 1266;
			break;
		case 1246:
			return 1267;
			break;
		case 1247:
			return 1268;
			break;
		case 1248:
			return 1269;
			break;
		case 1249:
			return 1270;
			break;
		case 1250:
			return 1271;
			break;
	}
	switch (iParam0)
	{
		case 1254:
			return 1275;
			break;
		case 1255:
			return 1276;
			break;
		case 1256:
			return 1277;
			break;
		case 1257:
			return 1278;
			break;
		case 1258:
			return 1279;
			break;
		case 1259:
			return 1280;
			break;
		case 1260:
			return 1281;
			break;
		case 1261:
			return 1282;
			break;
		case 1262:
			return 1283;
			break;
		case 1263:
			return 1284;
			break;
		case 1264:
			return 1285;
			break;
		case 1265:
			return 1286;
			break;
		case 1266:
			return 1287;
			break;
		case 1267:
			return 1281;
			break;
	}
	switch (iParam0)
	{
		case 1251:
			return 1272;
			break;
		case 1252:
			return 1273;
			break;
		case 1253:
			return 1274;
			break;
	}
	return 146;
}

int func_592(int iParam0)//Position - 0x28FD3C
{
	if (iParam0 == 20)
	{
		return 0;
	}
	else if (iParam0 == 40)
	{
		return 4;
	}
	else if (iParam0 == 60)
	{
		return 1;
	}
	else if (iParam0 == 80)
	{
		return 2;
	}
	else if (iParam0 == 100)
	{
		return 3;
	}
	return 0;
}

bool func_593(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x2934A1
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		StringCopy(sParam2, sParam3, 16);
	}
	else
	{
		StringCopy(sParam2, "GSA", 16);
	}
	if (iParam0 == joaat("AMMO_PISTOL"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SMG"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_RIFLE"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_MG"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_RUBBERGUN"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER_REMOTE"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_MINIGUN"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_PROGRAMMABLEAR"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SHOTGUN"))
	{
		StringConCat(sParam2, "_TYPE_C", 16);
	}
	else if (iParam0 == joaat("AMMO_STUNGUN"))
	{
		StringConCat(sParam2, "_TYPE_CH", 16);
	}
	else if (iParam0 == joaat("AMMO_GRENADELAUNCHER"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == joaat("AMMO_GRENADELAUNCHER_SMOKE"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == joaat("AMMO_SMOKEGRENADE"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == joaat("AMMOTYPE_GRENADE"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == joaat("AMMO_STICKYBOMB"))
	{
		StringConCat(sParam2, "_TYPE_B", 16);
	}
	else if (iParam0 == joaat("AMMO_RPG"))
	{
		StringConCat(sParam2, "_TYPE_RO", 16);
	}
	else if (iParam0 == joaat("AMMO_FLAREGUN"))
	{
		StringConCat(sParam2, "_TYPE_F", 16);
	}
	else if (iParam0 == joaat("AMMO_FIREWORK"))
	{
		StringConCat(sParam2, "_TYPE_FW", 16);
	}
	else if (iParam0 == joaat("AMMO_HOMINGLAUNCHER"))
	{
		StringConCat(sParam2, "_TYPE_RO", 16);
	}
	else if (iParam0 == joaat("AMMO_PROXMINE"))
	{
		StringConCat(sParam2, "_TYPE_M", 16);
	}
	else if (iParam0 == joaat("AMMO_RAILGUN"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_PIPEBOMB"))
	{
		StringConCat(sParam2, "_TYPE_B", 16);
	}
	else if (iParam0 == joaat("AMMO_MG_ARMORPIERCING"))
	{
		StringCopy(sParam2, "WCT_CLIP_AP" /* GXT: Armor Piercing Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_MG_FMJ"))
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ" /* GXT: Full Metal Jacket Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_MG_INCENDIARY"))
	{
		StringCopy(sParam2, "WCT_CLIP_INC" /* GXT: Incendiary Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_MG_TRACER"))
	{
		StringCopy(sParam2, "WCT_CLIP_TR" /* GXT: Tracer Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_PISTOL_FMJ"))
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ" /* GXT: Full Metal Jacket Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_PISTOL_HOLLOWPOINT"))
	{
		StringCopy(sParam2, "WCT_CLIP_HP" /* GXT: Hollow Point Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_PISTOL_INCENDIARY"))
	{
		StringCopy(sParam2, "WCT_CLIP_INC" /* GXT: Incendiary Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_PISTOL_TRACER"))
	{
		StringCopy(sParam2, "WCT_CLIP_TR" /* GXT: Tracer Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_RIFLE_ARMORPIERCING"))
	{
		StringCopy(sParam2, "WCT_CLIP_AP" /* GXT: Armor Piercing Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_RIFLE_FMJ"))
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ" /* GXT: Full Metal Jacket Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_RIFLE_INCENDIARY"))
	{
		StringCopy(sParam2, "WCT_CLIP_INC" /* GXT: Incendiary Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_RIFLE_TRACER"))
	{
		StringCopy(sParam2, "WCT_CLIP_TR" /* GXT: Tracer Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_SMG_FMJ"))
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ" /* GXT: Full Metal Jacket Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_SMG_HOLLOWPOINT"))
	{
		StringCopy(sParam2, "WCT_CLIP_HP" /* GXT: Hollow Point Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_SMG_INCENDIARY"))
	{
		StringCopy(sParam2, "WCT_CLIP_INC" /* GXT: Incendiary Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_SMG_TRACER"))
	{
		StringCopy(sParam2, "WCT_CLIP_TR" /* GXT: Tracer Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER_ARMORPIERCING"))
	{
		StringCopy(sParam2, "WCT_CLIP_AP" /* GXT: Armor Piercing Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER_EXPLOSIVE"))
	{
		StringCopy(sParam2, "WCT_CLIP_EX" /* GXT: Explosive Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER_FMJ"))
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ" /* GXT: Full Metal Jacket Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER_INCENDIARY"))
	{
		StringCopy(sParam2, "WCT_CLIP_INC" /* GXT: Incendiary Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER_TRACER"))
	{
		StringCopy(sParam2, "WCT_CLIP_TR" /* GXT: Tracer Rounds */, 16);
	}
	else if (iParam0 == joaat("AMMO_SHOTGUN_ARMORPIERCING"))
	{
		StringCopy(sParam2, "WCT_SHELL_AP" /* GXT: Steel Buckshot Shells */, 16);
	}
	else if (iParam0 == joaat("AMMO_SHOTGUN_EXPLOSIVE"))
	{
		StringCopy(sParam2, "WCT_SHELL_EX" /* GXT: Explosive Slugs */, 16);
	}
	else if (iParam0 == joaat("AMMO_SHOTGUN_HOLLOWPOINT"))
	{
		StringCopy(sParam2, "WCT_SHELL_HP" /* GXT: Flechette Shells */, 16);
	}
	else if (iParam0 == joaat("AMMO_SHOTGUN_INCENDIARY"))
	{
		StringCopy(sParam2, "WCT_SHELL_INC" /* GXT: Dragon's Breath Shells */, 16);
	}
	else if (iParam0 == joaat("AMMO_EMPLAUNCHER"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else
	{
		return 0;
	}
	if (iParam1 == 1 && iParam0 != joaat("AMMO_FIREWORK"))
	{
		StringConCat(sParam2, "1", 16);
	}
	return MISC::GET_HASH_KEY(sParam2) != 0;
}

void func_594(int iParam0, var uParam1, int iParam2)//Position - 0x29445E
{
	*iParam2 = 0;
	if (iParam0 == joaat("WEAPON_PETROLCAN"))
	{
		*uParam1 = 5;
	}
	else if (iParam0 == joaat("GADGET_PARACHUTE"))
	{
		*uParam1 = 4;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		*uParam1 = 3;
	}
	else if ((((iParam0 == joaat("WEAPON_PISTOL50") || iParam0 == joaat("WEAPON_SNSPISTOL")) || iParam0 == joaat("WEAPON_HEAVYPISTOL")) || iParam0 == joaat("WEAPON_VINTAGEPISTOL")) || iParam0 == joaat("WEAPON_FLAREGUN"))
	{
		*uParam1 = 0;
	}
	else if (((((((((iParam0 == joaat("WEAPON_BOTTLE") || iParam0 == joaat("WEAPON_DAGGER")) || iParam0 == joaat("WEAPON_HAMMER")) || iParam0 == joaat("WEAPON_HATCHET")) || iParam0 == joaat("WEAPON_KNIFE")) || iParam0 == joaat("WEAPON_NIGHTSTICK")) || iParam0 == joaat("WEAPON_FLASHLIGHT")) || iParam0 == joaat("WEAPON_SWITCHBLADE")) || iParam0 == joaat("WEAPON_KNUCKLE")) || iParam0 == joaat("WEAPON_MACHETE"))
	{
		*uParam1 = 1;
	}
	else if ((((iParam0 == joaat("WEAPON_GRENADE") || iParam0 == joaat("WEAPON_SMOKEGRENADE")) || iParam0 == joaat("WEAPON_STICKYBOMB")) || iParam0 == joaat("WEAPON_PROXMINE")) || iParam0 == joaat("WEAPON_PIPEBOMB"))
	{
		*uParam1 = 2;
		*iParam2 = 1;
	}
	else
	{
		*uParam1 = 0;
	}
}

int func_595(int iParam0, int iParam1, int iParam2)//Position - 0x295509
{
	if (__LIB_0__.func_121(iParam0))
	{
		return WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iParam1, iParam2);
	}
	return 0;
}

void func_596(var uParam0, int iParam1, int iParam2)//Position - 0x295C73
{
	uParam0->f_25 = iParam1;
	uParam0->f_22 = iParam2;
}

int func_597(int iParam0)//Position - 0x2A1514
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			iVar0 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			iVar0 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					iVar0 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER")))
				{
					iVar0 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_SMG"):
			iVar0 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_SMG_MK2"):
			iVar0 = joaat("AMMO_SMG");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_SMG_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT")))
				{
					iVar0 = joaat("AMMO_SMG_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_SMG_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER")))
				{
					iVar0 = joaat("AMMO_SMG_TRACER");
				}
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			iVar0 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			iVar0 = joaat("AMMO_SNIPER");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = joaat("AMMO_SNIPER_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE")))
				{
					iVar0 = joaat("AMMO_SNIPER_EXPLOSIVE");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_SNIPER_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_SNIPER_INCENDIARY");
				}
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			iVar0 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			iVar0 = joaat("AMMO_MG");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = joaat("AMMO_MG_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_MG_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_MG_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER")))
				{
					iVar0 = joaat("AMMO_MG_TRACER");
				}
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			iVar0 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			iVar0 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER")))
				{
					iVar0 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			iVar0 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			iVar0 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER")))
				{
					iVar0 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar0 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			iVar0 = joaat("AMMO_SHOTGUN");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = joaat("AMMO_SHOTGUN_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE")))
				{
					iVar0 = joaat("AMMO_SHOTGUN_EXPLOSIVE");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT")))
				{
					iVar0 = joaat("AMMO_SHOTGUN_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_SHOTGUN_INCENDIARY");
				}
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			iVar0 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			iVar0 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER")))
				{
					iVar0 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			iVar0 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			iVar0 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					iVar0 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER")))
				{
					iVar0 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			iVar0 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			iVar0 = joaat("AMMO_SNIPER");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = joaat("AMMO_SNIPER_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_SNIPER_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_SNIPER_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER")))
				{
					iVar0 = joaat("AMMO_SNIPER_TRACER");
				}
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			iVar0 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			iVar0 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT")))
				{
					iVar0 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER")))
				{
					iVar0 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			iVar0 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			iVar0 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ")))
				{
					iVar0 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER")))
				{
					iVar0 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
	}
	return iVar0;
}

void func_598(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5)//Position - 0x2A1C8C
{
	*uParam0 = iParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_4 = { Param3 };
	uParam0->f_7 = { Param4 };
	uParam0->f_10 = { Param5 };
	uParam0->f_23 = -1;
}

int func_599()//Position - 0x2A2435
{
	if (__LIB_0__.func_228(18981, -1) >= 4)
	{
		return 1;
	}
	return 0;
}

void func_600(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, struct<3> Param6, struct<3> Param7, struct<3> Param8)//Position - 0x2A29A3
{
	*uParam0 = iParam3;
	uParam0->f_24 = iParam1;
	uParam0->f_25 = iParam2;
	uParam0->f_22 = iParam4;
	uParam0->f_1 = { Param5 };
	uParam0->f_4 = { Param6 };
	uParam0->f_7 = { Param7 };
	uParam0->f_10 = { Param8 };
	uParam0->f_23 = -1;
}

int func_601(var uParam0, int iParam1)//Position - 0x2A2A88
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	if (((__LIB_0__.func_3() == 0 || __LIB_0__.func_63() == 0) || iParam1 == 0) || (__LIB_0__.func_3() == 999 && __LIB_0__.func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 697;
				break;
			case 1:
				return 698;
				break;
			case 2:
				return 699;
				break;
			case 3:
				return 700;
				break;
			case 4:
				return 701;
				break;
			case 5:
				return 702;
				break;
			case 6:
				return 703;
				break;
			case 7:
				return 704;
				break;
			case 8:
				return 705;
				break;
			case 9:
				return 2055;
				break;
			case 10:
				return 2067;
				break;
			case 11:
				return 2094;
				break;
			case 12:
				return 2430;
				break;
			case 13:
				return 2950;
				break;
			case 14:
				return 5513;
				break;
			case 15:
				return 5517;
				break;
			case 16:
				return 5521;
				break;
			case 17:
				return 5525;
				break;
			case 18:
				return 5529;
				break;
			case 19:
				return 5533;
				break;
			case 20:
				return 5593;
				break;
			case 21:
				return 5597;
				break;
			case 22:
				return 5601;
				break;
			case 23:
				return 5605;
				break;
			case 24:
				return 5609;
				break;
			case 25:
				return 5613;
				break;
			case 26:
				return 5617;
				break;
			case 27:
				return 5638;
				break;
			case 28:
				return 5642;
				break;
			case 29:
				return 5646;
				break;
			case 30:
				return 5650;
				break;
			case 31:
				return 5654;
				break;
			case 32:
				return 5658;
				break;
			case 33:
				return 6468;
				break;
			case 34:
				return 6472;
				break;
			case 35:
				return 6476;
				break;
			case 36:
				return 6480;
				break;
			case 37:
				return 6484;
				break;
			case 38:
				return 6488;
				break;
			case 39:
				return 6492;
				break;
			case 40:
				return 10267;
				break;
		}
	}
	return 13122;
}

char* func_602(int iParam0, int iParam1)//Position - 0x2A509C
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	iVar0 = Global_1659931;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (iVar0 >= 0 && iVar0 < AUDIO::GET_NUM_UNLOCKED_RADIO_STATIONS())
	{
		sVar1 = AUDIO::GET_RADIO_STATION_NAME(iVar0);
		sVar2 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sVar1);
		if (MISC::ARE_STRINGS_EQUAL(sVar2, "Vinewood Boulevard Radio"))
		{
			sVar2 = "RADSH_VBR" /* GXT: VBR */;
			return sVar2;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "RADIO_22_DLC_BATTLE_MIX1_RADIO" /* GXT: Los Santos Underground Radio */))
		{
			sVar2 = "RADSH_BATTLE_MIX1" /* GXT: Los Santos Underground Radio */;
			return sVar2;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar2, "iFruit Radio"))
		{
			sVar2 = "IFRUITRADIO" /* GXT: iFruit Radio */;
			return sVar2;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "RADIO_23_DLC_XM19_RADIO" /* GXT: iFruit Radio */))
		{
			sVar2 = "IFRUITRADIO" /* GXT: iFruit Radio */;
			return sVar2;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "RADIO_27_DLC_PRHEI4" /* GXT: Still Slipping Los Santos */))
		{
			sVar2 = "SHTRADIO_SLIP" /* GXT: Still Slipping Los Santos */;
			return sVar2;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "RADIO_34_DLC_HEI4_KULT" /* GXT: Kult FM */))
		{
			sVar2 = "SHTRADIO_KULT" /* GXT: Kult FM */;
			return sVar2;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "RADIO_35_DLC_HEI4_MLR" /* GXT: The Music Locker */))
		{
			sVar2 = "RSHTRADIO_MLR" /* GXT: The Music Locker */;
			return sVar2;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */))
		{
			sVar2 = "SHRADIO_AUDIOP" /* GXT: Media Player */;
			return sVar2;
		}
		return AUDIO::GET_RADIO_STATION_NAME(iVar0);
	}
	if (iParam0 == 0)
	{
		return "RADIO_OFF" /* GXT: Off */;
	}
	return "OFF";
}

int func_603()//Position - 0x2A8066
{
	return Global_262145.f_6886 /* Tunable: FM_CORONA_PLAYLIST_PROFESSIONAL_COST */;
}

int func_604(int iParam0)//Position - 0x2A880E
{
	switch (iParam0)
	{
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_BZGAS"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_FLARE"):
		case joaat("WEAPON_BALL"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_PIPEBOMB"):
			return 1;
		default:
	}
	return 0;
}

int func_605(int iParam0)//Position - 0x2A90C5
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			return joaat("WEAPON_PISTOL");
		case joaat("WEAPON_SMG_MK2"):
			return joaat("WEAPON_SMG");
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return joaat("WEAPON_ASSAULTRIFLE");
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return joaat("WEAPON_CARBINERIFLE");
		case joaat("WEAPON_COMBATMG_MK2"):
			return joaat("WEAPON_COMBATMG");
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return joaat("WEAPON_HEAVYSNIPER");
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return joaat("WEAPON_BULLPUPRIFLE");
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return joaat("WEAPON_MARKSMANRIFLE");
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return joaat("WEAPON_PUMPSHOTGUN");
		case joaat("WEAPON_REVOLVER_MK2"):
			return joaat("WEAPON_REVOLVER");
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return joaat("WEAPON_SNSPISTOL");
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return joaat("WEAPON_SPECIALCARBINE");
		default:
	}
	return 0;
}

int func_606(int iParam0)//Position - 0x2AB9F8
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 1;
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 1;
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 1;
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 1;
			break;
		case joaat("WEAPON_SMG_MK2"):
			return 1;
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 1;
			break;
	}
	return 0;
}

void func_607(int iParam0)//Position - 0x2ABA81
{
	int iVar0;
	Global_1574580 = iParam0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (WEAPON::IS_WEAPON_VALID(iParam0) && WEAPON::HAS_PED_GOT_WEAPON(iVar0, Global_1574580, false))
		{
			Global_1574581 = WEAPON::GET_AMMO_IN_PED_WEAPON(iVar0, Global_1574580);
		}
	}
}

int func_608(int iParam0)//Position - 0x2AF4CC
{
	switch (iParam0)
	{
		case joaat("AMMO_PISTOL_FMJ"):
		case joaat("AMMO_PISTOL_HOLLOWPOINT"):
		case joaat("AMMO_PISTOL_INCENDIARY"):
		case joaat("AMMO_PISTOL_TRACER"):
		case joaat("AMMO_SMG_FMJ"):
		case joaat("AMMO_SMG_HOLLOWPOINT"):
		case joaat("AMMO_SMG_INCENDIARY"):
		case joaat("AMMO_SMG_TRACER"):
		case joaat("AMMO_SNIPER_ARMORPIERCING"):
		case joaat("AMMO_SNIPER_EXPLOSIVE"):
		case joaat("AMMO_SNIPER_FMJ"):
		case joaat("AMMO_SNIPER_INCENDIARY"):
		case joaat("AMMO_MG_ARMORPIERCING"):
		case joaat("AMMO_MG_FMJ"):
		case joaat("AMMO_MG_INCENDIARY"):
		case joaat("AMMO_MG_TRACER"):
		case joaat("AMMO_RIFLE_ARMORPIERCING"):
		case joaat("AMMO_RIFLE_FMJ"):
		case joaat("AMMO_RIFLE_INCENDIARY"):
		case joaat("AMMO_RIFLE_TRACER"):
		case joaat("AMMO_SHOTGUN_ARMORPIERCING"):
		case joaat("AMMO_SHOTGUN_EXPLOSIVE"):
		case joaat("AMMO_SHOTGUN_HOLLOWPOINT"):
		case joaat("AMMO_SHOTGUN_INCENDIARY"):
			return 1;
			break;
	}
	return 0;
}

int func_609(int iParam0)//Position - 0x2C72A1
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("faction"):
			if (Global_262145.f_14734 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case joaat("slamvan"):
		case joaat("glendale"):
			if (!__LIB_4__.func_6(PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
			else if (PLAYER::PLAYER_ID() != __LIB_0__.func_160())
			{
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 12))
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 3;
				}
			}
			break;
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			iVar0 = 2;
			break;
		case joaat("gargoyle"):
		case joaat("ratloader"):
		case joaat("ratloader2"):
		case joaat("issi3"):
		case joaat("dominator"):
		case joaat("dominator2"):
		case joaat("impaler"):
			iVar0 = 3;
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

char* func_610(int iParam0)//Position - 0x2D147C
{
	switch (iParam0)
	{
		case -1:
			return "HO_NONE" /* GXT: None */;
			break;
		case -2:
			return "HO_NONE" /* GXT: None */;
			break;
		case 0:
			return "HM_AMATUR_0" /* GXT: Black Knit Balaclava */;
			break;
		case 1:
			return "HM_AMATUR_1" /* GXT: Black Loose Balaclava */;
			break;
		case 2:
			return "HM_AMATUR_2" /* GXT: Scruffy Balaclava */;
			break;
		case 3:
			return "HM_AMATUR_3" /* GXT: Black Tight Ski */;
			break;
		case 4:
			return "HM_ANIMAL_0" /* GXT: Tabby Cat */;
			break;
		case 5:
			return "HM_ANIMAL_1" /* GXT: Red Fox */;
			break;
		case 6:
			return "HM_ANIMAL_2" /* GXT: Gray Cat */;
			break;
		case 7:
			return "HM_ANIMAL_3" /* GXT: White Owl */;
			break;
		case 8:
			return "HM_PAP_BAG_0" /* GXT: Up-n-Atom Paper Bag */;
			break;
		case 9:
			return "HM_PAP_BAG_1" /* GXT: Manic Paper Bag */;
			break;
		case 10:
			return "HM_PAP_BAG_2" /* GXT: Sad Paper Bag */;
			break;
		case 11:
			return "HM_PAP_BAG_3" /* GXT: Happy Paper Bag */;
			break;
		case 12:
			return "HM_PAP_BAG_4" /* GXT: Fat Cat Paper Bag */;
			break;
		case 13:
			return "HM_PAP_BAG_5" /* GXT: Mouth Paper Bag */;
			break;
		case 14:
			return "HM_PAP_BAG_6" /* GXT: Shy Paper Bag */;
			break;
		case 15:
			return "HM_PAP_BAG_7" /* GXT: Burger Shot Paper Bag */;
			break;
		case 16:
			return "HM_PAP_BAG_8" /* GXT: Kill Me Paper Bag */;
			break;
		case 17:
			return "HM_PAP_BAG_9" /* GXT: Diabolic Paper Bag */;
			break;
		case 18:
			return "HM_PAP_BAG_10" /* GXT: Cop Paper Bag */;
			break;
		case 19:
			return "HM_PAP_BAG_11" /* GXT: Monster Paper Bag */;
			break;
		case 20:
			return "HM_PAP_BAG_12" /* GXT: Fury Paper Bag */;
			break;
		case 21:
			return "HM_PAP_BAG_13" /* GXT: Zigzag Paper Bag */;
			break;
		case 22:
			return "HM_PAP_BAG_14" /* GXT: Skull Paper Bag */;
			break;
		case 23:
			return "HM_PAP_BAG_15" /* GXT: Dog Paper Bag */;
			break;
		case 24:
			return "HM_PAP_BAG_16" /* GXT: Pink Paper Bag */;
			break;
		case 25:
			return "HM_PAP_BAG_17" /* GXT: Alien Paper Bag */;
			break;
		case 26:
			return "HM_PAP_BAG_18" /* GXT: Help Me Paper Bag */;
			break;
		case 27:
			return "HM_PAP_BAG_19" /* GXT: Puzzle Paper Bag */;
			break;
		case 28:
			return "HM_PAP_BAG_20" /* GXT: The Bird Paper Bag */;
			break;
		case 29:
			return "HM_PAP_BAG_21" /* GXT: Dapper Paper Bag */;
			break;
		case 30:
			return "HM_PAP_BAG_22" /* GXT: Sticker Paper Bag */;
			break;
		case 31:
			return "HM_PAP_BAG_23" /* GXT: Modernist Paper Bag */;
			break;
		case 32:
			return "HM_PAP_BAG_24" /* GXT: Love Paper Bag */;
			break;
		case 33:
			return "HM_PAP_BAG_25" /* GXT: Blackout Paper Bag */;
			break;
		case 34:
			return "HM_BEAST_0" /* GXT: Hound Hockey */;
			break;
		case 35:
			return "HM_BEAST_1" /* GXT: Beast Hockey */;
			break;
		case 36:
			return "HM_BEAST_2" /* GXT: Wolf Hockey */;
			break;
		case 37:
			return "HM_BEAST_3" /* GXT: Bear Hockey */;
			break;
		case 38:
			return "HM_CHARS_0" /* GXT: Princess Robot Bubblegum */;
			break;
		case 39:
			return "HM_CHARS_1" /* GXT: Impotent Rage */;
			break;
		case 40:
			return "HM_CHARS_2" /* GXT: Pogo */;
			break;
		case 41:
			return "HM_CHARS_3" /* GXT: Moorehead */;
			break;
		case 42:
			return "HM_CLS_MON_0" /* GXT: Pink Infected */;
			break;
		case 43:
			return "HM_CLS_MON_2" /* GXT: Green Mummy */;
			break;
		case 44:
			return "HM_CLS_MON_1" /* GXT: White Vampyr */;
			break;
		case 45:
			return "HM_CLS_MON_3" /* GXT: Pale Frank */;
			break;
		case 46:
			return "HM_CARNIE_0" /* GXT: Blue Carnival */;
			break;
		case 47:
			return "HM_CARNIE_1" /* GXT: Black Carnival */;
			break;
		case 48:
			return "HM_CARNIE_2" /* GXT: Green Carnival */;
			break;
		case 49:
			return "HM_CARNIE_3" /* GXT: White Carnival */;
			break;
		case 50:
			return "HM_GAS_MSK_0" /* GXT: Gas Mask */;
			break;
		case 51:
			return "HM_GAS_MSK_1" /* GXT: Chemical Mask */;
			break;
		case 52:
			return "HM_HELM_0" /* GXT: Glossy All Black Biker */;
			break;
		case 53:
			return "HM_HELM_1" /* GXT: Glossy Mirrored Biker */;
			break;
		case 54:
			return "HM_HELM_2" /* GXT: Matte All Black Biker */;
			break;
		case 55:
			return "HM_HELM_3" /* GXT: Matte Mirrored Biker */;
			break;
		case 56:
			return "HM_HELM_4" /* GXT: Squared Helmet */;
			break;
		case 57:
			return "HM_HELM_5" /* GXT: Skull Helmet */;
			break;
		case 58:
			return "HM_HELM_6" /* GXT: Shatter Pattern Helmet */;
			break;
		case 59:
			return "HM_HELM_7" /* GXT: Ace of Spades Helmet */;
			break;
		case 60:
			return "HM_HOR_HOC_0" /* GXT: Please Stop Me Hockey */;
			break;
		case 61:
			return "HM_HOR_HOC_1" /* GXT: White Hockey */;
			break;
		case 62:
			return "HM_HOR_HOC_2" /* GXT: Black Bloody Hockey */;
			break;
		case 63:
			return "HM_HOR_HOC_3" /* GXT: Stitched Hockey */;
			break;
		case 64:
			return "HM_PUPPET_0" /* GXT: Mannequin Plastic Face */;
			break;
		case 65:
			return "HM_PUPPET_1" /* GXT: Doll Plastic Face */;
			break;
		case 66:
			return "HM_PUPPET_2" /* GXT: Clown Plastic Face */;
			break;
		case 67:
			return "HM_PUPPET_3" /* GXT: Puppet Plastic Face */;
			break;
		case 68:
			return "HM_SKULL_0" /* GXT: Skull Hockey */;
			break;
		case 69:
			return "HM_SKULL_1" /* GXT: Silver Skull */;
			break;
		case 70:
			return "HM_SKULL_2" /* GXT: Metal Warrior */;
			break;
		case 71:
			return "HM_SKULL_3" /* GXT: Tan Skeletal */;
			break;
		case 72:
			return "HM_TACT_0" /* GXT: Black Plastic Face */;
			break;
		case 73:
			return "HM_TACT_1" /* GXT: Black Combat Mask */;
			break;
		case 74:
			return "HM_TACT_2" /* GXT: Black Skeletal */;
			break;
		case 75:
			return "HM_TACT_3" /* GXT: Carbon Warrior */;
			break;
		case 76:
			return "HM_TAPE_0" /* GXT: Crime Scene Tape */;
			break;
		case 77:
			return "HM_TAPE_1" /* GXT: Hazard Tape */;
			break;
		case 78:
			return "HM_TAPE_2" /* GXT: Red Arrow Tape */;
			break;
		case 79:
			return "HM_TAPE_3" /* GXT: Black Arrow Tape */;
			break;
		case 80:
			return "HM_THEAT_1" /* GXT: Black & Gold Masquerade */;
			break;
		case 81:
			return "HM_THEAT_0" /* GXT: The Don Plastic Face */;
			break;
		case 82:
			return "HM_THEAT_2" /* GXT: Mime Plastic Face */;
			break;
		case 83:
			return "HM_THEAT_3" /* GXT: Black Mysterious */;
			break;
		case 84:
			return "HM_PIGS_0" /* GXT: Pink Pig */;
			break;
		case 85:
			return "HM_PIGS_1" /* GXT: Brown Pig */;
			break;
		case 86:
			return "HM_PIGS_2" /* GXT: Bloody Pig */;
			break;
		case 87:
			return "HM_PIGS_3" /* GXT: Black Pig */;
			break;
		case 88:
			return "HM_DTAPE_0" /* GXT: Light Gray Duct Tape */;
			break;
		case 89:
			return "HM_DTAPE_1" /* GXT: Dark Gray Duct Tape */;
			break;
		case 90:
			return "HM_DTAPE_2" /* GXT: Electrical Duct Tape */;
			break;
		case 91:
			return "HM_DTAPE_3" /* GXT: White Duct Tape */;
			break;
		case 92:
			return "HM_INCOG_0" /* GXT: Black Tight Ski */;
			break;
		case 93:
			return "HM_INCOG_1" /* GXT: Urban Tight Ski */;
			break;
		case 94:
			return "HM_INCOG_2" /* GXT: Skull Tight Ski */;
			break;
		case 95:
			return "HM_INCOG_3" /* GXT: Charcoal Tight Ski */;
			break;
		case 96:
			return "HM_BALA_0" /* GXT: Red Knit Balaclava */;
			break;
		case 97:
			return "HM_BALA_1" /* GXT: Green Knit Balaclava */;
			break;
		case 98:
			return "HM_BALA_2" /* GXT: Orange Knit Balaclava */;
			break;
		case 99:
			return "HM_BALA_3" /* GXT: Blue Knit Balaclava */;
			break;
		case 100:
			return "HM_BALA_4" /* GXT: Pink Knit Balaclava */;
			break;
		case 101:
			return "HM_BALA_5" /* GXT: Purple Knit Balaclava */;
			break;
		case 102:
			return "HM_BALA_6" /* GXT: Nature Knit Balaclava */;
			break;
		case 103:
			return "HM_BALA_7" /* GXT: Pink Camo Knit Balaclava */;
			break;
		case 104:
			return "HM_BALA_8" /* GXT: Blue Stripe Knit Balaclava */;
			break;
		case 105:
			return "HM_BALA_9" /* GXT: Orange Camo Knit Balaclava */;
			break;
		case 106:
			return "HM_BALA_10" /* GXT: Rainbow Knit Balaclava */;
			break;
		case 107:
			return "HM_BALA_11" /* GXT: Pink Stripe Knit Balaclava */;
			break;
		case 108:
			return "HM_CAMO_0" /* GXT: Forest Tight Ski */;
			break;
		case 109:
			return "HM_CAMO_1" /* GXT: Woodland T-Shirt Mask */;
			break;
		case 110:
			return "HM_CAMO_2" /* GXT: Woodland Knit Balaclava */;
			break;
		case 111:
			return "HM_CAMO_3" /* GXT: Outback Loose Balaclava */;
			break;
		case 112:
			return "HM_CAMO_4" /* GXT: Brown Knit Balaclava */;
			break;
		case 113:
			return "HM_CAMO_5" /* GXT: Woodland Loose Balaclava */;
			break;
		case 114:
			return "HM_PSYC_0" /* GXT: Dirty Knit Balaclava */;
			break;
		case 115:
			return "HM_PSYC_1" /* GXT: Bloody Loose Balaclava */;
			break;
		case 116:
			return "HM_PSYC_2" /* GXT: Tan T-Shirt Mask */;
			break;
		case 117:
			return "HM_PSYC_3" /* GXT: Pale Stitched Hockey */;
			break;
		case 118:
			return "HM_STREET_0" /* GXT: Black T-Shirt Mask */;
			break;
		case 119:
			return "HM_STREET_1" /* GXT: Justice T-Shirt Mask */;
			break;
		case 120:
			return "HM_STREET_2" /* GXT: White T-Shirt Mask */;
			break;
		case 121:
			return "HM_STREET_3" /* GXT: LSPD T-Shirt Mask */;
			break;
		case 122:
			return "HM_STREET_4" /* GXT: Love Fist T-Shirt Mask */;
			break;
		case 123:
			return "HM_STREET_5" /* GXT: Benders T-Shirt Mask */;
			break;
		case 124:
			return "HM_BANDA_0" /* GXT: Paisley Face Bandana */;
			break;
		case 125:
			return "HM_BANDA_1" /* GXT: Green Face Bandana */;
			break;
		case 126:
			return "HM_BANDA_2" /* GXT: Skull Face Bandana */;
			break;
		case 127:
			return "HM_BANDA_3" /* GXT: Purple Face Bandana */;
			break;
		case 128:
			return "HM_HOODS_0" /* GXT: Black Hooded Ski */;
			break;
		case 129:
			return "HM_HOODS_1" /* GXT: Charcoal Hooded Ski */;
			break;
		case 130:
			return "HM_HOODS_2" /* GXT: Gray Hooded Ski */;
			break;
		case 131:
			return "HM_HOODS_3" /* GXT: White Hooded Ski */;
			break;
		case 132:
			return "HM_DESIGNER_0" /* GXT: Sessanta Nove Balaclava */;
			break;
		case 133:
			return "HM_DESIGNER_1" /* GXT: Flying Bravo FB Balaclava */;
			break;
		case 134:
			return "HM_DESIGNER_2" /* GXT: Perseus Balaclava */;
			break;
		case 135:
			return "HM_DESIGNER_3" /* GXT: Flying Bravo Balaclava */;
			break;
		case 136:
			return "HM_DESIGNER_4" /* GXT: Didier Sachs Balaclava */;
			break;
		case 137:
			return "HM_DESIGNER_5" /* GXT: Perseus Band Balaclava */;
			break;
		case 138:
			return "HM_DEVIL_0";
			break;
		case 139:
			return "HM_DEVIL_4";
			break;
		case 140:
			return "HM_DEVIL_2";
			break;
		case 141:
			return "HM_DEVIL_3";
			break;
		case 142:
			return "HM_DEVIL_1";
			break;
		case 143:
			return "HM_DEVIL_5";
			break;
		case 144:
			return "HM_SAD_0";
			break;
		case 145:
			return "HM_SAD_1";
			break;
		case 146:
			return "HM_SAD_2";
			break;
		case 147:
			return "HM_SAD_3";
			break;
		case 148:
			return "HM_POSS_0";
			break;
		case 149:
			return "HM_POSS_1";
			break;
		case 150:
			return "HM_POSS_2";
			break;
		case 151:
			return "HM_POSS_3";
			break;
		case 152:
			return "HM_FIENDS_0";
			break;
		case 153:
			return "HM_FIENDS_1";
			break;
		case 154:
			return "HM_FIENDS_2";
			break;
		case 155:
			return "HM_FIENDS_3";
			break;
		case 156:
			return "HM_CREAT_0";
			break;
		case 157:
			return "HM_CREAT_1";
			break;
		case 158:
			return "HM_CREAT_2";
			break;
		case 159:
			return "HM_CREAT_3";
			break;
		case 160:
			return "HM_WICKED_0";
			break;
		case 161:
			return "HM_WICKED_1";
			break;
		case 162:
			return "HM_WICKED_2";
			break;
		case 163:
			return "HM_WICKED_3";
			break;
	}
	switch (iParam0)
	{
		case 164:
			return "CH_MSK_DFLT_0" /* GXT: Black Ballistic */;
			break;
		case 165:
			return "CH_MSK_DFLT_1" /* GXT: Carbon Ballistic */;
			break;
		case 166:
			return "CH_MSK_GEOM_0" /* GXT: Geo Fox */;
			break;
		case 167:
			return "CH_MSK_GEOM_1" /* GXT: Geo Ginger & White Cat */;
			break;
		case 168:
			return "CH_MSK_GEOM_2" /* GXT: Geo Gray & White Cat */;
			break;
		case 169:
			return "CH_MSK_GEOM_3" /* GXT: Geo Black & White Cat */;
			break;
		case 170:
			return "CH_MSK_GEOM_4" /* GXT: Geo Pig */;
			break;
		case 171:
			return "CH_MSK_GEOM_5" /* GXT: Geo Gold Dog */;
			break;
		case 172:
			return "CH_MSK_GEOM_6" /* GXT: Geo White Dog */;
			break;
		case 173:
			return "CH_MSK_GEOM_7" /* GXT: Geo Brown Dog */;
			break;
		case 174:
			return "CH_MSK_GEOM_8" /* GXT: Geo Gray Dog */;
			break;
		case 175:
			return "CH_MSK_HUNT_0" /* GXT: Baby Smile */;
			break;
		case 176:
			return "CH_MSK_HUNT_1" /* GXT: Fig */;
			break;
		case 177:
			return "CH_MSK_HUNT_2" /* GXT: Piggly */;
			break;
		case 178:
			return "CH_MSK_HUNT_3" /* GXT: Ape */;
			break;
		case 179:
			return "CH_MSK_HUNT_4" /* GXT: Grinner */;
			break;
		case 180:
			return "CH_MSK_HUNT_5" /* GXT: Fluffy Rabbit */;
			break;
		case 181:
			return "CH_MSK_HUNT_6" /* GXT: Sniper */;
			break;
		case 182:
			return "CH_MSK_HUNT_7" /* GXT: Fleshless */;
			break;
		case 183:
			return "CH_MSK_HUNT_8" /* GXT: Voyeur */;
			break;
		case 184:
			return "CH_MSK_HUNT_9" /* GXT: Cerberus */;
			break;
		case 185:
			return "CH_MSK_ONIH_0" /* GXT: Red Oni Half-Mask */;
			break;
		case 186:
			return "CH_MSK_ONIH_1" /* GXT: Yellow Oni Half-Mask */;
			break;
		case 187:
			return "CH_MSK_ONIH_2" /* GXT: Green Oni Half-Mask */;
			break;
		case 188:
			return "CH_MSK_ONIH_3" /* GXT: White Ornate Oni Half-Mask */;
			break;
		case 189:
			return "CH_MSK_ONIH_4" /* GXT: Red Ornate Oni Half-Mask */;
			break;
		case 190:
			return "CH_MSK_ONIH_5" /* GXT: Gold Ornate Oni Half-Mask */;
			break;
		case 191:
			return "CH_MSK_EMOJ_0" /* GXT: Grin */;
			break;
		case 192:
			return "CH_MSK_EMOJ_1" /* GXT: Cry */;
			break;
		case 193:
			return "CH_MSK_EMOJ_2" /* GXT: Laugh */;
			break;
		case 194:
			return "CH_MSK_EMOJ_3" /* GXT: Grimace */;
			break;
		case 195:
			return "CH_MSK_EMOJ_4" /* GXT: In Love */;
			break;
		case 196:
			return "CH_MSK_EMOJ_5" /* GXT: Blow Kiss */;
			break;
		case 197:
			return "CH_MSK_EMOJ_6" /* GXT: Gasp */;
			break;
		case 198:
			return "CH_MSK_EMOJ_7" /* GXT: Wink */;
			break;
		case 199:
			return "CH_MSK_SKUL_0" /* GXT: Red Ornate Skull */;
			break;
		case 200:
			return "CH_MSK_SKUL_1" /* GXT: Silver Ornate Skull */;
			break;
		case 201:
			return "CH_MSK_SKUL_2" /* GXT: Blue Ornate Skull */;
			break;
		case 202:
			return "CH_MSK_SKUL_3" /* GXT: Teal Ornate Skull */;
			break;
		case 203:
			return "CH_MSK_SKUL_4" /* GXT: White Ornate Skull */;
			break;
		case 204:
			return "CH_MSK_SKUL_5" /* GXT: Black Ornate Skull */;
			break;
		case 205:
			return "CH_MSK_LFRU_0" /* GXT: Strawberry */;
			break;
		case 206:
			return "CH_MSK_LFRU_1" /* GXT: Lemon */;
			break;
		case 207:
			return "CH_MSK_LFRU_2" /* GXT: Grapes */;
			break;
		case 208:
			return "CH_MSK_LFRU_3" /* GXT: Pineapple */;
			break;
		case 209:
			return "CH_MSK_LFRU_4" /* GXT: Cherries */;
			break;
		case 210:
			return "CH_MSK_LFRU_5" /* GXT: Lucky Seven */;
			break;
		case 211:
			return "CH_MSK_GUER_0" /* GXT: Scruffy Balaclava */;
			break;
		case 212:
			return "CH_MSK_GUER_1" /* GXT: White Knit Balaclava */;
			break;
		case 213:
			return "CH_MSK_GUER_2" /* GXT: Charcoal Toggle Ski */;
			break;
		case 214:
			return "CH_MSK_GUER_3" /* GXT: White Ski */;
			break;
		case 215:
			return "CH_MSK_GUER_4" /* GXT: Black Loose Balaclava */;
			break;
		case 216:
			return "CH_MSK_GUER_5" /* GXT: White T-Shirt */;
			break;
		case 217:
			return "CH_MSK_GUER_6" /* GXT: Black Knit Balaclava */;
			break;
		case 218:
			return "CH_MSK_GUER_7" /* GXT: Ash Scruffy */;
			break;
		case 219:
			return "CH_MSK_GUER_8" /* GXT: Black T-Shirt */;
			break;
		case 220:
			return "CH_MSK_CLWN_0" /* GXT: Sinister Clown */;
			break;
		case 221:
			return "CH_MSK_CLWN_1" /* GXT: Franken Clown */;
			break;
		case 222:
			return "CH_MSK_CLWN_2" /* GXT: Neon Clown */;
			break;
		case 223:
			return "CH_MSK_CLWN_3" /* GXT: Scavenger Clown */;
			break;
		case 224:
			return "CH_MSK_CLWN_4" /* GXT: Orange Clown */;
			break;
		case 225:
			return "CH_MSK_CLWN_5" /* GXT: Green Clown */;
			break;
		case 226:
			return "CH_MSK_CLWN_6" /* GXT: Blue Clown */;
			break;
		case 227:
			return "CH_MSK_CLWN_7" /* GXT: Red Clown */;
			break;
		case 228:
			return "CH_MSK_ANIM_0" /* GXT: Grey Wolf */;
			break;
		case 229:
			return "CH_MSK_ANIM_1" /* GXT: Silverback Crazed Ape */;
			break;
		case 230:
			return "CH_MSK_ANIM_2" /* GXT: Black Bull */;
			break;
		case 231:
			return "CH_MSK_ANIM_3" /* GXT: Pinto Horse */;
			break;
		case 232:
			return "CH_MSK_ANIM_4" /* GXT: Brown Bear */;
			break;
		case 233:
			return "CH_MSK_ANIM_5" /* GXT: Golden Bison */;
			break;
		case 234:
			return "CH_MSK_ANIM_6" /* GXT: Red Fox */;
			break;
		case 235:
			return "CH_MSK_ANIM_7" /* GXT: Gray Cat */;
			break;
		case 236:
			return "CH_MSK_RIOT_0" /* GXT: Rainbow Knit */;
			break;
		case 237:
			return "CH_MSK_RIOT_1" /* GXT: Bright Green Scruffy */;
			break;
		case 238:
			return "CH_MSK_RIOT_2" /* GXT: Sunrise Knit */;
			break;
		case 239:
			return "CH_MSK_RIOT_3" /* GXT: Vibrant Scruffy */;
			break;
		case 240:
			return "CH_MSK_RIOT_4" /* GXT: Orange & Red Tight Ski */;
			break;
		case 241:
			return "CH_MSK_RIOT_5" /* GXT: Vibrant Tight Ski */;
			break;
		case 242:
			return "CH_MSK_RIOT_6" /* GXT: Blue Luchador Knit */;
			break;
		case 243:
			return "CH_MSK_RIOT_7" /* GXT: Bright Stripe Knit */;
			break;
		case 244:
			return "CH_MSK_ONIF_0" /* GXT: Red Oni */;
			break;
		case 245:
			return "CH_MSK_ONIF_1" /* GXT: Blue Oni */;
			break;
		case 246:
			return "CH_MSK_ONIF_2" /* GXT: White Oni */;
			break;
		case 247:
			return "CH_MSK_ONIF_3" /* GXT: Black Oni */;
			break;
		case 248:
			return "CH_MSK_ONIF_4" /* GXT: Gold Oni */;
			break;
		case 249:
			return "CH_MSK_ONIF_5" /* GXT: Green Oni */;
			break;
		case 250:
			return "CH_MSK_HOCK_0" /* GXT: Geometric */;
			break;
		case 251:
			return "CH_MSK_HOCK_1" /* GXT: Abstract */;
			break;
		case 252:
			return "CH_MSK_HOCK_2" /* GXT: Harlequin Bigness SN */;
			break;
		case 253:
			return "CH_MSK_HOCK_3" /* GXT: Wild */;
			break;
		case 254:
			return "CH_MSK_HOCK_4" /* GXT: Orange Fall */;
			break;
		case 255:
			return "CH_MSK_HOCK_5" /* GXT: Striped Rampage */;
			break;
		case 256:
			return "CH_MSK_HOCK_6" /* GXT: Dust Devils */;
			break;
		case 257:
			return "CH_MSK_HOCK_7" /* GXT: Crossed Rampage */;
			break;
	}
	switch (iParam0)
	{
		case 258:
			return "MASK_IH_BHALF_0" /* GXT: Blue Bigness Face */;
		case 259:
			return "MASK_IH_BHALF_1" /* GXT: Magenta Bigness Face */;
		case 260:
			return "MASK_IH_BHALF_2" /* GXT: Camo Bigness Face */;
		case 261:
			return "MASK_IH_BHALF_3" /* GXT: Bold Abstract Bigness Face */;
		case 262:
			return "MASK_IH_BHALF_4" /* GXT: Yellow Camo Face */;
		case 263:
			return "MASK_IH_BHALF_5" /* GXT: Black Pattern Face */;
		case 264:
			return "MASK_IH_BHALF_6" /* GXT: Yellow VDG Face */;
		case 265:
			return "MASK_IH_BHALF_7" /* GXT: Yellow Bigness Logo Face */;
		case 266:
			return "MASK_IH_PFULL_0" /* GXT: Island Painted */;
		case 267:
			return "MASK_IH_PFULL_1" /* GXT: Red Flames Painted */;
		case 268:
			return "MASK_IH_PFULL_2" /* GXT: Blue Grotesque Painted */;
		case 269:
			return "MASK_IH_PFULL_3" /* GXT: Palm Print Painted */;
		case 270:
			return "MASK_IH_PFULL_4" /* GXT: Red Grin Painted */;
		case 271:
			return "MASK_IH_PFULL_5" /* GXT: Black Tribal Painted */;
		case 272:
			return "MASK_IH_CSPEC_0" /* GXT: Green Digital Spec Ski */;
		case 273:
			return "MASK_IH_CSPEC_1" /* GXT: Gray Digital Spec Ski */;
		case 274:
			return "MASK_IH_CSPEC_2" /* GXT: Forest Camo Spec Ski */;
		case 275:
			return "MASK_IH_CSPEC_3" /* GXT: Field Camo Spec Ski */;
		case 276:
			return "MASK_IH_CSPEC_4" /* GXT: Moss Spec Ski */;
		case 277:
			return "MASK_IH_CSPEC_5" /* GXT: Green Shard Spec Ski */;
		case 278:
			return "MASK_IH_NGAIT_0" /* GXT: Red Botanical Neck Gaiter */;
		case 279:
			return "MASK_IH_NGAIT_1" /* GXT: Black Botanical Neck Gaiter */;
		case 280:
			return "MASK_IH_NGAIT_2" /* GXT: Flamingo Neck Gaiter */;
		case 281:
			return "MASK_IH_NGAIT_3" /* GXT: Blue Neck Gaiter */;
		case 282:
			return "MASK_IH_NGAIT_4" /* GXT: Green Painted Neck Gaiter */;
		case 283:
			return "MASK_IH_NGAIT_5" /* GXT: Blue Ocean Neck Gaiter */;
		case 284:
			return "MASK_IH_NGAIT_6" /* GXT: Orange Ocean Neck Gaiter */;
		case 285:
			return "MASK_IH_NGAIT_7" /* GXT: Orange Butterfly Neck Gaiter */;
		case 286:
			return "MASK_IH_FWRAP_0" /* GXT: Gray Neck Gaiter */;
		case 287:
			return "MASK_IH_FWRAP_1" /* GXT: Red Neck Gaiter */;
		case 288:
			return "MASK_IH_FWRAP_2" /* GXT: White T-Shirt Mask */;
		case 289:
			return "MASK_IH_FWRAP_3" /* GXT: Tan T-Shirt Mask */;
		case 290:
			return "MASK_IH_FWRAP_4" /* GXT: Khaki Loose Balaclava */;
		case 291:
			return "MASK_IH_FWRAP_5" /* GXT: Red Loose Balaclava */;
		case 292:
			return "MASK_IH_NOPS_0" /* GXT: Black Tight Ski */;
		case 293:
			return "MASK_IH_NOPS_1" /* GXT: Charcoal Toggle Ski */;
		case 294:
			return "MASK_IH_NOPS_2" /* GXT: Black Loose Balaclava */;
		case 295:
			return "MASK_IH_NOPS_3" /* GXT: Black Knit Balaclava */;
		case 296:
			return "MASK_IH_NVISI_0" /* GXT: Binocular Night Vision */;
		case 297:
			return "MASK_IH_NVISI_1" /* GXT: Dual Scope Night Vision */;
		case 298:
			return "MASK_IH_NVISI_2" /* GXT: Single Scope Night Vision */;
		case 299:
			return "MASK_IH_NVISI_3" /* GXT: Monocular Night */;
		case 300:
			return "MASK_IH_CHALF_0" /* GXT: Light Woodland Tactical Ski */;
		case 301:
			return "MASK_IH_CHALF_1" /* GXT: Flecktarn Tactical Ski */;
		case 302:
			return "MASK_IH_CHALF_2" /* GXT: Brushstroke Tactical Ski */;
		case 303:
			return "MASK_IH_CHALF_3" /* GXT: Contrast Camo Tactical Ski */;
		case 304:
			return "MASK_IH_CHALF_4" /* GXT: Splinter Tactical Ski */;
		case 305:
			return "MASK_IH_CHALF_5" /* GXT: Moss Digital Tactical Ski */;
		case 306:
			return "MASK_IH_CHALF_6" /* GXT: Dark Woodland Tactical Ski */;
		case 307:
			return "MASK_IH_CHALF_7" /* GXT: Green Digital Tactical Ski */;
		case 308:
			return "MASK_IH_MNIGH_0" /* GXT: Gray Camo Night Vision */;
		case 309:
			return "MASK_IH_MNIGH_1" /* GXT: Moss Striped Night Vision */;
		case 310:
			return "MASK_IH_MNIGH_2" /* GXT: Contrast Camo Night Vision */;
		case 311:
			return "MASK_IH_MNIGH_3" /* GXT: Gray Woodland Night Vision */;
		case 312:
			return "MASK_IH_MNIGH_4" /* GXT: Woodland Night Vision */;
		case 313:
			return "MASK_IH_MNIGH_5" /* GXT: Brown Digital Night Vision */;
		case 314:
			return "MASK_IH_MNIGH_6" /* GXT: Green Digital Night Vision */;
		case 315:
			return "MASK_IH_MNIGH_7" /* GXT: Brown Camo Night Vision */;
		case 316:
			return "MASK_IH_IGUER_0" /* GXT: Orange Pattern T-Shirt */;
		case 317:
			return "MASK_IH_IGUER_1" /* GXT: Pink Tie Dye T-Shirt */;
		case 318:
			return "MASK_IH_IGUER_2" /* GXT: Far Out Tie Dye T-Shirt */;
		case 319:
			return "MASK_IH_IGUER_3" /* GXT: Aqua Tie Dye T-Shirt */;
		case 320:
			return "MASK_IH_IGUER_4" /* GXT: SA Republic T-Shirt */;
		case 321:
			return "MASK_IH_IGUER_5" /* GXT: Black Stars & Stripes T-Shirt */;
		case 322:
			return "MASK_IH_IGUER_6" /* GXT: Green & Pink T-Shirt */;
		case 323:
			return "MASK_IH_IGUER_7" /* GXT: Primary T-Shirt */;
		case 324:
			return "MASK_IH_PHOCK_0" /* GXT: Orange Fall Hockey */;
		case 325:
			return "MASK_IH_PHOCK_1" /* GXT: Fall Hockey */;
		case 326:
			return "MASK_IH_PHOCK_2" /* GXT: Gray Digital Hockey */;
		case 327:
			return "MASK_IH_PHOCK_3" /* GXT: Blue Digital Hockey */;
		case 328:
			return "MASK_IH_PHOCK_4" /* GXT: Geometric Hockey */;
		case 329:
			return "MASK_IH_PHOCK_5" /* GXT: Abstract Hockey */;
		case 330:
			return "MASK_IH_PHOCK_6" /* GXT: Woodland Camo Hockey */;
		case 331:
			return "MASK_IH_PHOCK_7" /* GXT: Dark Camo Hockey */;
		case 332:
			return "MASK_TN_FFACE_0" /* GXT: Stars & Stripes False Face */;
		case 333:
			return "MASK_TN_FFACE_1" /* GXT: Green Pattern False Face */;
		default:
	}
	return "INVALID";
}

int func_611(int iParam0, int iParam1, int iParam2)//Position - 0x2E1864
{
	if ((iParam1 == 998 || iParam0 == 3) || iParam0 == 253)
	{
		return 0;
	}
	if ((iParam0 == 8 || iParam1 == 9) || iParam1 == 8)
	{
		return 0;
	}
	if (iParam0 == 2)
	{
		if ((((iParam1 == 22 || iParam1 == 23) || iParam1 == 20) || iParam1 == 21) || iParam2 == 999)
		{
			return 1;
		}
	}
	if (iParam0 == 1)
	{
		if (iParam1 == 3 || iParam1 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 0 || iParam0 == 1)
	{
		switch (iParam2)
		{
			case 72:
			case 74:
			case 76:
			case 77:
			case 78:
			case 81:
			case 83:
			case 999:
				return 1;
			}
		default:
	}
	return 0;
}

int func_612()//Position - 0x2E5BC7
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_race_creator")) == 0)
	{
		return 0;
	}
	return (__LIB_0__.func_493() || Global_1922894);
}

bool func_613()//Position - 0x2E5D4D
{
	return BitTest(Global_1958736, 1);
}

void func_614(bool bParam0)//Position - 0x2E9357
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_4), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4), 7);
	}
}

int func_615(int iParam0)//Position - 0x2E9433
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 0;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
			return 1;
		default:
	}
	return 0;
}

bool func_616()//Position - 0x2E982B
{
	return Global_2715699.f_1.f_2842;
}

bool func_617(int iParam0)//Position - 0x2EA8D3
{
	return iParam0 == 61;
}

void func_618(var uParam0)//Position - 0x2EEE05
{
	if (uParam0->f_124.f_419)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_124.f_429);
		if (uParam0->f_1 == 39)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(MISC::GET_HASH_KEY("xs_Prop_Arena_Cash_Pile_M"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(MISC::GET_HASH_KEY("xs_Prop_Arena_Cash_Pile_S"));
		}
		else if (uParam0->f_1 == 62)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(MISC::GET_HASH_KEY("xs_Prop_Arena_Champ_Open"));
		}
	}
}

int func_619(int iParam0)//Position - 0x2EEEC3
{
	if (iParam0 == 58)
	{
		return 1;
	}
	return 0;
}

void func_620(var uParam0, bool bParam1)//Position - 0x2EF20E
{
	int iVar0;
	iVar0 = joaat("WEAPON_UNARMED");
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_122, &iVar0, true);
	if (!iVar0 == joaat("WEAPON_UNARMED") && !iVar0 == 0)
	{
		if (Global_1577985 == 0)
		{
			uParam0->f_123 = iVar0;
			WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_122, joaat("WEAPON_UNARMED"), true);
			if (bParam1)
			{
				uParam0->f_123 = joaat("WEAPON_UNARMED");
			}
		}
	}
}

void func_621(var uParam0)//Position - 0x2EF269
{
	if (!uParam0->f_107 & 1048576 == 0)
	{
		if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_122, 113, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_122, 113, false);
		}
	}
}

int func_622(var uParam0)//Position - 0x2EF741
{
	if (uParam0->f_124.f_430 == 0 || uParam0->f_108 >= uParam0->f_124.f_430)
	{
		return 1;
	}
	return 0;
}

int func_623(int iParam0)//Position - 0x2EFBD0
{
	int iVar0;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

int func_624(bool bParam0)//Position - 0x2EFE06
{
	if (bParam0)
	{
		if ((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/))
		{
			return 1;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/))
	{
		return 1;
	}
	return 0;
}

int func_625(var uParam0)//Position - 0x2EFE5A
{
	if (uParam0->f_106 && !uParam0->f_103 == 3)
	{
		return 1;
	}
	return 0;
}

int func_626(int iParam0)//Position - 0x2EFF6A
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (VEHICLE::IS_TURRET_SEAT(iVar0, __LIB_0__.func_306(iParam0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_627()//Position - 0x2F0063
{
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10 || Global_2671449.f_23 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_628(var uParam0)//Position - 0x2F010E
{
	int iVar0;
	iVar0 = uParam0;
	return (((((((((((((((iVar0 == 29 || iVar0 == 30) || iVar0 == 31) || iVar0 == 33) || iVar0 == 35) || iVar0 == 37) || iVar0 == 32) || iVar0 == 34) || iVar0 == 36) || iVar0 == 38) || iVar0 == 52) || iVar0 == 53) || iVar0 == 54) || iVar0 == 55) || iVar0 == 56) || iVar0 == 57);
}

int func_629()//Position - 0x2F02E9
{
	if (((((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/))
	{
		return 1;
	}
	return 0;
}

char* func_630(var uParam0)//Position - 0x2F1382
{
	switch (uParam0->f_1)
	{
		case 39:
			return "scr_xs_celebration";
		case 62:
			return "scr_ba_club";
		case 59:
			return "scr_mp_cig";
		default:
	}
	return "";
}

int func_631(var uParam0)//Position - 0x2F1770
{
	int iVar0;
	int iVar1;
	if (uParam0->f_124.f_419)
	{
		iVar0 = 1;
		iVar1 = 1;
		STREAMING::REQUEST_MODEL(uParam0->f_124.f_429);
		if (uParam0->f_1 == 39)
		{
			iVar0 = 0;
			STREAMING::REQUEST_MODEL(MISC::GET_HASH_KEY("xs_Prop_Arena_Cash_Pile_M"));
			if (STREAMING::HAS_MODEL_LOADED(MISC::GET_HASH_KEY("xs_Prop_Arena_Cash_Pile_M")))
			{
				iVar0 = 1;
			}
			iVar1 = 0;
			STREAMING::REQUEST_MODEL(MISC::GET_HASH_KEY("xs_Prop_Arena_Cash_Pile_S"));
			if (STREAMING::HAS_MODEL_LOADED(MISC::GET_HASH_KEY("xs_Prop_Arena_Cash_Pile_S")))
			{
				iVar1 = 1;
			}
		}
		else if (uParam0->f_1 == 62)
		{
			iVar1 = 0;
			STREAMING::REQUEST_MODEL(MISC::GET_HASH_KEY("xs_Prop_Arena_Champ_Open"));
			if (STREAMING::HAS_MODEL_LOADED(MISC::GET_HASH_KEY("xs_Prop_Arena_Champ_Open")))
			{
				iVar1 = 1;
			}
		}
		if ((STREAMING::HAS_MODEL_LOADED(uParam0->f_124.f_429) && iVar0) && iVar1)
		{
			return 1;
		}
		else
		{
			MISC::SET_BIT(&(Global_1940663[1]), 9);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_632(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11)//Position - 0x2F1AAA
{
	if ((((((((uParam2 || uParam3) || uParam4) || uParam5) || uParam6) || uParam7) || bParam8) || bParam10) || bParam11)
	{
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 9:
					(*uParam9)[0] = 1;
					StringCopy(&(uParam9->f_10[0 /*16*/]), "Knuckle_Crack_Slap", 64);
					uParam9->f_75[0] = 0.806f;
					uParam9->f_80[0] = 0;
					(*uParam9)[1] = 1;
					StringCopy(&(uParam9->f_10[1 /*16*/]), "Knuckle_Crack_Soft", 64);
					uParam9->f_75[1] = 0.116f;
					uParam9->f_80[1] = 1;
					(*uParam9)[2] = 1;
					StringCopy(&(uParam9->f_10[2 /*16*/]), "Knuckle_Crack_Soft", 64);
					uParam9->f_75[2] = 0.562f;
					uParam9->f_80[2] = 1;
					(*uParam9)[3] = 1;
					StringCopy(&(uParam9->f_10[3 /*16*/]), "Knuckle_Crack_Hard", 64);
					uParam9->f_75[3] = 0.395f;
					uParam9->f_80[3] = 2;
					break;
				case 11:
					(*uParam9)[0] = 1;
					StringCopy(&(uParam9->f_10[0 /*16*/]), "Slow_Clap", 64);
					uParam9->f_75[0] = 0.82f;
					uParam9->f_80[0] = 0;
					(*uParam9)[1] = 1;
					StringCopy(&(uParam9->f_10[1 /*16*/]), "Slow_Clap", 64);
					uParam9->f_75[1] = 0.861f;
					uParam9->f_80[1] = 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 60:
				case 63:
					(*uParam9)[0] = 1;
					StringCopy(&(uParam9->f_10[0 /*16*/]), "Can_Initial", 64);
					uParam9->f_75[0] = 0.9f;
					uParam9->f_80[0] = 0;
					(*uParam9)[1] = 1;
					StringCopy(&(uParam9->f_10[1 /*16*/]), "Can_Gulp", 64);
					uParam9->f_75[1] = 0.313f;
					uParam9->f_80[1] = 1;
					(*uParam9)[2] = 1;
					StringCopy(&(uParam9->f_10[2 /*16*/]), "Can_Swallow", 64);
					uParam9->f_75[2] = 0.15f;
					uParam9->f_80[2] = 2;
					break;
				case 61:
					(*uParam9)[0] = 1;
					StringCopy(&(uParam9->f_10[0 /*16*/]), "Bottle_Initial", 64);
					uParam9->f_75[0] = 0.526f;
					uParam9->f_80[0] = 0;
					(*uParam9)[1] = 1;
					StringCopy(&(uParam9->f_10[1 /*16*/]), "Bottle_Initial", 64);
					uParam9->f_75[1] = 0.225f;
					uParam9->f_80[1] = 1;
					(*uParam9)[2] = 1;
					StringCopy(&(uParam9->f_10[2 /*16*/]), "Bottle_Initial", 64);
					uParam9->f_75[2] = 0.24f;
					uParam9->f_80[2] = 2;
					break;
				case 64:
					(*uParam9)[0] = 1;
					StringCopy(&(uParam9->f_10[0 /*16*/]), "PNQ_Start", 64);
					uParam9->f_75[0] = 0.632f;
					uParam9->f_80[0] = 0;
					(*uParam9)[1] = 1;
					StringCopy(&(uParam9->f_10[1 /*16*/]), "PNQ_Eat", 64);
					uParam9->f_75[1] = 0.3f;
					uParam9->f_80[1] = 1;
					(*uParam9)[2] = 1;
					StringCopy(&(uParam9->f_10[2 /*16*/]), "PNQ_Swallow", 64);
					uParam9->f_75[2] = 0.32f;
					uParam9->f_80[2] = 2;
					break;
				case 65:
					(*uParam9)[0] = 1;
					StringCopy(&(uParam9->f_10[0 /*16*/]), "Bar_Eat", 64);
					uParam9->f_75[0] = 0.452f;
					uParam9->f_80[0] = 1;
					(*uParam9)[1] = 1;
					StringCopy(&(uParam9->f_10[1 /*16*/]), "Bar_Swallow", 64);
					uParam9->f_75[1] = 0.105f;
					uParam9->f_80[1] = 2;
					break;
				case 66:
					(*uParam9)[0] = 1;
					StringCopy(&(uParam9->f_10[0 /*16*/]), "Bar_Eat", 64);
					uParam9->f_75[0] = 0.452f;
					uParam9->f_80[0] = 1;
					(*uParam9)[1] = 1;
					StringCopy(&(uParam9->f_10[1 /*16*/]), "Bar_Swallow", 64);
					uParam9->f_75[1] = 0.105f;
					uParam9->f_80[1] = 2;
					break;
				case 8:
					if (bParam8)
					{
						if (bParam10)
						{
							(*uParam9)[0] = 1;
							StringCopy(&(uParam9->f_10[0 /*16*/]), "Knuckle_Crack_Hard", 64);
							uParam9->f_75[0] = 0.135f;
							uParam9->f_80[0] = 3;
							(*uParam9)[1] = 1;
							StringCopy(&(uParam9->f_10[1 /*16*/]), "Knuckle_Crack_Soft", 64);
							uParam9->f_75[1] = 0.327f;
							uParam9->f_80[1] = 3;
							(*uParam9)[2] = 1;
							StringCopy(&(uParam9->f_10[2 /*16*/]), "Knuckle_Crack_Slap", 64);
							uParam9->f_75[2] = 0.498f;
							uParam9->f_80[2] = 3;
							(*uParam9)[3] = 1;
							StringCopy(&(uParam9->f_10[3 /*16*/]), "Knuckle_Crack_Slap", 64);
							uParam9->f_75[3] = 0.628f;
							uParam9->f_80[3] = 3;
						}
						else
						{
							(*uParam9)[0] = 1;
							StringCopy(&(uParam9->f_10[0 /*16*/]), "Knuckle_Crack_Hard", 64);
							uParam9->f_75[0] = 0.128f;
							uParam9->f_80[0] = 3;
							(*uParam9)[1] = 1;
							StringCopy(&(uParam9->f_10[1 /*16*/]), "Knuckle_Crack_Hard", 64);
							uParam9->f_75[1] = 0.295f;
							uParam9->f_80[1] = 3;
							(*uParam9)[2] = 1;
							StringCopy(&(uParam9->f_10[2 /*16*/]), "Knuckle_Crack_Soft", 64);
							uParam9->f_75[2] = 0.453f;
							uParam9->f_80[2] = 3;
							(*uParam9)[3] = 1;
							StringCopy(&(uParam9->f_10[3 /*16*/]), "Knuckle_Crack_Soft", 64);
							uParam9->f_75[3] = 0.589f;
							uParam9->f_80[3] = 3;
						}
					}
					else
					{
						(*uParam9)[0] = 1;
						StringCopy(&(uParam9->f_10[0 /*16*/]), "Knuckle_Crack_Hard", 64);
						uParam9->f_75[0] = 0.541f;
						uParam9->f_80[0] = 0;
						if (bParam11)
						{
							(*uParam9)[1] = 1;
							StringCopy(&(uParam9->f_10[1 /*16*/]), "Knuckle_Crack_Soft", 64);
							uParam9->f_75[1] = 0.05f;
							uParam9->f_80[1] = 1;
							(*uParam9)[2] = 1;
							StringCopy(&(uParam9->f_10[2 /*16*/]), "Knuckle_Crack_Soft", 64);
							uParam9->f_75[2] = 0.57f;
							uParam9->f_80[2] = 1;
						}
						else
						{
							(*uParam9)[1] = 1;
							StringCopy(&(uParam9->f_10[1 /*16*/]), "Knuckle_Crack_Soft", 64);
							uParam9->f_75[1] = 0.081f;
							uParam9->f_80[1] = 1;
							(*uParam9)[2] = 1;
							StringCopy(&(uParam9->f_10[2 /*16*/]), "Knuckle_Crack_Soft", 64);
							uParam9->f_75[2] = 0.543f;
							uParam9->f_80[2] = 1;
						}
					}
					break;
				case 9:
					if (bParam8)
					{
						(*uParam9)[0] = 1;
						StringCopy(&(uParam9->f_10[0 /*16*/]), "Slow_Clap_Cel", 64);
						uParam9->f_75[0] = 0.152f;
						uParam9->f_80[0] = 3;
						(*uParam9)[1] = 1;
						StringCopy(&(uParam9->f_10[1 /*16*/]), "Slow_Clap_Cel", 64);
						uParam9->f_75[1] = 0.371f;
						uParam9->f_80[1] = 3;
						(*uParam9)[2] = 1;
						StringCopy(&(uParam9->f_10[2 /*16*/]), "Slow_Clap_Cel", 64);
						uParam9->f_75[2] = 0.595f;
						uParam9->f_80[2] = 3;
					}
					else
					{
						(*uParam9)[0] = 1;
						StringCopy(&(uParam9->f_10[0 /*16*/]), "Slow_Clap", 64);
						uParam9->f_75[0] = 0.99f;
						uParam9->f_80[0] = 0;
						(*uParam9)[1] = 1;
						StringCopy(&(uParam9->f_10[1 /*16*/]), "Slow_Clap", 64);
						uParam9->f_75[1] = 0.99f;
						uParam9->f_80[1] = 1;
					}
					break;
			}
			break;
	}
}

int func_633(int iParam0)//Position - 0x2F23CB
{
	switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
	{
		case joaat("LAYOUT_LOW_RACER_FORMULA"):
			return 1;
			break;
	}
	return 0;
}

int func_634(int iParam0)//Position - 0x2F24B3
{
	switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
	{
		case joaat("LAYOUT_LOW"):
		case joaat("LAYOUT_LOW_INFERNUS"):
		case joaat("LAYOUT_LOW_DUNE"):
		case joaat("LAYOUT_LOW_BFINJECTION"):
		case joaat("LAYOUT_LOW_CHEETAH"):
		case joaat("LAYOUT_LOW_ENTITYXF"):
		case joaat("LAYOUT_LOW_RESTRICTED"):
		case joaat("LAYOUT_LOW_SENTINEL2"):
		case joaat("LAYOUT_LOW_TURISMOR"):
		case joaat("LAYOUT_LOW_BLADE"):
		case joaat("LAYOUT_LOW_FURORE"):
		case joaat("LAYOUT_LOW_OSIRIS"):
		case joaat("LAYOUT_LOW_LOWRIDER"):
		case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
		case joaat("LAYOUT_LOW_VERLIERER"):
		case joaat("LAYOUT_LOW_LOWRIDER_FACTION3"):
		case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
		case joaat("LAYOUT_LOW_LOWRIDER2"):
		case joaat("LAYOUT_LOW_PROTO"):
		case joaat("LAYOUT_LOW_LE7B"):
		case joaat("LAYOUT_LOW_RUINER2"):
		case joaat("LAYOUT_LOW_INFERNUS2"):
		case joaat("LAYOUT_LOW_RUSTON"):
		case joaat("LAYOUT_LOW_TAMPA3"):
		case joaat("LAYOUT_LOW_TORERO"):
		case joaat("LAYOUT_LOW_VISIONE"):
		case joaat("LAYOUT_LOW_VIGILANTE"):
		case joaat("LAYOUT_LOW_SC1"):
		case joaat("LAYOUT_LOW_STROMBERG"):
		case joaat("LAYOUT_LOW_MICHELLI"):
		case joaat("LAYOUT_LOW_TEZERACT"):
		case joaat("LAYOUT_LOW_DOMINATOR3"):
		case joaat("LAYOUT_LOW_TAIPAN"):
		case joaat("LAYOUT_LOW_RESTRICTED_SCRAMJET"):
		case joaat("LAYOUT_LOW_RESTRICTED_SWINGER"):
		case joaat("LAYOUT_LOW_ITALIGTO"):
		case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
		case joaat("LAYOUT_LOW_ISSI7"):
		case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
		case joaat("LAYOUT_LOW_RESTRICTED_EMERUS"):
		case joaat("LAYOUT_LOW_NEO"):
		case joaat("LAYOUT_LOW_KRIEGER"):
		case joaat("LAYOUT_LOW_S80"):
		case joaat("LAYOUT_LOW_TOREADOR"):
		case joaat("LAYOUT_LOW_PEYOTE3"):
		case joaat("LAYOUT_LOW_TIGON"):
		case joaat("LAYOUT_LOW_CALICO"):
		case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
		case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
		case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
		case joaat("LAYOUT_LOW_ZR350"):
		case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
		case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
		case joaat("LAYOUT_LOW_TORERO2"):
			return 1;
			break;
	}
	return 0;
}

int func_635(int iParam0)//Position - 0x2F2612
{
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_636(int iParam0)//Position - 0x2F28B3
{
	if (!Global_4521801.f_930 == 0)
	{
		if (iParam0 || !Global_4521801.f_930 == 4)
		{
			return 1;
		}
	}
	return 0;
}

int func_637(var uParam0)//Position - 0x2F28E2
{
	if (uParam0->f_1863)
	{
		return 1;
	}
	return 0;
}

char* func_638(int iParam0, int iParam1)//Position - 0x2F318F
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 29:
					return "BONEMASK_HEAD_NECK_AND_L_ARM";
					break;
				case 31:
					return "BONEMASK_HEAD_NECK_AND_R_ARM";
					break;
				case 32:
				case 35:
					return "BONEMASK_HEAD_NECK_AND_R_ARM";
					break;
				case 6:
					return "BONEMASK_HEAD_NECK_AND_ARMS";
					break;
				case 41:
					return "BONEMASK_HEAD_NECK_AND_R_ARM";
					break;
			}
			break;
	}
	return "BONEMASK_HEAD_NECK_AND_ARMS";
}

int func_639(int iParam0)//Position - 0x2F3244
{
	switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
	{
		case joaat("LAYOUT_VAN_BODHI"):
		case joaat("LAYOUT_BISON"):
		case joaat("LAYOUT_VAN"):
		case joaat("LAYOUT_VAN_BOXVILLE"):
		case joaat("LAYOUT_VAN_CADDY"):
		case joaat("LAYOUT_VAN_JOURNEY"):
		case joaat("LAYOUT_VAN_MULE"):
		case joaat("LAYOUT_VAN_POLICE"):
		case joaat("LAYOUT_VAN_PONY"):
		case joaat("LAYOUT_VAN_TRASH"):
		case joaat("LAYOUT_VAN_ARMORED"):
		case joaat("LAYOUT_VAN_ROOSEVELT"):
		case joaat("LAYOUT_VAN_RUMPO3"):
		case joaat("LAYOUT_TRUCK_PHANTOMBULL"):
		case joaat("LAYOUT_TRUCK_WASTELANDER"):
		case joaat("LAYOUT_VAN_CADDY3"):
		case joaat("LAYOUT_RANGER_RIATA"):
		case joaat("LAYOUT_RANGER_PATRIOT2"):
		case joaat("LAYOUT_TRUCK_POUNDER2"):
		case joaat("LAYOUT_VAN_MULE4"):
		case joaat("LAYOUT_VAN_SPEEDO4"):
		case joaat("LAYOUT_VAN_FREECRAWLER"):
		case joaat("LAYOUT_TRUCK_TERBYTE"):
		case joaat("LAYOUT_RANGER_TOROS"):
		case joaat("LAYOUT_VAN_BRUTUS"):
		case joaat("LAYOUT_RANGER_CARACARA2"):
		case joaat("LAYOUT_RANGER_NOVAK"):
		case joaat("LAYOUT_RANGER_EVERON"):
		case joaat("LAYOUT_RANGER_SEMINOLE2"):
		case joaat("LAYOUT_JEEP_WINKY"):
		case joaat("LAYOUT_SLAMTRUCK"):
		case joaat("LAYOUT_TRUCK_VETIR"):
		case joaat("LAYOUT_SQUADDIE"):
		case joaat("LAYOUT_VETO"):
			return 1;
			break;
	}
	return 0;
}

int func_640(int iParam0)//Position - 0x2F332B
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
			break;
	}
	return 0;
}

int func_641(int iParam0)//Position - 0x2F3372
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			iVar1 = 0;
			while (iVar1 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) + 1)
			{
				iVar2 = (iVar1 - 1);
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar2, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, false) == iParam0)
					{
						return iVar2;
					}
				}
				iVar1++;
			}
		}
	}
	return iVar2;
}

int func_642(int iParam0)//Position - 0x2F33D8
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
		if (iVar0 == 0)
		{
			return 0;
		}
		iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
		if ((((((iVar1 == joaat("GROUP_RIFLE") || iVar1 == joaat("GROUP_SHOTGUN")) || iVar1 == joaat("GROUP_SNIPER")) || iVar1 == joaat("GROUP_HEAVY")) || iVar1 == joaat("GROUP_SNIPER")) || iVar1 == joaat("GROUP_MG")) || iVar1 == joaat("GROUP_RUBBERGUN"))
		{
			return 1;
		}
		if (iVar1 == joaat("GROUP_SMG"))
		{
			if (iVar0 == joaat("WEAPON_SMG") || iVar0 == joaat("WEAPON_ASSAULTSMG"))
			{
				return 1;
			}
		}
		if (iVar1 == joaat("GROUP_MELEE"))
		{
			if (iVar0 == joaat("WEAPON_POOLCUE") || iVar0 == joaat("WEAPON_GOLFCLUB"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_643(int iParam0, int iParam1)//Position - 0x2F37BF
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 29:
				case 30:
					if (Global_262145.f_12056 /* Tunable: TURN_ON_HALLOWEEN_ANIMS */ == 0)
					{
						return 1;
					}
					break;
				case 0:
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 27:
				case 28:
					if (Global_262145.f_12056 /* Tunable: TURN_ON_HALLOWEEN_ANIMS */ == 0)
					{
						return 1;
					}
					break;
				case 58:
					if (!__LIB_0__.func_137(34372, -1))
					{
						return 1;
					}
					break;
				case 39:
					if (Global_262145.f_25923 /* Tunable: 529072549 */ == 1)
					{
						return 1;
					}
					break;
				case 0:
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_644(int iParam0, int iParam1)//Position - 0x2F386F
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 39:
					if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_25909 /* Tunable: 1286787971 */, false, false, false, -1, 0))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
	}
	return 1;
}

int func_645()//Position - 0x2F38EE
{
	if (__LIB_4__.func_250())
	{
		return 0;
	}
	return BitTest(Global_2815059.f_4660, 24);
}

int func_646(int iParam0, int iParam1)//Position - 0x2F390B
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 60:
				case 61:
				case 62:
				case 63:
				case 64:
				case 65:
				case 66:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_647()//Position - 0x2F395C
{
	if ((__LIB_0__.func_706() || Global_78317) || __LIB_3__.func_139(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_648()//Position - 0x2F3AD0
{
	return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_GTAO/SNACKS", false, -1);
}

int func_649()//Position - 0x2F3EB4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return NETWORK::GET_NETWORK_TIME();
	}
	return MISC::GET_GAME_TIMER();
}

void func_650(var uParam0, int iParam1, bool bParam2)//Position - 0x2F4101
{
	int iVar0;
	if (iParam1 <= -1)
	{
		return;
	}
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_651(int iParam0)//Position - 0x2F415B
{
	switch (iParam0)
	{
		case joaat("prototipo"):
			return 0;
		case joaat("cheetah2"):
			return 1;
		case joaat("raptor"):
			return 2;
		case joaat("italigtb"):
			return 3;
		case joaat("italigtb2"):
			return 4;
		case joaat("formula"):
			return 5;
		case joaat("formula2"):
			return 6;
		case joaat("phantom"):
			return 7;
		case joaat("wastelander"):
			return 8;
		case joaat("speedo4"):
			return 9;
		case joaat("openwheel1"):
			return 10;
		case joaat("openwheel2"):
			return 11;
		case joaat("slamtruck"):
			return 12;
		default:
	}
	return -1;
}

int func_652(int iParam0)//Position - 0x2F4697
{
	if ((!PED::GET_PED_STEALTH_MOVEMENT(iParam0) && !PED::IS_PED_DUCKING(iParam0)) && PED::GET_PED_COMBAT_MOVEMENT(iParam0) == 0)
	{
		return 1;
	}
	return 0;
}

int func_653(int iParam0)//Position - 0x2F4751
{
	float fVar0;
	fVar0 = MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iParam0) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 + -360f);
	}
	fVar0 = MISC::ABSF(fVar0);
	if (fVar0 > 40f)
	{
		return 1;
	}
	return 0;
}

int func_654(int iParam0)//Position - 0x2F479B
{
	switch (iParam0)
	{
		case -1:
		case 1:
		case 3:
		case 5:
		case 7:
			return 1;
			break;
	}
	return 0;
}

void func_655(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x2F483A
{
	*uParam2 = { Global_4522782 };
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					break;
				case 1:
					StringCopy(uParam2[1 /*16*/], "amb@code_human_in_car_mp_actions@smoke@low@ps@base", 64);
					StringCopy(uParam2[4 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@rds@base", 64);
					StringCopy(uParam2[5 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@rps@base", 64);
					StringCopy(uParam2[3 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@ps@base", 64);
					StringCopy(uParam2[8 /*16*/], "amb@code_human_in_car_mp_actions@smoke@bodhi@rps@base", 64);
					StringCopy(uParam2[9 /*16*/], "amb@code_human_in_car_mp_actions@smoke@bodhi@rps@base", 64);
					StringCopy(uParam2[6 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@ds@base", 64);
					StringCopy(uParam2[7 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@ps@base", 64);
					StringCopy(uParam2[2 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@ds@base", 64);
					StringCopy(uParam2[0 /*16*/], "amb@code_human_in_car_mp_actions@smoke@low@ds@base", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke_car", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth_car", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse_car", 64);
					uParam2->f_430 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					break;
				case 2:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarfingerlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarfingerstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarfingerstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarfingerstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarfingerbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarfingerbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarfingerbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarfingerbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarfingerstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarfingerlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 3:
					StringCopy(uParam2[1 /*16*/], "amb@code_human_in_car_mp_actions@dance@low@ps@base", 64);
					StringCopy(uParam2[4 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@rds@base", 64);
					StringCopy(uParam2[5 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@rps@base", 64);
					StringCopy(uParam2[3 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@ps@base", 64);
					StringCopy(uParam2[8 /*16*/], "amb@code_human_in_car_mp_actions@dance@bodhi@rds@base", 64);
					StringCopy(uParam2[9 /*16*/], "amb@code_human_in_car_mp_actions@dance@bodhi@rds@base", 64);
					StringCopy(uParam2[6 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@ps@base", 64);
					StringCopy(uParam2[7 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@ds@base", 64);
					StringCopy(uParam2[2 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@ds@base", 64);
					StringCopy(uParam2[0 /*16*/], "amb@code_human_in_car_mp_actions@dance@low@ds@base", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					break;
				case 4:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarrocklow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarrockstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarrockstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarrockstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarrockbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarrockbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarrockbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarrockbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarrockstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarrocklow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 5:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarwanklow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarwankstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarwankstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarwankstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarwankbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarwankbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarwankbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarwankbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarwankstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarwanklow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 7:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarair_shagginglow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarair_shaggingstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarair_shaggingstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarair_shaggingstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarair_shaggingbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarair_shaggingbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarair_shaggingbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarair_shaggingbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarair_shaggingstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarair_shagginglow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					break;
				case 8:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincardocklow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincardockstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincardockstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincardockstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincardockbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincardockbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincardockbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincardockbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincardockstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincardocklow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 9:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarknuckle_crunchlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarknuckle_crunchstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarknuckle_crunchstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarknuckle_crunchstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarknuckle_crunchbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarknuckle_crunchbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarknuckle_crunchbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarknuckle_crunchbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarknuckle_crunchstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarknuckle_crunchlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_490 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 10:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarsalutelow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarsalutestd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarsalutestd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarsalutestd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarsalutebodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarsalutebodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarsalutebodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarsalutebodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarsalutestd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarsalutelow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 6:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarblow_kisslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarblow_kissstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarblow_kissstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarblow_kissstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarblow_kissbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarblow_kissbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarblow_kissbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarblow_kissbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarblow_kissstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarblow_kisslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					break;
				case 11:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarslow_claplow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarslow_clapstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarslow_clapstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarslow_clapstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarslow_clapbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarslow_clapbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarslow_clapbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarslow_clapbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarslow_clapstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarslow_claplow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_490 = 1;
					break;
				case 12:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarface_palmlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarface_palmstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarface_palmstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarface_palmstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarface_palmbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarface_palmbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarface_palmbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarface_palmbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarface_palmstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarface_palmlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 13:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarthumbs_uplow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarthumbs_upstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarthumbs_upstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarthumbs_upstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarthumbs_upbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarthumbs_upbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarthumbs_upbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarthumbs_upbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarthumbs_upstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarthumbs_uplow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 14:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarjazz_handslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarjazz_handsstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarjazz_handsstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarjazz_handsstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarjazz_handsbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarjazz_handsbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarjazz_handsbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarjazz_handsbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarjazz_handsstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarjazz_handslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 15:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarnose_picklow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarnose_pickstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarnose_pickstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarnose_pickstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarnose_pickbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarnose_pickbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarnose_pickbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarnose_pickbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarnose_pickstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarnose_picklow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 17:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarwavelow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarwavestd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarwavestd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarwavestd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarwavebodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarwavebodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarwavebodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarwavebodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarwavestd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarwavelow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 16:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarair_guitarlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarair_guitarstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarair_guitarstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarair_guitarstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarair_guitarbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarair_guitarbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarair_guitarbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarair_guitarbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarair_guitarstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarair_guitarlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 18:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarsurrenderlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarsurrenderstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarsurrenderstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarsurrenderstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarsurrenderbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarsurrenderbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarsurrenderbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarsurrenderbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarsurrenderstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarsurrenderlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 19:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarshushlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarshushstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarshushstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarshushstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarshushbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarshushbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarshushbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarshushbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarshushstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarshushlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 20:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarphotographylow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarphotographystd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarphotographystd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarphotographystd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarphotographybodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarphotographybodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarphotographybodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarphotographybodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarphotographystd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarphotographylow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 21:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincardjlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincardjstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincardjstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincardjstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincardjbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincardjbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincardjbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincardjbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincardjstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincardjlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 22:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarair_synthlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarair_synthstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarair_synthstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarair_synthstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarair_synthbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarair_synthbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarair_synthbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarair_synthbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarair_synthstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarair_synthlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 23:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarno_waylow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarno_waystd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarno_waystd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarno_waystd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarno_waybodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarno_waybodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarno_waybodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarno_waybodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarno_waystd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarno_waylow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 25:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarchin_brushlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarchin_brushstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarchin_brushstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarchin_brushstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarchin_brushbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarchin_brushbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarchin_brushbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarchin_brushbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarchin_brushstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarchin_brushlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 24:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarchicken_tauntlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarchicken_tauntstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarchicken_tauntstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarchicken_tauntstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarchicken_tauntbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarchicken_tauntbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarchicken_tauntbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarchicken_tauntbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarchicken_tauntstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarchicken_tauntlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 26:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarfinger_kisslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarfinger_kissstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarfinger_kissstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarfinger_kissstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarfinger_kissbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarfinger_kissbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarfinger_kissbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarfinger_kissbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarfinger_kissstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarfinger_kisslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 27:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarpeacelow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarpeacestd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarpeacestd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarpeacestd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarpeacebodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarpeacebodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarpeacebodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarpeacebodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarpeacestd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarpeacelow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 28:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincaryou_locolow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincaryou_locostd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincaryou_locostd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincaryou_locostd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincaryou_locobodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincaryou_locobodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincaryou_locobodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincaryou_locobodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincaryou_locostd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincaryou_locolow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 29:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarfreakoutlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarfreakoutstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarfreakoutstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarfreakoutstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarfreakoutbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarfreakoutbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarfreakoutbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarfreakoutbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarfreakoutstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarfreakoutlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 30:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarthumb_on_earslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarthumb_on_earsstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarthumb_on_earsstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarthumb_on_earsstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarthumb_on_earsbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarthumb_on_earsbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarthumb_on_earsbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarthumb_on_earsbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarthumb_on_earsstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarthumb_on_earslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 31:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carcry_babylow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carcry_babystd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carcry_babystd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carcry_babystd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carcry_babybodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carcry_babybodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carcry_babybodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carcry_babybodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carcry_babystd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carcry_babylow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 32:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carcut_throatlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carcut_throatstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carcut_throatstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carcut_throatstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carcut_throatbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carcut_throatbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carcut_throatbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carcut_throatbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carcut_throatstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carcut_throatlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 33:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carkarate_chopslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carkarate_chopsstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carkarate_chopsstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carkarate_chopsstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carkarate_chopsbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carkarate_chopsbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carkarate_chopsbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carkarate_chopsbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carkarate_chopsstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carkarate_chopslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 34:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carshadow_boxinglow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carshadow_boxingstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carshadow_boxingstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carshadow_boxingstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carshadow_boxingbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carshadow_boxingbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carshadow_boxingbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carshadow_boxingbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carshadow_boxingstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carshadow_boxinglow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 35:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carthe_woogielow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carthe_woogiestd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carthe_woogiestd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carthe_woogiestd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carthe_woogiebodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carthe_woogiebodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carthe_woogiebodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carthe_woogiebodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carthe_woogiestd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carthe_woogielow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 36:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carstinkerlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carstinkerstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carstinkerstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carstinkerstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carstinkerbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carstinkerbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carstinkerbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carstinkerbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carstinkerstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carstinkerlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 37:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarair_drumslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarair_drumsstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarair_drumsstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarair_drumsstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarair_drumsbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarair_drumsbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarair_drumsbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarair_drumsbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarair_drumsstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarair_drumslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 38:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarcall_melow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarcall_mestd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarcall_mestd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarcall_mestd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarcall_mebodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarcall_mebodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarcall_mebodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarcall_mebodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarcall_mestd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarcall_melow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 39:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarcoin_roll_and_tosslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarcoin_roll_and_tosslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_419 = 1;
					uParam2->f_421 = 1;
					uParam2->f_429 = joaat("vw_prop_vw_coin_01a");
					uParam2->f_424 = 1;
					break;
				case 40:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarbang_banglow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarbang_bangstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarbang_bangstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarbang_bangstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarbang_bangbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarbang_bangbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarbang_bangbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarbang_bangbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarbang_bangstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarbang_banglow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 41:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarrespectlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarrespectstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarrespectstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarrespectstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarrespectbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarrespectbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarrespectbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarrespectbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarrespectstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarrespectlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 42:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarmind_blownlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarmind_blownstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarmind_blownstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarmind_blownstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarmind_blownbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarmind_blownbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarmind_blownbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarmind_blownbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarmind_blownstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarmind_blownlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_upperbro_love", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_bro_love_ENTER", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_bro_love", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_bro_love_EXIT", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@bro_love", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@bro_love", 64);
					StringCopy(&(uParam2->f_257), "bro_love", 64);
					uParam2->f_418 = 1;
					uParam2->f_489 = 2;
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					StringCopy(uParam2[12 /*16*/], "mp_player_int_upperbro_love", 64);
					break;
				case 1:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_upperfinger", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_finger_02_ENTER", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_finger_02", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_finger_02_EXIT", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@finger", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@finger", 64);
					StringCopy(&(uParam2->f_257), "finger", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 2:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_upperwank", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_wank_02_ENTER", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_wank_02", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_wank_02_EXIT", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(&(uParam2->f_257), "wank", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					break;
				case 3:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_upperup_yours", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_up_yours_ENTER", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_up_yours", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_up_yours_EXIT", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@up_yours", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@up_yours", 64);
					StringCopy(&(uParam2->f_257), "up_yours", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					break;
				case 1:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperfinger", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@finger", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@finger", 64);
					StringCopy(&(uParam2->f_257), "finger", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intselfiethe_bird", 64);
					break;
				case 2:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperrock", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperrock", 64);
					break;
				case 3:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppersalute", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@salute", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@salute", 64);
					StringCopy(&(uParam2->f_257), "salute", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppersalute", 64);
					break;
				case 4:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperwank", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(&(uParam2->f_257), "wank", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intselfiewank", 64);
					break;
				case 59:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_uppersmoke", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_smoke_ENTER", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_smoke", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_smoke_EXIT", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@smoke_flick", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@smoke_flick", 64);
					StringCopy(&(uParam2->f_257), "smoke_flick", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					uParam2->f_430 = 1;
					break;
				case 60:
					StringCopy(uParam2[0 /*16*/], "mp_player_intdrink", 64);
					StringCopy(&(uParam2->f_209), "Intro", 64);
					StringCopy(&(uParam2->f_225), "Loop", 64);
					StringCopy(&(uParam2->f_241), "Outro", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_ecola_can");
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 61:
					StringCopy(uParam2[0 /*16*/], "mp_player_intdrink", 64);
					StringCopy(&(uParam2->f_209), "Intro_bottle", 64);
					StringCopy(&(uParam2->f_225), "Loop_bottle", 64);
					StringCopy(&(uParam2->f_241), "Outro_bottle", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_amb_beer_bottle");
					uParam2->f_488 = 3;
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 62:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperspray_champagne", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@spray_champagne", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@spray_champagne", 64);
					StringCopy(&(uParam2->f_257), "spray_champagne", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_420 = 1;
					uParam2->f_429 = joaat("xs_prop_arena_champ_closed");
					uParam2->f_428 = 1;
					uParam2->f_424 = 1;
					uParam2->f_488 = 3;
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					uParam2->f_422 = 1;
					break;
				case 63:
					StringCopy(uParam2[0 /*16*/], "mp_player_intdrink", 64);
					StringCopy(&(uParam2->f_209), "Intro", 64);
					StringCopy(&(uParam2->f_225), "Loop", 64);
					StringCopy(&(uParam2->f_241), "Outro", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_ld_can_01b");
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 39:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperraining_cash", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@raining_cash", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@raining_cash", 64);
					StringCopy(&(uParam2->f_257), "raining_cash", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_420 = 1;
					uParam2->f_421 = 1;
					uParam2->f_423 = 1;
					uParam2->f_429 = joaat("xs_prop_arena_cash_pile_l");
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperraining_cash", 64);
					uParam2->f_422 = 1;
					break;
				case 58:
					StringCopy(&(uParam2->f_369), "HLWN_22", 64);
					StringCopy(&(uParam2->f_385), "Mask_SFX", 64);
					StringCopy(&(uParam2->f_401), "SPEECH_PARAMS_FORCE_NORMAL", 64);
					uParam2->f_417 = 1;
					break;
				case 64:
					StringCopy(uParam2[0 /*16*/], "mp_player_inteat@pnq", 64);
					StringCopy(&(uParam2->f_209), "intro", 64);
					StringCopy(&(uParam2->f_225), "loop", 64);
					StringCopy(&(uParam2->f_241), "outro", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_choc_pq");
					uParam2->f_489 = 2;
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 65:
					StringCopy(uParam2[0 /*16*/], "mp_player_inteat@burger", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_eat_burger_enter", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_eat_burger", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_eat_exit_burger", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_choc_ego");
					uParam2->f_489 = 2;
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 66:
					StringCopy(uParam2[0 /*16*/], "mp_player_inteat@burger", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_eat_burger_enter", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_eat_burger", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_eat_exit_burger", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_choc_meto");
					uParam2->f_489 = 2;
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 6:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperair_shagging", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@air_shagging", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@air_shagging", 64);
					StringCopy(&(uParam2->f_257), "air_shagging", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 7:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperdock", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@dock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@dock", 64);
					StringCopy(&(uParam2->f_257), "dock", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intselfiedock", 64);
					break;
				case 8:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperknuckle_crunch", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@knuckle_crunch", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@knuckle_crunch", 64);
					StringCopy(&(uParam2->f_257), "knuckle_crunch", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_490 = 1;
					break;
				case 5:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperblow_kiss", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@blow_kiss", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@blow_kiss", 64);
					StringCopy(&(uParam2->f_257), "blow_kiss", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intselfieblow_kiss", 64);
					break;
				case 9:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperslow_clap", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@slow_clap", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@slow_clap", 64);
					StringCopy(&(uParam2->f_257), "slow_clap", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_490 = 1;
					break;
				case 10:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperface_palm", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@face_palm", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@face_palm", 64);
					StringCopy(&(uParam2->f_257), "face_palm", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperface_palm", 64);
					break;
				case 11:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperthumbs_up", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@thumbs_up", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@thumbs_up", 64);
					StringCopy(&(uParam2->f_257), "thumbs_up", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intselfiethumbs_up", 64);
					break;
				case 12:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperjazz_hands", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@jazz_hands", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@jazz_hands", 64);
					StringCopy(&(uParam2->f_257), "jazz_hands", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperjazz_hands", 64);
					break;
				case 13:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppernose_pick", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@nose_pick", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@nose_pick", 64);
					StringCopy(&(uParam2->f_257), "nose_pick", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppernose_pick", 64);
					break;
				case 15:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperwave", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@wave", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@wave", 64);
					StringCopy(&(uParam2->f_257), "wave", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperwave", 64);
					break;
				case 14:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperair_guitar", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@air_guitar", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@air_guitar", 64);
					StringCopy(&(uParam2->f_257), "air_guitar", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperair_guitar", 64);
					break;
				case 16:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppersurrender", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@surrender", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@surrender", 64);
					StringCopy(&(uParam2->f_257), "surrender", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppersurrender", 64);
					break;
				case 17:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppershush", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@shush", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@shush", 64);
					StringCopy(&(uParam2->f_257), "shush", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppershush", 64);
					break;
				case 18:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperphotography", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@photography", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@photography", 64);
					StringCopy(&(uParam2->f_257), "photography", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperphotography", 64);
					break;
				case 19:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperdj", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@dj", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@dj", 64);
					StringCopy(&(uParam2->f_257), "dj", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperdj", 64);
					break;
				case 20:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperair_synth", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@air_synth", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@air_synth", 64);
					StringCopy(&(uParam2->f_257), "air_synth", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperair_synth", 64);
					break;
				case 21:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperno_way", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@no_way", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@no_way", 64);
					StringCopy(&(uParam2->f_257), "no_way", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperno_way", 64);
					break;
				case 23:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperchin_brush", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@chin_brush", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@chin_brush", 64);
					StringCopy(&(uParam2->f_257), "chin_brush", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperchin_brush", 64);
					break;
				case 22:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperchicken_taunt", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@chicken_taunt", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@chicken_taunt", 64);
					StringCopy(&(uParam2->f_257), "chicken_taunt", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperchicken_taunt", 64);
					break;
				case 25:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperpeace", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@peace", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@peace", 64);
					StringCopy(&(uParam2->f_257), "peace", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperpeace", 64);
					break;
				case 24:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperfinger_kiss", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@finger_kiss", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@finger_kiss", 64);
					StringCopy(&(uParam2->f_257), "finger_kiss", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperfinger_kiss", 64);
					break;
				case 26:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperyou_loco", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@you_loco", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@you_loco", 64);
					StringCopy(&(uParam2->f_257), "you_loco", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperyou_loco", 64);
					break;
				case 27:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperfreakout", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@freakout", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@freakout", 64);
					StringCopy(&(uParam2->f_257), "freakout", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					break;
				case 28:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperthumb_on_ears", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@thumb_on_ears", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@thumb_on_ears", 64);
					StringCopy(&(uParam2->f_257), "thumb_on_ears", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 30:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperbanging_tunes", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@banging_tunes", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@banging_tunes", 64);
					StringCopy(&(uParam2->f_257), "banging_tunes", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 29:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperbanging_tunes_left", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@banging_tunes_left", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@banging_tunes_left", 64);
					StringCopy(&(uParam2->f_257), "banging_tunes", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 31:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperbanging_tunes_right", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@banging_tunes_right", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@banging_tunes_right", 64);
					StringCopy(&(uParam2->f_257), "banging_tunes", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 32:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperoh_snap", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@oh_snap", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@oh_snap", 64);
					StringCopy(&(uParam2->f_257), "oh_snap", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 33:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercats_cradle", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@cats_cradle", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@cats_cradle", 64);
					StringCopy(&(uParam2->f_257), "cats_cradle", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 34:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperraise_the_roof", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@raise_the_roof", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@raise_the_roof", 64);
					StringCopy(&(uParam2->f_257), "raise_the_roof", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 35:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperfind_the_fish", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@find_the_fish", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@find_the_fish", 64);
					StringCopy(&(uParam2->f_257), "find_the_fish", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 36:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppersalsa_roll", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@salsa_roll", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@salsa_roll", 64);
					StringCopy(&(uParam2->f_257), "salsa_roll", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 37:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperheart_pumping", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@heart_pumping", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@heart_pumping", 64);
					StringCopy(&(uParam2->f_257), "heart_pumping", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 38:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperuncle_disco", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@uncle_disco", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@uncle_disco", 64);
					StringCopy(&(uParam2->f_257), "uncle_disco", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 40:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercry_baby", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@cry_baby", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@cry_baby", 64);
					StringCopy(&(uParam2->f_257), "cry_baby", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppercry_baby", 64);
					break;
				case 41:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercut_throat", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@cut_throat", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@cut_throat", 64);
					StringCopy(&(uParam2->f_257), "cut_throat", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppercut_throat", 64);
					break;
				case 42:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperkarate_chops", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@karate_chops", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@karate_chops", 64);
					StringCopy(&(uParam2->f_257), "karate_chops", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperkarate_chops", 64);
					break;
				case 43:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppershadow_boxing", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@shadow_boxing", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@shadow_boxing", 64);
					StringCopy(&(uParam2->f_257), "shadow_boxing", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppershadow_boxing", 64);
					break;
				case 44:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperthe_woogie", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@the_woogie", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@the_woogie", 64);
					StringCopy(&(uParam2->f_257), "the_woogie", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperthe_woogie", 64);
					break;
				case 45:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperstinker", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@stinker", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@stinker", 64);
					StringCopy(&(uParam2->f_257), "stinker", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperstinker", 64);
					break;
				case 46:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperair_drums", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@air_drums", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@air_drums", 64);
					StringCopy(&(uParam2->f_257), "air_drums", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperair_drums", 64);
					break;
				case 47:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercall_me", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@call_me", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@call_me", 64);
					StringCopy(&(uParam2->f_257), "call_me", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppercall_me", 64);
					break;
				case 48:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercoin_roll_and_toss", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@coin_roll_and_toss", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@coin_roll_and_toss", 64);
					StringCopy(&(uParam2->f_257), "coin_roll_and_toss", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppercoin_roll_and_toss", 64);
					uParam2->f_419 = 1;
					uParam2->f_421 = 1;
					uParam2->f_429 = joaat("vw_prop_vw_coin_01a");
					uParam2->f_424 = 1;
					break;
				case 49:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperbang_bang", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@bang_bang", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@bang_bang", 64);
					StringCopy(&(uParam2->f_257), "bang_bang", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperbang_bang", 64);
					break;
				case 50:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperrespect", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@respect", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@respect", 64);
					StringCopy(&(uParam2->f_257), "respect", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperrespect", 64);
					break;
				case 51:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppermind_blown", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@mind_blown", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@mind_blown", 64);
					StringCopy(&(uParam2->f_257), "mind_blown", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppermind_blown", 64);
					break;
				case 52:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercrowd_invitation", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@crowd_invitation", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@crowd_invitation", 64);
					StringCopy(&(uParam2->f_257), "crowd_invitation", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 53:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperdriver", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@driver", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@driver", 64);
					StringCopy(&(uParam2->f_257), "driver", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 54:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperrunner", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@runner", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@runner", 64);
					StringCopy(&(uParam2->f_257), "runner", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 55:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppershooting", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@shooting", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@shooting", 64);
					StringCopy(&(uParam2->f_257), "shooting", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 56:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppersuck_it", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@suck_it", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@suck_it", 64);
					StringCopy(&(uParam2->f_257), "suck_it", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 57:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppertake_selfie", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@take_selfie", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@take_selfie", 64);
					StringCopy(&(uParam2->f_257), "take_selfie", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 0;
					uParam2->f_426 = 0;
					uParam2->f_489 = -1;
					uParam2->f_419 = 1;
					uParam2->f_420 = 1;
					uParam2->f_421 = 1;
					uParam2->f_424 = 0;
					uParam2->f_423 = 1;
					uParam2->f_429 = joaat("prop_phone_ing_02");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_upper_nod", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_nod_no", 64);
					uParam2->f_425 = 0;
					uParam2->f_418 = 0;
					uParam2->f_489 = 2;
					StringCopy(uParam2[12 /*16*/], "mp_player_int_upper_nod", 64);
					break;
				case 1:
					StringCopy(uParam2[0 /*16*/], "amb@code_human_in_car_mp_actions@nod@low@ds@base", 64);
					StringCopy(&(uParam2->f_225), "nod_no", 64);
					uParam2->f_425 = 0;
					uParam2->f_418 = 0;
					uParam2->f_489 = 1;
					break;
				case 2:
					StringCopy(uParam2[0 /*16*/], "amb@code_human_in_car_mp_actions@nod@low@ds@base", 64);
					StringCopy(&(uParam2->f_225), "nod_no", 64);
					uParam2->f_425 = 0;
					uParam2->f_418 = 0;
					uParam2->f_489 = 0;
					break;
				case 3:
					StringCopy(uParam2[0 /*16*/], "amb@code_human_in_car_mp_actions@nod@std@ds@base", 64);
					StringCopy(&(uParam2->f_225), "nod_no", 64);
					uParam2->f_425 = 0;
					uParam2->f_418 = 0;
					uParam2->f_489 = 1;
					break;
				case 4:
					StringCopy(uParam2[10 /*16*/], "anim@mp_freemode_return@m@idle", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_freemode_return@f@idle", 64);
					StringCopy(&(uParam2->f_257), "idle_a", 64);
					break;
				case 5:
					StringCopy(uParam2[10 /*16*/], "anim@mp_freemode_return@m@idle", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_freemode_return@f@idle", 64);
					StringCopy(&(uParam2->f_257), "idle_b", 64);
					break;
				case 6:
					StringCopy(uParam2[10 /*16*/], "anim@mp_freemode_return@m@idle", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_freemode_return@f@idle", 64);
					StringCopy(&(uParam2->f_257), "idle_c", 64);
					if (uParam3 && uParam4)
					{
					}
					else
					{
						uParam2->f_419 = 1;
						uParam2->f_421 = 1;
						uParam2->f_429 = joaat("prop_npc_phone");
					}
					break;
				case 7:
					StringCopy(uParam2[10 /*16*/], "anim@mp_freemode_return@m@fail", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_freemode_return@f@fail", 64);
					StringCopy(&(uParam2->f_257), "fail_a", 64);
					break;
				case 8:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(&(uParam2->f_257), "respawn_a_ped_a", 64);
					break;
				case 9:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(&(uParam2->f_257), "respawn_a_ped_b_smoke", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 10:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(&(uParam2->f_257), "respawn_a_ped_c", 64);
					break;
				case 11:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(&(uParam2->f_257), "respawn_a_ped_d_smoke", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 12:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(&(uParam2->f_257), "respawn_b_ped_a", 64);
					break;
				case 13:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(&(uParam2->f_257), "respawn_b_ped_b_smoke", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 14:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(&(uParam2->f_257), "respawn_b_ped_c", 64);
					break;
				case 15:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(&(uParam2->f_257), "respawn_b_ped_d_smoke", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 16:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(&(uParam2->f_257), "respawn_c_ped_a", 64);
					break;
				case 17:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(&(uParam2->f_257), "respawn_c_ped_b", 64);
					uParam2->f_419 = 1;
					uParam2->f_421 = 1;
					uParam2->f_429 = joaat("prop_npc_phone");
					break;
				case 18:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(&(uParam2->f_257), "respawn_c_ped_c", 64);
					break;
				case 19:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(&(uParam2->f_257), "respawn_c_ped_d", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 20:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(&(uParam2->f_257), "respawn_d_ped_a", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 21:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(&(uParam2->f_257), "respawn_d_ped_b", 64);
					break;
				case 22:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(&(uParam2->f_257), "respawn_d_ped_c", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 23:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(&(uParam2->f_257), "respawn_d_ped_d", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 24:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(&(uParam2->f_257), "respawn_e_ped_a", 64);
					break;
				case 25:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(&(uParam2->f_257), "respawn_e_ped_b", 64);
					break;
				case 26:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(&(uParam2->f_257), "respawn_e_ped_c", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 27:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(&(uParam2->f_257), "respawn_e_ped_d", 64);
					uParam2->f_419 = 1;
					uParam2->f_421 = 1;
					uParam2->f_429 = joaat("prop_npc_phone");
					break;
				case 28:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(&(uParam2->f_257), "respawn_f_ped_a", 64);
					break;
				case 29:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(&(uParam2->f_257), "respawn_f_ped_b", 64);
					break;
				case 30:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(&(uParam2->f_257), "respawn_f_ped_c", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 31:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(&(uParam2->f_257), "respawn_f_ped_d", 64);
					uParam2->f_419 = 1;
					uParam2->f_421 = 1;
					uParam2->f_429 = joaat("prop_npc_phone");
					break;
				case 32:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(&(uParam2->f_257), "respawn_g_ped_a", 64);
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_ecola_can");
					break;
				case 33:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(&(uParam2->f_257), "respawn_g_ped_b", 64);
					break;
				case 34:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(&(uParam2->f_257), "respawn_g_ped_c", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 35:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(&(uParam2->f_257), "respawn_g_ped_d", 64);
					break;
				case 36:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(&(uParam2->f_257), "post_pacific_finale_respawn_ped_a", 64);
					break;
				case 37:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(&(uParam2->f_257), "post_pacific_finale_respawn_ped_b", 64);
					break;
				case 38:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(&(uParam2->f_257), "post_pacific_finale_respawn_ped_c", 64);
					break;
				case 39:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(&(uParam2->f_257), "post_pacific_finale_respawn_ped_d", 64);
					break;
				case 40:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@fleeca", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@fleeca", 64);
					StringCopy(&(uParam2->f_257), "post_fleeca_finale_respawn_ped_a", 64);
					break;
				case 41:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@fleeca", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@fleeca", 64);
					StringCopy(&(uParam2->f_257), "post_fleeca_finale_respawn_ped_b", 64);
					break;
			}
			break;
	}
}

int func_656(var uParam0, int iParam1)//Position - 0x2F99EB
{
	if (*uParam0 == 3)
	{
		return 1;
	}
	else if (*uParam0 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
		{
			return 1;
		}
	}
	else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		return 1;
	}
	return 0;
}

int func_657(int iParam0)//Position - 0x2F9A29
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID() && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return 1;
		}
	}
	return 0;
}

void func_658(var uParam0)//Position - 0x2F9A53
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__.func_556(__LIB_6__.func_680(2, 66), -1, 0);
	iVar1 = __LIB_1__.func_556(__LIB_6__.func_680(2, 65), -1, 0);
	iVar2 = __LIB_1__.func_556(__LIB_6__.func_680(2, 64), -1, 0);
	if (iVar0 > 0)
	{
		uParam0->f_1 = 66;
	}
	else if (iVar1 > 0)
	{
		uParam0->f_1 = 65;
	}
	else if (iVar2 > 0)
	{
		uParam0->f_1 = 64;
	}
}

int func_659(int iParam0, int iParam1)//Position - 0x3014FE
{
	if (((iParam0 == 0 && iParam1 == 0) || (iParam0 == 2 && iParam1 == 0)) || (iParam0 == -1 && iParam1 == -1))
	{
		return 1;
	}
	return 0;
}

int func_660(int iParam0, int iParam1)//Position - 0x3016E3
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 39:
				case 62:
				case 64:
				case 65:
				case 66:
					return 0;
				default:
			}
			break;
	}
	return 1;
}

void func_661(int iParam0, int iParam1, bool bParam2)//Position - 0x30A274
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__.func_3() == 0)
		{
			iVar0 = __LIB_1__.func_556(__LIB_0__.func_297(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			__LIB_1__.func_597(__LIB_0__.func_297(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

void func_662()//Position - 0x30AE92
{
	int iVar0;
	iVar0 = __LIB_0__.func_228(30513, -1);
	if (!Global_1966155 && iVar0 < 3)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_3__.func_998(PLAYER::PLAYER_ID()))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_9), 1);
			__LIB_1__.func_39(30513, iVar0 + 1, -1);
			Global_1966155 = 1;
			__LIB_0__.func_151("CCR_INC_HT" /* GXT: Increasing your reputation with the LS Car Meet unlocks vehicle trade prices, exclusive items for purchase at the Merch Shop and Mod Shop, and additional bonus rewards. */, -1);
		}
		else if (!BitTest(Global_1946250.f_9, 1))
		{
			MISC::SET_BIT(&(Global_1946250.f_9), 1);
		}
	}
}

int func_663(int iParam0)//Position - 0x30B4FB
{
	if (!Global_78319)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("euros"):
			return __LIB_5__.func_570(PLAYER::PLAYER_ID());
		case joaat("tailgater2"):
			return __LIB_7__.func_716(PLAYER::PLAYER_ID());
		case joaat("zr350"):
			return __LIB_0__.func_137(31810, -1);
		case joaat("comet6"):
			return __LIB_0__.func_137(31811, -1);
		case joaat("jester4"):
			return __LIB_0__.func_137(31812, -1);
		case joaat("vectre"):
			return __LIB_0__.func_137(31813, -1);
		case joaat("cypher"):
			return __LIB_0__.func_137(31814, -1);
		case joaat("growler"):
			return __LIB_0__.func_137(31815, -1);
		case joaat("calico"):
			return __LIB_0__.func_137(31816, -1);
		case joaat("remus"):
			return __LIB_0__.func_137(31817, -1);
		case joaat("dominator7"):
			return __LIB_0__.func_137(31818, -1);
		case joaat("futo2"):
			return __LIB_0__.func_137(31819, -1);
		case joaat("rt3000"):
			return __LIB_0__.func_137(31820, -1);
		case joaat("warrener2"):
			return __LIB_0__.func_137(31821, -1);
		case joaat("sultan3"):
			return __LIB_0__.func_137(31822, -1);
		case joaat("dominator8"):
			return __LIB_0__.func_137(31823, -1);
		case joaat("previon"):
			return __LIB_0__.func_137(31824, -1);
		case joaat("kanjosj"):
			return __LIB_0__.func_137(34373, -1);
		case joaat("postlude"):
			return __LIB_0__.func_137(34374, -1);
		default:
	}
	return 0;
}

void func_664(char[16] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x313D9C
{
	Global_100493.f_1384 = { cParam0 };
	Global_100493.f_1388 = iParam1;
	Global_100493.f_1389 = iParam2;
	Global_100493.f_1390 = iParam3;
	Global_100493.f_1391 = iParam4;
	Global_100493.f_1392 = iParam5;
}

int func_665(int iParam0)//Position - 0x317396
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		default:
	}
	return 0;
}

int func_666()//Position - 0x321632
{
	int iVar0;
	int iVar1;
	STATS::GET_BOSS_GOON_UUID(__LIB_0__.func_5(), &iVar0, &iVar1);
	if (iVar0 != 0 || iVar1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_667(int iParam0)//Position - 0x330B25
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1888862[iParam0 /*120*/].f_29, 30);
	}
	return 0;
}

void func_668(var uParam0, char* sParam1, int iParam2)//Position - 0x336D8B
{
	int iVar0;
	int iVar1;
	if (__LIB_5__.func_27(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_2097157.f_355}, 16);
		sParam1->f_32 = { Global_2097157.f_361 };
		MemCopy(&(sParam1->f_16), {Global_2097157.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
		sParam1->f_32 = { __LIB_1__.func_267(PLAYER::PLAYER_ID()) };
	}
	sParam1->f_59 = iParam2;
	if (__LIB_5__.func_19(uParam0->f_44))
	{
		iVar0 = Global_2097157.f_211.f_36[Global_2097536.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097157.f_142.f_2, Global_2097536.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_2097157.f_211.f_36[Global_2097536.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_2097157.f_211.f_3[Global_2097536.f_2710[iVar1]];
		}
		iVar1++;
	}
}

int func_669(var uParam0)//Position - 0x33D10D
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1049;
			break;
		case 1:
			return 1050;
			break;
		case 2:
			return 1051;
			break;
		case 3:
			return 1052;
			break;
		case 4:
			return 1053;
			break;
		case 5:
			return 1054;
			break;
		case 6:
			return 1488;
			break;
		case 7:
			return 1489;
			break;
		case 8:
			return 1490;
			break;
		case 9:
			return 1491;
			break;
		case 10:
			return 1949;
			break;
		case 11:
			return 1950;
			break;
		case 12:
			return 1951;
			break;
		case 13:
			return 2425;
			break;
		case 14:
			return 2445;
			break;
		case 15:
			return 2448;
			break;
		case 16:
			return 2451;
			break;
		case 17:
			return 2615;
			break;
		case 18:
			return 2618;
			break;
		case 19:
			return 2621;
			break;
		case 20:
			return 3787;
			break;
		case 21:
			return 3790;
			break;
		case 22:
			return 3865;
			break;
		case 23:
			return 3868;
			break;
		case 24:
			return 3871;
			break;
		case 25:
			return 3874;
		case 26:
			return 5365;
		case 27:
			return 5368;
			break;
		case 28:
			return 5470;
			break;
		case 29:
			return 5473;
			break;
		case 30:
			return 6432;
			break;
		case 31:
			return 6435;
			break;
		case 32:
			return 7256;
			break;
		case 33:
			return 7259;
			break;
		case 34:
			return 7262;
			break;
		case 35:
			return 7971;
			break;
		case 36:
			return 7974;
			break;
		case 37:
			return 7977;
			break;
		case 38:
			return 7980;
			break;
		case 39:
			return 8502;
			break;
		case 40:
			return 8505;
			break;
		case 41:
			return 8508;
			break;
		case 42:
			return 8511;
			break;
		case 43:
			return 8907;
			break;
		case 44:
			return 8910;
			break;
		case 45:
			return 8913;
			break;
		case 46:
			return 10288;
			break;
		case 47:
			return 10291;
			break;
		case 48:
			return 10414;
			break;
		case 49:
			return 10417;
			break;
	}
	return 2425;
}

void func_670(int iParam0, int iParam1)//Position - 0x33E42D
{
	if (iParam0 > 255)
	{
		__LIB_1__.func_39(400, 255, iParam1);
		__LIB_1__.func_39(18092, (iParam0 - 255), iParam1);
	}
	else
	{
		__LIB_1__.func_39(400, iParam0, iParam1);
		__LIB_1__.func_39(18092, 0, iParam1);
	}
}

void func_671(int iParam0)//Position - 0x33EF15
{
	Global_78127 = iParam0;
}

int func_672(int iParam0)//Position - 0x340612
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("U_M_M_FilmDirector"))
	{
		return 1;
	}
	return 0;
}

void func_673(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x34086D
{
	int iVar0;
	if (__LIB_0__.func_354())
	{
		iVar0 = Global_2866176[iParam0 /*3*/][__LIB_1__.func_443(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_FLOAT(iVar0, fParam1, bParam3);
		}
	}
}

void func_674(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x342319
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = Global_78127;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (__LIB_0__.func_30(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = __LIB_1__.func_556(iVar2, iVar0, 0);
		MISC::CLEAR_BIT(&iVar3, iVar1);
		__LIB_1__.func_597(iVar2, iVar3, iVar0, 1, 0);
	}
}

char* func_675(int iParam0)//Position - 0x351BCD
{
	switch (iParam0)
	{
		case 1:
			return "AWD_GANGOPF0" /* GXT: Act I */;
		case 2:
			return "AWD_GANGOPF1" /* GXT: Act II */;
		case 6:
			return "AWD_GANGOPF2" /* GXT: Act III */;
		case 3:
			return "AWD_GANGOPA" /* GXT: All In Order II */;
		case 4:
			return "AWD_GANGOPL4" /* GXT: Loyalty IV */;
		case 7:
			return "AWD_GANGOPL2" /* GXT: Loyalty II */;
		case 8:
			return "AWD_GANGOPL3" /* GXT: Loyalty III */;
		case 5:
			return "AWD_GANGOPM4" /* GXT: Criminal Mastermind IV */;
		case 9:
			return "AWD_GANGOPM2" /* GXT: Criminal Mastermind II */;
		case 10:
			return "AWD_GANGOPM3" /* GXT: Criminal Mastermind III */;
		case 11:
			return "AWD_GANGOPSR" /* GXT: Supporting Role II */;
		default:
	}
	return "";
}

int func_676()//Position - 0x354483
{
	if (BitTest(Global_4718592.f_18, 0))
	{
		return 1;
	}
	return ((((((__LIB_0__.func_719(Global_4718592.f_116524, 1) || __LIB_1__.func_740(Global_4718592.f_116524)) || __LIB_1__.func_739(Global_4718592.f_116524)) || __LIB_1__.func_738(Global_4718592.f_116524)) || __LIB_1__.func_737(Global_4718592.f_168757)) || __LIB_1__.func_736(Global_4718592.f_168757)) || __LIB_1__.func_211(Global_4718592.f_168757));
}

bool func_677()//Position - 0x35480E
{
	return Global_1941273.f_11;
}

bool func_678(int iParam0)//Position - 0x357A03
{
	return Global_1642434[iParam0 /*6*/];
}

void func_679()//Position - 0x35B15F
{
	struct<13> Var0;
	Global_2715699.f_6570 = { Var0 };
}

void func_680(int iParam0)//Position - 0x35B176
{
	int iVar0;
	if (__LIB_3__.func_859(PLAYER::PLAYER_ID()))
	{
		iVar0 = __LIB_3__.func_977(PLAYER::PLAYER_ID());
		if (iVar0 != iParam0)
		{
			Global_1946250.f_3616 = iVar0;
		}
	}
}

void func_681(int iParam0)//Position - 0x35DE6C
{
	if (!__LIB_1__.func_215() || iParam0)
	{
		Global_1837289 = 0;
		Global_1837288 = 0;
	}
}

int func_682(int iParam0, int iParam1)//Position - 0x35EFE1
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 1:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 9);
			case 2:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 11);
			case 3:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 13);
			case 4:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 15);
			}
		default:
	}
	return 0;
}

int func_683(int iParam0)//Position - 0x35F103
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 4);
	}
	return 0;
}

int func_684(int iParam0)//Position - 0x35F121
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 3);
	}
	return 0;
}

int func_685(bool bParam0)//Position - 0x35F471
{
	if (bParam0)
	{
		return __LIB_1__.func_556(8524, -1, 0);
	}
	return __LIB_3__.func_784(PLAYER::PLAYER_ID(), 0);
}

int func_686(bool bParam0)//Position - 0x35F4B4
{
	if (bParam0)
	{
		return __LIB_1__.func_556(8523, -1, 0);
	}
	return __LIB_3__.func_785(PLAYER::PLAYER_ID(), 0);
}

int func_687(bool bParam0)//Position - 0x35F4F7
{
	if (bParam0)
	{
		return __LIB_1__.func_556(8522, -1, 0);
	}
	return __LIB_3__.func_783(PLAYER::PLAYER_ID(), 0);
}

bool func_688(var uParam0, int iParam1)//Position - 0x36C365
{
	return BitTest(uParam0, iParam1);
}

int func_689()//Position - 0x36E2A6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (Global_262145.f_6890[iVar0] == 251)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_690(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x37761F
{
	*uParam0 = 0;
	if (iParam4 > 0)
	{
		*uParam0 = (iParam4 * 1000000);
	}
	*uParam0 = (*uParam0 + (iParam3 * 100000));
	*uParam0 = (*uParam0 + iParam1 * 100);
	*uParam0 = (*uParam0 + iParam2);
}

void func_691()//Position - 0x37767A
{
	struct<281> Var0;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1931618 = { Var0 };
}

bool func_692()//Position - 0x377936
{
	return Global_1931618.f_4;
}

void func_693()//Position - 0x377995
{
	Global_1931618.f_5 = 1;
}

void func_694()//Position - 0x3779A4
{
	Global_1931618.f_4 = 1;
}

void func_695(int iParam0)//Position - 0x37AC10
{
	Global_1575025 = iParam0;
}

int func_696()//Position - 0x37C501
{
	return __LIB_1__.func_556(1299, -1, 0);
}

int func_697()//Position - 0x37C512
{
	return __LIB_1__.func_556(1218, -1, 0);
}

char* func_698()//Position - 0x382472
{
	return "Prop_Screen_Arena_Giant";
}

char* func_699()//Position - 0x382499
{
	return "bigscreen_01";
}

void func_700(int iParam0)//Position - 0x3824A6
{
	if (Global_2787919 != iParam0)
	{
		Global_2787919 = iParam0;
	}
}

int func_701()//Position - 0x3824CB
{
	return Global_2788173;
}

char* func_702(var uParam0)//Position - 0x3828F5
{
	switch (uParam0->f_12)
	{
		case 0:
			return "YACHT_LOCATE1" /* GXT: Press ~INPUT_CONTEXT~ to play A Superyacht Life - Overboard. */;
		case 1:
			return "YACHT_LOCATE2" /* GXT: Press ~INPUT_CONTEXT~ to play A Superyacht Life - Salvage. */;
		case 2:
			return "YACHT_LOCATE3" /* GXT: Press ~INPUT_CONTEXT~ to play A Superyacht Life - All Hands. */;
		case 3:
			return "YACHT_LOCATE4" /* GXT: Press ~INPUT_CONTEXT~ to play A Superyacht Life - Icebreaker. */;
		case 4:
			return "YACHT_LOCATE5" /* GXT: Press ~INPUT_CONTEXT~ to play A Superyacht Life - Bon Voyage. */;
		case 5:
			return "YACHT_LOCATE6" /* GXT: Press ~INPUT_CONTEXT~ to play A Superyacht Life - D-Day. */;
		default:
	}
	return "";
}

void func_703(var uParam0, int iParam1)//Position - 0x383539
{
	(uParam0[iParam1 /*3*/])->f_2 = 1;
}

bool func_704(var uParam0, int iParam1)//Position - 0x38354A
{
	return (uParam0[iParam1 /*3*/])->f_2;
}

int func_705(var uParam0, int iParam1)//Position - 0x38365D
{
	return (uParam0[iParam1 /*3*/])->f_1;
}

void func_706()//Position - 0x386032
{
	if (Global_1836751.f_3 == -1)
	{
		Global_1836751.f_3 = __LIB_0__.func_714(joaat("MPPLY_LAST_PROF_RACE_WON"));
	}
}

char* func_707(int iParam0, int iParam1)//Position - 0x386B59
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 3:
			return "MN_21" /* GXT: SELL DRUGS */;
		case 1:
			return "MN_22" /* GXT: HOLD UP */;
		case 4:
			return "MN_STPC" /* GXT: STRIPCLUB */;
		case 5:
			return "MN_STPC" /* GXT: STRIPCLUB */;
		case 6:
			return "MN_WRST" /* GXT: ARM WRESTLING */;
		case 8:
			return "MN_TENN" /* GXT: TENNIS */;
		case 9:
			return "MN_DART" /* GXT: DARTS */;
		case 7:
			return "MN_IMEX" /* GXT: IMPORT EXPORT */;
		case 10:
			return "MN_FGHT" /* GXT: FIST FIGHT */;
		case 11:
			return "MN_HOOK" /* GXT: DROP OFF HOOKER */;
		case 15:
			return "";
		case 181:
			return "FMMC_MPM_TY10" /* GXT: Arm Wrestling */;
		case 188:
			return "FMMC_MPM_TY8" /* GXT: Parachuting */;
		case 182:
			return "FMMC_MPM_TY11" /* GXT: Darts */;
		case 189:
			return "FMMC_MPM_TY1" /* GXT: Deathmatch */;
		case 187:
			return "FMMC_MPM_TY17" /* GXT: One on One Deathmatch */;
		case 190:
			return "FMMC_MPM_TY5" /* GXT: Gang Attack */;
		case 186:
			return "FMMC_MPM_TY122" /* GXT: San Andreas Flight School */;
		case 183:
			return "FMMC_MPM_TY13" /* GXT: Golf */;
		case 191:
			return "FMMC_MPM_TY0" /* GXT: Mission */;
		case 192:
			return "FMMC_MPM_TY2" /* GXT: Race */;
		case 184:
			return "FMMC_MPM_TY12" /* GXT: Shooting Range */;
		case 193:
			return "FMMC_MPM_TY4" /* GXT: Survival */;
		case 185:
			return "FMMC_MPM_TY9" /* GXT: Tennis */;
		case 18:
			return "FMMC_MPM_TY16" /* GXT: Crate Drop */;
		case 49:
			iVar0 = PLAYER::PLAYER_ID();
			if (iVar0 != -1)
			{
				iVar1 = Global_1892703[iVar0 /*599*/].f_10.f_35;
			}
			if ((((iVar0 != -1 && iVar1 != -1) && Global_1892703[iVar1 /*599*/].f_10 != __LIB_0__.func_160()) && Global_1892703[iVar1 /*599*/].f_10 == Global_1892703[iVar0 /*599*/].f_10.f_35) && Global_1892703[iVar1 /*599*/].f_10.f_428 == 1)
			{
				return "CELL_BIKEDM" /* GXT: Biker Deathmatch */;
			}
			else
			{
				return "BIGM_BOSSVBOSS" /* GXT: Executive Deathmatch */;
			}
			break;
	}
	if (iParam1 == 0)
	{
	}
	return "";
}

char* func_708(int iParam0)//Position - 0x388A00
{
	switch (iParam0)
	{
		case 0:
			return "FMSTP_PRC0" /* GXT: Compacts */;
		case 1:
			return "FMSTP_PRC1" /* GXT: Sedans */;
		case 2:
			return "FMSTP_PRC2" /* GXT: SUV */;
		case 3:
			return "FMSTP_PRC3" /* GXT: Coupes */;
		case 4:
			return "FMSTP_PRC4" /* GXT: Muscle */;
		case 5:
			return "FMSTP_PRC5" /* GXT: Classics */;
		case 6:
			return "FMSTP_PRC6" /* GXT: Sports */;
		case 7:
			return "FMSTP_PRC7" /* GXT: Super */;
		case 8:
			return "FMSTP_PRC8" /* GXT: Motorcycles */;
		case 9:
			return "FMSTP_PRC9" /* GXT: Off Road */;
		case 10:
			return "FMSTP_PRC10" /* GXT: Industrial */;
		case 11:
			return "FMSTP_PRC11" /* GXT: Utility */;
		case 12:
			return "FMSTP_PRC12" /* GXT: Vans */;
		case 13:
			return "FMSTP_PRC13" /* GXT: Cycles */;
		case 14:
			return "FMSTP_PRC14" /* GXT: Open */;
		case 15:
			return "FMSTP_PRC15" /* GXT: Special */;
		case 16:
			return "FMSTP_PRC16" /* GXT: Weaponized */;
		case 17:
			return "FMSTP_PRC17" /* GXT: Arena Contender */;
		case 18:
			return "FMSTP_PRC18" /* GXT: Open Wheel */;
		case 19:
			return "FMSTP_PRC19";
		case 20:
			return "FMSTP_PRC20";
		default:
	}
	return "FMSTP_PRC14" /* GXT: Open */;
}

bool func_709()//Position - 0x389022
{
	return __LIB_0__.func_137(__LIB_4__.func_995(6), -1);
}

void func_710()//Position - 0x389034
{
	if (Global_1836751.f_76)
	{
		Global_1836751 = __LIB_1__.func_556(2481, -1, 0);
		Global_1836751.f_1 = __LIB_1__.func_556(2483, -1, 0);
		Global_1836751.f_2 = __LIB_1__.func_556(2484, -1, 0);
		Global_1946235 = BitTest(Global_1836751.f_2, 7);
		if (BitTest(Global_1836751.f_2, 6))
		{
		}
		if (BitTest(Global_1836751.f_2, 9))
		{
		}
		if (BitTest(Global_1836751, 15))
		{
		}
		if (BitTest(Global_1836751, 16))
		{
		}
		Global_1836751.f_76 = 0;
	}
}

void func_711(int iParam0, struct<3> Param1, int iParam2)//Position - 0x39095F
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1868))
	{
		if (!Global_2678393.f_1868 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	else
	{
		Global_2678393.f_1868 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_6 = iParam0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_7 = { Param1 };
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_10 = iParam2;
}

void func_712()//Position - 0x3909CD
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1868))
	{
		if (!Global_2678393.f_1868 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_6 = -1;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_7 = { 0f, 0f, 0f };
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_10 = 0f;
	Global_2678393.f_1868 = -1;
}

bool func_713()//Position - 0x3930C0
{
	return BitTest(Global_1574589, 9);
}

bool func_714()//Position - 0x3930CF
{
	return BitTest(Global_1574589, 8);
}

bool func_715()//Position - 0x393407
{
	return BitTest(Global_1574589, 7);
}

bool func_716()//Position - 0x393415
{
	return BitTest(Global_1574589, 4);
}

int func_717()//Position - 0x3960DA
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 224.89944f, 5180.1973f, -84.5651f, 211.51564f, 5180.269f, -89.99728f, 21f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 211.81131f, 5179.9624f, -84.5651f, 197.59816f, 5180.011f, -89.99728f, 15f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_718()//Position - 0x39614C
{
	return Global_2787920;
}

void func_719(int iParam0, bool bParam1)//Position - 0x396495
{
	if (bParam1 < 32)
	{
		MISC::SET_BIT(&(Global_1965636[iParam0]), bParam1);
	}
	else
	{
		MISC::SET_BIT(&(Global_1965639[iParam0]), (bParam1 - 32));
	}
}

var func_720(int iParam0)//Position - 0x3964EC
{
	if (iParam0 < 32)
	{
		return (BitTest(Global_1965628, iParam0) && BitTest(Global_1965630, iParam0));
	}
	return (BitTest(Global_1965629, (iParam0 - 32)) && BitTest(Global_1965631, (iParam0 - 32)));
}

void func_721(var uParam0)//Position - 0x39668D
{
	GRAPHICS::SET_TV_CHANNEL(-1);
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	__LIB_0__.func_580(&(uParam0->f_33), 0, 0);
}

void func_722(var uParam0)//Position - 0x396A92
{
	*uParam0++;
	if (*uParam0 > 5)
	{
		*uParam0 = 0;
	}
}

void func_723(var uParam0, int iParam1, int iParam2)//Position - 0x396AD6
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_19)))
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, &(uParam0->f_19), true);
	}
	GRAPHICS::SET_TV_AUDIO_FRONTEND(true);
	GRAPHICS::SET_TV_VOLUME(-100f);
	GRAPHICS::SET_TV_CHANNEL(0);
	uParam0->f_10 = 1;
	uParam0->f_11 = 0;
	if (iParam1 || iParam2)
	{
		__LIB_0__.func_580(&(uParam0->f_33), 0, 0);
	}
}

int func_724()//Position - 0x396DFD
{
	return MISC::GET_HASH_KEY("xs_prop_arena_bigscreen_01");
}

bool func_725()//Position - 0x39782E
{
	return BitTest(Global_2815059.f_1809, 17);
}

int func_726()//Position - 0x3981AA
{
	return __LIB_1__.func_556(8976, -1, 0);
}

void func_727(int iParam0)//Position - 0x39A6DD
{
	Global_2727093 = iParam0;
}

bool func_728()//Position - 0x39E20C
{
	return BitTest(Global_2714762, 21);
}

void func_729()//Position - 0x39FA37
{
	if (Global_2653182 == 0 && Global_2653183 == 0)
	{
		return;
	}
	Global_2653182 = 0;
	Global_2653183 = 0;
}

var func_730(int iParam0)//Position - 0x3A1AB6
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 0);
}

struct<16> func_731(int iParam0, int iParam1, int iParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15, char[4] cParam16, char[4] cParam17, char[4] cParam18, bool bParam19, bool bParam20, var uParam21)//Position - 0x3A35CC
{
	struct<16> Var0;
	StringCopy(&Var0, "", 64);
	if (iParam2 > -1)
	{
		StringCopy(&Var0, "CONTENT_MODIFIER_", 64);
		StringIntConCat(&Var0, iParam2, 64);
		if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(&Var0, &cParam3))
		{
			return Var0;
		}
	}
	switch (iParam0)
	{
		case 2:
			StringCopy(&Var0, "MP_FM_RACES", 64);
			switch (iParam1)
			{
				case 0:
				case 1:
					StringCopy(&Var0, "MP_FM_RACES_CAR", 64);
					break;
				case 2:
				case 3:
					StringCopy(&Var0, "MP_FM_RACES_SEA", 64);
					break;
				case 6:
				case 7:
				case 18:
				case 19:
					StringCopy(&Var0, "MP_FM_RACES_STUNT", 64);
					break;
				case 4:
				case 5:
					StringCopy(&Var0, "MP_FM_RACES_AIR", 64);
					break;
				case 8:
				case 9:
					StringCopy(&Var0, "MP_FM_BASEJUMP", 64);
					break;
				case 12:
				case 13:
					if (bParam19)
					{
						StringCopy(&Var0, "MP_FM_RACES_CYCLE", 64);
					}
					else
					{
						StringCopy(&Var0, "MP_FM_RACES_BIKE", 64);
					}
					break;
			}
			if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(&Var0, &cParam3))
			{
				StringCopy(&Var0, "MP_FM_RACES", 64);
			}
			break;
		case 0:
			StringCopy(&Var0, "MP_FM_MISSIONS", 64);
			if (bParam20)
			{
				StringCopy(&Var0, "MP_FMADVERSARY", 64);
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&Var0, "MP_FM_MISSIONS", 64);
						break;
					case 2:
						StringCopy(&Var0, "MP_FM_CONTACT", 64);
						break;
					case 3:
						StringCopy(&Var0, "MP_FM_RANDOM", 64);
						break;
					case 4:
						StringCopy(&Var0, "MP_FM_VERSUS", 64);
						break;
					case 9:
						StringCopy(&Var0, "FMMC_RSTAR_MVS" /* GXT: Versus Mission */, 64);
						break;
					case 5:
						StringCopy(&Var0, "MP_FM_LTS", 64);
						break;
					case 6:
						StringCopy(&Var0, "MP_FM_CAPTURE", 64);
						break;
					}
			}
			if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(&Var0, &cParam3))
			{
				StringCopy(&Var0, "MP_FM_MISSIONS", 64);
			}
			break;
		case 1:
			StringCopy(&Var0, "MP_FM_DM", 64);
			break;
		case 3:
			StringCopy(&Var0, "MP_FM_SURVIVAL", 64);
			break;
		case 6:
			StringCopy(&Var0, "MP_FM_GANG_ATTACK", 64);
			break;
		case 8:
			StringCopy(&Var0, "MP_FM_BASEJUMP", 64);
			break;
	}
	return Var0;
}

int func_732(int iParam0)//Position - 0x3A4876
{
	int iVar0;
	if (Global_2725437)
	{
		return 1;
	}
	iVar0 = __LIB_1__.func_556(2481, -1, 0);
	return BitTest(iVar0, iParam0);
}

int func_733(int iParam0)//Position - 0x3A497D
{
	switch (iParam0)
	{
		case 0:
			return 11356;
		default:
	}
	return 11356;
}

bool func_734()//Position - 0x3A4C79
{
	return Global_2714762.f_747;
}

bool func_735()//Position - 0x3A4F62
{
	return Global_2714762.f_719;
}

void func_736(int iParam0, int iParam1)//Position - 0x3A5565
{
	Global_1941273[iParam0 /*8*/].f_2 = 0;
	MISC::SET_BIT(&(Global_1941273[iParam0 /*8*/].f_2), iParam1);
	Global_1941273.f_9 = 1;
}

bool func_737()//Position - 0x3A558F
{
	if (Global_262145.f_12667 /* Tunable: LOWRIDER_DISABLE_LAMAR_FLOW */ == 1)
	{
		return 0;
	}
	return Global_794709.f_203824[0 /*11*/].f_9 != 0;
}

int func_738()//Position - 0x3B077B
{
	if (__LIB_0__.func_718(1))
	{
		return 10;
	}
	return 5;
}

void func_739(int iParam0)//Position - 0x3B0F97
{
	Global_1931618.f_16[iParam0 /*44*/].f_3 = 1;
}

void func_740()//Position - 0x3B0FAC
{
	Global_1931618.f_2 = 1;
}

void func_741(var uParam0)//Position - 0x3B0FBB
{
	Global_1931618.f_8 = uParam0;
}

void func_742(var uParam0)//Position - 0x3B0FCB
{
	Global_1931618.f_9 = uParam0;
}

void func_743(var uParam0, char* sParam1)//Position - 0x36D7
{
	if (*uParam0 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (uParam0->f_1 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (uParam0->f_2 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_744(var uParam0, char* sParam1)//Position - 0x68960
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_745(var uParam0, int iParam1)//Position - 0x68DCB
{
	float fVar0;
	fVar0 = (SYSTEM::TO_FLOAT(iParam1) / 1000f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PAUSE_DURATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SET_PAUSE_DURATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "SET_PAUSE_DURATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_746(var uParam0)//Position - 0x7FDDC
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/];
	}
	return -1;
}

void func_747(var uParam0, int iParam1, int iParam2)//Position - 0x80370
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_748()//Position - 0x80F39
{
	return HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(10) == 5;
}

void func_749(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x80F49
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_750(int iParam0)//Position - 0x811A3
{
	Global_2715699.f_3479.f_21 = iParam0;
}

bool func_751(int iParam0, var uParam1)//Position - 0x86C0B
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_APPISTOL"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_PISTOL50"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_SNSPISTOL"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_MICROSMG"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_SMG"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_COMBATPDW"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_MG"):
			*uParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_COMBATMG"):
			*uParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_ASSAULTMG"):
			*uParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_GUSENBERG"):
			*uParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_MUSKET"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			*uParam1 = joaat("AMMO_GRENADELAUNCHER");
			break;
		case joaat("WEAPON_RPG"):
			*uParam1 = joaat("AMMO_RPG");
			break;
		case joaat("WEAPON_MINIGUN"):
			*uParam1 = joaat("AMMO_MINIGUN");
			break;
		case joaat("WEAPON_FIREWORK"):
			*uParam1 = joaat("AMMO_FIREWORK");
			break;
		case joaat("WEAPON_FLAREGUN"):
			*uParam1 = joaat("AMMO_FLAREGUN");
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			*uParam1 = joaat("AMMO_HOMINGLAUNCHER");
			break;
		case joaat("WEAPON_PROXMINE"):
			*uParam1 = joaat("AMMO_PROXMINE");
			break;
		case joaat("WEAPON_RAILGUN"):
			*uParam1 = joaat("AMMO_RAILGUN");
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_REVOLVER"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			*uParam1 = joaat("AMMO_GRENADELAUNCHER");
			break;
		case joaat("WEAPON_MINISMG"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_PIPEBOMB"):
			*uParam1 = joaat("AMMO_PIPEBOMB");
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			*uParam1 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					*uParam1 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER")))
				{
					*uParam1 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			*uParam1 = joaat("AMMO_SMG");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_SMG_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT")))
				{
					*uParam1 = joaat("AMMO_SMG_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_SMG_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER")))
				{
					*uParam1 = joaat("AMMO_SMG_TRACER");
				}
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			*uParam1 = joaat("AMMO_SNIPER");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam1 = joaat("AMMO_SNIPER_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE")))
				{
					*uParam1 = joaat("AMMO_SNIPER_EXPLOSIVE");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_SNIPER_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_SNIPER_INCENDIARY");
				}
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			*uParam1 = joaat("AMMO_MG");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam1 = joaat("AMMO_MG_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_MG_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_MG_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER")))
				{
					*uParam1 = joaat("AMMO_MG_TRACER");
				}
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			*uParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER")))
				{
					*uParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			*uParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER")))
				{
					*uParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam1 = joaat("AMMO_SHOTGUN_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE")))
				{
					*uParam1 = joaat("AMMO_SHOTGUN_EXPLOSIVE");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT")))
				{
					*uParam1 = joaat("AMMO_SHOTGUN_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_SHOTGUN_INCENDIARY");
				}
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			*uParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER")))
				{
					*uParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			*uParam1 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					*uParam1 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER")))
				{
					*uParam1 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			*uParam1 = joaat("AMMO_SNIPER");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam1 = joaat("AMMO_SNIPER_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_SNIPER_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_SNIPER_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER")))
				{
					*uParam1 = joaat("AMMO_SNIPER_TRACER");
				}
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			*uParam1 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT")))
				{
					*uParam1 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER")))
				{
					*uParam1 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			*uParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ")))
				{
					*uParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*uParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER")))
				{
					*uParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			*uParam1 = joaat("AMMO_RAYPISTOL");
			break;
		case joaat("WEAPON_RAYCARBINE"):
			*uParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			*uParam1 = joaat("AMMO_MINIGUN");
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_MILITARYRIFLE"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_COMBATSHOTGUN"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_GADGETPISTOL"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_EMPLAUNCHER"):
			*uParam1 = joaat("AMMO_EMPLAUNCHER");
			break;
		case joaat("WEAPON_STUNGUN_MP"):
			*uParam1 = joaat("AMMO_STUNGUN");
			break;
		case joaat("WEAPON_TACTICALRIFLE"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_PRECISIONRIFLE"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
	}
	return *uParam1 != -1;
}

int func_752(var* uParam0)//Position - 0xA3652
{
	struct<13> Var0;
	Var0 = { __LIB_0__.func_593() };
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, &Var0))
	{
		return 1;
	}
	return 0;
}

bool func_753(int iParam0)//Position - 0xA5AA1
{
	return iParam0 == 47;
}

char* func_754()//Position - 0xA659F
{
	return "Lamar";
}

int func_755(int iParam0, var uParam1)//Position - 0xAA085
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2779511[iVar0 /*5*/] == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_756()//Position - 0xAA951
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
}

void func_757(bool bParam0)//Position - 0xB9BFF
{
	Global_4456448 = bParam0;
}

void func_758(bool bParam0)//Position - 0xBECAF
{
	if (Global_4980736.f_94390[bParam0 /*1004*/].f_856.f_8 == 0f)
	{
		if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_535, 10) && Global_4980736.f_94390[bParam0 /*1004*/].f_575 != -1)
		{
			Global_4980736.f_94390[bParam0 /*1004*/].f_856.f_8 = SYSTEM::TO_FLOAT(Global_4980736.f_94390[bParam0 /*1004*/].f_575);
		}
	}
	if (__LIB_0__.func_718(5))
	{
		MISC::CLEAR_BIT(&(Global_4980736.f_94390[bParam0 /*1004*/].f_543), 13);
	}
}

void func_759(var uParam0, var uParam1, int iParam2)//Position - 0xDF612
{
	int iVar0;
	if (DATAFILE::DATAARRAY_GET_TYPE(*uParam1, iParam2) != 6)
	{
		return;
	}
	iVar0 = DATAFILE::DATAARRAY_GET_DICT(*uParam1, iParam2);
	if (iVar0 == 0)
	{
	}
	__LIB_12__.func_382(uParam0, &iVar0);
}

void func_760(int iParam0)//Position - 0xE6B35
{
	int iVar0;
	bool bVar1;
	char cVar2[16];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (iVar0 < 4)
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			StringCopy(&cVar2, "mcstr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar3 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mcsrm", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar4 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mcmp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar7 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "aumx", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar5 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mpaumx", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar6 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mpaumxscr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar8 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mpagrom", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar9 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "filtlh", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar10 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "txt2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar11 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			bVar1 = false;
			while (bVar1 <= (Global_4718592.f_658[iVar0 /*22957*/].f_59 - 1))
			{
				if (!__LIB_12__.func_385(&iVar3, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7119[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar3, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7119[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar4, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7191[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar4, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7191[bVar1] = -1;
				}
				if (!__LIB_12__.func_385(&iVar5, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7155[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar5, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7155[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar8, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7209[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar8, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7209[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar9, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7227[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar9, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7227[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar6, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7173[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar6, bVar1);
				}
				else if (Global_4718592.f_658[iVar0 /*22957*/].f_7155[bVar1] != 0 && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7767[bVar1], 8))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7173[bVar1] = Global_4718592.f_658[iVar0 /*22957*/].f_7155[bVar1];
					Global_4718592.f_658[iVar0 /*22957*/].f_7155[bVar1] = 0;
					MISC::CLEAR_BIT(&(Global_4718592.f_658[iVar0 /*22957*/].f_7767[bVar1]), 8);
				}
				if (!__LIB_12__.func_385(&iVar7, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7137[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar7, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7137[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar10, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7713[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar10, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_7713[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar11, 4, bVar1))
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_12956[bVar1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar11, bVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_12956[bVar1 /*16*/]), "", 64);
				}
				bVar1++;
			}
		}
		iVar0++;
	}
}

void func_761(int iParam0)//Position - 0xE6F31
{
	int iVar0;
	bool bVar1;
	char cVar2[16];
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
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (iVar0 < 4)
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar14 = 0;
			iVar15 = 0;
			iVar16 = 0;
			iVar17 = 0;
			iVar18 = 0;
			StringCopy(&cVar2, "airset", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar3 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "airsid", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar4 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "airstv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar5 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "airsod", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar6 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "airsodx", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar7 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "airssp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar8 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "airola", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar9 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "airoha", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar10 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "airsr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar11 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "airsft", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar12 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "airtyp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar13 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmst", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar14 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmsa", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar15 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmsac", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar16 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmsb", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar17 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmse", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar18 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			bVar1 = false;
			while (bVar1 <= (Global_4718592.f_658[iVar0 /*22957*/].f_59 - 1))
			{
				if (!__LIB_12__.func_385(&iVar3, 2, bVar1) && !__LIB_12__.func_385(&iVar4, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/] = DATAFILE::DATAARRAY_GET_INT(iVar3, bVar1);
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_1 = DATAFILE::DATAARRAY_GET_INT(iVar4, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/] = 0;
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_1 = -1;
				}
				if (!__LIB_12__.func_385(&iVar5, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_2 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar5, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_2 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar6, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar6, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_5 = 0;
				}
				if (!__LIB_12__.func_385(&iVar7, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_6 = DATAFILE::DATAARRAY_GET_INT(iVar7, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_6 = 0;
				}
				if (!__LIB_12__.func_385(&iVar8, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar8, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_7 = 25;
				}
				if (!__LIB_12__.func_385(&iVar9, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_8 = DATAFILE::DATAARRAY_GET_INT(iVar9, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_8 = 25;
				}
				if (!__LIB_12__.func_385(&iVar10, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar10, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_9 = 45;
				}
				if (!__LIB_12__.func_385(&iVar11, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_10 = DATAFILE::DATAARRAY_GET_INT(iVar11, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_10 = 0;
				}
				if (!__LIB_12__.func_385(&iVar12, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_11 = DATAFILE::DATAARRAY_GET_INT(iVar12, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_11 = 3500;
				}
				if (!__LIB_12__.func_385(&iVar13, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_12 = DATAFILE::DATAARRAY_GET_INT(iVar13, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16726[bVar1 /*13*/].f_12 = 0;
				}
				if (!__LIB_12__.func_385(&iVar14, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16528[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar14, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16528[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar15, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16546[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar15, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16546[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar16, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16564[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar16, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16564[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar17, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16582[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar17, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16582[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar18, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16600[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar18, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16600[bVar1] = 0;
				}
				bVar1++;
			}
		}
		iVar0++;
	}
}

void func_762(int iParam0)//Position - 0xEB3E2
{
	int iVar0;
	bool bVar1;
	char cVar2[16];
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
	int iVar55;
	int iVar56;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (iVar0 < 4)
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar14 = 0;
			iVar15 = 0;
			iVar16 = 0;
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar23 = 0;
			iVar24 = 0;
			iVar25 = 0;
			iVar26 = 0;
			iVar27 = 0;
			iVar28 = 0;
			iVar29 = 0;
			iVar30 = 0;
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = 0;
			iVar34 = 0;
			iVar35 = 0;
			iVar36 = 0;
			iVar37 = 0;
			iVar38 = 0;
			iVar39 = 0;
			iVar40 = 0;
			iVar41 = 0;
			iVar42 = 0;
			iVar43 = 0;
			iVar44 = 0;
			iVar45 = 0;
			iVar46 = 0;
			iVar47 = 0;
			iVar48 = 0;
			iVar49 = 0;
			iVar50 = 0;
			iVar51 = 0;
			iVar52 = 0;
			iVar53 = 0;
			iVar54 = 0;
			iVar55 = 0;
			iVar56 = 0;
			StringCopy(&cVar2, "destv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar3 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "destr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar4 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "destv1", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar5 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "destv2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar6 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "destw", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar7 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outbt", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar8 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outb", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar9 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar10 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outhv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar14 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outb1v", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar11 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outb2v", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar12 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outw", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar13 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outwtg", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar15 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outiwv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar16 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outiwo", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar18 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outbs", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar19 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outclo", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar21 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outclr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar22 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outclp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar23 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outmm", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar20 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outfp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar24 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outsg", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar25 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outbh", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar26 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outhc", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar30 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outety", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar27 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outeid", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar28 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outilv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar17 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "outonfv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar29 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2t", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar37 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2v", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar38 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2v1", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar39 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2v2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar40 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2r", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar41 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2w", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar42 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2wg", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar44 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2iv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar45 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2io", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar47 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2bs", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar48 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2mm", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar49 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2fp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar50 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2sg", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar51 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2bh", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar52 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2hc", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar56 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2et", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar53 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2id", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar54 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2hv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar43 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2ilv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar46 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2onfv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar55 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mpaib", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar31 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mpaib2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar32 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "vrach", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar33 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "vrach2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar34 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "bundel", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar35 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "bundel2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar36 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			bVar1 = false;
			while (bVar1 <= (Global_4718592.f_658[iVar0 /*22957*/].f_59 - 1))
			{
				if (!__LIB_12__.func_385(&iVar5, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3979[bVar1 /*36*/].f_16 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar5, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3979[bVar1 /*36*/].f_16 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar6, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3979[bVar1 /*36*/].f_19 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar6, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3979[bVar1 /*36*/].f_19 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar7, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3979[bVar1 /*36*/].f_23 = DATAFILE::DATAARRAY_GET_FLOAT(iVar7, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3979[bVar1 /*36*/].f_23 = 0f;
				}
				if (!__LIB_12__.func_385(&iVar3, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3979[bVar1 /*36*/].f_13 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar3, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3979[bVar1 /*36*/].f_13 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar4, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3979[bVar1 /*36*/].f_22 = DATAFILE::DATAARRAY_GET_FLOAT(iVar4, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3979[bVar1 /*36*/].f_22 = 0f;
				}
				if (!__LIB_12__.func_385(&iVar15, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_2 = DATAFILE::DATAARRAY_GET_INT(iVar15, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_2 = -1;
				}
				if (!__LIB_12__.func_385(&iVar16, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/] = DATAFILE::DATAARRAY_GET_INT(iVar16, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/] = 0;
				}
				if (!__LIB_12__.func_385(&iVar17, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_10 = DATAFILE::DATAARRAY_GET_INT(iVar17, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_10 = 0;
				}
				if (!__LIB_12__.func_385(&iVar18, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_1 = DATAFILE::DATAARRAY_GET_INT(iVar18, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_1 = -1;
				}
				if (!__LIB_12__.func_385(&iVar19, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_3 = DATAFILE::DATAARRAY_GET_INT(iVar19, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_3 = 0;
				}
				if (!__LIB_12__.func_385(&iVar20, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_4 = DATAFILE::DATAARRAY_GET_INT(iVar20, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_4 = 120;
				}
				if (!__LIB_12__.func_385(&iVar21, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_32 = DATAFILE::DATAARRAY_GET_FLOAT(iVar21, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_32 = 5f;
				}
				if (!__LIB_12__.func_385(&iVar22, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_33 = DATAFILE::DATAARRAY_GET_FLOAT(iVar22, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_33 = 10f;
				}
				if (!__LIB_12__.func_385(&iVar29, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_11 = DATAFILE::DATAARRAY_GET_INT(iVar29, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_11 = 0;
				}
				if (!__LIB_12__.func_385(&iVar55, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_11 = DATAFILE::DATAARRAY_GET_INT(iVar55, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_11 = 0;
				}
				if (!__LIB_12__.func_385(&iVar23, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_34 = DATAFILE::DATAARRAY_GET_FLOAT(iVar23, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_34 = 30f;
				}
				if (!__LIB_12__.func_385(&iVar31, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_8 = DATAFILE::DATAARRAY_GET_INT(iVar31, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_8 = 0;
				}
				if (!__LIB_12__.func_385(&iVar32, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_8 = DATAFILE::DATAARRAY_GET_INT(iVar32, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_8 = 0;
				}
				if (!__LIB_12__.func_385(&iVar33, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar33, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_9 = 0;
				}
				if (!__LIB_12__.func_385(&iVar34, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar34, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_9 = 0;
				}
				if (!__LIB_12__.func_385(&iVar35, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_35 = DATAFILE::DATAARRAY_GET_INT(iVar35, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_35 = 0;
				}
				if (!__LIB_12__.func_385(&iVar36, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_35 = DATAFILE::DATAARRAY_GET_INT(iVar36, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_35 = 0;
				}
				if (!__LIB_12__.func_385(&iVar24, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar24, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_5 = 0;
				}
				if (!__LIB_12__.func_385(&iVar25, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_6 = DATAFILE::DATAARRAY_GET_INT(iVar25, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_6 = 0;
				}
				if (!__LIB_12__.func_385(&iVar30, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_12 = DATAFILE::DATAARRAY_GET_INT(iVar30, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_12 = 12;
				}
				if (!__LIB_12__.func_385(&iVar26, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar26, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_7 = 0;
				}
				if (!__LIB_12__.func_385(&iVar27, 2, bVar1) && !__LIB_12__.func_385(&iVar28, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_30 = DATAFILE::DATAARRAY_GET_INT(iVar27, bVar1);
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_31 = DATAFILE::DATAARRAY_GET_INT(iVar28, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_30 = 0;
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_31 = -1;
				}
				if (!__LIB_12__.func_385(&iVar44, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_2 = DATAFILE::DATAARRAY_GET_INT(iVar44, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_2 = -1;
				}
				if (!__LIB_12__.func_385(&iVar45, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/] = DATAFILE::DATAARRAY_GET_INT(iVar45, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/] = 0;
				}
				if (!__LIB_12__.func_385(&iVar46, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_10 = DATAFILE::DATAARRAY_GET_INT(iVar46, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_10 = 0;
				}
				if (!__LIB_12__.func_385(&iVar47, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_1 = DATAFILE::DATAARRAY_GET_INT(iVar47, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_1 = -1;
				}
				if (!__LIB_12__.func_385(&iVar48, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_3 = DATAFILE::DATAARRAY_GET_INT(iVar48, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_3 = 0;
				}
				if (!__LIB_12__.func_385(&iVar49, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_4 = DATAFILE::DATAARRAY_GET_INT(iVar49, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_4 = 120;
				}
				if (!__LIB_12__.func_385(&iVar50, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar50, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_5 = 0;
				}
				if (!__LIB_12__.func_385(&iVar51, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_6 = DATAFILE::DATAARRAY_GET_INT(iVar51, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_6 = 0;
				}
				if (!__LIB_12__.func_385(&iVar56, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_12 = DATAFILE::DATAARRAY_GET_INT(iVar56, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_12 = 12;
				}
				if (!__LIB_12__.func_385(&iVar52, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar52, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_7 = 0;
				}
				if (!__LIB_12__.func_385(&iVar53, 2, bVar1) && !__LIB_12__.func_385(&iVar54, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_30 = DATAFILE::DATAARRAY_GET_INT(iVar53, bVar1);
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_31 = DATAFILE::DATAARRAY_GET_INT(iVar54, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_30 = 0;
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_31 = -1;
				}
				if (!__LIB_12__.func_385(&iVar11, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_16 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar11, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_16 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar12, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_19 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar12, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_19 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar13, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_23 = DATAFILE::DATAARRAY_GET_FLOAT(iVar13, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_23 = 0f;
				}
				if (!__LIB_12__.func_385(&iVar14, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_26 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar14, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_26 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar9, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_13 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar9, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_13 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar10, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_22 = DATAFILE::DATAARRAY_GET_FLOAT(iVar10, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_22 = 0f;
				}
				if (!__LIB_12__.func_385(&iVar8, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_2753[bVar1 /*36*/].f_29 = DATAFILE::DATAARRAY_GET_INT(iVar8, bVar1);
				}
				if (!__LIB_12__.func_385(&iVar43, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_26 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar43, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_26 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar38, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_13 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar38, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_13 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar40, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_16 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar40, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_16 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar39, 5, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_19 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar39, bVar1) };
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_19 = { 0f, 0f, 0f };
				}
				if (!__LIB_12__.func_385(&iVar42, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_23 = DATAFILE::DATAARRAY_GET_FLOAT(iVar42, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_23 = 0f;
				}
				if (!__LIB_12__.func_385(&iVar41, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_22 = DATAFILE::DATAARRAY_GET_FLOAT(iVar41, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_22 = 0f;
				}
				if (!__LIB_12__.func_385(&iVar37, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_3366[bVar1 /*36*/].f_29 = DATAFILE::DATAARRAY_GET_INT(iVar37, bVar1);
				}
				bVar1++;
			}
		}
		iVar0++;
	}
}

void func_763(int iParam0)//Position - 0xEC881
{
	int iVar0;
	bool bVar1;
	char cVar2[16];
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
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (iVar0 < 4)
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar14 = 0;
			iVar15 = 0;
			iVar16 = 0;
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar23 = 0;
			StringCopy(&cVar2, "sia", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar3 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "stiam", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar4 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mmiam2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar5 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "siat", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar6 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "stiamt", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar7 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mmiam2t", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar8 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "sim", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar9 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mmim", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar10 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mmi2m", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar11 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "uacp1", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar12 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "uacp2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar13 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			iVar24 = 0;
			while (iVar24 <= 127)
			{
				if (iVar3 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar3, iVar24) == 2)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_65[iVar24] = DATAFILE::DATAARRAY_GET_INT(iVar3, iVar24);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_65[iVar24] = 0;
				}
				if (iVar4 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar4, iVar24) == 2)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_343[iVar24] = DATAFILE::DATAARRAY_GET_INT(iVar4, iVar24);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_343[iVar24] = 0;
				}
				if (iVar5 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar5, iVar24) == 2)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_620[iVar24] = DATAFILE::DATAARRAY_GET_INT(iVar5, iVar24);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_620[iVar24] = 0;
				}
				if (iVar9 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar9, iVar24) == 3)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_207[iVar24] = DATAFILE::DATAARRAY_GET_FLOAT(iVar9, iVar24);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_207[iVar24] = 1f;
				}
				if (iVar10 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar10, iVar24) == 3)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_485[iVar24] = DATAFILE::DATAARRAY_GET_FLOAT(iVar10, iVar24);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_485[iVar24] = 1f;
				}
				if (iVar11 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar11, iVar24) == 3)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_762[iVar24] = DATAFILE::DATAARRAY_GET_FLOAT(iVar11, iVar24);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_762[iVar24] = 1f;
				}
				iVar24++;
			}
			iVar24 = 0;
			while (iVar24 <= 11)
			{
				if (iVar6 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar24) == 2)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_194[iVar24] = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar24);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_194[iVar24] = 0;
				}
				if (iVar7 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar7, iVar24) == 2)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_472[iVar24] = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar24);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_472[iVar24] = 0;
				}
				if (iVar8 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar8, iVar24) == 2)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_749[iVar24] = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar24);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_749[iVar24] = 0;
				}
				iVar24++;
			}
			iVar25 = 0;
			while (iVar25 <= 3)
			{
				if (iVar12 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar12, iVar25) == 2)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_895[iVar25] = DATAFILE::DATAARRAY_GET_INT(iVar12, iVar25);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_895[iVar25] = -1;
				}
				if (iVar13 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar13, iVar25) == 2)
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_900[iVar25] = DATAFILE::DATAARRAY_GET_INT(iVar13, iVar25);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_900[iVar25] = -1;
				}
				iVar25++;
			}
			StringCopy(&cVar2, "icmsk1", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar14 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "icmsk2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar15 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "icmsk3", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar16 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "itpreqs", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar17 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "mnvms", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar18 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivms", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar19 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmsh", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar20 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "isvmg", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar21 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "isvro", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar22 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			StringCopy(&cVar2, "isvhr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar23 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &cVar2);
			bVar1 = false;
			while (bVar1 <= (Global_4718592.f_658[iVar0 /*22957*/].f_59 - 1))
			{
				if (!__LIB_12__.func_385(&iVar14, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16948[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar14, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16948[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar15, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16966[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar15, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16966[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar16, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16984[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar16, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16984[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar17, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_17090[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar17, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_17090[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar18, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16474[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar18, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16474[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar19, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16492[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar19, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16492[bVar1] = 0;
				}
				if (!__LIB_12__.func_385(&iVar20, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16510[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar20, bVar1);
					if (Global_4718592.f_658[iVar0 /*22957*/].f_16510[bVar1] == 0)
					{
						Global_4718592.f_658[iVar0 /*22957*/].f_16510[bVar1] = -1;
					}
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16510[bVar1] = -1;
				}
				if (!__LIB_12__.func_385(&iVar21, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16618[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar21, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16618[bVar1] = -1;
				}
				if (!__LIB_12__.func_385(&iVar22, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16636[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar22, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16636[bVar1] = -1;
				}
				if (!__LIB_12__.func_385(&iVar23, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16654[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar23, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16654[bVar1] = -1;
				}
				bVar1++;
			}
		}
		iVar0++;
	}
}

void func_764(int iParam0, bool bParam1)//Position - 0xF961E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	char cVar5[16];
	char cVar6[16];
	int iVar7;
	if (bParam1)
	{
		if (iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "menubs25") == 2)
		{
			iVar0 = DATAFILE::DATADICT_GET_INT(iParam0, "menubs25");
		}
		else
		{
			iVar0 = 0;
		}
		if (BitTest(iVar0, 19))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 19);
		}
	}
	if (((iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(iParam0, "rsgmx") == 2) && DATAFILE::DATADICT_GET_TYPE(iParam0, "rsgnu") == 2) || BitTest(Global_4718592.f_35, 19))
	{
		Global_4718592.f_110391 = DATAFILE::DATADICT_GET_INT(iParam0, "rsgmx");
		Global_4718592.f_110392 = DATAFILE::DATADICT_GET_INT(iParam0, "rsgnu");
		Global_4718592.f_110393 = DATAFILE::DATADICT_GET_INT(iParam0, "rsgbs");
		if (BitTest(Global_4718592.f_35, 19))
		{
			Global_4718592.f_110391 = 20;
		}
		if (((Global_4718592.f_110391 > 0 && Global_4718592.f_110392 != 0) || Global_4718592.f_174999 != -1) || BitTest(Global_4718592.f_35, 19))
		{
			iVar7 = Global_4718592.f_110391;
			if (!__LIB_3__.func_695())
			{
				iVar7 = 20;
			}
			iVar1 = 0;
			while (iVar1 <= (iVar7 - 1))
			{
				if (iVar1 < 20)
				{
					StringCopy(&Var4, "rsg", 16);
					StringIntConCat(&Var4, iVar1, 16);
					cVar5 = { Var4 };
					StringConCat(&cVar5, "mx", 16);
					cVar6 = { Var4 };
					StringConCat(&cVar6, "nu", 16);
					if (DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar5) == 2 && DATAFILE::DATADICT_GET_TYPE(iParam0, &cVar6) == 2)
					{
						Global_4718592.f_110415[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar5);
						Global_4718592.f_110436[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar6);
						cVar5 = { Var4 };
						StringConCat(&cVar5, "bs", 16);
						Global_4718592.f_110457[iVar1] = DATAFILE::DATADICT_GET_INT(iParam0, &cVar5);
					}
					cVar5 = { Var4 };
					StringConCat(&cVar5, "ee", 16);
					iVar3 = DATAFILE::DATADICT_GET_INT(iParam0, &cVar5);
					Global_4718592.f_110394[iVar1] = iVar3;
					iVar2 = 0;
					while (iVar2 <= 19)
					{
						cVar5 = { Var4 };
						StringConCat(&cVar5, "es", 16);
						StringIntConCat(&cVar5, iVar2, 16);
						iVar3 = DATAFILE::DATADICT_GET_INT(iParam0, &cVar5);
						Global_4718592.f_110478[iVar1 /*21*/][iVar2] = iVar3;
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
}

bool func_765(int iParam0)//Position - 0xFA13E
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_96.f_32, 5);
}

char* func_766(char* sParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0xFB1BF
{
	char* sVar0;
	if (*iParam1 == 0)
	{
		return "";
	}
	sVar0 = "";
	if (DATAFILE::DATADICT_GET_TYPE(*iParam1, sParam0) == 4)
	{
		sVar0 = DATAFILE::DATADICT_GET_STRING(*iParam1, sParam0);
	}
	else if (__LIB_3__.func_695())
	{
		if (!MISC::ARE_STRINGS_EQUAL(sParam3, "DEFAULT" /* GXT: _ */))
		{
			sVar0 = sParam3;
		}
	}
	else
	{
		sVar0 = sParam2;
	}
	return sVar0;
}

void func_767()//Position - 0xFD807
{
	if (__LIB_0__.func_494())
	{
		Global_2723612.f_8 = 1;
	}
	Global_2723612.f_7 = 1;
}

void func_768()//Position - 0xFEBAE
{
	MISC::CLEAR_BIT(&(Global_1048576.f_10), 9);
}

void func_769()//Position - 0xFEBC2
{
	MISC::CLEAR_BIT(&(Global_1048576.f_10), 10);
}

bool func_770()//Position - 0xFEBD6
{
	return BitTest(Global_1048576.f_10, 9);
}

void func_771()//Position - 0xFEBE7
{
	MISC::SET_BIT(&(Global_1048576.f_10), 10);
}

void func_772()//Position - 0xFECBB
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 24);
}

bool func_773()//Position - 0xFFE46
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32, 5);
}

bool func_774()//Position - 0xFFE7C
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32, 13);
}

void func_775()//Position - 0xFFEA7
{
	MISC::SET_BIT(&(Global_1048576.f_10), 25);
}

var func_776()//Position - 0xFFEBB
{
	return BitTest(Global_1048576.f_10, 12);
}

bool func_777()//Position - 0xFFF82
{
	return BitTest(Global_1048576.f_10, 4);
}

bool func_778()//Position - 0x1005CB
{
	return BitTest(Global_2715699.f_1.f_2809, 9);
}

void func_779()//Position - 0x1005F0
{
	MISC::SET_BIT(&Global_2714762, 23);
}

void func_780(int iParam0)//Position - 0x10061D
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11 = iParam0;
}

void func_781()//Position - 0x10065B
{
	StringCopy(&(Global_2714762.f_868), "", 24);
}

void func_782()//Position - 0x10066E
{
	Global_2714762.f_874 = { 0f, 0f, 0f };
}

void func_783()//Position - 0x100682
{
	Global_2714762.f_867 = 0;
}

void func_784()//Position - 0x1006C7
{
	if (!Global_262145.f_18776 /* Tunable: 766468427 */)
	{
		NETWORK::NETWORK_SESSION_SET_GAMEMODE(0);
	}
}

void func_785()//Position - 0x100826
{
	Global_1931618.f_8 = -1;
}

void func_786(int iParam0)//Position - 0x100835
{
	Global_1931618.f_16[iParam0 /*44*/].f_3 = 0;
}

void func_787()//Position - 0x10084A
{
	Global_2714762.f_859 = 0;
}

bool func_788()//Position - 0x1008E3
{
	return BitTest(Global_2715699.f_1.f_2810, 0);
}

bool func_789()//Position - 0x100984
{
	return Global_2714762.f_880;
}

bool func_790()//Position - 0x100993
{
	return Global_2714762.f_881;
}

void func_791()//Position - 0x100C21
{
	if (__LIB_0__.func_493())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
		}
		MISC::CLEAR_BIT(&Global_1965451, 4);
		MISC::CLEAR_OVERRIDE_WEATHER();
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_792(int iParam0)//Position - 0x100DA2
{
	if (iParam0 != Global_1836148)
	{
		Global_1836148 = iParam0;
	}
}

void func_793(bool bParam0, var uParam1)//Position - 0x101071
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sVar1 = "";
		switch (iVar0)
		{
			case 0:
				sVar1 = "Set_Team_Band_A";
				break;
			case 1:
				sVar1 = "Set_Team_Band_B";
				break;
			case 2:
				sVar1 = "Set_Team_Band_C";
				break;
			case 3:
				sVar1 = "Set_Team_Band_D";
				break;
		}
		if (Global_4718592.f_162543.f_29[iVar0] > 0 && bParam0)
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*uParam1, sVar1);
			INTERIOR::SET_INTERIOR_ENTITY_SET_TINT_INDEX(*uParam1, sVar1, Global_4718592.f_162543.f_29[iVar0]);
		}
		else
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*uParam1, sVar1);
		}
		iVar0++;
	}
}

void func_794(var uParam0, char* sParam1, bool bParam2)//Position - 0x10111E
{
	if (bParam2)
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*uParam0, sParam1);
	}
	else
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*uParam0, sParam1);
	}
}

char* func_795(int iParam0)//Position - 0x1014DF
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "MP_Arena_theme_atlantis";
		case 2:
			return "MP_Arena_theme_evening";
		case 3:
			return "MP_Arena_theme_hell";
		case 4:
			return "MP_Arena_theme_midday";
		case 5:
			return "MP_Arena_theme_morning";
		case 6:
			if (Global_4718592.f_162543 == 2)
			{
				return "MP_Arena_theme_scifi_night";
			}
			else
			{
				return "MP_Arena_theme_night";
			}
			break;
		case 7:
			return "MP_Arena_theme_saccharine";
		case 8:
			return "MP_Arena_theme_sandstorm";
		case 9:
			return "MP_Arena_theme_storm";
		case 10:
			return "MP_Arena_theme_toxic";
	}
	return "";
}

bool func_796()//Position - 0x1015B1
{
	return (((BitTest(Global_1965531, 2) || BitTest(Global_1965531, 4)) || BitTest(Global_1965531, 5)) || BitTest(Global_1965531, 3));
}

int func_797(bool bParam0)//Position - 0x101600
{
	if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() == -1 && __LIB_0__.func_493())
	{
		return 1;
	}
	if ((GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 && !bParam0) && __LIB_0__.func_493())
	{
		return 1;
	}
	return 0;
}

int func_798(int iParam0)//Position - 0x1018F5
{
	switch (iParam0)
	{
		case 1:
			return 17;
			break;
		case 2:
			return 10;
			break;
		case 3:
			return 10;
			break;
	}
	return 1;
}

void func_799(bool bParam0, var uParam1)//Position - 0x10192F
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sVar1 = "";
		switch (iVar0)
		{
			case 0:
				sVar1 = "Set_Crowd_A";
				break;
			case 1:
				sVar1 = "Set_Crowd_B";
				break;
			case 2:
				sVar1 = "Set_Crowd_C";
				break;
			case 3:
				sVar1 = "Set_Crowd_D";
				break;
		}
		if (bParam0)
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*uParam1, sVar1);
			INTERIOR::SET_INTERIOR_ENTITY_SET_TINT_INDEX(*uParam1, sVar1, Global_4718592.f_162543.f_34[iVar0]);
		}
		else
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*uParam1, sVar1);
		}
		iVar0++;
	}
}

void func_800()//Position - 0x1056E6
{
	MISC::SET_BIT(&(Global_1048576.f_10), 16);
}

bool func_801()//Position - 0x10577C
{
	return BitTest(Global_2715699.f_1.f_2809, 11);
}

char* func_802(int iParam0)//Position - 0x105790
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		case 1:
			return "Tournament";
		case 2:
			return "LiveStreaming";
		case 3:
			return "Sweepstakes";
		case 4:
			return "FeaturedPlaylist";
		default:
	}
	return "";
}

void func_803()//Position - 0x105816
{
	Global_2714762.f_722 = 0;
}

var func_804()//Position - 0x105826
{
	return Global_2714762.f_722;
}

void func_805()//Position - 0x105835
{
	Global_2714762.f_723 = 0;
}

int func_806()//Position - 0x105BBE
{
	return Global_2715699.f_1.f_2808;
}

int func_807()//Position - 0x105CE0
{
	if (__LIB_0__.func_830(Global_4718592.f_116524))
	{
		return Global_262145.f_4768 /* Tunable: NUMBER_SCTV_CASINO_HEIST */;
	}
	return 2;
}

int func_808()//Position - 0x105D8A
{
	return Global_2715699.f_1.f_2805;
}

void func_809(int iParam0)//Position - 0x105E1F
{
	Global_2715699.f_1.f_2811 = iParam0;
}

int func_810(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x105E32
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_2715699.f_1.f_2805 - 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_2715699.f_1.f_845[iVar0 /*57*/]), &uParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_811()//Position - 0x106078
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 24);
}

void func_812()//Position - 0x1060CE
{
	MISC::CLEAR_BIT(&Global_1574589, 1);
}

void func_813()//Position - 0x1060DF
{
	MISC::CLEAR_BIT(&Global_1574589, 0);
}

var func_814(int iParam0)//Position - 0x1060F0
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 24);
}

var func_815()//Position - 0x10614F
{
	return BitTest(Global_1048576.f_10, 2);
}

bool func_816(int iParam0)//Position - 0x25A6
{
	return Global_2689235[iParam0 /*453*/].f_119 == 3;
}

int func_817(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0x261B
{
	if (iParam1 != 1)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_794709.f_4[iParam2 /*88*/].f_68 == 1)
		{
			return 1;
		}
		return 0;
	}
	if (Global_998606.f_604[iParam2 /*88*/].f_68 == 1)
	{
		return 1;
	}
	return 0;
}

int func_818(int iParam0)//Position - 0x5972
{
	switch (iParam0)
	{
		case 0:
			return 1657186075;
		case 1:
			return -1789688675;
		case 2:
			return -1433171161;
		case 3:
			return -1635197776;
		case 4:
			return -1509298929;
		case 5:
			return 1367922159;
		default:
	}
	return 1657186075;
}

int func_819(int iParam0)//Position - 0x668F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6210[iVar0])
		{
			if (Global_262145.f_5065[iVar0 /*51*/][iVar1] == iParam0)
			{
				return Global_262145.f_6890[iVar0];
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

bool func_820()//Position - 0x69E7
{
	return Global_1835431.f_3;
}

int func_821(int iParam0)//Position - 0x749F
{
	if (iParam0 < 50)
	{
		return 50;
	}
	return 999;
}

bool func_822()//Position - 0x7AE1
{
	return Global_2714762.f_700;
}

int func_823(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x8575
{
	if (iParam0 != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Global_794709.f_4[iParam2 /*88*/].f_68 == 9)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_824(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x85B3
{
	if (iParam0 != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Global_794709.f_4[iParam2 /*88*/].f_68 == 8)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_825(int iParam0, int iParam1, bool bParam2)//Position - 0x8671
{
	if (!bParam2)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 202:
		case 203:
		case 204:
			switch (iParam1)
			{
				case 202:
				case 203:
				case 204:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_826(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x87B6
{
	if (iParam0 != 0)
	{
		return 1;
	}
	if (bParam1)
	{
		if (bParam3)
		{
			if (((((BitTest(Global_794709.f_4[iParam2 /*88*/].f_76, 1) || BitTest(Global_794709.f_4[iParam2 /*88*/].f_76, 2)) || Global_794709.f_4[iParam2 /*88*/].f_68 == 2) || Global_794709.f_4[iParam2 /*88*/].f_68 == 3) && BitTest(Global_794709.f_4[iParam2 /*88*/].f_76, 14)) && Global_794709.f_4[iParam2 /*88*/].f_68 != 8)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (bParam3)
	{
		if (((((BitTest(Global_998606.f_604[iParam2 /*88*/].f_76, 1) || BitTest(Global_998606.f_604[iParam2 /*88*/].f_76, 2)) || Global_998606.f_604[iParam2 /*88*/].f_68 == 2) || Global_998606.f_604[iParam2 /*88*/].f_68 == 3) && BitTest(Global_998606.f_604[iParam2 /*88*/].f_76, 14)) && Global_794709.f_4[iParam2 /*88*/].f_68 != 8)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_827(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x9114
{
	if (iParam0 != 0)
	{
		return 1;
	}
	if (bParam1)
	{
		if (bParam3)
		{
			return BitTest(Global_794709.f_4[iParam2 /*88*/].f_76, 10);
		}
		else
		{
			return !BitTest(Global_794709.f_4[iParam2 /*88*/].f_76, 10);
		}
	}
	else if (bParam3)
	{
		return BitTest(Global_998606.f_604[iParam2 /*88*/].f_76, 10);
	}
	else
	{
		return !BitTest(Global_998606.f_604[iParam2 /*88*/].f_76, 10);
	}
	return 1;
}

int func_828(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x918B
{
	if (iParam0 != 0)
	{
		return 1;
	}
	if (bParam1)
	{
		if (bParam3)
		{
			return BitTest(Global_794709.f_4[iParam2 /*88*/].f_76, 7);
		}
		else
		{
			return !BitTest(Global_794709.f_4[iParam2 /*88*/].f_76, 7);
		}
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_829(bool bParam0)//Position - 0xAAF4
{
	if (bParam0)
	{
		if (Global_2621440 == 0)
		{
			Global_2621440 = 1;
		}
	}
	else if (Global_2621440 == 1)
	{
		Global_2621440 = 0;
	}
}

int func_830(var uParam0)//Position - 0xAE5A
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3))
	{
		return 1;
	}
	return 0;
}

float func_831()//Position - 0xB32A
{
	return Global_4980736.f_78578[0 /*450*/].f_3;
}

Vector3 func_832(struct<3> Param0)//Position - 0xB341
{
	struct<3> Var0;
	Var0 = { Param0 };
	Var0.f_2 = (Var0.f_2 + 100f);
	return Var0;
}

bool func_833()//Position - 0xB404
{
	return (Global_4718592.f_107227 == 24 || Global_4718592.f_107227 == 25);
}

bool func_834()//Position - 0xB49B
{
	return (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19);
}

bool func_835(int iParam0)//Position - 0xB810
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 6);
}

bool func_836()//Position - 0xB9C1
{
	return BitTest(Global_1048576.f_10, 16);
}

struct<2> func_837(var uParam0, int iParam1)//Position - 0xBA1F
{
	struct<2> Var0;
	Var0.f_0 = NETWORK::GET_TIME_OFFSET(*uParam0, iParam1);
	return Var0;
}

int func_838(int iParam0)//Position - 0xEA02
{
	if ((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("trash2") || iParam0 == joaat("emperor2")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("barracks3")) || iParam0 == joaat("slamvan2")) || iParam0 == joaat("boxville3")) || iParam0 == joaat("boxville4")) || iParam0 == joaat("picador")) || iParam0 == joaat("peyote")) || iParam0 == joaat("tornado")) || iParam0 == joaat("tr2")) || iParam0 == joaat("lurcher")) || iParam0 == joaat("btype2")) || iParam0 == joaat("dune4")) || iParam0 == joaat("ruiner3")) || iParam0 == joaat("cargoplane")) || iParam0 == joaat("trailerlarge")) || iParam0 == joaat("phantom3")) || iParam0 == joaat("hauler2")) || iParam0 == joaat("submersible2")) || iParam0 == joaat("policet")) || iParam0 == joaat("terbyte")) || iParam0 == joaat("blimp3")) || iParam0 == joaat("rcbandito")) || iParam0 == joaat("schwarzer")) || iParam0 == joaat("cargobob4")) || iParam0 == joaat("minitank")) || iParam0 == joaat("bison3")) || iParam0 == joaat("boxville")) || iParam0 == joaat("burrito")) || iParam0 == joaat("burrito2")) || iParam0 == joaat("pony")) || iParam0 == joaat("rancherxl")) || iParam0 == joaat("rebel2")) || iParam0 == joaat("seashark3")) || iParam0 == joaat("forklift")) || iParam0 == joaat("dloader")) || iParam0 == joaat("kosatka")) || iParam0 == joaat("avisa")) || iParam0 == joaat("seasparrow2")) || iParam0 == joaat("boattrailer")) || iParam0 == joaat("youga4")) || iParam0 == joaat("mule5")) || iParam0 == joaat("airbus")) || iParam0 == joaat("rentalbus"))
	{
		return 1;
	}
	return 0;
}

int func_839(int iParam0)//Position - 0xECB2
{
	if (iParam0 == joaat("prairie"))
	{
		return 1;
	}
	return 0;
}

var func_840()//Position - 0x10ADA
{
	return Global_4456448;
}

int func_841(int iParam0, int iParam1)//Position - 0x10BDF
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 6:
		case 7:
		case 18:
		case 19:
		case 12:
		case 13:
		case 22:
		case 23:
		case 20:
		case 21:
		case 24:
		case 25:
		case 26:
		case 27:
			switch (iParam1)
			{
				case 7:
					return 7;
				case 6:
					return 11;
				case 3:
					return 7;
				case 4:
					return 9;
				case 1:
					return 11;
				case 5:
					return 4;
				case 2:
					return 15;
				case 0:
					return 4;
				case 9:
					return 16;
				case 10:
					return 5;
				case 11:
					return 5;
				case 12:
					return 12;
				case 8:
					return 14;
				case 13:
					return 6;
				case 15:
					return 0;
				case 16:
					return 0;
				case 17:
					return 0;
				case 14:
					return 0;
				case 18:
					return 0;
				case 19:
					return 0;
				case 20:
					return 0;
				default:
			}
			break;
		case 2:
			return 6;
		case 3:
			return 6;
		case 4:
		case 5:
			switch (iParam1)
			{
				case 0:
					return 7;
				case 1:
					return 7;
				case 2:
					return 1;
				default:
			}
			break;
	}
	return 1;
}

var func_842(int iParam0)//Position - 0x10F4E
{
	return Global_2686568[iParam0 /*41*/].f_33;
}

int func_843()//Position - 0x12B2F
{
	if (BitTest(Global_1574942, 6))
	{
		return 0;
	}
	return BitTest(Global_1574942, 0);
}

int func_844()//Position - 0x12C86
{
	if (joaat("MP_M_Freemode_01") == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_845()//Position - 0x162F8
{
	return Global_2787917;
}

var func_846()//Position - 0x482F6
{
	return Global_1836575;
}

void func_847(int iParam0, int iParam1)//Position - 0x52A53
{
	if (iParam1 == joaat("besra"))
	{
		VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, 0f);
	}
}

void func_848(int iParam0, int iParam1)//Position - 0x52D71
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("swift"))
	{
		if (iParam1 == 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("marshall"))
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 28;
				iVar1 = 64;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 1:
				iVar0 = 64;
				iVar1 = 111;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 2:
				iVar0 = 53;
				iVar1 = 89;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 3:
				iVar0 = 28;
				iVar1 = 89;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 4:
				iVar0 = 28;
				iVar1 = 111;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 5:
				iVar0 = 64;
				iVar1 = 28;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 6:
				iVar0 = 1;
				iVar1 = 89;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 7:
				iVar0 = 111;
				iVar1 = 28;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 8:
				iVar0 = 70;
				iVar1 = 111;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 9:
				iVar0 = 64;
				iVar1 = 111;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 10:
				iVar0 = 53;
				iVar1 = 111;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 11:
				iVar0 = 28;
				iVar1 = 111;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 12:
				iVar0 = 1;
				iVar1 = 53;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 13:
				iVar0 = 88;
				iVar1 = 64;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 14:
				iVar0 = 28;
				iVar1 = 64;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 15:
				iVar0 = 70;
				iVar1 = 88;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 16:
				iVar0 = 1;
				iVar1 = 88;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 17:
				iVar0 = 53;
				iVar1 = 28;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 18:
				iVar0 = 28;
				iVar1 = 111;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 19:
				iVar0 = 64;
				iVar1 = 28;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 20:
				iVar0 = 70;
				iVar1 = 111;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 21:
				iVar0 = 28;
				iVar1 = 111;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 22:
				iVar0 = 53;
				iVar1 = 38;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 23:
				iVar0 = 53;
				iVar1 = 28;
				iVar2 = 4;
				iVar3 = 156;
				break;
			case 24:
				iVar0 = 111;
				iVar1 = 28;
				iVar2 = 4;
				iVar3 = 156;
				break;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, iVar0, iVar1);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, iVar2, iVar3);
	}
}

int func_849(int iParam0)//Position - 0x53016
{
	switch (iParam0)
	{
		case 0:
			return 134;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 4;
			break;
		case 3:
			return 27;
			break;
		case 4:
			return 33;
			break;
		case 5:
			return 135;
			break;
		case 6:
			return 38;
			break;
		case 7:
			return 90;
			break;
		case 8:
			return 89;
			break;
		case 9:
			return 50;
			break;
		case 10:
			return 53;
			break;
		case 11:
			return 64;
			break;
		case 12:
			return 74;
			break;
		case 13:
			return 95;
			break;
		case 14:
			return 145;
			break;
		case 15:
			return 111;
			break;
	}
	return 0;
}

void func_850(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x533E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = 0;
		*uParam2 = 0;
		*uParam3 = 0;
		*uParam4 = 0;
		return;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("bruiser"):
			*uParam1 = 14;
			*uParam2 = 13;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("bruiser2"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("bruiser3"):
			*uParam1 = 131;
			*uParam2 = 55;
			*uParam3 = 0;
			*uParam4 = 156;
			*uParam5 = 0;
			*uParam6 = 132;
			break;
		case joaat("brutus"):
			*uParam1 = 12;
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 156;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("brutus2"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 150;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("brutus3"):
			*uParam1 = 131;
			*uParam2 = 39;
			*uParam3 = 0;
			*uParam4 = 156;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("cerberus"):
			*uParam1 = 153;
			*uParam2 = 159;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("cerberus2"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("cerberus3"):
			*uParam1 = 131;
			*uParam2 = 135;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("deathbike"):
			*uParam1 = 154;
			*uParam2 = 159;
			*uParam3 = 0;
			*uParam4 = 145;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("deathbike2"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("deathbike3"):
			*uParam1 = 107;
			*uParam2 = 55;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("dominator4"):
			*uParam1 = 131;
			*uParam2 = 131;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("dominator5"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("dominator6"):
			*uParam1 = 131;
			*uParam2 = 131;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("impaler2"):
			*uParam1 = 14;
			*uParam2 = 159;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("impaler3"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("impaler4"):
			*uParam1 = 131;
			*uParam2 = 83;
			*uParam3 = 0;
			*uParam4 = 156;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("imperator"):
			*uParam1 = 12;
			*uParam2 = 12;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("imperator2"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("imperator3"):
			*uParam1 = 12;
			*uParam2 = 55;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("issi4"):
			*uParam1 = 155;
			*uParam2 = 155;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("issi5"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("issi6"):
			*uParam1 = 131;
			*uParam2 = 39;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("monster3"):
			*uParam1 = 153;
			*uParam2 = 12;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("monster4"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("monster5"):
			*uParam1 = 131;
			*uParam2 = 154;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("scarab"):
			*uParam1 = 153;
			*uParam2 = 154;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("scarab2"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("scarab3"):
			*uParam1 = 87;
			*uParam2 = 138;
			*uParam3 = 7;
			*uParam4 = 135;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("slamvan4"):
			*uParam1 = 154;
			*uParam2 = 159;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("slamvan5"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("slamvan6"):
			*uParam1 = 131;
			*uParam2 = 131;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("zr380"):
			*uParam1 = 13;
			*uParam2 = 131;
			*uParam3 = 0;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("zr3802"):
			*uParam1 = 107;
			*uParam2 = 159;
			*uParam3 = 107;
			*uParam4 = 160;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
		case joaat("zr3803"):
			*uParam1 = 131;
			*uParam2 = 55;
			*uParam3 = 0;
			*uParam4 = 156;
			*uParam5 = 1;
			*uParam6 = 132;
			break;
	}
}

int func_851(int iParam0)//Position - 0x53955
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 18;
		case 3:
			return 19;
		case 4:
			return 14;
		case 5:
			return 111;
		case 6:
			return 27;
		case 7:
			return 40;
		case 8:
			return 41;
		case 9:
			return 42;
		case 10:
			return 49;
		case 11:
			return 50;
		case 12:
			return 54;
		case 13:
			return 80;
		case 14:
			return 62;
		case 15:
			return 64;
		case 16:
			return 88;
		case 17:
			return 89;
		case 18:
			return 105;
		case 19:
			return 37;
		case 20:
			return 90;
		case 21:
			return 135;
		case 22:
			return 137;
		case 23:
			return 136;
		case 24:
			return 145;
		case 25:
			return 71;
		case 26:
			return 92;
		case 27:
			return 53;
		case 28:
			return 70;
		case 29:
			return 31;
		case 30:
			return 34;
		case 31:
			return 38;
		case 32:
			return 138;
		case 33:
			return 12;
		case 34:
			return 13;
		case 35:
			return 112;
		case 36:
			return 83;
		case 37:
			return 39;
		case 38:
			return 128;
		case 39:
			return 55;
		case 40:
			return 148;
		case 41:
			return 153;
		case 42:
			return 154;
		case 43:
			return 117;
		case 44:
			return 119;
		case 45:
			return 159;
		case 46:
			return 120;
		case 47:
			return 67;
		default:
	}
	return -1;
}

int func_852(int iParam0)//Position - 0x53BC8
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		switch (iVar0)
		{
			case joaat("velum"):
				return 1;
			case joaat("vestra"):
				return 1;
			case joaat("windsor"):
				return 1;
			case joaat("mammatus"):
				return 1;
			}
		default:
	}
	return 0;
}

void func_853(int iParam0)//Position - 0x53E99
{
	int iVar0;
	bool bVar1;
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return;
	}
	if (BitTest(Global_2715699.f_1.f_2813[iVar0], bVar1))
	{
	}
	MISC::CLEAR_BIT(&(Global_2715699.f_1.f_2813[iVar0]), bVar1);
}

int func_854(int iParam0, bool bParam1)//Position - 0x53F32
{
	if (bParam1)
	{
		return Global_1659909;
	}
	return Global_1853348[iParam0 /*834*/].f_96.f_6;
}

bool func_855(int iParam0)//Position - 0x54138
{
	return ((iParam0 == joaat("deathbike") || iParam0 == joaat("deathbike2")) || iParam0 == joaat("deathbike3"));
}

bool func_856(int iParam0)//Position - 0x54C1E
{
	return ((iParam0 == joaat("zr380") || iParam0 == joaat("zr3802")) || iParam0 == joaat("zr3803"));
}

bool func_857(int iParam0)//Position - 0x54C4A
{
	return ((iParam0 == joaat("slamvan4") || iParam0 == joaat("slamvan5")) || iParam0 == joaat("slamvan6"));
}

bool func_858(int iParam0)//Position - 0x54C76
{
	return ((iParam0 == joaat("scarab") || iParam0 == joaat("scarab2")) || iParam0 == joaat("scarab3"));
}

bool func_859(int iParam0)//Position - 0x54CCE
{
	return ((iParam0 == joaat("issi4") || iParam0 == joaat("issi5")) || iParam0 == joaat("issi6"));
}

bool func_860(int iParam0)//Position - 0x54CFA
{
	return ((iParam0 == joaat("imperator") || iParam0 == joaat("imperator2")) || iParam0 == joaat("imperator3"));
}

bool func_861(int iParam0)//Position - 0x54D26
{
	return ((iParam0 == joaat("impaler2") || iParam0 == joaat("impaler3")) || iParam0 == joaat("impaler4"));
}

bool func_862(int iParam0)//Position - 0x54D52
{
	return ((iParam0 == joaat("dominator4") || iParam0 == joaat("dominator5")) || iParam0 == joaat("dominator6"));
}

bool func_863(int iParam0)//Position - 0x54DAA
{
	return ((iParam0 == joaat("brutus") || iParam0 == joaat("brutus2")) || iParam0 == joaat("brutus3"));
}

int func_864(int iParam0)//Position - 0x5D288
{
	switch (iParam0)
	{
		case joaat("asbo"):
			return 3;
			break;
		case joaat("buccaneer"):
			return 3;
			break;
		case joaat("buccaneer2"):
			return 10;
			break;
		case joaat("chino2"):
			return 5;
			break;
		case joaat("faction2"):
			return 8;
			break;
		case joaat("moonbeam2"):
			return 2;
			break;
		case joaat("panto"):
			return 2;
			break;
		case joaat("picador"):
			return 1;
			break;
		case joaat("voodoo"):
			return 2;
			break;
		case joaat("banshee2"):
			return 1;
			break;
		case joaat("sultanrs"):
			return 1;
			break;
		case joaat("dubsta3"):
			return 1;
			break;
		case joaat("barrage"):
			return 2;
			break;
		case joaat("khanjali"):
			return 1;
			break;
		case joaat("nightshark"):
			return 1;
		case joaat("dukes2"):
			return 2;
			break;
		case joaat("speedo4"):
			return 1;
		case joaat("pounder2"):
			return 1;
		case joaat("mule4"):
			return 1;
		case joaat("kuruma2"):
			return 1;
		case joaat("tezeract"):
			return 1;
		case joaat("pariah"):
			return 1;
		case joaat("revolter"):
			return 1;
		case joaat("taipan"):
			return 1;
		case joaat("tyrant"):
			return 1;
		case joaat("sc1"):
			return 1;
		case joaat("xa21"):
			return 1;
		case joaat("contender"):
			return 1;
		case joaat("turismo2"):
			return 1;
		case joaat("turismor"):
			return 1;
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
			return 2;
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 2;
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			return 2;
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			return 2;
		case joaat("issi3"):
			return 2;
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			return 2;
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			return 2;
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
			return 2;
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return 2;
		case joaat("ratloader2"):
			return 1;
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
			return 2;
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			return 2;
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			return 2;
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 2;
		case joaat("kamacho"):
			return 2;
		case joaat("menacer"):
			return 1;
		case joaat("thrax"):
			return 1;
		case joaat("schwarzer"):
			return 1;
		case joaat("rancherxl"):
			return 1;
		case joaat("sultan"):
			return 1;
		case joaat("asterope"):
			return 1;
		case joaat("kuruma"):
			return 1;
		case joaat("youga2"):
			return 1;
		case joaat("regina"):
			return 1;
		case joaat("emperor"):
			return 2;
		case joaat("taxi"):
			return 1;
		case joaat("dilettante"):
			return 1;
		case joaat("mesa"):
			return 1;
		case joaat("rumpo"):
			return 1;
		case joaat("tailgater"):
			return 1;
		case joaat("furia"):
			return 1;
		case joaat("kanjo"):
			return 2;
		case joaat("sentinel3"):
			return 2;
		case joaat("retinue2"):
			return 2;
		case joaat("yosemite2"):
			return 2;
		case joaat("sugoi"):
			return 3;
		case joaat("jugular"):
			return 2;
		case joaat("sultan2"):
			return 2;
		case joaat("gauntlet3"):
			return 2;
		case joaat("ellie"):
			return 2;
		case joaat("komoda"):
			return 2;
		case joaat("manchez"):
			return 4;
		case joaat("stryder"):
			return 4;
		case joaat("defiler"):
			return 4;
		case joaat("lectro"):
			return 4;
		case joaat("zhaba"):
			return 2;
		case joaat("vagrant"):
			return 2;
		case joaat("outlaw"):
			return 2;
		case joaat("everon"):
			return 2;
		case joaat("stockade"):
			return 3;
		case joaat("burrito2"):
			return 1;
		case joaat("boxville"):
			return 1;
		case joaat("brioso2"):
			return 1;
		case joaat("gauntlet4"):
			return 1;
		case joaat("jester3"):
			return 1;
		case joaat("peyote2"):
			return 1;
		case joaat("elegy"):
			return 1;
		case joaat("hustler"):
			return 1;
		case joaat("faction3"):
			return 1;
		case joaat("italigto"):
			return 1;
		case joaat("hellion"):
			return 1;
		case joaat("manana2"):
			return 1;
		case joaat("slamvan3"):
			return 1;
		case joaat("flashgt"):
			return 1;
		case joaat("baller5"):
			return 1;
		case joaat("tailgater2"):
			return 2;
		case joaat("remus"):
			return 1;
		case joaat("trailerlarge"):
			return 1;
		case joaat("italigtb2"):
			return 1;
		case joaat("superd"):
			return 1;
		case joaat("patriot2"):
			return 2;
		case joaat("bagger"):
			return 1;
		case joaat("jubilee"):
			return 1;
		case joaat("primo2"):
			return 5;
		case joaat("baller3"):
			return 2;
		case joaat("dominator8"):
			return 1;
		case joaat("champion"):
			return 1;
	}
	return -1;
}

var func_865(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9B758
{
	var uVar0;
	MISC::SET_BITS_IN_RANGE(&uVar0, 24, 31, iParam0);
	MISC::SET_BITS_IN_RANGE(&uVar0, 16, 23, iParam1);
	MISC::SET_BITS_IN_RANGE(&uVar0, 8, 15, iParam2);
	MISC::SET_BITS_IN_RANGE(&uVar0, 0, 7, iParam3);
	return uVar0;
}

void func_866(int iParam0, int iParam1)//Position - 0xC5701
{
	__LIB_1__.func_597(3812, iParam0, iParam1, 1, 0);
}

int func_867(int iParam0)//Position - 0xC5B0A
{
	if (__LIB_0__.func_839())
	{
		switch (iParam0)
		{
			case 5:
				return 5;
			case 4:
				return 15;
			case 3:
				return 20;
			}
		default:
	}
	return 0;
}

var func_868(int iParam0)//Position - 0xC5B41
{
	if (iParam0 < 32)
	{
		return (BitTest(Global_1965646, iParam0) && BitTest(Global_1965648, iParam0));
	}
	return (BitTest(Global_1965647, (iParam0 - 32)) && BitTest(Global_1965649, (iParam0 - 32)));
}

bool func_869(bool bParam0)//Position - 0xC5CBC
{
	if (bParam0 < 32)
	{
		return BitTest(Global_1965646, bParam0);
	}
	return BitTest(Global_1965647, (bParam0 - 32));
}

bool func_870(bool bParam0)//Position - 0xC5CE2
{
	if (bParam0 < 32)
	{
		return BitTest(Global_1965644, bParam0);
	}
	return BitTest(Global_1965645, (bParam0 - 32));
}

bool func_871(bool bParam0)//Position - 0xC5E90
{
	if (bParam0 < 32)
	{
		return BitTest(Global_1965628, bParam0);
	}
	return BitTest(Global_1965629, (bParam0 - 32));
}

bool func_872(bool bParam0)//Position - 0xC5EB6
{
	if (bParam0 < 32)
	{
		return BitTest(Global_1965626, bParam0);
	}
	return BitTest(Global_1965627, (bParam0 - 32));
}

void func_873(bool bParam0)//Position - 0xC5EDC
{
	if (!__LIB_0__.func_493())
	{
		return;
	}
	if (!BitTest(Global_1965625, bParam0))
	{
		MISC::SET_BIT(&Global_1965625, bParam0);
	}
}

bool func_874()//Position - 0xC7F6D
{
	if (Global_4718592.f_107227 == 26)
	{
		return 1;
	}
	return Global_4718592.f_169021 != 0;
}

bool func_875()//Position - 0xC7FD1
{
	return Global_4718592.f_107227 == 27;
}

void func_876(int iParam0, int iParam1)//Position - 0xC8173
{
	int iVar0;
	iVar0 = __LIB_1__.func_596(iParam0, __LIB_1__.func_443(iParam1));
	iVar0++;
	__LIB_1__.func_634(iParam0, iVar0, iParam1);
}

void func_877(var uParam0, bool bParam1)//Position - 0xCE2DA
{
	if (bParam1)
	{
		CAM::DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE();
	}
	if ((*uParam0 != 0 && uParam0->f_1 != 0) && uParam0->f_2 != 0)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(*uParam0, uParam0->f_1, 255, 255, 255, 255);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_2, 255, 255, 255, 255, 0);
	}
}

var func_878()//Position - 0xCF436
{
	return BitTest(Global_2788035, 3);
}

int func_879(int iParam0)//Position - 0xD5A0B
{
	switch (iParam0)
	{
		case 13:
			return 1;
			break;
	}
	return 0;
}

char* func_880(int iParam0)//Position - 0xD5E51
{
	switch (iParam0)
	{
		case 0:
			return "TIMER_WORLDTIME" /* GXT: WORLD RECORD */;
			break;
		case 1:
			return "FRIEND_WORLDTIME" /* GXT: FRIEND RECORD */;
			break;
		case 2:
			return "CREW_WORLDTIME" /* GXT: CREW RECORD */;
			break;
		case 3:
			return "PERS_WORLDTIME" /* GXT: PERSONAL RECORD */;
			break;
	}
	return "";
}

int func_881(int iParam0)//Position - 0xD68DB
{
	return MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
}

int func_882(int iParam0)//Position - 0xD68EB
{
	return MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
}

int func_883(int iParam0)//Position - 0xD68FC
{
	return MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
}

int func_884(int iParam0)//Position - 0xD690D
{
	return MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
}

float func_885(char* sParam0, int iParam1)//Position - 0xD695B
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

int func_886(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD69AE
{
	return ((((iParam0 * 16777216) + (iParam1 * 65536)) + iParam2 * 256) + iParam3);
}

float func_887(float fParam0, int iParam1)//Position - 0xD6B30
{
	var uVar0;
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

int func_888(int iParam0)//Position - 0xD79A2
{
	switch (iParam0)
	{
		case 3:
		case 8:
			return 1;
			break;
		case 0:
			if (Global_4718592.f_614 == 1)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_889(int iParam0, bool bParam1)//Position - 0xD8CE8
{
	if (!bParam1 && iParam0 > 0)
	{
		return "SPLIT_BEHIND" /* GXT: +~a~ */;
	}
	return "STRING";
}

bool func_890()//Position - 0xD8D0A
{
	return BitTest(Global_4718592.f_16, 29);
}

int func_891(int iParam0)//Position - 0xD8DF4
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
		case 14:
			return 1;
			break;
	}
	return 0;
}

int func_892(int iParam0)//Position - 0xD8E49
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 40:
		case 42:
			return 1;
		default:
	}
	return 0;
}

int func_893(int iParam0)//Position - 0xD8E7B
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 26:
		case 11:
			return 1;
		default:
	}
	return 0;
}

bool func_894()//Position - 0xDFD9A
{
	return BitTest(Global_1958711, 20);
}

void func_895()//Position - 0xE0340
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 5);
}

void func_896()//Position - 0xEE33F
{
	Global_2714762.f_740 = 1;
}

void func_897()//Position - 0xEF1CA
{
	Global_2714762.f_882 = 1;
}

void func_898(int* iParam0, bool bParam1)//Position - 0xEF99F
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 3);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 3);
	}
}

void func_899(int iParam0)//Position - 0xEFB67
{
	MISC::SET_BIT(&Global_2712055, iParam0);
}

int func_900(int iParam0, int iParam1)//Position - 0xF8EF7
{
	return Global_2689235[iParam0 /*453*/].f_124.f_6[iParam1 /*2*/];
}

int func_901(int iParam0)//Position - 0xF8F45
{
	if (iParam0 == Global_262145.f_9050 /* Tunable: ROOT_ID_HASH_THE_FLECCA_JOB */)
	{
		return Global_262145.f_8180 /* Tunable: HEIST_SETUP_COST_FLEECA */;
	}
	else if (iParam0 == Global_262145.f_9062 /* Tunable: ROOT_ID_HASH_THE_HUMANE_LABS_RAID */)
	{
		return Global_262145.f_8181 /* Tunable: HEIST_SETUP_COST_HUMANE_LABS */;
	}
	else if (iParam0 == Global_262145.f_9055 /* Tunable: ROOT_ID_HASH_THE_PRISON_BREAK */)
	{
		return Global_262145.f_8182 /* Tunable: HEIST_SETUP_COST_PRISON_BREAK */;
	}
	else if (iParam0 == Global_262145.f_9068 /* Tunable: ROOT_ID_HASH_SERIES_A_FUNDING */)
	{
		return Global_262145.f_8183 /* Tunable: HEIST_SETUP_COST_SERIES_A */;
	}
	else if (iParam0 == Global_262145.f_9074 /* Tunable: ROOT_ID_HASH_THE_PACIFIC_STANDARD_JOB */ || iParam0 == Global_262145.f_9075 /* Tunable: ROOT_ID_HASH_THE_PACIFIC_STANDARD_JOB2 */)
	{
		return Global_262145.f_8184 /* Tunable: HEIST_SETUP_COST_PACIFIC_STANDARD */;
	}
	return 100000;
}

int func_902(int iParam0)//Position - 0xFD0C2
{
	switch (iParam0)
	{
		case joaat("AMMO_PISTOL"):
			return 0;
		case joaat("AMMO_SMG"):
			return 1;
		case joaat("AMMO_RIFLE"):
			return 2;
		case joaat("AMMO_MG"):
			return 3;
		case joaat("AMMO_SHOTGUN"):
			return 4;
		case joaat("AMMO_RUBBERGUN"):
			return 5;
		case joaat("AMMO_STUNGUN"):
			return 6;
		case joaat("AMMO_SNIPER"):
			return 7;
		case joaat("AMMO_SNIPER_REMOTE"):
			return 8;
		case joaat("AMMO_MINIGUN"):
			return 9;
		case joaat("AMMO_GRENADELAUNCHER"):
			return 10;
		case joaat("AMMO_GRENADELAUNCHER_SMOKE"):
			return 11;
		case joaat("AMMO_RPG"):
			return 12;
		case joaat("AMMO_STICKYBOMB"):
			return 13;
		case joaat("AMMO_SMOKEGRENADE"):
			return 14;
		case joaat("AMMO_FIREWORK"):
			return 15;
		case joaat("AMMO_FLAREGUN"):
			return 16;
		case joaat("AMMO_HOMINGLAUNCHER"):
			return 17;
		case joaat("AMMO_PROXMINE"):
			return 18;
		default:
	}
	return -1;
}

int func_903(int iParam0)//Position - 0x108B42
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			iVar0 = 12;
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			iVar0 = 12;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ")))
				{
					iVar0 = 8;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					iVar0 = 8;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 8;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER")))
				{
					iVar0 = 12;
				}
			}
			break;
		case joaat("WEAPON_SMG"):
			iVar0 = 30;
			break;
		case joaat("WEAPON_SMG_MK2"):
			iVar0 = 30;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER")))
				{
					iVar0 = 30;
				}
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			iVar0 = 6;
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			iVar0 = 6;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = 4;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE")))
				{
					iVar0 = 4;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ")))
				{
					iVar0 = 4;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 4;
				}
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			iVar0 = 100;
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			iVar0 = 100;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = 80;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ")))
				{
					iVar0 = 80;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 80;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER")))
				{
					iVar0 = 100;
				}
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			iVar0 = 30;
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			iVar0 = 30;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER")))
				{
					iVar0 = 30;
				}
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			iVar0 = 30;
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			iVar0 = 30;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER")))
				{
					iVar0 = 30;
				}
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar0 = 8;
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			iVar0 = 8;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = 8;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE")))
				{
					iVar0 = 8;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT")))
				{
					iVar0 = 8;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 8;
				}
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			iVar0 = 30;
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			iVar0 = 30;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER")))
				{
					iVar0 = 30;
				}
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			iVar0 = 12;
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			iVar0 = 12;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ")))
				{
					iVar0 = 6;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					iVar0 = 6;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 6;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER")))
				{
					iVar0 = 6;
				}
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			iVar0 = 16;
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			iVar0 = 16;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = 5;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ")))
				{
					iVar0 = 5;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 5;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER")))
				{
					iVar0 = 8;
				}
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			iVar0 = 12;
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			iVar0 = 12;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ")))
				{
					iVar0 = 6;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT")))
				{
					iVar0 = 6;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 6;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER")))
				{
					iVar0 = 6;
				}
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			iVar0 = 30;
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			iVar0 = 30;
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY")))
				{
					iVar0 = 20;
				}
				if (__LIB_12__.func_595(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER")))
				{
					iVar0 = 30;
				}
			}
			break;
	}
	return iVar0;
}

int func_904(int iParam0)//Position - 0x109A83
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER")))
			{
				return 1;
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (((WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ")) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"))) || WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_905(int iParam0)//Position - 0x10A689
{
	switch (iParam0)
	{
		case 0:
			return "WT_BA_0" /* GXT: Super Light Armor */;
			break;
		case 1:
			return "WT_BA_1" /* GXT: Light Armor */;
			break;
		case 2:
			return "WT_BA_2" /* GXT: Standard Armor */;
			break;
		case 3:
			return "WT_BA_3" /* GXT: Heavy Armor */;
			break;
		case 4:
			return "WT_BA_4" /* GXT: Super Heavy Armor */;
			break;
	}
	return "";
}

void func_906(float fParam0)//Position - 0x10B218
{
	Global_23150.f_5472 = fParam0;
}

var func_907()//Position - 0x10B3DA
{
	return BitTest(Global_4718592.f_12, 10);
}

bool func_908()//Position - 0x10BC8D
{
	return BitTest(Global_1048576.f_10, 23);
}

int func_909()//Position - 0x10D027
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
	{
		return 1;
	}
	return 0;
}

void func_910(int iParam0, bool bParam1)//Position - 0x10D56B
{
	HUD::SET_TEXT_FONT(*iParam0);
	if (!iParam0->f_8 == 0f || !iParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(iParam0->f_8, iParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(iParam0->f_1, iParam0->f_2);
	HUD::SET_TEXT_COLOUR(iParam0->f_3, iParam0->f_4, iParam0->f_5, iParam0->f_6);
	switch (iParam0->f_7)
	{
		case 0:
			break;
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_911(var uParam0, int iParam1)//Position - 0x10D604
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.485f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 5;
}

void func_912(var uParam0, int iParam1)//Position - 0x10DABF
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_913(var uParam0, int iParam1)//Position - 0x10DAE7
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_914(var uParam0, int iParam1)//Position - 0x10DB1E
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_915(var uParam0, var uParam1, float fParam2, float fParam3)//Position - 0x10DB6A
{
	*uParam0 = uParam1;
	uParam0->f_1 = (fParam2 + fParam3);
}

void func_916(var uParam0, int iParam1, bool bParam2)//Position - 0x10E1D7
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_917(var uParam0)//Position - 0x10E39B
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

int func_918(int iParam0, int iParam1)//Position - 0x10E4D2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	fVar1 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	fVar2 = __LIB_0__.func_820(0.2845f);
	fVar3 = __LIB_0__.func_819((0.23f + (SYSTEM::TO_FLOAT(iParam0) * 0.03749976f)));
	fVar4 = (fVar2 - (0.2091f / 2f));
	fVar6 = (fVar4 + 0.2091f);
	fVar5 = (fVar3 - (0.034722f / 2f));
	fVar7 = (fVar5 + 0.034722f);
	if (((fVar0 >= fVar4 && fVar0 <= fVar6) && fVar1 >= fVar5) && fVar1 <= fVar7)
	{
		if (iParam1 == 1)
		{
			GRAPHICS::DRAW_RECT(fVar2, fVar3, 0.2091f, 0.034722f, 255, 255, 255, 32, false);
		}
		return 1;
	}
	return 0;
}

int func_919(var uParam0)//Position - 0x10E873
{
	return 0;
	return uParam0->f_504;
}

void func_920(var uParam0, int iParam1)//Position - 0x10ECB4
{
	*uParam0 = 6;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.8f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

bool func_921()//Position - 0x10EDD1
{
	return Global_1836595;
}

bool func_922()//Position - 0x11194F
{
	return Global_4718592.f_176802 != 0;
}

bool func_923()//Position - 0x111985
{
	return BitTest(Global_4718592.f_13, 10);
}

bool func_924()//Position - 0x111996
{
	return BitTest(Global_4718592.f_13, 23);
}

int func_925(int iParam0)//Position - 0x1119ED
{
	switch (iParam0)
	{
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			return 1;
		default:
	}
	return 0;
}

bool func_926()//Position - 0x111A3D
{
	return BitTest(Global_4718592.f_16, 7);
}

bool func_927()//Position - 0x111A4D
{
	return BitTest(Global_4718592.f_15, 30);
}

bool func_928()//Position - 0x111A5E
{
	return BitTest(Global_4718592.f_20, 3);
}

int func_929()//Position - 0x111A84
{
	return BitTest(Global_4718592.f_20, 21);
	return 0;
}

void func_930(float fParam0, float fParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x11252D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

char* func_931(bool bParam0)//Position - 0x112558
{
	if (bParam0)
	{
		return "VEH_NAME_DOTS" /* GXT: ~a~... */;
	}
	return "STRING";
}

struct<16> func_932(char* sParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x112571
{
	struct<16> Var0;
	struct<16> Var1;
	int iVar2;
	if (iParam3 == 0)
	{
		iVar2 = HUD::GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(sParam0);
		StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0), 64);
	}
	else
	{
		iVar2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_4718592.f_116531));
		Var0 = { Global_4718592.f_116531 };
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (iParam2 >= iVar2)
		{
			StringCopy(&Var1, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var0, 0, iVar2), 64);
			*bParam1 = 0;
		}
		else
		{
			StringCopy(&Var1, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var0, 0, iParam2), 64);
			*bParam1 = 1;
		}
		if (*bParam1)
		{
			return Var1;
		}
	}
	return Var0;
}

int func_933()//Position - 0x1125FD
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 10:
		case 9:
		case 7:
		case 8:
		case 6:
		case 3:
		case 1:
		case 5:
		case 12:
			return 6;
			break;
	}
	return 11;
}

void func_934(float fParam0, float fParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x11268C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

int func_935()//Position - 0x1126B7
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 7:
		case 6:
		case 3:
		case 1:
		case 5:
			return 6;
			break;
		case 10:
		case 9:
		case 8:
		case 12:
			return 4;
			break;
	}
	return 11;
}

struct<4> func_936(char* sParam0)//Position - 0x11270E
{
	struct<4> Var0;
	StringCopy(&Var0, sParam0, 16);
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "BRUISER" /* GXT: Apocalypse Bruiser */))
	{
		StringCopy(&Var0, "BRUISER_S" /* GXT: Bruiser */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "BRUTUS" /* GXT: Apocalypse Brutus */))
	{
		StringCopy(&Var0, "BRUTUS_S" /* GXT: Brutus */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "CERBERUS" /* GXT: Apocalypse Cerberus */))
	{
		StringCopy(&Var0, "CERBERUS_S" /* GXT: Cerberus */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "DEATHBIKE" /* GXT: Apocalypse Deathbike */))
	{
		StringCopy(&Var0, "DEATHBIKE_S" /* GXT: Deathbike */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "DOMINATOR4" /* GXT: Apocalypse Dominator */))
	{
		StringCopy(&Var0, "DOMINATOR4_S" /* GXT: Dominator */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "IMPALER2" /* GXT: Apocalypse Impaler */))
	{
		StringCopy(&Var0, "IMPALER2_S" /* GXT: Impaler */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "IMPERATOR" /* GXT: Apocalypse Imperator */))
	{
		StringCopy(&Var0, "IMPERATOR_S" /* GXT: Imperator */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "ISSI4" /* GXT: Apocalypse Issi */))
	{
		StringCopy(&Var0, "ISSI4_S" /* GXT: Issi */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "MONSTER3" /* GXT: Apocalypse Sasquatch */))
	{
		StringCopy(&Var0, "MONSTER3_S" /* GXT: Sasquatch */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "SCARAB" /* GXT: Apocalypse Scarab */))
	{
		StringCopy(&Var0, "SCARAB_S" /* GXT: Scarab */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "SLAMVAN4" /* GXT: Apocalypse Slamvan */))
	{
		StringCopy(&Var0, "SLAMVAN4_S" /* GXT: Slamvan */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "ZR380" /* GXT: Apocalypse ZR380 */))
	{
		StringCopy(&Var0, "ZR380_S" /* GXT: ZR380 */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "BRUISER2" /* GXT: Future Shock Bruiser */))
	{
		StringCopy(&Var0, "BRUISER_S" /* GXT: Bruiser */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "BRUTUS2" /* GXT: Future Shock Brutus */))
	{
		StringCopy(&Var0, "BRUTUS_S" /* GXT: Brutus */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "CERBERUS2" /* GXT: Future Shock Cerberus */))
	{
		StringCopy(&Var0, "CERBERUS_S" /* GXT: Cerberus */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "DEATHBIKE2" /* GXT: Future Shock Deathbike */))
	{
		StringCopy(&Var0, "DEATHBIKE_S" /* GXT: Deathbike */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "DOMINATOR5" /* GXT: Future Shock Dominator */))
	{
		StringCopy(&Var0, "DOMINATOR4_S" /* GXT: Dominator */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "IMPALER3" /* GXT: Future Shock Impaler */))
	{
		StringCopy(&Var0, "IMPALER2_S" /* GXT: Impaler */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "IMPERATOR2" /* GXT: Future Shock Imperator */))
	{
		StringCopy(&Var0, "IMPERATOR_S" /* GXT: Imperator */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "ISSI5" /* GXT: Future Shock Issi */))
	{
		StringCopy(&Var0, "ISSI4_S" /* GXT: Issi */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "MONSTER4" /* GXT: Future Shock Sasquatch */))
	{
		StringCopy(&Var0, "MONSTER3_S" /* GXT: Sasquatch */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "SCARAB2" /* GXT: Future Shock Scarab */))
	{
		StringCopy(&Var0, "SCARAB_S" /* GXT: Scarab */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "SLAMVAN5" /* GXT: Future Shock Slamvan */))
	{
		StringCopy(&Var0, "SLAMVAN4_S" /* GXT: Slamvan */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "ZR3802" /* GXT: Future Shock ZR380 */))
	{
		StringCopy(&Var0, "ZR380_S" /* GXT: ZR380 */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "BRUISER3" /* GXT: Nightmare Bruiser */))
	{
		StringCopy(&Var0, "BRUISER_S" /* GXT: Bruiser */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "BRUTUS3" /* GXT: Nightmare Brutus */))
	{
		StringCopy(&Var0, "BRUTUS_S" /* GXT: Brutus */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "CERBERUS3" /* GXT: Nightmare Cerberus */))
	{
		StringCopy(&Var0, "CERBERUS_S" /* GXT: Cerberus */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "DEATHBIKE3" /* GXT: Nightmare Deathbike */))
	{
		StringCopy(&Var0, "DEATHBIKE_S" /* GXT: Deathbike */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "DOMINATOR6" /* GXT: Nightmare Dominator */))
	{
		StringCopy(&Var0, "DOMINATOR4_S" /* GXT: Dominator */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "IMPALER4" /* GXT: Nightmare Impaler */))
	{
		StringCopy(&Var0, "IMPALER2_S" /* GXT: Impaler */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "IMPERATOR3" /* GXT: Nightmare Imperator */))
	{
		StringCopy(&Var0, "IMPERATOR_S" /* GXT: Imperator */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "ISSI6" /* GXT: Nightmare Issi */))
	{
		StringCopy(&Var0, "ISSI4_S" /* GXT: Issi */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "MONSTER5" /* GXT: Nightmare Sasquatch */))
	{
		StringCopy(&Var0, "MONSTER3_S" /* GXT: Sasquatch */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "SCARAB3" /* GXT: Nightmare Scarab */))
	{
		StringCopy(&Var0, "SCARAB_S" /* GXT: Scarab */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "SLAMVAN6" /* GXT: Nightmare Slamvan */))
	{
		StringCopy(&Var0, "SLAMVAN4_S" /* GXT: Slamvan */, 16);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "ZR3803" /* GXT: Nightmare ZR380 */))
	{
		StringCopy(&Var0, "ZR380_S" /* GXT: ZR380 */, 16);
	}
	return Var0;
}

int func_937(int iParam0)//Position - 0x112A5C
{
	if (__LIB_0__.func_493())
	{
		return BitTest(Global_1057166.f_127, iParam0);
	}
	return 0;
}

void func_938(var uParam0, int iParam1)//Position - 0x112B13
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 4;
}

float func_939(int iParam0, int iParam1, bool bParam2)//Position - 0x112B5E
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return 0.427f;
					}
					else
					{
						return 0.427f;
					}
					break;
				case 2:
					if (bParam2)
					{
						return 0.494f;
					}
					else
					{
						return 0.517f;
					}
					break;
				case 3:
					if (bParam2)
					{
						return 0.563f;
					}
					else
					{
						return 0.6f;
					}
					break;
				case 4:
					if (bParam2)
					{
						return 0.634f;
					}
					else
					{
						return 0.668f;
					}
					break;
				case 5:
					if (bParam2)
					{
						return 0.709f;
					}
					else
					{
						return 0.735f;
					}
					break;
				case 6:
					if (bParam2)
					{
						return 0.798f;
					}
					else
					{
						return 0.801f;
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return 0.436f;
					}
					else
					{
						return 0.427f;
					}
					break;
				case 2:
					if (bParam2)
					{
						return 0.535f;
					}
					else
					{
						return 0.523f;
					}
					break;
				case 3:
					if (bParam2)
					{
						return 0.629f;
					}
					else
					{
						return 0.617f;
					}
					break;
				case 4:
					if (bParam2)
					{
						return 0.704f;
					}
					else
					{
						return 0.704f;
					}
					break;
				case 5:
					if (bParam2)
					{
						return 0.798f;
					}
					else
					{
						return 0.801f;
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return 0.436f;
					}
					else
					{
						return 0.427f;
					}
					break;
				case 2:
					if (bParam2)
					{
						return 0.547f;
					}
					else
					{
						return 0.539f;
					}
					break;
				case 3:
					if (bParam2)
					{
						return 0.666f;
					}
					else
					{
						return 0.659f;
					}
					break;
				case 4:
					if (bParam2)
					{
						return 0.798f;
					}
					else
					{
						return 0.801f;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return 0.45f;
					}
					else
					{
						return 0.427f;
					}
					break;
				case 2:
					if (bParam2)
					{
						return 0.624f;
					}
					else
					{
						return 0.602f;
					}
					break;
				case 3:
					if (bParam2)
					{
						return 0.798f;
					}
					else
					{
						return 0.801f;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 0.427f;
				case 2:
					return 0.801f;
				default:
			}
			break;
		case 1:
			return 0.801f;
			break;
	}
	return 0.801f;
}

int func_940()//Position - 0x1141D1
{
	if ((BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 10) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 11)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 25))
	{
		return 1;
	}
	return 0;
}

bool func_941(int iParam0)//Position - 0x114245
{
	return iParam0 == 19;
}

bool func_942()//Position - 0x114252
{
	return __LIB_0__.func_770(Global_4718592.f_168757);
}

int func_943(var* uParam0)//Position - 0x1147E2
{
	struct<31> Var0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var0, 35, uParam0);
			return Var0.f_30;
		}
	}
	return -1;
}

int func_944(var* uParam0)//Position - 0x114816
{
	struct<21> Var0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var0, 35, uParam0);
			if (Var0.f_20 == 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_945(var uParam0, int iParam1)//Position - 0x114AC2
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		uParam0->f_7 = 255;
	}
}

bool func_946(int iParam0)//Position - 0x115358
{
	return iParam0 == 59;
}

void func_947(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x115493
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_505)
	{
		if (iParam1 == PLAYER::PLAYER_ID())
		{
			iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
			*uParam2 = iParam3;
			uParam0->f_505 = 1;
			iVar0++;
			iVar1 = (iVar0 * 2 - 1);
			uParam0->f_509 = iVar1;
		}
		else if (iParam3 >= (iParam4 - 1))
		{
			*uParam2 = 0;
			uParam0->f_505 = 1;
		}
	}
}

int func_948(var uParam0)//Position - 0x116F4C
{
	return (Global_1836352 - uParam0->f_509);
}

int func_949()//Position - 0x1173E9
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 10:
		case 9:
		case 8:
		case 12:
			return 16;
			break;
	}
	return 40;
}

void func_950(var uParam0, int iParam1)//Position - 0x11741C
{
	*uParam0 = 6;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.8f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 7;
}

int func_951()//Position - 0x117DE3
{
	int iVar0;
	var uVar1;
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
	if (iVar0 <= 1024)
	{
		return 1;
	}
	return 0;
}

var func_952()//Position - 0x11A0FC
{
	return BitTest(Global_4718592.f_30, 0);
}

bool func_953(int iParam0)//Position - 0x11A10C
{
	return iParam0 == 71;
}

bool func_954()//Position - 0x11A119
{
	return BitTest(Global_4718592.f_32, 11);
}

int func_955()//Position - 0x11A134
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_1__.func_192(&(Global_4718592.f_116819))))
	{
		return 1;
	}
	return 0;
}

void func_956(var uParam0)//Position - 0x11A921
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*9*/] = 0f;
		(uParam0[iVar0 /*9*/])->f_1 = 0f;
		(uParam0[iVar0 /*9*/])->f_2 = 0f;
		(uParam0[iVar0 /*9*/])->f_3 = 0f;
		(uParam0[iVar0 /*9*/])->f_4 = 0;
		(uParam0[iVar0 /*9*/])->f_5 = 0;
		(uParam0[iVar0 /*9*/])->f_6 = 0;
		(uParam0[iVar0 /*9*/])->f_7 = 0;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_957()//Position - 0x11A98C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1836159[iVar0 /*6*/])))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Global_1836159[iVar0 /*6*/]), false);
		}
		iVar0++;
	}
}

void func_958(var uParam0)//Position - 0x11AC44
{
	*uParam0++;
}

bool func_959(var uParam0, int iParam1)//Position - 0x11AC54
{
	return ((iParam1 >= 0 && iParam1 <= 31) && BitTest(uParam0, iParam1));
}

void func_960(var uParam0)//Position - 0x11AC94
{
	*uParam0 = (*uParam0 - 1);
}

void func_961()//Position - 0x121DD6
{
	HUD::DRAW_FRONTEND_BACKGROUND_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
}

void func_962(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x127362
{
	int iVar0;
	iVar0 = 16;
	if ((iParam1 + iParam2) > iVar0)
	{
		uParam0->f_504 = 1;
	}
	else
	{
		uParam0->f_504 = 0;
	}
	if (bParam3)
	{
		iVar0 = (iVar0 - 1);
	}
	if (Global_1836352 > iVar0)
	{
		Global_1836355 = (Global_1836352 - iVar0);
	}
	else
	{
		Global_1836355 = 0;
	}
	Global_1836354 = (Global_1836352 - Global_1836355);
	uParam0->f_507 = iParam2;
}

void func_963(bool bParam0)//Position - 0x12844D
{
	if (bParam0)
	{
		AUDIO::SET_AUDIO_FLAG("PlayMenuMusic", true);
	}
	else if (bParam0 == 0)
	{
		AUDIO::SET_AUDIO_FLAG("PlayMenuMusic", false);
	}
}

int func_964()//Position - 0x128477
{
	if (__LIB_0__.func_493())
	{
		return 0;
	}
	return 1;
}

int func_965(int iParam0, int iParam1)//Position - 0x1284B9
{
	bool bVar0;
	int iVar1;
	if (Global_1836387 == -1)
	{
		Global_1836387 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
	}
	if (Global_1836387 > 16)
	{
		bVar0 = true;
	}
	switch (iParam0)
	{
		case 1:
			if (bVar0)
			{
				iVar1 = 30;
			}
			else
			{
				iVar1 = 15;
			}
			break;
		case 2:
			if (bVar0)
			{
				iVar1 = 25;
			}
			else
			{
				iVar1 = 12;
			}
			break;
		case 3:
			if (bVar0)
			{
				iVar1 = 22;
			}
			else
			{
				iVar1 = 10;
			}
			break;
		case 4:
			if (bVar0)
			{
				iVar1 = 20;
			}
			else
			{
				iVar1 = 8;
			}
			break;
		case 5:
			if (bVar0)
			{
				iVar1 = 18;
			}
			else
			{
				iVar1 = 7;
			}
			break;
		case 6:
			if (bVar0)
			{
				iVar1 = 16;
			}
			else
			{
				iVar1 = 6;
			}
			break;
		case 7:
			if (bVar0)
			{
				iVar1 = 14;
			}
			else
			{
				iVar1 = 5;
			}
			break;
		case 8:
			if (bVar0)
			{
				iVar1 = 13;
			}
			else
			{
				iVar1 = 4;
			}
			break;
		case 9:
			if (bVar0)
			{
				iVar1 = 12;
			}
			else
			{
				iVar1 = 3;
			}
			break;
		case 10:
			if (bVar0)
			{
				iVar1 = 11;
			}
			else
			{
				iVar1 = 2;
			}
			break;
		case 11:
			if (bVar0)
			{
				iVar1 = 10;
			}
			else
			{
				iVar1 = 1;
			}
			break;
		case 12:
			if (bVar0)
			{
				iVar1 = 9;
			}
			else
			{
				iVar1 = 1;
			}
			break;
		case 13:
			if (bVar0)
			{
				iVar1 = 8;
			}
			else
			{
				iVar1 = 1;
			}
			break;
		case 14:
			if (bVar0)
			{
				iVar1 = 7;
			}
			else
			{
				iVar1 = 1;
			}
			break;
		case 15:
			if (bVar0)
			{
				iVar1 = 6;
			}
			else
			{
				iVar1 = 1;
			}
			break;
		case 16:
			if (bVar0)
			{
				iVar1 = 5;
			}
			else
			{
				iVar1 = 1;
			}
			break;
		case 17:
			if (bVar0)
			{
				iVar1 = 4;
			}
			else
			{
				iVar1 = 1;
			}
			break;
		case 18:
			if (bVar0)
			{
				iVar1 = 3;
			}
			else
			{
				iVar1 = 1;
			}
			break;
		case 19:
			if (bVar0)
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			break;
		case 20:
			iVar1 = 1;
			break;
		case 21:
			iVar1 = 1;
			break;
		case 22:
			iVar1 = 1;
			break;
		case 23:
			iVar1 = 1;
			break;
		case 24:
			iVar1 = 1;
			break;
		case 25:
			iVar1 = 1;
			break;
		case 26:
			iVar1 = 1;
			break;
		case 27:
			iVar1 = 0;
			break;
		case 28:
			iVar1 = 0;
			break;
		case 29:
			iVar1 = 0;
			break;
		case 30:
			iVar1 = 0;
			break;
		default:
			iVar1 = 0;
			break;
	}
	if (iParam1 != -1)
	{
		if (iParam1 == Global_1853348[iParam1 /*834*/].f_11.f_5)
		{
			iVar1++;
		}
	}
	return iVar1;
}

void func_966(int iParam0)//Position - 0x13F9FC
{
	Global_1966049.f_1 = iParam0;
}

int func_967(int iParam0)//Position - 0x14213D
{
	switch (iParam0)
	{
		case 30:
		case 31:
		case 32:
		case 57:
		case 58:
		case 59:
		case 64:
		case 65:
		case 66:
			return 1;
		default:
	}
	return 0;
}

int func_968(int iParam0)//Position - 0x142187
{
	switch (iParam0)
	{
		case 26:
		case 27:
		case 28:
		case 29:
		case 53:
		case 54:
		case 55:
		case 56:
		case 60:
		case 61:
		case 62:
		case 63:
		case 80:
		case 100:
		case 81:
		case 101:
		case 82:
		case 102:
		case 83:
		case 103:
			return 1;
		default:
	}
	return 0;
}

int func_969(int iParam0)//Position - 0x142213
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 1:
		case 4:
		case 2:
		case 5:
			switch (Global_4718592.f_162543)
			{
				case 3:
					return joaat("xs_prop_arena_trophy_single_01a");
				case 1:
					return joaat("xs_prop_arena_trophy_single_01b");
				case 2:
					return joaat("xs_prop_arena_trophy_single_01c");
				default:
			}
			break;
		case 84:
		case 85:
		case 86:
			switch (Global_4718592.f_162543)
			{
				case 1:
					return joaat("xs_prop_arena_trophy_double_01a");
				case 2:
					return joaat("xs_prop_arena_trophy_double_01b");
				case 3:
					return joaat("xs_prop_arena_trophy_double_01c");
				default:
			}
			break;
	}
	return joaat("xs_prop_arena_trophy_single_01a");
}

int func_970(int iParam0)//Position - 0x1422D5
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 84:
		case 85:
		case 86:
			return 1;
		default:
	}
	return 0;
}

int func_971(int iParam0)//Position - 0x14231F
{
	switch (iParam0)
	{
		case 128:
			return 1;
		default:
	}
	return 0;
}

int func_972(int iParam0)//Position - 0x142339
{
	switch (iParam0)
	{
		case 127:
			return 1;
		default:
	}
	return 0;
}

int func_973(int iParam0)//Position - 0x142353
{
	switch (iParam0)
	{
		case 107:
		case 108:
			return 1;
		default:
	}
	return 0;
}

Vector3 func_974()//Position - 0x142425
{
	return 2957.0017f, -3866.8635f, 140.0026f;
}

bool func_975(var uParam0)//Position - 0x1428B4
{
	return *uParam0 == 1;
}

int func_976(int iParam0)//Position - 0x142B42
{
	switch (iParam0)
	{
		case 80:
		case 81:
		case 82:
		case 83:
		case 100:
		case 101:
		case 102:
		case 103:
		case 84:
		case 85:
		case 86:
		case 104:
		case 105:
		case 106:
			return 1;
		default:
	}
	return 0;
}

int func_977(int iParam0)//Position - 0x142BAA
{
	switch (iParam0)
	{
		case 107:
		case 108:
		case 127:
		case 128:
			return 1;
		default:
	}
	return 0;
}

void func_978(int iParam0, int iParam1, int iParam2)//Position - 0x142C18
{
	float fVar0;
	int iVar1;
	if (iParam0 > iParam1)
	{
		iParam0 = iParam1;
	}
	else if (iParam0 < (iParam1 - iParam2))
	{
		iParam0 = (iParam1 - iParam2);
	}
	fVar0 = (SYSTEM::TO_FLOAT((iParam0 - (iParam1 - iParam2))) / SYSTEM::TO_FLOAT((iParam1 - (iParam1 - iParam2))));
	iVar1 = SYSTEM::ROUND((fVar0 * 255f));
	if (iVar1 != 0)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, 0, 0, 0, iVar1, false);
	}
}

void func_979(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0x142C89
{
	if (Param1.f_2 == Param3.f_2 || Param1.f_2 == Param2.f_2)
	{
	}
	if (CAM::IS_SCREEN_FADED_OUT() && uParam0->f_1209 >= 10)
	{
		CAM::DO_SCREEN_FADE_IN(100);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_2, 255, 255, 255, 255, 0);
}

void func_980(var uParam0)//Position - 0x142CD5
{
	uParam0->f_453 = 0;
	Global_1574971 = 0;
	__LIB_0__.func_579(&(uParam0->f_454));
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
}

void func_981(var uParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x142D79
{
	if (__LIB_0__.func_175())
	{
		iParam3 = 1;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_982(var uParam0)//Position - 0x142E47
{
	int iVar0;
	int iVar1;
	iVar1 = uParam0->f_419;
	iVar0 = SYSTEM::CEIL(uParam0->f_448);
	iVar0 *= 1000;
	if (uParam0->f_419 < iVar0)
	{
		uParam0->f_419 = (iVar0 - 1500);
	}
	if (uParam0->f_419 < iVar1)
	{
		uParam0->f_419 = iVar1;
	}
	if (iVar0 < uParam0->f_419)
	{
		uParam0->f_1196 = 1;
	}
}

int func_983(int iParam0)//Position - 0x1430E6
{
	int iVar0;
	struct<13> Var1;
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (MISC::IS_PS3_VERSION() || __LIB_0__.func_52())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__.func_53())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { __LIB_1__.func_267(iParam0) };
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<4> func_984(int iParam0)//Position - 0x1433C4
{
	struct<4> Var0;
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

int func_985(int iParam0)//Position - 0x1433F6
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_828.f_1;
}

void func_986(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x143476
{
	if (bParam3)
	{
		sParam2 = "HUD_COLOUR_BLACK" /* GXT: Black */;
	}
	if (__LIB_0__.func_175())
	{
		if (Global_2715699.f_3479)
		{
			sParam2 = "HUD_COLOUR_HARK";
		}
	}
	__LIB_12__.func_743(uParam0, sParam1);
	HUD::RESET_GLOBAL_ACTIONSCRIPT_FLAG(10);
	if (*uParam0 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CREATE_STAT_WALL");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (uParam0->f_1 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "CREATE_STAT_WALL");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (uParam0->f_2 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "CREATE_STAT_WALL");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

float func_987()//Position - 0x143931
{
	if (__LIB_0__.func_764())
	{
		return 45f;
	}
	if (__LIB_0__.func_493())
	{
		return 51.4505f;
	}
	return 39f;
}

Vector3 func_988()//Position - 0x14395C
{
	if (__LIB_0__.func_764())
	{
		return 0.1831f, 0.0223f, -99.9511f;
	}
	if (__LIB_0__.func_493())
	{
		return 6.1166f, -0.1429f, 44.3658f;
	}
	return 2.5875f, -0.2f, 21.82f;
}

Vector3 func_989()//Position - 0x1439A5
{
	if (__LIB_0__.func_764())
	{
		return 4519.4204f, -4486.819f, 4.1106f;
	}
	if (__LIB_0__.func_493())
	{
		return 2968.0618f, -3879.5862f, 141.3566f;
	}
	return 416.0675f, -981.35f, -99.0175f;
}

int func_990(var uParam0, int iParam1)//Position - 0x1439EE
{
	if (PED::IS_PED_INJURED(uParam0->f_23[1]) && iParam1 >= 0)
	{
		if (Global_2689235[iParam1 /*453*/].f_257 == 2)
		{
			if (((Global_2689235[iParam1 /*453*/].f_258 == 1 || Global_2689235[iParam1 /*453*/].f_258 == 3) || Global_2689235[iParam1 /*453*/].f_258 == 2) || Global_2689235[iParam1 /*453*/].f_258 == 4)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_991(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x143AE1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_FLASH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("HUD_COLOUR_WHITE" /* GXT: White */);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("HUD_COLOUR_WHITE" /* GXT: White */);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("HUD_COLOUR_WHITE" /* GXT: White */);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_992(bool bParam0)//Position - 0x14648D
{
	switch (bParam0)
	{
		case 0:
			return 48f;
		case 1:
			return 48f;
		default:
	}
	return 48f;
}

Vector3 func_993(bool bParam0)//Position - 0x1464BD
{
	switch (bParam0)
	{
		case 0:
			return 2967.0283f, -3875.9526f, 139.9974f;
		case 1:
			return 2967.0283f, -3875.9526f, 139.9974f;
		default:
	}
	return 0f, 0f, 0f;
}

float func_994()//Position - 0x1465D1
{
	return 43.504f;
}

int func_995()//Position - 0x1465DE
{
	int iVar0;
	switch (Global_4718592.f_162543)
	{
		case 1:
			return joaat("xs_prop_arena_podium_01a");
		case 2:
			return joaat("xs_prop_arena_podium_02a");
		case 3:
			iVar0 = joaat("xs_prop_arena_podium_03a");
			if (iVar0 != 0)
			{
				return iVar0;
			}
			break;
	}
	return joaat("xs_prop_arena_podium_01a");
}

float func_996()//Position - 0x146A43
{
	return 52.07f;
}

Vector3 func_997()//Position - 0x146A50
{
	return 4525.934f, -4487.33f, 3.74f;
}

float func_998(int iParam0)//Position - 0x146A67
{
	switch (iParam0)
	{
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return 9.8f;
		default:
	}
	return 323.6979f;
}

Vector3 func_999(int iParam0)//Position - 0x146A95
{
	switch (iParam0)
	{
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return 2823.8596f, -3909.3079f, 139.0008f;
		default:
	}
	if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 2824.3691f, -3904.2183f, 139.4829f;
	}
	return 2824.3691f, -3904.2183f, 139.0015f;
}
