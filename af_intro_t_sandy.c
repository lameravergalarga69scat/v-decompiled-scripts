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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 15;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var1;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	__LIB_0__::func_694(29);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_34();
	}
	iLocal_37 = 0;
	__LIB_16__::func_329(&uLocal_38);
	__LIB_16__::func_328(&uLocal_38, 1701.7803f, 3225.1482f, 40.0202f);
	__LIB_16__::func_328(&uLocal_38, 1678.909f, 3287.6023f, 39.9648f);
	__LIB_16__::func_328(&uLocal_38, 1710.4376f, 3326.4993f, 40.1797f);
	__LIB_16__::func_328(&uLocal_38, 1738.8787f, 3335.25f, 40.1493f);
	__LIB_16__::func_328(&uLocal_38, 1768.3873f, 3312.1008f, 40.2875f);
	__LIB_16__::func_328(&uLocal_38, 1819.2413f, 3225.4495f, 42.9019f);
	__LIB_16__::func_327(&uLocal_38);
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (func_23())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var1 = { 1749.71f, 3267.83f, 40.24f };
						if (__LIB_0__::func_874(Var0, Var1, 75f))
						{
							if (__LIB_16__::func_325(&uLocal_38, Var0))
							{
								if (Var0.f_2 > 39f && Var0.f_2 < 43f)
								{
									iLocal_37 = 1;
								}
								else
								{
									SYSTEM::WAIT(100);
								}
							}
							else
							{
								SYSTEM::WAIT(100);
							}
						}
						else
						{
							SYSTEM::WAIT(1500);
						}
					}
				}
				else
				{
					SYSTEM::WAIT(1500);
				}
				break;
			case 1:
				func_2();
				break;
			case 2:
				__LIB_0__::func_693(29);
				func_34();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_2()//Position - 0x230
{
	__LIB_17__::func_110(joaat("TEXT_TREV_LOST_HANGER"));
	__LIB_0__::func_697("SHI_T_SANDY_2" /* GXT: Planes you purchase from websites or that you land inside will be stored at ~HUD_COLOUR_TREVOR~~BLIP_HANGAR~~s~~n~Ground vehicles too large for a garage will also be stored here. */, 0, 0, -1, 10000, 7, 0, 0, 0);
	SYSTEM::WAIT(0);
	__LIB_0__::func_697("SHI_T_SANDY_3" /* GXT: Helicopters purchased from websites or that you land on the helipad will be stored at ~HUD_COLOUR_TREVOR~~BLIP_HELIPAD~ */, 0, 0, -1, 10000, 7, 0, 0, 0);
	iLocal_37 = 2;
}

int func_23()//Position - 0xDA9
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_683() != 2)
	{
		return 0;
	}
	if (Global_31962)
	{
		return 0;
	}
	if (Global_63148)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			return 0;
		}
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (__LIB_0__::func_217())
	{
		return 0;
	}
	return 1;
}

void func_34()//Position - 0x10C6
{
	BRAIN::REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	SCRIPT::TERMINATE_THIS_THREAD();
}

